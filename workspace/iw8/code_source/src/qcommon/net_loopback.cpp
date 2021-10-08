/*
==============
NetLoopback::Flush
==============
*/

void __fastcall NetLoopback::Flush(NetLoopback *this)
{
  ?Flush@NetLoopback@@QEAAXXZ(this);
}

/*
==============
NetLoopback::GetBuffer
==============
*/

NetBuffer<32768,0> *__fastcall NetLoopback::GetBuffer(NetLoopback *this, netsrc_t netId)
{
  return ?GetBuffer@NetLoopback@@AEAAAEAV?$NetBuffer@$0IAAA@$0A@@@W4netsrc_t@@@Z(this, netId);
}

/*
==============
NetLoopback::Flush
==============
*/

void __fastcall NetLoopback::Flush(NetLoopback *this, netsrc_t netId)
{
  ?Flush@NetLoopback@@QEAAXW4netsrc_t@@@Z(this, netId);
}

/*
==============
NetLoopback::RecvFrom
==============
*/

int __fastcall NetLoopback::RecvFrom(NetLoopback *this, netsrc_t netId, void *const buffer, int size, bdReference<bdAddrHandle> *outFrom, NetPingInfo *info)
{
  return ?RecvFrom@NetLoopback@@QEAAHW4netsrc_t@@QEAXHAEAV?$bdReference@VbdAddrHandle@@@@AEAUNetPingInfo@@@Z(this, netId, buffer, size, outFrom, info);
}

/*
==============
NetLoopback::SendTo
==============
*/

int __fastcall NetLoopback::SendTo(NetLoopback *this, netsrc_t netId, const void *data, int length, const bdReference<bdAddrHandle> *addrHandle, NetPingInfo *info)
{
  return ?SendTo@NetLoopback@@QEAAHW4netsrc_t@@PEBXHAEBV?$bdReference@VbdAddrHandle@@@@AEAUNetPingInfo@@@Z(this, netId, data, length, addrHandle, info);
}

/*
==============
NetLoopback::Flush
==============
*/
void NetLoopback::Flush(NetLoopback *this, netsrc_t netId)
{
  NetBuffer<32768,0> *Buffer; 

  Buffer = NetLoopback::GetBuffer(this, netId);
  NetBuffer<32768,0>::Clear(Buffer);
}

/*
==============
NetLoopback::Flush
==============
*/
void NetLoopback::Flush(NetLoopback *this)
{
  NetLoopback *v1; 
  __int64 v2; 
  volatile unsigned int m_writeOffset; 
  unsigned int v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  volatile char *v8; 
  __int64 v9; 
  volatile char *m_readable; 
  __int64 v11; 

  v1 = this;
  NetBuffer<32768,0>::Clear(&this->m_serverBuffer);
  v2 = 2i64;
  do
  {
    m_writeOffset = v1->m_clientBuffers[0].m_stream.m_writeOffset;
    v4 = (v1->m_clientBuffers[0].m_stream.m_writeOffset - v1->m_clientBuffers[0].m_stream.m_readOffset) >> 7;
    v5 = (unsigned __int8)(v1->m_clientBuffers[0].m_stream.m_readOffset >> 7);
    if ( v4 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 71, ASSERT_TYPE_ASSERT, "(readCount <= WORD_COUNT)", (const char *)&queryFormat, "readCount <= WORD_COUNT") )
      __debugbreak();
    v6 = 256 - v5;
    if ( (int)v4 < 256 - (int)v5 )
      v6 = v4;
    v7 = v4 - v6;
    if ( v6 > 0 )
    {
      v8 = &v1->m_clientBuffers[0].m_stream.m_readable[v5];
      v9 = (unsigned int)v6;
      do
      {
        *v8++ = 0;
        --v9;
      }
      while ( v9 );
    }
    if ( v7 > 0 )
    {
      m_readable = v1->m_clientBuffers[0].m_stream.m_readable;
      v11 = (unsigned int)v7;
      do
      {
        *m_readable++ = 0;
        --v11;
      }
      while ( v11 );
    }
    v1->m_clientBuffers[0].m_stream.m_readOffset = m_writeOffset;
    v1 = (NetLoopback *)((char *)v1 + 34344);
    --v2;
  }
  while ( v2 );
}

/*
==============
NetLoopback::GetBuffer
==============
*/
NetBuffer<32768,0> *NetLoopback::GetBuffer(NetLoopback *this, netsrc_t netId)
{
  __int64 v2; 

  v2 = netId;
  if ( netId == NS_MAXCLIENTS )
    return &this->m_serverBuffer;
  if ( netId >= NS_MAXCLIENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_loopback.cpp", 57, ASSERT_TYPE_ASSERT, "(netId < NS_MAXCLIENTS)", "%s\n\tInvalid net id %d", "netId < NS_MAXCLIENTS", netId) )
    __debugbreak();
  return (NetBuffer<32768,0> *)((char *)this + 34344 * v2);
}

/*
==============
NetLoopback::RecvFrom
==============
*/
__int64 NetLoopback::RecvFrom(NetLoopback *this, netsrc_t netId, void *const buffer, int size, bdReference<bdAddrHandle> *outFrom, NetPingInfo *info)
{
  NetBuffer<32768,0> *v10; 
  NetPacket *v12; 
  int v13; 
  bool v14; 
  int sizes; 
  NetPacket *packets; 

  if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_loopback.cpp", 31, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsServerThread())", "%s\n\tLoopback recv should be called only from client or server thread", "Sys_IsMainThread() || Sys_IsServerThread()") )
    __debugbreak();
  v10 = NetLoopback::GetBuffer(this, netId);
  if ( !v10->m_stream.m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(&v10->m_stream, (const NetPacket *)&v10->m_stream.m_buffer.m_data[v10->m_stream.m_readOffset & 0x7FFF])] )
    return 4294967294i64;
  info->sockTicks = NetPing::Timestamp();
  v12 = (NetPacket *)&v10->m_stream.m_buffer.m_data[v10->m_stream.m_readOffset & 0x7FFF];
  if ( !v10->m_stream.m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(&v10->m_stream, v12)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 149, ASSERT_TYPE_ASSERT, "(IsReadable( packet ))", (const char *)&queryFormat, "IsReadable( packet )") )
    __debugbreak();
  v13 = v12->size;
  v14 = size < v13;
  packets = v12;
  if ( size < v13 )
    v13 = size;
  sizes = v13;
  if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_buffer.h", 90, ASSERT_TYPE_ASSERT, "(size >= packet->size)", (const char *)&queryFormat, "size >= packet->size") )
    __debugbreak();
  memcpy_0(buffer, &v12[1], v13);
  bdReference<bdAddrHandle>::operator=(outFrom, &v12->addr);
  PacketStream<NetPacket,1288,32768,0>::Release(&v10->m_stream, (const NetPacket *const *)&packets, 1, &sizes);
  _InterlockedExchangeAdd((volatile signed __int32 *)&outFrom->m_ptr->m_refCount, 0xFFFFFFFF);
  return (unsigned int)sizes;
}

/*
==============
NetLoopback::SendTo
==============
*/
__int64 NetLoopback::SendTo(NetLoopback *this, netsrc_t netId, const void *data, int length, const bdReference<bdAddrHandle> *addrHandle, NetPingInfo *info)
{
  NetBuffer<32768,0> *Buffer; 
  int lengtha; 

  Buffer = NetLoopback::GetBuffer(this, netId);
  if ( PacketStream<NetPacket,1288,32768,0>::WriteableAt(&Buffer->m_stream, Buffer->m_stream.m_writeOffset, length) )
  {
    info->sockTicks = NetPing::Timestamp();
    NetBuffer<32768,0>::Write(Buffer, addrHandle, NULL, data, length);
    return (unsigned int)length;
  }
  else
  {
    lengtha = 0x8000;
    Com_PrintError(131097, "[NET] Failed to write %d bytes to loopback buffer - free %d/%d\n", (unsigned int)length, 0x8000 - Buffer->m_stream.m_writeOffset + Buffer->m_stream.m_readOffset, lengtha);
    return 4294967294i64;
  }
}

