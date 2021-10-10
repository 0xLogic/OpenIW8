/*
==============
R_RT_ESRAM_RecordAllocAttempt
==============
*/

void __fastcall R_RT_ESRAM_RecordAllocAttempt(unsigned __int8 allocatorIndex, unsigned int size, bool success)
{
  ?R_RT_ESRAM_RecordAllocAttempt@@YAXEI_N@Z(allocatorIndex, size, success);
}

/*
==============
R_RT_ESRAM_Startup
==============
*/

void R_RT_ESRAM_Startup(void)
{
  ?R_RT_ESRAM_Startup@@YAXXZ();
}

/*
==============
R_RT_ESRAM_FindOrAddAllocatorForPass
==============
*/

unsigned __int8 __fastcall R_RT_ESRAM_FindOrAddAllocatorForPass(unsigned __int16 pass)
{
  return ?R_RT_ESRAM_FindOrAddAllocatorForPass@@YAEG@Z(pass);
}

/*
==============
R_RT_ESRAM_Shutdown
==============
*/

void R_RT_ESRAM_Shutdown(void)
{
  ?R_RT_ESRAM_Shutdown@@YAXXZ();
}

/*
==============
R_RT_ESRAM_Alloc
==============
*/

void *__fastcall R_RT_ESRAM_Alloc(unsigned __int8 allocatorIndex, bool stackLocal, unsigned int size, const R_RT_Tracking_AllocContext *allocContext)
{
  return ?R_RT_ESRAM_Alloc@@YAPEAXE_NIAEBUR_RT_Tracking_AllocContext@@@Z(allocatorIndex, stackLocal, size, allocContext);
}

/*
==============
R_RT_ESRAM_BackendFrameEnd
==============
*/

void __fastcall R_RT_ESRAM_BackendFrameEnd(unsigned __int16 frontendFramePass, bool aborted)
{
  ?R_RT_ESRAM_BackendFrameEnd@@YAXG_N@Z(frontendFramePass, aborted);
}

/*
==============
R_RT_ESRAM_BackendFrameBegin
==============
*/

void R_RT_ESRAM_BackendFrameBegin(void)
{
  ?R_RT_ESRAM_BackendFrameBegin@@YAXXZ();
}

/*
==============
R_RT_ESRAM_FindAllocatorForPass
==============
*/

unsigned __int8 __fastcall R_RT_ESRAM_FindAllocatorForPass(unsigned __int16 pass)
{
  return ?R_RT_ESRAM_FindAllocatorForPass@@YAEG@Z(pass);
}

/*
==============
R_RT_ESRAM_BackendPassBegin
==============
*/

void __fastcall R_RT_ESRAM_BackendPassBegin(unsigned __int16 __formal)
{
  ?R_RT_ESRAM_BackendPassBegin@@YAXG@Z(__formal);
}

/*
==============
R_RT_ESRAM_GetFrameTotals
==============
*/

void __fastcall R_RT_ESRAM_GetFrameTotals(R_RT_Tracking_ESRAMFrameTotals *outFrameTotals)
{
  ?R_RT_ESRAM_GetFrameTotals@@YAXPEAUR_RT_Tracking_ESRAMFrameTotals@@@Z(outFrameTotals);
}

/*
==============
R_RT_ESRAM_BackendPassEnd
==============
*/

void __fastcall R_RT_ESRAM_BackendPassEnd(unsigned __int16 pass)
{
  ?R_RT_ESRAM_BackendPassEnd@@YAXG@Z(pass);
}

/*
==============
R_RT_ESRAM_Free
==============
*/

void __fastcall R_RT_ESRAM_Free(unsigned __int8 allocatorIndex, void *mem, unsigned int size)
{
  ?R_RT_ESRAM_Free@@YAXEPEAXI@Z(allocatorIndex, mem, size);
}

/*
==============
R_RT_ESRAM_AddRecord
==============
*/
void R_RT_ESRAM_AddRecord(R_RT_ESRAM_Range *range, const void *address, unsigned int size, const R_RT_Tracking_AllocContext *allocContext)
{
  __int64 m_recordCount; 
  unsigned __int16 m_surfaceID; 
  R_RT_Tracking_AllocRecord *v10; 
  const char *m_name; 

  m_recordCount = range->m_recordCount;
  if ( (unsigned int)m_recordCount >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 106, ASSERT_TYPE_ASSERT, "(recordIndex < ( sizeof( *array_counter( range->m_records ) ) + 0 ))", (const char *)&queryFormat, "recordIndex < ARRAY_COUNT( range->m_records )") )
    __debugbreak();
  m_surfaceID = allocContext->m_surfaceID;
  v10 = &range->m_records[m_recordCount];
  m_name = allocContext->m_name;
  v10->m_location = allocContext->m_location;
  v10->m_name = m_name;
  v10->m_address = address;
  v10->m_size = size;
  v10->m_surfaceID = m_surfaceID;
  range->m_recordCount = truncate_cast<unsigned short,unsigned int>(m_recordCount + 1);
}

/*
==============
R_RT_ESRAM_Alloc
==============
*/
unsigned __int8 *R_RT_ESRAM_Alloc(unsigned __int8 allocatorIndex, bool stackLocal, unsigned int size, const R_RT_Tracking_AllocContext *allocContext)
{
  R_RT_ESRAM_Allocator *v7; 
  unsigned int v8; 
  bool i; 
  R_RT_ESRAM_Range *v10; 
  __int64 m_heapFreeSlotCount; 
  R_RT_ESRAM_HeapFreeSlot *m_heapFreeSlots; 
  __int64 v13; 
  unsigned __int64 *p_m_sizeAndPos; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned __int64 *v17; 
  unsigned int m_top; 
  unsigned int v19; 
  unsigned __int8 *v20; 
  unsigned __int8 *m_base; 

  if ( !s_R_RT_ESRAM_Internal.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 247, ASSERT_TYPE_ASSERT, "(s_R_RT_ESRAM_Internal.m_startuped)", (const char *)&queryFormat, "s_R_RT_ESRAM_Internal.m_startuped") )
    __debugbreak();
  if ( allocatorIndex >= 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 249, ASSERT_TYPE_ASSERT, "(allocatorIndex < ( sizeof( *array_counter( s_R_RT_ESRAM_Internal.m_allocators ) ) + 0 ))", (const char *)&queryFormat, "allocatorIndex < ARRAY_COUNT( s_R_RT_ESRAM_Internal.m_allocators )") )
    __debugbreak();
  v7 = &s_R_RT_ESRAM_Internal.m_allocators[allocatorIndex];
  if ( !v7->m_pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 251, ASSERT_TYPE_ASSERT, "(allocator->m_pass != g_R_RT_Pass_null)", (const char *)&queryFormat, "allocator->m_pass != g_R_RT_Pass_null") )
    __debugbreak();
  v8 = (size + 0xFFFF) & 0xFFFF0000;
  m_base = g_R_RT_ESRAM.m_base;
  for ( i = !stackLocal; ; i = 1 )
  {
    v10 = &v7->m_ranges[i];
    if ( i )
    {
      m_heapFreeSlotCount = v7->m_heapFreeSlotCount;
      if ( v7->m_heapFreeSlotCount )
      {
        m_heapFreeSlots = v7->m_heapFreeSlots;
        v13 = (__int64)&v7->m_heapFreeSlots[m_heapFreeSlotCount];
        p_m_sizeAndPos = NULL;
        if ( v7->m_heapFreeSlots != (R_RT_ESRAM_HeapFreeSlot *)v13 )
        {
          do
          {
            if ( m_heapFreeSlots->m_sizeAndPos >= (unsigned __int64)v8 << 32 && (!p_m_sizeAndPos || m_heapFreeSlots->m_sizeAndPos < *p_m_sizeAndPos) )
              p_m_sizeAndPos = &m_heapFreeSlots->m_sizeAndPos;
            ++m_heapFreeSlots;
          }
          while ( m_heapFreeSlots != (R_RT_ESRAM_HeapFreeSlot *)v13 );
          if ( p_m_sizeAndPos )
          {
            v15 = *p_m_sizeAndPos;
            v16 = HIDWORD(*p_m_sizeAndPos) - v8;
            if ( v16 )
            {
              *p_m_sizeAndPos = ((unsigned __int64)v16 << 32) | ((unsigned int)v15 + v8);
            }
            else
            {
              v17 = (unsigned __int64 *)(v13 - 8);
              if ( p_m_sizeAndPos != (unsigned __int64 *)(v13 - 8) )
                *p_m_sizeAndPos = *v17;
              DebugWipe(v17, 8ui64);
              truncate_store<unsigned char,unsigned int>(&v7->m_heapFreeSlotCount, m_heapFreeSlotCount - 1);
            }
            if ( (v15 & 0x80000000) == 0i64 )
            {
              v20 = &m_base[0x2000000 - (_DWORD)v15 - v8];
              R_RT_ESRAM_AddRecord(v10, v20, v8, allocContext);
              return v20;
            }
          }
        }
      }
    }
    m_top = v10->m_top;
    v19 = v10->m_top + v8;
    if ( v19 <= 0x2000000 - v7->m_ranges[!i].m_top )
      break;
    if ( i )
      return 0i64;
  }
  if ( i )
    m_top = 0x2000000 - v19;
  v20 = &m_base[m_top];
  R_RT_ESRAM_AddRecord(v10, v20, v8, allocContext);
  v10->m_top = v19;
  return v20;
}

/*
==============
R_RT_ESRAM_AssertEmptyAllocator
==============
*/
void R_RT_ESRAM_AssertEmptyAllocator(const R_RT_ESRAM_Allocator *allocator)
{
  R_RT_ESRAM_Range *m_ranges; 
  R_RT_ESRAM_HeapFreeSlot *i; 

  if ( allocator->m_heapFreeSlotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 365, ASSERT_TYPE_ASSERT, "(allocator->m_heapFreeSlotCount == 0)", (const char *)&queryFormat, "allocator->m_heapFreeSlotCount == 0") )
    __debugbreak();
  m_ranges = allocator->m_ranges;
  for ( i = allocator->m_heapFreeSlots; m_ranges != (R_RT_ESRAM_Range *)i; ++m_ranges )
  {
    if ( m_ranges->m_top && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 368, ASSERT_TYPE_ASSERT, "(range->m_top == 0)", (const char *)&queryFormat, "range->m_top == 0") )
      __debugbreak();
    if ( m_ranges->m_recordCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 369, ASSERT_TYPE_ASSERT, "(range->m_recordCount == 0)", (const char *)&queryFormat, "range->m_recordCount == 0") )
        __debugbreak();
    }
  }
}

/*
==============
R_RT_ESRAM_BackendFrameBegin
==============
*/
void R_RT_ESRAM_BackendFrameBegin(void)
{
  *(_QWORD *)&s_R_RT_ESRAM_Internal.m_frameTotals.m_requestKB = 0i64;
  *(_QWORD *)&s_R_RT_ESRAM_Internal.m_frameTotals.m_requests = 0i64;
}

/*
==============
R_RT_ESRAM_BackendFrameEnd
==============
*/
void R_RT_ESRAM_BackendFrameEnd(unsigned __int16 frontendFramePass, bool aborted)
{
  R_RT_ESRAM_Allocator *m_allocators; 
  R_RT_ESRAM_Allocator *v4; 
  unsigned __int16 m_pass; 
  __int16 v6; 

  m_allocators = s_R_RT_ESRAM_Internal.m_allocators;
  if ( aborted )
  {
    v4 = s_R_RT_ESRAM_Internal.m_allocators;
    do
    {
      m_pass = v4->m_pass;
      if ( v4->m_pass )
      {
        if ( (m_pass & 0xFFF) == 4095 || (v6 = -1, (frontendFramePass & 0xFFF) == 4095) )
          v6 = -4096;
        if ( (unsigned __int16)(v6 & m_pass) == (unsigned __int16)(v6 & frontendFramePass) )
        {
          R_RT_ESRAM_AssertEmptyAllocator(v4);
          v4->m_pass = 0;
        }
      }
      ++v4;
    }
    while ( v4 != (R_RT_ESRAM_Allocator *)&s_R_RT_ESRAM_Internal.m_frameTotals );
  }
  do
  {
    if ( m_allocators->m_pass && R_RT_MatchPasses(m_allocators->m_pass, frontendFramePass) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 397, ASSERT_TYPE_ASSERT, "(!R_RT_MatchPasses( allocatorPass, frontendFramePass ))", (const char *)&queryFormat, "!R_RT_MatchPasses( allocatorPass, frontendFramePass )") )
      __debugbreak();
    ++m_allocators;
  }
  while ( m_allocators != (R_RT_ESRAM_Allocator *)&s_R_RT_ESRAM_Internal.m_frameTotals );
}

/*
==============
R_RT_ESRAM_BackendPassBegin
==============
*/
void R_RT_ESRAM_BackendPassBegin(unsigned __int16 __formal)
{
  ;
}

/*
==============
R_RT_ESRAM_BackendPassEnd
==============
*/
void R_RT_ESRAM_BackendPassEnd(unsigned __int16 pass)
{
  R_RT_ESRAM_Allocator *m_allocators; 

  if ( !pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 411, ASSERT_TYPE_ASSERT, "(pass)", (const char *)&queryFormat, "pass") )
    __debugbreak();
  if ( (pass & 0xFFF) == 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 412, ASSERT_TYPE_ASSERT, "(!R_RT_IsFramePass( pass ))", (const char *)&queryFormat, "!R_RT_IsFramePass( pass )") )
    __debugbreak();
  m_allocators = s_R_RT_ESRAM_Internal.m_allocators;
  while ( m_allocators->m_pass != pass )
  {
    if ( ++m_allocators == (R_RT_ESRAM_Allocator *)&s_R_RT_ESRAM_Internal.m_frameTotals )
      return;
  }
  s_R_RT_ESRAM_Internal.m_frameTotals.m_requestKB += m_allocators->m_frameTotals.m_requestKB;
  s_R_RT_ESRAM_Internal.m_frameTotals.m_successKB += m_allocators->m_frameTotals.m_successKB;
  s_R_RT_ESRAM_Internal.m_frameTotals.m_requests += m_allocators->m_frameTotals.m_requests;
  s_R_RT_ESRAM_Internal.m_frameTotals.m_successes += m_allocators->m_frameTotals.m_successes;
  R_RT_ESRAM_AssertEmptyAllocator(m_allocators);
  m_allocators->m_pass = 0;
}

/*
==============
R_RT_ESRAM_FindAllocatorForPass
==============
*/
unsigned __int8 R_RT_ESRAM_FindAllocatorForPass(unsigned __int16 pass)
{
  R_RT_ESRAM_Allocator *i; 

  if ( !pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 151, ASSERT_TYPE_ASSERT, "(pass)", (const char *)&queryFormat, "pass") )
    __debugbreak();
  if ( (pass & 0xFFF) == 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 152, ASSERT_TYPE_ASSERT, "(!R_RT_IsFramePass( pass ))", (const char *)&queryFormat, "!R_RT_IsFramePass( pass )") )
    __debugbreak();
  for ( i = s_R_RT_ESRAM_Internal.m_allocators; ; ++i )
  {
    if ( i == (R_RT_ESRAM_Allocator *)&s_R_RT_ESRAM_Internal.m_frameTotals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 155, ASSERT_TYPE_ASSERT, "(allocator != s_R_RT_ESRAM_Internal.m_allocators + ( sizeof( *array_counter( s_R_RT_ESRAM_Internal.m_allocators ) ) + 0 ))", (const char *)&queryFormat, "allocator != s_R_RT_ESRAM_Internal.m_allocators + ARRAY_COUNT( s_R_RT_ESRAM_Internal.m_allocators )") )
      __debugbreak();
    if ( i->m_pass == pass )
      break;
  }
  return truncate_cast<unsigned char,__int64>(i - s_R_RT_ESRAM_Internal.m_allocators);
}

/*
==============
R_RT_ESRAM_FindOrAddAllocatorForPass
==============
*/
unsigned __int8 R_RT_ESRAM_FindOrAddAllocatorForPass(unsigned __int16 pass)
{
  R_RT_ESRAM_Internal *v2; 
  R_RT_ESRAM_Internal *m_allocators; 
  R_RT_ESRAM_Allocator *i; 

  if ( !pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 117, ASSERT_TYPE_ASSERT, "(pass)", (const char *)&queryFormat, "pass") )
    __debugbreak();
  if ( (pass & 0xFFF) == 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 118, ASSERT_TYPE_ASSERT, "(!R_RT_IsFramePass( pass ))", (const char *)&queryFormat, "!R_RT_IsFramePass( pass )") )
    __debugbreak();
  v2 = NULL;
  m_allocators = (R_RT_ESRAM_Internal *)s_R_RT_ESRAM_Internal.m_allocators;
  do
  {
    if ( *(_WORD *)&m_allocators->m_startuped == pass )
      return truncate_cast<unsigned char,__int64>(((char *)m_allocators - (char *)s_R_RT_ESRAM_Internal.m_allocators) / 2344);
    if ( !v2 && !*(_WORD *)&m_allocators->m_startuped )
      v2 = m_allocators;
    m_allocators = (R_RT_ESRAM_Internal *)((char *)m_allocators + 2344);
  }
  while ( m_allocators != (R_RT_ESRAM_Internal *)&s_R_RT_ESRAM_Internal.m_frameTotals );
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 130, ASSERT_TYPE_ASSERT, "(inactiveAllocator)", "%s\n\tToo many active passes (limit=%d)", "inactiveAllocator", 16i64) )
    __debugbreak();
  if ( *(&v2->m_startuped + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 134, ASSERT_TYPE_ASSERT, "(inactiveAllocator->m_heapFreeSlotCount == 0)", (const char *)&queryFormat, "inactiveAllocator->m_heapFreeSlotCount == 0") )
    __debugbreak();
  for ( i = v2->m_allocators; i != (R_RT_ESRAM_Allocator *)&v2->m_allocators[0].m_ranges[1].m_records[31].m_size; i = (R_RT_ESRAM_Allocator *)((char *)i + 1032) )
  {
    if ( *(_DWORD *)&i->m_pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 137, ASSERT_TYPE_ASSERT, "(range->m_top == 0)", (const char *)&queryFormat, "range->m_top == 0") )
      __debugbreak();
    if ( *((_WORD *)&i->m_heapFreeSlotCount + 1) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 138, ASSERT_TYPE_ASSERT, "(range->m_recordCount == 0)", (const char *)&queryFormat, "range->m_recordCount == 0") )
        __debugbreak();
    }
  }
  *(_WORD *)&v2->m_startuped = pass;
  v2->m_allocators[0].m_heapFreeSlots[31].m_sizeAndPos = 0i64;
  *(_QWORD *)&v2->m_allocators[0].m_frameTotals.m_requestKB = 0i64;
  return truncate_cast<unsigned char,__int64>(((char *)v2 - (char *)s_R_RT_ESRAM_Internal.m_allocators) / 2344);
}

/*
==============
R_RT_ESRAM_Free
==============
*/
void R_RT_ESRAM_Free(unsigned __int8 allocatorIndex, void *mem, unsigned int size)
{
  R_RT_ESRAM_Allocator *v6; 
  __int64 v7; 
  char *v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  R_RT_Tracking_AllocRecord *v15; 
  int v16; 
  unsigned int v17; 
  unsigned __int8 v18; 
  unsigned int *p_m_size; 
  unsigned int *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  void *Src; 
  __int64 v26; 
  unsigned __int64 m_top; 
  unsigned __int8 *m_base; 
  R_RT_Tracking_AllocRecord *__formal; 
  unsigned int v30; 
  int v31; 
  R_RT_Tracking_AllocRecord *v32; 

  if ( !s_R_RT_ESRAM_Internal.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 300, ASSERT_TYPE_ASSERT, "(s_R_RT_ESRAM_Internal.m_startuped)", (const char *)&queryFormat, "s_R_RT_ESRAM_Internal.m_startuped") )
    __debugbreak();
  if ( !mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 301, ASSERT_TYPE_ASSERT, "(mem)", (const char *)&queryFormat, "mem") )
    __debugbreak();
  if ( allocatorIndex >= 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 303, ASSERT_TYPE_ASSERT, "(allocatorIndex < ( sizeof( *array_counter( s_R_RT_ESRAM_Internal.m_allocators ) ) + 0 ))", (const char *)&queryFormat, "allocatorIndex < ARRAY_COUNT( s_R_RT_ESRAM_Internal.m_allocators )") )
    __debugbreak();
  v6 = &s_R_RT_ESRAM_Internal.m_allocators[allocatorIndex];
  v32 = (R_RT_Tracking_AllocRecord *)v6;
  if ( !v6->m_pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 305, ASSERT_TYPE_ASSERT, "(allocator->m_pass != g_R_RT_Pass_null)", (const char *)&queryFormat, "allocator->m_pass != g_R_RT_Pass_null") )
    __debugbreak();
  m_base = g_R_RT_ESRAM.m_base;
  v24 = (_BYTE *)mem - g_R_RT_ESRAM.m_base;
  v7 = 8i64;
  m_top = v6->m_ranges[0].m_top;
  if ( (_BYTE *)mem - g_R_RT_ESRAM.m_base >= m_top )
    v7 = 1040i64;
  v8 = (char *)v6 + v7;
  v9 = (size + 0xFFFF) & 0xFFFF0000;
  v10 = *(_DWORD *)v8;
  v30 = v10;
  if ( v10 < v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 315, ASSERT_TYPE_ASSERT, "(oldTop >= alignedSize)", "%s\n\toldTop=%d, alignedSize=%d", "oldTop >= alignedSize", v10, v9) )
    __debugbreak();
  v11 = v10;
  v12 = *((unsigned __int16 *)v8 + 2);
  v13 = v11 - v9;
  v31 = v12;
  if ( !(_DWORD)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 321, ASSERT_TYPE_ASSERT, "(oldRecordCount > 0)", (const char *)&queryFormat, "oldRecordCount > 0") )
    __debugbreak();
  v14 = (__int64)&v8[32 * v12 + 8];
  v26 = v14;
  do
  {
    Src = (void *)v14;
    if ( (char *)v14 == v8 + 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 326, ASSERT_TYPE_ASSERT, "(freeRecord != range->m_records)", "%s\n\tMissing allocation record freeing 0x%p", "freeRecord != range->m_records", mem) )
      __debugbreak();
    v14 -= 32i64;
  }
  while ( *(void **)(v14 + 16) != mem );
  v15 = v32;
  if ( *(_DWORD *)(v14 + 24) != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 329, ASSERT_TYPE_ASSERT, "(freeRecord->m_size == alignedSize)", (const char *)&queryFormat, "freeRecord->m_size == alignedSize") )
    __debugbreak();
  std::_Ptr_copy_cat<R_RT_Tracking_AllocRecord,R_RT_Tracking_AllocRecord>(&__formal, &v32);
  memmove_0((void *)v14, Src, v26 - (_QWORD)Src);
  v16 = v31 - 1;
  *((_WORD *)v8 + 2) = truncate_cast<unsigned short,unsigned int>(v31 - 1);
  DebugWipe(&v8[32 * v16 + 8], 0x20ui64);
  v17 = v13;
  if ( v24 >= m_top )
    v17 = 0x2000000 - v30;
  if ( v17 == v24 )
  {
    if ( v24 >= m_top )
    {
      v18 = BYTE2(v15->m_name);
      if ( v18 )
      {
        p_m_size = &v15[64].m_size;
        v20 = &v15[64].m_size + 2 * v18;
        if ( &v15[64].m_size != v20 )
        {
          do
          {
            v21 = *(_QWORD *)p_m_size;
            if ( v13 == (unsigned int)*(_QWORD *)p_m_size + HIDWORD(*(_QWORD *)p_m_size) )
            {
              v20 -= 2;
              if ( p_m_size != v20 )
                *(_QWORD *)p_m_size = *(_QWORD *)v20;
              DebugWipe(v20, 8ui64);
              p_m_size = &v15[64].m_size;
              v13 = v21;
            }
            else
            {
              p_m_size += 2;
            }
          }
          while ( p_m_size != v20 );
        }
        BYTE2(v15->m_name) = truncate_cast<unsigned char,__int64>(((char *)v20 - (char *)&v15[64].m_size) >> 3);
      }
    }
    *(_DWORD *)v8 = v13;
  }
  else
  {
    if ( v24 < m_top )
    {
      LODWORD(v23) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 345, ASSERT_TYPE_ASSERT, "(direction == R_RT_Direction_Reverse)", "%s\n\tdirection=forward, freeOffset=%d, memOffset=%d, base=0x%p, mem=0x%p, newTop=%d, alignedSize=%d", "direction == R_RT_Direction_Reverse", v23, v24, m_base, mem, v13, v9) )
        __debugbreak();
    }
    v22 = BYTE2(v15->m_name);
    if ( (unsigned int)v22 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 347, ASSERT_TYPE_ASSERT, "(heapFreeSlotIndex < ( sizeof( *array_counter( allocator->m_heapFreeSlots ) ) + 0 ))", (const char *)&queryFormat, "heapFreeSlotIndex < ARRAY_COUNT( allocator->m_heapFreeSlots )") )
      __debugbreak();
    truncate_store<unsigned char,unsigned int>((unsigned __int8 *)&v15->m_name + 2, v22 + 1);
    *((_QWORD *)&v15[64].m_size + v22) = ((unsigned __int64)v9 << 32) | (0x2000000 - (_DWORD)v24 - v9);
  }
}

/*
==============
R_RT_ESRAM_GetFrameTotals
==============
*/
void R_RT_ESRAM_GetFrameTotals(R_RT_Tracking_ESRAMFrameTotals *outFrameTotals)
{
  *outFrameTotals = s_R_RT_ESRAM_Internal.m_frameTotals;
}

/*
==============
R_RT_ESRAM_RecordAllocAttempt
==============
*/
void R_RT_ESRAM_RecordAllocAttempt(unsigned __int8 allocatorIndex, unsigned int size, bool success)
{
  R_RT_ESRAM_Allocator *v6; 
  unsigned int v7; 

  if ( allocatorIndex >= 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 431, ASSERT_TYPE_ASSERT, "(allocatorIndex < ( sizeof( *array_counter( s_R_RT_ESRAM_Internal.m_allocators ) ) + 0 ))", (const char *)&queryFormat, "allocatorIndex < ARRAY_COUNT( s_R_RT_ESRAM_Internal.m_allocators )") )
    __debugbreak();
  v6 = &s_R_RT_ESRAM_Internal.m_allocators[allocatorIndex];
  if ( !v6->m_pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 433, ASSERT_TYPE_ASSERT, "(allocator->m_pass != g_R_RT_Pass_null)", (const char *)&queryFormat, "allocator->m_pass != g_R_RT_Pass_null") )
    __debugbreak();
  ++v6->m_frameTotals.m_requests;
  v7 = size >> 10;
  v6->m_frameTotals.m_requestKB += v7;
  if ( success )
  {
    v6->m_frameTotals.m_successKB += v7;
    ++v6->m_frameTotals.m_successes;
  }
}

/*
==============
R_RT_ESRAM_Shutdown
==============
*/
void R_RT_ESRAM_Shutdown(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 86, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
  {
    if ( !s_R_RT_ESRAM_Internal.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 89, ASSERT_TYPE_ASSERT, "(s_R_RT_ESRAM_Internal.m_startuped)", (const char *)&queryFormat, "s_R_RT_ESRAM_Internal.m_startuped") )
      __debugbreak();
    g_R_RT_ESRAM.m_base = NULL;
    s_R_RT_ESRAM_Internal.m_startuped = 0;
  }
  else
  {
    if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 95, ASSERT_TYPE_ASSERT, "(Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO)", (const char *)&queryFormat, "Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO") )
      __debugbreak();
    if ( g_R_RT_ESRAM.m_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 96, ASSERT_TYPE_ASSERT, "(!R_RT_ESRAM_IsEnabled())", (const char *)&queryFormat, "!R_RT_ESRAM_IsEnabled()") )
      __debugbreak();
  }
}

/*
==============
R_RT_ESRAM_Startup
==============
*/
void R_RT_ESRAM_Startup(void)
{
  R_RT_ESRAM_HeapFreeSlot *m_heapFreeSlots; 
  R_RT_ESRAM_HeapFreeSlot *v1; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 62, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_R_RT_ESRAM_Internal.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 63, ASSERT_TYPE_ASSERT, "(!s_R_RT_ESRAM_Internal.m_startuped)", (const char *)&queryFormat, "!s_R_RT_ESRAM_Internal.m_startuped") )
    __debugbreak();
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
  {
    if ( g_R_RT_surfaceMemoryAlignMin > 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 66, ASSERT_TYPE_ASSERT, "(g_R_RT_ESRAM_align >= g_R_RT_surfaceMemoryAlignMin)", (const char *)&queryFormat, "g_R_RT_ESRAM_align >= g_R_RT_surfaceMemoryAlignMin") )
      __debugbreak();
    s_R_RT_ESRAM_Internal.m_startuped = 1;
    g_R_RT_ESRAM.m_base = (unsigned __int8 *)Mem_ESRAM_GetBase();
    m_heapFreeSlots = s_R_RT_ESRAM_Internal.m_allocators[0].m_heapFreeSlots;
    do
    {
      v1 = m_heapFreeSlots - 258;
      LOWORD(m_heapFreeSlots[-259].m_sizeAndPos) = 0;
      for ( BYTE2(m_heapFreeSlots[-259].m_sizeAndPos) = 0; v1 != m_heapFreeSlots; v1 += 129 )
      {
        LODWORD(v1->m_sizeAndPos) = 0;
        WORD2(v1->m_sizeAndPos) = 0;
        DebugWipe(&v1[1], 0x400ui64);
      }
      DebugWipe(m_heapFreeSlots, 0x100ui64);
      m_heapFreeSlots += 293;
    }
    while ( &m_heapFreeSlots[-259] != (R_RT_ESRAM_HeapFreeSlot *)&s_R_RT_ESRAM_Internal.m_frameTotals );
    Com_Printf(8, "R_RT_ESRAM: Reserved %dMB, 0x%016llx - 0x%016llx\n", 32i64, g_R_RT_ESRAM.m_base, g_R_RT_ESRAM.m_base + 0x2000000);
  }
  else
  {
    if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 77, ASSERT_TYPE_ASSERT, "(Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO)", (const char *)&queryFormat, "Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO") )
      __debugbreak();
    if ( g_R_RT_ESRAM.m_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 78, ASSERT_TYPE_ASSERT, "(!R_RT_ESRAM_IsEnabled())", (const char *)&queryFormat, "!R_RT_ESRAM_IsEnabled()") )
      __debugbreak();
    Com_Printf(8, "R_RT_ESRAM: Skipping Reserve for Scorpio.\n");
  }
}

