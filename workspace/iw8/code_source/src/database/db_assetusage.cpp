/*
==============
DB_AssetUsage_GetAssetsUsedByType
==============
*/

unsigned int __fastcall DB_AssetUsage_GetAssetsUsedByType(const XAssetType type)
{
  return ?DB_AssetUsage_GetAssetsUsedByType@@YAIW4XAssetType@@@Z(type);
}

/*
==============
DB_AssetUsage_ResetMyChangesDefault
==============
*/

void __fastcall DB_AssetUsage_ResetMyChangesDefault(const DB_AssetEntry *const assetEntry)
{
  ?DB_AssetUsage_ResetMyChangesDefault@@YAXQEBVDB_AssetEntry@@@Z(assetEntry);
}

/*
==============
DB_AssetUsage_GetAssetEntriesUsed
==============
*/

unsigned int __fastcall DB_AssetUsage_GetAssetEntriesUsed()
{
  return ?DB_AssetUsage_GetAssetEntriesUsed@@YAIXZ();
}

/*
==============
DB_AssetUsage_AddExternalHeader
==============
*/

void __fastcall DB_AssetUsage_AddExternalHeader(const XAssetType type)
{
  ?DB_AssetUsage_AddExternalHeader@@YAXW4XAssetType@@@Z(type);
}

/*
==============
DB_AssetUsage_TestMyChangesDefault
==============
*/

bool __fastcall DB_AssetUsage_TestMyChangesDefault(const DB_AssetEntry *const assetEntry)
{
  return ?DB_AssetUsage_TestMyChangesDefault@@YA_NQEBVDB_AssetEntry@@@Z(assetEntry);
}

/*
==============
DB_AssetUsage_RemoveEntry
==============
*/

void __fastcall DB_AssetUsage_RemoveEntry(const DB_AssetEntry *const assetEntry)
{
  ?DB_AssetUsage_RemoveEntry@@YAXQEBVDB_AssetEntry@@@Z(assetEntry);
}

/*
==============
DB_AssetUsage_GetMaxAssetEntriesUsed
==============
*/

unsigned int __fastcall DB_AssetUsage_GetMaxAssetEntriesUsed()
{
  return ?DB_AssetUsage_GetMaxAssetEntriesUsed@@YAIXZ();
}

/*
==============
DB_AssetUsage_RemoveExternalHeader
==============
*/

void __fastcall DB_AssetUsage_RemoveExternalHeader(const XAssetType type)
{
  ?DB_AssetUsage_RemoveExternalHeader@@YAXW4XAssetType@@@Z(type);
}

/*
==============
DB_AssetUsage_SetMyChangesDefault
==============
*/

void __fastcall DB_AssetUsage_SetMyChangesDefault(const DB_AssetEntry *const assetEntry)
{
  ?DB_AssetUsage_SetMyChangesDefault@@YAXQEBVDB_AssetEntry@@@Z(assetEntry);
}

/*
==============
DB_AssetUsage_ResetValues
==============
*/

void DB_AssetUsage_ResetValues(void)
{
  ?DB_AssetUsage_ResetValues@@YAXXZ();
}

/*
==============
DB_AssetUsage_AddEntry
==============
*/

void __fastcall DB_AssetUsage_AddEntry(const XAssetType type, const unsigned int zoneIndex)
{
  ?DB_AssetUsage_AddEntry@@YAXW4XAssetType@@I@Z(type, zoneIndex);
}

/*
==============
DB_AssetUsage_AddEntry
==============
*/
void DB_AssetUsage_AddEntry(const XAssetType type, const unsigned int zoneIndex)
{
  __int64 v2; 
  unsigned int entryMaxUsedCount; 
  int v4; 
  int v5; 

  v2 = type;
  if ( !DB_Zones_IsDevZoneIndex(zoneIndex) )
  {
    entryMaxUsedCount = ++s_assetUsageCount.entryUsedCount;
    if ( s_assetUsageCount.entryMaxUsedCount > s_assetUsageCount.entryUsedCount )
      entryMaxUsedCount = s_assetUsageCount.entryMaxUsedCount;
    s_assetUsageCount.entryMaxUsedCount = entryMaxUsedCount;
    if ( (unsigned int)v2 >= 0x71 )
    {
      v5 = 113;
      v4 = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 81, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( s_assetUsageCount.typeUsedCount ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( s_assetUsageCount.typeUsedCount )\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    ++s_assetUsageCount.typeUsedCount[v2];
  }
}

/*
==============
DB_AssetUsage_AddExternalHeader
==============
*/
void DB_AssetUsage_AddExternalHeader(const XAssetType type)
{
  __int64 v1; 
  int v3; 

  v1 = type;
  if ( (unsigned int)type >= ASSET_TYPE_COUNT )
  {
    v3 = 113;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( s_assetUsageCount.typeUsedCount ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( s_assetUsageCount.typeUsedCount )\n\t%i not in [0, %i)", type, v3) )
      __debugbreak();
  }
  ++s_assetUsageCount.typeUsedCount[v1];
}

/*
==============
DB_AssetUsage_GetAssetEntriesUsed
==============
*/
__int64 DB_AssetUsage_GetAssetEntriesUsed()
{
  return s_assetUsageCount.entryUsedCount;
}

/*
==============
DB_AssetUsage_GetAssetsUsedByType
==============
*/
__int64 DB_AssetUsage_GetAssetsUsedByType(const XAssetType type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= ASSET_TYPE_COUNT )
  {
    v4 = 113;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 142, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( s_assetUsageCount.typeUsedCount ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( s_assetUsageCount.typeUsedCount )\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return s_assetUsageCount.typeUsedCount[v1];
}

/*
==============
DB_AssetUsage_GetMaxAssetEntriesUsed
==============
*/
__int64 DB_AssetUsage_GetMaxAssetEntriesUsed()
{
  return s_assetUsageCount.entryMaxUsedCount;
}

/*
==============
DB_AssetUsage_RemoveEntry
==============
*/
void DB_AssetUsage_RemoveEntry(const DB_AssetEntry *const assetEntry)
{
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v3; 
  __int64 m_type; 
  __int64 v5; 
  int v6; 

  if ( !DB_Zones_IsDevZoneIndex(*((_WORD *)assetEntry + 9) & 0x7FF) )
  {
    AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & s_assetUsageCount.devZoneDefaultAssets.m_flags.m_data[AssetEntryIndex >> 6]) != 0 )
    {
      v3 = DB_GetAssetEntryIndex(assetEntry);
      if ( v3 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      s_assetUsageCount.devZoneDefaultAssets.m_flags.m_data[v3 >> 6] &= ~(0x8000000000000000ui64 >> (v3 & 0x3F));
    }
    else
    {
      if ( !s_assetUsageCount.entryUsedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 99, ASSERT_TYPE_ASSERT, "(s_assetUsageCount.entryUsedCount > 0)", (const char *)&queryFormat, "s_assetUsageCount.entryUsedCount > 0") )
        __debugbreak();
      --s_assetUsageCount.entryUsedCount;
      m_type = assetEntry->m_type;
      if ( (unsigned int)m_type >= 0x71 )
      {
        v6 = 113;
        LODWORD(v5) = m_type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( s_assetUsageCount.typeUsedCount ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( s_assetUsageCount.typeUsedCount )\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( !s_assetUsageCount.typeUsedCount[m_type] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 104, ASSERT_TYPE_ASSERT, "(s_assetUsageCount.typeUsedCount[type] > 0)", (const char *)&queryFormat, "s_assetUsageCount.typeUsedCount[type] > 0") )
        __debugbreak();
      --s_assetUsageCount.typeUsedCount[m_type];
    }
  }
}

/*
==============
DB_AssetUsage_RemoveExternalHeader
==============
*/
void DB_AssetUsage_RemoveExternalHeader(const XAssetType type)
{
  __int64 v1; 
  bool v2; 
  unsigned int *v3; 
  int v5; 

  v1 = type;
  if ( (unsigned int)type >= ASSET_TYPE_COUNT )
  {
    v5 = 113;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( s_assetUsageCount.typeUsedCount ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( s_assetUsageCount.typeUsedCount )\n\t%i not in [0, %i)", type, v5) )
      __debugbreak();
  }
  v2 = s_assetUsageCount.typeUsedCount[v1] == 0;
  v3 = &s_assetUsageCount.typeUsedCount[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 123, ASSERT_TYPE_ASSERT, "(s_assetUsageCount.typeUsedCount[type] > 0)", (const char *)&queryFormat, "s_assetUsageCount.typeUsedCount[type] > 0") )
    __debugbreak();
  --*v3;
}

/*
==============
DB_AssetUsage_ResetMyChangesDefault
==============
*/
void DB_AssetUsage_ResetMyChangesDefault(const DB_AssetEntry *const assetEntry)
{
  unsigned __int64 AssetEntryIndex; 

  if ( !assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 57, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
    __debugbreak();
  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  s_assetUsageCount.devZoneDefaultAssets.m_flags.m_data[AssetEntryIndex >> 6] &= ~(0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F));
}

/*
==============
DB_AssetUsage_ResetValues
==============
*/
void DB_AssetUsage_ResetValues(void)
{
  unsigned int v0; 
  DB_AssetUsageCount *v1; 
  unsigned __int64 v2; 
  __int64 v3; 

  v0 = 0;
  v1 = &s_assetUsageCount;
  do
  {
    if ( v1->typeUsedCount[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 34, ASSERT_TYPE_ASSERT, "( ( s_assetUsageCount.typeUsedCount[i] == 0 ) )", "( DB_GetXAssetTypeName( i ) ) = %s", g_assetNames[v0]) )
      __debugbreak();
    ++v0;
    v1 = (DB_AssetUsageCount *)((char *)v1 + 4);
  }
  while ( v0 < 0x71 );
  v2 = 0i64;
  v3 = 383488i64;
  do
  {
    if ( v2 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (v2 & 0x3F)) & s_assetUsageCount.devZoneDefaultAssets.m_flags.m_data[v2 >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 39, ASSERT_TYPE_ASSERT, "(!s_assetUsageCount.devZoneDefaultAssets.Test( i ))", (const char *)&queryFormat, "!s_assetUsageCount.devZoneDefaultAssets.Test( i )") )
      __debugbreak();
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( s_assetUsageCount.entryUsedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 42, ASSERT_TYPE_ASSERT, "(s_assetUsageCount.entryUsedCount == 0)", (const char *)&queryFormat, "s_assetUsageCount.entryUsedCount == 0") )
    __debugbreak();
  s_assetUsageCount.entryMaxUsedCount = 0;
}

/*
==============
DB_AssetUsage_SetMyChangesDefault
==============
*/
void DB_AssetUsage_SetMyChangesDefault(const DB_AssetEntry *const assetEntry)
{
  unsigned __int64 AssetEntryIndex; 

  if ( !assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 49, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
    __debugbreak();
  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  s_assetUsageCount.devZoneDefaultAssets.m_flags.m_data[AssetEntryIndex >> 6] |= 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
}

/*
==============
DB_AssetUsage_TestMyChangesDefault
==============
*/
bool DB_AssetUsage_TestMyChangesDefault(const DB_AssetEntry *const assetEntry)
{
  unsigned __int64 AssetEntryIndex; 

  if ( !assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetusage.cpp", 65, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
    __debugbreak();
  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  return ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & s_assetUsageCount.devZoneDefaultAssets.m_flags.m_data[AssetEntryIndex >> 6]) != 0;
}

