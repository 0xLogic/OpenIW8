/*
==============
bdNATTypeDiscoveryClient::handleResponse
==============
*/

void __fastcall bdNATTypeDiscoveryClient::handleResponse(bdNATTypeDiscoveryClient *this, const bdAddr *addr, const bdNATTypeDiscoveryPacketReply *reply)
{
  ?handleResponse@bdNATTypeDiscoveryClient@@IEAAXAEBVbdAddr@@AEBVbdNATTypeDiscoveryPacketReply@@@Z(this, addr, reply);
}

/*
==============
bdNATTypeDiscoveryClient::getStatus
==============
*/

bdNATTypeDiscoveryClient::bdNATTypeDiscoveryClientState __fastcall bdNATTypeDiscoveryClient::getStatus(bdNATTypeDiscoveryClient *this)
{
  return ?getStatus@bdNATTypeDiscoveryClient@@QEBA?AW4bdNATTypeDiscoveryClientState@1@XZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::init
==============
*/

bool __fastcall bdNATTypeDiscoveryClient::init(bdNATTypeDiscoveryClient *this, bdSocket *socket, const bdAddr *serverAddr, bdNATTypeDiscoveryConfig config)
{
  return ?init@bdNATTypeDiscoveryClient@@QEAA_NPEAVbdSocket@@AEBVbdAddr@@VbdNATTypeDiscoveryConfig@@@Z(this, socket, serverAddr, config);
}

/*
==============
bdNATTypeDiscoveryClient::getNATType
==============
*/

bdNATType __fastcall bdNATTypeDiscoveryClient::getNATType(bdNATTypeDiscoveryClient *this)
{
  return ?getNATType@bdNATTypeDiscoveryClient@@QEBA?AW4bdNATType@@XZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::pump
==============
*/

void __fastcall bdNATTypeDiscoveryClient::pump(bdNATTypeDiscoveryClient *this, bdAddr *fromAddr, unsigned __int8 *data, const int dataSize)
{
  ?pump@bdNATTypeDiscoveryClient@@QEAAXVbdAddr@@QEAEH@Z(this, fromAddr, data, dataSize);
}

/*
==============
bdNATTypeDiscoveryClient::sendForTest3
==============
*/

bool __fastcall bdNATTypeDiscoveryClient::sendForTest3(bdNATTypeDiscoveryClient *this)
{
  return ?sendForTest3@bdNATTypeDiscoveryClient@@IEAA_NXZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::setStateError
==============
*/

void __fastcall bdNATTypeDiscoveryClient::setStateError(bdNATTypeDiscoveryClient *this)
{
  ?setStateError@bdNATTypeDiscoveryClient@@IEAAXXZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::sendForTest2
==============
*/

bool __fastcall bdNATTypeDiscoveryClient::sendForTest2(bdNATTypeDiscoveryClient *this)
{
  return ?sendForTest2@bdNATTypeDiscoveryClient@@IEAA_NXZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::receiveReplies
==============
*/

void __fastcall bdNATTypeDiscoveryClient::receiveReplies(bdNATTypeDiscoveryClient *this, bdAddr *fromAddr, unsigned __int8 *data, const int dataSize)
{
  ?receiveReplies@bdNATTypeDiscoveryClient@@IEAAXVbdAddr@@QEAEH@Z(this, fromAddr, data, dataSize);
}

/*
==============
bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket
==============
*/

bool __fastcall bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket(bdNATTypeDiscoveryClient *this, bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacketRequest packetType, const bdAddr *serverAddr)
{
  return ?sendNATTypeDiscoveryPacket@bdNATTypeDiscoveryClient@@IEAA_NW4bdNATTypeDiscoveryPacketRequest@bdNATTypeDiscoveryPacket@@AEBVbdAddr@@@Z(this, packetType, serverAddr);
}

/*
==============
bdNATTypeDiscoveryClient::setStateFinished
==============
*/

void __fastcall bdNATTypeDiscoveryClient::setStateFinished(bdNATTypeDiscoveryClient *this, bdNATType natType)
{
  ?setStateFinished@bdNATTypeDiscoveryClient@@IEAAXW4bdNATType@@@Z(this, natType);
}

/*
==============
bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient
==============
*/

void __fastcall bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient(bdNATTypeDiscoveryClient *this)
{
  ??1bdNATTypeDiscoveryClient@@QEAA@XZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::isRunning
==============
*/

bool __fastcall bdNATTypeDiscoveryClient::isRunning(bdNATTypeDiscoveryClient *this)
{
  return ?isRunning@bdNATTypeDiscoveryClient@@QEBA_NXZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::sendForTest1
==============
*/

bool __fastcall bdNATTypeDiscoveryClient::sendForTest1(bdNATTypeDiscoveryClient *this)
{
  return ?sendForTest1@bdNATTypeDiscoveryClient@@IEAA_NXZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::quit
==============
*/

bool __fastcall bdNATTypeDiscoveryClient::quit(bdNATTypeDiscoveryClient *this)
{
  return ?quit@bdNATTypeDiscoveryClient@@QEAA_NXZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::bdNATTypeDiscoveryClient
==============
*/

void __fastcall bdNATTypeDiscoveryClient::bdNATTypeDiscoveryClient(bdNATTypeDiscoveryClient *this)
{
  ??0bdNATTypeDiscoveryClient@@QEAA@XZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::pumpActiveTest
==============
*/

void __fastcall bdNATTypeDiscoveryClient::pumpActiveTest(bdNATTypeDiscoveryClient *this)
{
  ?pumpActiveTest@bdNATTypeDiscoveryClient@@IEAAXXZ(this);
}

/*
==============
bdNATTypeDiscoveryClient::bdNATTypeDiscoveryClient
==============
*/
void bdNATTypeDiscoveryClient::bdNATTypeDiscoveryClient(bdNATTypeDiscoveryClient *this)
{
  bdAddr::bdAddr(&this->m_serverAddr1);
  bdAddr::bdAddr(&this->m_serverAddr2);
  bdAddr::bdAddr(&this->m_mappedAddr);
  *(_QWORD *)&this->m_NATType = 0i64;
  this->m_resends = 0;
  bdStopwatch::bdStopwatch(&this->m_timer);
  bdNATTypeDiscoveryConfig::bdNATTypeDiscoveryConfig(&this->m_config);
  bdNATTypeDiscoveryTelemetry::bdNATTypeDiscoveryTelemetry(&this->m_telemetry);
}

/*
==============
bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient
==============
*/
void bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient(bdNATTypeDiscoveryClient *this)
{
  ;
}

/*
==============
bdNATTypeDiscoveryClient::getNATType
==============
*/
__int64 bdNATTypeDiscoveryClient::getNATType(bdNATTypeDiscoveryClient *this)
{
  if ( this->m_state == BD_NTDCS_FINI )
    return (unsigned int)this->m_NATType;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::getNATType", 0xB6u, "Can only return a meaningful result once NAT type detection is complete");
  return 0i64;
}

/*
==============
bdNATTypeDiscoveryClient::getStatus
==============
*/
__int64 bdNATTypeDiscoveryClient::getStatus(bdNATTypeDiscoveryClient *this)
{
  return (unsigned int)this->m_state;
}

/*
==============
bdNATTypeDiscoveryClient::handleResponse
==============
*/
void bdNATTypeDiscoveryClient::handleResponse(bdNATTypeDiscoveryClient *this, const bdAddr *addr, const bdNATTypeDiscoveryPacketReply *reply)
{
  const bdAddr *MappedAddr; 
  bdNATType v7; 
  const char *format; 
  unsigned int line; 
  bool v10; 
  unsigned __int16 Port; 
  bool v12; 
  char v13[24]; 
  char str[24]; 

  switch ( this->m_state )
  {
    case BD_NTDCS_RUN_TEST_1:
      bdNATTypeDiscoveryTelemetry::setTest1Result(&this->m_telemetry, addr, reply);
      this->m_serverAddr2 = *bdNATTypeDiscoveryPacketReply::getSecAddr((bdNATTypeDiscoveryPacketReply *)reply);
      this->m_mappedAddr = *bdNATTypeDiscoveryPacketReply::getMappedAddr((bdNATTypeDiscoveryPacketReply *)reply);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::handleResponse", 0xFFu, "Reply for test 1. Start test 2.");
      if ( bdNATTypeDiscoveryClient::sendForTest2(this) )
      {
        this->m_resends = 0;
        this->m_state = BD_NTDCS_RUN_TEST_2;
      }
      else
      {
        this->m_state = BD_NTDCS_ERROR;
        bdNATTypeDiscoveryTelemetry::setResultFailure(&this->m_telemetry);
        bdTelemetry::addNatTypeDiscovery(&this->m_telemetry);
      }
      break;
    case BD_NTDCS_RUN_TEST_2:
      bdNATTypeDiscoveryTelemetry::setTest2Result(&this->m_telemetry, addr);
      v10 = bdSockAddr::compare(&addr->m_address, &this->m_serverAddr2.m_address, 0);
      Port = bdSockAddr::getPort(&addr->m_address);
      v12 = Port == bdSockAddr::getPort(&this->m_serverAddr2.m_address);
      if ( v10 )
      {
        if ( !v12 )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::handleResponse", 0x11Bu, "Reply for test 2. Open NAT (or no NAT).");
          this->m_NATType = BD_NAT_OPEN;
          this->m_state = BD_NTDCS_FINI;
          bdNATTypeDiscoveryTelemetry::setResultSuccess(&this->m_telemetry, BD_NAT_OPEN);
          bdTelemetry::addNatTypeDiscovery(&this->m_telemetry);
          return;
        }
      }
      else if ( !v10 )
      {
        bdAddr::toString((bdAddr *)addr, str, 0x16ui64);
        bdAddr::toString(&this->m_serverAddr2, v13, 0x16ui64);
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::handleResponse", 0x126u, "Received test 2 response from unexpected address \n received from : %s \n expected from :%s ", str, v13);
      }
      if ( v12 )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::handleResponse", 0x12Au, "Received test 2 response from primary port");
      break;
    case BD_NTDCS_RUN_TEST_3:
      bdNATTypeDiscoveryTelemetry::setTest3Result(&this->m_telemetry, addr, reply);
      MappedAddr = bdNATTypeDiscoveryPacketReply::getMappedAddr((bdNATTypeDiscoveryPacketReply *)reply);
      if ( bdSockAddr::compare(&this->m_mappedAddr.m_address, &MappedAddr->m_address, 1) )
      {
        v7 = BD_NAT_MODERATE;
        format = "Reply for test 3. Moderate NAT.";
        line = 311;
      }
      else
      {
        v7 = BD_NAT_STRICT;
        format = "Reply for test 3. Strict NAT.";
        line = 316;
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::handleResponse", line, format);
      this->m_NATType = v7;
      this->m_state = BD_NTDCS_FINI;
      bdNATTypeDiscoveryTelemetry::setResultSuccess(&this->m_telemetry, v7);
      bdTelemetry::addNatTypeDiscovery(&this->m_telemetry);
      break;
  }
}

/*
==============
bdNATTypeDiscoveryClient::init
==============
*/
char bdNATTypeDiscoveryClient::init(bdNATTypeDiscoveryClient *this, bdSocket *socket, const bdAddr *serverAddr, bdNATTypeDiscoveryConfig config)
{
  const void *v8; 
  double v9; 
  __m256i v10; 
  unsigned int m_NtdcsMaxResends; 
  __m256i v12; 
  __m256i v13; 
  bdRelayRoute m_relayRoute; 
  double v15; 
  float m_NtdcsSendTimeout; 
  bdNATTypeDiscoveryTelemetry v18; 

  bdNATTypeDiscoveryTelemetry::bdNATTypeDiscoveryTelemetry(&v18);
  memcpy_0(&this->m_telemetry, v8, sizeof(this->m_telemetry));
  if ( this->m_state )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::init", 0x67u, "Cannot initialize already initialized class.");
    return 0;
  }
  if ( !socket )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::init", 0x61u, "Must initialize NAT Discovery Client with a valid socket");
    this->m_state = BD_NTDCS_ERROR;
    bdNATTypeDiscoveryTelemetry::setResultFailure(&this->m_telemetry);
    bdTelemetry::addNatTypeDiscovery(&this->m_telemetry);
    return 0;
  }
  this->m_socket = socket;
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::init", 0x55u, "NAT discovery client initialized");
  *(__m256i *)&this->m_serverAddr1.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&serverAddr->m_address.inUn.m_sockaddrStorage.ss_family;
  *((__m256i *)&this->m_serverAddr1.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&serverAddr->m_address.inUn.m_ipv6Sockaddr + 1);
  *((__m256i *)&this->m_serverAddr1.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&serverAddr->m_address.inUn.m_ipv6Sockaddr + 2);
  *((__m256i *)&this->m_serverAddr1.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&serverAddr->m_address.inUn.m_ipv6Sockaddr + 3);
  this->m_serverAddr1.m_relayRoute = serverAddr->m_relayRoute;
  v9 = *(double *)&serverAddr->m_type;
  this->m_config = config;
  *(double *)&this->m_serverAddr1.m_type = v9;
  bdNATTypeDiscoveryConfig::sanityCheckConfig(&this->m_config);
  v10 = *((__m256i *)&this->m_serverAddr1.m_address.inUn.m_ipv6Sockaddr + 1);
  m_NtdcsMaxResends = this->m_config.m_NtdcsMaxResends;
  *(__m256i *)&this->m_telemetry.m_serverAddr1.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&this->m_serverAddr1.m_address.inUn.m_sockaddrStorage.ss_family;
  v12 = *((__m256i *)&this->m_serverAddr1.m_address.inUn.m_ipv6Sockaddr + 2);
  *((__m256i *)&this->m_telemetry.m_serverAddr1.m_address.inUn.m_ipv6Sockaddr + 1) = v10;
  v13 = *((__m256i *)&this->m_serverAddr1.m_address.inUn.m_ipv6Sockaddr + 3);
  *((__m256i *)&this->m_telemetry.m_serverAddr1.m_address.inUn.m_ipv6Sockaddr + 2) = v12;
  m_relayRoute = this->m_serverAddr1.m_relayRoute;
  *((__m256i *)&this->m_telemetry.m_serverAddr1.m_address.inUn.m_ipv6Sockaddr + 3) = v13;
  v15 = *(double *)&this->m_serverAddr1.m_type;
  this->m_telemetry.m_configMaxResends = m_NtdcsMaxResends;
  m_NtdcsSendTimeout = this->m_config.m_NtdcsSendTimeout;
  this->m_telemetry.m_serverAddr1.m_relayRoute = m_relayRoute;
  *(double *)&this->m_telemetry.m_serverAddr1.m_type = v15;
  this->m_telemetry.m_configSendTimeout = m_NtdcsSendTimeout;
  if ( bdNATTypeDiscoveryClient::sendForTest1(this) )
  {
    this->m_state = BD_NTDCS_RUN_TEST_1;
    bdStopwatch::start(&this->m_timer);
  }
  else
  {
    this->m_state = BD_NTDCS_ERROR;
    bdNATTypeDiscoveryTelemetry::setResultFailure(&this->m_telemetry);
    bdTelemetry::addNatTypeDiscovery(&this->m_telemetry);
  }
  return 1;
}

/*
==============
bdNATTypeDiscoveryClient::isRunning
==============
*/
bool bdNATTypeDiscoveryClient::isRunning(bdNATTypeDiscoveryClient *this)
{
  return (unsigned int)(this->m_state - 1) <= 2;
}

/*
==============
bdNATTypeDiscoveryClient::pump
==============
*/
void bdNATTypeDiscoveryClient::pump(bdNATTypeDiscoveryClient *this, bdAddr *fromAddr, unsigned __int8 *data, const int dataSize)
{
  const bdAddr *v7; 
  const bdAddr *v8; 
  unsigned int newOffset; 
  bdAddr v10; 
  bdNATTypeDiscoveryPacketReply reply; 

  if ( (unsigned int)(this->m_state - 1) > 2 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::pump", 0x8Cu, "This class does not need to be pumped unless NAT type detection is running");
  }
  else
  {
    bdAddr::bdAddr(&v10, fromAddr);
    v8 = v7;
    if ( dataSize > 0 )
    {
      bdNATTypeDiscoveryPacketReply::bdNATTypeDiscoveryPacketReply(&reply);
      if ( bdNATTypeDiscoveryPacketReply::deserialize(&reply, data, dataSize, 0, &newOffset) && bdNATTypeDiscoveryPacketReply::getType(&reply) == 21 )
        bdNATTypeDiscoveryClient::handleResponse(this, v8, &reply);
    }
    bdNATTypeDiscoveryClient::pumpActiveTest(this);
  }
}

/*
==============
bdNATTypeDiscoveryClient::pumpActiveTest
==============
*/
void bdNATTypeDiscoveryClient::pumpActiveTest(bdNATTypeDiscoveryClient *this)
{
  bdNATTypeDiscoveryClient::bdNATTypeDiscoveryClientState m_state; 
  __int32 v3; 
  __int32 v4; 
  double v5; 
  unsigned int v6; 
  bool v7; 
  double v8; 
  unsigned int v9; 
  double ElapsedTimeInSeconds; 
  unsigned int m_resends; 

  m_state = this->m_state;
  if ( m_state == BD_NTDCS_UNINITIALIZED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::pumpActiveTest", 0x1D4u, "Code logic error in NTDC pump");
    return;
  }
  v3 = m_state - 1;
  if ( !v3 )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
    if ( *(float *)&ElapsedTimeInSeconds <= this->m_config.m_NtdcsSendTimeout )
      return;
    m_resends = this->m_resends;
    this->m_resends = m_resends + 1;
    if ( m_resends >= this->m_config.m_NtdcsMaxResends )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::pumpActiveTest", 0x19Au, "Test 1 failed. Not online.");
      bdNATTypeDiscoveryClient::setStateError(this);
      return;
    }
    bdStopwatch::start(&this->m_timer);
    v7 = bdNATTypeDiscoveryClient::sendForTest1(this);
    goto LABEL_17;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v8 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
    if ( *(float *)&v8 <= this->m_config.m_NtdcsSendTimeout )
      return;
    v9 = this->m_resends;
    this->m_resends = v9 + 1;
    if ( v9 >= this->m_config.m_NtdcsMaxResends )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::pumpActiveTest", 0x1AFu, "Test 2 failed.");
      this->m_resends = 0;
      this->m_state = BD_NTDCS_RUN_TEST_3;
      return;
    }
    bdStopwatch::start(&this->m_timer);
    v7 = bdNATTypeDiscoveryClient::sendForTest2(this);
    goto LABEL_17;
  }
  if ( v4 == 1 )
  {
    v5 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
    if ( *(float *)&v5 > this->m_config.m_NtdcsSendTimeout )
    {
      v6 = this->m_resends;
      this->m_resends = v6 + 1;
      if ( v6 >= this->m_config.m_NtdcsMaxResends )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::pumpActiveTest", 0x1C5u, "Test 3 failed. Strict NAT.");
        this->m_NATType = BD_NAT_STRICT;
        this->m_state = BD_NTDCS_FINI;
        bdNATTypeDiscoveryTelemetry::setResultSuccess(&this->m_telemetry, BD_NAT_STRICT);
        bdTelemetry::addNatTypeDiscovery(&this->m_telemetry);
        return;
      }
      bdStopwatch::start(&this->m_timer);
      v7 = bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket(this, BD_NTDP_DIFF_IP, &this->m_serverAddr2);
      if ( v7 )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::sendForTest3", 0xEEu, "Sent packet for NTDC test 3");
        return;
      }
LABEL_17:
      if ( !v7 )
        bdNATTypeDiscoveryClient::setStateError(this);
    }
  }
}

/*
==============
bdNATTypeDiscoveryClient::quit
==============
*/
bool bdNATTypeDiscoveryClient::quit(bdNATTypeDiscoveryClient *this)
{
  bool result; 

  if ( this->m_state )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::quit", 0x95u, "NAT discovery client quit");
    result = 1;
    this->m_socket = NULL;
    this->m_state = BD_NTDCS_UNINITIALIZED;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::quit", 0x9Cu, "Cannot quit uninitialized class.");
    return 0;
  }
  return result;
}

/*
==============
bdNATTypeDiscoveryClient::receiveReplies
==============
*/
void bdNATTypeDiscoveryClient::receiveReplies(bdNATTypeDiscoveryClient *this, bdAddr *fromAddr, unsigned __int8 *data, const int dataSize)
{
  unsigned int newOffset[4]; 
  bdNATTypeDiscoveryPacketReply reply; 

  if ( dataSize > 0 )
  {
    bdNATTypeDiscoveryPacketReply::bdNATTypeDiscoveryPacketReply(&reply);
    if ( bdNATTypeDiscoveryPacketReply::deserialize(&reply, data, dataSize, 0, newOffset) && bdNATTypeDiscoveryPacketReply::getType(&reply) == 21 )
      bdNATTypeDiscoveryClient::handleResponse(this, fromAddr, &reply);
  }
}

/*
==============
bdNATTypeDiscoveryClient::sendForTest1
==============
*/
_BOOL8 bdNATTypeDiscoveryClient::sendForTest1(bdNATTypeDiscoveryClient *this)
{
  bool v1; 

  v1 = bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket(this, BD_NTDP_SAME_ADDR, &this->m_serverAddr1);
  if ( v1 )
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::sendForTest1", 0xD7u, "Sent packet for NTDC test 1");
  return v1;
}

/*
==============
bdNATTypeDiscoveryClient::sendForTest2
==============
*/
_BOOL8 bdNATTypeDiscoveryClient::sendForTest2(bdNATTypeDiscoveryClient *this)
{
  bool v1; 

  v1 = bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket(this, BD_NTDP_DIFF_PORT_IP, &this->m_serverAddr1);
  if ( v1 )
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::sendForTest2", 0xE3u, "Sent packet for NTDC test 2");
  return v1;
}

/*
==============
bdNATTypeDiscoveryClient::sendForTest3
==============
*/
_BOOL8 bdNATTypeDiscoveryClient::sendForTest3(bdNATTypeDiscoveryClient *this)
{
  bool v1; 

  v1 = bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket(this, BD_NTDP_DIFF_IP, &this->m_serverAddr2);
  if ( v1 )
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::sendForTest3", 0xEEu, "Sent packet for NTDC test 3");
  return v1;
}

/*
==============
bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket
==============
*/
_BOOL8 bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket(bdNATTypeDiscoveryClient *this, bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacketRequest packetType, const bdAddr *serverAddr)
{
  bool v6; 
  int v7; 
  unsigned int newOffset; 
  bdNATTypeDiscoveryPacket v10; 
  char data[1296]; 

  v6 = 0;
  bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacket(&v10, packetType);
  newOffset = 0;
  if ( bdNATTypeDiscoveryPacket::serialize(&v10, data, 0x508u, 0, &newOffset) )
  {
    v7 = this->m_socket->sendTo(this->m_socket, serverAddr, data, newOffset);
    if ( v7 <= 0 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket", 0x164u, "Failed to send NTDC packet");
    }
    else if ( v7 == newOffset )
    {
      v6 = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket", 0x15Eu, "Sent packet length does not match packet length !");
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket", 0x169u, "Failed to serialize NTDC packet.");
  }
  bdNATTypeDiscoveryTelemetry::addSend(&this->m_telemetry, packetType, serverAddr, v6);
  return v6;
}

/*
==============
bdNATTypeDiscoveryClient::setStateError
==============
*/
void bdNATTypeDiscoveryClient::setStateError(bdNATTypeDiscoveryClient *this)
{
  bdNATTypeDiscoveryTelemetry *p_m_telemetry; 

  p_m_telemetry = &this->m_telemetry;
  this->m_state = BD_NTDCS_ERROR;
  bdNATTypeDiscoveryTelemetry::setResultFailure(&this->m_telemetry);
  bdTelemetry::addNatTypeDiscovery(p_m_telemetry);
}

/*
==============
bdNATTypeDiscoveryClient::setStateFinished
==============
*/
void bdNATTypeDiscoveryClient::setStateFinished(bdNATTypeDiscoveryClient *this, bdNATType natType)
{
  bdNATTypeDiscoveryTelemetry *p_m_telemetry; 

  p_m_telemetry = &this->m_telemetry;
  this->m_NATType = natType;
  this->m_state = BD_NTDCS_FINI;
  bdNATTypeDiscoveryTelemetry::setResultSuccess(&this->m_telemetry, natType);
  bdTelemetry::addNatTypeDiscovery(p_m_telemetry);
}

