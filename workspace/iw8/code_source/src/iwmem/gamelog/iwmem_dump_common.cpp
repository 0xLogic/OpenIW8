/*
==============
IWMem_GetAllocatorTypeName
==============
*/

const char *__fastcall IWMem_GetAllocatorTypeName(const IWMemAllocatorType allocType)
{
  return ?IWMem_GetAllocatorTypeName@@YAPEBDW4IWMemAllocatorType@@@Z(allocType);
}

/*
==============
IWMem_GetAllocatorTypeName
==============
*/
const char *IWMem_GetAllocatorTypeName(const IWMemAllocatorType allocType)
{
  __int64 v1; 
  int v4; 

  v1 = allocType;
  if ( (unsigned int)allocType >= 9 )
  {
    v4 = 9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_dump_common.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( ALLOCATOR_TYPE_NAMES ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( ALLOCATOR_TYPE_NAMES )\n\t%i not in [0, %i)", allocType, v4) )
      __debugbreak();
  }
  return ALLOCATOR_TYPE_NAMES[v1];
}

