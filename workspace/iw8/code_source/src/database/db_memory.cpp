/*
==============
DB_FixupPreloadScriptMemory
==============
*/

void __fastcall DB_FixupPreloadScriptMemory(XZoneMemory *zoneMem, const char *zoneName)
{
  ?DB_FixupPreloadScriptMemory@@YAXPEAUXZoneMemory@@PEBD@Z(zoneMem, zoneName);
}

/*
==============
DB_DecommitUnusedPatchMem
==============
*/

void __fastcall DB_DecommitUnusedPatchMem(XZoneMemory *zoneMem, XZoneMemoryAllocation *alloc, int streamIndex, unsigned __int64 unusedBlockSize, unsigned __int64 decommitSize)
{
  ?DB_DecommitUnusedPatchMem@@YAXPEAUXZoneMemory@@PEAUXZoneMemoryAllocation@@H_K2@Z(zoneMem, alloc, streamIndex, unusedBlockSize, decommitSize);
}

/*
==============
DB_AllocXZoneMemory
==============
*/

void __fastcall DB_AllocXZoneMemory(const unsigned __int64 *blockSize, const char *filename, XZoneMemory *zoneMem, XArchiveBlocks *archiveBlocks)
{
  ?DB_AllocXZoneMemory@@YAXQEB_KPEBDPEAUXZoneMemory@@PEAUXArchiveBlocks@@@Z(blockSize, filename, zoneMem, archiveBlocks);
}

/*
==============
DB_MemoryInit
==============
*/

void DB_MemoryInit(void)
{
  ?DB_MemoryInit@@YAXXZ();
}

/*
==============
DB_GrowStreamerMemLoanAndWait
==============
*/

StreamerMemLoan *__fastcall DB_GrowStreamerMemLoanAndWait(StreamerMemLoan *result, Mem_Pool pool, unsigned __int64 size)
{
  return ?DB_GrowStreamerMemLoanAndWait@@YA?AUStreamerMemLoan@@W4Mem_Pool@@_K@Z(result, pool, size);
}

/*
==============
DB_IsRegionInDBMemory
==============
*/

bool __fastcall DB_IsRegionInDBMemory(const void *ptr, unsigned __int64 size)
{
  return ?DB_IsRegionInDBMemory@@YA_NPEBX_K@Z(ptr, size);
}

/*
==============
DB_FreeXZoneGpuTempMemory
==============
*/

void __fastcall DB_FreeXZoneGpuTempMemory(XZoneMemoryAllocation *alloc)
{
  ?DB_FreeXZoneGpuTempMemory@@YAXAEAUXZoneMemoryAllocation@@@Z(alloc);
}

/*
==============
DB_FreeXZoneMemory
==============
*/

void __fastcall DB_FreeXZoneMemory(XZoneMemory *zoneMem)
{
  ?DB_FreeXZoneMemory@@YAXPEAUXZoneMemory@@@Z(zoneMem);
}

/*
==============
DB_FreeXZoneTempMemory
==============
*/

void __fastcall DB_FreeXZoneTempMemory(XZoneMemory *zoneMem)
{
  ?DB_FreeXZoneTempMemory@@YAXPEAUXZoneMemory@@@Z(zoneMem);
}

/*
==============
DB_Alloc
==============
*/

void *__fastcall DB_Alloc(unsigned __int64 size, unsigned __int64 alignment)
{
  return ?DB_Alloc@@YAPEAX_K0@Z(size, alignment);
}

/*
==============
DB_IsInDBMemory
==============
*/

bool __fastcall DB_IsInDBMemory(const void *ptr)
{
  return ?DB_IsInDBMemory@@YA_NPEBX@Z(ptr);
}

/*
==============
DB_InitXZoneMemory
==============
*/

void __fastcall DB_InitXZoneMemory(XZoneMemory *zoneMem)
{
  ?DB_InitXZoneMemory@@YAXPEAUXZoneMemory@@@Z(zoneMem);
}

/*
==============
DB_MemoryShutdown
==============
*/

void DB_MemoryShutdown(void)
{
  ?DB_MemoryShutdown@@YAXXZ();
}

/*
==============
DB_Alloc
==============
*/
unsigned __int8 *DB_Alloc(unsigned __int64 size, unsigned __int64 alignment)
{
  XZoneTemporaryLoadData *tempData; 
  unsigned __int64 v5; 
  unsigned __int8 *v6; 

  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 474, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( !alignment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 475, ASSERT_TYPE_ASSERT, "(alignment >= 1)", (const char *)&queryFormat, "alignment >= 1") )
    __debugbreak();
  if ( ((alignment - 1) & alignment) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 476, ASSERT_TYPE_ASSERT, "(!(alignment & (alignment - 1)))", (const char *)&queryFormat, "!(alignment & (alignment - 1))") )
    __debugbreak();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 477, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  tempData = g_streamPosGlob.tempData;
  if ( !g_streamPosGlob.tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 480, ASSERT_TYPE_ASSERT, "(tempData)", (const char *)&queryFormat, "tempData") )
    __debugbreak();
  v5 = ~(alignment - 1) & (alignment - 1 + tempData->callbackPos);
  tempData->callbackPos = v5;
  v6 = &g_streamPosGlob.archiveBlocks.blocks[3].data[v5];
  tempData->callbackPos = v5 + size;
  if ( v5 + size > g_streamPosGlob.archiveBlocks.blocks[3].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 488, ASSERT_TYPE_ASSERT, "( ( tempData->callbackPos <= callbackBlock->size ) )", "( tempData->callbackPos ) = %zu", v5 + size) )
    __debugbreak();
  return v6;
}

/*
==============
DB_AllocXZoneMemory
==============
*/
void DB_AllocXZoneMemory(const unsigned __int64 *blockSize, const char *filename, XZoneMemory *zoneMem, XArchiveBlocks *archiveBlocks)
{
  DBMemoryType v8; 
  unsigned __int8 **p_alloc; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 355, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 356, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 357, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
    __debugbreak();
  if ( !archiveBlocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 358, ASSERT_TYPE_ASSERT, "(archiveBlocks)", (const char *)&queryFormat, "archiveBlocks") )
    __debugbreak();
  v8 = DM_MEMORY_VIRTUAL;
  p_alloc = &zoneMem->alloc[0].alloc;
  do
  {
    if ( *((_DWORD *)p_alloc - 2) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 362, ASSERT_TYPE_ASSERT, "(zoneMem->alloc[i].pageRange.firstPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "zoneMem->alloc[i].pageRange.firstPageID == MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( *((_DWORD *)p_alloc - 1) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 363, ASSERT_TYPE_ASSERT, "(zoneMem->alloc[i].pageRange.lastPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "zoneMem->alloc[i].pageRange.lastPageID == MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( *p_alloc )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 364, ASSERT_TYPE_ASSERT, "(zoneMem->alloc[i].alloc == nullptr)", (const char *)&queryFormat, "zoneMem->alloc[i].alloc == nullptr") )
        __debugbreak();
    }
    DB_AllocXZoneMemoryInternal(blockSize, filename, zoneMem, archiveBlocks, v8++);
    p_alloc += 3;
  }
  while ( (unsigned int)v8 < DM_MEMORY_COUNT );
}

/*
==============
DB_AllocXZoneMemoryInternal
==============
*/
void DB_AllocXZoneMemoryInternal(const unsigned __int64 *blockSize, const char *const filename, XZoneMemory *const zoneMem, XArchiveBlocks *const archiveBlocks, const DBMemoryType type)
{
  const unsigned __int64 *v7; 
  DBMemoryType v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  const unsigned int *v11; 
  unsigned __int64 *v12; 
  DBMemoryType MemTypeFromXFileType; 
  unsigned __int64 v14; 
  __int64 v15; 
  unsigned __int64 *v16; 
  XZoneMemoryAllocation *v17; 
  unsigned __int64 v18; 
  ZoneMemoryAllocator *ZoneAllocator; 
  unsigned __int64 v20; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int8 *v24; 
  unsigned __int64 v25; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v26; 
  __int64 v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  StreamerMemLoan *v30; 
  ZoneMemoryAllocator *v31; 
  unsigned int v32; 
  DBMemoryType v33; 
  unsigned __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned __int8 *v37; 
  char *name; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  const unsigned __int64 *v42; 
  const unsigned int *v43; 
  unsigned __int64 *p_size; 
  StreamerMemLoan optionalLoan; 
  StreamerMemLoan result; 

  v7 = blockSize;
  v42 = blockSize;
  v8 = type;
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 244, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 246, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
    __debugbreak();
  if ( !archiveBlocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 247, ASSERT_TYPE_ASSERT, "(archiveBlocks)", (const char *)&queryFormat, "archiveBlocks") )
    __debugbreak();
  if ( (unsigned int)type >= DM_MEMORY_COUNT )
  {
    LODWORD(name) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 248, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( DM_MEMORY_COUNT )", "type doesn't index DM_MEMORY_COUNT\n\t%i not in [0, %i)", name, 6) )
      __debugbreak();
  }
  v9 = 0i64;
  v10 = 0;
  v43 = DB_XFILE_ALIGNMENT;
  v11 = DB_XFILE_ALIGNMENT;
  p_size = &archiveBlocks->blocks[0].size;
  v12 = &archiveBlocks->blocks[0].size;
  do
  {
    if ( g_dbPreloading && v10 == 9 )
      MemTypeFromXFileType = DM_MEMORY_TEMP;
    else
      MemTypeFromXFileType = DB_GetMemTypeFromXFileType(v10);
    if ( MemTypeFromXFileType == v8 )
    {
      if ( *v12 )
      {
        LODWORD(v40) = *v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 259, ASSERT_TYPE_ASSERT, "( archiveBlocks->blocks[blockIndex].size ) == ( 0 )", "%s == %s\n\t%i, %i", "archiveBlocks->blocks[blockIndex].size", "0", v40, 0i64) )
          __debugbreak();
      }
      v14 = *v7;
      if ( *v7 )
      {
        v15 = *v11;
        if ( (!*v11 || ((v15 - 1) & v15) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 679, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
          __debugbreak();
        v9 = v14 + (~(v15 - 1) & (v15 + v9 - 1));
      }
      v8 = type;
    }
    ++v10;
    v12 += 2;
    ++v7;
    ++v11;
  }
  while ( v10 < 0xB );
  v16 = p_size;
  if ( v9 )
  {
    v17 = &zoneMem->alloc[v8];
    if ( v17->pageRange.firstPageID != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 277, ASSERT_TYPE_ASSERT, "(zoneMem->alloc[type].pageRange.firstPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "zoneMem->alloc[type].pageRange.firstPageID == MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( v17->pageRange.lastPageID != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 278, ASSERT_TYPE_ASSERT, "(zoneMem->alloc[type].pageRange.lastPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "zoneMem->alloc[type].pageRange.lastPageID == MEM_PAGEID_INVALID") )
      __debugbreak();
    v18 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
    ZoneAllocator = DB_GetZoneAllocator(v8);
    Sys_AcquireWriteLock(&ZoneAllocator->lock);
    if ( ZoneAllocator->heap.usedBlocks.m_size == 1956 )
    {
      v20 = 0i64;
      p_freeBlocks = &ZoneAllocator->heap.freeBlocks;
      v22 = (__int64)&ZoneAllocator->heap.freeBlocks + 8 * ZoneAllocator->heap.freeBlocks.m_size;
      if ( &ZoneAllocator->heap.freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)v22 )
      {
        do
        {
          v23 = v20;
          v20 = *(unsigned int *)&p_freeBlocks->m_data.m_buffer[4];
          if ( v20 <= v23 )
            v20 = v23;
          p_freeBlocks = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8);
        }
        while ( p_freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)v22 );
      }
      LODWORD(v41) = v8;
      Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)15, "DB_ZoneAllocatorReserve", "c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 125, "At Capacity. size=%zu reserve=%zu largestFree=%zu type=%d", (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64, (unsigned __int64)ZoneAllocator->heap.totalReservedPages << 16, v20 << 16, v41);
    }
    v24 = (unsigned __int8 *)PagedHeap<65536,1956,1>::Allocate(&ZoneAllocator->heap, (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
    if ( !v24 )
    {
      v25 = 0i64;
      v26 = &ZoneAllocator->heap.freeBlocks;
      v27 = (__int64)&ZoneAllocator->heap.freeBlocks + 8 * ZoneAllocator->heap.freeBlocks.m_size;
      if ( &ZoneAllocator->heap.freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)v27 )
      {
        do
        {
          v28 = v25;
          v25 = *(unsigned int *)&v26->m_data.m_buffer[4];
          if ( v25 <= v28 )
            v25 = v28;
          v26 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v26 + 8);
        }
        while ( v26 != (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)v27 );
      }
      LODWORD(v41) = v8;
      Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)15, "DB_ZoneAllocatorReserve", "c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 132, "size=%zu reserve=%zu largestFree=%zu type=%d", (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64, (unsigned __int64)ZoneAllocator->heap.totalReservedPages << 16, v25 << 16, v41);
    }
    Sys_ReleaseWriteLock(&ZoneAllocator->lock);
    if ( (_WORD)v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 284, ASSERT_TYPE_ASSERT, "(IsAligned( buf, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( buf, MEM_PHYSICAL_PAGE_SIZE )") )
      __debugbreak();
    v17->alloc = v24;
    v17->size = v18;
    optionalLoan.mUpdateID = 0i64;
    optionalLoan.mPages = 0i64;
    optionalLoan.mCookie = -1061110033;
    if ( DB_IsDoingStreamOnlyWork() || g_dbPreloading )
    {
      v29 = s_dbAllocatorType[v8];
      if ( (unsigned int)v29 >= 4 )
      {
        LODWORD(v39) = 4;
        SLODWORD(name) = s_dbAllocatorType[v8];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 306, ASSERT_TYPE_ASSERT, "(unsigned)( allocType ) < (unsigned)( ( sizeof( *array_counter( s_zoneMemoryAllocatorPool ) ) + 0 ) )", "allocType doesn't index ARRAY_COUNT( s_zoneMemoryAllocatorPool )\n\t%i not in [0, %i)", name, v39) )
          __debugbreak();
      }
      v30 = DB_GrowStreamerMemLoanAndWait(&result, (Mem_Pool)s_zoneMemoryAllocatorPool[v29], v18);
      StreamerMemLoan::operator=(&optionalLoan, v30);
      StreamerMemLoan::~StreamerMemLoan(&result);
    }
    if ( !Mem_Paged_CommitMemoryPartial(v24, &v24[v18], v24, &optionalLoan, &v17->pageRange, filename) )
      Mem_Error_CannotAlloc_Dev(MOVEMENT, "DB_AllocXZoneMemoryInternal", "c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 314, "size=%zu", v18);
    IWMem_Profile_Push(filename);
    v31 = DB_GetZoneAllocator(v8);
    IWMem_Alloc(v31->iwMemCommit, v24, v18);
    IWMem_Profile_Pop();
    if ( v17->pageRange.firstPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 321, ASSERT_TYPE_ASSERT, "(zoneMem->alloc[type].pageRange.firstPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "zoneMem->alloc[type].pageRange.firstPageID != MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( v17->pageRange.lastPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 322, ASSERT_TYPE_ASSERT, "(zoneMem->alloc[type].pageRange.lastPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "zoneMem->alloc[type].pageRange.lastPageID != MEM_PAGEID_INVALID") )
      __debugbreak();
    v32 = 0;
    do
    {
      if ( g_dbPreloading && v32 == 9 )
        v33 = DM_MEMORY_TEMP;
      else
        v33 = DB_GetMemTypeFromXFileType(v32);
      if ( v33 == v8 )
      {
        if ( *v16 )
        {
          LODWORD(v40) = *v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 331, ASSERT_TYPE_ASSERT, "( archiveBlocks->blocks[blockIndex].size ) == ( 0 )", "%s == %s\n\t%i, %i", "archiveBlocks->blocks[blockIndex].size", "0", v40, 0i64) )
            __debugbreak();
        }
        v34 = *v42;
        if ( *v42 )
        {
          v35 = *v43;
          if ( (!*v43 || ((v35 - 1) & v35) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 679, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
            __debugbreak();
          v36 = -v35 & (unsigned __int64)&v24[v35 - 1];
          *v16 = v34;
          *(v16 - 1) = v36;
          v24 = (unsigned __int8 *)(v34 + v36);
        }
        v8 = type;
      }
      ++v32;
      ++v42;
      ++v43;
      v16 += 2;
    }
    while ( v32 < 0xB );
    v37 = (unsigned __int8 *)((unsigned __int64)(v24 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
    if ( v37 != &v17->alloc[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 349, ASSERT_TYPE_ASSERT, "( AlignUp( buf, MEM_PHYSICAL_PAGE_SIZE ) ) == ( ( zoneMem->alloc[type].alloc + size ) )", "%s == %s\n\t%p, %p", "AlignUp( buf, MEM_PHYSICAL_PAGE_SIZE )", "( zoneMem->alloc[type].alloc + size )", v37, &v17->alloc[v18]) )
      __debugbreak();
    StreamerMemLoan::~StreamerMemLoan(&optionalLoan);
  }
}

/*
==============
DB_DecommitUnusedPatchMem
==============
*/
void DB_DecommitUnusedPatchMem(XZoneMemory *zoneMem, XZoneMemoryAllocation *alloc, int streamIndex, unsigned __int64 unusedBlockSize, unsigned __int64 decommitSize)
{
  __int64 v6; 
  XZoneTemporaryLoadData *tempData; 
  XBlock *v10; 
  unsigned __int8 *v11; 
  DBMemoryType MemTypeFromXFileType; 
  ZoneMemoryAllocator *ZoneAllocator; 
  __int64 v14; 
  StreamerMemLoan result; 

  v6 = streamIndex;
  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 598, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
    __debugbreak();
  if ( !alloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 599, ASSERT_TYPE_ASSERT, "(alloc)", (const char *)&queryFormat, "alloc") )
    __debugbreak();
  if ( !unusedBlockSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 600, ASSERT_TYPE_ASSERT, "(unusedBlockSize)", (const char *)&queryFormat, "unusedBlockSize") )
    __debugbreak();
  if ( !decommitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 601, ASSERT_TYPE_ASSERT, "(decommitSize)", (const char *)&queryFormat, "decommitSize") )
    __debugbreak();
  if ( (_WORD)decommitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 602, ASSERT_TYPE_ASSERT, "(IsAligned( decommitSize, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( decommitSize, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( !zoneMem->tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 603, ASSERT_TYPE_ASSERT, "(zoneMem->tempData)", (const char *)&queryFormat, "zoneMem->tempData") )
    __debugbreak();
  tempData = zoneMem->tempData;
  if ( (unsigned int)v6 >= 0xB )
  {
    LODWORD(v14) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 607, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( archiveBlocks->blocks ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( archiveBlocks->blocks )\n\t%i not in [0, %i)", v14, 11) )
      __debugbreak();
  }
  v10 = &tempData->archiveBlocks.blocks[v6];
  if ( v10->size < unusedBlockSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 610, ASSERT_TYPE_ASSERT, "(block.size >= unusedBlockSize)", (const char *)&queryFormat, "block.size >= unusedBlockSize") )
    __debugbreak();
  if ( alloc->size < decommitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 612, ASSERT_TYPE_ASSERT, "(alloc->size >= decommitSize)", (const char *)&queryFormat, "alloc->size >= decommitSize") )
    __debugbreak();
  v11 = &alloc->alloc[alloc->size];
  MemTypeFromXFileType = DB_GetMemTypeFromXFileType(v6);
  ZoneAllocator = DB_GetZoneAllocator(MemTypeFromXFileType);
  IWMem_FreeRange(ZoneAllocator->iwMemCommit, &v11[-decommitSize], decommitSize);
  Mem_Paged_DecommitMemoryPartial(&result, &v11[-decommitSize], v11, alloc->alloc, &alloc->pageRange);
  StreamerMemLoan::~StreamerMemLoan(&result);
  alloc->size -= decommitSize;
  v10->size -= unusedBlockSize;
  if ( v10->size > alloc->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 623, ASSERT_TYPE_ASSERT, "(block.size <= alloc->size)", (const char *)&queryFormat, "block.size <= alloc->size") )
    __debugbreak();
  if ( !alloc->size )
  {
    if ( v10->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 628, ASSERT_TYPE_ASSERT, "(block.size == 0)", (const char *)&queryFormat, "block.size == 0") )
      __debugbreak();
    if ( alloc->pageRange.firstPageID != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 629, ASSERT_TYPE_ASSERT, "(alloc->pageRange.firstPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "alloc->pageRange.firstPageID == MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( alloc->pageRange.lastPageID != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 630, ASSERT_TYPE_ASSERT, "(alloc->pageRange.lastPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "alloc->pageRange.lastPageID == MEM_PAGEID_INVALID") )
      __debugbreak();
    alloc->alloc = NULL;
    v10->data = NULL;
  }
}

/*
==============
DB_FixupPreloadScriptMemory
==============
*/
void DB_FixupPreloadScriptMemory(XZoneMemory *zoneMem, const char *zoneName)
{
  XZoneTemporaryLoadData *tempData; 
  size_t size; 
  unsigned __int8 *data; 
  unsigned __int64 blockSize[12]; 

  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 376, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
    __debugbreak();
  tempData = zoneMem->tempData;
  if ( !tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 378, ASSERT_TYPE_ASSERT, "(tempData)", (const char *)&queryFormat, "tempData") )
    __debugbreak();
  size = tempData->archiveBlocks.blocks[9].size;
  data = tempData->archiveBlocks.blocks[9].data;
  tempData->archiveBlocks.blocks[9].data = NULL;
  tempData->archiveBlocks.blocks[9].size = 0i64;
  if ( size )
  {
    memset_0(blockSize, 0, 0x58ui64);
    blockSize[9] = size;
    DB_AllocXZoneMemoryInternal(blockSize, zoneName, zoneMem, &tempData->archiveBlocks, DM_MEMORY_SCRIPT);
    memcpy_0(tempData->archiveBlocks.blocks[9].data, data, size);
    DB_RefreshStream(&tempData->archiveBlocks, 9u);
  }
}

/*
==============
DB_FreeXZoneGpuTempMemory
==============
*/
void DB_FreeXZoneGpuTempMemory(XZoneMemoryAllocation *alloc)
{
  DB_FreeZoneMemAllocation(alloc, DM_MEMORY_GPUTEMP);
}

/*
==============
DB_FreeXZoneMemory
==============
*/
void DB_FreeXZoneMemory(XZoneMemory *zoneMem)
{
  unsigned int i; 
  XZoneMemoryAllocation *v3; 
  DBMemoryType v4; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_FreeXZoneMemory");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 548, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 549, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
    __debugbreak();
  for ( i = 0; i < 6; ++i )
  {
    if ( i == 5 )
    {
      v3 = &zoneMem->alloc[5];
      v4 = DM_MEMORY_GPUTEMP;
    }
    else
    {
      v3 = &zoneMem->alloc[i];
      v4 = i;
    }
    DB_FreeZoneMemAllocation(v3, v4);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_FreeXZoneTempMemory
==============
*/
void DB_FreeXZoneTempMemory(XZoneMemory *zoneMem)
{
  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 585, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
    __debugbreak();
  if ( !zoneMem->tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 586, ASSERT_TYPE_ASSERT, "(zoneMem->tempData)", (const char *)&queryFormat, "zoneMem->tempData") )
    __debugbreak();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 587, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  DB_FreeZoneMemAllocation(&zoneMem->alloc[4], DM_MEMORY_TEMP);
  zoneMem->tempData = NULL;
}

/*
==============
DB_FreeZoneMemAllocation
==============
*/
void DB_FreeZoneMemAllocation(XZoneMemoryAllocation *alloc, DBMemoryType memType)
{
  unsigned __int64 size; 
  unsigned __int8 *v5; 
  unsigned __int8 *v6; 
  ZoneMemoryAllocator *ZoneAllocator; 
  RWLock *p_lock; 
  unsigned __int64 v9; 
  unsigned __int8 *v10; 
  ZoneMemoryAllocator *v11; 
  __int64 v12; 
  Mem_PageRange inoutPageRange; 
  StreamerMemLoan result; 

  if ( (unsigned int)memType >= DM_MEMORY_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 494, ASSERT_TYPE_ASSERT, "(unsigned)( memType ) < (unsigned)( DM_MEMORY_COUNT )", "memType doesn't index DM_MEMORY_COUNT\n\t%i not in [0, %i)", memType, 6) )
    __debugbreak();
  if ( alloc->alloc )
  {
    if ( alloc->pageRange.firstPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 498, ASSERT_TYPE_ASSERT, "(alloc.pageRange.firstPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "alloc.pageRange.firstPageID != MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( alloc->pageRange.lastPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 499, ASSERT_TYPE_ASSERT, "(alloc.pageRange.lastPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "alloc.pageRange.lastPageID != MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( !alloc->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 500, ASSERT_TYPE_ASSERT, "(alloc.size)", (const char *)&queryFormat, "alloc.size") )
      __debugbreak();
    size = alloc->size;
    v5 = alloc->alloc;
    inoutPageRange = alloc->pageRange;
    Mem_Paged_DecommitMemoryPartial(&result, v5, &v5[size], v5, &inoutPageRange);
    StreamerMemLoan::~StreamerMemLoan(&result);
    v6 = alloc->alloc;
    ZoneAllocator = DB_GetZoneAllocator(memType);
    p_lock = &ZoneAllocator->lock;
    Sys_AcquireWriteLock(&ZoneAllocator->lock);
    LOBYTE(ZoneAllocator) = PagedHeap<65536,1956,1>::Free(&ZoneAllocator->heap, v6);
    Sys_ReleaseWriteLock(p_lock);
    if ( !(_BYTE)ZoneAllocator )
    {
      LODWORD(v12) = memType;
      Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)15, "DB_FreeZoneMemAllocation", "c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 516, "reserve free failed. alloc=%p type=%d", alloc->alloc, v12);
    }
    v9 = alloc->size;
    v10 = alloc->alloc;
    v11 = DB_GetZoneAllocator(memType);
    IWMem_Free(v11->iwMemCommit, v10, v9);
    alloc->alloc = NULL;
    alloc->size = 0i64;
    alloc->pageRange = MEM_PAGE_RANGE_INVALID_3;
  }
  else
  {
    if ( alloc->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 527, ASSERT_TYPE_ASSERT, "(alloc.size == 0)", (const char *)&queryFormat, "alloc.size == 0") )
      __debugbreak();
    if ( alloc->pageRange.firstPageID != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 528, ASSERT_TYPE_ASSERT, "(alloc.pageRange.firstPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "alloc.pageRange.firstPageID == MEM_PAGEID_INVALID") )
      __debugbreak();
    if ( alloc->pageRange.lastPageID != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 529, ASSERT_TYPE_ASSERT, "(alloc.pageRange.lastPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "alloc.pageRange.lastPageID == MEM_PAGEID_INVALID") )
      __debugbreak();
  }
}

/*
==============
DB_GetZoneAllocator
==============
*/
ZoneMemoryAllocator *DB_GetZoneAllocator(const DBMemoryType dbMemType)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v4; 
  __int64 v6; 
  int v7; 

  v1 = dbMemType;
  if ( (unsigned int)dbMemType >= DM_MEMORY_COUNT )
  {
    v7 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( dbMemType ) < (unsigned)( ( sizeof( *array_counter( s_dbAllocatorType ) ) + 0 ) )", "dbMemType doesn't index ARRAY_COUNT( s_dbAllocatorType )\n\t%i not in [0, %i)", dbMemType, v7) )
      __debugbreak();
  }
  v2 = s_dbAllocatorType[v1];
  if ( (unsigned int)v2 >= 4 )
  {
    LODWORD(v6) = 4;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( allocType ) < (unsigned)( ( sizeof( *array_counter( s_zoneMemoryAllocators ) ) + 0 ) )", "allocType doesn't index ARRAY_COUNT( s_zoneMemoryAllocators )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return &s_zoneMemoryAllocators[v2];
}

/*
==============
DB_GrowStreamerMemLoanAndWait
==============
*/
StreamerMemLoan *DB_GrowStreamerMemLoanAndWait(StreamerMemLoan *result, Mem_Pool pool, unsigned __int64 size)
{
  int v6; 
  StreamMemPool StreamMemPoolFromMemPool; 
  unsigned __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  result->mUpdateID = 0i64;
  result->mPages = 0i64;
  result->mCookie = -1061110033;
  Sys_ProfBeginNamedEvent(0xFF808080, "DB_GrowStreamerMemLoanAndWait");
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 210, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  v6 = Sys_Milliseconds();
  StreamMemPoolFromMemPool = Stream_Alloc_GetStreamMemPoolFromMemPool(pool);
  if ( StreamerMemLoan::TryGrow(result, StreamMemPoolFromMemPool, size) && !StreamerMemLoan::Ready(result) )
  {
    v8 = size / 0x500000;
    while ( 1 )
    {
      Sys_YieldWorkerCmd();
      Sys_Sleep(5);
      if ( (v8 > 0x7FFFFFFFFFFFFFFFi64 || v8 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v8, "unsigned", size / 0x500000) )
        __debugbreak();
      v9 = 1;
      if ( (int)v8 > 1 )
        v9 = size / 0x500000;
      v10 = 264 * v9;
      v11 = Sys_Milliseconds() - v6;
      if ( v11 > v10 )
        break;
      if ( StreamerMemLoan::Ready(result) )
        goto LABEL_18;
    }
    Com_PrintWarning(10, "WARNING: DB_GrowStreamerMemLoanAndWait waited %d ms (threshold %d ms) for streamer to free %zu bytes. Aborting wait and doing forced commit. This will likely cause the streamer to flush.\n", (unsigned int)v11, (unsigned int)v10, size);
  }
LABEL_18:
  Sys_ProfEndNamedEvent();
  return result;
}

/*
==============
DB_InitXZoneMemory
==============
*/
void DB_InitXZoneMemory(XZoneMemory *zoneMem)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 176, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 177, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
    __debugbreak();
  memset_0(zoneMem, 0, sizeof(XZoneMemory));
  zoneMem->alloc[0].pageRange = MEM_PAGE_RANGE_INVALID_3;
  zoneMem->alloc[1].pageRange = MEM_PAGE_RANGE_INVALID_3;
  zoneMem->alloc[2].pageRange = MEM_PAGE_RANGE_INVALID_3;
  zoneMem->alloc[3].pageRange = MEM_PAGE_RANGE_INVALID_3;
  zoneMem->alloc[4].pageRange = MEM_PAGE_RANGE_INVALID_3;
  zoneMem->alloc[5].pageRange = MEM_PAGE_RANGE_INVALID_3;
}

/*
==============
DB_IsInDBMemory
==============
*/
char DB_IsInDBMemory(const void *ptr)
{
  int v1; 
  ZoneMemoryAllocator *i; 
  unsigned __int64 memPtr; 

  v1 = 0;
  for ( i = s_zoneMemoryAllocators; ; ++i )
  {
    memPtr = (unsigned __int64)i->heap.memPtr;
    if ( (unsigned __int64)ptr >= memPtr && (unsigned __int64)ptr < memPtr + ((unsigned __int64)i->heap.totalReservedPages << 16) )
      break;
    if ( (unsigned int)++v1 >= 4 )
      return 0;
  }
  return 1;
}

/*
==============
DB_IsRegionInDBMemory
==============
*/
char DB_IsRegionInDBMemory(const void *ptr, unsigned __int64 size)
{
  char *v2; 
  int v3; 
  ZoneMemoryAllocator *i; 
  unsigned __int64 memPtr; 

  v2 = (char *)ptr + size - 1;
  v3 = 0;
  for ( i = s_zoneMemoryAllocators; ; ++i )
  {
    memPtr = (unsigned __int64)i->heap.memPtr;
    if ( ((unsigned __int64)ptr >= memPtr || (unsigned __int64)v2 >= memPtr) && (unsigned __int64)ptr < memPtr + ((unsigned __int64)i->heap.totalReservedPages << 16) )
      break;
    if ( (unsigned int)++v3 >= 4 )
      return 0;
  }
  return 1;
}

/*
==============
DB_MemoryInit
==============
*/
void DB_MemoryInit(void)
{
  int v0; 
  const Mem_Pool *v1; 
  __int64 v2; 
  volatile int *p_acquireLock; 
  const char *v4; 
  unsigned __int64 v5; 
  Mem_Pool v6; 
  void *v7; 
  __int64 v8; 
  __int64 v9; 

  if ( s_dbMemoryInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 444, ASSERT_TYPE_ASSERT, "(!s_dbMemoryInited)", (const char *)&queryFormat, "!s_dbMemoryInited") )
    __debugbreak();
  v0 = 0;
  v1 = s_zoneMemoryAllocatorPool;
  v2 = 0i64;
  p_acquireLock = &s_zoneMemoryAllocators[0].lock.acquireLock;
  do
  {
    v4 = s_names_1[v2];
    v5 = s_reserveSizes[v2];
    if ( (unsigned int)v0 >= 4 )
    {
      LODWORD(v9) = 4;
      LODWORD(v8) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( allocType ) < (unsigned)( ( sizeof( *array_counter( s_zoneMemoryAllocators ) ) + 0 ) )", "allocType doesn't index ARRAY_COUNT( s_zoneMemoryAllocators )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( p_acquireLock == (volatile int *)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 117, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
      __debugbreak();
    InitializeSRWLock((PSRWLOCK)p_acquireLock - 1);
    v6 = *v1;
    *((_DWORD *)p_acquireLock + 2) = -1412623820;
    *p_acquireLock = 0;
    *((_DWORD *)p_acquireLock + 1) = 0;
    v7 = (void *)Mem_Paged_ReserveVirtualAddressRange(v6, v5, v4);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory.cpp", 164, ASSERT_TYPE_ASSERT, "(reservePtr)", (const char *)&queryFormat, "reservePtr") )
      __debugbreak();
    PagedHeap<65536,1956,1>::Init((PagedHeap<65536,1956,1> *)(p_acquireLock - 7842), v7, v5, v4);
    IWMem_Allocator_CreateFixed((IWMemID *)p_acquireLock + 2, v4, (IWMemAllocatorType)4, v7, v5);
    IWMem_Allocator_SetFlag(*(IWMemID *)(p_acquireLock + 4), RequiresLock);
    ++v0;
    ++v2;
    p_acquireLock += 7848;
    ++v1;
  }
  while ( v0 < 4 );
  s_dbMemoryInited = 1;
}

/*
==============
DB_MemoryShutdown
==============
*/
void DB_MemoryShutdown(void)
{
  IWMemID *p_iwMemID; 
  __int64 v1; 

  if ( s_dbMemoryInited )
  {
    p_iwMemID = &s_zoneMemoryAllocators[0].heap.iwMemID;
    v1 = 4i64;
    s_dbMemoryInited = 0;
    do
    {
      IWMem_Allocator_Destroy(p_iwMemID[4]);
      IWMem_Allocator_Destroy(*p_iwMemID);
      p_iwMemID += 3924;
      --v1;
    }
    while ( v1 );
  }
}

