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
  char v8; 

  m_sendCount = this->m_sendCount;
  _RDI = dst;
  v8 = packetType;
  if ( (unsigned int)m_sendCount < 0x10 )
  {
    this->m_sendCount = m_sendCount + 1;
    _RBX = &this->m_sends[m_sendCount];
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
    __asm { vmulss  xmm1, xmm0, cs:__real@447a0000 }
    _RBX->packetType = v8;
    __asm { vcvttss2si rax, xmm1 }
    _RBX->msSinceStart = _RAX;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rbx+8], ymm0
      vmovups ymm1, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rbx+28h], ymm1
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymmword ptr [rbx+48h], ymm0
      vmovups ymm1, ymmword ptr [rdi+60h]
      vmovups ymmword ptr [rbx+68h], ymm1
      vmovups xmm0, xmmword ptr [rdi+80h]
      vmovups xmmword ptr [rbx+88h], xmm0
      vmovsd  xmm1, qword ptr [rdi+90h]
      vmovsd  qword ptr [rbx+98h], xmm1
    }
    _RBX->sendSuccess = sendSuccess;
  }
}

/*
==============
bdNATTypeDiscoveryTelemetry::setResultFailure
==============
*/
void bdNATTypeDiscoveryTelemetry::setResultFailure(bdNATTypeDiscoveryTelemetry *this)
{
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_duration = _RAX;
  *(_WORD *)&this->m_result = 2;
}

/*
==============
bdNATTypeDiscoveryTelemetry::setResultSuccess
==============
*/
void bdNATTypeDiscoveryTelemetry::setResultSuccess(bdNATTypeDiscoveryTelemetry *this, bdNATType natType)
{
  unsigned __int8 v4; 

  v4 = natType;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_duration = _RAX;
  this->m_result = 1;
  this->m_natType = v4;
}

/*
==============
bdNATTypeDiscoveryTelemetry::setTest1Result
==============
*/
void bdNATTypeDiscoveryTelemetry::setTest1Result(bdNATTypeDiscoveryTelemetry *this, const bdAddr *fromAddr, const bdNATTypeDiscoveryPacketReply *reply)
{
  _RSI = this;
  _RBX = fromAddr;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  _RSI->m_test1Result.msSinceStart = _RAX;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsi+0B38h], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rsi+0B58h], ymm1
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rsi+0B78h], ymm0
    vmovups ymm1, ymmword ptr [rbx+60h]
    vmovups ymmword ptr [rsi+0B98h], ymm1
    vmovups xmm0, xmmword ptr [rbx+80h]
    vmovups xmmword ptr [rsi+0BB8h], xmm0
    vmovsd  xmm1, qword ptr [rbx+90h]
    vmovsd  qword ptr [rsi+0BC8h], xmm1
  }
  _RAX = bdNATTypeDiscoveryPacketReply::getSecAddr((bdNATTypeDiscoveryPacketReply *)reply);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi+0C68h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsi+0C88h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsi+0CA8h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rsi+0CC8h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rsi+0CE8h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rsi+0CF8h], xmm1
  }
  _RAX = bdNATTypeDiscoveryPacketReply::getMappedAddr((bdNATTypeDiscoveryPacketReply *)reply);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi+0BD0h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsi+0BF0h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsi+0C10h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rsi+0C30h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rsi+0C50h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rsi+0C60h], xmm1
  }
}

/*
==============
bdNATTypeDiscoveryTelemetry::setTest2Result
==============
*/
void bdNATTypeDiscoveryTelemetry::setTest2Result(bdNATTypeDiscoveryTelemetry *this, const bdAddr *fromAddr)
{
  _RDI = this;
  _RBX = fromAddr;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  _RDI->m_test2Result.msSinceStart = _RAX;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi+0D08h], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rdi+0D28h], ymm1
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rdi+0D48h], ymm0
    vmovups ymm1, ymmword ptr [rbx+60h]
    vmovups ymmword ptr [rdi+0D68h], ymm1
    vmovups xmm0, xmmword ptr [rbx+80h]
    vmovups xmmword ptr [rdi+0D88h], xmm0
    vmovsd  xmm1, qword ptr [rbx+90h]
    vmovsd  qword ptr [rdi+0D98h], xmm1
  }
}

/*
==============
bdNATTypeDiscoveryTelemetry::setTest3Result
==============
*/
void bdNATTypeDiscoveryTelemetry::setTest3Result(bdNATTypeDiscoveryTelemetry *this, const bdAddr *fromAddr, const bdNATTypeDiscoveryPacketReply *reply)
{
  _RSI = this;
  _RBX = fromAddr;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  _RSI->m_test3Result.msSinceStart = _RAX;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsi+0D08h], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rsi+0D28h], ymm1
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rsi+0D48h], ymm0
    vmovups ymm1, ymmword ptr [rbx+60h]
    vmovups ymmword ptr [rsi+0D68h], ymm1
    vmovups xmm0, xmmword ptr [rbx+80h]
    vmovups xmmword ptr [rsi+0D88h], xmm0
    vmovsd  xmm1, qword ptr [rbx+90h]
    vmovsd  qword ptr [rsi+0D98h], xmm1
  }
  _RAX = bdNATTypeDiscoveryPacketReply::getMappedAddr((bdNATTypeDiscoveryPacketReply *)reply);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi+0E40h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsi+0E60h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsi+0E80h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rsi+0EA0h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rsi+0EC0h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rsi+0ED0h], xmm1
  }
}

