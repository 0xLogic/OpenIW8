/*
==============
bdQoSTelemetry::bdQoSTelemetry
==============
*/

void __fastcall bdQoSTelemetry::bdQoSTelemetry(bdQoSTelemetry *this)
{
  ??0bdQoSTelemetry@@QEAA@XZ(this);
}

/*
==============
bdQoSTelemetry::setRelayEstablished
==============
*/

void __fastcall bdQoSTelemetry::setRelayEstablished(bdQoSTelemetry *this, const bdReference<bdCommonAddr> *remote, const bdAddr *relay)
{
  ?setRelayEstablished@bdQoSTelemetry@@QEAAXAEBV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, remote, relay);
}

/*
==============
bdQoSTelemetry::setResolved
==============
*/

void __fastcall bdQoSTelemetry::setResolved(bdQoSTelemetry *this, const bdReference<bdCommonAddr> *remote, const bdAddr *real)
{
  ?setResolved@bdQoSTelemetry@@QEAAXAEBV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, remote, real);
}

/*
==============
bdQoSTelemetry::setResult
==============
*/

void __fastcall bdQoSTelemetry::setResult(bdQoSTelemetry *this, bdQoSTelemetry::bdQoSTelemetryResultType result)
{
  ?setResult@bdQoSTelemetry@@QEAAXW4bdQoSTelemetryResultType@1@@Z(this, result);
}

/*
==============
bdQoSTelemetry::bdQoSTelemetry
==============
*/
void bdQoSTelemetry::bdQoSTelemetry(bdQoSTelemetry *this)
{
  bdStopwatch::bdStopwatch(&this->m_age);
  *(_QWORD *)&this->m_duration = 0i64;
  bdQoSProbeInfo::bdQoSProbeInfo(&this->m_probeInfo);
  this->m_result = 0;
  bdStopwatch::start(&this->m_age);
}

/*
==============
bdQoSTelemetry::setRelayEstablished
==============
*/
void bdQoSTelemetry::setRelayEstablished(bdQoSTelemetry *this, const bdReference<bdCommonAddr> *remote, const bdAddr *relay)
{
  double ElapsedTimeInSeconds; 

  this->m_msToNatTravResolve = 0;
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_msToRelayEstablished = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  bdReference<bdCommonAddr>::operator=(&this->m_probeInfo.m_addr, remote);
  this->m_probeInfo.m_realAddr = *relay;
}

/*
==============
bdQoSTelemetry::setResolved
==============
*/
void bdQoSTelemetry::setResolved(bdQoSTelemetry *this, const bdReference<bdCommonAddr> *remote, const bdAddr *real)
{
  double ElapsedTimeInSeconds; 

  this->m_msToRelayEstablished = 0;
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_msToNatTravResolve = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  bdReference<bdCommonAddr>::operator=(&this->m_probeInfo.m_addr, remote);
  this->m_probeInfo.m_realAddr = *real;
}

/*
==============
bdQoSTelemetry::setResult
==============
*/
void bdQoSTelemetry::setResult(bdQoSTelemetry *this, bdQoSTelemetry::bdQoSTelemetryResultType result)
{
  unsigned __int8 v2; 
  double ElapsedTimeInSeconds; 

  v2 = result;
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  this->m_duration = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  this->m_result = v2;
}

