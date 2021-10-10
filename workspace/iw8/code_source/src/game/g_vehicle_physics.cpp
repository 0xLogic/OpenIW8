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
  BgVehiclePhysics *ObjectById; 

  if ( ((LODWORD(impulse->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(impulse->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(impulse->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1240, ASSERT_TYPE_SANITY, "( !IS_NAN( ( impulse )[0] ) && !IS_NAN( ( impulse )[1] ) && !IS_NAN( ( impulse )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( impulse )[0] ) && !IS_NAN( ( impulse )[1] ) && !IS_NAN( ( impulse )[2] )") )
    __debugbreak();
  if ( ((LODWORD(origin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1241, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
    __debugbreak();
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::ApplyAngularImpulse(ObjectById, impulse, origin);
}

/*
==============
GVehicles::PhysicsAddImpulse
==============
*/
void GVehicles::PhysicsAddImpulse(GVehicles *this, unsigned int vehicleId, const vec3_t *impulse, const vec3_t *origin)
{
  BgVehiclePhysics *ObjectById; 

  if ( ((LODWORD(impulse->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(impulse->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(impulse->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1228, ASSERT_TYPE_SANITY, "( !IS_NAN( ( impulse )[0] ) && !IS_NAN( ( impulse )[1] ) && !IS_NAN( ( impulse )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( impulse )[0] ) && !IS_NAN( ( impulse )[1] ) && !IS_NAN( ( impulse )[2] )") )
    __debugbreak();
  if ( ((LODWORD(origin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1229, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
    __debugbreak();
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::ApplyImpulse(ObjectById, impulse, origin);
}

/*
==============
GVehicles::PhysicsAfterWorldStep
==============
*/
void GVehicles::PhysicsAfterWorldStep(GVehicles *this, Physics_WorldId worldId)
{
  unsigned int v4; 
  BgVehiclePhysicsObjectBuffer *m_vehiclePhysicsObjects; 
  __int64 v6; 
  gentity_s *v7; 
  int trType; 
  unsigned __int16 number; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  playerState_s *EntityPlayerState; 
  int v17; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  unsigned int PhysicsBodyId; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v25; 
  __int128 v27; 
  __int128 v29; 
  BGVehicles *vehicleSystem; 
  __int64 v34; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "GVehicles::PhysicsAfterWorldStep");
  if ( worldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 555, ASSERT_TYPE_ASSERT, "(worldId == G_PHYSICSVEHICLE_WORLD)", (const char *)&queryFormat, "worldId == G_PHYSICSVEHICLE_WORLD") )
    __debugbreak();
  v4 = 0;
  m_vehiclePhysicsObjects = this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects;
  do
  {
    if ( *(_DWORD *)&m_vehiclePhysicsObjects->buffer[8] )
    {
      if ( *(_DWORD *)&m_vehiclePhysicsObjects->buffer[32] != worldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 566, ASSERT_TYPE_ASSERT, "(vehObj->GetWorldId() == worldId)", (const char *)&queryFormat, "vehObj->GetWorldId() == worldId") )
        __debugbreak();
      v6 = *(int *)&m_vehiclePhysicsObjects->buffer[48];
      if ( (unsigned int)v6 >= 0x800 )
      {
        LODWORD(v34) = 2048;
        LODWORD(vehicleSystem) = *(_DWORD *)&m_vehiclePhysicsObjects->buffer[48];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", vehicleSystem, v34) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v7 = &g_entities[v6];
      if ( (!v7 || ((v7->s.eType - 12) & 0xFFFD) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 569, ASSERT_TYPE_ASSERT, "(vehEnt && BG_IsVehicleEntity( &vehEnt->s ))", (const char *)&queryFormat, "vehEnt && BG_IsVehicleEntity( &vehEnt->s )") )
        __debugbreak();
      trType = v7->s.lerp.pos.trType;
      if ( !m_vehiclePhysicsObjects->buffer[76] )
        goto LABEL_68;
      number = v7->r.ownerNum.number;
      if ( !number )
        goto LABEL_34;
      v10 = number;
      v11 = number - 1;
      if ( v11 >= 0x800 )
      {
        LODWORD(v34) = 2048;
        LODWORD(vehicleSystem) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", vehicleSystem, v34) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v12 = v10 - 1;
      if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v12] )
      {
        LODWORD(v34) = v7->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v34) )
          __debugbreak();
      }
      if ( !v7->r.ownerNum.number )
      {
LABEL_34:
        Com_PrintWarning(20, "GVehicles::PhysicsAfterWorldStep(). Physics vehicle's owner unlinked/changed. Switching to non-controlled vehicle.\n");
        BgVehiclePhysics::SetPlayerControlled((BgVehiclePhysics *)m_vehiclePhysicsObjects, 0);
      }
      if ( m_vehiclePhysicsObjects->buffer[76] )
      {
        v13 = v7->r.ownerNum.number;
        if ( (unsigned int)(v13 - 1) >= 0x7FF )
        {
          LODWORD(v34) = 2047;
          LODWORD(vehicleSystem) = v13 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", vehicleSystem, v34) )
            __debugbreak();
        }
        v14 = v7->r.ownerNum.number;
        if ( (unsigned int)(v14 - 1) >= 0x800 )
        {
          LODWORD(v34) = 2048;
          LODWORD(vehicleSystem) = v14 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", vehicleSystem, v34) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v15 = v14 - 1;
        if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v15] )
        {
          LODWORD(v34) = v7->r.ownerNum.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v34) )
            __debugbreak();
        }
        EntityPlayerState = G_GetEntityPlayerState(&g_entities[v7->r.ownerNum.number - 1]);
        if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 583, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v17 = *(_DWORD *)&m_vehiclePhysicsObjects->buffer[24];
        if ( !v17 || v17 == 3 )
          BgVehiclePhysics::QueryValuesFromPhysics((BgVehiclePhysics *)m_vehiclePhysicsObjects, EntityPlayerState);
        if ( EntityPlayerState->vehicleState.entity != 2047 )
        {
          Instance = GWeaponMap::GetInstance();
          Handler = GHandler::getHandler();
          BG_PlayerStateToVehicleState(EntityPlayerState, &v7->s, 0, Handler, Instance, this);
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
        v21 = (float)(aabbMin.v[0] + aabbMax.v[0]) * 0.5;
        v7->r.absBox.midPoint.v[0] = v21;
        v22 = (float)(aabbMax.v[1] + aabbMin.v[1]) * 0.5;
        v7->r.absBox.midPoint.v[1] = v22;
        v23 = (float)(aabbMax.v[2] + aabbMin.v[2]) * 0.5;
        v7->r.absBox.midPoint.v[2] = v23;
        v25 = LODWORD(aabbMax.v[0]);
        *(float *)&v25 = aabbMax.v[0] - v21;
        _XMM2 = v25;
        v27 = LODWORD(aabbMax.v[1]);
        *(float *)&v27 = aabbMax.v[1] - v22;
        _XMM3 = v27;
        v29 = LODWORD(aabbMax.v[2]);
        *(float *)&v29 = aabbMax.v[2] - v23;
        _XMM4 = v29;
        __asm { vmaxss  xmm1, xmm2, xmm5 }
        v7->r.absBox.halfSize.v[0] = *(float *)&_XMM1;
        __asm { vmaxss  xmm0, xmm3, xmm6 }
        v7->r.absBox.halfSize.v[1] = *(float *)&_XMM0;
        __asm { vmaxss  xmm1, xmm4, xmm7 }
        v7->r.absBox.halfSize.v[2] = *(float *)&_XMM1;
      }
      v7->s.lerp.pos.trType = trType;
      v7->s.lerp.apos.trType = trType;
      (*(void (__fastcall **)(BgVehiclePhysicsObjectBuffer *))(*(_QWORD *)m_vehiclePhysicsObjects->buffer + 144i64))(m_vehiclePhysicsObjects);
    }
    ++v4;
    ++m_vehiclePhysicsObjects;
  }
  while ( v4 < 0x80 );
  GVehicles::PhysicsProcessDeferredEvents(this);
  Sys_ProfEndNamedEvent();
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
void GVehicles::PhysicsCheckForJolt(GVehicles *this, unsigned int vehicleId, float deltaTime)
{
  GPhysicsVehicleInternal *InternalById; 
  unsigned int v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  const VehicleDef *ServerDef; 
  float v13; 
  scrContext_t *v14; 
  BgVehiclePhysicsManager *v15; 
  BgVehiclePhysics *ObjectById; 
  int m_entityNumber; 
  const gentity_s *GEntity; 
  float value; 
  float v20; 
  float v21; 
  tmat43_t<vec3_t> transform; 

  if ( deltaTime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1453, ASSERT_TYPE_ASSERT, "(deltaTime > 0.f)", (const char *)&queryFormat, "deltaTime > 0.f") )
    __debugbreak();
  if ( (LODWORD(deltaTime) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1454, ASSERT_TYPE_SANITY, "( !IS_NAN( deltaTime ) )", (const char *)&queryFormat, "!IS_NAN( deltaTime )") )
    __debugbreak();
  GVehicles::PhysicsGetChassisTransform(this, vehicleId, &transform);
  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  v7 = 0;
  value = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  do
  {
    v8 = (float)((float)(transform.m[v7].v[1] * InternalById->acceleration.v[1]) + (float)(InternalById->acceleration.v[0] * transform.m[v7].v[0])) + (float)(transform.m[v7].v[2] * InternalById->acceleration.v[2]);
    v9 = (float)((float)(transform.m[v7].v[1] * InternalById->prevAcceleration.v[1]) + (float)(transform.m[v7].v[0] * InternalById->prevAcceleration.v[0])) + (float)(transform.m[v7].v[2] * InternalById->prevAcceleration.v[2]);
    if ( COERCE_FLOAT(LODWORD(v8) & _xmm) > COERCE_FLOAT(LODWORD(v9) & _xmm) )
      *(&value + (int)v7) = (float)(v8 - v9) / deltaTime;
    ++v7;
  }
  while ( v7 < 2 );
  v10 = InternalById->acceleration.v[2];
  v11 = InternalById->prevAcceleration.v[2];
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) > COERCE_FLOAT(LODWORD(v11) & _xmm) )
    v21 = (float)(v10 - v11) / deltaTime;
  ServerDef = G_Vehicle_GetServerDef(InternalById->vehicleDefIndex);
  if ( ServerDef )
  {
    v13 = ServerDef->vehiclePhysicsDef.minimumJoltForNotify * ServerDef->vehiclePhysicsDef.minimumJoltForNotify;
    v14 = ScriptContext_Server();
    if ( BGVehicles::PhysicsIsValid(vehicleId) )
    {
      if ( GVehicles::ms_gVehiclesSystem )
      {
        v15 = GVehicles::ms_gVehiclesSystem->PhysicsGetVehiclePhysicsManager(GVehicles::ms_gVehiclesSystem);
        ObjectById = BgVehiclePhysicsManager::GetObjectById(v15, vehicleId);
        if ( ObjectById )
        {
          m_entityNumber = ObjectById->m_entityNumber;
          if ( m_entityNumber != 2047 )
          {
            GEntity = G_GetGEntity(m_entityNumber);
            if ( GEntity )
            {
              if ( (float)((float)(v20 * v20) + (float)(value * value)) >= v13 )
              {
                if ( Scr_IsSystemActive(v14, 1u) )
                {
                  value = 0.056818184 * value;
                  v20 = 0.056818184 * v20;
                  v21 = 0.056818184 * v21;
                  Scr_AddVector(v14, &value);
                  GScr_Notify(GEntity, scr_const.veh_jolt, 1u);
                }
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
}

/*
==============
GVehicles::PhysicsCrash
==============
*/
void GVehicles::PhysicsCrash(GVehicles *this, unsigned int vehicleId)
{
  __int128 v4; 
  float v8; 
  float v9; 
  GPhysicsVehicleInternal *InternalById; 
  const VehicleDef *ServerDef; 
  const VehicleDef *v12; 
  float crashPointOffsetFwd; 
  float crashImpulseSide; 
  float v15; 
  float v16; 
  float v17; 
  float crashImpulseUp; 
  double Mass; 
  vec3_t centerOfMass; 
  vec3_t origin; 
  vec3_t impulse; 
  vec3_t linearVelocity; 

  if ( GPhysicsVehicleManager::GetInternalById(vehicleId)->isWrecked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1318, ASSERT_TYPE_ASSERT, "(!PhysicsIsWrecked( vehicleId ))", (const char *)&queryFormat, "!PhysicsIsWrecked( vehicleId )") )
    __debugbreak();
  GPhysicsVehicleManager::GetInternalById(vehicleId)->crashingDisabled = 0;
  GVehicles::PhysicsWreck(this, vehicleId);
  GVehicles::PhysicsGetLinearVelocity(this, vehicleId, &linearVelocity);
  GVehicles::PhysicsGetCenterOfMass(this, vehicleId, &centerOfMass);
  v4 = LODWORD(linearVelocity.v[0]);
  *(float *)&v4 = fsqrt((float)(linearVelocity.v[0] * linearVelocity.v[0]) + (float)(linearVelocity.v[1] * linearVelocity.v[1]));
  _XMM2 = v4;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm5, xmm0
  }
  v8 = linearVelocity.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v9 = linearVelocity.v[1] * (float)(1.0 / *(float *)&_XMM0);
  if ( *(float *)&v4 < 0.001 )
  {
    v8 = FLOAT_1_0;
    v9 = 0.0;
  }
  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  ServerDef = G_Vehicle_GetServerDef(InternalById->vehicleDefIndex);
  v12 = ServerDef;
  if ( ServerDef )
  {
    crashPointOffsetFwd = ServerDef->vehiclePhysicsDef.crashPointOffsetFwd;
    origin.v[0] = (float)(v8 * crashPointOffsetFwd) + centerOfMass.v[0];
    origin.v[1] = (float)(v9 * crashPointOffsetFwd) + centerOfMass.v[1];
    origin.v[2] = centerOfMass.v[2] + ServerDef->vehiclePhysicsDef.crashPointOffsetUp;
    crashImpulseSide = ServerDef->vehiclePhysicsDef.crashImpulseSide;
    LODWORD(v15) = COERCE_UNSIGNED_INT(v9 * crashImpulseSide) ^ _xmm;
    v17 = v8 * crashImpulseSide;
    v16 = v8 * crashImpulseSide;
    if ( G_rand() % 2 )
    {
      v15 = v9 * crashImpulseSide;
      LODWORD(v16) = LODWORD(v17) ^ _xmm;
    }
    crashImpulseUp = v12->vehiclePhysicsDef.crashImpulseUp;
    Mass = GVehicles::PhysicsGetMass(this, vehicleId);
    impulse.v[2] = *(float *)&Mass * crashImpulseUp;
    impulse.v[0] = v15 * *(float *)&Mass;
    impulse.v[1] = v16 * *(float *)&Mass;
    GVehicles::PhysicsAddImpulse(this, vehicleId, &impulse, &origin);
  }
  else
  {
    Com_PrintWarning(20, "GVehicles::PhysicsCrash() called when vehicleDef is null\n");
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
  BgVehiclePhysics *ObjectById; 
  float v5; 
  float v6; 
  float v7; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  v5 = ObjectById->m_angularVelocityWs.v[0];
  angularVelocity->v[0] = v5;
  v6 = ObjectById->m_angularVelocityWs.v[1];
  angularVelocity->v[1] = v6;
  v7 = ObjectById->m_angularVelocityWs.v[2];
  angularVelocity->v[2] = v7;
  if ( ((LODWORD(v5) & 0x7F800000) == 2139095040 || (LODWORD(v6) & 0x7F800000) == 2139095040 || (LODWORD(v7) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1145, ASSERT_TYPE_SANITY, "( !IS_NAN( ( angularVelocity )[0] ) && !IS_NAN( ( angularVelocity )[1] ) && !IS_NAN( ( angularVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( angularVelocity )[0] ) && !IS_NAN( ( angularVelocity )[1] ) && !IS_NAN( ( angularVelocity )[2] )") )
    __debugbreak();
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
  BgVehiclePhysics *ObjectById; 
  float v5; 
  float v6; 
  float v7; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  v5 = ObjectById->m_centerOfMassWs.v[0];
  centerOfMass->v[0] = v5;
  v6 = ObjectById->m_centerOfMassWs.v[1];
  centerOfMass->v[1] = v6;
  v7 = ObjectById->m_centerOfMassWs.v[2];
  centerOfMass->v[2] = v7;
  if ( ((LODWORD(v5) & 0x7F800000) == 2139095040 || (LODWORD(v6) & 0x7F800000) == 2139095040 || (LODWORD(v7) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1221, ASSERT_TYPE_SANITY, "( !IS_NAN( ( centerOfMass )[0] ) && !IS_NAN( ( centerOfMass )[1] ) && !IS_NAN( ( centerOfMass )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( centerOfMass )[0] ) && !IS_NAN( ( centerOfMass )[1] ) && !IS_NAN( ( centerOfMass )[2] )") )
    __debugbreak();
}

/*
==============
GVehicles::PhysicsGetChassisForwardDir
==============
*/
void GVehicles::PhysicsGetChassisForwardDir(GVehicles *this, unsigned int vehicleId, vec3_t *dir)
{
  BgVehiclePhysics *ObjectById; 
  float *v5; 
  float v6; 
  float v7; 
  float v8; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  v5 = (float *)ObjectById;
  if ( ((LODWORD(ObjectById->m_transform.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[0].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1003, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( r_transform )[0] )[0] ) || IS_NAN( ( ( r_transform )[0] )[1] ) || IS_NAN( ( ( r_transform )[0] )[2] ) ) || ( IS_NAN( ( ( r_transform )[1] )[0] ) || IS_NAN( ( ( r_transform )[1] )[1] ) || IS_NAN( ( ( r_transform )[1] )[2] ) ) || ( IS_NAN( ( ( r_transform )[2] )[0] ) || IS_NAN( ( ( r_transform )[2] )[1] ) || IS_NAN( ( ( r_transform )[2] )[2] ) ) || ( IS_NAN( ( ( r_transform )[3] )[0] ) || IS_NAN( ( ( r_transform )[3] )[1] ) || IS_NAN( ( ( r_transform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( r_transform )") )
    __debugbreak();
  v6 = v5[93];
  dir->v[0] = v6;
  v7 = v5[94];
  dir->v[1] = v7;
  v8 = v5[95];
  dir->v[2] = v8;
  if ( ((LODWORD(v6) & 0x7F800000) == 2139095040 || (LODWORD(v7) & 0x7F800000) == 2139095040 || (LODWORD(v8) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1006, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] )") )
    __debugbreak();
}

/*
==============
GVehicles::PhysicsGetChassisTransform
==============
*/
void GVehicles::PhysicsGetChassisTransform(GVehicles *this, unsigned int vehicleId, tmat43_t<vec3_t> *transform)
{
  BgVehiclePhysics *ObjectById; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  MatrixCopy43(&ObjectById->m_transform, transform);
  if ( ((LODWORD(transform->m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[0].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[1].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[2].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[3].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[3].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(transform->m[3].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 993, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( transform )[0] )[0] ) || IS_NAN( ( ( transform )[0] )[1] ) || IS_NAN( ( ( transform )[0] )[2] ) ) || ( IS_NAN( ( ( transform )[1] )[0] ) || IS_NAN( ( ( transform )[1] )[1] ) || IS_NAN( ( ( transform )[1] )[2] ) ) || ( IS_NAN( ( ( transform )[2] )[0] ) || IS_NAN( ( ( transform )[2] )[1] ) || IS_NAN( ( ( transform )[2] )[2] ) ) || ( IS_NAN( ( ( transform )[3] )[0] ) || IS_NAN( ( ( transform )[3] )[1] ) || IS_NAN( ( ( transform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( transform )") )
    __debugbreak();
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
  BgVehiclePhysics *ObjectById; 
  float v5; 
  float v6; 
  __int64 v7; 
  float v8; 
  __int128 in1; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  *(float *)&in1 = ObjectById->m_centerOfMassWs.v[0];
  v5 = ObjectById->m_centerOfMassWs.v[1];
  v8 = *(float *)&in1;
  *((float *)&in1 + 1) = v5;
  v6 = ObjectById->m_centerOfMassWs.v[2];
  *((float *)&in1 + 2) = v6;
  if ( (in1 & 0x7F800000) == 2139095040 || (v8 = v5, (LODWORD(v5) & 0x7F800000) == 2139095040) || (v8 = v6, (LODWORD(v6) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1119, ASSERT_TYPE_SANITY, "( !IS_NAN( ( comWs )[0] ) && !IS_NAN( ( comWs )[1] ) && !IS_NAN( ( comWs )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( comWs )[0] ) && !IS_NAN( ( comWs )[1] ) && !IS_NAN( ( comWs )[2] )", v8, in1) )
      __debugbreak();
  }
  if ( ((LODWORD(ObjectById->m_transform.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[0].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1122, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( r_transform )[0] )[0] ) || IS_NAN( ( ( r_transform )[0] )[1] ) || IS_NAN( ( ( r_transform )[0] )[2] ) ) || ( IS_NAN( ( ( r_transform )[1] )[0] ) || IS_NAN( ( ( r_transform )[1] )[1] ) || IS_NAN( ( ( r_transform )[1] )[2] ) ) || ( IS_NAN( ( ( r_transform )[2] )[0] ) || IS_NAN( ( ( r_transform )[2] )[1] ) || IS_NAN( ( ( r_transform )[2] )[2] ) ) || ( IS_NAN( ( ( r_transform )[3] )[0] ) || IS_NAN( ( ( r_transform )[3] )[1] ) || IS_NAN( ( ( r_transform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( r_transform )") )
    __debugbreak();
  MatrixTransposeTransformVector43((const vec3_t *)&in1, &ObjectById->m_transform, com);
  *(float *)&v7 = com->v[0];
  if ( (LODWORD(com->v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v7 = com->v[1], (v7 & 0x7F800000) == 2139095040) || (*(float *)&v7 = com->v[2], (v7 & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1125, ASSERT_TYPE_SANITY, "( !IS_NAN( ( com )[0] ) && !IS_NAN( ( com )[1] ) && !IS_NAN( ( com )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( com )[0] ) && !IS_NAN( ( com )[1] ) && !IS_NAN( ( com )[2] )", v7) )
      __debugbreak();
  }
}

/*
==============
GVehicles::PhysicsGetDelayToStartDriving
==============
*/
float GVehicles::PhysicsGetDelayToStartDriving(GVehicles *this, const BgVehiclePhysics *vehObj, int driverEntNum, float defaultTime)
{
  __int64 v5; 
  const dvar_t *v6; 

  if ( driverEntNum == 2047 )
    return defaultTime;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)driverEntNum);
  if ( !v5 || !*(_DWORD *)(v5 + 4) || !*(_DWORD *)(v5 + 2556) )
    return defaultTime;
  v6 = DCONST_DVARFLT_bg_vehDelayFromPassenger;
  if ( !DCONST_DVARFLT_bg_vehDelayFromPassenger && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehDelayFromPassenger") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  return v6->current.value;
}

/*
==============
GVehicles::PhysicsGetFrontAxleOffset
==============
*/
float GVehicles::PhysicsGetFrontAxleOffset(GVehicles *this, unsigned int vehicleId)
{
  return GPhysicsVehicleManager::GetInternalById(vehicleId)->axleOffsets[0];
}

/*
==============
GVehicles::PhysicsGetFrontWheelCenterWS
==============
*/
void GVehicles::PhysicsGetFrontWheelCenterWS(GVehicles *this, unsigned int vehicleId, vec3_t *centerWS)
{
  GPhysicsVehicleInternal *InternalById; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysics *v8; 

  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  v8 = ObjectById;
  if ( ((LODWORD(ObjectById->m_transform.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[0].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1018, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( r_transform )[0] )[0] ) || IS_NAN( ( ( r_transform )[0] )[1] ) || IS_NAN( ( ( r_transform )[0] )[2] ) ) || ( IS_NAN( ( ( r_transform )[1] )[0] ) || IS_NAN( ( ( r_transform )[1] )[1] ) || IS_NAN( ( ( r_transform )[1] )[2] ) ) || ( IS_NAN( ( ( r_transform )[2] )[0] ) || IS_NAN( ( ( r_transform )[2] )[1] ) || IS_NAN( ( ( r_transform )[2] )[2] ) ) || ( IS_NAN( ( ( r_transform )[3] )[0] ) || IS_NAN( ( ( r_transform )[3] )[1] ) || IS_NAN( ( ( r_transform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( r_transform )") )
    __debugbreak();
  MatrixTransformVector43(InternalById->axleCenters, &v8->m_transform, centerWS);
  if ( ((LODWORD(centerWS->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(centerWS->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(centerWS->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1022, ASSERT_TYPE_SANITY, "( !IS_NAN( ( centerWS )[0] ) && !IS_NAN( ( centerWS )[1] ) && !IS_NAN( ( centerWS )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( centerWS )[0] ) && !IS_NAN( ( centerWS )[1] ) && !IS_NAN( ( centerWS )[2] )") )
    __debugbreak();
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
  BgVehiclePhysics *ObjectById; 
  float v5; 
  float v6; 
  float v7; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  v5 = ObjectById->m_linearVelocityWs.v[0];
  linearVelocity->v[0] = v5;
  v6 = ObjectById->m_linearVelocityWs.v[1];
  linearVelocity->v[1] = v6;
  v7 = ObjectById->m_linearVelocityWs.v[2];
  linearVelocity->v[2] = v7;
  if ( ((LODWORD(v5) & 0x7F800000) == 2139095040 || (LODWORD(v6) & 0x7F800000) == 2139095040 || (LODWORD(v7) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1135, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )") )
    __debugbreak();
}

/*
==============
GVehicles::PhysicsGetLocalAcceleration
==============
*/
void GVehicles::PhysicsGetLocalAcceleration(GVehicles *this, unsigned int vehicleId, vec3_t *acceleration)
{
  GPhysicsVehicleInternal *InternalById; 
  float v5; 
  float v6; 
  float v7; 

  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  v5 = InternalById->localAcceleration.v[0];
  acceleration->v[0] = v5;
  v6 = InternalById->localAcceleration.v[1];
  acceleration->v[1] = v6;
  v7 = InternalById->localAcceleration.v[2];
  acceleration->v[2] = v7;
  if ( ((LODWORD(v5) & 0x7F800000) == 2139095040 || (LODWORD(v6) & 0x7F800000) == 2139095040 || (LODWORD(v7) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1066, ASSERT_TYPE_SANITY, "( !IS_NAN( ( acceleration )[0] ) && !IS_NAN( ( acceleration )[1] ) && !IS_NAN( ( acceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( acceleration )[0] ) && !IS_NAN( ( acceleration )[1] ) && !IS_NAN( ( acceleration )[2] )") )
    __debugbreak();
}

/*
==============
GVehicles::PhysicsGetLocalVelocity
==============
*/
void GVehicles::PhysicsGetLocalVelocity(GVehicles *this, unsigned int vehicleId, vec3_t *velocity)
{
  GPhysicsVehicleInternal *InternalById; 
  float v5; 
  float v6; 
  float v7; 

  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  v5 = InternalById->localVelocity.v[0];
  velocity->v[0] = v5;
  v6 = InternalById->localVelocity.v[1];
  velocity->v[1] = v6;
  v7 = InternalById->localVelocity.v[2];
  velocity->v[2] = v7;
  if ( ((LODWORD(v5) & 0x7F800000) == 2139095040 || (LODWORD(v6) & 0x7F800000) == 2139095040 || (LODWORD(v7) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1056, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] )") )
    __debugbreak();
}

/*
==============
GVehicles::PhysicsGetMass
==============
*/
float GVehicles::PhysicsGetMass(GVehicles *this, unsigned int vehicleId)
{
  float m_mass; 

  m_mass = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId)->m_mass;
  if ( (LODWORD(m_mass) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1208, ASSERT_TYPE_SANITY, "( !IS_NAN( mass ) )", (const char *)&queryFormat, "!IS_NAN( mass )") )
    __debugbreak();
  return m_mass;
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
  return GPhysicsVehicleManager::GetInternalById(vehicleId)->axleOffsets[1];
}

/*
==============
GVehicles::PhysicsGetRearWheelCenterWS
==============
*/
void GVehicles::PhysicsGetRearWheelCenterWS(GVehicles *this, unsigned int vehicleId, vec3_t *centerWS)
{
  GPhysicsVehicleInternal *InternalById; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysics *v8; 

  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  v8 = ObjectById;
  if ( ((LODWORD(ObjectById->m_transform.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[0].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[1].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[2].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ObjectById->m_transform.m[3].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1034, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( r_transform )[0] )[0] ) || IS_NAN( ( ( r_transform )[0] )[1] ) || IS_NAN( ( ( r_transform )[0] )[2] ) ) || ( IS_NAN( ( ( r_transform )[1] )[0] ) || IS_NAN( ( ( r_transform )[1] )[1] ) || IS_NAN( ( ( r_transform )[1] )[2] ) ) || ( IS_NAN( ( ( r_transform )[2] )[0] ) || IS_NAN( ( ( r_transform )[2] )[1] ) || IS_NAN( ( ( r_transform )[2] )[2] ) ) || ( IS_NAN( ( ( r_transform )[3] )[0] ) || IS_NAN( ( ( r_transform )[3] )[1] ) || IS_NAN( ( ( r_transform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( r_transform )") )
    __debugbreak();
  MatrixTransformVector43(&InternalById->axleCenters[1], &v8->m_transform, centerWS);
  if ( ((LODWORD(centerWS->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(centerWS->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(centerWS->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1038, ASSERT_TYPE_SANITY, "( !IS_NAN( ( centerWS )[0] ) && !IS_NAN( ( centerWS )[1] ) && !IS_NAN( ( centerWS )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( centerWS )[0] ) && !IS_NAN( ( centerWS )[1] ) && !IS_NAN( ( centerWS )[2] )") )
    __debugbreak();
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
  float v4; 
  float v5; 
  float v6; 
  BgVehiclePhysics *ObjectById; 
  float v8; 
  float v9; 
  float v10; 
  __int64 v12; 
  float v13; 
  vec3_t dir; 

  GVehicles::PhysicsGetChassisForwardDir(this, vehicleId, &dir);
  v4 = dir.v[0];
  v5 = dir.v[2];
  v6 = dir.v[1];
  v13 = dir.v[0];
  if ( (LODWORD(dir.v[0]) & 0x7F800000) == 2139095040 || (v13 = dir.v[1], (LODWORD(dir.v[1]) & 0x7F800000) == 2139095040) || (v13 = dir.v[2], (LODWORD(dir.v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1165, ASSERT_TYPE_SANITY, "( !IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] )", v13) )
      __debugbreak();
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  v8 = ObjectById->m_linearVelocityWs.v[0];
  v9 = ObjectById->m_linearVelocityWs.v[1];
  v10 = ObjectById->m_linearVelocityWs.v[2];
  *(float *)&v12 = v8;
  if ( (LODWORD(v8) & 0x7F800000) == 2139095040 || (*(float *)&v12 = ObjectById->m_linearVelocityWs.v[1], (LODWORD(v9) & 0x7F800000) == 2139095040) || (*(float *)&v12 = ObjectById->m_linearVelocityWs.v[2], (LODWORD(v10) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1135, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )", v12) )
      __debugbreak();
  }
  *(float *)&v12 = v8;
  if ( (LODWORD(v8) & 0x7F800000) == 2139095040 || (*(float *)&v12 = v9, (LODWORD(v9) & 0x7F800000) == 2139095040) || (*(float *)&v12 = v10, (LODWORD(v10) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1170, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )", v12) )
      __debugbreak();
  }
  return (float)((float)(v8 * v4) + (float)(v9 * v6)) + (float)(v5 * v10);
}

/*
==============
GVehicles::PhysicsGetSteeringPointWS
==============
*/
void GVehicles::PhysicsGetSteeringPointWS(GVehicles *this, unsigned int vehicleId, vec3_t *pointWS)
{
  GVehicles::PhysicsGetFrontWheelCenterWS(this, vehicleId, pointWS);
  if ( ((LODWORD(pointWS->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(pointWS->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(pointWS->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1046, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pointWS )[0] ) && !IS_NAN( ( pointWS )[1] ) && !IS_NAN( ( pointWS )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pointWS )[0] ) && !IS_NAN( ( pointWS )[1] ) && !IS_NAN( ( pointWS )[2] )") )
    __debugbreak();
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
  return GPhysicsVehicleManager::GetInternalById(vehicleId)->wheelbaseLength;
}

/*
==============
GVehicles::PhysicsGetWheelBaseWidth
==============
*/
float GVehicles::PhysicsGetWheelBaseWidth(GVehicles *this, unsigned int vehicleId)
{
  return GPhysicsVehicleManager::GetInternalById(vehicleId)->wheelbaseWidth;
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
void GVehicles::PhysicsLaunch(GVehicles *this, unsigned int vehicleId, const vec3_t *launchVelocity, float spinFactor)
{
  __int128 v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v14; 
  float v15; 
  float v16; 
  double Mass; 
  vec3_t origin; 
  vec3_t linearVelocity; 
  vec3_t impulse; 
  vec3_t centerOfMass; 

  if ( ((LODWORD(launchVelocity->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(launchVelocity->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(launchVelocity->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1378, ASSERT_TYPE_SANITY, "( !IS_NAN( ( launchVelocity )[0] ) && !IS_NAN( ( launchVelocity )[1] ) && !IS_NAN( ( launchVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( launchVelocity )[0] ) && !IS_NAN( ( launchVelocity )[1] ) && !IS_NAN( ( launchVelocity )[2] )") )
    __debugbreak();
  if ( (LODWORD(spinFactor) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1379, ASSERT_TYPE_SANITY, "( !IS_NAN( spinFactor ) )", (const char *)&queryFormat, "!IS_NAN( spinFactor )", spinFactor) )
    __debugbreak();
  GPhysicsVehicleManager::GetInternalById(vehicleId)->crashingDisabled = 0;
  GVehicles::PhysicsWreck(this, vehicleId);
  GVehicles::PhysicsGetLinearVelocity(this, vehicleId, &linearVelocity);
  GVehicles::PhysicsGetCenterOfMass(this, vehicleId, &centerOfMass);
  origin = centerOfMass;
  v7 = 0i64;
  if ( spinFactor != 0.0 )
  {
    *(double *)&v7 = G_random();
    v8 = *(float *)&v7;
    *(double *)&v7 = G_random();
    v9 = *(float *)&v7;
    *(double *)&v7 = G_random();
    v10 = v7;
    *(float *)&v10 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v9 * v9)) + (float)(v8 * v8));
    _XMM4 = v10;
    __asm
    {
      vcmpless xmm1, xmm4, cs:__real@80000000
      vblendvps xmm1, xmm4, xmm2, xmm1
    }
    origin.v[0] = (float)((float)(*(float *)&v7 * (float)(1.0 / *(float *)&_XMM1)) * spinFactor) + origin.v[0];
    origin.v[1] = (float)((float)(v9 * (float)(1.0 / *(float *)&_XMM1)) * spinFactor) + origin.v[1];
    origin.v[2] = (float)((float)(v8 * (float)(1.0 / *(float *)&_XMM1)) * spinFactor) + origin.v[2];
  }
  v14 = launchVelocity->v[0];
  v15 = launchVelocity->v[1];
  v16 = launchVelocity->v[2];
  Mass = GVehicles::PhysicsGetMass(this, vehicleId);
  impulse.v[0] = (float)(v14 - linearVelocity.v[0]) * *(float *)&Mass;
  impulse.v[2] = (float)(v16 - linearVelocity.v[2]) * *(float *)&Mass;
  impulse.v[1] = (float)(v15 - linearVelocity.v[1]) * *(float *)&Mass;
  GVehicles::PhysicsAddImpulse(this, vehicleId, &impulse, &origin);
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
void GVehicles::PhysicsOnWorldAction(GVehicles *this, Physics_WorldId worldId, float deltaTime)
{
  Physics_WorldId v3; 
  unsigned int v5; 
  BgVehiclePhysicsManager *p_m_vehiclePhysicsManager; 
  BgVehiclePhysicsObjectBuffer *m_vehiclePhysicsObjects; 
  __int64 v8; 
  gentity_s *v9; 
  BgVehiclePhysics *ObjectForPmove; 
  BgVehiclePhysics *v11; 
  VehiclePhysicsNetcodeType NetcodeTypeForOwner; 
  gentity_s *GEntity; 
  const gentity_s *v14; 
  const playerState_s *EntityPlayerStateConst; 
  unsigned int PhysicsBodyId; 
  int v17; 
  __int64 v18; 
  __int64 v19; 

  v3 = worldId;
  if ( deltaTime <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 452, ASSERT_TYPE_ASSERT, "(deltaTime > 0.001f)", (const char *)&queryFormat, "deltaTime > EQUAL_EPSILON") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "GVehicles::PhysicsOnWorldAction");
  v5 = 0;
  p_m_vehiclePhysicsManager = &this->m_vehiclePhysicsManager;
  m_vehiclePhysicsObjects = this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects;
  do
  {
    if ( *(_DWORD *)&m_vehiclePhysicsObjects->buffer[8] )
    {
      if ( *(_DWORD *)&m_vehiclePhysicsObjects->buffer[32] != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 461, ASSERT_TYPE_ASSERT, "(vehObj->GetWorldId() == worldId)", (const char *)&queryFormat, "vehObj->GetWorldId() == worldId") )
        __debugbreak();
      if ( m_vehiclePhysicsObjects->buffer[612] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 462, ASSERT_TYPE_ASSERT, "(!vehObj->IsPmoveObject())", (const char *)&queryFormat, "!vehObj->IsPmoveObject()") )
        __debugbreak();
      v8 = *(int *)&m_vehiclePhysicsObjects->buffer[48];
      if ( (unsigned int)v8 >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = *(_DWORD *)&m_vehiclePhysicsObjects->buffer[48];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v9 = &g_entities[v8];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 467, ASSERT_TYPE_ASSERT, "( vehEnt )", "Vehicle object must have an associated entity") )
        __debugbreak();
      if ( BgVehiclePhysicsManager::ExistsObjectForPmove(p_m_vehiclePhysicsManager, (const BgVehiclePhysics *)m_vehiclePhysicsObjects) )
      {
        ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(p_m_vehiclePhysicsManager, (const BgVehiclePhysics *)m_vehiclePhysicsObjects);
        v11 = ObjectForPmove;
        if ( ObjectForPmove )
        {
          m_vehiclePhysicsObjects->buffer[676] = ObjectForPmove->m_clientGeoLoaded;
          *(double *)&m_vehiclePhysicsObjects->buffer[284] = *(double *)ObjectForPmove->m_playerViewAngles.v;
          *(float *)&m_vehiclePhysicsObjects->buffer[292] = ObjectForPmove->m_playerViewAngles.v[2];
        }
      }
      else
      {
        v11 = NULL;
      }
      NetcodeTypeForOwner = *(_DWORD *)&m_vehiclePhysicsObjects->buffer[24];
      GEntity = G_GetGEntity(*(_DWORD *)&m_vehiclePhysicsObjects->buffer[48]);
      if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 420, ASSERT_TYPE_ASSERT, "(vehEnt != nullptr)", (const char *)&queryFormat, "vehEnt != nullptr") )
        __debugbreak();
      if ( EntHandle::isDefined(&GEntity->r.ownerNum) )
      {
        v14 = EntHandle::ent(&GEntity->r.ownerNum);
        if ( v14 )
        {
          EntityPlayerStateConst = G_GetEntityPlayerStateConst(v14);
          if ( EntityPlayerStateConst )
            NetcodeTypeForOwner = G_Vehicle_GetNetcodeTypeForOwner((const BgVehiclePhysics *)m_vehiclePhysicsObjects, EntityPlayerStateConst->clientNum);
        }
      }
      if ( v11 && !v11->m_clientGeoLoaded && BgVehiclePhysics::GetNoClientGeoMode(v11) == NOCLIENTGEO_SWITCH_TO_SERVER_AUTH )
        NetcodeTypeForOwner = VEH_NETCODE_SERVER_AUTH;
      if ( !m_vehiclePhysicsObjects->buffer[76] || *(_DWORD *)&m_vehiclePhysicsObjects->buffer[24] == 1 )
      {
        if ( !BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)m_vehiclePhysicsObjects) || (PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)m_vehiclePhysicsObjects), !Physics_IsRigidBodyActive(*(Physics_WorldId *)&m_vehiclePhysicsObjects->buffer[32], PhysicsBodyId)) )
        {
          if ( *(_DWORD *)&m_vehiclePhysicsObjects->buffer[24] != 1 )
            BgVehiclePhysics::SetKeyframed((BgVehiclePhysics *)m_vehiclePhysicsObjects, 0);
        }
      }
      else
      {
        BgVehiclePhysics::SetDynamic((BgVehiclePhysics *)m_vehiclePhysicsObjects, 10.0);
      }
      G_PhysicsObject_IdentifyRigidBodyType(v8);
      if ( !m_vehiclePhysicsObjects->buffer[76] || (v17 = *(_DWORD *)&m_vehiclePhysicsObjects->buffer[24]) != 0 && v17 != 3 || NetcodeTypeForOwner == VEH_NETCODE_SERVER_AUTH )
      {
        if ( BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)m_vehiclePhysicsObjects) )
          BgVehiclePhysics::Simulate((BgVehiclePhysics *)m_vehiclePhysicsObjects, NULL, NULL, deltaTime, NULL);
      }
      else if ( EntHandle::isDefined(&v9->r.ownerNum) )
      {
        if ( BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)m_vehiclePhysicsObjects) )
          BgVehiclePhysics::Simulate((BgVehiclePhysics *)m_vehiclePhysicsObjects, NULL, NULL, deltaTime, v11);
      }
      else
      {
        Com_PrintWarning(20, "GVehicles::PhysicsOnWorldAction. Physics vehicle's owner unlinked/changed. Switching to non-controlled vehicle.\n");
        BgVehiclePhysics::SetPlayerControlled((BgVehiclePhysics *)m_vehiclePhysicsObjects, 0);
      }
      if ( (!v9 || ((v9->s.eType - 12) & 0xFFFD) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 518, ASSERT_TYPE_ASSERT, "(vehEnt && BG_IsVehicleEntity( &vehEnt->s ))", (const char *)&queryFormat, "vehEnt && BG_IsVehicleEntity( &vehEnt->s )") )
        __debugbreak();
      v9->s.lerp.u.actor.impactVector.v[1] = (*(float (__fastcall **)(BgVehiclePhysicsObjectBuffer *))(*(_QWORD *)m_vehiclePhysicsObjects->buffer + 88i64))(m_vehiclePhysicsObjects);
      v3 = worldId;
    }
    ++v5;
    ++m_vehiclePhysicsObjects;
  }
  while ( v5 < 0x80 );
  this->m_lastPhysicsStepTime = deltaTime;
  Sys_ProfEndNamedEvent();
}

/*
==============
GVehicles::PhysicsPostThinkUpdate
==============
*/
void GVehicles::PhysicsPostThinkUpdate(GVehicles *this, unsigned int vehicleId, float deltaTime)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  GPhysicsVehicleInternal *InternalById; 
  BgVehiclePhysics *ObjectById; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  gentity_s *VehicleEntityFromId; 
  gentity_s *tagChildren; 
  gclient_s *client; 
  __int64 v27; 
  tmat43_t<vec3_t> transform; 
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 

  if ( deltaTime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1648, ASSERT_TYPE_ASSERT, "(deltaTime > 0.f)", (const char *)&queryFormat, "deltaTime > 0.f") )
    __debugbreak();
  if ( (LODWORD(deltaTime) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1649, ASSERT_TYPE_SANITY, "( !IS_NAN( deltaTime ) )", (const char *)&queryFormat, "!IS_NAN( deltaTime )", deltaTime) )
    __debugbreak();
  InternalById = GPhysicsVehicleManager::GetInternalById(vehicleId);
  if ( InternalById->inUse )
  {
    v34 = v3;
    v33 = v4;
    v32 = v5;
    v31 = v6;
    v30 = v7;
    v29 = v8;
    GVehicles::PhysicsGetChassisTransform(this, vehicleId, &transform);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
    v14 = ObjectById->m_linearVelocityWs.v[0];
    v15 = ObjectById->m_linearVelocityWs.v[1];
    v16 = ObjectById->m_linearVelocityWs.v[2];
    *(float *)&v27 = v14;
    if ( (LODWORD(v14) & 0x7F800000) == 2139095040 || (*(float *)&v27 = ObjectById->m_linearVelocityWs.v[1], (LODWORD(v15) & 0x7F800000) == 2139095040) || (*(float *)&v27 = ObjectById->m_linearVelocityWs.v[2], (LODWORD(v16) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1135, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )", v27) )
        __debugbreak();
    }
    v17 = v14 - InternalById->conveyorVelocity.v[0];
    v18 = v15 - InternalById->conveyorVelocity.v[1];
    v19 = (float)((float)(v18 * transform.m[0].v[1]) + (float)(v17 * transform.m[0].v[0])) + (float)(v16 * transform.m[0].v[2]);
    v20 = (float)((float)(v18 * transform.m[1].v[1]) + (float)(v17 * transform.m[1].v[0])) + (float)(v16 * transform.m[1].v[2]);
    v21 = (float)((float)(v18 * transform.m[2].v[1]) + (float)(v17 * transform.m[2].v[0])) + (float)(v16 * transform.m[2].v[2]);
    if ( ((LODWORD(InternalById->prevAcceleration.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->prevAcceleration.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->prevAcceleration.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1675, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->prevAcceleration )[0] ) && !IS_NAN( ( vehicle->prevAcceleration )[1] ) && !IS_NAN( ( vehicle->prevAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->prevAcceleration )[0] ) && !IS_NAN( ( vehicle->prevAcceleration )[1] ) && !IS_NAN( ( vehicle->prevAcceleration )[2] )") )
      __debugbreak();
    if ( ((LODWORD(InternalById->acceleration.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->acceleration.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->acceleration.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1676, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->acceleration )[0] ) && !IS_NAN( ( vehicle->acceleration )[1] ) && !IS_NAN( ( vehicle->acceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->acceleration )[0] ) && !IS_NAN( ( vehicle->acceleration )[1] ) && !IS_NAN( ( vehicle->acceleration )[2] )") )
      __debugbreak();
    if ( ((LODWORD(InternalById->velocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->velocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->velocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1677, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->velocity )[0] ) && !IS_NAN( ( vehicle->velocity )[1] ) && !IS_NAN( ( vehicle->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->velocity )[0] ) && !IS_NAN( ( vehicle->velocity )[1] ) && !IS_NAN( ( vehicle->velocity )[2] )") )
      __debugbreak();
    if ( ((LODWORD(InternalById->localAcceleration.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->localAcceleration.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->localAcceleration.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1678, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->localAcceleration )[0] ) && !IS_NAN( ( vehicle->localAcceleration )[1] ) && !IS_NAN( ( vehicle->localAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->localAcceleration )[0] ) && !IS_NAN( ( vehicle->localAcceleration )[1] ) && !IS_NAN( ( vehicle->localAcceleration )[2] )") )
      __debugbreak();
    if ( ((LODWORD(InternalById->localVelocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->localVelocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->localVelocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1679, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->localVelocity )[0] ) && !IS_NAN( ( vehicle->localVelocity )[1] ) && !IS_NAN( ( vehicle->localVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->localVelocity )[0] ) && !IS_NAN( ( vehicle->localVelocity )[1] ) && !IS_NAN( ( vehicle->localVelocity )[2] )") )
      __debugbreak();
    InternalById->prevAcceleration.v[0] = InternalById->acceleration.v[0];
    InternalById->prevAcceleration.v[1] = InternalById->acceleration.v[1];
    InternalById->prevAcceleration.v[2] = InternalById->acceleration.v[2];
    v22 = v17 - InternalById->velocity.v[0];
    InternalById->acceleration.v[0] = v22;
    InternalById->acceleration.v[1] = v18 - InternalById->velocity.v[1];
    InternalById->acceleration.v[2] = v16 - InternalById->velocity.v[2];
    InternalById->acceleration.v[0] = (float)(1.0 / deltaTime) * v22;
    InternalById->acceleration.v[1] = (float)(1.0 / deltaTime) * InternalById->acceleration.v[1];
    InternalById->acceleration.v[2] = (float)(1.0 / deltaTime) * InternalById->acceleration.v[2];
    InternalById->velocity.v[0] = v17;
    InternalById->velocity.v[1] = v18;
    InternalById->velocity.v[2] = v16;
    v23 = v19 - InternalById->localVelocity.v[0];
    InternalById->localAcceleration.v[0] = v23;
    InternalById->localAcceleration.v[1] = v20 - InternalById->localVelocity.v[1];
    InternalById->localAcceleration.v[2] = v21 - InternalById->localVelocity.v[2];
    InternalById->localAcceleration.v[0] = v23 * (float)(1.0 / deltaTime);
    InternalById->localAcceleration.v[1] = (float)(1.0 / deltaTime) * InternalById->localAcceleration.v[1];
    InternalById->localAcceleration.v[2] = (float)(1.0 / deltaTime) * InternalById->localAcceleration.v[2];
    InternalById->localVelocity.v[0] = v19;
    InternalById->localVelocity.v[1] = v20;
    InternalById->localVelocity.v[2] = v21;
    if ( ((LODWORD(InternalById->prevAcceleration.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->prevAcceleration.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->prevAcceleration.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1693, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->prevAcceleration )[0] ) && !IS_NAN( ( vehicle->prevAcceleration )[1] ) && !IS_NAN( ( vehicle->prevAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->prevAcceleration )[0] ) && !IS_NAN( ( vehicle->prevAcceleration )[1] ) && !IS_NAN( ( vehicle->prevAcceleration )[2] )") )
      __debugbreak();
    if ( ((LODWORD(InternalById->acceleration.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->acceleration.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->acceleration.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1694, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->acceleration )[0] ) && !IS_NAN( ( vehicle->acceleration )[1] ) && !IS_NAN( ( vehicle->acceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->acceleration )[0] ) && !IS_NAN( ( vehicle->acceleration )[1] ) && !IS_NAN( ( vehicle->acceleration )[2] )") )
      __debugbreak();
    if ( ((LODWORD(InternalById->velocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->velocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->velocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1695, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->velocity )[0] ) && !IS_NAN( ( vehicle->velocity )[1] ) && !IS_NAN( ( vehicle->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->velocity )[0] ) && !IS_NAN( ( vehicle->velocity )[1] ) && !IS_NAN( ( vehicle->velocity )[2] )") )
      __debugbreak();
    if ( ((LODWORD(InternalById->localAcceleration.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->localAcceleration.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->localAcceleration.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1696, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->localAcceleration )[0] ) && !IS_NAN( ( vehicle->localAcceleration )[1] ) && !IS_NAN( ( vehicle->localAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->localAcceleration )[0] ) && !IS_NAN( ( vehicle->localAcceleration )[1] ) && !IS_NAN( ( vehicle->localAcceleration )[2] )") )
      __debugbreak();
    if ( ((LODWORD(InternalById->localVelocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->localVelocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(InternalById->localVelocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1697, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicle->localVelocity )[0] ) && !IS_NAN( ( vehicle->localVelocity )[1] ) && !IS_NAN( ( vehicle->localVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicle->localVelocity )[0] ) && !IS_NAN( ( vehicle->localVelocity )[1] ) && !IS_NAN( ( vehicle->localVelocity )[2] )") )
      __debugbreak();
    GVehicles::PhysicsCheckForJolt(this, vehicleId, deltaTime);
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
  const VehicleDef *ServerDef; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
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
          LODWORD(v11) = g_scriptableWorldCounts.serverInstanceCount;
          LODWORD(v10) = scriptableIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( g_scriptableSv_instanceContexts[scriptableIndex].commonContext.def )
        {
          vehEntNum = p_m_scriptableDamageInfo->m_scriptablesToDamage[0].vehEntNum;
          if ( (unsigned int)vehEntNum >= 0x800 )
          {
            LODWORD(v11) = 2048;
            LODWORD(v10) = p_m_scriptableDamageInfo->m_scriptablesToDamage[0].vehEntNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
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
              ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
              v9 = G_Vehicle_CalcImpactDamageForScriptable(GEntity->vehicle, p_m_scriptableDamageInfo->m_scriptablesToDamage[0].scriptableIndex, ServerDef->collisionDamage, ServerDef->collisionSpeed, &outDmgDir);
              if ( v9 > 0 )
                G_Vehicle_DamageScriptable(GEntity, p_m_scriptableDamageInfo->m_scriptablesToDamage[0].scriptableIndex, v9, &outDmgDir);
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
  BgVehiclePhysics *ObjectById; 

  if ( ((LODWORD(angularVelocity->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(angularVelocity->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(angularVelocity->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1152, ASSERT_TYPE_SANITY, "( !IS_NAN( ( angularVelocity )[0] ) && !IS_NAN( ( angularVelocity )[1] ) && !IS_NAN( ( angularVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( angularVelocity )[0] ) && !IS_NAN( ( angularVelocity )[1] ) && !IS_NAN( ( angularVelocity )[2] )") )
    __debugbreak();
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::SetAngularVelocity(ObjectById, angularVelocity, 1);
}

/*
==============
GVehicles::PhysicsSetConveyorVelocity
==============
*/
void GVehicles::PhysicsSetConveyorVelocity(GVehicles *this, unsigned int vehicleId, const vec2_t *velocity)
{
  BgVehiclePhysics *ObjectById; 
  float v7; 
  float v8; 
  vec3_t surfVel; 

  v8 = velocity->v[0];
  if ( (LODWORD(velocity->v[0]) & 0x7F800000) == 2139095040 || (v8 = velocity->v[1], (LODWORD(v8) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 973, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] )", v8) )
      __debugbreak();
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  v7 = velocity->v[1];
  surfVel.v[0] = velocity->v[0];
  surfVel.v[2] = 0.0;
  surfVel.v[1] = v7;
  BgVehiclePhysics::SetSurfaceVelocity(ObjectById, &surfVel);
  GPhysicsVehicleManager::GetInternalById(vehicleId)->conveyorVelocity = *velocity;
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
    ObjectById->m_forcedKeyframe = 0;
    BgVehiclePhysics::SetDynamic(ObjectById, 10.0);
  }
}

/*
==============
GVehicles::PhysicsSetInputControl
==============
*/
void GVehicles::PhysicsSetInputControl(GVehicles *this, unsigned int vehicleId, unsigned int controlIndex, float value)
{
  __int64 v5; 
  unsigned int v7; 
  BgVehiclePhysicsManager *p_m_vehiclePhysicsManager; 
  const unsigned int *v9; 
  unsigned int v10; 
  unsigned int v11; 
  VehiclePhysicsComponentId *m_components; 
  VehiclePhysicsComponentId v13; 
  BgVehiclePhysics *ObjectById; 
  BgVehicleComponentGoStraightTo *ComponentBy; 
  __int64 v16; 
  __int64 v17; 

  v5 = controlIndex;
  if ( (LODWORD(value) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1555, ASSERT_TYPE_SANITY, "( !IS_NAN( value ) )", (const char *)&queryFormat, "!IS_NAN( value )") )
    __debugbreak();
  if ( (unsigned int)v5 >= 8 )
  {
    LODWORD(v16) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1556, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v16, 8) )
      __debugbreak();
  }
  v7 = 0;
  p_m_vehiclePhysicsManager = &this->m_vehiclePhysicsManager;
  v9 = pathCompTypes;
  while ( 2 )
  {
    v10 = *v9;
    v11 = 0;
    m_components = BgVehiclePhysicsManager::GetObjectById(p_m_vehiclePhysicsManager, vehicleId)->m_components;
    while ( 1 )
    {
      v13.id = m_components->id;
      if ( m_components->id )
      {
        if ( (v13.id & 0xFF0000) < 0x20000 && HIBYTE(v13.id) == v10 )
          break;
      }
      ++v11;
      ++m_components;
      if ( v11 >= 2 )
        goto LABEL_16;
    }
    if ( v13.id && (v13.id & 0xFF0000) < 0x20000 )
    {
      ComponentBy = BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentGoStraightTo>(p_m_vehiclePhysicsManager, v13);
      if ( !ComponentBy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1567, ASSERT_TYPE_ASSERT, "( vehComp )", "GVehicles::PhysicsSetInputControl(): We got the component Id, but there's no component") )
        __debugbreak();
      if ( (unsigned int)v5 >= 8 )
      {
        LODWORD(v17) = 8;
        LODWORD(v16) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.h", 33, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      ComponentBy->m_inputMults[v5] = value;
      return;
    }
LABEL_16:
    ++v7;
    ++v9;
    if ( v7 < 3 )
      continue;
    break;
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(p_m_vehiclePhysicsManager, vehicleId);
  if ( (unsigned int)v5 >= 8 )
  {
    LODWORD(v17) = 8;
    LODWORD(v16) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 98, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  ObjectById->m_controls.externalValues[v5] = value;
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
  BgVehiclePhysics *ObjectById; 

  if ( ((LODWORD(linearVelocity->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(linearVelocity->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(linearVelocity->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 925, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )") )
    __debugbreak();
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::SetLinearVelocity(ObjectById, linearVelocity, 1);
}

/*
==============
GVehicles::PhysicsSetSpeed
==============
*/
void GVehicles::PhysicsSetSpeed(GVehicles *this, unsigned int vehicleId, float speed)
{
  float v5; 
  float v6; 
  float v7; 
  BgVehiclePhysics *ObjectById; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  BgVehiclePhysics *v13; 
  __int64 v14; 
  __int128 linVelWs; 
  vec3_t dir; 

  if ( (LODWORD(speed) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( speed ) )", (const char *)&queryFormat, "!IS_NAN( speed )", speed) )
    __debugbreak();
  GVehicles::PhysicsGetChassisForwardDir(this, vehicleId, &dir);
  v5 = dir.v[0];
  v6 = dir.v[2];
  v7 = dir.v[1];
  *(float *)&v14 = dir.v[0];
  if ( (LODWORD(dir.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v14 = dir.v[1], (LODWORD(dir.v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v14 = dir.v[2], (LODWORD(dir.v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1184, ASSERT_TYPE_SANITY, "( !IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] )", v14) )
      __debugbreak();
  }
  ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  v9 = ObjectById->m_linearVelocityWs.v[0];
  *(float *)&linVelWs = v9;
  v10 = ObjectById->m_linearVelocityWs.v[1];
  *((float *)&linVelWs + 1) = v10;
  v11 = ObjectById->m_linearVelocityWs.v[2];
  *(float *)&v14 = v9;
  *((float *)&linVelWs + 2) = v11;
  if ( (LODWORD(v9) & 0x7F800000) == 2139095040 || (*(float *)&v14 = v10, (LODWORD(v10) & 0x7F800000) == 2139095040) || (*(float *)&v14 = v11, (LODWORD(v11) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1135, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )", v14) )
      __debugbreak();
    v9 = *(float *)&linVelWs;
    v10 = *((float *)&linVelWs + 1);
    v11 = *((float *)&linVelWs + 2);
  }
  *(float *)&v14 = v9;
  if ( (LODWORD(v9) & 0x7F800000) == 2139095040 || (*(float *)&v14 = v10, (LODWORD(v10) & 0x7F800000) == 2139095040) || (*(float *)&v14 = v11, (LODWORD(v11) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1189, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )", v14) )
      __debugbreak();
    v9 = *(float *)&linVelWs;
    v10 = *((float *)&linVelWs + 1);
    v11 = *((float *)&linVelWs + 2);
  }
  v12 = speed - (float)((float)((float)(v10 * v7) + (float)(v9 * v5)) + (float)(v11 * v6));
  *(float *)&v14 = v9 + (float)(v5 * v12);
  *(float *)&linVelWs = *(float *)&v14;
  *((float *)&linVelWs + 1) = v10 + (float)(v7 * v12);
  *((float *)&linVelWs + 2) = v11 + (float)(v6 * v12);
  if ( (v14 & 0x7F800000) == 2139095040 || (*(float *)&v14 = v10 + (float)(v7 * v12), (v14 & 0x7F800000) == 2139095040) || (*(float *)&v14 = v11 + (float)(v6 * v12), (v14 & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 925, ASSERT_TYPE_SANITY, "( !IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( linearVelocity )[0] ) && !IS_NAN( ( linearVelocity )[1] ) && !IS_NAN( ( linearVelocity )[2] )", v14, linVelWs) )
      __debugbreak();
  }
  v13 = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
  BgVehiclePhysics::SetLinearVelocity(v13, (const vec3_t *)&linVelWs, 1);
}

/*
==============
GVehicles::PhysicsSetTopSpeedBwd
==============
*/
void GVehicles::PhysicsSetTopSpeedBwd(GVehicles *this, unsigned int vehicleId, float topSpeed)
{
  if ( (LODWORD(topSpeed) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 962, ASSERT_TYPE_SANITY, "( !IS_NAN( topSpeed ) )", (const char *)&queryFormat, "!IS_NAN( topSpeed )") )
    __debugbreak();
  BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId)->m_topSpeedForward.v[1] = topSpeed;
}

/*
==============
GVehicles::PhysicsSetTopSpeedFwd
==============
*/
void GVehicles::PhysicsSetTopSpeedFwd(GVehicles *this, unsigned int vehicleId, float topSpeed)
{
  if ( (LODWORD(topSpeed) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 943, ASSERT_TYPE_SANITY, "( !IS_NAN( topSpeed ) )", (const char *)&queryFormat, "!IS_NAN( topSpeed )") )
    __debugbreak();
  BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId)->m_topSpeedForward.v[0] = topSpeed;
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
  gentity_s *v7; 
  BgVehiclePhysicsManager *p_m_vehiclePhysicsManager; 
  BgVehiclePhysics *ObjectById; 
  VehiclePhysicsNetcodeType NetcodeTypeForOwner; 
  __int32 v11; 
  float vehOrgX; 
  int v13; 
  float v14; 
  int v15; 
  float v16; 
  float v17; 
  int v18; 
  char v19; 
  vec3_t *p_origin; 
  unsigned int PhysicsBodyId; 
  BgVehiclePhysics *ObjectForPmove; 
  bool IsClientGeoLoaded; 
  unsigned int v24; 
  float v25; 
  float v26; 
  vec4_t v27; 
  float v28; 
  __int128 vehOrgY_low; 
  float v30; 
  __int128 v31; 
  float v36; 
  playerState_s *ps; 
  float v40; 
  playerState_s *v41; 
  float v42; 
  bool v43; 
  float v44; 
  int v45; 
  float v46; 
  float v47; 
  float v48; 
  double v49; 
  float v50; 
  BgVehiclePhysics *v51; 
  vec3_t position; 
  double v53; 
  float vehOrgZ; 
  vec4_t orientation; 

  if ( (!pm || !pm->ps) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 309, ASSERT_TYPE_ASSERT, "(pm && pm->ps)", (const char *)&queryFormat, "pm && pm->ps") )
    __debugbreak();
  if ( pm->ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 310, ASSERT_TYPE_ASSERT, "(pm->ps->vehicleState.entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "pm->ps->vehicleState.entity != ENTITYNUM_NONE") )
    __debugbreak();
  GEntity = G_GetGEntity(pm->ps->vehicleState.entity);
  v7 = GEntity;
  if ( (!GEntity || GEntity->s.eType != ET_VEHICLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 313, ASSERT_TYPE_ASSERT, "(vehEnt && vehEnt->s.eType == ET_VEHICLE)", (const char *)&queryFormat, "vehEnt && vehEnt->s.eType == ET_VEHICLE") )
    __debugbreak();
  p_m_vehiclePhysicsManager = &this->m_vehiclePhysicsManager;
  ObjectById = (BgVehiclePhysics *)BgVehiclePhysicsManager::GetObjectById(p_m_vehiclePhysicsManager, v7->vehicle->physicsVehicle);
  NetcodeTypeForOwner = G_Vehicle_GetNetcodeTypeForOwner(ObjectById, pm->ps->clientNum);
  if ( NetcodeTypeForOwner )
  {
    v11 = NetcodeTypeForOwner - 1;
    if ( v11 )
    {
      if ( v11 == 2 )
      {
        if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 320, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
          __debugbreak();
        vehOrgX = pm->cmd.vehOrgX;
        v13 = pm->cmd.vehAngles[0];
        HIDWORD(v53) = LODWORD(pm->cmd.vehOrgY);
        v14 = (float)v13;
        v15 = pm->cmd.vehAngles[1];
        *(float *)&v53 = vehOrgX;
        vehOrgZ = pm->cmd.vehOrgZ;
        v16 = v14 * 0.0054931641;
        v17 = (float)v15;
        v18 = pm->cmd.vehAngles[2];
        position.v[0] = v16;
        position.v[1] = v17 * 0.0054931641;
        position.v[2] = (float)v18 * 0.0054931641;
        if ( BgVehiclePhysicsManager::ExistsObjectForPmove(p_m_vehiclePhysicsManager, ObjectById) )
        {
          v19 = 0;
        }
        else
        {
          p_origin = &pm->ps->vehicleState.origin;
          if ( BgVehiclePhysics::IsPhysicsBodyIdValid(ObjectById) )
          {
            PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(ObjectById);
            Physics_GetRigidBodyTransform((const Physics_WorldId)ObjectById->m_worldId, PhysicsBodyId, p_origin, &orientation);
          }
          QuatToAngles(&orientation, &pm->ps->vehicleState.angles);
          v19 = 1;
        }
        ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(p_m_vehiclePhysicsManager, ObjectById);
        BgVehiclePhysics::SetPlayerControlled(ObjectForPmove, ObjectById->m_playerControlled);
        IsClientGeoLoaded = BgVehiclePhysics::IsClientGeoLoaded(ObjectForPmove, &pm->cmd);
        if ( IsClientGeoLoaded )
        {
          if ( v19 )
          {
            if ( BgVehiclePhysics::IsPhysicsBodyIdValid(ObjectById) )
            {
              v24 = BgVehiclePhysics::GetPhysicsBodyId(ObjectById);
              Physics_GetRigidBodyTransform((const Physics_WorldId)ObjectById->m_worldId, v24, &position, &orientation);
            }
            v25 = position.v[1];
            ObjectForPmove->m_manualIntegratedPos.v[0] = position.v[0];
            v26 = position.v[2];
            ObjectForPmove->m_manualIntegratedPos.v[1] = v25;
            v27 = orientation;
            ObjectForPmove->m_manualIntegratedPos.v[2] = v26;
            ObjectForPmove->m_manualIntegratedOrientation = v27;
          }
          else if ( ObjectForPmove->IsValidUserCmd(ObjectForPmove, &pm->cmd) )
          {
            ObjectForPmove->m_pmoveLastCmdTime = pm->cmd.serverTime;
            v28 = pm->cmd.vehOrgZ;
            vehOrgY_low = LODWORD(pm->cmd.vehOrgY);
            v30 = pm->cmd.vehOrgX;
            ObjectForPmove->m_pmoveLastCmdPos.v[1] = *(float *)&vehOrgY_low;
            ObjectForPmove->m_pmoveLastCmdPos.v[2] = v28;
            ObjectForPmove->m_pmoveLastCmdPos.v[0] = v30;
            *(double *)&vehOrgY_low = BG_UsrCmdUnpackAngle(pm->cmd.angles.v[0]);
            v31 = vehOrgY_low;
            _XMM11 = 0i64;
            __asm { vroundss xmm2, xmm11, xmm1, 1 }
            *(float *)&v31 = (float)((float)(*(float *)&vehOrgY_low * 0.0027777778) - *(float *)&_XMM2) * 360.0;
            _XMM9 = v31;
            BG_UsrCmdUnpackAngle(pm->cmd.angles.v[1]);
            __asm { vroundss xmm3, xmm11, xmm0, 1 }
            *(double *)&vehOrgY_low = BG_UsrCmdUnpackAngle(pm->cmd.angles.v[2]);
            v36 = *(float *)&vehOrgY_low * 0.0027777778;
            __asm { vroundss xmm3, xmm11, xmm0, 1 }
            orientation.v[2] = (float)((float)(*(float *)&vehOrgY_low * 0.0027777778) - *(float *)&_XMM3) * 360.0;
            *(double *)&vehOrgY_low = v53;
            __asm { vunpcklps xmm1, xmm9, xmm6 }
            *(double *)ObjectForPmove->m_playerViewAngles.v = *(double *)&_XMM1;
            ObjectForPmove->m_playerViewAngles.v[2] = (float)(v36 - *(float *)&_XMM3) * 360.0;
            ps = pm->ps;
            v40 = vehOrgZ;
            *(double *)ps->vehicleState.origin.v = *(double *)&vehOrgY_low;
            *(_QWORD *)&vehOrgY_low = *(_QWORD *)position.v;
            ps->vehicleState.origin.v[2] = v40;
            v41 = pm->ps;
            v42 = position.v[2];
            *(double *)v41->vehicleState.angles.v = *(double *)&vehOrgY_low;
            v41->vehicleState.angles.v[2] = v42;
            BgVehiclePhysics::Pmove(ObjectForPmove, pm, pml);
          }
        }
        ObjectForPmove->m_clientGeoLoaded = IsClientGeoLoaded;
      }
    }
    else
    {
      v43 = ObjectById->m_netcodeType == VEH_NETCODE_CLIENT_AUTH;
      v44 = (float)pm->cmd.vehAngles[1];
      v45 = pm->cmd.vehAngles[2];
      *(float *)&v53 = (float)pm->cmd.vehAngles[0] * 0.0054931641;
      *((float *)&v53 + 1) = v44 * 0.0054931641;
      v46 = pm->cmd.vehOrgX;
      v47 = pm->cmd.vehOrgZ;
      vehOrgZ = (float)v45 * 0.0054931641;
      position.v[1] = pm->cmd.vehOrgY;
      position.v[0] = v46;
      position.v[2] = v47;
      if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 900, ASSERT_TYPE_ASSERT, "( GetNetcodeType() == VEH_NETCODE_CLIENT_AUTH )", "BgVehiclePhysics::SetClientAuthWarpData(): Vehicle is not Client-Authoritative") )
        __debugbreak();
      if ( ObjectById->m_worldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 901, ASSERT_TYPE_ASSERT, "( GetWorldId() == PHYSICS_WORLD_ID_SERVER_MAIN )", "BgVehiclePhysics::SetClientAuthWarpData(): Only makes sense in server") )
        __debugbreak();
      v48 = position.v[2];
      *(double *)ObjectById->m_clientAuthOrg.v = *(double *)position.v;
      v49 = v53;
      ObjectById->m_clientAuthOrg.v[2] = v48;
      v50 = vehOrgZ;
      *(double *)ObjectById->m_clientAuthAngles.v = v49;
      ObjectById->m_clientAuthAngles.v[2] = v50;
    }
  }
  else
  {
    if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 383, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
      __debugbreak();
    v51 = BgVehiclePhysicsManager::GetObjectForPmove(p_m_vehiclePhysicsManager, ObjectById);
    BgVehiclePhysics::SetPlayerControlled(v51, ObjectById->m_playerControlled);
    BgVehiclePhysics::Pmove(v51, pm, pml);
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
void GVehicles::PhysicsUpdateCharacterWobbleAnimData(GVehicles *this, const characterInfo_t *ci, unsigned int vehicleId, float frameTime, wobbleAnim_t *outData)
{
  gentity_s *GEntity; 
  VehicleWorldmodelAAnim *p_currentAngles; 
  const BgVehiclePhysics *ObjectById; 
  tmat33_t<vec3_t> axis; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1716, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1717, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(vehicleId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_physics.cpp", 1718, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleId )") )
    __debugbreak();
  if ( frameTime > 0.0 )
  {
    GEntity = G_GetGEntity(ci->entityNum);
    p_currentAngles = (VehicleWorldmodelAAnim *)&GEntity->r.currentAngles;
    if ( ci->vehicleAnimation.seat != VEHICLE_SEAT_DRIVER )
      p_currentAngles = &ci->vehicleAnimation;
    AnglesToAxis(&p_currentAngles->viewAngles, &axis);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, vehicleId);
    BGVehicles::PhysicsUpdateCharacterWobbleAnimDataCommon(this, ObjectById, &axis, &GEntity->r.currentOrigin, ci, frameTime, outData);
  }
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

