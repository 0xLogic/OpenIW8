/*
==============
DB_AssetEntryTable::RemoveStashedAsset
==============
*/

void __fastcall DB_AssetEntryTable::RemoveStashedAsset(DB_AssetEntryTable *this, DB_AssetEntry *removeEntry, DB_AssetEntry *prevEntry)
{
  ?RemoveStashedAsset@DB_AssetEntryTable@@QEAAXAEAVDB_AssetEntry@@0@Z(this, removeEntry, prevEntry);
}

/*
==============
DB_AssetEntryTable::AddToStashTail
==============
*/

void __fastcall DB_AssetEntryTable::AddToStashTail(DB_AssetEntryTable *this, DB_AssetEntry *newEntry, DB_AssetEntry *headEntry)
{
  ?AddToStashTail@DB_AssetEntryTable@@QEAAXAEAVDB_AssetEntry@@0@Z(this, newEntry, headEntry);
}

/*
==============
DB_AssetEntryTable::ValidateEntry
==============
*/

void __fastcall DB_AssetEntryTable::ValidateEntry(DB_AssetEntryTable *this, const DB_AssetEntry *assetEntry)
{
  ?ValidateEntry@DB_AssetEntryTable@@AEBAXAEBVDB_AssetEntry@@@Z(this, assetEntry);
}

/*
==============
DB_AssetEntryTable::FindAsset
==============
*/

DB_AssetEntry *__fastcall DB_AssetEntryTable::FindAsset(DB_AssetEntryTable *this, const char *name, XAssetType type)
{
  return ?FindAsset@DB_AssetEntryTable@@QEAAPEAVDB_AssetEntry@@PEBDW4XAssetType@@@Z(this, name, type);
}

/*
==============
DB_AssetEntryTable::FindHeadAssetByHeader
==============
*/

DB_AssetEntry *__fastcall DB_AssetEntryTable::FindHeadAssetByHeader(DB_AssetEntryTable *this, XAssetHeader header, XAssetType type)
{
  return ?FindHeadAssetByHeader@DB_AssetEntryTable@@QEAAPEAVDB_AssetEntry@@TXAssetHeader@@W4XAssetType@@@Z(this, header, type);
}

/*
==============
DB_AssetEntryTable::FindAssetByZone
==============
*/

DB_AssetEntry *__fastcall DB_AssetEntryTable::FindAssetByZone(DB_AssetEntryTable *this, const char *name, XAssetType type, int zoneIndex)
{
  return ?FindAssetByZone@DB_AssetEntryTable@@QEAAPEAVDB_AssetEntry@@PEBDW4XAssetType@@H@Z(this, name, type, zoneIndex);
}

/*
==============
DB_AssetEntryTable::Init
==============
*/

void __fastcall DB_AssetEntryTable::Init(DB_AssetEntryTable *this)
{
  ?Init@DB_AssetEntryTable@@QEAAXXZ(this);
}

/*
==============
DB_AssetEntryTable::AddToTable
==============
*/

void __fastcall DB_AssetEntryTable::AddToTable(DB_AssetEntryTable *this, DB_AssetEntry *assetEntry)
{
  ?AddToTable@DB_AssetEntryTable@@QEAAXAEAVDB_AssetEntry@@@Z(this, assetEntry);
}

/*
==============
DB_AssetEntryTable::AddToStashHead
==============
*/

void __fastcall DB_AssetEntryTable::AddToStashHead(DB_AssetEntryTable *this, DB_AssetEntry *newEntry, DB_AssetEntry *headEntry)
{
  ?AddToStashHead@DB_AssetEntryTable@@QEAAXAEAVDB_AssetEntry@@0@Z(this, newEntry, headEntry);
}

/*
==============
DB_AssetEntryTable::MakeFirstStashedEntry
==============
*/

void __fastcall DB_AssetEntryTable::MakeFirstStashedEntry(DB_AssetEntryTable *this, DB_AssetEntry *stashedEntry, DB_AssetEntry *headEntry)
{
  ?MakeFirstStashedEntry@DB_AssetEntryTable@@QEAAXAEAVDB_AssetEntry@@0@Z(this, stashedEntry, headEntry);
}

/*
==============
DB_AssetEntryTable::GetNumCollisions
==============
*/

unsigned int __fastcall DB_AssetEntryTable::GetNumCollisions(DB_AssetEntryTable *this)
{
  return ?GetNumCollisions@DB_AssetEntryTable@@QEBAIXZ(this);
}

/*
==============
DB_ValidateTableEntry
==============
*/

void __fastcall DB_ValidateTableEntry(const DB_AssetEntry *assetEntry)
{
  ?DB_ValidateTableEntry@@YAXAEBVDB_AssetEntry@@@Z(assetEntry);
}

/*
==============
DB_AssetEntryTable::RemoveFromTable
==============
*/

void __fastcall DB_AssetEntryTable::RemoveFromTable(DB_AssetEntryTable *this, DB_AssetEntry *assetEntry)
{
  ?RemoveFromTable@DB_AssetEntryTable@@QEAAXAEAVDB_AssetEntry@@@Z(this, assetEntry);
}

/*
==============
DB_AssetEntryTable::ValidateStash
==============
*/

void __fastcall DB_AssetEntryTable::ValidateStash(DB_AssetEntryTable *this, const DB_AssetEntry *assetEntry)
{
  ?ValidateStash@DB_AssetEntryTable@@AEBAXAEBVDB_AssetEntry@@@Z(this, assetEntry);
}

/*
==============
DB_AssetEntryTable::FindAssetByHeader
==============
*/

DB_AssetEntry *__fastcall DB_AssetEntryTable::FindAssetByHeader(DB_AssetEntryTable *this, XAssetHeader header, XAssetType type)
{
  return ?FindAssetByHeader@DB_AssetEntryTable@@QEAAPEAVDB_AssetEntry@@TXAssetHeader@@W4XAssetType@@@Z(this, header, type);
}

/*
==============
DB_AssetEntryTable::Validate
==============
*/

void __fastcall DB_AssetEntryTable::Validate(DB_AssetEntryTable *this)
{
  ?Validate@DB_AssetEntryTable@@QEBAXXZ(this);
}

/*
==============
DB_AssetEntryTable::AddToStashHead
==============
*/
void DB_AssetEntryTable::AddToStashHead(DB_AssetEntryTable *this, DB_AssetEntry *newEntry, DB_AssetEntry *headEntry)
{
  DB_AssetEntryFlags *p_m_tableEntries; 
  unsigned __int64 Index; 
  unsigned __int64 v8; 
  __int64 v9; 
  DB_AssetEntryFlags *p_m_headEntries; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  DB_AssetEntryFlags *v13; 

  p_m_tableEntries = &this->m_tableEntries;
  v13 = &this->m_tableEntries;
  Index = DB_AssetEntryPool::GetIndex(&this->m_pool, headEntry);
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v8 = 0x8000000000000000ui64 >> (Index & 0x3F);
  v9 = Index >> 6;
  if ( (v8 & p_m_tableEntries->m_flags.m_data[v9]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 89, ASSERT_TYPE_ASSERT, "(m_tableEntries.Test( headAssetEntryIndex ))", (const char *)&queryFormat, "m_tableEntries.Test( headAssetEntryIndex )") )
    __debugbreak();
  p_m_headEntries = &this->m_headEntries;
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v8 & p_m_headEntries->m_flags.m_data[v9]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 90, ASSERT_TYPE_ASSERT, "(m_headEntries.Test( headAssetEntryIndex ))", (const char *)&queryFormat, "m_headEntries.Test( headAssetEntryIndex )") )
    __debugbreak();
  v11 = DB_AssetEntryPool::GetIndex(&this->m_pool, newEntry);
  if ( v11 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v12 = 0x8000000000000000ui64 >> (v11 & 0x3F);
  if ( (v12 & v13->m_flags.m_data[v11 >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 95, ASSERT_TYPE_ASSERT, "(!m_tableEntries.Test( newAssetEntryIndex ))", (const char *)&queryFormat, "!m_tableEntries.Test( newAssetEntryIndex )") )
    __debugbreak();
  if ( v11 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v12 & p_m_headEntries->m_flags.m_data[v11 >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 96, ASSERT_TYPE_ASSERT, "(!m_headEntries.Test( newAssetEntryIndex ))", (const char *)&queryFormat, "!m_headEntries.Test( newAssetEntryIndex )") )
    __debugbreak();
  if ( newEntry->m_nextHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 98, ASSERT_TYPE_ASSERT, "(newEntry.GetNextHashIndex() == 0)", (const char *)&queryFormat, "newEntry.GetNextHashIndex() == 0") )
    __debugbreak();
  if ( newEntry->m_nextStashed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 99, ASSERT_TYPE_ASSERT, "(newEntry.GetNextStashedIndex() == 0)", (const char *)&queryFormat, "newEntry.GetNextStashedIndex() == 0") )
    __debugbreak();
  newEntry->m_nextStashed = headEntry->m_nextStashed;
  headEntry->m_nextStashed = v11;
  DB_AssetEntryFlags::Set(v13, v11);
}

/*
==============
DB_AssetEntryTable::AddToStashTail
==============
*/
void DB_AssetEntryTable::AddToStashTail(DB_AssetEntryTable *this, DB_AssetEntry *newEntry, DB_AssetEntry *headEntry)
{
  DB_AssetEntry *v4; 
  unsigned __int64 Index; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned int i; 
  __int64 v12; 

  v4 = headEntry;
  Index = DB_AssetEntryPool::GetIndex(&this->m_pool, headEntry);
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v7 = 0x8000000000000000ui64 >> (Index & 0x3F);
  if ( (v7 & this->m_tableEntries.m_flags.m_data[Index >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 55, ASSERT_TYPE_ASSERT, "(m_tableEntries.Test( headAssetEntryIndex ))", (const char *)&queryFormat, "m_tableEntries.Test( headAssetEntryIndex )") )
    __debugbreak();
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v7 & this->m_headEntries.m_flags.m_data[Index >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 56, ASSERT_TYPE_ASSERT, "(m_headEntries.Test( headAssetEntryIndex ))", (const char *)&queryFormat, "m_headEntries.Test( headAssetEntryIndex )") )
    __debugbreak();
  v8 = DB_AssetEntryPool::GetIndex(&this->m_pool, newEntry);
  if ( v8 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v9 = 0x8000000000000000ui64 >> (v8 & 0x3F);
  v10 = v8 >> 6;
  if ( (v9 & this->m_tableEntries.m_flags.m_data[v10]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 61, ASSERT_TYPE_ASSERT, "(!m_tableEntries.Test( newAssetEntryIndex ))", (const char *)&queryFormat, "!m_tableEntries.Test( newAssetEntryIndex )") )
    __debugbreak();
  if ( v8 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v9 & this->m_headEntries.m_flags.m_data[v10]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 62, ASSERT_TYPE_ASSERT, "(!m_headEntries.Test( newAssetEntryIndex ))", (const char *)&queryFormat, "!m_headEntries.Test( newAssetEntryIndex )") )
    __debugbreak();
  for ( i = v4->m_nextStashed; i; i = v4->m_nextStashed )
  {
    v12 = i;
    if ( i >= 0x5DA00ui64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
    v4 = (DB_AssetEntry *)((char *)this + 20 * v12);
  }
  if ( newEntry->m_nextHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 76, ASSERT_TYPE_ASSERT, "(newEntry.GetNextHashIndex() == 0)", (const char *)&queryFormat, "newEntry.GetNextHashIndex() == 0") )
    __debugbreak();
  if ( newEntry->m_nextStashed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 77, ASSERT_TYPE_ASSERT, "(newEntry.GetNextStashedIndex() == 0)", (const char *)&queryFormat, "newEntry.GetNextStashedIndex() == 0") )
    __debugbreak();
  v4->m_nextStashed = v8;
  DB_AssetEntryFlags::Set(&this->m_tableEntries, v8);
}

/*
==============
DB_AssetEntryTable::AddToTable
==============
*/
void DB_AssetEntryTable::AddToTable(DB_AssetEntryTable *this, DB_AssetEntry *assetEntry)
{
  int m_type; 
  const char *XAssetHeaderName; 
  unsigned int Hash; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  char *v11; 
  const char *v12; 
  __int64 v13; 
  const char *v14; 
  const char *v15; 
  int v16; 
  const char *v17; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int Index; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  __int64 v25; 

  if ( assetEntry->m_nextHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 25, ASSERT_TYPE_ASSERT, "(assetEntry.GetNextHashIndex() == 0)", (const char *)&queryFormat, "assetEntry.GetNextHashIndex() == 0") )
    __debugbreak();
  if ( assetEntry->m_nextStashed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 26, ASSERT_TYPE_ASSERT, "(assetEntry.GetNextStashedIndex() == 0)", (const char *)&queryFormat, "assetEntry.GetNextStashedIndex() == 0") )
    __debugbreak();
  m_type = assetEntry->m_type;
  XAssetHeaderName = DB_GetXAssetHeaderName(m_type, assetEntry->m_header);
  Hash = DB_AssetEntryTable::GetHash(XAssetHeaderName, (XAssetType)m_type);
  v7 = Hash;
  if ( Hash >= 0x5BA00 )
  {
    LODWORD(v24) = Hash;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 243, ASSERT_TYPE_ASSERT, "(unsigned)( hashIndex ) < (unsigned)( ( sizeof( *array_counter( m_hashTable ) ) + 0 ) )", "hashIndex doesn't index ARRAY_COUNT( m_hashTable )\n\t%i not in [0, %i)", v24, 375296) )
      __debugbreak();
  }
  v8 = this->m_hashTable[v7];
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = v8;
      if ( v8 >= 0x5DA00ui64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
      }
      v10 = (unsigned __int8)this->m_pool.m_pool.m_data.m_buffer[20 * v9 + 17];
      v11 = &this->m_pool.m_pool.m_data.m_buffer[20 * v9];
      if ( v10 == m_type )
      {
        v12 = DB_GetXAssetHeaderName(v10, *(const XAssetHeader *)v11);
        if ( !I_strcmp(v12, XAssetHeaderName) )
          break;
      }
      v8 = *((_DWORD *)v11 + 2);
      if ( !v8 )
        goto LABEL_25;
    }
    v13 = assetEntry->m_type;
    if ( (unsigned int)v13 >= 0x71 )
    {
      LODWORD(v25) = 113;
      LODWORD(v24) = assetEntry->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    v14 = g_assetNames[v13];
    v15 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 28, ASSERT_TYPE_ASSERT, "(FindAsset( assetEntry.GetName(), assetEntry.GetType() ) == nullptr)", "%s\n\t%s(%s) already in table", "FindAsset( assetEntry.GetName(), assetEntry.GetType() ) == nullptr", v15, v14) )
      __debugbreak();
  }
LABEL_25:
  v16 = assetEntry->m_type;
  v17 = DB_GetXAssetHeaderName(v16, assetEntry->m_header);
  v18 = DB_AssetEntryTable::GetHash(v17, (XAssetType)v16);
  v19 = v18;
  if ( v18 >= 0x5BA00 )
  {
    LODWORD(v25) = 375296;
    LODWORD(v24) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 32, ASSERT_TYPE_ASSERT, "(unsigned)( hash ) < (unsigned)( ( sizeof( *array_counter( m_hashTable ) ) + 0 ) )", "hash doesn't index ARRAY_COUNT( m_hashTable )\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  v20 = this->m_hashTable[v19];
  Index = DB_AssetEntryPool::GetIndex(&this->m_pool, assetEntry);
  this->m_hashTable[v19] = Index;
  assetEntry->m_nextHash = v20;
  if ( Index >= 0x5DA00ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v22 = 0x8000000000000000ui64 >> (Index & 0x3F);
  v23 = (unsigned __int64)Index >> 6;
  if ( (v22 & this->m_headEntries.m_flags.m_data[v23]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 41, ASSERT_TYPE_ASSERT, "(!m_headEntries.Test( assetEntryIndex ))", (const char *)&queryFormat, "!m_headEntries.Test( assetEntryIndex )") )
    __debugbreak();
  DB_AssetEntryFlags::Set(&this->m_headEntries, Index);
  if ( Index >= 0x5DA00ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v22 & this->m_tableEntries.m_flags.m_data[v23]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 43, ASSERT_TYPE_ASSERT, "(!m_tableEntries.Test( assetEntryIndex ))", (const char *)&queryFormat, "!m_tableEntries.Test( assetEntryIndex )") )
    __debugbreak();
  DB_AssetEntryFlags::Set(&this->m_tableEntries, Index);
}

/*
==============
DB_ValidateTableEntry
==============
*/
void DB_ValidateTableEntry(const DB_AssetEntry *assetEntry)
{
  const char *XAssetHeaderName; 
  const char *v3; 
  int v4; 
  const char *v5; 
  __int64 v6; 
  bool v7; 
  int v8; 
  const char *ZoneNameFromIndex; 
  bool v10; 
  bool v11; 
  bool v12; 
  bool v13; 
  __int64 m_type; 
  bool v15; 

  XAssetHeaderName = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
  v3 = XAssetHeaderName;
  if ( XAssetHeaderName )
  {
    if ( DB_IsAssetNameValid(XAssetHeaderName) )
      return;
    v8 = *((_WORD *)assetEntry + 9) & 0x7FF;
    if ( DB_Zones_IsValidZoneIndex(v8) )
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v8);
    else
      ZoneNameFromIndex = "<invalid>";
    v10 = SL_IsString(v3) != 0;
    v11 = Mem_Paged_IsInVirtualGrab(v3);
    v12 = DB_IsInDBMemory(v3);
    v13 = XB3XMem_IsInAuxMem(v3);
    m_type = assetEntry->m_type;
    v15 = v13;
    if ( (unsigned int)m_type >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", m_type, 113) )
      __debugbreak();
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 580, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid name in the DB for asset '%s'(%s), zone '%s'(%u). Name ptr (%p). isSLString=%d. isInVAGrab=%d. isInDBMemory=%d. isInAuxMem=%d.", v3, g_assetNames[m_type], ZoneNameFromIndex, v8, v3, v10, v11, v12, v15);
  }
  else
  {
    v4 = *((_WORD *)assetEntry + 9) & 0x7FF;
    if ( DB_Zones_IsValidZoneIndex(v4) )
      v5 = DB_Zones_GetZoneNameFromIndex(v4);
    else
      v5 = "<invalid>";
    v6 = assetEntry->m_type;
    if ( (unsigned int)v6 >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v6, 113) )
      __debugbreak();
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 556, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "nullptr name in the DB for asset (%s), zone '%s'(%u)", g_assetNames[v6], v5, v4);
  }
  if ( v7 )
    __debugbreak();
}

/*
==============
DB_AssetEntryTable::FindAsset
==============
*/
DB_AssetEntry *DB_AssetEntryTable::FindAsset(DB_AssetEntryTable *this, const char *name, XAssetType type)
{
  unsigned int Hash; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  char *v11; 
  const char *XAssetHeaderName; 

  Hash = DB_AssetEntryTable::GetHash(name, type);
  v7 = Hash;
  if ( Hash >= 0x5BA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 243, ASSERT_TYPE_ASSERT, "(unsigned)( hashIndex ) < (unsigned)( ( sizeof( *array_counter( m_hashTable ) ) + 0 ) )", "hashIndex doesn't index ARRAY_COUNT( m_hashTable )\n\t%i not in [0, %i)", Hash, 375296) )
    __debugbreak();
  v8 = this->m_hashTable[v7];
  if ( !v8 )
    return 0i64;
  while ( 1 )
  {
    v9 = v8;
    if ( v8 >= 0x5DA00ui64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
    v10 = (unsigned __int8)this->m_pool.m_pool.m_data.m_buffer[20 * v9 + 17];
    v11 = &this->m_pool.m_pool.m_data.m_buffer[20 * v9];
    if ( v10 == type )
    {
      XAssetHeaderName = DB_GetXAssetHeaderName(v10, *(const XAssetHeader *)v11);
      if ( !I_strcmp(XAssetHeaderName, name) )
        break;
    }
    v8 = *((_DWORD *)v11 + 2);
    if ( !v8 )
      return 0i64;
  }
  return (DB_AssetEntry *)v11;
}

/*
==============
DB_AssetEntryTable::FindAssetByHeader
==============
*/
DB_AssetEntry *DB_AssetEntryTable::FindAssetByHeader(DB_AssetEntryTable *this, XAssetHeader header, XAssetType type)
{
  const char *XAssetHeaderName; 
  unsigned int Hash; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  char *v11; 
  unsigned int v12; 
  __int64 v13; 
  bool v14; 
  char *v15; 
  __int64 v17; 
  const char *v18; 
  signed __int64 v19; 
  char v20; 
  __int64 v21; 
  char v22; 
  __int64 v23; 
  const char *v24; 
  signed __int64 v25; 
  char v26; 
  __int64 v27; 
  char v28; 
  __int64 v29; 

  if ( !header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 313, ASSERT_TYPE_ASSERT, "(header.data)", (const char *)&queryFormat, "header.data") )
    __debugbreak();
  XAssetHeaderName = DB_GetXAssetHeaderName(type, header);
  Hash = DB_AssetEntryTable::GetHash(XAssetHeaderName, type);
  v8 = Hash;
  if ( Hash >= 0x5BA00 )
  {
    LODWORD(v29) = Hash;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( hashIndex ) < (unsigned)( ( sizeof( *array_counter( m_hashTable ) ) + 0 ) )", "hashIndex doesn't index ARRAY_COUNT( m_hashTable )\n\t%i not in [0, %i)", v29, 375296) )
      __debugbreak();
  }
  v9 = this->m_hashTable[v8];
  if ( !v9 )
    return 0i64;
  while ( 1 )
  {
    v10 = v9;
    if ( v9 >= 0x5DA00ui64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
    v11 = &this->m_pool.m_pool.m_data.m_buffer[20 * v10];
    if ( *(PhysicsLibrary **)v11 == header.physicsLibrary )
      break;
    v12 = *((_DWORD *)v11 + 3);
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = v12;
        if ( v12 >= 0x5DA00ui64 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
        }
        v14 = *(PhysicsLibrary **)&this->m_pool.m_pool.m_data.m_buffer[20 * v13] == header.physicsLibrary;
        v15 = &this->m_pool.m_pool.m_data.m_buffer[20 * v13];
        if ( v14 )
          break;
        v12 = *((_DWORD *)v15 + 3);
        if ( !v12 )
          goto LABEL_22;
      }
      v17 = 0x7FFFFFFFi64;
      v18 = DB_GetXAssetHeaderName((unsigned __int8)v15[17], *(const XAssetHeader *)v15);
      if ( !XAssetHeaderName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v19 = XAssetHeaderName - v18;
      while ( 1 )
      {
        v20 = v18[v19];
        v21 = v17;
        v22 = *v18++;
        --v17;
        if ( !v21 )
          break;
        if ( v20 != v22 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 340, ASSERT_TYPE_ASSERT, "(I_strcmp( name, stashedEntry.GetName() ) == 0)", (const char *)&queryFormat, "I_strcmp( name, stashedEntry.GetName() ) == 0") )
            __debugbreak();
          return (DB_AssetEntry *)v15;
        }
        if ( !v20 )
          return (DB_AssetEntry *)v15;
      }
      return (DB_AssetEntry *)v15;
    }
LABEL_22:
    v9 = *((_DWORD *)v11 + 2);
    if ( !v9 )
      return 0i64;
  }
  v23 = 0x7FFFFFFFi64;
  v24 = DB_GetXAssetHeaderName((unsigned __int8)v11[17], *(const XAssetHeader *)v11);
  if ( !XAssetHeaderName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v25 = XAssetHeaderName - v24;
  while ( 1 )
  {
    v26 = v24[v25];
    v27 = v23;
    v28 = *v24++;
    --v23;
    if ( !v27 )
      break;
    if ( v26 != v28 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 328, ASSERT_TYPE_ASSERT, "(I_strcmp( name, entry.GetName() ) == 0)", (const char *)&queryFormat, "I_strcmp( name, entry.GetName() ) == 0") )
        __debugbreak();
      return (DB_AssetEntry *)v11;
    }
    if ( !v26 )
      return (DB_AssetEntry *)v11;
  }
  return (DB_AssetEntry *)v11;
}

/*
==============
DB_AssetEntryTable::FindAssetByZone
==============
*/
DB_AssetEntry *DB_AssetEntryTable::FindAssetByZone(DB_AssetEntryTable *this, const char *name, XAssetType type, int zoneIndex)
{
  unsigned int Hash; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  int v12; 
  char *v13; 
  const char *XAssetHeaderName; 
  unsigned int v16; 
  __int64 v17; 
  char *v18; 

  Hash = DB_AssetEntryTable::GetHash(name, type);
  v9 = Hash;
  if ( Hash >= 0x5BA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( hashIndex ) < (unsigned)( ( sizeof( *array_counter( m_hashTable ) ) + 0 ) )", "hashIndex doesn't index ARRAY_COUNT( m_hashTable )\n\t%i not in [0, %i)", Hash, 375296) )
    __debugbreak();
  v10 = this->m_hashTable[v9];
  if ( !v10 )
    return 0i64;
  while ( 1 )
  {
    v11 = v10;
    if ( v10 >= 0x5DA00ui64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
    v12 = (unsigned __int8)this->m_pool.m_pool.m_data.m_buffer[20 * v11 + 17];
    v13 = &this->m_pool.m_pool.m_data.m_buffer[20 * v11];
    if ( v12 == type )
    {
      XAssetHeaderName = DB_GetXAssetHeaderName(v12, *(const XAssetHeader *)v13);
      if ( !I_strcmp(XAssetHeaderName, name) )
        break;
    }
    v10 = *((_DWORD *)v13 + 2);
    if ( !v10 )
      return 0i64;
  }
  if ( (*((_WORD *)v13 + 9) & 0x7FF) == zoneIndex )
    return (DB_AssetEntry *)v13;
  v16 = *((_DWORD *)v13 + 3);
  if ( !v16 )
    return 0i64;
  while ( 1 )
  {
    v17 = v16;
    if ( v16 >= 0x5DA00ui64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
    v18 = &this->m_pool.m_pool.m_data.m_buffer[20 * v17];
    if ( (*((_WORD *)v18 + 9) & 0x7FF) == zoneIndex )
      break;
    v16 = *((_DWORD *)v18 + 3);
    if ( !v16 )
      return 0i64;
  }
  return (DB_AssetEntry *)((char *)this + 20 * v17);
}

/*
==============
DB_AssetEntryTable::FindHeadAssetByHeader
==============
*/
DB_AssetEntry *DB_AssetEntryTable::FindHeadAssetByHeader(DB_AssetEntryTable *this, XAssetHeader header, XAssetType type)
{
  const char *XAssetHeaderName; 
  unsigned int Hash; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  char *v11; 
  __int64 v13; 
  const char *v14; 
  signed __int64 v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  __int64 v19; 

  if ( !header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 360, ASSERT_TYPE_ASSERT, "(header.data)", (const char *)&queryFormat, "header.data") )
    __debugbreak();
  XAssetHeaderName = DB_GetXAssetHeaderName(type, header);
  Hash = DB_AssetEntryTable::GetHash(XAssetHeaderName, type);
  v8 = Hash;
  if ( Hash >= 0x5BA00 )
  {
    LODWORD(v19) = Hash;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 365, ASSERT_TYPE_ASSERT, "(unsigned)( hashIndex ) < (unsigned)( ( sizeof( *array_counter( m_hashTable ) ) + 0 ) )", "hashIndex doesn't index ARRAY_COUNT( m_hashTable )\n\t%i not in [0, %i)", v19, 375296) )
      __debugbreak();
  }
  v9 = this->m_hashTable[v8];
  if ( !v9 )
    return 0i64;
  while ( 1 )
  {
    v10 = v9;
    if ( v9 >= 0x5DA00ui64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
    v11 = &this->m_pool.m_pool.m_data.m_buffer[20 * v10];
    if ( *(PhysicsLibrary **)v11 == header.physicsLibrary )
      break;
    v9 = *((_DWORD *)v11 + 2);
    if ( !v9 )
      return 0i64;
  }
  v13 = 0x7FFFFFFFi64;
  v14 = DB_GetXAssetHeaderName((unsigned __int8)v11[17], *(const XAssetHeader *)v11);
  if ( !XAssetHeaderName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v15 = XAssetHeaderName - v14;
  while ( 1 )
  {
    v16 = v14[v15];
    v17 = v13;
    v18 = *v14++;
    --v13;
    if ( !v17 )
      break;
    if ( v16 != v18 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 375, ASSERT_TYPE_ASSERT, "(I_strcmp( name, entry.GetName() ) == 0)", (const char *)&queryFormat, "I_strcmp( name, entry.GetName() ) == 0") )
        __debugbreak();
      return (DB_AssetEntry *)v11;
    }
    if ( !v16 )
      return (DB_AssetEntry *)v11;
  }
  return (DB_AssetEntry *)v11;
}

/*
==============
DB_AssetEntryTable::GetNumCollisions
==============
*/
__int64 DB_AssetEntryTable::GetNumCollisions(DB_AssetEntryTable *this)
{
  unsigned int *m_hashTable; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 

  m_hashTable = this->m_hashTable;
  v3 = 0;
  v4 = 375296i64;
  do
  {
    v5 = *m_hashTable;
    if ( *m_hashTable )
    {
      while ( 1 )
      {
        v6 = v5;
        if ( v5 >= 0x5DA00ui64 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 352, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
        }
        v5 = *(_DWORD *)&this->m_pool.m_pool.m_data.m_buffer[20 * v6 + 8];
        if ( !v5 )
          break;
        ++v3;
      }
    }
    ++m_hashTable;
    --v4;
  }
  while ( v4 );
  return v3;
}

/*
==============
DB_AssetEntryTable::Init
==============
*/
void DB_AssetEntryTable::Init(DB_AssetEntryTable *this)
{
  DB_AssetEntryPool::Init(&this->m_pool);
  memset_0(this->m_hashTable, 0, 0x185E80ui64);
}

/*
==============
DB_AssetEntryTable::MakeFirstStashedEntry
==============
*/
void DB_AssetEntryTable::MakeFirstStashedEntry(DB_AssetEntryTable *this, DB_AssetEntry *stashedEntry, DB_AssetEntry *headEntry)
{
  unsigned __int64 Index; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned int m_nextStashed; 
  unsigned __int64 v12; 
  __int64 v13; 

  Index = DB_AssetEntryPool::GetIndex(&this->m_pool, headEntry);
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v7 = 0x8000000000000000ui64 >> (Index & 0x3F);
  if ( (v7 & this->m_tableEntries.m_flags.m_data[Index >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 112, ASSERT_TYPE_ASSERT, "(m_tableEntries.Test( headAssetEntryIndex ))", (const char *)&queryFormat, "m_tableEntries.Test( headAssetEntryIndex )") )
    __debugbreak();
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v7 & this->m_headEntries.m_flags.m_data[Index >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 113, ASSERT_TYPE_ASSERT, "(m_headEntries.Test( headAssetEntryIndex ))", (const char *)&queryFormat, "m_headEntries.Test( headAssetEntryIndex )") )
    __debugbreak();
  v8 = DB_AssetEntryPool::GetIndex(&this->m_pool, stashedEntry);
  if ( v8 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v9 = 0x8000000000000000ui64 >> (v8 & 0x3F);
  v10 = v8 >> 6;
  if ( (v9 & this->m_tableEntries.m_flags.m_data[v10]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 118, ASSERT_TYPE_ASSERT, "(m_tableEntries.Test( stashedAssetEntryIndex ))", (const char *)&queryFormat, "m_tableEntries.Test( stashedAssetEntryIndex )") )
    __debugbreak();
  if ( v8 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v9 & this->m_headEntries.m_flags.m_data[v10]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 119, ASSERT_TYPE_ASSERT, "(!m_headEntries.Test( stashedAssetEntryIndex ))", (const char *)&queryFormat, "!m_headEntries.Test( stashedAssetEntryIndex )") )
    __debugbreak();
  m_nextStashed = headEntry->m_nextStashed;
  if ( m_nextStashed != (_DWORD)v8 )
  {
    v12 = m_nextStashed;
    do
    {
      if ( !(_DWORD)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 135, ASSERT_TYPE_ASSERT, "(walkIndex != 0)", (const char *)&queryFormat, "walkIndex != 0") )
        __debugbreak();
      if ( v12 >= 0x5DA00 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
      }
      v13 = 5 * v12;
      v12 = *(unsigned int *)&this->m_pool.m_pool.m_data.m_buffer[20 * v12 + 12];
    }
    while ( (_DWORD)v12 != (_DWORD)v8 );
    *(_DWORD *)&this->m_pool.m_pool.m_data.m_buffer[4 * v13 + 12] = stashedEntry->m_nextStashed;
    stashedEntry->m_nextStashed = m_nextStashed;
    headEntry->m_nextStashed = v8;
  }
}

/*
==============
DB_AssetEntryTable::RemoveFromTable
==============
*/
void DB_AssetEntryTable::RemoveFromTable(DB_AssetEntryTable *this, DB_AssetEntry *assetEntry)
{
  int m_type; 
  const char *XAssetHeaderName; 
  unsigned int Hash; 
  __int64 v7; 
  unsigned __int64 Index; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  DB_AssetEntry *Entry; 
  unsigned int m_nextHash; 
  __int64 v13; 
  DB_AssetEntry *v14; 
  __int64 v15; 
  const char *v16; 
  const char *v17; 
  __int64 v18; 
  __int64 v19; 

  m_type = assetEntry->m_type;
  XAssetHeaderName = DB_GetXAssetHeaderName(m_type, assetEntry->m_header);
  Hash = DB_AssetEntryTable::GetHash(XAssetHeaderName, (XAssetType)m_type);
  v7 = Hash;
  if ( Hash >= 0x5BA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 165, ASSERT_TYPE_ASSERT, "(unsigned)( hash ) < (unsigned)( ( sizeof( *array_counter( m_hashTable ) ) + 0 ) )", "hash doesn't index ARRAY_COUNT( m_hashTable )\n\t%i not in [0, %i)", Hash, 375296) )
    __debugbreak();
  if ( assetEntry->m_nextStashed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 167, ASSERT_TYPE_ASSERT, "(assetEntry.GetNextStashedIndex() == 0)", (const char *)&queryFormat, "assetEntry.GetNextStashedIndex() == 0") )
    __debugbreak();
  Index = DB_AssetEntryPool::GetIndex(&this->m_pool, assetEntry);
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v9 = 0x8000000000000000ui64 >> (Index & 0x3F);
  v10 = Index >> 6;
  if ( (v9 & this->m_headEntries.m_flags.m_data[v10]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 171, ASSERT_TYPE_ASSERT, "(m_headEntries.Test( assetEntryIndex ))", (const char *)&queryFormat, "m_headEntries.Test( assetEntryIndex )") )
    __debugbreak();
  DB_AssetEntryFlags::Reset(&this->m_headEntries, Index);
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v9 & this->m_tableEntries.m_flags.m_data[v10]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 173, ASSERT_TYPE_ASSERT, "(m_tableEntries.Test( assetEntryIndex ))", (const char *)&queryFormat, "m_tableEntries.Test( assetEntryIndex )") )
    __debugbreak();
  DB_AssetEntryFlags::Reset(&this->m_tableEntries, Index);
  Entry = DB_AssetEntryPool::GetEntry(&this->m_pool, this->m_hashTable[v7]);
  m_nextHash = Entry->m_nextHash;
  if ( Entry == assetEntry )
  {
    this->m_hashTable[v7] = m_nextHash;
    assetEntry->m_nextHash = 0;
  }
  else if ( m_nextHash )
  {
    while ( 1 )
    {
      v13 = m_nextHash;
      if ( m_nextHash >= 0x5DA00ui64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
      }
      v14 = (DB_AssetEntry *)((char *)this + 20 * v13);
      if ( v14 == assetEntry )
        break;
      m_nextHash = v14->m_nextHash;
      Entry = (DB_AssetEntry *)((char *)this + 20 * v13);
      if ( !m_nextHash )
        goto LABEL_29;
    }
    Entry->m_nextHash = assetEntry->m_nextHash;
    assetEntry->m_nextHash = 0;
  }
  else
  {
LABEL_29:
    v15 = assetEntry->m_type;
    if ( (unsigned int)v15 >= 0x71 )
    {
      LODWORD(v19) = 113;
      LODWORD(v18) = assetEntry->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v16 = g_assetNames[v15];
    v17 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 211, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find %s(%s)", v17, v16) )
      __debugbreak();
  }
}

/*
==============
DB_AssetEntryTable::RemoveStashedAsset
==============
*/
void DB_AssetEntryTable::RemoveStashedAsset(DB_AssetEntryTable *this, DB_AssetEntry *removeEntry, DB_AssetEntry *prevEntry)
{
  unsigned __int64 Index; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 

  Index = DB_AssetEntryPool::GetIndex(&this->m_pool, removeEntry);
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v7 = 0x8000000000000000ui64 >> (Index & 0x3F);
  v9 = Index >> 6;
  if ( (v7 & this->m_tableEntries.m_flags.m_data[v9]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 219, ASSERT_TYPE_ASSERT, "(m_tableEntries.Test( removeAssetEntryIndex ))", (const char *)&queryFormat, "m_tableEntries.Test( removeAssetEntryIndex )") )
    __debugbreak();
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v7 & this->m_headEntries.m_flags.m_data[v9]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 220, ASSERT_TYPE_ASSERT, "(!m_headEntries.Test( removeAssetEntryIndex ))", (const char *)&queryFormat, "!m_headEntries.Test( removeAssetEntryIndex )") )
    __debugbreak();
  v8 = DB_AssetEntryPool::GetIndex(&this->m_pool, prevEntry);
  if ( v8 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (v8 & 0x3F)) & this->m_tableEntries.m_flags.m_data[v8 >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 224, ASSERT_TYPE_ASSERT, "(m_tableEntries.Test( prevAssetEntryIndex ))", (const char *)&queryFormat, "m_tableEntries.Test( prevAssetEntryIndex )") )
    __debugbreak();
  if ( removeEntry->m_nextHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 227, ASSERT_TYPE_ASSERT, "(removeEntry.GetNextHashIndex() == 0)", (const char *)&queryFormat, "removeEntry.GetNextHashIndex() == 0") )
    __debugbreak();
  if ( prevEntry->m_nextStashed != (_DWORD)Index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 228, ASSERT_TYPE_ASSERT, "(prevEntry.GetNextStashedIndex() == removeAssetEntryIndex)", (const char *)&queryFormat, "prevEntry.GetNextStashedIndex() == removeAssetEntryIndex") )
    __debugbreak();
  prevEntry->m_nextStashed = removeEntry->m_nextStashed;
  removeEntry->m_nextStashed = 0;
  DB_AssetEntryFlags::Reset(&this->m_tableEntries, Index);
}

/*
==============
DB_AssetEntryTable::Validate
==============
*/
void DB_AssetEntryTable::Validate(DB_AssetEntryTable *this)
{
  __int64 v1; 
  unsigned int *m_hashTable; 
  unsigned int m_nextHash; 
  unsigned __int64 v5; 
  const DB_AssetEntry *v6; 
  unsigned int i; 
  unsigned __int64 v8; 
  const DB_AssetEntry *v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  DB_AssetEntryFlags *p_m_tableEntries; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  ValidateEntryFunctor functor; 
  unsigned int *v18; 
  __int64 v19; 

  v1 = 375296i64;
  m_hashTable = this->m_hashTable;
  v18 = this->m_hashTable;
  v19 = 375296i64;
  do
  {
    m_nextHash = *m_hashTable;
    if ( *m_hashTable )
    {
      do
      {
        v5 = m_nextHash;
        if ( m_nextHash >= 0x5DA00ui64 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 352, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
        }
        v6 = (const DB_AssetEntry *)((char *)this + 20 * v5);
        if ( v5 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        if ( ((0x8000000000000000ui64 >> (v5 & 0x3F)) & this->m_headEntries.m_flags.m_data[v5 >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 487, ASSERT_TYPE_ASSERT, "(m_headEntries.Test( assetEntryIndex ))", (const char *)&queryFormat, "m_headEntries.Test( assetEntryIndex )") )
          __debugbreak();
        DB_AssetEntryTable::ValidateEntry(this, v6);
        for ( i = v6->m_nextStashed; i; i = v9->m_nextStashed )
        {
          v8 = i;
          if ( i >= 0x5DA00ui64 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 352, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
          }
          v9 = (const DB_AssetEntry *)((char *)this + 20 * v8);
          if ( v8 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
            __debugbreak();
          if ( ((0x8000000000000000ui64 >> (v8 & 0x3F)) & this->m_headEntries.m_flags.m_data[v8 >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 534, ASSERT_TYPE_ASSERT, "(!m_headEntries.Test( assetEntryIndex ))", (const char *)&queryFormat, "!m_headEntries.Test( assetEntryIndex )") )
            __debugbreak();
          DB_AssetEntryTable::ValidateEntry(this, v9);
        }
        m_nextHash = v6->m_nextHash;
      }
      while ( m_nextHash );
      m_hashTable = v18;
      v1 = v19;
    }
    ++m_hashTable;
    --v1;
    v18 = m_hashTable;
    v19 = v1;
  }
  while ( v1 );
  v10 = 0;
  functor.m_pool = &this->m_pool;
  v11 = 0;
  functor.m_hashTable = (const unsigned int (*)[375296])this->m_hashTable;
  v12 = 0;
  p_m_tableEntries = &this->m_tableEntries;
  do
  {
    DB_AssetEntryPool::ForEachInBlock<ValidateEntryFunctor>(&this->m_pool, &this->m_tableEntries, p_m_tableEntries->m_flags.m_data[0], v12, &functor);
    v12 += 64;
    ++v11;
    p_m_tableEntries = (DB_AssetEntryFlags *)((char *)p_m_tableEntries + 8);
  }
  while ( v11 < 0x1768 );
  v14 = 0i64;
  do
  {
    if ( v14 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits", functor.m_pool, functor.m_hashTable) )
      __debugbreak();
    v15 = 0x8000000000000000ui64 >> (v14 & 0x3F);
    v16 = v14 >> 6;
    if ( (v15 & this->m_headEntries.m_flags.m_data[v16]) != 0 && (v15 & this->m_tableEntries.m_flags.m_data[v16]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 506, ASSERT_TYPE_ASSERT, "(m_tableEntries.Test( i ))", (const char *)&queryFormat, "m_tableEntries.Test( i )") )
      __debugbreak();
    if ( v14 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v15 & this->m_tableEntries.m_flags.m_data[v16]) == 0 )
    {
      if ( v14 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      if ( (v15 & this->m_headEntries.m_flags.m_data[v16]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 511, ASSERT_TYPE_ASSERT, "(!m_headEntries.Test( i ))", (const char *)&queryFormat, "!m_headEntries.Test( i )") )
        __debugbreak();
    }
    ++v10;
    ++v14;
  }
  while ( v10 < 0x5DA00 );
}

/*
==============
DB_AssetEntryTable::ValidateEntry
==============
*/
void DB_AssetEntryTable::ValidateEntry(DB_AssetEntryTable *this, const DB_AssetEntry *assetEntry)
{
  DB_AssetEntryFlags *p_m_tableEntries; 
  unsigned __int64 Index; 

  p_m_tableEntries = &this->m_tableEntries;
  Index = DB_AssetEntryPool::GetIndex(&this->m_pool, assetEntry);
  if ( Index >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (Index & 0x3F)) & p_m_tableEntries->m_flags.m_data[Index >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 522, ASSERT_TYPE_ASSERT, "(m_tableEntries.Test( assetEntryIndex ))", (const char *)&queryFormat, "m_tableEntries.Test( assetEntryIndex )") )
    __debugbreak();
}

/*
==============
DB_AssetEntryTable::ValidateStash
==============
*/
void DB_AssetEntryTable::ValidateStash(DB_AssetEntryTable *this, const DB_AssetEntry *assetEntry)
{
  unsigned int i; 
  unsigned __int64 v4; 
  const DB_AssetEntry *v5; 

  for ( i = assetEntry->m_nextStashed; i; i = v5->m_nextStashed )
  {
    v4 = i;
    if ( i >= 0x5DA00ui64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 352, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
    v5 = (const DB_AssetEntry *)((char *)this + 20 * v4);
    if ( v4 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (v4 & 0x3F)) & this->m_headEntries.m_flags.m_data[v4 >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.cpp", 534, ASSERT_TYPE_ASSERT, "(!m_headEntries.Test( assetEntryIndex ))", (const char *)&queryFormat, "!m_headEntries.Test( assetEntryIndex )") )
      __debugbreak();
    DB_AssetEntryTable::ValidateEntry(this, v5);
  }
}

