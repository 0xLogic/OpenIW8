/*
==============
IWMemDumpHierarchyData::TruncateStackName
==============
*/

void __fastcall IWMemDumpHierarchyData::TruncateStackName(IWMemDumpHierarchyData *this, const int len)
{
  ?TruncateStackName@IWMemDumpHierarchyData@@QEAAXH@Z(this, len);
}

/*
==============
IWMem_Dump_Hierarchy_RecurseProfileTree
==============
*/

unsigned __int64 __fastcall IWMem_Dump_Hierarchy_RecurseProfileTree(IWMemDumpHierarchyData *data, const IWMemAllocator *r_allocator, const IWMemProfileNode *r_node, const int depth)
{
  return ?IWMem_Dump_Hierarchy_RecurseProfileTree@@YA_KAEAUIWMemDumpHierarchyData@@AEBVIWMemAllocator@@AEBVIWMemProfileNode@@H@Z(data, r_allocator, r_node, depth);
}

/*
==============
IWMem_Dump_Hierarchy_Recurse
==============
*/

unsigned __int64 __fastcall IWMem_Dump_Hierarchy_Recurse(IWMemDumpHierarchyData *data, const IWMemAllocator *r_allocator)
{
  return ?IWMem_Dump_Hierarchy_Recurse@@YA_KAEAUIWMemDumpHierarchyData@@AEBVIWMemAllocator@@@Z(data, r_allocator);
}

/*
==============
IWMem_Dump_Hierarchy_All
==============
*/

void IWMem_Dump_Hierarchy_All(void)
{
  ?IWMem_Dump_Hierarchy_All@@YAXXZ();
}

/*
==============
IWMemDumpHierarchyData::AddStackName
==============
*/

void __fastcall IWMemDumpHierarchyData::AddStackName(IWMemDumpHierarchyData *this, const char *const str)
{
  ?AddStackName@IWMemDumpHierarchyData@@QEAAXQEBD@Z(this, str);
}

/*
==============
IWMemDumpHierarchyData::AddStackName
==============
*/
void IWMemDumpHierarchyData::AddStackName(IWMemDumpHierarchyData *this, const char *const str)
{
  __int64 v3; 
  __int64 stackNameLen; 

  v3 = -1i64;
  do
    ++v3;
  while ( str[v3] );
  stackNameLen = this->stackNameLen;
  if ( 512 - stackNameLen > (unsigned __int64)((int)v3 + 2) )
  {
    if ( (int)stackNameLen > 0 )
    {
      this->stackName[stackNameLen] = 44;
      LODWORD(stackNameLen) = ++this->stackNameLen;
    }
    Core_strcpy(&this->stackName[(int)stackNameLen], 512i64 - (int)stackNameLen, str);
    this->stackNameLen += v3;
  }
}

/*
==============
IWMem_Dump_Hierarchy_All
==============
*/
void IWMem_Dump_Hierarchy_All(void)
{
  IWMemDumpHierarchyData data; 

  data.stackName[0] = 0;
  data.stackNameLen = 0;
  data.numAllocators = IWMem_AllocatorManager_GetSortedAllocatorList(data.allocators, 0x180u);
  if ( data.numAllocators )
    IWMem_Dump_Hierarchy_Recurse(&data, data.allocators[0]);
}

/*
==============
IWMem_Dump_Hierarchy_Recurse
==============
*/
unsigned __int64 IWMem_Dump_Hierarchy_Recurse(IWMemDumpHierarchyData *data, const IWMemAllocator *r_allocator)
{
  unsigned __int64 v4; 
  __int64 stackNameLen; 
  unsigned int i; 
  const IWMemAllocator **v7; 
  unsigned __int64 CommitSize; 
  unsigned __int64 v9; 
  const IWMemProfileNode *SizeTree; 
  unsigned __int64 v11; 
  bool v12; 
  const char *v13; 

  v4 = 0i64;
  IWMemDumpHierarchyData::AddStackName(data, r_allocator->m_name);
  stackNameLen = data->stackNameLen;
  for ( i = 0; i < data->numAllocators; ++i )
  {
    v7 = &data->allocators[i];
    if ( IWMemAllocator::GetParentAllocator((IWMemAllocator *)*v7) == r_allocator )
    {
      v4 += IWMem_Dump_Hierarchy_Recurse(data, *v7);
      if ( (unsigned int)stackNameLen > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_hierarchy.cpp", 68, ASSERT_TYPE_ASSERT, "(len <= sizeof( stackName ))", (const char *)&queryFormat, "len <= sizeof( stackName )") )
        __debugbreak();
      data->stackNameLen = stackNameLen;
      data->stackName[stackNameLen] = 0;
    }
  }
  CommitSize = IWMemAllocator::GetCommitSize((IWMemAllocator *)r_allocator);
  v9 = CommitSize;
  if ( CommitSize )
  {
    if ( v4 )
    {
      v12 = v4 <= CommitSize;
      if ( v4 >= CommitSize )
        goto LABEL_22;
      v13 = "%s,commit slop,%zu\n";
      if ( r_allocator->m_type != 4 )
        v13 = "%s,unknown slop,%zu\n";
      IWMem_Printf(v13, data->stackName, CommitSize - v4);
    }
    else if ( r_allocator->m_type != Count )
    {
      SizeTree = IWMemDumpSizeTree::CreateSizeTree(&data->sizeTree, r_allocator);
      if ( SizeTree && IWMemAllocator::UseTableLogging((IWMemAllocator *)r_allocator) )
      {
        v11 = IWMem_Dump_Hierarchy_RecurseProfileTree(data, r_allocator, SizeTree, 0);
        IWMemDumpHierarchyData::TruncateStackName(data, stackNameLen);
        if ( v11 != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_hierarchy.cpp", 154, ASSERT_TYPE_ASSERT, "(childProfileUsage == totalUsedSize)", (const char *)&queryFormat, "childProfileUsage == totalUsedSize") )
          __debugbreak();
      }
      else
      {
        IWMem_Printf("%s,%zu\n", data->stackName, v9);
      }
    }
  }
  v12 = v4 <= v9;
LABEL_22:
  if ( !v12 )
    return v4;
  return v9;
}

/*
==============
IWMem_Dump_Hierarchy_RecurseProfileTree
==============
*/
__int64 IWMem_Dump_Hierarchy_RecurseProfileTree(IWMemDumpHierarchyData *data, const IWMemAllocator *r_allocator, const IWMemProfileNode *r_node, const int depth)
{
  __int64 v4; 
  const IWMemProfileNode *v8; 
  __int64 v9; 
  __int64 stackNameLen; 
  const IWMemProfileNode *mp_first_child; 
  __int64 v12; 
  IWMemDumpSizeTree::SizeEntry result; 
  char dest[256]; 

  v4 = 0i64;
  v8 = r_node;
  if ( depth > 0 )
  {
    IWMemProfileNode::GetSanitizedName((IWMemProfileNode *)r_node, dest, 256);
    v9 = -1i64;
    do
      ++v9;
    while ( dest[v9] );
    stackNameLen = data->stackNameLen;
    if ( 512 - stackNameLen > (unsigned __int64)((int)v9 + 2) )
    {
      if ( (int)stackNameLen > 0 )
      {
        data->stackName[stackNameLen] = 44;
        LODWORD(stackNameLen) = ++data->stackNameLen;
      }
      Core_strcpy(&data->stackName[(int)stackNameLen], 512i64 - (int)stackNameLen, dest);
      data->stackNameLen += v9;
    }
  }
  mp_first_child = (const IWMemProfileNode *)v8->mp_first_child;
  v12 = data->stackNameLen;
  if ( mp_first_child )
  {
    do
    {
      v4 += IWMem_Dump_Hierarchy_RecurseProfileTree(data, r_allocator, mp_first_child, depth + 1);
      if ( (unsigned int)v12 > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_hierarchy.cpp", 68, ASSERT_TYPE_ASSERT, "(len <= sizeof( stackName ))", (const char *)&queryFormat, "len <= sizeof( stackName )") )
        __debugbreak();
      data->stackNameLen = v12;
      data->stackName[v12] = 0;
      mp_first_child = (const IWMemProfileNode *)mp_first_child->mp_next_sibling;
    }
    while ( mp_first_child );
    v8 = r_node;
  }
  IWMemDumpSizeTree::GetSizeEntry(&data->sizeTree, &result, v8);
  if ( result.size )
  {
    v4 += result.size;
    IWMem_Printf("%s,%zu\n", data->stackName, result.size);
  }
  return v4;
}

/*
==============
IWMemDumpHierarchyData::TruncateStackName
==============
*/
void IWMemDumpHierarchyData::TruncateStackName(IWMemDumpHierarchyData *this, const int len)
{
  __int64 v2; 

  v2 = len;
  if ( (unsigned int)len > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_hierarchy.cpp", 68, ASSERT_TYPE_ASSERT, "(len <= sizeof( stackName ))", (const char *)&queryFormat, "len <= sizeof( stackName )") )
    __debugbreak();
  this->stackNameLen = v2;
  this->stackName[v2] = 0;
}

