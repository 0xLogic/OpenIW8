/*
==============
bdNATTypeDiscoveryConfig::reset
==============
*/

void __fastcall bdNATTypeDiscoveryConfig::reset(bdNATTypeDiscoveryConfig *this)
{
  ?reset@bdNATTypeDiscoveryConfig@@QEAAXXZ(this);
}

/*
==============
bdNATTypeDiscoveryConfig::bdNATTypeDiscoveryConfig
==============
*/

void __fastcall bdNATTypeDiscoveryConfig::bdNATTypeDiscoveryConfig(bdNATTypeDiscoveryConfig *this)
{
  ??0bdNATTypeDiscoveryConfig@@QEAA@XZ(this);
}

/*
==============
bdNATTypeDiscoveryConfig::sanityCheckConfig
==============
*/

void __fastcall bdNATTypeDiscoveryConfig::sanityCheckConfig(bdNATTypeDiscoveryConfig *this)
{
  ?sanityCheckConfig@bdNATTypeDiscoveryConfig@@QEAAXXZ(this);
}

/*
==============
bdNATTypeDiscoveryConfig::bdNATTypeDiscoveryConfig
==============
*/
void bdNATTypeDiscoveryConfig::bdNATTypeDiscoveryConfig(bdNATTypeDiscoveryConfig *this)
{
  this->m_NtdcsMaxResends = 5;
  this->m_NtdcsSendTimeout = 0.5;
}

/*
==============
bdNATTypeDiscoveryConfig::reset
==============
*/
void bdNATTypeDiscoveryConfig::reset(bdNATTypeDiscoveryConfig *this)
{
  this->m_NtdcsMaxResends = 5;
  this->m_NtdcsSendTimeout = 0.5;
}

/*
==============
bdNATTypeDiscoveryConfig::sanityCheckConfig
==============
*/
void bdNATTypeDiscoveryConfig::sanityCheckConfig(bdNATTypeDiscoveryConfig *this)
{
  unsigned int m_NtdcsMaxResends; 
  float m_NtdcsSendTimeout; 
  unsigned int v4; 

  m_NtdcsMaxResends = this->m_NtdcsMaxResends;
  if ( m_NtdcsMaxResends - 2 > 8 )
  {
    v4 = m_NtdcsMaxResends;
    bdLogMessage(BD_LOG_WARNING, "warn/", "NATTypeDiscoveryConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryconfig.cpp", "bdNATTypeDiscoveryConfig::sanityCheckConfig", 0x29u, "Max resends configured to %u. This is outside the normal recommended range", v4);
  }
  m_NtdcsSendTimeout = this->m_NtdcsSendTimeout;
  if ( m_NtdcsSendTimeout > 2.0 || m_NtdcsSendTimeout < 0.050000001 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "NATTypeDiscoveryConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryconfig.cpp", "bdNATTypeDiscoveryConfig::sanityCheckConfig", 0x2Fu, "Send timeout configured to %f. This is outside the normal recommended range", m_NtdcsSendTimeout);
}

