/*
==============
bdNetTelemetry::startGetHostByName
==============
*/

unsigned int __fastcall bdNetTelemetry::startGetHostByName(bdNetTelemetry *this, const char *hostname)
{
  return ?startGetHostByName@bdNetTelemetry@@QEAAIPEBD@Z(this, hostname);
}

/*
==============
bdNetTelemetry::setNetStart
==============
*/

void __fastcall bdNetTelemetry::setNetStart(bdNetTelemetry *this, const bdNetStartParams *params)
{
  ?setNetStart@bdNetTelemetry@@QEAAXAEBVbdNetStartParams@@@Z(this, params);
}

/*
==============
bdNetTelemetry::setStatus
==============
*/

void __fastcall bdNetTelemetry::setStatus(bdNetTelemetry *this, char state)
{
  ?setStatus@bdNetTelemetry@@QEAAXC@Z(this, state);
}

/*
==============
bdNetTelemetry::bdNetTelemetry
==============
*/

void __fastcall bdNetTelemetry::bdNetTelemetry(bdNetTelemetry *this)
{
  ??0bdNetTelemetry@@QEAA@XZ(this);
}

/*
==============
bdNetTelemetry::finishGetHostByName
==============
*/

void __fastcall bdNetTelemetry::finishGetHostByName(bdNetTelemetry *this, unsigned int id, const bdSockAddr *addr)
{
  ?finishGetHostByName@bdNetTelemetry@@QEAAXIVbdSockAddr@@@Z(this, id, addr);
}

/*
==============
bdNetTelemetry::bdNetTelemetry
==============
*/
void bdNetTelemetry::bdNetTelemetry(bdNetTelemetry *this)
{
  bdNetTelemetry::GetHostInfo *m_getHostInfo; 
  __int64 v3; 
  __int64 v4; 
  bdSockAddr *m_localAddrs; 

  bdStopwatch::bdStopwatch(&this->m_age);
  m_getHostInfo = this->m_getHostInfo;
  v3 = 8i64;
  do
  {
    bdNetTelemetry::GetHostInfo::GetHostInfo(m_getHostInfo++);
    --v3;
  }
  while ( v3 );
  this->m_getHostInfoCount = 0;
  v4 = 10i64;
  m_localAddrs = this->m_localAddrs;
  do
  {
    bdSockAddr::bdSockAddr(m_localAddrs++);
    --v4;
  }
  while ( v4 );
  *(_QWORD *)&this->m_localAddrCount = 0i64;
  this->m_result = 0;
}

/*
==============
bdNetTelemetry::finishGetHostByName
==============
*/
void bdNetTelemetry::finishGetHostByName(bdNetTelemetry *this, unsigned int id, const bdSockAddr *addr)
{
  if ( id < 8 )
  {
    _RDI = this;
    _RSI = addr;
    _RBX = id;
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_getHostInfo[_RBX].m_age);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si rax, xmm1
    }
    _RDI->m_getHostInfo[_RBX].msToResolution = _RAX;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups ymmword ptr [rbx+rdi+38h], ymm0
      vmovups ymm1, ymmword ptr [rsi+20h]
      vmovups ymmword ptr [rbx+rdi+58h], ymm1
      vmovups ymm0, ymmword ptr [rsi+40h]
      vmovups ymmword ptr [rbx+rdi+78h], ymm0
      vmovups ymm1, ymmword ptr [rsi+60h]
      vmovups ymmword ptr [rbx+rdi+98h], ymm1
    }
  }
}

/*
==============
bdNetTelemetry::setNetStart
==============
*/
void bdNetTelemetry::setNetStart(bdNetTelemetry *this, const bdNetStartParams *params)
{
  unsigned int v4; 

  _RDI = this;
  bdStopwatch::start(&this->m_age);
  v4 = 0;
  _RDI->m_result = 0;
  *(_QWORD *)&_RDI->m_localAddrCount = 0i64;
  for ( _RDI->m_getHostInfoCount = 0; v4 < params->m_localAddresses.m_size; ++_RDI->m_localAddrCount )
  {
    if ( v4 >= 0xA )
      break;
    bdHandleAssert(v4 < params->m_localAddresses.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdSockAddr>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    _RAX = params->m_localAddresses.m_data;
    _RCX = v4++;
    _RCX <<= 7;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+rax]
      vmovups ymm1, ymmword ptr [rcx+rax+20h]
      vmovups ymm2, ymmword ptr [rcx+rax+40h]
      vmovups ymm3, ymmword ptr [rcx+rax+60h]
    }
    _RAX = (unsigned __int64)_RDI->m_localAddrCount << 7;
    __asm
    {
      vmovups ymmword ptr [rax+rdi+590h], ymm0
      vmovups ymmword ptr [rax+rdi+5B0h], ymm1
      vmovups ymmword ptr [rax+rdi+5D0h], ymm2
      vmovups ymmword ptr [rax+rdi+5F0h], ymm3
    }
  }
}

/*
==============
bdNetTelemetry::setStatus
==============
*/
void bdNetTelemetry::setStatus(bdNetTelemetry *this, char state)
{
  if ( (unsigned __int8)state >= 0xFCu || state == 0 || state == 2 )
  {
    this->m_result = state;
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si rax, xmm1
    }
    this->m_msToResult = _RAX;
  }
}

/*
==============
bdNetTelemetry::startGetHostByName
==============
*/
__int64 bdNetTelemetry::startGetHostByName(bdNetTelemetry *this, const char *hostname)
{
  __int64 m_getHostInfoCount; 
  __int64 v5; 
  _BYTE *v11; 
  bdSockAddr v13; 

  m_getHostInfoCount = this->m_getHostInfoCount;
  if ( (unsigned int)m_getHostInfoCount >= 8 )
    return 0xFFFFFFFFi64;
  this->m_getHostInfoCount = m_getHostInfoCount + 1;
  _RDI = (char *)this + 176 * m_getHostInfoCount;
  bdStopwatch::start((bdStopwatch *)_RDI + 1);
  *((_DWORD *)_RDI + 12) = -1;
  bdSockAddr::bdSockAddr(&v13, 0xFF00FF00);
  v5 = 31i64;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rdi+38h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rdi+58h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rdi+78h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rdi+98h], ymm1
  }
  v11 = memchr_0(hostname, 0, 0x1Fui64);
  if ( v11 )
    v5 = v11 - hostname;
  bdStrlcpy(_RDI + 16, hostname, v5 + 1);
  return (unsigned int)m_getHostInfoCount;
}

