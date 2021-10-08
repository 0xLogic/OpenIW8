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
  char v27[24]; 
  char str[24]; 

  _RDI = this;
  switch ( this->m_state )
  {
    case BD_NTDCS_RUN_TEST_1:
      bdNATTypeDiscoveryTelemetry::setTest1Result(&this->m_telemetry, addr, reply);
      _RAX = bdNATTypeDiscoveryPacketReply::getSecAddr((bdNATTypeDiscoveryPacketReply *)reply);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rdi+0A0h], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rdi+0C0h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rdi+0E0h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rdi+100h], ymm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups xmmword ptr [rdi+120h], xmm0
        vmovsd  xmm1, qword ptr [rax+90h]
        vmovsd  qword ptr [rdi+130h], xmm1
      }
      _RAX = bdNATTypeDiscoveryPacketReply::getMappedAddr((bdNATTypeDiscoveryPacketReply *)reply);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rdi+138h], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rdi+158h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rdi+178h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rdi+198h], ymm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups xmmword ptr [rdi+1B8h], xmm0
        vmovsd  xmm1, qword ptr [rax+90h]
        vmovsd  qword ptr [rdi+1C8h], xmm1
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::handleResponse", 0xFFu, "Reply for test 1. Start test 2.");
      if ( bdNATTypeDiscoveryClient::sendForTest2(_RDI) )
      {
        _RDI->m_resends = 0;
        _RDI->m_state = BD_NTDCS_RUN_TEST_2;
      }
      else
      {
        _RDI->m_state = BD_NTDCS_ERROR;
        bdNATTypeDiscoveryTelemetry::setResultFailure(&_RDI->m_telemetry);
        bdTelemetry::addNatTypeDiscovery(&_RDI->m_telemetry);
      }
      break;
    case BD_NTDCS_RUN_TEST_2:
      bdNATTypeDiscoveryTelemetry::setTest2Result(&this->m_telemetry, addr);
      v10 = bdSockAddr::compare(&addr->m_address, &_RDI->m_serverAddr2.m_address, 0);
      Port = bdSockAddr::getPort(&addr->m_address);
      v12 = Port == bdSockAddr::getPort(&_RDI->m_serverAddr2.m_address);
      if ( v10 )
      {
        if ( !v12 )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::handleResponse", 0x11Bu, "Reply for test 2. Open NAT (or no NAT).");
          _RDI->m_NATType = BD_NAT_OPEN;
          _RDI->m_state = BD_NTDCS_FINI;
          bdNATTypeDiscoveryTelemetry::setResultSuccess(&_RDI->m_telemetry, BD_NAT_OPEN);
          bdTelemetry::addNatTypeDiscovery(&_RDI->m_telemetry);
          return;
        }
      }
      else if ( !v10 )
      {
        bdAddr::toString((bdAddr *)addr, str, 0x16ui64);
        bdAddr::toString(&_RDI->m_serverAddr2, v27, 0x16ui64);
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::handleResponse", 0x126u, "Received test 2 response from unexpected address \n received from : %s \n expected from :%s ", str, v27);
      }
      if ( v12 )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::handleResponse", 0x12Au, "Received test 2 response from primary port");
      break;
    case BD_NTDCS_RUN_TEST_3:
      bdNATTypeDiscoveryTelemetry::setTest3Result(&this->m_telemetry, addr, reply);
      MappedAddr = bdNATTypeDiscoveryPacketReply::getMappedAddr((bdNATTypeDiscoveryPacketReply *)reply);
      if ( bdSockAddr::compare(&_RDI->m_mappedAddr.m_address, &MappedAddr->m_address, 1) )
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
      _RDI->m_NATType = v7;
      _RDI->m_state = BD_NTDCS_FINI;
      bdNATTypeDiscoveryTelemetry::setResultSuccess(&_RDI->m_telemetry, v7);
      bdTelemetry::addNatTypeDiscovery(&_RDI->m_telemetry);
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
  unsigned int m_NtdcsMaxResends; 
  float m_NtdcsSendTimeout; 
  bdNATTypeDiscoveryTelemetry v24; 

  _RSI = this;
  _R14 = serverAddr;
  bdNATTypeDiscoveryTelemetry::bdNATTypeDiscoveryTelemetry(&v24);
  memcpy_0(&_RSI->m_telemetry, v8, sizeof(_RSI->m_telemetry));
  if ( _RSI->m_state )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::init", 0x67u, "Cannot initialize already initialized class.");
    return 0;
  }
  if ( !socket )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::init", 0x61u, "Must initialize NAT Discovery Client with a valid socket");
    _RSI->m_state = BD_NTDCS_ERROR;
    bdNATTypeDiscoveryTelemetry::setResultFailure(&_RSI->m_telemetry);
    bdTelemetry::addNatTypeDiscovery(&_RSI->m_telemetry);
    return 0;
  }
  _RSI->m_socket = socket;
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::init", 0x55u, "NAT discovery client initialized");
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymmword ptr [rsi+8], ymm0
    vmovups ymm1, ymmword ptr [r14+20h]
    vmovups ymmword ptr [rsi+28h], ymm1
    vmovups ymm0, ymmword ptr [r14+40h]
    vmovups ymmword ptr [rsi+48h], ymm0
    vmovups ymm1, ymmword ptr [r14+60h]
    vmovups ymmword ptr [rsi+68h], ymm1
    vmovups xmm0, xmmword ptr [r14+80h]
    vmovups xmmword ptr [rsi+88h], xmm0
    vmovsd  xmm1, qword ptr [r14+90h]
  }
  _RSI->m_config = config;
  __asm { vmovsd  qword ptr [rsi+98h], xmm1 }
  bdNATTypeDiscoveryConfig::sanityCheckConfig(&_RSI->m_config);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+8]
    vmovups ymm1, ymmword ptr [rsi+28h]
  }
  m_NtdcsMaxResends = _RSI->m_config.m_NtdcsMaxResends;
  __asm
  {
    vmovups ymmword ptr [rsi+0C88h], ymm0
    vmovups ymm0, ymmword ptr [rsi+48h]
    vmovups ymmword ptr [rsi+0CA8h], ymm1
    vmovups ymm1, ymmword ptr [rsi+68h]
    vmovups ymmword ptr [rsi+0CC8h], ymm0
    vmovups xmm0, xmmword ptr [rsi+88h]
    vmovups ymmword ptr [rsi+0CE8h], ymm1
    vmovsd  xmm1, qword ptr [rsi+98h]
  }
  _RSI->m_telemetry.m_configMaxResends = m_NtdcsMaxResends;
  m_NtdcsSendTimeout = _RSI->m_config.m_NtdcsSendTimeout;
  __asm
  {
    vmovups xmmword ptr [rsi+0D08h], xmm0
    vmovsd  qword ptr [rsi+0D18h], xmm1
  }
  _RSI->m_telemetry.m_configSendTimeout = m_NtdcsSendTimeout;
  if ( bdNATTypeDiscoveryClient::sendForTest1(_RSI) )
  {
    _RSI->m_state = BD_NTDCS_RUN_TEST_1;
    bdStopwatch::start(&_RSI->m_timer);
  }
  else
  {
    _RSI->m_state = BD_NTDCS_ERROR;
    bdNATTypeDiscoveryTelemetry::setResultFailure(&_RSI->m_telemetry);
    bdTelemetry::addNatTypeDiscovery(&_RSI->m_telemetry);
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
  __int32 v4; 
  __int32 v5; 
  char v6; 
  char v7; 
  unsigned int v8; 
  bool v9; 
  unsigned int v10; 
  unsigned int m_resends; 

  _RBX = this;
  m_state = this->m_state;
  if ( m_state == BD_NTDCS_UNINITIALIZED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::pumpActiveTest", 0x1D4u, "Code logic error in NTDC pump");
    return;
  }
  v4 = m_state - 1;
  if ( !v4 )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_timer);
    __asm { vcomiss xmm0, dword ptr [rbx+1ECh] }
    if ( v6 | v7 )
      return;
    m_resends = _RBX->m_resends;
    _RBX->m_resends = m_resends + 1;
    if ( m_resends >= _RBX->m_config.m_NtdcsMaxResends )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::pumpActiveTest", 0x19Au, "Test 1 failed. Not online.");
      bdNATTypeDiscoveryClient::setStateError(_RBX);
      return;
    }
    bdStopwatch::start(&_RBX->m_timer);
    v9 = bdNATTypeDiscoveryClient::sendForTest1(_RBX);
    goto LABEL_17;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_timer);
    __asm { vcomiss xmm0, dword ptr [rbx+1ECh] }
    if ( v6 | v7 )
      return;
    v10 = _RBX->m_resends;
    _RBX->m_resends = v10 + 1;
    if ( v10 >= _RBX->m_config.m_NtdcsMaxResends )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::pumpActiveTest", 0x1AFu, "Test 2 failed.");
      _RBX->m_resends = 0;
      _RBX->m_state = BD_NTDCS_RUN_TEST_3;
      return;
    }
    bdStopwatch::start(&_RBX->m_timer);
    v9 = bdNATTypeDiscoveryClient::sendForTest2(_RBX);
    goto LABEL_17;
  }
  if ( v5 == 1 )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_timer);
    __asm { vcomiss xmm0, dword ptr [rbx+1ECh] }
    if ( !(v6 | v7) )
    {
      v8 = _RBX->m_resends;
      _RBX->m_resends = v8 + 1;
      if ( v8 >= _RBX->m_config.m_NtdcsMaxResends )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::pumpActiveTest", 0x1C5u, "Test 3 failed. Strict NAT.");
        _RBX->m_NATType = BD_NAT_STRICT;
        _RBX->m_state = BD_NTDCS_FINI;
        bdNATTypeDiscoveryTelemetry::setResultSuccess(&_RBX->m_telemetry, BD_NAT_STRICT);
        bdTelemetry::addNatTypeDiscovery(&_RBX->m_telemetry);
        return;
      }
      bdStopwatch::start(&_RBX->m_timer);
      v9 = bdNATTypeDiscoveryClient::sendNATTypeDiscoveryPacket(_RBX, BD_NTDP_DIFF_IP, &_RBX->m_serverAddr2);
      if ( v9 )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattypediscoveryclient.cpp", "bdNATTypeDiscoveryClient::sendForTest3", 0xEEu, "Sent packet for NTDC test 3");
        return;
      }
LABEL_17:
      if ( !v9 )
        bdNATTypeDiscoveryClient::setStateError(_RBX);
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

