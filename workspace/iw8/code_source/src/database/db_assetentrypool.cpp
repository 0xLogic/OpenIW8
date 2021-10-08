/*
==============
DB_AssetEntryPool::Free
==============
*/

void __fastcall DB_AssetEntryPool::Free(DB_AssetEntryPool *this, DB_AssetEntry *assetEntry)
{
  ?Free@DB_AssetEntryPool@@QEAAXPEAVDB_AssetEntry@@@Z(this, assetEntry);
}

/*
==============
DB_AssetEntryPool::AssetEntryLimitExceeded
==============
*/

void DB_AssetEntryPool::AssetEntryLimitExceeded(void)
{
  ?AssetEntryLimitExceeded@DB_AssetEntryPool@@CAXXZ();
}

/*
==============
DB_AssetEntryPool::AssetLimitExceeded
==============
*/

void __fastcall DB_AssetEntryPool::AssetLimitExceeded(XAssetType type, bool countCheckFailed)
{
  ?AssetLimitExceeded@DB_AssetEntryPool@@CAXW4XAssetType@@_N@Z(type, countCheckFailed);
}

/*
==============
DB_AssetEntryPool::Init
==============
*/

void __fastcall DB_AssetEntryPool::Init(DB_AssetEntryPool *this)
{
  ?Init@DB_AssetEntryPool@@QEAAXXZ(this);
}

/*
==============
DB_AssetEntryPool::Allocate
==============
*/

DB_AssetEntry *__fastcall DB_AssetEntryPool::Allocate(DB_AssetEntryPool *this, XAssetType type, int zoneIndex)
{
  return ?Allocate@DB_AssetEntryPool@@QEAAPEAVDB_AssetEntry@@W4XAssetType@@H@Z(this, type, zoneIndex);
}

/*
==============
DB_AssetEntryPool::Allocate
==============
*/
DB_AssetEntry *DB_AssetEntryPool::Allocate(DB_AssetEntryPool *this, XAssetType type, int zoneIndex)
{
  unsigned int AssetsUsedByType; 
  XAssetHeader v7; 
  ntl::internal::pool_allocator_freelist<20> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  unsigned __int64 v10; 
  __int16 v11; 
  unsigned int v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  __int64 v16; 
  __int64 v17; 

  DB_AssetUsage_AddEntry(type, zoneIndex);
  if ( DB_AssetUsage_GetAssetEntriesUsed() >= 0x5BA00 )
  {
    DB_DebugDump_DumpPoolInfo();
    Sys_Error((const ObfuscateErrorText)&stru_143DF8050, 375296i64);
  }
  AssetsUsedByType = DB_AssetUsage_GetAssetsUsedByType(type);
  if ( AssetsUsedByType > DB_GetShipPoolSize(type) )
    DB_AssetEntryPool::AssetLimitExceeded(type, 1);
  v7.physicsLibrary = DB_AllocXAssetHeader(type).physicsLibrary;
  if ( !v7.physicsLibrary )
    DB_AssetEntryPool::AssetLimitExceeded(type, 0);
  p_m_freelist = &this->m_pool.m_freelist;
  if ( !this->m_pool.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  mp_next = p_m_freelist->m_head.mp_next;
  if ( (ntl::internal::pool_allocator_freelist<20> *)p_m_freelist->m_head.mp_next == p_m_freelist )
  {
    DB_DebugDump_DumpPoolInfo();
    Sys_Error((const ObfuscateErrorText)&stru_143DF8050, 375296i64);
    mp_next = p_m_freelist->m_head.mp_next;
  }
  if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  if ( (ntl::internal::pool_allocator_freelist<20> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x14ui64, 0x5DA00ui64) )
    __debugbreak();
  v10 = (unsigned __int64)p_m_freelist->m_head.mp_next;
  p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
  if ( (unsigned int)zoneIndex >= 0x800 )
  {
    LODWORD(v17) = 2048;
    LODWORD(v16) = zoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentry.h", 34, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( MAX_ASSETENTRY_ZONE_INDICES )", "zoneIndex doesn't index MAX_ASSETENTRY_ZONE_INDICES\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  *(XAssetHeader *)v10 = v7;
  *(_QWORD *)(v10 + 8) = 0i64;
  *(_BYTE *)(v10 + 16) = 0;
  if ( (type < ASSET_TYPE_PHYSICSLIBRARY || (unsigned int)type > (ASSET_TYPE_ASSETLIST|ASSET_TYPE_SERIALIZEDSHADER|0x80)) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum XAssetType>(enum XAssetType)", "unsigned", (unsigned __int8)type, "signed", type) )
    __debugbreak();
  v11 = *(_WORD *)(v10 + 18);
  *(_BYTE *)(v10 + 17) = type;
  *(_WORD *)(v10 + 18) = zoneIndex & 0x7FF | v11 & 0xF000;
  if ( (v10 < (unsigned __int64)this || v10 >= (unsigned __int64)p_m_freelist) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 133, ASSERT_TYPE_ASSERT, "( contains_item( item ) )", (const char *)&queryFormat, "contains_item( item )") )
    __debugbreak();
  v12 = truncate_cast<unsigned int,unsigned __int64>((__int64)(v10 - (_QWORD)this) / 20);
  v13 = v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrypool.cpp", 63, ASSERT_TYPE_ASSERT, "(assetEntryIndex != 0)", (const char *)&queryFormat, "assetEntryIndex != 0") )
    __debugbreak();
  if ( v13 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v14 = 0x8000000000000000ui64 >> (v13 & 0x3F);
  if ( (v14 & this->m_allocatedFlags.m_flags.m_data[v13 >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrypool.cpp", 64, ASSERT_TYPE_ASSERT, "(!m_allocatedFlags.Test( assetEntryIndex ))", (const char *)&queryFormat, "!m_allocatedFlags.Test( assetEntryIndex )") )
    __debugbreak();
  if ( v13 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  this->m_allocatedFlags.m_flags.m_data[v13 >> 6] |= v14;
  return (DB_AssetEntry *)v10;
}

/*
==============
DB_AssetEntryPool::AssetEntryLimitExceeded
==============
*/
void DB_AssetEntryPool::AssetEntryLimitExceeded(void)
{
  DB_DebugDump_DumpPoolInfo();
  Sys_Error((const ObfuscateErrorText)&stru_143DF8050, 375296i64);
}

/*
==============
DB_AssetEntryPool::AssetLimitExceeded
==============
*/
void DB_AssetEntryPool::AssetLimitExceeded(XAssetType type, bool countCheckFailed)
{
  __int64 v2; 
  const char *v4; 
  unsigned int PoolSize; 
  unsigned int ShipPoolSize; 
  int v7; 
  int v8; 

  v2 = type;
  DB_DebugDump_DumpAssetNames(type);
  DB_DebugDump_DumpPoolInfo();
  v4 = "pool exhausted";
  if ( countCheckFailed )
    v4 = "ship count check";
  PoolSize = DB_GetPoolSize((XAssetType)v2);
  ShipPoolSize = DB_GetShipPoolSize((XAssetType)v2);
  if ( (unsigned int)v2 >= 0x71 )
  {
    v8 = 113;
    v7 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  Sys_Error((const ObfuscateErrorText)&stru_143DF7FF8, g_assetNames[v2], ShipPoolSize, PoolSize, v4);
}

/*
==============
DB_AssetEntryPool::Free
==============
*/
void DB_AssetEntryPool::Free(DB_AssetEntryPool *this, DB_AssetEntry *assetEntry)
{
  unsigned int v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 

  if ( !assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrypool.cpp", 73, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
    __debugbreak();
  if ( (assetEntry->m_inuse & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrypool.cpp", 74, ASSERT_TYPE_ASSERT, "(!assetEntry->TestInUse( ASSET_MASK_OWNS_RESOURCES ))", (const char *)&queryFormat, "!assetEntry->TestInUse( ASSET_MASK_OWNS_RESOURCES )") )
    __debugbreak();
  if ( assetEntry->m_nextHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrypool.cpp", 75, ASSERT_TYPE_ASSERT, "(assetEntry->GetNextHashIndex() == 0)", (const char *)&queryFormat, "assetEntry->GetNextHashIndex() == 0") )
    __debugbreak();
  if ( assetEntry->m_nextStashed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrypool.cpp", 76, ASSERT_TYPE_ASSERT, "(assetEntry->GetNextStashedIndex() == 0)", (const char *)&queryFormat, "assetEntry->GetNextStashedIndex() == 0") )
    __debugbreak();
  if ( (assetEntry < (DB_AssetEntry *)this || assetEntry >= (DB_AssetEntry *)&this->m_pool.m_freelist) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 133, ASSERT_TYPE_ASSERT, "( contains_item( item ) )", (const char *)&queryFormat, "contains_item( item )") )
    __debugbreak();
  v4 = truncate_cast<unsigned int,unsigned __int64>(((char *)assetEntry - (char *)this) / 20);
  v5 = v4;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrypool.cpp", 79, ASSERT_TYPE_ASSERT, "(assetEntryIndex != 0)", (const char *)&queryFormat, "assetEntryIndex != 0") )
    __debugbreak();
  v6 = v5;
  if ( v5 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v7 = v5 >> 6;
  v8 = 0x8000000000000000ui64 >> (v5 & 0x3F);
  if ( (v8 & this->m_allocatedFlags.m_flags.m_data[v6 >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrypool.cpp", 80, ASSERT_TYPE_ASSERT, "(m_allocatedFlags.Test( assetEntryIndex ))", (const char *)&queryFormat, "m_allocatedFlags.Test( assetEntryIndex )") )
    __debugbreak();
  DB_FreeXAssetHeader((XAssetType)assetEntry->m_type, assetEntry->m_header);
  DB_AssetUsage_RemoveEntry(assetEntry);
  if ( v6 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  this->m_allocatedFlags.m_flags.m_data[v7] &= ~v8;
  assetEntry->m_header.physicsLibrary = (PhysicsLibrary *)this->m_pool.m_freelist.m_head.mp_next;
  this->m_pool.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)assetEntry;
}

/*
==============
DB_AssetEntryPool::Init
==============
*/
void DB_AssetEntryPool::Init(DB_AssetEntryPool *this)
{
  ntl::internal::pool_allocator_freelist<20> *p_m_freelist; 
  unsigned __int64 mp_next; 

  p_m_freelist = &this->m_pool.m_freelist;
  if ( !this->m_pool.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<20> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x14ui64, 0x5DA00ui64) )
    __debugbreak();
  mp_next = (unsigned __int64)p_m_freelist->m_head.mp_next;
  p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
  if ( (mp_next < (unsigned __int64)this || mp_next >= (unsigned __int64)p_m_freelist) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 133, ASSERT_TYPE_ASSERT, "( contains_item( item ) )", (const char *)&queryFormat, "contains_item( item )") )
    __debugbreak();
  if ( (__int64)(mp_next - (_QWORD)this) / 20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrypool.cpp", 22, ASSERT_TYPE_ASSERT, "(m_pool.get_item_index( *reinterpret_cast<DB_AssetEntry*>( entryZero ) ) == 0)", (const char *)&queryFormat, "m_pool.get_item_index( *reinterpret_cast<DB_AssetEntry*>( entryZero ) ) == 0") )
    __debugbreak();
  memset_0(&this->m_allocatedFlags, 0, sizeof(this->m_allocatedFlags));
}

