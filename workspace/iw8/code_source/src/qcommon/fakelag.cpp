/*
==============
FakeLag_Init
==============
*/

void FakeLag_Init(void)
{
  ?FakeLag_Init@@YAXXZ();
}

/*
==============
FakeLag_FlushPackets
==============
*/

void FakeLag_FlushPackets(void)
{
  ?FakeLag_FlushPackets@@YAXXZ();
}

/*
==============
FakeLag_GetPacket
==============
*/

int __fastcall FakeLag_GetPacket(bool loopback, netsrc_t sock, netadr_t *net_from, msg_t *net_message, NetPingInfo *net_info)
{
  return ?FakeLag_GetPacket@@YAH_NW4netsrc_t@@PEAUnetadr_t@@PEAUmsg_t@@PEAUNetPingInfo@@@Z(loopback, sock, net_from, net_message, net_info);
}

/*
==============
FakeLag_SendPacket_Real
==============
*/

void __fastcall FakeLag_SendPacket_Real(unsigned int packet)
{
  ?FakeLag_SendPacket_Real@@YAXI@Z(packet);
}

/*
==============
FakeLag_Shutdown
==============
*/

void FakeLag_Shutdown(void)
{
  ?FakeLag_Shutdown@@YAXXZ();
}

/*
==============
FakeLag_SendPacket
==============
*/

int __fastcall FakeLag_SendPacket(netsrc_t sock, int length, const void *data, netadr_t *to, unsigned int flags, NetPingInfo *info)
{
  return ?FakeLag_SendPacket@@YAHW4netsrc_t@@HPEBXUnetadr_t@@IPEAUNetPingInfo@@@Z(sock, length, data, to, flags, info);
}

/*
==============
FakeLag_DestroyPacket
==============
*/

bool __fastcall FakeLag_DestroyPacket(unsigned int packet)
{
  return ?FakeLag_DestroyPacket@@YA_NI@Z(packet);
}

/*
==============
FakeLag_Frame
==============
*/

void FakeLag_Frame(void)
{
  ?FakeLag_Frame@@YAXXZ();
}

/*
==============
FakeLag_DestroyPacket
==============
*/
__int64 FakeLag_DestroyPacket(unsigned int packet)
{
  __int64 v1; 
  __int64 v2; 
  __int64 result; 

  v1 = packet;
  if ( !fakelagInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 98, ASSERT_TYPE_ASSERT, "(fakelagInitialized)", (const char *)&queryFormat, "fakelagInitialized") )
    __debugbreak();
  v2 = v1;
  if ( !laggedPackets[v2].data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 99, ASSERT_TYPE_ASSERT, "(laggedPackets[packet].data)", (const char *)&queryFormat, "laggedPackets[packet].data") )
    __debugbreak();
  ntl::nxheap::free(&s_fakeLagHeap.m_heap, laggedPackets[v2].data);
  result = 1i64;
  laggedPackets[v2].data = NULL;
  laggedPackets[v2].msg.data = NULL;
  laggedPackets[v2].length = 0;
  laggedPackets[v2].msg.cursize = 0;
  laggedPackets[v2].sendInfo = NULL;
  return result;
}

/*
==============
FakeLag_FlushPackets
==============
*/
void FakeLag_FlushPackets(void)
{
  int i; 
  int v1; 
  __int64 v2; 

  for ( i = 0; i < 512; ++i )
  {
    v1 = (i + s_nextPacketIndex) % 512;
    v2 = v1;
    if ( laggedPackets[v2].length )
    {
      if ( laggedPackets[v2].outbound )
        FakeLag_SendPacket_Real(v1);
      else
        FakeLag_DestroyPacket(v1);
    }
  }
}

/*
==============
FakeLag_Frame
==============
*/
void FakeLag_Frame(void)
{
  int v0; 
  unsigned __int8 *m_ptr; 
  int i; 
  msg_t buf; 
  Mem_LargeLocal v4; 
  __int64 v5; 
  netadr_t net_from; 
  NetPingInfo net_info; 

  v5 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "FakeLag_Frame");
  Sys_EnterCriticalSection(CRITSECT_FAKELAG);
  v0 = Sys_Milliseconds();
  FakeLag_UpdateCurrentValues(v0);
  Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
  Mem_LargeLocal::Mem_LargeLocal(&v4, 0x243D8ui64, "max_msg_buf netchanPacketBuf");
  m_ptr = (unsigned __int8 *)v4.m_ptr;
  if ( (fakelag_current->current.integer || fakelag_currentjitter->current.integer) && !SV_IsDemoPlaying() )
  {
    if ( Com_IsGameLocalServerRunning() )
    {
      MSG_Init(&buf, m_ptr, 148440);
      while ( Sys_GetLoopbackPacket(NS_MAXCLIENTS, &net_from, &buf, &net_info) )
        FakeLag_QueueIncomingPacket(1, NS_MAXCLIENTS, &net_from, &buf, &net_info);
      MSG_Init(&buf, m_ptr, 148440);
      for ( i = 0; i < 2; ++i )
      {
        while ( Sys_GetLoopbackPacket((const netsrc_t)i, &net_from, &buf, &net_info) )
          FakeLag_QueueIncomingPacket(1, (netsrc_t)i, &net_from, &buf, &net_info);
      }
    }
    else
    {
      MSG_Init(&buf, m_ptr, 148440);
      while ( Sys_GetPacket(&net_from, &buf, &net_info) )
        FakeLag_QueueIncomingPacket(0, NS_PACKET, &net_from, &buf, &net_info);
    }
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v4);
  FakeLag_SendLaggedPackets();
  Sys_ProfEndNamedEvent();
}

/*
==============
FakeLag_GetFreeSlot
==============
*/
__int64 FakeLag_GetFreeSlot()
{
  unsigned int v0; 
  __int64 v1; 

  v0 = s_nextPacketIndex % 512;
  ++s_nextPacketIndex;
  v1 = (int)v0;
  if ( laggedPackets[v1].length )
  {
    if ( !laggedPackets[v1].data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 187, ASSERT_TYPE_ASSERT, "(laggedPackets[packetIndex].data != nullptr)", (const char *)&queryFormat, "laggedPackets[packetIndex].data != nullptr") )
      __debugbreak();
    Com_PrintWarning(25, "Fake lag buffer is full, you should increase FAKELATENCY_MAX_PACKETS_HELD or reduce your latency\n");
    if ( laggedPackets[v1].outbound )
    {
      FakeLag_SendPacket_Real(v0);
      return v0;
    }
    FakeLag_DestroyPacket(v0);
  }
  return v0;
}

/*
==============
FakeLag_GetPacket
==============
*/
__int64 FakeLag_GetPacket(bool loopback, netsrc_t sock, netadr_t *net_from, msg_t *net_message, NetPingInfo *net_info)
{
  int v9; 
  int v10; 
  int v11; 
  fakedLatencyPackets_t *v12; 
  int integer; 
  __int64 startTime; 
  char *fmt; 
  __int64 v17; 

  Sys_EnterCriticalSection(CRITSECT_FAKELAG);
  if ( loopback && Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 748, ASSERT_TYPE_ASSERT, "(!loopback || !Com_FrontEndScene_IsActive())", "%s\n\tShouldn't send lagged loopback packets while the front-end scene is active", "!loopback || !Com_FrontEndScene_IsActive()") )
    __debugbreak();
  v9 = Sys_Milliseconds();
  v10 = 0;
  while ( 1 )
  {
    v11 = (v10 + s_nextPacketIndex) % 512;
    v12 = &laggedPackets[v11];
    if ( v12->length )
    {
      if ( !v12->outbound && v12->sock == sock && v12->loopback == loopback )
      {
        if ( !v12->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 764, ASSERT_TYPE_ASSERT, "(r_packet.data)", (const char *)&queryFormat, "r_packet.data") )
          __debugbreak();
        if ( Com_IsGameLocalServerRunning() || Party_AreWeHost(&g_partyData) && Party_IsRunning(&g_partyData) || Lobby_AreWeHost() || v12->startTime + fakelag_current->current.integer / 2 <= v9 )
          break;
      }
    }
    if ( ++v10 >= 512 )
    {
      Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
      return 0i64;
    }
  }
  integer = showpackets->current.integer;
  if ( integer && (integer > 1 || !v12->loopback) )
  {
    startTime = (unsigned int)v12->startTime;
    LODWORD(v17) = v9 - startTime;
    LODWORD(fmt) = v12->startTime;
    Com_Printf(25, "[%i] delivering incoming packet from %i (time: %i) (%ims latency)\n", (unsigned int)v9, startTime, fmt, v17);
  }
  *(_OWORD *)&net_from->type = *(_OWORD *)&v12->addr.type;
  net_from->addrHandleIndex = v12->addr.addrHandleIndex;
  *net_info = (NetPingInfo)v12->112;
  net_message->bit = v12->msg.bit;
  net_message->cursize = v12->msg.cursize;
  net_message->maxsize = v12->msg.maxsize;
  net_message->overflowed = v12->msg.overflowed;
  net_message->readcount = v12->msg.readcount;
  if ( v12->msg.targetLocalNetID >= (unsigned int)NS_INVALID_NETSRC )
  {
    LODWORD(v17) = v12->msg.targetLocalNetID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 785, ASSERT_TYPE_ASSERT, "(unsigned)( r_packet.msg.targetLocalNetID ) < (unsigned)( NS_INVALID_NETSRC )", "r_packet.msg.targetLocalNetID doesn't index NS_INVALID_NETSRC\n\t%i not in [0, %i)", v17, 10004) )
      __debugbreak();
  }
  net_message->targetLocalNetID = v12->msg.targetLocalNetID;
  if ( !v12->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 789, ASSERT_TYPE_ASSERT, "(r_packet.data)", (const char *)&queryFormat, "r_packet.data") )
    __debugbreak();
  if ( !net_message->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 790, ASSERT_TYPE_ASSERT, "(net_message->data)", (const char *)&queryFormat, "net_message->data") )
    __debugbreak();
  memcpy_0(net_message->data, v12->data, v12->length);
  FakeLag_DestroyPacket(v11);
  Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
  return 1i64;
}

/*
==============
FakeLag_Init
==============
*/
void FakeLag_Init(void)
{
  const char *v0; 
  int v1; 
  const char *v2; 
  const char *v3; 

  if ( !fakelagInitialized )
  {
    memset_0(laggedPackets, 0, sizeof(laggedPackets));
    if ( s_fakeLagHeap.m_heap.m_num_used_blocks )
    {
      if ( !s_fakeLagHeap.m_heap.m_used_mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 138, ASSERT_TYPE_ASSERT, "( m_used_mem != 0 )", (const char *)&queryFormat, "m_used_mem != 0") )
        __debugbreak();
      v0 = "s_fakeLagHeap.empty()";
      v1 = 160;
      v2 = "(s_fakeLagHeap.empty())";
      v3 = "c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp";
    }
    else
    {
      if ( !s_fakeLagHeap.m_heap.m_used_mem )
      {
LABEL_11:
        s_nextPacketIndex = 0;
        s_currentFakelagBurstJitter = 0;
        Dvar_BeginPermanentRegistration();
        fakelag_current = Dvar_RegisterInt("NRKSKRMPQS", 0, 0, 999, 0, "Current fake lag value");
        fakelag_target = Dvar_RegisterInt("MSRTNSTSSO", 0, 0, 999, 0, "Target value for lag debugging");
        fakelag_currentjitter = Dvar_RegisterInt("NPNQNTSNOO", 0, 0, 999, 0, "Current jitter amount for lag debugging");
        fakelag_jitter = Dvar_RegisterInt("LLNSOSRMSL", 0, 0, 999, 0, "Amount of jitter for lag debugging");
        fakelag_jitterinterval = Dvar_RegisterInt("OKNKMPPRLK", 2000, 0, 60000, 0, "jitter interval for lag debugging");
        fakelag_packetloss = Dvar_RegisterFloat("NQLMKKTRLS", 0.0, 0.0, 1.0, 0, "Packet loss for lag debugging");
        fakelag_burst = Dvar_RegisterInt("NSQNMRRPL", 0, 0, 50, 0, "Enable to simulate packet bursting from client to server (only on sends)");
        fakelag_burstJitter = Dvar_RegisterInt("MNKKMNRQRT", 0, 0, 50, 0, "Jitter around the fakelag_burst that's applied (only on sends)");
        fakelag_outOfOrder = Dvar_RegisterBool("MMPPSKPRTM", 0, 0, "Applies jitter in a way that may cause out of order packets (only on sends)");
        fakelag_latency_devgui = Dvar_RegisterInt("LTSSOMNQLK", 0, 0, 999, 0x20u, "Latency to add to incoming and outgoing packets.");
        fakelag_packetloss_devgui = Dvar_RegisterInt("OMMKQSOLQL", 0, 0, 100, 0x20u, "Percentage of packets to drop applies to incoming and outgoing packets.");
        Dvar_EndPermanentRegistration();
        fakelagInitialized = 1;
        return;
      }
      v0 = "m_used_mem == 0";
      v1 = 133;
      v2 = "( m_used_mem == 0 )";
      v3 = "c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl";
    }
    if ( CoreAssert_Handler(v3, v1, ASSERT_TYPE_ASSERT, v2, (const char *)&queryFormat, v0) )
      __debugbreak();
    goto LABEL_11;
  }
}

/*
==============
FakeLag_QueueIncomingPacket
==============
*/
__int64 FakeLag_QueueIncomingPacket(bool loopback, netsrc_t sock, netadr_t *from, msg_t *msg, NetPingInfo *info)
{
  unsigned int v9; 
  int integer; 
  int v11; 
  int v12; 
  signed int v13; 
  int v14; 
  const dvar_t *v15; 
  double v16; 
  __int64 FreeSlot; 
  unsigned __int8 *v19; 
  __int64 v20; 
  unsigned __int8 *data; 
  int v22; 
  int v23; 
  int v24; 
  const char *v25; 
  const char *v26; 

  if ( msg->cursize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 591, ASSERT_TYPE_ASSERT, "(msg->cursize > 0)", (const char *)&queryFormat, "msg->cursize > 0") )
    __debugbreak();
  if ( !msg->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 592, ASSERT_TYPE_ASSERT, "(msg->data != 0)", (const char *)&queryFormat, "msg->data != NULL") )
    __debugbreak();
  if ( loopback && Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 594, ASSERT_TYPE_ASSERT, "(!loopback || !Com_FrontEndScene_IsActive())", "%s\n\tShouldn't send lagged loopback packets while the front-end scene is active", "!loopback || !Com_FrontEndScene_IsActive()") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_FAKELAG);
  v9 = Sys_Milliseconds();
  integer = fakelag_target->current.integer;
  v11 = fakelag_current->current.integer;
  if ( integer + fakelag_jitter->current.integer != v11 )
  {
    v12 = fakelag_currentjitter->current.integer;
    v13 = abs32(v11 - v12 - integer);
    if ( (int)(v9 - lastCall_1) < v13 )
      v13 = v9 - lastCall_1;
    v14 = -v13;
    if ( integer + v12 >= v11 )
      v14 = v13;
    Dvar_SetInt_Internal(fakelag_current, v11 + v14);
  }
  v15 = fakelag_packetloss;
  if ( fakelag_packetloss->current.value <= 0.0 || (v16 = I_flrand(0.0, 1.0), *(float *)&v16 > v15->current.value) )
  {
    FreeSlot = (int)FakeLag_GetFreeSlot();
    if ( !fakelagInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 627, ASSERT_TYPE_ASSERT, "(fakelagInitialized)", (const char *)&queryFormat, "fakelagInitialized") )
      __debugbreak();
    v19 = (unsigned __int8 *)ntl::nxheap::allocate(&s_fakeLagHeap.m_heap, (unsigned int)msg->cursize, 0x10ui64, 0);
    v20 = FreeSlot;
    laggedPackets[FreeSlot].data = v19;
    if ( v19 )
    {
      memcpy_0(v19, msg->data, msg->cursize);
      data = laggedPackets[v20].data;
      *(__m256i *)&laggedPackets[v20].msg.overflowed = *(__m256i *)&msg->overflowed;
      *(_OWORD *)&laggedPackets[v20].msg.splitSize = *(_OWORD *)&msg->splitSize;
      *(double *)&laggedPackets[v20].msg.targetLocalNetID = *(double *)&msg->targetLocalNetID;
      laggedPackets[v20].msg.data = data;
      laggedPackets[v20].outbound = 0;
      laggedPackets[v20].loopback = loopback;
      laggedPackets[v20].sock = sock;
      laggedPackets[v20].burstLimited = 0;
      *(_OWORD *)&laggedPackets[v20].addr.type = *(_OWORD *)&from->type;
      laggedPackets[v20].addr.addrHandleIndex = from->addrHandleIndex;
      laggedPackets[v20].length = msg->cursize;
      laggedPackets[v20].recvInfo = *info;
      if ( ((from->type - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( fakelag_jitter->current.integer )
        {
          v22 = I_irand(0, lastCall_1 - v9);
          v23 = v22 + Sys_Milliseconds();
        }
        else
        {
          v23 = Sys_Milliseconds();
        }
      }
      else
      {
        v23 = 0;
      }
      laggedPackets[v20].startTime = v23;
      v24 = showpackets->current.integer;
      if ( v24 && (v24 > 1 || !laggedPackets[v20].loopback) )
      {
        if ( sock == NS_MAXCLIENTS )
        {
          v25 = "server";
        }
        else
        {
          v25 = (char *)&queryFormat.fmt + 3;
          if ( sock < NS_MAXCLIENTS )
            v25 = "client";
        }
        v26 = "network";
        if ( loopback )
          v26 = "loopback";
        Com_Printf(25, "[%i] adding incoming %s packet for %s\n", v9, v26, v25);
      }
      lastCall_1 = v9;
      Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
      return (unsigned int)FreeSlot;
    }
    else
    {
      Com_PrintWarning(25, "Your fakelag settings are too high - fakelag buffer is full!\n");
      laggedPackets[v20].length = 0;
      Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
      return 0xFFFFFFFFi64;
    }
  }
  else
  {
    Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
    return 0xFFFFFFFFi64;
  }
}

/*
==============
FakeLag_SendLaggedPackets
==============
*/
__int64 FakeLag_SendLaggedPackets()
{
  int v1; 
  bool v2; 
  int v3; 
  bool *p_burstLimited; 
  int v5; 
  int v6; 
  int v7; 
  int integer; 
  int i; 
  int j; 
  int burstSendCount; 
  int numSent; 

  if ( !fakelagInitialized )
    return 0i64;
  Sys_EnterCriticalSection(CRITSECT_FAKELAG);
  v1 = Sys_Milliseconds() - fakelag_current->current.integer / 2;
  v2 = Com_IsGameLocalServerRunning() || Party_AreWeHost(&g_partyData) && Party_IsRunning(&g_partyData) || Lobby_AreWeHost();
  v3 = Sys_Milliseconds();
  if ( !v2 )
    v3 -= fakelag_current->current.integer / 2;
  if ( !fakelag_burst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 387, ASSERT_TYPE_ASSERT, "(fakelag_burst)", (const char *)&queryFormat, "fakelag_burst") )
    __debugbreak();
  if ( !fakelag_burst->current.integer )
  {
    v7 = 0x7FFFFFFF;
    goto LABEL_40;
  }
  p_burstLimited = &laggedPackets[0].burstLimited;
  v5 = 0;
  do
  {
    if ( *(_DWORD *)(p_burstLimited + 30) && *p_burstLimited )
    {
      if ( !*(p_burstLimited - 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 272, ASSERT_TYPE_ASSERT, "(r_packet.outbound)", (const char *)&queryFormat, "r_packet.outbound") )
        __debugbreak();
      if ( *(_DWORD *)(p_burstLimited + 2) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 273, ASSERT_TYPE_ASSERT, "(r_packet.sock != NS_SERVER)", (const char *)&queryFormat, "r_packet.sock != NS_SERVER") )
        __debugbreak();
      v6 = *(_DWORD *)(p_burstLimited + 46);
      if ( !*(p_burstLimited - 1) )
      {
        if ( v6 > v3 )
          goto LABEL_29;
LABEL_28:
        ++v5;
        goto LABEL_29;
      }
      if ( v6 <= v1 )
        goto LABEL_28;
    }
LABEL_29:
    p_burstLimited += 136;
  }
  while ( (__int64)p_burstLimited < (__int64)VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_680.v.m128_i64 + 2 );
  v7 = fakelag_burst->current.integer + s_currentFakelagBurstJitter;
  if ( v7 < 1 )
    v7 = 1;
  if ( v5 < v7 )
  {
    v7 = 0;
  }
  else
  {
    if ( !fakelag_burstJitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 288, ASSERT_TYPE_ASSERT, "(fakelag_burstJitter)", (const char *)&queryFormat, "fakelag_burstJitter") )
      __debugbreak();
    integer = fakelag_burstJitter->current.integer;
    if ( integer > 0 )
      s_currentFakelagBurstJitter = I_irand(-integer, integer + 1);
  }
LABEL_40:
  burstSendCount = v7;
  numSent = 0;
  if ( fakelag_outOfOrder->current.enabled )
  {
    for ( i = 511; i >= 0; --i )
      Fakelag_TrySendPacket(i, v1, v3, &burstSendCount, &numSent);
  }
  else
  {
    for ( j = 0; j < 512; ++j )
      Fakelag_TrySendPacket(j, v1, v3, &burstSendCount, &numSent);
  }
  if ( fakelag_burst->current.integer && burstSendCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 418, ASSERT_TYPE_ASSERT, "( burstSendCount ) == ( 0 )", "%s == %s\n\t%i, %i", "burstSendCount", "0", burstSendCount, 0i64) )
    __debugbreak();
  Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
  return (unsigned int)numSent;
}

/*
==============
FakeLag_SendPacket
==============
*/
int FakeLag_SendPacket(netsrc_t sock, int length, const void *data, netadr_t *to, unsigned int flags, NetPingInfo *info)
{
  size_t v7; 
  unsigned int v10; 
  const dvar_t *v11; 
  double v12; 
  netadrtype_t type; 
  __int128 v15; 
  int addrHandleIndex; 
  __int64 FreeSlot; 
  unsigned __int8 *v18; 
  __int64 v19; 
  __int128 v20; 
  bool v21; 
  const dvar_t *v22; 
  int v23; 
  int integer; 
  const char *v25; 
  const char *v26; 
  netadr_t v27; 

  v7 = length;
  if ( length <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 488, ASSERT_TYPE_ASSERT, "(length > 0)", (const char *)&queryFormat, "length > 0") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 489, ASSERT_TYPE_ASSERT, "(data != 0)", (const char *)&queryFormat, "data != NULL") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_FAKELAG);
  v10 = Sys_Milliseconds();
  FakeLag_UpdateCurrentValues(v10);
  v11 = fakelag_packetloss;
  if ( fakelag_packetloss->current.value > 0.0 )
  {
    v12 = I_flrand(0.0, 1.0);
    if ( *(float *)&v12 <= v11->current.value )
    {
      Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
      return v7;
    }
  }
  if ( !fakelagInitialized || !fakelag_current->current.integer && !fakelag_currentjitter->current.integer && !fakelag_burst->current.integer && !fakelag_outOfOrder->current.enabled )
    goto LABEL_43;
  if ( Com_IsGameLocalServerRunning() || Party_AreWeHost(&g_partyData) && Party_IsRunning(&g_partyData) || Lobby_AreWeHost() )
  {
    type = to->type;
    if ( to->type == NA_IP )
    {
LABEL_43:
      Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
      return NET_SendPacket(sock, v7, data, to, flags | 0x40, info);
    }
  }
  else
  {
    type = to->type;
  }
  if ( ((type - 2) & 0xFFFFFFFD) == 0 )
    goto LABEL_43;
  v15 = *(_OWORD *)&to->type;
  addrHandleIndex = to->addrHandleIndex;
  if ( Com_FrontEndScene_IsActive() )
  {
    v27.addrHandleIndex = addrHandleIndex;
    *(_OWORD *)&v27.type = v15;
    if ( NET_IsLocalAddress(&v27) )
      goto LABEL_43;
  }
  FreeSlot = (int)FakeLag_GetFreeSlot();
  if ( !fakelagInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 533, ASSERT_TYPE_ASSERT, "(fakelagInitialized)", (const char *)&queryFormat, "fakelagInitialized") )
    __debugbreak();
  v18 = (unsigned __int8 *)ntl::nxheap::allocate(&s_fakeLagHeap.m_heap, (unsigned int)v7, 0x10ui64, 0);
  v19 = FreeSlot;
  laggedPackets[v19].data = v18;
  if ( !v18 )
  {
    Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
    Com_PrintWarning(25, "Your fakelag settings are too high - fakelag buffer is full!\n");
    return NET_SendPacket(sock, v7, data, to, flags | 0x40, info);
  }
  laggedPackets[v19].msg.data = v18;
  memcpy_0(v18, data, v7);
  v20 = *(_OWORD *)&to->type;
  v21 = to->type == NA_LOOPBACK;
  laggedPackets[v19].length = v7;
  laggedPackets[v19].loopback = v21;
  *(_OWORD *)&laggedPackets[v19].addr.type = v20;
  laggedPackets[v19].outbound = 1;
  laggedPackets[v19].burstLimited = sock != NS_MAXCLIENTS;
  laggedPackets[v19].addr.addrHandleIndex = to->addrHandleIndex;
  laggedPackets[v19].flags = flags;
  v22 = fakelag_jitter;
  laggedPackets[v19].sock = sock;
  laggedPackets[v19].sendInfo = info;
  if ( v22->current.integer )
    v23 = I_irand(0, lastCall_0 - v10);
  else
    v23 = 0;
  laggedPackets[v19].startTime = v23 + Sys_Milliseconds();
  integer = showpackets->current.integer;
  if ( integer && (integer > 1 || !laggedPackets[v19].loopback) )
  {
    if ( sock == NS_MAXCLIENTS )
    {
      v25 = "server";
    }
    else
    {
      v25 = (char *)&queryFormat.fmt + 3;
      if ( sock < NS_MAXCLIENTS )
        v25 = "client";
    }
    v26 = "network";
    if ( laggedPackets[v19].loopback )
      v26 = "loopback";
    Com_Printf(25, "[%i] adding outbound %s packet for %s\n", v10, v26, v25);
  }
  lastCall_0 = v10;
  Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
  return v7;
}

/*
==============
FakeLag_SendPacket_Real
==============
*/
void FakeLag_SendPacket_Real(unsigned int packet)
{
  __int64 v1; 
  __int64 v2; 

  v1 = packet;
  if ( packet >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 114, ASSERT_TYPE_ASSERT, "(packet < 512)", (const char *)&queryFormat, "packet < FAKELATENCY_MAX_PACKETS_HELD") )
    __debugbreak();
  v2 = v1;
  if ( !laggedPackets[v1].outbound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 115, ASSERT_TYPE_ASSERT, "(laggedPackets[ packet ].outbound)", (const char *)&queryFormat, "laggedPackets[ packet ].outbound") )
    __debugbreak();
  if ( !laggedPackets[v2].data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 116, ASSERT_TYPE_ASSERT, "(laggedPackets[ packet ].data)", (const char *)&queryFormat, "laggedPackets[ packet ].data") )
    __debugbreak();
  NET_SendPacket(laggedPackets[v2].sock, laggedPackets[v2].length, laggedPackets[v2].data, &laggedPackets[v2].addr, laggedPackets[v2].flags | 0x40, laggedPackets[v2].sendInfo);
  FakeLag_DestroyPacket(v1);
}

/*
==============
FakeLag_Shutdown
==============
*/
void FakeLag_Shutdown(void)
{
  int i; 
  int v1; 
  __int64 v2; 

  if ( fakelagInitialized )
  {
    for ( i = 0; i < 512; ++i )
    {
      v1 = (i + s_nextPacketIndex) % 512;
      v2 = v1;
      if ( laggedPackets[v2].length )
      {
        if ( laggedPackets[v2].outbound )
          FakeLag_SendPacket_Real(v1);
        else
          FakeLag_DestroyPacket(v1);
      }
    }
    ntl::nxheap::clear(&s_fakeLagHeap.m_heap);
    fakelagInitialized = 0;
  }
}

/*
==============
FakeLag_UpdateCurrentValues
==============
*/
void FakeLag_UpdateCurrentValues(int now)
{
  const dvar_t *v2; 
  int integer; 
  int v4; 
  int v5; 
  signed int v6; 
  int v7; 
  double v8; 
  int v9; 
  double v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 

  v2 = fakelag_jitter;
  integer = fakelag_target->current.integer;
  v4 = fakelag_current->current.integer;
  if ( integer + fakelag_jitter->current.integer != v4 )
  {
    v5 = fakelag_currentjitter->current.integer;
    v6 = abs32(v4 - v5 - integer);
    if ( now - lastCall < v6 )
      v6 = now - lastCall;
    v7 = -v6;
    if ( integer + v5 >= v4 )
      v7 = v6;
    Dvar_SetInt_Internal(fakelag_current, v4 + v7);
    v2 = fakelag_jitter;
  }
  if ( (fakelag_currentjitter->current.integer > 0 || v2->current.integer > 0) && now > nextChangeTime )
  {
    v8 = I_flrand(0.0, 1.0);
    Dvar_SetInt_Internal(fakelag_currentjitter, (int)(float)(*(float *)&v8 * (float)fakelag_jitter->current.integer));
    v9 = fakelag_jitterinterval->current.integer;
    v10 = I_flrand(0.0, 1.0);
    nextChangeTime = now + v9 + (int)(float)(*(float *)&v10 * (float)(2 * v9));
  }
  v11 = fakelag_latency_devgui->current.integer;
  if ( s_fakelag_latency_devgui != v11 )
  {
    s_fakelag_latency_devgui = fakelag_latency_devgui->current.integer;
    Dvar_SetInt_Internal(fakelag_target, v11);
  }
  v12 = fakelag_packetloss_devgui->current.integer;
  if ( s_fakelag_packetloss_devgui != v12 )
  {
    s_fakelag_packetloss_devgui = fakelag_packetloss_devgui->current.integer;
    if ( (unsigned int)v12 > 0x64 )
    {
      v15 = 100;
      v14 = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 469, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_fakelag_packetloss_devgui ) && ( s_fakelag_packetloss_devgui ) <= ( 100 )", "s_fakelag_packetloss_devgui not in [0, 100]\n\t%i not in [%i, %i]", v14, 0i64, v15) )
        __debugbreak();
      v12 = s_fakelag_packetloss_devgui;
    }
    Dvar_SetFloat_Internal(fakelag_packetloss, (float)v12 * 0.0099999998);
  }
  v13 = s_currentFakelagBurstJitter;
  lastCall = now;
  if ( fakelag_burst->current.integer <= 0 )
    v13 = 0;
  s_currentFakelagBurstJitter = v13;
}

/*
==============
Fakelag_TrySendPacket
==============
*/
void Fakelag_TrySendPacket(int packetIter, int loopbackPacketTime, int networkPacketTime, int *burstSendCount, int *numSent)
{
  unsigned int v9; 
  fakedLatencyPackets_t *v10; 
  int startTime; 
  int integer; 
  int v13; 
  int v14; 
  const char *v15; 
  const char *v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 

  if ( !burstSendCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 321, ASSERT_TYPE_ASSERT, "(burstSendCount)", (const char *)&queryFormat, "burstSendCount") )
    __debugbreak();
  if ( !numSent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 322, ASSERT_TYPE_ASSERT, "(numSent)", (const char *)&queryFormat, "numSent") )
    __debugbreak();
  v9 = (packetIter + s_nextPacketIndex) % 512;
  if ( v9 >= 0x200 )
  {
    LODWORD(v18) = (packetIter + s_nextPacketIndex) % 512;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 326, ASSERT_TYPE_ASSERT, "(unsigned)( packetIndex ) < (unsigned)( ( sizeof( *array_counter( laggedPackets ) ) + 0 ) )", "packetIndex doesn't index ARRAY_COUNT( laggedPackets )\n\t%i not in [0, %i)", v18, 512) )
      __debugbreak();
  }
  v10 = &laggedPackets[v9];
  if ( v10->length && v10->outbound )
  {
    startTime = v10->startTime;
    if ( v10->loopback )
    {
      if ( startTime > loopbackPacketTime )
        return;
    }
    else if ( startTime > networkPacketTime )
    {
      return;
    }
    if ( !v10->burstLimited )
      goto LABEL_22;
    if ( !burstSendCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 306, ASSERT_TYPE_ASSERT, "(burstSendCount)", (const char *)&queryFormat, "burstSendCount") )
      __debugbreak();
    if ( *burstSendCount > 0 )
    {
      --*burstSendCount;
LABEL_22:
      if ( v10->addr.type == NA_BROADCAST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 344, ASSERT_TYPE_ASSERT, "(r_packet.addr.type != NA_BROADCAST)", "%s\n\tShould not be lagging broadcast packets", "r_packet.addr.type != NA_BROADCAST") )
        __debugbreak();
      if ( v10->addr.type == NA_RAW && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 345, ASSERT_TYPE_ASSERT, "(r_packet.addr.type != NA_RAW)", "%s\n\tShould not be lagging raw LAN packets", "r_packet.addr.type != NA_RAW") )
        __debugbreak();
      integer = showpackets->current.integer;
      if ( integer && (integer > 1 || !v10->loopback) )
      {
        v13 = v10->startTime;
        v14 = Sys_Milliseconds() - v13;
        if ( v10->sock == NS_MAXCLIENTS )
        {
          v15 = "server";
        }
        else
        {
          v15 = (char *)&queryFormat.fmt + 3;
          if ( v10->sock < NS_MAXCLIENTS )
            v15 = "client";
        }
        v16 = "network";
        if ( v10->loopback )
          v16 = "loopback";
        v17 = Sys_Milliseconds();
        LODWORD(v19) = v14;
        LODWORD(v18) = v13;
        Com_Printf(25, "[%i] delivering outbound %s packet for %s (from %i) (%ims delay)\n", v17, v16, v15, v18, v19);
      }
      FakeLag_SendPacket_Real(v9);
      ++*numSent;
    }
  }
}

