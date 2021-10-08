/*
==============
DW_Allocate
==============
*/

void *__fastcall DW_Allocate(unsigned __int64 size)
{
  return ?DW_Allocate@@YAPEAX_K@Z(size);
}

/*
==============
Dw_MemoryIsInited
==============
*/

bool __fastcall Dw_MemoryIsInited()
{
  return ?Dw_MemoryIsInited@@YA_NXZ();
}

/*
==============
DW_InitMemoryFuncs
==============
*/

void DW_InitMemoryFuncs(void)
{
  ?DW_InitMemoryFuncs@@YAXXZ();
}

/*
==============
DW_ShutdownMemoryFuncs
==============
*/

void DW_ShutdownMemoryFuncs(void)
{
  ?DW_ShutdownMemoryFuncs@@YAXXZ();
}

/*
==============
DW_Deallocate
==============
*/

void __fastcall DW_Deallocate(void *ptr)
{
  ?DW_Deallocate@@YAXPEAX@Z(ptr);
}

/*
==============
DW_PrintOneLineMemStats
==============
*/

void DW_PrintOneLineMemStats(void)
{
  ?DW_PrintOneLineMemStats@@YAXXZ();
}

/*
==============
DW_GetHeap
==============
*/

ntl::nxheap *__fastcall DW_GetHeap()
{
  return ?DW_GetHeap@@YAPEAVnxheap@ntl@@XZ();
}

/*
==============
DW_AlignedAllocate
==============
*/
void *DW_AlignedAllocate(unsigned __int64 size, unsigned __int64 align)
{
  unsigned __int64 v2; 
  void *v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 

  v2 = 1i64;
  if ( size )
    v2 = size;
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE_ALLOC);
  v4 = ntl::nxheap::allocate((ntl::nxheap *)&s_dwHeap, v2, align, 0);
  if ( v4 )
  {
    v6 = ntl::nxheap::largest_free_block((ntl::nxheap *)&s_dwHeap);
    if ( s_largestFreeBlock > v6 )
      v6 = s_largestFreeBlock;
    s_largestFreeBlock = v6;
  }
  else
  {
    Com_Printf(0, "[DW] Out of memory! Dumping heap contents...\n");
    ntl::nxheap::debug_print_blocks((ntl::nxheap *)&s_dwHeap);
    v5 = ntl::nxheap::largest_free_block((ntl::nxheap *)&s_dwHeap);
    Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)13, "DW_AlignedAllocate", "c:\\workspace\\iw8\\code_source\\src\\dw\\dwmemory.cpp", 71, "size=%zu largestFreeBlock=%zu", v2, v5);
  }
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE_ALLOC);
  return v4;
}

/*
==============
DW_AlignedReallocate
==============
*/
void *DW_AlignedReallocate(void *ptr, unsigned __int64 size, unsigned __int64 align)
{
  unsigned __int64 v4; 
  void *v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 

  v4 = 1i64;
  if ( size )
    v4 = size;
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE_ALLOC);
  v6 = ntl::nxheap::reallocate((ntl::nxheap *)&s_dwHeap, ptr, v4, align, 1);
  if ( v6 )
  {
    v8 = ntl::nxheap::largest_free_block((ntl::nxheap *)&s_dwHeap);
    if ( s_largestFreeBlock > v8 )
      v8 = s_largestFreeBlock;
    s_largestFreeBlock = v8;
  }
  else
  {
    Com_Printf(0, "[DW] Out of memory! Dumping heap contents...\n");
    ntl::nxheap::debug_print_blocks((ntl::nxheap *)&s_dwHeap);
    v7 = ntl::nxheap::largest_free_block((ntl::nxheap *)&s_dwHeap);
    Sys_LeaveCriticalSection(CRITSECT_DEMONWARE_ALLOC);
    Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)13, "DW_AlignedReallocate", "c:\\workspace\\iw8\\code_source\\src\\dw\\dwmemory.cpp", 120, "size=%zu largestFreeBlock=%zu", v4, v7);
  }
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE_ALLOC);
  return v6;
}

/*
==============
DW_Allocate
==============
*/
void *DW_Allocate(unsigned __int64 size)
{
  return DW_AlignedAllocate(size, 8ui64);
}

/*
==============
DW_Deallocate
==============
*/
void DW_Deallocate(void *ptr)
{
  if ( ptr )
  {
    Sys_EnterCriticalSection(CRITSECT_DEMONWARE_ALLOC);
    ntl::nxheap::free((ntl::nxheap *)&s_dwHeap, ptr);
    Sys_LeaveCriticalSection(CRITSECT_DEMONWARE_ALLOC);
  }
}

/*
==============
DW_GetHeap
==============
*/
ntl::in_place<ntl::fixed_heap_allocator<7864320,0>,0> *DW_GetHeap()
{
  if ( !s_dwMemInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmemory.cpp", 194, ASSERT_TYPE_ASSERT, "(s_dwMemInited)", (const char *)&queryFormat, "s_dwMemInited") )
    __debugbreak();
  return &s_dwHeap;
}

/*
==============
DW_InitMemoryFuncs
==============
*/
void DW_InitMemoryFuncs(void)
{
  if ( !s_dwMemInited )
  {
    Sys_EnterCriticalSection(CRITSECT_DEMONWARE_ALLOC);
    if ( !bdCore::m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmemory.cpp", 141, ASSERT_TYPE_ASSERT, "(bdCore::m_initialized)", (const char *)&queryFormat, "bdCore::m_initialized", -2i64) )
      __debugbreak();
    bdMemory::setAllocateFunc((void *(__fastcall *const)(const unsigned __int64))DW_Allocate);
    bdMemory::setAlignedAllocateFunc((void *(__fastcall *const)(const unsigned __int64, const unsigned __int64))DW_AlignedAllocate);
    bdMemory::setDeallocateFunc(DW_Deallocate);
    bdMemory::setAlignedDeallocateFunc(DW_Deallocate);
    bdMemory::setReallocateFunc((void *(__fastcall *const)(void *, const unsigned __int64))DW_Reallocate);
    bdMemory::setAlignedReallocateFunc((void *(__fastcall *const)(void *, const unsigned __int64, const unsigned __int64))DW_AlignedReallocate);
    ntl::nxheap::nxheap((ntl::nxheap *)&s_dwHeap);
    ntl::nxheap_region::nxheap_region((ntl::nxheap_region *)&s_dwHeap.m_data.m_buffer[7864400]);
    if ( *(_QWORD *)&s_dwHeap.m_data.m_buffer[7864400] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
      __debugbreak();
    ntl::nxheap_region::init((ntl::nxheap_region *)&s_dwHeap.m_data.m_buffer[7864400], &s_dwHeap.m_data.m_buffer[80], 0x780000ui64);
    if ( *(_QWORD *)s_dwHeap.m_data.m_buffer )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
        __debugbreak();
    }
    ntl::nxheap::init((ntl::nxheap *)&s_dwHeap, (ntl::nxheap_region *)&s_dwHeap.m_data.m_buffer[7864400], DIR_BOTTOM_UP);
    s_dwMemInited = 1;
    Sys_LeaveCriticalSection(CRITSECT_DEMONWARE_ALLOC);
  }
}

/*
==============
DW_PrintOneLineMemStats
==============
*/
void DW_PrintOneLineMemStats(void)
{
  Com_Printf(16, "[DW] Memory:  highwatermark: %zu bytes  current: %zu bytes, %zu allocations (largest current free block %zu bytes, min free %zu bytes)\n", *(size_t *)&s_dwHeap.m_data.m_buffer[64], *(size_t *)&s_dwHeap.m_data.m_buffer[48], *(size_t *)&s_dwHeap.m_data.m_buffer[32], s_largestFreeBlock, *(size_t *)&s_dwHeap.m_data.m_buffer[72]);
}

/*
==============
DW_Reallocate
==============
*/
void *DW_Reallocate(void *ptr, unsigned __int64 size)
{
  return DW_AlignedReallocate(ptr, size, 8ui64);
}

/*
==============
DW_ShutdownMemoryFuncs
==============
*/
void DW_ShutdownMemoryFuncs(void)
{
  if ( s_dwMemInited )
  {
    Sys_EnterCriticalSection(CRITSECT_DEMONWARE_ALLOC);
    if ( bdCore::m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmemory.cpp", 169, ASSERT_TYPE_ASSERT, "(!bdCore::m_initialized)", (const char *)&queryFormat, "!bdCore::m_initialized") )
      __debugbreak();
    if ( *(_QWORD *)&s_dwHeap.m_data.m_buffer[48] )
    {
      Com_Printf(0, "[DW] Memory leaks! Dumping heap contents...\n");
      ntl::nxheap::debug_print_blocks((ntl::nxheap *)&s_dwHeap);
    }
    s_dwMemInited = 0;
    Sys_LeaveCriticalSection(CRITSECT_DEMONWARE_ALLOC);
  }
}

/*
==============
Dw_MemoryIsInited
==============
*/
_BOOL8 Dw_MemoryIsInited()
{
  return s_dwMemInited;
}

