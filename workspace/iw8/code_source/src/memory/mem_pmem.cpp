/*
==============
PMem_DumpMemStats
==============
*/

void PMem_DumpMemStats(void)
{
  ?PMem_DumpMemStats@@YAXXZ();
}

/*
==============
PMem_PopAuxAllocations
==============
*/

void PMem_PopAuxAllocations(void)
{
  ?PMem_PopAuxAllocations@@YAXXZ();
}

/*
==============
PMem_UpdateStashedMemory
==============
*/

void __fastcall PMem_UpdateStashedMemory(StashedMemoryType stashType, unsigned __int64 size)
{
  ?PMem_UpdateStashedMemory@@YAXW4StashedMemoryType@@_K@Z(stashType, size);
}

/*
==============
PMem_PushAuxAllocations
==============
*/

void PMem_PushAuxAllocations(void)
{
  ?PMem_PushAuxAllocations@@YAXXZ();
}

/*
==============
PMem_Free
==============
*/

StreamerMemLoan *__fastcall PMem_Free(StreamerMemLoan *result, const char *name, PMem_Stack stackIndex)
{
  return ?PMem_Free@@YA?AUStreamerMemLoan@@PEBDW4PMem_Stack@@@Z(result, name, stackIndex);
}

/*
==============
PMem_InitStacksAndPools
==============
*/

void PMem_InitStacksAndPools(void)
{
  ?PMem_InitStacksAndPools@@YAXXZ();
}

/*
==============
PMem_GetTotalCommitOnAllocSize
==============
*/

unsigned __int64 __fastcall PMem_GetTotalCommitOnAllocSize()
{
  return ?PMem_GetTotalCommitOnAllocSize@@YA_KXZ();
}

/*
==============
PMem_EndAlloc
==============
*/

void __fastcall PMem_EndAlloc(const char *name, PMem_Stack stackIndex)
{
  ?PMem_EndAlloc@@YAXPEBDW4PMem_Stack@@@Z(name, stackIndex);
}

/*
==============
PMem_Alloc
==============
*/

void *__fastcall PMem_Alloc(unsigned __int64 size, unsigned __int64 alignment, Mem_Pool pool, PMem_Stack stack, const char *hint)
{
  return ?PMem_Alloc@@YAPEAX_K0W4Mem_Pool@@W4PMem_Stack@@PEBD@Z(size, alignment, pool, stack, hint);
}

/*
==============
PMem_AuxAllocationsEnabled
==============
*/

bool __fastcall PMem_AuxAllocationsEnabled()
{
  return ?PMem_AuxAllocationsEnabled@@YA_NXZ();
}

/*
==============
PMem_BeginAlloc
==============
*/

void __fastcall PMem_BeginAlloc(const char *name, PMem_Stack stackIndex)
{
  ?PMem_BeginAlloc@@YAXPEBDW4PMem_Stack@@@Z(name, stackIndex);
}

/*
==============
PMem_CommitMemoryPartial
==============
*/

bool __fastcall PMem_CommitMemoryPartial(PMem_Stack stack, unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, StreamerMemLoan *optionalLoan, Mem_PageRange *inoutPageRange, const char *name)
{
  return ?PMem_CommitMemoryPartial@@YA_NW4PMem_Stack@@PEAE11PEAUStreamerMemLoan@@PEAUMem_PageRange@@PEBD@Z(stack, start, end, firstPageAddress, optionalLoan, inoutPageRange, name);
}

/*
==============
PMem_AllocWithLoan
==============
*/

void *__fastcall PMem_AllocWithLoan(unsigned __int64 size, unsigned __int64 alignment, Mem_Pool poolIndex, PMem_Stack stackIndex, StreamerMemLoan *optionalLoan, const char *hint)
{
  return ?PMem_AllocWithLoan@@YAPEAX_K0W4Mem_Pool@@W4PMem_Stack@@PEAUStreamerMemLoan@@PEBD@Z(size, alignment, poolIndex, stackIndex, optionalLoan, hint);
}

/*
==============
PMem_DecommitMemoryPartial
==============
*/

StreamerMemLoan *__fastcall PMem_DecommitMemoryPartial(StreamerMemLoan *result, PMem_Stack stack, unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, Mem_PageRange *inoutPageRange)
{
  return ?PMem_DecommitMemoryPartial@@YA?AUStreamerMemLoan@@W4PMem_Stack@@PEAE11PEAUMem_PageRange@@@Z(result, stack, start, end, firstPageAddress, inoutPageRange);
}

/*
==============
PMem_Init
==============
*/

void PMem_Init(void)
{
  ?PMem_Init@@YAXXZ();
}

/*
==============
PMem_IsInited
==============
*/

bool __fastcall PMem_IsInited()
{
  return ?PMem_IsInited@@YA_NXZ();
}

/*
==============
PMem_ForEachPMemStackSize
==============
*/

void __fastcall PMem_ForEachPMemStackSize(void (__fastcall *callback)(const char *, unsigned __int64))
{
  ?PMem_ForEachPMemStackSize@@YAXP6AXPEBD_K@Z@Z(callback);
}

/*
==============
DumpPMemStacksForPool
==============
*/

void __fastcall DumpPMemStacksForPool(Mem_Pool poolIndex, double _XMM1_8)
{
  const char **v8; 
  PhysicalMemoryStack *stacks; 
  Mem_Pool v12; 
  __int64 v13; 
  int v14; 
  PhysicalMemoryPool *v16; 
  unsigned __int64 v17; 
  PhysicalMemoryPool::Behavior behavior; 
  __int64 v19; 
  const char *v20; 
  const char *PoolName; 
  unsigned __int64 size; 
  int v23; 
  __int64 v37; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  __int64 allocCount; 
  __int64 v42; 
  unsigned __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 commitSize; 
  __int64 v48; 
  __int128 fmt; 
  __int128 fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmt_8; 
  char *fmt_8a; 
  char *fmt_8b; 
  __int64 v101; 
  double v102; 
  double v103; 
  double v104; 
  double v105; 
  PhysicalMemoryPool *v106; 
  __int64 v107; 
  __int64 v108; 
  const char **p_name; 
  const char *const *v110; 
  char v112; 
  void *retaddr; 
  unsigned int v115; 
  unsigned int v116; 
  __int64 v117; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  v8 = (const char **)s_stackNames;
  __asm { vmovaps xmmword ptr [rax-68h], xmm7 }
  stacks = s_pmem.stacks;
  __asm
  {
    vmovss  xmm7, cs:__real@5f800000
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovss  xmm8, cs:__real@35800000
  }
  v12 = poolIndex;
  v13 = poolIndex;
  __asm { vmovaps [rsp+0F8h+var_88], xmm9 }
  v108 = poolIndex;
  v14 = 0;
  v116 = 0;
  v110 = s_stackNames;
  __asm { vxorpd  xmm9, xmm9, xmm9 }
  do
  {
    v16 = stacks->pools[v13];
    v106 = v16;
    if ( v16 )
    {
      v17 = stacks->pos[v13];
      behavior = v16->behavior;
      v107 = 0i64;
      v117 = 0i64;
      v19 = ((v17 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) - v17;
      if ( behavior )
      {
        if ( behavior == COMMIT_MANUALLY )
        {
          v20 = "Manual";
        }
        else
        {
          LODWORD(fmt_8) = v16->behavior;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 998, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown behavior type %u", fmt_8) )
            __debugbreak();
          v20 = (char *)&queryFormat.fmt + 3;
        }
      }
      else
      {
        v20 = "CommitOnAlloc";
      }
      PoolName = Mem_Paged_GetPoolName(v12);
      Com_MemDumpPrintf("------ %s %s: (%s)\n", *v8, PoolName, v20);
      size = v16->size;
      v23 = 0;
      v115 = 0;
      if ( v17 < size )
      {
        v23 = 1;
        __asm { vxorps  xmm0, xmm0, xmm0 }
        v115 = 1;
        __asm { vcvtsi2ss xmm0, xmm0, rax }
        if ( (__int64)(size - v17) < 0 )
          __asm { vaddss  xmm0, xmm0, xmm7 }
        __asm
        {
          vmulss  xmm0, xmm0, xmm8
          vcvtss2sd xmm2, xmm0, xmm0
          vmovaps xmm3, xmm9
          vmovsd  [rsp+0F8h+var_C8], xmm2
          vmovq   r8, xmm2
          vmovq   r9, xmm3
          vmovups xmmword ptr [rsp+0F8h+fmt], xmm9
        }
        Com_MemDumpPrintf("%-34.34s %-10.3f %-10.3f %-10.3f %-10.3f %-10.3f\n", "<unused VA space>", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, *((double *)&fmt + 1), v102);
      }
      if ( v19 )
      {
        if ( v16->behavior && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 1037, ASSERT_TYPE_ASSERT, "(pool.behavior == PhysicalMemoryPool::Behavior::COMMIT_ON_ALLOC)", (const char *)&queryFormat, "pool.behavior == PhysicalMemoryPool::Behavior::COMMIT_ON_ALLOC") )
          __debugbreak();
        v115 = ++v23;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rdi
        }
        if ( v19 < 0 )
          __asm { vaddss  xmm0, xmm0, xmm7 }
        __asm
        {
          vmulss  xmm0, xmm0, xmm8
          vcvtss2sd xmm1, xmm0, xmm0
          vmovaps xmm3, xmm9
          vmovaps xmm2, xmm9
          vmovddup xmm1, xmm1
          vmovsd  [rsp+0F8h+var_C8], xmm9
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovups xmmword ptr [rsp+0F8h+fmt], xmm1
        }
        Com_MemDumpPrintf("%-34.34s %-10.3f %-10.3f %-10.3f %-10.3f %-10.3f\n", "<last page waste>", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta, *((double *)&fmta + 1), v103);
        v37 = ((v17 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) - v17;
        v117 = v37;
      }
      else
      {
        v37 = 0i64;
      }
      v38 = v37;
      v39 = stacks->allocCount - 1;
      if ( v39 >= 0 )
      {
        v40 = v108;
        allocCount = stacks->allocCount;
        v115 = allocCount + v23;
        p_name = &stacks->allocs[v39].name;
        v42 = 8 * (v108 + 10i64 * v39) + 48;
        do
        {
          if ( v116 >= 7 )
          {
            LODWORD(v101) = 7;
            LODWORD(fmt_8) = v116;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 902, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( PMEM_STACK_COUNT )", "stackIndex doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", fmt_8, v101) )
              __debugbreak();
          }
          if ( (unsigned int)poolIndex >= MEM_POOL_COUNT )
          {
            LODWORD(v101) = 3;
            LODWORD(fmt_8) = poolIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 903, ASSERT_TYPE_ASSERT, "(unsigned)( poolIndex ) < (unsigned)( MEM_POOL_COUNT )", "poolIndex doesn't index MEM_POOL_COUNT\n\t%i not in [0, %i)", fmt_8, v101) )
              __debugbreak();
          }
          if ( v39 >= stacks->allocCount )
          {
            LODWORD(v101) = stacks->allocCount;
            LODWORD(fmt_8) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 906, ASSERT_TYPE_ASSERT, "(unsigned)( allocIndex ) < (unsigned)( stack.allocCount )", "allocIndex doesn't index stack.allocCount\n\t%i not in [0, %i)", fmt_8, v101) )
              __debugbreak();
          }
          if ( v39 == stacks->allocCount - 1 )
            v43 = stacks->pos[v40];
          else
            v43 = stacks->allocs[allocCount].pos[v40];
          v44 = v43 - *(_QWORD *)((char *)stacks + v42 - 24);
          if ( v116 >= 7 )
          {
            LODWORD(v101) = 7;
            LODWORD(fmt_8) = v116;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 923, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( PMEM_STACK_COUNT )", "stackIndex doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", fmt_8, v101) )
              __debugbreak();
          }
          if ( (unsigned int)poolIndex >= MEM_POOL_COUNT )
          {
            LODWORD(v101) = 3;
            LODWORD(fmt_8) = poolIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 924, ASSERT_TYPE_ASSERT, "(unsigned)( poolIndex ) < (unsigned)( MEM_POOL_COUNT )", "poolIndex doesn't index MEM_POOL_COUNT\n\t%i not in [0, %i)", fmt_8, v101) )
              __debugbreak();
          }
          if ( v39 >= stacks->allocCount )
          {
            LODWORD(v101) = stacks->allocCount;
            LODWORD(fmt_8) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 927, ASSERT_TYPE_ASSERT, "(unsigned)( allocIndex ) < (unsigned)( stack.allocCount )", "allocIndex doesn't index stack.allocCount\n\t%i not in [0, %i)", fmt_8, v101) )
              __debugbreak();
          }
          v45 = *(__int64 *)((char *)&stacks->allocName + v42);
          v46 = v44 - v45;
          if ( v106->behavior )
          {
            if ( v44 != v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 1064, ASSERT_TYPE_ASSERT, "(allocSize == usedSize)", (const char *)&queryFormat, "allocSize == usedSize") )
              __debugbreak();
            if ( stacks->allocCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 1065, ASSERT_TYPE_ASSERT, "(stack.allocCount == 1)", (const char *)&queryFormat, "stack.allocCount == 1") )
              __debugbreak();
            commitSize = v106->commitSize;
            v48 = v44 - commitSize;
          }
          else
          {
            commitSize = v44;
            v48 = 0i64;
          }
          v107 += v45;
          v38 += commitSize;
          v117 += v46;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
          }
          if ( v48 < 0 )
            __asm { vaddss  xmm0, xmm0, xmm7 }
          __asm
          {
            vmulss  xmm0, xmm0, xmm8
            vxorps  xmm1, xmm1, xmm1
            vcvtss2sd xmm6, xmm0, xmm0
            vcvtsi2ss xmm1, xmm1, rcx
          }
          if ( commitSize < 0 )
            __asm { vaddss  xmm1, xmm1, xmm7 }
          __asm
          {
            vmulss  xmm0, xmm1, xmm8
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, rbx
            vcvtss2sd xmm5, xmm0, xmm0
          }
          if ( v46 < 0 )
            __asm { vaddss  xmm1, xmm1, xmm7 }
          __asm
          {
            vmulss  xmm0, xmm1, xmm8
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, rdi
            vcvtss2sd xmm4, xmm0, xmm0
          }
          if ( v45 < 0 )
            __asm { vaddss  xmm1, xmm1, xmm7 }
          __asm
          {
            vmulss  xmm0, xmm1, xmm8
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, rsi
            vcvtss2sd xmm3, xmm0, xmm0
          }
          if ( v44 < 0 )
            __asm { vaddss  xmm1, xmm1, xmm7 }
          __asm
          {
            vmulss  xmm0, xmm1, xmm8
            vcvtss2sd xmm2, xmm0, xmm0
            vmovsd  [rsp+0F8h+var_C8], xmm6
            vmovsd  [rsp+0F8h+fmt+8], xmm5
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovsd  [rsp+0F8h+fmt], xmm4
          }
          Com_MemDumpPrintf("%-34.34s %-10.3f %-10.3f %-10.3f %-10.3f %-10.3f\n", *p_name, *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtb, *(double *)&fmt_8a, v104);
          v40 = v108;
          allocCount = (unsigned int)(allocCount - 1);
          p_name -= 10;
          v42 -= 80i64;
          --v39;
        }
        while ( v39 >= 0 );
        v14 = v116;
        v16 = v106;
        v37 = v117;
      }
      if ( v115 > 1 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
        }
        if ( (signed __int64)(v16->size - v38) < 0 )
          __asm { vaddss  xmm0, xmm0, xmm7 }
        __asm
        {
          vmulss  xmm0, xmm0, xmm8
          vxorps  xmm1, xmm1, xmm1
          vcvtss2sd xmm6, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, r12
        }
        if ( v38 < 0 )
          __asm { vaddss  xmm1, xmm1, xmm7 }
        __asm
        {
          vmulss  xmm0, xmm1, xmm8
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rdx
          vcvtss2sd xmm5, xmm0, xmm0
        }
        if ( v37 < 0 )
          __asm { vaddss  xmm1, xmm1, xmm7 }
        __asm
        {
          vmulss  xmm0, xmm1, xmm8
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vcvtss2sd xmm4, xmm0, xmm0
        }
        if ( v107 < 0 )
          __asm { vaddss  xmm1, xmm1, xmm7 }
        __asm
        {
          vmulss  xmm0, xmm1, xmm8
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rcx
          vcvtss2sd xmm3, xmm0, xmm0
        }
        if ( (v16->size & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddss  xmm1, xmm1, xmm7 }
        __asm
        {
          vmulss  xmm0, xmm1, xmm8
          vcvtss2sd xmm2, xmm0, xmm0
          vmovsd  [rsp+0F8h+var_C8], xmm6
          vmovsd  [rsp+0F8h+fmt+8], xmm5
          vmovq   r8, xmm2
          vmovq   r9, xmm3
          vmovsd  [rsp+0F8h+fmt], xmm4
        }
        Com_MemDumpPrintf("%-34.34s %-10.3f %-10.3f %-10.3f %-10.3f %-10.3f\n", "<TOTAL>", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtc, *(double *)&fmt_8b, v105);
      }
      Com_MemDumpPrintf("\n");
      v13 = v108;
      v12 = poolIndex;
      v8 = (const char **)v110;
    }
    ++v14;
    ++v8;
    ++stacks;
    v116 = v14;
    v110 = v8;
  }
  while ( v14 < 7 );
  _R11 = &v112;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
PMem_AddPoolToStack
==============
*/
void PMem_AddPoolToStack(PMem_Stack stackIndex, Mem_Pool poolIndex, PhysicalMemoryPool::Behavior behavior, unsigned __int64 size, const char *debugName)
{
  __int64 v5; 
  __int64 v7; 
  unsigned __int64 v9; 
  unsigned __int64 poolCount; 
  const void *v11; 
  unsigned __int64 v12; 
  PhysicalMemoryPool *v13; 
  PhysicalMemoryPool **v14; 
  IWMemAllocatorType v15; 
  __int64 v16; 
  __int64 v17; 

  v5 = stackIndex;
  v7 = poolIndex;
  if ( (unsigned int)stackIndex >= PMEM_STACK_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 254, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( PMEM_STACK_COUNT )", "stackIndex doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", stackIndex, 7) )
    __debugbreak();
  v9 = Mem_Paged_ReserveVirtualAddressRange((Mem_Pool)v7, size, debugName);
  poolCount = s_pmem.poolCount;
  v11 = (const void *)v9;
  if ( LODWORD(s_pmem.poolCount) >= 0xC )
  {
    LODWORD(v17) = 12;
    LODWORD(v16) = s_pmem.poolCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 258, ASSERT_TYPE_ASSERT, "(unsigned)( s_pmem.poolCount ) < (unsigned)( PhysicalMemory::MAX_PHYSICAL_MEMORY_POOLS )", "s_pmem.poolCount doesn't index PhysicalMemory::MAX_PHYSICAL_MEMORY_POOLS\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
    poolCount = s_pmem.poolCount;
  }
  s_pmem.poolCount = poolCount + 1;
  v12 = poolCount;
  s_pmem.pools[v12].pool = v7;
  v13 = &s_pmem.pools[poolCount];
  s_pmem.pools[v12].size = size;
  s_pmem.pools[v12].behavior = behavior;
  s_pmem.pools[v12].commitSize = 0i64;
  v13->base = (unsigned __int64)v11;
  v14 = &s_pmem.stacks[v5].pools[v7];
  if ( *v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 271, ASSERT_TYPE_ASSERT, "(stack.pools[poolIndex] == nullptr)", (const char *)&queryFormat, "stack.pools[poolIndex] == nullptr") )
    __debugbreak();
  *v14 = v13;
  if ( behavior == COMMIT_MANUALLY )
  {
    v15 = Count;
  }
  else
  {
    if ( behavior && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 280, ASSERT_TYPE_ASSERT, "(behavior == PhysicalMemoryPool::Behavior::COMMIT_ON_ALLOC)", (const char *)&queryFormat, "behavior == PhysicalMemoryPool::Behavior::COMMIT_ON_ALLOC") )
      __debugbreak();
    IWMem_Allocator_CreateFixed(&s_pmem.pools[v12].iwMemCommit, debugName, (IWMemAllocatorType)4, v11, size);
    v15 = 8;
  }
  IWMem_Allocator_CreateFixed(&s_pmem.pools[v12].iwMemAlloc, debugName, v15, v11, size);
}

/*
==============
PMem_Alloc
==============
*/
void *PMem_Alloc(unsigned __int64 size, unsigned __int64 alignment, Mem_Pool pool, PMem_Stack stack, const char *hint)
{
  return PMem_AllocWithLoan(size, alignment, pool, stack, NULL, hint);
}

/*
==============
PMem_AllocWithLoan
==============
*/
unsigned __int8 *PMem_AllocWithLoan(unsigned __int64 size, unsigned __int64 alignment, Mem_Pool poolIndex, PMem_Stack stackIndex, StreamerMemLoan *optionalLoan, const char *hint)
{
  double v6; 
  __int64 v7; 
  __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  PhysicalMemoryStack *v12; 
  PhysicalMemoryPool *v13; 
  const char *PoolName; 
  ThreadContext CurrentThreadContext; 
  const char *v16; 
  const char *allocName; 
  const char *ThreadContextName; 
  const char *v19; 
  unsigned __int8 *v20; 
  int v22; 
  unsigned __int64 v23; 
  const char *v24; 
  PhysicalMemoryPool **pools; 
  PhysicalMemoryPool **v26; 
  __int64 v27; 
  PhysicalMemoryPool *v28; 
  PhysicalMemoryPool::Behavior behavior; 
  unsigned __int64 v30; 
  Mem_Pool v31; 
  const char *v32; 
  const char *v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  unsigned __int8 *v38; 
  unsigned __int8 *v39; 
  Mem_PageRange *inoutPageRange; 
  Mem_PageRange *inoutPageRangea; 
  char *name; 
  char *namea; 
  __int64 v44; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  unsigned __int64 *v47; 
  __int64 v48; 
  __int64 v50; 
  unsigned __int64 v51; 

  v7 = stackIndex;
  v9 = poolIndex;
  v10 = size;
  if ( !s_pmem.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 570, ASSERT_TYPE_ASSERT, "(s_pmem.isInitialized)", (const char *)&queryFormat, "s_pmem.isInitialized") )
    __debugbreak();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 571, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( (alignment - 1 > 0xFFFF || ((alignment - 1) & alignment) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 572, ASSERT_TYPE_ASSERT, "(alignment > 0 && alignment <= MEM_PHYSICAL_PAGE_SIZE && IsPowerOf2( alignment ))", (const char *)&queryFormat, "alignment > 0 && alignment <= MEM_PHYSICAL_PAGE_SIZE && IsPowerOf2( alignment )") )
    __debugbreak();
  v11 = 3i64;
  if ( (unsigned int)v9 >= 3 )
  {
    LODWORD(inoutPageRange) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 573, ASSERT_TYPE_ASSERT, "(unsigned)( poolIndex ) < (unsigned)( MEM_POOL_COUNT )", "poolIndex doesn't index MEM_POOL_COUNT\n\t%i not in [0, %i)", inoutPageRange, 3) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 7 )
  {
    LODWORD(name) = 7;
    LODWORD(inoutPageRange) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 574, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( PMEM_STACK_COUNT )", "stackIndex doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", inoutPageRange, name) )
      __debugbreak();
  }
  v12 = &s_pmem.stacks[v7];
  if ( !v12->allocName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 577, ASSERT_TYPE_ASSERT, "( stack.allocName != nullptr )", "PMem stack %s hasn't had PMem_BeginAlloc called!", s_stackNames[v7]) )
    __debugbreak();
  v13 = v12->pools[v9];
  v50 = v9;
  if ( !v13 )
  {
    PoolName = Mem_Paged_GetPoolName((Mem_Pool)v9);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 580, ASSERT_TYPE_ASSERT, "( pool != nullptr )", "PMem stack %s doesn't have pool %s assigned to it!", s_stackNames[v7], PoolName) )
      __debugbreak();
  }
  if ( (_DWORD)v9 != v13->pool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 581, ASSERT_TYPE_ASSERT, "(poolIndex == pool->pool)", (const char *)&queryFormat, "poolIndex == pool->pool") )
    __debugbreak();
  if ( v13->behavior == COMMIT_MANUALLY && alignment != 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 582, ASSERT_TYPE_ASSERT, "(pool->behavior != PhysicalMemoryPool::Behavior::COMMIT_MANUALLY || alignment == MEM_PHYSICAL_PAGE_SIZE)", (const char *)&queryFormat, "pool->behavior != PhysicalMemoryPool::Behavior::COMMIT_MANUALLY || alignment == MEM_PHYSICAL_PAGE_SIZE") )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( v12->allocThread._My_val != CurrentThreadContext )
  {
    v16 = s_stackNames[v7];
    allocName = v12->allocName;
    ThreadContextName = Sys_GetThreadContextName(v12->allocThread._My_val);
    v19 = Sys_GetThreadContextName(CurrentThreadContext);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 587, ASSERT_TYPE_ASSERT, "( stack.allocThread == currentThread )", "PMem_Alloc called on different thread (thread: %s) than PMem_BeginAlloc (thread: %s) for allocation %s on PMem stack %s!", v19, ThreadContextName, allocName, v16) )
      __debugbreak();
    v10 = size;
  }
  if ( s_pmem.enableAuxPhysicalAllocations && v13->behavior == COMMIT_ON_ALLOC && v13->pool == MEM_POOL_MAIN && stackIndex == PMEM_STACK_GAME && (!optionalLoan || !StreamerMemLoan::Size(optionalLoan)) )
  {
    IWMem_Profile_Push(v12->allocName);
    IWMem_Profile_Push(hint);
    v20 = XB3XMem_AuxMemAlloc(v10, alignment);
    IWMem_Profile_Pop();
    IWMem_Profile_Pop();
    if ( v20 )
      return v20;
  }
  v22 = 0;
  if ( !v12->allocCount )
  {
    LODWORD(v44) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 612, ASSERT_TYPE_ASSERT, "( stack.allocCount ) > ( 0 )", "%s > %s\n\t%u, %u", "stack.allocCount", "0", v44, 0i64) )
      __debugbreak();
  }
  v48 = (__int64)&v12->allocs[v12->allocCount - 1];
  v47 = &v12->pos[v50];
  v51 = *v47;
  v46 = AlignUp<unsigned __int64>(*v47, alignment);
  v23 = v46 + v10;
  v45 = v46 + v10;
  if ( v46 + v10 <= v13->size )
  {
    v31 = poolIndex;
  }
  else
  {
    Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
    Com_MemDumpPrintf("PMem_DumpMemStats (all sizes in megabytes):\n");
    Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
    Mem_Paged_Dump();
    Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
    do
    {
      v24 = Mem_Paged_GetPoolName((Mem_Pool)v22);
      Com_MemDumpPrintf("--- PMem pool: %s ---\n", v24);
      Com_MemDumpPrintf("%-34.34s %-10s %-10s %-10s %-10s %-11s\n", (const char *)&queryFormat.fmt + 3, "VaSpace", "stackUsed", "alignWaste", "committed", "uncommitted");
      DumpPMemStacksForPool((Mem_Pool)v22++, v6);
    }
    while ( v22 < 3 );
    Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
    v10 = size;
    v23 = v45;
    if ( Sys_IsMainThread() )
    {
      Com_MemDumpPrintf("\n\n");
      pools = s_pmem.stacks[0].pools;
      do
      {
        v26 = pools;
        v27 = 7i64;
        do
        {
          v28 = *v26;
          if ( *v26 && v28->behavior == COMMIT_ON_ALLOC )
            IWMem_DumpAllocatorProfile(v28->iwMemAlloc);
          v26 += 258;
          --v27;
        }
        while ( v27 );
        ++pools;
        --v11;
      }
      while ( v11 );
      Com_MemDumpPrintf("\n");
      v10 = size;
      v23 = v45;
    }
    behavior = v13->behavior;
    v30 = v23 - v13->size;
    if ( behavior )
    {
      if ( behavior != COMMIT_MANUALLY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 635, ASSERT_TYPE_ASSERT, "(pool->behavior == PhysicalMemoryPool::Behavior::COMMIT_MANUALLY)", (const char *)&queryFormat, "pool->behavior == PhysicalMemoryPool::Behavior::COMMIT_MANUALLY") )
        __debugbreak();
      v31 = poolIndex;
      v33 = Mem_Paged_GetPoolName(poolIndex);
      Com_PrintError(16, "Need %zu more bytes of pmem for alloc to reserve virtual memory to succeed (stack=%s) (pool=%s). You can probably safely bump the pool's reserve size in PMem_InitStacksAndPools.\n", v30, s_stackNames[stackIndex], v33);
      Mem_Error_CannotAlloc_Dev(DODGE, "PMem_AllocWithLoan", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 637, "reserve size=%zu, needed %zu more bytes", v10, v30);
    }
    else
    {
      v31 = poolIndex;
      v32 = Mem_Paged_GetPoolName(poolIndex);
      Com_PrintError(16, "Need %zu more bytes of pmem for alloc to succeed (stack=%s) (pool=%s)\n", v30, s_stackNames[stackIndex], v32);
      Mem_Error_CannotAlloc_Dev(DODGE, "PMem_AllocWithLoan", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 631, "size=%zu, needed %zu more bytes", v10, v30);
    }
  }
  v34 = v23 - v51;
  if ( v23 - v51 < v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 643, ASSERT_TYPE_ASSERT, "(sizeWithAlignmentWaste >= size)", (const char *)&queryFormat, "sizeWithAlignmentWaste >= size") )
    __debugbreak();
  if ( v13->behavior == COMMIT_MANUALLY && v34 != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 644, ASSERT_TYPE_ASSERT, "(pool->behavior != PhysicalMemoryPool::Behavior::COMMIT_MANUALLY || sizeWithAlignmentWaste == size)", (const char *)&queryFormat, "pool->behavior != PhysicalMemoryPool::Behavior::COMMIT_MANUALLY || sizeWithAlignmentWaste == size") )
    __debugbreak();
  v35 = v13->base + v46;
  if ( (!alignment || ((alignment - 1) & alignment) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( ((alignment - 1) & v35) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 649, ASSERT_TYPE_ASSERT, "(IsAligned( result, alignment ))", (const char *)&queryFormat, "IsAligned( result, alignment )") )
    __debugbreak();
  *v47 = v23;
  *(_QWORD *)(v48 + 8i64 * (int)v31 + 32) += v10;
  if ( v13->behavior == COMMIT_ON_ALLOC )
  {
    v36 = (v23 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
    v37 = (v51 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
    if ( v36 > v37 )
    {
      v38 = (unsigned __int8 *)(v36 + v13->base);
      v39 = (unsigned __int8 *)(v37 + v13->base);
      if ( !PMem_CommitMemoryPartialInternal(stackIndex, v39, v38, v39, optionalLoan, (Mem_PageRange *)(v48 + 8i64 * (int)v31 + 56), hint) )
      {
        if ( v34 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v34, "unsigned", v34) )
          __debugbreak();
        LODWORD(namea) = Mem_Paged_GetFreePageCountForCommit(v31);
        LODWORD(inoutPageRangea) = WORD1(v34);
        Mem_Error_CannotAlloc_Dev(DODGE, "PMem_AllocWithLoan", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 669, "PMem_Alloc: requiredPages=%d freePages=%d", inoutPageRangea, namea);
      }
      IWMem_Profile_Push(v12->allocName);
      IWMem_Alloc(v13->iwMemCommit, v39, v38 - v39);
      IWMem_Profile_Pop();
      v10 = size;
    }
    memset_0((void *)v35, 153, v10);
  }
  IWMem_Profile_Push(v12->allocName);
  IWMem_Profile_Push(hint);
  IWMem_Alloc(v13->iwMemAlloc, (const void *)(v51 + v13->base), v34);
  IWMem_Profile_Pop();
  IWMem_Profile_Pop();
  return (unsigned __int8 *)v35;
}

/*
==============
PMem_AuxAllocationsEnabled
==============
*/
_BOOL8 PMem_AuxAllocationsEnabled()
{
  return s_pmem.enableAuxPhysicalAllocations;
}

/*
==============
PMem_BeginAlloc
==============
*/
void PMem_BeginAlloc(const char *name, PMem_Stack stackIndex)
{
  __int64 v3; 
  __int64 v4; 
  PhysicalMemoryStack *v5; 
  unsigned int v6; 
  const char **p_name; 
  __int64 v8; 
  __int64 allocCount; 
  PhysicalMemoryAllocation *v10; 
  __int64 v11; 

  v3 = stackIndex;
  if ( !s_pmem.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 492, ASSERT_TYPE_ASSERT, "(s_pmem.isInitialized)", (const char *)&queryFormat, "s_pmem.isInitialized") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 493, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( (unsigned int)v3 >= 7 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 494, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( PMEM_STACK_COUNT )", "stackIndex doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", v11, 7) )
      __debugbreak();
  }
  v4 = v3;
  v5 = &s_pmem.stacks[v3];
  if ( v5->allocName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 498, ASSERT_TYPE_ASSERT, "( stack.allocName == nullptr )", "Cannot nest calls to PMem_BeginAlloc for stack %s!", s_stackNames[v4]) )
    __debugbreak();
  v5->allocName = name;
  if ( _InterlockedExchange((volatile __int32 *)&v5->allocThread, Sys_GetCurrentThreadContext()) != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 504, ASSERT_TYPE_ASSERT, "(prevAllocThread == THREAD_CONTEXT_COUNT)", (const char *)&queryFormat, "prevAllocThread == THREAD_CONTEXT_COUNT") )
    __debugbreak();
  if ( v5->allocCount >= 0x19 )
  {
    v6 = 0;
    Com_Printf(1, "PMem stack %s exceeded max allocation count %zu\n", s_stackNames[v4], 0x19ui64);
    p_name = &v5->allocs[0].name;
    if ( v5->allocs != (PhysicalMemoryAllocation *)v5->pools )
    {
      do
      {
        v8 = v6++;
        Com_Printf(1, "%d - %s\n", v8, *p_name);
        p_name += 10;
      }
      while ( p_name != (const char **)v5->pools );
    }
  }
  if ( v5->allocCount >= 0x19 )
  {
    LODWORD(v11) = v5->allocCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 516, ASSERT_TYPE_ASSERT, "( stack.allocCount < PhysicalMemoryStack::MAX_PHYSICAL_ALLOCATIONS )", "prim->allocListCount: %d, name: %s, \n", v11, name) )
      __debugbreak();
  }
  allocCount = v5->allocCount;
  v10 = &v5->allocs[allocCount];
  v5->allocCount = allocCount + 1;
  v10->name = name;
  v10->pos[0] = v5->pos[0];
  v10->usedSize[0] = 0i64;
  v10->pageRange[0] = (Mem_PageRange)-1i64;
  v10->pos[1] = v5->pos[1];
  v10->usedSize[1] = 0i64;
  v10->pageRange[1] = (Mem_PageRange)-1i64;
  v10->pos[2] = v5->pos[2];
  v10->usedSize[2] = 0i64;
  v10->pageRange[2] = (Mem_PageRange)-1i64;
}

/*
==============
PMem_CommitMemoryPartial
==============
*/
bool PMem_CommitMemoryPartial(PMem_Stack stack, unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, StreamerMemLoan *optionalLoan, Mem_PageRange *inoutPageRange, const char *name)
{
  __int64 v7; 
  int v13; 

  v7 = stack;
  if ( (unsigned int)stack >= PMEM_STACK_COUNT )
  {
    v13 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 880, ASSERT_TYPE_ASSERT, "(unsigned)( stack ) < (unsigned)( PMEM_STACK_COUNT )", "stack doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", stack, v13) )
      __debugbreak();
  }
  if ( s_pmem.stacks[v7].allocName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 881, ASSERT_TYPE_ASSERT, "( s_pmem.stacks[stack].allocName == nullptr )", "PMem stack %s is currently in between PMem_Begin/EndAlloc. Can't call CommitMemoryPartial!", s_stackNames[v7]) )
    __debugbreak();
  if ( s_pmem.stacks[v7].allocThread._My_val != THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 882, ASSERT_TYPE_ASSERT, "(s_pmem.stacks[stack].allocThread == THREAD_CONTEXT_COUNT)", (const char *)&queryFormat, "s_pmem.stacks[stack].allocThread == THREAD_CONTEXT_COUNT") )
    __debugbreak();
  return PMem_CommitMemoryPartialInternal((PMem_Stack)v7, start, end, firstPageAddress, optionalLoan, inoutPageRange, name);
}

/*
==============
PMem_CommitMemoryPartialInternal
==============
*/
_BOOL8 PMem_CommitMemoryPartialInternal(PMem_Stack stack, unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, StreamerMemLoan *optionalLoan, Mem_PageRange *inoutPageRange, const char *name)
{
  bool v11; 
  PhysicalMemoryPool *PoolFromPtr; 
  signed __int64 v13; 

  if ( end <= start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 833, ASSERT_TYPE_ASSERT, "(end > start)", (const char *)&queryFormat, "end > start") )
    __debugbreak();
  if ( !PMem_GetPoolFromPtr(start, stack) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 834, ASSERT_TYPE_ASSERT, "(PMem_IsInStack( start, stack ))", (const char *)&queryFormat, "PMem_IsInStack( start, stack )") )
    __debugbreak();
  if ( !PMem_GetPoolFromPtr(end - 1, stack) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 835, ASSERT_TYPE_ASSERT, "(PMem_IsInStack( end - 1, stack ))", (const char *)&queryFormat, "PMem_IsInStack( end - 1, stack )") )
    __debugbreak();
  if ( !PMem_GetPoolFromPtr(firstPageAddress, stack) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 836, ASSERT_TYPE_ASSERT, "(PMem_IsInStack( firstPageAddress, stack ))", (const char *)&queryFormat, "PMem_IsInStack( firstPageAddress, stack )") )
    __debugbreak();
  v11 = Mem_Paged_CommitMemoryPartial(start, end, firstPageAddress, optionalLoan, inoutPageRange, name);
  if ( v11 )
  {
    PoolFromPtr = PMem_GetPoolFromPtr(start, stack);
    if ( !PoolFromPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 845, ASSERT_TYPE_ASSERT, "(pool)", (const char *)&queryFormat, "pool") )
      __debugbreak();
    v13 = end - start;
    if ( (_WORD)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 847, ASSERT_TYPE_ASSERT, "(IsAligned( commitSize, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( commitSize, MEM_PHYSICAL_PAGE_SIZE )") )
      __debugbreak();
    PoolFromPtr->commitSize += v13;
  }
  return v11;
}

/*
==============
PMem_CommitStashedMemory
==============
*/
void PMem_CommitStashedMemory(StashedMemory *stashedMemOut, const unsigned __int64 size)
{
  unsigned __int64 commitSize; 
  unsigned __int8 *v5; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 166, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !stashedMemOut->base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 167, ASSERT_TYPE_ASSERT, "(stashedMemOut.base)", (const char *)&queryFormat, "stashedMemOut.base") )
    __debugbreak();
  if ( (_WORD)size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 168, ASSERT_TYPE_ASSERT, "(IsAligned( size, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( size, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  commitSize = stashedMemOut->commitSize;
  if ( size > stashedMemOut->reserveSize - commitSize )
    Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)18, "PMem_CommitStashedMemory", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 175, "commit size=%zu", size);
  v5 = &stashedMemOut->base[commitSize];
  if ( s_pmem.stacks[5].allocName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 881, ASSERT_TYPE_ASSERT, "( s_pmem.stacks[stack].allocName == nullptr )", "PMem stack %s is currently in between PMem_Begin/EndAlloc. Can't call CommitMemoryPartial!", s_stackNames[5]) )
    __debugbreak();
  if ( s_pmem.stacks[5].allocThread._My_val != THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 882, ASSERT_TYPE_ASSERT, "(s_pmem.stacks[stack].allocThread == THREAD_CONTEXT_COUNT)", (const char *)&queryFormat, "s_pmem.stacks[stack].allocThread == THREAD_CONTEXT_COUNT") )
    __debugbreak();
  if ( !PMem_CommitMemoryPartialInternal(PMEM_STACK_STASHED_MEMORY, v5, &v5[size], v5, NULL, &stashedMemOut->pageRange, "StashedMemory") )
    Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)18, "PMem_CommitStashedMemory", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 182, "size=%zu", size);
  stashedMemOut->commitSize += size;
}

/*
==============
PMem_DecommitMemoryPartial
==============
*/
StreamerMemLoan *PMem_DecommitMemoryPartial(StreamerMemLoan *result, PMem_Stack stack, unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, Mem_PageRange *inoutPageRange)
{
  __int64 v6; 
  int v12; 

  v6 = stack;
  if ( (unsigned int)stack >= PMEM_STACK_COUNT )
  {
    v12 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 890, ASSERT_TYPE_ASSERT, "(unsigned)( stack ) < (unsigned)( PMEM_STACK_COUNT )", "stack doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", stack, v12) )
      __debugbreak();
  }
  if ( s_pmem.stacks[v6].allocName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 891, ASSERT_TYPE_ASSERT, "( s_pmem.stacks[stack].allocName == nullptr )", "PMem stack %s is currently in between PMem_Begin/EndAlloc. Can't call DecommitMemoryPartial!", s_stackNames[v6]) )
    __debugbreak();
  if ( s_pmem.stacks[v6].allocThread._My_val != THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 892, ASSERT_TYPE_ASSERT, "(s_pmem.stacks[stack].allocThread == THREAD_CONTEXT_COUNT)", (const char *)&queryFormat, "s_pmem.stacks[stack].allocThread == THREAD_CONTEXT_COUNT") )
    __debugbreak();
  PMem_DecommitMemoryPartialInternal(result, (PMem_Stack)v6, start, end, firstPageAddress, inoutPageRange);
  return result;
}

/*
==============
PMem_DecommitMemoryPartialInternal
==============
*/
StreamerMemLoan *PMem_DecommitMemoryPartialInternal(StreamerMemLoan *result, PMem_Stack stack, unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, Mem_PageRange *inoutPageRange)
{
  PhysicalMemoryPool *PoolFromPtr; 
  unsigned __int64 v11; 

  if ( end <= start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 858, ASSERT_TYPE_ASSERT, "(end > start)", (const char *)&queryFormat, "end > start") )
    __debugbreak();
  if ( !PMem_GetPoolFromPtr(start, stack) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 859, ASSERT_TYPE_ASSERT, "(PMem_IsInStack( start, stack ))", (const char *)&queryFormat, "PMem_IsInStack( start, stack )") )
    __debugbreak();
  if ( !PMem_GetPoolFromPtr(end - 1, stack) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 860, ASSERT_TYPE_ASSERT, "(PMem_IsInStack( end - 1, stack ))", (const char *)&queryFormat, "PMem_IsInStack( end - 1, stack )") )
    __debugbreak();
  if ( !PMem_GetPoolFromPtr(firstPageAddress, stack) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 861, ASSERT_TYPE_ASSERT, "(PMem_IsInStack( firstPageAddress, stack ))", (const char *)&queryFormat, "PMem_IsInStack( firstPageAddress, stack )") )
    __debugbreak();
  PoolFromPtr = PMem_GetPoolFromPtr(start, stack);
  if ( !PoolFromPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 866, ASSERT_TYPE_ASSERT, "(pool)", (const char *)&queryFormat, "pool") )
    __debugbreak();
  if ( end <= start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 867, ASSERT_TYPE_ASSERT, "( end ) > ( start )", "%s > %s\n\t%p, %p", "end", "start", end, start) )
    __debugbreak();
  v11 = end - start;
  if ( (_WORD)end != (_WORD)start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 869, ASSERT_TYPE_ASSERT, "(IsAligned( decommitSize, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( decommitSize, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( v11 > PoolFromPtr->commitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 870, ASSERT_TYPE_ASSERT, "( decommitSize ) <= ( pool->commitSize )", "%s <= %s\n\t%llu, %llu", "decommitSize", "pool->commitSize", end - start, PoolFromPtr->commitSize) )
    __debugbreak();
  PoolFromPtr->commitSize -= v11;
  Mem_Paged_DecommitMemoryPartial(result, start, end, firstPageAddress, inoutPageRange);
  return result;
}

/*
==============
PMem_DumpMemStats
==============
*/
void PMem_DumpMemStats(__int64 a1, double a2)
{
  int i; 
  const char *PoolName; 
  PhysicalMemoryPool **pools; 
  __int64 v5; 
  PhysicalMemoryPool **v6; 
  __int64 v7; 
  PhysicalMemoryPool *v8; 

  Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
  Com_MemDumpPrintf("PMem_DumpMemStats (all sizes in megabytes):\n");
  Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
  Mem_Paged_Dump();
  Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
  for ( i = 0; i < 3; ++i )
  {
    PoolName = Mem_Paged_GetPoolName((Mem_Pool)i);
    Com_MemDumpPrintf("--- PMem pool: %s ---\n", PoolName);
    Com_MemDumpPrintf("%-34.34s %-10s %-10s %-10s %-10s %-11s\n", (const char *)&queryFormat.fmt + 3, "VaSpace", "stackUsed", "alignWaste", "committed", "uncommitted");
    DumpPMemStacksForPool((Mem_Pool)i, a2);
  }
  Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
  if ( Sys_IsMainThread() )
  {
    Com_MemDumpPrintf("\n\n");
    pools = s_pmem.stacks[0].pools;
    v5 = 3i64;
    do
    {
      v6 = pools;
      v7 = 7i64;
      do
      {
        v8 = *v6;
        if ( *v6 )
        {
          if ( v8->behavior == COMMIT_ON_ALLOC )
            IWMem_DumpAllocatorProfile(v8->iwMemAlloc);
        }
        v6 += 258;
        --v7;
      }
      while ( v7 );
      ++pools;
      --v5;
    }
    while ( v5 );
    Com_MemDumpPrintf("\n");
  }
}

/*
==============
PMem_EndAlloc
==============
*/
void PMem_EndAlloc(const char *name, PMem_Stack stackIndex)
{
  __int64 v2; 
  PhysicalMemoryStack *v4; 
  ThreadContext CurrentThreadContext; 
  const char *v6; 
  const char *allocName; 
  const char *ThreadContextName; 
  const char *v9; 
  __int64 v10; 

  v2 = stackIndex;
  if ( !s_pmem.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 534, ASSERT_TYPE_ASSERT, "(s_pmem.isInitialized)", (const char *)&queryFormat, "s_pmem.isInitialized") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 535, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( (unsigned int)v2 >= 7 )
  {
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 537, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( PMEM_STACK_COUNT )", "stackIndex doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", v10, 7) )
      __debugbreak();
  }
  v4 = &s_pmem.stacks[v2];
  if ( v4->allocName != name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 540, ASSERT_TYPE_ASSERT, "( stack.allocName == name )", "Calling PMem_EndAlloc for allocation %s when the top of the stack currently is %s on PMem stack %s", name, v4->allocName, s_stackNames[v2]) )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( _InterlockedExchange((volatile __int32 *)&v4->allocThread, 28) != CurrentThreadContext )
  {
    v6 = s_stackNames[v2];
    allocName = v4->allocName;
    ThreadContextName = Sys_GetThreadContextName(v4->allocThread._My_val);
    v9 = Sys_GetThreadContextName(CurrentThreadContext);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 546, ASSERT_TYPE_ASSERT, "( prevAllocThread == currentThread )", "PMem_EndAlloc called on different thread than (thread: %s) PMem_BeginAlloc (thread: %s) for allocation %s on PMem stack %s!", v9, ThreadContextName, allocName, v6) )
      __debugbreak();
  }
  v4->allocName = NULL;
}

/*
==============
PMem_ForEachPMemStackSize
==============
*/
void PMem_ForEachPMemStackSize(void (*callback)(const char *, unsigned __int64))
{
  unsigned __int64 v1; 
  const char *const *v2; 
  int v3; 
  PhysicalMemoryPool **v4; 
  bool v5; 
  __int64 v7; 
  __int64 v8; 
  PhysicalMemoryPool *v9; 
  __int64 v10; 
  __int64 v11; 

  v1 = 0i64;
  v2 = s_stackNames;
  v3 = 0;
  v4 = &s_pmem.stacks[0].pools[1];
  v5 = 1;
  do
  {
    if ( !v5 )
    {
      LODWORD(v11) = 7;
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 934, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( PMEM_STACK_COUNT )", "stackIndex doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    v7 = (__int64)*(v4 - 1);
    v8 = 0i64;
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 24);
    if ( *v4 )
      v8 += (*v4)->commitSize;
    v9 = v4[1];
    if ( v9 )
      v8 += v9->commitSize;
    v1 += v8;
    ((void (__fastcall *)(const char *const))callback)(*v2);
    ++v3;
    v4 += 258;
    ++v2;
    v5 = (unsigned int)v3 < 7;
  }
  while ( v3 < 7 );
  callback("Total", v1);
}

/*
==============
PMem_Free
==============
*/
StreamerMemLoan *PMem_Free(StreamerMemLoan *result, const char *name, PMem_Stack stackIndex)
{
  __int64 v3; 
  StreamerMemLoan *v5; 
  PhysicalMemoryStack *v6; 
  __int64 allocCount; 
  const char **p_name; 
  unsigned int i; 
  unsigned __int64 *pos; 
  Mem_PageRange *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int8 *v18; 
  unsigned __int8 *v19; 
  const void *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  Mem_PageRange *inoutPageRange; 
  __int64 v27; 
  Mem_PageRange *v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  const char **v35; 
  StreamerMemLoan resulta; 

  v3 = stackIndex;
  v5 = result;
  if ( !s_pmem.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 711, ASSERT_TYPE_ASSERT, "(s_pmem.isInitialized)", (const char *)&queryFormat, "s_pmem.isInitialized") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 712, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( (unsigned int)v3 >= 7 )
  {
    LODWORD(inoutPageRange) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 714, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( PMEM_STACK_COUNT )", "stackIndex doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", inoutPageRange, 7) )
      __debugbreak();
  }
  v5->mUpdateID = 0i64;
  v5->mPages = 0i64;
  v5->mCookie = -1061110033;
  v6 = &s_pmem.stacks[v3];
  if ( v6->allocName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 719, ASSERT_TYPE_ASSERT, "( stack.allocName == nullptr )", "PMem stack %s is currently in between PMem_Begin/EndAlloc. Can't call PMem_Free!", s_stackNames[v3]) )
    __debugbreak();
  if ( v6->allocThread._My_val != THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 720, ASSERT_TYPE_ASSERT, "(stack.allocThread == THREAD_CONTEXT_COUNT)", (const char *)&queryFormat, "stack.allocThread == THREAD_CONTEXT_COUNT") )
    __debugbreak();
  if ( !v6->allocCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 722, ASSERT_TYPE_ASSERT, "( stack.allocCount ) > ( 0 )", "%s > %s\n\t%u, %u", "stack.allocCount", "0", 0, 0i64) )
    __debugbreak();
  allocCount = v6->allocCount;
  p_name = &v6->allocs[(unsigned int)(allocCount - 1)].name;
  v35 = p_name;
  if ( *p_name != name )
  {
    Com_Printf(1, "PMem allocation stack: (stack=%s, count=%u)\n", s_stackNames[v3], allocCount);
    for ( i = 0; i < v6->allocCount; ++i )
      Com_Printf(1, "%3u : %s\n", i, v6->allocs[i].name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 733, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Attempted to free PMem allocation for '%s', but it's not at the top of PMem stack %s.", name, s_stackNames[v3]) )
      __debugbreak();
  }
  pos = v6->pos;
  v11 = (Mem_PageRange *)(p_name + 7);
  v28 = (Mem_PageRange *)(p_name + 7);
  v12 = (char *)p_name - (char *)v6 - 1984;
  v31 = v12;
  v13 = (char *)p_name - (char *)v6 - 1980;
  v32 = v13;
  v14 = (char *)p_name - (char *)v6 - 2032;
  v29 = v14;
  v15 = (char *)p_name - (char *)v6 - 2008;
  v33 = v15;
  v16 = 3i64;
  v30 = 3i64;
  do
  {
    v17 = *(pos - 3);
    if ( v17 && *(unsigned __int64 *)((char *)pos + v15) )
    {
      if ( !*(_DWORD *)(v17 + 20) && *(_DWORD *)((char *)pos + v12) != -1 )
      {
        if ( *(_DWORD *)((char *)pos + v13) == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 747, ASSERT_TYPE_ASSERT, "(allocEntry.pageRange[poolIndex].lastPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "allocEntry.pageRange[poolIndex].lastPageID != MEM_PAGEID_INVALID") )
          __debugbreak();
        v18 = (unsigned __int8 *)(*(_QWORD *)v17 + ((*(unsigned __int64 *)((char *)pos + v14) + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64));
        v19 = (unsigned __int8 *)(*(_QWORD *)v17 + ((*pos + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64));
        if ( v18 >= v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 752, ASSERT_TYPE_ASSERT, "(decommitBegin < decommitEnd)", (const char *)&queryFormat, "decommitBegin < decommitEnd") )
          __debugbreak();
        PMem_DecommitMemoryPartialInternal(&resulta, (PMem_Stack)v3, v18, v19, v18, v28);
        StreamerMemLoan::GiveLoan(v5, &resulta);
        IWMem_FreeRange(*(IWMemID *)(v17 + 32), v18, v19 - v18);
        StreamerMemLoan::~StreamerMemLoan(&resulta);
        v14 = v29;
      }
      v20 = (const void *)(*(_QWORD *)v17 + *(unsigned __int64 *)((char *)pos + v14));
      v21 = v6->allocCount;
      v22 = (unsigned int)(v21 - 1);
      v23 = *(int *)(v17 + 16);
      if ( (unsigned int)v3 >= 7 )
      {
        LODWORD(v27) = 7;
        LODWORD(inoutPageRange) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 902, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( PMEM_STACK_COUNT )", "stackIndex doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", inoutPageRange, v27) )
          __debugbreak();
      }
      if ( (unsigned int)v23 >= 3 )
      {
        LODWORD(v27) = 3;
        LODWORD(inoutPageRange) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 903, ASSERT_TYPE_ASSERT, "(unsigned)( poolIndex ) < (unsigned)( MEM_POOL_COUNT )", "poolIndex doesn't index MEM_POOL_COUNT\n\t%i not in [0, %i)", inoutPageRange, v27) )
          __debugbreak();
      }
      if ( (unsigned int)v22 >= v6->allocCount )
      {
        LODWORD(v27) = v6->allocCount;
        LODWORD(inoutPageRange) = v21 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 906, ASSERT_TYPE_ASSERT, "(unsigned)( allocIndex ) < (unsigned)( stack.allocCount )", "allocIndex doesn't index stack.allocCount\n\t%i not in [0, %i)", inoutPageRange, v27) )
          __debugbreak();
      }
      if ( (_DWORD)v22 == v6->allocCount - 1 )
        v24 = v6->pos[v23];
      else
        v24 = v6->allocs[v21].pos[v23];
      IWMem_FreeRange(*(IWMemID *)(v17 + 40), v20, v24 - v6->allocs[v22].pos[v23]);
      v14 = v29;
      *pos = *(unsigned __int64 *)((char *)pos + v29);
      v12 = v31;
      *(_DWORD *)((char *)pos + v31) = -1;
      v13 = v32;
      *(_DWORD *)((char *)pos + v32) = -1;
      *(unsigned __int64 *)((char *)pos + v29) = 0i64;
      v15 = v33;
      *(unsigned __int64 *)((char *)pos + v33) = 0i64;
      v5 = result;
      v11 = v28;
      v16 = v30;
    }
    v28 = ++v11;
    ++pos;
    v30 = --v16;
  }
  while ( v16 );
  *v35 = NULL;
  --v6->allocCount;
  return v5;
}

/*
==============
PMem_GetPoolFromPtr
==============
*/
PhysicalMemoryPool *PMem_GetPoolFromPtr(const void *const ptr, const PMem_Stack stackIndex)
{
  __int64 v3; 
  __int64 v4; 
  PhysicalMemoryPool **i; 
  PhysicalMemoryPool *v6; 
  __int64 v8; 
  int v9; 

  v3 = stackIndex;
  if ( !s_pmem.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 801, ASSERT_TYPE_ASSERT, "(s_pmem.isInitialized)", (const char *)&queryFormat, "s_pmem.isInitialized") )
    __debugbreak();
  if ( (unsigned int)v3 >= 7 )
  {
    v9 = 7;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 802, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( PMEM_STACK_COUNT )", "stackIndex doesn't index PMEM_STACK_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v4 = 0i64;
  for ( i = s_pmem.stacks[v3].pools; ; ++i )
  {
    v6 = *i;
    if ( *i )
    {
      if ( (unsigned __int64)ptr >= v6->base && (unsigned __int64)ptr < v6->size + v6->base )
        break;
    }
    if ( ++v4 >= 3 )
      return 0i64;
  }
  return *i;
}

/*
==============
PMem_GetTotalCommitOnAllocSize
==============
*/
__int64 PMem_GetTotalCommitOnAllocSize()
{
  __int64 v0; 
  unsigned __int64 *pos; 
  int v2; 
  bool v3; 
  unsigned __int64 *v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  v0 = 0i64;
  pos = s_pmem.stacks[0].pos;
  v2 = 0;
  v3 = 1;
  do
  {
    if ( !v3 )
    {
      LODWORD(v9) = 7;
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 959, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( ( sizeof( *array_counter( s_pmem.stacks ) ) + 0 ) )", "stackIndex doesn't index ARRAY_COUNT( s_pmem.stacks )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v4 = pos;
    v5 = 3i64;
    do
    {
      v6 = *(v4 - 3);
      if ( v6 && !*(_DWORD *)(v6 + 20) )
        v0 += (*v4 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
      ++v4;
      --v5;
    }
    while ( v5 );
    ++v2;
    pos += 258;
    v3 = (unsigned int)v2 < 7;
  }
  while ( v2 < 7 );
  return v0;
}

/*
==============
PMem_Init
==============
*/
void PMem_Init(void)
{
  unsigned __int64 ReserveSize; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 417, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_pmem.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 418, ASSERT_TYPE_ASSERT, "(!s_pmem.isInitialized)", (const char *)&queryFormat, "!s_pmem.isInitialized") )
    __debugbreak();
  Mem_Paged_Init();
  PMem_AddPoolToStack(PMEM_STACK_GAME, MEM_POOL_MAIN, COMMIT_ON_ALLOC, 0x80000000ui64, "PMem GAME-Main");
  PMem_AddPoolToStack(PMEM_STACK_GAME, MEM_POOL_GPU_PRIVATE, COMMIT_ON_ALLOC, 0x80000000ui64, "PMem GAME-GPU");
  PMem_AddPoolToStack(PMEM_STACK_RENDER_TARGETS, MEM_POOL_GPU_PRIVATE, COMMIT_MANUALLY, 0x500000000ui64, "PMem RENDER_TARGETS-GPU");
  PMem_AddPoolToStack(PMEM_STACK_MEM_VIRTUAL, MEM_POOL_MAIN, COMMIT_MANUALLY, 0x200000000ui64, "PMem MEM_VIRTUAL-Main");
  ReserveSize = MemCard_LargeFileBuffer_GetReserveSize();
  if ( (_WORD)ReserveSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 318, ASSERT_TYPE_ASSERT, "(IsAligned( memcardReserve, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( memcardReserve, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  PMem_AddPoolToStack(PMEM_STACK_MEMCARD_LARGE_BUFFER, MEM_POOL_MAIN, COMMIT_MANUALLY, ReserveSize, "PMem MEMCARD_LARGE_BUFFER-Main");
  PMem_AddPoolToStack(PMEM_STACK_SOUND, MEM_POOL_MAIN, COMMIT_MANUALLY, 0x100000000ui64, "PMem SOUND-Main");
  PMem_AddPoolToStack(PMEM_STACK_STASHED_MEMORY, MEM_POOL_MAIN, COMMIT_MANUALLY, 0x40000000ui64, "PMem STASHED_MEMORY-Main");
  PMem_AddPoolToStack(PMEM_STACK_CINEMATIC, MEM_POOL_GPU_PRIVATE, COMMIT_ON_ALLOC, 0x10000000ui64, "PMem CINEMATIC-GPU");
  s_pmem.isInitialized = 1;
  PMem_InitStashedMemory();
}

/*
==============
PMem_InitStacksAndPools
==============
*/
void PMem_InitStacksAndPools(void)
{
  unsigned __int64 ReserveSize; 

  PMem_AddPoolToStack(PMEM_STACK_GAME, MEM_POOL_MAIN, COMMIT_ON_ALLOC, 0x80000000ui64, "PMem GAME-Main");
  PMem_AddPoolToStack(PMEM_STACK_GAME, MEM_POOL_GPU_PRIVATE, COMMIT_ON_ALLOC, 0x80000000ui64, "PMem GAME-GPU");
  PMem_AddPoolToStack(PMEM_STACK_RENDER_TARGETS, MEM_POOL_GPU_PRIVATE, COMMIT_MANUALLY, 0x500000000ui64, "PMem RENDER_TARGETS-GPU");
  PMem_AddPoolToStack(PMEM_STACK_MEM_VIRTUAL, MEM_POOL_MAIN, COMMIT_MANUALLY, 0x200000000ui64, "PMem MEM_VIRTUAL-Main");
  ReserveSize = MemCard_LargeFileBuffer_GetReserveSize();
  if ( (_WORD)ReserveSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 318, ASSERT_TYPE_ASSERT, "(IsAligned( memcardReserve, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( memcardReserve, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  PMem_AddPoolToStack(PMEM_STACK_MEMCARD_LARGE_BUFFER, MEM_POOL_MAIN, COMMIT_MANUALLY, ReserveSize, "PMem MEMCARD_LARGE_BUFFER-Main");
  PMem_AddPoolToStack(PMEM_STACK_SOUND, MEM_POOL_MAIN, COMMIT_MANUALLY, 0x100000000ui64, "PMem SOUND-Main");
  PMem_AddPoolToStack(PMEM_STACK_STASHED_MEMORY, MEM_POOL_MAIN, COMMIT_MANUALLY, 0x40000000ui64, "PMem STASHED_MEMORY-Main");
  PMem_AddPoolToStack(PMEM_STACK_CINEMATIC, MEM_POOL_GPU_PRIVATE, COMMIT_ON_ALLOC, 0x10000000ui64, "PMem CINEMATIC-GPU");
}

/*
==============
PMem_InitStashedMemory
==============
*/
char PMem_InitStashedMemory()
{
  int *v0; 
  const char *const *v1; 
  __int64 v2; 
  unsigned __int64 *p_reserveSize; 
  const char *v4; 
  unsigned __int64 v5; 
  void *v6; 
  ThreadContext CurrentThreadContext; 
  ThreadContext v8; 
  const char *allocName; 
  const char *ThreadContextName; 
  const char *v11; 
  int v13; 
  int v14; 

  v13 = 0x20000000;
  v14 = 0x20000000;
  PMem_BeginAlloc("Stashed", PMEM_STACK_STASHED_MEMORY);
  v0 = &v13;
  v1 = STASHED_NAMES;
  v2 = 2i64;
  p_reserveSize = &s_pmem.stashedMemory[0].reserveSize;
  do
  {
    v4 = *v1;
    v5 = (unsigned int)*v0;
    v6 = PMem_AllocWithLoan((unsigned int)v5, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_STASHED_MEMORY, NULL, *v1);
    p_reserveSize[1] = (unsigned __int64)MEM_PAGE_RANGE_INVALID_1;
    *(p_reserveSize - 2) = (unsigned __int64)v6;
    *(p_reserveSize - 1) = 0i64;
    *p_reserveSize = v5;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 383, ASSERT_TYPE_ASSERT, "(outStashedMem.base)", (const char *)&queryFormat, "outStashedMem.base") )
      __debugbreak();
    IWMem_Allocator_CreateFixed((IWMemID *)p_reserveSize + 2, v4, (IWMemAllocatorType)4, (const void *)*(p_reserveSize - 2), v5);
    ++v1;
    p_reserveSize += 5;
    ++v0;
    --v2;
  }
  while ( v2 );
  if ( !s_pmem.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 534, ASSERT_TYPE_ASSERT, "(s_pmem.isInitialized)", (const char *)&queryFormat, "s_pmem.isInitialized") )
    __debugbreak();
  if ( s_pmem.stacks[5].allocName != "Stashed" && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 540, ASSERT_TYPE_ASSERT, "( stack.allocName == name )", "Calling PMem_EndAlloc for allocation %s when the top of the stack currently is %s on PMem stack %s", "Stashed", s_pmem.stacks[5].allocName, s_stackNames[5]) )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v8 = CurrentThreadContext;
  if ( _InterlockedExchange((volatile __int32 *)&s_pmem.stacks[5].allocThread, 28) != CurrentThreadContext )
  {
    allocName = s_pmem.stacks[5].allocName;
    ThreadContextName = Sys_GetThreadContextName(s_pmem.stacks[5].allocThread._My_val);
    v11 = Sys_GetThreadContextName(v8);
    LOBYTE(CurrentThreadContext) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 546, ASSERT_TYPE_ASSERT, "( prevAllocThread == currentThread )", "PMem_EndAlloc called on different thread than (thread: %s) PMem_BeginAlloc (thread: %s) for allocation %s on PMem stack %s!", v11, ThreadContextName, allocName, s_stackNames[5]);
    if ( (_BYTE)CurrentThreadContext )
      __debugbreak();
  }
  s_pmem.stacks[5].allocName = NULL;
  return CurrentThreadContext;
}

/*
==============
PMem_IsInited
==============
*/
_BOOL8 PMem_IsInited()
{
  return s_pmem.isInitialized;
}

/*
==============
PMem_PopAuxAllocations
==============
*/
void PMem_PopAuxAllocations(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 460, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_pmem.enableAuxPhysicalAllocations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 461, ASSERT_TYPE_ASSERT, "(s_pmem.enableAuxPhysicalAllocations == true)", (const char *)&queryFormat, "s_pmem.enableAuxPhysicalAllocations == true") )
    __debugbreak();
  s_pmem.enableAuxPhysicalAllocations = 0;
}

/*
==============
PMem_PushAuxAllocations
==============
*/
void PMem_PushAuxAllocations(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 452, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_pmem.enableAuxPhysicalAllocations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 453, ASSERT_TYPE_ASSERT, "(s_pmem.enableAuxPhysicalAllocations == false)", (const char *)&queryFormat, "s_pmem.enableAuxPhysicalAllocations == false") )
    __debugbreak();
  s_pmem.enableAuxPhysicalAllocations = 1;
}

/*
==============
PMem_UpdateStashedMemory
==============
*/
void PMem_UpdateStashedMemory(StashedMemoryType stashType, unsigned __int64 size)
{
  __int64 v3; 
  bool v4; 
  StashedMemory *v5; 
  unsigned __int64 commitSize; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int8 *base; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  Mem_PageRange *inoutPageRange; 
  int v14; 
  StreamerMemLoan result; 

  v3 = stashType;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 210, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    v14 = 2;
    LODWORD(inoutPageRange) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( stashType ) < (unsigned)( ( sizeof( *array_counter( s_pmem.stashedMemory ) ) + 0 ) )", "stashType doesn't index ARRAY_COUNT( s_pmem.stashedMemory )\n\t%i not in [0, %i)", inoutPageRange, v14) )
      __debugbreak();
  }
  v4 = s_pmem.stashedMemory[v3].base == NULL;
  v5 = &s_pmem.stashedMemory[v3];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 215, ASSERT_TYPE_ASSERT, "(stashedMemOut.base)", (const char *)&queryFormat, "stashedMemOut.base") )
    __debugbreak();
  commitSize = v5->commitSize;
  v7 = (size + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
  if ( v7 != commitSize )
  {
    if ( commitSize )
    {
      IWMem_Free(v5->iwMemStashed, v5->base, commitSize);
      commitSize = v5->commitSize;
    }
    if ( v7 >= commitSize )
    {
      PMem_CommitStashedMemory(v5, v7 - commitSize);
    }
    else
    {
      v8 = commitSize - v7;
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 191, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( !v5->base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 192, ASSERT_TYPE_ASSERT, "(stashedMemOut.base)", (const char *)&queryFormat, "stashedMemOut.base") )
        __debugbreak();
      v9 = v5->commitSize;
      if ( v8 > v9 )
      {
        Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)18, "PMem_DecommitStashedMemory", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 196, "decommit size=%zu", v8);
        v9 = v5->commitSize;
      }
      base = v5->base;
      v11 = &v5->base[v9 - v8];
      v12 = &v5->base[v9];
      if ( s_pmem.stacks[5].allocName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 891, ASSERT_TYPE_ASSERT, "( s_pmem.stacks[stack].allocName == nullptr )", "PMem stack %s is currently in between PMem_Begin/EndAlloc. Can't call DecommitMemoryPartial!", s_stackNames[5]) )
        __debugbreak();
      if ( s_pmem.stacks[5].allocThread._My_val != THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pmem.cpp", 892, ASSERT_TYPE_ASSERT, "(s_pmem.stacks[stack].allocThread == THREAD_CONTEXT_COUNT)", (const char *)&queryFormat, "s_pmem.stacks[stack].allocThread == THREAD_CONTEXT_COUNT") )
        __debugbreak();
      PMem_DecommitMemoryPartialInternal(&result, PMEM_STACK_STASHED_MEMORY, v11, v12, base, &v5->pageRange);
      StreamerMemLoan::~StreamerMemLoan(&result);
      v5->commitSize -= v8;
    }
    if ( v7 )
    {
      IWMem_Profile_Push("StashedMemory");
      IWMem_Alloc(v5->iwMemStashed, v5->base, v7);
      IWMem_Profile_Pop();
    }
  }
}

