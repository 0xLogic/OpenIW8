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
  char v10; 
  netsrc_t v11; 
  unsigned __int8 *data; 
  unsigned int v14; 
  const char *v15; 
  __int64 v16; 
  unsigned __int8 *v17; 
  unsigned int v19; 
  const char *v20; 
  unsigned __int8 *v21; 
  unsigned int v23; 
  const char *v24; 
  ClConnection *ClientConnection; 
  ClConnection_vtbl *v27; 
  __int64 v29; 
  __int64 v30; 
  netadr_t v31; 
  netadr_t v32; 

  _R14 = adr;
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
        addrHandleIndex = _R14->addrHandleIndex;
        v7 = Sys_Milliseconds();
        v8 = v7;
        if ( netmsg->cursize >= 4 && *(_DWORD *)netmsg->data == -1 )
        {
          __asm { vmovups xmm0, xmmword ptr [r14] }
          v31.addrHandleIndex = addrHandleIndex;
          __asm { vmovups [rsp+0A8h+var_68], xmm0 }
          v10 = CL_PacketEvents_HandleConnectionlessPacket(v4, &v31, netmsg, v7);
          goto LABEL_39;
        }
        v11 = netmsg->targetLocalNetID;
        if ( v11 == NS_MAXCLIENTS )
        {
          data = netmsg->data;
          __asm
          {
            vmovups xmm0, xmmword ptr [r14]
            vmovups [rsp+0A8h+var_68], xmm0
          }
          v31.addrHandleIndex = addrHandleIndex;
          v14 = *(_DWORD *)data;
          v15 = NET_AdrToString(&v31);
          Com_PrintWarning(14, "CL_PacketEvents_Process: %s: Got msg sequence %i but destination netId is not a client. This is okay if we just recently left a game.\n", v15, v14);
        }
        else
        {
          if ( (unsigned int)v11 >= NS_MAXCLIENTS )
          {
            LODWORD(v30) = 2;
            LODWORD(v29) = netmsg->targetLocalNetID;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( msg->targetLocalNetID ) < (unsigned)( NS_MAXCLIENTS )", "msg->targetLocalNetID doesn't index NS_MAXCLIENTS\n\t%i not in [0, %i)", v29, v30) )
              __debugbreak();
          }
          v16 = netmsg->targetLocalNetID;
          if ( (unsigned int)v16 >= 2 )
          {
            LODWORD(v30) = 2;
            LODWORD(v29) = netmsg->targetLocalNetID;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 156, ASSERT_TYPE_ASSERT, "(unsigned)( (*outLocalClientNum) ) < (unsigned)( 2 )", "(*outLocalClientNum) doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, v30) )
              __debugbreak();
            if ( (unsigned int)v16 >= 2 )
            {
              LODWORD(v30) = 2;
              LODWORD(v29) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, v30) )
                __debugbreak();
            }
          }
          if ( clientUIActives[v16].connectionState >= CA_CONNECTED )
          {
            if ( !(unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v16) )
            {
              if ( (unsigned int)v16 >= 2 )
              {
                LODWORD(v30) = 2;
                LODWORD(v29) = v16;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, v30) )
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
              __asm { vmovups xmm0, xmmword ptr [r14] }
              v32.addrHandleIndex = addrHandleIndex;
              v27 = ClientConnection->__vftable;
              __asm { vmovups [rsp+0A8h+var_48], xmm0 }
              v10 = ((__int64 (__fastcall *)(ClConnection *, netadr_t *, msg_t *, _QWORD))v27->ConnectedPacketEvent)(ClientConnection, &v32, netmsg, v8);
LABEL_39:
              if ( v10 )
                return;
              goto LABEL_40;
            }
            v21 = netmsg->data;
            __asm
            {
              vmovups xmm0, xmmword ptr [r14]
              vmovups [rsp+0A8h+var_68], xmm0
            }
            v31.addrHandleIndex = addrHandleIndex;
            v23 = *(_DWORD *)v21;
            v24 = NET_AdrToString(&v31);
            Com_Printf(14, "CL_Main_PacketEvent: %s: Got remote packet %i but we're not allowed to forward remote packets to the front-end server\n", v24, v23);
          }
          else
          {
            v17 = netmsg->data;
            __asm
            {
              vmovups xmm0, xmmword ptr [r14]
              vmovups [rsp+0A8h+var_68], xmm0
            }
            v31.addrHandleIndex = addrHandleIndex;
            v19 = *(_DWORD *)v17;
            v20 = NET_AdrToString(&v31);
            Com_Printf(14, "CL_Main_PacketEvent: %s: Got msg sequence %i but not connected\n", v20, v19);
          }
        }
      }
LABEL_40:
      if ( ++v4 >= LOCAL_CLIENT_COUNT )
        return;
    }
  }
  __asm { vmovups xmm0, xmmword ptr [r14] }
  v32.addrHandleIndex = _R14->addrHandleIndex;
  __asm { vmovups [rsp+0A8h+var_48], xmm0 }
  CL_PacketEvents_Process(LOCAL_CLIENT_0, &v32, netmsg, 0);
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
  const char *v11; 
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
  _RBP = from;
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
    __asm { vmovups xmm0, xmmword ptr [rbp+0] }
    v22.addrHandleIndex = _RBP->addrHandleIndex;
    __asm { vmovups [rsp+4B8h+var_468], xmm0 }
    v11 = NET_AdrToString(&v22);
    Com_Printf(16, "recv: %s->'%s'\n", v11, StringLine);
  }
  __asm { vmovups xmm0, xmmword ptr [rbp+0] }
  v22.addrHandleIndex = _RBP->addrHandleIndex;
  __asm { vmovups [rsp+4B8h+var_468], xmm0 }
  if ( RMsg_HandleReliablePacket((const LocalClientNum_t)v4, StringLine, &v22, msg, time, CL_PacketEvents_HandleConnectionlessPacket_Cmd, &v21) )
    return v21;
  __asm { vmovups xmm0, xmmword ptr [rbp+0] }
  v22.addrHandleIndex = _RBP->addrHandleIndex;
  __asm { vmovups [rsp+4B8h+var_468], xmm0 }
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
  const char *v16; 
  ClGameModeApplication *ActiveClientApplication; 
  netadr_t froma; 
  netadr_t v22; 

  _RBX = from;
  Cmd_TokenizeString(cmd);
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  addrHandleIndex = _RBX->addrHandleIndex;
  __asm { vpextrq rax, xmm0, 1 }
  froma.addrHandleIndex = addrHandleIndex;
  __asm
  {
    vmovups [rsp+88h+var_58], xmm0
    vmovups xmmword ptr [rsp+88h+from.type], xmm0
  }
  if ( (_RAX & 0x10000) == 0 )
  {
    v11 = Cmd_Argv(0);
    if ( RMsg_HandleAckMessage(&froma, v11, msg) )
      goto LABEL_3;
    __asm { vmovups xmm0, xmmword ptr [rsp+88h+from.type] }
    addrHandleIndex = froma.addrHandleIndex;
    __asm
    {
      vmovups [rsp+88h+var_58], xmm0
      vmovups [rsp+88h+var_28], xmm0
    }
    v22.addrHandleIndex = froma.addrHandleIndex;
    PartyData = Lobby_GetPartyData();
    if ( Party_HandlePacket(PartyData, v11, localClientNum, &v22, msg) )
      goto LABEL_3;
    __asm { vmovups xmm0, [rsp+88h+var_58] }
    v22.addrHandleIndex = addrHandleIndex;
    __asm { vmovups [rsp+88h+var_28], xmm0 }
    if ( Party_HandlePacket(&g_partyData, v11, localClientNum, &v22, msg) )
      goto LABEL_3;
  }
  if ( !Party_PartiesAcrossGamemodesFeatureEnabled() )
    goto LABEL_14;
  v16 = Cmd_Argv(0);
  __asm { vmovups xmm0, [rsp+88h+var_58] }
  v22.addrHandleIndex = addrHandleIndex;
  __asm { vmovups [rsp+88h+var_28], xmm0 }
  if ( CL_Main_ConnectionlessPacket_Universal(localClientNum, &v22, msg, time, v16) )
  {
LABEL_3:
    v12 = 1;
  }
  else
  {
LABEL_14:
    if ( ClGameModeApplication::HasActiveApplicationGameMode() )
    {
      ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
      v12 = ActiveClientApplication->ConnectionLessPacketDispatch(ActiveClientApplication, localClientNum, &froma, msg, time);
    }
    else
    {
      v12 = 0;
    }
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
  int v6; 
  unsigned int v7; 
  netsrc_t targetLocalNetID; 
  unsigned __int8 *data; 
  unsigned int v12; 
  const char *v13; 
  __int64 v14; 
  unsigned __int8 *v15; 
  unsigned int v17; 
  const char *v18; 
  ClConnection *ClientConnection; 
  ClConnection_vtbl *v21; 
  __int64 v22; 
  __int64 v23; 
  netadr_t v24; 
  __int128 v26; 
  int v27; 
  netadr_t net_from; 
  NetPingInfo net_info; 

  while ( NET_GetLoopPacket((netsrc_t)localClientNum, &net_from, netmsg, &net_info) )
  {
    addrHandleIndex = net_from.addrHandleIndex;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+108h+net_from.type]
      vmovups [rsp+108h+var_A8], xmm0
    }
    if ( !netmsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 168, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
      __debugbreak();
    v6 = Sys_Milliseconds();
    v7 = v6;
    if ( netmsg->cursize >= 4 && *(_DWORD *)netmsg->data == -1 )
    {
      __asm { vmovups xmm0, [rsp+108h+var_A8] }
      v24.addrHandleIndex = addrHandleIndex;
      __asm { vmovups [rsp+108h+var_C8], xmm0 }
      CL_PacketEvents_HandleConnectionlessPacket(localClientNum, &v24, netmsg, v6);
    }
    else
    {
      targetLocalNetID = netmsg->targetLocalNetID;
      if ( targetLocalNetID == NS_MAXCLIENTS )
      {
        data = netmsg->data;
        __asm
        {
          vmovups xmm0, [rsp+108h+var_A8]
          vmovups [rsp+108h+var_C8], xmm0
        }
        v24.addrHandleIndex = addrHandleIndex;
        v12 = *(_DWORD *)data;
        v13 = NET_AdrToString(&v24);
        Com_PrintWarning(14, "CL_PacketEvents_Process: %s: Got msg sequence %i but destination netId is not a client. This is okay if we just recently left a game.\n", v13, v12);
      }
      else
      {
        if ( (unsigned int)targetLocalNetID >= NS_MAXCLIENTS )
        {
          LODWORD(v23) = 2;
          LODWORD(v22) = netmsg->targetLocalNetID;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( msg->targetLocalNetID ) < (unsigned)( NS_MAXCLIENTS )", "msg->targetLocalNetID doesn't index NS_MAXCLIENTS\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
        }
        v14 = netmsg->targetLocalNetID;
        if ( (unsigned int)v14 >= 2 )
        {
          LODWORD(v23) = 2;
          LODWORD(v22) = netmsg->targetLocalNetID;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 156, ASSERT_TYPE_ASSERT, "(unsigned)( (*outLocalClientNum) ) < (unsigned)( 2 )", "(*outLocalClientNum) doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
          if ( (unsigned int)v14 >= 2 )
          {
            LODWORD(v23) = 2;
            LODWORD(v22) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
        }
        if ( clientUIActives[v14].connectionState >= CA_CONNECTED )
        {
          if ( (unsigned int)v14 >= 2 )
          {
            LODWORD(v23) = 2;
            LODWORD(v22) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          if ( !ClConnection::ms_connections[v14] )
          {
            if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
              __debugbreak();
            if ( !ClConnection::ms_connections[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 196, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to process a connected packet event without being connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
              __debugbreak();
          }
          ClientConnection = ClConnection::GetClientConnection((const LocalClientNum_t)v14);
          __asm { vmovups xmm0, [rsp+108h+var_A8] }
          v27 = addrHandleIndex;
          v21 = ClientConnection->__vftable;
          __asm { vmovups [rsp+108h+var_98], xmm0 }
          ((void (__fastcall *)(ClConnection *, __int128 *, msg_t *, _QWORD))v21->ConnectedPacketEvent)(ClientConnection, &v26, netmsg, v7);
        }
        else
        {
          v15 = netmsg->data;
          __asm
          {
            vmovups xmm0, [rsp+108h+var_A8]
            vmovups [rsp+108h+var_C8], xmm0
          }
          v24.addrHandleIndex = addrHandleIndex;
          v17 = *(_DWORD *)v15;
          v18 = NET_AdrToString(&v24);
          Com_Printf(14, "CL_Main_PacketEvent: %s: Got msg sequence %i but not connected\n", v18, v17);
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
  netsrc_t targetLocalNetID; 
  unsigned __int8 *data; 
  unsigned int v15; 
  const char *v16; 
  __int64 v17; 
  unsigned __int8 *v18; 
  unsigned int v20; 
  const char *v21; 
  unsigned __int8 *v22; 
  unsigned int v24; 
  const char *v25; 
  ClConnection *ClientConnection; 
  ClConnection_vtbl *v28; 
  bool (__fastcall *ConnectedPacketEvent)(ClConnection *, netadr_t, msg_t *, int); 
  __int64 v30; 
  __int64 v31; 
  netadr_t v32[3]; 

  _RSI = from;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 168, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  v8 = Sys_Milliseconds();
  v9 = v8;
  if ( msg->cursize >= 4 && *(_DWORD *)msg->data == -1 )
  {
    __asm { vmovups xmm0, xmmword ptr [rsi] }
    v32[0].addrHandleIndex = _RSI->addrHandleIndex;
    __asm { vmovups [rsp+88h+var_48], xmm0 }
    return CL_PacketEvents_HandleConnectionlessPacket(localClientNum, v32, msg, v8);
  }
  else
  {
    targetLocalNetID = msg->targetLocalNetID;
    if ( targetLocalNetID == NS_MAXCLIENTS )
    {
      data = msg->data;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+88h+var_48], xmm0
      }
      v15 = *(_DWORD *)data;
      v32[0].addrHandleIndex = _RSI->addrHandleIndex;
      v16 = NET_AdrToString(v32);
      Com_PrintWarning(14, "CL_PacketEvents_Process: %s: Got msg sequence %i but destination netId is not a client. This is okay if we just recently left a game.\n", v16, v15);
      return 0;
    }
    else
    {
      if ( (unsigned int)targetLocalNetID >= NS_MAXCLIENTS )
      {
        LODWORD(v30) = msg->targetLocalNetID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( msg->targetLocalNetID ) < (unsigned)( NS_MAXCLIENTS )", "msg->targetLocalNetID doesn't index NS_MAXCLIENTS\n\t%i not in [0, %i)", v30, 2) )
          __debugbreak();
      }
      v17 = msg->targetLocalNetID;
      if ( (unsigned int)v17 >= 2 )
      {
        LODWORD(v31) = 2;
        LODWORD(v30) = msg->targetLocalNetID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 156, ASSERT_TYPE_ASSERT, "(unsigned)( (*outLocalClientNum) ) < (unsigned)( 2 )", "(*outLocalClientNum) doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      if ( (unsigned int)v17 >= 2 )
      {
        LODWORD(v31) = 2;
        LODWORD(v30) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      if ( clientUIActives[v17].connectionState >= CA_CONNECTED )
      {
        if ( isLoopbackPacket || !(unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v17) )
        {
          if ( (unsigned int)v17 >= 2 )
          {
            LODWORD(v31) = 2;
            LODWORD(v30) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          if ( !ClConnection::ms_connections[v17] )
          {
            if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
              __debugbreak();
            if ( !ClConnection::ms_connections[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_packet_events.cpp", 196, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to process a connected packet event without being connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
              __debugbreak();
          }
          ClientConnection = ClConnection::GetClientConnection((const LocalClientNum_t)v17);
          __asm { vmovups xmm0, xmmword ptr [rsi] }
          v28 = ClientConnection->__vftable;
          __asm { vmovups [rsp+88h+var_48], xmm0 }
          ConnectedPacketEvent = v28->ConnectedPacketEvent;
          v32[0].addrHandleIndex = _RSI->addrHandleIndex;
          return ((__int64 (__fastcall *)(ClConnection *, netadr_t *, msg_t *, _QWORD))ConnectedPacketEvent)(ClientConnection, v32, msg, v9);
        }
        else
        {
          v22 = msg->data;
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups [rsp+88h+var_48], xmm0
          }
          v24 = *(_DWORD *)v22;
          v32[0].addrHandleIndex = _RSI->addrHandleIndex;
          v25 = NET_AdrToString(v32);
          Com_Printf(14, "CL_Main_PacketEvent: %s: Got remote packet %i but we're not allowed to forward remote packets to the front-end server\n", v25, v24);
          return 0;
        }
      }
      else
      {
        v18 = msg->data;
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups [rsp+88h+var_48], xmm0
        }
        v20 = *(_DWORD *)v18;
        v32[0].addrHandleIndex = _RSI->addrHandleIndex;
        v21 = NET_AdrToString(v32);
        Com_Printf(14, "CL_Main_PacketEvent: %s: Got msg sequence %i but not connected\n", v21, v20);
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
  __int64 v13; 
  __int64 v14; 
  int v15; 
  netadr_t v16; 
  msg_t buf; 
  __int64 v18; 
  Mem_LargeLocal v19; 
  netadr_t net_from; 

  v18 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&v19, 0x243D8ui64, "msg_buf_t clientCommonMsgBuf");
  m_ptr = (unsigned __int8 *)v19.m_ptr;
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
      v15 = 3;
      LODWORD(v13) = *((_DWORD *)Value + 664) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
    }
    v4 = *v3 + 1;
    *v3 = v4;
    if ( v4 >= 3 )
    {
      LODWORD(v14) = 3;
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v13, v14) )
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
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+57h+net_from.type]
          vmovups [rbp+57h+var_B0], xmm0
        }
        v16.addrHandleIndex = net_from.addrHandleIndex;
        CL_PacketEvents_Dispatch(&v16, &buf);
      }
    }
    else
    {
      while ( NET_GetClientPacket(&net_from, &buf) )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+57h+net_from.type]
          vmovups [rbp+57h+var_B0], xmm0
        }
        v16.addrHandleIndex = net_from.addrHandleIndex;
        CL_PacketEvents_Dispatch(&v16, &buf);
      }
    }
    Profile_EndInternal(NULL);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v19);
}

