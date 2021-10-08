/*
==============
IWMem_InternalPool_PoolAddToCommit
==============
*/

void *__fastcall IWMem_InternalPool_PoolAddToCommit(void *basePtr, const unsigned __int64 existingCommit, const unsigned __int64 addCommit, const unsigned int entrySize, void *curFreeList)
{
  return ?IWMem_InternalPool_PoolAddToCommit@@YAPEAXPEAX_K1I0@Z(basePtr, existingCommit, addCommit, entrySize, curFreeList);
}

/*
==============
IWMem_InternalPool_CommitMemory
==============
*/

void __fastcall IWMem_InternalPool_CommitMemory(void *ptr, unsigned __int64 byteSizeCommit)
{
  ?IWMem_InternalPool_CommitMemory@@YAXPEAX_K@Z(ptr, byteSizeCommit);
}

/*
==============
IWMem_InternalPool_ReserveMemory
==============
*/

void *__fastcall IWMem_InternalPool_ReserveMemory(const unsigned __int64 byteSizeReserve)
{
  return ?IWMem_InternalPool_ReserveMemory@@YAPEAX_K@Z(byteSizeReserve);
}

/*
==============
IWMem_InternalPool_GetCommitSize
==============
*/

unsigned __int64 __fastcall IWMem_InternalPool_GetCommitSize()
{
  return ?IWMem_InternalPool_GetCommitSize@@YA_KXZ();
}

/*
==============
IWMem_InternalPool_CommitMemory
==============
*/
void IWMem_InternalPool_CommitMemory(void *ptr, unsigned __int64 byteSizeCommit)
{
  if ( Mem_Paged_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 29, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsInitialized())", (const char *)&queryFormat, "!Mem_Paged_IsInitialized()") )
    __debugbreak();
  if ( !ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 30, ASSERT_TYPE_ASSERT, "(ptr)", (const char *)&queryFormat, "ptr") )
    __debugbreak();
  if ( !byteSizeCommit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 31, ASSERT_TYPE_ASSERT, "(byteSizeCommit)", (const char *)&queryFormat, "byteSizeCommit") )
    __debugbreak();
  if ( (_WORD)byteSizeCommit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 32, ASSERT_TYPE_ASSERT, "(IsAligned( byteSizeCommit, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( byteSizeCommit, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  Mem_Paged_PreInitCommitMemory((unsigned __int8 *)ptr, (unsigned __int8 *)ptr + byteSizeCommit);
  s_iwMemPreinitCommitSize += byteSizeCommit;
}

/*
==============
IWMem_InternalPool_GetCommitSize
==============
*/
unsigned __int64 IWMem_InternalPool_GetCommitSize()
{
  return s_iwMemPreinitCommitSize;
}

/*
==============
IWMem_InternalPool_PoolAddToCommit
==============
*/
unsigned __int8 *IWMem_InternalPool_PoolAddToCommit(void *basePtr, const unsigned __int64 existingCommit, const unsigned __int64 addCommit, const unsigned int entrySize, void *curFreeList)
{
  unsigned __int64 v5; 
  unsigned __int8 *v9; 
  unsigned __int64 v10; 
  unsigned __int8 *v11; 
  unsigned __int64 v12; 

  v5 = entrySize;
  if ( !basePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 43, ASSERT_TYPE_ASSERT, "(basePtr)", (const char *)&queryFormat, "basePtr") )
    __debugbreak();
  if ( !addCommit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 44, ASSERT_TYPE_ASSERT, "(addCommit)", (const char *)&queryFormat, "addCommit") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 45, ASSERT_TYPE_ASSERT, "(entrySize)", (const char *)&queryFormat, "entrySize") )
    __debugbreak();
  if ( (_WORD)addCommit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 46, ASSERT_TYPE_ASSERT, "(IsAligned( addCommit, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( addCommit, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  v9 = (unsigned __int8 *)basePtr + existingCommit;
  if ( Mem_Paged_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 29, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsInitialized())", (const char *)&queryFormat, "!Mem_Paged_IsInitialized()") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 30, ASSERT_TYPE_ASSERT, "(ptr)", (const char *)&queryFormat, "ptr") )
    __debugbreak();
  if ( !addCommit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 31, ASSERT_TYPE_ASSERT, "(byteSizeCommit)", (const char *)&queryFormat, "byteSizeCommit") )
    __debugbreak();
  if ( (_WORD)addCommit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 32, ASSERT_TYPE_ASSERT, "(IsAligned( byteSizeCommit, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( byteSizeCommit, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  Mem_Paged_PreInitCommitMemory(v9, &v9[addCommit]);
  s_iwMemPreinitCommitSize += addCommit;
  v10 = addCommit / v5;
  if ( v10 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v10, "unsigned", v10) )
    __debugbreak();
  if ( !(_DWORD)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 53, ASSERT_TYPE_ASSERT, "(numAddedEntries)", (const char *)&queryFormat, "numAddedEntries") )
    __debugbreak();
  v11 = &v9[(unsigned int)(v5 * (v10 - 1))];
  v12 = (unsigned int)(v5 * (v10 - 1));
  for ( *(_QWORD *)v11 = curFreeList; v12; v11 = &v9[v12] )
  {
    if ( v12 < v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 64, ASSERT_TYPE_ASSERT, "(commitOffset >= entrySize)", (const char *)&queryFormat, "commitOffset >= entrySize") )
      __debugbreak();
    v12 -= v5;
    *(_QWORD *)&v9[v12] = v11;
  }
  if ( v11 != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 72, ASSERT_TYPE_ASSERT, "(lastPtr == reinterpret_cast<void**>( newMemAddr ))", (const char *)&queryFormat, "lastPtr == reinterpret_cast<void**>( newMemAddr )") )
    __debugbreak();
  return v9;
}

/*
==============
IWMem_InternalPool_ReserveMemory
==============
*/
void *IWMem_InternalPool_ReserveMemory(const unsigned __int64 byteSizeReserve)
{
  void *result; 

  if ( Mem_Paged_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 16, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsInitialized())", (const char *)&queryFormat, "!Mem_Paged_IsInitialized()") )
    __debugbreak();
  if ( !byteSizeReserve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 17, ASSERT_TYPE_ASSERT, "(byteSizeReserve)", (const char *)&queryFormat, "byteSizeReserve") )
    __debugbreak();
  if ( (_WORD)byteSizeReserve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 18, ASSERT_TYPE_ASSERT, "(IsAligned( byteSizeReserve, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( byteSizeReserve, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  result = Mem_Paged_PreInitReserveAddressRange(byteSizeReserve);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_internal_pool.cpp", 21, ASSERT_TYPE_ASSERT, "(addr)", (const char *)&queryFormat, "addr") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

