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
  bdSockAddr v7; 

  _RBX = this;
  this->m_discoveryTimeout = 1.0;
  this->m_responseTimeout = 10.0;
  *(_QWORD *)&this->m_connectTimeout = 1084227584i64;
  this->m_discoveryRetries = 1;
  this->m_mappingRetries = 4;
  bdSockAddr::bdSockAddr(&v7);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+28h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+48h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+68h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbx+88h], ymm1
  }
  _RBX->m_portSelectionMode = BD_UPNP_PORT_SELECTION_EXPANDING_RANDOM;
  _RBX->m_portPoolSize = 500;
  _RBX->m_disabled = 0;
  _RBX->m_onlyUseGateway = 0;
}

/*
==============
bdUPnPConfig::sanityCheckConfig
==============
*/
void bdUPnPConfig::sanityCheckConfig(bdUPnPConfig *this)
{
  char v4; 
  char v5; 
  double v10; 
  __int64 v11; 
  double v12; 
  double v13; 
  int v14; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, cs:__real@40800000
  }
  _RBX = this;
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+58h+var_20], xmm0
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x4Fu, "UPnP discovery timeout set to %f seconds. This is outside the normal recommended range", v10);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm0, cs:__real@42200000
  }
  if ( !(v4 | v5) )
    goto LABEL_3;
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( v4 )
  {
LABEL_3:
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+58h+var_20], xmm0
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x55u, "UPnP response timeout set to %f seconds. This is outside the normal recommended range", v12);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcomiss xmm0, cs:__real@41a00000
  }
  if ( !(v4 | v5) )
    goto LABEL_6;
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( v4 )
  {
LABEL_6:
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+58h+var_20], xmm0
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x5Bu, "UPnP response timeout set to %f seconds. This is outside the normal recommended range", v13);
  }
  if ( _RBX->m_runMode > (unsigned int)BD_UPNP_EXTERNAL_IP_ONLY )
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x61u, "UPnP run mode misconfigured. This will cause undefined behaviour");
  if ( _RBX->m_discoveryRetries > 4 )
  {
    LODWORD(v11) = _RBX->m_discoveryRetries;
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x66u, "UPnP discovery retries set to %u . This is outside the normal recommended range", v11);
  }
  if ( _RBX->m_mappingRetries > 0x10 )
  {
    v14 = 16;
    LODWORD(v11) = _RBX->m_mappingRetries;
    bdLogMessage(BD_LOG_WARNING, "warn/", "UPnPConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpconfig.cpp", "bdUPnPConfig::sanityCheckConfig", 0x6Cu, "UPnP mapping retries set to %u . This is greater than the recommended limit %u", v11, v14);
  }
}

