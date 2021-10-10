/*
==============
bdGetHostByNameConfig::sanityCheckConfig
==============
*/

void __fastcall bdGetHostByNameConfig::sanityCheckConfig(bdGetHostByNameConfig *this)
{
  ?sanityCheckConfig@bdGetHostByNameConfig@@QEAAXXZ(this);
}

/*
==============
bdGetHostByNameConfig::reset
==============
*/

void __fastcall bdGetHostByNameConfig::reset(bdGetHostByNameConfig *this)
{
  ?reset@bdGetHostByNameConfig@@QEAAXXZ(this);
}

/*
==============
bdGetHostByNameConfig::bdGetHostByNameConfig
==============
*/

void __fastcall bdGetHostByNameConfig::bdGetHostByNameConfig(bdGetHostByNameConfig *this)
{
  ??0bdGetHostByNameConfig@@QEAA@XZ(this);
}

/*
==============
bdGetHostByNameConfig::bdGetHostByNameConfig
==============
*/
void bdGetHostByNameConfig::bdGetHostByNameConfig(bdGetHostByNameConfig *this)
{
  this->m_timeout = 10.0;
}

/*
==============
bdGetHostByNameConfig::reset
==============
*/
void bdGetHostByNameConfig::reset(bdGetHostByNameConfig *this)
{
  this->m_timeout = 10.0;
}

/*
==============
bdGetHostByNameConfig::sanityCheckConfig
==============
*/
void bdGetHostByNameConfig::sanityCheckConfig(bdGetHostByNameConfig *this)
{
  float m_timeout; 

  m_timeout = this->m_timeout;
  if ( this->m_timeout > 40.0 || m_timeout < 1.0 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "getHostByNameConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbynameconfig.cpp", "bdGetHostByNameConfig::sanityCheckConfig", 0x2Bu, "Lookup timeout set to %f seconds. This is outside the normal recommended range", m_timeout);
}

