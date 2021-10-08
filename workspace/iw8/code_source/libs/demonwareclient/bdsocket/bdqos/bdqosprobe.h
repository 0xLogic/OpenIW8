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
  bdCommonAddr *v9; 

  _RBX = __that;
  _RSI = this;
  m_ptr = __that->m_addr.m_ptr;
  _RSI->m_addr.m_ptr = __that->m_addr.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdSecurityID::bdSecurityID(&_RSI->m_id, &__that->m_id);
  bdSecurityKey::bdSecurityKey(&_RSI->m_key, &_RBX->m_key);
  _RSI->m_listener = _RBX->m_listener;
  bdAddr::bdAddr(&_RSI->m_realAddr, &_RBX->m_realAddr);
  _RSI->m_retries = _RBX->m_retries;
  _RSI->m_lastTry.m_start = _RBX->m_lastTry.m_start;
  _RSI->m_numRepliesReceived = _RBX->m_numRepliesReceived;
  _RSI->m_numRepliesExpected = _RBX->m_numRepliesExpected;
  _RSI->m_latency = _RBX->m_latency;
  _RSI->m_minLatency = _RBX->m_minLatency;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+0E0h]
    vmovups ymmword ptr [rsi+0E0h], ymm0
    vmovups ymm1, ymmword ptr [rbx+100h]
    vmovups ymmword ptr [rsi+100h], ymm1
  }
  _RSI->m_bandwidthUp = _RBX->m_bandwidthUp;
  _RSI->m_bandwidthDown = _RBX->m_bandwidthDown;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+128h]
    vmovups ymmword ptr [rsi+128h], ymm0
  }
  _RSI->m_telemetry.m_age.m_start = _RBX->m_telemetry.m_age.m_start;
  _RSI->m_telemetry.m_duration = _RBX->m_telemetry.m_duration;
  _RSI->m_telemetry.m_msToNatTravResolve = _RBX->m_telemetry.m_msToNatTravResolve;
  _RSI->m_telemetry.m_msToRelayEstablished = _RBX->m_telemetry.m_msToRelayEstablished;
  _RDI = &_RSI->m_telemetry.m_probeInfo;
  v9 = _RBX->m_telemetry.m_probeInfo.m_addr.m_ptr;
  _RSI->m_telemetry.m_probeInfo.m_addr.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdAddr::bdAddr(&_RSI->m_telemetry.m_probeInfo.m_realAddr, &_RBX->m_telemetry.m_probeInfo.m_realAddr);
  _RSI->m_telemetry.m_probeInfo.m_latency = _RBX->m_telemetry.m_probeInfo.m_latency;
  _RSI->m_telemetry.m_probeInfo.m_data = _RBX->m_telemetry.m_probeInfo.m_data;
  _RSI->m_telemetry.m_probeInfo.m_dataSize = _RBX->m_telemetry.m_probeInfo.m_dataSize;
  _RSI->m_telemetry.m_probeInfo.m_disabled = _RBX->m_telemetry.m_probeInfo.m_disabled;
  _RSI->m_telemetry.m_probeInfo.m_bandwidthDown = _RBX->m_telemetry.m_probeInfo.m_bandwidthDown;
  _RSI->m_telemetry.m_probeInfo.m_bandwidthUp = _RBX->m_telemetry.m_probeInfo.m_bandwidthUp;
  _RSI->m_telemetry.m_probeInfo.m_minLatency = _RBX->m_telemetry.m_probeInfo.m_minLatency;
  _RSI->m_telemetry.m_probeInfo.m_numReplies = _RBX->m_telemetry.m_probeInfo.m_numReplies;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+228h]
    vmovups ymmword ptr [rdi+0C8h], ymm0
    vmovups ymm1, ymmword ptr [rbx+248h]
    vmovups ymmword ptr [rdi+0E8h], ymm1
  }
  _RSI->m_telemetry.m_probeInfo.m_numProbesReceived = _RBX->m_telemetry.m_probeInfo.m_numProbesReceived;
  _RSI->m_telemetry.m_probeInfo.m_numProbesExpected = _RBX->m_telemetry.m_probeInfo.m_numProbesExpected;
  _RSI->m_telemetry.m_probeInfo.m_numRetries = _RBX->m_telemetry.m_probeInfo.m_numRetries;
  _RSI->m_telemetry.m_probeInfo.m_failureReason = _RBX->m_telemetry.m_probeInfo.m_failureReason;
  _RSI->m_telemetry.m_result = _RBX->m_telemetry.m_result;
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

