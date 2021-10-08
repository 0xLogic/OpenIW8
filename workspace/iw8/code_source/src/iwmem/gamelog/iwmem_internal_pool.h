/*
==============
IWMemInternalPool<IWMemProfileNode>::Init
==============
*/

void __fastcall IWMemInternalPool<IWMemProfileNode>::Init(IWMemInternalPool<IWMemProfileNode> *this, const char *p_debugName, const unsigned int reserveNumElements, const unsigned int initialCommitNumElements)
{
  ?Init@?$IWMemInternalPool@VIWMemProfileNode@@@@QEAAXPEBDII@Z(this, p_debugName, reserveNumElements, initialCommitNumElements);
}

/*
==============
IWMemInternalPool<IWMemAllocatorTableEntry>::Init
==============
*/

void __fastcall IWMemInternalPool<IWMemAllocatorTableEntry>::Init(IWMemInternalPool<IWMemAllocatorTableEntry> *this, const char *p_debugName, const unsigned int reserveNumElements, const unsigned int initialCommitNumElements)
{
  ?Init@?$IWMemInternalPool@VIWMemAllocatorTableEntry@@@@QEAAXPEBDII@Z(this, p_debugName, reserveNumElements, initialCommitNumElements);
}

/*
==============
IWMemInternalPool<IWMemAllocatorTableEntry>::Init
==============
*/
void IWMemInternalPool<IWMemAllocatorTableEntry>::Init(IWMemInternalPool<IWMemAllocatorTableEntry> *this, const char *p_debugName, const unsigned int reserveNumElements, const unsigned int initialCommitNumElements)
{
  unsigned __int64 v5; 
  IWMemAllocatorTableEntry *v7; 
  IWMemInternalPool<IWMemAllocatorTableEntry>::FreeItem *v8; 
  unsigned __int64 m_poolCommitSize; 
  IWMemAllocatorTableEntry *mp_poolBaseAddr; 
  IWMemID m_commitID; 
  IWMemInternalPool<IWMemAllocatorTableEntry>::FreeItem *mp_poolFreeList; 
  IWMemID m_poolID; 
  IWMemAllocator *AllocatorByID; 

  v5 = (32i64 * reserveNumElements + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
  this->m_poolReserveSize = v5;
  this->m_poolCommitSize = (32i64 * initialCommitNumElements + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 57, ASSERT_TYPE_ASSERT, "(m_poolReserveSize)", (const char *)&queryFormat, "m_poolReserveSize") )
    __debugbreak();
  if ( !this->m_poolCommitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 58, ASSERT_TYPE_ASSERT, "(m_poolCommitSize)", (const char *)&queryFormat, "m_poolCommitSize") )
    __debugbreak();
  if ( this->m_poolCommitSize > this->m_poolReserveSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 59, ASSERT_TYPE_ASSERT, "(m_poolCommitSize <= m_poolReserveSize)", (const char *)&queryFormat, "m_poolCommitSize <= m_poolReserveSize") )
    __debugbreak();
  v7 = (IWMemAllocatorTableEntry *)IWMem_InternalPool_ReserveMemory(this->m_poolReserveSize);
  this->mp_poolBaseAddr = v7;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 62, ASSERT_TYPE_ASSERT, "(mp_poolBaseAddr)", (const char *)&queryFormat, "mp_poolBaseAddr") )
    __debugbreak();
  IWMem_Allocator_CreateFixed(&this->m_reserveID, p_debugName, Count, this->mp_poolBaseAddr, this->m_poolReserveSize);
  IWMem_Allocator_CreateFixed(&this->m_commitID, p_debugName, (IWMemAllocatorType)4, this->mp_poolBaseAddr, this->m_poolReserveSize);
  IWMem_Allocator_CreateFixed(&this->m_poolID, p_debugName, Count|0x4, this->mp_poolBaseAddr, this->m_poolReserveSize);
  IWMem_Allocator_SetPoolItemSize(this->m_poolID, 0x20ui64);
  IWMem_Allocator_SetFlag(this->m_reserveID, IWMemInternal);
  IWMem_Allocator_SetFlag(this->m_commitID, IWMemInternal);
  IWMem_Allocator_SetFlag(this->m_poolID, IWMemInternal);
  IWMem_Alloc(this->m_reserveID, this->mp_poolBaseAddr, this->m_poolReserveSize);
  v8 = (IWMemInternalPool<IWMemAllocatorTableEntry>::FreeItem *)IWMem_InternalPool_PoolAddToCommit(this->mp_poolBaseAddr, 0i64, this->m_poolCommitSize, 0x20u, NULL);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 78, ASSERT_TYPE_ASSERT, "(freePtr)", (const char *)&queryFormat, "freePtr") )
    __debugbreak();
  m_poolCommitSize = this->m_poolCommitSize;
  mp_poolBaseAddr = this->mp_poolBaseAddr;
  m_commitID = this->m_commitID;
  this->mp_poolFreeList = v8;
  IWMem_Alloc(m_commitID, mp_poolBaseAddr, m_poolCommitSize);
  mp_poolFreeList = this->mp_poolFreeList;
  m_poolID = this->m_poolID;
  this->mp_poolFreeList = mp_poolFreeList->next;
  AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(m_poolID);
  IWMemAllocator::LogAllocation(AllocatorByID, (const unsigned __int64)mp_poolFreeList, 0x20ui64);
  if ( !mp_poolFreeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 85, ASSERT_TYPE_ASSERT, "(sentinel)", (const char *)&queryFormat, "sentinel") )
    __debugbreak();
  if ( (unsigned int)(((char *)mp_poolFreeList - (char *)this->mp_poolBaseAddr) >> 5) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 86, ASSERT_TYPE_ASSERT, "(GetIndexOfItem( sentinel ) == 0)", (const char *)&queryFormat, "GetIndexOfItem( sentinel ) == 0") )
      __debugbreak();
  }
}

/*
==============
IWMemInternalPool<IWMemProfileNode>::Init
==============
*/
void IWMemInternalPool<IWMemProfileNode>::Init(IWMemInternalPool<IWMemProfileNode> *this, const char *p_debugName, const unsigned int reserveNumElements, const unsigned int initialCommitNumElements)
{
  unsigned __int64 v6; 
  IWMemProfileNode *v7; 
  IWMemInternalPool<IWMemProfileNode>::FreeItem *v8; 
  unsigned __int64 m_poolCommitSize; 
  IWMemProfileNode *mp_poolBaseAddr; 
  IWMemID m_commitID; 
  IWMemInternalPool<IWMemProfileNode>::FreeItem *mp_poolFreeList; 
  IWMemID m_poolID; 
  IWMemAllocator *AllocatorByID; 

  v6 = (40i64 * reserveNumElements + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
  this->m_poolReserveSize = v6;
  this->m_poolCommitSize = (40i64 * initialCommitNumElements + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 57, ASSERT_TYPE_ASSERT, "(m_poolReserveSize)", (const char *)&queryFormat, "m_poolReserveSize") )
    __debugbreak();
  if ( !this->m_poolCommitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 58, ASSERT_TYPE_ASSERT, "(m_poolCommitSize)", (const char *)&queryFormat, "m_poolCommitSize") )
    __debugbreak();
  if ( this->m_poolCommitSize > this->m_poolReserveSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 59, ASSERT_TYPE_ASSERT, "(m_poolCommitSize <= m_poolReserveSize)", (const char *)&queryFormat, "m_poolCommitSize <= m_poolReserveSize") )
    __debugbreak();
  v7 = (IWMemProfileNode *)IWMem_InternalPool_ReserveMemory(this->m_poolReserveSize);
  this->mp_poolBaseAddr = v7;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 62, ASSERT_TYPE_ASSERT, "(mp_poolBaseAddr)", (const char *)&queryFormat, "mp_poolBaseAddr") )
    __debugbreak();
  IWMem_Allocator_CreateFixed(&this->m_reserveID, p_debugName, Count, this->mp_poolBaseAddr, this->m_poolReserveSize);
  IWMem_Allocator_CreateFixed(&this->m_commitID, p_debugName, (IWMemAllocatorType)4, this->mp_poolBaseAddr, this->m_poolReserveSize);
  IWMem_Allocator_CreateFixed(&this->m_poolID, p_debugName, Count|0x4, this->mp_poolBaseAddr, this->m_poolReserveSize);
  IWMem_Allocator_SetPoolItemSize(this->m_poolID, 0x28ui64);
  IWMem_Allocator_SetFlag(this->m_reserveID, IWMemInternal);
  IWMem_Allocator_SetFlag(this->m_commitID, IWMemInternal);
  IWMem_Allocator_SetFlag(this->m_poolID, IWMemInternal);
  IWMem_Alloc(this->m_reserveID, this->mp_poolBaseAddr, this->m_poolReserveSize);
  v8 = (IWMemInternalPool<IWMemProfileNode>::FreeItem *)IWMem_InternalPool_PoolAddToCommit(this->mp_poolBaseAddr, 0i64, this->m_poolCommitSize, 0x28u, NULL);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 78, ASSERT_TYPE_ASSERT, "(freePtr)", (const char *)&queryFormat, "freePtr") )
    __debugbreak();
  m_poolCommitSize = this->m_poolCommitSize;
  mp_poolBaseAddr = this->mp_poolBaseAddr;
  m_commitID = this->m_commitID;
  this->mp_poolFreeList = v8;
  IWMem_Alloc(m_commitID, mp_poolBaseAddr, m_poolCommitSize);
  mp_poolFreeList = this->mp_poolFreeList;
  m_poolID = this->m_poolID;
  this->mp_poolFreeList = mp_poolFreeList->next;
  AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(m_poolID);
  IWMemAllocator::LogAllocation(AllocatorByID, (const unsigned __int64)mp_poolFreeList, 0x28ui64);
  if ( !mp_poolFreeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 85, ASSERT_TYPE_ASSERT, "(sentinel)", (const char *)&queryFormat, "sentinel") )
    __debugbreak();
  if ( (unsigned int)(((char *)mp_poolFreeList - (char *)this->mp_poolBaseAddr) / 40) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.h", 86, ASSERT_TYPE_ASSERT, "(GetIndexOfItem( sentinel ) == 0)", (const char *)&queryFormat, "GetIndexOfItem( sentinel ) == 0") )
      __debugbreak();
  }
}

