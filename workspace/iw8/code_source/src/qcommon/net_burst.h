/*
==============
NetBurst::GetWindowDuration
==============
*/

int __fastcall NetBurst::GetWindowDuration(NetBurst *this)
{
  return ?GetWindowDuration@NetBurst@@QEBAHXZ(this);
}

/*
==============
NetBurst::GetWindowDuration
==============
*/
__int64 NetBurst::GetWindowDuration(NetBurst *this)
{
  __int64 result; 

  result = (unsigned int)this->m_windowDuration;
  if ( (int)result < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.h", 185, ASSERT_TYPE_ASSERT, "( m_windowDuration ) >= ( 0 )", "%s >= %s\n\t%i, %i", "m_windowDuration", "0", this->m_windowDuration, 0i64) )
      __debugbreak();
    return (unsigned int)this->m_windowDuration;
  }
  return result;
}

