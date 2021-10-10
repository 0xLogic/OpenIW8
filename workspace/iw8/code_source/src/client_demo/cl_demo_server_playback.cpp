/*
==============
CL_DemoServerPlayback_SvWriteGamestate
==============
*/

void __fastcall CL_DemoServerPlayback_SvWriteGamestate(void (__fastcall *write)(const void *, int, int), const int clientNum, const int serverMessageSequence, const int reliableSequence, const unsigned __int8 *compressedBuf, const int compressedSize)
{
  ?CL_DemoServerPlayback_SvWriteGamestate@@YAXP6AXPEBXHH@ZHHHPEBEH@Z(write, clientNum, serverMessageSequence, reliableSequence, compressedBuf, compressedSize);
}

/*
==============
CL_DemoServerPlayback_ReadMsg
==============
*/

void __fastcall CL_DemoServerPlayback_ReadMsg(LocalClientNum_t localClientNum)
{
  ?CL_DemoServerPlayback_ReadMsg@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_DemoServerPlayback_SvInitClientPlayback
==============
*/

void __fastcall CL_DemoServerPlayback_SvInitClientPlayback(int (__fastcall *demoread)(void *, int, int), unsigned __int8 *playbackBuf, const unsigned int playbackBufSize)
{
  ?CL_DemoServerPlayback_SvInitClientPlayback@@YAXP6AHPEAXHH@ZPEAEI@Z(demoread, playbackBuf, playbackBufSize);
}

/*
==============
CL_DemoServerPlayback_SvWriteRawMessage
==============
*/

void __fastcall CL_DemoServerPlayback_SvWriteRawMessage(void (__fastcall *write)(const void *, int, int), const int clientNum, const int serverMessageSequence, const unsigned __int8 *data, const int len)
{
  ?CL_DemoServerPlayback_SvWriteRawMessage@@YAXP6AXPEBXHH@ZHHPEBEH@Z(write, clientNum, serverMessageSequence, data, len);
}

/*
==============
CL_DemoServerPlayback_SvWriteClientStats
==============
*/

void __fastcall CL_DemoServerPlayback_SvWriteClientStats(void (__fastcall *write)(const void *, int, int), const int clientNum, const unsigned __int8 *statsBuf, const unsigned int statsBufSize)
{
  ?CL_DemoServerPlayback_SvWriteClientStats@@YAXP6AXPEBXHH@ZHPEBEI@Z(write, clientNum, statsBuf, statsBufSize);
}

/*
==============
CL_DemoServerPlayback_SvWriteClientArchive
==============
*/

void __fastcall CL_DemoServerPlayback_SvWriteClientArchive(void (__fastcall *write)(const void *, int, int), const playerState_s *ps, const ClientExtrapData *extrapData, int clientNum, const int index)
{
  ?CL_DemoServerPlayback_SvWriteClientArchive@@YAXP6AXPEBXHH@ZPEBUplayerState_s@@AEBUClientExtrapData@@HH@Z(write, ps, extrapData, clientNum, index);
}

/*
==============
CL_DemoServerPlayback_GetClientPlayerData
==============
*/

unsigned __int8 *__fastcall CL_DemoServerPlayback_GetClientPlayerData(LocalClientNum_t localClientNum)
{
  return ?CL_DemoServerPlayback_GetClientPlayerData@@YAPEAEW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_DemoServerPlayback_GetClientPlayerData
==============
*/
ClDemoServerPlayback *CL_DemoServerPlayback_GetClientPlayerData(LocalClientNum_t localClientNum)
{
  ClDemoServerPlayback *result; 

  if ( !CL_Demo_IsPlayingServer(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 313, ASSERT_TYPE_ASSERT, "(CL_Demo_IsPlayingServer( localClientNum ))", (const char *)&queryFormat, "CL_Demo_IsPlayingServer( localClientNum )") )
    __debugbreak();
  result = s_demoServerPlaybackData;
  if ( !s_demoServerPlaybackData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 314, ASSERT_TYPE_ASSERT, "(s_demoServerPlaybackData != nullptr)", (const char *)&queryFormat, "s_demoServerPlaybackData != nullptr") )
      __debugbreak();
    return s_demoServerPlaybackData;
  }
  return result;
}

/*
==============
CL_DemoServerPlayback_ReadDemoNetworkPacket
==============
*/
void CL_DemoServerPlayback_ReadDemoNetworkPacket(LocalClientNum_t localClientNum, bool init)
{
  unsigned __int8 *m_ptr; 
  ClConnectionDataMP *ClientConnectionData; 
  int (__fastcall *readDemo)(void *, int, int); 
  __int64 cursize; 
  bool v8; 
  unsigned int v9; 
  int v10; 
  int reliableSequence; 
  Mem_LargeLocal data; 
  msg_t buf; 
  int v14; 

  Mem_LargeLocal::Mem_LargeLocal(&data, 0x243D8ui64, "max_msg_buf bufData");
  m_ptr = (unsigned __int8 *)data.m_ptr;
  ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
  if ( !ClientConnectionData->demoCommon.readDemo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 68, ASSERT_TYPE_ASSERT, "(clcData->demoCommon.readDemo)", (const char *)&queryFormat, "clcData->demoCommon.readDemo", -2i64) )
    __debugbreak();
  readDemo = ClientConnectionData->demoCommon.readDemo;
  if ( readDemo(&v14, 4, localClientNum) != 4 )
    goto LABEL_7;
  ClientConnectionData->serverMessageSequence = v14;
  if ( init )
  {
    if ( readDemo(&v14, 4, localClientNum) != 4 )
    {
LABEL_7:
      Com_Printf(14, "CL_Demo_ServerPlaybackCompleted\n");
      s_demoServerPlaybackData = NULL;
      CL_MainMP_DisconnectLocalClient(localClientNum, 0);
      goto LABEL_23;
    }
    ClientConnectionData->lastExecutedServerCommand = v14;
  }
  MSG_Init(&buf, m_ptr, 148440);
  if ( readDemo(&buf.cursize, 4, localClientNum) != 4 )
    goto LABEL_7;
  cursize = (unsigned int)buf.cursize;
  v8 = buf.cursize <= -1;
  if ( buf.cursize < -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 108, ASSERT_TYPE_ASSERT, "(msg.cursize >= -1)", (const char *)&queryFormat, "msg.cursize >= -1") )
      __debugbreak();
    cursize = (unsigned int)buf.cursize;
    v8 = buf.cursize <= -1;
  }
  if ( v8 )
  {
LABEL_19:
    CL_Demo_ServerPlaybackCompleted(localClientNum);
    goto LABEL_23;
  }
  if ( (int)cursize > buf.maxsize )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14420E378, 298i64);
    cursize = (unsigned int)buf.cursize;
  }
  v9 = readDemo(buf.data, cursize, localClientNum);
  if ( v9 != buf.cursize )
  {
    Com_Printf(14, "Demo file was truncated.\n");
    goto LABEL_19;
  }
  ClientConnectionData->lastPacketTime = cls.realtime;
  buf.readcount = 0;
  v10 = MSG_ReadLong(&buf);
  ClientConnectionData->reliableAcknowledge = v10 & 0x3FFFFFFF;
  buf.compressionFlags = v10 & 0xC0000000;
  reliableSequence = ClientConnectionData->reliableSequence;
  if ( ClientConnectionData->reliableAcknowledge >= reliableSequence - 128 )
  {
    CL_ParseMP_ParseServerMessage(localClientNum, &buf);
  }
  else
  {
    ClientConnectionData->reliableAcknowledge = reliableSequence;
    Com_Printf(14, "SV Demo Playback: Cannot decode message since lost command which generates the key.\n");
  }
LABEL_23:
  Mem_LargeLocal::~Mem_LargeLocal(&data);
}

/*
==============
CL_DemoServerPlayback_ReadMsg
==============
*/
void CL_DemoServerPlayback_ReadMsg(LocalClientNum_t localClientNum)
{
  ClConnectionDataMP *ClientConnectionData; 
  int (__fastcall *readDemo)(void *, int, int); 
  ClConnectionDataMP *v4; 
  int (__fastcall *v5)(void *, int, int); 
  unsigned int v6; 
  __int64 v7; 
  unsigned __int8 v8; 
  char v9; 
  int v10; 

  if ( localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 226, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( LOCAL_CLIENT_0 )", "%s == %s\n\t%i, %i", "localClientNum", "LOCAL_CLIENT_0", localClientNum, 0i64) )
    __debugbreak();
  if ( SV_DemoMP_CanReadDemo() )
  {
    ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
    if ( !ClientConnectionData->demoCommon.readDemo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 233, ASSERT_TYPE_ASSERT, "(clcData->demoCommon.readDemo)", (const char *)&queryFormat, "clcData->demoCommon.readDemo") )
      __debugbreak();
    readDemo = ClientConnectionData->demoCommon.readDemo;
    if ( readDemo(&v8, 1, localClientNum) != 1 )
      goto LABEL_32;
    if ( v8 )
    {
      switch ( v8 )
      {
        case 1u:
          if ( !s_demoServerPlaybackData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 200, ASSERT_TYPE_ASSERT, "(s_demoServerPlaybackData != nullptr)", (const char *)&queryFormat, "s_demoServerPlaybackData != nullptr") )
            __debugbreak();
          v4 = ClConnectionMP::GetClientConnectionData(localClientNum);
          if ( !v4->demoCommon.readDemo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 203, ASSERT_TYPE_ASSERT, "(clcData->demoCommon.readDemo)", (const char *)&queryFormat, "clcData->demoCommon.readDemo") )
            __debugbreak();
          v5 = v4->demoCommon.readDemo;
          if ( v5(&v10, 4, localClientNum) != 4 || v10 != 66672 || (v6 = v5(s_demoServerPlaybackData, 66672, localClientNum), v6 != v10) )
          {
            Com_Printf(14, "CL_Demo_ServerPlaybackCompleted\n");
            s_demoServerPlaybackData = NULL;
            CL_MainMP_DisconnectLocalClient(localClientNum, 0);
          }
          break;
        case 2u:
          CL_DemoServerPlayback_ReadDemoNetworkPacket(localClientNum, 0);
          break;
        case 3u:
          CL_DemoServerPlayback_ReadDemoNetworkPacket(localClientNum, 1);
          break;
        default:
          LODWORD(v7) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 258, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid command %i in demo file", v7) )
            __debugbreak();
          CL_Demo_ServerPlaybackCompleted(localClientNum);
          break;
      }
    }
    else
    {
      CL_ReadDemoClientArchive(localClientNum);
    }
    if ( readDemo(&v9, 1, localClientNum) != 1 || v9 != 5 )
    {
      Com_Printf(14, "SV Demo Playback: Did not fully parse message (1).\n");
LABEL_32:
      Com_Printf(14, "CL_Demo_ServerPlaybackCompleted\n");
      s_demoServerPlaybackData = NULL;
      CL_MainMP_DisconnectLocalClient(localClientNum, 0);
    }
  }
}

/*
==============
CL_DemoServerPlayback_SvInitClientPlayback
==============
*/
void CL_DemoServerPlayback_SvInitClientPlayback(int (*demoread)(void *, int, int), unsigned __int8 *playbackBuf, const unsigned int playbackBufSize)
{
  ClConnectionDataMP *ClientConnectionData; 
  int ControllerFromClient; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 275, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !playbackBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 276, ASSERT_TYPE_ASSERT, "(playbackBuf)", (const char *)&queryFormat, "playbackBuf") )
    __debugbreak();
  if ( !playbackBufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 277, ASSERT_TYPE_ASSERT, "(playbackBufSize)", (const char *)&queryFormat, "playbackBufSize") )
    __debugbreak();
  ClConnectionMP::ClearClientConnection(LOCAL_CLIENT_0);
  CL_Demo_SetDemoState(LOCAL_CLIENT_0, CLIENT_DEMO_STATE_PLAYING_SERVER);
  ClientConnectionData = ClConnectionMP::GetClientConnectionData(LOCAL_CLIENT_0);
  Core_strcpy(ClientConnectionData->demoCommon.name, 0x100ui64, (const char *)&queryFormat.fmt + 3);
  ClientConnectionData->demoCommon.readDemo = demoread;
  CL_SetLocalClientActive(LOCAL_CLIENT_0, 1);
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[0].connectionState, 3i64);
  clientUIActives[0].connectionState = CA_CONNECTED;
  CL_StreamSync_ClientSetup(LOCAL_CLIENT_0);
  Core_strcpy(cls.servername, 0x100ui64, (const char *)&queryFormat.fmt + 3);
  if ( playbackBufSize < 0x10470 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 298, ASSERT_TYPE_ASSERT, "( playbackBufSize ) >= ( sizeof( ClDemoServerPlayback ) )", "%s >= %s\n\t%i, %i", "playbackBufSize", "sizeof( ClDemoServerPlayback )", playbackBufSize, 66672) )
    __debugbreak();
  s_demoServerPlaybackData = (ClDemoServerPlayback *)playbackBuf;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  LuaShared_PlayerData_SetupForDemoPlayback(ControllerFromClient);
  memset_0(s_demoServerPlaybackData, 0, sizeof(ClDemoServerPlayback));
}

/*
==============
CL_DemoServerPlayback_SvWriteClientArchive
==============
*/
void CL_DemoServerPlayback_SvWriteClientArchive(void (*write)(const void *, int, int), const playerState_s *ps, const ClientExtrapData *extrapData, int clientNum, const int index)
{
  const dvar_t *v9; 
  __int16 v13; 
  char v15; 
  char v16[7]; 
  int v17[4]; 

  if ( !write && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 394, ASSERT_TYPE_ASSERT, "(write)", (const char *)&queryFormat, "write") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 395, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = DCONST_DVARFLT_com_userCmdMaxExtrapTranslation;
  if ( !DCONST_DVARFLT_com_userCmdMaxExtrapTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxExtrapTranslation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  _XMM10 = 0i64;
  __asm
  {
    vroundss xmm2, xmm10, xmm1, 1
    vroundss xmm0, xmm10, xmm2, 1
  }
  v17[0] = truncate_cast<short,int>((int)*(float *)&_XMM2);
  v13 = truncate_cast<short,int>((int)*(float *)&_XMM0);
  __asm { vroundss xmm0, xmm10, xmm2, 1 }
  v17[1] = v13;
  v17[2] = truncate_cast<short,int>((int)*(float *)&_XMM0);
  v15 = 0;
  v16[0] = 5;
  write(&v15, 1, clientNum);
  write(&index, 4, clientNum);
  write(ps, 4, clientNum);
  write(&ps->inputTime, 4, clientNum);
  write(&ps->origin, 12, clientNum);
  write(&ps->velocity, 12, clientNum);
  write(&ps->movementDir, 4, clientNum);
  write(&ps->vehicleState, 84, clientNum);
  write(&ps->viewangles, 12, clientNum);
  write(&ps->footstepCount, 2, clientNum);
  write(v17, 12, clientNum);
  write(&extrapData->time, 4, clientNum);
  write(extrapData->packedBobCycle, 8, clientNum);
  write(v16, 1, clientNum);
}

/*
==============
CL_DemoServerPlayback_SvWriteClientStats
==============
*/
void CL_DemoServerPlayback_SvWriteClientStats(void (*write)(const void *, int, int), const int clientNum, const unsigned __int8 *statsBuf, const unsigned int statsBufSize)
{
  char v7; 
  char v8; 
  int v9; 

  v9 = statsBufSize;
  if ( !write && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 321, ASSERT_TYPE_ASSERT, "(write)", (const char *)&queryFormat, "write") )
    __debugbreak();
  if ( !statsBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 322, ASSERT_TYPE_ASSERT, "(statsBuf)", (const char *)&queryFormat, "statsBuf") )
    __debugbreak();
  if ( !s_demoServerPlaybackData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 323, ASSERT_TYPE_ASSERT, "(s_demoServerPlaybackData != nullptr)", (const char *)&queryFormat, "s_demoServerPlaybackData != nullptr") )
    __debugbreak();
  if ( v9 != 66672 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 324, ASSERT_TYPE_ASSERT, "( statsBufSize ) == ( sizeof( s_demoServerPlaybackData->persistentDataBuffer ) )", "%s == %s\n\t%i, %i", "statsBufSize", "sizeof( s_demoServerPlaybackData->persistentDataBuffer )", v9, 66672) )
    __debugbreak();
  v7 = 1;
  v8 = 5;
  write(&v7, 1, clientNum);
  write(&v9, 4, clientNum);
  write(statsBuf, v9, clientNum);
  write(&v8, 1, clientNum);
}

/*
==============
CL_DemoServerPlayback_SvWriteGamestate
==============
*/
void CL_DemoServerPlayback_SvWriteGamestate(void (*write)(const void *, int, int), const int clientNum, const int serverMessageSequence, const int reliableSequence, const unsigned __int8 *compressedBuf, const int compressedSize)
{
  char v8[40]; 
  char v9; 
  int v10; 
  int v11; 

  v11 = reliableSequence;
  v10 = serverMessageSequence;
  if ( !write && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 340, ASSERT_TYPE_ASSERT, "(write)", (const char *)&queryFormat, "write") )
    __debugbreak();
  if ( !compressedBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 341, ASSERT_TYPE_ASSERT, "(compressedBuf)", (const char *)&queryFormat, "compressedBuf") )
    __debugbreak();
  v9 = 3;
  v8[0] = 5;
  write(&v9, 1, clientNum);
  write(&v10, 4, clientNum);
  write(&v11, 4, clientNum);
  write(&compressedSize, 4, clientNum);
  write(compressedBuf, compressedSize, clientNum);
  write(v8, 1, clientNum);
}

/*
==============
CL_DemoServerPlayback_SvWriteRawMessage
==============
*/
void CL_DemoServerPlayback_SvWriteRawMessage(void (*write)(const void *, int, int), const int clientNum, const int serverMessageSequence, const unsigned __int8 *data, const int len)
{
  char v8; 
  int v9; 
  char v10; 

  v9 = serverMessageSequence;
  if ( !write && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 364, ASSERT_TYPE_ASSERT, "(write)", (const char *)&queryFormat, "write") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 365, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v8 = 2;
  v10 = 5;
  write(&v8, 1, clientNum);
  write(&v9, 4, clientNum);
  if ( len < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 376, ASSERT_TYPE_ASSERT, "(len >= 0)", (const char *)&queryFormat, "len >= 0") )
    __debugbreak();
  write(&len, 4, clientNum);
  write(data, len, clientNum);
  write(&v10, 1, clientNum);
}

/*
==============
CL_Demo_ServerPlaybackCompleted
==============
*/
void CL_Demo_ServerPlaybackCompleted(LocalClientNum_t localClientNum)
{
  Com_Printf(14, "CL_Demo_ServerPlaybackCompleted\n");
  s_demoServerPlaybackData = NULL;
  CL_MainMP_DisconnectLocalClient(localClientNum, 0);
}

/*
==============
CL_ReadDemoClientArchive
==============
*/
void CL_ReadDemoClientArchive(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClConnectionDataMP *ClientConnectionData; 
  ClActiveClientMP *v3; 
  int (__fastcall *readDemo)(void *, int, int); 
  int v5; 
  float v6; 
  int v7; 
  int commandTime[3]; 
  ClPredictResultMP predictedData; 

  v1 = localClientNum;
  ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
  if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  v3 = (ClActiveClientMP *)ClActiveClient::ms_activeClients[v1];
  if ( !ClientConnectionData->demoCommon.readDemo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_server_playback.cpp", 165, ASSERT_TYPE_ASSERT, "(clcData->demoCommon.readDemo)", (const char *)&queryFormat, "clcData->demoCommon.readDemo") )
    __debugbreak();
  readDemo = ClientConnectionData->demoCommon.readDemo;
  if ( readDemo(&v7, 4, v1) == 4 )
  {
    readDemo(commandTime, 4, v1);
    readDemo(&predictedData.inputTime, 4, v1);
    readDemo(&predictedData.origin, 12, v1);
    readDemo(&predictedData.velocity, 12, v1);
    readDemo(&predictedData.movementDir, 4, v1);
    readDemo(&predictedData.vehicle, 84, v1);
    readDemo(&predictedData.viewangles, 12, v1);
    readDemo(&predictedData.footstepCount, 2, v1);
    readDemo(&predictedData.extrapData, 12, v1);
    readDemo(&predictedData.extrapData.time, 4, v1);
    readDemo(predictedData.extrapData.packedBobCycle, 8, v1);
    ClActiveClientMP::SetPredictedData(v3, v7 & 0x7F, commandTime[0], &predictedData);
  }
  else
  {
    Com_Printf(14, "CL_Demo_ServerPlaybackCompleted\n");
    s_demoServerPlaybackData = NULL;
    CL_MainMP_DisconnectLocalClient((LocalClientNum_t)v1, 0);
  }
}

