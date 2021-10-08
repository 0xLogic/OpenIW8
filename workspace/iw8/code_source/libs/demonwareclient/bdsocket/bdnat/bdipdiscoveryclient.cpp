/*
==============
bdIPDiscoveryClient::bdIPDiscoveryClient
==============
*/

void __fastcall bdIPDiscoveryClient::bdIPDiscoveryClient(bdIPDiscoveryClient *this)
{
  ??0bdIPDiscoveryClient@@QEAA@XZ(this);
}

/*
==============
bdIPDiscoveryClient::init
==============
*/

bool __fastcall bdIPDiscoveryClient::init(bdIPDiscoveryClient *this, bdSocket *socket, const bdAddr *server, bdIPDiscoveryConfig *config)
{
  return ?init@bdIPDiscoveryClient@@QEAA_NPEAVbdSocket@@AEBVbdAddr@@VbdIPDiscoveryConfig@@@Z(this, socket, server, config);
}

/*
==============
bdIPDiscoveryClient::pump
==============
*/

void __fastcall bdIPDiscoveryClient::pump(bdIPDiscoveryClient *this, bdAddr *fromAddr, unsigned __int8 *data, const int dataSize)
{
  ?pump@bdIPDiscoveryClient@@QEAAXVbdAddr@@QEAEH@Z(this, fromAddr, data, dataSize);
}

/*
==============
bdIPDiscoveryClient::quit
==============
*/

void __fastcall bdIPDiscoveryClient::quit(bdIPDiscoveryClient *this)
{
  ?quit@bdIPDiscoveryClient@@QEAAXXZ(this);
}

/*
==============
bdIPDiscoveryClient::getPublicAddress
==============
*/

const bdAddr *__fastcall bdIPDiscoveryClient::getPublicAddress(bdIPDiscoveryClient *this)
{
  return ?getPublicAddress@bdIPDiscoveryClient@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdIPDiscoveryClient::~bdIPDiscoveryClient
==============
*/

void __fastcall bdIPDiscoveryClient::~bdIPDiscoveryClient(bdIPDiscoveryClient *this)
{
  ??1bdIPDiscoveryClient@@QEAA@XZ(this);
}

/*
==============
bdIPDiscoveryClient::getStatus
==============
*/

bdIPDiscoveryClient::bdIPDiscoveryClientStatus __fastcall bdIPDiscoveryClient::getStatus(bdIPDiscoveryClient *this)
{
  return ?getStatus@bdIPDiscoveryClient@@QEBA?AW4bdIPDiscoveryClientStatus@1@XZ(this);
}

/*
==============
bdIPDiscoveryClient::setStatus
==============
*/

void __fastcall bdIPDiscoveryClient::setStatus(bdIPDiscoveryClient *this, bdIPDiscoveryClient::bdIPDiscoveryClientStatus status)
{
  ?setStatus@bdIPDiscoveryClient@@IEAAXW4bdIPDiscoveryClientStatus@1@@Z(this, status);
}

/*
==============
bdIPDiscoveryClient::sendIPDiscoveryPacket
==============
*/

bool __fastcall bdIPDiscoveryClient::sendIPDiscoveryPacket(bdIPDiscoveryClient *this)
{
  return ?sendIPDiscoveryPacket@bdIPDiscoveryClient@@IEAA_NXZ(this);
}

/*
==============
bdIPDiscoveryClient::bdIPDiscoveryClient
==============
*/
void bdIPDiscoveryClient::bdIPDiscoveryClient(bdIPDiscoveryClient *this)
{
  this->m_socket = NULL;
  bdAddr::bdAddr(&this->m_serverAddr);
  bdAddr::bdAddr(&this->m_publicAddr);
  bdStopwatch::bdStopwatch(&this->m_timer);
  this->m_status = BD_IP_DISC_UNINITIALIZED;
  bdIPDiscoveryConfig::bdIPDiscoveryConfig(&this->m_config);
  this->m_retries = 0;
  bdIPDiscoveryTelemetry::bdIPDiscoveryTelemetry(&this->m_telemetry);
  this->m_telemetryPending = 0;
}

/*
==============
bdIPDiscoveryClient::~bdIPDiscoveryClient
==============
*/
void bdIPDiscoveryClient::~bdIPDiscoveryClient(bdIPDiscoveryClient *this)
{
  bdIPDiscoveryClient::setStatus(this, BD_IP_DISC_UNINITIALIZED);
  this->m_socket = NULL;
}

/*
==============
bdIPDiscoveryClient::getPublicAddress
==============
*/
bdAddr *bdIPDiscoveryClient::getPublicAddress(bdIPDiscoveryClient *this)
{
  if ( this->m_status == BD_IP_DISC_SUCCESS )
    return &this->m_publicAddr;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::getPublicAddress", 0x4Au, "bdIPDiscoveryClient::getPublicAddress() called, but ip discovery was not successful (or not yet finished).");
  return &this->m_publicAddr;
}

/*
==============
bdIPDiscoveryClient::getStatus
==============
*/
__int64 bdIPDiscoveryClient::getStatus(bdIPDiscoveryClient *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdIPDiscoveryClient::init
==============
*/
_BOOL8 bdIPDiscoveryClient::init(bdIPDiscoveryClient *this, bdSocket *socket, const bdAddr *server, bdIPDiscoveryConfig *config)
{
  __int64 v10; 
  bool v19; 
  int v35; 
  bdIPDiscoveryTelemetry v36; 

  _RBX = this;
  _RBP = config;
  _RSI = server;
  bdIPDiscoveryTelemetry::bdIPDiscoveryTelemetry(&v36);
  _R10 = &_RBX->m_telemetry;
  v10 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [r10], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [r10+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [r10+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [r10+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [r10+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [r10+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [r10+60h], xmm0
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX += 128i64;
    _R10 = (bdIPDiscoveryTelemetry *)((char *)_R10 + 128);
    __asm { vmovups xmmword ptr [r10-10h], xmm1 }
    --v10;
  }
  while ( v10 );
  v19 = _RBX->m_status == BD_IP_DISC_UNINITIALIZED;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [r10], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [r10+10h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [r10+20h], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups xmmword ptr [r10+30h], xmm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [r10+40h], xmm0
    vmovups xmm1, xmmword ptr [rax+50h]
    vmovups xmmword ptr [r10+50h], xmm1
    vmovups xmm0, xmmword ptr [rax+60h]
    vmovups xmmword ptr [r10+60h], xmm0
  }
  *((_QWORD *)&_R10->m_serverAddr.m_address.inUn.m_ipv6Sockaddr + 6) = *(_QWORD *)(_RAX + 112);
  _RBX->m_telemetryPending = 1;
  if ( v19 )
  {
    if ( socket )
    {
      _RBX->m_socket = socket;
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi]
        vmovups ymmword ptr [rbx+8], ymm0
        vmovups ymm1, ymmword ptr [rsi+20h]
        vmovups ymmword ptr [rbx+28h], ymm1
        vmovups ymm0, ymmword ptr [rsi+40h]
        vmovups ymmword ptr [rbx+48h], ymm0
        vmovups ymm1, ymmword ptr [rsi+60h]
        vmovups ymmword ptr [rbx+68h], ymm1
        vmovups xmm0, xmmword ptr [rsi+80h]
        vmovups xmmword ptr [rbx+88h], xmm0
        vmovsd  xmm1, qword ptr [rsi+90h]
        vmovsd  qword ptr [rbx+98h], xmm1
      }
      _RBX->m_retries = 0;
      bdIPDiscoveryConfig::sanityCheckConfig(_RBP);
      __asm { vmovsd  xmm0, qword ptr [rbp+0] }
      v35 = *(_DWORD *)&_RBP->m_version;
      __asm { vmovsd  qword ptr [rbx+144h], xmm0 }
      *(_DWORD *)&_RBX->m_config.m_version = v35;
      bdIPDiscoveryClient::setStatus(_RBX, BD_IP_DISC_RUNNING);
      return bdIPDiscoveryClient::sendIPDiscoveryPacket(_RBX);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::init", 0x2Du, "A valid socket pointer is required by this class");
      return 0i64;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::init", 0x29u, "init() called multiple times.");
    return 0i64;
  }
}

/*
==============
bdIPDiscoveryClient::pump
==============
*/
void bdIPDiscoveryClient::pump(bdIPDiscoveryClient *this, bdAddr *fromAddr, unsigned __int8 *data, const int dataSize)
{
  const bdAddr *ProtectedAddr; 
  bdAddr *Addr; 
  bdAddr *v23; 
  bdAddrString *v24; 
  const char *String; 
  char v26; 
  char v27; 
  unsigned int m_retries; 
  unsigned int v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned int newOffset; 
  bdAddrString v33; 
  bdIPDiscoveryPacketReply v34; 
  char v35[112]; 
  char str[112]; 

  _RBX = this;
  if ( this->m_status == BD_IP_DISC_RUNNING && dataSize > 0 )
  {
    bdIPDiscoveryPacketReply::bdIPDiscoveryPacketReply(&v34);
    if ( bdSockAddr::compare(&fromAddr->m_address, &_RBX->m_serverAddr.m_address, 1) && bdIPDiscoveryPacketReply::deserialize(&v34, data, dataSize, 0, &newOffset) )
    {
      _RAX = bdIPDiscoveryPacketReply::getAddr(&v34);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx+0A0h], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbx+0C0h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbx+0E0h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbx+100h], ymm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups xmmword ptr [rbx+120h], xmm0
        vmovsd  xmm1, qword ptr [rax+90h]
        vmovsd  qword ptr [rbx+130h], xmm1
      }
      if ( bdIPDiscoveryPacketReply::getProtocolVersion(&v34) >= 3u )
      {
        ProtectedAddr = bdIPDiscoveryPacketReply::getProtectedAddr(&v34);
        if ( !bdSockAddr::compare(&_RBX->m_publicAddr.m_address, &ProtectedAddr->m_address, 1) )
        {
          _RAX = bdIPDiscoveryPacketReply::getProtectedAddr(&v34);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbx+0A0h], ymm0
            vmovups ymm1, ymmword ptr [rax+20h]
            vmovups ymmword ptr [rbx+0C0h], ymm1
            vmovups ymm0, ymmword ptr [rax+40h]
            vmovups ymmword ptr [rbx+0E0h], ymm0
            vmovups ymm1, ymmword ptr [rax+60h]
            vmovups ymmword ptr [rbx+100h], ymm1
            vmovups xmm0, xmmword ptr [rax+80h]
            vmovups xmmword ptr [rbx+120h], xmm0
            vmovsd  xmm1, qword ptr [rax+90h]
            vmovsd  qword ptr [rbx+130h], xmm1
          }
          memset_0(str, 0, 0x64ui64);
          memset_0(v35, 0, 0x64ui64);
          Addr = (bdAddr *)bdIPDiscoveryPacketReply::getAddr(&v34);
          bdAddr::toString(Addr, str, 0x64ui64);
          v23 = (bdAddr *)bdIPDiscoveryPacketReply::getProtectedAddr(&v34);
          bdAddr::toString(v23, v35, 0x64ui64);
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::pump", 0x6Bu, "Provided Public address (%s) doesn't match the protected version (%s), using protected version.", str, v35);
        }
      }
      bdIPDiscoveryClient::setStatus(_RBX, BD_IP_DISC_SUCCESS);
      bdAddrString::bdAddrString(&v33, &_RBX->m_publicAddr);
      String = bdAddrString::getString(v24);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::pump", 0x70u, "Public IP discovered: %s", String);
    }
  }
  if ( _RBX->m_status == BD_IP_DISC_RUNNING )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_timer);
    __asm { vcomiss xmm0, dword ptr [rbx+148h] }
    if ( v26 | v27 || (m_retries = _RBX->m_retries, v29 = _RBX->m_config.m_retries, _RBX->m_retries = m_retries + 1, m_retries >= v29) )
    {
      if ( _RBX->m_retries >= _RBX->m_config.m_retries )
      {
        LODWORD(v30) = _RBX->m_config.m_retries;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::pump", 0x80u, "IP Discovery failed with %u retries, giving up.  This may be due to the port already in use (try +set net_port <xxxxx>) or you have two network adapters (Docker)", v30);
        bdIPDiscoveryClient::setStatus(_RBX, BD_IP_DISC_FAIL);
      }
    }
    else
    {
      LODWORD(v31) = v29;
      LODWORD(v30) = m_retries + 1;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::pump", 0x7Au, "IP Discovery failed. Retrying. (%u/%u). This may be due to the port already in use (try +set net_port <xxxxx>) or you have two network adapters (Docker)", v30, v31);
      bdIPDiscoveryTelemetry::addRetry(&_RBX->m_telemetry);
      bdIPDiscoveryClient::sendIPDiscoveryPacket(_RBX);
    }
  }
}

/*
==============
bdIPDiscoveryClient::quit
==============
*/
void bdIPDiscoveryClient::quit(bdIPDiscoveryClient *this)
{
  bdAddr v16; 

  _RBX = this;
  this->m_socket = NULL;
  bdAddr::bdAddr(&v16);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+8], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+28h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+48h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbx+68h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rbx+88h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rbx+98h], xmm1
  }
  bdAddr::bdAddr(&v16);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+0A0h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+0C0h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+0E0h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbx+100h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rbx+120h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rbx+130h], xmm1
  }
  bdStopwatch::reset(&_RBX->m_timer);
  bdIPDiscoveryClient::setStatus(_RBX, BD_IP_DISC_UNINITIALIZED);
  _RBX->m_retries = 0;
}

/*
==============
bdIPDiscoveryClient::sendIPDiscoveryPacket
==============
*/
char bdIPDiscoveryClient::sendIPDiscoveryPacket(bdIPDiscoveryClient *this)
{
  int v2; 
  unsigned int newOffset; 
  bdIPDiscoveryPacket v5; 
  char data[1296]; 

  if ( this->m_status == BD_IP_DISC_RUNNING )
  {
    bdStopwatch::start(&this->m_timer);
    bdIPDiscoveryPacket::bdIPDiscoveryPacket(&v5, this->m_config.m_version);
    memset_0(data, 0, 0x508ui64);
    newOffset = 0;
    if ( bdIPDiscoveryPacket::serialize(&v5, data, 0x508u, 0, &newOffset) )
    {
      v2 = this->m_socket->sendTo(this->m_socket, &this->m_serverAddr, data, newOffset);
      if ( v2 > 0 && v2 == newOffset )
        return 1;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::sendIPDiscoveryPacket", 0xC5u, "Failed to send IP discovery packet.");
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::sendIPDiscoveryPacket", 0xB9u, "Failed to serialize IP Discovery packet.");
    }
    bdIPDiscoveryClient::setStatus(this, BD_IP_DISC_ERROR);
  }
  return 0;
}

/*
==============
bdIPDiscoveryClient::setStatus
==============
*/
void bdIPDiscoveryClient::setStatus(bdIPDiscoveryClient *this, bdIPDiscoveryClient::bdIPDiscoveryClientStatus status)
{
  bdAddr *v4; 
  bdAddr *v5; 
  bdAddr *v6; 
  bdAddr v7; 
  bdAddr v8; 

  this->m_status = status;
  if ( (unsigned int)(status - 2) <= 2 && this->m_telemetryPending )
  {
    bdAddr::bdAddr(&v7, &this->m_publicAddr);
    v5 = v4;
    bdAddr::bdAddr(&v8, &this->m_serverAddr);
    bdIPDiscoveryTelemetry::setResult(&this->m_telemetry, status, v6, v5);
    bdTelemetry::addIPDisco(&this->m_telemetry);
    this->m_telemetryPending = 0;
  }
}

