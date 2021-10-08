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

void __fastcall InitTiming_NoThreadLock(__int64 a1, double _XMM1_8, double _XMM2_8)
{
  HANDLE CurrentThread; 
  int ThreadPriority; 
  LARGE_INTEGER v24; 
  LARGE_INTEGER PerformanceCount; 
  LARGE_INTEGER Frequency; 

  __asm
  {
    vmovsd  xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vxorpd  xmm1, xmm1, xmm1
    vucomisd xmm0, xmm1
    vmovaps [rsp+58h+var_28], xmm6
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\timing.cpp", 31, ASSERT_TYPE_ASSERT, "(msecPerRawTimerTick == 0.0)", (const char *)&queryFormat, "msecPerRawTimerTick == 0.0") )
    __debugbreak();
  CurrentThread = GetCurrentThread();
  ThreadPriority = GetThreadPriority(CurrentThread);
  SetThreadPriority(CurrentThread, 15);
  Sleep(0);
  PerformanceCount.QuadPart = 0i64;
  v24.QuadPart = 0i64;
  QueryPerformanceFrequency(&Frequency);
  QueryPerformanceCounter(&PerformanceCount);
  __rdtsc();
  QueryPerformanceCounter(&PerformanceCount);
  __asm { vmovsd  xmm6, cs:__real@3fd0000000000000 }
  do
  {
    QueryPerformanceCounter(&v24);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, qword ptr [rsp+58h+Frequency]
      vcvtsi2sd xmm1, xmm1, rax
      vdivsd  xmm1, xmm1, xmm0
      vcomisd xmm1, xmm6
    }
  }
  while ( v24.QuadPart <= (unsigned __int64)PerformanceCount.QuadPart );
  __rdtsc();
  QueryPerformanceCounter(&v24);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, qword ptr [rsp+58h+Frequency]
    vcvtsi2sd xmm1, xmm1, rbx
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2sd xmm2, xmm2, rax
    vmulsd  xmm1, xmm1, xmm0
    vdivsd  xmm6, xmm2, xmm1
  }
  SetThreadPriority(CurrentThread, ThreadPriority);
  __asm
  {
    vmulsd  xmm0, xmm6, cs:__real@408f400000000000
    vmovsd  cs:?msecPerRawTimerTick@@3NA, xmm0; double msecPerRawTimerTick
    vmulsd  xmm0, xmm0, cs:__real@408f400000000000
    vmovsd  cs:?usecPerRawTimerTick@@3NA, xmm0; double usecPerRawTimerTick
    vmovaps xmm6, [rsp+58h+var_28]
  }
  g_timerTickAtBoot = __rdtsc();
}

/*
==============
PrintfTimer_Print
==============
*/
void PrintfTimer_Print(const char *userText, unsigned int iterationsPerPrint, bool computeStats, bool useMicroseconds, unsigned __int64 *times)
{
  __int64 v13; 
  unsigned __int64 v16; 
  unsigned __int64 *v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  unsigned __int64 *v21; 
  signed __int64 v25; 
  signed __int64 v26; 
  __int64 v27; 
  unsigned __int64 v28; 
  unsigned int v29; 
  unsigned __int64 *v30; 
  unsigned int v31; 
  __int64 v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  __int64 v39; 
  const char *v91; 
  double v98; 
  double v99; 
  double v100; 
  double v101; 
  std::less<void> v106; 

  v13 = 0i64;
  v16 = iterationsPerPrint;
  _RDI = 0i64;
  v18 = times;
  v19 = iterationsPerPrint;
  v20 = 0i64;
  v21 = &times[iterationsPerPrint];
  if ( times > v21 )
    v16 = 0i64;
  if ( v16 )
  {
    if ( v16 >= 4 )
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
        v18 += 4;
        v20 += 4i64;
      }
      while ( v20 != (v16 & 0xFFFFFFFC) );
      __asm
      {
        vpaddq  xmm1, xmm2, xmm1
        vpsrldq xmm0, xmm1, 8
        vpaddq  xmm1, xmm1, xmm0
        vmovq   rdi, xmm1
      }
    }
    for ( ; v20 != v16; ++v20 )
      _RDI += *v18++;
  }
  v25 = _RDI / (unsigned __int64)iterationsPerPrint;
  if ( computeStats )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovaps [rsp+0A8h+var_58], xmm8
      vmovaps [rsp+0A8h+var_68], xmm9
    }
    std::_Sort_unchecked<unsigned __int64 *,std::less<void>>(times, v21, iterationsPerPrint, v106);
    v26 = times[v19 >> 1];
    if ( (iterationsPerPrint & 1) == 0 )
      v26 = (times[(iterationsPerPrint >> 1) - 1] + v26) >> 1;
    v27 = 0i64;
    v28 = 0i64;
    v29 = 0;
    if ( iterationsPerPrint >= 2 )
    {
      v30 = times;
      v31 = ((iterationsPerPrint - 2) >> 1) + 1;
      v32 = v31;
      v29 = 2 * v31;
      do
      {
        v33 = *v30;
        v30 += 2;
        v13 += (v33 - v25) * (v33 - v25);
        v27 += (*(v30 - 1) - v25) * (*(v30 - 1) - v25);
        --v32;
      }
      while ( v32 );
    }
    if ( v29 < iterationsPerPrint )
    {
      v34 = times[v29] - v25;
      v28 = v34 * v34;
    }
    __asm
    {
      vmovsd  xmm4, cs:__real@43f0000000000000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rbx
    }
    if ( v25 < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm4 }
    __asm { vmovsd  xmm5, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick }
    v39 = iterationsPerPrint - 1;
    __asm
    {
      vmulsd  xmm0, xmm0, xmm5
      vxorps  xmm1, xmm1, xmm1
      vcvtsd2ss xmm3, xmm0, xmm0
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (__int64)(v28 + v27 + v13) < 0 )
      __asm { vaddsd  xmm1, xmm1, xmm4 }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
      vdivsd  xmm1, xmm1, xmm0
      vmovsd  xmm0, cs:__real@43e0000000000000
      vsqrtsd xmm2, xmm1, xmm1
      vcomisd xmm2, xmm0
      vsubsd  xmm2, xmm2, xmm0
      vcomisd xmm2, xmm0
      vcvttsd2si rax, xmm2
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( _RAX < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm4 }
    __asm
    {
      vmulsd  xmm0, xmm0, xmm5
      vcvtsd2ss xmm1, xmm0, xmm0
      vdivss  xmm2, xmm1, xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtss2sd xmm9, xmm2, xmm2
      vcvtsi2sd xmm0, xmm0, rcx
    }
    if ( (times[v39] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm0, xmm0, xmm4 }
    __asm
    {
      vmulsd  xmm0, xmm0, xmm5
      vcvtsd2ss xmm1, xmm0, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, r10
      vcvtss2sd xmm8, xmm1, xmm1
    }
    if ( v26 < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm4 }
    __asm
    {
      vmulsd  xmm0, xmm0, xmm5
      vcvtsd2ss xmm1, xmm0, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
      vcvtss2sd xmm7, xmm1, xmm1
    }
    if ( (*times & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm0, xmm0, xmm4 }
    __asm
    {
      vmulsd  xmm0, xmm0, xmm5
      vcvtsd2ss xmm1, xmm0, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rdi
      vcvtss2sd xmm6, xmm1, xmm1
      vcvtss2sd xmm3, xmm3, xmm3
    }
    if ( _RDI < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm4 }
    __asm
    {
      vmovsd  [rsp+0A8h+var_70], xmm9
      vmulsd  xmm0, xmm0, xmm5
      vcvtsd2ss xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm1, xmm1
      vmovsd  [rsp+0A8h+var_78], xmm8
      vmovq   r8, xmm2
      vmovsd  [rsp+0A8h+var_80], xmm7
      vmovq   r9, xmm3
      vmovsd  [rsp+0A8h+var_88], xmm6
    }
    Sys_Printf("%s %.2f total %.2f avg %.2f/%.2f/%.2f (min/med/max) ms %.1f%% rsd\n", userText, *(double *)&_XMM2, *(double *)&_XMM3, v98, v99, v100, v101);
    __asm
    {
      vmovaps xmm9, [rsp+0A8h+var_68]
      vmovaps xmm8, [rsp+0A8h+var_58]
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
  }
  else
  {
    __asm
    {
      vmovsd  xmm1, cs:__real@43f0000000000000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rbx
    }
    if ( v25 < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm1 }
    __asm
    {
      vxorps  xmm4, xmm4, xmm4
      vcvtsi2sd xmm4, xmm4, rdi
    }
    if ( _RDI < 0 )
      __asm { vaddsd  xmm4, xmm4, xmm1 }
    if ( useMicroseconds )
    {
      __asm
      {
        vmulsd  xmm0, xmm0, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
        vmulsd  xmm2, xmm4, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
      }
      v91 = "%s %.2fus total %.2fus avg\n";
    }
    else
    {
      __asm
      {
        vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vmulsd  xmm2, xmm4, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      }
      v91 = "%s %.2fms total %.2fms avg\n";
    }
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vcvtsd2ss xmm0, xmm2, xmm2
      vcvtss2sd xmm2, xmm0, xmm0
      vcvtss2sd xmm3, xmm1, xmm1
      vmovq   r8, xmm2
      vmovq   r9, xmm3
    }
    Sys_Printf(v91, userText, _R8, _R9);
  }
}

