/*
==============
Netchan_Transmit
==============
*/

int __fastcall Netchan_Transmit(netchan_t *chan, int length, const unsigned __int8 *data, NetPingInfo *packetInfo)
{
  return ?Netchan_Transmit@@YAHPEAUnetchan_t@@HPEBEPEAUNetPingInfo@@@Z(chan, length, data, packetInfo);
}

/*
==============
NET_GetLocalNetIDFromLocalClientNum
==============
*/

netsrc_t __fastcall NET_GetLocalNetIDFromLocalClientNum(const LocalClientNum_t localClientNum)
{
  return ?NET_GetLocalNetIDFromLocalClientNum@@YA?AW4netsrc_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
NetProf_NewSendPacket
==============
*/

void __fastcall NetProf_NewSendPacket(netchan_t *pChan, int iSize, int bFragment)
{
  ?NetProf_NewSendPacket@@YAXPEAUnetchan_t@@HH@Z(pChan, iSize, bFragment);
}

/*
==============
NET_CompareAdr
==============
*/

int __fastcall NET_CompareAdr(netadr_t *a, netadr_t *b)
{
  return ?NET_CompareAdr@@YAHUnetadr_t@@0@Z(a, b);
}

/*
==============
NET_OutOfBandData
==============
*/

int __fastcall NET_OutOfBandData(netsrc_t sock, const netadr_t *adr, const unsigned __int8 *format, int len)
{
  return ?NET_OutOfBandData@@YAHW4netsrc_t@@AEBUnetadr_t@@PEBEH@Z(sock, adr, format, len);
}

/*
==============
NetProf_AddPacket
==============
*/

void __fastcall NetProf_AddPacket(netProfileStream_t *pProfStream, int iSize, int bFragment)
{
  ?NetProf_AddPacket@@YAXPEAUnetProfileStream_t@@HH@Z(pProfStream, iSize, bFragment);
}

/*
==============
NET_StringToAdr
==============
*/

int __fastcall NET_StringToAdr(const char *s, netadr_t *a)
{
  return ?NET_StringToAdr@@YAHPEBDPEAUnetadr_t@@@Z(s, a);
}

/*
==============
NET_IsLocalAddress
==============
*/

int __fastcall NET_IsLocalAddress(netadr_t *adr)
{
  return ?NET_IsLocalAddress@@YAHUnetadr_t@@@Z(adr);
}

/*
==============
StringToXNKID
==============
*/

void __fastcall StringToXNKID(const char *str, bdSecurityID *xnkid)
{
  ?StringToXNKID@@YAXPEBDPEAVbdSecurityID@@@Z(str, xnkid);
}

/*
==============
NET_GetLoopPacket
==============
*/

int __fastcall NET_GetLoopPacket(netsrc_t sock, netadr_t *net_from, msg_t *net_message, NetPingInfo *net_info)
{
  return ?NET_GetLoopPacket@@YAHW4netsrc_t@@PEAUnetadr_t@@PEAUmsg_t@@PEAUNetPingInfo@@@Z(sock, net_from, net_message, net_info);
}

/*
==============
XNKIDToString
==============
*/

void __fastcall XNKIDToString(const bdSecurityID *xnkid, char *str, const int strBufSize)
{
  ?XNKIDToString@@YAXPEBVbdSecurityID@@PEADH@Z(xnkid, str, strBufSize);
}

/*
==============
Net_DisplayProfile
==============
*/

void __fastcall Net_DisplayProfile(LocalClientNum_t localClientNum)
{
  ?Net_DisplayProfile@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
NetProf_PrepProfiling
==============
*/

void __fastcall NetProf_PrepProfiling(netProfileInfo_t *prof)
{
  ?NetProf_PrepProfiling@@YAXPEAUnetProfileInfo_t@@@Z(prof);
}

/*
==============
NET_CompareAdrSigned
==============
*/

int __fastcall NET_CompareAdrSigned(const netadr_t *a, const netadr_t *b, bool skipLocalClients)
{
  return ?NET_CompareAdrSigned@@YAHPEBUnetadr_t@@0_N@Z(a, b, skipLocalClients);
}

/*
==============
NET_GetLocalNetIDFromControllerIndex
==============
*/

netsrc_t __fastcall NET_GetLocalNetIDFromControllerIndex(const int controllerIndex)
{
  return ?NET_GetLocalNetIDFromControllerIndex@@YA?AW4netsrc_t@@H@Z(controllerIndex);
}

/*
==============
Netchan_Process
==============
*/

int __fastcall Netchan_Process(netchan_t *chan, msg_t *msg)
{
  return ?Netchan_Process@@YAHPEAUnetchan_t@@PEAUmsg_t@@@Z(chan, msg);
}

/*
==============
Netchan_Setup
==============
*/

void __fastcall Netchan_Setup(netsrc_t sock, netchan_t *chan, NetConnection *connection, char *buffer, int bufferSize, NetchanTelemetry *serverTelemetry)
{
  ?Netchan_Setup@@YAXW4netsrc_t@@PEAUnetchan_t@@PEAVNetConnection@@PEADHPEAVNetchanTelemetry@@@Z(sock, chan, connection, buffer, bufferSize, serverTelemetry);
}

/*
==============
NET_GetClientPacket
==============
*/

int __fastcall NET_GetClientPacket(netadr_t *net_from, msg_t *net_message)
{
  return ?NET_GetClientPacket@@YAHPEAUnetadr_t@@PEAUmsg_t@@@Z(net_from, net_message);
}

/*
==============
NET_GetMaxFragmentLength
==============
*/

int __fastcall NET_GetMaxFragmentLength(netchan_t *chan)
{
  return ?NET_GetMaxFragmentLength@@YAHPEAUnetchan_t@@@Z(chan);
}

/*
==============
NET_OutOfBandPrint
==============
*/

int __fastcall NET_OutOfBandPrint(netsrc_t sock, const netadr_t *adr, const char *data)
{
  return ?NET_OutOfBandPrint@@YAHW4netsrc_t@@AEBUnetadr_t@@PEBD@Z(sock, adr, data);
}

/*
==============
Net_IsZeroIP
==============
*/

int __fastcall Net_IsZeroIP(netadr_t *adr)
{
  return ?Net_IsZeroIP@@YAHUnetadr_t@@@Z(adr);
}

/*
==============
NET_SendPacket
==============
*/

int __fastcall NET_SendPacket(netsrc_t sock, int length, const void *data, const netadr_t *to, const unsigned int flags, NetPingInfo *info)
{
  return ?NET_SendPacket@@YAHW4netsrc_t@@HPEBXAEBUnetadr_t@@IPEAUNetPingInfo@@@Z(sock, length, data, to, flags, info);
}

/*
==============
NetProf_UpdateStatistics
==============
*/

void __fastcall NetProf_UpdateStatistics(netProfileStream_t *pStream)
{
  ?NetProf_UpdateStatistics@@YAXPEAUnetProfileStream_t@@@Z(pStream);
}

/*
==============
Netchan_SetUpBuffers
==============
*/

void __fastcall Netchan_SetUpBuffers(netchan_t *chan, unsigned __int8 *buffer, int bufferSize)
{
  ?Netchan_SetUpBuffers@@YAXPEAUnetchan_t@@PEAEH@Z(chan, buffer, bufferSize);
}

/*
==============
NET_DeferPacketToClient
==============
*/

void __fastcall NET_DeferPacketToClient(netadr_t *net_from, msg_t *net_message)
{
  ?NET_DeferPacketToClient@@YAXPEAUnetadr_t@@PEAUmsg_t@@@Z(net_from, net_message);
}

/*
==============
NET_CompareIPAdr
==============
*/

int __fastcall NET_CompareIPAdr(netadr_t *a, netadr_t *b)
{
  return ?NET_CompareIPAdr@@YAHUnetadr_t@@0@Z(a, b);
}

/*
==============
NetProf_NewRecievePacket
==============
*/

void __fastcall NetProf_NewRecievePacket(netchan_t *pChan, int iSize, int bFragment)
{
  ?NetProf_NewRecievePacket@@YAXPEAUnetchan_t@@HH@Z(pChan, iSize, bFragment);
}

/*
==============
Netchan_GetFragmentType
==============
*/

NetFragment::Type __fastcall Netchan_GetFragmentType(const int length, const int offset)
{
  return ?Netchan_GetFragmentType@@YA?AW4Type@NetFragment@@HH@Z(length, offset);
}

/*
==============
Netchan_TrackMessageRx
==============
*/

void __fastcall Netchan_TrackMessageRx(netchan_t *chan, const int size, const int dropCount, const bool fragmented)
{
  ?Netchan_TrackMessageRx@@YAXPEAUnetchan_t@@HH_N@Z(chan, size, dropCount, fragmented);
}

/*
==============
NET_GetServerPacket
==============
*/

int __fastcall NET_GetServerPacket(netadr_t *net_from, msg_t *net_message, NetPingInfo *net_info)
{
  return ?NET_GetServerPacket@@YAHPEAUnetadr_t@@PEAUmsg_t@@PEAUNetPingInfo@@@Z(net_from, net_message, net_info);
}

/*
==============
Netchan_Init
==============
*/

void Netchan_Init(void)
{
  ?Netchan_Init@@YAXXZ();
}

/*
==============
NET_OutOfBandData
==============
*/

int __fastcall NET_OutOfBandData(netsrc_t sock, const netadr_t *adr, const unsigned __int8 *format, int len, const unsigned int flags)
{
  return ?NET_OutOfBandData@@YAHW4netsrc_t@@AEBUnetadr_t@@PEBEHI@Z(sock, adr, format, len, flags);
}

/*
==============
NET_GetDeferredClientPacket
==============
*/

bool __fastcall NET_GetDeferredClientPacket(netadr_t *net_from, msg_t *net_message)
{
  return ?NET_GetDeferredClientPacket@@YA_NPEAUnetadr_t@@PEAUmsg_t@@@Z(net_from, net_message);
}

/*
==============
Netchan_AccumulateStat
==============
*/

void __fastcall Netchan_AccumulateStat(netchan_t *chan, NetchanTelemetry::AccumType accum, const int value)
{
  ?Netchan_AccumulateStat@@YAXPEAUnetchan_t@@W4AccumType@NetchanTelemetry@@H@Z(chan, accum, value);
}

/*
==============
NET_GetDeferredPacketCount
==============
*/

int __fastcall NET_GetDeferredPacketCount()
{
  return ?NET_GetDeferredPacketCount@@YAHXZ();
}

/*
==============
NET_AdrToString
==============
*/

const char *__fastcall NET_AdrToString(netadr_t *a)
{
  return ?NET_AdrToString@@YAPEBDUnetadr_t@@@Z(a);
}

/*
==============
Net_IsSplitscreenAdr
==============
*/

bool __fastcall Net_IsSplitscreenAdr(netadr_t *net_adr)
{
  return ?Net_IsSplitscreenAdr@@YA_NUnetadr_t@@@Z(net_adr);
}

/*
==============
NET_AdrToString
==============
*/
char *NET_AdrToString(netadr_t *a)
{
  int addrHandleIndex; 
  __int128 v2; 
  _QWORD *v3; 
  __int64 v4; 
  __int64 v5; 
  char *v6; 
  char *fmt; 
  __int64 v9; 
  __int64 v10; 
  unsigned int addr[4]; 
  int v12; 
  char buf[16]; 

  addrHandleIndex = a->addrHandleIndex;
  v2 = *(_OWORD *)&a->type;
  v3 = NtCurrentTeb()->Reserved1[11];
  v4 = tls_index;
  v12 = addrHandleIndex;
  *(_OWORD *)addr = v2;
  if ( *(_DWORD *)(v3[tls_index] + 736i64) >= 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( s_adrToStringBufferIndex ) < (unsigned)( 3 )", "s_adrToStringBufferIndex doesn't index ADR_TO_STRING_BUFFER_COUNT\n\t%i not in [0, %i)", *(_DWORD *)(v3[tls_index] + 736i64), 3) )
    __debugbreak();
  v5 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v4);
  v6 = (char *)(v5 + ((__int64)*(int *)(v5 + 736) << 6) + 752);
  *(_DWORD *)(v5 + 736) = (*(_DWORD *)(v5 + 736) + 1) % 3;
  Com_sprintf(v6, 0x40ui64, "unknown");
  if ( addr[0] == 1 )
  {
    Com_sprintf(v6, 0x40ui64, "loopback");
  }
  else if ( addr[0] - 2 <= 2 )
  {
    NET_InAddrToString(&addr[1], buf);
    LODWORD(v10) = v12;
    LODWORD(v9) = addr[3];
    LODWORD(fmt) = LOWORD(addr[2]);
    Com_sprintf(v6, 0x40ui64, "%s:%u:%d (%i)", buf, fmt, v9, v10);
  }
  return v6;
}

/*
==============
NET_CompareAdr
==============
*/
_BOOL8 NET_CompareAdr(netadr_t *a, netadr_t *b)
{
  int addrHandleIndex; 
  __int128 v3; 
  int v4; 
  netadr_t ba; 
  netadr_t aa; 

  addrHandleIndex = a->addrHandleIndex;
  *(_OWORD *)&aa.type = *(_OWORD *)&a->type;
  v3 = *(_OWORD *)&b->type;
  aa.addrHandleIndex = addrHandleIndex;
  v4 = b->addrHandleIndex;
  *(_OWORD *)&ba.type = v3;
  ba.addrHandleIndex = v4;
  return NET_CompareAdrSigned(&aa, &ba, 0) == 0;
}

/*
==============
NET_CompareAdrSigned
==============
*/
__int64 NET_CompareAdrSigned(const netadr_t *a, const netadr_t *b, bool skipLocalClients)
{
  netadrtype_t type; 
  netsrc_t localNetID; 
  netsrc_t v8; 
  __int64 v9; 
  unsigned __int8 v10; 

  type = a->type;
  if ( a->type != b->type )
    return (unsigned int)(type - b->type);
  if ( !skipLocalClients )
  {
    localNetID = a->localNetID;
    v8 = b->localNetID;
    if ( localNetID != v8 && localNetID != NS_MAXCLIENTS && v8 != NS_MAXCLIENTS )
      return (unsigned int)(localNetID - v8);
  }
  if ( ((type - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( ((type - 1) & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 944, ASSERT_TYPE_ASSERT, "(a->type == NA_IP || a->type == NA_LOOPBACK)", "%s\n\tUnexpected address type %d", "a->type == NA_IP || a->type == NA_LOOPBACK", type) )
      __debugbreak();
    return (unsigned int)(a->addrHandleIndex - b->addrHandleIndex);
  }
  LOWORD(localNetID) = a->port;
  LOWORD(v8) = b->port;
  if ( (_WORD)localNetID != (_WORD)v8 )
  {
    v8 = (unsigned __int16)v8;
    localNetID = (unsigned __int16)localNetID;
    return (unsigned int)(localNetID - v8);
  }
  v9 = 0i64;
  while ( 1 )
  {
    v10 = a->ip[v9++];
    if ( v10 != *((_BYTE *)&b->type + v9 + 3) )
      break;
    if ( v9 == 4 )
      return 0i64;
  }
  return v10 < *((_BYTE *)&b->type + v9 + 3) ? -1 : 1;
}

/*
==============
NET_CompareIPAdr
==============
*/
_BOOL8 NET_CompareIPAdr(netadr_t *a, netadr_t *b)
{
  int addrHandleIndex; 
  __int128 v3; 
  int v4; 
  netadr_t ba; 
  netadr_t aa; 

  addrHandleIndex = a->addrHandleIndex;
  *(_OWORD *)&aa.type = *(_OWORD *)&a->type;
  v3 = *(_OWORD *)&b->type;
  aa.addrHandleIndex = addrHandleIndex;
  v4 = b->addrHandleIndex;
  *(_OWORD *)&ba.type = v3;
  ba.addrHandleIndex = v4;
  return NET_CompareAdrSigned(&aa, &ba, 1) == 0;
}

/*
==============
NET_DeferPacketToClient
==============
*/
void NET_DeferPacketToClient(netadr_t *net_from, msg_t *net_message)
{
  DeferredMsg *v4; 
  __int64 v5; 
  int v6; 

  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1177, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  if ( !Com_IsGameLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1181, ASSERT_TYPE_ASSERT, "(Com_IsGameLocalServerRunning())", (const char *)&queryFormat, "Com_IsGameLocalServerRunning()") )
    __debugbreak();
  v4 = &deferredQueue.msgs[deferredQueue.send & 0xF];
  memcpy_0(v4->data, net_message->data, net_message->cursize);
  v4->datalen = net_message->cursize;
  if ( net_message->targetLocalNetID >= (unsigned int)NS_INVALID_NETSRC )
  {
    v6 = 10004;
    LODWORD(v5) = net_message->targetLocalNetID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1189, ASSERT_TYPE_ASSERT, "(unsigned)( net_message->targetLocalNetID ) < (unsigned)( NS_INVALID_NETSRC )", "net_message->targetLocalNetID doesn't index NS_INVALID_NETSRC\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v4->targetLocalNetID = net_message->targetLocalNetID;
  *(_OWORD *)&v4->addr.type = *(_OWORD *)&net_from->type;
  v4->addr.addrHandleIndex = net_from->addrHandleIndex;
  if ( ((unsigned __int8)&deferredQueue.send & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &deferredQueue.send) )
    __debugbreak();
  _InterlockedIncrement(&deferredQueue.send);
}

/*
==============
NET_GetClientPacket
==============
*/
int NET_GetClientPacket(netadr_t *net_from, msg_t *net_message)
{
  NetPingInfo net_info; 

  if ( !fakelagInitialized )
    return Sys_GetPacket(net_from, net_message, &net_info);
  if ( FakeLag_GetPacket(0, NS_PACKET, net_from, net_message, &net_info) )
    return 1;
  if ( fakelag_current->current.integer )
    return 0;
  else
    return Sys_GetPacket(net_from, net_message, &net_info);
}

/*
==============
NET_GetDeferredClientPacket
==============
*/
char NET_GetDeferredClientPacket(netadr_t *net_from, msg_t *net_message)
{
  DeferredMsg *v5; 
  char *fmt; 
  char *fmta; 
  __int64 v8; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1207, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !net_from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1208, ASSERT_TYPE_ASSERT, "(net_from)", (const char *)&queryFormat, "net_from") )
    __debugbreak();
  if ( !net_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1209, ASSERT_TYPE_ASSERT, "(net_message)", (const char *)&queryFormat, "net_message") )
    __debugbreak();
  if ( deferredQueue.send - deferredQueue.get > 16 )
  {
    LODWORD(fmt) = -16 - deferredQueue.get + deferredQueue.send;
    Com_Printf(131097, "deferredQueue send %d too far away from get %d => dropping %d packets\n", (unsigned int)deferredQueue.send, (unsigned int)deferredQueue.get, fmt);
    LODWORD(fmta) = -16 - deferredQueue.get + deferredQueue.send;
    SV_BandwidthProfile_RecordEvent(-1, "droppedDeferredPackets:send %d,get %d,numDropped %d", (unsigned int)deferredQueue.send, (unsigned int)deferredQueue.get, fmta);
    deferredQueue.get = deferredQueue.send - 16;
  }
  if ( deferredQueue.get >= deferredQueue.send )
    return 0;
  v5 = &deferredQueue.msgs[deferredQueue.get & 0xF];
  memcpy_0(net_message->data, v5->data, v5->datalen);
  net_message->cursize = v5->datalen;
  if ( v5->targetLocalNetID >= (unsigned int)NS_INVALID_NETSRC )
  {
    LODWORD(v8) = v5->targetLocalNetID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1235, ASSERT_TYPE_ASSERT, "(unsigned)( msg->targetLocalNetID ) < (unsigned)( NS_INVALID_NETSRC )", "msg->targetLocalNetID doesn't index NS_INVALID_NETSRC\n\t%i not in [0, %i)", v8, 10004) )
      __debugbreak();
  }
  net_message->targetLocalNetID = v5->targetLocalNetID;
  *(_OWORD *)&net_from->type = *(_OWORD *)&v5->addr.type;
  net_from->addrHandleIndex = v5->addr.addrHandleIndex;
  if ( ((unsigned __int8)&deferredQueue.get & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &deferredQueue.get) )
    __debugbreak();
  _InterlockedIncrement(&deferredQueue.get);
  return 1;
}

/*
==============
NET_GetDeferredPacketCount
==============
*/
__int64 NET_GetDeferredPacketCount()
{
  return (unsigned int)(deferredQueue.send - deferredQueue.get);
}

/*
==============
NET_GetLocalNetIDFromControllerIndex
==============
*/

LocalClientNum_t __fastcall NET_GetLocalNetIDFromControllerIndex(const int controllerIndex)
{
  return CL_Mgr_GetClientFromController(controllerIndex);
}

/*
==============
NET_GetLocalNetIDFromLocalClientNum
==============
*/
__int64 NET_GetLocalNetIDFromLocalClientNum(const LocalClientNum_t localClientNum)
{
  return (unsigned int)localClientNum;
}

/*
==============
NET_GetLoopPacket
==============
*/
int NET_GetLoopPacket(netsrc_t sock, netadr_t *net_from, msg_t *net_message, NetPingInfo *net_info)
{
  if ( !fakelagInitialized || !Com_IsGameLocalServerRunning() )
    return Sys_GetLoopbackPacket(sock, net_from, net_message, net_info);
  if ( FakeLag_GetPacket(1, sock, net_from, net_message, net_info) )
    return 1;
  if ( fakelag_current->current.integer )
    return 0;
  else
    return Sys_GetLoopbackPacket(sock, net_from, net_message, net_info);
}

/*
==============
NET_GetMaxFragmentLength
==============
*/
__int64 NET_GetMaxFragmentLength(netchan_t *chan)
{
  return 1237i64;
}

/*
==============
NET_GetServerPacket
==============
*/

int __fastcall NET_GetServerPacket(netadr_t *net_from, msg_t *net_message, NetPingInfo *net_info)
{
  return Sys_GetPacket(net_from, net_message, net_info);
}

/*
==============
NET_IsLocalAddress
==============
*/
_BOOL8 NET_IsLocalAddress(netadr_t *adr)
{
  return adr->type == NA_LOOPBACK;
}

/*
==============
NET_OutOfBandData
==============
*/
int NET_OutOfBandData(netsrc_t sock, const netadr_t *adr, const unsigned __int8 *format, int len)
{
  return NET_OutOfBandData(sock, adr, format, len, 8u);
}

/*
==============
NET_OutOfBandData
==============
*/
__int64 NET_OutOfBandData(netsrc_t sock, const netadr_t *adr, const unsigned __int8 *format, int len, const unsigned int flags)
{
  size_t v5; 
  _DWORD *m_ptr; 
  int integer; 
  int v11; 
  unsigned int v12; 
  Mem_LargeLocal data; 

  v5 = len;
  Mem_LargeLocal::Mem_LargeLocal(&data, 0x9AAui64, "min_msg_buf netchanPacketBuf");
  m_ptr = data.m_ptr;
  integer = showpackets->current.integer;
  if ( integer && (integer > 1 || adr->type != NA_LOOPBACK) )
    Com_DPrintf(25, "OOB Data->%u.%u.%u.%u: %i bytes\n", adr->ip[0], adr->ip[1], adr->ip[2], adr->ip[3], v5);
  v11 = v5 + 4;
  if ( (int)v5 + 4 <= 2474 )
  {
    *m_ptr = -1;
    memcpy_0(m_ptr + 1, format, v5);
    v12 = NET_SendPacket(sock, v11, m_ptr, adr, flags, NULL);
    if ( sock == NS_MAXCLIENTS )
      SV_Netchan_AddOOBProfilePacket(v11);
    else
      CL_Netchan_AddOOBProfilePacket((LocalClientNum_t)sock, v11);
  }
  else
  {
    Com_PrintError(25, "Invalid network packet of size %i - max size allowed is %zu bytes\n", (unsigned int)v5, 0x9A6ui64);
    v12 = 0;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&data);
  return v12;
}

/*
==============
NET_OutOfBandPrint
==============
*/
int NET_OutOfBandPrint(netsrc_t sock, const netadr_t *adr, const char *data)
{
  unsigned __int64 v5; 
  int v7; 

  v5 = -1i64;
  do
    ++v5;
  while ( data[v5] );
  v7 = truncate_cast<int,unsigned __int64>(v5);
  return NET_OutOfBandData(sock, adr, (const unsigned __int8 *)data, v7 + 1, 0x20u);
}

/*
==============
NET_SendPacket
==============
*/
int NET_SendPacket(netsrc_t sock, int length, const void *data, const netadr_t *to, const unsigned int flags, NetPingInfo *info)
{
  NetPingInfo *v7; 
  __int64 v10; 
  __int128 v12; 
  _QWORD *v13; 
  __int128 v14; 
  __int64 v15; 
  __int64 v16; 
  char *v17; 
  char *fmt; 
  NetPingInfo *v19; 
  __int64 v20; 
  netadr_t addr; 
  char buf[16]; 

  v7 = info;
  v10 = sock;
  if ( to->type == NA_BAD )
    return -7;
  if ( NET_IsBotAddr(to) || SV_IsDemoPlaying() )
    return length;
  if ( (flags & 0x40) != 0 )
  {
    if ( showpackets->current.integer && *(_DWORD *)data == -1 )
    {
      v13 = NtCurrentTeb()->Reserved1[11];
      v14 = *(_OWORD *)&to->type;
      v15 = tls_index;
      addr.addrHandleIndex = to->addrHandleIndex;
      *(_OWORD *)&addr.type = v14;
      if ( *(_DWORD *)(v13[tls_index] + 736i64) >= 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( s_adrToStringBufferIndex ) < (unsigned)( 3 )", "s_adrToStringBufferIndex doesn't index ADR_TO_STRING_BUFFER_COUNT\n\t%i not in [0, %i)", *(_DWORD *)(v13[tls_index] + 736i64), 3) )
        __debugbreak();
      v16 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v15);
      v17 = (char *)(v16 + ((__int64)*(int *)(v16 + 736) << 6) + 752);
      *(_DWORD *)(v16 + 736) = (*(_DWORD *)(v16 + 736) + 1) % 3;
      Com_sprintf(v17, 0x40ui64, "unknown");
      if ( addr.type == NA_LOOPBACK )
      {
        Com_sprintf(v17, 0x40ui64, "loopback");
      }
      else if ( (unsigned int)(addr.type - 2) <= 2 )
      {
        NET_InAddrToString((const unsigned int *)addr.ip, buf);
        LODWORD(v20) = addr.addrHandleIndex;
        LODWORD(v19) = addr.localNetID;
        LODWORD(fmt) = addr.port;
        Com_sprintf(v17, 0x40ui64, "%s:%u:%d (%i)", buf, fmt, v19, v20);
      }
      Com_Printf(25, "[%s] send packet %4i to %s\n", netsrcString[v10], (unsigned int)length, v17);
    }
    if ( !info )
      v7 = &s_ignored;
    return Sys_SendPacket((netsrc_t)v10, length, data, to, flags, v7);
  }
  else
  {
    v12 = *(_OWORD *)&to->type;
    addr.addrHandleIndex = to->addrHandleIndex;
    *(_OWORD *)&addr.type = v12;
    return FakeLag_SendPacket((netsrc_t)v10, length, data, &addr, flags, info);
  }
}

/*
==============
NET_StringToAdr
==============
*/
__int64 NET_StringToAdr(const char *s, netadr_t *a)
{
  char *v5; 
  const char *v6; 
  __int16 v7; 
  char dest[1024]; 

  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1383, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  if ( !a && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1384, ASSERT_TYPE_ASSERT, "(a)", (const char *)&queryFormat, "a") )
    __debugbreak();
  if ( !strcmp_0(s, "localhost") )
  {
    *(_QWORD *)&a->type = 0i64;
    *(_QWORD *)&a->port = 0i64;
    a->addrHandleIndex = 0;
    NetAdr_SetType(a, NA_LOOPBACK);
    return 1i64;
  }
  else
  {
    Core_strcpy(dest, 0x400ui64, s);
    v5 = strstr_0(dest, ":");
    v6 = v5;
    if ( v5 )
    {
      *v5 = 0;
      v6 = v5 + 1;
    }
    if ( !Sys_StringToAdr(dest, a) || a->ip[0] == 0xFF && a->ip[1] == 0xFF && a->ip[2] == 0xFF && a->ip[3] == 0xFF )
    {
      a->type = NA_BAD;
      return 0i64;
    }
    else
    {
      if ( v6 )
        v7 = atoi(v6);
      else
        v7 = 3075;
      a->port = BigShort(v7);
      return 1i64;
    }
  }
}

/*
==============
NetProf_AddPacket
==============
*/
void NetProf_AddPacket(netProfileStream_t *pProfStream, int iSize, int bFragment)
{
  int v6; 
  netProfilePacket_t *v7; 
  int v8; 

  if ( !net_iProfilingOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 257, ASSERT_TYPE_ASSERT, "(net_iProfilingOn)", (const char *)&queryFormat, "net_iProfilingOn") )
    __debugbreak();
  v6 = (pProfStream->iCurrPacket + 1) % 200;
  pProfStream->iCurrPacket = v6;
  v7 = &pProfStream->packets[v6];
  v8 = Sys_Milliseconds();
  v7->iSize = iSize;
  v7->iTime = v8;
  v7->bFragment = bFragment;
}

/*
==============
NetProf_NewRecievePacket
==============
*/
void NetProf_NewRecievePacket(netchan_t *pChan, int iSize, int bFragment)
{
  const char *v6; 
  int v7; 

  if ( net_iProfilingOn )
  {
    NetProf_AddPacket(&pChan->prof.recieve, iSize, bFragment);
    if ( (net_showprofile->current.enabled & 2) != 0 )
    {
      v7 = iSize;
      v6 = (char *)&queryFormat.fmt + 3;
      if ( bFragment )
        v6 = " fragment";
      Com_Printf(25, "[%s] recieve%s: %i\n", netsrcString[pChan->sock], v6, v7);
    }
  }
}

/*
==============
NetProf_NewSendPacket
==============
*/
void NetProf_NewSendPacket(netchan_t *pChan, int iSize, int bFragment)
{
  const char *v6; 
  int v7; 

  if ( net_iProfilingOn )
  {
    NetProf_AddPacket(&pChan->prof.send, iSize, bFragment);
    if ( (net_showprofile->current.enabled & 2) != 0 )
    {
      v7 = iSize;
      v6 = (char *)&queryFormat.fmt + 3;
      if ( bFragment )
        v6 = " fragment";
      Com_Printf(25, "[%s] send%s: %i\n", netsrcString[pChan->sock], v6, v7);
    }
  }
}

/*
==============
NetProf_PrepProfiling
==============
*/
void NetProf_PrepProfiling(netProfileInfo_t *prof)
{
  bool v2; 
  unsigned int v3; 

  if ( !net_profile->current.integer )
  {
    if ( !net_iProfilingOn )
      return;
    net_iProfilingOn = 0;
    Com_Printf(25, "Net Profiling turned off\n");
    goto LABEL_11;
  }
  v2 = CL_Main_AnyLocalClientsRunning();
  if ( !Com_IsGameLocalServerRunning() || v2 && net_profile->current.integer == 2 )
    v3 = 1;
  else
    v3 = 2;
  if ( net_iProfilingOn != v3 )
  {
    net_iProfilingOn = v3;
    Com_Printf(25, "Net Profiling turned on: %s\n", netsrcString[v3 - 1]);
LABEL_11:
    memset_0(prof, 0, sizeof(netProfileInfo_t));
  }
}

/*
==============
NetProf_UpdateStatistics
==============
*/
void NetProf_UpdateStatistics(netProfileStream_t *pStream)
{
  int v2; 
  int v3; 
  int v4; 
  netProfileStream_t *v5; 
  int v6; 
  int v7; 
  int v8; 
  int i; 
  int iTime; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int iSize; 
  int v16; 
  bool v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v24; 
  int v25; 
  int v26; 

  if ( !pStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 334, ASSERT_TYPE_ASSERT, "(pStream)", (const char *)&queryFormat, "pStream") )
    __debugbreak();
  if ( !net_iProfilingOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 335, ASSERT_TYPE_ASSERT, "(net_iProfilingOn)", (const char *)&queryFormat, "net_iProfilingOn") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  v4 = -1;
  v5 = pStream;
  v24 = Sys_Milliseconds();
  v6 = 0;
  v25 = 0;
  v7 = v24;
  v26 = 0;
  v8 = 9999;
  for ( i = 0; i < 200; ++i )
  {
    v22 = v8;
    if ( v5->packets[0].iTime )
    {
      iTime = v5->packets[0].iTime;
      v11 = Sys_Milliseconds();
      v6 = v26;
      if ( v11 <= iTime + 1000 )
      {
        ++v2;
        v12 = v3 + 1;
        v13 = iTime;
        if ( !v5->packets[0].bFragment )
          v12 = v3;
        v3 = v12;
        v14 = i;
        if ( iTime >= v7 )
          v14 = v4;
        if ( iTime >= v7 )
          v13 = v7;
        v4 = v14;
        v24 = v13;
        iSize = v5->packets[0].iSize;
        v7 = v13;
        v25 += iSize;
        v8 = iSize;
        if ( iSize >= v22 )
          v8 = v22;
        if ( iSize > v26 )
        {
          v6 = v5->packets[0].iSize;
          v26 = v6;
          v24 = v13;
        }
      }
    }
    v5 = (netProfileStream_t *)((char *)v5 + 12);
  }
  v16 = v2;
  v17 = v2 == 0;
  v18 = 0;
  if ( v17 )
  {
    *(_QWORD *)&pStream->iBytesPerSecond = 0i64;
    v16 = 0;
    *(_QWORD *)&pStream->iFragmentPercentage = 0i64;
    pStream->iSmallestPacket = 0;
  }
  else
  {
    if ( v3 )
      v19 = 100 * v3 / v16;
    else
      v19 = 0;
    pStream->iFragmentPercentage = v19;
    pStream->iLargestPacket = v6;
    pStream->iSmallestPacket = v8;
    if ( pStream->iLastBPSCalcTime + 100 < Sys_Milliseconds() )
    {
      v20 = Sys_Milliseconds() - v24;
      if ( v4 == -1 )
      {
        v21 = v25;
      }
      else
      {
        --v16;
        v21 = v25 - pStream->packets[v4].iSize;
        if ( pStream->packets[v4].bFragment )
          --v3;
      }
      if ( v20 >= 1 && v16 )
      {
        if ( v21 )
          v18 = (int)(float)((float)(999.99994 / (float)v20) * (float)v21);
        pStream->iBytesPerSecond = v18;
        pStream->iLastBPSCalcTime = Sys_Milliseconds();
      }
      else
      {
        pStream->iBytesPerSecond = 0;
      }
    }
    v18 = v3;
  }
  pStream->iCountedPackets = v16;
  pStream->iCountedFragments = v18;
}

/*
==============
Net_DisplayProfile
==============
*/
void Net_DisplayProfile(LocalClientNum_t localClientNum)
{
  if ( net_iProfilingOn )
  {
    if ( net_iProfilingOn == 1 )
      CL_Netchan_PrintProfileStats(localClientNum, 0);
    else
      SV_Netchan_PrintProfileStats(0);
  }
}

/*
==============
Net_DumpProfile_f
==============
*/
void Net_DumpProfile_f()
{
  LocalClientNum_t v0; 

  if ( net_iProfilingOn )
  {
    if ( net_iProfilingOn == 1 )
    {
      v0 = Cmd_LocalClientNum();
      CL_Netchan_PrintProfileStats(v0, 1);
    }
    else
    {
      SV_Netchan_PrintProfileStats(1);
    }
  }
  else
  {
    Com_Printf(0, "Network profiling is not on. Set net_profile to turn on network profiling\n");
  }
}

/*
==============
Net_IsSplitscreenAdr
==============
*/
bool Net_IsSplitscreenAdr(netadr_t *net_adr)
{
  return net_adr->localNetID == NS_CLIENT2;
}

/*
==============
Net_IsZeroIP
==============
*/
_BOOL8 Net_IsZeroIP(netadr_t *adr)
{
  return !adr->ip[0] && !adr->ip[1] && !adr->ip[2] && !adr->ip[3];
}

/*
==============
Netchan_AccumulateStat
==============
*/
void Netchan_AccumulateStat(netchan_t *chan, NetchanTelemetry::AccumType accum, const int value)
{
  NetchanTelemetry *serverTelemetry; 

  if ( !Sys_IsServerThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 766, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsServerThread() || Sys_IsMainThread()") )
    __debugbreak();
  NetchanTelemetry::Accumulate(&chan->clientTelemetry, accum, value);
  serverTelemetry = chan->serverTelemetry;
  if ( serverTelemetry )
    NetchanTelemetry::Accumulate(serverTelemetry, accum, value);
}

/*
==============
Netchan_GetFragmentType
==============
*/
char Netchan_GetFragmentType(const int length, const int offset)
{
  int v3; 

  if ( length <= 1237 )
    return 0;
  v3 = length - offset;
  if ( offset )
    return (v3 > 1237) + 2;
  if ( v3 <= 1237 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 665, ASSERT_TYPE_ASSERT, "(length - offset > ( ( 1270 - 16 - 2 ) - ( 3 * 4 + 2 + 1 ) ))", (const char *)&queryFormat, "length - offset > NETWORK_FRAGMENT_SIZE") )
    __debugbreak();
  return 1;
}

/*
==============
Netchan_Init
==============
*/
void Netchan_Init(void)
{
  Dvar_BeginPermanentRegistration();
  showpackets = Dvar_RegisterInt("NMTMKLKLKT", 0, 0, 2, 0, "Show packets");
  showdrop = Dvar_RegisterBool("SQKOOROPL", 0, 0, "Show dropped packets");
  packetDebug = Dvar_RegisterBool("SSPLNNQKK", 0, 0, "Enable packet debugging information");
  packetFragmentDebug = Dvar_RegisterBool("QMSNSSOS", 0, 0, "Enable fragmented packet debugging information");
  net_profile = Dvar_RegisterInt("PNSRRTOPK", 1, 0, 2, 0, "Profile network performance. 1 is server, 2 is client");
  net_showprofile = Dvar_RegisterInt("LTSNMLSNKT", 0, 0, 3, 0, "Show network profiling display");
  msg_dumpEnts = Dvar_RegisterBool("OKKTMOPOKN", 0, 0, "Print snapshot entity info");
  msg_printEntityNums = Dvar_RegisterBool("MLMPORLQRM", 0, 0, "Print entity numbers");
  msg_hudelemspew = Dvar_RegisterBool("MLNLLTNRRK", 0, 0, "Debug hudelem fields changing");
  msg_logPredictionPositionErrors = Dvar_RegisterFloat("LRKQKPLNQS", 0.0, 0.0, 10000.0, 0, "Logs player position prediction errors less than the set distance");
  Dvar_EndPermanentRegistration();
  FakeLag_Init();
  FakeBandwidth_Init();
  Cmd_AddCommandInternal("net_dumpprofile", Net_DumpProfile_f, &Net_DumpProfile_f_VAR);
  Cmd_AddCommandInternal("net_dumpnetfieldchanges", MSG_DumpNetFieldChanges_f, &MSG_DumpNetFieldChanges_f_VAR);
}

/*
==============
Netchan_Process
==============
*/
__int64 Netchan_Process(netchan_t *chan, msg_t *msg)
{
  unsigned int cursize; 
  const char *String; 
  int Long; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  bool v11; 
  BOOL v12; 
  int v13; 
  const char *v14; 
  int integer; 
  int End; 
  int Start; 
  int v18; 
  const char *v19; 
  int v20; 
  int v21; 
  const char *v22; 
  int Size; 
  int v24; 
  int v25; 
  const char *v26; 
  unsigned int v27; 
  const unsigned __int8 *v28; 
  int v29; 
  unsigned int v30; 
  int v31; 
  int OutOfOrderCount; 
  int DropCount; 
  unsigned int maxsize; 
  const char *v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  NetchanTelemetry *serverTelemetry; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  const char *v47; 
  char *fmt; 
  char *fmta; 
  __int64 offset; 
  __int64 v51; 
  bool v52; 
  unsigned int v53; 

  if ( msg->cursize < 8 )
  {
    chan->error = NET_CHAN_ERROR_RUNT;
    Netchan_AccumulateStat(chan, ACCUM_PACKETS_INVALID, 1);
    cursize = msg->cursize;
    String = NetConnection::GetString(chan->connection);
    Com_Printf(131097, "[NET] (%s) Runt packet %d bytes\n", String, cursize);
    return 0i64;
  }
  NetProf_PrepProfiling(&chan->prof);
  MSG_BeginReading(msg);
  Long = MSG_ReadLong(msg);
  v8 = Long & 0x1FFFFFFF;
  v9 = Long;
  v10 = Long & 0xE0000000;
  v53 = Long & 0xE0000000;
  v11 = (Long & 0xE0000000) != 0;
  v52 = v11;
  v12 = v11;
  if ( net_iProfilingOn )
  {
    v13 = msg->cursize;
    NetProf_AddPacket(&chan->prof.recieve, v13, v11);
    if ( (net_showprofile->current.enabled & 2) != 0 )
    {
      v14 = (char *)&queryFormat.fmt + 3;
      if ( v12 )
        v14 = " fragment";
      Com_Printf(25, "[%s] recieve%s: %i\n", netsrcString[chan->sock], v14, v13);
    }
  }
  integer = showpackets->current.integer;
  if ( integer && (integer > 1 || !NetConnection::IsLoopback(chan->connection)) )
  {
    End = NetTransferWindow::GetEnd(&chan->recvWindow);
    Start = NetTransferWindow::GetStart(&chan->recvWindow);
    v18 = msg->cursize - msg->readcount;
    v19 = NetConnection::GetString(chan->connection);
    LODWORD(fmt) = v18;
    Com_Printf(25, "[NET] (%s) recv %5i : size=%i, window=[%i,%i]\n", v19, v8, fmt, Start, End);
    v10 = v53;
  }
  NetTransferWindow::ResetCounts(&chan->recvWindow);
  chan->error = NET_CHAN_ERROR_NONE;
  if ( !NetTransferWindow::IsWithin(&chan->recvWindow, v8) )
  {
    v20 = NetTransferWindow::GetEnd(&chan->recvWindow);
    v21 = NetTransferWindow::GetStart(&chan->recvWindow);
    v22 = NetConnection::GetString(chan->connection);
    LODWORD(offset) = v20;
    LODWORD(fmt) = v21;
    Com_Printf(131097, "[NET] (%s) Out-of-bounds packet %i - expected [%i,%i]\n", v22, v8, fmt, offset);
    if ( NetTransferWindow::IsBelow(&chan->recvWindow, v8) )
    {
      Netchan_AccumulateStat(chan, ACCUM_PACKETS_OOO, 1);
      return 0i64;
    }
    Size = NetTransferWindow::GetSize(&chan->recvWindow);
    NetTransferWindow::Flush(&chan->recvWindow, v8 - Size + 1);
    if ( !NetTransferWindow::IsWithin(&chan->recvWindow, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 836, ASSERT_TYPE_ASSERT, "(chan->recvWindow.IsWithin( sequence ))", (const char *)&queryFormat, "chan->recvWindow.IsWithin( sequence )") )
      __debugbreak();
  }
  if ( NetTransferWindow::IsDuplicate(&chan->recvWindow, v8) )
  {
    chan->error = NET_CHAN_ERROR_DUPLICATE;
    Netchan_AccumulateStat(chan, ACCUM_PACKETS_DUPLICATE, 1);
    v24 = NetTransferWindow::GetEnd(&chan->recvWindow);
    v25 = NetTransferWindow::GetStart(&chan->recvWindow);
    v26 = NetConnection::GetString(chan->connection);
    LODWORD(offset) = v24;
    LODWORD(fmt) = v25;
    Com_Printf(131097, "[NET] (%s) Duplicate packet %i - expected [%i,%i]\n", v26, v8, fmt, offset);
    return 0i64;
  }
  if ( v10 )
  {
    v27 = MSG_ReadLong(msg);
    v28 = &msg->data[msg->readcount];
    v29 = msg->cursize - msg->readcount;
    v30 = v9 >> 29;
    if ( (unsigned __int8)v30 >= 4u )
    {
      LODWORD(v51) = 4;
      LODWORD(offset) = (unsigned __int8)v30;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_fragment.h", 35, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( TYPE_COUNT )", "type doesn't index TYPE_COUNT\n\t%i not in [0, %i)", offset, v51) )
        __debugbreak();
    }
    NetTransferWindow::Write(&chan->recvWindow, v8, (NetFragment::Type)v30, v28, v29, v27);
    v31 = NetTransferWindow::Read(&chan->recvWindow, msg->data, msg->maxsize);
    OutOfOrderCount = NetTransferWindow::GetOutOfOrderCount(&chan->recvWindow);
    DropCount = NetTransferWindow::GetDropCount(&chan->recvWindow);
    Netchan_TrackPacketRx(chan, msg->cursize, DropCount, OutOfOrderCount, v8);
    if ( !v31 )
      return 0i64;
    if ( v31 < 0 )
    {
      chan->error = NET_CHAN_ERROR_OVERFLOW;
      Netchan_AccumulateStat(chan, ACCUM_PACKETS_INVALID, 1);
      maxsize = msg->maxsize;
      v35 = NetConnection::GetString(chan->connection);
      Com_Printf(131097, "[NET] (%s) Reassembled packet size overflow - maximum %i\n", v35, maxsize);
      return 0i64;
    }
    v36 = msg->maxsize;
    MSG_InitReadOnly(msg, msg->data, v31);
    msg->maxsize = v36;
    MSG_BeginReading(msg);
  }
  else
  {
    NetTransferWindow::Touch(&chan->recvWindow, v8);
    NetTransferWindow::Flush(&chan->recvWindow, v8 + 1);
    v37 = NetTransferWindow::GetOutOfOrderCount(&chan->recvWindow);
    v38 = NetTransferWindow::GetDropCount(&chan->recvWindow);
    Netchan_TrackPacketRx(chan, msg->cursize, v38, v37, v8);
  }
  v39 = MSG_ReadLong(msg);
  if ( v39 <= chan->incomingSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 889, ASSERT_TYPE_ASSERT, "(messageSequence > chan->incomingSequence)", "%s\n\tPacket sequence should have filtered out duplicate / old packets", "messageSequence > chan->incomingSequence") )
    __debugbreak();
  v40 = msg->cursize;
  v41 = v39 - chan->incomingSequence;
  NetchanTelemetry::TrackMessageRx(&chan->clientTelemetry, v40, v41 - 1, v52);
  serverTelemetry = chan->serverTelemetry;
  if ( serverTelemetry )
    NetchanTelemetry::TrackMessageRx(serverTelemetry, v40, v41 - 1, v52);
  chan->incomingSequence = v39;
  v43 = showpackets->current.integer;
  if ( v43 && (v43 > 1 || !NetConnection::IsLoopback(chan->connection)) )
  {
    v44 = NetTransferWindow::GetEnd(&chan->recvWindow);
    v45 = NetTransferWindow::GetStart(&chan->recvWindow);
    v46 = msg->cursize - msg->readcount;
    v47 = NetConnection::GetString(chan->connection);
    LODWORD(v51) = v44;
    LODWORD(offset) = v45;
    LODWORD(fmta) = v46;
    Com_Printf(25, "[NET] (%s) msg %6i : size=%i, window=[%i,%i]\n", v47, (unsigned int)v39, fmta, offset, v51);
  }
  return 1i64;
}

/*
==============
Netchan_SetUpBuffers
==============
*/
void Netchan_SetUpBuffers(netchan_t *chan, unsigned __int8 *buffer, int bufferSize)
{
  NetTransferWindow::Init(&chan->recvWindow, buffer, bufferSize);
}

/*
==============
Netchan_Setup
==============
*/
void Netchan_Setup(netsrc_t sock, netchan_t *chan, NetConnection *connection, char *buffer, int bufferSize, NetchanTelemetry *serverTelemetry)
{
  chan->error = NET_CHAN_ERROR_NONE;
  memset_0(&chan->recvWindow, 0, 0x9D20ui64);
  chan->sock = sock;
  *(_QWORD *)&chan->outgoingOffset = 0i64;
  chan->connection = connection;
  *(_QWORD *)&chan->outgoingSequence = 1i64;
  NetchanTelemetry::Init(&chan->clientTelemetry);
  chan->serverTelemetry = serverTelemetry;
  NetTransferWindow::Init(&chan->recvWindow, (unsigned __int8 *)buffer, bufferSize);
  NetProf_PrepProfiling(&chan->prof);
}

/*
==============
Netchan_TrackMessageRx
==============
*/
void Netchan_TrackMessageRx(netchan_t *chan, const int size, const int dropCount, const bool fragmented)
{
  NetchanTelemetry *serverTelemetry; 

  NetchanTelemetry::TrackMessageRx(&chan->clientTelemetry, size, dropCount, fragmented);
  serverTelemetry = chan->serverTelemetry;
  if ( serverTelemetry )
    NetchanTelemetry::TrackMessageRx(serverTelemetry, size, dropCount, fragmented);
}

/*
==============
Netchan_TrackPacketRx
==============
*/
void Netchan_TrackPacketRx(netchan_t *chan, const int size, const int dropCount, const int oooCount, const int sequence)
{
  NetchanTelemetry *serverTelemetry; 
  const char *String; 
  const char *v11; 
  __int64 v12; 

  NetchanTelemetry::TrackPacketRx(&chan->clientTelemetry, size, dropCount, oooCount);
  serverTelemetry = chan->serverTelemetry;
  if ( serverTelemetry )
    NetchanTelemetry::TrackPacketRx(serverTelemetry, size, dropCount, oooCount);
  if ( dropCount > 0 )
  {
    String = NetConnection::GetString(chan->connection);
    Com_Printf(131097, "[NET] (%s) Dropped %i packets at %i\n", String, (unsigned int)dropCount, sequence);
  }
  if ( oooCount > 0 )
  {
    v11 = NetConnection::GetString(chan->connection);
    LODWORD(v12) = sequence;
    Com_Printf(131097, "[NET] (%s) Out-of-order %i packets at %i\n", v11, (unsigned int)oooCount, v12);
  }
}

/*
==============
Netchan_Transmit
==============
*/
__int64 Netchan_Transmit(netchan_t *chan, int length, const unsigned __int8 *data, NetPingInfo *packetInfo)
{
  NetPingInfo *v4; 
  unsigned __int64 v6; 
  char *Value; 
  unsigned int *v9; 
  unsigned int v10; 
  _QWORD *v11; 
  char *v12; 
  int *v13; 
  unsigned __int64 v14; 
  ThreadContext CurrentThreadContext; 
  int v16; 
  const char *v17; 
  fileHandle_t *v18; 
  fileHandle_t v19; 
  unsigned __int64 v20; 
  unsigned int outgoingOffset; 
  int v22; 
  int v23; 
  NetFragment::Type v24; 
  int v25; 
  int v26; 
  NetPingInfo *packetInfoa; 
  __int64 v29; 
  unsigned int offset; 
  NetPingInfo *v31; 

  v31 = packetInfo;
  v4 = packetInfo;
  v6 = length;
  Value = (char *)Sys_GetValue(0);
  v9 = (unsigned int *)(Value + 17376);
  if ( (unsigned int)(*((_DWORD *)Value + 4344) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 4344) + 1, 3) )
    __debugbreak();
  v10 = *v9 + 1;
  *v9 = v10;
  if ( v10 >= 3 )
  {
    LODWORD(v29) = 3;
    LODWORD(packetInfoa) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", packetInfoa, v29) )
      __debugbreak();
  }
  v11 = Value + 2088;
  v12 = Value + 40;
  if ( *v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v11 += 8i64;
  if ( *v11 >= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v11 = v9;
  if ( *v11 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v13 = (int *)&v9[*v9 + 2];
  v14 = __rdtsc();
  *v13 = v14;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v16 = 0;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 382, NULL, 0);
  if ( (int)v6 > 148440 )
  {
    v18 = FS_FOpenFileWrite((fileHandle_t *)&stru_144018080, v17);
    v19.handle.handle = (__int64)v18;
    if ( v18 != (fileHandle_t *)-1i64 )
    {
      FS_Write(data, v6, (fileHandle_t)v18);
      FS_FCloseFile(v19);
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144018090, 958i64, (unsigned int)v6);
  }
  v20 = (v6 + 1236) / 0x4D5;
  outgoingOffset = chan->outgoingOffset;
  offset = outgoingOffset;
  v22 = 0;
  if ( (int)v20 <= 0 )
  {
LABEL_35:
    ++chan->outgoingSequence;
    chan->outgoingOffset = outgoingOffset;
    NetchanTelemetry::TrackMessageTx(&chan->clientTelemetry, v22);
    v26 = v22;
  }
  else
  {
    while ( 1 )
    {
      v23 = v6;
      if ( (int)v6 > 1237 )
      {
        if ( v22 )
        {
          v23 = v6 - v22;
          v24 = TYPE_END;
          if ( (int)v6 - v22 > 1237 )
            v24 = TYPE_FRAGMENT;
        }
        else
        {
          v24 = TYPE_START;
        }
      }
      else
      {
        v24 = TYPE_UNFRAGMENTED;
        v23 = v6 - v22;
      }
      v25 = 1237;
      if ( v23 < 1237 )
        v25 = v23;
      v26 = Netchan_TransmitFragment(chan, &data[v22], v25, &offset, v24, v4);
      if ( v26 <= 0 )
        break;
      v22 += v25;
      ++v16;
      v4 = v31;
      if ( v16 >= (int)v20 )
      {
        outgoingOffset = offset;
        goto LABEL_35;
      }
    }
  }
  Profile_EndInternal(NULL);
  return (unsigned int)v26;
}

/*
==============
Netchan_TransmitFragment
==============
*/
__int64 Netchan_TransmitFragment(netchan_t *chan, const unsigned __int8 *data, const int size, unsigned int *offset, NetFragment::Type type, NetPingInfo *packetInfo)
{
  const netadr_t *Netadr; 
  unsigned int v11; 
  int cursize; 
  int integer; 
  unsigned int v14; 
  unsigned int outgoingPacketSequence; 
  const char *String; 
  char *fmt; 
  NetPingInfo *info; 
  NetPingInfo *infoa; 
  msg_t buf; 
  netadr_t result; 
  unsigned __int8 dataa[1264]; 

  if ( !chan && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 595, ASSERT_TYPE_ASSERT, "(chan)", (const char *)&queryFormat, "chan") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 596, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 597, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  NetProf_PrepProfiling(&chan->prof);
  MSG_Init(&buf, dataa, 1252);
  MSG_WriteLong(&buf, chan->outgoingPacketSequence | ((unsigned __int8)type << 29));
  if ( type )
  {
    if ( type == TYPE_START )
    {
      MSG_WriteLong(&buf, *offset);
      MSG_WriteLong(&buf, chan->outgoingSequence);
      *offset += size + 4;
    }
    else if ( (unsigned __int8)(type - 2) > 1u )
    {
      LODWORD(info) = (unsigned __int8)type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 623, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid fragment type %d", info) )
        __debugbreak();
    }
    else
    {
      MSG_WriteLong(&buf, *offset);
      *offset += size;
    }
  }
  else
  {
    MSG_WriteLong(&buf, chan->outgoingSequence);
  }
  MSG_WriteData(&buf, data, size);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 635, ASSERT_TYPE_ASSERT, "(!send.overflowed)", (const char *)&queryFormat, "!send.overflowed") )
    __debugbreak();
  Netadr = NetConnection::GetNetadr(chan->connection, &result);
  v11 = NET_SendPacket(chan->sock, buf.cursize, buf.data, Netadr, 8u, packetInfo);
  chan->outgoingPacketSequence += (int)v11 > 0;
  NetchanTelemetry::TrackPacketTx(&chan->clientTelemetry, size, (int)v11 > 0);
  cursize = buf.cursize;
  if ( net_iProfilingOn )
  {
    NetProf_AddPacket(&chan->prof.send, buf.cursize, 1);
    if ( (net_showprofile->current.enabled & 2) != 0 )
    {
      LODWORD(fmt) = cursize;
      Com_Printf(25, "[%s] send%s: %i\n", netsrcString[chan->sock], " fragment", fmt);
    }
  }
  integer = showpackets->current.integer;
  if ( integer )
  {
    if ( integer > 1 )
    {
LABEL_29:
      v14 = *offset;
      outgoingPacketSequence = chan->outgoingPacketSequence;
      String = NetConnection::GetString(chan->connection);
      LODWORD(infoa) = v14;
      LODWORD(fmt) = size;
      Com_Printf(131097, "[NET] (%s) send %5i : size=%i, offset=%i, res=%d\n", String, outgoingPacketSequence, fmt, infoa, v11);
      return v11;
    }
  }
  else if ( !packetFragmentDebug->current.enabled )
  {
    return v11;
  }
  if ( !NetConnection::IsLoopback(chan->connection) )
    goto LABEL_29;
  return v11;
}

/*
==============
StringToXNKID
==============
*/
void StringToXNKID(const char *str, bdSecurityID *xnkid)
{
  if ( !xnkid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1478, ASSERT_TYPE_ASSERT, "(xnkid)", (const char *)&queryFormat, "xnkid") )
    __debugbreak();
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1479, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( *str )
    j_sscanf(str, "%8x%8x", &xnkid->ab[4], xnkid);
  else
    *xnkid = 0i64;
}

/*
==============
XNKIDToString
==============
*/
void XNKIDToString(const bdSecurityID *xnkid, char *str, const int strBufSize)
{
  unsigned __int64 v3; 
  char *fmt; 

  v3 = strBufSize;
  if ( !xnkid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1441, ASSERT_TYPE_ASSERT, "(xnkid)", (const char *)&queryFormat, "xnkid") )
    __debugbreak();
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_mp.cpp", 1442, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( (int)v3 < 21 )
    Com_PrintWarning(16, "XNKIDToString: buffer passed is not big enough. Was %i bytes, require %i.\n", (unsigned int)v3, 21i64);
  LODWORD(fmt) = *(_DWORD *)xnkid->ab;
  Com_sprintf(str, v3, "%08x%08x", *(unsigned int *)&xnkid->ab[4], fmt);
}

