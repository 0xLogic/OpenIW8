/*
==============
NetPing::Timestamp
==============
*/

unsigned __int64 __fastcall NetPing::Timestamp()
{
  return ?Timestamp@NetPing@@SA_KXZ();
}

/*
==============
NetPing::Update
==============
*/

void __fastcall NetPing::Update(NetPing *this, int sendTime, const NetPingInfo *sendInfo, int recvTime, const NetPingInfo *recvInfo)
{
  ?Update@NetPing@@QEAAXHAEBUNetPingInfo@@H0@Z(this, sendTime, sendInfo, recvTime, recvInfo);
}

/*
==============
NetPing::GetGamePing
==============
*/

int __fastcall NetPing::GetGamePing(NetPing *this)
{
  return ?GetGamePing@NetPing@@QEBAHXZ(this);
}

/*
==============
NetPingInfo::Clear
==============
*/

void __fastcall NetPingInfo::Clear(NetPingInfo *this)
{
  ?Clear@NetPingInfo@@QEAAXXZ(this);
}

/*
==============
NetPing::GetSockPing
==============
*/

int __fastcall NetPing::GetSockPing(NetPing *this)
{
  return ?GetSockPing@NetPing@@QEBAHXZ(this);
}

/*
==============
NetPing::GetNetPing
==============
*/

int __fastcall NetPing::GetNetPing(NetPing *this)
{
  return ?GetNetPing@NetPing@@QEBAHXZ(this);
}

/*
==============
NetPing::Clear
==============
*/

void __fastcall NetPing::Clear(NetPing *this)
{
  ?Clear@NetPing@@QEAAXXZ(this);
}

/*
==============
NetPing::Clear
==============
*/
void NetPing::Clear(NetPing *this)
{
  *(_QWORD *)&this->m_gamePing = 0i64;
  this->m_sockPing = 0;
}

/*
==============
NetPingInfo::Clear
==============
*/
void NetPingInfo::Clear(NetPingInfo *this)
{
  this->initialized = 0;
  this->netTicks = 0i64;
  this->sockTicks = 0i64;
}

/*
==============
NetPing::GetGamePing
==============
*/
__int64 NetPing::GetGamePing(NetPing *this)
{
  return (unsigned int)this->m_gamePing;
}

/*
==============
NetPing::GetNetPing
==============
*/
__int64 NetPing::GetNetPing(NetPing *this)
{
  return (unsigned int)this->m_netPing;
}

/*
==============
NetPing::GetSockPing
==============
*/
__int64 NetPing::GetSockPing(NetPing *this)
{
  return (unsigned int)this->m_sockPing;
}

/*
==============
NetPing::Timestamp
==============
*/
unsigned __int64 NetPing::Timestamp()
{
  return __rdtsc();
}

/*
==============
NetPing::Update
==============
*/
void NetPing::Update(NetPing *this, int sendTime, const NetPingInfo *sendInfo, int recvTime, const NetPingInfo *recvInfo)
{
  int v6; 
  int v13; 
  int v14; 
  int m_gamePing; 

  v6 = recvTime - sendTime;
  this->m_gamePing = v6;
  if ( v6 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_ping.cpp", 16, ASSERT_TYPE_ASSERT, "(m_gamePing >= 0)", (const char *)&queryFormat, "m_gamePing >= 0") )
    __debugbreak();
  if ( sendInfo->initialized && recvInfo->initialized )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(recvInfo->netTicks - sendInfo->netTicks) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcvttsd2si rax, xmm0
    }
    v13 = 0x7FFFFFFF;
    v14 = 0x7FFFFFFF;
    if ( _RAX < 0x7FFFFFFF )
      v14 = _RAX;
    this->m_netPing = v14;
    if ( v14 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_ping.cpp", 22, ASSERT_TYPE_ASSERT, "(m_netPing >= 0)", (const char *)&queryFormat, "m_netPing >= 0") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(recvInfo->sockTicks - sendInfo->sockTicks) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcvttsd2si rax, xmm0
    }
    if ( _RAX < 0x7FFFFFFF )
      v13 = _RAX;
    this->m_sockPing = v13;
    if ( v13 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_ping.cpp", 26, ASSERT_TYPE_ASSERT, "(m_sockPing >= 0)", (const char *)&queryFormat, "m_sockPing >= 0") )
      __debugbreak();
  }
  else
  {
    m_gamePing = this->m_gamePing;
    this->m_netPing = this->m_gamePing;
    this->m_sockPing = m_gamePing;
  }
}

