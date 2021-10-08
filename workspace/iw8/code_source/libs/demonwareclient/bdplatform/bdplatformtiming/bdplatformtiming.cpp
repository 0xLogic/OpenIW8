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
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( time1 <= time2 )
  {
    __asm { vcvtsi2ss xmm0, xmm0, rdx }
    if ( (__int64)(time2 - time1) < 0 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm { vmulss  xmm0, xmm0, cs:__real@358637bd }
  }
  return *(float *)&_XMM0;
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
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 

  v3 = time2;
  v4 = time1;
  v5 = v3 + 0xFFFFFFFF;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( v3 >= v4 )
    v5 = v3;
  __asm { vcvtsi2ss xmm0, xmm0, rcx }
  if ( (__int64)(v5 - v4) < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
  __asm { vmulss  xmm0, xmm0, cs:__real@3a83126f }
  return *(float *)&_XMM0;
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
  xtime v3; 

  if ( timeInMs )
  {
    v1 = 1000000i64 * timeInMs + 100 * Xtime_get_ticks_0();
    v3.sec = v1 / 1000000000;
    v3.nsec = v1 % 1000000000;
  }
  else
  {
    v3.sec = 0i64;
    v3.nsec = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+48h+var_28.sec]
    vmovdqa xmmword ptr [rsp+48h+var_28.sec], xmm0
  }
  Thrd_sleep_0(&v3);
}

