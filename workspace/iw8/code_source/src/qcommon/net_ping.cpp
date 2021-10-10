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
  int v5; 
  __int128 v10; 
  __int128 v12; 
  int v14; 
  int v15; 
  __int128 v18; 
  __int128 v20; 
  int m_gamePing; 

  v5 = recvTime - sendTime;
  this->m_gamePing = v5;
  if ( v5 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_ping.cpp", 16, ASSERT_TYPE_ASSERT, "(m_gamePing >= 0)", (const char *)&queryFormat, "m_gamePing >= 0") )
    __debugbreak();
  if ( sendInfo->initialized && recvInfo->initialized )
  {
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(recvInfo->netTicks - sendInfo->netTicks) < 0 )
    {
      *((_QWORD *)&v10 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v10 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v10;
    }
    *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v12 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v12;
    __asm { vcvttsd2si rax, xmm0 }
    v14 = 0x7FFFFFFF;
    v15 = 0x7FFFFFFF;
    if ( _RAX < 0x7FFFFFFF )
      v15 = _RAX;
    this->m_netPing = v15;
    if ( v15 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_ping.cpp", 22, ASSERT_TYPE_ASSERT, "(m_netPing >= 0)", (const char *)&queryFormat, "m_netPing >= 0") )
      __debugbreak();
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(recvInfo->sockTicks - sendInfo->sockTicks) < 0 )
    {
      *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v18 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v18;
    }
    *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v20 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v20;
    __asm { vcvttsd2si rax, xmm0 }
    if ( _RAX < 0x7FFFFFFF )
      v14 = _RAX;
    this->m_sockPing = v14;
    if ( v14 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_ping.cpp", 26, ASSERT_TYPE_ASSERT, "(m_sockPing >= 0)", (const char *)&queryFormat, "m_sockPing >= 0") )
      __debugbreak();
  }
  else
  {
    m_gamePing = this->m_gamePing;
    this->m_netPing = this->m_gamePing;
    this->m_sockPing = m_gamePing;
  }
}

