/*
==============
DB_DebugDump_DumpAssetNames
==============
*/

void __fastcall DB_DebugDump_DumpAssetNames(XAssetType type)
{
  ?DB_DebugDump_DumpAssetNames@@YAXW4XAssetType@@@Z(type);
}

/*
==============
DB_DebugDump_DumpAssets
==============
*/

void __fastcall DB_DebugDump_DumpAssets(const DB_AssetEntryTable *assetTable)
{
  ?DB_DebugDump_DumpAssets@@YAXAEBVDB_AssetEntryTable@@@Z(assetTable);
}

/*
==============
DB_DebugDump_DumpPoolInfo
==============
*/

void DB_DebugDump_DumpPoolInfo(void)
{
  ?DB_DebugDump_DumpPoolInfo@@YAXXZ();
}

/*
==============
DB_DebugDump_DumpMaterials
==============
*/

void DB_DebugDump_DumpMaterials(void)
{
  ?DB_DebugDump_DumpMaterials@@YAXXZ();
}

/*
==============
DB_DebugDump_DumpAssetNames
==============
*/
void DB_DebugDump_DumpAssetNames(XAssetType type)
{
  DB_AssetEntryPool *AssetEntryPool; 
  unsigned int v2; 
  unsigned int v3; 
  DB_AssetEntryFlags *p_m_allocatedFlags; 
  unsigned __int64 *v5; 
  AssetNameDumpFunctor functor; 

  functor.type = type;
  AssetEntryPool = DB_GetAssetEntryPool();
  v2 = 0;
  v3 = 0;
  p_m_allocatedFlags = &DB_GetAssetEntryPool()->m_allocatedFlags;
  v5 = (unsigned __int64 *)p_m_allocatedFlags;
  do
  {
    DB_AssetEntryPool::MutableForEachInBlock<AssetNameDumpFunctor>(AssetEntryPool, p_m_allocatedFlags, *v5, v2, &functor);
    v2 += 64;
    ++v3;
    ++v5;
  }
  while ( v3 < 0x1768 );
}

/*
==============
DB_DebugDump_DumpAssets
==============
*/
void DB_DebugDump_DumpAssets(const DB_AssetEntryTable *assetTable)
{
  DB_AssetEntryTable *v1; 
  unsigned int i; 
  const char *ZoneNameFromIndex; 
  DB_AssetEntryPool *AssetEntryPool; 
  unsigned int v5; 
  unsigned int v6; 
  DB_AssetEntryFlags *p_m_allocatedFlags; 
  unsigned __int64 *v8; 
  unsigned int NumCollisions; 
  AssetDumpFunctor functor; 

  v1 = (DB_AssetEntryTable *)assetTable;
  for ( i = 0; i < 0x7A4; ++i )
  {
    if ( !i || DB_Zones_IsValidZoneIndex(i) )
    {
      functor.table = v1;
      functor.zoneIndex = i;
      functor.zoneName = DB_Zones_GetZoneNameFromIndex(i);
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(i);
      Com_Printf(16, "=== %s ===\n", ZoneNameFromIndex);
      Com_Printf(16, "%-60s %-20s %-20s %-8s %-10s\n", "Name", "Type", "Zone", "InUse", "IsStashed");
      Com_Printf(16, "==========================================================================================================================\n");
      AssetEntryPool = DB_GetAssetEntryPool();
      v5 = 0;
      v6 = 0;
      p_m_allocatedFlags = &DB_GetAssetEntryPool()->m_allocatedFlags;
      v8 = (unsigned __int64 *)p_m_allocatedFlags;
      do
      {
        DB_AssetEntryPool::ForEachInBlock<AssetDumpFunctor>(AssetEntryPool, p_m_allocatedFlags, *v8, v5, &functor);
        v5 += 64;
        ++v6;
        ++v8;
      }
      while ( v6 < 0x1768 );
      v1 = (DB_AssetEntryTable *)assetTable;
    }
  }
  NumCollisions = DB_AssetEntryTable::GetNumCollisions(v1);
  Com_Printf(16, "Num Hash Collisions: %u\n", NumCollisions);
}

/*
==============
DB_DebugDump_DumpMaterials
==============
*/
void DB_DebugDump_DumpMaterials(void)
{
  unsigned int v0; 
  DB_AssetEntryPool *AssetEntryPool; 
  unsigned int v2; 
  DB_AssetEntryFlags *p_m_allocatedFlags; 
  unsigned __int64 *v4; 
  unsigned int SortIndexHighwatermark; 
  __int64 v6; 
  __int64 v7; 
  MaterialDumpTotals functor; 

  v0 = 0;
  functor = 0i64;
  Com_Printf(16, "\n\n");
  Com_Printf(16, "Material Dump:\n\n");
  Com_Printf(16, "%60s %20s %14s %14s %14s %14s %14s %14s\n", "Name", "Zone", "sortKey", "not2DSortKey", "not2DTechSet", "hasStreamedImg", "couldBePerm", "Total");
  AssetEntryPool = DB_GetAssetEntryPool();
  v2 = 0;
  p_m_allocatedFlags = &DB_GetAssetEntryPool()->m_allocatedFlags;
  v4 = (unsigned __int64 *)p_m_allocatedFlags;
  do
  {
    DB_AssetEntryPool::MutableForEachInBlock<MaterialDumpTotals>(AssetEntryPool, p_m_allocatedFlags, *v4, v0, &functor);
    v0 += 64;
    ++v2;
    ++v4;
  }
  while ( v2 < 0x1768 );
  LODWORD(v7) = functor.count;
  LODWORD(v6) = functor.hasStreamedImages;
  Com_Printf(16, "%60s %20s %14s %14d %14d\n", "<TOTAL>", (const char *)&queryFormat.fmt + 3, (const char *)&queryFormat.fmt + 3, v6, v7);
  SortIndexHighwatermark = Material_GetSortIndexHighwatermark();
  Com_Printf(16, "Sort Index Highwatermark: %d\n", SortIndexHighwatermark);
  Com_Printf(16, "\n\n");
}

/*
==============
DB_DebugDump_DumpPoolInfo
==============
*/
void DB_DebugDump_DumpPoolInfo(void)
{
  int v0; 
  bool v1; 
  unsigned int ShipPoolSize; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  const char **v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int MaxAssetEntriesUsed; 
  unsigned int AssetEntriesUsed; 
  char *fmt; 
  char *fmta; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int maxCountInUse; 
  unsigned int v28; 
  int v29; 
  unsigned int v30; 
  int v31; 
  const char **v32; 
  unsigned int v33; 
  unsigned int elementSize; 
  unsigned int countInUse; 
  unsigned int v36; 

  v36 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  Com_Printf(16, "XAsset memory pools: \n");
  if ( DB_IsDebugZoneActive() )
    Com_Printf(16, "Note: MyChanges is active, this data will not be an accurate picture of the actual pool sizes.\n");
  v0 = 0;
  v32 = (const char **)g_assetNames;
  v1 = 1;
  do
  {
    if ( !v1 )
    {
      LODWORD(v21) = 113;
      LODWORD(v19) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_debug_dump.cpp", 32, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v19, v21) )
        __debugbreak();
    }
    ShipPoolSize = DB_GetShipPoolSize((XAssetType)v0);
    DB_GetPoolUtilization((const XAssetType)v0, &elementSize, &countInUse, &maxCountInUse);
    v3 = maxCountInUse;
    v4 = 0;
    v5 = elementSize;
    if ( ShipPoolSize > maxCountInUse )
      v4 = elementSize * (ShipPoolSize - maxCountInUse);
    v6 = countInUse;
    v7 = countInUse * elementSize;
    v33 = countInUse;
    if ( (unsigned int)v0 >= 0x71 )
    {
      LODWORD(v21) = 113;
      LODWORD(v19) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v19, v21) )
        __debugbreak();
      v6 = v33;
    }
    LODWORD(v26) = v4;
    LODWORD(v25) = ShipPoolSize * v5;
    LODWORD(v24) = v3 * v5;
    v8 = v32;
    LODWORD(v23) = v7;
    LODWORD(v22) = ShipPoolSize;
    LODWORD(v21) = v3;
    LODWORD(v19) = v6;
    LODWORD(fmt) = v5;
    Com_Printf(16, "\t%3d : %-24s : %5d bytes/elem : [%5d,%5d]/%5d ([%8d,%8d]/%8d bytes) [inUse,maxInUse]/capacity(ship) %8d never touched\n", (unsigned int)v0++, *v32, fmt, v19, v21, v22, v23, v24, v25, v26);
    v32 = v8 + 1;
    v9 = countInUse * elementSize + v36;
    v10 = ShipPoolSize * elementSize;
    v11 = v4 + v30;
    v36 = v9;
    v12 = countInUse + v31;
    v13 = maxCountInUse * elementSize + v28;
    v14 = v10 + v29;
    v28 = v13;
    v29 += v10;
    v30 = v11;
    v31 += countInUse;
    v1 = (unsigned int)v0 < 0x71;
  }
  while ( v0 < 113 );
  LODWORD(v21) = v14 - v13;
  LODWORD(v19) = v14 - v9;
  LODWORD(fmt) = v14;
  Com_Printf(16, "[%d,%d]/%d total bytes in use. [%d,%d] bytes free.\n", v9, v13, fmt, v19, v21);
  Com_Printf(16, "[%d] total bytes never touched.\n", v11);
  Com_Printf(16, "[%d] counted individual assets from above pools.\n", v12);
  MaxAssetEntriesUsed = DB_AssetUsage_GetMaxAssetEntriesUsed();
  AssetEntriesUsed = DB_AssetUsage_GetAssetEntriesUsed();
  LODWORD(v20) = 375296;
  LODWORD(fmta) = 383488;
  Com_Printf(16, "[%d,%d]/%d (%d in ship) total DB_AssetEntry count in use.\n", AssetEntriesUsed, MaxAssetEntriesUsed, fmta, v20);
}

