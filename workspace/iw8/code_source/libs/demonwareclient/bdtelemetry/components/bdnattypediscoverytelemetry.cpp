/*
==============
bdNATTypeDiscoveryTelemetry::setTest1Result
==============
*/

void __fastcall bdNATTypeDiscoveryTelemetry::setTest1Result(bdNATTypeDiscoveryTelemetry *this, const bdAddr *fromAddr, const bdNATTypeDiscoveryPacketReply *reply)
{
  ?setTest1Result@bdNATTypeDiscoveryTelemetry@@QEAAXAEBVbdAddr@@AEBVbdNATTypeDiscoveryPacketReply@@@Z(this, fromAddr, reply);
}

/*
==============
bdNATTypeDiscoveryTelemetry::setTest3Result
==============
*/

void __fastcall bdNATTypeDiscoveryTelemetry::setTest3Result(bdNATTypeDiscoveryTelemetry *this, const bdAddr *fromAddr, const bdNATTypeDiscoveryPacketReply *reply)
{
  ?setTest3Result@bdNATTypeDiscoveryTelemetry@@QEAAXAEBVbdAddr@@AEBVbdNATTypeDiscoveryPacketReply@@@Z(this, fromAddr, reply);
}

/*
==============
bdNATTypeDiscoveryTelemetry::setResultFailure
==============
*/

void __fastcall bdNATTypeDiscoveryTelemetry::setResultFailure(bdNATTypeDiscoveryTelemetry *this)
{
  ?setResultFailure@bdNATTypeDiscoveryTelemetry@@QEAAXXZ(this);
}

/*
==============
bdNATTypeDiscoveryTelemetry::setResultSuccess
==============
*/

void __fastcall bdNATTypeDiscoveryTelemetry::setResultSuccess(bdNATTypeDiscoveryTelemetry *this, bdNATType natType)
{
  ?setResultSuccess@bdNATTypeDiscoveryTelemetry@@QEAAXW4bdNATType@@@Z(this, natType);
}

/*
==============
bdNATTypeDiscoveryTelemetry::bdNATTypeDiscoveryTelemetry
==============
*/

void __fastcall bdNATTypeDiscoveryTelemetry::bdNATTypeDiscoveryTelemetry(bdNATTypeDiscoveryTelemetry *this)
{
  ??0bdNATTypeDiscoveryTelemetry@@QEAA@XZ(this);
}

/*
==============
bdNATTypeDiscoveryTelemetry::addSend
==============
*/

void __fastcall bdNATTypeDiscoveryTelemetry::addSend(bdNATTypeDiscoveryTelemetry *this, bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacketRequest packetType, const bdAddr *dst, bool sendSuccess)
{
  ?addSend@bdNATTypeDiscoveryTelemetry@@QEAAXW4bdNATTypeDiscoveryPacketRequest@bdNATTypeDiscoveryPacket@@AEBVbdAddr@@_N@Z(this, packetType, dst, sendSuccess);
}

/*
==============
bdNATTypeDiscoveryTelemetry::setTest2Result
==============
*/

void __fastcall bdNATTypeDiscoveryTelemetry::setTest2Result(bdNATTypeDiscoveryTelemetry *this, const bdAddr *fromAddr)
{
  ?setTest2Result@bdNATTypeDiscoveryTelemetry@@QEAAXAEBVbdAddr@@@Z(this, fromAddr);
}

/*
==============
bdNATTypeDiscoveryTelemetry::bdNATTypeDiscoveryTelemetry
==============
*/
void bdNATTypeDiscoveryTelemetry::bdNATTypeDiscoveryTelemetry(bdNATTypeDiscoveryTelemetry *this)
{
  bdNATTypeDiscoveryTelemetry *v2; 
  __int64 v3; 

  v2 = this;
  v3 = 16i64;
  do
  {
    bdNATTypeDiscoveryTelemetry::bdNATTypeDiscoverySendData::bdNATTypeDiscoverySendData(v2->m_sends);
    v2 = (bdNATTypeDiscoveryTelemetry *)((char *)v2 + 168);
    --v3;
  }
  while ( v3 );
  this->m_sendCount = 0;
  bdStopwatch::bdStopwatch(&this->m_age);
  bdAddr::bdAddr(&this->m_serverAddr1);
  bdAddr::bdAddr(&this->m_test1Result.fromAddr);
  bdAddr::bdAddr(&this->m_test1Result.mappedAddr);
  bdAddr::bdAddr(&this->m_test1Result.secAddr);
  bdAddr::bdAddr(&this->m_test2Result.fromAddr);
  bdAddr::bdAddr(&this->m_test3Result.fromAddr);
  bdAddr::bdAddr(&this->m_test3Result.mappedAddr);
  this->m_duration = 0;
  *(_WORD *)&this->m_result = 0;
  this->m_test1Result.msSinceStart = -1;
  this->m_test2Result.msSinceStart = -1;
  this->m_test3Result.msSinceStart = -1;
  bdStopwatch::start(&this->m_age);
}

/*
==============
bdNATTypeDiscoveryTelemetry::addSend
==============
*/
void bdNATTypeDiscoveryTelemetry::addSend(bdNATTypeDiscoveryTelemetry *this, bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacketRequest packetType, const bdAddr *dst, bool sendSuccess)
{
  __int64 m_sendCount; 
  char v7; 
  bdNATTypeDiscoveryTelemetry::bdNATTypeDiscoverySendData *v8; 
  double ElapsedTimeInSeconds; 

  m_sendCount = this->m_sendCount;
  v7 = packetType;
  if ( (unsigned int)m_sendCount < 0x10 )
  {
    this->m_sendCount = m_sendCount + 1;
    v8 = &this->m_sends[m_sendCount];
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
    v8->packetType = v7;
    v8->msSinceStart = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
    *(__m256i *)&v8->dst.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&dst->m_address.inUn.m_sockaddrStorage.ss_family;
    *((__m256i *)&v8->dst.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&dst->m_address.inUn.m_ipv6Sockaddr + 1);
    *((__m256i *)&v8->dst.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&dst->m_address.inUn.m_ipv6Sockaddr + 2);
    *((__m256i *)&v8->dst.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&dst->m_address.inUn.m_ipv6Sockaddr + 3);
    v8->dst.m_relayRoute = dst->m_relayRoute;
    *(double *)&v8->dst.m_type = *(double *)&dst->m_type;
    v8->sendSuccess = sendSuccess;
  }
}

/*
==============
bdNATTypeDiscoveryTelemetry::setResultFailure
==============
*/
void bdNATTypeDiscoveryTelemetry::setResultFailure(bdNATTypeDiscoveryTelemetry *this)
{
  double ElapsedTimeInSeconds; 

  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_duration = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  *(_WORD *)&this->m_result = 2;
}

/*
==============
bdNATTypeDiscoveryTelemetry::setResultSuccess
==============
*/
void bdNATTypeDiscoveryTelemetry::setResultSuccess(bdNATTypeDiscoveryTelemetry *this, bdNATType natType)
{
  unsigned __int8 v3; 
  double ElapsedTimeInSeconds; 

  v3 = natType;
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_duration = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  this->m_result = 1;
  this->m_natType = v3;
}

/*
==============
bdNATTypeDiscoveryTelemetry::setTest1Result
==============
*/
void bdNATTypeDiscoveryTelemetry::setTest1Result(bdNATTypeDiscoveryTelemetry *this, const bdAddr *fromAddr, const bdNATTypeDiscoveryPacketReply *reply)
{
  double ElapsedTimeInSeconds; 

  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_test1Result.msSinceStart = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  this->m_test1Result.fromAddr = *fromAddr;
  this->m_test1Result.secAddr = *bdNATTypeDiscoveryPacketReply::getSecAddr((bdNATTypeDiscoveryPacketReply *)reply);
  this->m_test1Result.mappedAddr = *bdNATTypeDiscoveryPacketReply::getMappedAddr((bdNATTypeDiscoveryPacketReply *)reply);
}

/*
==============
bdNATTypeDiscoveryTelemetry::setTest2Result
==============
*/
void bdNATTypeDiscoveryTelemetry::setTest2Result(bdNATTypeDiscoveryTelemetry *this, const bdAddr *fromAddr)
{
  double ElapsedTimeInSeconds; 

  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_test2Result.msSinceStart = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  this->m_test2Result.fromAddr = *fromAddr;
}

/*
==============
bdNATTypeDiscoveryTelemetry::setTest3Result
==============
*/
void bdNATTypeDiscoveryTelemetry::setTest3Result(bdNATTypeDiscoveryTelemetry *this, const bdAddr *fromAddr, const bdNATTypeDiscoveryPacketReply *reply)
{
  double ElapsedTimeInSeconds; 

  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_test3Result.msSinceStart = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  this->m_test2Result.fromAddr = *fromAddr;
  this->m_test3Result.mappedAddr = *bdNATTypeDiscoveryPacketReply::getMappedAddr((bdNATTypeDiscoveryPacketReply *)reply);
}

