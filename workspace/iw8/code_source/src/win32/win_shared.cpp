/*
==============
Sys_ConvertWindowsTimestampToUnix
==============
*/

unsigned __int64 __fastcall Sys_ConvertWindowsTimestampToUnix(unsigned __int64 windowsTime)
{
  return ?Sys_ConvertWindowsTimestampToUnix@@YA_K_K@Z(windowsTime);
}

/*
==============
Sys_Milliseconds
==============
*/

int __fastcall Sys_Milliseconds()
{
  return ?Sys_Milliseconds@@YAHXZ();
}

/*
==============
Sys_GetTimeAsSeconds
==============
*/

unsigned int __fastcall Sys_GetTimeAsSeconds()
{
  return ?Sys_GetTimeAsSeconds@@YAIXZ();
}

/*
==============
Sys_MillisecondsRaw
==============
*/

int __fastcall Sys_MillisecondsRaw()
{
  return ?Sys_MillisecondsRaw@@YAHXZ();
}

/*
==============
Sys_GetCurrentUser
==============
*/

char *__fastcall Sys_GetCurrentUser()
{
  return ?Sys_GetCurrentUser@@YAPEADXZ();
}

/*
==============
Sys_Microseconds
==============
*/

unsigned __int64 __fastcall Sys_Microseconds()
{
  return ?Sys_Microseconds@@YA_KXZ();
}

/*
==============
Sys_ConvertWindowsTimestampToUnix
==============
*/
unsigned __int64 Sys_ConvertWindowsTimestampToUnix(unsigned __int64 windowsTime)
{
  _FILETIME FileTime; 
  SYSTEMTIME SystemTime; 

  *(_DWORD *)&SystemTime.wYear = 67506;
  *(_QWORD *)&SystemTime.wHour = 0i64;
  SystemTime.wDay = 1;
  SystemTimeToFileTime(&SystemTime, &FileTime);
  return (windowsTime - *(_QWORD *)&FileTime) / 0x989680;
}

/*
==============
Sys_GetCurrentUser
==============
*/
char *Sys_GetCurrentUser()
{
  if ( !s_userName[0] )
    strcpy(s_userName, "player");
  return s_userName;
}

/*
==============
Sys_GetTimeAsSeconds
==============
*/
__int64 Sys_GetTimeAsSeconds()
{
  unsigned __int64 v0; 
  _FILETIME FileTime; 
  _FILETIME v3; 
  _FILETIME v4; 
  SYSTEMTIME v5; 
  _SYSTEMTIME SystemTime; 

  GetSystemTime(&SystemTime);
  SystemTimeToFileTime(&SystemTime, &FileTime);
  v4 = FileTime;
  *(_QWORD *)&v5.wHour = 0i64;
  v5.wDay = 1;
  *(_DWORD *)&v5.wYear = 67506;
  SystemTimeToFileTime(&v5, &v3);
  *(_FILETIME *)&v5.wYear = v3;
  v0 = (*(_QWORD *)&v4 - *(_QWORD *)&v3) / 0x989680ui64;
  if ( (*(_QWORD *)&v4 - *(_QWORD *)&v3) / 0x98968000000000ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\win32\\win_shared.cpp", 137, ASSERT_TYPE_ASSERT, "(time.HighPart == 0)", (const char *)&queryFormat, "time.HighPart == 0") )
    __debugbreak();
  return (unsigned int)v0;
}

/*
==============
Sys_Microseconds
==============
*/
unsigned __int64 Sys_Microseconds()
{
  __int128 v2; 
  __int128 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v7; 
  __int128 v10; 
  __int128 v12; 
  unsigned __int64 v13; 

  if ( sys_timeBasesInitialized )
  {
    v7 = sys_counterBase;
  }
  else
  {
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (__rdtsc() & 0x8000000000000000ui64) != 0i64 )
    {
      *((_QWORD *)&v2 + 1) = *((_QWORD *)&_XMM1 + 1);
      *(double *)&v2 = *(double *)&_XMM1 + 1.844674407370955e19;
      _XMM1 = v2;
    }
    *((_QWORD *)&v4 + 1) = *((_QWORD *)&_XMM1 + 1);
    *(double *)&v4 = *(double *)&_XMM1 * msecPerRawTimerTick;
    _XMM1 = v4;
    v5 = 0i64;
    if ( *(double *)&v4 >= 9.223372036854776e18 )
    {
      *(double *)&v4 = *(double *)&v4 - 9.223372036854776e18;
      _XMM1 = v4;
      if ( *(double *)&v4 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rax, xmm1 }
    sys_timeBase = v5 + _RAX;
    sys_timeBasesInitialized = 1;
    v7 = __rdtsc();
    sys_counterBase = v7;
  }
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax }
  if ( (__int64)(__rdtsc() - v7) < 0 )
  {
    *((_QWORD *)&v10 + 1) = *((_QWORD *)&_XMM1 + 1);
    *(double *)&v10 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM1 = v10;
  }
  *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v12 = *(double *)&_XMM1 * usecPerRawTimerTick;
  _XMM1 = v12;
  v13 = 0i64;
  if ( *(double *)&v12 >= 9.223372036854776e18 )
  {
    *(double *)&v12 = *(double *)&v12 - 9.223372036854776e18;
    _XMM1 = v12;
    if ( *(double *)&v12 < 9.223372036854776e18 )
      v13 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rax, xmm1 }
  return v13 + _RAX;
}

/*
==============
Sys_Milliseconds
==============
*/
__int64 Sys_Milliseconds()
{
  __int128 v2; 
  __int128 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v7; 
  __int128 v10; 
  __int128 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v15; 

  if ( sys_timeBasesInitialized )
  {
    v7 = sys_counterBase;
  }
  else
  {
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (__rdtsc() & 0x8000000000000000ui64) != 0i64 )
    {
      *((_QWORD *)&v2 + 1) = *((_QWORD *)&_XMM1 + 1);
      *(double *)&v2 = *(double *)&_XMM1 + 1.844674407370955e19;
      _XMM1 = v2;
    }
    *((_QWORD *)&v4 + 1) = *((_QWORD *)&_XMM1 + 1);
    *(double *)&v4 = *(double *)&_XMM1 * msecPerRawTimerTick;
    _XMM1 = v4;
    v5 = 0i64;
    if ( *(double *)&v4 >= 9.223372036854776e18 )
    {
      *(double *)&v4 = *(double *)&v4 - 9.223372036854776e18;
      _XMM1 = v4;
      if ( *(double *)&v4 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rax, xmm1 }
    sys_timeBase = v5 + _RAX;
    sys_timeBasesInitialized = 1;
    v7 = __rdtsc();
    sys_counterBase = v7;
  }
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax }
  if ( (__int64)(__rdtsc() - v7) < 0 )
  {
    *((_QWORD *)&v10 + 1) = *((_QWORD *)&_XMM1 + 1);
    *(double *)&v10 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM1 = v10;
  }
  *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v12 = *(double *)&_XMM1 * msecPerRawTimerTick;
  _XMM1 = v12;
  v13 = 0i64;
  if ( *(double *)&v12 >= 9.223372036854776e18 )
  {
    *(double *)&v12 = *(double *)&v12 - 9.223372036854776e18;
    _XMM1 = v12;
    if ( *(double *)&v12 < 9.223372036854776e18 )
      v13 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rbx, xmm1 }
  v15 = v13 + _RBX;
  if ( v15 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\win32\\win_shared.cpp", 59, ASSERT_TYPE_ASSERT, "( ( msecCount <= 2147483647 ) )", "( msecPerRawTimerTick ) = %lg", msecPerRawTimerTick) )
    __debugbreak();
  return (unsigned int)v15;
}

/*
==============
Sys_MillisecondsRaw
==============
*/
int Sys_MillisecondsRaw()
{
  __int128 v2; 
  __int128 v4; 

  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__rdtsc() & 0x8000000000000000ui64) != 0i64 )
  {
    *((_QWORD *)&v2 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v2 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v2;
  }
  *((_QWORD *)&v4 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v4 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM0 = v4;
  if ( *(double *)&v4 >= 9.223372036854776e18 )
  {
    *(double *)&v4 = *(double *)&v4 - 9.223372036854776e18;
    _XMM0 = v4;
  }
  __asm { vcvttsd2si rax, xmm0 }
  return _RAX & 0x7FFFFFFF;
}

