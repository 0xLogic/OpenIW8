/*
==============
BucketAllocator_InitWithCustomPoolSizes
==============
*/

void __fastcall BucketAllocator_InitWithCustomPoolSizes(BucketAllocator *ba, void *customData, void *(__fastcall *pageAllocator)(unsigned __int64, void *), void (__fastcall *pageFree)(void *, void *), BucketAllocatorThreadParams threadParams, const unsigned __int16 *poolBlockSizes, unsigned int numPools, unsigned int numBytesPerPool)
{
  ?BucketAllocator_InitWithCustomPoolSizes@@YAXPEAUBucketAllocator@@PEAXP6APEAX_K1@ZP6AX11@ZUBucketAllocatorThreadParams@@PEBGII@Z(ba, customData, pageAllocator, pageFree, threadParams, poolBlockSizes, numPools, numBytesPerPool);
}

/*
==============
BucketAllocator_Init
==============
*/

void __fastcall BucketAllocator_Init(BucketAllocator *ba, void *customData, void *(__fastcall *pageAllocator)(unsigned __int64, void *), void (__fastcall *pageFree)(void *, void *), BucketAllocatorThreadParams threadParams)
{
  ?BucketAllocator_Init@@YAXPEAUBucketAllocator@@PEAXP6APEAX_K1@ZP6AX11@ZUBucketAllocatorThreadParams@@@Z(ba, customData, pageAllocator, pageFree, threadParams);
}

/*
==============
BucketAllocator_Alloc
==============
*/

void *__fastcall BucketAllocator_Alloc(unsigned __int64 size, BucketAllocator *ba)
{
  return ?BucketAllocator_Alloc@@YAPEAX_KPEAUBucketAllocator@@@Z(size, ba);
}

/*
==============
BucketAllocatorThreadParams::BucketAllocatorThreadParams
==============
*/

void __fastcall BucketAllocatorThreadParams::BucketAllocatorThreadParams(BucketAllocatorThreadParams *this)
{
  ??0BucketAllocatorThreadParams@@QEAA@XZ(this);
}

/*
==============
BucketAllocator_Free
==============
*/

void __fastcall BucketAllocator_Free(void *memptr, BucketAllocator *ba)
{
  ?BucketAllocator_Free@@YAXPEAXPEAUBucketAllocator@@@Z(memptr, ba);
}

/*
==============
BucketAllocator_Shutdown
==============
*/

void __fastcall BucketAllocator_Shutdown(BucketAllocator *ba, bool bWarnOnLeaks)
{
  ?BucketAllocator_Shutdown@@YAXPEAUBucketAllocator@@_N@Z(ba, bWarnOnLeaks);
}

/*
==============
BucketAllocator_GetStats
==============
*/

void __fastcall BucketAllocator_GetStats(const BucketAllocator *ba, BucketAllocatorStats *outStats)
{
  ?BucketAllocator_GetStats@@YAXPEBUBucketAllocator@@PEAUBucketAllocatorStats@@@Z(ba, outStats);
}

/*
==============
BucketAllocatorThreadParams::BucketAllocatorThreadParams
==============
*/
void BucketAllocatorThreadParams::BucketAllocatorThreadParams(BucketAllocatorThreadParams *this)
{
  this->threadSafe = 0;
  this->criticalSection = -1;
}

/*
==============
BucketAllocator_Alloc
==============
*/
SystemTable *BucketAllocator_Alloc(unsigned __int64 size, BucketAllocator *ba)
{
  signed int numPools; 
  signed int v5; 
  unsigned int v6; 
  unsigned __int64 blockSize; 
  unsigned int v8; 
  PoolTable *v9; 
  PoolInfo *firstPool; 
  PoolInfoHeader *poolInfoTable; 
  char *v12; 
  char *v13; 
  PoolInfoHeader *v14; 
  unsigned __int16 freeInfo; 
  PoolInfoHeader *v16; 
  __int64 infoTop; 
  unsigned __int16 freeMem; 
  unsigned __int16 maxBlocks; 
  char *poolData; 
  SystemTable *v21; 
  int memTop; 
  SystemTable *v23; 

  if ( !ba && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 186, ASSERT_TYPE_ASSERT, "(ba)", (const char *)&queryFormat, "ba") )
    __debugbreak();
  if ( size < 0x8000 )
  {
    if ( !ba && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 34, ASSERT_TYPE_ASSERT, "(ba)", (const char *)&queryFormat, "ba") )
      __debugbreak();
    numPools = ba->numPools;
    v5 = 0;
    v6 = 0;
    while ( v5 <= numPools )
    {
      v6 = (numPools + v5) >> 1;
      blockSize = ba->poolTable[v6].blockSize;
      if ( size <= blockSize )
      {
        if ( size >= blockSize )
          goto LABEL_19;
        numPools = v6 - 1;
      }
      else
      {
        v5 = v6 + 1;
      }
    }
    v8 = v6 + 1;
    if ( ba->poolTable[v6].blockSize >= size )
      v8 = v6;
    v6 = v8;
    if ( ba->poolTable[v8].blockSize < size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 53, ASSERT_TYPE_ASSERT, "(ba->poolTable[mid].blockSize >= size)", (const char *)&queryFormat, "ba->poolTable[mid].blockSize >= size") )
      __debugbreak();
LABEL_19:
    v9 = &ba->poolTable[v6];
    Lock(ba);
    firstPool = v9->firstPool;
    if ( v9->firstPool )
      goto LABEL_35;
    poolInfoTable = ba->poolInfoTable;
    if ( !poolInfoTable || poolInfoTable->numUsedInfos == 64 )
    {
      v12 = (char *)ba->SystemPageAllocator(5136i64, ba->customData);
      if ( !v12 )
        goto LABEL_47;
      *(_DWORD *)(v12 + 10) = 64;
      *((_WORD *)v12 + 4) = 0;
      *(_QWORD *)v12 = ba->poolInfoTable;
      ba->poolInfoTable = (PoolInfoHeader *)v12;
    }
    v13 = (char *)ba->SystemPageAllocator(ba->numBytesPerPool, ba->customData);
    if ( v13 )
    {
      v14 = ba->poolInfoTable;
      freeInfo = v14->freeInfo;
      v16 = v14 + 1;
      if ( freeInfo == 64 )
      {
        if ( v14->infoTop >= 0x40u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 238, ASSERT_TYPE_ASSERT, "(poolHeader->infoTop < 64)", (const char *)&queryFormat, "poolHeader->infoTop < BUCKETALLOCATOR_POOLINFO_PAGESIZE") )
          __debugbreak();
        infoTop = v14->infoTop;
        firstPool = (PoolInfo *)&v16[5 * infoTop];
        v14->infoTop = infoTop + 1;
      }
      else
      {
        if ( freeInfo >= 0x40u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 232, ASSERT_TYPE_ASSERT, "(poolHeader->freeInfo < 64)", (const char *)&queryFormat, "poolHeader->freeInfo < BUCKETALLOCATOR_POOLINFO_PAGESIZE") )
          __debugbreak();
        firstPool = (PoolInfo *)&v16[5 * v14->freeInfo];
        v14->freeInfo = firstPool->freeMem;
      }
      ++v14->numUsedInfos;
      firstPool->poolData = v13;
      firstPool->header = v14;
      firstPool->rbnode.key = v13;
      firstPool->rbnode.data = firstPool;
      firstPool->freeMem = v9->maxBlocks;
      firstPool->blocksUsed = 0;
      firstPool->memTop = 0;
      firstPool->poolTableIndex = v6;
      v9->firstPool = firstPool;
      firstPool->next = NULL;
      RedBlackTree_InsertNode<void *,void *>(&ba->allocatedPageMap, &firstPool->rbnode);
LABEL_35:
      freeMem = firstPool->freeMem;
      maxBlocks = v9->maxBlocks;
      poolData = firstPool->poolData;
      if ( freeMem == maxBlocks )
      {
        if ( firstPool->memTop == maxBlocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 270, ASSERT_TYPE_ASSERT, "(pool->memTop != table->maxBlocks)", (const char *)&queryFormat, "pool->memTop != table->maxBlocks") )
          __debugbreak();
        memTop = firstPool->memTop;
        v21 = (SystemTable *)&poolData[memTop * v9->blockSize];
        firstPool->memTop = memTop + 1;
      }
      else
      {
        if ( freeMem >= maxBlocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 264, ASSERT_TYPE_ASSERT, "(pool->freeMem < table->maxBlocks)", (const char *)&queryFormat, "pool->freeMem < table->maxBlocks") )
          __debugbreak();
        v21 = (SystemTable *)&poolData[v9->blockSize * firstPool->freeMem];
        firstPool->freeMem = (unsigned __int16)v21->next;
      }
      if ( ++firstPool->blocksUsed == v9->maxBlocks )
      {
        v9->firstPool = firstPool->next;
        firstPool->next = v9->exhaustedPool;
        v9->exhaustedPool = firstPool;
      }
      goto LABEL_49;
    }
LABEL_47:
    UnLock(ba);
    return 0i64;
  }
  Lock(ba);
  v23 = (SystemTable *)ba->SystemPageAllocator(size + 16, ba->customData);
  if ( !v23 )
    goto LABEL_47;
  v23->next = ba->systemTable;
  ba->systemTable = v23;
  v21 = v23 + 1;
LABEL_49:
  UnLock(ba);
  return v21;
}

/*
==============
BucketAllocator_Free
==============
*/
void BucketAllocator_Free(void *memptr, BucketAllocator *ba)
{
  RedBlackTreeNode<void *,void *> *root; 
  unsigned __int64 key; 
  SystemTable *systemTable; 
  SystemTable *v7; 
  SystemTable *v8; 
  PoolInfo *data; 
  PoolInfoHeader *header; 
  PoolTable *v11; 
  unsigned __int64 v12; 
  unsigned __int16 *p_freeMem; 
  bool v14; 
  PoolInfo *firstPool; 
  PoolInfoHeader *v16; 
  PoolInfo *v17; 
  PoolInfo *v18; 
  unsigned __int64 v19; 
  PoolInfoHeader *poolInfoTable; 
  PoolInfoHeader *v21; 
  PoolInfo *exhaustedPool; 
  PoolInfo *v23; 
  PoolInfo *v24; 
  SystemTable *next; 

  if ( !ba && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 321, ASSERT_TYPE_ASSERT, "(ba)", (const char *)&queryFormat, "ba") )
    __debugbreak();
  if ( !memptr )
    return;
  Lock(ba);
  root = ba->allocatedPageMap.root;
  if ( !root )
  {
LABEL_11:
    systemTable = ba->systemTable;
    v7 = (SystemTable *)((char *)memptr - 16);
    v8 = NULL;
    if ( systemTable )
    {
      while ( systemTable != v7 )
      {
        v8 = systemTable;
        systemTable = systemTable->next;
        if ( !systemTable )
          goto LABEL_14;
      }
      next = systemTable->next;
      if ( v8 )
        v8->next = next;
      else
        ba->systemTable = next;
      ba->SystemPageFree(v7, ba->customData);
    }
    else
    {
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 409, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
        __debugbreak();
    }
    goto LABEL_16;
  }
  while ( 1 )
  {
    key = (unsigned __int64)root->key;
    if ( (unsigned __int64)memptr < key )
    {
      root = root->left;
      goto LABEL_10;
    }
    if ( (unsigned __int64)memptr < key + ba->numBytesPerPool )
      break;
    root = root->right;
LABEL_10:
    if ( !root )
      goto LABEL_11;
  }
  data = (PoolInfo *)root->data;
  header = data->header;
  v11 = &ba->poolTable[data->poolTableIndex];
  v12 = (signed __int64)((__int64)memptr - (unsigned __int64)data->poolData) / v11->blockSize;
  if ( v12 >= v11->maxBlocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 334, ASSERT_TYPE_ASSERT, "(block < table->maxBlocks)", (const char *)&queryFormat, "block < table->maxBlocks") )
    __debugbreak();
  p_freeMem = &data->freeMem;
  *(_WORD *)memptr = data->freeMem;
  v14 = data->blocksUsed-- == 1;
  data->freeMem = v12;
  if ( v14 )
  {
    firstPool = v11->firstPool;
    v16 = NULL;
    v17 = NULL;
    if ( !v11->firstPool )
      goto LABEL_27;
    while ( firstPool != data )
    {
      v17 = firstPool;
      firstPool = firstPool->next;
      if ( !firstPool )
        goto LABEL_27;
    }
    if ( !firstPool )
    {
LABEL_27:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 347, ASSERT_TYPE_ASSERT, "(curPool)", (const char *)&queryFormat, "curPool") )
        __debugbreak();
    }
    v18 = firstPool->next;
    if ( v17 )
      v17->next = v18;
    else
      v11->firstPool = v18;
    RedBlackTree_DeleteNode<void *,void *>(&ba->allocatedPageMap, &data->rbnode);
    ba->SystemPageFree(data->poolData, ba->customData);
    v19 = (char *)data - (char *)header - 16;
    if ( v19 >= 0x1400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 357, ASSERT_TYPE_ASSERT, "(block < 64)", (const char *)&queryFormat, "block < BUCKETALLOCATOR_POOLINFO_PAGESIZE") )
      __debugbreak();
    *p_freeMem = header->freeInfo;
    v14 = header->numUsedInfos-- == 1;
    header->freeInfo = v19 / 0x50;
    if ( v14 )
    {
      poolInfoTable = ba->poolInfoTable;
      if ( poolInfoTable )
      {
        while ( poolInfoTable != header )
        {
          v16 = poolInfoTable;
          poolInfoTable = poolInfoTable->next;
          if ( !poolInfoTable )
            goto LABEL_41;
        }
      }
      else
      {
LABEL_41:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 371, ASSERT_TYPE_ASSERT, "(curHeader)", (const char *)&queryFormat, "curHeader") )
          __debugbreak();
      }
      v21 = header->next;
      if ( v16 )
        v16->next = v21;
      else
        ba->poolInfoTable = v21;
      ba->SystemPageFree(header, ba->customData);
    }
  }
  else if ( data->blocksUsed == v11->maxBlocks - 1 )
  {
    exhaustedPool = v11->exhaustedPool;
    v23 = NULL;
    if ( exhaustedPool )
    {
      while ( exhaustedPool != data )
      {
        v23 = exhaustedPool;
        exhaustedPool = exhaustedPool->next;
        if ( !exhaustedPool )
          goto LABEL_53;
      }
    }
    else
    {
LABEL_53:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 389, ASSERT_TYPE_ASSERT, "(curPool)", (const char *)&queryFormat, "curPool") )
        __debugbreak();
    }
    v24 = exhaustedPool->next;
    if ( v23 )
      v23->next = v24;
    else
      v11->exhaustedPool = v24;
    exhaustedPool->next = v11->firstPool;
    v11->firstPool = exhaustedPool;
  }
LABEL_16:
  UnLock(ba);
}

/*
==============
BucketAllocator_GetStats
==============
*/
void BucketAllocator_GetStats(const BucketAllocator *ba, BucketAllocatorStats *outStats)
{
  unsigned int v4; 
  unsigned int numSubPools; 
  __int64 v6; 
  int maxBlocks; 
  PoolInfo *firstPool; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  PoolInfo *exhaustedPool; 

  outStats->numPools = ba->numPools;
  outStats->subPoolSizeInBytes = ba->numBytesPerPool;
  v4 = 0;
  for ( outStats->numSubPools = 0; v4 < ba->numPools; outStats->numSubPools += numSubPools )
  {
    numSubPools = 0;
    v6 = v4;
    outStats->poolStats[v6].blockSize = ba->poolTable[v6].blockSize;
    maxBlocks = ba->poolTable[v6].maxBlocks;
    *(_QWORD *)&outStats->poolStats[v6].numAllocatedBlocks = 0i64;
    outStats->poolStats[v6].numUsedBlocks = 0;
    outStats->poolStats[v6].numSubPools = 0;
    firstPool = ba->poolTable[v6].firstPool;
    if ( firstPool )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      do
      {
        ++numSubPools;
        v9 += maxBlocks;
        outStats->poolStats[v6].numSubPools = numSubPools;
        outStats->poolStats[v6].numAllocatedBlocks = v9;
        v11 += firstPool->blocksUsed;
        outStats->poolStats[v6].numUsedBlocks = v11;
        v10 += maxBlocks - firstPool->blocksUsed;
        outStats->poolStats[v6].numFreeBlocks = v10;
        firstPool = firstPool->next;
      }
      while ( firstPool );
    }
    exhaustedPool = ba->poolTable[v6].exhaustedPool;
    if ( exhaustedPool )
    {
      do
      {
        ++outStats->poolStats[v6].numSubPools;
        outStats->poolStats[v6].numAllocatedBlocks += maxBlocks;
        outStats->poolStats[v6].numUsedBlocks += exhaustedPool->blocksUsed;
        if ( exhaustedPool->blocksUsed != maxBlocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 456, ASSERT_TYPE_ASSERT, "(exhaustedPool->blocksUsed == maxBlocks)", (const char *)&queryFormat, "exhaustedPool->blocksUsed == maxBlocks") )
          __debugbreak();
        exhaustedPool = exhaustedPool->next;
      }
      while ( exhaustedPool );
      numSubPools = outStats->poolStats[v6].numSubPools;
    }
    ++v4;
    outStats->poolStats[v6].memoryUsed = numSubPools * ba->numBytesPerPool;
  }
}

/*
==============
BucketAllocator_Init
==============
*/
void BucketAllocator_Init(BucketAllocator *ba, void *customData, void *(*pageAllocator)(unsigned __int64, void *), void (*pageFree)(void *, void *), BucketAllocatorThreadParams threadParams)
{
  unsigned int v7; 
  unsigned __int16 *v8; 
  unsigned int v9; 
  unsigned __int16 poolBlockSizes[56]; 

  if ( !ba && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 132, ASSERT_TYPE_ASSERT, "(ba)", (const char *)&queryFormat, "ba") )
    __debugbreak();
  if ( !pageAllocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 133, ASSERT_TYPE_ASSERT, "(pageAllocator)", (const char *)&queryFormat, "pageAllocator") )
    __debugbreak();
  v7 = 0;
  v8 = poolBlockSizes;
  do
  {
    v9 = ((v7 & 3) + 4) << ((v7 >> 2) + 1);
    if ( v9 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v9, "unsigned", v9) )
      __debugbreak();
    *v8 = v9;
    ++v7;
    ++v8;
  }
  while ( v7 < 0x31 );
  BucketAllocator_InitWithCustomPoolSizes(ba, customData, pageAllocator, pageFree, threadParams, poolBlockSizes, 0x31u, 0x10000u);
}

/*
==============
BucketAllocator_InitWithCustomPoolSizes
==============
*/
void BucketAllocator_InitWithCustomPoolSizes(BucketAllocator *ba, void *customData, void *(*pageAllocator)(unsigned __int64, void *), void (*pageFree)(void *, void *), BucketAllocatorThreadParams threadParams, const unsigned __int16 *poolBlockSizes, unsigned int numPools, unsigned int numBytesPerPool)
{
  BucketAllocator *v11; 
  unsigned int v12; 
  unsigned __int16 *p_blockSize; 
  const unsigned __int16 *v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned __int16 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  v11 = ba;
  if ( !ba && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 89, ASSERT_TYPE_ASSERT, "(ba)", (const char *)&queryFormat, "ba") )
    __debugbreak();
  if ( !pageAllocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 90, ASSERT_TYPE_ASSERT, "(pageAllocator)", (const char *)&queryFormat, "pageAllocator") )
    __debugbreak();
  if ( numPools > 0x31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 91, ASSERT_TYPE_ASSERT, "(numPools <= 49)", (const char *)&queryFormat, "numPools <= BUCKETALLOCATOR_MAX_POOLS") )
    __debugbreak();
  v11->SystemPageAllocator = pageAllocator;
  v11->SystemPageFree = pageFree;
  v11->systemTable = NULL;
  v11->poolInfoTable = NULL;
  v11->threadParams = threadParams;
  v11->customData = customData;
  v11->numPools = numPools;
  v11->numBytesPerPool = numBytesPerPool;
  if ( threadParams.threadSafe && threadParams.criticalSection > (unsigned int)CRITSECT_DEBUG_HIDDEN_BONES )
  {
    LODWORD(v18) = threadParams.criticalSection;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 106, ASSERT_TYPE_ASSERT, "( 0 ) <= ( ba->threadParams.criticalSection ) && ( ba->threadParams.criticalSection ) <= ( CRITSECT_COUNT - 1 )", "ba->threadParams.criticalSection not in [0, CRITSECT_COUNT - 1]\n\t%i not in [%i, %i]", v18, 0i64, 115) )
      __debugbreak();
  }
  v12 = 0;
  if ( numPools )
  {
    p_blockSize = &v11->poolTable[0].blockSize;
    v14 = poolBlockSizes;
    do
    {
      if ( v12 )
      {
        if ( *v14 <= poolBlockSizes[v12 - 1] )
        {
          LODWORD(v20) = *v14;
          LODWORD(v19) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 114, ASSERT_TYPE_ASSERT, "((pool == 0) || ((poolBlockSizes[pool] > poolBlockSizes[pool - 1])))", "%s\n\tpool block size must be in ascending order (pool %d, block size %d)", "(pool == 0) || ((poolBlockSizes[pool] > poolBlockSizes[pool - 1]))", v19, v20) )
            __debugbreak();
        }
      }
      if ( *v14 > numBytesPerPool )
      {
        LODWORD(v21) = numBytesPerPool;
        LODWORD(v20) = *v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 115, ASSERT_TYPE_ASSERT, "( poolBlockSizes[pool] ) <= ( numBytesPerPool )", "%s <= %s\n\t%i, %i", "poolBlockSizes[pool]", "numBytesPerPool", v20, v21) )
          __debugbreak();
      }
      *((_QWORD *)p_blockSize - 2) = 0i64;
      *((_QWORD *)p_blockSize - 1) = 0i64;
      v15 = *v14;
      *p_blockSize = v15;
      v16 = numBytesPerPool / v15;
      v17 = v16;
      if ( v16 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v16, "unsigned", v16) )
        __debugbreak();
      p_blockSize[1] = v17;
      p_blockSize += 12;
      ++v12;
      ++v14;
    }
    while ( v12 < numPools );
    v11 = ba;
  }
  if ( v11 == (BucketAllocator *)-1208i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\redblacktree.h", (_DWORD)v11 + 1333, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  v11->allocatedPageMap.AllocNodeCallback = NULL;
  v11->allocatedPageMap.customData = NULL;
  v11->allocatedPageMap.root = NULL;
}

/*
==============
BucketAllocator_Shutdown
==============
*/
void BucketAllocator_Shutdown(BucketAllocator *ba, bool bWarnOnLeaks)
{
  __int64 i; 

  if ( !ba && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 148, ASSERT_TYPE_ASSERT, "(ba)", (const char *)&queryFormat, "ba") )
    __debugbreak();
  if ( bWarnOnLeaks )
  {
    if ( ba->systemTable )
      Com_PrintWarning(16, "Large allocation table in BucketAllocator leaking on shutdown\n");
    if ( ba->poolInfoTable )
      Com_PrintWarning(16, "Small allocation info table in BucketAllocator leaking on shutdown\n");
    if ( ba->allocatedPageMap.root )
      Com_PrintWarning(16, "Red-black tree memory map in BucketAllocator leaking on shutdown\n");
    for ( i = 0i64; (unsigned int)i < ba->numPools; i = (unsigned int)(i + 1) )
    {
      if ( ba->poolTable[i].exhaustedPool || ba->poolTable[i].firstPool )
        Com_PrintWarning(16, "Leak in small pool of size %d bytes in BucketAllocator on shutdown\n", ba->poolTable[i].blockSize);
    }
  }
}

/*
==============
UnLock
==============
*/
void UnLock(BucketAllocator *ba)
{
  if ( !ba && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 74, ASSERT_TYPE_ASSERT, "(ba)", (const char *)&queryFormat, "ba") )
    __debugbreak();
  if ( ba->threadParams.threadSafe )
    Sys_LeaveCriticalSection(ba->threadParams.criticalSection);
}

