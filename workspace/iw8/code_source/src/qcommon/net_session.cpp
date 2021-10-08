/*
==============
NetSession::GetSecurityId
==============
*/

const bdSecurityID *__fastcall NetSession::GetSecurityId(NetSession *this)
{
  return ?GetSecurityId@NetSession@@QEBAAEBVbdSecurityID@@XZ(this);
}

/*
==============
NetSession::GetString
==============
*/

const char *__fastcall NetSession::GetString(NetSession *this)
{
  return ?GetString@NetSession@@QEBAPEBDXZ(this);
}

/*
==============
NetSession::AddReference
==============
*/

int __fastcall NetSession::AddReference(NetSession *this)
{
  return ?AddReference@NetSession@@QEAAHXZ(this);
}

/*
==============
NetSession::NetSession
==============
*/

void __fastcall NetSession::NetSession(NetSession *this)
{
  ??0NetSession@@QEAA@XZ(this);
}

/*
==============
NetSession::GetSecurityKey
==============
*/

const bdSecurityKey *__fastcall NetSession::GetSecurityKey(NetSession *this)
{
  return ?GetSecurityKey@NetSession@@QEBAAEBVbdSecurityKey@@XZ(this);
}

/*
==============
NetSession::IsValid
==============
*/

bool __fastcall NetSession::IsValid(NetSession *this)
{
  return ?IsValid@NetSession@@QEBA_NXZ(this);
}

/*
==============
NetSession::GetSecurityInfo
==============
*/

const XSECURITY_INFO *__fastcall NetSession::GetSecurityInfo(NetSession *this)
{
  return ?GetSecurityInfo@NetSession@@QEBAAEBVXSECURITY_INFO@@XZ(this);
}

/*
==============
NetSession::Init
==============
*/

void __fastcall NetSession::Init(NetSession *this, const XSECURITY_INFO *info)
{
  ?Init@NetSession@@QEAAXAEBVXSECURITY_INFO@@@Z(this, info);
}

/*
==============
NetSession::RemoveReference
==============
*/

int __fastcall NetSession::RemoveReference(NetSession *this, const bool keepOpen)
{
  return ?RemoveReference@NetSession@@QEAAH_N@Z(this, keepOpen);
}

/*
==============
NetSession::NetSession
==============
*/
void NetSession::NetSession(NetSession *this)
{
  this->m_info.m_id = 0i64;
  *(_QWORD *)this->m_info.m_key.ab = 0i64;
  *(_QWORD *)&this->m_info.m_key.ab[8] = 0i64;
  bdSecurityID::bdSecurityID(&this->m_info.m_id);
  bdSecurityKey::bdSecurityKey(&this->m_info.m_key);
  this->m_referenceCount = 0;
}

/*
==============
NetSession::AddReference
==============
*/
__int64 NetSession::AddReference(NetSession *this)
{
  volatile int *p_m_referenceCount; 

  p_m_referenceCount = &this->m_referenceCount;
  if ( (((_BYTE)this + 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_referenceCount) )
    __debugbreak();
  return (unsigned int)_InterlockedIncrement(p_m_referenceCount);
}

/*
==============
NetSession::GetSecurityId
==============
*/

const bdSecurityID *__fastcall NetSession::GetSecurityId(NetSession *this)
{
  return XSECURITY_INFO::GetId(&this->m_info);
}

/*
==============
NetSession::GetSecurityInfo
==============
*/
NetSession *NetSession::GetSecurityInfo(NetSession *this)
{
  return this;
}

/*
==============
NetSession::GetSecurityKey
==============
*/

const bdSecurityKey *__fastcall NetSession::GetSecurityKey(NetSession *this)
{
  return XSECURITY_INFO::GetKey(&this->m_info);
}

/*
==============
NetSession::GetString
==============
*/

const char *__fastcall NetSession::GetString(NetSession *this)
{
  return XSECURITY_INFO::GetString(&this->m_info);
}

/*
==============
NetSession::Init
==============
*/
void NetSession::Init(NetSession *this, const XSECURITY_INFO *info)
{
  const char *String; 

  XSECURITY_INFO::operator=(&this->m_info, info);
  this->m_referenceCount = 0;
  String = XSECURITY_INFO::GetString(&this->m_info);
  Com_Printf(25, "[NET] Registering session %s\n", String);
  NET_EnterCriticalSection();
  dwRegisterSession(&this->m_info);
  NET_ExitCriticalSection();
}

/*
==============
NetSession::IsValid
==============
*/

bool __fastcall NetSession::IsValid(NetSession *this)
{
  return XSECURITY_INFO::IsValid(&this->m_info);
}

/*
==============
NetSession::RemoveReference
==============
*/
__int64 NetSession::RemoveReference(NetSession *this, const bool keepOpen)
{
  volatile int *p_m_referenceCount; 
  unsigned __int32 v5; 
  const char *String; 
  const bdSecurityID *Id; 

  p_m_referenceCount = &this->m_referenceCount;
  if ( (((_BYTE)this + 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_referenceCount) )
    __debugbreak();
  v5 = _InterlockedDecrement(p_m_referenceCount);
  if ( !v5 && !keepOpen )
  {
    String = XSECURITY_INFO::GetString(&this->m_info);
    Com_Printf(25, "[NET] Unregistering session %s\n", String);
    NET_EnterCriticalSection();
    Id = XSECURITY_INFO::GetId(&this->m_info);
    dwUnregisterSession(Id);
    NET_ExitCriticalSection();
    XSECURITY_INFO::Clear(&this->m_info);
  }
  return v5;
}

