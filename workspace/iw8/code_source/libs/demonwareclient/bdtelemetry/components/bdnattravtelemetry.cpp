/*
==============
bdNATTravTelemetry::setSTUNAddr
==============
*/

void __fastcall bdNATTravTelemetry::setSTUNAddr(bdNATTravTelemetry *this, const bdAddr *addr)
{
  ?setSTUNAddr@bdNATTravTelemetry@@QEAAXAEBVbdAddr@@@Z(this, addr);
}

/*
==============
bdNATTravTelemetry::bdNATTravTelemetry
==============
*/

void __fastcall bdNATTravTelemetry::bdNATTravTelemetry(bdNATTravTelemetry *this)
{
  ??0bdNATTravTelemetry@@QEAA@XZ(this);
}

/*
==============
bdNATTravTelemetry::setResult
==============
*/

void __fastcall bdNATTravTelemetry::setResult(bdNATTravTelemetry *this, bdNATTravTelemetry::bdNATTravResultType result, const bdNATTravClientData *data, const bdAddr *realAddr)
{
  ?setResult@bdNATTravTelemetry@@QEAAXW4bdNATTravResultType@1@AEBVbdNATTravClientData@@AEBVbdAddr@@@Z(this, result, data, realAddr);
}

/*
==============
bdNATTravTelemetry::addRecord
==============
*/

void __fastcall bdNATTravTelemetry::addRecord(bdNATTravTelemetry *this, bdNATTravTelemetry::bdNATTravRecordType type, const bdAddr *src, const bdAddr *dst, bool result)
{
  ?addRecord@bdNATTravTelemetry@@QEAAXW4bdNATTravRecordType@1@AEBVbdAddr@@1_N@Z(this, type, src, dst, result);
}

/*
==============
bdNATTravTelemetry::bdNATTravTelemetry
==============
*/
void bdNATTravTelemetry::bdNATTravTelemetry(bdNATTravTelemetry *this)
{
  bdNATTravTelemetry *v2; 
  __int64 v3; 

  v2 = this;
  v3 = 32i64;
  do
  {
    bdNATTravTelemetry::bdNATTravEvent::bdNATTravEvent(v2->m_attemptRecords);
    v2 = (bdNATTravTelemetry *)((char *)v2 + 320);
    --v3;
  }
  while ( v3 );
  this->m_attemptRecordsCount = 0;
  bdStopwatch::bdStopwatch(&this->m_age);
  this->m_localCommonAddr.m_ptr = NULL;
  this->m_remoteCommonAddr.m_ptr = NULL;
  bdAddr::bdAddr(&this->m_realAddr);
  bdAddr::bdAddr(&this->m_stunAddr);
  *(_DWORD *)&this->m_result = 0;
  this->m_throttled = 0;
  this->m_duration = 0;
  bdStopwatch::start(&this->m_age);
}

/*
==============
bdNATTravTelemetry::addRecord
==============
*/
void bdNATTravTelemetry::addRecord(bdNATTravTelemetry *this, bdNATTravTelemetry::bdNATTravRecordType type, const bdAddr *src, const bdAddr *dst, bool result)
{
  __int64 m_attemptRecordsCount; 
  char v8; 
  bdNATTravTelemetry::bdNATTravEvent *v9; 
  double ElapsedTimeInSeconds; 

  m_attemptRecordsCount = this->m_attemptRecordsCount;
  v8 = type;
  if ( (unsigned int)m_attemptRecordsCount < 0x20 )
  {
    this->m_attemptRecordsCount = m_attemptRecordsCount + 1;
    v9 = &this->m_attemptRecords[m_attemptRecordsCount];
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
    v9->type = v8;
    v9->msSinceStart = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
    *(__m256i *)&v9->src.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&src->m_address.inUn.m_sockaddrStorage.ss_family;
    *((__m256i *)&v9->src.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&src->m_address.inUn.m_ipv6Sockaddr + 1);
    *((__m256i *)&v9->src.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&src->m_address.inUn.m_ipv6Sockaddr + 2);
    *((__m256i *)&v9->src.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&src->m_address.inUn.m_ipv6Sockaddr + 3);
    v9->src.m_relayRoute = src->m_relayRoute;
    *(double *)&v9->src.m_type = *(double *)&src->m_type;
    *(__m256i *)&v9->dst.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&dst->m_address.inUn.m_sockaddrStorage.ss_family;
    *((__m256i *)&v9->dst.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&dst->m_address.inUn.m_ipv6Sockaddr + 1);
    *((__m256i *)&v9->dst.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&dst->m_address.inUn.m_ipv6Sockaddr + 2);
    *((__m256i *)&v9->dst.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&dst->m_address.inUn.m_ipv6Sockaddr + 3);
    v9->dst.m_relayRoute = dst->m_relayRoute;
    *(double *)&v9->dst.m_type = *(double *)&dst->m_type;
    v9->result = result;
  }
}

/*
==============
bdNATTravTelemetry::setResult
==============
*/
void bdNATTravTelemetry::setResult(bdNATTravTelemetry *this, bdNATTravTelemetry::bdNATTravResultType result, const bdNATTravClientData *data, const bdAddr *realAddr)
{
  double ElapsedTimeInSeconds; 

  this->m_result = result;
  this->m_realAddr = *realAddr;
  bdReference<bdCommonAddr>::operator=(&this->m_localCommonAddr, &data->m_local);
  bdReference<bdCommonAddr>::operator=(&this->m_remoteCommonAddr, &data->m_remote);
  this->m_throttled = data->m_throttled;
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_duration = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  this->m_triesStage1 = data->m_tries[1];
  this->m_triesStage2 = data->m_tries[2];
  this->m_triesStage3 = data->m_tries[3];
}

/*
==============
bdNATTravTelemetry::setSTUNAddr
==============
*/
void bdNATTravTelemetry::setSTUNAddr(bdNATTravTelemetry *this, const bdAddr *addr)
{
  this->m_stunAddr = *addr;
}

