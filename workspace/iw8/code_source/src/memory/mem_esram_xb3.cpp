/*
==============
Mem_ESRAM_UsingPoolAllocations
==============
*/

bool __fastcall Mem_ESRAM_UsingPoolAllocations()
{
  return ?Mem_ESRAM_UsingPoolAllocations@@YA_NXZ();
}

/*
==============
Mem_ESRAM_GetTop
==============
*/

unsigned int __fastcall Mem_ESRAM_GetTop(unsigned int poolIndex)
{
  return ?Mem_ESRAM_GetTop@@YAII@Z(poolIndex);
}

/*
==============
Mem_ESRAM_SetTop
==============
*/

void __fastcall Mem_ESRAM_SetTop(unsigned int top, unsigned int poolIndex)
{
  ?Mem_ESRAM_SetTop@@YAXII@Z(top, poolIndex);
}

/*
==============
Mem_ESRAM_Init
==============
*/

void Mem_ESRAM_Init(void)
{
  ?Mem_ESRAM_Init@@YAXXZ();
}

/*
==============
Mem_ESRAM_BeginPoolAllocations
==============
*/

void Mem_ESRAM_BeginPoolAllocations(void)
{
  ?Mem_ESRAM_BeginPoolAllocations@@YAXXZ();
}

/*
==============
Mem_ESRAM_Alloc
==============
*/

unsigned int __fastcall Mem_ESRAM_Alloc(unsigned int size, unsigned int alignment, unsigned int poolIndex)
{
  return ?Mem_ESRAM_Alloc@@YAIIII@Z(size, alignment, poolIndex);
}

/*
==============
Mem_ESRAM_GetBase
==============
*/

void *__fastcall Mem_ESRAM_GetBase()
{
  return ?Mem_ESRAM_GetBase@@YAPEAXXZ();
}

/*
==============
Mem_ESRAM_Alloc
==============
*/
__int64 Mem_ESRAM_Alloc(unsigned int size, unsigned int alignment, unsigned int poolIndex)
{
  __int64 v3; 
  unsigned int *v6; 
  unsigned int v7; 
  unsigned int v8; 

  v3 = poolIndex;
  if ( poolIndex >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_esram_xb3.cpp", 69, ASSERT_TYPE_ASSERT, "(poolIndex < ESRAM_POOL_COUNT)", (const char *)&queryFormat, "poolIndex < ESRAM_POOL_COUNT") )
    __debugbreak();
  if ( (_DWORD)v3 && g_esramPos[v3] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_esram_xb3.cpp", 70, ASSERT_TYPE_ASSERT, "(poolIndex == 0 || g_esramPos[poolIndex] != 0xffffffff)", (const char *)&queryFormat, "poolIndex == 0 || g_esramPos[poolIndex] != UINT_MAX") )
    __debugbreak();
  v6 = &g_esramPos[v3];
  v7 = 4096;
  if ( alignment >= 0x1000 )
    v7 = alignment;
  v8 = -v7 & (g_esramPos[v3] + v7 - 1);
  *v6 = v8 + size;
  if ( v8 + size > 0x2000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_esram_xb3.cpp", 75, ASSERT_TYPE_ASSERT, "(g_esramPos[poolIndex] <= ESRAM_MEMORY_SIZE)", (const char *)&queryFormat, "g_esramPos[poolIndex] <= ESRAM_MEMORY_SIZE") )
    __debugbreak();
  return v8;
}

/*
==============
Mem_ESRAM_BeginPoolAllocations
==============
*/
void Mem_ESRAM_BeginPoolAllocations(void)
{
  if ( g_esramPos[1] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_esram_xb3.cpp", 59, ASSERT_TYPE_ASSERT, "(g_esramPos[poolIndex] == 0xffffffff)", (const char *)&queryFormat, "g_esramPos[poolIndex] == UINT_MAX") )
    __debugbreak();
  g_esramPos[1] = g_esramPos[0];
}

/*
==============
Mem_ESRAM_GetBase
==============
*/
void *Mem_ESRAM_GetBase()
{
  return g_esramBase;
}

/*
==============
Mem_ESRAM_GetTop
==============
*/
__int64 Mem_ESRAM_GetTop(unsigned int poolIndex)
{
  __int64 v1; 

  v1 = poolIndex;
  if ( poolIndex >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_esram_xb3.cpp", 89, ASSERT_TYPE_ASSERT, "(poolIndex < ESRAM_POOL_COUNT)", (const char *)&queryFormat, "poolIndex < ESRAM_POOL_COUNT") )
    __debugbreak();
  if ( (_DWORD)v1 && g_esramPos[v1] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_esram_xb3.cpp", 90, ASSERT_TYPE_ASSERT, "(poolIndex == 0 || g_esramPos[poolIndex] != 0xffffffff)", (const char *)&queryFormat, "poolIndex == 0 || g_esramPos[poolIndex] != UINT_MAX") )
    __debugbreak();
  return g_esramPos[v1];
}

/*
==============
Mem_ESRAM_Init
==============
*/
void Mem_ESRAM_Init(void)
{
  void *v0; 
  __int64 i; 

  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
  {
    g_esramBase = VirtualAlloc(NULL, 0x2000000ui64, 0x90002000, 4u);
    v0 = g_esramBase;
    if ( ((unsigned __int64)g_esramBase & 0x3FFFFF) != 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_esram_xb3.cpp", 32, ASSERT_TYPE_ASSERT, "(IsAligned( reinterpret_cast<uintptr_t>( g_esramBase ), ESRAM_MEMORY_ALIGN ))", (const char *)&queryFormat, "IsAligned( reinterpret_cast<uintptr_t>( g_esramBase ), ESRAM_MEMORY_ALIGN )") )
        __debugbreak();
      v0 = g_esramBase;
    }
    for ( i = 0i64; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
      g_esramPages[i] = i;
    D3DMapEsramMemory_0(2i64, v0, 8i64, g_esramPages);
  }
}

/*
==============
Mem_ESRAM_SetTop
==============
*/
void Mem_ESRAM_SetTop(unsigned int top, unsigned int poolIndex)
{
  __int64 v2; 

  v2 = poolIndex;
  if ( top > 0x2000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_esram_xb3.cpp", 98, ASSERT_TYPE_ASSERT, "(top <= ESRAM_MEMORY_SIZE)", (const char *)&queryFormat, "top <= ESRAM_MEMORY_SIZE") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_esram_xb3.cpp", 99, ASSERT_TYPE_ASSERT, "(poolIndex < ESRAM_POOL_COUNT)", (const char *)&queryFormat, "poolIndex < ESRAM_POOL_COUNT") )
    __debugbreak();
  if ( (_DWORD)v2 && g_esramPos[v2] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_esram_xb3.cpp", 100, ASSERT_TYPE_ASSERT, "(poolIndex == 0 || g_esramPos[poolIndex] != 0xffffffff)", (const char *)&queryFormat, "poolIndex == 0 || g_esramPos[poolIndex] != UINT_MAX") )
    __debugbreak();
  g_esramPos[v2] = top;
}

/*
==============
Mem_ESRAM_UsingPoolAllocations
==============
*/
bool Mem_ESRAM_UsingPoolAllocations()
{
  return g_esramPos[1] != -1;
}

