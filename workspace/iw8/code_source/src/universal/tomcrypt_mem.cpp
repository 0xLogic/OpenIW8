/*
==============
tom_game_calloc
==============
*/
void *tom_game_calloc(unsigned __int64 num, unsigned __int64 size)
{
  size_t v2; 
  void *result; 
  void *v4; 

  v2 = size * num;
  result = bdMemory::allocate(size * num);
  v4 = result;
  if ( result )
  {
    memset_0(result, 0, v2);
    return v4;
  }
  return result;
}

/*
==============
tom_game_free
==============
*/

void __fastcall tom_game_free(void *ptr)
{
  bdMemory::deallocate(ptr);
}

/*
==============
tom_game_malloc
==============
*/

void *__fastcall tom_game_malloc(unsigned __int64 size)
{
  return bdMemory::allocate(size);
}

/*
==============
tom_game_realloc
==============
*/

void *__fastcall tom_game_realloc(void *ptr, unsigned __int64 size)
{
  return bdMemory::reallocate(ptr, size);
}

