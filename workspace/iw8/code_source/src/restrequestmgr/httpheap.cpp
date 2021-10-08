/*
==============
HttpHeapInit
==============
*/

void HttpHeapInit(void)
{
  ?HttpHeapInit@@YAXXZ();
}

/*
==============
HttpHeapFree
==============
*/

void __fastcall HttpHeapFree(void *p_addr)
{
  ?HttpHeapFree@@YAXPEAX@Z(p_addr);
}

/*
==============
HttpHeapMalloc
==============
*/

void *__fastcall HttpHeapMalloc(unsigned __int64 size)
{
  return ?HttpHeapMalloc@@YAPEAX_K@Z(size);
}

/*
==============
HttpHeapGetMinFreeSize
==============
*/

unsigned __int64 __fastcall HttpHeapGetMinFreeSize()
{
  return ?HttpHeapGetMinFreeSize@@YA_KXZ();
}

/*
==============
HttpHeapLargestFreeBlock
==============
*/

unsigned __int64 __fastcall HttpHeapLargestFreeBlock()
{
  return ?HttpHeapLargestFreeBlock@@YA_KXZ();
}

/*
==============
HttpHeapFree
==============
*/
void HttpHeapFree(void *p_addr)
{
  Sys_EnterCriticalSection(CRITSECT_HTTP_HEAP);
  if ( !s_httpHeapIsInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\httpheap.cpp", 137, ASSERT_TYPE_ASSERT, "(s_httpHeapIsInited)", (const char *)&queryFormat, "s_httpHeapIsInited") )
    __debugbreak();
  ntl::nxheap::free(&s_httpHeap.m_heap, p_addr);
  Sys_LeaveCriticalSection(CRITSECT_HTTP_HEAP);
}

/*
==============
HttpHeapGetMinFreeSize
==============
*/
unsigned __int64 HttpHeapGetMinFreeSize()
{
  return s_httpHeap.m_heap.m_free_mem_min;
}

/*
==============
HttpHeapInit
==============
*/

void __fastcall HttpHeapInit(double _XMM0_8)
{
  void *v1; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 

  if ( s_httpHeapIsInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\httpheap.cpp", 57, ASSERT_TYPE_ASSERT, "(s_httpHeapIsInited == false)", (const char *)&queryFormat, "s_httpHeapIsInited == false") )
    __debugbreak();
  s_httpHeapIsInited = 1;
  s_httpHeapMem = PMem_Alloc(0x80000ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "HttpHeap");
  v1 = s_httpHeapMem;
  if ( !s_httpHeapMem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\httpheap.cpp", 62, ASSERT_TYPE_ASSERT, "(s_httpHeapMem)", (const char *)&queryFormat, "s_httpHeapMem") )
      __debugbreak();
    v1 = s_httpHeapMem;
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+48h+var_18], xmm0
  }
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", v5) )
    __debugbreak();
  *(_QWORD *)&v6 = v1;
  *((_QWORD *)&v6 + 1) = 0x80000i64;
  ntl::nxheap::shutdown(&s_httpHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_httpHeap.m_region);
  if ( s_httpHeap.m_data.m_buffer )
  {
    if ( s_httpHeap.m_data.m_buffer != s_httpHeap.m_allocator.m_data.m_buffer && s_httpHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_httpHeap.m_data.m_buffer = NULL;
    s_httpHeap.m_data.m_size = 0i64;
  }
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovups xmmword ptr cs:s_httpHeap.m_allocator.m_data.m_buffer, xmm0
  }
  ntl::nxheap::shutdown(&s_httpHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_httpHeap.m_region);
  if ( s_httpHeap.m_data.m_buffer )
  {
    if ( s_httpHeap.m_data.m_buffer != s_httpHeap.m_allocator.m_data.m_buffer && s_httpHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_httpHeap.m_data.m_buffer = NULL;
    s_httpHeap.m_data.m_size = 0i64;
  }
  if ( s_httpHeap.m_allocator.m_data.m_size < 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
    __debugbreak();
  *(_QWORD *)&v7 = s_httpHeap.m_allocator.m_data.m_buffer;
  *((_QWORD *)&v7 + 1) = 0x80000i64;
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovups xmmword ptr cs:s_httpHeap.baseclass_0.m_data.m_buffer, xmm0
  }
  if ( s_httpHeap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
    __debugbreak();
  ntl::nxheap_region::init(&s_httpHeap.m_region, s_httpHeap.m_data.m_buffer, s_httpHeap.m_data.m_size);
  if ( s_httpHeap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
    __debugbreak();
  ntl::nxheap::init(&s_httpHeap.m_heap, &s_httpHeap.m_region, DIR_BOTTOM_UP);
}

/*
==============
HttpHeapLargestFreeBlock
==============
*/
unsigned __int64 HttpHeapLargestFreeBlock()
{
  return ntl::nxheap::largest_free_block(&s_httpHeap.m_heap);
}

/*
==============
HttpHeapMalloc
==============
*/
void *HttpHeapMalloc(unsigned __int64 size)
{
  void *v2; 
  unsigned __int64 v3; 

  Sys_EnterCriticalSection(CRITSECT_HTTP_HEAP);
  if ( !s_httpHeapIsInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\httpheap.cpp", 91, ASSERT_TYPE_ASSERT, "(s_httpHeapIsInited)", (const char *)&queryFormat, "s_httpHeapIsInited") )
    __debugbreak();
  v2 = ntl::nxheap::allocate(&s_httpHeap.m_heap, size, 0x10ui64, 0);
  Sys_LeaveCriticalSection(CRITSECT_HTTP_HEAP);
  if ( !v2 )
  {
    Com_Printf(0, "HTTP Malloc: failed to allocate %zu bytes\n", size);
    ntl::nxheap::debug_print_blocks(&s_httpHeap.m_heap);
    v3 = ntl::nxheap::largest_free_block(&s_httpHeap.m_heap);
    Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)10, "HTTPMallocOutOfMemory", "c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\httpheap.cpp", 83, "size=%zu largestFreeBlock=%zu", size, v3);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\httpheap.cpp", 168, ASSERT_TYPE_ASSERT, "(p_mem)", (const char *)&queryFormat, "p_mem") )
      __debugbreak();
  }
  return v2;
}

