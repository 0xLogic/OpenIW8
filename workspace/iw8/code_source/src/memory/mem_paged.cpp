/*
==============
Mem_Paged_DecommitSubPageMemory
==============
*/

StreamerMemLoan *__fastcall Mem_Paged_DecommitSubPageMemory(StreamerMemLoan *result, unsigned __int8 *start, unsigned __int8 *end)
{
  return ?Mem_Paged_DecommitSubPageMemory@@YA?AUStreamerMemLoan@@PEAE0@Z(result, start, end);
}

/*
==============
Mem_BootInit_XB3
==============
*/

void Mem_BootInit_XB3(void)
{
  ?Mem_BootInit_XB3@@YAXXZ();
}

/*
==============
Mem_Paged_VirtualAllocReserve
==============
*/

void *__fastcall Mem_Paged_VirtualAllocReserve(unsigned __int64 size, unsigned int allocationType, unsigned int protectionFlags)
{
  return ?Mem_Paged_VirtualAllocReserve@@YAPEAX_KKK@Z(size, allocationType, protectionFlags);
}

/*
==============
Mem_Paged_GetTotalPhysicalSize
==============
*/

unsigned __int64 __fastcall Mem_Paged_GetTotalPhysicalSize()
{
  return ?Mem_Paged_GetTotalPhysicalSize@@YA_KXZ();
}

/*
==============
Mem_Paged_GetDevMemorySize
==============
*/

unsigned __int64 __fastcall Mem_Paged_GetDevMemorySize()
{
  return ?Mem_Paged_GetDevMemorySize@@YA_KXZ();
}

/*
==============
Mem_Paged_Dump
==============
*/

void Mem_Paged_Dump(void)
{
  ?Mem_Paged_Dump@@YAXXZ();
}

/*
==============
Mem_Paged_BatchFlush
==============
*/

void Mem_Paged_BatchFlush(void)
{
  ?Mem_Paged_BatchFlush@@YAXXZ();
}

/*
==============
Mem_Paged_CommitMemoryPartial
==============
*/

bool __fastcall Mem_Paged_CommitMemoryPartial(unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, StreamerMemLoan *optionalLoan, Mem_PageRange *inoutPageRange, const char *name)
{
  return ?Mem_Paged_CommitMemoryPartial@@YA_NPEAE00PEAUStreamerMemLoan@@PEAUMem_PageRange@@PEBD@Z(start, end, firstPageAddress, optionalLoan, inoutPageRange, name);
}

/*
==============
Mem_Paged_DecommitMemoryPartial
==============
*/

StreamerMemLoan *__fastcall Mem_Paged_DecommitMemoryPartial(StreamerMemLoan *result, unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, Mem_PageRange *inoutPageRange)
{
  return ?Mem_Paged_DecommitMemoryPartial@@YA?AUStreamerMemLoan@@PEAE00PEAUMem_PageRange@@@Z(result, start, end, firstPageAddress, inoutPageRange);
}

/*
==============
Mem_Paged_IsInPoolVARange
==============
*/

bool __fastcall Mem_Paged_IsInPoolVARange(Mem_Pool poolIndex, const void *const ptr)
{
  return ?Mem_Paged_IsInPoolVARange@@YA_NW4Mem_Pool@@QEBX@Z(poolIndex, ptr);
}

/*
==============
Mem_Paged_MapMemory
==============
*/

bool __fastcall Mem_Paged_MapMemory(unsigned __int8 *start, unsigned __int8 *end, const Mem_PageRange *pageRange, const Mem_MapRange *mapRanges, unsigned int mapRangeCount)
{
  return ?Mem_Paged_MapMemory@@YA_NPEAE0PEBUMem_PageRange@@PEBUMem_MapRange@@I@Z(start, end, pageRange, mapRanges, mapRangeCount);
}

/*
==============
Mem_Paged_ReserveVirtualAddressRange
==============
*/

unsigned __int64 __fastcall Mem_Paged_ReserveVirtualAddressRange(Mem_Pool pool, unsigned __int64 size, const char *debugName)
{
  return ?Mem_Paged_ReserveVirtualAddressRange@@YA_KW4Mem_Pool@@_KPEBD@Z(pool, size, debugName);
}

/*
==============
Mem_Paged_VirtualAllocCommit
==============
*/

void *__fastcall Mem_Paged_VirtualAllocCommit(void *address, unsigned __int64 size, unsigned int allocationType, unsigned int protectionFlags)
{
  return ?Mem_Paged_VirtualAllocCommit@@YAPEAXPEAX_KKK@Z(address, size, allocationType, protectionFlags);
}

/*
==============
Mem_Paged_UnmapESRAM
==============
*/

void __fastcall Mem_Paged_UnmapESRAM(unsigned __int8 *start, unsigned __int8 *end, const Mem_MapRange *mapRanges, unsigned int mapRangeCount)
{
  ?Mem_Paged_UnmapESRAM@@YAXPEAE0PEBUMem_MapRange@@I@Z(start, end, mapRanges, mapRangeCount);
}

/*
==============
Mem_Paged_IsInitialized
==============
*/

bool __fastcall Mem_Paged_IsInitialized()
{
  return ?Mem_Paged_IsInitialized@@YA_NXZ();
}

/*
==============
Mem_Paged_GetFreePhysicalSize
==============
*/

unsigned __int64 __fastcall Mem_Paged_GetFreePhysicalSize()
{
  return ?Mem_Paged_GetFreePhysicalSize@@YA_KXZ();
}

/*
==============
Mem_Paged_IsThreadContextCommitting
==============
*/

bool __fastcall Mem_Paged_IsThreadContextCommitting(ThreadContext context)
{
  return ?Mem_Paged_IsThreadContextCommitting@@YA_NW4ThreadContext@@@Z(context);
}

/*
==============
Mem_Paged_GetPoolName
==============
*/

const char *__fastcall Mem_Paged_GetPoolName(Mem_Pool pool)
{
  return ?Mem_Paged_GetPoolName@@YAPEBDW4Mem_Pool@@@Z(pool);
}

/*
==============
Mem_Paged_ReleasePhysicalPages
==============
*/

void __fastcall Mem_Paged_ReleasePhysicalPages(unsigned int pageCount)
{
  ?Mem_Paged_ReleasePhysicalPages@@YAXI@Z(pageCount);
}

/*
==============
Mem_Paged_IsInVirtualGrab
==============
*/

bool __fastcall Mem_Paged_IsInVirtualGrab(const void *const ptr)
{
  return ?Mem_Paged_IsInVirtualGrab@@YA_NQEBX@Z(ptr);
}

/*
==============
Mem_Paged_GetSubPageWaste
==============
*/

unsigned __int64 __fastcall Mem_Paged_GetSubPageWaste()
{
  return ?Mem_Paged_GetSubPageWaste@@YA_KXZ();
}

/*
==============
Mem_Paged_GetFreePageCountForCommit
==============
*/

unsigned int __fastcall Mem_Paged_GetFreePageCountForCommit(Mem_Pool pool)
{
  return ?Mem_Paged_GetFreePageCountForCommit@@YAIW4Mem_Pool@@@Z(pool);
}

/*
==============
Mem_Paged_BatchRemapSubPageMemory
==============
*/

unsigned int __fastcall Mem_Paged_BatchRemapSubPageMemory(unsigned __int8 *src, unsigned __int8 *dst, unsigned int pageCount, bool allowPartiallyCommittedRemaps)
{
  return ?Mem_Paged_BatchRemapSubPageMemory@@YAIPEAE0I_N@Z(src, dst, pageCount, allowPartiallyCommittedRemaps);
}

/*
==============
Mem_Paged_PreInitCommitMemory
==============
*/

void __fastcall Mem_Paged_PreInitCommitMemory(unsigned __int8 *start, unsigned __int8 *end)
{
  ?Mem_Paged_PreInitCommitMemory@@YAXPEAE0@Z(start, end);
}

/*
==============
Mem_Paged_CheckUnaliasedCommittedSubPageMemory
==============
*/

void __fastcall Mem_Paged_CheckUnaliasedCommittedSubPageMemory(unsigned __int8 *start, unsigned __int8 *end)
{
  ?Mem_Paged_CheckUnaliasedCommittedSubPageMemory@@YAXPEAE0@Z(start, end);
}

/*
==============
Mem_Paged_MapESRAM
==============
*/

bool __fastcall Mem_Paged_MapESRAM(unsigned __int8 *start, unsigned __int8 *end, const Mem_MapRange *mapRanges, unsigned int mapRangeCount)
{
  return ?Mem_Paged_MapESRAM@@YA_NPEAE0PEBUMem_MapRange@@I@Z(start, end, mapRanges, mapRangeCount);
}

/*
==============
Mem_Paged_AllocatePhysicalPages
==============
*/

StreamerMemLoan *__fastcall Mem_Paged_AllocatePhysicalPages(StreamerMemLoan *result, unsigned int pageCount)
{
  return ?Mem_Paged_AllocatePhysicalPages@@YA?AUStreamerMemLoan@@I@Z(result, pageCount);
}

/*
==============
Mem_Paged_BatchDecommitSubPageMemory
==============
*/

StreamerMemLoan *__fastcall Mem_Paged_BatchDecommitSubPageMemory(StreamerMemLoan *result, unsigned __int8 *start, unsigned __int8 *end)
{
  return ?Mem_Paged_BatchDecommitSubPageMemory@@YA?AUStreamerMemLoan@@PEAE0@Z(result, start, end);
}

/*
==============
Mem_Paged_CommitSubPageMemory
==============
*/

bool __fastcall Mem_Paged_CommitSubPageMemory(unsigned __int8 *start, unsigned __int8 *end, StreamerMemLoan *optionalLoan, unsigned int *outPageDeficitOrCommitCount, const char *name)
{
  return ?Mem_Paged_CommitSubPageMemory@@YA_NPEAE0PEAUStreamerMemLoan@@PEAIPEBD@Z(start, end, optionalLoan, outPageDeficitOrCommitCount, name);
}

/*
==============
Mem_Paged_RemapSubPageMemory
==============
*/

unsigned int __fastcall Mem_Paged_RemapSubPageMemory(unsigned __int8 *src, unsigned __int8 *dst, unsigned int pageCount, bool allowPartiallyCommittedRemaps)
{
  return ?Mem_Paged_RemapSubPageMemory@@YAIPEAE0I_N@Z(src, dst, pageCount, allowPartiallyCommittedRemaps);
}

/*
==============
Mem_Paged_PreInitReserveAddressRange
==============
*/

void *__fastcall Mem_Paged_PreInitReserveAddressRange(unsigned __int64 sizeInBytes)
{
  return ?Mem_Paged_PreInitReserveAddressRange@@YAPEAX_K@Z(sizeInBytes);
}

/*
==============
Mem_Paged_CheckUnaliasedDecommittedSubPageMemory
==============
*/

void __fastcall Mem_Paged_CheckUnaliasedDecommittedSubPageMemory(unsigned __int8 *start, unsigned __int8 *end)
{
  ?Mem_Paged_CheckUnaliasedDecommittedSubPageMemory@@YAXPEAE0@Z(start, end);
}

/*
==============
Mem_Paged_Init
==============
*/

void Mem_Paged_Init(void)
{
  ?Mem_Paged_Init@@YAXXZ();
}

/*
==============
Mem_Paged_GetSubPageAllocTotal
==============
*/

unsigned __int64 __fastcall Mem_Paged_GetSubPageAllocTotal()
{
  return ?Mem_Paged_GetSubPageAllocTotal@@YA_KXZ();
}

/*
==============
Mem_Paged_UnmapMemory
==============
*/

void __fastcall Mem_Paged_UnmapMemory(unsigned __int8 *start, unsigned __int8 *end, const Mem_MapRange *mapRanges, unsigned int mapRangeCount)
{
  ?Mem_Paged_UnmapMemory@@YAXPEAE0PEBUMem_MapRange@@I@Z(start, end, mapRanges, mapRangeCount);
}

/*
==============
Mem_Paged_BatchCommitSubPageMemory
==============
*/

bool __fastcall Mem_Paged_BatchCommitSubPageMemory(unsigned __int8 *start, unsigned __int8 *end, StreamerMemLoan *optionalLoan, unsigned int *outPageDeficitOrCommitCount, const char *name)
{
  return ?Mem_Paged_BatchCommitSubPageMemory@@YA_NPEAE0PEAUStreamerMemLoan@@PEAIPEBD@Z(start, end, optionalLoan, outPageDeficitOrCommitCount, name);
}

/*
==============
Mem_BootInit_XB3
==============
*/
void Mem_BootInit_XB3(void)
{
  *(_QWORD *)&s_gpuVAConfig.Flags = 0x600000000i64;
  s_gpuVAConfig.MinimumValidGraphicsAddress = 0i64;
  s_gpuVAConfig.MaximumValidGraphicsAddress = 0i64;
  D3DConfigureVirtualMemory_0(&s_gpuVAConfig);
  if ( !s_gpuVAConfig.MinimumValidGraphicsAddress || !s_gpuVAConfig.MaximumValidGraphicsAddress )
  {
    OutputDebugStringA("ERROR: D3DConfigureVirtualMemory() failed\n");
    __debugbreak();
  }
}

/*
==============
Mem_Paged_AcquireLock
==============
*/
void Mem_Paged_AcquireLock()
{
  __int64 v0; 

  Sys_ProfBeginNamedEvent(0xFF008008, "Mem_Paged_AcquireLock");
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) )
  {
    Sys_PushUnblockDatabaseThread();
    while ( 1 )
    {
      if ( ((unsigned __int64)s_memPagedLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_memPagedLock) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(s_memPagedLock, 1, 0) )
        break;
      Sys_Sleep(1);
    }
    Sys_PopUnblockDatabaseThread();
  }
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  ++*(_DWORD *)(v0 + 452);
  Sys_ProfEndNamedEvent();
}

/*
==============
Mem_Paged_AddPageMapToBatchContext
==============
*/
void Mem_Paged_AddPageMapToBatchContext(const unsigned __int64 address, const Mem_Pool pool, const unsigned int pageIndex, int pageSource, const bool needsPageSourceRemap)
{
  __int64 entryCount; 
  __int64 v10; 
  unsigned int *p_pageIndex; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned __int64 v17; 
  unsigned int v18; 
  bool v19; 
  MemPaged::BatchEntry *v20; 
  __int64 v21; 

  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1814, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( needsPageSourceRemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1819, ASSERT_TYPE_ASSERT, "(!needsPageSourceRemap)", (const char *)&queryFormat, "!needsPageSourceRemap") )
    __debugbreak();
  entryCount = s_memPaged.batchContext.entryCount;
  v10 = s_memPaged.batchContext.entryCount - 1;
  if ( (signed int)(s_memPaged.batchContext.entryCount - 1) < 0 )
  {
LABEL_26:
    v19 = (unsigned int)entryCount < 0x400;
    if ( (_DWORD)entryCount == 1024 )
    {
      Mem_Paged_FlushBatchContext();
      entryCount = s_memPaged.batchContext.entryCount;
      v19 = s_memPaged.batchContext.entryCount < 0x400;
    }
    if ( !v19 )
    {
      LODWORD(v21) = entryCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1885, ASSERT_TYPE_ASSERT, "(unsigned)( batchContext.entryCount ) < (unsigned)( ( sizeof( *array_counter( batchContext.entries ) ) + 0 ) )", "batchContext.entryCount doesn't index ARRAY_COUNT( batchContext.entries )\n\t%i not in [0, %i)", v21, 1024) )
        __debugbreak();
      entryCount = s_memPaged.batchContext.entryCount;
    }
    v20 = &s_memPaged.batchContext.entries[entryCount];
    v20->address = address;
    *((_DWORD *)v20 + 3) = ((pageSource & 3 | (4 * pool)) << 27) | 4;
    v20->pageIndex = pageIndex;
    ++s_memPaged.batchContext.entryCount;
    return;
  }
  p_pageIndex = &s_memPaged.batchContext.entries[v10].pageIndex;
  while ( 1 )
  {
    v12 = p_pageIndex[1];
    v13 = v10;
    if ( (v12 & 3) != 0 )
      goto LABEL_25;
    if ( ((v12 >> 27) & 3) != pageSource )
      goto LABEL_25;
    if ( v12 >> 29 != pool )
      goto LABEL_25;
    v14 = v12 & 0x7FFFFFC;
    if ( v14 == 0x2000 )
      goto LABEL_25;
    if ( v14 >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1847, ASSERT_TYPE_ASSERT, "(entry.pageCount < MemPaged::MAX_PER_BATCH_MAP_PAGE_COUNT)", (const char *)&queryFormat, "entry.pageCount < MemPaged::MAX_PER_BATCH_MAP_PAGE_COUNT") )
      __debugbreak();
    v15 = *((_QWORD *)p_pageIndex - 1);
    v16 = p_pageIndex[1];
    v17 = v15 + ((unsigned __int64)((v16 >> 2) & 0x1FFFFFF) << 16);
    if ( address >= v15 && address < v17 )
    {
LABEL_25:
      entryCount = s_memPaged.batchContext.entryCount;
      goto LABEL_26;
    }
    if ( v15 == address + 0x10000 )
      break;
    if ( v17 == address )
    {
      v18 = *p_pageIndex;
LABEL_23:
      if ( v18 + ((v16 >> 2) & 0x1FFFFFF) == pageIndex )
        goto LABEL_34;
    }
LABEL_24:
    --v10;
    p_pageIndex -= 4;
    if ( v13 <= 0 )
      goto LABEL_25;
  }
  v18 = *p_pageIndex;
  if ( pageIndex + 1 != *p_pageIndex )
  {
    if ( v17 == address )
      goto LABEL_23;
    goto LABEL_24;
  }
  *((_QWORD *)p_pageIndex - 1) = address;
  *p_pageIndex = pageIndex;
LABEL_34:
  p_pageIndex[1] = v16 ^ (v16 ^ (v16 + 4)) & 0x7FFFFFC;
}

/*
==============
Mem_Paged_AddPageUnmapToBatchContext
==============
*/
void Mem_Paged_AddPageUnmapToBatchContext(const unsigned __int64 address, const unsigned __int64 size)
{
  unsigned __int64 v3; 
  unsigned int entryCount; 
  __int64 v6; 
  unsigned int *v7; 
  __int64 v8; 
  bool v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 

  v3 = 452i64;
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1900, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( (_WORD)size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1901, ASSERT_TYPE_ASSERT, "(IsAligned( size, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( size, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  entryCount = s_memPaged.batchContext.entryCount;
  v6 = s_memPaged.batchContext.entryCount - 1;
  if ( (signed int)(s_memPaged.batchContext.entryCount - 1) >= 0 )
  {
    v7 = &s_memPaged.subPageHashAnchorTable[4 * s_memPaged.batchContext.entryCount + 1024];
    do
    {
      v3 = v7[3];
      v8 = v6;
      if ( (v7[3] & 3) != 1 )
        break;
      v3 = *(_QWORD *)v7 + (((v3 >> 2) & 0x1FFFFFF) << 16);
      if ( address >= *(_QWORD *)v7 && address < v3 )
        break;
      if ( *(_QWORD *)v7 == address + size )
      {
        *(_QWORD *)v7 = address;
LABEL_23:
        v7[3] ^= (v7[3] ^ (4 * (truncate_cast<unsigned int,unsigned __int64>(size >> 16) + (v7[3] >> 2)))) & 0x7FFFFFC;
        return;
      }
      if ( v3 == address )
        goto LABEL_23;
      --v6;
      v7 -= 4;
    }
    while ( v8 > 0 );
  }
  v9 = s_memPaged.batchContext.entryCount < 0x400;
  if ( s_memPaged.batchContext.entryCount == 1024 )
  {
    Mem_Paged_FlushBatchContext(v3, v6);
    entryCount = s_memPaged.batchContext.entryCount;
    v9 = s_memPaged.batchContext.entryCount < 0x400;
  }
  if ( !v9 )
  {
    v12 = 1024;
    LODWORD(v11) = entryCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1948, ASSERT_TYPE_ASSERT, "(unsigned)( batchContext.entryCount ) < (unsigned)( ( sizeof( *array_counter( batchContext.entries ) ) + 0 ) )", "batchContext.entryCount doesn't index ARRAY_COUNT( batchContext.entries )\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
    entryCount = s_memPaged.batchContext.entryCount;
  }
  v10 = entryCount;
  *((_DWORD *)&s_memPaged.batchContext.entries[v10] + 3) = (4 * ((size >> 16) & 0x1FFFFFF)) | 1;
  s_memPaged.batchContext.entries[v10].address = address;
  s_memPaged.batchContext.entries[v10].pageIndex = 0;
  ++s_memPaged.batchContext.entryCount;
}

/*
==============
Mem_Paged_AllocatePhysicalPages
==============
*/
StreamerMemLoan *Mem_Paged_AllocatePhysicalPages(StreamerMemLoan *result, unsigned int pageCount)
{
  unsigned __int64 v2; 
  StreamerMemLoan *v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  HANDLE CurrentProcess; 
  unsigned __int64 v7; 
  int v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  Mem_PageTree<262144> *pageTree; 
  int v12; 
  unsigned int v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  StreamerMemLoan *v16; 
  int v17; 
  StreamMemPool StreamMemPoolFromMemPool; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int64 v23; 
  unsigned int v24; 
  HANDLE v25; 
  StreamerMemLoan *v26; 
  StreamerMemLoan *v27; 
  __int64 v28; 
  StreamerMemLoan other; 
  __int64 v30[1024]; 

  v28 = -2i64;
  v2 = pageCount;
  v3 = result;
  v27 = result;
  v26 = result;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3728, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (_DWORD)v2 )
  {
    Mem_Paged_AcquireLock();
    v4 = 1024i64;
    if ( v2 < 0x400 )
      v4 = v2;
    v23 = v4;
    v5 = v2;
    v24 = v2;
    CurrentProcess = GetCurrentProcess();
    v25 = CurrentProcess;
    if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 648, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
        __debugbreak();
      CurrentProcess = v25;
    }
    while ( (unsigned int)AllocateTitlePhysicalPages(CurrentProcess, 0x20000000i64, &v23, v30) )
    {
      v7 = v23;
      v8 = v23;
      if ( v23 > 0xFFFFFFFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v23, "unsigned", v23) )
          __debugbreak();
        v7 = v23;
      }
      s_memPaged.totalPhysicalPageCount += v8;
      v9 = 0i64;
      v26 = NULL;
      if ( v7 )
      {
        do
        {
          v10 = v30[v9];
          if ( v10 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v10, "unsigned", v30[v9]) )
            __debugbreak();
          pageTree = s_memPaged.pageTree;
          v12 = 3;
          v13 = 4096;
          do
          {
            --v12;
            v14 = (unsigned int)v10 / v13;
            LODWORD(v10) = (unsigned int)v10 % v13;
            if ( (unsigned int)(((char *)pageTree - (char *)s_memPaged.pageTree) >> 3) >= 0x1041 )
            {
              LODWORD(v21) = 4161;
              LODWORD(v20) = ((char *)pageTree - (char *)s_memPaged.pageTree) >> 3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( entry - m_freePageTree ) < (unsigned)( PAGE_TREE_SIZE )", "entry - m_freePageTree doesn't index PAGE_TREE_SIZE\n\t%i not in [0, %i)", v20, v21) )
                __debugbreak();
            }
            if ( !v12 )
            {
              v15 = pageTree->m_freePageTree[0];
              if ( _bittest64((const __int64 *)&v15, v14) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 129, ASSERT_TYPE_ASSERT, "(level > 0 || ( *entry & Mem_PageTreeNode( 1U ) << index ) == 0)", (const char *)&queryFormat, "level > 0 || ( *entry & Mem_PageTreeNode( 1U ) << index ) == 0") )
                  __debugbreak();
              }
            }
            pageTree->m_freePageTree[0] |= 1i64 << v14;
            pageTree = (Mem_PageTree<262144> *)((char *)pageTree + 8 * (unsigned int)v14 * ((v13 - 1) / 0x3F) + 8);
            v13 >>= 6;
          }
          while ( v12 );
          v16 = v26;
          if ( s_memPaged.pageTree[0].m_freePages == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 136, ASSERT_TYPE_ASSERT, "(m_freePages != 0xffffffffui32)", (const char *)&queryFormat, "m_freePages != UINT32_MAX") )
            __debugbreak();
          ++s_memPaged.pageTree[0].m_freePages;
          v9 = (unsigned __int64)&v16->mUpdateID + 1;
          v26 = (StreamerMemLoan *)v9;
          v7 = v23;
        }
        while ( v9 < v23 );
        v5 = v24;
        v3 = v27;
      }
      v17 = v7;
      if ( v7 > 0xFFFFFFFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v7, "unsigned", v7) )
          __debugbreak();
        v7 = v23;
      }
      v5 -= v17;
      v24 = v5;
      if ( v5 < v7 )
        v7 = v5;
      v23 = v7;
      CurrentProcess = v25;
      if ( !v7 )
        goto LABEL_44;
    }
    LODWORD(v20) = GetLastError();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3748, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "AllocateTitlePhysicalPages failed with error: %x\n", v20) )
      __debugbreak();
LABEL_44:
    LODWORD(v2) = pageCount;
    Mem_Paged_ReleaseLock();
  }
  other.mUpdateID = 0i64;
  other.mPages = 0i64;
  other.mCookie = -1061110033;
  StreamMemPoolFromMemPool = Stream_Alloc_GetStreamMemPoolFromMemPool(MEM_POOL_GPU_PRIVATE);
  StreamerMemLoan::GivePages(&other, StreamMemPoolFromMemPool, v2);
  StreamerMemLoan::StreamerMemLoan(v3, &other);
  StreamerMemLoan::~StreamerMemLoan(&other);
  return v3;
}

/*
==============
Mem_Paged_BatchCommitSubPageMemory
==============
*/
bool Mem_Paged_BatchCommitSubPageMemory(unsigned __int8 *start, unsigned __int8 *end, StreamerMemLoan *optionalLoan, unsigned int *outPageDeficitOrCommitCount, const char *name)
{
  return Mem_Paged_CommitSubPageMemoryInternal(0, start, end, optionalLoan, outPageDeficitOrCommitCount, name);
}

/*
==============
Mem_Paged_BatchDecommitSubPageMemory
==============
*/
StreamerMemLoan *Mem_Paged_BatchDecommitSubPageMemory(StreamerMemLoan *result, unsigned __int8 *start, unsigned __int8 *end)
{
  Mem_Paged_DecommitSubPageMemoryInternal(result, 0, start, end);
  return result;
}

/*
==============
Mem_Paged_BatchFlush
==============
*/
void Mem_Paged_BatchFlush(void)
{
  __int64 v0; 
  __int64 v1; 

  Mem_Paged_AcquireLock();
  Mem_Paged_FlushBatchContext(v1, v0);
  Mem_Paged_ReleaseLock();
}

/*
==============
Mem_Paged_BatchMapPages
==============
*/
__int64 Mem_Paged_BatchMapPages(const BatchMapParams *params)
{
  __int64 v2; 
  char *virtualAddress; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  __int64 v7; 
  int v8; 
  MemPaged::PhysicalPageTableEntry *RefCountedPageTableEntryIfMapped; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  MemPaged::PhysicalPageTableEntry *v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  MemPaged::PhysicalPageTableEntry *v20; 
  unsigned __int64 v21; 
  CommitMode mode; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  unsigned int *v27; 
  MemPaged::PhysicalPageTableEntry *PageTableEntry; 
  MemPaged::PhysicalPageTableEntry *v29; 
  unsigned __int64 base; 
  unsigned __int64 v31; 
  const BatchUnmapParams *v32; 
  __int64 v33; 
  __int64 v34; 
  Mem_Pool pool; 
  StreamerMemLoan *loan; 
  StreamMemPool StreamMemPoolFromMemPool; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  int v43; 
  BatchUnmapResult result; 
  void *v45; 
  __int64 v46; 
  void *v47; 
  StreamerMemPageCounts *p_pagesTaken; 
  StreamerMemPageCounts pagesTaken; 

  if ( !params->pageRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2465, ASSERT_TYPE_ASSERT, "(params.pageRange)", (const char *)&queryFormat, "params.pageRange") )
    __debugbreak();
  if ( !params->neededPages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2466, ASSERT_TYPE_ASSERT, "(params.neededPages > 0)", (const char *)&queryFormat, "params.neededPages > 0") )
    __debugbreak();
  if ( !Mem_Paged_FindVirtualAddressRangeFromRange((unsigned __int8 *)params->virtualAddress, (unsigned __int8 *)params->virtualAddress + 0x10000 * (unsigned __int64)params->neededPages) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2468, ASSERT_TYPE_ASSERT, "( Mem_Paged_FindVirtualAddressRangeFromRange( static_cast<byte*>( params.virtualAddress ), static_cast<byte*>( params.virtualAddress ) + params.neededPages * MEM_PHYSICAL_PAGE_SIZE ) )", "Passed in virtual address range outside of any virtual address reservation!") )
    __debugbreak();
  v2 = tls_index;
  params->pageRange->firstPageID = -1;
  params->pageRange->lastPageID = -1;
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2474, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  virtualAddress = (char *)params->virtualAddress;
  if ( (_WORD)virtualAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2477, ASSERT_TYPE_ASSERT, "(IsAligned( address, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( address, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  v4 = 0;
  v5 = 0;
  pagesTaken.pages[0] = params->neededPages;
  v43 = 0;
  v6 = 0x7FFFF;
  v7 = 0x7FFFFi64;
  v8 = 1;
  if ( !pagesTaken.pages[0] )
  {
LABEL_111:
    PageTableEntry = Mem_Paged_GetPageTableEntry(v7);
    v29 = PageTableEntry;
    if ( params->mode == ONCE )
    {
      if ( (*(_DWORD *)PageTableEntry & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2666, ASSERT_TYPE_ASSERT, "(params.mode != CommitMode::ONCE || lastPageTableEntry.isEndOfCommitChain)", (const char *)&queryFormat, "params.mode != CommitMode::ONCE || lastPageTableEntry.isEndOfCommitChain") )
        __debugbreak();
      if ( params->mode == ONCE && (*((_DWORD *)v29 + 2) & 0x7FFFF) != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2669, ASSERT_TYPE_ASSERT, "(lastPageTableEntry.firstPageIndex == firstPageIndex)", (const char *)&queryFormat, "lastPageTableEntry.firstPageIndex == firstPageIndex") )
        __debugbreak();
    }
    base = s_memPaged.virtualMem.base;
    v31 = (unsigned __int64)(virtualAddress - 0x10000);
    if ( (unsigned __int64)(virtualAddress - 0x10000) < s_memPaged.virtualMem.base || v31 >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
        __debugbreak();
      base = s_memPaged.virtualMem.base;
    }
    if ( ((*(_QWORD *)v29 >> 22) & 0x3FFFFFi64) != truncate_cast<unsigned int,unsigned __int64>((v31 - base) >> 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2671, ASSERT_TYPE_ASSERT, "(lastPageTableEntry.virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( address - MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "lastPageTableEntry.virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( address - MEM_PHYSICAL_PAGE_SIZE )") )
      __debugbreak();
    params->pageRange->firstPageID = Mem_Paged_GetPhysicalPageIDFromIndex(v6);
    params->pageRange->lastPageID = Mem_Paged_GetPhysicalPageIDFromIndex(v7);
    if ( params->pageRange->firstPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2698, ASSERT_TYPE_ASSERT, "(params.pageRange->firstPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "params.pageRange->firstPageID != MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( params->pageRange->lastPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2699, ASSERT_TYPE_ASSERT, "(params.pageRange->lastPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "params.pageRange->lastPageID != MEM_PAGEID_INVALID") )
      __debugbreak();
    IWMem_Allocator_SetFreeMem(s_memPaged.iwMemFree, (unsigned __int64)s_memPaged.pageTree[0].m_freePages << 16);
    if ( v4 )
    {
      if ( !StreamerMemLoan::Ready(params->loan) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2720, ASSERT_TYPE_ASSERT, "(params.loan->Ready())", (const char *)&queryFormat, "params.loan->Ready()") )
        __debugbreak();
      if ( v4 > StreamerMemLoan::TotalPages(params->loan) )
      {
        LODWORD(v42) = StreamerMemLoan::TotalPages(params->loan);
        LODWORD(v41) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2721, ASSERT_TYPE_ASSERT, "( pagesFromStreamer ) <= ( params.loan->TotalPages() )", "%s <= %s\n\t%u, %u", "pagesFromStreamer", "params.loan->TotalPages()", v41, v42) )
          __debugbreak();
      }
      pool = params->pool;
      loan = params->loan;
      pagesTaken = 0i64;
      StreamMemPoolFromMemPool = Stream_Alloc_GetStreamMemPoolFromMemPool(pool);
      StreamerMemLoan::TakePages(loan, StreamMemPoolFromMemPool, v4, &pagesTaken);
    }
    return v4;
  }
  while ( params->mode == REF_COUNTED )
  {
    RefCountedPageTableEntryIfMapped = Mem_Paged_GetRefCountedPageTableEntryIfMapped((const unsigned __int64)virtualAddress, NULL);
    if ( !RefCountedPageTableEntryIfMapped )
    {
      LODWORD(v2) = tls_index;
      break;
    }
    v10 = s_memPaged.virtualMem.base;
    if ( (unsigned __int64)virtualAddress < s_memPaged.virtualMem.base || (unsigned __int64)virtualAddress >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
        __debugbreak();
      v10 = s_memPaged.virtualMem.base;
    }
    if ( ((*(_QWORD *)RefCountedPageTableEntryIfMapped >> 22) & 0x3FFFFFi64) != truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&virtualAddress[-v10] >> 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2498, ASSERT_TYPE_ASSERT, "(mappedEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( address ))", (const char *)&queryFormat, "mappedEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( address )") )
      __debugbreak();
    v11 = *(_QWORD *)RefCountedPageTableEntryIfMapped >> 44;
    if ( (v11 & 0x1FFF) == 0 )
    {
      LODWORD(v41) = v11 & 0x1FFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2499, ASSERT_TYPE_ASSERT, "( mappedEntry->refCount ) > ( 0 )", "%s > %s\n\t%u, %u", "mappedEntry->refCount", "0", v41, 0i64) )
        __debugbreak();
    }
    v12 = *(_QWORD *)RefCountedPageTableEntryIfMapped >> 44;
    if ( (v12 & 0x1FFF) == 0x1FFF )
    {
      LODWORD(v42) = 0x1FFF;
      LODWORD(v41) = v12 & 0x1FFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2500, ASSERT_TYPE_ASSERT, "( mappedEntry->refCount ) < ( PTE_REF_COUNT_MAX )", "%s < %s\n\t%u, %u", "mappedEntry->refCount", "PTE_REF_COUNT_MAX", v41, v42) )
        __debugbreak();
    }
    v13 = *(_QWORD *)RefCountedPageTableEntryIfMapped ^ (*(_QWORD *)RefCountedPageTableEntryIfMapped ^ (*(_QWORD *)RefCountedPageTableEntryIfMapped + 0x100000000000i64)) & 0x1FFF00000000000i64;
    *(_QWORD *)RefCountedPageTableEntryIfMapped = v13;
    v8 = v13 & 3;
    v14 = RefCountedPageTableEntryIfMapped - s_memPaged.pageTable;
    if ( (v14 < 0 || (unsigned __int64)v14 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v14, "signed", v14) )
      __debugbreak();
    if ( (unsigned int)v14 >= s_memPaged.pageTableSize )
    {
      LODWORD(v40) = s_memPaged.pageTableSize;
      LODWORD(v39) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2116, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    if ( v6 == 0x7FFFF )
    {
      if ( (_DWORD)v7 != 0x7FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2509, ASSERT_TYPE_ASSERT, "(lastPageIndex == INVALID_PHYSICAL_PAGE_INDEX)", (const char *)&queryFormat, "lastPageIndex == INVALID_PHYSICAL_PAGE_INDEX") )
        __debugbreak();
      v6 = v14;
    }
    v7 = (unsigned int)v14;
LABEL_110:
    LODWORD(v2) = tls_index;
    virtualAddress += 0x10000;
    if ( !--pagesTaken.pages[0] )
      goto LABEL_111;
  }
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + (unsigned int)v2) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 648, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  v15 = PageTree_Alloc(LINEAR);
  v16 = v15;
  if ( v15 != -1 )
  {
    if ( v6 == 0x7FFFF )
    {
      if ( (_DWORD)v7 != 0x7FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2595, ASSERT_TYPE_ASSERT, "(lastPageIndex == INVALID_PHYSICAL_PAGE_INDEX)", (const char *)&queryFormat, "lastPageIndex == INVALID_PHYSICAL_PAGE_INDEX") )
        __debugbreak();
      v6 = v16;
    }
    else if ( params->mode == ONCE )
    {
      if ( (unsigned int)v7 >= s_memPaged.pageTableSize )
      {
        LODWORD(v40) = s_memPaged.pageTableSize;
        LODWORD(v39) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v39, v40) )
          __debugbreak();
      }
      v17 = &s_memPaged.pageTable[v7];
      if ( (*(_DWORD *)v17 & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2606, ASSERT_TYPE_ASSERT, "(lastPageTableEntry.isEndOfCommitChain)", (const char *)&queryFormat, "lastPageTableEntry.isEndOfCommitChain") )
        __debugbreak();
      if ( (*((_DWORD *)v17 + 2) & 0x7FFFF) != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2607, ASSERT_TYPE_ASSERT, "(lastPageTableEntry.firstPageIndex == firstPageIndex)", (const char *)&queryFormat, "lastPageTableEntry.firstPageIndex == firstPageIndex") )
        __debugbreak();
      if ( (*(_DWORD *)v17 & 3) != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2608, ASSERT_TYPE_ASSERT, "(static_cast<PageSource>( lastPageTableEntry.pageSource ) == lastPageSource)", (const char *)&queryFormat, "static_cast<PageSource>( lastPageTableEntry.pageSource ) == lastPageSource") )
        __debugbreak();
      v18 = s_memPaged.virtualMem.base;
      v19 = (unsigned __int64)(virtualAddress - 0x10000);
      if ( (unsigned __int64)(virtualAddress - 0x10000) < s_memPaged.virtualMem.base || v19 >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
          __debugbreak();
        v18 = s_memPaged.virtualMem.base;
      }
      if ( ((*(_QWORD *)v17 >> 22) & 0x3FFFFFi64) != truncate_cast<unsigned int,unsigned __int64>((v19 - v18) >> 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2609, ASSERT_TYPE_ASSERT, "(lastPageTableEntry.virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( address - MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "lastPageTableEntry.virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( address - MEM_PHYSICAL_PAGE_SIZE )") )
        __debugbreak();
      if ( (*((_DWORD *)v17 + 2) & 0x80000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2610, ASSERT_TYPE_ASSERT, "(lastPageTableEntry.commitMode == static_cast<uint>( CommitMode::ONCE ))", (const char *)&queryFormat, "lastPageTableEntry.commitMode == static_cast<uint>( CommitMode::ONCE )") )
        __debugbreak();
      *(_QWORD *)v17 = *(_QWORD *)v17 & 0xFFFFFFFFFFC00003ui64 | (4 * (v16 & 0x7FFFF));
    }
    if ( (unsigned int)v16 >= s_memPaged.pageTableSize )
    {
      LODWORD(v40) = s_memPaged.pageTableSize;
      LODWORD(v39) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    v20 = &s_memPaged.pageTable[v16];
    if ( (*(_DWORD *)v20 & 0x1FFFFC) != 2097148i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2616, ASSERT_TYPE_ASSERT, "(pageTableEntry.nextPageIndex == INVALID_PHYSICAL_PAGE_INDEX)", (const char *)&queryFormat, "pageTableEntry.nextPageIndex == INVALID_PHYSICAL_PAGE_INDEX") )
      __debugbreak();
    if ( (*((_DWORD *)v20 + 2) & 0x7FFFF) != 0x7FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2617, ASSERT_TYPE_ASSERT, "(pageTableEntry.firstPageIndex == INVALID_PHYSICAL_PAGE_INDEX)", (const char *)&queryFormat, "pageTableEntry.firstPageIndex == INVALID_PHYSICAL_PAGE_INDEX") )
      __debugbreak();
    if ( (*(_QWORD *)v20 & 0xFFFFFC00000i64) != 0xFFFFFC00000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2618, ASSERT_TYPE_ASSERT, "(pageTableEntry.virtualPageIndex == INVALID_VIRTUAL_PAGE_INDEX)", (const char *)&queryFormat, "pageTableEntry.virtualPageIndex == INVALID_VIRTUAL_PAGE_INDEX") )
      __debugbreak();
    v21 = *(_QWORD *)v20 & 0xFFFFFFFFFFFFFFFCui64;
    *(_QWORD *)v20 = v21;
    mode = params->mode;
    if ( params->mode == ONCE )
    {
      *((_DWORD *)v20 + 2) ^= (v6 ^ *((_DWORD *)v20 + 2)) & 0x7FFFF;
      mode = params->mode;
    }
    v23 = v21 >> 44;
    *((_DWORD *)v20 + 2) ^= (*((_DWORD *)v20 + 2) ^ (mode << 19)) & 0x80000;
    if ( (v23 & 0x1FFF) != 0x1FFF )
    {
      LODWORD(v42) = 0x1FFF;
      LODWORD(v41) = v23 & 0x1FFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2632, ASSERT_TYPE_ASSERT, "( pageTableEntry.refCount ) == ( PTE_REF_COUNT_MAX )", "%s == %s\n\t%u, %u", "pageTableEntry.refCount", "PTE_REF_COUNT_MAX", v41, v42) )
        __debugbreak();
    }
    v24 = s_memPaged.virtualMem.base;
    if ( (unsigned __int64)virtualAddress < s_memPaged.virtualMem.base || (unsigned __int64)virtualAddress >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
        __debugbreak();
      v24 = s_memPaged.virtualMem.base;
    }
    v25 = ((unsigned __int64)(truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&virtualAddress[-v24] >> 16) & 0x3FFFFF) << 22) | *(_QWORD *)v20 & 0xFFFFF000003FFFFFui64;
    *(_QWORD *)v20 = v25;
    if ( params->mode )
    {
      if ( params->mode != REF_COUNTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2641, ASSERT_TYPE_ASSERT, "(params.mode == CommitMode::REF_COUNTED)", (const char *)&queryFormat, "params.mode == CommitMode::REF_COUNTED") )
        __debugbreak();
      v26 = *(_QWORD *)v20 & 0xFE000FFFFFDFFFFFui64 | 0x100000000000i64;
      *(_QWORD *)v20 = v26;
      v27 = &s_memPaged.subPageHashAnchorTable[(unsigned int)v26 >> 22];
      *(_QWORD *)v20 = v26 ^ ((unsigned int)v26 ^ (4 * *v27)) & 0x1FFFFC;
      *v27 = v16;
    }
    else
    {
      *(_QWORD *)v20 = v25 & 0xFE000FFFFFDFFFFFui64 | 0x200000;
    }
    Mem_Paged_AddPageMapToBatchContext((const unsigned __int64)virtualAddress, (const Mem_Pool)params->pool, v16, 0, 0);
    v7 = v16;
    v8 = 0;
    v4 = ++v43;
    ++v5;
    goto LABEL_110;
  }
  if ( virtualAddress == params->virtualAddress )
  {
    if ( v6 != 0x7FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2561, ASSERT_TYPE_ASSERT, "(firstPageIndex == INVALID_PHYSICAL_PAGE_INDEX)", (const char *)&queryFormat, "firstPageIndex == INVALID_PHYSICAL_PAGE_INDEX") )
      __debugbreak();
    if ( (_DWORD)v7 != 0x7FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2562, ASSERT_TYPE_ASSERT, "(lastPageIndex == INVALID_PHYSICAL_PAGE_INDEX)", (const char *)&queryFormat, "lastPageIndex == INVALID_PHYSICAL_PAGE_INDEX") )
      __debugbreak();
  }
  else
  {
    if ( v6 == 0x7FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2566, ASSERT_TYPE_ASSERT, "(firstPageIndex != INVALID_PHYSICAL_PAGE_INDEX)", (const char *)&queryFormat, "firstPageIndex != INVALID_PHYSICAL_PAGE_INDEX") )
      __debugbreak();
    pagesTaken.pages[0] = Mem_Paged_GetPhysicalPageIDFromIndex(v6);
    pagesTaken.pages[1] = Mem_Paged_GetPhysicalPageIDFromIndex(v7);
    result.unmappedPageCount = params->mode;
    v45 = params->virtualAddress;
    v47 = v45;
    p_pagesTaken = &pagesTaken;
    v46 = virtualAddress - (_BYTE *)v45;
    Mem_Paged_BatchUnmapPages(&result, v32);
    Mem_Paged_FlushBatchContext(v34, v33);
  }
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + (unsigned int)v2) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 677, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  LODWORD(v40) = s_memPaged.pageTree[0].m_freePages;
  LODWORD(v39) = params->neededPages;
  Mem_Error_CannotAlloc_Dev(MOVEMENT, "Mem_Paged_BatchMapPages", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2585, "Mem_Paged_BatchMapPages: neededPages=%u freePages=%u", v39, v40);
  return 0i64;
}

/*
==============
Mem_Paged_BatchRemapSubPageMemory
==============
*/
unsigned int Mem_Paged_BatchRemapSubPageMemory(unsigned __int8 *src, unsigned __int8 *dst, unsigned int pageCount, bool allowPartiallyCommittedRemaps)
{
  return Mem_Paged_RemapSubPageMemoryInternal(0, src, dst, pageCount, allowPartiallyCommittedRemaps);
}

/*
==============
Mem_Paged_BatchUnmapPages
==============
*/
BatchUnmapResult *Mem_Paged_BatchUnmapPages(BatchUnmapResult *result, const BatchUnmapParams *params)
{
  _QWORD *v3; 
  BatchUnmapResult resulta; 

  if ( !*(_QWORD *)&result[4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2365, ASSERT_TYPE_ASSERT, "(params.pageRange)", (const char *)&queryFormat, "params.pageRange") )
    __debugbreak();
  if ( !*(_QWORD *)&result[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2366, ASSERT_TYPE_ASSERT, "(params.virtualAddress)", (const char *)&queryFormat, "params.virtualAddress") )
    __debugbreak();
  if ( !*(_QWORD *)&result[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2367, ASSERT_TYPE_ASSERT, "(params.size)", (const char *)&queryFormat, "params.size") )
    __debugbreak();
  if ( !*(_QWORD *)&result[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2368, ASSERT_TYPE_ASSERT, "(params.firstPageAddress)", (const char *)&queryFormat, "params.firstPageAddress") )
    __debugbreak();
  if ( LOWORD(result[2].unmappedPageCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2369, ASSERT_TYPE_ASSERT, "(IsAligned( params.size, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( params.size, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( LOWORD(result[1].unmappedPageCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2370, ASSERT_TYPE_ASSERT, "(IsAligned( reinterpret_cast<uintptr_t>( params.virtualAddress ), MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( reinterpret_cast<uintptr_t>( params.virtualAddress ), MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( LOWORD(result[3].unmappedPageCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2371, ASSERT_TYPE_ASSERT, "(IsAligned( reinterpret_cast<uintptr_t>( params.firstPageAddress ), MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( reinterpret_cast<uintptr_t>( params.firstPageAddress ), MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( !Mem_Paged_FindVirtualAddressRangeFromRange(*(unsigned __int8 **)&result[1], (unsigned __int8 *)(*(_QWORD *)&result[1] + *(_QWORD *)&result[2])) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2373, ASSERT_TYPE_ASSERT, "( Mem_Paged_FindVirtualAddressRangeFromRange( static_cast<byte*>( params.virtualAddress ), static_cast<byte*>( params.virtualAddress ) + params.size ) )", "Passed in virtual address range outside of any virtual address reservation!") )
    __debugbreak();
  if ( *(_QWORD *)&result[3] > *(_QWORD *)&result[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2375, ASSERT_TYPE_ASSERT, "(params.firstPageAddress <= params.virtualAddress)", (const char *)&queryFormat, "params.firstPageAddress <= params.virtualAddress") )
    __debugbreak();
  v3 = NtCurrentTeb()->Reserved1[11];
  resulta = 0i64;
  if ( !*(_DWORD *)(v3[tls_index] + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2384, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( result->unmappedPageCount )
  {
    if ( result->unmappedPageCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2399, ASSERT_TYPE_ASSERT, "(params.mode == CommitMode::REF_COUNTED)", (const char *)&queryFormat, "params.mode == CommitMode::REF_COUNTED") )
      __debugbreak();
    Mem_Paged_UnmapRefCountedPages(*(void **)&result[1], *(_QWORD *)&result[2], &resulta);
  }
  else
  {
    Mem_Paged_AddPageUnmapToBatchContext(*(_QWORD *)&result[1], *(_QWORD *)&result[2]);
    Mem_Paged_RemoveFromPageTable(*(void **)&result[1], *(_QWORD *)&result[2], *(void **)&result[3], *(Mem_PageRange **)&result[4], &resulta);
    resulta.unmappedPageCount = truncate_cast<unsigned int,unsigned __int64>(*(_QWORD *)&result[2] >> 16);
  }
  IWMem_Allocator_SetFreeMem(s_memPaged.iwMemFree, (unsigned __int64)s_memPaged.pageTree[0].m_freePages << 16);
  return (BatchUnmapResult *)resulta;
}

/*
==============
Mem_Paged_CheckUnaliasedCommittedSubPageMemory
==============
*/
void Mem_Paged_CheckUnaliasedCommittedSubPageMemory(unsigned __int8 *start, unsigned __int8 *end)
{
  Mem_Pool PoolFromPtr; 
  unsigned int v5; 
  unsigned int v6; 
  const unsigned __int8 *i; 
  MemPaged::PhysicalPageTableEntry *RefCountedPageTableEntryIfMapped; 
  unsigned __int64 base; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  bool v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  Mem_Pool v16; 
  __int64 v17; 
  unsigned int optOutPrevPageIndex; 

  if ( ((unsigned __int8)start & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3191, ASSERT_TYPE_ASSERT, "(IsAligned( start, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( start, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  if ( ((unsigned __int8)end & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3192, ASSERT_TYPE_ASSERT, "(IsAligned( end, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  if ( start >= end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3193, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  Mem_Paged_AcquireLock();
  PoolFromPtr = Mem_Paged_GetPoolFromPtr(start);
  if ( Mem_Paged_GetPoolFromPtr(end - 1) != PoolFromPtr )
  {
    v16 = Mem_Paged_GetPoolFromPtr(end - 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3198, ASSERT_TYPE_ASSERT, "( Mem_Paged_GetPoolFromPtr( end - 1 ) ) == ( pool )", "%s == %s\n\t%i, %i", "Mem_Paged_GetPoolFromPtr( end - 1 )", "pool", v16, PoolFromPtr) )
      __debugbreak();
  }
  v5 = truncate_cast<unsigned int,unsigned __int64>((((unsigned __int64)(end + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) - ((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64)) >> 16);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3203, ASSERT_TYPE_ASSERT, "(pageCount > 0)", (const char *)&queryFormat, "pageCount > 0") )
    __debugbreak();
  v6 = 0;
  for ( i = (const unsigned __int8 *)((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64); v6 < v5; ++v6 )
  {
    optOutPrevPageIndex = 0x7FFFF;
    RefCountedPageTableEntryIfMapped = Mem_Paged_GetRefCountedPageTableEntryIfMapped((const unsigned __int64)i, &optOutPrevPageIndex);
    if ( !RefCountedPageTableEntryIfMapped )
    {
      Com_PrintError(0, "Trying to walk unmapped page @ 0x%zx for sub-page alloc [0x%p, 0x%p)!\n", (size_t)i, start, end);
      Mem_Paged_PrintSubPageMemoryRefCounts(start, end);
      Stream_Logger_Dump(i);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3216, ASSERT_TYPE_ASSERT, "( pageTableEntry )", "Trying to walk unmapped page @ 0x%016zx", (size_t)i) )
        __debugbreak();
    }
    base = s_memPaged.virtualMem.base;
    if ( (unsigned __int64)i < s_memPaged.virtualMem.base || (unsigned __int64)i >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
        __debugbreak();
      base = s_memPaged.virtualMem.base;
    }
    if ( ((*(_QWORD *)RefCountedPageTableEntryIfMapped >> 22) & 0x3FFFFFi64) != truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&i[-base] >> 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3219, ASSERT_TYPE_ASSERT, "(pageTableEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( addressWalk ))", (const char *)&queryFormat, "pageTableEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( addressWalk )") )
      __debugbreak();
    if ( (v6 || start == (unsigned __int8 *)((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64)) && (v6 != v5 - 1 || end == (unsigned __int8 *)((unsigned __int64)(end + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64)) )
    {
      v13 = *(_QWORD *)RefCountedPageTableEntryIfMapped;
      if ( ((*(_QWORD *)RefCountedPageTableEntryIfMapped >> 44) & 0x1FFFi64) != 1 )
      {
        Com_PrintError(0, "Expected page 0x%zx for sub-page alloc [0x%p, 0x%p) to have ref count == 1 but it was %u!\n", (size_t)i, start, end, (*(_QWORD *)RefCountedPageTableEntryIfMapped >> 44) & 0x1FFFi64);
        Mem_Paged_PrintSubPageMemoryRefCounts(start, end);
        Stream_Logger_Dump(i);
        v13 = *(_QWORD *)RefCountedPageTableEntryIfMapped;
      }
      v14 = v13 >> 44;
      if ( (v14 & 0x1FFF) == 1 )
        goto LABEL_42;
      LODWORD(v17) = 1;
      LODWORD(v15) = v14 & 0x1FFF;
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3241, ASSERT_TYPE_ASSERT, "( pageTableEntry->refCount ) == ( 1 )", "%s == %s\n\t%u, %u", "pageTableEntry->refCount", "1", v15, v17);
    }
    else
    {
      v10 = *(_QWORD *)RefCountedPageTableEntryIfMapped;
      if ( (*(_QWORD *)RefCountedPageTableEntryIfMapped & 0x1FFF00000000000i64) == 0 )
      {
        Com_PrintError(0, "Expected page 0x%zx for sub-page alloc [0x%p, 0x%p) to have ref count >= 1 but it was 0!\n", (size_t)i, start, end);
        Mem_Paged_PrintSubPageMemoryRefCounts(start, end);
        Stream_Logger_Dump(i);
        v10 = *(_QWORD *)RefCountedPageTableEntryIfMapped;
      }
      v11 = v10 >> 44;
      if ( (v11 & 0x1FFF) != 0 )
        goto LABEL_42;
      LODWORD(v17) = 1;
      LODWORD(v15) = v11 & 0x1FFF;
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3230, ASSERT_TYPE_ASSERT, "( pageTableEntry->refCount ) >= ( 1 )", "%s >= %s\n\t%u, %u", "pageTableEntry->refCount", "1", v15, v17);
    }
    if ( v12 )
      __debugbreak();
LABEL_42:
    i += 0x10000;
  }
  Mem_Paged_ReleaseLock();
}

/*
==============
Mem_Paged_CheckUnaliasedDecommittedSubPageMemory
==============
*/
void Mem_Paged_CheckUnaliasedDecommittedSubPageMemory(unsigned __int8 *start, unsigned __int8 *end)
{
  const unsigned __int8 *v4; 
  unsigned int v5; 
  int v6; 
  MemPaged::PhysicalPageTableEntry *RefCountedPageTableEntryIfMapped; 
  MemPaged::PhysicalPageTableEntry *v8; 
  bool v9; 
  unsigned __int64 base; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  unsigned int optOutPrevPageIndex; 

  if ( ((unsigned __int8)start & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3253, ASSERT_TYPE_ASSERT, "(IsAligned( start, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( start, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  if ( ((unsigned __int8)end & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3254, ASSERT_TYPE_ASSERT, "(IsAligned( end, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  if ( start >= end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3255, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  v4 = (const unsigned __int8 *)((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64);
  v5 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&end[-((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64) + 0xFFFF] >> 16);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3260, ASSERT_TYPE_ASSERT, "(pageCount > 0)", (const char *)&queryFormat, "pageCount > 0") )
    __debugbreak();
  Mem_Paged_AcquireLock();
  v6 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      optOutPrevPageIndex = 0x7FFFF;
      RefCountedPageTableEntryIfMapped = Mem_Paged_GetRefCountedPageTableEntryIfMapped((const unsigned __int64)v4, &optOutPrevPageIndex);
      v8 = RefCountedPageTableEntryIfMapped;
      if ( !v6 || v6 == v5 - 1 )
        break;
      if ( RefCountedPageTableEntryIfMapped )
      {
        Com_PrintError(0, "Trying to reserve already mapped page @ 0x%zx with ref count %u for range [0x%p, 0x%p)\n", (size_t)v4, (*(_QWORD *)RefCountedPageTableEntryIfMapped >> 44) & 0x1FFFi64, start, end);
        Mem_Paged_PrintSubPageMemoryRefCounts(start, end);
        Stream_Logger_Dump(v4);
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3317, ASSERT_TYPE_ASSERT, "(pageTableEntry == nullptr)", (const char *)&queryFormat, "pageTableEntry == nullptr");
LABEL_31:
        if ( v9 )
          __debugbreak();
      }
LABEL_33:
      v4 += 0x10000;
      if ( ++v6 >= v5 )
        goto LABEL_34;
    }
    if ( !RefCountedPageTableEntryIfMapped )
      goto LABEL_33;
    base = s_memPaged.virtualMem.base;
    if ( (unsigned __int64)v4 < s_memPaged.virtualMem.base || (unsigned __int64)v4 >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
        __debugbreak();
      base = s_memPaged.virtualMem.base;
    }
    if ( ((*(_QWORD *)v8 >> 22) & 0x3FFFFFi64) != truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&v4[-base] >> 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3274, ASSERT_TYPE_ASSERT, "(pageTableEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( addressWalk ))", (const char *)&queryFormat, "pageTableEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( addressWalk )") )
      __debugbreak();
    v11 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 0x1FFF00000000000i64) == 0 )
    {
      Com_PrintError(0, "Expected page 0x%zx for sub-page alloc [0x%p, 0x%p) to have ref count == 0 but it was %u!\n", (size_t)v4, start, end, 0i64);
      Mem_Paged_PrintSubPageMemoryRefCounts(start, end);
      Stream_Logger_Dump(v4);
      v11 = *(_QWORD *)v8;
    }
    v12 = v11 >> 44;
    if ( (v12 & 0x1FFF) != 0 )
      goto LABEL_33;
    LODWORD(v13) = v12 & 0x1FFF;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3283, ASSERT_TYPE_ASSERT, "( pageTableEntry->refCount ) != ( 0 )", "%s != %s\n\t%u, %u", "pageTableEntry->refCount", "0", v13, 0i64);
    goto LABEL_31;
  }
LABEL_34:
  Mem_Paged_ReleaseLock();
}

/*
==============
Mem_Paged_CommitMemoryPartial
==============
*/
bool Mem_Paged_CommitMemoryPartial(unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, StreamerMemLoan *optionalLoan, Mem_PageRange *inoutPageRange, const char *name)
{
  Mem_Pool PoolFromPtr; 

  PoolFromPtr = Mem_Paged_GetPoolFromPtr(start);
  return Mem_Paged_CommitMemoryPartialInternal(start, end, firstPageAddress, PoolFromPtr, optionalLoan, inoutPageRange, name);
}

/*
==============
Mem_Paged_CommitMemoryPartialInternal
==============
*/
__int64 Mem_Paged_CommitMemoryPartialInternal(unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, const Mem_Pool pool, StreamerMemLoan *optionalLoan, Mem_PageRange *inoutPageRange, const char *name)
{
  unsigned int v11; 
  StreamerMemLoan *v12; 
  unsigned __int8 v13; 
  __int64 v14; 
  _QWORD *v15; 
  __int64 v16; 
  MemPaged::PhysicalPageTableEntry *v17; 
  unsigned int firstPageID; 
  unsigned int v19; 
  MemPaged::PhysicalPageTableEntry *v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  bool v23; 
  unsigned __int8 *v24; 
  unsigned __int64 base; 
  unsigned int v26; 
  __int64 v27; 
  __int64 v28; 
  Mem_PageRange v29; 
  unsigned __int64 v30; 
  Mem_PageID v31; 
  Mem_PageID v32; 
  Mem_PageID v33; 
  MemPaged::PhysicalPageTableEntry *v34; 
  unsigned int PhysicalPageIndexFromID; 
  unsigned int v36; 
  unsigned int v37; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  Mem_Pool PoolFromPtr; 
  __int64 v43; 
  Mem_PageID v44; 
  Mem_PageID pageID; 
  const char *v46; 
  unsigned int outPageDeficit; 
  StreamerMemLoan *v48; 
  BatchMapParams params; 
  __int64 v50; 
  StreamerMemLoan v51; 

  v50 = -2i64;
  v46 = name;
  Mem_Paged_ThreadCheck();
  if ( start < firstPageAddress && firstPageAddress != end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2818, ASSERT_TYPE_ASSERT, "(!frontal || firstPageAddress == end)", (const char *)&queryFormat, "!frontal || firstPageAddress == end") )
    __debugbreak();
  if ( (_WORD)start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2820, ASSERT_TYPE_ASSERT, "(IsAligned( start, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( start, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( (_WORD)end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2821, ASSERT_TYPE_ASSERT, "(IsAligned( end, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( start >= end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2822, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  if ( Mem_Paged_GetPoolFromPtr(end - 1) != pool )
  {
    PoolFromPtr = Mem_Paged_GetPoolFromPtr(end - 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2823, ASSERT_TYPE_ASSERT, "( Mem_Paged_GetPoolFromPtr( end - 1 ) ) == ( pool )", "%s == %s\n\t%i, %i", "Mem_Paged_GetPoolFromPtr( end - 1 )", "pool", PoolFromPtr, pool) )
      __debugbreak();
  }
  if ( Mem_Paged_GetPoolFromPtr(firstPageAddress) != pool )
  {
    LODWORD(v43) = pool;
    LODWORD(v41) = Mem_Paged_GetPoolFromPtr(firstPageAddress);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2824, ASSERT_TYPE_ASSERT, "( Mem_Paged_GetPoolFromPtr( firstPageAddress ) ) == ( pool )", "%s == %s\n\t%i, %i", "Mem_Paged_GetPoolFromPtr( firstPageAddress )", "pool", v41, v43) )
      __debugbreak();
  }
  if ( !inoutPageRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2825, ASSERT_TYPE_ASSERT, "(inoutPageRange)", (const char *)&queryFormat, "inoutPageRange") )
    __debugbreak();
  v11 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(end - start) >> 16);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2828, ASSERT_TYPE_ASSERT, "(neededPages > 0)", (const char *)&queryFormat, "neededPages > 0") )
    __debugbreak();
  Mem_Paged_PushThreadContextCommitting();
  v51.mUpdateID = 0i64;
  v51.mPages = 0i64;
  v51.mCookie = -1061110033;
  v12 = &v51;
  if ( optionalLoan )
    v12 = optionalLoan;
  v48 = v12;
  if ( !Mem_Paged_RequestPagesFromStreamerAndAcquireLock(v12, ONCE, pool, v11, &outPageDeficit) )
  {
    if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2839, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsLocked())", (const char *)&queryFormat, "!Mem_Paged_IsLocked()") )
      __debugbreak();
    Mem_Paged_PopThreadContextCommitting();
    v13 = 0;
    goto LABEL_111;
  }
  v14 = tls_index;
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2843, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  v15 = NtCurrentTeb()->Reserved1[11];
  v16 = v15[v14];
  if ( !*(_DWORD *)(v16 + 452) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 677, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( s_memPaged.pageTree[0].m_freePages < v11 )
  {
    if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v14) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 677, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
      __debugbreak();
    LODWORD(v43) = v11;
    LODWORD(v41) = s_memPaged.pageTree[0].m_freePages;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2844, ASSERT_TYPE_ASSERT, "( Mem_Paged_GetFreePageCountForCommit_AlreadyLocked( pool ) ) >= ( neededPages )", "%s >= %s\n\t%u, %u", "Mem_Paged_GetFreePageCountForCommit_AlreadyLocked( pool )", "neededPages", v41, v43) )
      __debugbreak();
  }
  if ( inoutPageRange->firstPageID != -1 )
  {
    if ( inoutPageRange->lastPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2852, ASSERT_TYPE_ASSERT, "(inoutPageRange->lastPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "inoutPageRange->lastPageID != MEM_PAGEID_INVALID") )
      __debugbreak();
    v17 = &s_memPaged.pageTable[Mem_Paged_GetPhysicalPageIndexFromID(inoutPageRange->lastPageID)];
    if ( (*(_DWORD *)v17 & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2856, ASSERT_TYPE_ASSERT, "(lastPageEntry.isEndOfCommitChain)", (const char *)&queryFormat, "lastPageEntry.isEndOfCommitChain") )
      __debugbreak();
    firstPageID = inoutPageRange->firstPageID;
    if ( inoutPageRange->firstPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2073, ASSERT_TYPE_ASSERT, "(pageID < MEM_PAGEID_INVALID)", (const char *)&queryFormat, "pageID < MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( firstPageID >= s_memPaged.pageTableSize )
    {
      LODWORD(v40) = s_memPaged.pageTableSize;
      LODWORD(v39) = firstPageID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2075, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    if ( (*((_DWORD *)v17 + 2) & 0x7FFFF) != firstPageID )
    {
      v19 = inoutPageRange->firstPageID;
      if ( inoutPageRange->firstPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2073, ASSERT_TYPE_ASSERT, "(pageID < MEM_PAGEID_INVALID)", (const char *)&queryFormat, "pageID < MEM_PAGEID_INVALID") )
        __debugbreak();
      if ( v19 >= s_memPaged.pageTableSize )
      {
        LODWORD(v40) = s_memPaged.pageTableSize;
        LODWORD(v39) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2075, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v39, v40) )
          __debugbreak();
      }
      LODWORD(v43) = v19;
      LODWORD(v41) = *((_DWORD *)v17 + 2) & 0x7FFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2857, ASSERT_TYPE_ASSERT, "( lastPageEntry.firstPageIndex ) == ( Mem_Paged_GetPhysicalPageIndexFromID( inoutPageRange->firstPageID ) )", "%s == %s\n\t%u, %u", "lastPageEntry.firstPageIndex", "Mem_Paged_GetPhysicalPageIndexFromID( inoutPageRange->firstPageID )", v41, v43) )
        __debugbreak();
    }
    if ( start >= firstPageAddress )
    {
      v24 = start - 0x10000;
      base = s_memPaged.virtualMem.base;
      if ( (unsigned __int64)(start - 0x10000) < s_memPaged.virtualMem.base || (unsigned __int64)v24 >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
          __debugbreak();
        base = s_memPaged.virtualMem.base;
      }
      v26 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&v24[-base] >> 16);
      v16 = (*(_QWORD *)v17 >> 22) & 0x3FFFFFi64;
      if ( v16 == v26 )
        goto LABEL_89;
      LODWORD(v43) = Mem_Paged_GetVirtualPageIndexFromVirtualAddress((const unsigned __int64)(start - 0x10000));
      LODWORD(v41) = (*(_QWORD *)v17 >> 22) & 0x3FFFFF;
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2867, ASSERT_TYPE_ASSERT, "( lastPageEntry.virtualPageIndex ) == ( Mem_Paged_GetVirtualPageIndexFromVirtualAddress( reinterpret_cast<uintptr_t>( start ) - MEM_PHYSICAL_PAGE_SIZE ) )", "%s == %s\n\t%u, %u", "lastPageEntry.virtualPageIndex", "Mem_Paged_GetVirtualPageIndexFromVirtualAddress( reinterpret_cast<uintptr_t>( start ) - MEM_PHYSICAL_PAGE_SIZE )", v41, v43);
    }
    else
    {
      if ( firstPageAddress != end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2860, ASSERT_TYPE_ASSERT, "(firstPageAddress == end)", (const char *)&queryFormat, "firstPageAddress == end") )
        __debugbreak();
      v20 = &s_memPaged.pageTable[Mem_Paged_GetPhysicalPageIndexFromID(inoutPageRange->firstPageID)];
      v21 = s_memPaged.virtualMem.base;
      if ( (unsigned __int64)firstPageAddress < s_memPaged.virtualMem.base || (unsigned __int64)firstPageAddress >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
          __debugbreak();
        v21 = s_memPaged.virtualMem.base;
      }
      v22 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&firstPageAddress[-v21] >> 16);
      v15 = (_QWORD *)((*(_QWORD *)v20 >> 22) & 0x3FFFFFi64);
      if ( v15 == (_QWORD *)v22 )
        goto LABEL_89;
      LODWORD(v43) = Mem_Paged_GetVirtualPageIndexFromVirtualAddress((const unsigned __int64)firstPageAddress);
      LODWORD(v41) = (*(_QWORD *)v20 >> 22) & 0x3FFFFF;
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2863, ASSERT_TYPE_ASSERT, "( firstPageEntry.virtualPageIndex ) == ( Mem_Paged_GetVirtualPageIndexFromVirtualAddress( oldStartPos ) )", "%s == %s\n\t%u, %u", "firstPageEntry.virtualPageIndex", "Mem_Paged_GetVirtualPageIndexFromVirtualAddress( oldStartPos )", v41, v43);
    }
    goto LABEL_87;
  }
  if ( inoutPageRange->lastPageID != -1 )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2872, ASSERT_TYPE_ASSERT, "(inoutPageRange->lastPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "inoutPageRange->lastPageID == MEM_PAGEID_INVALID");
LABEL_87:
    if ( v23 )
      __debugbreak();
  }
LABEL_89:
  Mem_Paged_FlushBatchContext(v15, v16);
  params.mode = ONCE;
  params.virtualAddress = start;
  params.neededPages = v11;
  params.pool = pool;
  params.pageRange = (Mem_PageRange *)&v44;
  params.loan = v48;
  params.name = v46;
  Mem_Paged_BatchMapPages(&params);
  v29 = *inoutPageRange;
  v46 = (const char *)v29;
  v30 = HIDWORD(*(unsigned __int64 *)&v29);
  if ( start < firstPageAddress || (v31 = v29.firstPageID, v29.firstPageID == -1) )
    v31 = v44;
  if ( start >= firstPageAddress || v29.lastPageID == -1 )
    LODWORD(v30) = pageID;
  Mem_Paged_FlushBatchContext(v28, v27);
  v32 = HIDWORD(v46);
  if ( HIDWORD(v46) != -1 )
  {
    if ( start < firstPageAddress )
      v32 = pageID;
    v33 = v44;
    if ( start < firstPageAddress )
      v33 = v29.firstPageID;
    v34 = &s_memPaged.pageTable[Mem_Paged_GetPhysicalPageIndexFromID(v32)];
    if ( (*(_DWORD *)v34 & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2911, ASSERT_TYPE_ASSERT, "(frontLastPageEntry.isEndOfCommitChain)", (const char *)&queryFormat, "frontLastPageEntry.isEndOfCommitChain") )
      __debugbreak();
    *(_QWORD *)v34 = *(_QWORD *)v34 & 0xFFFFFFFFFFC00003ui64 | (4i64 * (Mem_Paged_GetPhysicalPageIndexFromID(v33) & 0x7FFFF));
    PhysicalPageIndexFromID = Mem_Paged_GetPhysicalPageIndexFromID(v33);
    v36 = Mem_Paged_GetPhysicalPageIndexFromID(v31);
    v37 = Mem_Paged_GetPhysicalPageIndexFromID(v33);
    Mem_Paged_DebugFixupFirstPageIndex(v37, v36, PhysicalPageIndexFromID);
  }
  Mem_Paged_ReleaseLock();
  inoutPageRange->firstPageID = v31;
  inoutPageRange->lastPageID = v30;
  if ( v31 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2926, ASSERT_TYPE_ASSERT, "(inoutPageRange->firstPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "inoutPageRange->firstPageID != MEM_PAGEID_INVALID") )
    __debugbreak();
  if ( inoutPageRange->lastPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2927, ASSERT_TYPE_ASSERT, "(inoutPageRange->lastPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "inoutPageRange->lastPageID != MEM_PAGEID_INVALID") )
    __debugbreak();
  Mem_Paged_PopThreadContextCommitting();
  v13 = 1;
LABEL_111:
  StreamerMemLoan::~StreamerMemLoan(&v51);
  return v13;
}

/*
==============
Mem_Paged_CommitSubPageMemory
==============
*/
bool Mem_Paged_CommitSubPageMemory(unsigned __int8 *start, unsigned __int8 *end, StreamerMemLoan *optionalLoan, unsigned int *outPageDeficitOrCommitCount, const char *name)
{
  return Mem_Paged_CommitSubPageMemoryInternal(1, start, end, optionalLoan, outPageDeficitOrCommitCount, name);
}

/*
==============
Mem_Paged_CommitSubPageMemoryInternal
==============
*/
__int64 Mem_Paged_CommitSubPageMemoryInternal(bool flushBatchContext, unsigned __int8 *start, unsigned __int8 *end, StreamerMemLoan *optionalLoan, unsigned int *outPageDeficitOrCommitCount, const char *name)
{
  Mem_Pool PoolFromPtr; 
  unsigned int v10; 
  StreamerMemLoan *v11; 
  unsigned __int8 v12; 
  __int64 v13; 
  _QWORD *v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned __int64 subPagesAllocated; 
  unsigned __int64 subPagesUsed; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v25; 
  Mem_Pool v26; 
  __int64 v27; 
  unsigned int outPageDeficit; 
  StreamerMemLoan *v30; 
  const char *v31; 
  BatchMapParams params; 
  __int64 v33; 
  char v34; 
  StreamerMemLoan v35; 

  v33 = -2i64;
  v31 = name;
  if ( ((unsigned __int8)start & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3331, ASSERT_TYPE_ASSERT, "(IsAligned( start, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( start, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  if ( ((unsigned __int8)end & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3332, ASSERT_TYPE_ASSERT, "(IsAligned( end, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  if ( start >= end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3333, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  if ( !outPageDeficitOrCommitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3334, ASSERT_TYPE_ASSERT, "(outPageDeficitOrCommitCount)", (const char *)&queryFormat, "outPageDeficitOrCommitCount") )
    __debugbreak();
  PoolFromPtr = Mem_Paged_GetPoolFromPtr(start);
  if ( Mem_Paged_GetPoolFromPtr(end - 1) != PoolFromPtr )
  {
    v26 = Mem_Paged_GetPoolFromPtr(end - 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3337, ASSERT_TYPE_ASSERT, "( Mem_Paged_GetPoolFromPtr( end - 1 ) ) == ( pool )", "%s == %s\n\t%i, %i", "Mem_Paged_GetPoolFromPtr( end - 1 )", "pool", v26, PoolFromPtr) )
      __debugbreak();
  }
  v10 = truncate_cast<unsigned int,unsigned __int64>((((unsigned __int64)(end + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) - ((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64)) >> 16);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3343, ASSERT_TYPE_ASSERT, "(neededPages > 0)", (const char *)&queryFormat, "neededPages > 0") )
    __debugbreak();
  Mem_Paged_PushThreadContextCommitting();
  v35.mUpdateID = 0i64;
  v35.mPages = 0i64;
  v35.mCookie = -1061110033;
  v11 = &v35;
  if ( optionalLoan )
    v11 = optionalLoan;
  v30 = v11;
  if ( Mem_Paged_RequestPagesFromStreamerAndAcquireLock(v11, REF_COUNTED, PoolFromPtr, v10, &outPageDeficit) )
  {
    v13 = tls_index;
    if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3358, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
      __debugbreak();
    v14 = NtCurrentTeb()->Reserved1[11];
    v15 = v14[v13];
    if ( !*(_DWORD *)(v15 + 452) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 677, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
      __debugbreak();
    if ( s_memPaged.pageTree[0].m_freePages < v10 )
    {
      if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v13) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 677, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
        __debugbreak();
      LODWORD(v27) = v10;
      LODWORD(v25) = s_memPaged.pageTree[0].m_freePages;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3359, ASSERT_TYPE_ASSERT, "( Mem_Paged_GetFreePageCountForCommit_AlreadyLocked( pool ) ) >= ( neededPages )", "%s >= %s\n\t%u, %u", "Mem_Paged_GetFreePageCountForCommit_AlreadyLocked( pool )", "neededPages", v25, v27) )
        __debugbreak();
    }
    if ( flushBatchContext )
      Mem_Paged_FlushBatchContext(v14, v15);
    params.mode = REF_COUNTED;
    params.virtualAddress = (void *)((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64);
    params.neededPages = v10;
    params.pool = PoolFromPtr;
    params.pageRange = (Mem_PageRange *)&v34;
    params.loan = v30;
    params.name = v31;
    v16 = Mem_Paged_BatchMapPages(&params);
    v17 = v16;
    *outPageDeficitOrCommitCount = v16;
    subPagesAllocated = s_memPaged.subPagesAllocated;
    subPagesUsed = s_memPaged.subPagesUsed;
    if ( s_memPaged.subPagesAllocated < s_memPaged.subPagesUsed )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3397, ASSERT_TYPE_ASSERT, "( s_memPaged.subPagesAllocated ) >= ( s_memPaged.subPagesUsed )", "%s >= %s\n\t%zu, %zu", "s_memPaged.subPagesAllocated", "s_memPaged.subPagesUsed", s_memPaged.subPagesAllocated, s_memPaged.subPagesUsed) )
        __debugbreak();
      subPagesAllocated = s_memPaged.subPagesAllocated;
      subPagesUsed = s_memPaged.subPagesUsed;
    }
    v20 = (v17 << 12) + subPagesAllocated;
    s_memPaged.subPagesAllocated = v20;
    v21 = ((unsigned __int64)(end - start) >> 4) + subPagesUsed;
    s_memPaged.subPagesUsed = v21;
    if ( v20 < v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3400, ASSERT_TYPE_ASSERT, "( s_memPaged.subPagesAllocated ) >= ( s_memPaged.subPagesUsed )", "%s >= %s\n\t%zu, %zu", "s_memPaged.subPagesAllocated", "s_memPaged.subPagesUsed", v20, v21) )
      __debugbreak();
    Mem_Paged_CheckUnaliasedCommittedSubPageMemory(start, end);
    if ( flushBatchContext )
      Mem_Paged_FlushBatchContext(v23, v22);
    Mem_Paged_ReleaseLock();
    Mem_Paged_PopThreadContextCommitting();
    v12 = 1;
  }
  else
  {
    if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3353, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsLocked())", (const char *)&queryFormat, "!Mem_Paged_IsLocked()") )
      __debugbreak();
    *outPageDeficitOrCommitCount = outPageDeficit;
    Mem_Paged_PopThreadContextCommitting();
    v12 = 0;
  }
  StreamerMemLoan::~StreamerMemLoan(&v35);
  return v12;
}

/*
==============
Mem_Paged_DebugFixupFirstPageIndex
==============
*/
void Mem_Paged_DebugFixupFirstPageIndex(unsigned int beginPageIndex, unsigned int newFirstPageIndex, unsigned int oldFirstPageIndex)
{
  __int64 v3; 
  unsigned int v4; 
  MemPaged::PhysicalPageTableEntry *v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = beginPageIndex;
  v4 = newFirstPageIndex & 0x7FFFF;
  do
  {
    if ( (unsigned int)v3 >= s_memPaged.pageTableSize )
    {
      LODWORD(v9) = s_memPaged.pageTableSize;
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v6 = &s_memPaged.pageTable[v3];
    if ( (*((_DWORD *)v6 + 2) & 0x7FFFF) != oldFirstPageIndex )
    {
      LODWORD(v11) = oldFirstPageIndex;
      LODWORD(v10) = *((_DWORD *)v6 + 2) & 0x7FFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2165, ASSERT_TYPE_ASSERT, "( pageTableEntry.firstPageIndex ) == ( oldFirstPageIndex )", "%s == %s\n\t%u, %u", "pageTableEntry.firstPageIndex", "oldFirstPageIndex", v10, v11) )
        __debugbreak();
    }
    *((_DWORD *)v6 + 2) &= 0xFFF80000;
    v7 = *(_QWORD *)v6;
    *((_DWORD *)v6 + 2) |= v4;
    v3 = (v7 >> 2) & 0x7FFFF;
  }
  while ( (v7 & 0x200000) == 0 );
}

/*
==============
Mem_Paged_DecommitMemoryPartial
==============
*/
StreamerMemLoan *Mem_Paged_DecommitMemoryPartial(StreamerMemLoan *result, unsigned __int8 *start, unsigned __int8 *end, unsigned __int8 *firstPageAddress, Mem_PageRange *inoutPageRange)
{
  Mem_Pool PoolFromPtr; 
  __int64 v10; 
  __int64 v11; 
  const BatchUnmapParams *v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  StreamMemPool StreamMemPoolFromMemPool; 
  __int64 v18; 
  Mem_Pool v19; 
  __int64 v20; 
  StreamerMemLoan resulta; 
  unsigned __int8 *v22; 
  Mem_PageRange *v23; 

  Mem_Paged_ThreadCheck();
  if ( (_WORD)start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3103, ASSERT_TYPE_ASSERT, "(IsAligned( start, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( start, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( (_WORD)end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3104, ASSERT_TYPE_ASSERT, "(IsAligned( end, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( start >= end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3105, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  PoolFromPtr = Mem_Paged_GetPoolFromPtr(start);
  if ( Mem_Paged_GetPoolFromPtr(end - 1) != PoolFromPtr )
  {
    v19 = Mem_Paged_GetPoolFromPtr(end - 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3109, ASSERT_TYPE_ASSERT, "( Mem_Paged_GetPoolFromPtr( end - 1 ) ) == ( pool )", "%s == %s\n\t%i, %i", "Mem_Paged_GetPoolFromPtr( end - 1 )", "pool", v19, PoolFromPtr) )
      __debugbreak();
  }
  if ( Mem_Paged_GetPoolFromPtr(firstPageAddress) != PoolFromPtr )
  {
    LODWORD(v20) = PoolFromPtr;
    LODWORD(v18) = Mem_Paged_GetPoolFromPtr(firstPageAddress);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3110, ASSERT_TYPE_ASSERT, "( Mem_Paged_GetPoolFromPtr( firstPageAddress ) ) == ( pool )", "%s == %s\n\t%i, %i", "Mem_Paged_GetPoolFromPtr( firstPageAddress )", "pool", v18, v20) )
      __debugbreak();
  }
  if ( !inoutPageRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3112, ASSERT_TYPE_ASSERT, "(inoutPageRange)", (const char *)&queryFormat, "inoutPageRange") )
    __debugbreak();
  if ( inoutPageRange->firstPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3113, ASSERT_TYPE_ASSERT, "(inoutPageRange->firstPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "inoutPageRange->firstPageID != MEM_PAGEID_INVALID") )
    __debugbreak();
  if ( inoutPageRange->lastPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3114, ASSERT_TYPE_ASSERT, "(inoutPageRange->lastPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "inoutPageRange->lastPageID != MEM_PAGEID_INVALID") )
    __debugbreak();
  LODWORD(resulta.mUpdateID) = 0;
  resulta.mPages = (StreamerMemPageCounts)start;
  *(_QWORD *)&resulta.mCookie = end - start;
  v22 = firstPageAddress;
  v23 = inoutPageRange;
  Mem_Paged_AcquireLock();
  Mem_Paged_FlushBatchContext(v11, v10);
  v13 = (unsigned int)Mem_Paged_BatchUnmapPages((BatchUnmapResult *)&resulta, v12);
  Mem_Paged_FlushBatchContext(v15, v14);
  Mem_Paged_ReleaseLock();
  resulta.mUpdateID = 0i64;
  resulta.mPages = 0i64;
  resulta.mCookie = -1061110033;
  StreamMemPoolFromMemPool = Stream_Alloc_GetStreamMemPoolFromMemPool(PoolFromPtr);
  StreamerMemLoan::GivePages(&resulta, StreamMemPoolFromMemPool, v13);
  StreamerMemLoan::StreamerMemLoan(result, &resulta);
  StreamerMemLoan::~StreamerMemLoan(&resulta);
  return result;
}

/*
==============
Mem_Paged_DecommitSubPageMemory
==============
*/
StreamerMemLoan *Mem_Paged_DecommitSubPageMemory(StreamerMemLoan *result, unsigned __int8 *start, unsigned __int8 *end)
{
  Mem_Paged_DecommitSubPageMemoryInternal(result, 1, start, end);
  return result;
}

/*
==============
Mem_Paged_DecommitSubPageMemoryInternal
==============
*/
StreamerMemLoan *Mem_Paged_DecommitSubPageMemoryInternal(StreamerMemLoan *result, bool flushBatchContext, unsigned __int8 *start, unsigned __int8 *end)
{
  Mem_Pool PoolFromPtr; 
  __int64 v9; 
  __int64 v10; 
  const BatchUnmapParams *v11; 
  unsigned int v12; 
  unsigned __int64 subPagesAllocated; 
  unsigned __int64 subPagesUsed; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  StreamMemPool StreamMemPoolFromMemPool; 
  Mem_Pool v21; 
  Mem_Pool v22; 
  __int64 v23[2]; 
  StreamerMemLoan resulta; 
  unsigned __int64 v25; 
  __int64 *v26; 

  v23[1] = -2i64;
  v23[0] = (__int64)result;
  if ( ((unsigned __int8)start & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3433, ASSERT_TYPE_ASSERT, "(IsAligned( start, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( start, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  if ( ((unsigned __int8)end & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3434, ASSERT_TYPE_ASSERT, "(IsAligned( end, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  if ( start >= end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3435, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  PoolFromPtr = Mem_Paged_GetPoolFromPtr(start);
  if ( Mem_Paged_GetPoolFromPtr(end - 1) != PoolFromPtr )
  {
    v22 = PoolFromPtr;
    v21 = Mem_Paged_GetPoolFromPtr(end - 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3438, ASSERT_TYPE_ASSERT, "( Mem_Paged_GetPoolFromPtr( end - 1 ) ) == ( pool )", "%s == %s\n\t%i, %i", "Mem_Paged_GetPoolFromPtr( end - 1 )", "pool", v21, v22) )
      __debugbreak();
  }
  LODWORD(resulta.mUpdateID) = 1;
  resulta.mPages = (StreamerMemPageCounts)((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64);
  *(_QWORD *)&resulta.mCookie = ((unsigned __int64)(end + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) - ((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64);
  v25 = (unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64;
  v26 = v23;
  Mem_Paged_AcquireLock();
  if ( flushBatchContext )
    Mem_Paged_FlushBatchContext(v10, v9);
  Mem_Paged_CheckUnaliasedCommittedSubPageMemory(start, end);
  v12 = (unsigned int)Mem_Paged_BatchUnmapPages((BatchUnmapResult *)&resulta, v11);
  subPagesAllocated = s_memPaged.subPagesAllocated;
  subPagesUsed = s_memPaged.subPagesUsed;
  if ( s_memPaged.subPagesAllocated < s_memPaged.subPagesUsed )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3465, ASSERT_TYPE_ASSERT, "( s_memPaged.subPagesAllocated ) >= ( s_memPaged.subPagesUsed )", "%s >= %s\n\t%zu, %zu", "s_memPaged.subPagesAllocated", "s_memPaged.subPagesUsed", s_memPaged.subPagesAllocated, s_memPaged.subPagesUsed) )
      __debugbreak();
    subPagesAllocated = s_memPaged.subPagesAllocated;
    subPagesUsed = s_memPaged.subPagesUsed;
  }
  v15 = subPagesAllocated - ((unsigned __int64)v12 << 12);
  s_memPaged.subPagesAllocated = v15;
  v16 = subPagesUsed - ((unsigned __int64)(end - start) >> 4);
  s_memPaged.subPagesUsed = v16;
  if ( v15 < v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3468, ASSERT_TYPE_ASSERT, "( s_memPaged.subPagesAllocated ) >= ( s_memPaged.subPagesUsed )", "%s >= %s\n\t%zu, %zu", "s_memPaged.subPagesAllocated", "s_memPaged.subPagesUsed", v15, v16) )
    __debugbreak();
  Mem_Paged_CheckUnaliasedDecommittedSubPageMemory(start, end);
  if ( flushBatchContext )
    Mem_Paged_FlushBatchContext(v18, v17);
  Mem_Paged_ReleaseLock();
  resulta.mUpdateID = 0i64;
  resulta.mPages = 0i64;
  resulta.mCookie = -1061110033;
  StreamMemPoolFromMemPool = Stream_Alloc_GetStreamMemPoolFromMemPool(PoolFromPtr);
  StreamerMemLoan::GivePages(&resulta, StreamMemPoolFromMemPool, v12);
  StreamerMemLoan::StreamerMemLoan(result, &resulta);
  StreamerMemLoan::~StreamerMemLoan(&resulta);
  return result;
}

/*
==============
Mem_Paged_Dump
==============
*/

void __fastcall Mem_Paged_Dump(double _XMM0_8)
{
  unsigned __int64 PageTableWaste; 
  unsigned __int64 v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  const unsigned __int64 *v7; 
  __int64 v8; 
  int v11; 
  bool v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned __int64 *p_size; 
  __int64 v25; 
  char *fmt; 
  char *fmta; 
  __int64 v33; 
  __int64 v34; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  Mem_Paged_AcquireLock();
  Com_MemDumpStatsLine("Mem_Paged total", (unsigned __int64)s_memPaged.totalPhysicalPageCount << 16);
  Com_MemDumpStatsLine("Mem_Paged free", (unsigned __int64)s_memPaged.pageTree[0].m_freePages << 16);
  Com_MemDumpStatsLine("Mem_Paged page table size", 16i64 * s_memPaged.pageTableSize + 33304);
  PageTableWaste = Mem_Paged_GetPageTableWaste();
  Com_MemDumpStatsLine("Mem_Paged page table waste", PageTableWaste);
  v4 = 0i64;
  v5 = 3i64;
  v6 = 0i64;
  v7 = s_poolReserveSizes;
  v8 = 0i64;
  if ( s_poolReserveSizes > (const unsigned __int64 *)s_poolNames )
    v5 = 0i64;
  if ( s_poolReserveSizes <= (const unsigned __int64 *)s_poolNames )
  {
    do
    {
      v6 += *v7++;
      ++v8;
    }
    while ( v8 != v5 );
  }
  Com_MemDumpStatsLine("Mem_Paged virtual reserve", v6);
  Com_MemDumpPrintf("Mem_Paged reserved virtual address ranges per memory pool:\n");
  __asm
  {
    vmovss  xmm6, cs:__real@5f800000
    vmovss  xmm7, cs:__real@35800000
  }
  v11 = 0;
  v12 = 1;
  v13 = 0i64;
  do
  {
    if ( !v12 )
    {
      LODWORD(v34) = 3;
      LODWORD(v33) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1480, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( MEM_POOL_COUNT )", "pool doesn't index MEM_POOL_COUNT\n\t%i not in [0, %i)", v33, v34) )
        __debugbreak();
    }
    v14 = *(_QWORD *)&s_memPaged.isThreadCommitting[v13 / 4 - 248];
    v15 = *(_QWORD *)&s_memPaged.isThreadCommitting[v13 / 4 - 254];
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (s_poolReserveSizes[v13 / 8] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm0, xmm7
      vcvtss2sd xmm1, xmm0, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( v14 - v15 < 0 )
      __asm { vaddss  xmm0, xmm0, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm0, xmm7
      vcvtss2sd xmm3, xmm0, xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+78h+fmt], xmm1
    }
    Com_MemDumpPrintf("      %016zx - %016zx (size: %8.1f MBs, max possible size: %8.1f MBs)  %s\n", s_memPaged.virtualMem.base + v15, v14 + s_memPaged.virtualMem.base, *(double *)&_XMM3, *(double *)&fmt, s_poolNames[v13 / 8]);
    ++v11;
    v13 += 8i64;
    v12 = (unsigned int)v11 < 3;
  }
  while ( v11 < 3 );
  Com_MemDumpPrintf("Mem_Paged reserved virtual address ranges:\n");
  if ( s_memPaged.virtualMem.reservationCount )
  {
    p_size = &s_memPaged.virtualMem.reservations[0].size;
    do
    {
      v25 = *((int *)p_size + 2);
      if ( (unsigned int)v25 >= 3 )
      {
        LODWORD(v34) = 3;
        LODWORD(v33) = *((_DWORD *)p_size + 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1480, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( MEM_POOL_COUNT )", "pool doesn't index MEM_POOL_COUNT\n\t%i not in [0, %i)", v33, v34) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      if ( (*p_size & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm0, xmm0, xmm6 }
      __asm
      {
        vmulss  xmm0, xmm0, xmm7
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+78h+fmt], xmm1
      }
      Com_MemDumpPrintf("  %2zu: %016zx - %016zx (size: %8.1f MBs)  %s, pool: %s\n", v4++, *(p_size - 1), *(p_size - 1) + *p_size, *(double *)&fmta, (const char *)*(p_size - 2), s_poolNames[v25]);
      p_size += 4;
    }
    while ( v4 < s_memPaged.virtualMem.reservationCount );
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
  Mem_Paged_ReleaseLock();
}

/*
==============
Mem_Paged_FindVirtualAddressRangeFromRange
==============
*/
const MemPaged::VirtualMemory::Reservation *Mem_Paged_FindVirtualAddressRangeFromRange(unsigned __int8 *start, unsigned __int8 *end)
{
  __int64 v4; 
  unsigned __int64 *i; 
  unsigned __int64 v6; 

  if ( !s_memPaged.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1456, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsInitialized())", (const char *)&queryFormat, "Mem_Paged_IsInitialized()") )
    __debugbreak();
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1458, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  v4 = 0i64;
  if ( !s_memPaged.virtualMem.reservationCount )
    return 0i64;
  for ( i = &s_memPaged.virtualMem.reservations[0].size; ; i += 4 )
  {
    v6 = *(i - 1);
    if ( (unsigned __int64)start >= v6 && (unsigned __int64)end <= *i + v6 )
      break;
    if ( ++v4 >= s_memPaged.virtualMem.reservationCount )
      return 0i64;
  }
  return (const MemPaged::VirtualMemory::Reservation *)(i - 2);
}

/*
==============
Mem_Paged_FlushBatchContext
==============
*/
void Mem_Paged_FlushBatchContext()
{
  unsigned int entryCount; 
  unsigned int i; 
  MemPaged::BatchEntry *v2; 
  unsigned __int64 v3; 
  MemPaged::BatchEntry *v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int pageIndex; 
  unsigned __int64 v10; 
  MemPaged::BatchEntry *v11; 
  __int64 v12; 
  int v13; 
  bool v14; 
  DWORD LastError; 
  unsigned __int64 address; 
  bool v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 

  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1511, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( s_memPaged.batchContext.entryCount )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "Mem_Paged_FlushBatchContext");
    entryCount = s_memPaged.batchContext.entryCount;
    for ( i = 0; i < s_memPaged.batchContext.entryCount; ++i )
    {
      v2 = &s_memPaged.batchContext.entries[i];
      v3 = *((unsigned int *)v2 + 3);
      if ( (v3 & 3) != 0 )
      {
        if ( !VirtualFree((LPVOID)v2->address, ((v3 >> 2) & 0x1FFFFFF) << 16, 0x4000u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1707, ASSERT_TYPE_ASSERT, "(VirtualFree( reinterpret_cast<LPVOID>( entry.address ), entry.pageCount * MEM_PHYSICAL_PAGE_SIZE, 0x4000 ))", (const char *)&queryFormat, "VirtualFree( reinterpret_cast<LPVOID>( entry.address ), entry.pageCount * MEM_PHYSICAL_PAGE_SIZE, MEM_DECOMMIT )") )
          __debugbreak();
      }
      else
      {
        v4 = &s_memPaged.batchContext.entries[i];
        v5 = 0i64;
        while ( 1 )
        {
          v6 = *((unsigned int *)v4 + 3);
          v7 = 0;
          v8 = (*((_DWORD *)v4 + 3) >> 2) & 0x1FFFFFF;
          if ( v8 )
          {
            pageIndex = v4->pageIndex;
            do
            {
              v10 = pageIndex + v7++;
              s_pageArray[v5] = v10;
              v5 = (unsigned int)(v5 + 1);
            }
            while ( v7 < v8 );
          }
          if ( i + 1 >= entryCount )
            break;
          v11 = &s_memPaged.batchContext.entries[i];
          v12 = (((v6 >> 2) & 0x1FFFFFF) << 16) + v4->address;
          v13 = *((_DWORD *)v11 + 3);
          v14 = ((v13 ^ (unsigned int)v6) & 0x18000000) == 0 && ((v13 ^ (unsigned int)v6) & 0xE0000000) == 0;
          if ( (*((_DWORD *)v11 + 3) & 3) != 0 || (unsigned int)v5 + ((*((_DWORD *)v11 + 3) >> 2) & 0x1FFFFFF) > 0x800 || v12 != v11->address || !v14 )
            break;
          v4 = &s_memPaged.batchContext.entries[i++];
        }
        if ( !MapTitlePhysicalPages(v2->address, (unsigned int)v5, 1879048192i64, protection[v3 >> 29], s_pageArray) )
        {
          LastError = GetLastError();
          PMem_DumpMemStats();
          XB3SystemMemoryStatus_Show_f();
          Com_Printf(16, "----------------------------------------------------\n");
          Com_Printf(16, "GPU VA Min Address 0x%llx\n", s_gpuVAConfig.MinimumValidGraphicsAddress);
          Com_Printf(16, "GPU VA Max Address 0x%llx\n", s_gpuVAConfig.MaximumValidGraphicsAddress);
          Com_Printf(16, "----------------------------------------------------\n");
          address = v2->address;
          if ( LastError == 8 )
          {
            LODWORD(v22) = protection[(unsigned __int64)*((unsigned int *)v2 + 3) >> 29];
            LODWORD(v20) = 1879048192;
            LODWORD(v18) = v5;
            v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1694, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Out of memory for MapTitlePhysicalPages( 0x%zx, %d, 0x%x, 0x%x ).  See above for memory status.\n", address, v18, v20, v22);
          }
          else
          {
            LODWORD(v24) = LastError;
            LODWORD(v22) = protection[(unsigned __int64)*((unsigned int *)v2 + 3) >> 29];
            LODWORD(v20) = 1879048192;
            LODWORD(v18) = v5;
            v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1698, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MapTitlePhysicalPages( 0x%zx, %d, 0x%x, 0x%x ) failed with error %d.  See above for memory status.\n", address, v18, v20, v22, v24);
          }
          if ( v17 )
            __debugbreak();
          LODWORD(v24) = LastError;
          LODWORD(v23) = protection[(unsigned __int64)*((unsigned int *)v2 + 3) >> 29];
          LODWORD(v21) = 1879048192;
          LODWORD(v19) = v5;
          Mem_Error_CannotAlloc_Dev(MOVEMENT, "Mem_Paged_FlushBatchContext", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1702, "MapTitlePhysicalPages: 0x%zx, %u, 0x%x, 0x%x - %d", v2->address, v19, v21, v23, v24);
        }
      }
      entryCount = s_memPaged.batchContext.entryCount;
    }
    s_memPaged.batchContext.entryCount = 0;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
Mem_Paged_GetDevMemorySize
==============
*/
unsigned __int64 Mem_Paged_GetDevMemorySize()
{
  return s_memPaged.debugMemorySize;
}

/*
==============
Mem_Paged_GetFreePageCountForCommit
==============
*/
__int64 Mem_Paged_GetFreePageCountForCommit(Mem_Pool pool)
{
  unsigned int FreePageCountForCommit_AlreadyLocked; 

  Mem_Paged_AcquireLock();
  FreePageCountForCommit_AlreadyLocked = Mem_Paged_GetFreePageCountForCommit_AlreadyLocked(pool);
  Mem_Paged_ReleaseLock();
  return FreePageCountForCommit_AlreadyLocked;
}

/*
==============
Mem_Paged_GetFreePageCountForCommit_AlreadyLocked
==============
*/
__int64 Mem_Paged_GetFreePageCountForCommit_AlreadyLocked(const Mem_Pool pool)
{
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 677, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  return s_memPaged.pageTree[0].m_freePages;
}

/*
==============
Mem_Paged_GetFreePhysicalSize
==============
*/
unsigned __int64 Mem_Paged_GetFreePhysicalSize()
{
  return (unsigned __int64)s_memPaged.pageTree[0].m_freePages << 16;
}

/*
==============
Mem_Paged_GetPageTableEntry
==============
*/
MemPaged::PhysicalPageTableEntry *Mem_Paged_GetPageTableEntry(unsigned int pageIndex)
{
  __int64 v1; 
  unsigned int pageTableSize; 

  v1 = pageIndex;
  if ( pageIndex >= s_memPaged.pageTableSize )
  {
    pageTableSize = s_memPaged.pageTableSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", pageIndex, pageTableSize) )
      __debugbreak();
  }
  return &s_memPaged.pageTable[v1];
}

/*
==============
Mem_Paged_GetPageTableWaste
==============
*/
__int64 Mem_Paged_GetPageTableWaste()
{
  unsigned int totalPhysicalPageCount; 
  unsigned int pageTableSize; 
  unsigned int v3; 
  unsigned int v4; 

  totalPhysicalPageCount = s_memPaged.totalPhysicalPageCount;
  pageTableSize = s_memPaged.pageTableSize;
  if ( s_memPaged.totalPhysicalPageCount > s_memPaged.pageTableSize )
  {
    v4 = s_memPaged.pageTableSize;
    v3 = s_memPaged.totalPhysicalPageCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 846, ASSERT_TYPE_ASSERT, "( s_memPaged.totalPhysicalPageCount ) <= ( s_memPaged.pageTableSize )", "%s <= %s\n\t%u, %u", "s_memPaged.totalPhysicalPageCount", "s_memPaged.pageTableSize", v3, v4) )
      __debugbreak();
    totalPhysicalPageCount = s_memPaged.totalPhysicalPageCount;
    pageTableSize = s_memPaged.pageTableSize;
  }
  return 16i64 * (pageTableSize - totalPhysicalPageCount);
}

/*
==============
Mem_Paged_GetPhysicalPageIDFromIndex
==============
*/
__int64 Mem_Paged_GetPhysicalPageIDFromIndex(unsigned int pageIndex)
{
  if ( pageIndex >= s_memPaged.pageTableSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2082, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", pageIndex, s_memPaged.pageTableSize) )
    __debugbreak();
  if ( pageIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2084, ASSERT_TYPE_ASSERT, "(pageID < MEM_PAGEID_INVALID)", (const char *)&queryFormat, "pageID < MEM_PAGEID_INVALID") )
    __debugbreak();
  return pageIndex;
}

/*
==============
Mem_Paged_GetPhysicalPageIndexFromID
==============
*/
__int64 Mem_Paged_GetPhysicalPageIndexFromID(Mem_PageID pageID)
{
  __int64 v3; 

  if ( pageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2073, ASSERT_TYPE_ASSERT, "(pageID < MEM_PAGEID_INVALID)", (const char *)&queryFormat, "pageID < MEM_PAGEID_INVALID") )
    __debugbreak();
  if ( pageID >= s_memPaged.pageTableSize )
  {
    LODWORD(v3) = pageID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2075, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v3, s_memPaged.pageTableSize) )
      __debugbreak();
  }
  return (unsigned int)pageID;
}

/*
==============
Mem_Paged_GetPoolFromPtr
==============
*/
__int64 Mem_Paged_GetPoolFromPtr(const void *const ptr)
{
  unsigned int v2; 
  unsigned __int64 *end; 

  if ( !Mem_Paged_IsInVirtualGrab(ptr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1293, ASSERT_TYPE_ASSERT, "( ( Mem_Paged_IsInVirtualGrab( ptr ) ) )", "( ptr ) = %p", ptr) )
    __debugbreak();
  v2 = 0;
  end = s_memPaged.virtualMem.end;
  do
  {
    if ( !Mem_Paged_IsInVirtualGrab(ptr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1280, ASSERT_TYPE_ASSERT, "( ( Mem_Paged_IsInVirtualGrab( ptr ) ) )", "( ptr ) = %p", ptr) )
      __debugbreak();
    if ( (unsigned __int64)ptr >= s_memPaged.virtualMem.base + *(end - 3) && (unsigned __int64)ptr < *end + s_memPaged.virtualMem.base )
      return v2;
    ++v2;
    ++end;
  }
  while ( (__int64)end < (__int64)s_memPaged.virtualMem.reservations );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1301, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
  return 3i64;
}

/*
==============
Mem_Paged_GetPoolName
==============
*/
const char *Mem_Paged_GetPoolName(Mem_Pool pool)
{
  __int64 v1; 
  int v4; 

  v1 = pool;
  if ( (unsigned int)pool >= MEM_POOL_COUNT )
  {
    v4 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1480, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( MEM_POOL_COUNT )", "pool doesn't index MEM_POOL_COUNT\n\t%i not in [0, %i)", pool, v4) )
      __debugbreak();
  }
  return s_poolNames[v1];
}

/*
==============
Mem_Paged_GetRefCountedPageTableEntryIfMapped
==============
*/
MemPaged::PhysicalPageTableEntry *Mem_Paged_GetRefCountedPageTableEntryIfMapped(const unsigned __int64 virtualAddress, unsigned int *optOutPrevPageIndex)
{
  unsigned int v3; 
  unsigned int VirtualPageIndexFromVirtualAddress; 
  __int64 v5; 
  __int64 v6; 
  MemPaged::PhysicalPageTableEntry *v7; 
  __int64 v9; 
  __int64 v10; 

  v3 = 0x7FFFF;
  VirtualPageIndexFromVirtualAddress = Mem_Paged_GetVirtualPageIndexFromVirtualAddress(virtualAddress);
  v5 = VirtualPageIndexFromVirtualAddress;
  LODWORD(v6) = s_memPaged.subPageHashAnchorTable[VirtualPageIndexFromVirtualAddress & 0x3FF];
  if ( (_DWORD)v6 == 0x7FFFF )
  {
LABEL_19:
    if ( optOutPrevPageIndex )
      *optOutPrevPageIndex = v3;
    return 0i64;
  }
  else
  {
    while ( 1 )
    {
      if ( (unsigned int)v6 >= s_memPaged.pageTableSize )
      {
        LODWORD(v10) = s_memPaged.pageTableSize;
        LODWORD(v9) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      v7 = &s_memPaged.pageTable[(unsigned int)v6];
      if ( (*((_DWORD *)v7 + 2) & 0x80000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2131, ASSERT_TYPE_ASSERT, "(pageTableEntry.commitMode == static_cast<uint>( CommitMode::REF_COUNTED ))", (const char *)&queryFormat, "pageTableEntry.commitMode == static_cast<uint>( CommitMode::REF_COUNTED )") )
        __debugbreak();
      if ( (*(_DWORD *)v7 & 0x200000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2132, ASSERT_TYPE_ASSERT, "(pageTableEntry.isEndOfCommitChain == 0)", (const char *)&queryFormat, "pageTableEntry.isEndOfCommitChain == 0") )
        __debugbreak();
      if ( (*(_QWORD *)v7 & 0x1FFF00000000000i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2133, ASSERT_TYPE_ASSERT, "(pageTableEntry.refCount > 0)", (const char *)&queryFormat, "pageTableEntry.refCount > 0") )
        __debugbreak();
      if ( ((*(_QWORD *)v7 >> 44) & 0x1FFFi64) == 0x1FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2134, ASSERT_TYPE_ASSERT, "(pageTableEntry.refCount < PTE_REF_COUNT_MAX)", (const char *)&queryFormat, "pageTableEntry.refCount < PTE_REF_COUNT_MAX") )
        __debugbreak();
      if ( ((*(_QWORD *)v7 >> 22) & 0x3FFFFFi64) == v5 )
        break;
      v3 = v6;
      v6 = (*(_QWORD *)v7 >> 2) & 0x7FFFFi64;
      if ( (_DWORD)v6 == 0x7FFFF )
        goto LABEL_19;
    }
    if ( optOutPrevPageIndex )
      *optOutPrevPageIndex = v3;
    return v7;
  }
}

/*
==============
Mem_Paged_GetSubPageAllocTotal
==============
*/
unsigned __int64 Mem_Paged_GetSubPageAllocTotal()
{
  return 16 * s_memPaged.subPagesAllocated;
}

/*
==============
Mem_Paged_GetSubPageWaste
==============
*/
__int64 Mem_Paged_GetSubPageWaste()
{
  unsigned __int64 subPagesUsed; 
  unsigned __int64 subPagesAllocated; 
  __int64 v2; 

  Mem_Paged_AcquireLock();
  subPagesUsed = s_memPaged.subPagesUsed;
  subPagesAllocated = s_memPaged.subPagesAllocated;
  if ( s_memPaged.subPagesAllocated < s_memPaged.subPagesUsed )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3631, ASSERT_TYPE_ASSERT, "( s_memPaged.subPagesAllocated ) >= ( s_memPaged.subPagesUsed )", "%s >= %s\n\t%zu, %zu", "s_memPaged.subPagesAllocated", "s_memPaged.subPagesUsed", s_memPaged.subPagesAllocated, s_memPaged.subPagesUsed) )
      __debugbreak();
    subPagesAllocated = s_memPaged.subPagesAllocated;
    subPagesUsed = s_memPaged.subPagesUsed;
  }
  v2 = 16 * (subPagesAllocated - subPagesUsed);
  Mem_Paged_ReleaseLock();
  return v2;
}

/*
==============
Mem_Paged_GetTotalPhysicalSize
==============
*/
unsigned __int64 Mem_Paged_GetTotalPhysicalSize()
{
  return (unsigned __int64)s_memPaged.totalPhysicalPageCount << 16;
}

/*
==============
Mem_Paged_GetVirtualPageIndexFromVirtualAddress
==============
*/
unsigned int Mem_Paged_GetVirtualPageIndexFromVirtualAddress(const unsigned __int64 virtualAddress)
{
  unsigned __int64 base; 

  base = s_memPaged.virtualMem.base;
  if ( virtualAddress < s_memPaged.virtualMem.base || virtualAddress >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
      __debugbreak();
    base = s_memPaged.virtualMem.base;
  }
  return truncate_cast<unsigned int,unsigned __int64>((virtualAddress - base) >> 16);
}

/*
==============
Mem_Paged_GetVirtualReserveSize
==============
*/
unsigned __int64 Mem_Paged_GetVirtualReserveSize()
{
  unsigned __int64 result; 
  const unsigned __int64 *v1; 
  __int64 v2; 
  __int64 v3; 

  result = 0i64;
  v1 = s_poolReserveSizes;
  v2 = 3i64;
  v3 = 0i64;
  if ( s_poolReserveSizes > (const unsigned __int64 *)s_poolNames )
    v2 = 0i64;
  if ( s_poolReserveSizes <= (const unsigned __int64 *)s_poolNames )
  {
    do
    {
      result += *v1++;
      ++v3;
    }
    while ( v3 != v2 );
  }
  return result;
}

/*
==============
Mem_Paged_GrabPhysicalPages_XB3
==============
*/

void __fastcall Mem_Paged_GrabPhysicalPages_XB3(unsigned int reserveMemorySize, double _XMM1_8)
{
  unsigned int v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  XB3ConsoleType XB3ConsoleType; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  XB3ConsoleType v17; 
  int v18; 
  unsigned int v19; 
  unsigned int totalPhysicalPageCount; 
  bool v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  unsigned int v26; 
  unsigned __int64 v27; 
  int v28; 
  unsigned int v29; 
  Mem_PageTree<262144> *pageTree; 
  int v31; 
  unsigned int v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  __int64 v35; 
  unsigned __int128 v36; 
  __int64 v37; 
  __int64 v46; 
  double v47; 
  __int64 v48; 
  double v49; 
  __int64 v50; 
  __int64 v51; 
  unsigned int v52; 
  unsigned __int64 v54; 
  int v55; 
  unsigned int v56; 
  __int64 v57; 
  HANDLE CurrentProcess; 
  _SYSTEM_INFO SystemInfo; 
  int v60; 
  unsigned __int64 v61; 
  unsigned __int64 v62; 
  __int64 v63[8192]; 

  v3 = reserveMemorySize;
  if ( !reserveMemorySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 986, ASSERT_TYPE_ASSERT, "(reserveMemorySize)", (const char *)&queryFormat, "reserveMemorySize") )
    __debugbreak();
  s_memPaged.totalPhysicalPageCount = 0;
  GetSystemInfo(&SystemInfo);
  if ( 0x10000ui64 % SystemInfo.dwPageSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 993, ASSERT_TYPE_ASSERT, "(( MEM_PHYSICAL_PAGE_SIZE % systemInfo.dwPageSize ) == 0)", (const char *)&queryFormat, "( MEM_PHYSICAL_PAGE_SIZE % systemInfo.dwPageSize ) == 0") )
    __debugbreak();
  if ( SystemInfo.dwAllocationGranularity != 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 994, ASSERT_TYPE_ASSERT, "(MEM_PHYSICAL_PAGE_SIZE == systemInfo.dwAllocationGranularity)", (const char *)&queryFormat, "MEM_PHYSICAL_PAGE_SIZE == systemInfo.dwAllocationGranularity") )
    __debugbreak();
  if ( !s_gpuVAConfig.PageTableMemory4MBPageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 997, ASSERT_TYPE_ASSERT, "(s_gpuVAConfig.PageTableMemory4MBPageCount)", (const char *)&queryFormat, "s_gpuVAConfig.PageTableMemory4MBPageCount") )
    __debugbreak();
  Com_Printf(16, "Configured %dGB of GPU VA space\n", (s_gpuVAConfig.MaximumValidGraphicsAddress - s_gpuVAConfig.MinimumValidGraphicsAddress) >> 30);
  XB3XMemAlloc_SetDefaultHooks();
  v60 = 80;
  if ( !(unsigned int)TitleMemoryStatus(&v60) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1008, ASSERT_TYPE_ASSERT, "(TitleMemoryStatus( &titleMemStatus ))", (const char *)&queryFormat, "TitleMemoryStatus( &titleMemStatus )") )
    __debugbreak();
  v4 = 0x1F4000000i64;
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
    v4 = 0x134000000i64;
  if ( v61 < v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1011, ASSERT_TYPE_ASSERT, "( titleMemStatus.ullTotalMem ) >= ( retailSize )", "%s >= %s\n\t%llu, %llu", "titleMemStatus.ullTotalMem", "retailSize", v61, v4) )
    __debugbreak();
  v5 = 0;
  v6 = -1;
  CurrentProcess = GetCurrentProcess();
  v52 = 0;
  v7 = truncate_cast<unsigned int,unsigned __int64>(v62 >> 16);
  v8 = truncate_cast<unsigned int,unsigned __int64>((v61 - v4) >> 16);
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
  {
    v9 = (unsigned __int64)v8 << 16;
    if ( v9 < 0xC0000000 )
    {
      if ( !XB3XMem_HasAuxMem() && v9 < 0x10000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1049, ASSERT_TYPE_ASSERT, "( XB3XMem_HasAuxMem() || ( debugPageCount * MEM_PHYSICAL_PAGE_SIZE >= DURANGO_EXPECTED_AUX_MEM_SIZE ) )", "Failed to allocate auxiliary memory on base XB3 hardware!  Please make sure this is configured in the appxmanifest and that you have re-registered the game since the last appxmanifest update OR you are running on XB1-X HW with Durango emulation with \"Profiling Mode\" enabled.") )
        __debugbreak();
    }
    else
    {
      Com_Printf(16, "Detected excessive debug memory.  Assuming Scorpio HW emulating Durango and reducing memory grab accordingly.");
      if ( !XB3XMem_HasAuxMem() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1032, ASSERT_TYPE_ASSERT, "(XB3XMem_HasAuxMem())", (const char *)&queryFormat, "XB3XMem_HasAuxMem()") )
        __debugbreak();
      v8 -= 49152;
      if ( !v8 )
      {
        if ( (unsigned int)v7 < 0xAFD7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1038, ASSERT_TYPE_ASSERT, "( availPageCount ) >= ( DURANGO_EMULATION_RETAIL_PAGES_ADJUST )", "%s >= %s\n\t%llu, %llu", "availPageCount", "DURANGO_EMULATION_RETAIL_PAGES_ADJUST", v7, 45015i64) )
          __debugbreak();
        LODWORD(v7) = v7 - 45014;
      }
    }
  }
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v11 = 0x300000000i64;
  v12 = 0x300000000i64;
  if ( XB3ConsoleType == XB3_CONSOLE_DURANGO )
    v12 = 0x40000000i64;
  if ( (unsigned __int64)v8 << 16 > v12 )
  {
    if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
      v11 = 0x40000000i64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1054, ASSERT_TYPE_ASSERT, "( debugPageCount * MEM_PHYSICAL_PAGE_SIZE ) <= ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO ? MAX_DEBUG_MEM_DURANGO : MAX_DEBUG_MEM_SCORPIO )", "%s <= %s\n\t%llu, %llu", "debugPageCount * MEM_PHYSICAL_PAGE_SIZE", "Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO ? MAX_DEBUG_MEM_DURANGO : MAX_DEBUG_MEM_SCORPIO", (unsigned __int64)v8 << 16, v11) )
      __debugbreak();
  }
  s_memPaged.debugMemorySize = (unsigned __int64)v8 << 16;
  v13 = v8 + truncate_cast<unsigned int,unsigned __int64>(v4 >> 16);
  if ( v13 < (unsigned int)v7 )
    LODWORD(v7) = v13;
  v14 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(v3 + 0xFFFF) >> 16);
  v15 = v14;
  if ( v14 >= (unsigned int)v7 )
  {
    LODWORD(v51) = v7;
    LODWORD(v50) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1065, ASSERT_TYPE_ASSERT, "( reservePageCount ) < ( possiblePageCount )", "%s < %s\n\t%u, %u", "reservePageCount", "possiblePageCount", v50, v51) )
      __debugbreak();
  }
  v16 = v7 - v15;
  v56 = v16;
  v17 = Sys_GetXB3ConsoleType();
  v18 = 0x40000;
  v19 = 0x40000;
  if ( v17 == XB3_CONSOLE_DURANGO )
    v19 = 163840;
  if ( v13 > v19 )
  {
    if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
      v18 = 163840;
    LODWORD(v51) = v18;
    LODWORD(v50) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1067, ASSERT_TYPE_ASSERT, "( desiredPageCount ) <= ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO ? PAGE_TABLE_SIZE_DURANGO : PAGE_TABLE_SIZE_SCORPIO )", "%s <= %s\n\t%u, %u", "desiredPageCount", "Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO ? PAGE_TABLE_SIZE_DURANGO : PAGE_TABLE_SIZE_SCORPIO", v50, v51) )
      __debugbreak();
  }
  totalPhysicalPageCount = s_memPaged.totalPhysicalPageCount;
  s_memPaged.pageTree[0].m_rangeMin = 0;
  s_memPaged.pageTree[0].m_rangeMax = 0x3FFFF;
  v21 = s_memPaged.totalPhysicalPageCount == v16;
  if ( s_memPaged.totalPhysicalPageCount < v16 )
  {
    while ( 1 )
    {
      v22 = v16 - totalPhysicalPageCount;
      v23 = 0x2000i64;
      if ( v22 < 0x2000 )
        v23 = (unsigned int)v22;
      v54 = v23;
      if ( !(unsigned int)AllocateTitlePhysicalPages(CurrentProcess, 0x20000000i64, &v54, v63) )
        break;
      v24 = v54;
      if ( v54 != v23 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1081, ASSERT_TYPE_ASSERT, "(pageCount == batchCount)", (const char *)&queryFormat, "pageCount == batchCount") )
          __debugbreak();
        v24 = v54;
      }
      v25 = 0i64;
      v57 = 0i64;
      if ( v24 )
      {
        v26 = v52;
        do
        {
          v27 = v63[v25];
          if ( v27 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v27, "unsigned", v63[v25]) )
            __debugbreak();
          v28 = v27;
          v29 = v27;
          if ( (unsigned int)v27 > v6 )
            v28 = v6;
          pageTree = s_memPaged.pageTree;
          v55 = v28;
          v31 = 3;
          if ( v26 > (unsigned int)v27 )
            v29 = v26;
          v32 = 4096;
          v52 = v29;
          do
          {
            --v31;
            v33 = (unsigned int)v27 / v32;
            LODWORD(v27) = (unsigned int)v27 % v32;
            if ( (unsigned int)(((char *)pageTree - (char *)s_memPaged.pageTree) >> 3) >= 0x1041 )
            {
              LODWORD(v48) = 4161;
              LODWORD(v46) = ((char *)pageTree - (char *)s_memPaged.pageTree) >> 3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( entry - m_freePageTree ) < (unsigned)( PAGE_TREE_SIZE )", "entry - m_freePageTree doesn't index PAGE_TREE_SIZE\n\t%i not in [0, %i)", v46, v48) )
                __debugbreak();
            }
            if ( !v31 )
            {
              v34 = pageTree->m_freePageTree[0];
              if ( _bittest64((const __int64 *)&v34, v33) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 129, ASSERT_TYPE_ASSERT, "(level > 0 || ( *entry & Mem_PageTreeNode( 1U ) << index ) == 0)", (const char *)&queryFormat, "level > 0 || ( *entry & Mem_PageTreeNode( 1U ) << index ) == 0") )
                  __debugbreak();
              }
            }
            pageTree->m_freePageTree[0] |= 1i64 << v33;
            v35 = v32 - 1;
            v36 = (v32 - 1) * (unsigned __int128)0x410410410410411ui64;
            v32 >>= 6;
            pageTree = (Mem_PageTree<262144> *)((char *)pageTree + 8 * (unsigned int)v33 * (unsigned int)((*((_QWORD *)&v36 + 1) + ((unsigned __int64)(v35 - *((_QWORD *)&v36 + 1)) >> 1)) >> 5) + 8);
          }
          while ( v31 );
          v26 = v52;
          v37 = v57;
          v6 = v55;
          if ( s_memPaged.pageTree[0].m_freePages == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 136, ASSERT_TYPE_ASSERT, "(m_freePages != 0xffffffffui32)", (const char *)&queryFormat, "m_freePages != UINT32_MAX") )
            __debugbreak();
          ++s_memPaged.pageTree[0].m_freePages;
          v24 = v54;
          v25 = v37 + 1;
          v57 = v25;
        }
        while ( v25 < v54 );
        v16 = v56;
      }
      if ( v24 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v24, "unsigned", v24) )
        __debugbreak();
      totalPhysicalPageCount = v24 + s_memPaged.totalPhysicalPageCount;
      s_memPaged.totalPhysicalPageCount = totalPhysicalPageCount;
      if ( totalPhysicalPageCount >= v16 )
        goto LABEL_93;
    }
    LODWORD(v46) = GetLastError();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1077, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "AllocateTitlePhysicalPages failed with error: %x\n", v46) )
      __debugbreak();
    totalPhysicalPageCount = s_memPaged.totalPhysicalPageCount;
LABEL_93:
    v3 = reserveMemorySize;
    v5 = v52;
    v21 = totalPhysicalPageCount == v16;
  }
  if ( !v21 )
  {
    LODWORD(v51) = v16;
    LODWORD(v50) = totalPhysicalPageCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1094, ASSERT_TYPE_ASSERT, "( s_memPaged.totalPhysicalPageCount ) == ( actualPageCount )", "%s == %s\n\t%u, %u", "s_memPaged.totalPhysicalPageCount", "actualPageCount", v50, v51) )
      __debugbreak();
  }
  if ( !(unsigned int)TitleMemoryStatus(&v60) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1096, ASSERT_TYPE_ASSERT, "(TitleMemoryStatus( &titleMemStatus ))", (const char *)&queryFormat, "TitleMemoryStatus( &titleMemStatus )") )
    __debugbreak();
  if ( v62 < v3 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
    }
    if ( (v62 & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@35800000
      vcvtss2sd xmm3, xmm0, xmm0
      vmovsd  [rsp+10138h+var_10108], xmm3
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmulss  xmm0, xmm1, cs:__real@35800000
      vcvtss2sd xmm2, xmm0, xmm0
      vmovsd  [rsp+10138h+var_10110], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1099, ASSERT_TYPE_ASSERT, "( titleMemStatus.ullAvailMem >= reserveMemorySize )", "After grabbing physical pages expected the OS to still have %.1f MBs physical memory left, but it only has %.1f MBs!", v47, v49) )
      __debugbreak();
  }
  Mem_PageTree<262144>::SetRange(s_memPaged.pageTree, v6, v5 + 1);
}

/*
==============
Mem_Paged_GrabVirtualMemory
==============
*/

void __fastcall Mem_Paged_GrabVirtualMemory(__int64 a1, double _XMM1_8)
{
  __int64 v2; 
  unsigned __int64 v3; 
  signed __int64 v4; 
  const void *v5; 
  char *fmt; 
  DWORD LastError; 

  v2 = 0i64;
  s_memPaged.virtualMem.end[0] = 0i64;
  s_memPaged.virtualMem.begin[0] = 0i64;
  do
  {
    if ( LOWORD(s_poolReserveSizes[(unsigned __int64)v2 / 2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1209, ASSERT_TYPE_ASSERT, "(IsAligned( s_poolReserveSizes[poolIndex - 1], MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( s_poolReserveSizes[poolIndex - 1], MEM_PHYSICAL_PAGE_SIZE )") )
      __debugbreak();
    v3 = s_poolReserveSizes[(unsigned __int64)v2 / 2] + *(_QWORD *)&s_memPaged.isThreadCommitting[v2 - 254];
    *(_QWORD *)&s_memPaged.isThreadCommitting[v2 - 246] = v3;
    *(_QWORD *)&s_memPaged.isThreadCommitting[v2 - 252] = v3;
    v2 += 2i64;
  }
  while ( v2 < 4 );
  v4 = s_memPaged.virtualMem.begin[2] + 0x200000000i64;
  if ( v4 != Mem_Paged_GetVirtualReserveSize() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1215, ASSERT_TYPE_ASSERT, "(virtualMemorySize == Mem_Paged_GetVirtualReserveSize())", (const char *)&queryFormat, "virtualMemorySize == Mem_Paged_GetVirtualReserveSize()") )
    __debugbreak();
  if ( (_WORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1216, ASSERT_TYPE_ASSERT, "(IsAligned( virtualMemorySize, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( virtualMemorySize, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  v5 = VirtualAlloc(NULL, v4, 0x70002000u, 4u);
  if ( !v5 )
  {
    LastError = GetLastError();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 487, ASSERT_TYPE_ASSERT, "( result )", "Failed to reserve %zu bytes, alloc type=%u, protection flags=%u, GetLastError=%d", v4, 1879048192, 4, LastError) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1230, ASSERT_TYPE_ASSERT, "(virtualMemoryAddr)", (const char *)&queryFormat, "virtualMemoryAddr") )
      __debugbreak();
  }
  IWMem_Allocator_CreateFixed(&s_memPaged.iwMemReserved, "Reserved Mem_Paged", Count, v5, v4);
  s_memPaged.virtualMem.base = (unsigned __int64)v5;
  s_memPaged.virtualMem.size = v4;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rbx
  }
  if ( v4 < 0 )
    __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
  __asm
  {
    vmulss  xmm0, xmm1, cs:__real@30800000
    vmulss  xmm1, xmm1, cs:__real@35800000
    vcvtss2sd xmm3, xmm1, xmm1
    vcvtss2sd xmm2, xmm0, xmm0
    vmovq   r9, xmm3
    vmovsd  [rsp+58h+fmt], xmm2
  }
  Com_Printf(16, "Mem_Paged reserved a virtual address space of %zu bytes, %.1f MBs, %.1f GBs\n", v4, *(double *)&_XMM3, *(double *)&fmt);
}

/*
==============
Mem_Paged_Init
==============
*/

void __fastcall Mem_Paged_Init(__int64 a1, double _XMM1_8)
{
  XB3ConsoleType XB3ConsoleType; 
  unsigned int v3; 
  __int64 PageTableWaste; 
  __int64 v11; 
  int Heap_0; 
  char *fmt; 
  double v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  StreamerMemPageCounts pageCounts; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1358, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_memPaged.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1359, ASSERT_TYPE_ASSERT, "(!s_memPaged.isInitialized)", (const char *)&queryFormat, "!s_memPaged.isInitialized") )
    __debugbreak();
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1362, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsLocked())", (const char *)&queryFormat, "!Mem_Paged_IsLocked()") )
    __debugbreak();
  Mem_Paged_InitPageTable();
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v3 = 708837376;
  if ( XB3ConsoleType == XB3_CONSOLE_DURANGO )
    v3 = 562036736;
  Mem_Paged_GrabPhysicalPages_XB3(v3, _XMM1_8);
  if ( s_memPaged.totalPhysicalPageCount > s_memPaged.pageTableSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1174, ASSERT_TYPE_ASSERT, "( s_memPaged.totalPhysicalPageCount ) <= ( s_memPaged.pageTableSize )", "%s <= %s\n\t%u, %u", "s_memPaged.totalPhysicalPageCount", "s_memPaged.pageTableSize", s_memPaged.totalPhysicalPageCount, s_memPaged.pageTableSize) )
    __debugbreak();
  PageTableWaste = Mem_Paged_GetPageTableWaste();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r9
    vmulss  xmm0, xmm1, cs:__real@30800000
    vmulss  xmm1, xmm1, cs:__real@35800000
  }
  LODWORD(v16) = s_memPaged.pageTableSize;
  __asm
  {
    vcvtss2sd xmm3, xmm0, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
    vmovsd  [rsp+68h+var_40], xmm3
    vmovsd  [rsp+68h+fmt], xmm2
  }
  Com_Printf(16, "Mem_Paged allocated %u physical pages (%zu bytes, %.1f MBs, %.1f GBs) with a page table for %u pages (page table size: %zu bytes, unused overhead: %zu bytes)\n", s_memPaged.totalPhysicalPageCount, (unsigned __int64)s_memPaged.totalPhysicalPageCount << 16, *(double *)&fmt, v14, v16, 16i64 * s_memPaged.pageTableSize + 33304, PageTableWaste);
  Mem_Paged_GrabVirtualMemory(v11, *(double *)&_XMM1);
  pageCounts.pages[0] = 0;
  Mem_Paged_AcquireLock();
  pageCounts.pages[1] = s_memPaged.pageTree[0].m_freePages;
  Mem_Paged_ReleaseLock();
  Stream_Alloc_InitialHandoffFromMemPaged(&pageCounts);
  Mem_ESRAM_Init();
  XB3XMemAlloc_ReserveHeaps();
  Heap_0 = ApuCreateHeap_0(12582912i64, 0x100000i64);
  if ( Heap_0 )
  {
    LODWORD(v18) = Heap_0;
    LODWORD(v17) = 0x100000;
    LODWORD(v15) = 12582912;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1338, ASSERT_TYPE_ASSERT, "( hr == ((HRESULT)0L) )", "ApuCreateHeap(%d, %d) failed with hr=0x%x", v15, v17, v18) )
      __debugbreak();
  }
  IWMem_Allocator_CreateFixed(&s_memPaged.iwMemFree, "Free Mem_Paged", NormalSpace, NULL, 0xFFFFFFFFFFFFFFFFui64);
  IWMem_Allocator_SetFreeMem(s_memPaged.iwMemFree, (unsigned __int64)s_memPaged.pageTree[0].m_freePages << 16);
  s_memPaged.isInitialized = 1;
}

/*
==============
Mem_Paged_InitPageTable
==============
*/
unsigned int *Mem_Paged_InitPageTable()
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  MemPaged::PhysicalPageTableEntry *pageTable; 
  MemPaged::PhysicalPageTableEntry *v3; 
  SIZE_T v4; 
  unsigned int *result; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  DWORD LastError; 

  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
  {
    s_memPaged.pageTableSize = 163840;
    v0 = 2621440i64;
  }
  else
  {
    if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 721, ASSERT_TYPE_ASSERT, "(Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO)", (const char *)&queryFormat, "Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO") )
      __debugbreak();
    s_memPaged.pageTableSize = 0x40000;
    v0 = 0x400000i64;
  }
  if ( s_memPaged.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 509, ASSERT_TYPE_ASSERT, "(!s_memPaged.isInitialized)", (const char *)&queryFormat, "!s_memPaged.isInitialized") )
    __debugbreak();
  if ( ((unsigned __int8)&s_memPaged.preInitReserveSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_memPaged.preInitReserveSize) )
    __debugbreak();
  v1 = v0 + _InterlockedExchangeAdd64(&s_memPaged.preInitReserveSize, v0);
  if ( v1 > 0x8000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 514, ASSERT_TYPE_ASSERT, "( startOffset + sizeInBytes ) <= ( MAX_PRE_INIT_SIZE )", "%s <= %s\n\t%lli, %lli", "startOffset + sizeInBytes", "MAX_PRE_INIT_SIZE", v1, 0x8000000i64) )
    __debugbreak();
  s_memPaged.pageTable = (MemPaged::PhysicalPageTableEntry *)Mem_Paged_VirtualAllocReserve(v0, 0x60000000u, 4u);
  pageTable = s_memPaged.pageTable;
  if ( !s_memPaged.pageTable )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 750, ASSERT_TYPE_ASSERT, "(s_memPaged.pageTable)", (const char *)&queryFormat, "s_memPaged.pageTable") )
      __debugbreak();
    pageTable = s_memPaged.pageTable;
  }
  v3 = &pageTable[s_memPaged.pageTableSize];
  if ( s_memPaged.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 538, ASSERT_TYPE_ASSERT, "(!s_memPaged.isInitialized)", (const char *)&queryFormat, "!s_memPaged.isInitialized") )
    __debugbreak();
  if ( pageTable >= v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 539, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  v4 = (char *)v3 - (char *)pageTable;
  if ( (_WORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 540, ASSERT_TYPE_ASSERT, "(IsAligned( end - start, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end - start, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( VirtualAlloc(pageTable, v4, 0x60001000u, 4u) != pageTable )
  {
    LastError = GetLastError();
    LODWORD(v8) = 4;
    LODWORD(v7) = 1610612736;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 496, ASSERT_TYPE_ASSERT, "( result == address )", "Failed to commit %zu bytes at virtual address 0x%zx, alloc type=%u, protection flags=%u, GetLastError=%d", v4, (size_t)pageTable, v7, v8, LastError) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 552, ASSERT_TYPE_ASSERT, "((Mem_Paged_VirtualAllocCommit( start, end - start, 0x20000000 | 0x40000000, 0x04 )) == (start))", (const char *)&queryFormat, "Mem_Paged_VirtualAllocCommit( start, end - start, MEM_LARGE_PAGES | MEM_TITLE, PAGE_READWRITE ) == start") )
      __debugbreak();
  }
  memset_0(s_memPaged.pageTable, 255, v0);
  result = s_memPaged.subPageHashAnchorTable;
  v6 = 64i64;
  do
  {
    *(_QWORD *)result = 0x7FFFF0007FFFFi64;
    *((_QWORD *)result + 1) = 0x7FFFF0007FFFFi64;
    *((_QWORD *)result + 2) = 0x7FFFF0007FFFFi64;
    result += 16;
    *((_QWORD *)result - 5) = 0x7FFFF0007FFFFi64;
    *((_QWORD *)result - 4) = 0x7FFFF0007FFFFi64;
    *((_QWORD *)result - 3) = 0x7FFFF0007FFFFi64;
    *((_QWORD *)result - 2) = 0x7FFFF0007FFFFi64;
    *((_QWORD *)result - 1) = 0x7FFFF0007FFFFi64;
    --v6;
  }
  while ( v6 );
  return result;
}

/*
==============
Mem_Paged_IsInPoolVARange
==============
*/
bool Mem_Paged_IsInPoolVARange(Mem_Pool poolIndex, const void *const ptr)
{
  __int64 v2; 

  v2 = poolIndex;
  if ( !Mem_Paged_IsInVirtualGrab(ptr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1280, ASSERT_TYPE_ASSERT, "( ( Mem_Paged_IsInVirtualGrab( ptr ) ) )", "( ptr ) = %p", ptr) )
    __debugbreak();
  return (unsigned __int64)ptr >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.begin[v2] && (unsigned __int64)ptr < s_memPaged.virtualMem.base + s_memPaged.virtualMem.end[v2];
}

/*
==============
Mem_Paged_IsInVirtualGrab
==============
*/
bool Mem_Paged_IsInVirtualGrab(const void *const ptr)
{
  return (unsigned __int64)ptr >= s_memPaged.virtualMem.base && (unsigned __int64)ptr < s_memPaged.virtualMem.size + s_memPaged.virtualMem.base;
}

/*
==============
Mem_Paged_IsInitialized
==============
*/
_BOOL8 Mem_Paged_IsInitialized()
{
  return s_memPaged.isInitialized;
}

/*
==============
Mem_Paged_IsThreadContextCommitting
==============
*/
bool Mem_Paged_IsThreadContextCommitting(ThreadContext context)
{
  __int64 v1; 
  int v4; 

  v1 = context;
  if ( (unsigned int)context >= THREAD_CONTEXT_COUNT )
  {
    v4 = 28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 830, ASSERT_TYPE_ASSERT, "(unsigned)( context ) < (unsigned)( ( sizeof( *array_counter( s_memPaged.isThreadCommitting ) ) + 0 ) )", "context doesn't index ARRAY_COUNT( s_memPaged.isThreadCommitting )\n\t%i not in [0, %i)", context, v4) )
      __debugbreak();
  }
  return s_memPaged.isThreadCommitting[v1] != 0;
}

/*
==============
Mem_Paged_MapESRAM
==============
*/
bool Mem_Paged_MapESRAM(unsigned __int8 *start, unsigned __int8 *end, const Mem_MapRange *mapRanges, unsigned int mapRangeCount)
{
  unsigned __int8 *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int pageOffset; 
  unsigned int v11; 
  int v14[512]; 

  v6 = end;
  v7 = mapRangeCount;
  if ( (_WORD)start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3034, ASSERT_TYPE_ASSERT, "(IsAligned( start, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( start, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( (_WORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3035, ASSERT_TYPE_ASSERT, "(IsAligned( end, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( start >= v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3036, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  v8 = 0i64;
  if ( (_DWORD)v7 )
  {
    v9 = v7;
    do
    {
      pageOffset = mapRanges->pageOffset;
      v11 = mapRanges->pageOffset + mapRanges->pageCount;
      if ( v11 > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3048, ASSERT_TYPE_ASSERT, "(rangeEnd <= 512)", (const char *)&queryFormat, "rangeEnd <= 512") )
        __debugbreak();
      for ( ; pageOffset < v11; ++pageOffset )
      {
        v14[v8] = pageOffset;
        v8 = (unsigned int)(v8 + 1);
      }
      ++mapRanges;
      --v9;
    }
    while ( v9 );
    v6 = end;
  }
  if ( (unsigned int)v8 != (unsigned __int64)(v6 - start) >> 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3053, ASSERT_TYPE_ASSERT, "(esramPageIndex == ( end - start ) / MEM_PHYSICAL_PAGE_SIZE)", (const char *)&queryFormat, "esramPageIndex == ( end - start ) / MEM_PHYSICAL_PAGE_SIZE") )
    __debugbreak();
  return (unsigned int)D3DMapEsramMemory_0(1i64, start, (unsigned int)v8, v14) == 0;
}

/*
==============
Mem_Paged_MapMemory
==============
*/
char Mem_Paged_MapMemory(unsigned __int8 *start, unsigned __int8 *end, const Mem_PageRange *pageRange, const Mem_MapRange *mapRanges, unsigned int mapRangeCount)
{
  const Mem_MapRange *v7; 
  unsigned __int8 *v8; 
  MemPaged::PhysicalPageTableEntry *v9; 
  Mem_Pool PoolFromPtr; 
  unsigned int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  Mem_Pool v23; 
  __int64 v24; 
  unsigned __int8 *v25; 
  const Mem_MapRange *v27; 
  unsigned int mapRangeCounta; 

  v27 = mapRanges;
  v25 = start;
  v7 = mapRanges;
  v8 = start;
  if ( (_WORD)start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2946, ASSERT_TYPE_ASSERT, "(IsAligned( start, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( start, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( (_WORD)end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2947, ASSERT_TYPE_ASSERT, "(IsAligned( end, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( v8 >= end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2948, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  if ( pageRange->firstPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2949, ASSERT_TYPE_ASSERT, "(pageRange->firstPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "pageRange->firstPageID != MEM_PAGEID_INVALID") )
    __debugbreak();
  if ( pageRange->lastPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2950, ASSERT_TYPE_ASSERT, "(pageRange->lastPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "pageRange->lastPageID != MEM_PAGEID_INVALID") )
    __debugbreak();
  Mem_Paged_AcquireLock();
  v9 = &s_memPaged.pageTable[(unsigned int)Mem_Paged_GetPhysicalPageIndexFromID(pageRange->firstPageID)];
  if ( (*((_DWORD *)v9 + 2) & 0x80000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2955, ASSERT_TYPE_ASSERT, "(pageEntry->commitMode == static_cast<uint>( CommitMode::ONCE ))", (const char *)&queryFormat, "pageEntry->commitMode == static_cast<uint>( CommitMode::ONCE )") )
    __debugbreak();
  PoolFromPtr = (unsigned int)Mem_Paged_GetPoolFromPtr(v8);
  v23 = PoolFromPtr;
  LODWORD(pageRange) = Mem_Paged_GetPhysicalPageIndexFromID(pageRange->firstPageID);
  v11 = 0;
  Mem_Paged_FlushBatchContext();
  if ( mapRangeCount )
  {
    v12 = mapRangeCount;
    v24 = mapRangeCount;
    do
    {
      v13 = v7->pageOffset + v7->pageCount;
      if ( v11 != v7->pageOffset )
      {
        v14 = v7->pageOffset - v11;
        mapRangeCounta = v7->pageOffset;
        do
        {
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2973, ASSERT_TYPE_ASSERT, "(pageEntry)", (const char *)&queryFormat, "pageEntry") )
            __debugbreak();
          v15 = *(_QWORD *)v9 >> 44;
          if ( (v15 & 0x1FFF) != 0 )
          {
            LODWORD(v22) = v15 & 0x1FFF;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2975, ASSERT_TYPE_ASSERT, "( pageEntry->refCount ) == ( 0 )", "%s == %s\n\t%u, %u", "pageEntry->refCount", "0", v22, 0i64) )
              __debugbreak();
          }
          pageRange = (const Mem_PageRange *)((*(_QWORD *)v9 >> 2) & 0x7FFFFi64);
          if ( pageRange == (const Mem_PageRange *)0x7FFFF )
          {
            v9 = NULL;
          }
          else
          {
            if ( (unsigned int)pageRange >= s_memPaged.pageTableSize )
            {
              LODWORD(v21) = s_memPaged.pageTableSize;
              LODWORD(v20) = (_DWORD)pageRange;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v20, v21) )
                __debugbreak();
            }
            v9 = &s_memPaged.pageTable[(unsigned int)pageRange];
          }
          --v14;
        }
        while ( v14 );
        v8 = v25;
        v11 = mapRangeCounta;
        v7 = v27;
        PoolFromPtr = v23;
        v12 = v24;
      }
      if ( v11 != v13 )
      {
        v16 = v13 - v11;
        v17 = v16;
        do
        {
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2983, ASSERT_TYPE_ASSERT, "(pageEntry)", (const char *)&queryFormat, "pageEntry") )
            __debugbreak();
          v18 = *(_QWORD *)v9 >> 44;
          if ( (v18 & 0x1FFF) != 0 )
          {
            LODWORD(v22) = v18 & 0x1FFF;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2985, ASSERT_TYPE_ASSERT, "( pageEntry->refCount ) == ( 0 )", "%s == %s\n\t%u, %u", "pageEntry->refCount", "0", v22, 0i64) )
              __debugbreak();
          }
          Mem_Paged_AddPageMapToBatchContext((const unsigned __int64)v8, PoolFromPtr, (const unsigned int)pageRange, *(_DWORD *)v9 & 3, 0);
          pageRange = (const Mem_PageRange *)((*(_QWORD *)v9 >> 2) & 0x7FFFFi64);
          if ( pageRange == (const Mem_PageRange *)0x7FFFF )
          {
            v9 = NULL;
          }
          else
          {
            if ( (unsigned int)pageRange >= s_memPaged.pageTableSize )
            {
              LODWORD(v21) = s_memPaged.pageTableSize;
              LODWORD(v20) = (_DWORD)pageRange;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v20, v21) )
                __debugbreak();
            }
            v9 = &s_memPaged.pageTable[(unsigned int)pageRange];
          }
          v8 += 0x10000;
          --v17;
        }
        while ( v17 );
        v11 += v16;
        v7 = v27;
        v12 = v24;
        v25 = v8;
      }
      ++v7;
      --v12;
      v27 = v7;
      v24 = v12;
    }
    while ( v12 );
  }
  Mem_Paged_FlushBatchContext();
  if ( v8 != end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2998, ASSERT_TYPE_ASSERT, "(address == addressEnd)", (const char *)&queryFormat, "address == addressEnd") )
    __debugbreak();
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1804, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( s_memPaged.batchContext.entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2999, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsBatchContextEmpty())", (const char *)&queryFormat, "Mem_Paged_IsBatchContextEmpty()") )
    __debugbreak();
  Mem_Paged_ReleaseLock();
  return 1;
}

/*
==============
Mem_Paged_PopThreadContextCommitting
==============
*/
char Mem_Paged_PopThreadContextCommitting()
{
  ThreadContext CurrentThreadContext; 
  __int64 v1; 
  volatile int *v2; 
  signed __int32 v3; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 819, ASSERT_TYPE_ASSERT, "(unsigned)( threadCtx ) < (unsigned)( ( sizeof( *array_counter( s_memPaged.isThreadCommitting ) ) + 0 ) )", "threadCtx doesn't index ARRAY_COUNT( s_memPaged.isThreadCommitting )\n\t%i not in [0, %i)", CurrentThreadContext, 28) )
    __debugbreak();
  v2 = &s_memPaged.isThreadCommitting[v1];
  if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v2) )
    __debugbreak();
  v3 = _InterlockedExchangeAdd(v2, 0xFFFFFFFF);
  if ( v3 - 1 < 0 )
  {
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 821, ASSERT_TYPE_ASSERT, "((Sys_InterlockedDecrement( &s_memPaged.isThreadCommitting[threadCtx] )) >= (0))", (const char *)&queryFormat, "Sys_InterlockedDecrement( &s_memPaged.isThreadCommitting[threadCtx] ) >= 0");
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  return v3;
}

/*
==============
Mem_Paged_PreInitCommitMemory
==============
*/
void Mem_Paged_PreInitCommitMemory(unsigned __int8 *start, unsigned __int8 *end)
{
  SIZE_T v4; 
  int v5; 
  int v6; 
  DWORD LastError; 

  if ( s_memPaged.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 538, ASSERT_TYPE_ASSERT, "(!s_memPaged.isInitialized)", (const char *)&queryFormat, "!s_memPaged.isInitialized") )
    __debugbreak();
  if ( start >= end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 539, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  v4 = end - start;
  if ( (_WORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 540, ASSERT_TYPE_ASSERT, "(IsAligned( end - start, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end - start, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( VirtualAlloc(start, v4, 0x60001000u, 4u) != start )
  {
    LastError = GetLastError();
    v6 = 4;
    v5 = 1610612736;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 496, ASSERT_TYPE_ASSERT, "( result == address )", "Failed to commit %zu bytes at virtual address 0x%zx, alloc type=%u, protection flags=%u, GetLastError=%d", v4, (size_t)start, v5, v6, LastError) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 552, ASSERT_TYPE_ASSERT, "((Mem_Paged_VirtualAllocCommit( start, end - start, 0x20000000 | 0x40000000, 0x04 )) == (start))", (const char *)&queryFormat, "Mem_Paged_VirtualAllocCommit( start, end - start, MEM_LARGE_PAGES | MEM_TITLE, PAGE_READWRITE ) == start") )
      __debugbreak();
  }
}

/*
==============
Mem_Paged_PreInitReserveAddressRange
==============
*/
void *Mem_Paged_PreInitReserveAddressRange(unsigned __int64 sizeInBytes)
{
  unsigned __int64 v2; 

  if ( s_memPaged.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 509, ASSERT_TYPE_ASSERT, "(!s_memPaged.isInitialized)", (const char *)&queryFormat, "!s_memPaged.isInitialized") )
    __debugbreak();
  if ( !sizeInBytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 510, ASSERT_TYPE_ASSERT, "(sizeInBytes > 0)", (const char *)&queryFormat, "sizeInBytes > 0") )
    __debugbreak();
  if ( (_WORD)sizeInBytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 511, ASSERT_TYPE_ASSERT, "(IsAligned( sizeInBytes, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( sizeInBytes, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( ((unsigned __int8)&s_memPaged.preInitReserveSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_memPaged.preInitReserveSize) )
    __debugbreak();
  v2 = sizeInBytes + _InterlockedExchangeAdd64(&s_memPaged.preInitReserveSize, sizeInBytes);
  if ( v2 > 0x8000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 514, ASSERT_TYPE_ASSERT, "( startOffset + sizeInBytes ) <= ( MAX_PRE_INIT_SIZE )", "%s <= %s\n\t%lli, %lli", "startOffset + sizeInBytes", "MAX_PRE_INIT_SIZE", v2, 0x8000000i64) )
    __debugbreak();
  return Mem_Paged_VirtualAllocReserve(sizeInBytes, 0x60000000u, 4u);
}

/*
==============
Mem_Paged_PrintSubPageMemoryRefCounts
==============
*/
void Mem_Paged_PrintSubPageMemoryRefCounts(unsigned __int8 *start, unsigned __int8 *end)
{
  unsigned __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  MemPaged::PhysicalPageTableEntry *RefCountedPageTableEntryIfMapped; 
  unsigned __int64 base; 
  unsigned int optOutPrevPageIndex; 

  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3156, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( ((unsigned __int8)start & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3157, ASSERT_TYPE_ASSERT, "(IsAligned( start, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( start, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  if ( ((unsigned __int8)end & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3158, ASSERT_TYPE_ASSERT, "(IsAligned( end, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( end, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  if ( start >= end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3159, ASSERT_TYPE_ASSERT, "(start < end)", (const char *)&queryFormat, "start < end") )
    __debugbreak();
  v4 = (unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64;
  v5 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&end[-((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64) + 0xFFFF] >> 16);
  v6 = v5;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3164, ASSERT_TYPE_ASSERT, "(pageCount > 0)", (const char *)&queryFormat, "pageCount > 0") )
    __debugbreak();
  Com_Printf(0, "Mem_Paged ref count print for sub-page allocation [0x%p, 0x%p):\n", start, end);
  if ( (_DWORD)v6 )
  {
    v7 = v6;
    do
    {
      optOutPrevPageIndex = 0x7FFFF;
      RefCountedPageTableEntryIfMapped = Mem_Paged_GetRefCountedPageTableEntryIfMapped(v4, &optOutPrevPageIndex);
      if ( RefCountedPageTableEntryIfMapped )
      {
        base = s_memPaged.virtualMem.base;
        if ( v4 < s_memPaged.virtualMem.base || v4 >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
            __debugbreak();
          base = s_memPaged.virtualMem.base;
        }
        if ( ((*(_QWORD *)RefCountedPageTableEntryIfMapped >> 22) & 0x3FFFFFi64) != truncate_cast<unsigned int,unsigned __int64>((v4 - base) >> 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3176, ASSERT_TYPE_ASSERT, "(pageTableEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( addressWalk ))", (const char *)&queryFormat, "pageTableEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( addressWalk )") )
          __debugbreak();
        Com_Printf(0, "    page 0x%016zx ref count %u\n", v4, (*(_QWORD *)RefCountedPageTableEntryIfMapped >> 44) & 0x1FFFi64);
      }
      else
      {
        Com_Printf(0, "    page 0x%016zx unmapped\n", v4);
      }
      v4 += 0x10000i64;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
Mem_Paged_PushThreadContextCommitting
==============
*/
char Mem_Paged_PushThreadContextCommitting()
{
  ThreadContext CurrentThreadContext; 
  __int64 v1; 
  volatile int *v2; 
  int v3; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 806, ASSERT_TYPE_ASSERT, "(unsigned)( threadCtx ) < (unsigned)( ( sizeof( *array_counter( s_memPaged.isThreadCommitting ) ) + 0 ) )", "threadCtx doesn't index ARRAY_COUNT( s_memPaged.isThreadCommitting )\n\t%i not in [0, %i)", CurrentThreadContext, 28) )
    __debugbreak();
  v2 = &s_memPaged.isThreadCommitting[v1];
  if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v2) )
    __debugbreak();
  v3 = _InterlockedIncrement(v2);
  if ( v3 < 1 )
  {
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 808, ASSERT_TYPE_ASSERT, "((Sys_InterlockedIncrement( &s_memPaged.isThreadCommitting[threadCtx] )) >= (1))", (const char *)&queryFormat, "Sys_InterlockedIncrement( &s_memPaged.isThreadCommitting[threadCtx] ) >= 1");
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  return v3;
}

/*
==============
Mem_Paged_ReleaseLock
==============
*/
char Mem_Paged_ReleaseLock()
{
  signed __int32 v0; 
  __int64 v1; 

  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 599, ASSERT_TYPE_ASSERT, "(s_memPagedLockCount > 0)", (const char *)&queryFormat, "s_memPagedLockCount > 0") )
    __debugbreak();
  LOBYTE(v0) = tls_index;
  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( (*(_DWORD *)(v1 + 452))-- == 1 )
  {
    if ( ((unsigned __int8)s_memPagedLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_memPagedLock) )
      __debugbreak();
    v0 = _InterlockedCompareExchange(s_memPagedLock, 0, 1);
    if ( v0 != 1 )
    {
      LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 604, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &s_memPagedLock, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_memPagedLock, 0, 1 ) == 1");
      if ( (_BYTE)v0 )
        __debugbreak();
    }
  }
  return v0;
}

/*
==============
Mem_Paged_ReleasePhysicalPages
==============
*/
void Mem_Paged_ReleasePhysicalPages(unsigned int pageCount)
{
  int v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  int v5; 
  signed int v6; 
  __int64 v7; 
  HANDLE CurrentProcess; 
  HANDLE v9; 
  StreamMemPool StreamMemPoolFromMemPool; 
  int v11; 
  StreamerMemPageCounts *p_pagesTaken; 
  __int64 v13; 
  __int64 v14; 
  StreamerMemPageCounts *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int outPageDeficit; 
  __int64 v21; 
  StreamerMemPageCounts pagesTaken; 
  StreamerMemLoan loan; 
  __int64 v24[1024]; 

  v21 = -2i64;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3650, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( pageCount > s_memPaged.totalPhysicalPageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3651, ASSERT_TYPE_ASSERT, "( pageCount ) <= ( s_memPaged.totalPhysicalPageCount )", "%s <= %s\n\t%u, %u", "pageCount", "s_memPaged.totalPhysicalPageCount", pageCount, s_memPaged.totalPhysicalPageCount) )
    __debugbreak();
  v2 = 0;
  v3 = 0i64;
  if ( !pageCount )
    return;
  loan.mUpdateID = 0i64;
  loan.mPages = 0i64;
  loan.mCookie = -1061110033;
  if ( !Mem_Paged_RequestPagesFromStreamerAndAcquireLock(&loan, ONCE, MEM_POOL_GPU_PRIVATE, pageCount, &outPageDeficit) )
  {
    if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3668, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsLocked())", (const char *)&queryFormat, "!Mem_Paged_IsLocked()") )
        __debugbreak();
    }
    LODWORD(v17) = outPageDeficit;
    LODWORD(v16) = pageCount;
    Mem_Error_CannotAlloc_Dev(MOVEMENT, "Mem_Paged_ReleasePhysicalPages", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3669, "Mem_Paged_ReleasePhysicalPages: pageCount=%u pageDeficit=%u", v16, v17);
    goto LABEL_54;
  }
  v4 = tls_index;
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3672, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v4) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 677, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( s_memPaged.pageTree[0].m_freePages < pageCount )
  {
    if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v4) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 677, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
      __debugbreak();
    LODWORD(v19) = pageCount;
    LODWORD(v18) = s_memPaged.pageTree[0].m_freePages;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3673, ASSERT_TYPE_ASSERT, "( Mem_Paged_GetFreePageCountForCommit_AlreadyLocked( pool ) ) >= ( pageCount )", "%s >= %s\n\t%u, %u", "Mem_Paged_GetFreePageCountForCommit_AlreadyLocked( pool )", "pageCount", v18, v19) )
      __debugbreak();
  }
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v4) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 648, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  v5 = 0;
  while ( 1 )
  {
    v6 = PageTree_Alloc(LINEAR);
    v7 = v6;
    if ( v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3684, ASSERT_TYPE_ASSERT, "(pageIndex != Mem_PageTree<PAGE_TABLE_MAX_SIZE>::INVALID_PAGEID)", (const char *)&queryFormat, "pageIndex != Mem_PageTree<PAGE_TABLE_MAX_SIZE>::INVALID_PAGEID") )
      __debugbreak();
    if ( (unsigned int)v7 >= s_memPaged.pageTableSize )
    {
      LODWORD(v17) = s_memPaged.pageTableSize;
      LODWORD(v16) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3685, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( v3 != 1024 )
      goto LABEL_38;
    CurrentProcess = GetCurrentProcess();
    if ( !(unsigned int)FreeTitlePhysicalPages(CurrentProcess, 1024i64, v24) )
      break;
    s_memPaged.totalPhysicalPageCount -= truncate_cast<unsigned int,unsigned __int64>(0x400ui64);
    v3 = 0i64;
LABEL_38:
    v24[v3++] = v7;
    if ( ++v5 >= pageCount )
    {
      if ( !v3 )
        goto LABEL_46;
      v9 = GetCurrentProcess();
      if ( !(unsigned int)FreeTitlePhysicalPages(v9, v3, v24) )
      {
        if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3707, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "FreeTitlePhysicalPages failed") )
          goto LABEL_46;
        goto LABEL_42;
      }
      s_memPaged.totalPhysicalPageCount -= truncate_cast<unsigned int,unsigned __int64>(v3);
      goto LABEL_46;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3691, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "FreeTitlePhysicalPages failed") )
LABEL_42:
    __debugbreak();
LABEL_46:
  pagesTaken = 0i64;
  StreamMemPoolFromMemPool = Stream_Alloc_GetStreamMemPoolFromMemPool(MEM_POOL_GPU_PRIVATE);
  StreamerMemLoan::TakePages(&loan, StreamMemPoolFromMemPool, pageCount, &pagesTaken);
  v11 = 0;
  p_pagesTaken = &pagesTaken;
  v13 = 2i64;
  v14 = 2i64;
  do
  {
    v11 += p_pagesTaken->pages[0];
    p_pagesTaken = (StreamerMemPageCounts *)((char *)p_pagesTaken + 4);
    --v14;
  }
  while ( v14 );
  if ( v11 != pageCount )
  {
    v15 = &pagesTaken;
    do
    {
      v2 += v15->pages[0];
      v15 = (StreamerMemPageCounts *)((char *)v15 + 4);
      --v13;
    }
    while ( v13 );
    LODWORD(v19) = pageCount;
    LODWORD(v18) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3719, ASSERT_TYPE_ASSERT, "( pagesTaken.TotalPages() ) == ( pageCount )", "%s == %s\n\t%u, %u", "pagesTaken.TotalPages()", "pageCount", v18, v19) )
      __debugbreak();
  }
  Mem_Paged_ReleaseLock();
LABEL_54:
  StreamerMemLoan::~StreamerMemLoan(&loan);
}

/*
==============
Mem_Paged_RemapSubPageMemory
==============
*/
unsigned int Mem_Paged_RemapSubPageMemory(unsigned __int8 *src, unsigned __int8 *dst, unsigned int pageCount, bool allowPartiallyCommittedRemaps)
{
  return Mem_Paged_RemapSubPageMemoryInternal(1, src, dst, pageCount, allowPartiallyCommittedRemaps);
}

/*
==============
Mem_Paged_RemapSubPageMemoryInternal
==============
*/
__int64 Mem_Paged_RemapSubPageMemoryInternal(bool flushBatchContext, unsigned __int8 *src, unsigned __int8 *dst, unsigned int pageCount, bool allowPartiallyCommittedRemaps)
{
  unsigned int v5; 
  unsigned __int64 v6; 
  unsigned __int8 *v7; 
  Mem_Pool PoolFromPtr; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  char *v17; 
  char *v18; 
  MemPaged::PhysicalPageTableEntry *RefCountedPageTableEntryIfMapped; 
  char *v20; 
  __int64 v21; 
  unsigned __int64 base; 
  __int64 v23; 
  unsigned __int64 v24; 
  unsigned int v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int *v28; 
  const unsigned int *v29; 
  __int64 v30; 
  unsigned int v31; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned int v38; 
  unsigned int optOutPrevPageIndex; 
  unsigned int v40; 
  __int64 v41; 
  Mem_Pool v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  __int64 v46; 
  unsigned __int64 address; 
  char v48[2048]; 

  v44 = pageCount;
  v5 = pageCount;
  address = (unsigned __int64)dst;
  v6 = (unsigned __int64)dst;
  v7 = src;
  if ( src == dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3501, ASSERT_TYPE_ASSERT, "(src != dst)", (const char *)&queryFormat, "src != dst") )
    __debugbreak();
  if ( (_WORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3502, ASSERT_TYPE_ASSERT, "(IsAligned( src, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( src, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( (_WORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3503, ASSERT_TYPE_ASSERT, "(IsAligned( dst, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( dst, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3504, ASSERT_TYPE_ASSERT, "(pageCount > 0)", (const char *)&queryFormat, "pageCount > 0") )
    __debugbreak();
  PoolFromPtr = (unsigned int)Mem_Paged_GetPoolFromPtr(v7);
  v42 = PoolFromPtr;
  v10 = 1;
  Mem_Paged_AcquireLock();
  if ( flushBatchContext )
    Mem_Paged_FlushBatchContext();
  v11 = 0;
  v12 = (v5 + 511) >> 9;
  v38 = 0;
  v43 = v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3529, ASSERT_TYPE_ASSERT, "(batchCount >= 1)", (const char *)&queryFormat, "batchCount >= 1") )
    __debugbreak();
  v40 = 0;
  v13 = 0;
  if ( v12 )
  {
    v14 = v12 - 1;
    v45 = v12 - 1;
    while ( 1 )
    {
      if ( v13 >= v14 )
      {
        v15 = v5 & 0x1FF;
        if ( (v5 & 0x1FF) == 0 )
          goto LABEL_76;
      }
      else
      {
        v15 = 512;
      }
      v16 = v15;
      v17 = v48;
      v46 = v15;
      v18 = (char *)v6;
      v41 = v15;
      do
      {
        if ( (unsigned int)Mem_Paged_GetPoolFromPtr(v7) != PoolFromPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3540, ASSERT_TYPE_ASSERT, "(Mem_Paged_GetPoolFromPtr( reinterpret_cast<void*>( srcAddressWalk ) ) == pool)", (const char *)&queryFormat, "Mem_Paged_GetPoolFromPtr( reinterpret_cast<void*>( srcAddressWalk ) ) == pool") )
          __debugbreak();
        if ( (unsigned int)Mem_Paged_GetPoolFromPtr(v18) != PoolFromPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3541, ASSERT_TYPE_ASSERT, "(Mem_Paged_GetPoolFromPtr( reinterpret_cast<void*>( dstAddressWalk ) ) == pool)", (const char *)&queryFormat, "Mem_Paged_GetPoolFromPtr( reinterpret_cast<void*>( dstAddressWalk ) ) == pool") )
          __debugbreak();
        optOutPrevPageIndex = 0x7FFFF;
        RefCountedPageTableEntryIfMapped = Mem_Paged_GetRefCountedPageTableEntryIfMapped((const unsigned __int64)v7, &optOutPrevPageIndex);
        v20 = (char *)RefCountedPageTableEntryIfMapped;
        if ( allowPartiallyCommittedRemaps )
        {
          if ( !RefCountedPageTableEntryIfMapped )
          {
            *(_DWORD *)v17 = 0x7FFFF;
            goto LABEL_70;
          }
        }
        else if ( !RefCountedPageTableEntryIfMapped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3553, ASSERT_TYPE_ASSERT, "( pageTableEntry )", "Trying to remap unmapped page @ 0x%016zx", (size_t)v7) )
        {
          __debugbreak();
        }
        v21 = *(_QWORD *)v20 >> 44;
        if ( (v21 & 0x1FFF) != 1 )
        {
          LODWORD(v36) = 1;
          LODWORD(v35) = v21 & 0x1FFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3554, ASSERT_TYPE_ASSERT, "( pageTableEntry->refCount ) == ( 1 )", "%s == %s\n\t%u, %u", "pageTableEntry->refCount", "1", v35, v36) )
            __debugbreak();
        }
        base = s_memPaged.virtualMem.base;
        if ( (unsigned __int64)v7 < s_memPaged.virtualMem.base || (unsigned __int64)v7 >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
            __debugbreak();
          base = s_memPaged.virtualMem.base;
        }
        if ( ((*(_QWORD *)v20 >> 22) & 0x3FFFFFi64) != truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&v7[-base] >> 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3555, ASSERT_TYPE_ASSERT, "(pageTableEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( srcAddressWalk ))", (const char *)&queryFormat, "pageTableEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( srcAddressWalk )") )
          __debugbreak();
        if ( v10 != 1 && (*(_DWORD *)v20 & 3) != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3557, ASSERT_TYPE_ASSERT, "(pageSource == PageSource::COUNT || static_cast<PageSource>( pageTableEntry->pageSource ) == pageSource)", (const char *)&queryFormat, "pageSource == PageSource::COUNT || static_cast<PageSource>( pageTableEntry->pageSource ) == pageSource") )
          __debugbreak();
        v10 = *(_DWORD *)v20 & 3;
        v23 = (v20 - (char *)s_memPaged.pageTable) >> 4;
        if ( (v23 < 0 || (unsigned __int64)v23 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v23, "signed", (v20 - (char *)s_memPaged.pageTable) >> 4) )
          __debugbreak();
        if ( (unsigned int)v23 >= s_memPaged.pageTableSize )
        {
          LODWORD(v34) = s_memPaged.pageTableSize;
          LODWORD(v33) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2116, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        v24 = s_memPaged.virtualMem.base;
        *(_DWORD *)v17 = v23;
        if ( (unsigned __int64)v18 < v24 || (unsigned __int64)v18 >= v24 + s_memPaged.virtualMem.size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
            __debugbreak();
          v24 = s_memPaged.virtualMem.base;
        }
        v25 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&v18[-v24] >> 16);
        v26 = optOutPrevPageIndex;
        v27 = v25;
        if ( optOutPrevPageIndex == 0x7FFFF )
        {
          s_memPaged.subPageHashAnchorTable[(unsigned __int16)HIWORD(*(_DWORD *)v20) >> 14] = (*(_QWORD *)v20 >> 2) & 0x7FFFF;
        }
        else
        {
          if ( optOutPrevPageIndex >= s_memPaged.pageTableSize )
          {
            LODWORD(v34) = s_memPaged.pageTableSize;
            LODWORD(v33) = optOutPrevPageIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v33, v34) )
              __debugbreak();
          }
          *(_QWORD *)&s_memPaged.pageTable[v26] ^= (*(_DWORD *)v20 ^ *(_DWORD *)&s_memPaged.pageTable[v26]) & 0x1FFFFC;
        }
        v28 = &s_memPaged.subPageHashAnchorTable[v27 & 0x3FF];
        *(_QWORD *)v20 ^= (*(_DWORD *)v20 ^ (4 * *v28)) & 0x1FFFFC;
        *v28 = v23;
        *(_QWORD *)v20 &= 0xFFFFF000003FFFFFui64;
        *(_QWORD *)v20 |= (unsigned __int64)(v27 & 0x3FFFFF) << 22;
        Mem_Paged_AddPageUnmapToBatchContext((const unsigned __int64)v7, 0x10000ui64);
        v16 = v41;
        PoolFromPtr = v42;
LABEL_70:
        v7 += 0x10000;
        v18 += 0x10000;
        v17 += 4;
        v41 = --v16;
      }
      while ( v16 );
      v6 = address;
      v29 = (const unsigned int *)v48;
      v30 = v46;
      v41 = (__int64)v7;
      v31 = v38;
      do
      {
        if ( *v29 != 0x7FFFF )
        {
          Mem_Paged_AddPageMapToBatchContext(v6, PoolFromPtr, *v29, v10, 0);
          v30 = v46;
          ++v31;
        }
        v6 += 0x10000i64;
        ++v29;
        v46 = --v30;
      }
      while ( v30 );
      v12 = v43;
      LOWORD(v5) = v44;
      v14 = v45;
      v38 = v31;
      v7 = (unsigned __int8 *)v41;
      address = v6;
LABEL_76:
      v13 = v40 + 1;
      v40 = v13;
      if ( v13 >= v12 )
      {
        v11 = v38;
        break;
      }
    }
  }
  if ( flushBatchContext )
    Mem_Paged_FlushBatchContext();
  Mem_Paged_ReleaseLock();
  return v11;
}

/*
==============
Mem_Paged_RemoveFromPageTable
==============
*/
void Mem_Paged_RemoveFromPageTable(void *virtualAddress, unsigned __int64 size, void *firstPageAddress, Mem_PageRange *inoutPageRange, BatchUnmapResult *result)
{
  Mem_PageRange *v6; 
  char *v7; 
  Mem_PageID firstPageID; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  MemPaged::PhysicalPageTableEntry *v14; 
  unsigned __int64 v15; 
  bool v16; 
  __int64 v17; 
  unsigned __int64 base; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  int v22; 
  unsigned int v23; 
  Mem_PageTree<262144> *pageTree; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  unsigned __int128 v28; 
  unsigned int v29; 
  const char *v30; 
  int v31; 
  const char *v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int lastPageID; 
  unsigned int PhysicalPageIndexFromID; 
  unsigned int v39; 
  bool v40; 
  bool v41; 
  unsigned int v42; 
  char *v43; 

  v43 = (char *)firstPageAddress;
  v6 = inoutPageRange;
  v7 = (char *)firstPageAddress;
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2182, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2183, ASSERT_TYPE_ASSERT, "(inoutPageRange)", (const char *)&queryFormat, "inoutPageRange") )
    __debugbreak();
  firstPageID = v6->firstPageID;
  lastPageID = v6->lastPageID;
  if ( (*(_DWORD *)&s_memPaged.pageTable[(unsigned int)Mem_Paged_GetPhysicalPageIndexFromID((Mem_PageID)lastPageID)] & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2187, ASSERT_TYPE_ASSERT, "(Mem_Paged_GetPageTableEntry( lastPageID ).isEndOfCommitChain)", (const char *)&queryFormat, "Mem_Paged_GetPageTableEntry( lastPageID ).isEndOfCommitChain") )
    __debugbreak();
  v10 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)((_BYTE *)virtualAddress - v7) >> 16);
  v42 = v10;
  v35 = v10 + truncate_cast<unsigned int,unsigned __int64>(size >> 16);
  if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2194, ASSERT_TYPE_ASSERT, "(numPagesToWalk > 0)", (const char *)&queryFormat, "numPagesToWalk > 0") )
    __debugbreak();
  v41 = v10 == 0;
  PhysicalPageIndexFromID = Mem_Paged_GetPhysicalPageIndexFromID(firstPageID);
  v11 = PhysicalPageIndexFromID;
  if ( (_WORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2201, ASSERT_TYPE_ASSERT, "(IsAligned( addressWalk, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( addressWalk, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  v12 = PhysicalPageIndexFromID;
  v36 = PhysicalPageIndexFromID;
  v13 = 0;
  while ( 1 )
  {
    if ( v12 >= s_memPaged.pageTableSize )
    {
      LODWORD(v34) = s_memPaged.pageTableSize;
      LODWORD(v33) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v33, v34) )
        __debugbreak();
    }
    v14 = &s_memPaged.pageTable[v12];
    v39 = v13 + 1;
    v15 = *(_QWORD *)v14;
    v16 = (*(_QWORD *)v14 & 0x200000i64) != 0;
    v40 = v16;
    if ( v13 + 1 != v35 )
    {
      if ( (*(_QWORD *)v14 & 0x200000i64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2214, ASSERT_TYPE_ASSERT, "( !isEndOfCommitChain )", "You are decomitting too much data and overran the end of the previous commit") )
        __debugbreak();
      v15 = *(_QWORD *)v14;
    }
    v17 = (v15 >> 2) & 0x7FFFF;
    if ( (*((_DWORD *)v14 + 2) & 0x80000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2220, ASSERT_TYPE_ASSERT, "(pageTableEntry.commitMode == static_cast<uint>( CommitMode::ONCE ))", (const char *)&queryFormat, "pageTableEntry.commitMode == static_cast<uint>( CommitMode::ONCE )") )
      __debugbreak();
    if ( (*((_DWORD *)v14 + 2) & 0x7FFFF) != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2221, ASSERT_TYPE_ASSERT, "(pageTableEntry.firstPageIndex == firstPageIndex)", (const char *)&queryFormat, "pageTableEntry.firstPageIndex == firstPageIndex") )
      __debugbreak();
    base = s_memPaged.virtualMem.base;
    if ( (unsigned __int64)v7 < s_memPaged.virtualMem.base || (unsigned __int64)v7 >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
        __debugbreak();
      base = s_memPaged.virtualMem.base;
    }
    if ( ((*(_QWORD *)v14 >> 22) & 0x3FFFFFi64) != truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&v7[-base] >> 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2222, ASSERT_TYPE_ASSERT, "(pageTableEntry.virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( addressWalk ))", (const char *)&queryFormat, "pageTableEntry.virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( addressWalk )") )
      __debugbreak();
    if ( v13 >= v42 )
    {
      v20 = *(_QWORD *)v14;
      *((_DWORD *)v14 + 2) |= 0x7FFFFu;
      v21 = v12;
      *(_QWORD *)v14 = v20 & 0xFE00000000000003ui64 | 0x1FFFFFFFFDFFFFCi64;
      v22 = 3;
      v23 = 4096;
      pageTree = s_memPaged.pageTree;
      do
      {
        --v22;
        v25 = v21 / v23;
        v21 %= v23;
        if ( (unsigned int)(((char *)pageTree - (char *)s_memPaged.pageTree) >> 3) >= 0x1041 )
        {
          LODWORD(v34) = 4161;
          LODWORD(v33) = ((char *)pageTree - (char *)s_memPaged.pageTree) >> 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( entry - m_freePageTree ) < (unsigned)( PAGE_TREE_SIZE )", "entry - m_freePageTree doesn't index PAGE_TREE_SIZE\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        if ( !v22 )
        {
          v26 = pageTree->m_freePageTree[0];
          if ( _bittest64((const __int64 *)&v26, v25) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 129, ASSERT_TYPE_ASSERT, "(level > 0 || ( *entry & Mem_PageTreeNode( 1U ) << index ) == 0)", (const char *)&queryFormat, "level > 0 || ( *entry & Mem_PageTreeNode( 1U ) << index ) == 0") )
              __debugbreak();
          }
        }
        pageTree->m_freePageTree[0] |= 1i64 << v25;
        v27 = v23 - 1;
        v28 = (v23 - 1) * (unsigned __int128)0x410410410410411ui64;
        v23 >>= 6;
        pageTree = (Mem_PageTree<262144> *)((char *)pageTree + 8 * (unsigned int)v25 * (unsigned int)((*((_QWORD *)&v28 + 1) + ((unsigned __int64)(v27 - *((_QWORD *)&v28 + 1)) >> 1)) >> 5) + 8);
      }
      while ( v22 );
      v12 = v36;
      if ( s_memPaged.pageTree[0].m_freePages == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 136, ASSERT_TYPE_ASSERT, "(m_freePages != 0xffffffffui32)", (const char *)&queryFormat, "m_freePages != UINT32_MAX") )
        __debugbreak();
      ++s_memPaged.pageTree[0].m_freePages;
      v6 = inoutPageRange;
      v16 = v40;
      v7 = v43;
      ++result->unmappedPageCountBySource[*(_DWORD *)v14 & 3];
      v11 = PhysicalPageIndexFromID;
    }
    else
    {
      if ( v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2226, ASSERT_TYPE_ASSERT, "(!frontal)", (const char *)&queryFormat, "!frontal") )
        __debugbreak();
      v19 = *(_QWORD *)v14;
      if ( v13 == v42 - 1 )
      {
        *(_QWORD *)v14 = v19 | 0x200000;
        if ( v12 >= s_memPaged.pageTableSize )
        {
          LODWORD(v34) = s_memPaged.pageTableSize;
          LODWORD(v33) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2082, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        if ( v12 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2084, ASSERT_TYPE_ASSERT, "(pageID < MEM_PAGEID_INVALID)", (const char *)&queryFormat, "pageID < MEM_PAGEID_INVALID") )
          __debugbreak();
        v6->lastPageID = v12;
      }
      else if ( (v19 & 0x200000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2236, ASSERT_TYPE_ASSERT, "(!pageTableEntry.isEndOfCommitChain)", (const char *)&queryFormat, "!pageTableEntry.isEndOfCommitChain") )
      {
        __debugbreak();
      }
    }
    v13 = v39;
    if ( v39 == v35 )
      break;
    v7 += 0x10000;
    v36 = v17;
    v43 = v7;
    v12 = v17;
  }
  if ( v41 )
  {
    if ( v16 )
    {
      *v6 = (Mem_PageRange)-1i64;
      return;
    }
    v29 = lastPageID;
  }
  else
  {
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2258, ASSERT_TYPE_ASSERT, "( frontal || isEndOfCommitChain )", "You can only decommit at the beginning or end of the memory you previously committed") )
      __debugbreak();
    v29 = lastPageID;
    if ( lastPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2073, ASSERT_TYPE_ASSERT, "(pageID < MEM_PAGEID_INVALID)", (const char *)&queryFormat, "pageID < MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( lastPageID >= s_memPaged.pageTableSize )
    {
      LODWORD(v34) = s_memPaged.pageTableSize;
      LODWORD(v33) = lastPageID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2075, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v33, v34) )
        __debugbreak();
    }
    if ( v12 != lastPageID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2259, ASSERT_TYPE_ASSERT, "(frontal || pageIndex == Mem_Paged_GetPhysicalPageIndexFromID( lastPageID ))", (const char *)&queryFormat, "frontal || pageIndex == Mem_Paged_GetPhysicalPageIndexFromID( lastPageID )") )
      __debugbreak();
  }
  if ( v11 >= s_memPaged.pageTableSize )
  {
    LODWORD(v34) = s_memPaged.pageTableSize;
    LODWORD(v33) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2082, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v33, v34) )
      __debugbreak();
  }
  if ( v11 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2084, ASSERT_TYPE_ASSERT, "(pageID < MEM_PAGEID_INVALID)", (const char *)&queryFormat, "pageID < MEM_PAGEID_INVALID") )
    __debugbreak();
  if ( v6->firstPageID != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2268, ASSERT_TYPE_ASSERT, "(inoutPageRange->firstPageID == Mem_Paged_GetPhysicalPageIDFromIndex( firstPageIndex ))", (const char *)&queryFormat, "inoutPageRange->firstPageID == Mem_Paged_GetPhysicalPageIDFromIndex( firstPageIndex )") )
    __debugbreak();
  if ( v41 )
  {
    Mem_Paged_DebugFixupFirstPageIndex(v12, v12, v11);
    v6->firstPageID = Mem_Paged_GetPhysicalPageIDFromIndex(v12);
    if ( v6->lastPageID == v29 )
      return;
    v30 = "inoutPageRange->lastPageID == lastPageID";
    v31 = 2273;
    v32 = "(inoutPageRange->lastPageID == lastPageID)";
  }
  else
  {
    if ( v6->lastPageID != v29 )
      return;
    v30 = "inoutPageRange->lastPageID != lastPageID";
    v31 = 2277;
    v32 = "(inoutPageRange->lastPageID != lastPageID)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", v31, ASSERT_TYPE_ASSERT, v32, (const char *)&queryFormat, v30) )
    __debugbreak();
}

/*
==============
Mem_Paged_RequestPagesFromStreamerAndAcquireLock
==============
*/
char Mem_Paged_RequestPagesFromStreamerAndAcquireLock(StreamerMemLoan *loan, CommitMode commitMode, const Mem_Pool pool, unsigned int neededPages, unsigned int *outPageDeficit)
{
  __int64 v6; 
  StreamMemPool StreamMemPoolFromMemPool; 
  StreamMemPool v9; 
  unsigned int v11; 
  unsigned __int64 v12; 

  v6 = neededPages;
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2736, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsLocked())", (const char *)&queryFormat, "!Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( StreamerMemLoan::TotalPages(loan) >= (unsigned int)v6 )
  {
    StreamMemPoolFromMemPool = Stream_Alloc_GetStreamMemPoolFromMemPool(pool);
    if ( !StreamerMemLoan::MakeReady(loan, StreamMemPoolFromMemPool, v6 << 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2742, ASSERT_TYPE_ASSERT, "(loan.MakeReady( Stream_Alloc_GetStreamMemPoolFromMemPool( pool ), neededSize ))", (const char *)&queryFormat, "loan.MakeReady( Stream_Alloc_GetStreamMemPoolFromMemPool( pool ), neededSize )") )
      __debugbreak();
LABEL_12:
    *outPageDeficit = 0;
    Mem_Paged_AcquireLock();
    return 1;
  }
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2796, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsLocked())", (const char *)&queryFormat, "!Mem_Paged_IsLocked()") )
    __debugbreak();
  v9 = Stream_Alloc_GetStreamMemPoolFromMemPool(pool);
  if ( StreamerMemLoan::MakeReady(loan, v9, v6 << 16) )
    goto LABEL_12;
  v11 = v6 - StreamerMemLoan::TotalPages(loan);
  if ( v11 )
    v12 = ((unsigned __int64)v11 + 0xFFFF) >> 16;
  else
    LODWORD(v12) = 0;
  *outPageDeficit = v12;
  return 0;
}

/*
==============
Mem_Paged_ReserveVirtualAddressRange
==============
*/
const void *Mem_Paged_ReserveVirtualAddressRange(Mem_Pool pool, unsigned __int64 size, const char *debugName)
{
  __int64 v4; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  const void *v10; 
  volatile int *v11; 
  __int64 v13; 
  __int64 v14; 

  v4 = pool;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1412, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_memPaged.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1413, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsInitialized())", (const char *)&queryFormat, "Mem_Paged_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v4 >= 3 )
  {
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1414, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( MEM_POOL_COUNT )", "pool doesn't index MEM_POOL_COUNT\n\t%i not in [0, %i)", v13, 3) )
      __debugbreak();
  }
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1415, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( (_WORD)size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1416, ASSERT_TYPE_ASSERT, "(IsAligned( size, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( size, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  v6 = 2 * v4;
  v7 = *(_QWORD *)&s_memPaged.isThreadCommitting[2 * v4 - 248];
  v8 = *(_QWORD *)&s_memPaged.isThreadCommitting[2 * v4 - 254] + s_poolReserveSizes[v4];
  v9 = v7 + size;
  if ( v7 + size > v8 )
  {
    if ( (unsigned int)v4 >= 3 )
    {
      LODWORD(v14) = 3;
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1480, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( MEM_POOL_COUNT )", "pool doesn't index MEM_POOL_COUNT\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    Mem_Error_CannotAlloc_Dev(MOVEMENT, "Mem_Paged_ReserveVirtualAddressRange", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1425, "Exceeded virtual reserve for pool '%s' while trying to reserve virtual address range '%s' of size %zu! Need another %zu bytes. Please bump reserve in s_poolReserveSizes[%d].", s_poolNames[v6 / 2], debugName, size, v9 - v8, v4);
    v7 = *(_QWORD *)&s_memPaged.isThreadCommitting[v6 - 248];
  }
  v10 = (const void *)(v7 + s_memPaged.virtualMem.base);
  if ( (_WORD)v7 + LOWORD(s_memPaged.virtualMem.base) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1429, ASSERT_TYPE_ASSERT, "(IsAligned( address, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( address, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  *(_QWORD *)&s_memPaged.isThreadCommitting[v6 - 248] = v9;
  if ( s_memPaged.virtualMem.reservationCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1435, ASSERT_TYPE_ASSERT, "( s_memPaged.virtualMem.reservationCount < ( sizeof( *array_counter( s_memPaged.virtualMem.reservations ) ) + 0 ) )", "Exceeded virtual address range reservation max count while trying to reserve '%s' of size %zu! Please increase MAX_RESERVATION_COUNT.", debugName, size) )
    __debugbreak();
  v11 = &s_memPaged.isThreadCommitting[8 * s_memPaged.virtualMem.reservationCount - 242];
  *(_QWORD *)v11 = debugName;
  *((_QWORD *)v11 + 1) = v10;
  *((_QWORD *)v11 + 2) = size;
  *((_DWORD *)v11 + 6) = v4;
  ++s_memPaged.virtualMem.reservationCount;
  IWMem_Profile_Push(debugName);
  IWMem_Alloc(s_memPaged.iwMemReserved, v10, size);
  IWMem_Profile_Pop();
  return v10;
}

/*
==============
Mem_Paged_ThreadCheck
==============
*/
char Mem_Paged_ThreadCheck()
{
  ThreadContext CurrentThreadContext; 
  int v1; 
  const ThreadContext *i; 
  const char *ThreadContextName; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = 0;
  for ( i = ALLOWED_THREADS; CurrentThreadContext != *i; ++i )
  {
    if ( (unsigned int)++v1 >= 5 )
    {
      ThreadContextName = Sys_GetThreadContextName(CurrentThreadContext);
      LOBYTE(CurrentThreadContext) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 797, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Mem_Paged_ThreadCheck failed. Thread '%s' is not allowed to allocate or free memory", ThreadContextName);
      if ( (_BYTE)CurrentThreadContext )
        __debugbreak();
      return CurrentThreadContext;
    }
  }
  return CurrentThreadContext;
}

/*
==============
Mem_Paged_UnmapESRAM
==============
*/
void Mem_Paged_UnmapESRAM(unsigned __int8 *start, unsigned __int8 *end, const Mem_MapRange *mapRanges, unsigned int mapRangeCount)
{
  int v6; 
  unsigned int v11; 
  int v12; 
  int v32; 
  unsigned int v33; 
  unsigned int *p_pageCount; 
  __int64 v35; 

  v6 = 0;
  _RDI = mapRanges;
  _EBX = 0;
  v11 = 0;
  if ( mapRangeCount >= 8 )
  {
    v12 = 2;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    do
    {
      _RDX = v11;
      v11 += 8;
      __asm
      {
        vmovd   xmm0, dword ptr [rdi+rdx*8+4]
        vpinsrd xmm0, xmm0, dword ptr [rdi+rax*8+4], 1
        vpinsrd xmm0, xmm0, dword ptr [rdi+r8*8+4], 2
        vpinsrd xmm0, xmm0, dword ptr [rdi+r9*8+4], 3
        vpaddd  xmm1, xmm0, xmm1
      }
      _RAX = (unsigned int)(v12 + 2);
      __asm
      {
        vmovd   xmm0, dword ptr [rdi+rax*8+4]
        vpinsrd xmm0, xmm0, dword ptr [rdi+rdx*8+4], 1
        vpinsrd xmm0, xmm0, dword ptr [rdi+r8*8+4], 2
      }
      v12 += 8;
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [rdi+r9*8+4], 3
        vpaddd  xmm2, xmm0, xmm2
      }
    }
    while ( v11 < (mapRangeCount & 0xFFFFFFF8) );
    __asm
    {
      vpaddd  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
      vmovd   ebx, xmm0
    }
  }
  v32 = 0;
  if ( v11 < mapRangeCount )
  {
    if ( mapRangeCount - v11 >= 2 )
    {
      v33 = ((mapRangeCount - v11 - 2) >> 1) + 1;
      p_pageCount = &mapRanges[v11 + 1].pageCount;
      v35 = v33;
      v11 += 2 * v33;
      do
      {
        v6 += *(p_pageCount - 2);
        v32 += *p_pageCount;
        p_pageCount += 4;
        --v35;
      }
      while ( v35 );
    }
    if ( v11 < mapRangeCount )
      _EBX += _RDI[v11].pageCount;
    _EBX += v32 + v6;
  }
  if ( _EBX != (unsigned __int64)(end - start) >> 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3070, ASSERT_TYPE_ASSERT, "(esramPageCount == ( end - start ) / MEM_PHYSICAL_PAGE_SIZE)", (const char *)&queryFormat, "esramPageCount == ( end - start ) / MEM_PHYSICAL_PAGE_SIZE") )
    __debugbreak();
  if ( (unsigned int)D3DMapEsramMemory_0(1i64, start, _EBX, 0i64) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3073, ASSERT_TYPE_ASSERT, "(hr == ((HRESULT)0L))", (const char *)&queryFormat, "hr == S_OK") )
      __debugbreak();
  }
}

/*
==============
Mem_Paged_UnmapMemory
==============
*/
void Mem_Paged_UnmapMemory(unsigned __int8 *start, unsigned __int8 *end, const Mem_MapRange *mapRanges, unsigned int mapRangeCount)
{
  unsigned int *p_pageCount; 
  __int64 v9; 
  unsigned __int64 v10; 

  Mem_Paged_AcquireLock();
  Mem_Paged_FlushBatchContext();
  if ( mapRangeCount )
  {
    p_pageCount = &mapRanges->pageCount;
    v9 = mapRangeCount;
    do
    {
      v10 = (unsigned __int64)*p_pageCount << 16;
      Mem_Paged_AddPageUnmapToBatchContext((const unsigned __int64)start, v10);
      start += v10;
      p_pageCount += 2;
      --v9;
    }
    while ( v9 );
  }
  Mem_Paged_FlushBatchContext();
  if ( start != end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3025, ASSERT_TYPE_ASSERT, "(address == addressEnd)", (const char *)&queryFormat, "address == addressEnd") )
    __debugbreak();
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 452i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 1804, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsLocked())", (const char *)&queryFormat, "Mem_Paged_IsLocked()") )
    __debugbreak();
  if ( s_memPaged.batchContext.entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 3026, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsBatchContextEmpty())", (const char *)&queryFormat, "Mem_Paged_IsBatchContextEmpty()") )
    __debugbreak();
  Mem_Paged_ReleaseLock();
}

/*
==============
Mem_Paged_UnmapRefCountedPages
==============
*/
void Mem_Paged_UnmapRefCountedPages(void *virtualAddress, unsigned __int64 size, BatchUnmapResult *result)
{
  char *v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned __int64 base; 
  __int64 v9; 
  __int64 v10; 
  unsigned int pageTableSize; 
  __int64 v12; 
  int v13; 
  Mem_PageTree<262144> *pageTree; 
  unsigned int v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  unsigned __int128 v19; 
  BatchUnmapResult *v20; 
  __int64 v21; 
  __int64 v22; 
  MemPaged::PhysicalPageTableEntry *RefCountedPageTableEntryIfMapped; 
  char *v24; 
  unsigned int optOutPrevPageIndex; 
  BatchUnmapResult *v26; 
  __int64 v27; 

  v26 = result;
  v24 = (char *)virtualAddress;
  v5 = (char *)virtualAddress;
  if ( (_WORD)virtualAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2293, ASSERT_TYPE_ASSERT, "(IsAligned( reinterpret_cast<uintptr_t>( virtualAddress ), MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( reinterpret_cast<uintptr_t>( virtualAddress ), MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( (_WORD)size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2294, ASSERT_TYPE_ASSERT, "(IsAligned( size, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( size, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  v6 = truncate_cast<unsigned int,unsigned __int64>(size >> 16);
  result->unmappedPageCount = 0;
  if ( v6 )
  {
    v7 = v6;
    v27 = v6;
    do
    {
      optOutPrevPageIndex = 0x7FFFF;
      RefCountedPageTableEntryIfMapped = Mem_Paged_GetRefCountedPageTableEntryIfMapped((const unsigned __int64)v5, &optOutPrevPageIndex);
      if ( !RefCountedPageTableEntryIfMapped )
      {
        Stream_Logger_Dump((const unsigned __int8 *)0xFFFFFFFFFFFFFFFFi64);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2310, ASSERT_TYPE_ASSERT, "( pageTableEntry )", "Trying to decommit unmapped page @ 0x%016zx", (size_t)v5) )
          __debugbreak();
      }
      base = s_memPaged.virtualMem.base;
      if ( (unsigned __int64)v5 < s_memPaged.virtualMem.base || (unsigned __int64)v5 >= s_memPaged.virtualMem.base + s_memPaged.virtualMem.size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2106, ASSERT_TYPE_ASSERT, "(virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size)", (const char *)&queryFormat, "virtualAddress >= s_memPaged.virtualMem.base && virtualAddress < s_memPaged.virtualMem.base + s_memPaged.virtualMem.size") )
          __debugbreak();
        base = s_memPaged.virtualMem.base;
      }
      if ( ((*(_QWORD *)RefCountedPageTableEntryIfMapped >> 22) & 0x3FFFFFi64) != truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)&v5[-base] >> 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2311, ASSERT_TYPE_ASSERT, "(pageTableEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( addressWalk ))", (const char *)&queryFormat, "pageTableEntry->virtualPageIndex == Mem_Paged_GetVirtualPageIndexFromVirtualAddress( addressWalk )") )
        __debugbreak();
      v9 = *(_QWORD *)RefCountedPageTableEntryIfMapped ^ (*(_QWORD *)RefCountedPageTableEntryIfMapped ^ (((*(_QWORD *)RefCountedPageTableEntryIfMapped >> 44) - 1i64) << 44)) & 0x1FFF00000000000i64;
      *(_QWORD *)RefCountedPageTableEntryIfMapped = v9;
      if ( (v9 & 0x1FFF00000000000i64) == 0 )
      {
        Mem_Paged_AddPageUnmapToBatchContext((const unsigned __int64)v5, 0x10000ui64);
        v10 = RefCountedPageTableEntryIfMapped - s_memPaged.pageTable;
        if ( (v10 < 0 || (unsigned __int64)v10 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v10, "signed", RefCountedPageTableEntryIfMapped - s_memPaged.pageTable) )
          __debugbreak();
        pageTableSize = s_memPaged.pageTableSize;
        if ( (unsigned int)v10 >= s_memPaged.pageTableSize )
        {
          LODWORD(v22) = s_memPaged.pageTableSize;
          LODWORD(v21) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2116, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
          pageTableSize = s_memPaged.pageTableSize;
        }
        v12 = optOutPrevPageIndex;
        if ( optOutPrevPageIndex == 0x7FFFF )
        {
          s_memPaged.subPageHashAnchorTable[(unsigned __int16)HIWORD(*(_DWORD *)RefCountedPageTableEntryIfMapped) >> 14] = optOutPrevPageIndex & (*(_QWORD *)RefCountedPageTableEntryIfMapped >> 2);
        }
        else
        {
          if ( optOutPrevPageIndex >= pageTableSize )
          {
            LODWORD(v22) = pageTableSize;
            LODWORD(v21) = optOutPrevPageIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( s_memPaged.pageTableSize )", "pageIndex doesn't index s_memPaged.pageTableSize\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          *(_QWORD *)&s_memPaged.pageTable[v12] ^= (*(_DWORD *)RefCountedPageTableEntryIfMapped ^ *(_DWORD *)&s_memPaged.pageTable[v12]) & 0x1FFFFC;
        }
        v13 = 3;
        pageTree = s_memPaged.pageTree;
        v15 = 4096;
        do
        {
          --v13;
          v16 = (unsigned int)v10 / v15;
          LODWORD(v10) = (unsigned int)v10 % v15;
          if ( (unsigned int)(((char *)pageTree - (char *)s_memPaged.pageTree) >> 3) >= 0x1041 )
          {
            LODWORD(v22) = 4161;
            LODWORD(v21) = ((char *)pageTree - (char *)s_memPaged.pageTree) >> 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( entry - m_freePageTree ) < (unsigned)( PAGE_TREE_SIZE )", "entry - m_freePageTree doesn't index PAGE_TREE_SIZE\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          if ( !v13 )
          {
            v17 = pageTree->m_freePageTree[0];
            if ( _bittest64((const __int64 *)&v17, v16) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 129, ASSERT_TYPE_ASSERT, "(level > 0 || ( *entry & Mem_PageTreeNode( 1U ) << index ) == 0)", (const char *)&queryFormat, "level > 0 || ( *entry & Mem_PageTreeNode( 1U ) << index ) == 0") )
                __debugbreak();
            }
          }
          pageTree->m_freePageTree[0] |= 1i64 << v16;
          v18 = v15 - 1;
          v19 = (v15 - 1) * (unsigned __int128)0x410410410410411ui64;
          v15 >>= 6;
          pageTree = (Mem_PageTree<262144> *)((char *)pageTree + 8 * (unsigned int)v16 * (unsigned int)((*((_QWORD *)&v19 + 1) + ((unsigned __int64)(v18 - *((_QWORD *)&v19 + 1)) >> 1)) >> 5) + 8);
        }
        while ( v13 );
        v5 = v24;
        v20 = v26;
        if ( s_memPaged.pageTree[0].m_freePages == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 136, ASSERT_TYPE_ASSERT, "(m_freePages != 0xffffffffui32)", (const char *)&queryFormat, "m_freePages != UINT32_MAX") )
          __debugbreak();
        ++s_memPaged.pageTree[0].m_freePages;
        *((_DWORD *)RefCountedPageTableEntryIfMapped + 2) |= 0x7FFFFu;
        *(_QWORD *)RefCountedPageTableEntryIfMapped |= 0x1FFFFFFFFDFFFFCui64;
        ++v20->unmappedPageCount;
        v7 = v27;
        ++v20->unmappedPageCountBySource[*(_DWORD *)RefCountedPageTableEntryIfMapped & 3];
      }
      v5 += 0x10000;
      --v7;
      v24 = v5;
      v27 = v7;
    }
    while ( v7 );
  }
}

/*
==============
Mem_Paged_VirtualAllocCommit
==============
*/
LPVOID Mem_Paged_VirtualAllocCommit(void *address, unsigned __int64 size, unsigned int allocationType, unsigned int protectionFlags)
{
  LPVOID result; 
  void *v9; 
  unsigned int v10; 
  unsigned int v11; 
  DWORD LastError; 

  result = VirtualAlloc(address, size, allocationType | 0x1000, protectionFlags);
  v9 = result;
  if ( result != address )
  {
    LastError = GetLastError();
    v11 = protectionFlags;
    v10 = allocationType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 496, ASSERT_TYPE_ASSERT, "( result == address )", "Failed to commit %zu bytes at virtual address 0x%zx, alloc type=%u, protection flags=%u, GetLastError=%d", size, (size_t)address, v10, v11, LastError) )
      __debugbreak();
    return v9;
  }
  return result;
}

/*
==============
Mem_Paged_VirtualAllocReserve
==============
*/
LPVOID Mem_Paged_VirtualAllocReserve(unsigned __int64 size, unsigned int allocationType, unsigned int protectionFlags)
{
  LPVOID result; 
  DWORD LastError; 

  result = VirtualAlloc(NULL, size, allocationType | 0x2000, protectionFlags);
  if ( !result )
  {
    LastError = GetLastError();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_paged.cpp", 487, ASSERT_TYPE_ASSERT, "( result )", "Failed to reserve %zu bytes, alloc type=%u, protection flags=%u, GetLastError=%d", size, allocationType, protectionFlags, LastError) )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
PageTree_Alloc
==============
*/
__int64 PageTree_Alloc(PageSource source)
{
  int v3; 
  unsigned int v4; 
  char *v5; 
  __int64 *v6; 
  unsigned int v7; 
  unsigned __int64 v9; 
  int v10; 
  unsigned int v11; 
  char *v12; 
  char *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  char v17; 
  char v18; 
  char v19; 
  __int64 v20; 

  _RDI = s_memPaged.pageTree;
  if ( !s_memPaged.pageTree[0].m_freePageTree[0] )
    return 0xFFFFFFFFi64;
  v3 = 3;
  v4 = 0;
  v5 = &v18;
  v6 = &v20;
  v7 = 4096;
  do
  {
    --v6;
    v5 -= 4;
    --v3;
    if ( (unsigned int)(((char *)_RDI - (char *)s_memPaged.pageTree) >> 3) >= 0x1041 )
    {
      LODWORD(v16) = 4161;
      LODWORD(v15) = ((char *)_RDI - (char *)s_memPaged.pageTree) >> 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( entry - m_freePageTree ) < (unsigned)( PAGE_TREE_SIZE )", "entry - m_freePageTree doesn't index PAGE_TREE_SIZE\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( !_RDI->m_freePageTree[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 77, ASSERT_TYPE_ASSERT, "(*entry)", (const char *)&queryFormat, "*entry") )
      __debugbreak();
    __asm { tzcnt   r8, [rdi] }
    v9 = v7 - 1;
    *v6 = (__int64)_RDI;
    *(_DWORD *)v5 = _R8;
    v10 = v7 * _R8;
    v7 >>= 6;
    v4 += v10;
    _RDI = (Mem_PageTree<262144> *)((char *)_RDI + 8 * (unsigned int)_R8 * (unsigned int)(v9 / 0x3F) + 8);
  }
  while ( v3 );
  v11 = 0;
  v12 = &v17;
  v13 = &v19;
  do
  {
    v14 = **(_QWORD **)v13 & ~(1i64 << *(_DWORD *)v12);
    **(_QWORD **)v13 = v14;
    if ( v14 )
      break;
    ++v11;
    v13 += 8;
    v12 += 4;
  }
  while ( v11 < 3 );
  if ( !s_memPaged.pageTree[0].m_freePages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 99, ASSERT_TYPE_ASSERT, "(m_freePages > 0)", (const char *)&queryFormat, "m_freePages > 0") )
    __debugbreak();
  --s_memPaged.pageTree[0].m_freePages;
  return v4;
}

