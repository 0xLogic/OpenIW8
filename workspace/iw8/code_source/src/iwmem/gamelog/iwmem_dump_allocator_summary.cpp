/*
==============
IWMem_Dump_Summary_All
==============
*/

void IWMem_Dump_Summary_All(void)
{
  ?IWMem_Dump_Summary_All@@YAXXZ();
}

/*
==============
DumpAllocatorRow
==============
*/
void DumpAllocatorRow(const IWMemAllocator *r_allocator)
{
  int v2; 
  IWMemAllocator *i; 
  unsigned int v4; 
  const char *AllocatorTypeName; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 MaxUsedSize; 
  unsigned __int64 TotalSize; 
  unsigned __int64 v11; 
  IWMemBlock result; 
  char dest[128]; 

  v2 = 0;
  for ( i = (IWMemAllocator *)IWMemAllocator::GetParentAllocator((IWMemAllocator *)r_allocator); i; i = (IWMemAllocator *)IWMemAllocator::GetParentAllocator(i) )
    ++v2;
  v4 = 40 - v2;
  AllocatorTypeName = IWMem_GetAllocatorTypeName((const IWMemAllocatorType)r_allocator->m_type);
  if ( (unsigned int)(40 - v2) >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_allocator_summary.cpp", 43, ASSERT_TYPE_ASSERT, "(maxChars < bufferSize)", (const char *)&queryFormat, "maxChars < bufferSize") )
    __debugbreak();
  Core_strncpy(dest, 0x80ui64, r_allocator->m_name, v4);
  IWMem_Printf("%*s%-*s%-10s ", v2, (const char *)&queryFormat.fmt + 3, v4, dest, AllocatorTypeName);
  if ( r_allocator->m_type == Count )
  {
    IWMem_Printf("                                           ");
  }
  else
  {
    v6 = (IWMemAllocator::GetMinFreeSize((IWMemAllocator *)r_allocator) + 1023) >> 10;
    v7 = (IWMemAllocator::GetFreeSize((IWMemAllocator *)r_allocator) + 1023) >> 10;
    v8 = (IWMemAllocator::GetUsedSize((IWMemAllocator *)r_allocator) + 1023) >> 10;
    MaxUsedSize = IWMemAllocator::GetMaxUsedSize((IWMemAllocator *)r_allocator);
    IWMem_Printf("%9zuk %9zuk %9zuk %9zuk ", (MaxUsedSize + 1023) >> 10, v8, v7, v6);
  }
  TotalSize = IWMemAllocator::GetTotalSize((IWMemAllocator *)r_allocator);
  IWMem_Printf("%9zuk ", (TotalSize + 1023) >> 10);
  IWMemAllocator::GetOwnedRangeReport((IWMemAllocator *)r_allocator, &result);
  if ( result.m_address || result.m_size != -1i64 )
    v11 = result.m_size + result.m_address - 1;
  else
    v11 = -1i64;
  IWMem_Printf("%016zx-%016zx\n", result.m_address, v11);
}

/*
==============
IWMem_Dump_Summary_All
==============
*/
void IWMem_Dump_Summary_All(void)
{
  unsigned int SortedAllocatorList; 
  __int64 v1; 
  IWMemAllocator **v2; 
  __int64 v3; 
  IWMemAllocator **v4; 
  __int64 v5; 
  IWMemAllocator *v6; 
  IWMemAllocator *ParentAllocator; 
  __int64 v8; 
  __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  IWMemAllocator *v13; 
  unsigned __int64 m_poolItemSize; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  IWMemAllocator **v22; 
  __int64 v23; 
  IWMemAllocator *v24; 
  int v25; 
  IWMemAllocator *i; 
  unsigned int v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  unsigned int v32; 
  IWMemAllocator **v33; 
  __int64 v34; 
  IWMemAllocator *v35; 
  IWMemBlock result; 
  IWMemAllocator *outList[384]; 
  char dest[128]; 
  char src[128]; 
  char v40[128]; 

  SortedAllocatorList = IWMem_AllocatorManager_GetSortedAllocatorList((const IWMemAllocator **)outList, 0x180u);
  v1 = SortedAllocatorList;
  v32 = SortedAllocatorList;
  IWMem_Printf("\n");
  IWMem_Printf("Allocators                              Type       Peak Used  Used       Free       Min Free   Total      Start            End\n");
  IWMem_Printf("--------------------------------------- ---------- ---------- ---------- ---------- ---------- ---------- ---------------------------------\n");
  if ( (_DWORD)v1 )
  {
    v2 = outList;
    v3 = (unsigned int)v1;
    do
    {
      if ( (*v2)->m_type != (Count|0x4) )
        DumpAllocatorRow(*v2);
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  IWMem_Printf("\n");
  IWMem_Printf("Pool Allocators                         ItemSize Peak   Used   Total  PeakKb  UsedKb  TotalKb  Start            End\n");
  IWMem_Printf("--------------------------------------- -------- ------ ------ ------ ------- ------- -------  ---------------------------------\n");
  memset_0(dest, 0, sizeof(dest));
  memset_0(v40, 0, sizeof(v40));
  if ( (_DWORD)v1 )
  {
    v4 = outList;
    v5 = v1;
    v33 = outList;
    v34 = v1;
    do
    {
      v6 = *v4;
      if ( v6->m_type == (Count|0x4) )
      {
        dest[0] = 0;
        src[0] = 0;
        ParentAllocator = (IWMemAllocator *)IWMemAllocator::GetParentAllocator(v6);
        while ( ParentAllocator )
        {
          dest[0] = 0;
          I_strcat(dest, 0x80ui64, ParentAllocator->m_name);
          if ( src[0] )
          {
            I_strcat(dest, 0x80ui64, "->");
            I_strcat(dest, 0x80ui64, src);
          }
          ParentAllocator = (IWMemAllocator *)IWMemAllocator::GetParentAllocator(ParentAllocator);
          Core_strcpy(src, 0x80ui64, dest);
        }
        v8 = 0x7FFFFFFFi64;
        v9 = 0i64;
        do
        {
          v10 = dest[v9];
          v11 = v8;
          v12 = v40[v9++];
          --v8;
          if ( !v11 )
            break;
          if ( v10 != v12 )
          {
            IWMem_Printf("%s\n", dest);
            Core_strcpy(v40, 0x80ui64, dest);
            break;
          }
        }
        while ( v10 );
        v13 = *v33;
        v35 = *v33;
        IWMem_Printf("%*s", 1, (const char *)&queryFormat.fmt + 3);
        m_poolItemSize = v13->m_poolItemSize;
        v15 = (IWMemAllocator::GetCommitSize(v13) + 1023) >> 10;
        v16 = (IWMemAllocator::GetUsedSize(v13) + 1023) >> 10;
        v17 = (IWMemAllocator::GetMaxUsedSize(v13) + 1023) >> 10;
        v18 = IWMemAllocator::GetCommitSize(v13) / m_poolItemSize;
        v19 = IWMemAllocator::GetUsedSize(v13) / m_poolItemSize;
        v20 = IWMemAllocator::GetMaxUsedSize(v13) / m_poolItemSize;
        Core_strncpy(src, 0x80ui64, v35->m_name, 0x27ui64);
        IWMem_Printf("%-*s%8zu %6zu %6zu/%6zu %6zuk %6zuk/%6zuk  ", 39, src, m_poolItemSize, v20, v19, v18, v17, v16, v15);
        IWMemAllocator::GetOwnedRangeReport(v35, &result);
        if ( result.m_address || result.m_size != -1i64 )
          v21 = result.m_size + result.m_address - 1;
        else
          v21 = -1i64;
        IWMem_Printf("%016zx-%016zx\n", result.m_address, v21);
        v5 = v34;
      }
      v4 = v33 + 1;
      --v5;
      ++v33;
      v34 = v5;
    }
    while ( v5 );
    LODWORD(v1) = v32;
  }
  IWMem_Printf("\n");
  IWMem_Printf("Virtual Reserve Allocators              Used        Free        Total       Start            End\n");
  IWMem_Printf("--------------------------------------- ----------- ----------- ----------- ---------------------------------\n");
  if ( (_DWORD)v1 )
  {
    v22 = outList;
    v23 = (unsigned int)v1;
    do
    {
      v24 = *v22;
      if ( (*v22)->m_type == Count )
      {
        v25 = 0;
        for ( i = (IWMemAllocator *)IWMemAllocator::GetParentAllocator(*v22); i; i = (IWMemAllocator *)IWMemAllocator::GetParentAllocator(i) )
          ++v25;
        v27 = 40 - v25;
        IWMem_Printf("%*s", v25, (const char *)&queryFormat.fmt + 3);
        v28 = (IWMemAllocator::GetTotalSize(v24) + 1023) >> 10;
        v29 = (IWMemAllocator::GetFreeSize(v24) + 1023) >> 10;
        v30 = (IWMemAllocator::GetUsedSize(v24) + 1023) >> 10;
        if ( v27 >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_allocator_summary.cpp", 43, ASSERT_TYPE_ASSERT, "(maxChars < bufferSize)", (const char *)&queryFormat, "maxChars < bufferSize") )
          __debugbreak();
        Core_strncpy(src, 0x80ui64, v24->m_name, v27);
        IWMem_Printf("%-*s%10zuk %10zuk %10zuk ", v27, src, v30, v29, v28);
        IWMemAllocator::GetOwnedRangeReport(v24, &result);
        if ( result.m_address || result.m_size != -1i64 )
          v31 = result.m_size + result.m_address - 1;
        else
          v31 = -1i64;
        IWMem_Printf("%016zx-%016zx\n", result.m_address, v31);
      }
      ++v22;
      --v23;
    }
    while ( v23 );
  }
  IWMem_Printf("\n");
}

