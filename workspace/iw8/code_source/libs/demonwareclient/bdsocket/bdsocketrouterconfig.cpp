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
  char v1; 
  bool v2; 
  __int64 v7; 
  double v8; 

  v1 = 0;
  v2 = !this->m_ignoreConnectionReset;
  _RBX = this;
  if ( this->m_ignoreConnectionReset )
    bdLogMessage(BD_LOG_WARNING, "warn/", "socketRouterConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouterconfig.cpp", "bdSocketRouterConfig::sanityCheckConfig", 0x45u, "Ignore connection reset setting (%s) differs from recommended setting.", "False");
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm0, cs:__real@44e10000
  }
  if ( !(v1 | v2) )
    goto LABEL_5;
  __asm { vcomiss xmm0, cs:__real@41200000 }
  if ( v1 )
  {
LABEL_5:
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm0
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "socketRouterConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouterconfig.cpp", "bdSocketRouterConfig::sanityCheckConfig", 0x4Cu, "Receive timeout configured to %f. This is outside the normal recommended range", v8);
  }
  if ( _RBX->m_maxConnectionResets - 1 > 0x63 )
  {
    LODWORD(v7) = _RBX->m_maxConnectionResets;
    bdLogMessage(BD_LOG_WARNING, "warn/", "socketRouterConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouterconfig.cpp", "bdSocketRouterConfig::sanityCheckConfig", 0x55u, "Max connection resets to ignore configured to %u. This is outside the normal recommended range", v7);
  }
  if ( _RBX->m_cypherSuite != 0xBD02 || BD_DTLS_VERSION >= 3u )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "socketRouterConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouterconfig.cpp", "bdSocketRouterConfig::sanityCheckConfig", 0x60u, "Chosen Cyphersuite is not supported before BD_DTLS_V3");
  return 0;
}

