/*
==============
IWMem_ProfileTree_GetNodeIndex
==============
*/

unsigned int __fastcall IWMem_ProfileTree_GetNodeIndex(const IWMemProfileNode *node)
{
  return ?IWMem_ProfileTree_GetNodeIndex@@YAIPEBVIWMemProfileNode@@@Z(node);
}

/*
==============
IWMem_ProfileTree_PruneTree
==============
*/

void IWMem_ProfileTree_PruneTree(void)
{
  ?IWMem_ProfileTree_PruneTree@@YAXXZ();
}

/*
==============
IWMem_ProfileTree_GetCurrentNode
==============
*/

IWMemProfileNode *__fastcall IWMem_ProfileTree_GetCurrentNode()
{
  return ?IWMem_ProfileTree_GetCurrentNode@@YAPEAVIWMemProfileNode@@XZ();
}

/*
==============
IWMem_ProfileTree_CheckedPop
==============
*/

void __fastcall IWMem_ProfileTree_CheckedPop(const char *p_name)
{
  ?IWMem_ProfileTree_CheckedPop@@YAXPEBD@Z(p_name);
}

/*
==============
IWMem_ProfileTree_PruneTreeNode
==============
*/

bool __fastcall IWMem_ProfileTree_PruneTreeNode(IWMemProfileNode *p_node)
{
  return ?IWMem_ProfileTree_PruneTreeNode@@YA_NPEAVIWMemProfileNode@@@Z(p_node);
}

/*
==============
IWMem_ProfileTree_Init
==============
*/

void IWMem_ProfileTree_Init(void)
{
  ?IWMem_ProfileTree_Init@@YAXXZ();
}

/*
==============
IWMem_ProfileTree_Push
==============
*/

void __fastcall IWMem_ProfileTree_Push(const char *p_name)
{
  ?IWMem_ProfileTree_Push@@YAXPEBD@Z(p_name);
}

/*
==============
IWMem_ProfileTree_Pop
==============
*/

void IWMem_ProfileTree_Pop(void)
{
  ?IWMem_ProfileTree_Pop@@YAXXZ();
}

/*
==============
IWMem_ProfileTree_GetNodeByIndex
==============
*/

IWMemProfileNode *__fastcall IWMem_ProfileTree_GetNodeByIndex(unsigned int index)
{
  return ?IWMem_ProfileTree_GetNodeByIndex@@YAPEAVIWMemProfileNode@@I@Z(index);
}

/*
==============
IWMem_ProfileTree_GetRootNode
==============
*/

const IWMemProfileNode *__fastcall IWMem_ProfileTree_GetRootNode()
{
  return ?IWMem_ProfileTree_GetRootNode@@YAPEBVIWMemProfileNode@@XZ();
}

/*
==============
IWMem_ProfileTree_CheckedPop
==============
*/
void IWMem_ProfileTree_CheckedPop(const char *p_name)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 
  IWMemProfileNode *rootNode; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v1 = tls_index;
  v3 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v4 = *(_DWORD *)(v3 + 416);
  if ( v4 )
    rootNode = *(IWMemProfileNode **)(v3 + 8i64 * (unsigned int)(v4 - 1) + 288);
  else
    rootNode = s_iwMemProfileTreeGlob.rootNode;
  if ( !rootNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_tree.cpp", 150, ASSERT_TYPE_ASSERT, "(curNode)", (const char *)&queryFormat, "curNode") )
    __debugbreak();
  if ( p_name != rootNode->mp_name )
  {
    Com_Printf(0, "Memprofile Pushes:\n");
    v6 = 0i64;
    v7 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1);
    if ( *(_DWORD *)(v7 + 416) )
    {
      do
      {
        Com_Printf(0, "%02d: %s\n", (unsigned int)v6, *(const char **)(*(_QWORD *)(v7 + 8 * v6 + 288) + 24i64));
        v6 = (unsigned int)(v6 + 1);
        v7 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1);
      }
      while ( (unsigned int)v6 < *(_DWORD *)(v7 + 416) );
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_tree.cpp", 154, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "IWMem profile push/pop mismatch %s != %s", p_name, rootNode->mp_name) )
      __debugbreak();
  }
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 416i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_tree.cpp", 134, ASSERT_TYPE_ASSERT, "(s_iwMemProfileTreeTLS.nodeStackNextPtr > 0)", (const char *)&queryFormat, "s_iwMemProfileTreeTLS.nodeStackNextPtr > 0") )
    __debugbreak();
  v8 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1);
  v9 = *(_QWORD *)(v8 + 8i64 * (unsigned int)--*(_DWORD *)(v8 + 416) + 288) + 36i64;
  if ( (v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v9) )
    __debugbreak();
  if ( _InterlockedDecrement((volatile signed __int32 *)v9) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_node.h", 116, ASSERT_TYPE_ASSERT, "(m_threadReferences >= 0)", (const char *)&queryFormat, "m_threadReferences >= 0") )
    __debugbreak();
}

/*
==============
IWMem_ProfileTree_GetCurrentNode
==============
*/
IWMemProfileNode *IWMem_ProfileTree_GetCurrentNode()
{
  __int64 v0; 
  int v1; 

  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v1 = *(_DWORD *)(v0 + 416);
  if ( v1 )
    return *(IWMemProfileNode **)(v0 + 8i64 * (unsigned int)(v1 - 1) + 288);
  else
    return s_iwMemProfileTreeGlob.rootNode;
}

/*
==============
IWMem_ProfileTree_GetNodeByIndex
==============
*/
IWMemProfileNode *IWMem_ProfileTree_GetNodeByIndex(unsigned int index)
{
  return &s_iwMemProfileTreeGlob.nodePool.mp_poolBaseAddr[index];
}

/*
==============
IWMem_ProfileTree_GetNodeIndex
==============
*/
signed __int64 IWMem_ProfileTree_GetNodeIndex(const IWMemProfileNode *node)
{
  return node - s_iwMemProfileTreeGlob.nodePool.mp_poolBaseAddr;
}

/*
==============
IWMem_ProfileTree_GetRootNode
==============
*/
IWMemProfileNode *IWMem_ProfileTree_GetRootNode()
{
  return s_iwMemProfileTreeGlob.rootNode;
}

/*
==============
IWMem_ProfileTree_Init
==============
*/
void IWMem_ProfileTree_Init(void)
{
  IWMemProfileNode *mp_poolFreeList; 
  IWMemAllocator *AllocatorByID; 

  InitializeSRWLock(&s_iwMemProfileTreeGlob.lock.m_lock);
  IWMemInternalPool<IWMemProfileNode>::Init(&s_iwMemProfileTreeGlob.nodePool, "IWMem Profile Tree Nodes", 0x400u, 0x400u);
  mp_poolFreeList = (IWMemProfileNode *)s_iwMemProfileTreeGlob.nodePool.mp_poolFreeList;
  s_iwMemProfileTreeGlob.nodePool.mp_poolFreeList = s_iwMemProfileTreeGlob.nodePool.mp_poolFreeList->next;
  AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(s_iwMemProfileTreeGlob.nodePool.m_poolID);
  IWMemAllocator::LogAllocation(AllocatorByID, (const unsigned __int64)mp_poolFreeList, 0x28ui64);
  s_iwMemProfileTreeGlob.rootNode = mp_poolFreeList;
  IWMemProfileNode::Init(mp_poolFreeList, "<used blocks>");
}

/*
==============
IWMem_ProfileTree_Pop
==============
*/
void IWMem_ProfileTree_Pop(void)
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  volatile signed __int32 *v3; 

  v0 = tls_index;
  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 416i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_tree.cpp", 134, ASSERT_TYPE_ASSERT, "(s_iwMemProfileTreeTLS.nodeStackNextPtr > 0)", (const char *)&queryFormat, "s_iwMemProfileTreeTLS.nodeStackNextPtr > 0") )
    __debugbreak();
  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0);
  v2 = v1 + 8i64 * (unsigned int)--*(_DWORD *)(v1 + 416);
  v3 = (volatile signed __int32 *)(*(_QWORD *)(v2 + 288) + 36i64);
  if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)(*(_QWORD *)(v2 + 288) + 36i64)) )
    __debugbreak();
  if ( _InterlockedDecrement(v3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_node.h", 116, ASSERT_TYPE_ASSERT, "(m_threadReferences >= 0)", (const char *)&queryFormat, "m_threadReferences >= 0") )
    __debugbreak();
}

/*
==============
IWMem_ProfileTree_PruneTree
==============
*/
void IWMem_ProfileTree_PruneTree(void)
{
  IWMemAllocator *AllocatorByID; 
  unsigned __int64 v1; 
  IWMemAllocator *v2; 
  unsigned __int64 v3; 

  AcquireSRWLockExclusive(&s_iwMemProfileTreeGlob.lock.m_lock);
  AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(s_iwMemProfileTreeGlob.nodePool.m_poolID);
  v1 = IWMemAllocator::GetUsedSize(AllocatorByID) / 0x28;
  IWMem_ProfileTree_PruneTreeNode(s_iwMemProfileTreeGlob.rootNode);
  v2 = IWMem_AllocatorManager_GetAllocatorByID(s_iwMemProfileTreeGlob.nodePool.m_poolID);
  v3 = IWMemAllocator::GetUsedSize(v2) / 0x28;
  ReleaseSRWLockExclusive(&s_iwMemProfileTreeGlob.lock.m_lock);
  Com_Printf(0, "IWMem_ProfileTree_PruneTree: Pruned %zu items. Went from %zu items down to %zu.\n", v1 - v3, v1, v3);
}

/*
==============
IWMem_ProfileTree_PruneTreeNode
==============
*/
char IWMem_ProfileTree_PruneTreeNode(IWMemProfileNode *p_node)
{
  IntrusiveTreeNode<IWMemProfileNode> *mp_first_child; 
  char v3; 
  IntrusiveTreeNode<IWMemProfileNode> *mp_next_sibling; 
  IntrusiveTreeNode<IWMemProfileNode> *v5; 
  IntrusiveTreeNode<IWMemProfileNode> *v6; 
  IntrusiveTreeNode<IWMemProfileNode> *v7; 
  IWMemAllocator *AllocatorByID; 

  if ( !p_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_tree.cpp", 217, ASSERT_TYPE_ASSERT, "(p_node)", (const char *)&queryFormat, "p_node") )
    __debugbreak();
  mp_first_child = p_node->mp_first_child;
  v3 = 1;
  if ( mp_first_child )
  {
    do
    {
      mp_next_sibling = mp_first_child->mp_next_sibling;
      if ( IWMem_ProfileTree_PruneTreeNode((IWMemProfileNode *)mp_first_child) )
      {
        if ( mp_first_child->mp_first_child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\intrusive_tree.h", 60, ASSERT_TYPE_ASSERT, "(p_node->mp_first_child == 0)", (const char *)&queryFormat, "p_node->mp_first_child == NULL") )
          __debugbreak();
        if ( mp_first_child->mp_parent != p_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\intrusive_tree.h", 61, ASSERT_TYPE_ASSERT, "(p_node->mp_parent == this)", (const char *)&queryFormat, "p_node->mp_parent == this") )
          __debugbreak();
        if ( !p_node->mp_first_child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\intrusive_tree.h", 62, ASSERT_TYPE_ASSERT, "(mp_first_child != 0)", (const char *)&queryFormat, "mp_first_child != NULL") )
          __debugbreak();
        v5 = p_node->mp_first_child;
        v6 = NULL;
        if ( v5 )
        {
          while ( 1 )
          {
            v7 = v5->mp_next_sibling;
            if ( v5 == mp_first_child )
              break;
            v6 = v5;
            v5 = v5->mp_next_sibling;
            if ( !v7 )
              goto LABEL_22;
          }
          if ( v6 )
            v6->mp_next_sibling = v7;
          else
            p_node->mp_first_child = v7;
        }
LABEL_22:
        mp_first_child->mp_parent = NULL;
        mp_first_child->mp_next_sibling = NULL;
        AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(s_iwMemProfileTreeGlob.nodePool.m_poolID);
        IWMemAllocator::LogFree(AllocatorByID, (const unsigned __int64)mp_first_child, 0x28ui64);
        mp_first_child->mp_parent = (IntrusiveTreeNode<IWMemProfileNode> *)s_iwMemProfileTreeGlob.nodePool.mp_poolFreeList;
        s_iwMemProfileTreeGlob.nodePool.mp_poolFreeList = (IWMemInternalPool<IWMemProfileNode>::FreeItem *)mp_first_child;
      }
      else
      {
        v3 = 0;
      }
      mp_first_child = mp_next_sibling;
    }
    while ( mp_next_sibling );
    if ( !v3 )
      return 0;
  }
  if ( p_node->m_numAllocs > 0 || p_node->m_threadReferences > 0 || p_node == s_iwMemProfileTreeGlob.rootNode )
    return 0;
  if ( p_node->mp_first_child )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_tree.cpp", 245, ASSERT_TYPE_ASSERT, "(p_node->GetFirstChild() == 0)", (const char *)&queryFormat, "p_node->GetFirstChild() == NULL") )
      __debugbreak();
  }
  return 1;
}

/*
==============
IWMem_ProfileTree_Push
==============
*/
void IWMem_ProfileTree_Push(const char *p_name)
{
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  IWMemProfileNode *rootNode; 
  IWMemProfileNode *Child; 
  IWMemAllocator *AllocatorByID; 
  IntrusiveTreeNode<IWMemProfileNode> *mp_first_child; 
  IWMemProfileNode **p_mp_next_sibling; 
  __int64 v10; 

  v2 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 416i64);
  if ( v2 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_tree.cpp", 90, ASSERT_TYPE_ASSERT, "(unsigned)( s_iwMemProfileTreeTLS.nodeStackNextPtr ) < (unsigned)( IWMemProfileTreeTLS::MAX_THREAD_STACK_DEPTH )", "s_iwMemProfileTreeTLS.nodeStackNextPtr doesn't index IWMemProfileTreeTLS::MAX_THREAD_STACK_DEPTH\n\t%i not in [0, %i)", v2, 16) )
    __debugbreak();
  v3 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v4 = *(_DWORD *)(v3 + 416);
  if ( v4 )
    rootNode = *(IWMemProfileNode **)(v3 + 8i64 * (unsigned int)(v4 - 1) + 288);
  else
    rootNode = s_iwMemProfileTreeGlob.rootNode;
  AcquireSRWLockExclusive(&s_iwMemProfileTreeGlob.lock.m_lock);
  Child = IWMemProfileNode::FindChild(rootNode, p_name);
  if ( !Child )
  {
    if ( !s_iwMemProfileTreeGlob.nodePool.mp_poolFreeList )
    {
      Com_PrintError(16, "IWMEM: IWMem_ProfileTree exhausted\n");
      IWMem_InternalError();
      goto LABEL_24;
    }
    Child = (IWMemProfileNode *)s_iwMemProfileTreeGlob.nodePool.mp_poolFreeList;
    s_iwMemProfileTreeGlob.nodePool.mp_poolFreeList = s_iwMemProfileTreeGlob.nodePool.mp_poolFreeList->next;
    AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(s_iwMemProfileTreeGlob.nodePool.m_poolID);
    IWMemAllocator::LogAllocation(AllocatorByID, (const unsigned __int64)Child, 0x28ui64);
    IWMemProfileNode::Init(Child, p_name);
    if ( Child->mp_parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\intrusive_tree.h", 33, ASSERT_TYPE_ASSERT, "(p_node->mp_parent == 0)", (const char *)&queryFormat, "p_node->mp_parent == NULL") )
      __debugbreak();
    Child->mp_parent = rootNode;
    mp_first_child = rootNode->mp_first_child;
    if ( mp_first_child )
    {
      do
      {
        p_mp_next_sibling = (IWMemProfileNode **)&mp_first_child->mp_next_sibling;
        mp_first_child = mp_first_child->mp_next_sibling;
      }
      while ( mp_first_child );
      *p_mp_next_sibling = Child;
    }
    else
    {
      rootNode->mp_first_child = Child;
    }
  }
  if ( Child->mp_parent != rootNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_tree.cpp", 114, ASSERT_TYPE_ASSERT, "(p_pushedNode->GetParent() == p_node)", (const char *)&queryFormat, "p_pushedNode->GetParent() == p_node") )
    __debugbreak();
  if ( (((_BYTE)Child + 36) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &Child->m_threadReferences) )
    __debugbreak();
  _InterlockedIncrement(&Child->m_threadReferences);
LABEL_24:
  ReleaseSRWLockExclusive(&s_iwMemProfileTreeGlob.lock.m_lock);
  if ( Child )
  {
    v10 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    *(_QWORD *)(v10 + 8i64 * (unsigned int)(*(_DWORD *)(v10 + 416))++ + 288) = Child;
  }
}

