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
  ++this->m_retries;
  if ( this->m_retryTimesCount < 0xA )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si rdx, xmm1
    }
    this->m_retryTimes[this->m_retryTimesCount++] = _RDX;
  }
}

/*
==============
bdIPDiscoveryTelemetry::setResult
==============
*/
void bdIPDiscoveryTelemetry::setResult(bdIPDiscoveryTelemetry *this, int result, bdAddr *serverAddr, bdAddr *publicAddr)
{
  unsigned __int8 v7; 

  _RBP = publicAddr;
  _RDI = serverAddr;
  v7 = result;
  _RSI = this;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm { vmulss  xmm1, xmm0, cs:__real@447a0000 }
  _RSI->m_result = v7;
  __asm { vcvttss2si rax, xmm1 }
  _RSI->m_duration = _RAX;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsi+40h], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rsi+60h], ymm1
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rsi+80h], ymm0
    vmovups ymm1, ymmword ptr [rdi+60h]
    vmovups ymmword ptr [rsi+0A0h], ymm1
    vmovups xmm0, xmmword ptr [rdi+80h]
    vmovups xmmword ptr [rsi+0C0h], xmm0
    vmovsd  xmm1, qword ptr [rdi+90h]
    vmovsd  qword ptr [rsi+0D0h], xmm1
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups ymmword ptr [rsi+0D8h], ymm0
    vmovups ymm1, ymmword ptr [rbp+20h]
    vmovups ymmword ptr [rsi+0F8h], ymm1
    vmovups ymm0, ymmword ptr [rbp+40h]
    vmovups ymmword ptr [rsi+118h], ymm0
    vmovups ymm1, ymmword ptr [rbp+60h]
    vmovups ymmword ptr [rsi+138h], ymm1
    vmovups xmm0, xmmword ptr [rbp+80h]
    vmovups xmmword ptr [rsi+158h], xmm0
    vmovsd  xmm1, qword ptr [rbp+90h]
    vmovsd  qword ptr [rsi+168h], xmm1
  }
}

