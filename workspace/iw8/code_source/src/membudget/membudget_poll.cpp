/*
==============
MemBudget_Poll_CalcFreeMemAfterBudgets
==============
*/

__int64 __fastcall MemBudget_Poll_CalcFreeMemAfterBudgets(const MemBudget_PollArray *nowPoll, const MemBudget_PollArray *bootPoll, const MemBudget_PollArray *budgets)
{
  return ?MemBudget_Poll_CalcFreeMemAfterBudgets@@YA_JAEBUMemBudget_PollArray@@00@Z(nowPoll, bootPoll, budgets);
}

/*
==============
MemBudget_Poll_CheckBootTimePoll
==============
*/

void MemBudget_Poll_CheckBootTimePoll(void)
{
  ?MemBudget_Poll_CheckBootTimePoll@@YAXXZ();
}

/*
==============
Membudget_GetTAStreamerMem
==============
*/

void __fastcall Membudget_GetTAStreamerMem(unsigned __int64 *outFreeMem, unsigned __int64 *outUsedMem)
{
  ?Membudget_GetTAStreamerMem@@YAXAEA_K0@Z(outFreeMem, outUsedMem);
}

/*
==============
MemBudget_Poll_Update
==============
*/

void MemBudget_Poll_Update(void)
{
  ?MemBudget_Poll_Update@@YAXXZ();
}

/*
==============
MemBudget_Poll_FramesSinceLastUpdate
==============
*/

unsigned int __fastcall MemBudget_Poll_FramesSinceLastUpdate()
{
  return ?MemBudget_Poll_FramesSinceLastUpdate@@YAIXZ();
}

/*
==============
MemBudget_Poll_GetParentPollType
==============
*/

MemBudget_PollType __fastcall MemBudget_Poll_GetParentPollType(MemBudget_PollType pollType)
{
  return ?MemBudget_Poll_GetParentPollType@@YA?AW4MemBudget_PollType@@W41@@Z(pollType);
}

/*
==============
MemBudget_Poll_GetBootPoll
==============
*/

const MemBudget_PollArray *__fastcall MemBudget_Poll_GetBootPoll()
{
  return ?MemBudget_Poll_GetBootPoll@@YAAEBUMemBudget_PollArray@@XZ();
}

/*
==============
MemBudget_Poll_CalcFreeMem
==============
*/

__int64 __fastcall MemBudget_Poll_CalcFreeMem(const MemBudget_PollArray *nowPoll, const MemBudget_PollArray *bootPoll)
{
  return ?MemBudget_Poll_CalcFreeMem@@YA_JAEBUMemBudget_PollArray@@0@Z(nowPoll, bootPoll);
}

/*
==============
MemBudget_Poll_UseBootValueForBudget
==============
*/

bool __fastcall MemBudget_Poll_UseBootValueForBudget(MemBudget_PollType pollType)
{
  return ?MemBudget_Poll_UseBootValueForBudget@@YA_NW4MemBudget_PollType@@@Z(pollType);
}

/*
==============
MemBudget_Poll_Dump
==============
*/

void __fastcall MemBudget_Poll_Dump(bool dumpFromFatalError)
{
  ?MemBudget_Poll_Dump@@YAX_N@Z(dumpFromFatalError);
}

/*
==============
MemBudget_Poll_Oneoff
==============
*/

void __fastcall MemBudget_Poll_Oneoff(MemBudget_PollData *outPoll)
{
  ?MemBudget_Poll_Oneoff@@YAXAEAUMemBudget_PollData@@@Z(outPoll);
}

/*
==============
MemBudget_Poll_GetLastUpdateForHUD
==============
*/

void __fastcall MemBudget_Poll_GetLastUpdateForHUD(MemBudget_PollData *outPoll)
{
  ?MemBudget_Poll_GetLastUpdateForHUD@@YAXAEAUMemBudget_PollData@@@Z(outPoll);
}

/*
==============
MemBudget_PollInternalLockedPortion
==============
*/
void MemBudget_PollInternalLockedPortion(MemBudget_PollData *outPoll, const bool opportuneHUDPoll)
{
  unsigned __int64 FreePhysicalSize; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 CommitSizeAlwaysLoadedBanks; 
  int TotalBankStreamBytesUsed; 
  StreamMemInfo memInfo; 

  outPoll->readings.pollValues[0] = Mem_Paged_GetFreePhysicalSize();
  outPoll->readings.pollValues[3] = XB3GetExecutableSize();
  outPoll->readings.pollValues[4] = XB3GetUntrackedMem();
  FreePhysicalSize = Mem_Paged_GetFreePhysicalSize();
  Stream_Alloc_GetMemInfo(&memInfo);
  v4 = memInfo.unused[1] + memInfo.unused[0];
  if ( FreePhysicalSize > memInfo.unused[1] + memInfo.unused[0] )
    v4 = FreePhysicalSize;
  v5 = FreePhysicalSize + Mem_Paged_GetSubPageAllocTotal();
  v6 = v4 + memInfo.generics + memInfo.images + memInfo.meshes;
  if ( v5 > v6 )
    outPoll->readings.pollValues[10] = v5 - v6;
  outPoll->readings.pollValues[6] = v5;
  outPoll->readings.pollValues[9] = v4;
  outPoll->readings.pollValues[5] = Stream_Read_GetCommitSize();
  outPoll->readings.pollValues[25] = XPak_GetCurrentWorkDataCommitSize();
  outPoll->readings.pollValues[11] = R_RT_GetCommitSize();
  outPoll->readings.pollValues[12] = Mem_Virtual_GetCommitSize();
  outPoll->readings.pollValues[13] = PMem_GetTotalCommitOnAllocSize();
  CommitSizeAlwaysLoadedBanks = SD_GetCommitSizeAlwaysLoadedBanks();
  TotalBankStreamBytesUsed = SND_GetTotalBankStreamBytesUsed();
  outPoll->readings.pollValues[32] = CommitSizeAlwaysLoadedBanks;
  outPoll->readings.pollValues[33] = TotalBankStreamBytesUsed;
  outPoll->readings.pollValues[31] = TotalBankStreamBytesUsed + CommitSizeAlwaysLoadedBanks;
  outPoll->readings.pollValues[34] = SD_GetCommitSize();
  outPoll->readings.pollValues[14] = MemCard_LargeFileBuffer_GetCommitSize();
  outPoll->readings.pollValues[15] = R_GetLightGridCommitTotal();
  outPoll->readings.pollValues[16] = R_GetLightMapCommitTotal();
  outPoll->readings.pollValues[36] = Com_EmergencyMemory_GetCurrentAllocationSize();
  outPoll->readings.pollValues[37] = XB3XMem_GetAuxMemFreeBytes();
  DB_Zones_GetFootprintSizesForBudgeting(&outPoll->zoneSizes);
  DB_StreamingInfo_GetLastGoodAlwaysloadedTotals(&outPoll->alwaysloadedTotals);
}

/*
==============
MemBudget_PollInternalUnlockedPortion
==============
*/
void MemBudget_PollInternalUnlockedPortion(MemBudget_PollData *outPoll)
{
  AlwaysloadedTotals *p_alwaysloadedTotals; 
  __int64 v2; 
  unsigned int v3; 
  MemBudget_PollArray *p_readings; 
  unsigned __int8 PollTypeFromZoneFlagIndex; 
  __int64 images; 
  unsigned __int8 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int *devPatchSavings; 
  __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  MemBudget_PollArray *v21; 
  __int64 v22; 
  const MemBudget_PollArray *CurrentBudgets; 
  __int64 v24; 
  __int64 v25; 

  p_alwaysloadedTotals = &outPoll->alwaysloadedTotals;
  v2 = 0i64;
  v3 = 0;
  p_readings = &outPoll->readings;
  do
  {
    PollTypeFromZoneFlagIndex = MemBudget_GetPollTypeFromZoneFlagIndex(v3);
    images = p_alwaysloadedTotals[-1].zoneTotals[1923].images;
    v7 = PollTypeFromZoneFlagIndex;
    if ( PollTypeFromZoneFlagIndex >= 0x26u )
    {
      LODWORD(v25) = 38;
      LODWORD(v24) = PollTypeFromZoneFlagIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( pollType ) < (unsigned)( ( sizeof( *array_counter( outArray.pollValues ) ) + 0 ) )", "pollType doesn't index ARRAY_COUNT( outArray.pollValues )\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    v8 = v7;
    p_readings->pollValues[v8] += images;
    v9 = p_alwaysloadedTotals->flagTotals[0];
    if ( v7 >= 0x26u )
    {
      LODWORD(v25) = 38;
      LODWORD(v24) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( pollType ) < (unsigned)( ( sizeof( *array_counter( outArray.pollValues ) ) + 0 ) )", "pollType doesn't index ARRAY_COUNT( outArray.pollValues )\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    p_readings->pollValues[v8] += v9;
    v10 = p_alwaysloadedTotals[-1].zoneTotals[1940].images;
    v2 += p_alwaysloadedTotals->flagTotals[0];
    if ( v7 >= 0x26u )
    {
      LODWORD(v25) = 38;
      LODWORD(v24) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( pollType ) < (unsigned)( ( sizeof( *array_counter( outArray.pollValues ) ) + 0 ) )", "pollType doesn't index ARRAY_COUNT( outArray.pollValues )\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    p_readings->pollValues[v8] += v10;
    ++v3;
    p_alwaysloadedTotals = (AlwaysloadedTotals *)((char *)p_alwaysloadedTotals + 4);
  }
  while ( v3 < 0x20 );
  v11 = outPoll->readings.pollValues[33] + v2;
  outPoll->readings.pollValues[21] += outPoll->zoneSizes.devSize;
  outPoll->readings.pollValues[23] += outPoll->zoneSizes.serverSize;
  outPoll->readings.pollValues[24] += DB_GpuTempMemCallbacks_GetTotalSize();
  devPatchSavings = outPoll->zoneSizes.devPatchSavings;
  v13 = outPoll->readings.pollValues[21];
  v14 = 0i64;
  v15 = 32i64;
  do
  {
    v16 = *devPatchSavings++;
    v13 -= v16;
    outPoll->readings.pollValues[21] = v13;
    --v15;
  }
  while ( v15 );
  v17 = outPoll->readings.pollValues[9];
  v18 = outPoll->readings.pollValues[6] - outPoll->readings.pollValues[10] - v17;
  outPoll->readings.pollValues[7] = v11;
  v19 = v18 - v11;
  if ( v19 > 0 )
    outPoll->readings.pollValues[8] = v19;
  if ( s_bootTimePollDone )
  {
    v20 = s_bootTimePoll.pollValues[0];
    v21 = &outPoll->readings;
    v22 = 0x20000003DFi64;
    while ( 1 )
    {
      if ( (unsigned __int8)v14 >= 7u )
      {
        if ( (unsigned __int8)v14 <= 9u )
          goto LABEL_23;
        if ( (_BYTE)v14 == 31 )
          goto LABEL_26;
        if ( (unsigned __int8)(v14 - 32) <= 1u )
          goto LABEL_23;
      }
      if ( _bittest64(&v22, v14) )
      {
LABEL_23:
        if ( (_BYTE)v14 == 33 )
          v20 -= v21->pollValues[0];
        goto LABEL_26;
      }
      v20 += *(__int64 *)((char *)v21->pollValues + (char *)&s_bootTimePoll - (char *)&outPoll->readings) - v21->pollValues[0];
LABEL_26:
      v14 = (unsigned int)(v14 + 1);
      v21 = (MemBudget_PollArray *)((char *)v21 + 8);
      if ( (unsigned int)v14 >= 0x26 )
      {
        outPoll->readings.pollValues[1] = v20 - outPoll->readings.pollValues[8] - v17;
        CurrentBudgets = MemBudget_BudgetFile_GetCurrentBudgets();
        outPoll->readings.pollValues[2] = MemBudget_Poll_CalcFreeMemAfterBudgets(&outPoll->readings, &s_bootTimePoll, CurrentBudgets);
        return;
      }
    }
  }
}

/*
==============
MemBudget_Poll_CalcFreeMem
==============
*/
__int64 MemBudget_Poll_CalcFreeMem(const MemBudget_PollArray *nowPoll, const MemBudget_PollArray *bootPoll)
{
  __int64 v2; 
  unsigned __int64 v3; 
  signed __int64 v4; 
  const MemBudget_PollArray *v5; 
  __int64 v6; 

  v2 = bootPoll->pollValues[0];
  v3 = 0i64;
  v4 = (char *)bootPoll - (char *)nowPoll;
  v5 = nowPoll;
  v6 = 0x20000003DFi64;
  do
  {
    if ( (unsigned __int8)v3 >= 7u )
    {
      if ( (unsigned __int8)v3 <= 9u )
        goto LABEL_7;
      if ( (_BYTE)v3 == 31 )
        goto LABEL_10;
      if ( (unsigned __int8)(v3 - 32) <= 1u )
        goto LABEL_7;
    }
    if ( _bittest64(&v6, v3) )
    {
LABEL_7:
      if ( (_BYTE)v3 == 33 )
        v2 -= v5->pollValues[0];
    }
    else
    {
      v2 += *(__int64 *)((char *)v5->pollValues + v4) - v5->pollValues[0];
    }
LABEL_10:
    v3 = (unsigned int)(v3 + 1);
    v5 = (const MemBudget_PollArray *)((char *)v5 + 8);
  }
  while ( (unsigned int)v3 < 0x26 );
  return v2;
}

/*
==============
MemBudget_Poll_CalcFreeMemAfterBudgets
==============
*/
__int64 MemBudget_Poll_CalcFreeMemAfterBudgets(const MemBudget_PollArray *nowPoll, const MemBudget_PollArray *bootPoll, const MemBudget_PollArray *budgets)
{
  __int64 v3; 
  unsigned __int64 v4; 
  const MemBudget_PollArray *v5; 
  signed __int64 v6; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  __int64 v13; 

  v3 = bootPoll->pollValues[0];
  v4 = 0i64;
  v5 = nowPoll;
  v6 = (char *)bootPoll - (char *)nowPoll;
  v8 = 0x20000003DFi64;
  do
  {
    v9 = v3;
    v10 = budgets->pollValues[(unsigned __int8)v4];
    if ( (unsigned __int8)v4 < 7u )
      goto LABEL_6;
    if ( (unsigned __int8)v4 > 9u )
    {
      if ( (_BYTE)v4 == 31 )
        goto LABEL_9;
      if ( (unsigned __int8)(v4 - 32) > 1u )
      {
LABEL_6:
        if ( !_bittest64(&v8, v4) )
        {
          v13 = *(__int64 *)((char *)v5->pollValues + v6) + v3;
          if ( v10 )
          {
            v3 = v13 - v10;
          }
          else if ( (_BYTE)v4 == 10 || (_BYTE)v4 == 24 )
          {
            v3 = v9;
          }
          else
          {
            v3 = v13 - v5->pollValues[0];
          }
          goto LABEL_29;
        }
      }
    }
    if ( (_BYTE)v4 == 33 )
    {
      v3 -= v5->pollValues[0];
      goto LABEL_29;
    }
LABEL_9:
    if ( !v10 )
      goto LABEL_29;
    if ( (unsigned __int8)v4 >= 7u )
    {
      if ( (unsigned __int8)v4 <= 9u )
      {
        v11 = 6;
        goto LABEL_17;
      }
      if ( (_BYTE)v4 == 31 )
      {
        v11 = 30;
        goto LABEL_17;
      }
      if ( (unsigned __int8)(v4 - 32) <= 1u )
      {
        v11 = 31;
LABEL_17:
        if ( MemBudget_PollArray_Get(budgets, (const MemBudget_PollType)v11) || MemBudget_Poll_HasParentBudget(budgets, (const MemBudget_PollType)v11) )
          goto LABEL_29;
      }
    }
    v12 = *(__int64 *)((char *)v5->pollValues + v6);
    if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_poll.cpp", 522, ASSERT_TYPE_ASSERT, "( bootPoll.pollValues[i] ) == ( 0 )", "%s == %s\n\t%llu, %llu", "bootPoll.pollValues[i]", "0", v12, 0i64) )
      __debugbreak();
    v3 += v5->pollValues[0] - v10;
LABEL_29:
    v4 = (unsigned int)(v4 + 1);
    v5 = (const MemBudget_PollArray *)((char *)v5 + 8);
  }
  while ( (unsigned int)v4 < 0x26 );
  return v3;
}

/*
==============
MemBudget_Poll_CheckBootTimePoll
==============
*/
void MemBudget_Poll_CheckBootTimePoll(void)
{
  __int64 v1; 
  MemBudget_PollData outPoll; 

  if ( !s_bootTimePollDone )
  {
    memset_0(&outPoll, 0, sizeof(outPoll));
    Sys_EnterCriticalSection(CRITSECT_STREAM_ALLOC);
    MemBudget_PollInternalLockedPortion(&outPoll, 0);
    Sys_LeaveCriticalSection(CRITSECT_STREAM_ALLOC);
    MemBudget_PollInternalUnlockedPortion(&outPoll);
    _RCX = &s_bootTimePoll;
    v1 = 2i64;
    _RAX = &outPoll.readings;
    do
    {
      _RCX = (MemBudget_PollArray *)((char *)_RCX + 128);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX = (MemBudget_PollArray *)((char *)_RAX + 128);
      __asm
      {
        vmovups ymmword ptr [rcx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rcx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rcx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v1;
    }
    while ( v1 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
    }
    s_bootTimePollDone = 1;
    MemBudget_ContentMemWrite_BootTime();
  }
}

/*
==============
MemBudget_Poll_Dump
==============
*/
void MemBudget_Poll_Dump(bool dumpFromFatalError)
{
  unsigned int v2; 
  unsigned int i; 
  unsigned __int64 v4; 
  const char *PollTypeName; 
  const MemBudget_PollArray *CurrentBudgets; 
  unsigned __int64 v7; 
  const char *v8; 
  unsigned __int64 v9; 
  const char *v10; 
  const char *v11; 
  MemBudget_PollData outPoll; 

  memset_0(&outPoll, 0, sizeof(outPoll));
  if ( dumpFromFatalError )
  {
    MemBudget_PollInternalLockedPortion(&outPoll, 0);
  }
  else
  {
    Sys_EnterCriticalSection(CRITSECT_STREAM_ALLOC);
    MemBudget_PollInternalLockedPortion(&outPoll, 0);
    Sys_LeaveCriticalSection(CRITSECT_STREAM_ALLOC);
  }
  MemBudget_PollInternalUnlockedPortion(&outPoll);
  Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
  Com_MemDumpPrintf("Budget Poll at Boot Time:\n");
  v2 = 0;
  for ( i = 0; i < 0x26; ++i )
  {
    v4 = s_bootTimePoll.pollValues[(unsigned __int8)i];
    PollTypeName = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)i);
    Com_MemDumpStatsLine(PollTypeName, v4);
  }
  Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
  Com_MemDumpPrintf("Last Runtime Budget Poll:\n");
  CurrentBudgets = MemBudget_BudgetFile_GetCurrentBudgets();
  do
  {
    v7 = outPoll.readings.pollValues[v2];
    v8 = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)v2);
    Com_MemDumpStatsLine(v8, v7);
    v9 = CurrentBudgets->pollValues[(unsigned __int8)v2];
    if ( v9 )
    {
      v10 = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)v2);
      v11 = j_va("%s Budget", v10);
      Com_MemDumpStatsLine(v11, v9);
    }
    ++v2;
  }
  while ( v2 < 0x26 );
  Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
}

/*
==============
MemBudget_Poll_FramesSinceLastUpdate
==============
*/
__int64 MemBudget_Poll_FramesSinceLastUpdate()
{
  return s_lastUpdateFrameCount;
}

/*
==============
MemBudget_Poll_GetBootPoll
==============
*/
MemBudget_PollArray *MemBudget_Poll_GetBootPoll()
{
  return &s_bootTimePoll;
}

/*
==============
MemBudget_Poll_GetLastUpdateForHUD
==============
*/
void MemBudget_Poll_GetLastUpdateForHUD(MemBudget_PollData *outPoll)
{
  volatile int readCount; 

  if ( s_hudPollLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_hudPollLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_hudPollLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_hudPollLock);
  while ( s_hudPollLock.writeCount )
    Sys_Sleep(0);
  memcpy_0(outPoll, &s_lastUpdatePoll, sizeof(MemBudget_PollData));
  if ( s_hudPollLock.readCount <= 0 )
  {
    readCount = s_hudPollLock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_hudPollLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_hudPollLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_hudPollLock);
}

/*
==============
MemBudget_Poll_GetParentPollType
==============
*/
char MemBudget_Poll_GetParentPollType(MemBudget_PollType pollType)
{
  if ( (unsigned __int8)pollType >= (unsigned int)(Count|0x4) )
  {
    if ( (unsigned __int8)pollType <= 9u )
      return 6;
    if ( (_BYTE)pollType == 31 )
      return 30;
    if ( (unsigned __int8)(pollType - 32) <= 1u )
      return 31;
  }
  return 38;
}

/*
==============
MemBudget_Poll_HasParentBudget
==============
*/
char MemBudget_Poll_HasParentBudget(const MemBudget_PollArray *budgets, const MemBudget_PollType pollType)
{
  unsigned __int8 v2; 

  v2 = pollType;
  while ( v2 >= 7u )
  {
    if ( v2 <= 9u )
    {
      v2 = 6;
    }
    else if ( v2 == 31 )
    {
      v2 = 30;
    }
    else
    {
      if ( (unsigned __int8)(v2 - 32) > 1u )
        return 0;
      v2 = 31;
    }
    if ( MemBudget_PollArray_Get(budgets, (const MemBudget_PollType)v2) )
      return 1;
  }
  return 0;
}

/*
==============
MemBudget_Poll_Oneoff
==============
*/
void MemBudget_Poll_Oneoff(MemBudget_PollData *outPoll)
{
  memset_0(outPoll, 0, sizeof(MemBudget_PollData));
  Sys_EnterCriticalSection(CRITSECT_STREAM_ALLOC);
  MemBudget_PollInternalLockedPortion(outPoll, 0);
  Sys_LeaveCriticalSection(CRITSECT_STREAM_ALLOC);
  MemBudget_PollInternalUnlockedPortion(outPoll);
}

/*
==============
MemBudget_Poll_Update
==============
*/
void MemBudget_Poll_Update(void)
{
  volatile int writeCount; 
  int v2; 
  TempThreadPriority tempPriority; 
  MemBudget_PollData outPoll; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_poll.cpp", 301, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  memset_0(&outPoll, 0, sizeof(outPoll));
  if ( Sys_TryEnterCriticalSection(CRITSECT_STREAM_ALLOC) )
  {
    MemBudget_PollInternalLockedPortion(&outPoll, 1);
    Sys_LeaveCriticalSection(CRITSECT_STREAM_ALLOC);
    MemBudget_PollInternalUnlockedPortion(&outPoll);
    Sys_LockWrite(&s_hudPollLock);
    memcpy_0(&s_lastUpdatePoll, &outPoll, sizeof(s_lastUpdatePoll));
    if ( s_hudPollLock.writeCount != 1 )
    {
      v2 = 1;
      writeCount = s_hudPollLock.writeCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", writeCount, v2) )
        __debugbreak();
    }
    if ( s_hudPollLock.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
      __debugbreak();
    __asm { vmovups xmm0, xmmword ptr cs:s_hudPollLock.tempPriority.threadHandle }
    s_hudPollLock.writeThreadId = 0;
    __asm { vmovups xmmword ptr [rsp+4058h+tempPriority.threadHandle], xmm0 }
    if ( ((unsigned __int8)&s_hudPollLock.writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_hudPollLock.writeCount) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&s_hudPollLock.writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
      __debugbreak();
    Sys_TempThreadPriorityEnd(&tempPriority);
    s_lastUpdateFrameCount = 0;
    MemBudget_Project_UpdateXB3Mem(&outPoll);
  }
  else
  {
    ++s_lastUpdateFrameCount;
  }
}

/*
==============
MemBudget_Poll_UseBootValueForBudget
==============
*/
bool MemBudget_Poll_UseBootValueForBudget(MemBudget_PollType pollType)
{
  return (_BYTE)pollType == 10 || (_BYTE)pollType == 24;
}

/*
==============
Membudget_GetTAStreamerMem
==============
*/
void Membudget_GetTAStreamerMem(unsigned __int64 *outFreeMem, unsigned __int64 *outUsedMem)
{
  StreamMemInfo memInfo; 

  Stream_Alloc_GetMemInfo(&memInfo);
  *outFreeMem = memInfo.unused[0] + memInfo.unused[1];
  *outUsedMem = memInfo.generics + memInfo.images + memInfo.meshes;
}

