/*
==============
WorldCollision_IsTileSetup
==============
*/

bool __fastcall WorldCollision_IsTileSetup(const unsigned int collisionTileIdx)
{
  return ?WorldCollision_IsTileSetup@@YA_NI@Z(collisionTileIdx);
}

/*
==============
WorldCollision_RemoveClipMap
==============
*/

void __fastcall WorldCollision_RemoveClipMap(const clipMap_t *clipMap)
{
  ?WorldCollision_RemoveClipMap@@YAXPEBUclipMap_t@@@Z(clipMap);
}

/*
==============
WorldCollision_Shutdown
==============
*/

void WorldCollision_Shutdown(void)
{
  ?WorldCollision_Shutdown@@YAXXZ();
}

/*
==============
WorldCollision_MoveMapEnts
==============
*/

void __fastcall WorldCollision_MoveMapEnts(MapEnts *from, MapEnts *to)
{
  ?WorldCollision_MoveMapEnts@@YAXPEAUMapEnts@@0@Z(from, to);
}

/*
==============
WorldCollision_CheckTransientBudgets
==============
*/

void __fastcall WorldCollision_CheckTransientBudgets(const LocalClientNum_t localClientNum)
{
  ?WorldCollision_CheckTransientBudgets@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
WorldCollision_GetMapEntsShape
==============
*/

hknpShape *__fastcall WorldCollision_GetMapEntsShape(unsigned int index)
{
  return ?WorldCollision_GetMapEntsShape@@YAPEAVhknpShape@@I@Z(index);
}

/*
==============
WorldCollision_AddClipMap
==============
*/

void __fastcall WorldCollision_AddClipMap(clipMap_t *clipMap)
{
  ?WorldCollision_AddClipMap@@YAXPEAUclipMap_t@@@Z(clipMap);
}

/*
==============
WorldCollision_Init
==============
*/

void WorldCollision_Init(void)
{
  ?WorldCollision_Init@@YAXXZ();
}

/*
==============
WorldCollision_MovingCollisionTile
==============
*/

void __fastcall WorldCollision_MovingCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ?WorldCollision_MovingCollisionTile@@YAXPEBUCollisionTile@@0@Z(from, to);
}

/*
==============
WorldCollision_RemoveMapEnts
==============
*/

void __fastcall WorldCollision_RemoveMapEnts(MapEnts *mapEnts)
{
  ?WorldCollision_RemoveMapEnts@@YAXPEAUMapEnts@@@Z(mapEnts);
}

/*
==============
WorldCollision_MovedCollisionTile
==============
*/

void __fastcall WorldCollision_MovedCollisionTile(const CollisionTile *from, CollisionTile *to)
{
  ?WorldCollision_MovedCollisionTile@@YAXPEBUCollisionTile@@PEAU1@@Z(from, to);
}

/*
==============
WorldCollision_GetMapEntsShapeContents
==============
*/

int __fastcall WorldCollision_GetMapEntsShapeContents(unsigned int index)
{
  return ?WorldCollision_GetMapEntsShapeContents@@YAHI@Z(index);
}

/*
==============
WorldCollision_GetNumTilesToExpect
==============
*/

unsigned int __fastcall WorldCollision_GetNumTilesToExpect()
{
  return ?WorldCollision_GetNumTilesToExpect@@YAIXZ();
}

/*
==============
WorldCollision_GetShapeForLoad
==============
*/

const hknpShape *__fastcall WorldCollision_GetShapeForLoad(const Physics_WorldId worldId, const unsigned int instanceId)
{
  return ?WorldCollision_GetShapeForLoad@@YAPEBVhknpShape@@W4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
WorldCollision_HasCollision
==============
*/

bool __fastcall WorldCollision_HasCollision()
{
  return ?WorldCollision_HasCollision@@YA_NXZ();
}

/*
==============
WorldCollision_InstantiateCollision
==============
*/

void __fastcall WorldCollision_InstantiateCollision(const Physics_WorldId worldId)
{
  ?WorldCollision_InstantiateCollision@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
WorldCollision_RequestSetupTile
==============
*/

void __fastcall WorldCollision_RequestSetupTile(const unsigned int collisionTileIdx)
{
  ?WorldCollision_RequestSetupTile@@YAXI@Z(collisionTileIdx);
}

/*
==============
WorldCollision_IsCollisionReadyAt
==============
*/

bool __fastcall WorldCollision_IsCollisionReadyAt(const Physics_WorldId worldId, const vec2_t *position, __int16 *gridIdx)
{
  return ?WorldCollision_IsCollisionReadyAt@@YA_NW4Physics_WorldId@@AEBTvec2_t@@QEAF@Z(worldId, position, gridIdx);
}

/*
==============
WorldCollision_HasClipmapCollision
==============
*/

bool __fastcall WorldCollision_HasClipmapCollision(const Physics_WorldId worldId)
{
  return ?WorldCollision_HasClipmapCollision@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
WorldCollision_HasCollisionTileCollision
==============
*/

bool __fastcall WorldCollision_HasCollisionTileCollision(const Physics_WorldId worldId, const unsigned int tileIndexX, const unsigned int tileIndexY)
{
  return ?WorldCollision_HasCollisionTileCollision@@YA_NW4Physics_WorldId@@II@Z(worldId, tileIndexX, tileIndexY);
}

/*
==============
WorldCollision_Load
==============
*/

void __fastcall WorldCollision_Load(SaveGame *save)
{
  ?WorldCollision_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
WorldCollision_SetNumTilesToExpect
==============
*/

void __fastcall WorldCollision_SetNumTilesToExpect(unsigned int numTiles)
{
  ?WorldCollision_SetNumTilesToExpect@@YAXI@Z(numTiles);
}

/*
==============
WorldCollision_AddMapEnts
==============
*/

void __fastcall WorldCollision_AddMapEnts(MapEnts *mapEnts)
{
  ?WorldCollision_AddMapEnts@@YAXPEAUMapEnts@@@Z(mapEnts);
}

/*
==============
WorldCollision_CopyCollisionTile
==============
*/

void __fastcall WorldCollision_CopyCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ?WorldCollision_CopyCollisionTile@@YAXPEBUCollisionTile@@0@Z(from, to);
}

/*
==============
WorldCollision_ShutdownCollision
==============
*/

void __fastcall WorldCollision_ShutdownCollision(const Physics_WorldId worldId)
{
  ?WorldCollision_ShutdownCollision@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
WorldCollision_SwapMapEnts
==============
*/

void __fastcall WorldCollision_SwapMapEnts(MapEnts *from, MapEnts *to)
{
  ?WorldCollision_SwapMapEnts@@YAXPEAUMapEnts@@0@Z(from, to);
}

/*
==============
WorldCollision_ForceSyncSetupRequests
==============
*/

void WorldCollision_ForceSyncSetupRequests(void)
{
  ?WorldCollision_ForceSyncSetupRequests@@YAXXZ();
}

/*
==============
WorldCollision_Write
==============
*/

void __fastcall WorldCollision_Write(MemoryFile *memFile)
{
  ?WorldCollision_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
WorldCollision_GetMapEntsShapeCount
==============
*/

int __fastcall WorldCollision_GetMapEntsShapeCount()
{
  return ?WorldCollision_GetMapEntsShapeCount@@YAHXZ();
}

/*
==============
WorldCollision_SwapCollisionTile
==============
*/

void __fastcall WorldCollision_SwapCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ?WorldCollision_SwapCollisionTile@@YAXPEBUCollisionTile@@0@Z(from, to);
}

/*
==============
WorldCollision_SetupTileCollision
==============
*/

void __fastcall WorldCollision_SetupTileCollision(const Physics_WorldId worldId)
{
  ?WorldCollision_SetupTileCollision@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
WorldCollision_RequestShutdownTile
==============
*/

void __fastcall WorldCollision_RequestShutdownTile(const unsigned int collisionTileIdx)
{
  ?WorldCollision_RequestShutdownTile@@YAXI@Z(collisionTileIdx);
}

/*
==============
WorldCollision_AddCollisionTile
==============
*/

void __fastcall WorldCollision_AddCollisionTile(CollisionTile *collisionTile)
{
  ?WorldCollision_AddCollisionTile@@YAXPEAUCollisionTile@@@Z(collisionTile);
}

/*
==============
WorldCollision_HasCollisionForWorld
==============
*/

bool __fastcall WorldCollision_HasCollisionForWorld(const Physics_WorldId worldId)
{
  return ?WorldCollision_HasCollisionForWorld@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
WorldCollision_GetMapEntsShapeName
==============
*/

const char *__fastcall WorldCollision_GetMapEntsShapeName(unsigned int index)
{
  return ?WorldCollision_GetMapEntsShapeName@@YAPEBDI@Z(index);
}

/*
==============
WorldCollision_RemoveCollisionTile
==============
*/

void __fastcall WorldCollision_RemoveCollisionTile(const CollisionTile *collisionTile)
{
  ?WorldCollision_RemoveCollisionTile@@YAXPEBUCollisionTile@@@Z(collisionTile);
}

/*
==============
WorldCollision_ActivateMapEnts
==============
*/
void WorldCollision_ActivateMapEnts(MapEnts *mapEnts)
{
  __int64 v1; 
  MapEnts *v2; 
  HavokPhysicsShapeList *v3; 

  v1 = 0i64;
  if ( g_worldCollision_MapEnts[0] != mapEnts )
    v1 = 1i64;
  v2 = (MapEnts *)g_worldCollision_MapEnts[v1];
  if ( v2 != mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 534, ASSERT_TYPE_ASSERT, "( g_worldCollision_MapEnts[whichAsset] ) == ( mapEnts )", "%s == %s\n\t%p, %p", "g_worldCollision_MapEnts[whichAsset]", "mapEnts", v2, mapEnts) )
    __debugbreak();
  v3 = s_worldCollision_MapEntsShapeLists[v1];
  if ( v3 )
  {
    Physics_SetMainShapeList(v3);
    g_worldCollision_MapEntsShapeList = v3;
  }
}

/*
==============
WorldCollision_AddClipMap
==============
*/
void WorldCollision_AddClipMap(clipMap_t *clipMap)
{
  HavokPhysicsShapeList *v2; 
  __int64 v3; 

  if ( !clipMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 485, ASSERT_TYPE_ASSERT, "( clipMap ) != ( nullptr )", "%s != %s\n\t%p, %p", "clipMap", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !clipMap->havokWorldShapeDataSize )
  {
    LODWORD(v3) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 488, ASSERT_TYPE_ASSERT, "( clipMap->havokWorldShapeDataSize ) > ( 0 )", "%s > %s\n\t%i, %i", "clipMap->havokWorldShapeDataSize", "0", v3, 0i64) )
      __debugbreak();
  }
  if ( !clipMap->havokWorldShapeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 489, ASSERT_TYPE_ASSERT, "( clipMap->havokWorldShapeData ) != ( nullptr )", "%s != %s\n\t%p, %p", "clipMap->havokWorldShapeData", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( g_worldCollision_WorldShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 491, ASSERT_TYPE_ASSERT, "( g_worldCollision_WorldShapeList ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_worldCollision_WorldShapeList", "nullptr", g_worldCollision_WorldShapeList, NULL) )
    __debugbreak();
  v2 = Physics_AddShapeList(&clipMap->havokWorldShapeData, &clipMap->havokWorldShapeDataSize, clipMap->name, 19);
  g_worldCollision_WorldShapeList = v2;
  if ( !v2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 496, ASSERT_TYPE_ASSERT, "( g_worldCollision_WorldShapeList ) != ( nullptr )", "%s != %s\n\t%p, %p", "g_worldCollision_WorldShapeList", "nullptr", NULL, NULL) )
      __debugbreak();
    v2 = g_worldCollision_WorldShapeList;
  }
  if ( !g_worldCollision_MapEntsShapeList )
    Physics_SetMainShapeList(v2);
}

/*
==============
WorldCollision_AddCollisionTile
==============
*/

void __fastcall WorldCollision_AddCollisionTile(CollisionTile *collisionTile)
{
  WorldCollision_AddCollisionTile_Internal(collisionTile);
}

/*
==============
WorldCollision_AddCollisionTile_Internal
==============
*/
void WorldCollision_AddCollisionTile_Internal(CollisionTile *collisionTile)
{
  unsigned int index; 
  unsigned __int8 v3; 
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  unsigned __int8 v6; 
  __int64 v7; 
  __int64 v8; 
  const CollisionTile *v9; 
  __int64 v10; 
  char *havokTileShapePointer; 
  hkSerialize::InplaceLoad *v12; 
  hknpShape *v13; 
  __int64 v14; 
  __int64 v15; 
  hkSerialize::InplaceLoad v16; 
  hkReflect::Var result; 

  if ( !collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 671, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  index = collisionTile->index;
  if ( index != 1024 )
  {
    if ( index >= 0x400 )
    {
      LODWORD(v15) = 1024;
      LODWORD(v14) = collisionTile->index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 676, ASSERT_TYPE_ASSERT, "(unsigned)( collisionTile->index ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "collisionTile->index doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v3 = collisionTile->gridId[0];
    if ( v3 >= 0x20u )
    {
      LODWORD(v15) = 32;
      LODWORD(v14) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 677, ASSERT_TYPE_ASSERT, "(unsigned)( collisionTile->gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "collisionTile->gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v4 = collisionTile->gridId[1];
    if ( v4 >= 0x20u )
    {
      LODWORD(v15) = 32;
      LODWORD(v14) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 678, ASSERT_TYPE_ASSERT, "(unsigned)( collisionTile->gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "collisionTile->gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v5 = collisionTile->gridId[0];
    if ( v5 >= 0x20u )
    {
      LODWORD(v15) = 32;
      LODWORD(v14) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 684, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v6 = collisionTile->gridId[1];
    if ( v6 >= 0x20u )
    {
      LODWORD(v15) = 32;
      LODWORD(v14) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 685, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v7 = collisionTile->gridId[1];
    v8 = v7 + 32i64 * collisionTile->gridId[0];
    if ( s_worldCollision_TilePhysicsInstances[collisionTile->gridId[0]][v7][0] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v8][1] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v8][2] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v8][3] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v8][4] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v8][5] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v8][6] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v8][7] != -1 )
      MEMORY[0] = 5;
    v9 = g_worldCollision_CollisionTiles[collisionTile->index];
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 700, ASSERT_TYPE_ASSERT, "( g_worldCollision_CollisionTiles[collisionTile->index] ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_worldCollision_CollisionTiles[collisionTile->index]", "nullptr", v9, NULL) )
      __debugbreak();
    g_worldCollision_CollisionTiles[collisionTile->index] = collisionTile;
    if ( collisionTile->havokTileShapeData )
    {
      v10 = collisionTile->index;
      if ( !g_worldCollision_CollisionTileShapes[v10] )
      {
        havokTileShapePointer = collisionTile->havokTileShapePointer;
        if ( !havokTileShapePointer )
        {
          hkSerialize::InplaceLoad::InplaceLoad(&v16);
          hkSerialize::InplaceLoad::toVar(v12, &result, collisionTile->havokTileShapeData, collisionTile->havokTileShapeDataSize, (const hkReflect::QualifiedType<hkReflect::Type>)&hknpShape::typeData);
          havokTileShapePointer = (char *)result.m_addr;
          if ( result.m_addr )
          {
            if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &hknpShape::typeData) )
              havokTileShapePointer = NULL;
            if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
              hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
          }
          else
          {
            if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
              hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
            havokTileShapePointer = NULL;
          }
          hkSerialize::InplaceLoad::~InplaceLoad(&v16);
          if ( !havokTileShapePointer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 717, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
            __debugbreak();
          collisionTile->havokTileShapePointer = havokTileShapePointer;
          v10 = collisionTile->index;
        }
        v13 = g_worldCollision_CollisionTileShapes[v10];
        if ( v13 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 726, ASSERT_TYPE_ASSERT, "( g_worldCollision_CollisionTileShapes[collisionTile->index] ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_worldCollision_CollisionTileShapes[collisionTile->index]", "nullptr", v13, NULL) )
            __debugbreak();
        }
        g_worldCollision_CollisionTileShapes[collisionTile->index] = (hknpShape *)havokTileShapePointer;
      }
    }
  }
}

/*
==============
WorldCollision_AddMapEnts
==============
*/
void WorldCollision_AddMapEnts(MapEnts *mapEnts)
{
  __int64 v2; 
  const void *v3; 
  HavokPhysicsShapeList *v4; 

  v2 = g_worldCollision_MapEnts[0] != NULL ? 8 : 0;
  v3 = *(const MapEnts **)((char *)g_worldCollision_MapEnts + v2);
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 559, ASSERT_TYPE_ASSERT, "( g_worldCollision_MapEnts[whichAsset] ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_worldCollision_MapEnts[whichAsset]", "nullptr", v3, NULL) )
    __debugbreak();
  *(const MapEnts **)((char *)g_worldCollision_MapEnts + v2) = mapEnts;
  v4 = Physics_AddShapeList(&mapEnts->havokEntsShapeData, &mapEnts->havokEntsShapeDataSize, mapEnts->name, 25);
  *(HavokPhysicsShapeList **)((char *)s_worldCollision_MapEntsShapeLists + v2) = v4;
  if ( v4 )
  {
    if ( !g_worldCollision_MapEntsShapeList )
      WorldCollision_ActivateMapEnts(mapEnts);
  }
}

/*
==============
WorldCollision_CheckTransientBudgets
==============
*/
void WorldCollision_CheckTransientBudgets(const LocalClientNum_t localClientNum)
{
  unsigned __int16 TileForPos; 
  const CollisionTile *v2; 
  unsigned int havokTileShapeDataSize; 
  unsigned int value; 
  const char *v5; 
  vec3_t outPos; 

  CL_GetViewPos(localClientNum, &outPos);
  TileForPos = CL_TransientCollisionMP_GetTileForPos(&outPos);
  if ( TileForPos < 0x400u )
  {
    v2 = g_worldCollision_CollisionTiles[TileForPos];
    if ( v2 )
    {
      havokTileShapeDataSize = v2->havokTileShapeDataSize;
      if ( havokTileShapeDataSize > 0x700000 )
      {
        value = havokTileShapeDataSize >> 10;
        v5 = j_va("Collision Tile %i has too much Radiant collision - %iKB, budget%iKB", TileForPos, value, 7168i64);
        StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_COLLISION_WORLDCOLLISION_MEMORY, 3000, v5, value);
      }
    }
  }
}

/*
==============
WorldCollision_CopyCollisionTile
==============
*/
void WorldCollision_CopyCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ;
}

/*
==============
WorldCollision_ForceSyncSetupRequests
==============
*/
void WorldCollision_ForceSyncSetupRequests(void)
{
  LocalClientNum_t v0; 
  bitarray<1024> *v1; 
  int i; 
  unsigned int v3; 
  const CollisionTile **v4; 
  unsigned __int64 v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  int j; 
  Physics_WorldId v9; 
  __int64 v10; 
  __int64 v11; 

  v0 = LOCAL_CLIENT_0;
  if ( Physics_AreServerWorldsCreated() )
  {
    v1 = s_worldCollision_TileSetup;
    for ( i = 0; i <= 1; ++i )
    {
      if ( (unsigned int)i >= 8 )
      {
        LODWORD(v11) = 8;
        LODWORD(v10) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 884, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      v3 = 0;
      v4 = g_worldCollision_CollisionTiles;
      v5 = 0i64;
      do
      {
        v6 = 0x80000000 >> (v3 & 0x1F);
        v7 = v5 >> 5;
        if ( (v6 & s_worldCollision_TileSetupRequested.array[v7]) != 0 || (v6 & v1->array[v7]) == 0 )
        {
          if ( (v6 & s_worldCollision_TileSetupRequested.array[v7]) != 0 && (v6 & v1->array[v7]) == 0 && *v4 )
          {
            WorldCollision_InstantiateCollisionForCollisionTile((const Physics_WorldId)i, *v4);
            v1->array[v7] |= v6;
          }
        }
        else
        {
          if ( *v4 )
          {
            WorldCollision_ShutdownCollisionForCollisionTile((const Physics_WorldId)i, *v4);
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 892, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
          {
            __debugbreak();
          }
          v1->array[v7] &= ~v6;
        }
        ++v3;
        ++v5;
        ++v4;
      }
      while ( v3 < 0x400 );
      ++v1;
    }
  }
  for ( j = 4; j < 10; j += 3 )
  {
    if ( Physics_AreClientWorldsCreated(v0) )
    {
      v9 = j;
      if ( !__OFSUB__(j, j - 2) )
      {
        do
          WorldCollision_SetupTileCollision(v9--);
        while ( v9 >= j - 2 );
      }
    }
    ++v0;
  }
}

/*
==============
WorldCollision_GetMapEntsShape
==============
*/
hknpShape *WorldCollision_GetMapEntsShape(unsigned int index)
{
  int NumShapesInShapeList; 
  HavokPhysicsShapeList *v3; 
  __int64 v5; 
  __int64 v6; 

  NumShapesInShapeList = 0;
  v3 = g_worldCollision_MapEntsShapeList;
  if ( g_worldCollision_MapEntsShapeList )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 640, ASSERT_TYPE_ASSERT, "( g_worldCollision_MapEntsShapeList ) != ( nullptr )", "%s != %s\n\t%p, %p", "g_worldCollision_MapEntsShapeList", "nullptr", NULL, NULL) )
    __debugbreak();
  v3 = g_worldCollision_MapEntsShapeList;
  if ( g_worldCollision_MapEntsShapeList )
  {
LABEL_5:
    if ( index < Physics_GetNumShapesInShapeList(v3) )
      return Physics_GetShapeFromShapeList(g_worldCollision_MapEntsShapeList, index);
    if ( g_worldCollision_MapEntsShapeList )
      NumShapesInShapeList = Physics_GetNumShapesInShapeList(g_worldCollision_MapEntsShapeList);
  }
  LODWORD(v6) = NumShapesInShapeList;
  LODWORD(v5) = index;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 641, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( WorldCollision_GetMapEntsShapeCount() )", "index doesn't index WorldCollision_GetMapEntsShapeCount()\n\t%i not in [0, %i)", v5, v6) )
    __debugbreak();
  return Physics_GetShapeFromShapeList(g_worldCollision_MapEntsShapeList, index);
}

/*
==============
WorldCollision_GetMapEntsShapeContents
==============
*/
int WorldCollision_GetMapEntsShapeContents(unsigned int index)
{
  __int64 v3; 
  __int64 v4; 

  if ( !g_worldCollision_MapEntsShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 659, ASSERT_TYPE_ASSERT, "( g_worldCollision_MapEntsShapeList ) != ( nullptr )", "%s != %s\n\t%p, %p", "g_worldCollision_MapEntsShapeList", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( index >= Physics_GetNumShapesInShapeList(g_worldCollision_MapEntsShapeList) )
  {
    LODWORD(v4) = Physics_GetNumShapesInShapeList(g_worldCollision_MapEntsShapeList);
    LODWORD(v3) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 660, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( Physics_GetNumShapesInShapeList( g_worldCollision_MapEntsShapeList ) )", "index doesn't index Physics_GetNumShapesInShapeList( g_worldCollision_MapEntsShapeList )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return Physics_GetContentsFromShapeList(g_worldCollision_MapEntsShapeList, index);
}

/*
==============
WorldCollision_GetMapEntsShapeCount
==============
*/
int WorldCollision_GetMapEntsShapeCount()
{
  if ( g_worldCollision_MapEntsShapeList )
    return Physics_GetNumShapesInShapeList(g_worldCollision_MapEntsShapeList);
  else
    return 0;
}

/*
==============
WorldCollision_GetMapEntsShapeName
==============
*/
const char *WorldCollision_GetMapEntsShapeName(unsigned int index)
{
  __int64 v3; 
  __int64 v4; 

  if ( !g_worldCollision_MapEntsShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 649, ASSERT_TYPE_ASSERT, "( g_worldCollision_MapEntsShapeList ) != ( nullptr )", "%s != %s\n\t%p, %p", "g_worldCollision_MapEntsShapeList", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( index >= Physics_GetNumShapesInShapeList(g_worldCollision_MapEntsShapeList) )
  {
    LODWORD(v4) = Physics_GetNumShapesInShapeList(g_worldCollision_MapEntsShapeList);
    LODWORD(v3) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 650, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( Physics_GetNumShapesInShapeList( g_worldCollision_MapEntsShapeList ) )", "index doesn't index Physics_GetNumShapesInShapeList( g_worldCollision_MapEntsShapeList )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return Physics_GetShapeNameFromShapeList(g_worldCollision_MapEntsShapeList, index);
}

/*
==============
WorldCollision_GetNumTilesToExpect
==============
*/
__int64 WorldCollision_GetNumTilesToExpect()
{
  return s_worldCollision_NumTilesToExpect;
}

/*
==============
WorldCollision_GetShapeForLoad
==============
*/
hknpShape *WorldCollision_GetShapeForLoad(const Physics_WorldId worldId, const unsigned int instanceId)
{
  __int64 v2; 
  unsigned __int8 v5; 
  unsigned __int8 i; 
  hknpShape **v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 1037, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", worldId, 0i64, 7) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 1038, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( s_worldCollision_PhysicsInstances[v2] == instanceId )
  {
    if ( !g_worldCollision_WorldShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 1043, ASSERT_TYPE_ASSERT, "( g_worldCollision_WorldShapeList ) != ( nullptr )", "%s != %s\n\t%p, %p", "g_worldCollision_WorldShapeList", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( Physics_GetNumShapesInShapeList(g_worldCollision_WorldShapeList) != 1 )
    {
      LODWORD(v9) = 1;
      LODWORD(v8) = Physics_GetNumShapesInShapeList(g_worldCollision_WorldShapeList);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 1044, ASSERT_TYPE_ASSERT, "( Physics_GetNumShapesInShapeList( g_worldCollision_WorldShapeList ) ) == ( 1 )", "%s == %s\n\t%i, %i", "Physics_GetNumShapesInShapeList( g_worldCollision_WorldShapeList )", "1", v8, v9) )
        __debugbreak();
    }
    return Physics_GetShapeFromShapeList(g_worldCollision_WorldShapeList, 0);
  }
  else
  {
    v5 = 0;
    while ( 2 )
    {
      for ( i = 0; i < 0x20u; ++i )
      {
        if ( s_worldCollision_TilePhysicsInstances[v5][i][v2] == instanceId )
        {
          v7 = &g_worldCollision_CollisionTileShapes[32 * i] + v5;
          if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 1061, ASSERT_TYPE_ASSERT, "( g_worldCollision_CollisionTileShapes[tileIdx] ) != ( nullptr )", "%s != %s\n\t%p, %p", "g_worldCollision_CollisionTileShapes[tileIdx]", "nullptr", NULL, NULL) )
            __debugbreak();
          return *v7;
        }
      }
      if ( ++v5 < 0x20u )
        continue;
      break;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 1067, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
WorldCollision_HasClipmapCollision
==============
*/
bool WorldCollision_HasClipmapCollision(const Physics_WorldId worldId)
{
  __int64 v1; 
  int v4; 

  v1 = worldId;
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 373, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, v4) )
      __debugbreak();
  }
  return s_worldCollision_PhysicsInstances[v1] != -1;
}

/*
==============
WorldCollision_HasCollision
==============
*/
char WorldCollision_HasCollision()
{
  int v0; 
  __int64 v1; 
  bool v2; 
  unsigned __int8 v3; 
  unsigned __int8 v4; 
  __int64 v6; 
  __int64 v7; 

  v0 = 0;
  v1 = 0i64;
  v2 = 1;
LABEL_2:
  if ( !v2 )
  {
    LODWORD(v7) = 8;
    LODWORD(v6) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 445, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( s_worldCollision_PhysicsInstances[v1] == -1 )
  {
    v3 = 0;
LABEL_7:
    v4 = 0;
    while ( s_worldCollision_TilePhysicsInstances[v3][v4][v1] == -1 )
    {
      if ( ++v4 >= 0x20u )
      {
        if ( ++v3 < 0x20u )
          goto LABEL_7;
        ++v0;
        ++v1;
        v2 = (unsigned int)v0 < 8;
        if ( v0 >= 8 )
          return 0;
        goto LABEL_2;
      }
    }
  }
  return 1;
}

/*
==============
WorldCollision_HasCollisionForWorld
==============
*/
char WorldCollision_HasCollisionForWorld(const Physics_WorldId worldId)
{
  __int64 v1; 
  unsigned __int8 v2; 
  unsigned __int8 v3; 
  int v6; 

  v1 = worldId;
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 445, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, v6) )
      __debugbreak();
  }
  if ( s_worldCollision_PhysicsInstances[v1] == -1 )
  {
    v2 = 0;
LABEL_6:
    v3 = 0;
    while ( s_worldCollision_TilePhysicsInstances[v2][v3][v1] == -1 )
    {
      if ( ++v3 >= 0x20u )
      {
        if ( ++v2 < 0x20u )
          goto LABEL_6;
        return 0;
      }
    }
  }
  return 1;
}

/*
==============
WorldCollision_HasCollisionTileCollision
==============
*/
bool WorldCollision_HasCollisionTileCollision(const Physics_WorldId worldId, const unsigned int tileIndexX, const unsigned int tileIndexY)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = worldId;
  v4 = tileIndexY;
  v5 = tileIndexX;
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 383, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0x20 )
  {
    LODWORD(v9) = 32;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 384, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndexX ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "tileIndexX doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 0x20 )
  {
    LODWORD(v9) = 32;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 385, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndexY ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "tileIndexY doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return s_worldCollision_TilePhysicsInstances[v5][v4][v3] != -1;
}

/*
==============
WorldCollision_Init
==============
*/
void WorldCollision_Init(void)
{
  unsigned int *v0; 
  __int64 v1; 
  __int64 v2; 
  bitarray<1024> *v3; 
  __int64 i; 
  unsigned int *v5; 

  Dvar_BeginPermanentRegistration();
  DVARBOOL_worldCollision_DebugShowPlayerLoadedStatus = Dvar_RegisterBool("OKOPLLORQO", 0, 4u, "Show whether the player is on a loaded tile or not");
  DVARBOOL_worldCollision_DebugWorldShapeList = Dvar_RegisterBool("MKSRSMMKNQ", 0, 4u, "Show info about the world shape list");
  DVARBOOL_worldCollision_DebugCollisionTilesShapeLists = Dvar_RegisterBool("SMMKNOKOS", 0, 4u, "Show info about the collision tiles shape lists");
  DVARBOOL_worldCollision_DebugMapEntsShapeList = Dvar_RegisterBool("MOSLQKPPQM", 0, 4u, "Show info about the map ents shape list");
  DVARBOOL_worldCollision_debugTiles = Dvar_RegisterBool("LQPSKQNTPM", 0, 4u, "Debug Draw World Collision Tile - big map only");
  DVARBOOL_worldCollision_debugTilesWorld = Dvar_RegisterBool("MTOTTPOPO", 0, 4u, "Debug Draw World Collision Tile as 3D boxes - big map only");
  DVARINT_worldCollision_debugDisplayOffsetX = Dvar_RegisterInt("MNOPLLQORM", 0, -500, 500, 4u, "Move the World Collision Debug Display in the X direction");
  DVARINT_worldCollision_debugDisplayOffsetY = Dvar_RegisterInt("LMMRQSQKT", 0, -45000, 500, 4u, "Move the World Collision Debug Display in the Y direction");
  DVARBOOL_worldCollision_debugDump = Dvar_RegisterBool("OKTOOKORTP", 0, 4u, "Dump World Collision Debug Display to TTY");
  Dvar_EndPermanentRegistration();
  memset_0(g_worldCollision_CollisionTiles, 0, sizeof(g_worldCollision_CollisionTiles));
  g_worldCollision_WorldShapeList = NULL;
  memset_0(g_worldCollision_CollisionTileShapes, 0, sizeof(g_worldCollision_CollisionTileShapes));
  g_worldCollision_MapEntsShapeList = NULL;
  s_worldCollision_MapEntsShapeLists[0] = NULL;
  qword_14FF88EC0 = 0i64;
  v0 = &s_worldCollision_TilePhysicsInstances[0][0][2];
  *(_QWORD *)s_worldCollision_PhysicsInstances = -1i64;
  *(_QWORD *)&s_worldCollision_PhysicsInstances[2] = -1i64;
  *(_QWORD *)&s_worldCollision_PhysicsInstances[4] = -1i64;
  *(_QWORD *)&s_worldCollision_PhysicsInstances[6] = -1i64;
  v1 = 32i64;
  do
  {
    v2 = 32i64;
    do
    {
      *((_QWORD *)v0 - 1) = -1i64;
      *(_QWORD *)v0 = -1i64;
      *((_QWORD *)v0 + 1) = -1i64;
      *((_QWORD *)v0 + 2) = -1i64;
      v0 += 8;
      --v2;
    }
    while ( v2 );
    --v1;
  }
  while ( v1 );
  v3 = &s_worldCollision_TileSetupRequested;
  for ( i = 32i64; i; --i )
  {
    v3->array[0] = 0;
    v3 = (bitarray<1024> *)((char *)v3 + 4);
  }
  v5 = &s_worldCollision_TileSetup[0].array[2];
  do
  {
    *((_QWORD *)v5 - 1) = 0i64;
    *(_QWORD *)v5 = 0i64;
    *((_QWORD *)v5 + 1) = 0i64;
    *((_QWORD *)v5 + 2) = 0i64;
    *((_QWORD *)v5 + 3) = 0i64;
    *((_QWORD *)v5 + 4) = 0i64;
    *((_QWORD *)v5 + 5) = 0i64;
    *((_QWORD *)v5 + 6) = 0i64;
    *((_QWORD *)v5 + 7) = 0i64;
    *((_QWORD *)v5 + 8) = 0i64;
    *((_QWORD *)v5 + 9) = 0i64;
    *((_QWORD *)v5 + 10) = 0i64;
    *((_QWORD *)v5 + 11) = 0i64;
    *((_QWORD *)v5 + 12) = 0i64;
    *((_QWORD *)v5 + 13) = 0i64;
    *((_QWORD *)v5 + 14) = 0i64;
    v5 += 32;
  }
  while ( (__int64)v5 < (__int64)&unk_14FF91378 );
}

/*
==============
WorldCollision_InstantiateCollision
==============
*/
void WorldCollision_InstantiateCollision(const Physics_WorldId worldId)
{
  __int64 v1; 
  unsigned int v2; 
  const hknpShape *ShapeFromShapeList; 
  int Ref; 
  int contents; 
  unsigned int v6; 
  unsigned __int64 v7; 
  const CollisionTile **v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  vec4_t *orientationAsQuat; 
  char dest[256]; 

  v1 = worldId;
  v2 = 0;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 185, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", worldId, 0i64, 7) )
    __debugbreak();
  if ( s_worldCollision_PhysicsInstances[v1] == -1 && g_worldCollision_WorldShapeList )
  {
    if ( Physics_GetNumShapesInShapeList(g_worldCollision_WorldShapeList) != 1 )
    {
      LODWORD(orientationAsQuat) = Physics_GetNumShapesInShapeList(g_worldCollision_WorldShapeList);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 199, ASSERT_TYPE_ASSERT, "( Physics_GetNumShapesInShapeList( g_worldCollision_WorldShapeList ) ) == ( 1 )", "%s == %s\n\t%i, %i", "Physics_GetNumShapesInShapeList( g_worldCollision_WorldShapeList )", "1", orientationAsQuat, 1) )
        __debugbreak();
    }
    ShapeFromShapeList = Physics_GetShapeFromShapeList(g_worldCollision_WorldShapeList, 0);
    Ref = Physics_MakeRef(Physics_RefSystem_WorldGeo, Physics_RelationshipSystem_None, 0, 0);
    Com_sprintf(dest, 0x100ui64, "worldcollision-clipmap");
    contents = Physics_GetContentsFromShapeList(g_worldCollision_WorldShapeList, 0);
    v6 = Physics_InstantiateStaticBody((Physics_WorldId)v1, ShapeFromShapeList, Ref, dest, "PM_Concrete", contents, &vec3_origin, &quat_identity, 1, 1, 0);
    s_worldCollision_PhysicsInstances[v1] = v6;
    if ( v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 218, ASSERT_TYPE_ASSERT, "(s_worldCollision_PhysicsInstances[worldId] != 0xFFFFFFFF)", (const char *)&queryFormat, "s_worldCollision_PhysicsInstances[worldId] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
  }
  v7 = 0i64;
  v8 = g_worldCollision_CollisionTiles;
  do
  {
    if ( *v8 )
    {
      v9 = 0x80000000 >> (v2 & 0x1F);
      v10 = v7 >> 5;
      if ( (v9 & s_worldCollision_TileSetupRequested.array[v10]) != 0 )
      {
        WorldCollision_InstantiateCollisionForCollisionTile((const Physics_WorldId)v1, *v8);
        s_worldCollision_TileSetup[v1].array[v10] |= v9;
      }
    }
    ++v2;
    ++v7;
    ++v8;
  }
  while ( v2 < 0x400 );
}

/*
==============
WorldCollision_InstantiateCollisionForCollisionTile
==============
*/
void WorldCollision_InstantiateCollisionForCollisionTile(const Physics_WorldId worldId, const CollisionTile *collisionTile)
{
  __int64 v2; 
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  __int64 v6; 
  unsigned __int16 v7; 
  const hknpShape *v8; 
  int Ref; 
  int ContentsFromShapeList; 
  char *fmt; 
  __int64 contents; 
  vec3_t *position; 
  char dest[256]; 

  v2 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 227, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", worldId, 0i64, 7) )
    __debugbreak();
  if ( !collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 228, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  v4 = collisionTile->gridId[0];
  if ( v4 >= 0x20u )
  {
    LODWORD(position) = 32;
    LODWORD(contents) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 232, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", contents, position) )
      __debugbreak();
  }
  v5 = collisionTile->gridId[1];
  if ( v5 >= 0x20u )
  {
    LODWORD(position) = 32;
    LODWORD(contents) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 233, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", contents, position) )
      __debugbreak();
  }
  v6 = collisionTile->gridId[1];
  if ( s_worldCollision_TilePhysicsInstances[collisionTile->gridId[0]][v6][v2] == -1 )
  {
    v7 = collisionTile->gridId[0] + 32 * v6;
    if ( g_worldCollision_CollisionTileShapes[v7] )
    {
      if ( !g_worldCollision_WorldShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 251, ASSERT_TYPE_ASSERT, "( g_worldCollision_WorldShapeList ) != ( nullptr )", "%s != %s\n\t%p, %p", "g_worldCollision_WorldShapeList", "nullptr", NULL, NULL) )
        __debugbreak();
      v8 = g_worldCollision_CollisionTileShapes[v7];
      Ref = Physics_MakeRef(Physics_RefSystem_WorldGeo, Physics_RelationshipSystem_None, 0, v7 + 1);
      LODWORD(contents) = collisionTile->gridId[1];
      LODWORD(fmt) = collisionTile->gridId[0];
      Com_sprintf(dest, 0x100ui64, "worldcollision-tile%d-grid%d,%d", v7, fmt, contents);
      ContentsFromShapeList = Physics_GetContentsFromShapeList(g_worldCollision_WorldShapeList, collisionTile->worldCollisionShapeIdx);
      s_worldCollision_TilePhysicsInstances[collisionTile->gridId[0]][collisionTile->gridId[1]][v2] = Physics_InstantiateStaticBody((Physics_WorldId)v2, v8, Ref, dest, "PM_Concrete", ContentsFromShapeList, &vec3_origin, &quat_identity, 1, 1, 0);
      if ( s_worldCollision_TilePhysicsInstances[collisionTile->gridId[0]][collisionTile->gridId[1]][v2] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 270, ASSERT_TYPE_ASSERT, "(s_worldCollision_TilePhysicsInstances[gridId[0]][gridId[1]][worldId] != 0xFFFFFFFF)", (const char *)&queryFormat, "s_worldCollision_TilePhysicsInstances[gridId[0]][gridId[1]][worldId] != PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
    }
  }
}

/*
==============
WorldCollision_IsCollisionReadyAt
==============
*/
char WorldCollision_IsCollisionReadyAt(const Physics_WorldId worldId, const vec2_t *position, __int16 *gridIdx)
{
  __int64 v3; 
  float v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  const CollisionTile *v12; 
  __int64 v13; 
  __int64 v14; 

  v3 = worldId;
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 395, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, 8) )
    __debugbreak();
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 396, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ))", (const char *)&queryFormat, "!IS_NAN( position[0] ) && !IS_NAN( position[1] )") )
    __debugbreak();
  if ( !s_worldCollision_NumTilesToExpect )
    return s_worldCollision_PhysicsInstances[v3] != -1;
  v7 = position->v[1] - -131072.0;
  v8 = (int)(float)((float)(position->v[0] - -131072.0) * 0.00012207031);
  *gridIdx = v8;
  v9 = (int)(float)(v7 * 0.00012207031);
  gridIdx[1] = v9;
  if ( (v8 & 0x8000u) != 0 )
    return 0;
  if ( (__int16)v8 >= 32 )
    return 0;
  if ( (unsigned __int16)v9 > 0x1Fu )
    return 0;
  v10 = (__int16)v8;
  v11 = (__int16)v9;
  v12 = g_worldCollision_CollisionTiles[(__int16)v8 + 32 * (__int16)v9];
  if ( !v12 )
    return 0;
  if ( !v12->havokTileShapeDataSize )
    return 1;
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v14) = 8;
    LODWORD(v13) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 383, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  return s_worldCollision_TilePhysicsInstances[v10][v11][v3] != -1;
}

/*
==============
WorldCollision_IsTileSetup
==============
*/
__int64 WorldCollision_IsTileSetup(const unsigned int collisionTileIdx)
{
  unsigned __int64 v1; 
  char v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned int *v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  unsigned int v12; 
  _DWORD *v13; 
  __int64 v14; 
  bool v15; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  char v20; 
  int v21; 

  v1 = collisionTileIdx;
  v20 = 0;
  v2 = 1;
  v3 = 0;
  v21 = 0;
  v4 = 2i64;
  if ( Physics_AreServerWorldsCreated() )
  {
    v20 = 1;
    v5 = 2i64;
    v6 = &s_worldCollision_TileSetup[0].array[(unsigned __int64)(unsigned int)v1 >> 5];
    do
    {
      if ( (unsigned int)v1 >= 0x400 )
      {
        LODWORD(v18) = 1024;
        LODWORD(v17) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
          __debugbreak();
      }
      v7 = 0;
      if ( ((0x80000000 >> (v1 & 0x1F)) & *v6) != 0 )
        v7 = v2;
      v6 += 32;
      v2 = v7;
      --v5;
    }
    while ( v5 );
    v4 = 2i64;
  }
  v8 = 512i64;
  v9 = v1 & 0x1F;
  v19 = 512i64;
  v10 = 4i64;
  do
  {
    if ( Physics_AreClientWorldsCreated((LocalClientNum_t)v3) )
    {
      v11 = 1;
      v20 = 1;
      if ( v10 < v4 )
        goto LABEL_20;
      v12 = 0x80000000 >> v9;
      v13 = (unsigned int *)((char *)&s_worldCollision_TileSetup[0].array[v1 >> 5] + v8);
      v14 = v10 - v4 + 1;
      do
      {
        if ( (unsigned int)v1 >= 0x400 )
        {
          LODWORD(v18) = 1024;
          LODWORD(v17) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
            __debugbreak();
        }
        v15 = (v12 & *v13) != 0;
        v13 -= 32;
        v2 &= v15;
        --v14;
      }
      while ( v14 );
      v3 = v21;
      v8 = v19;
      v9 = v1 & 0x1F;
    }
    v11 = v20;
LABEL_20:
    ++v3;
    v8 += 384i64;
    v4 += 3i64;
    v21 = v3;
    v10 += 3i64;
    v19 = v8;
  }
  while ( v3 < 2 );
  return (unsigned __int8)(v2 & v11);
}

/*
==============
WorldCollision_Load
==============
*/
void WorldCollision_Load(SaveGame *save)
{
  unsigned int *v1; 
  int v2; 
  unsigned int *v3; 
  unsigned int *v4; 
  const CollisionTile **v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int (*v8)[32][8]; 
  __int64 v9; 
  __int64 v10; 
  unsigned int (*v11)[32][8]; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 1004, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  v1 = s_worldCollision_PhysicsInstances;
  v2 = 0;
  v3 = &s_worldCollision_TileSetup[0].array[2];
  v4 = s_worldCollision_PhysicsInstances;
  do
  {
    v5 = g_worldCollision_CollisionTiles;
    v6 = 1024i64;
    do
    {
      if ( *v5 )
        WorldCollision_ShutdownCollisionForCollisionTile((const Physics_WorldId)v2, *v5);
      ++v5;
      --v6;
    }
    while ( v6 );
    *((_QWORD *)v3 - 1) = 0i64;
    *(_QWORD *)v3 = 0i64;
    *((_QWORD *)v3 + 1) = 0i64;
    *((_QWORD *)v3 + 2) = 0i64;
    *((_QWORD *)v3 + 3) = 0i64;
    *((_QWORD *)v3 + 4) = 0i64;
    *((_QWORD *)v3 + 5) = 0i64;
    *((_QWORD *)v3 + 6) = 0i64;
    *((_QWORD *)v3 + 7) = 0i64;
    *((_QWORD *)v3 + 8) = 0i64;
    *((_QWORD *)v3 + 9) = 0i64;
    *((_QWORD *)v3 + 10) = 0i64;
    *((_QWORD *)v3 + 11) = 0i64;
    *((_QWORD *)v3 + 12) = 0i64;
    *((_QWORD *)v3 + 13) = 0i64;
    *((_QWORD *)v3 + 14) = 0i64;
    if ( (unsigned int)v2 > 7 )
    {
      LODWORD(v14) = 7;
      LODWORD(v13) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 279, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", v13, 0i64, v14) )
        __debugbreak();
    }
    if ( *v4 != -1 )
    {
      Physics_DestroyInstance((Physics_WorldId)v2, *v4, 0);
      *v4 = -1;
    }
    ++v2;
    v3 += 32;
    ++v4;
  }
  while ( v2 <= 1 );
  v7 = 2i64;
  do
  {
    MemFile_ReadData(&save->memFile, 4ui64, v1++);
    --v7;
  }
  while ( v7 );
  v8 = s_worldCollision_TilePhysicsInstances;
  v9 = 32i64;
  do
  {
    v10 = 32i64;
    do
    {
      v11 = v8;
      v12 = 2i64;
      do
      {
        MemFile_ReadData(&save->memFile, 4ui64, v11);
        v11 = (unsigned int (*)[32][8])((char *)v11 + 4);
        --v12;
      }
      while ( v12 );
      v8 = (unsigned int (*)[32][8])((char *)v8 + 32);
      --v10;
    }
    while ( v10 );
    --v9;
  }
  while ( v9 );
}

/*
==============
WorldCollision_MoveMapEnts
==============
*/
void WorldCollision_MoveMapEnts(MapEnts *from, MapEnts *to)
{
  __int64 v2; 
  MapEnts *v4; 

  v2 = 0i64;
  if ( g_worldCollision_MapEnts[0] != from )
    v2 = 1i64;
  v4 = (MapEnts *)g_worldCollision_MapEnts[v2];
  if ( v4 != from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 618, ASSERT_TYPE_ASSERT, "( g_worldCollision_MapEnts[whichAsset] ) == ( from )", "%s == %s\n\t%p, %p", "g_worldCollision_MapEnts[whichAsset]", "from", v4, from) )
    __debugbreak();
  g_worldCollision_MapEnts[v2] = to;
}

/*
==============
WorldCollision_MovedCollisionTile
==============
*/
void WorldCollision_MovedCollisionTile(const CollisionTile *from, CollisionTile *to)
{
  WorldCollision_AddCollisionTile_Internal(to);
}

/*
==============
WorldCollision_MovingCollisionTile
==============
*/
void WorldCollision_MovingCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  WorldCollision_RemoveCollisionTile_Internal(from);
  WorldCollision_RemoveCollisionTile_Internal(to);
}

/*
==============
WorldCollision_RemoveClipMap
==============
*/
void WorldCollision_RemoveClipMap(const clipMap_t *clipMap)
{
  __int64 v2; 

  if ( !clipMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 510, ASSERT_TYPE_ASSERT, "( clipMap ) != ( nullptr )", "%s != %s\n\t%p, %p", "clipMap", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !clipMap->havokWorldShapeDataSize )
  {
    LODWORD(v2) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 513, ASSERT_TYPE_ASSERT, "( clipMap->havokWorldShapeDataSize ) > ( 0 )", "%s > %s\n\t%i, %i", "clipMap->havokWorldShapeDataSize", "0", v2, 0i64) )
      __debugbreak();
  }
  if ( !clipMap->havokWorldShapeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 514, ASSERT_TYPE_ASSERT, "( clipMap->havokWorldShapeData ) != ( nullptr )", "%s != %s\n\t%p, %p", "clipMap->havokWorldShapeData", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !g_worldCollision_WorldShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 515, ASSERT_TYPE_ASSERT, "( g_worldCollision_WorldShapeList ) != ( nullptr )", "%s != %s\n\t%p, %p", "g_worldCollision_WorldShapeList", "nullptr", NULL, NULL) )
    __debugbreak();
  Physics_SetMainShapeList(NULL);
  g_worldCollision_WorldShapeList = NULL;
  Physics_RemoveShapeList(clipMap->havokWorldShapeData, clipMap->havokWorldShapeDataSize);
}

/*
==============
WorldCollision_RemoveCollisionTile
==============
*/
void WorldCollision_RemoveCollisionTile(const CollisionTile *collisionTile)
{
  unsigned __int64 index; 
  __int64 v3; 

  if ( !collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 789, ASSERT_TYPE_ASSERT, "(collisionTile)", (const char *)&queryFormat, "collisionTile") )
    __debugbreak();
  index = collisionTile->index;
  if ( (_DWORD)index != 1024 )
  {
    if ( (unsigned int)index >= 0x400 )
    {
      LODWORD(v3) = collisionTile->index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v3, 1024) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (index & 0x1F)) & s_worldCollision_TileSetupRequested.array[index >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 790, ASSERT_TYPE_ASSERT, "((collisionTile->index == COLLISION_TILE_MAX_TILES) || (!s_worldCollision_TileSetupRequested.testBit( collisionTile->index )))", (const char *)&queryFormat, "(collisionTile->index == COLLISION_TILE_MAX_TILES) || (!s_worldCollision_TileSetupRequested.testBit( collisionTile->index ))") )
      __debugbreak();
  }
  WorldCollision_RemoveCollisionTile_Internal(collisionTile);
}

/*
==============
WorldCollision_RemoveCollisionTile_Internal
==============
*/
void WorldCollision_RemoveCollisionTile_Internal(const CollisionTile *collisionTile)
{
  __int64 index; 
  const CollisionTile *v3; 
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 738, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  index = collisionTile->index;
  if ( (_DWORD)index != 1024 )
  {
    v3 = g_worldCollision_CollisionTiles[index];
    if ( v3 != collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 745, ASSERT_TYPE_ASSERT, "( g_worldCollision_CollisionTiles[collisionTile->index] ) == ( collisionTile )", "%s == %s\n\t%p, %p", "g_worldCollision_CollisionTiles[collisionTile->index]", "collisionTile", v3, collisionTile) )
      __debugbreak();
    v4 = collisionTile->gridId[0];
    if ( v4 >= 0x20u )
    {
      LODWORD(v9) = 32;
      LODWORD(v8) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 752, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v5 = collisionTile->gridId[1];
    if ( v5 >= 0x20u )
    {
      LODWORD(v9) = 32;
      LODWORD(v8) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 753, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v6 = collisionTile->gridId[1];
    v7 = v6 + 32i64 * collisionTile->gridId[0];
    if ( s_worldCollision_TilePhysicsInstances[collisionTile->gridId[0]][v6][0] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v7][1] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v7][2] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v7][3] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v7][4] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v7][5] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v7][6] != -1 )
      MEMORY[0] = 5;
    if ( s_worldCollision_TilePhysicsInstances[0][v7][7] != -1 )
      MEMORY[0] = 5;
    if ( collisionTile->havokTileShapeData )
      g_worldCollision_CollisionTileShapes[collisionTile->index] = NULL;
    g_worldCollision_CollisionTiles[collisionTile->index] = NULL;
  }
}

/*
==============
WorldCollision_RemoveMapEnts
==============
*/
void WorldCollision_RemoveMapEnts(MapEnts *mapEnts)
{
  __int64 v2; 
  MapEnts *v3; 
  HavokPhysicsShapeList *v4; 
  HavokPhysicsShapeList **v5; 
  char *havokEntsShapeData; 
  HavokPhysicsShapeList *v7; 

  v2 = g_worldCollision_MapEnts[0] != mapEnts;
  v3 = (MapEnts *)g_worldCollision_MapEnts[v2];
  if ( v3 != mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 581, ASSERT_TYPE_ASSERT, "( g_worldCollision_MapEnts[whichAsset] ) == ( mapEnts )", "%s == %s\n\t%p, %p", "g_worldCollision_MapEnts[whichAsset]", "mapEnts", v3, mapEnts) )
    __debugbreak();
  v4 = g_worldCollision_WorldShapeList;
  v5 = (HavokPhysicsShapeList **)&qword_14FF88EC0[-v2];
  if ( *v5 )
    v4 = *v5;
  Physics_SetMainShapeList(v4);
  havokEntsShapeData = mapEnts->havokEntsShapeData;
  if ( havokEntsShapeData )
  {
    Physics_RemoveShapeList(havokEntsShapeData, mapEnts->havokEntsShapeDataSize);
    s_worldCollision_MapEntsShapeLists[v2] = NULL;
  }
  v7 = *v5;
  g_worldCollision_MapEnts[v2] = NULL;
  g_worldCollision_MapEntsShapeList = v7;
}

/*
==============
WorldCollision_RequestSetupTile
==============
*/
void WorldCollision_RequestSetupTile(const unsigned int collisionTileIdx)
{
  unsigned __int64 v1; 
  int v3; 
  int v4; 
  int v5; 

  v1 = collisionTileIdx;
  if ( collisionTileIdx >= 0x400 )
  {
    v3 = 1024;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 829, ASSERT_TYPE_ASSERT, "(unsigned)( collisionTileIdx ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "collisionTileIdx doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", collisionTileIdx, v3) )
      __debugbreak();
    v5 = 1024;
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v4, v5) )
      __debugbreak();
  }
  s_worldCollision_TileSetupRequested.array[v1 >> 5] |= 0x80000000 >> (v1 & 0x1F);
}

/*
==============
WorldCollision_RequestShutdownTile
==============
*/
void WorldCollision_RequestShutdownTile(const unsigned int collisionTileIdx)
{
  unsigned __int64 v1; 
  int v3; 
  int v4; 
  int v5; 

  v1 = collisionTileIdx;
  if ( collisionTileIdx >= 0x400 )
  {
    v3 = 1024;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 839, ASSERT_TYPE_ASSERT, "(unsigned)( collisionTileIdx ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "collisionTileIdx doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", collisionTileIdx, v3) )
      __debugbreak();
    v5 = 1024;
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v4, v5) )
      __debugbreak();
  }
  s_worldCollision_TileSetupRequested.array[v1 >> 5] &= ~(0x80000000 >> (v1 & 0x1F));
}

/*
==============
WorldCollision_SetNumTilesToExpect
==============
*/
void WorldCollision_SetNumTilesToExpect(unsigned int numTiles)
{
  s_worldCollision_NumTilesToExpect = numTiles;
}

/*
==============
WorldCollision_SetupTileCollision
==============
*/
void WorldCollision_SetupTileCollision(const Physics_WorldId worldId)
{
  __int64 v1; 
  unsigned int v2; 
  const CollisionTile **v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned __int64 v6; 
  bitarray<1024> *v7; 
  bitarray<1024> *v8; 

  v1 = worldId;
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 884, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, 8) )
    __debugbreak();
  v2 = 0;
  v3 = g_worldCollision_CollisionTiles;
  v4 = 0i64;
  do
  {
    v5 = 0x80000000 >> (v2 & 0x1F);
    v6 = v4 >> 5;
    if ( (v5 & s_worldCollision_TileSetupRequested.array[v6]) != 0 || (v7 = &s_worldCollision_TileSetup[v1], (v5 & v7->array[v6]) == 0) )
    {
      if ( (v5 & s_worldCollision_TileSetupRequested.array[v6]) != 0 )
      {
        v8 = &s_worldCollision_TileSetup[v1];
        if ( (v5 & v8->array[v6]) == 0 )
        {
          if ( *v3 )
          {
            WorldCollision_InstantiateCollisionForCollisionTile((const Physics_WorldId)v1, *v3);
            v8->array[v6] |= v5;
          }
        }
      }
    }
    else
    {
      if ( *v3 )
      {
        WorldCollision_ShutdownCollisionForCollisionTile((const Physics_WorldId)v1, *v3);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 892, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
      {
        __debugbreak();
      }
      v7->array[v6] &= ~v5;
    }
    ++v2;
    ++v4;
    ++v3;
  }
  while ( v2 < 0x400 );
}

/*
==============
WorldCollision_Shutdown
==============
*/
void WorldCollision_Shutdown(void)
{
  bitarray<1024> *v0; 
  unsigned int v1; 
  bitarray<1024> *v2; 
  unsigned int (*v3)[32][8]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int *v7; 
  const void **v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  hknpShape *v12; 
  const CollisionTile *v13; 

  v0 = s_worldCollision_TileSetup;
  do
  {
    v1 = 0;
    v2 = v0;
    while ( !v2->array[0] )
    {
      ++v1;
      v2 = (bitarray<1024> *)((char *)v2 + 4);
      if ( v1 >= 0x20 )
        goto LABEL_8;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 133, ASSERT_TYPE_ASSERT, "(!s_worldCollision_TileSetup[worldId].anyBitsOn())", (const char *)&queryFormat, "!s_worldCollision_TileSetup[worldId].anyBitsOn()") )
      __debugbreak();
LABEL_8:
    ++v0;
  }
  while ( (__int64)v0 < (__int64)&unk_14FF91370 );
  v3 = s_worldCollision_TilePhysicsInstances;
  v4 = 32i64;
  do
  {
    v5 = 32i64;
    do
    {
      v6 = 8i64;
      do
      {
        if ( *(_DWORD *)v3 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 142, ASSERT_TYPE_ASSERT, "(s_worldCollision_TilePhysicsInstances[gridX][gridY][worldId] == 0xFFFFFFFF)", (const char *)&queryFormat, "s_worldCollision_TilePhysicsInstances[gridX][gridY][worldId] == PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        v3 = (unsigned int (*)[32][8])((char *)v3 + 4);
        --v6;
      }
      while ( v6 );
      --v5;
    }
    while ( v5 );
    --v4;
  }
  while ( v4 );
  v7 = s_worldCollision_PhysicsInstances;
  do
  {
    if ( *v7 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 149, ASSERT_TYPE_ASSERT, "(s_worldCollision_PhysicsInstances[worldId] == 0xFFFFFFFF)", (const char *)&queryFormat, "s_worldCollision_PhysicsInstances[worldId] == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    ++v7;
  }
  while ( (__int64)v7 < (__int64)&unk_14FF88EE8 );
  v8 = (const void **)s_worldCollision_MapEntsShapeLists;
  v9 = 2i64;
  do
  {
    if ( *v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 154, ASSERT_TYPE_ASSERT, "( s_worldCollision_MapEntsShapeLists[mapEntsId] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_worldCollision_MapEntsShapeLists[mapEntsId]", "nullptr", *v8, NULL) )
      __debugbreak();
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( g_worldCollision_MapEntsShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 156, ASSERT_TYPE_ASSERT, "( g_worldCollision_MapEntsShapeList ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_worldCollision_MapEntsShapeList", "nullptr", g_worldCollision_MapEntsShapeList, NULL) )
    __debugbreak();
  if ( g_worldCollision_WorldShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 157, ASSERT_TYPE_ASSERT, "( g_worldCollision_WorldShapeList ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_worldCollision_WorldShapeList", "nullptr", g_worldCollision_WorldShapeList, NULL) )
    __debugbreak();
  v10 = 0i64;
  v11 = 1024i64;
  do
  {
    v12 = g_worldCollision_CollisionTileShapes[v10];
    if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 161, ASSERT_TYPE_ASSERT, "( g_worldCollision_CollisionTileShapes[collisionTileIdx] ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_worldCollision_CollisionTileShapes[collisionTileIdx]", "nullptr", v12, NULL) )
      __debugbreak();
    v13 = g_worldCollision_CollisionTiles[v10];
    if ( v13 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 162, ASSERT_TYPE_ASSERT, "( g_worldCollision_CollisionTiles[collisionTileIdx] ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_worldCollision_CollisionTiles[collisionTileIdx]", "nullptr", v13, NULL) )
        __debugbreak();
    }
    ++v10;
    --v11;
  }
  while ( v11 );
}

/*
==============
WorldCollision_ShutdownCollision
==============
*/
void WorldCollision_ShutdownCollision(const Physics_WorldId worldId)
{
  __int64 v1; 
  const CollisionTile **v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int v5; 

  v1 = worldId;
  v2 = g_worldCollision_CollisionTiles;
  v3 = 1024i64;
  do
  {
    if ( *v2 )
      WorldCollision_ShutdownCollisionForCollisionTile((const Physics_WorldId)v1, *v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = v1;
  *(_QWORD *)s_worldCollision_TileSetup[v4].array = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[2] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[4] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[6] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[8] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[10] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[12] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[14] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[16] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[18] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[20] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[22] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[24] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[26] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[28] = 0i64;
  *(_QWORD *)&s_worldCollision_TileSetup[v4].array[30] = 0i64;
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 279, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", v1, 0i64, 7) )
    __debugbreak();
  v5 = s_worldCollision_PhysicsInstances[v1];
  if ( v5 != -1 )
  {
    Physics_DestroyInstance((Physics_WorldId)v1, v5, 0);
    s_worldCollision_PhysicsInstances[v1] = -1;
  }
}

/*
==============
WorldCollision_ShutdownCollisionForCollisionTile
==============
*/
void WorldCollision_ShutdownCollisionForCollisionTile(const Physics_WorldId worldId, const CollisionTile *collisionTile)
{
  __int64 v2; 
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 296, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", worldId, 0i64, 7) )
      __debugbreak();
    if ( (unsigned int)v2 > 7 )
    {
      LODWORD(v9) = 7;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 297, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
        __debugbreak();
    }
  }
  if ( !collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 298, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  v4 = collisionTile->gridId[0];
  if ( v4 >= 0x20u )
  {
    LODWORD(v8) = 32;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 302, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = collisionTile->gridId[1];
  if ( v5 >= 0x20u )
  {
    LODWORD(v8) = 32;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 303, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v6 = s_worldCollision_TilePhysicsInstances[collisionTile->gridId[0]][collisionTile->gridId[1]][v2];
  if ( v6 != -1 )
  {
    Physics_DestroyInstance((Physics_WorldId)v2, v6, 0);
    s_worldCollision_TilePhysicsInstances[collisionTile->gridId[0]][collisionTile->gridId[1]][v2] = -1;
  }
}

/*
==============
WorldCollision_SwapCollisionTile
==============
*/
void WorldCollision_SwapCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ;
}

/*
==============
WorldCollision_SwapMapEnts
==============
*/
void WorldCollision_SwapMapEnts(MapEnts *from, MapEnts *to)
{
  HavokPhysicsShapeList *v2; 

  v2 = (HavokPhysicsShapeList *)qword_14FF88EC0[0];
  qword_14FF88EC0[0] = (__int64)s_worldCollision_MapEntsShapeLists[0];
  s_worldCollision_MapEntsShapeLists[0] = v2;
  WorldCollision_ActivateMapEnts(to);
}

/*
==============
WorldCollision_Write
==============
*/
void WorldCollision_Write(MemoryFile *memFile)
{
  unsigned int *v2; 
  __int64 v3; 
  unsigned int (*v4)[32][8]; 
  __int64 v5; 
  __int64 v6; 
  unsigned int (*v7)[32][8]; 
  __int64 v8; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\worldcollision\\worldcollision.cpp", 978, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v2 = s_worldCollision_PhysicsInstances;
  v3 = 2i64;
  do
  {
    MemFile_WriteData(memFile, 4ui64, v2++);
    --v3;
  }
  while ( v3 );
  v4 = s_worldCollision_TilePhysicsInstances;
  v5 = 32i64;
  do
  {
    v6 = 32i64;
    do
    {
      v7 = v4;
      v8 = 2i64;
      do
      {
        MemFile_WriteData(memFile, 4ui64, v7);
        v7 = (unsigned int (*)[32][8])((char *)v7 + 4);
        --v8;
      }
      while ( v8 );
      v4 = (unsigned int (*)[32][8])((char *)v4 + 32);
      --v6;
    }
    while ( v6 );
    --v5;
  }
  while ( v5 );
}

