/*
==============
Profile_BeginCSV
==============
*/

void __fastcall Profile_BeginCSV(int index)
{
  ?Profile_BeginCSV@@YAXH@Z(index);
}

/*
==============
R_CSV_SortHierarchy_Callback
==============
*/

int __fastcall R_CSV_SortHierarchy_Callback(const void *a, const void *b)
{
  return ?R_CSV_SortHierarchy_Callback@@YAHPEBX0@Z(a, b);
}

/*
==============
Profile_EndCSV
==============
*/

void __fastcall Profile_EndCSV(int index)
{
  ?Profile_EndCSV@@YAXH@Z(index);
}

/*
==============
Profile_WriteCSV
==============
*/

void Profile_WriteCSV(void)
{
  ?Profile_WriteCSV@@YAXXZ();
}

/*
==============
Profile_Shutdown
==============
*/

void Profile_Shutdown(void)
{
  ?Profile_Shutdown@@YAXXZ();
}

/*
==============
Profile_ResetThread
==============
*/

void __fastcall Profile_ResetThread(int threadId)
{
  ?Profile_ResetThread@@YAXH@Z(threadId);
}

/*
==============
R_CSV_SortHierarchy_GetStack
==============
*/

int __fastcall R_CSV_SortHierarchy_GetStack(CSVProfileTimer **stack, int index, CSVProfileTimer *item)
{
  return ?R_CSV_SortHierarchy_GetStack@@YAHPEAPEAUCSVProfileTimer@@HPEAU1@@Z(stack, index, item);
}

/*
==============
Profile_SortCSV
==============
*/

void __fastcall Profile_SortCSV(const char *threadName, CSVProfileThread *thread)
{
  ?Profile_SortCSV@@YAXPEBDPEAUCSVProfileThread@@@Z(threadName, thread);
}

/*
==============
Profile_BeginCSV
==============
*/
void Profile_BeginCSV(int index)
{
  __int64 v1; 
  CSVProfileThread *v2; 
  char *v3; 
  CSVProfileTimer *v4; 
  unsigned __int64 v5; 
  __int64 v6; 

  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v2 = &g_CSVThread[*(int *)(v1 + 1072)];
  v3 = (char *)&v2->timer[index];
  v4 = &v2->activeTimer[index];
  if ( *(char **)(v1 + 1080) == v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 133, ASSERT_TYPE_ASSERT, "(g_CSVTLS.currentTimer != item)", (const char *)&queryFormat, "g_CSVTLS.currentTimer != item") )
    __debugbreak();
  v5 = __rdtsc();
  v4->startTime = v5;
  v6 = 8i64 * tls_index;
  v4->parent = *(CSVProfileTimer **)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v6) + 1080i64);
  *(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v6) + 1080i64) = v3;
}

/*
==============
Profile_EndCSV
==============
*/
void Profile_EndCSV(int index)
{
  __int64 v1; 
  CSVProfileThread *v2; 
  CSVProfileTimer *v3; 
  unsigned __int64 v4; 
  _QWORD *v5; 

  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v2 = &g_CSVThread[*(int *)(v1 + 1072)];
  v3 = &v2->activeTimer[index];
  if ( &v2->timer[index] != (CSVProfileTimer *)*(CSVProfileThread **)(v1 + 1080) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 144, ASSERT_TYPE_ASSERT, "(&thread->timer[index] == g_CSVTLS.currentTimer)", (const char *)&queryFormat, "&thread->timer[index] == g_CSVTLS.currentTimer") )
    __debugbreak();
  v4 = __rdtsc();
  v5 = NtCurrentTeb()->Reserved1[11];
  v3->totalDuration += v4 - v3->startTime;
  *(_QWORD *)(v5[tls_index] + 1080i64) = v3->parent;
}

/*
==============
Profile_ReportPMemStackUsage
==============
*/
void Profile_ReportPMemStackUsage(const char *const name, const unsigned __int64 size)
{
  const char *v4; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 404, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v4 = j_va("Counters.PMemStack.%s", name);
  Profile_WriteMemoryMetricUnsigned(v4, size);
}

/*
==============
Profile_ReportSDUsage
==============
*/
void Profile_ReportSDUsage(const char *const name, const unsigned __int64 size)
{
  const char *v4; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 393, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v4 = j_va("Counters.SoundSize.%s", name);
  if ( !Profile_WriteMemoryMetricUnsignedChecked(v4, size) )
    s_otherSoundBankTotal += size;
}

/*
==============
Profile_ReportSystemAllocatorUsage
==============
*/
void Profile_ReportSystemAllocatorUsage(const char *const name, const unsigned __int64 size)
{
  const char *v4; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 425, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v4 = j_va("Counters.SysMem.%s", name);
  Profile_WriteMemoryMetricUnsigned(v4, size);
}

/*
==============
Profile_ReportVirtualUsage
==============
*/
void Profile_ReportVirtualUsage(const char *const name, const unsigned __int64 size)
{
  const char *v4; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 413, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v4 = j_va("Counters.MemVirtual.%s", name);
  if ( !Profile_WriteMemoryMetricUnsignedChecked(v4, size) )
    s_otherMemVirtualTotal += size;
}

/*
==============
Profile_ReportZoneUsage
==============
*/
void Profile_ReportZoneUsage(const char *const name, const unsigned int flags, const unsigned __int64 size)
{
  unsigned int v6; 
  const unsigned int *v7; 
  const char *v8; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 373, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v6 = 0;
  v7 = SEPARATE_COLUMN_ZONE_FLAGS;
  do
  {
    if ( (flags & *v7) != 0 )
    {
      s_separateZoneTotals[v6].resident += size;
      return;
    }
    ++v6;
    ++v7;
  }
  while ( v6 < 7 );
  v8 = j_va("Counters.ResidentSize.%s", name);
  if ( !Profile_WriteMemoryMetricUnsignedChecked(v8, size) )
    s_separateZoneTotals[6].resident += size;
}

/*
==============
Profile_ResetThread
==============
*/
void Profile_ResetThread(int threadId)
{
  __int64 v1; 
  __int64 v2; 
  CSVProfileThread *v3; 
  CSVProfileTimer *i; 

  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  *(_DWORD *)(v1 + 1072) = threadId;
  *(_QWORD *)(v1 + 1080) = 0i64;
  v2 = 3i64;
  v3 = &g_CSVThread[*(int *)(v1 + 1072)];
  _RCX = v3;
  _RDX = v3->activeTimer;
  do
  {
    _RCX = (CSVProfileThread *)((char *)_RCX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx]
      vmovups xmm1, xmmword ptr [rdx+70h]
    }
    _RDX += 8;
    __asm
    {
      vmovups ymmword ptr [rcx-80h], ymm0
      vmovups ymm0, ymmword ptr [rdx-60h]
      vmovups ymmword ptr [rcx-60h], ymm0
      vmovups ymm0, ymmword ptr [rdx-40h]
      vmovups ymmword ptr [rcx-40h], ymm0
      vmovups xmm0, xmmword ptr [rdx-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v2;
  }
  while ( v2 );
  for ( i = v3->timer[9].parent; i; i = i->parent )
    i->totalDuration -= v3->timer[9].totalDuration;
  v3->timer[9].parent = NULL;
  v3->timer[9].startTime = -1;
  v3->activeTimer[0].totalDuration = 0;
  v3->activeTimer[1].totalDuration = 0;
  v3->activeTimer[2].totalDuration = 0;
  v3->activeTimer[3].totalDuration = 0;
  v3->activeTimer[4].totalDuration = 0;
  v3->activeTimer[5].totalDuration = 0;
  v3->activeTimer[6].totalDuration = 0;
  v3->activeTimer[7].totalDuration = 0;
  v3->activeTimer[8].totalDuration = 0;
  v3->activeTimer[9].totalDuration = 0;
  v3->activeTimer[10].totalDuration = 0;
  v3->activeTimer[11].totalDuration = 0;
  v3->activeTimer[12].totalDuration = 0;
  v3->activeTimer[13].totalDuration = 0;
  v3->activeTimer[14].totalDuration = 0;
  v3->activeTimer[15].totalDuration = 0;
  v3->activeTimer[16].totalDuration = 0;
  v3->activeTimer[17].totalDuration = 0;
  v3->activeTimer[18].totalDuration = 0;
  v3->activeTimer[19].totalDuration = 0;
  v3->activeTimer[20].totalDuration = 0;
  v3->activeTimer[21].totalDuration = 0;
  v3->activeTimer[22].totalDuration = 0;
  v3->activeTimer[23].totalDuration = 0;
}

/*
==============
Profile_Shutdown
==============
*/
void Profile_Shutdown(void)
{
  CSVHierarchyItem *hierarchy; 
  void **p_name; 
  __int64 v2; 

  hierarchy = g_CSVThread[0].hierarchy;
  do
  {
    p_name = (void **)&hierarchy->name;
    v2 = 24i64;
    do
    {
      free(*p_name);
      p_name += 2;
      --v2;
    }
    while ( v2 );
    hierarchy = (CSVHierarchyItem *)((char *)hierarchy + 1160);
  }
  while ( (__int64)hierarchy < (__int64)&unk_14FF0ECA0 );
}

/*
==============
Profile_SortCSV
==============
*/
void Profile_SortCSV(const char *threadName, CSVProfileThread *thread)
{
  CSVProfileThread *v4; 
  __int64 v5; 
  int v6; 
  CSVProfileTimer **p_timer; 
  __int64 v8; 
  unsigned int v9; 
  CSVProfileTimer *parent; 
  unsigned int Stack; 
  unsigned int v12; 
  __int64 v13; 
  CSVProfileTimer *v14; 
  char *v15; 
  char v16; 
  __int64 v17; 
  __int64 v18; 
  char dest[512]; 

  if ( !thread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 255, ASSERT_TYPE_ASSERT, "(thread)", (const char *)&queryFormat, "thread") )
    __debugbreak();
  if ( thread->numHierarchyItems <= 0 )
  {
    v4 = thread;
    v5 = 24i64;
    do
    {
      if ( v4->timer[0].startTime && v4->timer[0].totalDuration )
        thread->hierarchy[thread->numHierarchyItems++].timer = (CSVProfileTimer *)v4;
      v4 = (CSVProfileThread *)((char *)v4 + 16);
      --v5;
    }
    while ( v5 );
    qsort(thread->hierarchy, thread->numHierarchyItems, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)R_CSV_SortHierarchy_Callback);
    v6 = 0;
    if ( thread->numHierarchyItems > 0 )
    {
      p_timer = &thread->hierarchy[0].timer;
      do
      {
        v8 = ((char *)*p_timer - (char *)thread) >> 4;
        if ( (unsigned int)v8 >= 0x18 )
        {
          LODWORD(v18) = 24;
          LODWORD(v17) = ((char *)*p_timer - (char *)thread) >> 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 277, ASSERT_TYPE_ASSERT, "(unsigned)( timerId ) < (unsigned)( CSVPROF_ENUM_COUNT )", "timerId doesn't index CSVPROF_ENUM_COUNT\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v9 = 0;
        parent = (*p_timer)->parent;
        if ( parent )
        {
          Stack = R_CSV_SortHierarchy_GetStack(NULL, 0, parent);
          v12 = Stack;
          if ( Stack >= 0x10 )
          {
            LODWORD(v18) = 16;
            LODWORD(v17) = Stack;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 201, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 16 )", "index doesn't index CSVPROF_MAX_STACK_SIZE\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          v9 = v12 + 1;
        }
        Com_sprintf(dest, 0x200ui64, "%s%*s%s", threadName, 3 * v9, (const char *)&queryFormat.fmt + 3, g_CSVNames[v8]);
        v13 = -1i64;
        do
          ++v13;
        while ( dest[v13] );
        v14 = (CSVProfileTimer *)malloc(v13 + 1);
        *(p_timer - 1) = v14;
        v15 = dest;
        do
        {
          v16 = *v15++;
          LOBYTE(v14->startTime) = v16;
          v14 = (CSVProfileTimer *)((char *)v14 + 1);
        }
        while ( v16 );
        ++v6;
        p_timer += 2;
      }
      while ( v6 < thread->numHierarchyItems );
    }
  }
}

/*
==============
Profile_WriteCSV
==============
*/
void Profile_WriteCSV(void)
{
  if ( !Com_CSVWriting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 620, ASSERT_TYPE_ASSERT, "(Com_CSVWriting())", (const char *)&queryFormat, "Com_CSVWriting()") )
    __debugbreak();
  Profile_WriteCSVThread("CPU.", &g_CSVThread[1]);
  Profile_WriteCSVThread("SV_CPU.", &g_CSVThread[2]);
  Profile_WriteCSVThread("R_CPU.", &g_CSVThread[3]);
  Profile_WriteCSVMisc();
}

/*
==============
Profile_WriteCSVMisc
==============
*/

void __fastcall Profile_WriteCSVMisc(double _XMM0_8, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  signed __int64 v4; 
  void *v7; 
  __int64 v33; 
  unsigned int v34; 
  const MemBudget_PollArray *CurrentBudgets; 
  __int64 v36; 
  const char *PollTypeName; 
  const char *v38; 
  __int64 v41; 
  const char *v42; 
  const char *v43; 
  unsigned int v49; 
  unsigned int *v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  int v57; 
  __int64 v58; 
  int v59; 
  __int64 v60; 
  int v61; 
  __int64 v62; 
  int v63; 
  __int64 v64; 
  int v65; 
  __int64 v66; 
  int v67; 
  __int64 v68; 
  int v69; 
  __int64 v85; 
  SeparateZoneTotals *v99; 
  const char **v100; 
  __int64 v101; 
  __int64 resident; 
  const char *v103; 
  AlwaysloadedTotals::PerZoneTotals *zoneTotals; 
  unsigned int i; 
  __int64 v108; 
  unsigned int ZoneFlagsFromIndex; 
  const char *ZoneNameFromIndex; 
  __int64 v111; 
  const unsigned int *v112; 
  const char *v113; 
  const char **v116; 
  unsigned __int64 *p_alwaysLoaded; 
  __int64 v118; 
  __int64 v119; 
  const char *v120; 
  int v123; 
  const char **v133; 
  const char *v135; 
  __int64 v142; 
  __int64 v143; 
  unsigned int maxCountInUse; 
  unsigned int countInUse[2]; 
  unsigned int elementSize[2]; 
  unsigned __int64 pFrameTimesUSec; 
  AlwaysloadedTotals outTotals; 
  MemBudget_PollData outPoll; 
  char v152; 

  v7 = alloca(v4);
  __asm
  {
    vmovaps [rsp+7E38h+var_38], xmm6
    vmovaps [rsp+7E38h+var_48], xmm7
  }
  maxCountInUse = 1;
  pFrameTimesUSec = 0i64;
  CG_Draw_CopyLastFrameTimesUSec(&pFrameTimesUSec, 1u);
  __asm
  {
    vmovsd  xmm7, cs:__real@43f0000000000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (pFrameTimesUSec & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, xmm7 }
  __asm { vmulsd  xmm1, xmm0, cs:__real@3eb0c6f7a0b5ed8d; value }
  Com_CSVWriteMetric("CPU.FrameTotal", *(long double *)&_XMM1);
  __asm { vmovsd  xmm6, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick }
  Com_CSVGetLastEndFrameDuration();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, eax
    vmulsd  xmm1, xmm0, xmm6
    vmulsd  xmm1, xmm1, cs:__real@3f50624de0000000; value
  }
  Com_CSVWriteMetric("CPU.Com_CSVEndFrame", *(long double *)&_XMM1);
  memset_0(s_separateZoneTotals, 0, sizeof(s_separateZoneTotals));
  s_otherSoundBankTotal = 0i64;
  s_otherMemVirtualTotal = 0i64;
  MemBudget_Poll_Oneoff(&outPoll);
  MemBudget_Poll_GetBootPoll();
  __asm
  {
    vmovsd  xmm6, cs:__real@3eb0000000000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, qword ptr [rax]
    vmulsd  xmm1, xmm0, xmm6; value
  }
  Com_CSVWriteMetric("Counters.FreeMemoryForContentMB", *(long double *)&_XMM1);
  MemBudget_Project_UpdateXB3Mem(&outPoll);
  MemBudget_Project_GetFreeXB3MemTest();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm1, xmm0, xmm6; value
  }
  Com_CSVWriteMetric("Counters.FreeXB3Test", *(long double *)&_XMM1);
  MemBudget_Project_GetFreeXB3MemShip();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm1, xmm0, xmm6; value
  }
  Com_CSVWriteMetric("Counters.FreeXB3Ship", *(long double *)&_XMM1);
  Sys_ForEachSysMemAllocator((void (__fastcall *)(const char *, unsigned __int64))Profile_ReportSystemAllocatorUsage);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (Mem_Paged_GetTotalPhysicalSize() & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, xmm7 }
  __asm { vmulsd  xmm1, xmm0, xmm6; value }
  Com_CSVWriteMetric("Counters.TotalPagedPhysicalSize", *(long double *)&_XMM1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (Mem_Paged_GetDevMemorySize() & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, xmm7 }
  __asm { vmulsd  xmm1, xmm0, xmm6; value }
  Com_CSVWriteMetric("Counters.DevMemorySize", *(long double *)&_XMM1);
  PMem_ForEachPMemStackSize((void (__fastcall *)(const char *, unsigned __int64))Profile_ReportPMemStackUsage);
  v33 = 0i64;
  v34 = 0;
  CurrentBudgets = MemBudget_BudgetFile_GetCurrentBudgets();
  do
  {
    v36 = outPoll.readings.pollValues[v34];
    PollTypeName = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)v34);
    v38 = j_va("Counters.BudgetUsage.%s", PollTypeName);
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 329, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rdi
      vmulsd  xmm1, xmm0, xmm6; value
    }
    Com_CSVWriteMetric(v38, *(long double *)&_XMM1);
    v41 = CurrentBudgets->pollValues[(unsigned __int8)v34];
    if ( v41 )
    {
      v42 = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)v34);
      v43 = j_va("Counters.BudgetUsage.%s.Budget", v42);
      if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 329, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rbp
        vmulsd  xmm1, xmm0, xmm6; value
      }
      Com_CSVWriteMetric(v43, *(long double *)&_XMM1);
      if ( v36 > v41 )
        v33 += v36 - v41;
    }
    ++v34;
  }
  while ( v34 < 0x26 );
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, r15
    vmulsd  xmm1, xmm0, xmm6; value
  }
  Com_CSVWriteMetric("Counters.BudgetUsage.TotalOverBudget", *(long double *)&_XMM1);
  v49 = maxCountInUse;
  v50 = &outPoll.zoneSizes.devPatchSavings[1];
  v51 = 0i64;
  v52 = 0i64;
  v53 = 0i64;
  v54 = 4i64;
  do
  {
    v55 = *(v50 - 35);
    if ( (v49 & 0xFF000) != 0 )
    {
      v53 += v55;
    }
    else if ( (v49 & 0x3F00000) != 0 )
    {
      v52 += v55;
    }
    else
    {
      v51 += v55 + *(v50 - 1);
    }
    v56 = *(v50 - 34);
    v57 = __ROL4__(v49, 1);
    if ( (v57 & 0xFF000) != 0 )
    {
      v53 += v56;
    }
    else if ( (v57 & 0x3F00000) != 0 )
    {
      v52 += v56;
    }
    else
    {
      v51 += v56 + *v50;
    }
    v58 = *(v50 - 33);
    v59 = __ROL4__(v49, 2);
    if ( (v59 & 0xFF000) != 0 )
    {
      v53 += v58;
    }
    else if ( (v59 & 0x3F00000) != 0 )
    {
      v52 += v58;
    }
    else
    {
      v51 += v58 + v50[1];
    }
    v60 = *(v50 - 32);
    v61 = __ROL4__(v49, 3);
    if ( (v61 & 0xFF000) != 0 )
    {
      v53 += v60;
    }
    else if ( (v61 & 0x3F00000) != 0 )
    {
      v52 += v60;
    }
    else
    {
      v51 += v60 + v50[2];
    }
    v62 = *(v50 - 31);
    v63 = __ROL4__(v49, 4);
    if ( (v63 & 0xFF000) != 0 )
    {
      v53 += v62;
    }
    else if ( (v63 & 0x3F00000) != 0 )
    {
      v52 += v62;
    }
    else
    {
      v51 += v62 + v50[3];
    }
    v64 = *(v50 - 30);
    v65 = __ROL4__(v49, 5);
    if ( (v65 & 0xFF000) != 0 )
    {
      v53 += v64;
    }
    else if ( (v65 & 0x3F00000) != 0 )
    {
      v52 += v64;
    }
    else
    {
      v51 += v64 + v50[4];
    }
    v66 = *(v50 - 29);
    v67 = __ROL4__(v49, 6);
    if ( (v67 & 0xFF000) != 0 )
    {
      v53 += v66;
    }
    else if ( (v67 & 0x3F00000) != 0 )
    {
      v52 += v66;
    }
    else
    {
      v51 += v66 + v50[5];
    }
    v68 = *(v50 - 28);
    v69 = __ROL4__(v49, 7);
    if ( (v69 & 0xFF000) != 0 )
    {
      v53 += v68;
    }
    else if ( (v69 & 0x3F00000) != 0 )
    {
      v52 += v68;
    }
    else
    {
      v51 += v68 + v50[6];
    }
    v50 += 8;
    v49 = __ROL4__(v49, 8);
    --v54;
  }
  while ( v54 );
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rdx
    vmulsd  xmm1, xmm0, xmm6; value
  }
  Com_CSVWriteMetric("Counters.Fastfiles.Regular", *(long double *)&_XMM1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rdi
    vmulsd  xmm1, xmm0, xmm6; value
  }
  Com_CSVWriteMetric("Counters.Fastfiles.Transient", *(long double *)&_XMM1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rbx
    vmulsd  xmm1, xmm0, xmm6; value
  }
  Com_CSVWriteMetric("Counters.Fastfiles.Preload", *(long double *)&_XMM1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, [rsp+7E38h+outPoll.readings.pollValues+0A8h]
    vmulsd  xmm1, xmm0, xmm6; value
  }
  Com_CSVWriteMetric("Counters.Fastfiles.Dev", *(long double *)&_XMM1);
  __asm
  {
    vpxor   xmm2, xmm2, xmm2
    vpxor   xmm3, xmm3, xmm3
  }
  _RAX = outPoll.zoneSizes.devPatchSavings;
  v85 = 8i64;
  do
  {
    __asm { vmovq   xmm0, qword ptr [rax] }
    _RAX += 4;
    __asm
    {
      vpmovzxdq xmm1, xmm0
      vmovq   xmm0, qword ptr [rax-8]
      vpaddq  xmm2, xmm1, xmm2
      vpmovzxdq xmm1, xmm0
      vpaddq  xmm3, xmm1, xmm3
    }
    --v85;
  }
  while ( v85 );
  __asm
  {
    vpaddq  xmm1, xmm3, xmm2
    vpsrldq xmm0, xmm1, 8
    vpaddq  xmm1, xmm1, xmm0
    vmovq   rax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm1, xmm0, xmm6; value
  }
  Com_CSVWriteMetric("Counters.Fastfiles.DevPatchSavings", *(long double *)&_XMM1);
  DB_Zones_ForEachZone((void (__fastcall *)(const char *, unsigned int, unsigned __int64))Profile_ReportZoneUsage);
  *(_QWORD *)elementSize = SEPARATE_COLUMN_ZONE_NAMES;
  v99 = s_separateZoneTotals;
  v100 = (const char **)SEPARATE_COLUMN_ZONE_NAMES;
  *(_QWORD *)countInUse = 7i64;
  v101 = 7i64;
  do
  {
    resident = v99->resident;
    v103 = j_va("Counters.ResidentSize.%s", *v100);
    if ( !v103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 312, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rbx
    }
    if ( resident < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm7 }
    __asm { vmulsd  xmm1, xmm0, xmm6; value }
    Com_CSVWriteMetric(v103, *(long double *)&_XMM1);
    ++v99;
    ++v100;
    --v101;
  }
  while ( v101 );
  DB_StreamingInfo_GetLastGoodAlwaysloadedTotals(&outTotals);
  zoneTotals = outTotals.zoneTotals;
  for ( i = 0; i < 0x7A4; ++i )
  {
    if ( DB_Zones_IsValidZoneIndex(i) )
    {
      v108 = zoneTotals->images + zoneTotals->modelSurfs;
      if ( (_DWORD)v108 )
      {
        ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(i);
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(i);
        if ( !ZoneNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 352, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
          __debugbreak();
        v111 = 0i64;
        v112 = SEPARATE_COLUMN_ZONE_FLAGS;
        do
        {
          if ( (ZoneFlagsFromIndex & *v112) != 0 )
          {
            s_separateZoneTotals[v111].alwaysLoaded += v108;
            goto LABEL_83;
          }
          v111 = (unsigned int)(v111 + 1);
          ++v112;
        }
        while ( (unsigned int)v111 < 7 );
        v113 = j_va("Counters.StreamAlwaysLoaded.%s", ZoneNameFromIndex);
        if ( !v113 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 320, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
          __debugbreak();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, rbx
          vmulsd  xmm1, xmm0, xmm6; value
        }
        if ( !Com_CSVWriteMetricChecked(v113, *(long double *)&_XMM1) )
          s_separateZoneTotals[6].alwaysLoaded += v108;
      }
    }
LABEL_83:
    ++zoneTotals;
  }
  v116 = *(const char ***)elementSize;
  p_alwaysLoaded = &s_separateZoneTotals[0].alwaysLoaded;
  v118 = *(_QWORD *)countInUse;
  do
  {
    v119 = *p_alwaysLoaded;
    v120 = j_va("Counters.StreamAlwaysLoaded.%s", *v116);
    if ( !v120 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 312, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rbx
    }
    if ( v119 < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm7 }
    __asm { vmulsd  xmm1, xmm0, xmm6; value }
    Com_CSVWriteMetric(v120, *(long double *)&_XMM1);
    p_alwaysLoaded += 2;
    ++v116;
    --v118;
  }
  while ( v118 );
  SD_ForEachAllocation((void (__fastcall *)(const char *, unsigned __int64))Profile_ReportSDUsage);
  v123 = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (s_otherSoundBankTotal & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, xmm7 }
  __asm { vmulsd  xmm1, xmm0, xmm6; value }
  Com_CSVWriteMetric("Counters.SoundSize.other", *(long double *)&_XMM1);
  Mem_Virtual_ForEachVirtualAlloc((void (__fastcall *)(const char *, unsigned __int64))Profile_ReportVirtualUsage);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (s_otherMemVirtualTotal & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, xmm7 }
  __asm { vmulsd  xmm1, xmm0, xmm6; value }
  Com_CSVWriteMetric("Counters.MemVirtual.other", *(long double *)&_XMM1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (Mem_Virtual_GetCommitSize() & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, xmm7 }
  __asm { vmulsd  xmm1, xmm0, xmm6; value }
  Com_CSVWriteMetric("Counters.MemVirtual.TotalCommitSize", *(long double *)&_XMM1);
  v133 = (const char **)g_assetNames;
  do
  {
    DB_GetPoolUtilization((const XAssetType)v123, elementSize, countInUse, &maxCountInUse);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2sd xmm6, xmm6, rax
    }
    if ( (unsigned int)v123 >= 0x71 )
    {
      LODWORD(v143) = 113;
      LODWORD(v142) = v123;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v142, v143) )
        __debugbreak();
    }
    v135 = j_va("Counters.AssetPools.%s", *v133);
    __asm { vmovaps xmm1, xmm6; value }
    Com_CSVWriteMetric(v135, *(long double *)&_XMM1);
    ++v123;
    ++v133;
  }
  while ( v123 < 113 );
  DB_AssetUsage_GetMaxAssetEntriesUsed();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax; value
  }
  Com_CSVWriteMetric("Counters.AssetPools.AssetEntries", *(long double *)&_XMM1);
  _R11 = &v152;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Profile_WriteCSVThread
==============
*/
void Profile_WriteCSVThread(const char *threadName, CSVProfileThread *thread)
{
  int v5; 
  CSVHierarchyItem *hierarchy; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  Profile_SortCSV(threadName, thread);
  __asm { vmovsd  xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick }
  v5 = 0;
  __asm
  {
    vcvtpd2ps xmm0, xmm0
    vmulss  xmm6, xmm0, cs:__real@3a83126f
  }
  if ( thread->numHierarchyItems > 0 )
  {
    hierarchy = thread->hierarchy;
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
        vmulss  xmm1, xmm0, xmm6
        vcvtss2sd xmm1, xmm1, xmm1; value
      }
      Com_CSVWriteMetric(hierarchy->name, *(long double *)&_XMM1);
      ++v5;
      ++hierarchy;
    }
    while ( v5 < thread->numHierarchyItems );
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
Profile_WriteMemoryMetricUnsigned
==============
*/
void Profile_WriteMemoryMetricUnsigned(const char *const name, const unsigned __int64 size)
{
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 312, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rbx
  }
  if ( (size & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm { vmulsd  xmm1, xmm0, cs:__real@3eb0000000000000; value }
  Com_CSVWriteMetric(name, *(long double *)&_XMM1);
}

/*
==============
Profile_WriteMemoryMetricUnsignedChecked
==============
*/
bool Profile_WriteMemoryMetricUnsignedChecked(const char *const name, const unsigned __int64 size)
{
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 320, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rbx
  }
  if ( (size & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm { vmulsd  xmm1, xmm0, cs:__real@3eb0000000000000; value }
  return Com_CSVWriteMetricChecked(name, *(long double *)&_XMM1);
}

/*
==============
R_CSV_SortHierarchy_Callback
==============
*/
__int64 R_CSV_SortHierarchy_Callback(const void *a, const void *b)
{
  __int64 v4; 
  int v5; 
  CSVProfileTimer *v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  CSVProfileTimer *v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  __int64 i; 
  CSVProfileTimer *v16; 
  CSVProfileTimer *v17; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  CSVProfileTimer *stack[16]; 
  CSVProfileTimer *v24[16]; 

  memset_0(stack, 0, sizeof(stack));
  memset_0(v24, 0, sizeof(v24));
  v4 = *((_QWORD *)a + 1);
  v5 = 0;
  v6 = *(CSVProfileTimer **)(v4 + 8);
  if ( v6 )
  {
    v7 = R_CSV_SortHierarchy_GetStack(stack, 0, v6);
    v8 = v7;
    if ( (unsigned int)v7 >= 0x10 )
    {
      v22 = 16;
      v20 = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 201, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 16 )", "index doesn't index CSVPROF_MAX_STACK_SIZE\n\t%i not in [0, %i)", v20, v22) )
        __debugbreak();
    }
    stack[v8] = *(CSVProfileTimer **)(v4 + 8);
    v5 = v8 + 1;
  }
  v9 = *((_QWORD *)b + 1);
  v10 = 0;
  v11 = *(CSVProfileTimer **)(v9 + 8);
  if ( v11 )
  {
    v12 = R_CSV_SortHierarchy_GetStack(v24, 0, v11);
    v13 = v12;
    if ( (unsigned int)v12 >= 0x10 )
    {
      LODWORD(v21) = 16;
      LODWORD(v19) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 201, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 16 )", "index doesn't index CSVPROF_MAX_STACK_SIZE\n\t%i not in [0, %i)", v19, v21) )
        __debugbreak();
    }
    v24[v13] = *(CSVProfileTimer **)(v9 + 8);
    v10 = v13 + 1;
  }
  v14 = 0;
  if ( (v5 == 0) == v10 )
    return (unsigned int)(**((_DWORD **)a + 1) - **((_DWORD **)b + 1));
  for ( i = 0i64; i != v5; ++i )
  {
    if ( i == v10 )
      return 1i64;
    v16 = stack[i];
    v17 = v24[i];
    if ( v16 != v17 )
      return v16->startTime - v17->startTime;
    if ( (++v14 == v5) == v10 )
      return (unsigned int)(**((_DWORD **)a + 1) - **((_DWORD **)b + 1));
  }
  return 0xFFFFFFFFi64;
}

/*
==============
R_CSV_SortHierarchy_GetStack
==============
*/
__int64 R_CSV_SortHierarchy_GetStack(CSVProfileTimer **stack, int index, CSVProfileTimer *item)
{
  CSVProfileTimer *parent; 
  int v6; 
  __int64 v7; 

  parent = item->parent;
  if ( !parent )
    return (unsigned int)index;
  v6 = R_CSV_SortHierarchy_GetStack(stack, index, parent);
  v7 = v6;
  if ( (unsigned int)v6 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 201, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 16 )", "index doesn't index CSVPROF_MAX_STACK_SIZE\n\t%i not in [0, %i)", v6, 16) )
    __debugbreak();
  if ( stack )
    stack[v7] = item->parent;
  return (unsigned int)(v7 + 1);
}

