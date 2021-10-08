/*
==============
SvBandwidthLimiter::Track
==============
*/

void __fastcall SvBandwidthLimiter::Track(SvBandwidthLimiter *this, int size)
{
  ?Track@SvBandwidthLimiter@@QEAAXH@Z(this, size);
}

/*
==============
SvBandwidthLimiter::Frame
==============
*/

void __fastcall SvBandwidthLimiter::Frame(SvBandwidthLimiter *this)
{
  ?Frame@SvBandwidthLimiter@@QEAAXXZ(this);
}

/*
==============
SvBandwidthLimiter::CanSend
==============
*/

bool __fastcall SvBandwidthLimiter::CanSend(SvBandwidthLimiter *this, int size)
{
  return ?CanSend@SvBandwidthLimiter@@QEBA_NH@Z(this, size);
}

/*
==============
SvBandwidthLimiter::IsValid
==============
*/

bool __fastcall SvBandwidthLimiter::IsValid(SvBandwidthLimiter *this)
{
  return ?IsValid@SvBandwidthLimiter@@QEBA_NXZ(this);
}

/*
==============
SvBandwidthLimiter::GetBandwidth
==============
*/

int __fastcall SvBandwidthLimiter::GetBandwidth(SvBandwidthLimiter *this)
{
  return ?GetBandwidth@SvBandwidthLimiter@@QEBAHXZ(this);
}

/*
==============
SvBandwidthLimiter::Init
==============
*/

void __fastcall SvBandwidthLimiter::Init(SvBandwidthLimiter *this, int bandwidth, int binCount)
{
  ?Init@SvBandwidthLimiter@@QEAAXHH@Z(this, bandwidth, binCount);
}

/*
==============
SvBandwidthLimiter::GetQuota
==============
*/

int __fastcall SvBandwidthLimiter::GetQuota(SvBandwidthLimiter *this)
{
  return ?GetQuota@SvBandwidthLimiter@@QEBAHXZ(this);
}

/*
==============
SvBandwidthLimiter::Request
==============
*/

bool __fastcall SvBandwidthLimiter::Request(SvBandwidthLimiter *this, int size)
{
  return ?Request@SvBandwidthLimiter@@QEAA_NH@Z(this, size);
}

/*
==============
SvBandwidthLimiter::GetUsage
==============
*/

int __fastcall SvBandwidthLimiter::GetUsage(SvBandwidthLimiter *this)
{
  return ?GetUsage@SvBandwidthLimiter@@QEBAHXZ(this);
}

/*
==============
SvBandwidthLimiter::CanSend
==============
*/

bool __fastcall SvBandwidthLimiter::CanSend(SvBandwidthLimiter *this)
{
  return ?CanSend@SvBandwidthLimiter@@QEBA_NXZ(this);
}

/*
==============
SvBandwidthLimiter::CanSend
==============
*/
bool SvBandwidthLimiter::CanSend(SvBandwidthLimiter *this, int size)
{
  int v2; 
  int v3; 
  volatile int *m_quota; 
  int v5; 

  v2 = 0;
  v3 = 0;
  if ( this->m_binCount > 0 )
  {
    m_quota = this->m_quota;
    do
    {
      v5 = *m_quota++;
      v2 += v5;
      ++v3;
    }
    while ( v3 < this->m_binCount );
  }
  return v2 >= size;
}

/*
==============
SvBandwidthLimiter::CanSend
==============
*/
bool SvBandwidthLimiter::CanSend(SvBandwidthLimiter *this)
{
  int v1; 
  int v2; 
  volatile int *m_quota; 
  int v4; 

  v1 = 0;
  v2 = 0;
  if ( this->m_binCount > 0 )
  {
    m_quota = this->m_quota;
    do
    {
      v4 = *m_quota++;
      v1 += v4;
      ++v2;
    }
    while ( v2 < this->m_binCount );
  }
  return v1 > 0;
}

/*
==============
SvBandwidthLimiter::Frame
==============
*/
void SvBandwidthLimiter::Frame(SvBandwidthLimiter *this)
{
  int *v1; 

  v1 = &this->m_binIndex + ++this->m_binIndex % this->m_binCount;
  v1[3] = this->m_bandwidth / this->m_binCount;
  v1[63] = 0;
}

/*
==============
SvBandwidthLimiter::GetBandwidth
==============
*/
__int64 SvBandwidthLimiter::GetBandwidth(SvBandwidthLimiter *this)
{
  return (unsigned int)this->m_bandwidth;
}

/*
==============
SvBandwidthLimiter::GetQuota
==============
*/
__int64 SvBandwidthLimiter::GetQuota(SvBandwidthLimiter *this)
{
  __int64 result; 
  int v2; 
  volatile int *m_quota; 
  int v4; 

  result = 0i64;
  v2 = 0;
  if ( this->m_binCount > 0 )
  {
    m_quota = this->m_quota;
    do
    {
      v4 = *m_quota++;
      result = (unsigned int)(v4 + result);
      ++v2;
    }
    while ( v2 < this->m_binCount );
  }
  return result;
}

/*
==============
SvBandwidthLimiter::GetUsage
==============
*/
__int64 SvBandwidthLimiter::GetUsage(SvBandwidthLimiter *this)
{
  __int64 result; 
  int v2; 
  volatile int *m_usage; 
  int v4; 

  result = 0i64;
  v2 = 0;
  if ( this->m_binCount > 0 )
  {
    m_usage = this->m_usage;
    do
    {
      v4 = *m_usage++;
      result = (unsigned int)(v4 + result);
      ++v2;
    }
    while ( v2 < this->m_binCount );
  }
  return result;
}

/*
==============
SvBandwidthLimiter::Init
==============
*/
void SvBandwidthLimiter::Init(SvBandwidthLimiter *this, int bandwidth, int binCount)
{
  volatile int *m_usage; 
  __int64 v4; 

  this->m_bandwidth = bandwidth;
  m_usage = this->m_usage;
  v4 = 60i64;
  this->m_binIndex = -1;
  if ( binCount > 60 )
    binCount = 60;
  this->m_binCount = binCount;
  do
  {
    *((_DWORD *)m_usage - 60) = 0;
    *m_usage++ = 0;
    --v4;
  }
  while ( v4 );
}

/*
==============
SvBandwidthLimiter::IsValid
==============
*/
bool SvBandwidthLimiter::IsValid(SvBandwidthLimiter *this)
{
  return this->m_binIndex >= this->m_binCount - 1;
}

/*
==============
SvBandwidthLimiter::Request
==============
*/
char SvBandwidthLimiter::Request(SvBandwidthLimiter *this, int size)
{
  int v2; 
  int v5; 
  volatile int *m_quota; 
  int v7; 
  int *v8; 
  volatile signed __int32 *v9; 

  v2 = 0;
  v5 = 0;
  if ( this->m_binCount > 0 )
  {
    m_quota = this->m_quota;
    do
    {
      v7 = *m_quota++;
      v2 += v7;
      ++v5;
    }
    while ( v5 < this->m_binCount );
  }
  if ( v2 < size )
    return 0;
  if ( this->m_binIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bandwidth_limiter.cpp", 36, ASSERT_TYPE_ASSERT, "(m_binIndex >= 0)", (const char *)&queryFormat, "m_binIndex >= 0") )
    __debugbreak();
  v8 = &this->m_binIndex + this->m_binIndex % this->m_binCount;
  if ( (((_BYTE)v8 + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", v8 + 3) )
    __debugbreak();
  _InterlockedExchangeAdd(v8 + 3, -size);
  v9 = v8 + 63;
  if ( (((_BYTE)v8 - 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v9) )
    __debugbreak();
  _InterlockedExchangeAdd(v9, size);
  return 1;
}

/*
==============
SvBandwidthLimiter::Track
==============
*/
void SvBandwidthLimiter::Track(SvBandwidthLimiter *this, int size)
{
  int *v4; 

  if ( this->m_binIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bandwidth_limiter.cpp", 36, ASSERT_TYPE_ASSERT, "(m_binIndex >= 0)", (const char *)&queryFormat, "m_binIndex >= 0") )
    __debugbreak();
  v4 = &this->m_binIndex + this->m_binIndex % this->m_binCount;
  if ( (((_BYTE)v4 + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", v4 + 3) )
    __debugbreak();
  _InterlockedExchangeAdd(v4 + 3, -size);
  if ( (((_BYTE)v4 - 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", v4 + 63) )
    __debugbreak();
  _InterlockedExchangeAdd(v4 + 63, size);
}

