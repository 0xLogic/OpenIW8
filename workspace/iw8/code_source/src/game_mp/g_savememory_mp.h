/*
==============
GSaveMemoryMP::GetSaveMemoryMP
==============
*/

GSaveMemoryMP *__fastcall GSaveMemoryMP::GetSaveMemoryMP()
{
  return ?GetSaveMemoryMP@GSaveMemoryMP@@SAPEAV1@XZ();
}

/*
==============
GSaveMemoryMP::GetSaveMemoryMP
==============
*/
GSaveMemoryMP *GSaveMemoryMP::GetSaveMemoryMP()
{
  GSaveMemoryMP *result; 

  if ( (_BYTE)GSaveMemory::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_savememory_mp.h", 55, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  result = (GSaveMemoryMP *)GSaveMemory::ms_gSaveMemory;
  if ( !GSaveMemory::ms_gSaveMemory )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
      __debugbreak();
    return (GSaveMemoryMP *)GSaveMemory::ms_gSaveMemory;
  }
  return result;
}

