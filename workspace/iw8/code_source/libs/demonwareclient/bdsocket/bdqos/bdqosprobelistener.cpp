/*
==============
bdQoSProbeInfo::bdQoSProbeInfo
==============
*/

void __fastcall bdQoSProbeInfo::bdQoSProbeInfo(bdQoSProbeInfo *this, const bdQoSProbeInfo *__that)
{
  ??0bdQoSProbeInfo@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdQoSProbeListener::onQoSProbeFail
==============
*/

void __fastcall bdQoSProbeListener::onQoSProbeFail(bdQoSProbeListener *this, const bdQoSProbeInfo *info)
{
  ?onQoSProbeFail@bdQoSProbeListener@@UEAAXAEBVbdQoSProbeInfo@@@Z(this, info);
}

/*
==============
bdQoSProbeListener::~bdQoSProbeListener
==============
*/

void __fastcall bdQoSProbeListener::~bdQoSProbeListener(bdQoSProbeListener *this)
{
  ??1bdQoSProbeListener@@UEAA@XZ(this);
}

/*
==============
bdQoSProbeListener::bdQoSProbeListener
==============
*/

void __fastcall bdQoSProbeListener::bdQoSProbeListener(bdQoSProbeListener *this)
{
  ??0bdQoSProbeListener@@QEAA@XZ(this);
}

/*
==============
bdQoSProbeListener::onQoSProbeFail
==============
*/

void __fastcall bdQoSProbeListener::onQoSProbeFail(bdQoSProbeListener *this, bdReference<bdCommonAddr> addr, const bdAddr *realAddr)
{
  ?onQoSProbeFail@bdQoSProbeListener@@UEAAXV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, addr, realAddr);
}

/*
==============
bdQoSProbeInfo::bdQoSProbeInfo
==============
*/

void __fastcall bdQoSProbeInfo::bdQoSProbeInfo(bdQoSProbeInfo *this)
{
  ??0bdQoSProbeInfo@@QEAA@XZ(this);
}

/*
==============
bdQoSProbeInfo::bdQoSProbeInfo
==============
*/
void bdQoSProbeInfo::bdQoSProbeInfo(bdQoSProbeInfo *this, const bdQoSProbeInfo *__that)
{
  bdCommonAddr *m_ptr; 

  _RDI = __that;
  _RBX = this;
  m_ptr = __that->m_addr.m_ptr;
  _RBX->m_addr.m_ptr = __that->m_addr.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdAddr::bdAddr(&_RBX->m_realAddr, &__that->m_realAddr);
  _RBX->m_latency = _RDI->m_latency;
  _RBX->m_data = _RDI->m_data;
  _RBX->m_dataSize = _RDI->m_dataSize;
  _RBX->m_disabled = _RDI->m_disabled;
  _RBX->m_bandwidthDown = _RDI->m_bandwidthDown;
  _RBX->m_bandwidthUp = _RDI->m_bandwidthUp;
  _RBX->m_minLatency = _RDI->m_minLatency;
  _RBX->m_numReplies = _RDI->m_numReplies;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0C8h]
    vmovups ymmword ptr [rbx+0C8h], ymm0
    vmovups ymm1, ymmword ptr [rdi+0E8h]
    vmovups ymmword ptr [rbx+0E8h], ymm1
  }
  _RBX->m_numProbesReceived = _RDI->m_numProbesReceived;
  _RBX->m_numProbesExpected = _RDI->m_numProbesExpected;
  _RBX->m_numRetries = _RDI->m_numRetries;
  _RBX->m_failureReason = _RDI->m_failureReason;
}

/*
==============
bdQoSProbeInfo::bdQoSProbeInfo
==============
*/
void bdQoSProbeInfo::bdQoSProbeInfo(bdQoSProbeInfo *this)
{
  this->m_addr.m_ptr = NULL;
  bdAddr::bdAddr(&this->m_realAddr);
  this->m_latency = 0.0;
  this->m_data = NULL;
  this->m_disabled = 0;
  *(_QWORD *)&this->m_bandwidthDown = 0i64;
  *(_QWORD *)&this->m_minLatency = 0i64;
  *(_QWORD *)&this->m_numProbesReceived = 0i64;
  this->m_numRetries = 0;
  this->m_failureReason = BD_QOS_PROBE_FAILURE_UNKNOWN;
}

/*
==============
bdQoSProbeListener::bdQoSProbeListener
==============
*/
void bdQoSProbeListener::bdQoSProbeListener(bdQoSProbeListener *this)
{
  this->__vftable = (bdQoSProbeListener_vtbl *)&bdQoSProbeListener::`vftable';
}

/*
==============
bdQoSProbeListener::~bdQoSProbeListener
==============
*/
void bdQoSProbeListener::~bdQoSProbeListener(bdQoSProbeListener *this)
{
  this->__vftable = (bdQoSProbeListener_vtbl *)&bdQoSProbeListener::`vftable';
}

/*
==============
bdQoSProbeListener::onQoSProbeFail
==============
*/
void bdQoSProbeListener::onQoSProbeFail(bdQoSProbeListener *this, const bdQoSProbeInfo *info)
{
  bdCommonAddr *m_ptr; 
  bdQoSProbeListener_vtbl *v3; 
  void (__fastcall *onQoSProbeFail)(bdQoSProbeListener *, bdReference<bdCommonAddr>, const bdAddr *); 
  bdCommonAddr *v5; 

  m_ptr = info->m_addr.m_ptr;
  v3 = this->__vftable;
  v5 = m_ptr;
  onQoSProbeFail = v3->onQoSProbeFail;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  ((void (__fastcall *)(bdQoSProbeListener *, bdCommonAddr **, bdAddr *))onQoSProbeFail)(this, &v5, &info->m_realAddr);
}

/*
==============
bdQoSProbeListener::onQoSProbeFail
==============
*/
void bdQoSProbeListener::onQoSProbeFail(bdQoSProbeListener *this, bdReference<bdCommonAddr> addr, const bdAddr *realAddr)
{
  if ( addr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64, const bdAddr *))addr.m_ptr->~bdReferencable)(addr.m_ptr->__vftable, 1i64, realAddr);
    addr.m_ptr->__vftable = NULL;
  }
}

