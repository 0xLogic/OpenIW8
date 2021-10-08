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
  int integer; 
  __int64 startTime; 
  char *fmt; 
  __int64 v21; 
  int v22; 

  _R13 = net_from;
  Sys_EnterCriticalSection(CRITSECT_FAKELAG);
  if ( loopback && Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 748, ASSERT_TYPE_ASSERT, "(!loopback || !Com_FrontEndScene_IsActive())", "%s\n\tShouldn't send lagged loopback packets while the front-end scene is active", "!loopback || !Com_FrontEndScene_IsActive()") )
    __debugbreak();
  v9 = Sys_Milliseconds();
  v10 = 0;
  while ( 1 )
  {
    v11 = (v10 + s_nextPacketIndex) % 512;
    _RBX = &laggedPackets[v11];
    if ( _RBX->length )
    {
      if ( !_RBX->outbound && _RBX->sock == sock && _RBX->loopback == loopback )
      {
        if ( !_RBX->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 764, ASSERT_TYPE_ASSERT, "(r_packet.data)", (const char *)&queryFormat, "r_packet.data") )
          __debugbreak();
        if ( Com_IsGameLocalServerRunning() || Party_AreWeHost(&g_partyData) && Party_IsRunning(&g_partyData) || Lobby_AreWeHost() || _RBX->startTime + fakelag_current->current.integer / 2 <= v9 )
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
  if ( integer && (integer > 1 || !_RBX->loopback) )
  {
    startTime = (unsigned int)_RBX->startTime;
    LODWORD(v21) = v9 - startTime;
    LODWORD(fmt) = _RBX->startTime;
    Com_Printf(25, "[%i] delivering incoming packet from %i (time: %i) (%ims latency)\n", (unsigned int)v9, startTime, fmt, v21);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+8]
    vmovups xmmword ptr [r13+0], xmm0
  }
  _R13->addrHandleIndex = _RBX->addr.addrHandleIndex;
  __asm { vmovups xmm0, xmmword ptr [rbx+70h] }
  _RAX = net_info;
  __asm
  {
    vmovups xmmword ptr [rax], xmm0
    vmovsd  xmm1, qword ptr [rbx+80h]
    vmovsd  qword ptr [rax+10h], xmm1
  }
  net_message->bit = _RBX->msg.bit;
  net_message->cursize = _RBX->msg.cursize;
  net_message->maxsize = _RBX->msg.maxsize;
  net_message->overflowed = _RBX->msg.overflowed;
  net_message->readcount = _RBX->msg.readcount;
  if ( _RBX->msg.targetLocalNetID >= (unsigned int)NS_INVALID_NETSRC )
  {
    v22 = 10004;
    LODWORD(v21) = _RBX->msg.targetLocalNetID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 785, ASSERT_TYPE_ASSERT, "(unsigned)( r_packet.msg.targetLocalNetID ) < (unsigned)( NS_INVALID_NETSRC )", "r_packet.msg.targetLocalNetID doesn't index NS_INVALID_NETSRC\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  net_message->targetLocalNetID = _RBX->msg.targetLocalNetID;
  if ( !_RBX->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 789, ASSERT_TYPE_ASSERT, "(r_packet.data)", (const char *)&queryFormat, "r_packet.data") )
    __debugbreak();
  if ( !net_message->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 790, ASSERT_TYPE_ASSERT, "(net_message->data)", (const char *)&queryFormat, "net_message->data") )
    __debugbreak();
  memcpy_0(net_message->data, _RBX->data, _RBX->length);
  FakeLag_DestroyPacket(v11);
  Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
  return 1i64;
}

/*
==============
FakeLag_Init
==============
*/

void __fastcall FakeLag_Init(__int64 a1, double _XMM1_8, double _XMM2_8)
{
  const char *v3; 
  int v4; 
  const char *v5; 
  const char *v6; 

  if ( !fakelagInitialized )
  {
    memset_0(laggedPackets, 0, sizeof(laggedPackets));
    if ( s_fakeLagHeap.m_heap.m_num_used_blocks )
    {
      if ( !s_fakeLagHeap.m_heap.m_used_mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 138, ASSERT_TYPE_ASSERT, "( m_used_mem != 0 )", (const char *)&queryFormat, "m_used_mem != 0") )
        __debugbreak();
      v3 = "s_fakeLagHeap.empty()";
      v4 = 160;
      v5 = "(s_fakeLagHeap.empty())";
      v6 = "c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp";
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
        __asm { vmovss  xmm3, cs:__real@3f800000; max }
        fakelag_jitterinterval = Dvar_RegisterInt("OKNKMPPRLK", 2000, 0, 60000, 0, "jitter interval for lag debugging");
        __asm
        {
          vxorps  xmm2, xmm2, xmm2; min
          vxorps  xmm1, xmm1, xmm1; value
        }
        fakelag_packetloss = Dvar_RegisterFloat("NQLMKKTRLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Packet loss for lag debugging");
        fakelag_burst = Dvar_RegisterInt("NSQNMRRPL", 0, 0, 50, 0, "Enable to simulate packet bursting from client to server (only on sends)");
        fakelag_burstJitter = Dvar_RegisterInt("MNKKMNRQRT", 0, 0, 50, 0, "Jitter around the fakelag_burst that's applied (only on sends)");
        fakelag_outOfOrder = Dvar_RegisterBool("MMPPSKPRTM", 0, 0, "Applies jitter in a way that may cause out of order packets (only on sends)");
        fakelag_latency_devgui = Dvar_RegisterInt("LTSSOMNQLK", 0, 0, 999, 0x20u, "Latency to add to incoming and outgoing packets.");
        fakelag_packetloss_devgui = Dvar_RegisterInt("OMMKQSOLQL", 0, 0, 100, 0x20u, "Percentage of packets to drop applies to incoming and outgoing packets.");
        Dvar_EndPermanentRegistration();
        fakelagInitialized = 1;
        return;
      }
      v3 = "m_used_mem == 0";
      v4 = 133;
      v5 = "( m_used_mem == 0 )";
      v6 = "c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl";
    }
    if ( CoreAssert_Handler(v6, v4, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v3) )
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
  unsigned int v10; 
  int integer; 
  int v12; 
  unsigned int v13; 
  bool v14; 
  int v15; 
  signed int v16; 
  int v17; 
  char v21; 
  __int64 FreeSlot; 
  unsigned __int8 *v24; 
  unsigned __int8 *data; 
  int v35; 
  int v36; 
  int v37; 
  const char *v38; 
  const char *v39; 

  _RBX = msg;
  _R12 = from;
  if ( msg->cursize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 591, ASSERT_TYPE_ASSERT, "(msg->cursize > 0)", (const char *)&queryFormat, "msg->cursize > 0") )
    __debugbreak();
  if ( !_RBX->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 592, ASSERT_TYPE_ASSERT, "(msg->data != 0)", (const char *)&queryFormat, "msg->data != NULL") )
    __debugbreak();
  if ( loopback && Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 594, ASSERT_TYPE_ASSERT, "(!loopback || !Com_FrontEndScene_IsActive())", "%s\n\tShouldn't send lagged loopback packets while the front-end scene is active", "!loopback || !Com_FrontEndScene_IsActive()") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_FAKELAG);
  v10 = Sys_Milliseconds();
  integer = fakelag_target->current.integer;
  v12 = fakelag_current->current.integer;
  v13 = integer + fakelag_jitter->current.integer;
  v14 = v13 < v12;
  if ( v13 != v12 )
  {
    v15 = fakelag_currentjitter->current.integer;
    v16 = abs32(v12 - v15 - integer);
    if ( (int)(v10 - lastCall_1) < v16 )
      v16 = v10 - lastCall_1;
    v17 = -v16;
    if ( integer + v15 >= v12 )
      v17 = v16;
    Dvar_SetInt_Internal(fakelag_current, v12 + v17);
  }
  _RDI = fakelag_packetloss;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0; min
    vcomiss xmm0, dword ptr [rdi+28h]
  }
  if ( !v14 )
    goto LABEL_20;
  __asm { vmovss  xmm1, cs:__real@3f800000; max }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vcomiss xmm0, dword ptr [rdi+28h] }
  if ( v14 | v21 )
  {
    Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
    return 0xFFFFFFFFi64;
  }
  else
  {
LABEL_20:
    FreeSlot = (int)FakeLag_GetFreeSlot();
    if ( !fakelagInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 627, ASSERT_TYPE_ASSERT, "(fakelagInitialized)", (const char *)&queryFormat, "fakelagInitialized") )
      __debugbreak();
    v24 = (unsigned __int8 *)ntl::nxheap::allocate(&s_fakeLagHeap.m_heap, (unsigned int)_RBX->cursize, 0x10ui64, 0);
    _RDI = FreeSlot;
    _R13 = laggedPackets;
    laggedPackets[FreeSlot].data = v24;
    if ( v24 )
    {
      memcpy_0(v24, _RBX->data, _RBX->cursize);
      __asm { vmovups ymm0, ymmword ptr [rbx] }
      data = laggedPackets[_RDI].data;
      __asm
      {
        vmovups ymmword ptr [rdi+r13+38h], ymm0
        vmovups xmm1, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rdi+r13+58h], xmm1
        vmovsd  xmm0, qword ptr [rbx+30h]
        vmovsd  qword ptr [rdi+r13+68h], xmm0
      }
      laggedPackets[_RDI].msg.data = data;
      laggedPackets[_RDI].outbound = 0;
      laggedPackets[_RDI].loopback = loopback;
      laggedPackets[_RDI].sock = sock;
      laggedPackets[_RDI].burstLimited = 0;
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovups xmmword ptr [rdi+r13+8], xmm0
      }
      laggedPackets[_RDI].addr.addrHandleIndex = _R12->addrHandleIndex;
      laggedPackets[_RDI].length = _RBX->cursize;
      _RAX = info;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rdi+r13+70h], xmm0
        vmovsd  xmm1, qword ptr [rax+10h]
        vmovsd  qword ptr [rdi+r13+80h], xmm1
      }
      if ( ((_R12->type - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( fakelag_jitter->current.integer )
        {
          v35 = I_irand(0, lastCall_1 - v10);
          v36 = v35 + Sys_Milliseconds();
        }
        else
        {
          v36 = Sys_Milliseconds();
        }
      }
      else
      {
        v36 = 0;
      }
      laggedPackets[_RDI].startTime = v36;
      v37 = showpackets->current.integer;
      if ( v37 && (v37 > 1 || !laggedPackets[_RDI].loopback) )
      {
        if ( sock == NS_MAXCLIENTS )
        {
          v38 = "server";
        }
        else
        {
          v38 = (char *)&queryFormat.fmt + 3;
          if ( sock < NS_MAXCLIENTS )
            v38 = "client";
        }
        v39 = "network";
        if ( loopback )
          v39 = "loopback";
        Com_Printf(25, "[%i] adding incoming %s packet for %s\n", v10, v39, v38);
      }
      lastCall_1 = v10;
      Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
      return (unsigned int)FreeSlot;
    }
    else
    {
      Com_PrintWarning(25, "Your fakelag settings are too high - fakelag buffer is full!\n");
      laggedPackets[_RDI].length = 0;
      Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
      return 0xFFFFFFFFi64;
    }
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
  size_t v9; 
  unsigned int v12; 
  char v15; 
  char v17; 
  int result; 
  netadrtype_t type; 
  int addrHandleIndex; 
  __int64 FreeSlot; 
  unsigned __int8 *v23; 
  bool v27; 
  const dvar_t *v28; 
  int v29; 
  int integer; 
  const char *v31; 
  const char *v32; 
  netadr_t v34; 

  _RDI = to;
  v9 = length;
  if ( length <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 488, ASSERT_TYPE_ASSERT, "(length > 0)", (const char *)&queryFormat, "length > 0") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 489, ASSERT_TYPE_ASSERT, "(data != 0)", (const char *)&queryFormat, "data != NULL") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_FAKELAG);
  v12 = Sys_Milliseconds();
  FakeLag_UpdateCurrentValues(v12);
  _RBX = fakelag_packetloss;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0; min
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( v15 )
  {
    __asm { vmovss  xmm1, cs:__real@3f800000; max }
    *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vcomiss xmm0, dword ptr [rbx+28h] }
    if ( v15 | v17 )
    {
      Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
      return v9;
    }
  }
  __asm { vmovaps [rsp+0A8h+var_58], xmm6 }
  if ( !fakelagInitialized || !fakelag_current->current.integer && !fakelag_currentjitter->current.integer && !fakelag_burst->current.integer && !fakelag_outOfOrder->current.enabled )
    goto LABEL_43;
  if ( Com_IsGameLocalServerRunning() || Party_AreWeHost(&g_partyData) && Party_IsRunning(&g_partyData) || Lobby_AreWeHost() )
  {
    type = _RDI->type;
    if ( _RDI->type == NA_IP )
    {
LABEL_43:
      Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
      goto LABEL_44;
    }
  }
  else
  {
    type = _RDI->type;
  }
  if ( ((type - 2) & 0xFFFFFFFD) == 0 )
    goto LABEL_43;
  __asm { vmovups xmm6, xmmword ptr [rdi] }
  addrHandleIndex = _RDI->addrHandleIndex;
  if ( Com_FrontEndScene_IsActive() )
  {
    v34.addrHandleIndex = addrHandleIndex;
    __asm { vmovups [rsp+0A8h+var_78], xmm6 }
    if ( NET_IsLocalAddress(&v34) )
      goto LABEL_43;
  }
  FreeSlot = (int)FakeLag_GetFreeSlot();
  if ( !fakelagInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 533, ASSERT_TYPE_ASSERT, "(fakelagInitialized)", (const char *)&queryFormat, "fakelagInitialized") )
    __debugbreak();
  v23 = (unsigned __int8 *)ntl::nxheap::allocate(&s_fakeLagHeap.m_heap, (unsigned int)v9, 0x10ui64, 0);
  _RBX = FreeSlot;
  _R13 = laggedPackets;
  laggedPackets[_RBX].data = v23;
  if ( v23 )
  {
    laggedPackets[_RBX].msg.data = v23;
    memcpy_0(v23, data, v9);
    __asm { vmovups xmm0, xmmword ptr [rdi] }
    v27 = _RDI->type == NA_LOOPBACK;
    laggedPackets[_RBX].length = v9;
    laggedPackets[_RBX].loopback = v27;
    __asm { vmovups xmmword ptr [rbx+r13+8], xmm0 }
    laggedPackets[_RBX].outbound = 1;
    laggedPackets[_RBX].burstLimited = sock != NS_MAXCLIENTS;
    laggedPackets[_RBX].addr.addrHandleIndex = _RDI->addrHandleIndex;
    laggedPackets[_RBX].flags = flags;
    v28 = fakelag_jitter;
    laggedPackets[_RBX].sock = sock;
    laggedPackets[_RBX].sendInfo = info;
    if ( v28->current.integer )
      v29 = I_irand(0, lastCall_0 - v12);
    else
      v29 = 0;
    laggedPackets[_RBX].startTime = v29 + Sys_Milliseconds();
    integer = showpackets->current.integer;
    if ( integer && (integer > 1 || !laggedPackets[_RBX].loopback) )
    {
      if ( sock == NS_MAXCLIENTS )
      {
        v31 = "server";
      }
      else
      {
        v31 = (char *)&queryFormat.fmt + 3;
        if ( sock < NS_MAXCLIENTS )
          v31 = "client";
      }
      v32 = "network";
      if ( laggedPackets[_RBX].loopback )
        v32 = "loopback";
      Com_Printf(25, "[%i] adding outbound %s packet for %s\n", v12, v32, v31);
    }
    lastCall_0 = v12;
    Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
    result = v9;
    goto LABEL_45;
  }
  Sys_LeaveCriticalSection(CRITSECT_FAKELAG);
  Com_PrintWarning(25, "Your fakelag settings are too high - fakelag buffer is full!\n");
LABEL_44:
  result = NET_SendPacket(sock, v9, data, _RDI, flags | 0x40, info);
LABEL_45:
  __asm { vmovaps xmm6, [rsp+0A8h+var_58] }
  return result;
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

void __fastcall FakeLag_UpdateCurrentValues(int now, __int64 a2, double _XMM2_8)
{
  const dvar_t *v5; 
  int integer; 
  int v7; 
  int v8; 
  signed int v9; 
  int v10; 
  int v19; 
  int v23; 
  unsigned int unsignedInt; 
  int v28; 
  unsigned int v29; 
  int v30; 

  v5 = fakelag_jitter;
  integer = fakelag_target->current.integer;
  v7 = fakelag_current->current.integer;
  if ( integer + fakelag_jitter->current.integer != v7 )
  {
    v8 = fakelag_currentjitter->current.integer;
    v9 = abs32(v7 - v8 - integer);
    if ( now - lastCall < v9 )
      v9 = now - lastCall;
    v10 = -v9;
    if ( integer + v8 >= v7 )
      v10 = v9;
    Dvar_SetInt_Internal(fakelag_current, v7 + v10);
    v5 = fakelag_jitter;
  }
  if ( (fakelag_currentjitter->current.integer > 0 || v5->current.integer > 0) && now > nextChangeTime )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000; max
      vxorps  xmm0, xmm0, xmm0; min
    }
    *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [rax+28h]
      vmulss  xmm3, xmm0, xmm2
      vcvttss2si edx, xmm3; value
    }
    Dvar_SetInt_Internal(fakelag_currentjitter, _EDX);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000; max
      vxorps  xmm0, xmm0, xmm0; min
    }
    v19 = fakelag_jitterinterval->current.integer;
    *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm0, xmm0, xmm1
      vcvttss2si eax, xmm0
    }
    nextChangeTime = now + v19 + _EAX;
  }
  v23 = fakelag_latency_devgui->current.integer;
  if ( s_fakelag_latency_devgui != v23 )
  {
    s_fakelag_latency_devgui = fakelag_latency_devgui->current.integer;
    Dvar_SetInt_Internal(fakelag_target, v23);
  }
  unsignedInt = fakelag_packetloss_devgui->current.unsignedInt;
  if ( s_fakelag_packetloss_devgui != unsignedInt )
  {
    s_fakelag_packetloss_devgui = fakelag_packetloss_devgui->current.integer;
    if ( unsignedInt > 0x64 )
    {
      v30 = 100;
      v29 = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\fakelag.cpp", 469, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_fakelag_packetloss_devgui ) && ( s_fakelag_packetloss_devgui ) <= ( 100 )", "s_fakelag_packetloss_devgui not in [0, 100]\n\t%i not in [%i, %i]", v29, 0i64, v30) )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm1, xmm0, cs:__real@3c23d70a; value
    }
    Dvar_SetFloat_Internal(fakelag_packetloss, *(float *)&_XMM1);
  }
  v28 = s_currentFakelagBurstJitter;
  lastCall = now;
  if ( fakelag_burst->current.integer <= 0 )
    v28 = 0;
  s_currentFakelagBurstJitter = v28;
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

