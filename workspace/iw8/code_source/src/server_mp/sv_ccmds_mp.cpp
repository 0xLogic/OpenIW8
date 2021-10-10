/*
==============
SV_CmdsMP_RequestMapRestart
==============
*/

void __fastcall SV_CmdsMP_RequestMapRestart(bool loadScripts, bool migrate)
{
  ?SV_CmdsMP_RequestMapRestart@@YAX_N0@Z(loadScripts, migrate);
}

/*
==============
SV_CmdsMP_StartMapForFrontEnd
==============
*/

void __fastcall SV_CmdsMP_StartMapForFrontEnd(const char *map, const char *gameType)
{
  ?SV_CmdsMP_StartMapForFrontEnd@@YAXPEBD0@Z(map, gameType);
}

/*
==============
SV_HostMigrationStart_Internal
==============
*/

void __fastcall SV_HostMigrationStart_Internal(int flags)
{
  ?SV_HostMigrationStart_Internal@@YAXH@Z(flags);
}

/*
==============
SV_CmdsMP_CheckLoadGame
==============
*/

int __fastcall SV_CmdsMP_CheckLoadGame()
{
  return ?SV_CmdsMP_CheckLoadGame@@YAHXZ();
}

/*
==============
SvGameModeAppMP::DevCmdSetup
==============
*/

void __fastcall SvGameModeAppMP::DevCmdSetup(SvGameModeAppMP *this, const bool forceSignIn)
{
  ?DevCmdSetup@SvGameModeAppMP@@AEAAX_N@Z(this, forceSignIn);
}

/*
==============
SV_CmdsMP_KickClientNum
==============
*/

void __fastcall SV_CmdsMP_KickClientNum(int clientNum, const char *reason, bool kickedForInactivity)
{
  ?SV_CmdsMP_KickClientNum@@YAXHPEBD_N@Z(clientNum, reason, kickedForInactivity);
}

/*
==============
SvGameModeAppMP::DevJoinCmd
==============
*/

void __fastcall SvGameModeAppMP::DevJoinCmd(SvGameModeAppMP *this, const char *hostname)
{
  ?DevJoinCmd@SvGameModeAppMP@@UEAAXPEBD@Z(this, hostname);
}

/*
==============
SV_HostMigrationLoad_f
==============
*/

void SV_HostMigrationLoad_f(void)
{
  ?SV_HostMigrationLoad_f@@YAXXZ();
}

/*
==============
SvGameModeAppMP::DevmapDediCmd
==============
*/

void __fastcall SvGameModeAppMP::DevmapDediCmd(SvGameModeAppMP *this)
{
  ?DevmapDediCmd@SvGameModeAppMP@@UEAAXXZ(this);
}

/*
==============
SvCmdsNetListener::LocalAddressUpdated
==============
*/

bool __fastcall SvCmdsNetListener::LocalAddressUpdated(SvCmdsNetListener *this, const XNADDR *oldXnaddr, const XNADDR *newXnaddr)
{
  return ?LocalAddressUpdated@SvCmdsNetListener@@UEAA_NAEBUXNADDR@@0@Z(this, oldXnaddr, newXnaddr);
}

/*
==============
SvCmdsNetListener::IsLocalAddressUpdating
==============
*/

bool __fastcall SvCmdsNetListener::IsLocalAddressUpdating(SvCmdsNetListener *this)
{
  return ?IsLocalAddressUpdating@SvCmdsNetListener@@UEBA_NXZ(this);
}

/*
==============
SV_HostMigrationSave_f
==============
*/

void SV_HostMigrationSave_f(void)
{
  ?SV_HostMigrationSave_f@@YAXXZ();
}

/*
==============
SV_GetPlayerByName
==============
*/

SvClientMP *__fastcall SV_GetPlayerByName()
{
  return ?SV_GetPlayerByName@@YAPEAVSvClientMP@@XZ();
}

/*
==============
SV_CmdsMP_SendMatchData
==============
*/

void __fastcall SV_CmdsMP_SendMatchData(LocalClientNum_t localClientNum)
{
  ?SV_CmdsMP_SendMatchData@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
SV_CmdsMP_StartMapForParty
==============
*/

void __fastcall SV_CmdsMP_StartMapForParty(const char *map, const char *gameType, unsigned int clientCount, unsigned int agentCount, unsigned int frameDuration, unsigned __int16 weaponMapLargeRuntimeSize, bool hardcoreMode, bool mapIsPreloaded, bool migrate)
{
  ?SV_CmdsMP_StartMapForParty@@YAXPEBD0IIIG_N11@Z(map, gameType, clientCount, agentCount, frameDuration, weaponMapLargeRuntimeSize, hardcoreMode, mapIsPreloaded, migrate);
}

/*
==============
SV_CmdsMP_FastRestart
==============
*/

void __fastcall SV_CmdsMP_FastRestart(LocalClientNum_t localClientNum)
{
  ?SV_CmdsMP_FastRestart@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
SV_CmdsMP_AddOperatorCommands
==============
*/

void SV_CmdsMP_AddOperatorCommands(void)
{
  ?SV_CmdsMP_AddOperatorCommands@@YAXXZ();
}

/*
==============
SvCmdsNetListener::NetworkStarted
==============
*/

void __fastcall SvCmdsNetListener::NetworkStarted(SvCmdsNetListener *this, bool success, NetMode mode)
{
  ?NetworkStarted@SvCmdsNetListener@@UEAAX_NW4NetMode@@@Z(this, success, mode);
}

/*
==============
SV_CmdsMP_RemoveOperatorCommands
==============
*/

void SV_CmdsMP_RemoveOperatorCommands(void)
{
  ?SV_CmdsMP_RemoveOperatorCommands@@YAXXZ();
}

/*
==============
SV_CmdsMP_ClearLoadGame
==============
*/

void SV_CmdsMP_ClearLoadGame(void)
{
  ?SV_CmdsMP_ClearLoadGame@@YAXXZ();
}

/*
==============
SvGameModeAppMP::DevmapCmd
==============
*/

void __fastcall SvGameModeAppMP::DevmapCmd(SvGameModeAppMP *this)
{
  ?DevmapCmd@SvGameModeAppMP@@UEAAXXZ(this);
}

/*
==============
SvCmdsNetListener::NetworkStarted
==============
*/
void SvCmdsNetListener::NetworkStarted(SvCmdsNetListener *this, bool success, NetMode mode)
{
  int ControllerFromClient; 

  if ( success )
  {
    if ( g_partyData.inParty )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      PartyHost_StartPartyComplete(&g_partyData, ControllerFromClient);
    }
  }
}

/*
==============
SvCmdsNetListener::LocalAddressUpdated
==============
*/
bool SvCmdsNetListener::LocalAddressUpdated(SvCmdsNetListener *this, const XNADDR *oldXnaddr, const XNADDR *newXnaddr)
{
  XNADDR *Address; 

  if ( g_partyData.inParty )
  {
    Address = XSESSION_INFO::GetAddress(&g_partyData.session->dyn.sessionInfo);
    XNADDR::operator=(Address, newXnaddr);
  }
  return 0;
}

/*
==============
SvCmdsNetListener::IsLocalAddressUpdating
==============
*/
bool SvCmdsNetListener::IsLocalAddressUpdating(SvCmdsNetListener *this)
{
  return 0;
}

/*
==============
SV_HostMigrationSave_f
==============
*/
void SV_HostMigrationSave_f(void)
{
  unsigned __int8 *ArchiveBuffer; 
  unsigned int outSize; 

  if ( Com_IsGameLocalServerRunningOrLoading() )
  {
    SV_SnapWorkersMP_WaitSnapshotArchiveAddWorkers();
    ArchiveBuffer = SV_SnapshotMP_GetArchiveBuffer(&outSize);
    Migration_Init(ArchiveBuffer, outSize);
    G_ActiveMP_PrepareMigration();
    SV_MigrationSave();
    s_svCmdsMP_devMigrateSave = 1;
  }
  else
  {
    Com_Printf(15, "No server running.\n");
    s_svCmdsMP_devMigrateSave = 0;
  }
}

/*
==============
SV_HostMigrationLoad_f
==============
*/
void SV_HostMigrationLoad_f(void)
{
  if ( s_svCmdsMP_devMigrateSave )
  {
    s_svCmdsMP_devMigrateSave = 0;
    if ( Com_IsGameLocalServerRunningOrLoading() )
    {
      s_svCmdsMP_devMigrateLoad = 1;
      SV_CmdsMP_RequestMapRestart(1, 1);
    }
    else
    {
      s_svCmdsMP_migrate = 1;
    }
  }
  else
  {
    Com_PrintError(16, "SV_HostMigrationLoad_f: Must call 'HostMigrationSave' first\n");
  }
}

/*
==============
SV_CmdMP_Map_f
==============
*/
void SV_CmdMP_Map_f()
{
  const char *Gametype; 
  const dvar_t *v1; 
  const char *v2; 
  bool hardcoreMode; 
  SvGameModeApplication *ActiveServerApplication; 
  unsigned int unsignedInt; 
  SvGameModeApplication *v6; 
  unsigned int AgentCount; 
  unsigned int FrameDuration; 
  unsigned __int16 weaponMapLargeRuntimeSize; 
  const dvar_t *v10; 
  unsigned __int8 v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  char buffer[64]; 

  SV_Cmd_ArgvBuffer(1, buffer, 0x40ui64);
  I_strlwr(buffer);
  if ( SV_Cmds_CheckMapCmdValid(buffer) )
  {
    Com_FrontEndScene_ShutdownAndDisable();
    s_svCmdsMP_migrate = 0;
    Gametype = Party_GetGametype();
    v1 = DVARBOOL_ui_hardcore;
    v2 = Gametype;
    if ( !DVARBOOL_ui_hardcore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_hardcore") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    hardcoreMode = v1->current.enabled;
    if ( Com_IsAnyLocalServerRunning() )
    {
      ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
      unsignedInt = SvClient::ms_clientCount;
      v6 = ActiveServerApplication;
      AgentCount = SV_GameMP_GetAgentCount();
      FrameDuration = SvGameModeApplication::GetFrameDuration(v6);
      weaponMapLargeRuntimeSize = BgWeaponMap::GetRuntimeSize();
    }
    else
    {
      v10 = DVARINT_ui_maxclients;
      if ( !DVARINT_ui_maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_maxclients") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      unsignedInt = v10->current.unsignedInt;
      v11 = SV_AgentSetupAgentCount(v2);
      v12 = DVARINT_ui_serverFrameDuration;
      AgentCount = v11;
      if ( !DVARINT_ui_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_serverFrameDuration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      FrameDuration = v12->current.unsignedInt;
      v13 = DVARINT_ui_weaponMapLargeRuntimeSize;
      if ( !DVARINT_ui_weaponMapLargeRuntimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_weaponMapLargeRuntimeSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      weaponMapLargeRuntimeSize = truncate_cast<unsigned short,int>(v13->current.integer);
    }
    SV_CmdsMP_StartMapCmd(buffer, v2, unsignedInt, AgentCount, FrameDuration, weaponMapLargeRuntimeSize, hardcoreMode, 0, 1, 0);
    SV_WaitServer();
    Com_CheckError();
  }
  else
  {
    Com_SetLocalizedErrorMessage("Can't load the requested map. See console for details", "Map Error");
  }
}

/*
==============
SV_CmdsMP_FastRestart_f
==============
*/
void SV_CmdsMP_FastRestart_f()
{
  SV_CmdsMP_RequestMapRestart(0, 0);
}

/*
==============
SV_CmdsMP_MapRestart_f
==============
*/
void SV_CmdsMP_MapRestart_f()
{
  SV_CmdsMP_RequestMapRestart(1, 0);
}

/*
==============
SV_Drop_f
==============
*/
void SV_Drop_f()
{
  int v0; 
  const char *v1; 
  const char *reason; 
  SvClientMP *PlayerByName; 
  const char *v4; 
  signed int i; 
  SvClientMP *MpClient; 

  if ( Com_IsGameLocalServerRunning() )
  {
    v0 = SV_Cmd_Argc();
    if ( v0 >= 2 )
    {
      if ( v0 == 3 )
        reason = SV_Cmd_Argv(2);
      else
        reason = "EXE/PLAYERKICKED";
      PlayerByName = SV_GetPlayerByName();
      if ( PlayerByName )
      {
        SV_CmdsMP_KickClient(PlayerByName, NULL, 0, NULL, reason, 0);
      }
      else
      {
        v4 = SV_Cmd_Argv(1);
        if ( !I_stricmp(v4, "all") )
        {
          for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
          {
            if ( SvClient::GetCommonClient(i)->state )
            {
              MpClient = SV_Client_GetMpClient(i);
              SV_CmdsMP_KickClient(MpClient, NULL, 0, NULL, reason, 0);
            }
          }
        }
      }
    }
    else
    {
      v1 = SV_Cmd_Argv(0);
      Com_Printf(15, "Usage: %s \"player name\" <optional reason>\n%s all = kick everyone\n", v1, v1);
    }
  }
  else
  {
    Com_Printf(15, "Server is not running.\n");
  }
}

/*
==============
SV_DropNum_f
==============
*/
void SV_DropNum_f()
{
  int v0; 
  const char *v1; 
  const char *reason; 
  SvClientMP *PlayerByNum; 

  if ( Com_IsGameLocalServerRunning() )
  {
    v0 = SV_Cmd_Argc();
    if ( v0 >= 2 )
    {
      if ( v0 == 3 )
        reason = SV_Cmd_Argv(2);
      else
        reason = "EXE/PLAYERKICKED";
      PlayerByNum = SV_GetPlayerByNum();
      if ( PlayerByNum )
        SV_CmdsMP_KickClient(PlayerByNum, NULL, 0, NULL, reason, 0);
    }
    else
    {
      v1 = SV_Cmd_Argv(0);
      Com_Printf(15, "Usage: %s <client number> <optional reason>\n", v1);
    }
  }
  else
  {
    Com_Printf(15, "Server is not running.\n");
  }
}

/*
==============
SV_DevDropClient_f
==============
*/
void SV_DevDropClient_f()
{
  int v0; 
  const char *v1; 
  const char *v2; 
  SvClientMP *PlayerByNum; 

  if ( Com_IsGameLocalServerRunning() )
  {
    v0 = SV_Cmd_Argc();
    if ( v0 >= 2 )
    {
      if ( v0 == 3 )
        v2 = SV_Cmd_Argv(2);
      else
        v2 = "EXE/TRANSMITERROR_DEV_DROP";
      PlayerByNum = SV_GetPlayerByNum();
      if ( PlayerByNum )
        SV_ClientMP_DropClient(PlayerByNum, v2, 1);
    }
    else
    {
      v1 = SV_Cmd_Argv(0);
      Com_Printf(0, "Usage: %s <client number> <optional reason>\n", v1);
    }
  }
  else
  {
    Com_Printf(0, "Server is not running.\n");
  }
}

/*
==============
SV_Status_f
==============
*/
void SV_Status_f()
{
  const char *MapName; 
  signed int i; 
  SvClient *CommonClient; 
  unsigned int ClientScore; 
  int v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const char *String; 
  __int64 v10; 
  __int64 v11; 

  if ( Com_IsGameLocalServerRunning() )
  {
    MapName = SV_Game_GetMapName();
    Com_Printf(15, "map: %s\n", MapName);
    Com_Printf(15, "num score ping guid                             name            lastmsg address               rate\n");
    Com_Printf(15, "--- ----- ---- -------------------------------- --------------- ------- --------------------- -----\n");
    for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
    {
      if ( SvClient::GetCommonClient(i)->state )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(i);
        Com_Printf(15, "%3i ", (unsigned int)i);
        ClientScore = G_MainMP_GetClientScore(i);
        Com_Printf(15, "%5i ", ClientScore);
        if ( SvClient::GetCommonClient(i)->state == CS_CONNECTED )
        {
          Com_Printf(15, "CNCT ");
        }
        else if ( SvClient::GetCommonClient(i)->state == CS_ZOMBIE )
        {
          Com_Printf(15, "ZMBI ");
        }
        else
        {
          v4 = (int)CommonClient[783].__vftable;
          v5 = 9999i64;
          if ( v4 < 9999 )
            v5 = (unsigned int)v4;
          Com_Printf(15, "%4i ", v5);
        }
        Com_Printf(15, "%32s ", (const char *)&CommonClient[854].lastUsercmd.sightedClientsMask.data[2]);
        Com_Printf(15, "%s^7", &CommonClient[4].lastUsercmd.selectedLoc[1]);
        v6 = 16 - I_DrawStrlen(&CommonClient[4].lastUsercmd.selectedLoc[1]);
        if ( v6 > 0 )
        {
          v7 = (unsigned int)v6;
          do
          {
            Com_Printf(15, " ");
            --v7;
          }
          while ( v7 );
        }
        PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
        Com_Printf(15, "%7i ", (unsigned int)(PersistentGlobalsMP->time - *(_DWORD *)&CommonClient[782].lastUsercmd.scriptedMeleeTarget));
        String = NetConnection::GetString((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]);
        Com_Printf(15, (const char *)&queryFormat, String);
        v10 = -1i64;
        do
          ++v10;
        while ( String[v10] );
        if ( 22 - (int)v10 > 0 )
        {
          v11 = (unsigned int)(22 - v10);
          do
          {
            Com_Printf(15, " ");
            --v11;
          }
          while ( v11 );
        }
        Com_Printf(15, " %5i", CommonClient[854].lastUsercmd.gunYOfs);
        Com_Printf(15, "\n");
      }
    }
    Com_Printf(15, "\n");
  }
  else
  {
    Com_Printf(15, "Server is not running.\n");
  }
}

/*
==============
SV_Serverinfo_f
==============
*/
void SV_Serverinfo_f()
{
  const char *DvarInfoString; 

  Com_Printf(15, "Server info settings:\n");
  DvarInfoString = SV_MainMP_GetDvarInfoString(1024);
  Dvar_InfoPrint(DvarInfoString);
}

/*
==============
SV_DumpUser_f
==============
*/
void SV_DumpUser_f()
{
  SvClientMP *PlayerByName; 

  if ( Com_IsGameLocalServerRunning() )
  {
    if ( SV_Cmd_Argc() == 2 )
    {
      PlayerByName = SV_GetPlayerByName();
      if ( PlayerByName )
      {
        Com_Printf(15, "userinfo\n");
        Com_Printf(15, "--------\n");
        Dvar_InfoPrint(PlayerByName->userinfo);
      }
    }
    else
    {
      Com_Printf(15, "Usage: dumpuser \"user name\"\n");
    }
  }
  else
  {
    Com_Printf(15, "Server is not running.\n");
  }
}

/*
==============
SV_KillServer_f
==============
*/
void SV_KillServer_f()
{
  Com_FrontEndScene_ShutdownAndDisable();
  Com_Shutdown("EXE/SERVERKILLED");
  Com_AssetLoadUI();
}

/*
==============
SV_DemoMP_LoadGame_f
==============
*/
void SV_DemoMP_LoadGame_f()
{
  unsigned __int64 v0; 
  const char *v1; 
  const char *v2; 
  const char *v3; 
  signed __int64 v4; 
  __int64 v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  char v9; 
  __int64 v10; 
  char *i; 
  bool v12; 
  SaveHeader header; 

  v0 = (unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64;
  v1 = SV_Cmd_Argv(1);
  v2 = v1;
  if ( !*v1 )
  {
    Com_Printf(0, "[Loadgame] You must specify a savegame to load\n");
    return;
  }
  v3 = "save";
  v4 = v1 - "save";
  v5 = 4i64;
  do
  {
    v6 = v3[v4];
    v7 = v5;
    v8 = *v3++;
    --v5;
    if ( !v7 )
      break;
    if ( v6 != v8 )
      goto LABEL_9;
  }
  while ( v6 );
  v9 = v2[4];
  if ( v9 == 47 || v9 == 92 )
  {
    Core_strcpy_truncate((char *)(v0 + 896), 0x40ui64, v2);
    v10 = -1i64;
    do
      ++v10;
    while ( *(_BYTE *)(v0 + 896 + v10) );
    goto LABEL_13;
  }
LABEL_9:
  LODWORD(v10) = Com_sprintf_truncate((char *)(v0 + 896), 0x40ui64, "save/%s", v2);
  if ( (int)v10 < 0 )
  {
    Com_Printf(0, "[Loadgame] Filename 'save/%s' is too long", v2);
    return;
  }
LABEL_13:
  if ( (int)v10 < 4 || I_stricmp((const char *)(v0 + 896 + (int)v10 - 4), ".svg") )
    I_strcat((char *)(v0 + 896), 0x40ui64, ".svg");
  for ( i = strchr_0((const char *)(v0 + 896), 92); i; i = strchr_0(i, 92) )
    *i = 47;
  if ( Com_BuildPlayerProfilePath(sv_save_filename, 64, (const char *)(v0 + 896)) <= 0 )
  {
    Com_Printf(0, "[Loadgame] Filename '%s' is too long\n", (const char *)(v0 + 896));
    sv_save_filename[0] = 0;
    return;
  }
  if ( Com_IsGameLocalServerRunning() )
  {
    if ( !sv_save_filename[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 1253, ASSERT_TYPE_ASSERT, "( filename[0] )", (const char *)&queryFormat, "filename[0]") )
      __debugbreak();
    MemCard_SetUseDevSaveArea(1);
    v12 = G_SaveMemoryMP_ReadHeader(sv_save_filename, (SaveHeader *)((unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64));
    MemCard_SetUseDevSaveArea(0);
    if ( !v12 )
    {
      Com_Printf(0, "[Loadgame] Save file %s is invalid.\n", (const char *)(v0 + 896));
      sv_save_filename[0] = 0;
      return;
    }
  }
  else
  {
    if ( !SV_CmdsMP_CheckForSaveGame() )
    {
      Com_Printf(0, "[Loadgame] Save file %s is invalid.\n", (const char *)(v0 + 896));
      return;
    }
    Com_FrontEndScene_OnMatchStartRequest();
    SV_InitMP_ShutdownForDemo();
  }
  s_svCmdsMP_mapRestart = 0;
  s_svCmdsMP_loadScripts = 0;
  sv_demo.nextLevelplaying = 1;
  sv_demo.nextLevelSave = NULL;
}

/*
==============
Scr_PrintScriptStrings_f
==============
*/

char Scr_PrintScriptStrings_f()
{
  return j_SL_DumpStringInfo();
}

/*
==============
SV_SetPerk_f
==============
*/
void SV_SetPerk_f()
{
  SvClientMP *PlayerByName; 
  const char *v1; 
  unsigned int PerkCodeIndexForName; 
  unsigned int v3; 
  signed int i; 
  SvClient *CommonClient; 
  playerState_s *PlayerstateForClientNum; 
  clientState_t *ClientState; 
  __int64 v8; 
  unsigned int v9; 

  PlayerByName = SV_GetPlayerByName();
  if ( PlayerByName )
  {
    v1 = SV_Cmd_Argv(2);
    PerkCodeIndexForName = BG_GetPerkCodeIndexForName(v1);
    if ( PerkCodeIndexForName > 0x43 )
    {
      Com_DPrintf(0, "Unknown perk: %s\n", v1);
    }
    else
    {
      v3 = SvClient::ms_clientCount;
      for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(i);
        v3 = SvClient::ms_clientCount;
        if ( CommonClient == PlayerByName )
          break;
      }
      if ( i >= v3 )
      {
        v9 = v3;
        LODWORD(v8) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 2191, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( SvClient::GetClientCount() )", "i doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      PlayerstateForClientNum = SV_Game_GetPlayerstateForClientNum(i);
      BG_SetPerk(&PlayerstateForClientNum->perks, PerkCodeIndexForName);
      ClientState = G_MainMP_GetClientState(i);
      BG_SetPerk(&ClientState->perks, PerkCodeIndexForName);
    }
  }
}

/*
==============
SV_HostMigrationDevDrop_f
==============
*/
void SV_HostMigrationDevDrop_f()
{
  if ( Com_IsGameLocalServerRunning() )
    SV_Migration_DropInvalidClients();
  else
    Com_Printf(15, "No server running.\n");
}

/*
==============
SV_HostMigrationStart_f
==============
*/
void SV_HostMigrationStart_f()
{
  int MigrationDefaultFlags; 
  int v1; 

  if ( SV_Cmd_Argc() <= 1 )
    MigrationDefaultFlags = SV_GetMigrationDefaultFlags();
  else
    MigrationDefaultFlags = Cmd_ArgInt(1);
  v1 = MigrationDefaultFlags;
  if ( Com_IsAnyLocalServerRunning() )
  {
    if ( SV_IsMigrating() )
      Com_Printf(15, "Host migration already in progress.\n");
    else
      SV_MigrationStart(NULL, v1);
  }
  else
  {
    Com_Printf(15, "No server running.\n");
  }
}

/*
==============
SV_HostMigrationStart_Backout_f
==============
*/
void SV_HostMigrationStart_Backout_f()
{
  int v0; 

  v0 = SV_GetMigrationDefaultFlags() | 2;
  if ( Com_IsAnyLocalServerRunning() )
  {
    if ( SV_IsMigrating() )
      Com_Printf(15, "Host migration already in progress.\n");
    else
      SV_MigrationStart(NULL, v0);
  }
  else
  {
    Com_Printf(15, "No server running.\n");
  }
}

/*
==============
SV_GetMatchData_f
==============
*/

void __fastcall SV_GetMatchData_f(double _XMM0_8)
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const DDLDef *Asset; 
  DDLState state; 
  DDLContext ddlContext; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.arrayIndex = -1;
  if ( Com_IsGameLocalServerRunning() )
  {
    SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
    if ( SvGameGlobalsMP->matchDataDef[0] )
    {
      Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->matchDataDef);
      if ( Com_DDL_NavigateFromCmd(Asset, SV_Cmd_Argc, SV_Cmd_Argv, &state, 0) )
      {
        Com_DDL_CreateContext(SvGameGlobalsMP->matchData, 2048, Asset, &ddlContext, NULL, NULL);
        Com_Printf(25, "TODO: need to add DDL_PrintLookup\n");
      }
    }
    else
    {
      Com_Printf(15, "No match data definition.\n");
    }
  }
  else
  {
    Com_Printf(15, "No server running.\n");
  }
}

/*
==============
SV_DumpMatchData_f
==============
*/
void SV_DumpMatchData_f()
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const DDLDef *Asset; 
  DDLContext ddlContext; 

  if ( Com_IsGameLocalServerRunning() )
  {
    SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
    if ( SvGameGlobalsMP->matchDataDef[0] )
    {
      Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->matchDataDef);
      DDL_CreateContext(SvGameGlobalsMP->matchData, 2048, Asset, &ddlContext, NULL, NULL);
      Com_DDL_WriteAsText(&ddlContext, "DDL_MatchData.txt", (const char *)&queryFormat.fmt + 3);
    }
    else
    {
      Com_Printf(15, "No match data definition.\n");
    }
  }
  else
  {
    Com_Printf(15, "No server running.\n");
  }
}

/*
==============
SV_GetClientMatchData_f
==============
*/

void __fastcall SV_GetClientMatchData_f(double _XMM0_8)
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const DDLDef *Asset; 
  DDLState state; 
  DDLContext ddlContext; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.arrayIndex = -1;
  SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
  if ( SvGameGlobalsMP->clientMatchData.def[0] )
  {
    Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->clientMatchData.def);
    if ( Com_DDL_NavigateFromCmd(Asset, SV_Cmd_Argc, SV_Cmd_Argv, &state, 0) )
    {
      if ( DDL_StateIsLeaf(&state) )
      {
        Com_DDL_CreateContext(SvGameGlobalsMP->clientMatchData.data, 24000, Asset, &ddlContext, NULL, NULL);
        Com_DDL_PrintState(&state, &ddlContext);
      }
      else
      {
        Com_Printf(16, "Too many arguments\n");
      }
    }
  }
  else
  {
    Com_Printf(15, "No match data definition.\n");
  }
}

/*
==============
SV_DumpClientMatchData_f
==============
*/
void SV_DumpClientMatchData_f()
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const DDLDef *Asset; 
  DDLContext ddlContext; 

  SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
  if ( SvGameGlobalsMP->clientMatchData.def[0] )
  {
    Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->clientMatchData.def);
    Com_DDL_CreateContext(SvGameGlobalsMP->clientMatchData.data, 24000, Asset, &ddlContext, NULL, NULL);
    Com_DDL_WriteAsText(&ddlContext, "DDL_DumpClientMatchData_SV.txt", (const char *)&queryFormat.fmt + 3);
  }
  else
  {
    Com_Printf(15, "No match data definition.\n");
  }
}

/*
==============
SV_GetCodcasterClientMatchData_f
==============
*/

void __fastcall SV_GetCodcasterClientMatchData_f(double _XMM0_8)
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const DDLDef *Asset; 
  DDLState state; 
  DDLContext ddlContext; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.arrayIndex = -1;
  SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
  if ( SvGameGlobalsMP->codcasterClientMatchData.def[0] )
  {
    Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->codcasterClientMatchData.def);
    if ( Com_DDL_NavigateFromCmd(Asset, SV_Cmd_Argc, SV_Cmd_Argv, &state, 0) )
    {
      if ( DDL_StateIsLeaf(&state) )
      {
        Com_DDL_CreateContext(SvGameGlobalsMP->codcasterClientMatchData.data, 1614, Asset, &ddlContext, NULL, NULL);
        Com_DDL_PrintState(&state, &ddlContext);
      }
      else
      {
        Com_Printf(16, "Too many arguments\n");
      }
    }
  }
  else
  {
    Com_Printf(15, "No match data definition.\n");
  }
}

/*
==============
SV_DumpCodcasterClientMatchData_f
==============
*/
void SV_DumpCodcasterClientMatchData_f()
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const DDLDef *Asset; 
  DDLContext ddlContext; 

  SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
  if ( SvGameGlobalsMP->codcasterClientMatchData.def[0] )
  {
    Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->codcasterClientMatchData.def);
    Com_DDL_CreateContext(SvGameGlobalsMP->codcasterClientMatchData.data, 1614, Asset, &ddlContext, NULL, NULL);
    Com_DDL_WriteAsText(&ddlContext, "DDL_DumpCodcasterClientMatchData_SV.txt", (const char *)&queryFormat.fmt + 3);
  }
  else
  {
    Com_Printf(15, "No match data definition.\n");
  }
}

/*
==============
SV_SendMatchData_f
==============
*/
void SV_SendMatchData_f()
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const PartyData *ServerLobby; 
  const bdSecurityID *SecurityId; 
  bdSecurityID v3; 
  unsigned __int64 v4; 
  int StartingControllerIndex; 
  const DDLDef *Asset; 
  DDLContext ddlContext; 
  bdSecurityID v8; 

  if ( !SV_IsDemoPlaying() && Com_IsGameLocalServerRunning() )
  {
    SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
    if ( SvGameGlobalsMP->matchDataDef[0] )
    {
      ServerLobby = SV_MainMP_GetServerLobby();
      if ( Session_IsValid(ServerLobby->session) )
      {
        SecurityId = XSESSION_INFO::GetSecurityId(&ServerLobby->session->dyn.sessionInfo);
        bdSecurityID::bdSecurityID(&v8, SecurityId);
        v3 = v8;
        v4 = (*(_QWORD *)&v3 << 32) | Sys_MillisecondsRaw();
        StartingControllerIndex = Party_GetStartingControllerIndex(ServerLobby);
        bdSecurityID::~bdSecurityID(&v8);
      }
      else
      {
        StartingControllerIndex = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        v4 = Sys_MillisecondsRaw();
      }
      SV_SendMatchData_UpdateMatchData();
      Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->matchDataDef);
      Com_Printf(25, "uploading matchdata with ddl def guid: 0x%llx\n", Asset->guid);
      if ( Asset->byteSize > 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 2652, ASSERT_TYPE_ASSERT, "(def->byteSize <= sizeof( sv->matchData ))", "%s\n\tMatchdata def is larger than match data buffer.", "def->byteSize <= sizeof( sv->matchData )") )
        __debugbreak();
      Com_DDL_CreateContext(SvGameGlobalsMP->matchData, Asset->byteSize, Asset, &ddlContext, NULL, NULL);
      LiveAntiCheat_ReportMatchDataInfractions(StartingControllerIndex, &ddlContext);
      Online_MatchData_Send(StartingControllerIndex, v4, &ddlContext);
    }
  }
}

/*
==============
SV_ScriptablesDestroyEverything_f
==============
*/
void SV_ScriptablesDestroyEverything_f()
{
  unsigned int v0; 

  if ( SV_Cmd_Argc() <= 1 )
  {
    ScriptableSv_DevDestroyEverything(0);
  }
  else
  {
    v0 = Cmd_ArgInt(1);
    ScriptableSv_DevDestroyEverything(v0);
  }
}

/*
==============
SV_SendCommand_f
==============
*/
void SV_SendCommand_f()
{
  unsigned int v0; 
  int v1; 
  const char *v2; 
  SvClientMP *MpClient; 

  if ( SV_Cmd_Argc() >= 4 )
  {
    if ( Com_IsGameLocalServerRunning() )
    {
      v0 = Cmd_ArgInt(1);
      v1 = -(Cmd_ArgInt(2) != 0);
      v2 = Cmd_Argv(3);
      MpClient = SV_Client_GetMpClient(v0);
      MpClient->SendServerCommand(MpClient, (svscmd_type)(v1 + 2), v2);
    }
    else
    {
      Com_Printf(15, "Server is not running.\n");
    }
  }
}

/*
==============
SV_SendNoDelta_f
==============
*/

void SV_SendNoDelta_f(void)
{
  SV_SnapshotMP_ResetServerSnapshots();
}

/*
==============
SV_SendNewBaseline_f
==============
*/

void SV_SendNewBaseline_f(void)
{
  SV_SnapshotMP_ResetBaseline();
}

/*
==============
SV_RecordEventFF_f
==============
*/
void SV_RecordEventFF_f()
{
  DWRecordStringEventType v0; 
  const char *v1; 

  if ( SV_Cmd_Argc() >= 3 )
  {
    v0 = Cmd_ArgInt(1);
    if ( (unsigned int)v0 > DW_EVENT_ANTICHEAT_ILLEGAL_PLAYERDATA_WRITE )
    {
      Com_PrintError(15, "Invalid category argument for sv_RecordEventFF\n");
    }
    else
    {
      v1 = SV_Cmd_Argv(2);
      dwRecordStringEventFF(v1, v0);
    }
  }
  else
  {
    Com_PrintError(15, "Not enough arguments for sv_RecordEventFF\n");
  }
}

/*
==============
SV_SavePOTGArchive_f
==============
*/
void SV_SavePOTGArchive_f()
{
  if ( Com_IsGameLocalServerRunning() )
    SV_SnapWorkersMP_StartSnapshotPOTGArchiveSave();
  else
    Com_Printf(15, "Server is not running.\n");
}

/*
==============
SV_SystemLinkStartMatch_f
==============
*/
void SV_SystemLinkStartMatch_f()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_systemlink_host;
  if ( !DVARBOOL_systemlink_host && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink_host") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    PartyHost_RequestStartMatch(&g_partyData, 0);
  else
    Com_Printf(15, "Server not a system link server");
}

/*
==============
SvGameModeAppMP::DevCmdSetup
==============
*/
void SvGameModeAppMP::DevCmdSetup(SvGameModeAppMP *this, const bool forceSignIn)
{
  unsigned __int8 ActiveGameMode; 
  const dvar_t *v4; 
  bool enabled; 
  bool IsLocalClientActive; 
  const char *v7; 
  int v8; 
  const char *v9; 
  PartyData *PartyData; 
  PartyData *v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  LocalClientNum_t v15; 
  int IsOfflineTool; 
  NetInitFlow v17; 
  unsigned int ControllerFromClient; 
  int v19; 
  const char *v20; 
  const XUID *v21; 
  int v22; 
  int v23; 
  const XUID *v24; 
  LocalClientNum_t ClientFromController; 
  unsigned __int8 v26; 
  int NumGameSlots; 
  NetConfig config; 

  Com_FrontEndScene_ShutdownAndDisable();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  CL_Mgr_InitialiseDevClients((GameModeType)ActiveGameMode);
  if ( !CL_IsLocalClientActive(LOCAL_CLIENT_0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 658, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientActive( LOCAL_CLIENT_0 ))", (const char *)&queryFormat, "CL_IsLocalClientActive( LOCAL_CLIENT_0 )") )
    __debugbreak();
  v4 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  enabled = v4->current.enabled;
  IsLocalClientActive = CL_IsLocalClientActive(LOCAL_CLIENT_1);
  if ( !enabled )
  {
    if ( IsLocalClientActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 675, ASSERT_TYPE_ASSERT, "(!CL_IsLocalClientActive( LOCAL_CLIENT_1 ))", (const char *)&queryFormat, "!CL_IsLocalClientActive( LOCAL_CLIENT_1 )") )
      __debugbreak();
    if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_ONE_CLIENT )
      goto LABEL_22;
    v7 = "CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_ONE_CLIENT";
    v8 = 676;
    v9 = "(CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_ONE_CLIENT)";
    goto LABEL_20;
  }
  if ( !IsLocalClientActive )
  {
    Com_PrintError(14, "Attempted to devmap in splitscreen but only one player was found.\n");
    if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 669, ASSERT_TYPE_ASSERT, "(CL_Mgr_GetMode() != CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS)", (const char *)&queryFormat, "CL_Mgr_GetMode() != CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS") )
      __debugbreak();
    Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
    goto LABEL_22;
  }
  if ( CL_Mgr_GetMode() != CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS )
  {
    v7 = "CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS";
    v8 = 664;
    v9 = "(CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS)";
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", v8, ASSERT_TYPE_ASSERT, v9, (const char *)&queryFormat, v7) )
      __debugbreak();
  }
LABEL_22:
  Com_Shutdown("EXE/SERVERKILLED");
  if ( Lobby_IsInLobby() )
  {
    PartyData = Lobby_GetPartyData();
    Party_Sleep(PartyData);
    v11 = Lobby_GetPartyData();
    Party_StopParty(v11);
  }
  if ( g_partyData.inParty )
  {
    Party_Sleep(&g_partyData);
    Party_StopParty(&g_partyData);
  }
  v12 = 8i64 * tls_index;
  v13 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v12);
  v14 = *(_DWORD *)(v13 + 1052);
  *(_DWORD *)(v13 + 1052) = -4609;
  Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
  *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v12) + 1052i64) = v14;
  Dvar_SetBool_Internal(DVARBOOL_systemlink, 1);
  Dvar_SetBool_Internal(DVARBOOL_online_is_devmapping, 1);
  v15 = LOCAL_CLIENT_0;
  if ( !NET_IsStarted() )
  {
    IsOfflineTool = Live_IsOfflineTool();
    config.relayDisabled = 1;
    v17 = NET_INITFLOW_OFFLINE_PRIMARY;
    if ( IsOfflineTool )
      v17 = NET_INITFLOW_OFFLINE;
    config.flow = v17;
    NET_Start(&config, &s_svCmdsMP_netListener);
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v19 = 0;
  while ( !GPad_IsActive(v19) || !Live_IsSignedIn(v19) )
  {
    if ( ++v19 >= 8 )
      goto LABEL_36;
  }
  ControllerFromClient = v19;
LABEL_36:
  if ( !forceSignIn || Live_IsSignedIn(ControllerFromClient) )
  {
    if ( !Live_IsUserSignedInToDemonware(ControllerFromClient) )
    {
      v21 = XUID::RandomXUID((XUID *)&config);
      Live_SetUniversalId(ControllerFromClient, (const XUID)v21->m_id);
    }
  }
  else
  {
    v20 = j_va("User%d", ControllerFromClient);
    Live_FakeUserSignIn(ControllerFromClient, v20);
  }
  if ( CL_IsLocalClientActive(LOCAL_CLIENT_1) )
  {
    v22 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_1);
    v23 = v22;
    if ( v22 != -1 && !Live_IsUserSignedInToDemonware(v22) )
    {
      v24 = XUID::RandomXUID((XUID *)&config);
      Live_SetUniversalId(v23, (const XUID)v24->m_id);
    }
  }
  Com_Printf(16, "DEVCMD: Autostarting party with first active controllerIndex %d!\n", ControllerFromClient);
  Party_Awake(&g_partyData, ControllerFromClient, 1);
  ClientFromController = CL_Mgr_GetClientFromController(ControllerFromClient);
  PartyHost_StartPrivateParty(ClientFromController, ControllerFromClient, 0, PARTY_HOST_CLIENT);
  BG_GameStateInfo_SetUsingRecipe(0);
  Com_Printf(16, "DEVMAP: setting UI Root to PartyUIRoot::SYSTEM_LINK_LOBBY.\n");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
  {
    Party_SetUIRoot(&g_partyData, (PartyUIRoot)29);
  }
  else
  {
    v26 = Com_GameMode_GetActiveGameMode();
    if ( BG_GameInterface_GameModeIsMP((GameModeType)v26) )
    {
      Party_SetUIRoot(&g_partyData, (PartyUIRoot)9);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 790, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Setting party UI root in invalid gamemode") )
    {
      __debugbreak();
    }
  }
  NumGameSlots = Party_GetNumGameSlots(&g_partyData);
  Dvar_SetInt_Internal(DVARINT_ui_maxclients, NumGameSlots);
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    do
    {
      if ( CL_IsLocalClientActive(v15) )
        LiveStorage_EndGame(v15);
      ++v15;
    }
    while ( v15 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
SvGameModeAppMP::DevJoinCmd
==============
*/
void SvGameModeAppMP::DevJoinCmd(SvGameModeAppMP *this, const char *hostname)
{
  int v3; 
  int ControllerFromClient; 
  int v5; 

  SvGameModeAppMP::DevCmdSetup(this, 1);
  SvGameModeAppMP::WaitServer(this, SV_DevCmdFrame);
  v3 = Sys_Milliseconds();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  while ( !FenceManager_IsFenceComplete(ControllerFromClient, FENCE_NETWORKING) )
  {
    NET_Frame();
    Live_Frame(0);
    FenceManager_Frame();
  }
  v5 = Sys_Milliseconds();
  Com_Printf(25, "Waited %dms for networking fence\n", (unsigned int)(v5 - v3));
  Com_CheckError();
}

/*
==============
SvGameModeAppMP::DevmapCmd
==============
*/
void SvGameModeAppMP::DevmapCmd(SvGameModeAppMP *this)
{
  bool v2; 
  const char *Gametype; 
  const dvar_t *v4; 
  const char *v5; 
  bool hardcoreMode; 
  const dvar_t *v7; 
  unsigned int unsignedInt; 
  unsigned __int8 v9; 
  const dvar_t *v10; 
  unsigned int v11; 
  unsigned int v12; 
  const dvar_t *v13; 
  unsigned __int16 weaponMapLargeRuntimeSize; 
  int v15; 
  int ControllerFromClient; 
  int v17; 
  char buffer[64]; 

  SV_Cmd_ArgvBuffer(1, buffer, 0x40ui64);
  I_strlwr(buffer);
  if ( SV_Cmds_CheckMapCmdValid(buffer) )
  {
    v2 = com_unattendedMode && com_unattendedMode->current.enabled;
    SvGameModeAppMP::DevCmdSetup(this, v2);
    Dvar_SetBool_Internal(DVARBOOL_systemlink_host, 1);
    Com_GameMode_SetDefaultGameTypeIfNeeded(buffer);
    Gametype = Party_GetGametype();
    v4 = DVARBOOL_ui_hardcore;
    v5 = Gametype;
    if ( !DVARBOOL_ui_hardcore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_hardcore") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    hardcoreMode = v4->current.enabled;
    v7 = DVARINT_ui_maxclients;
    if ( !DVARINT_ui_maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_maxclients") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    unsignedInt = v7->current.unsignedInt;
    v9 = SV_AgentSetupAgentCount(v5);
    v10 = DVARINT_ui_serverDevmapFrameDuration;
    v11 = v9;
    if ( !DVARINT_ui_serverDevmapFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_serverDevmapFrameDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v12 = v10->current.unsignedInt;
    v13 = DVARINT_ui_weaponMapLargeRuntimeSize;
    if ( !DVARINT_ui_weaponMapLargeRuntimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_weaponMapLargeRuntimeSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    weaponMapLargeRuntimeSize = truncate_cast<unsigned short,int>(v13->current.integer);
    Com_GameStart_BeginDevmap(buffer, v5);
    OnlineMatchId::ResetMatchId();
    Com_FastFile_PushDevmap();
    SV_CmdsMP_StartMapCmd(buffer, v5, unsignedInt, v11, v12, weaponMapLargeRuntimeSize, hardcoreMode, 0, 1, 0);
    Com_FastFile_PopDevmap();
    SvGameModeAppMP::WaitServer(this, SV_DevCmdFrame);
    if ( !Live_IsOfflineTool() )
    {
      v15 = Sys_Milliseconds();
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      while ( !FenceManager_IsFenceComplete(ControllerFromClient, FENCE_NETWORKING) )
      {
        NET_Frame();
        Live_Frame(0);
        FenceManager_Frame();
      }
      v17 = Sys_Milliseconds();
      Com_Printf(25, "Waited %dms for networking fence\n", (unsigned int)(v17 - v15));
    }
    Com_CheckError();
  }
  else
  {
    Com_SetLocalizedErrorMessage("Can't load the requested map. See console for details", "Map Error");
  }
}

/*
==============
SvGameModeAppMP::DevmapDediCmd
==============
*/
void SvGameModeAppMP::DevmapDediCmd(SvGameModeAppMP *this)
{
  Com_PrintWarning(15, "Redirecting online devmap (+devmap_dedi) to normal devmap (+devmap)\n");
  SvGameModeAppMP::DevmapCmd(this);
}

/*
==============
SV_CmdsMP_AddOperatorCommands
==============
*/
void SV_CmdsMP_AddOperatorCommands(void)
{
  Cmd_AddServerCommandList(S_SV_OPERATOR_COMMANDS_MP, 0x2Eu);
}

/*
==============
SV_CmdsMP_CheckForSaveGame
==============
*/
bool SV_CmdsMP_CheckForSaveGame()
{
  unsigned __int64 v0; 
  bool v2; 
  unsigned int v3; 
  SaveHeader header; 

  v0 = (unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64;
  if ( !sv_save_filename[0] )
    return 0;
  MemCard_SetUseDevSaveArea(1);
  v2 = G_SaveMemoryMP_ReadHeader(sv_save_filename, (SaveHeader *)((unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64));
  if ( v2 )
  {
    SV_DemoMP_SetPendingLoadName(sv_save_filename);
    DebugWipe(&s_svCmdsMP_mapLoadParams, 0x90ui64);
    Core_strcpy(s_svCmdsMP_mapLoadParams.mapName, 0x40ui64, (const char *)(v0 + 72));
    Core_strcpy(s_svCmdsMP_mapLoadParams.gametype, 0x40ui64, (const char *)(v0 + 671));
    v3 = *(unsigned __int8 *)(((unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64) + 0x29E);
    s_svCmdsMP_mapLoadParams.isSplitscreen = *(_BYTE *)(((unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64) + 0x334);
    s_svCmdsMP_mapLoadParams.frameDuration = *(unsigned __int8 *)(((unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64) + 0x29C);
    s_svCmdsMP_mapLoadParams.hardcoreMode = *(_BYTE *)(((unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64) + 0x32F);
    s_svCmdsMP_mapLoadParams.clientCount = *(unsigned __int8 *)(((unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64) + 0x29D);
    s_svCmdsMP_mapLoadParams.weaponMapLargeRuntimeSize = *(_WORD *)(((unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64) + 0x338);
    s_svCmdsMP_mapLoadParams.agentCount = v3;
    SV_AgentSetAgentCount(v3);
    Cbuf_AddCall(LOCAL_CLIENT_0, SV_CmdsMP_StartSavedMap);
  }
  else
  {
    sv_demo.nextLevelplaying = 0;
    MemCard_SetUseDevSaveArea(0);
  }
  sv_save_filename[0] = 0;
  return v2;
}

/*
==============
SV_CmdsMP_CheckLoadGame
==============
*/
_BOOL8 SV_CmdsMP_CheckLoadGame()
{
  if ( !s_svCmdsMP_mapRestart )
    return SV_CmdsMP_CheckForSaveGame();
  SV_InitMP_MapRestart(s_svCmdsMP_migrate, s_svCmdsMP_loadScripts);
  return 1i64;
}

/*
==============
SV_CmdsMP_ClearLoadGame
==============
*/
void SV_CmdsMP_ClearLoadGame(void)
{
  sv_save_filename[0] = 0;
  s_svCmdsMP_mapRestart = 0;
  s_svCmdsMP_loadScripts = 0;
  s_svCmdsMP_migrate = 0;
  s_svCmdsMP_devMigrateSave = 0;
  s_svCmdsMP_devMigrateLoad = 0;
}

/*
==============
SV_CmdsMP_EnableMoreSnapshotEntities
==============
*/
__int64 SV_CmdsMP_EnableMoreSnapshotEntities()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_dev_moreSnapshotEntities;
  if ( !DVARBOOL_dev_moreSnapshotEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dev_moreSnapshotEntities") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
SV_CmdsMP_FastRestart
==============
*/
void SV_CmdsMP_FastRestart(LocalClientNum_t localClientNum)
{
  SV_CmdsMP_RequestMapRestart(0, 0);
}

/*
==============
SV_CmdsMP_IsDevToolsMode
==============
*/
bool SV_CmdsMP_IsDevToolsMode()
{
  _BYTE *integer64; 

  if ( !createfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 319, ASSERT_TYPE_ASSERT, "( createfx )", (const char *)&queryFormat, "createfx") )
    __debugbreak();
  integer64 = (_BYTE *)createfx->current.integer64;
  return integer64 && *integer64;
}

/*
==============
SV_CmdsMP_KickClient
==============
*/
char SV_CmdsMP_KickClient(SvClientMP *cl, char *playerNameOut, int maxPlayerNameLen, char *playerGuidOut, const char *reason, bool kickedForInactivity)
{
  unsigned __int64 v7; 
  char dest[64]; 

  v7 = maxPlayerNameLen;
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 1451, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 1452, ASSERT_TYPE_ASSERT, "( !SvPersistentGlobalsMP::IsFrontEndServer() )", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( !NetConnection::IsLoopback(&cl->clientConnection) || NetConnection::IsBot(&cl->clientConnection) )
  {
    if ( playerNameOut )
    {
      Core_strcpy(playerNameOut, v7, cl->name);
      I_CleanStr(playerNameOut);
      if ( !playerGuidOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 1491, ASSERT_TYPE_ASSERT, "(playerGuidOut)", (const char *)&queryFormat, "playerGuidOut") )
        __debugbreak();
      *(_OWORD *)playerGuidOut = *(_OWORD *)cl->playerGuid;
      *((_DWORD *)playerGuidOut + 4) = *(_DWORD *)&cl->playerGuid[16];
      playerGuidOut[20] = cl->playerGuid[20];
    }
    else if ( playerGuidOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 1496, ASSERT_TYPE_ASSERT, "(playerGuidOut == 0)", (const char *)&queryFormat, "playerGuidOut == NULL") )
    {
      __debugbreak();
    }
    SV_ClientMP_DropClient(cl, reason, 1);
    cl->lastPacketTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  }
  else
  {
    if ( SV_Game_IsPrivateMatch() || !SV_Game_IsOnlineGame() )
    {
      Com_sprintf(dest, 0x40ui64, "%c \"EXE/CANNOTKICKHOSTPLAYER\"", 101i64);
      SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, dest);
      return 0;
    }
    if ( !SV_IsMigrating() )
    {
      g_sv_kickedForInactivity = kickedForInactivity;
      if ( reason )
        Core_strcpy(g_migrationReason, 0x40ui64, reason);
      else
        g_migrationReason[0] = 0;
      Cbuf_AddCall(LOCAL_CLIENT_0, SV_MigrationStartCall);
    }
  }
  return 1;
}

/*
==============
SV_CmdsMP_KickClientNum
==============
*/
void SV_CmdsMP_KickClientNum(int clientNum, const char *reason, bool kickedForInactivity)
{
  SvClientMP *MpClient; 

  if ( Com_IsGameLocalServerRunning() )
  {
    if ( SvClient::GetCommonClient(clientNum)->state )
    {
      MpClient = SV_Client_GetMpClient(clientNum);
      SV_CmdsMP_KickClient(MpClient, NULL, 0, NULL, reason, kickedForInactivity);
    }
    else
    {
      Com_Printf(0, "Can't kick an inactive client in slot %i.\n", (unsigned int)clientNum);
    }
  }
  else
  {
    Com_Printf(0, "Server is not running.\n");
  }
}

/*
==============
SV_CmdsMP_RemoveOperatorCommands
==============
*/
void SV_CmdsMP_RemoveOperatorCommands(void)
{
  Cmd_RemoveServerCommandList(S_SV_OPERATOR_COMMANDS_MP, 0x2Eu);
}

/*
==============
SV_CmdsMP_RequestMapRestart
==============
*/
void SV_CmdsMP_RequestMapRestart(bool loadScripts, bool migrate)
{
  if ( Com_IsAnyLocalServerStarting() )
  {
    Com_PrintError(15, "Can't restart while starting\n");
  }
  else if ( Com_IsAnyLocalServerRunning() && SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    Com_PrintError(15, "Can't perform a map restart on the front-end server\n");
  }
  else if ( !SV_IsDemoPlaying() || SV_IsDemoPlayingNext() )
  {
    SND_StopSounds(SND_KEEP_MUSIC);
    SND_SetMusicState((const char *)&queryFormat.fmt + 3);
    s_svCmdsMP_mapRestart = 1;
    s_svCmdsMP_loadScripts = loadScripts;
    s_svCmdsMP_migrate = migrate;
    if ( !Com_IsAnyLocalServerRunning() )
    {
      if ( s_svCmdsMP_mapRestart )
        SV_InitMP_MapRestart(s_svCmdsMP_migrate, s_svCmdsMP_loadScripts);
      else
        SV_CmdsMP_CheckForSaveGame();
    }
  }
  else
  {
    Com_PrintError(15, "Can't execute a normal restart while a demo replay is playing, use replay_restart instead.\n");
  }
}

/*
==============
SV_CmdsMP_SendMatchData
==============
*/
void SV_CmdsMP_SendMatchData(LocalClientNum_t localClientNum)
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const PartyData *ServerLobby; 
  const bdSecurityID *SecurityId; 
  bdSecurityID v4; 
  unsigned __int64 v5; 
  int StartingControllerIndex; 
  const DDLDef *Asset; 
  DDLContext ddlContext; 
  bdSecurityID v9; 

  if ( !SV_IsDemoPlaying() && Com_IsGameLocalServerRunning() )
  {
    SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
    if ( SvGameGlobalsMP->matchDataDef[0] )
    {
      ServerLobby = SV_MainMP_GetServerLobby();
      if ( Session_IsValid(ServerLobby->session) )
      {
        SecurityId = XSESSION_INFO::GetSecurityId(&ServerLobby->session->dyn.sessionInfo);
        bdSecurityID::bdSecurityID(&v9, SecurityId);
        v4 = v9;
        v5 = (*(_QWORD *)&v4 << 32) | Sys_MillisecondsRaw();
        StartingControllerIndex = Party_GetStartingControllerIndex(ServerLobby);
        bdSecurityID::~bdSecurityID(&v9);
      }
      else
      {
        StartingControllerIndex = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        v5 = Sys_MillisecondsRaw();
      }
      SV_SendMatchData_UpdateMatchData();
      Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->matchDataDef);
      Com_Printf(25, "uploading matchdata with ddl def guid: 0x%llx\n", Asset->guid);
      if ( Asset->byteSize > 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 2652, ASSERT_TYPE_ASSERT, "(def->byteSize <= sizeof( sv->matchData ))", "%s\n\tMatchdata def is larger than match data buffer.", "def->byteSize <= sizeof( sv->matchData )") )
        __debugbreak();
      Com_DDL_CreateContext(SvGameGlobalsMP->matchData, Asset->byteSize, Asset, &ddlContext, NULL, NULL);
      LiveAntiCheat_ReportMatchDataInfractions(StartingControllerIndex, &ddlContext);
      Online_MatchData_Send(StartingControllerIndex, v5, &ddlContext);
    }
  }
}

/*
==============
SV_CmdsMP_StartMapCmd
==============
*/
void SV_CmdsMP_StartMapCmd(const char *map, const char *gameType, unsigned int clientCount, unsigned int agentCount, unsigned int frameDuration, unsigned __int16 weaponMapLargeRuntimeSize, bool hardcoreMode, bool mapIsPreloaded, bool asyncServerStart, bool isSaveGame)
{
  const dvar_t *v14; 
  const dvar_t *v15; 
  unsigned int unsignedInt; 
  int MapIndex; 
  int MapSource; 
  SvGameModeAppMP *ActiveServerApplicationMP; 
  SvServerInitSettings basename; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 335, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 336, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tFrontEnd Scene should be shutdown before starting the game server", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  memset_0(&basename, 0, sizeof(basename));
  Com_MapLoadErrors_Reset(0);
  Com_Files_GetMapBaseName(map, basename.mapName, 64);
  I_strlwr(basename.mapName);
  Core_strcpy(basename.gameType, 0x40ui64, gameType);
  I_strlwr(basename.gameType);
  basename.hardcoreMode = hardcoreMode;
  basename.weaponMapLargeRuntimeSize = weaponMapLargeRuntimeSize;
  basename.maxClientCount = clientCount;
  basename.maxAgentCount = agentCount;
  if ( SV_CmdsMP_IsDevToolsMode() )
  {
    v14 = DCONST_DVARINT_com_toolsServerFrameDuration;
    if ( !DCONST_DVARINT_com_toolsServerFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_toolsServerFrameDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    Com_Printf(15, "SV_CmdsMP_StartMapCmd: Overriding frame duration for tools: %i instead of %i\n", v14->current.unsignedInt, frameDuration);
    v15 = DCONST_DVARINT_com_toolsServerFrameDuration;
    if ( !DCONST_DVARINT_com_toolsServerFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_toolsServerFrameDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    unsignedInt = v15->current.unsignedInt;
  }
  else
  {
    unsignedInt = frameDuration;
  }
  basename.frameDuration = unsignedInt;
  basename.isDevMigration = 0;
  basename.devMoreSnapshotEntities = SV_CmdsMP_EnableMoreSnapshotEntities();
  if ( isSaveGame || (basename.isSaveGame = 0, s_svCmdsMP_migrate) )
    basename.isSaveGame = 1;
  basename.savePersist = 0;
  MapIndex = Live_GetMapIndex(basename.mapName);
  MapSource = Live_GetMapSource(MapIndex);
  if ( !Content_DoWeHaveContentPack(MapSource) )
    UI_MissingMapError();
  basename.useCheats = 1;
  FS_ConvertPath(basename.mapName);
  basename.isRestart = s_svCmdsMP_migrate;
  basename.isMapPreloaded = mapIsPreloaded;
  basename.isFrontEnd = 0;
  basename.registerDvars = 1;
  basename.loadScripts = 1;
  SV_InitMP_GenerateServerHostName(0, basename.serverHostName, 0x40u);
  Com_MapLoadErrors_Reset(1);
  basename.serverThreadStartup = asyncServerStart;
  if ( Com_IsAnyLocalServerRunning() )
    CL_MainMP_PrepareClientsForServerRestart(basename.mapName, basename.gameType);
  ActiveServerApplicationMP = SvGameModeAppMP::GetActiveServerApplicationMP();
  SvGameModeAppMP::StartServer(ActiveServerApplicationMP, &basename);
}

/*
==============
SV_CmdsMP_StartMapForFrontEnd
==============
*/
void SV_CmdsMP_StartMapForFrontEnd(const char *map, const char *gameType)
{
  SvGameModeAppMP *ActiveServerApplicationMP; 
  SvServerInitSettings dest; 

  if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 444, ASSERT_TYPE_ASSERT, "( !Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "!Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  memset_0(&dest, 0, sizeof(dest));
  Com_MapLoadErrors_Reset(0);
  *(_WORD *)&dest.isFrontEnd = 257;
  *(_WORD *)&dest.isMapPreloaded = 1;
  *(_DWORD *)&dest.registerDvars = 65537;
  dest.isRestart = 0;
  *(_WORD *)&dest.devMoreSnapshotEntities = 256;
  Core_strcpy(dest.mapName, 0x40ui64, map);
  Core_strcpy(dest.gameType, 0x40ui64, gameType);
  dest.hardcoreMode = 0;
  dest.weaponMapLargeRuntimeSize = 255;
  *(_QWORD *)&dest.maxClientCount = 1i64;
  dest.frameDuration = 16;
  SV_InitMP_GenerateServerHostName(1, dest.serverHostName, 0x40u);
  Com_MapLoadErrors_Reset(1);
  ActiveServerApplicationMP = SvGameModeAppMP::GetActiveServerApplicationMP();
  SvGameModeAppMP::StartServer(ActiveServerApplicationMP, &dest);
}

/*
==============
SV_CmdsMP_StartMapForParty
==============
*/
void SV_CmdsMP_StartMapForParty(const char *map, const char *gameType, unsigned int clientCount, unsigned int agentCount, unsigned int frameDuration, unsigned __int16 weaponMapLargeRuntimeSize, bool hardcoreMode, bool mapIsPreloaded, bool migrate)
{
  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 429, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tFrontEnd Scene should be shutdown before starting the game server", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  if ( !map && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 430, ASSERT_TYPE_ASSERT, "( map )", (const char *)&queryFormat, "map") )
    __debugbreak();
  if ( !*map && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 431, ASSERT_TYPE_ASSERT, "( map[0] )", (const char *)&queryFormat, "map[0]") )
    __debugbreak();
  if ( !gameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 432, ASSERT_TYPE_ASSERT, "( gameType )", (const char *)&queryFormat, "gameType") )
    __debugbreak();
  if ( !*gameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 433, ASSERT_TYPE_ASSERT, "( gameType[0] )", (const char *)&queryFormat, "gameType[0]") )
    __debugbreak();
  s_svCmdsMP_migrate = migrate;
  SV_CmdsMP_StartMapCmd(map, gameType, clientCount, agentCount, frameDuration, weaponMapLargeRuntimeSize, hardcoreMode, mapIsPreloaded, 1, 0);
}

/*
==============
SV_CmdsMP_StartSavedMap
==============
*/
void SV_CmdsMP_StartSavedMap(LocalClientNum_t localClientNum)
{
  if ( !s_svCmdsMP_mapLoadParams.mapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 571, ASSERT_TYPE_ASSERT, "( s_svCmdsMP_mapLoadParams.mapName[0] != 0 )", (const char *)&queryFormat, "s_svCmdsMP_mapLoadParams.mapName[0] != 0") )
    __debugbreak();
  if ( !s_svCmdsMP_mapLoadParams.gametype[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 572, ASSERT_TYPE_ASSERT, "( s_svCmdsMP_mapLoadParams.gametype[0] != 0 )", (const char *)&queryFormat, "s_svCmdsMP_mapLoadParams.gametype[0] != 0") )
    __debugbreak();
  if ( !s_svCmdsMP_mapLoadParams.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 573, ASSERT_TYPE_ASSERT, "( s_svCmdsMP_mapLoadParams.frameDuration != 0 )", (const char *)&queryFormat, "s_svCmdsMP_mapLoadParams.frameDuration != 0") )
    __debugbreak();
  Com_FrontEndScene_ShutdownAndDisable();
  SND_StopSounds(SND_STOP_ALL);
  s_svCmdsMP_migrate = 0;
  Com_GameStart_BeginDevmap(s_svCmdsMP_mapLoadParams.mapName, s_svCmdsMP_mapLoadParams.gametype);
  SV_CmdsMP_StartMapCmd(s_svCmdsMP_mapLoadParams.mapName, s_svCmdsMP_mapLoadParams.gametype, s_svCmdsMP_mapLoadParams.clientCount, s_svCmdsMP_mapLoadParams.agentCount, s_svCmdsMP_mapLoadParams.frameDuration, s_svCmdsMP_mapLoadParams.weaponMapLargeRuntimeSize, s_svCmdsMP_mapLoadParams.hardcoreMode, 0, 1, 1);
  DebugWipe(&s_svCmdsMP_mapLoadParams, 0x90ui64);
  SV_WaitServer();
  Com_CheckError();
}

/*
==============
SV_DevCmdFrame
==============
*/
void SV_DevCmdFrame()
{
  NET_Frame();
  Live_Frame(0);
  FenceManager_Frame();
}

/*
==============
SV_GetPlayerByName
==============
*/
SvClient *SV_GetPlayerByName()
{
  unsigned int v1; 
  const char *v2; 
  SvClient *CommonClient; 
  char dest[64]; 

  if ( Com_IsGameLocalServerRunning() )
  {
    if ( SV_Cmd_Argc() >= 2 )
    {
      v1 = 0;
      v2 = SV_Cmd_Argv(1);
      if ( (int)SvClient::ms_clientCount <= 0 )
      {
LABEL_13:
        Com_Printf(15, "Player \"%s\" is not on the server.\n", v2);
        return 0i64;
      }
      else
      {
        while ( 1 )
        {
          if ( SvClient::GetCommonClient(v1)->state )
          {
            if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
              __debugbreak();
            CommonClient = SvClient::GetCommonClient(v1);
            if ( !I_stricmp(&CommonClient[4].lastUsercmd.selectedLoc[1], v2) )
              return CommonClient;
            Core_strcpy(dest, 0x40ui64, &CommonClient[4].lastUsercmd.selectedLoc[1]);
            I_CleanStr(dest);
            if ( !I_stricmp(dest, v2) )
              return CommonClient;
          }
          if ( (int)++v1 >= (int)SvClient::ms_clientCount )
            goto LABEL_13;
        }
      }
    }
    else
    {
      Com_Printf(15, "No player specified.\n");
      return 0i64;
    }
  }
  else
  {
    Com_Printf(0, "Server is not running.\n");
    return 0i64;
  }
}

/*
==============
SV_GetPlayerByNum
==============
*/
SvClientMP *SV_GetPlayerByNum()
{
  const char *v1; 
  char v2; 
  const char *v3; 
  int v4; 
  unsigned int v5; 

  if ( !Com_IsAnyLocalServerRunning() )
    return 0i64;
  if ( SV_Cmd_Argc() < 2 )
  {
    Com_Printf(15, "No player specified.\n");
    return 0i64;
  }
  v1 = SV_Cmd_Argv(1);
  v2 = *v1;
  if ( *v1 )
  {
    v3 = v1;
    while ( (unsigned __int8)(v2 - 48) <= 9u )
    {
      v2 = *++v3;
      if ( !v2 )
        goto LABEL_9;
    }
    Com_Printf(15, "Bad slot number: %s\n", v1);
    return 0i64;
  }
  else
  {
LABEL_9:
    v4 = atoi(v1);
    v5 = v4;
    if ( v4 < 0 || v4 >= (int)SvClient::ms_clientCount )
    {
      Com_Printf(15, "Bad client slot: %i\n", (unsigned int)v4);
    }
    else
    {
      if ( SvClient::GetCommonClient(v4)->state )
        return SV_Client_GetMpClient(v5);
      Com_Printf(15, "Client %i is not active\n", v5);
    }
    return 0i64;
  }
}

/*
==============
SV_HostMigrationStart_Internal
==============
*/
void SV_HostMigrationStart_Internal(int flags)
{
  if ( Com_IsAnyLocalServerRunning() )
  {
    if ( SV_IsMigrating() )
      Com_Printf(15, "Host migration already in progress.\n");
    else
      SV_MigrationStart(NULL, flags);
  }
  else
  {
    Com_Printf(15, "No server running.\n");
  }
}

/*
==============
SV_InitMP_MapRestart
==============
*/
void SV_InitMP_MapRestart(bool savegame, bool loadScripts)
{
  unsigned __int64 v4; 
  SvGameModeAppMP *ActiveServerApplicationMP; 
  const char *GameType; 
  const char *MapName; 
  bool IsDevToolsMode; 
  unsigned int FrameDuration; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  int SavePersist; 
  int v13; 
  __int64 v14; 
  SvServerInitSettings s; 

  memset_0(&s, 0, sizeof(s));
  DB_MyChanges_Reload();
  Com_SyncThreads();
  v4 = (unsigned __int64)&g_serverThreadOwnership & 3;
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
  {
    LODWORD(v14) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 1120, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v14) )
      __debugbreak();
  }
  s.isDevMigration = s_svCmdsMP_devMigrateLoad;
  sv_save_filename[0] = 0;
  s_svCmdsMP_mapRestart = 0;
  s_svCmdsMP_loadScripts = 0;
  s_svCmdsMP_migrate = 0;
  s_svCmdsMP_devMigrateSave = 0;
  s_svCmdsMP_devMigrateLoad = 0;
  if ( Com_IsAnyLocalServerRunning() )
  {
    ActiveServerApplicationMP = SvGameModeAppMP::GetActiveServerApplicationMP();
    GameType = SV_GameMP_GetGameType();
    Core_strcpy(s.gameType, 0x40ui64, GameType);
    MapName = SV_Game_GetMapName();
    Core_strcpy(s.mapName, 0x40ui64, MapName);
    s.hardcoreMode = SV_GameMP_IsHardcoreMode();
    s.maxClientCount = SvClient::ms_clientCount;
    s.maxAgentCount = SV_GameMP_GetAgentCount();
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    s.weaponMapLargeRuntimeSize = BgWeaponMap::ms_runtimeSize;
    IsDevToolsMode = SV_CmdsMP_IsDevToolsMode();
    FrameDuration = SvGameModeApplication::GetFrameDuration(ActiveServerApplicationMP);
    if ( IsDevToolsMode )
    {
      v10 = DCONST_DVARINT_com_toolsServerFrameDuration;
      if ( !DCONST_DVARINT_com_toolsServerFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_toolsServerFrameDuration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      Com_Printf(15, "SV_CmdsMP_StartMapCmd: Overriding frame duration for tools: %i instead of %i\n", v10->current.unsignedInt, FrameDuration);
      v11 = DCONST_DVARINT_com_toolsServerFrameDuration;
      if ( !DCONST_DVARINT_com_toolsServerFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_toolsServerFrameDuration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      s.frameDuration = v11->current.unsignedInt;
    }
    else
    {
      s.frameDuration = FrameDuration;
    }
    s.isSaveGame = savegame;
    SavePersist = G_MainMP_GetSavePersist();
    s.savePersist = SavePersist != 0;
    if ( !SavePersist || (s.registerDvars = 0, savegame) )
      s.registerDvars = 1;
    s.loadScripts = loadScripts;
    s.useCheats = com_cheats->current.enabled;
    s.serverThreadStartup = 1;
    *(_WORD *)&s.isRestart = 1;
    s.isMapPreloaded = 0;
    s.devMoreSnapshotEntities = SV_CmdsMP_EnableMoreSnapshotEntities();
    SV_InitMP_GenerateServerHostName(0, s.serverHostName, 0x40u);
    if ( loadScripts )
    {
      G_MainMP_SetSavePersist(0);
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
      {
        LODWORD(v14) = g_serverThreadOwnership;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 1196, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v14) )
          __debugbreak();
      }
      FS_ConvertPath(s.mapName);
      s.registerDvars = 1;
      CL_MainMP_PrepareClientsForServerRestart(s.mapName, s.gameType);
      SvGameModeAppMP::StartServer(ActiveServerApplicationMP, &s);
      return;
    }
    if ( com_frameTime == SvGameGlobalsMP::GetSvGameGlobalsMP()->start_frameTime )
    {
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) == 1 )
        return;
      v13 = 1217;
    }
    else
    {
      SV_InitMP_RestartServerBegin();
      if ( s.serverThreadStartup )
      {
        SV_MainMP_RestartServerAsync(&s);
      }
      else
      {
        SV_InitMP_RestartServer(&s);
        SV_InitMP_RestartServerFinalize();
      }
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) == 1 )
        return;
      v13 = 1242;
    }
    LODWORD(v14) = g_serverThreadOwnership;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", v13, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v14) )
      return;
    goto LABEL_52;
  }
  Com_Printf(0, "Server is not running.\n");
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
  {
    LODWORD(v14) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 1135, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v14) )
LABEL_52:
      __debugbreak();
  }
}

/*
==============
SV_MigrationStartCall
==============
*/
void SV_MigrationStartCall(LocalClientNum_t localClientNum)
{
  int MigrationDefaultFlags; 

  if ( Com_IsGameLocalServerRunning() )
  {
    if ( SV_IsMigrating() )
    {
      Com_Printf(15, "Host migration already in progress.\n");
    }
    else
    {
      MigrationDefaultFlags = SV_GetMigrationDefaultFlags();
      SV_MigrationStart(g_migrationReason, MigrationDefaultFlags);
    }
  }
  else
  {
    Com_Printf(15, "No server running.\n");
  }
}

/*
==============
SV_SendMatchData_UpdateMatchData
==============
*/

void __fastcall SV_SendMatchData_UpdateMatchData(double _XMM0_8)
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const DDLDef *Asset; 
  unsigned int RawHash; 
  unsigned int CurrentMatchId; 
  unsigned int v6; 
  unsigned int v8; 
  unsigned __int64 TournamentID; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned __int64 MatchId; 
  unsigned __int64 CurrentLobbyId; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned __int64 BootId; 
  unsigned int AdvertisedPatchVersion; 
  unsigned int ProtocolVersion; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const ServerTiming *Current; 
  unsigned int v26; 
  unsigned int v29; 
  unsigned int v32; 
  unsigned int v35; 
  unsigned int v36; 
  const char *CountryCodeString; 
  unsigned int v38; 
  const char *RegionString; 
  unsigned int v40; 
  const char *CityString; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  const char *TimezoneString; 
  unsigned int v47; 
  unsigned __int16 WeaponMapHighWatermark; 
  unsigned int v49; 
  DDLState fromState; 
  DDLState toState; 
  float lat; 
  float lon; 
  unsigned int asn; 
  DDLContext ddlContext; 
  DDLState result; 
  char dest[24]; 

  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  *(_OWORD *)&fromState.member = _XMM0;
  toState.isValid = 0;
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 2473, ASSERT_TYPE_ASSERT, "( !SvPersistentGlobalsMP::IsFrontEndServer() )", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef, *(_QWORD *)&toState.isValid, *(_QWORD *)&toState.arrayIndex, toState.member, toState.ddlDef) )
    __debugbreak();
  SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
  Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->matchDataDef);
  Com_DDL_CreateContext(SvGameGlobalsMP->matchData, 2048, Asset, &ddlContext, NULL, NULL);
  fromState = *DDL_GetRootState(&result, Asset);
  if ( GameBattles_IsGameBattleActive() )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&result.member = _XMM0;
    result.isValid = 0;
    result.offset = 0;
    result.arrayIndex = -1;
    RawHash = j_SL_GetRawHash(scr_const.isMLGGameBattleActive);
    DDL_MoveToNameByHash(&fromState, &result, RawHash, NULL);
    DDL_SetBool(&result, &ddlContext, 1);
    CurrentMatchId = GameBattles_GetCurrentMatchId();
    v6 = j_SL_GetRawHash(scr_const.mlgGameBattleMatchId);
    DDL_MoveToNameByHash(&fromState, &result, v6, NULL);
    DDL_SetUInt(&result, &ddlContext, CurrentMatchId);
  }
  if ( SV_OnlineTournament_IsInTournament() )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&result.member = _XMM0;
    result.isValid = 0;
    result.offset = 0;
    result.arrayIndex = -1;
    v8 = j_SL_GetRawHash(scr_const.tournamentId);
    if ( !DDL_MoveToNameByHash(&fromState, &result, v8, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 2498, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &currentState, &tempState, SL_GetRawHash( scr_const.tournamentId ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &currentState, &tempState, SL_GetRawHash( scr_const.tournamentId ) )", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef) )
      __debugbreak();
    TournamentID = SV_OnlineTournament_GetTournamentID();
    if ( !DDL_SetUInt64(&result, &ddlContext, TournamentID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_ccmds_mp.cpp", 2499, ASSERT_TYPE_ASSERT, "(DDL_SetUInt64( &tempState, &buffer, SV_OnlineTournament_GetTournamentID() ))", (const char *)&queryFormat, "DDL_SetUInt64( &tempState, &buffer, SV_OnlineTournament_GetTournamentID() )") )
      __debugbreak();
  }
  v10 = j_SL_GetRawHash(scr_const.commonMatchData);
  DDL_MoveToNameByHash(&fromState, &toState, v10, NULL);
  v11 = j_SL_GetRawHash(scr_const.match_id);
  DDL_MoveToNameByHash(&toState, &fromState, v11, NULL);
  MatchId = OnlineMatchId::GetMatchId();
  DDL_SetUInt64(&fromState, &ddlContext, MatchId);
  CurrentLobbyId = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
  Com_sprintf(dest, 0x11ui64, "%zx", CurrentLobbyId);
  v14 = j_SL_GetRawHash(scr_const.dw_lobby_id);
  DDL_MoveToNameByHash(&toState, &fromState, v14, NULL);
  DDL_SetString(&fromState, &ddlContext, dest);
  v15 = j_SL_GetRawHash(scr_const.boot_guid);
  DDL_MoveToNameByHash(&toState, &fromState, v15, NULL);
  BootId = OnlineBootId::GetBootId();
  DDL_SetUInt64(&fromState, &ddlContext, BootId);
  AdvertisedPatchVersion = GetAdvertisedPatchVersion();
  ProtocolVersion = GetProtocolVersion();
  v19 = j_SL_GetRawHash(scr_const.patchManifestVersion);
  DDL_MoveToNameByHash(&toState, &fromState, v19, NULL);
  DDL_SetUInt(&fromState, &ddlContext, AdvertisedPatchVersion);
  v20 = j_SL_GetRawHash(scr_const.protocolVersion);
  DDL_MoveToNameByHash(&toState, &fromState, v20, NULL);
  DDL_SetUInt(&fromState, &ddlContext, ProtocolVersion);
  v21 = j_SL_GetRawHash(scr_const.srcDDLVersion);
  DDL_MoveToNameByHash(&toState, &fromState, v21, NULL);
  DDL_SetShort(&fromState, &ddlContext, Asset->version);
  v22 = j_SL_GetRawHash(scr_const.titleID);
  DDL_MoveToNameByHash(&toState, &fromState, v22, NULL);
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  DDL_SetUInt(&fromState, &ddlContext, TitleID);
  Current = SV_Timing_GetCurrent();
  v26 = j_SL_GetRawHash(scr_const.serverTimeTotal);
  DDL_MoveToNameByHash(&toState, &fromState, v26, NULL);
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, dword ptr [rbx+4], 2 }
  DDL_SetInt(&fromState, &ddlContext, (int)*(float *)&_XMM0);
  v29 = j_SL_GetRawHash(scr_const.serverTimeTotalExceed);
  DDL_MoveToNameByHash(&toState, &fromState, v29, NULL);
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, dword ptr [rbx+8], 2 }
  DDL_SetInt(&fromState, &ddlContext, (int)*(float *)&_XMM0);
  v32 = j_SL_GetRawHash(scr_const.serverTimeMax);
  DDL_MoveToNameByHash(&toState, &fromState, v32, NULL);
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, dword ptr [rbx+0Ch], 2 }
  DDL_SetInt(&fromState, &ddlContext, (int)*(float *)&_XMM0);
  v35 = j_SL_GetRawHash(scr_const.serverTimeCount);
  DDL_MoveToNameByHash(&toState, &fromState, v35, NULL);
  DDL_SetInt(&fromState, &ddlContext, Current->serverTimeCount);
  v36 = j_SL_GetRawHash(scr_const.serverTimeExceedCount);
  DDL_MoveToNameByHash(&toState, &fromState, v36, NULL);
  DDL_SetInt(&fromState, &ddlContext, Current->serverTimeExceedCount);
  CountryCodeString = LiveRegionInfo_GetCountryCodeString();
  v38 = j_SL_GetRawHash(scr_const.dmlCountryCode);
  DDL_MoveToNameByHash(&toState, &fromState, v38, NULL);
  DDL_SetString(&fromState, &ddlContext, CountryCodeString);
  RegionString = LiveRegionInfo_GetRegionString();
  v40 = j_SL_GetRawHash(scr_const.dmlRegion);
  DDL_MoveToNameByHash(&toState, &fromState, v40, NULL);
  DDL_SetString(&fromState, &ddlContext, RegionString);
  CityString = LiveRegionInfo_GetCityString();
  v42 = j_SL_GetRawHash(scr_const.dmlCity);
  DDL_MoveToNameByHash(&toState, &fromState, v42, NULL);
  DDL_SetString(&fromState, &ddlContext, CityString);
  if ( LiveRegionInfo_GetLatLong(&lat, &lon) )
  {
    v43 = j_SL_GetRawHash(scr_const.dmlLatitude);
    DDL_MoveToNameByHash(&toState, &fromState, v43, NULL);
    DDL_SetFloat(&fromState, &ddlContext, lat);
    v44 = j_SL_GetRawHash(scr_const.dmlLongitude);
    DDL_MoveToNameByHash(&toState, &fromState, v44, NULL);
    DDL_SetFloat(&fromState, &ddlContext, lon);
  }
  if ( LiveRegionInfo_GetASN(&asn) )
  {
    v45 = j_SL_GetRawHash(scr_const.dmlASN);
    DDL_MoveToNameByHash(&toState, &fromState, v45, NULL);
    DDL_SetUInt(&fromState, &ddlContext, asn);
  }
  TimezoneString = LiveRegionInfo_GetTimezoneString();
  v47 = j_SL_GetRawHash(scr_const.dmlTimezone);
  DDL_MoveToNameByHash(&toState, &fromState, v47, NULL);
  DDL_SetString(&fromState, &ddlContext, TimezoneString);
  WeaponMapHighWatermark = SV_Game_GetWeaponMapHighWatermark();
  v49 = j_SL_GetRawHash(scr_const.weapon_map_watermark);
  if ( DDL_MoveToNameByHash(&toState, &fromState, v49, NULL) )
  {
    if ( !DDL_SetShort(&fromState, &ddlContext, WeaponMapHighWatermark) )
      Com_PrintWarning(15, "SV_SendMatchData_UpdateMatchData: 'weapon_map_watermark' failed to be set\n");
  }
  else
  {
    Com_PrintWarning(15, "SV_SendMatchData_UpdateMatchData: 'weapon_map_watermark' does not exist\n");
  }
}

