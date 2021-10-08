/*
==============
NetConnectionBuffer::NetConnectionBuffer
==============
*/

void __fastcall NetConnectionBuffer::NetConnectionBuffer(NetConnectionBuffer *this)
{
  ??0NetConnectionBuffer@@QEAA@XZ(this);
}

/*
==============
NetConnectionBuffer::Count
==============
*/

int __fastcall NetConnectionBuffer::Count(NetConnectionBuffer *this)
{
  return ?Count@NetConnectionBuffer@@QEBAHXZ(this);
}

/*
==============
NetConnectionBuffer::ShouldPrint
==============
*/

bool __fastcall NetConnectionBuffer::ShouldPrint(NetConnectionBuffer *this, const NetConnection *connection)
{
  return ?ShouldPrint@NetConnectionBuffer@@AEBA_NPEBVNetConnection@@@Z(this, connection);
}

/*
==============
NetConnectionBuffer::RequestPrint
==============
*/

void __fastcall NetConnectionBuffer::RequestPrint(NetConnectionBuffer *this)
{
  ?RequestPrint@NetConnectionBuffer@@AEAAXXZ(this);
}

/*
==============
NetConnectionBuffer::Unregister
==============
*/

void __fastcall NetConnectionBuffer::Unregister(NetConnectionBuffer *this, NetConnection *connection)
{
  ?Unregister@NetConnectionBuffer@@QEAAXPEAVNetConnection@@@Z(this, connection);
}

/*
==============
NetConnectionBuffer::Exists
==============
*/

bool __fastcall NetConnectionBuffer::Exists(NetConnectionBuffer *this, const NetConnection *connection)
{
  return ?Exists@NetConnectionBuffer@@AEBA_NPEBVNetConnection@@@Z(this, connection);
}

/*
==============
NetConnectionBuffer::Register
==============
*/

void __fastcall NetConnectionBuffer::Register(NetConnectionBuffer *this, NetConnection *connection)
{
  ?Register@NetConnectionBuffer@@QEAAXPEAVNetConnection@@@Z(this, connection);
}

/*
==============
NetConnectionBuffer::Reset
==============
*/

void __fastcall NetConnectionBuffer::Reset(NetConnectionBuffer *this)
{
  ?Reset@NetConnectionBuffer@@QEAAXXZ(this);
}

/*
==============
NetConnectionBuffer::Print
==============
*/

void __fastcall NetConnectionBuffer::Print(NetConnectionBuffer *this)
{
  ?Print@NetConnectionBuffer@@QEBAXXZ(this);
}

/*
==============
NetConnectionBuffer::FindIndex
==============
*/

int __fastcall NetConnectionBuffer::FindIndex(NetConnectionBuffer *this, const NetConnection *connection)
{
  return ?FindIndex@NetConnectionBuffer@@AEBAHPEBVNetConnection@@@Z(this, connection);
}

/*
==============
NetConnectionBuffer::Frame
==============
*/

void __fastcall NetConnectionBuffer::Frame(NetConnectionBuffer *this)
{
  ?Frame@NetConnectionBuffer@@QEAAXXZ(this);
}

/*
==============
NetConnectionBuffer::NetConnectionBuffer
==============
*/
void NetConnectionBuffer::NetConnectionBuffer(NetConnectionBuffer *this)
{
  void *volatile *m_connections; 
  __int64 v2; 

  m_connections = this->m_connections;
  this->m_connectionCount = 0;
  v2 = 602i64;
  do
  {
    *m_connections++ = NULL;
    --v2;
  }
  while ( v2 );
  this->m_printPending = 0;
  this->m_printContext = -1;
}

/*
==============
NetConnectionBuffer::Count
==============
*/
__int64 NetConnectionBuffer::Count(NetConnectionBuffer *this)
{
  return (unsigned int)this->m_connectionCount;
}

/*
==============
NetConnectionBuffer::Exists
==============
*/
_BOOL8 NetConnectionBuffer::Exists(NetConnectionBuffer *this, const NetConnection *connection)
{
  int v2; 
  void *volatile *m_connections; 
  __int64 v4; 

  v2 = 0;
  m_connections = this->m_connections;
  v4 = 0i64;
  while ( *(const NetConnection **)m_connections != connection )
  {
    ++v2;
    ++v4;
    ++m_connections;
    if ( v4 >= 602 )
      return 0i64;
  }
  return v2 >= 0;
}

/*
==============
NetConnectionBuffer::FindIndex
==============
*/
__int64 NetConnectionBuffer::FindIndex(NetConnectionBuffer *this, const NetConnection *connection)
{
  __int64 result; 
  void *volatile *m_connections; 
  __int64 v4; 

  result = 0i64;
  m_connections = this->m_connections;
  v4 = 0i64;
  while ( *(const NetConnection **)m_connections != connection )
  {
    result = (unsigned int)(result + 1);
    ++v4;
    ++m_connections;
    if ( v4 >= 602 )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
NetConnectionBuffer::Frame
==============
*/
void NetConnectionBuffer::Frame(NetConnectionBuffer *this)
{
  if ( this->m_printPending )
  {
    NetConnectionBuffer::Print(this);
    this->m_printPending = 0;
    this->m_printContext = -1;
  }
}

/*
==============
NetConnectionBuffer::Print
==============
*/
void NetConnectionBuffer::Print(NetConnectionBuffer *this)
{
  NetConnection **m_connections; 
  int v6; 
  NetConnection *v7; 
  ThreadContext m_printContext; 
  int Type; 
  bool v10; 
  NetEndpoint *Endpoint; 
  NetSession *Session; 
  const char *String; 
  const char *v14; 
  NetAddress *Address; 
  const char *StateString; 
  const char *TypeString; 
  __int64 v27; 
  unsigned int m_hash; 
  char v29[32]; 
  char v30[32]; 
  char v31[40]; 
  char dest[64]; 

  if ( this->m_printContext == Sys_GetCurrentThreadContext() )
  {
    __asm { vmovaps [rsp+140h+var_30], xmm6 }
    Sys_Milliseconds();
    Com_Printf(25, "[NET] ========== Network Connections (%d) ==========\n", (unsigned int)this->m_connectionCount);
    Com_Printf(25, " %-5s%-12s%-36s%-20s%-20s%-9s%-10s%-10s\n", "IDX", "TYPE", "ADDRESS", "SECID", "ADDRESS STATE", "CA HASH", "LAST SENT", "LAST RECV");
    __asm { vmovss  xmm6, cs:__real@3a83126f }
    m_connections = (NetConnection **)this->m_connections;
    v6 = 0;
    while ( 1 )
    {
      v7 = *m_connections;
      if ( !*m_connections )
        goto LABEL_18;
      m_printContext = this->m_printContext;
      if ( m_printContext )
        break;
      Type = NetConnection::GetType(*m_connections);
      if ( Type > 0 )
      {
        if ( Type <= 3 )
          goto LABEL_13;
        if ( Type <= 5 )
        {
          v10 = NetConnection::GetNetId(v7) == NS_MAXCLIENTS;
LABEL_12:
          if ( v10 )
          {
LABEL_13:
            Endpoint = NetConnection::GetEndpoint(v7);
            Session = NetEndpoint::GetSession(Endpoint);
            String = NetConnection::GetString(v7);
            Core_strcpy(dest, 0x40ui64, String);
            v14 = NetSession::GetString(Session);
            Core_strcpy(v31, 0x20ui64, v14);
            m_hash = NetEndpoint::GetCommonAddr(Endpoint)->m_ptr->m_hash;
            strcpy(v30, "never");
            memset(&v30[6], 0, 26);
            if ( NetEndpoint::GetLastSent(Endpoint) > 0 )
            {
              NetEndpoint::GetLastSent(Endpoint);
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, ecx
                vmulss  xmm1, xmm0, xmm6
                vcvtss2sd xmm2, xmm1, xmm1
                vmovq   r8, xmm2
              }
              Com_sprintf<32>((char (*)[32])v30, "%.3f", *(double *)&_XMM2);
            }
            strcpy(v29, "never");
            memset(&v29[6], 0, 26);
            if ( NetEndpoint::GetLastRecv(Endpoint) > 0 )
            {
              NetEndpoint::GetLastRecv(Endpoint);
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, edx
                vmulss  xmm1, xmm0, xmm6
                vcvtss2sd xmm2, xmm1, xmm1
                vmovq   r8, xmm2
              }
              Com_sprintf<32>((char (*)[32])v29, "%.3f", *(double *)&_XMM2);
            }
            Address = NetEndpoint::GetAddress(Endpoint);
            StateString = NetAddress::GetStateString(Address);
            TypeString = NetConnection::GetTypeString(v7);
            LODWORD(v27) = m_hash;
            Com_Printf(25, " %03d. %-12s%-36s%-20s%-20s%-9x%-10s%-10s\n", (unsigned int)v6, TypeString, dest, v31, StateString, v27, v30, v29);
          }
        }
      }
LABEL_18:
      ++v6;
      ++m_connections;
      if ( v6 >= 602 )
      {
        Com_Printf(25, "[NET] ========== End Network Connections ==========\n");
        __asm { vmovaps xmm6, [rsp+140h+var_30] }
        return;
      }
    }
    if ( m_printContext != THREAD_CONTEXT_SERVER || (unsigned int)(NetConnection::GetType(*m_connections) - 4) > 1 )
      goto LABEL_18;
    v10 = NetConnection::GetNetId(v7) != NS_MAXCLIENTS;
    goto LABEL_12;
  }
}

/*
==============
NetConnectionBuffer::Register
==============
*/
void NetConnectionBuffer::Register(NetConnectionBuffer *this, NetConnection *connection)
{
  int v2; 
  void *volatile *m_connections; 
  int v5; 
  __int64 v6; 
  void *volatile *v7; 
  const char *String; 
  const char *v10; 
  volatile int m_connectionCount; 
  int v12; 

  v2 = 0;
  m_connections = this->m_connections;
  v5 = 0;
  v6 = 0i64;
  v7 = this->m_connections;
  while ( *(NetConnection **)v7 != connection )
  {
    ++v5;
    ++v6;
    ++v7;
    if ( v6 >= 602 )
      goto LABEL_6;
  }
  if ( v5 >= 0 )
    return;
LABEL_6:
  if ( this->m_connectionCount >= 0x25Au )
  {
    v12 = 602;
    m_connectionCount = this->m_connectionCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection_buffer.cpp", 54, ASSERT_TYPE_ASSERT, "(unsigned)( m_connectionCount ) < (unsigned)( ( 2 * 200 + 200 + 2 ) )", "m_connectionCount doesn't index NET_CONNECTION_BUFFER_SIZE\n\t%i not in [0, %i)", m_connectionCount, v12) )
      __debugbreak();
  }
  while ( *m_connections || _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_connections[v2], (signed __int64)connection, 0i64) )
  {
    ++v2;
    ++m_connections;
    if ( v2 >= 602 )
    {
      String = NetConnection::GetString(connection);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection_buffer.cpp", 71, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not register connection %s - connection buffer full", String) )
        __debugbreak();
      v10 = NetConnection::GetString(connection);
      Com_PrintError(25, "Could not register connection %s - connection buffer full\n", v10);
      return;
    }
  }
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
    __debugbreak();
  _InterlockedIncrement(&this->m_connectionCount);
  if ( !this->m_printPending )
  {
    this->m_printPending = 1;
    this->m_printContext = Sys_GetCurrentThreadContext();
  }
}

/*
==============
NetConnectionBuffer::RequestPrint
==============
*/
void NetConnectionBuffer::RequestPrint(NetConnectionBuffer *this)
{
  if ( !this->m_printPending )
  {
    this->m_printPending = 1;
    this->m_printContext = Sys_GetCurrentThreadContext();
  }
}

/*
==============
NetConnectionBuffer::Reset
==============
*/
void NetConnectionBuffer::Reset(NetConnectionBuffer *this)
{
  void *volatile *m_connections; 
  __int64 v2; 

  m_connections = this->m_connections;
  this->m_connectionCount = 0;
  v2 = 602i64;
  do
  {
    *m_connections++ = NULL;
    --v2;
  }
  while ( v2 );
  this->m_printPending = 0;
  this->m_printContext = -1;
}

/*
==============
NetConnectionBuffer::ShouldPrint
==============
*/
char NetConnectionBuffer::ShouldPrint(NetConnectionBuffer *this, const NetConnection *connection)
{
  ThreadContext m_printContext; 
  int Type; 

  if ( connection )
  {
    m_printContext = this->m_printContext;
    if ( m_printContext )
    {
      if ( m_printContext == THREAD_CONTEXT_SERVER && (unsigned int)(NetConnection::GetType((NetConnection *)connection) - 4) <= 1 )
        return NetConnection::GetNetId((NetConnection *)connection) != NS_MAXCLIENTS;
    }
    else
    {
      Type = NetConnection::GetType((NetConnection *)connection);
      if ( Type > 0 )
      {
        if ( Type <= 3 )
          return 1;
        if ( Type <= 5 )
          return NetConnection::GetNetId((NetConnection *)connection) == NS_MAXCLIENTS;
      }
    }
  }
  return 0;
}

/*
==============
NetConnectionBuffer::Unregister
==============
*/
void NetConnectionBuffer::Unregister(NetConnectionBuffer *this, NetConnection *connection)
{
  int v4; 
  __int64 v5; 
  void *volatile *m_connections; 
  void *volatile *v7; 
  int v8; 
  __int64 v9; 

  v4 = 0;
  v5 = 0i64;
  m_connections = this->m_connections;
  v7 = this->m_connections;
  while ( *(NetConnection **)v7 != connection )
  {
    ++v4;
    ++v5;
    ++v7;
    if ( v5 >= 602 )
      goto LABEL_6;
  }
  if ( v4 >= 0 )
    goto LABEL_8;
LABEL_6:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection_buffer.cpp", 78, ASSERT_TYPE_ASSERT, "(Exists( connection ))", "%s\n\tConnection should have been previously registered", "Exists( connection )") )
    __debugbreak();
LABEL_8:
  v8 = 0;
  v9 = 0i64;
  while ( *(NetConnection **)m_connections != connection )
  {
    ++v8;
    ++v9;
    ++m_connections;
    if ( v9 >= 602 )
      return;
  }
  if ( v8 != -1 )
  {
    this->m_connections[v8] = NULL;
    if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
      __debugbreak();
    _InterlockedDecrement(&this->m_connectionCount);
    if ( !this->m_printPending )
    {
      this->m_printPending = 1;
      this->m_printContext = Sys_GetCurrentThreadContext();
    }
  }
}

