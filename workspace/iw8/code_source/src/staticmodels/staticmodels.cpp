/*
==============
StaticModels_Load
==============
*/

void __fastcall StaticModels_Load(SaveGame *save)
{
  ?StaticModels_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
StaticModels_GetCollisionTileModelShape
==============
*/

const void *__fastcall StaticModels_GetCollisionTileModelShape(bool isDetailCollision, unsigned int tileIdx, unsigned int modelIdx)
{
  return ?StaticModels_GetCollisionTileModelShape@@YAPEBX_NII@Z(isDetailCollision, tileIdx, modelIdx);
}

/*
==============
StaticModels_ForceSyncSetupRequests
==============
*/

void StaticModels_ForceSyncSetupRequests(void)
{
  ?StaticModels_ForceSyncSetupRequests@@YAXXZ();
}

/*
==============
StaticModels_RequestShutdownTile
==============
*/

void __fastcall StaticModels_RequestShutdownTile(const unsigned int collisionTileIdx)
{
  ?StaticModels_RequestShutdownTile@@YAXI@Z(collisionTileIdx);
}

/*
==============
StaticModels_RemoveCollisionTile
==============
*/

void __fastcall StaticModels_RemoveCollisionTile(const CollisionTile *collisionTile)
{
  ?StaticModels_RemoveCollisionTile@@YAXPEBUCollisionTile@@@Z(collisionTile);
}

/*
==============
StaticModels_InstantiateCollision
==============
*/

void __fastcall StaticModels_InstantiateCollision(const Physics_WorldId worldId)
{
  ?StaticModels_InstantiateCollision@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
StaticModels_RequestSetupTile
==============
*/

void __fastcall StaticModels_RequestSetupTile(const unsigned int collisionTileIdx)
{
  ?StaticModels_RequestSetupTile@@YAXI@Z(collisionTileIdx);
}

/*
==============
StaticModels_GetCollisionTileModelInstanceTransform
==============
*/

void __fastcall StaticModels_GetCollisionTileModelInstanceTransform(unsigned int tileIdx, unsigned int modelIdx, const unsigned int instanceIdx, vec3_t *origin, vec4_t *orientationAsQuat)
{
  ?StaticModels_GetCollisionTileModelInstanceTransform@@YAXIIIAEATvec3_t@@AEATvec4_t@@@Z(tileIdx, modelIdx, instanceIdx, origin, orientationAsQuat);
}

/*
==============
StaticModels_HasCollisionForWorld
==============
*/

bool __fastcall StaticModels_HasCollisionForWorld(const Physics_WorldId worldId)
{
  return ?StaticModels_HasCollisionForWorld@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
StaticModels_TransientZoneLoadedDB
==============
*/

void __fastcall StaticModels_TransientZoneLoadedDB(const unsigned int worldTransientIndex)
{
  ?StaticModels_TransientZoneLoadedDB@@YAXI@Z(worldTransientIndex);
}

/*
==============
StaticModels_RemoveClipMap
==============
*/

void __fastcall StaticModels_RemoveClipMap(const clipMap_t *clipMap)
{
  ?StaticModels_RemoveClipMap@@YAXPEBUclipMap_t@@@Z(clipMap);
}

/*
==============
StaticModels_CopyCollisionTile
==============
*/

void __fastcall StaticModels_CopyCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ?StaticModels_CopyCollisionTile@@YAXPEBUCollisionTile@@0@Z(from, to);
}

/*
==============
StaticModels_HasCollisionTileCollision
==============
*/

bool __fastcall StaticModels_HasCollisionTileCollision(const Physics_WorldId worldId, const unsigned int tileIndexX, const unsigned int tileIndexY)
{
  return ?StaticModels_HasCollisionTileCollision@@YA_NW4Physics_WorldId@@II@Z(worldId, tileIndexX, tileIndexY);
}

/*
==============
StaticModels_Shutdown
==============
*/

void StaticModels_Shutdown(void)
{
  ?StaticModels_Shutdown@@YAXXZ();
}

/*
==============
StaticModels_SetNumTilesToExpect
==============
*/

void __fastcall StaticModels_SetNumTilesToExpect(unsigned int numTiles)
{
  ?StaticModels_SetNumTilesToExpect@@YAXI@Z(numTiles);
}

/*
==============
StaticModels_MovedCollisionTile
==============
*/

void __fastcall StaticModels_MovedCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ?StaticModels_MovedCollisionTile@@YAXPEBUCollisionTile@@0@Z(from, to);
}

/*
==============
StaticModels_MyChangesSaveAndShutdown
==============
*/

void StaticModels_MyChangesSaveAndShutdown(void)
{
  ?StaticModels_MyChangesSaveAndShutdown@@YAXXZ();
}

/*
==============
StaticModels_Write
==============
*/

void __fastcall StaticModels_Write(MemoryFile *memFile)
{
  ?StaticModels_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
StaticModels_GetShapeForLoad
==============
*/

const hknpShape *__fastcall StaticModels_GetShapeForLoad(const Physics_WorldId worldId, const unsigned int instanceId)
{
  return ?StaticModels_GetShapeForLoad@@YAPEBVhknpShape@@W4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
StaticModels_CheckTransientBudgets
==============
*/

void __fastcall StaticModels_CheckTransientBudgets(const LocalClientNum_t localClientNum)
{
  ?StaticModels_CheckTransientBudgets@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
StaticModels_AddClipMap
==============
*/

void __fastcall StaticModels_AddClipMap(const clipMap_t *clipMap)
{
  ?StaticModels_AddClipMap@@YAXPEBUclipMap_t@@@Z(clipMap);
}

/*
==============
StaticModels_TransientZoneUnloadingDB
==============
*/

void __fastcall StaticModels_TransientZoneUnloadingDB(const unsigned int worldTransientIndex)
{
  ?StaticModels_TransientZoneUnloadingDB@@YAXI@Z(worldTransientIndex);
}

/*
==============
StaticModels_ShutdownCollision
==============
*/

void __fastcall StaticModels_ShutdownCollision(const Physics_WorldId worldId)
{
  ?StaticModels_ShutdownCollision@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
StaticModels_GetCollisionTileModelShapeTag
==============
*/

unsigned __int16 __fastcall StaticModels_GetCollisionTileModelShapeTag(bool isDetailCollision, unsigned int tileIdx, unsigned int modelIdx)
{
  return ?StaticModels_GetCollisionTileModelShapeTag@@YAG_NII@Z(isDetailCollision, tileIdx, modelIdx);
}

/*
==============
StaticModels_TransientZoneUnloadingMain
==============
*/

void __fastcall StaticModels_TransientZoneUnloadingMain(const unsigned int worldTransientIndex, const bool fullUnload)
{
  ?StaticModels_TransientZoneUnloadingMain@@YAXI_N@Z(worldTransientIndex, fullUnload);
}

/*
==============
StaticModels_SetupTileCollision
==============
*/

void __fastcall StaticModels_SetupTileCollision(const Physics_WorldId worldId)
{
  ?StaticModels_SetupTileCollision@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
StaticModels_HasCollisionTileShapeData
==============
*/

bool __fastcall StaticModels_HasCollisionTileShapeData(const unsigned int tileIndexX, const unsigned int tileIndexY)
{
  return ?StaticModels_HasCollisionTileShapeData@@YA_NII@Z(tileIndexX, tileIndexY);
}

/*
==============
StaticModels_MyChangesInitAndLoad
==============
*/

void StaticModels_MyChangesInitAndLoad(void)
{
  ?StaticModels_MyChangesInitAndLoad@@YAXXZ();
}

/*
==============
StaticModels_HasCollision
==============
*/

bool __fastcall StaticModels_HasCollision()
{
  return ?StaticModels_HasCollision@@YA_NXZ();
}

/*
==============
StaticModels_TransientZoneLoadedMain
==============
*/

void __fastcall StaticModels_TransientZoneLoadedMain(const unsigned int worldTransientIndex)
{
  ?StaticModels_TransientZoneLoadedMain@@YAXI@Z(worldTransientIndex);
}

/*
==============
StaticModels_GetCollisionTileModelInstanceScale
==============
*/

double __fastcall StaticModels_GetCollisionTileModelInstanceScale(unsigned int tileIdx, unsigned int modelIdx, const unsigned int instanceIdx)
{
  double result; 

  *(float *)&result = ?StaticModels_GetCollisionTileModelInstanceScale@@YAMIII@Z(tileIdx, modelIdx, instanceIdx);
  return result;
}

/*
==============
StaticModels_CreateClipmapShape
==============
*/

hknpShape *__fastcall StaticModels_CreateClipmapShape(hkArray<hknpShapeInstance,hkContainerHeapAllocator> *instanceArray)
{
  return ?StaticModels_CreateClipmapShape@@YAPEAVhknpShape@@PEAV?$hkArray@UhknpShapeInstance@@UhkContainerHeapAllocator@@@@@Z(instanceArray);
}

/*
==============
StaticModels_IsCollisionReadyAt
==============
*/

bool __fastcall StaticModels_IsCollisionReadyAt(const Physics_WorldId worldId, const vec2_t *position)
{
  return ?StaticModels_IsCollisionReadyAt@@YA_NW4Physics_WorldId@@AEBTvec2_t@@@Z(worldId, position);
}

/*
==============
StaticModels_SwapCollisionTile
==============
*/

void __fastcall StaticModels_SwapCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ?StaticModels_SwapCollisionTile@@YAXPEBUCollisionTile@@0@Z(from, to);
}

/*
==============
StaticModels_AddCollisionTile
==============
*/

void __fastcall StaticModels_AddCollisionTile(const CollisionTile *collisionTile)
{
  ?StaticModels_AddCollisionTile@@YAXPEBUCollisionTile@@@Z(collisionTile);
}

/*
==============
StaticModels_IsTileSetup
==============
*/

bool __fastcall StaticModels_IsTileSetup(const unsigned int collisionTileIdx)
{
  return ?StaticModels_IsTileSetup@@YA_NI@Z(collisionTileIdx);
}

/*
==============
StaticModels_HasClipmapZoneShapeData
==============
*/

bool __fastcall StaticModels_HasClipmapZoneShapeData(const unsigned int worldTransientIndex)
{
  return ?StaticModels_HasClipmapZoneShapeData@@YA_NI@Z(worldTransientIndex);
}

/*
==============
StaticModels_CreateCollisionTileShape
==============
*/

hknpShape *__fastcall StaticModels_CreateCollisionTileShape(hkArray<StaticModels_HavokShapeInstance,hkContainerHeapAllocator> *instanceArray, unsigned __int8 *gridId, StaticModelCollisionCompressedModelShapeType shapeType, const char *shapeTypeName)
{
  return ?StaticModels_CreateCollisionTileShape@@YAPEAVhknpShape@@PEAV?$hkArray@UStaticModels_HavokShapeInstance@@UhkContainerHeapAllocator@@@@QEAEW4StaticModelCollisionCompressedModelShapeType@@PEBD@Z(instanceArray, gridId, shapeType, shapeTypeName);
}

/*
==============
StaticModels_MovingCollisionTile
==============
*/

void __fastcall StaticModels_MovingCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ?StaticModels_MovingCollisionTile@@YAXPEBUCollisionTile@@0@Z(from, to);
}

/*
==============
StaticModels_Init
==============
*/

void StaticModels_Init(void)
{
  ?StaticModels_Init@@YAXXZ();
}

/*
==============
StaticModels_HasClipmapZoneCollision
==============
*/

bool __fastcall StaticModels_HasClipmapZoneCollision(const Physics_WorldId worldId, const unsigned int worldTransientIndex)
{
  return ?StaticModels_HasClipmapZoneCollision@@YA_NW4Physics_WorldId@@I@Z(worldId, worldTransientIndex);
}

/*
==============
StaticModels_AddClipMap
==============
*/
void StaticModels_AddClipMap(const clipMap_t *clipMap)
{
  StaticModels_CreateClipmapShapes(0);
}

/*
==============
StaticModels_AddCollisionTile
==============
*/
void StaticModels_AddCollisionTile(const CollisionTile *collisionTile)
{
  unsigned int index; 
  unsigned __int8 v3; 
  unsigned __int8 v4; 
  const CollisionTile *v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1262, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  index = collisionTile->index;
  if ( index != 1024 )
  {
    if ( index >= 0x400 )
    {
      LODWORD(v7) = 1024;
      LODWORD(v6) = collisionTile->index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1267, ASSERT_TYPE_ASSERT, "(unsigned)( collisionTile->index ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "collisionTile->index doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v3 = collisionTile->gridId[0];
    if ( v3 >= 0x20u )
    {
      LODWORD(v7) = 32;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1268, ASSERT_TYPE_ASSERT, "(unsigned)( collisionTile->gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "collisionTile->gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v4 = collisionTile->gridId[1];
    if ( v4 >= 0x20u )
    {
      LODWORD(v7) = 32;
      LODWORD(v6) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1269, ASSERT_TYPE_ASSERT, "(unsigned)( collisionTile->gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "collisionTile->gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v5 = g_staticModels_CollisionTiles[collisionTile->index];
    if ( v5 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1272, ASSERT_TYPE_ASSERT, "( g_staticModels_CollisionTiles[collisionTile->index] ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_staticModels_CollisionTiles[collisionTile->index]", "nullptr", v5, NULL) )
        __debugbreak();
    }
    g_staticModels_CollisionTiles[collisionTile->index] = collisionTile;
    StaticModels_CacheDataForCollisionTile((CollisionTile *)collisionTile);
    StaticModels_CreateCollisionTileShapes(collisionTile);
  }
}

/*
==============
StaticModels_CacheDataForCollisionTile
==============
*/
void StaticModels_CacheDataForCollisionTile(CollisionTile *collisionTile)
{
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  const char *v3; 
  int ZoneIndexFromName; 
  unsigned int i; 
  __int64 v6; 
  const PhysicsAsset *physicsAsset; 
  const XModelDetailCollision *modelDetailCollision; 
  const hknpShape *PhysicsAssetShape; 
  const hknpShape *DetailCollisionShape; 
  unsigned __int16 DetailCollisionShapeTag; 
  __int64 v12; 
  __int64 v13; 
  char outName[64]; 

  staticModelCollision = collisionTile->staticModelCollision;
  if ( staticModelCollision && staticModelCollision->numModels )
  {
    v3 = j_va("StaticModels_CacheDataForCollisionTile-Tile%i-Grid(%i-%i)", collisionTile->index, collisionTile->gridId[0], collisionTile->gridId[1]);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, v3);
    CL_TransientsCollisionMP_GetZoneName(collisionTile->index, outName);
    ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(outName);
    DB_LockTableForRead();
    for ( i = 0; i < staticModelCollision->numModels; *(_WORD *)(v6 + 42) = DetailCollisionShapeTag )
    {
      v6 = (__int64)&staticModelCollision->models[i];
      physicsAsset = *(const PhysicsAsset **)(v6 + 8);
      modelDetailCollision = *(const XModelDetailCollision **)(v6 + 16);
      if ( physicsAsset && DB_IsXAssetTransient(ASSET_TYPE_PHYSICSASSET, physicsAsset->name) )
        physicsAsset = DB_GetXAssetHeaderZoneSpecificNonLocking(ASSET_TYPE_PHYSICSASSET, physicsAsset->name, ZoneIndexFromName).physicsAsset;
      if ( modelDetailCollision && DB_IsXAssetTransient(ASSET_TYPE_XMODEL_DETAIL_COLLISION, modelDetailCollision->name) )
        modelDetailCollision = DB_GetXAssetHeaderZoneSpecificNonLocking(ASSET_TYPE_XMODEL_DETAIL_COLLISION, modelDetailCollision->name, ZoneIndexFromName).modelDetailCollision;
      *(_QWORD *)(v6 + 24) = 0i64;
      if ( physicsAsset && Physics_GetPhysicsAssetBodyCount(physicsAsset) > 0 )
      {
        if ( Physics_GetPhysicsAssetBodyCount(physicsAsset) != 1 )
        {
          LODWORD(v13) = 1;
          LODWORD(v12) = Physics_GetPhysicsAssetBodyCount(physicsAsset);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 263, ASSERT_TYPE_ASSERT, "( Physics_GetPhysicsAssetBodyCount( physicsAsset ) ) == ( 1 )", "%s == %s\n\t%u, %u", "Physics_GetPhysicsAssetBodyCount( physicsAsset )", "1", v12, v13) )
            __debugbreak();
        }
        PhysicsAssetShape = Physics_GetPhysicsAssetShape(physicsAsset, 0);
        *(_QWORD *)(v6 + 24) = PhysicsAssetShape;
        if ( !PhysicsAssetShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 265, ASSERT_TYPE_ASSERT, "( model->shapes[STATICMODEL_COLLISION_COMPRESSEDMODEL_SHAPETYPE_SIMULATION] ) != ( nullptr )", "%s != %s\n\t%p, %p", "model->shapes[STATICMODEL_COLLISION_COMPRESSEDMODEL_SHAPETYPE_SIMULATION]", "nullptr", NULL, NULL) )
          __debugbreak();
        *(_WORD *)(v6 + 40) = Physics_GetPhysicsAssetShapeTag(physicsAsset, 0);
      }
      if ( modelDetailCollision && Physics_GetDetailCollisionShapeCount(modelDetailCollision) > 0 )
      {
        if ( Physics_GetDetailCollisionShapeCount(modelDetailCollision) != 1 )
        {
          LODWORD(v13) = 1;
          LODWORD(v12) = Physics_GetDetailCollisionShapeCount(modelDetailCollision);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 274, ASSERT_TYPE_ASSERT, "( Physics_GetDetailCollisionShapeCount( detailCol ) ) == ( 1 )", "%s == %s\n\t%u, %u", "Physics_GetDetailCollisionShapeCount( detailCol )", "1", v12, v13) )
            __debugbreak();
        }
        DetailCollisionShape = Physics_GetDetailCollisionShape(modelDetailCollision, 0);
        *(_QWORD *)(v6 + 32) = DetailCollisionShape;
        if ( !DetailCollisionShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 276, ASSERT_TYPE_ASSERT, "( model->shapes[STATICMODEL_COLLISION_COMPRESSEDMODEL_SHAPETYPE_DETAIL] ) != ( nullptr )", "%s != %s\n\t%p, %p", "model->shapes[STATICMODEL_COLLISION_COMPRESSEDMODEL_SHAPETYPE_DETAIL]", "nullptr", NULL, NULL) )
          __debugbreak();
        DetailCollisionShapeTag = Physics_GetDetailCollisionShapeTag(modelDetailCollision, 0);
      }
      else
      {
        *(_QWORD *)(v6 + 32) = *(_QWORD *)(v6 + 24);
        DetailCollisionShapeTag = *(_WORD *)(v6 + 40);
      }
      ++i;
    }
    DB_UnlockTableForRead();
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
StaticModels_CheckTransientBudgets
==============
*/
void StaticModels_CheckTransientBudgets(const LocalClientNum_t localClientNum)
{
  unsigned __int16 TileForPos; 
  const CollisionTile *v2; 
  unsigned int *p_numModels; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  const char *v7; 
  unsigned int v8; 
  const char *v9; 
  int value; 
  vec3_t outPos; 

  CL_GetViewPos(localClientNum, &outPos);
  TileForPos = CL_TransientCollisionMP_GetTileForPos(&outPos);
  if ( TileForPos < 0x400u )
  {
    v2 = g_staticModels_CollisionTiles[TileForPos];
    if ( v2 )
    {
      p_numModels = &v2->staticModelCollision->numModels;
      if ( p_numModels )
      {
        v4 = p_numModels[6];
        v5 = TileForPos;
        if ( v4 > 0x700000 )
        {
          v6 = v4 >> 10;
          value = 7168;
          v7 = j_va("Collision Tile %i static models are too memory expensive - %iKB for %i models, budget%iKB", TileForPos, v6, *p_numModels, value);
          StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_COLLISION_STATICMODELS_MEMORY, 3000, v7, v6);
        }
        v8 = p_numModels[5];
        if ( v8 > 0x2000 )
        {
          v9 = j_va("Collision Tile %i too many static model instances %i, budget %i", v5, v8, 0x2000i64);
          StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_COLLISION_STATICMODELS_INSTANCECOUNT, 3000, v9, v8);
        }
      }
    }
  }
}

/*
==============
StaticModels_CopyCollisionTile
==============
*/
void StaticModels_CopyCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ;
}

/*
==============
StaticModels_CreateClipmapShape
==============
*/

hknpShape *__fastcall StaticModels_CreateClipmapShape(hkArray<hknpShapeInstance,hkContainerHeapAllocator> *instanceArray)
{
  return Physics_CreateShapeCompound(instanceArray);
}

/*
==============
StaticModels_CreateClipmapShapes
==============
*/
void StaticModels_CreateClipmapShapes(const unsigned int staticModelZoneIdx)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  const char *v5; 
  const char *name; 
  signed __int64 v7; 
  int v8; 
  int v9; 
  int v11; 
  int v12; 
  int ZoneIndexFromWorldTransientIndex; 
  const char *ZoneNameFromIndex; 
  const char *v15; 
  int v16; 
  __int64 v17; 
  StaticModelCollisionModelList *v18; 
  __int64 v19; 
  __int64 v20; 
  const XModelDetailCollision *modelDetailCollision; 
  const PhysicsAsset *v22; 
  const char **v23; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int v29; 
  unsigned int v31; 
  unsigned int v33; 
  hkMemoryAllocator *v34; 
  __int64 v35; 
  hkRefPtr<hknpShape const > *p_m_shape; 
  hkMemoryAllocator *v37; 
  __int64 v38; 
  hkRefPtr<hknpShape const > *v39; 
  __int64 v40; 
  int v41; 
  hkArray<hknpShapeInstance,hkContainerHeapAllocator> v43; 
  int zoneIndex; 
  int v45; 
  hkArray<hknpShapeInstance,hkContainerHeapAllocator> instanceArray; 
  StaticModelCollisionModelList *staticModelCollisionModelLists; 
  __int64 v48; 
  __int64 v49; 
  const char *v50; 
  __int64 v51; 
  vec4_t quat; 

  v51 = -2i64;
  v1 = staticModelZoneIdx;
  if ( staticModelZoneIdx < cm.numStaticModelCollisionModelLists )
  {
    v2 = staticModelZoneIdx;
    v3 = 3i64 * staticModelZoneIdx;
    v49 = v3;
    staticModelCollisionModelLists = cm.staticModelCollisionModelLists;
    if ( cm.staticModelCollisionModelLists[staticModelZoneIdx].numModels )
    {
      v4 = 19i64;
      v5 = "maps/mp/mp_frontend";
      name = cm.name;
      if ( !cm.name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v7 = name - "maps/mp/mp_frontend";
      do
      {
        v8 = (unsigned __int8)v5[v7];
        v9 = *(unsigned __int8 *)v5++;
        if ( !v4-- )
          break;
        if ( v8 != v9 )
        {
          v11 = v8 + 32;
          if ( (unsigned int)(v8 - 65) > 0x19 )
            v11 = v8;
          v8 = v11;
          v12 = v9 + 32;
          if ( (unsigned int)(v9 - 65) > 0x19 )
            v12 = v9;
          if ( v8 != v12 )
          {
            ZoneIndexFromWorldTransientIndex = DB_Zones_GetZoneIndexFromWorldTransientIndex(v1);
            ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(ZoneIndexFromWorldTransientIndex);
            v50 = ZoneNameFromIndex;
            v15 = j_va("StaticModels_CreateClipmapShapes-%s", ZoneNameFromIndex);
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, v15);
            zoneIndex = 0xFFFF;
            if ( (_DWORD)v1 )
            {
              zoneIndex = ZoneIndexFromWorldTransientIndex;
              DB_LockTableForRead();
            }
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Collect Shape Instances");
            v16 = 0;
            v41 = 0;
            instanceArray.m_data = NULL;
            instanceArray.m_size = 0;
            instanceArray.m_capacityAndFlags = 0x80000000;
            v43.m_data = NULL;
            v43.m_size = 0;
            v43.m_capacityAndFlags = 0x80000000;
            v17 = 0i64;
            v45 = 0;
            v18 = staticModelCollisionModelLists;
            if ( staticModelCollisionModelLists[v1].numModels )
            {
              do
              {
                v19 = 5 * v17;
                v20 = *((_QWORD *)&v18->models + v3);
                v48 = v20;
                modelDetailCollision = NULL;
                v22 = *(const PhysicsAsset **)(v20 + 40 * v17 + 8);
                if ( (_DWORD)v1 )
                {
                  if ( v22 && DB_IsXAssetTransientNonLocking(ASSET_TYPE_PHYSICSASSET, v22->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 391, ASSERT_TYPE_ASSERT, "(!physicsAsset || !DB_IsXAssetTransientNonLocking( ASSET_TYPE_PHYSICSASSET, physicsAsset->name ))", (const char *)&queryFormat, "!physicsAsset || !DB_IsXAssetTransientNonLocking( ASSET_TYPE_PHYSICSASSET, physicsAsset->name )") )
                    __debugbreak();
                  v23 = *(const char ***)(v20 + 8 * v19 + 16);
                  if ( v23 )
                  {
                    if ( DB_IsXAssetTransient(ASSET_TYPE_XMODEL_DETAIL_COLLISION, *v23) )
                      modelDetailCollision = DB_GetXAssetHeaderZoneSpecificNonLocking(ASSET_TYPE_XMODEL_DETAIL_COLLISION, **(const char ***)(v20 + 8 * v19 + 16), zoneIndex).modelDetailCollision;
                    else
                      modelDetailCollision = *(const XModelDetailCollision **)(v20 + 8 * v19 + 16);
                  }
                }
                else
                {
                  modelDetailCollision = *(const XModelDetailCollision **)(v20 + 40 * v17 + 16);
                  if ( v22 && DB_IsXAssetTransientNonLocking(ASSET_TYPE_PHYSICSASSET, v22->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 381, ASSERT_TYPE_ASSERT, "(!physicsAsset || !DB_IsXAssetTransientNonLocking( ASSET_TYPE_PHYSICSASSET, physicsAsset->name ))", "%s\n\tStatic Model Physics Asset %s in clipmap must be non transient\n", "!physicsAsset || !DB_IsXAssetTransientNonLocking( ASSET_TYPE_PHYSICSASSET, physicsAsset->name )", v22->name) )
                    __debugbreak();
                  if ( modelDetailCollision && DB_IsXAssetTransientNonLocking(ASSET_TYPE_XMODEL_DETAIL_COLLISION, modelDetailCollision->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 382, ASSERT_TYPE_ASSERT, "(!detailCol || !DB_IsXAssetTransientNonLocking( ASSET_TYPE_XMODEL_DETAIL_COLLISION, detailCol->name ))", "%s\n\tStatic Model XModel Detail Collision %s in clipmap must be non transient\n", "!detailCol || !DB_IsXAssetTransientNonLocking( ASSET_TYPE_XMODEL_DETAIL_COLLISION, detailCol->name )", modelDetailCollision->name) )
                    __debugbreak();
                }
                v24 = *(_DWORD *)(v20 + 8 * v19 + 24);
                if ( v24 )
                {
                  v25 = 0i64;
                  v26 = v24;
                  do
                  {
                    _RSI = (const vec3_t *)(v25 + *(_QWORD *)(v20 + 8 * v19 + 32));
                    AnglesToQuat(_RSI + 1, &quat);
                    if ( v22 )
                    {
                      __asm { vmovss  xmm2, dword ptr [rsi+18h]; scale }
                      v29 = Physics_AddPhysicsAssetShapesToInstanceList(v22, _RSI, *(const float *)&_XMM2, &quat, &instanceArray);
                      v41 |= Physics_GetPhysicsAssetContents(v22);
                      StaticModels_Debug_AddSimulationShapeInstanceCount(staticModelZoneIdx, v29);
                    }
                    if ( modelDetailCollision )
                    {
                      __asm { vmovss  xmm2, dword ptr [rsi+18h]; scale }
                      v31 = Physics_AddDetailCollisionShapesToInstanceList(modelDetailCollision, _RSI, *(const float *)&_XMM2, &quat, &v43);
                      v16 = Physics_GetDetailCollisionContents(modelDetailCollision) | v41;
                      v41 = v16;
                      StaticModels_Debug_AddDetailShapeInstanceCount(staticModelZoneIdx, v31);
                    }
                    else if ( v22 )
                    {
                      __asm { vmovss  xmm2, dword ptr [rsi+18h]; scale }
                      v33 = Physics_AddPhysicsAssetShapesToInstanceList(v22, _RSI, *(const float *)&_XMM2, &quat, &v43);
                      v16 = Physics_GetPhysicsAssetContents(v22) | v41;
                      v41 = v16;
                      StaticModels_Debug_AddSimulationShapeInstanceCount(staticModelZoneIdx, v33);
                    }
                    else
                    {
                      v16 = v41;
                    }
                    v25 += 28i64;
                    --v26;
                    v20 = v48;
                  }
                  while ( v26 );
                  LODWORD(v1) = staticModelZoneIdx;
                  v3 = v49;
                }
                v17 = (unsigned int)(v45 + 1);
                v45 = v17;
                v18 = staticModelCollisionModelLists;
              }
              while ( (unsigned int)v17 < *(&staticModelCollisionModelLists->numModels + 2 * v3) );
              v2 = (unsigned int)v1;
              ZoneNameFromIndex = v50;
            }
            Sys_ProfEndNamedEvent();
            if ( (_DWORD)v1 )
              DB_UnlockTableForRead();
            if ( s_staticModels_SimulationShapes[v2] )
            {
              LODWORD(v40) = v1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 491, ASSERT_TYPE_ASSERT, "(s_staticModels_SimulationShapes[staticModelZoneIdx] == nullptr)", "%s\n\tStatic Model Sim Shape %i is not null (is %s) when loading %s", "s_staticModels_SimulationShapes[staticModelZoneIdx] == nullptr", v40, s_staticModels_ShapeNames[v2], ZoneNameFromIndex) )
                __debugbreak();
            }
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Make simulation shape");
            s_staticModels_SimulationShapes[v2] = Physics_CreateShapeCompound(&instanceArray);
            Sys_ProfEndNamedEvent();
            if ( s_staticModels_DetailShapes[v2] )
            {
              LODWORD(v40) = v1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 496, ASSERT_TYPE_ASSERT, "(s_staticModels_DetailShapes[staticModelZoneIdx] == nullptr)", "%s\n\tStatic Model Detail Shape %i is not null (is %s) when loading %s", "s_staticModels_DetailShapes[staticModelZoneIdx] == nullptr", v40, s_staticModels_ShapeNames[v2], ZoneNameFromIndex) )
                __debugbreak();
            }
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Make detail shape");
            s_staticModels_DetailShapes[v2] = Physics_CreateShapeCompound(&v43);
            Sys_ProfEndNamedEvent();
            s_staticModels_ShapeContents[v2] = v16;
            Core_strcpy(s_staticModels_ShapeNames[v2], 0x40ui64, ZoneNameFromIndex);
            Sys_ProfEndNamedEvent();
            v34 = hkMemHeapAllocator();
            v35 = v43.m_size - 1;
            if ( v43.m_size - 1 >= 0 )
            {
              p_m_shape = &v43.m_data[v35].m_shape;
              do
              {
                if ( p_m_shape->m_ptr )
                  hkReferencedObject::removeReference(&p_m_shape->m_ptr->hkReferencedObject);
                p_m_shape -= 14;
                --v35;
              }
              while ( v35 >= 0 );
            }
            v43.m_size = 0;
            if ( v43.m_capacityAndFlags >= 0 )
              hkMemoryAllocator::bufFree2(v34, v43.m_data, 112, v43.m_capacityAndFlags & 0x3FFFFFFF);
            v43.m_data = NULL;
            v43.m_capacityAndFlags = 0x80000000;
            v37 = hkMemHeapAllocator();
            v38 = instanceArray.m_size - 1;
            if ( instanceArray.m_size - 1 >= 0 )
            {
              v39 = &instanceArray.m_data[v38].m_shape;
              do
              {
                if ( v39->m_ptr )
                  hkReferencedObject::removeReference(&v39->m_ptr->hkReferencedObject);
                v39 -= 14;
                --v38;
              }
              while ( v38 >= 0 );
            }
            instanceArray.m_size = 0;
            if ( instanceArray.m_capacityAndFlags >= 0 )
              hkMemoryAllocator::bufFree2(v37, instanceArray.m_data, 112, instanceArray.m_capacityAndFlags & 0x3FFFFFFF);
            return;
          }
        }
      }
      while ( v8 );
    }
  }
}

/*
==============
StaticModels_CreateCollisionTileShape
==============
*/
hknpShape *StaticModels_CreateCollisionTileShape(hkArray<StaticModels_HavokShapeInstance,hkContainerHeapAllocator> *instanceArray, unsigned __int8 *gridId, StaticModelCollisionCompressedModelShapeType shapeType, const char *shapeTypeName)
{
  unsigned __int8 v5; 
  int m_size; 
  unsigned int v10; 
  unsigned int ThreadId; 
  hkMemoryRouter *Value; 
  StaticModels_HavokShape *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  StaticModels_HavokShapeCinfo cinfo; 

  v5 = shapeType;
  if ( !instanceArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 514, ASSERT_TYPE_ASSERT, "(instanceArray)", (const char *)&queryFormat, "instanceArray") )
    __debugbreak();
  m_size = instanceArray->m_size;
  if ( !m_size )
    return 0i64;
  if ( m_size > 0xFFFF )
  {
    Com_PrintWarning(20, "Too many static model instances in Collision Tile %i-%i-%s.  Disabling collision.\n", *gridId, gridId[1], shapeTypeName);
    return 0i64;
  }
  v10 = *gridId + 32 * gridId[1];
  if ( v10 >= 0x400 )
  {
    LODWORD(v16) = *gridId + 32 * gridId[1];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 532, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "tileIdx doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", v16, 1024) )
      __debugbreak();
  }
  StaticModels_HavokShapeCinfo::StaticModels_HavokShapeCinfo(&cinfo);
  cinfo.m_tileIdx = v10;
  cinfo.m_shapeType = v5;
  cinfo.m_instances = instanceArray->m_data;
  cinfo.m_numInstances = instanceArray->m_size;
  ThreadId = Physics_GetThreadId();
  Physics_SetThreadHeapAllocationMapLocal(ThreadId);
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v13 = (StaticModels_HavokShape *)Value->m_heap->blockAlloc(Value->m_heap, 240i64);
  if ( v13 )
  {
    StaticModels_HavokShape::StaticModels_HavokShape(v13, &cinfo);
    v15 = v14;
  }
  else
  {
    v15 = 0i64;
  }
  Physics_SetThreadHeapAllocationGeneral(ThreadId);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 548, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  return (hknpShape *)v15;
}

/*
==============
StaticModels_CreateCollisionTileShapes
==============
*/
void StaticModels_CreateCollisionTileShapes(const CollisionTile *collisionTile)
{
  const CollisionTile *v1; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  const char *v3; 
  int ZoneIndexFromName; 
  int v5; 
  unsigned int v6; 
  __int64 v7; 
  const PhysicsAsset *physicsAsset; 
  const XModelDetailCollision *modelDetailCollision; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int PhysicsAssetBodyCount; 
  unsigned int v14; 
  hkMemoryAllocator *v15; 
  int m_size; 
  StaticModels_HavokShapeInstance *v17; 
  int v18; 
  StaticModels_HavokShapeInstance *v19; 
  StaticModels_HavokShapeInstance *v20; 
  unsigned __int16 m_modelIdxAndFlags; 
  int PhysicsAssetContents; 
  unsigned int DetailCollisionShapeCount; 
  unsigned int v24; 
  hkMemoryAllocator *v25; 
  int v26; 
  StaticModels_HavokShapeInstance *v27; 
  int v28; 
  StaticModels_HavokShapeInstance *v29; 
  StaticModels_HavokShapeInstance *v30; 
  unsigned __int16 v31; 
  int DetailCollisionContents; 
  unsigned int v33; 
  unsigned int v34; 
  hkMemoryAllocator *v35; 
  int v36; 
  StaticModels_HavokShapeInstance *v37; 
  int v38; 
  StaticModels_HavokShapeInstance *v39; 
  StaticModels_HavokShapeInstance *v40; 
  unsigned __int16 v41; 
  __int64 v42; 
  hknpShape *v43; 
  __int64 v44; 
  hknpShape *v45; 
  unsigned int v46; 
  unsigned int v47; 
  const char *v48; 
  hkMemoryAllocator *v49; 
  hkMemoryAllocator *v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  unsigned __int8 gridId[4]; 
  int v56; 
  __int64 v57; 
  hkArray<StaticModels_HavokShapeInstance,hkContainerHeapAllocator> instanceArray; 
  hkArray<StaticModels_HavokShapeInstance,hkContainerHeapAllocator> array; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  StaticModelCollisionCompressedModelList *v64; 
  const CollisionTile *v65; 
  __int64 v66; 
  StaticModels_HavokShapeInstance *v67; 
  StaticModels_HavokShapeInstance *v68; 
  StaticModels_HavokShapeInstance *v69; 
  StaticModels_HavokShapeInstance *v70; 
  StaticModels_HavokShapeInstance *v71; 
  StaticModels_HavokShapeInstance *v72; 
  char outName[64]; 

  v66 = -2i64;
  v1 = collisionTile;
  v65 = collisionTile;
  staticModelCollision = collisionTile->staticModelCollision;
  v64 = staticModelCollision;
  if ( staticModelCollision && staticModelCollision->numModels )
  {
    *(_WORD *)gridId = *(_WORD *)collisionTile->gridId;
    v3 = j_va("StaticModels_CreateCollisionTileShapes-Tile%i-Grid(%i-%i)", collisionTile->index, gridId[0], gridId[1]);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, v3);
    CL_TransientsCollisionMP_GetZoneName(v1->index, outName);
    ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(outName);
    v63 = ZoneIndexFromName;
    DB_LockTableForRead();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Collect Shape Instances");
    v5 = 0;
    v56 = 0;
    array.m_data = NULL;
    array.m_size = 0;
    array.m_capacityAndFlags = 0x80000000;
    instanceArray.m_data = NULL;
    instanceArray.m_size = 0;
    instanceArray.m_capacityAndFlags = 0x80000000;
    v6 = 0;
    if ( staticModelCollision->numModels )
    {
      while ( 1 )
      {
        v7 = (__int64)&staticModelCollision->models[v6];
        physicsAsset = *(const PhysicsAsset **)(v7 + 8);
        modelDetailCollision = *(const XModelDetailCollision **)(v7 + 16);
        if ( physicsAsset && DB_IsXAssetTransient(ASSET_TYPE_PHYSICSASSET, physicsAsset->name) )
          physicsAsset = DB_GetXAssetHeaderZoneSpecificNonLocking(ASSET_TYPE_PHYSICSASSET, physicsAsset->name, ZoneIndexFromName).physicsAsset;
        if ( modelDetailCollision && DB_IsXAssetTransient(ASSET_TYPE_XMODEL_DETAIL_COLLISION, modelDetailCollision->name) )
          modelDetailCollision = DB_GetXAssetHeaderZoneSpecificNonLocking(ASSET_TYPE_XMODEL_DETAIL_COLLISION, modelDetailCollision->name, ZoneIndexFromName).modelDetailCollision;
        v10 = *(_DWORD *)(v7 + 44);
        LODWORD(v57) = v10;
        v11 = 0;
        if ( v10 )
          break;
LABEL_67:
        ++v6;
        staticModelCollision = v64;
        if ( v6 >= v64->numModels )
        {
          v1 = v65;
          goto LABEL_69;
        }
      }
      v12 = 0i64;
      while ( 1 )
      {
        if ( physicsAsset )
        {
          PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
          v14 = PhysicsAssetBodyCount;
          if ( PhysicsAssetBodyCount > 1 )
          {
            LODWORD(v53) = 1;
            LODWORD(v52) = PhysicsAssetBodyCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 632, ASSERT_TYPE_ASSERT, "( numPhysicsInstances ) <= ( 1 )", "%s <= %s\n\t%u, %u", "numPhysicsInstances", "1", v52, v53) )
              __debugbreak();
          }
          if ( v14 == 1 )
          {
            v15 = hkMemHeapAllocator();
            m_size = array.m_size;
            if ( array.m_size == (array.m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v15, &array, 4);
              m_size = array.m_size;
            }
            v17 = &array.m_data[m_size];
            v67 = v17;
            v18 = 0;
            v60 = 0;
            do
            {
              v19 = &v17[v18];
              v68 = v19;
              if ( v19 )
                StaticModels_HavokShapeInstance::StaticModels_HavokShapeInstance(v19);
              v60 = ++v18;
            }
            while ( v18 < 1 );
            v20 = &array.m_data[array.m_size++];
            m_modelIdxAndFlags = v20->m_modelIdxAndFlags & 0xBFFF;
            v20->m_modelIdxAndFlags = m_modelIdxAndFlags;
            if ( v6 > 0xFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v6, "unsigned", v6) )
                __debugbreak();
              m_modelIdxAndFlags = v20->m_modelIdxAndFlags;
            }
            v20->m_modelIdxAndFlags = m_modelIdxAndFlags ^ (v6 ^ m_modelIdxAndFlags) & 0x3FFF;
            if ( v11 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v11, "unsigned", v12) )
              __debugbreak();
            v20->m_instanceIdx = v11;
            PhysicsAssetContents = Physics_GetPhysicsAssetContents(physicsAsset);
            v5 = PhysicsAssetContents | v56;
            v56 |= PhysicsAssetContents;
            StaticModels_Debug_AddTileSimulationShapeInstanceCount(gridId, 1u);
          }
          v10 = v57;
        }
        if ( modelDetailCollision )
          break;
        if ( physicsAsset )
        {
          v33 = Physics_GetPhysicsAssetBodyCount(physicsAsset);
          v34 = v33;
          if ( v33 > 1 )
          {
            LODWORD(v53) = 1;
            LODWORD(v52) = v33;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 688, ASSERT_TYPE_ASSERT, "( numPhysicsInstances ) <= ( 1 )", "%s <= %s\n\t%u, %u", "numPhysicsInstances", "1", v52, v53) )
              __debugbreak();
          }
          if ( v34 == 1 )
          {
            v35 = hkMemHeapAllocator();
            v36 = instanceArray.m_size;
            if ( instanceArray.m_size == (instanceArray.m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v35, &instanceArray, 4);
              v36 = instanceArray.m_size;
            }
            v37 = &instanceArray.m_data[v36];
            v71 = v37;
            v38 = 0;
            v62 = 0;
            do
            {
              v39 = &v37[v38];
              v72 = v39;
              if ( v39 )
                StaticModels_HavokShapeInstance::StaticModels_HavokShapeInstance(v39);
              v62 = ++v38;
            }
            while ( v38 < 1 );
            v40 = &instanceArray.m_data[instanceArray.m_size++];
            v40->m_modelIdxAndFlags &= ~0x4000u;
            v41 = truncate_cast<unsigned short,unsigned int>(v6);
            v40->m_modelIdxAndFlags &= 0xC000u;
            v40->m_modelIdxAndFlags |= v41 & 0x3FFF;
            v40->m_instanceIdx = truncate_cast<unsigned short,unsigned int>(v11);
            DetailCollisionContents = Physics_GetPhysicsAssetContents(physicsAsset);
LABEL_63:
            v5 = DetailCollisionContents | v56;
            v56 |= DetailCollisionContents;
            StaticModels_Debug_AddTileDetailShapeInstanceCount(gridId, 1u);
          }
LABEL_64:
          v10 = v57;
        }
        ++v11;
        ++v12;
        if ( v11 >= v10 )
        {
          ZoneIndexFromName = v63;
          goto LABEL_67;
        }
      }
      DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(modelDetailCollision);
      v24 = DetailCollisionShapeCount;
      if ( DetailCollisionShapeCount > 1 )
      {
        LODWORD(v53) = 1;
        LODWORD(v52) = DetailCollisionShapeCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 670, ASSERT_TYPE_ASSERT, "( numPhysicsInstances ) <= ( 1 )", "%s <= %s\n\t%u, %u", "numPhysicsInstances", "1", v52, v53) )
          __debugbreak();
      }
      if ( v24 == 1 )
      {
        v25 = hkMemHeapAllocator();
        v26 = instanceArray.m_size;
        if ( instanceArray.m_size == (instanceArray.m_capacityAndFlags & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v25, &instanceArray, 4);
          v26 = instanceArray.m_size;
        }
        v27 = &instanceArray.m_data[v26];
        v69 = v27;
        v28 = 0;
        v61 = 0;
        do
        {
          v29 = &v27[v28];
          v70 = v29;
          if ( v29 )
            StaticModels_HavokShapeInstance::StaticModels_HavokShapeInstance(v29);
          v61 = ++v28;
        }
        while ( v28 < 1 );
        v30 = &instanceArray.m_data[instanceArray.m_size++];
        v31 = v30->m_modelIdxAndFlags | 0x4000;
        v30->m_modelIdxAndFlags = v31;
        if ( v6 > 0xFFFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v6, "unsigned", v6) )
            __debugbreak();
          v31 = v30->m_modelIdxAndFlags;
        }
        v30->m_modelIdxAndFlags = v31 ^ (v31 ^ v6) & 0x3FFF;
        if ( v11 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v11, "unsigned", v12) )
          __debugbreak();
        v30->m_instanceIdx = v11;
        DetailCollisionContents = Physics_GetDetailCollisionContents(modelDetailCollision);
        goto LABEL_63;
      }
      goto LABEL_64;
    }
LABEL_69:
    Sys_ProfEndNamedEvent();
    DB_UnlockTableForRead();
    v42 = gridId[1] + 32i64 * gridId[0];
    if ( s_staticModels_TileSimulationShapes[0][v42] )
    {
      LODWORD(v54) = v1->index;
      LODWORD(v52) = gridId[1];
      LODWORD(v51) = gridId[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 715, ASSERT_TYPE_ASSERT, "(s_staticModels_TileSimulationShapes[gridId[0]][gridId[1]] == nullptr)", "%s\n\tStatic Model Tile Sim Shape %i-%i is not null (is %s) when loading tile %i", "s_staticModels_TileSimulationShapes[gridId[0]][gridId[1]] == nullptr", v51, v52, s_staticModels_TileShapeNames[0][v42], v54) )
        __debugbreak();
    }
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Make simulation shape");
    v43 = StaticModels_CreateCollisionTileShape(&array, gridId, STATICMODEL_COLLISION_COMPRESSEDMODEL_SHAPETYPE_SIMULATION, "Sim");
    s_staticModels_TileSimulationShapes[gridId[0]][gridId[1]] = v43;
    Sys_ProfEndNamedEvent();
    v44 = gridId[1] + 32i64 * gridId[0];
    if ( s_staticModels_TileDetailShapes[0][v44] )
    {
      LODWORD(v54) = v1->index;
      LODWORD(v52) = gridId[1];
      LODWORD(v51) = gridId[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 720, ASSERT_TYPE_ASSERT, "(s_staticModels_TileDetailShapes[gridId[0]][gridId[1]] == nullptr)", "%s\n\tStatic Model Tile Detail Shape %i-%i is not null (is %s) when loading tile %i", "s_staticModels_TileDetailShapes[gridId[0]][gridId[1]] == nullptr", v51, v52, s_staticModels_TileShapeNames[0][v44], v54) )
        __debugbreak();
    }
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Make detail shape");
    v45 = StaticModels_CreateCollisionTileShape(&instanceArray, gridId, STATICMODEL_COLLISION_COMPRESSEDMODEL_SHAPETYPE_DETAIL, "Detail");
    s_staticModels_TileDetailShapes[gridId[0]][gridId[1]] = v45;
    Sys_ProfEndNamedEvent();
    v46 = gridId[0];
    v47 = gridId[1];
    s_staticModels_TileShapeContents[gridId[0]][gridId[1]] = v5;
    v48 = j_va("Tile %i %i", v46, v47);
    Core_strcpy(s_staticModels_TileShapeNames[0][gridId[1] + 32i64 * gridId[0]], 0x40ui64, v48);
    Sys_ProfEndNamedEvent();
    v49 = hkMemHeapAllocator();
    instanceArray.m_size = 0;
    if ( instanceArray.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v49, instanceArray.m_data, 4, instanceArray.m_capacityAndFlags & 0x3FFFFFFF);
    instanceArray.m_data = NULL;
    instanceArray.m_capacityAndFlags = 0x80000000;
    v50 = hkMemHeapAllocator();
    array.m_size = 0;
    if ( array.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v50, array.m_data, 4, array.m_capacityAndFlags & 0x3FFFFFFF);
  }
}

/*
==============
StaticModels_DestroyClipmapShapes
==============
*/
void StaticModels_DestroyClipmapShapes(const unsigned int staticModelZoneIdx)
{
  __int64 v1; 
  char *v2; 

  v1 = staticModelZoneIdx;
  v2 = s_staticModels_ShapeNames[(unsigned __int64)staticModelZoneIdx];
  s_staticModels_ShapeContents[staticModelZoneIdx] = 0;
  *(_QWORD *)v2 = 0i64;
  *((_QWORD *)v2 + 1) = 0i64;
  *((_QWORD *)v2 + 2) = 0i64;
  *((_QWORD *)v2 + 3) = 0i64;
  *((_QWORD *)v2 + 4) = 0i64;
  *((_QWORD *)v2 + 5) = 0i64;
  *((_QWORD *)v2 + 6) = 0i64;
  *((_QWORD *)v2 + 7) = 0i64;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Release Detail shape");
  if ( s_staticModels_DetailShapes[v1] )
  {
    StaticModels_Debug_ResetSimulationShapeInstanceCount(v1);
    Physics_ReleaseShape(PHYSICS_WORLD_ID_INVALID, s_staticModels_DetailShapes[v1], 1);
    s_staticModels_DetailShapes[v1] = NULL;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Release Simulation shape");
  if ( s_staticModels_SimulationShapes[v1] )
  {
    StaticModels_Debug_ResetDetailShapeInstanceCount(v1);
    Physics_ReleaseShape(PHYSICS_WORLD_ID_INVALID, s_staticModels_SimulationShapes[v1], 1);
    s_staticModels_SimulationShapes[v1] = NULL;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
StaticModels_DestroyCollisionTileShapes
==============
*/
void StaticModels_DestroyCollisionTileShapes(const CollisionTile *collisionTile)
{
  unsigned int ThreadId; 
  char *v2; 
  __int16 gridId; 

  gridId = *(_WORD *)collisionTile->gridId;
  ThreadId = Physics_GetThreadId();
  v2 = s_staticModels_TileShapeNames[0][HIBYTE(gridId) + 32i64 * (unsigned __int8)gridId];
  s_staticModels_TileShapeContents[(unsigned __int8)gridId][HIBYTE(gridId)] = 0;
  *v2 = 0;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Release Detail shape");
  if ( s_staticModels_TileDetailShapes[(unsigned __int8)gridId][HIBYTE(gridId)] )
  {
    StaticModels_Debug_ResetTileSimulationShapeInstanceCount((const unsigned __int8 *)&gridId);
    Physics_SetThreadHeapAllocationMapLocal(ThreadId);
    Physics_ReleaseShape(PHYSICS_WORLD_ID_INVALID, s_staticModels_TileDetailShapes[(unsigned __int8)gridId][HIBYTE(gridId)], 1);
    Physics_SetThreadHeapAllocationGeneral(ThreadId);
    s_staticModels_TileDetailShapes[(unsigned __int8)gridId][HIBYTE(gridId)] = NULL;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Release Simulation shape");
  if ( s_staticModels_TileSimulationShapes[(unsigned __int8)gridId][HIBYTE(gridId)] )
  {
    StaticModels_Debug_ResetTileDetailShapeInstanceCount((const unsigned __int8 *)&gridId);
    Physics_SetThreadHeapAllocationMapLocal(ThreadId);
    Physics_ReleaseShape(PHYSICS_WORLD_ID_INVALID, s_staticModels_TileSimulationShapes[(unsigned __int8)gridId][HIBYTE(gridId)], 1);
    Physics_SetThreadHeapAllocationGeneral(ThreadId);
    s_staticModels_TileSimulationShapes[(unsigned __int8)gridId][HIBYTE(gridId)] = NULL;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
StaticModels_ForceSyncSetupRequests
==============
*/
void StaticModels_ForceSyncSetupRequests(void)
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
    v1 = s_staticModels_TileSetup;
    for ( i = 0; i <= 1; ++i )
    {
      if ( (unsigned int)i >= 8 )
      {
        LODWORD(v11) = 8;
        LODWORD(v10) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1551, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      v3 = 0;
      v4 = g_staticModels_CollisionTiles;
      v5 = 0i64;
      do
      {
        v6 = 0x80000000 >> (v3 & 0x1F);
        v7 = v5 >> 5;
        if ( (v6 & s_staticModels_TileSetupRequested.array[v7]) != 0 || (v6 & v1->array[v7]) == 0 )
        {
          if ( (v6 & s_staticModels_TileSetupRequested.array[v7]) != 0 && (v6 & v1->array[v7]) == 0 && *v4 )
          {
            StaticModels_InstantiateCollisionForCollisionTile((const Physics_WorldId)i, *v4);
            v1->array[v7] |= v6;
          }
        }
        else
        {
          if ( *v4 )
          {
            StaticModels_ShutdownCollisionForCollisionTile((const Physics_WorldId)i, *v4);
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1559, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
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
          StaticModels_SetupTileCollision(v9--);
        while ( v9 >= j - 2 );
      }
    }
    ++v0;
  }
}

/*
==============
StaticModels_GetCollisionTileModelInstanceScale
==============
*/
double StaticModels_GetCollisionTileModelInstanceScale(unsigned int tileIdx, unsigned int modelIdx, const unsigned int instanceIdx)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  const CollisionTile *v6; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 

  v3 = instanceIdx;
  v4 = modelIdx;
  v5 = tileIdx;
  if ( tileIdx >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1150, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "tileIdx doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", tileIdx, 1024) )
    __debugbreak();
  v6 = g_staticModels_CollisionTiles[v5];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1152, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  staticModelCollision = v6->staticModelCollision;
  if ( !staticModelCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1156, ASSERT_TYPE_ASSERT, "( tileModelList ) != ( nullptr )", "%s != %s\n\t%p, %p", "tileModelList", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( (unsigned int)v4 >= staticModelCollision->numModels )
  {
    LODWORD(v11) = staticModelCollision->numModels;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1159, ASSERT_TYPE_ASSERT, "(unsigned)( modelIdx ) < (unsigned)( tileModelList->numModels )", "modelIdx doesn't index tileModelList->numModels\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = (__int64)&staticModelCollision->models[v4];
  if ( (unsigned int)v3 >= *(_DWORD *)(v8 + 44) )
  {
    LODWORD(v11) = *(_DWORD *)(v8 + 44);
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1163, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIdx ) < (unsigned)( staticModel->numInstances )", "instanceIdx doesn't index staticModel->numInstances\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return FloatFromHalf(*(_WORD *)(*(_QWORD *)(v8 + 48) + 14 * v3 + 12));
}

/*
==============
StaticModels_GetCollisionTileModelInstanceTransform
==============
*/
void StaticModels_GetCollisionTileModelInstanceTransform(unsigned int tileIdx, unsigned int modelIdx, const unsigned int instanceIdx, vec3_t *origin, vec4_t *orientationAsQuat)
{
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  const CollisionTile *v9; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 v11; 
  const unsigned __int16 *v12; 
  __int64 v13; 
  __int64 v14; 
  vec3_t to; 

  v6 = instanceIdx;
  v7 = modelIdx;
  v8 = tileIdx;
  if ( tileIdx >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1175, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "tileIdx doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", tileIdx, 1024) )
    __debugbreak();
  v9 = g_staticModels_CollisionTiles[v8];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1177, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  staticModelCollision = v9->staticModelCollision;
  if ( !staticModelCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1181, ASSERT_TYPE_ASSERT, "( tileModelList ) != ( nullptr )", "%s != %s\n\t%p, %p", "tileModelList", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( (unsigned int)v7 >= staticModelCollision->numModels )
  {
    LODWORD(v14) = staticModelCollision->numModels;
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1184, ASSERT_TYPE_ASSERT, "(unsigned)( modelIdx ) < (unsigned)( tileModelList->numModels )", "modelIdx doesn't index tileModelList->numModels\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v11 = (__int64)&staticModelCollision->models[v7];
  if ( (unsigned int)v6 >= *(_DWORD *)(v11 + 44) )
  {
    LODWORD(v14) = *(_DWORD *)(v11 + 44);
    LODWORD(v13) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1188, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIdx ) < (unsigned)( staticModel->numInstances )", "instanceIdx doesn't index staticModel->numInstances\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v12 = (const unsigned __int16 *)(*(_QWORD *)(v11 + 48) + 14 * v6);
  FloatFromHalf3(v12, origin);
  FloatFromHalf3(v12 + 3, &to);
  AnglesToQuat(&to, orientationAsQuat);
}

/*
==============
StaticModels_GetCollisionTileModelShape
==============
*/
const void *StaticModels_GetCollisionTileModelShape(bool isDetailCollision, unsigned int tileIdx, unsigned int modelIdx)
{
  __int64 v3; 
  __int64 v5; 
  const CollisionTile *v6; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 

  v3 = modelIdx;
  v5 = tileIdx;
  if ( tileIdx >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1108, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "tileIdx doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", tileIdx, 1024) )
    __debugbreak();
  v6 = g_staticModels_CollisionTiles[v5];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1110, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  staticModelCollision = v6->staticModelCollision;
  if ( !staticModelCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1114, ASSERT_TYPE_ASSERT, "( tileModelList ) != ( nullptr )", "%s != %s\n\t%p, %p", "tileModelList", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( (unsigned int)v3 >= staticModelCollision->numModels )
  {
    LODWORD(v11) = staticModelCollision->numModels;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1117, ASSERT_TYPE_ASSERT, "(unsigned)( modelIdx ) < (unsigned)( tileModelList->numModels )", "modelIdx doesn't index tileModelList->numModels\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = (__int64)&staticModelCollision->models[v3];
  if ( isDetailCollision )
    return *(const void **)(v8 + 32);
  else
    return *(const void **)(v8 + 24);
}

/*
==============
StaticModels_GetCollisionTileModelShapeTag
==============
*/
__int64 StaticModels_GetCollisionTileModelShapeTag(bool isDetailCollision, unsigned int tileIdx, unsigned int modelIdx)
{
  __int64 v3; 
  __int64 v5; 
  const CollisionTile *v6; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 

  v3 = modelIdx;
  v5 = tileIdx;
  if ( tileIdx >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1129, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "tileIdx doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", tileIdx, 1024) )
    __debugbreak();
  v6 = g_staticModels_CollisionTiles[v5];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1131, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  staticModelCollision = v6->staticModelCollision;
  if ( !staticModelCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1135, ASSERT_TYPE_ASSERT, "( tileModelList ) != ( nullptr )", "%s != %s\n\t%p, %p", "tileModelList", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( (unsigned int)v3 >= staticModelCollision->numModels )
  {
    LODWORD(v11) = staticModelCollision->numModels;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1138, ASSERT_TYPE_ASSERT, "(unsigned)( modelIdx ) < (unsigned)( tileModelList->numModels )", "modelIdx doesn't index tileModelList->numModels\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = (__int64)&staticModelCollision->models[v3];
  if ( isDetailCollision )
    return *(unsigned __int16 *)(v8 + 42);
  else
    return *(unsigned __int16 *)(v8 + 40);
}

/*
==============
StaticModels_GetShapeForLoad
==============
*/
hknpShape *StaticModels_GetShapeForLoad(const Physics_WorldId worldId, const unsigned int instanceId)
{
  __int64 v2; 
  unsigned int v3; 
  bool IsDetailWorld; 
  unsigned int *v6; 
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  __int64 v10; 
  hknpShape *v11; 
  int v12; 

  v2 = worldId;
  v3 = 0;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1765, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", worldId, 0i64, 7) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1766, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  IsDetailWorld = Physics_IsDetailWorld((Physics_WorldId)v2);
  v6 = &s_staticModels_PhysicsInstances[0][v2];
  do
  {
    if ( *v6 == instanceId )
    {
      if ( IsDetailWorld )
        v11 = s_staticModels_DetailShapes[v3];
      else
        v11 = s_staticModels_SimulationShapes[v3];
      if ( !v11 )
      {
        v12 = 1782;
LABEL_28:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", v12, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
          __debugbreak();
      }
      return v11;
    }
    ++v3;
    v6 += 8;
  }
  while ( v3 < 0x20 );
  v7 = 0;
LABEL_11:
  v8 = 0;
  while ( s_staticModels_TilePhysicsInstances[v7][v8][v2] != instanceId )
  {
    if ( ++v8 >= 0x20u )
    {
      if ( ++v7 < 0x20u )
        goto LABEL_11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1808, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      return 0i64;
    }
  }
  v10 = v8 + 32i64 * v7;
  if ( IsDetailWorld )
    v11 = s_staticModels_TileDetailShapes[0][v10];
  else
    v11 = s_staticModels_TileSimulationShapes[0][v10];
  if ( !v11 )
  {
    v12 = 1800;
    goto LABEL_28;
  }
  return v11;
}

/*
==============
StaticModels_HasClipmapZoneCollision
==============
*/
bool StaticModels_HasClipmapZoneCollision(const Physics_WorldId worldId, const unsigned int worldTransientIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = worldId;
  v3 = worldTransientIndex;
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1033, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x20 )
  {
    LODWORD(v7) = 32;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1034, ASSERT_TYPE_ASSERT, "(unsigned)( worldTransientIndex ) < (unsigned)( STATICMODELS_MAX_ZONES )", "worldTransientIndex doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_staticModels_PhysicsInstances[v3][v2] != -1;
}

/*
==============
StaticModels_HasClipmapZoneShapeData
==============
*/
bool StaticModels_HasClipmapZoneShapeData(const unsigned int worldTransientIndex)
{
  __int64 v1; 
  int v4; 

  v1 = worldTransientIndex;
  if ( worldTransientIndex >= 0x20 )
  {
    v4 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1010, ASSERT_TYPE_ASSERT, "(unsigned)( worldTransientIndex ) < (unsigned)( STATICMODELS_MAX_ZONES )", "worldTransientIndex doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", worldTransientIndex, v4) )
      __debugbreak();
  }
  return s_staticModels_SimulationShapes[v1] || s_staticModels_DetailShapes[v1];
}

/*
==============
StaticModels_HasCollision
==============
*/
char StaticModels_HasCollision()
{
  int v0; 
  unsigned int (*v1)[8]; 
  __int64 v2; 
  bool v3; 
  unsigned int v4; 
  unsigned int (*v5)[8]; 
  unsigned __int8 v6; 
  unsigned __int8 v7; 
  __int64 v9; 
  __int64 v10; 

  v0 = 0;
  v1 = s_staticModels_PhysicsInstances;
  v2 = 0i64;
  v3 = 1;
LABEL_2:
  if ( !v3 )
  {
    LODWORD(v10) = 8;
    LODWORD(v9) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1202, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v4 = 0;
  v5 = v1;
  while ( *(_DWORD *)v5 == -1 )
  {
    ++v4;
    ++v5;
    if ( v4 >= 0x20 )
    {
      v6 = 0;
LABEL_9:
      v7 = 0;
      while ( s_staticModels_TilePhysicsInstances[v6][v7][v2] == -1 )
      {
        if ( ++v7 >= 0x20u )
        {
          if ( ++v6 < 0x20u )
            goto LABEL_9;
          ++v0;
          ++v2;
          v1 = (unsigned int (*)[8])((char *)v1 + 4);
          v3 = (unsigned int)v0 < 8;
          if ( v0 >= 8 )
            return 0;
          goto LABEL_2;
        }
      }
      return 1;
    }
  }
  return 1;
}

/*
==============
StaticModels_HasCollisionForWorld
==============
*/
char StaticModels_HasCollisionForWorld(const Physics_WorldId worldId)
{
  __int64 v1; 
  unsigned int v2; 
  unsigned int *v3; 
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  int v8; 

  v1 = worldId;
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1202, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, v8) )
      __debugbreak();
  }
  v2 = 0;
  v3 = &s_staticModels_PhysicsInstances[0][v1];
  while ( *v3 == -1 )
  {
    ++v2;
    v3 += 8;
    if ( v2 >= 0x20 )
    {
      v4 = 0;
LABEL_8:
      v5 = 0;
      while ( s_staticModels_TilePhysicsInstances[v4][v5][v1] == -1 )
      {
        if ( ++v5 >= 0x20u )
        {
          if ( ++v4 < 0x20u )
            goto LABEL_8;
          return 0;
        }
      }
      return 1;
    }
  }
  return 1;
}

/*
==============
StaticModels_HasCollisionTileCollision
==============
*/
bool StaticModels_HasCollisionTileCollision(const Physics_WorldId worldId, const unsigned int tileIndexX, const unsigned int tileIndexY)
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
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1044, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0x20 )
  {
    LODWORD(v9) = 32;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1045, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndexX ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "tileIndexX doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 0x20 )
  {
    LODWORD(v9) = 32;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1046, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndexY ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "tileIndexY doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return s_staticModels_TilePhysicsInstances[v5][v4][v3] != -1;
}

/*
==============
StaticModels_HasCollisionTileShapeData
==============
*/
bool StaticModels_HasCollisionTileShapeData(const unsigned int tileIndexX, const unsigned int tileIndexY)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = tileIndexY;
  v3 = tileIndexX;
  if ( tileIndexX >= 0x20 )
  {
    v8 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1021, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndexX ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "tileIndexX doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", tileIndexX, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 0x20 )
  {
    LODWORD(v7) = 32;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1022, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndexY ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "tileIndexY doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_staticModels_TileSimulationShapes[v3][v2] || s_staticModels_TileDetailShapes[v2];
}

/*
==============
StaticModels_Init
==============
*/
void StaticModels_Init(void)
{
  unsigned int *v0; 
  __int64 v1; 
  unsigned int *v2; 
  __int64 v3; 
  __int64 v4; 
  bitarray<1024> *v5; 
  __int64 i; 
  unsigned int *v7; 

  Dvar_BeginPermanentRegistration();
  DVARBOOL_staticModels_debugArchiveSummary = Dvar_RegisterBool("OSNMKTTOT", 0, 4u, "Debug Draw Static Model Summary");
  DVARBOOL_staticModels_debugArchiveSectionSummary = Dvar_RegisterBool("OPNLSMTKS", 0, 4u, "Debug Draw Static Model Section Summary");
  DVARBOOL_staticModels_debugArchiveFullDetails = Dvar_RegisterBool("NNMKLSTSSO", 0, 4u, "Debug Draw Static Model Full Details");
  DVARBOOL_staticModels_debugMemory = Dvar_RegisterBool("QONTSTPOQ", 0, 4u, "Debug Draw Static Model Memory");
  DVARBOOL_staticModels_debugInstances = Dvar_RegisterBool("LNTLSRMPR", 0, 4u, "Debug Draw Static Model Instances - big map only");
  DVARINT_staticModels_debugTileIdx = Dvar_RegisterInt("LQNOQNMLMQ", -1, -1, 1024, 4u, "Debug Draw Static Models - a selector for getting data from a specific tile");
  DVARINT_staticModels_debugDisplayOffsetX = Dvar_RegisterInt("MLKPTKNMNM", 0, -500, 500, 4u, "Move the StaticModels Debug Display in the X direction");
  DVARINT_staticModels_debugDisplayOffsetY = Dvar_RegisterInt("OLRSPMMQQP", 0, -45000, 500, 4u, "Move the StaticModels Debug Display in the Y direction");
  DVARBOOL_staticModels_debugDump = Dvar_RegisterBool("NKLOMPTPSR", 0, 4u, "Dump Static Model Debug Display to TTY");
  Dvar_EndPermanentRegistration();
  memset_0(g_staticModels_CollisionTiles, 0, sizeof(g_staticModels_CollisionTiles));
  memset_0(s_staticModels_SimulationShapes, 0, sizeof(s_staticModels_SimulationShapes));
  memset_0(s_staticModels_DetailShapes, 0, sizeof(s_staticModels_DetailShapes));
  memset_0(s_staticModels_ShapeContents, 0, sizeof(s_staticModels_ShapeContents));
  memset_0(s_staticModels_ShapeNames, 0, sizeof(s_staticModels_ShapeNames));
  v0 = &s_staticModels_PhysicsInstances[0][2];
  v1 = 32i64;
  do
  {
    *((_QWORD *)v0 - 1) = -1i64;
    *(_QWORD *)v0 = -1i64;
    *((_QWORD *)v0 + 1) = -1i64;
    *((_QWORD *)v0 + 2) = -1i64;
    v0 += 8;
    --v1;
  }
  while ( v1 );
  memset_0(s_staticModels_TileSimulationShapes, 0, sizeof(s_staticModels_TileSimulationShapes));
  memset_0(s_staticModels_TileDetailShapes, 0, sizeof(s_staticModels_TileDetailShapes));
  memset_0(s_staticModels_TileShapeContents, 0, sizeof(s_staticModels_TileShapeContents));
  memset_0(s_staticModels_TileShapeNames, 0, sizeof(s_staticModels_TileShapeNames));
  v2 = &s_staticModels_TilePhysicsInstances[0][0][2];
  v3 = 32i64;
  do
  {
    v4 = 32i64;
    do
    {
      *((_QWORD *)v2 - 1) = -1i64;
      *(_QWORD *)v2 = -1i64;
      *((_QWORD *)v2 + 1) = -1i64;
      *((_QWORD *)v2 + 2) = -1i64;
      v2 += 8;
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
  v5 = &s_staticModels_TileSetupRequested;
  for ( i = 32i64; i; --i )
  {
    v5->array[0] = 0;
    v5 = (bitarray<1024> *)((char *)v5 + 4);
  }
  v7 = &s_staticModels_TileSetup[0].array[2];
  do
  {
    *((_QWORD *)v7 - 1) = 0i64;
    *(_QWORD *)v7 = 0i64;
    *((_QWORD *)v7 + 1) = 0i64;
    *((_QWORD *)v7 + 2) = 0i64;
    *((_QWORD *)v7 + 3) = 0i64;
    *((_QWORD *)v7 + 4) = 0i64;
    *((_QWORD *)v7 + 5) = 0i64;
    *((_QWORD *)v7 + 6) = 0i64;
    *((_QWORD *)v7 + 7) = 0i64;
    *((_QWORD *)v7 + 8) = 0i64;
    *((_QWORD *)v7 + 9) = 0i64;
    *((_QWORD *)v7 + 10) = 0i64;
    *((_QWORD *)v7 + 11) = 0i64;
    *((_QWORD *)v7 + 12) = 0i64;
    *((_QWORD *)v7 + 13) = 0i64;
    *((_QWORD *)v7 + 14) = 0i64;
    v7 += 32;
  }
  while ( (__int64)v7 < (__int64)&unk_14EB20FF8 );
}

/*
==============
StaticModels_InstantiateCollision
==============
*/
void StaticModels_InstantiateCollision(const Physics_WorldId worldId)
{
  unsigned int v1; 
  __int64 v2; 
  unsigned int i; 
  const CollisionTile **v4; 
  unsigned __int64 v5; 
  unsigned int v6; 
  unsigned __int64 v7; 

  v1 = 0;
  v2 = worldId;
  for ( i = 0; i < 0x20; ++i )
    StaticModels_InstantiateCollisionForClipmapZone((const Physics_WorldId)v2, i);
  v4 = g_staticModels_CollisionTiles;
  v5 = 0i64;
  do
  {
    if ( *v4 )
    {
      v6 = 0x80000000 >> (v1 & 0x1F);
      v7 = v5 >> 5;
      if ( (v6 & s_staticModels_TileSetupRequested.array[v7]) != 0 )
      {
        StaticModels_InstantiateCollisionForCollisionTile((const Physics_WorldId)v2, *v4);
        s_staticModels_TileSetup[v2].array[v7] |= v6;
      }
    }
    ++v1;
    ++v5;
    ++v4;
  }
  while ( v1 < 0x400 );
}

/*
==============
StaticModels_InstantiateCollisionForClipmapZone
==============
*/
void StaticModels_InstantiateCollisionForClipmapZone(const Physics_WorldId worldId, const unsigned int staticModelZoneIdx)
{
  __int64 v2; 
  __int64 v3; 
  bool IsDetailWorld; 
  unsigned int *v5; 
  const hknpShape *v6; 
  const char *SPTransientName; 
  unsigned __int16 v8; 
  int Ref; 
  __int64 contents; 
  vec3_t *position; 
  char dest[256]; 

  v2 = worldId;
  v3 = staticModelZoneIdx;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 832, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", worldId, 0i64, 7) )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x20 )
  {
    LODWORD(position) = 32;
    LODWORD(contents) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 833, ASSERT_TYPE_ASSERT, "(unsigned)( staticModelZoneIdx ) < (unsigned)( STATICMODELS_MAX_ZONES )", "staticModelZoneIdx doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", contents, position) )
      __debugbreak();
  }
  IsDetailWorld = Physics_IsDetailWorld((Physics_WorldId)v2);
  v5 = &s_staticModels_PhysicsInstances[v3][v2];
  if ( *v5 == -1 )
  {
    if ( IsDetailWorld )
      v6 = s_staticModels_DetailShapes[v3];
    else
      v6 = s_staticModels_SimulationShapes[v3];
    if ( v6 )
    {
      SPTransientName = DB_Transients_GetSPTransientName(v3);
      Com_sprintf(dest, 0x100ui64, "staticmodel-zone%d-%s", (unsigned int)v3, SPTransientName);
      v8 = truncate_cast<unsigned short,unsigned int>(v3);
      Ref = Physics_MakeRef(Physics_RefSystem_WorldGeo, Physics_RelationshipSystem_None, 1u, v8);
      *v5 = Physics_InstantiateStaticBody((Physics_WorldId)v2, v6, Ref, dest, NULL, s_staticModels_ShapeContents[v3], &vec3_origin, &quat_identity, 1, 1, 0);
    }
  }
}

/*
==============
StaticModels_InstantiateCollisionForCollisionTile
==============
*/
void StaticModels_InstantiateCollisionForCollisionTile(const Physics_WorldId worldId, const CollisionTile *collisionTile)
{
  __int64 v2; 
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  bool IsDetailWorld; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  const hknpShape *v10; 
  unsigned int v11; 
  unsigned __int16 v12; 
  int Ref; 
  char *fmt; 
  __int64 contents; 
  vec3_t *position; 
  char dest[256]; 

  v2 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 869, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", worldId, 0i64, 7) )
    __debugbreak();
  if ( !collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 870, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  v4 = collisionTile->gridId[0];
  if ( v4 >= 0x20u )
  {
    LODWORD(position) = 32;
    LODWORD(contents) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 874, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", contents, position) )
      __debugbreak();
  }
  v5 = collisionTile->gridId[1];
  if ( v5 >= 0x20u )
  {
    LODWORD(position) = 32;
    LODWORD(contents) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 875, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", contents, position) )
      __debugbreak();
  }
  IsDetailWorld = Physics_IsDetailWorld((Physics_WorldId)v2);
  v7 = collisionTile->gridId[0];
  v8 = collisionTile->gridId[1];
  v9 = v8 + 32i64 * collisionTile->gridId[0];
  if ( s_staticModels_TilePhysicsInstances[0][v9][v2] == -1 )
  {
    v10 = IsDetailWorld ? s_staticModels_TileDetailShapes[0][v9] : s_staticModels_TileSimulationShapes[0][v9];
    if ( v10 )
    {
      v11 = v7 + 32 * v8;
      if ( v11 >= 0x400 )
      {
        LODWORD(position) = 1024;
        LODWORD(contents) = v7 + 32 * v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 895, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "tileIdx doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", contents, position) )
          __debugbreak();
      }
      LODWORD(contents) = collisionTile->gridId[1];
      LODWORD(fmt) = collisionTile->gridId[0];
      Com_sprintf(dest, 0x100ui64, "staticmodel-tile%d-grid%d,%d", v11, fmt, contents);
      v12 = truncate_cast<unsigned short,unsigned int>(v11 + 32);
      Ref = Physics_MakeRef(Physics_RefSystem_WorldGeo, Physics_RelationshipSystem_None, 1u, v12);
      s_staticModels_TilePhysicsInstances[collisionTile->gridId[0]][collisionTile->gridId[1]][v2] = Physics_InstantiateStaticBody((Physics_WorldId)v2, v10, Ref, dest, NULL, s_staticModels_TileShapeContents[collisionTile->gridId[0]][collisionTile->gridId[1]], &collisionTile->origin, &quat_identity, 1, 1, 0);
    }
  }
}

/*
==============
StaticModels_IsCollisionReadyAt
==============
*/
char StaticModels_IsCollisionReadyAt(const Physics_WorldId worldId, const vec2_t *position)
{
  __int64 v2; 
  int v17; 
  int v18; 
  const CollisionTile *v19; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  int v23; 

  v2 = worldId;
  _RDI = position;
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1056, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, 8) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
  {
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1057, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ))", (const char *)&queryFormat, "!IS_NAN( position[0] ) && !IS_NAN( position[1] )") )
      __debugbreak();
  }
  if ( !s_staticModels_NumTilesToExpect )
    return s_staticModels_PhysicsInstances[0][v2] != -1;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm2, cs:__real@c8000000
    vmovss  xmm3, cs:__real@39000000
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm0, xmm1, xmm3
    vcvttss2si eax, xmm0
  }
  if ( (unsigned __int16)_EAX > 0x1Fu )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm2, xmm1, xmm3
    vcvttss2si ecx, xmm2
  }
  if ( (unsigned __int16)_ECX > 0x1Fu )
    return 0;
  v17 = (__int16)_EAX;
  v18 = (__int16)_ECX;
  v19 = g_staticModels_CollisionTiles[(__int16)_EAX + 32 * (__int16)_ECX];
  if ( !v19 )
    return 0;
  if ( !v19->staticModelCollision->numModels )
    return 1;
  if ( (unsigned int)v2 >= 8 )
  {
    LODWORD(v21) = 8;
    LODWORD(v20) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1044, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  return s_staticModels_TilePhysicsInstances[v17][v18][v2] != -1;
}

/*
==============
StaticModels_IsTileSetup
==============
*/
__int64 StaticModels_IsTileSetup(const unsigned int collisionTileIdx)
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
    v6 = &s_staticModels_TileSetup[0].array[(unsigned __int64)(unsigned int)v1 >> 5];
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
      v13 = (unsigned int *)((char *)&s_staticModels_TileSetup[0].array[v1 >> 5] + v8);
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
StaticModels_Load
==============
*/
void StaticModels_Load(SaveGame *save)
{
  int i; 
  __int64 v3; 
  bool IsDetailWorld; 
  __int64 v5; 
  hknpShape *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  hknpShape *v10; 
  MemoryFile *p_memFile; 
  unsigned int (*v12)[8]; 
  __int64 v13; 
  unsigned int (*v14)[8]; 
  __int64 v15; 
  unsigned int (*v16)[32][8]; 
  __int64 v17; 
  __int64 v18; 
  unsigned int (*v19)[32][8]; 
  __int64 v20; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1686, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  for ( i = 0; i <= 1; ++i )
  {
    StaticModels_ShutdownCollision((const Physics_WorldId)i);
    v3 = 0i64;
    IsDetailWorld = Physics_IsDetailWorld((Physics_WorldId)i);
    v5 = 32i64;
    do
    {
      if ( IsDetailWorld )
        v6 = s_staticModels_DetailShapes[v3];
      else
        v6 = s_staticModels_SimulationShapes[v3];
      if ( v6 )
        Physics_AddShapeReference(v6);
      ++v3;
      --v5;
    }
    while ( v5 );
    v7 = 0i64;
    v8 = 32i64;
    do
    {
      v9 = 32i64;
      do
      {
        if ( IsDetailWorld )
          v10 = s_staticModels_TileDetailShapes[0][v7];
        else
          v10 = s_staticModels_TileSimulationShapes[0][v7];
        if ( v10 )
          Physics_AddShapeReference(v10);
        ++v7;
        --v9;
      }
      while ( v9 );
      --v8;
    }
    while ( v8 );
  }
  p_memFile = &save->memFile;
  v12 = s_staticModels_PhysicsInstances;
  v13 = 32i64;
  do
  {
    v14 = v12;
    v15 = 2i64;
    do
    {
      MemFile_ReadData(&save->memFile, 4ui64, v14);
      v14 = (unsigned int (*)[8])((char *)v14 + 4);
      --v15;
    }
    while ( v15 );
    ++v12;
    --v13;
  }
  while ( v13 );
  v16 = s_staticModels_TilePhysicsInstances;
  v17 = 32i64;
  do
  {
    v18 = 32i64;
    do
    {
      v19 = v16;
      v20 = 2i64;
      do
      {
        MemFile_ReadData(p_memFile, 4ui64, v19);
        v19 = (unsigned int (*)[32][8])((char *)v19 + 4);
        --v20;
      }
      while ( v20 );
      v16 = (unsigned int (*)[32][8])((char *)v16 + 32);
      --v18;
    }
    while ( v18 );
    --v17;
  }
  while ( v17 );
}

/*
==============
StaticModels_MovedCollisionTile
==============
*/
void StaticModels_MovedCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  unsigned int index; 
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  const CollisionTile *v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1349, ASSERT_TYPE_ASSERT, "( to ) != ( nullptr )", "%s != %s\n\t%p, %p", "to", "nullptr", NULL, NULL) )
    __debugbreak();
  index = to->index;
  if ( index != 1024 )
  {
    if ( index >= 0x400 )
    {
      LODWORD(v8) = 1024;
      LODWORD(v7) = to->index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1352, ASSERT_TYPE_ASSERT, "(unsigned)( to->index ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "to->index doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v4 = to->gridId[0];
    if ( v4 >= 0x20u )
    {
      LODWORD(v8) = 32;
      LODWORD(v7) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1353, ASSERT_TYPE_ASSERT, "(unsigned)( to->gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "to->gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v5 = to->gridId[1];
    if ( v5 >= 0x20u )
    {
      LODWORD(v8) = 32;
      LODWORD(v7) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1354, ASSERT_TYPE_ASSERT, "(unsigned)( to->gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "to->gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v6 = g_staticModels_CollisionTiles[to->index];
    if ( v6 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1357, ASSERT_TYPE_ASSERT, "( g_staticModels_CollisionTiles[to->index] ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_staticModels_CollisionTiles[to->index]", "nullptr", v6, NULL) )
        __debugbreak();
    }
    g_staticModels_CollisionTiles[to->index] = to;
  }
}

/*
==============
StaticModels_MovingCollisionTile
==============
*/
void StaticModels_MovingCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  __int64 index; 
  const CollisionTile *v5; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1332, ASSERT_TYPE_ASSERT, "( from ) != ( nullptr )", "%s != %s\n\t%p, %p", "from", "nullptr", NULL, NULL) )
    __debugbreak();
  index = from->index;
  if ( (_DWORD)index != 1024 )
  {
    v5 = g_staticModels_CollisionTiles[index];
    if ( v5 != from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1336, ASSERT_TYPE_ASSERT, "( g_staticModels_CollisionTiles[from->index] ) == ( from )", "%s == %s\n\t%p, %p", "g_staticModels_CollisionTiles[from->index]", "from", v5, from) )
      __debugbreak();
    g_staticModels_CollisionTiles[from->index] = NULL;
  }
  StaticModels_RemoveCollisionTile_Internal(to);
}

/*
==============
StaticModels_MyChangesInitAndLoad
==============
*/
void StaticModels_MyChangesInitAndLoad(void)
{
  LocalClientNum_t v0; 
  unsigned int i; 
  const CollisionTile **v2; 
  __int64 v3; 
  int j; 
  int k; 
  Physics_WorldId v6; 
  Physics_WorldId v7; 

  v0 = LOCAL_CLIENT_0;
  for ( i = 0; i < 0x20; ++i )
  {
    if ( !i || !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_OFFHAND_END|0x80) || CL_TransientsSP_IsGameSystemTransientLoaded(i) )
      StaticModels_CreateClipmapShapes(i);
  }
  v2 = g_staticModels_CollisionTiles;
  v3 = 1024i64;
  do
  {
    if ( *v2 )
      StaticModels_CreateCollisionTileShapes(*v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( Physics_AreServerWorldsCreated() )
  {
    for ( j = 0; j <= 1; ++j )
      StaticModels_InstantiateCollision((const Physics_WorldId)j);
  }
  for ( k = 2; k <= 5; k += 3 )
  {
    if ( Physics_AreClientWorldsCreated(v0) )
    {
      v6 = k + 2;
      v7 = k;
      if ( !__OFSUB__(k, v6) || k == v6 )
      {
        do
          StaticModels_InstantiateCollision(v7++);
        while ( v7 <= v6 );
      }
    }
    ++v0;
  }
}

/*
==============
StaticModels_MyChangesSaveAndShutdown
==============
*/
void StaticModels_MyChangesSaveAndShutdown(void)
{
  unsigned int v0; 
  int i; 
  LocalClientNum_t v2; 
  int j; 
  Physics_WorldId v4; 
  Physics_WorldId v5; 
  const CollisionTile **v6; 
  __int64 v7; 

  v0 = 0;
  if ( Physics_AreServerWorldsCreated() )
  {
    for ( i = 0; i <= 1; ++i )
      StaticModels_ShutdownCollision((const Physics_WorldId)i);
  }
  v2 = LOCAL_CLIENT_0;
  for ( j = 2; j <= 5; j += 3 )
  {
    if ( Physics_AreClientWorldsCreated(v2) )
    {
      v4 = j + 2;
      v5 = j;
      if ( !__OFSUB__(j, v4) || j == v4 )
      {
        do
          StaticModels_ShutdownCollision(v5++);
        while ( v5 <= v4 );
      }
    }
    ++v2;
  }
  do
    StaticModels_DestroyClipmapShapes(v0++);
  while ( v0 < 0x20 );
  v6 = g_staticModels_CollisionTiles;
  v7 = 1024i64;
  do
  {
    if ( *v6 )
      StaticModels_DestroyCollisionTileShapes(*v6);
    ++v6;
    --v7;
  }
  while ( v7 );
}

/*
==============
StaticModels_RemoveClipMap
==============
*/
void StaticModels_RemoveClipMap(const clipMap_t *clipMap)
{
  StaticModels_DestroyClipmapShapes(0);
}

/*
==============
StaticModels_RemoveCollisionTile
==============
*/
void StaticModels_RemoveCollisionTile(const CollisionTile *collisionTile)
{
  unsigned __int64 index; 
  __int64 v3; 

  if ( !collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1314, ASSERT_TYPE_ASSERT, "(collisionTile)", (const char *)&queryFormat, "collisionTile") )
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
    if ( ((0x80000000 >> (index & 0x1F)) & s_staticModels_TileSetupRequested.array[index >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1315, ASSERT_TYPE_ASSERT, "((collisionTile->index == COLLISION_TILE_MAX_TILES) || (!s_staticModels_TileSetupRequested.testBit( collisionTile->index )))", (const char *)&queryFormat, "(collisionTile->index == COLLISION_TILE_MAX_TILES) || (!s_staticModels_TileSetupRequested.testBit( collisionTile->index ))") )
      __debugbreak();
  }
  StaticModels_RemoveCollisionTile_Internal(collisionTile);
}

/*
==============
StaticModels_RemoveCollisionTile_Internal
==============
*/
void StaticModels_RemoveCollisionTile_Internal(const CollisionTile *collisionTile)
{
  __int64 index; 
  const CollisionTile *v3; 

  if ( !collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1288, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  index = collisionTile->index;
  if ( (_DWORD)index != 1024 )
  {
    v3 = g_staticModels_CollisionTiles[index];
    if ( v3 != collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1293, ASSERT_TYPE_ASSERT, "( g_staticModels_CollisionTiles[collisionTile->index] ) == ( collisionTile )", "%s == %s\n\t%p, %p", "g_staticModels_CollisionTiles[collisionTile->index]", "collisionTile", v3, collisionTile) )
      __debugbreak();
    StaticModels_DestroyCollisionTileShapes(collisionTile);
    g_staticModels_CollisionTiles[collisionTile->index] = NULL;
  }
}

/*
==============
StaticModels_RequestSetupTile
==============
*/
void StaticModels_RequestSetupTile(const unsigned int collisionTileIdx)
{
  unsigned __int64 v1; 
  int v3; 
  int v4; 
  int v5; 

  v1 = collisionTileIdx;
  if ( collisionTileIdx >= 0x400 )
  {
    v3 = 1024;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1498, ASSERT_TYPE_ASSERT, "(unsigned)( collisionTileIdx ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "collisionTileIdx doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", collisionTileIdx, v3) )
      __debugbreak();
    v5 = 1024;
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v4, v5) )
      __debugbreak();
  }
  s_staticModels_TileSetupRequested.array[v1 >> 5] |= 0x80000000 >> (v1 & 0x1F);
}

/*
==============
StaticModels_RequestShutdownTile
==============
*/
void StaticModels_RequestShutdownTile(const unsigned int collisionTileIdx)
{
  unsigned __int64 v1; 
  int v3; 
  int v4; 
  int v5; 

  v1 = collisionTileIdx;
  if ( collisionTileIdx >= 0x400 )
  {
    v3 = 1024;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1508, ASSERT_TYPE_ASSERT, "(unsigned)( collisionTileIdx ) < (unsigned)( COLLISION_TILE_MAX_TILES )", "collisionTileIdx doesn't index COLLISION_TILE_MAX_TILES\n\t%i not in [0, %i)", collisionTileIdx, v3) )
      __debugbreak();
    v5 = 1024;
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v4, v5) )
      __debugbreak();
  }
  s_staticModels_TileSetupRequested.array[v1 >> 5] &= ~(0x80000000 >> (v1 & 0x1F));
}

/*
==============
StaticModels_SetNumTilesToExpect
==============
*/
void StaticModels_SetNumTilesToExpect(unsigned int numTiles)
{
  s_staticModels_NumTilesToExpect = numTiles;
}

/*
==============
StaticModels_SetupTileCollision
==============
*/
void StaticModels_SetupTileCollision(const Physics_WorldId worldId)
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
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1551, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, 8) )
    __debugbreak();
  v2 = 0;
  v3 = g_staticModels_CollisionTiles;
  v4 = 0i64;
  do
  {
    v5 = 0x80000000 >> (v2 & 0x1F);
    v6 = v4 >> 5;
    if ( (v5 & s_staticModels_TileSetupRequested.array[v6]) != 0 || (v7 = &s_staticModels_TileSetup[v1], (v5 & v7->array[v6]) == 0) )
    {
      if ( (v5 & s_staticModels_TileSetupRequested.array[v6]) != 0 )
      {
        v8 = &s_staticModels_TileSetup[v1];
        if ( (v5 & v8->array[v6]) == 0 )
        {
          if ( *v3 )
          {
            StaticModels_InstantiateCollisionForCollisionTile((const Physics_WorldId)v1, *v3);
            v8->array[v6] |= v5;
          }
        }
      }
    }
    else
    {
      if ( *v3 )
      {
        StaticModels_ShutdownCollisionForCollisionTile((const Physics_WorldId)v1, *v3);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1559, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
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
StaticModels_Shutdown
==============
*/
void StaticModels_Shutdown(void)
{
  bitarray<1024> *v0; 
  unsigned int v1; 
  bitarray<1024> *v2; 
  __int64 v3; 
  unsigned int (*v4)[32][8]; 
  const void **v5; 
  __int64 v6; 
  const void **v7; 
  __int64 v8; 
  __int64 v9; 
  bool v10; 
  unsigned int (*v11)[8]; 
  __int64 v12; 
  __int64 v13; 
  hknpShape *v14; 
  hknpShape *v15; 
  const void **v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v0 = s_staticModels_TileSetup;
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
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 142, ASSERT_TYPE_ASSERT, "(!s_staticModels_TileSetup[worldId].anyBitsOn())", (const char *)&queryFormat, "!s_staticModels_TileSetup[worldId].anyBitsOn()") )
      __debugbreak();
LABEL_8:
    ++v0;
  }
  while ( (__int64)v0 < (__int64)&unk_14EB20FF0 );
  v3 = 0i64;
  v4 = s_staticModels_TilePhysicsInstances;
  v18 = 0i64;
  v19 = 32i64;
  do
  {
    v5 = (const void **)((char *)s_staticModels_TileSimulationShapes[0] + v3);
    v6 = 32i64;
    v7 = (const void **)((char *)s_staticModels_TileDetailShapes[0] + v3);
    do
    {
      v8 = 8i64;
      do
      {
        if ( *(_DWORD *)v4 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 151, ASSERT_TYPE_ASSERT, "(s_staticModels_TilePhysicsInstances[gridX][gridY][worldId] == 0xFFFFFFFF)", (const char *)&queryFormat, "s_staticModels_TilePhysicsInstances[gridX][gridY][worldId] == PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        v4 = (unsigned int (*)[32][8])((char *)v4 + 4);
        --v8;
      }
      while ( v8 );
      if ( *v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 153, ASSERT_TYPE_ASSERT, "( s_staticModels_TileDetailShapes[gridX][gridY] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_staticModels_TileDetailShapes[gridX][gridY]", "nullptr", *v7, NULL) )
        __debugbreak();
      if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 154, ASSERT_TYPE_ASSERT, "( s_staticModels_TileSimulationShapes[gridX][gridY] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_staticModels_TileSimulationShapes[gridX][gridY]", "nullptr", *v5, NULL) )
        __debugbreak();
      ++v7;
      ++v5;
      --v6;
    }
    while ( v6 );
    v9 = 32i64;
    v3 = v18 + 256;
    v10 = v19-- == 1;
    v18 += 256i64;
  }
  while ( !v10 );
  v11 = s_staticModels_PhysicsInstances;
  v12 = 0i64;
  do
  {
    v13 = 8i64;
    do
    {
      if ( *(_DWORD *)v11 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 161, ASSERT_TYPE_ASSERT, "(s_staticModels_PhysicsInstances[zoneIdx][worldId] == 0xFFFFFFFF)", (const char *)&queryFormat, "s_staticModels_PhysicsInstances[zoneIdx][worldId] == PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
      v11 = (unsigned int (*)[8])((char *)v11 + 4);
      --v13;
    }
    while ( v13 );
    v14 = s_staticModels_DetailShapes[v12];
    if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 163, ASSERT_TYPE_ASSERT, "( s_staticModels_DetailShapes[zoneIdx] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_staticModels_DetailShapes[zoneIdx]", "nullptr", v14, NULL) )
      __debugbreak();
    v15 = s_staticModels_SimulationShapes[v12];
    if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 164, ASSERT_TYPE_ASSERT, "( s_staticModels_SimulationShapes[zoneIdx] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_staticModels_SimulationShapes[zoneIdx]", "nullptr", v15, NULL) )
      __debugbreak();
    ++v12;
    --v9;
  }
  while ( v9 );
  v16 = (const void **)g_staticModels_CollisionTiles;
  v17 = 1024i64;
  do
  {
    if ( *v16 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 169, ASSERT_TYPE_ASSERT, "( g_staticModels_CollisionTiles[collisionTileIdx] ) == ( nullptr )", "%s == %s\n\t%p, %p", "g_staticModels_CollisionTiles[collisionTileIdx]", "nullptr", *v16, NULL) )
        __debugbreak();
    }
    ++v16;
    --v17;
  }
  while ( v17 );
}

/*
==============
StaticModels_ShutdownCollision
==============
*/
void StaticModels_ShutdownCollision(const Physics_WorldId worldId)
{
  __int64 v1; 
  const CollisionTile **v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int v5; 

  v1 = worldId;
  v2 = g_staticModels_CollisionTiles;
  v3 = 1024i64;
  do
  {
    if ( *v2 )
      StaticModels_ShutdownCollisionForCollisionTile((const Physics_WorldId)v1, *v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = v1;
  v5 = 0;
  *(_QWORD *)s_staticModels_TileSetup[v4].array = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[2] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[4] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[6] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[8] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[10] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[12] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[14] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[16] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[18] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[20] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[22] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[24] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[26] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[28] = 0i64;
  *(_QWORD *)&s_staticModels_TileSetup[v4].array[30] = 0i64;
  do
    StaticModels_ShutdownCollisionForClipmapZone((const Physics_WorldId)v1, v5++);
  while ( v5 < 0x20 );
}

/*
==============
StaticModels_ShutdownCollisionForClipmapZone
==============
*/
void StaticModels_ShutdownCollisionForClipmapZone(const Physics_WorldId worldId, const unsigned int staticModelZoneIdx)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int *v4; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = worldId;
  v3 = staticModelZoneIdx;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v8 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 916, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", worldId, 0i64, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x20 )
  {
    LODWORD(v7) = 32;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 917, ASSERT_TYPE_ASSERT, "(unsigned)( staticModelZoneIdx ) < (unsigned)( STATICMODELS_MAX_ZONES )", "staticModelZoneIdx doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  v4 = &s_staticModels_PhysicsInstances[v3][v2];
  if ( *v4 != -1 )
  {
    Physics_DestroyInstance((Physics_WorldId)v2, *v4, 0);
    *v4 = -1;
  }
}

/*
==============
StaticModels_ShutdownCollisionForCollisionTile
==============
*/
void StaticModels_ShutdownCollisionForCollisionTile(const Physics_WorldId worldId, const CollisionTile *collisionTile)
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
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 934, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", worldId, 0i64, 7) )
      __debugbreak();
    if ( (unsigned int)v2 > 7 )
    {
      LODWORD(v9) = 7;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 935, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
        __debugbreak();
    }
  }
  if ( !collisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 936, ASSERT_TYPE_ASSERT, "( collisionTile ) != ( nullptr )", "%s != %s\n\t%p, %p", "collisionTile", "nullptr", NULL, NULL) )
    __debugbreak();
  v4 = collisionTile->gridId[0];
  if ( v4 >= 0x20u )
  {
    LODWORD(v8) = 32;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 940, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = collisionTile->gridId[1];
  if ( v5 >= 0x20u )
  {
    LODWORD(v8) = 32;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 941, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v6 = s_staticModels_TilePhysicsInstances[collisionTile->gridId[0]][collisionTile->gridId[1]][v2];
  if ( v6 != -1 )
  {
    Physics_DestroyInstance((Physics_WorldId)v2, v6, 0);
    s_staticModels_TilePhysicsInstances[collisionTile->gridId[0]][collisionTile->gridId[1]][v2] = -1;
  }
}

/*
==============
StaticModels_SwapCollisionTile
==============
*/
void StaticModels_SwapCollisionTile(const CollisionTile *from, const CollisionTile *to)
{
  ;
}

/*
==============
StaticModels_TransientZoneLoadedDB
==============
*/
void StaticModels_TransientZoneLoadedDB(const unsigned int worldTransientIndex)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1374, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
}

/*
==============
StaticModels_TransientZoneLoadedMain
==============
*/
void StaticModels_TransientZoneLoadedMain(const unsigned int worldTransientIndex)
{
  __int64 v1; 
  LocalClientNum_t v2; 
  int i; 
  int j; 
  Physics_WorldId v5; 
  Physics_WorldId v6; 

  v1 = worldTransientIndex;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1409, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v1 < 0x20 )
  {
    if ( !s_staticModels_SimulationShapes[v1] && !s_staticModels_DetailShapes[v1] )
      StaticModels_CreateClipmapShapes(v1);
    v2 = LOCAL_CLIENT_0;
    if ( Physics_AreServerWorldsCreated() )
    {
      for ( i = 0; i <= 1; ++i )
        StaticModels_InstantiateCollisionForClipmapZone((const Physics_WorldId)i, v1);
    }
    for ( j = 2; j <= 5; j += 3 )
    {
      if ( Physics_AreClientWorldsCreated(v2) )
      {
        v5 = j + 2;
        v6 = j;
        if ( !__OFSUB__(j, v5) || j == v5 )
        {
          do
            StaticModels_InstantiateCollisionForClipmapZone(v6++, v1);
          while ( v6 <= v5 );
        }
      }
      ++v2;
    }
  }
}

/*
==============
StaticModels_TransientZoneUnloadingDB
==============
*/
void StaticModels_TransientZoneUnloadingDB(const unsigned int worldTransientIndex)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1392, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
}

/*
==============
StaticModels_TransientZoneUnloadingMain
==============
*/
void StaticModels_TransientZoneUnloadingMain(const unsigned int worldTransientIndex, const bool fullUnload)
{
  LocalClientNum_t v4; 
  int i; 
  Physics_WorldId v6; 
  int j; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1455, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( worldTransientIndex < 0x20 )
  {
    v4 = LOCAL_CLIENT_0;
    for ( i = 4; i <= 7; i += 3 )
    {
      if ( Physics_AreClientWorldsCreated(v4) )
      {
        v6 = i;
        if ( !__OFSUB__(i, i - 2) )
        {
          do
            StaticModels_ShutdownCollisionForClipmapZone(v6--, worldTransientIndex);
          while ( v6 >= i - 2 );
        }
      }
      ++v4;
    }
    for ( j = 1; j >= 0; --j )
      StaticModels_ShutdownCollisionForClipmapZone((const Physics_WorldId)j, worldTransientIndex);
    if ( fullUnload )
      StaticModels_DestroyClipmapShapes(worldTransientIndex);
  }
}

/*
==============
StaticModels_Write
==============
*/
void StaticModels_Write(MemoryFile *memFile)
{
  unsigned int (*v2)[8]; 
  __int64 v3; 
  unsigned int (*v4)[8]; 
  __int64 v5; 
  unsigned int (*v6)[32][8]; 
  __int64 v7; 
  __int64 v8; 
  unsigned int (*v9)[32][8]; 
  __int64 v10; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels.cpp", 1657, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v2 = s_staticModels_PhysicsInstances;
  v3 = 32i64;
  do
  {
    v4 = v2;
    v5 = 2i64;
    do
    {
      MemFile_WriteData(memFile, 4ui64, v4);
      v4 = (unsigned int (*)[8])((char *)v4 + 4);
      --v5;
    }
    while ( v5 );
    ++v2;
    --v3;
  }
  while ( v3 );
  v6 = s_staticModels_TilePhysicsInstances;
  v7 = 32i64;
  do
  {
    v8 = 32i64;
    do
    {
      v9 = v6;
      v10 = 2i64;
      do
      {
        MemFile_WriteData(memFile, 4ui64, v9);
        v9 = (unsigned int (*)[32][8])((char *)v9 + 4);
        --v10;
      }
      while ( v10 );
      v6 = (unsigned int (*)[32][8])((char *)v6 + 32);
      --v8;
    }
    while ( v8 );
    --v7;
  }
  while ( v7 );
}

