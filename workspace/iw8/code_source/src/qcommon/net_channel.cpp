/*
==============
NetChannel::AddReference
==============
*/

int __fastcall NetChannel::AddReference(NetChannel *this)
{
  return ?AddReference@NetChannel@@QEAAHXZ(this);
}

/*
==============
NetChannel::GetEndpoint
==============
*/

const NetEndpoint *__fastcall NetChannel::GetEndpoint(NetChannel *this)
{
  return ?GetEndpoint@NetChannel@@QEBAPEBVNetEndpoint@@XZ(this);
}

/*
==============
NetChannel::IsClosed
==============
*/

bool __fastcall NetChannel::IsClosed(NetChannel *this)
{
  return ?IsClosed@NetChannel@@QEBA_NXZ(this);
}

/*
==============
NetChannel::GetRemoteId
==============
*/

netsrc_t __fastcall NetChannel::GetRemoteId(NetChannel *this)
{
  return ?GetRemoteId@NetChannel@@QEBA?AW4netsrc_t@@XZ(this);
}

/*
==============
NetChannel::Close
==============
*/

void __fastcall NetChannel::Close(NetChannel *this)
{
  ?Close@NetChannel@@QEAAXXZ(this);
}

/*
==============
NetChannel::GetLocalId
==============
*/

netsrc_t __fastcall NetChannel::GetLocalId(NetChannel *this)
{
  return ?GetLocalId@NetChannel@@QEBA?AW4netsrc_t@@XZ(this);
}

/*
==============
NetChannel::Open
==============
*/

void __fastcall NetChannel::Open(NetChannel *this, NetEndpoint *endpoint, netsrc_t localId, netsrc_t remoteId)
{
  ?Open@NetChannel@@QEAAXPEAVNetEndpoint@@W4netsrc_t@@1@Z(this, endpoint, localId, remoteId);
}

/*
==============
NetChannel::Reset
==============
*/

void __fastcall NetChannel::Reset(NetChannel *this)
{
  ?Reset@NetChannel@@QEAAXXZ(this);
}

/*
==============
NetChannel::RemoveReference
==============
*/

int __fastcall NetChannel::RemoveReference(NetChannel *this)
{
  return ?RemoveReference@NetChannel@@QEAAHXZ(this);
}

/*
==============
NetChannel::IsOpen
==============
*/

bool __fastcall NetChannel::IsOpen(NetChannel *this)
{
  return ?IsOpen@NetChannel@@QEBA_NXZ(this);
}

/*
==============
NetChannel::NetChannel
==============
*/

void __fastcall NetChannel::NetChannel(NetChannel *this)
{
  ??0NetChannel@@QEAA@XZ(this);
}

/*
==============
NetChannel::NetChannel
==============
*/
void NetChannel::NetChannel(NetChannel *this)
{
  this->m_localId = NS_INVALID_NETSRC;
  this->m_state = STATE_CLOSED;
  this->m_referenceCount = 0;
  this->m_endpoint = NULL;
  this->m_remoteId = NS_INVALID_NETSRC;
}

/*
==============
NetChannel::AddReference
==============
*/
__int64 NetChannel::AddReference(NetChannel *this)
{
  volatile int *p_m_referenceCount; 

  if ( this->m_state != STATE_OPEN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel.cpp", 60, ASSERT_TYPE_ASSERT, "(IsOpen())", (const char *)&queryFormat, "IsOpen()") )
    __debugbreak();
  p_m_referenceCount = &this->m_referenceCount;
  if ( ((unsigned __int8)p_m_referenceCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_referenceCount) )
    __debugbreak();
  return (unsigned int)_InterlockedIncrement(p_m_referenceCount);
}

/*
==============
NetChannel::Close
==============
*/
void NetChannel::Close(NetChannel *this)
{
  netsrc_t m_remoteId; 
  netsrc_t m_localId; 
  const char *String; 
  NetEndpoint *m_endpoint; 
  char *fmt; 

  if ( this->m_state != STATE_CLOSING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel.cpp", 48, ASSERT_TYPE_ASSERT, "(m_state == STATE_CLOSING)", "%s\n\tChannel not closing when attempting to clear", "m_state == STATE_CLOSING") )
    __debugbreak();
  if ( this->m_referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel.cpp", 49, ASSERT_TYPE_ASSERT, "(m_referenceCount == 0)", "%s\n\tReferences remain when attempting to close", "m_referenceCount == 0") )
    __debugbreak();
  if ( !this->m_endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel.cpp", 50, ASSERT_TYPE_ASSERT, "(m_endpoint != 0)", "%s\n\tNo endpoint assigned for open channel", "m_endpoint != NULL") )
    __debugbreak();
  m_remoteId = this->m_remoteId;
  m_localId = this->m_localId;
  String = NetEndpoint::GetString(this->m_endpoint);
  LODWORD(fmt) = m_remoteId;
  Com_Printf(25, "[NET] Closing channel for endpoint %s:%d:%d\n", String, (unsigned int)m_localId, fmt);
  m_endpoint = this->m_endpoint;
  if ( m_endpoint )
  {
    NetEndpoint::RemoveReference(m_endpoint, 0);
    this->m_endpoint = NULL;
  }
  this->m_state = STATE_CLOSED;
  this->m_localId = NS_INVALID_NETSRC;
  this->m_remoteId = NS_INVALID_NETSRC;
}

/*
==============
NetChannel::GetEndpoint
==============
*/
NetEndpoint *NetChannel::GetEndpoint(NetChannel *this)
{
  if ( this->m_state == STATE_OPEN )
    return this->m_endpoint;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel.cpp", 96, ASSERT_TYPE_ASSERT, "(IsOpen())", "%s\n\tOperating on a closed channel", "IsOpen()") )
    __debugbreak();
  return this->m_endpoint;
}

/*
==============
NetChannel::GetLocalId
==============
*/
__int64 NetChannel::GetLocalId(NetChannel *this)
{
  return (unsigned int)this->m_localId;
}

/*
==============
NetChannel::GetRemoteId
==============
*/
__int64 NetChannel::GetRemoteId(NetChannel *this)
{
  return (unsigned int)this->m_remoteId;
}

/*
==============
NetChannel::IsClosed
==============
*/
bool NetChannel::IsClosed(NetChannel *this)
{
  return this->m_state == STATE_CLOSED;
}

/*
==============
NetChannel::IsOpen
==============
*/
bool NetChannel::IsOpen(NetChannel *this)
{
  return this->m_state == STATE_OPEN;
}

/*
==============
NetChannel::Open
==============
*/
void NetChannel::Open(NetChannel *this, NetEndpoint *endpoint, netsrc_t localId, netsrc_t remoteId)
{
  const char *String; 
  char *fmt; 
  volatile int m_referenceCount; 

  if ( this->m_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel.cpp", 32, ASSERT_TYPE_ASSERT, "(IsClosed())", "%s\n\tChannel already opened", "IsClosed()") )
    __debugbreak();
  if ( this->m_referenceCount )
  {
    m_referenceCount = this->m_referenceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel.cpp", 34, ASSERT_TYPE_ASSERT, "(m_referenceCount == 0)", "%s\n\tExpected reference count to be zero (was %d) when opening", "m_referenceCount == 0", m_referenceCount) )
      __debugbreak();
  }
  String = NetEndpoint::GetString(endpoint);
  LODWORD(fmt) = remoteId;
  Com_Printf(25, "[NET] Opening channel for endpoint %s:%d:%d\n", String, (unsigned int)localId, fmt);
  this->m_state = STATE_OPEN;
  this->m_localId = localId;
  this->m_remoteId = remoteId;
  this->m_endpoint = endpoint;
  NetEndpoint::AddReference(endpoint);
}

/*
==============
NetChannel::RemoveReference
==============
*/
__int64 NetChannel::RemoveReference(NetChannel *this)
{
  volatile int *p_m_referenceCount; 
  __int64 result; 

  if ( this->m_state != STATE_OPEN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel.cpp", 67, ASSERT_TYPE_ASSERT, "(IsOpen())", (const char *)&queryFormat, "IsOpen()") )
    __debugbreak();
  p_m_referenceCount = &this->m_referenceCount;
  if ( this->m_referenceCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_channel.cpp", 68, ASSERT_TYPE_ASSERT, "(m_referenceCount > 0)", "%s\n\tUnexpected reference count %d when removing reference", "m_referenceCount > 0", *p_m_referenceCount) )
    __debugbreak();
  if ( ((unsigned __int8)p_m_referenceCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_referenceCount) )
    __debugbreak();
  result = (unsigned int)_InterlockedDecrement(p_m_referenceCount);
  if ( !(_DWORD)result )
    this->m_state = STATE_CLOSING;
  return result;
}

/*
==============
NetChannel::Reset
==============
*/
void NetChannel::Reset(NetChannel *this)
{
  NetEndpoint *m_endpoint; 

  m_endpoint = this->m_endpoint;
  if ( m_endpoint )
  {
    NetEndpoint::RemoveReference(m_endpoint, 0);
    this->m_endpoint = NULL;
  }
  this->m_localId = NS_INVALID_NETSRC;
  this->m_remoteId = NS_INVALID_NETSRC;
  this->m_state = STATE_CLOSED;
}

