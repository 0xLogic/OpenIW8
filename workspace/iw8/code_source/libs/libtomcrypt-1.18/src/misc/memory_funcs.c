/*
==============
ltc_local_malloc
==============
*/

void *__cdecl ltc_local_malloc(size_t Size)
{
  return malloc(Size);
}

/*
==============
ltc_local_realloc
==============
*/

void *__cdecl ltc_local_realloc(void *Block, size_t Size)
{
  return realloc(Block, Size);
}

/*
==============
ltc_local_calloc
==============
*/

void *__cdecl ltc_local_calloc(size_t Count, size_t Size)
{
  return calloc(Count, Size);
}

/*
==============
ltc_local_free
==============
*/

void __cdecl ltc_local_free(void *Block)
{
  free(Block);
}

/*
==============
set_ltc_memory_functions
==============
*/
__int64 set_ltc_memory_functions(void *(*malloc_func)(unsigned __int64), void *(*realloc_func)(void *, unsigned __int64), void *(*calloc_func)(unsigned __int64, unsigned __int64), void (*free_func)(void *))
{
  __int64 result; 

  ltc_malloc = malloc_func;
  result = 0i64;
  ltc_realloc = realloc_func;
  ltc_calloc = calloc_func;
  ltc_free = free_func;
  return result;
}

