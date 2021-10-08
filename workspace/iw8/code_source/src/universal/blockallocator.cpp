/*
==============
BlockMemMan_Free
==============
*/

void __fastcall BlockMemMan_Free(void *memPointerToFree, BlockMemoryPool *blockpool)
{
  ?BlockMemMan_Free@@YAXPEAXPEAUBlockMemoryPool@@@Z(memPointerToFree, blockpool);
}

/*
==============
BlockMemMan_GetFreeRemaining
==============
*/

unsigned int __fastcall BlockMemMan_GetFreeRemaining(const BlockMemoryPool *blockpool)
{
  return ?BlockMemMan_GetFreeRemaining@@YAIPEBUBlockMemoryPool@@@Z(blockpool);
}

/*
==============
BlockMemMan_Init
==============
*/

void __fastcall BlockMemMan_Init(BlockMemoryPool *blockpool)
{
  ?BlockMemMan_Init@@YAXPEAUBlockMemoryPool@@@Z(blockpool);
}

/*
==============
BlockMemMan_GetSmallestFree
==============
*/

unsigned int __fastcall BlockMemMan_GetSmallestFree(BlockMemoryPool *blockpool)
{
  return ?BlockMemMan_GetSmallestFree@@YAIPEAUBlockMemoryPool@@@Z(blockpool);
}

/*
==============
BlockMemMan_Allocate
==============
*/

void *__fastcall BlockMemMan_Allocate(unsigned __int64 amountOfMemoryToAllocate, BlockMemoryPool *blockpool)
{
  return ?BlockMemMan_Allocate@@YAPEAX_KPEAUBlockMemoryPool@@@Z(amountOfMemoryToAllocate, blockpool);
}

/*
==============
BlockMemMan_GetlargestFree
==============
*/

unsigned int __fastcall BlockMemMan_GetlargestFree(BlockMemoryPool *blockpool)
{
  return ?BlockMemMan_GetlargestFree@@YAIPEAUBlockMemoryPool@@@Z(blockpool);
}

/*
==============
BlockMemMan_PointerInRange
==============
*/

bool __fastcall BlockMemMan_PointerInRange(void *memPointer, BlockMemoryPool *blockpool)
{
  return ?BlockMemMan_PointerInRange@@YA_NPEAXPEAUBlockMemoryPool@@@Z(memPointer, blockpool);
}

/*
==============
BlockMemoryPool::BlockMemoryPool
==============
*/

void __fastcall BlockMemoryPool::BlockMemoryPool(BlockMemoryPool *this)
{
  ??0BlockMemoryPool@@QEAA@XZ(this);
}

/*
==============
BlockMemoryPool::BlockMemoryPool
==============
*/
void BlockMemoryPool::BlockMemoryPool(BlockMemoryPool *this)
{
  this->alignment = 4;
  this->poolSize = 0;
  this->pool = NULL;
  this->headerSize = 0;
}

/*
==============
BlockMemMan_Allocate
==============
*/
char *BlockMemMan_Allocate(unsigned __int64 amountOfMemoryToAllocate, BlockMemoryPool *blockpool)
{
  unsigned int v2; 
  char *pool; 
  unsigned __int64 v6; 
  __int64 poolSize; 
  __int64 v8; 
  unsigned int *v9; 
  unsigned __int64 v11; 
  char *v12; 
  unsigned int *v13; 
  unsigned int *i; 

  v2 = blockpool->alignment - 1;
  if ( !amountOfMemoryToAllocate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 239, ASSERT_TYPE_ASSERT, "(amountOfMemoryToAllocate)", (const char *)&queryFormat, "amountOfMemoryToAllocate") )
    __debugbreak();
  if ( !blockpool->pool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 240, ASSERT_TYPE_ASSERT, "(blockpool->pool)", (const char *)&queryFormat, "blockpool->pool") )
    __debugbreak();
  if ( !blockpool->alignment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 241, ASSERT_TYPE_ASSERT, "(blockpool->alignment)", (const char *)&queryFormat, "blockpool->alignment") )
    __debugbreak();
  pool = (char *)blockpool->pool;
  v6 = blockpool->headerSize + (~(unsigned __int64)v2 & (v2 + amountOfMemoryToAllocate));
  poolSize = blockpool->poolSize;
  v8 = (__int64)&pool[poolSize - 12];
  v9 = (unsigned int *)&pool[*(unsigned int *)&pool[poolSize - 8]];
  if ( v9 == (unsigned int *)v8 )
    return 0i64;
  while ( v9[2] < v6 )
  {
    v9 = (unsigned int *)&pool[v9[1]];
    if ( v9 == (unsigned int *)v8 )
      return 0i64;
  }
  if ( v9 == (unsigned int *)v8 )
    return 0i64;
  *(_DWORD *)&pool[*v9 + 4] = v9[1];
  *(_DWORD *)&pool[v9[1]] = *v9;
  v11 = v9[2] - v6;
  if ( v11 < 0xC )
  {
    v6 = v9[2];
  }
  else
  {
    v12 = (char *)blockpool->pool;
    v13 = (unsigned int *)((char *)v9 + v6);
    for ( i = (unsigned int *)&v12[*(unsigned int *)(v8 + 4)]; i != (unsigned int *)v8; i = (unsigned int *)&v12[i[1]] )
    {
      if ( i[2] >= v11 )
        break;
    }
    v13[1] = (_DWORD)i - (_DWORD)v12;
    *v13 = *i;
    *(_DWORD *)&v12[*i + 4] = (_DWORD)v13 - (_DWORD)v12;
    *i = (_DWORD)v13 - (_DWORD)v12;
    v13[2] = v11;
    if ( (unsigned int)v11 != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 277, ASSERT_TYPE_ASSERT, "(n->length == remaining)", (const char *)&queryFormat, "n->length == remaining") )
      __debugbreak();
  }
  *v9 = v6;
  if ( (unsigned int)v6 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 295, ASSERT_TYPE_ASSERT, "(h->length == actualSize)", (const char *)&queryFormat, "h->length == actualSize") )
    __debugbreak();
  return (char *)v9 + blockpool->headerSize;
}

/*
==============
BlockMemMan_Free
==============
*/
void BlockMemMan_Free(void *memPointerToFree, BlockMemoryPool *blockpool)
{
  char *pool; 
  unsigned __int64 v5; 
  unsigned int *v6; 
  unsigned int *v7; 
  unsigned int *v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  char *v12; 
  unsigned int *v13; 
  char *v14; 
  __int64 v15; 
  char *v16; 
  unsigned int *i; 
  int v18; 

  if ( !memPointerToFree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 315, ASSERT_TYPE_ASSERT, "(memPointerToFree)", (const char *)&queryFormat, "memPointerToFree") )
    __debugbreak();
  pool = (char *)blockpool->pool;
  v5 = (unsigned __int64)&pool[blockpool->poolSize - 12];
  if ( memPointerToFree < pool || (unsigned __int64)memPointerToFree >= v5 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 321, ASSERT_TYPE_ASSERT, "(!bBadFree)", (const char *)&queryFormat, "!bBadFree") )
      __debugbreak();
  }
  else
  {
    v6 = (unsigned int *)((char *)memPointerToFree - blockpool->headerSize);
    v7 = (unsigned int *)&pool[*(unsigned int *)(v5 + 4)];
    v8 = v7;
    v9 = *v6;
    if ( v7 != (unsigned int *)v5 )
    {
      while ( 1 )
      {
        v10 = v8[2];
        if ( (unsigned int *)((char *)v8 + v10) == v6 )
          break;
        v8 = (unsigned int *)&pool[v8[1]];
        if ( v8 == (unsigned int *)v5 )
          goto LABEL_9;
      }
      if ( v8 != (unsigned int *)v5 )
      {
        v6 = v8;
        v8[2] = v10 + v9;
        goto LABEL_13;
      }
LABEL_9:
      while ( v7 != (unsigned int *)v5 )
      {
        if ( v7[2] >= v9 )
          break;
        v7 = (unsigned int *)&pool[v7[1]];
      }
    }
    v6[1] = (_DWORD)v7 - (_DWORD)pool;
    *v6 = *v7;
    *(_DWORD *)&pool[*v7 + 4] = (_DWORD)v6 - (_DWORD)pool;
    *v7 = (_DWORD)v6 - (_DWORD)pool;
    v6[2] = v9;
LABEL_13:
    v11 = v6[2];
    v12 = (char *)blockpool->pool;
    v13 = (unsigned int *)&v12[*(unsigned int *)(v5 + 4)];
    if ( v13 != (unsigned int *)v5 )
    {
      do
      {
        if ( v13 == (unsigned int *)((char *)v6 + v11) )
          break;
        v13 = (unsigned int *)&v12[v13[1]];
      }
      while ( v13 != (unsigned int *)v5 );
      if ( v13 != (unsigned int *)v5 )
      {
        v6[2] = v11 + v13[2];
        v14 = (char *)blockpool->pool;
        *(_DWORD *)&v14[*v13 + 4] = v13[1];
        *(_DWORD *)&v14[v13[1]] = *v13;
        v12 = (char *)blockpool->pool;
      }
    }
    v15 = v6[1];
    if ( &v12[v15] != (char *)v5 && *(_DWORD *)&v12[v15 + 8] < v6[2] )
    {
      *(_DWORD *)&v12[*v6 + 4] = v15;
      *(_DWORD *)&v12[v6[1]] = *v6;
      v16 = (char *)blockpool->pool;
      for ( i = (unsigned int *)&v16[*(unsigned int *)(v5 + 4)]; i != (unsigned int *)v5; i = (unsigned int *)&v16[i[1]] )
      {
        if ( i[2] >= v6[2] )
          break;
      }
      v6[1] = (_DWORD)i - (_DWORD)v16;
      *v6 = *i;
      v18 = (_DWORD)v6 - (_DWORD)v16;
      *(_DWORD *)&v16[*i + 4] = v18;
      *i = v18;
    }
  }
}

/*
==============
BlockMemMan_GetFreeRemaining
==============
*/
__int64 BlockMemMan_GetFreeRemaining(const BlockMemoryPool *blockpool)
{
  char *pool; 
  __int64 poolSize; 
  __int64 v4; 
  char *v5; 
  __int64 result; 

  if ( !blockpool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 404, ASSERT_TYPE_ASSERT, "(blockpool)", (const char *)&queryFormat, "blockpool") )
    __debugbreak();
  if ( !blockpool->pool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 405, ASSERT_TYPE_ASSERT, "(blockpool->pool)", (const char *)&queryFormat, "blockpool->pool") )
    __debugbreak();
  pool = (char *)blockpool->pool;
  poolSize = blockpool->poolSize;
  v4 = (__int64)&pool[poolSize - 12];
  v5 = &pool[*(unsigned int *)&pool[poolSize - 8]];
  for ( result = 0i64; v5 != (char *)v4; v5 = &pool[*((unsigned int *)v5 + 1)] )
    result = (unsigned int)(*((_DWORD *)v5 + 2) + result);
  return result;
}

/*
==============
BlockMemMan_GetSmallestFree
==============
*/
__int64 BlockMemMan_GetSmallestFree(BlockMemoryPool *blockpool)
{
  char *pool; 
  __int64 result; 
  __int64 v4; 
  char *i; 
  signed int v6; 

  if ( !blockpool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 459, ASSERT_TYPE_ASSERT, "(blockpool)", (const char *)&queryFormat, "blockpool") )
    __debugbreak();
  if ( !blockpool->pool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 460, ASSERT_TYPE_ASSERT, "(blockpool->pool)", (const char *)&queryFormat, "blockpool->pool") )
    __debugbreak();
  pool = (char *)blockpool->pool;
  result = blockpool->poolSize;
  v4 = (__int64)&pool[result - 12];
  for ( i = &pool[*(unsigned int *)&pool[result - 8]]; i != (char *)v4; i = &pool[*((unsigned int *)i + 1)] )
  {
    v6 = *((_DWORD *)i + 2) - blockpool->headerSize;
    if ( v6 < (int)result && v6 > 0 )
      result = (unsigned int)v6;
  }
  return result;
}

/*
==============
BlockMemMan_GetlargestFree
==============
*/
__int64 BlockMemMan_GetlargestFree(BlockMemoryPool *blockpool)
{
  char *pool; 
  __int64 poolSize; 
  __int64 v4; 
  char *v5; 
  __int64 result; 
  int v7; 
  __int64 v8; 
  int v9; 

  if ( !blockpool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 430, ASSERT_TYPE_ASSERT, "(blockpool)", (const char *)&queryFormat, "blockpool") )
    __debugbreak();
  if ( !blockpool->pool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 431, ASSERT_TYPE_ASSERT, "(blockpool->pool)", (const char *)&queryFormat, "blockpool->pool") )
    __debugbreak();
  pool = (char *)blockpool->pool;
  poolSize = blockpool->poolSize;
  v4 = (__int64)&pool[poolSize - 12];
  v5 = &pool[*(unsigned int *)&pool[poolSize - 8]];
  for ( result = 0i64; v5 != (char *)v4; v5 = &pool[v8] )
  {
    v7 = *((_DWORD *)v5 + 2);
    v8 = *((unsigned int *)v5 + 1);
    v9 = v7 - blockpool->headerSize;
    if ( v9 > (int)result )
      result = (unsigned int)v9;
  }
  return result;
}

/*
==============
BlockMemMan_Init
==============
*/
void BlockMemMan_Init(BlockMemoryPool *blockpool)
{
  unsigned int alignment; 
  __int64 poolSize; 
  char *pool; 
  _DWORD *v5; 

  if ( !blockpool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 194, ASSERT_TYPE_ASSERT, "(blockpool)", (const char *)&queryFormat, "blockpool") )
    __debugbreak();
  if ( !blockpool->pool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 195, ASSERT_TYPE_ASSERT, "(blockpool->pool)", (const char *)&queryFormat, "blockpool->pool") )
    __debugbreak();
  if ( !blockpool->alignment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 196, ASSERT_TYPE_ASSERT, "(blockpool->alignment)", (const char *)&queryFormat, "blockpool->alignment") )
    __debugbreak();
  if ( ((blockpool->alignment - 1) & blockpool->alignment) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 197, ASSERT_TYPE_ASSERT, "(IsPowerOf2( blockpool->alignment ))", (const char *)&queryFormat, "IsPowerOf2( blockpool->alignment )") )
    __debugbreak();
  alignment = blockpool->alignment;
  if ( alignment <= 4 )
  {
    alignment = 4;
    blockpool->alignment = 4;
  }
  blockpool->headerSize = alignment;
  poolSize = blockpool->poolSize;
  pool = (char *)blockpool->pool;
  *(_QWORD *)&pool[poolSize - 12] = 0i64;
  *(_DWORD *)&pool[poolSize - 4] = 0;
  v5 = blockpool->pool;
  *v5 = blockpool->poolSize - 12;
  v5[1] = blockpool->poolSize - 12;
  v5[2] = blockpool->poolSize - 12;
}

/*
==============
BlockMemMan_PointerInRange
==============
*/
bool BlockMemMan_PointerInRange(void *memPointer, BlockMemoryPool *blockpool)
{
  char *pool; 

  if ( !memPointer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\blockallocator.cpp", 389, ASSERT_TYPE_ASSERT, "(memPointer)", (const char *)&queryFormat, "memPointer") )
    __debugbreak();
  pool = (char *)blockpool->pool;
  return memPointer < pool || memPointer >= &pool[blockpool->poolSize - 12];
}

