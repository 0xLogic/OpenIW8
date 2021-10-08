/*
==============
NetSessionBuffer::Register
==============
*/

NetSession *__fastcall NetSessionBuffer::Register(NetSessionBuffer *this, const XSECURITY_INFO *security)
{
  return ?Register@NetSessionBuffer@@QEAAPEAVNetSession@@AEBVXSECURITY_INFO@@@Z(this, security);
}

/*
==============
NetSessionBuffer::Get
==============
*/

NetSession *__fastcall NetSessionBuffer::Get(NetSessionBuffer *this, const bdSecurityID *id)
{
  return ?Get@NetSessionBuffer@@QEAAPEAVNetSession@@AEBVbdSecurityID@@@Z(this, id);
}

/*
==============
NetSessionBuffer::Get
==============
*/
NetSession *NetSessionBuffer::Get(NetSessionBuffer *this, const bdSecurityID *id)
{
  int v4; 
  bdSecurityID *SecurityId; 

  v4 = 0;
  while ( 1 )
  {
    SecurityId = (bdSecurityID *)NetSession::GetSecurityId(&this->m_sessions[v4]);
    if ( bdSecurityID::operator==(SecurityId, id) )
      break;
    if ( ++v4 >= 256 )
      return 0i64;
  }
  return (NetSession *)((char *)this + 28 * v4);
}

/*
==============
NetSessionBuffer::Register
==============
*/
NetSession *NetSessionBuffer::Register(NetSessionBuffer *this, const XSECURITY_INFO *security)
{
  int v4; 
  int v5; 
  bdSecurityID *SecurityId; 
  const bdSecurityID *Id; 
  NetSession *v8; 
  bdSecurityKey *SecurityKey; 
  const bdSecurityKey *Key; 

  v4 = -1;
  v5 = 0;
  while ( 1 )
  {
    SecurityId = (bdSecurityID *)NetSession::GetSecurityId(&this->m_sessions[v5]);
    Id = XSECURITY_INFO::GetId((XSECURITY_INFO *)security);
    if ( bdSecurityID::operator==(SecurityId, Id) )
      break;
    if ( v4 == -1 && !NetSession::IsValid(&this->m_sessions[v5]) )
      v4 = v5;
    if ( ++v5 >= 256 )
      goto LABEL_9;
  }
  v4 = v5;
LABEL_9:
  if ( v4 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_session_buffer.cpp", 27, ASSERT_TYPE_ASSERT, "(registerIndex != -1)", "%s\n\tRan out of session slots", "registerIndex != NET_INVALID_INDEX") )
    __debugbreak();
  v8 = &this->m_sessions[v4];
  if ( !NetSession::IsValid(v8) && !NET_IsConnectionThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_session_buffer.cpp", 30, ASSERT_TYPE_ASSERT, "(session->IsValid() || NET_IsConnectionThread())", "%s\n\tNew sessions should be registered only by connection thread", "session->IsValid() || NET_IsConnectionThread()") )
    __debugbreak();
  if ( !NetSession::IsValid(v8) )
    NetSession::Init(v8, security);
  SecurityKey = (bdSecurityKey *)NetSession::GetSecurityKey(v8);
  Key = XSECURITY_INFO::GetKey((XSECURITY_INFO *)security);
  if ( !bdSecurityKey::operator==(SecurityKey, Key) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_session_buffer.cpp", 37, ASSERT_TYPE_ASSERT, "(session->GetSecurityKey() == security.GetKey())", "%s\n\tDifferent security key already registered under the same security id", "session->GetSecurityKey() == security.GetKey()") )
    __debugbreak();
  return (NetSession *)((char *)this + 28 * v4);
}

