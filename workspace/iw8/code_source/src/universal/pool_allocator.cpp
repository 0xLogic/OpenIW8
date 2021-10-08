/*
==============
Pool_Init
==============
*/

void __fastcall Pool_Init(pooldata_t *pooldata, void *bufferStart, unsigned int itemSize, unsigned int itemCount)
{
  ?Pool_Init@@YAXPEAUpooldata_t@@PEAXII@Z(pooldata, bufferStart, itemSize, itemCount);
}

/*
==============
Pool_Free
==============
*/

void __fastcall Pool_Free(void *data, pooldata_t *pooldata)
{
  ?Pool_Free@@YAXPEAXPEAUpooldata_t@@@Z(data, pooldata);
}

/*
==============
Pool_Alloc
==============
*/

void *__fastcall Pool_Alloc(pooldata_t *pooldata)
{
  return ?Pool_Alloc@@YAPEAXPEAUpooldata_t@@@Z(pooldata);
}

/*
==============
Pool_FreeCount
==============
*/

int __fastcall Pool_FreeCount(const pooldata_t *pooldata)
{
  return ?Pool_FreeCount@@YAHPEBUpooldata_t@@@Z(pooldata);
}

/*
==============
Pool_IncreaseStorage
==============
*/

void __fastcall Pool_IncreaseStorage(pooldata_t *pooldata, void *buffer, unsigned int itemCount)
{
  ?Pool_IncreaseStorage@@YAXPEAUpooldata_t@@PEAXI@Z(pooldata, buffer, itemCount);
}

/*
==============
Pool_Alloc
==============
*/
unsigned __int8 **Pool_Alloc(pooldata_t *pooldata)
{
  unsigned __int8 **freeList; 
  unsigned __int8 *v4; 
  int v5; 
  unsigned __int8 *v6; 
  int i; 

  if ( !pooldata && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 66, ASSERT_TYPE_ASSERT, "(pooldata)", (const char *)&queryFormat, "pooldata") )
    __debugbreak();
  freeList = (unsigned __int8 **)pooldata->freeList;
  if ( freeList )
  {
    v4 = *freeList;
    v5 = pooldata->activeCount + 1;
    pooldata->freeList = *freeList;
    pooldata->activeCount = v5;
    if ( !v4 && v5 != pooldata->bufferSize / pooldata->itemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 79, ASSERT_TYPE_ASSERT, "(pooldata->freeList || (pooldata->activeCount == (pooldata->bufferSize / pooldata->itemSize)))", (const char *)&queryFormat, "pooldata->freeList || (pooldata->activeCount == (pooldata->bufferSize / pooldata->itemSize))") )
      __debugbreak();
    v6 = pooldata->freeList;
    for ( i = 0; v6; ++i )
      v6 = *(unsigned __int8 **)v6;
    if ( i != pooldata->bufferSize / pooldata->itemSize - pooldata->activeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 82, ASSERT_TYPE_ASSERT, "(Pool_FreeCount( pooldata ) == ((pooldata->bufferSize / pooldata->itemSize) - pooldata->activeCount))", (const char *)&queryFormat, "Pool_FreeCount( pooldata ) == ((pooldata->bufferSize / pooldata->itemSize) - pooldata->activeCount)") )
      __debugbreak();
    if ( ((unsigned __int8)freeList & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 84, ASSERT_TYPE_ASSERT, "(( uintptr_t( mem ) & 3 ) == 0)", (const char *)&queryFormat, "( uintptr_t( mem ) & 3 ) == 0") )
      __debugbreak();
    return freeList;
  }
  else
  {
    if ( pooldata->activeCount != pooldata->bufferSize / pooldata->itemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 71, ASSERT_TYPE_ASSERT, "(pooldata->activeCount == ( pooldata->bufferSize / pooldata->itemSize ))", (const char *)&queryFormat, "pooldata->activeCount == ( pooldata->bufferSize / pooldata->itemSize )") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
Pool_Free
==============
*/
void Pool_Free(void *data, pooldata_t *pooldata)
{
  unsigned __int8 *bufferStart; 
  signed __int64 v5; 
  unsigned __int8 *freeList; 
  int i; 
  unsigned __int8 *v8; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 95, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !pooldata && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 96, ASSERT_TYPE_ASSERT, "(pooldata)", (const char *)&queryFormat, "pooldata") )
    __debugbreak();
  if ( data < pooldata->bufferStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 99, ASSERT_TYPE_ASSERT, "(item >= pooldata->bufferStart)", (const char *)&queryFormat, "item >= pooldata->bufferStart") )
    __debugbreak();
  if ( data >= &pooldata->bufferStart[pooldata->bufferSize] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 100, ASSERT_TYPE_ASSERT, "(item < pooldata->bufferStart + pooldata->bufferSize)", (const char *)&queryFormat, "item < pooldata->bufferStart + pooldata->bufferSize") )
    __debugbreak();
  bufferStart = pooldata->bufferStart;
  v5 = (_BYTE *)data - pooldata->bufferStart;
  if ( (unsigned __int64)(v5 + 0x80000000i64) > 0xFFFFFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v5, "signed", (intmax_t)data - (unsigned __int64)pooldata->bufferStart) )
      __debugbreak();
    bufferStart = pooldata->bufferStart;
  }
  if ( data != &bufferStart[(int)v5 - (int)v5 % pooldata->itemSize] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 101, ASSERT_TYPE_ASSERT, "(item == pooldata->bufferStart + (truncate_cast<int>(item - pooldata->bufferStart) / pooldata->itemSize) * pooldata->itemSize)", (const char *)&queryFormat, "item == pooldata->bufferStart + (truncate_cast<int>(item - pooldata->bufferStart) / pooldata->itemSize) * pooldata->itemSize") )
    __debugbreak();
  freeList = pooldata->freeList;
  for ( i = 0; freeList; ++i )
    freeList = *(unsigned __int8 **)freeList;
  if ( i != pooldata->bufferSize / pooldata->itemSize - pooldata->activeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 103, ASSERT_TYPE_ASSERT, "(Pool_FreeCount( pooldata ) == ((pooldata->bufferSize / pooldata->itemSize) - pooldata->activeCount))", (const char *)&queryFormat, "Pool_FreeCount( pooldata ) == ((pooldata->bufferSize / pooldata->itemSize) - pooldata->activeCount)") )
    __debugbreak();
  v8 = pooldata->freeList;
  if ( v8 )
  {
    do
    {
      if ( v8 == data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 108, ASSERT_TYPE_ASSERT, "(reinterpret_cast< byte * >( freeList ) != item)", (const char *)&queryFormat, "reinterpret_cast< byte * >( freeList ) != item") )
        __debugbreak();
      v8 = *(unsigned __int8 **)v8;
    }
    while ( v8 );
    v8 = pooldata->freeList;
  }
  *(_QWORD *)data = v8;
  --pooldata->activeCount;
  pooldata->freeList = (unsigned __int8 *)data;
}

/*
==============
Pool_FreeCount
==============
*/
__int64 Pool_FreeCount(const pooldata_t *pooldata)
{
  unsigned __int8 *freeList; 
  __int64 result; 

  if ( !pooldata && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 123, ASSERT_TYPE_ASSERT, "(pooldata)", (const char *)&queryFormat, "pooldata") )
    __debugbreak();
  freeList = pooldata->freeList;
  for ( result = 0i64; freeList; result = (unsigned int)(result + 1) )
    freeList = *(unsigned __int8 **)freeList;
  return result;
}

/*
==============
Pool_IncreaseStorage
==============
*/
void Pool_IncreaseStorage(pooldata_t *pooldata, void *buffer, unsigned int itemCount)
{
  int itemSize; 
  _QWORD *v7; 
  char *v8; 
  char *v9; 
  unsigned int v10; 

  if ( !pooldata && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 38, ASSERT_TYPE_ASSERT, "(pooldata)", (const char *)&queryFormat, "pooldata") )
    __debugbreak();
  if ( !pooldata->itemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 39, ASSERT_TYPE_ASSERT, "(pooldata->itemSize)", (const char *)&queryFormat, "pooldata->itemSize") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 40, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 41, ASSERT_TYPE_ASSERT, "(itemCount >= 1)", (const char *)&queryFormat, "itemCount >= 1") )
    __debugbreak();
  if ( pooldata->bufferStart && buffer != &pooldata->bufferStart[pooldata->bufferSize] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 42, ASSERT_TYPE_ASSERT, "(0 == pooldata->bufferStart || buffer == pooldata->bufferStart + pooldata->bufferSize)", (const char *)&queryFormat, "NULL == pooldata->bufferStart || buffer == pooldata->bufferStart + pooldata->bufferSize") )
    __debugbreak();
  itemSize = pooldata->itemSize;
  v7 = buffer;
  v8 = (char *)buffer + itemCount * itemSize;
  if ( buffer != v8 )
  {
    do
    {
      v9 = (char *)v7 + pooldata->itemSize;
      *v7 = v9;
      v7 = v9;
    }
    while ( v9 != v8 );
    itemSize = pooldata->itemSize;
  }
  *(_QWORD *)((char *)buffer + (itemCount - 1) * itemSize) = pooldata->freeList;
  if ( !pooldata->bufferStart )
    pooldata->bufferStart = (unsigned __int8 *)buffer;
  v10 = itemCount * pooldata->itemSize;
  pooldata->freeList = (unsigned __int8 *)buffer;
  pooldata->bufferSize += v10;
}

/*
==============
Pool_Init
==============
*/
void Pool_Init(pooldata_t *pooldata, void *bufferStart, unsigned int itemSize, unsigned int itemCount)
{
  int v8; 
  int v9; 
  _QWORD *v10; 
  char *v11; 
  char *v12; 
  unsigned int v13; 

  if ( !pooldata && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 12, ASSERT_TYPE_ASSERT, "(pooldata)", (const char *)&queryFormat, "pooldata") )
    __debugbreak();
  if ( !bufferStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 13, ASSERT_TYPE_ASSERT, "(bufferStart)", (const char *)&queryFormat, "bufferStart") )
    __debugbreak();
  if ( itemSize < 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 14, ASSERT_TYPE_ASSERT, "(itemSize >= sizeof( PoolFreeList ))", (const char *)&queryFormat, "itemSize >= sizeof( PoolFreeList )") )
    __debugbreak();
  if ( (itemSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 15, ASSERT_TYPE_ASSERT, "(( itemSize % sizeof( PoolFreeList ) ) == 0)", (const char *)&queryFormat, "( itemSize % sizeof( PoolFreeList ) ) == 0") )
    __debugbreak();
  if ( !itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 16, ASSERT_TYPE_ASSERT, "(itemCount >= 1)", (const char *)&queryFormat, "itemCount >= 1") )
    __debugbreak();
  if ( ((unsigned __int8)bufferStart & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 18, ASSERT_TYPE_ASSERT, "((((uintptr_t)bufferStart) & 3) == 0)", (const char *)&queryFormat, "(((uintptr_t)bufferStart) & 3) == 0") )
    __debugbreak();
  v8 = 0;
  pooldata->itemSize = itemSize;
  *(_QWORD *)&pooldata->bufferSize = 0i64;
  pooldata->freeList = NULL;
  pooldata->bufferStart = NULL;
  if ( !itemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 39, ASSERT_TYPE_ASSERT, "(pooldata->itemSize)", (const char *)&queryFormat, "pooldata->itemSize") )
    __debugbreak();
  if ( !bufferStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 40, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 41, ASSERT_TYPE_ASSERT, "(itemCount >= 1)", (const char *)&queryFormat, "itemCount >= 1") )
    __debugbreak();
  if ( pooldata->bufferStart && bufferStart != &pooldata->bufferStart[pooldata->bufferSize] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 42, ASSERT_TYPE_ASSERT, "(0 == pooldata->bufferStart || buffer == pooldata->bufferStart + pooldata->bufferSize)", (const char *)&queryFormat, "NULL == pooldata->bufferStart || buffer == pooldata->bufferStart + pooldata->bufferSize") )
    __debugbreak();
  v9 = pooldata->itemSize;
  v10 = bufferStart;
  v11 = (char *)bufferStart + itemCount * v9;
  if ( bufferStart != v11 )
  {
    do
    {
      v12 = (char *)v10 + pooldata->itemSize;
      *v10 = v12;
      v10 = v12;
    }
    while ( v12 != v11 );
    v9 = pooldata->itemSize;
  }
  *(_QWORD *)((char *)bufferStart + (itemCount - 1) * v9) = pooldata->freeList;
  if ( !pooldata->bufferStart )
    pooldata->bufferStart = (unsigned __int8 *)bufferStart;
  v13 = itemCount * pooldata->itemSize;
  pooldata->freeList = (unsigned __int8 *)bufferStart;
  for ( pooldata->bufferSize += v13; bufferStart; ++v8 )
    bufferStart = *(void **)bufferStart;
  if ( v8 != itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pool_allocator.cpp", 28, ASSERT_TYPE_ASSERT, "(Pool_FreeCount( pooldata ) == (int)itemCount)", (const char *)&queryFormat, "Pool_FreeCount( pooldata ) == (int)itemCount") )
    __debugbreak();
}

