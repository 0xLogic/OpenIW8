/*
==============
PrintfTimer_Print
==============
*/

void __fastcall PrintfTimer_Print(const char *userText, unsigned int iterationsPerPrint, bool computeStats, bool useMicroseconds, unsigned __int64 *times)
{
  ?PrintfTimer_Print@@YAXPEBDI_N1PEA_K@Z(userText, iterationsPerPrint, computeStats, useMicroseconds, times);
}

/*
==============
InitTiming_NoThreadLock
==============
*/

void InitTiming_NoThreadLock(void)
{
  ?InitTiming_NoThreadLock@@YAXXZ();
}

/*
==============
InitTiming_NoThreadLock
==============
*/

void __fastcall InitTiming_NoThreadLock(__int64 a1, double _XMM1_8)
{
  HANDLE CurrentThread; 
  int ThreadPriority; 
  LARGE_INTEGER v15; 
  LARGE_INTEGER PerformanceCount; 
  LARGE_INTEGER Frequency; 

  __asm { vxorpd  xmm1, xmm1, xmm1 }
  if ( msecPerRawTimerTick != *(double *)&_XMM1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\timing.cpp", 31, ASSERT_TYPE_ASSERT, "(msecPerRawTimerTick == 0.0)", (const char *)&queryFormat, "msecPerRawTimerTick == 0.0") )
    __debugbreak();
  CurrentThread = GetCurrentThread();
  ThreadPriority = GetThreadPriority(CurrentThread);
  SetThreadPriority(CurrentThread, 15);
  Sleep(0);
  PerformanceCount.QuadPart = 0i64;
  v15.QuadPart = 0i64;
  QueryPerformanceFrequency(&Frequency);
  QueryPerformanceCounter(&PerformanceCount);
  __rdtsc();
  QueryPerformanceCounter(&PerformanceCount);
  do
  {
    QueryPerformanceCounter(&v15);
    _XMM1 = 0i64;
    _XMM0 = 0i64;
    __asm
    {
      vcvtsi2sd xmm0, xmm0, qword ptr [rsp+58h+Frequency]
      vcvtsi2sd xmm1, xmm1, rax
    }
  }
  while ( *(double *)&_XMM1 / *(double *)&_XMM0 <= 0.25 );
  __rdtsc();
  QueryPerformanceCounter(&v15);
  _XMM1 = 0i64;
  _XMM0 = 0i64;
  __asm
  {
    vcvtsi2sd xmm0, xmm0, qword ptr [rsp+58h+Frequency]
    vcvtsi2sd xmm1, xmm1, rbx
  }
  _XMM2 = 0i64;
  __asm { vcvtsi2sd xmm2, xmm2, rax }
  SetThreadPriority(CurrentThread, ThreadPriority);
  msecPerRawTimerTick = *(double *)&_XMM2 / (*(double *)&_XMM1 * *(double *)&_XMM0) * 1000.0;
  usecPerRawTimerTick = *(double *)&_XMM2 / (*(double *)&_XMM1 * *(double *)&_XMM0) * 1000.0 * 1000.0;
  g_timerTickAtBoot = __rdtsc();
}

/*
==============
PrintfTimer_Print
==============
*/
void PrintfTimer_Print(const char *userText, unsigned int iterationsPerPrint, bool computeStats, bool useMicroseconds, unsigned __int64 *times)
{
  __int64 v7; 
  unsigned __int64 v10; 
  __int64 v11; 
  unsigned __int64 *v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  unsigned __int64 *v15; 
  signed __int64 v21; 
  signed __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  unsigned int v25; 
  unsigned __int64 *v26; 
  unsigned int v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  __int128 v33; 
  __int64 v34; 
  __int128 v36; 
  __int128 v40; 
  unsigned __int64 v42; 
  __int128 v45; 
  __int128 v47; 
  __int128 v51; 
  __int128 v53; 
  double v56; 
  __int128 v58; 
  __int128 v60; 
  double v64; 
  __int128 v65; 
  __int128 v67; 
  double v71; 
  __int128 v72; 
  __int128 v74; 
  double v78; 
  double v79; 
  __int128 v80; 
  __int128 v82; 
  __int128 v86; 
  __int128 v89; 
  __int128 v91; 
  const char *v93; 
  __int128 v94; 
  std::less<void> v97; 

  v7 = 0i64;
  v10 = iterationsPerPrint;
  v11 = 0i64;
  v12 = times;
  v13 = iterationsPerPrint;
  v14 = 0i64;
  v15 = &times[iterationsPerPrint];
  if ( times > v15 )
    v10 = 0i64;
  if ( v10 )
  {
    if ( v10 >= 4 )
    {
      __asm
      {
        vpxor   xmm1, xmm1, xmm1
        vpxor   xmm2, xmm2, xmm2
      }
      do
      {
        __asm
        {
          vpaddq  xmm1, xmm1, xmmword ptr [rax]
          vpaddq  xmm2, xmm2, xmmword ptr [rax+10h]
        }
        v12 += 4;
        v14 += 4i64;
      }
      while ( v14 != (v10 & 0xFFFFFFFC) );
      __asm
      {
        vpaddq  xmm1, xmm2, xmm1
        vpsrldq xmm0, xmm1, 8
        vpaddq  xmm1, xmm1, xmm0
      }
      v11 = _XMM1;
    }
    for ( ; v14 != v10; ++v14 )
      v11 += *v12++;
  }
  v21 = v11 / (unsigned __int64)iterationsPerPrint;
  if ( computeStats )
  {
    std::_Sort_unchecked<unsigned __int64 *,std::less<void>>(times, v15, iterationsPerPrint, v97);
    v22 = times[v13 >> 1];
    if ( (iterationsPerPrint & 1) == 0 )
      v22 = (times[(iterationsPerPrint >> 1) - 1] + v22) >> 1;
    v23 = 0i64;
    v24 = 0i64;
    v25 = 0;
    if ( iterationsPerPrint >= 2 )
    {
      v26 = times;
      v27 = ((iterationsPerPrint - 2) >> 1) + 1;
      v28 = v27;
      v25 = 2 * v27;
      do
      {
        v29 = *v26;
        v26 += 2;
        v7 += (v29 - v21) * (v29 - v21);
        v23 += (*(v26 - 1) - v21) * (*(v26 - 1) - v21);
        --v28;
      }
      while ( v28 );
    }
    if ( v25 < iterationsPerPrint )
    {
      v30 = times[v25] - v21;
      v24 = v30 * v30;
    }
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rbx }
    if ( v21 < 0 )
    {
      *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v33 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v33;
    }
    v34 = iterationsPerPrint - 1;
    *((_QWORD *)&v36 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v36 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v36;
    _XMM1 = 0i64;
    __asm
    {
      vcvtsd2ss xmm3, xmm0, xmm0
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (__int64)(v24 + v23 + v7) < 0 )
    {
      *((_QWORD *)&v40 + 1) = *((_QWORD *)&_XMM1 + 1);
      *(double *)&v40 = *(double *)&_XMM1 + 1.844674407370955e19;
      _XMM1 = v40;
    }
    _XMM0 = 0i64;
    v42 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    *((_QWORD *)&v45 + 1) = *((_QWORD *)&_XMM1 + 1);
    *(double *)&v45 = *(double *)&_XMM1 / *(double *)&_XMM0;
    _XMM1 = v45;
    __asm { vsqrtsd xmm2, xmm1, xmm1 }
    if ( *(double *)&_XMM2 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v47 + 1) = *((_QWORD *)&_XMM2 + 1);
      *(double *)&v47 = *(double *)&_XMM2 - 9.223372036854776e18;
      _XMM2 = v47;
      if ( *(double *)&v47 < 9.223372036854776e18 )
        v42 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rax, xmm2 }
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(v42 + _RAX) < 0 )
    {
      *((_QWORD *)&v51 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v51 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v51;
    }
    *((_QWORD *)&v53 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v53 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v53;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    _XMM0 = 0i64;
    v56 = (float)(*(float *)&_XMM1 / *(float *)&_XMM3);
    __asm { vcvtsi2sd xmm0, xmm0, rcx }
    if ( (times[v34] & 0x8000000000000000ui64) != 0i64 )
    {
      *((_QWORD *)&v58 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v58 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v58;
    }
    *((_QWORD *)&v60 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v60 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v60;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, r10 }
    v64 = *(float *)&_XMM1;
    if ( v22 < 0 )
    {
      *((_QWORD *)&v65 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v65 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v65;
    }
    *((_QWORD *)&v67 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v67 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v67;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    v71 = *(float *)&_XMM1;
    if ( (*times & 0x8000000000000000ui64) != 0i64 )
    {
      *((_QWORD *)&v72 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v72 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v72;
    }
    *((_QWORD *)&v74 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v74 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v74;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rdi }
    v78 = *(float *)&_XMM1;
    v79 = *(float *)&_XMM3;
    if ( v11 < 0 )
    {
      *((_QWORD *)&v80 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v80 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v80;
    }
    *((_QWORD *)&v82 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v82 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v82;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    Sys_Printf("%s %.2f total %.2f avg %.2f/%.2f/%.2f (min/med/max) ms %.1f%% rsd\n", userText, *(float *)&_XMM1, v79, v78, v71, v64, v56);
  }
  else
  {
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rbx }
    if ( v21 < 0 )
    {
      *((_QWORD *)&v86 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v86 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v86;
    }
    _XMM4 = 0i64;
    __asm { vcvtsi2sd xmm4, xmm4, rdi }
    if ( v11 < 0 )
    {
      *((_QWORD *)&v89 + 1) = *((_QWORD *)&_XMM4 + 1);
      *(double *)&v89 = *(double *)&_XMM4 + 1.844674407370955e19;
      _XMM4 = v89;
    }
    if ( useMicroseconds )
    {
      *((_QWORD *)&v91 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v91 = *(double *)&_XMM0 * usecPerRawTimerTick;
      _XMM0 = v91;
      *((_QWORD *)&v91 + 1) = *((_QWORD *)&_XMM4 + 1);
      *(double *)&v91 = *(double *)&_XMM4 * usecPerRawTimerTick;
      _XMM2 = v91;
      v93 = "%s %.2fus total %.2fus avg\n";
    }
    else
    {
      *((_QWORD *)&v94 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v94 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM0 = v94;
      *((_QWORD *)&v94 + 1) = *((_QWORD *)&_XMM4 + 1);
      *(double *)&v94 = *(double *)&_XMM4 * msecPerRawTimerTick;
      _XMM2 = v94;
      v93 = "%s %.2fms total %.2fms avg\n";
    }
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vcvtsd2ss xmm0, xmm2, xmm2
    }
    Sys_Printf(v93, userText, *(float *)&_XMM0, *(float *)&_XMM1);
  }
}

