/*
==============
IWMem_Dump_ProfileTree_All
==============
*/

void IWMem_Dump_ProfileTree_All(void)
{
  ?IWMem_Dump_ProfileTree_All@@YAXXZ();
}

/*
==============
IWMem_Dump_ProfileTree_Allocator
==============
*/

void __fastcall IWMem_Dump_ProfileTree_Allocator(const IWMemAllocator *p_allocator)
{
  ?IWMem_Dump_ProfileTree_Allocator@@YAXPEBVIWMemAllocator@@@Z(p_allocator);
}

/*
==============
IWMem_Dump_ProfileTree_All
==============
*/
void IWMem_Dump_ProfileTree_All(void)
{
  unsigned int SortedAllocatorList; 
  IWMemAllocator **v1; 
  __int64 v2; 
  IWMemAllocator *outList[384]; 

  SortedAllocatorList = IWMem_AllocatorManager_GetSortedAllocatorList((const IWMemAllocator **)outList, 0x180u);
  if ( SortedAllocatorList )
  {
    v1 = outList;
    v2 = SortedAllocatorList;
    do
    {
      IWMem_Dump_ProfileTree_Allocator(*v1++);
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
IWMem_Dump_ProfileTree_Allocator
==============
*/
void IWMem_Dump_ProfileTree_Allocator(const IWMemAllocator *p_allocator)
{
  const IWMemProfileNode *v2; 
  unsigned __int64 TotalSize; 
  const char *AllocatorTypeName; 
  unsigned __int64 FreeSize; 
  unsigned __int64 UsedSize; 
  IWMemDumpSizeTree sizeTree; 
  char dest[128]; 

  v2 = IWMemDumpSizeTree::CreateSizeTree(&sizeTree, p_allocator);
  TotalSize = IWMemAllocator::GetTotalSize((IWMemAllocator *)p_allocator);
  AllocatorTypeName = IWMem_GetAllocatorTypeName((const IWMemAllocatorType)p_allocator->m_type);
  Com_sprintf(dest, 0x80ui64, "%s (%s)", p_allocator->m_name, AllocatorTypeName);
  IWMem_Printf("--------------------------------------------------------------------------------------\n");
  IWMem_Printf("%-*s            %9zuk\n", 50, dest, (TotalSize + 1023) >> 10);
  IWMem_Printf("--------------------------------------------------------------------------------------\n");
  FreeSize = IWMemAllocator::GetFreeSize((IWMemAllocator *)p_allocator);
  if ( FreeSize )
    IWMem_Printf("%-*s            %9zuk\n", 50, "<free space>", (FreeSize + 1023) >> 10);
  if ( v2 && IWMemAllocator::UseTableLogging((IWMemAllocator *)p_allocator) )
  {
    IWMem_Dump_ProfileTree_DumpNode(&sizeTree, v2, 0);
  }
  else
  {
    UsedSize = IWMemAllocator::GetUsedSize((IWMemAllocator *)p_allocator);
    IWMem_Printf("%-*s            %9zuk\n", 50, "<used blocks>", (UsedSize + 1023) >> 10);
    IWMem_Printf("<no entry table>\n");
  }
  IWMem_Printf("--------------------------------------------------------------------------------------\n");
  IWMem_Printf("\n");
}

/*
==============
IWMem_Dump_ProfileTree_DumpNode
==============
*/
void IWMem_Dump_ProfileTree_DumpNode(const IWMemDumpSizeTree *sizeTree, const IWMemProfileNode *r_node, const int indent)
{
  unsigned int v6; 
  const IWMemProfileNode *i; 
  __int64 v8; 
  IWMemDumpSizeTree::SizeEntry result; 
  char dest[256]; 

  IWMemDumpSizeTree::GetSizeEntry((IWMemDumpSizeTree *)sizeTree, &result, r_node);
  if ( result.recursiveSize )
  {
    v6 = 50 - indent;
    if ( 50 - indent > 0 )
    {
      if ( v6 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_profile_tree.cpp", 64, ASSERT_TYPE_ASSERT, "(maxStrLen < sizeof( nameBuf ))", (const char *)&queryFormat, "maxStrLen < sizeof( nameBuf )") )
        __debugbreak();
      IWMemProfileNode::GetSanitizedName((IWMemProfileNode *)r_node, dest, v6);
      IWMem_Printf("%*s", indent, (const char *)&queryFormat.fmt + 3);
      LODWORD(v8) = result.numAllocs;
      IWMem_Printf("%-*s %9zuk/%9zuk (%4d blocks)\n", v6, dest, (result.size + 1023) >> 10, (result.recursiveSize + 1023) >> 10, v8);
      for ( i = (const IWMemProfileNode *)r_node->mp_first_child; i; i = (const IWMemProfileNode *)i->mp_next_sibling )
        IWMem_Dump_ProfileTree_DumpNode(sizeTree, i, indent + 2);
    }
  }
}

