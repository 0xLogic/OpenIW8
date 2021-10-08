/*
==============
MemBudget_PollArray_Get
==============
*/

unsigned __int64 __fastcall MemBudget_PollArray_Get(const MemBudget_PollArray *pollArray, const MemBudget_PollType pollType)
{
  return ?MemBudget_PollArray_Get@@YA_KAEBUMemBudget_PollArray@@W4MemBudget_PollType@@@Z(pollArray, pollType);
}

/*
==============
MemBudget_PollArray_Get
==============
*/
__int64 MemBudget_PollArray_Get(const MemBudget_PollArray *pollArray, const MemBudget_PollType pollType)
{
  unsigned __int8 v2; 
  int v5; 
  int v6; 

  v2 = pollType;
  if ( (unsigned __int8)pollType < 0x26u )
    return pollArray->pollValues[(unsigned __int8)pollType];
  v6 = 38;
  v5 = (unsigned __int8)pollType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.h", 143, ASSERT_TYPE_ASSERT, "(unsigned)( pollType ) < (unsigned)( ( sizeof( *array_counter( pollArray.pollValues ) ) + 0 ) )", "pollType doesn't index ARRAY_COUNT( pollArray.pollValues )\n\t%i not in [0, %i)", v5, v6) )
    __debugbreak();
  return pollArray->pollValues[v2];
}

