/*
==============
R_DebugFreeAll
==============
*/

void R_DebugFreeAll(void)
{
  ?R_DebugFreeAll@@YAXXZ();
}

/*
==============
R_IsAllocatingDebugLines
==============
*/

bool __fastcall R_IsAllocatingDebugLines()
{
  return ?R_IsAllocatingDebugLines@@YA_NXZ();
}

/*
==============
R_DebugFree
==============
*/

void __fastcall R_DebugFree(void **dataPtr)
{
  ?R_DebugFree@@YAXPEAPEAX@Z(dataPtr);
}

/*
==============
R_DebugAlloc
==============
*/

void __fastcall R_DebugAlloc(void **memPtr, int size, const char *name)
{
  ?R_DebugAlloc@@YAXPEAPEAXHPEBD@Z(memPtr, size, name);
}

/*
==============
R_DebugAlloc
==============
*/
void R_DebugAlloc(void **memPtr, int size, const char *name)
{
  unsigned __int64 v3; 

  v3 = size;
  if ( !memPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_debug_alloc.cpp", 17, ASSERT_TYPE_ASSERT, "(memPtr)", (const char *)&queryFormat, "memPtr") )
    __debugbreak();
  if ( *memPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_debug_alloc.cpp", 18, ASSERT_TYPE_ASSERT, "(!*memPtr)", (const char *)&queryFormat, "!*memPtr") )
    __debugbreak();
  if ( (int)v3 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_debug_alloc.cpp", 19, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( (v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_debug_alloc.cpp", 20, ASSERT_TYPE_ASSERT, "((size & 0x3) == 0)", (const char *)&queryFormat, "(size & 0x3) == 0") )
    __debugbreak();
  if ( ((unsigned __int8)&s_inDebugAlloc & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_inDebugAlloc) )
    __debugbreak();
  if ( _InterlockedAdd(&s_inDebugAlloc, 1u) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_debug_alloc.cpp", 22, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &s_inDebugAlloc ) > 0)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &s_inDebugAlloc ) > 0") )
    __debugbreak();
  *memPtr = Mem_Virtual_TryAlloc(v3, name, TRACK_DEBUG);
  if ( ((unsigned __int64)&s_inDebugAlloc & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_inDebugAlloc) )
    __debugbreak();
  if ( _InterlockedDecrement(&s_inDebugAlloc) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_debug_alloc.cpp", 26, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &s_inDebugAlloc ) >= 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &s_inDebugAlloc ) >= 0") )
    __debugbreak();
  if ( !*memPtr )
    R_WarnOncePerFrame(R_WARN_DEBUG_ALLOC, name);
}

/*
==============
R_DebugFree
==============
*/
void R_DebugFree(void **dataPtr)
{
  void *v2; 

  v2 = *dataPtr;
  if ( v2 )
  {
    Mem_Virtual_Free(v2);
    *dataPtr = NULL;
  }
}

/*
==============
R_DebugFreeAll
==============
*/
void R_DebugFreeAll(void)
{
  ;
}

/*
==============
R_IsAllocatingDebugLines
==============
*/
bool R_IsAllocatingDebugLines()
{
  return s_inDebugAlloc != 0;
}

