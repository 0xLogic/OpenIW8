/*
==============
XAnimGetTreeCurrentMemUsage
==============
*/

int __fastcall XAnimGetTreeCurrentMemUsage(int *outAnimInfoUsage, int *outCustomNodeUsage)
{
  return ?XAnimGetTreeCurrentMemUsage@@YAHPEAH0@Z(outAnimInfoUsage, outCustomNodeUsage);
}

/*
==============
XAnimShutdownMemory
==============
*/

void XAnimShutdownMemory(void)
{
  ?XAnimShutdownMemory@@YAXXZ();
}

/*
==============
XAnimGetNumAllocatedAnimNodes
==============
*/

int __fastcall XAnimGetNumAllocatedAnimNodes(int *outNumAnimInfos, int *outNumCustomNodes)
{
  return ?XAnimGetNumAllocatedAnimNodes@@YAHPEAH0@Z(outNumAnimInfos, outNumCustomNodes);
}

/*
==============
XAnimInitMemory
==============
*/

void __fastcall XAnimInitMemory(unsigned __int8 *memory, int sizeInBytes)
{
  ?XAnimInitMemory@@YAXPEAEH@Z(memory, sizeInBytes);
}

/*
==============
XAnimAllocInfoMemory
==============
*/

bool __fastcall XAnimAllocInfoMemory(unsigned __int64 size, unsigned __int16 *outInfoID)
{
  return ?XAnimAllocInfoMemory@@YA_N_KPEAG@Z(size, outInfoID);
}

/*
==============
XAnimFreeInfoMemory
==============
*/

void __fastcall XAnimFreeInfoMemory(unsigned __int16 infoIndex)
{
  ?XAnimFreeInfoMemory@@YAXG@Z(infoIndex);
}

/*
==============
XAnimBucketAllocator_GetTreeCurrentMemUsage
==============
*/

int __fastcall XAnimBucketAllocator_GetTreeCurrentMemUsage(const XAnimBucketAllocator *allocator)
{
  return ?XAnimBucketAllocator_GetTreeCurrentMemUsage@@YAHPEBUXAnimBucketAllocator@@@Z(allocator);
}

/*
==============
XAnimGetNodeMemoryAllocationSize
==============
*/

int __fastcall XAnimGetNodeMemoryAllocationSize(int maxNodes)
{
  return ?XAnimGetNodeMemoryAllocationSize@@YAHH@Z(maxNodes);
}

/*
==============
XAnimBucketAllocator_GetTreeMaxMemUsage
==============
*/

int __fastcall XAnimBucketAllocator_GetTreeMaxMemUsage(const XAnimBucketAllocator *allocator)
{
  return ?XAnimBucketAllocator_GetTreeMaxMemUsage@@YAHPEBUXAnimBucketAllocator@@@Z(allocator);
}

/*
==============
XAnimAllocateAndInitMemory
==============
*/

void __fastcall XAnimAllocateAndInitMemory(HunkUser *hunkUser, int sizeInBytes)
{
  ?XAnimAllocateAndInitMemory@@YAXPEAUHunkUser@@H@Z(hunkUser, sizeInBytes);
}

/*
==============
XAnimInfoPoolAllocator_DebugDrawAllocations
==============
*/

void __fastcall XAnimInfoPoolAllocator_DebugDrawAllocations(int x, int y, void (__fastcall *drawBox)(int, int, int, int, const unsigned __int8 *))
{
  ?XAnimInfoPoolAllocator_DebugDrawAllocations@@YAXHHP6AXHHHHQEBE@Z@Z(x, y, drawBox);
}

/*
==============
XAnimGetTreeMaxMemUsage
==============
*/

int __fastcall XAnimGetTreeMaxMemUsage(int *outAnimInfoMaxUsage, int *outCustomNodeMaxUsage)
{
  return ?XAnimGetTreeMaxMemUsage@@YAHPEAH0@Z(outAnimInfoMaxUsage, outCustomNodeMaxUsage);
}

/*
==============
XAnimAllocInfoMemory
==============
*/
bool XAnimAllocInfoMemory(unsigned __int64 size, unsigned __int16 *outInfoID)
{
  if ( !outInfoID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 545, ASSERT_TYPE_ASSERT, "(outInfoID != 0)", (const char *)&queryFormat, "outInfoID != NULL") )
    __debugbreak();
  return XAnimNodeAllocator_Alloc(&s_xanimNodeAllocator, size, outInfoID);
}

/*
==============
XAnimAllocateAndInitMemory
==============
*/
void XAnimAllocateAndInitMemory(HunkUser *hunkUser, int sizeInBytes)
{
  unsigned __int64 v2; 
  void *v4; 

  v2 = sizeInBytes;
  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 516, ASSERT_TYPE_ASSERT, "(hunkUser != 0)", (const char *)&queryFormat, "hunkUser != NULL") )
    __debugbreak();
  v4 = Mem_HunkUser_AllocInternal(hunkUser, v2, 0x20ui64, "XAnimAllocateAndInitMemory");
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 525, ASSERT_TYPE_ASSERT, "(memory != 0)", (const char *)&queryFormat, "memory != NULL") )
    __debugbreak();
  XAnimNodeAllocator_Init(&s_xanimNodeAllocator, v4, v2);
  g_xanimMemoryGlobals.bucketAllocatorMaxOffset = s_xanimNodeAllocator.bucketAllocator.memoryPool.poolSize;
  g_xanimMemoryGlobals.bucketAllocatorBasePointer = (unsigned __int8 *)s_xanimNodeAllocator.bucketAllocator.memoryPool.pool;
  g_xanimMemoryGlobals.infoPool = s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPool;
  g_xanimMemoryGlobals.infoPoolSize = s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPoolCount;
}

/*
==============
XAnimBucketAllocator_AllocateBlock
==============
*/
void *XAnimBucketAllocator_AllocateBlock(unsigned __int64 size, void *customData)
{
  if ( !customData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 56, ASSERT_TYPE_ASSERT, "(customData != 0)", (const char *)&queryFormat, "customData != NULL") )
    __debugbreak();
  return BlockMemMan_Allocate(size, (BlockMemoryPool *)customData);
}

/*
==============
XAnimBucketAllocator_FreeBlock
==============
*/
void XAnimBucketAllocator_FreeBlock(void *memory, void *customData)
{
  if ( !customData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 66, ASSERT_TYPE_ASSERT, "(customData != 0)", (const char *)&queryFormat, "customData != NULL") )
    __debugbreak();
  if ( !memory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 67, ASSERT_TYPE_ASSERT, "(memory != 0)", (const char *)&queryFormat, "memory != NULL") )
    __debugbreak();
  BlockMemMan_Free(memory, (BlockMemoryPool *)customData);
}

/*
==============
XAnimBucketAllocator_GetTreeCurrentMemUsage
==============
*/
__int64 XAnimBucketAllocator_GetTreeCurrentMemUsage(const XAnimBucketAllocator *allocator)
{
  if ( !allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 168, ASSERT_TYPE_ASSERT, "(allocator != 0)", (const char *)&queryFormat, "allocator != NULL") )
    __debugbreak();
  return allocator->memoryPool.poolSize - BlockMemMan_GetFreeRemaining(&allocator->memoryPool);
}

/*
==============
XAnimBucketAllocator_GetTreeMaxMemUsage
==============
*/
__int64 XAnimBucketAllocator_GetTreeMaxMemUsage(const XAnimBucketAllocator *allocator)
{
  if ( allocator )
    return allocator->memoryPool.poolSize;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 161, ASSERT_TYPE_ASSERT, "(allocator != 0)", (const char *)&queryFormat, "allocator != NULL") )
    __debugbreak();
  return MEMORY[0];
}

/*
==============
XAnimBucketAllocator_Init
==============
*/
void XAnimBucketAllocator_Init(XAnimBucketAllocator *allocator, unsigned __int8 *start, unsigned __int64 size)
{
  BucketAllocatorThreadParams threadParams; 
  unsigned __int16 poolBlockSizes[2]; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 

  if ( (size & 0xFFFFFFFFFFFFFFE0ui64) > 0x100000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 90, ASSERT_TYPE_ASSERT, "((size / 32) <= 32768)", (const char *)&queryFormat, "(size / XANIM_ALLOC_ALIGNMENT) <= 32768") )
    __debugbreak();
  if ( !allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 91, ASSERT_TYPE_ASSERT, "(allocator != 0)", (const char *)&queryFormat, "allocator != NULL") )
    __debugbreak();
  if ( !start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 92, ASSERT_TYPE_ASSERT, "(start != 0)", (const char *)&queryFormat, "start != NULL") )
    __debugbreak();
  allocator->memoryPool.pool = start;
  if ( size > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)size, "unsigned", size) )
    __debugbreak();
  allocator->memoryPool.poolSize = size;
  allocator->memoryPool.alignment = 32;
  BlockMemMan_Init(&allocator->memoryPool);
  *(_DWORD *)poolBlockSizes = 8388704;
  v8 = 16777408;
  v9 = 25166144;
  v10 = 33554880;
  v11 = 134218752;
  v12 = 536875008;
  BucketAllocatorThreadParams::BucketAllocatorThreadParams(&threadParams);
  threadParams.threadSafe = 0;
  BucketAllocator_InitWithCustomPoolSizes(&allocator->bucketAllocator, allocator, XAnimBucketAllocator_AllocateBlock, XAnimBucketAllocator_FreeBlock, threadParams, poolBlockSizes, 0xCu, 0x2000u);
  allocator->numAllocatedNodes = 0;
}

/*
==============
XAnimFreeInfoMemory
==============
*/
void XAnimFreeInfoMemory(unsigned __int16 infoIndex)
{
  bool v2; 
  XAnimInfo *animInfoPool; 

  if ( !infoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 552, ASSERT_TYPE_ASSERT, "(infoIndex != 0)", (const char *)&queryFormat, "infoIndex != 0") )
    __debugbreak();
  if ( !s_xanimNodeAllocator.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 455, ASSERT_TYPE_ASSERT, "(allocator->initialized)", (const char *)&queryFormat, "allocator->initialized") )
    __debugbreak();
  v2 = (infoIndex & 0x8000u) != 0;
  if ( !infoIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 456, ASSERT_TYPE_ASSERT, "(infoIndex)", (const char *)&queryFormat, "infoIndex") )
      __debugbreak();
    v2 = 0;
  }
  if ( v2 )
  {
    BucketAllocator_Free((char *)s_xanimNodeAllocator.bucketAllocator.memoryPool.pool + 32 * (infoIndex & 0x7FFF), &s_xanimNodeAllocator.bucketAllocator.bucketAllocator);
    --s_xanimNodeAllocator.bucketAllocator.numAllocatedNodes;
  }
  else
  {
    if ( s_xanimNodeAllocator.animInfoPoolAllocator.numAllocatedNodes <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 247, ASSERT_TYPE_ASSERT, "(allocator->numAllocatedNodes > 0)", (const char *)&queryFormat, "allocator->numAllocatedNodes > 0") )
      __debugbreak();
    animInfoPool = s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPool;
    s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPool[infoIndex].next = s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPool->next;
    animInfoPool[animInfoPool->next].prev = infoIndex;
    animInfoPool->next = infoIndex;
    --s_xanimNodeAllocator.animInfoPoolAllocator.numAllocatedNodes;
  }
}

/*
==============
XAnimGetNodeMemoryAllocationSize
==============
*/
__int64 XAnimGetNodeMemoryAllocationSize(int maxNodes)
{
  __int64 result; 
  int v2; 
  int v3; 

  if ( maxNodes > 43689 )
  {
    v3 = 43689;
    v2 = maxNodes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 499, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XAnimGetMemoryAllocationSize: too many nodes (requested %d, max %d)", v2, v3) )
      __debugbreak();
    maxNodes = 43689;
  }
  result = (unsigned int)(96 * maxNodes);
  if ( (int)result < 0x2000 )
    return 24576i64;
  return result;
}

/*
==============
XAnimGetNumAllocatedAnimNodes
==============
*/
__int64 XAnimGetNumAllocatedAnimNodes(int *outNumAnimInfos, int *outNumCustomNodes)
{
  int numAllocatedNodes; 
  __int64 result; 

  numAllocatedNodes = s_xanimNodeAllocator.bucketAllocator.numAllocatedNodes;
  result = (unsigned int)(s_xanimNodeAllocator.animInfoPoolAllocator.numAllocatedNodes + s_xanimNodeAllocator.bucketAllocator.numAllocatedNodes);
  if ( outNumAnimInfos )
    *outNumAnimInfos = s_xanimNodeAllocator.animInfoPoolAllocator.numAllocatedNodes;
  if ( outNumCustomNodes )
    *outNumCustomNodes = numAllocatedNodes;
  return result;
}

/*
==============
XAnimGetTreeCurrentMemUsage
==============
*/
__int64 XAnimGetTreeCurrentMemUsage(int *outAnimInfoUsage, int *outCustomNodeUsage)
{
  unsigned int v2; 
  int v4; 
  int v6; 
  int v7; 
  __int64 result; 

  v2 = 0;
  v4 = 0;
  v6 = 0;
  if ( s_xanimNodeAllocator.initialized )
  {
    v7 = 96 * s_xanimNodeAllocator.animInfoPoolAllocator.numAllocatedNodes;
    v2 = s_xanimNodeAllocator.bucketAllocator.memoryPool.poolSize + v7 - BlockMemMan_GetFreeRemaining(&s_xanimNodeAllocator.bucketAllocator.memoryPool);
    v6 = 96 * s_xanimNodeAllocator.animInfoPoolAllocator.numAllocatedNodes;
    v4 = s_xanimNodeAllocator.bucketAllocator.memoryPool.poolSize - BlockMemMan_GetFreeRemaining(&s_xanimNodeAllocator.bucketAllocator.memoryPool);
  }
  if ( outAnimInfoUsage )
    *outAnimInfoUsage = v6;
  result = v2;
  if ( outCustomNodeUsage )
    *outCustomNodeUsage = v4;
  return result;
}

/*
==============
XAnimGetTreeMaxMemUsage
==============
*/
__int64 XAnimGetTreeMaxMemUsage(int *outAnimInfoMaxUsage, int *outCustomNodeMaxUsage)
{
  __int64 result; 
  int v3; 
  int poolSize; 

  result = 0i64;
  v3 = 0;
  poolSize = 0;
  if ( s_xanimNodeAllocator.initialized )
  {
    poolSize = s_xanimNodeAllocator.bucketAllocator.memoryPool.poolSize;
    v3 = 96 * s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPoolCount;
    result = s_xanimNodeAllocator.bucketAllocator.memoryPool.poolSize + 96 * s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPoolCount;
  }
  if ( outAnimInfoMaxUsage )
    *outAnimInfoMaxUsage = v3;
  if ( outCustomNodeMaxUsage )
    *outCustomNodeMaxUsage = poolSize;
  return result;
}

/*
==============
XAnimInfoPoolAllocator_Alloc
==============
*/
char XAnimInfoPoolAllocator_Alloc(XAnimInfoPoolAllocator *allocator, unsigned __int16 *outInfoID)
{
  XAnimInfo *animInfoPool; 
  unsigned __int16 next; 
  char result; 
  unsigned __int64 v7; 
  int v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  unsigned int v11; 
  __int64 v12; 

  if ( !allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 208, ASSERT_TYPE_ASSERT, "(allocator != 0)", (const char *)&queryFormat, "allocator != NULL") )
    __debugbreak();
  if ( !outInfoID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 209, ASSERT_TYPE_ASSERT, "(outInfoID != 0)", (const char *)&queryFormat, "outInfoID != NULL") )
    __debugbreak();
  animInfoPool = allocator->animInfoPool;
  next = allocator->animInfoPool->next;
  if ( next )
  {
    if ( next >= allocator->animInfoPoolCount )
    {
      LODWORD(v12) = next;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 220, ASSERT_TYPE_ASSERT, "( ( infoIndex && (infoIndex < allocator->animInfoPoolCount) ) )", "( infoIndex ) = %i", v12) )
        __debugbreak();
    }
    v7 = next;
    v8 = animInfoPool[v7].next;
    v9 = (unsigned __int8 *)&animInfoPool[v7];
    animInfoPool->next = v8;
    if ( v8 >= allocator->animInfoPoolCount )
    {
      LODWORD(v12) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 223, ASSERT_TYPE_ASSERT, "( ( next < allocator->animInfoPoolCount ) )", "( next ) = %i", v12) )
        __debugbreak();
    }
    animInfoPool[(unsigned __int16)v8].prev = 0;
    if ( v9[80] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 227, ASSERT_TYPE_ASSERT, "(!animInfoPool[infoIndex].inuse)", (const char *)&queryFormat, "!animInfoPool[infoIndex].inuse") )
      __debugbreak();
    *outInfoID = next;
    ++allocator->numAllocatedNodes;
    if ( (next & 0x8000u) != 0 )
    {
      v11 = 32 * (next & 0x7FFF);
      if ( v11 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v12) = 32 * (next & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v12, g_xanimMemoryGlobals.bucketAllocatorMaxOffset) )
          __debugbreak();
      }
      v10 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v11];
    }
    else
    {
      if ( (unsigned int)next >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v12) = next;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v12, g_xanimMemoryGlobals.infoPoolSize) )
          __debugbreak();
      }
      v10 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[v7];
    }
    if ( v10 != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 234, ASSERT_TYPE_ASSERT, "(XAnimGetAnimInfo( infoIndex ) == &animInfoPool[infoIndex])", (const char *)&queryFormat, "XAnimGetAnimInfo( infoIndex ) == &animInfoPool[infoIndex]") )
      __debugbreak();
    return 1;
  }
  else
  {
    result = 0;
    *outInfoID = 0;
  }
  return result;
}

/*
==============
XAnimInfoPoolAllocator_DebugDrawAllocations
==============
*/
void XAnimInfoPoolAllocator_DebugDrawAllocations(int x, int y, void (*drawBox)(int, int, int, int, const unsigned __int8 *))
{
  __int64 animInfoPoolCount; 
  int v4; 
  XAnimToXModel **p_animToModel; 

  animInfoPoolCount = s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPoolCount;
  v4 = 0;
  if ( s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPoolCount > 0i64 )
  {
    p_animToModel = &s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPool->animToModel;
    do
    {
      ((void (__fastcall *)(_QWORD, _QWORD, __int64))drawBox)((unsigned int)(x + 8 * (v4 % 128)), (unsigned int)(y + 11 * (v4 / 128)), 7i64);
      ++v4;
      p_animToModel += 12;
      --animInfoPoolCount;
    }
    while ( animInfoPoolCount );
  }
}

/*
==============
XAnimInfoPoolAllocator_Init
==============
*/
void XAnimInfoPoolAllocator_Init(XAnimInfoPoolAllocator *allocator, XAnimInfo *infos, int size)
{
  __int64 v3; 
  __int64 v6; 
  int v7; 
  unsigned __int16 *p_next; 
  int v9; 
  int v10; 

  v3 = size;
  if ( !infos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 181, ASSERT_TYPE_ASSERT, "(infos != 0)", (const char *)&queryFormat, "infos != NULL") )
    __debugbreak();
  if ( (int)v3 >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 182, ASSERT_TYPE_ASSERT, "(size < 65536)", (const char *)&queryFormat, "size < 65536") )
    __debugbreak();
  if ( !allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 183, ASSERT_TYPE_ASSERT, "(allocator != 0)", (const char *)&queryFormat, "allocator != NULL") )
    __debugbreak();
  allocator->animInfoPool = infos;
  allocator->animInfoPoolCount = v3;
  memset_0(infos, 0, sizeof(XAnimInfo));
  v6 = v3;
  if ( (int)v3 > 0 )
  {
    v7 = 1;
    p_next = &infos->next;
    do
    {
      v9 = ((int)v3 + v7 - 2) % (int)v3;
      if ( (v9 < 0 || (unsigned int)v9 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v9, "signed", v9) )
        __debugbreak();
      *(p_next - 1) = v9;
      v10 = v7 % (int)v3;
      if ( (v7 % (int)v3 < 0 || (unsigned int)v10 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v10, "signed", v10) )
        __debugbreak();
      *p_next = v10;
      *((_BYTE *)p_next + 70) = 0;
      p_next += 48;
      ++v7;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
XAnimInitMemory
==============
*/
void XAnimInitMemory(unsigned __int8 *memory, int sizeInBytes)
{
  if ( !memory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 525, ASSERT_TYPE_ASSERT, "(memory != 0)", (const char *)&queryFormat, "memory != NULL") )
    __debugbreak();
  XAnimNodeAllocator_Init(&s_xanimNodeAllocator, memory, sizeInBytes);
  g_xanimMemoryGlobals.bucketAllocatorMaxOffset = s_xanimNodeAllocator.bucketAllocator.memoryPool.poolSize;
  g_xanimMemoryGlobals.bucketAllocatorBasePointer = (unsigned __int8 *)s_xanimNodeAllocator.bucketAllocator.memoryPool.pool;
  g_xanimMemoryGlobals.infoPool = s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPool;
  g_xanimMemoryGlobals.infoPoolSize = s_xanimNodeAllocator.animInfoPoolAllocator.animInfoPoolCount;
}

/*
==============
XAnimNodeAllocator_Alloc
==============
*/
char XAnimNodeAllocator_Alloc(XAnimNodeAllocator *allocator, unsigned __int64 size, unsigned __int16 *outInfoID)
{
  __int64 v6; 
  unsigned __int16 v7; 
  char v8; 
  char result; 
  void *v10; 
  int animInfoPoolCount; 
  unsigned __int64 v12; 
  unsigned int poolSize; 
  int v14; 
  int TreeCurrentMemUsage; 
  unsigned int numPools; 
  unsigned int v17; 
  char *fmt; 
  char *fmta; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int16 outInfoIDa[8]; 
  BucketAllocatorStats outStats; 

  if ( !allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 387, ASSERT_TYPE_ASSERT, "(allocator != 0)", (const char *)&queryFormat, "allocator != NULL") )
    __debugbreak();
  if ( !allocator->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 388, ASSERT_TYPE_ASSERT, "(allocator->initialized)", "%s\n\tXAnim node allocator not initialized, probably missing a call XAnim[AllocateAnd]InitMemory after XAnimInit", "allocator->initialized") )
    __debugbreak();
  v6 = 0i64;
  v7 = 0;
  outInfoIDa[0] = 0;
  if ( size == 96 )
  {
    v8 = XAnimInfoPoolAllocator_Alloc(&allocator->animInfoPoolAllocator, outInfoIDa);
    if ( v8 )
    {
      *outInfoID = outInfoIDa[0];
      return v8;
    }
    v7 = outInfoIDa[0];
    Com_PrintError(19, "XAnimNodeAllocator_Alloc (%zd bytes): animInfoPool out of memory\n", 96i64);
    goto LABEL_13;
  }
  v10 = BucketAllocator_Alloc(size, &allocator->bucketAllocator.bucketAllocator);
  if ( !v10 )
  {
    v8 = 0;
    Com_PrintError(19, "XAnimNodeAllocator_Alloc (%zd bytes): bucket allocator out of memory\n", size);
LABEL_13:
    if ( allocator == (XAnimNodeAllocator *)-1288i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 264, ASSERT_TYPE_ASSERT, "(allocator != 0)", (const char *)&queryFormat, "allocator != NULL") )
      __debugbreak();
    animInfoPoolCount = allocator->animInfoPoolAllocator.animInfoPoolCount;
    if ( allocator == (XAnimNodeAllocator *)-1288i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 271, ASSERT_TYPE_ASSERT, "(allocator != 0)", (const char *)&queryFormat, "allocator != NULL") )
      __debugbreak();
    v12 = 96 * (animInfoPoolCount - allocator->animInfoPoolAllocator.numAllocatedNodes) / 0x60ui64;
    if ( allocator == (XAnimNodeAllocator *)-1288i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 271, ASSERT_TYPE_ASSERT, "(allocator != 0)", (const char *)&queryFormat, "allocator != NULL") )
      __debugbreak();
    Com_PrintError(19, "XAnimInfoPool: %zi nodes allocated, %zi free\n", 96 * allocator->animInfoPoolAllocator.numAllocatedNodes / 0x60ui64, v12);
    poolSize = allocator->bucketAllocator.memoryPool.poolSize;
    v14 = (int)(poolSize - XAnimBucketAllocator_GetTreeCurrentMemUsage(&allocator->bucketAllocator)) / 0x2000;
    TreeCurrentMemUsage = XAnimBucketAllocator_GetTreeCurrentMemUsage(&allocator->bucketAllocator);
    LODWORD(fmt) = v14;
    Com_PrintError(19, "XAnimBucketAllocator: %zi nodes allocated, %zi free (%d free pools)\n", TreeCurrentMemUsage / 0x60ui64, (v14 << 13) / 0x60ui64, fmt);
    BucketAllocator_GetStats(&allocator->bucketAllocator.bucketAllocator, &outStats);
    numPools = outStats.numPools;
    if ( outStats.numPools )
    {
      do
      {
        if ( outStats.poolStats[v6].numAllocatedBlocks )
        {
          LODWORD(v22) = outStats.poolStats[v6].memoryUsed;
          LODWORD(v21) = outStats.poolStats[v6].numSubPools;
          LODWORD(v20) = outStats.poolStats[v6].numAllocatedBlocks;
          LODWORD(fmta) = outStats.poolStats[v6].numFreeBlocks;
          Com_PrintError(19, "[%02d] BlockSize %d - FreeBlocks %d, AllocBlocks %d, SubPools %d, MemUsed %d\n", (unsigned int)v6, outStats.poolStats[v6].blockSize, fmta, v20, v21, v22);
          numPools = outStats.numPools;
        }
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < numPools );
    }
    *outInfoID = v7;
    return v8;
  }
  v17 = (unsigned int)((_DWORD)v10 - LODWORD(allocator->bucketAllocator.memoryPool.pool)) >> 5;
  if ( v17 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v17, "unsigned", v17) )
    __debugbreak();
  ++allocator->bucketAllocator.numAllocatedNodes;
  if ( (v17 & 0x8000u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 408, ASSERT_TYPE_ASSERT, "(!(nodeID & XANIM_INFO_ID_BUCKET_ALLOC_FLAG))", (const char *)&queryFormat, "!(nodeID & XANIM_INFO_ID_BUCKET_ALLOC_FLAG)") )
    __debugbreak();
  result = 1;
  *outInfoID = v17 | 0x8000;
  return result;
}

/*
==============
XAnimNodeAllocator_Init
==============
*/
void XAnimNodeAllocator_Init(XAnimNodeAllocator *allocator, void *memoryBlock, int memoryBlockSize)
{
  int v6; 
  int v7; 
  unsigned __int64 v8; 

  if ( !allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 326, ASSERT_TYPE_ASSERT, "(allocator != 0)", (const char *)&queryFormat, "allocator != NULL") )
    __debugbreak();
  if ( !memoryBlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 327, ASSERT_TYPE_ASSERT, "(memoryBlock != 0)", (const char *)&queryFormat, "memoryBlock != NULL") )
    __debugbreak();
  v6 = 45 * memoryBlockSize / 3200;
  if ( v6 >= 2048 )
  {
    if ( v6 > 0x7FFF )
    {
      Com_PrintWarning(19, "XAnimNodeAllocator_Init: custom node block allocator maximum size reached (requested: %d bytes, max: %d bytes)\n", (unsigned int)(32 * v6), 1048544i64);
      v6 = 0x7FFF;
    }
  }
  else
  {
    v6 = 2048;
    if ( memoryBlockSize <= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 343, ASSERT_TYPE_ASSERT, "(bucketAllocatorPoolBlockCount * 32 < memoryBlockSize)", "%s\n\tinsufficient memory for bucket allocator (%d bytes provided but minimum is %d)", "bucketAllocatorPoolBlockCount * XANIM_ALLOC_ALIGNMENT < memoryBlockSize", memoryBlockSize, 0x10000) )
      __debugbreak();
  }
  v7 = 32 * v6;
  v8 = (memoryBlockSize - v7) / 0x60ui64;
  if ( (int)v8 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 356, ASSERT_TYPE_ASSERT, "(animInfoPoolCount > 0)", (const char *)&queryFormat, "animInfoPoolCount > 0") )
    __debugbreak();
  if ( (int)v8 > 0x7FFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.cpp", 359, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "exceeded max anim info pool size") )
      __debugbreak();
    LODWORD(v8) = 0x7FFF;
  }
  XAnimInfoPoolAllocator_Init(&allocator->animInfoPoolAllocator, (XAnimInfo *)((char *)memoryBlock + v7), v8);
  XAnimBucketAllocator_Init(&allocator->bucketAllocator, (unsigned __int8 *)memoryBlock, v7);
  allocator->initialized = 1;
}

/*
==============
XAnimShutdownMemory
==============
*/
void XAnimShutdownMemory(void)
{
  s_xanimNodeAllocator.initialized = 0;
}

