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
void ProfMem_PrintTree(bool error)
{
  profilemem_t *i; 
  signed __int64 totalSize; 
  int v4; 
  profilemem_t *nodePool; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  profilemem_t *child; 
  __int64 v14; 
  float j; 
  __int64 v16; 
  float v17; 
  float v18; 
  float hits; 
  char *v20; 
  unsigned __int64 v21; 
  const char *v22; 
  unsigned int v23; 
  profilemem_t *v24; 
  profilemem_t *k; 
  profilemem_t *parent; 
  char *fmt; 
  __int64 v28; 

  if ( !savegame_profile || !savegame_profile->current.integer || !s_profmemTreeGlob.treeSize )
    return;
  if ( s_profmemTreeGlob.currentNode )
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
  v4 = 0;
  Com_Printf(12, "\n%-40.40s %12s %8s %6s %5s %8s\n", "Savegame profiling:", "self(bytes)", "total", "%total", "hits", "self/hit");
  Com_Printf(12, "-----------------------------------------------------------------------------------\n");
  nodePool = s_profmemTreeGlob.nodePool;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = "total > 0";
      if ( error || !savegame_profile || savegame_profile->current.integer != 2 || v4 <= 2 )
      {
        v7 = v4;
        if ( v4 > 30 )
          v7 = 30;
        if ( v7 > 0 )
        {
          v8 = (unsigned int)v7;
          do
          {
            Com_Printf(12, " ", v6);
            --v8;
          }
          while ( v8 );
        }
        if ( !totalSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 171, ASSERT_TYPE_ASSERT, "(total > 0)", (const char *)&queryFormat, "total > 0") )
          __debugbreak();
        v9 = nodePool->totalSize;
        v10 = (float)v9;
        if ( v9 < 0 )
        {
          v11 = (float)v9;
          v10 = v11 + 1.8446744e19;
        }
        v12 = (float)totalSize;
        if ( totalSize < 0 )
          v12 = v12 + 1.8446744e19;
        child = nodePool->child;
        v14 = 0i64;
        for ( j = (float)(v10 * 100.0) / v12; child; child = child->nextSibling )
          v14 += child->totalSize;
        v16 = v9 - v14;
        if ( !nodePool->hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 174, ASSERT_TYPE_ASSERT, "(iter.node->hits > 0)", (const char *)&queryFormat, "iter.node->hits > 0") )
          __debugbreak();
        v17 = (float)v16;
        if ( v16 < 0 )
        {
          v18 = (float)v16;
          v17 = v18 + 1.8446744e19;
        }
        hits = (float)nodePool->hits;
        v20 = j_va("%%-%i.%is %%12i %%8u %%5.1f%%%% %%5i %%8.2f\n", (unsigned int)(40 - v7), (unsigned int)(40 - v7));
        v21 = nodePool->totalSize;
        v22 = v20;
        v23 = nodePool->hits;
        if ( v21 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v21, "unsigned", nodePool->totalSize) )
          __debugbreak();
        LODWORD(v28) = v23;
        LODWORD(fmt) = v21;
        Com_Printf(12, v22, nodePool->name, v16, fmt, j, v28, (float)(v17 / hits));
      }
      if ( !nodePool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 52, ASSERT_TYPE_ASSERT, "(iter->node)", (const char *)&queryFormat, "iter->node") )
        __debugbreak();
      v24 = nodePool->child;
      if ( nodePool->child )
      {
        nodePool = nodePool->child;
        ++v4;
        for ( k = v24->nextSibling; k; k = k->nextSibling )
          nodePool = k;
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
      if ( --v4 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 78, ASSERT_TYPE_ASSERT, "(iter->nesting >= 0)", (const char *)&queryFormat, "iter->nesting >= 0") )
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
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile_mem.cpp", 88, ASSERT_TYPE_ASSERT, "(iter->nesting == 0)", (const char *)&queryFormat, "iter->nesting == 0") )
    __debugbreak();
LABEL_55:
  Com_Printf(12, "-----------------------------------------------------------------------------------\n", v6);
}

