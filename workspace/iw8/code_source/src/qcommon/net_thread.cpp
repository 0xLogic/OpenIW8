/*
==============
NetThread::GetRecvBuffer
==============
*/

NetBuffer<65536,0> *__fastcall NetThread::GetRecvBuffer(NetThread *this)
{
  return ?GetRecvBuffer@NetThread@@QEAAAEAV?$NetBuffer@$0BAAAA@$0A@@@XZ(this);
}

/*
==============
NetThread::GetDtlsOverhead
==============
*/

int __fastcall NetThread::GetDtlsOverhead(NetThread *this, const bdReference<bdAddrHandle> *addrHandle)
{
  return ?GetDtlsOverhead@NetThread@@AEAAHAEBV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
NetThread::SetTelemetry
==============
*/

void __fastcall NetThread::SetTelemetry(NetThread *this, NetTelemetry *telemetry)
{
  ?SetTelemetry@NetThread@@QEAAXPEAVNetTelemetry@@@Z(this, telemetry);
}

/*
==============
NetThread::Flush
==============
*/

void __fastcall NetThread::Flush(NetThread *this)
{
  ?Flush@NetThread@@QEAAXXZ(this);
}

/*
==============
NetThread::SendFrame
==============
*/

void __fastcall NetThread::SendFrame(NetThread *this)
{
  ?SendFrame@NetThread@@AEAAXXZ(this);
}

/*
==============
NetThread::ThreadMain
==============
*/

void __fastcall NetThread::ThreadMain(const unsigned int threadContext)
{
  ?ThreadMain@NetThread@@CAXI@Z(threadContext);
}

/*
==============
NetThread::ProcessRequest
==============
*/

void __fastcall NetThread::ProcessRequest(NetThread *this, int type, const void *data, int size, void *context)
{
  ?ProcessRequest@NetThread@@UEAAXHPEBXHPEAX@Z(this, type, data, size, context);
}

/*
==============
NetThread::RecvFrame
==============
*/

void __fastcall NetThread::RecvFrame(NetThread *this)
{
  ?RecvFrame@NetThread@@AEAAXXZ(this);
}

/*
==============
NetThread::IsStarted
==============
*/

bool __fastcall NetThread::IsStarted(NetThread *this)
{
  return ?IsStarted@NetThread@@QEBA_NXZ(this);
}

/*
==============
NetThread::Frame
==============
*/

void __fastcall NetThread::Frame(NetThread *this)
{
  ?Frame@NetThread@@QEAAXXZ(this);
}

/*
==============
NetThread::Pump
==============
*/

void __fastcall NetThread::Pump(NetThread *this)
{
  ?Pump@NetThread@@AEAAXXZ(this);
}

/*
==============
NetThread::ThreadFrame
==============
*/

unsigned int __fastcall NetThread::ThreadFrame(NetThread *this, int timeout)
{
  return ?ThreadFrame@NetThread@@AEAAIH@Z(this, timeout);
}

/*
==============
NetThread::SendRequest
==============
*/

void __fastcall NetThread::SendRequest(NetThread *this, int type, const void *request, int size, AsyncRequestHandle *handle)
{
  ?SendRequest@NetThread@@QEAAXHPEBXHPEAVAsyncRequestHandle@@@Z(this, type, request, size, handle);
}

/*
==============
NetThread::SetPumpInterval
==============
*/

void __fastcall NetThread::SetPumpInterval(NetThread *this, const int pumpInterval)
{
  ?SetPumpInterval@NetThread@@QEAAXH@Z(this, pumpInterval);
}

/*
==============
NetThread::Start
==============
*/

void __fastcall NetThread::Start(NetThread *this, const unsigned __int64 socket, const NetConfig *config)
{
  ?Start@NetThread@@QEAAX_KPEBUNetConfig@@@Z(this, socket, config);
}

/*
==============
NetThread::GetSendBuffer
==============
*/

NetBuffer<262144,1> *__fastcall NetThread::GetSendBuffer(NetThread *this)
{
  return ?GetSendBuffer@NetThread@@QEAAAEAV?$NetBuffer@$0EAAAA@$00@@XZ(this);
}

/*
==============
NetThread::NetThread
==============
*/

void __fastcall NetThread::NetThread(NetThread *this)
{
  ??0NetThread@@QEAA@XZ(this);
}

/*
==============
NetThread::GetWaitTimeout
==============
*/

int __fastcall NetThread::GetWaitTimeout(NetThread *this)
{
  return ?GetWaitTimeout@NetThread@@AEBAHXZ(this);
}

/*
==============
NetThread::IdleFrame
==============
*/

void __fastcall NetThread::IdleFrame(NetThread *this)
{
  ?IdleFrame@NetThread@@AEAAXXZ(this);
}

/*
==============
NetThread::RecvFrom
==============
*/

int __fastcall NetThread::RecvFrom(NetThread *this, void *const buffer, const int size, bdReference<bdAddrHandle> *outFrom, NetPingInfo *info)
{
  return ?RecvFrom@NetThread@@QEAAHQEAXHAEAV?$bdReference@VbdAddrHandle@@@@AEAUNetPingInfo@@@Z(this, buffer, size, outFrom, info);
}

/*
==============
NetThread::Stop
==============
*/

void __fastcall NetThread::Stop(NetThread *this)
{
  ?Stop@NetThread@@QEAAXXZ(this);
}

/*
==============
NetThread::SendTo
==============
*/

int __fastcall NetThread::SendTo(NetThread *this, const void *data, const int length, const bdReference<bdAddrHandle> *to, NetPingInfo *info)
{
  return ?SendTo@NetThread@@QEAAHPEBXHAEBV?$bdReference@VbdAddrHandle@@@@AEAUNetPingInfo@@@Z(this, data, length, to, info);
}

/*
==============
NetThread::NetThread
==============
*/
void NetThread::NetThread(NetThread *this)
{
  this->__vftable = (NetThread_vtbl *)&NetThread::`vftable';
  *(_QWORD *)&this->m_listener.m_events = 0i64;
  this->m_listener.m_sendEvent = NULL;
  this->m_listener.m_recvEvent = NULL;
  *(_QWORD *)&this->m_listener.m_sendSignaled = 0i64;
  this->m_sendBuffer.m_stream.m_writeOffset = 0;
  this->m_sendBuffer.m_stream.m_readOffset = 0;
  memset_0((void *)this->m_sendBuffer.m_stream.m_readable, 0, 0x40D1Fui64);
  this->m_recvBuffer.m_stream.m_writeOffset = 0;
  this->m_recvBuffer.m_stream.m_readOffset = 0;
  memset_0((void *)this->m_recvBuffer.m_stream.m_readable, 0, 0x1071Fui64);
  memset_0(&this->m_requestBuffer, 0, sizeof(this->m_requestBuffer));
  this->m_requestBuffer.m_requests.m_readOffset = 0;
  this->m_requestBuffer.m_requests.m_writeOffset = 0;
  this->m_requestBuffer.m_requests.m_reserveOffset = 0;
  memset_0(&this->m_requestBuffer.m_requests.m_buffer, 0, sizeof(this->m_requestBuffer.m_requests.m_buffer));
  this->m_telemetry = NULL;
  this->m_config = NULL;
  this->m_started = 0;
  this->m_lastPump = 0;
  *(_WORD *)&this->m_sendBufferFull = 0;
  this->m_socket = -1i64;
  this->m_pumpInterval = 100;
}

/*
==============
NetThread::Flush
==============
*/
void NetThread::Flush(NetThread *this)
{
  int v2; 
  __int64 v3; 
  AsyncRequestHandle v4; 
  int v5; 
  __int128 v6; 
  __int64 v7; 
  __int128 data; 
  __int64 v9; 
  int v10; 
  char v11; 

  AsyncRequestHandle::AsyncRequestHandle(&v4);
  LODWORD(v6) = 0;
  *((_QWORD *)&v6 + 1) = &v4;
  LODWORD(v7) = 4;
  if ( AsyncRequestHandle::IsComplete(&v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\async_request_queue.h", 75, ASSERT_TYPE_ASSERT, "(handle == 0 || !handle->IsComplete())", (const char *)&queryFormat, "handle == NULL || !handle->IsComplete()") )
    __debugbreak();
  data = v6;
  v9 = v7;
  v10 = v5;
  v11 = -1;
  v2 = Sys_Milliseconds();
  while ( MpscStream<1024>::Write(&this->m_requestBuffer.m_requests, &data, 29) <= 0 )
  {
    Sys_Sleep(1);
    v3 = (unsigned int)(Sys_Milliseconds() - v2);
    if ( (int)v3 > 1000 )
      Com_PrintWarning(25, "[NET] Waited %dms for space in request buffer, currently queued %uB\n", v3, this->m_requestBuffer.m_requests.m_writeOffset - this->m_requestBuffer.m_requests.m_readOffset);
  }
  NetListener::Signal(&this->m_listener, SEND);
  AsyncRequestHandle::Wait(&v4);
}

/*
==============
NetThread::Frame
==============
*/
void NetThread::Frame(NetThread *this)
{
  if ( !this->m_started )
  {
    NET_EnterCriticalSection();
    NetThread::IdleFrame(this);
    if ( dwNetIsStarted() )
    {
      NetThread::RecvFrame(this);
      NetThread::SendFrame(this);
    }
    NET_ExitCriticalSection();
  }
}

/*
==============
NetThread::GetDtlsOverhead
==============
*/
__int64 NetThread::GetDtlsOverhead(NetThread *this, const bdReference<bdAddrHandle> *addrHandle)
{
  if ( addrHandle->m_ptr->m_realAddr.m_type )
    return bdRelayData::getWrapperSize() + 20;
  else
    return 20i64;
}

/*
==============
NetThread::GetRecvBuffer
==============
*/
NetBuffer<65536,0> *NetThread::GetRecvBuffer(NetThread *this)
{
  return &this->m_recvBuffer;
}

/*
==============
NetThread::GetSendBuffer
==============
*/
NetBuffer<262144,1> *NetThread::GetSendBuffer(NetThread *this)
{
  return &this->m_sendBuffer;
}

/*
==============
NetThread::GetWaitTimeout
==============
*/
__int64 NetThread::GetWaitTimeout(NetThread *this)
{
  __int64 result; 
  int v3; 

  if ( NetListener::HasEvents(&this->m_listener) )
    return 1i64;
  v3 = this->m_lastPump + this->m_pumpInterval - Sys_Milliseconds();
  result = 0i64;
  if ( v3 > 0 )
    return (unsigned int)v3;
  return result;
}

/*
==============
NetThread::IdleFrame
==============
*/
void NetThread::IdleFrame(NetThread *this)
{
  int v2; 

  Profile_Begin(385);
  v2 = Sys_Milliseconds();
  if ( v2 - this->m_lastPump >= this->m_pumpInterval )
  {
    NetTelemetry::StartPump(this->m_telemetry);
    dwNetPump();
    NetTelemetry::EndPump(this->m_telemetry);
    this->m_lastPump = v2;
  }
  NetListener::Consume(&this->m_listener, TIMEOUT);
  Profile_EndInternal(NULL);
}

/*
==============
NetThread::IsStarted
==============
*/
_BOOL8 NetThread::IsStarted(NetThread *this)
{
  return this->m_started;
}

/*
==============
NetThread::ProcessRequest
==============
*/
void NetThread::ProcessRequest(NetThread *this, int type, const void *data, int size)
{
  __int64 v7; 

  if ( !Sys_IsNetworkThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_thread.cpp", 517, ASSERT_TYPE_ASSERT, "(Sys_IsNetworkThread())", (const char *)&queryFormat, "Sys_IsNetworkThread()") )
    __debugbreak();
  if ( type )
  {
    if ( type == 1 )
    {
      NetChannel::Close(*(NetChannel **)data);
    }
    else
    {
      LODWORD(v7) = type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_thread.cpp", 534, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unidentified net request type %d", v7) )
        __debugbreak();
    }
  }
  else
  {
    NetThread::SendFrame(this);
  }
}

/*
==============
NetThread::Pump
==============
*/
void NetThread::Pump(NetThread *this)
{
  int v2; 

  v2 = Sys_Milliseconds();
  if ( v2 - this->m_lastPump >= this->m_pumpInterval )
  {
    NetTelemetry::StartPump(this->m_telemetry);
    dwNetPump();
    NetTelemetry::EndPump(this->m_telemetry);
    this->m_lastPump = v2;
  }
}

/*
==============
NetThread::RecvFrame
==============
*/
void NetThread::RecvFrame(NetThread *this)
{
  const char *v2; 
  bool v3; 
  int v4; 
  int v5; 
  NetPacket *v6; 
  const NetPacket *v7; 
  int v8; 
  int v9; 
  __int64 WordIndex; 
  int v11; 
  __int128 v14; 
  __int128 v16; 
  unsigned __int64 v18; 

  v18 = __rdtsc();
  v2 = j_va("NET_RecvFrame (%ukB)", (unsigned int)((signed int)(this->m_recvBuffer.m_stream.m_writeOffset - this->m_recvBuffer.m_stream.m_readOffset) / 1024));
  Sys_ProfBeginNamedEvent(0xFF008008, v2);
  NetTelemetry::StartRecv(this->m_telemetry, this->m_recvBuffer.m_stream.m_writeOffset - this->m_recvBuffer.m_stream.m_readOffset);
  v3 = this->m_recvBuffer.m_stream.m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(&this->m_recvBuffer.m_stream, (const NetPacket *)&this->m_recvBuffer.m_stream.m_buffer.m_data[(unsigned __int16)this->m_recvBuffer.m_stream.m_readOffset])] == 0;
  v4 = 0;
  v5 = 0;
  if ( PacketStream<NetPacket,1288,65536,0>::WriteableAt(&this->m_recvBuffer.m_stream, this->m_recvBuffer.m_stream.m_writeOffset, 1288) )
  {
    while ( 1 )
    {
      v6 = PacketStream<NetPacket,1288,65536,0>::Reserve(&this->m_recvBuffer.m_stream, 1288);
      v7 = v6;
      if ( v6 )
        v6->addr.m_ptr = NULL;
      v6->context = NULL;
      v6->length = 0;
      v6->size = 1288;
      v8 = dwRecvFrom(&v6->addr, &v6[1], 0x508u);
      v9 = v8;
      if ( v8 <= 0 )
        break;
      v7->context = (void *)NetPing::Timestamp();
      v7->length = v9;
      v7->size = v9;
      this->m_recvBuffer.m_stream.m_writeOffset += (v9 + 151) & 0xFFFFFF80;
      WordIndex = PacketStream<NetPacket,1288,65536,0>::GetWordIndex(&this->m_recvBuffer.m_stream, v7);
      if ( (signed int)(this->m_recvBuffer.m_stream.m_writeOffset - this->m_recvBuffer.m_stream.m_readOffset) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 120, ASSERT_TYPE_ASSERT, "(Size() > 0)", (const char *)&queryFormat, "Size() > 0") )
        __debugbreak();
      if ( this->m_recvBuffer.m_stream.m_readable[WordIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 121, ASSERT_TYPE_ASSERT, "(!readable)", (const char *)&queryFormat, "!readable") )
        __debugbreak();
      this->m_recvBuffer.m_stream.m_readable[WordIndex] = 1;
      v4 += v9;
      ++v5;
      if ( !PacketStream<NetPacket,1288,65536,0>::WriteableAt(&this->m_recvBuffer.m_stream, this->m_recvBuffer.m_stream.m_writeOffset, 1288) )
        goto LABEL_12;
    }
    if ( v8 != -2 )
      Com_Printf(131097, "[NET] recvfrom failed with %d\n", (unsigned int)v8);
    goto LABEL_13;
  }
LABEL_12:
  if ( v3 )
  {
LABEL_13:
    NetListener::Consume(&this->m_listener, RECV);
    this->m_recvBufferFull = 0;
    goto LABEL_18;
  }
  if ( !this->m_recvBufferFull )
  {
    Com_PrintError(131097, "[NET] Not enough space in recv buffer - %d/%dB free\n", this->m_recvBuffer.m_stream.m_readOffset + 0x10000 - this->m_recvBuffer.m_stream.m_writeOffset, 0x10000i64);
    this->m_recvBufferFull = 1;
  }
LABEL_18:
  if ( v4 > 0 )
    NetTelemetry::NetRecv(this->m_telemetry);
  NetTelemetry::EndRecv(this->m_telemetry, v4, v5);
  v11 = Sys_Milliseconds();
  if ( v11 - this->m_lastPump >= this->m_pumpInterval )
  {
    NetTelemetry::StartPump(this->m_telemetry);
    dwNetPump();
    NetTelemetry::EndPump(this->m_telemetry);
    this->m_lastPump = v11;
  }
  Sys_ProfEndNamedEvent();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v18) < 0 )
  {
    *((_QWORD *)&v14 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v14 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v14;
  }
  *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v16 = *(double *)&_XMM0 * usecPerRawTimerTick;
  _XMM0 = v16;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  if ( (float)(*(float *)&_XMM1 * 0.001) > 10.0 )
    Com_Printf(12, "[PROFILE] %s took %.3fms\n", "NET_RecvFrame", (float)(*(float *)&_XMM1 * 0.001));
}

/*
==============
NetThread::RecvFrom
==============
*/
__int64 NetThread::RecvFrom(NetThread *this, void *const buffer, const int size, bdReference<bdAddrHandle> *outFrom, NetPingInfo *info)
{
  NetBuffer<65536,0> *p_m_recvBuffer; 
  unsigned int v10; 
  __int64 v11; 
  int v12; 
  bool v13; 
  NetPacket *packets; 
  __int64 v16; 
  int sizes; 

  v16 = -2i64;
  Profile_Begin(387);
  p_m_recvBuffer = &this->m_recvBuffer;
  if ( p_m_recvBuffer->m_stream.m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(&p_m_recvBuffer->m_stream, (const NetPacket *)&p_m_recvBuffer->m_stream.m_buffer.m_data[(unsigned __int16)p_m_recvBuffer->m_stream.m_readOffset])] )
  {
    v11 = (__int64)&p_m_recvBuffer->m_stream.m_buffer.m_data[(unsigned __int16)p_m_recvBuffer->m_stream.m_readOffset];
    if ( !p_m_recvBuffer->m_stream.m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(&p_m_recvBuffer->m_stream, (const NetPacket *)v11)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 149, ASSERT_TYPE_ASSERT, "(IsReadable( packet ))", (const char *)&queryFormat, "IsReadable( packet )") )
      __debugbreak();
    packets = (NetPacket *)v11;
    v12 = *(_DWORD *)(v11 + 20);
    v13 = size < v12;
    if ( size < v12 )
      v12 = size;
    sizes = v12;
    if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_buffer.h", 90, ASSERT_TYPE_ASSERT, "(size >= packet->size)", (const char *)&queryFormat, "size >= packet->size", packets, v16) )
      __debugbreak();
    memcpy_0(buffer, (const void *)(v11 + 24), v12);
    bdReference<bdAddrHandle>::operator=(outFrom, (const bdReference<bdAddrHandle> *)v11);
    info->sockTicks = *(_QWORD *)(v11 + 8);
    PacketStream<NetPacket,1288,65536,0>::Release(&p_m_recvBuffer->m_stream, (const NetPacket *const *)&packets, 1, &sizes);
    _InterlockedExchangeAdd((volatile signed __int32 *)&outFrom->m_ptr->m_refCount, 0xFFFFFFFF);
    v10 = sizes;
  }
  else
  {
    v10 = -2;
  }
  Profile_EndInternal(NULL);
  return v10;
}

/*
==============
NetThread::SendFrame
==============
*/
void NetThread::SendFrame(NetThread *this)
{
  NetBuffer<262144,1> *p_m_sendBuffer; 
  const char *v3; 
  int v4; 
  int v5; 
  PacketBuffer<262144,1312,8> *p_m_buffer; 
  unsigned int v7; 
  int v8; 
  __int64 v9; 
  NetPacket *v10; 
  int size; 
  unsigned __int64 v12; 
  int v13; 
  NetPacket **v14; 
  NetPacket *v15; 
  int length; 
  int v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  __int128 v23; 
  __int128 v25; 
  int v27; 
  int v28; 
  unsigned __int64 v30; 
  int packetCount; 
  NetPacket *packets[128]; 
  int sizes[130]; 

  p_m_sendBuffer = &this->m_sendBuffer;
  v30 = __rdtsc();
  v3 = j_va("NET_SendFrame (%ukB)", (unsigned int)((signed int)(this->m_sendBuffer.m_stream.m_writeOffset - this->m_sendBuffer.m_stream.m_readOffset) / 1024));
  Sys_ProfBeginNamedEvent(0xFF0000FF, v3);
  NetTelemetry::StartSend(this->m_telemetry, p_m_sendBuffer->m_stream.m_writeOffset - p_m_sendBuffer->m_stream.m_readOffset);
  memset_0(&packetCount, 0, 0x608ui64);
  v4 = 0;
  v27 = 0;
  v5 = 0;
  v28 = 0;
  p_m_buffer = &p_m_sendBuffer->m_stream.m_buffer;
  while ( p_m_sendBuffer->m_stream.m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(&p_m_sendBuffer->m_stream, (const NetPacket *)&p_m_buffer->m_data[p_m_sendBuffer->m_stream.m_readOffset & 0x3FFFF])] )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0i64;
    while ( p_m_sendBuffer->m_stream.m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(&p_m_sendBuffer->m_stream, (const NetPacket *)&p_m_buffer->m_data[(v7 + p_m_sendBuffer->m_stream.m_readOffset) & 0x3FFFF])] && v7 < 0x40000 )
    {
      if ( (v7 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 145, ASSERT_TYPE_ASSERT, "(IsAligned( offset, WORD_SIZE ))", (const char *)&queryFormat, "IsAligned( offset, WORD_SIZE )") )
        __debugbreak();
      v10 = (NetPacket *)&p_m_buffer->m_data[(v7 + p_m_sendBuffer->m_stream.m_readOffset) & 0x3FFFF];
      if ( !p_m_sendBuffer->m_stream.m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(&p_m_sendBuffer->m_stream, v10)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 149, ASSERT_TYPE_ASSERT, "(IsReadable( packet ))", (const char *)&queryFormat, "IsReadable( packet )") )
        __debugbreak();
      size = v10->size;
      packets[v9] = v10;
      sizes[v9] = size;
      ++v8;
      if ( ++v9 == 128 )
        break;
      if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
        __debugbreak();
      v7 += (size + 151) & 0xFFFFFF80;
    }
    packetCount = v8;
    dwSendTo(packets, v8);
    v4 = packetCount + v27;
    v27 += packetCount;
    v12 = NetPing::Timestamp();
    v13 = 0;
    v5 = v28;
    if ( packetCount <= 0 )
      goto LABEL_38;
    v14 = packets;
    do
    {
      v15 = *v14;
      *(_QWORD *)(*v14)->context = v12;
      length = v15->length;
      v17 = 0;
      if ( length > 0 )
        v17 = length;
      v5 += v17;
      ++v13;
      ++v14;
      v18 = packetCount;
    }
    while ( v13 < packetCount );
    v28 = v5;
    if ( packetCount <= 0 )
    {
LABEL_38:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_buffer.h", 134, ASSERT_TYPE_ASSERT, "(batch.packetCount > 0)", (const char *)&queryFormat, "batch.packetCount > 0") )
        __debugbreak();
      v18 = packetCount;
    }
    v19 = 0i64;
    if ( v18 > 0 )
    {
      do
        _InterlockedExchangeAdd((volatile signed __int32 *)&packets[v19++]->addr.m_ptr->m_refCount, 0xFFFFFFFF);
      while ( v19 < v18 );
      v18 = packetCount;
    }
    PacketStream<NetPacket,1288,262144,1>::Release(&p_m_sendBuffer->m_stream, (const NetPacket *const *)packets, v18, sizes);
  }
  NetListener::Consume(&this->m_listener, SEND);
  NetTelemetry::EndSend(this->m_telemetry, v5, v4);
  v20 = Sys_Milliseconds();
  if ( v20 - this->m_lastPump >= this->m_pumpInterval )
  {
    NetTelemetry::StartPump(this->m_telemetry);
    dwNetPump();
    NetTelemetry::EndPump(this->m_telemetry);
    this->m_lastPump = v20;
  }
  Sys_ProfEndNamedEvent();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v30) < 0 )
  {
    *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v23 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v23;
  }
  *((_QWORD *)&v25 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v25 = *(double *)&_XMM0 * usecPerRawTimerTick;
  _XMM0 = v25;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  if ( (float)(*(float *)&_XMM1 * 0.001) > 20.0 )
    Com_Printf(12, "[PROFILE] %s took %.3fms\n", "NET_SendFrame", (float)(*(float *)&_XMM1 * 0.001));
}

/*
==============
NetThread::SendRequest
==============
*/
void NetThread::SendRequest(NetThread *this, int type, const void *request, int size, AsyncRequestHandle *handle)
{
  size_t v5; 
  int v8; 
  int v9; 
  __int64 v10; 
  __int128 v11; 
  __int64 v12; 
  __int128 data; 
  __int64 v14; 
  char v15[104]; 

  v5 = size;
  LODWORD(v11) = type;
  *((_QWORD *)&v11 + 1) = handle;
  LODWORD(v12) = size;
  v8 = size + 25;
  if ( (unsigned int)(size + 25) > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\async_request_queue.h", 74, ASSERT_TYPE_ASSERT, "(sizeof( requestBuffer ) >= requestSize)", (const char *)&queryFormat, "sizeof( requestBuffer ) >= requestSize") )
    __debugbreak();
  if ( handle && AsyncRequestHandle::IsComplete(handle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\async_request_queue.h", 75, ASSERT_TYPE_ASSERT, "(handle == 0 || !handle->IsComplete())", (const char *)&queryFormat, "handle == NULL || !handle->IsComplete()") )
    __debugbreak();
  data = v11;
  v14 = v12;
  memcpy_0(v15, request, v5);
  v15[v5] = -1;
  v9 = Sys_Milliseconds();
  while ( MpscStream<1024>::Write(&this->m_requestBuffer.m_requests, &data, v8) <= 0 )
  {
    Sys_Sleep(1);
    v10 = (unsigned int)(Sys_Milliseconds() - v9);
    if ( (int)v10 > 1000 )
      Com_PrintWarning(25, "[NET] Waited %dms for space in request buffer, currently queued %uB\n", v10, this->m_requestBuffer.m_requests.m_writeOffset - this->m_requestBuffer.m_requests.m_readOffset);
  }
  NetListener::Signal(&this->m_listener, SEND);
}

/*
==============
NetThread::SendTo
==============
*/
__int64 NetThread::SendTo(NetThread *this, const void *data, const int length, const bdReference<bdAddrHandle> *to, NetPingInfo *info)
{
  NetBuffer<262144,1> *p_m_sendBuffer; 
  unsigned int WrapperSize; 
  int v11; 
  NetPacket *v12; 
  NetPacket *v13; 
  int v14; 
  unsigned int v15; 
  volatile char *v16; 
  char *fmt; 

  Profile_Begin(386);
  p_m_sendBuffer = &this->m_sendBuffer;
  if ( to->m_ptr->m_realAddr.m_type )
    WrapperSize = bdRelayData::getWrapperSize();
  else
    WrapperSize = 0;
  v11 = WrapperSize + length + 20;
  if ( v11 > 1288 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_thread.cpp", 168, ASSERT_TYPE_ASSERT, "(dtlsLength <= (1288))", (const char *)&queryFormat, "dtlsLength <= BD_MAX_DATAGRAM_SIZE", -2i64) )
    __debugbreak();
  if ( PacketStream<NetPacket,1288,262144,1>::WriteableAt(&this->m_sendBuffer.m_stream, p_m_sendBuffer->m_stream.m_writeOffset, v11) )
  {
    v12 = PacketStream<NetPacket,1288,262144,1>::Reserve(&this->m_sendBuffer.m_stream, v11);
    v13 = v12;
    if ( v12 )
      v12->addr.m_ptr = NULL;
    v12->context = NULL;
    v12->length = 0;
    v12->size = v11;
    bdReference<bdAddrHandle>::operator=(&v12->addr, to);
    v13->context = &info->sockTicks;
    v14 = dwPrepareSendTo(length, data, v13);
    v15 = v14;
    if ( v14 != v11 && v14 >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_thread.cpp", 177, ASSERT_TYPE_ASSERT, "(result == dtlsLength || result < 0)", (const char *)&queryFormat, "result == dtlsLength || result < 0") )
      __debugbreak();
    v13->length = v15;
    v16 = &p_m_sendBuffer->m_stream.m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(&this->m_sendBuffer.m_stream, v13)];
    if ( (signed int)(p_m_sendBuffer->m_stream.m_writeOffset - this->m_sendBuffer.m_stream.m_readOffset) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 120, ASSERT_TYPE_ASSERT, "(Size() > 0)", (const char *)&queryFormat, "Size() > 0") )
      __debugbreak();
    if ( *v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 121, ASSERT_TYPE_ASSERT, "(!readable)", (const char *)&queryFormat, "!readable") )
      __debugbreak();
    *v16 = 1;
    if ( (char *)v13 - (char *)p_m_sendBuffer - 2056 == (this->m_sendBuffer.m_stream.m_readOffset & 0x3FFFF) || this->m_config->sendSignalForced )
      NetListener::Signal(&this->m_listener, SEND);
    this->m_sendBufferFull = 0;
  }
  else
  {
    if ( !this->m_sendBufferFull )
    {
      LODWORD(fmt) = 0x40000;
      Com_PrintError(131097, "[NET] Failed to write %d bytes to send buffer - free %d/%d\n", (unsigned int)length, 0x40000 - p_m_sendBuffer->m_stream.m_writeOffset + this->m_sendBuffer.m_stream.m_readOffset, fmt);
      this->m_sendBufferFull = 1;
    }
    v15 = -2;
  }
  Profile_EndInternal(NULL);
  return v15;
}

/*
==============
NetThread::SetPumpInterval
==============
*/
void NetThread::SetPumpInterval(NetThread *this, const int pumpInterval)
{
  this->m_pumpInterval = pumpInterval;
}

/*
==============
NetThread::SetTelemetry
==============
*/
void NetThread::SetTelemetry(NetThread *this, NetTelemetry *telemetry)
{
  this->m_telemetry = telemetry;
}

/*
==============
NetThread::Start
==============
*/
void NetThread::Start(NetThread *this, const unsigned __int64 socket, const NetConfig *config)
{
  AsyncRequestQueue<1024,128> *p_m_requestBuffer; 
  signed __int32 m_readOffset; 
  unsigned int i; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_thread.cpp", 57, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  NetThread::s_instance = this;
  if ( !NetListener::Init(&this->m_listener, socket) )
    Sys_Error((const ObfuscateErrorText)&stru_14401B140);
  p_m_requestBuffer = &this->m_requestBuffer;
  m_readOffset = this->m_requestBuffer.m_requests.m_readOffset;
  for ( i = this->m_requestBuffer.m_requests.m_writeOffset - m_readOffset; ; i = this->m_requestBuffer.m_requests.m_writeOffset - p_m_requestBuffer->m_requests.m_readOffset )
  {
    if ( (((_BYTE)this + 120) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_requestBuffer) )
      __debugbreak();
    if ( m_readOffset == _InterlockedCompareExchange((volatile signed __int32 *)p_m_requestBuffer, m_readOffset + i, m_readOffset) )
      break;
    m_readOffset = p_m_requestBuffer->m_requests.m_readOffset;
  }
  this->m_requestBuffer.m_processor = this;
  if ( !Sys_SpawnNetworkThread((void (__fastcall *)(unsigned int))NetThread::ThreadMain) )
    Sys_Error((const ObfuscateErrorText)&stru_14401B160);
  this->m_socket = socket;
  this->m_config = config;
  this->m_started = 1;
}

/*
==============
NetThread::Stop
==============
*/
void NetThread::Stop(NetThread *this)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_thread.cpp", 86, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Sys_ThreadExists(THREAD_CONTEXT_NETWORK) )
  {
    Sys_ShutdownThreadRequest(THREAD_CONTEXT_NETWORK);
    NetListener::Signal(&this->m_listener, SEND);
    while ( !Sys_ThreadIsShutdownDone(THREAD_CONTEXT_NETWORK) )
      Sys_Sleep(1);
    Sys_ClearThreadShutdownRequest(THREAD_CONTEXT_NETWORK);
    Sys_ShutdownThread(THREAD_CONTEXT_NETWORK);
  }
  if ( this->m_started )
  {
    NetListener::Destroy(&this->m_listener);
    this->m_started = 0;
  }
}

/*
==============
NetThread::ThreadFrame
==============
*/
__int64 NetThread::ThreadFrame(NetThread *this, int timeout)
{
  NetListener *p_m_listener; 
  unsigned int v4; 
  int v5; 
  char v7[8]; 
  int buffer; 
  AsyncRequestHandle *v9; 
  int v10; 
  char v11[128]; 

  p_m_listener = &this->m_listener;
  v4 = NetListener::Wait(&this->m_listener, timeout);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_thread.cpp", 282, ASSERT_TYPE_ASSERT, "(events != 0)", (const char *)&queryFormat, "events != 0") )
    __debugbreak();
  NET_EnterCriticalSection();
  if ( !this->m_requestBuffer.m_processor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\async_request_queue.h", 117, ASSERT_TYPE_ASSERT, "(m_processor != 0)", (const char *)&queryFormat, "m_processor != NULL") )
    __debugbreak();
  while ( (signed int)(this->m_requestBuffer.m_requests.m_writeOffset - this->m_requestBuffer.m_requests.m_readOffset) > 0 )
  {
    MpscStream<1024>::Read(&this->m_requestBuffer.m_requests, &buffer, 24);
    v5 = v10;
    if ( (unsigned __int64)v10 > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\async_request_queue.h", 126, ASSERT_TYPE_ASSERT, "(header.size <= sizeof( data ))", (const char *)&queryFormat, "header.size <= sizeof( data )") )
      __debugbreak();
    MpscStream<1024>::Read(&this->m_requestBuffer.m_requests, v11, v5);
    this->m_requestBuffer.m_processor->ProcessRequest(this->m_requestBuffer.m_processor, buffer, v11, v5, NULL);
    MpscStream<1024>::Read(&this->m_requestBuffer.m_requests, v7, 1);
    if ( v9 )
      AsyncRequestHandle::Signal(v9);
  }
  if ( (v4 & 2) != 0 )
    NetThread::RecvFrame(this);
  if ( (v4 & 1) != 0 )
    NetThread::SendFrame(this);
  if ( (v4 & 4) != 0 )
    NetThread::IdleFrame(this);
  if ( (v4 & 8) != 0 )
    NetListener::Consume(p_m_listener, ERR);
  NET_ExitCriticalSection();
  return v4;
}

/*
==============
NetThread::ThreadMain
==============
*/
void NetThread::ThreadMain(const unsigned int threadContext)
{
  NetThread *v1; 
  int v2; 
  int v3; 
  int v5; 

  if ( threadContext != 6 )
  {
    v5 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_thread.cpp", 261, ASSERT_TYPE_ASSERT, "( threadContext ) == ( THREAD_CONTEXT_NETWORK )", "%s == %s\n\t%i, %i", "threadContext", "THREAD_CONTEXT_NETWORK", threadContext, v5) )
      __debugbreak();
  }
  if ( !NetThread::s_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_thread.cpp", 262, ASSERT_TYPE_ASSERT, "(s_instance != 0)", (const char *)&queryFormat, "s_instance != NULL") )
    __debugbreak();
  Com_Printf(25, "[NET] Network thread started\n");
  while ( !Sys_ThreadIsShutdownRequested(THREAD_CONTEXT_NETWORK) )
  {
    v1 = NetThread::s_instance;
    if ( NetListener::HasEvents(&NetThread::s_instance->m_listener) )
    {
      v2 = 1;
    }
    else
    {
      v3 = Sys_Milliseconds();
      v2 = 0;
      if ( v1->m_lastPump + v1->m_pumpInterval - v3 > 0 )
        v2 = v1->m_lastPump + v1->m_pumpInterval - v3;
    }
    NetThread::ThreadFrame(NetThread::s_instance, v2);
  }
  Com_Printf(25, "[NET] Network thread stopped\n");
  Sys_ShutdownThreadDone(THREAD_CONTEXT_NETWORK);
}

