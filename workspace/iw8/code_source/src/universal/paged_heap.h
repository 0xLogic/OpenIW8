/*
==============
PagedHeap<2,4096,0>::Free
==============
*/

bool __fastcall PagedHeap<2,4096,0>::Free(PagedHeap<2,4096,0> *this, void *const ptr)
{
  return ?Free@?$PagedHeap@$01$0BAAA@$0A@@@QEAA_NQEAX@Z(this, ptr);
}

/*
==============
PagedHeap<2,4096,0>::Allocate
==============
*/

void *__fastcall PagedHeap<2,4096,0>::Allocate(PagedHeap<2,4096,0> *this, const unsigned __int64 size)
{
  return ?Allocate@?$PagedHeap@$01$0BAAA@$0A@@@QEAAPEAX_K@Z(this, size);
}

/*
==============
PagedHeap<2,4096,0>::AddFreeBlock
==============
*/

void __fastcall PagedHeap<2,4096,0>::AddFreeBlock(PagedHeap<2,4096,0> *this, unsigned int newFreeOffset, unsigned int newFreeSize)
{
  ?AddFreeBlock@?$PagedHeap@$01$0BAAA@$0A@@@IEAAXII@Z(this, newFreeOffset, newFreeSize);
}

/*
==============
PagedHeap<65536,1956,1>::VerifyBlocks
==============
*/

void __fastcall PagedHeap<65536,1956,1>::VerifyBlocks(PagedHeap<65536,1956,1> *this)
{
  ?VerifyBlocks@?$PagedHeap@$0BAAAA@$0HKE@$00@@IEAAXXZ(this);
}

/*
==============
PagedHeap<65536,1956,1>::Allocate
==============
*/

void *__fastcall PagedHeap<65536,1956,1>::Allocate(PagedHeap<65536,1956,1> *this, const unsigned __int64 size)
{
  return ?Allocate@?$PagedHeap@$0BAAAA@$0HKE@$00@@QEAAPEAX_K@Z(this, size);
}

/*
==============
PagedHeap<65536,64,1>::Init
==============
*/

void __fastcall PagedHeap<65536,64,1>::Init(PagedHeap<65536,64,1> *this, void *const ptr, const unsigned __int64 reserveSize, const char *const debugName)
{
  ?Init@?$PagedHeap@$0BAAAA@$0EA@$00@@QEAAXQEAX_KQEBD@Z(this, ptr, reserveSize, debugName);
}

/*
==============
PagedHeap<65536,64,1>::Free
==============
*/

bool __fastcall PagedHeap<65536,64,1>::Free(PagedHeap<65536,64,1> *this, void *const ptr)
{
  return ?Free@?$PagedHeap@$0BAAAA@$0EA@$00@@QEAA_NQEAX@Z(this, ptr);
}

/*
==============
PagedHeap<65536,64,1>::Allocate
==============
*/

void *__fastcall PagedHeap<65536,64,1>::Allocate(PagedHeap<65536,64,1> *this, const unsigned __int64 size)
{
  return ?Allocate@?$PagedHeap@$0BAAAA@$0EA@$00@@QEAAPEAX_K@Z(this, size);
}

/*
==============
PagedHeap<2,4096,0>::VerifyBlocks
==============
*/

void __fastcall PagedHeap<2,4096,0>::VerifyBlocks(PagedHeap<2,4096,0> *this)
{
  ?VerifyBlocks@?$PagedHeap@$01$0BAAA@$0A@@@IEAAXXZ(this);
}

/*
==============
PagedHeap<65536,64,1>::AddFreeBlock
==============
*/

void __fastcall PagedHeap<65536,64,1>::AddFreeBlock(PagedHeap<65536,64,1> *this, unsigned int newFreeOffset, unsigned int newFreeSize)
{
  ?AddFreeBlock@?$PagedHeap@$0BAAAA@$0EA@$00@@IEAAXII@Z(this, newFreeOffset, newFreeSize);
}

/*
==============
PagedHeap<65536,1956,1>::Free
==============
*/

bool __fastcall PagedHeap<65536,1956,1>::Free(PagedHeap<65536,1956,1> *this, void *const ptr)
{
  return ?Free@?$PagedHeap@$0BAAAA@$0HKE@$00@@QEAA_NQEAX@Z(this, ptr);
}

/*
==============
PagedHeap<65536,64,1>::VerifyBlocks
==============
*/

void __fastcall PagedHeap<65536,64,1>::VerifyBlocks(PagedHeap<65536,64,1> *this)
{
  ?VerifyBlocks@?$PagedHeap@$0BAAAA@$0EA@$00@@IEAAXXZ(this);
}

/*
==============
PagedHeap<65536,1956,1>::Init
==============
*/

void __fastcall PagedHeap<65536,1956,1>::Init(PagedHeap<65536,1956,1> *this, void *const ptr, const unsigned __int64 reserveSize, const char *const debugName)
{
  ?Init@?$PagedHeap@$0BAAAA@$0HKE@$00@@QEAAXQEAX_KQEBD@Z(this, ptr, reserveSize, debugName);
}

/*
==============
PagedHeap<65536,1956,1>::AddFreeBlock
==============
*/

void __fastcall PagedHeap<65536,1956,1>::AddFreeBlock(PagedHeap<65536,1956,1> *this, unsigned int newFreeOffset, unsigned int newFreeSize)
{
  ?AddFreeBlock@?$PagedHeap@$0BAAAA@$0HKE@$00@@IEAAXII@Z(this, newFreeOffset, newFreeSize);
}

/*
==============
PagedHeap<2,4096,0>::Init
==============
*/

void __fastcall PagedHeap<2,4096,0>::Init(PagedHeap<2,4096,0> *this, void *const ptr, const unsigned __int64 reserveSize, const char *const debugName)
{
  ?Init@?$PagedHeap@$01$0BAAA@$0A@@@QEAAXQEAX_KQEBD@Z(this, ptr, reserveSize, debugName);
}

/*
==============
PagedHeap<65536,64,1>::AddFreeBlock
==============
*/
void PagedHeap<65536,64,1>::AddFreeBlock(PagedHeap<65536,64,1> *this, unsigned int newFreeOffset, unsigned int newFreeSize)
{
  unsigned int v3; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  __int64 m_size; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  char *v13; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v14; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v22; 
  char *v23; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v24; 
  unsigned __int64 v25; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v26; 
  __int64 v27; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v28; 
  bool v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned int v33; 

  v3 = newFreeSize;
  if ( !newFreeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 222, ASSERT_TYPE_ASSERT, "(newFreeSize)", (const char *)&queryFormat, "newFreeSize") )
    __debugbreak();
  if ( newFreeOffset >= this->totalReservedPages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 223, ASSERT_TYPE_ASSERT, "(newFreeOffset < totalReservedPages)", (const char *)&queryFormat, "newFreeOffset < totalReservedPages") )
    __debugbreak();
  if ( newFreeOffset + v3 > this->totalReservedPages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 224, ASSERT_TYPE_ASSERT, "(( newFreeOffset + newFreeSize ) <= totalReservedPages)", (const char *)&queryFormat, "( newFreeOffset + newFreeSize ) <= totalReservedPages") )
    __debugbreak();
  p_freeBlocks = &this->freeBlocks;
  m_size = this->freeBlocks.m_size;
  v8 = &this->freeBlocks;
  if ( m_size > 0 )
  {
    do
    {
      v9 = m_size >> 1;
      if ( *(_DWORD *)&v8->m_data.m_buffer[8 * (m_size >> 1)] >= newFreeOffset )
      {
        m_size >>= 1;
      }
      else
      {
        v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v8 + 8 * v9 + 8);
        m_size += -1 - v9;
      }
    }
    while ( m_size > 0 );
    m_size = this->freeBlocks.m_size;
  }
  v10 = 0i64;
  if ( v8 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * m_size) )
  {
    v8 = &this->freeBlocks;
  }
  else
  {
    if ( *(_DWORD *)v8->m_data.m_buffer == newFreeOffset + v3 )
    {
      v33 = *(_DWORD *)&v8->m_data.m_buffer[4] + v3;
      if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v8 < p_freeBlocks || v8 > (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v11 = (char *)v8 - (char *)p_freeBlocks;
      if ( (((_BYTE)v8 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v8 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      v12 = this->freeBlocks.m_size;
      v8 = &this->freeBlocks;
      if ( v12 )
        v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * (v11 >> 3));
      v13 = &v8->m_data.m_buffer[8];
      v14 = v8;
      v15 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v12);
      if ( &v8->m_data.m_buffer[8] == (char *)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v15 == v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      if ( v15 < (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
        __debugbreak();
      v16 = 0i64;
      v17 = (unsigned __int64)((char *)v15 - v13 + 7) >> 3;
      if ( v13 > (char *)v15 )
        v17 = 0i64;
      if ( v17 )
      {
        do
        {
          ++v16;
          *(_QWORD *)v14->m_data.m_buffer = *(_QWORD *)v13;
          v14 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v14 + 8);
          v13 += 8;
        }
        while ( v16 < v17 );
      }
      m_size = --this->freeBlocks.m_size;
      v3 = v33;
    }
    if ( v8 != p_freeBlocks && p_freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * m_size) )
      v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v8 - 8);
  }
  v18 = m_size;
  if ( v8 != (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * m_size) )
  {
    v19 = *(_DWORD *)&v8->m_data.m_buffer[4];
    if ( v19 + *(_DWORD *)v8->m_data.m_buffer == newFreeOffset )
    {
      newFreeOffset -= v19;
      v3 += v19;
      if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v8 < p_freeBlocks || v8 > (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v20 = (char *)v8 - (char *)p_freeBlocks;
      if ( (((_BYTE)v8 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v8 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      v21 = this->freeBlocks.m_size;
      v22 = &this->freeBlocks;
      if ( v21 )
        v22 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * (v20 >> 3));
      v23 = &v22->m_data.m_buffer[8];
      v24 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v21);
      if ( &v22->m_data.m_buffer[8] == (char *)v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v24 == v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      if ( v24 < (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
        __debugbreak();
      v25 = (unsigned __int64)((char *)v24 - v23 + 7) >> 3;
      if ( v23 > (char *)v24 )
        v25 = 0i64;
      if ( v25 )
      {
        do
        {
          ++v10;
          *(_QWORD *)v22->m_data.m_buffer = *(_QWORD *)v23;
          v22 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v22 + 8);
          v23 += 8;
        }
        while ( v10 < v25 );
      }
      v18 = --this->freeBlocks.m_size;
    }
  }
  v32 = __PAIR64__(v3, newFreeOffset);
  v26 = &this->freeBlocks;
  if ( v18 > 0 )
  {
    do
    {
      v27 = v18 >> 1;
      if ( *(_DWORD *)&v26->m_data.m_buffer[8 * (v18 >> 1)] >= newFreeOffset )
      {
        v18 >>= 1;
      }
      else
      {
        v26 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v26 + 8 * v27 + 8);
        v18 += -1 - v27;
      }
    }
    while ( v18 > 0 );
    v18 = this->freeBlocks.m_size;
  }
  if ( v26 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v18) || newFreeOffset < *(_DWORD *)v26->m_data.m_buffer )
  {
    if ( v18 == 65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (v26 < p_freeBlocks || v26 > (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( (((_BYTE)v26 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( &v32 >= (unsigned __int64 *)v26 && &v32 < (unsigned __int64 *)&this->freeBlocks + this->freeBlocks.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v28 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * this->freeBlocks.m_size);
    if ( v26 != v28 )
    {
      if ( v26 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)&v28->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v28 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)&v28->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v29 = v28 <= v26;
      if ( v28 < v26 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v29 = v28 <= v26;
      }
      if ( !v29 )
      {
        do
        {
          v30 = *(_QWORD *)&v28[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
          v28 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v28 - 8);
          *(_QWORD *)&v28->m_data.m_buffer[8] = v30;
        }
        while ( v28 > v26 );
      }
    }
    v31 = v32;
    ++this->freeBlocks.m_size;
    *(_QWORD *)v26->m_data.m_buffer = v31;
  }
}

/*
==============
PagedHeap<65536,64,1>::Allocate
==============
*/
char *PagedHeap<65536,64,1>::Allocate(PagedHeap<65536,64,1> *this, const unsigned __int64 size)
{
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned __int64 m_size; 
  unsigned __int64 v6; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v7; 
  PagedHeap<65536,64,1> *v8; 
  unsigned int v9; 
  unsigned int v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v14; 
  char *v15; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *p_usedBlocks; 
  __int64 v20; 
  ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *v21; 
  __int64 v22; 
  ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *v23; 
  bool v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  int v27; 
  unsigned __int64 v28; 
  unsigned int v29; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v30; 
  __int64 v31; 
  __int64 v32; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v33; 
  bool v34; 
  __int64 v35; 
  unsigned __int64 v36; 
  char *v37; 
  unsigned int v38; 
  unsigned __int64 v39; 

  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 58, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( this->usedBlocks.m_size >= 0x40 )
    return 0i64;
  p_freeBlocks = &this->freeBlocks;
  m_size = this->freeBlocks.m_size;
  v6 = (size + 0xFFFF) >> 16;
  v7 = &this->freeBlocks;
  v8 = (PagedHeap<65536,64,1> *)((char *)&this->freeBlocks + 8 * m_size);
  if ( &this->freeBlocks == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)v8 )
    return 0i64;
  while ( 1 )
  {
    v9 = *(_DWORD *)&v7->m_data.m_buffer[4];
    if ( v9 >= (unsigned int)v6 )
      break;
    v7 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v7 + 8);
    if ( v7 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)v8 )
      return 0i64;
  }
  v11 = *(_DWORD *)v7->m_data.m_buffer;
  v38 = *(_DWORD *)v7->m_data.m_buffer;
  if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
    __debugbreak();
  if ( (v7 < p_freeBlocks || v7 > (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  v12 = (char *)v7 - (char *)p_freeBlocks;
  if ( (((_BYTE)v7 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
    __debugbreak();
  if ( v7 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
    __debugbreak();
  v13 = this->freeBlocks.m_size;
  v14 = &this->freeBlocks;
  if ( v13 )
    v14 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * (v12 >> 3));
  v15 = &v14->m_data.m_buffer[8];
  v16 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v13);
  if ( &v14->m_data.m_buffer[8] == (char *)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v16 == v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  if ( v16 < (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
    __debugbreak();
  v17 = 0i64;
  v18 = (unsigned __int64)((char *)v16 - v15 + 7) >> 3;
  if ( v15 > (char *)v16 )
    v18 = 0i64;
  if ( v18 )
  {
    do
    {
      ++v17;
      *(_QWORD *)v14->m_data.m_buffer = *(_QWORD *)v15;
      v14 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v14 + 8);
      v15 += 8;
    }
    while ( v17 < v18 );
  }
  --this->freeBlocks.m_size;
  p_usedBlocks = &this->usedBlocks;
  v20 = this->usedBlocks.m_size;
  v21 = &this->usedBlocks;
  v39 = __PAIR64__(v6, v11);
  if ( v20 > 0 )
  {
    do
    {
      v22 = v20 >> 1;
      if ( *(_DWORD *)&v21->m_data.m_buffer[8 * (v20 >> 1)] >= v11 )
      {
        v20 >>= 1;
      }
      else
      {
        v21 = (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)v21 + 8 * v22 + 8);
        v20 += -1 - v22;
      }
    }
    while ( v20 > 0 );
    v20 = this->usedBlocks.m_size;
  }
  if ( v21 == (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * v20) || v11 < *(_DWORD *)v21->m_data.m_buffer )
  {
    if ( v20 == 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (v21 < p_usedBlocks || v21 > (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * this->usedBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( (((_BYTE)v21 - (_BYTE)p_usedBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( &v39 >= (unsigned __int64 *)v21 && &v39 < (unsigned __int64 *)&this->usedBlocks + this->usedBlocks.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v23 = (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * this->usedBlocks.m_size);
    if ( v21 != v23 )
    {
      if ( v21 == (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)&v23->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v23 == (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)&v23->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v24 = v23 <= v21;
      if ( v23 < v21 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v24 = v23 <= v21;
      }
      if ( !v24 )
      {
        do
        {
          v25 = *(_QWORD *)&v23[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
          v23 = (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)v23 - 8);
          *(_QWORD *)&v23->m_data.m_buffer[8] = v25;
        }
        while ( v23 > v21 );
      }
      v11 = v38;
    }
    v26 = v39;
    ++this->usedBlocks.m_size;
    *(_QWORD *)v21->m_data.m_buffer = v26;
  }
  v27 = v9 - v6;
  if ( v27 )
  {
    v28 = this->freeBlocks.m_size;
    v29 = v11 + v6;
    LODWORD(v39) = v11 + v6;
    v30 = &this->freeBlocks;
    HIDWORD(v39) = v27;
    v31 = v28;
    while ( v31 > 0 )
    {
      v32 = v31 >> 1;
      if ( *(_DWORD *)&v30->m_data.m_buffer[8 * (v31 >> 1)] >= v29 )
      {
        v31 >>= 1;
      }
      else
      {
        v30 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v30 + 8 * v32 + 8);
        v31 += -1 - v32;
      }
    }
    if ( v30 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v28) || v29 < *(_DWORD *)v30->m_data.m_buffer )
    {
      if ( v28 == 65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
        __debugbreak();
      if ( (v30 < p_freeBlocks || v30 > (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      if ( (((_BYTE)v30 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( &v39 >= (unsigned __int64 *)v30 && &v39 < (unsigned __int64 *)&this->freeBlocks + this->freeBlocks.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
        __debugbreak();
      v33 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size);
      if ( v30 != v33 )
      {
        if ( v30 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)&v33->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( v33 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)&v33->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        v34 = v33 <= v30;
        if ( v33 < v30 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
            __debugbreak();
          v34 = v33 <= v30;
        }
        if ( !v34 )
        {
          do
          {
            v35 = *(_QWORD *)&v33[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
            v33 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v33 - 8);
            *(_QWORD *)&v33->m_data.m_buffer[8] = v35;
          }
          while ( v33 > v30 );
        }
        v11 = v38;
      }
      v36 = v39;
      ++this->freeBlocks.m_size;
      *(_QWORD *)v30->m_data.m_buffer = v36;
    }
  }
  v37 = &this->memPtr[0x10000 * (unsigned __int64)v11];
  IWMem_Alloc(this->iwMemID, v37, (unsigned __int64)(unsigned int)v6 << 16);
  PagedHeap<65536,64,1>::VerifyBlocks(this);
  return v37;
}

/*
==============
PagedHeap<65536,64,1>::Free
==============
*/
char PagedHeap<65536,64,1>::Free(PagedHeap<65536,64,1> *this, void *const ptr)
{
  __int64 m_size; 
  ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *p_usedBlocks; 
  ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *v10; 
  ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *v15; 
  char *v16; 
  ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 

  if ( ptr < this->memPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 106, ASSERT_TYPE_ASSERT, "(ptr >= memPtr)", (const char *)&queryFormat, "ptr >= memPtr") )
    __debugbreak();
  if ( ptr >= &this->memPtr[0x10000 * (unsigned __int64)this->totalReservedPages] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 107, ASSERT_TYPE_ASSERT, "(ptr < ( memPtr + ( totalReservedPages * HEAP_PAGE_SIZE ) ))", (const char *)&queryFormat, "ptr < ( memPtr + ( totalReservedPages * HEAP_PAGE_SIZE ) )") )
    __debugbreak();
  if ( (_WORD)ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 108, ASSERT_TYPE_ASSERT, "(( reinterpret_cast<uintptr_t>( ptr ) & ( HEAP_PAGE_SIZE - 1 ) ) == 0)", (const char *)&queryFormat, "( reinterpret_cast<uintptr_t>( ptr ) & ( HEAP_PAGE_SIZE - 1 ) ) == 0") )
    __debugbreak();
  m_size = this->usedBlocks.m_size;
  p_usedBlocks = &this->usedBlocks;
  v6 = &this->usedBlocks;
  v7 = ((unsigned __int64)ptr - (unsigned __int64)this->memPtr) >> 16;
  v8 = 8 * m_size;
  if ( m_size > 0 )
  {
    do
    {
      v9 = m_size >> 1;
      if ( *(_DWORD *)&v6->m_data.m_buffer[8 * (m_size >> 1)] >= (unsigned int)v7 )
      {
        m_size >>= 1;
      }
      else
      {
        v6 = (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)v6 + 8 * v9 + 8);
        m_size += -1 - v9;
      }
    }
    while ( m_size > 0 );
    m_size = this->usedBlocks.m_size;
  }
  v10 = (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * m_size);
  if ( v6 == v10 )
    goto LABEL_54;
  v11 = (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + v8);
  if ( (unsigned int)v7 >= *(_DWORD *)v6->m_data.m_buffer )
    v11 = v6;
  if ( v11 == v10 )
  {
LABEL_54:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 116, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Couldn't find a block allocated at %p (offset=%d,usedsize=%zu)", ptr, v7, this->usedBlocks.m_size) )
      __debugbreak();
    return 0;
  }
  else
  {
    v12 = *(_DWORD *)&v11->m_data.m_buffer[4];
    IWMem_Free(this->iwMemID, ptr, (unsigned __int64)v12 << 16);
    if ( !this->usedBlocks.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
      __debugbreak();
    if ( (v11 < p_usedBlocks || v11 > (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * this->usedBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    v13 = (char *)v11 - (char *)p_usedBlocks;
    if ( (((_BYTE)v11 - (_BYTE)p_usedBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( v11 == (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * this->usedBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
      __debugbreak();
    v14 = this->usedBlocks.m_size;
    v15 = &this->usedBlocks;
    if ( v14 )
      v15 = (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * (v13 >> 3));
    v16 = &v15->m_data.m_buffer[8];
    v17 = (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * v14);
    if ( &v15->m_data.m_buffer[8] == (char *)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
      __debugbreak();
    if ( v17 == v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
      __debugbreak();
    if ( v17 < (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v18 = 0i64;
    v19 = (unsigned __int64)((char *)v17 - v16 + 7) >> 3;
    if ( v16 > (char *)v17 )
      v19 = 0i64;
    if ( v19 )
    {
      do
      {
        ++v18;
        *(_QWORD *)v15->m_data.m_buffer = *(_QWORD *)v16;
        v15 = (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)v15 + 8);
        v16 += 8;
      }
      while ( v18 < v19 );
    }
    --this->usedBlocks.m_size;
    PagedHeap<65536,64,1>::AddFreeBlock(this, v7, v12);
    PagedHeap<65536,64,1>::VerifyBlocks(this);
    return 1;
  }
}

/*
==============
PagedHeap<65536,64,1>::Init
==============
*/
void PagedHeap<65536,64,1>::Init(PagedHeap<65536,64,1> *this, void *const ptr, const unsigned __int64 reserveSize, const char *const debugName)
{
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned __int64 v9; 
  unsigned __int64 i; 
  __int64 m_size; 
  __int64 j; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v13; 
  bool v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  if ( (_WORD)reserveSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 31, ASSERT_TYPE_ASSERT, "(( reserveSize & ( HEAP_PAGE_SIZE - 1 ) ) == 0)", (const char *)&queryFormat, "( reserveSize & ( HEAP_PAGE_SIZE - 1 ) ) == 0") )
    __debugbreak();
  this->memPtr = (char *)ptr;
  p_freeBlocks = &this->freeBlocks;
  v9 = 0i64;
  for ( this->totalReservedPages = reserveSize >> 16; v9 < this->freeBlocks.m_size; ++v9 )
  {
    if ( v9 >= 0x41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  this->freeBlocks.m_size = 0i64;
  for ( i = 0i64; i < this->usedBlocks.m_size; ++i )
  {
    if ( i >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  this->usedBlocks.m_size = 0i64;
  HIDWORD(v17) = this->totalReservedPages;
  m_size = this->freeBlocks.m_size;
  LODWORD(v17) = 0;
  for ( j = m_size; m_size > 0; m_size >>= 1 )
    ;
  if ( p_freeBlocks == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * j) || *(_DWORD *)p_freeBlocks->m_data.m_buffer )
  {
    if ( j == 65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( p_freeBlocks > (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( &v17 >= (__int64 *)p_freeBlocks && &v17 < (__int64 *)&p_freeBlocks->m_data.m_buffer[8 * this->freeBlocks.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v13 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size);
    if ( p_freeBlocks != v13 )
    {
      if ( p_freeBlocks == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)&v13->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v13 == (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)&v13->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v14 = v13 <= p_freeBlocks;
      if ( v13 < p_freeBlocks )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v14 = v13 <= p_freeBlocks;
      }
      if ( !v14 )
      {
        do
        {
          v15 = *(_QWORD *)&v13[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
          v13 = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v13 - 8);
          *(_QWORD *)&v13->m_data.m_buffer[8] = v15;
        }
        while ( v13 > p_freeBlocks );
      }
    }
    v16 = v17;
    ++this->freeBlocks.m_size;
    *(_QWORD *)p_freeBlocks->m_data.m_buffer = v16;
  }
  IWMem_Allocator_CreateFixed(&this->iwMemID, debugName, Count, ptr, reserveSize);
}

/*
==============
PagedHeap<65536,64,1>::VerifyBlocks
==============
*/
void PagedHeap<65536,64,1>::VerifyBlocks(PagedHeap<65536,64,1> *this)
{
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *v6; 
  ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *i; 
  __int64 v8; 
  __int64 v9; 

  p_freeBlocks = &this->freeBlocks;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( &this->freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * this->freeBlocks.m_size) )
  {
    v6 = &this->freeBlocks;
    do
    {
      if ( v3 > *(_DWORD *)p_freeBlocks->m_data.m_buffer )
      {
        LODWORD(v9) = *(_DWORD *)p_freeBlocks->m_data.m_buffer;
        LODWORD(v8) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 199, ASSERT_TYPE_ASSERT, "( lastIndex ) <= ( validateIt->first )", "%s <= %s\n\t%i, %i", "lastIndex", "validateIt->first", v8, v9) )
          __debugbreak();
      }
      v4 += *(_DWORD *)&p_freeBlocks->m_data.m_buffer[4];
      v3 = *(_DWORD *)p_freeBlocks->m_data.m_buffer;
      p_freeBlocks = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8);
    }
    while ( p_freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)v6 + 8 * v6->m_size) );
  }
  for ( i = &this->usedBlocks; i != (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)&this->usedBlocks + 8 * this->usedBlocks.m_size); i = (ntl::fixed_vector_map<unsigned int,unsigned int,64,ntl::less<unsigned int,unsigned int> > *)((char *)i + 8) )
  {
    if ( v2 > *(_DWORD *)i->m_data.m_buffer )
    {
      LODWORD(v9) = *(_DWORD *)i->m_data.m_buffer;
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 208, ASSERT_TYPE_ASSERT, "( lastIndex ) <= ( validateIt->first )", "%s <= %s\n\t%i, %i", "lastIndex", "validateIt->first", v8, v9) )
        __debugbreak();
    }
    v4 += *(_DWORD *)&i->m_data.m_buffer[4];
    v2 = *(_DWORD *)i->m_data.m_buffer;
  }
  if ( v4 != this->totalReservedPages )
  {
    LODWORD(v9) = this->totalReservedPages;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 213, ASSERT_TYPE_ASSERT, "( totalPageCount ) == ( totalReservedPages )", "%s == %s\n\t%i, %i", "totalPageCount", "totalReservedPages", v8, v9) )
      __debugbreak();
  }
}

/*
==============
PagedHeap<65536,1956,1>::AddFreeBlock
==============
*/
void PagedHeap<65536,1956,1>::AddFreeBlock(PagedHeap<65536,1956,1> *this, unsigned int newFreeOffset, unsigned int newFreeSize)
{
  unsigned int v3; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  __int64 m_size; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  char *v13; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v14; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v22; 
  char *v23; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v24; 
  unsigned __int64 v25; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v26; 
  __int64 v27; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v28; 
  bool v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned int v33; 

  v3 = newFreeSize;
  if ( !newFreeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 222, ASSERT_TYPE_ASSERT, "(newFreeSize)", (const char *)&queryFormat, "newFreeSize") )
    __debugbreak();
  if ( newFreeOffset >= this->totalReservedPages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 223, ASSERT_TYPE_ASSERT, "(newFreeOffset < totalReservedPages)", (const char *)&queryFormat, "newFreeOffset < totalReservedPages") )
    __debugbreak();
  if ( newFreeOffset + v3 > this->totalReservedPages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 224, ASSERT_TYPE_ASSERT, "(( newFreeOffset + newFreeSize ) <= totalReservedPages)", (const char *)&queryFormat, "( newFreeOffset + newFreeSize ) <= totalReservedPages") )
    __debugbreak();
  p_freeBlocks = &this->freeBlocks;
  m_size = this->freeBlocks.m_size;
  v8 = &this->freeBlocks;
  if ( m_size > 0 )
  {
    do
    {
      v9 = m_size >> 1;
      if ( *(_DWORD *)&v8->m_data.m_buffer[8 * (m_size >> 1)] >= newFreeOffset )
      {
        m_size >>= 1;
      }
      else
      {
        v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v8 + 8 * v9 + 8);
        m_size += -1 - v9;
      }
    }
    while ( m_size > 0 );
    m_size = this->freeBlocks.m_size;
  }
  v10 = 0i64;
  if ( v8 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * m_size) )
  {
    v8 = &this->freeBlocks;
  }
  else
  {
    if ( *(_DWORD *)v8->m_data.m_buffer == newFreeOffset + v3 )
    {
      v33 = *(_DWORD *)&v8->m_data.m_buffer[4] + v3;
      if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v8 < p_freeBlocks || v8 > (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v11 = (char *)v8 - (char *)p_freeBlocks;
      if ( (((_BYTE)v8 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v8 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      v12 = this->freeBlocks.m_size;
      v8 = &this->freeBlocks;
      if ( v12 )
        v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * (v11 >> 3));
      v13 = &v8->m_data.m_buffer[8];
      v14 = v8;
      v15 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v12);
      if ( &v8->m_data.m_buffer[8] == (char *)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v15 == v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      if ( v15 < (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
        __debugbreak();
      v16 = 0i64;
      v17 = (unsigned __int64)((char *)v15 - v13 + 7) >> 3;
      if ( v13 > (char *)v15 )
        v17 = 0i64;
      if ( v17 )
      {
        do
        {
          ++v16;
          *(_QWORD *)v14->m_data.m_buffer = *(_QWORD *)v13;
          v14 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v14 + 8);
          v13 += 8;
        }
        while ( v16 < v17 );
      }
      m_size = --this->freeBlocks.m_size;
      v3 = v33;
    }
    if ( v8 != p_freeBlocks && p_freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * m_size) )
      v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v8 - 8);
  }
  v18 = m_size;
  if ( v8 != (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * m_size) )
  {
    v19 = *(_DWORD *)&v8->m_data.m_buffer[4];
    if ( v19 + *(_DWORD *)v8->m_data.m_buffer == newFreeOffset )
    {
      newFreeOffset -= v19;
      v3 += v19;
      if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v8 < p_freeBlocks || v8 > (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v20 = (char *)v8 - (char *)p_freeBlocks;
      if ( (((_BYTE)v8 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v8 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      v21 = this->freeBlocks.m_size;
      v22 = &this->freeBlocks;
      if ( v21 )
        v22 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * (v20 >> 3));
      v23 = &v22->m_data.m_buffer[8];
      v24 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v21);
      if ( &v22->m_data.m_buffer[8] == (char *)v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v24 == v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      if ( v24 < (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
        __debugbreak();
      v25 = (unsigned __int64)((char *)v24 - v23 + 7) >> 3;
      if ( v23 > (char *)v24 )
        v25 = 0i64;
      if ( v25 )
      {
        do
        {
          ++v10;
          *(_QWORD *)v22->m_data.m_buffer = *(_QWORD *)v23;
          v22 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v22 + 8);
          v23 += 8;
        }
        while ( v10 < v25 );
      }
      v18 = --this->freeBlocks.m_size;
    }
  }
  v32 = __PAIR64__(v3, newFreeOffset);
  v26 = &this->freeBlocks;
  if ( v18 > 0 )
  {
    do
    {
      v27 = v18 >> 1;
      if ( *(_DWORD *)&v26->m_data.m_buffer[8 * (v18 >> 1)] >= newFreeOffset )
      {
        v18 >>= 1;
      }
      else
      {
        v26 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v26 + 8 * v27 + 8);
        v18 += -1 - v27;
      }
    }
    while ( v18 > 0 );
    v18 = this->freeBlocks.m_size;
  }
  if ( v26 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v18) || newFreeOffset < *(_DWORD *)v26->m_data.m_buffer )
  {
    if ( v18 == 1957 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (v26 < p_freeBlocks || v26 > (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( (((_BYTE)v26 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( &v32 >= (unsigned __int64 *)v26 && &v32 < (unsigned __int64 *)&this->freeBlocks + this->freeBlocks.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v28 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * this->freeBlocks.m_size);
    if ( v26 != v28 )
    {
      if ( v26 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)&v28->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v28 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)&v28->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v29 = v28 <= v26;
      if ( v28 < v26 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v29 = v28 <= v26;
      }
      if ( !v29 )
      {
        do
        {
          v30 = *(_QWORD *)&v28[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
          v28 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v28 - 8);
          *(_QWORD *)&v28->m_data.m_buffer[8] = v30;
        }
        while ( v28 > v26 );
      }
    }
    v31 = v32;
    ++this->freeBlocks.m_size;
    *(_QWORD *)v26->m_data.m_buffer = v31;
  }
}

/*
==============
PagedHeap<65536,1956,1>::Allocate
==============
*/
char *PagedHeap<65536,1956,1>::Allocate(PagedHeap<65536,1956,1> *this, const unsigned __int64 size)
{
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned __int64 m_size; 
  unsigned __int64 v6; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v7; 
  PagedHeap<65536,1956,1> *v8; 
  unsigned int v9; 
  __int64 v11; 
  unsigned __int64 v12; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v13; 
  char *v14; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *p_usedBlocks; 
  unsigned int v19; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *v20; 
  __int64 v21; 
  __int64 v22; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *v23; 
  bool v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  int v27; 
  __int64 v28; 
  unsigned int v29; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v30; 
  __int64 v31; 
  __int64 v32; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v33; 
  bool v34; 
  __int64 v35; 
  unsigned __int64 v36; 
  char *v37; 
  unsigned int v39; 
  unsigned __int64 v40; 

  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 58, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( this->usedBlocks.m_size >= 0x7A4 )
    return 0i64;
  p_freeBlocks = &this->freeBlocks;
  m_size = this->freeBlocks.m_size;
  v6 = (size + 0xFFFF) >> 16;
  v7 = &this->freeBlocks;
  v8 = (PagedHeap<65536,1956,1> *)((char *)&this->freeBlocks + 8 * m_size);
  if ( &this->freeBlocks == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)v8 )
    return 0i64;
  while ( 1 )
  {
    v9 = *(_DWORD *)&v7->m_data.m_buffer[4];
    if ( v9 >= (unsigned int)v6 )
      break;
    v7 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v7 + 8);
    if ( v7 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)v8 )
      return 0i64;
  }
  v39 = *(_DWORD *)v7->m_data.m_buffer;
  if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
    __debugbreak();
  if ( (v7 < p_freeBlocks || v7 > (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  v11 = (char *)v7 - (char *)p_freeBlocks;
  if ( (((_BYTE)v7 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
    __debugbreak();
  if ( v7 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
    __debugbreak();
  v12 = this->freeBlocks.m_size;
  v13 = &this->freeBlocks;
  if ( v12 )
    v13 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * (v11 >> 3));
  v14 = &v13->m_data.m_buffer[8];
  v15 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v12);
  if ( &v13->m_data.m_buffer[8] == (char *)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v15 == v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  if ( v15 < (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
    __debugbreak();
  v16 = 0i64;
  v17 = (unsigned __int64)((char *)v15 - v14 + 7) >> 3;
  if ( v14 > (char *)v15 )
    v17 = 0i64;
  if ( v17 )
  {
    do
    {
      ++v16;
      *(_QWORD *)v13->m_data.m_buffer = *(_QWORD *)v14;
      v13 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v13 + 8);
      v14 += 8;
    }
    while ( v16 < v17 );
  }
  --this->freeBlocks.m_size;
  p_usedBlocks = &this->usedBlocks;
  v19 = v39;
  v20 = p_usedBlocks;
  v40 = __PAIR64__(v6, v39);
  v21 = p_usedBlocks->m_size;
  if ( v21 > 0 )
  {
    do
    {
      v22 = v21 >> 1;
      if ( *(_DWORD *)&v20->m_data.m_buffer[8 * (v21 >> 1)] >= v39 )
      {
        v21 >>= 1;
      }
      else
      {
        v20 = (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)v20 + 8 * v22 + 8);
        v21 += -1 - v22;
      }
    }
    while ( v21 > 0 );
    v21 = p_usedBlocks->m_size;
  }
  if ( v20 == (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * v21) || v39 < *(_DWORD *)v20->m_data.m_buffer )
  {
    if ( v21 == 1956 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (v20 < p_usedBlocks || v20 > (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * p_usedBlocks->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( (((_BYTE)v20 - (_BYTE)p_usedBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( &v40 >= (unsigned __int64 *)v20 && &v40 < (unsigned __int64 *)p_usedBlocks + p_usedBlocks->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v23 = (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * p_usedBlocks->m_size);
    if ( v20 != v23 )
    {
      if ( v20 == (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)&v23->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v23 == (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)&v23->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v24 = v23 <= v20;
      if ( v23 < v20 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v24 = v23 <= v20;
      }
      if ( !v24 )
      {
        do
        {
          v25 = *(_QWORD *)&v23[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
          v23 = (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)v23 - 8);
          *(_QWORD *)&v23->m_data.m_buffer[8] = v25;
        }
        while ( v23 > v20 );
      }
      v19 = v39;
    }
    v26 = v40;
    ++p_usedBlocks->m_size;
    *(_QWORD *)v20->m_data.m_buffer = v26;
  }
  v27 = v9 - v6;
  if ( v27 )
  {
    v28 = p_freeBlocks->m_size;
    v29 = v19 + v6;
    LODWORD(v40) = v19 + v6;
    v30 = p_freeBlocks;
    HIDWORD(v40) = v27;
    v31 = v28;
    while ( v31 > 0 )
    {
      v32 = v31 >> 1;
      if ( *(_DWORD *)&v30->m_data.m_buffer[8 * (v31 >> 1)] >= v29 )
      {
        v31 >>= 1;
      }
      else
      {
        v30 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v30 + 8 * v32 + 8);
        v31 += -1 - v32;
      }
    }
    if ( v30 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v28) || v29 < *(_DWORD *)v30->m_data.m_buffer )
    {
      if ( v28 == 1957 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
        __debugbreak();
      if ( (v30 < p_freeBlocks || v30 > (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * p_freeBlocks->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      if ( (((_BYTE)v30 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( &v40 >= (unsigned __int64 *)v30 && &v40 < (unsigned __int64 *)p_freeBlocks + p_freeBlocks->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
        __debugbreak();
      v33 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * p_freeBlocks->m_size);
      if ( v30 != v33 )
      {
        if ( v30 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)&v33->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( v33 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)&v33->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        v34 = v33 <= v30;
        if ( v33 < v30 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
            __debugbreak();
          v34 = v33 <= v30;
        }
        if ( !v34 )
        {
          do
          {
            v35 = *(_QWORD *)&v33[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
            v33 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v33 - 8);
            *(_QWORD *)&v33->m_data.m_buffer[8] = v35;
          }
          while ( v33 > v30 );
        }
        v19 = v39;
      }
      v36 = v40;
      ++p_freeBlocks->m_size;
      *(_QWORD *)v30->m_data.m_buffer = v36;
    }
  }
  v37 = &this->memPtr[0x10000 * (unsigned __int64)v19];
  IWMem_Alloc(this->iwMemID, v37, (unsigned __int64)(unsigned int)v6 << 16);
  PagedHeap<65536,1956,1>::VerifyBlocks(this);
  return v37;
}

/*
==============
PagedHeap<65536,1956,1>::Free
==============
*/
char PagedHeap<65536,1956,1>::Free(PagedHeap<65536,1956,1> *this, void *const ptr)
{
  __int64 m_size; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *p_usedBlocks; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *v10; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *v15; 
  char *v16; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 

  if ( ptr < this->memPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 106, ASSERT_TYPE_ASSERT, "(ptr >= memPtr)", (const char *)&queryFormat, "ptr >= memPtr") )
    __debugbreak();
  if ( ptr >= &this->memPtr[0x10000 * (unsigned __int64)this->totalReservedPages] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 107, ASSERT_TYPE_ASSERT, "(ptr < ( memPtr + ( totalReservedPages * HEAP_PAGE_SIZE ) ))", (const char *)&queryFormat, "ptr < ( memPtr + ( totalReservedPages * HEAP_PAGE_SIZE ) )") )
    __debugbreak();
  if ( (_WORD)ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 108, ASSERT_TYPE_ASSERT, "(( reinterpret_cast<uintptr_t>( ptr ) & ( HEAP_PAGE_SIZE - 1 ) ) == 0)", (const char *)&queryFormat, "( reinterpret_cast<uintptr_t>( ptr ) & ( HEAP_PAGE_SIZE - 1 ) ) == 0") )
    __debugbreak();
  m_size = this->usedBlocks.m_size;
  p_usedBlocks = &this->usedBlocks;
  v6 = &this->usedBlocks;
  v7 = ((unsigned __int64)ptr - (unsigned __int64)this->memPtr) >> 16;
  v8 = 8 * m_size;
  if ( m_size > 0 )
  {
    do
    {
      v9 = m_size >> 1;
      if ( *(_DWORD *)&v6->m_data.m_buffer[8 * (m_size >> 1)] >= (unsigned int)v7 )
      {
        m_size >>= 1;
      }
      else
      {
        v6 = (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)v6 + 8 * v9 + 8);
        m_size += -1 - v9;
      }
    }
    while ( m_size > 0 );
    m_size = this->usedBlocks.m_size;
  }
  v10 = (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * m_size);
  if ( v6 == v10 )
    goto LABEL_54;
  v11 = (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + v8);
  if ( (unsigned int)v7 >= *(_DWORD *)v6->m_data.m_buffer )
    v11 = v6;
  if ( v11 == v10 )
  {
LABEL_54:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 116, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Couldn't find a block allocated at %p (offset=%d,usedsize=%zu)", ptr, v7, this->usedBlocks.m_size) )
      __debugbreak();
    return 0;
  }
  else
  {
    v12 = *(_DWORD *)&v11->m_data.m_buffer[4];
    IWMem_Free(this->iwMemID, ptr, (unsigned __int64)v12 << 16);
    if ( !this->usedBlocks.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
      __debugbreak();
    if ( (v11 < p_usedBlocks || v11 > (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * this->usedBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    v13 = (char *)v11 - (char *)p_usedBlocks;
    if ( (((_BYTE)v11 - (_BYTE)p_usedBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( v11 == (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * this->usedBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
      __debugbreak();
    v14 = this->usedBlocks.m_size;
    v15 = &this->usedBlocks;
    if ( v14 )
      v15 = (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * (v13 >> 3));
    v16 = &v15->m_data.m_buffer[8];
    v17 = (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * v14);
    if ( &v15->m_data.m_buffer[8] == (char *)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
      __debugbreak();
    if ( v17 == v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
      __debugbreak();
    if ( v17 < (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v18 = 0i64;
    v19 = (unsigned __int64)((char *)v17 - v16 + 7) >> 3;
    if ( v16 > (char *)v17 )
      v19 = 0i64;
    if ( v19 )
    {
      do
      {
        ++v18;
        *(_QWORD *)v15->m_data.m_buffer = *(_QWORD *)v16;
        v15 = (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)v15 + 8);
        v16 += 8;
      }
      while ( v18 < v19 );
    }
    --this->usedBlocks.m_size;
    PagedHeap<65536,1956,1>::AddFreeBlock(this, v7, v12);
    PagedHeap<65536,1956,1>::VerifyBlocks(this);
    return 1;
  }
}

/*
==============
PagedHeap<65536,1956,1>::Init
==============
*/
void PagedHeap<65536,1956,1>::Init(PagedHeap<65536,1956,1> *this, void *const ptr, const unsigned __int64 reserveSize, const char *const debugName)
{
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  __int64 m_size; 
  __int64 i; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v13; 
  bool v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  if ( (_WORD)reserveSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 31, ASSERT_TYPE_ASSERT, "(( reserveSize & ( HEAP_PAGE_SIZE - 1 ) ) == 0)", (const char *)&queryFormat, "( reserveSize & ( HEAP_PAGE_SIZE - 1 ) ) == 0") )
    __debugbreak();
  this->memPtr = (char *)ptr;
  p_freeBlocks = &this->freeBlocks;
  v9 = 0i64;
  this->totalReservedPages = reserveSize >> 16;
  if ( this->freeBlocks.m_size )
  {
    do
    {
      if ( v9 >= 0x7A5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v9;
    }
    while ( v9 < this->freeBlocks.m_size );
    p_freeBlocks = &this->freeBlocks;
  }
  v10 = 0i64;
  this->freeBlocks.m_size = 0i64;
  if ( this->usedBlocks.m_size )
  {
    do
    {
      if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v10;
    }
    while ( v10 < this->usedBlocks.m_size );
    p_freeBlocks = &this->freeBlocks;
  }
  this->usedBlocks.m_size = 0i64;
  HIDWORD(v17) = this->totalReservedPages;
  m_size = this->freeBlocks.m_size;
  LODWORD(v17) = 0;
  for ( i = m_size; m_size > 0; m_size >>= 1 )
    ;
  if ( p_freeBlocks == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * i) || *(_DWORD *)p_freeBlocks->m_data.m_buffer )
  {
    if ( 1957 == i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( p_freeBlocks > (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( &v17 >= (__int64 *)p_freeBlocks && &v17 < (__int64 *)&p_freeBlocks->m_data.m_buffer[8 * this->freeBlocks.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v13 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size);
    if ( p_freeBlocks != v13 )
    {
      if ( p_freeBlocks == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)&v13->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v13 == (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)&v13->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v14 = v13 <= p_freeBlocks;
      if ( v13 < p_freeBlocks )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v14 = v13 <= p_freeBlocks;
      }
      if ( !v14 )
      {
        do
        {
          v15 = *(_QWORD *)&v13[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
          v13 = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v13 - 8);
          *(_QWORD *)&v13->m_data.m_buffer[8] = v15;
        }
        while ( v13 > p_freeBlocks );
      }
    }
    v16 = v17;
    ++this->freeBlocks.m_size;
    *(_QWORD *)p_freeBlocks->m_data.m_buffer = v16;
  }
  IWMem_Allocator_CreateFixed(&this->iwMemID, debugName, Count, ptr, reserveSize);
}

/*
==============
PagedHeap<65536,1956,1>::VerifyBlocks
==============
*/
void PagedHeap<65536,1956,1>::VerifyBlocks(PagedHeap<65536,1956,1> *this)
{
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *v6; 
  ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *i; 
  __int64 v8; 
  __int64 v9; 

  p_freeBlocks = &this->freeBlocks;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( &this->freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * this->freeBlocks.m_size) )
  {
    v6 = &this->freeBlocks;
    do
    {
      if ( v3 > *(_DWORD *)p_freeBlocks->m_data.m_buffer )
      {
        LODWORD(v9) = *(_DWORD *)p_freeBlocks->m_data.m_buffer;
        LODWORD(v8) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 199, ASSERT_TYPE_ASSERT, "( lastIndex ) <= ( validateIt->first )", "%s <= %s\n\t%i, %i", "lastIndex", "validateIt->first", v8, v9) )
          __debugbreak();
      }
      v4 += *(_DWORD *)&p_freeBlocks->m_data.m_buffer[4];
      v3 = *(_DWORD *)p_freeBlocks->m_data.m_buffer;
      p_freeBlocks = (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8);
    }
    while ( p_freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,1957,ntl::less<unsigned int,unsigned int> > *)((char *)v6 + 8 * v6->m_size) );
  }
  for ( i = &this->usedBlocks; i != (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)&this->usedBlocks + 8 * this->usedBlocks.m_size); i = (ntl::fixed_vector_map<unsigned int,unsigned int,1956,ntl::less<unsigned int,unsigned int> > *)((char *)i + 8) )
  {
    if ( v2 > *(_DWORD *)i->m_data.m_buffer )
    {
      LODWORD(v9) = *(_DWORD *)i->m_data.m_buffer;
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 208, ASSERT_TYPE_ASSERT, "( lastIndex ) <= ( validateIt->first )", "%s <= %s\n\t%i, %i", "lastIndex", "validateIt->first", v8, v9) )
        __debugbreak();
    }
    v4 += *(_DWORD *)&i->m_data.m_buffer[4];
    v2 = *(_DWORD *)i->m_data.m_buffer;
  }
  if ( v4 != this->totalReservedPages )
  {
    LODWORD(v9) = this->totalReservedPages;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 213, ASSERT_TYPE_ASSERT, "( totalPageCount ) == ( totalReservedPages )", "%s == %s\n\t%i, %i", "totalPageCount", "totalReservedPages", v8, v9) )
      __debugbreak();
  }
}

/*
==============
PagedHeap<2,4096,0>::AddFreeBlock
==============
*/
void PagedHeap<2,4096,0>::AddFreeBlock(PagedHeap<2,4096,0> *this, unsigned int newFreeOffset, unsigned int newFreeSize)
{
  unsigned int v3; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  __int64 m_size; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  char *v13; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v14; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v22; 
  char *v23; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v24; 
  unsigned __int64 v25; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v26; 
  __int64 v27; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v28; 
  bool v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned int v33; 

  v3 = newFreeSize;
  if ( !newFreeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 222, ASSERT_TYPE_ASSERT, "(newFreeSize)", (const char *)&queryFormat, "newFreeSize") )
    __debugbreak();
  if ( newFreeOffset >= this->totalReservedPages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 223, ASSERT_TYPE_ASSERT, "(newFreeOffset < totalReservedPages)", (const char *)&queryFormat, "newFreeOffset < totalReservedPages") )
    __debugbreak();
  if ( newFreeOffset + v3 > this->totalReservedPages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 224, ASSERT_TYPE_ASSERT, "(( newFreeOffset + newFreeSize ) <= totalReservedPages)", (const char *)&queryFormat, "( newFreeOffset + newFreeSize ) <= totalReservedPages") )
    __debugbreak();
  p_freeBlocks = &this->freeBlocks;
  m_size = this->freeBlocks.m_size;
  v8 = &this->freeBlocks;
  if ( m_size > 0 )
  {
    do
    {
      v9 = m_size >> 1;
      if ( *(_DWORD *)&v8->m_data.m_buffer[8 * (m_size >> 1)] >= newFreeOffset )
      {
        m_size >>= 1;
      }
      else
      {
        v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v8 + 8 * v9 + 8);
        m_size += -1 - v9;
      }
    }
    while ( m_size > 0 );
    m_size = this->freeBlocks.m_size;
  }
  v10 = 0i64;
  if ( v8 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * m_size) )
  {
    v8 = &this->freeBlocks;
  }
  else
  {
    if ( *(_DWORD *)v8->m_data.m_buffer == newFreeOffset + v3 )
    {
      v33 = *(_DWORD *)&v8->m_data.m_buffer[4] + v3;
      if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v8 < p_freeBlocks || v8 > (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v11 = (char *)v8 - (char *)p_freeBlocks;
      if ( (((_BYTE)v8 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v8 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      v12 = this->freeBlocks.m_size;
      v8 = &this->freeBlocks;
      if ( v12 )
        v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * (v11 >> 3));
      v13 = &v8->m_data.m_buffer[8];
      v14 = v8;
      v15 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v12);
      if ( &v8->m_data.m_buffer[8] == (char *)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v15 == v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      if ( v15 < (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
        __debugbreak();
      v16 = 0i64;
      v17 = (unsigned __int64)((char *)v15 - v13 + 7) >> 3;
      if ( v13 > (char *)v15 )
        v17 = 0i64;
      if ( v17 )
      {
        do
        {
          ++v16;
          *(_QWORD *)v14->m_data.m_buffer = *(_QWORD *)v13;
          v14 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v14 + 8);
          v13 += 8;
        }
        while ( v16 < v17 );
      }
      m_size = --this->freeBlocks.m_size;
      v3 = v33;
    }
    if ( v8 != p_freeBlocks && p_freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * m_size) )
      v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v8 - 8);
  }
  v18 = m_size;
  if ( v8 != (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * m_size) )
  {
    v19 = *(_DWORD *)&v8->m_data.m_buffer[4];
    if ( v19 + *(_DWORD *)v8->m_data.m_buffer == newFreeOffset )
    {
      newFreeOffset -= v19;
      v3 += v19;
      if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v8 < p_freeBlocks || v8 > (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v20 = (char *)v8 - (char *)p_freeBlocks;
      if ( (((_BYTE)v8 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v8 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      v21 = this->freeBlocks.m_size;
      v22 = &this->freeBlocks;
      if ( v21 )
        v22 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * (v20 >> 3));
      v23 = &v22->m_data.m_buffer[8];
      v24 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v21);
      if ( &v22->m_data.m_buffer[8] == (char *)v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v24 == v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      if ( v24 < (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
        __debugbreak();
      v25 = (unsigned __int64)((char *)v24 - v23 + 7) >> 3;
      if ( v23 > (char *)v24 )
        v25 = 0i64;
      if ( v25 )
      {
        do
        {
          ++v10;
          *(_QWORD *)v22->m_data.m_buffer = *(_QWORD *)v23;
          v22 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v22 + 8);
          v23 += 8;
        }
        while ( v10 < v25 );
      }
      v18 = --this->freeBlocks.m_size;
    }
  }
  v32 = __PAIR64__(v3, newFreeOffset);
  v26 = &this->freeBlocks;
  if ( v18 > 0 )
  {
    do
    {
      v27 = v18 >> 1;
      if ( *(_DWORD *)&v26->m_data.m_buffer[8 * (v18 >> 1)] >= newFreeOffset )
      {
        v18 >>= 1;
      }
      else
      {
        v26 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v26 + 8 * v27 + 8);
        v18 += -1 - v27;
      }
    }
    while ( v18 > 0 );
    v18 = this->freeBlocks.m_size;
  }
  if ( v26 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v18) || newFreeOffset < *(_DWORD *)v26->m_data.m_buffer )
  {
    if ( v18 == 4097 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (v26 < p_freeBlocks || v26 > (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( (((_BYTE)v26 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( &v32 >= (unsigned __int64 *)v26 && &v32 < (unsigned __int64 *)&this->freeBlocks + this->freeBlocks.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v28 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * this->freeBlocks.m_size);
    if ( v26 != v28 )
    {
      if ( v26 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)&v28->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v28 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)&v28->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v29 = v28 <= v26;
      if ( v28 < v26 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v29 = v28 <= v26;
      }
      if ( !v29 )
      {
        do
        {
          v30 = *(_QWORD *)&v28[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
          v28 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v28 - 8);
          *(_QWORD *)&v28->m_data.m_buffer[8] = v30;
        }
        while ( v28 > v26 );
      }
    }
    v31 = v32;
    ++this->freeBlocks.m_size;
    *(_QWORD *)v26->m_data.m_buffer = v31;
  }
}

/*
==============
PagedHeap<2,4096,0>::Allocate
==============
*/
char *PagedHeap<2,4096,0>::Allocate(PagedHeap<2,4096,0> *this, const unsigned __int64 size)
{
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned __int64 m_size; 
  unsigned __int64 v6; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v7; 
  PagedHeap<2,4096,0> *v8; 
  unsigned int v9; 
  __int64 v11; 
  unsigned __int64 v12; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v13; 
  char *v14; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *p_usedBlocks; 
  unsigned int v19; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *v20; 
  __int64 v21; 
  __int64 v22; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *v23; 
  bool v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  int v27; 
  __int64 v28; 
  unsigned int v29; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v30; 
  __int64 v31; 
  __int64 v32; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v33; 
  bool v34; 
  __int64 v35; 
  unsigned __int64 v36; 
  char *v37; 
  unsigned int v39; 
  unsigned __int64 v40; 

  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 58, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( this->usedBlocks.m_size >= 0x1000 )
    return 0i64;
  p_freeBlocks = &this->freeBlocks;
  m_size = this->freeBlocks.m_size;
  v6 = (size + 1) >> 1;
  v7 = &this->freeBlocks;
  v8 = (PagedHeap<2,4096,0> *)((char *)&this->freeBlocks + 8 * m_size);
  if ( &this->freeBlocks == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)v8 )
    return 0i64;
  while ( 1 )
  {
    v9 = *(_DWORD *)&v7->m_data.m_buffer[4];
    if ( v9 >= (unsigned int)v6 )
      break;
    v7 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v7 + 8);
    if ( v7 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)v8 )
      return 0i64;
  }
  v39 = *(_DWORD *)v7->m_data.m_buffer;
  if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
    __debugbreak();
  if ( (v7 < p_freeBlocks || v7 > (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  v11 = (char *)v7 - (char *)p_freeBlocks;
  if ( (((_BYTE)v7 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
    __debugbreak();
  if ( v7 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
    __debugbreak();
  v12 = this->freeBlocks.m_size;
  v13 = &this->freeBlocks;
  if ( v12 )
    v13 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * (v11 >> 3));
  v14 = &v13->m_data.m_buffer[8];
  v15 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v12);
  if ( &v13->m_data.m_buffer[8] == (char *)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v15 == v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  if ( v15 < (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
    __debugbreak();
  v16 = 0i64;
  v17 = (unsigned __int64)((char *)v15 - v14 + 7) >> 3;
  if ( v14 > (char *)v15 )
    v17 = 0i64;
  if ( v17 )
  {
    do
    {
      ++v16;
      *(_QWORD *)v13->m_data.m_buffer = *(_QWORD *)v14;
      v13 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v13 + 8);
      v14 += 8;
    }
    while ( v16 < v17 );
  }
  --this->freeBlocks.m_size;
  p_usedBlocks = &this->usedBlocks;
  v19 = v39;
  v20 = p_usedBlocks;
  v40 = __PAIR64__(v6, v39);
  v21 = p_usedBlocks->m_size;
  if ( v21 > 0 )
  {
    do
    {
      v22 = v21 >> 1;
      if ( *(_DWORD *)&v20->m_data.m_buffer[8 * (v21 >> 1)] >= v39 )
      {
        v21 >>= 1;
      }
      else
      {
        v20 = (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)v20 + 8 * v22 + 8);
        v21 += -1 - v22;
      }
    }
    while ( v21 > 0 );
    v21 = p_usedBlocks->m_size;
  }
  if ( v20 == (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * v21) || v39 < *(_DWORD *)v20->m_data.m_buffer )
  {
    if ( v21 == 4096 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (v20 < p_usedBlocks || v20 > (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * p_usedBlocks->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( (((_BYTE)v20 - (_BYTE)p_usedBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( &v40 >= (unsigned __int64 *)v20 && &v40 < (unsigned __int64 *)p_usedBlocks + p_usedBlocks->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v23 = (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * p_usedBlocks->m_size);
    if ( v20 != v23 )
    {
      if ( v20 == (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)&v23->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v23 == (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)&v23->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v24 = v23 <= v20;
      if ( v23 < v20 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v24 = v23 <= v20;
      }
      if ( !v24 )
      {
        do
        {
          v25 = *(_QWORD *)&v23[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
          v23 = (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)v23 - 8);
          *(_QWORD *)&v23->m_data.m_buffer[8] = v25;
        }
        while ( v23 > v20 );
      }
      v19 = v39;
    }
    v26 = v40;
    ++p_usedBlocks->m_size;
    *(_QWORD *)v20->m_data.m_buffer = v26;
  }
  v27 = v9 - v6;
  if ( v27 )
  {
    v28 = p_freeBlocks->m_size;
    v29 = v19 + v6;
    LODWORD(v40) = v19 + v6;
    v30 = p_freeBlocks;
    HIDWORD(v40) = v27;
    v31 = v28;
    while ( v31 > 0 )
    {
      v32 = v31 >> 1;
      if ( *(_DWORD *)&v30->m_data.m_buffer[8 * (v31 >> 1)] >= v29 )
      {
        v31 >>= 1;
      }
      else
      {
        v30 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v30 + 8 * v32 + 8);
        v31 += -1 - v32;
      }
    }
    if ( v30 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * v28) || v29 < *(_DWORD *)v30->m_data.m_buffer )
    {
      if ( v28 == 4097 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
        __debugbreak();
      if ( (v30 < p_freeBlocks || v30 > (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * p_freeBlocks->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      if ( (((_BYTE)v30 - (_BYTE)p_freeBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( &v40 >= (unsigned __int64 *)v30 && &v40 < (unsigned __int64 *)p_freeBlocks + p_freeBlocks->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
        __debugbreak();
      v33 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8 * p_freeBlocks->m_size);
      if ( v30 != v33 )
      {
        if ( v30 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)&v33->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( v33 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)&v33->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        v34 = v33 <= v30;
        if ( v33 < v30 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
            __debugbreak();
          v34 = v33 <= v30;
        }
        if ( !v34 )
        {
          do
          {
            v35 = *(_QWORD *)&v33[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
            v33 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v33 - 8);
            *(_QWORD *)&v33->m_data.m_buffer[8] = v35;
          }
          while ( v33 > v30 );
        }
        v19 = v39;
      }
      v36 = v40;
      ++p_freeBlocks->m_size;
      *(_QWORD *)v30->m_data.m_buffer = v36;
    }
  }
  v37 = &this->memPtr[2 * v19];
  PagedHeap<2,4096,0>::VerifyBlocks(this);
  return v37;
}

/*
==============
PagedHeap<2,4096,0>::Free
==============
*/
char PagedHeap<2,4096,0>::Free(PagedHeap<2,4096,0> *this, void *const ptr)
{
  signed __int64 m_size; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *p_usedBlocks; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *v11; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *v16; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *v17; 
  char *v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 

  if ( ptr < this->memPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 106, ASSERT_TYPE_ASSERT, "(ptr >= memPtr)", (const char *)&queryFormat, "ptr >= memPtr") )
    __debugbreak();
  if ( ptr >= &this->memPtr[2 * (unsigned __int64)this->totalReservedPages] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 107, ASSERT_TYPE_ASSERT, "(ptr < ( memPtr + ( totalReservedPages * HEAP_PAGE_SIZE ) ))", (const char *)&queryFormat, "ptr < ( memPtr + ( totalReservedPages * HEAP_PAGE_SIZE ) )") )
    __debugbreak();
  if ( ((unsigned __int8)ptr & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 108, ASSERT_TYPE_ASSERT, "(( reinterpret_cast<uintptr_t>( ptr ) & ( HEAP_PAGE_SIZE - 1 ) ) == 0)", (const char *)&queryFormat, "( reinterpret_cast<uintptr_t>( ptr ) & ( HEAP_PAGE_SIZE - 1 ) ) == 0") )
    __debugbreak();
  m_size = this->usedBlocks.m_size;
  p_usedBlocks = &this->usedBlocks;
  v6 = &this->usedBlocks;
  v7 = m_size;
  v8 = ((unsigned __int64)ptr - (unsigned __int64)this->memPtr) >> 1;
  v9 = m_size;
  if ( m_size > 0 )
  {
    do
    {
      v10 = v7 >> 1;
      if ( *(_DWORD *)&v6->m_data.m_buffer[8 * (v7 >> 1)] >= (unsigned int)v8 )
      {
        v7 >>= 1;
      }
      else
      {
        v6 = (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)v6 + 8 * v10 + 8);
        v7 += -1 - v10;
      }
    }
    while ( v7 > 0 );
    v9 = this->usedBlocks.m_size;
  }
  v11 = (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * v9);
  if ( v6 == v11 )
    goto LABEL_56;
  v12 = (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * m_size);
  if ( (unsigned int)v8 >= *(_DWORD *)v6->m_data.m_buffer )
    v12 = v6;
  if ( (unsigned int)v8 < *(_DWORD *)v6->m_data.m_buffer )
    v9 = this->usedBlocks.m_size;
  if ( v12 == v11 )
  {
LABEL_56:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 116, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Couldn't find a block allocated at %p (offset=%d,usedsize=%zu)", ptr, v8, this->usedBlocks.m_size) )
      __debugbreak();
    return 0;
  }
  else
  {
    v13 = *(_DWORD *)&v12->m_data.m_buffer[4];
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
      __debugbreak();
    if ( (v12 < p_usedBlocks || v12 > (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * this->usedBlocks.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    v14 = (char *)v12 - (char *)p_usedBlocks;
    if ( (((_BYTE)v12 - (_BYTE)p_usedBlocks) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( v12 == (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * this->usedBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
      __debugbreak();
    v15 = this->usedBlocks.m_size;
    v16 = &this->usedBlocks;
    if ( v15 )
      v16 = (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * (v14 >> 3));
    v17 = (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)p_usedBlocks + 8 * v15);
    v18 = &v16->m_data.m_buffer[8];
    if ( &v16->m_data.m_buffer[8] == (char *)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
      __debugbreak();
    if ( v17 == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
      __debugbreak();
    if ( v17 < (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v19 = 0i64;
    v20 = (unsigned __int64)((char *)v17 - v18 + 7) >> 3;
    if ( v18 > (char *)v17 )
      v20 = 0i64;
    if ( v20 )
    {
      do
      {
        ++v19;
        *(_QWORD *)v16->m_data.m_buffer = *(_QWORD *)v18;
        v16 = (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)v16 + 8);
        v18 += 8;
      }
      while ( v19 < v20 );
    }
    --this->usedBlocks.m_size;
    PagedHeap<2,4096,0>::AddFreeBlock(this, v8, v13);
    PagedHeap<2,4096,0>::VerifyBlocks(this);
    return 1;
  }
}

/*
==============
PagedHeap<2,4096,0>::Init
==============
*/
void PagedHeap<2,4096,0>::Init(PagedHeap<2,4096,0> *this, void *const ptr, const unsigned __int64 reserveSize, const char *const debugName)
{
  unsigned __int64 v7; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *i; 
  unsigned __int64 v9; 
  __int64 m_size; 
  __int64 j; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v12; 
  bool v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  if ( (reserveSize & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 31, ASSERT_TYPE_ASSERT, "(( reserveSize & ( HEAP_PAGE_SIZE - 1 ) ) == 0)", (const char *)&queryFormat, "( reserveSize & ( HEAP_PAGE_SIZE - 1 ) ) == 0") )
    __debugbreak();
  this->totalReservedPages = reserveSize >> 1;
  this->memPtr = (char *)ptr;
  v7 = 0i64;
  for ( i = &this->freeBlocks; v7 < this->freeBlocks.m_size; ++v7 )
  {
    if ( v7 >= 0x1001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  v9 = 0i64;
  for ( this->freeBlocks.m_size = 0i64; v9 < this->usedBlocks.m_size; ++v9 )
  {
    if ( v9 >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  this->usedBlocks.m_size = 0i64;
  HIDWORD(v16) = this->totalReservedPages;
  m_size = this->freeBlocks.m_size;
  LODWORD(v16) = 0;
  for ( j = m_size; m_size > 0; m_size >>= 1 )
    ;
  if ( i == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)i + 8 * j) || *(_DWORD *)i->m_data.m_buffer )
  {
    if ( 4097 == j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( i > (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)i + 8 * this->freeBlocks.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( &v16 >= (__int64 *)i && &v16 < (__int64 *)&i->m_data.m_buffer[8 * this->freeBlocks.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v12 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)i + 8 * this->freeBlocks.m_size);
    if ( i != v12 )
    {
      if ( i == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)&v12->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v12 == (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)&v12->m_data.m_buffer[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v13 = v12 <= i;
      if ( v12 < i )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v13 = v12 <= i;
      }
      if ( !v13 )
      {
        do
        {
          v14 = *(_QWORD *)&v12[-1].m_keyAccessor.ntl::unary_function<ntl::pair<unsigned int,unsigned int>,unsigned int>;
          v12 = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v12 - 8);
          *(_QWORD *)&v12->m_data.m_buffer[8] = v14;
        }
        while ( v12 > i );
      }
    }
    v15 = v16;
    ++this->freeBlocks.m_size;
    *(_QWORD *)i->m_data.m_buffer = v15;
  }
}

/*
==============
PagedHeap<2,4096,0>::VerifyBlocks
==============
*/
void PagedHeap<2,4096,0>::VerifyBlocks(PagedHeap<2,4096,0> *this)
{
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *v6; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *i; 
  __int64 v8; 
  __int64 v9; 

  p_freeBlocks = &this->freeBlocks;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( &this->freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)&this->freeBlocks + 8 * this->freeBlocks.m_size) )
  {
    v6 = &this->freeBlocks;
    do
    {
      if ( v3 > *(_DWORD *)p_freeBlocks->m_data.m_buffer )
      {
        LODWORD(v9) = *(_DWORD *)p_freeBlocks->m_data.m_buffer;
        LODWORD(v8) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 199, ASSERT_TYPE_ASSERT, "( lastIndex ) <= ( validateIt->first )", "%s <= %s\n\t%i, %i", "lastIndex", "validateIt->first", v8, v9) )
          __debugbreak();
      }
      v4 += *(_DWORD *)&p_freeBlocks->m_data.m_buffer[4];
      v3 = *(_DWORD *)p_freeBlocks->m_data.m_buffer;
      p_freeBlocks = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8);
    }
    while ( p_freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)v6 + 8 * v6->m_size) );
  }
  for ( i = &this->usedBlocks; i != (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)&this->usedBlocks + 8 * this->usedBlocks.m_size); i = (ntl::fixed_vector_map<unsigned int,unsigned int,4096,ntl::less<unsigned int,unsigned int> > *)((char *)i + 8) )
  {
    if ( v2 > *(_DWORD *)i->m_data.m_buffer )
    {
      LODWORD(v9) = *(_DWORD *)i->m_data.m_buffer;
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 208, ASSERT_TYPE_ASSERT, "( lastIndex ) <= ( validateIt->first )", "%s <= %s\n\t%i, %i", "lastIndex", "validateIt->first", v8, v9) )
        __debugbreak();
    }
    v4 += *(_DWORD *)&i->m_data.m_buffer[4];
    v2 = *(_DWORD *)i->m_data.m_buffer;
  }
  if ( v4 != this->totalReservedPages )
  {
    LODWORD(v9) = this->totalReservedPages;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\paged_heap.h", 213, ASSERT_TYPE_ASSERT, "( totalPageCount ) == ( totalReservedPages )", "%s == %s\n\t%i, %i", "totalPageCount", "totalReservedPages", v8, v9) )
      __debugbreak();
  }
}

