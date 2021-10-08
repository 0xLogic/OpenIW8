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
  bool v3; 
  bool v4; 
  int v7; 
  double v8; 

  _RBX = this;
  m_retries = this->m_retries;
  v3 = (unsigned __int8)(m_retries - 2) < 8u;
  v4 = m_retries == 10;
  if ( (unsigned __int8)(m_retries - 2) > 8u )
  {
    v7 = m_retries;
    bdLogMessage(BD_LOG_WARNING, "warn/", "IPDiscoveryConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryconfig.cpp", "bdIPDiscoveryConfig::sanityCheckConfig", 0x2Fu, "Max resends configured to %u. This is outside the normal recommended range", v7);
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
    bdLogMessage(BD_LOG_WARNING, "warn/", "IPDiscoveryConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryconfig.cpp", "bdIPDiscoveryConfig::sanityCheckConfig", 0x35u, "Send timeout configured to %f. This is outside the normal recommended range", v8);
  }
}

