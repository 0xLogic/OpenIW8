/*
==============
CgVehicleSystem::PhysicsDetectClientGeoLoaded
==============
*/

bool __fastcall CgVehicleSystem::PhysicsDetectClientGeoLoaded(CgVehicleSystem *this, BgVehiclePhysics *vehObj)
{
  return ?PhysicsDetectClientGeoLoaded@CgVehicleSystem@@IEAA_NAEAVBgVehiclePhysics@@@Z(this, vehObj);
}

/*
==============
CgVehicleSystem::PhysicsCreateComponent_GoStraightTo
==============
*/

VehiclePhysicsComponentId __fastcall CgVehicleSystem::PhysicsCreateComponent_GoStraightTo(CgVehicleSystem *this, unsigned int vehicleId, const vec3_t *pos)
{
  return ?PhysicsCreateComponent_GoStraightTo@CgVehicleSystem@@UEAA?AUVehiclePhysicsComponentId@@IAEBTvec3_t@@@Z(this, vehicleId, pos);
}

/*
==============
CgVehicleSystem::PhysicsGetCollisionSystem
==============
*/

BgVehicleCollisionSystem *__fastcall CgVehicleSystem::PhysicsGetCollisionSystem(CgVehicleSystem *this)
{
  return ?PhysicsGetCollisionSystem@CgVehicleSystem@@UEAAAEAVBgVehicleCollisionSystem@@XZ(this);
}

/*
==============
CgVehicleSystem::PhysicsGetPlayerPositionsOnTheVehicle
==============
*/

unsigned int __fastcall CgVehicleSystem::PhysicsGetPlayerPositionsOnTheVehicle(CgVehicleSystem *this, int vehEntNum, int *playerNums, vec3_t *positionsWs, float *factors, unsigned __int8 *seats, unsigned int maxPlayers)
{
  return ?PhysicsGetPlayerPositionsOnTheVehicle@CgVehicleSystem@@UEAAIHPEAHPEATvec3_t@@PEAMPEAEI@Z(this, vehEntNum, playerNums, positionsWs, factors, seats, maxPlayers);
}

/*
==============
CgVehicleSystem::PhysicsUnpackLerpStateValues
==============
*/

void __fastcall CgVehicleSystem::PhysicsUnpackLerpStateValues(CgVehicleSystem *this, int entityIndex, float *outGasInput, bool *outIsBraking, float *outWheelAveSpinSpeed)
{
  ?PhysicsUnpackLerpStateValues@CgVehicleSystem@@UEAAXHAEAMAEA_N0@Z(this, entityIndex, outGasInput, outIsBraking, outWheelAveSpinSpeed);
}

/*
==============
CgVehicleSystem::PhysicsImpulseCallback
==============
*/

void __fastcall CgVehicleSystem::PhysicsImpulseCallback(Physics_SimpleCollisionCallback_Data *data)
{
  ?PhysicsImpulseCallback@CgVehicleSystem@@SAXPEAUPhysics_SimpleCollisionCallback_Data@@@Z(data);
}

/*
==============
CgVehicleSystem::PhysicsGetFovDelta
==============
*/

double __fastcall CgVehicleSystem::PhysicsGetFovDelta(CgVehicleSystem *this, const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?PhysicsGetFovDelta@CgVehicleSystem@@QEAAMPEBUplayerState_s@@@Z(this, ps);
  return result;
}

/*
==============
CgVehicleSystem::PhysicsGetVehicleDef
==============
*/

const VehicleDef *__fastcall CgVehicleSystem::PhysicsGetVehicleDef(CgVehicleSystem *this, unsigned int vehDefIndex)
{
  return ?PhysicsGetVehicleDef@CgVehicleSystem@@UEBAPEBUVehicleDef@@I@Z(this, vehDefIndex);
}

/*
==============
CgVehicleSystem::PhysicsGetVehicleOriginAtPlayerStateTime
==============
*/

void __fastcall CgVehicleSystem::PhysicsGetVehicleOriginAtPlayerStateTime(CgVehicleSystem *this, const playerState_s *ps, vec3_t *outOrg)
{
  ?PhysicsGetVehicleOriginAtPlayerStateTime@CgVehicleSystem@@UEAAXPEBUplayerState_s@@AEATvec3_t@@@Z(this, ps, outOrg);
}

/*
==============
CgVehicleSystem::PhysicsProcessDeferredEvents
==============
*/

void __fastcall CgVehicleSystem::PhysicsProcessDeferredEvents(CgVehicleSystem *this)
{
  ?PhysicsProcessDeferredEvents@CgVehicleSystem@@QEBAXXZ(this);
}

/*
==============
CgVehicleSystem::PhysicsGetPlayerTransform
==============
*/

void __fastcall CgVehicleSystem::PhysicsGetPlayerTransform(CgVehicleSystem *this, int vehEntNum, int *outOwnerEntNum, vec3_t *outPlayerOrg, vec3_t *outPlayerAngles)
{
  ?PhysicsGetPlayerTransform@CgVehicleSystem@@UEBAXHAEAHAEATvec3_t@@1@Z(this, vehEntNum, outOwnerEntNum, outPlayerOrg, outPlayerAngles);
}

/*
==============
CgVehicleSystem::PhysicsGetVehicleObject
==============
*/

const BgVehiclePhysics *__fastcall CgVehicleSystem::PhysicsGetVehicleObject(CgVehicleSystem *this, const int entityNum)
{
  return ?PhysicsGetVehicleObject@CgVehicleSystem@@UEBAPEBVBgVehiclePhysics@@H@Z(this, entityNum);
}

/*
==============
CgVehicleSystem::PhysicsUpdateCmdValues
==============
*/

void __fastcall CgVehicleSystem::PhysicsUpdateCmdValues(CgVehicleSystem *this, usercmd_s *cmd)
{
  ?PhysicsUpdateCmdValues@CgVehicleSystem@@QEAAXPEAUusercmd_s@@@Z(this, cmd);
}

/*
==============
CgVehicleSystem::PhysicsGetAsset
==============
*/

bool __fastcall CgVehicleSystem::PhysicsGetAsset(CgVehicleSystem *this, int entityNum, const PhysicsAsset **outPhysAsset)
{
  return ?PhysicsGetAsset@CgVehicleSystem@@UEBA_NHPEAPEBUPhysicsAsset@@@Z(this, entityNum, outPhysAsset);
}

/*
==============
CgVehicleSystem::PhysicsGetFromEntityNum
==============
*/

unsigned int __fastcall CgVehicleSystem::PhysicsGetFromEntityNum(CgVehicleSystem *this, int vehEntityNum)
{
  return ?PhysicsGetFromEntityNum@CgVehicleSystem@@QEBAIH@Z(this, vehEntityNum);
}

/*
==============
CgVehicleSystem::PhysicsBeforeWorldStep
==============
*/

void __fastcall CgVehicleSystem::PhysicsBeforeWorldStep(CgVehicleSystem *this, Physics_WorldId worldId)
{
  ?PhysicsBeforeWorldStep@CgVehicleSystem@@QEAAXW4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
CgVehicleSystem::PhysicsVehicleHasAnim
==============
*/

bool __fastcall CgVehicleSystem::PhysicsVehicleHasAnim(CgVehicleSystem *this, const BgVehiclePhysics *vehobj)
{
  return ?PhysicsVehicleHasAnim@CgVehicleSystem@@UEBA_NAEBVBgVehiclePhysics@@@Z(this, vehobj);
}

/*
==============
CgVehicleSystem::PhysicsIsDebugDrawing
==============
*/

bool __fastcall CgVehicleSystem::PhysicsIsDebugDrawing(CgVehicleSystem *this)
{
  return ?PhysicsIsDebugDrawing@CgVehicleSystem@@UEAA_NXZ(this);
}

/*
==============
CgVehicleSystem::PhysicsGetVehicleId
==============
*/

unsigned int __fastcall CgVehicleSystem::PhysicsGetVehicleId(CgVehicleSystem *this, int entityNum)
{
  return ?PhysicsGetVehicleId@CgVehicleSystem@@UEBAIH@Z(this, entityNum);
}

/*
==============
CgVehicleSystem::PhysicsSimulateVehiclePmove
==============
*/

void __fastcall CgVehicleSystem::PhysicsSimulateVehiclePmove(CgVehicleSystem *this, pmove_t *pm, const pml_t *pml)
{
  ?PhysicsSimulateVehiclePmove@CgVehicleSystem@@UEBAXPEAVpmove_t@@PEBUpml_t@@@Z(this, pm, pml);
}

/*
==============
CgVehicleSystem::PhysicsIsSupportedWorld
==============
*/

bool __fastcall CgVehicleSystem::PhysicsIsSupportedWorld(CgVehicleSystem *this, Physics_WorldId worldId)
{
  return ?PhysicsIsSupportedWorld@CgVehicleSystem@@UEAA_NW4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
CgVehicleSystem::PhysicsCreateComponent_PathFollower
==============
*/

VehiclePhysicsComponentId __fastcall CgVehicleSystem::PhysicsCreateComponent_PathFollower(CgVehicleSystem *this, unsigned int vehicleId, __int16 nodeIndex, bool looped)
{
  return ?PhysicsCreateComponent_PathFollower@CgVehicleSystem@@UEAA?AUVehiclePhysicsComponentId@@IF_N@Z(this, vehicleId, nodeIndex, looped);
}

/*
==============
CgVehicleSystem::PhysicsGetBoneLocalMatrix
==============
*/

const DObjAnimMat *__fastcall CgVehicleSystem::PhysicsGetBoneLocalMatrix(CgVehicleSystem *this, int entityIndex, scr_string_t boneTag, int *outBoneIndex)
{
  return ?PhysicsGetBoneLocalMatrix@CgVehicleSystem@@UEAAPEBUDObjAnimMat@@HW4scr_string_t@@PEAH@Z(this, entityIndex, boneTag, outBoneIndex);
}

/*
==============
CgVehicleSystem::PhysicsIsClientForcingServerAuth
==============
*/

bool __fastcall CgVehicleSystem::PhysicsIsClientForcingServerAuth(LocalClientNum_t localClientNum, const centity_t *cent)
{
  return ?PhysicsIsClientForcingServerAuth@CgVehicleSystem@@SA_NW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CgVehicleSystem::PhysicsGetCollisionSystem
==============
*/

const BgVehicleCollisionSystem *__fastcall CgVehicleSystem::PhysicsGetCollisionSystem(CgVehicleSystem *this)
{
  return ?PhysicsGetCollisionSystem@CgVehicleSystem@@UEBAAEBVBgVehicleCollisionSystem@@XZ(this);
}

/*
==============
CgVehicleSystem::PhysicsTouchAuthoritativeScriptables
==============
*/

void __fastcall CgVehicleSystem::PhysicsTouchAuthoritativeScriptables(CgVehicleSystem *this, const centity_t *vehEnt, const BgVehiclePhysics *vehObj)
{
  ?PhysicsTouchAuthoritativeScriptables@CgVehicleSystem@@QEAAXAEBUcentity_t@@AEBVBgVehiclePhysics@@@Z(this, vehEnt, vehObj);
}

/*
==============
CgVehicleSystem::PhysicsOnWorldAction
==============
*/

void __fastcall CgVehicleSystem::PhysicsOnWorldAction(CgVehicleSystem *this, Physics_WorldId worldId, float deltaTime)
{
  ?PhysicsOnWorldAction@CgVehicleSystem@@UEAAXW4Physics_WorldId@@M@Z(this, worldId, deltaTime);
}

/*
==============
CG_ExtractCEntityFromUserData
==============
*/

centity_t *__fastcall CG_ExtractCEntityFromUserData(LocalClientNum_t localClientNum, int bodyUserData)
{
  return ?CG_ExtractCEntityFromUserData@@YAPEAUcentity_t@@W4LocalClientNum_t@@H@Z(localClientNum, bodyUserData);
}

/*
==============
CgVehicleSystem::PhysicsDestroyComponent_PathFollower
==============
*/

void __fastcall CgVehicleSystem::PhysicsDestroyComponent_PathFollower(CgVehicleSystem *this, unsigned int vehicleId)
{
  ?PhysicsDestroyComponent_PathFollower@CgVehicleSystem@@UEAAXI@Z(this, vehicleId);
}

/*
==============
CgVehicleSystem::PhysicsCreateComponent_PathFinder
==============
*/

VehiclePhysicsComponentId __fastcall CgVehicleSystem::PhysicsCreateComponent_PathFinder(CgVehicleSystem *this, unsigned int vehicleId, const vec3_t *pos, unsigned int layer)
{
  return ?PhysicsCreateComponent_PathFinder@CgVehicleSystem@@UEAA?AUVehiclePhysicsComponentId@@IAEBTvec3_t@@I@Z(this, vehicleId, pos, layer);
}

/*
==============
CgVehicleSystem::PhysicsUpdateEntityBounds
==============
*/

void __fastcall CgVehicleSystem::PhysicsUpdateEntityBounds(CgVehicleSystem *this, int entityIndex, const ExtentBounds *extBounds)
{
  ?PhysicsUpdateEntityBounds@CgVehicleSystem@@UEAAXHAEBUExtentBounds@@@Z(this, entityIndex, extBounds);
}

/*
==============
CgVehicleSystem::PhysicsIsInFlyingVehicle
==============
*/

bool __fastcall CgVehicleSystem::PhysicsIsInFlyingVehicle(LocalClientNum_t localClientNum)
{
  return ?PhysicsIsInFlyingVehicle@CgVehicleSystem@@SA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystem::PhysicsCreateVehicle
==============
*/

unsigned int __fastcall CgVehicleSystem::PhysicsCreateVehicle(CgVehicleSystem *this, int entityIndex, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?PhysicsCreateVehicle@CgVehicleSystem@@UEAAIHIAEBUVehicleDef@@@Z(this, entityIndex, vehDefIndex, vehDef);
}

/*
==============
CgVehicleSystem::PhysicsGetAntiLag
==============
*/

const BgAntiLag *__fastcall CgVehicleSystem::PhysicsGetAntiLag(CgVehicleSystem *this)
{
  return ?PhysicsGetAntiLag@CgVehicleSystem@@UEBAPEBVBgAntiLag@@XZ(this);
}

/*
==============
CgVehicleSystem::PhysicsDestroyComponent_PathFinder
==============
*/

void __fastcall CgVehicleSystem::PhysicsDestroyComponent_PathFinder(CgVehicleSystem *this, unsigned int vehicleId)
{
  ?PhysicsDestroyComponent_PathFinder@CgVehicleSystem@@UEAAXI@Z(this, vehicleId);
}

/*
==============
CgVehicleSystem::PhysicsIsValidVehicle
==============
*/

bool __fastcall CgVehicleSystem::PhysicsIsValidVehicle(LocalClientNum_t localClientNum, const centity_t *cent)
{
  return ?PhysicsIsValidVehicle@CgVehicleSystem@@SA_NW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CgVehicleSystem::PhysicsDestroyVehicle
==============
*/

void __fastcall CgVehicleSystem::PhysicsDestroyVehicle(CgVehicleSystem *this, unsigned int *vehicleId)
{
  ?PhysicsDestroyVehicle@CgVehicleSystem@@UEAAXAEAI@Z(this, vehicleId);
}

/*
==============
CgVehicleSystem::PhysicsGetVehicleObjectFromPs
==============
*/

const BgVehiclePhysics *__fastcall CgVehicleSystem::PhysicsGetVehicleObjectFromPs(CgVehicleSystem *this, const playerState_s *ps)
{
  return ?PhysicsGetVehicleObjectFromPs@CgVehicleSystem@@QEAAPEBVBgVehiclePhysics@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgVehicleSystem::PhysicsDoScriptableDamage
==============
*/

void __fastcall CgVehicleSystem::PhysicsDoScriptableDamage(CgVehicleSystem *this, unsigned int scriptableIndex, int vehEntNum)
{
  ?PhysicsDoScriptableDamage@CgVehicleSystem@@QEBAXIH@Z(this, scriptableIndex, vehEntNum);
}

/*
==============
CgVehicleSystem::PhysicsExtractIdFromPhysicsUserData
==============
*/

unsigned int __fastcall CgVehicleSystem::PhysicsExtractIdFromPhysicsUserData(CgVehicleSystem *this, int bodyPhysicsUserData, entityType_s *outEntType, bool *outIsSuspended)
{
  return ?PhysicsExtractIdFromPhysicsUserData@CgVehicleSystem@@UEAAIHAEAW4entityType_s@@AEA_N@Z(this, bodyPhysicsUserData, outEntType, outIsSuspended);
}

/*
==============
CgVehicleSystem::PhysicsRadialMotionBlur
==============
*/

bool __fastcall CgVehicleSystem::PhysicsRadialMotionBlur(CgVehicleSystem *this, const playerState_s *ps)
{
  return ?PhysicsRadialMotionBlur@CgVehicleSystem@@QEAA_NPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgVehicleSystem::PhysicsDestroyComponent
==============
*/

void __fastcall CgVehicleSystem::PhysicsDestroyComponent(CgVehicleSystem *this, VehiclePhysicsComponentId componentId)
{
  ?PhysicsDestroyComponent@CgVehicleSystem@@UEAAXUVehiclePhysicsComponentId@@@Z(this, componentId);
}

/*
==============
CgVehicleSystem::PhysicsAfterWorldStep
==============
*/

void __fastcall CgVehicleSystem::PhysicsAfterWorldStep(CgVehicleSystem *this, Physics_WorldId worldId)
{
  ?PhysicsAfterWorldStep@CgVehicleSystem@@QEAAXW4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
CgVehicleSystem::PhysicsWrite
==============
*/

void __fastcall CgVehicleSystem::PhysicsWrite(CgVehicleSystem *this, MemoryFile *memFile)
{
  ?PhysicsWrite@CgVehicleSystem@@UEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
CgVehicleSystem::PhysicsDestroyComponent_GoStraightTo
==============
*/

void __fastcall CgVehicleSystem::PhysicsDestroyComponent_GoStraightTo(CgVehicleSystem *this, unsigned int vehicleId)
{
  ?PhysicsDestroyComponent_GoStraightTo@CgVehicleSystem@@UEAAXI@Z(this, vehicleId);
}

/*
==============
CgVehicleSystem::PhysicsDrawDebugVehicle
==============
*/

void __fastcall CgVehicleSystem::PhysicsDrawDebugVehicle(CgVehicleSystem *this, const BgVehiclePhysics *vehObj)
{
  ?PhysicsDrawDebugVehicle@CgVehicleSystem@@UEAAXPEBVBgVehiclePhysics@@@Z(this, vehObj);
}

/*
==============
CgVehicleSystem::PhysicsUpdateCharacterWobbleAnimData
==============
*/

void __fastcall CgVehicleSystem::PhysicsUpdateCharacterWobbleAnimData(CgVehicleSystem *this, const characterInfo_t *ci, unsigned int vehicleId, float frameTime, wobbleAnim_t *outData)
{
  ?PhysicsUpdateCharacterWobbleAnimData@CgVehicleSystem@@UEBAXPEBUcharacterInfo_t@@IMPEAUwobbleAnim_t@@@Z(this, ci, vehicleId, frameTime, outData);
}

/*
==============
CgVehicleSystem::PhysicsGetDelayToStartDriving
==============
*/

double __fastcall CgVehicleSystem::PhysicsGetDelayToStartDriving(CgVehicleSystem *this, const BgVehiclePhysics *vehObj, int driverEntNum, float defaultTime)
{
  double result; 

  *(float *)&result = ?PhysicsGetDelayToStartDriving@CgVehicleSystem@@UEBAMAEBVBgVehiclePhysics@@HM@Z(this, vehObj, driverEntNum, defaultTime);
  return result;
}

/*
==============
CgVehicleSystem::PhysicsLoad
==============
*/

void __fastcall CgVehicleSystem::PhysicsLoad(CgVehicleSystem *this, SaveGame *save)
{
  ?PhysicsLoad@CgVehicleSystem@@UEAAXPEAUSaveGame@@@Z(this, save);
}

/*
==============
CG_ExtractCEntityFromUserData
==============
*/
centity_t *CG_ExtractCEntityFromUserData(LocalClientNum_t localClientNum, int bodyUserData)
{
  unsigned __int16 RefId; 

  if ( Physics_GetRefSystem(bodyUserData) != Physics_RefSystem_CEntities )
    return 0i64;
  RefId = Physics_GetRefId(bodyUserData);
  return CG_GetEntity(localClientNum, RefId);
}

/*
==============
CgVehicleSystem::PhysicsAfterWorldStep
==============
*/
void CgVehicleSystem::PhysicsAfterWorldStep(CgVehicleSystem *this, Physics_WorldId worldId)
{
  Physics_WorldId v3; 
  BgVehiclePhysics *m_vehiclePhysicsObjects; 
  unsigned int v5; 
  cg_t *LocalClientGlobals; 
  __int64 m_entityNumber; 
  __int64 m_localClientNum; 
  CgEntitySystem *v9; 
  const centity_t *v10; 
  bool v11; 
  __int64 v12; 
  __int64 v13; 

  v3 = worldId;
  m_vehiclePhysicsObjects = (BgVehiclePhysics *)this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects;
  v5 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  do
  {
    if ( m_vehiclePhysicsObjects->m_inUse && BgVehiclePhysics::IsPhysicsBodyIdValid(m_vehiclePhysicsObjects) )
    {
      if ( m_vehiclePhysicsObjects->m_worldId != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 400, ASSERT_TYPE_ASSERT, "(vehObj->GetWorldId() == worldId)", (const char *)&queryFormat, "vehObj->GetWorldId() == worldId") )
        __debugbreak();
      m_entityNumber = m_vehiclePhysicsObjects->m_entityNumber;
      m_localClientNum = this->m_localClientNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v13) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v13) )
          __debugbreak();
      }
      if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v13) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v12) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
      {
        LODWORD(v13) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v13) )
          __debugbreak();
      }
      v9 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
      if ( (unsigned int)m_entityNumber >= 0x800 )
      {
        LODWORD(v13) = 2048;
        LODWORD(v12) = m_entityNumber;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v10 = &v9->m_entities[m_entityNumber];
      if ( CgVehicleSystem::GetClientSafeConst(this, v10) )
      {
        if ( m_vehiclePhysicsObjects->m_playerControlled )
        {
          v11 = !m_vehiclePhysicsObjects->m_clientGeoLoaded && BgVehiclePhysics::GetNoClientGeoMode(m_vehiclePhysicsObjects) == NOCLIENTGEO_SWITCH_TO_SERVER_AUTH;
          if ( BgVehiclePhysics::IsDynamic(m_vehiclePhysicsObjects) && m_vehiclePhysicsObjects->m_netcodeType == VEH_NETCODE_CLIENT_PRED_SB && !v11 )
            BgVehiclePhysics::ClientWarpDetection(m_vehiclePhysicsObjects, &LocalClientGlobals->predictedPlayerState, this->m_lastPhysicsStepTime);
          BgVehiclePhysics::QueryValuesFromPhysics(m_vehiclePhysicsObjects, &LocalClientGlobals->predictedPlayerState);
        }
        ((void (__fastcall *)(BgVehiclePhysics *))m_vehiclePhysicsObjects->AfterPhysicsWorldStep)(m_vehiclePhysicsObjects);
        CgVehicleSystem::PhysicsTouchAuthoritativeScriptables(this, v10, m_vehiclePhysicsObjects);
      }
      else
      {
        Com_PrintWarning(20, "CgVehicleSystem::PhysicsAfterWorldStep(). VehicleClient not found, it could be destroyed during the world step. Simulation skipped this frame\n");
      }
      v3 = worldId;
    }
    ++v5;
    m_vehiclePhysicsObjects = (BgVehiclePhysics *)((char *)m_vehiclePhysicsObjects + 3360);
  }
  while ( v5 < 0x80 );
}

/*
==============
CgVehicleSystem::PhysicsBeforeWorldStep
==============
*/
void CgVehicleSystem::PhysicsBeforeWorldStep(CgVehicleSystem *this, Physics_WorldId worldId)
{
  unsigned int v2; 
  unsigned __int8 *v4; 
  __int64 v6; 
  __int64 m_localClientNum; 
  CgEntitySystem *v8; 
  __int64 v9; 
  __int64 v10; 

  v2 = 0;
  v4 = &this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects[0].buffer[32];
  do
  {
    if ( *((_DWORD *)v4 - 6) )
    {
      if ( *(_DWORD *)v4 != worldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 932, ASSERT_TYPE_ASSERT, "(vehObj->GetWorldId() == worldId)", (const char *)&queryFormat, "vehObj->GetWorldId() == worldId") )
        __debugbreak();
      v6 = *((int *)v4 + 4);
      m_localClientNum = this->m_localClientNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v10) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v10) )
          __debugbreak();
      }
      if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v10) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v9) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
      {
        LODWORD(v10) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v10) )
          __debugbreak();
      }
      v8 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
      if ( (unsigned int)v6 >= 0x800 )
      {
        LODWORD(v10) = 2048;
        LODWORD(v9) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( CgVehicleSystem::GetClientSafeConst(this, &v8->m_entities[v6]) )
        BgVehiclePhysics::BeforePhysicsWorldStep((BgVehiclePhysics *)(v4 - 32));
      else
        Com_PrintWarning(20, "CgVehicleSystem::PhysicsBeforeWorldStep(). VehicleClient not found, it could be destroyed during the world step. Simulation skipped this frame\n");
    }
    ++v2;
    v4 += 3360;
  }
  while ( v2 < 0x80 );
}

/*
==============
CgVehicleSystem::PhysicsCreateComponent_GoStraightTo
==============
*/
__int64 CgVehicleSystem::PhysicsCreateComponent_GoStraightTo(CgVehicleSystem *this, __int64 vehicleId, const vec3_t *pos)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1080, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehiclesystem::PhysicsCreateComponent_GoStraightTo() not implemented") )
    __debugbreak();
  BGVehicles::PhysicsInvalidComponentId();
  return vehicleId;
}

/*
==============
CgVehicleSystem::PhysicsCreateComponent_PathFinder
==============
*/
__int64 CgVehicleSystem::PhysicsCreateComponent_PathFinder(CgVehicleSystem *this, __int64 vehicleId, const vec3_t *pos, unsigned int layer)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1072, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehiclesystem::PhysicsCreateComponent_PathFinder() not implemented") )
    __debugbreak();
  BGVehicles::PhysicsInvalidComponentId();
  return vehicleId;
}

/*
==============
CgVehicleSystem::PhysicsCreateComponent_PathFollower
==============
*/
__int64 CgVehicleSystem::PhysicsCreateComponent_PathFollower(CgVehicleSystem *this, __int64 vehicleId, __int16 nodeIndex, bool looped)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1064, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehiclesystem::PhysicsCreateComponent_PathFollower() not implemented") )
    __debugbreak();
  BGVehicles::PhysicsInvalidComponentId();
  return vehicleId;
}

/*
==============
CgVehicleSystem::PhysicsCreateVehicle
==============
*/
__int64 CgVehicleSystem::PhysicsCreateVehicle(CgVehicleSystem *this, int entityIndex, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  unsigned int v7; 
  int *p_entIndex; 
  unsigned int v9; 
  VehiclePhysicsGameProfile physics_gameProfile; 
  VehicleType type; 
  __int64 v12; 
  BgVehiclePhysics *v13; 

  v7 = BGVehicles::PhysicsInvalidId();
  p_entIndex = &this->m_vehicleClients[0].entIndex;
  v9 = 0;
  while ( 1 )
  {
    ++v9;
    if ( *p_entIndex == entityIndex )
      break;
    p_entIndex += 147;
    if ( v9 >= 0x80 )
      goto LABEL_6;
  }
  v7 = v9;
LABEL_6:
  if ( !BGVehicles::PhysicsIsValid(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 159, ASSERT_TYPE_ASSERT, "( BGVehicles::PhysicsIsValid( vehPhysId ) )", "CgVehicleSystem::PhysicsCreateVehicle(): can't find a place to instantiate the physics vehicle on client") )
    __debugbreak();
  physics_gameProfile = vehDef->vehiclePhysicsDef.physics_gameProfile;
  type = vehDef->type;
  if ( !BGVehicles::PhysicsIsValid(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 108, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
    __debugbreak();
  v12 = v7 - 1;
  v13 = BGVehicles::PhysicsFactory(this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects[v12].buffer, 0xD20u, type, physics_gameProfile);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 114, ASSERT_TYPE_ASSERT, "(object)", "%s\n\tBgVehiclePhysicsManager::Allocate() could not create a new physics vehicle object in factory", "object") )
    __debugbreak();
  if ( v13 != (BgVehiclePhysics *)&this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 115, ASSERT_TYPE_ASSERT, "(reinterpret_cast<byte*>( object ) == objBuffer)", "%s\n\tBgVehiclePhysicsManager::Allocate() instance must be allocated in provided buffer", "reinterpret_cast<byte*>( object ) == objBuffer") )
    __debugbreak();
  memset_0(&this->m_vehiclePhysicsManager.m_vehiclePhysicsObjectsPmove[v12], 0, sizeof(this->m_vehiclePhysicsManager.m_vehiclePhysicsObjectsPmove[v12]));
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 162, ASSERT_TYPE_ASSERT, "( vehPhysObj )", "CgVehicleSystem::PhysicsCreateVehicle(): Couldn't not allocate a new physics vehicle") )
    __debugbreak();
  if ( this->m_localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 164, ASSERT_TYPE_ASSERT, "(m_localClientNum < 2)", (const char *)&queryFormat, "m_localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( !v13->Setup(v13, this, (Physics_WorldId)(3 * this->m_localClientNum + 2), v7, entityIndex, vehDefIndex, vehDef) )
  {
    Com_PrintError(20, "CgVehicleSystem::PhysicsCreateVehicle() Can't setup the Physics Vehicle object");
    v13->Reset(v13);
    v7 = BGVehicles::PhysicsInvalidId();
  }
  if ( !v13->CreatePhysics(v13, &vehDef->vehiclePhysicsDef) )
  {
    Com_PrintError(20, "CgVehicleSystem::PhysicsCreateVehicle() Can't setup the Physics for the Vehicle object");
    v13->Reset(v13);
    v7 = BGVehicles::PhysicsInvalidId();
  }
  if ( !v13->m_inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 180, ASSERT_TYPE_ASSERT, "(vehPhysObj->IsInUse())", (const char *)&queryFormat, "vehPhysObj->IsInUse()") )
    __debugbreak();
  return v7;
}

/*
==============
CgVehicleSystem::PhysicsDestroyComponent
==============
*/
void CgVehicleSystem::PhysicsDestroyComponent(CgVehicleSystem *this, VehiclePhysicsComponentId componentId)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1107, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehiclesystem::PhysicsRemoveComponent() not implemented") )
    __debugbreak();
}

/*
==============
CgVehicleSystem::PhysicsDestroyComponent_GoStraightTo
==============
*/
void CgVehicleSystem::PhysicsDestroyComponent_GoStraightTo(CgVehicleSystem *this, unsigned int vehicleId)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1100, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehiclesystem::PhysicsDestroyComponent_GoStraightTo() not implemented") )
    __debugbreak();
}

/*
==============
CgVehicleSystem::PhysicsDestroyComponent_PathFinder
==============
*/
void CgVehicleSystem::PhysicsDestroyComponent_PathFinder(CgVehicleSystem *this, unsigned int vehicleId)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1094, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehiclesystem::PhysicsDestroyComponent_PathFinder() not implemented") )
    __debugbreak();
}

/*
==============
CgVehicleSystem::PhysicsDestroyComponent_PathFollower
==============
*/
void CgVehicleSystem::PhysicsDestroyComponent_PathFollower(CgVehicleSystem *this, unsigned int vehicleId)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1088, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehiclesystem::PhysicsDestroyComponent_PathFollower() not implemented") )
    __debugbreak();
}

/*
==============
CgVehicleSystem::PhysicsDestroyVehicle
==============
*/
void CgVehicleSystem::PhysicsDestroyVehicle(CgVehicleSystem *this, unsigned int *vehicleId)
{
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysics *ObjectForPmove; 

  if ( BGVehicles::PhysicsIsValid(*vehicleId) )
  {
    ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, *vehicleId);
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 195, ASSERT_TYPE_ASSERT, "(vehPhysObj)", (const char *)&queryFormat, "vehPhysObj") )
      __debugbreak();
    if ( ObjectById->m_inUse )
    {
      if ( ObjectById->m_playerControlled )
      {
        ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(&this->m_vehiclePhysicsManager, ObjectById);
        memset_0(ObjectForPmove, 0, 0xD20ui64);
      }
      CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
      ObjectById->DestroyPhysics(ObjectById);
      CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
      ObjectById->Reset(ObjectById);
    }
    *vehicleId = BGVehicles::PhysicsInvalidId();
  }
}

/*
==============
CgVehicleSystem::PhysicsDetectClientGeoLoaded
==============
*/
_BOOL8 CgVehicleSystem::PhysicsDetectClientGeoLoaded(CgVehicleSystem *this, BgVehiclePhysics *vehObj)
{
  bool v4; 
  const dvar_t *v5; 

  if ( vehObj->m_clientGeoTimeToCheck > 0.0 )
    return vehObj->m_clientGeoLoaded;
  v4 = BgVehiclePhysics::CheckForWorldCollision(vehObj);
  if ( !v4 )
  {
    v5 = DCONST_DVARFLT_bg_vehNetNoClientGeoCooldown;
    if ( !DCONST_DVARFLT_bg_vehNetNoClientGeoCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetNoClientGeoCooldown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    LODWORD(vehObj->m_clientGeoTimeToCheck) = v5->current.integer;
  }
  return v4;
}

/*
==============
CgVehicleSystem::PhysicsDoScriptableDamage
==============
*/
void CgVehicleSystem::PhysicsDoScriptableDamage(CgVehicleSystem *this, unsigned int scriptableIndex, int vehEntNum)
{
  centity_t *Entity; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableDamageEvent damageEvent; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex < g_scriptableWorldCounts.totalInstanceCount )
  {
    damageEvent.def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)this->m_localClientNum, scriptableIndex)->def;
    if ( damageEvent.def )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, vehEntNum);
      CG_GetPoseOrigin(&Entity->pose, &damageEvent.start);
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)this->m_localClientNum, scriptableIndex);
      ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &damageEvent.end);
      damageEvent.context = ScriptableCl_LocalClientToContext((const LocalClientNum_t)this->m_localClientNum);
      damageEvent.callbacks = ScriptableCl_GetCallbackTable();
      memset(&damageEvent.modelIndex, 0, 52);
      *(_OWORD *)&damageEvent.partName = _xmm;
      damageEvent.inflictorEntState = &Entity->nextState;
      damageEvent.attackerEntState = &Entity->nextState;
      damageEvent.isAlternate = 0;
      *(double *)&damageEvent.weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
      damageEvent.scriptableIndex = scriptableIndex;
      damageEvent.inflictorEntNum = vehEntNum;
      damageEvent.inflictorScriptableIndex = 500000;
      damageEvent.attackerEntNum = vehEntNum;
      *(_DWORD *)&damageEvent.weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      ScriptableBg_ProcessDamageEvent(&damageEvent);
    }
  }
}

/*
==============
CgVehicleSystem::PhysicsDrawDebugVehicle
==============
*/
void CgVehicleSystem::PhysicsDrawDebugVehicle(CgVehicleSystem *this, const BgVehiclePhysics *vehObj)
{
  centity_t *Entity; 
  vec3_t outOrigin; 
  __int64 v6; 
  Bounds out_bounds; 

  v6 = -2i64;
  if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 989, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  if ( drawBBox )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, vehObj->m_entityNumber);
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    CgVehicleSystem::GetDObjFirstModelBounds(this, Entity, &out_bounds);
    CG_DebugBox(&outOrigin, &out_bounds, Entity->pose.angles.v[1], &colorOrange, 0, 0);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
CgVehicleSystem::PhysicsExtractIdFromPhysicsUserData
==============
*/
unsigned int CgVehicleSystem::PhysicsExtractIdFromPhysicsUserData(CgVehicleSystem *this, int bodyPhysicsUserData, entityType_s *outEntType, bool *outIsSuspended)
{
  LocalClientNum_t m_localClientNum; 
  unsigned __int16 RefId; 
  centity_t *Entity; 
  unsigned int physicsId; 
  const VehicleClient *ClientSafeConst; 
  bool v14; 

  if ( !bodyPhysicsUserData )
    return BGVehicles::PhysicsInvalidId();
  m_localClientNum = this->m_localClientNum;
  if ( Physics_GetRefSystem(bodyPhysicsUserData) == Physics_RefSystem_CEntities )
  {
    RefId = Physics_GetRefId(bodyPhysicsUserData);
    Entity = CG_GetEntity(m_localClientNum, RefId);
  }
  else
  {
    Entity = NULL;
  }
  physicsId = BGVehicles::PhysicsInvalidId();
  if ( !Entity )
  {
    *outEntType = ET_FIRST;
LABEL_14:
    v14 = 0;
    goto LABEL_15;
  }
  *outEntType = Entity->nextState.eType;
  if ( Entity->nextState.eType == ET_VEHICLE )
  {
    ClientSafeConst = CgVehicleSystem::GetClientSafeConst(this, Entity);
    if ( ClientSafeConst )
      physicsId = ClientSafeConst->physicsId;
  }
  if ( *outEntType != ET_SCRIPTMOVER || (Entity->nextState.staticState.vehiclePlayer.playerIndex & 0x10) == 0 )
    goto LABEL_14;
  v14 = 1;
LABEL_15:
  *outIsSuspended = v14;
  return physicsId;
}

/*
==============
CgVehicleSystem::PhysicsGetAntiLag
==============
*/
CgAntiLag *CgVehicleSystem::PhysicsGetAntiLag(CgVehicleSystem *this)
{
  return CgAntiLag::GetInstance((const LocalClientNum_t)this->m_localClientNum);
}

/*
==============
CgVehicleSystem::PhysicsGetAsset
==============
*/
bool CgVehicleSystem::PhysicsGetAsset(CgVehicleSystem *this, int entityNum, const PhysicsAsset **outPhysAsset)
{
  const centity_t *Entity; 
  XModel *detailModel; 
  PhysicsAsset *physAssetAddendum; 
  XModel *baseModel; 
  DObj *dobj; 
  int contentsOverride; 
  bool overrideContents; 
  int physShapeAddendumIdx; 
  int physShapeOverrideIdx; 

  if ( entityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 788, ASSERT_TYPE_ASSERT, "(entityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( !outPhysAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 789, ASSERT_TYPE_ASSERT, "(outPhysAsset)", (const char *)&queryFormat, "outPhysAsset") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityNum);
  CG_Utils_GetPhysicsAsset(this->m_localClientNum, Entity, (const DObj **)&dobj, (const XModel **)&baseModel, outPhysAsset, &physShapeOverrideIdx, (const PhysicsAsset **)&physAssetAddendum, &physShapeAddendumIdx, (const XModel **)&detailModel, &overrideContents, &contentsOverride);
  return *outPhysAsset != NULL;
}

/*
==============
CgVehicleSystem::PhysicsGetBoneLocalMatrix
==============
*/
DObjAnimMat *CgVehicleSystem::PhysicsGetBoneLocalMatrix(CgVehicleSystem *this, int entityIndex, scr_string_t boneTag, int *outBoneIndex)
{
  const DObj *ClientDObj; 
  const XModel *Model; 
  DObjAnimMat *baseMat; 
  const char *v10; 
  int modelIndex[6]; 
  unsigned __int8 inOutIndex; 

  ClientDObj = Com_GetClientDObj(entityIndex, this->m_localClientNum);
  if ( !CgVehicleSystem::IsDobjValidForVehicle(ClientDObj) )
    return 0i64;
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1013, ASSERT_TYPE_ASSERT, "( obj )", "CgVehicleSystem::PhysicsGetBoneLocalMatrix() can't retrieve the client dobj") )
    __debugbreak();
  inOutIndex = -2;
  if ( !DObjGetBoneIndexInternal_7(ClientDObj, boneTag, &inOutIndex, modelIndex) || inOutIndex >= 0xFEu )
  {
    v10 = SL_ConvertToStringSafe(boneTag);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1020, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehicleSystem::PhysicsGetBoneLocalMatrix() Can't get bone index for the given boneTag: %s", v10) )
      __debugbreak();
    *outBoneIndex = 254;
    return 0i64;
  }
  *outBoneIndex = inOutIndex;
  Model = DObjGetModel(ClientDObj, 0);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 158, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  baseMat = Model->baseMat;
  if ( !baseMat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1030, ASSERT_TYPE_ASSERT, "( boneMtxList )", "CgVehicleSystem::PhysicsGetBoneLocalMatrix() Can't retrieve base pose bone matrix list") )
    __debugbreak();
  return &baseMat[inOutIndex];
}

/*
==============
CgVehicleSystem::PhysicsGetCollisionSystem
==============
*/
CgVehicleCollisionSystem *CgVehicleSystem::PhysicsGetCollisionSystem(CgVehicleSystem *this)
{
  return &this->m_vehicleCollisionSystem;
}

/*
==============
CgVehicleSystem::PhysicsGetCollisionSystem
==============
*/
CgVehicleCollisionSystem *CgVehicleSystem::PhysicsGetCollisionSystem(CgVehicleSystem *this)
{
  return &this->m_vehicleCollisionSystem;
}

/*
==============
CgVehicleSystem::PhysicsGetDelayToStartDriving
==============
*/
double CgVehicleSystem::PhysicsGetDelayToStartDriving(CgVehicleSystem *this, const BgVehiclePhysics *vehObj, int driverEntNum, double defaultTime)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  int v8; 
  unsigned int timeModified; 

  v4 = driverEntNum;
  if ( driverEntNum == 2047 )
    return defaultTime;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)v4 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      timeModified = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
      v8 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v8, timeModified) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v4);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v4);
  }
  if ( CharacterInfo && CharacterInfo->infoValid && CharacterInfo->vehicleAnimation.prevSeat )
    return Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehDelayFromPassenger, "bg_vehDelayFromPassenger");
  else
    return defaultTime;
}

/*
==============
CgVehicleSystem::PhysicsGetFovDelta
==============
*/
float CgVehicleSystem::PhysicsGetFovDelta(CgVehicleSystem *this, const playerState_s *ps)
{
  const BgVehiclePhysics *VehicleObjectFromPs; 
  const BgVehiclePhysics *v4; 
  const dvar_t *v5; 
  ClientCameraData *Data; 
  float result; 

  VehicleObjectFromPs = CgVehicleSystem::PhysicsGetVehicleObjectFromPs(this, ps);
  v4 = VehicleObjectFromPs;
  if ( !VehicleObjectFromPs || !VehicleObjectFromPs->SupportsFeature((BgVehiclePhysics *)VehicleObjectFromPs, VPFEAT_CAMERA_FOV_CHANGE) )
    return 0.0;
  v5 = DVARBOOL_bg_vehEnableInverseView;
  if ( !DVARBOOL_bg_vehEnableInverseView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnableInverseView") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    Data = CG_Camera_GetData(this->m_localClientNum, CAMERA_CAR);
    if ( Data->initialized && Data->orbitCamData.inverseView )
      return FLOAT_10_0;
  }
  if ( !CG_Camera_AllowFovDelta(this->m_localClientNum) )
    return 0.0;
  v4->GetCameraFovDelta((BgVehiclePhysics *)v4);
  return result;
}

/*
==============
CgVehicleSystem::PhysicsGetFromEntityNum
==============
*/
unsigned int CgVehicleSystem::PhysicsGetFromEntityNum(CgVehicleSystem *this, int vehEntityNum)
{
  centity_t *Entity; 
  const centity_t *v4; 
  entityState_t *p_nextState; 
  int ClientIndex; 
  __int64 v7; 
  unsigned int *p_physicsId; 

  if ( vehEntityNum <= 0 )
    return BGVehicles::PhysicsInvalidId();
  if ( (unsigned int)vehEntityNum >= 0x7FF )
    return BGVehicles::PhysicsInvalidId();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, vehEntityNum);
  v4 = Entity;
  if ( !Entity || (Entity->flags & 1) == 0 )
    return BGVehicles::PhysicsInvalidId();
  p_nextState = &Entity->nextState;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((p_nextState->eType - 12) & 0xFFFD) == 0 && (ClientIndex = CG_Vehicle_GetClientIndex(v4), v7 = ClientIndex, (unsigned int)ClientIndex <= 0x7F) && (p_physicsId = &this->m_vehicleClients[v7].physicsId, BGVehicles::PhysicsIsValid(*p_physicsId)) )
    return *p_physicsId;
  else
    return BGVehicles::PhysicsInvalidId();
}

/*
==============
CgVehicleSystem::PhysicsGetPlayerPositionsOnTheVehicle
==============
*/
__int64 CgVehicleSystem::PhysicsGetPlayerPositionsOnTheVehicle(CgVehicleSystem *this, int vehEntNum, int *playerNums, vec3_t *positionsWs, float *factors, unsigned __int8 *seats, unsigned int maxPlayers)
{
  CgVehicleSystem *v9; 
  unsigned int v10; 
  __int64 v11; 
  int v12; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  int v16; 
  int linkedEntNum; 
  int v18; 
  CgHandler *Handler; 
  centity_t *EntityState; 
  int v21; 
  __int64 v23; 
  __int64 v24; 

  v9 = this;
  if ( !positionsWs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 706, ASSERT_TYPE_ASSERT, "(positionsWs)", (const char *)&queryFormat, "positionsWs") )
    __debugbreak();
  if ( !factors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 707, ASSERT_TYPE_ASSERT, "(factors)", (const char *)&queryFormat, "factors") )
    __debugbreak();
  if ( !playerNums && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 708, ASSERT_TYPE_ASSERT, "(playerNums)", (const char *)&queryFormat, "playerNums") )
    __debugbreak();
  v10 = maxPlayers;
  if ( !maxPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 709, ASSERT_TYPE_ASSERT, "(maxPlayers > 0)", (const char *)&queryFormat, "maxPlayers > 0") )
    __debugbreak();
  if ( vehEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 710, ASSERT_TYPE_ASSERT, "(vehEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "vehEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  v11 = 0i64;
  v12 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9->m_localClientNum);
  if ( cls.maxClients <= 0 )
    return 0i64;
  do
  {
    if ( (unsigned int)v11 >= v10 )
      break;
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( v12 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v24) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(v23) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v12);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v12);
    }
    if ( CharacterInfo && CharacterInfo->infoValid )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)v9->m_localClientNum, CharacterInfo->entityNum);
      v16 = 2047;
      if ( BG_IsPlayingVehicleOccupancyAnims(CharacterInfo) )
      {
        linkedEntNum = CharacterInfo->linkedEntNum;
        if ( linkedEntNum > 0 )
        {
          v18 = linkedEntNum - 1;
          Handler = CgHandler::getHandler(this->m_localClientNum);
          if ( Handler->IsClient(Handler) )
          {
            EntityState = CG_GetEntity((const LocalClientNum_t)Handler->m_localClientNum, v18);
            if ( EntityState )
              EntityState = (centity_t *)((char *)EntityState + 400);
          }
          else
          {
            EntityState = (centity_t *)GHandler::GetEntityState((GHandler *)Handler, v18);
          }
          v9 = this;
          v21 = LODWORD(EntityState->pose.turret.visualPitchLimitTop) & 0x7FF;
          if ( v21 )
            v16 = v21 - 1;
        }
      }
      if ( v16 == vehEntNum )
      {
        CG_GetPoseOrigin(&Entity->pose, &positionsWs[v11]);
        factors[v11] = 1.0;
        playerNums[v11] = CharacterInfo->entityNum;
        v11 = (unsigned int)(v11 + 1);
      }
    }
    v10 = maxPlayers;
    ++v12;
  }
  while ( v12 < cls.maxClients );
  return (unsigned int)v11;
}

/*
==============
CgVehicleSystem::PhysicsGetPlayerTransform
==============
*/
void CgVehicleSystem::PhysicsGetPlayerTransform(CgVehicleSystem *this, int vehEntNum, int *outOwnerEntNum, vec3_t *outPlayerOrg, vec3_t *outPlayerAngles)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *outPlayerOrg = LocalClientGlobals->oldOrigin;
  *outPlayerAngles = LocalClientGlobals->predictedPlayerState.viewangles;
  *outOwnerEntNum = LocalClientGlobals->predictedPlayerState.clientNum;
}

/*
==============
CgVehicleSystem::PhysicsGetVehicleDef
==============
*/
const VehicleDef *CgVehicleSystem::PhysicsGetVehicleDef(CgVehicleSystem *this, unsigned int vehDefIndex)
{
  if ( vehDefIndex < 0x80 )
    return CgVehicleSystem::GetClientDef(vehDefIndex);
  else
    return 0i64;
}

/*
==============
CgVehicleSystem::PhysicsGetVehicleId
==============
*/
unsigned int CgVehicleSystem::PhysicsGetVehicleId(CgVehicleSystem *this, int entityNum)
{
  const centity_t *Entity; 
  const VehicleClient *ClientSafeConst; 

  if ( entityNum == 2047 )
    return BGVehicles::PhysicsInvalidId();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1050, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  ClientSafeConst = CgVehicleSystem::GetClientSafeConst(this, Entity);
  if ( !ClientSafeConst )
    return BGVehicles::PhysicsInvalidId();
  else
    return ClientSafeConst->physicsId;
}

/*
==============
CgVehicleSystem::PhysicsGetVehicleObject
==============
*/
const BgVehiclePhysics *CgVehicleSystem::PhysicsGetVehicleObject(CgVehicleSystem *this, const int entityNum)
{
  const BgVehiclePhysics *ObjectById; 
  centity_t *Entity; 
  const VehicleClient *ClientSafeConst; 
  const VehicleClient *v6; 
  BgVehiclePhysicsManager *v7; 
  __int64 v9; 

  ObjectById = NULL;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1115, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_VEHICLE )
  {
    ClientSafeConst = CgVehicleSystem::GetClientSafeConst(this, Entity);
    v6 = ClientSafeConst;
    if ( ClientSafeConst )
    {
      if ( BGVehicles::PhysicsIsValid(ClientSafeConst->physicsId) )
      {
        v7 = (BgVehiclePhysicsManager *)this->PhysicsGetVehiclePhysicsManager(this);
        ObjectById = BgVehiclePhysicsManager::GetObjectById(v7, v6->physicsId);
      }
    }
  }
  memset(&v9, 0, sizeof(v9));
  return ObjectById;
}

/*
==============
CgVehicleSystem::PhysicsGetVehicleObjectFromPs
==============
*/
BgVehiclePhysics *CgVehicleSystem::PhysicsGetVehicleObjectFromPs(CgVehicleSystem *this, const playerState_s *ps)
{
  LocalClientNum_t m_localClientNum; 
  const VehicleClient *ClientSafeConst; 
  const VehicleClient *v5; 
  centity_t *outRemoteControlledVehicle; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 650, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  outRemoteControlledVehicle = NULL;
  if ( CG_Vehicle_GetRemoteControlledVehicle(m_localClientNum, (const centity_t **)&outRemoteControlledVehicle) && (ClientSafeConst = CgVehicleSystem::GetClientSafeConst(this, outRemoteControlledVehicle), (v5 = ClientSafeConst) != NULL) && BGVehicles::PhysicsIsValid(ClientSafeConst->physicsId) )
    return BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, v5->physicsId);
  else
    return 0i64;
}

/*
==============
CgVehicleSystem::PhysicsGetVehicleOriginAtPlayerStateTime
==============
*/
void CgVehicleSystem::PhysicsGetVehicleOriginAtPlayerStateTime(CgVehicleSystem *this, const playerState_s *ps, vec3_t *outOrg)
{
  const ClActiveClient *Client; 
  int CmdNumber; 
  int commandTime; 
  int v9; 
  const ClActiveClient *v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  char *v14; 
  __int64 v15; 
  char *fmt; 
  __int64 v17; 
  char v18; 
  int v19; 
  float v20; 
  float v21; 
  float v22; 
  int v23; 

  v17 = -2i64;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  commandTime = ps->commandTime;
  v9 = CmdNumber - 127;
  if ( CmdNumber - 127 > CmdNumber )
  {
LABEL_14:
    *(double *)outOrg->v = *(double *)ps->vehicleState.origin.v;
    outOrg->v[2] = ps->vehicleState.origin.v[2];
    return;
  }
  while ( 1 )
  {
    v10 = ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum);
    v11 = ClActiveClient_GetCmdNumber(v10);
    v12 = v11;
    v23 = v11;
    if ( v9 > v11 )
    {
      LODWORD(fmt) = v11;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)v9, fmt);
    }
    if ( v9 > v12 - 128 && v9 > 0 )
      break;
    memset(&v23, 0, sizeof(v23));
LABEL_13:
    if ( ++v9 > CmdNumber )
      goto LABEL_14;
  }
  v13 = (__int64)&v10->cmds[v9 & 0x7F];
  memset(&v23, 0, sizeof(v23));
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd", v17) )
    __debugbreak();
  v14 = &v18;
  v15 = 2i64;
  do
  {
    *(__m256i *)v14 = *(__m256i *)v13;
    *((__m256i *)v14 + 1) = *(__m256i *)(v13 + 32);
    *((__m256i *)v14 + 2) = *(__m256i *)(v13 + 64);
    *((_OWORD *)v14 + 6) = *(_OWORD *)(v13 + 96);
    v14 += 128;
    *((_OWORD *)v14 - 1) = *(_OWORD *)(v13 + 112);
    v13 += 128i64;
    --v15;
  }
  while ( v15 );
  *(_QWORD *)v14 = *(_QWORD *)v13;
  if ( v19 != commandTime )
    goto LABEL_13;
  outOrg->v[0] = v20;
  outOrg->v[1] = v21;
  outOrg->v[2] = v22;
}

/*
==============
CgVehicleSystem::PhysicsImpulseCallback
==============
*/
void CgVehicleSystem::PhysicsImpulseCallback(Physics_SimpleCollisionCallback_Data *data)
{
  LocalClientNum_t LocalClientForWorld; 
  CgVehicleSystem *VehicleSystem; 
  unsigned int *bodyIds; 
  __int64 v5; 
  unsigned int BodyUserData; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  char v14; 
  char v15; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 879, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  LocalClientForWorld = Physics_GetLocalClientForWorld(data->worldId);
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(LocalClientForWorld);
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 883, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  bodyIds = data->bodyIds;
  v5 = 2i64;
  do
  {
    BodyUserData = PhysicsVehicle_GetBodyUserData(data->worldId, *bodyIds);
    v7 = VehicleSystem->PhysicsExtractIdFromPhysicsUserData(VehicleSystem, BodyUserData, (entityType_s *)&v15, (bool *)&v14);
    if ( BGVehicles::PhysicsIsValid(v7) )
    {
      v8 = (__int64)VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
      if ( !BGVehicles::PhysicsIsValid(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 58, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
        __debugbreak();
      v9 = v7 - 1;
      if ( v9 >= 0x80 )
      {
        LODWORD(v13) = 128;
        LODWORD(v12) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v10 = 3360i64 * v9;
      v11 = v10 + v8 + 8;
      if ( v10 + v8 == -8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 894, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
        __debugbreak();
      (*(void (__fastcall **)(__int64, Physics_SimpleCollisionCallback_Data *))(*(_QWORD *)v11 + 96i64))(v11, data);
    }
    ++bodyIds;
    --v5;
  }
  while ( v5 );
}

/*
==============
CgVehicleSystem::PhysicsIsClientForcingServerAuth
==============
*/
bool CgVehicleSystem::PhysicsIsClientForcingServerAuth(LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgVehicleSystem *VehicleSystem; 
  CgVehicleSystem *v5; 
  const VehicleClient *ClientSafeConst; 
  const VehicleClient *v7; 
  BgVehiclePhysicsManager *v8; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysicsNoClientGeoMode NoClientGeoMode; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 68, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  v5 = VehicleSystem;
  if ( !VehicleSystem || (ClientSafeConst = CgVehicleSystem::GetClientSafeConst(VehicleSystem, cent), (v7 = ClientSafeConst) == NULL) || !BGVehicles::PhysicsIsValid(ClientSafeConst->physicsId) || (v8 = v5->PhysicsGetVehiclePhysicsManager(v5), (ObjectById = BgVehiclePhysicsManager::GetObjectById(v8, v7->physicsId)) == NULL) || ObjectById->m_clientGeoLoaded || (NoClientGeoMode = BgVehiclePhysics::GetNoClientGeoMode(ObjectById), NoClientGeoMode != NOCLIENTGEO_SWITCH_TO_SERVER_AUTH) )
    LOBYTE(NoClientGeoMode) = 0;
  return NoClientGeoMode;
}

/*
==============
CgVehicleSystem::PhysicsIsDebugDrawing
==============
*/
bool CgVehicleSystem::PhysicsIsDebugDrawing(CgVehicleSystem *this)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.integer == 2;
}

/*
==============
CgVehicleSystem::PhysicsIsInFlyingVehicle
==============
*/
char CgVehicleSystem::PhysicsIsInFlyingVehicle(LocalClientNum_t localClientNum)
{
  CgVehicleSystem *VehicleSystem; 
  cg_t *LocalClientGlobals; 
  int entity; 
  CgHandler *Handler; 
  centity_t *v6; 
  const VehicleClient *ClientSafeConst; 
  const VehicleClient *v8; 
  BgVehiclePhysicsManager *v9; 
  BgVehiclePhysics *ObjectById; 

  if ( !CgVehicleSystem::IsSystemAllocated() )
    return 0;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  if ( !VehicleSystem )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  if ( entity == 2047 )
  {
    Handler = CgHandler::getHandler(localClientNum);
    entity = BG_GetRemoteControlledVehicleEntityNum(&LocalClientGlobals->predictedPlayerState, Handler);
  }
  if ( entity != 2047 && (v6 = CG_GetEntity(localClientNum, entity)) != NULL && v6->nextState.eType == ET_VEHICLE && (ClientSafeConst = CgVehicleSystem::GetClientSafeConst(VehicleSystem, v6), (v8 = ClientSafeConst) != NULL) && BGVehicles::PhysicsIsValid(ClientSafeConst->physicsId) && (v9 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem), (ObjectById = BgVehiclePhysicsManager::GetObjectById(v9, v8->physicsId)) != NULL) && ObjectById->m_vehicleType == VEH_AIRCRAFT && (unsigned __int8)(ObjectById->m_vehicleGameProfile - 6) <= 2u )
    return 1;
  else
    return 0;
}

/*
==============
CgVehicleSystem::PhysicsIsSupportedWorld
==============
*/
char CgVehicleSystem::PhysicsIsSupportedWorld(CgVehicleSystem *this, Physics_WorldId worldId)
{
  unsigned int v2; 

  v2 = 2;
  while ( v2 != worldId )
  {
    v2 += 3;
    if ( v2 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
CgVehicleSystem::PhysicsIsValidVehicle
==============
*/
bool CgVehicleSystem::PhysicsIsValidVehicle(LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *ClientSafeConst; 
  bool result; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 52, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  result = 0;
  if ( VehicleSystem )
  {
    ClientSafeConst = CgVehicleSystem::GetClientSafeConst(VehicleSystem, cent);
    if ( ClientSafeConst )
    {
      if ( BGVehicles::PhysicsIsValid(ClientSafeConst->physicsId) )
        return 1;
    }
  }
  return result;
}

/*
==============
CgVehicleSystem::PhysicsLoad
==============
*/
void CgVehicleSystem::PhysicsLoad(CgVehicleSystem *this, SaveGame *save)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 228, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehicleSystem::PhysicsLoad: I don't think this makes sense in the client") )
    __debugbreak();
}

/*
==============
CgVehicleSystem::PhysicsOnWorldAction
==============
*/
void CgVehicleSystem::PhysicsOnWorldAction(CgVehicleSystem *this, Physics_WorldId worldId, float deltaTime)
{
  Physics_WorldId v3; 
  CgVehicleSystem *v4; 
  const dvar_t *v5; 
  unsigned int v6; 
  char *v7; 
  BgVehiclePhysicsObjectBuffer *m_vehiclePhysicsObjects; 
  const playerState_s *p_predictedPlayerState; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  __int64 v14; 
  __int64 m_localClientNum; 
  CgEntitySystem *v16; 
  const centity_t *v17; 
  bool v18; 
  bool v19; 
  float value; 
  unsigned __int8 v21; 
  const dvar_t *v22; 
  int v23; 
  bool v24; 
  float v25; 
  BgVehiclePhysics *v26; 
  double v27; 
  unsigned __int8 playerIndex; 
  bool v29; 
  const playerState_s *v30; 
  usercmd_s *p_ucmd; 
  const dvar_t *v32; 
  unsigned int v33; 
  char *v34; 
  BgVehiclePhysicsObjectBuffer *v35; 
  const snapshot_t *nextSnap; 
  int serverTime; 
  __int64 v38; 
  __int64 v39; 
  cg_t *LocalClientGlobals; 
  usercmd_s ucmd; 
  char v44[1032]; 

  v3 = worldId;
  v4 = this;
  if ( deltaTime <= 0.001 )
    return;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "CgVehicleSystem::PhysicsOnWorldAction");
  v5 = DCONST_DVARBOOL_bg_vehDebugVptr;
  if ( !DCONST_DVARBOOL_bg_vehDebugVptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehDebugVptr") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v6 = 0;
    v7 = v44;
    m_vehiclePhysicsObjects = v4->m_vehiclePhysicsManager.m_vehiclePhysicsObjects;
    do
    {
      *(_QWORD *)v7 = *(_QWORD *)m_vehiclePhysicsObjects->buffer;
      ++v6;
      ++m_vehiclePhysicsObjects;
      v7 += 8;
    }
    while ( v6 < 0x80 );
    v3 = worldId;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v4->m_localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  CL_GetUserCmd(v4->m_localClientNum, CmdNumber, &ucmd);
  v12 = 0;
  v13 = &v4->m_vehiclePhysicsManager.m_vehiclePhysicsObjects[0].buffer[612];
  do
  {
    if ( !*((_DWORD *)v13 - 151) )
      goto LABEL_84;
    if ( !BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)(v13 - 612)) )
    {
      Com_PrintWarning(20, "CgVehicleSystem::PhysicsOnWorldAction(). Rigid body not valid for the vehicle. Simulation skipped this frame\n");
      goto LABEL_84;
    }
    if ( *((_DWORD *)v13 - 145) != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 301, ASSERT_TYPE_ASSERT, "( vehObj->GetWorldId() == worldId )", "Vehicle object world and physics world mismatch") )
      __debugbreak();
    if ( *v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 302, ASSERT_TYPE_ASSERT, "( !vehObj->IsPmoveObject() )", "Vehicle object should not be in pmove") )
      __debugbreak();
    v14 = *((int *)v13 - 141);
    m_localClientNum = v4->m_localClientNum;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v39) = v4->m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v39) )
        __debugbreak();
    }
    if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v39) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v38) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v38, v39) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
    {
      LODWORD(v39) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v39) )
        __debugbreak();
    }
    v16 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
    if ( (unsigned int)v14 >= 0x800 )
    {
      LODWORD(v39) = 2048;
      LODWORD(v38) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v38, v39) )
        __debugbreak();
    }
    v17 = &v16->m_entities[v14];
    if ( !CgVehicleSystem::GetClientSafeConst(v4, v17) )
    {
      Com_PrintWarning(20, "CgVehicleSystem::PhysicsOnWorldAction(). VehicleClient not found, it could be destroyed during the world step. Simulation skipped this frame\n");
      goto LABEL_84;
    }
    v18 = p_predictedPlayerState->vehicleState.entity == v17->nextState.number && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u);
    v19 = v17->nextState.staticState.vehiclePlayer.playerIndex && (*((_DWORD *)v13 - 147) == 1 || v18);
    BgVehiclePhysics::SetPlayerControlled((BgVehiclePhysics *)(v13 - 612), v19);
    value = *((float *)v13 + 17);
    if ( value <= 0.0 )
    {
      v21 = BgVehiclePhysics::CheckForWorldCollision((BgVehiclePhysics *)(v13 - 612));
      if ( v21 )
      {
        value = *((float *)v13 + 17);
      }
      else
      {
        v22 = DCONST_DVARFLT_bg_vehNetNoClientGeoCooldown;
        if ( !DCONST_DVARFLT_bg_vehNetNoClientGeoCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetNoClientGeoCooldown") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        value = v22->current.value;
      }
    }
    else
    {
      v21 = v13[64];
    }
    v13[64] = v21;
    *((float *)v13 + 17) = value - deltaTime;
    if ( !*(v13 - 536) || (v23 = *((_DWORD *)v13 - 147), (v23 & 0xFFFFFFFC) != 0) || v23 == 2 )
    {
      if ( v21 && (!Physics_IsPredictiveWorld(*((Physics_WorldId *)v13 - 145)) || *(v13 - 536)) )
        v24 = 0;
      else
LABEL_59:
        v24 = 1;
      BgVehiclePhysics::SetKeyframed((BgVehiclePhysics *)(v13 - 612), v24);
      goto LABEL_61;
    }
    if ( !v21 )
      goto LABEL_59;
    BgVehiclePhysics::SetDynamic((BgVehiclePhysics *)(v13 - 612), 10.0);
LABEL_61:
    if ( BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)(v13 - 612)) )
    {
      v25 = v17->nextState.lerp.u.actor.impactVector.v[1];
      v26 = (BgVehiclePhysics *)(v13 - 612);
      if ( *(v13 - 536) )
      {
        BgVehiclePhysics::Simulate(v26, &ucmd, p_predictedPlayerState, deltaTime, NULL);
        v27 = (*(double (__fastcall **)(unsigned __int8 *))(*(_QWORD *)(v13 - 612) + 88i64))(v13 - 612);
        v17->nextState.lerp.u.actor.impactVector.v[1] = *(float *)&v27;
      }
      else
      {
        BgVehiclePhysics::Simulate(v26, NULL, NULL, deltaTime, NULL);
        v17->nextState.lerp.u.actor.impactVector.v[1] = v25;
      }
    }
    else
    {
      playerIndex = v17->nextState.staticState.vehiclePlayer.playerIndex;
      v29 = playerIndex && playerIndex - 1 == p_predictedPlayerState->clientNum;
      v30 = NULL;
      if ( v29 )
        v30 = p_predictedPlayerState;
      p_ucmd = &ucmd;
      if ( !v29 )
        p_ucmd = NULL;
      BgVehiclePhysics::SimulateClientKeyframe((BgVehiclePhysics *)(v13 - 612), p_ucmd, v30, deltaTime);
    }
    v32 = DCONST_DVARBOOL_bg_vehDebugVptr;
    if ( !DCONST_DVARBOOL_bg_vehDebugVptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehDebugVptr") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    if ( v32->current.enabled )
    {
      v33 = 0;
      v34 = v44;
      v35 = v4->m_vehiclePhysicsManager.m_vehiclePhysicsObjects;
      do
      {
        if ( *(_QWORD *)v34 != *(_QWORD *)v35->buffer )
        {
          LODWORD(v39) = v12;
          LODWORD(v38) = v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 371, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Virtual table pointer for vehicle index %d was overriden by vehicle index %d", v38, v39) )
            __debugbreak();
        }
        ++v33;
        ++v35;
        v34 += 8;
      }
      while ( v33 < 0x80 );
      v4 = this;
      p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    }
LABEL_84:
    ++v12;
    v13 += 3360;
    v3 = worldId;
  }
  while ( v12 < 0x80 );
  v4->m_lastPhysicsStepTime = deltaTime;
  nextSnap = LocalClientGlobals->nextSnap;
  if ( nextSnap )
    serverTime = nextSnap->GetPlayerState(nextSnap, (const LocalClientNum_t)v4->m_localClientNum)->serverTime;
  else
    serverTime = LocalClientGlobals->time;
  v4->m_vehiclePhysicsManager.m_lagTime = (float)(LocalClientGlobals->time - serverTime) * 0.001;
  Sys_ProfEndNamedEvent();
}

/*
==============
CgVehicleSystem::PhysicsProcessDeferredEvents
==============
*/
void CgVehicleSystem::PhysicsProcessDeferredEvents(CgVehicleSystem *this)
{
  BgVehicleEventSystem *v2; 
  volatile int v3; 
  VehicleScriptableDmg *p_m_scriptableDamageInfo; 
  unsigned int vehEntNum; 
  unsigned int scriptableIndex; 
  centity_t *Entity; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableDamageEvent damageEvent; 

  v2 = (BgVehicleEventSystem *)this->PhysicsGetEventSystem(this);
  BgVehicleEventSystem::ProcessDeferredEvents(v2);
  v3 = 0;
  if ( this->m_scriptableDamageInfo.m_cursor > 0 )
  {
    p_m_scriptableDamageInfo = &this->m_scriptableDamageInfo;
    do
    {
      if ( p_m_scriptableDamageInfo->m_scriptablesToDamage[0].vehEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 639, ASSERT_TYPE_ASSERT, "(dmg.vehEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "dmg.vehEntNum != ENTITYNUM_NONE") )
        __debugbreak();
      if ( p_m_scriptableDamageInfo->m_scriptablesToDamage[0].scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 640, ASSERT_TYPE_ASSERT, "(dmg.scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "dmg.scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
        __debugbreak();
      vehEntNum = p_m_scriptableDamageInfo->m_scriptablesToDamage[0].vehEntNum;
      scriptableIndex = p_m_scriptableDamageInfo->m_scriptablesToDamage[0].scriptableIndex;
      ScriptableCommon_AssertCountsInitialized();
      if ( scriptableIndex < g_scriptableWorldCounts.totalInstanceCount )
      {
        damageEvent.def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)this->m_localClientNum, scriptableIndex)->def;
        if ( damageEvent.def )
        {
          Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, vehEntNum);
          CG_GetPoseOrigin(&Entity->pose, &damageEvent.start);
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)this->m_localClientNum, scriptableIndex);
          ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &damageEvent.end);
          damageEvent.context = ScriptableCl_LocalClientToContext((const LocalClientNum_t)this->m_localClientNum);
          damageEvent.callbacks = ScriptableCl_GetCallbackTable();
          damageEvent.scriptableIndex = scriptableIndex;
          *(_OWORD *)&damageEvent.partName = _xmm;
          damageEvent.inflictorEntState = &Entity->nextState;
          damageEvent.attackerEntState = &Entity->nextState;
          *(double *)&damageEvent.weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
          *(_DWORD *)&damageEvent.weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
          damageEvent.inflictorEntNum = vehEntNum;
          damageEvent.inflictorScriptableIndex = 500000;
          damageEvent.attackerEntNum = vehEntNum;
          memset(&damageEvent.modelIndex, 0, 52);
          damageEvent.isAlternate = 0;
          ScriptableBg_ProcessDamageEvent(&damageEvent);
        }
      }
      ++v3;
      p_m_scriptableDamageInfo = (VehicleScriptableDmg *)((char *)p_m_scriptableDamageInfo + 8);
    }
    while ( v3 < this->m_scriptableDamageInfo.m_cursor );
  }
  this->m_scriptableDamageInfo.m_cursor = 0;
}

/*
==============
CgVehicleSystem::PhysicsRadialMotionBlur
==============
*/
char CgVehicleSystem::PhysicsRadialMotionBlur(CgVehicleSystem *this, const playerState_s *ps)
{
  const BgVehiclePhysics *VehicleObjectFromPs; 
  BgVehiclePhysics *v4; 
  unsigned int m_vehicleAnimProfile; 
  int v6; 
  float v8; 
  __int128 v11; 
  const dvar_t *v12; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  cg_t *LocalClientGlobals; 
  bool v19; 
  vec3_t outVelLs; 

  VehicleObjectFromPs = CgVehicleSystem::PhysicsGetVehicleObjectFromPs(this, ps);
  v4 = (BgVehiclePhysics *)VehicleObjectFromPs;
  if ( !VehicleObjectFromPs )
    return 0;
  if ( !VehicleObjectFromPs->SupportsFeature((BgVehiclePhysics *)VehicleObjectFromPs, VPFEAT_CAMERA_RADIAL_BLUR) )
    return 0;
  m_vehicleAnimProfile = v4->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile <= 0x13 )
  {
    v6 = 720916;
    if ( _bittest(&v6, m_vehicleAnimProfile) )
      return 0;
  }
  BgVehiclePhysics::ComputeVelocityLocalSpace(v4, &v4->m_linearVelocityWs, &outVelLs);
  _XMM0 = LODWORD(outVelLs.v[0]);
  v8 = (float)(*(float *)&_XMM0 * *(float *)&_XMM0) + (float)(outVelLs.v[1] * outVelLs.v[1]);
  *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(v4);
  __asm { vmaxss  xmm1, xmm0, cs:__real@41200000 }
  *((_QWORD *)&_XMM0 + 1) = 0i64;
  *(double *)&_XMM0 = I_fclamp(fsqrt(v8) * (float)(1.0 / *(float *)&_XMM1), 0.0, 1.0);
  v11 = _XMM0;
  *(float *)&v11 = *(float *)&_XMM0 - 0.5;
  _XMM1 = v11;
  v12 = DCONST_DVARMODEFLT_cg_thirdPersonCarBlurStrength;
  __asm { vmaxss  xmm1, xmm1, xmm6 }
  v14 = *(float *)&_XMM1 * 2.0;
  if ( !DCONST_DVARMODEFLT_cg_thirdPersonCarBlurStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonCarBlurStrength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v15 = v14 * v12->current.value;
  v16 = DCONST_DVARMODEFLT_cg_thirdPersonCarBlurRadius;
  if ( !DCONST_DVARMODEFLT_cg_thirdPersonCarBlurRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonCarBlurRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = v14 * v16->current.value;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 838, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v19 = v17 > 0.001 && v15 > 0.001;
  LocalClientGlobals->refdef.radialMotionBlur.radius = v17;
  LocalClientGlobals->refdef.radialMotionBlur.strength = v15;
  LocalClientGlobals->refdef.radialMotionBlur.enabled = v19;
  return 1;
}

/*
==============
CgVehicleSystem::PhysicsSimulateVehiclePmove
==============
*/
void CgVehicleSystem::PhysicsSimulateVehiclePmove(CgVehicleSystem *this, pmove_t *pm, const pml_t *pml)
{
  if ( (!pm || !pm->ps) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 235, ASSERT_TYPE_ASSERT, "(pm && pm->ps)", (const char *)&queryFormat, "pm && pm->ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 236, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( pm->ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 237, ASSERT_TYPE_ASSERT, "(pm->ps->vehicleState.entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "pm->ps->vehicleState.entity != ENTITYNUM_NONE") )
    __debugbreak();
}

/*
==============
CgVehicleSystem::PhysicsTouchAuthoritativeScriptables
==============
*/
void CgVehicleSystem::PhysicsTouchAuthoritativeScriptables(CgVehicleSystem *this, const centity_t *vehEnt, const BgVehiclePhysics *vehObj)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  entityState_t *p_nextState; 
  LocalClientNum_t m_localClientNum; 
  int number; 
  int v11; 
  unsigned int Instance; 
  unsigned int v13; 
  const VehicleDef *v14; 
  __int128 v15; 
  float v18; 
  float v19; 
  unsigned int PhysicsBodyId; 
  unsigned int v21; 
  HavokPhysics_BroadphaseCollisionQueryResult *v22; 
  unsigned int HitBodyId; 
  int Ref; 
  __int32 v25; 
  unsigned int v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int v29; 
  DynEntityList *DynEntityList; 
  __int64 v31; 
  unsigned int runtimeInstanceCount; 
  unsigned int PhysInstanceId; 
  unsigned int v34; 
  vec3_t *angVel; 
  vec3_t *newOrigin; 
  DynEntityBasis basisOut[4]; 
  unsigned int RigidBodyID; 
  unsigned int dynEntIdOut; 
  unsigned int NumHits; 
  entityState_t *v41; 
  const VehicleDef *v42; 
  HavokPhysics_BroadphaseCollisionQueryResult *BroadphaseCollisionResult; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  vec3_t position; 
  vec4_t orientation; 
  vec4_t out; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 

  p_nextState = &vehEnt->nextState;
  m_localClientNum = this->m_localClientNum;
  number = vehEnt->nextState.number;
  v41 = p_nextState;
  v11 = 3 * m_localClientNum + 3;
  Instance = CG_PhysicsObject_GetInstance((Physics_WorldId)v11, number, m_localClientNum);
  if ( Instance != -1 )
  {
    RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v11, Instance, 0);
    v13 = RigidBodyID;
    if ( (RigidBodyID & 0xFFFFFF) != 0xFFFFFF )
    {
      v42 = this->GetVehicleDef(this, p_nextState);
      v14 = v42;
      Physics_GetRigidBodyAABB((Physics_WorldId)v11, RigidBodyID, &aabbMin, &aabbMax);
      aabbMax.v[2] = aabbMax.v[2] + maxUpExtension;
      v15 = *(unsigned __int64 *)vec3_origin.v;
      aabbMin.v[2] = aabbMin.v[2] - maxDownExtension;
      position = vec3_origin;
      orientation = vec4_origin;
      if ( v42->accurateShapeOverlap )
      {
        if ( BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)vehObj) )
        {
          v52 = v3;
          v51 = v4;
          v50 = v5;
          *(double *)&v15 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehScrLookAheadTimeClient, "bg_vehScrLookAheadTimeClient");
          _XMM7 = v15;
          AxisToQuat((const tmat33_t<vec3_t> *)&vehObj->m_transform, &out);
          __asm { vmaxss  xmm1, xmm7, xmm6; deltaTime }
          BgVehiclePhysics::IntegrateVelocities((BgVehiclePhysics *)vehObj, *(float *)&_XMM1, &vehObj->m_transform.m[3], &out, &vehObj->m_linearVelocityWs, &vehObj->m_angularVelocityWs, &position, &orientation);
          v18 = position.v[0] - (float)((float)(aabbMax.v[0] + aabbMin.v[0]) * 0.5);
          v19 = (float)(aabbMax.v[1] + aabbMin.v[1]) * 0.5;
          aabbMin.v[1] = (float)(position.v[1] - v19) + aabbMin.v[1];
          aabbMin.v[0] = v18 + aabbMin.v[0];
          aabbMax.v[1] = (float)(position.v[1] - v19) + aabbMax.v[1];
          aabbMax.v[0] = v18 + aabbMax.v[0];
        }
        else if ( BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)vehObj) )
        {
          PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)vehObj);
          Physics_GetRigidBodyTransform((const Physics_WorldId)vehObj->m_worldId, PhysicsBodyId, &position, &orientation);
        }
      }
      v21 = 0;
      extendedData.contents = 8321;
      extendedData.phaseSelection = All;
      extendedData.ignoreBodies = NULL;
      BroadphaseCollisionResult = PhysicsVehicle_GetBroadphaseCollisionResult((Physics_WorldId)v11);
      v22 = BroadphaseCollisionResult;
      if ( !BroadphaseCollisionResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 498, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
        __debugbreak();
      HavokPhysics_BroadphaseCollisionQueryResult::Reset(BroadphaseCollisionResult);
      this->m_scriptableDamageInfo.m_cursor = 0;
      Physics_AABBBroadphaseQuery((Physics_WorldId)v11, &aabbMin, &aabbMax, &extendedData, v22);
      NumHits = HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(v22);
      if ( NumHits )
      {
        do
        {
          HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(v22, v21);
          Ref = Physics_GetRef((Physics_WorldId)v11, HitBodyId);
          v25 = Physics_GetRefSystem(Ref) - 1;
          if ( v25 )
          {
            if ( v25 != 7 )
              goto LABEL_42;
            v26 = Ref & 0x3FFFFF;
          }
          else
          {
            DynEnt_GetBasisAndDynEntId(Ref, (const LocalClientNum_t)this->m_localClientNum, basisOut, &dynEntIdOut);
            SLOBYTE(v27) = basisOut[0];
            v28 = dynEntIdOut & 0x7FFFF;
            v29 = dynEntIdOut >> 19;
            if ( basisOut[0] >= DYNENT_BASIS_COUNT )
            {
              LODWORD(newOrigin) = 2;
              LODWORD(angVel) = (unsigned __int8)basisOut[0];
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", angVel, newOrigin) )
                __debugbreak();
            }
            DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v29);
            if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
              __debugbreak();
            v27 = (unsigned __int8)v27;
            if ( (unsigned int)v28 >= DynEntityList->dynEntCount[(unsigned __int8)v27] )
            {
              LODWORD(newOrigin) = DynEntityList->dynEntCount[(unsigned __int8)v27];
              LODWORD(angVel) = v28;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", angVel, newOrigin) )
                __debugbreak();
            }
            v31 = (__int64)&DynEntityList->dynEntDefList[v27][v28];
            if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 532, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
              __debugbreak();
            if ( (unsigned __int8)(*(_BYTE *)(v31 + 50) - 3) > 1u )
              goto LABEL_42;
            if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 113, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
              __debugbreak();
            if ( *(_DWORD *)(v31 + 60) >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
              goto LABEL_42;
            ScriptableCommon_AssertCountsInitialized();
            runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
            if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
              __debugbreak();
            v26 = runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount + *(_DWORD *)(v31 + 60);
            ScriptableCommon_AssertCountsInitialized();
            if ( v26 >= g_scriptableWorldCounts.totalInstanceCount )
              goto LABEL_42;
            p_nextState = v41;
            v13 = RigidBodyID;
            v14 = v42;
          }
          if ( v26 != -1 )
          {
            if ( !v14->accurateShapeOverlap || (PhysInstanceId = ScriptableCl_GetPhysInstanceId((const LocalClientNum_t)this->m_localClientNum, v26), PhysInstanceId == -1) || (v34 = Physics_GetRigidBodyID((const Physics_WorldId)v11, PhysInstanceId, 0), PhysicsVehicle_Overlap_Shapes((Physics_WorldId)v11, v13, &position, &orientation, v34)) )
            {
              if ( !VehicleScriptableDmg::Add(&this->m_scriptableDamageInfo, p_nextState->number, v26) )
                return;
            }
          }
LABEL_42:
          v22 = BroadphaseCollisionResult;
          ++v21;
          p_nextState = v41;
          v13 = RigidBodyID;
          v14 = v42;
        }
        while ( v21 < NumHits );
      }
    }
  }
}

/*
==============
CgVehicleSystem::PhysicsUnpackLerpStateValues
==============
*/
void CgVehicleSystem::PhysicsUnpackLerpStateValues(CgVehicleSystem *this, int entityIndex, float *outGasInput, bool *outIsBraking, float *outWheelAveSpinSpeed)
{
  centity_t *Entity; 
  int v11; 

  if ( (unsigned int)entityIndex >= 0x7FF )
  {
    v11 = 2047;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1224, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ENTITYNUM_NONE )", "entityIndex doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", entityIndex, v11) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityIndex);
  *outGasInput = 0.0;
  *outIsBraking = 0;
  *outWheelAveSpinSpeed = 0.0;
  BGVehicles::PhysicsUnpackLerpStateValues(this, (const LerpEntityStateVehicle *)&Entity->prevState.u, outGasInput, outIsBraking, outWheelAveSpinSpeed);
}

/*
==============
CgVehicleSystem::PhysicsUpdateCharacterWobbleAnimData
==============
*/
void CgVehicleSystem::PhysicsUpdateCharacterWobbleAnimData(CgVehicleSystem *this, const characterInfo_t *ci, unsigned int vehicleId, float frameTime, wobbleAnim_t *outData)
{
  const BgVehiclePhysics *ObjectById; 
  VehicleWorldmodelAAnim *p_angles; 
  vec3_t entOrg; 
  tmat33_t<vec3_t> axis; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1201, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1202, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(vehicleId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1203, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleId )") )
    __debugbreak();
  if ( frameTime > 0.0 )
  {
    ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
    p_angles = (VehicleWorldmodelAAnim *)&CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, ci->entityNum)->pose.angles;
    if ( ci->vehicleAnimation.seat != VEHICLE_SEAT_DRIVER )
      p_angles = &ci->vehicleAnimation;
    AnglesToAxis(&p_angles->viewAngles, &axis);
    entOrg = ObjectById->m_transform.row3;
    BGVehicles::PhysicsUpdateCharacterWobbleAnimDataCommon(this, ObjectById, &axis, &entOrg, ci, frameTime, outData);
  }
}

/*
==============
CgVehicleSystem::PhysicsUpdateCmdValues
==============
*/
void CgVehicleSystem::PhysicsUpdateCmdValues(CgVehicleSystem *this, usercmd_s *cmd)
{
  int v2; 
  unsigned __int8 *i; 

  v2 = 0;
  for ( i = &this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects[0].buffer[76]; !*((_DWORD *)i - 17) || !*i || !BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)(i - 76)) || ((*((_DWORD *)i - 13) - 1) & 0xFFFFFFFD) != 0; i += 3360 )
  {
    if ( (unsigned int)++v2 >= 0x80 )
      return;
  }
  BgVehiclePhysics::QueryValuesFromPhysics((BgVehiclePhysics *)(i - 76), cmd, i[600]);
}

/*
==============
CgVehicleSystem::PhysicsUpdateEntityBounds
==============
*/
void CgVehicleSystem::PhysicsUpdateEntityBounds(CgVehicleSystem *this, int entityIndex, const ExtentBounds *extBounds)
{
  ;
}

/*
==============
CgVehicleSystem::PhysicsVehicleHasAnim
==============
*/
bool CgVehicleSystem::PhysicsVehicleHasAnim(CgVehicleSystem *this, const BgVehiclePhysics *vehobj)
{
  centity_t *Entity; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, vehobj->m_entityNumber);
  return Entity && Entity->nextState.animInfo.animData >= 2;
}

/*
==============
CgVehicleSystem::PhysicsWrite
==============
*/
void CgVehicleSystem::PhysicsWrite(CgVehicleSystem *this, MemoryFile *memFile)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 220, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehicleSystem::PhysicsWrite: I don't think this makes sense in the client") )
    __debugbreak();
}

