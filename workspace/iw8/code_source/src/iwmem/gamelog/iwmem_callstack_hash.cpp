/*
==============
IWMem_CallstackHash_Init
==============
*/

void IWMem_CallstackHash_Init(void)
{
  ?IWMem_CallstackHash_Init@@YAXXZ();
}

/*
==============
IWMem_CallstackHash_TraceCurrent
==============
*/

unsigned int __fastcall IWMem_CallstackHash_TraceCurrent()
{
  return ?IWMem_CallstackHash_TraceCurrent@@YAIXZ();
}

/*
==============
IWMem_CallstackHash_Lookup
==============
*/

unsigned int __fastcall IWMem_CallstackHash_Lookup(const unsigned int hashValue, unsigned __int64 *p_dest, const unsigned int maxSize)
{
  return ?IWMem_CallstackHash_Lookup@@YAIIPEA_KI@Z(hashValue, p_dest, maxSize);
}

/*
==============
IWMem_CallstackHash_TrackAllocs
==============
*/

void IWMem_CallstackHash_TrackAllocs(void)
{
  ?IWMem_CallstackHash_TrackAllocs@@YAXXZ();
}

/*
==============
IWMem_CallstackHash_Init
==============
*/
void IWMem_CallstackHash_Init(void)
{
  ntl::fixed_hash_map<unsigned int,IWMemPackedCallstack,16384,24593,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *v0; 
  ntl::internal::pool_allocator_freelist<80> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<80> *v2; 

  if ( sp_callstackMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_callstack_hash.cpp", 91, ASSERT_TYPE_ASSERT, "(sp_callstackMap == nullptr)", (const char *)&queryFormat, "sp_callstackMap == nullptr") )
    __debugbreak();
  s_callstackMapCommitSize = 1572864i64;
  v0 = (ntl::fixed_hash_map<unsigned int,IWMemPackedCallstack,16384,24593,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)IWMem_InternalPool_ReserveMemory(0x180000ui64);
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_callstack_hash.cpp", 96, ASSERT_TYPE_ASSERT, "(alloc)", (const char *)&queryFormat, "alloc") )
    __debugbreak();
  IWMem_InternalPool_CommitMemory(v0, s_callstackMapCommitSize);
  p_m_freelist = &v0->m_freelist;
  v2 = &v0->m_freelist;
  do
  {
    v2 -= 10;
    v2->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v2;
  }
  while ( v2 > (ntl::internal::pool_allocator_freelist<80> *)v0 );
  v0->m_freelist.m_head.mp_next = &v2->m_head;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  `eh vector constructor iterator'(&v0->m_buckets, 8ui64, 0x6011ui64, (void (__fastcall *)(void *))ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack>>::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack>>, (void (__fastcall *)(void *))ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack>>::~intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack>>);
  v0->m_currentNumItems = 0i64;
  sp_callstackMap = v0;
  s_exeBaseAddr = (unsigned __int64)IWMem_CallstackHash_Init & 0xFFFFFFFFC0000000ui64;
}

/*
==============
IWMem_CallstackHash_Lookup
==============
*/
__int64 IWMem_CallstackHash_Lookup(const unsigned int hashValue, unsigned __int64 *p_dest, const unsigned int maxSize)
{
  unsigned __int64 v4; 
  ntl::fixed_hash_map<unsigned int,IWMemPackedCallstack,16384,24593,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *v6; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *v7; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *mp_next; 
  unsigned int v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  bool v12; 

  v4 = hashValue;
  if ( !sp_callstackMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_callstack_hash.cpp", 189, ASSERT_TYPE_ASSERT, "(sp_callstackMap)", (const char *)&queryFormat, "sp_callstackMap") )
    __debugbreak();
  v6 = sp_callstackMap;
  if ( v4 % 0x6011 >= 0x6011 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v7 = &v6->m_buckets.ntl::internal::hash_table<unsigned int,IWMemPackedCallstack,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack>,16384,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> >,24593>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v4 % 0x6011];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *)v7->m_listHead.m_sentinel.mp_next;
  v9 = 0;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *)v7->m_listHead.m_sentinel.mp_next == v7 )
  {
LABEL_13:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v4 )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v7 )
        goto LABEL_13;
    }
  }
  if ( mp_next && maxSize )
  {
    v10 = 0i64;
    do
    {
      if ( v9 >= 0x10 )
        break;
      if ( v10 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v11 = *((unsigned int *)&mp_next[1].m_listHead.m_sentinel.mp_next + v10 + 1);
      v12 = s_exeBaseAddr + v11 == 0;
      p_dest[v10] = s_exeBaseAddr + v11;
      if ( v12 )
        break;
      ++v9;
      ++v10;
    }
    while ( v9 < maxSize );
  }
  return v9;
}

/*
==============
IWMem_CallstackHash_TraceCurrent
==============
*/
__int64 IWMem_CallstackHash_TraceCurrent()
{
  __int64 v0; 
  unsigned int v1; 
  __int64 v2; 
  unsigned __int64 *v3; 
  __int64 v4; 
  unsigned int i; 
  __int64 v6; 
  ntl::fixed_hash_map<unsigned int,IWMemPackedCallstack,16384,24593,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *v10; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *mp_next; 
  ntl::internal::pool_allocator_freelist<80> *p_m_freelist; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  ntl::fixed_hash_map<unsigned int,IWMemPackedCallstack,16384,24593,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *v16; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *v19; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *v20; 
  ntl::internal::pool_allocator_freelist<80> *v21; 
  _BYTE v25[68]; 
  _BYTE v26[64]; 
  unsigned __int64 dest[16]; 

  if ( !sp_callstackMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_callstack_hash.cpp", 135, ASSERT_TYPE_ASSERT, "(sp_callstackMap)", (const char *)&queryFormat, "sp_callstackMap") )
    __debugbreak();
  v0 = 16i64;
  v1 = Callstack_StackTrace(dest, 0x10u, 5u);
  v2 = v1;
  if ( v1 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_callstack_hash.cpp", 138, ASSERT_TYPE_ASSERT, "(depth <= IWMEM_CALLSTACK_SIZE)", (const char *)&queryFormat, "depth <= IWMEM_CALLSTACK_SIZE") )
    __debugbreak();
  v3 = dest;
  v4 = 8 * v2;
  for ( i = -1; v4; --v4 )
  {
    v6 = *(unsigned __int8 *)v3;
    v3 = (unsigned __int64 *)((char *)v3 + 1);
    i = (i >> 8) ^ g_crc32Table[v6 ^ (unsigned __int8)i];
  }
  v7 = sp_callstackMap;
  v8 = ~i;
  v9 = v8 % 0x6011ui64;
  if ( v9 >= 0x6011 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v10 = &v7->m_buckets.ntl::internal::hash_table<unsigned int,IWMemPackedCallstack,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack>,16384,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> >,24593>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v9];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *)v10->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *)v10->m_listHead.m_sentinel.mp_next == v10 )
  {
LABEL_18:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == v8 )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v10 )
        goto LABEL_18;
    }
  }
  if ( !mp_next )
  {
    p_m_freelist = &sp_callstackMap->m_freelist;
    if ( !sp_callstackMap->m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( (ntl::internal::pool_allocator_freelist<80> *)p_m_freelist->m_head.mp_next == p_m_freelist )
    {
      Com_PrintError(16, "IWMEM: IWMem_CallstackHash exhausted\n", v4);
      IWMem_InternalError();
      return 0i64;
    }
    v14 = 0i64;
    do
    {
      if ( v14 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( !dest[v14] )
        goto LABEL_64;
      if ( v14 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v15 = dest[v14] - s_exeBaseAddr;
      if ( v15 <= 0xFFFFFFFF )
      {
        if ( v14 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
      }
      else
      {
LABEL_64:
        if ( v14 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        LODWORD(v15) = 0;
      }
      *(_DWORD *)&v26[4 * v14++] = v15;
      --v0;
    }
    while ( v0 );
    v16 = sp_callstackMap;
    *(_DWORD *)v25 = v8;
    __asm
    {
      vmovups ymm0, [rsp+188h+var_F8]
      vmovups ymm1, [rsp+188h+var_D8]
      vmovups [rsp+188h+var_148+4], ymm0
      vmovups [rsp+188h+var_124], ymm1
    }
    if ( v9 >= 0x6011 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v19 = &v16->m_buckets.ntl::internal::hash_table<unsigned int,IWMemPackedCallstack,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack>,16384,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> >,24593>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v9];
    v20 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *)v19->m_listHead.m_sentinel.mp_next;
    if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *)v19->m_listHead.m_sentinel.mp_next == v19 )
    {
LABEL_51:
      v21 = &v16->m_freelist;
      if ( !v16->m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v21->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<80> *)v21->m_head.mp_next == v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x50ui64, 0x4000ui64) )
        __debugbreak();
      _RDX = (_QWORD **)v21->m_head.mp_next;
      __asm
      {
        vmovups ymm0, [rsp+188h+var_148]
        vmovups ymm1, ymmword ptr [rsp+60h]
      }
      v21->m_head.mp_next = v21->m_head.mp_next->mp_next;
      __asm
      {
        vmovups ymmword ptr [rdx+8], ymm0
        vmovups ymmword ptr [rdx+28h], ymm1
      }
      *_RDX = NULL;
      *((_DWORD *)_RDX + 18) = *(_DWORD *)&v25[64];
      *_RDX = &v19->m_listHead.m_sentinel.mp_next->mp_next;
      v19->m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)_RDX;
      ++v16->m_currentNumItems;
    }
    else
    {
      while ( 1 )
      {
        if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( LODWORD(v20[1].m_listHead.m_sentinel.mp_next) == v8 )
          break;
        v20 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,IWMemPackedCallstack> > *)v20->m_listHead.m_sentinel.mp_next;
        if ( v20 == v19 )
          goto LABEL_51;
      }
    }
  }
  return v8;
}

/*
==============
IWMem_CallstackHash_TrackAllocs
==============
*/
void IWMem_CallstackHash_TrackAllocs(void)
{
  IWMemID r_allocatorID; 
  IWMemID allocatorID; 

  if ( sp_callstackMap )
  {
    IWMem_Allocator_CreateFixed(&r_allocatorID, "IWMem_CallstackHash", Count, sp_callstackMap, s_callstackMapCommitSize);
    IWMem_Allocator_CreateFixed(&allocatorID, "IWMem_CallstackHash", (IWMemAllocatorType)4, sp_callstackMap, s_callstackMapCommitSize);
    IWMem_Alloc(r_allocatorID, sp_callstackMap, s_callstackMapCommitSize);
    IWMem_Alloc(allocatorID, sp_callstackMap, s_callstackMapCommitSize);
  }
}

