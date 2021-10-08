/*
==============
indyfs_time_now_ms
==============
*/

int __fastcall indyfs_time_now_ms()
{
  return ?indyfs_time_now_ms@@YAHXZ();
}

/*
==============
indyfs_time_now_us
==============
*/

long double __fastcall indyfs_time_now_us()
{
  return ?indyfs_time_now_us@@YANXZ();
}

/*
==============
indyfs_time_init
==============
*/

void indyfs_time_init(void)
{
  ?indyfs_time_init@@YAXXZ();
}

/*
==============
indyfs_time_init
==============
*/
void indyfs_time_init(void)
{
  LARGE_INTEGER PerformanceCount; 

  QueryPerformanceCounter(&PerformanceCount);
  g_baseTime = PerformanceCount.QuadPart;
  QueryPerformanceFrequency(&PerformanceCount);
  g_frequency = PerformanceCount.QuadPart;
}

/*
==============
indyfs_time_now_ms
==============
*/
__int64 indyfs_time_now_ms()
{
  LARGE_INTEGER PerformanceCount; 

  QueryPerformanceCounter(&PerformanceCount);
  return (PerformanceCount.QuadPart - g_baseTime) / (g_frequency / 1000);
}

/*
==============
indyfs_time_now_us
==============
*/

long double __fastcall indyfs_time_now_us(__int64 a1, double _XMM1_8, double _XMM2_8)
{
  LARGE_INTEGER PerformanceCount; 

  QueryPerformanceCounter(&PerformanceCount);
  __asm
  {
    vmovsd  xmm0, cs:__real@412e848000000000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, cs:g_frequency
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2sd xmm2, xmm2, rax
    vdivsd  xmm1, xmm0, xmm1
    vmulsd  xmm0, xmm2, xmm1
  }
  return *(double *)&_XMM0;
}

