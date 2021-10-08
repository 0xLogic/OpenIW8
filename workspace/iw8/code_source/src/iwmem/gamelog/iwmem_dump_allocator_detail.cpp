/*
==============
IWMem_Dump_Detail_All
==============
*/

void IWMem_Dump_Detail_All(void)
{
  ?IWMem_Dump_Detail_All@@YAXXZ();
}

/*
==============
IWMem_Dump_Detail_TableEntry
==============
*/

void __fastcall IWMem_Dump_Detail_TableEntry(const IWMemAllocatorTableEntry *p_entry)
{
  ?IWMem_Dump_Detail_TableEntry@@YAXPEBVIWMemAllocatorTableEntry@@@Z(p_entry);
}

/*
==============
IWMem_Dump_Detail_Allocator_Leaks
==============
*/

void __fastcall IWMem_Dump_Detail_Allocator_Leaks(const IWMemAllocator *p_allocator)
{
  ?IWMem_Dump_Detail_Allocator_Leaks@@YAXPEBVIWMemAllocator@@@Z(p_allocator);
}

/*
==============
IWMem_Dump_Detail_Allocator
==============
*/

void __fastcall IWMem_Dump_Detail_Allocator(const IWMemAllocator *p_allocator)
{
  ?IWMem_Dump_Detail_Allocator@@YAXPEBVIWMemAllocator@@@Z(p_allocator);
}

/*
==============
IWMem_Dump_Detail_All
==============
*/
void IWMem_Dump_Detail_All(void)
{
  unsigned int SortedAllocatorList; 
  IWMemAllocator **v1; 
  __int64 v2; 
  IWMemAllocator *v3; 
  const char *AllocatorTypeName; 
  unsigned __int64 v5; 
  unsigned __int64 UsedSize; 
  const IWMemAllocatorTableEntry *mp_root; 
  unsigned int v8; 
  IWMemAllocatorTableEntry *v9; 
  unsigned int v10; 
  IWMemAllocatorTableEntry *v11; 
  IWMemBlock result; 
  IWMemAllocator *outList[384]; 
  char dest[128]; 

  SortedAllocatorList = IWMem_AllocatorManager_GetSortedAllocatorList((const IWMemAllocator **)outList, 0x180u);
  if ( SortedAllocatorList )
  {
    v1 = outList;
    v2 = SortedAllocatorList;
    do
    {
      v3 = *v1;
      IWMemAllocator::GetOwnedRangeReport(*v1, &result);
      AllocatorTypeName = IWMem_GetAllocatorTypeName((const IWMemAllocatorType)v3->m_type);
      Com_sprintf(dest, 0x80ui64, "%s (%s)", v3->m_name, AllocatorTypeName);
      v5 = (IWMemAllocator::GetTotalSize(v3) + 1023) >> 10;
      UsedSize = IWMemAllocator::GetUsedSize(v3);
      IWMem_Printf("%-47s %016zx-%016zx (%zuk/%zuk used)\n", dest, result.m_address, result.m_size + result.m_address - 1, (UsedSize + 1023) >> 10, v5);
      IWMem_Printf("---------------------------------------------------------------------------------------------------------------\n");
      if ( IWMemAllocator::UseTableLogging(v3) )
      {
        mp_root = v3->m_table.m_allocs.mp_root;
        if ( mp_root )
        {
          v8 = mp_root->m_childNodeIndices[0];
          if ( v8 )
          {
            v9 = &g_iwMemAllocatorPool[v8];
            if ( v9 )
              IWMemAllocatorTableEntry::ForEach(v9, IWMem_Dump_Detail_TableEntry);
          }
          IWMem_Dump_Detail_TableEntry(mp_root);
          v10 = mp_root->m_childNodeIndices[1];
          if ( v10 )
          {
            v11 = &g_iwMemAllocatorPool[v10];
            if ( v11 )
              IWMemAllocatorTableEntry::ForEach(v11, IWMem_Dump_Detail_TableEntry);
          }
        }
      }
      else
      {
        IWMem_Printf("< no entry table >\n");
      }
      IWMem_Printf("\n");
      ++v1;
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
IWMem_Dump_Detail_Allocator
==============
*/
void IWMem_Dump_Detail_Allocator(const IWMemAllocator *p_allocator)
{
  const char *AllocatorTypeName; 
  unsigned __int64 v3; 
  unsigned __int64 UsedSize; 
  IWMemAllocatorTableEntry *mp_root; 
  IWMemBlock result; 
  char dest[128]; 

  IWMemAllocator::GetOwnedRangeReport((IWMemAllocator *)p_allocator, &result);
  AllocatorTypeName = IWMem_GetAllocatorTypeName((const IWMemAllocatorType)p_allocator->m_type);
  Com_sprintf(dest, 0x80ui64, "%s (%s)", p_allocator->m_name, AllocatorTypeName);
  v3 = (IWMemAllocator::GetTotalSize((IWMemAllocator *)p_allocator) + 1023) >> 10;
  UsedSize = IWMemAllocator::GetUsedSize((IWMemAllocator *)p_allocator);
  IWMem_Printf("%-47s %016zx-%016zx (%zuk/%zuk used)\n", dest, result.m_address, result.m_address + result.m_size - 1, (UsedSize + 1023) >> 10, v3);
  IWMem_Printf("---------------------------------------------------------------------------------------------------------------\n");
  if ( IWMemAllocator::UseTableLogging((IWMemAllocator *)p_allocator) )
  {
    mp_root = p_allocator->m_table.m_allocs.mp_root;
    if ( mp_root )
      IWMemAllocatorTableEntry::ForEach(mp_root, IWMem_Dump_Detail_TableEntry);
  }
  else
  {
    IWMem_Printf("< no entry table >\n");
  }
  IWMem_Printf("\n");
}

/*
==============
IWMem_Dump_Detail_Allocator_Leaks
==============
*/
void IWMem_Dump_Detail_Allocator_Leaks(const IWMemAllocator *p_allocator)
{
  IWMemAllocatorTableEntry *mp_root; 

  if ( s_dumpOnlyLeaks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_allocator_detail.cpp", 102, ASSERT_TYPE_ASSERT, "(!s_dumpOnlyLeaks)", (const char *)&queryFormat, "!s_dumpOnlyLeaks") )
    __debugbreak();
  s_dumpOnlyLeaks = 1;
  IWMem_Printf("\n\nLeak detection dump for allocator '%s':\n", p_allocator->m_name);
  if ( !IWMem_ShouldTraceCallstacks() )
    IWMem_Printf("(use +iwmemcallstacks on the commandline to log callstacks for these allocations)\n");
  IWMem_Printf("---------------------------------------------------------------------------------------------------------------\n");
  if ( IWMemAllocator::UseTableLogging((IWMemAllocator *)p_allocator) )
  {
    mp_root = p_allocator->m_table.m_allocs.mp_root;
    if ( mp_root )
      IWMemAllocatorTableEntry::ForEach(mp_root, IWMem_Dump_Detail_TableEntry);
  }
  else
  {
    IWMem_Printf("< no entry table >\n");
  }
  IWMem_Printf("---------------------------------------------------------------------------------------------------------------\n\n");
  s_dumpOnlyLeaks = 0;
}

/*
==============
IWMem_Dump_Detail_TableEntry
==============
*/
void IWMem_Dump_Detail_TableEntry(const IWMemAllocatorTableEntry *p_entry)
{
  IWMemProfileNode *MemProfileNode; 
  IWMemProfileNode *mp_parent; 
  unsigned int m_callstackHash; 
  unsigned int v5; 
  unsigned __int64 *v6; 
  __int64 v7; 
  const char *FunctionName; 
  unsigned __int64 p_dest[16]; 

  if ( !s_dumpOnlyLeaks || (*((_QWORD *)p_entry + 1) & 0x10000000000i64) != 0 )
  {
    IWMem_Printf("%016zx-%016zx  %-12zu ", p_entry->m_address, p_entry->m_address + (*((_QWORD *)p_entry + 1) & 0xFFFFFFFFFFi64) - 1, *((_QWORD *)p_entry + 1) & 0xFFFFFFFFFFi64);
    if ( IWMemAllocatorTableEntry::GetMemProfileNode((IWMemAllocatorTableEntry *)p_entry) )
    {
      MemProfileNode = IWMemAllocatorTableEntry::GetMemProfileNode((IWMemAllocatorTableEntry *)p_entry);
      if ( MemProfileNode )
      {
        while ( 1 )
        {
          mp_parent = (IWMemProfileNode *)MemProfileNode->mp_parent;
          if ( !MemProfileNode->mp_parent )
            break;
          IWMem_Printf((const char *)&queryFormat, MemProfileNode->mp_name);
          MemProfileNode = mp_parent;
          if ( mp_parent->mp_parent )
            IWMem_Printf("->");
        }
      }
    }
    IWMem_Printf("\n");
    if ( IWMem_ShouldTraceCallstacks() && Sys_IsMainThread() )
    {
      m_callstackHash = p_entry->m_callstackHash;
      if ( m_callstackHash )
      {
        v5 = IWMem_CallstackHash_Lookup(m_callstackHash, p_dest, 0x10u);
        if ( v5 )
        {
          v6 = p_dest;
          v7 = v5;
          do
          {
            FunctionName = Callstack_CachedLookup_GetFunctionName(*v6);
            if ( !FunctionName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_allocator_detail.cpp", 149, ASSERT_TYPE_ASSERT, "(p_name)", (const char *)&queryFormat, "p_name") )
              __debugbreak();
            IWMem_Printf("  %s\n", FunctionName);
            ++v6;
            --v7;
          }
          while ( v7 );
        }
        IWMem_Printf("\n");
      }
    }
  }
}

