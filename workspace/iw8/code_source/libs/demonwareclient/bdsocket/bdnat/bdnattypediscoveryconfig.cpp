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
  bool v3; 
  bool v4; 
  unsigned int v7; 
  double v8; 

  _RBX = this;
  m_NtdcsMaxResends = this->m_NtdcsMaxResends;
  v3 = m_NtdcsMaxResends - 2 < 8;
  v4 = m_NtdcsMaxResends == 10;
  if ( m_NtdcsMaxResends - 2 > 8 )
  {
    v7 = m_NtdcsMaxResends;
    bdLogMessage(BD_LOG_WARNING, "warn/", "NATTypeDiscoveryConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryconfig.cpp", "bdNATTypeDiscoveryConfig::sanityCheckConfig", 0x29u, "Max resends configured to %u. This is outside the normal recommended range", v7);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm0, cs:__real@40000000
  }
  if ( !v3 && !v4 )
    goto LABEL_5;
  __asm { vcomiss xmm0, cs:__real@3d4ccccd }
  if ( v3 )
  {
LABEL_5:
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm0
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "NATTypeDiscoveryConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryconfig.cpp", "bdNATTypeDiscoveryConfig::sanityCheckConfig", 0x2Fu, "Send timeout configured to %f. This is outside the normal recommended range", v8);
  }
}

