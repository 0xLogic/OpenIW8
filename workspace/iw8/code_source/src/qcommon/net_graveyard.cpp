/*
==============
NetGraveyard::Remove
==============
*/

void __fastcall NetGraveyard::Remove(NetGraveyard *this, const NetEndpoint *endpoint, bool keepOpen)
{
  ?Remove@NetGraveyard@@QEAAXPEBVNetEndpoint@@_N@Z(this, endpoint, keepOpen);
}

/*
==============
NetGraveyard::Add
==============
*/

bool __fastcall NetGraveyard::Add(NetGraveyard *this, NetEndpoint *endpoint)
{
  return ?Add@NetGraveyard@@QEAA_NPEAVNetEndpoint@@@Z(this, endpoint);
}

/*
==============
NetGraveyard::Frame
==============
*/

void __fastcall NetGraveyard::Frame(NetGraveyard *this)
{
  ?Frame@NetGraveyard@@QEAAXXZ(this);
}

/*
==============
NetGraveyard::CanRemove
==============
*/

bool __fastcall NetGraveyard::CanRemove(NetGraveyard *this, const NetEndpoint *endpoint)
{
  return ?CanRemove@NetGraveyard@@AEBA_NPEBVNetEndpoint@@@Z(this, endpoint);
}

/*
==============
NetGraveyard::Remove
==============
*/

void __fastcall NetGraveyard::Remove(NetGraveyard *this, const int graveyardIndex, bool keepOpen)
{
  ?Remove@NetGraveyard@@AEAAXH_N@Z(this, graveyardIndex, keepOpen);
}

/*
==============
NetGraveyard::Find
==============
*/

int __fastcall NetGraveyard::Find(NetGraveyard *this, const NetEndpoint *endpoint)
{
  return ?Find@NetGraveyard@@AEBAHPEBVNetEndpoint@@@Z(this, endpoint);
}

/*
==============
NetGraveyard::Reset
==============
*/

void __fastcall NetGraveyard::Reset(NetGraveyard *this)
{
  ?Reset@NetGraveyard@@QEAAXXZ(this);
}

/*
==============
NetGraveyard::NetGraveyard
==============
*/

void __fastcall NetGraveyard::NetGraveyard(NetGraveyard *this)
{
  ??0NetGraveyard@@QEAA@XZ(this);
}

/*
==============
NetGraveyard::NetGraveyard
==============
*/
void NetGraveyard::NetGraveyard(NetGraveyard *this)
{
  this->m_size = 0;
  memset_0(this->m_buffer, 0, sizeof(this->m_buffer));
}

/*
==============
NetGraveyard::Add
==============
*/
char NetGraveyard::Add(NetGraveyard *this, NetEndpoint *endpoint)
{
  int m_size; 
  int v5; 
  NetEndpoint **m_buffer; 
  const char *String; 

  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 36, ASSERT_TYPE_ASSERT, "(endpoint != 0)", (const char *)&queryFormat, "endpoint != NULL") )
    __debugbreak();
  if ( this->m_size > 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 37, ASSERT_TYPE_ASSERT, "(m_size <= 24)", (const char *)&queryFormat, "m_size <= NET_GRAVEYARD_BUFFER_SIZE") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 38, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  m_size = this->m_size;
  v5 = 0;
  if ( this->m_size <= 0 )
    goto LABEL_16;
  m_buffer = this->m_buffer;
  while ( *m_buffer != endpoint )
  {
    ++v5;
    ++m_buffer;
    if ( v5 >= m_size )
      goto LABEL_16;
  }
  if ( v5 < 0 )
  {
LABEL_16:
    String = NetEndpoint::GetString(endpoint);
    if ( m_size == 24 )
    {
      Com_PrintWarning(131097, "[NET] Failed to add %s - graveyard full\n", String);
      return 0;
    }
    Com_Printf(25, "[NET] Adding endpoint %s to graveyard\n", String);
    NetEndpoint::AddReference(endpoint);
    NetEndpoint::Connect(endpoint);
    NetEndpoint::Graveyard(endpoint, 1);
    this->m_buffer[this->m_size++] = endpoint;
  }
  return 1;
}

/*
==============
NetGraveyard::CanRemove
==============
*/
bool NetGraveyard::CanRemove(NetGraveyard *this, const NetEndpoint *endpoint)
{
  NetEndpoint *v2; 
  NetAddress *Address; 
  bool IsActiveAddr; 
  int v5; 
  netadr_t outAddr; 

  v2 = (NetEndpoint *)endpoint;
  Address = (NetAddress *)NetEndpoint::GetAddress((NetEndpoint *)endpoint);
  NetAddress::GetNetadr(Address, &outAddr);
  IsActiveAddr = RMsg_IsActiveAddr(&outAddr, 1);
  LODWORD(v2) = NetEndpoint::GetLastRecv(v2);
  v5 = Sys_Milliseconds() - (_DWORD)v2;
  return !IsActiveAddr && v5 > net_graveyard_expiry->current.integer;
}

/*
==============
NetGraveyard::Find
==============
*/
__int64 NetGraveyard::Find(NetGraveyard *this, const NetEndpoint *endpoint)
{
  __int64 m_size; 
  unsigned int v3; 
  __int64 v4; 
  NetEndpoint **i; 

  m_size = this->m_size;
  v3 = 0;
  if ( m_size <= 0 )
    return 0xFFFFFFFFi64;
  v4 = 0i64;
  for ( i = this->m_buffer; *i != endpoint; ++i )
  {
    ++v3;
    if ( ++v4 >= m_size )
      return 0xFFFFFFFFi64;
  }
  return v3;
}

/*
==============
NetGraveyard::Frame
==============
*/
void NetGraveyard::Frame(NetGraveyard *this)
{
  int v2; 
  NetEndpoint **m_buffer; 
  NetEndpoint *v4; 
  NetAddress *Address; 
  bool IsActiveAddr; 
  int v7; 
  netadr_t outAddr; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 80, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 0;
  if ( this->m_size > 0 )
  {
    m_buffer = this->m_buffer;
    do
    {
      v4 = *m_buffer;
      Address = (NetAddress *)NetEndpoint::GetAddress(*m_buffer);
      NetAddress::GetNetadr(Address, &outAddr);
      IsActiveAddr = RMsg_IsActiveAddr(&outAddr, 1);
      LODWORD(v4) = NetEndpoint::GetLastRecv(v4);
      v7 = Sys_Milliseconds() - (_DWORD)v4;
      if ( IsActiveAddr || v7 <= net_graveyard_expiry->current.integer )
      {
        ++v2;
        ++m_buffer;
      }
      else
      {
        NetGraveyard::Remove(this, v2, 0);
      }
    }
    while ( v2 < this->m_size );
  }
}

/*
==============
NetGraveyard::Remove
==============
*/
void NetGraveyard::Remove(NetGraveyard *this, const int graveyardIndex, bool keepOpen)
{
  __int64 v3; 
  NetEndpoint **v6; 
  const char *String; 

  v3 = graveyardIndex;
  if ( (unsigned int)graveyardIndex >= 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 99, ASSERT_TYPE_ASSERT, "(unsigned)( graveyardIndex ) < (unsigned)( 24 )", "graveyardIndex doesn't index NET_GRAVEYARD_BUFFER_SIZE\n\t%i not in [0, %i)", graveyardIndex, 24) )
    __debugbreak();
  v6 = &this->m_buffer[v3];
  if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 100, ASSERT_TYPE_ASSERT, "(m_buffer[graveyardIndex] != 0)", (const char *)&queryFormat, "m_buffer[graveyardIndex] != NULL") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 101, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  String = NetEndpoint::GetString(*v6);
  Com_Printf(25, "[NET] Removing endpoint %s from graveyard\n", String);
  NetEndpoint::Graveyard(*v6, 0);
  NetEndpoint::Disconnect(*v6);
  NetEndpoint::RemoveReference(*v6, keepOpen);
  *v6 = NULL;
  --this->m_size;
  if ( 23 - (int)v3 > 0 )
    memmove_0(&this->m_buffer[v3], &this->m_buffer[(int)v3 + 1], 8i64 * (23 - (int)v3));
}

/*
==============
NetGraveyard::Remove
==============
*/
void NetGraveyard::Remove(NetGraveyard *this, const NetEndpoint *endpoint, bool keepOpen)
{
  unsigned int v3; 
  NetEndpoint **i; 
  NetEndpoint **v7; 
  const char *String; 

  v3 = 0;
  if ( this->m_size > 0 )
  {
    for ( i = this->m_buffer; *i != endpoint; ++i )
    {
      if ( (signed int)++v3 >= this->m_size )
        return;
    }
    if ( v3 >= 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 99, ASSERT_TYPE_ASSERT, "(unsigned)( graveyardIndex ) < (unsigned)( 24 )", "graveyardIndex doesn't index NET_GRAVEYARD_BUFFER_SIZE\n\t%i not in [0, %i)", v3, 24) )
      __debugbreak();
    v7 = &this->m_buffer[v3];
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 100, ASSERT_TYPE_ASSERT, "(m_buffer[graveyardIndex] != 0)", (const char *)&queryFormat, "m_buffer[graveyardIndex] != NULL") )
      __debugbreak();
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 101, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    String = NetEndpoint::GetString(*v7);
    Com_Printf(25, "[NET] Removing endpoint %s from graveyard\n", String);
    NetEndpoint::Graveyard(*v7, 0);
    NetEndpoint::Disconnect(*v7);
    NetEndpoint::RemoveReference(*v7, keepOpen);
    *v7 = NULL;
    --this->m_size;
    if ( (int)(23 - v3) > 0 )
      memmove_0(&this->m_buffer[v3], &this->m_buffer[v3 + 1], 8i64 * (int)(23 - v3));
  }
}

/*
==============
NetGraveyard::Reset
==============
*/
void NetGraveyard::Reset(NetGraveyard *this)
{
  int m_size; 
  int v3; 
  NetEndpoint **v4; 
  const char *String; 
  int v6; 
  __int64 v7; 
  __int64 v8; 

  m_size = this->m_size;
  if ( this->m_size > 0 )
  {
    do
    {
      v3 = m_size - 1;
      if ( (unsigned int)(m_size - 1) >= 0x18 )
      {
        LODWORD(v8) = 24;
        LODWORD(v7) = m_size - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 99, ASSERT_TYPE_ASSERT, "(unsigned)( graveyardIndex ) < (unsigned)( 24 )", "graveyardIndex doesn't index NET_GRAVEYARD_BUFFER_SIZE\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      v4 = (NetEndpoint **)((char *)this + 8 * m_size);
      if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 100, ASSERT_TYPE_ASSERT, "(m_buffer[graveyardIndex] != 0)", (const char *)&queryFormat, "m_buffer[graveyardIndex] != NULL") )
        __debugbreak();
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_graveyard.cpp", 101, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      String = NetEndpoint::GetString(*v4);
      Com_Printf(25, "[NET] Removing endpoint %s from graveyard\n", String);
      NetEndpoint::Graveyard(*v4, 0);
      NetEndpoint::Disconnect(*v4);
      NetEndpoint::RemoveReference(*v4, 0);
      *v4 = NULL;
      v6 = --this->m_size;
      if ( 23 - v3 > 0 )
      {
        memmove_0((char *)this + 8 * m_size, &this->m_buffer[m_size], 8i64 * (23 - v3));
        v6 = this->m_size;
      }
      m_size = v6;
    }
    while ( v6 > 0 );
  }
  memset_0(this->m_buffer, 0, sizeof(this->m_buffer));
}

