/*
==============
bdGlobalStopwatch::pump
==============
*/

void bdGlobalStopwatch::pump(void)
{
  ?pump@bdGlobalStopwatch@@SAXXZ();
}

/*
==============
bdGlobalStopwatch::start
==============
*/

void __fastcall bdGlobalStopwatch::start(bdGlobalStopwatch *this)
{
  ?start@bdGlobalStopwatch@@QEAAXXZ(this);
}

/*
==============
bdGlobalStopwatch::bdGlobalStopwatch
==============
*/

void __fastcall bdGlobalStopwatch::bdGlobalStopwatch(bdGlobalStopwatch *this)
{
  ??0bdGlobalStopwatch@@QEAA@XZ(this);
}

/*
==============
bdGlobalStopwatch::reset
==============
*/

void __fastcall bdGlobalStopwatch::reset(bdGlobalStopwatch *this)
{
  ?reset@bdGlobalStopwatch@@QEAAXXZ(this);
}

/*
==============
bdGlobalStopwatch::getElapsedTimeInSeconds
==============
*/

double __fastcall bdGlobalStopwatch::getElapsedTimeInSeconds(bdGlobalStopwatch *this)
{
  double result; 

  *(float *)&result = ?getElapsedTimeInSeconds@bdGlobalStopwatch@@QEBAMXZ(this);
  return result;
}

/*
==============
bdGlobalStopwatch::bdGlobalStopwatch
==============
*/
void bdGlobalStopwatch::bdGlobalStopwatch(bdGlobalStopwatch *this)
{
  this->m_start = 0;
}

/*
==============
bdGlobalStopwatch::getElapsedTimeInSeconds
==============
*/
double bdGlobalStopwatch::getElapsedTimeInSeconds(bdGlobalStopwatch *this)
{
  if ( this->m_start )
    return bdPlatformTiming::getLoResElapsedTimeFloat(this->m_start, bdGlobalStopwatch::s_current.m_value._My_val);
  else
    return 0.0;
}

/*
==============
bdGlobalStopwatch::pump
==============
*/
void bdGlobalStopwatch::pump(void)
{
  _InterlockedExchange((volatile __int32 *)&bdGlobalStopwatch::s_current, bdPlatformTiming::getLoResTimeStamp());
}

/*
==============
bdGlobalStopwatch::reset
==============
*/
void bdGlobalStopwatch::reset(bdGlobalStopwatch *this)
{
  this->m_start = 0;
}

/*
==============
bdGlobalStopwatch::start
==============
*/
void bdGlobalStopwatch::start(bdGlobalStopwatch *this)
{
  unsigned int My_val; 

  My_val = bdGlobalStopwatch::s_current.m_value._My_val;
  this->m_start = bdGlobalStopwatch::s_current.m_value._My_val;
  if ( !My_val )
  {
    _InterlockedExchange((volatile __int32 *)&bdGlobalStopwatch::s_current, bdPlatformTiming::getLoResTimeStamp());
    this->m_start = bdGlobalStopwatch::s_current.m_value._My_val;
  }
}

