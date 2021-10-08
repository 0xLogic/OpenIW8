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
  __int64 v14; 
  __int64 v15; 

  _R13 = this;
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
      m_localClientNum = _R13->m_localClientNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v15) = _R13->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v15) )
          __debugbreak();
      }
      if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v15) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v14) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
      {
        LODWORD(v15) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v15) )
          __debugbreak();
      }
      v9 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
      if ( (unsigned int)m_entityNumber >= 0x800 )
      {
        LODWORD(v15) = 2048;
        LODWORD(v14) = m_entityNumber;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      v10 = &v9->m_entities[m_entityNumber];
      if ( CgVehicleSystem::GetClientSafeConst(_R13, v10) )
      {
        if ( m_vehiclePhysicsObjects->m_playerControlled )
        {
          v11 = !m_vehiclePhysicsObjects->m_clientGeoLoaded && BgVehiclePhysics::GetNoClientGeoMode(m_vehiclePhysicsObjects) == NOCLIENTGEO_SWITCH_TO_SERVER_AUTH;
          if ( BgVehiclePhysics::IsDynamic(m_vehiclePhysicsObjects) && m_vehiclePhysicsObjects->m_netcodeType == VEH_NETCODE_CLIENT_PRED_SB && !v11 )
          {
            __asm { vmovss  xmm2, dword ptr [r13+119510h]; dt }
            BgVehiclePhysics::ClientWarpDetection(m_vehiclePhysicsObjects, &LocalClientGlobals->predictedPlayerState, *(float *)&_XMM2);
          }
          BgVehiclePhysics::QueryValuesFromPhysics(m_vehiclePhysicsObjects, &LocalClientGlobals->predictedPlayerState);
        }
        __asm { vmovss  xmm1, dword ptr [r13+119510h] }
        ((void (__fastcall *)(BgVehiclePhysics *))m_vehiclePhysicsObjects->AfterPhysicsWorldStep)(m_vehiclePhysicsObjects);
        CgVehicleSystem::PhysicsTouchAuthoritativeScriptables(_R13, v10, m_vehiclePhysicsObjects);
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
  BgVehiclePhysics *v4; 
  bool v5; 
  const dvar_t *v6; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rdx+2A8h]
  }
  v4 = vehObj;
  v5 = BgVehiclePhysics::CheckForWorldCollision(vehObj);
  if ( !v5 )
  {
    v6 = DCONST_DVARFLT_bg_vehNetNoClientGeoCooldown;
    if ( !DCONST_DVARFLT_bg_vehNetNoClientGeoCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetNoClientGeoCooldown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    LODWORD(v4->m_clientGeoTimeToCheck) = v6->current.integer;
  }
  return v5;
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
      __asm
      {
        vmovdqu xmm0, cs:__xmm@000000000001869f0000000c00000000
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      }
      damageEvent.callbacks = ScriptableCl_GetCallbackTable();
      damageEvent.modelIndex = 0;
      __asm
      {
        vmovdqu xmmword ptr [rsp+0F8h+damageEvent.partName], xmm0
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups ymmword ptr [rsp+0F8h+damageEvent.weapon.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      }
      damageEvent.inflictorEntState = &Entity->nextState;
      damageEvent.attackerEntState = &Entity->nextState;
      damageEvent.isAlternate = 0;
      __asm { vmovsd  qword ptr [rsp+0F8h+damageEvent.weapon.attachmentVariationIndices+15h], xmm0 }
      damageEvent.scriptableIndex = scriptableIndex;
      damageEvent.inflictorEntNum = vehEntNum;
      damageEvent.inflictorScriptableIndex = 500000;
      damageEvent.attackerEntNum = vehEntNum;
      __asm { vmovups xmmword ptr [rsp+0F8h+damageEvent.weapon.attachmentVariationIndices+5], xmm1 }
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
  vec3_t outOrigin; 
  __int64 v7; 
  Bounds out_bounds; 

  v7 = -2i64;
  if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 989, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  if ( drawBBox )
  {
    _RDI = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, vehObj->m_entityNumber);
    CG_GetPoseOrigin(&_RDI->pose, &outOrigin);
    CgVehicleSystem::GetDObjFirstModelBounds(this, _RDI, &out_bounds);
    __asm { vmovss  xmm2, dword ptr [rdi+4Ch]; yaw }
    CG_DebugBox(&outOrigin, &out_bounds, *(float *)&_XMM2, &colorOrange, 0, 0);
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

double __fastcall CgVehicleSystem::PhysicsGetDelayToStartDriving(CgVehicleSystem *this, const BgVehiclePhysics *vehObj, int driverEntNum, double defaultTime)
{
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  int v13; 
  unsigned int timeModified; 

  v5 = driverEntNum;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( driverEntNum == 2047 )
    goto LABEL_12;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)v5 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      timeModified = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
      v13 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v13, timeModified) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v5);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v5);
  }
  if ( CharacterInfo && CharacterInfo->infoValid && CharacterInfo->vehicleAnimation.prevSeat )
  {
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehDelayFromPassenger, "bg_vehDelayFromPassenger");
  }
  else
  {
LABEL_12:
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  return *(double *)&_XMM0;
}

/*
==============
CgVehicleSystem::PhysicsGetFovDelta
==============
*/
float CgVehicleSystem::PhysicsGetFovDelta(CgVehicleSystem *this, const playerState_s *ps)
{
  const BgVehiclePhysics *VehicleObjectFromPs; 
  const BgVehiclePhysics *v5; 
  const dvar_t *v6; 
  ClientCameraData *Data; 

  VehicleObjectFromPs = CgVehicleSystem::PhysicsGetVehicleObjectFromPs(this, ps);
  v5 = VehicleObjectFromPs;
  if ( !VehicleObjectFromPs || !VehicleObjectFromPs->SupportsFeature((BgVehiclePhysics *)VehicleObjectFromPs, VPFEAT_CAMERA_FOV_CHANGE) )
    goto LABEL_12;
  v6 = DVARBOOL_bg_vehEnableInverseView;
  if ( !DVARBOOL_bg_vehEnableInverseView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnableInverseView") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled || (Data = CG_Camera_GetData(this->m_localClientNum, CAMERA_CAR), !Data->initialized) || !Data->orbitCamData.inverseView )
  {
    if ( CG_Camera_AllowFovDelta(this->m_localClientNum) )
    {
      v5->GetCameraFovDelta((BgVehiclePhysics *)v5);
      return *(float *)&_XMM0;
    }
LABEL_12:
    __asm { vxorps  xmm0, xmm0, xmm0 }
    return *(float *)&_XMM0;
  }
  __asm { vmovss  xmm0, cs:__real@41200000 }
  return *(float *)&_XMM0;
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
  __int64 v15; 
  char *fmt; 
  __int64 v26; 
  char v27; 
  int v28; 
  int v32; 

  v26 = -2i64;
  _RBP = outOrg;
  _R15 = ps;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  commandTime = _R15->commandTime;
  v9 = CmdNumber - 127;
  if ( CmdNumber - 127 > CmdNumber )
  {
LABEL_14:
    __asm
    {
      vmovsd  xmm0, qword ptr [r15+12Ch]
      vmovsd  qword ptr [rbp+0], xmm0
    }
    _RBP->v[2] = _R15->vehicleState.origin.v[2];
    return;
  }
  while ( 1 )
  {
    v10 = ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum);
    v11 = ClActiveClient_GetCmdNumber(v10);
    v12 = v11;
    v32 = v11;
    if ( v9 > v11 )
    {
      LODWORD(fmt) = v11;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)v9, fmt);
    }
    if ( v9 > v12 - 128 && v9 > 0 )
      break;
    memset(&v32, 0, sizeof(v32));
LABEL_13:
    if ( ++v9 > CmdNumber )
      goto LABEL_14;
  }
  _RBX = &v10->cmds[v9 & 0x7F];
  memset(&v32, 0, sizeof(v32));
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd", v26) )
    __debugbreak();
  _RCX = &v27;
  v15 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups xmm0, xmmword ptr [rbx+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RBX = (usercmd_s *)((char *)_RBX + 128);
    --v15;
  }
  while ( v15 );
  *(_QWORD *)_RCX = _RBX->buttons;
  if ( v28 != commandTime )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, [rsp+178h+var_78]
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm1, [rsp+178h+var_74]
    vmovss  dword ptr [rbp+4], xmm1
    vmovss  xmm0, [rsp+178h+var_70]
    vmovss  dword ptr [rbp+8], xmm0
  }
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

void __fastcall CgVehicleSystem::PhysicsOnWorldAction(CgVehicleSystem *this, Physics_WorldId worldId, double deltaTime)
{
  Physics_WorldId v11; 
  const dvar_t *v14; 
  unsigned int v15; 
  char *v16; 
  BgVehiclePhysicsObjectBuffer *m_vehiclePhysicsObjects; 
  const playerState_s *p_predictedPlayerState; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  unsigned int v21; 
  __int64 v25; 
  __int64 m_localClientNum; 
  CgEntitySystem *v27; 
  bool v29; 
  bool v30; 
  char v32; 
  char v33; 
  unsigned __int8 v34; 
  int v36; 
  bool v38; 
  BgVehiclePhysics *v41; 
  unsigned __int8 playerIndex; 
  bool v44; 
  const playerState_s *v45; 
  usercmd_s *p_ucmd; 
  const dvar_t *v48; 
  unsigned int v49; 
  char *v50; 
  BgVehiclePhysicsObjectBuffer *v51; 
  const snapshot_t *nextSnap; 
  __int64 v62; 
  char *fmt; 
  __int64 v64; 
  __int64 v65; 
  Physics_WorldId v66; 
  CgVehicleSystem *v67; 
  playerState_s *v68; 
  cg_t *LocalClientGlobals; 
  __int64 v70; 
  usercmd_s ucmd; 
  char v72[1032]; 
  char v73; 
  void *retaddr; 

  _RAX = &retaddr;
  v70 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmm7, xmm2
  }
  v11 = worldId;
  v66 = worldId;
  _R13 = this;
  v67 = this;
  __asm
  {
    vmovss  xmm8, cs:__real@3a83126f
    vcomiss xmm2, xmm8
  }
  if ( (unsigned __int64)&v62 == _security_cookie )
    goto LABEL_88;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "CgVehicleSystem::PhysicsOnWorldAction");
  v14 = DCONST_DVARBOOL_bg_vehDebugVptr;
  if ( !DCONST_DVARBOOL_bg_vehDebugVptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehDebugVptr") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    v15 = 0;
    v16 = v72;
    m_vehiclePhysicsObjects = _R13->m_vehiclePhysicsManager.m_vehiclePhysicsObjects;
    do
    {
      *(_QWORD *)v16 = *(_QWORD *)m_vehiclePhysicsObjects->buffer;
      ++v15;
      ++m_vehiclePhysicsObjects;
      v16 += 8;
    }
    while ( v15 < 0x80 );
    v11 = v66;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)_R13->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  v68 = &LocalClientGlobals->predictedPlayerState;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)_R13->m_localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  CL_GetUserCmd(_R13->m_localClientNum, CmdNumber, &ucmd);
  v21 = 0;
  _RBP = &_R13->m_vehiclePhysicsManager.m_vehiclePhysicsObjects[0].buffer[612];
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vmovss  xmm9, cs:__real@41200000
  }
  do
  {
    if ( !*((_DWORD *)_RBP - 151) )
      goto LABEL_84;
    if ( !BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)(_RBP - 612)) )
    {
      Com_PrintWarning(20, "CgVehicleSystem::PhysicsOnWorldAction(). Rigid body not valid for the vehicle. Simulation skipped this frame\n");
      goto LABEL_84;
    }
    if ( *((_DWORD *)_RBP - 145) != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 301, ASSERT_TYPE_ASSERT, "( vehObj->GetWorldId() == worldId )", "Vehicle object world and physics world mismatch") )
      __debugbreak();
    if ( *_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 302, ASSERT_TYPE_ASSERT, "( !vehObj->IsPmoveObject() )", "Vehicle object should not be in pmove") )
      __debugbreak();
    v25 = *((int *)_RBP - 141);
    m_localClientNum = _R13->m_localClientNum;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v65) = _R13->m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v65) )
        __debugbreak();
    }
    if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v65) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v64) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v64, v65) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
    {
      LODWORD(v65) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v65) )
        __debugbreak();
    }
    v27 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
    if ( (unsigned int)v25 >= 0x800 )
    {
      LODWORD(v65) = 2048;
      LODWORD(v64) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v64, v65) )
        __debugbreak();
    }
    _RSI = &v27->m_entities[v25];
    if ( !CgVehicleSystem::GetClientSafeConst(_R13, _RSI) )
    {
      Com_PrintWarning(20, "CgVehicleSystem::PhysicsOnWorldAction(). VehicleClient not found, it could be destroyed during the world step. Simulation skipped this frame\n");
      goto LABEL_84;
    }
    v29 = p_predictedPlayerState->vehicleState.entity == _RSI->nextState.number && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u);
    v30 = _RSI->nextState.staticState.vehiclePlayer.playerIndex && (*((_DWORD *)_RBP - 147) == 1 || v29);
    BgVehiclePhysics::SetPlayerControlled((BgVehiclePhysics *)(_RBP - 612), v30);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+44h]
      vcomiss xmm0, xmm10
    }
    if ( v32 | v33 )
    {
      v34 = BgVehiclePhysics::CheckForWorldCollision((BgVehiclePhysics *)(_RBP - 612));
      if ( v34 )
      {
        __asm { vmovss  xmm0, dword ptr [rbp+44h] }
      }
      else
      {
        _RBX = DCONST_DVARFLT_bg_vehNetNoClientGeoCooldown;
        if ( !DCONST_DVARFLT_bg_vehNetNoClientGeoCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetNoClientGeoCooldown") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm0, dword ptr [rbx+28h] }
      }
    }
    else
    {
      v34 = _RBP[64];
    }
    _RBP[64] = v34;
    __asm
    {
      vsubss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rbp+44h], xmm0
    }
    if ( !*(_RBP - 536) || (v36 = *((_DWORD *)_RBP - 147), (v36 & 0xFFFFFFFC) != 0) || v36 == 2 )
    {
      if ( v34 && (!Physics_IsPredictiveWorld(*((Physics_WorldId *)_RBP - 145)) || *(_RBP - 536)) )
        v38 = 0;
      else
LABEL_59:
        v38 = 1;
      BgVehiclePhysics::SetKeyframed((BgVehiclePhysics *)(_RBP - 612), v38);
      goto LABEL_61;
    }
    if ( !v34 )
      goto LABEL_59;
    __asm { vmovaps xmm1, xmm9; minTimeDynamic }
    BgVehiclePhysics::SetDynamic((BgVehiclePhysics *)(_RBP - 612), *(float *)&_XMM1);
LABEL_61:
    if ( BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)(_RBP - 612)) )
    {
      __asm { vmovss  xmm6, dword ptr [rsi+1F8h] }
      fmt = NULL;
      __asm { vmovaps xmm3, xmm7; deltaTime }
      v41 = (BgVehiclePhysics *)(_RBP - 612);
      if ( *(_RBP - 536) )
      {
        BgVehiclePhysics::Simulate(v41, &ucmd, p_predictedPlayerState, *(float *)&_XMM3, (const BgVehiclePhysics *)fmt);
        *(double *)&_XMM0 = (*(double (__fastcall **)(unsigned __int8 *))(*(_QWORD *)(_RBP - 612) + 88i64))(_RBP - 612);
        __asm
        {
          vmovaps xmm6, xmm0
          vmovss  dword ptr [rsi+1F8h], xmm0
        }
      }
      else
      {
        BgVehiclePhysics::Simulate(v41, NULL, NULL, *(float *)&_XMM3, (const BgVehiclePhysics *)fmt);
        __asm { vmovss  dword ptr [rsi+1F8h], xmm6 }
      }
    }
    else
    {
      playerIndex = _RSI->nextState.staticState.vehiclePlayer.playerIndex;
      v44 = playerIndex && playerIndex - 1 == p_predictedPlayerState->clientNum;
      v45 = NULL;
      if ( v44 )
        v45 = p_predictedPlayerState;
      p_ucmd = &ucmd;
      if ( !v44 )
        p_ucmd = NULL;
      __asm { vmovaps xmm3, xmm7; deltaTime }
      BgVehiclePhysics::SimulateClientKeyframe((BgVehiclePhysics *)(_RBP - 612), p_ucmd, v45, *(float *)&_XMM3);
    }
    v48 = DCONST_DVARBOOL_bg_vehDebugVptr;
    if ( !DCONST_DVARBOOL_bg_vehDebugVptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehDebugVptr") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    if ( v48->current.enabled )
    {
      v49 = 0;
      v50 = v72;
      v51 = _R13->m_vehiclePhysicsManager.m_vehiclePhysicsObjects;
      do
      {
        if ( *(_QWORD *)v50 != *(_QWORD *)v51->buffer )
        {
          LODWORD(v65) = v21;
          LODWORD(v64) = v49;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 371, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Virtual table pointer for vehicle index %d was overriden by vehicle index %d", v64, v65) )
            __debugbreak();
        }
        ++v49;
        ++v51;
        v50 += 8;
      }
      while ( v49 < 0x80 );
      _R13 = v67;
      p_predictedPlayerState = v68;
    }
LABEL_84:
    ++v21;
    _RBP += 3360;
    v11 = v66;
  }
  while ( v21 < 0x80 );
  __asm { vmovss  dword ptr [r13+119510h], xmm7 }
  nextSnap = LocalClientGlobals->nextSnap;
  if ( nextSnap )
    nextSnap->GetPlayerState((snapshot_t *)nextSnap, (const LocalClientNum_t)_R13->m_localClientNum);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm8
    vmovss  dword ptr [r13+12E10h], xmm1
  }
  Sys_ProfEndNamedEvent();
LABEL_88:
  _R11 = &v73;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
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
          __asm
          {
            vmovdqu xmm0, cs:__xmm@000000000001869f0000000c00000000
            vmovups ymm1, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
          }
          damageEvent.callbacks = ScriptableCl_GetCallbackTable();
          damageEvent.scriptableIndex = scriptableIndex;
          __asm
          {
            vmovdqu xmmword ptr [rsp+118h+damageEvent.partName], xmm0
            vmovups xmm0, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
            vmovups ymmword ptr [rsp+118h+damageEvent.weapon.weaponIdx], ymm1
            vmovsd  xmm1, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
          }
          damageEvent.inflictorEntState = &Entity->nextState;
          damageEvent.attackerEntState = &Entity->nextState;
          __asm
          {
            vmovups xmmword ptr [rsp+118h+damageEvent.weapon.attachmentVariationIndices+5], xmm0
            vmovsd  qword ptr [rsp+118h+damageEvent.weapon.attachmentVariationIndices+15h], xmm1
          }
          *(_DWORD *)&damageEvent.weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
          damageEvent.inflictorEntNum = vehEntNum;
          damageEvent.inflictorScriptableIndex = 500000;
          damageEvent.attackerEntNum = vehEntNum;
          damageEvent.modelIndex = 0;
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
  BgVehiclePhysics *v6; 
  unsigned int m_vehicleAnimProfile; 
  int v8; 
  const dvar_t *v22; 
  const dvar_t *v26; 
  bool v29; 
  bool v30; 
  char v32; 
  vec3_t outVelLs; 

  VehicleObjectFromPs = CgVehicleSystem::PhysicsGetVehicleObjectFromPs(this, ps);
  v6 = (BgVehiclePhysics *)VehicleObjectFromPs;
  if ( !VehicleObjectFromPs )
    return 0;
  if ( !VehicleObjectFromPs->SupportsFeature((BgVehiclePhysics *)VehicleObjectFromPs, VPFEAT_CAMERA_RADIAL_BLUR) )
    return 0;
  m_vehicleAnimProfile = v6->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile <= 0x13 )
  {
    v8 = 720916;
    if ( _bittest(&v8, m_vehicleAnimProfile) )
      return 0;
  }
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
  }
  BgVehiclePhysics::ComputeVelocityLocalSpace(v6, &v6->m_linearVelocityWs, &outVelLs);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outVelLs]
    vmovss  xmm1, dword ptr [rsp+98h+outVelLs+4]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm6, xmm3, xmm2
  }
  *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(v6);
  __asm
  {
    vmaxss  xmm1, xmm0, cs:__real@41200000
    vmovss  xmm2, cs:__real@3f800000; max
    vdivss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm6, xmm6
    vmulss  xmm0, xmm3, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vsubss  xmm1, xmm0, cs:__real@3f000000 }
  v22 = DCONST_DVARMODEFLT_cg_thirdPersonCarBlurStrength;
  __asm
  {
    vmaxss  xmm1, xmm1, xmm6
    vmulss  xmm6, xmm1, cs:__real@40000000
  }
  if ( !DCONST_DVARMODEFLT_cg_thirdPersonCarBlurStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonCarBlurStrength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  __asm { vmulss  xmm7, xmm6, dword ptr [rbx+28h] }
  v26 = DCONST_DVARMODEFLT_cg_thirdPersonCarBlurRadius;
  if ( !DCONST_DVARMODEFLT_cg_thirdPersonCarBlurRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonCarBlurRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  __asm { vmulss  xmm6, xmm6, dword ptr [rbx+28h] }
  _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v29 = _RBX == NULL;
  if ( !_RBX )
  {
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 838, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob");
    v29 = !v30;
    if ( v30 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm6, xmm0
  }
  if ( v29 )
  {
    v32 = 0;
  }
  else
  {
    __asm { vcomiss xmm7, xmm0 }
    v32 = 1;
  }
  __asm
  {
    vmovss  dword ptr [rbx+1784Ch], xmm6
    vmovaps xmm6, [rsp+98h+var_28]
    vmovss  dword ptr [rbx+17850h], xmm7
    vmovaps xmm7, [rsp+98h+var_38]
  }
  _RBX->refdef.radialMotionBlur.enabled = v32;
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
  entityState_t *p_nextState; 
  LocalClientNum_t m_localClientNum; 
  int number; 
  int v11; 
  unsigned int Instance; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int PhysicsBodyId; 
  unsigned int v42; 
  HavokPhysics_BroadphaseCollisionQueryResult *v43; 
  unsigned int HitBodyId; 
  int Ref; 
  __int32 v46; 
  unsigned int v47; 
  __int64 v48; 
  __int64 v49; 
  unsigned int v50; 
  DynEntityList *DynEntityList; 
  __int64 v52; 
  unsigned int runtimeInstanceCount; 
  unsigned int PhysInstanceId; 
  unsigned int v55; 
  vec3_t *angVel; 
  vec3_t *newOrigin; 
  DynEntityBasis basisOut[4]; 
  unsigned int RigidBodyID; 
  unsigned int dynEntIdOut; 
  unsigned int NumHits; 
  entityState_t *v62; 
  const VehicleDef *v63; 
  HavokPhysics_BroadphaseCollisionQueryResult *BroadphaseCollisionResult; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  vec3_t position; 
  vec4_t orientation; 
  vec4_t out; 

  p_nextState = &vehEnt->nextState;
  m_localClientNum = this->m_localClientNum;
  _R12 = this;
  number = vehEnt->nextState.number;
  v62 = p_nextState;
  v11 = 3 * m_localClientNum + 3;
  Instance = CG_PhysicsObject_GetInstance((Physics_WorldId)v11, number, m_localClientNum);
  if ( Instance != -1 )
  {
    RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v11, Instance, 0);
    v13 = RigidBodyID;
    if ( (RigidBodyID & 0xFFFFFF) != 0xFFFFFF )
    {
      v63 = _R12->GetVehicleDef(_R12, p_nextState);
      v14 = (__int64)v63;
      Physics_GetRigidBodyAABB((Physics_WorldId)v11, RigidBodyID, &aabbMin, &aabbMax);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+50h+aabbMin+8]
        vsubss  xmm1, xmm0, cs:maxDownExtension
        vmovss  xmm2, dword ptr [rbp+50h+aabbMax+8]
        vaddss  xmm0, xmm2, cs:maxUpExtension
        vmovss  dword ptr [rbp+50h+aabbMax+8], xmm0
        vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
        vmovss  dword ptr [rbp+50h+aabbMin+8], xmm1
        vmovups xmm1, xmmword ptr cs:?vec4_origin@@3Tvec4_t@@B; vec4_t const vec4_origin
        vmovsd  qword ptr [rbp+50h+position], xmm0
        vmovups xmmword ptr [rbp+50h+orientation], xmm1
      }
      position.v[2] = vec3_origin.v[2];
      if ( v63->accurateShapeOverlap )
      {
        if ( BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)vehObj) )
        {
          __asm
          {
            vmovaps [rsp+150h+var_40], xmm6
            vmovaps [rsp+150h+var_50], xmm7
            vmovaps [rsp+150h+var_60], xmm8
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehScrLookAheadTimeClient, "bg_vehScrLookAheadTimeClient");
          __asm
          {
            vmovss  xmm6, dword ptr [r12+119510h]
            vmovaps xmm7, xmm0
          }
          AxisToQuat((const tmat33_t<vec3_t> *)&vehObj->m_transform, &out);
          __asm { vmaxss  xmm1, xmm7, xmm6; deltaTime }
          BgVehiclePhysics::IntegrateVelocities((BgVehiclePhysics *)vehObj, *(float *)&_XMM1, &vehObj->m_transform.m[3], &out, &vehObj->m_linearVelocityWs, &vehObj->m_angularVelocityWs, &position, &orientation);
          __asm
          {
            vmovss  xmm8, dword ptr [rbp+50h+aabbMax]
            vaddss  xmm0, xmm8, dword ptr [rbp+50h+aabbMin]
            vmulss  xmm1, xmm0, cs:__real@3f000000
            vmovss  xmm7, dword ptr [rbp+50h+aabbMax+4]
            vmovss  xmm0, dword ptr [rbp+50h+position]
            vmovaps xmm6, [rsp+150h+var_40]
            vsubss  xmm5, xmm0, xmm1
            vaddss  xmm0, xmm7, dword ptr [rbp+50h+aabbMin+4]
            vmulss  xmm2, xmm0, cs:__real@3f000000
            vmovss  xmm1, dword ptr [rbp+50h+position+4]
            vaddss  xmm0, xmm5, dword ptr [rbp+50h+aabbMin]
            vsubss  xmm4, xmm1, xmm2
            vaddss  xmm1, xmm4, dword ptr [rbp+50h+aabbMin+4]
            vmovss  dword ptr [rbp+50h+aabbMin+4], xmm1
            vaddss  xmm1, xmm4, xmm7
            vmovaps xmm7, [rsp+150h+var_50]
            vmovss  dword ptr [rbp+50h+aabbMin], xmm0
            vaddss  xmm0, xmm5, xmm8
            vmovaps xmm8, [rsp+150h+var_60]
            vmovss  dword ptr [rbp+50h+aabbMax+4], xmm1
            vmovss  dword ptr [rbp+50h+aabbMax], xmm0
          }
        }
        else if ( BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)vehObj) )
        {
          PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)vehObj);
          Physics_GetRigidBodyTransform((const Physics_WorldId)vehObj->m_worldId, PhysicsBodyId, &position, &orientation);
        }
      }
      v42 = 0;
      extendedData.contents = 8321;
      extendedData.phaseSelection = All;
      extendedData.ignoreBodies = NULL;
      BroadphaseCollisionResult = PhysicsVehicle_GetBroadphaseCollisionResult((Physics_WorldId)v11);
      v43 = BroadphaseCollisionResult;
      if ( !BroadphaseCollisionResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 498, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
        __debugbreak();
      HavokPhysics_BroadphaseCollisionQueryResult::Reset(BroadphaseCollisionResult);
      _R12->m_scriptableDamageInfo.m_cursor = 0;
      Physics_AABBBroadphaseQuery((Physics_WorldId)v11, &aabbMin, &aabbMax, &extendedData, v43);
      NumHits = HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(v43);
      if ( NumHits )
      {
        do
        {
          HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(v43, v42);
          Ref = Physics_GetRef((Physics_WorldId)v11, HitBodyId);
          v46 = Physics_GetRefSystem(Ref) - 1;
          if ( v46 )
          {
            if ( v46 != 7 )
              goto LABEL_42;
            v47 = Ref & 0x3FFFFF;
          }
          else
          {
            DynEnt_GetBasisAndDynEntId(Ref, (const LocalClientNum_t)_R12->m_localClientNum, basisOut, &dynEntIdOut);
            SLOBYTE(v48) = basisOut[0];
            v49 = dynEntIdOut & 0x7FFFF;
            v50 = dynEntIdOut >> 19;
            if ( basisOut[0] >= DYNENT_BASIS_COUNT )
            {
              LODWORD(newOrigin) = 2;
              LODWORD(angVel) = (unsigned __int8)basisOut[0];
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", angVel, newOrigin) )
                __debugbreak();
            }
            DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v50);
            if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
              __debugbreak();
            v48 = (unsigned __int8)v48;
            if ( (unsigned int)v49 >= DynEntityList->dynEntCount[(unsigned __int8)v48] )
            {
              LODWORD(newOrigin) = DynEntityList->dynEntCount[(unsigned __int8)v48];
              LODWORD(angVel) = v49;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", angVel, newOrigin) )
                __debugbreak();
            }
            v52 = (__int64)&DynEntityList->dynEntDefList[v48][v49];
            if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 532, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
              __debugbreak();
            if ( (unsigned __int8)(*(_BYTE *)(v52 + 50) - 3) > 1u )
              goto LABEL_42;
            if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 113, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
              __debugbreak();
            if ( *(_DWORD *)(v52 + 60) >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
              goto LABEL_42;
            ScriptableCommon_AssertCountsInitialized();
            runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
            if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
              __debugbreak();
            v47 = runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount + *(_DWORD *)(v52 + 60);
            ScriptableCommon_AssertCountsInitialized();
            if ( v47 >= g_scriptableWorldCounts.totalInstanceCount )
              goto LABEL_42;
            p_nextState = v62;
            v13 = RigidBodyID;
            v14 = (__int64)v63;
          }
          if ( v47 != -1 )
          {
            if ( !*(_DWORD *)(v14 + 40) || (PhysInstanceId = ScriptableCl_GetPhysInstanceId((const LocalClientNum_t)_R12->m_localClientNum, v47), PhysInstanceId == -1) || (v55 = Physics_GetRigidBodyID((const Physics_WorldId)v11, PhysInstanceId, 0), PhysicsVehicle_Overlap_Shapes((Physics_WorldId)v11, v13, &position, &orientation, v55)) )
            {
              if ( !VehicleScriptableDmg::Add(&_R12->m_scriptableDamageInfo, p_nextState->number, v47) )
                return;
            }
          }
LABEL_42:
          v43 = BroadphaseCollisionResult;
          ++v42;
          p_nextState = v62;
          v13 = RigidBodyID;
          v14 = (__int64)v63;
        }
        while ( v42 < NumHits );
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

void __fastcall CgVehicleSystem::PhysicsUpdateCharacterWobbleAnimData(CgVehicleSystem *this, const characterInfo_t *ci, unsigned int vehicleId, double frameTime, wobbleAnim_t *outData)
{
  bool IsValid; 
  bool v12; 
  bool v13; 
  VehicleWorldmodelAAnim *p_angles; 
  float frameTimea; 
  vec3_t entOrg; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1201, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1202, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  IsValid = BGVehicles::PhysicsIsValid(vehicleId);
  v12 = !IsValid;
  if ( !IsValid )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_physics.cpp", 1203, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleId )");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( !v12 )
  {
    _RBX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
    p_angles = (VehicleWorldmodelAAnim *)&CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, ci->entityNum)->pose.angles;
    if ( ci->vehicleAnimation.seat != VEHICLE_SEAT_DRIVER )
      p_angles = &ci->vehicleAnimation;
    AnglesToAxis(&p_angles->viewAngles, &axis);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+198h]
      vmovsd  qword ptr [rsp+0B8h+entOrg], xmm0
      vmovss  [rsp+0B8h+frameTime], xmm6
    }
    entOrg.v[2] = _RBX->m_transform.m[3].v[2];
    BGVehicles::PhysicsUpdateCharacterWobbleAnimDataCommon(this, _RBX, &axis, &entOrg, ci, frameTimea, outData);
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
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

