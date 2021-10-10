/*
==============
IWMem_AllocatorManager_ReparentIWMemPools
==============
*/

void IWMem_AllocatorManager_ReparentIWMemPools(void)
{
  ?IWMem_AllocatorManager_ReparentIWMemPools@@YAXXZ();
}

/*
==============
IWMem_AllocatorManager_CreateAllocator
==============
*/

IWMemAllocator *__fastcall IWMem_AllocatorManager_CreateAllocator(const unsigned int allocatorIndex, const char *const name, const IWMemAllocatorType type, const void *const ptr, const unsigned __int64 size)
{
  return ?IWMem_AllocatorManager_CreateAllocator@@YAAEAVIWMemAllocator@@IQEBDW4IWMemAllocatorType@@QEBX_K@Z(allocatorIndex, name, type, ptr, size);
}

/*
==============
IWMem_AllocatorManager_Init
==============
*/

void IWMem_AllocatorManager_Init(void)
{
  ?IWMem_AllocatorManager_Init@@YAXXZ();
}

/*
==============
AllocatorSortFunctor::IsParentOf
==============
*/

bool __fastcall AllocatorSortFunctor::IsParentOf(const IWMemAllocator *alloc1, const IWMemAllocator *alloc2)
{
  return ?IsParentOf@AllocatorSortFunctor@@SA_NPEBVIWMemAllocator@@0@Z(alloc1, alloc2);
}

/*
==============
IWMem_AllocatorManager_GetAllocatorByID
==============
*/

IWMemAllocator *__fastcall IWMem_AllocatorManager_GetAllocatorByID(IWMemID id)
{
  return ?IWMem_AllocatorManager_GetAllocatorByID@@YAAEAVIWMemAllocator@@VIWMemID@@@Z(id);
}

/*
==============
IWMem_AllocatorManager_GetAllocatorIndex
==============
*/

unsigned int __fastcall IWMem_AllocatorManager_GetAllocatorIndex(const IWMemAllocator *allocator)
{
  return ?IWMem_AllocatorManager_GetAllocatorIndex@@YAIAEBVIWMemAllocator@@@Z(allocator);
}

/*
==============
IWMem_AllocatorManager_GetAllocatorByIndex
==============
*/

IWMemAllocator *__fastcall IWMem_AllocatorManager_GetAllocatorByIndex(const unsigned int index)
{
  return ?IWMem_AllocatorManager_GetAllocatorByIndex@@YAAEAVIWMemAllocator@@I@Z(index);
}

/*
==============
IWMem_AllocatorManager_DestroyAllocator
==============
*/

void __fastcall IWMem_AllocatorManager_DestroyAllocator(IWMemAllocator *allocator)
{
  ?IWMem_AllocatorManager_DestroyAllocator@@YAXAEAVIWMemAllocator@@@Z(allocator);
}

/*
==============
IWMem_AllocatorManager_GetSortedAllocatorList
==============
*/

unsigned int __fastcall IWMem_AllocatorManager_GetSortedAllocatorList(const IWMemAllocator **outList, const unsigned int maxSize)
{
  return ?IWMem_AllocatorManager_GetSortedAllocatorList@@YAIPEAPEBVIWMemAllocator@@I@Z(outList, maxSize);
}

/*
==============
IWMem_AllocatorManager_ChooseParent
==============
*/
void IWMem_AllocatorManager_ChooseParent(IWMemAllocator *allocator)
{
  IWMemAllocator *v2; 
  unsigned int v3; 
  IWMemBlock m_ownedRange; 
  IWMemAllocator *v5; 
  IWMemBlock v12; 
  IWMemBlock v13; 

  if ( IWMemAllocator::GetParentAllocator(allocator) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 196, ASSERT_TYPE_ASSERT, "(allocator.GetParentAllocator() == nullptr)", (const char *)&queryFormat, "allocator.GetParentAllocator() == nullptr") )
    __debugbreak();
  if ( s_iwMemAllocatorManager.allocatorCount )
  {
    v2 = NULL;
    v3 = 0;
    if ( s_iwMemAllocatorManager.allocatorCount )
    {
      m_ownedRange = allocator->m_ownedRange;
      do
      {
        v5 = s_iwMemAllocatorManager.sortedAllocators[v3];
        if ( v5->m_ownedRange.m_address >= m_ownedRange.m_address + m_ownedRange.m_size )
          break;
        if ( v5 == v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 116, ASSERT_TYPE_ASSERT, "(&proposed != curChoice)", (const char *)&queryFormat, "&proposed != curChoice") )
          __debugbreak();
        if ( allocator != v5 )
        {
          v12 = v5->m_ownedRange;
          if ( !IWMemAllocator::TestFlag(v5, UnknownOwnedRange) && !IWMemAllocator::TestFlag(v5, IWMemInternal) && v5->m_type != NormalSpace )
          {
            v13 = allocator->m_ownedRange;
            if ( v13.m_address >= v12.m_address && v13.m_address < v12.m_size + v12.m_address && v13.m_size + v13.m_address <= v12.m_size + v12.m_address )
            {
              if ( !v2 )
                goto LABEL_22;
              _XMM1 = v2->m_ownedRange;
              _XMM0 = v5->m_ownedRange;
              __asm
              {
                vpextrq rcx, xmm1, 1
                vpextrq rax, xmm0, 1
              }
              if ( _RCX >= _RAX )
              {
                __asm
                {
                  vpextrq rcx, xmm1, 1
                  vpextrq rax, xmm0, 1
                }
                if ( _RCX != _RAX || AllocatorSortFunctor::IsParentOf(v5, v2) )
LABEL_22:
                  v2 = s_iwMemAllocatorManager.sortedAllocators[v3];
              }
            }
          }
        }
        ++v3;
      }
      while ( v3 < s_iwMemAllocatorManager.allocatorCount );
      if ( v2 )
        IWMemAllocator::AddChildAllocator(v2, allocator);
    }
  }
}

/*
==============
IWMem_AllocatorManager_CreateAllocator
==============
*/
IWMemAllocator *IWMem_AllocatorManager_CreateAllocator(const unsigned int allocatorIndex, const char *const name, const IWMemAllocatorType type, const void *const ptr, const unsigned __int64 size)
{
  __int64 v5; 
  IWMemAllocator *v9; 
  __int64 allocatorCount; 
  __int64 v12; 
  __int64 v13; 
  ntl::random_access_iterator_tag v14; 

  v5 = allocatorIndex;
  AcquireSRWLockExclusive(&s_iwMemAllocatorManager.addRemoveLock.m_lock);
  if ( (unsigned int)v5 >= 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 248, ASSERT_TYPE_ASSERT, "(unsigned)( allocatorIndex ) < (unsigned)( ( sizeof( *array_counter( s_iwMemAllocatorManager.allocators ) ) + 0 ) )", "allocatorIndex doesn't index ARRAY_COUNT( s_iwMemAllocatorManager.allocators )\n\t%i not in [0, %i)", v5, 384) )
    __debugbreak();
  v9 = &s_iwMemAllocatorManager.allocators[v5];
  IWMemAllocator::Create(v9, name, type, (unsigned __int64)ptr, size);
  IWMem_AllocatorManager_ChooseParent(v9);
  allocatorCount = s_iwMemAllocatorManager.allocatorCount;
  if ( s_iwMemAllocatorManager.allocatorCount >= 0x180 )
  {
    LODWORD(v13) = 384;
    LODWORD(v12) = s_iwMemAllocatorManager.allocatorCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 255, ASSERT_TYPE_ASSERT, "(unsigned)( s_iwMemAllocatorManager.allocatorCount ) < (unsigned)( ( sizeof( *array_counter( s_iwMemAllocatorManager.sortedAllocators ) ) + 0 ) )", "s_iwMemAllocatorManager.allocatorCount doesn't index ARRAY_COUNT( s_iwMemAllocatorManager.sortedAllocators )\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
    allocatorCount = s_iwMemAllocatorManager.allocatorCount;
  }
  s_iwMemAllocatorManager.sortedAllocators[allocatorCount] = v9;
  ntl::sort<IWMemAllocator * *,AllocatorSortFunctor>(s_iwMemAllocatorManager.sortedAllocators, &s_iwMemAllocatorManager.sortedAllocators[++s_iwMemAllocatorManager.allocatorCount], (AllocatorSortFunctor)v14.ntl::input_iterator_tag, v14);
  ReleaseSRWLockExclusive(&s_iwMemAllocatorManager.addRemoveLock.m_lock);
  return v9;
}

/*
==============
IWMem_AllocatorManager_DestroyAllocator
==============
*/
void IWMem_AllocatorManager_DestroyAllocator(IWMemAllocator *allocator)
{
  unsigned int allocatorCount; 
  __int64 v3; 
  ntl::random_access_iterator_tag v4; 

  AcquireSRWLockExclusive(&s_iwMemAllocatorManager.addRemoveLock.m_lock);
  allocatorCount = s_iwMemAllocatorManager.allocatorCount;
  if ( !s_iwMemAllocatorManager.allocatorCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 175, ASSERT_TYPE_ASSERT, "(s_iwMemAllocatorManager.allocatorCount > 0)", (const char *)&queryFormat, "s_iwMemAllocatorManager.allocatorCount > 0") )
      __debugbreak();
    allocatorCount = s_iwMemAllocatorManager.allocatorCount;
  }
  v3 = 0i64;
  if ( allocatorCount )
  {
    while ( s_iwMemAllocatorManager.sortedAllocators[v3] != allocator )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= allocatorCount )
        goto LABEL_10;
    }
    s_iwMemAllocatorManager.sortedAllocators[(unsigned int)v3] = (IWMemAllocator *)*((_QWORD *)&s_iwMemAllocatorManager.allocators[383].m_matPixId + allocatorCount);
    allocatorCount = s_iwMemAllocatorManager.allocatorCount;
  }
LABEL_10:
  s_iwMemAllocatorManager.allocatorCount = allocatorCount - 1;
  ntl::sort<IWMemAllocator * *,AllocatorSortFunctor>(s_iwMemAllocatorManager.sortedAllocators, (IWMemAllocator **)&s_iwMemAllocatorManager.allocators[383].m_matPixId + allocatorCount, (AllocatorSortFunctor)v4.ntl::input_iterator_tag, v4);
  IWMemAllocator::Destroy(allocator);
  ReleaseSRWLockExclusive(&s_iwMemAllocatorManager.addRemoveLock.m_lock);
}

/*
==============
IWMem_AllocatorManager_GetAllocatorByID
==============
*/
IWMemAllocator *IWMem_AllocatorManager_GetAllocatorByID(IWMemID id)
{
  unsigned int v1; 

  v1 = *((unsigned __int16 *)&id + 3);
  if ( !*((_WORD *)&id + 3) )
    v1 = IWMem_DynamicID_Lookup(*(_QWORD *)&id & 0xFFFFFFFFFFFFi64);
  if ( v1 >= 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 310, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_iwMemAllocatorManager.allocators ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_iwMemAllocatorManager.allocators )\n\t%i not in [0, %i)", v1, 384) )
    __debugbreak();
  return (IWMemAllocator *)((char *)&s_iwMemAllocatorManager + 160 * v1);
}

/*
==============
IWMem_AllocatorManager_GetAllocatorByIndex
==============
*/
IWMemAllocator *IWMem_AllocatorManager_GetAllocatorByIndex(const unsigned int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( index >= 0x180 )
  {
    v4 = 384;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 310, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_iwMemAllocatorManager.allocators ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_iwMemAllocatorManager.allocators )\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return (IWMemAllocator *)((char *)&s_iwMemAllocatorManager + 160 * v1);
}

/*
==============
IWMem_AllocatorManager_GetAllocatorIndex
==============
*/
__int64 IWMem_AllocatorManager_GetAllocatorIndex(const IWMemAllocator *allocator)
{
  signed __int64 v1; 
  unsigned __int64 v2; 
  __int64 v4; 
  __int64 v5; 

  v1 = (char *)allocator - (char *)&s_iwMemAllocatorManager;
  v2 = v1 / 160;
  if ( (v1 / 160 < 0 || v2 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v2, "signed", v1 / 160) )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x180 )
  {
    LODWORD(v5) = 384;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 324, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_iwMemAllocatorManager.allocators ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_iwMemAllocatorManager.allocators )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return (unsigned int)v2;
}

/*
==============
IWMem_AllocatorManager_GetSortedAllocatorList
==============
*/
__int64 IWMem_AllocatorManager_GetSortedAllocatorList(const IWMemAllocator **outList, const unsigned int maxSize)
{
  __int64 allocatorCount; 

  if ( !outList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 337, ASSERT_TYPE_ASSERT, "(outList)", (const char *)&queryFormat, "outList") )
    __debugbreak();
  AcquireSRWLockShared(&s_iwMemAllocatorManager.addRemoveLock.m_lock);
  allocatorCount = s_iwMemAllocatorManager.allocatorCount;
  if ( s_iwMemAllocatorManager.allocatorCount > maxSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 343, ASSERT_TYPE_ASSERT, "(returnCount <= maxSize)", (const char *)&queryFormat, "returnCount <= maxSize") )
    __debugbreak();
  memcpy_0(outList, s_iwMemAllocatorManager.sortedAllocators, 8 * allocatorCount);
  ReleaseSRWLockShared(&s_iwMemAllocatorManager.addRemoveLock.m_lock);
  return (unsigned int)allocatorCount;
}

/*
==============
IWMem_AllocatorManager_Init
==============
*/
void IWMem_AllocatorManager_Init(void)
{
  InitializeSRWLock(&s_iwMemAllocatorManager.addRemoveLock.m_lock);
}

/*
==============
IWMem_AllocatorManager_ReparentIWMemPools
==============
*/
void IWMem_AllocatorManager_ReparentIWMemPools(void)
{
  __int64 allocatorCount; 
  __int64 i; 
  IWMemAllocator *v2; 
  ntl::random_access_iterator_tag v3; 

  AcquireSRWLockExclusive(&s_iwMemAllocatorManager.addRemoveLock.m_lock);
  allocatorCount = s_iwMemAllocatorManager.allocatorCount;
  for ( i = 0i64; (unsigned int)i < s_iwMemAllocatorManager.allocatorCount; i = (unsigned int)(i + 1) )
  {
    v2 = s_iwMemAllocatorManager.sortedAllocators[i];
    if ( !IWMemAllocator::GetParentAllocator(v2) && v2->m_type > (unsigned int)NormalSpace )
      IWMem_AllocatorManager_ChooseParent(v2);
    allocatorCount = s_iwMemAllocatorManager.allocatorCount;
  }
  ntl::sort<IWMemAllocator * *,AllocatorSortFunctor>(s_iwMemAllocatorManager.sortedAllocators, &s_iwMemAllocatorManager.sortedAllocators[allocatorCount], (AllocatorSortFunctor)v3.ntl::input_iterator_tag, v3);
  ReleaseSRWLockExclusive(&s_iwMemAllocatorManager.addRemoveLock.m_lock);
}

/*
==============
AllocatorSortFunctor::IsParentOf
==============
*/
char AllocatorSortFunctor::IsParentOf(const IWMemAllocator *alloc1, const IWMemAllocator *alloc2)
{
  while ( 1 )
  {
    if ( !alloc2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_manager.cpp", 57, ASSERT_TYPE_ASSERT, "(alloc2)", (const char *)&queryFormat, "alloc2") )
      __debugbreak();
    if ( !alloc1 )
      break;
    if ( alloc1 == alloc2 )
      return 1;
    alloc1 = IWMemAllocator::GetParentAllocator((IWMemAllocator *)alloc1);
  }
  return 0;
}

