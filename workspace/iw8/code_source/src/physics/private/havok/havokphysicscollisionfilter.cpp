/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabled
==============
*/

bool __fastcall HavokPhysicsCollisionFilter::isCollisionEnabled(HavokPhysicsCollisionFilter *this, hknpCollisionQueryType::Enum queryType, unsigned __int8 layerIndex, unsigned __int64 userData)
{
  return ?isCollisionEnabled@HavokPhysicsCollisionFilter@@UEBA_NW4Enum@hknpCollisionQueryType@@E_K@Z(this, queryType, layerIndex, userData);
}

/*
==============
HavokPhysicsCollisionFilter::filterBodyPairs
==============
*/

int __fastcall HavokPhysicsCollisionFilter::filterBodyPairs(HavokPhysicsCollisionFilter *this, const hknpWorld *world, hknpBodyIdPair *pairs, int numPairs)
{
  return ?filterBodyPairs@HavokPhysicsCollisionFilter@@UEBAHAEBVhknpWorld@@PEAUhknpBodyIdPair@@H@Z(this, world, pairs, numPairs);
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabled
==============
*/

bool __fastcall HavokPhysicsCollisionFilter::isCollisionEnabled(HavokPhysicsCollisionFilter *this, hknpCollisionQueryType::Enum queryType, hknpBodyId bodyIdA, hknpBodyId bodyIdB)
{
  return ?isCollisionEnabled@HavokPhysicsCollisionFilter@@UEBA_NW4Enum@hknpCollisionQueryType@@UhknpBodyId@@1@Z(this, queryType, bodyIdA, bodyIdB);
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabled
==============
*/

bool __fastcall HavokPhysicsCollisionFilter::isCollisionEnabled(HavokPhysicsCollisionFilter *this, hknpCollisionQueryType::Enum queryType, const hknpQueryFilterData *queryFilterData, const hknpBody *body)
{
  return ?isCollisionEnabled@HavokPhysicsCollisionFilter@@UEBA_NW4Enum@hknpCollisionQueryType@@AEBUhknpQueryFilterData@@AEBVhknpBody@@@Z(this, queryType, queryFilterData, body);
}

/*
==============
HavokPhysicsCollisionFilter::refsMatch
==============
*/

bool __fastcall HavokPhysicsCollisionFilter::refsMatch(int ref1, int ref2)
{
  return ?refsMatch@HavokPhysicsCollisionFilter@@KA_NHH@Z(ref1, ref2);
}

/*
==============
Physics_VehicleVsTurret
==============
*/

bool __fastcall Physics_VehicleVsTurret(Physics_WorldId worldId, Physics_RefSystem refSystemA, Physics_RefSystem refSystemB, int refA, int refB)
{
  return ?Physics_VehicleVsTurret@@YA_NW4Physics_WorldId@@W4Physics_RefSystem@@1HH@Z(worldId, refSystemA, refSystemB, refA, refB);
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabledTrace
==============
*/

bool __fastcall HavokPhysicsCollisionFilter::isCollisionEnabledTrace(unsigned __int64 filterInfoA, unsigned __int64 filterInfoB)
{
  return ?isCollisionEnabledTrace@HavokPhysicsCollisionFilter@@KA_N_K0@Z(filterInfoA, filterInfoB);
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabled
==============
*/

bool __fastcall HavokPhysicsCollisionFilter::isCollisionEnabled(HavokPhysicsCollisionFilter *this, hknpCollisionQueryType::Enum queryType, bool targetShapeIsB, const hknpCollisionFilter::FilterInput *shapeInputA, const hknpCollisionFilter::FilterInput *shapeInputB)
{
  return ?isCollisionEnabled@HavokPhysicsCollisionFilter@@UEBA_NW4Enum@hknpCollisionQueryType@@_NAEBUFilterInput@hknpCollisionFilter@@2@Z(this, queryType, targetShapeIsB, shapeInputA, shapeInputB);
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabledSimulation
==============
*/

bool __fastcall HavokPhysicsCollisionFilter::isCollisionEnabledSimulation(unsigned __int64 filterInfoA, unsigned __int64 filterInfoB)
{
  return ?isCollisionEnabledSimulation@HavokPhysicsCollisionFilter@@KA_N_K0@Z(filterInfoA, filterInfoB);
}

/*
==============
HavokPhysicsCollisionFilter::HavokPhysicsCollisionFilter
==============
*/

void __fastcall HavokPhysicsCollisionFilter::HavokPhysicsCollisionFilter(HavokPhysicsCollisionFilter *this, Physics_WorldId worldId, HavokPhysicsCollisionFilter::CollisionFilterType type)
{
  ??0HavokPhysicsCollisionFilter@@QEAA@W4Physics_WorldId@@W4CollisionFilterType@0@@Z(this, worldId, type);
}

/*
==============
HavokPhysicsCollisionFilter::HavokPhysicsCollisionFilter
==============
*/
void HavokPhysicsCollisionFilter::HavokPhysicsCollisionFilter(HavokPhysicsCollisionFilter *this, Physics_WorldId worldId, HavokPhysicsCollisionFilter::CollisionFilterType type)
{
  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->m_type.m_storage = 6;
  this->__vftable = (HavokPhysicsCollisionFilter_vtbl *)&HavokPhysicsCollisionFilter::`vftable';
  this->m_worldId = worldId;
  this->m_cfType = type;
  this->m_lowLevelCollisionFns[0] = HavokPhysicsCollisionFilter::isCollisionEnabledTrace;
  this->m_lowLevelCollisionFns[1] = HavokPhysicsCollisionFilter::isCollisionEnabledSimulation;
}

/*
==============
Physics_CEntities_AIsParentOfB
==============
*/
bool Physics_CEntities_AIsParentOfB(LocalClientNum_t localClientNum, centity_t *entA, centity_t *entB)
{
  if ( !entA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 170, ASSERT_TYPE_ASSERT, "(entA)", (const char *)&queryFormat, "entA") )
    __debugbreak();
  if ( !entB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 171, ASSERT_TYPE_ASSERT, "(entB)", (const char *)&queryFormat, "entB") )
    __debugbreak();
  return CG_Entity_IsParentOfChild(localClientNum, entB, entA);
}

/*
==============
Physics_CEntities_Related
==============
*/
bool Physics_CEntities_Related(LocalClientNum_t localClientNum, int refA, int refB)
{
  int EntityNum; 
  centity_t *Entity; 
  int v8; 
  centity_t *v9; 
  centity_t *v10; 
  bool result; 

  if ( Physics_GetRefSystem(refA) != Physics_RefSystem_CEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 179, ASSERT_TYPE_ASSERT, "(Physics_GetRefSystem( refA ) == Physics_RefSystem_CEntities)", (const char *)&queryFormat, "Physics_GetRefSystem( refA ) == Physics_RefSystem_CEntities") )
    __debugbreak();
  if ( Physics_GetRefSystem(refB) != Physics_RefSystem_CEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 180, ASSERT_TYPE_ASSERT, "(Physics_GetRefSystem( refB ) == Physics_RefSystem_CEntities)", (const char *)&queryFormat, "Physics_GetRefSystem( refB ) == Physics_RefSystem_CEntities") )
    __debugbreak();
  EntityNum = Physics_GetEntityNum(refA);
  Entity = CG_GetEntity(localClientNum, EntityNum);
  v8 = Physics_GetEntityNum(refB);
  v9 = CG_GetEntity(localClientNum, v8);
  v10 = v9;
  if ( (!Entity || !v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 185, ASSERT_TYPE_ASSERT, "(entA != 0 && entB != 0)", (const char *)&queryFormat, "entA != NULL && entB != NULL") )
    __debugbreak();
  if ( Physics_CEntities_AIsParentOfB(localClientNum, v10, Entity) )
    return 1;
  result = Physics_CEntities_AIsParentOfB(localClientNum, Entity, v10);
  if ( result )
    return 1;
  return result;
}

/*
==============
Physics_GEntities_AIsParentOfB
==============
*/
char Physics_GEntities_AIsParentOfB(const gentity_s *entA, const gentity_s *entB)
{
  const gentity_s *Parent; 

  if ( !entA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 132, ASSERT_TYPE_ASSERT, "(entA)", (const char *)&queryFormat, "entA") )
    __debugbreak();
  if ( !entB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 133, ASSERT_TYPE_ASSERT, "(entB)", (const char *)&queryFormat, "entB") )
    __debugbreak();
  Parent = G_Utils_GetParent(entB);
  if ( !Parent )
    return 0;
  while ( Parent != entA )
  {
    Parent = G_Utils_GetParent(Parent);
    if ( !Parent )
      return 0;
  }
  return 1;
}

/*
==============
Physics_GEntities_Related
==============
*/
char Physics_GEntities_Related(int refA, int refB)
{
  int EntityNum; 
  const gentity_s *GEntity; 
  int v6; 
  gentity_s *v7; 
  const gentity_s *v8; 
  char result; 

  if ( Physics_GetRefSystem(refA) != Physics_RefSystem_GEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 152, ASSERT_TYPE_ASSERT, "(Physics_GetRefSystem( refA ) == Physics_RefSystem_GEntities)", (const char *)&queryFormat, "Physics_GetRefSystem( refA ) == Physics_RefSystem_GEntities") )
    __debugbreak();
  if ( Physics_GetRefSystem(refB) != Physics_RefSystem_GEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 153, ASSERT_TYPE_ASSERT, "(Physics_GetRefSystem( refB ) == Physics_RefSystem_GEntities)", (const char *)&queryFormat, "Physics_GetRefSystem( refB ) == Physics_RefSystem_GEntities") )
    __debugbreak();
  EntityNum = Physics_GetEntityNum(refA);
  GEntity = G_GetGEntity(EntityNum);
  v6 = Physics_GetEntityNum(refB);
  v7 = G_GetGEntity(v6);
  v8 = v7;
  if ( (!GEntity || !v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 158, ASSERT_TYPE_ASSERT, "(entA != 0 && entB != 0)", (const char *)&queryFormat, "entA != NULL && entB != NULL") )
    __debugbreak();
  if ( Physics_GEntities_AIsParentOfB(v8, GEntity) )
    return 1;
  result = Physics_GEntities_AIsParentOfB(GEntity, v8);
  if ( result )
    return 1;
  return result;
}

/*
==============
Physics_VehicleSupportsScriptableFiltering
==============
*/
char Physics_VehicleSupportsScriptableFiltering(Physics_WorldId worldId, Physics_RefSystem refSystem, int ref)
{
  int v4; 
  gentity_s *GEntity; 
  gentity_s *v6; 
  Vehicle *vehicle; 
  BgVehiclePhysicsManager *v8; 
  unsigned int physicsId; 
  __int64 LocalClientForWorld; 
  int EntityNum; 
  const centity_t *Entity; 
  CgVehicleSystem **v13; 
  CgVehicleSystem *v14; 
  const VehicleClient *ClientSafeConst; 
  const VehicleClient *v16; 
  __int64 v17; 
  BgVehiclePhysics *ObjectById; 
  char result; 
  __int64 v20; 
  __int64 v21; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    if ( refSystem != Physics_RefSystem_CEntities )
      return 1;
    LocalClientForWorld = Physics_GetLocalClientForWorld(worldId);
    EntityNum = Physics_GetEntityNum(ref);
    Entity = CG_GetEntity((const LocalClientNum_t)LocalClientForWorld, EntityNum);
    if ( !Entity )
      return 1;
    if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", LocalClientForWorld) )
      __debugbreak();
    if ( (unsigned int)LocalClientForWorld >= CgVehicleSystem::ms_allocatedCount )
    {
      LODWORD(v21) = CgVehicleSystem::ms_allocatedCount;
      LODWORD(v20) = LocalClientForWorld;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    v13 = &CgVehicleSystem::ms_vehicleSystemArray[LocalClientForWorld];
    if ( !*v13 )
    {
      LODWORD(v21) = LocalClientForWorld;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v21) )
        __debugbreak();
    }
    v14 = *v13;
    if ( !*v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 267, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    ClientSafeConst = CgVehicleSystem::GetClientSafeConst(v14, Entity);
    v16 = ClientSafeConst;
    if ( !ClientSafeConst || !BGVehicles::PhysicsIsValid(ClientSafeConst->physicsId) )
      return 1;
    v17 = (__int64)v14->PhysicsGetVehiclePhysicsManager(v14);
    physicsId = v16->physicsId;
    v8 = (BgVehiclePhysicsManager *)v17;
  }
  else
  {
    if ( refSystem != Physics_RefSystem_GEntities )
      return 1;
    v4 = Physics_GetEntityNum(ref);
    GEntity = G_GetGEntity(v4);
    v6 = GEntity;
    if ( !GEntity )
      return 1;
    vehicle = GEntity->vehicle;
    if ( !vehicle || !BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
      return 1;
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    v8 = GVehicles::ms_gVehiclesSystem->PhysicsGetVehiclePhysicsManager(GVehicles::ms_gVehiclesSystem);
    physicsId = v6->vehicle->physicsVehicle;
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(v8, physicsId);
  if ( !ObjectById )
    return 1;
  result = ObjectById->SupportsFeature(ObjectById, VPFEAT_SCRIPTABLE_FILTERING);
  if ( result )
    return 1;
  return result;
}

/*
==============
Physics_VehicleVsDestructibleScriptable
==============
*/
char Physics_VehicleVsDestructibleScriptable(Physics_WorldId worldId, Physics_RefSystem refSystemA, Physics_RefSystem refSystemB, int refA, int refB)
{
  const dvar_t *v5; 
  char v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  const ScriptableDef *def; 
  __int64 LocalClientForWorld; 
  int flags; 
  __int64 v18; 
  __int64 v19; 

  v5 = DVARBOOL_scriptable_vehicle_filtering;
  if ( !DVARBOOL_scriptable_vehicle_filtering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_vehicle_filtering") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    return 0;
  if ( ((refSystemA - 2) & 0xFFFFFFFD) != 0 || refSystemB != Physics_RefSystem_Scriptable )
  {
    v10 = 0;
    if ( ((refSystemB - 2) & 0xFFFFFFFD) != 0 || refSystemA != Physics_RefSystem_Scriptable )
      return 0;
  }
  else
  {
    v10 = 1;
  }
  v11 = refB;
  v12 = refA;
  if ( !v10 )
    v12 = refB;
  if ( !v10 )
    refSystemA = refSystemB;
  if ( Physics_GetRefEntityType(worldId, refSystemA, v12) == 14 && Physics_VehicleSupportsScriptableFiltering(worldId, refSystemA, v12) )
  {
    if ( !v10 )
      v11 = refA;
    v13 = v11 & 0x3FFFFF;
    if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL )
    {
      LocalClientForWorld = Physics_GetLocalClientForWorld(worldId);
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)v13 >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v19) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v18) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( (unsigned int)LocalClientForWorld >= 2 )
      {
        LODWORD(v19) = 2;
        LODWORD(v18) = LocalClientForWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_scriptableCl_instanceContexts[LocalClientForWorld] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      def = g_scriptableCl_instanceContexts[LocalClientForWorld][(unsigned int)v13].commonContext.def;
    }
    else
    {
      if ( !ScriptableSv_IsServerInstance(v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 331, ASSERT_TYPE_ASSERT, "(ScriptableSv_IsServerInstance( scriptableIndex ))", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( scriptableIndex )") )
        __debugbreak();
      if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)v13 >= g_scriptableWorldCounts.serverInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v19) = g_scriptableWorldCounts.serverInstanceCount;
        LODWORD(v18) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      def = g_scriptableSv_instanceContexts[v13].commonContext.def;
    }
    if ( def )
    {
      flags = def->flags;
      if ( (flags & 0x80) != 0 && (flags & 0x180000) == 0 )
        return 1;
    }
  }
  return 0;
}

/*
==============
Physics_VehicleVsTurret
==============
*/
char Physics_VehicleVsTurret(Physics_WorldId worldId, Physics_RefSystem refSystemA, Physics_RefSystem refSystemB, int refA, int refB)
{
  char v8; 
  __int16 RefEntityType; 
  __int16 v10; 
  char result; 
  LocalClientNum_t LocalClientForWorld; 

  if ( refSystemA == Physics_RefSystem_CEntities && refSystemB == Physics_RefSystem_CEntities )
  {
    v8 = 0;
  }
  else
  {
    if ( refSystemA != Physics_RefSystem_GEntities || refSystemB != Physics_RefSystem_GEntities )
      return 0;
    v8 = 1;
  }
  RefEntityType = Physics_GetRefEntityType(worldId, refSystemA, refA);
  v10 = Physics_GetRefEntityType(worldId, refSystemB, refB);
  if ( RefEntityType == 14 )
  {
    if ( v10 != 11 )
      return 0;
  }
  else if ( RefEntityType != 11 || v10 != 14 )
  {
    return 0;
  }
  result = 0;
  if ( v8 )
  {
    if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      return Physics_GEntities_Related(refA, refB);
    goto LABEL_17;
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
LABEL_17:
    LocalClientForWorld = Physics_GetLocalClientForWorld(worldId);
    return Physics_CEntities_Related(LocalClientForWorld, refA, refB);
  }
  return result;
}

/*
==============
HavokPhysicsCollisionFilter::filterBodyPairs
==============
*/
__int64 HavokPhysicsCollisionFilter::filterBodyPairs(HavokPhysicsCollisionFilter *this, const hknpWorld *world, hknpBodyIdPair *pairs, int numPairs)
{
  const dvar_t *v4; 
  __int64 v5; 
  hknpBodyIdPair *v8; 
  bool enabled; 
  const dvar_t *v10; 
  hknpWorldReader *v11; 
  hknpBodyIdPair *v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  Physics_RefSystem RefSystem; 
  Physics_RefSystem v18; 
  Physics_RefSystem v19; 
  Physics_WorldId m_worldId; 
  __int16 RefEntityType; 
  __int16 v23; 
  bool v24; 
  Physics_WorldId v25; 
  char v26; 
  __int16 v27; 
  __int16 v28; 
  char v29; 
  LocalClientNum_t LocalClientForWorld; 
  Physics_WorldId v31; 
  __int16 v32; 
  __int16 v33; 
  bool v34; 
  unsigned int v35; 
  unsigned int v36; 
  Physics_RefSystem v37; 
  Physics_RelationshipSystem RelationshipSystem; 
  __int32 v39; 
  __int64 v40; 
  char FilterSubGroupIdFromUserData; 
  char v42; 
  char FilterSubGroupIdNoCollideIdFromUserData; 
  char v44; 
  Physics_WorldId v45; 
  LocalClientNum_t v46; 
  bool IsClutterFromUserData; 
  bool v48; 
  bool DontCollideWithClutterFromUserData; 
  bool v50; 
  hknpWorldReader *v51; 
  hknpBodyIdPair *v52; 
  hknpBodyIdPair *v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  bool v58; 

  v4 = DVARBOOL_bg_vehTurretNewFilter;
  v5 = (unsigned int)numPairs;
  v52 = pairs;
  v53 = pairs;
  v8 = pairs;
  if ( !DVARBOOL_bg_vehTurretNewFilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehTurretNewFilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  enabled = v4->current.enabled;
  v10 = DVARBOOL_bg_vehVsMissileFilter;
  v58 = enabled;
  if ( !DVARBOOL_bg_vehVsMissileFilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehVsMissileFilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v50 = v10->current.enabled;
  if ( (int)v5 > 0 )
  {
    v11 = &world->hknpWorldReader;
    v51 = &world->hknpWorldReader;
    v12 = v8;
    v56 = v5;
    while ( 1 )
    {
      v13 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v11->getBody)(v11, v12->m_bodyA.m_serialAndIndex);
      v55 = v13;
      v14 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v11->getBody)(v11, v53->m_bodyB.m_serialAndIndex);
      v54 = v14;
      if ( !this->m_lowLevelCollisionFns[this->m_cfType](*(unsigned int *)(v13 + 108), *(unsigned int *)(v14 + 108)) )
        goto LABEL_16;
      v15 = *(_DWORD *)(v13 + 160);
      v16 = *(_DWORD *)(v14 + 160);
      if ( v15 == v16 )
        goto LABEL_16;
      RefSystem = Physics_GetRefSystem(v15);
      v18 = Physics_GetRefSystem(v16);
      v19 = v18;
      if ( RefSystem == Physics_RefSystem_Scriptable && v18 == Physics_RefSystem_Scriptable )
      {
        if ( (*(_BYTE *)(v13 + 68) & 5) != 0 && (*(_BYTE *)(v14 + 68) & 5) != 0 )
          goto LABEL_15;
        goto LABEL_58;
      }
      m_worldId = this->m_worldId;
      if ( (RefSystem != v18 || RefSystem != Physics_RefSystem_CEntities) && (RefSystem != Physics_RefSystem_GEntities || v18 != Physics_RefSystem_GItems) && (v18 != Physics_RefSystem_GEntities || RefSystem != Physics_RefSystem_GItems) )
        goto LABEL_30;
      RefEntityType = Physics_GetRefEntityType(m_worldId, RefSystem, v15);
      v23 = Physics_GetRefEntityType(m_worldId, v19, v16);
      if ( RefEntityType == 14 )
        break;
      if ( RefEntityType == 3 )
      {
        v24 = v23 == 14;
LABEL_28:
        if ( v24 )
          goto LABEL_15;
      }
      m_worldId = this->m_worldId;
LABEL_30:
      if ( Physics_VehicleVsDestructibleScriptable(m_worldId, RefSystem, v19, v15, v16) )
        goto LABEL_15;
      if ( v58 )
      {
        v25 = this->m_worldId;
        if ( RefSystem == Physics_RefSystem_CEntities && v19 == Physics_RefSystem_CEntities )
        {
          v26 = 0;
          goto LABEL_38;
        }
        if ( RefSystem == Physics_RefSystem_GEntities && v19 == Physics_RefSystem_GEntities )
        {
          v26 = 1;
LABEL_38:
          v27 = Physics_GetRefEntityType(v25, RefSystem, v15);
          v28 = Physics_GetRefEntityType(v25, v19, v16);
          if ( v27 == 14 )
          {
            if ( v28 != 11 )
              goto LABEL_49;
          }
          else if ( v27 != 11 || v28 != 14 )
          {
            goto LABEL_49;
          }
          if ( v26 )
          {
            if ( (unsigned int)v25 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
            {
              v29 = Physics_GEntities_Related(v15, v16);
              goto LABEL_48;
            }
          }
          else if ( (unsigned int)v25 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
          {
LABEL_49:
            v8 = v52;
            goto LABEL_50;
          }
          LocalClientForWorld = Physics_GetLocalClientForWorld(v25);
          v29 = Physics_CEntities_Related(LocalClientForWorld, v15, v16);
LABEL_48:
          if ( v29 )
            goto LABEL_15;
          goto LABEL_49;
        }
      }
LABEL_50:
      if ( v50 )
      {
        v31 = this->m_worldId;
        if ( RefSystem == v19 && ((RefSystem - 2) & 0xFFFFFFFD) == 0 )
        {
          v32 = Physics_GetRefEntityType(v31, RefSystem, v15);
          v33 = Physics_GetRefEntityType(v31, v19, v16);
          if ( v32 == 14 )
          {
            v34 = v33 == 4;
            goto LABEL_57;
          }
          if ( v32 == 4 )
          {
            v34 = v33 == 14;
LABEL_57:
            if ( v34 )
              goto LABEL_15;
          }
        }
      }
LABEL_58:
      v35 = v16;
      v36 = v15;
      v37 = Physics_GetRefSystem(v15);
      RelationshipSystem = Physics_GetRelationshipSystem(v16);
      v39 = Physics_GetRelationshipSystem(v15) & RelationshipSystem;
      if ( v37 == Physics_RefSystem_Ragdoll )
      {
        v36 = v15 & 0xFFFF0000;
        v35 = v16 & 0xFFFF0000;
      }
      else if ( v39 )
      {
        v36 = v15 & 0xFF000000;
        v35 = v16 & 0xFF000000;
      }
      if ( v36 != v35 )
      {
        v40 = v54;
LABEL_77:
        IsClutterFromUserData = Physics_GetIsClutterFromUserData(*(_QWORD *)(v55 + 160));
        v48 = Physics_GetIsClutterFromUserData(*(_QWORD *)(v40 + 160));
        DontCollideWithClutterFromUserData = Physics_GetDontCollideWithClutterFromUserData(*(_QWORD *)(v55 + 160));
        if ( !Physics_GetDontCollideWithClutterFromUserData(*(_QWORD *)(v40 + 160)) || !IsClutterFromUserData )
        {
          v11 = v51;
          if ( !DontCollideWithClutterFromUserData || !v48 )
          {
            *v8 = *v53;
            v52 = v8 + 1;
          }
          goto LABEL_16;
        }
        goto LABEL_15;
      }
      v40 = v54;
      FilterSubGroupIdFromUserData = Physics_GetFilterSubGroupIdFromUserData(*(_QWORD *)(v55 + 160));
      v42 = Physics_GetFilterSubGroupIdFromUserData(*(_QWORD *)(v54 + 160));
      FilterSubGroupIdNoCollideIdFromUserData = Physics_GetFilterSubGroupIdNoCollideIdFromUserData(*(_QWORD *)(v55 + 160));
      v44 = Physics_GetFilterSubGroupIdNoCollideIdFromUserData(*(_QWORD *)(v54 + 160));
      if ( (!FilterSubGroupIdFromUserData || FilterSubGroupIdFromUserData != v42 && FilterSubGroupIdFromUserData != v44) && (!v42 || v42 != FilterSubGroupIdNoCollideIdFromUserData) )
      {
        if ( v58 || Physics_GetRelationshipSystem(v15) != Physics_RelationshipSystem_TopLevel && Physics_GetRelationshipSystem(v16) != Physics_RelationshipSystem_TopLevel )
          goto LABEL_77;
        if ( this->m_worldId > (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL || !Physics_GEntities_Related(v15, v16) )
        {
          v45 = this->m_worldId;
          if ( (unsigned int)v45 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
            goto LABEL_77;
          v46 = Physics_GetLocalClientForWorld(v45);
          if ( !Physics_CEntities_Related(v46, v15, v16) )
            goto LABEL_77;
        }
      }
LABEL_15:
      v11 = v51;
LABEL_16:
      v8 = v52;
      v12 = v53 + 1;
      v24 = v56-- == 1;
      ++v53;
      if ( v24 )
        return (unsigned int)(v8 - pairs);
    }
    v24 = v23 == 3;
    goto LABEL_28;
  }
  return (unsigned int)(v8 - pairs);
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabled
==============
*/
char HavokPhysicsCollisionFilter::isCollisionEnabled(HavokPhysicsCollisionFilter *this, hknpCollisionQueryType::Enum queryType, const hknpQueryFilterData *queryFilterData, const hknpBody *body)
{
  unsigned __int64 m_userData; 
  unsigned __int64 v5; 
  unsigned int RefSystem; 
  unsigned int v10; 
  int *v11; 
  int v12; 
  __int64 EntityNum; 
  int v14; 
  unsigned int v15; 
  bool v16; 
  LocalClientNum_t LocalClientForWorld; 
  __int64 v18; 
  int *v19; 
  centity_t *Entity; 
  int v21; 
  centity_t *v22; 
  int *v24; 
  int v25; 
  __int64 v26; 
  cg_t **v27; 
  cg_t *v28; 
  const characterInfo_t *CharacterInfo; 
  int *v30; 
  int v31; 
  char v32; 
  centity_t *LinkToParent; 
  gentity_s *v34; 
  int v35; 
  int v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  int v40; 
  gentity_s *v41; 
  int v42; 
  char v43; 
  EntityTagInfo *tagInfo; 
  gentity_s *parent; 
  EntityTagInfo *v46; 
  _DWORD *v47; 
  _DWORD *v48; 
  __int64 v49; 
  __int64 v50; 

  m_userData = queryFilterData->m_userData;
  v5 = (unsigned int)body->m_userData;
  if ( v5 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v5, "unsigned", v5) )
    __debugbreak();
  RefSystem = Physics_GetRefSystem(v5);
  v10 = RefSystem;
  if ( m_userData )
  {
    v11 = *(int **)(m_userData + 8);
    if ( v11 )
    {
      v12 = *v11;
      if ( _bittest(&v12, RefSystem) )
        return 0;
    }
  }
  else
  {
    v11 = NULL;
  }
  if ( !this->m_lowLevelCollisionFns[this->m_cfType](queryFilterData->m_collisionFilterInfo, body->m_collisionFilterInfo) && queryFilterData->m_collisionFilterInfo != -1 )
    return 0;
  EntityNum = Physics_GetEntityNum(v5);
  if ( ((v10 - 3) & 0xFFFFFFFD) == 0 )
  {
    if ( m_userData )
    {
      v14 = *(_DWORD *)(m_userData + 16);
      if ( !v14 )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_OFFHAND_END|0x80) && !(_DWORD)EntityNum )
          v14 = 1;
        if ( v10 == 3 )
        {
          if ( !Com_GetServerDObjForEntnum(EntityNum) )
            v14 = 1;
        }
        else
        {
          if ( v10 != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 631, ASSERT_TYPE_ASSERT, "(testRefSystem == Physics_RefSystem_CCharacterProxies)", (const char *)&queryFormat, "testRefSystem == Physics_RefSystem_CCharacterProxies") )
            __debugbreak();
          if ( (unsigned int)EntityNum > 0x9E4 )
          {
            LODWORD(v50) = EntityNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v50) )
              __debugbreak();
          }
          if ( (unsigned int)EntityNum >= 0x13CA )
          {
            LODWORD(v50) = EntityNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v50) )
              __debugbreak();
          }
          v15 = clientObjMap[EntityNum];
          if ( !clientObjMap[EntityNum] )
            goto LABEL_34;
          if ( v15 >= (unsigned int)s_objCount )
          {
            LODWORD(v50) = clientObjMap[EntityNum];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v50) )
              __debugbreak();
          }
          if ( !s_objBuf[v15] )
LABEL_34:
            v14 = 1;
        }
      }
    }
    else
    {
      v14 = 1;
    }
    if ( Physics_GetRefSubSystem(v5) != v14 )
      return 0;
  }
  if ( !v11 )
    return 1;
  if ( v10 - 2 > 1 && v10 != 9 )
  {
    if ( v10 == 8 )
    {
      if ( this->m_worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        v16 = (unsigned int)EntityNum < 0x7FF;
        if ( (_DWORD)EntityNum == 2047 )
          goto LABEL_171;
        goto LABEL_114;
      }
      if ( (_DWORD)EntityNum == 2047 )
        goto LABEL_171;
    }
    else if ( v10 - 4 > 1 )
    {
      if ( v10 == 10 )
      {
        v24 = (int *)*((_QWORD *)v11 + 1);
        if ( v24 != &v24[2 * v11[4]] )
        {
          while ( 1 )
          {
            v25 = *v24;
            if ( *v24 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 865, ASSERT_TYPE_ASSERT, "(ignoreEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ignoreEntityNum != ENTITYNUM_NONE") )
              __debugbreak();
            if ( (v24[1] & 1) != 0 && (_DWORD)EntityNum == v25 )
              return 0;
            v24 += 2;
            if ( v24 == (int *)(*((_QWORD *)v11 + 1) + 8i64 * v11[4]) )
              goto LABEL_171;
          }
        }
      }
      goto LABEL_171;
    }
    LocalClientForWorld = Physics_GetLocalClientForWorld(this->m_worldId);
    v18 = LocalClientForWorld;
    if ( !(_BYTE)CgStatic::ms_allocatedType )
    {
      LODWORD(v50) = LocalClientForWorld;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v50) )
        __debugbreak();
    }
    if ( (unsigned int)v18 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      *(float *)&v50 = CgStatic::ms_allocatedCount;
      LODWORD(v49) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v49, v50) )
        __debugbreak();
    }
    if ( !CgStatic::ms_cgameStaticsArray[v18] )
    {
      LODWORD(v50) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v50) )
        __debugbreak();
    }
    v19 = (int *)CgStatic::ms_cgameStaticsArray[v18];
    Entity = CG_GetEntity((const LocalClientNum_t)v18, EntityNum);
    v21 = v11[10];
    v22 = Entity;
    if ( v21 )
    {
      if ( v21 == 1 && Entity->nextState.eType != ET_PHYSICS_VOLUME )
        return 0;
    }
    else if ( Entity->nextState.eType == ET_PHYSICS_VOLUME )
    {
      return 0;
    }
    if ( v11[11] && v10 == 5 && (*(unsigned __int8 (__fastcall **)(int *, _QWORD))(*(_QWORD *)v19 + 24i64))(v19, (unsigned int)EntityNum) )
    {
      if ( (unsigned int)v11[11] >= 0xCB )
      {
        LODWORD(v50) = 203;
        LODWORD(v49) = v11[11];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 800, ASSERT_TYPE_ASSERT, "(unsigned)( ignoreBodies->m_ignoreTeamCharacters ) < (unsigned)( TEAM_MP_NUM_TEAMS )", "ignoreBodies->m_ignoreTeamCharacters doesn't index TEAM_MP_NUM_TEAMS\n\t%i not in [0, %i)", v49, v50) )
          __debugbreak();
      }
      v26 = v19[2];
      if ( (unsigned int)v26 >= cg_t::ms_allocatedCount )
      {
        LODWORD(v50) = cg_t::ms_allocatedCount;
        LODWORD(v49) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v49, v50) )
          __debugbreak();
      }
      v27 = &cg_t::ms_cgArray[v26];
      if ( !*v27 )
      {
        LODWORD(v50) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v50) )
          __debugbreak();
      }
      if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
      {
        LODWORD(v50) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v50) )
          __debugbreak();
      }
      v28 = *v27;
      if ( !*v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v28->IsMP(v28) )
      {
        if ( (unsigned int)EntityNum >= v28[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v50) = v28[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v49) = EntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v49, v50) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v28[1].predictedPlayerState.rxvOmnvars[62] + 14792 * EntityNum);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v28, EntityNum);
      }
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 802, ASSERT_TYPE_ASSERT, "( charInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "charInfo", "nullptr", NULL, NULL) )
        __debugbreak();
      if ( CharacterInfo->team == v11[11] )
        return 0;
    }
    if ( *((_BYTE *)v11 + 49) && v10 == 4 && v22->nextState.eType == ET_SCRIPTMOVER && v22->nextState.un.scriptMoverType == 11 )
      return 0;
    v30 = (int *)*((_QWORD *)v11 + 1);
    if ( v30 != &v30[2 * v11[4]] )
    {
      while ( 1 )
      {
        v31 = *v30;
        if ( *v30 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 827, ASSERT_TYPE_ASSERT, "(ignoreEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ignoreEntityNum != ENTITYNUM_NONE") )
          __debugbreak();
        v32 = *((_BYTE *)v30 + 4);
        if ( (v32 & 1) != 0 && (_DWORD)EntityNum == v31 )
          return 0;
        if ( (v32 & 0x10) != 0 )
        {
          LinkToParent = CG_Entity_GetLinkToParent((LocalClientNum_t)v18, v22);
          if ( LinkToParent )
          {
            while ( LinkToParent->nextState.number != v31 )
            {
              LinkToParent = CG_Entity_GetLinkToParent((LocalClientNum_t)v18, LinkToParent);
              if ( !LinkToParent )
                goto LABEL_111;
            }
            return 0;
          }
        }
LABEL_111:
        v30 += 2;
        if ( v30 == (int *)(*((_QWORD *)v11 + 1) + 8i64 * v11[4]) )
          goto LABEL_171;
      }
    }
    goto LABEL_171;
  }
  v16 = (unsigned int)EntityNum < 0x7FF;
LABEL_114:
  if ( !v16 )
  {
    LODWORD(v50) = 2047;
    LODWORD(v49) = EntityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 657, ASSERT_TYPE_ASSERT, "(unsigned)( testEntityNum ) < (unsigned)( ENTITYNUM_NONE )", "testEntityNum doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v49, v50) )
      __debugbreak();
  }
  v34 = SV_GentityNum(EntityNum);
  if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 659, ASSERT_TYPE_ASSERT, "(testEnt)", (const char *)&queryFormat, "testEnt") )
    __debugbreak();
  if ( EntHandle::isDefined(&v34->r.ownerNum) )
    v35 = EntHandle::entnum(&v34->r.ownerNum);
  else
    v35 = 2047;
  v36 = v11[10];
  if ( v36 )
  {
    if ( v36 == 1 && v34->s.eType != ET_PHYSICS_VOLUME )
      return 0;
  }
  else if ( v34->s.eType == ET_PHYSICS_VOLUME )
  {
    return 0;
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v37 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( v11[11] && v10 == 3 && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 24i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)EntityNum) )
  {
    if ( (unsigned int)v11[11] >= 0xCB )
    {
      LODWORD(v50) = 203;
      LODWORD(v49) = v11[11];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 693, ASSERT_TYPE_ASSERT, "(unsigned)( ignoreBodies->m_ignoreTeamCharacters ) < (unsigned)( TEAM_MP_NUM_TEAMS )", "ignoreBodies->m_ignoreTeamCharacters doesn't index TEAM_MP_NUM_TEAMS\n\t%i not in [0, %i)", v49, v50) )
        __debugbreak();
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 216i64))(v37, (unsigned int)EntityNum);
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 695, ASSERT_TYPE_ASSERT, "( charInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "charInfo", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( *(_DWORD *)(v38 + 12) == v11[11] )
      return 0;
  }
  if ( *((_BYTE *)v11 + 49) && v10 == 2 && v34->s.eType == ET_SCRIPTMOVER && v34->s.un.scriptMoverType == 11 )
    return 0;
  v39 = *((_QWORD *)v11 + 1);
  if ( v39 != v39 + 8i64 * v11[4] )
  {
    while ( 1 )
    {
      v40 = *(_DWORD *)v39;
      if ( *(_DWORD *)v39 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 720, ASSERT_TYPE_ASSERT, "(ignoreEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ignoreEntityNum != ENTITYNUM_NONE") )
        __debugbreak();
      v41 = SV_GentityNum(v40);
      if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscollisionfilter.cpp", 722, ASSERT_TYPE_ASSERT, "(ignoreEnt)", (const char *)&queryFormat, "ignoreEnt") )
        __debugbreak();
      v42 = EntHandle::isDefined(&v41->r.ownerNum) ? EntHandle::entnum(&v41->r.ownerNum) : 2047;
      v43 = *(_BYTE *)(v39 + 4);
      if ( (v43 & 1) != 0 && (_DWORD)EntityNum == v40 )
        return 0;
      if ( (v43 & 4) != 0 && (_DWORD)EntityNum == v42 || (v43 & 2) != 0 && v35 == v40 || (v43 & 8) != 0 && v42 != 2047 && v35 == v42 )
        return 0;
      if ( (v43 & 0x10) != 0 )
      {
        tagInfo = v34->tagInfo;
        if ( tagInfo )
        {
          parent = tagInfo->parent;
          if ( parent )
          {
            while ( parent->s.number != v40 )
            {
              v46 = parent->tagInfo;
              if ( v46 )
              {
                parent = v46->parent;
                if ( parent )
                  continue;
              }
              goto LABEL_170;
            }
            return 0;
          }
        }
      }
LABEL_170:
      v39 += 8i64;
      if ( v39 == *((_QWORD *)v11 + 1) + 8i64 * v11[4] )
        break;
    }
  }
LABEL_171:
  v47 = (_DWORD *)*((_QWORD *)v11 + 3);
  v48 = &v47[v11[8]];
  if ( v47 != v48 )
  {
    while ( *v47 != body->m_id.m_serialAndIndex )
    {
      if ( ++v47 == v48 )
        return !*((_BYTE *)v11 + 48) || !Physics_GetDontCollideWithClutterFromUserData(body->m_userData);
    }
    return 0;
  }
  return !*((_BYTE *)v11 + 48) || !Physics_GetDontCollideWithClutterFromUserData(body->m_userData);
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabled
==============
*/
bool HavokPhysicsCollisionFilter::isCollisionEnabled(HavokPhysicsCollisionFilter *this, hknpCollisionQueryType::Enum queryType, unsigned __int8 layerIndex, unsigned __int64 userData)
{
  __int64 v4; 
  int v5; 
  bool result; 

  result = 1;
  if ( userData )
  {
    v4 = *(_QWORD *)(userData + 8);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 52);
      if ( _bittest(&v5, layerIndex) )
        return 0;
    }
  }
  return result;
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabled
==============
*/
char HavokPhysicsCollisionFilter::isCollisionEnabled(HavokPhysicsCollisionFilter *this, hknpCollisionQueryType::Enum queryType, hknpBodyId bodyIdA, hknpBodyId bodyIdB)
{
  return 1;
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabled
==============
*/
__int64 HavokPhysicsCollisionFilter::isCollisionEnabled(HavokPhysicsCollisionFilter *this, hknpCollisionQueryType::Enum queryType, bool targetShapeIsB, const hknpCollisionFilter::FilterInput *shapeInputA, const hknpCollisionFilter::FilterInput *shapeInputB)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  unsigned __int64 m_userData; 
  unsigned __int16 GlassIdFromUserData; 
  unsigned int v12; 
  unsigned __int8 v14; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCollision Filter - ShapeShape");
  if ( !this->m_lowLevelCollisionFns[this->m_cfType](shapeInputA->m_filterData.m_collisionFilterInfo, shapeInputB->m_filterData.m_collisionFilterInfo) && shapeInputA->m_filterData.m_collisionFilterInfo != -1 && shapeInputB->m_filterData.m_collisionFilterInfo != -1 )
    goto LABEL_18;
  if ( targetShapeIsB )
  {
    if ( (shapeInputB->m_filterData.m_collisionFilterInfo & 0x10) == 0 || shapeInputB->m_shapeKey.m_value == -1 )
      goto LABEL_19;
    m_userData = shapeInputB->m_filterData.m_userData;
  }
  else
  {
    if ( (shapeInputA->m_filterData.m_collisionFilterInfo & 0x10) == 0 || shapeInputA->m_shapeKey.m_value == -1 )
      goto LABEL_19;
    m_userData = shapeInputA->m_filterData.m_userData;
  }
  GlassIdFromUserData = Physics_GetGlassIdFromUserData(m_userData);
  if ( GlassIdFromUserData )
  {
    v12 = GlassIdFromUserData - 1;
    if ( !(this->m_worldId > PHYSICS_WORLD_ID_SERVER_DETAIL ? CG_Glass_IsPieceSolid(v12) : G_Glass_IsPieceSolid(v12)) )
    {
LABEL_18:
      v14 = 0;
      goto LABEL_20;
    }
  }
LABEL_19:
  v14 = 1;
LABEL_20:
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
  return v14;
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabledSimulation
==============
*/
bool HavokPhysicsCollisionFilter::isCollisionEnabledSimulation(unsigned __int64 filterInfoA, unsigned __int64 filterInfoB)
{
  char v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  int v7; 
  bool v8; 
  char v9; 
  char v10; 

  v3 = filterInfoB;
  v4 = (filterInfoA & 1) * (filterInfoB & s_HavokPhysicsCollisionFilter_SimulationContentsLookup[0]);
  v5 = (filterInfoA & 0x10) * (filterInfoB & s_HavokPhysicsCollisionFilter_SimulationContentsLookup[4]);
  v6 = (filterInfoA & 0x800000) * (filterInfoB & s_HavokPhysicsCollisionFilter_SimulationContentsLookup[23]);
  v7 = filterInfoB;
  v8 = (filterInfoB & 0x100) * (filterInfoA & s_HavokPhysicsCollisionFilter_SimulationContentsLookup[8]) != 0 || (filterInfoA & 0x100) * (filterInfoB & s_HavokPhysicsCollisionFilter_SimulationContentsLookup[8]) != 0;
  if ( v6 )
    v8 = 1;
  v9 = (v7 & 0x800000) * (filterInfoA & s_HavokPhysicsCollisionFilter_SimulationContentsLookup[23]) != 0 || v8;
  if ( v5 )
    v9 = 1;
  v10 = ((v3 & 0x10) * (filterInfoA & s_HavokPhysicsCollisionFilter_SimulationContentsLookup[4]) != 0) | v9;
  if ( v4 )
    v10 = 1;
  return ((v3 & 1) * (filterInfoA & s_HavokPhysicsCollisionFilter_SimulationContentsLookup[0]) != 0) | v10;
}

/*
==============
HavokPhysicsCollisionFilter::isCollisionEnabledTrace
==============
*/
bool HavokPhysicsCollisionFilter::isCollisionEnabledTrace(unsigned __int64 filterInfoA, unsigned __int64 filterInfoB)
{
  return (filterInfoA & filterInfoB) != 0;
}

/*
==============
HavokPhysicsCollisionFilter::refsMatch
==============
*/
bool HavokPhysicsCollisionFilter::refsMatch(int ref1, int ref2)
{
  int v3; 
  Physics_RefSystem RefSystem; 
  Physics_RelationshipSystem RelationshipSystem; 
  __int32 v6; 

  v3 = ref1;
  RefSystem = Physics_GetRefSystem(ref1);
  RelationshipSystem = Physics_GetRelationshipSystem(v3);
  v6 = Physics_GetRelationshipSystem(ref2) & RelationshipSystem;
  if ( RefSystem == Physics_RefSystem_Ragdoll )
  {
    v3 &= 0xFFFF0000;
    ref2 &= 0xFFFF0000;
  }
  else if ( v6 )
  {
    v3 &= 0xFF000000;
    ref2 &= 0xFF000000;
  }
  return v3 == ref2;
}

