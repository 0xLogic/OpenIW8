/*
==============
CL_PacketEvents_Receive
==============
*/

void CL_PacketEvents_Receive(void)
{
  ?CL_PacketEvents_Receive@@YAXXZ();
}

/*
==============
CL_PacketEvents_Dispatch
==============
*/
void CL_PacketEvents_Dispatch(netadr_t *adr, msg_t *netmsg)
{
  LocalClientNum_t v4; 
  netsrc_t targetLocalNetID; 
  int addrHandleIndex; 
  int v7; 
  unsigned int v8; 
  __int128 v9; 
  char v10; 
  netsrc_t v11; 
  unsigned __int8 *data; 
  unsigned int v13; 
  const char *v14; 
  __int64 v15; 
  unsigned __int8 *v16; 
  unsigned int v17; 
  const char *v18; 
  unsigned __int8 *v19; 
  unsigned int v20; 
  const char *v21; 
  ClConnection *ClientConnection; 
  __int128 v23; 
  ClConnection_vtbl *v24; 
  __int128 v25; 
  __int64 v26; 
  __int64 v27; 
  netadr_t v28; 
  netadr_t v29; 

  if ( !netmsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 242, ASSERT_TYPE_ASSERT, "(netmsg)", (const char *)&queryFormat, "netmsg") )
    __debugbreak();
  if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS )
  {
    v4 = LOCAL_CLIENT_0;
    while ( 1 )
    {
      targetLocalNetID = netmsg->targetLocalNetID;
      if ( (targetLocalNetID == v4 || targetLocalNetID == NS_MAXCLIENTS) && (CL_AllLocalClientsInactive() || CL_IsLocalClientActive(v4)) )
      {
        addrHandleIndex = adr->addrHandleIndex;
        v7 = Sys_Milliseconds();
        v8 = v7;
        if ( netmsg->cursize >= 4 && *(_DWORD *)netmsg->data == -1 )
        {
          v9 = *(_OWORD *)&adr->type;
          v28.addrHandleIndex = addrHandleIndex;
          *(_OWORD *)&v28.type = v9;
          v10 = CL_PacketEvents_HandleConnectionlessPacket(v4, &v28, netmsg, v7);
          goto LABEL_39;
        }
        v11 = netmsg->targetLocalNetID;
        if ( v11 == NS_MAXCLIENTS )
        {
          data = netmsg->data;
          *(_OWORD *)&v28.type = *(_OWORD *)&adr->type;
          v28.addrHandleIndex = addrHandleIndex;
          v13 = *(_DWORD *)data;
          v14 = NET_AdrToString(&v28);
          Com_PrintWarning(14, "CL_PacketEvents_Process: %s: Got msg sequence %i but destination netId is not a client. This is okay if we just recently left a game.\n", v14, v13);
        }
        else
        {
          if ( (unsigned int)v11 >= NS_MAXCLIENTS )
          {
            LODWORD(v27) = 2;
            LODWORD(v26) = netmsg->targetLocalNetID;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( msg->targetLocalNetID ) < (unsigned)( NS_MAXCLIENTS )", "msg->targetLocalNetID doesn't index NS_MAXCLIENTS\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          v15 = netmsg->targetLocalNetID;
          if ( (unsigned int)v15 >= 2 )
          {
            LODWORD(v27) = 2;
            LODWORD(v26) = netmsg->targetLocalNetID;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 156, ASSERT_TYPE_ASSERT, "(unsigned)( (*outLocalClientNum) ) < (unsigned)( 2 )", "(*outLocalClientNum) doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
            if ( (unsigned int)v15 >= 2 )
            {
              LODWORD(v27) = 2;
              LODWORD(v26) = v15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, v27) )
                __debugbreak();
            }
          }
          if ( clientUIActives[v15].connectionState >= CA_CONNECTED )
          {
            if ( !(unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v15) )
            {
              if ( (unsigned int)v15 >= 2 )
              {
                LODWORD(v27) = 2;
                LODWORD(v26) = v15;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, v27) )
                  __debugbreak();
              }
              if ( !ClConnection::ms_connections[v15] )
              {
                if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
                  __debugbreak();
                if ( !ClConnection::ms_connections[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 196, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to process a connected packet event without being connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
                  __debugbreak();
              }
              ClientConnection = ClConnection::GetClientConnection((const LocalClientNum_t)v15);
              v23 = *(_OWORD *)&adr->type;
              v29.addrHandleIndex = addrHandleIndex;
              v24 = ClientConnection->__vftable;
              *(_OWORD *)&v29.type = v23;
              v10 = ((__int64 (__fastcall *)(ClConnection *, netadr_t *, msg_t *, _QWORD))v24->ConnectedPacketEvent)(ClientConnection, &v29, netmsg, v8);
LABEL_39:
              if ( v10 )
                return;
              goto LABEL_40;
            }
            v19 = netmsg->data;
            *(_OWORD *)&v28.type = *(_OWORD *)&adr->type;
            v28.addrHandleIndex = addrHandleIndex;
            v20 = *(_DWORD *)v19;
            v21 = NET_AdrToString(&v28);
            Com_Printf(14, "CL_Main_PacketEvent: %s: Got remote packet %i but we're not allowed to forward remote packets to the front-end server\n", v21, v20);
          }
          else
          {
            v16 = netmsg->data;
            *(_OWORD *)&v28.type = *(_OWORD *)&adr->type;
            v28.addrHandleIndex = addrHandleIndex;
            v17 = *(_DWORD *)v16;
            v18 = NET_AdrToString(&v28);
            Com_Printf(14, "CL_Main_PacketEvent: %s: Got msg sequence %i but not connected\n", v18, v17);
          }
        }
      }
LABEL_40:
      if ( ++v4 >= LOCAL_CLIENT_COUNT )
        return;
    }
  }
  v25 = *(_OWORD *)&adr->type;
  v29.addrHandleIndex = adr->addrHandleIndex;
  *(_OWORD *)&v29.type = v25;
  CL_PacketEvents_Process(LOCAL_CLIENT_0, &v29, netmsg, 0);
}

/*
==============
CL_PacketEvents_HandleConnectionlessPacket
==============
*/
bool CL_PacketEvents_HandleConnectionlessPacket(LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg, int time)
{
  __int64 v4; 
  ClConnection *ClientConnection; 
  const char *StringLine; 
  __int128 v10; 
  const char *v11; 
  __int128 v12; 
  __int128 v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  bool v21; 
  netadr_t v22; 
  char string[1024]; 

  v4 = localClientNum;
  MSG_BeginReading(msg);
  MSG_ReadLong(msg);
  if ( (unsigned int)v4 >= 2 )
  {
    v19 = 2;
    v16 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, v19) )
      __debugbreak();
    LODWORD(v20) = 2;
    LODWORD(v17) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v20) )
      __debugbreak();
  }
  if ( !clientUIActives[v4].frontEndSceneState[0] && CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v4) >= CA_CONNECTED )
  {
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v18) = 2;
      LODWORD(v15) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v18) )
        __debugbreak();
    }
    if ( !ClConnection::ms_connections[v4] )
    {
      if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
        __debugbreak();
      if ( !ClConnection::ms_connections[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 121, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", (const char *)&queryFormat, "ClConnection::HasClientConnection( localClientNum )") )
        __debugbreak();
    }
    ClientConnection = ClConnection::GetClientConnection((const LocalClientNum_t)v4);
    ClientConnection->ConnectionLessPacketProfile(ClientConnection, msg->cursize);
  }
  StringLine = MSG_ReadStringLine(msg, string, 0x400u);
  if ( showpackets && showpackets->current.integer )
  {
    v10 = *(_OWORD *)&from->type;
    v22.addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v22.type = v10;
    v11 = NET_AdrToString(&v22);
    Com_Printf(16, "recv: %s->'%s'\n", v11, StringLine);
  }
  v12 = *(_OWORD *)&from->type;
  v22.addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v22.type = v12;
  if ( RMsg_HandleReliablePacket((const LocalClientNum_t)v4, StringLine, &v22, msg, time, CL_PacketEvents_HandleConnectionlessPacket_Cmd, &v21) )
    return v21;
  v14 = *(_OWORD *)&from->type;
  v22.addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v22.type = v14;
  return CL_PacketEvents_HandleConnectionlessPacket_Cmd((LocalClientNum_t)v4, &v22, StringLine, msg, time);
}

/*
==============
CL_PacketEvents_HandleConnectionlessPacket_Cmd
==============
*/
__int64 CL_PacketEvents_HandleConnectionlessPacket_Cmd(LocalClientNum_t localClientNum, netadr_t *from, const char *cmd, msg_t *msg, int time)
{
  int addrHandleIndex; 
  const char *v11; 
  unsigned __int8 v12; 
  PartyData *PartyData; 
  const char *v14; 
  ClGameModeApplication *ActiveClientApplication; 
  __int128 v17; 
  netadr_t froma; 
  netadr_t v19; 

  Cmd_TokenizeString(cmd);
  _XMM0 = *(_OWORD *)&from->type;
  addrHandleIndex = from->addrHandleIndex;
  __asm { vpextrq rax, xmm0, 1 }
  froma.addrHandleIndex = addrHandleIndex;
  v17 = _XMM0;
  *(_OWORD *)&froma.type = _XMM0;
  if ( (_RAX & 0x10000) == 0 )
  {
    v11 = Cmd_Argv(0);
    if ( RMsg_HandleAckMessage(&froma, v11, msg) )
      goto LABEL_3;
    addrHandleIndex = froma.addrHandleIndex;
    v17 = *(_OWORD *)&froma.type;
    v19 = froma;
    PartyData = Lobby_GetPartyData();
    if ( Party_HandlePacket(PartyData, v11, localClientNum, &v19, msg) )
      goto LABEL_3;
    v19.addrHandleIndex = addrHandleIndex;
    *(_OWORD *)&v19.type = v17;
    if ( Party_HandlePacket(&g_partyData, v11, localClientNum, &v19, msg) )
      goto LABEL_3;
  }
  if ( Party_PartiesAcrossGamemodesFeatureEnabled() && (v14 = Cmd_Argv(0), v19.addrHandleIndex = addrHandleIndex, *(_OWORD *)&v19.type = v17, CL_Main_ConnectionlessPacket_Universal(localClientNum, &v19, msg, time, v14)) )
  {
LABEL_3:
    v12 = 1;
  }
  else if ( ClGameModeApplication::HasActiveApplicationGameMode() )
  {
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    v12 = ActiveClientApplication->ConnectionLessPacketDispatch(ActiveClientApplication, localClientNum, &froma, msg, time);
  }
  else
  {
    v12 = 0;
  }
  Cmd_EndTokenizedString();
  return v12;
}

/*
==============
CL_PacketEvents_LoopbackForClient
==============
*/
void CL_PacketEvents_LoopbackForClient(LocalClientNum_t localClientNum, msg_t *netmsg)
{
  int addrHandleIndex; 
  int v5; 
  unsigned int v6; 
  netsrc_t targetLocalNetID; 
  unsigned __int8 *data; 
  unsigned int v9; 
  const char *v10; 
  __int64 v11; 
  unsigned __int8 *v12; 
  unsigned int v13; 
  const char *v14; 
  ClConnection *ClientConnection; 
  ClConnection_vtbl *v16; 
  __int64 v17; 
  __int64 v18; 
  netadr_t v19; 
  __int128 v20; 
  __int128 v21; 
  int v22; 
  netadr_t net_from; 
  NetPingInfo net_info; 

  while ( NET_GetLoopPacket((netsrc_t)localClientNum, &net_from, netmsg, &net_info) )
  {
    addrHandleIndex = net_from.addrHandleIndex;
    v20 = *(_OWORD *)&net_from.type;
    if ( !netmsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 168, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
      __debugbreak();
    v5 = Sys_Milliseconds();
    v6 = v5;
    if ( netmsg->cursize >= 4 && *(_DWORD *)netmsg->data == -1 )
    {
      v19.addrHandleIndex = addrHandleIndex;
      *(_OWORD *)&v19.type = v20;
      CL_PacketEvents_HandleConnectionlessPacket(localClientNum, &v19, netmsg, v5);
    }
    else
    {
      targetLocalNetID = netmsg->targetLocalNetID;
      if ( targetLocalNetID == NS_MAXCLIENTS )
      {
        data = netmsg->data;
        *(_OWORD *)&v19.type = v20;
        v19.addrHandleIndex = addrHandleIndex;
        v9 = *(_DWORD *)data;
        v10 = NET_AdrToString(&v19);
        Com_PrintWarning(14, "CL_PacketEvents_Process: %s: Got msg sequence %i but destination netId is not a client. This is okay if we just recently left a game.\n", v10, v9);
      }
      else
      {
        if ( (unsigned int)targetLocalNetID >= NS_MAXCLIENTS )
        {
          LODWORD(v18) = 2;
          LODWORD(v17) = netmsg->targetLocalNetID;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( msg->targetLocalNetID ) < (unsigned)( NS_MAXCLIENTS )", "msg->targetLocalNetID doesn't index NS_MAXCLIENTS\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v11 = netmsg->targetLocalNetID;
        if ( (unsigned int)v11 >= 2 )
        {
          LODWORD(v18) = 2;
          LODWORD(v17) = netmsg->targetLocalNetID;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 156, ASSERT_TYPE_ASSERT, "(unsigned)( (*outLocalClientNum) ) < (unsigned)( 2 )", "(*outLocalClientNum) doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
          if ( (unsigned int)v11 >= 2 )
          {
            LODWORD(v18) = 2;
            LODWORD(v17) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
        }
        if ( clientUIActives[v11].connectionState >= CA_CONNECTED )
        {
          if ( (unsigned int)v11 >= 2 )
          {
            LODWORD(v18) = 2;
            LODWORD(v17) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          if ( !ClConnection::ms_connections[v11] )
          {
            if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
              __debugbreak();
            if ( !ClConnection::ms_connections[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 196, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to process a connected packet event without being connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
              __debugbreak();
          }
          ClientConnection = ClConnection::GetClientConnection((const LocalClientNum_t)v11);
          v22 = addrHandleIndex;
          v16 = ClientConnection->__vftable;
          v21 = v20;
          ((void (__fastcall *)(ClConnection *, __int128 *, msg_t *, _QWORD))v16->ConnectedPacketEvent)(ClientConnection, &v21, netmsg, v6);
        }
        else
        {
          v12 = netmsg->data;
          *(_OWORD *)&v19.type = v20;
          v19.addrHandleIndex = addrHandleIndex;
          v13 = *(_DWORD *)v12;
          v14 = NET_AdrToString(&v19);
          Com_Printf(14, "CL_Main_PacketEvent: %s: Got msg sequence %i but not connected\n", v14, v13);
        }
      }
    }
  }
}

/*
==============
CL_PacketEvents_Process
==============
*/
bool CL_PacketEvents_Process(LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg, const bool isLoopbackPacket)
{
  int v8; 
  unsigned int v9; 
  __int128 v10; 
  netsrc_t targetLocalNetID; 
  unsigned __int8 *data; 
  unsigned int v14; 
  const char *v15; 
  __int64 v16; 
  unsigned __int8 *v17; 
  unsigned int v18; 
  const char *v19; 
  unsigned __int8 *v20; 
  unsigned int v21; 
  const char *v22; 
  ClConnection *ClientConnection; 
  ClConnection_vtbl *v24; 
  bool (__fastcall *ConnectedPacketEvent)(ClConnection *, netadr_t, msg_t *, int); 
  __int64 v26; 
  __int64 v27; 
  netadr_t v28[3]; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 168, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  v8 = Sys_Milliseconds();
  v9 = v8;
  if ( msg->cursize >= 4 && *(_DWORD *)msg->data == -1 )
  {
    v10 = *(_OWORD *)&from->type;
    v28[0].addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v28[0].type = v10;
    return CL_PacketEvents_HandleConnectionlessPacket(localClientNum, v28, msg, v8);
  }
  else
  {
    targetLocalNetID = msg->targetLocalNetID;
    if ( targetLocalNetID == NS_MAXCLIENTS )
    {
      data = msg->data;
      *(_OWORD *)&v28[0].type = *(_OWORD *)&from->type;
      v14 = *(_DWORD *)data;
      v28[0].addrHandleIndex = from->addrHandleIndex;
      v15 = NET_AdrToString(v28);
      Com_PrintWarning(14, "CL_PacketEvents_Process: %s: Got msg sequence %i but destination netId is not a client. This is okay if we just recently left a game.\n", v15, v14);
      return 0;
    }
    else
    {
      if ( (unsigned int)targetLocalNetID >= NS_MAXCLIENTS )
      {
        LODWORD(v26) = msg->targetLocalNetID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( msg->targetLocalNetID ) < (unsigned)( NS_MAXCLIENTS )", "msg->targetLocalNetID doesn't index NS_MAXCLIENTS\n\t%i not in [0, %i)", v26, 2) )
          __debugbreak();
      }
      v16 = msg->targetLocalNetID;
      if ( (unsigned int)v16 >= 2 )
      {
        LODWORD(v27) = 2;
        LODWORD(v26) = msg->targetLocalNetID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 156, ASSERT_TYPE_ASSERT, "(unsigned)( (*outLocalClientNum) ) < (unsigned)( 2 )", "(*outLocalClientNum) doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      if ( (unsigned int)v16 >= 2 )
      {
        LODWORD(v27) = 2;
        LODWORD(v26) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      if ( clientUIActives[v16].connectionState >= CA_CONNECTED )
      {
        if ( isLoopbackPacket || !(unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v16) )
        {
          if ( (unsigned int)v16 >= 2 )
          {
            LODWORD(v27) = 2;
            LODWORD(v26) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          if ( !ClConnection::ms_connections[v16] )
          {
            if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
              __debugbreak();
            if ( !ClConnection::ms_connections[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 196, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to process a connected packet event without being connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
              __debugbreak();
          }
          ClientConnection = ClConnection::GetClientConnection((const LocalClientNum_t)v16);
          v24 = ClientConnection->__vftable;
          *(_OWORD *)&v28[0].type = *(_OWORD *)&from->type;
          ConnectedPacketEvent = v24->ConnectedPacketEvent;
          v28[0].addrHandleIndex = from->addrHandleIndex;
          return ((__int64 (__fastcall *)(ClConnection *, netadr_t *, msg_t *, _QWORD))ConnectedPacketEvent)(ClientConnection, v28, msg, v9);
        }
        else
        {
          v20 = msg->data;
          *(_OWORD *)&v28[0].type = *(_OWORD *)&from->type;
          v21 = *(_DWORD *)v20;
          v28[0].addrHandleIndex = from->addrHandleIndex;
          v22 = NET_AdrToString(v28);
          Com_Printf(14, "CL_Main_PacketEvent: %s: Got remote packet %i but we're not allowed to forward remote packets to the front-end server\n", v22, v21);
          return 0;
        }
      }
      else
      {
        v17 = msg->data;
        *(_OWORD *)&v28[0].type = *(_OWORD *)&from->type;
        v18 = *(_DWORD *)v17;
        v28[0].addrHandleIndex = from->addrHandleIndex;
        v19 = NET_AdrToString(v28);
        Com_Printf(14, "CL_Main_PacketEvent: %s: Got msg sequence %i but not connected\n", v19, v18);
        return 0;
      }
    }
  }
}

/*
==============
CL_PacketEvents_Receive
==============
*/
void CL_PacketEvents_Receive(void)
{
  unsigned __int8 *m_ptr; 
  int NthController_Safe; 
  char *Value; 
  unsigned int *v3; 
  unsigned int v4; 
  _QWORD *v5; 
  char *v6; 
  int *v7; 
  unsigned __int64 v8; 
  ThreadContext CurrentThreadContext; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  netadr_t v13; 
  msg_t buf; 
  __int64 v15; 
  Mem_LargeLocal v16; 
  netadr_t net_from; 

  v15 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&v16, 0x243D8ui64, "msg_buf_t clientCommonMsgBuf");
  m_ptr = (unsigned __int8 *)v16.m_ptr;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( SV_IsDemoPlaying() )
  {
    if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_NO_CLIENTS )
    {
      NthController_Safe = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      CL_Mgr_ActivateClient(LOCAL_CLIENT_0, NthController_Safe);
    }
  }
  else
  {
    Value = (char *)Sys_GetValue(0);
    v3 = (unsigned int *)(Value + 2656);
    if ( (unsigned int)(*((_DWORD *)Value + 664) + 1) >= 3 )
    {
      LODWORD(v11) = *((_DWORD *)Value + 664) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v11, 3) )
        __debugbreak();
    }
    v4 = *v3 + 1;
    *v3 = v4;
    if ( v4 >= 3 )
    {
      LODWORD(v12) = 3;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v5 = Value + 2088;
    v6 = Value + 40;
    if ( *v5 < (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v5 += 8i64;
    if ( *v5 >= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v5 = v3;
    if ( *v5 <= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v7 = (int *)&v3[*v3 + 2];
    v8 = __rdtsc();
    *v7 = v8;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    v10 = 0;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 14, NULL, 0);
    MSG_Init(&buf, m_ptr, 148440);
    if ( Com_FrontEndScene_IsActive() )
    {
      CL_PacketEvents_LoopbackForClient(LOCAL_CLIENT_0, &buf);
    }
    else
    {
      do
      {
        if ( CL_IsLocalClientActive((LocalClientNum_t)v10) )
          CL_PacketEvents_LoopbackForClient((LocalClientNum_t)v10, &buf);
        ++v10;
      }
      while ( v10 < 2 );
    }
    if ( Com_IsGameLocalServerRunning() )
    {
      while ( NET_GetDeferredClientPacket(&net_from, &buf) )
      {
        v13 = net_from;
        CL_PacketEvents_Dispatch(&v13, &buf);
      }
    }
    else
    {
      while ( NET_GetClientPacket(&net_from, &buf) )
      {
        v13 = net_from;
        CL_PacketEvents_Dispatch(&v13, &buf);
      }
    }
    Profile_EndInternal(NULL);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v16);
}

