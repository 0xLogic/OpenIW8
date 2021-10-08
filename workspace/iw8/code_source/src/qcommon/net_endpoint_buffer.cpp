/*
==============
NetEndpointBuffer::Unregister
==============
*/

void __fastcall NetEndpointBuffer::Unregister(NetEndpointBuffer *this, const bdReference<bdAddrHandle> *addrHandle)
{
  ?Unregister@NetEndpointBuffer@@QEAAXAEBV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
NetEndpointBuffer::Register
==============
*/

NetEndpoint *__fastcall NetEndpointBuffer::Register(NetEndpointBuffer *this, const bdReference<bdAddrHandle> *addrHandle, NetSession *session)
{
  return ?Register@NetEndpointBuffer@@QEAAPEAVNetEndpoint@@AEBV?$bdReference@VbdAddrHandle@@@@PEAVNetSession@@@Z(this, addrHandle, session);
}

/*
==============
NetEndpointBuffer::Get
==============
*/

const NetEndpoint *__fastcall NetEndpointBuffer::Get(NetEndpointBuffer *this, const int index)
{
  return ?Get@NetEndpointBuffer@@QEBAAEBVNetEndpoint@@H@Z(this, index);
}

/*
==============
NetEndpointBuffer::NetEndpointBuffer
==============
*/

void __fastcall NetEndpointBuffer::NetEndpointBuffer(NetEndpointBuffer *this)
{
  ??0NetEndpointBuffer@@QEAA@XZ(this);
}

/*
==============
NetEndpointBuffer::Get
==============
*/

NetEndpoint *__fastcall NetEndpointBuffer::Get(NetEndpointBuffer *this, const int index)
{
  return ?Get@NetEndpointBuffer@@QEAAAEAVNetEndpoint@@H@Z(this, index);
}

/*
==============
NetEndpointBuffer::Reset
==============
*/

void __fastcall NetEndpointBuffer::Reset(NetEndpointBuffer *this)
{
  ?Reset@NetEndpointBuffer@@QEAAXXZ(this);
}

/*
==============
NetEndpointBuffer::Exists
==============
*/

bool __fastcall NetEndpointBuffer::Exists(NetEndpointBuffer *this, const bdReference<bdAddrHandle> *addrHandle)
{
  return ?Exists@NetEndpointBuffer@@AEAA_NAEBV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
NetEndpointBuffer::NetEndpointBuffer
==============
*/
void NetEndpointBuffer::NetEndpointBuffer(NetEndpointBuffer *this)
{
  int v2; 
  NetEndpointBuffer *v3; 

  `eh vector constructor iterator'(this, 0x190ui64, 0x291ui64, (void (__fastcall *)(void *))NetEndpoint::NetEndpoint, (void (__fastcall *)(void *))NetEndpoint::~NetEndpoint);
  memset_0(this, 0, sizeof(NetEndpointBuffer));
  v2 = 0;
  v3 = this;
  do
  {
    v3->m_endpoints[0].m_address.m_index = v2;
    v3 = (NetEndpointBuffer *)((char *)v3 + 400);
    ++v2;
  }
  while ( v2 < 657 );
}

/*
==============
NetEndpointBuffer::Exists
==============
*/
char NetEndpointBuffer::Exists(NetEndpointBuffer *this, const bdReference<bdAddrHandle> *addrHandle)
{
  int v4; 
  NetAddress *Address; 

  v4 = 0;
  while ( 1 )
  {
    Address = NetEndpoint::GetAddress(&this->m_endpoints[v4]);
    if ( NetAddress::GetHandle(Address)->m_ptr == addrHandle->m_ptr && NetEndpoint::IsBound(&this->m_endpoints[v4]) )
      break;
    if ( ++v4 >= 657 )
      return 0;
  }
  return 1;
}

/*
==============
NetEndpointBuffer::Get
==============
*/
NetEndpoint *NetEndpointBuffer::Get(NetEndpointBuffer *this, const int index)
{
  __int64 v2; 
  int v6; 

  v2 = index;
  if ( (unsigned int)index >= 0x291 )
  {
    v6 = 657;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint_buffer.cpp", 86, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( ( 2 * 200 + 1 ) + 256 ) )", "index doesn't index NET_ENDPOINT_BUFFER_SIZE\n\t%i not in [0, %i)", index, v6) )
      __debugbreak();
  }
  return (NetEndpoint *)((char *)this + 400 * v2);
}

/*
==============
NetEndpointBuffer::Get
==============
*/
const NetEndpoint *NetEndpointBuffer::Get(NetEndpointBuffer *this, const int index)
{
  __int64 v2; 
  int v6; 

  v2 = index;
  if ( (unsigned int)index >= 0x291 )
  {
    v6 = 657;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint_buffer.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( ( 2 * 200 + 1 ) + 256 ) )", "index doesn't index NET_ENDPOINT_BUFFER_SIZE\n\t%i not in [0, %i)", index, v6) )
      __debugbreak();
  }
  return (const NetEndpoint *)((char *)this + 400 * v2);
}

/*
==============
NetEndpointBuffer::Register
==============
*/
NetEndpoint *NetEndpointBuffer::Register(NetEndpointBuffer *this, const bdReference<bdAddrHandle> *addrHandle, NetSession *session)
{
  int v6; 
  NetAddress *Address; 
  int v8; 
  const char *v9; 

  if ( !addrHandle->m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint_buffer.cpp", 39, ASSERT_TYPE_ASSERT, "(addrHandle.notNull())", "%s\n\tAttempting to register already nulled address handle", "addrHandle.notNull()") )
    __debugbreak();
  if ( !NET_IsConnectionThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint_buffer.cpp", 40, ASSERT_TYPE_ASSERT, "(NET_IsConnectionThread())", "%s\n\tOnly connection thread can register new address handles", "NET_IsConnectionThread()") )
    __debugbreak();
  v6 = 0;
  while ( 1 )
  {
    Address = NetEndpoint::GetAddress(&this->m_endpoints[v6]);
    if ( NetAddress::GetHandle(Address)->m_ptr == addrHandle->m_ptr && NetEndpoint::IsBound(&this->m_endpoints[v6]) )
      break;
    if ( ++v6 >= 657 )
      goto LABEL_14;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint_buffer.cpp", 41, ASSERT_TYPE_ASSERT, "(!Exists( addrHandle ))", "%s\n\tAttempting to register an already registered address handle", "!Exists( addrHandle )") )
    __debugbreak();
LABEL_14:
  v8 = 256;
  while ( NetEndpoint::IsOpened(&this->m_endpoints[v8]) )
  {
    if ( ++v8 >= 657 )
      goto LABEL_19;
  }
  if ( v8 != -1 )
  {
    NetEndpoint::Open(&this->m_endpoints[v8], addrHandle, session);
    return (NetEndpoint *)((char *)this + 400 * v8);
  }
LABEL_19:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint_buffer.cpp", 52, ASSERT_TYPE_ASSERT, "(registerIndex != -1)", (const char *)&queryFormat, "registerIndex != NET_INVALID_INDEX") )
    __debugbreak();
  v9 = dwAddrHandleToString(addrHandle);
  Com_PrintError(131097, "[NET] Failed to register address handle %s - no free slots\n", v9);
  return 0i64;
}

/*
==============
NetEndpointBuffer::Reset
==============
*/
void NetEndpointBuffer::Reset(NetEndpointBuffer *this)
{
  __int64 v2; 

  if ( !NET_IsConnectionThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint_buffer.cpp", 26, ASSERT_TYPE_ASSERT, "(NET_IsConnectionThread())", (const char *)&queryFormat, "NET_IsConnectionThread()") )
    __debugbreak();
  v2 = 657i64;
  do
  {
    NetEndpoint::Close(this->m_endpoints);
    this = (NetEndpointBuffer *)((char *)this + 400);
    --v2;
  }
  while ( v2 );
}

/*
==============
NetEndpointBuffer::Unregister
==============
*/
void NetEndpointBuffer::Unregister(NetEndpointBuffer *this, const bdReference<bdAddrHandle> *addrHandle)
{
  int v4; 
  NetAddress *Address; 

  if ( !NET_IsConnectionThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint_buffer.cpp", 70, ASSERT_TYPE_ASSERT, "(NET_IsConnectionThread())", (const char *)&queryFormat, "NET_IsConnectionThread()") )
    __debugbreak();
  v4 = 256;
  while ( 1 )
  {
    Address = NetEndpoint::GetAddress(&this->m_endpoints[v4]);
    if ( NetAddress::GetHandle(Address)->m_ptr == addrHandle->m_ptr )
      break;
    if ( ++v4 >= 657 )
      return;
  }
  NetEndpoint::Close(&this->m_endpoints[v4]);
}

