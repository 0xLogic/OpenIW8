/*
==============
bdQoSProbe::bdQosProbeHost::bdQosProbeHost
==============
*/

void __fastcall bdQoSProbe::bdQosProbeHost::bdQosProbeHost(bdQoSProbe::bdQosProbeHost *this)
{
  ??0bdQosProbeHost@bdQoSProbe@@QEAA@XZ(this);
}

/*
==============
bdQoSProbe::bdQoSProbeEntryWrapper::bdQoSProbeEntryWrapper
==============
*/

void __fastcall bdQoSProbe::bdQoSProbeEntryWrapper::bdQoSProbeEntryWrapper(bdQoSProbe::bdQoSProbeEntryWrapper *this, const bdQoSProbe::bdQoSProbeEntryWrapper *__that)
{
  ??0bdQoSProbeEntryWrapper@bdQoSProbe@@QEAA@AEBU01@@Z(this, __that);
}

/*
==============
bdQoSProbe::bdQoSProbeEntryWrapper::operator delete
==============
*/

void __fastcall bdQoSProbe::bdQoSProbeEntryWrapper::operator delete(void *__formal, void *a2)
{
  ??3bdQoSProbeEntryWrapper@bdQoSProbe@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdQoSProbe::bdQoSProbeEntryWrapper::bdQoSProbeEntryWrapper
==============
*/

void __fastcall bdQoSProbe::bdQoSProbeEntryWrapper::bdQoSProbeEntryWrapper(bdQoSProbe::bdQoSProbeEntryWrapper *this)
{
  ??0bdQoSProbeEntryWrapper@bdQoSProbe@@QEAA@XZ(this);
}

/*
==============
bdQoSProbe::bdQosProbeHost::bdQosProbeHost
==============
*/

void __fastcall bdQoSProbe::bdQosProbeHost::bdQosProbeHost(bdQoSProbe::bdQosProbeHost *this, const bdQoSProbe::bdQosProbeHost *__that)
{
  ??0bdQosProbeHost@bdQoSProbe@@QEAA@AEBU01@@Z(this, __that);
}

/*
==============
bdQoSProbe::bdQoSProbeEntryWrapper::bdQoSProbeEntryWrapper
==============
*/
void bdQoSProbe::bdQoSProbeEntryWrapper::bdQoSProbeEntryWrapper(bdQoSProbe::bdQoSProbeEntryWrapper *this, const bdQoSProbe::bdQoSProbeEntryWrapper *__that)
{
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v5; 

  m_ptr = __that->m_addr.m_ptr;
  this->m_addr.m_ptr = __that->m_addr.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdSecurityID::bdSecurityID(&this->m_id, &__that->m_id);
  bdSecurityKey::bdSecurityKey(&this->m_key, &__that->m_key);
  this->m_listener = __that->m_listener;
  bdAddr::bdAddr(&this->m_realAddr, &__that->m_realAddr);
  this->m_retries = __that->m_retries;
  this->m_lastTry.m_start = __that->m_lastTry.m_start;
  this->m_numRepliesReceived = __that->m_numRepliesReceived;
  this->m_numRepliesExpected = __that->m_numRepliesExpected;
  this->m_latency = __that->m_latency;
  this->m_minLatency = __that->m_minLatency;
  *(__m256i *)this->m_replies = *(__m256i *)__that->m_replies;
  *(__m256i *)&this->m_replies[8] = *(__m256i *)&__that->m_replies[8];
  this->m_bandwidthUp = __that->m_bandwidthUp;
  this->m_bandwidthDown = __that->m_bandwidthDown;
  this->m_currentProbe = __that->m_currentProbe;
  this->m_telemetry.m_age.m_start = __that->m_telemetry.m_age.m_start;
  this->m_telemetry.m_duration = __that->m_telemetry.m_duration;
  this->m_telemetry.m_msToNatTravResolve = __that->m_telemetry.m_msToNatTravResolve;
  this->m_telemetry.m_msToRelayEstablished = __that->m_telemetry.m_msToRelayEstablished;
  v5 = __that->m_telemetry.m_probeInfo.m_addr.m_ptr;
  this->m_telemetry.m_probeInfo.m_addr.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  bdAddr::bdAddr(&this->m_telemetry.m_probeInfo.m_realAddr, &__that->m_telemetry.m_probeInfo.m_realAddr);
  this->m_telemetry.m_probeInfo.m_latency = __that->m_telemetry.m_probeInfo.m_latency;
  this->m_telemetry.m_probeInfo.m_data = __that->m_telemetry.m_probeInfo.m_data;
  this->m_telemetry.m_probeInfo.m_dataSize = __that->m_telemetry.m_probeInfo.m_dataSize;
  this->m_telemetry.m_probeInfo.m_disabled = __that->m_telemetry.m_probeInfo.m_disabled;
  this->m_telemetry.m_probeInfo.m_bandwidthDown = __that->m_telemetry.m_probeInfo.m_bandwidthDown;
  this->m_telemetry.m_probeInfo.m_bandwidthUp = __that->m_telemetry.m_probeInfo.m_bandwidthUp;
  this->m_telemetry.m_probeInfo.m_minLatency = __that->m_telemetry.m_probeInfo.m_minLatency;
  this->m_telemetry.m_probeInfo.m_numReplies = __that->m_telemetry.m_probeInfo.m_numReplies;
  *(__m256i *)this->m_telemetry.m_probeInfo.m_replies = *(__m256i *)__that->m_telemetry.m_probeInfo.m_replies;
  *(__m256i *)&this->m_telemetry.m_probeInfo.m_replies[8] = *(__m256i *)&__that->m_telemetry.m_probeInfo.m_replies[8];
  this->m_telemetry.m_probeInfo.m_numProbesReceived = __that->m_telemetry.m_probeInfo.m_numProbesReceived;
  this->m_telemetry.m_probeInfo.m_numProbesExpected = __that->m_telemetry.m_probeInfo.m_numProbesExpected;
  this->m_telemetry.m_probeInfo.m_numRetries = __that->m_telemetry.m_probeInfo.m_numRetries;
  this->m_telemetry.m_probeInfo.m_failureReason = __that->m_telemetry.m_probeInfo.m_failureReason;
  this->m_telemetry.m_result = __that->m_telemetry.m_result;
}

/*
==============
bdQoSProbe::bdQoSProbeEntryWrapper::bdQoSProbeEntryWrapper
==============
*/
void bdQoSProbe::bdQoSProbeEntryWrapper::bdQoSProbeEntryWrapper(bdQoSProbe::bdQoSProbeEntryWrapper *this)
{
  this->m_addr.m_ptr = NULL;
  bdSecurityID::bdSecurityID(&this->m_id);
  bdSecurityKey::bdSecurityKey(&this->m_key);
  this->m_listener = NULL;
  bdAddr::bdAddr(&this->m_realAddr);
  this->m_retries = 0;
  bdStopwatch::bdStopwatch(&this->m_lastTry);
  *(_QWORD *)&this->m_numRepliesReceived = 0i64;
  this->m_latency = 0.0;
  *(_QWORD *)&this->m_bandwidthUp = 0i64;
  *(_QWORD *)&this->m_currentProbe.m_numPacketsReceived = 0i64;
  *(_QWORD *)&this->m_currentProbe.m_bandwidthDown = 0i64;
  bdStopwatch::bdStopwatch(&this->m_currentProbe.m_timer);
  this->m_currentProbe.m_minLatency = 2147483600.0;
  this->m_currentProbe.m_latency = 2147483600.0;
  bdStopwatch::reset(&this->m_currentProbe.m_timer);
  bdQoSTelemetry::bdQoSTelemetry(&this->m_telemetry);
  bdStopwatch::reset(&this->m_lastTry);
  this->m_minLatency = 2147483600.0;
}

/*
==============
bdQoSProbe::bdQosProbeHost::bdQosProbeHost
==============
*/
void bdQoSProbe::bdQosProbeHost::bdQosProbeHost(bdQoSProbe::bdQosProbeHost *this, const bdQoSProbe::bdQosProbeHost *__that)
{
  this->m_numPacketsReceived = __that->m_numPacketsReceived;
  bdAddr::bdAddr(&this->m_realAddr, &__that->m_realAddr);
  this->m_timer.m_start = __that->m_timer.m_start;
  this->m_holdTimePacket1.m_start = __that->m_holdTimePacket1.m_start;
  this->m_holdTimePacket2.m_start = __that->m_holdTimePacket2.m_start;
  this->m_completed = __that->m_completed;
  this->m_bandwidth = __that->m_bandwidth;
  this->m_id = __that->m_id;
  this->m_probeTimestamp = __that->m_probeTimestamp;
  this->m_needToSendData = __that->m_needToSendData;
  this->m_secid = __that->m_secid;
}

/*
==============
bdQoSProbe::bdQosProbeHost::bdQosProbeHost
==============
*/
void bdQoSProbe::bdQosProbeHost::bdQosProbeHost(bdQoSProbe::bdQosProbeHost *this)
{
  this->m_numPacketsReceived = 0;
  bdAddr::bdAddr(&this->m_realAddr);
  bdStopwatch::bdStopwatch(&this->m_timer);
  bdStopwatch::bdStopwatch(&this->m_holdTimePacket1);
  bdStopwatch::bdStopwatch(&this->m_holdTimePacket2);
  this->m_completed = 0;
  *(_QWORD *)&this->m_bandwidth = 0i64;
  this->m_probeTimestamp = 0i64;
  this->m_needToSendData = 0;
  this->m_secid = 0;
  bdStopwatch::reset(&this->m_timer);
  bdStopwatch::reset(&this->m_holdTimePacket1);
  bdStopwatch::reset(&this->m_holdTimePacket2);
}

/*
==============
bdQoSProbe::bdQoSProbeEntryWrapper::operator delete
==============
*/
void bdQoSProbe::bdQoSProbeEntryWrapper::operator delete(void *__formal, void *a2)
{
  ;
}

