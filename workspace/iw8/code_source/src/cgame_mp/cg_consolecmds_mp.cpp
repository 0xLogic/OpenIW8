/*
==============
CG_ConsoleCmdsMP_DumpParticleSystemsToCSV
==============
*/

void CG_ConsoleCmdsMP_DumpParticleSystemsToCSV(void)
{
  ?CG_ConsoleCmdsMP_DumpParticleSystemsToCSV@@YAXXZ();
}

/*
==============
CG_ConsoleCmdsMP_DumpParticleSystemsToConsole
==============
*/

void CG_ConsoleCmdsMP_DumpParticleSystemsToConsole(void)
{
  ?CG_ConsoleCmdsMP_DumpParticleSystemsToConsole@@YAXXZ();
}

/*
==============
CG_ConsoleCmdsMP_GetListOfATCLientRemoteDebugSubscribedTo
==============
*/

int __fastcall CG_ConsoleCmdsMP_GetListOfATCLientRemoteDebugSubscribedTo(const int **outATClients)
{
  return ?CG_ConsoleCmdsMP_GetListOfATCLientRemoteDebugSubscribedTo@@YAHPEAPEBH@Z(outATClients);
}

/*
==============
CG_ConsoleCmdsMP_Unregister
==============
*/

void CG_ConsoleCmdsMP_Unregister(void)
{
  ?CG_ConsoleCmdsMP_Unregister@@YAXXZ();
}

/*
==============
CG_ConsoleCmdsMP_GetListOfATClientPosSubscribedTo
==============
*/

int __fastcall CG_ConsoleCmdsMP_GetListOfATClientPosSubscribedTo(const int **outATClients)
{
  return ?CG_ConsoleCmdsMP_GetListOfATClientPosSubscribedTo@@YAHPEAPEBH@Z(outATClients);
}

/*
==============
CG_ConsoleCmdsMP_Register
==============
*/

void CG_ConsoleCmdsMP_Register(void)
{
  ?CG_ConsoleCmdsMP_Register@@YAXXZ();
}

/*
==============
CG_ConsoleCmdsMP_VoiceChat_f
==============
*/
void CG_ConsoleCmdsMP_VoiceChat_f()
{
  LocalClientNum_t v0; 
  cg_t *LocalClientGlobals; 
  const char *v2; 
  const char *v3; 
  const char *v4; 

  v0 = Cmd_LocalClientNum();
  LocalClientGlobals = CG_GetLocalClientGlobals(v0);
  if ( LocalClientGlobals->nextSnap && Cmd_Argc() == 2 )
  {
    if ( LocalClientGlobals->predictedPlayerState.pm_type == 6 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)34) )
    {
      v3 = Cmd_Argv(1);
      v4 = j_va("cmd vsay %s\n", v3);
      Cbuf_AddText(v0, v4);
    }
    else
    {
      v2 = UI_SafeTranslateString("CGAME/NOSPECTATORVOICECHAT");
      Com_Printf(0, "%s\n", v2);
    }
  }
}

/*
==============
CG_ConsoleCmdsMP_TeamVoiceChat_f
==============
*/
void CG_ConsoleCmdsMP_TeamVoiceChat_f()
{
  LocalClientNum_t v0; 
  cg_t *LocalClientGlobals; 
  const char *v2; 
  const char *v3; 
  const char *v4; 

  v0 = Cmd_LocalClientNum();
  LocalClientGlobals = CG_GetLocalClientGlobals(v0);
  if ( LocalClientGlobals->nextSnap && Cmd_Argc() == 2 )
  {
    if ( LocalClientGlobals->predictedPlayerState.pm_type == 6 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)34) )
    {
      v3 = Cmd_Argv(1);
      v4 = j_va("cmd vsay_team %s\n", v3);
      Cbuf_AddText(v0, v4);
    }
    else
    {
      v2 = UI_SafeTranslateString("CGAME/NOSPECTATORVOICECHAT");
      Com_Printf(0, "%s\n", v2);
    }
  }
}

/*
==============
CG_ConsoleCmdsMP_EnableATClientRemoteDebug
==============
*/
void CG_ConsoleCmdsMP_EnableATClientRemoteDebug()
{
  LocalClientNum_t v0; 
  const char *v1; 
  int RemoteClientNumFromName; 
  const char *v3; 

  if ( Cmd_Argc() > 1 )
  {
    v0 = Cmd_LocalClientNum();
    v1 = Cmd_Argv(1);
    RemoteClientNumFromName = GetRemoteClientNumFromName(v0, v1);
    if ( RemoteClientNumFromName == -1 )
    {
      Com_PrintWarning(14, "Unknown player name '%s'\n", v1);
    }
    else if ( (unsigned __int64)s_numATClientsRemoteDebugFollowed >= 0xA )
    {
      Com_PrintWarning(14, "Already subscribed to %d ATClients RemoteDebug, please unsubscribe from some of them.\n", 10i64);
    }
    else
    {
      s_subscribedToATClientsRemoteDebug[s_numATClientsRemoteDebugFollowed] = RemoteClientNumFromName;
      v3 = j_va("g_enableATClientRemoteDebug \"%s\"\n", v1);
      Cbuf_AddText(v0, v3);
      ++s_numATClientsRemoteDebugFollowed;
    }
  }
}

/*
==============
CG_ConsoleCmdsMP_DisableATClientRemoteDebug
==============
*/
void CG_ConsoleCmdsMP_DisableATClientRemoteDebug()
{
  LocalClientNum_t v0; 
  const char *v1; 
  int RemoteClientNumFromName; 
  int v3; 
  int *i; 
  const char *v5; 

  if ( Cmd_Argc() > 1 )
  {
    v0 = Cmd_LocalClientNum();
    v1 = Cmd_Argv(1);
    RemoteClientNumFromName = GetRemoteClientNumFromName(v0, v1);
    if ( RemoteClientNumFromName == -1 )
    {
      Com_PrintWarning(14, "Unknown player name '%s'\n", v1);
    }
    else
    {
      v3 = 0;
      if ( s_numATClientsRemoteDebugFollowed > 0 )
      {
        for ( i = s_subscribedToATClientsRemoteDebug; *i != RemoteClientNumFromName; ++i )
        {
          if ( ++v3 >= s_numATClientsRemoteDebugFollowed )
            return;
        }
        --s_numATClientsRemoteDebugFollowed;
        s_subscribedToATClientsRemoteDebug[v3] = -1;
        v5 = j_va("g_disableATClientRemoteDebug \"%s\"\n", v1);
        Cbuf_AddText(v0, v5);
      }
    }
  }
}

/*
==============
CG_ConsoleCmdsMP_EnableATClientPosTracking
==============
*/
void CG_ConsoleCmdsMP_EnableATClientPosTracking()
{
  LocalClientNum_t v0; 
  const char *v1; 
  int RemoteClientNumFromName; 
  int v3; 

  if ( Cmd_Argc() > 1 )
  {
    v0 = Cmd_LocalClientNum();
    v1 = Cmd_Argv(1);
    RemoteClientNumFromName = GetRemoteClientNumFromName(v0, v1);
    if ( RemoteClientNumFromName == -1 )
    {
      Com_PrintWarning(14, "Unknown player name '%s'\n", v1);
    }
    else
    {
      v3 = s_numATClientsPosFollowed;
      if ( (unsigned __int64)s_numATClientsPosFollowed >= 0xA )
      {
        Com_PrintWarning(14, "Already subscribed to %d ATClients pos, please unsubscribe from some of them.\n", 10i64);
      }
      else
      {
        s_subscribedToATClientsPos[s_numATClientsPosFollowed] = RemoteClientNumFromName;
        s_numATClientsPosFollowed = v3 + 1;
      }
    }
  }
}

/*
==============
CG_ConsoleCmdsMP_DisableATClientPosTracking
==============
*/
void CG_ConsoleCmdsMP_DisableATClientPosTracking()
{
  LocalClientNum_t v0; 
  const char *v1; 
  int RemoteClientNumFromName; 
  int v3; 
  int *i; 

  if ( Cmd_Argc() > 1 )
  {
    v0 = Cmd_LocalClientNum();
    v1 = Cmd_Argv(1);
    RemoteClientNumFromName = GetRemoteClientNumFromName(v0, v1);
    if ( RemoteClientNumFromName == -1 )
    {
      Com_PrintWarning(14, "Unknown player name '%s'\n", v1);
    }
    else
    {
      v3 = 0;
      if ( s_numATClientsPosFollowed > 0 )
      {
        for ( i = s_subscribedToATClientsPos; *i != RemoteClientNumFromName; ++i )
        {
          if ( ++v3 >= s_numATClientsPosFollowed )
            return;
        }
        --s_numATClientsPosFollowed;
        s_subscribedToATClientsPos[v3] = -1;
      }
    }
  }
}

/*
==============
CG_ConsoleCmdsMP_DisableAllATClientTracking
==============
*/
__int64 CG_ConsoleCmdsMP_DisableAllATClientTracking()
{
  int v0; 
  int v1; 
  int v2; 
  int *v3; 
  __int64 result; 
  int *v5; 

  v0 = s_numATClientsPosFollowed;
  v1 = 0;
  v2 = 0;
  if ( s_numATClientsPosFollowed > 0 )
  {
    v3 = s_subscribedToATClientsPos;
    do
    {
      --v0;
      *v3 = -1;
      ++v2;
      ++v3;
    }
    while ( v2 < v0 );
    s_numATClientsPosFollowed = v0;
  }
  result = (unsigned int)s_numATClientsRemoteDebugFollowed;
  if ( s_numATClientsRemoteDebugFollowed > 0 )
  {
    v5 = s_subscribedToATClientsRemoteDebug;
    do
    {
      result = (unsigned int)(result - 1);
      *v5 = -1;
      ++v1;
      ++v5;
    }
    while ( v1 < (int)result );
    s_numATClientsRemoteDebugFollowed = result;
  }
  return result;
}

/*
==============
CG_ConsoleCmdsMP_RestartSmokeGrenades_f
==============
*/
void CG_ConsoleCmdsMP_RestartSmokeGrenades_f()
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  CG_MainMP_RewindKillcamEffects(v0, 1);
}

/*
==============
CG_ConsoleCmdsMP_ReplaySave_f
==============
*/
void CG_ConsoleCmdsMP_ReplaySave_f()
{
  LocalClientNum_t v0; 
  __int64 v1; 
  const char *v2; 
  __int64 v3; 
  LocalClientNum_t v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  char dest[64]; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  if ( (unsigned int)v0 >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    v4 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v7) )
      __debugbreak();
    LODWORD(v8) = 2;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v8) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] )
    goto LABEL_14;
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v6) = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v6) )
      __debugbreak();
  }
  if ( clientUIActives[v1].connectionState != CA_ACTIVE )
  {
LABEL_14:
    Com_Printf(14, "Must be connected to a game to request replay save.\n");
  }
  else if ( Cmd_Argc() >= 2 )
  {
    v2 = Cmd_Argv(1);
    Com_sprintf(dest, 0x40ui64, "savereplay %s", v2);
    CL_Main_AddReliableCommand((LocalClientNum_t)v1, dest);
  }
  else
  {
    CL_Main_AddReliableCommand((LocalClientNum_t)v1, "savereplay");
  }
}

/*
==============
CG_ConsoleCmdsMP_DumpParticleSystemsToConsole
==============
*/
void CG_ConsoleCmdsMP_DumpParticleSystemsToConsole(void)
{
  ParticleManager::DebugDumpParticleSystemsToConsole(g_particleManager, 0);
}

/*
==============
CG_ConsoleCmdsMP_DumpParticleSystemsToCSV
==============
*/
void CG_ConsoleCmdsMP_DumpParticleSystemsToCSV(void)
{
  ParticleManager::DebugDumpParticleSystemsToCSV(g_particleManager, (const char *)&queryFormat.fmt + 3);
}

/*
==============
CG_ConsoleCmdsMP_GetListOfATCLientRemoteDebugSubscribedTo
==============
*/
__int64 CG_ConsoleCmdsMP_GetListOfATCLientRemoteDebugSubscribedTo(const int **outATClients)
{
  *outATClients = s_subscribedToATClientsRemoteDebug;
  return (unsigned int)s_numATClientsRemoteDebugFollowed;
}

/*
==============
CG_ConsoleCmdsMP_GetListOfATClientPosSubscribedTo
==============
*/
__int64 CG_ConsoleCmdsMP_GetListOfATClientPosSubscribedTo(const int **outATClients)
{
  *outATClients = s_subscribedToATClientsPos;
  return (unsigned int)s_numATClientsPosFollowed;
}

/*
==============
CG_ConsoleCmdsMP_Register
==============
*/
void CG_ConsoleCmdsMP_Register(void)
{
  Cmd_AddClientCommandList(S_CG_CONSOLE_COMMANDS_MP, 0xAu);
  Cmd_AddClientCommandList(S_CG_NULL_CONSOLE_COMMANDS_MP, 0x2Cu);
  CG_Weapons_SetupAutoComplete();
  CG_LatencyTestMP_InitConsoleCommands();
}

/*
==============
CG_ConsoleCmdsMP_Unregister
==============
*/
void CG_ConsoleCmdsMP_Unregister(void)
{
  CG_LatencyTestMP_ShutdownConsoleCommands();
  CG_Weapons_ClearAutoComplete();
  Cmd_RemoveClientCommandList(S_CG_NULL_CONSOLE_COMMANDS_MP, 0x2Cu);
  Cmd_RemoveClientCommandList(S_CG_CONSOLE_COMMANDS_MP, 0xAu);
}

/*
==============
GetRemoteClientNumFromName
==============
*/
__int64 GetRemoteClientNumFromName(const LocalClientNum_t localClientNum, const char *const remotePlayerName)
{
  __int64 v2; 
  CgStatic *v4; 
  unsigned int i; 
  __int64 v6; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  __int64 v15; 
  __int64 v16; 

  v2 = localClientNum;
  if ( remotePlayerName && *remotePlayerName )
  {
    if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
      __debugbreak();
    if ( (unsigned int)v2 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      *(float *)&v16 = CgStatic::ms_allocatedCount;
      LODWORD(v15) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( !CgStatic::ms_cgameStaticsArray[v2] )
    {
      LODWORD(v16) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v16) )
        __debugbreak();
    }
    v4 = CgStatic::ms_cgameStaticsArray[v2];
    for ( i = 0; (int)i < 200; ++i )
    {
      v6 = 0x7FFFFFFFi64;
      v7 = remotePlayerName;
      v8 = (__int64)v4->GetClientInfo(v4, i);
      v9 = v8 + 4;
      if ( v8 == -4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v10 = v9 - (_QWORD)remotePlayerName;
      while ( 1 )
      {
        v11 = v7[v10];
        v12 = v6;
        v13 = *v7++;
        --v6;
        if ( !v12 )
          return i;
        if ( v11 != v13 )
          break;
        if ( !v11 )
          return i;
      }
    }
  }
  return 0xFFFFFFFFi64;
}

