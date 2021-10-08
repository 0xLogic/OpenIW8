/*
==============
bdBackoffTimer::getCurrentTimeout
==============
*/

unsigned int __fastcall bdBackoffTimer::getCurrentTimeout(bdBackoffTimer *this)
{
  return ?getCurrentTimeout@bdBackoffTimer@@QEBAIXZ(this);
}

/*
==============
bdBackoffTimer::bdBackoffTimer
==============
*/

void __fastcall bdBackoffTimer::bdBackoffTimer(bdBackoffTimer *this)
{
  ??0bdBackoffTimer@@QEAA@XZ(this);
}

/*
==============
bdBackoffTimer::reset
==============
*/

void __fastcall bdBackoffTimer::reset(bdBackoffTimer *this)
{
  ?reset@bdBackoffTimer@@QEAAXXZ(this);
}

/*
==============
bdBackoffTimer::checkTimer
==============
*/

bool __fastcall bdBackoffTimer::checkTimer(bdBackoffTimer *this)
{
  return ?checkTimer@bdBackoffTimer@@QEBA_NXZ(this);
}

/*
==============
bdBackoffTimer::setTimeouts
==============
*/

void __fastcall bdBackoffTimer::setTimeouts(bdBackoffTimer *this, const unsigned __int8 *newTimeouts, unsigned int size)
{
  ?setTimeouts@bdBackoffTimer@@QEAAXQEBEI@Z(this, newTimeouts, size);
}

/*
==============
bdBackoffTimer::maxFailuresReached
==============
*/

bool __fastcall bdBackoffTimer::maxFailuresReached(bdBackoffTimer *this)
{
  return ?maxFailuresReached@bdBackoffTimer@@QEBA_NXZ(this);
}

/*
==============
bdBackoffTimer::recordFailure
==============
*/

void __fastcall bdBackoffTimer::recordFailure(bdBackoffTimer *this)
{
  ?recordFailure@bdBackoffTimer@@QEAAXXZ(this);
}

/*
==============
bdBackoffTimer::bdBackoffTimer
==============
*/
void bdBackoffTimer::bdBackoffTimer(bdBackoffTimer *this)
{
  __int64 v2; 
  unsigned __int8 *m_timeouts; 

  *(_QWORD *)&this->m_timestamp = 0i64;
  bdHandleAssert(1, "newTimeouts != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdtiming\\bdbackofftimer.cpp", "bdBackoffTimer::setTimeouts", 0x50u, "Calling setTimeouts with BD_NULL as newTimeouts");
  bdHandleAssert(1, "size <= s_maxTimeouts", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdtiming\\bdbackofftimer.cpp", "bdBackoffTimer::setTimeouts", 0x53u, "setTimeouts() size > s_maxTimeouts");
  v2 = 16i64;
  this->m_sizeTimeouts = 16;
  bdHandleAssert(1, "count <= outSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdalgorithms.h", "bdCopyArrayN", 0x2Bu, "count must be <= outSize");
  m_timeouts = this->m_timeouts;
  do
  {
    *m_timeouts = m_timeouts[defaultTimeouts - (const unsigned __int8 *)this - 12];
    ++m_timeouts;
    --v2;
  }
  while ( v2 );
}

/*
==============
bdBackoffTimer::checkTimer
==============
*/
bool bdBackoffTimer::checkTimer(bdBackoffTimer *this)
{
  unsigned int LoResTimeStamp; 
  unsigned int LoResElapsedTime; 
  unsigned int m_failures; 

  if ( !this->m_failures )
    return 1;
  LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
  LoResElapsedTime = bdPlatformTiming::getLoResElapsedTime(this->m_timestamp, LoResTimeStamp);
  m_failures = this->m_failures;
  if ( m_failures > this->m_sizeTimeouts )
    m_failures = this->m_sizeTimeouts;
  return LoResElapsedTime >= this->m_timeouts[m_failures - 1];
}

/*
==============
bdBackoffTimer::getCurrentTimeout
==============
*/
__int64 bdBackoffTimer::getCurrentTimeout(bdBackoffTimer *this)
{
  unsigned int m_failures; 

  m_failures = this->m_failures;
  if ( m_failures > this->m_sizeTimeouts )
    m_failures = this->m_sizeTimeouts;
  return this->m_timeouts[m_failures - 1];
}

/*
==============
bdBackoffTimer::maxFailuresReached
==============
*/
bool bdBackoffTimer::maxFailuresReached(bdBackoffTimer *this)
{
  return this->m_failures == this->m_sizeTimeouts;
}

/*
==============
bdBackoffTimer::recordFailure
==============
*/
void bdBackoffTimer::recordFailure(bdBackoffTimer *this)
{
  unsigned int LoResTimeStamp; 

  LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
  ++this->m_failures;
  this->m_timestamp = LoResTimeStamp;
}

/*
==============
bdBackoffTimer::reset
==============
*/
void bdBackoffTimer::reset(bdBackoffTimer *this)
{
  *(_QWORD *)&this->m_timestamp = 0i64;
}

/*
==============
bdBackoffTimer::setTimeouts
==============
*/
void bdBackoffTimer::setTimeouts(bdBackoffTimer *this, const unsigned __int8 *newTimeouts, unsigned int size)
{
  unsigned int v6; 
  unsigned __int8 *m_timeouts; 
  __int64 v8; 
  signed __int64 v9; 

  bdHandleAssert(newTimeouts != NULL, "newTimeouts != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdtiming\\bdbackofftimer.cpp", "bdBackoffTimer::setTimeouts", 0x50u, "Calling setTimeouts with BD_NULL as newTimeouts");
  if ( newTimeouts )
  {
    bdHandleAssert(size <= 0x10, "size <= s_maxTimeouts", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdtiming\\bdbackofftimer.cpp", "bdBackoffTimer::setTimeouts", 0x53u, "setTimeouts() size > s_maxTimeouts");
    v6 = 16;
    if ( size < 0x10 )
      v6 = size;
    this->m_sizeTimeouts = v6;
    bdHandleAssert(v6 <= 0x10, "count <= outSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdalgorithms.h", "bdCopyArrayN", 0x2Bu, "count must be <= outSize");
    if ( v6 )
    {
      m_timeouts = this->m_timeouts;
      v8 = v6;
      v9 = newTimeouts - (const unsigned __int8 *)this;
      do
      {
        *m_timeouts = m_timeouts[v9 - 12];
        ++m_timeouts;
        --v8;
      }
      while ( v8 );
    }
  }
}

