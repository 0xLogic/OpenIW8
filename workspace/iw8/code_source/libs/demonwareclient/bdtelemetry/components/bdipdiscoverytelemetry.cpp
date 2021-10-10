/*
==============
bdIPDiscoveryTelemetry::bdIPDiscoveryTelemetry
==============
*/

void __fastcall bdIPDiscoveryTelemetry::bdIPDiscoveryTelemetry(bdIPDiscoveryTelemetry *this)
{
  ??0bdIPDiscoveryTelemetry@@QEAA@XZ(this);
}

/*
==============
bdIPDiscoveryTelemetry::addRetry
==============
*/

void __fastcall bdIPDiscoveryTelemetry::addRetry(bdIPDiscoveryTelemetry *this)
{
  ?addRetry@bdIPDiscoveryTelemetry@@QEAAXXZ(this);
}

/*
==============
bdIPDiscoveryTelemetry::setResult
==============
*/

void __fastcall bdIPDiscoveryTelemetry::setResult(bdIPDiscoveryTelemetry *this, int result, bdAddr *serverAddr, bdAddr *publicAddr)
{
  ?setResult@bdIPDiscoveryTelemetry@@QEAAXHVbdAddr@@0@Z(this, result, serverAddr, publicAddr);
}

/*
==============
bdIPDiscoveryTelemetry::bdIPDiscoveryTelemetry
==============
*/
void bdIPDiscoveryTelemetry::bdIPDiscoveryTelemetry(bdIPDiscoveryTelemetry *this)
{
  bdStopwatch::bdStopwatch(&this->m_age);
  *(_QWORD *)&this->m_retryTimesCount = 0i64;
  this->m_duration = 0;
  bdAddr::bdAddr(&this->m_serverAddr);
  bdAddr::bdAddr(&this->m_publicAddr);
  this->m_result = 0;
  bdStopwatch::start(&this->m_age);
}

/*
==============
bdIPDiscoveryTelemetry::addRetry
==============
*/
void bdIPDiscoveryTelemetry::addRetry(bdIPDiscoveryTelemetry *this)
{
  double ElapsedTimeInSeconds; 

  ++this->m_retries;
  if ( this->m_retryTimesCount < 0xA )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
    this->m_retryTimes[this->m_retryTimesCount++] = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  }
}

/*
==============
bdIPDiscoveryTelemetry::setResult
==============
*/
void bdIPDiscoveryTelemetry::setResult(bdIPDiscoveryTelemetry *this, int result, bdAddr *serverAddr, bdAddr *publicAddr)
{
  unsigned __int8 v6; 
  double ElapsedTimeInSeconds; 

  v6 = result;
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_result = v6;
  this->m_duration = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  this->m_serverAddr = *serverAddr;
  this->m_publicAddr = *publicAddr;
}

