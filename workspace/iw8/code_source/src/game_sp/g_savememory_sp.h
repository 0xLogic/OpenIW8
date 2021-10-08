/*
==============
GSaveMemorySP::GetSaveMemorySP
==============
*/

GSaveMemorySP *__fastcall GSaveMemorySP::GetSaveMemorySP()
{
  return ?GetSaveMemorySP@GSaveMemorySP@@SAPEAV1@XZ();
}

/*
==============
GSaveMemorySP::GetSaveMemorySP
==============
*/
GSaveMemorySP *GSaveMemorySP::GetSaveMemorySP()
{
  GSaveMemorySP *result; 

  if ( (_BYTE)GSaveMemory::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savememory_sp.h", 131, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  result = (GSaveMemorySP *)GSaveMemory::ms_gSaveMemory;
  if ( !GSaveMemory::ms_gSaveMemory )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
      __debugbreak();
    return (GSaveMemorySP *)GSaveMemory::ms_gSaveMemory;
  }
  return result;
}

