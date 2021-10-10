/*
==============
bdIPDiscoveryConfig::sanityCheckConfig
==============
*/

void __fastcall bdIPDiscoveryConfig::sanityCheckConfig(bdIPDiscoveryConfig *this)
{
  ?sanityCheckConfig@bdIPDiscoveryConfig@@QEAAXXZ(this);
}

/*
==============
bdIPDiscoveryConfig::reset
==============
*/

void __fastcall bdIPDiscoveryConfig::reset(bdIPDiscoveryConfig *this)
{
  ?reset@bdIPDiscoveryConfig@@QEAAXXZ(this);
}

/*
==============
bdIPDiscoveryConfig::bdIPDiscoveryConfig
==============
*/

void __fastcall bdIPDiscoveryConfig::bdIPDiscoveryConfig(bdIPDiscoveryConfig *this)
{
  ??0bdIPDiscoveryConfig@@QEAA@XZ(this);
}

/*
==============
bdIPDiscoveryConfig::bdIPDiscoveryConfig
==============
*/
void bdIPDiscoveryConfig::bdIPDiscoveryConfig(bdIPDiscoveryConfig *this)
{
  this->m_retries = 5;
  this->m_version = 3;
  this->m_requestTimeout = 0.5;
}

/*
==============
bdIPDiscoveryConfig::reset
==============
*/
void bdIPDiscoveryConfig::reset(bdIPDiscoveryConfig *this)
{
  this->m_retries = 5;
  this->m_version = 3;
  this->m_requestTimeout = 0.5;
}

/*
==============
bdIPDiscoveryConfig::sanityCheckConfig
==============
*/
void bdIPDiscoveryConfig::sanityCheckConfig(bdIPDiscoveryConfig *this)
{
  unsigned __int8 m_retries; 
  float m_requestTimeout; 
  int v4; 

  m_retries = this->m_retries;
  if ( (unsigned __int8)(m_retries - 2) > 8u )
  {
    v4 = m_retries;
    bdLogMessage(BD_LOG_WARNING, "warn/", "IPDiscoveryConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryconfig.cpp", "bdIPDiscoveryConfig::sanityCheckConfig", 0x2Fu, "Max resends configured to %u. This is outside the normal recommended range", v4);
  }
  m_requestTimeout = this->m_requestTimeout;
  if ( m_requestTimeout > 2.0 || m_requestTimeout < 0.050000001 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "IPDiscoveryConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryconfig.cpp", "bdIPDiscoveryConfig::sanityCheckConfig", 0x35u, "Send timeout configured to %f. This is outside the normal recommended range", m_requestTimeout);
}

