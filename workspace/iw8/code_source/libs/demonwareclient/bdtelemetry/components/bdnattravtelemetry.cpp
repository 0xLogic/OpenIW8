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
  char v9; 

  m_attemptRecordsCount = this->m_attemptRecordsCount;
  _RDI = dst;
  _RSI = src;
  v9 = type;
  if ( (unsigned int)m_attemptRecordsCount < 0x20 )
  {
    this->m_attemptRecordsCount = m_attemptRecordsCount + 1;
    _RBX = &this->m_attemptRecords[m_attemptRecordsCount];
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
    __asm { vmulss  xmm1, xmm0, cs:__real@447a0000 }
    _RBX->type = v9;
    __asm { vcvttss2si rax, xmm1 }
    _RBX->msSinceStart = _RAX;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups ymmword ptr [rbx+8], ymm0
      vmovups ymm1, ymmword ptr [rsi+20h]
      vmovups ymmword ptr [rbx+28h], ymm1
      vmovups ymm0, ymmword ptr [rsi+40h]
      vmovups ymmword ptr [rbx+48h], ymm0
      vmovups ymm1, ymmword ptr [rsi+60h]
      vmovups ymmword ptr [rbx+68h], ymm1
      vmovups xmm0, xmmword ptr [rsi+80h]
      vmovups xmmword ptr [rbx+88h], xmm0
      vmovsd  xmm1, qword ptr [rsi+90h]
      vmovsd  qword ptr [rbx+98h], xmm1
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rbx+0A0h], ymm0
      vmovups ymm1, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rbx+0C0h], ymm1
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymmword ptr [rbx+0E0h], ymm0
      vmovups ymm1, ymmword ptr [rdi+60h]
      vmovups ymmword ptr [rbx+100h], ymm1
      vmovups xmm0, xmmword ptr [rdi+80h]
      vmovups xmmword ptr [rbx+120h], xmm0
      vmovsd  xmm1, qword ptr [rdi+90h]
      vmovsd  qword ptr [rbx+130h], xmm1
    }
    _RBX->result = result;
  }
}

/*
==============
bdNATTravTelemetry::setResult
==============
*/
void bdNATTravTelemetry::setResult(bdNATTravTelemetry *this, bdNATTravTelemetry::bdNATTravResultType result, const bdNATTravClientData *data, const bdAddr *realAddr)
{
  bdNATTravTelemetry *v4; 

  this->m_result = result;
  v4 = this;
  __asm
  {
    vmovups ymm0, ymmword ptr [r9]
    vmovups ymmword ptr [rcx+2820h], ymm0
    vmovups ymm1, ymmword ptr [r9+20h]
    vmovups ymmword ptr [rcx+2840h], ymm1
    vmovups ymm0, ymmword ptr [r9+40h]
    vmovups ymmword ptr [rcx+2860h], ymm0
    vmovups ymm1, ymmword ptr [r9+60h]
    vmovups ymmword ptr [rcx+2880h], ymm1
    vmovups xmm0, xmmword ptr [r9+80h]
    vmovups xmmword ptr [rcx+28A0h], xmm0
    vmovsd  xmm1, qword ptr [r9+90h]
    vmovsd  qword ptr [rcx+28B0h], xmm1
  }
  bdReference<bdCommonAddr>::operator=(&this->m_localCommonAddr, &data->m_local);
  bdReference<bdCommonAddr>::operator=(&v4->m_remoteCommonAddr, &data->m_remote);
  v4->m_throttled = data->m_throttled;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&v4->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  v4->m_duration = _RAX;
  v4->m_triesStage1 = data->m_tries[1];
  v4->m_triesStage2 = data->m_tries[2];
  v4->m_triesStage3 = data->m_tries[3];
}

/*
==============
bdNATTravTelemetry::setSTUNAddr
==============
*/
void bdNATTravTelemetry::setSTUNAddr(bdNATTravTelemetry *this, const bdAddr *addr)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx+28B8h], ymm0
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rcx+28D8h], ymm1
    vmovups ymm0, ymmword ptr [rdx+40h]
    vmovups ymmword ptr [rcx+28F8h], ymm0
    vmovups ymm1, ymmword ptr [rdx+60h]
    vmovups ymmword ptr [rcx+2918h], ymm1
    vmovups xmm0, xmmword ptr [rdx+80h]
    vmovups xmmword ptr [rcx+2938h], xmm0
    vmovsd  xmm1, qword ptr [rdx+90h]
    vmovsd  qword ptr [rcx+2948h], xmm1
  }
}

