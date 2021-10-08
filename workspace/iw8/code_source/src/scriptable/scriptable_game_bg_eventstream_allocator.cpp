/*
==============
Scriptable_Bg_EventStreamBuffer_GetNumPools
==============
*/

unsigned int __fastcall Scriptable_Bg_EventStreamBuffer_GetNumPools()
{
  return ?Scriptable_Bg_EventStreamBuffer_GetNumPools@@YAIXZ();
}

/*
==============
Scriptable_Bg_InitClientEventStream
==============
*/

void __fastcall Scriptable_Bg_InitClientEventStream(HunkUser *hunkUser, const int maxLocalClients, const int maxCharacters)
{
  ?Scriptable_Bg_InitClientEventStream@@YAXPEAUHunkUser@@HH@Z(hunkUser, maxLocalClients, maxCharacters);
}

/*
==============
Scriptable_Bg_EventStreamBuffer_GetPoolSizes
==============
*/

void __fastcall Scriptable_Bg_EventStreamBuffer_GetPoolSizes(bool server, LocalClientNum_t localClientNum, unsigned int poolId, unsigned int *elementSize, unsigned int *capacity, unsigned int *used)
{
  ?Scriptable_Bg_EventStreamBuffer_GetPoolSizes@@YAX_NW4LocalClientNum_t@@IAEAI22@Z(server, localClientNum, poolId, elementSize, capacity, used);
}

/*
==============
Scriptable_Bg_ReleaseEventStreamBuffer
==============
*/

void __fastcall Scriptable_Bg_ReleaseEventStreamBuffer(const bool isCharacterEntity, const bool server, LocalClientNum_t localClientNum, unsigned __int8 *buffer)
{
  ?Scriptable_Bg_ReleaseEventStreamBuffer@@YAX_N0W4LocalClientNum_t@@PEAE@Z(isCharacterEntity, server, localClientNum, buffer);
}

/*
==============
Scriptable_Bg_ShutdownClientEventStream
==============
*/

void Scriptable_Bg_ShutdownClientEventStream(void)
{
  ?Scriptable_Bg_ShutdownClientEventStream@@YAXXZ();
}

/*
==============
Scriptable_Bg_AllocateEventStreamBuffer
==============
*/

unsigned __int8 *__fastcall Scriptable_Bg_AllocateEventStreamBuffer(const bool isCharacterEntity, const bool server, LocalClientNum_t localClientNum, unsigned int size)
{
  return ?Scriptable_Bg_AllocateEventStreamBuffer@@YAPEAE_N0W4LocalClientNum_t@@I@Z(isCharacterEntity, server, localClientNum, size);
}

/*
==============
Scriptable_BG_EventStreamBuffer_GetCharacterPoolSize
==============
*/

void __fastcall Scriptable_BG_EventStreamBuffer_GetCharacterPoolSize(LocalClientNum_t localClientNum, unsigned int *elementSize, unsigned int *capacity, unsigned int *used)
{
  ?Scriptable_BG_EventStreamBuffer_GetCharacterPoolSize@@YAXW4LocalClientNum_t@@PEAI11@Z(localClientNum, elementSize, capacity, used);
}

/*
==============
Scriptable_BG_EventStreamBuffer_GetCharacterPoolSize
==============
*/
void Scriptable_BG_EventStreamBuffer_GetCharacterPoolSize(LocalClientNum_t localClientNum, unsigned int *elementSize, unsigned int *capacity, unsigned int *used)
{
  __int64 v4; 
  unsigned int v8; 
  __int64 v9; 

  v4 = localClientNum;
  if ( !elementSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_eventstream_allocator.cpp", 427, ASSERT_TYPE_ASSERT, "(elementSize)", (const char *)&queryFormat, "elementSize") )
    __debugbreak();
  if ( !capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_eventstream_allocator.cpp", 428, ASSERT_TYPE_ASSERT, "(capacity)", (const char *)&queryFormat, "capacity") )
    __debugbreak();
  if ( !used && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_eventstream_allocator.cpp", 429, ASSERT_TYPE_ASSERT, "(used)", (const char *)&queryFormat, "used") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_eventstream_allocator.cpp", 430, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cg_scriptableEventBuffer_CharacterAllocatorUsage ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cg_scriptableEventBuffer_CharacterAllocatorUsage )\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  v8 = s_cg_scriptableEventBuffer_CharacterAllocatorCapcity[v4];
  *elementSize = 1300;
  *capacity = v8;
  *used = s_cg_scriptableEventBuffer_CharacterAllocatorUsage[v4];
}

/*
==============
Scriptable_Bg_AllocateEventStreamBuffer
==============
*/
unsigned int *Scriptable_Bg_AllocateEventStreamBuffer(const bool isCharacterEntity, const bool server, LocalClientNum_t localClientNum, unsigned int size)
{
  __int64 v4; 
  ntl::internal::pool_allocator_freelist<1300> *v7; 
  unsigned int *result; 
  __int64 v9; 
  const unsigned int *i; 
  unsigned int *v11; 
  ntl::fixed_pool_allocator<unsigned char [4],2048,1> *v12; 
  unsigned int m_offset; 
  unsigned int *v14; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_freelist<64> *v16; 
  bool v17; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v18; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v19; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v20; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v21; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v22; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v23; 

  v4 = localClientNum;
  if ( !server && isCharacterEntity )
  {
    if ( size <= 0x514 )
    {
      ++s_cg_scriptableEventBuffer_CharacterAllocatorUsage[localClientNum];
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_eventstream_allocator.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cg_scriptableEventBuffer_CharacterAllocator ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cg_scriptableEventBuffer_CharacterAllocator )\n\t%i not in [0, %i)", localClientNum, 2) )
        __debugbreak();
      v7 = &s_cg_scriptableEventBuffer_CharacterAllocator[0].m_freelist + 5 * v4;
      if ( !v7->m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v7->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<1300> *)v7->m_head.mp_next == v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x514ui64, *(&s_cg_scriptableEventBuffer_CharacterAllocator[0].ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<unsigned char [1300]>,1300>::m_data.m_size + 5 * v4)) )
        __debugbreak();
      result = (unsigned int *)v7->m_head.mp_next;
      v7->m_head.mp_next = v7->m_head.mp_next->mp_next;
      return result;
    }
    Com_PrintError(29, "Scriptable_Bg_AllocateEventStreamBuffer: Unable to allocate character scriptable of size %i into dynamic buffer; limit is %zu. Code needs to change to increase the buffer.\n", size, 0x514ui64);
  }
  v9 = 0i64;
  for ( i = s_scriptableEventStreamBufferAllocatorSizes; size > *i; ++i )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 7 )
      return 0i64;
  }
  while ( Scriptable_Bg_IsEventStreamBufferPoolEmpty(server, (LocalClientNum_t)v4, v9) )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 7 )
      return 0i64;
  }
  if ( server )
    ++s_g_scriptableEventBufferAllocatorUsage[v9];
  else
    ++s_cg_scriptableEventBufferAllocatorUsage[v9][v4];
  switch ( (int)v9 )
  {
    case 0:
      if ( server )
      {
        if ( !s_g_scriptableEventBuffer_Allocator0.m_freelist.m_head.m_offset )
        {
          if ( *(_DWORD *)s_g_scriptableEventBuffer_Allocator0.m_data.m_buffer )
            goto LABEL_41;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 213, ASSERT_TYPE_ASSERT, "( head_list->m_offset != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( s_g_scriptableEventBuffer_Allocator0.m_freelist.m_head.m_offset )
            goto LABEL_38;
          if ( *(_DWORD *)s_g_scriptableEventBuffer_Allocator0.m_data.m_buffer )
          {
LABEL_41:
            if ( size > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 299, ASSERT_TYPE_ASSERT, "( size_bytes <= sizeof( value_type ) )", (const char *)&queryFormat, "size_bytes <= sizeof( value_type )") )
              __debugbreak();
            v11 = (unsigned int *)&s_g_scriptableEventBuffer_Allocator0.m_data.m_buffer[s_g_scriptableEventBuffer_Allocator0.m_freelist.m_head.m_offset];
            s_g_scriptableEventBuffer_Allocator0.m_freelist.m_head.m_offset = *v11;
            return v11;
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 213, ASSERT_TYPE_ASSERT, "( head_list->m_offset != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
LABEL_38:
        if ( s_g_scriptableEventBuffer_Allocator0.m_freelist.m_head.m_offset == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 4ui64, 0x800ui64) )
          __debugbreak();
        goto LABEL_41;
      }
      v12 = &s_cg_scriptableEventBuffer_Allocator0[v4];
      m_offset = *(&s_cg_scriptableEventBuffer_Allocator0[0].m_freelist.m_head.m_offset + 2049 * v4);
      if ( !m_offset )
      {
        if ( !*(_DWORD *)v12->m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 213, ASSERT_TYPE_ASSERT, "( head_list->m_offset != 0 )", "This container was memset to zero") )
          __debugbreak();
        m_offset = v12->m_freelist.m_head.m_offset;
        if ( !m_offset )
        {
          if ( !*(_DWORD *)v12->m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 213, ASSERT_TYPE_ASSERT, "( head_list->m_offset != 0 )", "This container was memset to zero") )
            __debugbreak();
          m_offset = v12->m_freelist.m_head.m_offset;
        }
      }
      if ( m_offset == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 4ui64, 0x800ui64) )
        __debugbreak();
      if ( size > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 299, ASSERT_TYPE_ASSERT, "( size_bytes <= sizeof( value_type ) )", (const char *)&queryFormat, "size_bytes <= sizeof( value_type )") )
        __debugbreak();
      v14 = (unsigned int *)&v12->m_data.m_buffer[v12->m_freelist.m_head.m_offset];
      v12->m_freelist.m_head.m_offset = *v14;
      return v14;
    case 1:
      if ( server )
      {
        if ( !s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<16> *)s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator1.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x10ui64, 0x400ui64) )
          __debugbreak();
        if ( size > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 299, ASSERT_TYPE_ASSERT, "( size_bytes <= sizeof( value_type ) )", (const char *)&queryFormat, "size_bytes <= sizeof( value_type )") )
          __debugbreak();
        mp_next = s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head.mp_next = s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head.mp_next->mp_next;
        return (unsigned int *)mp_next;
      }
      v16 = (ntl::internal::pool_allocator_freelist<64> *)(&s_cg_scriptableEventBuffer_Allocator1[0].m_freelist + 2049 * v4);
      if ( !v16->m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v16->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<64> *)v16->m_head.mp_next == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x10ui64, 0x400ui64) )
        __debugbreak();
      v17 = size <= 0x10;
      goto LABEL_85;
    case 2:
      if ( server )
      {
        if ( !s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<64> *)s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator2.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x40ui64, 0x180ui64) )
          __debugbreak();
        if ( size > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 299, ASSERT_TYPE_ASSERT, "( size_bytes <= sizeof( value_type ) )", (const char *)&queryFormat, "size_bytes <= sizeof( value_type )") )
          __debugbreak();
        v19 = s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head.mp_next = s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head.mp_next->mp_next;
        return (unsigned int *)v19;
      }
      v16 = &s_cg_scriptableEventBuffer_Allocator2[0].m_freelist + 3073 * v4;
      if ( !v16->m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v16->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<64> *)v16->m_head.mp_next == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x40ui64, 0x180ui64) )
        __debugbreak();
      v17 = size <= 0x40;
      goto LABEL_85;
    case 3:
      if ( server )
      {
        if ( !s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<128> *)s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator3.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x80ui64, 0x180ui64) )
          __debugbreak();
        if ( size > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 299, ASSERT_TYPE_ASSERT, "( size_bytes <= sizeof( value_type ) )", (const char *)&queryFormat, "size_bytes <= sizeof( value_type )") )
          __debugbreak();
        v20 = s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head.mp_next = s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head.mp_next->mp_next;
        return (unsigned int *)v20;
      }
      v16 = (ntl::internal::pool_allocator_freelist<64> *)(&s_cg_scriptableEventBuffer_Allocator3[0].m_freelist + 6145 * v4);
      if ( !v16->m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v16->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<64> *)v16->m_head.mp_next == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x80ui64, 0x180ui64) )
        __debugbreak();
      v17 = size <= 0x80;
      goto LABEL_85;
    case 4:
      if ( server )
      {
        if ( !s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<256> *)s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator4.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x100ui64, 0x100ui64) )
          __debugbreak();
        if ( size > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 299, ASSERT_TYPE_ASSERT, "( size_bytes <= sizeof( value_type ) )", (const char *)&queryFormat, "size_bytes <= sizeof( value_type )") )
          __debugbreak();
        v21 = s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head.mp_next = s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head.mp_next->mp_next;
        return (unsigned int *)v21;
      }
      v16 = (ntl::internal::pool_allocator_freelist<64> *)(&s_cg_scriptableEventBuffer_Allocator4[0].m_freelist + 8193 * v4);
      if ( !v16->m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v16->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<64> *)v16->m_head.mp_next == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x100ui64, 0x100ui64) )
        __debugbreak();
      v17 = size <= 0x100;
      goto LABEL_85;
    case 5:
      if ( server )
      {
        if ( !s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<512> *)s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator5.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x200ui64, 0x40ui64) )
          __debugbreak();
        if ( size > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 299, ASSERT_TYPE_ASSERT, "( size_bytes <= sizeof( value_type ) )", (const char *)&queryFormat, "size_bytes <= sizeof( value_type )") )
          __debugbreak();
        v22 = s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head.mp_next = s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head.mp_next->mp_next;
        return (unsigned int *)v22;
      }
      v16 = (ntl::internal::pool_allocator_freelist<64> *)(&s_cg_scriptableEventBuffer_Allocator5[0].m_freelist + 4097 * v4);
      if ( !v16->m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v16->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<64> *)v16->m_head.mp_next == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x200ui64, 0x40ui64) )
        __debugbreak();
      v17 = size <= 0x200;
      goto LABEL_85;
    case 6:
      if ( server )
      {
        if ( !s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<768> *)s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator6.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x300ui64, 0x30ui64) )
          __debugbreak();
        if ( size > 0x300 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 299, ASSERT_TYPE_ASSERT, "( size_bytes <= sizeof( value_type ) )", (const char *)&queryFormat, "size_bytes <= sizeof( value_type )") )
          __debugbreak();
        v23 = s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head.mp_next = s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head.mp_next->mp_next;
        return (unsigned int *)v23;
      }
      else
      {
        v16 = (ntl::internal::pool_allocator_freelist<64> *)(&s_cg_scriptableEventBuffer_Allocator6[0].m_freelist + 4609 * v4);
        if ( !v16->m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !v16->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<64> *)v16->m_head.mp_next == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x300ui64, 0x30ui64) )
          __debugbreak();
        v17 = size <= 0x300;
LABEL_85:
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 299, ASSERT_TYPE_ASSERT, "( size_bytes <= sizeof( value_type ) )", (const char *)&queryFormat, "size_bytes <= sizeof( value_type )") )
          __debugbreak();
        v18 = v16->m_head.mp_next;
        v16->m_head.mp_next = v16->m_head.mp_next->mp_next;
        return (unsigned int *)v18;
      }
    default:
      return 0i64;
  }
}

/*
==============
Scriptable_Bg_EventStreamBufferPoolOwns
==============
*/
bool Scriptable_Bg_EventStreamBufferPoolOwns(bool server, LocalClientNum_t localClientNum, unsigned int poolId, unsigned __int8 *buffer)
{
  bool result; 

  switch ( poolId )
  {
    case 0u:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 324, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        if ( buffer < (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator0 )
          goto LABEL_7;
        if ( buffer >= (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator0.m_freelist )
          goto LABEL_54;
        result = ((buffer - (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator0) & 3) == 0;
      }
      else
      {
        result = ntl::internal::pool_allocator_impl<ntl::internal::fixed_memory_block<unsigned char [4],2048,1>,4>::owns_ptr(&s_cg_scriptableEventBuffer_Allocator0[localClientNum], buffer);
      }
      break;
    case 1u:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 324, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        if ( buffer < (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator1 )
          goto LABEL_7;
        if ( buffer >= (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator1.m_freelist )
          goto LABEL_54;
        result = ((buffer - (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator1) & 0xF) == 0;
      }
      else
      {
        result = ntl::internal::pool_allocator_impl<ntl::internal::fixed_memory_block<unsigned char [16],1024,1>,16>::owns_ptr(&s_cg_scriptableEventBuffer_Allocator1[localClientNum], buffer);
      }
      break;
    case 2u:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 324, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        if ( buffer < (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator2 )
          goto LABEL_7;
        if ( buffer >= (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator2.m_freelist )
          goto LABEL_54;
        result = ((buffer - (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator2) & 0x3F) == 0;
      }
      else
      {
        result = ntl::internal::pool_allocator_impl<ntl::internal::fixed_memory_block<unsigned char [64],384,1>,64>::owns_ptr(&s_cg_scriptableEventBuffer_Allocator2[localClientNum], buffer);
      }
      break;
    case 3u:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 324, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        if ( buffer < (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator3 )
          goto LABEL_7;
        if ( buffer >= (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator3.m_freelist )
          goto LABEL_54;
        result = ((buffer - (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator3) & 0x7F) == 0;
      }
      else
      {
        result = ntl::internal::pool_allocator_impl<ntl::internal::fixed_memory_block<unsigned char [128],384,1>,128>::owns_ptr(&s_cg_scriptableEventBuffer_Allocator3[localClientNum], buffer);
      }
      break;
    case 4u:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 324, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        if ( buffer < (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator4 )
          goto LABEL_7;
        if ( buffer >= (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator4.m_freelist )
          goto LABEL_54;
        result = (unsigned __int8)(buffer - (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator4) == 0;
      }
      else
      {
        result = ntl::internal::pool_allocator_impl<ntl::internal::fixed_memory_block<unsigned char [256],256,1>,256>::owns_ptr(&s_cg_scriptableEventBuffer_Allocator4[localClientNum], buffer);
      }
      break;
    case 5u:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 324, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        if ( buffer < (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator5 )
        {
LABEL_7:
          result = 0;
        }
        else
        {
          if ( buffer >= (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator5.m_freelist )
            goto LABEL_54;
          result = ((buffer - (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator5) & 0x1FF) == 0;
        }
      }
      else
      {
        result = ntl::internal::pool_allocator_impl<ntl::internal::fixed_memory_block<unsigned char [512],64,1>,512>::owns_ptr(&s_cg_scriptableEventBuffer_Allocator5[localClientNum], buffer);
      }
      break;
    case 6u:
      if ( server )
        result = ntl::internal::pool_allocator_impl<ntl::internal::fixed_memory_block<unsigned char [768],48,1>,768>::owns_ptr(&s_g_scriptableEventBuffer_Allocator6, buffer);
      else
        result = ntl::internal::pool_allocator_impl<ntl::internal::fixed_memory_block<unsigned char [768],48,1>,768>::owns_ptr(&s_cg_scriptableEventBuffer_Allocator6[localClientNum], buffer);
      break;
    default:
LABEL_54:
      result = 0;
      break;
  }
  return result;
}

/*
==============
Scriptable_Bg_EventStreamBuffer_GetNumPools
==============
*/
__int64 Scriptable_Bg_EventStreamBuffer_GetNumPools()
{
  return 7i64;
}

/*
==============
Scriptable_Bg_EventStreamBuffer_GetPoolSizes
==============
*/
void Scriptable_Bg_EventStreamBuffer_GetPoolSizes(bool server, LocalClientNum_t localClientNum, unsigned int poolId, unsigned int *elementSize, unsigned int *capacity, unsigned int *used)
{
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 

  v6 = poolId;
  v7 = s_scriptableEventStreamBufferAllocatorSizes[poolId];
  v8 = s_scriptableEventStreamBufferAllocatorCapacities[poolId];
  *elementSize = v7;
  *capacity = v8;
  if ( server )
    v9 = s_g_scriptableEventBufferAllocatorUsage[v6];
  else
    v9 = s_cg_scriptableEventBufferAllocatorUsage[v6][localClientNum];
  *used = v9;
}

/*
==============
Scriptable_Bg_InitClientEventStream
==============
*/
void Scriptable_Bg_InitClientEventStream(HunkUser *hunkUser, const int maxLocalClients, const int maxCharacters)
{
  __int64 v3; 
  int v4; 
  int v7; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int8 *v11; 
  char *m_buffer; 
  unsigned __int64 m_size; 
  unsigned __int64 *p_m_size; 
  unsigned __int64 *v16; 
  __int128 v17; 

  v3 = maxCharacters;
  v4 = 1300 * maxCharacters;
  if ( s_cg_scriptableEventStreamHeapMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_eventstream_allocator.cpp", 155, ASSERT_TYPE_ASSERT, "(s_cg_scriptableEventStreamHeapMemory == nullptr)", (const char *)&queryFormat, "s_cg_scriptableEventStreamHeapMemory == nullptr") )
    __debugbreak();
  s_cg_scriptableEventStreamHeapMemory = (unsigned __int8 *)Mem_HunkUser_AllocInternal(hunkUser, maxLocalClients * v4, 8ui64, "Scriptable_Bg_InitClientEventStream");
  if ( !s_cg_scriptableEventStreamHeapMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_eventstream_allocator.cpp", 157, ASSERT_TYPE_ASSERT, "(s_cg_scriptableEventStreamHeapMemory)", (const char *)&queryFormat, "s_cg_scriptableEventStreamHeapMemory") )
    __debugbreak();
  v7 = 0;
  if ( maxLocalClients > 0 )
  {
    _RBX = &s_cg_scriptableEventBuffer_CharacterAllocator[0].ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>;
    v9 = 0i64;
    v10 = v3;
    do
    {
      _RBX[-2].m_data.m_size = 0i64;
      _RBX[-1].m_data.m_buffer = NULL;
      _RBX->m_data.m_buffer = NULL;
      _RBX->m_data.m_size = 0i64;
      v11 = &s_cg_scriptableEventStreamHeapMemory[v4 * v7];
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
        __debugbreak();
      _RBX->m_data.m_buffer = (char *)v11;
      _RBX->m_data.m_size = v4;
      if ( _RBX[-2].m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 458, ASSERT_TYPE_ASSERT, "( base_type::m_data.begin() == 0 )", (const char *)&queryFormat, "base_type::m_data.begin() == NULL") )
        __debugbreak();
      if ( 1300 * v10 > _RBX->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
        __debugbreak();
      *((_QWORD *)&v17 + 1) = v10;
      *(_QWORD *)&v17 = _RBX->m_data.m_buffer;
      __asm
      {
        vmovups xmm0, [rsp+68h+var_38]
        vmovups xmmword ptr [rbx-18h], xmm0
      }
      m_buffer = _RBX[-1].m_data.m_buffer;
      m_size = _RBX[-2].m_data.m_size;
      if ( !m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 52, ASSERT_TYPE_ASSERT, "( num_elements > 0 )", (const char *)&queryFormat, "num_elements > 0") )
        __debugbreak();
      p_m_size = &_RBX[-1].m_data.m_size;
      v16 = (unsigned __int64 *)(m_size + 1300i64 * (_QWORD)m_buffer);
      do
      {
        v16 = (unsigned __int64 *)((char *)v16 - 1300);
        *v16 = (unsigned __int64)p_m_size;
        p_m_size = v16;
      }
      while ( (unsigned __int64)v16 > m_size );
      _RBX[-1].m_data.m_size = (unsigned __int64)v16;
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      s_cg_scriptableEventBuffer_CharacterAllocatorUsage[v9] = 0;
      s_cg_scriptableEventBuffer_CharacterAllocatorCapcity[v9] = v3;
      ++v7;
      ++v9;
      _RBX = (ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator> *)((char *)_RBX + 40);
      v10 = v3;
    }
    while ( v7 < maxLocalClients );
  }
}

/*
==============
Scriptable_Bg_IsEventStreamBufferPoolEmpty
==============
*/
bool Scriptable_Bg_IsEventStreamBufferPoolEmpty(bool server, LocalClientNum_t localClientNum, unsigned int poolId)
{
  bool result; 
  __int64 v4; 
  ntl::fixed_pool_allocator<unsigned char [4],2048,1> *v5; 
  unsigned int m_offset; 
  ntl::internal::pool_allocator_freelist<64> *v7; 

  switch ( poolId )
  {
    case 0u:
      if ( server )
      {
        if ( !s_g_scriptableEventBuffer_Allocator0.m_freelist.m_head.m_offset && !*(_DWORD *)s_g_scriptableEventBuffer_Allocator0.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 213, ASSERT_TYPE_ASSERT, "( head_list->m_offset != 0 )", "This container was memset to zero") )
          __debugbreak();
        result = s_g_scriptableEventBuffer_Allocator0.m_freelist.m_head.m_offset == -1;
      }
      else
      {
        v4 = localClientNum;
        v5 = &s_cg_scriptableEventBuffer_Allocator0[v4];
        m_offset = *(unsigned int *)((char *)&s_cg_scriptableEventBuffer_Allocator0[0].m_freelist.m_head.m_offset + v4 * 8196);
        if ( !m_offset )
        {
          if ( !*(_DWORD *)v5->m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 213, ASSERT_TYPE_ASSERT, "( head_list->m_offset != 0 )", "This container was memset to zero") )
            __debugbreak();
          m_offset = v5->m_freelist.m_head.m_offset;
        }
        result = m_offset == -1;
      }
      break;
    case 1u:
      if ( !server )
      {
        v7 = (ntl::internal::pool_allocator_freelist<64> *)(&s_cg_scriptableEventBuffer_Allocator1[0].m_freelist + 2049 * localClientNum);
        goto LABEL_20;
      }
      if ( !s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      result = s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head;
      break;
    case 2u:
      if ( !server )
      {
        v7 = &s_cg_scriptableEventBuffer_Allocator2[0].m_freelist + 3073 * localClientNum;
        goto LABEL_20;
      }
      if ( !s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      result = s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head;
      break;
    case 3u:
      if ( !server )
      {
        v7 = (ntl::internal::pool_allocator_freelist<64> *)(&s_cg_scriptableEventBuffer_Allocator3[0].m_freelist + 6145 * localClientNum);
        goto LABEL_20;
      }
      if ( !s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      result = s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head;
      break;
    case 4u:
      if ( !server )
      {
        v7 = (ntl::internal::pool_allocator_freelist<64> *)(&s_cg_scriptableEventBuffer_Allocator4[0].m_freelist + 8193 * localClientNum);
        goto LABEL_20;
      }
      if ( !s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      result = s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head;
      break;
    case 5u:
      if ( !server )
      {
        v7 = (ntl::internal::pool_allocator_freelist<64> *)(&s_cg_scriptableEventBuffer_Allocator5[0].m_freelist + 4097 * localClientNum);
        goto LABEL_20;
      }
      if ( !s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      result = s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head;
      break;
    case 6u:
      if ( server )
      {
        if ( !s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        result = s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head.mp_next == &s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head;
      }
      else
      {
        v7 = (ntl::internal::pool_allocator_freelist<64> *)(&s_cg_scriptableEventBuffer_Allocator6[0].m_freelist + 4609 * localClientNum);
LABEL_20:
        if ( !v7->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        result = v7->m_head.mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v7;
      }
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

/*
==============
Scriptable_Bg_ReleaseEventStreamBuffer
==============
*/
void Scriptable_Bg_ReleaseEventStreamBuffer(const bool isCharacterEntity, const bool server, LocalClientNum_t localClientNum, unsigned __int8 *buffer)
{
  __int64 v4; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int8 (*m_buffer)[1300]; 
  __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int8 *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v4 = localClientNum;
  if ( !server && isCharacterEntity )
  {
    v7 = localClientNum;
    v8 = 40i64 * (int)localClientNum;
    if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 324, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    if ( !s_cg_scriptableEventBuffer_CharacterAllocator[v8 / 0x28].ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<unsigned char [1300]>,1300>::m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 325, ASSERT_TYPE_ASSERT, "( m_data.begin() )", (const char *)&queryFormat, "m_data.begin()") )
      __debugbreak();
    if ( !*(unsigned __int64 *)((char *)&s_cg_scriptableEventBuffer_CharacterAllocator[0].ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<unsigned char [1300]>,1300>::m_data.m_size + v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 326, ASSERT_TYPE_ASSERT, "( m_data.size() )", (const char *)&queryFormat, "m_data.size()") )
      __debugbreak();
    m_buffer = s_cg_scriptableEventBuffer_CharacterAllocator[v8 / 0x28].ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<unsigned char [1300]>,1300>::m_data.m_buffer;
    if ( buffer >= (unsigned __int8 *)m_buffer && buffer < m_buffer[*(unsigned __int64 *)((char *)&s_cg_scriptableEventBuffer_CharacterAllocator[0].ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<unsigned char [1300]>,1300>::m_data.m_size + v8)] && buffer - (unsigned __int8 *)m_buffer == 1300 * ((buffer - (unsigned __int8 *)m_buffer) / 0x514ui64) )
    {
      --s_cg_scriptableEventBuffer_CharacterAllocatorUsage[v7];
      if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      *(_QWORD *)buffer = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_CharacterAllocator[0].m_freelist.m_head.mp_next + v8);
      *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_CharacterAllocator[0].m_freelist.m_head.mp_next + v8) = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      return;
    }
    Com_PrintError(29, "Scriptable_Bg_ReleaseEventStreamBuffer: Character scriptable allocator does not contain data, reverting to default pools.\n");
  }
  v10 = 0i64;
  while ( !Scriptable_Bg_EventStreamBufferPoolOwns(server, (LocalClientNum_t)v4, v10, buffer) )
  {
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= 7 )
      return;
  }
  if ( server )
    --s_g_scriptableEventBufferAllocatorUsage[v10];
  else
    --s_cg_scriptableEventBufferAllocatorUsage[v10][v4];
  switch ( (int)v10 )
  {
    case 0:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_DWORD *)buffer = s_g_scriptableEventBuffer_Allocator0.m_freelist.m_head.m_offset;
        if ( buffer < (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 137, ASSERT_TYPE_ASSERT, "( p_ptr >= p_buffer_start )", (const char *)&queryFormat, "p_ptr >= p_buffer_start") )
          __debugbreak();
        v11 = buffer - (unsigned __int8 *)&s_g_scriptableEventBuffer_Allocator0;
        if ( v11 >= 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 139, ASSERT_TYPE_ASSERT, "( offset < ( ( ( ( T_OFFSET_TYPE ) ( -1 ) ) < 0 ) ? ( ( ( 0x1ULL << ( ( sizeof( T_OFFSET_TYPE ) * 8ULL ) - 1ULL ) ) - 1ULL ) | ( 0x7ULL << ( ( sizeof( T_OFFSET_TYPE ) * 8ULL ) - 4ULL ) ) ) : ( ( ( 0x1ULL << ( ( sizeof( T_OFFSET_TYPE ) * 8ULL ) - 1ULL ) ) - 1ULL ) | ( 0xFULL << ( ( sizeof( T_OFFSET_TYPE ) * 8ULL ) - 4ULL ) ) ) ) )", (const char *)&queryFormat, "offset < NTL_TYPE_MAX( T_OFFSET_TYPE )") )
          __debugbreak();
        if ( (v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 140, ASSERT_TYPE_ASSERT, "( ( offset % T_ELEMENT_SIZE ) == 0 )", (const char *)&queryFormat, "( offset % T_ELEMENT_SIZE ) == 0") )
          __debugbreak();
        s_g_scriptableEventBuffer_Allocator0.m_freelist.m_head.m_offset = v11;
      }
      else
      {
        v12 = (unsigned __int64)&s_cg_scriptableEventBuffer_Allocator0[v4];
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 184, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
          __debugbreak();
        *(_DWORD *)buffer = *(_DWORD *)(v12 + 0x2000);
        if ( (unsigned __int64)buffer < v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 137, ASSERT_TYPE_ASSERT, "( p_ptr >= p_buffer_start )", (const char *)&queryFormat, "p_ptr >= p_buffer_start") )
          __debugbreak();
        v13 = &buffer[-v12];
        if ( (unsigned __int64)v13 >= 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 139, ASSERT_TYPE_ASSERT, "( offset < ( ( ( ( T_OFFSET_TYPE ) ( -1 ) ) < 0 ) ? ( ( ( 0x1ULL << ( ( sizeof( T_OFFSET_TYPE ) * 8ULL ) - 1ULL ) ) - 1ULL ) | ( 0x7ULL << ( ( sizeof( T_OFFSET_TYPE ) * 8ULL ) - 4ULL ) ) ) : ( ( ( 0x1ULL << ( ( sizeof( T_OFFSET_TYPE ) * 8ULL ) - 1ULL ) ) - 1ULL ) | ( 0xFULL << ( ( sizeof( T_OFFSET_TYPE ) * 8ULL ) - 4ULL ) ) ) ) )", (const char *)&queryFormat, "offset < NTL_TYPE_MAX( T_OFFSET_TYPE )") )
          __debugbreak();
        if ( ((unsigned __int8)v13 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 140, ASSERT_TYPE_ASSERT, "( ( offset % T_ELEMENT_SIZE ) == 0 )", (const char *)&queryFormat, "( offset % T_ELEMENT_SIZE ) == 0") )
          __debugbreak();
        *(_DWORD *)(v12 + 0x2000) = (_DWORD)v13;
      }
      break;
    case 1:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator1.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      else
      {
        v14 = 16392 * v4;
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_Allocator1[0].m_freelist.m_head.mp_next + v14);
        *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_Allocator1[0].m_freelist.m_head.mp_next + v14) = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      break;
    case 2:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator2.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      else
      {
        v15 = 24584 * v4;
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_Allocator2[0].m_freelist.m_head.mp_next + v15);
        *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_Allocator2[0].m_freelist.m_head.mp_next + v15) = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      break;
    case 3:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator3.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      else
      {
        v16 = 49160 * v4;
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_Allocator3[0].m_freelist.m_head.mp_next + v16);
        *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_Allocator3[0].m_freelist.m_head.mp_next + v16) = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      break;
    case 4:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator4.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      else
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = *((_QWORD *)&s_cg_scriptableEventBuffer_Allocator4[0].m_freelist.m_head.mp_next + 8193 * v4);
        *((_QWORD *)&s_cg_scriptableEventBuffer_Allocator4[0].m_freelist.m_head.mp_next + 8193 * v4) = buffer;
      }
      break;
    case 5:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator5.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      else
      {
        v17 = 32776 * v4;
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_Allocator5[0].m_freelist.m_head.mp_next + v17);
        *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_Allocator5[0].m_freelist.m_head.mp_next + v17) = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      break;
    case 6:
      if ( server )
      {
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head.mp_next;
        s_g_scriptableEventBuffer_Allocator6.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      else
      {
        v18 = 36872 * v4;
        if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)buffer = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_Allocator6[0].m_freelist.m_head.mp_next + v18);
        *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_cg_scriptableEventBuffer_Allocator6[0].m_freelist.m_head.mp_next + v18) = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)buffer;
      }
      break;
    default:
      return;
  }
}

/*
==============
Scriptable_Bg_ShutdownClientEventStream
==============
*/
void Scriptable_Bg_ShutdownClientEventStream(void)
{
  unsigned int v0; 
  ntl::pool_allocator<unsigned char [1300],ntl::solitary_buffer_allocator> *v1; 
  __int64 v2; 
  char *m_buffer; 
  __int64 v4; 

  v4 = -2i64;
  v0 = 0;
  v1 = s_cg_scriptableEventBuffer_CharacterAllocator;
  v2 = 0i64;
  do
  {
    if ( v1->ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<unsigned char [1300]>,1300>::m_data.m_buffer )
    {
      m_buffer = v1->ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer;
      if ( (char *)v1->ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<unsigned char [1300]>,1300>::m_data.m_buffer != m_buffer && m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )", v4) )
        __debugbreak();
      v1->ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<unsigned char [1300]>,1300>::m_data.m_buffer = NULL;
      v1->ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<unsigned char [1300]>,1300>::m_data.m_size = 0i64;
    }
    s_cg_scriptableEventBuffer_CharacterAllocatorUsage[v2] = 0;
    s_cg_scriptableEventBuffer_CharacterAllocatorCapcity[v2] = 0;
    ++v0;
    ++v1;
    ++v2;
  }
  while ( v0 < 2 );
  s_cg_scriptableEventStreamHeapMemory = NULL;
}

