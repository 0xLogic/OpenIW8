/*
==============
bdUPnPConfig::reset
==============
*/

void __fastcall bdUPnPConfig::reset(bdUPnPConfig *this)
{
  ?reset@bdUPnPConfig@@QEAAXXZ(this);
}

/*
==============
bdUPnPConfig::sanityCheckConfig
==============
*/

void __fastcall bdUPnPConfig::sanityCheckConfig(bdUPnPConfig *this)
{
  ?sanityCheckConfig@bdUPnPConfig@@QEAAXXZ(this);
}

/*
==============
bdUPnPConfig::bdUPnPConfig
==============
*/

void __fastcall bdUPnPConfig::bdUPnPConfig(bdUPnPConfig *this)
{
  ??0bdUPnPConfig@@QEAA@XZ(this);
}

/*
==============
bdUPnPConfig::bdUPnPConfig
==============
*/

void __fastcall bdUPnPConfig::bdUPnPConfig(bdUPnPConfig *this, const bdUPnPConfig *__that)
{
  ??0bdUPnPConfig@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdUPnPConfig::bdUPnPConfig
==============
*/
void bdUPnPConfig::bdUPnPConfig(bdUPnPConfig *this, const bdUPnPConfig *__that)
{
  this->m_discoveryTimeout = __that->m_discoveryTimeout;
  this->m_responseTimeout = __that->m_responseTimeout;
  this->m_connectTimeout = __that->m_connectTimeout;
  this->m_runMode = __that->m_runMode;
  this->m_discoveryRetries = __that->m_discoveryRetries;
  this->m_mappingRetries = __that->m_mappingRetries;
  this->m_portSelectionMode = __that->m_portSelectionMode;
  this->m_portPoolSize = __that->m_portPoolSize;
  this->m_disabled = __that->m_disabled;
  bdSockAddr::bdSockAddr(&this->m_gatewayAddr, &__that->m_gatewayAddr);
  this->m_onlyUseGateway = __that->m_onlyUseGateway;
}

/*
==============
bdUPnPConfig::bdUPnPConfig
==============
*/
void bdUPnPConfig::bdUPnPConfig(bdUPnPConfig *this)
{
  this->m_discoveryTimeout = 1.0;
  this->m_responseTimeout = 10.0;
  *(_QWORD *)&this->m_connectTimeout = 1084227584i64;
  this->m_discoveryRetries = 1;
  this->m_mappingRetries = 4;
  this->m_portSelectionMode = BD_UPNP_PORT_SELECTION_EXPANDING_RANDOM;
  this->m_portPoolSize = 500;
  this->m_disabled = 0;
  bdSockAddr::bdSockAddr(&this->m_gatewayAddr);
  this->m_onlyUseGateway = 0;
}

/*
==============
bdUPnPConfig::reset
==============
*/
void bdUPnPConfig::reset(bdUPnPConfig *this)
{
  bdSockAddr *v2; 
  bdSockAddr v3; 

  this->m_discoveryTimeout = 1.0;
  this->m_responseTimeout = 10.0;
  *(_QWORD *)&this->m_connectTimeout = 1084227584i64;
  this->m_discoveryRetries = 1;
  this->m_mappingRetries = 4;
  bdSockAddr::bdSockAddr(&v3);
  this->m_gatewayAddr = *v2;
  this->m_portSelectionMode = BD_UPNP_PORT_SELECTION_EXPANDING_RANDOM;
  this->m_portPoolSize = 500;
  this->m_disabled = 0;
  this->m_onlyUseGateway = 0;
}

/*
==============
bdUPnPConfig::sanityCheckConfig
==============
*/
void bdUPnPConfig::sanityCheckConfig(bdUPnPConfig *this)
{
  float m_discoveryTimeout; 
  float m_responseTimeout; 
  float m_connectTimeout; 
  __int64 v5; 
  int v6; 

  m_discoveryTimeout = this->m_discoveryTimeout;
  if ( this->m_discoveryTimeout > 4.0 || m_discoveryTimeout < 0.5 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x4Fu, "UPnP discovery timeout set to %f seconds. This is outside the normal recommended range", m_discoveryTimeout);
  m_responseTimeout = this->m_responseTimeout;
  if ( m_responseTimeout > 40.0 || m_responseTimeout < 1.0 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x55u, "UPnP response timeout set to %f seconds. This is outside the normal recommended range", m_responseTimeout);
  m_connectTimeout = this->m_connectTimeout;
  if ( m_connectTimeout > 20.0 || m_connectTimeout < 1.0 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x5Bu, "UPnP response timeout set to %f seconds. This is outside the normal recommended range", m_connectTimeout);
  if ( this->m_runMode > (unsigned int)BD_UPNP_EXTERNAL_IP_ONLY )
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x61u, "UPnP run mode misconfigured. This will cause undefined behaviour");
  if ( this->m_discoveryRetries > 4 )
  {
    LODWORD(v5) = this->m_discoveryRetries;
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x66u, "UPnP discovery retries set to %u . This is outside the normal recommended range", v5);
  }
  if ( this->m_mappingRetries > 0x10 )
  {
    v6 = 16;
    LODWORD(v5) = this->m_mappingRetries;
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x6Cu, "UPnP mapping retries set to %u . This is greater than the recommended limit %u", v5, v6);
  }
}

