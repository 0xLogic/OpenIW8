/*
==============
IWMemDumpSizeTree::GetSizeEntry
==============
*/

IWMemDumpSizeTree::SizeEntry *__fastcall IWMemDumpSizeTree::GetSizeEntry(IWMemDumpSizeTree *this, IWMemDumpSizeTree::SizeEntry *result, const IWMemProfileNode *r_memProfileNode)
{
  return ?GetSizeEntry@IWMemDumpSizeTree@@QEBA?AUSizeEntry@1@AEBVIWMemProfileNode@@@Z(this, result, r_memProfileNode);
}

/*
==============
IWMemDumpSizeTree::NewSizeNode
==============
*/

LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> *__fastcall IWMemDumpSizeTree::NewSizeNode(IWMemDumpSizeTree *this, const IWMemProfileNode *r_memProfileNode)
{
  return ?NewSizeNode@IWMemDumpSizeTree@@AEAAPEAV?$LeanRBTreeNodePair@PEBVIWMemProfileNode@@USizeEntry@IWMemDumpSizeTree@@@@AEBVIWMemProfileNode@@@Z(this, r_memProfileNode);
}

/*
==============
IWMemDumpSizeTree::CreateSizeTree
==============
*/

const IWMemProfileNode *__fastcall IWMemDumpSizeTree::CreateSizeTree(IWMemDumpSizeTree *this, const IWMemAllocator *r_allocator)
{
  return ?CreateSizeTree@IWMemDumpSizeTree@@QEAAPEBVIWMemProfileNode@@AEBVIWMemAllocator@@@Z(this, r_allocator);
}

/*
==============
IWMemDumpSizeTree::AddToSizeTree
==============
*/

void __fastcall IWMemDumpSizeTree::AddToSizeTree(IWMemDumpSizeTree *this, const IWMemAllocatorTableEntry *r_allocationEntry)
{
  ?AddToSizeTree@IWMemDumpSizeTree@@QEAAXAEBVIWMemAllocatorTableEntry@@@Z(this, r_allocationEntry);
}

/*
==============
IWMemDumpSizeTree::FillInRecursiveSizes
==============
*/

unsigned __int64 __fastcall IWMemDumpSizeTree::FillInRecursiveSizes(IWMemDumpSizeTree *this, const IWMemProfileNode *r_memProfileNode)
{
  return ?FillInRecursiveSizes@IWMemDumpSizeTree@@AEAA_KAEBVIWMemProfileNode@@@Z(this, r_memProfileNode);
}

/*
==============
IWMemDumpSizeTree::AddToSizeTree
==============
*/
void IWMemDumpSizeTree::AddToSizeTree(IWMemDumpSizeTree *this, const IWMemAllocatorTableEntry *r_allocationEntry)
{
  const IWMemProfileNode *MemProfileNode; 
  unsigned __int64 m_address; 
  __int64 v6; 
  LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> *mp_root; 
  __int64 v8; 
  __int128 v9; 
  double v10; 

  MemProfileNode = IWMemAllocatorTableEntry::GetMemProfileNode((IWMemAllocatorTableEntry *)r_allocationEntry);
  if ( MemProfileNode )
  {
    m_address = r_allocationEntry->m_address;
    v6 = *((_QWORD *)r_allocationEntry + 1) & 0xFFFFFFFFFFi64;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
      __debugbreak();
    if ( m_address >= v6 + m_address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
      __debugbreak();
    if ( v6 )
    {
      mp_root = this->m_sizeTree.mp_root;
      if ( this->m_sizeTree.mp_root )
      {
        while ( MemProfileNode != mp_root->m_key )
        {
          v8 = 40i64;
          if ( MemProfileNode > mp_root->m_key )
            v8 = 48i64;
          mp_root = *(LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> **)((char *)&mp_root->m_key + v8);
          if ( !mp_root )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        mp_root = IWMemDumpSizeTree::NewSizeNode(this, MemProfileNode);
      }
      *((_QWORD *)&v9 + 1) = mp_root->m_value.recursiveSize;
      v10 = *(double *)&mp_root->m_value.numAllocs;
      ++LODWORD(v10);
      *(_QWORD *)&v9 = v6 + mp_root->m_value.size;
      if ( *((_QWORD *)&v9 + 1) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 125, ASSERT_TYPE_ASSERT, "(entry.recursiveSize == 0)", (const char *)&queryFormat, "entry.recursiveSize == 0") )
          __debugbreak();
      }
      *(_OWORD *)&mp_root->m_value.size = v9;
      *(double *)&mp_root->m_value.numAllocs = v10;
    }
  }
}

/*
==============
IWMemDumpSizeTree::CreateSizeTree
==============
*/
const IWMemProfileNode *IWMemDumpSizeTree::CreateSizeTree(IWMemDumpSizeTree *this, const IWMemAllocator *r_allocator)
{
  IWMemAllocatorTableEntry *mp_root; 
  const IWMemProfileNode *result; 
  const IWMemProfileNode *v6; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 56, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_iwMemDumpSizeTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 57, ASSERT_TYPE_ASSERT, "(s_iwMemDumpSizeTree == nullptr)", (const char *)&queryFormat, "s_iwMemDumpSizeTree == nullptr") )
    __debugbreak();
  s_iwMemDumpSizeTree = this;
  this->m_nodePoolCount = 0;
  this->m_sizeTree.mp_root = NULL;
  this->m_sizeTree.m_count = 0;
  mp_root = r_allocator->m_table.m_allocs.mp_root;
  if ( mp_root )
    IWMemAllocatorTableEntry::ForEach(mp_root, IWMem_Dump_SizeTree_AddToSizeTree);
  result = IWMem_ProfileTree_GetRootNode();
  v6 = result;
  if ( result )
  {
    IWMemDumpSizeTree::FillInRecursiveSizes(this, result);
    result = v6;
  }
  s_iwMemDumpSizeTree = NULL;
  return result;
}

/*
==============
IWMemDumpSizeTree::FillInRecursiveSizes
==============
*/
unsigned __int64 IWMemDumpSizeTree::FillInRecursiveSizes(IWMemDumpSizeTree *this, const IWMemProfileNode *r_memProfileNode)
{
  LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> *mp_root; 
  unsigned __int64 size; 
  __int64 v6; 
  const IWMemProfileNode *i; 
  __int128 v9; 
  double v10; 

  mp_root = this->m_sizeTree.mp_root;
  size = 0i64;
  if ( this->m_sizeTree.mp_root )
  {
    while ( r_memProfileNode != mp_root->m_key )
    {
      v6 = 40i64;
      if ( r_memProfileNode > mp_root->m_key )
        v6 = 48i64;
      mp_root = *(LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> **)((char *)&mp_root->m_key + v6);
      if ( !mp_root )
        goto LABEL_6;
    }
    size = mp_root->m_value.size;
  }
  else
  {
LABEL_6:
    mp_root = NULL;
  }
  for ( i = (const IWMemProfileNode *)r_memProfileNode->mp_first_child; i; i = (const IWMemProfileNode *)i->mp_next_sibling )
  {
    size += IWMemDumpSizeTree::FillInRecursiveSizes(this, i);
    if ( size && !mp_root )
      mp_root = IWMemDumpSizeTree::NewSizeNode(this, r_memProfileNode);
  }
  if ( mp_root )
  {
    v9 = *(_OWORD *)&mp_root->m_value.size;
    v10 = *(double *)&mp_root->m_value.numAllocs;
    *((_QWORD *)&v9 + 1) = size;
    if ( size < (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 200, ASSERT_TYPE_ASSERT, "(sizeEntry.recursiveSize >= sizeEntry.size)", (const char *)&queryFormat, "sizeEntry.recursiveSize >= sizeEntry.size") )
      __debugbreak();
    *(_OWORD *)&mp_root->m_value.size = v9;
    *(double *)&mp_root->m_value.numAllocs = v10;
  }
  return size;
}

/*
==============
IWMemDumpSizeTree::GetSizeEntry
==============
*/
IWMemDumpSizeTree::SizeEntry *IWMemDumpSizeTree::GetSizeEntry(IWMemDumpSizeTree *this, IWMemDumpSizeTree::SizeEntry *result, const IWMemProfileNode *r_memProfileNode)
{
  LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> *mp_root; 
  __int64 v4; 
  IWMemDumpSizeTree::SizeEntry *v5; 
  double v6; 
  double v7; 

  mp_root = this->m_sizeTree.mp_root;
  if ( this->m_sizeTree.mp_root )
  {
    while ( r_memProfileNode != mp_root->m_key )
    {
      v4 = 40i64;
      if ( r_memProfileNode > mp_root->m_key )
        v4 = 48i64;
      mp_root = *(LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> **)((char *)&mp_root->m_key + v4);
      if ( !mp_root )
        goto LABEL_6;
    }
    v6 = *(double *)&mp_root->m_value.numAllocs;
    *(_OWORD *)&result->size = *(_OWORD *)&mp_root->m_value.size;
    *(double *)&result->numAllocs = v6;
    return result;
  }
  else
  {
LABEL_6:
    LODWORD(v7) = 0;
    v5 = result;
    *(_OWORD *)&result->size = 0ui64;
    *(double *)&result->numAllocs = v7;
  }
  return v5;
}

/*
==============
IWMem_Dump_SizeTree_AddToSizeTree
==============
*/
void IWMem_Dump_SizeTree_AddToSizeTree(const IWMemAllocatorTableEntry *p_allocationEntry)
{
  IWMemDumpSizeTree *v2; 
  const IWMemProfileNode *MemProfileNode; 
  unsigned __int64 m_address; 
  __int64 v5; 
  LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> *mp_root; 
  __int64 v7; 
  __int128 v8; 
  double v9; 

  if ( !s_iwMemDumpSizeTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 43, ASSERT_TYPE_ASSERT, "(s_iwMemDumpSizeTree)", (const char *)&queryFormat, "s_iwMemDumpSizeTree") )
    __debugbreak();
  if ( !p_allocationEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 44, ASSERT_TYPE_ASSERT, "(p_allocationEntry)", (const char *)&queryFormat, "p_allocationEntry") )
    __debugbreak();
  v2 = s_iwMemDumpSizeTree;
  MemProfileNode = IWMemAllocatorTableEntry::GetMemProfileNode((IWMemAllocatorTableEntry *)p_allocationEntry);
  if ( MemProfileNode )
  {
    m_address = p_allocationEntry->m_address;
    v5 = *((_QWORD *)p_allocationEntry + 1) & 0xFFFFFFFFFFi64;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
      __debugbreak();
    if ( m_address >= m_address + v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
      __debugbreak();
    if ( v5 )
    {
      mp_root = v2->m_sizeTree.mp_root;
      if ( v2->m_sizeTree.mp_root )
      {
        while ( MemProfileNode != mp_root->m_key )
        {
          v7 = 40i64;
          if ( MemProfileNode > mp_root->m_key )
            v7 = 48i64;
          mp_root = *(LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> **)((char *)&mp_root->m_key + v7);
          if ( !mp_root )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        mp_root = IWMemDumpSizeTree::NewSizeNode(v2, MemProfileNode);
      }
      *((_QWORD *)&v8 + 1) = mp_root->m_value.recursiveSize;
      v9 = *(double *)&mp_root->m_value.numAllocs;
      ++LODWORD(v9);
      *(_QWORD *)&v8 = v5 + mp_root->m_value.size;
      if ( *((_QWORD *)&v8 + 1) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 125, ASSERT_TYPE_ASSERT, "(entry.recursiveSize == 0)", (const char *)&queryFormat, "entry.recursiveSize == 0") )
          __debugbreak();
      }
      *(_OWORD *)&mp_root->m_value.size = v8;
      *(double *)&mp_root->m_value.numAllocs = v9;
    }
  }
}

/*
==============
IWMemDumpSizeTree::NewSizeNode
==============
*/
LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> *IWMemDumpSizeTree::NewSizeNode(IWMemDumpSizeTree *this, const IWMemProfileNode *r_memProfileNode)
{
  __int64 v4; 
  LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> *v5; 
  unsigned int m_nodePoolCount; 
  int v8; 
  double v9; 

  if ( this->m_nodePoolCount >= 0x2000 )
  {
    v8 = 0x2000;
    m_nodePoolCount = this->m_nodePoolCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 140, ASSERT_TYPE_ASSERT, "(unsigned)( m_nodePoolCount ) < (unsigned)( ( sizeof( *array_counter( m_nodePool ) ) + 0 ) )", "m_nodePoolCount doesn't index ARRAY_COUNT( m_nodePool )\n\t%i not in [0, %i)", m_nodePoolCount, v8) )
      __debugbreak();
  }
  v4 = this->m_nodePoolCount;
  v5 = &this->m_nodePool[v4];
  this->m_nodePoolCount = v4 + 1;
  v5->m_is_red = 1;
  v5->mp_child_nodes[0] = NULL;
  v5->mp_child_nodes[1] = NULL;
  LODWORD(v9) = 0;
  *(_OWORD *)&v5->m_value.size = 0ui64;
  *(double *)&v5->m_value.numAllocs = v9;
  v5->m_key = r_memProfileNode;
  LeanRBTree<LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry>>::Insert(&this->m_sizeTree, v5);
  return v5;
}

