/*
==============
Mem_NewDeleteHeap_GetFreeSize
==============
*/

unsigned __int64 __fastcall Mem_NewDeleteHeap_GetFreeSize()
{
  return ?Mem_NewDeleteHeap_GetFreeSize@@YA_KXZ();
}

/*
==============
Mem_NewDeleteHeap_Free
==============
*/

void __fastcall Mem_NewDeleteHeap_Free(void *ptr)
{
  ?Mem_NewDeleteHeap_Free@@YAXPEAX@Z(ptr);
}

/*
==============
Mem_NewDeleteHeap_AllocAligned
==============
*/

void *__fastcall Mem_NewDeleteHeap_AllocAligned(unsigned __int64 size, unsigned __int64 align)
{
  return ?Mem_NewDeleteHeap_AllocAligned@@YAPEAX_K0@Z(size, align);
}

/*
==============
Mem_NewDeleteHeap::Alloc
==============
*/

void *__fastcall Mem_NewDeleteHeap::Alloc(Mem_NewDeleteHeap *this, unsigned __int64 size, unsigned __int64 align)
{
  return ?Alloc@Mem_NewDeleteHeap@@QEAAPEAX_K0@Z(this, size, align);
}

/*
==============
Mem_NewDeleteHeap_GetTotalSize
==============
*/

unsigned __int64 __fastcall Mem_NewDeleteHeap_GetTotalSize()
{
  return ?Mem_NewDeleteHeap_GetTotalSize@@YA_KXZ();
}

/*
==============
Mem_NewDeleteHeap_Alloc
==============
*/

void *__fastcall Mem_NewDeleteHeap_Alloc(unsigned __int64 size)
{
  return ?Mem_NewDeleteHeap_Alloc@@YAPEAX_K@Z(size);
}

/*
==============
Mem_NewDeleteHeap::Alloc
==============
*/
void *Mem_NewDeleteHeap::Alloc(Mem_NewDeleteHeap *this, unsigned __int64 size, unsigned __int64 align)
{
  void *v6; 
  unsigned __int64 v7; 
  FastCriticalSection *p_m_lock; 
  unsigned __int64 v9; 

  if ( !this->m_inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_newdeleteheap.cpp", 23, ASSERT_TYPE_ASSERT, "(m_inited)", (const char *)&queryFormat, "m_inited") )
    __debugbreak();
  if ( ((align - 1) & align) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_newdeleteheap.cpp", 24, ASSERT_TYPE_ASSERT, "(IsPowerOf2( align ))", (const char *)&queryFormat, "IsPowerOf2( align )") )
    __debugbreak();
  Sys_LockWrite(&this->m_lock);
  v6 = ntl::nxheap::allocate(&this->m_heap.m_heap, size, align, 1);
  Sys_UnlockWrite(&this->m_lock);
  if ( !v6 )
  {
    if ( !this->m_inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_newdeleteheap.cpp", 64, ASSERT_TYPE_ASSERT, "(m_inited)", (const char *)&queryFormat, "m_inited") )
      __debugbreak();
    Sys_LockRead(&this->m_lock);
    v7 = ntl::nxheap::largest_free_block(&this->m_heap.m_heap);
    p_m_lock = &this->m_lock;
    v9 = v7;
    Sys_UnlockRead(p_m_lock);
    Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x4, "Mem_NewDeleteHeap::Alloc", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_newdeleteheap.cpp", 30, "size=%zu largestFreeBlock=%zu", size, v9);
  }
  return v6;
}

/*
==============
Mem_GetNewDeleteHeap
==============
*/
Mem_NewDeleteHeap *Mem_GetNewDeleteHeap()
{
  if ( dword_14B2C923C <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    return &s_newDeleteHeap;
  j__Init_thread_header(&dword_14B2C923C);
  if ( dword_14B2C923C != -1 )
    return &s_newDeleteHeap;
  ntl::nxheap::nxheap(&s_newDeleteHeap.m_heap.m_heap);
  ntl::nxheap_region::nxheap_region(&s_newDeleteHeap.m_heap.m_region);
  if ( s_newDeleteHeap.m_heap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()", -2i64) )
    __debugbreak();
  ntl::nxheap_region::init(&s_newDeleteHeap.m_heap.m_region, &s_newDeleteHeap.m_heap.m_data, 0x17D000ui64);
  if ( s_newDeleteHeap.m_heap.m_heap.mp_parent_region )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
      __debugbreak();
  }
  ntl::nxheap::init(&s_newDeleteHeap.m_heap.m_heap, &s_newDeleteHeap.m_heap.m_region, DIR_BOTTOM_UP);
  s_newDeleteHeap.m_lock.readCount = 0;
  s_newDeleteHeap.m_lock.writeCount = 0;
  s_newDeleteHeap.m_lock.writeThreadId = 0;
  s_newDeleteHeap.m_inited = 1;
  j_atexit(Mem_GetNewDeleteHeap_::_2_::_dynamic_atexit_destructor_for__s_newDeleteHeap__);
  j__Init_thread_footer(&dword_14B2C923C);
  return &s_newDeleteHeap;
}

/*
==============
Mem_NewDeleteHeap_Alloc
==============
*/
void *Mem_NewDeleteHeap_Alloc(unsigned __int64 size)
{
  Mem_NewDeleteHeap *v2; 

  v2 = Mem_GetNewDeleteHeap();
  return Mem_NewDeleteHeap::Alloc(v2, size, 8ui64);
}

/*
==============
Mem_NewDeleteHeap_AllocAligned
==============
*/
void *Mem_NewDeleteHeap_AllocAligned(unsigned __int64 size, unsigned __int64 align)
{
  Mem_NewDeleteHeap *v4; 

  v4 = Mem_GetNewDeleteHeap();
  return Mem_NewDeleteHeap::Alloc(v4, size, align);
}

/*
==============
Mem_NewDeleteHeap_Free
==============
*/
void Mem_NewDeleteHeap_Free(void *ptr)
{
  Mem_NewDeleteHeap *v2; 

  if ( ptr )
  {
    v2 = Mem_GetNewDeleteHeap();
    if ( !v2->m_inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_newdeleteheap.cpp", 38, ASSERT_TYPE_ASSERT, "(m_inited)", (const char *)&queryFormat, "m_inited") )
      __debugbreak();
    Sys_LockWrite(&v2->m_lock);
    ntl::nxheap::free(&v2->m_heap.m_heap, ptr);
    Sys_UnlockWrite(&v2->m_lock);
  }
}

/*
==============
Mem_NewDeleteHeap_GetFreeSize
==============
*/
unsigned __int64 Mem_NewDeleteHeap_GetFreeSize()
{
  Mem_NewDeleteHeap *v0; 
  FastCriticalSection *p_m_lock; 
  ntl::nxheap *v2; 
  bool v3; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v5; 
  _BYTE *mp_start_ptr; 
  _BYTE *mp_top_ptr; 
  unsigned __int64 m_free_fragment_mem; 

  v0 = Mem_GetNewDeleteHeap();
  if ( !v0->m_inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_newdeleteheap.cpp", 52, ASSERT_TYPE_ASSERT, "(m_inited)", (const char *)&queryFormat, "m_inited") )
    __debugbreak();
  p_m_lock = &v0->m_lock;
  Sys_LockRead(&v0->m_lock);
  v2 = v0->m_heap.m_heap.mp_parent_region->mp_heap[0];
  v3 = v2 == NULL;
  p_mp_top_ptr = (ntl::nxheap_region *)&v2->mp_top_ptr;
  v5 = v0->m_heap.m_heap.mp_parent_region->mp_heap[1];
  if ( v3 )
    p_mp_top_ptr = v0->m_heap.m_heap.mp_parent_region;
  mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
  if ( v5 )
    mp_top_ptr = v5->mp_top_ptr;
  else
    mp_top_ptr = v0->m_heap.m_heap.mp_parent_region->mp_end_ptr;
  if ( mp_top_ptr < mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  m_free_fragment_mem = v0->m_heap.m_heap.m_free_fragment_mem;
  Sys_UnlockRead(p_m_lock);
  return m_free_fragment_mem + mp_top_ptr - mp_start_ptr;
}

/*
==============
Mem_NewDeleteHeap_GetTotalSize
==============
*/
unsigned __int64 Mem_NewDeleteHeap_GetTotalSize()
{
  Mem_GetNewDeleteHeap();
  return 1560576i64;
}

