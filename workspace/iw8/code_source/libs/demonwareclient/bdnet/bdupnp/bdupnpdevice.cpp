/*
==============
bdUPnPDevice::extractExternalAddress
==============
*/

bool __fastcall bdUPnPDevice::extractExternalAddress(bdUPnPDevice *this, bdSockAddr *externalAddress)
{
  return ?extractExternalAddress@bdUPnPDevice@@IEAA_NAEAVbdSockAddr@@@Z(this, externalAddress);
}

/*
==============
bdUPnPDevice::sendCreatePortMappingRequest
==============
*/

void __fastcall bdUPnPDevice::sendCreatePortMappingRequest(bdUPnPDevice *this)
{
  ?sendCreatePortMappingRequest@bdUPnPDevice@@IEAAXXZ(this);
}

/*
==============
bdUPnPDevice::setLocalConnectedAddr
==============
*/

bool __fastcall bdUPnPDevice::setLocalConnectedAddr(bdUPnPDevice *this)
{
  return ?setLocalConnectedAddr@bdUPnPDevice@@IEAA_NXZ(this);
}

/*
==============
bdUPnPDevice::genUPnPCommand
==============
*/

void __fastcall bdUPnPDevice::genUPnPCommand(bdUPnPDevice *this, const char *const command, const char *const arguments)
{
  ?genUPnPCommand@bdUPnPDevice@@IEAAXQEBD0@Z(this, command, arguments);
}

/*
==============
bdUPnPDevice::confirmHttpSuccess
==============
*/

bool __fastcall bdUPnPDevice::confirmHttpSuccess(bdUPnPDevice *this)
{
  return ?confirmHttpSuccess@bdUPnPDevice@@IEAA_NXZ(this);
}

/*
==============
bdUPnPDevice::getDeviceState
==============
*/

bdUPnPDevice::bdUPnPDeviceState __fastcall bdUPnPDevice::getDeviceState(bdUPnPDevice *this)
{
  return ?getDeviceState@bdUPnPDevice@@QEBA?AW4bdUPnPDeviceState@1@XZ(this);
}

/*
==============
bdUPnPDevice::prepareGetExternalIPRequest
==============
*/

void __fastcall bdUPnPDevice::prepareGetExternalIPRequest(bdUPnPDevice *this)
{
  ?prepareGetExternalIPRequest@bdUPnPDevice@@IEAAXXZ(this);
}

/*
==============
bdUPnPDevice::extractUPnPError
==============
*/

bool __fastcall bdUPnPDevice::extractUPnPError(bdUPnPDevice *this, int *errorCode)
{
  return ?extractUPnPError@bdUPnPDevice@@IEAA_NAEAH@Z(this, errorCode);
}

/*
==============
bdUPnPDevice::parseDescriptionResponse
==============
*/

bool __fastcall bdUPnPDevice::parseDescriptionResponse(bdUPnPDevice *this)
{
  return ?parseDescriptionResponse@bdUPnPDevice@@IEAA_NXZ(this);
}

/*
==============
bdUPnPDevice::bdUPnPDevice
==============
*/

void __fastcall bdUPnPDevice::bdUPnPDevice(bdUPnPDevice *this)
{
  ??0bdUPnPDevice@@QEAA@XZ(this);
}

/*
==============
bdUPnPDevice::selectNewExternalPort
==============
*/

void __fastcall bdUPnPDevice::selectNewExternalPort(bdUPnPDevice *this)
{
  ?selectNewExternalPort@bdUPnPDevice@@IEAAXXZ(this);
}

/*
==============
bdUPnPDevice::cleanup
==============
*/

void __fastcall bdUPnPDevice::cleanup(bdUPnPDevice *this)
{
  ?cleanup@bdUPnPDevice@@QEAAXXZ(this);
}

/*
==============
bdUPnPDevice::pumpSendRequest
==============
*/

bool __fastcall bdUPnPDevice::pumpSendRequest(bdUPnPDevice *this, bool *isComplete)
{
  return ?pumpSendRequest@bdUPnPDevice@@IEAA_NAEA_N@Z(this, isComplete);
}

/*
==============
bdUPnPDevice::checkForFinishedSoapResponse
==============
*/

bool __fastcall bdUPnPDevice::checkForFinishedSoapResponse(bdUPnPDevice *this)
{
  return ?checkForFinishedSoapResponse@bdUPnPDevice@@IEAA_NXZ(this);
}

/*
==============
bdUPnPDevice::extractTag
==============
*/

bool __fastcall bdUPnPDevice::extractTag(bdUPnPDevice *this, const char *tag, char *buffer, char **value, unsigned int *valueLen)
{
  return ?extractTag@bdUPnPDevice@@IEAA_NPEBDPEADPEAPEADAEAI@Z(this, tag, buffer, value, valueLen);
}

/*
==============
bdUPnPDevice::extractControlURL
==============
*/

bool __fastcall bdUPnPDevice::extractControlURL(bdUPnPDevice *this, char **controlLoc, unsigned int *controlLen)
{
  return ?extractControlURL@bdUPnPDevice@@IEAA_NPEAPEADAEAI@Z(this, controlLoc, controlLen);
}

/*
==============
bdUPnPDevice::getExternalAddr
==============
*/

bdAddr *__fastcall bdUPnPDevice::getExternalAddr(bdUPnPDevice *this, bdAddr *result)
{
  return ?getExternalAddr@bdUPnPDevice@@QEBA?AVbdAddr@@XZ(this, result);
}

/*
==============
bdUPnPDevice::extractServiceType
==============
*/

bool __fastcall bdUPnPDevice::extractServiceType(bdUPnPDevice *this, bool *serviceType)
{
  return ?extractServiceType@bdUPnPDevice@@IEAA_NAEA_N@Z(this, serviceType);
}

/*
==============
bdUPnPDevice::pumpReceive
==============
*/

bool __fastcall bdUPnPDevice::pumpReceive(bdUPnPDevice *this)
{
  return ?pumpReceive@bdUPnPDevice@@IEAA_NXZ(this);
}

/*
==============
bdUPnPDevice::getPortStatus
==============
*/

bdUPnPDevice::bdUPnPPortStatus __fastcall bdUPnPDevice::getPortStatus(bdUPnPDevice *this)
{
  return ?getPortStatus@bdUPnPDevice@@QEBA?AW4bdUPnPPortStatus@1@XZ(this);
}

/*
==============
bdUPnPDevice::parseGetExternalIPResponse
==============
*/

bool __fastcall bdUPnPDevice::parseGetExternalIPResponse(bdUPnPDevice *this)
{
  return ?parseGetExternalIPResponse@bdUPnPDevice@@IEAA_NXZ(this);
}

/*
==============
bdUPnPDevice::parseGetMappingsResponse
==============
*/

bool __fastcall bdUPnPDevice::parseGetMappingsResponse(bdUPnPDevice *this, bool *mappingExists, bool *mappingIsMine)
{
  return ?parseGetMappingsResponse@bdUPnPDevice@@IEAA_NAEA_N0@Z(this, mappingExists, mappingIsMine);
}

/*
==============
bdUPnPDevice::extractField
==============
*/

bool __fastcall bdUPnPDevice::extractField(bdUPnPDevice *this, char **fieldLoc, unsigned int *fieldLen, const char *fieldTag)
{
  return ?extractField@bdUPnPDevice@@IEAA_NPEAPEADAEAIPEBD@Z(this, fieldLoc, fieldLen, fieldTag);
}

/*
==============
bdUPnPDevice::preparePortUnMappingRequest
==============
*/

void __fastcall bdUPnPDevice::preparePortUnMappingRequest(bdUPnPDevice *this)
{
  ?preparePortUnMappingRequest@bdUPnPDevice@@IEAAXXZ(this);
}

/*
==============
bdUPnPDevice::getDeviceDescriptor
==============
*/

const char *__fastcall bdUPnPDevice::getDeviceDescriptor(bdUPnPDevice *this)
{
  return ?getDeviceDescriptor@bdUPnPDevice@@QEBAPEBDXZ(this);
}

/*
==============
bdUPnPDevice::pump
==============
*/

void __fastcall bdUPnPDevice::pump(bdUPnPDevice *this)
{
  ?pump@bdUPnPDevice@@QEAAXXZ(this);
}

/*
==============
bdUPnPDevice::startShutdown
==============
*/

void __fastcall bdUPnPDevice::startShutdown(bdUPnPDevice *this, const bdUPnPDevice::bdUPnPDeviceShutdownType shutdownType)
{
  ?startShutdown@bdUPnPDevice@@QEAAXW4bdUPnPDeviceShutdownType@1@@Z(this, shutdownType);
}

/*
==============
bdUPnPDevice::extractURLBase
==============
*/

bool __fastcall bdUPnPDevice::extractURLBase(bdUPnPDevice *this, char **baseLoc, unsigned int *baseLen)
{
  return ?extractURLBase@bdUPnPDevice@@IEAA_NPEAPEADAEAI@Z(this, baseLoc, baseLen);
}

/*
==============
bdUPnPDevice::prepareCreatePortMappingRequest
==============
*/

void __fastcall bdUPnPDevice::prepareCreatePortMappingRequest(bdUPnPDevice *this)
{
  ?prepareCreatePortMappingRequest@bdUPnPDevice@@IEAAXXZ(this);
}

/*
==============
bdUPnPDevice::~bdUPnPDevice
==============
*/

void __fastcall bdUPnPDevice::~bdUPnPDevice(bdUPnPDevice *this)
{
  ??1bdUPnPDevice@@QEAA@XZ(this);
}

/*
==============
bdUPnPDevice::prepareGetMappingsRequest
==============
*/

void __fastcall bdUPnPDevice::prepareGetMappingsRequest(bdUPnPDevice *this)
{
  ?prepareGetMappingsRequest@bdUPnPDevice@@IEAAXXZ(this);
}

/*
==============
bdUPnPDevice::extractMappingOwner
==============
*/

bool __fastcall bdUPnPDevice::extractMappingOwner(bdUPnPDevice *this, bdSockAddr *owner, char *addrLoc, unsigned int addrLen)
{
  return ?extractMappingOwner@bdUPnPDevice@@IEAA_NAEAVbdSockAddr@@PEADI@Z(this, owner, addrLoc, addrLen);
}

/*
==============
bdUPnPDevice::prepareGetDescriptionRequest
==============
*/

void __fastcall bdUPnPDevice::prepareGetDescriptionRequest(bdUPnPDevice *this)
{
  ?prepareGetDescriptionRequest@bdUPnPDevice@@IEAAXXZ(this);
}

/*
==============
bdUPnPDevice::getDeviceAddr
==============
*/

bdAddr *__fastcall bdUPnPDevice::getDeviceAddr(bdUPnPDevice *this, bdAddr *result)
{
  return ?getDeviceAddr@bdUPnPDevice@@QEBA?AVbdAddr@@XZ(this, result);
}

/*
==============
bdUPnPDevice::init
==============
*/

bool __fastcall bdUPnPDevice::init(bdUPnPDevice *this, const bdUPnPConfig *config, bdArray<bdSockAddr> *localAddrs, const bdAddr *deviceAddress, const char *const fetchLocation, const unsigned int fetchLocationLength, const unsigned __int16 port)
{
  return ?init@bdUPnPDevice@@QEAA_NVbdUPnPConfig@@PEAV?$bdArray@VbdSockAddr@@@@VbdAddr@@QEBDIG@Z(this, config, localAddrs, deviceAddress, fetchLocation, fetchLocationLength, port);
}

/*
==============
bdUPnPDevice::setupReceive
==============
*/

void __fastcall bdUPnPDevice::setupReceive(bdUPnPDevice *this)
{
  ?setupReceive@bdUPnPDevice@@IEAAXXZ(this);
}

/*
==============
bdUPnPDevice::connectToDevice
==============
*/

bool __fastcall bdUPnPDevice::connectToDevice(bdUPnPDevice *this)
{
  return ?connectToDevice@bdUPnPDevice@@IEAA_NXZ(this);
}

/*
==============
bdUPnPDevice::bdUPnPDevice
==============
*/
void bdUPnPDevice::bdUPnPDevice(bdUPnPDevice *this)
{
  this->m_state = BD_UPNP_DEVICE_UNINITIALISED;
  this->m_shutdownRequested = 0;
  this->m_portStatus = BD_UPNP_PORT_STATUS_UNKNOWN;
  bdAddr::bdAddr(&this->m_deviceAddr);
  this->m_localAddrs = NULL;
  bdSockAddr::bdSockAddr(&this->m_localConnectedAddr);
  bdStreamSocket::bdStreamSocket(&this->m_streamSocket);
  this->m_isIp = 1;
  bdUPnPConfig::bdUPnPConfig(&this->m_config);
  *(_DWORD *)&this->m_gamePort = 0;
  bdSockAddr::bdSockAddr(&this->m_externalDeviceAddr);
  this->m_requestSize = 0;
  this->m_bytesReceived = 0;
  bdStopwatch::bdStopwatch(&this->m_connectTimer);
  bdStopwatch::bdStopwatch(&this->m_responseTimer);
  this->m_mappingAttempts = 0;
}

/*
==============
bdUPnPDevice::~bdUPnPDevice
==============
*/
void bdUPnPDevice::~bdUPnPDevice(bdUPnPDevice *this)
{
  bdStreamSocket::~bdStreamSocket(&this->m_streamSocket);
}

/*
==============
bdUPnPDevice::checkForFinishedSoapResponse
==============
*/
bool bdUPnPDevice::checkForFinishedSoapResponse(bdUPnPDevice *this)
{
  return strstr_0(this->m_readBuffer, "</s:Envelope>") != NULL;
}

/*
==============
bdUPnPDevice::cleanup
==============
*/
void bdUPnPDevice::cleanup(bdUPnPDevice *this)
{
  bdStreamSocket_vtbl *v14; 
  bdUPnPConfig v32; 

  _RBX = this;
  this->m_state = BD_UPNP_DEVICE_UNINITIALISED;
  this->m_shutdownRequested = 0;
  this->m_portStatus = BD_UPNP_PORT_STATUS_UNKNOWN;
  bdAddr::bdAddr((bdAddr *)&v32);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+10h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+30h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+50h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbx+70h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rbx+90h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rbx+0A0h], xmm1
  }
  _RBX->m_localAddrs = NULL;
  bdSockAddr::bdSockAddr((bdSockAddr *)&v32);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+0B0h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+0D0h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+0F0h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
  }
  v14 = _RBX->m_streamSocket.__vftable;
  __asm { vmovups ymmword ptr [rbx+110h], ymm1 }
  ((void (*)(void))v14->close)();
  bdUPnPConfig::bdUPnPConfig(&v32);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbx+148h], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rbx+158h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbx+168h], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups xmmword ptr [rbx+178h], xmm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rbx+188h], xmm0
    vmovups xmm1, xmmword ptr [rax+50h]
    vmovups xmmword ptr [rbx+198h], xmm1
    vmovups xmm0, xmmword ptr [rax+60h]
    vmovups xmmword ptr [rbx+1A8h], xmm0
    vmovups xmm0, xmmword ptr [rax+70h]
    vmovups xmmword ptr [rbx+1B8h], xmm0
    vmovups xmm1, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rbx+1C8h], xmm1
    vmovups xmm0, xmmword ptr [rax+90h]
    vmovups xmmword ptr [rbx+1D8h], xmm0
    vmovups xmm1, xmmword ptr [rax+0A0h]
    vmovups xmmword ptr [rbx+1E8h], xmm1
  }
  *(_DWORD *)&_RBX->m_gamePort = 0;
  bdSockAddr::bdSockAddr((bdSockAddr *)&v32);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+200h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+220h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+240h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbx+260h], ymm1
  }
  _RBX->m_requestSize = 0;
  _RBX->m_bytesReceived = 0;
  _RBX->m_mappingAttempts = 0;
}

/*
==============
bdUPnPDevice::confirmHttpSuccess
==============
*/
bool bdUPnPDevice::confirmHttpSuccess(bdUPnPDevice *this)
{
  return strstr_0(this->m_readBuffer, "200 OK") != NULL;
}

/*
==============
bdUPnPDevice::connectToDevice
==============
*/
char bdUPnPDevice::connectToDevice(bdUPnPDevice *this)
{
  const bdAddr *v2; 
  bdSocketStatusCode v3; 
  bdAddr v5; 

  if ( !bdStreamSocket::create(&this->m_streamSocket, 0) )
    return 0;
  if ( !bdSockAddr::getPort(&this->m_deviceAddr.m_address) )
    bdSockAddr::setPort(&this->m_deviceAddr.m_address, 0x50u);
  bdAddr::bdAddr(&v5, &this->m_deviceAddr);
  v3 = bdStreamSocket::connect(&this->m_streamSocket, v2);
  if ( v3 != BD_NET_SUCCESS && v3 != BD_NET_WOULD_BLOCK )
    return 0;
  bdStopwatch::reset(&this->m_connectTimer);
  bdStopwatch::start(&this->m_connectTimer);
  return 1;
}

/*
==============
bdUPnPDevice::extractControlURL
==============
*/
bool bdUPnPDevice::extractControlURL(bdUPnPDevice *this, char **controlLoc, unsigned int *controlLen)
{
  const char *v4; 
  char *v7; 
  char *v9; 
  char *v10; 
  char *v11; 
  char *v12; 
  int v13; 
  unsigned int v14; 
  char *v15; 
  char *v16; 
  __int64 v17; 
  const char *v18; 
  char *v19; 
  unsigned int v20; 
  char SubStr[8]; 
  char v23[8]; 
  char dst[24]; 

  *controlLoc = NULL;
  *controlLen = 0;
  v4 = "WANIPConnection:1";
  if ( !this->m_isIp )
    v4 = "WANPPPConnection:1";
  v7 = strstr_0(this->m_readBuffer, v4);
  if ( v7 )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr cs:aControlurl; "<controlURL"
      vmovsd  qword ptr [rsp+0A8h+SubStr], xmm0
    }
    strcpy(v23, "URL");
    v9 = strstr_0(v7, SubStr);
    if ( v9 )
    {
      v10 = strstr_0(v9, ">");
      if ( v10 )
      {
        v11 = v10 + 1;
        v12 = strstr_0(v10 + 1, "</");
        if ( v12 )
        {
          v13 = (_DWORD)v12 - (_DWORD)v11;
          v14 = v13;
          if ( !v13 )
            v11 = NULL;
          if ( !v13 )
            v14 = 0;
          if ( v13 )
          {
            v15 = strstr_0(v11, "http:
            v16 = &v11[v14];
            if ( v15 == v11 )
            {
              bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
              v17 = -1i64;
              do
                ++v17;
              while ( aHttp[v17] );
              v18 = &v15[v17];
              v19 = strstr_0(v18, "/");
              v11 = v19;
              if ( !v19 || v19 > v16 )
                v11 = v16;
              if ( (unsigned int)((_DWORD)v11 - (_DWORD)v18) < 0x16 )
              {
                bdStrlcpy(dst, v18, (unsigned int)((_DWORD)v11 - (_DWORD)v18 + 1));
                bdAddr::set(&this->m_deviceAddr, dst);
              }
              v20 = (_DWORD)v16 - (_DWORD)v11;
            }
            else
            {
              v20 = v14;
            }
            *controlLoc = v11;
            LOBYTE(v7) = 1;
            *controlLen = v20;
            return (char)v7;
          }
        }
        else
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", SubStr);
        }
      }
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractControlURL", 0x3F5u, "ControlURL specifier tag is missing");
    LOBYTE(v7) = 0;
  }
  return (char)v7;
}

/*
==============
bdUPnPDevice::extractExternalAddress
==============
*/
char bdUPnPDevice::extractExternalAddress(bdUPnPDevice *this, bdSockAddr *externalAddress)
{
  char *v10; 
  char *v11; 
  _BYTE *v12; 
  char *v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  size_t v17; 
  bdSockAddr v19; 
  char SubStr[16]; 
  char v21[8]; 
  char addr[24]; 

  _RBP = externalAddress;
  bdSockAddr::bdSockAddr(&v19);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+0], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbp+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbp+60h], ymm1
    vmovups xmm0, xmmword ptr cs:aNewexternalipa; "<NewExternalIPAddress"
  }
  strcpy(v21, "dress");
  __asm { vmovups xmmword ptr [rsp+118h+SubStr], xmm0 }
  v10 = strstr_0(this->m_readBuffer, SubStr);
  if ( v10 )
  {
    v11 = strstr_0(v10, ">");
    if ( v11 )
    {
      v12 = v11 + 1;
      v13 = strstr_0(v11 + 1, "</");
      if ( v13 )
      {
        v14 = (_DWORD)v13 - (_DWORD)v12;
        v15 = v14;
        if ( !v14 )
          v12 = NULL;
        if ( !v14 )
          v15 = 0;
        if ( v14 )
        {
          if ( (unsigned int)(v15 - 1) > 0x14 )
            return 0;
          v16 = (unsigned int)(v15 + 1);
          bdHandleAssert(v12 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v17 = -1i64;
          do
            ++v17;
          while ( v12[v17] );
          if ( v16 )
          {
            if ( v17 >= v16 - 1 )
              v17 = v16 - 1;
            memcpy_0(addr, v12, v17);
            addr[v17] = 0;
          }
          bdSockAddr::set(_RBP, addr);
          bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractExternalAddress", 0x442u, "External address on device determined to be: %s", addr);
        }
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", SubStr);
      }
    }
  }
  return 1;
}

/*
==============
bdUPnPDevice::extractField
==============
*/
bool bdUPnPDevice::extractField(bdUPnPDevice *this, char **fieldLoc, unsigned int *fieldLen, const char *fieldTag)
{
  char *v7; 
  char *v8; 
  char *v9; 
  char *v10; 
  unsigned int v11; 
  unsigned int v12; 
  bool result; 

  *fieldLoc = NULL;
  *fieldLen = 0;
  v7 = strstr_0(this->m_readBuffer, fieldTag);
  if ( !v7 )
    return 0;
  v8 = strstr_0(v7, ">");
  if ( !v8 )
    return 0;
  v9 = v8 + 1;
  v10 = strstr_0(v8 + 1, "</");
  if ( !v10 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", fieldTag);
    return 0;
  }
  v11 = (_DWORD)v10 - (_DWORD)v9;
  v12 = v11;
  if ( !v11 )
    v9 = NULL;
  if ( !v11 )
    v12 = 0;
  if ( !v11 )
    return 0;
  *fieldLoc = v9;
  result = 1;
  *fieldLen = v12;
  return result;
}

/*
==============
bdUPnPDevice::extractMappingOwner
==============
*/
char bdUPnPDevice::extractMappingOwner(bdUPnPDevice *this, bdSockAddr *owner, char *addrLoc, unsigned int addrLen)
{
  __int64 v12; 
  size_t v13; 
  bdSockAddr other; 
  char addr[24]; 

  _RBP = owner;
  bdSockAddr::bdSockAddr(&other);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+0], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbp+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbp+60h], ymm1
  }
  if ( addrLen - 1 > 0x14 )
    return 0;
  v12 = addrLen + 1;
  bdHandleAssert(addrLoc != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v13 = -1i64;
  do
    ++v13;
  while ( addrLoc[v13] );
  if ( v12 )
  {
    if ( v13 >= v12 - 1 )
      v13 = v12 - 1;
    memcpy_0(addr, addrLoc, v13);
    addr[v13] = 0;
  }
  bdSockAddr::bdSockAddr(&other, addr);
  if ( !bdSockAddr::isValid(&other) )
    return 0;
  bdSockAddr::set(_RBP, &other);
  return 1;
}

/*
==============
bdUPnPDevice::extractServiceType
==============
*/
char bdUPnPDevice::extractServiceType(bdUPnPDevice *this, bool *serviceType)
{
  char *m_readBuffer; 

  m_readBuffer = this->m_readBuffer;
  if ( strstr_0(this->m_readBuffer, "WANIPConnection:1") )
  {
    *serviceType = 1;
    return 1;
  }
  else if ( strstr_0(m_readBuffer, "WANPPPConnection:1") )
  {
    *serviceType = 0;
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractServiceType", 0x3AEu, "No service type found.");
    return 0;
  }
}

/*
==============
bdUPnPDevice::extractTag
==============
*/
bool bdUPnPDevice::extractTag(bdUPnPDevice *this, const char *tag, char *buffer, char **value, unsigned int *valueLen)
{
  char *v7; 
  char *v8; 
  char *v9; 

  *value = NULL;
  *valueLen = 0;
  v7 = strstr_0(buffer, tag);
  if ( v7 )
  {
    v8 = strstr_0(v7, ">");
    if ( v8 )
    {
      v9 = v8 + 1;
      v7 = strstr_0(v8 + 1, "</");
      if ( v7 )
      {
        LODWORD(v7) = (_DWORD)v7 - (_DWORD)v9;
        if ( (_DWORD)v7 )
        {
          *value = v9;
          *valueLen = (unsigned int)v7;
          LOBYTE(v7) = 1;
          return (char)v7;
        }
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", tag);
      }
    }
    LOBYTE(v7) = 0;
  }
  return (char)v7;
}

/*
==============
bdUPnPDevice::extractUPnPError
==============
*/
char bdUPnPDevice::extractUPnPError(bdUPnPDevice *this, int *errorCode)
{
  char *m_readBuffer; 
  char *v4; 
  char *v5; 
  const void *v6; 
  char *v7; 
  unsigned int v8; 
  unsigned int v9; 
  size_t v10; 
  char v12[4]; 
  char v13; 

  m_readBuffer = this->m_readBuffer;
  if ( !strstr_0(this->m_readBuffer, "UPnPError") )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractUPnPError", 0x290u, "Attempted to parse error code from successful response");
    return 0;
  }
  v4 = strstr_0(m_readBuffer, "<errorCode");
  if ( !v4 || (v5 = strstr_0(v4, ">")) == NULL )
  {
LABEL_15:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractUPnPError", 0x28Bu, "Unable to parse error code from UPnP error response");
    return 0;
  }
  v6 = v5 + 1;
  v7 = strstr_0(v5 + 1, "</");
  if ( !v7 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", "<errorCode");
    goto LABEL_15;
  }
  v8 = (_DWORD)v7 - (_DWORD)v6;
  v9 = v8;
  if ( !v8 )
    v9 = 0;
  if ( !v8 )
    v6 = NULL;
  if ( !v8 )
    goto LABEL_15;
  v10 = 4i64;
  *(_DWORD *)v12 = 0;
  v13 = 0;
  if ( v9 < 4 )
    v10 = v9;
  memcpy_0(v12, v6, v10);
  *errorCode = atoi(v12);
  return 1;
}

/*
==============
bdUPnPDevice::extractURLBase
==============
*/
char bdUPnPDevice::extractURLBase(bdUPnPDevice *this, char **baseLoc, unsigned int *baseLen)
{
  char *v7; 
  char *v8; 
  const char *v9; 
  char *v10; 
  unsigned int v11; 
  __int64 v12; 
  char *v13; 
  const char *v14; 
  size_t v15; 
  __int64 v16; 
  const char *v17; 
  char *v18; 
  unsigned int v19; 
  __int64 v20; 
  char SubStr[8]; 
  char v23; 
  char socketAddress[24]; 

  *baseLoc = NULL;
  *baseLen = 0;
  __asm
  {
    vmovsd  xmm0, qword ptr cs:aUrlbase; "<URLBase"
    vmovsd  qword ptr [rsp+0A8h+SubStr], xmm0
  }
  v23 = aUrlbase[8];
  v7 = strstr_0(this->m_readBuffer, SubStr);
  if ( !v7 )
    return 1;
  v8 = strstr_0(v7, ">");
  if ( !v8 )
    return 1;
  v9 = v8 + 1;
  v10 = strstr_0(v8 + 1, "</");
  if ( !v10 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", SubStr);
    return 1;
  }
  v11 = (_DWORD)v10 - (_DWORD)v9;
  v12 = v11;
  if ( !v11 )
    v9 = NULL;
  if ( !v11 )
    v12 = 0i64;
  if ( !v11 )
    return 1;
  v13 = strstr_0(v9, "http:
  if ( v13 == v9 )
  {
    v14 = &v9[v12];
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v15 = -1i64;
    v16 = -1i64;
    do
      ++v16;
    while ( aHttp[v16] );
    v17 = &v13[v16];
    v18 = strstr_0(v17, "/");
    if ( v18 >= v14 )
    {
      LODWORD(v18) = (_DWORD)v14;
    }
    else
    {
      *baseLoc = v18;
      *baseLen = (_DWORD)v14 - (_DWORD)v18;
    }
    v19 = (_DWORD)v18 - (_DWORD)v17;
    if ( v19 >= 0x16 )
    {
      return 0;
    }
    else
    {
      v20 = v19 + 1;
      bdHandleAssert(v17 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      do
        ++v15;
      while ( v17[v15] );
      if ( v20 )
      {
        if ( v15 >= v20 - 1 )
          v15 = v20 - 1;
        memcpy_0(socketAddress, v17, v15);
        socketAddress[v15] = 0;
      }
      bdAddr::set(&this->m_deviceAddr, socketAddress);
      return 1;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractURLBase", 0x38Fu, "Description [URLBase tag] is improperly formatted. Missing http:
    return 0;
  }
}

/*
==============
bdUPnPDevice::genUPnPCommand
==============
*/
void bdUPnPDevice::genUPnPCommand(bdUPnPDevice *this, const char *const command, const char *const arguments)
{
  const char *v3; 
  const char *v6; 
  int v7; 
  unsigned int v8; 
  char str[32]; 
  char buf[688]; 

  v3 = "WANPPPConnection:1";
  v6 = "WANPPPConnection:1";
  if ( this->m_isIp )
    v6 = "WANIPConnection:1";
  v7 = bdSnprintf(buf, 0x2AAui64, "<s:Envelope xmlns:s=\"http:
  bdAddr::toString(&this->m_deviceAddr, str, 0x16ui64);
  if ( this->m_isIp )
    v3 = "WANIPConnection:1";
  v8 = bdSnprintf(this->m_requestBuffer, 0x800ui64, "POST %s HTTP/1.1\r\nHOST: %s\r\nSOAPACTION: \"urn:schemas-upnp-org:service:%s#%s\"\r\nCONTENT-TYPE: text/xml; charset=\"utf-8\"\r\nCONTENT-LENGTH: %d\r\n\r\n%s", this->m_controlURL, str, v3, command, v7, buf);
  this->m_requestSize = v8;
  bdHandleAssert(v8 < 0x800, "m_requestSize < BD_UPNP_MAX_DEVICE_REQUEST_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::genUPnPCommand", 0x2C6u, "Request is too large for buffer");
}

/*
==============
bdUPnPDevice::getDeviceAddr
==============
*/
bdAddr *bdUPnPDevice::getDeviceAddr(bdUPnPDevice *this, bdAddr *result)
{
  bdAddr::bdAddr(result, &this->m_deviceAddr);
  return result;
}

/*
==============
bdUPnPDevice::getDeviceDescriptor
==============
*/
char *bdUPnPDevice::getDeviceDescriptor(bdUPnPDevice *this)
{
  return this->m_deviceDescriptor;
}

/*
==============
bdUPnPDevice::getDeviceState
==============
*/
__int64 bdUPnPDevice::getDeviceState(bdUPnPDevice *this)
{
  return (unsigned int)this->m_state;
}

/*
==============
bdUPnPDevice::getExternalAddr
==============
*/
bdAddr *bdUPnPDevice::getExternalAddr(bdUPnPDevice *this, bdAddr *result)
{
  bdAddr::bdAddr(result, &this->m_externalDeviceAddr, this->m_gamePort);
  return result;
}

/*
==============
bdUPnPDevice::getPortStatus
==============
*/
__int64 bdUPnPDevice::getPortStatus(bdUPnPDevice *this)
{
  return (unsigned int)this->m_portStatus;
}

/*
==============
bdUPnPDevice::init
==============
*/
char bdUPnPDevice::init(bdUPnPDevice *this, const bdUPnPConfig *config, bdArray<bdSockAddr> *localAddrs, const bdAddr *deviceAddress, const char *const fetchLocation, const unsigned int fetchLocationLength, const unsigned __int16 port)
{
  bdUPnPDevice *v7; 

  v7 = this;
  if ( this->m_state )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::init", 0x42u, "Cannot initialize class unless it is in the uninitialized state.");
    return 0;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r9]
      vmovups ymmword ptr [rcx+10h], ymm0
      vmovups ymm1, ymmword ptr [r9+20h]
      vmovups ymmword ptr [rcx+30h], ymm1
      vmovups ymm0, ymmword ptr [r9+40h]
      vmovups ymmword ptr [rcx+50h], ymm0
      vmovups ymm1, ymmword ptr [r9+60h]
      vmovups ymmword ptr [rcx+70h], ymm1
      vmovups xmm0, xmmword ptr [r9+80h]
      vmovups xmmword ptr [rcx+90h], xmm0
      vmovsd  xmm1, qword ptr [r9+90h]
      vmovsd  qword ptr [rcx+0A0h], xmm1
    }
    this->m_gamePort = port;
    this->m_externalPort = port;
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vmovups xmmword ptr [rcx+148h], xmm0
      vmovups xmm1, xmmword ptr [rdx+10h]
      vmovups xmmword ptr [rcx+158h], xmm1
      vmovups xmm0, xmmword ptr [rdx+20h]
      vmovups xmmword ptr [rcx+168h], xmm0
      vmovups xmm1, xmmword ptr [rdx+30h]
      vmovups xmmword ptr [rcx+178h], xmm1
      vmovups xmm0, xmmword ptr [rdx+40h]
      vmovups xmmword ptr [rcx+188h], xmm0
      vmovups xmm1, xmmword ptr [rdx+50h]
      vmovups xmmword ptr [rcx+198h], xmm1
      vmovups xmm0, xmmword ptr [rdx+60h]
      vmovups xmmword ptr [rcx+1A8h], xmm0
      vmovups xmm0, xmmword ptr [rdx+70h]
      vmovups xmmword ptr [rcx+1B8h], xmm0
      vmovups xmm1, xmmword ptr [rdx+80h]
      vmovups xmmword ptr [rcx+1C8h], xmm1
      vmovups xmm0, xmmword ptr [rdx+90h]
      vmovups xmmword ptr [rcx+1D8h], xmm0
      vmovups xmm1, xmmword ptr [rdx+0A0h]
    }
    this->m_localAddrs = localAddrs;
    __asm { vmovups xmmword ptr [rcx+1E8h], xmm1 }
    bdSnprintf(this->m_fetchLocation, fetchLocationLength + 1, fetchLocation);
    v7->m_state = BD_UPNP_DEVICE_INITIALISED;
    v7->m_portStatus = BD_UPNP_PORT_STATUS_UNKNOWN;
    v7->m_shutdownRequested = 0;
    if ( bdStreamSocket::isConnected(&v7->m_streamSocket) )
      v7->m_streamSocket.close(&v7->m_streamSocket);
    return 1;
  }
}

/*
==============
bdUPnPDevice::parseDescriptionResponse
==============
*/
bool bdUPnPDevice::parseDescriptionResponse(bdUPnPDevice *this)
{
  char *v2; 
  unsigned int v3; 
  char *v4; 
  int v5; 
  char *v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  char *v10; 
  char *v11; 
  const char *v12; 
  char *v13; 
  unsigned int v14; 
  unsigned int v15; 
  char *v16; 
  char *v17; 
  const char *v18; 
  char *v19; 
  int v20; 
  int v21; 
  char *v22; 
  const char *v23; 
  unsigned __int64 v24; 
  char *m_controlURL; 
  char *controlLoc; 
  bool v28; 
  unsigned int baseLen; 
  const char *controlLen; 
  char *baseLoc; 

  baseLoc = NULL;
  baseLen = 0;
  v28 = 0;
  v2 = NULL;
  controlLoc = NULL;
  v3 = 0;
  LODWORD(controlLen) = 0;
  v4 = NULL;
  v5 = 0;
  v6 = strstr_0(this->m_readBuffer, "200 OK");
  v7 = v6 != NULL;
  if ( v6 )
  {
    v8 = bdUPnPDevice::extractURLBase(this, &baseLoc, &baseLen);
    v2 = baseLoc;
    v3 = baseLen;
    if ( !v8 )
      goto LABEL_11;
    if ( strstr_0(this->m_readBuffer, "WANIPConnection:1") )
    {
      v28 = 1;
    }
    else
    {
      if ( !strstr_0(this->m_readBuffer, "WANPPPConnection:1") )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractServiceType", 0x3AEu, "No service type found.");
LABEL_11:
        v7 = 0;
        goto LABEL_12;
      }
      v28 = 0;
    }
    v9 = bdUPnPDevice::extractControlURL(this, &controlLoc, (unsigned int *)&controlLen);
    v4 = controlLoc;
    v5 = (int)controlLen;
    v7 = v9;
  }
LABEL_12:
  v10 = strstr_0(this->m_readBuffer, "<manufacturer");
  if ( !v10 )
    goto LABEL_33;
  v11 = strstr_0(v10, ">");
  if ( !v11 )
    goto LABEL_33;
  v12 = v11 + 1;
  v13 = strstr_0(v11 + 1, "</");
  if ( !v13 )
  {
    v23 = "<manufacturer";
    goto LABEL_32;
  }
  v14 = (_DWORD)v13 - (_DWORD)v12;
  v15 = v14;
  if ( !v14 )
    v12 = NULL;
  controlLen = v12;
  if ( !v14 )
    v15 = 0;
  baseLen = v15;
  if ( v14 )
  {
    v16 = strstr_0(this->m_readBuffer, "<modelNumber");
    if ( v16 )
    {
      v17 = strstr_0(v16, ">");
      if ( v17 )
      {
        v18 = v17 + 1;
        v19 = strstr_0(v17 + 1, "</");
        if ( v19 )
        {
          v20 = (_DWORD)v19 - (_DWORD)v18;
          v21 = v20;
          if ( !v20 )
            v18 = NULL;
          if ( !v20 )
            v21 = 0;
          if ( v20 && v21 + baseLen + 1 < 0x40 )
          {
            bdStrlcpy(this->m_deviceDescriptor, controlLen, baseLen + 1);
            v22 = (char *)this + baseLen;
            v22[9052] = 92;
            bdStrlcpy(v22 + 9053, v18, (unsigned int)(v21 + 1));
          }
          goto LABEL_33;
        }
        v23 = "<modelNumber";
LABEL_32:
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", v23);
      }
    }
  }
LABEL_33:
  if ( !v7 )
    return v7;
  this->m_isIp = v28;
  if ( v3 && v5 + v3 < 0x80 )
  {
    if ( v2[v3 - 1] == 47 && *v4 == 47 )
    {
      ++v4;
      --v5;
    }
    bdStrlcpy(this->m_controlURL, v2, v3 + 1);
    v24 = (unsigned int)(v5 + 1);
    m_controlURL = &this->m_controlURL[v3];
    goto LABEL_40;
  }
  if ( (unsigned int)(v5 - 1) <= 0x7E )
  {
    v24 = (unsigned int)(v5 + 1);
    m_controlURL = this->m_controlURL;
LABEL_40:
    bdStrlcpy(m_controlURL, v4, v24);
    return v7;
  }
  return 0;
}

/*
==============
bdUPnPDevice::parseGetExternalIPResponse
==============
*/
bool bdUPnPDevice::parseGetExternalIPResponse(bdUPnPDevice *this)
{
  char *v2; 
  bool v3; 
  char *v10; 
  char *v11; 
  _BYTE *v12; 
  char *v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  size_t v17; 
  bdSockAddr v23; 
  bdSockAddr v24; 
  char SubStr[16]; 
  char v26[8]; 
  char addr[24]; 

  _RSI = this;
  bdSockAddr::bdSockAddr(&v23);
  v2 = strstr_0(_RSI->m_readBuffer, "200 OK");
  v3 = v2 != NULL;
  if ( !v2 )
    return v3;
  bdSockAddr::bdSockAddr(&v24);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+188h+var_148.inUn], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+188h+var_148.inUn+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsp+188h+var_148.inUn+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups xmm0, xmmword ptr cs:aNewexternalipa; "<NewExternalIPAddress"
  }
  strcpy(v26, "dress");
  __asm
  {
    vmovups ymmword ptr [rsp+188h+var_148.inUn+60h], ymm1
    vmovups xmmword ptr [rsp+188h+SubStr], xmm0
  }
  v10 = strstr_0(_RSI->m_readBuffer, SubStr);
  if ( v10 )
  {
    v11 = strstr_0(v10, ">");
    if ( v11 )
    {
      v12 = v11 + 1;
      v13 = strstr_0(v11 + 1, "</");
      if ( v13 )
      {
        v14 = (_DWORD)v13 - (_DWORD)v12;
        v15 = v14;
        if ( !v14 )
          v12 = NULL;
        if ( !v14 )
          v15 = 0;
        if ( v14 )
        {
          if ( (unsigned int)(v15 - 1) > 0x14 )
            return 0;
          v16 = (unsigned int)(v15 + 1);
          bdHandleAssert(v12 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v17 = -1i64;
          do
            ++v17;
          while ( v12[v17] );
          if ( v16 )
          {
            if ( v17 >= v16 - 1 )
              v17 = v16 - 1;
            memcpy_0(addr, v12, v17);
            addr[v17] = 0;
          }
          bdSockAddr::set(&v23, addr);
          bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractExternalAddress", 0x442u, "External address on device determined to be: %s", addr);
          v3 = 1;
          goto LABEL_22;
        }
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", SubStr);
      }
    }
  }
  v3 = 1;
LABEL_22:
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+188h+var_148.inUn]
    vmovups ymm1, ymmword ptr [rsp+188h+var_148.inUn+20h]
    vmovups ymmword ptr [rsi+200h], ymm0
    vmovups ymm0, ymmword ptr [rsp+188h+var_148.inUn+40h]
    vmovups ymmword ptr [rsi+220h], ymm1
    vmovups ymm1, ymmword ptr [rsp+188h+var_148.inUn+60h]
    vmovups ymmword ptr [rsi+240h], ymm0
    vmovups ymmword ptr [rsi+260h], ymm1
  }
  return v3;
}

/*
==============
bdUPnPDevice::parseGetMappingsResponse
==============
*/
char bdUPnPDevice::parseGetMappingsResponse(bdUPnPDevice *this, bool *mappingExists, bool *mappingIsMine)
{
  unsigned int v3; 
  _BYTE *v8; 
  int v9; 
  char *v10; 
  char *v11; 
  char *v12; 
  char *v13; 
  int v14; 
  char v15; 
  __int64 v21; 
  size_t v22; 
  bdArray<bdSockAddr> *m_localAddrs; 
  bdSockAddr other; 
  bdSockAddr v32; 
  bdSockAddr v33; 
  char SubStr[16]; 
  __int16 v35; 
  char v36; 
  char addr[24]; 

  v3 = 0;
  __asm { vmovups xmm0, xmmword ptr cs:aNewinternalcli; "<NewInternalClient" }
  v35 = *(_WORD *)"nt";
  *mappingExists = 0;
  v36 = aNewinternalcli[18];
  *mappingIsMine = 0;
  __asm { vmovups xmmword ptr [rbp+130h+SubStr], xmm0 }
  v8 = NULL;
  v9 = 0;
  v10 = strstr_0(this->m_readBuffer, "200 OK");
  *mappingExists = v10 != NULL;
  if ( !v10 )
    goto LABEL_10;
  v11 = strstr_0(this->m_readBuffer, SubStr);
  if ( !v11 || (v12 = strstr_0(v11, ">")) == NULL )
  {
LABEL_31:
    *mappingExists = 0;
    return 1;
  }
  v8 = v12 + 1;
  v13 = strstr_0(v12 + 1, "</");
  if ( !v13 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", SubStr);
    goto LABEL_31;
  }
  v9 = (_DWORD)v13 - (_DWORD)v8;
  v14 = (_DWORD)v13 - (_DWORD)v8;
  if ( (_DWORD)v13 == (_DWORD)v8 )
    v8 = NULL;
  if ( !v9 )
    v9 = 0;
  if ( !v14 )
    goto LABEL_31;
LABEL_10:
  if ( !*mappingExists )
    return 1;
  bdSockAddr::bdSockAddr(&v32);
  v15 = 0;
  bdSockAddr::bdSockAddr(&v33);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+130h+var_170.inUn], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+130h+var_170.inUn+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbp+130h+var_170.inUn+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbp+130h+var_170.inUn+60h], ymm1
  }
  if ( (unsigned int)(v9 - 1) <= 0x14 )
  {
    v21 = (unsigned int)(v9 + 1);
    bdHandleAssert(v8 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v22 = -1i64;
    do
      ++v22;
    while ( v8[v22] );
    if ( v21 )
    {
      if ( v22 >= v21 - 1 )
        v22 = v21 - 1;
      memcpy_0(addr, v8, v22);
      addr[v22] = 0;
    }
    bdSockAddr::bdSockAddr(&other, addr);
    if ( bdSockAddr::isValid(&other) )
    {
      bdSockAddr::set(&v32, &other);
      v15 = 1;
    }
  }
  if ( this->m_localAddrs->m_size )
  {
    while ( !*mappingIsMine )
    {
      bdSockAddr::bdSockAddr(&other);
      m_localAddrs = this->m_localAddrs;
      if ( v3 < m_localAddrs->m_size )
      {
        _RAX = m_localAddrs->m_data;
        _RCX = (unsigned __int64)v3 << 7;
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+rax]
          vmovups ymmword ptr [rsp+230h+other.inUn], ymm0
          vmovups ymm1, ymmword ptr [rcx+rax+20h]
          vmovups ymmword ptr [rsp+230h+other.inUn+20h], ymm1
          vmovups ymm0, ymmword ptr [rcx+rax+40h]
          vmovups ymmword ptr [rbp+130h+other.inUn+40h], ymm0
          vmovups ymm1, ymmword ptr [rcx+rax+60h]
          vmovups ymmword ptr [rbp+130h+other.inUn+60h], ymm1
        }
      }
      if ( bdSockAddr::compare(&other, &v32, 0) )
        *mappingIsMine = 1;
      if ( ++v3 >= this->m_localAddrs->m_size )
        goto LABEL_27;
    }
  }
  else
  {
LABEL_27:
    if ( !*mappingIsMine )
    {
      bdSockAddr::toString(&v32, addr, 0x16ui64);
      bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::parseGetMappingsResponse", 0x48Bu, "Port Mapping collision found, owned by %s.", addr);
    }
  }
  return v15;
}

/*
==============
bdUPnPDevice::prepareCreatePortMappingRequest
==============
*/
void bdUPnPDevice::prepareCreatePortMappingRequest(bdUPnPDevice *this)
{
  int m_gamePort; 
  char str[32]; 
  char buf[416]; 

  bdSockAddr::toString(&this->m_localConnectedAddr, str, 0x16ui64);
  m_gamePort = this->m_gamePort;
  bdSnprintf(buf, 0x19Cui64, "      <NewRemoteHost></NewRemoteHost>\r\n      <NewExternalPort>%d</NewExternalPort>\r\n      <NewProtocol>UDP</NewProtocol>\r\n      <NewInternalPort>%d</NewInternalPort>\r\n      <NewInternalClient>%s</NewInternalClient>\r\n      <NewEnabled>1</NewEnabled>\r\n      <NewPortMappingDescription>DemonwarePortMapping</NewPortMappingDescription>\r\n      <NewLeaseDuration>0</NewLeaseDuration>\r\n", this->m_externalPort, m_gamePort, str);
  bdUPnPDevice::genUPnPCommand(this, "AddPortMapping", buf);
}

/*
==============
bdUPnPDevice::prepareGetDescriptionRequest
==============
*/
void bdUPnPDevice::prepareGetDescriptionRequest(bdUPnPDevice *this)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  char str[24]; 

  v2 = bdAddr::toString(&this->m_deviceAddr, str, 0x16ui64);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( s_getRequest[v4] );
  bdHandleAssert(this->m_fetchLocation != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v3;
  while ( this->m_fetchLocation[v3] );
  bdHandleAssert((unsigned int)(v4 + v2 + v3) < 0x800, "totalRequestSize < BD_UPNP_MAX_DEVICE_REQUEST_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::prepareGetDescriptionRequest", 0x2FAu, "Request is too large for buffer");
  this->m_requestSize = bdSnprintf(this->m_requestBuffer, 0x800ui64, "GET %s HTTP/1.1\r\nConnection: close\r\nHost: %s\r\n\r\n", this->m_fetchLocation, str);
}

/*
==============
bdUPnPDevice::prepareGetExternalIPRequest
==============
*/
void bdUPnPDevice::prepareGetExternalIPRequest(bdUPnPDevice *this)
{
  bdUPnPDevice::genUPnPCommand(this, "GetExternalIPAddress", "\r\n");
}

/*
==============
bdUPnPDevice::prepareGetMappingsRequest
==============
*/
void bdUPnPDevice::prepareGetMappingsRequest(bdUPnPDevice *this)
{
  int m_gamePort; 
  char buf[112]; 

  bdSnprintf(buf, 0x6Eui64, "<NewRemoteHost></NewRemoteHost>\r\n<NewExternalPort>%d</NewExternalPort>\r\n<NewProtocol>UDP</NewProtocol>\r\n", this->m_gamePort);
  bdUPnPDevice::genUPnPCommand(this, "GetSpecificPortMappingEntry", buf);
  m_gamePort = this->m_gamePort;
  bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::prepareGetMappingsRequest", 0x45Du, "Querying UPnP device for existing mappings on port %u.", m_gamePort);
}

/*
==============
bdUPnPDevice::preparePortUnMappingRequest
==============
*/
void bdUPnPDevice::preparePortUnMappingRequest(bdUPnPDevice *this)
{
  char buf[112]; 

  bdSnprintf(buf, 0x6Eui64, "<NewRemoteHost></NewRemoteHost>\r\n<NewExternalPort>%d</NewExternalPort>\r\n<NewProtocol>UDP</NewProtocol>\r\n", this->m_gamePort);
  bdUPnPDevice::genUPnPCommand(this, "DeletePortMapping", buf);
}

/*
==============
bdUPnPDevice::pump
==============
*/
void bdUPnPDevice::pump(bdUPnPDevice *this)
{
  int v2; 
  bdUPnPDevice::bdUPnPDeviceState m_state; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  bool v7; 
  bdArray<bdSockAddr> *m_localAddrs; 
  unsigned int m_size; 
  bool v15; 
  bool v16; 
  char *v17; 
  char *v18; 
  const void *v19; 
  char *v20; 
  unsigned int v21; 
  unsigned int v22; 
  size_t v23; 
  int v24; 
  unsigned int m_mappingRetries; 
  unsigned int m_mappingAttempts; 
  bdTrulyRandomImpl *v27; 
  unsigned int v28; 
  unsigned int v29; 
  bdTrulyRandomImpl *Instance; 
  bool v31; 
  __int64 v32; 
  bool isComplete[4]; 
  char v34[4]; 
  char v35; 
  char str[32]; 
  char buf[112]; 

  _RDI = this;
  v2 = 14;
  if ( this->m_shutdownRequested )
  {
    this->m_shutdownRequested = 0;
    m_state = BD_UPNP_DEVICE_SHUTTING_DOWN;
    this->m_state = BD_UPNP_DEVICE_SHUTTING_DOWN;
  }
  else
  {
    m_state = this->m_state;
  }
  switch ( m_state )
  {
    case BD_UPNP_DEVICE_UNINITIALISED:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x54u, "Pumping an uninitialized device has no effect.");
      return;
    case BD_UPNP_DEVICE_INITIALISED:
      v4 = bdAddr::toString(&this->m_deviceAddr, str, 0x16ui64);
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v5 = -1i64;
      v6 = -1i64;
      do
        ++v6;
      while ( s_getRequest[v6] );
      bdHandleAssert(_RDI->m_fetchLocation != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      do
        ++v5;
      while ( _RDI->m_fetchLocation[v5] );
      bdHandleAssert((unsigned int)(v6 + v4 + v5) < 0x800, "totalRequestSize < BD_UPNP_MAX_DEVICE_REQUEST_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::prepareGetDescriptionRequest", 0x2FAu, "Request is too large for buffer");
      _RDI->m_requestSize = bdSnprintf(_RDI->m_requestBuffer, 0x800ui64, "GET %s HTTP/1.1\r\nConnection: close\r\nHost: %s\r\n\r\n", _RDI->m_fetchLocation, str);
      if ( bdUPnPDevice::connectToDevice(_RDI) )
      {
        v2 = 2;
        goto LABEL_98;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x60u, "Failed to connect to device.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_SENDING_DESCRIPTION_REQ:
      isComplete[0] = 0;
      v7 = bdUPnPDevice::pumpSendRequest(this, isComplete);
      if ( isComplete[0] )
      {
        if ( v7 )
        {
          m_localAddrs = _RDI->m_localAddrs;
          m_size = m_localAddrs->m_size;
          if ( m_size )
          {
            bdHandleAssert(m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdSockAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
            _RAX = m_localAddrs->m_data;
            v2 = 3;
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovups ymmword ptr [rdi+0B0h], ymm0
              vmovups ymm1, ymmword ptr [rax+20h]
              vmovups ymmword ptr [rdi+0D0h], ymm1
              vmovups ymm0, ymmword ptr [rax+40h]
              vmovups ymmword ptr [rdi+0F0h], ymm0
              vmovups ymm1, ymmword ptr [rax+60h]
              vmovups ymmword ptr [rdi+110h], ymm1
            }
            goto LABEL_98;
          }
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x72u, "Failed to set the local addr.");
          goto LABEL_97;
        }
      }
      else if ( v7 )
      {
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x78u, "Failed to send device description request.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_GETTING_DESCRIPTION:
      if ( bdUPnPDevice::pumpReceive(this) )
        return;
      if ( bdUPnPDevice::parseDescriptionResponse(_RDI) )
      {
        _RDI->m_state = BD_UPNP_DEVICE_GOT_DESCRIPTION;
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x88u, "Failed to parse the device description.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_GOT_DESCRIPTION:
      bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x90u, "Successfully received the device description");
      bdUPnPDevice::genUPnPCommand(_RDI, "GetExternalIPAddress", "\r\n");
      if ( bdUPnPDevice::connectToDevice(_RDI) )
      {
        v2 = 5;
        goto LABEL_98;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x99u, "Failed to connect to device.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_SENDING_IP_REQ:
      isComplete[0] = 0;
      v15 = bdUPnPDevice::pumpSendRequest(this, isComplete);
      if ( isComplete[0] )
      {
        if ( v15 )
        {
          _RDI->m_state = BD_UPNP_DEVICE_DISCOVERING_IP;
          return;
        }
      }
      else if ( v15 )
      {
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xA9u, "Failed to send the exernal IP request.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_DISCOVERING_IP:
      if ( bdUPnPDevice::pumpReceive(this) )
        return;
      if ( bdUPnPDevice::parseGetExternalIPResponse(_RDI) )
      {
        _RDI->m_state = BD_UPNP_DEVICE_DISCOVERED_IP;
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xB9u, "Failed to parse the external IP response.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_DISCOVERED_IP:
      if ( this->m_config.m_runMode == BD_UPNP_DO_PORT_MAPPING )
        goto LABEL_65;
      bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xCAu, "UPnP device configuration complete");
      v2 = 15;
      goto LABEL_98;
    case BD_UPNP_DEVICE_SENDING_MAPPING_REQ:
      isComplete[0] = 0;
      v16 = bdUPnPDevice::pumpSendRequest(this, isComplete);
      if ( isComplete[0] )
      {
        if ( v16 )
        {
          _RDI->m_state = BD_UPNP_DEVICE_MAPPING_PORT;
          return;
        }
      }
      else if ( v16 )
      {
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xDAu, "Failed to send port mapping request.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_MAPPING_PORT:
      if ( bdUPnPDevice::pumpReceive(this) )
        return;
      if ( strstr_0(_RDI->m_readBuffer, "200 OK") )
      {
        _RDI->m_state = BD_UPNP_DEVICE_MAPPED_PORT;
        _RDI->m_portStatus = BD_UPNP_PORT_MAPPED;
        return;
      }
      if ( !strstr_0(_RDI->m_readBuffer, "UPnPError") )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractUPnPError", 0x290u, "Attempted to parse error code from successful response");
        goto LABEL_73;
      }
      v17 = strstr_0(_RDI->m_readBuffer, "<errorCode");
      if ( !v17 )
        goto LABEL_71;
      v18 = strstr_0(v17, ">");
      if ( !v18 )
        goto LABEL_71;
      v19 = v18 + 1;
      v20 = strstr_0(v18 + 1, "</");
      if ( !v20 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", "<errorCode");
LABEL_71:
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractUPnPError", 0x28Bu, "Unable to parse error code from UPnP error response");
LABEL_73:
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x10Au, "Failed to map port.");
        goto LABEL_97;
      }
      v21 = (_DWORD)v20 - (_DWORD)v19;
      v22 = v21;
      if ( !v21 )
        v22 = 0;
      if ( !v21 )
        v19 = NULL;
      if ( !v21 )
        goto LABEL_71;
      v23 = 4i64;
      *(_DWORD *)v34 = 0;
      v35 = 0;
      if ( v22 < 4 )
        v23 = v22;
      memcpy_0(v34, v19, v23);
      v24 = atoi(v34);
      if ( v24 == 718 )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xEEu, "UPnP port mapping of external port %d already in use", _RDI->m_externalPort);
        m_mappingRetries = _RDI->m_config.m_mappingRetries;
        m_mappingAttempts = _RDI->m_mappingAttempts;
        if ( m_mappingAttempts >= m_mappingRetries + 1 )
        {
          LODWORD(v32) = _RDI->m_mappingAttempts;
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xF8u, "Unable to create UPnP port mapping after %d attempts", v32);
          goto LABEL_97;
        }
        if ( _RDI->m_config.m_portSelectionMode == BD_UPNP_PORT_SELECTION_EXPANDING_RANDOM )
        {
          v29 = m_mappingAttempts * _RDI->m_config.m_portPoolSize / m_mappingRetries;
          Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
          v28 = bdTrulyRandomImpl::getRandomUInt(Instance) % v29;
        }
        else
        {
          if ( _RDI->m_config.m_portSelectionMode != BD_UPNP_PORT_SELECTION_RANDOM )
          {
            ++_RDI->m_externalPort;
            bdUPnPDevice::sendCreatePortMappingRequest(_RDI);
            return;
          }
          v27 = bdSingleton<bdTrulyRandomImpl>::getInstance();
          v28 = bdTrulyRandomImpl::getRandomUInt(v27) % _RDI->m_config.m_portPoolSize;
        }
        _RDI->m_externalPort = v28 + _RDI->m_gamePort;
LABEL_65:
        bdUPnPDevice::sendCreatePortMappingRequest(_RDI);
        return;
      }
      if ( v24 == 724 )
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xFFu, "UPnP Device requires same external and interal ports");
      else
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x104u, "Unexpected UPnP error code %d", v24);
LABEL_97:
      v2 = 16;
LABEL_98:
      _RDI->m_state = v2;
      return;
    case BD_UPNP_DEVICE_MAPPED_PORT:
      if ( this->m_portStatus == BD_UPNP_PORT_MAPPED )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x115u, "Port successfully mapped. UPnP device configuration complete");
        v2 = 15;
        goto LABEL_98;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x11Au, "Unexpected port status");
      goto LABEL_97;
    case BD_UPNP_DEVICE_SENDING_UNMAPPING_REQ:
      isComplete[0] = 0;
      v31 = bdUPnPDevice::pumpSendRequest(this, isComplete);
      if ( isComplete[0] )
      {
        if ( v31 )
        {
          _RDI->m_state = BD_UPNP_DEVICE_UNMAPPING_PORT;
          return;
        }
      }
      else if ( v31 )
      {
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x12Au, "Failed to send port unmapping request.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_UNMAPPING_PORT:
      if ( bdUPnPDevice::pumpReceive(this) )
        return;
      if ( strstr_0(_RDI->m_readBuffer, "200 OK") )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x136u, "Port unmapping successful on port %u", _RDI->m_gamePort);
        _RDI->m_state = BD_UPNP_DEVICE_UNMAPPED_PORT;
        _RDI->m_portStatus = BD_UPNP_PORT_NOT_MAPPED;
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x13Cu, "Failed to unmap port.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_UNMAPPED_PORT:
      if ( this->m_portStatus == BD_UPNP_PORT_NOT_MAPPED )
      {
        this->m_shutdownType = BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE;
        goto LABEL_98;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x14Bu, "Unexpected port status");
      goto LABEL_97;
    case BD_UPNP_DEVICE_SHUTTING_DOWN:
      ((void (__fastcall *)(bdStreamSocket *, __int64))this->m_streamSocket.close)(&this->m_streamSocket, 14i64);
      if ( *(_QWORD *)&_RDI->m_shutdownType != 0x300000000i64 )
      {
        bdUPnPDevice::cleanup(_RDI);
        return;
      }
      bdSnprintf(buf, 0x6Eui64, "<NewRemoteHost></NewRemoteHost>\r\n<NewExternalPort>%d</NewExternalPort>\r\n<NewProtocol>UDP</NewProtocol>\r\n", _RDI->m_gamePort);
      bdUPnPDevice::genUPnPCommand(_RDI, "DeletePortMapping", buf);
      if ( bdUPnPDevice::connectToDevice(_RDI) )
      {
        v2 = 11;
        goto LABEL_98;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x15Eu, "Failed to connect to device.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_FINISHED:
      return;
    case BD_UPNP_DEVICE_FAILED:
      if ( bdStreamSocket::isConnected(&this->m_streamSocket) )
        _RDI->m_streamSocket.close(&_RDI->m_streamSocket);
      return;
    default:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x178u, "Pumping Device in Unknown State");
      goto LABEL_97;
  }
}

/*
==============
bdUPnPDevice::pumpReceive
==============
*/
char bdUPnPDevice::pumpReceive(bdUPnPDevice *this)
{
  char v3; 
  char v4; 
  int v5; 
  int v7; 

  _RBX = this;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_responseTimer);
  __asm { vcomiss xmm0, dword ptr [rbx+14Ch] }
  if ( v3 | v4 )
  {
    v5 = bdStreamSocket::recv(&_RBX->m_streamSocket, &_RBX->m_readBuffer[_RBX->m_bytesReceived], 6144 - _RBX->m_bytesReceived);
    if ( v5 > 0 )
    {
      _RBX->m_readBuffer[v5 + _RBX->m_bytesReceived] = 0;
      _RBX->m_bytesReceived += v5;
      return 1;
    }
    if ( v5 == -2 )
      return 1;
    if ( v5 )
    {
      v7 = v5;
      bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pumpReceive", 0x236u, "Error recieving from socket %d", v7);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pumpReceive", 0x23Bu, "Timed out while getting response from device");
  }
  _RBX->m_streamSocket.close(&_RBX->m_streamSocket);
  return 0;
}

/*
==============
bdUPnPDevice::pumpSendRequest
==============
*/
char bdUPnPDevice::pumpSendRequest(bdUPnPDevice *this, bool *isComplete)
{
  __int64 v5; 
  int v6; 
  char v8; 
  char v9; 

  _RBX = this;
  *isComplete = 0;
  if ( bdStreamSocket::isConnected(&this->m_streamSocket) )
  {
    bdHandleAssert(_RBX->m_requestBuffer != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v5 = -1i64;
    do
      ++v5;
    while ( _RBX->m_requestBuffer[v5] );
    bdHandleAssert((_DWORD)v5 == _RBX->m_requestSize, "requestLen == m_requestSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pumpSendRequest", 0x206u, "Corrupted Buffer");
    v6 = bdStreamSocket::send(&_RBX->m_streamSocket, _RBX->m_requestBuffer, _RBX->m_requestSize);
    if ( v6 > 0 )
    {
      _RBX->m_bytesReceived = 0;
      memset_0(_RBX->m_readBuffer, 0, sizeof(_RBX->m_readBuffer));
      bdStopwatch::reset(&_RBX->m_responseTimer);
      bdStopwatch::start(&_RBX->m_responseTimer);
      *isComplete = 1;
      return 1;
    }
    if ( v6 == -2 )
      return 1;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pumpSendRequest", 0x20Fu, "Error sending to UPnP Device");
  }
  else
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_connectTimer);
    __asm { vcomiss xmm0, dword ptr [rbx+150h] }
    if ( v8 | v9 )
      return 1;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pumpSendRequest", 0x216u, "Timed out while connecting to UPnP device");
  }
  _RBX->m_streamSocket.close(&_RBX->m_streamSocket);
  return 0;
}

/*
==============
bdUPnPDevice::selectNewExternalPort
==============
*/
void bdUPnPDevice::selectNewExternalPort(bdUPnPDevice *this)
{
  __int32 v2; 
  bdTrulyRandomImpl *Instance; 
  unsigned int v4; 
  unsigned int v5; 
  bdTrulyRandomImpl *v6; 

  v2 = this->m_config.m_portSelectionMode - 1;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      ++this->m_externalPort;
      return;
    }
    Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
    v4 = bdTrulyRandomImpl::getRandomUInt(Instance) % this->m_config.m_portPoolSize;
  }
  else
  {
    v5 = this->m_config.m_portPoolSize * this->m_mappingAttempts / this->m_config.m_mappingRetries;
    v6 = bdSingleton<bdTrulyRandomImpl>::getInstance();
    v4 = bdTrulyRandomImpl::getRandomUInt(v6) % v5;
  }
  this->m_externalPort = v4 + this->m_gamePort;
}

/*
==============
bdUPnPDevice::sendCreatePortMappingRequest
==============
*/
void bdUPnPDevice::sendCreatePortMappingRequest(bdUPnPDevice *this)
{
  int function; 
  int m_externalPort; 
  int m_gamePort; 
  char str[32]; 
  char buf[416]; 

  bdSockAddr::toString(&this->m_localConnectedAddr, str, 0x16ui64);
  function = this->m_gamePort;
  bdSnprintf(buf, 0x19Cui64, "      <NewRemoteHost></NewRemoteHost>\r\n      <NewExternalPort>%d</NewExternalPort>\r\n      <NewProtocol>UDP</NewProtocol>\r\n      <NewInternalPort>%d</NewInternalPort>\r\n      <NewInternalClient>%s</NewInternalClient>\r\n      <NewEnabled>1</NewEnabled>\r\n      <NewPortMappingDescription>DemonwarePortMapping</NewPortMappingDescription>\r\n      <NewLeaseDuration>0</NewLeaseDuration>\r\n", this->m_externalPort, function, str);
  bdUPnPDevice::genUPnPCommand(this, "AddPortMapping", buf);
  if ( bdUPnPDevice::connectToDevice(this) )
  {
    m_gamePort = this->m_gamePort;
    m_externalPort = this->m_externalPort;
    bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::sendCreatePortMappingRequest", 0x268u, "Creating port mapping from external port %u to local port %u.", m_externalPort, m_gamePort);
    ++this->m_mappingAttempts;
    this->m_state = BD_UPNP_DEVICE_SENDING_MAPPING_REQ;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::sendCreatePortMappingRequest", 0x26Eu, "Failed to connect to device.");
    this->m_state = BD_UPNP_DEVICE_FAILED;
  }
}

/*
==============
bdUPnPDevice::setLocalConnectedAddr
==============
*/
char bdUPnPDevice::setLocalConnectedAddr(bdUPnPDevice *this)
{
  bdArray<bdSockAddr> *m_localAddrs; 
  unsigned int m_size; 

  m_localAddrs = this->m_localAddrs;
  _RBX = this;
  m_size = m_localAddrs->m_size;
  if ( !m_size )
    return 0;
  bdHandleAssert(m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdSockAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
  _RAX = m_localAddrs->m_data;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+0B0h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+0D0h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+0F0h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbx+110h], ymm1
  }
  return 1;
}

/*
==============
bdUPnPDevice::setupReceive
==============
*/
void bdUPnPDevice::setupReceive(bdUPnPDevice *this)
{
  this->m_bytesReceived = 0;
  memset_0(this->m_readBuffer, 0, sizeof(this->m_readBuffer));
  bdStopwatch::reset(&this->m_responseTimer);
  bdStopwatch::start(&this->m_responseTimer);
}

/*
==============
bdUPnPDevice::startShutdown
==============
*/
void bdUPnPDevice::startShutdown(bdUPnPDevice *this, const bdUPnPDevice::bdUPnPDeviceShutdownType shutdownType)
{
  if ( this->m_state )
  {
    if ( shutdownType == BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE )
    {
      bdUPnPDevice::cleanup(this);
    }
    else if ( shutdownType == BD_UPNP_DEVICE_SHUTDOWN_ELEGANT && (unsigned int)(this->m_state - 11) > 3 )
    {
      this->m_shutdownType = BD_UPNP_DEVICE_SHUTDOWN_ELEGANT;
      this->m_shutdownRequested = 1;
    }
  }
}

