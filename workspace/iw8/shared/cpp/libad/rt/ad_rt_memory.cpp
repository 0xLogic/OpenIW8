/*
==============
_AD_Aligned_Malloc
==============
*/

void *__fastcall _AD_Aligned_Malloc(const unsigned int count, const unsigned int alignment)
{
  return ?_AD_Aligned_Malloc@@YAPEAXII@Z(count, alignment);
}

/*
==============
AD_MemoryDestroy
==============
*/

void AD_MemoryDestroy(void)
{
  ?AD_MemoryDestroy@@YAXXZ();
}

/*
==============
_AD_Aligned_Free
==============
*/

void __fastcall _AD_Aligned_Free(void *const mem)
{
  ?_AD_Aligned_Free@@YAXQEAX@Z(mem);
}

/*
==============
AD_MemoryInit
==============
*/

void __fastcall AD_MemoryInit(const AD_RT_Options *const opts)
{
  ?AD_MemoryInit@@YAXQEBUAD_RT_Options@@@Z(opts);
}

/*
==============
AD_MemoryDestroy
==============
*/
void AD_MemoryDestroy(void)
{
  s_externalMalloc = NULL;
  s_externalFree = NULL;
}

/*
==============
AD_MemoryInit
==============
*/
void AD_MemoryInit(const AD_RT_Options *const opts)
{
  if ( opts )
  {
    s_externalMalloc = opts->externalMalloc;
    s_externalFree = opts->externalFree;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_memory.cpp", 9, ASSERT_TYPE_ASSERT, "opts != nullptr", "opts != nullptr") )
      __debugbreak();
    s_externalMalloc = (void *(__fastcall *)(const unsigned int, const unsigned int))MEMORY[8];
    s_externalFree = (void (__fastcall *)(void *const))MEMORY[0x10];
  }
}

/*
==============
_AD_Aligned_Free
==============
*/
void _AD_Aligned_Free(void *const mem)
{
  void (__fastcall *v1)(void *const); 

  v1 = s_externalFree;
  if ( s_externalFree )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_memory.cpp", (_DWORD)s_externalFree + 45, ASSERT_TYPE_ASSERT, "s_externalFree != nullptr", "s_externalFree != nullptr") )
    __debugbreak();
  v1 = s_externalFree;
  if ( s_externalFree )
LABEL_5:
    v1(mem);
}

/*
==============
_AD_Aligned_Malloc
==============
*/
void *(*_AD_Aligned_Malloc(const unsigned int count, const unsigned int alignment))(const unsigned int, const unsigned int)
{
  void *(__fastcall *result)(const unsigned int, const unsigned int); 

  result = s_externalMalloc;
  if ( s_externalMalloc )
    return (void *(__fastcall *)(const unsigned int, const unsigned int))result(count, alignment);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_memory.cpp", (_DWORD)s_externalMalloc + 23, ASSERT_TYPE_ASSERT, "s_externalMalloc != nullptr", "s_externalMalloc != nullptr") )
    __debugbreak();
  result = s_externalMalloc;
  if ( s_externalMalloc )
    return (void *(__fastcall *)(const unsigned int, const unsigned int))result(count, alignment);
  return result;
}

