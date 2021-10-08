/*
==============
XAnimGetAnimInfo
==============
*/

XAnimInfo *__fastcall XAnimGetAnimInfo(unsigned __int16 infoIndex)
{
  return ?XAnimGetAnimInfo@@YAPEAUXAnimInfo@@G@Z(infoIndex);
}

/*
==============
XAnimGetAnimInfo
==============
*/
XAnimInfo *XAnimGetAnimInfo(unsigned __int16 infoIndex)
{
  unsigned int v3; 

  if ( (infoIndex & 0x8000u) != 0 )
  {
    v3 = 32 * (infoIndex & 0x7FFF);
    if ( v3 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", 32 * (infoIndex & 0x7FFF), g_xanimMemoryGlobals.bucketAllocatorMaxOffset) )
      __debugbreak();
    return (XAnimInfo *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v3];
  }
  else
  {
    if ( (unsigned int)infoIndex >= g_xanimMemoryGlobals.infoPoolSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", infoIndex, g_xanimMemoryGlobals.infoPoolSize) )
      __debugbreak();
    return &g_xanimMemoryGlobals.infoPool[infoIndex];
  }
}

