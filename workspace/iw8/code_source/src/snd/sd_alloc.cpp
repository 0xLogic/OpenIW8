/*
==============
SD_AllocInit
==============
*/

void SD_AllocInit(void)
{
  ?SD_AllocInit@@YAXXZ();
}

/*
==============
SD_AllocDevhost
==============
*/

void SD_AllocDevhost(void)
{
  ?SD_AllocDevhost@@YAXXZ();
}

/*
==============
SD_AllocDeInit
==============
*/

void SD_AllocDeInit(void)
{
  ?SD_AllocDeInit@@YAXXZ();
}

/*
==============
SD_ForEachAllocation
==============
*/

void __fastcall SD_ForEachAllocation(void (__fastcall *callback)(const char *, unsigned __int64))
{
  ?SD_ForEachAllocation@@YAXP6AXPEBD_K@Z@Z(callback);
}

/*
==============
SD_AllocPrint
==============
*/

void SD_AllocPrint(void)
{
  ?SD_AllocPrint@@YAXXZ();
}

/*
==============
SD_Alloc
==============
*/

unsigned __int8 *__fastcall SD_Alloc(const char *name, unsigned int size, unsigned int align)
{
  return ?SD_Alloc@@YAPEAEPEBDII@Z(name, size, align);
}

/*
==============
SD_Free
==============
*/

void __fastcall SD_Free(unsigned __int8 *block)
{
  ?SD_Free@@YAXPEAE@Z(block);
}

/*
==============
SD_GetCommitSize
==============
*/

unsigned __int64 __fastcall SD_GetCommitSize()
{
  return ?SD_GetCommitSize@@YA_KXZ();
}

/*
==============
SD_GetCommitSizeBanks
==============
*/

unsigned __int64 __fastcall SD_GetCommitSizeBanks()
{
  return ?SD_GetCommitSizeBanks@@YA_KXZ();
}

/*
==============
SD_Alloc
==============
*/
unsigned __int8 *SD_Alloc(const char *name, unsigned int size, unsigned int align)
{
  __int64 v3; 
  int v6; 
  bool *p_inUse; 
  SdAllocation *allocations; 
  SdAllocation *v10; 
  unsigned __int64 v11; 
  unsigned __int8 *blob; 
  unsigned __int8 **p_address; 
  __int64 v14; 
  __int64 v15; 
  unsigned __int8 **v16; 
  unsigned __int8 *address; 
  unsigned __int8 *v18; 
  unsigned int actualSize; 
  unsigned int v20; 
  unsigned __int8 *v21; 
  Mem_PageRange *inoutPageRange; 
  Mem_PageRange *inoutPageRangea; 

  v3 = align;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_alloc.cpp", 264, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
  {
    LODWORD(inoutPageRange) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_alloc.cpp", 266, ASSERT_TYPE_ASSERT, "( ( IsPowerOf2( align ) ) )", "( align ) = %u", inoutPageRange) )
      __debugbreak();
  }
  if ( (unsigned int)v3 > 0x10000 )
  {
    LODWORD(inoutPageRange) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_alloc.cpp", 267, ASSERT_TYPE_ASSERT, "( ( align <= MEM_PHYSICAL_PAGE_SIZE ) )", "( align ) = %u", inoutPageRange) )
      __debugbreak();
  }
  v6 = 0;
  p_inUse = &g_sd.alloc.allocations[0].inUse;
  while ( *p_inUse )
  {
    ++v6;
    p_inUse += 96;
    if ( (__int64)p_inUse >= (__int64)&g_sd.decoderInterfaces[0].BufferSubmit + 4 )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444DADE0, 225i64);
      return 0i64;
    }
  }
  allocations = g_sd.alloc.allocations;
  v10 = &g_sd.alloc.allocations[v6];
  if ( !v10 )
    return 0i64;
  Core_strcpy(v10->name, 0x40ui64, name);
  v10->requestedSize = size;
  v11 = (size + 0xFFFF) & 0xFFFF0000;
  v10->requestedAlign = v3;
  v10->actualSize = v11;
  if ( g_sd.alloc.allocations[0].inUse )
  {
    p_address = &g_sd.alloc.allocations[1].address;
    do
    {
      if ( !*((_BYTE *)p_address + 28) )
        break;
      v14 = *((unsigned int *)p_address - 20);
      allocations = (SdAllocation *)(p_address - 8);
      v15 = (__int64)*(p_address - 12);
      if ( (unsigned __int64)&(*p_address)[-v14 - v15] > v11 )
      {
        blob = (unsigned __int8 *)(v15 + v14);
        goto LABEL_31;
      }
      p_address += 12;
    }
    while ( (__int64)p_address < (__int64)&g_sd.decoderInterfaces[0].QueryAvailableData );
    if ( !allocations->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_alloc.cpp", 149, ASSERT_TYPE_ASSERT, "(top->inUse)", (const char *)&queryFormat, "top->inUse") )
      __debugbreak();
    blob = &allocations->address[allocations->actualSize];
    if ( &blob[v11] > &g_sd.alloc.blob[g_sd.alloc.blobSize] )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444DAEE8, 228i64, v11);
  }
  else
  {
    if ( v11 > g_sd.alloc.blobSize )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_alloc.cpp", 116, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SOUND: Allocation failed for %ld bytes\n", (size + 0xFFFF) & 0xFFFF0000) )
        __debugbreak();
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444DAEE8, 227i64, (size + 0xFFFF) & 0xFFFF0000);
    }
    blob = g_sd.alloc.blob;
  }
LABEL_31:
  v10->address = blob;
  if ( (!(_DWORD)v3 || ((v3 - 1) & v3) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( ((v3 - 1) & (unsigned __int64)blob) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_alloc.cpp", 279, ASSERT_TYPE_ASSERT, "(IsAligned( alloc->address, align ))", (const char *)&queryFormat, "IsAligned( alloc->address, align )") )
    __debugbreak();
  v10->pageRange = MEM_PAGE_RANGE_INVALID_9;
  v16 = &g_sd.alloc.allocations[0].address;
  do
  {
    if ( *((_BYTE *)v16 + 28) && v10->address == *v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_alloc.cpp", 287, ASSERT_TYPE_ASSERT, "(alloc->address != g_sd.alloc.allocations[i].address)", (const char *)&queryFormat, "alloc->address != g_sd.alloc.allocations[i].address") )
      __debugbreak();
    v16 += 12;
  }
  while ( (__int64)v16 < (__int64)&g_sd.decoderInterfaces[0].QueryAvailableData );
  address = v10->address;
  v18 = &address[v10->actualSize];
  v10->inUse = 1;
  if ( !PMem_CommitMemoryPartial(PMEM_STACK_SOUND, address, v18, address, NULL, &v10->pageRange, name) )
  {
    LODWORD(inoutPageRangea) = v10->actualSize;
    Mem_Error_CannotAlloc_Dev(DODGE, "SD_Alloc", "c:\\workspace\\iw8\\code_source\\src\\snd\\sd_alloc.cpp", 297, "size=%d", inoutPageRangea);
  }
  actualSize = v10->actualSize;
  if ( ((unsigned __int8)&s_audioCommitSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_audioCommitSize) )
    __debugbreak();
  _InterlockedExchangeAdd(&s_audioCommitSize, actualSize);
  if ( I_strcmp(v10->name, "sd_stream") && I_strcmp(v10->name, "sd_dev_propagation") )
  {
    v20 = v10->actualSize;
    if ( ((unsigned __int8)&s_audioCommitSizeBanks & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_audioCommitSizeBanks) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_audioCommitSizeBanks, v20);
  }
  IWMem_Profile_Push(v10->name);
  IWMem_Alloc(s_iwMemSDCommit, v10->address, v10->actualSize);
  IWMem_Alloc(s_iwMemSDAlloc, v10->address, v10->requestedSize);
  IWMem_Profile_Pop();
  v21 = v10->address;
  qsort(g_sd.alloc.allocations, 0x80ui64, 0x60ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SND_AllocCompare);
  return v21;
}

/*
==============
SD_AllocDeInit
==============
*/
void SD_AllocDeInit(void)
{
  unsigned __int8 **p_address; 
  unsigned __int8 *firstPageAddress; 
  __int64 v2; 
  unsigned int v3; 
  unsigned int v4; 
  Mem_PageRange inoutPageRange; 
  StreamerMemLoan result; 
  StreamerMemLoan v7; 

  IWMem_Allocator_Destroy(s_iwMemSDAlloc);
  IWMem_Allocator_Destroy(s_iwMemSDCommit);
  p_address = &g_sd.alloc.allocations[0].address;
  do
  {
    if ( *((_BYTE *)p_address + 28) )
    {
      firstPageAddress = *p_address;
      v2 = *((unsigned int *)p_address + 4);
      inoutPageRange = *(Mem_PageRange *)((char *)p_address + 20);
      PMem_DecommitMemoryPartial(&result, PMEM_STACK_SOUND, firstPageAddress, &firstPageAddress[v2], firstPageAddress, &inoutPageRange);
      StreamerMemLoan::~StreamerMemLoan(&result);
      IWMem_Free(s_iwMemSDCommit, *p_address, *((unsigned int *)p_address + 4));
      IWMem_Free(s_iwMemSDAlloc, *p_address, *((unsigned int *)p_address + 2));
      v3 = -truncate_cast<int,unsigned int>(*((_DWORD *)p_address + 4));
      if ( ((unsigned __int8)&s_audioCommitSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_audioCommitSize) )
        __debugbreak();
      _InterlockedExchangeAdd(&s_audioCommitSize, v3);
      if ( I_strcmp((const char *)p_address - 64, "sd_stream") && I_strcmp((const char *)p_address - 64, "sd_dev_propagation") )
      {
        v4 = -truncate_cast<int,unsigned int>(*((_DWORD *)p_address + 4));
        if ( ((unsigned __int8)&s_audioCommitSizeBanks & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_audioCommitSizeBanks) )
          __debugbreak();
        _InterlockedExchangeAdd(&s_audioCommitSizeBanks, v4);
      }
      memset_0(p_address - 8, 0, 0x60ui64);
    }
    p_address += 12;
  }
  while ( (__int64)p_address < (__int64)&g_sd.decoderInterfaces[0].QueryAvailableData );
  PMem_Free(&v7, "Sound Driver", PMEM_STACK_SOUND);
  StreamerMemLoan::~StreamerMemLoan(&v7);
}

/*
==============
SD_AllocDevhost
==============
*/
void SD_AllocDevhost(void)
{
  Com_DevhostSendMessage(3, 0x1Eu, 0x3010u, (const char *)&g_sd);
}

/*
==============
SD_AllocInit
==============
*/
void SD_AllocInit(void)
{
  PMem_BeginAlloc("Sound Driver", PMEM_STACK_SOUND);
  g_sd.alloc.blob = (unsigned __int8 *)PMem_Alloc(0x80000000ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_SOUND, "Sound Driver");
  PMem_EndAlloc("Sound Driver", PMEM_STACK_SOUND);
  IWMem_Allocator_CreateFixed(&s_iwMemSDCommit, "Sound Memory Commit", (IWMemAllocatorType)4, g_sd.alloc.blob, 0x80000000ui64);
  IWMem_Allocator_CreateFixed(&s_iwMemSDAlloc, "Sound Memory Alloc", (IWMemAllocatorType)6, g_sd.alloc.blob, 0x80000000ui64);
  g_sd.alloc.blobSize = 0x80000000i64;
  memset_0(g_sd.alloc.allocations, 0, sizeof(g_sd.alloc.allocations));
}

/*
==============
SD_AllocPrint
==============
*/
void SD_AllocPrint(void)
{
  unsigned __int64 v0; 
  unsigned __int8 **p_address; 
  int i; 
  unsigned __int64 CommitSizeAlwaysLoadedBanks; 
  unsigned __int64 CommitSizeCurrentTransientBanks; 
  __int64 v5; 
  __int64 v6; 

  Com_MemDumpPrintf("Sound Allocation Dump\n");
  Com_MemDumpPrintf("\n%-4s: %-42s %13s %13s %5s %-16s\n", "idx", (const char *)&stru_143C9A1A4, "req sz", "actual sz", "align", "addr");
  v0 = 0i64;
  p_address = &g_sd.alloc.allocations[0].address;
  for ( i = 0; i < 128; ++i )
  {
    if ( *((_BYTE *)p_address + 28) )
    {
      LODWORD(v6) = *((_DWORD *)p_address + 3);
      LODWORD(v5) = *((_DWORD *)p_address + 4) >> 10;
      Com_MemDumpPrintf("%04d: %-42s %10d kb %10d kb %5d %016zx\n", (unsigned int)i, (const char *)p_address - 64, *((_DWORD *)p_address + 2) >> 10, v5, v6, (size_t)*p_address);
      v0 += *((unsigned int *)p_address + 2);
    }
    p_address += 12;
  }
  Com_MemDumpPrintf("\n");
  Com_MemDumpPrintf("Total Audio Memory commit           = %10zu kb\n", (unsigned __int64)s_audioCommitSize >> 10);
  Com_MemDumpPrintf("Total Audio Memory alloced          = %10zu kb\n", v0 >> 10);
  Com_MemDumpPrintf("Total Audio Memory align waste      = %10zu kb\n", (s_audioCommitSize - v0) >> 10);
  CommitSizeAlwaysLoadedBanks = SD_GetCommitSizeAlwaysLoadedBanks();
  CommitSizeCurrentTransientBanks = SD_GetCommitSizeCurrentTransientBanks();
  Com_MemDumpPrintf("Total Audio Memory commit (banks)   = %10zu kb\n", (CommitSizeAlwaysLoadedBanks + CommitSizeCurrentTransientBanks + s_audioCommitSizeBanks) >> 10);
  Com_MemDumpPrintf("\n");
}

/*
==============
SD_ForEachAllocation
==============
*/
void SD_ForEachAllocation(void (*callback)(const char *, unsigned __int64))
{
  unsigned int *p_actualSize; 
  __int64 v3; 
  SdAllocation *allocations; 

  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_alloc.cpp", 364, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  p_actualSize = &g_sd.alloc.allocations[0].actualSize;
  v3 = 128i64;
  allocations = g_sd.alloc.allocations;
  do
  {
    if ( *((_BYTE *)p_actualSize + 12) )
    {
      if ( *p_actualSize )
        callback(allocations->name, *p_actualSize);
    }
    ++allocations;
    p_actualSize += 24;
    --v3;
  }
  while ( v3 );
}

/*
==============
SD_Free
==============
*/
void SD_Free(unsigned __int8 *block)
{
  unsigned __int8 **p_address; 

  p_address = &g_sd.alloc.allocations[0].address;
  while ( !*((_BYTE *)p_address + 28) || *p_address != block )
  {
    p_address += 12;
    if ( (__int64)p_address >= (__int64)&g_sd.decoderInterfaces[0].QueryAvailableData )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444DAE20, 226i64, block);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444DB120, 229i64, block);
      return;
    }
  }
  SD_FreeInternal((SdAllocation *)(p_address - 8));
  qsort(g_sd.alloc.allocations, 0x80ui64, 0x60ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SND_AllocCompare);
}

/*
==============
SD_FreeInternal
==============
*/
void SD_FreeInternal(SdAllocation *alloc)
{
  unsigned __int8 *address; 
  __int64 actualSize; 
  unsigned int v4; 
  unsigned int v5; 
  Mem_PageRange pageRange; 
  StreamerMemLoan v7; 

  address = alloc->address;
  actualSize = alloc->actualSize;
  pageRange = alloc->pageRange;
  PMem_DecommitMemoryPartial(&v7, PMEM_STACK_SOUND, address, &address[actualSize], address, &pageRange);
  StreamerMemLoan::~StreamerMemLoan(&v7);
  IWMem_Free(s_iwMemSDCommit, alloc->address, alloc->actualSize);
  IWMem_Free(s_iwMemSDAlloc, alloc->address, alloc->requestedSize);
  v4 = -truncate_cast<int,unsigned int>(alloc->actualSize);
  if ( ((unsigned __int8)&s_audioCommitSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_audioCommitSize) )
    __debugbreak();
  _InterlockedExchangeAdd(&s_audioCommitSize, v4);
  if ( I_strcmp(alloc->name, "sd_stream") && I_strcmp(alloc->name, "sd_dev_propagation") )
  {
    v5 = -truncate_cast<int,unsigned int>(alloc->actualSize);
    if ( ((unsigned __int8)&s_audioCommitSizeBanks & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_audioCommitSizeBanks) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_audioCommitSizeBanks, v5);
  }
  memset_0(alloc, 0, sizeof(SdAllocation));
}

/*
==============
SD_GetCommitSize
==============
*/
unsigned __int64 SD_GetCommitSize()
{
  return s_audioCommitSize;
}

/*
==============
SD_GetCommitSizeBanks
==============
*/
unsigned __int64 SD_GetCommitSizeBanks()
{
  unsigned __int64 CommitSizeAlwaysLoadedBanks; 

  CommitSizeAlwaysLoadedBanks = SD_GetCommitSizeAlwaysLoadedBanks();
  return CommitSizeAlwaysLoadedBanks + SD_GetCommitSizeCurrentTransientBanks() + s_audioCommitSizeBanks;
}

/*
==============
SND_AllocCompare
==============
*/
__int64 SND_AllocCompare(const void *va, const void *vb)
{
  char v3; 

  v3 = *((_BYTE *)vb + 92);
  if ( *((_BYTE *)va + 92) )
  {
    if ( !v3 )
      return 0xFFFFFFFFi64;
    if ( *((_QWORD *)va + 8) == *((_QWORD *)vb + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_alloc.cpp", 168, ASSERT_TYPE_ASSERT, "(a->address != b->address)", (const char *)&queryFormat, "a->address != b->address") )
      __debugbreak();
    if ( *((_QWORD *)va + 8) <= *((_QWORD *)vb + 8) )
      return 0xFFFFFFFFi64;
    return 1i64;
  }
  return v3 != 0;
}

