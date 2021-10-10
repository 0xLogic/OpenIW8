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
  _OWORD *v8; 
  bdIPDiscoveryTelemetry *p_m_telemetry; 
  __int64 v10; 
  __int128 v11; 
  bool v12; 
  int v14; 
  bdIPDiscoveryTelemetry v15; 

  bdIPDiscoveryTelemetry::bdIPDiscoveryTelemetry(&v15);
  p_m_telemetry = &this->m_telemetry;
  v10 = 2i64;
  do
  {
    *(_OWORD *)&p_m_telemetry->m_age.m_start = *v8;
    *(_OWORD *)&p_m_telemetry->m_retryTimes[2] = v8[1];
    *(_OWORD *)&p_m_telemetry->m_retryTimes[6] = v8[2];
    *(_OWORD *)&p_m_telemetry->m_retryTimesCount = v8[3];
    *(_OWORD *)&p_m_telemetry->m_serverAddr.m_address.inUn.m_sockaddrStorage.ss_family = v8[4];
    *(in6_addr *)((char *)&p_m_telemetry->m_serverAddr.m_address.inUn.m_ipv6Sockaddr.sin6_addr + 8) = (in6_addr)v8[5];
    *((_OWORD *)&p_m_telemetry->m_serverAddr.m_address.inUn.m_ipv6Sockaddr + 2) = v8[6];
    v11 = v8[7];
    v8 += 8;
    p_m_telemetry = (bdIPDiscoveryTelemetry *)((char *)p_m_telemetry + 128);
    *(_OWORD *)&p_m_telemetry[-1].m_publicAddr.m_type = v11;
    --v10;
  }
  while ( v10 );
  v12 = this->m_status == BD_IP_DISC_UNINITIALIZED;
  *(_OWORD *)&p_m_telemetry->m_age.m_start = *v8;
  *(_OWORD *)&p_m_telemetry->m_retryTimes[2] = v8[1];
  *(_OWORD *)&p_m_telemetry->m_retryTimes[6] = v8[2];
  *(_OWORD *)&p_m_telemetry->m_retryTimesCount = v8[3];
  *(_OWORD *)&p_m_telemetry->m_serverAddr.m_address.inUn.m_sockaddrStorage.ss_family = v8[4];
  *(in6_addr *)((char *)&p_m_telemetry->m_serverAddr.m_address.inUn.m_ipv6Sockaddr.sin6_addr + 8) = (in6_addr)v8[5];
  *((_OWORD *)&p_m_telemetry->m_serverAddr.m_address.inUn.m_ipv6Sockaddr + 2) = v8[6];
  *((_QWORD *)&p_m_telemetry->m_serverAddr.m_address.inUn.m_ipv6Sockaddr + 6) = *((_QWORD *)v8 + 14);
  this->m_telemetryPending = 1;
  if ( v12 )
  {
    if ( socket )
    {
      this->m_socket = socket;
      *(__m256i *)&this->m_serverAddr.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&server->m_address.inUn.m_sockaddrStorage.ss_family;
      *((__m256i *)&this->m_serverAddr.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&server->m_address.inUn.m_ipv6Sockaddr + 1);
      *((__m256i *)&this->m_serverAddr.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&server->m_address.inUn.m_ipv6Sockaddr + 2);
      *((__m256i *)&this->m_serverAddr.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&server->m_address.inUn.m_ipv6Sockaddr + 3);
      this->m_serverAddr.m_relayRoute = server->m_relayRoute;
      *(double *)&this->m_serverAddr.m_type = *(double *)&server->m_type;
      this->m_retries = 0;
      bdIPDiscoveryConfig::sanityCheckConfig(config);
      v14 = *(_DWORD *)&config->m_version;
      *(double *)&this->m_config.m_retries = *(double *)&config->m_retries;
      *(_DWORD *)&this->m_config.m_version = v14;
      bdIPDiscoveryClient::setStatus(this, BD_IP_DISC_RUNNING);
      return bdIPDiscoveryClient::sendIPDiscoveryPacket(this);
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
  bdAddr *v10; 
  bdAddrString *v11; 
  const char *String; 
  double ElapsedTimeInSeconds; 
  unsigned int m_retries; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int newOffset; 
  bdAddrString v19; 
  bdIPDiscoveryPacketReply v20; 
  char v21[112]; 
  char str[112]; 

  if ( this->m_status == BD_IP_DISC_RUNNING && dataSize > 0 )
  {
    bdIPDiscoveryPacketReply::bdIPDiscoveryPacketReply(&v20);
    if ( bdSockAddr::compare(&fromAddr->m_address, &this->m_serverAddr.m_address, 1) && bdIPDiscoveryPacketReply::deserialize(&v20, data, dataSize, 0, &newOffset) )
    {
      this->m_publicAddr = *bdIPDiscoveryPacketReply::getAddr(&v20);
      if ( bdIPDiscoveryPacketReply::getProtocolVersion(&v20) >= 3u )
      {
        ProtectedAddr = bdIPDiscoveryPacketReply::getProtectedAddr(&v20);
        if ( !bdSockAddr::compare(&this->m_publicAddr.m_address, &ProtectedAddr->m_address, 1) )
        {
          this->m_publicAddr = *bdIPDiscoveryPacketReply::getProtectedAddr(&v20);
          memset_0(str, 0, 0x64ui64);
          memset_0(v21, 0, 0x64ui64);
          Addr = (bdAddr *)bdIPDiscoveryPacketReply::getAddr(&v20);
          bdAddr::toString(Addr, str, 0x64ui64);
          v10 = (bdAddr *)bdIPDiscoveryPacketReply::getProtectedAddr(&v20);
          bdAddr::toString(v10, v21, 0x64ui64);
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::pump", 0x6Bu, "Provided Public address (%s) doesn't match the protected version (%s), using protected version.", str, v21);
        }
      }
      bdIPDiscoveryClient::setStatus(this, BD_IP_DISC_SUCCESS);
      bdAddrString::bdAddrString(&v19, &this->m_publicAddr);
      String = bdAddrString::getString(v11);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::pump", 0x70u, "Public IP discovered: %s", String);
    }
  }
  if ( this->m_status == BD_IP_DISC_RUNNING )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
    if ( *(float *)&ElapsedTimeInSeconds <= this->m_config.m_requestTimeout || (m_retries = this->m_retries, v15 = this->m_config.m_retries, this->m_retries = m_retries + 1, m_retries >= v15) )
    {
      if ( this->m_retries >= this->m_config.m_retries )
      {
        LODWORD(v16) = this->m_config.m_retries;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::pump", 0x80u, "IP Discovery failed with %u retries, giving up.  This may be due to the port already in use (try +set net_port <xxxxx>) or you have two network adapters (Docker)", v16);
        bdIPDiscoveryClient::setStatus(this, BD_IP_DISC_FAIL);
      }
    }
    else
    {
      LODWORD(v17) = v15;
      LODWORD(v16) = m_retries + 1;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdipdiscoveryclient.cpp", "bdIPDiscoveryClient::pump", 0x7Au, "IP Discovery failed. Retrying. (%u/%u). This may be due to the port already in use (try +set net_port <xxxxx>) or you have two network adapters (Docker)", v16, v17);
      bdIPDiscoveryTelemetry::addRetry(&this->m_telemetry);
      bdIPDiscoveryClient::sendIPDiscoveryPacket(this);
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
  bdAddr *v2; 
  bdAddr *v3; 
  bdAddr v4; 

  this->m_socket = NULL;
  bdAddr::bdAddr(&v4);
  this->m_serverAddr = *v2;
  bdAddr::bdAddr(&v4);
  this->m_publicAddr = *v3;
  bdStopwatch::reset(&this->m_timer);
  bdIPDiscoveryClient::setStatus(this, BD_IP_DISC_UNINITIALIZED);
  this->m_retries = 0;
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

