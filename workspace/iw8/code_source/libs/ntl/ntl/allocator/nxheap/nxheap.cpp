/*
==============
ntl::nxheap::nxheap
==============
*/

void __fastcall ntl::nxheap::nxheap(ntl::nxheap *this)
{
  ??0nxheap@ntl@@QEAA@XZ(this);
}

/*
==============
ntl::nxheap::largest_free_block
==============
*/

unsigned __int64 __fastcall ntl::nxheap::largest_free_block(ntl::nxheap *this)
{
  return ?largest_free_block@nxheap@ntl@@QEBA_KXZ(this);
}

/*
==============
ntl::nxheap_region::nxheap_region
==============
*/

void __fastcall ntl::nxheap_region::nxheap_region(ntl::nxheap_region *this)
{
  ??0nxheap_region@ntl@@QEAA@XZ(this);
}

/*
==============
ntl::nxheap::mutation_checks
==============
*/

void __fastcall ntl::nxheap::mutation_checks(ntl::nxheap *this)
{
  ?mutation_checks@nxheap@ntl@@AEAAXXZ(this);
}

/*
==============
ntl::nxheap::exists_in_free_list
==============
*/

bool __fastcall ntl::nxheap::exists_in_free_list(ntl::nxheap *this, const ntl::nxheap_block_header *r_searchBlock)
{
  return ?exists_in_free_list@nxheap@ntl@@AEAA_NAEBVnxheap_block_header@2@@Z(this, r_searchBlock);
}

/*
==============
ntl::nxheap::is_valid_allocation
==============
*/

bool __fastcall ntl::nxheap::is_valid_allocation(ntl::nxheap *this, void *p_addr)
{
  return ?is_valid_allocation@nxheap@ntl@@QEAA_NPEAX@Z(this, p_addr);
}

/*
==============
ntl::nxheap::shutdown
==============
*/

void __fastcall ntl::nxheap::shutdown(ntl::nxheap *this)
{
  ?shutdown@nxheap@ntl@@QEAAXXZ(this);
}

/*
==============
ntl::nxheap::max_used_address
==============
*/

void *__fastcall ntl::nxheap::max_used_address(ntl::nxheap *this)
{
  return ?max_used_address@nxheap@ntl@@AEAAPEAXXZ(this);
}

/*
==============
ntl::nxheap_region::unregister_heap
==============
*/

void __fastcall ntl::nxheap_region::unregister_heap(ntl::nxheap_region *this, ntl::nxheap *r_heap)
{
  ?unregister_heap@nxheap_region@ntl@@AEAAXAEAVnxheap@2@@Z(this, r_heap);
}

/*
==============
ntl::nxheap::is_ptr_in_region
==============
*/

bool __fastcall ntl::nxheap::is_ptr_in_region(ntl::nxheap *this, const void *p_addr)
{
  return ?is_ptr_in_region@nxheap@ntl@@QEBA_NPEBX@Z(this, p_addr);
}

/*
==============
ntl::nxheap::~nxheap
==============
*/

void __fastcall ntl::nxheap::~nxheap(ntl::nxheap *this)
{
  ??1nxheap@ntl@@QEAA@XZ(this);
}

/*
==============
ntl::nxheap_region::allocate
==============
*/

void *__fastcall ntl::nxheap_region::allocate(ntl::nxheap_region *this, ntl::nxheap *r_heap, unsigned __int64 size)
{
  return ?allocate@nxheap_region@ntl@@AEAAPEAXAEAVnxheap@2@_K@Z(this, r_heap, size);
}

/*
==============
ntl::nxheap::allocation_footprint
==============
*/

unsigned __int64 __fastcall ntl::nxheap::allocation_footprint(ntl::nxheap *this, void *p_addr)
{
  return ?allocation_footprint@nxheap@ntl@@QEAA_KPEAX@Z(this, p_addr);
}

/*
==============
ntl::nxheap::clear
==============
*/

void __fastcall ntl::nxheap::clear(ntl::nxheap *this)
{
  ?clear@nxheap@ntl@@QEAAXXZ(this);
}

/*
==============
ntl::nxheap::reallocate
==============
*/

void *__fastcall ntl::nxheap::reallocate(ntl::nxheap *this, void *p_old, unsigned __int64 newSize, unsigned __int64 alignment, bool assertOnFail)
{
  return ?reallocate@nxheap@ntl@@QEAAPEAXPEAX_K1_N@Z(this, p_old, newSize, alignment, assertOnFail);
}

/*
==============
ntl::nxheap::free_block
==============
*/

void __fastcall ntl::nxheap::free_block(ntl::nxheap *this, ntl::nxheap_block_header *p_free_block)
{
  ?free_block@nxheap@ntl@@AEAAXPEAVnxheap_block_header@2@@Z(this, p_free_block);
}

/*
==============
ntl::nxheap::min_used_address
==============
*/

void *__fastcall ntl::nxheap::min_used_address(ntl::nxheap *this)
{
  return ?min_used_address@nxheap@ntl@@AEAAPEAXXZ(this);
}

/*
==============
ntl::nxheap_region::shutdown
==============
*/

void __fastcall ntl::nxheap_region::shutdown(ntl::nxheap_region *this)
{
  ?shutdown@nxheap_region@ntl@@QEAAXXZ(this);
}

/*
==============
ntl::nxheap_region::~nxheap_region
==============
*/

void __fastcall ntl::nxheap_region::~nxheap_region(ntl::nxheap_region *this)
{
  ??1nxheap_region@ntl@@QEAA@XZ(this);
}

/*
==============
ntl::nxheap_region::init
==============
*/

void __fastcall ntl::nxheap_region::init(ntl::nxheap_region *this, void *p_address, unsigned __int64 size)
{
  ?init@nxheap_region@ntl@@QEAAXPEAX_K@Z(this, p_address, size);
}

/*
==============
ntl::nxheap_region::update_min_free
==============
*/

void __fastcall ntl::nxheap_region::update_min_free(ntl::nxheap_region *this)
{
  ?update_min_free@nxheap_region@ntl@@AEAAXXZ(this);
}

/*
==============
ntl::nxheap::allocate
==============
*/

void *__fastcall ntl::nxheap::allocate(ntl::nxheap *this, unsigned __int64 size, unsigned __int64 alignment, bool assert_on_fail)
{
  return ?allocate@nxheap@ntl@@QEAAPEAX_K0_N@Z(this, size, alignment, assert_on_fail);
}

/*
==============
ntl::nxheap::debug_print_blocks
==============
*/

void __fastcall ntl::nxheap::debug_print_blocks(ntl::nxheap *this)
{
  ?debug_print_blocks@nxheap@ntl@@QEAAXXZ(this);
}

/*
==============
ntl::nxheap::largest_aligned_free_block
==============
*/

unsigned __int64 __fastcall ntl::nxheap::largest_aligned_free_block(ntl::nxheap *this, unsigned __int64 alignment)
{
  return ?largest_aligned_free_block@nxheap@ntl@@QEBA_K_K@Z(this, alignment);
}

/*
==============
ntl::nxheap::init
==============
*/

void __fastcall ntl::nxheap::init(ntl::nxheap *this, ntl::nxheap_region *r_region, ntl::nxheap::nxheap_direction dir)
{
  ?init@nxheap@ntl@@QEAAXAEAVnxheap_region@2@W4nxheap_direction@12@@Z(this, r_region, dir);
}

/*
==============
ntl::nxheap::allocation_size
==============
*/

unsigned __int64 __fastcall ntl::nxheap::allocation_size(ntl::nxheap *this, void *p_addr)
{
  return ?allocation_size@nxheap@ntl@@QEAA_KPEAX@Z(this, p_addr);
}

/*
==============
ntl::nxheap::free
==============
*/

void __fastcall ntl::nxheap::free(ntl::nxheap *this, void *p_addr)
{
  ?free@nxheap@ntl@@QEAAXPEAX@Z(this, p_addr);
}

/*
==============
ntl::nxheap_region::register_heap
==============
*/

void __fastcall ntl::nxheap_region::register_heap(ntl::nxheap_region *this, ntl::nxheap *r_heap)
{
  ?register_heap@nxheap_region@ntl@@AEAAXAEAVnxheap@2@@Z(this, r_heap);
}

/*
==============
ntl::nxheap::nxheap
==============
*/
void ntl::nxheap::nxheap(ntl::nxheap *this)
{
  this->mp_parent_region = NULL;
  this->mp_top_ptr = NULL;
  this->mp_free_list = NULL;
  this->m_num_used_blocks = 0i64;
  this->m_num_free_blocks = 0i64;
  this->m_used_mem = 0i64;
  this->m_free_fragment_mem = 0i64;
  this->m_used_mem_max = 0i64;
  this->m_free_mem_min = 0i64;
}

/*
==============
ntl::nxheap_region::nxheap_region
==============
*/
void ntl::nxheap_region::nxheap_region(ntl::nxheap_region *this)
{
  this->mp_start_ptr = NULL;
  this->mp_end_ptr = NULL;
  this->mp_heap[0] = NULL;
  this->mp_heap[1] = NULL;
}

/*
==============
ntl::nxheap::~nxheap
==============
*/
void ntl::nxheap::~nxheap(ntl::nxheap *this)
{
  ntl::nxheap::shutdown(this);
}

/*
==============
ntl::nxheap_region::~nxheap_region
==============
*/
void ntl::nxheap_region::~nxheap_region(ntl::nxheap_region *this)
{
  ntl::nxheap **mp_heap; 
  __int64 v3; 
  ntl::nxheap *v4; 

  mp_heap = this->mp_heap;
  v3 = 2i64;
  do
  {
    v4 = *mp_heap;
    if ( *mp_heap )
    {
      if ( v4->mp_parent_region )
        ntl::nxheap::shutdown(v4);
      *mp_heap = NULL;
    }
    ++mp_heap;
    --v3;
  }
  while ( v3 );
  this->mp_start_ptr = NULL;
  this->mp_end_ptr = NULL;
  this->mp_heap[0] = NULL;
  this->mp_heap[1] = NULL;
}

/*
==============
ntl::nxheap::allocate
==============
*/
__int64 ntl::nxheap::allocate(ntl::nxheap *this, unsigned __int64 size, unsigned __int64 alignment, bool assert_on_fail)
{
  unsigned __int64 v7; 
  ntl::nxheap_block_header *mp_free_list; 
  unsigned __int64 v9; 
  ntl::nxheap_block_header *v10; 
  ntl::nxheap_block_header *v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 m_alloc_size; 
  ntl::nxheap *mp_parent_heap; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  ntl::nxheap_block_header *v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  ntl::nxheap **v22; 
  unsigned __int64 v23; 
  void *mp_top_ptr; 
  ntl::nxheap_block_header *v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  __int64 v31; 
  ntl::nxheap_block_header **v32; 
  unsigned __int64 v33; 

  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 558, ASSERT_TYPE_ASSERT, "( size > 0 )", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( alignment < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 559, ASSERT_TYPE_ASSERT, "( alignment >= MINIMUM_ALIGNMENT )", (const char *)&queryFormat, "alignment >= MINIMUM_ALIGNMENT") )
    __debugbreak();
  v7 = alignment - 1;
  v33 = alignment - 1;
  if ( ((alignment - 1) & alignment) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 560, ASSERT_TYPE_ASSERT, "( ( alignment & ( alignment - 1 ) ) == 0 )", (const char *)&queryFormat, "( alignment & ( alignment - 1 ) ) == 0") )
    __debugbreak();
  if ( !this->mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 561, ASSERT_TYPE_ASSERT, "( mp_parent_region )", "Heap region hasn't been setup. Did you call reserve() on your ntl::heap_allocator?") )
    __debugbreak();
  mp_free_list = this->mp_free_list;
  v9 = (size + 3) & 0xFFFFFFFFFFFFFFFCui64;
  v32 = NULL;
  v10 = NULL;
  v11 = NULL;
  v12 = ~v7;
  if ( mp_free_list )
  {
    do
    {
      v13 = v12 & ((unsigned __int64)&mp_free_list[1] + v7);
      if ( v13 < (unsigned __int64)&mp_free_list[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 589, ASSERT_TYPE_ASSERT, "( allocStart >= blockMemStart )", (const char *)&queryFormat, "allocStart >= blockMemStart") )
        __debugbreak();
      m_alloc_size = mp_free_list->m_alloc_size;
      if ( m_alloc_size >= v9 + v13 - (_QWORD)(mp_free_list + 1) && (!v10 || v10->m_alloc_size > m_alloc_size) )
      {
        v32 = (ntl::nxheap_block_header **)v11;
        v10 = mp_free_list;
      }
      v11 = mp_free_list;
      mp_parent_heap = mp_free_list->mp_parent_heap;
      if ( (this->mp_parent_region->mp_start_ptr > mp_free_list->mp_parent_heap || mp_parent_heap >= this->mp_parent_region->mp_end_ptr) && mp_parent_heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 606, ASSERT_TYPE_ASSERT, "( (( mp_parent_region->mp_start_ptr <= p_header->mp_next_free_block ) && ( p_header->mp_next_free_block < mp_parent_region->mp_end_ptr )) || ( p_header->mp_next_free_block == 0 ) )", (const char *)&queryFormat, "(( mp_parent_region->mp_start_ptr <= p_header->mp_next_free_block ) && ( p_header->mp_next_free_block < mp_parent_region->mp_end_ptr )) || ( p_header->mp_next_free_block == 0 )") )
        __debugbreak();
      mp_free_list = (ntl::nxheap_block_header *)mp_free_list->mp_parent_heap;
      v7 = v33;
    }
    while ( mp_free_list );
    if ( v10 )
    {
      v16 = v12 & ((unsigned __int64)&v10->m_pad_size + alignment + 3);
      if ( v16 < (unsigned __int64)&v10[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 615, ASSERT_TYPE_ASSERT, "( offset_aligned_up >= offset_base )", (const char *)&queryFormat, "offset_aligned_up >= offset_base") )
        __debugbreak();
      v17 = v16 - (_QWORD)(v10 + 1);
      v18 = (ntl::nxheap_block_header *)v10->mp_parent_heap;
      if ( v32 )
        *v32 = v18;
      else
        this->mp_free_list = v18;
      v10->mp_parent_heap = this;
      if ( !this->m_num_free_blocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 628, ASSERT_TYPE_ASSERT, "( m_num_free_blocks > 0 )", (const char *)&queryFormat, "m_num_free_blocks > 0") )
        __debugbreak();
      --this->m_num_free_blocks;
      ++this->m_num_used_blocks;
      if ( this->m_free_fragment_mem < v10->m_alloc_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 632, ASSERT_TYPE_ASSERT, "( m_free_fragment_mem >= p_free_block->m_alloc_size )", (const char *)&queryFormat, "m_free_fragment_mem >= p_free_block->m_alloc_size") )
        __debugbreak();
      this->m_free_fragment_mem -= v10->m_alloc_size;
      if ( this->m_free_fragment_mem < 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 634, ASSERT_TYPE_ASSERT, "( m_free_fragment_mem >= sizeof( nxheap_block_header ) )", (const char *)&queryFormat, "m_free_fragment_mem >= sizeof( nxheap_block_header )") )
        __debugbreak();
      this->m_free_fragment_mem -= 24i64;
      this->m_used_mem += v10->m_alloc_size + 24;
      if ( v10->m_pad_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 639, ASSERT_TYPE_ASSERT, "( p_free_block->m_pad_size == 0 )", (const char *)&queryFormat, "p_free_block->m_pad_size == 0") )
        __debugbreak();
      v19 = v10->m_alloc_size;
      v20 = v17 + v9 + 24;
      if ( v19 < v17 + v9 + 52 )
      {
        if ( v19 < v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 665, ASSERT_TYPE_ASSERT, "( p_free_block->m_alloc_size >= offset_bytes )", (const char *)&queryFormat, "p_free_block->m_alloc_size >= offset_bytes") )
          __debugbreak();
        v23 = v10->m_alloc_size - v17;
        v10->m_alloc_size = v23;
        if ( v23 < v9 )
        {
          LODWORD(v31) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 667, ASSERT_TYPE_ASSERT, "( p_free_block->m_alloc_size >= size )", "%d < %d (%d)", v31, v9, v17) )
            __debugbreak();
        }
        if ( v17 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 187, ASSERT_TYPE_ASSERT, "( padding_size <= 0xffffffffui32 )", (const char *)&queryFormat, "padding_size <= UINT32_MAX") )
          __debugbreak();
        v10->m_pad_size = v17;
        if ( v17 )
        {
          if ( v17 < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 195, ASSERT_TYPE_ASSERT, "( padding_size >= sizeof( uint32_t ) )", (const char *)&queryFormat, "padding_size >= sizeof( uint32_t )") )
            __debugbreak();
          *(unsigned int *)((char *)&v10->m_pad_size + v10->m_pad_size) = v17;
        }
      }
      else
      {
        v21 = v19 - v20;
        if ( v21 < 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 648, ASSERT_TYPE_ASSERT, "( leftover_size >= ( sizeof( nxheap_block_header ) + MINIMUM_ALLOCATION ) )", (const char *)&queryFormat, "leftover_size >= ( sizeof( nxheap_block_header ) + MINIMUM_ALLOCATION )") )
          __debugbreak();
        v10->m_alloc_size = v9;
        if ( v17 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 187, ASSERT_TYPE_ASSERT, "( padding_size <= 0xffffffffui32 )", (const char *)&queryFormat, "padding_size <= UINT32_MAX") )
          __debugbreak();
        v10->m_pad_size = v17;
        if ( v17 )
        {
          if ( v17 < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 195, ASSERT_TYPE_ASSERT, "( padding_size >= sizeof( uint32_t ) )", (const char *)&queryFormat, "padding_size >= sizeof( uint32_t )") )
            __debugbreak();
          *(unsigned int *)((char *)&v10->m_pad_size + v10->m_pad_size) = v17;
        }
        v22 = (ntl::nxheap **)((char *)&v10->mp_parent_heap + v20);
        *v22 = this;
        v22[2] = NULL;
        v22[1] = (ntl::nxheap *)v21;
        ++this->m_num_used_blocks;
        ntl::nxheap::free_block(this, (ntl::nxheap_block_header *)((char *)v10 + v20));
      }
LABEL_90:
      memset_0((char *)&v10[1] + v10->m_pad_size, 85, v10->m_alloc_size);
      v10->m_magic_id = -813686815;
      ntl::nxheap::mutation_checks(this);
      return (__int64)&v10[1] + v10->m_pad_size;
    }
  }
  mp_top_ptr = this->mp_top_ptr;
  v25 = (ntl::nxheap_block_header *)ntl::nxheap_region::allocate(this->mp_parent_region, this, v9 + 24);
  v10 = v25;
  if ( v25 )
  {
    v26 = (unsigned __int64)&v25[1];
    if ( this->m_direction == DIR_BOTTOM_UP )
    {
      v27 = v12 & (v26 + v7);
      if ( v27 < v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 688, ASSERT_TYPE_ASSERT, "( offset_aligned_up >= offset_base )", (const char *)&queryFormat, "offset_aligned_up >= offset_base") )
        __debugbreak();
      v28 = v27 - v26;
      if ( !v28 || ntl::nxheap_region::allocate(this->mp_parent_region, this, v28) )
      {
        v29 = v28;
        goto LABEL_81;
      }
    }
    else
    {
      if ( v26 < (v12 & v26) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 706, ASSERT_TYPE_ASSERT, "( offset_base >= offset_aligned_down )", (const char *)&queryFormat, "offset_base >= offset_aligned_down") )
        __debugbreak();
      v28 = v26 - (v12 & v26);
      v29 = v28;
      if ( !v28 )
        goto LABEL_81;
      v10 = (ntl::nxheap_block_header *)ntl::nxheap_region::allocate(this->mp_parent_region, this, v28);
      if ( v10 )
      {
        v9 += v28;
        v28 = 0i64;
        v29 = 0i64;
LABEL_81:
        v10->mp_parent_heap = this;
        *(_QWORD *)&v10->m_magic_id = 0i64;
        v10->m_alloc_size = v9;
        if ( v29 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 187, ASSERT_TYPE_ASSERT, "( padding_size <= 0xffffffffui32 )", (const char *)&queryFormat, "padding_size <= UINT32_MAX") )
          __debugbreak();
        v10->m_pad_size = v28;
        if ( v28 )
        {
          if ( v28 < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 195, ASSERT_TYPE_ASSERT, "( padding_size >= sizeof( uint32_t ) )", (const char *)&queryFormat, "padding_size >= sizeof( uint32_t )") )
            __debugbreak();
          *(unsigned int *)((char *)&v10->m_pad_size + v10->m_pad_size) = v28;
        }
        ++this->m_num_used_blocks;
        this->m_used_mem += v28 + v9 + 24;
        goto LABEL_90;
      }
    }
    this->mp_top_ptr = mp_top_ptr;
  }
  ntl::nxheap::mutation_checks(this);
  if ( assert_on_fail )
  {
    ntl::nxheap::debug_print_blocks(this);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 755, ASSERT_TYPE_ASSERT, "( 0 )", "nxheap allocate: Failed to allocate %zu bytes, %zu alignment", v9, alignment) )
      __debugbreak();
  }
  return 0i64;
}

/*
==============
ntl::nxheap_region::allocate
==============
*/
char *ntl::nxheap_region::allocate(ntl::nxheap_region *this, ntl::nxheap *r_heap, unsigned __int64 size)
{
  ntl::nxheap::nxheap_direction m_direction; 
  int v7; 
  char *mp_top_ptr; 
  ntl::nxheap *v9; 
  char *v10; 
  char *v11; 
  bool v13; 

  m_direction = r_heap->m_direction;
  v7 = (m_direction >> 1) & 1;
  if ( this->mp_heap[v7] != r_heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 358, ASSERT_TYPE_ASSERT, "( mp_heap[index] == &r_heap )", "nxheap not currently registered") )
    __debugbreak();
  mp_top_ptr = (char *)r_heap->mp_top_ptr;
  v9 = this->mp_heap[!((m_direction >> 1) & 1)];
  v10 = &mp_top_ptr[size * (int)r_heap->m_direction];
  if ( !v9 )
  {
    if ( !v7 )
    {
      if ( v10 > this->mp_end_ptr )
        return 0i64;
      goto LABEL_7;
    }
    v13 = v10 < this->mp_start_ptr;
LABEL_15:
    if ( !v13 )
      goto LABEL_7;
    return 0i64;
  }
  v11 = (char *)v9->mp_top_ptr;
  if ( v7 )
  {
    v13 = v10 < v11;
    goto LABEL_15;
  }
  if ( v10 > v11 )
    return 0i64;
LABEL_7:
  r_heap->mp_top_ptr = v10;
  if ( (m_direction & 2) != 0 )
    return v10;
  return mp_top_ptr;
}

/*
==============
ntl::nxheap::allocation_footprint
==============
*/
__int64 ntl::nxheap::allocation_footprint(ntl::nxheap *this, void *p_addr)
{
  _DWORD *v4; 
  char *v5; 

  if ( !p_addr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 901, ASSERT_TYPE_ASSERT, "( p_addr )", (const char *)&queryFormat, "p_addr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 134, ASSERT_TYPE_ASSERT, "( p_addr )", (const char *)&queryFormat, "p_addr") )
      __debugbreak();
  }
  v4 = (char *)p_addr - 4;
  v5 = (char *)p_addr - *((unsigned int *)p_addr - 1) - 24;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 138, ASSERT_TYPE_ASSERT, "( p_ret )", (const char *)&queryFormat, "p_ret") )
    __debugbreak();
  if ( !*(_QWORD *)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 139, ASSERT_TYPE_ASSERT, "( p_ret->mp_parent_heap )", (const char *)&queryFormat, "p_ret->mp_parent_heap") )
    __debugbreak();
  if ( *((_DWORD *)v5 + 5) != *v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 140, ASSERT_TYPE_ASSERT, "( p_ret->m_pad_size == *p_pad_size )", (const char *)&queryFormat, "p_ret->m_pad_size == *p_pad_size") )
    __debugbreak();
  if ( *((_DWORD *)v5 + 4) != -813686815 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 905, ASSERT_TYPE_ASSERT, "( p_bheader->m_magic_id == HEAP_ID_VALID_ALLOCATED )", (const char *)&queryFormat, "p_bheader->m_magic_id == HEAP_ID_VALID_ALLOCATED") )
    __debugbreak();
  if ( this != *(ntl::nxheap **)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 906, ASSERT_TYPE_ASSERT, "( this == p_bheader->mp_parent_heap )", "Allocation was made on a different heap") )
    __debugbreak();
  return *((_QWORD *)v5 + 1) + *((unsigned int *)v5 + 5) + 24i64;
}

/*
==============
ntl::nxheap::allocation_size
==============
*/
unsigned __int64 ntl::nxheap::allocation_size(ntl::nxheap *this, void *p_addr)
{
  _DWORD *v4; 
  char *v5; 

  if ( !p_addr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 918, ASSERT_TYPE_ASSERT, "( p_addr )", (const char *)&queryFormat, "p_addr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 134, ASSERT_TYPE_ASSERT, "( p_addr )", (const char *)&queryFormat, "p_addr") )
      __debugbreak();
  }
  v4 = (char *)p_addr - 4;
  v5 = (char *)p_addr - *((unsigned int *)p_addr - 1) - 24;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 138, ASSERT_TYPE_ASSERT, "( p_ret )", (const char *)&queryFormat, "p_ret") )
    __debugbreak();
  if ( !*(_QWORD *)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 139, ASSERT_TYPE_ASSERT, "( p_ret->mp_parent_heap )", (const char *)&queryFormat, "p_ret->mp_parent_heap") )
    __debugbreak();
  if ( *((_DWORD *)v5 + 5) != *v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 140, ASSERT_TYPE_ASSERT, "( p_ret->m_pad_size == *p_pad_size )", (const char *)&queryFormat, "p_ret->m_pad_size == *p_pad_size") )
    __debugbreak();
  if ( *((_DWORD *)v5 + 4) != -813686815 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 922, ASSERT_TYPE_ASSERT, "( p_bheader->m_magic_id == HEAP_ID_VALID_ALLOCATED )", (const char *)&queryFormat, "p_bheader->m_magic_id == HEAP_ID_VALID_ALLOCATED") )
    __debugbreak();
  if ( this != *(ntl::nxheap **)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 923, ASSERT_TYPE_ASSERT, "( this == p_bheader->mp_parent_heap )", "Allocation was made on a different heap") )
    __debugbreak();
  return *((_QWORD *)v5 + 1);
}

/*
==============
ntl::nxheap::clear
==============
*/
void ntl::nxheap::clear(ntl::nxheap *this)
{
  ntl::nxheap_region *mp_parent_region; 
  bool v2; 
  void *mp_start_ptr; 

  mp_parent_region = this->mp_parent_region;
  if ( this->mp_parent_region )
  {
    v2 = this->m_direction == DIR_BOTTOM_UP;
    this->mp_free_list = NULL;
    if ( v2 )
      mp_start_ptr = mp_parent_region->mp_start_ptr;
    else
      mp_start_ptr = mp_parent_region->mp_end_ptr;
    this->mp_top_ptr = mp_start_ptr;
    this->m_num_used_blocks = 0i64;
    this->m_num_free_blocks = 0i64;
    this->m_used_mem = 0i64;
    this->m_free_fragment_mem = 0i64;
  }
}

/*
==============
ntl::nxheap::debug_print_blocks
==============
*/
void ntl::nxheap::debug_print_blocks(ntl::nxheap *this)
{
  const void **p_mp_top_ptr; 
  ntl::nxheap_region *mp_parent_region; 
  const void *mp_end_ptr; 
  ntl::nxheap_region *v5; 
  char *mp_start_ptr; 
  unsigned __int64 m_free_mem_min; 
  ntl::nxheap *v8; 
  bool v9; 
  ntl::nxheap_region *v10; 
  ntl::nxheap *v11; 
  void *v12; 
  void *mp_top_ptr; 
  char *v14; 
  int v15; 
  ntl::nxheap_region *v16; 
  ntl::nxheap *v17; 
  ntl::nxheap_region *v18; 
  ntl::nxheap *v19; 
  _BYTE *v20; 
  _BYTE *v21; 
  __int64 v22; 

  if ( !this->mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1416, ASSERT_TYPE_ASSERT, "( mp_parent_region )", (const char *)&queryFormat, "mp_parent_region") )
    __debugbreak();
  p_mp_top_ptr = (const void **)&this->mp_top_ptr;
  mp_parent_region = this->mp_parent_region;
  if ( this->m_direction == DIR_BOTTOM_UP )
  {
    mp_end_ptr = *p_mp_top_ptr;
    v5 = this->mp_parent_region;
  }
  else
  {
    mp_end_ptr = mp_parent_region->mp_end_ptr;
    v5 = (ntl::nxheap_region *)&this->mp_top_ptr;
    mp_parent_region = (ntl::nxheap_region *)&this->mp_top_ptr;
  }
  mp_start_ptr = (char *)mp_parent_region->mp_start_ptr;
  Core_PrintInfo_Unchecked("\nHeap [ start >= 0x%p, end < 0x%p ] Dump:\n", v5->mp_start_ptr, mp_end_ptr);
  Core_PrintInfo_Unchecked("[ Used blocks: %zu, Used current bytes : %zu, Max used bytes : %zu ]\n", this->m_num_used_blocks, this->m_used_mem, this->m_used_mem_max);
  Core_PrintInfo_Unchecked("[ Free fragment blocks: %zu, Free frag bytes : %zu ]\n", this->m_num_free_blocks, this->m_free_fragment_mem);
  m_free_mem_min = this->m_free_mem_min;
  v8 = this->mp_parent_region->mp_heap[0];
  v9 = v8 == NULL;
  v10 = (ntl::nxheap_region *)&v8->mp_top_ptr;
  v11 = this->mp_parent_region->mp_heap[1];
  if ( v9 )
    v10 = this->mp_parent_region;
  v12 = v10->mp_start_ptr;
  if ( v11 )
    mp_top_ptr = v11->mp_top_ptr;
  else
    mp_top_ptr = this->mp_parent_region->mp_end_ptr;
  if ( mp_top_ptr < v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  Core_PrintInfo_Unchecked("[ Total free bytes: %zu, Min free bytes : %zu ]\n", (size_t)mp_top_ptr + this->m_free_fragment_mem - (_QWORD)v12, m_free_mem_min);
  for ( ; mp_start_ptr; mp_start_ptr += *((_QWORD *)mp_start_ptr + 1) + *((unsigned int *)mp_start_ptr + 5) + 24 )
  {
    if ( this->m_direction == DIR_BOTTOM_UP )
      v14 = (char *)*p_mp_top_ptr;
    else
      v14 = (char *)this->mp_parent_region->mp_end_ptr;
    if ( mp_start_ptr == v14 )
      break;
    v15 = *((_DWORD *)mp_start_ptr + 4);
    if ( v15 == -563667773 )
    {
      Core_PrintInfo_Unchecked("\t[ FREED BLOCK   @ 0x%p : %8zu bytes + %3zu bytes overhead ]\n", &mp_start_ptr[*((unsigned int *)mp_start_ptr + 5) + 24], *((_QWORD *)mp_start_ptr + 1), *((unsigned int *)mp_start_ptr + 5) + 24i64);
    }
    else if ( v15 == -813686815 )
    {
      Core_PrintInfo_Unchecked("\t[ ALLOCED BLOCK @ 0x%p : %8zu bytes + %3zu bytes overhead ]\n", &mp_start_ptr[*((unsigned int *)mp_start_ptr + 5) + 24], *((_QWORD *)mp_start_ptr + 1), *((unsigned int *)mp_start_ptr + 5) + 24i64);
    }
    else
    {
      LODWORD(v22) = *((_DWORD *)mp_start_ptr + 4);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1444, ASSERT_TYPE_ASSERT, "( 0 )", "Bad block ID (%08x)", v22) )
        __debugbreak();
    }
  }
  v16 = this->mp_parent_region;
  v17 = this->mp_parent_region->mp_heap[0];
  v9 = v17 == NULL;
  v18 = (ntl::nxheap_region *)&v17->mp_top_ptr;
  v19 = this->mp_parent_region->mp_heap[1];
  if ( v9 )
    v18 = this->mp_parent_region;
  v20 = v18->mp_start_ptr;
  if ( v19 )
    v21 = v19->mp_top_ptr;
  else
    v21 = v16->mp_end_ptr;
  if ( v21 < v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  Core_PrintInfo_Unchecked("\t[ FREE REGION   @ 0x%p : %8zu bytes ]\n", *p_mp_top_ptr, v21 - v20);
  Core_PrintInfo_Unchecked("\n\n");
}

/*
==============
ntl::nxheap::exists_in_free_list
==============
*/
char ntl::nxheap::exists_in_free_list(ntl::nxheap *this, const ntl::nxheap_block_header *r_searchBlock)
{
  ntl::nxheap_block_header *mp_free_list; 

  mp_free_list = this->mp_free_list;
  if ( !mp_free_list )
    return 0;
  while ( r_searchBlock != mp_free_list )
  {
    if ( r_searchBlock > mp_free_list && r_searchBlock < (ntl::nxheap_block_header *)((char *)&mp_free_list[1] + mp_free_list->m_alloc_size + mp_free_list->m_pad_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1279, ASSERT_TYPE_ASSERT, "( &r_searchBlock >= p_header->next_block_header() )", (const char *)&queryFormat, "&r_searchBlock >= p_header->next_block_header()") )
      __debugbreak();
    mp_free_list = (ntl::nxheap_block_header *)mp_free_list->mp_parent_heap;
    if ( !mp_free_list )
      return 0;
  }
  return 1;
}

/*
==============
ntl::nxheap::free
==============
*/
void ntl::nxheap::free(ntl::nxheap *this, void *p_addr)
{
  _DWORD *v4; 
  ntl::nxheap_block_header *v5; 

  if ( !p_addr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 841, ASSERT_TYPE_ASSERT, "( p_addr )", (const char *)&queryFormat, "p_addr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 134, ASSERT_TYPE_ASSERT, "( p_addr )", (const char *)&queryFormat, "p_addr") )
      __debugbreak();
  }
  v4 = (char *)p_addr - 4;
  v5 = (ntl::nxheap_block_header *)((char *)p_addr - *((unsigned int *)p_addr - 1) - 24);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 138, ASSERT_TYPE_ASSERT, "( p_ret )", (const char *)&queryFormat, "p_ret") )
    __debugbreak();
  if ( !v5->mp_parent_heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 139, ASSERT_TYPE_ASSERT, "( p_ret->mp_parent_heap )", (const char *)&queryFormat, "p_ret->mp_parent_heap") )
    __debugbreak();
  if ( v5->m_pad_size != *v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 140, ASSERT_TYPE_ASSERT, "( p_ret->m_pad_size == *p_pad_size )", (const char *)&queryFormat, "p_ret->m_pad_size == *p_pad_size") )
    __debugbreak();
  if ( this != v5->mp_parent_heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 844, ASSERT_TYPE_ASSERT, "( this == p_bheader->mp_parent_heap )", (const char *)&queryFormat, "this == p_bheader->mp_parent_heap") )
    __debugbreak();
  if ( v5->m_magic_id == -563667773 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 846, ASSERT_TYPE_ASSERT, "( p_bheader->m_magic_id != HEAP_ID_VALID_FREED )", "Freeing Block Twice!") )
    __debugbreak();
  if ( v5->m_magic_id != -813686815 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 847, ASSERT_TYPE_ASSERT, "( p_bheader->m_magic_id == HEAP_ID_VALID_ALLOCATED )", "Freeing Corrupt Block") )
    __debugbreak();
  ntl::nxheap::free_block(v5->mp_parent_heap, v5);
  ntl::nxheap::mutation_checks(this);
}

/*
==============
ntl::nxheap::free_block
==============
*/
void ntl::nxheap::free_block(ntl::nxheap *this, ntl::nxheap_block_header *p_free_block)
{
  ntl::nxheap_block_header *v2; 
  size_t m_alloc_size; 
  ntl::nxheap_block_header *v5; 
  ntl::nxheap_block_header *v6; 
  ntl::nxheap_block_header *mp_free_list; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  ntl::nxheap::nxheap_direction m_direction; 
  char *mp_top_ptr; 
  ntl::nxheap::nxheap_direction v12; 
  bool v13; 
  int v14; 
  ntl::nxheap_block_header *v15; 

  v2 = p_free_block;
  if ( this->mp_parent_region )
  {
    if ( !p_free_block && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1051, ASSERT_TYPE_ASSERT, "( p_free_block )", (const char *)&queryFormat, "p_free_block") )
      __debugbreak();
    v2->m_alloc_size += v2->m_pad_size;
    m_alloc_size = v2->m_alloc_size;
    v5 = NULL;
    v2->m_pad_size = 0;
    v6 = NULL;
    mp_free_list = this->mp_free_list;
    memset_0(&v2[1], 187, m_alloc_size);
    ++this->m_num_free_blocks;
    this->m_free_fragment_mem += v2->m_alloc_size + 24;
    if ( !this->m_num_used_blocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1073, ASSERT_TYPE_ASSERT, "( m_num_used_blocks > 0 )", (const char *)&queryFormat, "m_num_used_blocks > 0") )
      __debugbreak();
    --this->m_num_used_blocks;
    if ( this->m_used_mem < v2->m_alloc_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1075, ASSERT_TYPE_ASSERT, "( m_used_mem >= p_free_block->m_alloc_size )", (const char *)&queryFormat, "m_used_mem >= p_free_block->m_alloc_size") )
      __debugbreak();
    this->m_used_mem -= v2->m_alloc_size;
    if ( this->m_used_mem < 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1077, ASSERT_TYPE_ASSERT, "( m_used_mem >= sizeof( nxheap_block_header ) )", (const char *)&queryFormat, "m_used_mem >= sizeof( nxheap_block_header )") )
      __debugbreak();
    for ( this->m_used_mem -= 24i64; mp_free_list; mp_free_list = (ntl::nxheap_block_header *)mp_free_list->mp_parent_heap )
    {
      if ( mp_free_list >= v2 )
        break;
      v6 = v5;
      v5 = mp_free_list;
    }
    v2->mp_parent_heap = (ntl::nxheap *)mp_free_list;
    if ( mp_free_list )
    {
      v8 = v2->m_alloc_size;
      if ( (ntl::nxheap_block_header *)((char *)&v2[1] + v8 + v2->m_pad_size) == mp_free_list )
      {
        v2->mp_parent_heap = mp_free_list->mp_parent_heap;
        v2->m_alloc_size = mp_free_list->m_alloc_size + mp_free_list->m_pad_size + v8 + 24;
        if ( !this->m_num_free_blocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1105, ASSERT_TYPE_ASSERT, "( m_num_free_blocks > 0 )", (const char *)&queryFormat, "m_num_free_blocks > 0") )
          __debugbreak();
        --this->m_num_free_blocks;
        mp_free_list->mp_parent_heap = (ntl::nxheap *)0xBBBBBBBBBBBBBBBBi64;
        mp_free_list->m_alloc_size = 0xBBBBBBBBBBBBBBBBui64;
        *(_QWORD *)&mp_free_list->m_magic_id = 0xBBBBBBBBBBBBBBBBui64;
      }
    }
    if ( v5 )
    {
      v9 = v5->m_alloc_size;
      if ( (ntl::nxheap_block_header *)((char *)&v5[1] + v9 + v5->m_pad_size) == v2 )
      {
        v5->m_alloc_size = v9 + v2->m_pad_size + v2->m_alloc_size + 24;
        v5->mp_parent_heap = v2->mp_parent_heap;
        if ( !this->m_num_free_blocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1122, ASSERT_TYPE_ASSERT, "( m_num_free_blocks > 0 )", (const char *)&queryFormat, "m_num_free_blocks > 0") )
          __debugbreak();
        --this->m_num_free_blocks;
        v2->mp_parent_heap = (ntl::nxheap *)0xBBBBBBBBBBBBBBBBi64;
        v2->m_alloc_size = 0xBBBBBBBBBBBBBBBBui64;
        *(_QWORD *)&v2->m_magic_id = 0xBBBBBBBBBBBBBBBBui64;
        v2 = v5;
        v5 = v6;
      }
      else
      {
        v5->mp_parent_heap = (ntl::nxheap *)v2;
      }
    }
    else
    {
      this->mp_free_list = v2;
    }
    m_direction = this->m_direction;
    if ( m_direction == DIR_BOTTOM_UP )
    {
      if ( mp_free_list )
        goto LABEL_53;
      mp_top_ptr = (char *)this->mp_top_ptr;
      if ( mp_top_ptr != (char *)&v2[1] + v2->m_alloc_size + v2->m_pad_size )
        goto LABEL_53;
      if ( v5 )
      {
        v5->mp_parent_heap = NULL;
        v12 = this->m_direction;
        mp_top_ptr = (char *)this->mp_top_ptr;
      }
      else
      {
        this->mp_free_list = NULL;
        v12 = DIR_BOTTOM_UP;
      }
      v13 = this->m_num_free_blocks == 0;
      this->mp_top_ptr = &mp_top_ptr[-((int)v12 * (v2->m_pad_size + v2->m_alloc_size + 24))];
      if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1168, ASSERT_TYPE_ASSERT, "( m_num_free_blocks > 0 )", (const char *)&queryFormat, "m_num_free_blocks > 0") )
        __debugbreak();
      --this->m_num_free_blocks;
      if ( this->m_free_fragment_mem >= v2->m_alloc_size )
      {
LABEL_52:
        this->m_free_fragment_mem += -24i64 - v2->m_alloc_size;
        v2->mp_parent_heap = (ntl::nxheap *)0xBBBBBBBBBBBBBBBBi64;
        v2->m_alloc_size = 0xBBBBBBBBBBBBBBBBui64;
        *(_QWORD *)&v2->m_magic_id = 0xBBBBBBBBBBBBBBBBui64;
LABEL_53:
        v2->m_magic_id = -563667773;
        return;
      }
      v14 = 1172;
    }
    else
    {
      if ( m_direction != DIR_TOP_DOWN )
        goto LABEL_53;
      if ( v5 )
        goto LABEL_53;
      v15 = (ntl::nxheap_block_header *)this->mp_top_ptr;
      if ( v15 != v2 )
        goto LABEL_53;
      this->mp_top_ptr = (char *)&v15[1] + v2->m_pad_size + v2->m_alloc_size;
      this->mp_free_list = (ntl::nxheap_block_header *)v2->mp_parent_heap;
      if ( !this->m_num_free_blocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1190, ASSERT_TYPE_ASSERT, "( m_num_free_blocks > 0 )", (const char *)&queryFormat, "m_num_free_blocks > 0") )
        __debugbreak();
      --this->m_num_free_blocks;
      if ( this->m_free_fragment_mem >= v2->m_alloc_size )
        goto LABEL_52;
      v14 = 1194;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", v14, ASSERT_TYPE_ASSERT, "( m_free_fragment_mem >= p_free_block->m_alloc_size )", (const char *)&queryFormat, "m_free_fragment_mem >= p_free_block->m_alloc_size") )
      __debugbreak();
    goto LABEL_52;
  }
}

/*
==============
ntl::nxheap::init
==============
*/
void ntl::nxheap::init(ntl::nxheap *this, ntl::nxheap_region *r_region, ntl::nxheap::nxheap_direction dir)
{
  bool v6; 
  ntl::nxheap *v7; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v9; 
  _BYTE *mp_start_ptr; 
  _BYTE *mp_top_ptr; 
  __int64 v12; 
  __int64 v13; 
  void *mp_end_ptr; 

  if ( this->mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 483, ASSERT_TYPE_ASSERT, "( mp_parent_region == 0 )", (const char *)&queryFormat, "mp_parent_region == NULL") )
    __debugbreak();
  v6 = this->mp_top_ptr == NULL;
  this->mp_parent_region = r_region;
  this->m_direction = dir;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 487, ASSERT_TYPE_ASSERT, "( mp_top_ptr == 0 )", (const char *)&queryFormat, "mp_top_ptr == NULL") )
    __debugbreak();
  if ( this->mp_free_list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 488, ASSERT_TYPE_ASSERT, "( mp_free_list == 0 )", (const char *)&queryFormat, "mp_free_list == NULL") )
    __debugbreak();
  if ( this->m_num_used_blocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 490, ASSERT_TYPE_ASSERT, "( m_num_used_blocks == 0 )", (const char *)&queryFormat, "m_num_used_blocks == 0") )
    __debugbreak();
  if ( this->m_num_free_blocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 491, ASSERT_TYPE_ASSERT, "( m_num_free_blocks == 0 )", (const char *)&queryFormat, "m_num_free_blocks == 0") )
    __debugbreak();
  if ( this->m_used_mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 492, ASSERT_TYPE_ASSERT, "( m_used_mem == 0 )", (const char *)&queryFormat, "m_used_mem == 0") )
    __debugbreak();
  if ( this->m_free_fragment_mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 493, ASSERT_TYPE_ASSERT, "( m_free_fragment_mem == 0 )", (const char *)&queryFormat, "m_free_fragment_mem == 0") )
    __debugbreak();
  if ( this->m_used_mem_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 494, ASSERT_TYPE_ASSERT, "( m_used_mem_max == 0 )", (const char *)&queryFormat, "m_used_mem_max == 0") )
    __debugbreak();
  if ( this->m_free_mem_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 495, ASSERT_TYPE_ASSERT, "( m_free_mem_min == 0 )", (const char *)&queryFormat, "m_free_mem_min == 0") )
    __debugbreak();
  v7 = r_region->mp_heap[0];
  if ( v7 )
    p_mp_top_ptr = (ntl::nxheap_region *)&v7->mp_top_ptr;
  else
    p_mp_top_ptr = r_region;
  v9 = r_region->mp_heap[1];
  mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
  if ( v9 )
    mp_top_ptr = v9->mp_top_ptr;
  else
    mp_top_ptr = r_region->mp_end_ptr;
  if ( mp_top_ptr < mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  v12 = (this->m_direction >> 1) & 1;
  this->m_free_mem_min = mp_top_ptr - mp_start_ptr;
  v13 = (unsigned int)v12;
  if ( r_region->mp_heap[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 318, ASSERT_TYPE_ASSERT, "( mp_heap[index] == 0 )", "Attempt to register multiple Allocators") )
    __debugbreak();
  r_region->mp_heap[v13] = this;
  if ( this->m_direction == DIR_BOTTOM_UP )
    mp_end_ptr = r_region->mp_start_ptr;
  else
    mp_end_ptr = r_region->mp_end_ptr;
  this->mp_top_ptr = mp_end_ptr;
}

/*
==============
ntl::nxheap_region::init
==============
*/
void ntl::nxheap_region::init(ntl::nxheap_region *this, void *p_address, unsigned __int64 size)
{
  if ( !p_address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 270, ASSERT_TYPE_ASSERT, "( p_address )", (const char *)&queryFormat, "p_address") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 271, ASSERT_TYPE_ASSERT, "( size )", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( this->mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 272, ASSERT_TYPE_ASSERT, "( mp_start_ptr == 0 )", (const char *)&queryFormat, "mp_start_ptr == NULL") )
    __debugbreak();
  if ( this->mp_end_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 273, ASSERT_TYPE_ASSERT, "( mp_end_ptr == 0 )", (const char *)&queryFormat, "mp_end_ptr == NULL") )
    __debugbreak();
  this->mp_start_ptr = p_address;
  this->mp_end_ptr = (char *)p_address + size;
  if ( this->mp_heap[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 279, ASSERT_TYPE_ASSERT, "( mp_heap[REGION_DIR_BOTTOM_UP] == 0 )", (const char *)&queryFormat, "mp_heap[REGION_DIR_BOTTOM_UP] == NULL") )
    __debugbreak();
  if ( this->mp_heap[1] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 280, ASSERT_TYPE_ASSERT, "( mp_heap[REGION_DIR_TOP_DOWN] == 0 )", (const char *)&queryFormat, "mp_heap[REGION_DIR_TOP_DOWN] == NULL") )
      __debugbreak();
  }
}

/*
==============
ntl::nxheap::is_ptr_in_region
==============
*/
bool ntl::nxheap::is_ptr_in_region(ntl::nxheap *this, const void *p_addr)
{
  ntl::nxheap_region *mp_parent_region; 

  mp_parent_region = this->mp_parent_region;
  return this->mp_parent_region && p_addr >= mp_parent_region->mp_start_ptr && p_addr < mp_parent_region->mp_end_ptr;
}

/*
==============
ntl::nxheap::is_valid_allocation
==============
*/
char ntl::nxheap::is_valid_allocation(ntl::nxheap *this, void *p_addr)
{
  _DWORD *v4; 
  char *v5; 

  if ( !p_addr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 861, ASSERT_TYPE_ASSERT, "( p_addr )", (const char *)&queryFormat, "p_addr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 134, ASSERT_TYPE_ASSERT, "( p_addr )", (const char *)&queryFormat, "p_addr") )
      __debugbreak();
  }
  v4 = (char *)p_addr - 4;
  v5 = (char *)p_addr - *((unsigned int *)p_addr - 1) - 24;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 138, ASSERT_TYPE_ASSERT, "( p_ret )", (const char *)&queryFormat, "p_ret") )
    __debugbreak();
  if ( !*(_QWORD *)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 139, ASSERT_TYPE_ASSERT, "( p_ret->mp_parent_heap )", (const char *)&queryFormat, "p_ret->mp_parent_heap") )
    __debugbreak();
  if ( *((_DWORD *)v5 + 5) != *v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 140, ASSERT_TYPE_ASSERT, "( p_ret->m_pad_size == *p_pad_size )", (const char *)&queryFormat, "p_ret->m_pad_size == *p_pad_size") )
    __debugbreak();
  if ( *((_DWORD *)v5 + 4) != -813686815 )
    return 0;
  if ( this != *(ntl::nxheap **)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 868, ASSERT_TYPE_ASSERT, "( this == p_bheader->mp_parent_heap )", "Allocation was made on a different heap") )
    __debugbreak();
  return 1;
}

/*
==============
ntl::nxheap::largest_aligned_free_block
==============
*/
char *ntl::nxheap::largest_aligned_free_block(ntl::nxheap *this, unsigned __int64 alignment)
{
  ntl::nxheap *v3; 
  unsigned __int64 v4; 
  ntl::nxheap_block_header *mp_free_list; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 m_alloc_size; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  char *mp_top_ptr; 
  char *mp_end_ptr; 
  unsigned __int64 v14; 
  char *v15; 

  v3 = this;
  if ( alignment < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 974, ASSERT_TYPE_ASSERT, "( alignment >= MINIMUM_ALIGNMENT )", (const char *)&queryFormat, "alignment >= MINIMUM_ALIGNMENT") )
    __debugbreak();
  v4 = alignment - 1;
  if ( ((alignment - 1) & alignment) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 975, ASSERT_TYPE_ASSERT, "( ( alignment & ( alignment - 1 ) ) == 0 )", (const char *)&queryFormat, "( alignment & ( alignment - 1 ) ) == 0") )
    __debugbreak();
  mp_free_list = v3->mp_free_list;
  v6 = 0i64;
  v7 = ~v4;
  if ( mp_free_list )
  {
    do
    {
      v8 = v7 & ((unsigned __int64)&mp_free_list[1] + v4);
      if ( v8 < (unsigned __int64)&mp_free_list[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 992, ASSERT_TYPE_ASSERT, "( allocStart >= blockMemStart )", (const char *)&queryFormat, "allocStart >= blockMemStart") )
        __debugbreak();
      m_alloc_size = mp_free_list->m_alloc_size;
      v10 = v8 - (_QWORD)(mp_free_list + 1);
      if ( m_alloc_size > v10 )
      {
        v11 = m_alloc_size - v10;
        if ( v11 > v6 )
          v6 = v11;
      }
      mp_free_list = (ntl::nxheap_block_header *)mp_free_list->mp_parent_heap;
    }
    while ( mp_free_list );
    v3 = this;
  }
  if ( v3->mp_parent_region == (ntl::nxheap_region *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1008, ASSERT_TYPE_ASSERT, "( mp_parent_region->mp_heap )", (const char *)&queryFormat, "mp_parent_region->mp_heap") )
    __debugbreak();
  if ( v3->mp_parent_region->mp_heap[0] != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1009, ASSERT_TYPE_ASSERT, "( mp_parent_region->mp_heap[0] == this )", (const char *)&queryFormat, "mp_parent_region->mp_heap[0] == this") )
    __debugbreak();
  if ( v3->mp_parent_region->mp_heap[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1010, ASSERT_TYPE_ASSERT, "( mp_parent_region->mp_heap[1] == nullptr )", (const char *)&queryFormat, "mp_parent_region->mp_heap[1] == nullptr") )
    __debugbreak();
  mp_top_ptr = (char *)v3->mp_top_ptr;
  mp_end_ptr = (char *)v3->mp_parent_region->mp_end_ptr;
  if ( mp_end_ptr < mp_top_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1015, ASSERT_TYPE_ASSERT, "( endPtr >= startPtr )", (const char *)&queryFormat, "endPtr >= startPtr") )
    __debugbreak();
  v14 = v7 & (unsigned __int64)&mp_top_ptr[v4 + 24];
  if ( (unsigned __int64)mp_end_ptr >= v14 )
  {
    v15 = &mp_end_ptr[-v14];
    if ( (unsigned __int64)v15 > v6 )
      return v15;
  }
  return (char *)v6;
}

/*
==============
ntl::nxheap::largest_free_block
==============
*/
unsigned __int64 ntl::nxheap::largest_free_block(ntl::nxheap *this)
{
  ntl::nxheap_block_header *mp_free_list; 
  unsigned __int64 m_alloc_size; 
  unsigned __int64 v3; 
  ntl::nxheap_region *mp_parent_region; 
  ntl::nxheap *v5; 
  bool v6; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v8; 
  _BYTE *mp_start_ptr; 
  _BYTE *mp_top_ptr; 
  unsigned __int64 v11; 

  mp_free_list = this->mp_free_list;
  m_alloc_size = 0i64;
  while ( mp_free_list )
  {
    v3 = m_alloc_size;
    m_alloc_size = mp_free_list->m_alloc_size;
    mp_free_list = (ntl::nxheap_block_header *)mp_free_list->mp_parent_heap;
    if ( m_alloc_size <= v3 )
      m_alloc_size = v3;
  }
  mp_parent_region = this->mp_parent_region;
  v5 = this->mp_parent_region->mp_heap[0];
  v6 = v5 == NULL;
  p_mp_top_ptr = (ntl::nxheap_region *)&v5->mp_top_ptr;
  v8 = mp_parent_region->mp_heap[1];
  if ( v6 )
    p_mp_top_ptr = mp_parent_region;
  mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
  if ( v8 )
    mp_top_ptr = v8->mp_top_ptr;
  else
    mp_top_ptr = mp_parent_region->mp_end_ptr;
  if ( mp_top_ptr < mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  v11 = mp_top_ptr - mp_start_ptr;
  if ( v11 > 0x18 && v11 - 24 > m_alloc_size )
    return v11 - 24;
  return m_alloc_size;
}

/*
==============
ntl::nxheap::max_used_address
==============
*/
void *ntl::nxheap::max_used_address(ntl::nxheap *this)
{
  if ( this->m_direction == DIR_BOTTOM_UP )
    return this->mp_top_ptr;
  else
    return this->mp_parent_region->mp_end_ptr;
}

/*
==============
ntl::nxheap::min_used_address
==============
*/
void *ntl::nxheap::min_used_address(ntl::nxheap *this)
{
  if ( this->m_direction == DIR_BOTTOM_UP )
    return this->mp_parent_region->mp_start_ptr;
  else
    return this->mp_top_ptr;
}

/*
==============
ntl::nxheap::mutation_checks
==============
*/
void ntl::nxheap::mutation_checks(ntl::nxheap *this)
{
  ntl::nxheap_region *mp_parent_region; 
  ntl::nxheap *v3; 
  ntl::nxheap *v4; 
  ntl::nxheap_region *p_mp_top_ptr; 
  _BYTE *mp_start_ptr; 
  _BYTE *mp_top_ptr; 
  ntl::nxheap *v8; 
  signed __int64 v9; 
  unsigned __int64 v10; 
  ntl::nxheap *v11; 
  unsigned __int64 v12; 
  unsigned __int64 m_used_mem; 

  if ( !this->mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 1396, ASSERT_TYPE_ASSERT, "( mp_parent_region )", (const char *)&queryFormat, "mp_parent_region") )
    __debugbreak();
  mp_parent_region = this->mp_parent_region;
  v3 = this->mp_parent_region->mp_heap[0];
  v4 = this->mp_parent_region->mp_heap[1];
  p_mp_top_ptr = (ntl::nxheap_region *)&v3->mp_top_ptr;
  if ( !v3 )
    p_mp_top_ptr = this->mp_parent_region;
  mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
  if ( v4 )
    mp_top_ptr = v4->mp_top_ptr;
  else
    mp_top_ptr = mp_parent_region->mp_end_ptr;
  if ( mp_top_ptr < mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  v8 = mp_parent_region->mp_heap[0];
  v9 = mp_top_ptr - mp_start_ptr;
  if ( v8 )
  {
    v10 = v9 + v8->m_free_fragment_mem;
    if ( v10 < v8->m_free_mem_min )
      v8->m_free_mem_min = v10;
  }
  v11 = mp_parent_region->mp_heap[1];
  if ( v11 )
  {
    v12 = v9 + v11->m_free_fragment_mem;
    if ( v12 < v11->m_free_mem_min )
      v11->m_free_mem_min = v12;
  }
  m_used_mem = this->m_used_mem;
  if ( m_used_mem > this->m_used_mem_max )
    this->m_used_mem_max = m_used_mem;
}

/*
==============
ntl::nxheap::reallocate
==============
*/
void *ntl::nxheap::reallocate(ntl::nxheap *this, void *p_old, unsigned __int64 newSize, unsigned __int64 alignment, bool assertOnFail)
{
  unsigned __int64 v9; 
  __int64 v10; 
  char *v11; 
  unsigned __int64 v12; 
  void *result; 

  if ( alignment < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 774, ASSERT_TYPE_ASSERT, "( alignment >= MINIMUM_ALIGNMENT )", (const char *)&queryFormat, "alignment >= MINIMUM_ALIGNMENT") )
    __debugbreak();
  if ( !newSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 775, ASSERT_TYPE_ASSERT, "( newSize )", (const char *)&queryFormat, "newSize") )
    __debugbreak();
  v9 = 0i64;
  if ( p_old )
  {
    v10 = *((unsigned int *)p_old - 1);
    v11 = (char *)p_old - v10 - 24;
    if ( (char *)p_old - v10 == (_BYTE *)24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 138, ASSERT_TYPE_ASSERT, "( p_ret )", (const char *)&queryFormat, "p_ret") )
      __debugbreak();
    if ( !*(_QWORD *)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 139, ASSERT_TYPE_ASSERT, "( p_ret->mp_parent_heap )", (const char *)&queryFormat, "p_ret->mp_parent_heap") )
      __debugbreak();
    if ( *((_DWORD *)v11 + 5) != *((_DWORD *)p_old - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 140, ASSERT_TYPE_ASSERT, "( p_ret->m_pad_size == *p_pad_size )", (const char *)&queryFormat, "p_ret->m_pad_size == *p_pad_size") )
      __debugbreak();
    if ( *((_DWORD *)v11 + 4) != -813686815 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 782, ASSERT_TYPE_ASSERT, "( p_old_block->m_magic_id == HEAP_ID_VALID_ALLOCATED )", "Reallocing Corrupt Block") )
      __debugbreak();
    if ( *(ntl::nxheap **)v11 != this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 783, ASSERT_TYPE_ASSERT, "( p_old_block->mp_parent_heap == this )", (const char *)&queryFormat, "p_old_block->mp_parent_heap == this") )
      __debugbreak();
    v9 = *((_QWORD *)v11 + 1);
  }
  if ( v9 == newSize )
  {
    v12 = (unsigned __int64)p_old;
    if ( !p_old && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 797, ASSERT_TYPE_ASSERT, "( p_ret )", (const char *)&queryFormat, "p_ret") )
      __debugbreak();
  }
  else
  {
    result = ntl::nxheap::allocate(this, newSize, alignment, assertOnFail);
    v12 = (unsigned __int64)result;
    if ( !result )
      return result;
    if ( v9 < newSize )
      newSize = v9;
    if ( newSize )
      memcpy_0(result, p_old, newSize);
    if ( p_old )
      ntl::nxheap::free(this, p_old);
  }
  if ( (v12 & (alignment - 1)) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 829, ASSERT_TYPE_ASSERT, "( ( reinterpret_cast< uintptr_t >( p_ret ) & align_minus_one ) == 0 )", (const char *)&queryFormat, "( reinterpret_cast< uintptr_t >( p_ret ) & align_minus_one ) == 0") )
    __debugbreak();
  return (void *)v12;
}

/*
==============
ntl::nxheap_region::register_heap
==============
*/
void ntl::nxheap_region::register_heap(ntl::nxheap_region *this, ntl::nxheap *r_heap)
{
  __int64 v4; 
  void *mp_start_ptr; 

  v4 = (r_heap->m_direction >> 1) & 1;
  if ( this->mp_heap[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 318, ASSERT_TYPE_ASSERT, "( mp_heap[index] == 0 )", "Attempt to register multiple Allocators") )
    __debugbreak();
  this->mp_heap[v4] = r_heap;
  if ( r_heap->m_direction == DIR_BOTTOM_UP )
    mp_start_ptr = this->mp_start_ptr;
  else
    mp_start_ptr = this->mp_end_ptr;
  r_heap->mp_top_ptr = mp_start_ptr;
}

/*
==============
ntl::nxheap::shutdown
==============
*/
void ntl::nxheap::shutdown(ntl::nxheap *this)
{
  ntl::nxheap_region *mp_parent_region; 
  __int64 v3; 
  __int64 v4; 

  mp_parent_region = this->mp_parent_region;
  if ( this->mp_parent_region )
  {
    if ( mp_parent_region->mp_start_ptr )
    {
      v3 = (this->m_direction >> 1) & 1;
      v4 = (unsigned int)v3;
      if ( mp_parent_region->mp_heap[v3] != this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 335, ASSERT_TYPE_ASSERT, "( mp_heap[index] == &r_heap )", "Heap not currently registered") )
        __debugbreak();
      mp_parent_region->mp_heap[v4] = NULL;
    }
    this->mp_parent_region = NULL;
  }
  this->mp_top_ptr = NULL;
  this->mp_free_list = NULL;
  this->m_num_used_blocks = 0i64;
  this->m_num_free_blocks = 0i64;
  this->m_used_mem = 0i64;
  this->m_free_fragment_mem = 0i64;
  this->m_used_mem_max = 0i64;
  this->m_free_mem_min = 0i64;
}

/*
==============
ntl::nxheap_region::shutdown
==============
*/
void ntl::nxheap_region::shutdown(ntl::nxheap_region *this)
{
  ntl::nxheap **mp_heap; 
  __int64 v3; 
  ntl::nxheap *v4; 
  ntl::nxheap_region *mp_parent_region; 
  __int64 v6; 

  mp_heap = this->mp_heap;
  v3 = 2i64;
  do
  {
    v4 = *mp_heap;
    if ( *mp_heap )
    {
      mp_parent_region = v4->mp_parent_region;
      if ( v4->mp_parent_region )
      {
        if ( mp_parent_region->mp_start_ptr )
        {
          v6 = (v4->m_direction >> 1) & 1;
          if ( mp_parent_region->mp_heap[v6] != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 335, ASSERT_TYPE_ASSERT, "( mp_heap[index] == &r_heap )", "Heap not currently registered") )
            __debugbreak();
          mp_parent_region->mp_heap[v6] = NULL;
        }
        v4->mp_parent_region = NULL;
        v4->mp_top_ptr = NULL;
        v4->mp_free_list = NULL;
        v4->m_num_used_blocks = 0i64;
        v4->m_num_free_blocks = 0i64;
        v4->m_used_mem = 0i64;
        v4->m_free_fragment_mem = 0i64;
        v4->m_used_mem_max = 0i64;
        v4->m_free_mem_min = 0i64;
      }
      *mp_heap = NULL;
    }
    ++mp_heap;
    --v3;
  }
  while ( v3 );
  this->mp_start_ptr = NULL;
  this->mp_end_ptr = NULL;
  this->mp_heap[0] = NULL;
  this->mp_heap[1] = NULL;
}

/*
==============
ntl::nxheap_region::unregister_heap
==============
*/
void ntl::nxheap_region::unregister_heap(ntl::nxheap_region *this, ntl::nxheap *r_heap)
{
  __int64 v3; 
  __int64 v4; 

  v3 = (r_heap->m_direction >> 1) & 1;
  v4 = v3;
  if ( this->mp_heap[v3] == r_heap )
  {
    this->mp_heap[v3] = NULL;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.cpp", 335, ASSERT_TYPE_ASSERT, "( mp_heap[index] == &r_heap )", "Heap not currently registered") )
      __debugbreak();
    this->mp_heap[v4] = NULL;
  }
}

/*
==============
ntl::nxheap_region::update_min_free
==============
*/
void ntl::nxheap_region::update_min_free(ntl::nxheap_region *this)
{
  ntl::nxheap *v1; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v4; 
  char *mp_start_ptr; 
  char *mp_top_ptr; 
  ntl::nxheap *v7; 
  char *v8; 
  unsigned __int64 v9; 
  ntl::nxheap *v10; 
  unsigned __int64 v11; 

  v1 = this->mp_heap[0];
  if ( v1 )
    p_mp_top_ptr = (ntl::nxheap_region *)&v1->mp_top_ptr;
  else
    p_mp_top_ptr = this;
  v4 = this->mp_heap[1];
  mp_start_ptr = (char *)p_mp_top_ptr->mp_start_ptr;
  if ( v4 )
    mp_top_ptr = (char *)v4->mp_top_ptr;
  else
    mp_top_ptr = (char *)this->mp_end_ptr;
  if ( mp_top_ptr < mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  v7 = this->mp_heap[0];
  v8 = (char *)(mp_top_ptr - mp_start_ptr);
  if ( v7 )
  {
    v9 = (unsigned __int64)&v8[v7->m_free_fragment_mem];
    if ( v9 < v7->m_free_mem_min )
      v7->m_free_mem_min = v9;
  }
  v10 = this->mp_heap[1];
  if ( v10 )
  {
    v11 = (unsigned __int64)&v8[v10->m_free_fragment_mem];
    if ( v11 < v10->m_free_mem_min )
      v10->m_free_mem_min = v11;
  }
}

