/*
==============
bdUPnPTelemetry::bdUPnPTelemetry
==============
*/

void __fastcall bdUPnPTelemetry::bdUPnPTelemetry(bdUPnPTelemetry *this)
{
  ??0bdUPnPTelemetry@@QEAA@XZ(this);
}

/*
==============
bdUPnPTelemetry::addDiscoveredDevice
==============
*/

void __fastcall bdUPnPTelemetry::addDiscoveredDevice(bdUPnPTelemetry *this, const bdAddr *addr, const char *serverField)
{
  ?addDiscoveredDevice@bdUPnPTelemetry@@QEAAXAEBVbdAddr@@PEBD@Z(this, addr, serverField);
}

/*
==============
bdUPnPTelemetry::setDevice
==============
*/

void __fastcall bdUPnPTelemetry::setDevice(bdUPnPTelemetry *this, const bdUPnPDevice *device)
{
  ?setDevice@bdUPnPTelemetry@@QEAAXAEBVbdUPnPDevice@@@Z(this, device);
}

/*
==============
bdUPnPTelemetry::setResult
==============
*/

void __fastcall bdUPnPTelemetry::setResult(bdUPnPTelemetry *this, bdUPnPTelemetry::bdUPnPTelemetryResultType result)
{
  ?setResult@bdUPnPTelemetry@@QEAAXW4bdUPnPTelemetryResultType@1@@Z(this, result);
}

/*
==============
bdUPnPTelemetry::bdUPnPTelemetry
==============
*/
void bdUPnPTelemetry::bdUPnPTelemetry(bdUPnPTelemetry *this)
{
  bdUPnPTelemetry::bdUPnPDiscoveredDeviceTelemetry *m_discoveredDevices; 
  __int64 v3; 

  bdStopwatch::bdStopwatch(&this->m_age);
  m_discoveredDevices = this->m_discoveredDevices;
  v3 = 4i64;
  do
  {
    bdUPnPTelemetry::bdUPnPDiscoveredDeviceTelemetry::bdUPnPDiscoveredDeviceTelemetry(m_discoveredDevices++);
    --v3;
  }
  while ( v3 );
  this->m_discoveredDeviceCount = 0;
  bdAddr::bdAddr(&this->m_device.addr);
  bdAddr::bdAddr(&this->m_device.externalAddr);
  this->m_gamePort = 0;
  this->m_numDiscoveryAttempts = 0;
  bdUPnPConfig::bdUPnPConfig(&this->m_config);
  this->m_duration = 0;
  this->m_result = 0;
  bdStopwatch::start(&this->m_age);
}

/*
==============
bdUPnPTelemetry::addDiscoveredDevice
==============
*/
void bdUPnPTelemetry::addDiscoveredDevice(bdUPnPTelemetry *this, const bdAddr *addr, const char *serverField)
{
  __int64 m_discoveredDeviceCount; 
  __int64 v7; 
  double ElapsedTimeInSeconds; 

  m_discoveredDeviceCount = this->m_discoveredDeviceCount;
  if ( (unsigned int)m_discoveredDeviceCount < 4 )
  {
    this->m_discoveredDeviceCount = m_discoveredDeviceCount + 1;
    v7 = m_discoveredDeviceCount;
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
    this->m_discoveredDevices[v7].msSinceStart = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
    *(__m256i *)&this->m_discoveredDevices[v7].address.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&addr->m_address.inUn.m_sockaddrStorage.ss_family;
    *((__m256i *)&this->m_discoveredDevices[v7].address.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&addr->m_address.inUn.m_ipv6Sockaddr + 1);
    *((__m256i *)&this->m_discoveredDevices[v7].address.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&addr->m_address.inUn.m_ipv6Sockaddr + 2);
    *((__m256i *)&this->m_discoveredDevices[v7].address.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&addr->m_address.inUn.m_ipv6Sockaddr + 3);
    this->m_discoveredDevices[v7].address.m_relayRoute = addr->m_relayRoute;
    *(double *)&this->m_discoveredDevices[v7].address.m_type = *(double *)&addr->m_type;
    bdStrlcpy(this->m_discoveredDevices[v7].serverField, serverField, 0x80ui64);
  }
}

/*
==============
bdUPnPTelemetry::setDevice
==============
*/
void bdUPnPTelemetry::setDevice(bdUPnPTelemetry *this, const bdUPnPDevice *device)
{
  bdAddr result; 

  this->m_device.addr = *bdUPnPDevice::getDeviceAddr((bdUPnPDevice *)device, &result);
  this->m_device.externalAddr = *bdUPnPDevice::getExternalAddr((bdUPnPDevice *)device, &result);
  this->m_device.portStatus = bdUPnPDevice::getPortStatus((bdUPnPDevice *)device);
}

/*
==============
bdUPnPTelemetry::setResult
==============
*/
void bdUPnPTelemetry::setResult(bdUPnPTelemetry *this, bdUPnPTelemetry::bdUPnPTelemetryResultType result)
{
  unsigned __int8 v2; 
  double ElapsedTimeInSeconds; 

  v2 = result;
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_duration = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  this->m_result = v2;
}

