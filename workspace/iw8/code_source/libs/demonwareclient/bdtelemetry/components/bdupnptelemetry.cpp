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

  _RDI = this;
  m_discoveredDeviceCount = this->m_discoveredDeviceCount;
  _RSI = addr;
  if ( (unsigned int)m_discoveredDeviceCount < 4 )
  {
    _RDI->m_discoveredDeviceCount = m_discoveredDeviceCount + 1;
    _RBX = m_discoveredDeviceCount;
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RDI->m_age);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si rax, xmm1
    }
    _RDI->m_discoveredDevices[_RBX].msSinceStart = _RAX;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups ymmword ptr [rbx+rdi+10h], ymm0
      vmovups ymm1, ymmword ptr [rsi+20h]
      vmovups ymmword ptr [rbx+rdi+30h], ymm1
      vmovups ymm0, ymmword ptr [rsi+40h]
      vmovups ymmword ptr [rbx+rdi+50h], ymm0
      vmovups ymm1, ymmword ptr [rsi+60h]
      vmovups ymmword ptr [rbx+rdi+70h], ymm1
      vmovups xmm0, xmmword ptr [rsi+80h]
      vmovups xmmword ptr [rbx+rdi+90h], xmm0
      vmovsd  xmm1, qword ptr [rsi+90h]
      vmovsd  qword ptr [rbx+rdi+0A0h], xmm1
    }
    bdStrlcpy(_RDI->m_discoveredDevices[_RBX].serverField, serverField, 0x80ui64);
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

  _RDI = this;
  _RAX = bdUPnPDevice::getDeviceAddr((bdUPnPDevice *)device, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rdi+498h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rdi+4B8h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rdi+4D8h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rdi+4F8h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rdi+518h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rdi+528h], xmm1
  }
  _RAX = bdUPnPDevice::getExternalAddr((bdUPnPDevice *)device, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rdi+530h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rdi+550h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rdi+570h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rdi+590h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rdi+5B0h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rdi+5C0h], xmm1
  }
  _RDI->m_device.portStatus = bdUPnPDevice::getPortStatus((bdUPnPDevice *)device);
}

/*
==============
bdUPnPTelemetry::setResult
==============
*/
void bdUPnPTelemetry::setResult(bdUPnPTelemetry *this, bdUPnPTelemetry::bdUPnPTelemetryResultType result)
{
  unsigned __int8 v3; 

  v3 = result;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_duration = _RAX;
  this->m_result = v3;
}

