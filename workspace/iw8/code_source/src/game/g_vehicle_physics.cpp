/*
==============
GVehicles::PhysicsResetInputControls
==============
*/

void __fastcall GVehicles::PhysicsResetInputControls(GVehicles *this, unsigned int vehicleId)
{
  ?PhysicsResetInputControls@GVehicles@@QEAAXI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsUpdateEntityBounds
==============
*/

void __fastcall GVehicles::PhysicsUpdateEntityBounds(GVehicles *this, int entityIndex, const ExtentBounds *extBounds)
{
  ?PhysicsUpdateEntityBounds@GVehicles@@UEAAXHAEBUExtentBounds@@@Z(this, entityIndex, extBounds);
}

/*
==============
GVehicles::PhysicsSetDefFromLoad
==============
*/

void __fastcall GVehicles::PhysicsSetDefFromLoad(GVehicles *this, unsigned int vehicleId, unsigned int vehDefIndex)
{
  ?PhysicsSetDefFromLoad@GVehicles@@QEAAXII@Z(this, vehicleId, vehDefIndex);
}

/*
==============
GVehicles::PhysicsCreateRigidBodyResources
==============
*/

bool __fastcall GVehicles::PhysicsCreateRigidBodyResources(GVehicles *this, unsigned int vehicleId)
{
  return ?PhysicsCreateRigidBodyResources@GVehicles@@QEAA_NI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsIsInAir
==============
*/

bool __fastcall GVehicles::PhysicsIsInAir(GVehicles *this, unsigned int vehicleId)
{
  return ?PhysicsIsInAir@GVehicles@@QEAA_NI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsBeforeWorldStep
==============
*/

void __fastcall GVehicles::PhysicsBeforeWorldStep(GVehicles *this, Physics_WorldId worldId)
{
  ?PhysicsBeforeWorldStep@GVehicles@@QEAAXW4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
GVehicles::PhysicsGetCenterOfMass
==============
*/

void __fastcall GVehicles::PhysicsGetCenterOfMass(GVehicles *this, unsigned int vehicleId, vec3_t *centerOfMass)
{
  ?PhysicsGetCenterOfMass@GVehicles@@QEAAXIAEATvec3_t@@@Z(this, vehicleId, centerOfMass);
}

/*
==============
G_Vehicle_PhysicsImpulseCallback
==============
*/

void __fastcall G_Vehicle_PhysicsImpulseCallback(Physics_SimpleCollisionCallback_Data *cbData)
{
  ?G_Vehicle_PhysicsImpulseCallback@@YAXPEAUPhysics_SimpleCollisionCallback_Data@@@Z(cbData);
}

/*
==============
GVehicles::PhysicsLaunch
==============
*/

void __fastcall GVehicles::PhysicsLaunch(GVehicles *this, unsigned int vehicleId, const vec3_t *launchVelocity, float spinFactor)
{
  ?PhysicsLaunch@GVehicles@@QEAAXIAEBTvec3_t@@M@Z(this, vehicleId, launchVelocity, spinFactor);
}

/*
==============
GVehicles::PhysicsUpdateCharacterWobbleAnimData
==============
*/

void __fastcall GVehicles::PhysicsUpdateCharacterWobbleAnimData(GVehicles *this, const characterInfo_t *ci, unsigned int vehicleId, float frameTime, wobbleAnim_t *outData)
{
  ?PhysicsUpdateCharacterWobbleAnimData@GVehicles@@UEBAXPEBUcharacterInfo_t@@IMPEAUwobbleAnim_t@@@Z(this, ci, vehicleId, frameTime, outData);
}

/*
==============
GVehicles::PhysicsDeactivateAlways
==============
*/

void __fastcall GVehicles::PhysicsDeactivateAlways(GVehicles *this, unsigned int vehicleId)
{
  ?PhysicsDeactivateAlways@GVehicles@@QEAAXI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsGetAntiLag
==============
*/

const BgAntiLag *__fastcall GVehicles::PhysicsGetAntiLag(GVehicles *this)
{
  return ?PhysicsGetAntiLag@GVehicles@@UEBAPEBVBgAntiLag@@XZ(this);
}

/*
==============
GVehicles::PhysicsGetFrontAxleOffset
==============
*/

double __fastcall GVehicles::PhysicsGetFrontAxleOffset(GVehicles *this, unsigned int vehicleId)
{
  double result; 

  *(float *)&result = ?PhysicsGetFrontAxleOffset@GVehicles@@QEAAMI@Z(this, vehicleId);
  return result;
}

/*
==============
GVehicles::PhysicsGetDelayToStartDriving
==============
*/

double __fastcall GVehicles::PhysicsGetDelayToStartDriving(GVehicles *this, const BgVehiclePhysics *vehObj, int driverEntNum, float defaultTime)
{
  double result; 

  *(float *)&result = ?PhysicsGetDelayToStartDriving@GVehicles@@UEBAMAEBVBgVehiclePhysics@@HM@Z(this, vehObj, driverEntNum, defaultTime);
  return result;
}

/*
==============
GVehicles::PhysicsIsWrecked
==============
*/

bool __fastcall GVehicles::PhysicsIsWrecked(GVehicles *this, unsigned int vehicleId)
{
  return ?PhysicsIsWrecked@GVehicles@@QEAA_NI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsIsDebugDrawing
==============
*/

bool __fastcall GVehicles::PhysicsIsDebugDrawing(GVehicles *this)
{
  return ?PhysicsIsDebugDrawing@GVehicles@@UEAA_NXZ(this);
}

/*
==============
GVehicles::PhysicsSetDefaultMotion
==============
*/

void __fastcall GVehicles::PhysicsSetDefaultMotion(GVehicles *this, unsigned int vehicleId)
{
  ?PhysicsSetDefaultMotion@GVehicles@@QEAAXI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsUpdateInputControls
==============
*/

void __fastcall GVehicles::PhysicsUpdateInputControls(GVehicles *this, unsigned int vehicleId, const usercmd_s *cmd, const playerState_s *ps)
{
  ?PhysicsUpdateInputControls@GVehicles@@QEAAXIPEBUusercmd_s@@PEBUplayerState_s@@@Z(this, vehicleId, cmd, ps);
}

/*
==============
GVehicles::PhysicsForceKeyframedMotion
==============
*/

void __fastcall GVehicles::PhysicsForceKeyframedMotion(GVehicles *this, unsigned int vehicleId)
{
  ?PhysicsForceKeyframedMotion@GVehicles@@QEAAXI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsExtractIdFromPhysicsUserData
==============
*/

unsigned int __fastcall GVehicles::PhysicsExtractIdFromPhysicsUserData(GVehicles *this, int bodyPhysicsUserData, entityType_s *outEntType, bool *outIsSuspended)
{
  return ?PhysicsExtractIdFromPhysicsUserData@GVehicles@@UEAAIHAEAW4entityType_s@@AEA_N@Z(this, bodyPhysicsUserData, outEntType, outIsSuspended);
}

/*
==============
GVehicles::PhysicsGetPathComponentTypes
==============
*/

const unsigned int *__fastcall GVehicles::PhysicsGetPathComponentTypes(unsigned int *count)
{
  return ?PhysicsGetPathComponentTypes@GVehicles@@SAPEBIPEAI@Z(count);
}

/*
==============
GVehicles::PhysicsGetPlayerTransform
==============
*/

void __fastcall GVehicles::PhysicsGetPlayerTransform(GVehicles *this, int vehEntNum, int *outOwnerEntNum, vec3_t *outPlayerOrg, vec3_t *outPlayerAngles)
{
  ?PhysicsGetPlayerTransform@GVehicles@@UEBAXHAEAHAEATvec3_t@@1@Z(this, vehEntNum, outOwnerEntNum, outPlayerOrg, outPlayerAngles);
}

/*
==============
GVehicles::PhysicsWreck
==============
*/

void __fastcall GVehicles::PhysicsWreck(GVehicles *this, unsigned int vehicleId)
{
  ?PhysicsWreck@GVehicles@@QEAAXI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsGetLocalAcceleration
==============
*/

void __fastcall GVehicles::PhysicsGetLocalAcceleration(GVehicles *this, unsigned int vehicleId, vec3_t *acceleration)
{
  ?PhysicsGetLocalAcceleration@GVehicles@@QEAAXIAEATvec3_t@@@Z(this, vehicleId, acceleration);
}

/*
==============
GVehicles::PhysicsGetMass
==============
*/

double __fastcall GVehicles::PhysicsGetMass(GVehicles *this, unsigned int vehicleId)
{
  double result; 

  *(float *)&result = ?PhysicsGetMass@GVehicles@@QEAAMI@Z(this, vehicleId);
  return result;
}

/*
==============
GVehicles::PhysicsGetSteeringPointWS
==============
*/

void __fastcall GVehicles::PhysicsGetSteeringPointWS(GVehicles *this, unsigned int vehicleId, vec3_t *pointWS)
{
  ?PhysicsGetSteeringPointWS@GVehicles@@QEAAXIAEATvec3_t@@@Z(this, vehicleId, pointWS);
}

/*
==============
GVehicles::PhysicsDestroyComponent_GoStraightTo
==============
*/

void __fastcall GVehicles::PhysicsDestroyComponent_GoStraightTo(GVehicles *this, unsigned int vehicleId)
{
  ?PhysicsDestroyComponent_GoStraightTo@GVehicles@@UEAAXI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsAddImpulse
==============
*/

void __fastcall GVehicles::PhysicsAddImpulse(GVehicles *this, unsigned int vehicleId, const vec3_t *impulse, const vec3_t *origin)
{
  ?PhysicsAddImpulse@GVehicles@@QEAAXIAEBTvec3_t@@0@Z(this, vehicleId, impulse, origin);
}

/*
==============
GVehicles::PhysicsGetVehicleObject
==============
*/

const BgVehiclePhysics *__fastcall GVehicles::PhysicsGetVehicleObject(GVehicles *this, const int entityNum)
{
  return ?PhysicsGetVehicleObject@GVehicles@@UEBAPEBVBgVehiclePhysics@@H@Z(this, entityNum);
}

/*
==============
GVehicles::PhysicsProcessDeferredEvents
==============
*/

void __fastcall GVehicles::PhysicsProcessDeferredEvents(GVehicles *this)
{
  ?PhysicsProcessDeferredEvents@GVehicles@@QEBAXXZ(this);
}

/*
==============
GVehicles::PhysicsGetVehicleDef
==============
*/

const VehicleDef *__fastcall GVehicles::PhysicsGetVehicleDef(GVehicles *this, unsigned int vehDefIndex)
{
  return ?PhysicsGetVehicleDef@GVehicles@@UEBAPEBUVehicleDef@@I@Z(this, vehDefIndex);
}

/*
==============
GVehicles::PhysicsSetKeyframeTransform
==============
*/

void __fastcall GVehicles::PhysicsSetKeyframeTransform(GVehicles *this, unsigned int vehicleId, const vec3_t *pos, const vec3_t *angles)
{
  ?PhysicsSetKeyframeTransform@GVehicles@@QEAAXIAEBTvec3_t@@0@Z(this, vehicleId, pos, angles);
}

/*
==============
GVehicles::PhysicsSetSpeed
==============
*/

void __fastcall GVehicles::PhysicsSetSpeed(GVehicles *this, unsigned int vehicleId, float speed)
{
  ?PhysicsSetSpeed@GVehicles@@QEAAXIM@Z(this, vehicleId, speed);
}

/*
==============
GVehicles::PhysicsDestroyComponent_PathFollower
==============
*/

void __fastcall GVehicles::PhysicsDestroyComponent_PathFollower(GVehicles *this, unsigned int vehicleId)
{
  ?PhysicsDestroyComponent_PathFollower@GVehicles@@UEAAXI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsSetTopSpeedBwd
==============
*/

void __fastcall GVehicles::PhysicsSetTopSpeedBwd(GVehicles *this, unsigned int vehicleId, float topSpeed)
{
  ?PhysicsSetTopSpeedBwd@GVehicles@@QEAAXIM@Z(this, vehicleId, topSpeed);
}

/*
==============
GVehicles::PhysicsOnWorldAction
==============
*/

void __fastcall GVehicles::PhysicsOnWorldAction(GVehicles *this, Physics_WorldId worldId, float deltaTime)
{
  ?PhysicsOnWorldAction@GVehicles@@UEAAXW4Physics_WorldId@@M@Z(this, worldId, deltaTime);
}

/*
==============
GVehicles::PhysicsEnableCrashing
==============
*/

void __fastcall GVehicles::PhysicsEnableCrashing(GVehicles *this, unsigned int vehicleId, bool enable)
{
  ?PhysicsEnableCrashing@GVehicles@@QEAAXI_N@Z(this, vehicleId, enable);
}

/*
==============
GVehicles::PhysicsSetTopSpeedFwd
==============
*/

void __fastcall GVehicles::PhysicsSetTopSpeedFwd(GVehicles *this, unsigned int vehicleId, float topSpeed)
{
  ?PhysicsSetTopSpeedFwd@GVehicles@@QEAAXIM@Z(this, vehicleId, topSpeed);
}

/*
==============
GVehicles::PhysicsGetLocalVelocity
==============
*/

void __fastcall GVehicles::PhysicsGetLocalVelocity(GVehicles *this, unsigned int vehicleId, vec3_t *velocity)
{
  ?PhysicsGetLocalVelocity@GVehicles@@QEAAXIAEATvec3_t@@@Z(this, vehicleId, velocity);
}

/*
==============
GVehicles::PhysicsIsKeyframed
==============
*/

bool __fastcall GVehicles::PhysicsIsKeyframed(GVehicles *this, unsigned int vehicleId)
{
  return ?PhysicsIsKeyframed@GVehicles@@QEAA_NI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsGetInputControl
==============
*/

double __fastcall GVehicles::PhysicsGetInputControl(GVehicles *this, unsigned int vehicleId, unsigned int controlIndex)
{
  double result; 

  *(float *)&result = ?PhysicsGetInputControl@GVehicles@@QEAAMII@Z(this, vehicleId, controlIndex);
  return result;
}

/*
==============
GVehicles::PhysicsGetSpeed
==============
*/

double __fastcall GVehicles::PhysicsGetSpeed(GVehicles *this, unsigned int vehicleId)
{
  double result; 

  *(float *)&result = ?PhysicsGetSpeed@GVehicles@@QEAAMI@Z(this, vehicleId);
  return result;
}

/*
==============
GVehicles::PhysicsIsSupportedWorld
==============
*/

bool __fastcall GVehicles::PhysicsIsSupportedWorld(GVehicles *this, Physics_WorldId worldId)
{
  return ?PhysicsIsSupportedWorld@GVehicles@@UEAA_NW4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
GVehicles::PhysicsImpulseCallback
==============
*/

void __fastcall GVehicles::PhysicsImpulseCallback(Physics_SimpleCollisionCallback_Data *data)
{
  ?PhysicsImpulseCallback@GVehicles@@SAXPEAUPhysics_SimpleCollisionCallback_Data@@@Z(data);
}

/*
==============
GVehicles::PhysicsVehicleHasAnim
==============
*/

bool __fastcall GVehicles::PhysicsVehicleHasAnim(GVehicles *this, const BgVehiclePhysics *vehobj)
{
  return ?PhysicsVehicleHasAnim@GVehicles@@UEBA_NAEBVBgVehiclePhysics@@@Z(this, vehobj);
}

/*
==============
GVehicles::PhysicsGetRearWheelCenterWS
==============
*/

void __fastcall GVehicles::PhysicsGetRearWheelCenterWS(GVehicles *this, unsigned int vehicleId, vec3_t *centerWS)
{
  ?PhysicsGetRearWheelCenterWS@GVehicles@@QEAAXIAEATvec3_t@@@Z(this, vehicleId, centerWS);
}

/*
==============
GVehicles::PhysicsGetBoneLocalMatrix
==============
*/

const DObjAnimMat *__fastcall GVehicles::PhysicsGetBoneLocalMatrix(GVehicles *this, int entityIndex, scr_string_t boneTag, int *outBoneIndex)
{
  return ?PhysicsGetBoneLocalMatrix@GVehicles@@UEAAPEBUDObjAnimMat@@HW4scr_string_t@@PEAH@Z(this, entityIndex, boneTag, outBoneIndex);
}

/*
==============
GVehicles::PhysicsPostThinkUpdate
==============
*/

void __fastcall GVehicles::PhysicsPostThinkUpdate(GVehicles *this, unsigned int vehicleId, float deltaTime)
{
  ?PhysicsPostThinkUpdate@GVehicles@@QEAAXIM@Z(this, vehicleId, deltaTime);
}

/*
==============
GVehicles::PhysicsWrite
==============
*/

void __fastcall GVehicles::PhysicsWrite(GVehicles *this, MemoryFile *memFile)
{
  ?PhysicsWrite@GVehicles@@UEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
GVehicles::PhysicsCreateComponent_PathFollower
==============
*/

VehiclePhysicsComponentId __fastcall GVehicles::PhysicsCreateComponent_PathFollower(GVehicles *this, unsigned int vehicleId, __int16 nodeIndex, bool looped)
{
  return ?PhysicsCreateComponent_PathFollower@GVehicles@@UEAA?AUVehiclePhysicsComponentId@@IF_N@Z(this, vehicleId, nodeIndex, looped);
}

/*
==============
GVehicles::PhysicsGetAsset
==============
*/

bool __fastcall GVehicles::PhysicsGetAsset(GVehicles *this, int entityNum, const PhysicsAsset **outPhysAsset)
{
  return ?PhysicsGetAsset@GVehicles@@UEBA_NHPEAPEBUPhysicsAsset@@@Z(this, entityNum, outPhysAsset);
}

/*
==============
GVehicles::PhysicsGetFrontWheelCenterWS
==============
*/

void __fastcall GVehicles::PhysicsGetFrontWheelCenterWS(GVehicles *this, unsigned int vehicleId, vec3_t *centerWS)
{
  ?PhysicsGetFrontWheelCenterWS@GVehicles@@QEAAXIAEATvec3_t@@@Z(this, vehicleId, centerWS);
}

/*
==============
GVehicles::PhysicsMyChanges
==============
*/

void __fastcall GVehicles::PhysicsMyChanges(GVehicles *this, unsigned int vehicleId, unsigned int vehicleDefIndex)
{
  ?PhysicsMyChanges@GVehicles@@QEAAXII@Z(this, vehicleId, vehicleDefIndex);
}

/*
==============
GVehicles::PhysicsGetVehicleId
==============
*/

unsigned int __fastcall GVehicles::PhysicsGetVehicleId(GVehicles *this, int entityNum)
{
  return ?PhysicsGetVehicleId@GVehicles@@UEBAIH@Z(this, entityNum);
}

/*
==============
GVehicles::PhysicsCheckForJolt
==============
*/

void __fastcall GVehicles::PhysicsCheckForJolt(GVehicles *this, unsigned int vehicleId, float deltaTime)
{
  ?PhysicsCheckForJolt@GVehicles@@IEAAXIM@Z(this, vehicleId, deltaTime);
}

/*
==============
GVehicles::PhysicsSetLinearVelocity
==============
*/

void __fastcall GVehicles::PhysicsSetLinearVelocity(GVehicles *this, unsigned int vehicleId, const vec3_t *linearVelocity)
{
  ?PhysicsSetLinearVelocity@GVehicles@@QEAAXIAEBTvec3_t@@@Z(this, vehicleId, linearVelocity);
}

/*
==============
GVehicles::PhysicsGetWheelBaseLength
==============
*/

double __fastcall GVehicles::PhysicsGetWheelBaseLength(GVehicles *this, unsigned int vehicleId)
{
  double result; 

  *(float *)&result = ?PhysicsGetWheelBaseLength@GVehicles@@QEAAMI@Z(this, vehicleId);
  return result;
}

/*
==============
GVehicles::PhysicsGetTopSpeedBwd
==============
*/

double __fastcall GVehicles::PhysicsGetTopSpeedBwd(GVehicles *this, unsigned int vehicleId)
{
  double result; 

  *(float *)&result = ?PhysicsGetTopSpeedBwd@GVehicles@@QEAAMI@Z(this, vehicleId);
  return result;
}

/*
==============
GVehicles::PhysicsGetChassisForwardDir
==============
*/

void __fastcall GVehicles::PhysicsGetChassisForwardDir(GVehicles *this, unsigned int vehicleId, vec3_t *dir)
{
  ?PhysicsGetChassisForwardDir@GVehicles@@QEAAXIAEATvec3_t@@@Z(this, vehicleId, dir);
}

/*
==============
GVehicles::PhysicsGetRearAxleOffset
==============
*/

double __fastcall GVehicles::PhysicsGetRearAxleOffset(GVehicles *this, unsigned int vehicleId)
{
  double result; 

  *(float *)&result = ?PhysicsGetRearAxleOffset@GVehicles@@QEAAMI@Z(this, vehicleId);
  return result;
}

/*
==============
GVehicles::PhysicsGetChassisTransform
==============
*/

void __fastcall GVehicles::PhysicsGetChassisTransform(GVehicles *this, unsigned int vehicleId, tmat43_t<vec3_t> *transform)
{
  ?PhysicsGetChassisTransform@GVehicles@@QEAAXIAEAT?$tmat43_t@Tvec3_t@@@@@Z(this, vehicleId, transform);
}

/*
==============
GVehicles::PhysicsGetComponentPathFollower
==============
*/

BgVehicleComponentPathFollower *__fastcall GVehicles::PhysicsGetComponentPathFollower(GVehicles *this, unsigned int vehicleId)
{
  return ?PhysicsGetComponentPathFollower@GVehicles@@QEAAPEAVBgVehicleComponentPathFollower@@I@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsSetConveyorVelocity
==============
*/

void __fastcall GVehicles::PhysicsSetConveyorVelocity(GVehicles *this, unsigned int vehicleId, const vec2_t *velocity)
{
  ?PhysicsSetConveyorVelocity@GVehicles@@QEAAXIAEBTvec2_t@@@Z(this, vehicleId, velocity);
}

/*
==============
GVehicles::PhysicsAddAngularImpulse
==============
*/

void __fastcall GVehicles::PhysicsAddAngularImpulse(GVehicles *this, unsigned int vehicleId, const vec3_t *impulse, const vec3_t *origin)
{
  ?PhysicsAddAngularImpulse@GVehicles@@QEAAXIAEBTvec3_t@@0@Z(this, vehicleId, impulse, origin);
}

/*
==============
GVehicles::PhysicsLoad
==============
*/

void __fastcall GVehicles::PhysicsLoad(GVehicles *this, SaveGame *save)
{
  ?PhysicsLoad@GVehicles@@UEAAXPEAUSaveGame@@@Z(this, save);
}

/*
==============
GVehicles::PhysicsDestroyVehicle
==============
*/

void __fastcall GVehicles::PhysicsDestroyVehicle(GVehicles *this, unsigned int *vehicleId)
{
  ?PhysicsDestroyVehicle@GVehicles@@UEAAXAEAI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsDestroyComponent_PathFinder
==============
*/

void __fastcall GVehicles::PhysicsDestroyComponent_PathFinder(GVehicles *this, unsigned int vehicleId)
{
  ?PhysicsDestroyComponent_PathFinder@GVehicles@@UEAAXI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsAfterWorldStep
==============
*/

void __fastcall GVehicles::PhysicsAfterWorldStep(GVehicles *this, Physics_WorldId worldId)
{
  ?PhysicsAfterWorldStep@GVehicles@@QEAAXW4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
GVehicles::PhysicsCreateComponent_GoStraightTo
==============
*/

VehiclePhysicsComponentId __fastcall GVehicles::PhysicsCreateComponent_GoStraightTo(GVehicles *this, unsigned int vehicleId, const vec3_t *pos)
{
  return ?PhysicsCreateComponent_GoStraightTo@GVehicles@@UEAA?AUVehiclePhysicsComponentId@@IAEBTvec3_t@@@Z(this, vehicleId, pos);
}

/*
==============
GVehicles::PhysicsGetScriptableDamageSystem
==============
*/

VehicleScriptableDmg *__fastcall GVehicles::PhysicsGetScriptableDamageSystem(GVehicles *this)
{
  return ?PhysicsGetScriptableDamageSystem@GVehicles@@QEAAAEAUVehicleScriptableDmg@@XZ(this);
}

/*
==============
GVehicles::PhysicsDestroyRigidBodyResources
==============
*/

void __fastcall GVehicles::PhysicsDestroyRigidBodyResources(GVehicles *this, unsigned int vehicleId)
{
  ?PhysicsDestroyRigidBodyResources@GVehicles@@QEAAXI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsGetTopSpeedFwd
==============
*/

double __fastcall GVehicles::PhysicsGetTopSpeedFwd(GVehicles *this, unsigned int vehicleId)
{
  double result; 

  *(float *)&result = ?PhysicsGetTopSpeedFwd@GVehicles@@QEAAMI@Z(this, vehicleId);
  return result;
}

/*
==============
GVehicles::PhysicsCrash
==============
*/

void __fastcall GVehicles::PhysicsCrash(GVehicles *this, unsigned int vehicleId)
{
  ?PhysicsCrash@GVehicles@@QEAAXI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsShutdown
==============
*/

void __fastcall GVehicles::PhysicsShutdown(GVehicles *this)
{
  ?PhysicsShutdown@GVehicles@@QEAAXXZ(this);
}

/*
==============
GVehicles::PhysicsGetAngularVelocity
==============
*/

void __fastcall GVehicles::PhysicsGetAngularVelocity(GVehicles *this, unsigned int vehicleId, vec3_t *angularVelocity)
{
  ?PhysicsGetAngularVelocity@GVehicles@@QEAAXIAEATvec3_t@@@Z(this, vehicleId, angularVelocity);
}

/*
==============
GVehicles::PhysicsSetInputControl
==============
*/

void __fastcall GVehicles::PhysicsSetInputControl(GVehicles *this, unsigned int vehicleId, unsigned int controlIndex, float value)
{
  ?PhysicsSetInputControl@GVehicles@@QEAAXIIM@Z(this, vehicleId, controlIndex, value);
}

/*
==============
GVehicles::PhysicsInit
==============
*/

void __fastcall GVehicles::PhysicsInit(GVehicles *this)
{
  ?PhysicsInit@GVehicles@@QEAAXXZ(this);
}

/*
==============
GVehicles::PhysicsDrawDebugVehicle
==============
*/

void __fastcall GVehicles::PhysicsDrawDebugVehicle(GVehicles *this, const BgVehiclePhysics *vehObj)
{
  ?PhysicsDrawDebugVehicle@GVehicles@@UEAAXPEBVBgVehiclePhysics@@@Z(this, vehObj);
}

/*
==============
GVehicles::PhysicsGetLinearVelocity
==============
*/

void __fastcall GVehicles::PhysicsGetLinearVelocity(GVehicles *this, unsigned int vehicleId, vec3_t *linearVelocity)
{
  ?PhysicsGetLinearVelocity@GVehicles@@QEAAXIAEATvec3_t@@@Z(this, vehicleId, linearVelocity);
}

/*
==============
GVehicles::PhysicsCreateComponent_PathFinder
==============
*/

VehiclePhysicsComponentId __fastcall GVehicles::PhysicsCreateComponent_PathFinder(GVehicles *this, unsigned int vehicleId, const vec3_t *pos, unsigned int layer)
{
  return ?PhysicsCreateComponent_PathFinder@GVehicles@@UEAA?AUVehiclePhysicsComponentId@@IAEBTvec3_t@@I@Z(this, vehicleId, pos, layer);
}

/*
==============
GVehicles::PhysicsGetCurrentCoM
==============
*/

void __fastcall GVehicles::PhysicsGetCurrentCoM(GVehicles *this, unsigned int vehicleId, vec3_t *com)
{
  ?PhysicsGetCurrentCoM@GVehicles@@QEAAXIAEATvec3_t@@@Z(this, vehicleId, com);
}

/*
==============
GVehicles::PhysicsDestroyComponent
==============
*/

void __fastcall GVehicles::PhysicsDestroyComponent(GVehicles *this, VehiclePhysicsComponentId componentId)
{
  ?PhysicsDestroyComponent@GVehicles@@UEAAXUVehiclePhysicsComponentId@@@Z(this, componentId);
}

/*
==============
GVehicles::PhysicsSetAngularVelocity
==============
*/

void __fastcall GVehicles::PhysicsSetAngularVelocity(GVehicles *this, unsigned int vehicleId, const vec3_t *angularVelocity)
{
  ?PhysicsSetAngularVelocity@GVehicles@@QEAAXIAEBTvec3_t@@@Z(this, vehicleId, angularVelocity);
}

/*
==============
GVehicles::PhysicsSimulateVehiclePmove
==============
*/

void __fastcall GVehicles::PhysicsSimulateVehiclePmove(GVehicles *this, pmove_t *pm, const pml_t *pml)
{
  ?PhysicsSimulateVehiclePmove@GVehicles@@UEBAXPEAVpmove_t@@PEBUpml_t@@@Z(this, pm, pml);
}

/*
==============
GVehicles::PhysicsUnpackLerpStateValues
==============
*/

void __fastcall GVehicles::PhysicsUnpackLerpStateValues(GVehicles *this, int entityIndex, float *outGasInput, bool *outIsBraking, float *outWheelAveSpinSpeed)
{
  ?PhysicsUnpackLerpStateValues@GVehicles@@UEAAXHAEAMAEA_N0@Z(this, entityIndex, outGasInput, outIsBraking, outWheelAveSpinSpeed);
}

/*
==============
GVehicles::PhysicsCreateVehicle
==============
*/

unsigned int __fastcall GVehicles::PhysicsCreateVehicle(GVehicles *this, int entityIndex, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?PhysicsCreateVehicle@GVehicles@@UEAAIHIAEBUVehicleDef@@@Z(this, entityIndex, vehDefIndex, vehDef);
}

/*
==============
GVehicles::PhysicsIsCrashingEnabled
==============
*/

bool __fastcall GVehicles::PhysicsIsCrashingEnabled(GVehicles *this, unsigned int vehicleId)
{
  return ?PhysicsIsCrashingEnabled@GVehicles@@QEAA_NI@Z(this, vehicleId);
}

/*
==============
GVehicles::PhysicsGetWheelBaseWidth
==============
*/

double __fastcall GVehicles::PhysicsGetWheelBaseWidth(GVehicles *this, unsigned int vehicleId)
{
  double result; 

  *(float *)&result = ?PhysicsGetWheelBaseWidth@GVehicles@@QEAAMI@Z(this, vehicleId);
  return result;
}

/*
==============
G_Vehicle_PhysicsImpulseCallback
==============
*/
void G_Vehicle_PhysicsImpulseCallback(Physics_SimpleCollisionCallback_Data *cbData)
{
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::PhysicsImpulseCallback(cbData);
}

/*
==============
GPhysicsVehicleManager::GetInternalById
==============
*/
GPhysicsVehicleInternal *GPhysicsVehicleManager::GetInternalById(unsigned int vehId)
{
  unsigned int v2; 
  __int64 v4; 
  int v5; 

  if ( !BGVehicles::PhysicsIsValid(vehId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 126, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
    __debugbreak();
  v2 = vehId - 1;
  if ( v2 >= 0x80 )
  {
    v5 = 128;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return &GPhysicsVehicleManager::s_physicsVehicles[v2];
}

/*
==============
GPhysicsVehicleManager::Init
==============
*/
void GPhysicsVehicleManager::Init(BgVehiclePhysicsManager *vehMgr)
{
  memset_0(GPhysicsVehicleManager::s_physicsVehicles, 0, sizeof(GPhysicsVehicleManager::s_physicsVehicles));
  memset_0(vehMgr->m_vehiclePhysicsObjects, 0, sizeof(vehMgr->m_vehiclePhysicsObjects));
  memset_0(vehMgr->m_vehiclePhysicsComponents, 0, 0x99000ui64);
  vehMgr->m_lagTime = 0.0;
  dword_149200134 = 1;
  dword_149200204 = 2;
  dword_1492002D4 = 3;
  dword_1492003A4 = 4;
  dword_149200474 = 5;
  dword_149200544 = 6;
  dword_149200614 = 7;
  dword_1492006E4 = 8;
  dword_1492007B4 = 9;
  dword_149200884 = 10;
  dword_149200954 = 11;
  dword_149200A24 = 12;
  dword_149200AF4 = 13;
  dword_149200BC4 = 14;
  dword_149200C94 = 15;
  dword_149200D64 = 16;
  dword_149200E34 = 17;
  dword_149200F04 = 18;
  dword_149200FD4 = 19;
  dword_1492010A4 = 20;
  dword_149201174 = 21;
  dword_149201244 = 22;
  dword_149201314 = 23;
  dword_1492013E4 = 24;
  dword_1492014B4 = 25;
  dword_149201584 = 26;
  dword_149201654 = 27;
  dword_149201724 = 28;
  dword_1492017F4 = 29;
  dword_1492018C4 = 30;
  dword_149201994 = 31;
  dword_149201A64 = 32;
  dword_149201B34 = 33;
  dword_149201C04 = 34;
  dword_149201CD4 = 35;
  dword_149201DA4 = 36;
  dword_149201E74 = 37;
  dword_149201F44 = 38;
  dword_149202014 = 39;
  dword_1492020E4 = 40;
  dword_1492021B4 = 41;
  dword_149202284 = 42;
  dword_149202354 = 43;
  dword_149202424 = 44;
  dword_1492024F4 = 45;
  dword_1492025C4 = 46;
  dword_149202694 = 47;
  dword_149202764 = 48;
  dword_149202834 = 49;
  dword_149202904 = 50;
  dword_1492029D4 = 51;
  dword_149202AA4 = 52;
  dword_149202B74 = 53;
  dword_149202C44 = 54;
  dword_149202D14 = 55;
  dword_149202DE4 = 56;
  dword_149202EB4 = 57;
  dword_149202F84 = 58;
  dword_149203054 = 59;
  dword_149203124 = 60;
  dword_1492031F4 = 61;
  dword_1492032C4 = 62;
  dword_149203394 = 63;
  dword_149203464 = 64;
  dword_149203534 = 65;
  dword_149203604 = 66;
  dword_1492036D4 = 67;
  dword_1492037A4 = 68;
  dword_149203874 = 69;
  dword_149203944 = 70;
  dword_149203A14 = 71;
  dword_149203AE4 = 72;
  dword_149203BB4 = 73;
  dword_149203C84 = 74;
  dword_149203D54 = 75;
  dword_149203E24 = 76;
  dword_149203EF4 = 77;
  dword_149203FC4 = 78;
  dword_149204094 = 79;
  dword_149204164 = 80;
  dword_149204234 = 81;
  dword_149204304 = 82;
  dword_1492043D4 = 83;
  dword_1492044A4 = 84;
  dword_149204574 = 85;
  dword_149204644 = 86;
  dword_149204714 = 87;
  dword_1492047E4 = 88;
  dword_1492048B4 = 89;
  dword_149204984 = 90;
  dword_149204A54 = 91;
  dword_149204B24 = 92;
  dword_149204BF4 = 93;
  dword_149204CC4 = 94;
  dword_149204D94 = 95;
  dword_149204E64 = 96;
  dword_149204F34 = 97;
  dword_149205004 = 98;
  dword_1492050D4 = 99;
  dword_1492051A4 = 100;
  dword_149205274 = 101;
  dword_149205344 = 102;
  dword_149205414 = 103;
  dword_1492054E4 = 104;
  dword_1492055B4 = 105;
  dword_149205684 = 106;
  dword_149205754 = 107;
  dword_149205824 = 108;
  dword_1492058F4 = 109;
  dword_1492059C4 = 110;
  dword_149205A94 = 111;
  dword_149205B64 = 112;
  dword_149205C34 = 113;
  dword_149205D04 = 114;
  dword_149205DD4 = 115;
  dword_149205EA4 = 116;
  dword_149205F74 = 117;
  dword_149206044 = 118;
  dword_149206114 = 119;
  dword_1492061E4 = 120;
  dword_1492062B4 = 121;
  dword_149206384 = 122;
  dword_149206454 = 123;
  dword_149206524 = 124;
  dword_1492065F4 = 125;
  dword_1492066C4 = 126;
  dword_149206794 = 127;
  dword_149206864 = 128;
}

/*
==============
GVehicles::PhysicsAddAngularImpulse
==============
*/
void GVehicles::PhysicsAddAngularImpulse(GVehicles *this, unsigned int vehicleId, const vec3_t *impulse, const vec3_t *origin)
{
  const vec3_t *v6; 
  BgVehiclePhysics *ObjectById; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  _RBX = origin;
  v6 = impulse;
  if ( (v15 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1240, ASSERT_TYPE_SANITY, "( !IS_NAN( ( impulse )[0] ) && !IS_NAN( ( impulse )[1] ) && !IS_NAN( ( impulse )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( impulse )[0] ) && !IS_NAN( ( impulse )[1] ) && !IS_NAN( ( impulse )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1241, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
      __debugbreak();
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::ApplyAngularImpulse(ObjectById, v6, _RBX);
}

/*
==============
GVehicles::PhysicsAddImpulse
==============
*/
void GVehicles::PhysicsAddImpulse(GVehicles *this, unsigned int vehicleId, const vec3_t *impulse, const vec3_t *origin)
{
  const vec3_t *v6; 
  BgVehiclePhysics *ObjectById; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  _RBX = origin;
  v6 = impulse;
  if ( (v15 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1228, ASSERT_TYPE_SANITY, "( !IS_NAN( ( impulse )[0] ) && !IS_NAN( ( impulse )[1] ) && !IS_NAN( ( impulse )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( impulse )[0] ) && !IS_NAN( ( impulse )[1] ) && !IS_NAN( ( impulse )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1229, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
      __debugbreak();
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::ApplyImpulse(ObjectById, v6, _RBX);
}

/*
==============
GVehicles::PhysicsAfterWorldStep
==============
*/
void GVehicles::PhysicsAfterWorldStep(GVehicles *this, Physics_WorldId worldId)
{
  unsigned int v8; 
  BgVehiclePhysicsObjectBuffer *m_vehiclePhysicsObjects; 
  __int64 v11; 
  int trType; 
  unsigned __int16 number; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  playerState_s *EntityPlayerState; 
  int v22; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  unsigned int PhysicsBodyId; 
  BGVehicles *vehicleSystem; 
  __int64 v53; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _R13 = this;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "GVehicles::PhysicsAfterWorldStep");
  if ( worldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 555, ASSERT_TYPE_ASSERT, "(worldId == G_PHYSICSVEHICLE_WORLD)", (const char *)&queryFormat, "worldId == G_PHYSICSVEHICLE_WORLD") )
    __debugbreak();
  v8 = 0;
  m_vehiclePhysicsObjects = _R13->m_vehiclePhysicsManager.m_vehiclePhysicsObjects;
  __asm { vmovss  xmm8, cs:__real@3f000000 }
  do
  {
    if ( *(_DWORD *)&m_vehiclePhysicsObjects->buffer[8] )
    {
      if ( *(_DWORD *)&m_vehiclePhysicsObjects->buffer[32] != worldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 566, ASSERT_TYPE_ASSERT, "(vehObj->GetWorldId() == worldId)", (const char *)&queryFormat, "vehObj->GetWorldId() == worldId") )
        __debugbreak();
      v11 = *(int *)&m_vehiclePhysicsObjects->buffer[48];
      if ( (unsigned int)v11 >= 0x800 )
      {
        LODWORD(v53) = 2048;
        LODWORD(vehicleSystem) = *(_DWORD *)&m_vehiclePhysicsObjects->buffer[48];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", vehicleSystem, v53) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      _RDI = &g_entities[v11];
      if ( (!_RDI || ((_RDI->s.eType - 12) & 0xFFFD) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 569, ASSERT_TYPE_ASSERT, "(vehEnt && BG_IsVehicleEntity( &vehEnt->s ))", (const char *)&queryFormat, "vehEnt && BG_IsVehicleEntity( &vehEnt->s )") )
        __debugbreak();
      trType = _RDI->s.lerp.pos.trType;
      if ( !m_vehiclePhysicsObjects->buffer[76] )
        goto LABEL_68;
      number = _RDI->r.ownerNum.number;
      if ( !number )
        goto LABEL_34;
      v15 = number;
      v16 = number - 1;
      if ( v16 >= 0x800 )
      {
        LODWORD(v53) = 2048;
        LODWORD(vehicleSystem) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", vehicleSystem, v53) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v17 = v15 - 1;
      if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v17] )
      {
        LODWORD(v53) = _RDI->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v53) )
          __debugbreak();
      }
      if ( !_RDI->r.ownerNum.number )
      {
LABEL_34:
        Com_PrintWarning(20, "GVehicles::PhysicsAfterWorldStep(). Physics vehicle's owner unlinked/changed. Switching to non-controlled vehicle.\n");
        BgVehiclePhysics::SetPlayerControlled((BgVehiclePhysics *)m_vehiclePhysicsObjects, 0);
      }
      if ( m_vehiclePhysicsObjects->buffer[76] )
      {
        v18 = _RDI->r.ownerNum.number;
        if ( (unsigned int)(v18 - 1) >= 0x7FF )
        {
          LODWORD(v53) = 2047;
          LODWORD(vehicleSystem) = v18 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", vehicleSystem, v53) )
            __debugbreak();
        }
        v19 = _RDI->r.ownerNum.number;
        if ( (unsigned int)(v19 - 1) >= 0x800 )
        {
          LODWORD(v53) = 2048;
          LODWORD(vehicleSystem) = v19 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", vehicleSystem, v53) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v20 = v19 - 1;
        if ( g_entities[v20].r.isInUse != g_entityIsInUse[v20] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v20] )
        {
          LODWORD(v53) = _RDI->r.ownerNum.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v53) )
            __debugbreak();
        }
        EntityPlayerState = G_GetEntityPlayerState(&g_entities[_RDI->r.ownerNum.number - 1]);
        if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 583, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v22 = *(_DWORD *)&m_vehiclePhysicsObjects->buffer[24];
        if ( !v22 || v22 == 3 )
          BgVehiclePhysics::QueryValuesFromPhysics((BgVehiclePhysics *)m_vehiclePhysicsObjects, EntityPlayerState);
        if ( EntityPlayerState->vehicleState.entity != 2047 )
        {
          Instance = GWeaponMap::GetInstance();
          Handler = GHandler::getHandler();
          BG_PlayerStateToVehicleState(EntityPlayerState, &_RDI->s, 0, Handler, Instance, _R13);
        }
        if ( m_vehiclePhysicsObjects->buffer[676] || BgVehiclePhysics::GetNoClientGeoMode((BgVehiclePhysics *)m_vehiclePhysicsObjects) != NOCLIENTGEO_SWITCH_TO_SERVER_AUTH )
        {
          if ( BgVehiclePhysics::IsKeyframed((BgVehiclePhysics *)m_vehiclePhysicsObjects) && *(_DWORD *)&m_vehiclePhysicsObjects->buffer[24] == 1 )
            trType = 11;
        }
        else
        {
          trType = 12;
        }
      }
      else
      {
LABEL_68:
        trType = 12;
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)m_vehiclePhysicsObjects);
        Physics_GetRigidBodyAABB(*(Physics_WorldId *)&m_vehiclePhysicsObjects->buffer[32], PhysicsBodyId, &aabbMin, &aabbMax);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0C8h+aabbMin]
          vaddss  xmm1, xmm0, dword ptr [rsp+0C8h+aabbMax]
          vmulss  xmm2, xmm1, xmm8
          vmovss  dword ptr [rdi+118h], xmm2
          vmovss  xmm0, dword ptr [rsp+0C8h+aabbMax+4]
          vaddss  xmm1, xmm0, dword ptr [rsp+0C8h+aabbMin+4]
          vmulss  xmm3, xmm1, xmm8
          vmovss  dword ptr [rdi+11Ch], xmm3
          vmovss  xmm0, dword ptr [rsp+0C8h+aabbMax+8]
          vaddss  xmm1, xmm0, dword ptr [rsp+0C8h+aabbMin+8]
          vmulss  xmm4, xmm1, xmm8
          vmovss  dword ptr [rdi+120h], xmm4
          vsubss  xmm5, xmm2, dword ptr [rsp+0C8h+aabbMin]
          vsubss  xmm6, xmm3, dword ptr [rsp+0C8h+aabbMin+4]
          vsubss  xmm7, xmm4, dword ptr [rsp+0C8h+aabbMin+8]
          vmovss  xmm0, dword ptr [rsp+0C8h+aabbMax]
          vsubss  xmm2, xmm0, xmm2
          vmovss  xmm1, dword ptr [rsp+0C8h+aabbMax+4]
          vsubss  xmm3, xmm1, xmm3
          vmovss  xmm0, dword ptr [rsp+0C8h+aabbMax+8]
          vsubss  xmm4, xmm0, xmm4
          vmaxss  xmm1, xmm2, xmm5
          vmovss  dword ptr [rdi+124h], xmm1
          vmaxss  xmm0, xmm3, xmm6
          vmovss  dword ptr [rdi+128h], xmm0
          vmaxss  xmm1, xmm4, xmm7
          vmovss  dword ptr [rdi+12Ch], xmm1
        }
      }
      _RDI->s.lerp.pos.trType = trType;
      _RDI->s.lerp.apos.trType = trType;
      __asm { vmovss  xmm1, dword ptr [r13+109634h] }
      (*(void (__fastcall **)(BgVehiclePhysicsObjectBuffer *))(*(_QWORD *)m_vehiclePhysicsObjects->buffer + 144i64))(m_vehiclePhysicsObjects);
    }
    ++v8;
    ++m_vehiclePhysicsObjects;
  }
  while ( v8 < 0x80 );
  GVehicles::PhysicsProcessDeferredEvents(_R13);
  Sys_ProfEndNamedEvent();
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
GVehicles::PhysicsBeforeWorldStep
==============
*/
void GVehicles::PhysicsBeforeWorldStep(GVehicles *this, Physics_WorldId worldId)
{
  unsigned int v4; 
  unsigned __int8 *v5; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "GVehicles::PhysicsBeforeWorldStep");
  if ( worldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 530, ASSERT_TYPE_ASSERT, "(worldId == G_PHYSICSVEHICLE_WORLD)", (const char *)&queryFormat, "worldId == G_PHYSICSVEHICLE_WORLD") )
    __debugbreak();
  v4 = 0;
  v5 = &this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects[0].buffer[32];
  do
  {
    if ( *((_DWORD *)v5 - 6) )
    {
      if ( *(_DWORD *)v5 != worldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 539, ASSERT_TYPE_ASSERT, "(vehObj->GetWorldId() == worldId)", (const char *)&queryFormat, "vehObj->GetWorldId() == worldId") )
        __debugbreak();
      if ( BgVehiclePhysics::IsKeyframed((BgVehiclePhysics *)(v5 - 32)) && *((_DWORD *)v5 - 2) == 1 && v5[44] )
        BgVehiclePhysics::WarpClientAuth((BgVehiclePhysics *)(v5 - 32));
      BgVehiclePhysics::BeforePhysicsWorldStep((BgVehiclePhysics *)(v5 - 32));
    }
    ++v4;
    v5 += 3360;
  }
  while ( v4 < 0x80 );
  Sys_ProfEndNamedEvent();
}

/*
==============
GVehicles::PhysicsCheckForJolt
==============
*/

void __fastcall GVehicles::PhysicsCheckForJolt(GVehicles *this, unsigned int vehicleId, double deltaTime)
{
  unsigned int v14; 
  scrContext_t *v43; 
  BgVehiclePhysicsManager *v44; 
  BgVehiclePhysics *ObjectById; 
  int m_entityNumber; 
  const gentity_s *GEntity; 
  __int64 v62; 
  int v63; 
  float value; 
  tmat43_t<vec3_t> transform; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm2, xmm6
    vmovaps xmm8, xmm2
  }
  if ( (unsigned __int64)&v62 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1453, ASSERT_TYPE_ASSERT, "(deltaTime > 0.f)", (const char *)&queryFormat, "deltaTime > 0.f") )
    __debugbreak();
  __asm { vmovss  [rsp+0F8h+var_B8], xmm8 }
  if ( (v63 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1454, ASSERT_TYPE_SANITY, "( !IS_NAN( deltaTime ) )", (const char *)&queryFormat, "!IS_NAN( deltaTime )") )
    __debugbreak();
  GVehicles::PhysicsGetChassisTransform(this, vehicleId, &transform);
  __asm { vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  _RSI = GPhysicsVehicleManager::GetInternalById(vehicleId);
  v14 = 0;
  __asm
  {
    vmovss  [rsp+0F8h+value], xmm6
    vmovss  [rsp+0F8h+var_AC], xmm6
    vmovss  [rsp+0F8h+var_A8], xmm6
  }
  do
  {
    __asm { vmovss  xmm1, dword ptr [rsi+84h] }
    _RDI = 3i64 * (int)v14;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+rdi*4+0F8h+transform+4]
      vmulss  xmm3, xmm0, dword ptr [rsi+88h]
      vmulss  xmm2, xmm1, dword ptr [rsp+rdi*4+0F8h+transform]
      vmovss  xmm0, dword ptr [rsp+rdi*4+0F8h+transform+8]
      vmulss  xmm1, xmm0, dword ptr [rsi+8Ch]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm7, xmm4, xmm1
      vmovss  xmm0, dword ptr [rsp+rdi*4+0F8h+transform+4]
      vmulss  xmm3, xmm0, dword ptr [rsi+7Ch]
      vmovss  xmm1, dword ptr [rsp+rdi*4+0F8h+transform]
      vmulss  xmm2, xmm1, dword ptr [rsi+78h]
      vmovss  xmm0, dword ptr [rsp+rdi*4+0F8h+transform+8]
      vmulss  xmm1, xmm0, dword ptr [rsi+80h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm6, xmm4, xmm1
      vandps  xmm0, xmm6, xmm9
      vandps  xmm2, xmm7, xmm9
      vcomiss xmm2, xmm0
    }
    ++v14;
  }
  while ( v14 < 2 );
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+8Ch]
    vmovss  xmm3, dword ptr [rsi+80h]
    vandps  xmm1, xmm2, xmm9
    vandps  xmm0, xmm3, xmm9
    vcomiss xmm1, xmm0
  }
  if ( v14 > 2 )
  {
    __asm
    {
      vsubss  xmm0, xmm2, xmm3
      vdivss  xmm1, xmm0, xmm8
      vmovss  [rsp+0F8h+var_A8], xmm1
    }
  }
  if ( G_Vehicle_GetServerDef(_RSI->vehicleDefIndex) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+308h]
      vmulss  xmm6, xmm0, xmm0
    }
    v43 = ScriptContext_Server();
    if ( BGVehicles::PhysicsIsValid(vehicleId) )
    {
      if ( GVehicles::ms_gVehiclesSystem )
      {
        v44 = GVehicles::ms_gVehiclesSystem->PhysicsGetVehiclePhysicsManager(GVehicles::ms_gVehiclesSystem);
        ObjectById = BgVehiclePhysicsManager::GetObjectById(v44, vehicleId);
        if ( ObjectById )
        {
          m_entityNumber = ObjectById->m_entityNumber;
          if ( m_entityNumber != 2047 )
          {
            GEntity = G_GetGEntity(m_entityNumber);
            if ( GEntity )
            {
              __asm
              {
                vmovss  xmm0, [rsp+0F8h+var_AC]
                vmovss  xmm1, [rsp+0F8h+value]
                vmulss  xmm3, xmm0, xmm0
                vmulss  xmm2, xmm1, xmm1
                vaddss  xmm0, xmm3, xmm2
                vcomiss xmm0, xmm6
              }
              if ( Scr_IsSystemActive(v43, 1u) )
              {
                __asm
                {
                  vmovss  xmm3, cs:__real@3d68ba2f
                  vmulss  xmm1, xmm3, [rsp+0F8h+value]
                  vmulss  xmm0, xmm3, [rsp+0F8h+var_AC]
                  vmulss  xmm2, xmm3, [rsp+0F8h+var_A8]
                  vmovss  [rsp+0F8h+value], xmm1
                  vmovss  [rsp+0F8h+var_AC], xmm0
                  vmovss  [rsp+0F8h+var_A8], xmm2
                }
                Scr_AddVector(v43, &value);
                GScr_Notify(GEntity, scr_const.veh_jolt, 1u);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    Com_PrintWarning(20, "GVehicles::PhysicsCheckForJolt() called when vehicleDef is null\n");
  }
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
GVehicles::PhysicsCrash
==============
*/
void GVehicles::PhysicsCrash(GVehicles *this, unsigned int vehicleId)
{
  char v20; 
  GPhysicsVehicleInternal *InternalById; 
  vec3_t centerOfMass; 
  vec3_t origin; 
  vec3_t impulse; 
  vec3_t linearVelocity; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  if ( GPhysicsVehicleManager::GetInternalById(vehicleId)->isWrecked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1318, ASSERT_TYPE_ASSERT, "(!PhysicsIsWrecked( vehicleId ))", (const char *)&queryFormat, "!PhysicsIsWrecked( vehicleId )") )
    __debugbreak();
  GPhysicsVehicleManager::GetInternalById(vehicleId)->crashingDisabled = 0;
  GVehicles::PhysicsWreck(this, vehicleId);
  GVehicles::PhysicsGetLinearVelocity(this, vehicleId, &linearVelocity);
  GVehicles::PhysicsGetCenterOfMass(this, vehicleId, &centerOfMass);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0B8h+linearVelocity]
    vmovss  xmm3, dword ptr [rsp+0B8h+linearVelocity+4]
    vmovss  xmm5, cs:__real@3f800000
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcomiss xmm2, cs:__real@3a83126f
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm5, xmm0
    vdivss  xmm1, xmm5, xmm0
    vmulss  xmm8, xmm4, xmm1
    vmulss  xmm6, xmm3, xmm1
  }
  if ( v20 )
  {
    __asm
    {
      vmovaps xmm8, xmm5
      vxorps  xmm6, xmm6, xmm6
    }
  }
  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  _RAX = G_Vehicle_GetServerDef(InternalById->vehicleDefIndex);
  _RDI = _RAX;
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rax+31Ch]
      vmulss  xmm0, xmm8, xmm2
      vaddss  xmm1, xmm0, dword ptr [rsp+0B8h+centerOfMass]
      vmulss  xmm2, xmm6, xmm2
      vaddss  xmm0, xmm2, dword ptr [rsp+0B8h+centerOfMass+4]
      vmovss  dword ptr [rsp+0B8h+origin], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+centerOfMass+8]
      vmovss  dword ptr [rsp+0B8h+origin+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rax+320h]
      vmovss  dword ptr [rsp+0B8h+origin+8], xmm2
      vmovss  xmm3, dword ptr [rax+324h]
      vmulss  xmm0, xmm6, xmm3
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps [rsp+0B8h+var_28], xmm7
      vxorps  xmm7, xmm0, xmm6
      vmulss  xmm8, xmm8, xmm3
    }
    if ( G_rand() % 2 )
    {
      __asm
      {
        vxorps  xmm7, xmm7, xmm6
        vxorps  xmm8, xmm8, xmm6
      }
    }
    __asm { vmovss  xmm6, dword ptr [rdi+328h] }
    *(double *)&_XMM0 = GVehicles::PhysicsGetMass(this, vehicleId);
    __asm
    {
      vmulss  xmm1, xmm7, xmm0
      vmulss  xmm2, xmm8, xmm0
      vmulss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rsp+0B8h+impulse+8], xmm0
      vmovss  dword ptr [rsp+0B8h+impulse], xmm1
      vmovss  dword ptr [rsp+0B8h+impulse+4], xmm2
    }
    GVehicles::PhysicsAddImpulse(this, vehicleId, &impulse, &origin);
    __asm { vmovaps xmm7, [rsp+0B8h+var_28] }
  }
  else
  {
    Com_PrintWarning(20, "GVehicles::PhysicsCrash() called when vehicleDef is null\n");
  }
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
GVehicles::PhysicsCreateComponent_GoStraightTo
==============
*/
VehiclePhysicsComponentId *GVehicles::PhysicsCreateComponent_GoStraightTo(GVehicles *this, VehiclePhysicsComponentId *vehicleId, const vec3_t *pos, const vec3_t *a4)
{
  int v6; 
  BgVehicleComponentGoStraightTo *v7; 

  v6 = (int)pos;
  vehicleId->id = 0;
  v7 = BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentGoStraightTo>(&this->m_vehiclePhysicsManager, this, (unsigned int)pos, 3u, vehicleId);
  if ( v7 )
    BgVehicleComponentGoStraightTo::GoStraightTo(v7, a4);
  else
    Com_PrintWarning(20, "PhysicsCreateComponent_GoStraightTo: Can't create component for this vehicle index %d\n", (unsigned int)(v6 - 1));
  return vehicleId;
}

/*
==============
GVehicles::PhysicsCreateComponent_PathFinder
==============
*/
VehiclePhysicsComponentId *GVehicles::PhysicsCreateComponent_PathFinder(GVehicles *this, VehiclePhysicsComponentId *vehicleId, const vec3_t *pos, const vec3_t *layer, unsigned int layera)
{
  int v7; 
  BgVehicleComponentPathFinder *v8; 

  v7 = (int)pos;
  vehicleId->id = 0;
  v8 = BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentPathFinder>(&this->m_vehiclePhysicsManager, this, (unsigned int)pos, 2u, vehicleId);
  if ( v8 )
    BgVehicleComponentPathFinder::FindPath(v8, layer, layera);
  else
    Com_PrintWarning(20, "PhysicsCreateComponent_PathFinder: Can't create component for this vehicle index %d\n", (unsigned int)(v7 - 1));
  return vehicleId;
}

/*
==============
GVehicles::PhysicsCreateComponent_PathFollower
==============
*/
VehiclePhysicsComponentId *GVehicles::PhysicsCreateComponent_PathFollower(GVehicles *this, VehiclePhysicsComponentId *vehicleId, unsigned int nodeIndex, __int16 looped, char a5)
{
  BgVehicleComponentPathFollower *v8; 
  BgVehicleComponentPathFollower *v9; 

  vehicleId->id = 0;
  v8 = BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentPathFollower>(&this->m_vehiclePhysicsManager, this, nodeIndex, 1u, vehicleId);
  v9 = v8;
  if ( v8 )
  {
    if ( looped >= 0 )
      BgVehicleComponentPathFollower::StartPath(v8, looped);
    BgVehicleComponentPathFollower::SetStopOnEnd(v9, a5 != 1);
  }
  else
  {
    Com_PrintWarning(20, "PhysicsCreateComponent_PathFollower: Can't create component for this vehicle index %d\n", nodeIndex - 1);
  }
  return vehicleId;
}

/*
==============
GVehicles::PhysicsCreateRigidBodyResources
==============
*/
_BOOL8 GVehicles::PhysicsCreateRigidBodyResources(GVehicles *this, unsigned int vehicleId)
{
  BgVehiclePhysics *ObjectById; 
  GPhysicsVehicleInternal *InternalById; 
  const VehicleDef *ServerDef; 
  bool v6; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  ServerDef = G_Vehicle_GetServerDef(InternalById->vehicleDefIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 894, ASSERT_TYPE_ASSERT, "( vehDef )", "We expect a valid VehicleDef pointer at this point") )
    __debugbreak();
  v6 = ObjectById->CreatePhysics(ObjectById, &ServerDef->vehiclePhysicsDef);
  if ( v6 && ObjectById->m_netcodeType == VEH_NETCODE_CLIENT_AUTH )
  {
    BgVehiclePhysics::SetKeyframed(ObjectById, 1);
    G_PhysicsObject_IdentifyRigidBodyType(ObjectById->m_entityNumber);
  }
  return v6;
}

/*
==============
GVehicles::PhysicsCreateVehicle
==============
*/
__int64 GVehicles::PhysicsCreateVehicle(GVehicles *this, int entityIndex, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  gentity_s *GEntity; 
  unsigned int v8; 
  GPhysicsVehicleInternal *v9; 
  unsigned int v10; 
  __int64 v11; 
  GPhysicsVehicleInternal *v12; 
  BgVehiclePhysics *physicsVehicleObject; 
  __int64 v15; 

  GEntity = G_GetGEntity(entityIndex);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 223, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !vehDef->vehiclePhysicsDef.physicsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 225, ASSERT_TYPE_ASSERT, "(vehDef.vehiclePhysicsDef.physicsEnabled)", (const char *)&queryFormat, "vehDef.vehiclePhysicsDef.physicsEnabled") )
    __debugbreak();
  v8 = 0;
  v9 = GPhysicsVehicleManager::s_physicsVehicles;
  while ( v9->inUse )
  {
    if ( !v9[1].inUse )
    {
      ++v8;
      break;
    }
    if ( !v9[2].inUse )
    {
      v8 += 2;
      break;
    }
    if ( !v9[3].inUse )
    {
      v8 += 3;
      break;
    }
    v9 += 4;
    v8 += 4;
    if ( v8 >= 0x80 )
      goto LABEL_18;
  }
  if ( v8 < 0x80 )
    goto LABEL_20;
LABEL_18:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 229, ASSERT_TYPE_ASSERT, "(vehicleIdx < (1 << 7))", "%s\n\tGVehicles::PhysicsCreateVehicle() Not enough room for another vehicle", "vehicleIdx < MAX_VEHICLES") )
    __debugbreak();
LABEL_20:
  v10 = v8 + 1;
  if ( v8 >= 0x80 )
  {
    LODWORD(v15) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v15, 128) )
      __debugbreak();
  }
  v11 = v8;
  v12 = &GPhysicsVehicleManager::s_physicsVehicles[v11];
  if ( !&GPhysicsVehicleManager::s_physicsVehicles[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 235, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
    __debugbreak();
  if ( v12->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 238, ASSERT_TYPE_ASSERT, "(!vehicle->inUse)", "%s\n\tGVehicles::PhysicsCreateVehicle() this vehicle was in use", "!vehicle->inUse") )
    __debugbreak();
  v12->inUse = 1;
  GPhysicsVehicleManager::s_physicsVehicles[v11].dummy = NULL;
  GPhysicsVehicleManager::s_physicsVehicles[v11].vehicleDefIndex = vehDefIndex;
  if ( !GPhysicsVehicleManager::s_physicsVehicles[v11].physicsVehicleObject )
    GPhysicsVehicleManager::s_physicsVehicles[v11].physicsVehicleObject = BgVehiclePhysicsManager::Allocate(&this->m_vehiclePhysicsManager, v10, vehDef->type, vehDef->vehiclePhysicsDef.physics_gameProfile);
  GEntity->s.lerp.pos.trType = TR_PHYSICS_SERVER_AUTH;
  GEntity->s.lerp.apos.trType = TR_PHYSICS_SERVER_AUTH;
  physicsVehicleObject = GPhysicsVehicleManager::s_physicsVehicles[v11].physicsVehicleObject;
  if ( physicsVehicleObject && !physicsVehicleObject->Setup(physicsVehicleObject, this, PHYSICS_WORLD_ID_FIRST, v10, GEntity->s.number, vehDefIndex, vehDef) )
  {
    Com_PrintError(20, "GVehicles::PhysicsCreateVehicle() Can't setup the Physics Vehicle object");
    GPhysicsVehicleManager::s_physicsVehicles[v11].physicsVehicleObject->Reset(GPhysicsVehicleManager::s_physicsVehicles[v11].physicsVehicleObject);
    GPhysicsVehicleManager::s_physicsVehicles[v11].physicsVehicleObject = NULL;
    v10 = BGVehicles::PhysicsInvalidId();
  }
  if ( !GPhysicsVehicleManager::s_physicsVehicles[v11].physicsVehicleObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 265, ASSERT_TYPE_ASSERT, "(vehicle->physicsVehicleObject)", (const char *)&queryFormat, "vehicle->physicsVehicleObject") )
    __debugbreak();
  if ( !GPhysicsVehicleManager::s_physicsVehicles[v11].physicsVehicleObject->m_inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 266, ASSERT_TYPE_ASSERT, "(vehicle->physicsVehicleObject->IsInUse())", (const char *)&queryFormat, "vehicle->physicsVehicleObject->IsInUse()") )
    __debugbreak();
  return v10;
}

/*
==============
GVehicles::PhysicsDeactivateAlways
==============
*/
void GVehicles::PhysicsDeactivateAlways(GVehicles *this, unsigned int vehicleId)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::SetDeactivatedAlways(ObjectById);
}

/*
==============
GVehicles::PhysicsDestroyComponent
==============
*/
void GVehicles::PhysicsDestroyComponent(GVehicles *this, VehiclePhysicsComponentId componentId)
{
  unsigned int v4; 
  unsigned int v5; 
  char *v6; 
  _DWORD *v7; 
  BgVehiclePhysics *ObjectById; 
  __int64 v9; 

  if ( (!componentId.id || (componentId.id & 0xFF0000) >= 0x20000) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 806, ASSERT_TYPE_ASSERT, "(componentId.IsValid())", (const char *)&queryFormat, "componentId.IsValid()") )
    __debugbreak();
  if ( (!componentId.id || (componentId.id & 0xFF0000) >= 0x20000) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 188, ASSERT_TYPE_ASSERT, "(compId.IsValid())", (const char *)&queryFormat, "compId.IsValid()") )
    __debugbreak();
  v4 = BYTE2(componentId.id);
  v5 = LOWORD(componentId.id) - 1;
  if ( v5 >= 0x80 )
  {
    LODWORD(v9) = LOWORD(componentId.id) - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v9, 128) )
      __debugbreak();
  }
  v6 = (char *)this + 768 * LOWORD(componentId.id) + 384 * BYTE2(componentId.id);
  if ( this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects[v5].buffer[612] )
    v7 = v6 + 957712;
  else
    v7 = v6 + 429328;
  if ( v7[2] != componentId.id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 195, ASSERT_TYPE_ASSERT, "(baseComp->GetId().IsEqual( compId ))", (const char *)&queryFormat, "baseComp->GetId().IsEqual( compId )") )
    __debugbreak();
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 32i64))(v7);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, LOWORD(componentId.id));
  if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 815, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  BgVehiclePhysics::InvalidateComponent(ObjectById, v4);
}

/*
==============
GVehicles::PhysicsDestroyComponent_GoStraightTo
==============
*/
void GVehicles::PhysicsDestroyComponent_GoStraightTo(GVehicles *this, unsigned int vehicleId)
{
  unsigned int vehicleIda; 

  BgVehiclePhysicsManager::GetComponentIdByType(&this->m_vehiclePhysicsManager, (unsigned int)&vehicleIda, vehicleId);
  if ( vehicleIda )
  {
    if ( (vehicleIda & 0xFF0000) < 0x20000 )
      ((void (__fastcall *)(GVehicles *))this->PhysicsDestroyComponent)(this);
  }
}

/*
==============
GVehicles::PhysicsDestroyComponent_PathFinder
==============
*/
void GVehicles::PhysicsDestroyComponent_PathFinder(GVehicles *this, unsigned int vehicleId)
{
  unsigned int vehicleIda; 

  BgVehiclePhysicsManager::GetComponentIdByType(&this->m_vehiclePhysicsManager, (unsigned int)&vehicleIda, vehicleId);
  if ( vehicleIda )
  {
    if ( (vehicleIda & 0xFF0000) < 0x20000 )
      ((void (__fastcall *)(GVehicles *))this->PhysicsDestroyComponent)(this);
  }
}

/*
==============
GVehicles::PhysicsDestroyComponent_PathFollower
==============
*/
void GVehicles::PhysicsDestroyComponent_PathFollower(GVehicles *this, unsigned int vehicleId)
{
  unsigned int vehicleIda; 

  BgVehiclePhysicsManager::GetComponentIdByType(&this->m_vehiclePhysicsManager, (unsigned int)&vehicleIda, vehicleId);
  if ( vehicleIda )
  {
    if ( (vehicleIda & 0xFF0000) < 0x20000 )
      ((void (__fastcall *)(GVehicles *))this->PhysicsDestroyComponent)(this);
  }
}

/*
==============
GVehicles::PhysicsDestroyRigidBodyResources
==============
*/
void GVehicles::PhysicsDestroyRigidBodyResources(GVehicles *this, unsigned int vehicleId)
{
  BgVehiclePhysicsManager *p_m_vehiclePhysicsManager; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysics *v4; 
  BgVehiclePhysics *ObjectForPmove; 

  p_m_vehiclePhysicsManager = &this->m_vehiclePhysicsManager;
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  v4 = ObjectById;
  if ( ObjectById->m_playerControlled )
  {
    ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(p_m_vehiclePhysicsManager, ObjectById);
    memset_0(ObjectForPmove, 0, 0xD20ui64);
  }
  v4->DestroyPhysics(v4);
}

/*
==============
GVehicles::PhysicsDestroyVehicle
==============
*/
void GVehicles::PhysicsDestroyVehicle(GVehicles *this, unsigned int *vehicleId)
{
  unsigned int v3; 
  GPhysicsVehicleInternal *InternalById; 
  BgVehiclePhysics *physicsVehicleObject; 

  if ( !BGVehicles::PhysicsIsValid(*vehicleId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 275, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleId )") )
    __debugbreak();
  v3 = *vehicleId;
  if ( !BGVehicles::PhysicsIsValid(*vehicleId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 149, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
    __debugbreak();
  InternalById = GPhysicsVehicleManager::GetInternalById(v3);
  if ( !InternalById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 153, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
    __debugbreak();
  physicsVehicleObject = InternalById->physicsVehicleObject;
  if ( physicsVehicleObject )
  {
    physicsVehicleObject->Reset(physicsVehicleObject);
    InternalById->physicsVehicleObject = NULL;
  }
  InternalById->inUse = 0;
  *vehicleId = BGVehicles::PhysicsInvalidId();
}

/*
==============
GVehicles::PhysicsDrawDebugVehicle
==============
*/
void GVehicles::PhysicsDrawDebugVehicle(GVehicles *this, const BgVehiclePhysics *vehObj)
{
  ;
}

/*
==============
GVehicles::PhysicsEnableCrashing
==============
*/
void GVehicles::PhysicsEnableCrashing(GVehicles *this, unsigned int vehicleId, bool enable)
{
  GPhysicsVehicleManager::GetInternalById(vehicleId)->crashingDisabled = !enable;
}

/*
==============
GVehicles::PhysicsExtractIdFromPhysicsUserData
==============
*/
unsigned int GVehicles::PhysicsExtractIdFromPhysicsUserData(GVehicles *this, int bodyPhysicsUserData, entityType_s *outEntType, bool *outIsSuspended)
{
  unsigned __int16 RefId; 
  gentity_s *GEntity; 
  unsigned int result; 
  unsigned int physicsVehicle; 
  Vehicle *vehicle; 

  if ( Physics_GetRefSystem(bodyPhysicsUserData) == Physics_RefSystem_GEntities )
  {
    RefId = Physics_GetRefId(bodyPhysicsUserData);
    GEntity = G_GetGEntity(RefId);
  }
  else
  {
    GEntity = NULL;
  }
  result = BGVehicles::PhysicsInvalidId();
  physicsVehicle = result;
  if ( GEntity )
  {
    *outEntType = GEntity->s.eType;
    if ( GEntity->s.eType == ET_VEHICLE )
    {
      vehicle = GEntity->vehicle;
      if ( vehicle )
        physicsVehicle = vehicle->physicsVehicle;
    }
    *outIsSuspended = GVehicles::IsSuspended(this, GEntity);
    return physicsVehicle;
  }
  else
  {
    *outEntType = ET_FIRST;
    *outIsSuspended = 0;
  }
  return result;
}

/*
==============
GVehicles::PhysicsForceKeyframedMotion
==============
*/
void GVehicles::PhysicsForceKeyframedMotion(GVehicles *this, unsigned int vehicleId)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  if ( ObjectById->m_playerControlled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1590, ASSERT_TYPE_ASSERT, "( !vehObj->IsPlayerControlled() )", "PhysicsForceKeyframedMotion() Can't force keyframed vehicle when it's being controlled by a player") )
    __debugbreak();
  if ( !ObjectById->m_playerControlled )
  {
    ObjectById->m_forcedKeyframe = 1;
    BgVehiclePhysics::SetKeyframed(ObjectById, 1);
    G_PhysicsObject_IdentifyRigidBodyType(ObjectById->m_entityNumber);
  }
}

/*
==============
GVehicles::PhysicsGetAngularVelocity
==============
*/
void GVehicles::PhysicsGetAngularVelocity(GVehicles *this, unsigned int vehicleId, vec3_t *angularVelocity)
{
  int v8; 
  int v9; 
  int v10; 

  _RBX = angularVelocity;
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+1B0h]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm2, dword ptr [rax+1B4h]
    vmovss  dword ptr [rbx+4], xmm2
    vmovss  xmm1, dword ptr [rax+1B8h]
    vmovss  [rsp+38h+arg_0], xmm0
    vmovss  dword ptr [rbx+8], xmm1
  }
  if ( (v8 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_0], xmm2 }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_0], xmm1 }
  if ( (v10 & 0x7F800000) == 2139095040 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1145, ASSERT_TYPE_SANITY, "( !IS_NAN( ( angularVelocity )[0] ) && !IS_NAN( ( angularVelocity )[1] ) && !IS_NAN( ( angularVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( angularVelocity )[0] ) && !IS_NAN( ( angularVelocity )[1] ) && !IS_NAN( ( angularVelocity )[2] )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetAntiLag
==============
*/
GAntiLag *GVehicles::PhysicsGetAntiLag(GVehicles *this)
{
  GAntiLag *result; 

  result = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
      __debugbreak();
    return GAntiLag::ms_gAntiLagData;
  }
  return result;
}

/*
==============
GVehicles::PhysicsGetAsset
==============
*/
bool GVehicles::PhysicsGetAsset(GVehicles *this, int entityNum, const PhysicsAsset **outPhysAsset)
{
  const gentity_s *GEntity; 
  int physShapeOverrideIdx; 
  XModel *detailModel; 
  PhysicsAsset *physAssetAddendum; 
  XModel *baseModel; 
  bool overrideContents; 
  int contentsOverride; 
  int physShapeAddendumIdx; 

  if ( !outPhysAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 854, ASSERT_TYPE_ASSERT, "(outPhysAsset)", (const char *)&queryFormat, "outPhysAsset") )
    __debugbreak();
  if ( entityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 855, ASSERT_TYPE_ASSERT, "(entityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
    __debugbreak();
  GEntity = G_GetGEntity(entityNum);
  G_Utils_GetPhysicsAsset(GEntity, (const XModel **)&baseModel, outPhysAsset, &physShapeOverrideIdx, (const PhysicsAsset **)&physAssetAddendum, &physShapeAddendumIdx, (const XModel **)&detailModel, &overrideContents, &contentsOverride);
  return *outPhysAsset != NULL;
}

/*
==============
GVehicles::PhysicsGetBoneLocalMatrix
==============
*/
DObjAnimMat *GVehicles::PhysicsGetBoneLocalMatrix(GVehicles *this, int entityIndex, scr_string_t boneTag, int *outBoneIndex)
{
  const gentity_s *GEntity; 
  unsigned int BoneIndex; 
  DObjAnimMat *result; 

  GEntity = G_GetGEntity(entityIndex);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 682, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !boneTag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 684, ASSERT_TYPE_ASSERT, "(boneTag != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneTag != NULL_SCR_STRING") )
    __debugbreak();
  if ( !outBoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 685, ASSERT_TYPE_ASSERT, "(outBoneIndex)", (const char *)&queryFormat, "outBoneIndex") )
    __debugbreak();
  BoneIndex = SV_Game_DObjGetBoneIndex(GEntity, boneTag);
  *outBoneIndex = BoneIndex;
  if ( BoneIndex > 0xFD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 688, ASSERT_TYPE_ASSERT, "(*outBoneIndex >= 0 && *outBoneIndex < 254)", "%s\n\tGVehicles::PhysicsGetBoneLocalMatrix() failed to find a bone. Has the Xmodel the correct bones? Is the correct Xmodel? GDT has changed?", "*outBoneIndex >= 0 && *outBoneIndex < UNDEFINED_BONEINDEX") )
    __debugbreak();
  result = G_Utils_DObjGetLocalBoneIndexMatrix(GEntity, *outBoneIndex);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 692, ASSERT_TYPE_ASSERT, "(boneMat != nullptr)", "%s\n\tGVehicles::PhysicsGetBoneLocalMatrix() Bone wheel does not exist", "boneMat != nullptr") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
GVehicles::PhysicsGetCenterOfMass
==============
*/
void GVehicles::PhysicsGetCenterOfMass(GVehicles *this, unsigned int vehicleId, vec3_t *centerOfMass)
{
  int v8; 
  int v9; 
  int v10; 

  _RBX = centerOfMass;
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+22Ch]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm2, dword ptr [rax+230h]
    vmovss  dword ptr [rbx+4], xmm2
    vmovss  xmm1, dword ptr [rax+234h]
    vmovss  [rsp+38h+arg_0], xmm0
    vmovss  dword ptr [rbx+8], xmm1
  }
  if ( (v8 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_0], xmm2 }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_0], xmm1 }
  if ( (v10 & 0x7F800000) == 2139095040 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1221, ASSERT_TYPE_SANITY, "( !IS_NAN( ( centerOfMass )[0] ) && !IS_NAN( ( centerOfMass )[1] ) && !IS_NAN( ( centerOfMass )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( centerOfMass )[0] ) && !IS_NAN( ( centerOfMass )[1] ) && !IS_NAN( ( centerOfMass )[2] )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetChassisForwardDir
==============
*/
void GVehicles::PhysicsGetChassisForwardDir(GVehicles *this, unsigned int vehicleId, vec3_t *dir)
{
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 

  _RDI = dir;
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  _RBX = _RAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+174h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+178h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+17Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+180h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+184h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+188h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+190h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+194h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+198h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+19Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1A0h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
  {
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1003, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( r_transform )[0] )[0] ) || IS_NAN( ( ( r_transform )[0] )[1] ) || IS_NAN( ( ( r_transform )[0] )[2] ) ) || ( IS_NAN( ( ( r_transform )[1] )[0] ) || IS_NAN( ( ( r_transform )[1] )[1] ) || IS_NAN( ( ( r_transform )[1] )[2] ) ) || ( IS_NAN( ( ( r_transform )[2] )[0] ) || IS_NAN( ( ( r_transform )[2] )[1] ) || IS_NAN( ( ( r_transform )[2] )[2] ) ) || ( IS_NAN( ( ( r_transform )[3] )[0] ) || IS_NAN( ( ( r_transform )[3] )[1] ) || IS_NAN( ( ( r_transform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( r_transform )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+174h]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm2, dword ptr [rbx+178h]
    vmovss  [rsp+38h+arg_0], xmm0
    vmovss  dword ptr [rdi+4], xmm2
    vmovss  xmm1, dword ptr [rbx+17Ch]
    vmovss  dword ptr [rdi+8], xmm1
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm { vmovss  [rsp+38h+arg_0], xmm2 }
  if ( (v34 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm { vmovss  [rsp+38h+arg_0], xmm1 }
  if ( (v35 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1006, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetChassisTransform
==============
*/
void GVehicles::PhysicsGetChassisTransform(GVehicles *this, unsigned int vehicleId, tmat43_t<vec3_t> *transform)
{
  BgVehiclePhysics *ObjectById; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 

  _RBX = transform;
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  MatrixCopy43(&ObjectById->m_transform, _RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 993, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( transform )[0] )[0] ) || IS_NAN( ( ( transform )[0] )[1] ) || IS_NAN( ( ( transform )[0] )[2] ) ) || ( IS_NAN( ( ( transform )[1] )[0] ) || IS_NAN( ( ( transform )[1] )[1] ) || IS_NAN( ( ( transform )[1] )[2] ) ) || ( IS_NAN( ( ( transform )[2] )[0] ) || IS_NAN( ( ( transform )[2] )[1] ) || IS_NAN( ( ( transform )[2] )[2] ) ) || ( IS_NAN( ( ( transform )[3] )[0] ) || IS_NAN( ( ( transform )[3] )[1] ) || IS_NAN( ( ( transform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( transform )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetComponentPathFollower
==============
*/
BgVehicleComponentPathFollower *GVehicles::PhysicsGetComponentPathFollower(GVehicles *this, unsigned int vehicleId)
{
  unsigned int vehicleIda; 

  if ( BGVehicles::PhysicsIsValid(vehicleId) && (BgVehiclePhysicsManager::GetComponentIdByType(&this->m_vehiclePhysicsManager, (unsigned int)&vehicleIda, vehicleId), vehicleIda) && (vehicleIda & 0xFF0000) < 0x20000 )
    return BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentPathFollower>(&this->m_vehiclePhysicsManager, (VehiclePhysicsComponentId)vehicleIda);
  else
    return 0i64;
}

/*
==============
GVehicles::PhysicsGetCurrentCoM
==============
*/
void GVehicles::PhysicsGetCurrentCoM(GVehicles *this, unsigned int vehicleId, vec3_t *com)
{
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  vec3_t in1; 

  _RDI = com;
  _RBX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+22Ch]
    vmovss  dword ptr [rsp+68h+in1], xmm0
    vmovss  xmm1, dword ptr [rax+230h]
    vmovss  [rsp+68h+var_38], xmm0
    vmovss  dword ptr [rsp+68h+in1+4], xmm1
    vmovss  xmm2, dword ptr [rax+234h]
    vmovss  dword ptr [rsp+68h+in1+8], xmm2
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm { vmovss  [rsp+68h+var_38], xmm1 }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm { vmovss  [rsp+68h+var_38], xmm2 }
  if ( (v25 & 0x7F800000) == 2139095040 )
  {
LABEL_27:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1119, ASSERT_TYPE_SANITY, "( !IS_NAN( ( comWs )[0] ) && !IS_NAN( ( comWs )[1] ) && !IS_NAN( ( comWs )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( comWs )[0] ) && !IS_NAN( ( comWs )[1] ) && !IS_NAN( ( comWs )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+174h]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+178h]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+17Ch]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+180h]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+184h]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+188h]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18Ch]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+190h]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+194h]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+198h]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+19Ch]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1A0h]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
  {
LABEL_28:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1122, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( r_transform )[0] )[0] ) || IS_NAN( ( ( r_transform )[0] )[1] ) || IS_NAN( ( ( r_transform )[0] )[2] ) ) || ( IS_NAN( ( ( r_transform )[1] )[0] ) || IS_NAN( ( ( r_transform )[1] )[1] ) || IS_NAN( ( ( r_transform )[1] )[2] ) ) || ( IS_NAN( ( ( r_transform )[2] )[0] ) || IS_NAN( ( ( r_transform )[2] )[1] ) || IS_NAN( ( ( r_transform )[2] )[2] ) ) || ( IS_NAN( ( ( r_transform )[3] )[0] ) || IS_NAN( ( ( r_transform )[3] )[1] ) || IS_NAN( ( ( r_transform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( r_transform )") )
      __debugbreak();
  }
  MatrixTransposeTransformVector43(&in1, &_RBX->m_transform, _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
    goto LABEL_29;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 )
    goto LABEL_29;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 )
  {
LABEL_29:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1125, ASSERT_TYPE_SANITY, "( !IS_NAN( ( com )[0] ) && !IS_NAN( ( com )[1] ) && !IS_NAN( ( com )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( com )[0] ) && !IS_NAN( ( com )[1] ) && !IS_NAN( ( com )[2] )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetDelayToStartDriving
==============
*/

float __fastcall GVehicles::PhysicsGetDelayToStartDriving(GVehicles *this, const BgVehiclePhysics *vehObj, int driverEntNum, double defaultTime)
{
  __int64 v7; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( driverEntNum == 2047 )
    goto LABEL_12;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)driverEntNum);
  if ( v7 && *(_DWORD *)(v7 + 4) && *(_DWORD *)(v7 + 2556) )
  {
    _RBX = DCONST_DVARFLT_bg_vehDelayFromPassenger;
    if ( !DCONST_DVARFLT_bg_vehDelayFromPassenger && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehDelayFromPassenger") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovaps xmm6, [rsp+58h+var_18]
    }
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
  return *(float *)&_XMM0;
}

/*
==============
GVehicles::PhysicsGetFrontAxleOffset
==============
*/
float GVehicles::PhysicsGetFrontAxleOffset(GVehicles *this, unsigned int vehicleId)
{
  _RAX = GPhysicsVehicleManager::GetInternalById(vehicleId);
  __asm { vmovss  xmm0, dword ptr [rax+58h] }
  return *(float *)&_XMM0;
}

/*
==============
GVehicles::PhysicsGetFrontWheelCenterWS
==============
*/
void GVehicles::PhysicsGetFrontWheelCenterWS(GVehicles *this, unsigned int vehicleId, vec3_t *centerWS)
{
  GPhysicsVehicleInternal *InternalById; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 

  _RSI = centerWS;
  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  _RBX = _RAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+174h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+178h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+17Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+180h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+184h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+188h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+190h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+194h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+198h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+19Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1A0h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
  {
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1018, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( r_transform )[0] )[0] ) || IS_NAN( ( ( r_transform )[0] )[1] ) || IS_NAN( ( ( r_transform )[0] )[2] ) ) || ( IS_NAN( ( ( r_transform )[1] )[0] ) || IS_NAN( ( ( r_transform )[1] )[1] ) || IS_NAN( ( ( r_transform )[1] )[2] ) ) || ( IS_NAN( ( ( r_transform )[2] )[0] ) || IS_NAN( ( ( r_transform )[2] )[1] ) || IS_NAN( ( ( r_transform )[2] )[2] ) ) || ( IS_NAN( ( ( r_transform )[3] )[0] ) || IS_NAN( ( ( r_transform )[3] )[1] ) || IS_NAN( ( ( r_transform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( r_transform )") )
      __debugbreak();
  }
  MatrixTransformVector43(InternalById->axleCenters, &_RBX->m_transform, _RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1022, ASSERT_TYPE_SANITY, "( !IS_NAN( ( centerWS )[0] ) && !IS_NAN( ( centerWS )[1] ) && !IS_NAN( ( centerWS )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( centerWS )[0] ) && !IS_NAN( ( centerWS )[1] ) && !IS_NAN( ( centerWS )[2] )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetInputControl
==============
*/
double GVehicles::PhysicsGetInputControl(GVehicles *this, unsigned int vehicleId, unsigned int controlIndex)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  return BgVehiclePhysicsControls::GetValueExternal(&ObjectById->m_controls, controlIndex);
}

/*
==============
GVehicles::PhysicsGetLinearVelocity
==============
*/
void GVehicles::PhysicsGetLinearVelocity(GVehicles *this, unsigned int vehicleId, vec3_t *linearVelocity)
{
  int v8; 
  int v9; 
  int v10; 

  _RBX = linearVelocity;
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+1A4h]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm2, dword ptr [rax+1A8h]
    vmovss  dword ptr [rbx+4], xmm2
    vmovss  xmm1, dword ptr [rax+1ACh]
    vmovss  [rsp+38h+arg_0], xmm0
    vmovss  dword ptr [rbx+8], xmm1
  }
  if ( (v8 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_0], xmm2 }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_0], xmm1 }
  if ( (v10 & 0x7F800000) == 2139095040 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1135, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetLocalAcceleration
==============
*/
void GVehicles::PhysicsGetLocalAcceleration(GVehicles *this, unsigned int vehicleId, vec3_t *acceleration)
{
  int v8; 
  int v9; 
  int v10; 

  _RBX = acceleration;
  _RAX = GPhysicsVehicleManager::GetInternalById(vehicleId);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+9Ch]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm2, dword ptr [rax+0A0h]
    vmovss  dword ptr [rbx+4], xmm2
    vmovss  xmm1, dword ptr [rax+0A4h]
    vmovss  [rsp+38h+arg_10], xmm0
    vmovss  dword ptr [rbx+8], xmm1
  }
  if ( (v8 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_10], xmm2 }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_10], xmm1 }
  if ( (v10 & 0x7F800000) == 2139095040 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1066, ASSERT_TYPE_SANITY, "( !IS_NAN( ( acceleration )[0] ) && !IS_NAN( ( acceleration )[1] ) && !IS_NAN( ( acceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( acceleration )[0] ) && !IS_NAN( ( acceleration )[1] ) && !IS_NAN( ( acceleration )[2] )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetLocalVelocity
==============
*/
void GVehicles::PhysicsGetLocalVelocity(GVehicles *this, unsigned int vehicleId, vec3_t *velocity)
{
  int v8; 
  int v9; 
  int v10; 

  _RBX = velocity;
  _RAX = GPhysicsVehicleManager::GetInternalById(vehicleId);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0A8h]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm2, dword ptr [rax+0ACh]
    vmovss  dword ptr [rbx+4], xmm2
    vmovss  xmm1, dword ptr [rax+0B0h]
    vmovss  [rsp+38h+arg_10], xmm0
    vmovss  dword ptr [rbx+8], xmm1
  }
  if ( (v8 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_10], xmm2 }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_10], xmm1 }
  if ( (v10 & 0x7F800000) == 2139095040 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1056, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetMass
==============
*/
float GVehicles::PhysicsGetMass(GVehicles *this, unsigned int vehicleId)
{
  int v9; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  __asm
  {
    vmovss  xmm6, dword ptr [rax+260h]
    vmovss  [rsp+48h+arg_0], xmm6
  }
  if ( (v9 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1208, ASSERT_TYPE_SANITY, "( !IS_NAN( mass ) )", (const char *)&queryFormat, "!IS_NAN( mass )") )
    __debugbreak();
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
GVehicles::PhysicsGetPathComponentTypes
==============
*/
const unsigned int *GVehicles::PhysicsGetPathComponentTypes(unsigned int *count)
{
  *count = 3;
  return pathCompTypes;
}

/*
==============
GVehicles::PhysicsGetPlayerTransform
==============
*/
void GVehicles::PhysicsGetPlayerTransform(GVehicles *this, int vehEntNum, int *outOwnerEntNum, vec3_t *outPlayerOrg, vec3_t *outPlayerAngles)
{
  gentity_s *GEntity; 
  const gentity_s *v9; 
  const gentity_s *v10; 
  const playerState_s *EntityPlayerStateConst; 

  if ( vehEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1743, ASSERT_TYPE_ASSERT, "(vehEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "vehEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  GEntity = G_GetGEntity(vehEntNum);
  *outPlayerOrg = GEntity->r.currentOrigin;
  *outPlayerAngles = GEntity->r.currentAngles;
  *outOwnerEntNum = 2047;
  v9 = EntHandle::ent(&GEntity->r.ownerNum);
  v10 = v9;
  if ( v9 )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(v9);
    if ( EntityPlayerStateConst )
    {
      *outOwnerEntNum = v10->s.number;
      outPlayerOrg->v[0] = EntityPlayerStateConst->origin.v[0];
      outPlayerOrg->v[1] = EntityPlayerStateConst->origin.v[1];
      outPlayerOrg->v[2] = EntityPlayerStateConst->origin.v[2];
      *outPlayerAngles = EntityPlayerStateConst->viewangles;
    }
    else
    {
      Com_PrintWarning(20, "GVehicles::PhysicsGetPlayerTransform. No player-state for the player controlling the vehicle.\n");
    }
  }
  else
  {
    Com_PrintWarning(20, "GVehicles::PhysicsGetPlayerTransform. No player controlling the vehicle.\n");
  }
}

/*
==============
GVehicles::PhysicsGetRearAxleOffset
==============
*/
float GVehicles::PhysicsGetRearAxleOffset(GVehicles *this, unsigned int vehicleId)
{
  _RAX = GPhysicsVehicleManager::GetInternalById(vehicleId);
  __asm { vmovss  xmm0, dword ptr [rax+5Ch] }
  return *(float *)&_XMM0;
}

/*
==============
GVehicles::PhysicsGetRearWheelCenterWS
==============
*/
void GVehicles::PhysicsGetRearWheelCenterWS(GVehicles *this, unsigned int vehicleId, vec3_t *centerWS)
{
  GPhysicsVehicleInternal *InternalById; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 

  _RSI = centerWS;
  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  _RBX = _RAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+174h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+178h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+17Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+180h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+184h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+188h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+190h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+194h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+198h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+19Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1A0h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
  {
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1034, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( r_transform )[0] )[0] ) || IS_NAN( ( ( r_transform )[0] )[1] ) || IS_NAN( ( ( r_transform )[0] )[2] ) ) || ( IS_NAN( ( ( r_transform )[1] )[0] ) || IS_NAN( ( ( r_transform )[1] )[1] ) || IS_NAN( ( ( r_transform )[1] )[2] ) ) || ( IS_NAN( ( ( r_transform )[2] )[0] ) || IS_NAN( ( ( r_transform )[2] )[1] ) || IS_NAN( ( ( r_transform )[2] )[2] ) ) || ( IS_NAN( ( ( r_transform )[3] )[0] ) || IS_NAN( ( ( r_transform )[3] )[1] ) || IS_NAN( ( ( r_transform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( r_transform )") )
      __debugbreak();
  }
  MatrixTransformVector43(&InternalById->axleCenters[1], &_RBX->m_transform, _RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1038, ASSERT_TYPE_SANITY, "( !IS_NAN( ( centerWS )[0] ) && !IS_NAN( ( centerWS )[1] ) && !IS_NAN( ( centerWS )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( centerWS )[0] ) && !IS_NAN( ( centerWS )[1] ) && !IS_NAN( ( centerWS )[2] )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetScriptableDamageSystem
==============
*/
VehicleScriptableDmg *GVehicles::PhysicsGetScriptableDamageSystem(GVehicles *this)
{
  return &this->m_scriptableDamageInfo;
}

/*
==============
GVehicles::PhysicsGetSpeed
==============
*/
float GVehicles::PhysicsGetSpeed(GVehicles *this, unsigned int vehicleId)
{
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  vec3_t dir; 
  char v41; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  GVehicles::PhysicsGetChassisForwardDir(this, vehicleId, &dir);
  __asm
  {
    vmovss  xmm11, dword ptr [rsp+0B8h+dir]
    vmovss  xmm9, dword ptr [rsp+0B8h+dir+8]
    vmovss  xmm10, dword ptr [rsp+0B8h+dir+4]
    vmovss  [rsp+0B8h+var_88], xmm11
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm { vmovss  [rsp+0B8h+var_88], xmm10 }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm { vmovss  [rsp+0B8h+var_88], xmm9 }
  if ( (v33 & 0x7F800000) == 2139095040 )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1165, ASSERT_TYPE_SANITY, "( !IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] )") )
      __debugbreak();
  }
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  __asm
  {
    vmovss  xmm8, dword ptr [rax+1A4h]
    vmovss  xmm6, dword ptr [rax+1A8h]
    vmovss  xmm7, dword ptr [rax+1ACh]
    vmovss  [rsp+0B8h+var_88], xmm8
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
    goto LABEL_21;
  __asm { vmovss  [rsp+0B8h+var_88], xmm6 }
  if ( (v35 & 0x7F800000) == 2139095040 )
    goto LABEL_21;
  __asm { vmovss  [rsp+0B8h+var_88], xmm7 }
  if ( (v36 & 0x7F800000) == 2139095040 )
  {
LABEL_21:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1135, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )") )
      __debugbreak();
  }
  __asm { vmovss  [rsp+0B8h+var_88], xmm8 }
  if ( (v37 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm { vmovss  [rsp+0B8h+var_88], xmm6 }
  if ( (v38 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm { vmovss  [rsp+0B8h+var_88], xmm7 }
  if ( (v39 & 0x7F800000) == 2139095040 )
  {
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1170, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, xmm11
    vmulss  xmm0, xmm6, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm7
    vaddss  xmm0, xmm2, xmm1
  }
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return *(float *)&_XMM0;
}

/*
==============
GVehicles::PhysicsGetSteeringPointWS
==============
*/
void GVehicles::PhysicsGetSteeringPointWS(GVehicles *this, unsigned int vehicleId, vec3_t *pointWS)
{
  int v7; 
  int v8; 
  int v9; 

  _RBX = pointWS;
  GVehicles::PhysicsGetFrontWheelCenterWS(this, vehicleId, pointWS);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+38h+arg_10], xmm0
  }
  if ( (v7 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+38h+arg_10], xmm0
  }
  if ( (v8 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+38h+arg_10], xmm0
  }
  if ( (v9 & 0x7F800000) == 2139095040 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1046, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pointWS )[0] ) && !IS_NAN( ( pointWS )[1] ) && !IS_NAN( ( pointWS )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pointWS )[0] ) && !IS_NAN( ( pointWS )[1] ) && !IS_NAN( ( pointWS )[2] )") )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetTopSpeedBwd
==============
*/
double GVehicles::PhysicsGetTopSpeedBwd(GVehicles *this, unsigned int vehicleId)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  return BgVehiclePhysics::GetTopSpeedReverse(ObjectById);
}

/*
==============
GVehicles::PhysicsGetTopSpeedFwd
==============
*/
double GVehicles::PhysicsGetTopSpeedFwd(GVehicles *this, unsigned int vehicleId)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  return BgVehiclePhysics::GetTopSpeedForward(ObjectById);
}

/*
==============
GVehicles::PhysicsGetVehicleDef
==============
*/
const VehicleDef *GVehicles::PhysicsGetVehicleDef(GVehicles *this, unsigned int vehDefIndex)
{
  if ( vehDefIndex < 0x80 )
    return G_Vehicle_GetServerDefSafe(vehDefIndex);
  else
    return 0i64;
}

/*
==============
PhysicsGetVehicleEntityFromId
==============
*/
gentity_s *PhysicsGetVehicleEntityFromId(unsigned int vehicleId)
{
  GVehicles *VehicleSystem; 
  BgVehiclePhysicsManager *v3; 
  BgVehiclePhysics *ObjectById; 
  int m_entityNumber; 

  if ( BGVehicles::PhysicsIsValid(vehicleId) && GVehicles::ms_gVehiclesSystem && (VehicleSystem = GVehicles::GetVehicleSystem()) != NULL && (v3 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem), (ObjectById = BgVehiclePhysicsManager::GetObjectById(v3, vehicleId)) != NULL) && (m_entityNumber = ObjectById->m_entityNumber, m_entityNumber != 2047) )
    return G_GetGEntity(m_entityNumber);
  else
    return 0i64;
}

/*
==============
GVehicles::PhysicsGetVehicleId
==============
*/
unsigned int GVehicles::PhysicsGetVehicleId(GVehicles *this, int entityNum)
{
  gentity_s *GEntity; 
  Vehicle *vehicle; 

  GEntity = G_GetGEntity(entityNum);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 710, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  vehicle = GEntity->vehicle;
  if ( vehicle )
    return vehicle->physicsVehicle;
  else
    return BGVehicles::PhysicsInvalidId();
}

/*
==============
GVehicles::PhysicsGetVehicleObject
==============
*/
const BgVehiclePhysics *GVehicles::PhysicsGetVehicleObject(GVehicles *this, const int entityNum)
{
  __int64 v2; 
  gentity_s *v4; 
  Vehicle *vehicle; 

  v2 = entityNum;
  if ( G_IsEntityInUse(entityNum) && (v4 = &g_entities[v2], v4->s.eType == ET_VEHICLE) && (vehicle = v4->vehicle) != NULL && BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
    return BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, v4->vehicle->physicsVehicle);
  else
    return 0i64;
}

/*
==============
GVehicles::PhysicsGetWheelBaseLength
==============
*/
float GVehicles::PhysicsGetWheelBaseLength(GVehicles *this, unsigned int vehicleId)
{
  _RAX = GPhysicsVehicleManager::GetInternalById(vehicleId);
  __asm { vmovss  xmm0, dword ptr [rax+70h] }
  return *(float *)&_XMM0;
}

/*
==============
GVehicles::PhysicsGetWheelBaseWidth
==============
*/
float GVehicles::PhysicsGetWheelBaseWidth(GVehicles *this, unsigned int vehicleId)
{
  _RAX = GPhysicsVehicleManager::GetInternalById(vehicleId);
  __asm { vmovss  xmm0, dword ptr [rax+74h] }
  return *(float *)&_XMM0;
}

/*
==============
GVehicles::PhysicsImpulseCallback
==============
*/
void GVehicles::PhysicsImpulseCallback(Physics_SimpleCollisionCallback_Data *data)
{
  GVehicles *v2; 
  unsigned int *bodyIds; 
  __int64 v4; 
  unsigned int BodyUserData; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  char v13; 
  char v14; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 646, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v2 = GVehicles::ms_gVehiclesSystem;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 649, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  bodyIds = data->bodyIds;
  v4 = 2i64;
  do
  {
    BodyUserData = PhysicsVehicle_GetBodyUserData(data->worldId, *bodyIds);
    v6 = v2->PhysicsExtractIdFromPhysicsUserData(v2, BodyUserData, (entityType_s *)&v14, (bool *)&v13);
    if ( BGVehicles::PhysicsIsValid(v6) )
    {
      v7 = (__int64)v2->PhysicsGetVehiclePhysicsManager(v2);
      if ( !BGVehicles::PhysicsIsValid(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 58, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
        __debugbreak();
      v8 = v6 - 1;
      if ( v8 >= 0x80 )
      {
        LODWORD(v12) = 128;
        LODWORD(v11) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      v9 = 3360i64 * v8;
      v10 = v9 + v7 + 8;
      if ( v9 + v7 == -8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 660, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
        __debugbreak();
      (*(void (__fastcall **)(__int64, Physics_SimpleCollisionCallback_Data *))(*(_QWORD *)v10 + 96i64))(v10, data);
    }
    ++bodyIds;
    --v4;
  }
  while ( v4 );
}

/*
==============
GVehicles::PhysicsInit
==============
*/
void GVehicles::PhysicsInit(GVehicles *this)
{
  GPhysicsVehicleManager::Init(&this->m_vehiclePhysicsManager);
  this->m_lastPhysicsStepTime = 0.0;
}

/*
==============
GVehicles::PhysicsIsCrashingEnabled
==============
*/
bool GVehicles::PhysicsIsCrashingEnabled(GVehicles *this, unsigned int vehicleId)
{
  return !GPhysicsVehicleManager::GetInternalById(vehicleId)->crashingDisabled;
}

/*
==============
GVehicles::PhysicsIsDebugDrawing
==============
*/
bool GVehicles::PhysicsIsDebugDrawing(GVehicles *this)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.integer == 1;
}

/*
==============
GVehicles::PhysicsIsInAir
==============
*/
__int64 GVehicles::PhysicsIsInAir(GVehicles *this, unsigned int vehicleId)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  return ((__int64 (__fastcall *)(BgVehiclePhysics *))ObjectById->IsInAir)(ObjectById);
}

/*
==============
GVehicles::PhysicsIsKeyframed
==============
*/
bool GVehicles::PhysicsIsKeyframed(GVehicles *this, unsigned int vehicleId)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  return BgVehiclePhysics::IsKeyframed(ObjectById);
}

/*
==============
GVehicles::PhysicsIsSupportedWorld
==============
*/
bool GVehicles::PhysicsIsSupportedWorld(GVehicles *this, Physics_WorldId worldId)
{
  return worldId == PHYSICS_WORLD_ID_FIRST;
}

/*
==============
GVehicles::PhysicsIsWrecked
==============
*/
_BOOL8 GVehicles::PhysicsIsWrecked(GVehicles *this, unsigned int vehicleId)
{
  return GPhysicsVehicleManager::GetInternalById(vehicleId)->isWrecked;
}

/*
==============
GVehicles::PhysicsLaunch
==============
*/

void __fastcall GVehicles::PhysicsLaunch(GVehicles *this, unsigned int vehicleId, const vec3_t *launchVelocity, double spinFactor)
{
  char v17; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  vec3_t origin; 
  vec3_t linearVelocity; 
  vec3_t impulse; 
  vec3_t centerOfMass; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm0, dword ptr [r8]
    vmovss  [rsp+0C8h+var_98], xmm0
  }
  _RBX = launchVelocity;
  __asm { vmovaps xmm8, xmm3 }
  if ( (v52 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  [rsp+0C8h+var_98], xmm0
  }
  if ( (v53 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  [rsp+0C8h+var_98], xmm0
  }
  if ( (v54 & 0x7F800000) == 2139095040 )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1378, ASSERT_TYPE_SANITY, "( !IS_NAN( ( launchVelocity )[0] ) && !IS_NAN( ( launchVelocity )[1] ) && !IS_NAN( ( launchVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( launchVelocity )[0] ) && !IS_NAN( ( launchVelocity )[1] ) && !IS_NAN( ( launchVelocity )[2] )") )
      __debugbreak();
  }
  __asm { vmovss  [rsp+0C8h+var_98], xmm8 }
  if ( (v55 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1379, ASSERT_TYPE_SANITY, "( !IS_NAN( spinFactor ) )", (const char *)&queryFormat, "!IS_NAN( spinFactor )") )
    __debugbreak();
  GPhysicsVehicleManager::GetInternalById(vehicleId)->crashingDisabled = 0;
  GVehicles::PhysicsWreck(this, vehicleId);
  GVehicles::PhysicsGetLinearVelocity(this, vehicleId, &linearVelocity);
  GVehicles::PhysicsGetCenterOfMass(this, vehicleId, &centerOfMass);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+0C8h+centerOfMass]
    vmovsd  qword ptr [rsp+0C8h+origin], xmm0
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm8, xmm0
  }
  origin.v[2] = centerOfMass.v[2];
  if ( !v17 )
  {
    *(double *)&_XMM0 = G_random();
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = G_random();
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = G_random();
    __asm
    {
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm7, xmm7
      vaddss  xmm3, xmm3, xmm2
      vmovss  xmm2, cs:__real@3f800000
      vsqrtss xmm4, xmm3, xmm3
      vcmpless xmm1, xmm4, cs:__real@80000000
      vblendvps xmm1, xmm4, xmm2, xmm1
      vdivss  xmm5, xmm2, xmm1
      vmulss  xmm0, xmm0, xmm5
      vmulss  xmm2, xmm0, xmm8
      vaddss  xmm2, xmm2, dword ptr [rsp+0C8h+origin]
      vmulss  xmm0, xmm6, xmm5
      vmulss  xmm3, xmm0, xmm8
      vmovss  dword ptr [rsp+0C8h+origin], xmm2
      vaddss  xmm2, xmm3, dword ptr [rsp+0C8h+origin+4]
      vmulss  xmm0, xmm7, xmm5
      vmulss  xmm3, xmm0, xmm8
      vmovss  dword ptr [rsp+0C8h+origin+4], xmm2
      vaddss  xmm2, xmm3, dword ptr [rsp+0C8h+origin+8]
      vmovss  dword ptr [rsp+0C8h+origin+8], xmm2
    }
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm7, dword ptr [rbx+4]
    vmovss  xmm8, dword ptr [rbx+8]
  }
  GVehicles::PhysicsGetMass(this, vehicleId);
  __asm
  {
    vsubss  xmm1, xmm6, dword ptr [rsp+0C8h+linearVelocity]
    vsubss  xmm3, xmm7, dword ptr [rsp+0C8h+linearVelocity+4]
    vmulss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rsp+0C8h+impulse], xmm2
    vsubss  xmm2, xmm8, dword ptr [rsp+0C8h+linearVelocity+8]
    vmulss  xmm0, xmm2, xmm0
    vmovss  dword ptr [rsp+0C8h+impulse+8], xmm0
    vmovss  dword ptr [rsp+0C8h+impulse+4], xmm1
  }
  GVehicles::PhysicsAddImpulse(this, vehicleId, &impulse, &origin);
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
GVehicles::PhysicsLoad
==============
*/
void GVehicles::PhysicsLoad(GVehicles *this, SaveGame *save)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 
  BgVehiclePhysicsManager *p_m_vehiclePhysicsManager; 
  unsigned int v7; 
  BgVehiclePhysicsObjectBuffer **v8; 
  BgVehiclePhysicsObjectBuffer *m_vehiclePhysicsObjects; 
  BgVehiclePhysicsObjectBuffer *v10; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 297, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysicsVehicle_Load");
  p_m_vehiclePhysicsManager = &this->m_vehiclePhysicsManager;
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 182, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  MemFile_ReadData(&save->memFile, 0x6800ui64, GPhysicsVehicleManager::s_physicsVehicles);
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  BgVehiclePhysicsManager::LoadAllFromSaveGame(&this->m_vehiclePhysicsManager, save, GVehicles::ms_gVehiclesSystem);
  v7 = 0;
  v8 = (BgVehiclePhysicsObjectBuffer **)&unk_1492001F8;
  m_vehiclePhysicsObjects = p_m_vehiclePhysicsManager->m_vehiclePhysicsObjects;
  do
  {
    v10 = NULL;
    if ( *(_DWORD *)&m_vehiclePhysicsObjects->buffer[8] )
      v10 = m_vehiclePhysicsObjects;
    *v8 = v10;
    ++v7;
    ++m_vehiclePhysicsObjects;
    v8 += 26;
  }
  while ( v7 < 0x80 );
  BG_BSpline_Data_LoadFromSaveGame(save);
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
GVehicles::PhysicsMyChanges
==============
*/
void GVehicles::PhysicsMyChanges(GVehicles *this, unsigned int vehicleId, unsigned int vehicleDefIndex)
{
  const VehicleDef *ServerDef; 
  BgVehiclePhysics *ObjectById; 

  ServerDef = G_Vehicle_GetServerDef(vehicleDefIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1878, ASSERT_TYPE_ASSERT, "( vehDef )", "We expect a valid VehicleDef pointer at this point") )
    __debugbreak();
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  GPhysicsVehicleManager::GetInternalById(vehicleId)->vehicleDefIndex = vehicleDefIndex;
  ObjectById->MyChanges(ObjectById, ServerDef);
}

/*
==============
GVehicles::PhysicsOnWorldAction
==============
*/

void __fastcall GVehicles::PhysicsOnWorldAction(GVehicles *this, Physics_WorldId worldId, double deltaTime)
{
  Physics_WorldId v8; 
  unsigned int v10; 
  BgVehiclePhysicsManager *p_m_vehiclePhysicsManager; 
  __int64 v14; 
  BgVehiclePhysics *v17; 
  VehiclePhysicsNetcodeType NetcodeTypeForOwner; 
  gentity_s *GEntity; 
  const gentity_s *v20; 
  const playerState_s *EntityPlayerStateConst; 
  unsigned int PhysicsBodyId; 
  int v24; 
  char *fmt; 
  __int64 v30; 
  __int64 v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmm6, xmm2
  }
  v8 = worldId;
  __asm { vcomiss xmm2, cs:__real@3a83126f }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "GVehicles::PhysicsOnWorldAction");
  v10 = 0;
  p_m_vehiclePhysicsManager = &this->m_vehiclePhysicsManager;
  _RBX = this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects;
  __asm { vmovss  xmm7, cs:__real@41200000 }
  do
  {
    if ( !*(_DWORD *)&_RBX->buffer[8] )
      goto LABEL_56;
    if ( *(_DWORD *)&_RBX->buffer[32] != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 461, ASSERT_TYPE_ASSERT, "(vehObj->GetWorldId() == worldId)", (const char *)&queryFormat, "vehObj->GetWorldId() == worldId") )
      __debugbreak();
    if ( _RBX->buffer[612] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 462, ASSERT_TYPE_ASSERT, "(!vehObj->IsPmoveObject())", (const char *)&queryFormat, "!vehObj->IsPmoveObject()") )
      __debugbreak();
    v14 = *(int *)&_RBX->buffer[48];
    if ( (unsigned int)v14 >= 0x800 )
    {
      LODWORD(v31) = 2048;
      LODWORD(v30) = *(_DWORD *)&_RBX->buffer[48];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    _R15 = (EntHandle *)&g_entities[v14];
    if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 467, ASSERT_TYPE_ASSERT, "( vehEnt )", "Vehicle object must have an associated entity") )
      __debugbreak();
    if ( BgVehiclePhysicsManager::ExistsObjectForPmove(p_m_vehiclePhysicsManager, (const BgVehiclePhysics *)_RBX) )
    {
      _RAX = BgVehiclePhysicsManager::GetObjectForPmove(p_m_vehiclePhysicsManager, (const BgVehiclePhysics *)_RBX);
      v17 = _RAX;
      if ( _RAX )
      {
        _RBX->buffer[676] = _RAX->m_clientGeoLoaded;
        __asm
        {
          vmovsd  xmm0, qword ptr [rax+11Ch]
          vmovsd  qword ptr [rbx+11Ch], xmm0
        }
        *(float *)&_RBX->buffer[292] = _RAX->m_playerViewAngles.v[2];
      }
    }
    else
    {
      v17 = NULL;
    }
    NetcodeTypeForOwner = *(_DWORD *)&_RBX->buffer[24];
    GEntity = G_GetGEntity(*(_DWORD *)&_RBX->buffer[48]);
    if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 420, ASSERT_TYPE_ASSERT, "(vehEnt != nullptr)", (const char *)&queryFormat, "vehEnt != nullptr") )
      __debugbreak();
    if ( EntHandle::isDefined(&GEntity->r.ownerNum) )
    {
      v20 = EntHandle::ent(&GEntity->r.ownerNum);
      if ( v20 )
      {
        EntityPlayerStateConst = G_GetEntityPlayerStateConst(v20);
        if ( EntityPlayerStateConst )
          NetcodeTypeForOwner = G_Vehicle_GetNetcodeTypeForOwner((const BgVehiclePhysics *)_RBX, EntityPlayerStateConst->clientNum);
      }
    }
    if ( v17 && !v17->m_clientGeoLoaded && BgVehiclePhysics::GetNoClientGeoMode(v17) == NOCLIENTGEO_SWITCH_TO_SERVER_AUTH )
      NetcodeTypeForOwner = VEH_NETCODE_SERVER_AUTH;
    if ( !_RBX->buffer[76] || *(_DWORD *)&_RBX->buffer[24] == 1 )
    {
      if ( !BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)_RBX) || (PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)_RBX), !Physics_IsRigidBodyActive(*(Physics_WorldId *)&_RBX->buffer[32], PhysicsBodyId)) )
      {
        if ( *(_DWORD *)&_RBX->buffer[24] != 1 )
          BgVehiclePhysics::SetKeyframed((BgVehiclePhysics *)_RBX, 0);
      }
    }
    else
    {
      __asm { vmovaps xmm1, xmm7; minTimeDynamic }
      BgVehiclePhysics::SetDynamic((BgVehiclePhysics *)_RBX, *(float *)&_XMM1);
    }
    G_PhysicsObject_IdentifyRigidBodyType(v14);
    if ( !_RBX->buffer[76] || (v24 = *(_DWORD *)&_RBX->buffer[24]) != 0 && v24 != 3 || NetcodeTypeForOwner == VEH_NETCODE_SERVER_AUTH )
    {
      if ( !BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)_RBX) )
        goto LABEL_51;
      fmt = NULL;
    }
    else
    {
      if ( !EntHandle::isDefined(_R15 + 82) )
      {
        Com_PrintWarning(20, "GVehicles::PhysicsOnWorldAction. Physics vehicle's owner unlinked/changed. Switching to non-controlled vehicle.\n");
        BgVehiclePhysics::SetPlayerControlled((BgVehiclePhysics *)_RBX, 0);
        goto LABEL_51;
      }
      if ( !BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)_RBX) )
        goto LABEL_51;
      fmt = (char *)v17;
    }
    __asm { vmovaps xmm3, xmm6; deltaTime }
    BgVehiclePhysics::Simulate((BgVehiclePhysics *)_RBX, NULL, NULL, *(float *)&_XMM3, (const BgVehiclePhysics *)fmt);
LABEL_51:
    if ( (!_R15 || ((_R15[2].number - 12) & 0xFFFD) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 518, ASSERT_TYPE_ASSERT, "(vehEnt && BG_IsVehicleEntity( &vehEnt->s ))", (const char *)&queryFormat, "vehEnt && BG_IsVehicleEntity( &vehEnt->s )") )
      __debugbreak();
    *(double *)&_XMM0 = (*(double (__fastcall **)(BgVehiclePhysicsObjectBuffer *))(*(_QWORD *)_RBX->buffer + 88i64))(_RBX);
    __asm { vmovss  dword ptr [r15+68h], xmm0 }
    v8 = worldId;
LABEL_56:
    ++v10;
    ++_RBX;
  }
  while ( v10 < 0x80 );
  _RAX = this;
  __asm { vmovss  dword ptr [rax+109634h], xmm6 }
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_48]
    vmovaps xmm7, [rsp+0A8h+var_58]
  }
}

/*
==============
GVehicles::PhysicsPostThinkUpdate
==============
*/

void __fastcall GVehicles::PhysicsPostThinkUpdate(GVehicles *this, unsigned int vehicleId, double deltaTime)
{
  gentity_s *VehicleEntityFromId; 
  gentity_s *tagChildren; 
  gclient_s *client; 
  __int64 v92; 
  int v93; 
  tmat43_t<vec3_t> transform; 

  __asm
  {
    vmovaps [rsp+118h+var_78], xmm9
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps xmm9, xmm2
  }
  if ( (unsigned __int64)&v92 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1648, ASSERT_TYPE_ASSERT, "(deltaTime > 0.f)", (const char *)&queryFormat, "deltaTime > 0.f") )
    __debugbreak();
  __asm { vmovss  [rsp+118h+var_E8], xmm9 }
  if ( (v93 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1649, ASSERT_TYPE_SANITY, "( !IS_NAN( deltaTime ) )", (const char *)&queryFormat, "!IS_NAN( deltaTime )") )
    __debugbreak();
  _RBX = GPhysicsVehicleManager::GetInternalById(vehicleId);
  if ( _RBX->inUse )
  {
    __asm
    {
      vmovaps [rsp+118h+var_48], xmm6
      vmovaps [rsp+118h+var_58], xmm7
      vmovaps [rsp+118h+var_68], xmm8
      vmovaps [rsp+118h+var_88], xmm10
      vmovaps [rsp+118h+var_98], xmm11
      vmovaps [rsp+118h+var_A8], xmm12
    }
    GVehicles::PhysicsGetChassisTransform(this, vehicleId, &transform);
    _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
    __asm
    {
      vmovss  xmm7, dword ptr [rax+1A4h]
      vmovss  xmm6, dword ptr [rax+1A8h]
      vmovss  xmm8, dword ptr [rax+1ACh]
      vmovss  [rsp+118h+var_E8], xmm7
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_71;
    __asm { vmovss  [rsp+118h+var_E8], xmm6 }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_71;
    __asm { vmovss  [rsp+118h+var_E8], xmm8 }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_71:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1135, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm7, xmm7, dword ptr [rbx+0B4h]
      vsubss  xmm6, xmm6, dword ptr [rbx+0B8h]
      vmulss  xmm1, xmm6, dword ptr [rsp+118h+transform+4]
      vmulss  xmm0, xmm7, dword ptr [rsp+118h+transform]
      vmulss  xmm4, xmm6, dword ptr [rsp+118h+transform+10h]
      vmulss  xmm2, xmm8, dword ptr [rsp+118h+transform+8]
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [rsp+118h+transform+0Ch]
      vmulss  xmm0, xmm8, dword ptr [rsp+118h+transform+14h]
      vaddss  xmm10, xmm3, xmm2
      vaddss  xmm3, xmm4, xmm1
      vmulss  xmm4, xmm6, dword ptr [rsp+118h+transform+1Ch]
      vmulss  xmm1, xmm8, dword ptr [rsp+118h+transform+20h]
      vaddss  xmm11, xmm3, xmm0
      vmulss  xmm0, xmm7, dword ptr [rsp+118h+transform+18h]
      vaddss  xmm3, xmm4, xmm0
      vmovss  xmm0, dword ptr [rbx+78h]
      vmovss  [rsp+118h+var_E8], xmm0
      vaddss  xmm12, xmm3, xmm1
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_72;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+7Ch]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_72;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+80h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_72:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1675, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->prevAcceleration )[0] ) && !IS_NAN( ( vehicle->prevAcceleration )[1] ) && !IS_NAN( ( vehicle->prevAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->prevAcceleration )[0] ) && !IS_NAN( ( vehicle->prevAcceleration )[1] ) && !IS_NAN( ( vehicle->prevAcceleration )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+84h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_73;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+88h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_73;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8Ch]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_73:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1676, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->acceleration )[0] ) && !IS_NAN( ( vehicle->acceleration )[1] ) && !IS_NAN( ( vehicle->acceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->acceleration )[0] ) && !IS_NAN( ( vehicle->acceleration )[1] ) && !IS_NAN( ( vehicle->acceleration )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+90h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_74;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+94h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_74;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+98h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_74:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1677, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->velocity )[0] ) && !IS_NAN( ( vehicle->velocity )[1] ) && !IS_NAN( ( vehicle->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->velocity )[0] ) && !IS_NAN( ( vehicle->velocity )[1] ) && !IS_NAN( ( vehicle->velocity )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+9Ch]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_75;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0A0h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_75;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0A4h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_75:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1678, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->localAcceleration )[0] ) && !IS_NAN( ( vehicle->localAcceleration )[1] ) && !IS_NAN( ( vehicle->localAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->localAcceleration )[0] ) && !IS_NAN( ( vehicle->localAcceleration )[1] ) && !IS_NAN( ( vehicle->localAcceleration )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0A8h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_76;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0ACh]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_76;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0B0h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_76:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1679, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->localVelocity )[0] ) && !IS_NAN( ( vehicle->localVelocity )[1] ) && !IS_NAN( ( vehicle->localVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->localVelocity )[0] ) && !IS_NAN( ( vehicle->localVelocity )[1] ) && !IS_NAN( ( vehicle->localVelocity )[2] )") )
        __debugbreak();
    }
    _RBX->prevAcceleration.v[0] = _RBX->acceleration.v[0];
    _RBX->prevAcceleration.v[1] = _RBX->acceleration.v[1];
    _RBX->prevAcceleration.v[2] = _RBX->acceleration.v[2];
    __asm
    {
      vsubss  xmm2, xmm7, dword ptr [rbx+90h]
      vmovss  dword ptr [rbx+84h], xmm2
      vsubss  xmm0, xmm6, dword ptr [rbx+94h]
      vmovss  dword ptr [rbx+88h], xmm0
      vsubss  xmm1, xmm8, dword ptr [rbx+98h]
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rbx+8Ch], xmm1
      vdivss  xmm3, xmm0, xmm9
      vmulss  xmm1, xmm3, xmm2
      vmovss  dword ptr [rbx+84h], xmm1
      vmulss  xmm0, xmm3, dword ptr [rbx+88h]
      vmovss  dword ptr [rbx+88h], xmm0
      vmulss  xmm0, xmm3, dword ptr [rbx+8Ch]
      vmovss  dword ptr [rbx+8Ch], xmm0
      vmovss  dword ptr [rbx+90h], xmm7
      vmovaps xmm7, [rsp+118h+var_58]
      vmovss  dword ptr [rbx+94h], xmm6
      vmovaps xmm6, [rsp+118h+var_48]
      vmovss  dword ptr [rbx+98h], xmm8
      vsubss  xmm2, xmm10, dword ptr [rbx+0A8h]
      vmovaps xmm8, [rsp+118h+var_68]
      vmovss  dword ptr [rbx+9Ch], xmm2
      vsubss  xmm0, xmm11, dword ptr [rbx+0ACh]
      vmovss  dword ptr [rbx+0A0h], xmm0
      vsubss  xmm1, xmm12, dword ptr [rbx+0B0h]
      vmovss  dword ptr [rbx+0A4h], xmm1
      vmulss  xmm0, xmm2, xmm3
      vmovss  dword ptr [rbx+9Ch], xmm0
      vmulss  xmm0, xmm3, dword ptr [rbx+0A0h]
      vmovss  dword ptr [rbx+0A0h], xmm0
      vmulss  xmm0, xmm3, dword ptr [rbx+0A4h]
      vmovss  dword ptr [rbx+0A4h], xmm0
      vmovss  dword ptr [rbx+0A8h], xmm10
      vmovaps xmm10, [rsp+118h+var_88]
      vmovss  dword ptr [rbx+0ACh], xmm11
      vmovaps xmm11, [rsp+118h+var_98]
      vmovss  dword ptr [rbx+0B0h], xmm12
      vmovss  xmm0, dword ptr [rbx+78h]
      vmovaps xmm12, [rsp+118h+var_A8]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_77;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+7Ch]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_77;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+80h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_77:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1693, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->prevAcceleration )[0] ) && !IS_NAN( ( vehicle->prevAcceleration )[1] ) && !IS_NAN( ( vehicle->prevAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->prevAcceleration )[0] ) && !IS_NAN( ( vehicle->prevAcceleration )[1] ) && !IS_NAN( ( vehicle->prevAcceleration )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+84h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_78;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+88h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_78;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8Ch]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_78:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1694, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->acceleration )[0] ) && !IS_NAN( ( vehicle->acceleration )[1] ) && !IS_NAN( ( vehicle->acceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->acceleration )[0] ) && !IS_NAN( ( vehicle->acceleration )[1] ) && !IS_NAN( ( vehicle->acceleration )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+90h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_79;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+94h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_79;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+98h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_79:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1695, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->velocity )[0] ) && !IS_NAN( ( vehicle->velocity )[1] ) && !IS_NAN( ( vehicle->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->velocity )[0] ) && !IS_NAN( ( vehicle->velocity )[1] ) && !IS_NAN( ( vehicle->velocity )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+9Ch]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_80;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0A0h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_80;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0A4h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_80:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1696, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->localAcceleration )[0] ) && !IS_NAN( ( vehicle->localAcceleration )[1] ) && !IS_NAN( ( vehicle->localAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->localAcceleration )[0] ) && !IS_NAN( ( vehicle->localAcceleration )[1] ) && !IS_NAN( ( vehicle->localAcceleration )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0A8h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_81;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0ACh]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_81;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0B0h]
      vmovss  [rsp+118h+var_E8], xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 )
    {
LABEL_81:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1697, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->localVelocity )[0] ) && !IS_NAN( ( vehicle->localVelocity )[1] ) && !IS_NAN( ( vehicle->localVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->localVelocity )[0] ) && !IS_NAN( ( vehicle->localVelocity )[1] ) && !IS_NAN( ( vehicle->localVelocity )[2] )") )
        __debugbreak();
    }
    __asm { vmovaps xmm2, xmm9; deltaTime }
    GVehicles::PhysicsCheckForJolt(this, vehicleId, *(float *)&_XMM2);
    VehicleEntityFromId = PhysicsGetVehicleEntityFromId(vehicleId);
    if ( VehicleEntityFromId )
    {
      tagChildren = VehicleEntityFromId->tagChildren;
      if ( tagChildren )
      {
        if ( tagChildren->s.eType == ET_PLAYER )
        {
          client = tagChildren->client;
          if ( client )
          {
            client->ps.viewangles.v[0] = VehicleEntityFromId->r.currentAngles.v[0];
            client->ps.viewangles.v[1] = VehicleEntityFromId->r.currentAngles.v[1];
            client->ps.viewangles.v[2] = VehicleEntityFromId->r.currentAngles.v[2];
          }
        }
      }
    }
  }
  __asm { vmovaps xmm9, [rsp+118h+var_78] }
}

/*
==============
GVehicles::PhysicsProcessDeferredEvents
==============
*/
void GVehicles::PhysicsProcessDeferredEvents(GVehicles *this)
{
  volatile int v2; 
  VehicleScriptableDmg *p_m_scriptableDamageInfo; 
  __int64 scriptableIndex; 
  __int64 vehEntNum; 
  gentity_s *GEntity; 
  Vehicle *vehicle; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  vec3_t outDmgDir; 

  v2 = 0;
  if ( this->m_scriptableDamageInfo.m_cursor <= 0 )
  {
    this->m_scriptableDamageInfo.m_cursor = 0;
  }
  else
  {
    p_m_scriptableDamageInfo = &this->m_scriptableDamageInfo;
    do
    {
      if ( p_m_scriptableDamageInfo->m_scriptablesToDamage[0].vehEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1839, ASSERT_TYPE_ASSERT, "(dmg.vehEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "dmg.vehEntNum != ENTITYNUM_NONE") )
        __debugbreak();
      if ( p_m_scriptableDamageInfo->m_scriptablesToDamage[0].scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1840, ASSERT_TYPE_ASSERT, "(dmg.scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "dmg.scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      scriptableIndex = p_m_scriptableDamageInfo->m_scriptablesToDamage[0].scriptableIndex;
      if ( (unsigned int)scriptableIndex < g_scriptableWorldCounts.totalInstanceCount )
      {
        if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
          __debugbreak();
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v13) = g_scriptableWorldCounts.serverInstanceCount;
          LODWORD(v12) = scriptableIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( g_scriptableSv_instanceContexts[scriptableIndex].commonContext.def )
        {
          vehEntNum = p_m_scriptableDamageInfo->m_scriptablesToDamage[0].vehEntNum;
          if ( (unsigned int)vehEntNum >= 0x800 )
          {
            LODWORD(v13) = 2048;
            LODWORD(v12) = p_m_scriptableDamageInfo->m_scriptablesToDamage[0].vehEntNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[vehEntNum].r.isInUse != g_entityIsInUse[vehEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( g_entityIsInUse[vehEntNum] )
          {
            GEntity = G_GetGEntity(p_m_scriptableDamageInfo->m_scriptablesToDamage[0].vehEntNum);
            vehicle = GEntity->vehicle;
            if ( vehicle )
            {
              _RAX = G_Vehicle_GetServerDef(vehicle->defIndex);
              __asm
              {
                vmovss  xmm3, dword ptr [rax+0C4h]; collSpeed
                vmovss  xmm2, dword ptr [rax+0C0h]; collDmg
              }
              v11 = G_Vehicle_CalcImpactDamageForScriptable(GEntity->vehicle, p_m_scriptableDamageInfo->m_scriptablesToDamage[0].scriptableIndex, *(float *)&_XMM2, *(float *)&_XMM3, &outDmgDir);
              if ( v11 > 0 )
                G_Vehicle_DamageScriptable(GEntity, p_m_scriptableDamageInfo->m_scriptablesToDamage[0].scriptableIndex, v11, &outDmgDir);
            }
          }
        }
      }
      ++v2;
      p_m_scriptableDamageInfo = (VehicleScriptableDmg *)((char *)p_m_scriptableDamageInfo + 8);
    }
    while ( v2 < this->m_scriptableDamageInfo.m_cursor );
    this->m_scriptableDamageInfo.m_cursor = 0;
  }
}

/*
==============
GVehicles::PhysicsResetInputControls
==============
*/
void GVehicles::PhysicsResetInputControls(GVehicles *this, unsigned int vehicleId)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  ObjectById->ResetInputControls(ObjectById);
}

/*
==============
GVehicles::PhysicsSetAngularVelocity
==============
*/
void GVehicles::PhysicsSetAngularVelocity(GVehicles *this, unsigned int vehicleId, const vec3_t *angularVelocity)
{
  const vec3_t *v4; 
  BgVehiclePhysics *ObjectById; 
  int v10; 
  int v11; 
  int v12; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  v4 = angularVelocity;
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v11 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v12 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1152, ASSERT_TYPE_SANITY, "( !IS_NAN( ( angularVelocity )[0] ) && !IS_NAN( ( angularVelocity )[1] ) && !IS_NAN( ( angularVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( angularVelocity )[0] ) && !IS_NAN( ( angularVelocity )[1] ) && !IS_NAN( ( angularVelocity )[2] )") )
      __debugbreak();
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::SetAngularVelocity(ObjectById, v4, 1);
}

/*
==============
GVehicles::PhysicsSetConveyorVelocity
==============
*/
void GVehicles::PhysicsSetConveyorVelocity(GVehicles *this, unsigned int vehicleId, const vec2_t *velocity)
{
  BgVehiclePhysics *ObjectById; 
  int v12; 
  int v13; 
  vec3_t surfVel; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  [rsp+68h+var_38], xmm0
  }
  _RBX = (vec2_t *)velocity;
  if ( (v12 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  [rsp+68h+var_38], xmm0
  }
  if ( (v13 & 0x7F800000) == 2139095040 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 973, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] )") )
      __debugbreak();
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+68h+surfVel], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+68h+surfVel+8], xmm0
    vmovss  dword ptr [rsp+68h+surfVel+4], xmm1
  }
  BgVehiclePhysics::SetSurfaceVelocity(ObjectById, &surfVel);
  GPhysicsVehicleManager::GetInternalById(vehicleId)->conveyorVelocity = *_RBX;
}

/*
==============
GVehicles::PhysicsSetDefFromLoad
==============
*/
void GVehicles::PhysicsSetDefFromLoad(GVehicles *this, unsigned int vehicleId, unsigned int vehDefIndex)
{
  if ( !BGVehicles::PhysicsIsValid(vehicleId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 879, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleId )") )
    __debugbreak();
  GPhysicsVehicleManager::GetInternalById(vehicleId)->vehicleDefIndex = vehDefIndex;
}

/*
==============
GVehicles::PhysicsSetDefaultMotion
==============
*/
void GVehicles::PhysicsSetDefaultMotion(GVehicles *this, unsigned int vehicleId)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  if ( !ObjectById->m_playerControlled || (Com_PrintWarning(20, "PhysicsSetDefaultMotion() Won't have any effect on vehicle controlled by player.\n"), !ObjectById->m_playerControlled) )
  {
    __asm { vmovss  xmm1, cs:__real@41200000; minTimeDynamic }
    ObjectById->m_forcedKeyframe = 0;
    BgVehiclePhysics::SetDynamic(ObjectById, *(float *)&_XMM1);
  }
}

/*
==============
GVehicles::PhysicsSetInputControl
==============
*/

void __fastcall GVehicles::PhysicsSetInputControl(GVehicles *this, unsigned int vehicleId, unsigned int controlIndex, double value)
{
  unsigned int v9; 
  BgVehiclePhysicsManager *p_m_vehiclePhysicsManager; 
  const unsigned int *v11; 
  unsigned int v12; 
  unsigned int v13; 
  VehiclePhysicsComponentId *m_components; 
  VehiclePhysicsComponentId v15; 
  __int64 v19; 
  __int64 v20; 
  int v22; 

  __asm
  {
    vmovss  [rsp+78h+arg_10], xmm3
    vmovaps [rsp+78h+var_38], xmm6
  }
  _R14 = controlIndex;
  __asm { vmovaps xmm6, xmm3 }
  if ( (v22 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1555, ASSERT_TYPE_SANITY, "( !IS_NAN( value ) )", (const char *)&queryFormat, "!IS_NAN( value )") )
    __debugbreak();
  if ( (unsigned int)_R14 >= 8 )
  {
    LODWORD(v19) = _R14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1556, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v19, 8) )
      __debugbreak();
  }
  v9 = 0;
  p_m_vehiclePhysicsManager = &this->m_vehiclePhysicsManager;
  v11 = pathCompTypes;
  while ( 2 )
  {
    v12 = *v11;
    v13 = 0;
    m_components = BgVehiclePhysicsManager::GetObjectById(p_m_vehiclePhysicsManager, vehicleId)->m_components;
    while ( 1 )
    {
      v15.id = m_components->id;
      if ( m_components->id )
      {
        if ( (v15.id & 0xFF0000) < 0x20000 && HIBYTE(v15.id) == v12 )
          break;
      }
      ++v13;
      ++m_components;
      if ( v13 >= 2 )
        goto LABEL_16;
    }
    if ( v15.id && (v15.id & 0xFF0000) < 0x20000 )
    {
      _RBX = BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentGoStraightTo>(p_m_vehiclePhysicsManager, v15);
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1567, ASSERT_TYPE_ASSERT, "( vehComp )", "GVehicles::PhysicsSetInputControl(): We got the component Id, but there's no component") )
        __debugbreak();
      if ( (unsigned int)_R14 >= 8 )
      {
        LODWORD(v20) = 8;
        LODWORD(v19) = _R14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.h", 33, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rbx+r14*4+28h], xmm6 }
      goto LABEL_21;
    }
LABEL_16:
    ++v9;
    ++v11;
    if ( v9 < 3 )
      continue;
    break;
  }
  _RBX = BgVehiclePhysicsManager::GetObjectById(p_m_vehiclePhysicsManager, vehicleId);
  if ( (unsigned int)_R14 >= 8 )
  {
    LODWORD(v20) = 8;
    LODWORD(v19) = _R14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 98, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  __asm { vmovss  dword ptr [rbx+r14*4+0E8h], xmm6 }
LABEL_21:
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
GVehicles::PhysicsSetKeyframeTransform
==============
*/
void GVehicles::PhysicsSetKeyframeTransform(GVehicles *this, unsigned int vehicleId, const vec3_t *pos, const vec3_t *angles)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::SetKeyframeTransform(ObjectById, pos, angles);
}

/*
==============
GVehicles::PhysicsSetLinearVelocity
==============
*/
void GVehicles::PhysicsSetLinearVelocity(GVehicles *this, unsigned int vehicleId, const vec3_t *linearVelocity)
{
  const vec3_t *v4; 
  BgVehiclePhysics *ObjectById; 
  int v10; 
  int v11; 
  int v12; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  v4 = linearVelocity;
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v11 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v12 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 925, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )") )
      __debugbreak();
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::SetLinearVelocity(ObjectById, v4, 1);
}

/*
==============
GVehicles::PhysicsSetSpeed
==============
*/

void __fastcall GVehicles::PhysicsSetSpeed(GVehicles *this, unsigned int vehicleId, double speed)
{
  BgVehiclePhysics *ObjectById; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  vec3_t linVelWs; 
  vec3_t dir; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovss  [rbp+57h+var_90], xmm2
    vmovaps xmm10, xmm2
  }
  if ( (v38 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( speed ) )", (const char *)&queryFormat, "!IS_NAN( speed )") )
    __debugbreak();
  GVehicles::PhysicsGetChassisForwardDir(this, vehicleId, &dir);
  __asm
  {
    vmovss  xmm9, dword ptr [rbp+57h+dir]
    vmovss  xmm7, dword ptr [rbp+57h+dir+8]
    vmovss  xmm8, dword ptr [rbp+57h+dir+4]
    vmovss  [rbp+57h+var_90], xmm9
  }
  if ( (v39 & 0x7F800000) == 2139095040 )
    goto LABEL_29;
  __asm { vmovss  [rbp+57h+var_90], xmm8 }
  if ( (v40 & 0x7F800000) == 2139095040 )
    goto LABEL_29;
  __asm { vmovss  [rbp+57h+var_90], xmm7 }
  if ( (v41 & 0x7F800000) == 2139095040 )
  {
LABEL_29:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1184, ASSERT_TYPE_SANITY, "( !IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] )") )
      __debugbreak();
  }
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  __asm
  {
    vmovss  xmm4, dword ptr [rax+1A4h]
    vmovss  dword ptr [rbp+57h+linVelWs], xmm4
    vmovss  xmm5, dword ptr [rax+1A8h]
    vmovss  dword ptr [rbp+57h+linVelWs+4], xmm5
    vmovss  xmm6, dword ptr [rax+1ACh]
    vmovss  [rbp+57h+var_90], xmm4
    vmovss  dword ptr [rbp+57h+linVelWs+8], xmm6
  }
  if ( (v42 & 0x7F800000) == 2139095040 )
    goto LABEL_30;
  __asm { vmovss  [rbp+57h+var_90], xmm5 }
  if ( (v43 & 0x7F800000) == 2139095040 )
    goto LABEL_30;
  __asm { vmovss  [rbp+57h+var_90], xmm6 }
  if ( (v44 & 0x7F800000) == 2139095040 )
  {
LABEL_30:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1135, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+57h+linVelWs]
      vmovss  xmm5, dword ptr [rbp+57h+linVelWs+4]
      vmovss  xmm6, dword ptr [rbp+57h+linVelWs+8]
    }
  }
  __asm { vmovss  [rbp+57h+var_90], xmm4 }
  if ( (v45 & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm { vmovss  [rbp+57h+var_90], xmm5 }
  if ( (v46 & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm { vmovss  [rbp+57h+var_90], xmm6 }
  if ( (v47 & 0x7F800000) == 2139095040 )
  {
LABEL_31:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1189, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+57h+linVelWs]
      vmovss  xmm5, dword ptr [rbp+57h+linVelWs+4]
      vmovss  xmm6, dword ptr [rbp+57h+linVelWs+8]
    }
  }
  __asm
  {
    vmulss  xmm0, xmm4, xmm9
    vmulss  xmm1, xmm5, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm7
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm3, xmm10, xmm2
    vmulss  xmm0, xmm9, xmm3
    vaddss  xmm4, xmm4, xmm0
    vmulss  xmm1, xmm8, xmm3
    vaddss  xmm2, xmm5, xmm1
    vmovss  [rbp+57h+var_90], xmm4
    vmulss  xmm0, xmm7, xmm3
    vaddss  xmm1, xmm6, xmm0
    vmovss  dword ptr [rbp+57h+linVelWs], xmm4
    vmovss  dword ptr [rbp+57h+linVelWs+4], xmm2
    vmovss  dword ptr [rbp+57h+linVelWs+8], xmm1
  }
  if ( (v48 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm { vmovss  [rbp+57h+var_90], xmm2 }
  if ( (v49 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm { vmovss  [rbp+57h+var_90], xmm1 }
  if ( (v50 & 0x7F800000) == 2139095040 )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 925, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )") )
      __debugbreak();
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::SetLinearVelocity(ObjectById, &linVelWs, 1);
  _R11 = &v53;
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
GVehicles::PhysicsSetTopSpeedBwd
==============
*/

void __fastcall GVehicles::PhysicsSetTopSpeedBwd(GVehicles *this, unsigned int vehicleId, double topSpeed)
{
  int v10; 

  __asm
  {
    vmovss  [rsp+48h+arg_10], xmm2
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( (v10 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 962, ASSERT_TYPE_SANITY, "( !IS_NAN( topSpeed ) )", (const char *)&queryFormat, "!IS_NAN( topSpeed )") )
    __debugbreak();
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  __asm
  {
    vmovss  dword ptr [rax+1F8h], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
GVehicles::PhysicsSetTopSpeedFwd
==============
*/

void __fastcall GVehicles::PhysicsSetTopSpeedFwd(GVehicles *this, unsigned int vehicleId, double topSpeed)
{
  int v10; 

  __asm
  {
    vmovss  [rsp+48h+arg_10], xmm2
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( (v10 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 943, ASSERT_TYPE_SANITY, "( !IS_NAN( topSpeed ) )", (const char *)&queryFormat, "!IS_NAN( topSpeed )") )
    __debugbreak();
  _RAX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  __asm
  {
    vmovss  dword ptr [rax+1F4h], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
GVehicles::PhysicsShutdown
==============
*/
void GVehicles::PhysicsShutdown(GVehicles *this)
{
  GPhysicsVehicleManager::Shutdown(&this->m_vehiclePhysicsManager);
}

/*
==============
GVehicles::PhysicsSimulateVehiclePmove
==============
*/
void GVehicles::PhysicsSimulateVehiclePmove(GVehicles *this, pmove_t *pm, const pml_t *pml)
{
  gentity_s *GEntity; 
  gentity_s *v12; 
  BgVehiclePhysicsManager *p_m_vehiclePhysicsManager; 
  VehiclePhysicsNetcodeType NetcodeTypeForOwner; 
  __int32 v16; 
  char v30; 
  vec3_t *p_origin; 
  unsigned int PhysicsBodyId; 
  bool IsClientGeoLoaded; 
  unsigned int v35; 
  float vehOrgX; 
  int v43; 
  float v66; 
  int v70; 
  float v73; 
  bool v77; 
  float v92; 
  int v94; 
  BgVehiclePhysics *ObjectForPmove; 
  vec3_t position; 
  int v98; 
  vec4_t orientation; 

  _RDI = pm;
  if ( (!pm || !pm->ps) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 309, ASSERT_TYPE_ASSERT, "(pm && pm->ps)", (const char *)&queryFormat, "pm && pm->ps") )
    __debugbreak();
  if ( _RDI->ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 310, ASSERT_TYPE_ASSERT, "(pm->ps->vehicleState.entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "pm->ps->vehicleState.entity != ENTITYNUM_NONE") )
    __debugbreak();
  GEntity = G_GetGEntity(_RDI->ps->vehicleState.entity);
  v12 = GEntity;
  if ( (!GEntity || GEntity->s.eType != ET_VEHICLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 313, ASSERT_TYPE_ASSERT, "(vehEnt && vehEnt->s.eType == ET_VEHICLE)", (const char *)&queryFormat, "vehEnt && vehEnt->s.eType == ET_VEHICLE") )
    __debugbreak();
  p_m_vehiclePhysicsManager = &this->m_vehiclePhysicsManager;
  _RSI = (BgVehiclePhysics *)BgVehiclePhysicsManager::GetObjectById(p_m_vehiclePhysicsManager, v12->vehicle->physicsVehicle);
  NetcodeTypeForOwner = G_Vehicle_GetNetcodeTypeForOwner(_RSI, _RDI->ps->clientNum);
  if ( NetcodeTypeForOwner )
  {
    v16 = NetcodeTypeForOwner - 1;
    if ( v16 )
    {
      if ( v16 == 2 )
      {
        if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 320, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
          __debugbreak();
        __asm
        {
          vmovss  xmm2, cs:__real@3bb40000
          vmovss  xmm1, dword ptr [rdi+0D4h]
          vmovss  xmm0, dword ptr [rdi+0D0h]
          vmovss  dword ptr [rbp+57h+var_90+4], xmm1
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmovss  dword ptr [rbp+57h+var_90], xmm0
          vmovss  xmm0, dword ptr [rdi+0D8h]
          vmovss  [rbp+57h+var_88], xmm0
          vmulss  xmm0, xmm1, xmm2
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmovss  dword ptr [rbp+57h+position], xmm0
          vmulss  xmm0, xmm1, xmm2
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmovss  dword ptr [rbp+57h+position+4], xmm0
          vmulss  xmm0, xmm1, xmm2
          vmovss  dword ptr [rbp+57h+position+8], xmm0
        }
        if ( BgVehiclePhysicsManager::ExistsObjectForPmove(p_m_vehiclePhysicsManager, _RSI) )
        {
          v30 = 0;
        }
        else
        {
          p_origin = &_RDI->ps->vehicleState.origin;
          if ( BgVehiclePhysics::IsPhysicsBodyIdValid(_RSI) )
          {
            PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RSI);
            Physics_GetRigidBodyTransform((const Physics_WorldId)_RSI->m_worldId, PhysicsBodyId, p_origin, &orientation);
          }
          QuatToAngles(&orientation, &_RDI->ps->vehicleState.angles);
          v30 = 1;
        }
        _RBX = BgVehiclePhysicsManager::GetObjectForPmove(p_m_vehiclePhysicsManager, _RSI);
        BgVehiclePhysics::SetPlayerControlled(_RBX, _RSI->m_playerControlled);
        IsClientGeoLoaded = BgVehiclePhysics::IsClientGeoLoaded(_RBX, &_RDI->cmd);
        if ( IsClientGeoLoaded )
        {
          if ( v30 )
          {
            if ( BgVehiclePhysics::IsPhysicsBodyIdValid(_RSI) )
            {
              v35 = BgVehiclePhysics::GetPhysicsBodyId(_RSI);
              Physics_GetRigidBodyTransform((const Physics_WorldId)_RSI->m_worldId, v35, &position, &orientation);
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+57h+position]
              vmovss  xmm1, dword ptr [rbp+57h+position+4]
              vmovss  dword ptr [rbx+1D8h], xmm0
              vmovss  xmm0, dword ptr [rbp+57h+position+8]
              vmovss  dword ptr [rbx+1DCh], xmm1
              vmovups xmm1, xmmword ptr [rbp+57h+orientation]
              vmovss  dword ptr [rbx+1E0h], xmm0
              vmovups xmmword ptr [rbx+1E4h], xmm1
            }
          }
          else if ( _RBX->IsValidUserCmd(_RBX, &_RDI->cmd) )
          {
            _RBX->m_pmoveLastCmdTime = _RDI->cmd.serverTime;
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+0D8h]
              vmovss  xmm0, dword ptr [rdi+0D4h]
            }
            vehOrgX = _RDI->cmd.vehOrgX;
            __asm
            {
              vmovss  dword ptr [rbx+27Ch], xmm0
              vmovss  dword ptr [rbx+280h], xmm1
              vmovaps [rsp+0D0h+var_40], xmm6
            }
            _RBX->m_pmoveLastCmdPos.v[0] = vehOrgX;
            v43 = _RDI->cmd.angles.v[0];
            __asm
            {
              vmovaps [rsp+0D0h+var_50], xmm9
              vmovaps [rsp+0D0h+var_60], xmm11
            }
            *(double *)&_XMM0 = BG_UsrCmdUnpackAngle(v43);
            __asm
            {
              vmulss  xmm3, xmm0, cs:__real@3b360b61
              vaddss  xmm1, xmm3, cs:__real@3f000000
              vxorps  xmm0, xmm0, xmm0
              vmovss  xmm1, xmm0, xmm1
              vxorps  xmm11, xmm11, xmm11
              vroundss xmm2, xmm11, xmm1, 1
              vsubss  xmm0, xmm3, xmm2
              vmulss  xmm9, xmm0, cs:__real@43b40000
            }
            *(double *)&_XMM0 = BG_UsrCmdUnpackAngle(_RDI->cmd.angles.v[1]);
            __asm
            {
              vmulss  xmm4, xmm0, cs:__real@3b360b61
              vaddss  xmm2, xmm4, cs:__real@3f000000
              vxorps  xmm1, xmm1, xmm1
              vmovss  xmm0, xmm1, xmm2
              vroundss xmm3, xmm11, xmm0, 1
              vsubss  xmm1, xmm4, xmm3
              vmulss  xmm6, xmm1, cs:__real@43b40000
            }
            *(double *)&_XMM0 = BG_UsrCmdUnpackAngle(_RDI->cmd.angles.v[2]);
            __asm
            {
              vmulss  xmm4, xmm0, cs:__real@3b360b61
              vaddss  xmm2, xmm4, cs:__real@3f000000
              vxorps  xmm1, xmm1, xmm1
              vmovss  xmm0, xmm1, xmm2
              vroundss xmm3, xmm11, xmm0, 1
              vsubss  xmm1, xmm4, xmm3
              vmulss  xmm0, xmm1, cs:__real@43b40000
              vmovss  dword ptr [rbp+57h+orientation+8], xmm0
            }
            v66 = orientation.v[2];
            __asm
            {
              vmovsd  xmm0, [rbp+57h+var_90]
              vunpcklps xmm1, xmm9, xmm6
              vmovsd  qword ptr [rbx+11Ch], xmm1
            }
            _RBX->m_playerViewAngles.v[2] = v66;
            _RCX = _RDI->ps;
            v70 = v98;
            __asm
            {
              vmovsd  qword ptr [rcx+12Ch], xmm0
              vmovsd  xmm0, qword ptr [rbp+57h+position]
            }
            LODWORD(_RCX->vehicleState.origin.v[2]) = v70;
            _RCX = _RDI->ps;
            v73 = position.v[2];
            __asm { vmovsd  qword ptr [rcx+138h], xmm0 }
            _RCX->vehicleState.angles.v[2] = v73;
            BgVehiclePhysics::Pmove(_RBX, _RDI, pml);
            __asm
            {
              vmovaps xmm11, [rsp+0D0h+var_60]
              vmovaps xmm9, [rsp+0D0h+var_50]
              vmovaps xmm6, [rsp+0D0h+var_40]
            }
          }
        }
        _RBX->m_clientGeoLoaded = IsClientGeoLoaded;
      }
    }
    else
    {
      v77 = _RSI->m_netcodeType == VEH_NETCODE_CLIENT_AUTH;
      __asm
      {
        vmovss  xmm2, cs:__real@3bb40000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, xmm2
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovss  dword ptr [rbp+57h+var_90], xmm0
        vmulss  xmm0, xmm1, xmm2
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovss  dword ptr [rbp+57h+var_90+4], xmm0
        vmulss  xmm0, xmm1, xmm2
        vmovss  xmm2, dword ptr [rdi+0D0h]
        vmovss  xmm1, dword ptr [rdi+0D8h]
        vmovss  [rbp+57h+var_88], xmm0
        vmovss  xmm0, dword ptr [rdi+0D4h]
        vmovss  dword ptr [rbp+57h+position+4], xmm0
        vmovss  dword ptr [rbp+57h+position], xmm2
        vmovss  dword ptr [rbp+57h+position+8], xmm1
      }
      if ( !v77 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 900, ASSERT_TYPE_ASSERT, "( GetNetcodeType() == VEH_NETCODE_CLIENT_AUTH )", "BgVehiclePhysics::SetClientAuthWarpData(): Vehicle is not Client-Authoritative") )
        __debugbreak();
      if ( _RSI->m_worldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 901, ASSERT_TYPE_ASSERT, "( GetWorldId() == PHYSICS_WORLD_ID_SERVER_MAIN )", "BgVehiclePhysics::SetClientAuthWarpData(): Only makes sense in server") )
        __debugbreak();
      __asm { vmovsd  xmm0, qword ptr [rbp+57h+position] }
      v92 = position.v[2];
      __asm
      {
        vmovsd  qword ptr [rsi+284h], xmm0
        vmovsd  xmm0, [rbp+57h+var_90]
      }
      _RSI->m_clientAuthOrg.v[2] = v92;
      v94 = v98;
      __asm { vmovsd  qword ptr [rsi+290h], xmm0 }
      LODWORD(_RSI->m_clientAuthAngles.v[2]) = v94;
    }
  }
  else
  {
    if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 383, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
      __debugbreak();
    ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(p_m_vehiclePhysicsManager, _RSI);
    BgVehiclePhysics::SetPlayerControlled(ObjectForPmove, _RSI->m_playerControlled);
    BgVehiclePhysics::Pmove(ObjectForPmove, _RDI, pml);
  }
}

/*
==============
GVehicles::PhysicsUnpackLerpStateValues
==============
*/
void GVehicles::PhysicsUnpackLerpStateValues(GVehicles *this, int entityIndex, float *outGasInput, bool *outIsBraking, float *outWheelAveSpinSpeed)
{
  gentity_s *GEntity; 
  int v11; 

  if ( (unsigned int)entityIndex >= 0x7FF )
  {
    v11 = 2047;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1798, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ENTITYNUM_NONE )", "entityIndex doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", entityIndex, v11) )
      __debugbreak();
  }
  GEntity = G_GetGEntity(entityIndex);
  *outGasInput = 0.0;
  *outIsBraking = 0;
  *outWheelAveSpinSpeed = 0.0;
  BGVehicles::PhysicsUnpackLerpStateValues(this, (const LerpEntityStateVehicle *)&GEntity->s.lerp.u, outGasInput, outIsBraking, outWheelAveSpinSpeed);
}

/*
==============
GVehicles::PhysicsUpdateCharacterWobbleAnimData
==============
*/

void __fastcall GVehicles::PhysicsUpdateCharacterWobbleAnimData(GVehicles *this, const characterInfo_t *ci, unsigned int vehicleId, double frameTime, wobbleAnim_t *outData)
{
  bool IsValid; 
  bool v12; 
  bool v13; 
  gentity_s *GEntity; 
  VehicleWorldmodelAAnim *p_currentAngles; 
  const BgVehiclePhysics *ObjectById; 
  float frameTimea; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1716, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1717, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  IsValid = BGVehicles::PhysicsIsValid(vehicleId);
  v12 = !IsValid;
  if ( !IsValid )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1718, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleId )");
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
    GEntity = G_GetGEntity(ci->entityNum);
    p_currentAngles = (VehicleWorldmodelAAnim *)&GEntity->r.currentAngles;
    if ( ci->vehicleAnimation.seat != VEHICLE_SEAT_DRIVER )
      p_currentAngles = &ci->vehicleAnimation;
    AnglesToAxis(&p_currentAngles->viewAngles, &axis);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
    __asm { vmovss  [rsp+0A8h+frameTime], xmm6 }
    BGVehicles::PhysicsUpdateCharacterWobbleAnimDataCommon(this, ObjectById, &axis, &GEntity->r.currentOrigin, ci, frameTimea, outData);
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
}

/*
==============
GVehicles::PhysicsUpdateEntityBounds
==============
*/
void GVehicles::PhysicsUpdateEntityBounds(GVehicles *this, int entityIndex, const ExtentBounds *extBounds)
{
  gentity_s *GEntity; 

  GEntity = G_GetGEntity(entityIndex);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 701, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  Bounds_FromExtentBounds(&GEntity->r.absBox, extBounds);
}

/*
==============
GVehicles::PhysicsUpdateInputControls
==============
*/
void GVehicles::PhysicsUpdateInputControls(GVehicles *this, unsigned int vehicleId, const usercmd_s *cmd, const playerState_s *ps)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x20u) )
  {
    BgVehiclePhysics::SetEnableInputControl(ObjectById, 0);
    ObjectById->ResetInputControls(ObjectById);
  }
  else
  {
    BgVehiclePhysics::SetEnableInputControl(ObjectById, 1);
    ObjectById->UpdatePlayerInputControls(ObjectById, cmd, ps);
  }
}

/*
==============
GVehicles::PhysicsVehicleHasAnim
==============
*/
bool GVehicles::PhysicsVehicleHasAnim(GVehicles *this, const BgVehiclePhysics *vehobj)
{
  gentity_s *GEntity; 

  GEntity = G_GetGEntity(vehobj->m_entityNumber);
  return GEntity && GEntity->s.animInfo.animData >= 2;
}

/*
==============
GVehicles::PhysicsWreck
==============
*/
void GVehicles::PhysicsWreck(GVehicles *this, unsigned int vehicleId)
{
  GPhysicsVehicleInternal *InternalById; 

  if ( GPhysicsVehicleManager::GetInternalById(vehicleId)->crashingDisabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1276, ASSERT_TYPE_ASSERT, "(PhysicsIsCrashingEnabled( vehicleId ))", (const char *)&queryFormat, "PhysicsIsCrashingEnabled( vehicleId )") )
    __debugbreak();
  if ( !GPhysicsVehicleManager::GetInternalById(vehicleId)->isWrecked )
  {
    InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
    if ( G_Vehicle_GetServerDef(InternalById->vehicleDefIndex) )
    {
      GVehicles::PhysicsGetMass(this, vehicleId);
      InternalById->isWrecked = 1;
    }
    else
    {
      Com_PrintWarning(20, "GVehicles::PhysicsWreck() called when vehicleDef is null\n");
    }
  }
}

/*
==============
GVehicles::PhysicsWrite
==============
*/
void GVehicles::PhysicsWrite(GVehicles *this, MemoryFile *memFile)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 286, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile", -2i64) )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysicsVehicle_Write");
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 168, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_WriteData(memFile, 0x6800ui64, GPhysicsVehicleManager::s_physicsVehicles);
  BgVehiclePhysicsManager::SaveAllToMemFile(&this->m_vehiclePhysicsManager, memFile);
  BG_BSpline_Data_SaveToMemFile(memFile);
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
GPhysicsVehicleManager::Shutdown
==============
*/
void GPhysicsVehicleManager::Shutdown(BgVehiclePhysicsManager *vehMgr)
{
  GPhysicsVehicleManager::s_physicsVehicles[0].inUse = 0;
  byte_149200200 = 0;
  byte_1492002D0 = 0;
  byte_1492003A0 = 0;
  byte_149200470 = 0;
  byte_149200540 = 0;
  byte_149200610 = 0;
  byte_1492006E0 = 0;
  byte_1492007B0 = 0;
  byte_149200880 = 0;
  byte_149200950 = 0;
  byte_149200A20 = 0;
  byte_149200AF0 = 0;
  byte_149200BC0 = 0;
  byte_149200C90 = 0;
  byte_149200D60 = 0;
  byte_149200E30 = 0;
  byte_149200F00 = 0;
  byte_149200FD0 = 0;
  byte_1492010A0 = 0;
  byte_149201170 = 0;
  byte_149201240 = 0;
  byte_149201310 = 0;
  byte_1492013E0 = 0;
  byte_1492014B0 = 0;
  byte_149201580 = 0;
  byte_149201650 = 0;
  byte_149201720 = 0;
  byte_1492017F0 = 0;
  byte_1492018C0 = 0;
  byte_149201990 = 0;
  byte_149201A60 = 0;
  byte_149201B30 = 0;
  byte_149201C00 = 0;
  byte_149201CD0 = 0;
  byte_149201DA0 = 0;
  byte_149201E70 = 0;
  byte_149201F40 = 0;
  byte_149202010 = 0;
  byte_1492020E0 = 0;
  byte_1492021B0 = 0;
  byte_149202280 = 0;
  byte_149202350 = 0;
  byte_149202420 = 0;
  byte_1492024F0 = 0;
  byte_1492025C0 = 0;
  byte_149202690 = 0;
  byte_149202760 = 0;
  byte_149202830 = 0;
  byte_149202900 = 0;
  byte_1492029D0 = 0;
  byte_149202AA0 = 0;
  byte_149202B70 = 0;
  byte_149202C40 = 0;
  byte_149202D10 = 0;
  byte_149202DE0 = 0;
  byte_149202EB0 = 0;
  byte_149202F80 = 0;
  byte_149203050 = 0;
  byte_149203120 = 0;
  byte_1492031F0 = 0;
  byte_1492032C0 = 0;
  byte_149203390 = 0;
  byte_149203460 = 0;
  byte_149203530 = 0;
  byte_149203600 = 0;
  byte_1492036D0 = 0;
  byte_1492037A0 = 0;
  byte_149203870 = 0;
  byte_149203940 = 0;
  byte_149203A10 = 0;
  byte_149203AE0 = 0;
  byte_149203BB0 = 0;
  byte_149203C80 = 0;
  byte_149203D50 = 0;
  byte_149203E20 = 0;
  byte_149203EF0 = 0;
  byte_149203FC0 = 0;
  byte_149204090 = 0;
  byte_149204160 = 0;
  byte_149204230 = 0;
  byte_149204300 = 0;
  byte_1492043D0 = 0;
  byte_1492044A0 = 0;
  byte_149204570 = 0;
  byte_149204640 = 0;
  byte_149204710 = 0;
  byte_1492047E0 = 0;
  byte_1492048B0 = 0;
  byte_149204980 = 0;
  byte_149204A50 = 0;
  byte_149204B20 = 0;
  byte_149204BF0 = 0;
  byte_149204CC0 = 0;
  byte_149204D90 = 0;
  byte_149204E60 = 0;
  byte_149204F30 = 0;
  byte_149205000 = 0;
  byte_1492050D0 = 0;
  byte_1492051A0 = 0;
  byte_149205270 = 0;
  byte_149205340 = 0;
  byte_149205410 = 0;
  byte_1492054E0 = 0;
  byte_1492055B0 = 0;
  byte_149205680 = 0;
  byte_149205750 = 0;
  byte_149205820 = 0;
  byte_1492058F0 = 0;
  byte_1492059C0 = 0;
  byte_149205A90 = 0;
  byte_149205B60 = 0;
  byte_149205C30 = 0;
  byte_149205D00 = 0;
  byte_149205DD0 = 0;
  byte_149205EA0 = 0;
  byte_149205F70 = 0;
  byte_149206040 = 0;
  byte_149206110 = 0;
  byte_1492061E0 = 0;
  byte_1492062B0 = 0;
  byte_149206380 = 0;
  byte_149206450 = 0;
  byte_149206520 = 0;
  byte_1492065F0 = 0;
  byte_1492066C0 = 0;
  byte_149206790 = 0;
  byte_149206860 = 0;
}

