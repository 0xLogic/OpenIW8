/*
==============
Migration_SendMigrateToAck
==============
*/

void __fastcall Migration_SendMigrateToAck(const LocalClientNum_t localClientNum)
{
  ?Migration_SendMigrateToAck@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_LoadMigrationPers
==============
*/

void __fastcall CL_LoadMigrationPers(LocalClientNum_t localClientNum)
{
  ?CL_LoadMigrationPers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_UpdateMigrationProfile
==============
*/

void __fastcall CL_UpdateMigrationProfile(clientMigState_t oldState, clientMigState_t newState)
{
  ?CL_UpdateMigrationProfile@@YAXW4clientMigState_t@@0@Z(oldState, newState);
}

/*
==============
CL_MigrationBackout
==============
*/

int __fastcall CL_MigrationBackout()
{
  return ?CL_MigrationBackout@@YAHXZ();
}

/*
==============
CL_MigrationInit
==============
*/

void CL_MigrationInit(void)
{
  ?CL_MigrationInit@@YAXXZ();
}

/*
==============
CL_MigrationFrame
==============
*/

void __fastcall CL_MigrationFrame(const LocalClientNum_t localClientNum)
{
  ?CL_MigrationFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MigrationPacket
==============
*/

bool __fastcall CL_MigrationPacket(const LocalClientNum_t localClientNum, const char *cmd, netadr_t *from, msg_t *msg)
{
  return ?CL_MigrationPacket@@YA_NW4LocalClientNum_t@@PEBDUnetadr_t@@PEAUmsg_t@@@Z(localClientNum, cmd, from, msg);
}

/*
==============
CL_MigrationHostChosen
==============
*/

void __fastcall CL_MigrationHostChosen(const LocalClientNum_t localClientNum)
{
  ?CL_MigrationHostChosen@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Migrate
==============
*/

void __fastcall CL_Migrate(LocalClientNum_t localClientNum, const XSESSION_INFO *hostInfo)
{
  ?CL_Migrate@@YAXW4LocalClientNum_t@@AEBVXSESSION_INFO@@@Z(localClientNum, hostInfo);
}

/*
==============
CL_SetVerboseMigrationState
==============
*/

void __fastcall CL_SetVerboseMigrationState(const LocalClientNum_t localClientNum, MigrationVerboseState state, const int hostNum, const int data)
{
  ?CL_SetVerboseMigrationState@@YAXW4LocalClientNum_t@@W4MigrationVerboseState@@HH@Z(localClientNum, state, hostNum, data);
}

/*
==============
CL_GetLocalClientMigrationString
==============
*/

const char *__fastcall CL_GetLocalClientMigrationString(const LocalClientNum_t localClientNum)
{
  return ?CL_GetLocalClientMigrationString@@YAPEBDW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
HandleStartMsg
==============
*/
void HandleStartMsg(const LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg)
{
  __int64 v3; 
  int v5; 
  PartyData *PartyData; 
  int v7; 
  LocalClientNum_t v8; 
  int v10; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( clientUIActives[v3].frontEndSceneState[0] )
  {
    Com_Printf(14, "Migration - HandleStartMsg - Got stray 'mstart' message while in front end server\n");
    return;
  }
  v5 = MSG_ReadBit(msg) != 0;
  PartyData = Lobby_GetPartyData();
  PartyMigrate_ClearExpectedNewHost(PartyData);
  Com_Printf(14, "Migration - HandleStartMsg - Called on localClient %i\n", (unsigned int)v3);
  v7 = v5;
  if ( PartyData->inParty )
  {
    HandleStartMsg_Internal((const LocalClientNum_t)PartyData->splitscreenData.mainClient.localClientNum, v5);
    if ( !PartyData->splitscreenData.otherClientActive )
      return;
    v8 = PartyData->splitscreenData.otherClient.localClientNum;
    v7 = v5;
  }
  else
  {
    v8 = (int)v3;
  }
  HandleStartMsg_Internal(v8, v7);
}

/*
==============
HandleSaveDataMsg
==============
*/
void HandleSaveDataMsg(const LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg)
{
  __int64 v4; 
  unsigned __int8 *Buffer; 
  int BufferSize; 
  int Short; 
  unsigned __int64 v8; 
  int v9; 
  unsigned __int8 *v10; 
  int Long; 
  int v12; 
  int v13; 
  msg_t buf; 
  unsigned __int8 data[16]; 

  v4 = localClientNum;
  Buffer = Migration_GetBuffer();
  BufferSize = Migration_GetBufferSize();
  if ( (unsigned int)v4 >= 2 )
  {
    v13 = 2;
    v12 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( clientUIActives[v4].migrationState == CMSTATE_OLDHOSTLEAVING && BufferSize )
  {
    Short = MSG_ReadShort(msg);
    v8 = MSG_ReadShort(msg);
    if ( Short < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 977, ASSERT_TYPE_ASSERT, "(block >= 0)", (const char *)&queryFormat, "block >= 0") )
      __debugbreak();
    if ( (v8 & 0x80000000) != 0i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 978, ASSERT_TYPE_ASSERT, "(blockSize >= 0)", (const char *)&queryFormat, "blockSize >= 0") )
      __debugbreak();
    if ( Short >= 0 && (unsigned int)(v8 - 1) <= 0x4A5 )
    {
      v9 = 1190 * Short;
      if ( 1190 * Short + (int)v8 <= BufferSize )
      {
        v10 = &Buffer[v9];
        MSG_ReadData(msg, v8, v10, BufferSize - v9);
        Long = MSG_ReadLong(msg);
        if ( Long == SaveMemory_ComputeChecksum(v10, v8) )
        {
          MSG_Init(&buf, data, 16);
          MSG_WriteShort(&buf, Short);
          SendToHost((const LocalClientNum_t)v4, "mack", buf.data, buf.cursize);
          Com_Printf(25, "Migration - HandleSaveDataMsg - sending ack for block %i\n", (unsigned int)Short);
        }
        else
        {
          Com_Printf(14, "Checksum mismatch in 'mdata' message, block %i, ignoring.\n", (unsigned int)Short);
        }
      }
    }
  }
  else
  {
    Com_Printf(14, "Got stray 'mdata' message.\n");
  }
}

/*
==============
HandlePingMsg
==============
*/
void HandlePingMsg(const LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg)
{
  int Long; 
  __int128 v6; 
  const PartyData *CurrentParty; 
  int ControllerFromClient; 
  int OurClientNum; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  netadr_t v11; 
  netadr_t adr; 
  msg_t buf; 
  unsigned __int8 data[32]; 

  Long = MSG_ReadLong(msg);
  if ( Long >= 0 )
  {
    v6 = *(_OWORD *)&from->type;
    adr.addrHandleIndex = from->addrHandleIndex;
    v11.addrHandleIndex = adr.addrHandleIndex;
    *(_OWORD *)&adr.type = v6;
    *(_OWORD *)&v11.type = v6;
    if ( NET_IsLocalAddress(&v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 477, ASSERT_TYPE_ASSERT, "(!NET_IsLocalAddress( to ))", (const char *)&queryFormat, "!NET_IsLocalAddress( to )") )
      __debugbreak();
    CurrentParty = Live_GetCurrentParty();
    if ( Session_IsValid(CurrentParty->session) )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      OurClientNum = Live_GetOurClientNum(ControllerFromClient, CurrentParty);
      if ( OurClientNum >= 0 )
      {
        MSG_Init(&buf, data, 32);
        MSG_WriteString(&buf, "pinga");
        MSG_WriteLong(&buf, OurClientNum);
        MSG_WriteLong(&buf, Long);
        if ( buf.overflowed )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 490, ASSERT_TYPE_ASSERT, "(!msg.overflowed)", (const char *)&queryFormat, "!msg.overflowed") )
            __debugbreak();
        }
        LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum(localClientNum);
        NET_OutOfBandData(LocalNetIDFromLocalClientNum, &adr, buf.data, buf.cursize);
      }
    }
  }
}

/*
==============
HandlePingAckMsg
==============
*/
void HandlePingAckMsg(const LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg)
{
  __int64 Long; 
  int v5; 
  const PartyData *PartyData; 
  ClientPing *v7; 
  int v8; 
  int ping; 
  unsigned int v10; 
  unsigned int v11; 
  int SplitscreenClientNumAtSameAddress; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v15; 

  Long = MSG_ReadLong(msg);
  v5 = MSG_ReadLong(msg);
  if ( (unsigned int)Long <= 0x17 )
  {
    PartyData = Lobby_GetPartyData();
    if ( Party_IsMemberRegistered(PartyData, Long) && !Party_IsServer(PartyData, Long) )
    {
      v7 = &s_clientPings[Long];
      v8 = Sys_Milliseconds();
      ping = v7->ping;
      v10 = v8 - v5;
      if ( ping )
        v11 = (int)(v10 + ping) / 2;
      else
        v11 = v10;
      v15 = v10;
      v7->ping = v11;
      Com_Printf(25, "Migration - HandlePingAckMsg - client %i ping %i, latest %i\n", (unsigned int)Long, v11, v15);
      SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(PartyData, Long);
      v13 = SplitscreenClientNumAtSameAddress;
      if ( SplitscreenClientNumAtSameAddress != -1 )
      {
        Com_Printf(25, "Migration - HandlePingAckMsg - Other client at address (%i), copying.\n", (unsigned int)SplitscreenClientNumAtSameAddress);
        v14 = v13;
        *(double *)&s_clientPings[v14].active = *(double *)&v7->active;
        s_clientPings[v14].nextPingTime = v7->nextPingTime;
      }
    }
  }
}

/*
==============
HandleHeaderMsg
==============
*/
void HandleHeaderMsg(const LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg)
{
  __int64 v3; 
  SaveGame *SaveHandle; 
  CgAntiLagMP *Instance; 
  unsigned __int8 *HistoryBufferForMigration; 
  int v9; 
  unsigned int outBufferSize; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  if ( clientUIActives[v3].migrationState == CMSTATE_OLDHOSTLEAVING )
  {
    if ( Migration_GetBufferSize() )
    {
      Com_Printf(14, "Got dupe 'header' message.\n");
    }
    else
    {
      SaveHandle = G_SaveMemoryMP_GetSaveHandle(SAVE_MIGRATION_HANDLE);
      memset_0(SaveHandle, 0, sizeof(SaveGame));
      if ( (_BYTE)CgAntiLag::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_antilag_mp.h", 40, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      Instance = (CgAntiLagMP *)CgAntiLag::GetInstance((const LocalClientNum_t)v3);
      HistoryBufferForMigration = CgAntiLagMP::GetHistoryBufferForMigration(Instance, &outBufferSize);
      Migration_Init(HistoryBufferForMigration, outBufferSize);
      MSG_ReadData(msg, 896, SaveHandle, 896);
      SendToHost((const LocalClientNum_t)v3, "mhack", NULL, 0);
    }
  }
  else
  {
    Com_Printf(14, "Got stray 'header' message.\n");
  }
}

/*
==============
HandleStateMsg
==============
*/
void HandleStateMsg(const LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg)
{
  __int64 v3; 
  MigrationVerboseState Byte; 
  __int64 Bits; 
  unsigned int Long; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  v3 = localClientNum;
  Byte = MSG_ReadByte(msg);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 85, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_gameData.m_clientBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 86, ASSERT_TYPE_ASSERT, "(ms_gameData.m_clientBits > 0)", (const char *)&queryFormat, "ms_gameData.m_clientBits > 0") )
    __debugbreak();
  Bits = MSG_ReadBits(msg, ComCharacterLimits::ms_gameData.m_clientBits);
  if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
    __debugbreak();
  Long = MSG_ReadLong(msg);
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v8 = v3;
  clientUIActives[v8].verboseMigrationState = Byte;
  clientUIActives[v8].verboseMigrationNewHost = Bits;
  clientUIActives[v8].verboseMigrationData = Long;
  if ( Sys_Milliseconds() - s_lastMigrationStatePrintTime > 500 )
  {
    s_lastMigrationStatePrintTime = Sys_Milliseconds();
    Com_Printf(25, "verbose migration state %i, data %i\n", (unsigned int)Byte, Long);
  }
}

/*
==============
CL_GetLocalClientMigrationString
==============
*/
char *CL_GetLocalClientMigrationString(const LocalClientNum_t localClientNum)
{
  clientMigState_t LocalClientMigrationState; 
  __int64 v3; 
  const char *ConnectInfoString; 
  const char *v5; 
  clientUIActive_t *LocalClientUIGlobals; 
  clientUIActive_t *v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  const char *v14; 
  int ClientName; 
  const char *v16; 
  int verboseMigrationData; 
  int v18; 
  int v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  uiClientState_t state; 
  char buf[48]; 

  s_verboseMigrationState[0] = 0;
  LocalClientMigrationState = CL_GetLocalClientMigrationState(localClientNum);
  v3 = LocalClientMigrationState;
  if ( LocalClientMigrationState == CMSTATE_NEWHOSTCONNECT )
  {
    CL_GetClientState(localClientNum, &state);
    ConnectInfoString = UI_GetConnectInfoString(&state);
    v5 = UI_SafeTranslateString(s_stateStrings[3]);
    if ( ConnectInfoString )
      Com_sprintf(s_verboseMigrationState, 0x200ui64, "%s\n%s", v5, ConnectInfoString);
    else
      Com_sprintf(s_verboseMigrationState, 0x200ui64, (const char *)&queryFormat, v5);
    return s_verboseMigrationState;
  }
  if ( LocalClientMigrationState == CMSTATE_INACTIVE )
    return s_verboseMigrationState;
  LocalClientUIGlobals = CL_GetLocalClientUIGlobals(localClientNum);
  v7 = LocalClientUIGlobals;
  switch ( LocalClientUIGlobals->verboseMigrationState )
  {
    case MVSTATE_WAITING:
LABEL_20:
      v21 = UI_SafeTranslateString("MPUI/MIGRATION_EVALUATING");
      v22 = UI_SafeTranslateString(s_stateStrings[v3]);
      Com_sprintf(s_verboseMigrationState, 0x200ui64, "%s\n%s", v22, v21);
      return s_verboseMigrationState;
    case MVSTATE_RATING:
      if ( CL_GetClientName(localClientNum, LocalClientUIGlobals->verboseMigrationNewHost, buf, 0x2Fui64) )
      {
        verboseMigrationData = v7->verboseMigrationData;
        v18 = 0xFFFF - (unsigned __int16)verboseMigrationData;
        v19 = 3 - ((verboseMigrationData >> 16) & 3);
        v20 = UI_SafeTranslateString(s_stateStrings[v3]);
        Com_sprintf(s_verboseMigrationState, 0x200ui64, "%s\n new host %s, nat type %i, avg ping %i", v20, buf, v19, v18);
        return s_verboseMigrationState;
      }
      goto LABEL_20;
    case MVSTATE_SENDING:
      v12 = LocalClientUIGlobals->verboseMigrationData;
      v13 = UI_SafeTranslateString("MPUI/MIGRATION_SENDING");
      v14 = UI_ReplaceConversionInt(v13, v12);
      ClientName = CL_GetClientName(localClientNum, v7->verboseMigrationNewHost, buf, 0x2Fui64);
      v16 = UI_SafeTranslateString(s_stateStrings[v3]);
      if ( ClientName )
        Com_sprintf(s_verboseMigrationState, 0x200ui64, "%s\n%s to %s", v16, v14, buf);
      else
        Com_sprintf(s_verboseMigrationState, 0x200ui64, "%s\n%s", v16, v14);
      break;
    case MVSTATE_MIGRATING:
      v9 = CL_GetClientName(localClientNum, LocalClientUIGlobals->verboseMigrationNewHost, buf, 0x2Fui64);
      v10 = UI_SafeTranslateString("MPUI/MIGRATING_SESSION");
      v11 = UI_SafeTranslateString(s_stateStrings[v3]);
      if ( v9 )
        Com_sprintf(s_verboseMigrationState, 0x200ui64, "%s\n%s to %s", v11, v10, buf);
      else
        Com_sprintf(s_verboseMigrationState, 0x200ui64, "%s\n%s", v11, v10);
      break;
    default:
      v8 = UI_SafeTranslateString(s_stateStrings[v3]);
      Com_sprintf(s_verboseMigrationState, 0x200ui64, (const char *)&queryFormat, v8);
      break;
  }
  return s_verboseMigrationState;
}

/*
==============
CL_LoadMigrationPers
==============
*/
void CL_LoadMigrationPers(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  clientUIActive_t *LocalClientUIGlobals; 
  ClActiveClientMP *ClientMP; 
  unsigned int clviewangles_aab; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v1].migrationState )
  {
    LocalClientUIGlobals = CL_GetLocalClientUIGlobals((const LocalClientNum_t)v1);
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v1);
    ClientMP->cmdInputAccumTimeMs = LocalClientUIGlobals->migrationPers.cmdInputAccumTimeMs;
    ClientMP->stanceHeld = LocalClientUIGlobals->migrationPers.stanceHeld;
    ClientMP->crouchToggle = LocalClientUIGlobals->migrationPers.crouchToggle;
    ClientMP->crouchHoldReleased = LocalClientUIGlobals->migrationPers.crouchHoldReleased;
    ClientMP->stance = LocalClientUIGlobals->migrationPers.stance;
    ClientMP->stanceOnButtonDown = LocalClientUIGlobals->migrationPers.stanceOnButtonDown;
    ClientMP->stanceTime = LocalClientUIGlobals->migrationPers.stanceTime;
    clviewangles_aab = ClientMP->clviewangles_aab;
    ClientMP->cgameUserCmdWeapon = LocalClientUIGlobals->migrationPers.cgameUserCmdWeapon;
    ClientMP->cgameUserCmdOffHand = LocalClientUIGlobals->migrationPers.cgameUserCmdOffHand;
    ClientMP->cgameUserCmdAlternate = LocalClientUIGlobals->migrationPers.cgameUserCmdAlternate;
    LODWORD(ClientMP->clViewangles.clViewangles.v[2]) = (((_DWORD)ClientMP + 436) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 436) ^ clviewangles_aab) + 2);
    CG_MainMP_LoadMigrationPers((LocalClientNum_t)v1);
  }
}

/*
==============
CL_Migrate
==============
*/
void CL_Migrate(LocalClientNum_t localClientNum, const XSESSION_INFO *hostInfo)
{
  __int64 v2; 
  __int64 v4; 
  bool IsLocalhost; 
  bool v6; 
  const char *v7; 
  ClConnectionDataMP *ClientConnectionData; 
  const XNADDR *Address; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  ClActiveClientMP *ClientMP; 
  __int64 type; 
  __int64 v13; 

  v2 = localClientNum;
  if ( !XSESSION_INFO::IsValidSessionId((XSESSION_INFO *)hostInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 239, ASSERT_TYPE_ASSERT, "(hostInfo.IsValidSessionId())", (const char *)&queryFormat, "hostInfo.IsValidSessionId()") )
    __debugbreak();
  SV_MainMP_KillLocalServer();
  cl_serverLoadingMap = 0;
  g_waitingForServer = 0;
  if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 246, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "!Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  if ( Com_IsAnyLocalServerStarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 247, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerStarting())", (const char *)&queryFormat, "!Com_IsAnyLocalServerStarting()") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(type) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", type, 2) )
      __debugbreak();
  }
  v4 = v2;
  if ( clientUIActives[v2].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 248, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tAccessing server session, must not be in frontend state", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( s_followPartyBackout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 249, ASSERT_TYPE_ASSERT, "(!s_followPartyBackout)", "%s\n\tGot the final migrate message but we wanted to follow the party host", "!s_followPartyBackout") )
    __debugbreak();
  SND_StopSounds(SND_STOP_ALL);
  IsLocalhost = XSESSION_INFO::IsLocalhost((XSESSION_INFO *)hostInfo);
  if ( !BG_Omnvar_IsInitialized() )
  {
    if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
      __debugbreak();
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    CL_MainMP_SetOmnvars(cls.m_activeGameMapName, cls.m_activeGameTypeName);
  }
  v6 = LODWORD(cl_maxLocalClients) != 0;
  CL_MainMP_GameAllocate(1);
  CL_MainMP_ClearGameState();
  ScriptableCl_ResetChangeQueue((const LocalClientNum_t)v2);
  if ( !v6 )
    Com_InitDObj();
  cl_serverLoadingMap = 0;
  v7 = "localhost";
  if ( !IsLocalhost )
    v7 = "Remote XboxOne";
  Core_strcpy(cls.servername, 0x100ui64, v7);
  ClConnectionMP::ClearClientConnection((const LocalClientNum_t)v2);
  ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v2);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v13) = 2;
    LODWORD(type) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", type, v13) )
      __debugbreak();
  }
  if ( clientUIActives[v4].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 321, ASSERT_TYPE_ASSERT, "(clientUIActive->frontEndSceneState == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "clientUIActive->frontEndSceneState == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v13) = 2;
    LODWORD(type) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", type, v13) )
      __debugbreak();
  }
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v4].connectionState, 1i64);
  clientUIActives[v4].connectionState = CA_CONNECTING;
  CL_SetLocalClientMigrationState(v2, CMSTATE_NEWHOSTCONNECT);
  Address = XSESSION_INFO::GetAddress((XSESSION_INFO *)hostInfo);
  LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)v2);
  NetConnection::Open(&ClientConnectionData->serverConnection, LocalNetIDFromLocalClientNum, hostInfo, Address, NS_MAXCLIENTS, TYPE_GAME);
  clientUIActives[v4].keyCatchers &= 1u;
  ClientConnectionData->connectPacketCount = 0;
  ClientConnectionData->connectLastSendTime = -99999;
  cls.serverId = 0;
  ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v2);
  ClientMP->serverId = 0;
  ClientMP->timeoutcount = 0;
  SND_FadeAllSounds(1.0, 1000);
}

/*
==============
CL_MigrationBackout
==============
*/
__int64 CL_MigrationBackout()
{
  return (unsigned int)s_followPartyBackout;
}

/*
==============
CL_MigrationFrame
==============
*/
void CL_MigrationFrame(const LocalClientNum_t localClientNum)
{
  __int128 v1; 
  int ControllerFromClient; 
  clientMigState_t LocalClientMigrationState; 
  float v5; 
  double Float_Internal_DebugName; 
  const PartyData *PartyData; 
  int OurClientNum; 
  int v9; 
  ClientPing *v10; 
  bool IsMemberRegistered; 
  int v12; 
  int SplitscreenClientNumAtSameAddress; 
  __int64 v14; 
  NetConnection *MemberConnection; 
  int v16; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  msg_t buf; 
  unsigned __int8 data[32]; 
  __int128 v20; 

  if ( Live_IsInLiveGame() && CL_Mgr_IsClientActive(localClientNum) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( Live_IsSignedIn(ControllerFromClient) )
    {
      LocalClientMigrationState = CL_GetLocalClientMigrationState(localClientNum);
      if ( (unsigned __int8)CL_GetLocalClientFrontEntState(localClientNum) )
      {
        if ( LocalClientMigrationState )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 381, ASSERT_TYPE_ASSERT, "(migrationState == CMSTATE_INACTIVE)", (const char *)&queryFormat, "migrationState == CMSTATE_INACTIVE") )
            __debugbreak();
        }
      }
      else
      {
        if ( CL_GetLocalClientGameConnectionState(localClientNum) )
        {
          if ( LocalClientMigrationState == CMSTATE_LIMBO )
          {
            if ( s_lastPacketTime > 0 )
            {
              v20 = v1;
              v5 = (float)(cls.realtime - s_lastPacketTime);
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_connectTimeout, "cl_connectTimeout");
              if ( v5 > (float)(*(float *)&Float_Internal_DebugName * 2000.0) )
                CL_MainMP_ServerTimedOut(localClientNum);
            }
          }
          else
          {
            s_lastPacketTime = ClConnectionMP::GetClientConnectionData(localClientNum)->lastPacketTime;
          }
        }
        PartyData = Lobby_GetPartyData();
        if ( PeerMesh_IsEnabled(PartyData) && PartyMigrate_CanWeHostLobby(PartyData, ControllerFromClient, 0) && !Party_AreWeServer(PartyData) )
        {
          OurClientNum = Live_GetOurClientNum(ControllerFromClient, PartyData);
          if ( Party_IsServer(PartyData, OurClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 415, ASSERT_TYPE_ASSERT, "(!Party_IsServer( party, Live_GetOurClientNum( localControllerIndex, party ) ))", (const char *)&queryFormat, "!Party_IsServer( party, Live_GetOurClientNum( localControllerIndex, party ) )") )
            __debugbreak();
          if ( Party_GetNumGameSlots(PartyData) > 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 416, ASSERT_TYPE_ASSERT, "(Party_GetNumGameSlots( party ) <= 24)", (const char *)&queryFormat, "Party_GetNumGameSlots( party ) <= MAX_CLIENTS_LISTEN") )
            __debugbreak();
          v9 = 0;
          v10 = s_clientPings;
          do
          {
            IsMemberRegistered = Party_IsMemberRegistered(PartyData, v9);
            if ( v10->active != IsMemberRegistered )
            {
              *(_QWORD *)&v10->active = 0i64;
              v10->nextPingTime = 0;
            }
            v10->active = IsMemberRegistered;
            if ( IsMemberRegistered && !Party_MemberHasLoopbackAddr(PartyData, v9) )
            {
              if ( Party_IsMemberLocalPlayer(PartyData, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 433, ASSERT_TYPE_ASSERT, "(!Party_IsMemberLocalPlayer( party, clientNum ))", (const char *)&queryFormat, "!Party_IsMemberLocalPlayer( party, clientNum )") )
                __debugbreak();
              if ( !Party_IsServer(PartyData, v9) && Sys_Milliseconds() - v10->nextPingTime >= 0 )
              {
                v12 = 1000 * Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cl_migrationPingTime, "cl_migrationPingTime");
                v10->nextPingTime = v12 + Sys_Milliseconds();
                SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(PartyData, v9);
                if ( SplitscreenClientNumAtSameAddress != -1 )
                {
                  v14 = SplitscreenClientNumAtSameAddress;
                  *(double *)&s_clientPings[v14].active = *(double *)&v10->active;
                  s_clientPings[v14].nextPingTime = v10->nextPingTime;
                }
                MemberConnection = (NetConnection *)Party_GetMemberConnection(PartyData, v9);
                if ( NetConnection::IsLocal(MemberConnection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 348, ASSERT_TYPE_ASSERT, "(!connection.IsLocal())", (const char *)&queryFormat, "!connection.IsLocal()") )
                  __debugbreak();
                MSG_Init(&buf, data, 32);
                MSG_WriteString(&buf, "ping");
                v16 = Sys_Milliseconds();
                MSG_WriteLong(&buf, v16);
                if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 353, ASSERT_TYPE_ASSERT, "(!msg.overflowed)", (const char *)&queryFormat, "!msg.overflowed") )
                  __debugbreak();
                LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum(localClientNum);
                NetConnection::SendP2P(MemberConnection, LocalNetIDFromLocalClientNum, buf.data, buf.cursize);
              }
            }
            ++v9;
            ++v10;
          }
          while ( v9 < 24 );
        }
      }
    }
  }
}

/*
==============
CL_MigrationHostChosen
==============
*/
void CL_MigrationHostChosen(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  connstate_t *p_connectionState; 
  int v3; 
  int v4; 

  v1 = localClientNum;
  CL_SetLocalClientMigrationState(localClientNum, CMSTATE_LIMBO);
  if ( s_followPartyBackout )
  {
    Com_Printf(14, "CL - MigrationHostChosen - Waiting for backout request from host.\n");
  }
  else
  {
    if ( (unsigned int)v1 >= 2 )
    {
      v4 = 2;
      v3 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    p_connectionState = &clientUIActives[v1].connectionState;
    Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", *(unsigned int *)p_connectionState, 1i64);
    *p_connectionState = CA_CONNECTING;
  }
}

/*
==============
CL_MigrationInit
==============
*/
void CL_MigrationInit(void)
{
  memset_0(s_clientPings, 0, sizeof(s_clientPings));
  s_lastPacketTime = -1;
}

/*
==============
CL_MigrationPacket
==============
*/
char CL_MigrationPacket(const LocalClientNum_t localClientNum, const char *cmd, netadr_t *from, msg_t *msg)
{
  __int128 v4; 
  const char *string; 
  int v6; 
  __int64 v11; 
  __int64 v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  const dvar_t *v19; 
  float value; 
  double v21; 
  __int128 v23; 
  __int128 v24; 
  int addrHandleIndex; 
  __int128 v26; 

  string = messageHandlers_3[0].string;
  v6 = 0;
  if ( *messageHandlers_3[0].string )
  {
    v11 = 0i64;
    while ( 2 )
    {
      v12 = 0x7FFFFFFFi64;
      if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v13 = (const char *)(cmd - string);
      while ( 1 )
      {
        v14 = (unsigned __int8)string[(_QWORD)v13];
        v15 = v12;
        v16 = *(unsigned __int8 *)string++;
        --v12;
        if ( !v15 )
        {
LABEL_18:
          v26 = v4;
          if ( !messageHandlers_3[v6].func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 1132, ASSERT_TYPE_ASSERT, "(messageHandlers[handler].func)", (const char *)&queryFormat, "messageHandlers[handler].func") )
            __debugbreak();
          v19 = DVARFLT_cl_migrationPacketLoss;
          if ( !DVARFLT_cl_migrationPacketLoss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_migrationPacketLoss") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v19);
          value = v19->current.value;
          v21 = I_random();
          if ( *(float *)&v21 < value && I_strncmp(cmd, "ping", 4ui64) && I_strncmp(cmd, "mbndpck", 7ui64) )
          {
            Com_Printf(25, "Migration - Dropping '%s' msg to test packet loss handling (cl_migrationPacketLoss)\n", cmd);
            return 1;
          }
          else
          {
            v23 = *(_OWORD *)&from->type;
            addrHandleIndex = from->addrHandleIndex;
            v24 = v23;
            ((void (__fastcall *)(_QWORD, __int128 *, msg_t *))messageHandlers_3[v6].func)((unsigned int)localClientNum, &v24, msg);
            return 1;
          }
        }
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
            break;
        }
        if ( !v14 )
          goto LABEL_18;
      }
      ++v11;
      ++v6;
      string = messageHandlers_3[v11].string;
      if ( *string )
        continue;
      break;
    }
  }
  return 0;
}

/*
==============
CL_SetVerboseMigrationState
==============
*/
void CL_SetVerboseMigrationState(const LocalClientNum_t localClientNum, MigrationVerboseState state, const int hostNum, const int data)
{
  __int64 v4; 
  __int64 v8; 
  int v10; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  v8 = v4;
  clientUIActives[v8].verboseMigrationState = state;
  clientUIActives[v8].verboseMigrationNewHost = hostNum;
  clientUIActives[v8].verboseMigrationData = data;
  if ( Sys_Milliseconds() - s_lastMigrationStatePrintTime > 500 )
  {
    s_lastMigrationStatePrintTime = Sys_Milliseconds();
    Com_Printf(25, "verbose migration state %i, data %i\n", (unsigned int)state, (unsigned int)data);
  }
}

/*
==============
CL_UpdateMigrationProfile
==============
*/
void CL_UpdateMigrationProfile(clientMigState_t oldState, clientMigState_t newState)
{
  const char *v3; 
  double v4; 
  double v5; 

  if ( oldState != newState )
  {
    if ( oldState )
    {
      v3 = UI_SafeTranslateString(s_stateStrings[oldState]);
      v4 = (float)((float)(Sys_Milliseconds() - lastProfTime) * 0.001);
      Com_Printf(25, "^6[MIGRATION PROFILE] - %.2f seconds [%s]\n", v4, v3);
      if ( newState == CMSTATE_INACTIVE )
      {
        v5 = (float)((float)(Sys_Milliseconds() - startTime) * 0.001);
        Com_Printf(25, "^6[MIGRATION PROFILE] - %.2f seconds [TOTAL]\n", v5);
      }
      lastProfTime = Sys_Milliseconds();
    }
    else
    {
      lastProfTime = Sys_Milliseconds();
      startTime = Sys_Milliseconds();
    }
  }
}

/*
==============
GetHostRating
==============
*/
__int64 GetHostRating(const LocalClientNum_t localClientNum)
{
  const PartyData *PartyData; 
  int ControllerFromClient; 
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  int OurClientNum; 
  int v10; 
  int *p_ping; 
  int UploadSpeed; 
  const dvar_t *v13; 
  int v14; 
  const dvar_t *v15; 
  unsigned int NecessaryBandwidth; 
  int v17; 
  const dvar_t *v18; 
  unsigned int BandwidthPingBonus; 
  unsigned int v20; 
  unsigned int v21; 
  char *fmt; 
  __int64 v23; 
  __int64 v24; 

  PartyData = Lobby_GetPartyData();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( PartyMigrate_CanWeHostLobby(PartyData, ControllerFromClient, 0) )
  {
    if ( LiveAntiCheat_FeatureIsBanned(13) )
    {
      Com_Printf(25, "Migration - Feature banned, so lowest priority host\n");
      return 0i64;
    }
    else if ( Nav_MeshWillBeLoaded() )
    {
      v6 = CL_Mgr_GetControllerFromClient(localClientNum);
      v7 = 0;
      v8 = 0;
      OurClientNum = Live_GetOurClientNum(v6, PartyData);
      if ( Party_GetNumGameSlots(PartyData) > 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 706, ASSERT_TYPE_ASSERT, "(Party_GetNumGameSlots( party ) <= 24)", (const char *)&queryFormat, "Party_GetNumGameSlots( party ) <= MAX_CLIENTS_LISTEN") )
        __debugbreak();
      v10 = 0;
      p_ping = &s_clientPings[0].ping;
      do
      {
        if ( Party_IsMemberRegistered(PartyData, v10) && !Party_IsServer(PartyData, v10) && !Party_MemberHasLoopbackAddr(PartyData, v10) )
        {
          if ( v10 == OurClientNum )
          {
            LODWORD(v24) = OurClientNum;
            LODWORD(v23) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 720, ASSERT_TYPE_ASSERT, "( clientNum ) != ( ourClientNum )", "%s != %s\n\t%i, %i", "clientNum", "ourClientNum", v23, v24) )
              __debugbreak();
          }
          if ( *((_BYTE *)p_ping - 4) )
          {
            v7 += *p_ping;
            ++v8;
          }
        }
        ++v10;
        p_ping += 3;
      }
      while ( v10 < 24 );
      UploadSpeed = Online_GetUploadSpeed();
      v13 = DVARINT_party_maxplayers;
      v14 = UploadSpeed;
      if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v14 >= Live_GetNecessaryBandwidth(v13->current.integer) )
      {
        if ( CL_GetLocalClientActiveCount() <= 1 )
        {
          if ( v8 )
            v17 = v7 / v8;
          else
            v17 = 999;
          v18 = DVARINT_party_maxplayers;
          if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v18);
          BandwidthPingBonus = PartyMigrate_GetBandwidthPingBonus(v18->current.integer, v14);
          v20 = I_clamp(v17 - BandwidthPingBonus, 0, 0xFFFF);
          v21 = (unsigned __int16)(-1 - v20);
          LODWORD(fmt) = v21;
          Com_Printf(25, "Migration - Our host rating: %i ping, %i bonus = rating: %i\n", v20, BandwidthPingBonus, fmt);
          return v21;
        }
        else
        {
          Com_Printf(25, "Migration - disallowing splitscreen to host\n");
          return 0i64;
        }
      }
      else
      {
        v15 = DVARINT_party_maxplayers;
        if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        NecessaryBandwidth = Live_GetNecessaryBandwidth(v15->current.integer);
        Com_Printf(25, "Migration - insufficient bandwidth to host (%d < %d)\n", (unsigned int)v14, NecessaryBandwidth);
        return 0i64;
      }
    }
    else
    {
      Com_Printf(25, "Migration - This client is incapable of loading nav mesh data so cannot be host.\n");
      return 0i64;
    }
  }
  else
  {
    v4 = CL_Mgr_GetControllerFromClient(localClientNum);
    PartyMigrate_PrintCantHost(PartyData, v4, 0);
    Com_Printf(25, "Migration - Unable to host\n");
    return 0i64;
  }
}

/*
==============
HandleStartMsg_Internal
==============
*/
void HandleStartMsg_Internal(const LocalClientNum_t localClientNum, int followPartyBackout)
{
  __int64 v2; 
  __int64 v4; 
  clientMigState_t LocalClientMigrationState; 
  int v6; 
  ClActiveClientMP *ClientMP; 
  __int64 ClientConnectivity; 
  unsigned int HostRating; 
  int ControllerFromClient; 
  const PartyData *PartyData; 
  int OurClientNum; 
  unsigned int v13; 
  char *fmt; 
  __int64 v15; 
  __int64 v16; 
  msg_t buf; 
  unsigned __int8 data[16]; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = v2;
  if ( clientUIActives[v2].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 863, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v2) == CA_ACTIVE )
  {
    LocalClientMigrationState = CL_GetLocalClientMigrationState((const LocalClientNum_t)v2);
    if ( (unsigned int)LocalClientMigrationState <= CMSTATE_OLDHOSTLEAVING )
    {
      Com_Printf(14, "Migration - HandleStartMsg - Got 'mstart' message\n");
      SND_FadeAllSounds(0.0, 1000);
      v6 = 1;
      if ( CL_GetLocalClientMigrationState((const LocalClientNum_t)v2) != CMSTATE_OLDHOSTLEAVING )
      {
        CL_SetLocalClientMigrationState(v2, CMSTATE_OLDHOSTLEAVING);
        if ( (unsigned int)v2 >= 2 )
        {
          LODWORD(v16) = 2;
          LODWORD(v15) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v2);
        clientUIActives[v4].migrationPers.cmdInputAccumTimeMs = ClientMP->cmdInputAccumTimeMs;
        clientUIActives[v4].migrationPers.stanceHeld = ClientMP->stanceHeld;
        clientUIActives[v4].migrationPers.stance = ClientMP->stance;
        clientUIActives[v4].migrationPers.crouchToggle = ClientMP->crouchToggle;
        clientUIActives[v4].migrationPers.crouchHoldReleased = ClientMP->crouchHoldReleased;
        clientUIActives[v4].migrationPers.stanceOnButtonDown = ClientMP->stanceOnButtonDown;
        clientUIActives[v4].migrationPers.stanceTime = ClientMP->stanceTime;
        clientUIActives[v4].migrationPers.cgameUserCmdWeapon = ClientMP->cgameUserCmdWeapon;
        clientUIActives[v4].migrationPers.cgameUserCmdOffHand = ClientMP->cgameUserCmdOffHand;
        clientUIActives[v4].migrationPers.cgameUserCmdAlternate = ClientMP->cgameUserCmdAlternate;
        CG_MainMP_SaveMigrationPers((LocalClientNum_t)v2);
      }
      if ( followPartyBackout && Party_IsGameHostInPrivateParty() )
      {
        Com_Printf(14, "Migration - HandleStartMsg - Since the game host is leaving, asking us to leave and he's also in our party, we're marking ourself so we won't host\n");
        LODWORD(ClientConnectivity) = 0;
        HostRating = 0;
      }
      else
      {
        LODWORD(ClientConnectivity) = 0;
        HostRating = GetHostRating((const LocalClientNum_t)v2);
        v6 = 0;
      }
      s_followPartyBackout = v6;
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
      PartyData = Lobby_GetPartyData();
      OurClientNum = Live_GetOurClientNum(ControllerFromClient, PartyData);
      v13 = OurClientNum;
      if ( OurClientNum >= 0 )
      {
        ClientConnectivity = PartyMigrate_GetClientConnectivity(PartyData, OurClientNum);
        Com_Printf(25, "Migration - Our client (%i) connectivity bits: 0x%x\n", v13, ClientConnectivity);
      }
      else
      {
        Com_PrintWarning(25, "Migration - Unknown client num, no connectivity bits.\n");
      }
      LODWORD(fmt) = v2;
      Com_Printf(14, "Migration - HandleStartMsg - Sending our host rating (%i), connectivity bits (%x) to the host for client %i.\n", HostRating, (unsigned int)ClientConnectivity, fmt);
      MSG_Init(&buf, data, 16);
      MSG_WriteLong(&buf, HostRating);
      MSG_WriteLong(&buf, ClientConnectivity);
      SendToHost((const LocalClientNum_t)v2, "mrate", buf.data, buf.cursize);
    }
    else
    {
      Com_Printf(14, "Migration - HandleStartMsg - Got stray/dupe 'mstart' message, migration in progress (state %i)\n", (unsigned int)LocalClientMigrationState);
    }
  }
  else
  {
    Com_Printf(14, "Migration - HandleStartMsg - Got stray 'mstart' message\n");
  }
}

/*
==============
Migration_SendMigrateToAck
==============
*/
void Migration_SendMigrateToAck(const LocalClientNum_t localClientNum)
{
  if ( CL_GetLocalClientGameConnectionState(localClientNum) == CA_ACTIVE )
    SendToHost(localClientNum, "mtoack", NULL, 0);
}

/*
==============
SendToHost
==============
*/
void SendToHost(const LocalClientNum_t localClientNum, const char *cmd, const unsigned __int8 *data, int len)
{
  ClConnectionDataMP *ClientConnectionData; 
  Mem_LargeLocal dataa; 
  msg_t buf; 

  Mem_LargeLocal::Mem_LargeLocal(&dataa, 0x9AAui64, "min_msg_buf buf");
  MSG_Init(&buf, (unsigned __int8 *)dataa.m_ptr, 2474);
  if ( buf.cursize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 503, ASSERT_TYPE_ASSERT, "(msg.cursize == 0)", (const char *)&queryFormat, "msg.cursize == 0", -2i64) )
    __debugbreak();
  if ( buf.bit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 504, ASSERT_TYPE_ASSERT, "(msg.bit == 0)", (const char *)&queryFormat, "msg.bit == 0") )
    __debugbreak();
  ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
  MSG_WriteString(&buf, cmd);
  if ( data )
  {
    if ( len <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 512, ASSERT_TYPE_ASSERT, "(len > 0)", (const char *)&queryFormat, "len > 0") )
      __debugbreak();
    MSG_WriteData(&buf, data, len);
  }
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_migration_mp.cpp", 516, ASSERT_TYPE_ASSERT, "(!msg.overflowed)", (const char *)&queryFormat, "!msg.overflowed") )
    __debugbreak();
  NetConnection::SendUnreliable(&ClientConnectionData->serverConnection, buf.data, buf.cursize);
  Mem_LargeLocal::~Mem_LargeLocal(&dataa);
}

