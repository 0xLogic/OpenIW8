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
  CSVProfileThread *v4; 
  CSVProfileTimer *activeTimer; 
  __m256i v6; 
  CSVProfileTimer v7; 
  CSVProfileTimer *i; 

  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  *(_DWORD *)(v1 + 1072) = threadId;
  *(_QWORD *)(v1 + 1080) = 0i64;
  v2 = 3i64;
  v3 = &g_CSVThread[*(int *)(v1 + 1072)];
  v4 = v3;
  activeTimer = v3->activeTimer;
  do
  {
    v4 = (CSVProfileThread *)((char *)v4 + 128);
    v6 = *(__m256i *)&activeTimer->startTime;
    v7 = activeTimer[7];
    activeTimer += 8;
    *(__m256i *)&v4[-1].hierarchy[16].timer = v6;
    *(__m256i *)&v4[-1].hierarchy[18].timer = *(__m256i *)&activeTimer[-6].startTime;
    *(__m256i *)&v4[-1].hierarchy[20].timer = *(__m256i *)&activeTimer[-4].startTime;
    *(CSVProfileTimer *)&v4[-1].hierarchy[22].timer = activeTimer[-2];
    *(CSVProfileTimer *)&v4[-1].hierarchy[23].timer = v7;
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

void __fastcall Profile_WriteCSVMisc(__int64 a1, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  signed __int64 v4; 
  void *v5; 
  double v8; 
  __int64 v21; 
  unsigned int v22; 
  const MemBudget_PollArray *CurrentBudgets; 
  __int64 v24; 
  const char *PollTypeName; 
  const char *v26; 
  __int64 v29; 
  const char *v30; 
  const char *v31; 
  unsigned int v36; 
  unsigned int *v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  int v44; 
  __int64 v45; 
  int v46; 
  __int64 v47; 
  int v48; 
  __int64 v49; 
  int v50; 
  __int64 v51; 
  int v52; 
  __int64 v53; 
  int v54; 
  __int64 v55; 
  int v56; 
  unsigned int *devPatchSavings; 
  __int64 v68; 
  SeparateZoneTotals *v80; 
  const char **v81; 
  __int64 v82; 
  __int64 resident; 
  const char *v84; 
  AlwaysloadedTotals::PerZoneTotals *zoneTotals; 
  unsigned int i; 
  __int64 v89; 
  unsigned int ZoneFlagsFromIndex; 
  const char *ZoneNameFromIndex; 
  __int64 v92; 
  const unsigned int *v93; 
  const char *v94; 
  const char **v97; 
  unsigned __int64 *p_alwaysLoaded; 
  __int64 v99; 
  __int64 v100; 
  const char *v101; 
  int v104; 
  const char **v111; 
  const char *v114; 
  __int64 v117; 
  __int64 v118; 
  unsigned int maxCountInUse; 
  unsigned int countInUse[2]; 
  unsigned int elementSize[2]; 
  unsigned __int64 pFrameTimesUSec; 
  AlwaysloadedTotals outTotals; 
  MemBudget_PollData outPoll; 

  v5 = alloca(v4);
  maxCountInUse = 1;
  pFrameTimesUSec = 0i64;
  CG_Draw_CopyLastFrameTimesUSec(&pFrameTimesUSec, 1u);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (pFrameTimesUSec & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_CSVWriteMetric("CPU.FrameTotal", *(double *)&_XMM0 * 0.000001);
  v8 = msecPerRawTimerTick;
  Com_CSVGetLastEndFrameDuration();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, eax }
  Com_CSVWriteMetric("CPU.Com_CSVEndFrame", *(double *)&_XMM0 * v8 * 0.001000000047497451);
  memset_0(s_separateZoneTotals, 0, sizeof(s_separateZoneTotals));
  s_otherSoundBankTotal = 0i64;
  s_otherMemVirtualTotal = 0i64;
  MemBudget_Poll_Oneoff(&outPoll);
  MemBudget_Poll_GetBootPoll();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, qword ptr [rax] }
  Com_CSVWriteMetric("Counters.FreeMemoryForContentMB", *(double *)&_XMM0 * 0.00000095367431640625);
  MemBudget_Project_UpdateXB3Mem(&outPoll);
  MemBudget_Project_GetFreeXB3MemTest();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  Com_CSVWriteMetric("Counters.FreeXB3Test", *(double *)&_XMM0 * 0.00000095367431640625);
  MemBudget_Project_GetFreeXB3MemShip();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  Com_CSVWriteMetric("Counters.FreeXB3Ship", *(double *)&_XMM0 * 0.00000095367431640625);
  Sys_ForEachSysMemAllocator((void (__fastcall *)(const char *, unsigned __int64))Profile_ReportSystemAllocatorUsage);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Mem_Paged_GetTotalPhysicalSize() & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_CSVWriteMetric("Counters.TotalPagedPhysicalSize", *(double *)&_XMM0 * 0.00000095367431640625);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Mem_Paged_GetDevMemorySize() & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_CSVWriteMetric("Counters.DevMemorySize", *(double *)&_XMM0 * 0.00000095367431640625);
  PMem_ForEachPMemStackSize((void (__fastcall *)(const char *, unsigned __int64))Profile_ReportPMemStackUsage);
  v21 = 0i64;
  v22 = 0;
  CurrentBudgets = MemBudget_BudgetFile_GetCurrentBudgets();
  do
  {
    v24 = outPoll.readings.pollValues[v22];
    PollTypeName = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)v22);
    v26 = j_va("Counters.BudgetUsage.%s", PollTypeName);
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 329, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rdi }
    Com_CSVWriteMetric(v26, *(double *)&_XMM0 * 0.00000095367431640625);
    v29 = CurrentBudgets->pollValues[(unsigned __int8)v22];
    if ( v29 )
    {
      v30 = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)v22);
      v31 = j_va("Counters.BudgetUsage.%s.Budget", v30);
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 329, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
        __debugbreak();
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rbp }
      Com_CSVWriteMetric(v31, *(double *)&_XMM0 * 0.00000095367431640625);
      if ( v24 > v29 )
        v21 += v24 - v29;
    }
    ++v22;
  }
  while ( v22 < 0x26 );
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, r15 }
  Com_CSVWriteMetric("Counters.BudgetUsage.TotalOverBudget", *(double *)&_XMM0 * 0.00000095367431640625);
  v36 = maxCountInUse;
  v37 = &outPoll.zoneSizes.devPatchSavings[1];
  v38 = 0i64;
  v39 = 0i64;
  v40 = 0i64;
  v41 = 4i64;
  do
  {
    v42 = *(v37 - 35);
    if ( (v36 & 0xFF000) != 0 )
    {
      v40 += v42;
    }
    else if ( (v36 & 0x3F00000) != 0 )
    {
      v39 += v42;
    }
    else
    {
      v38 += v42 + *(v37 - 1);
    }
    v43 = *(v37 - 34);
    v44 = __ROL4__(v36, 1);
    if ( (v44 & 0xFF000) != 0 )
    {
      v40 += v43;
    }
    else if ( (v44 & 0x3F00000) != 0 )
    {
      v39 += v43;
    }
    else
    {
      v38 += v43 + *v37;
    }
    v45 = *(v37 - 33);
    v46 = __ROL4__(v36, 2);
    if ( (v46 & 0xFF000) != 0 )
    {
      v40 += v45;
    }
    else if ( (v46 & 0x3F00000) != 0 )
    {
      v39 += v45;
    }
    else
    {
      v38 += v45 + v37[1];
    }
    v47 = *(v37 - 32);
    v48 = __ROL4__(v36, 3);
    if ( (v48 & 0xFF000) != 0 )
    {
      v40 += v47;
    }
    else if ( (v48 & 0x3F00000) != 0 )
    {
      v39 += v47;
    }
    else
    {
      v38 += v47 + v37[2];
    }
    v49 = *(v37 - 31);
    v50 = __ROL4__(v36, 4);
    if ( (v50 & 0xFF000) != 0 )
    {
      v40 += v49;
    }
    else if ( (v50 & 0x3F00000) != 0 )
    {
      v39 += v49;
    }
    else
    {
      v38 += v49 + v37[3];
    }
    v51 = *(v37 - 30);
    v52 = __ROL4__(v36, 5);
    if ( (v52 & 0xFF000) != 0 )
    {
      v40 += v51;
    }
    else if ( (v52 & 0x3F00000) != 0 )
    {
      v39 += v51;
    }
    else
    {
      v38 += v51 + v37[4];
    }
    v53 = *(v37 - 29);
    v54 = __ROL4__(v36, 6);
    if ( (v54 & 0xFF000) != 0 )
    {
      v40 += v53;
    }
    else if ( (v54 & 0x3F00000) != 0 )
    {
      v39 += v53;
    }
    else
    {
      v38 += v53 + v37[5];
    }
    v55 = *(v37 - 28);
    v56 = __ROL4__(v36, 7);
    if ( (v56 & 0xFF000) != 0 )
    {
      v40 += v55;
    }
    else if ( (v56 & 0x3F00000) != 0 )
    {
      v39 += v55;
    }
    else
    {
      v38 += v55 + v37[6];
    }
    v37 += 8;
    v36 = __ROL4__(v36, 8);
    --v41;
  }
  while ( v41 );
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rdx }
  Com_CSVWriteMetric("Counters.Fastfiles.Regular", *(double *)&_XMM0 * 0.00000095367431640625);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rdi }
  Com_CSVWriteMetric("Counters.Fastfiles.Transient", *(double *)&_XMM0 * 0.00000095367431640625);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rbx }
  Com_CSVWriteMetric("Counters.Fastfiles.Preload", *(double *)&_XMM0 * 0.00000095367431640625);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, [rsp+7E38h+outPoll.readings.pollValues+0A8h] }
  Com_CSVWriteMetric("Counters.Fastfiles.Dev", *(double *)&_XMM0 * 0.00000095367431640625);
  __asm
  {
    vpxor   xmm2, xmm2, xmm2
    vpxor   xmm3, xmm3, xmm3
  }
  devPatchSavings = outPoll.zoneSizes.devPatchSavings;
  v68 = 8i64;
  do
  {
    _XMM0 = *(unsigned __int64 *)devPatchSavings;
    devPatchSavings += 4;
    __asm { vpmovzxdq xmm1, xmm0 }
    _XMM0 = *((unsigned __int64 *)devPatchSavings - 1);
    __asm
    {
      vpaddq  xmm2, xmm1, xmm2
      vpmovzxdq xmm1, xmm0
      vpaddq  xmm3, xmm1, xmm3
    }
    --v68;
  }
  while ( v68 );
  __asm
  {
    vpaddq  xmm1, xmm3, xmm2
    vpsrldq xmm0, xmm1, 8
    vpaddq  xmm1, xmm1, xmm0
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  Com_CSVWriteMetric("Counters.Fastfiles.DevPatchSavings", *(double *)&_XMM0 * 0.00000095367431640625);
  DB_Zones_ForEachZone((void (__fastcall *)(const char *, unsigned int, unsigned __int64))Profile_ReportZoneUsage);
  *(_QWORD *)elementSize = SEPARATE_COLUMN_ZONE_NAMES;
  v80 = s_separateZoneTotals;
  v81 = (const char **)SEPARATE_COLUMN_ZONE_NAMES;
  *(_QWORD *)countInUse = 7i64;
  v82 = 7i64;
  do
  {
    resident = v80->resident;
    v84 = j_va("Counters.ResidentSize.%s", *v81);
    if ( !v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 312, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rbx }
    if ( resident < 0 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    Com_CSVWriteMetric(v84, *(double *)&_XMM0 * 0.00000095367431640625);
    ++v80;
    ++v81;
    --v82;
  }
  while ( v82 );
  DB_StreamingInfo_GetLastGoodAlwaysloadedTotals(&outTotals);
  zoneTotals = outTotals.zoneTotals;
  for ( i = 0; i < 0x7A4; ++i )
  {
    if ( DB_Zones_IsValidZoneIndex(i) )
    {
      v89 = zoneTotals->images + zoneTotals->modelSurfs;
      if ( (_DWORD)v89 )
      {
        ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(i);
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(i);
        if ( !ZoneNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 352, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
          __debugbreak();
        v92 = 0i64;
        v93 = SEPARATE_COLUMN_ZONE_FLAGS;
        do
        {
          if ( (ZoneFlagsFromIndex & *v93) != 0 )
          {
            s_separateZoneTotals[v92].alwaysLoaded += v89;
            goto LABEL_83;
          }
          v92 = (unsigned int)(v92 + 1);
          ++v93;
        }
        while ( (unsigned int)v92 < 7 );
        v94 = j_va("Counters.StreamAlwaysLoaded.%s", ZoneNameFromIndex);
        if ( !v94 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 320, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
          __debugbreak();
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, rbx }
        if ( !Com_CSVWriteMetricChecked(v94, *(double *)&_XMM0 * 0.00000095367431640625) )
          s_separateZoneTotals[6].alwaysLoaded += v89;
      }
    }
LABEL_83:
    ++zoneTotals;
  }
  v97 = *(const char ***)elementSize;
  p_alwaysLoaded = &s_separateZoneTotals[0].alwaysLoaded;
  v99 = *(_QWORD *)countInUse;
  do
  {
    v100 = *p_alwaysLoaded;
    v101 = j_va("Counters.StreamAlwaysLoaded.%s", *v97);
    if ( !v101 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_csv.cpp", 312, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rbx }
    if ( v100 < 0 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    Com_CSVWriteMetric(v101, *(double *)&_XMM0 * 0.00000095367431640625);
    p_alwaysLoaded += 2;
    ++v97;
    --v99;
  }
  while ( v99 );
  SD_ForEachAllocation((void (__fastcall *)(const char *, unsigned __int64))Profile_ReportSDUsage);
  v104 = 0;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (s_otherSoundBankTotal & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_CSVWriteMetric("Counters.SoundSize.other", *(double *)&_XMM0 * 0.00000095367431640625);
  Mem_Virtual_ForEachVirtualAlloc((void (__fastcall *)(const char *, unsigned __int64))Profile_ReportVirtualUsage);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (s_otherMemVirtualTotal & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_CSVWriteMetric("Counters.MemVirtual.other", *(double *)&_XMM0 * 0.00000095367431640625);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Mem_Virtual_GetCommitSize() & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_CSVWriteMetric("Counters.MemVirtual.TotalCommitSize", *(double *)&_XMM0 * 0.00000095367431640625);
  v111 = (const char **)g_assetNames;
  do
  {
    DB_GetPoolUtilization((const XAssetType)v104, elementSize, countInUse, &maxCountInUse);
    _XMM6 = 0i64;
    __asm { vcvtsi2sd xmm6, xmm6, rax }
    if ( (unsigned int)v104 >= 0x71 )
    {
      LODWORD(v118) = 113;
      LODWORD(v117) = v104;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v117, v118) )
        __debugbreak();
    }
    v114 = j_va("Counters.AssetPools.%s", *v111);
    Com_CSVWriteMetric(v114, *(long double *)&_XMM6);
    ++v104;
    ++v111;
  }
  while ( v104 < 113 );
  DB_AssetUsage_GetMaxAssetEntriesUsed();
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax; value }
  Com_CSVWriteMetric("Counters.AssetPools.AssetEntries", *(long double *)&_XMM1);
}

/*
==============
Profile_WriteCSVThread
==============
*/
void Profile_WriteCSVThread(const char *threadName, CSVProfileThread *thread)
{
  int v4; 
  CSVHierarchyItem *hierarchy; 
  float totalDuration; 

  Profile_SortCSV(threadName, thread);
  _XMM0 = *(unsigned __int64 *)&msecPerRawTimerTick;
  v4 = 0;
  __asm { vcvtpd2ps xmm0, xmm0 }
  if ( thread->numHierarchyItems > 0 )
  {
    hierarchy = thread->hierarchy;
    do
    {
      totalDuration = (float)hierarchy->timer->totalDuration;
      Com_CSVWriteMetric(hierarchy->name, (float)(totalDuration * (float)(*(float *)&_XMM0 * 0.001)));
      ++v4;
      ++hierarchy;
    }
    while ( v4 < thread->numHierarchyItems );
  }
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
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rbx }
  if ( (size & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_CSVWriteMetric(name, *(double *)&_XMM0 * 0.00000095367431640625);
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
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rbx }
  if ( (size & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  return Com_CSVWriteMetricChecked(name, *(double *)&_XMM0 * 0.00000095367431640625);
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

