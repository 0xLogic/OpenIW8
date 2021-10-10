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
double indyfs_time_now_us()
{
  LARGE_INTEGER PerformanceCount; 

  QueryPerformanceCounter(&PerformanceCount);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, cs:g_frequency }
  _XMM2 = 0i64;
  __asm { vcvtsi2sd xmm2, xmm2, rax }
  return *(double *)&_XMM2 * (1000000.0 / *(double *)&_XMM1);
}

