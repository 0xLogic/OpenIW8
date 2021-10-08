/*
==============
G_WorldStreaming_ClientDisconnect
==============
*/

void __fastcall G_WorldStreaming_ClientDisconnect(const unsigned int clientNum)
{
  ?G_WorldStreaming_ClientDisconnect@@YAXI@Z(clientNum);
}

/*
==============
G_WorldStreaming_HasNextStreamPositionLoadedForClient
==============
*/

bool __fastcall G_WorldStreaming_HasNextStreamPositionLoadedForClient(const unsigned int clientNum, const BgWorldStreamingViewType viewType)
{
  return ?G_WorldStreaming_HasNextStreamPositionLoadedForClient@@YA_NIW4BgWorldStreamingViewType@@@Z(clientNum, viewType);
}

/*
==============
G_WorldStreaming_SetNextStreamClientSpectate
==============
*/

void __fastcall G_WorldStreaming_SetNextStreamClientSpectate(const unsigned int clientNum, const __int16 entNum, bool keepAlive)
{
  ?G_WorldStreaming_SetNextStreamClientSpectate@@YAXIF_N@Z(clientNum, entNum, keepAlive);
}

/*
==============
G_WorldStreaming_SetNextStreamPosition
==============
*/

void __fastcall G_WorldStreaming_SetNextStreamPosition(const unsigned int clientNum, const BgWorldStreamingViewType viewType, const BgWorldStreamingViewMode viewMode, const vec3_t *streamPos, const gentity_s *velocityPlayer, const int keepAlive)
{
  ?G_WorldStreaming_SetNextStreamPosition@@YAXIW4BgWorldStreamingViewType@@W4BgWorldStreamingViewMode@@AEBTvec3_t@@PEBUgentity_s@@H@Z(clientNum, viewType, viewMode, streamPos, velocityPlayer, keepAlive);
}

/*
==============
G_WorldStreaming_ClearNextStreamView
==============
*/

void __fastcall G_WorldStreaming_ClearNextStreamView(const unsigned int clientNum, const BgWorldStreamingViewType viewType)
{
  ?G_WorldStreaming_ClearNextStreamView@@YAXIW4BgWorldStreamingViewType@@@Z(clientNum, viewType);
}

/*
==============
G_WorldStreaming_ManualStreamPosCommand
==============
*/

void __fastcall G_WorldStreaming_ManualStreamPosCommand(SvClientMP *cl, msg_t *msg)
{
  ?G_WorldStreaming_ManualStreamPosCommand@@YAXPEAVSvClientMP@@PEAUmsg_t@@@Z(cl, msg);
}

/*
==============
G_WorldStreaming_ClientConnect
==============
*/

void __fastcall G_WorldStreaming_ClientConnect(const unsigned int clientNum)
{
  ?G_WorldStreaming_ClientConnect@@YAXI@Z(clientNum);
}

/*
==============
G_WorldStreaming_SetStreamLoadDist
==============
*/

void __fastcall G_WorldStreaming_SetStreamLoadDist(const unsigned int clientNum, const BgWorldStreamingViewType viewType, const float loadDist)
{
  ?G_WorldStreaming_SetStreamLoadDist@@YAXIW4BgWorldStreamingViewType@@M@Z(clientNum, viewType, loadDist);
}

/*
==============
G_WorldStreaming_ClearNextStreamView
==============
*/
void G_WorldStreaming_ClearNextStreamView(const unsigned int clientNum, const BgWorldStreamingViewType viewType)
{
  GWorldStreamingRequest *RequestForClient; 
  const dvar_t *v4; 
  SvClientMP *MpClient; 
  BgWorldStreamingViewType viewTypea; 
  __int64 outEncodedViewType; 
  msg_t buf; 
  char buffer[128]; 
  unsigned __int8 data[1024]; 

  LOBYTE(viewTypea) = viewType;
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 399, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  if ( BG_WorldStreaming_IsEnabled() )
  {
    if ( G_WorldStreaming_GetClientData(clientNum)->connected )
    {
      RequestForClient = G_WorldStreaming_GetRequestForClient(clientNum, (const BgWorldStreamingViewType)(unsigned __int8)viewTypea);
      if ( RequestForClient->state[0] )
      {
        v4 = DCONST_DVARBOOL_g_worldStreaming_verbose;
        if ( !DCONST_DVARBOOL_g_worldStreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_worldStreaming_verbose") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v4);
        if ( v4->current.enabled )
        {
          G_WorldStreaming_DebugSPrintfRequest(buffer, 0x78ui64, RequestForClient);
          Com_Printf(14, "G_WorldStreaming: client %u clearing streaming request %s\n", clientNum, buffer);
        }
        RequestForClient->state[0] = 0;
        if ( !BG_WorldStreaming_EncodeViewType(&viewTypea, &outEncodedViewType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 433, ASSERT_TYPE_ASSERT, "( encodeSuccess )", (const char *)&queryFormat, "encodeSuccess") )
          __debugbreak();
        MSG_Init(&buf, data, 1020);
        MSG_WriteByte(&buf, 81i64);
        MSG_WriteBits(&buf, 2i64, 2u);
        MSG_WriteBits(&buf, outEncodedViewType, 2u);
        MpClient = SV_Client_GetMpClient(clientNum);
        if ( !MpClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 441, ASSERT_TYPE_ASSERT, "( ( client != nullptr ) )", "%s\n\t( client ) = %p", "( client != nullptr )", NULL) )
          __debugbreak();
        SV_Game_SendServerCommandMsg(MpClient, SV_CMD_RELIABLE, &buf);
      }
    }
  }
}

/*
==============
G_WorldStreaming_ClientConnect
==============
*/
void G_WorldStreaming_ClientConnect(const unsigned int clientNum)
{
  GWorldStreamingClientData *ClientData; 

  if ( !G_WorldStreaming_GetClientData(clientNum)->connected )
  {
    G_WorldStreaming_ResetRequestsForClient(clientNum);
    ClientData = G_WorldStreaming_GetClientData(clientNum);
    ClientData->nextSequenceNum += 53;
    ClientData->connected = 1;
  }
}

/*
==============
G_WorldStreaming_ClientDisconnect
==============
*/
void G_WorldStreaming_ClientDisconnect(const unsigned int clientNum)
{
  if ( G_WorldStreaming_GetClientData(clientNum)->connected )
  {
    G_WorldStreaming_ResetRequestsForClient(clientNum);
    G_WorldStreaming_GetClientData(clientNum)->connected = 0;
  }
}

/*
==============
G_WorldStreaming_DebugSPrintfRequest
==============
*/
int G_WorldStreaming_DebugSPrintfRequest(char *buffer, unsigned __int64 len, const GWorldStreamingRequest *request)
{
  const char *NameForViewType; 
  __int64 v7; 
  const char *v8; 
  char *fmt; 
  double v17; 
  double v18; 

  _RBX = request;
  NameForViewType = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)request->viewType[0]);
  v7 = (unsigned __int8)_RBX->state[0];
  v8 = NameForViewType;
  if ( (unsigned int)v7 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( ( sizeof( *array_counter( STATE_NAMES ) ) + 0 ) )", "stateIndex doesn't index ARRAY_COUNT( STATE_NAMES )\n\t%i not in [0, %i)", (unsigned __int8)_RBX->state[0], 3) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  xmm2, dword ptr [rbx+4]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+58h+var_28], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+58h+var_30], xmm1
    vmovsd  [rsp+58h+fmt], xmm2
  }
  return Com_sprintf(buffer, len, "{ #%u, [ %f, %f, %f ], '%s', '%s' }", _RBX->sequence, *(double *)&fmt, v17, v18, STATE_NAMES_0[v7], v8);
}

/*
==============
G_WorldStreaming_GetClientData
==============
*/
GWorldStreamingClientData *G_WorldStreaming_GetClientData(const unsigned int clientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  v1 = clientNum;
  if ( clientNum >= 0xC8 )
  {
    v5 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ((1 >= 200) ? 1 : 200) )", "clientNum doesn't index MAX_CLIENTS_STATIC\n\t%i not in [0, %i)", clientNum, v5) )
      __debugbreak();
    LODWORD(v6) = 200;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_gWorldStreaming.clientData ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_gWorldStreaming.clientData )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return (GWorldStreamingClientData *)((char *)&s_gWorldStreaming + 128 * v1);
}

/*
==============
G_WorldStreaming_GetRequestForClient
==============
*/
GWorldStreamingRequest *G_WorldStreaming_GetRequestForClient(const unsigned int clientNum, const BgWorldStreamingViewType viewType)
{
  __int64 v2; 
  GWorldStreamingClientData *ClientData; 
  int v5; 
  int v6; 

  v2 = (unsigned __int8)viewType;
  ClientData = G_WorldStreaming_GetClientData(clientNum);
  if ( (unsigned int)v2 >= 3 )
  {
    v6 = 3;
    v5 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 99, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( ( sizeof( *array_counter( clientData.requests ) ) + 0 ) )", "viewIndex doesn't index ARRAY_COUNT( clientData.requests )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return &ClientData->requests[v2];
}

/*
==============
G_WorldStreaming_HasNextStreamPositionLoadedForClient
==============
*/
bool G_WorldStreaming_HasNextStreamPositionLoadedForClient(const unsigned int clientNum, const BgWorldStreamingViewType viewType)
{
  unsigned __int8 v2; 

  v2 = viewType;
  return !BG_WorldStreaming_IsEnabled() || !G_WorldStreaming_GetClientData(clientNum)->connected || (G_WorldStreaming_GetRequestForClient(clientNum, (const BgWorldStreamingViewType)v2)->state[0] & 0xFD) == 0;
}

/*
==============
G_WorldStreaming_HasRequestChanged
==============
*/
bool G_WorldStreaming_HasRequestChanged(const BgWorldStreamingViewMode viewMode, const vec3_t *streamPos, const vec3_t *velocity, const __int16 entNum, const GWorldStreamingRequest *oldRequest)
{
  char v9; 
  char v23; 
  char v25; 
  char v26; 

  _RBX = oldRequest;
  _RDI = velocity;
  _RBP = streamPos;
  if ( entNum != oldRequest->entNum || viewMode != oldRequest->viewMode )
    return 1;
  _RSI = DCONST_DVARFLT_g_worldstreaming_newRequestMinDistance;
  if ( !DCONST_DVARFLT_g_worldstreaming_newRequestMinDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_worldstreaming_newRequestMinDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbp+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm5, dword ptr [rsi+28h]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm5, xmm5
    vcomiss xmm4, xmm1
  }
  if ( !v23 )
    return 1;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx+10h]
  }
  if ( !v9 )
    goto LABEL_11;
  __asm { vucomiss xmm0, dword ptr [rbx+14h] }
  if ( !v9 )
    goto LABEL_11;
  __asm { vucomiss xmm0, dword ptr [rbx+18h] }
  if ( v9 )
  {
    v25 = 0;
    v9 = 1;
  }
  else
  {
LABEL_11:
    v25 = 1;
  }
  __asm { vucomiss xmm0, dword ptr [rdi] }
  if ( !v9 )
    goto LABEL_16;
  __asm { vucomiss xmm0, dword ptr [rdi+4] }
  if ( !v9 )
    goto LABEL_16;
  __asm { vucomiss xmm0, dword ptr [rdi+8] }
  if ( v9 )
    v26 = 0;
  else
LABEL_16:
    v26 = 1;
  return v25 != v26;
}

/*
==============
G_WorldStreaming_ManualStreamPosCommand
==============
*/
void G_WorldStreaming_ManualStreamPosCommand(SvClientMP *cl, msg_t *msg)
{
  signed __int64 v4; 
  __int64 Bits; 
  unsigned __int8 Byte; 
  GWorldStreamingRequest *RequestForClient; 
  unsigned __int8 v8; 
  const char *v9; 
  const char *v10; 
  unsigned __int8 v11; 
  gentity_s *gentity; 
  scr_string_t v13; 
  const char *NameForViewType; 
  __int64 v15; 
  __int64 v16; 
  BgWorldStreamingViewType outViewType; 
  scr_string_t stringValue[6]; 
  char buffer[128]; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 467, ASSERT_TYPE_ASSERT, "( ( msg != nullptr ) )", "%s\n\t( msg ) = %p", "( msg != nullptr )", NULL) )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  v4 = ((char *)cl - (char *)SvClient::GetCommonClient(0)) / 379488;
  if ( (unsigned int)v4 >= 0xC8 )
  {
    LODWORD(v16) = 200;
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1072, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 200 )", "index doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  Bits = MSG_ReadBits(msg, 2u);
  Byte = MSG_ReadByte(msg);
  if ( BG_WorldStreaming_IsEnabled() && G_WorldStreaming_GetClientData(v4)->connected )
  {
    if ( msg->overflowed )
    {
      Com_PrintWarning(15, "G_WorldStreaming received malformed SVSCMD_MANUAL_STREAM_POS message from client %d (overflowed), ignoring.\n", (unsigned int)v4);
    }
    else if ( BG_WorldStreaming_DecodeViewType(Bits, &outViewType) )
    {
      RequestForClient = G_WorldStreaming_GetRequestForClient(v4, (const BgWorldStreamingViewType)(unsigned __int8)outViewType);
      if ( RequestForClient->sequence == Byte )
      {
        v8 = RequestForClient->viewType[0];
        if ( v8 == (_BYTE)outViewType )
        {
          if ( v8 >= 3u )
          {
            LODWORD(v16) = 3;
            LODWORD(v15) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 508, ASSERT_TYPE_ASSERT, "(unsigned)( request.viewType ) < (unsigned)( BgWorldStreamingViewType::COUNT )", "request.viewType doesn't index BgWorldStreamingViewType::COUNT\n\t%i not in [0, %i)", v15, v16) )
              __debugbreak();
          }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_g_worldStreaming_verbose, "g_worldStreaming_verbose") )
          {
            G_WorldStreaming_DebugSPrintfRequest(buffer, 0x78ui64, RequestForClient);
            Com_Printf(14, "G_WorldStreaming: received stream completion for client %u, request %s\n", (unsigned int)v4, buffer);
          }
          RequestForClient->state[0] = 2;
          RequestForClient->loadEndTime = Sys_Milliseconds();
          v11 = RequestForClient->viewType[0];
          gentity = cl->gentity;
          stringValue[1] = scr_const.stream_pos_ready;
          stringValue[2] = scr_const.additional_stream_pos_ready;
          stringValue[0] = 0;
          if ( v11 )
          {
            if ( v11 >= 3u )
            {
              LODWORD(v16) = 3;
              LODWORD(v15) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 174, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( ( sizeof( *array_counter( notifyNames ) ) + 0 ) )", "viewIndex doesn't index ARRAY_COUNT( notifyNames )\n\t%i not in [0, %i)", v15, v16) )
                __debugbreak();
            }
            v13 = stringValue[v11];
            if ( v13 )
            {
              GScr_Notify(gentity, v13, 0);
            }
            else
            {
              NameForViewType = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)v11);
              Com_PrintWarning(15, "G_WorldStreaming notify not implemented for viewType %s.\n", NameForViewType);
            }
          }
        }
        else
        {
          v9 = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)v8);
          v10 = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)outViewType);
          Com_PrintWarning(15, "G_WorldStreaming received unexpected viewType '%s', expected '%s'.\n", v10, v9);
        }
      }
      else
      {
        Com_PrintWarning(15, "G_WorldStreaming received unexpected sequence number %u, expected %u.\n", Byte, RequestForClient->sequence);
      }
    }
  }
}

/*
==============
G_WorldStreaming_ResetRequestsForClient
==============
*/
void G_WorldStreaming_ResetRequestsForClient(const unsigned int clientNum)
{
  int i; 
  GWorldStreamingClientData *ClientData; 
  GWorldStreamingRequest *v4; 
  __int64 v5; 
  __int64 v6; 

  for ( i = 0; i < 3; ++i )
  {
    ClientData = G_WorldStreaming_GetClientData(clientNum);
    if ( (unsigned __int8)i >= 3u )
    {
      LODWORD(v6) = 3;
      LODWORD(v5) = (unsigned __int8)i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 99, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( ( sizeof( *array_counter( clientData.requests ) ) + 0 ) )", "viewIndex doesn't index ARRAY_COUNT( clientData.requests )\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    v4 = &ClientData->requests[(unsigned __int8)i];
    DebugWipe(v4, 0x28ui64);
    v4->state[0] = 0;
  }
}

/*
==============
G_WorldStreaming_SetNextStreamClientSpectate
==============
*/
void G_WorldStreaming_SetNextStreamClientSpectate(const unsigned int clientNum, const __int16 entNum, bool keepAlive)
{
  gentity_s *v6; 
  gclient_s *client; 
  __int64 v8; 
  __int64 entNuma; 
  __int64 keepAlivea; 

  if ( (unsigned __int16)entNum >= 0x7FEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 376, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "entNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", entNum, 2046) )
    __debugbreak();
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(keepAlivea) = 2048;
    LODWORD(entNuma) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNuma, keepAlivea) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = &g_entities[entNum];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 379, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !v6->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 380, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  client = v6->client;
  v8 = 324i64;
  if ( client->ps.vehicleState.entity == 2047 )
    v8 = 60i64;
  G_WorldStreaming_SetNextStreamView_Internal(clientNum, MOVEMENT, LINEAR, &client->ps.origin, (const vec3_t *)((char *)client + v8), entNum, keepAlive);
}

/*
==============
G_WorldStreaming_SetNextStreamPosition
==============
*/
void G_WorldStreaming_SetNextStreamPosition(const unsigned int clientNum, const BgWorldStreamingViewType viewType, const BgWorldStreamingViewMode viewMode, const vec3_t *streamPos, const gentity_s *velocityPlayer, const int keepAlive)
{
  unsigned __int8 v9; 
  gclient_s *client; 
  __int64 v12; 
  vec3_t streamVel; 

  v9 = viewType;
  if ( velocityPlayer )
  {
    if ( !velocityPlayer->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 360, ASSERT_TYPE_ASSERT, "( velocityPlayer->client != nullptr )", (const char *)&queryFormat, "velocityPlayer->client != nullptr") )
      __debugbreak();
    client = velocityPlayer->client;
    v12 = 324i64;
    if ( client->ps.vehicleState.entity == 2047 )
      v12 = 60i64;
    G_WorldStreaming_SetNextStreamView_Internal(clientNum, (const BgWorldStreamingViewType)v9, viewMode, streamPos, (const vec3_t *)((char *)client + v12), velocityPlayer->s.number, keepAlive);
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+88h+streamVel], xmm0
      vmovss  dword ptr [rsp+88h+streamVel+4], xmm0
      vmovss  dword ptr [rsp+88h+streamVel+8], xmm0
    }
    G_WorldStreaming_SetNextStreamView_Internal(clientNum, (const BgWorldStreamingViewType)(unsigned __int8)viewType, viewMode, streamPos, &streamVel, 2047, keepAlive);
  }
}

/*
==============
G_WorldStreaming_SetNextStreamView_Internal
==============
*/
void G_WorldStreaming_SetNextStreamView_Internal(const unsigned int clientNum, const BgWorldStreamingViewType viewType, const BgWorldStreamingViewMode viewMode, const vec3_t *streamPos, const vec3_t *streamVel, const __int16 entNum, const int keepAlive)
{
  const dvar_t *v12; 
  int integer; 
  int v14; 
  const dvar_t *v15; 
  GWorldStreamingClientData *ClientData; 
  unsigned __int8 v17; 
  const dvar_t *v20; 
  char v32; 
  bool v33; 
  SvClientMP *MpClient; 
  __int64 v35; 
  BgWorldStreamingViewType viewTypea; 
  __int64 outEncodedViewType; 
  __int64 outEncodedViewMode; 
  msg_t buf; 
  char buffer[128]; 
  unsigned __int8 data[1024]; 

  _RBP = streamVel;
  _R13 = streamPos;
  LOBYTE(viewTypea) = viewType;
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 267, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  if ( (unsigned __int8)viewTypea >= (unsigned int)(COUNT|DODGE) )
  {
    LODWORD(v35) = (unsigned __int8)viewTypea;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 268, ASSERT_TYPE_ASSERT, "(unsigned)( viewType ) < (unsigned)( BgWorldStreamingViewType::COUNT )", "viewType doesn't index BgWorldStreamingViewType::COUNT\n\t%i not in [0, %i)", v35, 3) )
      __debugbreak();
  }
  if ( BG_WorldStreaming_IsEnabled() && G_WorldStreaming_GetClientData(clientNum)->connected )
  {
    _RDI = G_WorldStreaming_GetRequestForClient(clientNum, (const BgWorldStreamingViewType)(unsigned __int8)viewTypea);
    switch ( _RDI->state[0] )
    {
      case 0:
        goto LABEL_24;
      case 1:
        v15 = DCONST_DVARINT_g_worldstreaming_newRequestMinTimeMs;
        if ( !DCONST_DVARINT_g_worldstreaming_newRequestMinTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_worldstreaming_newRequestMinTimeMs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        integer = v15->current.integer;
        v14 = Sys_Milliseconds() - _RDI->loadStartTime;
        break;
      case 2:
        v12 = DCONST_DVARINT_g_worldstreaming_newRequestMinTimeMs;
        if ( !DCONST_DVARINT_g_worldstreaming_newRequestMinTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_worldstreaming_newRequestMinTimeMs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        integer = v12->current.integer;
        v14 = Sys_Milliseconds() - _RDI->loadEndTime;
        break;
      default:
        LODWORD(v35) = (unsigned __int8)_RDI->state[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 251, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected Request State %d", v35) )
          __debugbreak();
        return;
    }
    if ( v14 >= integer || G_WorldStreaming_HasRequestChanged(viewMode, _R13, streamVel, entNum, _RDI) )
    {
LABEL_24:
      ClientData = G_WorldStreaming_GetClientData(clientNum);
      v17 = ClientData->nextSequenceNum++;
      _RDI->sequence = v17;
      __asm
      {
        vmovsd  xmm0, qword ptr [r13+0]
        vmovsd  qword ptr [rdi+4], xmm0
      }
      _RDI->position.v[2] = _R13->v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+0]
        vmovsd  qword ptr [rdi+10h], xmm0
      }
      _RDI->velocity.v[2] = streamVel->v[2];
      _RDI->entNum = entNum;
      _RDI->state[0] = 1;
      _RDI->loadStartTime = Sys_Milliseconds();
      _RDI->viewType[0] = viewTypea;
      _RDI->viewMode = viewMode;
      if ( !BG_WorldStreaming_EncodeViewType(&viewTypea, &outEncodedViewType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 305, ASSERT_TYPE_ASSERT, "( encodeViewSuccess )", (const char *)&queryFormat, "encodeViewSuccess") )
        __debugbreak();
      if ( !BG_WorldStreaming_EncodeViewMode(viewMode, &outEncodedViewMode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 311, ASSERT_TYPE_ASSERT, "( encodeModeSuccess )", (const char *)&queryFormat, "encodeModeSuccess") )
        __debugbreak();
      v20 = DCONST_DVARBOOL_g_worldStreaming_verbose;
      if ( !DCONST_DVARBOOL_g_worldStreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_worldStreaming_verbose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.enabled )
      {
        G_WorldStreaming_DebugSPrintfRequest(buffer, 0x78ui64, _RDI);
        Com_Printf(14, "G_WorldStreaming: client %u requesting new streaming position %s\n", clientNum, buffer);
      }
      _RBX = DCONST_DVARFLT_g_worldstreaming_minVelocity;
      if ( !DCONST_DVARFLT_g_worldstreaming_minVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_worldstreaming_minVelocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0]
        vmovss  xmm2, dword ptr [rbp+4]
        vmovss  xmm3, dword ptr [rbp+8]
        vmovss  xmm4, dword ptr [rbx+28h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vcomiss xmm3, xmm0
      }
      v33 = !v32;
      MSG_Init(&buf, data, 1020);
      MSG_WriteByte(&buf, 81i64);
      MSG_WriteBits(&buf, v33, 2u);
      MSG_WriteBits(&buf, outEncodedViewType, 2u);
      MSG_WriteBits(&buf, outEncodedViewMode, 2u);
      MSG_WriteByte(&buf, v17);
      MSG_WriteVec3(&buf, _R13);
      MSG_WriteBool(&buf, keepAlive != 0);
      if ( v33 )
        BG_WorldStreaming_EncodeVelocity(&buf, streamVel);
      MpClient = SV_Client_GetMpClient(clientNum);
      if ( !MpClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 351, ASSERT_TYPE_ASSERT, "( ( client != nullptr ) )", "%s\n\t( client ) = %p", "( client != nullptr )", NULL) )
        __debugbreak();
      SV_Game_SendServerCommandMsg(MpClient, SV_CMD_RELIABLE, &buf);
    }
  }
}

/*
==============
G_WorldStreaming_SetStreamLoadDist
==============
*/

void __fastcall G_WorldStreaming_SetStreamLoadDist(const unsigned int clientNum, const BgWorldStreamingViewType viewType, double loadDist)
{
  unsigned int v4; 
  SvClient *CommonClient; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  __asm { vmovaps [rsp+4A8h+var_18], xmm6 }
  v4 = (unsigned __int8)viewType;
  __asm { vmovaps xmm6, xmm2 }
  MSG_Init(&buf, data, 1020);
  MSG_WriteByte(&buf, 81i64);
  MSG_WriteBits(&buf, 3i64, 2u);
  MSG_WriteBits(&buf, v4, 2u);
  __asm { vmovaps xmm1, xmm6; f }
  MSG_WriteFloat(&buf, *(float *)&_XMM1);
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_world_streaming.cpp", 458, ASSERT_TYPE_ASSERT, "( ( client != nullptr ) )", "%s\n\t( client ) = %p", "( client != nullptr )", NULL) )
    __debugbreak();
  SV_Game_SendServerCommandMsg(CommonClient, SV_CMD_RELIABLE, &buf);
  __asm { vmovaps xmm6, [rsp+4A8h+var_18] }
}

