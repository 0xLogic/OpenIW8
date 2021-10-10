/*
==============
CL_Live_RequestClientDrop
==============
*/

void __fastcall CL_Live_RequestClientDrop(const int clientNum, LiveClientDropType dropType, const char *reason)
{
  ?CL_Live_RequestClientDrop@@YAXHW4LiveClientDropType@@PEBD@Z(clientNum, dropType, reason);
}

/*
==============
SV_Live_SetPlayerInfo
==============
*/

void __fastcall SV_Live_SetPlayerInfo(const int clientNum, const BG_SynchronizedPlayerInfo *playerInfo)
{
  ?SV_Live_SetPlayerInfo@@YAXHAEBUBG_SynchronizedPlayerInfo@@@Z(clientNum, playerInfo);
}

/*
==============
SV_Live_AddConnectingClient
==============
*/

void __fastcall SV_Live_AddConnectingClient(const int clientNum)
{
  ?SV_Live_AddConnectingClient@@YAXH@Z(clientNum);
}

/*
==============
SV_Live_GetClientDropRequest
==============
*/

LiveClientDropType __fastcall SV_Live_GetClientDropRequest(const SvClientMP *cl)
{
  return ?SV_Live_GetClientDropRequest@@YA?AW4LiveClientDropType@@PEBVSvClientMP@@@Z(cl);
}

/*
==============
SV_Live_ClearPlayerInfo
==============
*/

void __fastcall SV_Live_ClearPlayerInfo(const int clientNum)
{
  ?SV_Live_ClearPlayerInfo@@YAXH@Z(clientNum);
}

/*
==============
SV_Live_ClearDropFlagClient
==============
*/

void __fastcall SV_Live_ClearDropFlagClient(SvClientMP *cl)
{
  ?SV_Live_ClearDropFlagClient@@YAXPEAVSvClientMP@@@Z(cl);
}

/*
==============
SV_Live_RemoveClient
==============
*/

void __fastcall SV_Live_RemoveClient(const int clientNum, const char *reason, int tellThem, const NetCloseStyle closeStyle)
{
  ?SV_Live_RemoveClient@@YAXHPEBDHW4NetCloseStyle@@@Z(clientNum, reason, tellThem, closeStyle);
}

/*
==============
SV_Live_SetPlayerInfo_NoBroadcast
==============
*/

void __fastcall SV_Live_SetPlayerInfo_NoBroadcast(const int clientNum, const BG_SynchronizedPlayerInfo *playerInfo)
{
  ?SV_Live_SetPlayerInfo_NoBroadcast@@YAXHAEBUBG_SynchronizedPlayerInfo@@@Z(clientNum, playerInfo);
}

/*
==============
SV_Live_ClearPlayerInfo_NoBroadcast
==============
*/

void __fastcall SV_Live_ClearPlayerInfo_NoBroadcast(const int clientNum)
{
  ?SV_Live_ClearPlayerInfo_NoBroadcast@@YAXH@Z(clientNum);
}

/*
==============
CL_Live_RequestClientDrop
==============
*/
void CL_Live_RequestClientDrop(const int clientNum, LiveClientDropType dropType, const char *reason)
{
  const dvar_t *v6; 
  SvClient *CommonClient; 
  const char *v8; 
  bool v9; 
  const dvar_t *v10; 
  BOOL v11; 
  PartyData *PartyData; 
  PartyRequestHandle *handle; 
  __int64 v14; 

  if ( !Lobby_AreWeHost() )
  {
    v6 = DVARBOOL_systemlink;
    if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( (!v6->current.enabled || !g_partyData.areWeHost) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 26, ASSERT_TYPE_ASSERT, "(Lobby_AreWeHost() || (Dvar_GetBool_Internal_DebugName( DVARBOOL_systemlink, \"systemlink\" ) && g_partyData.areWeHost))", (const char *)&queryFormat, "Lobby_AreWeHost() || (Dvar_GetBool( systemlink ) && g_partyData.areWeHost)") )
      __debugbreak();
  }
  if ( !Com_IsGameLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 28, ASSERT_TYPE_ASSERT, "(Com_IsGameLocalServerRunning())", (const char *)&queryFormat, "Com_IsGameLocalServerRunning()") )
    __debugbreak();
  if ( (unsigned int)dropType >= SV_LIVE_DROP_COUNT )
  {
    LODWORD(v14) = 4;
    LODWORD(handle) = dropType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 29, ASSERT_TYPE_ASSERT, "(unsigned)( dropType ) < (unsigned)( SV_LIVE_DROP_COUNT )", "dropType doesn't index SV_LIVE_DROP_COUNT\n\t%i not in [0, %i)", handle, v14) )
      __debugbreak();
  }
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  if ( SvClient::GetCommonClient(clientNum)->state || *(_DWORD *)&CommonClient[782].lastUsercmd.scriptedMeleeTarget )
  {
    v8 = reason;
  }
  else
  {
    Com_PrintWarning(131097, "Client %i is already CS_FREE and the server doesn't know about them. Removing them immediately from the lobby\n", (unsigned int)clientNum);
    v8 = NULL;
    v9 = dropType == SV_LIVE_DROP_INACTIVE;
    v10 = DVARBOOL_systemlink;
    v11 = !v9;
    if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled && g_partyData.areWeHost )
      PartyData = &g_partyData;
    else
      PartyData = Lobby_GetPartyData();
    PartyHost_RemovePlayerAsync(PartyData, clientNum, v11, reason, NET_CLOSE_SOFT, NULL);
    dropType = SV_LIVE_DROP_NONE;
  }
  LODWORD(CommonClient[854].lastUsercmd.rollSensitivity) = dropType;
  *(_QWORD *)CommonClient[854].lastUsercmd.sightedClientsMask.data = v8;
}

/*
==============
SV_Live_AddConnectingClient
==============
*/
void SV_Live_AddConnectingClient(const int clientNum)
{
  PartyData *CurrentParty; 
  const PartyData *ServerLobby; 
  const PartyData *PartyData; 
  PartyData *v5; 
  const XUID *Xuid; 
  int MemberNatType; 
  NetConnection *MemberConnection; 
  const PartyData *v9; 
  int v10; 
  __int64 v11; 
  unsigned int v12; 
  XUID result; 
  BG_SynchronizedPlayerInfo playerInfo; 

  bdSecurityID::bdSecurityID(&playerInfo.partyId);
  XUID::XUID(&playerInfo.xuid);
  if ( clientNum >= SvClient::ms_clientCount )
  {
    v12 = SvClient::ms_clientCount;
    v10 = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 146, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( BYTE1(SvGameGlobals::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_persistent_globals_mp.h", 166, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
    __debugbreak();
  if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( BYTE2(SvPersistentGlobals::ms_svPersistent[4].m_skelMemSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 147, ASSERT_TYPE_ASSERT, "( !SvPersistentGlobalsMP::IsFrontEndServer() )", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( Lobby_IsInLobby() )
  {
    Com_Printf(131086, "SV - Client %i connected through lobby session. Setting up his BG_SynchronizedPlayerInfo\n", (unsigned int)clientNum);
    CurrentParty = Live_GetCurrentParty();
    if ( CurrentParty != SV_MainMP_GetServerLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 155, ASSERT_TYPE_ASSERT, "( Live_GetCurrentParty() == SV_MainMP_GetServerLobby() )", (const char *)&queryFormat, "Live_GetCurrentParty() == SV_MainMP_GetServerLobby()") )
      __debugbreak();
    ServerLobby = SV_MainMP_GetServerLobby();
    if ( !Party_IsMemberRegistered(ServerLobby, clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 156, ASSERT_TYPE_ASSERT, "( Party_IsMemberRegistered( SV_MainMP_GetServerLobby(), clientNum ) )", (const char *)&queryFormat, "Party_IsMemberRegistered( SV_MainMP_GetServerLobby(), clientNum )") )
      __debugbreak();
    PartyData = Lobby_GetPartyData();
    if ( !Party_IsMemberIndexDataAvailable(PartyData, clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 158, ASSERT_TYPE_ASSERT, "( Party_IsMemberIndexDataAvailable( Lobby_GetPartyData(), clientNum ) )", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( Lobby_GetPartyData(), clientNum )") )
      __debugbreak();
    v5 = SV_MainMP_GetServerLobby();
    if ( !Session_IsValid(v5->session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 165, ASSERT_TYPE_ASSERT, "( Session_IsValid( serverLobby->session ) )", (const char *)&queryFormat, "Session_IsValid( serverLobby->session )") )
      __debugbreak();
    BG_SynchronizedPlayerInfo_Reset(&playerInfo);
    Xuid = Party_GetXuid(&result, v5, clientNum);
    XUID::operator=(&playerInfo.xuid, Xuid);
    playerInfo.platformId = Party_GetPlatformId(v5, clientNum);
    playerInfo.clientPlatform[0] = Party_GetMemberPlatform(v5, clientNum);
    if ( !Party_GetClientXNAddr(v5, clientNum, &playerInfo.xnaddr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 176, ASSERT_TYPE_ASSERT, "(Party_GetClientXNAddr( serverLobby, clientNum, &serverPlayerInfo.xnaddr ))", (const char *)&queryFormat, "Party_GetClientXNAddr( serverLobby, clientNum, &serverPlayerInfo.xnaddr )") )
      __debugbreak();
    MemberNatType = Party_GetMemberNatType(v5, clientNum);
    playerInfo.natType = MemberNatType;
    if ( (unsigned int)(MemberNatType - 1) > 2 )
    {
      LODWORD(v11) = MemberNatType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 178, ASSERT_TYPE_ASSERT, "( ( serverPlayerInfo.natType > 0 && serverPlayerInfo.natType <= XONLINE_NAT_STRICT ) )", "%s\n\t( serverPlayerInfo.natType ) = %i", "( serverPlayerInfo.natType > 0 && serverPlayerInfo.natType <= XONLINE_NAT_STRICT )", v11) )
        __debugbreak();
    }
    MemberConnection = (NetConnection *)Party_GetMemberConnection(v5, clientNum);
    playerInfo.localNetId = NetConnection::GetNetId(MemberConnection);
    playerInfo.partyId = *SV_ClientMP_GetPrivatePartyId(clientNum);
    playerInfo.isGuestAccount = Party_IsMemberGuestAccount(v5, clientNum) != 0;
    v9 = Lobby_GetPartyData();
    playerInfo.isHeadless = Party_IsMemberHeadless(v9, clientNum);
    SV_Live_SetPlayerInfo_Internal(clientNum, &playerInfo, 1);
  }
  bdSecurityID::~bdSecurityID(&playerInfo.partyId);
}

/*
==============
SV_Live_ClearDropFlagClient
==============
*/
void SV_Live_ClearDropFlagClient(SvClientMP *cl)
{
  if ( cl )
  {
    cl->liveDropRequest = SV_LIVE_DROP_NONE;
    cl->liveDropRequestReason = NULL;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 55, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
      __debugbreak();
    MEMORY[0x3C1B0] = 0;
    MEMORY[0x3C1B8] = 0i64;
  }
}

/*
==============
SV_Live_ClearPlayerInfo
==============
*/
void SV_Live_ClearPlayerInfo(const int clientNum)
{
  SV_Live_ClearPlayerInfo_Interal(clientNum, 1);
}

/*
==============
SV_Live_ClearPlayerInfo_Interal
==============
*/
void SV_Live_ClearPlayerInfo_Interal(const int clientNum, const bool allowBroadcast)
{
  BG_SynchronizedPlayerInfo playerInfo; 

  bdSecurityID::bdSecurityID(&playerInfo.partyId);
  XUID::XUID(&playerInfo.xuid);
  BG_SynchronizedPlayerInfo_Reset(&playerInfo);
  SV_Live_SetPlayerInfo_Internal(clientNum, &playerInfo, allowBroadcast);
  bdSecurityID::~bdSecurityID(&playerInfo.partyId);
}

/*
==============
SV_Live_ClearPlayerInfo_NoBroadcast
==============
*/
void SV_Live_ClearPlayerInfo_NoBroadcast(const int clientNum)
{
  SV_Live_ClearPlayerInfo_Interal(clientNum, 0);
}

/*
==============
SV_Live_GetClientDropRequest
==============
*/
__int64 SV_Live_GetClientDropRequest(const SvClientMP *cl)
{
  if ( cl )
    return (unsigned int)cl->liveDropRequest;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 64, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  return MEMORY[0x3C1B0];
}

/*
==============
SV_Live_RemoveClient
==============
*/
void SV_Live_RemoveClient(const int clientNum, const char *reason, int tellThem, const NetCloseStyle closeStyle)
{
  SvClient *CommonClient; 
  const netadr_t *Netadr; 
  bool IsLoopback; 
  PartyData *ServerLobby; 
  netadr_t result; 

  if ( BYTE1(SvGameGlobals::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_persistent_globals_mp.h", 166, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
    __debugbreak();
  if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( BYTE2(SvPersistentGlobals::ms_svPersistent[4].m_skelMemSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 218, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  if ( NetConnection::IsOpened((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) )
  {
    Netadr = NetConnection::GetNetadr((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], &result);
    SvClientMP::RemoveClientAtAddress(Netadr);
  }
  IsLoopback = NetConnection::IsLoopback((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]);
  NetConnection::Close((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], closeStyle);
  if ( !IsLoopback && !SV_IsDemoPlaying() )
  {
    ServerLobby = SV_MainMP_GetServerLobby();
    if ( Party_IsMemberRegistered(ServerLobby, clientNum) )
      PartyHost_RemovePlayerAsync(ServerLobby, clientNum, tellThem, reason, closeStyle, NULL);
  }
  if ( SvClient::GetCommonClient(clientNum)->state == CS_FREE )
    *(_DWORD *)&CommonClient[782].lastUsercmd.scriptedMeleeTarget = 0;
  SV_Live_ClearPlayerInfo_Interal(clientNum, 1);
}

/*
==============
SV_Live_SetPlayerInfo
==============
*/
void SV_Live_SetPlayerInfo(const int clientNum, const BG_SynchronizedPlayerInfo *playerInfo)
{
  SV_Live_SetPlayerInfo_Internal(clientNum, playerInfo, 1);
}

/*
==============
SV_Live_SetPlayerInfo_Internal
==============
*/
void SV_Live_SetPlayerInfo_Internal(const int clientNum, const BG_SynchronizedPlayerInfo *playerInfo, const bool allowBroadcast)
{
  __int64 v3; 
  BG_SynchronizedPlayerInfo *v6; 
  bool IsValid; 
  bool v8; 
  SvGameGlobals *v9; 
  __int64 v10; 
  msg_t buf; 
  unsigned __int8 data[256]; 

  v3 = clientNum;
  if ( clientNum >= (int)SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 72, ASSERT_TYPE_ASSERT, "(clientNum < SvClient::GetClientCount( ))", (const char *)&queryFormat, "clientNum < SvClient::GetClientCount( )") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 991, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 992, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v3 >= SvClient::ms_clientCount )
  {
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 993, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v10, SvClient::ms_clientCount) )
      __debugbreak();
  }
  v6 = SvClientMP::ms_playerInfos[(unsigned int)v3];
  if ( !BG_SynchronizedPlayerInfo::Equals(v6, playerInfo) )
  {
    IsValid = XUID::IsValid(&playerInfo->xuid);
    *(__m256i *)v6->xnaddr.addrBuff = *(__m256i *)playerInfo->xnaddr.addrBuff;
    *(__m256i *)&v6->xnaddr.addrBuff[32] = *(__m256i *)&playerInfo->xnaddr.addrBuff[32];
    *(__m256i *)&v6->xnaddr.addrBuff[64] = *(__m256i *)&playerInfo->xnaddr.addrBuff[64];
    *(__m256i *)&v6->xuid.m_id = *(__m256i *)&playerInfo->xuid.m_id;
    v8 = IsValid;
    if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    v9 = SvGameGlobals::ms_svGameGlobals;
    if ( allowBroadcast && (SV_Loaded() || v9->restarting) )
    {
      MSG_Init(&buf, data, 256);
      MSG_WriteByte(&buf, 86i64);
      MSG_WriteByte(&buf, v3);
      MSG_WriteBool(&buf, v8);
      if ( v8 )
        BG_SynchronizedPlayerInfo::Serialize(v6, &buf);
      if ( buf.overflowed )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_live_mp.cpp", 102, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
          __debugbreak();
      }
      SV_Game_BroadcastServerCommandMsg(SV_CMD_RELIABLE, &buf);
    }
  }
}

/*
==============
SV_Live_SetPlayerInfo_NoBroadcast
==============
*/
void SV_Live_SetPlayerInfo_NoBroadcast(const int clientNum, const BG_SynchronizedPlayerInfo *playerInfo)
{
  SV_Live_SetPlayerInfo_Internal(clientNum, playerInfo, 0);
}

