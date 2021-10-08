/*
==============
bdStopwatch::start
==============
*/

void __fastcall bdStopwatch::start(bdStopwatch *this)
{
  ?start@bdStopwatch@@QEAAXXZ(this);
}

/*
==============
bdStopwatch::reset
==============
*/

void __fastcall bdStopwatch::reset(bdStopwatch *this)
{
  ?reset@bdStopwatch@@QEAAXXZ(this);
}

/*
==============
bdStopwatch::getElapsedTimeInSeconds
==============
*/

double __fastcall bdStopwatch::getElapsedTimeInSeconds(bdStopwatch *this)
{
  double result; 

  *(float *)&result = ?getElapsedTimeInSeconds@bdStopwatch@@QEBAMXZ(this);
  return result;
}

/*
==============
bdStopwatch::bdStopwatch
==============
*/

void __fastcall bdStopwatch::bdStopwatch(bdStopwatch *this)
{
  ??0bdStopwatch@@QEAA@XZ(this);
}

/*
==============
bdStopwatch::bdStopwatch
==============
*/
void bdStopwatch::bdStopwatch(bdStopwatch *this)
{
  this->m_start = 0i64;
}

/*
==============
bdStopwatch::getElapsedTimeInSeconds
==============
*/
double bdStopwatch::getElapsedTimeInSeconds(bdStopwatch *this)
{
  unsigned __int64 HiResTimeStamp; 

  if ( this->m_start )
  {
    HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
    *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(this->m_start, HiResTimeStamp);
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(double *)&_XMM0;
}

/*
==============
bdStopwatch::reset
==============
*/
void bdStopwatch::reset(bdStopwatch *this)
{
  this->m_start = 0i64;
}

/*
==============
bdStopwatch::start
==============
*/
void bdStopwatch::start(bdStopwatch *this)
{
  this->m_start = bdPlatformTiming::getHiResTimeStamp();
}

