/*
==============
SvClientSP::IsLocalClient
==============
*/

bool __fastcall SvClientSP::IsLocalClient(SvClientSP *this)
{
  return ?IsLocalClient@SvClientSP@@UEBA_NXZ(this);
}

/*
==============
SvClientSP::ResetSnapshotFramesMyChanges
==============
*/

void __fastcall SvClientSP::ResetSnapshotFramesMyChanges(SvClientSP *this)
{
  ?ResetSnapshotFramesMyChanges@SvClientSP@@UEAAXXZ(this);
}

/*
==============
SvClientSP::IsTestClient
==============
*/

bool __fastcall SvClientSP::IsTestClient(SvClientSP *this)
{
  return ?IsTestClient@SvClientSP@@UEBA_NXZ(this);
}

/*
==============
SV_ClientSP_SendGameState
==============
*/

void SV_ClientSP_SendGameState(void)
{
  ?SV_ClientSP_SendGameState@@YAXXZ();
}

/*
==============
SvClientSP::SendServerCommand
==============
*/

void __fastcall SvClientSP::SendServerCommand(SvClientSP *this, svscmd_type type, const char *cmd)
{
  ?SendServerCommand@SvClientSP@@UEAAXW4svscmd_type@@PEBD@Z(this, type, cmd);
}

/*
==============
SV_ClientSP_Think
==============
*/

void __fastcall SV_ClientSP_Think(int clientNum, usercmd_s *cmd, bool initialCall)
{
  ?SV_ClientSP_Think@@YAXHPEAUusercmd_s@@_N@Z(clientNum, cmd, initialCall);
}

/*
==============
SV_ClientSP_DirectConnect
==============
*/

void SV_ClientSP_DirectConnect(void)
{
  ?SV_ClientSP_DirectConnect@@YAXXZ();
}

/*
==============
SV_ClientSP_ExecuteCommand
==============
*/

void __fastcall SV_ClientSP_ExecuteCommand(int clientNum, const char *s)
{
  ?SV_ClientSP_ExecuteCommand@@YAXHPEBD@Z(clientNum, s);
}

/*
==============
SV_ClientSP_EnterWorld
==============
*/

void __fastcall SV_ClientSP_EnterWorld(unsigned int clientNum)
{
  ?SV_ClientSP_EnterWorld@@YAXI@Z(clientNum);
}

/*
==============
SvClientSP::SendServerCommandMsg
==============
*/

void __fastcall SvClientSP::SendServerCommandMsg(SvClientSP *this, svscmd_type type, const msg_t *msg)
{
  ?SendServerCommandMsg@SvClientSP@@UEAAXW4svscmd_type@@PEBUmsg_t@@@Z(this, type, msg);
}

/*
==============
SvClientSP::IsLocalClient
==============
*/
char SvClientSP::IsLocalClient(SvClientSP *this)
{
  return 1;
}

/*
==============
SvClientSP::IsTestClient
==============
*/
bool SvClientSP::IsTestClient(SvClientSP *this)
{
  return 0;
}

/*
==============
SvClientSP::ResetSnapshotFramesMyChanges
==============
*/
void SvClientSP::ResetSnapshotFramesMyChanges(SvClientSP *this)
{
  ;
}

/*
==============
SV_ClientSP_DirectConnect
==============
*/
void SV_ClientSP_DirectConnect(void)
{
  SvClient *CommonClient; 

  Com_DPrintf(15, "SVC_DirectConnect()\n");
  if ( SvClient::ms_clientCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.cpp", 41, ASSERT_TYPE_ASSERT, "(SvClient::GetClientCount() == 1)", "%s\n\tSP only supports a single client", "SvClient::GetClientCount() == 1") )
    __debugbreak();
  if ( BYTE1(SvGameGlobals::ms_allocatedType) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_persistent_globals_sp.h", 80, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
    __debugbreak();
  if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  LODWORD(SvPersistentGlobals::ms_svPersistent[1].__vftable) = 1;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(0);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 205, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  ((void (__fastcall *)(SvClient *, _QWORD))CommonClient->~SvClient)(CommonClient, 0i64);
  memset_0(&CommonClient->state + 1, 0, 0xDB27ui64);
  CommonClient->state = CS_FREE;
  CommonClient->__vftable = (SvClient_vtbl *)&SvClientSP::`vftable';
  CommonClient->gentity = SvGameGlobals::GetSvGameGlobalsCommon()->gentities;
  SV_InitSP_InitReliableCommandsForClient((SvClientSP *)CommonClient);
  CommonClient->state = CS_ACTIVE;
}

/*
==============
SV_ClientSP_EnterWorld
==============
*/
void SV_ClientSP_EnterWorld(unsigned int clientNum)
{
  __int64 v1; 
  SvClient *CommonClient; 
  playerState_s *PlayerstateForClientNum; 
  int commandTime; 
  int inputTime; 

  v1 = (int)clientNum;
  if ( SvClient::GetCommonClient(clientNum)->state != CS_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.cpp", 91, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( clientNum ) == SvClientConnectionState::CS_ACTIVE )", (const char *)&queryFormat, "SvClient::GetConnectionState( clientNum ) == SvClientConnectionState::CS_ACTIVE") )
    __debugbreak();
  G_ClientSP_Connect(v1);
  if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(v1);
  CommonClient->lastUsercmd.serverTime = G_Main_GetTime();
  PlayerstateForClientNum = SV_Game_GetPlayerstateForClientNum(v1);
  commandTime = CommonClient->lastUsercmd.commandTime;
  PlayerstateForClientNum->commandTime = commandTime;
  PlayerstateForClientNum->commandTimeInterpolated = commandTime;
  inputTime = CommonClient->lastUsercmd.inputTime;
  PlayerstateForClientNum->inputTime = inputTime;
  PlayerstateForClientNum->inputTimeInterpolated = inputTime;
  CommonClient->gentity = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v1];
}

/*
==============
SV_ClientSP_ExecuteCommand
==============
*/
void SV_ClientSP_ExecuteCommand(int clientNum, const char *s)
{
  if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.cpp", 121, ASSERT_TYPE_ASSERT, "(SV_Loaded())", (const char *)&queryFormat, "SV_Loaded()") )
    __debugbreak();
  if ( SvClient::GetCommonClient(clientNum)->state != CS_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.cpp", 122, ASSERT_TYPE_ASSERT, "(SvClient::GetConnectionState( clientNum ) == SvClientConnectionState::CS_ACTIVE)", (const char *)&queryFormat, "SvClient::GetConnectionState( clientNum ) == SvClientConnectionState::CS_ACTIVE") )
    __debugbreak();
  G_CmdSP_ClientCommand(clientNum, s);
}

/*
==============
SV_ClientSP_SendGameState
==============
*/
void SV_ClientSP_SendGameState(void)
{
  SvGameGlobals *SvGameGlobalsCommon; 
  ClConfigStringsSP *ClConfigStringsSP; 
  unsigned int NetChecksum; 

  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  ClConfigStringsSP = ClConfigStringsSP::GetClConfigStringsSP();
  ClConfigStringsSP::ParseConfigStrings(ClConfigStringsSP, SvGameGlobalsCommon->configstrings);
  NetChecksum = ScriptableSv_GetNetChecksum();
  CL_ParseSP_SetScriptableChecksum(NetChecksum);
}

/*
==============
SV_ClientSP_Think
==============
*/
void SV_ClientSP_Think(int clientNum, usercmd_s *cmd, bool initialCall)
{
  usercmd_s *p_lastUsercmd; 
  __int64 v7; 
  __int128 v8; 

  if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.cpp", 130, ASSERT_TYPE_ASSERT, "(SV_Loaded())", (const char *)&queryFormat, "SV_Loaded()") )
    __debugbreak();
  if ( SvClient::GetCommonClient(clientNum)->state != CS_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.cpp", 131, ASSERT_TYPE_ASSERT, "(SvClient::GetConnectionState( clientNum ) == SvClientConnectionState::CS_ACTIVE)", (const char *)&queryFormat, "SvClient::GetConnectionState( clientNum ) == SvClientConnectionState::CS_ACTIVE") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  p_lastUsercmd = &SvClient::GetCommonClient(clientNum)->lastUsercmd;
  v7 = 2i64;
  do
  {
    p_lastUsercmd = (usercmd_s *)((char *)p_lastUsercmd + 128);
    v8 = *(_OWORD *)&cmd->buttons;
    cmd = (usercmd_s *)((char *)cmd + 128);
    *(_OWORD *)&p_lastUsercmd[-1].offHand.attachmentVariationIndices[13] = v8;
    *(_OWORD *)&p_lastUsercmd[-1].offHand.weaponCamo = *(_OWORD *)&cmd[-1].offHand.weaponCamo;
    *(_OWORD *)p_lastUsercmd[-1].remoteControlMove = *(_OWORD *)cmd[-1].remoteControlMove;
    *(_OWORD *)p_lastUsercmd[-1].vehAngles = *(_OWORD *)cmd[-1].vehAngles;
    *(_OWORD *)&p_lastUsercmd[-1].vehOrgZ = *(_OWORD *)&cmd[-1].vehOrgZ;
    *(_OWORD *)&p_lastUsercmd[-1].gunYOfs = *(_OWORD *)&cmd[-1].gunYOfs;
    *(_OWORD *)p_lastUsercmd[-1].sightedClientsMask.data = *(_OWORD *)cmd[-1].sightedClientsMask.data;
    *(_OWORD *)&p_lastUsercmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&cmd[-1].sightedClientsMask.data[4];
    --v7;
  }
  while ( v7 );
  p_lastUsercmd->buttons = cmd->buttons;
  G_ActiveSP_ClientThink(clientNum, initialCall);
}

/*
==============
SvClientSP::SendServerCommand
==============
*/
void SvClientSP::SendServerCommand(SvClientSP *this, svscmd_type type, const char *cmd)
{
  SV_MainSP_AddServerCommand(this, cmd);
}

/*
==============
SvClientSP::SendServerCommandMsg
==============
*/
void SvClientSP::SendServerCommandMsg(SvClientSP *this, svscmd_type type, const msg_t *msg)
{
  ;
}

