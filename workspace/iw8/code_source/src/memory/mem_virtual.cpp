/*
==============
Mem_Virtual_TryAlloc
==============
*/

void *__fastcall Mem_Virtual_TryAlloc(unsigned __int64 size, const char *name, MemTrackType type)
{
  return ?Mem_Virtual_TryAlloc@@YAPEAX_KPEBDW4MemTrackType@@@Z(size, name, type);
}

/*
==============
Mem_Virtual_Free
==============
*/

void __fastcall Mem_Virtual_Free(void *ptr)
{
  ?Mem_Virtual_Free@@YAXPEAX@Z(ptr);
}

/*
==============
Mem_Virtual_Allocator::IsPtrInside
==============
*/

bool __fastcall Mem_Virtual_Allocator::IsPtrInside(Mem_Virtual_Allocator *this, const void *ptr)
{
  return ?IsPtrInside@Mem_Virtual_Allocator@@QEBA_NPEBX@Z(this, ptr);
}

/*
==============
Mem_Virtual_SetMinimalTracking
==============
*/

void __fastcall Mem_Virtual_SetMinimalTracking(void *ptr)
{
  ?Mem_Virtual_SetMinimalTracking@@YAXPEAX@Z(ptr);
}

/*
==============
Mem_Virtual_Decommit
==============
*/

void __fastcall Mem_Virtual_Decommit(void *ptr, unsigned __int64 size)
{
  ?Mem_Virtual_Decommit@@YAXPEAX_K@Z(ptr, size);
}

/*
==============
Mem_Virtual_GetCommitSize
==============
*/

unsigned __int64 __fastcall Mem_Virtual_GetCommitSize()
{
  return ?Mem_Virtual_GetCommitSize@@YA_KXZ();
}

/*
==============
Mem_Virtual_ForEachVirtualAlloc
==============
*/

void __fastcall Mem_Virtual_ForEachVirtualAlloc(void (__fastcall *callback)(const char *, unsigned __int64))
{
  ?Mem_Virtual_ForEachVirtualAlloc@@YAXP6AXPEBD_K@Z@Z(callback);
}

/*
==============
Mem_Virtual_Init
==============
*/

void Mem_Virtual_Init(void)
{
  ?Mem_Virtual_Init@@YAXXZ();
}

/*
==============
Mem_Virtual_Commit
==============
*/

void __fastcall Mem_Virtual_Commit(void *ptr, unsigned __int64 size, Mem_AllocFlags flags, const char *name, const MemTrackType type)
{
  ?Mem_Virtual_Commit@@YAXPEAX_KW4Mem_AllocFlags@@PEBDW4MemTrackType@@@Z(ptr, size, flags, name, type);
}

/*
==============
Mem_Virtual_DumpStats
==============
*/

void Mem_Virtual_DumpStats(void)
{
  ?Mem_Virtual_DumpStats@@YAXXZ();
}

/*
==============
Mem_Virtual_Reserve
==============
*/

void *__fastcall Mem_Virtual_Reserve(unsigned __int64 size, const char *name, MemTrackType type)
{
  return ?Mem_Virtual_Reserve@@YAPEAX_KPEBDW4MemTrackType@@@Z(size, name, type);
}

/*
==============
Mem_Virtual_Alloc
==============
*/

void *__fastcall Mem_Virtual_Alloc(unsigned __int64 size, const char *name, MemTrackType type)
{
  return ?Mem_Virtual_Alloc@@YAPEAX_KPEBDW4MemTrackType@@@Z(size, name, type);
}

/*
==============
Mem_Virtual_Allocator::IsPtrInside
==============
*/
bool Mem_Virtual_Allocator::IsPtrInside(Mem_Virtual_Allocator *this, const void *ptr)
{
  return ptr >= this->m_reservePtr && ptr < &this->m_reservePtr[this->m_reserveSize];
}

/*
==============
Mem_Virtual_Alloc
==============
*/
unsigned __int8 *Mem_Virtual_Alloc(unsigned __int64 size, const char *name, MemTrackType type)
{
  Mem_Virtual_Allocator *v6; 
  bool v7; 
  unsigned __int64 v8; 
  bool v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *m_reservePtr; 
  unsigned __int64 outNewCommitSize; 
  void *outNewCommitPtr; 

  Profile_Begin(569);
  Mem_Virtual_Managed_Lock();
  v6 = Mem_Virtual_Managed_ReserveInternal((size + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
  Mem_Virtual_Managed_SetTrack(v6, name, type);
  IWMem_Allocator_CreateFixed(&v6->m_iwMemCommit, name, (IWMemAllocatorType)4, v6->m_reservePtr, (size + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
  v7 = Mem_Virtual_Managed_CommitInternal(v6, v6->m_reservePtr, (size + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64, &outNewCommitPtr, &outNewCommitSize, MEM_ALLOC_FLAG_NONE, name, type);
  v8 = outNewCommitSize;
  v9 = v7;
  v10 = (unsigned __int8 *)outNewCommitPtr;
  if ( v7 )
  {
    m_reservePtr = v6->m_reservePtr;
    v6->m_singleAlloc = 1;
    IWMem_Allocator_CreateFixed(&v6->m_iwMemSingleAlloc, name, (IWMemAllocatorType)8, m_reservePtr, (size + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
    IWMem_Profile_Push(name);
    IWMem_Alloc(v6->m_iwMemSingleAlloc, v6->m_reservePtr, size);
    IWMem_Profile_Pop();
    if ( v6->m_reservePtr != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 370, ASSERT_TYPE_ASSERT, "(allocator.m_reservePtr == newCommitPtr)", (const char *)&queryFormat, "allocator.m_reservePtr == newCommitPtr") )
      __debugbreak();
    if ( v6->m_commitSize != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 371, ASSERT_TYPE_ASSERT, "(allocator.m_commitSize == newCommitSize)", (const char *)&queryFormat, "allocator.m_commitSize == newCommitSize") )
      __debugbreak();
  }
  s_virtualAllocLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_virtualAllocLock);
  Sys_CheckReleaseLock(&s_virtualAllocLock);
  if ( v9 )
  {
    memset_0(v10, 0, v8);
  }
  else
  {
    Mem_Virtual_Free(v6->m_reservePtr);
    v10 = NULL;
  }
  Profile_EndInternal(NULL);
  if ( !v10 )
    Mem_Error_CannotAlloc_Dev(COUNT, "Mem_Virtual_Alloc", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 405, "size=%zu", size);
  return v10;
}

/*
==============
Mem_Virtual_Commit
==============
*/
void Mem_Virtual_Commit(void *ptr, unsigned __int64 size, Mem_AllocFlags flags, const char *name, const MemTrackType type)
{
  Mem_Virtual_Allocator *Allocator; 
  bool v10; 
  void *v11; 
  bool v12; 
  unsigned __int64 v13; 
  size_t v14; 
  size_t Size; 
  void *outNewCommitPtr; 

  Profile_Begin(569);
  Mem_Virtual_Managed_Lock();
  Allocator = Mem_Virtual_Managed_FindAllocator(ptr);
  Mem_Virtual_Managed_CheckEndIsWithin(Allocator, ptr, size);
  v10 = Mem_Virtual_Managed_CommitInternal(Allocator, ptr, size, &outNewCommitPtr, &Size, flags, name, type);
  v11 = outNewCommitPtr;
  v12 = v10;
  if ( v10 && outNewCommitPtr && !Mem_Virtual_Allocator::IsPtrInside(Allocator, outNewCommitPtr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 428, ASSERT_TYPE_ASSERT, "(allocator.IsPtrInside( newCommitPtr ))", (const char *)&queryFormat, "allocator.IsPtrInside( newCommitPtr )") )
    __debugbreak();
  s_virtualAllocLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_virtualAllocLock);
  Sys_CheckReleaseLock(&s_virtualAllocLock);
  if ( v12 )
  {
    if ( v11 )
    {
      v13 = Size;
      if ( !Size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 438, ASSERT_TYPE_ASSERT, "(newCommitSize)", (const char *)&queryFormat, "newCommitSize") )
        __debugbreak();
      if ( (flags & 1) != 0 )
        DebugWipe(v11, v13);
      else
        memset_0(v11, 0, v13);
    }
  }
  else
  {
    v14 = Size;
    if ( !Size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 453, ASSERT_TYPE_ASSERT, "(newCommitSize > 0)", (const char *)&queryFormat, "newCommitSize > 0") )
      __debugbreak();
    Mem_Error_CannotAlloc_Dev(COUNT, "Mem_Virtual_Commit", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 455, "size=%zu", v14);
  }
  Profile_EndInternal(NULL);
}

/*
==============
Mem_Virtual_Decommit
==============
*/
void Mem_Virtual_Decommit(void *ptr, unsigned __int64 size)
{
  Mem_Virtual_Allocator *Allocator; 

  Profile_Begin(569);
  Mem_Virtual_Managed_Lock();
  Allocator = Mem_Virtual_Managed_FindAllocator(ptr);
  Mem_Virtual_Managed_CheckEndIsWithin(Allocator, ptr, size);
  Mem_Virtual_Managed_DecommitInternal(Allocator, ptr, size);
  s_virtualAllocLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_virtualAllocLock);
  Sys_CheckReleaseLock(&s_virtualAllocLock);
  Profile_EndInternal(NULL);
}

/*
==============
Mem_Virtual_DumpStats
==============
*/
void Mem_Virtual_DumpStats(void)
{
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned __int64 v1; 
  PagedHeap<65536,64,1> *v2; 
  unsigned __int64 v3; 
  char *v4; 

  Sys_CheckAcquireLock(&s_virtualAllocLock);
  AcquireSRWLockShared((PSRWLOCK)&s_virtualAllocLock);
  Com_Printf(10, "Mem_Virtual Reserve From PMem:\n");
  Com_Printf(10, "Ptr:                 %p\n", s_virtualReserveMem);
  Com_Printf(10, "Size:                %8zukb\n", ((unsigned __int64)s_virtualReserveHeap.totalReservedPages << 6) & 0x3FFFFFFFFFFFFFi64);
  p_freeBlocks = &s_virtualReserveHeap.freeBlocks;
  v1 = 0i64;
  v2 = (PagedHeap<65536,64,1> *)((char *)&s_virtualReserveHeap.freeBlocks + 8 * s_virtualReserveHeap.freeBlocks.m_size);
  if ( &s_virtualReserveHeap.freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)v2 )
  {
    do
    {
      v3 = v1;
      v1 = *(unsigned int *)&p_freeBlocks->m_data.m_buffer[4];
      if ( v1 <= v3 )
        v1 = v3;
      p_freeBlocks = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8);
    }
    while ( p_freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)v2 );
  }
  Com_Printf(10, "Largest Free Block:  %8zukb\n", (v1 << 6) & 0x3FFFFFFFFFFFFFi64);
  Com_Printf(10, "\n");
  Com_Printf(10, "Mem_Virtual Allocations:\n");
  if ( &s_virtualAllocations != (ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *)((char *)&s_virtualAllocations + 72 * s_virtualAllocations.m_size) )
  {
    v4 = &s_virtualAllocations.m_data.m_buffer[56];
    do
    {
      Com_Printf(10, "\n");
      Com_Printf(10, "%s (type=%d)\n", *(const char **)v4, *((unsigned int *)v4 + 2));
      Com_Printf(10, "\tReserve:    %8zukb %p-%p\n", *((_QWORD *)v4 - 6) >> 10, *((const void **)v4 - 7), (const void *)(*((_QWORD *)v4 - 7) + *((_QWORD *)v4 - 6)));
      Com_Printf(10, "\tCommit:     %8zukb %p-%p\n", *((_QWORD *)v4 - 5) >> 10, *((const void **)v4 - 7), (const void *)(*((_QWORD *)v4 - 7) + *((_QWORD *)v4 - 5)));
      v4 += 72;
    }
    while ( v4 - 56 != (char *)&s_virtualAllocations + 72 * s_virtualAllocations.m_size );
  }
  Com_Printf(10, "\n");
  ReleaseSRWLockShared((PSRWLOCK)&s_virtualAllocLock);
  Sys_CheckReleaseLock(&s_virtualAllocLock);
}

/*
==============
Mem_Virtual_ForEachVirtualAlloc
==============
*/
void Mem_Virtual_ForEachVirtualAlloc(void (*callback)(const char *, unsigned __int64))
{
  void (*v1)(void); 
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  char *v4; 
  char *v5; 
  __int64 v6; 
  __int64 v7; 
  char *v8; 
  char *v9; 
  bool v10; 
  signed __int64 v11; 
  char *v12; 
  char *v13; 
  __int64 v14; 
  ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *v15; 
  char *v16; 
  __int64 v18; 
  char v19[512]; 
  unsigned __int64 v20; 

  v18 = -2i64;
  v1 = (void (*)(void))callback;
  v2 = 0i64;
  v3 = 0i64;
  v20 = 0i64;
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 527, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  Sys_CheckAcquireLock(&s_virtualAllocLock);
  AcquireSRWLockShared((PSRWLOCK)&s_virtualAllocLock);
  if ( &s_virtualAllocations != (ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *)((char *)&s_virtualAllocations + 72 * s_virtualAllocations.m_size) )
  {
    v4 = &s_virtualAllocations.m_data.m_buffer[56];
    do
    {
      if ( !*(_QWORD *)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 534, ASSERT_TYPE_ASSERT, "(vit->m_trackName)", (const char *)&queryFormat, "vit->m_trackName") )
        __debugbreak();
      v5 = v19;
      v6 = (__int64)(8 * v3) >> 3;
      while ( v6 > 0 )
      {
        v7 = v6 >> 1;
        if ( *(_QWORD *)&v5[8 * (v6 >> 1)] >= *(_QWORD *)v4 )
        {
          v6 >>= 1;
        }
        else
        {
          v5 += 8 * v7 + 8;
          v6 += -1 - v7;
        }
      }
      if ( v5 == &v19[8 * v3] || *(_QWORD *)v4 < *(_QWORD *)v5 )
      {
        if ( v3 == 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
          __debugbreak();
        if ( (v5 < v19 || v5 > &v19[8 * v3]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
          __debugbreak();
        if ( ((v5 - v19) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
          __debugbreak();
        if ( v4 >= v5 && v4 < &v19[8 * v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
          __debugbreak();
        v8 = &v19[8 * v3];
        if ( v5 != v8 )
        {
          v9 = &v19[8 * v3 + 8];
          if ( v5 == v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
            __debugbreak();
          if ( v8 == v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
            __debugbreak();
          v10 = v8 <= v5;
          if ( v8 < v5 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
              __debugbreak();
            v10 = v8 <= v5;
          }
          if ( !v10 )
          {
            v11 = v9 - v8;
            do
            {
              v8 -= 8;
              *(_QWORD *)&v8[v11] = *(_QWORD *)v8;
            }
            while ( v8 > v5 );
            v3 = v20;
          }
        }
        v20 = v3 + 1;
        *(_QWORD *)v5 = *(_QWORD *)v4;
        v3 = v20;
      }
      v4 += 72;
    }
    while ( v4 - 56 != (char *)&s_virtualAllocations + 72 * s_virtualAllocations.m_size );
    v2 = 0i64;
    v1 = (void (*)(void))callback;
  }
  v12 = v19;
  v13 = &v19[8 * v3];
  if ( v19 != v13 )
  {
    do
    {
      v14 = 0i64;
      v15 = (ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *)((char *)&s_virtualAllocations + 72 * s_virtualAllocations.m_size);
      if ( &s_virtualAllocations != v15 )
      {
        v16 = &s_virtualAllocations.m_data.m_buffer[16];
        do
        {
          if ( *((_QWORD *)v16 + 5) == *(_QWORD *)v12 )
            v14 += *(_QWORD *)v16;
          v16 += 72;
        }
        while ( v16 - 16 != (char *)v15 );
        if ( v14 )
          v1();
      }
      v12 += 8;
    }
    while ( v12 != v13 );
  }
  ReleaseSRWLockShared((PSRWLOCK)&s_virtualAllocLock);
  Sys_CheckReleaseLock(&s_virtualAllocLock);
  if ( v3 )
  {
    do
    {
      if ( v2 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v2;
    }
    while ( v2 < v3 );
  }
}

/*
==============
Mem_Virtual_Free
==============
*/
void Mem_Virtual_Free(void *ptr)
{
  Mem_Virtual_Allocator *Allocator; 
  Mem_Virtual_Allocator *v3; 
  unsigned __int64 m_commitSize; 
  ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *v5; 
  ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *v7; 
  bool v8; 

  Profile_Begin(569);
  if ( (_WORD)ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 493, ASSERT_TYPE_ASSERT, "(IsAligned( basePtr, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( basePtr, MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  Mem_Virtual_Managed_Lock();
  Allocator = Mem_Virtual_Managed_FindAllocator(ptr);
  v3 = Allocator;
  if ( Allocator->m_singleAlloc )
    IWMem_Allocator_Destroy(Allocator->m_iwMemSingleAlloc);
  Mem_Virtual_Managed_DecommitInternal(v3, ptr, v3->m_reserveSize);
  m_commitSize = v3->m_commitSize;
  if ( m_commitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 508, ASSERT_TYPE_ASSERT, "( allocator.m_commitSize ) == ( 0 )", "%s == %s\n\t%llu, %llu", "allocator.m_commitSize", "0", m_commitSize, 0i64) )
    __debugbreak();
  IWMem_Allocator_Destroy(v3->m_iwMemCommit);
  PagedHeap<65536,64,1>::Free(&s_virtualReserveHeap, ptr);
  if ( !s_virtualAllocations.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
    __debugbreak();
  if ( (v3 < (Mem_Virtual_Allocator *)&s_virtualAllocations || v3 > (Mem_Virtual_Allocator *)&s_virtualAllocations + s_virtualAllocations.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  if ( (char *)v3 - (char *)&s_virtualAllocations != 72 * (((char *)v3 - (char *)&s_virtualAllocations) / 0x48ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
    __debugbreak();
  if ( v3 == (Mem_Virtual_Allocator *)((char *)&s_virtualAllocations + 72 * s_virtualAllocations.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
    __debugbreak();
  v5 = &s_virtualAllocations;
  if ( s_virtualAllocations.m_size )
    v5 = (ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *)((char *)&s_virtualAllocations + 72 * (((char *)v3 - (char *)&s_virtualAllocations) / 72));
  _RBX = &v5->m_data.m_buffer[72];
  v7 = (ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *)((char *)&s_virtualAllocations + 72 * s_virtualAllocations.m_size);
  if ( &v5->m_data.m_buffer[72] == (char *)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v7 == v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  v8 = _RBX < (char *)v7;
  if ( _RBX > (char *)v7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v8 = _RBX < (char *)v7;
  }
  if ( v8 )
  {
    _RAX = v5;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm1, ymmword ptr [rbx+20h]
        vmovups ymmword ptr [rax+20h], ymm1
        vmovsd  xmm0, qword ptr [rbx+40h]
      }
      _RBX += 72;
      __asm { vmovsd  qword ptr [rax+40h], xmm0 }
      _RAX = (ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *)((char *)_RAX + 72);
    }
    while ( _RBX < (char *)v7 );
  }
  --s_virtualAllocations.m_size;
  s_virtualAllocLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_virtualAllocLock);
  Sys_CheckReleaseLock(&s_virtualAllocLock);
  Profile_EndInternal(NULL);
}

/*
==============
Mem_Virtual_GetCommitSize
==============
*/
__int64 Mem_Virtual_GetCommitSize()
{
  return s_commitSize;
}

/*
==============
Mem_Virtual_Init
==============
*/
void Mem_Virtual_Init(void)
{
  PMem_BeginAlloc("Mem_Virtual", PMEM_STACK_MEM_VIRTUAL);
  s_virtualReserveMem = PMem_Alloc(0x200000000ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_MEM_VIRTUAL, "Mem_Virtual_Init");
  PMem_EndAlloc("Mem_Virtual", PMEM_STACK_MEM_VIRTUAL);
  if ( !s_virtualReserveMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 295, ASSERT_TYPE_ASSERT, "(s_virtualReserveMem)", (const char *)&queryFormat, "s_virtualReserveMem") )
    __debugbreak();
  PagedHeap<65536,64,1>::Init(&s_virtualReserveHeap, s_virtualReserveMem, 0x200000000ui64, "IW Mem_Virtual");
  InitializeSRWLock((PSRWLOCK)&s_virtualAllocLock);
  s_virtualAllocLock.initialized = -1412623820;
  s_virtualAllocLock.acquireLock = 0;
  s_virtualAllocLock.writeThreadId = 0;
}

/*
==============
Mem_Virtual_Managed_CheckEndIsWithin
==============
*/
void Mem_Virtual_Managed_CheckEndIsWithin(const Mem_Virtual_Allocator *alloc, void *ptr, unsigned __int64 size)
{
  unsigned __int8 *v6; 

  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 103, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  v6 = (unsigned __int8 *)ptr + size - 1;
  if ( (v6 < alloc->m_reservePtr || v6 >= &alloc->m_reservePtr[alloc->m_reserveSize]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 104, ASSERT_TYPE_ASSERT, "(alloc.IsPtrInside( reinterpret_cast<byte*>( ptr ) + size - 1 ))", "%s\n\tOperation extends out of reserved range", "alloc.IsPtrInside( reinterpret_cast<byte*>( ptr ) + size - 1 )") )
    __debugbreak();
}

/*
==============
Mem_Virtual_Managed_CommitInternal
==============
*/
char Mem_Virtual_Managed_CommitInternal(Mem_Virtual_Allocator *allocator, void *const ptr, unsigned __int64 size, void **outNewCommitPtr, unsigned __int64 *outNewCommitSize, Mem_AllocFlags flags, const char *name)
{
  unsigned __int8 *v11; 
  const char *v12; 
  int v13; 
  const char *v14; 
  unsigned __int8 *v15; 
  unsigned __int64 v16; 

  if ( !outNewCommitPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 159, ASSERT_TYPE_ASSERT, "(outNewCommitPtr)", (const char *)&queryFormat, "outNewCommitPtr") )
    __debugbreak();
  if ( !outNewCommitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 160, ASSERT_TYPE_ASSERT, "(outNewCommitSize)", (const char *)&queryFormat, "outNewCommitSize") )
    __debugbreak();
  if ( (_WORD)ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 162, ASSERT_TYPE_ASSERT, "(IsAligned( basePtr, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( basePtr, MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  if ( (_WORD)size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 163, ASSERT_TYPE_ASSERT, "(IsAligned( size, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( size, MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 164, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  v11 = (unsigned __int8 *)ptr + size;
  if ( allocator->m_pageRange.firstPageID != -1 )
  {
    v15 = &allocator->m_reservePtr[allocator->m_commitSize];
    if ( ptr <= v15 )
    {
      if ( ptr < v15 )
      {
        ptr = &allocator->m_reservePtr[allocator->m_commitSize];
LABEL_31:
        if ( v11 <= &allocator->m_reservePtr[allocator->m_reserveSize] )
          goto LABEL_35;
        v12 = "endPtr <= ( allocator.m_reservePtr + allocator.m_reserveSize )";
        v13 = 193;
        v14 = "(endPtr <= ( allocator.m_reservePtr + allocator.m_reserveSize ))";
        goto LABEL_33;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 183, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cannot leave gaps in virtual memory") )
    {
      __debugbreak();
    }
    if ( ptr != v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 192, ASSERT_TYPE_ASSERT, "(startPtr == commitEnd)", (const char *)&queryFormat, "startPtr == commitEnd") )
      __debugbreak();
    goto LABEL_31;
  }
  if ( allocator->m_pageRange.lastPageID != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 171, ASSERT_TYPE_ASSERT, "(allocator.m_pageRange.lastPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "allocator.m_pageRange.lastPageID == MEM_PAGEID_INVALID") )
    __debugbreak();
  if ( ptr != allocator->m_reservePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 172, ASSERT_TYPE_ASSERT, "(ptr == allocator.m_reservePtr)", (const char *)&queryFormat, "ptr == allocator.m_reservePtr") )
    __debugbreak();
  if ( allocator->m_commitSize )
  {
    v12 = "allocator.m_commitSize == 0";
    v13 = 173;
    v14 = "(allocator.m_commitSize == 0)";
LABEL_33:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", v13, ASSERT_TYPE_ASSERT, v14, (const char *)&queryFormat, v12) )
      __debugbreak();
  }
LABEL_35:
  if ( v11 <= ptr )
  {
    *outNewCommitPtr = NULL;
    *outNewCommitSize = 0i64;
  }
  else
  {
    v16 = v11 - (_BYTE *)ptr;
    *outNewCommitPtr = ptr;
    *outNewCommitSize = v11 - (_BYTE *)ptr;
    if ( !PMem_CommitMemoryPartial(PMEM_STACK_MEM_VIRTUAL, (unsigned __int8 *)ptr, v11, (unsigned __int8 *)ptr, NULL, &allocator->m_pageRange, name) )
      return 0;
    allocator->m_commitSize += v11 - (_BYTE *)ptr;
    if ( ((unsigned __int8)s_commitSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", s_commitSize) )
      __debugbreak();
    if ( _InterlockedExchangeAdd64(s_commitSize, v16) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 208, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchangeAdd64( &s_commitSize, truncate_cast<int64_t>( endPtr - startPtr ) ) >= 0)", (const char *)&queryFormat, "Sys_InterlockedExchangeAdd64( &s_commitSize, truncate_cast<int64_t>( endPtr - startPtr ) ) >= 0") )
      __debugbreak();
    IWMem_Alloc(allocator->m_iwMemCommit, ptr, v16);
  }
  return 1;
}

/*
==============
Mem_Virtual_Managed_DecommitInternal
==============
*/
void Mem_Virtual_Managed_DecommitInternal(Mem_Virtual_Allocator *allocator, void *const ptr, const unsigned __int64 size)
{
  Mem_PageID lastPageID; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  StreamerMemLoan result; 

  if ( (_WORD)ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 234, ASSERT_TYPE_ASSERT, "(IsAligned( basePtr, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( basePtr, MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  if ( (_WORD)size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 235, ASSERT_TYPE_ASSERT, "(IsAligned( size, MEM_VIRTUAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( size, MEM_VIRTUAL_PAGE_SIZE )") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 236, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  lastPageID = allocator->m_pageRange.lastPageID;
  if ( allocator->m_pageRange.firstPageID == -1 )
  {
    if ( lastPageID != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 241, ASSERT_TYPE_ASSERT, "(allocator.m_pageRange.lastPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "allocator.m_pageRange.lastPageID == MEM_PAGEID_INVALID") )
      __debugbreak();
  }
  else
  {
    if ( lastPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 246, ASSERT_TYPE_ASSERT, "(allocator.m_pageRange.lastPageID != MEM_PAGEID_INVALID)", (const char *)&queryFormat, "allocator.m_pageRange.lastPageID != MEM_PAGEID_INVALID") )
      __debugbreak();
    v7 = &allocator->m_reservePtr[allocator->m_commitSize];
    v8 = (unsigned __int8 *)ptr + size;
    if ( ptr < allocator->m_reservePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 253, ASSERT_TYPE_ASSERT, "(startPtr >= allocator.m_reservePtr)", (const char *)&queryFormat, "startPtr >= allocator.m_reservePtr") )
      __debugbreak();
    if ( v8 > &allocator->m_reservePtr[allocator->m_reserveSize] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 254, ASSERT_TYPE_ASSERT, "(endPtr <= ( allocator.m_reservePtr + allocator.m_reserveSize ))", (const char *)&queryFormat, "endPtr <= ( allocator.m_reservePtr + allocator.m_reserveSize )") )
      __debugbreak();
    if ( ptr < v7 )
    {
      if ( v8 <= v7 )
        v7 = v8;
      if ( v7 != ptr )
      {
        if ( ptr < allocator->m_reservePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 274, ASSERT_TYPE_ASSERT, "(startPtr >= allocator.m_reservePtr)", (const char *)&queryFormat, "startPtr >= allocator.m_reservePtr") )
          __debugbreak();
        if ( (unsigned __int64)ptr - (unsigned __int64)allocator->m_reservePtr > allocator->m_commitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 275, ASSERT_TYPE_ASSERT, "(static_cast<size_t>( startPtr - allocator.m_reservePtr ) <= allocator.m_commitSize)", (const char *)&queryFormat, "static_cast<size_t>( startPtr - allocator.m_reservePtr ) <= allocator.m_commitSize") )
          __debugbreak();
        if ( ((unsigned __int8)s_commitSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", s_commitSize) )
          __debugbreak();
        if ( _InterlockedExchangeAdd64(s_commitSize, (_BYTE *)ptr - v7) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 278, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchangeAdd64( &s_commitSize, truncate_cast<int64_t>( startPtr - endPtr ) ) >= 0)", (const char *)&queryFormat, "Sys_InterlockedExchangeAdd64( &s_commitSize, truncate_cast<int64_t>( startPtr - endPtr ) ) >= 0") )
          __debugbreak();
        IWMem_FreeRange(allocator->m_iwMemCommit, ptr, v7 - (_BYTE *)ptr);
        PMem_DecommitMemoryPartial(&result, PMEM_STACK_MEM_VIRTUAL, (unsigned __int8 *)ptr, v7, allocator->m_reservePtr, &allocator->m_pageRange);
        StreamerMemLoan::~StreamerMemLoan(&result);
        allocator->m_commitSize = (_BYTE *)ptr - allocator->m_reservePtr;
      }
    }
  }
}

/*
==============
Mem_Virtual_Managed_FindAllocator
==============
*/
ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *Mem_Virtual_Managed_FindAllocator(void *ptr)
{
  ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *v1; 
  ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *v2; 

  v1 = &s_virtualAllocations;
  v2 = (ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *)((char *)&s_virtualAllocations + 72 * s_virtualAllocations.m_size);
  if ( &s_virtualAllocations == v2 )
    goto LABEL_11;
  do
  {
    if ( (unsigned __int64)ptr >= *(_QWORD *)v1->m_data.m_buffer && (unsigned __int64)ptr < *(_QWORD *)&v1->m_data.m_buffer[8] + *(_QWORD *)v1->m_data.m_buffer )
      break;
    v1 = (ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *)((char *)v1 + 72);
  }
  while ( v1 != v2 );
  if ( v1 == v2 )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 94, ASSERT_TYPE_ASSERT, "(it != s_virtualAllocations.end())", "%s\n\tUnable to find a virtual memory reserve that contains the pointer (%p)", "it != s_virtualAllocations.end()", ptr) )
      __debugbreak();
  }
  return v1;
}

/*
==============
Mem_Virtual_Managed_Lock
==============
*/
char Mem_Virtual_Managed_Lock()
{
  threadId_t CurrentThreadId; 
  int v2; 

  Sys_CheckAcquireLock(&s_virtualAllocLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_virtualAllocLock);
  CurrentThreadId = Sys_GetCurrentThreadId();
  s_virtualAllocLock.writeThreadId = CurrentThreadId;
  if ( !CurrentThreadId )
  {
    v2 = 0;
    LOBYTE(CurrentThreadId) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v2, 0i64);
    if ( (_BYTE)CurrentThreadId )
      __debugbreak();
  }
  return CurrentThreadId;
}

/*
==============
Mem_Virtual_Managed_ReserveInternal
==============
*/
Mem_Virtual_Allocator *Mem_Virtual_Managed_ReserveInternal(unsigned __int64 size)
{
  unsigned __int64 v1; 
  void *v2; 
  ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned __int64 v4; 
  PagedHeap<65536,64,1> *v5; 
  unsigned __int64 v6; 
  unsigned __int64 v12; 
  __m256i v14; 
  __m256i v15; 

  v1 = (size + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
  v2 = PagedHeap<65536,64,1>::Allocate(&s_virtualReserveHeap, v1);
  if ( !v2 )
  {
    s_virtualAllocLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_virtualAllocLock);
    Sys_CheckReleaseLock(&s_virtualAllocLock);
    Mem_Virtual_DumpStats();
    p_freeBlocks = &s_virtualReserveHeap.freeBlocks;
    v4 = 0i64;
    v5 = (PagedHeap<65536,64,1> *)((char *)&s_virtualReserveHeap.freeBlocks + 8 * s_virtualReserveHeap.freeBlocks.m_size);
    if ( &s_virtualReserveHeap.freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)v5 )
    {
      do
      {
        v6 = v4;
        v4 = *(unsigned int *)&p_freeBlocks->m_data.m_buffer[4];
        if ( v4 <= v6 )
          v4 = v6;
        p_freeBlocks = (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8);
      }
      while ( p_freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,65,ntl::less<unsigned int,unsigned int> > *)v5 );
    }
    Mem_Error_CannotAlloc_Dev(COUNT, "Mem_Virtual_Managed_ReserveInternal", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 135, "alignedSize=%zu largestfree=%zu freeblocks=%zu usedblocks=%zu", v1, v4 << 16, s_virtualReserveHeap.freeBlocks.m_size, s_virtualReserveHeap.usedBlocks.m_size);
  }
  v14.m256i_i64[0] = (__int64)v2;
  v14.m256i_u64[3] = (unsigned __int64)MEM_PAGE_RANGE_INVALID_2;
  *(_OWORD *)&v14.m256i_u64[1] = v1;
  v15.m256i_i8[0] = 0;
  if ( s_virtualAllocations.m_size >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
    __debugbreak();
  _RSI = &s_virtualAllocations;
  __asm
  {
    vmovups ymm0, [rsp+0A8h+var_58]
    vmovups ymm1, [rsp+0A8h+var_38]
  }
  _RCX = 9 * s_virtualAllocations.m_size;
  __asm
  {
    vmovups ymmword ptr [rsi+rcx*8], ymm0
    vmovsd  xmm0, [rsp+0A8h+var_18]
    vmovups ymmword ptr [rsi+rcx*8+20h], ymm1
    vmovsd  qword ptr [rsi+rcx*8+40h], xmm0
  }
  if ( !++s_virtualAllocations.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 139, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  v12 = s_virtualAllocations.m_size - 1;
  if ( s_virtualAllocations.m_size - 1 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
    __debugbreak();
  return (Mem_Virtual_Allocator *)((char *)&s_virtualAllocations + 72 * v12);
}

/*
==============
Mem_Virtual_Managed_SetTrack
==============
*/
void Mem_Virtual_Managed_SetTrack(Mem_Virtual_Allocator *alloc, const char *name, MemTrackType type)
{
  if ( Com_IsVAString(name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 112, ASSERT_TYPE_ASSERT, "(!Com_IsVAString( name ))", (const char *)&queryFormat, "!Com_IsVAString( name )") )
    __debugbreak();
  alloc->m_trackType = type;
  alloc->m_trackName = name;
}

/*
==============
Mem_Virtual_Reserve
==============
*/
unsigned __int8 *Mem_Virtual_Reserve(unsigned __int64 size, const char *name, MemTrackType type)
{
  Mem_Virtual_Allocator *v6; 
  unsigned __int8 *m_reservePtr; 

  Profile_Begin(569);
  Mem_Virtual_Managed_Lock();
  v6 = Mem_Virtual_Managed_ReserveInternal(size);
  Mem_Virtual_Managed_SetTrack(v6, name, type);
  m_reservePtr = v6->m_reservePtr;
  IWMem_Allocator_CreateFixed(&v6->m_iwMemCommit, name, (IWMemAllocatorType)4, v6->m_reservePtr, v6->m_reserveSize);
  s_virtualAllocLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_virtualAllocLock);
  Sys_CheckReleaseLock(&s_virtualAllocLock);
  Profile_EndInternal(NULL);
  return m_reservePtr;
}

/*
==============
Mem_Virtual_SetMinimalTracking
==============
*/
void Mem_Virtual_SetMinimalTracking(void *ptr)
{
  ntl::fixed_vector<Mem_Virtual_Allocator,64,0> *Allocator; 

  Mem_Virtual_Managed_Lock();
  Allocator = Mem_Virtual_Managed_FindAllocator(ptr);
  IWMem_Allocator_SetFlag(*(IWMemID *)&Allocator->m_data.m_buffer[40], ForceNoCallstacks);
  IWMem_Allocator_SetFlag(*(IWMemID *)&Allocator->m_data.m_buffer[40], MinimalTracking);
  s_virtualAllocLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_virtualAllocLock);
  Sys_CheckReleaseLock(&s_virtualAllocLock);
}

/*
==============
Mem_Virtual_TryAlloc
==============
*/
unsigned __int8 *Mem_Virtual_TryAlloc(unsigned __int64 size, const char *name, MemTrackType type)
{
  Mem_Virtual_Allocator *v6; 
  char v7; 
  unsigned __int64 v8; 
  char v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *m_reservePtr; 
  unsigned __int64 outNewCommitSize; 
  void *outNewCommitPtr; 

  Profile_Begin(569);
  Mem_Virtual_Managed_Lock();
  v6 = Mem_Virtual_Managed_ReserveInternal((size + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
  Mem_Virtual_Managed_SetTrack(v6, name, type);
  IWMem_Allocator_CreateFixed(&v6->m_iwMemCommit, name, (IWMemAllocatorType)4, v6->m_reservePtr, (size + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
  v7 = Mem_Virtual_Managed_CommitInternal(v6, v6->m_reservePtr, (size + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64, &outNewCommitPtr, &outNewCommitSize, MEM_ALLOC_FLAG_NONE, name);
  v8 = outNewCommitSize;
  v9 = v7;
  v10 = (unsigned __int8 *)outNewCommitPtr;
  if ( v7 )
  {
    m_reservePtr = v6->m_reservePtr;
    v6->m_singleAlloc = 1;
    IWMem_Allocator_CreateFixed(&v6->m_iwMemSingleAlloc, name, (IWMemAllocatorType)8, m_reservePtr, (size + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
    IWMem_Profile_Push(name);
    IWMem_Alloc(v6->m_iwMemSingleAlloc, v6->m_reservePtr, size);
    IWMem_Profile_Pop();
    if ( v6->m_reservePtr != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 370, ASSERT_TYPE_ASSERT, "(allocator.m_reservePtr == newCommitPtr)", (const char *)&queryFormat, "allocator.m_reservePtr == newCommitPtr") )
      __debugbreak();
    if ( v6->m_commitSize != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_virtual.cpp", 371, ASSERT_TYPE_ASSERT, "(allocator.m_commitSize == newCommitSize)", (const char *)&queryFormat, "allocator.m_commitSize == newCommitSize") )
      __debugbreak();
  }
  s_virtualAllocLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_virtualAllocLock);
  Sys_CheckReleaseLock(&s_virtualAllocLock);
  if ( v9 )
  {
    memset_0(v10, 0, v8);
    Profile_EndInternal(NULL);
    return v10;
  }
  else
  {
    Mem_Virtual_Free(v6->m_reservePtr);
    Profile_EndInternal(NULL);
    return 0i64;
  }
}

