/*
==============
NetChannelBuffer::Open
==============
*/

NetChannel *__fastcall NetChannelBuffer::Open(NetChannelBuffer *this, NetConnection *connection)
{
  return ?Open@NetChannelBuffer@@QEAAPEAVNetChannel@@PEAVNetConnection@@@Z(this, connection);
}

/*
==============
NetChannelBuffer::Get
==============
*/

NetChannel *__fastcall NetChannelBuffer::Get(NetChannelBuffer *this, int index)
{
  return ?Get@NetChannelBuffer@@QEAAPEAVNetChannel@@H@Z(this, index);
}

/*
==============
NetChannelBuffer::Reset
==============
*/

void __fastcall NetChannelBuffer::Reset(NetChannelBuffer *this, NetThread *thread)
{
  ?Reset@NetChannelBuffer@@QEAAXPEAVNetThread@@@Z(this, thread);
}

/*
==============
NetChannelBuffer::Close
==============
*/

void __fastcall NetChannelBuffer::Close(NetChannelBuffer *this, NetChannel *channel)
{
  ?Close@NetChannelBuffer@@QEAAXPEAVNetChannel@@@Z(this, channel);
}

/*
==============
NetChannelBuffer::IsOpen
==============
*/

bool __fastcall NetChannelBuffer::IsOpen(NetChannelBuffer *this, int index)
{
  return ?IsOpen@NetChannelBuffer@@QEBA_NH@Z(this, index);
}

/*
==============
NetChannelBuffer::Close
==============
*/
void NetChannelBuffer::Close(NetChannelBuffer *this, NetChannel *channel)
{
  NetThread *m_thread; 
  NetChannel *request; 

  if ( !NetChannel::RemoveReference(channel) )
  {
    m_thread = this->m_thread;
    request = channel;
    NetThread::SendRequest(m_thread, 1, &request, 8, NULL);
  }
}

/*
==============
NetChannelBuffer::Get
==============
*/
NetChannel *NetChannelBuffer::Get(NetChannelBuffer *this, int index)
{
  __int64 v2; 
  int v6; 

  v2 = index;
  if ( (unsigned int)index >= 0x30 )
  {
    v6 = 48;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel_buffer.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 24 + 24 ) )", "index doesn't index NET_CHANNEL_BUFFER_SIZE\n\t%i not in [0, %i)", index, v6) )
      __debugbreak();
  }
  return (NetChannel *)((char *)this + 24 * v2);
}

/*
==============
NetChannelBuffer::IsOpen
==============
*/
bool NetChannelBuffer::IsOpen(NetChannelBuffer *this, int index)
{
  __int64 v2; 
  int v6; 

  v2 = index;
  if ( (unsigned int)index >= 0x30 )
  {
    v6 = 48;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel_buffer.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 24 + 24 ) )", "index doesn't index NET_CHANNEL_BUFFER_SIZE\n\t%i not in [0, %i)", index, v6) )
      __debugbreak();
  }
  return NetChannel::IsOpen(&this->m_channels[v2]);
}

/*
==============
NetChannelBuffer::Open
==============
*/
NetChannel *NetChannelBuffer::Open(NetChannelBuffer *this, NetConnection *connection)
{
  int v4; 
  int v5; 
  NetChannel *v6; 
  NetEndpoint *Endpoint; 
  const bdReference<bdCommonAddr> *CommonAddr; 
  NetEndpoint *v9; 
  netsrc_t RemoteId; 
  netsrc_t LocalId; 
  netsrc_t NetId; 
  netsrc_t v13; 
  NetEndpoint *v14; 

  v4 = -1;
  if ( NetConnection::IsLocal(connection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel_buffer.cpp", 26, ASSERT_TYPE_ASSERT, "(!connection->IsLocal())", "%s\n\tNo resources should be allocated for local connections", "!connection->IsLocal()") )
    __debugbreak();
  v5 = 0;
  while ( 1 )
  {
    v6 = &this->m_channels[v5];
    if ( !NetChannel::IsOpen(v6) )
    {
      if ( NetChannel::IsClosed(v6) && v4 == -1 )
        v4 = v5;
      goto LABEL_21;
    }
    Endpoint = (NetEndpoint *)NetChannel::GetEndpoint(v6);
    CommonAddr = NetEndpoint::GetCommonAddr(Endpoint);
    v9 = NetConnection::GetEndpoint(connection);
    if ( CommonAddr->m_ptr == NetEndpoint::GetCommonAddr(v9)->m_ptr )
    {
      RemoteId = NetChannel::GetRemoteId(&this->m_channels[v5]);
      if ( RemoteId == NetConnection::GetNetId(connection) )
      {
        LocalId = NetChannel::GetLocalId(&this->m_channels[v5]);
        if ( LocalId == NetConnection::GetLocalId(connection) )
          break;
      }
    }
LABEL_21:
    if ( ++v5 >= 48 )
      goto LABEL_10;
  }
  if ( v6 )
    goto LABEL_17;
LABEL_10:
  if ( !NET_IsConnectionThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel_buffer.cpp", 52, ASSERT_TYPE_ASSERT, "(NET_IsConnectionThread())", "%s\n\tOnly connection thread should register new channels", "NET_IsConnectionThread()") )
    __debugbreak();
  if ( v4 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel_buffer.cpp", 53, ASSERT_TYPE_ASSERT, "(freeIndex != -1)", "%s\n\tRan out of net channel slots", "freeIndex != NET_INVALID_INDEX") )
    __debugbreak();
  v6 = &this->m_channels[v4];
  NetId = NetConnection::GetNetId(connection);
  v13 = NetConnection::GetLocalId(connection);
  v14 = NetConnection::GetEndpoint(connection);
  NetChannel::Open(v6, v14, v13, NetId);
LABEL_17:
  NetChannel::AddReference(v6);
  return v6;
}

/*
==============
NetChannelBuffer::Reset
==============
*/
void NetChannelBuffer::Reset(NetChannelBuffer *this, NetThread *thread)
{
  NetChannelBuffer *v4; 
  __int64 v5; 

  v4 = this;
  v5 = 48i64;
  do
  {
    NetChannel::Reset(v4->m_channels);
    v4 = (NetChannelBuffer *)((char *)v4 + 24);
    --v5;
  }
  while ( v5 );
  this->m_thread = thread;
}

