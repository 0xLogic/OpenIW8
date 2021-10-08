/*
==============
NetBacklog::Reset
==============
*/

void __fastcall NetBacklog::Reset(NetBacklog *this, NetEndpointBuffer *buffer)
{
  ?Reset@NetBacklog@@QEAAXPEAVNetEndpointBuffer@@@Z(this, buffer);
}

/*
==============
NetBacklog::Graveyard
==============
*/

NetEndpoint *__fastcall NetBacklog::Graveyard(NetBacklog *this, const int backlogIndex, NetGraveyard *graveyard)
{
  return ?Graveyard@NetBacklog@@QEAAPEAVNetEndpoint@@HAEAVNetGraveyard@@@Z(this, backlogIndex, graveyard);
}

/*
==============
NetBacklog::IsBacklogIndex
==============
*/

int __fastcall NetBacklog::IsBacklogIndex(int index)
{
  return ?IsBacklogIndex@NetBacklog@@SAHH@Z(index);
}

/*
==============
NetBacklog::Remove
==============
*/

void __fastcall NetBacklog::Remove(NetBacklog *this, NetEndpoint *endpoint)
{
  ?Remove@NetBacklog@@AEAAXAEAVNetEndpoint@@@Z(this, endpoint);
}

/*
==============
NetBacklog::Add
==============
*/

NetEndpoint *__fastcall NetBacklog::Add(NetBacklog *this, const bdReference<bdAddrHandle> *addrHandle, NetSession *session)
{
  return ?Add@NetBacklog@@QEAAPEAVNetEndpoint@@AEBV?$bdReference@VbdAddrHandle@@@@PEAVNetSession@@@Z(this, addrHandle, session);
}

/*
==============
NetBacklog::Accept
==============
*/

NetEndpoint *__fastcall NetBacklog::Accept(NetBacklog *this, const int backlogIndex)
{
  return ?Accept@NetBacklog@@QEAAPEAVNetEndpoint@@H@Z(this, backlogIndex);
}

/*
==============
NetBacklog::NetBacklog
==============
*/

void __fastcall NetBacklog::NetBacklog(NetBacklog *this)
{
  ??0NetBacklog@@QEAA@XZ(this);
}

/*
==============
NetBacklog::NetBacklog
==============
*/
void NetBacklog::NetBacklog(NetBacklog *this)
{
  this->m_index = -1;
  this->m_buffer = NULL;
}

/*
==============
NetBacklog::Accept
==============
*/
NetEndpoint *NetBacklog::Accept(NetBacklog *this, const int backlogIndex)
{
  NetEndpoint *v4; 
  NetAddress *Address; 
  bdAddrHandle *m_ptr; 
  const char *String; 
  bdAddrHandle *v8; 
  NetSession *Session; 
  NetEndpoint *v10; 
  bdReference<bdAddrHandle> addrHandle; 

  if ( backlogIndex >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_backlog.cpp", 52, ASSERT_TYPE_ASSERT, "(IsBacklogIndex( backlogIndex ))", (const char *)&queryFormat, "IsBacklogIndex( backlogIndex )", -2i64) )
    __debugbreak();
  v4 = NetEndpointBuffer::Get(this->m_buffer, backlogIndex);
  Address = NetEndpoint::GetAddress(v4);
  m_ptr = NetAddress::GetHandle(Address)->m_ptr;
  addrHandle.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  String = NetEndpoint::GetString(v4);
  Com_Printf(25, "[NET] Accepting backlogged endpoint %s\n", String);
  v8 = addrHandle.m_ptr;
  if ( addrHandle.m_ptr )
  {
    Session = NetEndpoint::GetSession(v4);
    NetEndpoint::Disconnect(v4);
    NetEndpoint::RemoveReference(v4, 0);
    v10 = NetEndpointBuffer::Register(this->m_buffer, &addrHandle, Session);
    v8 = addrHandle.m_ptr;
  }
  else
  {
    v10 = NULL;
  }
  if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 0xFFFFFFFF) == 1 && addrHandle.m_ptr )
    ((void (__fastcall *)(bdAddrHandle *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr, 1i64);
  return v10;
}

/*
==============
NetBacklog::Add
==============
*/
NetEndpoint *NetBacklog::Add(NetBacklog *this, const bdReference<bdAddrHandle> *addrHandle, NetSession *session)
{
  NetEndpoint *v6; 
  const char *String; 
  const char *v8; 

  if ( !addrHandle->m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_backlog.cpp", 20, ASSERT_TYPE_ASSERT, "(addrHandle.notNull())", (const char *)&queryFormat, "addrHandle.notNull()") )
    __debugbreak();
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
    __debugbreak();
  v6 = NetEndpointBuffer::Get(this->m_buffer, _InterlockedIncrement((volatile signed __int32 *)this) % 256);
  if ( NetEndpoint::IsOpened(v6) )
  {
    String = NetEndpoint::GetString(v6);
    Com_PrintWarning(131097, "[NET] Backlog slot was not empty - clearing endpoint %s\n", String);
    NetEndpoint::Disconnect(v6);
    NetEndpoint::RemoveReference(v6, 0);
  }
  NetEndpoint::Open(v6, addrHandle, session);
  NetEndpoint::AddReference(v6);
  NetEndpoint::Connect(v6);
  v8 = NetEndpoint::GetString(v6);
  Com_Printf(25, "[NET] Adding endpoint %s to backlog\n", v8);
  return v6;
}

/*
==============
NetBacklog::Graveyard
==============
*/
NetEndpoint *NetBacklog::Graveyard(NetBacklog *this, const int backlogIndex, NetGraveyard *graveyard)
{
  NetEndpoint *v6; 
  NetAddress *Address; 
  bdAddrHandle *m_ptr; 
  const char *String; 
  NetSession *Session; 
  NetEndpoint *v11; 
  bdReference<bdAddrHandle> addrHandle; 

  if ( backlogIndex >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_backlog.cpp", 52, ASSERT_TYPE_ASSERT, "(IsBacklogIndex( backlogIndex ))", (const char *)&queryFormat, "IsBacklogIndex( backlogIndex )", -2i64) )
    __debugbreak();
  v6 = NetEndpointBuffer::Get(this->m_buffer, backlogIndex);
  Address = NetEndpoint::GetAddress(v6);
  m_ptr = NetAddress::GetHandle(Address)->m_ptr;
  addrHandle.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  String = NetEndpoint::GetString(v6);
  Com_Printf(25, "[NET] Accepting backlogged endpoint %s\n", String);
  if ( addrHandle.m_ptr )
  {
    Session = NetEndpoint::GetSession(v6);
    NetEndpoint::Disconnect(v6);
    NetEndpoint::RemoveReference(v6, 0);
    v11 = NetEndpointBuffer::Register(this->m_buffer, &addrHandle, Session);
    if ( addrHandle.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( addrHandle.m_ptr )
        ((void (__fastcall *)(bdAddrHandle *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr, 1i64);
      addrHandle.m_ptr = NULL;
    }
    if ( !v11 || NetGraveyard::Add(graveyard, v11) )
      return v11;
    NetEndpoint::Close(v11);
  }
  return 0i64;
}

/*
==============
NetBacklog::IsBacklogIndex
==============
*/
_BOOL8 NetBacklog::IsBacklogIndex(int index)
{
  return index < 256;
}

/*
==============
NetBacklog::Remove
==============
*/
void NetBacklog::Remove(NetBacklog *this, NetEndpoint *endpoint)
{
  NetEndpoint::Disconnect(endpoint);
  NetEndpoint::RemoveReference(endpoint, 0);
}

/*
==============
NetBacklog::Reset
==============
*/
void NetBacklog::Reset(NetBacklog *this, NetEndpointBuffer *buffer)
{
  int i; 
  NetEndpoint *v4; 

  this->m_buffer = buffer;
  this->m_index = -1;
  for ( i = 0; i < 256; ++i )
  {
    v4 = NetEndpointBuffer::Get(this->m_buffer, i);
    if ( NetEndpoint::IsOpened(v4) )
      NetEndpoint::RemoveReference(v4, 0);
  }
}

