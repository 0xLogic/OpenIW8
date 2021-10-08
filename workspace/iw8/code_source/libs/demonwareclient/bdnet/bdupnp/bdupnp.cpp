/*
==============
bdUPnP::extractDeviceInfo
==============
*/

bool __fastcall bdUPnP::extractDeviceInfo(bdUPnP *this, bdAddr *deviceAddr, char **fetchLoc, unsigned int *fetchLen)
{
  return ?extractDeviceInfo@bdUPnP@@IEAA_NAEAVbdAddr@@PEAPEADAEAI@Z(this, deviceAddr, fetchLoc, fetchLen);
}

/*
==============
bdUPnP::checkForDiscoveredDevices
==============
*/

bool __fastcall bdUPnP::checkForDiscoveredDevices(bdUPnP *this, bdUPnPDevice *discoveredDevice)
{
  return ?checkForDiscoveredDevices@bdUPnP@@IEAA_NAEAVbdUPnPDevice@@@Z(this, discoveredDevice);
}

/*
==============
bdUPnP::init
==============
*/

bool __fastcall bdUPnP::init(bdUPnP *this, unsigned __int16 port, bdArray<bdSockAddr> *localAddrs, bdUPnPConfig *config)
{
  return ?init@bdUPnP@@QEAA_NGPEAV?$bdArray@VbdSockAddr@@@@VbdUPnPConfig@@@Z(this, port, localAddrs, config);
}

/*
==============
bdUPnP::handleDiscoveryResponse
==============
*/

bool __fastcall bdUPnP::handleDiscoveryResponse(bdUPnP *this, bdUPnPDevice *discoveredDevice)
{
  return ?handleDiscoveryResponse@bdUPnP@@IEAA_NAEAVbdUPnPDevice@@@Z(this, discoveredDevice);
}

/*
==============
bdUPnP::getExternalAddr
==============
*/

bool __fastcall bdUPnP::getExternalAddr(bdUPnP *this, bdAddr *externalAddr)
{
  return ?getExternalAddr@bdUPnP@@QEBA_NAEAVbdAddr@@@Z(this, externalAddr);
}

/*
==============
bdUPnP::sendTelemetry
==============
*/

void __fastcall bdUPnP::sendTelemetry(bdUPnP *this, bdUPnPTelemetry::bdUPnPTelemetryResultType result)
{
  ?sendTelemetry@bdUPnP@@IEAAXW4bdUPnPTelemetryResultType@bdUPnPTelemetry@@@Z(this, result);
}

/*
==============
bdUPnP::cleanup
==============
*/

void __fastcall bdUPnP::cleanup(bdUPnP *this)
{
  ?cleanup@bdUPnP@@QEAAXXZ(this);
}

/*
==============
bdUPnP::getDeviceDescriptor
==============
*/

const char *__fastcall bdUPnP::getDeviceDescriptor(bdUPnP *this)
{
  return ?getDeviceDescriptor@bdUPnP@@QEBAPEBDXZ(this);
}

/*
==============
bdUPnP::~bdUPnP
==============
*/

void __fastcall bdUPnP::~bdUPnP(bdUPnP *this)
{
  ??1bdUPnP@@QEAA@XZ(this);
}

/*
==============
bdUPnP::startShutdown
==============
*/

void __fastcall bdUPnP::startShutdown(bdUPnP *this, const bdUPnPDevice::bdUPnPDeviceShutdownType shutdownType)
{
  ?startShutdown@bdUPnP@@QEAAXW4bdUPnPDeviceShutdownType@bdUPnPDevice@@@Z(this, shutdownType);
}

/*
==============
bdUPnP::pump
==============
*/

void __fastcall bdUPnP::pump(bdUPnP *this)
{
  ?pump@bdUPnP@@QEAAXXZ(this);
}

/*
==============
bdUPnP::startDiscovery
==============
*/

bool __fastcall bdUPnP::startDiscovery(bdUPnP *this)
{
  return ?startDiscovery@bdUPnP@@IEAA_NXZ(this);
}

/*
==============
bdUPnP::getPortStatus
==============
*/

bdUPnPDevice::bdUPnPPortStatus __fastcall bdUPnP::getPortStatus(bdUPnP *this)
{
  return ?getPortStatus@bdUPnP@@QEBA?AW4bdUPnPPortStatus@bdUPnPDevice@@XZ(this);
}

/*
==============
bdUPnP::bdUPnP
==============
*/

void __fastcall bdUPnP::bdUPnP(bdUPnP *this)
{
  ??0bdUPnP@@QEAA@XZ(this);
}

/*
==============
bdUPnP::getState
==============
*/

bdUPnP::bdUPnPState __fastcall bdUPnP::getState(bdUPnP *this)
{
  return ?getState@bdUPnP@@QEBA?AW4bdUPnPState@1@XZ(this);
}

/*
==============
bdUPnP::setupDiscoverySocket
==============
*/

bool __fastcall bdUPnP::setupDiscoverySocket(bdUPnP *this)
{
  return ?setupDiscoverySocket@bdUPnP@@IEAA_NXZ(this);
}

/*
==============
bdUPnP::isRunning
==============
*/

bool __fastcall bdUPnP::isRunning(bdUPnP *this)
{
  return ?isRunning@bdUPnP@@QEAA_NXZ(this);
}

/*
==============
bdUPnP::bdUPnP
==============
*/
void bdUPnP::bdUPnP(bdUPnP *this)
{
  this->m_state = BD_UPNP_UNINITIALISED;
  this->m_gamePort = 0;
  this->m_localAddrs = NULL;
  bdUPnPConfig::bdUPnPConfig(&this->m_config);
  bdSocket::bdSocket(&this->m_discoverySocket);
  this->m_bytesReceived = 0;
  bdUPnPDevice::bdUPnPDevice(&this->m_device);
  bdUPnPDevice::bdUPnPDevice(&this->m_cachedDevice);
  bdStopwatch::bdStopwatch(&this->m_discoveryTimer);
  this->m_numDiscoveryAttempts = 0;
  this->m_shutdownRequested = 0;
  bdUPnPTelemetry::bdUPnPTelemetry(&this->m_telemetry);
}

/*
==============
bdUPnP::~bdUPnP
==============
*/
void bdUPnP::~bdUPnP(bdUPnP *this)
{
  bdUPnPDevice::~bdUPnPDevice(&this->m_cachedDevice);
  bdUPnPDevice::~bdUPnPDevice(&this->m_device);
  bdSocket::~bdSocket(&this->m_discoverySocket);
}

/*
==============
bdUPnP::checkForDiscoveredDevices
==============
*/
bool bdUPnP::checkForDiscoveredDevices(bdUPnP *this, bdUPnPDevice *discoveredDevice)
{
  unsigned int v4; 
  bdAddr v6; 

  bdAddr::bdAddr(&v6);
  v4 = this->m_discoverySocket.receiveFrom(&this->m_discoverySocket, &v6, this->m_readBuffer, 1024u);
  if ( v4 - 1 > 0x3FF )
    return v4 == -2;
  this->m_bytesReceived = v4;
  this->m_readBuffer[v4] = 0;
  return bdUPnP::handleDiscoveryResponse(this, discoveredDevice);
}

/*
==============
bdUPnP::cleanup
==============
*/
void bdUPnP::cleanup(bdUPnP *this)
{
  const bdUPnPDevice *v2; 
  const bdUPnPDevice *v3; 
  bdUPnPDevice v4; 

  this->m_state = BD_UPNP_UNINITIALISED;
  this->m_shutdownRequested = 0;
  this->m_gamePort = 0;
  this->m_localAddrs = NULL;
  bdUPnPConfig::reset(&this->m_config);
  this->m_discoverySocket.close(&this->m_discoverySocket);
  this->m_bytesReceived = 0;
  bdUPnPDevice::bdUPnPDevice(&v4);
  bdUPnPDevice::operator=(&this->m_device, v2);
  bdUPnPDevice::~bdUPnPDevice(&v4);
  bdUPnPDevice::bdUPnPDevice(&v4);
  bdUPnPDevice::operator=(&this->m_cachedDevice, v3);
  bdUPnPDevice::~bdUPnPDevice(&v4);
  bdStopwatch::reset(&this->m_discoveryTimer);
}

/*
==============
bdUPnP::extractDeviceInfo
==============
*/
char bdUPnP::extractDeviceInfo(bdUPnP *this, bdAddr *deviceAddr, char **fetchLoc, unsigned int *fetchLen)
{
  char *v7; 
  const char *v8; 
  char *v9; 
  char *v10; 
  char *v18; 
  bdAddr v20; 
  char dst[24]; 

  _RSI = deviceAddr;
  v7 = strstr_0(this->m_readBuffer, "http:
  if ( !v7 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::extractDeviceInfo", 0x219u, "no http:
    return 0;
  }
  v8 = v7 + 7;
  v9 = strstr_0(v7 + 7, "/");
  v10 = v9;
  if ( !v9 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::extractDeviceInfo", 0x214u, "No fetch path found after URL");
    return 0;
  }
  if ( (unsigned int)((_DWORD)v9 - (_DWORD)v8 - 1) > 0x14 )
    return 0;
  bdStrlcpy(dst, v8, (unsigned int)((_DWORD)v9 - (_DWORD)v8 + 1));
  bdAddr::bdAddr(&v20, dst);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsi+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsi+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rsi+60h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rsi+80h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rsi+90h], xmm1
  }
  v18 = strchr_0(v8, 13);
  if ( !v18 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::extractDeviceInfo", 0x20Eu, "No carriage return after fetch location");
    return 0;
  }
  *fetchLoc = v10;
  *fetchLen = (_DWORD)v18 - (_DWORD)v10;
  return 1;
}

/*
==============
bdUPnP::getDeviceDescriptor
==============
*/
const char *bdUPnP::getDeviceDescriptor(bdUPnP *this)
{
  return bdUPnPDevice::getDeviceDescriptor(&this->m_device);
}

/*
==============
bdUPnP::getExternalAddr
==============
*/
_BOOL8 bdUPnP::getExternalAddr(bdUPnP *this, bdAddr *externalAddr)
{
  bdAddr result; 

  _RBX = externalAddr;
  _RAX = bdUPnPDevice::getExternalAddr(&this->m_device, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbx+60h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rbx+80h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rbx+90h], xmm1
  }
  return bdSockAddr::isValid(&_RBX->m_address);
}

/*
==============
bdUPnP::getPortStatus
==============
*/
bdUPnPDevice::bdUPnPPortStatus bdUPnP::getPortStatus(bdUPnP *this)
{
  bdUPnPDevice *p_m_device; 

  p_m_device = &this->m_device;
  if ( bdUPnPDevice::getDeviceState(&this->m_device) == BD_UPNP_DEVICE_FINISHED )
    return bdUPnPDevice::getPortStatus(p_m_device);
  else
    return 0;
}

/*
==============
bdUPnP::getState
==============
*/
__int64 bdUPnP::getState(bdUPnP *this)
{
  return (unsigned int)this->m_state;
}

/*
==============
bdUPnP::handleDiscoveryResponse
==============
*/
_BOOL8 bdUPnP::handleDiscoveryResponse(bdUPnP *this, bdUPnPDevice *discoveredDevice)
{
  char *m_readBuffer; 
  char *v4; 
  const char *v5; 
  char *v6; 
  const char *v7; 
  char *v15; 
  unsigned int v16; 
  unsigned __int16 m_gamePort; 
  bdArray<bdSockAddr> *m_localAddrs; 
  const bdAddr *v21; 
  const bdAddr *v22; 
  unsigned int m_discoveryRetries; 
  unsigned int m_mappingRetries; 
  bool v26; 
  char v27; 
  unsigned int v28; 
  __int64 v29; 
  char v30; 
  int v31; 
  signed __int64 v32; 
  bdAddr *v33; 
  unsigned int v34; 
  bdUPnPConfig v37; 
  bdAddr other; 
  bdAddr v39; 
  bdUPnPDevice *v40; 
  char dst[24]; 

  _R13 = this;
  v40 = discoveredDevice;
  bdAddr::bdAddr(&other);
  m_readBuffer = _R13->m_readBuffer;
  v4 = strstr_0(_R13->m_readBuffer, "http:
  if ( !v4 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::extractDeviceInfo", 0x219u, "no http:
    return 0;
  }
  v5 = v4 + 7;
  v6 = strstr_0(v4 + 7, "/");
  v7 = v6;
  if ( !v6 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::extractDeviceInfo", 0x214u, "No fetch path found after URL");
    return 0;
  }
  if ( (unsigned int)((_DWORD)v6 - (_DWORD)v5 - 1) > 0x14 )
    return 0;
  bdStrlcpy(dst, v5, (unsigned int)((_DWORD)v6 - (_DWORD)v5 + 1));
  bdAddr::bdAddr(&v39, dst);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+1A0h+other.m_address.inUn], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+1A0h+other.m_address.inUn+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbp+1A0h+other.m_address.inUn+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbp+1A0h+other.m_address.inUn+60h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rbp+1A0h+other.m_relayRoute.m_relayID], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rbp+1A0h+other.m_type], xmm1
  }
  v15 = strchr_0(v5, 13);
  if ( !v15 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::extractDeviceInfo", 0x20Eu, "No carriage return after fetch location");
    return 0;
  }
  v16 = (_DWORD)v15 - (_DWORD)v7;
  bdAddr::toString(&other, dst, 0x16ui64);
  bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::handleDiscoveryResponse", 0x1AFu, "Discovered Device at address %s", dst);
  m_gamePort = _R13->m_gamePort;
  bdAddr::bdAddr(&v39, &other);
  __asm
  {
    vmovss  xmm0, dword ptr [r13+10h]
    vmovss  xmm1, dword ptr [r13+14h]
  }
  m_localAddrs = _R13->m_localAddrs;
  v22 = v21;
  LODWORD(v21) = _R13->m_config.m_portSelectionMode;
  v37.m_runMode = _R13->m_config.m_runMode;
  m_discoveryRetries = _R13->m_config.m_discoveryRetries;
  v37.m_portSelectionMode = (int)v21;
  LODWORD(v21) = _R13->m_config.m_portPoolSize;
  v37.m_discoveryRetries = m_discoveryRetries;
  m_mappingRetries = _R13->m_config.m_mappingRetries;
  v37.m_portPoolSize = (unsigned int)v21;
  LOBYTE(v21) = _R13->m_config.m_disabled;
  __asm
  {
    vmovss  [rsp+2A0h+var_258], xmm0
    vmovss  xmm0, dword ptr [r13+18h]
  }
  v37.m_mappingRetries = m_mappingRetries;
  v37.m_disabled = (char)v21;
  __asm
  {
    vmovss  [rsp+2A0h+var_254], xmm1
    vmovss  [rsp+2A0h+var_250], xmm0
  }
  bdSockAddr::bdSockAddr(&v37.m_gatewayAddr, &_R13->m_config.m_gatewayAddr);
  v37.m_onlyUseGateway = _R13->m_config.m_onlyUseGateway;
  v26 = bdUPnPDevice::init(v40, &v37, m_localAddrs, v22, v7, v16, m_gamePort);
  v27 = 0;
  v28 = 0;
  v40 = (bdUPnPDevice *)0x5245565245530Ai64;
  do
  {
    if ( !m_readBuffer )
      break;
    m_readBuffer = strstr_0(m_readBuffer, "\n");
    if ( m_readBuffer )
    {
      v27 = 1;
      v29 = 0i64;
      while ( 1 )
      {
        v30 = dst[v29 - 8 + m_readBuffer - (char *)&v40];
        if ( !v30 || toupper(v30) != dst[v29 - 8] )
          break;
        if ( (unsigned __int64)++v29 >= 7 )
          goto LABEL_14;
      }
      v27 = 0;
LABEL_14:
      ++m_readBuffer;
    }
  }
  while ( !v27 );
  memset_0(&v39, 0, 0x80ui64);
  if ( v27 )
  {
    v31 = 9217;
    v32 = m_readBuffer - (char *)&v39;
    v33 = &v39;
    do
    {
      v34 = *((unsigned __int8 *)&v33->m_address.inUn.m_sockaddrStorage.ss_family + v32);
      if ( (unsigned __int8)v34 <= 0xDu && _bittest(&v31, v34) )
        break;
      LOBYTE(v33->m_address.inUn.m_sockaddrStorage.ss_family) = v34;
      ++v28;
      v33 = (bdAddr *)((char *)v33 + 1);
    }
    while ( v28 < 0x7F );
    if ( v28 >= 0x80ui64 )
    {
      j___report_rangecheckfailure(v33);
      JUMPOUT(0x14372536Bi64);
    }
    *((_BYTE *)&v39.m_address.inUn.m_sockaddrStorage.ss_family + v28) = 0;
  }
  bdUPnPTelemetry::addDiscoveredDevice(&this->m_telemetry, &other, (const char *)&v39);
  return v26;
}

/*
==============
bdUPnP::init
==============
*/
char bdUPnP::init(bdUPnP *this, unsigned __int16 port, bdArray<bdSockAddr> *localAddrs, bdUPnPConfig *config)
{
  const void *v8; 
  unsigned __int16 m_gamePort; 
  bdUPnPTelemetry v28; 

  _RDI = this;
  _RSI = config;
  bdUPnPTelemetry::bdUPnPTelemetry(&v28);
  memcpy_0(&_RDI->m_telemetry, v8, sizeof(_RDI->m_telemetry));
  if ( _RSI->m_disabled )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::init", 0x2Fu, "UPnP disabled.");
    _RDI->m_state = BD_UPNP_UNINITIALISED;
  }
  else
  {
    if ( _RDI->m_state )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::init", 0x50u, "Cannot initialize class unless it is in the uninitialized state (%d).", _RDI->m_state);
      return 0;
    }
    if ( !localAddrs->m_size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::init", 0x4Bu, "Cannot start class unless at least one local common addr is supplied..");
      return 0;
    }
    _RDI->m_localAddrs = localAddrs;
    _RDI->m_gamePort = port;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rdi+10h], xmm0
      vmovups xmm1, xmmword ptr [rsi+10h]
      vmovups xmmword ptr [rdi+20h], xmm1
      vmovups xmm0, xmmword ptr [rsi+20h]
      vmovups xmmword ptr [rdi+30h], xmm0
      vmovups xmm1, xmmword ptr [rsi+30h]
      vmovups xmmword ptr [rdi+40h], xmm1
      vmovups xmm0, xmmword ptr [rsi+40h]
      vmovups xmmword ptr [rdi+50h], xmm0
      vmovups xmm1, xmmword ptr [rsi+50h]
      vmovups xmmword ptr [rdi+60h], xmm1
      vmovups xmm0, xmmword ptr [rsi+60h]
      vmovups xmmword ptr [rdi+70h], xmm0
      vmovups xmm0, xmmword ptr [rsi+70h]
      vmovups xmmword ptr [rdi+80h], xmm0
      vmovups xmm1, xmmword ptr [rsi+80h]
      vmovups xmmword ptr [rdi+90h], xmm1
      vmovups xmm0, xmmword ptr [rsi+90h]
      vmovups xmmword ptr [rdi+0A0h], xmm0
      vmovups xmm1, xmmword ptr [rsi+0A0h]
      vmovups xmmword ptr [rdi+0B0h], xmm1
    }
    bdUPnPConfig::sanityCheckConfig(&_RDI->m_config);
    if ( !bdSockAddr::isValid(&_RDI->m_config.m_gatewayAddr) )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::init", 0x40u, "Starting UPnP without setting a gateway address in the config. Will use first UPnP device found");
    __asm { vmovups ymm0, ymmword ptr [rdi+10h] }
    m_gamePort = _RDI->m_gamePort;
    __asm
    {
      vmovups ymmword ptr [rdi+5200h], ymm0
      vmovups ymm0, ymmword ptr [rdi+30h]
      vmovups ymmword ptr [rdi+5220h], ymm0
      vmovups ymm0, ymmword ptr [rdi+50h]
      vmovups ymmword ptr [rdi+5240h], ymm0
      vmovups ymm0, ymmword ptr [rdi+70h]
      vmovups ymmword ptr [rdi+5260h], ymm0
      vmovups ymm0, ymmword ptr [rdi+90h]
      vmovups ymmword ptr [rdi+5280h], ymm0
      vmovups xmm0, xmmword ptr [rdi+0B0h]
      vmovups xmmword ptr [rdi+52A0h], xmm0
    }
    _RDI->m_state = BD_UPNP_INITIALISED;
    _RDI->m_telemetry.m_gamePort = m_gamePort;
  }
  return 1;
}

/*
==============
bdUPnP::isRunning
==============
*/
bool bdUPnP::isRunning(bdUPnP *this)
{
  return (unsigned int)(this->m_state - 6) > 1 && this->m_state;
}

/*
==============
bdUPnP::pump
==============
*/
void bdUPnP::pump(bdUPnP *this)
{
  bdUPnP::bdUPnPState m_state; 
  bdUPnPTelemetry::bdUPnPTelemetryResultType v4; 
  char v5; 
  unsigned int i; 
  const char *v7; 
  unsigned int v8; 
  char v9; 
  unsigned int v11; 
  bool v12; 
  bdAddr *DeviceAddr; 
  double v14; 
  bdAddr result; 
  bdUPnPDevice buf; 

  _RDI = this;
  if ( this->m_shutdownRequested )
  {
    this->m_shutdownRequested = 0;
    this->m_state = BD_UPNP_SHUTTING_DOWN;
    m_state = BD_UPNP_SHUTTING_DOWN;
  }
  else
  {
    m_state = this->m_state;
  }
  switch ( m_state )
  {
    case BD_UPNP_UNINITIALISED:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x62u, "Pumping an uninitialized device has no effect.");
      return;
    case BD_UPNP_INITIALISED:
      if ( !((unsigned __int8 (__fastcall *)(bdSocket *, _QWORD, __int64))this->m_discoverySocket.create)(&this->m_discoverySocket, 0i64, 1i64) )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::setupDiscoverySocket", 0x16Bu, "Failed to create discovery socket.");
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x7Cu, "UPnP failed to setup discovery socket");
        v4 = BD_FAILED_TO_SETUP_DISCOVERY_SOCKET;
        goto LABEL_8;
      }
      v5 = 1;
      for ( i = 0; i < 2; ++i )
      {
        v7 = "WANPPPConnection:1";
        if ( !i )
          v7 = "WANIPConnection:1";
        v8 = bdSnprintf((char *)&buf, 0x88ui64, "M-SEARCH * HTTP/1.1\r\nMX: 1\r\nHOST: 239.255.255.250:1900\r\nMAN: \"ssdp:discover\"\r\nST: urn:schemas-upnp-org:service:%s\r\n\r\n", v7);
        bdAddr::bdAddr(&result, "239.255.255.250:1900");
        if ( _RDI->m_discoverySocket.sendTo(&_RDI->m_discoverySocket, &result, &buf, v8) != v8 )
        {
          v5 = 0;
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::startDiscovery", 0x185u, "Failed to send discovery packet");
        }
      }
      if ( !v5 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x75u, "UPnP failed to start discovery");
        v4 = BD_FAILED_TO_START_DISCOVERY;
        goto LABEL_8;
      }
      _RDI->m_bytesReceived = 0;
      memset_0(_RDI->m_readBuffer, 0, sizeof(_RDI->m_readBuffer));
      bdStopwatch::reset(&_RDI->m_discoveryTimer);
      bdStopwatch::start(&_RDI->m_discoveryTimer);
      _RDI->m_telemetry.m_numDiscoveryAttempts = ++_RDI->m_numDiscoveryAttempts;
      _RDI->m_state = BD_UPNP_DISCOVERING_DEVICES;
      return;
    case BD_UPNP_DISCOVERING_DEVICES:
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_discoveryTimer);
      __asm { vcomiss xmm0, dword ptr [rdi+10h] }
      if ( v9 )
      {
        bdUPnPDevice::bdUPnPDevice(&buf);
        bdAddr::bdAddr(&result);
        v11 = _RDI->m_discoverySocket.receiveFrom(&_RDI->m_discoverySocket, &result, _RDI->m_readBuffer, 1024u);
        if ( v11 - 1 > 0x3FF )
        {
          v12 = v11 == -2;
        }
        else
        {
          _RDI->m_bytesReceived = v11;
          _RDI->m_readBuffer[v11] = 0;
          v12 = bdUPnP::handleDiscoveryResponse(_RDI, &buf);
        }
        if ( bdUPnPDevice::getDeviceState(&buf) == BD_UPNP_DEVICE_INITIALISED )
        {
          if ( v12 )
          {
            if ( bdSockAddr::isValid(&_RDI->m_config.m_gatewayAddr) )
            {
              if ( !bdSockAddr::isValid(&_RDI->m_config.m_gatewayAddr) || (DeviceAddr = bdUPnPDevice::getDeviceAddr(&buf, &result), !bdSockAddr::compare(&DeviceAddr->m_address, &_RDI->m_config.m_gatewayAddr, 0)) )
              {
                if ( bdUPnPDevice::getDeviceState(&_RDI->m_cachedDevice) || !bdSockAddr::isValid(&_RDI->m_config.m_gatewayAddr) || _RDI->m_config.m_onlyUseGateway )
                {
                  bdUPnPDevice::startShutdown(&buf, BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE);
                  bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xC4u, "UPnP capable device discovered which does not match gateway. Ignoring.");
                }
                else
                {
                  bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xBEu, "UPnP capable device discovered which does not match gateway. Setting as cached device.");
                  bdUPnPDevice::operator=(&_RDI->m_cachedDevice, &buf);
                }
                goto LABEL_45;
              }
              bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xB5u, "UPnP capable device discovered which matches gateway. Finished Discovery.");
            }
            else
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xAEu, "UPnP capable device discovered and no gateway set - using it. Finished Discovery.");
            }
            bdUPnPDevice::operator=(&_RDI->m_device, &buf);
            _RDI->m_state = BD_UPNP_CONFIGURING_DEVICE;
LABEL_45:
            bdUPnPDevice::~bdUPnPDevice(&buf);
            return;
          }
        }
        else if ( v12 )
        {
          goto LABEL_45;
        }
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xCAu, "UPnP error discovering devices");
        _RDI->m_state = BD_UPNP_FAILED;
        bdUPnPTelemetry::setResult(&_RDI->m_telemetry, BD_FAILED_ERROR_DISCOVERING_DEVICES);
        bdTelemetry::addUPnP(&_RDI->m_telemetry);
        goto LABEL_45;
      }
      if ( bdUPnPDevice::getDeviceState(&_RDI->m_cachedDevice) == BD_UPNP_DEVICE_INITIALISED )
      {
        *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RDI->m_discoveryTimer);
        __asm
        {
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+24C8h+var_2490], xmm1
        }
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x88u, "Device discovery timed out after %fs. Using cached device", v14);
        bdUPnPDevice::operator=(&_RDI->m_device, &_RDI->m_cachedDevice);
        _RDI->m_state = BD_UPNP_DISCOVERED_DEVICE;
      }
      else
      {
        if ( !_RDI->m_discoverySocket.close(&_RDI->m_discoverySocket) )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x9Fu, "UPnP failed to close discovery socket");
          goto LABEL_49;
        }
        if ( _RDI->m_numDiscoveryAttempts > _RDI->m_config.m_discoveryRetries )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x98u, "Discovery timed out. Max retries reached. Stopping");
          _RDI->m_state = BD_UPNP_FINISHED;
          v4 = BD_FINISHED_DISCOVERY_ATTEMPTS_EXCEEDED;
          goto LABEL_9;
        }
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x93u, "Discovery timed out. Retrying.");
        _RDI->m_state = BD_UPNP_INITIALISED;
      }
      return;
    case BD_UPNP_DISCOVERED_DEVICE:
      if ( !((unsigned __int8 (*)(void))this->m_discoverySocket.close)() )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xD9u, "UPnP unable to close discovery socket");
LABEL_49:
        v4 = BD_FAILED_TO_CLOSE_DISCOVERY_SOCKET;
        goto LABEL_8;
      }
      _RDI->m_state = BD_UPNP_CONFIGURING_DEVICE;
      return;
    case BD_UPNP_CONFIGURING_DEVICE:
      bdUPnPDevice::pump(&this->m_device);
      if ( bdUPnPDevice::getDeviceState(&_RDI->m_device) == BD_UPNP_DEVICE_FINISHED )
      {
        _RDI->m_state = BD_UPNP_FINISHED;
        bdUPnPTelemetry::setDevice(&_RDI->m_telemetry, &_RDI->m_device);
        v4 = BD_FINISHED_WITH_DEVICE;
      }
      else
      {
        if ( bdUPnPDevice::getDeviceState(&_RDI->m_device) != BD_UPNP_DEVICE_FAILED && bdUPnPDevice::getDeviceState(&_RDI->m_device) )
          return;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xEBu, "UPnP failed to configure device");
        v4 = BD_FAILED_TO_CONFIGURE_DEVICE;
LABEL_8:
        _RDI->m_state = BD_UPNP_FAILED;
      }
LABEL_9:
      bdUPnPTelemetry::setResult(&_RDI->m_telemetry, v4);
      bdTelemetry::addUPnP(&_RDI->m_telemetry);
      return;
    case BD_UPNP_SHUTTING_DOWN:
      bdUPnPDevice::pump(&this->m_device);
      if ( bdUPnPDevice::getDeviceState(&_RDI->m_device) == BD_UPNP_DEVICE_UNINITIALISED )
        goto LABEL_59;
      if ( bdUPnPDevice::getDeviceState(&_RDI->m_device) == BD_UPNP_DEVICE_FAILED && _RDI->m_state )
      {
        bdUPnPDevice::startShutdown(&_RDI->m_device, BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE);
LABEL_59:
        bdUPnP::cleanup(_RDI);
      }
      return;
    case BD_UPNP_FINISHED:
      return;
    case BD_UPNP_FAILED:
      ((void (*)(void))this->m_discoverySocket.close)();
      return;
    default:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x10Du, "Pumping UPnP in Unknown State");
      _RDI->m_state = BD_UPNP_FAILED;
      return;
  }
}

/*
==============
bdUPnP::sendTelemetry
==============
*/
void bdUPnP::sendTelemetry(bdUPnP *this, bdUPnPTelemetry::bdUPnPTelemetryResultType result)
{
  bdUPnPTelemetry *p_m_telemetry; 

  p_m_telemetry = &this->m_telemetry;
  bdUPnPTelemetry::setResult(&this->m_telemetry, result);
  bdTelemetry::addUPnP(p_m_telemetry);
}

/*
==============
bdUPnP::setupDiscoverySocket
==============
*/
char bdUPnP::setupDiscoverySocket(bdUPnP *this)
{
  if ( ((unsigned __int8 (__fastcall *)(bdSocket *, _QWORD, __int64))this->m_discoverySocket.create)(&this->m_discoverySocket, 0i64, 1i64) )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::setupDiscoverySocket", 0x16Bu, "Failed to create discovery socket.");
  return 0;
}

/*
==============
bdUPnP::startDiscovery
==============
*/
__int64 bdUPnP::startDiscovery(bdUPnP *this)
{
  unsigned __int8 v1; 
  bdSocket *p_m_discoverySocket; 
  unsigned int i; 
  const char *v4; 
  unsigned int v5; 
  bdAddr v7; 
  char buf[144]; 

  v1 = 1;
  p_m_discoverySocket = &this->m_discoverySocket;
  for ( i = 0; i < 2; ++i )
  {
    v4 = "WANPPPConnection:1";
    if ( !i )
      v4 = "WANIPConnection:1";
    v5 = bdSnprintf(buf, 0x88ui64, "M-SEARCH * HTTP/1.1\r\nMX: 1\r\nHOST: 239.255.255.250:1900\r\nMAN: \"ssdp:discover\"\r\nST: urn:schemas-upnp-org:service:%s\r\n\r\n", v4);
    bdAddr::bdAddr(&v7, "239.255.255.250:1900");
    if ( p_m_discoverySocket->sendTo(p_m_discoverySocket, &v7, buf, v5) != v5 )
    {
      v1 = 0;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::startDiscovery", 0x185u, "Failed to send discovery packet");
    }
  }
  return v1;
}

/*
==============
bdUPnP::startShutdown
==============
*/
void bdUPnP::startShutdown(bdUPnP *this, const bdUPnPDevice::bdUPnPDeviceShutdownType shutdownType)
{
  if ( this->m_state )
  {
    if ( shutdownType == BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE )
    {
      bdUPnPDevice::startShutdown(&this->m_device, BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE);
      bdUPnP::cleanup(this);
    }
    else if ( shutdownType == BD_UPNP_DEVICE_SHUTDOWN_ELEGANT && this->m_state != BD_UPNP_SHUTTING_DOWN )
    {
      bdUPnPDevice::startShutdown(&this->m_device, BD_UPNP_DEVICE_SHUTDOWN_ELEGANT);
      this->m_shutdownRequested = 1;
    }
  }
}

