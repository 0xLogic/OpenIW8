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
  __int64 v11; 
  char *v12; 
  bdAddr v14; 
  char dst[24]; 

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
  bdAddr::bdAddr(&v14, dst);
  *(__m256i *)&deviceAddr->m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)v11;
  *((__m256i *)&deviceAddr->m_address.inUn.m_ipv6Sockaddr + 1) = *(__m256i *)(v11 + 32);
  *((__m256i *)&deviceAddr->m_address.inUn.m_ipv6Sockaddr + 2) = *(__m256i *)(v11 + 64);
  *((__m256i *)&deviceAddr->m_address.inUn.m_ipv6Sockaddr + 3) = *(__m256i *)(v11 + 96);
  deviceAddr->m_relayRoute = *(bdRelayRoute *)(v11 + 128);
  *(double *)&deviceAddr->m_type = *(double *)(v11 + 144);
  v12 = strchr_0(v8, 13);
  if ( !v12 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::extractDeviceInfo", 0x20Eu, "No carriage return after fetch location");
    return 0;
  }
  *fetchLoc = v10;
  *fetchLen = (_DWORD)v12 - (_DWORD)v10;
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

  *externalAddr = *bdUPnPDevice::getExternalAddr(&this->m_device, &result);
  return bdSockAddr::isValid(&externalAddr->m_address);
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
  bdAddr *v8; 
  char *v9; 
  unsigned int v10; 
  unsigned __int16 m_gamePort; 
  float m_discoveryTimeout; 
  float m_responseTimeout; 
  bdArray<bdSockAddr> *m_localAddrs; 
  const bdAddr *v15; 
  const bdAddr *v16; 
  unsigned int m_discoveryRetries; 
  unsigned int m_mappingRetries; 
  float m_connectTimeout; 
  bool v20; 
  char v21; 
  unsigned int v22; 
  __int64 v23; 
  char v24; 
  int v25; 
  signed __int64 v26; 
  bdAddr *v27; 
  unsigned int v28; 
  bdUPnPConfig v31; 
  bdAddr other; 
  bdAddr v33; 
  bdUPnPDevice *v34; 
  char dst[24]; 

  v34 = discoveredDevice;
  bdAddr::bdAddr(&other);
  m_readBuffer = this->m_readBuffer;
  v4 = strstr_0(this->m_readBuffer, "http:
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
  bdAddr::bdAddr(&v33, dst);
  other = *v8;
  v9 = strchr_0(v5, 13);
  if ( !v9 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::extractDeviceInfo", 0x20Eu, "No carriage return after fetch location");
    return 0;
  }
  v10 = (_DWORD)v9 - (_DWORD)v7;
  bdAddr::toString(&other, dst, 0x16ui64);
  bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::handleDiscoveryResponse", 0x1AFu, "Discovered Device at address %s", dst);
  m_gamePort = this->m_gamePort;
  bdAddr::bdAddr(&v33, &other);
  m_discoveryTimeout = this->m_config.m_discoveryTimeout;
  m_responseTimeout = this->m_config.m_responseTimeout;
  m_localAddrs = this->m_localAddrs;
  v16 = v15;
  LODWORD(v15) = this->m_config.m_portSelectionMode;
  v31.m_runMode = this->m_config.m_runMode;
  m_discoveryRetries = this->m_config.m_discoveryRetries;
  v31.m_portSelectionMode = (int)v15;
  LODWORD(v15) = this->m_config.m_portPoolSize;
  v31.m_discoveryRetries = m_discoveryRetries;
  m_mappingRetries = this->m_config.m_mappingRetries;
  v31.m_portPoolSize = (unsigned int)v15;
  LOBYTE(v15) = this->m_config.m_disabled;
  v31.m_discoveryTimeout = m_discoveryTimeout;
  m_connectTimeout = this->m_config.m_connectTimeout;
  v31.m_mappingRetries = m_mappingRetries;
  v31.m_disabled = (char)v15;
  v31.m_responseTimeout = m_responseTimeout;
  v31.m_connectTimeout = m_connectTimeout;
  bdSockAddr::bdSockAddr(&v31.m_gatewayAddr, &this->m_config.m_gatewayAddr);
  v31.m_onlyUseGateway = this->m_config.m_onlyUseGateway;
  v20 = bdUPnPDevice::init(v34, &v31, m_localAddrs, v16, v7, v10, m_gamePort);
  v21 = 0;
  v22 = 0;
  v34 = (bdUPnPDevice *)0x5245565245530Ai64;
  do
  {
    if ( !m_readBuffer )
      break;
    m_readBuffer = strstr_0(m_readBuffer, "\n");
    if ( m_readBuffer )
    {
      v21 = 1;
      v23 = 0i64;
      while ( 1 )
      {
        v24 = dst[v23 - 8 + m_readBuffer - (char *)&v34];
        if ( !v24 || toupper(v24) != dst[v23 - 8] )
          break;
        if ( (unsigned __int64)++v23 >= 7 )
          goto LABEL_14;
      }
      v21 = 0;
LABEL_14:
      ++m_readBuffer;
    }
  }
  while ( !v21 );
  memset_0(&v33, 0, 0x80ui64);
  if ( v21 )
  {
    v25 = 9217;
    v26 = m_readBuffer - (char *)&v33;
    v27 = &v33;
    do
    {
      v28 = *((unsigned __int8 *)&v27->m_address.inUn.m_sockaddrStorage.ss_family + v26);
      if ( (unsigned __int8)v28 <= 0xDu && _bittest(&v25, v28) )
        break;
      LOBYTE(v27->m_address.inUn.m_sockaddrStorage.ss_family) = v28;
      ++v22;
      v27 = (bdAddr *)((char *)v27 + 1);
    }
    while ( v22 < 0x7F );
    if ( v22 >= 0x80ui64 )
    {
      j___report_rangecheckfailure(v27);
      JUMPOUT(0x14372536Bi64);
    }
    *((_BYTE *)&v33.m_address.inUn.m_sockaddrStorage.ss_family + v22) = 0;
  }
  bdUPnPTelemetry::addDiscoveredDevice(&this->m_telemetry, &other, (const char *)&v33);
  return v20;
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
  bdUPnPTelemetry v11; 

  bdUPnPTelemetry::bdUPnPTelemetry(&v11);
  memcpy_0(&this->m_telemetry, v8, sizeof(this->m_telemetry));
  if ( config->m_disabled )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::init", 0x2Fu, "UPnP disabled.");
    this->m_state = BD_UPNP_UNINITIALISED;
  }
  else
  {
    if ( this->m_state )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::init", 0x50u, "Cannot initialize class unless it is in the uninitialized state (%d).", this->m_state);
      return 0;
    }
    if ( !localAddrs->m_size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::init", 0x4Bu, "Cannot start class unless at least one local common addr is supplied..");
      return 0;
    }
    this->m_localAddrs = localAddrs;
    this->m_gamePort = port;
    *(_OWORD *)&this->m_config.m_discoveryTimeout = *(_OWORD *)&config->m_discoveryTimeout;
    *(_OWORD *)&this->m_config.m_discoveryRetries = *(_OWORD *)&config->m_discoveryRetries;
    *(_OWORD *)&this->m_config.m_disabled = *(_OWORD *)&config->m_disabled;
    this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr.sin6_addr = config->m_gatewayAddr.inUn.m_ipv6Sockaddr.sin6_addr;
    *(_OWORD *)&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr.sin6_scope_id = *(_OWORD *)&config->m_gatewayAddr.inUn.m_ipv6Sockaddr.sin6_scope_id;
    *(_OWORD *)((char *)&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 40) = *(_OWORD *)((char *)&config->m_gatewayAddr.inUn.m_ipv6Sockaddr + 40);
    *(_OWORD *)(&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 2) = *(_OWORD *)(&config->m_gatewayAddr.inUn.m_ipv6Sockaddr + 2);
    *(_OWORD *)((char *)&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 72) = *(_OWORD *)((char *)&config->m_gatewayAddr.inUn.m_ipv6Sockaddr + 72);
    *(_OWORD *)((char *)&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 88) = *(_OWORD *)((char *)&config->m_gatewayAddr.inUn.m_ipv6Sockaddr + 88);
    *(_OWORD *)((char *)&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 104) = *(_OWORD *)((char *)&config->m_gatewayAddr.inUn.m_ipv6Sockaddr + 104);
    *(_OWORD *)((char *)&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 120) = *(_OWORD *)((char *)&config->m_gatewayAddr.inUn.m_ipv6Sockaddr + 120);
    bdUPnPConfig::sanityCheckConfig(&this->m_config);
    if ( !bdSockAddr::isValid(&this->m_config.m_gatewayAddr) )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::init", 0x40u, "Starting UPnP without setting a gateway address in the config. Will use first UPnP device found");
    m_gamePort = this->m_gamePort;
    *(__m256i *)&this->m_telemetry.m_config.m_discoveryTimeout = *(__m256i *)&this->m_config.m_discoveryTimeout;
    *(__m256i *)&this->m_telemetry.m_config.m_disabled = *(__m256i *)&this->m_config.m_disabled;
    *(__m256i *)&this->m_telemetry.m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr.sin6_scope_id = *(__m256i *)&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr.sin6_scope_id;
    *(__m256i *)(&this->m_telemetry.m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 2) = *(__m256i *)(&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 2);
    *(__m256i *)((char *)&this->m_telemetry.m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 88) = *(__m256i *)((char *)&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 88);
    *(_OWORD *)((char *)&this->m_telemetry.m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 120) = *(_OWORD *)((char *)&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 120);
    this->m_state = BD_UPNP_INITIALISED;
    this->m_telemetry.m_gamePort = m_gamePort;
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
  bdUPnPTelemetry::bdUPnPTelemetryResultType v3; 
  char v4; 
  unsigned int i; 
  const char *v6; 
  unsigned int v7; 
  double ElapsedTimeInSeconds; 
  double v9; 
  unsigned int v10; 
  bool v11; 
  bdAddr *DeviceAddr; 
  bdAddr result; 
  bdUPnPDevice buf; 

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
        v3 = BD_FAILED_TO_SETUP_DISCOVERY_SOCKET;
        goto LABEL_8;
      }
      v4 = 1;
      for ( i = 0; i < 2; ++i )
      {
        v6 = "WANPPPConnection:1";
        if ( !i )
          v6 = "WANIPConnection:1";
        v7 = bdSnprintf((char *)&buf, 0x88ui64, "M-SEARCH * HTTP/1.1\r\nMX: 1\r\nHOST: 239.255.255.250:1900\r\nMAN: \"ssdp:discover\"\r\nST: urn:schemas-upnp-org:service:%s\r\n\r\n", v6);
        bdAddr::bdAddr(&result, "239.255.255.250:1900");
        if ( this->m_discoverySocket.sendTo(&this->m_discoverySocket, &result, &buf, v7) != v7 )
        {
          v4 = 0;
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::startDiscovery", 0x185u, "Failed to send discovery packet");
        }
      }
      if ( !v4 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x75u, "UPnP failed to start discovery");
        v3 = BD_FAILED_TO_START_DISCOVERY;
        goto LABEL_8;
      }
      this->m_bytesReceived = 0;
      memset_0(this->m_readBuffer, 0, sizeof(this->m_readBuffer));
      bdStopwatch::reset(&this->m_discoveryTimer);
      bdStopwatch::start(&this->m_discoveryTimer);
      this->m_telemetry.m_numDiscoveryAttempts = ++this->m_numDiscoveryAttempts;
      this->m_state = BD_UPNP_DISCOVERING_DEVICES;
      return;
    case BD_UPNP_DISCOVERING_DEVICES:
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_discoveryTimer);
      if ( *(float *)&ElapsedTimeInSeconds < this->m_config.m_discoveryTimeout )
      {
        bdUPnPDevice::bdUPnPDevice(&buf);
        bdAddr::bdAddr(&result);
        v10 = this->m_discoverySocket.receiveFrom(&this->m_discoverySocket, &result, this->m_readBuffer, 1024u);
        if ( v10 - 1 > 0x3FF )
        {
          v11 = v10 == -2;
        }
        else
        {
          this->m_bytesReceived = v10;
          this->m_readBuffer[v10] = 0;
          v11 = bdUPnP::handleDiscoveryResponse(this, &buf);
        }
        if ( bdUPnPDevice::getDeviceState(&buf) == BD_UPNP_DEVICE_INITIALISED )
        {
          if ( v11 )
          {
            if ( bdSockAddr::isValid(&this->m_config.m_gatewayAddr) )
            {
              if ( !bdSockAddr::isValid(&this->m_config.m_gatewayAddr) || (DeviceAddr = bdUPnPDevice::getDeviceAddr(&buf, &result), !bdSockAddr::compare(&DeviceAddr->m_address, &this->m_config.m_gatewayAddr, 0)) )
              {
                if ( bdUPnPDevice::getDeviceState(&this->m_cachedDevice) || !bdSockAddr::isValid(&this->m_config.m_gatewayAddr) || this->m_config.m_onlyUseGateway )
                {
                  bdUPnPDevice::startShutdown(&buf, BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE);
                  bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xC4u, "UPnP capable device discovered which does not match gateway. Ignoring.");
                }
                else
                {
                  bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xBEu, "UPnP capable device discovered which does not match gateway. Setting as cached device.");
                  bdUPnPDevice::operator=(&this->m_cachedDevice, &buf);
                }
                goto LABEL_45;
              }
              bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xB5u, "UPnP capable device discovered which matches gateway. Finished Discovery.");
            }
            else
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xAEu, "UPnP capable device discovered and no gateway set - using it. Finished Discovery.");
            }
            bdUPnPDevice::operator=(&this->m_device, &buf);
            this->m_state = BD_UPNP_CONFIGURING_DEVICE;
LABEL_45:
            bdUPnPDevice::~bdUPnPDevice(&buf);
            return;
          }
        }
        else if ( v11 )
        {
          goto LABEL_45;
        }
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xCAu, "UPnP error discovering devices");
        this->m_state = BD_UPNP_FAILED;
        bdUPnPTelemetry::setResult(&this->m_telemetry, BD_FAILED_ERROR_DISCOVERING_DEVICES);
        bdTelemetry::addUPnP(&this->m_telemetry);
        goto LABEL_45;
      }
      if ( bdUPnPDevice::getDeviceState(&this->m_cachedDevice) == BD_UPNP_DEVICE_INITIALISED )
      {
        v9 = bdStopwatch::getElapsedTimeInSeconds(&this->m_discoveryTimer);
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x88u, "Device discovery timed out after %fs. Using cached device", *(float *)&v9);
        bdUPnPDevice::operator=(&this->m_device, &this->m_cachedDevice);
        this->m_state = BD_UPNP_DISCOVERED_DEVICE;
      }
      else
      {
        if ( !this->m_discoverySocket.close(&this->m_discoverySocket) )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x9Fu, "UPnP failed to close discovery socket");
          goto LABEL_49;
        }
        if ( this->m_numDiscoveryAttempts > this->m_config.m_discoveryRetries )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x98u, "Discovery timed out. Max retries reached. Stopping");
          this->m_state = BD_UPNP_FINISHED;
          v3 = BD_FINISHED_DISCOVERY_ATTEMPTS_EXCEEDED;
          goto LABEL_9;
        }
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x93u, "Discovery timed out. Retrying.");
        this->m_state = BD_UPNP_INITIALISED;
      }
      return;
    case BD_UPNP_DISCOVERED_DEVICE:
      if ( !((unsigned __int8 (*)(void))this->m_discoverySocket.close)() )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xD9u, "UPnP unable to close discovery socket");
LABEL_49:
        v3 = BD_FAILED_TO_CLOSE_DISCOVERY_SOCKET;
        goto LABEL_8;
      }
      this->m_state = BD_UPNP_CONFIGURING_DEVICE;
      return;
    case BD_UPNP_CONFIGURING_DEVICE:
      bdUPnPDevice::pump(&this->m_device);
      if ( bdUPnPDevice::getDeviceState(&this->m_device) == BD_UPNP_DEVICE_FINISHED )
      {
        this->m_state = BD_UPNP_FINISHED;
        bdUPnPTelemetry::setDevice(&this->m_telemetry, &this->m_device);
        v3 = BD_FINISHED_WITH_DEVICE;
      }
      else
      {
        if ( bdUPnPDevice::getDeviceState(&this->m_device) != BD_UPNP_DEVICE_FAILED && bdUPnPDevice::getDeviceState(&this->m_device) )
          return;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0xEBu, "UPnP failed to configure device");
        v3 = BD_FAILED_TO_CONFIGURE_DEVICE;
LABEL_8:
        this->m_state = BD_UPNP_FAILED;
      }
LABEL_9:
      bdUPnPTelemetry::setResult(&this->m_telemetry, v3);
      bdTelemetry::addUPnP(&this->m_telemetry);
      return;
    case BD_UPNP_SHUTTING_DOWN:
      bdUPnPDevice::pump(&this->m_device);
      if ( bdUPnPDevice::getDeviceState(&this->m_device) == BD_UPNP_DEVICE_UNINITIALISED )
        goto LABEL_59;
      if ( bdUPnPDevice::getDeviceState(&this->m_device) == BD_UPNP_DEVICE_FAILED && this->m_state )
      {
        bdUPnPDevice::startShutdown(&this->m_device, BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE);
LABEL_59:
        bdUPnP::cleanup(this);
      }
      return;
    case BD_UPNP_FINISHED:
      return;
    case BD_UPNP_FAILED:
      ((void (*)(void))this->m_discoverySocket.close)();
      return;
    default:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnp", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnp.cpp", "bdUPnP::pump", 0x10Du, "Pumping UPnP in Unknown State");
      this->m_state = BD_UPNP_FAILED;
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

