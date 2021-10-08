/*
==============
ScriptableSv_ValidateEntityLinks
==============
*/

void ScriptableSv_ValidateEntityLinks(void)
{
  ?ScriptableSv_ValidateEntityLinks@@YAXXZ();
}

/*
==============
ScriptableSv_LinkReservedScriptableEntity
==============
*/

bool __fastcall ScriptableSv_LinkReservedScriptableEntity(const gentity_s *const entity, const ScriptableDef *const scriptableDef, unsigned int scriptableIndex)
{
  return ?ScriptableSv_LinkReservedScriptableEntity@@YA_NQEBUgentity_s@@QEBUScriptableDef@@I@Z(entity, scriptableDef, scriptableIndex);
}

/*
==============
ScriptableSv_UnlinkReservedScriptableStandalone
==============
*/

void __fastcall ScriptableSv_UnlinkReservedScriptableStandalone(const unsigned int scriptableIndex)
{
  ?ScriptableSv_UnlinkReservedScriptableStandalone@@YAXI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_DisableLinking
==============
*/

void __fastcall ScriptableSv_DisableLinking(bool disable)
{
  ?ScriptableSv_DisableLinking@@YAX_N@Z(disable);
}

/*
==============
ScriptableSv_GetFreeReservedScriptableCount
==============
*/

unsigned int __fastcall ScriptableSv_GetFreeReservedScriptableCount()
{
  return ?ScriptableSv_GetFreeReservedScriptableCount@@YAIXZ();
}

/*
==============
ScriptableSV_ShutdownReservedAllocators
==============
*/

void ScriptableSV_ShutdownReservedAllocators(void)
{
  ?ScriptableSV_ShutdownReservedAllocators@@YAXXZ();
}

/*
==============
ScriptableSv_UnlinkReservedScriptableEntity
==============
*/

void __fastcall ScriptableSv_UnlinkReservedScriptableEntity(const gentity_s *const entity)
{
  ?ScriptableSv_UnlinkReservedScriptableEntity@@YAXQEBUgentity_s@@@Z(entity);
}

/*
==============
ScriptableSv_PrintReservedScriptables
==============
*/

void ScriptableSv_PrintReservedScriptables(void)
{
  ?ScriptableSv_PrintReservedScriptables@@YAXXZ();
}

/*
==============
ScriptableSv_InitReservedAllocators
==============
*/

void ScriptableSv_InitReservedAllocators(void)
{
  ?ScriptableSv_InitReservedAllocators@@YAXXZ();
}

/*
==============
ScriptableSv_LinkReservedScriptableStandalone
==============
*/

bool __fastcall ScriptableSv_LinkReservedScriptableStandalone(const ScriptableDef *const scriptableDef, const vec3_t *origin, const vec3_t *angles, const unsigned __int16 payload, const unsigned __int16 extraPayload, const unsigned __int16 defIndex, const unsigned int inScriptableIndex, unsigned int *outScriptableIndex)
{
  return ?ScriptableSv_LinkReservedScriptableStandalone@@YA_NQEBUScriptableDef@@AEBTvec3_t@@1GGGIAEAI@Z(scriptableDef, origin, angles, payload, extraPayload, defIndex, inScriptableIndex, outScriptableIndex);
}

/*
==============
ScriptableSv_UpdateReservedScriptableEntityBinding
==============
*/

void __fastcall ScriptableSv_UpdateReservedScriptableEntityBinding(const gentity_s *const entity, const ScriptableDef *const scriptableDef)
{
  ?ScriptableSv_UpdateReservedScriptableEntityBinding@@YAXQEBUgentity_s@@QEBUScriptableDef@@@Z(entity, scriptableDef);
}

/*
==============
ScriptableSv_IsLinkingEnabled
==============
*/

bool __fastcall ScriptableSv_IsLinkingEnabled()
{
  return ?ScriptableSv_IsLinkingEnabled@@YA_NXZ();
}

/*
==============
ScriptableSv_ArchiveReservedAllocators
==============
*/

void __fastcall ScriptableSv_ArchiveReservedAllocators(MemoryFile *memFile, const unsigned __int8 archiveVersion)
{
  ?ScriptableSv_ArchiveReservedAllocators@@YAXPEAUMemoryFile@@E@Z(memFile, archiveVersion);
}

/*
==============
ScriptableSV_ShutdownReservedAllocators
==============
*/
void ScriptableSV_ShutdownReservedAllocators(void)
{
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v1; 
  ntl::fixed_list<unsigned int,2048,0> *v2; 

  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<unsigned int> > *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next != &s_scriptableSv_reservedFreeList.m_listHead )
  {
    v1 = s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next;
    do
    {
      v2 = (ntl::fixed_list<unsigned int,2048,0> *)mp_next[1].mp_next;
      mp_next->mp_next = v1;
      v1 = mp_next;
      s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next = mp_next;
      mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v2;
    }
    while ( v2 != (ntl::fixed_list<unsigned int,2048,0> *)&s_scriptableSv_reservedFreeList.m_listHead );
  }
  s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next = &s_scriptableSv_reservedFreeList.m_listHead.m_sentinel;
  s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_prev = &s_scriptableSv_reservedFreeList.m_listHead.m_sentinel;
}

/*
==============
ScriptableSv_AcquireFreeReservedScriptable
==============
*/
char ScriptableSv_AcquireFreeReservedScriptable(unsigned int *outScriptableIndex)
{
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node<unsigned int> *v4; 

  mp_next = s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<unsigned int> > *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next == &s_scriptableSv_reservedFreeList.m_listHead )
  {
    if ( s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next != s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
      __debugbreak();
    *outScriptableIndex = -1;
    return 0;
  }
  else
  {
    if ( !s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    *outScriptableIndex = (unsigned int)mp_next[1].mp_prev;
    v4 = (ntl::internal::list_node<unsigned int> *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next;
    if ( (ntl::internal::list_head_base<ntl::internal::list_node<unsigned int> > *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next == &s_scriptableSv_reservedFreeList.m_listHead )
    {
      if ( s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next != s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      v4 = (ntl::internal::list_node<unsigned int> *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next;
    }
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    ntl::internal::list_head_base<ntl::internal::list_node<unsigned int>>::remove(&s_scriptableSv_reservedFreeList.m_listHead, v4);
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    v4->mp_prev = (ntl::internal::list_node_base *)s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next;
    s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v4;
    if ( ScriptableSv_GetInstanceInUse(*outScriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 179, ASSERT_TYPE_ASSERT, "( !ScriptableSv_GetInstanceInUse( outScriptableIndex ) )", (const char *)&queryFormat, "!ScriptableSv_GetInstanceInUse( outScriptableIndex )") )
      __debugbreak();
    if ( ScriptableSv_GetInstanceCommonContext(*outScriptableIndex)->linkedObjectType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 182, ASSERT_TYPE_ASSERT, "( !ScriptableSv_IsLinked( outScriptableIndex ) )", (const char *)&queryFormat, "!ScriptableSv_IsLinked( outScriptableIndex )") )
      __debugbreak();
    return 1;
  }
}

/*
==============
ScriptableSv_ArchiveReservedAllocators
==============
*/
void ScriptableSv_ArchiveReservedAllocators(MemoryFile *memFile, const unsigned __int8 archiveVersion)
{
  unsigned __int64 v2; 
  int *v4; 
  __int64 v5; 
  __int64 v6; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v8; 
  ntl::fixed_list<unsigned int,2048,0> *v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  ntl::internal::list_node<unsigned int> *v12; 
  ntl::internal::list_node_base *i; 
  ntl::internal::list_node_base *j; 
  unsigned __int64 mp_prev_low; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  char v18; 
  __int64 v19; 
  char *fmt; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned __int16 p; 
  unsigned __int8 v26; 
  int v27[64]; 

  v2 = 0i64;
  v26 = archiveVersion;
  v4 = v27;
  v5 = 4i64;
  do
  {
    *(_QWORD *)v4 = 0i64;
    *((_QWORD *)v4 + 1) = 0i64;
    *((_QWORD *)v4 + 2) = 0i64;
    v4 += 16;
    *((_QWORD *)v4 - 5) = 0i64;
    *((_QWORD *)v4 - 4) = 0i64;
    *((_QWORD *)v4 - 3) = 0i64;
    *((_QWORD *)v4 - 2) = 0i64;
    *((_QWORD *)v4 - 1) = 0i64;
    --v5;
  }
  while ( v5 );
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 100, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.runtimeInstanceCount > 0x800 )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v21) = g_scriptableWorldCounts.runtimeInstanceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 101, ASSERT_TYPE_ASSERT, "( ScriptableCommon_GetReservedInstanceCount() ) <= ( SCRIPTABLE_MAX_RESERVED_INSTANCES )", "ScriptableCommon_GetReservedInstanceCount() <= SCRIPTABLE_MAX_RESERVED_INSTANCES\n\t%i, %i", v21, 2048) )
      __debugbreak();
  }
  if ( MemFile_IsReading(memFile) )
  {
    MemFile_ReadData(memFile, 2ui64, &p);
    v6 = p;
    ScriptableCommon_AssertCountsInitialized();
    if ( (unsigned int)v6 > g_scriptableWorldCounts.runtimeInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(fmt) = g_scriptableWorldCounts.runtimeInstanceCount;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408F2A0, 771i64, (unsigned int)v6, fmt);
    }
    mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next;
    if ( (ntl::internal::list_head_base<ntl::internal::list_node<unsigned int> > *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next != &s_scriptableSv_reservedFreeList.m_listHead )
    {
      v8 = s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next;
      do
      {
        v9 = (ntl::fixed_list<unsigned int,2048,0> *)mp_next[1].mp_next;
        mp_next->mp_next = v8;
        v8 = mp_next;
        s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next = mp_next;
        mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v9;
      }
      while ( v9 != (ntl::fixed_list<unsigned int,2048,0> *)&s_scriptableSv_reservedFreeList.m_listHead );
    }
    s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_prev = &s_scriptableSv_reservedFreeList.m_listHead.m_sentinel;
    s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next = &s_scriptableSv_reservedFreeList.m_listHead.m_sentinel;
    if ( (_DWORD)v6 )
    {
      v10 = v6;
      do
      {
        MemFile_ReadData(memFile, 2ui64, &p);
        v11 = p;
        if ( p >= 0x800u )
        {
          LODWORD(v22) = 2048;
          LODWORD(v21) = p;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v21, v22) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v11 & 0x1F)) & v27[v11 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 122, ASSERT_TYPE_ASSERT, "( !reserveBitfield.testBit( instanceIndex ) )", (const char *)&queryFormat, "!reserveBitfield.testBit( instanceIndex )") )
          __debugbreak();
        if ( (unsigned int)v11 >= 0x800 )
        {
          LODWORD(v24) = 2048;
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
            __debugbreak();
        }
        v27[v11 >> 5] |= 0x80000000 >> (v11 & 0x1F);
        if ( !s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<24> *)s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next == &s_scriptableSv_reservedFreeList.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x800ui64) )
          __debugbreak();
        v12 = (ntl::internal::list_node<unsigned int> *)s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next;
        s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next = s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next->mp_next;
        v12->mp_prev = NULL;
        v12->mp_next = NULL;
        v12->m_data = v11;
        ntl::internal::list_head_base<ntl::internal::list_node<unsigned int>>::insert_before(&s_scriptableSv_reservedFreeList.m_listHead, (ntl::internal::list_node<unsigned int> *)&s_scriptableSv_reservedFreeList.m_listHead, v12);
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    for ( i = s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)&s_scriptableSv_reservedFreeList.m_listHead; ++v2 )
      i = i->mp_next;
    if ( v2 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned __int16)v2, "unsigned", v2) )
      __debugbreak();
    p = v2;
    MemFile_WriteData(memFile, 2ui64, &p);
    for ( j = s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next; j != (ntl::internal::list_node_base *)&s_scriptableSv_reservedFreeList.m_listHead; j = j->mp_next )
    {
      if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_prev_low = LODWORD(j[1].mp_prev);
      if ( (unsigned int)mp_prev_low >= 0x800 )
      {
        LODWORD(v22) = 2048;
        LODWORD(v21) = j[1].mp_prev;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v21, v22) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (mp_prev_low & 0x1F)) & v27[mp_prev_low >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 141, ASSERT_TYPE_ASSERT, "( !reserveBitfield.testBit( *itr ) )", (const char *)&queryFormat, "!reserveBitfield.testBit( *itr )") )
        __debugbreak();
      v16 = LODWORD(j[1].mp_prev);
      if ( (unsigned int)v16 >= 0x800 )
      {
        LODWORD(v24) = 2048;
        LODWORD(v23) = j[1].mp_prev;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
          __debugbreak();
      }
      v17 = v16;
      v18 = v16 & 0x1F;
      v19 = LODWORD(j[1].mp_prev);
      v27[v17 >> 5] |= 0x80000000 >> v18;
      if ( (unsigned int)v19 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v19, "unsigned", v19) )
        __debugbreak();
      p = v19;
      MemFile_WriteData(memFile, 2ui64, &p);
    }
  }
  ScriptablePartAllocator::Archive(&s_reservedPartAllocator, memFile, v26);
}

/*
==============
ScriptableSv_DisableLinking
==============
*/
void ScriptableSv_DisableLinking(bool disable)
{
  s_svScriptablesLinkingEnabled = !disable;
}

/*
==============
ScriptableSv_GetFreeReservedScriptableCount
==============
*/
__int64 ScriptableSv_GetFreeReservedScriptableCount()
{
  ntl::internal::list_node_base *mp_next; 
  __int64 result; 

  mp_next = s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next;
  for ( result = 0i64; mp_next != (ntl::internal::list_node_base *)&s_scriptableSv_reservedFreeList.m_listHead; ++result )
    mp_next = mp_next->mp_next;
  return result;
}

/*
==============
ScriptableSv_GetReplicatedInstanceRefLocal
==============
*/
ScriptableReplicatedInstance *ScriptableSv_GetReplicatedInstanceRefLocal(const unsigned int scriptableIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int ReplicatedInstanceLimit; 

  v1 = scriptableIndex;
  if ( !g_scriptableSv_reservedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 161, ASSERT_TYPE_ASSERT, "( g_scriptableSv_reservedInstances )", (const char *)&queryFormat, "g_scriptableSv_reservedInstances") )
    __debugbreak();
  if ( (unsigned int)v1 >= ScriptableSv_GetReplicatedInstanceLimit() )
  {
    ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 162, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableSv_GetReplicatedInstanceLimit() )", "scriptableIndex doesn't index ScriptableSv_GetReplicatedInstanceLimit()\n\t%i not in [0, %i)", v3, ReplicatedInstanceLimit) )
      __debugbreak();
  }
  return &g_scriptableSv_reservedInstances[v1];
}

/*
==============
ScriptableSv_InitReservedAllocators
==============
*/
void ScriptableSv_InitReservedAllocators(void)
{
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v1; 
  ntl::fixed_list<unsigned int,2048,0> *v2; 
  unsigned int v3; 
  ntl::internal::list_node<unsigned int> *v4; 
  unsigned int runtimeInstanceCount; 
  int v6; 

  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.runtimeInstanceCount > 0x800 )
  {
    ScriptableCommon_AssertCountsInitialized();
    v6 = 2048;
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 70, ASSERT_TYPE_ASSERT, "( ScriptableCommon_GetReservedInstanceCount() ) <= ( SCRIPTABLE_MAX_RESERVED_INSTANCES )", "ScriptableCommon_GetReservedInstanceCount() <= SCRIPTABLE_MAX_RESERVED_INSTANCES\n\t%i, %i", runtimeInstanceCount, v6) )
      __debugbreak();
  }
  ScriptablePartAllocator::Init(&s_reservedPartAllocator, g_scriptableSv_replicatedLimits.partWorldLimits[1]);
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<unsigned int> > *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next != &s_scriptableSv_reservedFreeList.m_listHead )
  {
    v1 = s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next;
    do
    {
      v2 = (ntl::fixed_list<unsigned int,2048,0> *)mp_next[1].mp_next;
      mp_next->mp_next = v1;
      v1 = mp_next;
      s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next = mp_next;
      mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v2;
    }
    while ( v2 != (ntl::fixed_list<unsigned int,2048,0> *)&s_scriptableSv_reservedFreeList.m_listHead );
  }
  s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_prev = &s_scriptableSv_reservedFreeList.m_listHead.m_sentinel;
  v3 = 0;
  s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next = &s_scriptableSv_reservedFreeList.m_listHead.m_sentinel;
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.runtimeInstanceCount )
  {
    do
    {
      if ( !s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<24> *)s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next == &s_scriptableSv_reservedFreeList.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x800ui64) )
        __debugbreak();
      v4 = (ntl::internal::list_node<unsigned int> *)s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next;
      s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next = s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next->mp_next;
      v4->mp_prev = NULL;
      v4->mp_next = NULL;
      v4->m_data = v3;
      ntl::internal::list_head_base<ntl::internal::list_node<unsigned int>>::insert_before(&s_scriptableSv_reservedFreeList.m_listHead, (ntl::internal::list_node<unsigned int> *)&s_scriptableSv_reservedFreeList.m_listHead, v4);
      ++v3;
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v3 < g_scriptableWorldCounts.runtimeInstanceCount );
  }
}

/*
==============
ScriptableSv_IsLinkingEnabled
==============
*/
_BOOL8 ScriptableSv_IsLinkingEnabled()
{
  return s_svScriptablesLinkingEnabled;
}

/*
==============
ScriptableSv_LinkReservedScriptableEntity
==============
*/
char ScriptableSv_LinkReservedScriptableEntity(const gentity_s *const entity, const ScriptableDef *const scriptableDef, unsigned int scriptableIndex)
{
  unsigned int runtimeInstanceCount; 
  unsigned int number; 
  bool IsCharacterEntityIndex; 
  const DObj *ServerDObjForEnt; 
  int Index; 
  const XCompositeModelDef *CompositeModel; 
  __int16 v12; 
  unsigned int v13; 
  const dvar_t *v14; 
  unsigned int scriptableIndexa; 

  scriptableIndexa = scriptableIndex;
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 547, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( ScriptableSv_GetScriptableIndexForEntity(entity) < runtimeInstanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 548, ASSERT_TYPE_ASSERT, "( !ScriptableSv_IsReservedScriptableEntity( entity ) )", (const char *)&queryFormat, "!ScriptableSv_IsReservedScriptableEntity( entity )") )
    __debugbreak();
  if ( !scriptableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 363, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  number = entity->s.number;
  if ( (scriptableDef->flags & 0x2000) != 0 )
  {
    Com_PrintError(29, "ScriptableSv_LinkReservedScriptable: Error assigning scriptable '%s' for entity %i - The scriptable def explicitly disables entity support.\n", scriptableDef->name, number);
    return 0;
  }
  IsCharacterEntityIndex = BG_IsCharacterEntityIndex(number);
  ServerDObjForEnt = Com_GetServerDObjForEnt(entity);
  Index = G_XCompositeModel_GetIndex(entity);
  if ( Index )
  {
    CompositeModel = G_Utils_GetCompositeModel(Index);
    if ( !ScriptableSv_LinkReservedScriptable_AssignInstance_Internal(scriptableDef, ServerDObjForEnt, CompositeModel, 0, &entity->r.currentOrigin, &entity->r.currentAngles, 0, 0, &scriptableIndexa) )
    {
      Com_PrintError(15, "ScriptableSv_LinkReservedScriptable: Error assigning composite model scriptable to entity %i\n", (unsigned int)entity->s.number);
      return 0;
    }
  }
  else if ( !ScriptableSv_LinkReservedScriptable_AssignInstance_Internal(scriptableDef, ServerDObjForEnt, NULL, IsCharacterEntityIndex, &entity->r.currentOrigin, &entity->r.currentAngles, 0, 0, &scriptableIndexa) )
  {
    Com_PrintError(15, "ScriptableSv_LinkReservedScriptable: Error assigning scriptable to entity %i\n", (unsigned int)entity->s.number);
    return 0;
  }
  v12 = entity->s.number;
  if ( entity->s.number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)v12, "signed", v12) )
    __debugbreak();
  v13 = scriptableIndexa;
  ScriptableSv_LinkReservedScriptable_AssignNetworkData(scriptableDef, scriptableIndexa, MOVEMENT, 0, v12, 0);
  ScriptableSv_SetOriginAndAngles(v13, &entity->r.currentOrigin, &entity->r.currentAngles);
  ScriptableSv_SetScriptableIndexForEntity(v13, entity);
  ScriptableSv_AddToUpdateLists(v13, scriptableDef);
  if ( scriptableDef->networkLODRangeOverride )
    ScriptableSv_RegisterNetworkLODRangeOverrideEntity(entity);
  v14 = DVARBOOL_scriptable_debugLinking;
  if ( !DVARBOOL_scriptable_debugLinking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugLinking") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
    Com_Printf(29, "Server Scriptable Link Entity: index:%u ent:%i def:%s\n", v13, (unsigned int)entity->s.number, scriptableDef->name);
  return 1;
}

/*
==============
ScriptableSv_LinkReservedScriptableStandalone
==============
*/
char ScriptableSv_LinkReservedScriptableStandalone(const ScriptableDef *const scriptableDef, const vec3_t *origin, const vec3_t *angles, const unsigned __int16 payload, const unsigned __int16 extraPayload, const unsigned __int16 defIndex, const unsigned int inScriptableIndex, unsigned int *outScriptableIndex)
{
  ScriptableReplicatedType v12; 
  char result; 
  const dvar_t *v14; 

  if ( !scriptableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 619, ASSERT_TYPE_ASSERT, "( scriptableDef )", (const char *)&queryFormat, "scriptableDef") )
    __debugbreak();
  if ( (scriptableDef->flags & 0x2000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 620, ASSERT_TYPE_ASSERT, "( scriptableDef->flags & (1 << 13) )", (const char *)&queryFormat, "scriptableDef->flags & SCRIPTABLE_DEFFLAG_NO_ENTITY") )
    __debugbreak();
  *outScriptableIndex = inScriptableIndex;
  if ( ScriptableSv_LinkReservedScriptable_AssignInstance_Internal(scriptableDef, NULL, NULL, 0, origin, angles, payload, extraPayload, outScriptableIndex) )
  {
    LOBYTE(v12) = 1;
    ScriptableSv_LinkReservedScriptable_AssignNetworkData(scriptableDef, *outScriptableIndex, v12, defIndex, payload, extraPayload);
    ScriptableSv_SetOriginAndAngles(*outScriptableIndex, origin, angles);
    ScriptableSv_AddToUpdateLists(*outScriptableIndex, scriptableDef);
    v14 = DVARBOOL_scriptable_debugLinking;
    if ( !DVARBOOL_scriptable_debugLinking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugLinking") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      Com_Printf(29, "Server Scriptable Link Standalone: index:%u def:%s\n", *outScriptableIndex, scriptableDef->name);
    return 1;
  }
  else
  {
    Com_PrintError(15, "ScriptableSv_LinkReservedScriptable: Error assigning standalone def %s\n", scriptableDef->name);
    result = 0;
    *outScriptableIndex = -1;
  }
  return result;
}

/*
==============
ScriptableSv_LinkReservedScriptable_AssignInstance_Internal
==============
*/
char ScriptableSv_LinkReservedScriptable_AssignInstance_Internal(const ScriptableDef *const scriptableDef, const DObj *const obj, const XCompositeModelDef *const compositeModel, const bool isCharacterEntity, const vec3_t *origin, const vec3_t *angles, const unsigned __int16 payload, const unsigned __int16 extraPayload, unsigned int *inOutScriptableIndex)
{
  int flags; 
  __int64 serverInstancedPartCount; 
  __int64 v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  const ScriptableDef *def; 
  unsigned int v20; 
  ntl::internal::list_node_base *mp_next; 
  unsigned __int16 eventStreamSizeRequiredServer; 
  unsigned __int8 *EventStreamBuffer; 
  ScriptableInstanceContext *InstanceCommonContext; 
  bool v25; 
  unsigned int v26; 
  __int64 v27; 
  ScriptablePartRuntime *v28; 
  char *fmt; 
  char *fmta; 
  __int64 v31; 
  __int64 v32; 

  if ( !scriptableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 314, ASSERT_TYPE_ASSERT, "( scriptableDef )", (const char *)&queryFormat, "scriptableDef") )
    __debugbreak();
  if ( !s_svScriptablesLinkingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 317, ASSERT_TYPE_ASSERT, "( s_svScriptablesLinkingEnabled )", (const char *)&queryFormat, "s_svScriptablesLinkingEnabled") )
    __debugbreak();
  if ( g_svScriptablesInitialized )
  {
    flags = scriptableDef->flags;
    if ( (flags & 2) != 0 )
    {
      if ( isCharacterEntity || (flags & 0x800) == 0 )
      {
        serverInstancedPartCount = scriptableDef->serverInstancedPartCount;
        v15 = g_scriptableSVReservedPartRuntimeFreeHead;
        v16 = 0;
        v17 = 0;
        if ( (_DWORD)serverInstancedPartCount )
        {
          while ( (unsigned int)v15 < g_scriptableSVReservedPartRuntimeCount )
          {
            LODWORD(v15) = g_scriptableSVReservedPartRuntimes[v15].nextRuntime;
            if ( ++v17 >= (unsigned int)serverInstancedPartCount )
              goto LABEL_24;
          }
          LODWORD(fmt) = g_scriptableSVReservedPartRuntimeCount;
          Com_Printf(29, "ScriptableSv_LinkReservedScriptable: Reserved (GSC or code spawned) Scriptable %s needs %i parts and we've hit the max of %i.  See below for current usage\n", scriptableDef->name, serverInstancedPartCount, fmt);
          v18 = 0;
          ScriptableCommon_AssertCountsInitialized();
          if ( g_scriptableWorldCounts.runtimeInstanceCount )
          {
            do
            {
              if ( ScriptableSv_GetInstanceCommonContext(v18)->linkedObjectType )
              {
                def = ScriptableSv_GetInstanceCommonContext(v18)->def;
                if ( def )
                {
                  LODWORD(fmta) = def->serverInstancedPartCount;
                  Com_Printf(29, "Reserved Scriptable %i is %s and uses %i parts\n", v18, def->name, fmta);
                }
              }
              ++v18;
              ScriptableCommon_AssertCountsInitialized();
            }
            while ( v18 < g_scriptableWorldCounts.runtimeInstanceCount );
          }
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408F960, 107i64, scriptableDef->name);
        }
LABEL_24:
        v20 = *inOutScriptableIndex;
        if ( *inOutScriptableIndex == -1 )
        {
          if ( !ScriptableSv_AcquireFreeReservedScriptable(inOutScriptableIndex) )
          {
            ScriptableSv_PrintReservedScriptables();
            ScriptableCommon_AssertCountsInitialized();
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_14408FA20, 109i64, g_scriptableWorldCounts.runtimeInstanceCount);
          }
        }
        else
        {
          mp_next = s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next;
          if ( (ntl::internal::list_head_base<ntl::internal::list_node<unsigned int> > *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next == &s_scriptableSv_reservedFreeList.m_listHead )
          {
LABEL_34:
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408FAF0, 5810i64, v20);
          }
          else
          {
            while ( 1 )
            {
              if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              if ( LODWORD(mp_next[1].mp_prev) == v20 )
                break;
              mp_next = mp_next->mp_next;
              if ( mp_next == (ntl::internal::list_node_base *)&s_scriptableSv_reservedFreeList.m_listHead )
              {
                v20 = *inOutScriptableIndex;
                goto LABEL_34;
              }
            }
            ntl::internal::list_head_base<ntl::internal::list_node<unsigned int>>::remove(&s_scriptableSv_reservedFreeList.m_listHead, (ntl::internal::list_node<unsigned int> *)mp_next);
            mp_next->mp_prev = (ntl::internal::list_node_base *)s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next;
            s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
          }
        }
        eventStreamSizeRequiredServer = scriptableDef->eventStreamSizeRequiredServer;
        EventStreamBuffer = NULL;
        if ( eventStreamSizeRequiredServer )
        {
          EventStreamBuffer = Scriptable_Bg_AllocateEventStreamBuffer(isCharacterEntity, 1, LOCAL_CLIENT_0, eventStreamSizeRequiredServer);
          if ( !EventStreamBuffer )
          {
            ScriptableSv_ReleaseReservedScriptable(*inOutScriptableIndex);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408FB80, 110i64, scriptableDef->eventStreamSizeRequiredServer);
          }
          memset_0(EventStreamBuffer, 0, scriptableDef->eventStreamSizeRequiredServer);
        }
        if ( g_scriptableSv_updatingIndex == *inOutScriptableIndex )
        {
          LODWORD(v31) = g_scriptableSv_updatingIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 375, ASSERT_TYPE_ASSERT, "( g_scriptableSv_updatingIndex ) != ( inOutScriptableIndex )", "g_scriptableSv_updatingIndex != inOutScriptableIndex\n\t%i, %i", v31, *inOutScriptableIndex) )
            __debugbreak();
        }
        if ( g_damageProcessingScriptable == *inOutScriptableIndex )
        {
          LODWORD(v32) = *inOutScriptableIndex;
          LODWORD(v31) = g_damageProcessingScriptable;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 376, ASSERT_TYPE_ASSERT, "( g_damageProcessingScriptable ) != ( inOutScriptableIndex )", "g_damageProcessingScriptable != inOutScriptableIndex\n\t%i, %i", v31, v32) )
            __debugbreak();
        }
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(*inOutScriptableIndex);
        ScriptableSv_SetInitialOriginAndAngles(*inOutScriptableIndex, origin, angles);
        InstanceCommonContext->origin = *origin;
        InstanceCommonContext->angles = *angles;
        v25 = (*((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) & 0x20) == 0;
        InstanceCommonContext->payload = payload;
        InstanceCommonContext->extraPayload = extraPayload;
        InstanceCommonContext->partStateIndex = 0;
        InstanceCommonContext->def = scriptableDef;
        InstanceCommonContext->linkedObjectType = SCRIPTABLE_LINK_NONE;
        InstanceCommonContext->linkedObjectIndex = 0;
        if ( !v25 )
        {
          LODWORD(v31) = *inOutScriptableIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 399, ASSERT_TYPE_ASSERT, "( !r_context.hasParentEntity )", "Should not have a remaining parent on spawn (%i %s)", v31, scriptableDef->name) )
            __debugbreak();
        }
        ScriptableSv_SetDamageOwner(*inOutScriptableIndex, NULL);
        if ( obj && obj->numModels )
        {
          if ( compositeModel )
          {
            InstanceCommonContext->dataType = SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL;
          }
          else
          {
            InstanceCommonContext->dataType = SCRIPTABLE_DATA_TYPE_XMODEL;
            compositeModel = (const XCompositeModelDef *const)*obj->models;
          }
        }
        else
        {
          InstanceCommonContext->dataType = SCRIPTABLE_DATA_TYPE_INVALID;
          compositeModel = NULL;
        }
        v26 = 0;
        for ( InstanceCommonContext->data.compositeModel = compositeModel; v26 < scriptableDef->serverInstancedPartCount; InstanceCommonContext->reservedStateListHeader = v27 )
        {
          v27 = g_scriptableSVReservedPartRuntimeFreeHead;
          if ( g_scriptableSVReservedPartRuntimeFreeHead >= g_scriptableSVReservedPartRuntimeCount )
          {
            LODWORD(v32) = g_scriptableSVReservedPartRuntimeCount;
            LODWORD(v31) = g_scriptableSVReservedPartRuntimeFreeHead;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 430, ASSERT_TYPE_ASSERT, "(unsigned)( newPartIndex ) < (unsigned)( g_scriptableSVReservedPartRuntimeCount )", "newPartIndex doesn't index g_scriptableSVReservedPartRuntimeCount\n\t%i not in [0, %i)", v31, v32) )
              __debugbreak();
          }
          v28 = g_scriptableSVReservedPartRuntimes;
          ++v26;
          g_scriptableSVReservedPartRuntimeFreeHead = g_scriptableSVReservedPartRuntimes[v27].nextRuntime;
          g_scriptableSVReservedPartRuntimes[v27].stateId = 0;
          v28[v27].nextRuntime = InstanceCommonContext->reservedStateListHeader;
        }
        InstanceCommonContext->eventStreamBufferSize = scriptableDef->eventStreamSizeRequiredServer;
        if ( scriptableDef->eventStreamSizeRequiredServer )
        {
          if ( !EventStreamBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 448, ASSERT_TYPE_ASSERT, "(eventStreamBuffer != nullptr)", (const char *)&queryFormat, "eventStreamBuffer != nullptr") )
            __debugbreak();
          InstanceCommonContext->eventStreamBuffer = EventStreamBuffer;
        }
        if ( scriptableDef->numParts )
        {
          do
            ScriptableSv_SetPartStateFirst(*inOutScriptableIndex, scriptableDef, &scriptableDef->parts[v16++]);
          while ( v16 < scriptableDef->numParts );
        }
        Scriptable_Analytics_AddScriptableCount(Scriptable_Analytics_Zone_SC_Reserved_S, 1);
        Scriptable_Analytics_AddPartCount(Scriptable_Analytics_Zone_SC_Reserved_S, scriptableDef->serverControlledPartCount);
        Scriptable_Analytics_AddRuntimeMemoryCount(Scriptable_Analytics_Zone_SC_Reserved_S, scriptableDef->eventStreamSizeRequiredServer);
        Scriptable_Analytics_AddScriptableCount(Scriptable_Analytics_Zone_SC_Reserved_C, 1);
        Scriptable_Analytics_AddPartCount(Scriptable_Analytics_Zone_SC_Reserved_C, scriptableDef->partCount);
        Scriptable_Analytics_AddRuntimeMemoryCount(Scriptable_Analytics_Zone_SC_Reserved_C, scriptableDef->eventStreamSizeRequiredClient);
        return 1;
      }
      else
      {
        Com_PrintError(15, "Trying to link a reserved scriptable with a character only def (%s) which is not a character.", scriptableDef->name);
        return 0;
      }
    }
    else
    {
      Com_PrintError(15, "Trying to link a reserved scriptable with a client only def (%s)\n", scriptableDef->name);
      return 0;
    }
  }
  else
  {
    Com_PrintError(15, "ScriptableSv_LinkReservedScriptable: Trying to create a linked scriptable before the system is initialized\n");
    return 0;
  }
}

/*
==============
ScriptableSv_LinkReservedScriptable_AssignNetworkData
==============
*/
void ScriptableSv_LinkReservedScriptable_AssignNetworkData(const ScriptableDef *const scriptableDef, const unsigned int scriptableIndex, const ScriptableReplicatedType replicatedType, const unsigned __int16 defIndex, const unsigned __int16 payload, const unsigned __int16 extraPayload)
{
  unsigned __int8 v7; 
  unsigned int serverControlledPartCount; 
  ScriptableReplicatedInstance *ReplicatedInstanceRefLocal; 
  __int64 v12; 
  __int64 v13; 
  unsigned int outFirstIndex; 

  v7 = replicatedType;
  if ( !scriptableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 499, ASSERT_TYPE_ASSERT, "( scriptableDef )", (const char *)&queryFormat, "scriptableDef") )
    __debugbreak();
  serverControlledPartCount = scriptableDef->serverControlledPartCount;
  if ( serverControlledPartCount > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)serverControlledPartCount, "unsigned", scriptableDef->serverControlledPartCount) )
    __debugbreak();
  if ( (_BYTE)serverControlledPartCount )
  {
    if ( !ScriptablePartAllocator::AllocateParts(&s_reservedPartAllocator, serverControlledPartCount, &outFirstIndex) )
    {
      ScriptableSv_PrintReservedScriptables();
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408FFC0);
    }
    ReplicatedInstanceRefLocal = ScriptableSv_GetReplicatedInstanceRefLocal(scriptableIndex);
    if ( ReplicatedInstanceRefLocal->instanceIndex != -1 )
    {
      LODWORD(v13) = -1;
      LODWORD(v12) = ReplicatedInstanceRefLocal->instanceIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 517, ASSERT_TYPE_ASSERT, "( r_instance.instanceIndex ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "r_instance.instanceIndex == SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v12, v13) )
        __debugbreak();
    }
    ReplicatedInstanceRefLocal->instanceIndex = scriptableIndex;
    ReplicatedInstanceRefLocal->partIndex = outFirstIndex;
    ReplicatedInstanceRefLocal->partCount = serverControlledPartCount;
    if ( v7 >= 2u )
    {
      LODWORD(v13) = 2;
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 528, ASSERT_TYPE_ASSERT, "(unsigned)( replicatedType ) < (unsigned)( static_cast<int>( ScriptableReplicatedType::COUNT ) )", "replicatedType doesn't index static_cast<int>( ScriptableReplicatedType::COUNT )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    ReplicatedInstanceRefLocal->replicatedType[0] = v7;
    if ( defIndex >= 0x200u )
    {
      LODWORD(v13) = 512;
      LODWORD(v12) = defIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( defIndex ) < (unsigned)( SCRIPTABLE_NCS_DEF_LIMIT )", "defIndex doesn't index SCRIPTABLE_NCS_DEF_LIMIT\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    ReplicatedInstanceRefLocal->payload = payload;
    ReplicatedInstanceRefLocal->extraPayload = extraPayload;
    ReplicatedInstanceRefLocal->defIndex = defIndex;
    *(_QWORD *)&ReplicatedInstanceRefLocal->angles.m_pitch = 0i64;
    ReplicatedInstanceRefLocal->origin.m_data = 0i64;
    ScriptableSv_ResetReservedParts(outFirstIndex, serverControlledPartCount);
  }
}

/*
==============
ScriptableSv_PrintReservedScriptables
==============
*/
void ScriptableSv_PrintReservedScriptables(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 
  const ScriptableDef *def; 
  __int64 v4; 

  Com_Printf(131101, "Reserved Scriptables:\n");
  v0 = 0;
  v1 = 0;
  v2 = 0;
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.runtimeInstanceCount )
  {
    do
    {
      def = ScriptableSv_GetInstanceCommonContext(v2)->def;
      if ( def )
      {
        v1 += def->partCount;
        ++v0;
        if ( ScriptableSv_GetInstanceHasEntity(v2) )
        {
          LODWORD(v4) = ScriptableSv_GetInstanceCommonContext(v2)->linkedObjectIndex;
          Com_Printf(131101, "  Id %4i has %2d parts, def %s. Linked Ent %i.\n", v2, def->partCount, def->name, v4);
        }
        else
        {
          Com_Printf(131101, "  Id %4i has %2d parts, def %s.\n", v2, def->partCount, def->name);
        }
      }
      ++v2;
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v2 < g_scriptableWorldCounts.runtimeInstanceCount );
  }
  ScriptableCommon_AssertCountsInitialized();
  Com_Printf(131101, "  Total Instances: %3d / %3d\n", v0, g_scriptableWorldCounts.runtimeInstanceCount);
  Com_Printf(131101, "  Total Parts: %3d / %3d\n", v1, g_scriptableWorldCounts.runtimePartCount);
  ScriptablePartAllocator::PrintUsage(&s_reservedPartAllocator);
}

/*
==============
ScriptableSv_ReleaseReservedScriptable
==============
*/
void ScriptableSv_ReleaseReservedScriptable(const unsigned int scriptableIndex)
{
  int *v1; 
  __int64 v3; 
  ntl::internal::list_node_base *i; 
  unsigned __int64 mp_prev_low; 
  unsigned __int64 v6; 
  const dvar_t *v7; 
  ntl::internal::list_node<unsigned int> *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<unsigned int> > *p_m_listHead; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  int v14[64]; 

  v1 = v14;
  v3 = 4i64;
  do
  {
    *(_QWORD *)v1 = 0i64;
    *((_QWORD *)v1 + 1) = 0i64;
    *((_QWORD *)v1 + 2) = 0i64;
    v1 += 16;
    *((_QWORD *)v1 - 5) = 0i64;
    *((_QWORD *)v1 - 4) = 0i64;
    *((_QWORD *)v1 - 3) = 0i64;
    *((_QWORD *)v1 - 2) = 0i64;
    *((_QWORD *)v1 - 1) = 0i64;
    --v3;
  }
  while ( v3 );
  for ( i = s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)&s_scriptableSv_reservedFreeList.m_listHead; v14[v6 >> 5] |= 0x80000000 >> (v6 & 0x1F) )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( LODWORD(i[1].mp_prev) == scriptableIndex )
    {
      LODWORD(v10) = scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 211, ASSERT_TYPE_ASSERT, "( *itr != scriptableIndex )", "Adding duplicate scriptable %i to the free list", v10) )
        __debugbreak();
    }
    if ( ScriptableSv_GetInstanceInUse((const unsigned int)i[1].mp_prev) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 212, ASSERT_TYPE_ASSERT, "( !ScriptableSv_GetInstanceInUse( *itr ) )", (const char *)&queryFormat, "!ScriptableSv_GetInstanceInUse( *itr )") )
      __debugbreak();
    mp_prev_low = LODWORD(i[1].mp_prev);
    if ( (unsigned int)mp_prev_low >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = i[1].mp_prev;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (mp_prev_low & 0x1F)) & v14[mp_prev_low >> 5]) != 0 )
    {
      LODWORD(v10) = i[1].mp_prev;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 213, ASSERT_TYPE_ASSERT, "( !reserveBitfield.testBit( *itr ) )", "Existing duplicate scriptable %i to the free list", v10) )
        __debugbreak();
    }
    v6 = LODWORD(i[1].mp_prev);
    if ( (unsigned int)v6 >= 0x800 )
    {
      LODWORD(v13) = 2048;
      LODWORD(v12) = i[1].mp_prev;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v12, v13) )
        __debugbreak();
    }
    i = i->mp_next;
  }
  v7 = DVARBOOL_scriptable_sv_debug_reuse_instances;
  if ( !DVARBOOL_scriptable_sv_debug_reuse_instances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_debug_reuse_instances") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    if ( !s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<24> *)s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next == &s_scriptableSv_reservedFreeList.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x800ui64) )
      __debugbreak();
    mp_next = (ntl::internal::list_node<unsigned int> *)s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next;
    s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next = s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next->mp_next;
    mp_next->mp_prev = NULL;
    mp_next->mp_next = NULL;
    mp_next->m_data = scriptableIndex;
    p_m_listHead = (ntl::internal::list_head_base<ntl::internal::list_node<unsigned int> > *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next;
  }
  else
  {
    if ( !s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<24> *)s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next == &s_scriptableSv_reservedFreeList.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x800ui64) )
      __debugbreak();
    mp_next = (ntl::internal::list_node<unsigned int> *)s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next;
    p_m_listHead = &s_scriptableSv_reservedFreeList.m_listHead;
    s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next = s_scriptableSv_reservedFreeList.m_freelist.m_head.mp_next->mp_next;
    mp_next->mp_prev = NULL;
    mp_next->mp_next = NULL;
    mp_next->m_data = scriptableIndex;
  }
  ntl::internal::list_head_base<ntl::internal::list_node<unsigned int>>::insert_before(&s_scriptableSv_reservedFreeList.m_listHead, (ntl::internal::list_node<unsigned int> *)p_m_listHead, mp_next);
}

/*
==============
ScriptableSv_ResetReservedParts
==============
*/
void ScriptableSv_ResetReservedParts(const unsigned int partFirstIndex, const unsigned __int8 serverControlledPartCount)
{
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 

  v3 = partFirstIndex;
  v4 = partFirstIndex + serverControlledPartCount;
  if ( v4 > g_scriptableSv_replicatedLimits.partWorldLimits[1] )
  {
    v6 = g_scriptableSv_replicatedLimits.partWorldLimits[1];
    v5 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 492, ASSERT_TYPE_ASSERT, "( partFirstIndex + serverControlledPartCount ) <= ( g_scriptableSv_replicatedLimits.partWorldLimits[reservedWorldIndex] )", "partFirstIndex + serverControlledPartCount <= g_scriptableSv_replicatedLimits.partWorldLimits[reservedWorldIndex]\n\t%i, %i", v5, v6) )
      __debugbreak();
  }
  memset_0(&g_scriptableSv_partWorldState.groups[1].partData[v3], 0, serverControlledPartCount);
}

/*
==============
ScriptableSv_UnlinkInstance
==============
*/
void ScriptableSv_UnlinkInstance(const unsigned int scriptableIndex, const bool isCharacterEntity)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  const char **p_name; 
  scrContext_t *v6; 
  const char *v7; 
  scrContext_t *v8; 
  const char *v9; 
  const dvar_t *v10; 
  unsigned __int8 *eventStreamBuffer; 
  int v12; 
  ScriptableReplicatedInstance *ReplicatedInstanceRefLocal; 
  ScriptableReplicatedInstance *v14; 
  ScriptableWorldType v15; 
  unsigned int instanceIndex; 
  int v17; 
  unsigned int i; 
  __int64 reservedStateListHeader; 
  ScriptablePartRuntime *v20; 
  __int64 v21; 
  __int64 v22; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 660, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  p_name = &InstanceCommonContext->def->name;
  if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 666, ASSERT_TYPE_ASSERT, "( scriptableDef )", (const char *)&queryFormat, "scriptableDef") )
    __debugbreak();
  if ( g_scriptableSv_updatingIndex == scriptableIndex )
  {
    v6 = ScriptContext_Server();
    v7 = j_va("ScriptableSv_UnlinkReservedScriptable: Trying to unlink a scriptable %s that we are updating.  If the callstack shows the script VM and the scriptable update call, you should add a waitframe or similar.", *p_name);
    Scr_Error(COM_ERR_1884, v6, v7);
  }
  if ( g_damageProcessingScriptable == scriptableIndex )
  {
    v8 = ScriptContext_Server();
    v9 = j_va("ScriptableSv_UnlinkReservedScriptable: Trying to unlink a scriptable %s that we are damaging.  If the callstack shows the script VM and the scriptable update call, you should add a waitframe or similar.  If not, this is probably a code bug.", *p_name);
    Scr_Error(COM_ERR_1885, v8, v9);
  }
  v10 = DVARBOOL_scriptable_debugLinking;
  if ( !DVARBOOL_scriptable_debugLinking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugLinking") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
    Com_Printf(29, "Server Scriptable UnLink Index %i Def %s\n", scriptableIndex, *p_name);
  if ( (*((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) & 0x20) != 0 )
  {
    ScriptableSv_StandaloneClearParentEntity(scriptableIndex);
    if ( (*((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) & 0x20) != 0 )
    {
      LODWORD(v22) = scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 690, ASSERT_TYPE_ASSERT, "( ( !r_context.hasParentEntity ) )", "%s\n\t( scriptableIndex ) = %i", "( !r_context.hasParentEntity )", v22) )
        __debugbreak();
    }
  }
  ScriptableSv_ShutdownInstance(scriptableIndex);
  eventStreamBuffer = InstanceCommonContext->eventStreamBuffer;
  if ( eventStreamBuffer )
  {
    Scriptable_Bg_ReleaseEventStreamBuffer(isCharacterEntity, 1, LOCAL_CLIENT_0, eventStreamBuffer);
    InstanceCommonContext->eventStreamBufferSize = 0;
    InstanceCommonContext->eventStreamBuffer = NULL;
  }
  v12 = *((_DWORD *)p_name + 11);
  ReplicatedInstanceRefLocal = ScriptableSv_GetReplicatedInstanceRefLocal(scriptableIndex);
  v14 = ReplicatedInstanceRefLocal;
  if ( !v12 )
  {
    instanceIndex = ReplicatedInstanceRefLocal->instanceIndex;
    if ( instanceIndex == -1 )
      goto LABEL_35;
    v17 = 725;
    goto LABEL_33;
  }
  if ( ReplicatedInstanceRefLocal->instanceIndex == -1 )
  {
    LODWORD(v22) = -1;
    LODWORD(v21) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 707, ASSERT_TYPE_ASSERT, "( r_freedInstance.instanceIndex ) != ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "r_freedInstance.instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v21, v22) )
      __debugbreak();
  }
  v15 = *((_DWORD *)p_name + 11);
  if ( v14->partCount != v15 )
  {
    LODWORD(v22) = *((_DWORD *)p_name + 11);
    LODWORD(v21) = v14->partCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 708, ASSERT_TYPE_ASSERT, "( r_freedInstance.partCount ) == ( scriptableDef->serverControlledPartCount )", "r_freedInstance.partCount == scriptableDef->serverControlledPartCount\n\t%i, %i", v21, v22) )
      __debugbreak();
  }
  LOBYTE(v15) = 1;
  ScriptableSv_InvalidateStatesEventTracking(v15, v14->partIndex, v14->partCount);
  ScriptableSv_ResetReservedParts(v14->partIndex, v14->partCount);
  ScriptablePartAllocator::FreeParts(&s_reservedPartAllocator, v14->partIndex, v14->partCount);
  ScriptableCommon_ClearReplicatedInstance(v14);
  instanceIndex = v14->instanceIndex;
  if ( v14->instanceIndex != -1 )
  {
    v17 = 719;
LABEL_33:
    LODWORD(v22) = -1;
    LODWORD(v21) = instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", v17, ASSERT_TYPE_ASSERT, "( r_freedInstance.instanceIndex ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "r_freedInstance.instanceIndex == SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v21, v22) )
      __debugbreak();
  }
LABEL_35:
  for ( i = 0; i < *((_DWORD *)p_name + 10); g_scriptableSVReservedPartRuntimeFreeHead = reservedStateListHeader )
  {
    reservedStateListHeader = InstanceCommonContext->reservedStateListHeader;
    if ( (unsigned int)reservedStateListHeader >= g_scriptableSVReservedPartRuntimeCount )
    {
      LODWORD(v22) = g_scriptableSVReservedPartRuntimeCount;
      LODWORD(v21) = InstanceCommonContext->reservedStateListHeader;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 735, ASSERT_TYPE_ASSERT, "(unsigned)( newPartIndex ) < (unsigned)( g_scriptableSVReservedPartRuntimeCount )", "newPartIndex doesn't index g_scriptableSVReservedPartRuntimeCount\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    ++i;
    v20 = &g_scriptableSVReservedPartRuntimes[reservedStateListHeader];
    InstanceCommonContext->reservedStateListHeader = v20->nextRuntime;
    v20->stateId = 0;
    v20->nextRuntime = g_scriptableSVReservedPartRuntimeFreeHead;
  }
  ScriptableSv_ClearLink(scriptableIndex);
  Scriptable_Analytics_AddRuntimeMemoryCount(Scriptable_Analytics_Zone_SC_Reserved_C, -*((unsigned __int16 *)p_name + 29));
  Scriptable_Analytics_AddPartCount(Scriptable_Analytics_Zone_SC_Reserved_C, -*((_DWORD *)p_name + 9));
  Scriptable_Analytics_AddScriptableCount(Scriptable_Analytics_Zone_SC_Reserved_C, -1);
  Scriptable_Analytics_AddRuntimeMemoryCount(Scriptable_Analytics_Zone_SC_Reserved_S, -*((unsigned __int16 *)p_name + 28));
  Scriptable_Analytics_AddPartCount(Scriptable_Analytics_Zone_SC_Reserved_S, -*((_DWORD *)p_name + 11));
  Scriptable_Analytics_AddScriptableCount(Scriptable_Analytics_Zone_SC_Reserved_S, -1);
  ScriptableSv_ReleaseReservedScriptable(scriptableIndex);
  InstanceCommonContext->def = NULL;
}

/*
==============
ScriptableSv_UnlinkReservedScriptableEntity
==============
*/
void ScriptableSv_UnlinkReservedScriptableEntity(const gentity_s *const entity)
{
  unsigned int ScriptableIndexForEntity; 
  const dvar_t *v3; 
  bool IsCharacterEntityIndex; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 770, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !s_svScriptablesLinkingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 773, ASSERT_TYPE_ASSERT, "( s_svScriptablesLinkingEnabled )", (const char *)&queryFormat, "s_svScriptablesLinkingEnabled") )
    __debugbreak();
  ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(entity);
  ScriptableCommon_AssertCountsInitialized();
  if ( ScriptableIndexForEntity < g_scriptableWorldCounts.runtimeInstanceCount )
  {
    v3 = DVARBOOL_scriptable_debugLinking;
    if ( !DVARBOOL_scriptable_debugLinking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugLinking") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
      Com_Printf(29, "Server Scriptable UnLink ent %i\n", (unsigned int)entity->s.number);
    IsCharacterEntityIndex = BG_IsCharacterEntityIndex(entity->s.number);
    ScriptableSv_UnregisterNetworkLODRangeOverrideEntity(entity);
    ScriptableSv_RemoveFromAllUpdateLists(ScriptableIndexForEntity);
    ScriptableSv_ClearScriptableIndexForEntity(ScriptableIndexForEntity, entity);
    ScriptableSv_UnlinkInstance(ScriptableIndexForEntity, IsCharacterEntityIndex);
  }
  else
  {
    Com_PrintError(15, "Trying to unlink a reserved scriptable that has not been allocated (entity num %i, scriptableIndex %i)\n", (unsigned int)entity->s.number, ScriptableIndexForEntity);
  }
}

/*
==============
ScriptableSv_UnlinkReservedScriptableStandalone
==============
*/
void ScriptableSv_UnlinkReservedScriptableStandalone(const unsigned int scriptableIndex)
{
  __int64 v2; 
  unsigned int v3; 
  unsigned int runtimeInstanceCount; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    v3 = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 805, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v3, runtimeInstanceCount) )
      __debugbreak();
  }
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    LODWORD(v2) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 806, ASSERT_TYPE_ASSERT, "( !ScriptableSv_GetInstanceHasEntity( scriptableIndex ) )", "Should not call ScriptableSv_UnlinkReservedScriptableStandalone for entity bindings, use ScriptableSv_UnlinkReservedScriptable (%i)", v2) )
      __debugbreak();
  }
  ScriptableSv_RemoveFromAllUpdateLists(scriptableIndex);
  ScriptableSv_RemoveStandaloneInstance(scriptableIndex);
  ScriptableSv_UnlinkInstance(scriptableIndex, 0);
}

/*
==============
ScriptableSv_UpdateReservedScriptableEntityBinding
==============
*/
void ScriptableSv_UpdateReservedScriptableEntityBinding(const gentity_s *const entity, const ScriptableDef *const scriptableDef)
{
  unsigned int ScriptableIndexForEntity; 
  const ScriptableDef *def; 
  const char *name; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  unsigned int v13; 
  const dvar_t *v14; 
  bool IsCharacterEntityIndex; 
  __int64 v16; 

  if ( !s_svScriptablesLinkingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 832, ASSERT_TYPE_ASSERT, "( s_svScriptablesLinkingEnabled )", (const char *)&queryFormat, "s_svScriptablesLinkingEnabled") )
    __debugbreak();
  ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(entity);
  if ( ScriptableIndexForEntity == -1 )
    goto LABEL_37;
  ScriptableCommon_AssertCountsInitialized();
  if ( ScriptableIndexForEntity >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    LODWORD(v16) = entity->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 840, ASSERT_TYPE_ASSERT, "( scriptableIndex < ScriptableCommon_GetReservedInstanceCount() )", "Trying to bind a reserved def to a non-reserved entity %i", v16) )
      __debugbreak();
  }
  if ( !scriptableDef )
  {
LABEL_23:
    if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 770, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
      __debugbreak();
    if ( !s_svScriptablesLinkingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 773, ASSERT_TYPE_ASSERT, "( s_svScriptablesLinkingEnabled )", (const char *)&queryFormat, "s_svScriptablesLinkingEnabled") )
      __debugbreak();
    v13 = ScriptableSv_GetScriptableIndexForEntity(entity);
    ScriptableCommon_AssertCountsInitialized();
    if ( v13 < g_scriptableWorldCounts.runtimeInstanceCount )
    {
      v14 = DVARBOOL_scriptable_debugLinking;
      if ( !DVARBOOL_scriptable_debugLinking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugLinking") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.enabled )
        Com_Printf(29, "Server Scriptable UnLink ent %i\n", (unsigned int)entity->s.number);
      IsCharacterEntityIndex = BG_IsCharacterEntityIndex(entity->s.number);
      ScriptableSv_UnregisterNetworkLODRangeOverrideEntity(entity);
      ScriptableSv_RemoveFromAllUpdateLists(v13);
      ScriptableSv_ClearScriptableIndexForEntity(v13, entity);
      ScriptableSv_UnlinkInstance(v13, IsCharacterEntityIndex);
    }
    else
    {
      Com_PrintError(15, "Trying to unlink a reserved scriptable that has not been allocated (entity num %i, scriptableIndex %i)\n", (unsigned int)entity->s.number, v13);
    }
LABEL_37:
    if ( scriptableDef )
      ScriptableSv_LinkReservedScriptableEntity(entity, scriptableDef, ScriptableIndexForEntity);
    return;
  }
  def = ScriptableSv_GetInstanceCommonContext(ScriptableIndexForEntity)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 846, ASSERT_TYPE_ASSERT, "( existingDef != nullptr )", "The server should not have reserved links that don't have a def set") )
    __debugbreak();
  name = def->name;
  v7 = 0x7FFFFFFFi64;
  v8 = scriptableDef->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v9 = name - v8;
  do
  {
    v10 = v8[v9];
    v11 = v7;
    v12 = *v8++;
    --v7;
    if ( !v11 )
      break;
    if ( v10 != v12 )
      goto LABEL_23;
  }
  while ( v10 );
}

/*
==============
ScriptableSv_ValidateEntityLinks
==============
*/
void ScriptableSv_ValidateEntityLinks(void)
{
  unsigned int runtimeInstanceCount; 
  unsigned int ReplicatedInstanceLimit; 
  __int64 v2; 
  int *v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned __int64 v6; 
  char v7; 
  unsigned __int64 v8; 
  int *v9; 
  unsigned int i; 
  __int64 v11; 
  unsigned __int64 ScriptableIndexForEntity; 
  ScriptableReplicatedInstance *ReplicatedInstanceRefLocal; 
  unsigned __int8 v14; 
  ntl::internal::list_node_base *mp_next; 
  int v16; 
  unsigned __int64 mp_prev_low; 
  unsigned int v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int v22; 
  ScriptableReplicatedInstance *v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  int v28[64]; 
  int v29[64]; 

  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( runtimeInstanceCount > ScriptableSv_GetReplicatedInstanceLimit() )
  {
    ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 871, ASSERT_TYPE_ASSERT, "( ScriptableCommon_GetReservedInstanceCount() ) <= ( ScriptableSv_GetReplicatedInstanceLimit() )", "ScriptableCommon_GetReservedInstanceCount() <= ScriptableSv_GetReplicatedInstanceLimit()\n\t%i, %i", g_scriptableWorldCounts.runtimeInstanceCount, ReplicatedInstanceLimit) )
      __debugbreak();
  }
  v2 = 4i64;
  v3 = v28;
  v4 = 4i64;
  do
  {
    *(_QWORD *)v3 = -1i64;
    *((_QWORD *)v3 + 1) = -1i64;
    *((_QWORD *)v3 + 2) = -1i64;
    v3 += 16;
    *((_QWORD *)v3 - 5) = -1i64;
    *((_QWORD *)v3 - 4) = -1i64;
    *((_QWORD *)v3 - 3) = -1i64;
    *((_QWORD *)v3 - 2) = -1i64;
    *((_QWORD *)v3 - 1) = -1i64;
    --v4;
  }
  while ( v4 );
  ScriptableCommon_AssertCountsInitialized();
  v5 = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( g_scriptableWorldCounts.runtimeInstanceCount < 0x800 )
  {
    v6 = g_scriptableWorldCounts.runtimeInstanceCount;
    do
    {
      v7 = v5 & 0x1F;
      v8 = v6 >> 5;
      ++v5;
      ++v6;
      v28[v8] &= ~(0x80000000 >> v7);
    }
    while ( v5 < 0x800 );
    v2 = 4i64;
  }
  v9 = v29;
  do
  {
    *(_QWORD *)v9 = 0i64;
    *((_QWORD *)v9 + 1) = 0i64;
    *((_QWORD *)v9 + 2) = 0i64;
    v9 += 16;
    *((_QWORD *)v9 - 5) = 0i64;
    *((_QWORD *)v9 - 4) = 0i64;
    *((_QWORD *)v9 - 3) = 0i64;
    *((_QWORD *)v9 - 2) = 0i64;
    *((_QWORD *)v9 - 1) = 0i64;
    --v2;
  }
  while ( v2 );
  for ( i = 0; i < 0x800; ++i )
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v11 = (int)i;
    if ( g_entities[v11].r.isInUse != g_entityIsInUse[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[i] )
    {
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(&g_entities[v11]);
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)ScriptableIndexForEntity < g_scriptableWorldCounts.runtimeInstanceCount )
      {
        ReplicatedInstanceRefLocal = ScriptableSv_GetReplicatedInstanceRefLocal(ScriptableIndexForEntity);
        v14 = ReplicatedInstanceRefLocal->replicatedType[0];
        if ( v14 )
        {
          LODWORD(v26) = v14;
          LODWORD(v25) = ScriptableIndexForEntity;
          LODWORD(v24) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 895, ASSERT_TYPE_ASSERT, "( reservedInstance.replicatedType == ScriptableReplicatedType::ENTITY )", "Mismatch: E%d S%d %d", v24, v25, v26) )
            __debugbreak();
        }
        if ( ReplicatedInstanceRefLocal->instanceIndex != (_DWORD)ScriptableIndexForEntity )
        {
          LODWORD(v26) = ReplicatedInstanceRefLocal->instanceIndex;
          LODWORD(v25) = ScriptableIndexForEntity;
          LODWORD(v24) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 896, ASSERT_TYPE_ASSERT, "( reservedInstance.instanceIndex == scriptableIndex )", "Mismatch: E%d S%d %d", v24, v25, v26) )
            __debugbreak();
        }
        if ( ReplicatedInstanceRefLocal->payload != i )
        {
          LODWORD(v26) = ReplicatedInstanceRefLocal->payload;
          LODWORD(v25) = ScriptableIndexForEntity;
          LODWORD(v24) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 897, ASSERT_TYPE_ASSERT, "( reservedInstance.payload == entityIndex )", "Mismatch: E%d S%d %d", v24, v25, v26) )
            __debugbreak();
        }
        if ( (unsigned int)ScriptableIndexForEntity >= 0x800 )
        {
          LODWORD(v27) = 2048;
          LODWORD(v26) = ScriptableIndexForEntity;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
            __debugbreak();
        }
        v28[ScriptableIndexForEntity >> 5] &= ~(0x80000000 >> (ScriptableIndexForEntity & 0x1F));
      }
    }
  }
  mp_next = s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next;
  v16 = 0;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<unsigned int> > *)s_scriptableSv_reservedFreeList.m_listHead.m_sentinel.mp_next != &s_scriptableSv_reservedFreeList.m_listHead )
  {
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_prev_low = LODWORD(mp_next[1].mp_prev);
      if ( (unsigned int)mp_prev_low >= 0x800 )
      {
        LODWORD(v25) = 2048;
        LODWORD(v24) = mp_next[1].mp_prev;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v24, v25) )
          __debugbreak();
      }
      v18 = 0x80000000 >> (mp_prev_low & 0x1F);
      v19 = mp_prev_low >> 5;
      if ( (v18 & v28[v19]) == 0 )
      {
        LODWORD(v25) = mp_prev_low;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 907, ASSERT_TYPE_ASSERT, "( ( unmappedReservedInstance.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( unmappedReservedInstance.testBit( scriptableIndex ) )", v25) )
          __debugbreak();
      }
      if ( (unsigned int)mp_prev_low >= 0x800 )
      {
        LODWORD(v25) = 2048;
        LODWORD(v24) = mp_prev_low;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v24, v25) )
          __debugbreak();
      }
      if ( (v18 & v29[v19]) != 0 )
      {
        LODWORD(v24) = mp_prev_low;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 909, ASSERT_TYPE_ASSERT, "( !reserveBitfield.testBit( scriptableIndex ) )", "Existing duplicate scriptable %i to the free list", v24) )
          __debugbreak();
      }
      if ( (unsigned int)mp_prev_low >= 0x800 )
      {
        LODWORD(v27) = 2048;
        LODWORD(v26) = mp_prev_low;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
          __debugbreak();
      }
      v29[v19] |= v18;
      mp_next = mp_next->mp_next;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&s_scriptableSv_reservedFreeList.m_listHead );
    v16 = 0;
  }
  v20 = v28[0];
  while ( v20 )
  {
LABEL_63:
    v22 = __lzcnt(v20);
    if ( v22 >= 0x20 )
    {
      LODWORD(v25) = 32;
      LODWORD(v24) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    if ( (v20 & (0x80000000 >> v22)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v20 &= ~(0x80000000 >> v22);
    v23 = ScriptableSv_GetReplicatedInstanceRefLocal(v22 + 32 * v16);
    if ( !v23->replicatedType[0] )
    {
      LODWORD(v25) = v23->instanceIndex;
      LODWORD(v24) = v23->payload;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_link.cpp", 918, ASSERT_TYPE_ASSERT, "( reservedInstance.replicatedType != ScriptableReplicatedType::ENTITY )", "Mismatch: E%d S%d", v24, v25) )
        __debugbreak();
    }
  }
  while ( 1 )
  {
    v21 = (unsigned int)(v16 + 1);
    v16 = v21;
    if ( (unsigned int)v21 >= 0x40 )
      break;
    v20 = v28[v21];
    if ( v20 )
      goto LABEL_63;
  }
}

