/*
==============
IWMem_AllocatorTablePool_IsExhausted
==============
*/

bool __fastcall IWMem_AllocatorTablePool_IsExhausted()
{
  return ?IWMem_AllocatorTablePool_IsExhausted@@YA_NXZ();
}

/*
==============
IWMem_AllocatorTablePool_ExtendPoolSize
==============
*/

void __fastcall IWMem_AllocatorTablePool_ExtendPoolSize(const unsigned int numEntries)
{
  ?IWMem_AllocatorTablePool_ExtendPoolSize@@YAXI@Z(numEntries);
}

/*
==============
IWMem_AllocatorTablePool_Allocate
==============
*/

IWMemAllocatorTableEntry *__fastcall IWMem_AllocatorTablePool_Allocate()
{
  return ?IWMem_AllocatorTablePool_Allocate@@YAPEAVIWMemAllocatorTableEntry@@XZ();
}

/*
==============
IWMem_AllocatorTablePool_Deallocate
==============
*/

void __fastcall IWMem_AllocatorTablePool_Deallocate(IWMemAllocatorTableEntry *p_ptr)
{
  ?IWMem_AllocatorTablePool_Deallocate@@YAXPEAVIWMemAllocatorTableEntry@@@Z(p_ptr);
}

/*
==============
IWMem_AllocatorTablePool_Init
==============
*/

void IWMem_AllocatorTablePool_Init(void)
{
  ?IWMem_AllocatorTablePool_Init@@YAXXZ();
}

/*
==============
IWMem_AllocatorTablePool_Allocate
==============
*/
IWMemInternalPool<IWMemAllocatorTableEntry>::FreeItem *IWMem_AllocatorTablePool_Allocate()
{
  IWMemInternalPool<IWMemAllocatorTableEntry>::FreeItem *mp_poolFreeList; 
  IWMemAllocator *AllocatorByID; 

  AcquireSRWLockExclusive(&s_iwMemAllocatorTablePoolGlob.lock.m_lock);
  mp_poolFreeList = s_iwMemAllocatorTablePoolGlob.pool.mp_poolFreeList;
  s_iwMemAllocatorTablePoolGlob.pool.mp_poolFreeList = s_iwMemAllocatorTablePoolGlob.pool.mp_poolFreeList->next;
  AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(s_iwMemAllocatorTablePoolGlob.pool.m_poolID);
  IWMemAllocator::LogAllocation(AllocatorByID, (const unsigned __int64)mp_poolFreeList, 0x20ui64);
  ReleaseSRWLockExclusive(&s_iwMemAllocatorTablePoolGlob.lock.m_lock);
  return mp_poolFreeList;
}

/*
==============
IWMem_AllocatorTablePool_Deallocate
==============
*/
void IWMem_AllocatorTablePool_Deallocate(IWMemAllocatorTableEntry *p_ptr)
{
  IWMemAllocator *AllocatorByID; 

  AcquireSRWLockExclusive(&s_iwMemAllocatorTablePoolGlob.lock.m_lock);
  AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(s_iwMemAllocatorTablePoolGlob.pool.m_poolID);
  IWMemAllocator::LogFree(AllocatorByID, (const unsigned __int64)p_ptr, 0x20ui64);
  p_ptr->m_address = (unsigned __int64)s_iwMemAllocatorTablePoolGlob.pool.mp_poolFreeList;
  s_iwMemAllocatorTablePoolGlob.pool.mp_poolFreeList = (IWMemInternalPool<IWMemAllocatorTableEntry>::FreeItem *)p_ptr;
  ReleaseSRWLockExclusive(&s_iwMemAllocatorTablePoolGlob.lock.m_lock);
}

/*
==============
IWMem_AllocatorTablePool_ExtendPoolSize
==============
*/
void IWMem_AllocatorTablePool_ExtendPoolSize(const unsigned int numEntries)
{
  __int64 v1; 
  __int64 v2; 
  unsigned __int64 v3; 
  IWMemInternalPool<IWMemAllocatorTableEntry>::FreeItem *v4; 

  v1 = numEntries;
  if ( !numEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table_pool.cpp", 116, ASSERT_TYPE_ASSERT, "(numEntries)", (const char *)&queryFormat, "numEntries") )
    __debugbreak();
  AcquireSRWLockExclusive(&s_iwMemAllocatorTablePoolGlob.lock.m_lock);
  v2 = 32 * v1;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 100, ASSERT_TYPE_ASSERT, "(additionalByteSize)", (const char *)&queryFormat, "additionalByteSize") )
    __debugbreak();
  v3 = (v2 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
  if ( v3 + s_iwMemAllocatorTablePoolGlob.pool.m_poolCommitSize > s_iwMemAllocatorTablePoolGlob.pool.m_poolReserveSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 104, ASSERT_TYPE_ASSERT, "(( m_poolCommitSize + alignedAddSize ) <= m_poolReserveSize)", (const char *)&queryFormat, "( m_poolCommitSize + alignedAddSize ) <= m_poolReserveSize") )
    __debugbreak();
  v4 = (IWMemInternalPool<IWMemAllocatorTableEntry>::FreeItem *)IWMem_InternalPool_PoolAddToCommit(s_iwMemAllocatorTablePoolGlob.pool.mp_poolBaseAddr, s_iwMemAllocatorTablePoolGlob.pool.m_poolCommitSize, v3, 0x20u, s_iwMemAllocatorTablePoolGlob.pool.mp_poolFreeList);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 107, ASSERT_TYPE_ASSERT, "(freePtr)", (const char *)&queryFormat, "freePtr") )
    __debugbreak();
  s_iwMemAllocatorTablePoolGlob.pool.mp_poolFreeList = v4;
  IWMem_Alloc(s_iwMemAllocatorTablePoolGlob.pool.m_commitID, (char *)s_iwMemAllocatorTablePoolGlob.pool.mp_poolBaseAddr + s_iwMemAllocatorTablePoolGlob.pool.m_poolCommitSize, v3);
  s_iwMemAllocatorTablePoolGlob.pool.m_poolCommitSize += v3;
  ReleaseSRWLockExclusive(&s_iwMemAllocatorTablePoolGlob.lock.m_lock);
}

/*
==============
IWMem_AllocatorTablePool_Init
==============
*/
void IWMem_AllocatorTablePool_Init(void)
{
  InitializeSRWLock(&s_iwMemAllocatorTablePoolGlob.lock.m_lock);
  IWMemInternalPool<IWMemAllocatorTableEntry>::Init(&s_iwMemAllocatorTablePoolGlob.pool, "IWMem Table Entries Pool", 0x200000u, 0x2000u);
  g_iwMemAllocatorPool = s_iwMemAllocatorTablePoolGlob.pool.mp_poolBaseAddr;
}

/*
==============
IWMem_AllocatorTablePool_IsExhausted
==============
*/
_BOOL8 IWMem_AllocatorTablePool_IsExhausted()
{
  bool v0; 

  AcquireSRWLockShared(&s_iwMemAllocatorTablePoolGlob.lock.m_lock);
  v0 = s_iwMemAllocatorTablePoolGlob.pool.mp_poolFreeList == NULL;
  ReleaseSRWLockShared(&s_iwMemAllocatorTablePoolGlob.lock.m_lock);
  return v0;
}

