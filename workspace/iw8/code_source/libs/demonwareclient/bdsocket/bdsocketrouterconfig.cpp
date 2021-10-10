/*
==============
bdSocketRouterConfig::bdSocketRouterConfig
==============
*/

void __fastcall bdSocketRouterConfig::bdSocketRouterConfig(bdSocketRouterConfig *this)
{
  ??0bdSocketRouterConfig@@QEAA@XZ(this);
}

/*
==============
bdSocketRouterConfig::sanityCheckConfig
==============
*/

bool __fastcall bdSocketRouterConfig::sanityCheckConfig(bdSocketRouterConfig *this)
{
  return ?sanityCheckConfig@bdSocketRouterConfig@@QEAA_NXZ(this);
}

/*
==============
bdSocketRouterConfig::reset
==============
*/

void __fastcall bdSocketRouterConfig::reset(bdSocketRouterConfig *this)
{
  ?reset@bdSocketRouterConfig@@QEAAXXZ(this);
}

/*
==============
bdSocketRouterConfig::bdSocketRouterConfig
==============
*/
void bdSocketRouterConfig::bdSocketRouterConfig(bdSocketRouterConfig *this)
{
  this->m_ignoreConnectionReset = 0;
  this->m_cypherSuite = -17150;
  this->m_listener = NULL;
  this->m_relayManager = NULL;
  this->m_DTLSAssociationReceiveTimeout = 1800.0;
  this->m_maxConnectionResets = 10;
  this->m_simulateNAT = 0;
}

/*
==============
bdSocketRouterConfig::reset
==============
*/
void bdSocketRouterConfig::reset(bdSocketRouterConfig *this)
{
  this->m_ignoreConnectionReset = 0;
  this->m_DTLSAssociationReceiveTimeout = 1800.0;
  this->m_maxConnectionResets = 10;
  this->m_simulateNAT = 0;
}

/*
==============
bdSocketRouterConfig::sanityCheckConfig
==============
*/
char bdSocketRouterConfig::sanityCheckConfig(bdSocketRouterConfig *this)
{
  float m_DTLSAssociationReceiveTimeout; 
  __int64 v4; 

  if ( this->m_ignoreConnectionReset )
    bdLogMessage(BD_LOG_WARNING, "warn/", "socketRouterConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouterconfig.cpp", "bdSocketRouterConfig::sanityCheckConfig", 0x45u, "Ignore connection reset setting (%s) differs from recommended setting.", "False");
  m_DTLSAssociationReceiveTimeout = this->m_DTLSAssociationReceiveTimeout;
  if ( m_DTLSAssociationReceiveTimeout > 1800.0 || m_DTLSAssociationReceiveTimeout < 10.0 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "socketRouterConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouterconfig.cpp", "bdSocketRouterConfig::sanityCheckConfig", 0x4Cu, "Receive timeout configured to %f. This is outside the normal recommended range", m_DTLSAssociationReceiveTimeout);
  if ( this->m_maxConnectionResets - 1 > 0x63 )
  {
    LODWORD(v4) = this->m_maxConnectionResets;
    bdLogMessage(BD_LOG_WARNING, "warn/", "socketRouterConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouterconfig.cpp", "bdSocketRouterConfig::sanityCheckConfig", 0x55u, "Max connection resets to ignore configured to %u. This is outside the normal recommended range", v4);
  }
  if ( this->m_cypherSuite != 0xBD02 || BD_DTLS_VERSION >= 3u )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "socketRouterConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouterconfig.cpp", "bdSocketRouterConfig::sanityCheckConfig", 0x60u, "Chosen Cyphersuite is not supported before BD_DTLS_V3");
  return 0;
}

