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

unsigned __int64 __fastcall Sys_Microseconds(__int64 a1, double _XMM1_8)
{
  unsigned __int64 v8; 
  unsigned __int64 result; 

  __asm
  {
    vmovsd  xmm2, cs:__real@43f0000000000000
    vmovsd  xmm0, cs:__real@43e0000000000000
  }
  if ( sys_timeBasesInitialized )
  {
    v8 = sys_counterBase;
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (__rdtsc() & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm2 }
    __asm
    {
      vmulsd  xmm1, xmm1, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcomisd xmm1, xmm0
      vsubsd  xmm1, xmm1, xmm0
      vcomisd xmm1, xmm0
      vcvttsd2si rax, xmm1
    }
    sys_timeBase = _RAX;
    sys_timeBasesInitialized = 1;
    v8 = __rdtsc();
    sys_counterBase = v8;
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
  }
  if ( (__int64)(__rdtsc() - v8) < 0 )
    __asm { vaddsd  xmm1, xmm1, xmm2 }
  __asm
  {
    vmulsd  xmm1, xmm1, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
    vcomisd xmm1, xmm0
    vsubsd  xmm1, xmm1, xmm0
    vcomisd xmm1, xmm0
    vcvttsd2si rax, xmm1
  }
  return result;
}

/*
==============
Sys_Milliseconds
==============
*/

__int64 __fastcall Sys_Milliseconds(__int64 a1, double _XMM1_8)
{
  unsigned __int64 v9; 
  long double v16; 

  __asm
  {
    vmovsd  xmm2, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovsd  xmm3, cs:__real@43f0000000000000
    vmovsd  xmm0, cs:__real@43e0000000000000
  }
  if ( sys_timeBasesInitialized )
  {
    v9 = sys_counterBase;
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (__rdtsc() & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm3 }
    __asm
    {
      vmulsd  xmm1, xmm1, xmm2
      vcomisd xmm1, xmm0
      vsubsd  xmm1, xmm1, xmm0
      vcomisd xmm1, xmm0
      vcvttsd2si rax, xmm1
    }
    sys_timeBase = _RAX;
    sys_timeBasesInitialized = 1;
    v9 = __rdtsc();
    sys_counterBase = v9;
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
  }
  if ( (__int64)(__rdtsc() - v9) < 0 )
    __asm { vaddsd  xmm1, xmm1, xmm3 }
  __asm
  {
    vmulsd  xmm1, xmm1, xmm2
    vcomisd xmm1, xmm0
    vsubsd  xmm1, xmm1, xmm0
    vcomisd xmm1, xmm0
    vcvttsd2si rbx, xmm1
  }
  if ( _RBX > 0x7FFFFFFF )
  {
    __asm { vmovsd  [rsp+38h+var_10], xmm2 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\win32\\win_shared.cpp", 59, ASSERT_TYPE_ASSERT, "( ( msecCount <= 2147483647 ) )", "( msecPerRawTimerTick ) = %lg", v16) )
      __debugbreak();
  }
  return (unsigned int)_RBX;
}

/*
==============
Sys_MillisecondsRaw
==============
*/

int __fastcall Sys_MillisecondsRaw(double _XMM0_8)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__rdtsc() & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovsd  xmm1, cs:__real@43e0000000000000
    vcomisd xmm0, xmm1
    vsubsd  xmm0, xmm0, xmm1
    vcomisd xmm0, xmm1
    vcvttsd2si rax, xmm0
  }
  return _RAX & 0x7FFFFFFF;
}

