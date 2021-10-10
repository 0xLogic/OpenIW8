/*
==============
BG_SpawnGroup_IsPointLootCacheCluster
==============
*/

bool __fastcall BG_SpawnGroup_IsPointLootCacheCluster(const SpawnGroupPoint *point)
{
  return ?BG_SpawnGroup_IsPointLootCacheCluster@@YA_NAEBUSpawnGroupPoint@@@Z(point);
}

/*
==============
BG_SpawnGroup_Loot_PrintClusterError
==============
*/

void __fastcall BG_SpawnGroup_Loot_PrintClusterError(const SpawnGroupCluster *cluster, const LootClusterErrorCode error)
{
  ?BG_SpawnGroup_Loot_PrintClusterError@@YAXAEBUSpawnGroupCluster@@W4LootClusterErrorCode@@@Z(cluster, error);
}

/*
==============
BG_SpawnGroup_Loot_Spawn
==============
*/

void __fastcall BG_SpawnGroup_Loot_Spawn(BG_SpawnGroup_Loot *loot, unsigned int seed, const StringTable *lootTable, const StringTable *zoneMapTable, const char *lootTableFilter, BG_SpawnGroup_Loot_Table *table, bool printResultsToConsole)
{
  ?BG_SpawnGroup_Loot_Spawn@@YAXPEAUBG_SpawnGroup_Loot@@IPEBUStringTable@@1PEBDPEAUBG_SpawnGroup_Loot_Table@@_N@Z(loot, seed, lootTable, zoneMapTable, lootTableFilter, table, printResultsToConsole);
}

/*
==============
BG_SpawnGroup_Loot_PickSingleItem
==============
*/

unsigned __int8 __fastcall BG_SpawnGroup_Loot_PickSingleItem(const BG_SpawnGroup_Loot_Table *lootTable, const char *typeName, int rarityMin, int rarityMax, const char *setName, unsigned int *seed)
{
  return ?BG_SpawnGroup_Loot_PickSingleItem@@YAEPEBUBG_SpawnGroup_Loot_Table@@PEBDHH1PEAI@Z(lootTable, typeName, rarityMin, rarityMax, setName, seed);
}

/*
==============
BG_SpawnGroup_Loot_PrintNodeError
==============
*/

void __fastcall BG_SpawnGroup_Loot_PrintNodeError(const SpawnGroupPoint *point, const LootNodeErrorCode error)
{
  ?BG_SpawnGroup_Loot_PrintNodeError@@YAXAEBUSpawnGroupPoint@@W4LootNodeErrorCode@@@Z(point, error);
}

/*
==============
BG_SpawnGroup_Loot_ValidateNodes
==============
*/

void BG_SpawnGroup_Loot_ValidateNodes(void)
{
  ?BG_SpawnGroup_Loot_ValidateNodes@@YAXXZ();
}

/*
==============
BG_SpawnGroup_Loot_FindOverlappingNodes
==============
*/

void BG_SpawnGroup_Loot_FindOverlappingNodes(void)
{
  ?BG_SpawnGroup_Loot_FindOverlappingNodes@@YAXXZ();
}

/*
==============
BG_SpawnGroup_Loot_GetNodeError
==============
*/

LootNodeErrorCode __fastcall BG_SpawnGroup_Loot_GetNodeError(unsigned int pointIndex)
{
  return ?BG_SpawnGroup_Loot_GetNodeError@@YA?AW4LootNodeErrorCode@@I@Z(pointIndex);
}

/*
==============
BG_SpawnGroup_IsPointLootCacheCluster
==============
*/
bool BG_SpawnGroup_IsPointLootCacheCluster(const SpawnGroupPoint *point)
{
  return (unsigned __int16)(point->cluster + 4) <= 1u;
}

/*
==============
BG_SpawnGroup_Loot_AddZoneCluster
==============
*/
void BG_SpawnGroup_Loot_AddZoneCluster(BG_SpawnGroup_Loot_CurrentZone *const currentZone, unsigned __int16 clusterid)
{
  unsigned __int16 clusterCount; 
  unsigned __int16 v5; 
  __int64 v6; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1238, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  clusterCount = cm.mapEnts->spawnGroupLoot.clusterCount;
  if ( clusterid >= clusterCount )
  {
    LODWORD(v6) = clusterid;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1239, ASSERT_TYPE_ASSERT, "(unsigned)( clusterid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.clusterCount )", "clusterid doesn't index cm.mapEnts->spawnGroupLoot.clusterCount\n\t%i not in [0, %i)", v6, clusterCount) )
      __debugbreak();
  }
  v5 = currentZone->clusterCount;
  if ( v5 < 0x3A98u )
  {
    if ( cm.mapEnts->spawnGroupLoot.clusters[clusterid].pointCount )
    {
      currentZone->clusters[v5] = clusterid;
      ++currentZone->clusterCount;
    }
  }
}

/*
==============
BG_SpawnGroup_Loot_AddZonePoint
==============
*/
void BG_SpawnGroup_Loot_AddZonePoint(BG_SpawnGroup_Loot_CurrentZone *const currentZone, unsigned __int16 pointid)
{
  unsigned __int16 pointCount; 
  unsigned __int16 v5; 
  __int64 v6; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1270, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  pointCount = cm.mapEnts->spawnGroupLoot.pointCount;
  if ( pointid >= pointCount )
  {
    LODWORD(v6) = pointid;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1271, ASSERT_TYPE_ASSERT, "(unsigned)( pointid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.pointCount )", "pointid doesn't index cm.mapEnts->spawnGroupLoot.pointCount\n\t%i not in [0, %i)", v6, pointCount) )
      __debugbreak();
  }
  v5 = currentZone->pointCount;
  if ( v5 < 0x3A98u )
  {
    currentZone->points[v5] = pointid;
    ++currentZone->pointCount;
  }
}

/*
==============
BG_SpawnGroup_Loot_AddZoneStandalonePoints
==============
*/
void BG_SpawnGroup_Loot_AddZoneStandalonePoints(BG_SpawnGroup_Loot_CurrentZone *const currentZone, const unsigned __int16 standaloneClusterId)
{
  int zoneid; 
  unsigned __int16 i; 
  const SpawnGroupPoint *Point; 
  unsigned __int16 v7; 
  SpawnGroupZone *v8; 
  unsigned __int16 v9; 
  const SpawnGroupPoint *v10; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1351, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  zoneid = currentZone->zoneid;
  if ( zoneid == -1 )
  {
    for ( i = 0; i < cm.mapEnts->spawnGroupLoot.pointCount; ++i )
    {
      if ( i >= 0x3A98u )
        break;
      Point = BG_SpawnGroup_Loot_GetPoint(i);
      if ( !Point->zone && Point->cluster == standaloneClusterId )
        BG_SpawnGroup_Loot_AddZonePoint(currentZone, i);
    }
  }
  else
  {
    if ( (zoneid < 0 || zoneid >= cm.mapEnts->spawnGroupLoot.zoneCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1366, ASSERT_TYPE_ASSERT, "(currentZone->zoneid >= 0 && currentZone->zoneid < cm.mapEnts->spawnGroupLoot.zoneCount)", (const char *)&queryFormat, "currentZone->zoneid >= 0 && currentZone->zoneid < cm.mapEnts->spawnGroupLoot.zoneCount") )
      __debugbreak();
    v7 = 0;
    v8 = &cm.mapEnts->spawnGroupLoot.zones[currentZone->zoneid];
    if ( v8->pointCount )
    {
      do
      {
        if ( currentZone->pointCount >= 0x3A98u )
          break;
        v9 = v8->points[v7];
        v10 = BG_SpawnGroup_Loot_GetPoint(v9);
        if ( v10->cluster != 0xFFFB && v10->zone - 1 != currentZone->zoneid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1374, ASSERT_TYPE_ASSERT, "(point->cluster == SPAWN_GROUP_CLUSTER_QUEST || ( point->zone - 1 ) == currentZone->zoneid)", (const char *)&queryFormat, "point->cluster == SPAWN_GROUP_CLUSTER_QUEST || ( point->zone - 1 ) == currentZone->zoneid") )
          __debugbreak();
        if ( v10->cluster == standaloneClusterId )
          BG_SpawnGroup_Loot_AddZonePoint(currentZone, v9);
        ++v7;
      }
      while ( v7 < v8->pointCount );
    }
  }
}

/*
==============
BG_SpawnGroup_Loot_AllocCacheIndex
==============
*/
__int64 BG_SpawnGroup_Loot_AllocCacheIndex(BG_SpawnGroup_Loot *const loot)
{
  BG_SpawnGroup_Loot_Caches *cacheBuffer; 
  __int64 result; 

  if ( !loot->cacheBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1706, ASSERT_TYPE_ASSERT, "(loot->cacheBuffer)", (const char *)&queryFormat, "loot->cacheBuffer") )
    __debugbreak();
  cacheBuffer = loot->cacheBuffer;
  result = cacheBuffer->cacheCount;
  if ( (unsigned __int16)result < 0x1F40u )
  {
    cacheBuffer->cacheCount = result + 1;
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE6060, 6603i64);
    return 0i64;
  }
  return result;
}

/*
==============
BG_SpawnGroup_Loot_BeginCurrentZoneForSet
==============
*/
void BG_SpawnGroup_Loot_BeginCurrentZoneForSet(BG_SpawnGroup_Loot_CurrentZone *currentZone, const BG_SpawnGroup_Loot_Set *set)
{
  unsigned int (*chanceTotalPerTypeAndRarity)[8]; 
  unsigned __int16 v5; 
  unsigned int *chanceTotalPerType; 
  __int64 v7; 
  unsigned __int16 v8; 
  const BG_SpawnGroup_Loot_Set *v9; 
  unsigned __int16 itemTypeCount; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  const BG_SpawnGroup_Loot_Set *v14; 
  unsigned __int16 itemCount; 
  BG_SpawnGroup_Loot_SetItem *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  if ( !set && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1386, ASSERT_TYPE_ASSERT, "(set)", (const char *)&queryFormat, "set") )
    __debugbreak();
  currentZone->set = set;
  chanceTotalPerTypeAndRarity = currentZone->chanceTotalPerTypeAndRarity;
  v5 = 0;
  chanceTotalPerType = currentZone->chanceTotalPerType;
  currentZone->chanceTotal = 0;
  v7 = 50i64;
  do
  {
    *chanceTotalPerType++ = 0;
    *(_QWORD *)chanceTotalPerTypeAndRarity = 0i64;
    *(_QWORD *)&(*chanceTotalPerTypeAndRarity)[2] = 0i64;
    *(_QWORD *)&(*chanceTotalPerTypeAndRarity)[4] = 0i64;
    *(_QWORD *)&(*chanceTotalPerTypeAndRarity++)[6] = 0i64;
    --v7;
  }
  while ( v7 );
  v8 = 0;
  v9 = currentZone->set;
  itemTypeCount = currentZone->table->itemTypeCount;
  v11 = 0;
  currentZone->typeCount = itemTypeCount;
  currentZone->typeChanceTotal = 0;
  if ( itemTypeCount )
  {
    do
    {
      v12 = v8++;
      v13 = currentZone->set->typeChances[v12];
      currentZone->typeChances[v12] = v13;
      v11 = v13 + currentZone->typeChanceTotal;
      currentZone->typeChanceTotal = v11;
    }
    while ( v8 < currentZone->typeCount );
    v9 = currentZone->set;
  }
  if ( v11 != v9->typeChanceTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1408, ASSERT_TYPE_ASSERT, "(currentZone.typeChanceTotal == currentZone.set->typeChanceTotal)", (const char *)&queryFormat, "currentZone.typeChanceTotal == currentZone.set->typeChanceTotal") )
    __debugbreak();
  v14 = currentZone->set;
  currentZone->itemCount = 0;
  if ( v14->itemCount )
  {
    do
    {
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1211, ASSERT_TYPE_ASSERT, "(currentZone->set)", (const char *)&queryFormat, "currentZone->set") )
        __debugbreak();
      itemCount = currentZone->set->itemCount;
      if ( v5 >= itemCount )
      {
        LODWORD(v19) = itemCount;
        LODWORD(v18) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1212, ASSERT_TYPE_ASSERT, "(unsigned)( setItemIndex ) < (unsigned)( currentZone->set->itemCount )", "setItemIndex doesn't index currentZone->set->itemCount\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v16 = &currentZone->set->items[v5];
      if ( !v16->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1215, ASSERT_TYPE_ASSERT, "(item->def)", (const char *)&queryFormat, "item->def") )
        __debugbreak();
      if ( v16->chance && !v16->def->disabled )
      {
        currentZone->items[currentZone->itemCount++] = v5;
        currentZone->chanceTotal += v16->chance;
        currentZone->chanceTotalPerType[v16->def->type] += v16->chance;
        v17 = v16->def->rarity + 8i64 * v16->def->type;
        currentZone->chanceTotalPerTypeAndRarity[0][v17] += v16->chance;
      }
      v14 = currentZone->set;
      ++v5;
    }
    while ( v5 < v14->itemCount );
  }
  if ( currentZone->chanceTotal != v14->chanceTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1417, ASSERT_TYPE_ASSERT, "(currentZone.chanceTotal == currentZone.set->chanceTotal)", (const char *)&queryFormat, "currentZone.chanceTotal == currentZone.set->chanceTotal") )
    __debugbreak();
}

/*
==============
BG_SpawnGroup_Loot_ComputeIntegralPercentage
==============
*/
unsigned __int16 BG_SpawnGroup_Loot_ComputeIntegralPercentage(const unsigned int chance, const unsigned int chanceMax, const unsigned __int16 count)
{
  if ( chance > chanceMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 160, ASSERT_TYPE_ASSERT, "(chance <= chanceMax)", (const char *)&queryFormat, "chance <= chanceMax") )
    __debugbreak();
  return truncate_cast<unsigned short,unsigned int>((chance * count + chanceMax - 1) / chanceMax);
}

/*
==============
BG_SpawnGroup_Loot_DisableAllPointsWithinRadius2
==============
*/
void BG_SpawnGroup_Loot_DisableAllPointsWithinRadius2(BG_SpawnGroup_Loot_CurrentZone *currentZone, const SpawnGroupPoint *const point, float disable_distance2)
{
  unsigned __int16 pointCount; 
  unsigned __int16 i; 
  unsigned __int16 v8; 
  const SpawnGroupPoint *v9; 
  float v10; 
  float v11; 
  __int64 v12; 
  __int64 v13; 

  if ( point )
  {
    pointCount = currentZone->pointCount;
    if ( pointCount )
    {
      for ( i = pointCount - 1; i; --i )
      {
        v8 = currentZone->pointCount;
        if ( i >= v8 )
        {
          LODWORD(v13) = v8;
          LODWORD(v12) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 903, ASSERT_TYPE_ASSERT, "(unsigned)( distanceCheckIndex ) < (unsigned)( currentZone.pointCount )", "distanceCheckIndex doesn't index currentZone.pointCount\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        v9 = BG_SpawnGroup_Loot_GetPoint(currentZone->points[i]);
        v10 = v9->origin.v[1] - point->origin.v[1];
        v11 = v9->origin.v[2] - point->origin.v[2];
        if ( (float)((float)((float)(v10 * v10) + (float)((float)(v9->origin.v[0] - point->origin.v[0]) * (float)(v9->origin.v[0] - point->origin.v[0]))) + (float)(v11 * v11)) < disable_distance2 )
          BG_SpawnGroup_Loot_UshortArrayRemove(currentZone->points, &currentZone->pointCount, i);
      }
    }
  }
}

/*
==============
BG_SpawnGroup_Loot_FindOverlappingNodes
==============
*/
void BG_SpawnGroup_Loot_FindOverlappingNodes()
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int64 pointCount; 
  __int64 v8; 
  __int64 v9; 
  SpawnGroupPoint *points; 
  __int64 v11; 
  __int64 v12; 
  SpawnGroupPoint *v13; 
  unsigned __int16 cluster; 
  const vec3_t *p_origin; 
  float v16; 
  unsigned __int16 v17; 
  float v18; 
  float v19; 
  char *v20; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 

  pointCount = cm.mapEnts->spawnGroupLoot.pointCount;
  if ( cm.mapEnts->spawnGroupLoot.pointCount )
  {
    v8 = 0i64;
    v27 = v0;
    v26 = v1;
    v25 = v2;
    v24 = v3;
    v9 = 0i64;
    v23 = v4;
    v22 = v5;
    v21 = v6;
    do
    {
      points = cm.mapEnts->spawnGroupLoot.points;
      if ( points[v9].cluster != 0xFFFB )
      {
        v11 = 0i64;
        v12 = 0i64;
        do
        {
          if ( v11 != v8 )
          {
            v13 = cm.mapEnts->spawnGroupLoot.points;
            cluster = v13[v12].cluster;
            p_origin = &v13[v12].origin;
            if ( cluster != 0xFFFB )
            {
              v17 = points[v9].cluster;
              v19 = FLOAT_2025_0;
              if ( (unsigned __int16)(v17 + 4) > 1u || (unsigned __int16)(cluster + 4) > 1u )
              {
                if ( v17 == 0xFFFC || v17 == 0xFFFD || (unsigned __int16)(cluster + 4) <= 1u )
                  v19 = FLOAT_256_0;
              }
              else
              {
                v19 = FLOAT_4900_0;
              }
              v16 = points[v9].origin.v[1] - p_origin->v[1];
              v18 = points[v9].origin.v[2] - p_origin->v[2];
              if ( (float)((float)((float)(v16 * v16) + (float)((float)(points[v9].origin.v[0] - p_origin->v[0]) * (float)(points[v9].origin.v[0] - p_origin->v[0]))) + (float)(v18 * v18)) < v19 )
              {
                if ( !s_lootNodeErrorsPerPoint[v11] )
                  s_lootNodeErrorsPerPoint[v11] = 3;
                v20 = vtos(p_origin);
                if ( (unsigned __int16)(cluster + 4) > 1u )
                  Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Loot  node %s at %s.\n", lootNodeErrorStrTable[3], v20, v21, v22, v23, v24, v25, v26, v27);
                else
                  Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Cache node %s at %s.\n", lootNodeErrorStrTable[3], v20);
              }
            }
          }
          ++v11;
          ++v12;
        }
        while ( v11 < pointCount );
      }
      ++v8;
      ++v9;
    }
    while ( v8 < pointCount );
  }
}

/*
==============
BG_SpawnGroup_Loot_GetCluster
==============
*/
SpawnGroupCluster *BG_SpawnGroup_Loot_GetCluster(unsigned __int16 clusterid)
{
  unsigned __int16 clusterCount; 
  int v4; 
  int v5; 

  clusterCount = cm.mapEnts->spawnGroupLoot.clusterCount;
  if ( clusterid >= clusterCount )
  {
    v5 = clusterCount;
    v4 = clusterid;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 330, ASSERT_TYPE_ASSERT, "(unsigned)( clusterid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.clusterCount )", "clusterid doesn't index cm.mapEnts->spawnGroupLoot.clusterCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return &cm.mapEnts->spawnGroupLoot.clusters[clusterid];
}

/*
==============
BG_SpawnGroup_Loot_GetClusterIsValid
==============
*/
char BG_SpawnGroup_Loot_GetClusterIsValid(const BG_SpawnGroup_Loot_CurrentZone *const currentZone, unsigned __int16 clusterid)
{
  SpawnGroupCluster *Cluster; 
  __int64 v5; 
  unsigned __int16 v6; 
  unsigned __int16 pointCount; 
  unsigned __int8 v8; 
  unsigned __int8 itemDefCount; 
  unsigned __int8 v10; 
  __int64 v12; 
  __int64 v13; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 715, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( !currentZone->item.def->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 716, ASSERT_TYPE_ASSERT, "(currentZone->item.def->type)", (const char *)&queryFormat, "currentZone->item.def->type") )
    __debugbreak();
  Cluster = BG_SpawnGroup_Loot_GetCluster(clusterid);
  if ( !Cluster && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 719, ASSERT_TYPE_ASSERT, "(cluster)", (const char *)&queryFormat, "cluster") )
    __debugbreak();
  if ( (currentZone->set->flags & 1) != 0 )
    return 1;
  v5 = 0i64;
  if ( !Cluster->pointCount )
    return 1;
  while ( 1 )
  {
    v6 = Cluster->points[v5];
    pointCount = cm.mapEnts->spawnGroupLoot.pointCount;
    if ( v6 >= pointCount )
    {
      LODWORD(v13) = pointCount;
      LODWORD(v12) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 361, ASSERT_TYPE_ASSERT, "(unsigned)( pointid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.pointCount )", "pointid doesn't index cm.mapEnts->spawnGroupLoot.pointCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v8 = currentZone->loot->pointToDefBuffer->points[v6];
    itemDefCount = currentZone->table->itemDefCount;
    if ( v8 >= itemDefCount )
    {
      LODWORD(v13) = itemDefCount;
      LODWORD(v12) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( itemDefIndex ) < (unsigned)( currentZone->table->itemDefCount )", "itemDefIndex doesn't index currentZone->table->itemDefCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v10 = v8 ? currentZone->table->itemDefs[(unsigned __int64)v8].type : 0;
    if ( v10 == currentZone->item.def->type )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= Cluster->pointCount )
      return 1;
  }
  return 0;
}

/*
==============
BG_SpawnGroup_Loot_GetClusterOpenPoints
==============
*/
__int64 BG_SpawnGroup_Loot_GetClusterOpenPoints(unsigned __int16 clusterid, BG_SpawnGroup_Loot_CurrentZone *const currentZone, BG_SpawnGroup_Loot_PointMap *const pointToDefBuffer)
{
  SpawnGroupCluster *Cluster; 
  unsigned __int16 v6; 
  unsigned int v7; 
  unsigned __int16 v8; 
  unsigned __int16 clusterPointCount; 
  __int64 v11; 
  __int64 v12; 

  Cluster = BG_SpawnGroup_Loot_GetCluster(clusterid);
  if ( !Cluster && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 753, ASSERT_TYPE_ASSERT, "(cluster)", (const char *)&queryFormat, "cluster") )
    __debugbreak();
  v6 = 0;
  if ( currentZone )
    currentZone->clusterPointCount = 0;
  v7 = 0;
  if ( !Cluster->pointCount )
    goto LABEL_21;
  do
  {
    v8 = Cluster->points[v7];
    if ( !BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem(pointToDefBuffer, v8) )
    {
      if ( currentZone )
      {
        clusterPointCount = currentZone->clusterPointCount;
        if ( clusterPointCount >= 0x32u )
        {
          LODWORD(v12) = 50;
          LODWORD(v11) = clusterPointCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 769, ASSERT_TYPE_ASSERT, "(unsigned)( currentZone->clusterPointCount ) < (unsigned)( 50 )", "currentZone->clusterPointCount doesn't index SPAWNGROUP_LOOT_MAX_CLUSTER_POINTS\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        currentZone->clusterPoints[currentZone->clusterPointCount++] = v8;
      }
      ++v6;
    }
    ++v7;
  }
  while ( v7 < Cluster->pointCount );
  if ( !v6 )
  {
LABEL_21:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 777, ASSERT_TYPE_ASSERT, "(clusterOpenPointCount > 0)", (const char *)&queryFormat, "clusterOpenPointCount > 0") )
      __debugbreak();
  }
  return v6;
}

/*
==============
BG_SpawnGroup_Loot_GetNodeError
==============
*/
__int64 BG_SpawnGroup_Loot_GetNodeError(unsigned int pointIndex)
{
  __int64 v1; 
  int v4; 

  v1 = pointIndex;
  if ( pointIndex >= 0xFFFF )
  {
    v4 = 0xFFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 2355, ASSERT_TYPE_ASSERT, "(unsigned)( pointIndex ) < (unsigned)( 65535 )", "pointIndex doesn't index SPAWNGROUP_LOOT_MAX_POINTS\n\t%i not in [0, %i)", pointIndex, v4) )
      __debugbreak();
  }
  return (unsigned __int8)s_lootNodeErrorsPerPoint[v1];
}

/*
==============
BG_SpawnGroup_Loot_GetPoint
==============
*/
SpawnGroupPoint *BG_SpawnGroup_Loot_GetPoint(unsigned __int16 pointid)
{
  unsigned __int16 pointCount; 
  int v4; 
  int v5; 

  pointCount = cm.mapEnts->spawnGroupLoot.pointCount;
  if ( pointid >= pointCount )
  {
    v5 = pointCount;
    v4 = pointid;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( pointid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.pointCount )", "pointid doesn't index cm.mapEnts->spawnGroupLoot.pointCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return &cm.mapEnts->spawnGroupLoot.points[pointid];
}

/*
==============
BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem
==============
*/
bool BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem(const BG_SpawnGroup_Loot_PointMap *const pointToDefBuffer, unsigned __int16 pointid)
{
  unsigned __int16 pointCount; 
  __int64 v6; 

  if ( !pointToDefBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 344, ASSERT_TYPE_ASSERT, "(pointToDefBuffer)", (const char *)&queryFormat, "pointToDefBuffer") )
    __debugbreak();
  pointCount = cm.mapEnts->spawnGroupLoot.pointCount;
  if ( pointid >= pointCount )
  {
    LODWORD(v6) = pointid;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 345, ASSERT_TYPE_ASSERT, "(unsigned)( pointid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.pointCount )", "pointid doesn't index cm.mapEnts->spawnGroupLoot.pointCount\n\t%i not in [0, %i)", v6, pointCount) )
      __debugbreak();
  }
  return pointToDefBuffer->points[pointid] != 0;
}

/*
==============
BG_SpawnGroup_Loot_GetSet
==============
*/
BG_SpawnGroup_Loot_Set *BG_SpawnGroup_Loot_GetSet(const BG_SpawnGroup_Loot_Table *table, unsigned __int8 setIndex)
{
  unsigned __int8 setCount; 
  __int64 v6; 

  if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 193, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  setCount = table->setCount;
  if ( setIndex >= setCount )
  {
    LODWORD(v6) = setIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( setIndex ) < (unsigned)( table->setCount )", "setIndex doesn't index table->setCount\n\t%i not in [0, %i)", v6, setCount) )
      __debugbreak();
  }
  if ( !setIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 195, ASSERT_TYPE_ASSERT, "(setIndex != 0)", (const char *)&queryFormat, "setIndex != SPAWNGROUP_LOOT_SET_NONE") )
    __debugbreak();
  return &table->sets[setIndex];
}

/*
==============
BG_SpawnGroup_Loot_GetSetItem
==============
*/
BG_SpawnGroup_Loot_SetItem *BG_SpawnGroup_Loot_GetSetItem(BG_SpawnGroup_Loot_CurrentZone *currentZone, unsigned __int16 itemIndex)
{
  unsigned __int16 itemCount; 
  unsigned __int16 v5; 
  __int64 v7; 
  __int64 v8; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 202, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  itemCount = currentZone->itemCount;
  if ( itemIndex >= itemCount )
  {
    LODWORD(v7) = itemIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( itemIndex ) < (unsigned)( currentZone->itemCount )", "itemIndex doesn't index currentZone->itemCount\n\t%i not in [0, %i)", v7, itemCount) )
      __debugbreak();
  }
  v5 = currentZone->items[itemIndex];
  if ( v5 >= 0xC8u )
  {
    LODWORD(v8) = 200;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( itemid ) < (unsigned)( 200 )", "itemid doesn't index SPAWNGROUP_LOOT_MAX_ITEM_DEFS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return &currentZone->set->items[v5];
}

/*
==============
BG_SpawnGroup_Loot_PickAllCacheContents
==============
*/
void BG_SpawnGroup_Loot_PickAllCacheContents(BG_SpawnGroup_Loot *const loot, const BG_SpawnGroup_Loot_Table *const table, unsigned int *seed, bool printResultsToConsole)
{
  const BG_SpawnGroup_Loot_Table *v6; 
  _QWORD *m_ptr; 
  unsigned __int16 v9; 
  unsigned int v10; 
  unsigned int i; 
  unsigned __int8 v12; 
  __int64 v13; 
  unsigned __int8 *p_cacheTypeIndex; 
  unsigned __int8 v15; 
  unsigned __int8 cacheTypeCount; 
  __int64 v17; 
  BG_SpawnGroup_Loot_Caches *cacheBuffer; 
  BG_SpawnGroup_Loot_CacheType *v19; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  unsigned __int16 v22; 
  unsigned __int8 v23; 
  BG_SpawnGroup_Loot_Caches *v24; 
  __int64 v25; 
  BG_SpawnGroup_Loot_CacheType *v26; 
  BG_SpawnGroup_Loot_Caches *v27; 
  unsigned __int16 cacheCount; 
  __int64 v29; 
  __int64 v30; 
  Mem_LargeLocal v31; 
  BG_SpawnGroup_Loot_CurrentZone *currentZone; 
  char v34; 

  v6 = table;
  if ( (!loot || !loot->cacheBuffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1721, ASSERT_TYPE_ASSERT, "(loot && loot->cacheBuffer)", (const char *)&queryFormat, "loot && loot->cacheBuffer") )
    __debugbreak();
  if ( !loot->pointToDefBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1722, ASSERT_TYPE_ASSERT, "(loot->pointToDefBuffer)", (const char *)&queryFormat, "loot->pointToDefBuffer") )
    __debugbreak();
  if ( (!v6 || !seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1723, ASSERT_TYPE_ASSERT, "(table && seed)", (const char *)&queryFormat, "table && seed") )
    __debugbreak();
  loot->cacheBuffer->cacheCount = 1;
  memset_0(loot->cacheBuffer->itemSpawnedIndexToCacheIndex, 0, sizeof(loot->cacheBuffer->itemSpawnedIndexToCacheIndex));
  Mem_LargeLocal::Mem_LargeLocal(&v31, 0x1E040ui64, "BG_SpawnGroup_Loot_CurrentZone currentZone");
  m_ptr = v31.m_ptr;
  currentZone = (BG_SpawnGroup_Loot_CurrentZone *)v31.m_ptr;
  memset_0(v31.m_ptr, 0, 0x1E040ui64);
  *m_ptr = loot;
  m_ptr[1] = v6;
  m_ptr[4] = seed;
  *((_DWORD *)m_ptr + 6) = -2;
  *((_BYTE *)m_ptr + 40) = printResultsToConsole;
  *((_WORD *)m_ptr + 1226) = v6->itemTypeCount;
  v9 = 0;
  v10 = 0;
  for ( i = 0; i < cm.mapEnts->spawnGroupLoot.pointCount; ++i )
  {
    v12 = loot->pointToDefBuffer->points[i];
    if ( v12 )
    {
      v13 = v10++;
      p_cacheTypeIndex = &v6->itemDefs[(unsigned __int64)v12].cacheTypeIndex;
      v15 = *p_cacheTypeIndex;
      if ( *p_cacheTypeIndex )
      {
        cacheTypeCount = loot->cacheBuffer->cacheTypeCount;
        if ( v15 >= cacheTypeCount )
        {
          LODWORD(v30) = cacheTypeCount;
          LODWORD(v29) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1751, ASSERT_TYPE_ASSERT, "(unsigned)( itemDef.cacheTypeIndex ) < (unsigned)( loot->cacheBuffer->cacheTypeCount )", "itemDef.cacheTypeIndex doesn't index loot->cacheBuffer->cacheTypeCount\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        v17 = *p_cacheTypeIndex;
        cacheBuffer = loot->cacheBuffer;
        v19 = &cacheBuffer->cacheTypes[v17];
        v20 = 0;
        if ( cacheBuffer->cacheTypes[v17].cacheSetCount )
        {
          do
          {
            v21 = BG_SpawnGroup_Loot_AllocCacheIndex(loot);
            v22 = v21;
            if ( v21 )
            {
              BG_SpawnGroup_Loot_PickCacheContents(currentZone, v19->cacheSets[v20], &loot->cacheBuffer->caches[v21], v19);
              if ( !v20 )
                loot->cacheBuffer->itemSpawnedIndexToCacheIndex[v13] = v22;
            }
            ++v20;
          }
          while ( v20 < v19->cacheSetCount );
          v6 = table;
          v9 = 0;
        }
      }
    }
  }
  v23 = 1;
  v34 = 1;
  v24 = loot->cacheBuffer;
  if ( v24->cacheTypeCount > 1u )
  {
    do
    {
      v25 = v23;
      v26 = &v24->cacheTypes[v25];
      if ( v24->cacheTypes[v25].scriptPoolCount )
      {
        do
        {
          if ( !loot->cacheBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1706, ASSERT_TYPE_ASSERT, "(loot->cacheBuffer)", (const char *)&queryFormat, "loot->cacheBuffer") )
            __debugbreak();
          v27 = loot->cacheBuffer;
          cacheCount = v27->cacheCount;
          if ( cacheCount < 0x1F40u )
          {
            v27->cacheCount = cacheCount + 1;
            if ( cacheCount )
            {
              BG_SpawnGroup_Loot_PickCacheContents(currentZone, v26->cacheSets[0], &loot->cacheBuffer->caches[cacheCount], v26);
              if ( !v9 )
                v26->scriptPoolFirst = cacheCount;
            }
          }
          else
          {
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE6060, 6603i64);
          }
          ++v9;
        }
        while ( v9 < v26->scriptPoolCount );
        v24 = loot->cacheBuffer;
        v23 = v34;
      }
      v34 = ++v23;
      v9 = 0;
    }
    while ( v23 < v24->cacheTypeCount );
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v31);
}

/*
==============
BG_SpawnGroup_Loot_PickCacheContents
==============
*/
void BG_SpawnGroup_Loot_PickCacheContents(BG_SpawnGroup_Loot_CurrentZone *currentZone, const unsigned __int8 setIndex, BG_SpawnGroup_Loot_Cache *cache, BG_SpawnGroup_Loot_CacheType *cacheType)
{
  BG_SpawnGroup_Loot_Set *Set; 
  unsigned __int16 v8; 
  char v9; 
  const BG_SpawnGroup_Loot_ItemDef *def; 
  __int16 v11; 
  const BG_SpawnGroup_Loot_ItemDef *v12; 

  Set = BG_SpawnGroup_Loot_GetSet(currentZone->table, setIndex);
  BG_SpawnGroup_Loot_BeginCurrentZoneForSet(currentZone, Set);
  BG_SpawnGroup_Loot_ValidateZone(currentZone);
  v8 = 0;
  v9 = currentZone->set->flags & 1;
  cache->itemCount = 0;
  if ( Set->reqCount )
  {
    while ( 1 )
    {
      def = Set->reqs[v8].def;
      if ( (!def || !def->disabled) && ((unsigned __int16)(Set->reqs[v8].chance - 1) > 0x62u || BG_irand(0, 100, currentZone->seed) < Set->reqs[v8].chance) )
      {
        v11 = 0;
        if ( Set->reqs[v8].min )
          break;
      }
LABEL_12:
      if ( ++v8 >= Set->reqCount )
        return;
    }
    while ( cache->itemCount < 0x18u )
    {
      BG_SpawnGroup_Loot_PickItem(currentZone, &Set->reqs[v8]);
      BG_SpawnGroup_Loot_TrackItemCounts(&cacheType->contents, currentZone->item.defIndex, currentZone->item.def);
      cache->items[cache->itemCount++] = currentZone->item.defIndex;
      if ( !v9 )
      {
        v12 = currentZone->item.def;
        if ( v12->type == currentZone->table->itemTypeIndexWeapon )
          BG_SpawnGroup_Loot_RemoveAllItemsMatchingDef(currentZone, v12);
      }
      if ( (unsigned __int16)++v11 >= Set->reqs[v8].min )
        goto LABEL_12;
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE5F90, 6602i64);
  }
}

/*
==============
BG_SpawnGroup_Loot_PickClusterPoint
==============
*/
void BG_SpawnGroup_Loot_PickClusterPoint(BG_SpawnGroup_Loot_CurrentZone *const currentZone, unsigned __int16 clusterid, BG_SpawnGroup_Loot_CurrentZoneItem *const item)
{
  unsigned __int16 v6; 
  unsigned __int16 clusterPointCount; 
  unsigned __int16 v8; 
  __int64 v9; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 857, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( !currentZone->seed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 858, ASSERT_TYPE_ASSERT, "(currentZone->seed)", (const char *)&queryFormat, "currentZone->seed") )
    __debugbreak();
  if ( !currentZone->clusterPointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 859, ASSERT_TYPE_ASSERT, "(currentZone->clusterPointCount > 0)", (const char *)&queryFormat, "currentZone->clusterPointCount > 0") )
    __debugbreak();
  v6 = BG_irand(0, currentZone->clusterPointCount, currentZone->seed);
  clusterPointCount = currentZone->clusterPointCount;
  if ( v6 >= clusterPointCount )
  {
    LODWORD(v9) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 862, ASSERT_TYPE_ASSERT, "(unsigned)( picked ) < (unsigned)( currentZone->clusterPointCount )", "picked doesn't index currentZone->clusterPointCount\n\t%i not in [0, %i)", v9, clusterPointCount) )
      __debugbreak();
  }
  v8 = currentZone->clusterPoints[v6];
  if ( BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem(currentZone->loot->pointToDefBuffer, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 865, ASSERT_TYPE_ASSERT, "(!BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem( currentZone->loot->pointToDefBuffer, pointid ))", (const char *)&queryFormat, "!BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem( currentZone->loot->pointToDefBuffer, pointid )") )
    __debugbreak();
  BG_SpawnGroup_Loot_UshortArrayRemove(currentZone->clusterPoints, &currentZone->clusterPointCount, v6);
  item->point = v8;
  item->pointFound = 1;
  item->cluster = clusterid;
  item->clusterFound = 1;
}

/*
==============
BG_SpawnGroup_Loot_PickItem
==============
*/
void BG_SpawnGroup_Loot_PickItem(BG_SpawnGroup_Loot_CurrentZone *const currentZone, const BG_SpawnGroup_Loot_SetReq *const req)
{
  unsigned __int8 v4; 
  unsigned __int8 type; 
  const BG_SpawnGroup_Loot_Table *table; 
  const BG_SpawnGroup_Loot_ItemDef *def; 
  unsigned __int16 rarityMin; 
  unsigned __int8 v9; 
  const BG_SpawnGroup_Loot_Set *set; 
  BG_SpawnGroup_Loot *loot; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int *v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned __int16 v17; 
  BG_SpawnGroup_Loot_SetItem *SetItem; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 653, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  v4 = 0;
  if ( req )
  {
    type = req->type;
    if ( type && ((table = currentZone->table, !currentZone->typeChances[type]) || table->itemTypesDisabled[type]) )
    {
      if ( currentZone->printResultsToConsole )
        Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Set '%s' requires type '%s', but there are no items available\n", currentZone->set->name, table->itemTypes[type]);
    }
    else
    {
      v4 = req->type;
    }
    if ( req->def )
    {
      if ( req->def->disabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 676, ASSERT_TYPE_ASSERT, "(!req->def->disabled)", (const char *)&queryFormat, "!req->def->disabled") )
        __debugbreak();
      def = req->def;
      goto LABEL_67;
    }
    if ( v4 )
    {
      rarityMin = req->rarityMin;
      if ( rarityMin || req->rarityMax )
      {
        def = BG_SpawnGroup_Loot_PickItemDefForTypeAndRarityRange(currentZone, v4, rarityMin, req->rarityMax);
        goto LABEL_67;
      }
    }
    if ( req->rarityMin || req->rarityMax )
    {
      if ( (currentZone->set->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 685, ASSERT_TYPE_ASSERT, "(currentZone->set->flags & SpawnGroup_Loot_Set_Flags::USE_CHANCE_BY_TYPE)", (const char *)&queryFormat, "currentZone->set->flags & SpawnGroup_Loot_Set_Flags::USE_CHANCE_BY_TYPE") )
        __debugbreak();
      v9 = BG_SpawnGroup_Loot_PickItemTypeForRarityRange(currentZone, req->rarityMin, req->rarityMax);
      def = BG_SpawnGroup_Loot_PickItemDefForTypeAndRarityRange(currentZone, v9, req->rarityMin, req->rarityMax);
      goto LABEL_67;
    }
    if ( v4 )
    {
LABEL_23:
      def = BG_SpawnGroup_Loot_PickItemDefForType(currentZone, v4);
      goto LABEL_67;
    }
  }
  set = currentZone->set;
  loot = currentZone->loot;
  if ( (set->flags & 2) != 0 )
  {
    if ( (!loot || !set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 601, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->set && currentZone->table && currentZone->seed") )
      __debugbreak();
    if ( !currentZone->typeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 602, ASSERT_TYPE_ASSERT, "(currentZone->typeCount > 0)", (const char *)&queryFormat, "currentZone->typeCount > 0") )
      __debugbreak();
    if ( !currentZone->typeChanceTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 603, ASSERT_TYPE_ASSERT, "(currentZone->typeChanceTotal > 0)", (const char *)&queryFormat, "currentZone->typeChanceTotal > 0") )
      __debugbreak();
    v12 = 0;
    v4 = 0;
    v13 = BG_irand(0, currentZone->typeChanceTotal, currentZone->seed);
    if ( currentZone->typeCount )
    {
      while ( 1 )
      {
        v14 = &currentZone->typeChances[v4];
        if ( *v14 && !currentZone->chanceTotalPerType[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 609, ASSERT_TYPE_ASSERT, "(currentZone->typeChances[typeIndex] == 0 || currentZone->chanceTotalPerType[typeIndex] > 0)", (const char *)&queryFormat, "currentZone->typeChances[typeIndex] == 0 || currentZone->chanceTotalPerType[typeIndex] > 0") )
          __debugbreak();
        v12 += *v14;
        if ( v13 < v12 )
          break;
        if ( ++v4 >= (unsigned int)currentZone->typeCount )
          goto LABEL_48;
      }
    }
    else
    {
LABEL_48:
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE4660, 5712i64);
      v4 = 0;
    }
    goto LABEL_23;
  }
  if ( (!loot || !set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 625, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->set && currentZone->table && currentZone->seed") )
    __debugbreak();
  if ( !currentZone->itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 626, ASSERT_TYPE_ASSERT, "(currentZone->itemCount > 0)", (const char *)&queryFormat, "currentZone->itemCount > 0") )
    __debugbreak();
  if ( !currentZone->chanceTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 627, ASSERT_TYPE_ASSERT, "(currentZone->chanceTotal > 0)", (const char *)&queryFormat, "currentZone->chanceTotal > 0") )
    __debugbreak();
  v15 = BG_irand(0, currentZone->chanceTotal, currentZone->seed);
  v16 = 0;
  v17 = 0;
  if ( currentZone->itemCount )
  {
    while ( 1 )
    {
      SetItem = BG_SpawnGroup_Loot_GetSetItem(currentZone, v17);
      def = SetItem->def;
      if ( !SetItem->def->disabled )
      {
        v16 += SetItem->chance;
        if ( v15 < v16 )
          break;
      }
      if ( ++v17 >= currentZone->itemCount )
        goto LABEL_66;
    }
  }
  else
  {
LABEL_66:
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE48B0, 340i64);
    def = NULL;
  }
LABEL_67:
  currentZone->item.def = def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 702, ASSERT_TYPE_ASSERT, "(currentZone->item.def)", (const char *)&queryFormat, "currentZone->item.def") )
    __debugbreak();
  currentZone->item.defIndex = BG_SpawnGroup_Loot_GetItemDefIndex(currentZone->table, currentZone->item.def);
  currentZone->item.required = req != NULL;
}

/*
==============
BG_SpawnGroup_Loot_PickItemCluster
==============
*/
__int64 BG_SpawnGroup_Loot_PickItemCluster(BG_SpawnGroup_Loot_CurrentZone *const currentZone)
{
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  BG_SpawnGroup_Loot_PointMap *pointToDefBuffer; 
  unsigned __int16 clusterCount; 
  SpawnGroupCluster *v6; 
  unsigned __int16 v7; 
  unsigned int v8; 
  unsigned __int16 clustersPreferredCount; 
  unsigned __int16 clustersViableCount; 
  unsigned __int16 v11; 
  __int64 v12; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  unsigned __int16 v16; 
  __int64 v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  __int64 v20; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 785, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( (!currentZone->loot || !currentZone->set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 786, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->set && currentZone->table && currentZone->seed") )
    __debugbreak();
  if ( !currentZone->clusterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 787, ASSERT_TYPE_ASSERT, "(currentZone->clusterCount > 0)", (const char *)&queryFormat, "currentZone->clusterCount > 0") )
    __debugbreak();
  if ( currentZone->clusterCount > 0x3A98u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 788, ASSERT_TYPE_ASSERT, "(currentZone->clusterCount <= 15000)", (const char *)&queryFormat, "currentZone->clusterCount <= SPAWNGROUP_LOOT_MAX_ZONE_CLUSTERS") )
    __debugbreak();
  v2 = 0;
  currentZone->clustersViableCount = 0;
  currentZone->clustersPreferredCount = 0;
  if ( currentZone->clusterCount )
  {
    do
    {
      v3 = currentZone->clusters[v2];
      if ( BG_SpawnGroup_Loot_GetClusterIsValid(currentZone, v3) )
      {
        pointToDefBuffer = currentZone->loot->pointToDefBuffer;
        clusterCount = cm.mapEnts->spawnGroupLoot.clusterCount;
        if ( v3 >= clusterCount )
        {
          LODWORD(v20) = clusterCount;
          LODWORD(v19) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 330, ASSERT_TYPE_ASSERT, "(unsigned)( clusterid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.clusterCount )", "clusterid doesn't index cm.mapEnts->spawnGroupLoot.clusterCount\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v6 = &cm.mapEnts->spawnGroupLoot.clusters[v3];
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 753, ASSERT_TYPE_ASSERT, "(cluster)", (const char *)&queryFormat, "cluster") )
          __debugbreak();
        v7 = 0;
        v8 = 0;
        if ( !v6->pointCount )
          goto LABEL_60;
        do
        {
          if ( !BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem(pointToDefBuffer, v6->points[v8]) )
            ++v7;
          ++v8;
        }
        while ( v8 < v6->pointCount );
        if ( !v7 )
        {
LABEL_60:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 777, ASSERT_TYPE_ASSERT, "(clusterOpenPointCount > 0)", (const char *)&queryFormat, "clusterOpenPointCount > 0") )
            __debugbreak();
        }
        if ( v7 <= currentZone->dependCount )
        {
          if ( v7 > currentZone->dependCountRequired )
          {
            clustersViableCount = currentZone->clustersViableCount;
            if ( clustersViableCount >= 0x3A98u )
            {
              LODWORD(v20) = 15000;
              LODWORD(v19) = clustersViableCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 811, ASSERT_TYPE_ASSERT, "(unsigned)( currentZone->clustersViableCount ) < (unsigned)( 15000 )", "currentZone->clustersViableCount doesn't index SPAWNGROUP_LOOT_MAX_ZONE_CLUSTERS\n\t%i not in [0, %i)", v19, v20) )
                __debugbreak();
            }
            currentZone->clustersViable[currentZone->clustersViableCount++] = v2;
          }
        }
        else
        {
          clustersPreferredCount = currentZone->clustersPreferredCount;
          if ( clustersPreferredCount >= 0x3A98u )
          {
            LODWORD(v20) = 15000;
            LODWORD(v19) = clustersPreferredCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 805, ASSERT_TYPE_ASSERT, "(unsigned)( currentZone->clustersPreferredCount ) < (unsigned)( 15000 )", "currentZone->clustersPreferredCount doesn't index SPAWNGROUP_LOOT_MAX_ZONE_CLUSTERS\n\t%i not in [0, %i)", v19, v20) )
              __debugbreak();
          }
          currentZone->clustersPreferred[currentZone->clustersPreferredCount++] = v2;
        }
      }
      ++v2;
    }
    while ( v2 < currentZone->clusterCount );
    v11 = currentZone->clustersPreferredCount;
    if ( v11 )
    {
      v12 = BG_irand(0, v11, currentZone->seed);
      if ( (unsigned int)v12 >= currentZone->clustersPreferredCount )
      {
        LODWORD(v20) = currentZone->clustersPreferredCount;
        LODWORD(v19) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 830, ASSERT_TYPE_ASSERT, "(unsigned)( picked ) < (unsigned)( currentZone->clustersPreferredCount )", "picked doesn't index currentZone->clustersPreferredCount\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v13 = currentZone->clustersPreferred[v12];
      v14 = currentZone->clusterCount;
      if ( v13 >= v14 )
      {
        LODWORD(v20) = v14;
        LODWORD(v19) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 832, ASSERT_TYPE_ASSERT, "(unsigned)( clusterIndexPicked ) < (unsigned)( currentZone->clusterCount )", "clusterIndexPicked doesn't index currentZone->clusterCount\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      return v13;
    }
  }
  v16 = currentZone->clustersViableCount;
  if ( !v16 )
    return 15000i64;
  v17 = BG_irand(0, v16, currentZone->seed);
  if ( (unsigned int)v17 >= currentZone->clustersViableCount )
  {
    LODWORD(v20) = currentZone->clustersViableCount;
    LODWORD(v19) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 840, ASSERT_TYPE_ASSERT, "(unsigned)( picked ) < (unsigned)( currentZone->clustersViableCount )", "picked doesn't index currentZone->clustersViableCount\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  v13 = currentZone->clustersViable[v17];
  v18 = currentZone->clusterCount;
  if ( v13 < v18 )
    return v13;
  LODWORD(v20) = v18;
  LODWORD(v19) = v13;
  if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 842, ASSERT_TYPE_ASSERT, "(unsigned)( clusterIndexPicked ) < (unsigned)( currentZone->clusterCount )", "clusterIndexPicked doesn't index currentZone->clusterCount\n\t%i not in [0, %i)", v19, v20) )
    return v13;
  __debugbreak();
  return v13;
}

/*
==============
BG_SpawnGroup_Loot_PickItemDefForType
==============
*/
const BG_SpawnGroup_Loot_ItemDef *BG_SpawnGroup_Loot_PickItemDefForType(BG_SpawnGroup_Loot_CurrentZone *const currentZone, unsigned __int8 type)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned __int16 v6; 
  BG_SpawnGroup_Loot_SetItem *SetItem; 
  unsigned __int16 chance; 

  if ( !type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 465, ASSERT_TYPE_ASSERT, "(type != 0)", (const char *)&queryFormat, "type != SPAWNGROUP_LOOT_ITEM_TYPE_NONE") )
    __debugbreak();
  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 466, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( (!currentZone->loot || !currentZone->set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 467, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->set && currentZone->table && currentZone->seed") )
    __debugbreak();
  if ( !currentZone->itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 468, ASSERT_TYPE_ASSERT, "(currentZone->itemCount > 0)", (const char *)&queryFormat, "currentZone->itemCount > 0") )
    __debugbreak();
  if ( !currentZone->chanceTotalPerType[type] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 469, ASSERT_TYPE_ASSERT, "(currentZone->chanceTotalPerType[type] > 0)", (const char *)&queryFormat, "currentZone->chanceTotalPerType[type] > 0") )
    __debugbreak();
  v4 = 0;
  v5 = BG_irand(0, currentZone->chanceTotalPerType[type], currentZone->seed);
  v6 = 0;
  if ( currentZone->itemCount )
  {
    while ( 1 )
    {
      SetItem = BG_SpawnGroup_Loot_GetSetItem(currentZone, v6);
      chance = SetItem->chance;
      if ( chance )
      {
        if ( !SetItem->def->disabled && SetItem->def->type == type )
        {
          v4 += chance;
          if ( v5 < v4 )
            return SetItem->def;
        }
      }
      if ( ++v6 >= currentZone->itemCount )
        goto LABEL_25;
    }
  }
  else
  {
LABEL_25:
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE4360, 339i64, currentZone->set->name, currentZone->table->itemTypes[type]);
    return 0i64;
  }
}

/*
==============
BG_SpawnGroup_Loot_PickItemDefForTypeAndRarityRange
==============
*/
const BG_SpawnGroup_Loot_ItemDef *BG_SpawnGroup_Loot_PickItemDefForTypeAndRarityRange(BG_SpawnGroup_Loot_CurrentZone *const currentZone, unsigned __int8 type, unsigned __int16 rarityMin, unsigned __int16 rarityMax)
{
  unsigned __int8 itemTypeCount; 
  unsigned __int16 v9; 
  unsigned int v10; 
  int v11; 
  unsigned int *v12; 
  __int64 v13; 
  unsigned int v15; 
  unsigned __int16 v16; 
  BG_SpawnGroup_Loot_SetItem *SetItem; 
  unsigned __int16 chance; 
  const BG_SpawnGroup_Loot_ItemDef *def; 
  unsigned __int16 rarity; 
  __int64 v21; 
  __int64 v22; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 499, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( (!currentZone->loot || !currentZone->set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 500, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->set && currentZone->table && currentZone->seed") )
    __debugbreak();
  if ( !currentZone->itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 501, ASSERT_TYPE_ASSERT, "(currentZone->itemCount > 0)", (const char *)&queryFormat, "currentZone->itemCount > 0") )
    __debugbreak();
  itemTypeCount = currentZone->table->itemTypeCount;
  if ( type >= itemTypeCount )
  {
    LODWORD(v21) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 502, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( currentZone->table->itemTypeCount )", "type doesn't index currentZone->table->itemTypeCount\n\t%i not in [0, %i)", v21, itemTypeCount) )
      __debugbreak();
  }
  v9 = 8;
  if ( rarityMax )
    v9 = rarityMax;
  v10 = 0;
  v11 = 0;
  if ( rarityMin < v9 )
  {
    v12 = &currentZone->chanceTotalPerTypeAndRarity[type][rarityMin];
    v13 = (unsigned __int16)(v9 - rarityMin);
    do
    {
      v11 += *v12++;
      --v13;
    }
    while ( v13 );
  }
  if ( v11 )
  {
    v15 = BG_irand(0, v11, currentZone->seed);
    v16 = 0;
    if ( currentZone->itemCount )
    {
      while ( 1 )
      {
        SetItem = BG_SpawnGroup_Loot_GetSetItem(currentZone, v16);
        chance = SetItem->chance;
        if ( chance )
        {
          def = SetItem->def;
          if ( !SetItem->def->disabled && def->type == type )
          {
            rarity = def->rarity;
            if ( rarity >= rarityMin && rarity <= v9 )
            {
              v10 += chance;
              if ( v15 < v10 )
                return def;
            }
          }
        }
        if ( ++v16 >= currentZone->itemCount )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      LODWORD(v22) = v9;
      LODWORD(v21) = rarityMin;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE4530, 6599i64, currentZone->set->name, currentZone->table->itemTypes[type], v21, v22);
      return 0i64;
    }
  }
  else
  {
    LODWORD(v22) = v9;
    LODWORD(v21) = rarityMin;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE44B0, 6598i64, currentZone->set->name, currentZone->table->itemTypes[type], v21, v22);
    return 0i64;
  }
}

/*
==============
BG_SpawnGroup_Loot_PickItemDepends
==============
*/
void BG_SpawnGroup_Loot_PickItemDepends(BG_SpawnGroup_Loot_CurrentZone *const currentZone)
{
  const BG_SpawnGroup_Loot_ItemDef *def; 
  unsigned __int16 v3; 
  __int64 v4; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1048, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( (!currentZone->loot || !currentZone->set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1049, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->set && currentZone->table && currentZone->seed") )
    __debugbreak();
  if ( !currentZone->item.def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1050, ASSERT_TYPE_ASSERT, "(currentZone->item.def)", (const char *)&queryFormat, "currentZone->item.def") )
    __debugbreak();
  def = currentZone->item.def;
  v3 = 0;
  for ( *(_DWORD *)&currentZone->dependCount = 0; v3 < def->dependCount; ++v3 )
  {
    v4 = (__int64)&def->depends[v3];
    if ( def->depends[v3].chance >= 0x64u || BG_irand(0, 100, currentZone->seed) < def->depends[v3].chance )
    {
      if ( currentZone->dependCount >= 0xAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1060, ASSERT_TYPE_ASSERT, "(currentZone->dependCount < 10)", (const char *)&queryFormat, "currentZone->dependCount < SPAWNGROUP_LOOT_MAX_DEPENDS") )
        __debugbreak();
      if ( !*(_QWORD *)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1061, ASSERT_TYPE_ASSERT, "(depend->def)", (const char *)&queryFormat, "depend->def") )
        __debugbreak();
      currentZone->depends[currentZone->dependCount].required = *(_WORD *)(v4 + 8) >= 0x64u;
      currentZone->depends[currentZone->dependCount++].def = *(const BG_SpawnGroup_Loot_ItemDef **)v4;
      if ( currentZone->depends[currentZone->dependCount].required )
        ++currentZone->dependCountRequired;
    }
    def = currentZone->item.def;
  }
}

/*
==============
BG_SpawnGroup_Loot_PickItemTypeForRarityRange
==============
*/
unsigned __int8 BG_SpawnGroup_Loot_PickItemTypeForRarityRange(BG_SpawnGroup_Loot_CurrentZone *const currentZone, unsigned __int16 rarityMin, unsigned __int16 rarityMax)
{
  unsigned __int16 typeCount; 
  unsigned __int16 v7; 
  unsigned __int8 v8; 
  unsigned int v9; 
  unsigned __int8 v10; 
  int v11; 
  unsigned __int16 v12; 
  __int64 v13; 
  int v14; 
  unsigned __int8 v15; 
  unsigned int v16; 
  __int64 v17; 
  char *fmt; 
  __int64 v20; 
  char v21[56]; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 548, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( (!currentZone->loot || !currentZone->set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 549, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->set && currentZone->table && currentZone->seed") )
    __debugbreak();
  if ( !currentZone->itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 550, ASSERT_TYPE_ASSERT, "(currentZone->itemCount > 0)", (const char *)&queryFormat, "currentZone->itemCount > 0") )
    __debugbreak();
  typeCount = currentZone->typeCount;
  v7 = 8;
  if ( rarityMax )
    v7 = rarityMax;
  v8 = 1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( typeCount <= 1u )
    goto LABEL_27;
  do
  {
    v12 = rarityMin;
    if ( rarityMin < v7 )
    {
      while ( !currentZone->chanceTotalPerTypeAndRarity[v8][v12] )
      {
        if ( ++v12 >= v7 )
          goto LABEL_21;
      }
      v11 += currentZone->set->typeChances[v8];
      v13 = v10++;
      v21[v13] = v8;
    }
LABEL_21:
    ++v8;
  }
  while ( v8 < typeCount );
  if ( v10 )
  {
    v14 = BG_irand(0, v11, currentZone->seed);
    v15 = 0;
    v16 = v14;
    while ( 1 )
    {
      v17 = (unsigned __int8)v21[v15];
      v9 += currentZone->typeChances[v17];
      if ( v16 < v9 )
        break;
      if ( ++v15 >= v10 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE4660, 6601i64);
        goto LABEL_28;
      }
    }
  }
  else
  {
LABEL_27:
    LODWORD(v20) = v7;
    LODWORD(fmt) = rarityMin;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE45E0, 6600i64, currentZone->set->name, fmt, v20);
LABEL_28:
    LOBYTE(v17) = 0;
  }
  return v17;
}

/*
==============
BG_SpawnGroup_Loot_PickSingleItem
==============
*/
__int64 BG_SpawnGroup_Loot_PickSingleItem(const BG_SpawnGroup_Loot_Table *lootTable, const char *typeName, int rarityMin, int rarityMax, const char *setName, unsigned int *seed)
{
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  unsigned __int8 SetIndex; 
  BG_SpawnGroup_Loot_Set *Set; 
  BG_SpawnGroup_Loot_SetReq req; 

  v6 = rarityMax;
  v7 = rarityMin;
  if ( (!lootTable || !seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 2170, ASSERT_TYPE_ASSERT, "(lootTable && seed)", (const char *)&queryFormat, "lootTable && seed") )
    __debugbreak();
  SetIndex = BG_SpawnGroup_Loot_FindSetIndex(lootTable, setName);
  if ( !SetIndex )
    SetIndex = lootTable->setForZoneDefault;
  Set = BG_SpawnGroup_Loot_GetSet(lootTable, SetIndex);
  singleItemZone.set = NULL;
  *(&singleItemZone.zoneid + 1) = 0;
  memset_0(&singleItemZone.printResultsToConsole + 1, 0, 0x1E017ui64);
  singleItemZone.table = lootTable;
  singleItemZone.loot = &singleItemLoot;
  singleItemZone.seed = seed;
  singleItemZone.zoneid = -2;
  singleItemZone.printResultsToConsole = 0;
  singleItemZone.typeCount = lootTable->itemTypeCount;
  BG_SpawnGroup_Loot_BeginCurrentZoneForSet(&singleItemZone, Set);
  req.def = NULL;
  *(_QWORD *)&req.min = 1i64;
  *(_QWORD *)&req.type = BG_SpawnGroup_Loot_FindTypeIndex(lootTable, typeName);
  req.rarityMin = v7;
  req.rarityMax = v6;
  BG_SpawnGroup_Loot_PickItem(&singleItemZone, &req);
  return singleItemZone.item.defIndex;
}

/*
==============
BG_SpawnGroup_Loot_PickSpawnPoints
==============
*/
bool BG_SpawnGroup_Loot_PickSpawnPoints(BG_SpawnGroup_Loot_CurrentZone *const currentZone)
{
  unsigned __int16 *p_pointCount; 
  unsigned __int16 v3; 
  unsigned __int16 v4; 
  __int64 v5; 
  unsigned __int16 v6; 
  unsigned __int16 clusterCount; 
  unsigned __int16 v8; 
  unsigned __int16 dependCount; 
  unsigned __int16 v10; 
  bool v11; 
  __int64 v12; 
  bool result; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  __int64 v16; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 917, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( (!currentZone->loot || !currentZone->set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 918, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->set && currentZone->table && currentZone->seed") )
    __debugbreak();
  p_pointCount = &currentZone->pointCount;
  if ( !currentZone->pointCount && !currentZone->clusterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 919, ASSERT_TYPE_ASSERT, "(currentZone->pointCount > 0 || currentZone->clusterCount > 0)", (const char *)&queryFormat, "currentZone->pointCount > 0 || currentZone->clusterCount > 0") )
    __debugbreak();
  v3 = 0;
  currentZone->item.point = 0;
  v4 = 0;
  currentZone->item.pointFound = 0;
  currentZone->item.cluster = -1;
  for ( currentZone->item.clusterFound = 0; v4 < currentZone->dependCount; *(&currentZone->depends[0].clusterFound + v5) = 0 )
  {
    v5 = v4++;
    v5 *= 32i64;
    *(unsigned __int16 *)((char *)&currentZone->depends[0].point + v5) = 0;
    *(&currentZone->depends[0].pointFound + v5) = 0;
    *(unsigned __int16 *)((char *)&currentZone->depends[0].cluster + v5) = -1;
  }
  if ( !currentZone->clusterCount || (v6 = BG_SpawnGroup_Loot_PickItemCluster(currentZone), v6 == 15000) )
  {
    if ( *p_pointCount )
    {
      v14 = BG_irand(0, *p_pointCount, currentZone->seed);
      if ( v14 >= *p_pointCount )
      {
        LODWORD(v16) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1004, ASSERT_TYPE_ASSERT, "(unsigned)( picked ) < (unsigned)( currentZone->pointCount )", "picked doesn't index currentZone->pointCount\n\t%i not in [0, %i)", v16, *p_pointCount) )
          __debugbreak();
      }
      v15 = currentZone->points[v14];
      if ( BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem(currentZone->loot->pointToDefBuffer, v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1007, ASSERT_TYPE_ASSERT, "(!BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem( currentZone->loot->pointToDefBuffer, pointid ))", (const char *)&queryFormat, "!BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem( currentZone->loot->pointToDefBuffer, pointid )") )
        __debugbreak();
      BG_SpawnGroup_Loot_UshortArrayRemove(currentZone->points, &currentZone->pointCount, v14);
      result = 1;
      currentZone->item.point = v15;
      currentZone->item.pointFound = 1;
      currentZone->dependCount = 0;
    }
    else
    {
      if ( currentZone->item.pointFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1035, ASSERT_TYPE_ASSERT, "(!currentZone->item.pointFound)", (const char *)&queryFormat, "!currentZone->item.pointFound") )
        __debugbreak();
      BG_SpawnGroup_Loot_RemoveAllItemsMatchingDef(currentZone, currentZone->item.def);
      return 0;
    }
  }
  else
  {
    clusterCount = currentZone->clusterCount;
    if ( v6 >= clusterCount )
    {
      LODWORD(v16) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 932, ASSERT_TYPE_ASSERT, "(unsigned)( clusterIndexPicked ) < (unsigned)( currentZone->clusterCount )", "clusterIndexPicked doesn't index currentZone->clusterCount\n\t%i not in [0, %i)", v16, clusterCount) )
        __debugbreak();
    }
    v8 = currentZone->clusters[v6];
    BG_SpawnGroup_Loot_GetClusterOpenPoints(v8, currentZone, currentZone->loot->pointToDefBuffer);
    BG_SpawnGroup_Loot_PickClusterPoint(currentZone, v8, &currentZone->item);
    dependCount = currentZone->dependCount;
    v10 = 0;
    if ( !dependCount )
      goto LABEL_31;
    do
    {
      if ( !currentZone->clusterPointCount )
        break;
      if ( currentZone->depends[v10].required )
        BG_SpawnGroup_Loot_PickClusterPoint(currentZone, v8, &currentZone->depends[v10]);
      dependCount = currentZone->dependCount;
      ++v10;
    }
    while ( v10 < dependCount );
    if ( dependCount )
    {
      while ( 1 )
      {
        v11 = currentZone->clusterPointCount == 0;
        if ( !currentZone->clusterPointCount )
          break;
        v12 = v3;
        if ( !currentZone->depends[v12].pointFound )
          BG_SpawnGroup_Loot_PickClusterPoint(currentZone, v8, &currentZone->depends[v12]);
        if ( ++v3 >= currentZone->dependCount )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      v11 = currentZone->clusterPointCount == 0;
    }
    if ( v11 )
    {
      BG_SpawnGroup_Loot_UshortArrayRemove(currentZone->clusters, &currentZone->clusterCount, v6);
      return 1;
    }
    else
    {
      if ( currentZone->clusterSoloCount )
      {
        BG_SpawnGroup_Loot_UshortArrayRemove(currentZone->clusters, &currentZone->clusterCount, v6);
        --currentZone->clusterSoloCount;
      }
      return 1;
    }
  }
  return result;
}

/*
==============
BG_SpawnGroup_Loot_PrintClusterError
==============
*/
void BG_SpawnGroup_Loot_PrintClusterError(const SpawnGroupCluster *cluster, const LootClusterErrorCode error)
{
  const char *v2; 
  const char *v3; 

  v2 = lootClusterErrorStrTable[error];
  v3 = vtos(&cluster->bounds.midPoint);
  Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Loot cluster centered at %s %s.\n", v3, v2);
}

/*
==============
BG_SpawnGroup_Loot_PrintNodeError
==============
*/
void BG_SpawnGroup_Loot_PrintNodeError(const SpawnGroupPoint *point, const LootNodeErrorCode error, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 cluster; 
  unsigned __int8 v6; 
  char *v7; 
  char *v8; 
  bool v9; 
  const char *v10; 

  cluster = point->cluster;
  v6 = error;
  if ( (unsigned __int16)(cluster + 4) > 1u )
  {
    v8 = vtos(&point->origin);
    v9 = cluster == 0xFFFB;
    v10 = "[SPAWNGROUP_LOOT] ERROR: Quest node %s at %s.\n";
    if ( !v9 )
      v10 = "[SPAWNGROUP_LOOT] ERROR: Loot  node %s at %s.\n";
    Com_PrintError(29, v10, lootNodeErrorStrTable[v6], v8, a5);
  }
  else
  {
    v7 = vtos(&point->origin);
    Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Cache node %s at %s.\n", lootNodeErrorStrTable[v6], v7, a5);
  }
}

/*
==============
BG_SpawnGroup_Loot_RandomizeUshortArray
==============
*/
void BG_SpawnGroup_Loot_RandomizeUshortArray(unsigned __int16 *const valueArray, unsigned __int16 *valueArrayCount, const unsigned int chance, const unsigned int chanceMax, unsigned int *const randSeed)
{
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  unsigned __int16 *v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int16 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( chance && *valueArrayCount )
  {
    v7 = BG_SpawnGroup_Loot_ComputeIntegralPercentage(chance, chanceMax, *valueArrayCount);
    if ( v7 > *valueArrayCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1295, ASSERT_TYPE_ASSERT, "(totalElementsToPopulate <= valueArrayCount)", (const char *)&queryFormat, "totalElementsToPopulate <= valueArrayCount") )
      __debugbreak();
    v8 = 0;
    if ( v7 )
    {
      v9 = valueArray;
      do
      {
        v10 = BG_irand(v8, *valueArrayCount, randSeed);
        v11 = (int)v10;
        if ( v10 >= *valueArrayCount )
        {
          LODWORD(v14) = *valueArrayCount;
          LODWORD(v13) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1300, ASSERT_TYPE_ASSERT, "(unsigned)( randomIndex ) < (unsigned)( valueArrayCount )", "randomIndex doesn't index valueArrayCount\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        v12 = *v9;
        ++v8;
        *v9++ = valueArray[v11];
        valueArray[v11] = v12;
      }
      while ( v8 < v7 );
    }
    *valueArrayCount = v7;
  }
  else
  {
    *valueArrayCount = 0;
  }
}

/*
==============
BG_SpawnGroup_Loot_RemoveAllItemsMatchingDef
==============
*/
void BG_SpawnGroup_Loot_RemoveAllItemsMatchingDef(BG_SpawnGroup_Loot_CurrentZone *currentZone, const BG_SpawnGroup_Loot_ItemDef *const def)
{
  int i; 
  BG_SpawnGroup_Loot_SetItem *SetItem; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 263, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 264, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  for ( i = currentZone->itemCount - 1; i >= 0; --i )
  {
    SetItem = BG_SpawnGroup_Loot_GetSetItem(currentZone, i);
    if ( SetItem->def == def )
      BG_SpawnGroup_Loot_RemoveZoneItem(currentZone, SetItem, i);
  }
}

/*
==============
BG_SpawnGroup_Loot_RemoveZoneItem
==============
*/
void BG_SpawnGroup_Loot_RemoveZoneItem(BG_SpawnGroup_Loot_CurrentZone *currentZone, const BG_SpawnGroup_Loot_SetItem *const item, unsigned __int16 index)
{
  __int64 type; 
  __int64 rarity; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 214, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( !item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 215, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
    __debugbreak();
  if ( !item->chance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 216, ASSERT_TYPE_ASSERT, "(item->chance > 0)", (const char *)&queryFormat, "item->chance > 0") )
    __debugbreak();
  type = item->def->type;
  rarity = item->def->rarity;
  currentZone->chanceTotal -= item->chance;
  currentZone->chanceTotalPerType[type] -= item->chance;
  currentZone->chanceTotalPerTypeAndRarity[type][rarity] -= item->chance;
  if ( !currentZone->chanceTotalPerType[type] )
  {
    currentZone->typeChanceTotal -= currentZone->typeChances[type];
    currentZone->typeChances[type] = 0;
  }
  BG_SpawnGroup_Loot_UshortArrayRemove(currentZone->items, &currentZone->itemCount, index);
}

/*
==============
BG_SpawnGroup_Loot_ReportCounts
==============
*/
void BG_SpawnGroup_Loot_ReportCounts(const BG_SpawnGroup_Loot_Table *table, const BG_SpawnGroup_Loot *loot, BG_SpawnGroup_Loot_Counts *counts, unsigned __int8 cacheTypeIndex, unsigned __int8 setIndex, bool writeToDlog)
{
  unsigned __int16 itemCount; 
  unsigned __int16 itemCountCache; 
  unsigned __int16 v11; 
  int v12; 
  float v13; 
  BG_SpawnGroup_Loot_Caches *cacheBuffer; 
  __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int8 i; 
  __int64 v18; 
  const char *name; 
  unsigned __int8 setCount; 
  unsigned int v21; 
  unsigned int itemCountInGlobalZone; 
  __int64 v23; 
  unsigned __int16 *itemCountByZone; 
  float v25; 
  float v26; 
  bool v27; 
  unsigned __int16 j; 
  unsigned __int16 v29; 
  const char *v30; 
  bool v31; 
  unsigned __int8 k; 
  unsigned __int16 v33; 
  bool v34; 
  unsigned __int16 *itemCountByRarity; 
  unsigned __int16 v36; 
  bool v37; 
  const char *v38; 
  DLogContext context; 
  char buffer[4096]; 

  itemCount = counts->itemCount;
  if ( counts->itemCount )
  {
    itemCountCache = counts->itemCountCache;
    if ( itemCountCache <= itemCount )
    {
      v38 = (char *)&queryFormat.fmt + 3;
      v11 = 0;
      v12 = (unsigned __int16)(itemCount - itemCountCache);
      v13 = (float)v12;
      if ( cacheTypeIndex )
      {
        cacheBuffer = loot->cacheBuffer;
        v15 = (__int64)&cacheBuffer->cacheTypes[cacheTypeIndex];
        v16 = (unsigned __int64)cacheBuffer->cacheTypes[cacheTypeIndex].itemDefIndex << 8;
        v38 = *(const char **)((char *)&table->itemDefs[0].name + v16);
        Com_Printf(29, "\n\nCache Pre-Selection\n");
        Com_Printf(29, "==============================================================\n");
        Com_Printf(29, " CacheType = %s\n", *(const char **)((char *)&table->itemDefs[0].name + v16));
        for ( i = 0; i < *(_BYTE *)(v15 + 3); ++i )
        {
          v18 = *(unsigned __int8 *)(i + v15);
          name = table->sets[v18].name;
          if ( table->sets[v18].inheritance )
            Com_Printf(29, " CacheSet[%d] = %s (inherits from %s)\n", i, name, table->sets[v18].inheritance);
          else
            Com_Printf(29, " CacheSet[%d] = %s\n", i, name);
        }
        Com_Printf(29, " Total Items Choosen For All Caches = %d\n", (unsigned int)v12);
      }
      else if ( setIndex && cm.mapEnts->spawnGroupLoot.zoneCount )
      {
        setCount = table->setCount;
        if ( setIndex >= setCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1876, ASSERT_TYPE_ASSERT, "(unsigned)( setIndex ) < (unsigned)( table->setCount )", "setIndex doesn't index table->setCount\n\t%i not in [0, %i)", setIndex, setCount) )
          __debugbreak();
        v21 = 0;
        itemCountInGlobalZone = 0;
        v38 = table->sets[setIndex].name;
        if ( table->setForZoneDefault == setIndex )
        {
          itemCountInGlobalZone = loot->itemCountInGlobalZone;
          v21 = 1;
        }
        if ( cm.mapEnts->spawnGroupLoot.zoneCount )
        {
          v23 = 0i64;
          itemCountByZone = loot->itemCountByZone;
          do
          {
            if ( table->setForZone[v23] == setIndex )
            {
              itemCountInGlobalZone += *itemCountByZone;
              ++v21;
            }
            ++v23;
            ++itemCountByZone;
          }
          while ( v23 < cm.mapEnts->spawnGroupLoot.zoneCount );
        }
        Com_Printf(29, "\n\nSet %s\n", table->sets[setIndex].name);
        Com_Printf(29, "==============================================================\n");
        v25 = (float)v21;
        Com_Printf(29, " Zones = %d / %d ( %5.1f percent )\n", v21, cm.mapEnts->spawnGroupLoot.zoneCount, (float)((float)(v25 / (float)cm.mapEnts->spawnGroupLoot.zoneCount) * 100.0));
        v26 = (float)itemCountInGlobalZone;
        Com_Printf(29, " Items = %d / %d ( %5.1f percent )\n", itemCountInGlobalZone, loot->itemCounts.itemCount, (float)((float)(v26 / (float)loot->itemCounts.itemCount) * 100.0));
      }
      Com_Printf(131101, "\nItems %s\n", v38);
      Com_Printf(131101, "--------------------------------------------------------------\n");
      v27 = writeToDlog;
      for ( j = 0; j < table->itemDefCount; ++j )
      {
        v29 = counts->itemCountByDef[j];
        if ( v29 )
        {
          if ( v27 )
          {
            v30 = table->itemDefs[(unsigned __int64)j].name;
            if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
            {
              v31 = DLog_BeginEvent(&context, "dlog_event_loot_spawn_summary_item");
              context.autoEndEvent = 1;
              if ( v31 && DLog_String(&context, "loot_name", v30, 0) && DLog_UInt16(&context, "loot_count", v29) && DLog_Float32(&context, "loot_spawn_percent", (float)((float)v29 / v13) * 100.0) )
                DLog_RecordContext(&context);
            }
            v27 = writeToDlog;
          }
          Com_Printf(131101, " Item %30s %5d (%5.1f percent)\n", table->itemDefs[(unsigned __int64)j].name, counts->itemCountByDef[j], (float)((float)((float)v29 / v13) * 100.0));
        }
      }
      Com_Printf(131101, "\nTypes %s\n", v38);
      Com_Printf(131101, "--------------------------------------------------------------\n");
      for ( k = 1; k < table->itemTypeCount; ++k )
      {
        v33 = counts->itemCountByType[k];
        if ( v33 )
        {
          if ( v27 && DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
          {
            v34 = DLog_BeginEvent(&context, "dlog_event_loot_spawn_summary_type");
            context.autoEndEvent = 1;
            if ( v34 && DLog_UInt16(&context, "loot_type", k) && DLog_UInt16(&context, "loot_type_count", v33) && DLog_Float32(&context, "loot_type_percent", (float)((float)v33 / v13) * 100.0) )
              DLog_RecordContext(&context);
          }
          Com_Printf(131101, " Type %30s %5d (%5.1f percent)\n", table->itemTypes[k], counts->itemCountByType[k], (float)((float)((float)v33 / v13) * 100.0));
        }
      }
      Com_Printf(131101, "\nRarities %s\n", v38);
      Com_Printf(131101, "--------------------------------------------------------------\n");
      itemCountByRarity = counts->itemCountByRarity;
      do
      {
        v36 = *itemCountByRarity;
        if ( *itemCountByRarity )
        {
          if ( v27 && DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
          {
            v37 = DLog_BeginEvent(&context, "dlog_event_loot_spawn_summary_rarity");
            context.autoEndEvent = 1;
            if ( v37 && DLog_UInt16(&context, "loot_rarity", v11) && DLog_UInt16(&context, "loot_rarity_count", v36) && DLog_Float32(&context, "loot_rarity_percent", (float)((float)v36 / v13) * 100.0) )
              DLog_RecordContext(&context);
          }
          Com_Printf(131101, " Rarity level %2d                      %5d (%5.1f percent)\n", v11, *itemCountByRarity, (float)((float)((float)v36 / v13) * 100.0));
        }
        ++v11;
        ++itemCountByRarity;
      }
      while ( v11 < 8u );
    }
  }
}

/*
==============
BG_SpawnGroup_Loot_ReportZones
==============
*/
void BG_SpawnGroup_Loot_ReportZones(BG_SpawnGroup_Loot_Table *table, BG_SpawnGroup_Loot *loot)
{
  signed __int64 v2; 
  void *v3; 
  MapEnts *mapEnts; 
  float v7; 
  BG_SpawnGroup_Loot_Set *Set; 
  int itemCountInGlobalZone; 
  const char **p_name; 
  const char *name; 
  bool v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int16 *itemCountByZone; 
  __int64 v16; 
  unsigned __int8 setForZoneDefault; 
  BG_SpawnGroup_Loot_Set *v18; 
  int v19; 
  scr_string_t v20; 
  float v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  bool v25; 
  SpawnGroupZone *zones; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  MapEnts *v32; 
  DLogContext context; 
  char buffer[4096]; 

  v3 = alloca(v2);
  mapEnts = cm.mapEnts;
  v7 = (float)(unsigned __int16)(loot->itemCounts.itemCount - loot->itemCounts.itemCountCache);
  v32 = cm.mapEnts;
  Com_Printf(131101, "\nSpawned Zones\n");
  Com_Printf(131101, "==============================================================\n");
  if ( loot->itemCountInGlobalZone )
  {
    Set = BG_SpawnGroup_Loot_GetSet(table, table->setForZoneDefault);
    itemCountInGlobalZone = loot->itemCountInGlobalZone;
    p_name = &Set->name;
    name = Set->name;
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
    {
      v12 = DLog_BeginEvent(&context, "dlog_event_loot_spawn_summary_zone");
      context.autoEndEvent = 1;
      if ( v12 && DLog_String(&context, "loot_zone_name", "global", 0) && DLog_String(&context, "loot_set_name", name, 0) && DLog_UInt16(&context, "loot_zone_count", itemCountInGlobalZone) && DLog_Float32(&context, "loot_zone_percent", (float)((float)itemCountInGlobalZone / v7) * 100.0) )
        DLog_RecordContext(&context);
    }
    Com_Printf(131101, " Zone %30s %5d items %23d caches (%5d cp) (%5.1f percent) with set %s\n", "global", (unsigned __int16)(loot->itemCountInGlobalZone - loot->cacheCountInGlobalZone), loot->cacheCountInGlobalZone, loot->cachePointCountInGlobalZone, (float)((float)((float)itemCountInGlobalZone / v7) * 100.0), *p_name);
  }
  v13 = 0i64;
  v14 = 0i64;
  itemCountByZone = loot->itemCountByZone;
  v16 = 1000i64;
  do
  {
    if ( *itemCountByZone )
    {
      setForZoneDefault = table->setForZone[v13];
      if ( !setForZoneDefault )
        setForZoneDefault = table->setForZoneDefault;
      v18 = BG_SpawnGroup_Loot_GetSet(table, setForZoneDefault);
      v19 = *itemCountByZone;
      v20 = mapEnts->spawnGroupLoot.zones[v14].name;
      v21 = (float)((float)v19 / v7) * 100.0;
      if ( v20 )
      {
        v23 = SL_ConvertToString(v20);
        LOWORD(v19) = *itemCountByZone;
        v22 = v23;
      }
      else
      {
        v22 = "unnamed";
      }
      v24 = v18->name;
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
      {
        v25 = DLog_BeginEvent(&context, "dlog_event_loot_spawn_summary_zone");
        context.autoEndEvent = 1;
        if ( v25 && DLog_String(&context, "loot_zone_name", v22, 0) && DLog_String(&context, "loot_set_name", v24, 0) && DLog_UInt16(&context, "loot_zone_count", v19) && DLog_Float32(&context, "loot_zone_percent", v21) )
          DLog_RecordContext(&context);
      }
      zones = v32->spawnGroupLoot.zones;
      LODWORD(v31) = itemCountByZone[2000];
      LODWORD(v30) = itemCountByZone[1000];
      LODWORD(v29) = (unsigned __int16)(zones[v14].pointCount - v31);
      LODWORD(v28) = zones[v14].clusterCount;
      LODWORD(v27) = (unsigned __int16)(*itemCountByZone - v30);
      Com_Printf(131101, " Zone at  %12.3f %12.3f  %5d items (%5d c %5d p) %5d caches (%5d cp) (%5.1f percent) %s with set %s\n", zones[v14].bounds.midPoint.v[0], zones[v14].bounds.midPoint.v[1], v27, v28, v29, v30, v31, v21, v22, v24);
      mapEnts = v32;
    }
    ++v13;
    ++itemCountByZone;
    ++v14;
    --v16;
  }
  while ( v16 );
}

/*
==============
BG_SpawnGroup_Loot_ReqMatchesDef
==============
*/
bool BG_SpawnGroup_Loot_ReqMatchesDef(const BG_SpawnGroup_Loot_SetReq *const req, const BG_SpawnGroup_Loot_ItemDef *const def)
{
  if ( !req && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 169, ASSERT_TYPE_ASSERT, "(req)", (const char *)&queryFormat, "req") )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 170, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return req->def == def || !req->def && req->type == def->type;
}

/*
==============
BG_SpawnGroup_Loot_ResetZonePoints
==============
*/
void BG_SpawnGroup_Loot_ResetZonePoints(BG_SpawnGroup_Loot_CurrentZone *const currentZone)
{
  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1315, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  memset_0(currentZone->points, 0, sizeof(currentZone->points));
  currentZone->pointCount = 0;
}

/*
==============
BG_SpawnGroup_Loot_Spawn
==============
*/
void BG_SpawnGroup_Loot_Spawn(BG_SpawnGroup_Loot *loot, unsigned int seed, const StringTable *lootTable, const StringTable *zoneMapTable, const char *lootTableFilter, BG_SpawnGroup_Loot_Table *table, bool printResultsToConsole)
{
  BG_SpawnGroup_Loot_Table *v7; 
  BG_SpawnGroup_Loot *v10; 
  MapEnts *mapEnts; 
  unsigned int v12; 
  unsigned __int16 *cacheCountByZone; 
  unsigned __int16 *itemCountByDef; 
  __int64 v15; 
  BG_SpawnGroup_Loot_Caches *cacheBuffer; 
  unsigned __int8 v17; 
  __int64 v18; 
  BG_SpawnGroup_Loot_Caches *v19; 
  bool v20; 
  unsigned __int16 i; 
  int v22; 
  unsigned __int8 *v23; 
  MapEnts *v24; 
  signed int v25; 
  __int64 v26; 
  __int64 v27; 
  SpawnGroupZone *zones; 
  unsigned int v29; 
  unsigned __int16 v30; 
  unsigned __int16 pointCount; 
  __int64 v32; 
  signed int zoneCount; 
  unsigned int cachePointCountInGlobalZone; 
  __int64 v35; 
  unsigned int v36; 
  int v37; 
  BG_SpawnGroup_Loot_Counts *v38; 
  BG_SpawnGroup_Loot *v39; 
  float v40; 
  float v41; 
  unsigned __int8 j; 
  unsigned __int16 itemCount; 
  unsigned __int16 v44; 
  unsigned __int16 v45; 
  bool v46; 
  BG_SpawnGroup_Loot_Caches *v47; 
  unsigned __int8 v48; 
  char *fmt; 
  __int64 writeToDlog; 
  __int64 v51; 
  unsigned int pHoldrand; 
  unsigned int v53; 
  BG_SpawnGroup_Loot *loota; 
  BG_SpawnGroup_Loot_Counts *counts; 
  BG_SpawnGroup_Loot_Table *v56; 
  DLogContext context; 
  char buffer[4096]; 

  v7 = table;
  loota = loot;
  v10 = loot;
  pHoldrand = seed;
  v56 = table;
  if ( (!table || !loot || !lootTable) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 2039, ASSERT_TYPE_ASSERT, "(table && loot && lootTable)", (const char *)&queryFormat, "table && loot && lootTable") )
    __debugbreak();
  mapEnts = cm.mapEnts;
  if ( cm.mapEnts->spawnGroupLoot.pointCount )
  {
    if ( printResultsToConsole )
    {
      Com_Printf(131101, "\n==============================================================\n");
      Com_Printf(131101, "[SPAWNGROUP_LOOT] Seed: %d\n", pHoldrand);
      Com_Printf(131101, "[SPAWNGROUP_LOOT] Table: %s\n", lootTable->name);
      Com_Printf(131101, "[SPAWNGROUP_LOOT] Filter: %s\n", lootTableFilter);
      Com_Printf(131101, "[SPAWNGROUP_LOOT] ZoneMap: %s\n", zoneMapTable->name);
    }
    if ( BG_SpawnGroup_Loot_ParseTable(table, lootTable, zoneMapTable, lootTableFilter, v10->cacheBuffer) )
    {
      v12 = 0;
      counts = &v10->itemCounts;
      *(_DWORD *)&v10->itemCounts.itemCount = 0;
      memset_0(v10->itemCounts.itemCountByType, 0, 0x204ui64);
      memset_0(v10->itemCountByZone, 0, sizeof(v10->itemCountByZone));
      cacheCountByZone = v10->cacheCountByZone;
      memset_0(v10->cacheCountByZone, 0, sizeof(v10->cacheCountByZone));
      memset_0(v10->cachePointCountByZone, 0, sizeof(v10->cachePointCountByZone));
      *(_DWORD *)&v10->itemCountInGlobalZone = 0;
      itemCountByDef = v10->itemCountsBySet[1].itemCountByDef;
      v10->cachePointCountInGlobalZone = 0;
      v15 = 29i64;
      do
      {
        *((_DWORD *)itemCountByDef - 26) = 0;
        memset_0(itemCountByDef, 0, 0x190ui64);
        memset_0(itemCountByDef - 50, 0, 0x64ui64);
        *((_QWORD *)itemCountByDef + 50) = 0i64;
        *((_QWORD *)itemCountByDef + 51) = 0i64;
        itemCountByDef += 260;
        --v15;
      }
      while ( v15 );
      cacheBuffer = v10->cacheBuffer;
      if ( cacheBuffer )
      {
        v17 = 0;
        if ( cacheBuffer->cacheTypeCount )
        {
          do
          {
            v18 = v17;
            v19 = v10->cacheBuffer;
            *(_DWORD *)&v19->cacheTypes[v18].contents.itemCount = 0;
            memset_0(v19->cacheTypes[v18].contents.itemCountByType, 0, 0x204ui64);
            ++v17;
          }
          while ( v17 < v10->cacheBuffer->cacheTypeCount );
        }
      }
      BG_srand(&pHoldrand);
      v20 = printResultsToConsole;
      if ( printResultsToConsole )
      {
        Com_Printf(131101, "[SPAWNGROUP_LOOT] Table Has %d itemDefs\n", table->itemDefCount);
        Com_Printf(131101, "[SPAWNGROUP_LOOT] Table Has %d types\n", table->itemTypeCount);
        Com_Printf(131101, "[SPAWNGROUP_LOOT] Table Has %d sets\n", table->setCount);
        Com_Printf(131101, "[SPAWNGROUP_LOOT] Map Has %d zones\n", (unsigned int)mapEnts->spawnGroupLoot.zoneCount + 1);
        Com_Printf(131101, "[SPAWNGROUP_LOOT] Map Has %d clusters\n", mapEnts->spawnGroupLoot.clusterCount);
        Com_Printf(131101, "[SPAWNGROUP_LOOT] Map Has %d points\n", mapEnts->spawnGroupLoot.pointCount);
      }
      Sys_ProfBeginNamedEvent(0xFFF5F5DC, "BG_SpawnGroup_Loot_SpawnZone");
      BG_SpawnGroup_Loot_SpawnZone(v10, table, -1, &pHoldrand, printResultsToConsole);
      for ( i = 0; i < mapEnts->spawnGroupLoot.zoneCount; ++i )
        BG_SpawnGroup_Loot_SpawnZone(v10, table, i, &pHoldrand, printResultsToConsole);
      v22 = 1;
      v10->itemCounts.itemCountCache = 0;
      if ( table->cacheSetCount > 1u )
      {
        v23 = &table->cacheSets[1];
        do
        {
          BG_SpawnGroup_Loot_SpawnCachesMatchingSet(*v23++, v10, table, &pHoldrand, printResultsToConsole);
          ++v22;
        }
        while ( v22 < table->cacheSetCount );
      }
      v24 = cm.mapEnts;
      v25 = 0;
      v53 = 0;
      if ( cm.mapEnts->spawnGroupLoot.zoneCount )
      {
        v26 = 0i64;
        v27 = 0i64;
        do
        {
          if ( v27 >= 1000 )
            break;
          if ( v7->cacheFixedForZone[v26] )
          {
            zones = v24->spawnGroupLoot.zones;
            v29 = 0;
            if ( zones[v27].pointCount )
            {
              do
              {
                v30 = zones[v27].points[v29];
                pointCount = v24->spawnGroupLoot.pointCount;
                if ( v30 >= pointCount )
                {
                  LODWORD(v51) = pointCount;
                  LODWORD(writeToDlog) = v30;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1621, ASSERT_TYPE_ASSERT, "(unsigned)( pointIndex ) < (unsigned)( group.pointCount )", "pointIndex doesn't index group.pointCount\n\t%i not in [0, %i)", writeToDlog, v51) )
                    __debugbreak();
                }
                v32 = (__int64)&v24->spawnGroupLoot.points[v30];
                if ( *(_WORD *)(v32 + 24) == 0xFFFD )
                  *(_WORD *)(v32 + 24) = -4;
                ++v29;
              }
              while ( v29 < zones[v27].pointCount );
              v7 = v56;
              v12 = 0;
              v25 = v53;
            }
          }
          zoneCount = v24->spawnGroupLoot.zoneCount;
          ++v25;
          ++v26;
          v53 = v25;
          ++v27;
        }
        while ( v25 < zoneCount );
        v10 = loota;
        v20 = printResultsToConsole;
        cacheCountByZone = loota->cacheCountByZone;
      }
      if ( v10->cacheBuffer )
        BG_SpawnGroup_Loot_PickAllCacheContents(v10, v7, &pHoldrand, v20);
      Sys_ProfEndNamedEvent();
      if ( v20 )
      {
        cachePointCountInGlobalZone = v10->cachePointCountInGlobalZone;
        v35 = 1000i64;
        v36 = 1;
        do
        {
          v37 = cacheCountByZone[1000];
          cachePointCountInGlobalZone += v37;
          if ( (_WORD)v37 )
          {
            ++v36;
            if ( !*cacheCountByZone )
              ++v12;
          }
          ++cacheCountByZone;
          --v35;
        }
        while ( v35 );
        v53 = v36;
        Com_Printf(131101, "[SPAWNGROUP_LOOT] Map Has %d cache points\n", cachePointCountInGlobalZone);
        v38 = counts;
        Com_Printf(131101, "[SPAWNGROUP_LOOT] Spawned %d items\n", counts->itemCount);
        v39 = loota;
        if ( cachePointCountInGlobalZone )
        {
          v40 = (float)cachePointCountInGlobalZone;
          Com_Printf(131101, "[SPAWNGROUP_LOOT] Spawned %d caches (%5.1f percent)\n", loota->itemCounts.itemCountCache, (float)((float)((float)loota->itemCounts.itemCountCache / v40) * 100.0));
          v41 = (float)v53;
          Com_Printf(131101, "[SPAWNGROUP_LOOT] Average %5.1f caches per zone\n", (float)((float)v39->itemCounts.itemCountCache / v41));
          Com_Printf(131101, "[SPAWNGROUP_LOOT] Cache Zones Empty = %d\n", v12);
        }
        BG_SpawnGroup_Loot_ReportCounts(v7, v39, v38, 0, 0, 1);
        BG_SpawnGroup_Loot_ReportZones(v7, v39);
        for ( j = 1; j < v7->setCount; ++j )
        {
          if ( (v7->sets[j].flags & 4) == 0 )
            BG_SpawnGroup_Loot_ReportCounts(v7, v39, &v39->itemCountsBySet[j], 0, j, 1);
        }
        itemCount = v38->itemCount;
        v44 = cm.mapEnts->spawnGroupLoot.zoneCount;
        v45 = cm.mapEnts->spawnGroupLoot.pointCount;
        if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
        {
          v46 = DLog_BeginEvent(&context, "dlog_event_loot_spawn_summary_total");
          context.autoEndEvent = 1;
          if ( v46 && DLog_UInt16(&context, "total_count_items", itemCount) && DLog_UInt16(&context, "total_count_points", v45) && DLog_UInt16(&context, "total_count_zones", v44) )
            DLog_RecordContext(&context);
        }
        v47 = v39->cacheBuffer;
        if ( v47 )
        {
          v48 = 1;
          if ( v47->cacheTypeCount > 1u )
          {
            do
            {
              BG_SpawnGroup_Loot_ReportCounts(v7, v39, &v39->cacheBuffer->cacheTypes[v48].contents, v48, 0, 0);
              ++v48;
            }
            while ( v48 < v39->cacheBuffer->cacheTypeCount );
          }
        }
      }
      else
      {
        v38 = counts;
      }
      LODWORD(fmt) = cm.mapEnts->spawnGroupLoot.zoneCount;
      Com_Printf(29, "[SPAWNGROUP_LOOT] Finished - total of %d items out of %d points and %d zones\n\n", v38->itemCount, cm.mapEnts->spawnGroupLoot.pointCount, fmt);
    }
  }
}

/*
==============
BG_SpawnGroup_Loot_SpawnAnItem
==============
*/
void BG_SpawnGroup_Loot_SpawnAnItem(BG_SpawnGroup_Loot_CurrentZone *const currentZone, const BG_SpawnGroup_Loot_SetReq *const req)
{
  unsigned int i; 
  __int64 v5; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1088, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( (!currentZone->loot || !currentZone->set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1089, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->set && currentZone->table && currentZone->seed") )
    __debugbreak();
  if ( !currentZone->pointCount && !currentZone->clusterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1090, ASSERT_TYPE_ASSERT, "(currentZone->pointCount > 0 || currentZone->clusterCount > 0)", (const char *)&queryFormat, "currentZone->pointCount > 0 || currentZone->clusterCount > 0") )
    __debugbreak();
  if ( !currentZone->itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1091, ASSERT_TYPE_ASSERT, "(currentZone->itemCount > 0)", (const char *)&queryFormat, "currentZone->itemCount > 0") )
    __debugbreak();
  if ( !currentZone->chanceTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1092, ASSERT_TYPE_ASSERT, "(currentZone->chanceTotal > 0)", (const char *)&queryFormat, "currentZone->chanceTotal > 0") )
    __debugbreak();
  BG_SpawnGroup_Loot_PickItem(currentZone, req);
  BG_SpawnGroup_Loot_PickItemDepends(currentZone);
  BG_SpawnGroup_Loot_PickSpawnPoints(currentZone);
  if ( currentZone->item.pointFound )
    BG_SpawnGroup_Loot_SpawnItem(currentZone, &currentZone->item);
  for ( i = 0; i < currentZone->dependCount; ++i )
  {
    v5 = i;
    if ( currentZone->depends[v5].pointFound )
      BG_SpawnGroup_Loot_SpawnItem(currentZone, &currentZone->depends[v5]);
  }
}

/*
==============
BG_SpawnGroup_Loot_SpawnCachesMatchingSet
==============
*/
void BG_SpawnGroup_Loot_SpawnCachesMatchingSet(unsigned __int8 cacheSetIndex, BG_SpawnGroup_Loot *const loot, const BG_SpawnGroup_Loot_Table *const table, unsigned int *seed, bool printResultsToConsole)
{
  const BG_SpawnGroup_Loot_Table *v6; 
  unsigned __int8 v8; 
  unsigned __int8 setCount; 
  BG_SpawnGroup_Loot_CurrentZone *m_ptr; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  const dvar_t *v13; 
  float value; 
  __int64 v15; 
  unsigned int v16; 
  SpawnGroupZone *v17; 
  unsigned int v18; 
  unsigned __int16 v19; 
  unsigned __int16 pointCount; 
  unsigned __int16 cluster; 
  int v22; 
  unsigned __int16 v23; 
  const BG_SpawnGroup_Loot_SetReq *v24; 
  unsigned __int16 v25; 
  int v26; 
  unsigned __int16 point; 
  unsigned __int16 v28; 
  unsigned __int16 v29; 
  SpawnGroupPoint *v30; 
  unsigned __int16 zone; 
  unsigned __int16 v33; 
  unsigned __int16 v34; 
  unsigned __int16 *v35; 
  __int64 v36; 
  SpawnGroupPoint *v37; 
  unsigned __int16 v38; 
  unsigned __int16 v39; 
  const SpawnGroupPoint *v40; 
  __int64 v41; 
  __int64 v42; 
  unsigned __int16 v44; 
  __int16 v45; 
  unsigned int v46; 
  const BG_SpawnGroup_Loot_Set *v47; 
  Mem_LargeLocal v49; 
  __int16 v50[1000]; 

  v6 = table;
  v8 = cacheSetIndex;
  setCount = table->setCount;
  if ( cacheSetIndex >= setCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1436, ASSERT_TYPE_ASSERT, "(unsigned)( cacheSetIndex ) < (unsigned)( table->setCount )", "cacheSetIndex doesn't index table->setCount\n\t%i not in [0, %i)", cacheSetIndex, setCount) )
    __debugbreak();
  v47 = &v6->sets[v8];
  Mem_LargeLocal::Mem_LargeLocal(&v49, 0x1E040ui64, "BG_SpawnGroup_Loot_CurrentZone currentZone");
  m_ptr = (BG_SpawnGroup_Loot_CurrentZone *)v49.m_ptr;
  v11 = 0;
  v12 = 0;
  v44 = 0;
  memset_0(v49.m_ptr, 0, 0x1E040ui64);
  m_ptr->loot = loot;
  m_ptr->table = v6;
  m_ptr->seed = seed;
  m_ptr->zoneid = -2;
  m_ptr->printResultsToConsole = printResultsToConsole;
  m_ptr->typeCount = v6->itemTypeCount;
  BG_SpawnGroup_Loot_BeginCurrentZoneForSet(m_ptr, v47);
  BG_SpawnGroup_Loot_ValidateZone(m_ptr);
  v13 = DCONST_DVARFLT_bg_spawngroup_loot_disable_cache_distance;
  if ( !DCONST_DVARFLT_bg_spawngroup_loot_disable_cache_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_spawngroup_loot_disable_cache_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  value = v13->current.value;
  v15 = (__int64)&v6->sets[v8];
  if ( v6->sets[v8].reqCount )
  {
    v16 = 0;
    v46 = 0;
    if ( cm.mapEnts->spawnGroupLoot.zoneCount )
    {
      do
      {
        if ( table->cacheSetForZone[v16] == v8 )
        {
          v17 = &cm.mapEnts->spawnGroupLoot.zones[v16];
          BG_SpawnGroup_Loot_ResetZonePoints(m_ptr);
          v18 = 0;
          if ( v17->pointCount )
          {
            do
            {
              v19 = v17->points[v18];
              pointCount = cm.mapEnts->spawnGroupLoot.pointCount;
              if ( v19 >= pointCount )
              {
                LODWORD(v42) = pointCount;
                LODWORD(v41) = v19;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( pointid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.pointCount )", "pointid doesn't index cm.mapEnts->spawnGroupLoot.pointCount\n\t%i not in [0, %i)", v41, v42) )
                  __debugbreak();
              }
              cluster = cm.mapEnts->spawnGroupLoot.points[v19].cluster;
              if ( cluster == 0xFFFC || cluster == 0xFFFD )
                BG_SpawnGroup_Loot_AddZonePoint(m_ptr, v19);
              ++v18;
            }
            while ( v18 < v17->pointCount );
            v12 = v44;
            v15 = (__int64)v47;
          }
          if ( m_ptr->pointCount )
          {
            v22 = 0;
            v23 = 0;
            v45 = 0;
            if ( *(_WORD *)(v15 + 3472) )
            {
              do
              {
                v24 = (const BG_SpawnGroup_Loot_SetReq *)(v15 + 24i64 * v23 + 3232);
                if ( (!v24->def || !v24->def->disabled) && ((unsigned __int16)(*(_WORD *)(v15 + 24i64 * v23 + 3246) - 1) > 0x62u || BG_irand(0, 100, m_ptr->seed) < *(unsigned __int16 *)(v15 + 24i64 * v23 + 3246)) )
                {
                  v25 = *(_WORD *)(v15 + 24i64 * v23 + 3250);
                  if ( v25 )
                    v26 = BG_irand(*(unsigned __int16 *)(v15 + 24i64 * v23 + 3248), v25, m_ptr->seed);
                  else
                    v26 = *(unsigned __int16 *)(v15 + 24i64 * v23 + 3248);
                  if ( v26 > 0 )
                  {
                    do
                    {
                      if ( !m_ptr->pointCount )
                        break;
                      BG_SpawnGroup_Loot_SpawnAnItem(m_ptr, v24);
                      if ( m_ptr->item.pointFound )
                      {
                        point = m_ptr->item.point;
                        v50[v12++] = point;
                        v28 = cm.mapEnts->spawnGroupLoot.pointCount;
                        if ( point >= v28 )
                        {
                          LODWORD(v42) = v28;
                          LODWORD(v41) = point;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( pointid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.pointCount )", "pointid doesn't index cm.mapEnts->spawnGroupLoot.pointCount\n\t%i not in [0, %i)", v41, v42) )
                            __debugbreak();
                        }
                        BG_SpawnGroup_Loot_TrackCacheSpawned(loot, &cm.mapEnts->spawnGroupLoot.points[point]);
                      }
                      ++v22;
                    }
                    while ( v22 < v26 );
                    v44 = v12;
                    v23 = v45;
                    v15 = (__int64)v47;
                  }
                  v22 = 0;
                }
                v45 = ++v23;
              }
              while ( v23 < *(_WORD *)(v15 + 3472) );
              v16 = v46;
            }
            v8 = cacheSetIndex;
          }
        }
        v46 = ++v16;
      }
      while ( v16 < cm.mapEnts->spawnGroupLoot.zoneCount );
      v11 = 0;
    }
    v6 = table;
  }
  if ( *(_DWORD *)(v15 + 4500) && m_ptr->itemCount && (m_ptr->typeChanceTotal || (*(_BYTE *)(v15 + 4504) & 2) == 0) )
  {
    BG_SpawnGroup_Loot_ResetZonePoints(m_ptr);
    v29 = 0;
    if ( cm.mapEnts->spawnGroupLoot.pointCount )
    {
      do
      {
        v30 = &cm.mapEnts->spawnGroupLoot.points[v29];
        if ( v30->cluster == 0xFFFC || v30->cluster == 0xFFFD )
        {
          zone = v30->zone;
          if ( zone ? v6->setForZone[zone + 999] == v8 : v6->cacheSetForZoneDefault == v8 )
          {
            ++v11;
            if ( !loot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 311, ASSERT_TYPE_ASSERT, "(loot)", (const char *)&queryFormat, "loot") )
              __debugbreak();
            v33 = v30->zone;
            if ( v33 )
              ++loot->cacheCountByZone[v33 + 999];
            else
              ++loot->cachePointCountInGlobalZone;
            if ( !BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem(loot->pointToDefBuffer, v29) )
              BG_SpawnGroup_Loot_AddZonePoint(m_ptr, v29);
          }
        }
        ++v29;
      }
      while ( v29 < cm.mapEnts->spawnGroupLoot.pointCount );
      v12 = v44;
    }
    if ( m_ptr->pointCount )
    {
      v34 = BG_SpawnGroup_Loot_ComputeIntegralPercentage(m_ptr->set->chanceLootCache, m_ptr->set->chanceLocationMax, v11);
      if ( v34 >= v12 )
      {
        if ( value > 0.0 && v12 )
        {
          v35 = (unsigned __int16 *)v50;
          v36 = v12;
          do
          {
            v37 = BG_SpawnGroup_Loot_GetPoint(*v35);
            BG_SpawnGroup_Loot_DisableAllPointsWithinRadius2(m_ptr, v37, value);
            ++v35;
            --v36;
          }
          while ( v36 );
        }
        while ( v12 < v34 )
        {
          if ( !m_ptr->pointCount )
            break;
          BG_SpawnGroup_Loot_SpawnAnItem(m_ptr, NULL);
          if ( m_ptr->item.pointFound )
            goto LABEL_75;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1584, ASSERT_TYPE_ASSERT, "(currentZone.item.pointFound)", (const char *)&queryFormat, "currentZone.item.pointFound") )
            __debugbreak();
          if ( m_ptr->item.pointFound )
          {
LABEL_75:
            v38 = m_ptr->item.point;
            v39 = cm.mapEnts->spawnGroupLoot.pointCount;
            if ( v38 >= v39 )
            {
              LODWORD(v42) = v39;
              LODWORD(v41) = v38;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( pointid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.pointCount )", "pointid doesn't index cm.mapEnts->spawnGroupLoot.pointCount\n\t%i not in [0, %i)", v41, v42) )
                __debugbreak();
            }
            v40 = &cm.mapEnts->spawnGroupLoot.points[v38];
            BG_SpawnGroup_Loot_TrackCacheSpawned(loot, v40);
            ++v12;
            if ( value > 0.0 )
              BG_SpawnGroup_Loot_DisableAllPointsWithinRadius2(m_ptr, v40, value);
          }
        }
      }
    }
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v49);
}

/*
==============
BG_SpawnGroup_Loot_SpawnItem
==============
*/
void BG_SpawnGroup_Loot_SpawnItem(BG_SpawnGroup_Loot_CurrentZone *const currentZone, const BG_SpawnGroup_Loot_CurrentZoneItem *const item)
{
  unsigned __int8 type; 
  unsigned __int8 index; 
  unsigned __int8 setCount; 
  unsigned __int8 ItemDefIndex; 
  unsigned __int8 itemDefCount; 
  unsigned int zoneid; 
  BG_SpawnGroup_Loot *loot; 
  BG_SpawnGroup_Loot_PointMap *pointToDefBuffer; 
  unsigned __int16 point; 
  unsigned __int16 pointCount; 
  unsigned __int16 i; 
  const BG_SpawnGroup_Loot_Set *set; 
  const BG_SpawnGroup_Loot_SetReq *v16; 
  int j; 
  BG_SpawnGroup_Loot_SetItem *SetItem; 
  __int64 v19; 
  __int64 v20; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 383, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( (!currentZone->loot || !currentZone->loot->pointToDefBuffer || !currentZone->set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 384, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->loot->pointToDefBuffer && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->loot->pointToDefBuffer && currentZone->set && currentZone->table && currentZone->seed") )
    __debugbreak();
  if ( !item->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 385, ASSERT_TYPE_ASSERT, "(item->def)", (const char *)&queryFormat, "item->def") )
    __debugbreak();
  if ( !item->pointFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 386, ASSERT_TYPE_ASSERT, "(item->pointFound)", (const char *)&queryFormat, "item->pointFound") )
    __debugbreak();
  if ( BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem(currentZone->loot->pointToDefBuffer, item->point) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 387, ASSERT_TYPE_ASSERT, "(!BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem( currentZone->loot->pointToDefBuffer, item->point ))", (const char *)&queryFormat, "!BG_SpawnGroup_Loot_GetPointHasCurrentlySpawnedItem( currentZone->loot->pointToDefBuffer, item->point )") )
    __debugbreak();
  type = item->def->type;
  if ( type >= 0x32u )
  {
    LODWORD(v19) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( item->def->type ) < (unsigned)( 50 )", "item->def->type doesn't index SPAWNGROUP_LOOT_MAX_TYPES\n\t%i not in [0, %i)", v19, 50) )
      __debugbreak();
  }
  index = currentZone->set->index;
  setCount = currentZone->table->setCount;
  if ( index >= setCount )
  {
    LODWORD(v20) = setCount;
    LODWORD(v19) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 389, ASSERT_TYPE_ASSERT, "(unsigned)( currentZone->set->index ) < (unsigned)( currentZone->table->setCount )", "currentZone->set->index doesn't index currentZone->table->setCount\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  ItemDefIndex = BG_SpawnGroup_Loot_GetItemDefIndex(currentZone->table, item->def);
  itemDefCount = currentZone->table->itemDefCount;
  if ( ItemDefIndex >= itemDefCount )
  {
    LODWORD(v20) = itemDefCount;
    LODWORD(v19) = ItemDefIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( itemDefIndex ) < (unsigned)( currentZone->table->itemDefCount )", "itemDefIndex doesn't index currentZone->table->itemDefCount\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  if ( ItemDefIndex >= 0xC8u )
  {
    LODWORD(v20) = 200;
    LODWORD(v19) = ItemDefIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 408, ASSERT_TYPE_ASSERT, "(unsigned)( itemDefIndex ) < (unsigned)( 200 )", "itemDefIndex doesn't index SPAWNGROUP_LOOT_MAX_ITEM_DEFS\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  if ( currentZone->zoneid != -2 )
  {
    BG_SpawnGroup_Loot_TrackItemCounts(&currentZone->loot->itemCounts, ItemDefIndex, item->def);
    BG_SpawnGroup_Loot_TrackItemCounts(&currentZone->loot->itemCountsBySet[currentZone->set->index], ItemDefIndex, item->def);
    zoneid = currentZone->zoneid;
    if ( zoneid == -1 )
    {
      ++currentZone->loot->itemCountInGlobalZone;
    }
    else if ( zoneid != -2 )
    {
      if ( zoneid >= 0x3E8 )
      {
        LODWORD(v20) = 1000;
        LODWORD(v19) = currentZone->zoneid;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 420, ASSERT_TYPE_ASSERT, "(unsigned)( currentZone->zoneid ) < (unsigned)( 1000 )", "currentZone->zoneid doesn't index SPAWNGROUP_LOOT_MAX_ZONES\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      ++currentZone->loot->itemCountByZone[currentZone->zoneid];
    }
  }
  loot = currentZone->loot;
  if ( currentZone->loot->cacheBuffer && loot->itemCounts.itemCount > 0x4E20u )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE40C0, 6597i64);
  }
  else
  {
    pointToDefBuffer = loot->pointToDefBuffer;
    point = item->point;
    if ( !loot->pointToDefBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 352, ASSERT_TYPE_ASSERT, "(pointToDefBuffer)", (const char *)&queryFormat, "pointToDefBuffer") )
      __debugbreak();
    pointCount = cm.mapEnts->spawnGroupLoot.pointCount;
    if ( point >= pointCount )
    {
      LODWORD(v20) = pointCount;
      LODWORD(v19) = point;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 353, ASSERT_TYPE_ASSERT, "(unsigned)( pointid ) < (unsigned)( cm.mapEnts->spawnGroupLoot.pointCount )", "pointid doesn't index cm.mapEnts->spawnGroupLoot.pointCount\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    pointToDefBuffer->points[point] = ItemDefIndex;
    if ( currentZone->zoneid != -2 )
    {
      for ( i = 0; i < currentZone->set->reqCount; ++i )
      {
        if ( i >= 0xAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 440, ASSERT_TYPE_ASSERT, "(reqIndex < 10)", (const char *)&queryFormat, "reqIndex < SPAWNGROUP_LOOT_MAX_SET_REQS") )
          __debugbreak();
        set = currentZone->set;
        v16 = &set->reqs[i];
        if ( set->reqs[i].max )
        {
          if ( BG_SpawnGroup_Loot_ReqMatchesDef(&set->reqs[i], item->def) && ++currentZone->reqCounts[i] >= v16->max )
          {
            for ( j = currentZone->itemCount - 1; j >= 0; --j )
            {
              SetItem = BG_SpawnGroup_Loot_GetSetItem(currentZone, j);
              if ( BG_SpawnGroup_Loot_ReqMatchesDef(v16, SetItem->def) )
                BG_SpawnGroup_Loot_RemoveZoneItem(currentZone, SetItem, j);
            }
          }
        }
      }
    }
  }
}

/*
==============
BG_SpawnGroup_Loot_SpawnZone
==============
*/
void BG_SpawnGroup_Loot_SpawnZone(BG_SpawnGroup_Loot *const loot, const BG_SpawnGroup_Loot_Table *const table, int zoneid, unsigned int *seed, bool printResultsToConsole)
{
  __int64 v6; 
  unsigned __int8 setForZoneDefault; 
  BG_SpawnGroup_Loot_Set *Set; 
  BG_SpawnGroup_Loot_CurrentZone *m_ptr; 
  int v12; 
  unsigned __int16 i; 
  SpawnGroupZone *v14; 
  unsigned __int16 j; 
  unsigned __int16 v16; 
  unsigned __int16 clusterCount; 
  Mem_LargeLocal v18; 

  v6 = zoneid;
  if ( (!loot || !table || !seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1634, ASSERT_TYPE_ASSERT, "(loot && table && seed)", (const char *)&queryFormat, "loot && table && seed") )
    __debugbreak();
  if ( (_DWORD)v6 == -1 )
    goto LABEL_11;
  if ( (unsigned int)v6 > 0x3E7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1635, ASSERT_TYPE_ASSERT, "(zoneid == -1 || ( zoneid >= 0 && zoneid < 1000 ))", (const char *)&queryFormat, "zoneid == SPAWNGROUP_LOOT_ZONE_GLOBAL || ( zoneid >= 0 && zoneid < SPAWNGROUP_LOOT_MAX_ZONES )") )
    __debugbreak();
  setForZoneDefault = table->setForZone[v6];
  if ( !setForZoneDefault )
LABEL_11:
    setForZoneDefault = table->setForZoneDefault;
  Set = BG_SpawnGroup_Loot_GetSet(table, setForZoneDefault);
  Mem_LargeLocal::Mem_LargeLocal(&v18, 0x1E040ui64, "BG_SpawnGroup_Loot_CurrentZone currentZone");
  m_ptr = (BG_SpawnGroup_Loot_CurrentZone *)v18.m_ptr;
  memset_0(v18.m_ptr, 0, 0x1E040ui64);
  m_ptr->loot = loot;
  m_ptr->table = table;
  m_ptr->seed = seed;
  m_ptr->zoneid = v6;
  m_ptr->printResultsToConsole = printResultsToConsole;
  m_ptr->typeCount = table->itemTypeCount;
  BG_SpawnGroup_Loot_BeginCurrentZoneForSet(m_ptr, Set);
  v12 = m_ptr->zoneid;
  if ( v12 == -1 )
  {
    for ( i = 0; i < cm.mapEnts->spawnGroupLoot.clusterCount; ++i )
    {
      if ( i >= 0x3A98u )
        break;
      if ( !BG_SpawnGroup_Loot_GetCluster(i)->zone )
        BG_SpawnGroup_Loot_AddZoneCluster(m_ptr, i);
    }
  }
  else
  {
    if ( (v12 < 0 || v12 >= cm.mapEnts->spawnGroupLoot.zoneCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1339, ASSERT_TYPE_ASSERT, "(currentZone->zoneid >= 0 && currentZone->zoneid < cm.mapEnts->spawnGroupLoot.zoneCount)", (const char *)&queryFormat, "currentZone->zoneid >= 0 && currentZone->zoneid < cm.mapEnts->spawnGroupLoot.zoneCount") )
      __debugbreak();
    v14 = &cm.mapEnts->spawnGroupLoot.zones[m_ptr->zoneid];
    for ( j = 0; j < v14->clusterCount; BG_SpawnGroup_Loot_AddZoneCluster(m_ptr, v14->clusters[j++]) )
    {
      if ( m_ptr->clusterCount >= 0x3A98u )
        break;
    }
  }
  BG_SpawnGroup_Loot_AddZoneStandalonePoints(m_ptr, 0xFFFFu);
  BG_SpawnGroup_Loot_RandomizeUshortArray(m_ptr->points, &m_ptr->pointCount, m_ptr->set->chancePoint, m_ptr->set->chanceLocationMax, m_ptr->seed);
  BG_SpawnGroup_Loot_RandomizeUshortArray(m_ptr->clusters, &m_ptr->clusterCount, m_ptr->set->chanceCluster, m_ptr->set->chanceLocationMax, m_ptr->seed);
  if ( m_ptr->pointCount || m_ptr->clusterCount )
  {
    v16 = BG_SpawnGroup_Loot_ComputeIntegralPercentage(m_ptr->set->chanceClusterSolo, m_ptr->set->chanceLocationMax, m_ptr->clusterCount);
    m_ptr->clusterSoloCount = v16;
    clusterCount = m_ptr->clusterCount;
    if ( v16 > clusterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1653, ASSERT_TYPE_ASSERT, "( currentZone.clusterSoloCount ) <= ( currentZone.clusterCount )", "%s <= %s\n\t%i, %i", "currentZone.clusterSoloCount", "currentZone.clusterCount", v16, clusterCount) )
      __debugbreak();
    BG_SpawnGroup_Loot_SpawnZoneItems(m_ptr);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v18);
}

/*
==============
BG_SpawnGroup_Loot_SpawnZoneItems
==============
*/
void BG_SpawnGroup_Loot_SpawnZoneItems(BG_SpawnGroup_Loot_CurrentZone *const currentZone)
{
  const BG_SpawnGroup_Loot_Set *set; 
  unsigned __int16 i; 
  const BG_SpawnGroup_Loot_SetReq *v4; 
  __int16 v5; 
  __int64 v6; 
  __int64 zoneid; 
  __int64 v8; 
  char *fmt; 
  __int64 v10; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1157, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( (!currentZone->loot || !currentZone->set || !currentZone->table || !currentZone->seed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1158, ASSERT_TYPE_ASSERT, "(currentZone->loot && currentZone->set && currentZone->table && currentZone->seed)", (const char *)&queryFormat, "currentZone->loot && currentZone->set && currentZone->table && currentZone->seed") )
    __debugbreak();
  if ( !currentZone->pointCount && !currentZone->clusterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1159, ASSERT_TYPE_ASSERT, "(currentZone->pointCount > 0 || currentZone->clusterCount > 0)", (const char *)&queryFormat, "currentZone->pointCount > 0 || currentZone->clusterCount > 0") )
    __debugbreak();
  if ( !currentZone->chanceTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1160, ASSERT_TYPE_ASSERT, "(currentZone->chanceTotal > 0)", (const char *)&queryFormat, "currentZone->chanceTotal > 0") )
    __debugbreak();
  if ( !currentZone->itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1161, ASSERT_TYPE_ASSERT, "(currentZone->itemCount > 0)", (const char *)&queryFormat, "currentZone->itemCount > 0") )
    __debugbreak();
  BG_SpawnGroup_Loot_ValidateZone(currentZone);
  set = currentZone->set;
  for ( i = 0; i < set->reqCount; ++i )
  {
    if ( !currentZone->itemCount )
      break;
    if ( !currentZone->typeChanceTotal )
    {
      zoneid = currentZone->zoneid;
      LODWORD(v10) = currentZone->loot->itemCountByZone[zoneid];
      LODWORD(fmt) = currentZone->pointCount;
      Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Zone[%3d] Depleted all loot types: %d clusters/%d points remaining after spawning %d items.\n", zoneid, currentZone->clusterCount, fmt, v10);
      break;
    }
    if ( !currentZone->clusterCount && !currentZone->pointCount )
      break;
    v4 = &set->reqs[i];
    if ( (!v4->def || !v4->def->disabled) && ((unsigned __int16)(set->reqs[i].chance - 1) > 0x62u || BG_irand(0, 100, currentZone->seed) < set->reqs[i].chance) )
    {
      v5 = 0;
      if ( v4->min )
      {
        while ( currentZone->itemCount )
        {
          if ( !currentZone->typeChanceTotal )
          {
            v6 = currentZone->zoneid;
            LODWORD(v10) = currentZone->loot->itemCountByZone[v6];
            LODWORD(fmt) = currentZone->pointCount;
            Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Zone[%3d] Depleted all loot types: %d clusters/%d points remaining after spawning %d items.\n", v6, currentZone->clusterCount, fmt, v10);
            break;
          }
          if ( currentZone->clusterCount || currentZone->pointCount )
          {
            BG_SpawnGroup_Loot_SpawnAnItem(currentZone, v4);
            if ( (unsigned __int16)++v5 < v4->min )
              continue;
          }
          break;
        }
      }
    }
    set = currentZone->set;
  }
  while ( currentZone->itemCount )
  {
    if ( !currentZone->typeChanceTotal )
    {
      v8 = currentZone->zoneid;
      LODWORD(v10) = currentZone->loot->itemCountByZone[v8];
      LODWORD(fmt) = currentZone->pointCount;
      Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Zone[%3d] Depleted all loot types: %d clusters/%d points remaining after spawning %d items.\n", v8, currentZone->clusterCount, fmt, v10);
      return;
    }
    if ( !currentZone->clusterCount && !currentZone->pointCount )
      return;
    BG_SpawnGroup_Loot_SpawnAnItem(currentZone, NULL);
  }
}

/*
==============
BG_SpawnGroup_Loot_TrackCacheSpawned
==============
*/
void BG_SpawnGroup_Loot_TrackCacheSpawned(BG_SpawnGroup_Loot *const loot, const SpawnGroupPoint *const point)
{
  unsigned __int16 zone; 

  if ( !loot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 293, ASSERT_TYPE_ASSERT, "(loot)", (const char *)&queryFormat, "loot") )
    __debugbreak();
  if ( !point && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 294, ASSERT_TYPE_ASSERT, "(point)", (const char *)&queryFormat, "point") )
    __debugbreak();
  ++loot->itemCounts.itemCountCache;
  ++loot->itemCounts.itemCount;
  zone = point->zone;
  if ( zone )
    ++loot->itemCountByZone[zone + 999];
  else
    ++loot->cacheCountInGlobalZone;
}

/*
==============
BG_SpawnGroup_Loot_TrackItemCounts
==============
*/
void BG_SpawnGroup_Loot_TrackItemCounts(BG_SpawnGroup_Loot_Counts *counts, unsigned __int8 itemDefIndex, const BG_SpawnGroup_Loot_ItemDef *const def)
{
  if ( itemDefIndex >= 0xC8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 281, ASSERT_TYPE_ASSERT, "(unsigned)( itemDefIndex ) < (unsigned)( 200 )", "itemDefIndex doesn't index SPAWNGROUP_LOOT_MAX_ITEM_DEFS\n\t%i not in [0, %i)", itemDefIndex, 200) )
    __debugbreak();
  if ( !itemDefIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 282, ASSERT_TYPE_ASSERT, "(itemDefIndex != 0)", (const char *)&queryFormat, "itemDefIndex != SPAWNGROUP_LOOT_ITEM_DEF_NONE") )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 283, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  ++counts->itemCount;
  ++counts->itemCountByDef[itemDefIndex];
  ++counts->itemCountByType[def->type];
  ++counts->itemCountByRarity[def->rarity];
}

/*
==============
BG_SpawnGroup_Loot_UshortArrayRemove
==============
*/
void BG_SpawnGroup_Loot_UshortArrayRemove(unsigned __int16 *const valueArray, unsigned __int16 *valueArrayCount, unsigned __int16 index)
{
  __int64 v6; 

  if ( !valueArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 177, ASSERT_TYPE_ASSERT, "(valueArray)", (const char *)&queryFormat, "valueArray") )
    __debugbreak();
  if ( !*valueArrayCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 178, ASSERT_TYPE_ASSERT, "(valueArrayCount > 0)", (const char *)&queryFormat, "valueArrayCount > 0") )
    __debugbreak();
  if ( index >= *valueArrayCount )
  {
    LODWORD(v6) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 179, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( valueArrayCount )", "index doesn't index valueArrayCount\n\t%i not in [0, %i)", v6, *valueArrayCount) )
      __debugbreak();
  }
  valueArray[index] = valueArray[--*valueArrayCount];
  valueArray[*valueArrayCount] = 0;
}

/*
==============
BG_SpawnGroup_Loot_ValidateNodes
==============
*/
void BG_SpawnGroup_Loot_ValidateNodes()
{
  __int128 v0; 
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  MapEnts *mapEnts; 
  int v5; 
  int v6; 
  _BYTE *v7; 
  __int64 v8; 
  SpawnGroupPoint *v9; 
  float v10; 
  float v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  char *v14; 
  char *v15; 
  unsigned __int16 cluster; 
  char *v17; 
  char *v18; 
  const char *v19; 
  __int64 pointCount; 
  __int64 v21; 
  __int64 v22; 
  SpawnGroupPoint *points; 
  __int64 v24; 
  __int64 v25; 
  SpawnGroupPoint *v26; 
  unsigned __int16 v27; 
  float v28; 
  unsigned __int16 v29; 
  float v30; 
  float v31; 
  char *v32; 
  __int64 v33; 
  SpawnGroupCluster *clusters; 
  const char *v35; 
  const char *v36; 
  vec3_t start; 
  vec3_t end; 
  Bounds bounds; 
  trace_t results; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 

  v44 = v0;
  v43 = v1;
  v42 = v2;
  Com_Printf(29, "BG_SpawnGroup_Loot_ValidateNodes\n");
  Com_Printf(29, "==============================================================\n");
  mapEnts = cm.mapEnts;
  v5 = 0;
  v6 = 0;
  if ( cm.mapEnts->spawnGroupLoot.pointCount )
  {
    v41 = v3;
    v7 = s_lootNodeErrorsPerPoint;
    v8 = 0i64;
    do
    {
      v9 = &mapEnts->spawnGroupLoot.points[v8];
      v10 = v9->origin.v[2];
      v11 = v9->origin.v[1];
      v12 = v9->cluster + 5;
      end.v[0] = v9->origin.v[0];
      end.v[1] = v11;
      end.v[2] = v10 - 32.0;
      start.v[0] = end.v[0];
      start.v[1] = v11;
      start.v[2] = v10;
      if ( v12 <= 2u )
        start.v[2] = v10 + 13.0;
      bounds.halfSize.v[1] = FLOAT_8_0;
      bounds.halfSize.v[2] = FLOAT_8_0;
      *(_OWORD *)bounds.midPoint.v = _xmm;
      PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &bounds, 2047, 1, 131089, 0, NULL, All);
      if ( results.startsolid || results.allsolid )
      {
        cluster = v9->cluster;
        *v7 = 1;
        if ( (unsigned __int16)(cluster + 4) > 1u )
        {
          v18 = vtos(&v9->origin);
          v19 = "[SPAWNGROUP_LOOT] ERROR: Quest node %s at %s.\n";
          if ( cluster != 0xFFFB )
            v19 = "[SPAWNGROUP_LOOT] ERROR: Loot  node %s at %s.\n";
          Com_PrintError(29, v19, lootNodeErrorStrTable[1], v18);
        }
        else
        {
          v17 = vtos(&v9->origin);
          Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Cache node %s at %s.\n", lootNodeErrorStrTable[1], v17);
        }
      }
      else if ( results.fraction == 1.0 )
      {
        v13 = v9->cluster;
        *v7 = 2;
        if ( (unsigned __int16)(v13 + 4) > 1u )
        {
          v15 = vtos(&v9->origin);
          if ( v13 == 0xFFFB )
            Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Quest node %s at %s.\n", lootNodeErrorStrTable[2], v15);
          else
            Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Loot  node %s at %s.\n", lootNodeErrorStrTable[2], v15);
        }
        else
        {
          v14 = vtos(&v9->origin);
          Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Cache node %s at %s.\n", lootNodeErrorStrTable[2], v14);
        }
      }
      else
      {
        *v7 = 0;
      }
      mapEnts = cm.mapEnts;
      ++v6;
      ++v8;
      ++v7;
    }
    while ( v6 < cm.mapEnts->spawnGroupLoot.pointCount );
  }
  pointCount = mapEnts->spawnGroupLoot.pointCount;
  if ( mapEnts->spawnGroupLoot.pointCount )
  {
    v21 = 0i64;
    v22 = 0i64;
    do
    {
      points = mapEnts->spawnGroupLoot.points;
      if ( points[v22].cluster != 0xFFFB )
      {
        v24 = 0i64;
        v25 = 0i64;
        do
        {
          if ( v24 != v21 )
          {
            v26 = &mapEnts->spawnGroupLoot.points[v25];
            v27 = v26->cluster;
            if ( v27 != 0xFFFB )
            {
              v29 = points[v22].cluster;
              v31 = FLOAT_2025_0;
              if ( (unsigned __int16)(v29 + 4) > 1u || (unsigned __int16)(v27 + 4) > 1u )
              {
                if ( v29 == 0xFFFC || v29 == 0xFFFD || (unsigned __int16)(v27 + 4) <= 1u )
                  v31 = FLOAT_256_0;
              }
              else
              {
                v31 = FLOAT_4900_0;
              }
              v28 = points[v22].origin.v[1] - v26->origin.v[1];
              v30 = points[v22].origin.v[2] - v26->origin.v[2];
              if ( (float)((float)((float)(v28 * v28) + (float)((float)(points[v22].origin.v[0] - v26->origin.v[0]) * (float)(points[v22].origin.v[0] - v26->origin.v[0]))) + (float)(v30 * v30)) < v31 )
              {
                if ( !s_lootNodeErrorsPerPoint[v24] )
                  s_lootNodeErrorsPerPoint[v24] = 3;
                v32 = vtos(&v26->origin);
                if ( (unsigned __int16)(v27 + 4) > 1u )
                  Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Loot  node %s at %s.\n", lootNodeErrorStrTable[3], v32);
                else
                  Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Cache node %s at %s.\n", lootNodeErrorStrTable[3], v32);
                mapEnts = cm.mapEnts;
              }
            }
          }
          ++v24;
          ++v25;
        }
        while ( v24 < pointCount );
        v5 = 0;
      }
      ++v21;
      ++v22;
    }
    while ( v21 < pointCount );
  }
  if ( mapEnts->spawnGroupLoot.clusterCount )
  {
    v33 = 0i64;
    do
    {
      clusters = mapEnts->spawnGroupLoot.clusters;
      if ( !clusters[v33].pointCount )
      {
        v35 = lootClusterErrorStrTable[1];
        v36 = vtos(&clusters[v33].bounds.midPoint);
        Com_PrintError(29, "[SPAWNGROUP_LOOT] ERROR: Loot cluster centered at %s %s.\n", v36, v35);
        mapEnts = cm.mapEnts;
      }
      ++v5;
      ++v33;
    }
    while ( v5 < mapEnts->spawnGroupLoot.clusterCount );
  }
}

/*
==============
BG_SpawnGroup_Loot_ValidateZone
==============
*/
void BG_SpawnGroup_Loot_ValidateZone(BG_SpawnGroup_Loot_CurrentZone *const currentZone)
{
  unsigned __int16 i; 
  unsigned int v3; 

  if ( !currentZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1139, ASSERT_TYPE_ASSERT, "(currentZone)", (const char *)&queryFormat, "currentZone") )
    __debugbreak();
  if ( !currentZone->set && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1140, ASSERT_TYPE_ASSERT, "(currentZone->set)", (const char *)&queryFormat, "currentZone->set") )
    __debugbreak();
  if ( !currentZone->table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot.cpp", 1141, ASSERT_TYPE_ASSERT, "(currentZone->table)", (const char *)&queryFormat, "currentZone->table") )
    __debugbreak();
  for ( i = 0; i < currentZone->typeCount; ++i )
  {
    v3 = currentZone->typeChances[i];
    if ( v3 )
    {
      if ( !currentZone->chanceTotalPerType[i] )
      {
        currentZone->typeChanceTotal -= v3;
        currentZone->typeChances[i] = 0;
      }
    }
  }
}

