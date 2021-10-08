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
  __int64 v8; 
  __int128 v15; 
  __int64 v16; 

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
      _RBX = this->m_sizeTree.mp_root;
      if ( this->m_sizeTree.mp_root )
      {
        while ( MemProfileNode != _RBX->m_key )
        {
          v8 = 40i64;
          if ( MemProfileNode > _RBX->m_key )
            v8 = 48i64;
          _RBX = *(LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> **)((char *)&_RBX->m_key + v8);
          if ( !_RBX )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        _RBX = IWMemDumpSizeTree::NewSizeNode(this, MemProfileNode);
      }
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+8]
        vmovsd  xmm0, qword ptr [rbx+18h]
        vmovups [rsp+58h+var_28], xmm1
      }
      *((_QWORD *)&v15 + 1) = *((_QWORD *)&_RT0 + 1);
      __asm
      {
        vmovq   rcx, xmm1
        vmovsd  [rsp+58h+var_18], xmm0
      }
      LODWORD(v16) = v16 + 1;
      *(_QWORD *)&v15 = v6 + _RCX;
      if ( *((_QWORD *)&v15 + 1) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 125, ASSERT_TYPE_ASSERT, "(entry.recursiveSize == 0)", (const char *)&queryFormat, "entry.recursiveSize == 0") )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm0, [rsp+58h+var_28]
        vmovsd  xmm1, [rsp+58h+var_18]
        vmovups xmmword ptr [rbx+8], xmm0
        vmovsd  qword ptr [rbx+18h], xmm1
      }
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
  unsigned __int64 size; 
  __int64 v6; 
  const IWMemProfileNode *i; 
  __int128 v13; 

  _RBX = this->m_sizeTree.mp_root;
  size = 0i64;
  if ( this->m_sizeTree.mp_root )
  {
    while ( r_memProfileNode != _RBX->m_key )
    {
      v6 = 40i64;
      if ( r_memProfileNode > _RBX->m_key )
        v6 = 48i64;
      _RBX = *(LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> **)((char *)&_RBX->m_key + v6);
      if ( !_RBX )
        goto LABEL_6;
    }
    size = _RBX->m_value.size;
  }
  else
  {
LABEL_6:
    _RBX = NULL;
  }
  for ( i = (const IWMemProfileNode *)r_memProfileNode->mp_first_child; i; i = (const IWMemProfileNode *)i->mp_next_sibling )
  {
    size += IWMemDumpSizeTree::FillInRecursiveSizes(this, i);
    if ( size && !_RBX )
      _RBX = IWMemDumpSizeTree::NewSizeNode(this, r_memProfileNode);
  }
  if ( _RBX )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+8]
      vmovups [rsp+68h+var_38], xmm0
      vmovsd  xmm0, qword ptr [rbx+18h]
      vmovsd  [rsp+68h+arg_0], xmm0
    }
    *((_QWORD *)&v13 + 1) = size;
    if ( size < (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 200, ASSERT_TYPE_ASSERT, "(sizeEntry.recursiveSize >= sizeEntry.size)", (const char *)&queryFormat, "sizeEntry.recursiveSize >= sizeEntry.size") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, [rsp+68h+var_38]
      vmovsd  xmm1, [rsp+68h+arg_0]
      vmovups xmmword ptr [rbx+8], xmm0
      vmovsd  qword ptr [rbx+18h], xmm1
    }
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
  __int64 v4; 
  IWMemDumpSizeTree::SizeEntry *v6; 
  __int128 v10; 
  __int64 v11; 

  _R9 = this->m_sizeTree.mp_root;
  if ( this->m_sizeTree.mp_root )
  {
    while ( r_memProfileNode != _R9->m_key )
    {
      v4 = 40i64;
      if ( r_memProfileNode > _R9->m_key )
        v4 = 48i64;
      _R9 = *(LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> **)((char *)&_R9->m_key + v4);
      if ( !_R9 )
        goto LABEL_6;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r9+8]
      vmovsd  xmm1, qword ptr [r9+18h]
      vmovups xmmword ptr [rdx], xmm0
      vmovsd  qword ptr [rdx+10h], xmm1
    }
    return result;
  }
  else
  {
LABEL_6:
    v10 = 0ui64;
    __asm { vmovups xmm0, [rsp+28h+var_28] }
    LODWORD(v11) = 0;
    v6 = result;
    __asm
    {
      vmovsd  xmm1, [rsp+28h+var_18]
      vmovups xmmword ptr [rdx], xmm0
      vmovsd  qword ptr [rdx+10h], xmm1
    }
  }
  return v6;
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
  __int64 v7; 
  __int128 v14; 
  __int64 v15; 

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
      _RBX = v2->m_sizeTree.mp_root;
      if ( v2->m_sizeTree.mp_root )
      {
        while ( MemProfileNode != _RBX->m_key )
        {
          v7 = 40i64;
          if ( MemProfileNode > _RBX->m_key )
            v7 = 48i64;
          _RBX = *(LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry> **)((char *)&_RBX->m_key + v7);
          if ( !_RBX )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        _RBX = IWMemDumpSizeTree::NewSizeNode(v2, MemProfileNode);
      }
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+8]
        vmovsd  xmm0, qword ptr [rbx+18h]
        vmovups [rsp+68h+var_38], xmm1
      }
      *((_QWORD *)&v14 + 1) = *((_QWORD *)&_RT0 + 1);
      __asm
      {
        vmovq   rdx, xmm1
        vmovsd  [rsp+68h+var_28], xmm0
      }
      LODWORD(v15) = v15 + 1;
      *(_QWORD *)&v14 = v5 + _RDX;
      if ( *((_QWORD *)&v14 + 1) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 125, ASSERT_TYPE_ASSERT, "(entry.recursiveSize == 0)", (const char *)&queryFormat, "entry.recursiveSize == 0") )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm0, [rsp+68h+var_38]
        vmovsd  xmm1, [rsp+68h+var_28]
        vmovups xmmword ptr [rbx+8], xmm0
        vmovsd  qword ptr [rbx+18h], xmm1
      }
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
  unsigned int m_nodePoolCount; 
  int v10; 
  __int128 v11; 
  __int64 v12; 

  if ( this->m_nodePoolCount >= 0x2000 )
  {
    v10 = 0x2000;
    m_nodePoolCount = this->m_nodePoolCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_size_tree.cpp", 140, ASSERT_TYPE_ASSERT, "(unsigned)( m_nodePoolCount ) < (unsigned)( ( sizeof( *array_counter( m_nodePool ) ) + 0 ) )", "m_nodePoolCount doesn't index ARRAY_COUNT( m_nodePool )\n\t%i not in [0, %i)", m_nodePoolCount, v10) )
      __debugbreak();
  }
  v4 = this->m_nodePoolCount;
  _RBX = &this->m_nodePool[v4];
  this->m_nodePoolCount = v4 + 1;
  _RBX->m_is_red = 1;
  _RBX->mp_child_nodes[0] = NULL;
  _RBX->mp_child_nodes[1] = NULL;
  v11 = 0ui64;
  __asm { vmovups xmm0, [rsp+68h+var_28] }
  LODWORD(v12) = 0;
  __asm
  {
    vmovsd  xmm1, [rsp+68h+var_18]
    vmovups xmmword ptr [rbx+8], xmm0
    vmovsd  qword ptr [rbx+18h], xmm1
  }
  _RBX->m_key = r_memProfileNode;
  LeanRBTree<LeanRBTreeNodePair<IWMemProfileNode const *,IWMemDumpSizeTree::SizeEntry>>::Insert(&this->m_sizeTree, _RBX);
  return _RBX;
}

