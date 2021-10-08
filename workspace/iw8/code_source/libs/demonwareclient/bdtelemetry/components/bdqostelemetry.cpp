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
  _RSI = relay;
  this->m_msToNatTravResolve = 0;
  _RDI = this;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  _RDI->m_msToRelayEstablished = _RAX;
  bdReference<bdCommonAddr>::operator=(&_RDI->m_probeInfo.m_addr, remote);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rdi+20h], ymm0
    vmovups ymm1, ymmword ptr [rsi+20h]
    vmovups ymmword ptr [rdi+40h], ymm1
    vmovups ymm0, ymmword ptr [rsi+40h]
    vmovups ymmword ptr [rdi+60h], ymm0
    vmovups ymm1, ymmword ptr [rsi+60h]
    vmovups ymmword ptr [rdi+80h], ymm1
    vmovups xmm0, xmmword ptr [rsi+80h]
    vmovups xmmword ptr [rdi+0A0h], xmm0
    vmovsd  xmm1, qword ptr [rsi+90h]
    vmovsd  qword ptr [rdi+0B0h], xmm1
  }
}

/*
==============
bdQoSTelemetry::setResolved
==============
*/
void bdQoSTelemetry::setResolved(bdQoSTelemetry *this, const bdReference<bdCommonAddr> *remote, const bdAddr *real)
{
  _RSI = real;
  this->m_msToRelayEstablished = 0;
  _RDI = this;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  _RDI->m_msToNatTravResolve = _RAX;
  bdReference<bdCommonAddr>::operator=(&_RDI->m_probeInfo.m_addr, remote);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rdi+20h], ymm0
    vmovups ymm1, ymmword ptr [rsi+20h]
    vmovups ymmword ptr [rdi+40h], ymm1
    vmovups ymm0, ymmword ptr [rsi+40h]
    vmovups ymmword ptr [rdi+60h], ymm0
    vmovups ymm1, ymmword ptr [rsi+60h]
    vmovups ymmword ptr [rdi+80h], ymm1
    vmovups xmm0, xmmword ptr [rsi+80h]
    vmovups xmmword ptr [rdi+0A0h], xmm0
    vmovsd  xmm1, qword ptr [rsi+90h]
    vmovsd  qword ptr [rdi+0B0h], xmm1
  }
}

/*
==============
bdQoSTelemetry::setResult
==============
*/
void bdQoSTelemetry::setResult(bdQoSTelemetry *this, bdQoSTelemetry::bdQoSTelemetryResultType result)
{
  unsigned __int8 v3; 

  v3 = result;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_duration = _RAX;
  this->m_result = v3;
}

