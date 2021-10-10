/*
==============
bdPlatformTiming::sleep
==============
*/

void __fastcall bdPlatformTiming::sleep(unsigned int timeInMs)
{
  ?sleep@bdPlatformTiming@@SAXI@Z(timeInMs);
}

/*
==============
bdPlatformTiming::getHiResTimeStamp
==============
*/

unsigned __int64 __fastcall bdPlatformTiming::getHiResTimeStamp()
{
  return ?getHiResTimeStamp@bdPlatformTiming@@SA_KXZ();
}

/*
==============
bdPlatformTiming::getLoResTimeStamp
==============
*/

unsigned int __fastcall bdPlatformTiming::getLoResTimeStamp()
{
  return ?getLoResTimeStamp@bdPlatformTiming@@SAIXZ();
}

/*
==============
bdPlatformTiming::getElapsedTime
==============
*/

double __fastcall bdPlatformTiming::getElapsedTime(const unsigned __int64 time1, const unsigned __int64 time2)
{
  double result; 

  *(float *)&result = ?getElapsedTime@bdPlatformTiming@@SAM_K0@Z(time1, time2);
  return result;
}

/*
==============
bdPlatformTiming::bdPlatformTiming
==============
*/

void __fastcall bdPlatformTiming::bdPlatformTiming(bdPlatformTiming *this)
{
  ??0bdPlatformTiming@@AEAA@XZ(this);
}

/*
==============
bdPlatformTiming::getLoResElapsedTimeFloat
==============
*/

double __fastcall bdPlatformTiming::getLoResElapsedTimeFloat(const unsigned int time1, const unsigned int time2)
{
  double result; 

  *(float *)&result = ?getLoResElapsedTimeFloat@bdPlatformTiming@@SAMII@Z(time1, time2);
  return result;
}

/*
==============
bdPlatformTiming::getPOSIXTimestamp
==============
*/

__int64 __fastcall bdPlatformTiming::getPOSIXTimestamp()
{
  return ?getPOSIXTimestamp@bdPlatformTiming@@SA_JXZ();
}

/*
==============
bdPlatformTiming::getLoResElapsedTime
==============
*/

unsigned int __fastcall bdPlatformTiming::getLoResElapsedTime(const unsigned int time1, const unsigned int time2)
{
  return ?getLoResElapsedTime@bdPlatformTiming@@SAIII@Z(time1, time2);
}

/*
==============
bdPlatformTiming::bdPlatformTiming
==============
*/
void bdPlatformTiming::bdPlatformTiming(bdPlatformTiming *this)
{
  ;
}

/*
==============
bdPlatformTiming::getElapsedTime
==============
*/
float bdPlatformTiming::getElapsedTime(const unsigned __int64 time1, const unsigned __int64 time2)
{
  float result; 
  signed __int64 v3; 
  float v4; 
  float v5; 

  result = 0.0;
  if ( time1 <= time2 )
  {
    v3 = time2 - time1;
    v4 = (float)v3;
    if ( v3 < 0 )
    {
      v5 = (float)v3;
      v4 = v5 + 1.8446744e19;
    }
    return v4 * 0.000001;
  }
  return result;
}

/*
==============
bdPlatformTiming::getHiResTimeStamp
==============
*/
__int64 bdPlatformTiming::getHiResTimeStamp()
{
  __int64 perf_frequency_0; 
  __int64 perf_counter_0; 

  perf_frequency_0 = Query_perf_frequency_0();
  perf_counter_0 = Query_perf_counter_0();
  return (1000000000 * (perf_counter_0 % perf_frequency_0) / perf_frequency_0 + 1000000000 * (perf_counter_0 / perf_frequency_0)) / 1000;
}

/*
==============
bdPlatformTiming::getLoResElapsedTime
==============
*/
unsigned __int64 bdPlatformTiming::getLoResElapsedTime(const unsigned int time1, const unsigned int time2)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 

  v2 = time2;
  v3 = time1;
  v4 = v2 + 0xFFFFFFFF;
  if ( v2 >= v3 )
    v4 = v2;
  return (v4 - v3) / 0x3E8;
}

/*
==============
bdPlatformTiming::getLoResElapsedTimeFloat
==============
*/
float bdPlatformTiming::getLoResElapsedTimeFloat(const unsigned int time1, const unsigned int time2)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  __int64 v5; 
  float v6; 
  float v7; 

  v2 = time2;
  v3 = time1;
  v4 = v2 + 0xFFFFFFFF;
  if ( v2 >= v3 )
    v4 = v2;
  v5 = v4 - v3;
  v6 = (float)v5;
  if ( v5 < 0 )
  {
    v7 = (float)v5;
    v6 = v7 + 1.8446744e19;
  }
  return v6 * 0.001;
}

/*
==============
bdPlatformTiming::getLoResTimeStamp
==============
*/
__int64 bdPlatformTiming::getLoResTimeStamp()
{
  __int64 perf_frequency_0; 
  __int64 perf_counter_0; 

  perf_frequency_0 = Query_perf_frequency_0();
  perf_counter_0 = Query_perf_counter_0();
  return (1000000000 * (perf_counter_0 % perf_frequency_0) / perf_frequency_0 + 1000000000 * (perf_counter_0 / perf_frequency_0)) / 1000000;
}

/*
==============
bdPlatformTiming::getPOSIXTimestamp
==============
*/
__int64 bdPlatformTiming::getPOSIXTimestamp()
{
  return Xtime_get_ticks_0() / 10000000;
}

/*
==============
bdPlatformTiming::sleep
==============
*/
void bdPlatformTiming::sleep(unsigned int timeInMs)
{
  __int64 v1; 
  xtime v2; 

  if ( timeInMs )
  {
    v1 = 1000000i64 * timeInMs + 100 * Xtime_get_ticks_0();
    v2.sec = v1 / 1000000000;
    v2.nsec = v1 % 1000000000;
  }
  else
  {
    v2.sec = 0i64;
    v2.nsec = 0;
  }
  Thrd_sleep_0(&v2);
}

