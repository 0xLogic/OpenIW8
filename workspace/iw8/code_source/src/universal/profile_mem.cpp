/*
==============
ProfMem_EndAllForError
==============
*/

void __fastcall ProfMem_EndAllForError(unsigned __int64 bytesUsed)
{
  ?ProfMem_EndAllForError@@YAX_K@Z(bytesUsed);
}

/*
==============
ProfMem_Begin
==============
*/

void __fastcall ProfMem_Begin(const char *label, unsigned __int64 bytesUsed)
{
  ?ProfMem_Begin@@YAXPEBD_K@Z(label, bytesUsed);
}

/*
==============
ProfMem_End
==============
*/

void __fastcall ProfMem_End(unsigned __int64 bytesUsed)
{
  ?ProfMem_End@@YAX_K@Z(bytesUsed);
}

/*
==============
ProfMem_PrintTree
==============
*/

void __fastcall ProfMem_PrintTree(bool error)
{
  ?ProfMem_PrintTree@@YAX_N@Z(error);
}

/*
==============
ProfMem_Begin
==============
*/
void ProfMem_Begin(const char *label, unsigned __int64 bytesUsed)
{
  profilemem_t *child; 
  const char *name; 
  __int64 v6; 
  const char *v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  unsigned int treeSize; 
  profilemem_t *v12; 
  profilemem_t *currentNode; 
  profilemem_t *v14; 
  profilemem_t *nextSibling; 
  __int64 v16; 

  if ( !savegame_profile || !savegame_profile->current.integer )
    return;
  if ( !s_profmemTreeGlob.currentNode )
  {
    treeSize = 0;
LABEL_23:
    s_profmemTreeGlob.treeSize = treeSize + 1;
    v12 = &s_profmemTreeGlob.nodePool[(unsigned __int64)treeSize];
    v12->child = NULL;
    v12->parent = NULL;
    v12->nextSibling = NULL;
    v12->prevSibling = NULL;
    v12->startSize = 0i64;
    v12->totalSize = 0i64;
    *(_QWORD *)&v12->hits = 0i64;
    v12->name = NULL;
    currentNode = s_profmemTreeGlob.currentNode;
    v12->parent = s_profmemTreeGlob.currentNode;
    if ( currentNode )
    {
      v14 = s_profmemTreeGlob.currentNode;
      v12->nextSibling = s_profmemTreeGlob.currentNode->child;
      v14->child = v12;
      nextSibling = v12->nextSibling;
      if ( nextSibling )
        nextSibling->prevSibling = v12;
    }
    v12->hits = 1;
    v12->name = label;
    v12->startSize = bytesUsed;
    s_profmemTreeGlob.currentNode = v12;
    return;
  }
  child = s_profmemTreeGlob.currentNode->child;
  if ( !s_profmemTreeGlob.currentNode->child )
  {
LABEL_18:
    treeSize = s_profmemTreeGlob.treeSize;
    if ( s_profmemTreeGlob.treeSize >= 0x100 )
    {
      LODWORD(v16) = s_profmemTreeGlob.treeSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 215, ASSERT_TYPE_ASSERT, "(unsigned)( tree->treeSize ) < (unsigned)( ( sizeof( *array_counter( tree->nodePool ) ) + 0 ) )", "tree->treeSize doesn't index ARRAY_COUNT( tree->nodePool )\n\t%i not in [0, %i)", v16, 256) )
        __debugbreak();
      treeSize = s_profmemTreeGlob.treeSize;
    }
    goto LABEL_23;
  }
LABEL_5:
  name = child->name;
  if ( label != name )
  {
    v6 = 0x7FFFFFFFi64;
    if ( !label && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v7 = (const char *)(label - name);
    do
    {
      v8 = name[(_QWORD)v7];
      v9 = v6;
      v10 = *name++;
      --v6;
      if ( !v9 )
        break;
      if ( v8 != v10 )
      {
        child = child->nextSibling;
        if ( child )
          goto LABEL_5;
        goto LABEL_18;
      }
    }
    while ( v8 );
  }
  ++child->hits;
  child->startSize = bytesUsed;
  s_profmemTreeGlob.currentNode = child;
}

/*
==============
ProfMem_End
==============
*/
void ProfMem_End(unsigned __int64 bytesUsed)
{
  profilemem_t *currentNode; 

  if ( savegame_profile && savegame_profile->current.integer )
  {
    currentNode = s_profmemTreeGlob.currentNode;
    if ( s_profmemTreeGlob.currentNode )
    {
      if ( bytesUsed < s_profmemTreeGlob.currentNode->startSize )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 254, ASSERT_TYPE_ASSERT, "(bytesUsed >= tree->currentNode->startSize)", (const char *)&queryFormat, "bytesUsed >= tree->currentNode->startSize") )
          __debugbreak();
        currentNode = s_profmemTreeGlob.currentNode;
      }
      currentNode->totalSize += bytesUsed - currentNode->startSize;
      s_profmemTreeGlob.currentNode = s_profmemTreeGlob.currentNode->parent;
    }
    else
    {
      Com_PrintError(LODWORD(s_profmemTreeGlob.currentNode) + 10, "Profiling tried to end a block, but the profiling tree is unexpectedly empty.  Either there are mismatched BEGIN/END blocks in code, or an error has interrupted normal execution flow.\n");
    }
  }
}

/*
==============
ProfMem_EndAllForError
==============
*/
void ProfMem_EndAllForError(unsigned __int64 bytesUsed)
{
  profilemem_t *currentNode; 

  if ( savegame_profile )
  {
    if ( savegame_profile->current.integer )
    {
      currentNode = s_profmemTreeGlob.currentNode;
      while ( currentNode )
      {
        if ( savegame_profile && savegame_profile->current.integer )
        {
          if ( currentNode )
          {
            if ( bytesUsed < currentNode->startSize )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 254, ASSERT_TYPE_ASSERT, "(bytesUsed >= tree->currentNode->startSize)", (const char *)&queryFormat, "bytesUsed >= tree->currentNode->startSize") )
                __debugbreak();
              currentNode = s_profmemTreeGlob.currentNode;
            }
            currentNode->totalSize += bytesUsed - currentNode->startSize;
            currentNode = s_profmemTreeGlob.currentNode->parent;
            s_profmemTreeGlob.currentNode = currentNode;
          }
          else
          {
            Com_PrintError(10, "Profiling tried to end a block, but the profiling tree is unexpectedly empty.  Either there are mismatched BEGIN/END blocks in code, or an error has interrupted normal execution flow.\n");
            currentNode = s_profmemTreeGlob.currentNode;
          }
        }
      }
    }
  }
}

/*
==============
ProfMem_PrintTree
==============
*/

void __fastcall ProfMem_PrintTree(bool error, double _XMM1_8)
{
  bool v9; 
  profilemem_t *i; 
  signed __int64 totalSize; 
  int v12; 
  profilemem_t *nodePool; 
  const char *v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  profilemem_t *child; 
  __int64 v26; 
  __int64 v28; 
  char *v34; 
  unsigned __int64 v35; 
  const char *v36; 
  unsigned int hits; 
  profilemem_t *v38; 
  profilemem_t *j; 
  profilemem_t *parent; 
  char *fmt; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  void *retaddr; 

  _R11 = &retaddr;
  if ( !savegame_profile || !savegame_profile->current.integer || !s_profmemTreeGlob.treeSize )
    return;
  v9 = s_profmemTreeGlob.currentNode == NULL;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
  }
  if ( !v9 )
  {
    Com_PrintError(10, "Profiling didn't complete as normal!  Either there are orphaned BEGIN/END blocks in code, or an error has interrupted normal execution flow.  These nodes have incomplete information:");
    for ( i = s_profmemTreeGlob.currentNode; i; s_profmemTreeGlob.currentNode = i )
    {
      Com_PrintError(10, "  %s\n", i->name);
      i = s_profmemTreeGlob.currentNode->parent;
    }
    Com_PrintError(10, "\n");
  }
  totalSize = s_profmemTreeGlob.nodePool[0].totalSize;
  v12 = 0;
  Com_Printf(12, "\n%-40.40s %12s %8s %6s %5s %8s\n", "Savegame profiling:", "self(bytes)", "total", "%total", "hits", "self/hit");
  Com_Printf(12, "-----------------------------------------------------------------------------------\n");
  __asm
  {
    vmovss  xmm8, cs:__real@5f800000
    vmovss  xmm9, cs:__real@42c80000
    vmovaps [rsp+0B8h+var_38], xmm6
  }
  nodePool = s_profmemTreeGlob.nodePool;
  __asm { vmovaps [rsp+0B8h+var_48], xmm7 }
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = "total > 0";
      if ( error || !savegame_profile || savegame_profile->current.integer != 2 || v12 <= 2 )
      {
        v17 = v12;
        if ( v12 > 30 )
          v17 = 30;
        if ( v17 > 0 )
        {
          v18 = (unsigned int)v17;
          do
          {
            Com_Printf(12, " ", v16);
            --v18;
          }
          while ( v18 );
        }
        if ( !totalSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 171, ASSERT_TYPE_ASSERT, "(total > 0)", (const char *)&queryFormat, "total > 0") )
          __debugbreak();
        v19 = nodePool->totalSize;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rdi
        }
        if ( v19 < 0 )
          __asm { vaddss  xmm0, xmm0, xmm8 }
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, r12
          vmulss  xmm2, xmm0, xmm9
        }
        if ( totalSize < 0 )
          __asm { vaddss  xmm1, xmm1, xmm8 }
        child = nodePool->child;
        v26 = 0i64;
        __asm { vdivss  xmm7, xmm2, xmm1 }
        if ( nodePool->child )
        {
          do
          {
            v26 += child->totalSize;
            child = child->nextSibling;
          }
          while ( child );
        }
        v28 = v19 - v26;
        if ( !nodePool->hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 174, ASSERT_TYPE_ASSERT, "(iter.node->hits > 0)", (const char *)&queryFormat, "iter.node->hits > 0") )
          __debugbreak();
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rdi
        }
        if ( v28 < 0 )
          __asm { vaddss  xmm1, xmm1, xmm8 }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm6, xmm1, xmm0
        }
        v34 = j_va("%%-%i.%is %%12i %%8u %%5.1f%%%% %%5i %%8.2f\n", (unsigned int)(40 - v17), (unsigned int)(40 - v17));
        v35 = nodePool->totalSize;
        v36 = v34;
        hits = nodePool->hits;
        if ( v35 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v35, "unsigned", nodePool->totalSize) )
          __debugbreak();
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+0B8h+var_80], xmm0
          vcvtss2sd xmm1, xmm7, xmm7
        }
        LODWORD(v47) = hits;
        __asm { vmovsd  [rsp+0B8h+var_90], xmm1 }
        LODWORD(fmt) = v35;
        Com_Printf(12, v36, nodePool->name, v28, fmt, v46, v47, v48);
      }
      if ( !nodePool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 52, ASSERT_TYPE_ASSERT, "(iter->node)", (const char *)&queryFormat, "iter->node") )
        __debugbreak();
      v38 = nodePool->child;
      if ( nodePool->child )
      {
        nodePool = nodePool->child;
        ++v12;
        for ( j = v38->nextSibling; j; j = j->nextSibling )
          nodePool = j;
        goto LABEL_42;
      }
      if ( !nodePool->prevSibling )
        break;
      nodePool = nodePool->prevSibling;
LABEL_42:
      if ( !nodePool )
        goto LABEL_55;
    }
    parent = nodePool->parent;
    if ( !parent )
      break;
    while ( 1 )
    {
      if ( --v12 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 78, ASSERT_TYPE_ASSERT, "(iter->nesting >= 0)", (const char *)&queryFormat, "iter->nesting >= 0") )
        __debugbreak();
      nodePool = parent->prevSibling;
      if ( nodePool )
        break;
      parent = parent->parent;
      if ( !parent )
        goto LABEL_52;
    }
  }
LABEL_52:
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 88, ASSERT_TYPE_ASSERT, "(iter->nesting == 0)", (const char *)&queryFormat, "iter->nesting == 0") )
    __debugbreak();
LABEL_55:
  Com_Printf(12, "-----------------------------------------------------------------------------------\n", v16);
  __asm
  {
    vmovaps xmm9, [rsp+0B8h+var_68]
    vmovaps xmm8, [rsp+0B8h+var_58]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm6, [rsp+0B8h+var_38]
  }
}

