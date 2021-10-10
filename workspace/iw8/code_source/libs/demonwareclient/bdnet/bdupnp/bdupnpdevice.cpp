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
  bdAddr *v2; 
  __m256i *v3; 
  __m256i v4; 
  bdStreamSocket_vtbl *v5; 
  bdUPnPConfig *v6; 
  bdSockAddr *v7; 
  bdUPnPConfig v8; 

  this->m_state = BD_UPNP_DEVICE_UNINITIALISED;
  this->m_shutdownRequested = 0;
  this->m_portStatus = BD_UPNP_PORT_STATUS_UNKNOWN;
  bdAddr::bdAddr((bdAddr *)&v8);
  this->m_deviceAddr = *v2;
  this->m_localAddrs = NULL;
  bdSockAddr::bdSockAddr((bdSockAddr *)&v8);
  *(__m256i *)&this->m_localConnectedAddr.inUn.m_sockaddrStorage.ss_family = *v3;
  *((__m256i *)&this->m_localConnectedAddr.inUn.m_ipv6Sockaddr + 1) = v3[1];
  *((__m256i *)&this->m_localConnectedAddr.inUn.m_ipv6Sockaddr + 2) = v3[2];
  v4 = v3[3];
  v5 = this->m_streamSocket.__vftable;
  *((__m256i *)&this->m_localConnectedAddr.inUn.m_ipv6Sockaddr + 3) = v4;
  ((void (*)(void))v5->close)();
  bdUPnPConfig::bdUPnPConfig(&v8);
  this->m_config = *v6;
  *(_DWORD *)&this->m_gamePort = 0;
  bdSockAddr::bdSockAddr((bdSockAddr *)&v8);
  this->m_externalDeviceAddr = *v7;
  this->m_requestSize = 0;
  this->m_bytesReceived = 0;
  this->m_mappingAttempts = 0;
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
  char *v8; 
  char *v9; 
  char *v10; 
  char *v11; 
  int v12; 
  unsigned int v13; 
  char *v14; 
  char *v15; 
  __int64 v16; 
  const char *v17; 
  char *v18; 
  unsigned int v19; 
  char SubStr[8]; 
  char v22[8]; 
  char dst[24]; 

  *controlLoc = NULL;
  *controlLen = 0;
  v4 = "WANIPConnection:1";
  if ( !this->m_isIp )
    v4 = "WANPPPConnection:1";
  v7 = strstr_0(this->m_readBuffer, v4);
  if ( v7 )
  {
    *(double *)SubStr = *(double *)"<controlURL";
    strcpy(v22, "URL");
    v8 = strstr_0(v7, SubStr);
    if ( v8 )
    {
      v9 = strstr_0(v8, ">");
      if ( v9 )
      {
        v10 = v9 + 1;
        v11 = strstr_0(v9 + 1, "</");
        if ( v11 )
        {
          v12 = (_DWORD)v11 - (_DWORD)v10;
          v13 = v12;
          if ( !v12 )
            v10 = NULL;
          if ( !v12 )
            v13 = 0;
          if ( v12 )
          {
            v14 = strstr_0(v10, "http:
            v15 = &v10[v13];
            if ( v14 == v10 )
            {
              bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
              v16 = -1i64;
              do
                ++v16;
              while ( aHttp[v16] );
              v17 = &v14[v16];
              v18 = strstr_0(v17, "/");
              v10 = v18;
              if ( !v18 || v18 > v15 )
                v10 = v15;
              if ( (unsigned int)((_DWORD)v10 - (_DWORD)v17) < 0x16 )
              {
                bdStrlcpy(dst, v17, (unsigned int)((_DWORD)v10 - (_DWORD)v17 + 1));
                bdAddr::set(&this->m_deviceAddr, dst);
              }
              v19 = (_DWORD)v15 - (_DWORD)v10;
            }
            else
            {
              v19 = v13;
            }
            *controlLoc = v10;
            LOBYTE(v7) = 1;
            *controlLen = v19;
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
  bdSockAddr *v4; 
  char *v5; 
  char *v6; 
  _BYTE *v7; 
  char *v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  size_t v12; 
  bdSockAddr v14; 
  char SubStr[24]; 
  char addr[24]; 

  bdSockAddr::bdSockAddr(&v14);
  *externalAddress = *v4;
  strcpy(SubStr, "<NewExternalIPAddress");
  v5 = strstr_0(this->m_readBuffer, SubStr);
  if ( v5 )
  {
    v6 = strstr_0(v5, ">");
    if ( v6 )
    {
      v7 = v6 + 1;
      v8 = strstr_0(v6 + 1, "</");
      if ( v8 )
      {
        v9 = (_DWORD)v8 - (_DWORD)v7;
        v10 = v9;
        if ( !v9 )
          v7 = NULL;
        if ( !v9 )
          v10 = 0;
        if ( v9 )
        {
          if ( (unsigned int)(v10 - 1) > 0x14 )
            return 0;
          v11 = (unsigned int)(v10 + 1);
          bdHandleAssert(v7 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v12 = -1i64;
          do
            ++v12;
          while ( v7[v12] );
          if ( v11 )
          {
            if ( v12 >= v11 - 1 )
              v12 = v11 - 1;
            memcpy_0(addr, v7, v12);
            addr[v12] = 0;
          }
          bdSockAddr::set(externalAddress, addr);
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
  bdSockAddr *v7; 
  __int64 v8; 
  size_t v9; 
  bdSockAddr other; 
  char addr[24]; 

  bdSockAddr::bdSockAddr(&other);
  *owner = *v7;
  if ( addrLen - 1 > 0x14 )
    return 0;
  v8 = addrLen + 1;
  bdHandleAssert(addrLoc != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v9 = -1i64;
  do
    ++v9;
  while ( addrLoc[v9] );
  if ( v8 )
  {
    if ( v9 >= v8 - 1 )
      v9 = v8 - 1;
    memcpy_0(addr, addrLoc, v9);
    addr[v9] = 0;
  }
  bdSockAddr::bdSockAddr(&other, addr);
  if ( !bdSockAddr::isValid(&other) )
    return 0;
  bdSockAddr::set(owner, &other);
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
  char *v6; 
  char *v7; 
  const char *v8; 
  char *v9; 
  unsigned int v10; 
  __int64 v11; 
  char *v12; 
  const char *v13; 
  size_t v14; 
  __int64 v15; 
  const char *v16; 
  char *v17; 
  unsigned int v18; 
  __int64 v19; 
  char SubStr[8]; 
  char v22; 
  char socketAddress[24]; 

  *baseLoc = NULL;
  *baseLen = 0;
  *(double *)SubStr = *(double *)"<URLBase";
  v22 = aUrlbase[8];
  v6 = strstr_0(this->m_readBuffer, SubStr);
  if ( !v6 )
    return 1;
  v7 = strstr_0(v6, ">");
  if ( !v7 )
    return 1;
  v8 = v7 + 1;
  v9 = strstr_0(v7 + 1, "</");
  if ( !v9 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", SubStr);
    return 1;
  }
  v10 = (_DWORD)v9 - (_DWORD)v8;
  v11 = v10;
  if ( !v10 )
    v8 = NULL;
  if ( !v10 )
    v11 = 0i64;
  if ( !v10 )
    return 1;
  v12 = strstr_0(v8, "http:
  if ( v12 == v8 )
  {
    v13 = &v8[v11];
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v14 = -1i64;
    v15 = -1i64;
    do
      ++v15;
    while ( aHttp[v15] );
    v16 = &v12[v15];
    v17 = strstr_0(v16, "/");
    if ( v17 >= v13 )
    {
      LODWORD(v17) = (_DWORD)v13;
    }
    else
    {
      *baseLoc = v17;
      *baseLen = (_DWORD)v13 - (_DWORD)v17;
    }
    v18 = (_DWORD)v17 - (_DWORD)v16;
    if ( v18 >= 0x16 )
    {
      return 0;
    }
    else
    {
      v19 = v18 + 1;
      bdHandleAssert(v16 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      do
        ++v14;
      while ( v16[v14] );
      if ( v19 )
      {
        if ( v14 >= v19 - 1 )
          v14 = v19 - 1;
        memcpy_0(socketAddress, v16, v14);
        socketAddress[v14] = 0;
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
  __int128 v8; 

  if ( this->m_state )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::init", 0x42u, "Cannot initialize class unless it is in the uninitialized state.");
    return 0;
  }
  else
  {
    this->m_deviceAddr = *deviceAddress;
    this->m_gamePort = port;
    this->m_externalPort = port;
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
    v8 = *(_OWORD *)((char *)&config->m_gatewayAddr.inUn.m_ipv6Sockaddr + 120);
    this->m_localAddrs = localAddrs;
    *(_OWORD *)((char *)&this->m_config.m_gatewayAddr.inUn.m_ipv6Sockaddr + 120) = v8;
    bdSnprintf(this->m_fetchLocation, fetchLocationLength + 1, fetchLocation);
    this->m_state = BD_UPNP_DEVICE_INITIALISED;
    this->m_portStatus = BD_UPNP_PORT_STATUS_UNKNOWN;
    this->m_shutdownRequested = 0;
    if ( bdStreamSocket::isConnected(&this->m_streamSocket) )
      this->m_streamSocket.close(&this->m_streamSocket);
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
  bdSockAddr *v4; 
  char *v5; 
  char *v6; 
  _BYTE *v7; 
  char *v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  size_t v12; 
  __m256i v14; 
  __m256i v15; 
  __m256i v16; 
  bdSockAddr v17; 
  bdSockAddr v18; 
  char SubStr[24]; 
  char addr[24]; 

  bdSockAddr::bdSockAddr(&v17);
  v2 = strstr_0(this->m_readBuffer, "200 OK");
  v3 = v2 != NULL;
  if ( !v2 )
    return v3;
  bdSockAddr::bdSockAddr(&v18);
  v17 = *v4;
  strcpy(SubStr, "<NewExternalIPAddress");
  v5 = strstr_0(this->m_readBuffer, SubStr);
  if ( v5 )
  {
    v6 = strstr_0(v5, ">");
    if ( v6 )
    {
      v7 = v6 + 1;
      v8 = strstr_0(v6 + 1, "</");
      if ( v8 )
      {
        v9 = (_DWORD)v8 - (_DWORD)v7;
        v10 = v9;
        if ( !v9 )
          v7 = NULL;
        if ( !v9 )
          v10 = 0;
        if ( v9 )
        {
          if ( (unsigned int)(v10 - 1) > 0x14 )
            return 0;
          v11 = (unsigned int)(v10 + 1);
          bdHandleAssert(v7 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v12 = -1i64;
          do
            ++v12;
          while ( v7[v12] );
          if ( v11 )
          {
            if ( v12 >= v11 - 1 )
              v12 = v11 - 1;
            memcpy_0(addr, v7, v12);
            addr[v12] = 0;
          }
          bdSockAddr::set(&v17, addr);
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
  v14 = *((__m256i *)&v17.inUn.m_ipv6Sockaddr + 1);
  *(__m256i *)&this->m_externalDeviceAddr.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&v17.inUn.m_sockaddrStorage.ss_family;
  v15 = *((__m256i *)&v17.inUn.m_ipv6Sockaddr + 2);
  *((__m256i *)&this->m_externalDeviceAddr.inUn.m_ipv6Sockaddr + 1) = v14;
  v16 = *((__m256i *)&v17.inUn.m_ipv6Sockaddr + 3);
  *((__m256i *)&this->m_externalDeviceAddr.inUn.m_ipv6Sockaddr + 2) = v15;
  *((__m256i *)&this->m_externalDeviceAddr.inUn.m_ipv6Sockaddr + 3) = v16;
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
  _BYTE *v7; 
  int v8; 
  char *v9; 
  char *v10; 
  char *v11; 
  char *v12; 
  int v13; 
  char v14; 
  bdSockAddr *v15; 
  __int64 v16; 
  size_t v17; 
  bdArray<bdSockAddr> *m_localAddrs; 
  bdSockAddr other; 
  bdSockAddr v21; 
  bdSockAddr v22; 
  char SubStr[16]; 
  __int16 v24; 
  char v25; 
  char addr[24]; 

  v3 = 0;
  v24 = *(_WORD *)"nt";
  *mappingExists = 0;
  v25 = aNewinternalcli[18];
  *mappingIsMine = 0;
  *(_OWORD *)SubStr = *(_OWORD *)"<NewInternalClient";
  v7 = NULL;
  v8 = 0;
  v9 = strstr_0(this->m_readBuffer, "200 OK");
  *mappingExists = v9 != NULL;
  if ( !v9 )
    goto LABEL_10;
  v10 = strstr_0(this->m_readBuffer, SubStr);
  if ( !v10 || (v11 = strstr_0(v10, ">")) == NULL )
  {
LABEL_31:
    *mappingExists = 0;
    return 1;
  }
  v7 = v11 + 1;
  v12 = strstr_0(v11 + 1, "</");
  if ( !v12 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", SubStr);
    goto LABEL_31;
  }
  v8 = (_DWORD)v12 - (_DWORD)v7;
  v13 = (_DWORD)v12 - (_DWORD)v7;
  if ( (_DWORD)v12 == (_DWORD)v7 )
    v7 = NULL;
  if ( !v8 )
    v8 = 0;
  if ( !v13 )
    goto LABEL_31;
LABEL_10:
  if ( !*mappingExists )
    return 1;
  bdSockAddr::bdSockAddr(&v21);
  v14 = 0;
  bdSockAddr::bdSockAddr(&v22);
  v21 = *v15;
  if ( (unsigned int)(v8 - 1) <= 0x14 )
  {
    v16 = (unsigned int)(v8 + 1);
    bdHandleAssert(v7 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v17 = -1i64;
    do
      ++v17;
    while ( v7[v17] );
    if ( v16 )
    {
      if ( v17 >= v16 - 1 )
        v17 = v16 - 1;
      memcpy_0(addr, v7, v17);
      addr[v17] = 0;
    }
    bdSockAddr::bdSockAddr(&other, addr);
    if ( bdSockAddr::isValid(&other) )
    {
      bdSockAddr::set(&v21, &other);
      v14 = 1;
    }
  }
  if ( this->m_localAddrs->m_size )
  {
    while ( !*mappingIsMine )
    {
      bdSockAddr::bdSockAddr(&other);
      m_localAddrs = this->m_localAddrs;
      if ( v3 < m_localAddrs->m_size )
        other = m_localAddrs->m_data[(unsigned __int64)v3];
      if ( bdSockAddr::compare(&other, &v21, 0) )
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
      bdSockAddr::toString(&v21, addr, 0x16ui64);
      bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::parseGetMappingsResponse", 0x48Bu, "Port Mapping collision found, owned by %s.", addr);
    }
  }
  return v14;
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
  bdUPnPDevice::bdUPnPDeviceState v2; 
  bdUPnPDevice::bdUPnPDeviceState m_state; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  bool v7; 
  bdArray<bdSockAddr> *m_localAddrs; 
  unsigned int m_size; 
  __m256i *m_data; 
  bool v11; 
  bool v12; 
  char *v13; 
  char *v14; 
  const void *v15; 
  char *v16; 
  unsigned int v17; 
  unsigned int v18; 
  size_t v19; 
  int v20; 
  unsigned int m_mappingRetries; 
  unsigned int m_mappingAttempts; 
  bdTrulyRandomImpl *v23; 
  unsigned int v24; 
  unsigned int v25; 
  bdTrulyRandomImpl *Instance; 
  bool v27; 
  __int64 v28; 
  bool isComplete[4]; 
  char v30[4]; 
  char v31; 
  char str[32]; 
  char buf[112]; 

  v2 = BD_UPNP_DEVICE_SHUTTING_DOWN;
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
      bdHandleAssert(this->m_fetchLocation != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      do
        ++v5;
      while ( this->m_fetchLocation[v5] );
      bdHandleAssert((unsigned int)(v6 + v4 + v5) < 0x800, "totalRequestSize < BD_UPNP_MAX_DEVICE_REQUEST_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::prepareGetDescriptionRequest", 0x2FAu, "Request is too large for buffer");
      this->m_requestSize = bdSnprintf(this->m_requestBuffer, 0x800ui64, "GET %s HTTP/1.1\r\nConnection: close\r\nHost: %s\r\n\r\n", this->m_fetchLocation, str);
      if ( bdUPnPDevice::connectToDevice(this) )
      {
        v2 = BD_UPNP_DEVICE_SENDING_DESCRIPTION_REQ;
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
          m_localAddrs = this->m_localAddrs;
          m_size = m_localAddrs->m_size;
          if ( m_size )
          {
            bdHandleAssert(m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdSockAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
            m_data = (__m256i *)m_localAddrs->m_data;
            v2 = BD_UPNP_DEVICE_GETTING_DESCRIPTION;
            *(__m256i *)&this->m_localConnectedAddr.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&m_localAddrs->m_data->inUn.m_sockaddrStorage.ss_family;
            *((__m256i *)&this->m_localConnectedAddr.inUn.m_ipv6Sockaddr + 1) = m_data[1];
            *((__m256i *)&this->m_localConnectedAddr.inUn.m_ipv6Sockaddr + 2) = m_data[2];
            *((__m256i *)&this->m_localConnectedAddr.inUn.m_ipv6Sockaddr + 3) = m_data[3];
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
      if ( bdUPnPDevice::parseDescriptionResponse(this) )
      {
        this->m_state = BD_UPNP_DEVICE_GOT_DESCRIPTION;
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x88u, "Failed to parse the device description.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_GOT_DESCRIPTION:
      bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x90u, "Successfully received the device description");
      bdUPnPDevice::genUPnPCommand(this, "GetExternalIPAddress", "\r\n");
      if ( bdUPnPDevice::connectToDevice(this) )
      {
        v2 = BD_UPNP_DEVICE_SENDING_IP_REQ;
        goto LABEL_98;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x99u, "Failed to connect to device.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_SENDING_IP_REQ:
      isComplete[0] = 0;
      v11 = bdUPnPDevice::pumpSendRequest(this, isComplete);
      if ( isComplete[0] )
      {
        if ( v11 )
        {
          this->m_state = BD_UPNP_DEVICE_DISCOVERING_IP;
          return;
        }
      }
      else if ( v11 )
      {
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xA9u, "Failed to send the exernal IP request.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_DISCOVERING_IP:
      if ( bdUPnPDevice::pumpReceive(this) )
        return;
      if ( bdUPnPDevice::parseGetExternalIPResponse(this) )
      {
        this->m_state = BD_UPNP_DEVICE_DISCOVERED_IP;
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xB9u, "Failed to parse the external IP response.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_DISCOVERED_IP:
      if ( this->m_config.m_runMode == BD_UPNP_DO_PORT_MAPPING )
        goto LABEL_65;
      bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xCAu, "UPnP device configuration complete");
      v2 = BD_UPNP_DEVICE_FINISHED;
      goto LABEL_98;
    case BD_UPNP_DEVICE_SENDING_MAPPING_REQ:
      isComplete[0] = 0;
      v12 = bdUPnPDevice::pumpSendRequest(this, isComplete);
      if ( isComplete[0] )
      {
        if ( v12 )
        {
          this->m_state = BD_UPNP_DEVICE_MAPPING_PORT;
          return;
        }
      }
      else if ( v12 )
      {
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xDAu, "Failed to send port mapping request.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_MAPPING_PORT:
      if ( bdUPnPDevice::pumpReceive(this) )
        return;
      if ( strstr_0(this->m_readBuffer, "200 OK") )
      {
        this->m_state = BD_UPNP_DEVICE_MAPPED_PORT;
        this->m_portStatus = BD_UPNP_PORT_MAPPED;
        return;
      }
      if ( !strstr_0(this->m_readBuffer, "UPnPError") )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractUPnPError", 0x290u, "Attempted to parse error code from successful response");
        goto LABEL_73;
      }
      v13 = strstr_0(this->m_readBuffer, "<errorCode");
      if ( !v13 )
        goto LABEL_71;
      v14 = strstr_0(v13, ">");
      if ( !v14 )
        goto LABEL_71;
      v15 = v14 + 1;
      v16 = strstr_0(v14 + 1, "</");
      if ( !v16 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractTag", 0x2EBu, "Tag %s is improperly formatted", "<errorCode");
LABEL_71:
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::extractUPnPError", 0x28Bu, "Unable to parse error code from UPnP error response");
LABEL_73:
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x10Au, "Failed to map port.");
        goto LABEL_97;
      }
      v17 = (_DWORD)v16 - (_DWORD)v15;
      v18 = v17;
      if ( !v17 )
        v18 = 0;
      if ( !v17 )
        v15 = NULL;
      if ( !v17 )
        goto LABEL_71;
      v19 = 4i64;
      *(_DWORD *)v30 = 0;
      v31 = 0;
      if ( v18 < 4 )
        v19 = v18;
      memcpy_0(v30, v15, v19);
      v20 = atoi(v30);
      if ( v20 == 718 )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xEEu, "UPnP port mapping of external port %d already in use", this->m_externalPort);
        m_mappingRetries = this->m_config.m_mappingRetries;
        m_mappingAttempts = this->m_mappingAttempts;
        if ( m_mappingAttempts >= m_mappingRetries + 1 )
        {
          LODWORD(v28) = this->m_mappingAttempts;
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xF8u, "Unable to create UPnP port mapping after %d attempts", v28);
          goto LABEL_97;
        }
        if ( this->m_config.m_portSelectionMode == BD_UPNP_PORT_SELECTION_EXPANDING_RANDOM )
        {
          v25 = m_mappingAttempts * this->m_config.m_portPoolSize / m_mappingRetries;
          Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
          v24 = bdTrulyRandomImpl::getRandomUInt(Instance) % v25;
        }
        else
        {
          if ( this->m_config.m_portSelectionMode != BD_UPNP_PORT_SELECTION_RANDOM )
          {
            ++this->m_externalPort;
            bdUPnPDevice::sendCreatePortMappingRequest(this);
            return;
          }
          v23 = bdSingleton<bdTrulyRandomImpl>::getInstance();
          v24 = bdTrulyRandomImpl::getRandomUInt(v23) % this->m_config.m_portPoolSize;
        }
        this->m_externalPort = v24 + this->m_gamePort;
LABEL_65:
        bdUPnPDevice::sendCreatePortMappingRequest(this);
        return;
      }
      if ( v20 == 724 )
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0xFFu, "UPnP Device requires same external and interal ports");
      else
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x104u, "Unexpected UPnP error code %d", v20);
LABEL_97:
      v2 = BD_UPNP_DEVICE_FAILED;
LABEL_98:
      this->m_state = v2;
      return;
    case BD_UPNP_DEVICE_MAPPED_PORT:
      if ( this->m_portStatus == BD_UPNP_PORT_MAPPED )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x115u, "Port successfully mapped. UPnP device configuration complete");
        v2 = BD_UPNP_DEVICE_FINISHED;
        goto LABEL_98;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x11Au, "Unexpected port status");
      goto LABEL_97;
    case BD_UPNP_DEVICE_SENDING_UNMAPPING_REQ:
      isComplete[0] = 0;
      v27 = bdUPnPDevice::pumpSendRequest(this, isComplete);
      if ( isComplete[0] )
      {
        if ( v27 )
        {
          this->m_state = BD_UPNP_DEVICE_UNMAPPING_PORT;
          return;
        }
      }
      else if ( v27 )
      {
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x12Au, "Failed to send port unmapping request.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_UNMAPPING_PORT:
      if ( bdUPnPDevice::pumpReceive(this) )
        return;
      if ( strstr_0(this->m_readBuffer, "200 OK") )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x136u, "Port unmapping successful on port %u", this->m_gamePort);
        this->m_state = BD_UPNP_DEVICE_UNMAPPED_PORT;
        this->m_portStatus = BD_UPNP_PORT_NOT_MAPPED;
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
      if ( *(_QWORD *)&this->m_shutdownType != 0x300000000i64 )
      {
        bdUPnPDevice::cleanup(this);
        return;
      }
      bdSnprintf(buf, 0x6Eui64, "<NewRemoteHost></NewRemoteHost>\r\n<NewExternalPort>%d</NewExternalPort>\r\n<NewProtocol>UDP</NewProtocol>\r\n", this->m_gamePort);
      bdUPnPDevice::genUPnPCommand(this, "DeletePortMapping", buf);
      if ( bdUPnPDevice::connectToDevice(this) )
      {
        v2 = BD_UPNP_DEVICE_SENDING_UNMAPPING_REQ;
        goto LABEL_98;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pump", 0x15Eu, "Failed to connect to device.");
      goto LABEL_97;
    case BD_UPNP_DEVICE_FINISHED:
      return;
    case BD_UPNP_DEVICE_FAILED:
      if ( bdStreamSocket::isConnected(&this->m_streamSocket) )
        this->m_streamSocket.close(&this->m_streamSocket);
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
  double ElapsedTimeInSeconds; 
  int v3; 
  int v5; 

  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_responseTimer);
  if ( *(float *)&ElapsedTimeInSeconds > this->m_config.m_responseTimeout )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pumpReceive", 0x23Bu, "Timed out while getting response from device");
  }
  else
  {
    v3 = bdStreamSocket::recv(&this->m_streamSocket, &this->m_readBuffer[this->m_bytesReceived], 6144 - this->m_bytesReceived);
    if ( v3 > 0 )
    {
      this->m_readBuffer[v3 + this->m_bytesReceived] = 0;
      this->m_bytesReceived += v3;
      return 1;
    }
    if ( v3 == -2 )
      return 1;
    if ( v3 )
    {
      v5 = v3;
      bdLogMessage(BD_LOG_INFO, "info/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pumpReceive", 0x236u, "Error recieving from socket %d", v5);
    }
  }
  this->m_streamSocket.close(&this->m_streamSocket);
  return 0;
}

/*
==============
bdUPnPDevice::pumpSendRequest
==============
*/
char bdUPnPDevice::pumpSendRequest(bdUPnPDevice *this, bool *isComplete)
{
  __int64 v4; 
  int v5; 
  double ElapsedTimeInSeconds; 

  *isComplete = 0;
  if ( bdStreamSocket::isConnected(&this->m_streamSocket) )
  {
    bdHandleAssert(this->m_requestBuffer != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v4 = -1i64;
    do
      ++v4;
    while ( this->m_requestBuffer[v4] );
    bdHandleAssert((_DWORD)v4 == this->m_requestSize, "requestLen == m_requestSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pumpSendRequest", 0x206u, "Corrupted Buffer");
    v5 = bdStreamSocket::send(&this->m_streamSocket, this->m_requestBuffer, this->m_requestSize);
    if ( v5 > 0 )
    {
      this->m_bytesReceived = 0;
      memset_0(this->m_readBuffer, 0, sizeof(this->m_readBuffer));
      bdStopwatch::reset(&this->m_responseTimer);
      bdStopwatch::start(&this->m_responseTimer);
      *isComplete = 1;
      return 1;
    }
    if ( v5 == -2 )
      return 1;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pumpSendRequest", 0x20Fu, "Error sending to UPnP Device");
  }
  else
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_connectTimer);
    if ( *(float *)&ElapsedTimeInSeconds <= this->m_config.m_connectTimeout )
      return 1;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdnet/upnpdevice", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdupnp\\bdupnpdevice.cpp", "bdUPnPDevice::pumpSendRequest", 0x216u, "Timed out while connecting to UPnP device");
  }
  this->m_streamSocket.close(&this->m_streamSocket);
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
  __m256i *m_data; 

  m_localAddrs = this->m_localAddrs;
  m_size = m_localAddrs->m_size;
  if ( !m_size )
    return 0;
  bdHandleAssert(m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdSockAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
  m_data = (__m256i *)m_localAddrs->m_data;
  *(__m256i *)&this->m_localConnectedAddr.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&m_localAddrs->m_data->inUn.m_sockaddrStorage.ss_family;
  *((__m256i *)&this->m_localConnectedAddr.inUn.m_ipv6Sockaddr + 1) = m_data[1];
  *((__m256i *)&this->m_localConnectedAddr.inUn.m_ipv6Sockaddr + 2) = m_data[2];
  *((__m256i *)&this->m_localConnectedAddr.inUn.m_ipv6Sockaddr + 3) = m_data[3];
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

