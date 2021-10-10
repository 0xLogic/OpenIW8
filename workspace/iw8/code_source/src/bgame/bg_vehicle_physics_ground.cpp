/*
==============
BgVehiclePhysicsCarBase::FilterAccelForce
==============
*/

double __fastcall BgVehiclePhysicsCarBase::FilterAccelForce(BgVehiclePhysicsCarBase *this, float rawAccelForce)
{
  double result; 

  *(float *)&result = ?FilterAccelForce@BgVehiclePhysicsCarBase@@IEBAMM@Z(this, rawAccelForce);
  return result;
}

/*
==============
BgVehiclePhysicsGround::BlowUpTire
==============
*/

void __fastcall BgVehiclePhysicsGround::BlowUpTire(BgVehiclePhysicsGround *this, int tireIndex)
{
  ?BlowUpTire@BgVehiclePhysicsGround@@IEAAXH@Z(this, tireIndex);
}

/*
==============
BgVehiclePhysicsAtvQuadNew::InterpolateAnimParams
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::InterpolateAnimParams(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  ?InterpolateAnimParams@BgVehiclePhysicsAtvQuadNew@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::UpdatePlayerInputControls
==============
*/

void __fastcall BgVehiclePhysicsGround::UpdatePlayerInputControls(BgVehiclePhysicsGround *this, const usercmd_s *cmd, const playerState_s *ps)
{
  ?UpdatePlayerInputControls@BgVehiclePhysicsGround@@UEAAXPEBUusercmd_s@@PEBUplayerState_s@@@Z(this, cmd, ps);
}

/*
==============
BgVehiclePhysicsTank::FireWeapon
==============
*/

void __fastcall BgVehiclePhysicsTank::FireWeapon(BgVehiclePhysicsTank *this, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  ?FireWeapon@BgVehiclePhysicsTank@@UEAAXAEBTvec3_t@@0PEBUWeaponDef@@@Z(this, dirWs, atWs, weapDef);
}

/*
==============
BgVehiclePhysicsAtvQuadNew::Setup
==============
*/

bool __fastcall BgVehiclePhysicsAtvQuadNew::Setup(BgVehiclePhysicsAtvQuadNew *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsAtvQuadNew@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsTechnical::Setup
==============
*/

bool __fastcall BgVehiclePhysicsTechnical::Setup(BgVehiclePhysicsTechnical *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsTechnical@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsGround::Steering::Reset
==============
*/

void __fastcall BgVehiclePhysicsGround::Steering::Reset(BgVehiclePhysicsGround::Steering *this)
{
  ?Reset@Steering@BgVehiclePhysicsGround@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireExtraDampFactors
==============
*/

void __fastcall BgVehiclePhysicsCarBase::GetFlatTireExtraDampFactors(BgVehiclePhysicsCarBase *this, float *outLdamp, float *outAdamp)
{
  ?GetFlatTireExtraDampFactors@BgVehiclePhysicsCarBase@@IEBAXAEAM0@Z(this, outLdamp, outAdamp);
}

/*
==============
BgVehiclePhysicsGround::DampingVelocities
==============
*/

void __fastcall BgVehiclePhysicsGround::DampingVelocities(BgVehiclePhysicsGround *this, float deltaTime, float linearDampFrame, float angularDampFrame)
{
  ?DampingVelocities@BgVehiclePhysicsGround@@IEAAXMMM@Z(this, deltaTime, linearDampFrame, angularDampFrame);
}

/*
==============
BgVehiclePhysicsGround::AdjustExtraGravityFactor
==============
*/

void __fastcall BgVehiclePhysicsGround::AdjustExtraGravityFactor(BgVehiclePhysicsGround *this, float factor)
{
  ?AdjustExtraGravityFactor@BgVehiclePhysicsGround@@IEAAXM@Z(this, factor);
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireMaxYawFactorOnSteering
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetFlatTireMaxYawFactorOnSteering(BgVehiclePhysicsCarBase *this)
{
  double result; 

  *(float *)&result = ?GetFlatTireMaxYawFactorOnSteering@BgVehiclePhysicsCarBase@@IEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsCarBase::GetReversingEngineMult
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetReversingEngineMult(BgVehiclePhysicsCarBase *this)
{
  double result; 

  *(float *)&result = ?GetReversingEngineMult@BgVehiclePhysicsCarBase@@IEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsTwoWheeled::ApplyFriction
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::ApplyFriction(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  ?ApplyFriction@BgVehiclePhysicsTwoWheeled@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::Setup
==============
*/

bool __fastcall BgVehiclePhysicsGround::Setup(BgVehiclePhysicsGround *this, BGVehicles *vehSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsGround@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireFactorOnFriction
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetFlatTireFactorOnFriction(BgVehiclePhysicsCarBase *this, unsigned int windex)
{
  double result; 

  *(float *)&result = ?GetFlatTireFactorOnFriction@BgVehiclePhysicsCarBase@@IEBAMI@Z(this, windex);
  return result;
}

/*
==============
BgVehiclePhysicsGround::CreatePhysics
==============
*/

bool __fastcall BgVehiclePhysicsGround::CreatePhysics(BgVehiclePhysicsGround *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  return ?CreatePhysics@BgVehiclePhysicsGround@@UEAA_NPEBUVehiclePhysicsDef@@@Z(this, vehPhysicsDef);
}

/*
==============
BgVehiclePhysicsGround::RumbleData::Reset
==============
*/

void __fastcall BgVehiclePhysicsGround::RumbleData::Reset(BgVehiclePhysicsGround::RumbleData *this)
{
  ?Reset@RumbleData@BgVehiclePhysicsGround@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsTank::Setup
==============
*/

bool __fastcall BgVehiclePhysicsTank::Setup(BgVehiclePhysicsTank *this, BGVehicles *vehSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsTank@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsGround::DestroyPhysics
==============
*/

void __fastcall BgVehiclePhysicsGround::DestroyPhysics(BgVehiclePhysicsGround *this)
{
  ?DestroyPhysics@BgVehiclePhysicsGround@@UEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsCarBase::GetCameraFovDelta
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetCameraFovDelta(BgVehiclePhysicsCarBase *this)
{
  double result; 

  *(float *)&result = ?GetCameraFovDelta@BgVehiclePhysicsCarBase@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsCarBase::GetLocalSteering
==============
*/

void __fastcall BgVehiclePhysicsCarBase::GetLocalSteering(BgVehiclePhysicsCarBase *this, BgVehiclePhysicsGround::Steering *outSteering)
{
  ?GetLocalSteering@BgVehiclePhysicsCarBase@@IEBAXAEAUSteering@BgVehiclePhysicsGround@@@Z(this, outSteering);
}

/*
==============
BgVehiclePhysicsTank::Reset
==============
*/

void __fastcall BgVehiclePhysicsTank::Reset(BgVehiclePhysicsTank *this)
{
  ?Reset@BgVehiclePhysicsTank@@UEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsTank::StabilizeAngles
==============
*/

void __fastcall BgVehiclePhysicsTank::StabilizeAngles(BgVehiclePhysicsTank *this, float deltaTime)
{
  ?StabilizeAngles@BgVehiclePhysicsTank@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTwoWheeled::StabilizeAngles
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::StabilizeAngles(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  ?StabilizeAngles@BgVehiclePhysicsTwoWheeled@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::GetRagdollInitialImpact
==============
*/

void __fastcall BgVehiclePhysicsGround::GetRagdollInitialImpact(BgVehiclePhysicsGround *this, const vec3_t *entPos, bool killcam, int *outHitLoc, vec3_t *outImpactVec)
{
  ?GetRagdollInitialImpact@BgVehiclePhysicsGround@@UEBAXAEBTvec3_t@@_NAEAHAEAT2@@Z(this, entPos, killcam, outHitLoc, outImpactVec);
}

/*
==============
BgVehiclePhysicsTwoWheeled::DampVelocitiesAndStop
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::DampVelocitiesAndStop(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  ?DampVelocitiesAndStop@BgVehiclePhysicsTwoWheeled@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::ApplyExtraDamping
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplyExtraDamping(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?ApplyExtraDamping@BgVehiclePhysicsCarBase@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::ApplyExtraGravity
==============
*/

void __fastcall BgVehiclePhysicsGround::ApplyExtraGravity(BgVehiclePhysicsGround *this, float deltaTime)
{
  ?ApplyExtraGravity@BgVehiclePhysicsGround@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::CalcDamage
==============
*/

int __fastcall BgVehiclePhysicsGround::CalcDamage(BgVehiclePhysicsGround *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDamageDir)
{
  return ?CalcDamage@BgVehiclePhysicsGround@@UEBAHAEBUBgVehiclePhysicsDamageSetup@@AEATvec3_t@@@Z(this, dmgInfo, outDamageDir);
}

/*
==============
BgVehiclePhysicsCarBase::GetGearEngineMult
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetGearEngineMult(BgVehiclePhysicsCarBase *this)
{
  double result; 

  *(float *)&result = ?GetGearEngineMult@BgVehiclePhysicsCarBase@@IEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsTechnical::ComputeEngineSound
==============
*/

void __fastcall BgVehiclePhysicsTechnical::ComputeEngineSound(BgVehiclePhysicsTechnical *this, float deltaTime)
{
  ?ComputeEngineSound@BgVehiclePhysicsTechnical@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsSentryDrone::SupportsFeature
==============
*/

bool __fastcall BgVehiclePhysicsSentryDrone::SupportsFeature(BgVehiclePhysicsSentryDrone *this, BgVehiclePhysicsFeature feat)
{
  return ?SupportsFeature@BgVehiclePhysicsSentryDrone@@UEBA_NW4BgVehiclePhysicsFeature@@@Z(this, feat);
}

/*
==============
BgVehiclePhysicsCarBase::StoreConfigurationForDvars
==============
*/

void __fastcall BgVehiclePhysicsCarBase::StoreConfigurationForDvars(BgVehiclePhysicsCarBase *this)
{
  ?StoreConfigurationForDvars@BgVehiclePhysicsCarBase@@IEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsCarBase::CameraConfig::Setup
==============
*/

void __fastcall BgVehiclePhysicsCarBase::CameraConfig::Setup(BgVehiclePhysicsCarBase::CameraConfig *this, const VehiclePhysicsDef *physDef)
{
  ?Setup@CameraConfig@BgVehiclePhysicsCarBase@@QEAAXAEBUVehiclePhysicsDef@@@Z(this, physDef);
}

/*
==============
BgVehiclePhysicsSentryDrone::ApplyFriction
==============
*/

void __fastcall BgVehiclePhysicsSentryDrone::ApplyFriction(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  ?ApplyFriction@BgVehiclePhysicsSentryDrone@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::Reset
==============
*/

void __fastcall BgVehiclePhysicsGround::Reset(BgVehiclePhysicsGround *this)
{
  ?Reset@BgVehiclePhysicsGround@@UEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsAtvQuadNew::UpdateAnimationParams
==============
*/

bool __fastcall BgVehiclePhysicsAtvQuadNew::UpdateAnimationParams(BgVehiclePhysicsAtvQuadNew *this, int vehicleSeat, VehicleWorldmodelAAnim *outAnimParams)
{
  return ?UpdateAnimationParams@BgVehiclePhysicsAtvQuadNew@@UEBA_NHPEAUVehicleWorldmodelAAnim@@@Z(this, vehicleSeat, outAnimParams);
}

/*
==============
BgVehiclePhysicsGround::Step
==============
*/

bool __fastcall BgVehiclePhysicsGround::Step(BgVehiclePhysicsGround *this, float deltaTime)
{
  return ?Step@BgVehiclePhysicsGround@@MEAA_NM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::Land
==============
*/

void __fastcall BgVehiclePhysicsCarBase::Land(BgVehiclePhysicsCarBase *this, float timeWasInAir)
{
  ?Land@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, timeWasInAir);
}

/*
==============
BgVehiclePhysicsGround::SoundData::FetchSound
==============
*/

unsigned int __fastcall BgVehiclePhysicsGround::SoundData::FetchSound(BgVehiclePhysicsGround::SoundData *this, const char *name)
{
  return ?FetchSound@SoundData@BgVehiclePhysicsGround@@QEBAIPEBD@Z(this, name);
}

/*
==============
BgVehiclePhysicsTank::DeactivationLogic
==============
*/

void __fastcall BgVehiclePhysicsTank::DeactivationLogic(BgVehiclePhysicsTank *this, float deltaTime)
{
  ?DeactivationLogic@BgVehiclePhysicsTank@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::FrictionCar::Setup
==============
*/

void __fastcall BgVehiclePhysicsGround::FrictionCar::Setup(BgVehiclePhysicsGround::FrictionCar *this, const VehicleDef *vehDef)
{
  ?Setup@FrictionCar@BgVehiclePhysicsGround@@QEAAXPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
BgVehiclePhysicsTwoWheeled::UpdateSteeringAngle
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::UpdateSteeringAngle(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  ?UpdateSteeringAngle@BgVehiclePhysicsTwoWheeled@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::AfterPhysicsWorldStep
==============
*/

void __fastcall BgVehiclePhysicsGround::AfterPhysicsWorldStep(BgVehiclePhysicsGround *this, float lastPhysicsStepTime)
{
  ?AfterPhysicsWorldStep@BgVehiclePhysicsGround@@UEAAXM@Z(this, lastPhysicsStepTime);
}

/*
==============
BgVehiclePhysicsCarBase::Setup
==============
*/

bool __fastcall BgVehiclePhysicsCarBase::Setup(BgVehiclePhysicsCarBase *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsCarBase@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsGround::RemoveMovement
==============
*/

void __fastcall BgVehiclePhysicsGround::RemoveMovement(BgVehiclePhysicsGround *this, float planeMovFactor, float yawRotFactor)
{
  ?RemoveMovement@BgVehiclePhysicsGround@@IEAAXMM@Z(this, planeMovFactor, yawRotFactor);
}

/*
==============
BgVehiclePhysicsSentryDrone::ApplySteering
==============
*/

void __fastcall BgVehiclePhysicsSentryDrone::ApplySteering(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  ?ApplySteering@BgVehiclePhysicsSentryDrone@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::CameraConfig::Step
==============
*/

void __fastcall BgVehiclePhysicsCarBase::CameraConfig::Step(BgVehiclePhysicsCarBase::CameraConfig *this, const BgVehiclePhysicsCarBase *vehObj, float deltaTime)
{
  ?Step@CameraConfig@BgVehiclePhysicsCarBase@@QEAAXAEBV2@M@Z(this, vehObj, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::VfxData::Reset
==============
*/

void __fastcall BgVehiclePhysicsGround::VfxData::Reset(BgVehiclePhysicsGround::VfxData *this)
{
  ?Reset@VfxData@BgVehiclePhysicsGround@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsCarBase::ApplySurfaceVelocity
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplySurfaceVelocity(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?ApplySurfaceVelocity@BgVehiclePhysicsCarBase@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::StuntManager::Step
==============
*/

void __fastcall BgVehiclePhysicsGround::StuntManager::Step(BgVehiclePhysicsGround::StuntManager *this, BgVehiclePhysicsGround *vehObj, float deltaTime)
{
  ?Step@StuntManager@BgVehiclePhysicsGround@@QEAAXPEAV2@M@Z(this, vehObj, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::Step
==============
*/

bool __fastcall BgVehiclePhysicsCarBase::Step(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  return ?Step@BgVehiclePhysicsCarBase@@MEAA_NM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::ComputeCollisionZone
==============
*/

int __fastcall BgVehiclePhysicsGround::ComputeCollisionZone(BgVehiclePhysicsGround *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  return ?ComputeCollisionZone@BgVehiclePhysicsGround@@IEAAHAEBUPhysics_SimpleCollisionCallback_Data@@@Z(this, cbData);
}

/*
==============
BgVehiclePhysicsGround::CalcDamage_Player
==============
*/

int __fastcall BgVehiclePhysicsGround::CalcDamage_Player(BgVehiclePhysicsGround *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDmgDir)
{
  return ?CalcDamage_Player@BgVehiclePhysicsGround@@IEBAHAEBUBgVehiclePhysicsDamageSetup@@AEATvec3_t@@@Z(this, dmgInfo, outDmgDir);
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ApplyRumble
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::ApplyRumble(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  ?ApplyRumble@BgVehiclePhysicsAtvQuadNew@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::ApplyFrontalSuspensionForce
==============
*/

void __fastcall BgVehiclePhysicsGround::ApplyFrontalSuspensionForce(BgVehiclePhysicsGround *this, float deltaTime, unsigned int useIndex)
{
  ?ApplyFrontalSuspensionForce@BgVehiclePhysicsGround@@IEAAXMI@Z(this, deltaTime, useIndex);
}

/*
==============
BgVehiclePhysicsTwoWheeled::Step
==============
*/

bool __fastcall BgVehiclePhysicsTwoWheeled::Step(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  return ?Step@BgVehiclePhysicsTwoWheeled@@MEAA_NM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ApplyExtraGravity
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::ApplyExtraGravity(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  ?ApplyExtraGravity@BgVehiclePhysicsAtvQuadNew@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireSteeringDeviation
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetFlatTireSteeringDeviation(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  double result; 

  *(float *)&result = ?GetFlatTireSteeringDeviation@BgVehiclePhysicsCarBase@@IEBAMM@Z(this, deltaTime);
  return result;
}

/*
==============
BgVehiclePhysicsGround::GetExtraGravityVector
==============
*/

void __fastcall BgVehiclePhysicsGround::GetExtraGravityVector(BgVehiclePhysicsGround *this, vec3_t *outGravVec)
{
  ?GetExtraGravityVector@BgVehiclePhysicsGround@@IEAAXAEATvec3_t@@@Z(this, outGravVec);
}

/*
==============
BgVehiclePhysicsCarBase::ComputeWheelAngularSpeed
==============
*/

bool __fastcall BgVehiclePhysicsCarBase::ComputeWheelAngularSpeed(BgVehiclePhysicsCarBase *this, BgVehiclePhysicsGround::Wheel *wheel, float wheelForwardSpeed, float surfFric, float deltaTime)
{
  return ?ComputeWheelAngularSpeed@BgVehiclePhysicsCarBase@@MEAA_NAEAUWheel@BgVehiclePhysicsGround@@MMM@Z(this, wheel, wheelForwardSpeed, surfFric, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::IsInAir
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsInAir(BgVehiclePhysicsGround *this)
{
  return ?IsInAir@BgVehiclePhysicsGround@@UEBA_NXZ(this);
}

/*
==============
BgVehiclePhysicsCarBase::StepClientKeyframe
==============
*/

void __fastcall BgVehiclePhysicsCarBase::StepClientKeyframe(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?StepClientKeyframe@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::Steering::LerpYaw
==============
*/

void __fastcall BgVehiclePhysicsGround::Steering::LerpYaw(BgVehiclePhysicsGround::Steering *this, const BgVehiclePhysicsGround *vehicle, float deltaTime)
{
  ?LerpYaw@Steering@BgVehiclePhysicsGround@@QEAAXAEBV2@M@Z(this, vehicle, deltaTime);
}

/*
==============
BgVehiclePhysicsTank::ApplyEngineForce
==============
*/

void __fastcall BgVehiclePhysicsTank::ApplyEngineForce(BgVehiclePhysicsTank *this, float deltaTime)
{
  ?ApplyEngineForce@BgVehiclePhysicsTank@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::BodyIsHeavy
==============
*/

bool __fastcall BgVehiclePhysicsGround::BodyIsHeavy(BgVehiclePhysicsGround *this, unsigned int bodyId)
{
  return ?BodyIsHeavy@BgVehiclePhysicsGround@@IEBA_NI@Z(this, bodyId);
}

/*
==============
BgVehiclePhysicsGround::ReactToServerEvent
==============
*/

void __fastcall BgVehiclePhysicsGround::ReactToServerEvent(BgVehiclePhysicsGround *this, unsigned int eventType, unsigned int eventParam)
{
  ?ReactToServerEvent@BgVehiclePhysicsGround@@UEAAXII@Z(this, eventType, eventParam);
}

/*
==============
BgVehiclePhysicsTank::ApplyFriction
==============
*/

void __fastcall BgVehiclePhysicsTank::ApplyFriction(BgVehiclePhysicsTank *this, float deltaTime)
{
  ?ApplyFriction@BgVehiclePhysicsTank@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::RumbleData::Set
==============
*/

void __fastcall BgVehiclePhysicsGround::RumbleData::Set(BgVehiclePhysicsGround::RumbleData *this, float _intensity, float duration)
{
  ?Set@RumbleData@BgVehiclePhysicsGround@@QEAAXMM@Z(this, _intensity, duration);
}

/*
==============
BgVehiclePhysicsGround::ComputeSuspensionForces_SingleWheel
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeSuspensionForces_SingleWheel(BgVehiclePhysicsGround *this, float deltaTime, BgVehiclePhysicsGround::Wheel *wheel, unsigned int windex)
{
  ?ComputeSuspensionForces_SingleWheel@BgVehiclePhysicsGround@@IEAAXMAEAUWheel@1@I@Z(this, deltaTime, wheel, windex);
}

/*
==============
BgVehiclePhysicsCarBase::UpdateSteeringAngle
==============
*/

void __fastcall BgVehiclePhysicsCarBase::UpdateSteeringAngle(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?UpdateSteeringAngle@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::SetupWheelsFromBones
==============
*/

void __fastcall BgVehiclePhysicsGround::SetupWheelsFromBones(BgVehiclePhysicsGround *this, const scr_string_t *wheelTags)
{
  ?SetupWheelsFromBones@BgVehiclePhysicsGround@@IEAAXPEBW4scr_string_t@@@Z(this, wheelTags);
}

/*
==============
BgVehiclePhysicsCarBase::InterpolateAnimParams
==============
*/

void __fastcall BgVehiclePhysicsCarBase::InterpolateAnimParams(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?InterpolateAnimParams@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::UpdateTimeInAir
==============
*/

void __fastcall BgVehiclePhysicsGround::UpdateTimeInAir(BgVehiclePhysicsGround *this, float deltaTime)
{
  ?UpdateTimeInAir@BgVehiclePhysicsGround@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTwoWheeled::ApplyEngine
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::ApplyEngine(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  ?ApplyEngine@BgVehiclePhysicsTwoWheeled@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::Engine::Setup
==============
*/

void __fastcall BgVehiclePhysicsGround::Engine::Setup(BgVehiclePhysicsGround::Engine *this, const VehicleDef *vehDef)
{
  ?Setup@Engine@BgVehiclePhysicsGround@@QEAAXPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
BgVehiclePhysicsTwoWheeled::Setup
==============
*/

bool __fastcall BgVehiclePhysicsTwoWheeled::Setup(BgVehiclePhysicsTwoWheeled *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsTwoWheeled@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsGround::SoundData::Reset
==============
*/

void __fastcall BgVehiclePhysicsGround::SoundData::Reset(BgVehiclePhysicsGround::SoundData *this)
{
  ?Reset@SoundData@BgVehiclePhysicsGround@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaWithSpring
==============
*/

void __fastcall BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaWithSpring(BgVehiclePhysicsCarBase::CameraConfig *this, const BgVehiclePhysicsCarBase *vehObj, float normalSpeed, float deltaTime)
{
  ?StepFovDeltaWithSpring@CameraConfig@BgVehiclePhysicsCarBase@@QEAAXAEBV2@MM@Z(this, vehObj, normalSpeed, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::DampVelocitiesAndStop
==============
*/

void __fastcall BgVehiclePhysicsCarBase::DampVelocitiesAndStop(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?DampVelocitiesAndStop@BgVehiclePhysicsCarBase@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTwoWheeled::SupportsFeature
==============
*/

bool __fastcall BgVehiclePhysicsTwoWheeled::SupportsFeature(BgVehiclePhysicsTwoWheeled *this, BgVehiclePhysicsFeature feat)
{
  return ?SupportsFeature@BgVehiclePhysicsTwoWheeled@@UEBA_NW4BgVehiclePhysicsFeature@@@Z(this, feat);
}

/*
==============
BgVehiclePhysicsGround::ComputeFrontalSuspensionForce
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeFrontalSuspensionForce(BgVehiclePhysicsGround *this, float deltaTime, float frontalOffset, unsigned int useIndex)
{
  ?ComputeFrontalSuspensionForce@BgVehiclePhysicsGround@@IEAAXMMI@Z(this, deltaTime, frontalOffset, useIndex);
}

/*
==============
BgVehiclePhysicsGround::TryStabilizeAngles
==============
*/

void __fastcall BgVehiclePhysicsGround::TryStabilizeAngles(BgVehiclePhysicsGround *this, float deltaTime, float rollSpeed, float pitchSpeed)
{
  ?TryStabilizeAngles@BgVehiclePhysicsGround@@IEAAXMMM@Z(this, deltaTime, rollSpeed, pitchSpeed);
}

/*
==============
BgVehiclePhysicsSentryDrone::FireWeapon
==============
*/

void __fastcall BgVehiclePhysicsSentryDrone::FireWeapon(BgVehiclePhysicsSentryDrone *this, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  ?FireWeapon@BgVehiclePhysicsSentryDrone@@UEAAXAEBTvec3_t@@0PEBUWeaponDef@@@Z(this, dirWs, atWs, weapDef);
}

/*
==============
BgVehiclePhysicsGround::StuntManager::Setup
==============
*/

void __fastcall BgVehiclePhysicsGround::StuntManager::Setup(BgVehiclePhysicsGround::StuntManager *this, const VehicleDef *vehDef)
{
  ?Setup@StuntManager@BgVehiclePhysicsGround@@QEAAXPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireFactorOnSteering
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetFlatTireFactorOnSteering(BgVehiclePhysicsCarBase *this)
{
  double result; 

  *(float *)&result = ?GetFlatTireFactorOnSteering@BgVehiclePhysicsCarBase@@IEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsCarBase::Jump
==============
*/

void __fastcall BgVehiclePhysicsCarBase::Jump(BgVehiclePhysicsCarBase *this, float afterThisTime)
{
  ?Jump@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, afterThisTime);
}

/*
==============
BgVehiclePhysicsGround::ReactToScriptableEvent
==============
*/

void __fastcall BgVehiclePhysicsGround::ReactToScriptableEvent(BgVehiclePhysicsGround *this, const ScriptableEventParams *eventParams, const ScriptableEventDef *eventDef)
{
  ?ReactToScriptableEvent@BgVehiclePhysicsGround@@UEAAXPEBUScriptableEventParams@@PEBUScriptableEventDef@@@Z(this, eventParams, eventDef);
}

/*
==============
BgVehiclePhysicsCarBase::ApplySteering
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplySteering(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?ApplySteering@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::StabilizeAngles
==============
*/

void __fastcall BgVehiclePhysicsCarBase::StabilizeAngles(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?StabilizeAngles@BgVehiclePhysicsCarBase@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTank::SupportsFeature
==============
*/

bool __fastcall BgVehiclePhysicsTank::SupportsFeature(BgVehiclePhysicsTank *this, BgVehiclePhysicsFeature feat)
{
  return ?SupportsFeature@BgVehiclePhysicsTank@@UEBA_NW4BgVehiclePhysicsFeature@@@Z(this, feat);
}

/*
==============
BgVehiclePhysicsCarBase::GetForwardSpeedRelative
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetForwardSpeedRelative(BgVehiclePhysicsCarBase *this)
{
  double result; 

  *(float *)&result = ?GetForwardSpeedRelative@BgVehiclePhysicsCarBase@@IEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsGround::FrictionCar::Reset
==============
*/

void __fastcall BgVehiclePhysicsGround::FrictionCar::Reset(BgVehiclePhysicsGround::FrictionCar *this)
{
  ?Reset@FrictionCar@BgVehiclePhysicsGround@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsGround::FrictionCar::Step
==============
*/

void __fastcall BgVehiclePhysicsGround::FrictionCar::Step(BgVehiclePhysicsGround::FrictionCar *this, const BgVehiclePhysicsGround *vehicle, float surfFric, float deltaTime)
{
  ?Step@FrictionCar@BgVehiclePhysicsGround@@QEAAXAEBV2@MM@Z(this, vehicle, surfFric, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::ApplyFriction
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplyFriction(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?ApplyFriction@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsSentryDrone::Step
==============
*/

bool __fastcall BgVehiclePhysicsSentryDrone::Step(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  return ?Step@BgVehiclePhysicsSentryDrone@@MEAA_NM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::CollisionImpulseCallback
==============
*/

void __fastcall BgVehiclePhysicsGround::CollisionImpulseCallback(BgVehiclePhysicsGround *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  ?CollisionImpulseCallback@BgVehiclePhysicsGround@@UEAAXAEBUPhysics_SimpleCollisionCallback_Data@@@Z(this, cbData);
}

/*
==============
BgVehiclePhysicsCarBase::GetNormalSpeedRelative
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetNormalSpeedRelative(BgVehiclePhysicsCarBase *this)
{
  double result; 

  *(float *)&result = ?GetNormalSpeedRelative@BgVehiclePhysicsCarBase@@IEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsTreadedBase::CreatePhysics
==============
*/

bool __fastcall BgVehiclePhysicsTreadedBase::CreatePhysics(BgVehiclePhysicsTreadedBase *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  return ?CreatePhysics@BgVehiclePhysicsTreadedBase@@UEAA_NPEBUVehiclePhysicsDef@@@Z(this, vehPhysicsDef);
}

/*
==============
BgVehiclePhysicsGround::GetSoundValues
==============
*/

void __fastcall BgVehiclePhysicsGround::GetSoundValues(BgVehiclePhysicsGround *this, const int clientNum, int time, float *outThrottle, float *outBrake, float *outRpmNormal, int *outGear, float *outMph)
{
  ?GetSoundValues@BgVehiclePhysicsGround@@UEBAXHHAEAM00AEAH0@Z(this, clientNum, time, outThrottle, outBrake, outRpmNormal, outGear, outMph);
}

/*
==============
BgVehiclePhysicsTreadedBase::DampVelocitiesAndStop
==============
*/

void __fastcall BgVehiclePhysicsTreadedBase::DampVelocitiesAndStop(BgVehiclePhysicsTreadedBase *this, float deltaTime)
{
  ?DampVelocitiesAndStop@BgVehiclePhysicsTreadedBase@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTechnical::UpdateAnimationParams
==============
*/

bool __fastcall BgVehiclePhysicsTechnical::UpdateAnimationParams(BgVehiclePhysicsTechnical *this, int vehicleSeat, VehicleWorldmodelAAnim *outAnimParams)
{
  return ?UpdateAnimationParams@BgVehiclePhysicsTechnical@@UEBA_NHPEAUVehicleWorldmodelAAnim@@@Z(this, vehicleSeat, outAnimParams);
}

/*
==============
BgVehiclePhysicsGround::StartPlayerControlling
==============
*/

void __fastcall BgVehiclePhysicsGround::StartPlayerControlling(BgVehiclePhysicsGround *this)
{
  ?StartPlayerControlling@BgVehiclePhysicsGround@@MEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsGround::ApplySingleSuspensionForce
==============
*/

void __fastcall BgVehiclePhysicsGround::ApplySingleSuspensionForce(BgVehiclePhysicsGround *this, float deltaTime, const BgVehiclePhysicsGround::Wheel *wheel)
{
  ?ApplySingleSuspensionForce@BgVehiclePhysicsGround@@IEAAXMAEBUWheel@1@@Z(this, deltaTime, wheel);
}

/*
==============
BgVehiclePhysicsGround::IsOtherKeyframedEntity
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsOtherKeyframedEntity(BgVehiclePhysicsGround *this, unsigned int bodyId, __int16 entTypeToCompare, vec3_t *outLinVel)
{
  return ?IsOtherKeyframedEntity@BgVehiclePhysicsGround@@IEBA_NIFAEATvec3_t@@@Z(this, bodyId, entTypeToCompare, outLinVel);
}

/*
==============
BgVehiclePhysicsTank::ApplyRumble
==============
*/

void __fastcall BgVehiclePhysicsTank::ApplyRumble(BgVehiclePhysicsTank *this, float deltaTime)
{
  ?ApplyRumble@BgVehiclePhysicsTank@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::ComputeChassisVibrationNoise
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeChassisVibrationNoise(BgVehiclePhysicsGround *this, int time, vec3_t *outNoiseDisp)
{
  ?ComputeChassisVibrationNoise@BgVehiclePhysicsGround@@UEBAXHAEATvec3_t@@@Z(this, time, outNoiseDisp);
}

/*
==============
BgVehiclePhysicsCarBase::CanDampVelocities
==============
*/

bool __fastcall BgVehiclePhysicsCarBase::CanDampVelocities(BgVehiclePhysicsCarBase *this)
{
  return ?CanDampVelocities@BgVehiclePhysicsCarBase@@IEBA_NXZ(this);
}

/*
==============
BgVehiclePhysicsGround::GetSoundHorn
==============
*/

unsigned int __fastcall BgVehiclePhysicsGround::GetSoundHorn(BgVehiclePhysicsGround *this)
{
  return ?GetSoundHorn@BgVehiclePhysicsGround@@UEBAIXZ(this);
}

/*
==============
BgVehiclePhysicsGround::ComputeAverageWheelValues
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeAverageWheelValues(BgVehiclePhysicsGround *this)
{
  ?ComputeAverageWheelValues@BgVehiclePhysicsGround@@IEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsGround::PostStep
==============
*/

void __fastcall BgVehiclePhysicsGround::PostStep(BgVehiclePhysicsGround *this, float deltaTime)
{
  ?PostStep@BgVehiclePhysicsGround@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsSentryDrone::UpdatePlayerInputControls
==============
*/

void __fastcall BgVehiclePhysicsSentryDrone::UpdatePlayerInputControls(BgVehiclePhysicsSentryDrone *this, const usercmd_s *cmd, const playerState_s *ps)
{
  ?UpdatePlayerInputControls@BgVehiclePhysicsSentryDrone@@UEAAXPEBUusercmd_s@@PEBUplayerState_s@@@Z(this, cmd, ps);
}

/*
==============
BgVehiclePhysicsGround::RumbleData::Add
==============
*/

void __fastcall BgVehiclePhysicsGround::RumbleData::Add(BgVehiclePhysicsGround::RumbleData *this, const BgVehiclePhysicsGround *vehicle, float maxDur, float maxScale)
{
  ?Add@RumbleData@BgVehiclePhysicsGround@@QEAAXAEBV2@MM@Z(this, vehicle, maxDur, maxScale);
}

/*
==============
BgVehiclePhysicsGround::NeedComputeSuspension
==============
*/

bool __fastcall BgVehiclePhysicsGround::NeedComputeSuspension(BgVehiclePhysicsGround *this)
{
  return ?NeedComputeSuspension@BgVehiclePhysicsGround@@IEAA_NXZ(this);
}

/*
==============
BgVehiclePhysicsCarBase::ApplyEngine
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplyEngine(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?ApplyEngine@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTank::Gravity
==============
*/

void __fastcall BgVehiclePhysicsTank::Gravity(BgVehiclePhysicsTank *this, float deltaTime)
{
  ?Gravity@BgVehiclePhysicsTank@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::StepClientKeyframe
==============
*/

void __fastcall BgVehiclePhysicsGround::StepClientKeyframe(BgVehiclePhysicsGround *this, float deltaTime)
{
  ?StepClientKeyframe@BgVehiclePhysicsGround@@UEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::ApplyRumble
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplyRumble(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?ApplyRumble@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTank::UpdatePlayerInputControls
==============
*/

void __fastcall BgVehiclePhysicsTank::UpdatePlayerInputControls(BgVehiclePhysicsTank *this, const usercmd_s *cmd, const playerState_s *ps)
{
  ?UpdatePlayerInputControls@BgVehiclePhysicsTank@@UEAAXPEBUusercmd_s@@PEBUplayerState_s@@@Z(this, cmd, ps);
}

/*
==============
BgVehiclePhysicsCarBase::SupportsFeature
==============
*/

bool __fastcall BgVehiclePhysicsCarBase::SupportsFeature(BgVehiclePhysicsCarBase *this, BgVehiclePhysicsFeature feat)
{
  return ?SupportsFeature@BgVehiclePhysicsCarBase@@UEBA_NW4BgVehiclePhysicsFeature@@@Z(this, feat);
}

/*
==============
BgVehiclePhysicsGround::SoundData::Setup
==============
*/

void __fastcall BgVehiclePhysicsGround::SoundData::Setup(BgVehiclePhysicsGround::SoundData *this, const VehicleDef *vehDef)
{
  ?Setup@SoundData@BgVehiclePhysicsGround@@QEAAXPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
BgVehiclePhysicsCarBase::StepDvarConfiguration
==============
*/

void __fastcall BgVehiclePhysicsCarBase::StepDvarConfiguration(BgVehiclePhysicsCarBase *this)
{
  ?StepDvarConfiguration@BgVehiclePhysicsCarBase@@IEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsSentryDrone::ComputeEngineSound
==============
*/

void __fastcall BgVehiclePhysicsSentryDrone::ComputeEngineSound(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  ?ComputeEngineSound@BgVehiclePhysicsSentryDrone@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTank::Step
==============
*/

bool __fastcall BgVehiclePhysicsTank::Step(BgVehiclePhysicsTank *this, float deltaTime)
{
  return ?Step@BgVehiclePhysicsTank@@MEAA_NM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::CalcDamage_Scriptable
==============
*/

int __fastcall BgVehiclePhysicsGround::CalcDamage_Scriptable(BgVehiclePhysicsGround *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDmgDir)
{
  return ?CalcDamage_Scriptable@BgVehiclePhysicsGround@@IEBAHAEBUBgVehiclePhysicsDamageSetup@@AEATvec3_t@@@Z(this, dmgInfo, outDmgDir);
}

/*
==============
BgVehiclePhysicsGround::RumbleData::Step
==============
*/

void __fastcall BgVehiclePhysicsGround::RumbleData::Step(BgVehiclePhysicsGround::RumbleData *this, float deltaTime)
{
  ?Step@RumbleData@BgVehiclePhysicsGround@@QEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTank::StepClientKeyframe
==============
*/

void __fastcall BgVehiclePhysicsTank::StepClientKeyframe(BgVehiclePhysicsTank *this, float deltaTime)
{
  ?StepClientKeyframe@BgVehiclePhysicsTank@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::DeactivationLogic
==============
*/

void __fastcall BgVehiclePhysicsCarBase::DeactivationLogic(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?DeactivationLogic@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::ApplySuspensionForces
==============
*/

void __fastcall BgVehiclePhysicsGround::ApplySuspensionForces(BgVehiclePhysicsGround *this, float deltaTime)
{
  ?ApplySuspensionForces@BgVehiclePhysicsGround@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::Engine::Step
==============
*/

void __fastcall BgVehiclePhysicsGround::Engine::Step(BgVehiclePhysicsGround::Engine *this, const BgVehiclePhysicsGround *vehicle, float deltaTime)
{
  ?Step@Engine@BgVehiclePhysicsGround@@QEAAXAEBV2@M@Z(this, vehicle, deltaTime);
}

/*
==============
BgVehiclePhysicsTwoWheeled::ApplySteering
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::ApplySteering(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  ?ApplySteering@BgVehiclePhysicsTwoWheeled@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::FireWeapon
==============
*/

void __fastcall BgVehiclePhysicsCarBase::FireWeapon(BgVehiclePhysicsCarBase *this, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  ?FireWeapon@BgVehiclePhysicsCarBase@@UEAAXAEBTvec3_t@@0PEBUWeaponDef@@@Z(this, dirWs, atWs, weapDef);
}

/*
==============
BgVehiclePhysicsGround::Engine::Reset
==============
*/

void __fastcall BgVehiclePhysicsGround::Engine::Reset(BgVehiclePhysicsGround::Engine *this)
{
  ?Reset@Engine@BgVehiclePhysicsGround@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsCarBase::ApplySteeringWithFlatTire
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplySteeringWithFlatTire(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?ApplySteeringWithFlatTire@BgVehiclePhysicsCarBase@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::ComputeSuspensionForces
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeSuspensionForces(BgVehiclePhysicsGround *this, float deltaTime)
{
  ?ComputeSuspensionForces@BgVehiclePhysicsGround@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTank::ComputeEngineSound
==============
*/

void __fastcall BgVehiclePhysicsTank::ComputeEngineSound(BgVehiclePhysicsTank *this, float deltaTime)
{
  ?ComputeEngineSound@BgVehiclePhysicsTank@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::ModifyMassFactorsOnContact
==============
*/

bool __fastcall BgVehiclePhysicsGround::ModifyMassFactorsOnContact(BgVehiclePhysicsGround *this, const BgVehicleCollisionCallbackInfo *collInfo, int indexCollInfo, vec4_t *outMassFactors)
{
  return ?ModifyMassFactorsOnContact@BgVehiclePhysicsGround@@UEBA_NAEBUBgVehicleCollisionCallbackInfo@@HAEATvec4_t@@@Z(this, collInfo, indexCollInfo, outMassFactors);
}

/*
==============
BgVehiclePhysicsCarBase::AdjustCenterOfMass
==============
*/

void __fastcall BgVehiclePhysicsCarBase::AdjustCenterOfMass(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?AdjustCenterOfMass@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::SetSoundHorn
==============
*/

void __fastcall BgVehiclePhysicsGround::SetSoundHorn(BgVehiclePhysicsGround *this, unsigned int hornHash)
{
  ?SetSoundHorn@BgVehiclePhysicsGround@@UEAAXI@Z(this, hornHash);
}

/*
==============
BgVehiclePhysicsAtvQuadNew::StepClientKeyframe
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::StepClientKeyframe(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  ?StepClientKeyframe@BgVehiclePhysicsAtvQuadNew@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::IsAxleBodyCreationEnabled
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsAxleBodyCreationEnabled(BgVehiclePhysicsGround *this)
{
  return ?IsAxleBodyCreationEnabled@BgVehiclePhysicsGround@@IEBA_NXZ(this);
}

/*
==============
BgVehiclePhysicsGround::Steering::Setup
==============
*/

void __fastcall BgVehiclePhysicsGround::Steering::Setup(BgVehiclePhysicsGround::Steering *this, const VehicleDef *vehDef)
{
  ?Setup@Steering@BgVehiclePhysicsGround@@QEAAXPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
BgVehiclePhysicsSentryDrone::Setup
==============
*/

bool __fastcall BgVehiclePhysicsSentryDrone::Setup(BgVehiclePhysicsSentryDrone *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsSentryDrone@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsGround::AdjustTopSpeedReverse
==============
*/

void __fastcall BgVehiclePhysicsGround::AdjustTopSpeedReverse(BgVehiclePhysicsGround *this)
{
  ?AdjustTopSpeedReverse@BgVehiclePhysicsGround@@IEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsGround::StuntManager::Reset
==============
*/

void __fastcall BgVehiclePhysicsGround::StuntManager::Reset(BgVehiclePhysicsGround::StuntManager *this)
{
  ?Reset@StuntManager@BgVehiclePhysicsGround@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ComputeEngineSound
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::ComputeEngineSound(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  ?ComputeEngineSound@BgVehiclePhysicsAtvQuadNew@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTreadedBase::DeactivationLogic
==============
*/

void __fastcall BgVehiclePhysicsTreadedBase::DeactivationLogic(BgVehiclePhysicsTreadedBase *this, float deltaTime)
{
  ?DeactivationLogic@BgVehiclePhysicsTreadedBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::FrictionCar::StartControlling
==============
*/

void __fastcall BgVehiclePhysicsGround::FrictionCar::StartControlling(BgVehiclePhysicsGround::FrictionCar *this)
{
  ?StartControlling@FrictionCar@BgVehiclePhysicsGround@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsGround::UpdateControlTimes
==============
*/

void __fastcall BgVehiclePhysicsGround::UpdateControlTimes(BgVehiclePhysicsGround *this, float deltaTime)
{
  ?UpdateControlTimes@BgVehiclePhysicsGround@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTreadedBase::Setup
==============
*/

bool __fastcall BgVehiclePhysicsTreadedBase::Setup(BgVehiclePhysicsTreadedBase *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsTreadedBase@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsSentryDrone::ApplyEngine
==============
*/

void __fastcall BgVehiclePhysicsSentryDrone::ApplyEngine(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  ?ApplyEngine@BgVehiclePhysicsSentryDrone@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTreadedBase::Reset
==============
*/

void __fastcall BgVehiclePhysicsTreadedBase::Reset(BgVehiclePhysicsTreadedBase *this)
{
  ?Reset@BgVehiclePhysicsTreadedBase@@UEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsGround::Steering::ComputeAxis
==============
*/

void __fastcall BgVehiclePhysicsGround::Steering::ComputeAxis(BgVehiclePhysicsGround::Steering *this, const BgVehiclePhysicsGround *vehicle, unsigned int wheelIndex, vec3_t *forwardWs, vec3_t *sideWs, float ackRatio, float yawMult)
{
  ?ComputeAxis@Steering@BgVehiclePhysicsGround@@QEBAXAEBV2@IPEATvec3_t@@1MM@Z(this, vehicle, wheelIndex, forwardWs, sideWs, ackRatio, yawMult);
}

/*
==============
BgVehiclePhysicsCarBase::ApplySteeringLegacy
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplySteeringLegacy(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?ApplySteeringLegacy@BgVehiclePhysicsCarBase@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ApplyAnimNoise
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::ApplyAnimNoise(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  ?ApplyAnimNoise@BgVehiclePhysicsAtvQuadNew@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaDamped
==============
*/

void __fastcall BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaDamped(BgVehiclePhysicsCarBase::CameraConfig *this, const BgVehiclePhysicsCarBase *vehObj, float normalSpeed, float deltaTime)
{
  ?StepFovDeltaDamped@CameraConfig@BgVehiclePhysicsCarBase@@QEAAXAEBV2@MM@Z(this, vehObj, normalSpeed, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::SupportsFeature
==============
*/

bool __fastcall BgVehiclePhysicsGround::SupportsFeature(BgVehiclePhysicsGround *this, BgVehiclePhysicsFeature feat)
{
  return ?SupportsFeature@BgVehiclePhysicsGround@@UEBA_NW4BgVehiclePhysicsFeature@@@Z(this, feat);
}

/*
==============
BgVehiclePhysicsTank::ApplySteering
==============
*/

void __fastcall BgVehiclePhysicsTank::ApplySteering(BgVehiclePhysicsTank *this, float deltaTime)
{
  ?ApplySteering@BgVehiclePhysicsTank@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::DebugDraw
==============
*/

void __fastcall BgVehiclePhysicsGround::DebugDraw(BgVehiclePhysicsGround *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DebugDraw@BgVehiclePhysicsGround@@UEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
BgVehiclePhysicsGround::ComputeApproxHalfSize
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeApproxHalfSize(BgVehiclePhysicsGround *this, vec3_t *outHalfSize)
{
  ?ComputeApproxHalfSize@BgVehiclePhysicsGround@@IEBAXAEATvec3_t@@@Z(this, outHalfSize);
}

/*
==============
BgVehiclePhysicsGround::StopPlayerControlling
==============
*/

void __fastcall BgVehiclePhysicsGround::StopPlayerControlling(BgVehiclePhysicsGround *this)
{
  ?StopPlayerControlling@BgVehiclePhysicsGround@@MEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsGround::RumbleData::Add
==============
*/

void __fastcall BgVehiclePhysicsGround::RumbleData::Add(BgVehiclePhysicsGround::RumbleData *this, const BgVehiclePhysicsGround *vehicle, double maxDur, float maxScale)
{
  double NormalSpeedPlane; 
  double v7; 

  _XMM7 = *(_OWORD *)&maxDur;
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(&vehicle->BgVehiclePhysics);
  v7 = I_fclamp(*(float *)&NormalSpeedPlane * maxScale, 0.0, 1.0);
  __asm { vmaxss  xmm1, xmm7, xmm6 }
  this->m_t = *(float *)&maxDur;
  this->m_duration = *(float *)&_XMM1;
  this->m_intensity = *(float *)&v7;
}

/*
==============
BgVehiclePhysicsCarBase::AdjustCenterOfMass
==============
*/
void BgVehiclePhysicsCarBase::AdjustCenterOfMass(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  bool v2; 
  float v4; 
  float v5; 
  float v6; 
  double Value; 
  float v8; 
  double v9; 
  int v10; 
  float v11; 
  double v12; 
  double v13; 
  unsigned int m_vehicleAnimProfile; 
  int v15; 
  double UpInclination; 
  vec3_t offsetLs; 

  v2 = this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO;
  v4 = (float)(this->m_steering.m_yawVisual / this->m_steering.m_yawMaxAngle) * dispHoriz;
  v5 = this->m_centerOfMassOffsetOriginalLs.v[2];
  v6 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)this->m_centerOfMassOffsetOriginalLs.v, (__m128)*(unsigned __int64 *)this->m_centerOfMassOffsetOriginalLs.v, 85).m128_f32[0];
  *(_QWORD *)offsetLs.v = *(_QWORD *)this->m_centerOfMassOffsetOriginalLs.v;
  offsetLs.v[1] = v6 + v4;
  offsetLs.v[2] = v5;
  if ( v2 )
  {
    if ( this->m_timeSinceLastCollision > 0.5 )
    {
      Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 5u);
      v8 = *(float *)&Value;
      v9 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
      v10 = LODWORD(v9);
      v11 = (float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]);
      I_fclamp(v11, 0.0, 1.0);
      v12 = I_fclamp(COERCE_FLOAT(v10 & _xmm), 0.5, 1.0);
      v13 = I_fclamp((float)(*(float *)&v12 * (float)(v11 * dispBig)) * v8, COERCE_FLOAT(LODWORD(dispBig) ^ _xmm), 9.0);
      offsetLs.v[0] = *(float *)&v13 + offsetLs.v[0];
    }
  }
  else if ( this->IsInAir(this) && this->m_timeInAir >= 0.0 )
  {
    m_vehicleAnimProfile = this->m_vehicleAnimProfile;
    if ( m_vehicleAnimProfile > 0x13 || (v15 = 720916, !_bittest(&v15, m_vehicleAnimProfile)) )
    {
      UpInclination = BgVehiclePhysics::GetUpInclination(this);
      offsetLs.v[2] = (float)((float)(1.0 - *(float *)&UpInclination) * 10.0) + this->m_centerOfMassOffsetOriginalLs.v[2];
    }
  }
  BgVehiclePhysics::OffsetCenterOfMass(this, &offsetLs, 0);
}

/*
==============
BgVehiclePhysicsGround::AdjustExtraGravityFactor
==============
*/
void BgVehiclePhysicsGround::AdjustExtraGravityFactor(BgVehiclePhysicsGround *this, float factor)
{
  __int64 v3; 
  int v4; 
  int v5; 
  vec3_t gravity; 

  Physics_GetGravity((const Physics_WorldId)this->m_worldId, &gravity);
  v3 = Vec3MajorAxis(&gravity);
  *(_QWORD *)this->m_extraGravityFactor.v = 0i64;
  this->m_extraGravityFactor.v[2] = 0.0;
  if ( (unsigned int)v3 >= 3 )
  {
    v5 = 3;
    v4 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  this->m_extraGravityFactor.v[v3] = factor;
}

/*
==============
BgVehiclePhysicsGround::AdjustTopSpeedReverse
==============
*/
void BgVehiclePhysicsGround::AdjustTopSpeedReverse(BgVehiclePhysicsGround *this)
{
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v3; 
  __int32 v4; 
  const dvar_t *v5; 
  const char *v6; 
  float value; 

  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
  {
    v5 = DVARFLT_bg_atangoReverseTopSpeedMPH;
    if ( DVARFLT_bg_atangoReverseTopSpeedMPH )
      goto LABEL_15;
    v6 = "bg_atangoReverseTopSpeedMPH";
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
      __debugbreak();
    goto LABEL_15;
  }
  v3 = m_vehicleAnimProfile - 1;
  if ( !v3 )
  {
    v5 = DVARFLT_bg_tromeoReverseTopSpeedMPH;
    if ( DVARFLT_bg_tromeoReverseTopSpeedMPH )
      goto LABEL_15;
    v6 = "bg_tromeoReverseTopSpeedMPH";
    goto LABEL_13;
  }
  v4 = v3 - 10;
  if ( !v4 )
  {
    v5 = DVARFLT_bg_dechoReverseTopSpeedMPH;
    if ( DVARFLT_bg_dechoReverseTopSpeedMPH )
      goto LABEL_15;
    v6 = "bg_dechoReverseTopSpeedMPH";
    goto LABEL_13;
  }
  if ( v4 != 8 )
    return;
  v5 = DVARFLT_bg_mkiloReverseTopSpeedMPH;
  if ( !DVARFLT_bg_mkiloReverseTopSpeedMPH )
  {
    v6 = "bg_mkiloReverseTopSpeedMPH";
    goto LABEL_13;
  }
LABEL_15:
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  if ( value >= 0.0 )
    this->m_topSpeedForward.v[1] = value * 17.6;
}

/*
==============
BgVehiclePhysicsGround::AfterPhysicsWorldStep
==============
*/
void BgVehiclePhysicsGround::AfterPhysicsWorldStep(BgVehiclePhysicsGround *this, float lastPhysicsStepTime)
{
  unsigned int v3; 
  unsigned int *m_axleBodyIds; 
  __int64 v5; 
  unsigned int PhysicsBodyId; 
  signed int m_deferredBlowUpTireIndex; 
  vec3_t position; 
  vec4_t orientation; 
  vec3_t v10; 
  vec4_t v11; 

  BgVehiclePhysics::AfterPhysicsWorldStep(this, lastPhysicsStepTime);
  if ( BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
  {
    if ( BgVehiclePhysicsGround::IsAxleBodyCreationEnabled(this) )
    {
      v3 = this->m_wheelCount >> 1;
      if ( v3 )
      {
        m_axleBodyIds = this->m_axleBodyIds;
        v5 = v3;
        do
        {
          if ( (*m_axleBodyIds & 0xFFFFFF) != 0xFFFFFF )
          {
            PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
            Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, PhysicsBodyId, &position, &orientation);
            Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, *m_axleBodyIds, &v10, &v11);
            if ( VecNCompareCustomEpsilon(position.v, v10.v, 0.001, 3) && VecNCompareCustomEpsilon(v11.v, orientation.v, 0.001, 4) )
              Physics_SetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, *m_axleBodyIds, &vec3_origin, &vec3_origin);
            else
              Physics_KeyframeRigidBodyTo(this->m_worldId, *m_axleBodyIds, &position, &orientation, 1.0, 1, 0, 0.0);
          }
          ++m_axleBodyIds;
          --v5;
        }
        while ( v5 );
      }
    }
    m_deferredBlowUpTireIndex = this->m_deferredBlowUpTireIndex;
    if ( m_deferredBlowUpTireIndex >= 0 && m_deferredBlowUpTireIndex < this->m_wheelCount )
      BgVehiclePhysicsGround::BlowUpTire(this, m_deferredBlowUpTireIndex);
    this->m_deferredBlowUpTireIndex = -1;
  }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ApplyAnimNoise
==============
*/
void BgVehiclePhysicsAtvQuadNew::ApplyAnimNoise(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  float m_timeInAir; 
  __int128 v5; 
  unsigned int v7; 
  unsigned int m_simulationFrame; 
  double NormalSpeedPlane; 
  float v10; 
  double PerlinNoise2dValue; 
  const dvar_t *v12; 

  if ( !this->m_wheelInContactCount || BgVehiclePhysicsGround::IsReversing(this) || (m_timeInAir = this->m_timeInAir, m_timeInAir <= 0.0) && m_timeInAir >= COERCE_FLOAT(COERCE_UNSIGNED_INT(ATV_AFTER_LANDING_TIME * 2.0) ^ _xmm) )
  {
    this->m_animPitch.v[2] = 0.0;
    this->m_animYaw.v[2] = 0.0;
  }
  else
  {
    v5 = LODWORD(cm.broadphaseMax.v[1]);
    *(float *)&v5 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
    _XMM3 = v5;
    __asm { vmaxss  xmm0, xmm3, xmm2 }
    v7 = (int)*(float *)&_XMM0;
    if ( (int)*(float *)&_XMM0 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 4982, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
      __debugbreak();
    m_simulationFrame = this->m_simulationFrame;
    NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
    v10 = NormalizeRange(*(float *)&NormalSpeedPlane, 0.1);
    PerlinNoise2dValue = Physics_GetPerlinNoise2dValue(13, v7, m_simulationFrame % v7, m_simulationFrame / v7 % v7);
    v12 = DCONST_DVARFLT_bg_vehAtvNoiseAnimNoisePitch;
    if ( !DCONST_DVARFLT_bg_vehAtvNoiseAnimNoisePitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAtvNoiseAnimNoisePitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    this->m_animPitch.v[2] = (float)(*(float *)&PerlinNoise2dValue * (float)(v10 * v10)) * v12->current.value;
  }
}

/*
==============
BgVehiclePhysicsCarBase::ApplyEngine
==============
*/
void BgVehiclePhysicsCarBase::ApplyEngine(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  __int128 v2; 
  unsigned int m_vehicleAnimProfile; 
  int v5; 
  bool v6; 
  const dvar_t *v7; 
  const char *v8; 
  float value; 
  double NormalSpeedPlane; 
  float m_timeInAir; 
  double v13; 
  float v14; 
  double v15; 
  float v16; 
  float m_durationToControl; 
  float m_timeToControl; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  VehiclePhysicsAnimProfile v23; 
  __int32 v24; 
  __int32 v25; 
  const dvar_t *v26; 
  const char *v27; 
  double Float_Internal_DebugName; 
  double v29; 
  float v30; 
  const dvar_t *v31; 
  float m_offsetPoint; 
  float v33; 
  float v34; 
  const dvar_t *v35; 
  float v36; 
  float v37; 
  float v38; 
  float yawMult; 
  const dvar_t *v40; 
  __int128 v41; 
  double v45; 
  float v46; 
  VehiclePhysicsAnimProfile v47; 
  double v48; 
  double v52; 
  float v53; 
  double v57; 
  float v58; 
  double v59; 
  const dvar_t *v60; 
  float v61; 
  const dvar_t *v63; 
  double v68; 
  float v69; 
  float v70; 
  BgVehiclePhysicsCarBase_vtbl *v71; 
  const dvar_t *v72; 
  double v73; 
  float v74; 
  double v75; 
  float v76; 
  float v77; 
  __int128 v78; 
  float v79; 
  __int128 v80; 
  double NormalSpeed; 
  float v89; 
  float m_clutching; 
  float v91; 
  vec3_t forwardWs; 
  vec3_t atPointWs; 
  __int128 v95; 

  if ( this->IsInAir(this) )
  {
    m_vehicleAnimProfile = this->m_vehicleAnimProfile;
    if ( m_vehicleAnimProfile <= 0x13 )
    {
      v5 = 720916;
      if ( _bittest(&v5, m_vehicleAnimProfile) )
      {
        if ( (float)((float)((float)(this->m_linearVelocityWs.v[0] * this->m_linearVelocityWs.v[0]) + (float)(this->m_linearVelocityWs.v[1] * this->m_linearVelocityWs.v[1])) + (float)(this->m_linearVelocityWs.v[2] * this->m_linearVelocityWs.v[2])) > 625.0 )
          return;
      }
    }
  }
  v6 = this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO;
  v95 = v2;
  if ( v6 )
  {
    v7 = DCONST_DVARFLT_bg_vehAirTimeWithEngineAtv;
    if ( DCONST_DVARFLT_bg_vehAirTimeWithEngineAtv )
      goto LABEL_12;
    v8 = "bg_vehAirTimeWithEngineAtv";
  }
  else
  {
    v7 = DCONST_DVARFLT_bg_vehAirTimeWithEngine;
    if ( DCONST_DVARFLT_bg_vehAirTimeWithEngine )
      goto LABEL_12;
    v8 = "bg_vehAirTimeWithEngine";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v8) )
    __debugbreak();
LABEL_12:
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
  m_timeInAir = this->m_timeInAir;
  _XMM8 = LODWORD(FLOAT_1_0);
  if ( m_timeInAir <= (float)(*(float *)&NormalSpeedPlane * value) )
  {
    v14 = FLOAT_1_0;
  }
  else
  {
    v13 = I_fclamp((float)(m_timeInAir - (float)(*(float *)&NormalSpeedPlane * value)) / value, 0.0, 1.0);
    v14 = 1.0 - *(float *)&v13;
  }
  v15 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  v16 = *(float *)&v15;
  if ( *(float *)&v15 <= 0.0 )
  {
    m_durationToControl = this->m_steering.m_durationToControl;
    if ( m_durationToControl <= 0.0 || (m_timeToControl = this->m_steering.m_timeToControl, m_timeToControl <= 0.0) )
      v19 = FLOAT_1_0;
    else
      v19 = 1.0 - (float)(m_timeToControl / m_durationToControl);
    v16 = *(float *)&v15 * v19;
  }
  v20 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 7u);
  v21 = *(float *)&v20;
  v22 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  if ( *(float *)&v22 >= 0.0 || (float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) >= 0.0 )
  {
    if ( BgVehiclePhysicsGround::IsBraking(this) )
    {
      if ( this->m_vehicleAnimProfile )
      {
        v31 = DVARFLT_bg_vehBrakingEngineMult;
        if ( !DVARFLT_bg_vehBrakingEngineMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehBrakingEngineMult") )
          __debugbreak();
      }
      else
      {
        v31 = DVARFLT_bg_vehBrakingEngineMultAtv;
        if ( !DVARFLT_bg_vehBrakingEngineMultAtv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehBrakingEngineMultAtv") )
          __debugbreak();
      }
      Dvar_CheckFrontendServerThread(v31);
      v30 = v31->current.value;
      goto LABEL_44;
    }
    goto LABEL_43;
  }
  v23 = this->m_vehicleAnimProfile;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 10;
      if ( v25 )
      {
        if ( v25 != 8 )
        {
LABEL_43:
          v30 = FLOAT_1_0;
          goto LABEL_44;
        }
        v26 = DVARFLT_bg_mkiloReverseAccelFactor;
        v27 = "bg_mkiloReverseAccelFactor";
      }
      else
      {
        v26 = DVARFLT_bg_dechoReverseAccelFactor;
        v27 = "bg_dechoReverseAccelFactor";
      }
    }
    else
    {
      v26 = DVARFLT_bg_tromeoReverseAccelFactor;
      v27 = "bg_tromeoReverseAccelFactor";
    }
  }
  else
  {
    v26 = DVARFLT_bg_atangoReverseAccelFactor;
    v27 = "bg_atangoReverseAccelFactor";
  }
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v26, v27);
  if ( *(float *)&Float_Internal_DebugName < 0.0 )
    goto LABEL_43;
  v29 = I_fclamp(*(float *)&Float_Internal_DebugName, 0.0, 1.0);
  v30 = *(float *)&v29;
LABEL_44:
  if ( this->m_timeSinceLastCollision <= 1.0 )
    m_offsetPoint = 0.0;
  else
    m_offsetPoint = this->m_engine.m_offsetPoint;
  if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO && v16 < 0.0 )
    m_offsetPoint = m_offsetPoint * 0.80000001;
  v33 = m_offsetPoint * this->m_transform.m[2].v[1];
  atPointWs.v[0] = (float)(m_offsetPoint * this->m_transform.m[2].v[0]) + this->m_centerOfMassWs.v[0];
  v34 = m_offsetPoint * this->m_transform.m[2].v[2];
  atPointWs.v[1] = v33 + this->m_centerOfMassWs.v[1];
  atPointWs.v[2] = v34 + this->m_centerOfMassWs.v[2];
  if ( BgVehiclePhysicsGround::IsBraking(this) && this->m_vehicleAnimProfile )
  {
    v35 = DCONST_DVARFLT_bg_vehBrakingEngineOffset;
    if ( !DCONST_DVARFLT_bg_vehBrakingEngineOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehBrakingEngineOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    v36 = v35->current.value;
    v37 = v36 * this->m_transform.m[2].v[1];
    atPointWs.v[0] = (float)(v36 * this->m_transform.m[2].v[0]) + atPointWs.v[0];
    v38 = v36 * this->m_transform.m[2].v[2];
    atPointWs.v[1] = v37 + atPointWs.v[1];
    atPointWs.v[2] = v38 + atPointWs.v[2];
  }
  if ( this->m_vehicleAnimProfile )
  {
    v40 = DCONST_DVARFLT_bg_vehAxleDirMult;
    if ( !DCONST_DVARFLT_bg_vehAxleDirMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAxleDirMult") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    yawMult = v40->current.value;
  }
  else
  {
    yawMult = FLOAT_0_69999999;
  }
  BgVehiclePhysicsGround::Steering::ComputeAxis(&this->m_steering, this, 0, &forwardWs, NULL, 1.0, yawMult);
  if ( this->m_wheels[0].m_contactBodyId == 0xFFFFFF && this->m_wheels[1].m_contactBodyId == 0xFFFFFF )
  {
    v41 = LODWORD(forwardWs.v[0]);
    *(float *)&v41 = fsqrt((float)(*(float *)&v41 * *(float *)&v41) + (float)(forwardWs.v[1] * forwardWs.v[1]));
    _XMM2 = v41;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
    }
    forwardWs.v[1] = forwardWs.v[1] * (float)(1.0 / *(float *)&_XMM0);
    forwardWs.v[0] = forwardWs.v[0] * (float)(1.0 / *(float *)&_XMM0);
    forwardWs.v[2] = 0.0;
  }
  v45 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  if ( *(float *)&v45 >= 0.0 )
  {
    v47 = this->m_vehicleAnimProfile;
    v48 = BgVehiclePhysics::GetNormalSpeedPlane(this);
    _XMM1 = (unsigned int)v47;
    __asm
    {
      vpcmpeqd xmm3, xmm1, xmm2
      vblendvps xmm1, xmm8, xmm2, xmm3
    }
    v52 = I_fclamp(*(float *)&v48 / *(float *)&_XMM1, 0.0, 1.0);
    v53 = 1.0 - *(float *)&v52;
    _XMM0 = (unsigned int)v47;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm3, xmm8, xmm1, xmm2
    }
    v46 = (float)(*(float *)&_XMM3 * (float)(1.0 - v53)) + v53;
  }
  else
  {
    v46 = FLOAT_1_0;
  }
  v57 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[0]) + (float)(0.0 * this->m_transform.m[2].v[1])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
  if ( *(float *)&v57 >= 0.69999999 )
  {
    v59 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[0]) + (float)(0.0 * this->m_transform.m[2].v[1])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
    v58 = 1.0 - (float)((float)((float)((float)(1.0 - *(float *)&v59) * (float)(1.0 - *(float *)&v59)) * (float)(1.0 - *(float *)&v59)) * (float)(1.0 - *(float *)&v59));
  }
  else
  {
    v58 = FLOAT_0_0099999998;
  }
  v60 = DCONST_DVARFLT_bg_vehShiftGears;
  v61 = 1.0 - (float)(v21 * this->m_engine.m_reductionOnHB);
  if ( !DCONST_DVARFLT_bg_vehShiftGears && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehShiftGears") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v60);
  if ( this->m_engine.m_clutching <= 0.0 )
    *(float *)&_XMM6 = this->m_engine.m_accelForce;
  else
    *(float *)&_XMM6 = v60->current.value * this->m_engine.m_accelForce;
  if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
  {
    if ( this->IsInAir(this) )
    {
      v63 = DCONST_DVARFLT_bg_vehAtvMaxEngineAir;
      if ( !DCONST_DVARFLT_bg_vehAtvMaxEngineAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAtvMaxEngineAir") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v63);
      _XMM0 = v63->current.unsignedInt;
      __asm { vminss  xmm6, xmm0, xmm6 }
    }
    if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO && this->m_wheelCount == 2 && this->m_timeSinceLastCollision > 0.5 )
    {
      _XMM0 = LODWORD(this->m_wheels[2].m_timeInAir);
      __asm
      {
        vmaxss  xmm1, xmm0, dword ptr [rcx]
        vmaxss  xmm3, xmm1, dword ptr [rdi+528h]
      }
      if ( *(float *)&_XMM3 > 1.5 )
      {
        v68 = I_fclamp((float)(*(float *)&_XMM3 - 1.5) * 0.5, 0.0, 1.0);
        *(float *)&_XMM6 = *(float *)&_XMM6 * (float)(1.0 - *(float *)&v68);
      }
    }
  }
  v70 = (float)((float)((float)((float)((float)((float)((float)(*(float *)&_XMM6 * 1550.0032) * deltaTime) * v30) * v16) * v58) * v61) * v14) * v46;
  v69 = v70;
  if ( COERCE_FLOAT(LODWORD(v70) & _xmm) > 0.001 )
  {
    v71 = this->__vftable;
    forwardWs.v[0] = v70 * forwardWs.v[0];
    forwardWs.v[1] = v70 * forwardWs.v[1];
    forwardWs.v[2] = v70 * forwardWs.v[2];
    if ( v71->IsInAir(this) || this->m_wheels[0].m_contactBodyId == 0xFFFFFF && this->m_wheels[1].m_contactBodyId == 0xFFFFFF || BgVehiclePhysicsGround::IsFacingUpward(this) && (float)((float)((float)(0.0 * this->m_transform.m[0].v[1]) + (float)(0.0 * this->m_transform.m[0].v[0])) + (float)(1.0 * this->m_transform.m[0].v[2])) > 0.40000001 )
      BgVehiclePhysics::AccumulateOnlyLinearImpulse(this, &forwardWs);
    else
      BgVehiclePhysics::AccumulateImpulse(this, &forwardWs, &atPointWs);
    v72 = DCONST_DVARFLT_bg_vehEngineDriftRatio;
    if ( !DCONST_DVARFLT_bg_vehEngineDriftRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEngineDriftRatio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v72);
    v73 = I_fclamp(v72->current.value, 0.0, 1.0);
    v74 = *(float *)&v73;
    if ( this->m_vehicleType == VEH_CAR )
    {
      v75 = I_fclamp(this->m_friction.car.tgtFriction / this->m_friction.tread.v[0], 0.0, 1.0);
      v76 = 1.0 - *(float *)&v75;
    }
    else
    {
      v76 = 0.0;
    }
    if ( v74 > 0.0 && (float)((float)((float)((float)(v76 * v76) * (float)(v76 * v76)) * (float)(v76 * v76)) * (float)(v76 * v76)) > 0.001 )
    {
      v77 = this->m_linearVelocityWs.v[1];
      v78 = LODWORD(this->m_linearVelocityWs.v[0]);
      v79 = this->m_linearVelocityWs.v[2];
      v80 = v78;
      *(float *)&v80 = fsqrt((float)((float)(*(float *)&v78 * *(float *)&v78) + (float)(v77 * v77)) + (float)(v79 * v79));
      _XMM3 = v80;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      *(float *)&_XMM3 = (float)((float)((float)((float)((float)(v76 * v76) * (float)(v76 * v76)) * (float)(v76 * v76)) * (float)(v76 * v76)) * v74) * v69;
      forwardWs.v[0] = (float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v78) * *(float *)&_XMM3;
      forwardWs.v[2] = (float)((float)(1.0 / *(float *)&_XMM0) * v79) * *(float *)&_XMM3;
      forwardWs.v[1] = (float)((float)(1.0 / *(float *)&_XMM0) * v77) * *(float *)&_XMM3;
      BgVehiclePhysics::AccumulateOnlyLinearImpulse(this, &forwardWs);
    }
  }
  NormalSpeed = BgVehiclePhysics::GetNormalSpeed(this);
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm3, 1 }
  v89 = *(float *)&NormalSpeed;
  if ( SLODWORD(_XMM2) != SLODWORD(_XMM1) && !BgVehiclePhysicsGround::IsReversing(this) )
  {
    m_clutching = this->m_engine.m_clutching;
    if ( m_clutching <= 0.0 && COERCE_FLOAT(LODWORD(m_clutching) & _xmm) > this->m_engine.m_minTimeInGear )
      this->m_engine.m_clutching = this->m_engine.m_clutchTime;
  }
  v91 = this->m_engine.m_clutching;
  this->m_engine.m_lastNormalSpeed = v89;
  this->m_engine.m_clutching = v91 - deltaTime;
}

/*
==============
BgVehiclePhysicsSentryDrone::ApplyEngine
==============
*/
void BgVehiclePhysicsSentryDrone::ApplyEngine(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  __int128 v2; 
  __int128 v3; 
  double Value; 
  float v7; 
  const dvar_t *v9; 
  __int128 v10; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  vec3_t atPointWs; 
  vec3_t impulseWs; 
  __int128 v26; 
  __int128 v27; 

  if ( this->m_wheelInContactCount || Physics_IsRigidBodyValid(this->m_worldId, this->m_lastColliderBodyId) && this->m_timeSinceLastCollision < 0.25 )
  {
    v27 = v2;
    v26 = v3;
    Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
    v7 = *(float *)&Value;
    _XMM8 = 0i64;
    I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
    v9 = DCONST_DVARFLT_bg_wheelsonAngleCutoff;
    if ( !DCONST_DVARFLT_bg_wheelsonAngleCutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonAngleCutoff") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = LODWORD(FLOAT_90_0);
    *(float *)&v10 = (float)(90.0 - v9->current.value) * 0.017453292;
    _XMM0 = v10;
    *(float *)&_XMM0 = cosf_0(*(float *)&v10);
    __asm
    {
      vcmpless xmm1, xmm0, xmm9
      vblendvps xmm2, xmm8, xmm9, xmm1
    }
    *(float *)&v10 = *(float *)&_XMM2 * (float)((float)(v7 * deltaTime) * this->m_acceleration);
    this->m_linearVelocityWs.v[0] = (float)(*(float *)&v10 * this->m_transform.m[0].v[0]) + this->m_linearVelocityWs.v[0];
    this->m_linearVelocityWs.v[1] = (float)(*(float *)&v10 * this->m_transform.m[0].v[1]) + this->m_linearVelocityWs.v[1];
    this->m_linearVelocityWs.v[2] = (float)(*(float *)&v10 * this->m_transform.m[0].v[2]) + this->m_linearVelocityWs.v[2];
    if ( this->m_wheelInContactCount == this->m_wheelCount )
    {
      v14 = DCONST_DVARFLT_bg_wheelsonEngineForce;
      if ( !DCONST_DVARFLT_bg_wheelsonEngineForce && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonEngineForce") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      v15 = (float)((float)(v14->current.value * 1550.0032) * deltaTime) * v7;
      if ( COERCE_FLOAT(LODWORD(v15) & _xmm) > 0.001 )
      {
        v16 = DCONST_DVARFLT_bg_wheelsonEngineOffset;
        if ( !DCONST_DVARFLT_bg_wheelsonEngineOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonEngineOffset") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        v17 = v16->current.value;
        v18 = v17 * this->m_transform.m[2].v[1];
        atPointWs.v[0] = (float)(v17 * this->m_transform.m[2].v[0]) + this->m_centerOfMassWs.v[0];
        v19 = v18 + this->m_centerOfMassWs.v[1];
        v20 = v17 * this->m_transform.m[2].v[2];
        atPointWs.v[1] = v19;
        v21 = v20 + this->m_centerOfMassWs.v[2];
        impulseWs.v[0] = v15 * this->m_transform.m[0].v[0];
        v22 = v15 * this->m_transform.m[0].v[2];
        atPointWs.v[2] = v21;
        v23 = v15 * this->m_transform.m[0].v[1];
        impulseWs.v[2] = v22;
        impulseWs.v[1] = v23;
        BgVehiclePhysics::AccumulateOnlyAngularImpulse(this, &impulseWs, &atPointWs);
      }
    }
  }
}

/*
==============
BgVehiclePhysicsTwoWheeled::ApplyEngine
==============
*/
void BgVehiclePhysicsTwoWheeled::ApplyEngine(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  double Value; 
  double v4; 
  float m_offsetPoint; 
  __int128 m_accelForce_low; 
  unsigned int m_wheelInContactCount; 
  float v8; 
  float v11; 
  bool v12; 
  float v13; 
  vec3_t impulseWs; 
  vec3_t atPointWs; 

  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  v4 = I_fclamp(*(float *)&Value, -0.5, 1.0);
  m_offsetPoint = 0.0;
  if ( *(float *)&v4 > 0.0 || (float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) >= -0.001 )
  {
    m_accelForce_low = LODWORD(this->m_engine.m_accelForce);
    m_wheelInContactCount = this->m_wheelInContactCount;
    *(float *)&m_accelForce_low = (float)((float)(this->m_engine.m_accelForce * 1550.0032) * deltaTime) * *(float *)&v4;
    v8 = *(float *)&m_accelForce_low * this->m_transform.m[0].v[1];
    impulseWs.v[0] = *(float *)&m_accelForce_low * this->m_transform.m[0].v[0];
    *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&m_accelForce_low + 1);
    impulseWs.v[2] = *(float *)&m_accelForce_low * this->m_transform.m[0].v[2];
    impulseWs.v[1] = v8;
    if ( m_wheelInContactCount == 2 )
    {
      m_offsetPoint = this->m_engine.m_offsetPoint;
    }
    else if ( m_wheelInContactCount == 1 && this->m_wheels[0].m_contactBodyId != 0xFFFFFF )
    {
      *(double *)&_XMM0 = BgVehiclePhysics::GetUpInclination(this);
      __asm { vmaxss  xmm1, xmm0, xmm6 }
      m_offsetPoint = *(float *)&_XMM1 * this->m_engine.m_offsetPoint;
    }
    v11 = m_offsetPoint * this->m_transform.m[2].v[1];
    v12 = this->m_timeSinceLastCollision > 0.1;
    atPointWs.v[0] = (float)(m_offsetPoint * this->m_transform.m[2].v[0]) + this->m_centerOfMassWs.v[0];
    v13 = m_offsetPoint * this->m_transform.m[2].v[2];
    atPointWs.v[1] = v11 + this->m_centerOfMassWs.v[1];
    atPointWs.v[2] = v13 + this->m_centerOfMassWs.v[2];
    if ( v12 )
      BgVehiclePhysics::AccumulateImpulse(this, &impulseWs, &atPointWs);
    else
      BgVehiclePhysics::AccumulateOnlyLinearImpulse(this, &impulseWs);
  }
}

/*
==============
BgVehiclePhysicsTank::ApplyEngineForce
==============
*/
void BgVehiclePhysicsTank::ApplyEngineForce(BgVehiclePhysicsTank *this, float deltaTime)
{
  double Value; 
  const dvar_t *v5; 
  __int128 v9; 
  float v10; 
  float v11; 
  __int128 v13; 
  double v16; 
  const dvar_t *v17; 
  float v18; 
  BOOL IsBraking; 
  double v20; 
  unsigned int v21; 
  float v26; 
  float v31; 
  float v32; 
  float v33; 
  double v34; 
  float v35; 
  __int64 v39; 
  __int64 v40; 
  vec3_t atPointWs; 
  vec3_t impulseWs; 
  vec3_t angles; 

  AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &angles);
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  v5 = DCONST_DVARFLT_bg_bradleyMaxPitchDeg;
  _XMM8 = 0i64;
  __asm { vroundss xmm3, xmm8, xmm2, 1 }
  v9 = LODWORD(FLOAT_0_0027777778);
  __asm { vroundss xmm3, xmm8, xmm2, 1 }
  *(float *)&v9 = (float)((float)(0.0027777778 * angles.v[2]) - *(float *)&_XMM3) * 360.0;
  LODWORD(v10) = v9 & _xmm;
  v11 = *(float *)&Value;
  if ( !DCONST_DVARFLT_bg_bradleyMaxPitchDeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyMaxPitchDeg") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v13 = v9 & (unsigned int)_xmm;
  *(float *)&v13 = v10 / (float)(v5->current.value + 10.0);
  _XMM2 = v13;
  __asm { vmaxss  xmm0, xmm2, xmm1; val }
  _XMM7 = 0i64;
  v16 = I_fclamp(*(float *)&_XMM0, 0.0, 1.0);
  v17 = DCONST_DVARFLT_bg_bradleyAccel;
  if ( !DCONST_DVARFLT_bg_bradleyAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = (float)((float)(v11 * deltaTime) * v17->current.value) * (float)(1.0 - (float)(*(float *)&v16 * *(float *)&v16));
  this->m_linearVelocityWs.v[0] = (float)(v18 * this->m_transform.m[0].v[0]) + this->m_linearVelocityWs.v[0];
  this->m_linearVelocityWs.v[1] = (float)(v18 * this->m_transform.m[0].v[1]) + this->m_linearVelocityWs.v[1];
  this->m_linearVelocityWs.v[2] = (float)(v18 * this->m_transform.m[0].v[2]) + this->m_linearVelocityWs.v[2];
  IsBraking = BgVehiclePhysicsGround::IsBraking(this);
  v20 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
  v21 = 0;
  _XMM1 = IsBraking;
  __asm { vpcmpeqd xmm4, xmm1, xmm2 }
  _XMM2 = LODWORD(FLOAT_3100_0063);
  __asm { vblendvps xmm1, xmm2, xmm3, xmm4 }
  v26 = (float)((float)((float)(*(float *)&_XMM1 * this->m_engine.m_accelForce) * deltaTime) * v11) * *(float *)&v20;
  if ( COERCE_FLOAT(LODWORD(v26) & _xmm) > 0.001 )
  {
    _XMM0 = BgVehiclePhysicsGround::IsBraking(this);
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_N12_0);
    __asm { vblendvps xmm0, xmm1, xmm7, xmm2 }
    v31 = *(float *)&_XMM0 + this->m_engine.m_offsetPoint;
    *(float *)&_XMM0 = v31 * this->m_transform.m[2].v[1];
    atPointWs.v[0] = (float)(v31 * this->m_transform.m[2].v[0]) + this->m_centerOfMassWs.v[0];
    *(float *)&_XMM1 = *(float *)&_XMM0 + this->m_centerOfMassWs.v[1];
    *(float *)&_XMM0 = v31 * this->m_transform.m[2].v[2];
    atPointWs.v[1] = *(float *)&_XMM1;
    *(float *)&_XMM1 = *(float *)&_XMM0 + this->m_centerOfMassWs.v[2];
    impulseWs.v[0] = v26 * this->m_transform.m[0].v[0];
    *(float *)&_XMM0 = v26 * this->m_transform.m[0].v[2];
    atPointWs.v[2] = *(float *)&_XMM1;
    v32 = v26 * this->m_transform.m[0].v[1];
    impulseWs.v[2] = *(float *)&_XMM0;
    impulseWs.v[1] = v32;
    BgVehiclePhysics::AccumulateOnlyAngularImpulse(this, &impulseWs, &atPointWs);
  }
  v33 = (float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_linearVelocityWs.v[0] * this->m_transform.m[0].v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2]);
  v34 = I_fclamp(COERCE_FLOAT(LODWORD(this->m_angularVelocityWs.v[2]) & _xmm) * 0.63661975, 0.0, 1.0);
  v35 = *(float *)&v34 * 550.0;
  if ( this->m_wheelCount )
  {
    _XMM0 = LODWORD(FLOAT_N1_0);
    __asm
    {
      vcmpless xmm1, xmm7, xmm8
      vblendvps xmm1, xmm0, xmm6, xmm1
    }
    do
    {
      v39 = v21++;
      v40 = v39;
      this->m_wheels[v40].m_skid = 0.050000001;
      this->m_wheels[v40].m_spinSpeed = (float)((float)(*(float *)&_XMM1 * v35) + v33) / this->m_wheelCommon.m_radius;
    }
    while ( v21 < this->m_wheelCount );
  }
}

/*
==============
BgVehiclePhysicsCarBase::ApplyExtraDamping
==============
*/
void BgVehiclePhysicsCarBase::ApplyExtraDamping(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  double Value; 
  float v4; 
  double Float_Internal_DebugName; 
  float v6; 
  vec3_t outVelLs; 
  vec3_t velLs; 

  if ( this->m_playerControlled && (this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO || !this->IsInAir(this) && !BgVehiclePhysicsGround::IsTooInclinedToDamp(this, 55.0)) )
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
    if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
    {
      if ( this->m_timeSinceLastCollision < 0.25 )
      {
        BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &velLs);
        if ( velLs.v[2] > 0.0 )
          BgVehiclePhysics::DampLerp(&velLs.v[2], 0.0, deltaTime, 15.0);
        BgVehiclePhysics::DampLerp(&velLs.v[1], 0.0, deltaTime, 2.0);
        if ( outVelLs.v[1] < 0.0 && BgVehiclePhysicsGround::IsFacingUpward(this) )
          BgVehiclePhysics::DampLerp(&outVelLs.v[1], 0.0, deltaTime, 15.0);
        BgVehiclePhysics::ComputeVelocityWorldSpace(this, &velLs, &this->m_linearVelocityWs);
        BgVehiclePhysics::DampLerp(outVelLs.v, 0.0, deltaTime, 1.8);
      }
      if ( this->IsInAir(this) )
      {
        Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 5u);
        v4 = *(float *)&Value;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehAtvAirPitchControl, "bg_vehAtvAirPitchControl");
        outVelLs.v[1] = (float)(*(float *)&Float_Internal_DebugName * (float)(deltaTime * v4)) + outVelLs.v[1];
      }
      goto LABEL_26;
    }
    if ( !this->m_flatTire )
      BgVehiclePhysics::DampLerp(outVelLs.v, 0.0, deltaTime, 1.8);
    if ( this->m_timeSinceLastCollision >= 0.30000001 )
      goto LABEL_26;
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &velLs);
    if ( velLs.v[2] > 0.0 )
      BgVehiclePhysics::DampLerp(&velLs.v[2], 0.0, deltaTime, 20.0);
    BgVehiclePhysics::DampLerp(&velLs.v[1], 0.0, deltaTime, 2.0);
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &velLs, &this->m_linearVelocityWs);
    if ( outVelLs.v[1] >= 0.0 )
    {
      v6 = FLOAT_2_0;
    }
    else
    {
      if ( !BgVehiclePhysicsGround::IsFacingUpward(this) )
      {
LABEL_25:
        BgVehiclePhysics::DampLerp(outVelLs.v, 0.0, deltaTime, 4.0);
LABEL_26:
        BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
        return;
      }
      v6 = FLOAT_16_0;
    }
    BgVehiclePhysics::DampLerp(&outVelLs.v[1], 0.0, deltaTime, v6);
    goto LABEL_25;
  }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ApplyExtraGravity
==============
*/
void BgVehiclePhysicsAtvQuadNew::ApplyExtraGravity(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  const dvar_t *v4; 
  float v5; 
  bool v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  float value; 
  vec3_t impulseWs; 

  if ( this->m_playerControlled )
  {
    v4 = DCONST_DVARFLT_bg_vehForceGravAtv;
    if ( !DCONST_DVARFLT_bg_vehForceGravAtv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehForceGravAtv") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v5 = v4->current.value * 1000.0;
    v6 = this->m_timeInAir >= 1.2;
    v7 = 0.0;
    v8 = 0.0;
    impulseWs.v[0] = 0.0;
    impulseWs.v[1] = 0.0;
    impulseWs.v[2] = v5;
    if ( v6 )
    {
      v9 = DCONST_DVARFLT_bg_vehAirMaxGravMult;
      if ( !DCONST_DVARFLT_bg_vehAirMaxGravMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAirMaxGravMult") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      value = v9->current.value;
      v8 = value * impulseWs.v[1];
      v7 = impulseWs.v[0] * value;
      v5 = impulseWs.v[2] * value;
    }
    impulseWs.v[0] = v7 * deltaTime;
    impulseWs.v[2] = v5 * deltaTime;
    impulseWs.v[1] = v8 * deltaTime;
    BgVehiclePhysics::AccumulateOnlyLinearImpulse(this, &impulseWs);
  }
}

/*
==============
BgVehiclePhysicsGround::ApplyExtraGravity
==============
*/
void BgVehiclePhysicsGround::ApplyExtraGravity(BgVehiclePhysicsGround *this, float deltaTime)
{
  unsigned int m_vehicleAnimProfile; 
  int v4; 
  const dvar_t *v5; 
  const char *v6; 
  float value; 
  bool v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  float v12; 
  double PlaneSpeed; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  unsigned int v21; 
  float v22; 
  unsigned int i; 
  __int64 v24; 
  float m_timeInAir; 
  const dvar_t *v26; 
  float v27; 
  double v28; 
  float v29; 
  vec3_t gravity; 
  vec3_t impulseWs; 

  if ( !this->m_playerControlled )
    return;
  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  v4 = 720916;
  if ( m_vehicleAnimProfile <= 0x13 && _bittest(&v4, m_vehicleAnimProfile) )
  {
    v5 = DCONST_DVARFLT_bg_vehForceGravHeavy;
    if ( !DCONST_DVARFLT_bg_vehForceGravHeavy )
    {
      v6 = "bg_vehForceGravHeavy";
      goto LABEL_8;
    }
  }
  else
  {
    v5 = DCONST_DVARFLT_bg_vehForceGrav;
    if ( !DCONST_DVARFLT_bg_vehForceGrav )
    {
      v6 = "bg_vehForceGrav";
LABEL_8:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  Physics_GetGravity((const Physics_WorldId)this->m_worldId, &gravity);
  v8 = this->m_timeInAir >= 0.5;
  gravity.v[0] = 0.0;
  gravity.v[1] = 0.0;
  gravity.v[2] = value * gravity.v[2];
  if ( v8 )
  {
    v9 = DCONST_DVARFLT_bg_vehAirMaxGravMult;
    if ( !DCONST_DVARFLT_bg_vehAirMaxGravMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAirMaxGravMult") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = (float)(deltaTime * v9->current.value) * 60.0;
    gravity.v[0] = v10 * gravity.v[0];
    gravity.v[1] = v10 * gravity.v[1];
    gravity.v[2] = v10 * gravity.v[2];
    BgVehiclePhysics::AccumulateOnlyLinearImpulse(this, &gravity);
  }
  else
  {
    v11 = DCONST_DVARFLT_bg_vehSpeedThesholdForGravity;
    if ( !DCONST_DVARFLT_bg_vehSpeedThesholdForGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSpeedThesholdForGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.value;
    PlaneSpeed = BgVehiclePhysics::GetPlaneSpeed(this);
    v14 = DCONST_DVARFLT_bg_vehMinExtraGravity;
    v15 = *(float *)&PlaneSpeed * 0.0012626263;
    if ( !DCONST_DVARFLT_bg_vehMinExtraGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMinExtraGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v16 = this->m_timeSinceLastCollision * 3.3333333;
    v17 = v14->current.value;
    I_fclamp(v16, 0.0, 1.0);
    I_fclamp(1.0 - v17, 0.0, 1.0);
    v18 = (float)((float)(1.0 - (float)(NormalizeRange(v15, v12) * (float)(1.0 - v17))) * v16) + (float)(1.0 - v16);
    v19 = v18 * gravity.v[2];
    gravity.v[0] = v18 * gravity.v[0];
    gravity.v[1] = v18 * gravity.v[1];
    gravity.v[2] = v18 * gravity.v[2];
    BgVehiclePhysics::GetNormalSpeedPlane(this);
    v20 = DCONST_DVARFLT_bg_vehWheelAirGravTime;
    if ( !DCONST_DVARFLT_bg_vehWheelAirGravTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehWheelAirGravTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = this->m_vehicleAnimProfile;
    v22 = v20->current.value;
    if ( v21 > 0x13 || !_bittest(&v4, v21) )
      v22 = (float)((float)(1.0 - v19) * v22) + (float)(v19 * 0.0099999998);
    for ( i = 0; i < this->m_wheelCount; ++i )
    {
      v24 = i;
      m_timeInAir = this->m_wheels[v24].m_timeInAir;
      if ( m_timeInAir >= 0.0 && m_timeInAir <= v22 )
        goto LABEL_36;
      if ( this->m_wheels[v24].m_contactBodyId == 0xFFFFFF )
      {
        v26 = DCONST_DVARFLT_bg_vehWheelAirGravAfterColl;
        if ( !DCONST_DVARFLT_bg_vehWheelAirGravAfterColl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehWheelAirGravAfterColl") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( v26->current.value > this->m_timeSinceLastCollision )
          goto LABEL_36;
      }
      if ( this->IsInAir(this) )
      {
LABEL_36:
        if ( i < 2 )
        {
          v27 = NormalizeRange(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(this->m_transform.m[1].v[1] * GLOBAL_UP->v[1]) + (float)(GLOBAL_UP->v[0] * this->m_transform.m[1].v[0])) + (float)(this->m_transform.m[1].v[2] * GLOBAL_UP->v[2])) & _xmm), 0.60000002);
          v28 = I_fclamp(1.0 - v27, 0.0, 1.0);
          v29 = fsqrt((float)((float)(gravity.v[1] * gravity.v[1]) + (float)(gravity.v[0] * gravity.v[0])) + (float)(gravity.v[2] * gravity.v[2])) * (float)((float)((float)(1.0 - *(float *)&v28) * 0.2) + *(float *)&v28);
          *(float *)&v28 = v29 * this->m_wheels[v24].m_suspDirWs.v[1];
          impulseWs.v[0] = v29 * this->m_wheels[v24].m_suspDirWs.v[0];
          impulseWs.v[2] = v29 * this->m_wheels[v24].m_suspDirWs.v[2];
          impulseWs.v[1] = *(float *)&v28;
        }
        else
        {
          impulseWs = gravity;
        }
        BgVehiclePhysics::AccumulateImpulse(this, &impulseWs, &this->m_wheels[v24].m_hardPointWs);
      }
    }
  }
}

/*
==============
BgVehiclePhysicsCarBase::ApplyFriction
==============
*/
void BgVehiclePhysicsCarBase::ApplyFriction(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  float m_wheelCount; 
  float v6; 
  double Value; 
  unsigned int v9; 
  float v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  const dvar_t *v24; 
  float v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  unsigned int v30; 
  int v31; 
  unsigned int *p_m_contactBodyId; 
  __int64 v33; 
  bool v34; 
  int v35; 
  float v36; 
  float v40; 
  const dvar_t *v41; 
  float v42; 
  float v43; 
  double v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  __int64 ackRatio; 
  __int64 v51; 
  float v52; 
  float v53; 
  vec3_t sideWs; 
  vec3_t linVelWs; 
  vec3_t angVelWs; 
  vec3_t outPointVel; 
  vec3_t forwardWs; 
  vec3_t impulseWs; 

  _XMM11 = 0i64;
  if ( this->m_steering.m_yawMaxAngle <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 4009, ASSERT_TYPE_ASSERT, "(m_steering.m_yawMaxAngle > 0.0f)", (const char *)&queryFormat, "m_steering.m_yawMaxAngle > 0.0f") )
    __debugbreak();
  m_wheelCount = (float)this->m_wheelCount;
  v6 = this->m_mass / m_wheelCount;
  v53 = v6;
  BgVehiclePhysicsGround::Steering::ComputeAxis(&this->m_steering, this, 0, &forwardWs, &sideWs, 1.0, 1.0);
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 7u);
  *(float *)&_XMM6 = FLOAT_0_5;
  v9 = 0;
  *(_QWORD *)&this->m_avgSpinSpeed = 0i64;
  for ( LODWORD(v10) = LODWORD(Value) & _xmm; v9 < this->m_wheelCount; ++v9 )
  {
    v11 = v9;
    if ( v9 >= 2 )
    {
      v13 = FLOAT_1_0;
    }
    else if ( v10 >= 0.001 )
    {
      v13 = FLOAT_0_75;
    }
    else
    {
      v12 = 1.0 - (float)(COERCE_FLOAT(LODWORD(this->m_steering.m_yaw) & _xmm) / this->m_steering.m_yawMaxAngle);
      I_fclamp(v12, 0.0, 1.0);
      v13 = v12;
    }
    v14 = this->m_linearVelocityWs.v[1];
    v15 = DVARBOOL_bg_vehSurfaceVelocity;
    linVelWs.v[0] = this->m_linearVelocityWs.v[0];
    v16 = this->m_linearVelocityWs.v[2];
    linVelWs.v[1] = v14;
    v17 = this->m_angularVelocityWs.v[0];
    linVelWs.v[2] = v16;
    v18 = this->m_angularVelocityWs.v[1];
    angVelWs.v[0] = v17;
    v19 = this->m_angularVelocityWs.v[2];
    angVelWs.v[1] = v18;
    angVelWs.v[2] = v19;
    if ( !DVARBOOL_bg_vehSurfaceVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSurfaceVelocity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      v20 = this->m_linearVelocityWs.v[1] - this->m_surfaceLinVel.v[1];
      linVelWs.v[0] = this->m_linearVelocityWs.v[0] - this->m_surfaceLinVel.v[0];
      v21 = this->m_linearVelocityWs.v[2] - this->m_surfaceLinVel.v[2];
      linVelWs.v[1] = v20;
      v22 = this->m_angularVelocityWs.v[0] - this->m_surfaceAngVel.v[0];
      linVelWs.v[2] = v21;
      v23 = this->m_angularVelocityWs.v[1] - this->m_surfaceAngVel.v[1];
      angVelWs.v[0] = v22;
      angVelWs.v[2] = this->m_angularVelocityWs.v[2] - this->m_surfaceAngVel.v[2];
      angVelWs.v[1] = v23;
    }
    PhysicsVehicle_ComputePointVelocity(&this->m_centerOfMassWs, &angVelWs, &linVelWs, &this->m_wheels[v11].m_contactPointWs, &outPointVel);
    switch ( (this->m_wheels[v11].m_surfFlags >> 19) & 0x3F )
    {
      case 2u:
      case 3u:
      case 4u:
      case 6u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x1Fu:
      case 0x20u:
      case 0x22u:
      case 0x23u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
        v24 = DCONST_DVARFLT_bg_carMidFricSurf;
        if ( !DCONST_DVARFLT_bg_carMidFricSurf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carMidFricSurf") )
          __debugbreak();
        goto LABEL_19;
      case 7u:
      case 0xCu:
      case 0x14u:
      case 0x15u:
      case 0x1Bu:
      case 0x2Au:
        v24 = DCONST_DVARFLT_bg_carLowFricSurf;
        if ( !DCONST_DVARFLT_bg_carLowFricSurf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carLowFricSurf") )
          __debugbreak();
LABEL_19:
        Dvar_CheckFrontendServerThread(v24);
        _XMM3 = v24->current.unsignedInt;
        break;
      default:
        _XMM3 = LODWORD(FLOAT_1_0);
        break;
    }
    __asm { vmaxss  xmm6, xmm3, xmm6 }
    v52 = *(float *)&_XMM6;
    if ( ((unsigned __int8 (__fastcall *)(BgVehiclePhysicsCarBase *, BgVehiclePhysicsGround::Wheel *))this->ComputeWheelAngularSpeed)(this, &this->m_wheels[v11]) )
    {
      v26 = sideWs.v[0];
      v29 = LODWORD(sideWs.v[0]);
      v27 = sideWs.v[1];
      v28 = sideWs.v[2];
      *(float *)&v29 = (float)((float)((float)(sideWs.v[0] * outPointVel.v[0]) + (float)(sideWs.v[1] * outPointVel.v[1])) + (float)(sideWs.v[2] * outPointVel.v[2])) * v6;
      if ( v9 >= this->m_wheelCount )
      {
        LODWORD(v51) = this->m_wheelCount;
        LODWORD(ackRatio) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 3978, ASSERT_TYPE_ASSERT, "(unsigned)( windex ) < (unsigned)( m_wheelCount )", "windex doesn't index m_wheelCount\n\t%i not in [0, %i)", ackRatio, v51) )
          __debugbreak();
        v26 = sideWs.v[0];
        v27 = sideWs.v[1];
        v28 = sideWs.v[2];
      }
      if ( v9 >= 2 && (this->m_wheels[v11].m_state & 1) != 0 )
      {
        v30 = this->m_wheelCount;
        v31 = 0;
        if ( v30 <= 2 )
          goto LABEL_43;
        p_m_contactBodyId = &this->m_wheels[2].m_contactBodyId;
        v33 = v30 - 2;
        do
        {
          v34 = (p_m_contactBodyId[1] & 1) != 0 && *p_m_contactBodyId != 0xFFFFFF;
          v35 = v31 + 1;
          if ( !v34 )
            v35 = v31;
          p_m_contactBodyId += 38;
          v31 = v35;
          --v33;
        }
        while ( v33 );
        if ( v35 < 2 )
LABEL_43:
          v36 = FLOAT_0_30000001;
        else
          v36 = FLOAT_0_1;
      }
      else
      {
        v36 = FLOAT_1_0;
      }
      _XMM1 = v29 & (unsigned int)_xmm ^ _xmm;
      __asm
      {
        vcmpless xmm0, xmm11, xmm8
        vblendvps xmm0, xmm1, xmm6, xmm0
      }
      this->m_wheels[v11].m_lateralImpulseWs.v[0] = v26 * COERCE_FLOAT(_XMM0 ^ _xmm);
      this->m_wheels[v11].m_lateralImpulseWs.v[1] = v27 * COERCE_FLOAT(_XMM0 ^ _xmm);
      this->m_wheels[v11].m_lateralImpulseWs.v[2] = v28 * COERCE_FLOAT(_XMM0 ^ _xmm);
      v40 = COERCE_FLOAT(LODWORD(this->m_wheels[v11].m_timeInAir) & _xmm) * 6.6666665;
      I_fclamp(v40, 0.0, 1.0);
      v41 = DCONST_DVARFLT_bg_vehInclThresForFric;
      v42 = v40;
      if ( !DCONST_DVARFLT_bg_vehInclThresForFric && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehInclThresForFric") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v41);
      v43 = v41->current.value;
      if ( v43 <= 0.001 )
      {
        v46 = FLOAT_1_0;
      }
      else
      {
        v44 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
        v45 = *(float *)&v44 / v43;
        I_fclamp(*(float *)&v44 / v43, 0.0, 1.0);
        v46 = v45;
      }
      v47 = (float)((float)((float)(v13 * this->m_friction.car.tgtFriction) * v42) * v46) * v36;
      v48 = v47 * this->m_wheels[v11].m_lateralImpulseWs.v[1];
      impulseWs.v[0] = (float)(v47 * this->m_wheels[v11].m_lateralImpulseWs.v[0]) * (float)(deltaTime * 60.0);
      v49 = v47 * this->m_wheels[v11].m_lateralImpulseWs.v[2];
      impulseWs.v[1] = v48 * (float)(deltaTime * 60.0);
      impulseWs.v[2] = v49 * (float)(deltaTime * 60.0);
      BgVehiclePhysics::AccumulateImpulse(this, &impulseWs, &this->m_wheels[v11].m_contactPointWs);
      *(float *)&_XMM6 = v52;
      v6 = v53;
    }
  }
  BgVehiclePhysicsGround::FrictionCar::Step((BgVehiclePhysicsGround::FrictionCar *)&this->m_friction, this, *(float *)&_XMM6, deltaTime);
}

/*
==============
BgVehiclePhysicsSentryDrone::ApplyFriction
==============
*/
void BgVehiclePhysicsSentryDrone::ApplyFriction(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  double v3; 
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  v3 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
  outVelLs.v[1] = (float)(*(float *)&v3 < 0.25881907) * outVelLs.v[1];
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
}

/*
==============
BgVehiclePhysicsTank::ApplyFriction
==============
*/
void BgVehiclePhysicsTank::ApplyFriction(BgVehiclePhysicsTank *this, float deltaTime)
{
  double v3; 
  const dvar_t *v4; 
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  v3 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
  v4 = DCONST_DVARFLT_bg_bradleyAngleCutoff;
  if ( !DCONST_DVARFLT_bg_bradleyAngleCutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyAngleCutoff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  outVelLs.v[1] = (float)(cosf_0(v4->current.value * 0.017453292) > (float)(*(float *)&v3 * *(float *)&v3)) * outVelLs.v[1];
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
}

/*
==============
BgVehiclePhysicsTwoWheeled::ApplyFriction
==============
*/
void BgVehiclePhysicsTwoWheeled::ApplyFriction(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  BgVehiclePhysics::DampLerp(&outVelLs.v[1], 0.0, deltaTime, 15.0);
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
}

/*
==============
BgVehiclePhysicsGround::ApplyFrontalSuspensionForce
==============
*/
void BgVehiclePhysicsGround::ApplyFrontalSuspensionForce(BgVehiclePhysicsGround *this, float deltaTime, unsigned int useIndex)
{
  __int64 v3; 

  if ( this->m_wheelCount != 12 && this->m_frontalSuspension > 0.0 && useIndex < 0xC )
  {
    v3 = useIndex;
    if ( this->m_wheels[v3].m_contactBodyId != 0xFFFFFF )
      BgVehiclePhysicsGround::ApplySingleSuspensionForce(this, deltaTime, &this->m_wheels[v3]);
  }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ApplyRumble
==============
*/
void BgVehiclePhysicsAtvQuadNew::ApplyRumble(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  double NormalSpeed; 
  __int128 v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  __int128 v19; 
  float v22; 
  double Value; 
  float v24; 
  float v25; 
  double Intensity; 
  unsigned int m_wheelCount; 
  unsigned int v28; 
  float v29; 
  float *p_m_suspDeformRatio; 
  unsigned int v32; 
  __int64 v33; 
  float *v42; 
  __int64 v43; 
  double v44; 
  __int128 v45; 
  float v48; 
  float m_timeInAir; 
  float v50; 
  int *v51; 
  float *v52; 
  float *v53; 
  float *v54; 
  float *v55; 
  int *v56; 
  BgVehicleEventSystem *v59; 
  float m_t; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  int v66; 
  float v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  __int128 v72; 
  __int128 v73; 
  __int128 v74; 

  if ( Physics_IsPredictiveWorld(this->m_worldId) && !this->m_pmoveObject )
  {
    if ( this->m_playerControlled )
    {
      if ( this->m_wheelInContactCount )
      {
        v74 = v2;
        v73 = v3;
        v72 = v4;
        v71 = v5;
        v70 = v6;
        v69 = v7;
        v68 = v8;
        NormalSpeed = BgVehiclePhysics::GetNormalSpeed(this);
        v12 = LODWORD(this->m_linearVelocityWs.v[0]);
        v13 = this->m_linearVelocityWs.v[1];
        LODWORD(v14) = LODWORD(NormalSpeed) & _xmm;
        v15 = v12;
        *(float *)&v15 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(v13 * v13)) + (float)(this->m_linearVelocityWs.v[2] * this->m_linearVelocityWs.v[2]));
        _XMM1 = v15;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm11, xmm0
        }
        v19 = LODWORD(v13);
        *(float *)&v19 = (float)((float)(v13 * (float)(1.0 / *(float *)&_XMM0)) * this->m_transform.m[0].v[1]) + (float)((float)(*(float *)&v12 * (float)(1.0 / *(float *)&_XMM0)) * this->m_transform.m[0].v[0]);
        _XMM0 = v19 & (unsigned int)_xmm;
        __asm { vmaxss  xmm6, xmm0, xmm7 }
        *(double *)&_XMM0 = BgVehiclePhysicsGround::GetDriftingRatio(this);
        v62 = (float)(*(float *)&_XMM0 * (float)(1.0 - (float)((float)(*(float *)&_XMM6 * *(float *)&_XMM6) * *(float *)&_XMM6))) * v14;
        *(double *)&_XMM0 = I_fclamp(1.0 - this->m_avgBlockRatio, 0.0, 1.0);
        v63 = (float)(scaleIntensity_0 * 0.40000001) * *(float *)&_XMM0;
        if ( BgVehiclePhysicsGround::IsBraking(this) )
          v22 = scaleIntensity_0 * v14;
        else
          v22 = 0.0;
        v65 = v22;
        Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
        v24 = (float)((float)(COERCE_FLOAT(LODWORD(Value) & _xmm) * (float)(this->m_wheels[1].m_skid + this->m_wheels[0].m_skid)) * 0.5) * scaleIntensity_0;
        v25 = (float)((float)(v24 * v24) * v24) * 0.064000003;
        v64 = v25;
        Intensity = BgVehiclePhysicsGround::RumbleData::GetIntensity(&this->m_rumble);
        m_wheelCount = this->m_wheelCount;
        v28 = 0;
        v66 = SLODWORD(Intensity);
        v29 = *(float *)&Intensity;
        _XMM3 = 0i64;
        if ( m_wheelCount >= 4 )
        {
          p_m_suspDeformRatio = &this->m_wheels[1].m_suspDeformRatio;
          v32 = ((m_wheelCount - 4) >> 2) + 1;
          v33 = v32;
          v28 = 4 * v32;
          do
          {
            _XMM0 = *((unsigned int *)p_m_suspDeformRatio - 38);
            p_m_suspDeformRatio += 152;
            __asm
            {
              vmaxss  xmm2, xmm0, xmm3
              vcmpless xmm0, xmm2, xmm1
              vblendvps xmm2, xmm2, xmm1, xmm0
            }
            _XMM1 = *((unsigned int *)p_m_suspDeformRatio - 114);
            __asm
            {
              vmaxss  xmm4, xmm1, xmm2
              vcmpless xmm0, xmm4, xmm3
              vblendvps xmm0, xmm4, xmm3, xmm0
            }
            v61 = *(float *)&_XMM0;
            _XMM3 = (unsigned int)_XMM0;
            --v33;
          }
          while ( v33 );
        }
        if ( v28 < m_wheelCount )
        {
          v42 = &this->m_wheels[v28].m_suspDeformRatio;
          v43 = m_wheelCount - v28;
          do
          {
            __asm { vmaxss  xmm3, xmm3, dword ptr [rax] }
            v42 += 38;
            --v43;
          }
          while ( v43 );
        }
        v44 = I_fclamp(*(float *)&_XMM3, 0.0, 1.0);
        v45 = _XMM3;
        *(float *)&v45 = (float)(*(float *)&v44 - 0.30000001) * 1.4285715;
        _XMM2 = v45;
        __asm { vmaxss  xmm0, xmm2, xmm7 }
        v48 = *(float *)&_XMM0 * 0.5;
        m_timeInAir = this->m_timeInAir;
        v50 = (float)(_mm_cvtepi32_ps((__m128i)this->m_flatTire).m128_f32[0] * v14) * 0.5;
        v67 = v50;
        v61 = v48;
        if ( m_timeInAir <= 0.0 )
          I_fclamp(1.0 - (float)(COERCE_FLOAT(LODWORD(m_timeInAir) & _xmm) * 4.0), 0.0, 1.0);
        v51 = (int *)&v64;
        v52 = &v61;
        if ( v25 <= v22 )
          v51 = (int *)&v65;
        v53 = &v62;
        if ( v62 <= *(float *)v51 )
          v53 = (float *)v51;
        v54 = (float *)&v66;
        if ( v29 <= *v53 )
          v54 = v53;
        v55 = &v63;
        if ( v63 <= *v54 )
          v55 = v54;
        v56 = (int *)&v67;
        if ( v48 <= *v55 )
          v52 = v55;
        if ( v50 <= *v52 )
          v56 = (int *)v52;
        _XMM0 = (unsigned int)*v56;
        __asm { vmaxss  xmm6, xmm0, xmm1 }
      }
      else
      {
        BgVehiclePhysicsGround::RumbleData::GetIntensity(&this->m_rumble);
      }
      v59 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
      ((void (__fastcall *)(BgVehicleEventSystem *))v59->CarGamepadRumble)(v59);
    }
    m_t = this->m_rumble.m_t;
    if ( m_t > 0.0 && this->m_rumble.m_duration > 0.0 && this->m_rumble.m_intensity > 0.0 )
    {
      this->m_rumble.m_t = m_t - deltaTime;
      if ( (float)(m_t - deltaTime) <= 0.0 )
        *(_QWORD *)&this->m_rumble.m_intensity = 0i64;
    }
  }
}

/*
==============
BgVehiclePhysicsCarBase::ApplyRumble
==============
*/
void BgVehiclePhysicsCarBase::ApplyRumble(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  double NormalSpeed; 
  __int128 v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  __int128 v19; 
  float v22; 
  double Value; 
  float v24; 
  float v25; 
  double Intensity; 
  float v27; 
  double v28; 
  unsigned int m_wheelCount; 
  unsigned int v30; 
  float *p_m_suspDeformRatio; 
  unsigned int v33; 
  __int64 v34; 
  float *v43; 
  __int64 v44; 
  __int128 v46; 
  __int128 v47; 
  float m_timeInAir; 
  float v51; 
  double v52; 
  int *v53; 
  float *v54; 
  float *v55; 
  float *v56; 
  float *v57; 
  float *v58; 
  float *v59; 
  int *v60; 
  BgVehicleEventSystem *v63; 
  float m_t; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  int v72; 
  float v73; 
  __int128 v74; 
  __int128 v75; 
  __int128 v76; 
  __int128 v77; 
  __int128 v78; 
  __int128 v79; 
  __int128 v80; 

  if ( Physics_IsPredictiveWorld(this->m_worldId) && !this->m_pmoveObject )
  {
    if ( this->m_playerControlled )
    {
      if ( this->IsInAir(this) )
      {
        BgVehiclePhysicsGround::RumbleData::GetIntensity(&this->m_rumble);
      }
      else
      {
        v80 = v2;
        v79 = v3;
        v78 = v4;
        v77 = v5;
        v76 = v6;
        v75 = v7;
        v74 = v8;
        NormalSpeed = BgVehiclePhysics::GetNormalSpeed(this);
        v12 = LODWORD(this->m_linearVelocityWs.v[0]);
        v13 = this->m_linearVelocityWs.v[1];
        LODWORD(v14) = LODWORD(NormalSpeed) & _xmm;
        v15 = v12;
        *(float *)&v15 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(v13 * v13)) + (float)(this->m_linearVelocityWs.v[2] * this->m_linearVelocityWs.v[2]));
        _XMM1 = v15;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm10, xmm0
        }
        v19 = LODWORD(v13);
        *(float *)&v19 = (float)((float)(v13 * (float)(1.0 / *(float *)&_XMM0)) * this->m_transform.m[0].v[1]) + (float)((float)(*(float *)&v12 * (float)(1.0 / *(float *)&_XMM0)) * this->m_transform.m[0].v[0]);
        _XMM0 = v19 & (unsigned int)_xmm;
        __asm { vmaxss  xmm6, xmm0, xmm7 }
        *(double *)&_XMM0 = BgVehiclePhysicsGround::GetDriftingRatio(this);
        v66 = (float)(*(float *)&_XMM0 * (float)(1.0 - (float)((float)(*(float *)&_XMM6 * *(float *)&_XMM6) * *(float *)&_XMM6))) * v14;
        *(double *)&_XMM0 = I_fclamp(1.0 - this->m_avgBlockRatio, 0.0, 1.0);
        v67 = (float)(scaleIntensity * 0.30000001) * *(float *)&_XMM0;
        if ( BgVehiclePhysicsGround::IsBraking(this) )
          v22 = scaleIntensity * v14;
        else
          v22 = 0.0;
        v71 = v22;
        Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
        v24 = (float)(COERCE_FLOAT(LODWORD(Value) & _xmm) * (float)(this->m_wheels[1].m_skid + this->m_wheels[0].m_skid)) * 0.1;
        v25 = (float)((float)(v24 * scaleIntensity) * (float)(v24 * scaleIntensity)) * (float)(v24 * scaleIntensity);
        v70 = v25;
        Intensity = BgVehiclePhysicsGround::RumbleData::GetIntensity(&this->m_rumble);
        v72 = SLODWORD(Intensity);
        v27 = *(float *)&Intensity;
        v68 = v14 * this->m_rumble.m_scaleWithSpeed;
        v28 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 6u);
        v69 = COERCE_FLOAT(LODWORD(v28) & _xmm) * 0.050000001;
        if ( BgVehiclePhysicsGround::HasMoveOrInput(this) )
        {
          m_wheelCount = this->m_wheelCount;
          v30 = 0;
          _XMM3 = 0i64;
          if ( m_wheelCount >= 4 )
          {
            p_m_suspDeformRatio = &this->m_wheels[1].m_suspDeformRatio;
            v33 = ((m_wheelCount - 4) >> 2) + 1;
            v34 = v33;
            v30 = 4 * v33;
            do
            {
              _XMM0 = *((unsigned int *)p_m_suspDeformRatio - 38);
              p_m_suspDeformRatio += 152;
              __asm
              {
                vmaxss  xmm2, xmm0, xmm3
                vcmpless xmm0, xmm2, xmm1
                vblendvps xmm2, xmm2, xmm1, xmm0
              }
              _XMM1 = *((unsigned int *)p_m_suspDeformRatio - 114);
              __asm
              {
                vmaxss  xmm4, xmm1, xmm2
                vcmpless xmm0, xmm4, xmm3
                vblendvps xmm0, xmm4, xmm3, xmm0
              }
              v65 = *(float *)&_XMM0;
              _XMM3 = (unsigned int)_XMM0;
              --v34;
            }
            while ( v34 );
          }
          if ( v30 < m_wheelCount )
          {
            v43 = &this->m_wheels[v30].m_suspDeformRatio;
            v44 = m_wheelCount - v30;
            do
            {
              _XMM1 = *(unsigned int *)v43;
              v43 += 38;
              __asm { vmaxss  xmm3, xmm1, xmm3 }
              --v44;
            }
            while ( v44 );
          }
          *((_QWORD *)&v46 + 1) = *((_QWORD *)&_XMM3 + 1);
          *(double *)&v46 = I_fclamp(*(float *)&_XMM3, 0.0, 1.0);
        }
        else
        {
          v46 = 0i64;
        }
        v47 = v46;
        *(float *)&v47 = (float)(*(float *)&v46 - 0.2) * 1.25;
        _XMM1 = v47;
        m_timeInAir = this->m_timeInAir;
        __asm { vmaxss  xmm2, xmm1, xmm7 }
        v51 = 0.0;
        v65 = *(float *)&_XMM2 * 0.5;
        if ( m_timeInAir <= 0.0 )
        {
          v52 = I_fclamp(1.0 - (float)(COERCE_FLOAT(LODWORD(m_timeInAir) & _xmm) * 4.0), 0.0, 1.0);
          v51 = *(float *)&v52 * v14;
        }
        v53 = (int *)&v70;
        v54 = &v69;
        if ( v25 <= v22 )
          v53 = (int *)&v71;
        v55 = &v66;
        v73 = v51;
        if ( v66 <= *(float *)v53 )
          v55 = (float *)v53;
        v56 = (float *)&v72;
        if ( v27 <= *v55 )
          v56 = v55;
        v57 = &v67;
        if ( v67 <= *v56 )
          v57 = v56;
        v58 = &v68;
        if ( v68 <= *v57 )
          v58 = v57;
        v59 = &v65;
        if ( (float)(*(float *)&_XMM2 * 0.5) <= *v58 )
          v59 = v58;
        v60 = (int *)&v73;
        if ( v69 <= *v59 )
          v54 = v59;
        if ( v51 <= *v54 )
          v60 = (int *)v54;
        _XMM0 = (unsigned int)*v60;
        __asm { vmaxss  xmm6, xmm0, xmm11 }
      }
      v63 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
      ((void (__fastcall *)(BgVehicleEventSystem *))v63->CarGamepadRumble)(v63);
    }
    m_t = this->m_rumble.m_t;
    if ( m_t > 0.0 && this->m_rumble.m_duration > 0.0 && this->m_rumble.m_intensity > 0.0 )
    {
      this->m_rumble.m_t = m_t - deltaTime;
      if ( (float)(m_t - deltaTime) <= 0.0 )
        *(_QWORD *)&this->m_rumble.m_intensity = 0i64;
    }
  }
}

/*
==============
BgVehiclePhysicsTank::ApplyRumble
==============
*/
void BgVehiclePhysicsTank::ApplyRumble(BgVehiclePhysicsTank *this, float deltaTime)
{
  double Value; 
  float v5; 
  double NormalSpeed; 
  float v7; 
  double v8; 
  float v9; 
  float *v10; 
  BgVehicleEventSystem *v11; 
  int *v12; 
  float m_t; 
  float v16; 
  float v17; 
  float v18; 

  if ( Physics_IsPredictiveWorld(this->m_worldId) && !this->m_pmoveObject )
  {
    if ( this->m_playerControlled )
    {
      Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
      v5 = (float)(COERCE_FLOAT(LODWORD(Value) & _xmm) * COERCE_FLOAT(LODWORD(Value) & _xmm)) * 0.15000001;
      v16 = v5;
      NormalSpeed = BgVehiclePhysics::GetNormalSpeed(this);
      v7 = COERCE_FLOAT(LODWORD(NormalSpeed) & _xmm) * 0.0099999998;
      v18 = v7;
      v8 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 6u);
      v9 = COERCE_FLOAT(LODWORD(v8) & _xmm) * 0.1;
      v17 = v9;
      BgVehiclePhysicsGround::RumbleData::GetIntensity(&this->m_rumble);
      v10 = &v16;
      if ( v5 <= v9 )
        v10 = &v17;
      v11 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
      v12 = (int *)&v18;
      if ( v7 <= *v10 )
        v12 = (int *)v10;
      _XMM0 = (unsigned int)*v12;
      __asm { vmaxss  xmm1, xmm0, xmm7 }
      ((void (__fastcall *)(BgVehicleEventSystem *))v11->CarGamepadRumble)(v11);
    }
    m_t = this->m_rumble.m_t;
    if ( m_t > 0.0 && this->m_rumble.m_duration > 0.0 && this->m_rumble.m_intensity > 0.0 )
    {
      this->m_rumble.m_t = m_t - deltaTime;
      if ( (float)(m_t - deltaTime) <= 0.0 )
        *(_QWORD *)&this->m_rumble.m_intensity = 0i64;
    }
  }
}

/*
==============
BgVehiclePhysicsGround::ApplySingleSuspensionForce
==============
*/
void BgVehiclePhysicsGround::ApplySingleSuspensionForce(BgVehiclePhysicsGround *this, float deltaTime, const BgVehiclePhysicsGround::Wheel *wheel)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  vec3_t impulseWs; 

  LODWORD(v3) = LODWORD(wheel->m_suspDirWs.v[0]) ^ _xmm;
  LODWORD(v4) = LODWORD(wheel->m_suspDirWs.v[1]) ^ _xmm;
  LODWORD(v5) = LODWORD(wheel->m_suspDirWs.v[2]) ^ _xmm;
  v6 = (float)((float)((float)((float)(v4 * wheel->m_contactNormalWs.v[1]) + (float)(v3 * wheel->m_contactNormalWs.v[0])) + (float)(v5 * wheel->m_contactNormalWs.v[2])) * wheel->m_suspForce) * deltaTime;
  impulseWs.v[0] = v6 * v3;
  impulseWs.v[2] = v6 * v5;
  impulseWs.v[1] = v6 * v4;
  BgVehiclePhysics::AccumulateImpulse(this, &impulseWs, &wheel->m_hardPointWs);
}

/*
==============
BgVehiclePhysicsCarBase::ApplySteering
==============
*/
void BgVehiclePhysicsCarBase::ApplySteering(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  const dvar_t *v3; 

  if ( !this->m_flatTire )
  {
    v3 = DCONST_DVARBOOL_bg_vehSteeringNew;
    if ( !DCONST_DVARBOOL_bg_vehSteeringNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSteeringNew") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled )
      goto LABEL_8;
  }
  if ( this->m_vehicleAnimProfile != VEH_ANIMPROFILE_VINDIA )
    BgVehiclePhysicsCarBase::ApplySteeringWithFlatTire(this, deltaTime);
  else
LABEL_8:
    BgVehiclePhysicsCarBase::ApplySteeringLegacy(this, deltaTime);
}

/*
==============
BgVehiclePhysicsSentryDrone::ApplySteering
==============
*/
void BgVehiclePhysicsSentryDrone::ApplySteering(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  float v3; 
  float v4; 
  double Value; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  float v8; 
  double v9; 
  vec3_t outVelLs; 

  v3 = FLOAT_1_0;
  v4 = FLOAT_1_0;
  if ( !this->m_wheelInContactCount )
  {
    if ( Physics_IsRigidBodyValid(this->m_worldId, this->m_lastColliderBodyId) && this->m_timeSinceLastCollision < 0.25 )
      v4 = FLOAT_0_5;
    else
      v4 = 0.0;
  }
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  if ( *(float *)&Value < 0.0 )
  {
    v6 = DCONST_DVARBOOL_bg_wheelsonReverseSteering;
    if ( !DCONST_DVARBOOL_bg_wheelsonReverseSteering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonReverseSteering") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      v3 = FLOAT_N1_0;
  }
  v7 = DCONST_DVARFLT_bg_wheelsonTurnFactor;
  if ( !DCONST_DVARFLT_bg_wheelsonTurnFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonTurnFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.value;
  v9 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  outVelLs.v[2] = (float)((float)((float)((float)((float)((float)(*(float *)&v9 * VELOCITY_FACTOR_COMP) * this->m_steering.m_factor) * v3) * v4) * (float)(YAW_DEG_SEC_0 * 0.017453292)) * k_1) * v8;
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
}

/*
==============
BgVehiclePhysicsTank::ApplySteering
==============
*/
void BgVehiclePhysicsTank::ApplySteering(BgVehiclePhysicsTank *this, float deltaTime)
{
  bool IsReversing; 
  const dvar_t *v4; 
  float v11; 
  vec3_t outVelLs; 

  if ( !this->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 2609, ASSERT_TYPE_ASSERT, "(m_wheelCount > 0)", (const char *)&queryFormat, "m_wheelCount > 0") )
    __debugbreak();
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  IsReversing = BgVehiclePhysicsGround::IsReversing(this);
  v4 = DCONST_DVARFLT_bg_bradleyTimeToFullSteer;
  _XMM0 = IsReversing;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_N1_0);
  __asm { vblendvps xmm1, xmm0, xmm6, xmm2 }
  if ( !DCONST_DVARFLT_bg_bradleyTimeToFullSteer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyTimeToFullSteer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  _XMM0 = v4->current.unsignedInt;
  __asm { vmaxss  xmm3, xmm0, cs:__real@3c23d70a }
  v11 = this->m_controlEx.steeringTimeAdaptive / *(float *)&_XMM3;
  I_fclamp(v11, 0.0, 1.0);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  outVelLs.v[2] = (float)((float)((float)((float)((float)(*(float *)&_XMM0 * (float)(YAW_DEG_SEC * 0.017453292)) * k_0) * this->m_steering.m_factor) * VELOCITY_FACTOR_COMP) * *(float *)&_XMM1) * v11;
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
}

/*
==============
BgVehiclePhysicsTwoWheeled::ApplySteering
==============
*/
void BgVehiclePhysicsTwoWheeled::ApplySteering(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  double Value; 
  float v5; 
  double NormalSpeedPlane; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  double v11; 
  double v12; 
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  v5 = *(float *)&Value;
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
  if ( *(float *)&NormalSpeedPlane >= 0.050000001 )
  {
    v8 = *(float *)&NormalSpeedPlane * 2.0;
    I_fclamp(*(float *)&NormalSpeedPlane * 2.0, 0.0, 1.0);
    v7 = v8;
  }
  else
  {
    v7 = 0.0;
  }
  LODWORD(v9) = COERCE_UNSIGNED_INT((float)((float)(this->m_transform.m[1].v[1] * GLOBAL_UP->v[1]) + (float)(GLOBAL_UP->v[0] * this->m_transform.m[1].v[0])) + (float)(this->m_transform.m[1].v[2] * GLOBAL_UP->v[2])) & _xmm;
  if ( v9 <= 0.69999999 )
    LODWORD(v10) = COERCE_UNSIGNED_INT((float)(deltaTime * v7) * v5) ^ _xmm;
  else
    v10 = 0.0;
  v11 = I_fclamp(v10 + outVelLs.v[0], -1.0, 1.0);
  outVelLs.v[0] = *(float *)&v11;
  v12 = I_fclamp((float)((float)((float)((float)((float)(1.0 - (float)((float)((float)(1.0 - v9) * (float)(1.0 - v9)) * (float)(1.0 - v9))) * 3.5) + (float)(v7 * 4.0)) * v5) * deltaTime) + outVelLs.v[2], -1.0, 1.0);
  outVelLs.v[2] = *(float *)&v12;
  BgVehiclePhysics::DampLerp(&outVelLs.v[2], 0.0, deltaTime, 4.0);
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
}

/*
==============
BgVehiclePhysicsCarBase::ApplySteeringLegacy
==============
*/
void BgVehiclePhysicsCarBase::ApplySteeringLegacy(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  float m_timeToControl; 
  double Value; 
  float m_offsetPoint; 
  int v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float m_offsetPointUp; 
  float v15; 
  float v16; 
  double v17; 
  float v18; 
  unsigned int m_contactBodyId; 
  float v30; 
  const dvar_t *v31; 
  unsigned int m_vehicleAnimProfile; 
  int v35; 
  unsigned int v36; 
  int v37; 
  __int128 v41; 
  const dvar_t *v42; 
  __int128 unsignedInt; 
  float v44; 
  __int128 v46; 
  double v47; 
  const dvar_t *v48; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  double v55; 
  __int64 m_wheelInContactCount; 
  float v57; 
  float m_wheelCount; 
  double v59; 
  float m_returnSpeed; 
  const dvar_t *v61; 
  float v62; 
  float m_maxYawSpeed; 
  const dvar_t *v64; 
  float v65; 
  float v66; 
  double v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  vec3_t atPointWs; 
  vec3_t outVelLs; 
  vec3_t impulseWs; 

  m_timeToControl = this->m_steering.m_timeToControl;
  _XMM8 = 0i64;
  this->m_steering.m_timeToControl = m_timeToControl - deltaTime;
  if ( (float)(m_timeToControl - deltaTime) <= 0.0 )
    this->m_steering.m_durationToControl = 0.0;
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 7u);
  m_offsetPoint = this->m_steering.m_offsetPoint;
  _XMM6 = LODWORD(FLOAT_0_5);
  v9 = _xmm;
  LODWORD(v10) = LODWORD(Value) & _xmm;
  v11 = (float)((float)(this->m_wheels[0].m_contactPointWs.v[0] + this->m_wheels[1].m_contactPointWs.v[0]) * 0.5) + (float)(m_offsetPoint * this->m_transform.m[0].v[0]);
  v12 = (float)((float)(this->m_wheels[0].m_contactPointWs.v[1] + this->m_wheels[1].m_contactPointWs.v[1]) * 0.5) + (float)(m_offsetPoint * this->m_transform.m[0].v[1]);
  v13 = (float)((float)(this->m_wheels[0].m_contactPointWs.v[2] + this->m_wheels[1].m_contactPointWs.v[2]) * 0.5) + (float)(m_offsetPoint * this->m_transform.m[0].v[2]);
  atPointWs.v[2] = v13;
  LODWORD(v78) = LODWORD(Value) & _xmm;
  atPointWs.v[0] = v11;
  atPointWs.v[1] = v12;
  if ( COERCE_FLOAT(LODWORD(Value) & _xmm) < 0.001 )
  {
    m_offsetPointUp = this->m_steering.m_offsetPointUp;
    v15 = m_offsetPointUp * this->m_transform.m[2].v[1];
    atPointWs.v[0] = (float)(m_offsetPointUp * this->m_transform.m[2].v[0]) + v11;
    v16 = m_offsetPointUp * this->m_transform.m[2].v[2];
    atPointWs.v[1] = v15 + v12;
    atPointWs.v[2] = v16 + v13;
  }
  v17 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  LODWORD(v18) = LODWORD(v17) & _xmm;
  v77 = COERCE_FLOAT(LODWORD(this->m_steering.m_yaw) & _xmm) / this->m_steering.m_yawMaxAngle;
  v76 = (float)(this->m_steering.m_force * 1550.0032) * FIXED_STEERING_FOCE_MULT;
  v75 = (float)(v10 * this->m_steering.m_handbrakeFactor) + 1.0;
  _XMM0 = BgVehiclePhysicsGround::IsBraking(this);
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
  }
  v72 = *(float *)&_XMM0;
  _XMM2 = LODWORD(FLOAT_N1_0);
  __asm
  {
    vcmpless xmm0, xmm8, xmm3
    vblendvps xmm1, xmm2, xmm7, xmm0
    vcmpless xmm0, xmm8, dword ptr [rdi+0AF0h]
    vblendvps xmm0, xmm2, xmm7, xmm0
  }
  *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&_XMM1 + 1);
  v74 = *(float *)&_XMM1 * *(float *)&_XMM0;
  *(double *)&_XMM0 = BgVehiclePhysicsGround::Steering::ChangingDirRatio(&this->m_steering);
  m_contactBodyId = this->m_wheels[0].m_contactBodyId;
  v79 = *(float *)&_XMM0;
  *(float *)&_XMM13 = FLOAT_1_0;
  if ( m_contactBodyId == 0xFFFFFF && this->m_wheels[1].m_contactBodyId == 0xFFFFFF )
  {
    if ( this->IsInAir(this) )
    {
      v30 = this->m_timeSinceLastCollision * 5.0;
      I_fclamp(v30, 0.0, 1.0);
      v31 = DCONST_DVARFLT_bg_vehAirSteerFac;
      if ( !DCONST_DVARFLT_bg_vehAirSteerFac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAirSteerFac") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      *(float *)&_XMM13 = (float)(v30 * v31->current.value) + (float)(1.0 - v30);
    }
    else
    {
      m_vehicleAnimProfile = this->m_vehicleAnimProfile;
      if ( m_vehicleAnimProfile )
      {
        if ( m_vehicleAnimProfile > 0x13 || (v35 = 720916, !_bittest(&v35, m_vehicleAnimProfile)) )
        {
          *(double *)&_XMM0 = I_fclamp(this->m_timeSinceLastCollision * 10.0, 0.0, 1.0);
          *((_QWORD *)&_XMM0 + 1) = 0i64;
          *(float *)&_XMM13 = (float)(1.0 - *(float *)&_XMM0) + (float)(*(float *)&_XMM0 * 0.40000001);
        }
      }
      else
      {
        _XMM0 = LODWORD(this->m_wheels[1].m_timeInAir);
        __asm { vminss  xmm1, xmm0, dword ptr [rdi+360h] }
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        *(double *)&_XMM0 = I_fclamp(1.0 - (float)(*(float *)&_XMM1 / timeToRemoveSteering_0), 0.0, 1.0);
        *(float *)&_XMM13 = *(float *)&_XMM0 * 0.80000001;
      }
    }
  }
  else
  {
    v36 = this->m_vehicleAnimProfile;
    if ( v36 > 0x13 || (v37 = 720916, !_bittest(&v37, v36)) )
    {
      if ( this->m_wheelInContactCount == 2 && m_contactBodyId != 0xFFFFFF )
      {
        _XMM0 = this->m_wheels[1].m_contactBodyId;
        __asm { vpcmpeqd xmm2, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_0_69999999);
        __asm { vblendvps xmm13, xmm1, xmm13, xmm2 }
      }
    }
  }
  *(float *)&_XMM11 = FLOAT_1_0;
  *(double *)&_XMM0 = BgVehiclePhysicsCarBase::GetNormalSpeedRelative(this);
  v41 = _XMM0;
  if ( *(float *)&_XMM0 < threshold_2 )
  {
    v42 = DCONST_DVARFLT_bg_vehSteerSlow;
    if ( !DCONST_DVARFLT_bg_vehSteerSlow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSteerSlow") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    unsignedInt = v42->current.unsignedInt;
    *(double *)&unsignedInt = I_fclamp(*(float *)&unsignedInt, 0.0, 1.0);
    v44 = *(float *)&unsignedInt;
    if ( *(float *)&v41 >= *(float *)&unsignedInt )
    {
      v47 = I_fclamp(*(float *)&v41 / threshold_2, 0.0, 1.0);
      LODWORD(_XMM11) = powf_0(*(float *)&v47, powfExp_0);
      if ( v18 > *(float *)&_XMM11 )
      {
        I_fclamp(*(float *)&v41, v44, v44 + RANG_0);
        v48 = DCONST_DVARFLT_bg_vehOverSteerSlow;
        if ( !DCONST_DVARFLT_bg_vehOverSteerSlow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehOverSteerSlow") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v48);
        *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v41 + 1);
        *(double *)&_XMM0 = I_fclamp((float)((float)(*(float *)&v41 - v44) / RANG_0) + *(float *)&_XMM11, 0.0, 1.0);
        __asm { vmaxss  xmm11, xmm0, xmm6 }
      }
    }
    else
    {
      *(double *)&unsignedInt = I_fclamp(*(float *)&unsignedInt / threshold_2, 0.0, 1.0);
      *(float *)&unsignedInt = powf_0(*(float *)&unsignedInt, powfExp_0);
      v46 = unsignedInt;
      *(float *)&v46 = *(float *)&unsignedInt * (float)((float)(*(float *)&v41 / v44) * (float)(*(float *)&v41 / v44));
      _XMM0 = v46;
      __asm { vmaxss  xmm11, xmm0, xmm15 }
    }
    v9 = _xmm;
  }
  v50 = v72;
  v52 = (float)((float)((float)((float)((float)(deltaTime * v74) * v76) * *(float *)&_XMM11) * v77) * v72) * v75;
  v51 = v52;
  if ( (this->m_wheels[0].m_contactBodyId != 0xFFFFFF || this->m_wheels[1].m_contactBodyId != 0xFFFFFF) && COERCE_FLOAT(LODWORD(v52) & v9) > 0.001 )
  {
    v53 = v52 * this->m_transform.m[1].v[1];
    impulseWs.v[0] = v51 * this->m_transform.m[1].v[0];
    impulseWs.v[2] = v51 * this->m_transform.m[1].v[2];
    impulseWs.v[1] = v53;
    BgVehiclePhysics::AccumulateOnlyAngularImpulse(this, &impulseWs, &atPointWs);
  }
  v54 = FLOAT_1_0;
  if ( this->m_wheelCount > 4 )
  {
    v55 = I_fclamp(this->m_friction.car.tgtFriction / this->m_friction.tread.v[0], 0.0, 1.0);
    m_wheelInContactCount = this->m_wheelInContactCount;
    v54 = 1.0 - (float)(1.0 - *(float *)&v55);
    if ( (unsigned int)(this->m_wheelCount - m_wheelInContactCount) >= 2 )
    {
      v57 = (float)m_wheelInContactCount;
      m_wheelCount = (float)this->m_wheelCount;
      v54 = v54 * (float)(v57 / m_wheelCount);
    }
  }
  v59 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  if ( COERCE_FLOAT(LODWORD(v59) & _xmm) >= 0.001 )
  {
    v61 = DCONST_DVARFLT_bg_vehYawMaxIncrease;
    v73 = (float)(*(float *)&v41 * this->m_steering.m_steerSpeedIncrease) + 1.0;
    if ( !DCONST_DVARFLT_bg_vehYawMaxIncrease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehYawMaxIncrease") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v61);
    v62 = (float)(*(float *)&v41 * v61->current.value) + 1.0;
    if ( v78 >= 0.001 )
    {
      v64 = DCONST_DVARFLT_bg_vehMaxYawSpeedHB;
      if ( !DCONST_DVARFLT_bg_vehMaxYawSpeedHB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMaxYawSpeedHB") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v64);
      m_maxYawSpeed = v64->current.value;
    }
    else
    {
      m_maxYawSpeed = this->m_steering.m_maxYawSpeed;
    }
    v66 = (float)((float)(deltaTime * this->m_steering.m_steerSpeed) * v74) * v73;
    if ( this->m_steering.m_timeToControl <= 0.0 )
    {
      LODWORD(v65) = COERCE_UNSIGNED_INT((float)((float)((float)((float)((float)((float)((float)((float)(v74 * v79) * v54) * *(float *)&_XMM11) * *(float *)&_XMM13) * COERCE_FLOAT(LODWORD(v59) & _xmm)) * v50) * v75) * v62) * m_maxYawSpeed) & _xmm;
      v71 = I_fclamp(v66 + this->m_steering.m_yawLast, COERCE_FLOAT(LODWORD(v65) ^ _xmm), v65);
      outVelLs.v[2] = *(float *)&v71;
    }
    else
    {
      _XMM0 = this->IsInAir(this);
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_0_40000001);
      __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
      outVelLs.v[2] = (float)(*(float *)&_XMM0 * v66) + outVelLs.v[2];
    }
  }
  else
  {
    m_returnSpeed = this->m_steering.m_returnSpeed;
    if ( m_returnSpeed > 0.001 && this->m_steering.m_timeToControl <= 0.0 )
      BgVehiclePhysics::DampLerp(&outVelLs.v[2], 0.0, deltaTime, m_returnSpeed);
  }
  this->m_steering.m_yawLast = outVelLs.v[2];
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
}

/*
==============
BgVehiclePhysicsCarBase::ApplySteeringWithFlatTire
==============
*/
void BgVehiclePhysicsCarBase::ApplySteeringWithFlatTire(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  float v2; 
  __m256i v5; 
  float v6; 
  double v7; 
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  float v9; 
  __int32 v10; 
  __int32 v11; 
  float v12; 
  float v13; 
  float v14; 
  double Value; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  double v22; 
  unsigned int m_contactBodyId; 
  const dvar_t *v32; 
  unsigned int v33; 
  int v36; 
  unsigned int v37; 
  int v38; 
  __int128 v42; 
  double v43; 
  __int128 v44; 
  double v46; 
  const dvar_t *v47; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  double v56; 
  double FlatTireSteeringDeviation; 
  const dvar_t *v58; 
  float v59; 
  const dvar_t *v60; 
  __int128 v62; 
  bool v65; 
  bool v66; 
  float v67; 
  float v68; 
  double v69; 
  __int128 v71; 
  __int128 v72; 
  __int128 v77; 
  float v82; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  __m256i v91; 
  __m256i v92; 
  double v93; 
  vec3_t atPointWs; 
  vec3_t outVelLs; 
  vec3_t impulseWs; 

  v2 = this->m_steering.m_timeToControl - deltaTime;
  _XMM8 = 0i64;
  this->m_steering.m_timeToControl = v2;
  if ( v2 <= 0.0 )
    this->m_steering.m_durationToControl = 0.0;
  v5 = *(__m256i *)&this->m_steering.m_handbrakeFactor;
  v6 = FLOAT_1_0;
  v91 = *(__m256i *)&this->m_steering.m_force;
  v7 = *(double *)&this->m_steering.m_timeToControl;
  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  v92 = v5;
  v93 = v7;
  if ( m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
  {
    v13 = FLOAT_4_0;
    v14 = FLOAT_1_6;
    v82 = FLOAT_3_5999999;
    v9 = FLOAT_4_0;
    goto LABEL_12;
  }
  v9 = *(float *)&v91.m256i_i32[4];
  v10 = m_vehicleAnimProfile - 1;
  if ( !v10 )
  {
    v14 = FLOAT_1_8;
    v12 = *(float *)&v91.m256i_i32[5];
    v82 = FLOAT_3_0;
    v13 = FLOAT_1_0;
    goto LABEL_13;
  }
  v11 = v10 - 10;
  if ( !v11 )
  {
    v14 = FLOAT_1_7;
    v13 = *(float *)&v91.m256i_i32[6];
    v82 = FLOAT_1_4;
LABEL_12:
    v12 = 0.0;
    goto LABEL_13;
  }
  v12 = *(float *)&v91.m256i_i32[5];
  if ( v11 == 8 )
  {
    v13 = FLOAT_2_0;
    v14 = FLOAT_2_7;
    v82 = FLOAT_3_5999999;
  }
  else
  {
    v14 = *(float *)&v92.m256i_i32[2];
    v13 = *(float *)&v91.m256i_i32[6];
    v82 = *(float *)&v92.m256i_i32[1];
  }
LABEL_13:
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 7u);
  _XMM13 = LODWORD(FLOAT_0_5);
  v17 = (float)((float)(this->m_wheels[0].m_contactPointWs.v[0] + this->m_wheels[1].m_contactPointWs.v[0]) * 0.5) + (float)(v9 * this->m_transform.m[0].v[0]);
  LODWORD(v85) = LODWORD(Value) & _xmm;
  v18 = (float)((float)(this->m_wheels[0].m_contactPointWs.v[1] + this->m_wheels[1].m_contactPointWs.v[1]) * 0.5) + (float)(v9 * this->m_transform.m[0].v[1]);
  v19 = (float)((float)(this->m_wheels[0].m_contactPointWs.v[2] + this->m_wheels[1].m_contactPointWs.v[2]) * 0.5) + (float)(v9 * this->m_transform.m[0].v[2]);
  atPointWs.v[2] = v19;
  atPointWs.v[0] = v17;
  atPointWs.v[1] = v18;
  if ( COERCE_FLOAT(LODWORD(Value) & _xmm) < 0.001 )
  {
    v20 = v12 * this->m_transform.m[2].v[1];
    atPointWs.v[0] = (float)(v12 * this->m_transform.m[2].v[0]) + v17;
    v21 = v12 * this->m_transform.m[2].v[2];
    atPointWs.v[1] = v20 + v18;
    atPointWs.v[2] = v21 + v19;
  }
  v22 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  LODWORD(v84) = LODWORD(v22) & _xmm;
  v90 = (float)(*(float *)v91.m256i_i32 * 1550.0032) * FIXED_STEERING_FOCE_MULT;
  _XMM0 = BgVehiclePhysicsGround::IsBraking(this);
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm13, xmm7, xmm2
  }
  v89 = *(float *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N1_0);
  __asm
  {
    vcmpless xmm1, xmm8, xmm9
    vblendvps xmm0, xmm0, xmm7, xmm1
  }
  v86 = *(float *)&_XMM0;
  if ( this->m_flatTire && BgVehiclePhysicsGround::IsReversing(this) )
    v87 = FLOAT_0_2;
  else
    v87 = FLOAT_1_0;
  _XMM0 = v92.m256i_u32[3];
  if ( COERCE_FLOAT(v92.m256i_i32[3] & _xmm) <= 0.001 || COERCE_FLOAT(v92.m256i_i32[5] & _xmm) <= 0.001 || (float)(*(float *)&v92.m256i_i32[3] * *(float *)&v92.m256i_i32[5]) >= 0.0 )
  {
    v88 = FLOAT_1_0;
  }
  else
  {
    *(double *)&_XMM0 = I_fclamp(COERCE_FLOAT(v92.m256i_i32[3] & _xmm) * (float)(1.0 / *(float *)&v91.m256i_i32[1]), 0.0, 1.0);
    *((_QWORD *)&_XMM0 + 1) = 0i64;
    v88 = 1.0 - *(float *)&_XMM0;
  }
  m_contactBodyId = this->m_wheels[0].m_contactBodyId;
  _XMM3 = LODWORD(FLOAT_0_69999999);
  if ( m_contactBodyId == 0xFFFFFF && this->m_wheels[1].m_contactBodyId == 0xFFFFFF )
  {
    if ( this->IsInAir(this) )
    {
      I_fclamp(this->m_timeSinceLastCollision * 6.6666665, 0.0, 1.0);
      v32 = DCONST_DVARFLT_bg_vehAirSteerFac;
      if ( !DCONST_DVARFLT_bg_vehAirSteerFac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAirSteerFac") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      *((_QWORD *)&_XMM0 + 1) = 0i64;
    }
    else
    {
      v33 = this->m_vehicleAnimProfile;
      if ( v33 )
      {
        if ( v33 > 0x13 || (v36 = 720916, !_bittest(&v36, v33)) )
        {
          I_fclamp(this->m_timeSinceLastCollision * 10.0, 0.0, 1.0);
          *((_QWORD *)&_XMM0 + 1) = 0i64;
        }
      }
      else
      {
        _XMM0 = LODWORD(this->m_wheels[1].m_timeInAir);
        __asm { vminss  xmm1, xmm0, dword ptr [rbx+360h] }
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        I_fclamp(1.0 - (float)(*(float *)&_XMM1 / timeToRemoveSteering), 0.0, 1.0);
      }
    }
  }
  else
  {
    v37 = this->m_vehicleAnimProfile;
    if ( v37 > 0x13 || (v38 = 720916, !_bittest(&v38, v37)) )
    {
      if ( this->m_wheelInContactCount == 2 && m_contactBodyId != 0xFFFFFF )
      {
        _XMM0 = this->m_wheels[1].m_contactBodyId;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm3, xmm6, xmm2
        }
      }
    }
  }
  *(float *)&_XMM15 = FLOAT_1_0;
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(this);
  v42 = _XMM0;
  if ( *(float *)&_XMM0 < threshold_1 )
  {
    if ( *(float *)&_XMM0 >= 0.2 )
    {
      v46 = I_fclamp(*(float *)&_XMM0 / threshold_1, 0.0, 1.0);
      LODWORD(_XMM15) = powf_0(*(float *)&v46, powfExp);
      if ( v84 > *(float *)&_XMM15 )
      {
        I_fclamp(*(float *)&v42, 0.2, RANG + 0.2);
        v47 = DCONST_DVARFLT_bg_vehOverSteerSlow;
        if ( !DCONST_DVARFLT_bg_vehOverSteerSlow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehOverSteerSlow") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v47);
        *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v42 + 1);
        *(double *)&_XMM0 = I_fclamp((float)((float)(*(float *)&v42 - 0.2) / RANG) + *(float *)&_XMM15, 0.0, 1.0);
        __asm { vmaxss  xmm15, xmm0, xmm6 }
      }
    }
    else
    {
      v43 = I_fclamp(0.2 / threshold_1, 0.0, 1.0);
      *(float *)&v43 = powf_0(*(float *)&v43, powfExp);
      v44 = *(unsigned __int64 *)&v43;
      *(float *)&v44 = (float)(*(float *)&v43 * (float)(*(float *)&v42 * *(float *)&v42)) * 25.0;
      _XMM2 = v44;
      __asm { vmaxss  xmm15, xmm2, [rsp+1D0h+var_184] }
    }
  }
  _XMM1 = LODWORD(deltaTime) ^ (unsigned __int128)_xmm;
  __asm
  {
    vcmpless xmm0, xmm8, [rsp+1D0h+var_17C]
    vblendvps xmm0, xmm1, xmm2, xmm0
  }
  v53 = (float)((float)((float)((float)((float)((float)(*(float *)&_XMM0 * v86) * v90) * *(float *)&_XMM15) * (float)((float)(1.0 / *(float *)&v91.m256i_i32[1]) * COERCE_FLOAT(v92.m256i_i32[5] & _xmm))) * v89) * (float)((float)(*(float *)v92.m256i_i32 * v85) + 1.0)) * v87;
  v52 = v53;
  if ( this->m_wheels[0].m_contactBodyId == 0xFFFFFF && this->m_wheels[1].m_contactBodyId == 0xFFFFFF )
  {
    v54 = FLOAT_0_001;
  }
  else
  {
    v54 = FLOAT_0_001;
    if ( COERCE_FLOAT(LODWORD(v53) & _xmm) > 0.001 )
    {
      v55 = v53 * this->m_transform.m[1].v[1];
      impulseWs.v[0] = v52 * this->m_transform.m[1].v[0];
      impulseWs.v[2] = v52 * this->m_transform.m[1].v[2];
      impulseWs.v[1] = v55;
      BgVehiclePhysics::AccumulateOnlyAngularImpulse(this, &impulseWs, &atPointWs);
    }
  }
  if ( this->m_wheelCount > 4 )
    I_fclamp(this->m_friction.car.tgtFriction / this->m_friction.tread.v[0], 0.0, 1.0);
  v56 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  if ( COERCE_FLOAT(LODWORD(v56) & _xmm) < v54 )
  {
    if ( this->m_wheels[0].m_contactBodyId == 0xFFFFFF || this->m_wheels[1].m_contactBodyId == 0xFFFFFF || this->m_flatTire || v13 <= v54 || *(float *)&v93 > 0.0 || this->m_timeSinceLastCollision <= 0.5 )
    {
      if ( this->m_wheelInContactCount > 2 && this->m_flatTire )
      {
        FlatTireSteeringDeviation = BgVehiclePhysicsCarBase::GetFlatTireSteeringDeviation(this, deltaTime);
        outVelLs.v[2] = *(float *)&FlatTireSteeringDeviation + outVelLs.v[2];
      }
    }
    else
    {
      BgVehiclePhysics::DampLerp(&outVelLs.v[2], 0.0, deltaTime, v13);
    }
    goto LABEL_96;
  }
  v58 = DCONST_DVARFLT_bg_vehYawMaxIncrease;
  v59 = (float)(v14 * *(float *)&v42) + 1.0;
  if ( !DCONST_DVARFLT_bg_vehYawMaxIncrease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehYawMaxIncrease") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v85 >= v54 )
  {
    v60 = DCONST_DVARFLT_bg_vehMaxYawSpeedHB;
    if ( !DCONST_DVARFLT_bg_vehMaxYawSpeedHB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMaxYawSpeedHB") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v60);
  }
  __asm { vcmpless xmm0, xmm8, [rsp+1D0h+var_17C] }
  v62 = (unsigned int)_xmm;
  _XMM1 = LODWORD(v88) ^ (unsigned __int128)(unsigned int)_xmm;
  __asm { vblendvps xmm0, xmm1, xmm2, xmm0 }
  v65 = (this->m_wheels[0].m_state & 1) != 0 && this->m_wheels[0].m_contactBodyId != 0xFFFFFF;
  v66 = (this->m_wheels[1].m_state & 1) != 0 && this->m_wheels[1].m_contactBodyId != 0xFFFFFF;
  if ( !v65 )
  {
    if ( !v66 )
    {
      v67 = FLOAT_1_0;
      goto LABEL_89;
    }
LABEL_88:
    v67 = FLOAT_0_050000001;
    goto LABEL_89;
  }
  if ( !v66 )
    goto LABEL_88;
  v67 = FLOAT_0_000099999997;
LABEL_89:
  v68 = 0.0;
  if ( this->m_vehicleType == VEH_CAR )
  {
    v69 = I_fclamp(this->m_friction.car.tgtFriction / this->m_friction.tread.v[0], 0.0, 1.0);
    v62 = (unsigned int)_xmm;
    v68 = 1.0 - *(float *)&v69;
  }
  v71 = LODWORD(FLOAT_1_0);
  *(float *)&v71 = 1.0 - (float)((float)((float)((float)(v68 * v68) * (float)(v68 * v68)) * (float)(v68 * v68)) * (float)(v68 * v68));
  _XMM5 = v71;
  if ( *((float *)&v93 + 1) > 0.0 && *(float *)&v93 > 0.0 )
    v6 = 1.0 - (float)(*(float *)&v93 / *((float *)&v93 + 1));
  v72 = LODWORD(deltaTime);
  *(float *)&v72 = deltaTime * v82;
  __asm { vcmpless xmm0, xmm8, [rsp+1D0h+var_17C] }
  _XMM1 = v72 ^ v62;
  __asm { vblendvps xmm0, xmm1, xmm2, xmm0 }
  v77 = _XMM0;
  *(float *)&v77 = *(float *)&_XMM0 * v86;
  __asm { vmaxss  xmm0, xmm5, cs:__real@3e19999a }
  *(float *)&v77 = (float)((float)((float)((float)(*(float *)&v77 * v59) * v67) * v87) * *(float *)&_XMM0) * v6;
  if ( COERCE_FLOAT(v77 & _xmm) > v54 )
  {
    _XMM3 = LODWORD(outVelLs.v[2]);
    *(float *)&v77 = *(float *)&v77 + outVelLs.v[2];
    _XMM0 = v77 & (unsigned int)_xmm;
    __asm
    {
      vcmpltss xmm1, xmm0, xmm9
      vblendvps xmm0, xmm3, xmm2, xmm1
    }
    outVelLs.v[2] = *(float *)&_XMM0;
  }
LABEL_96:
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
}

/*
==============
BgVehiclePhysicsCarBase::ApplySurfaceVelocity
==============
*/
void BgVehiclePhysicsCarBase::ApplySurfaceVelocity(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  unsigned int v2; 
  const dvar_t *v4; 
  double Value; 
  __int64 m_wheelCount; 
  float m_wheelInContactCount; 
  float v8; 
  float v9; 
  float v10; 
  __int64 v11; 
  unsigned int m_contactBodyId; 
  __int128 v13; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v21; 
  double v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  vec3_t linVel; 
  vec3_t angVel; 

  v2 = 0;
  *(_OWORD *)this->m_surfaceLinVel.v = 0ui64;
  *(_QWORD *)&this->m_surfaceAngVel.y = 0i64;
  v4 = DVARBOOL_bg_vehSurfaceVelocity;
  if ( !DVARBOOL_bg_vehSurfaceVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSurfaceVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && !this->IsInAir(this) )
  {
    Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
    m_wheelCount = this->m_wheelCount;
    m_wheelInContactCount = (float)this->m_wheelInContactCount;
    v8 = (float)m_wheelCount;
    v9 = (float)(m_wheelInContactCount / v8) * (float)(m_wheelInContactCount / v8);
    LODWORD(v10) = LODWORD(Value) & _xmm;
    if ( (_DWORD)m_wheelCount )
    {
      while ( 1 )
      {
        v11 = v2;
        m_contactBodyId = this->m_wheels[v11].m_contactBodyId;
        if ( m_contactBodyId != 0xFFFFFF && !Physics_IsRigidBodyStatic(this->m_worldId, m_contactBodyId) )
          break;
        if ( ++v2 >= this->m_wheelCount )
          return;
      }
      Physics_GetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, this->m_wheels[v11].m_contactBodyId, &linVel, &angVel);
      v13 = LODWORD(linVel.v[0]);
      v14 = linVel.v[1];
      v15 = linVel.v[2];
      v16 = v10 * 0.0099999998;
      v17 = v13;
      *(float *)&v17 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v14 * v14)) + (float)(v15 * v15));
      _XMM3 = v17;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      v21 = 1.0 - v10;
      if ( *(float *)&v17 > 0.0 )
      {
        v22 = I_fclamp(1.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(linVel.v[1] * (float)(1.0 / *(float *)&_XMM0)) * this->m_transform.m[0].v[1]) + (float)((float)(linVel.v[0] * (float)(1.0 / *(float *)&_XMM0)) * this->m_transform.m[0].v[0])) + (float)((float)(linVel.v[2] * (float)(1.0 / *(float *)&_XMM0)) * this->m_transform.m[0].v[2])) & _xmm), 0.0, 1.0);
        v23 = *(float *)&v22 * (float)((float)((float)((float)(1.0 - v10) * 0.44999999) + v16) * v9);
        this->m_linearVelocityWs.v[0] = (float)(*(float *)&v13 * v23) + (float)((float)(1.0 - v23) * this->m_linearVelocityWs.v[0]);
        this->m_linearVelocityWs.v[1] = (float)((float)(1.0 - v23) * this->m_linearVelocityWs.v[1]) + (float)(v14 * v23);
      }
      v24 = angVel.v[0];
      v25 = angVel.v[1];
      v26 = angVel.v[2];
      if ( (float)((float)((float)(v24 * v24) + (float)(v25 * v25)) + (float)(v26 * v26)) > 0.0 )
      {
        v27 = (float)((float)(v21 * 0.34999999) + v16) * v9;
        this->m_angularVelocityWs.v[0] = (float)((float)(1.0 - v27) * this->m_angularVelocityWs.v[0]) + (float)(angVel.v[0] * v27);
        this->m_angularVelocityWs.v[1] = (float)((float)(1.0 - v27) * this->m_angularVelocityWs.v[1]) + (float)(v25 * v27);
        this->m_angularVelocityWs.v[2] = (float)((float)(1.0 - v27) * this->m_angularVelocityWs.v[2]) + (float)(v26 * v27);
      }
      this->m_surfaceLinVel.v[0] = *(float *)&v13;
      this->m_surfaceLinVel.v[1] = v14;
      this->m_surfaceLinVel.v[2] = v15;
      this->m_surfaceAngVel.v[0] = v24;
      this->m_surfaceAngVel.v[1] = v25;
      this->m_surfaceAngVel.v[2] = v26;
    }
  }
}

/*
==============
BgVehiclePhysicsGround::ApplySuspensionForces
==============
*/
void BgVehiclePhysicsGround::ApplySuspensionForces(BgVehiclePhysicsGround *this, float deltaTime)
{
  const dvar_t *v2; 
  unsigned int i; 
  __int64 v7; 

  v2 = DCONST_DVARFLT_bg_vehSuspIntegDT;
  *(float *)&_XMM6 = deltaTime;
  if ( !DCONST_DVARFLT_bg_vehSuspIntegDT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSuspIntegDT") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  _XMM0 = v2->current.unsignedInt;
  if ( *(float *)&_XMM0 > 0.001 )
    __asm { vminss  xmm6, xmm0, xmm6 }
  for ( i = 0; i < this->m_wheelCount; ++i )
  {
    v7 = i;
    if ( this->m_wheels[v7].m_contactBodyId != 0xFFFFFF )
      BgVehiclePhysicsGround::ApplySingleSuspensionForce(this, *(float *)&_XMM6, &this->m_wheels[v7]);
  }
}

/*
==============
BgVehiclePhysicsGround::BlowUpTire
==============
*/
void BgVehiclePhysicsGround::BlowUpTire(BgVehiclePhysicsGround *this, int tireIndex)
{
  __int128 v2; 
  const dvar_t *v3; 
  __int64 v4; 
  __int64 v6; 
  const dvar_t *v7; 
  float value; 
  float v13; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  unsigned int m_vehicleAnimProfile; 
  int v21; 
  float v22; 
  hknpBodyId v23; 
  Physics_WorldId m_worldId; 
  unsigned int PhysicsBodyId; 
  __int64 v26; 
  float v27; 
  vec3_t velWs; 
  vec3_t atPointWs; 
  vec3_t impulseWs; 
  vec3_t outVelLs; 
  hkVector4f angVel; 
  __int128 v33; 

  v3 = DVARBOOL_vehicle_tireblown_enabled;
  v4 = tireIndex;
  if ( !DVARBOOL_vehicle_tireblown_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_tireblown_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && (int)v4 >= 0 && (unsigned int)v4 < this->m_wheelCount )
  {
    v6 = v4;
    if ( (this->m_wheels[v4].m_state & 1) == 0 )
    {
      v33 = v2;
      this->m_flatTire = 1;
      if ( (this->m_wheels[v6].m_state & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 28, ASSERT_TYPE_ASSERT, "(!IsFlatTire())", (const char *)&queryFormat, "!IsFlatTire()") )
        __debugbreak();
      this->m_wheels[v6].m_state |= 1u;
      BgVehiclePhysics::SetDynamic(this, 10.0);
      v7 = DCONST_DVARFLT_bg_vehFlatTireImpK;
      if ( !DCONST_DVARFLT_bg_vehFlatTireImpK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFlatTireImpK") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      _XMM8 = LODWORD(FLOAT_0_5);
      __asm { vcmpltss xmm1, xmm8, dword ptr [rbx+0C88h] }
      _XMM7 = LODWORD(FLOAT_1_0);
      value = v7->current.value;
      __asm { vblendvps xmm0, xmm7, xmm0, xmm1 }
      v27 = *(float *)&_XMM0;
      *(double *)&_XMM0 = ((double (__fastcall *)(BGVehicles *))this->m_vehicleSystem->PhysicsGetLastStepTime)(this->m_vehicleSystem);
      v13 = *(float *)&_XMM0;
      *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(this);
      __asm { vmaxss  xmm1, xmm0, cs:__real@3e4ccccd }
      v15 = *(float *)&_XMM0;
      v16 = (float)((float)((float)((float)(1.0 - (float)((float)(1.0 - *(float *)&_XMM1) * (float)(1.0 - *(float *)&_XMM1))) * value) * v27) * this->m_mass) * v13;
      *(float *)&_XMM1 = v16 * this->m_wheels[v6].m_suspDirWs.v[1];
      impulseWs.v[0] = v16 * this->m_wheels[v6].m_suspDirWs.v[0];
      impulseWs.v[2] = v16 * this->m_wheels[v6].m_suspDirWs.v[2];
      impulseWs.v[1] = *(float *)&_XMM1;
      v17 = _mm_cvtepi32_ps((__m128i)(unsigned int)((int)v4 % 2)).m128_f32[0];
      v18 = 20.0 - (float)(v17 * 40.0);
      *(float *)&_XMM0 = v18 * this->m_transform.m[1].v[1];
      atPointWs.v[0] = (float)(v18 * this->m_transform.m[1].v[0]) + this->m_wheels[v6].m_contactPointWs.v[0];
      v19 = v18 * this->m_transform.m[1].v[2];
      atPointWs.v[1] = *(float *)&_XMM0 + this->m_wheels[v6].m_contactPointWs.v[1];
      atPointWs.v[2] = v19 + this->m_wheels[v6].m_contactPointWs.v[2];
      BgVehiclePhysics::ApplyImpulse(this, &impulseWs, &atPointWs);
      m_vehicleAnimProfile = this->m_vehicleAnimProfile;
      if ( m_vehicleAnimProfile > 0x13 || (v21 = 720916, !_bittest(&v21, m_vehicleAnimProfile)) )
      {
        BgVehiclePhysicsGround::SetCurrentFriction(this, (float)((float)(1.0 - v15) * this->m_friction.car.tgtFriction) + (float)(v15 * 0.050000001));
        v22 = v15 * 0.5;
        this->m_steering.m_durationToControl = v15 * 0.5;
        this->m_steering.m_timeToControl = v15 * 0.5;
        this->m_friction.car.timeToRecover = v15;
        v23.m_serialAndIndex = BgVehiclePhysics::GetPhysicsBodyId(this);
        m_worldId = this->m_worldId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 292, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body AngVel when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)m_worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v26) = m_worldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 293, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body AngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v26) )
            __debugbreak();
        }
        if ( (v23.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v26) = m_worldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 294, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body AngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v26) )
            __debugbreak();
        }
        HavokPhysics_GetRigidBodyAngVel(m_worldId, v23, &angVel);
        velWs.v[0] = angVel.m_quad.m128_f32[0];
        velWs.v[2] = angVel.m_quad.m128_f32[2];
        velWs.v[1] = angVel.m_quad.m128_f32[1];
        BgVehiclePhysics::ComputeVelocityLocalSpace(this, &velWs, &outVelLs);
        outVelLs.v[2] = (float)((float)((float)(v15 * 60.0) - (float)((float)(v17 * v15) * 120.0)) * v13) + outVelLs.v[2];
        BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &velWs);
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
        Physics_SetRigidBodyAngVel((const Physics_WorldId)this->m_worldId, PhysicsBodyId, &velWs);
        I_fclamp(v15, 0.30000001, 1.0);
        I_fclamp(v22, 0.1, 1.0);
        BgVehiclePhysicsGround::RumbleData::Add(&this->m_rumble, this, v22, v15);
      }
    }
  }
}

/*
==============
BgVehiclePhysicsGround::BodyIsHeavy
==============
*/
char BgVehiclePhysicsGround::BodyIsHeavy(BgVehiclePhysicsGround *this, unsigned int bodyId)
{
  BGVehicles *m_vehicleSystem; 
  unsigned int (__fastcall *PhysicsExtractIdFromPhysicsUserData)(BGVehicles *, int, entityType_s *, bool *); 
  unsigned int BodyUserData; 
  unsigned int v7; 
  BgVehiclePhysicsManager *v8; 
  BgVehiclePhysics *ObjectById; 
  unsigned int m_vehicleAnimProfile; 
  int v11; 
  char v13; 
  char v14; 

  if ( !Physics_IsRigidBodyValid(this->m_worldId, bodyId) )
    return 0;
  m_vehicleSystem = this->m_vehicleSystem;
  PhysicsExtractIdFromPhysicsUserData = m_vehicleSystem->PhysicsExtractIdFromPhysicsUserData;
  BodyUserData = PhysicsVehicle_GetBodyUserData(this->m_worldId, bodyId);
  v7 = PhysicsExtractIdFromPhysicsUserData(m_vehicleSystem, BodyUserData, (entityType_s *)&v14, (bool *)&v13);
  if ( !BGVehicles::PhysicsIsValid(v7) )
    return 0;
  v8 = this->m_vehicleSystem->PhysicsGetVehiclePhysicsManager(this->m_vehicleSystem);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(v8, v7);
  if ( ObjectById->SupportsFeature(ObjectById, VPFEAT_GROUND_VEHICLE) && (m_vehicleAnimProfile = ObjectById->m_vehicleAnimProfile, m_vehicleAnimProfile <= 0x13) && (v11 = 720916, _bittest(&v11, m_vehicleAnimProfile)) )
    return 1;
  else
    return 0;
}

/*
==============
BgVehiclePhysicsGround::CalcDamage
==============
*/
int BgVehiclePhysicsGround::CalcDamage(BgVehiclePhysicsGround *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDamageDir)
{
  *(_QWORD *)outDamageDir->v = 0i64;
  outDamageDir->v[2] = 0.0;
  if ( dmgInfo->m_targetType == DAMAGE_SCRIPTABLE )
    return BgVehiclePhysicsGround::CalcDamage_Scriptable(this, dmgInfo, outDamageDir);
  if ( dmgInfo->m_targetType == DAMAGE_PLAYER )
    return (int)dmgInfo->m_damageBase;
  return 0;
}

/*
==============
BgVehiclePhysicsGround::CalcDamage_Player
==============
*/
__int64 BgVehiclePhysicsGround::CalcDamage_Player(BgVehiclePhysicsGround *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDmgDir)
{
  if ( dmgInfo->m_targetType == DAMAGE_PLAYER )
    return (unsigned int)(int)dmgInfo->m_damageBase;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1293, ASSERT_TYPE_ASSERT, "(dmgInfo.m_targetType == BgVehiclePhysicsDamageSetup::DAMAGE_PLAYER)", (const char *)&queryFormat, "dmgInfo.m_targetType == BgVehiclePhysicsDamageSetup::DAMAGE_PLAYER") )
    __debugbreak();
  return (unsigned int)(int)dmgInfo->m_damageBase;
}

/*
==============
BgVehiclePhysicsGround::CalcDamage_Scriptable
==============
*/
__int64 BgVehiclePhysicsGround::CalcDamage_Scriptable(BgVehiclePhysicsGround *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDmgDir)
{
  __int128 v3; 
  __int128 v8; 
  __int128 v9; 
  float v13; 
  __int128 v14; 
  float v15; 
  __int128 v16; 
  float m_damageBase; 
  const dvar_t *v21; 
  vec3_t outVelLs; 
  __int128 v25; 

  if ( dmgInfo->m_targetType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1246, ASSERT_TYPE_ASSERT, "(dmgInfo.m_targetType == BgVehiclePhysicsDamageSetup::DAMAGE_SCRIPTABLE)", (const char *)&queryFormat, "dmgInfo.m_targetType == BgVehiclePhysicsDamageSetup::DAMAGE_SCRIPTABLE") )
    __debugbreak();
  if ( BgVehiclePhysics::IsDynamic(this) )
  {
    *(float *)&_XMM7 = FLOAT_1_0;
    v8 = LODWORD(this->m_linearVelocityWs.v[0]);
    v9 = v8;
    *(float *)&v9 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(this->m_linearVelocityWs.v[1] * this->m_linearVelocityWs.v[1])) + (float)(this->m_linearVelocityWs.v[2] * this->m_linearVelocityWs.v[2]));
    _XMM4 = v9;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm7, xmm0
    }
    outDmgDir->v[0] = *(float *)&v8 * (float)(1.0 / *(float *)&_XMM0);
    outDmgDir->v[1] = (float)(1.0 / *(float *)&_XMM0) * this->m_linearVelocityWs.v[1];
    outDmgDir->v[2] = (float)(1.0 / *(float *)&_XMM0) * this->m_linearVelocityWs.v[2];
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  }
  else
  {
    v25 = v3;
    if ( outDmgDir )
    {
      *(double *)outDmgDir->v = *(double *)this->m_history.m_lastLinearVel.v;
      outDmgDir->v[2] = this->m_history.m_lastLinearVel.v[2];
    }
    v13 = outDmgDir->v[1];
    v14 = LODWORD(outDmgDir->v[0]);
    v15 = outDmgDir->v[2];
    *(float *)&_XMM7 = FLOAT_1_0;
    v16 = v14;
    *(float *)&v16 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13 * v13)) + (float)(v15 * v15));
    _XMM3 = v16;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    outDmgDir->v[0] = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM0);
    outDmgDir->v[2] = v15 * (float)(1.0 / *(float *)&_XMM0);
    outDmgDir->v[1] = v13 * (float)(1.0 / *(float *)&_XMM0);
  }
  m_damageBase = dmgInfo->m_damageBase;
  if ( dmgInfo->m_damageSpeed <= 0.0 )
    return (unsigned int)(int)m_damageBase;
  if ( m_damageBase > 0.0 )
  {
    if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_WHOTEL )
    {
      v21 = DCONST_DVARFLT_bg_wheelsonScriptDmgFactor;
      if ( !DCONST_DVARFLT_bg_wheelsonScriptDmgFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonScriptDmgFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      _XMM0 = v21->current.unsignedInt;
      __asm { vmaxss  xmm7, xmm0, xmm7 }
      m_damageBase = dmgInfo->m_damageBase;
    }
    m_damageBase = m_damageBase * *(float *)&_XMM7;
    return (unsigned int)(int)m_damageBase;
  }
  return 0i64;
}

/*
==============
BgVehiclePhysicsCarBase::CanDampVelocities
==============
*/
char BgVehiclePhysicsCarBase::CanDampVelocities(BgVehiclePhysicsCarBase *this)
{
  double v3; 

  if ( this->m_vehicleAnimProfile )
  {
    if ( this->m_wheelInContactCount < this->m_wheelCount - 1 || this->m_timeSinceLastCollisionBody <= 2.0 || this->IsInAir(this) )
      return 0;
  }
  else
  {
    v3 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
    if ( *(float *)&v3 <= 0.89999998 || this->m_wheelInContactCount != 4 || this->m_timeSinceLastCollision <= 2.5 )
      return 0;
  }
  return 1;
}

/*
==============
BgVehiclePhysicsGround::CollisionImpulseCallback
==============
*/
void BgVehiclePhysicsGround::CollisionImpulseCallback(BgVehiclePhysicsGround *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  __int128 v2; 
  __int128 v3; 
  int v6; 
  int v7; 
  unsigned int PhysicsBodyId; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  double v21; 
  __int128 v22; 
  double NormalSpeedPlane; 
  double v26; 
  BgVehicleEventSystem *v27; 
  float v30; 
  unsigned int m_vehicleAnimProfile; 
  int v32; 
  float v33; 
  float v34; 
  BGVehicles *m_vehicleSystem; 
  double v36; 
  float v37; 
  double Float_Internal_DebugName; 
  float v39; 
  float v40; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  __int128 v43; 
  __int128 v44; 

  if ( this->m_timeSinceLastCollision > 0.2 )
    this->m_fwSpeedOnCollision = (float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0]);
  v6 = 0;
  if ( BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
  {
    v44 = v2;
    v43 = v3;
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
    Physics_GetRigidBodyAABB(this->m_worldId, PhysicsBodyId, &aabbMin, &aabbMax);
    v9 = cbData->position.v[0] - (float)((float)(aabbMin.v[0] + aabbMax.v[0]) * 0.5);
    v11 = LODWORD(cbData->position.v[1]);
    v10 = cbData->position.v[1] - (float)((float)(aabbMin.v[1] + aabbMax.v[1]) * 0.5);
    v12 = cbData->position.v[2] - (float)((float)(aabbMin.v[2] + aabbMax.v[2]) * 0.5);
    *(float *)&v11 = fsqrt((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v12 * v12));
    _XMM3 = v11;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    v16 = v9 * (float)(1.0 / *(float *)&_XMM0);
    v17 = v10 * (float)(1.0 / *(float *)&_XMM0);
    v18 = v12 * (float)(1.0 / *(float *)&_XMM0);
    v19 = (float)((float)(v17 * this->m_transform.m[2].v[1]) + (float)(v16 * this->m_transform.m[2].v[0])) + (float)(v18 * this->m_transform.m[2].v[2]);
    *(double *)&_XMM0 = I_fclamp(COERCE_FLOAT(LODWORD(v19) & _xmm), 0.0, 1.0);
    if ( acosf_0(*(float *)&_XMM0) > 0.43633232 )
    {
      v20 = (float)((float)(v17 * this->m_transform.m[0].v[1]) + (float)(v16 * this->m_transform.m[0].v[0])) + (float)(v18 * this->m_transform.m[0].v[2]);
      v21 = I_fclamp(COERCE_FLOAT(LODWORD(v20) & _xmm), 0.0, 1.0);
      if ( acosf_0(*(float *)&v21) > 0.78539819 )
      {
        v7 = 1;
        if ( (float)((float)((float)(v17 * this->m_transform.m[1].v[1]) + (float)(v16 * this->m_transform.m[1].v[0])) + (float)(v18 * this->m_transform.m[1].v[2])) >= 0.0 )
          v7 = 3;
      }
      else
      {
        v7 = 2;
        if ( v20 >= 0.0 )
          v7 = 0;
      }
    }
    else
    {
      v7 = (v19 < 0.0) + 4;
    }
  }
  else
  {
    v7 = 0;
  }
  this->m_collisionZone = v7;
  BgVehiclePhysics::CollisionImpulseCallback(this, cbData);
  v22 = LODWORD(cbData->normal.v[1]);
  *(float *)&v22 = (float)((float)(cbData->normal.v[1] * GLOBAL_UP->v[1]) + (float)(GLOBAL_UP->v[0] * cbData->normal.v[0])) + (float)(cbData->normal.v[2] * GLOBAL_UP->v[2]);
  _XMM1 = v22;
  __asm { vmaxss  xmm2, xmm1, xmm7 }
  I_fclamp((float)(1.0 - (float)((float)(*(float *)&_XMM2 * *(float *)&_XMM2) * *(float *)&_XMM2)) * 1.2, 0.0, 1.0);
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
  v26 = I_fclamp(*(float *)&NormalSpeedPlane * (float)((float)(1.0 - (float)((float)(*(float *)&_XMM2 * *(float *)&_XMM2) * *(float *)&_XMM2)) * 1.2), 0.0, 1.0);
  this->m_rumble.m_duration = 0.1;
  this->m_rumble.m_intensity = *(float *)&v26;
  this->m_rumble.m_t = 0.1;
  LOBYTE(v6) = cbData->bodyIds[0] == BgVehiclePhysics::GetPhysicsBodyId(this);
  v27 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v27->CarImpact(v27, this, &cbData->position, (cbData->surfaceFlagData[v6] >> 19) & 0x3F, &cbData->normal, 1);
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &aabbMin);
  _XMM0 = LODWORD(aabbMin.v[0]);
  *(float *)&v22 = (float)(*(float *)&_XMM0 * *(float *)&_XMM0) + (float)(aabbMin.v[1] * aabbMin.v[1]);
  *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(this);
  __asm { vmaxss  xmm1, xmm0, cs:__real@41200000 }
  v30 = fsqrt(*(float *)&v22) * (float)(1.0 / *(float *)&_XMM1);
  I_fclamp(v30, 0.0, 1.0);
  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile )
  {
    if ( m_vehicleAnimProfile > 0x13 || (v32 = 720916, !_bittest(&v32, m_vehicleAnimProfile)) )
    {
      if ( this->m_steering.m_timeToControl <= 0.0 && (float)((float)((float)(this->m_lastCollisionPosLs.v[1] * this->m_transform.m[2].v[1]) + (float)(this->m_transform.m[2].v[0] * this->m_lastCollisionPosLs.v[0])) + (float)(this->m_lastCollisionPosLs.v[2] * this->m_transform.m[2].v[2])) >= 0.0 )
      {
        v33 = NormalizeRange(v30, 0.85000002);
        BgVehiclePhysicsGround::SetCurrentFriction(this, (float)((float)(1.0 - v33) * this->m_friction.car.tgtFriction) + (float)(v33 * 0.5));
        this->m_friction.car.timeToRecover = NormalizeRange(v30, 0.85000002) * 0.30000001;
        v34 = NormalizeRange(v30, 0.85000002);
        m_vehicleSystem = this->m_vehicleSystem;
        this->m_steering.m_durationToControl = v34;
        this->m_steering.m_timeToControl = v34;
        aabbMin = vec3_origin;
        v36 = ((double (__fastcall *)(BGVehicles *))m_vehicleSystem->PhysicsGetLastStepTime)(m_vehicleSystem);
        v37 = *(float *)&v36;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCollImp, "bg_vehEnhanceSenseOfSpeedCollImp");
        v39 = (float)((float)(*(float *)&Float_Internal_DebugName * this->m_mass) * v30) * v37;
        v40 = v39 * cbData->normal.v[1];
        aabbMin.v[0] = v39 * cbData->normal.v[0];
        aabbMin.v[1] = v40;
        BgVehiclePhysics::ApplyAngularImpulse(this, &aabbMin, &cbData->position);
      }
    }
  }
}

/*
==============
BgVehiclePhysicsGround::ComputeApproxHalfSize
==============
*/
void BgVehiclePhysicsGround::ComputeApproxHalfSize(BgVehiclePhysicsGround *this, vec3_t *outHalfSize)
{
  __int128 v2; 
  __int128 v3; 
  unsigned int PhysicsBodyId; 
  unsigned int m_wheelCount; 
  const dvar_t *v8; 
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  const dvar_t *v23; 
  float v24; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  __int128 v27; 
  __int128 v28; 

  v28 = v2;
  v27 = v3;
  PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
  Physics_GetRigidBodyAABB(this->m_worldId, PhysicsBodyId, &aabbMin, &aabbMax);
  m_wheelCount = this->m_wheelCount;
  if ( m_wheelCount <= 2 )
  {
    v20 = DCONST_DVARFLT_bg_vehFxKFLongOffs;
    LODWORD(v21) = COERCE_UNSIGNED_INT(aabbMax.v[0] - aabbMin.v[0]) & _xmm;
    if ( !DCONST_DVARFLT_bg_vehFxKFLongOffs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFLongOffs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v22 = aabbMax.v[1] - aabbMin.v[1];
    outHalfSize->v[0] = (float)(v21 * 0.5) + v20->current.value;
    v17 = DCONST_DVARFLT_bg_vehFxKFWidthOffs;
    if ( !DCONST_DVARFLT_bg_vehFxKFWidthOffs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFWidthOffs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v19 = COERCE_FLOAT(LODWORD(v22) & _xmm) * 0.5;
  }
  else
  {
    v8 = DCONST_DVARFLT_bg_vehFxKFLongOffs;
    v9 = m_wheelCount - 2;
    v10 = this->m_wheels[v9].m_hardPointWs.v[0] - this->m_wheels[0].m_hardPointWs.v[0];
    v11 = this->m_wheels[v9].m_hardPointWs.v[1] - this->m_wheels[0].m_hardPointWs.v[1];
    v12 = this->m_wheels[v9].m_hardPointWs.v[2] - this->m_wheels[0].m_hardPointWs.v[2];
    v13 = fsqrt((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12));
    if ( !DCONST_DVARFLT_bg_vehFxKFLongOffs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFLongOffs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    outHalfSize->v[0] = (float)(v13 * 0.5) + v8->current.value;
    v14 = this->m_wheels[1].m_hardPointWs.v[0] - this->m_wheels[0].m_hardPointWs.v[0];
    v15 = this->m_wheels[1].m_hardPointWs.v[1] - this->m_wheels[0].m_hardPointWs.v[1];
    v16 = this->m_wheels[1].m_hardPointWs.v[2] - this->m_wheels[0].m_hardPointWs.v[2];
    v17 = DCONST_DVARFLT_bg_vehFxKFWidthOffs;
    v18 = fsqrt((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16));
    if ( !DCONST_DVARFLT_bg_vehFxKFWidthOffs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFWidthOffs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v19 = v18 * 0.5;
  }
  outHalfSize->v[1] = v19 + v17->current.value;
  v23 = DCONST_DVARFLT_bg_vehFxKFHeightFac;
  LODWORD(v24) = COERCE_UNSIGNED_INT(aabbMax.v[2] - aabbMin.v[2]) & _xmm;
  if ( !DCONST_DVARFLT_bg_vehFxKFHeightFac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFHeightFac") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  outHalfSize->v[2] = v24 * v23->current.value;
}

/*
==============
BgVehiclePhysicsGround::ComputeAverageWheelValues
==============
*/
void BgVehiclePhysicsGround::ComputeAverageWheelValues(BgVehiclePhysicsGround *this)
{
  __int64 m_wheelCount; 
  unsigned int v3; 
  unsigned int v4; 
  float v5; 
  float m_avgSpinSpeed; 
  float v7; 
  float v8; 
  __int64 v9; 
  unsigned int v10; 
  bool v11; 
  double v12; 
  float v13; 
  float v14; 
  float v15; 

  if ( !this->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 2104, ASSERT_TYPE_ASSERT, "(m_wheelCount > 0)", (const char *)&queryFormat, "m_wheelCount > 0") )
    __debugbreak();
  m_wheelCount = this->m_wheelCount;
  v3 = 0;
  *(_QWORD *)&this->m_avgSpinSpeed = 0i64;
  v4 = 0;
  this->m_avgBlockRatio = 0.0;
  v5 = 0.0;
  m_avgSpinSpeed = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  if ( (_DWORD)m_wheelCount )
  {
    do
    {
      v9 = v4;
      v10 = v3 + 1;
      v11 = this->m_wheels[v9].m_torqueRatio <= 0.001;
      this->m_avgSpinSpeed = COERCE_FLOAT(LODWORD(this->m_wheels[v9].m_spinSpeed) & _xmm) + this->m_avgSpinSpeed;
      if ( v11 )
        v10 = v3;
      v3 = v10;
      v12 = I_fclamp(this->m_wheels[v9].m_skid, 0.0, 1.0);
      v7 = *(float *)&v12 + this->m_avgSkidRatio;
      this->m_avgSkidRatio = v7;
      v8 = this->m_wheels[v9].m_blocked + this->m_avgBlockRatio;
      this->m_avgBlockRatio = v8;
      m_wheelCount = this->m_wheelCount;
      ++v4;
    }
    while ( v4 < (unsigned int)m_wheelCount );
    m_avgSpinSpeed = this->m_avgSpinSpeed;
  }
  v13 = (float)m_wheelCount;
  v14 = 1.0 / v13;
  this->m_avgSpinSpeed = m_avgSpinSpeed * (float)(1.0 / v13);
  if ( v3 )
  {
    v15 = (float)v3;
    v5 = v7 / v15;
  }
  this->m_avgSkidRatio = v5;
  this->m_avgBlockRatio = v8 * v14;
}

/*
==============
BgVehiclePhysicsGround::Steering::ComputeAxis
==============
*/
void BgVehiclePhysicsGround::Steering::ComputeAxis(BgVehiclePhysicsGround::Steering *this, const BgVehiclePhysicsGround *vehicle, unsigned int wheelIndex, vec3_t *forwardWs, vec3_t *sideWs, float ackRatio, float yawMult)
{
  float v11; 
  bool v12; 
  double v13; 
  float v14; 
  vec3_t *v15; 
  float v16; 
  float v17; 
  float v18; 
  vec3_t out; 
  tmat33_t<vec3_t> mat; 

  if ( !forwardWs && !sideWs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 263, ASSERT_TYPE_ASSERT, "(forwardWs != nullptr || sideWs != nullptr)", (const char *)&queryFormat, "forwardWs != nullptr || sideWs != nullptr") )
    __debugbreak();
  LODWORD(v11) = COERCE_UNSIGNED_INT((float)(this->m_yaw * BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehicle, wheelIndex)->m_steerRatio) * yawMult) ^ _xmm;
  v12 = v11 <= 0.0;
  if ( v11 < 0.0 )
  {
    if ( wheelIndex == 1 )
    {
LABEL_10:
      v11 = v11 * ackRatio;
      goto LABEL_11;
    }
    v12 = v11 <= 0.0;
  }
  if ( !v12 && !wheelIndex )
    goto LABEL_10;
LABEL_11:
  v13 = I_fclamp(v11, -90.0, 90.0);
  MatrixRotationZ(&mat, *(float *)&v13);
  AxisTransformVec3(&mat, vehicle->m_transform.m, &out);
  if ( forwardWs )
  {
    v14 = out.v[1];
    forwardWs->v[0] = out.v[0];
    forwardWs->v[2] = out.v[2];
    forwardWs->v[1] = v14;
  }
  if ( sideWs )
  {
    v15 = &vehicle->m_transform.m[2];
    if ( &out == sideWs && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
      __debugbreak();
    if ( v15 == sideWs && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
      __debugbreak();
    v16 = out.v[2];
    v17 = out.v[1];
    v18 = out.v[0];
    sideWs->v[0] = (float)(out.v[1] * vehicle->m_transform.m[2].v[2]) - (float)(out.v[2] * vehicle->m_transform.m[2].v[1]);
    sideWs->v[1] = (float)(v16 * vehicle->m_transform.m[2].v[0]) - (float)(v18 * vehicle->m_transform.m[2].v[2]);
    sideWs->v[2] = (float)(v18 * vehicle->m_transform.m[2].v[1]) - (float)(v17 * v15->v[0]);
  }
}

/*
==============
BgVehiclePhysicsGround::ComputeChassisVibrationNoise
==============
*/
void BgVehiclePhysicsGround::ComputeChassisVibrationNoise(BgVehiclePhysicsGround *this, int time, vec3_t *outNoiseDisp)
{
  __int128 v3; 
  vec3_t *v4; 
  __int128 v8; 
  int v10; 
  float m_yawSpeedAtMaxNoise; 
  unsigned __int128 v14; 
  float m_maxDisp; 
  float m_minDisp; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  float m_playerControlled; 
  float v25; 
  unsigned int v26; 
  const dvar_t *v27; 
  bool v28; 
  double PerlinNoise2dValue; 
  float v31; 
  int v32; 
  int v33; 
  int v34; 
  vec3_t outVelLs; 
  __int128 v37; 

  v4 = outNoiseDisp;
  if ( this->m_chassisNoise.m_enabled && !this->IsInAir(this) )
  {
    v8 = LODWORD(cm.broadphaseMax.v[1]);
    *(float *)&v8 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
    _XMM3 = v8;
    __asm { vmaxss  xmm0, xmm3, xmm2 }
    v10 = (int)*(float *)&_XMM0;
    v37 = v3;
    v34 = (int)*(float *)&_XMM0;
    if ( (int)*(float *)&_XMM0 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1857, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
      __debugbreak();
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
    LODWORD(_XMM8) = 0;
    m_yawSpeedAtMaxNoise = this->m_chassisNoise.m_yawSpeedAtMaxNoise;
    if ( m_yawSpeedAtMaxNoise <= 0.001 )
    {
      _XMM1 = 0i64;
    }
    else
    {
      v14 = LODWORD(outVelLs.v[2]) & (unsigned __int128)(unsigned int)_xmm;
      *(float *)&v14 = COERCE_FLOAT(LODWORD(outVelLs.v[2]) & _xmm) / m_yawSpeedAtMaxNoise;
      _XMM1 = v14;
    }
    m_maxDisp = this->m_chassisNoise.m_maxDisp;
    m_minDisp = this->m_chassisNoise.m_minDisp;
    __asm { vmaxss  xmm9, xmm1, xmm3 }
    if ( m_minDisp > m_maxDisp && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", m_minDisp, m_maxDisp) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm9, xmm7
      vminss  xmm1, xmm0, xmm6
    }
    if ( this->m_chassisNoise.m_basedOnTime )
    {
      v21 = time % v10;
      v20 = time / v10;
    }
    else
    {
      v21 = (int)(float)(this->m_transform.m[3].v[0] - cm.broadphaseMin.v[0]) % v10;
      v20 = (int)(float)(this->m_transform.m[3].v[1] - cm.broadphaseMin.v[1]);
    }
    v22 = v21;
    v32 = v21;
    v23 = v20 % v10;
    v33 = v20 % v10;
    if ( this->m_chassisNoise.m_reduceWhenNotControlled )
    {
      m_playerControlled = (float)this->m_playerControlled;
      I_fclamp(m_playerControlled, 0.5, 1.0);
      v25 = m_playerControlled;
    }
    else
    {
      v25 = FLOAT_1_0;
    }
    v26 = 0;
    if ( this->m_wheelCount )
    {
      do
      {
        switch ( (this->m_wheels[v26].m_surfFlags >> 19) & 0x3F )
        {
          case 2u:
          case 7u:
          case 8u:
          case 0xBu:
          case 0xFu:
          case 0x14u:
          case 0x15u:
            v27 = DCONST_DVARFLT_bg_carHighNoiseSurf;
            if ( !DCONST_DVARFLT_bg_carHighNoiseSurf )
            {
              v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carHighNoiseSurf");
              goto LABEL_26;
            }
            break;
          case 3u:
          case 4u:
          case 6u:
          case 0xAu:
          case 0x10u:
          case 0x11u:
          case 0x12u:
          case 0x13u:
          case 0x1Bu:
          case 0x1Fu:
          case 0x20u:
          case 0x22u:
          case 0x23u:
          case 0x25u:
          case 0x31u:
          case 0x32u:
          case 0x33u:
          case 0x34u:
            v27 = DCONST_DVARFLT_bg_carMidNoiseSurf;
            if ( !DCONST_DVARFLT_bg_carMidNoiseSurf )
            {
              v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carMidNoiseSurf");
              goto LABEL_26;
            }
            break;
          default:
            v27 = DCONST_DVARFLT_bg_carLowNoiseSurf;
            if ( !DCONST_DVARFLT_bg_carLowNoiseSurf )
            {
              v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carLowNoiseSurf");
LABEL_26:
              if ( v28 )
                __debugbreak();
            }
            break;
        }
        Dvar_CheckFrontendServerThread(v27);
        _XMM0 = v27->current.unsignedInt;
        ++v26;
        __asm { vmaxss  xmm8, xmm0, xmm8 }
      }
      while ( v26 < this->m_wheelCount );
      v10 = v34;
      v22 = v32;
      v23 = v33;
      v4 = outNoiseDisp;
    }
    PerlinNoise2dValue = Physics_GetPerlinNoise2dValue(13, v10, v22, v23);
    v31 = (float)((float)(*(float *)&PerlinNoise2dValue * (float)(*(float *)&_XMM1 * *(float *)&_XMM1)) * v25) * *(float *)&_XMM8;
    v4->v[0] = v31 * this->m_chassisNoise.m_scale.v[0];
    v4->v[2] = v31 * this->m_chassisNoise.m_scale.v[2];
    v4->v[1] = v31 * this->m_chassisNoise.m_scale.v[1];
  }
}

/*
==============
BgVehiclePhysicsGround::ComputeCollisionZone
==============
*/
__int64 BgVehiclePhysicsGround::ComputeCollisionZone(BgVehiclePhysicsGround *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  __int64 result; 
  unsigned int PhysicsBodyId; 
  float v6; 
  float v7; 
  __int128 v8; 
  float v9; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  double v18; 
  unsigned int v19; 
  bool v20; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  if ( !BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
    return 0i64;
  PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
  Physics_GetRigidBodyAABB(this->m_worldId, PhysicsBodyId, &aabbMin, &aabbMax);
  v6 = cbData->position.v[0] - (float)((float)(aabbMin.v[0] + aabbMax.v[0]) * 0.5);
  v8 = LODWORD(cbData->position.v[1]);
  v7 = cbData->position.v[1] - (float)((float)(aabbMin.v[1] + aabbMax.v[1]) * 0.5);
  v9 = cbData->position.v[2] - (float)((float)(aabbMin.v[2] + aabbMax.v[2]) * 0.5);
  *(float *)&v8 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v9 * v9));
  _XMM1 = v8;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
  }
  v13 = v6 * (float)(1.0 / *(float *)&_XMM0);
  v14 = v7 * (float)(1.0 / *(float *)&_XMM0);
  v15 = v9 * (float)(1.0 / *(float *)&_XMM0);
  v16 = (float)((float)(v14 * this->m_transform.m[2].v[1]) + (float)(v13 * this->m_transform.m[2].v[0])) + (float)(v15 * this->m_transform.m[2].v[2]);
  *(double *)&_XMM0 = I_fclamp(COERCE_FLOAT(LODWORD(v16) & _xmm), 0.0, 1.0);
  if ( acosf_0(*(float *)&_XMM0) <= 0.43633232 )
    return (unsigned int)(v16 < 0.0) + 4;
  v17 = (float)((float)(v14 * this->m_transform.m[0].v[1]) + (float)(v13 * this->m_transform.m[0].v[0])) + (float)(v15 * this->m_transform.m[0].v[2]);
  v18 = I_fclamp(COERCE_FLOAT(LODWORD(v17) & _xmm), 0.0, 1.0);
  if ( acosf_0(*(float *)&v18) > 0.78539819 )
  {
    v20 = (float)((float)((float)(v14 * this->m_transform.m[1].v[1]) + (float)(v13 * this->m_transform.m[1].v[0])) + (float)(v15 * this->m_transform.m[1].v[2])) < 0.0;
    result = 1i64;
    v19 = 3;
  }
  else
  {
    v19 = 0;
    result = 2i64;
    v20 = v17 < 0.0;
  }
  if ( !v20 )
    return v19;
  return result;
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ComputeEngineSound
==============
*/
void BgVehiclePhysicsAtvQuadNew::ComputeEngineSound(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  const VehicleDef *v4; 
  __int128 v5; 
  bool v6; 
  __int128 v7; 
  VehiclePhysicsNetcodeType m_netcodeType; 
  float m_avgSpinSpeed; 
  float v12; 
  float v13; 
  double Value; 
  int v15; 
  double NormalSpeed; 
  bool v17; 
  BGVehicles *m_vehicleSystem; 
  float maxSpinSpeedRPMBw; 
  double v22; 
  float v23; 
  BgVehiclePhysicsRevSound::ComputeInfo info; 
  char v27; 
  float v28; 
  float v29; 

  if ( Physics_IsPredictiveWorld(this->m_worldId) && !this->m_pmoveObject )
  {
    v4 = this->m_vehicleSystem->PhysicsGetVehicleDef(this->m_vehicleSystem, this->m_vehicleDefIndex);
    if ( v4 )
    {
      v5 = LODWORD(this->m_transform.m[2].v[1]);
      v6 = !this->m_playerControlled;
      info.setup = &v4->revModifier;
      v7 = v5;
      *(float *)&v7 = (float)((float)(*(float *)&v5 * GLOBAL_UP->v[1]) + (float)(this->m_transform.m[2].v[0] * GLOBAL_UP->v[0])) + (float)(this->m_transform.m[2].v[2] * GLOBAL_UP->v[2]);
      _XMM1 = v7;
      __asm { vmaxss  xmm0, xmm1, xmm6 }
      info.inclination = 1.0 - *(float *)&_XMM0;
      if ( v6 || (m_netcodeType = this->m_netcodeType, (m_netcodeType & 0xFFFFFFFC) != 0) || m_netcodeType == VEH_NETCODE_SERVER_AUTH )
      {
        m_vehicleSystem = this->m_vehicleSystem;
        v28 = 0.0;
        v29 = 0.0;
        v27 = 0;
        m_vehicleSystem->PhysicsUnpackLerpStateValues(m_vehicleSystem, this->m_entityNumber, &v28, (bool *)&v27, &v29);
        v15 = _xmm;
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        LODWORD(info.gasInput) = LODWORD(v28) & _xmm;
        *(double *)&_XMM0 = BgVehiclePhysics::GetForwardSpeedOfKeyframed(this);
        LODWORD(info.avgSpinSpeed) = LODWORD(v29) & _xmm;
        info.forwardSpeed = *(float *)&_XMM0;
        info.avgSkidRatio = FLOAT_0_050000001;
        info.isInAir = 0;
        if ( *(float *)&_XMM0 < 0.0 )
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(this);
        else
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(this);
        __asm { vmaxss  xmm1, xmm0, cs:__real@41200000 }
        NormalSpeed = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(info.forwardSpeed / *(float *)&_XMM1) & _xmm), 0.0, 1.0);
        v17 = 1;
      }
      else
      {
        m_avgSpinSpeed = this->m_avgSpinSpeed;
        info.avgSkidRatio = this->m_avgSkidRatio;
        v12 = this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1];
        v13 = this->m_transform.m[0].v[2];
        info.avgSpinSpeed = m_avgSpinSpeed;
        info.forwardSpeed = (float)(v12 + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(v13 * this->m_linearVelocityWs.v[2]);
        Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
        v6 = this->m_wheelInContactCount == 0;
        v15 = _xmm;
        LODWORD(info.gasInput) = LODWORD(Value) & _xmm;
        info.isInAir = v6;
        NormalSpeed = BgVehiclePhysics::GetNormalSpeed(this);
        v17 = 0;
      }
      info.normalSpeed = *(float *)&NormalSpeed;
      if ( info.forwardSpeed < 0.0 )
        maxSpinSpeedRPMBw = info.setup->maxSpinSpeedRPMBw;
      else
        maxSpinSpeedRPMBw = info.setup->maxSpinSpeedRPMFw;
      v22 = BgVehiclePhysicsGround::ComputeApproxMaxRPM(this);
      v23 = *(float *)&v22 + maxSpinSpeedRPMBw;
      _XMM0 = LODWORD(info.gasInput);
      info.maxSpinSpeedRPM = v23;
      __asm { vmaxss  xmm1, xmm0, xmm6 }
      *(float *)&_XMM0 = info.forwardSpeed;
      this->m_revSound.m_throttle = *(float *)&_XMM1;
      info.m_applyInterpolation = v17;
      this->m_revSound.m_brake = 0.0;
      BgVehiclePhysicsRevSound::SetMph(&this->m_revSound, COERCE_FLOAT(_XMM0 & v15) * 0.056818184);
      BgVehiclePhysicsRevSound::Update(&this->m_revSound, deltaTime, &info);
    }
  }
}

/*
==============
BgVehiclePhysicsSentryDrone::ComputeEngineSound
==============
*/
void BgVehiclePhysicsSentryDrone::ComputeEngineSound(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  double Value; 
  double v4; 

  BgVehiclePhysicsRevSound::SetMph(&this->m_revSound, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) & _xmm) * 0.056818184);
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 0);
  this->m_revSound.m_throttle = *(float *)&Value;
  v4 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 1u);
  this->m_revSound.m_brake = *(float *)&v4;
}

/*
==============
BgVehiclePhysicsTank::ComputeEngineSound
==============
*/
void BgVehiclePhysicsTank::ComputeEngineSound(BgVehiclePhysicsTank *this, float deltaTime)
{
  const VehicleDef *v4; 
  __int128 v5; 
  bool v6; 
  __int128 v7; 
  VehiclePhysicsNetcodeType m_netcodeType; 
  __int128 m_avgSpinSpeed_low; 
  int v13; 
  bool v18; 
  double v19; 
  BGVehicles *m_vehicleSystem; 
  float v22; 
  __int128 v24; 
  double TopSpeedForward; 
  __int128 forwardSpeed_low; 
  double v28; 
  float maxSpinSpeedRPMBw; 
  float v30; 
  BgVehiclePhysicsRevSound::ComputeInfo info; 
  char v32; 
  float v33; 
  float v34; 

  if ( Physics_IsPredictiveWorld(this->m_worldId) && !this->m_pmoveObject )
  {
    v4 = this->m_vehicleSystem->PhysicsGetVehicleDef(this->m_vehicleSystem, this->m_vehicleDefIndex);
    if ( v4 )
    {
      v5 = LODWORD(this->m_transform.m[2].v[1]);
      v6 = !this->m_playerControlled;
      info.setup = &v4->revModifier;
      v7 = v5;
      *(float *)&v7 = (float)((float)(*(float *)&v5 * GLOBAL_UP->v[1]) + (float)(this->m_transform.m[2].v[0] * GLOBAL_UP->v[0])) + (float)(this->m_transform.m[2].v[2] * GLOBAL_UP->v[2]);
      _XMM1 = v7;
      __asm { vmaxss  xmm0, xmm1, xmm7 }
      info.inclination = 1.0 - *(float *)&_XMM0;
      if ( v6 || (m_netcodeType = this->m_netcodeType, (m_netcodeType & 0xFFFFFFFC) != 0) || m_netcodeType == VEH_NETCODE_SERVER_AUTH )
      {
        m_vehicleSystem = this->m_vehicleSystem;
        v33 = 0.0;
        v34 = 0.0;
        v32 = 0;
        m_vehicleSystem->PhysicsUnpackLerpStateValues(m_vehicleSystem, this->m_entityNumber, &v33, (bool *)&v32, &v34);
        v13 = _xmm;
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        LODWORD(info.gasInput) = LODWORD(v33) & _xmm;
        *(double *)&_XMM0 = BgVehiclePhysics::GetForwardSpeedOfKeyframed(this);
        v22 = *(float *)&_XMM0 / this->m_wheelCommon.m_radius;
        info.isInAir = 0;
        info.forwardSpeed = *(float *)&_XMM0;
        LODWORD(info.avgSpinSpeed) = LODWORD(v22) & _xmm;
        if ( *(float *)&_XMM0 < 0.0 )
        {
          BgVehiclePhysics::GetTopSpeedReverse(this);
          TopSpeedForward = BgVehiclePhysics::GetTopSpeedForward(this);
          forwardSpeed_low = LODWORD(info.forwardSpeed);
          *(float *)&forwardSpeed_low = info.forwardSpeed / (float)(*(float *)&TopSpeedForward * -0.5);
          _XMM0 = forwardSpeed_low;
        }
        else
        {
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(this);
          __asm { vmaxss  xmm2, xmm0, cs:__real@41200000 }
          v24 = LODWORD(info.forwardSpeed);
          *(float *)&v24 = info.forwardSpeed / *(float *)&_XMM2;
          _XMM0 = v24 & (unsigned int)_xmm;
        }
        I_fclamp(*(float *)&_XMM0, 0.0, 1.0);
        *(double *)&_XMM0 = BgVehiclePhysicsTank::GetNormalYawSpeed(this);
        v18 = 1;
      }
      else
      {
        m_avgSpinSpeed_low = LODWORD(this->m_avgSpinSpeed);
        info.forwardSpeed = (float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2]);
        info.avgSpinSpeed = *(float *)&m_avgSpinSpeed_low;
        *(double *)&m_avgSpinSpeed_low = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
        _XMM6 = m_avgSpinSpeed_low;
        BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
        v13 = _xmm;
        v6 = this->m_wheelInContactCount == 0;
        _XMM1 = _XMM6 & (unsigned int)_xmm;
        __asm
        {
          vcmpltss xmm2, xmm1, xmm2
          vblendvps xmm0, xmm6, xmm0, xmm2
        }
        info.gasInput = *(float *)&_XMM0;
        _XMM0 = LODWORD(info.forwardSpeed);
        info.isInAir = v6;
        if ( info.forwardSpeed < 0.0 )
        {
          v19 = BgVehiclePhysics::GetTopSpeedForward(this);
          *((_QWORD *)&_XMM0 + 1) = 0i64;
          I_fclamp(info.forwardSpeed / (float)(*(float *)&v19 * -0.5), 0.0, 1.0);
        }
        else
        {
          BgVehiclePhysics::GetNormalSpeed(this);
        }
        *(double *)&_XMM0 = BgVehiclePhysicsTank::GetNormalYawSpeed(this);
        v18 = 0;
      }
      __asm { vmaxss  xmm1, xmm0, xmm6 }
      info.normalSpeed = *(float *)&_XMM1;
      v28 = I_fclamp(*(float *)&_XMM1 / speedSkidThres, 0.0, 1.0);
      info.avgSkidRatio = (float)(1.0 - (float)((float)(*(float *)&v28 * *(float *)&v28) * *(float *)&v28)) + (float)(1.0 - *(float *)&v28);
      if ( info.forwardSpeed < 0.0 )
        maxSpinSpeedRPMBw = info.setup->maxSpinSpeedRPMBw;
      else
        maxSpinSpeedRPMBw = info.setup->maxSpinSpeedRPMFw;
      info.maxSpinSpeedRPM = maxSpinSpeedRPMBw;
      v30 = COERCE_FLOAT(LODWORD(info.forwardSpeed) & v13) * 0.056818184;
      this->m_revSound.m_throttle = COERCE_FLOAT(LODWORD(info.gasInput) & v13);
      this->m_revSound.m_brake = 0.0;
      info.m_applyInterpolation = v18;
      BgVehiclePhysicsRevSound::SetMph(&this->m_revSound, v30);
      BgVehiclePhysicsRevSound::Update(&this->m_revSound, deltaTime, &info);
    }
  }
}

/*
==============
BgVehiclePhysicsTechnical::ComputeEngineSound
==============
*/
void BgVehiclePhysicsTechnical::ComputeEngineSound(BgVehiclePhysicsTechnical *this, float deltaTime)
{
  const VehicleDef *v4; 
  double UpInclination; 
  bool v6; 
  VehiclePhysicsNetcodeType m_netcodeType; 
  float m_avgSpinSpeed; 
  float v9; 
  float v10; 
  double Value; 
  int v12; 
  double NormalSpeed; 
  bool v14; 
  BGVehicles *m_vehicleSystem; 
  float maxSpinSpeedRPMBw; 
  double v19; 
  float v20; 
  BgVehiclePhysicsRevSound::ComputeInfo info; 
  char v24; 
  float v25; 
  float v26; 

  if ( Physics_IsPredictiveWorld(this->m_worldId) && !this->m_pmoveObject )
  {
    v4 = this->m_vehicleSystem->PhysicsGetVehicleDef(this->m_vehicleSystem, this->m_vehicleDefIndex);
    if ( v4 )
    {
      info.setup = &v4->revModifier;
      UpInclination = BgVehiclePhysics::GetUpInclination(this);
      v6 = !this->m_playerControlled;
      info.inclination = 1.0 - *(float *)&UpInclination;
      if ( v6 || (m_netcodeType = this->m_netcodeType, (m_netcodeType & 0xFFFFFFFC) != 0) || m_netcodeType == VEH_NETCODE_SERVER_AUTH )
      {
        m_vehicleSystem = this->m_vehicleSystem;
        v25 = 0.0;
        v26 = 0.0;
        v24 = 0;
        m_vehicleSystem->PhysicsUnpackLerpStateValues(m_vehicleSystem, this->m_entityNumber, &v25, (bool *)&v24, &v26);
        v12 = _xmm;
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        LODWORD(info.gasInput) = LODWORD(v25) & _xmm;
        *(double *)&_XMM0 = BgVehiclePhysics::GetForwardSpeedOfKeyframed(this);
        LODWORD(info.avgSpinSpeed) = LODWORD(v26) & _xmm;
        info.forwardSpeed = *(float *)&_XMM0;
        info.avgSkidRatio = FLOAT_0_050000001;
        info.isInAir = 0;
        if ( *(float *)&_XMM0 < 0.0 )
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(this);
        else
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(this);
        __asm { vmaxss  xmm1, xmm0, cs:__real@41200000 }
        NormalSpeed = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(info.forwardSpeed / *(float *)&_XMM1) & _xmm), 0.0, 1.0);
        v14 = 1;
      }
      else
      {
        m_avgSpinSpeed = this->m_avgSpinSpeed;
        info.avgSkidRatio = this->m_avgSkidRatio;
        v9 = this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1];
        v10 = this->m_transform.m[0].v[2];
        info.avgSpinSpeed = m_avgSpinSpeed;
        info.forwardSpeed = (float)(v9 + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(v10 * this->m_linearVelocityWs.v[2]);
        Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
        v6 = this->m_wheelInContactCount == 0;
        v12 = _xmm;
        LODWORD(info.gasInput) = LODWORD(Value) & _xmm;
        info.isInAir = v6;
        NormalSpeed = BgVehiclePhysics::GetNormalSpeed(this);
        v14 = 0;
      }
      info.normalSpeed = *(float *)&NormalSpeed;
      if ( info.forwardSpeed < 0.0 )
        maxSpinSpeedRPMBw = info.setup->maxSpinSpeedRPMBw;
      else
        maxSpinSpeedRPMBw = info.setup->maxSpinSpeedRPMFw;
      v19 = BgVehiclePhysicsGround::ComputeApproxMaxRPM(this);
      v20 = *(float *)&v19 + maxSpinSpeedRPMBw;
      _XMM0 = LODWORD(info.gasInput);
      info.maxSpinSpeedRPM = v20;
      __asm { vmaxss  xmm1, xmm0, xmm6 }
      *(float *)&_XMM0 = info.forwardSpeed;
      this->m_revSound.m_throttle = *(float *)&_XMM1;
      info.m_applyInterpolation = v14;
      this->m_revSound.m_brake = 0.0;
      BgVehiclePhysicsRevSound::SetMph(&this->m_revSound, COERCE_FLOAT(_XMM0 & v12) * 0.056818184);
      BgVehiclePhysicsRevSound::Update(&this->m_revSound, deltaTime, &info);
    }
  }
}

/*
==============
BgVehiclePhysicsGround::ComputeFrontalSuspensionForce
==============
*/
void BgVehiclePhysicsGround::ComputeFrontalSuspensionForce(BgVehiclePhysicsGround *this, float deltaTime, float frontalOffset, unsigned int useIndex)
{
  __int64 v6; 
  double NormalSpeedPlane; 
  float v8; 
  float v9; 
  BgVehiclePhysicsGround::Wheel *v10; 
  float m_suspStiffnessAdaptive; 
  float m_suspDampingAdaptive; 
  unsigned int m_wheelInContactCount; 

  v6 = useIndex;
  if ( this->m_wheelCount != 12 && !BgVehiclePhysics::IsKeyframed(this) && this->m_frontalSuspension > 0.0 )
  {
    NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
    v8 = frontalOffset + (float)(*(float *)&NormalSpeedPlane * TECH_FRONTAL_SUSP_OFFSET_EXTRA);
    v9 = (float)(this->m_wheels[0].m_hardPointWs.v[0] + this->m_wheels[1].m_hardPointWs.v[0]) * 0.5;
    v10 = &this->m_wheels[v6];
    v10->m_hardPointWs.v[0] = v9;
    v10->m_hardPointWs.v[1] = (float)(this->m_wheels[0].m_hardPointWs.v[1] + this->m_wheels[1].m_hardPointWs.v[1]) * 0.5;
    v10->m_hardPointWs.v[2] = (float)(this->m_wheels[0].m_hardPointWs.v[2] + this->m_wheels[1].m_hardPointWs.v[2]) * 0.5;
    v10->m_hardPointWs.v[0] = (float)(v8 * this->m_transform.m[0].v[0]) + v9;
    v10->m_hardPointWs.v[1] = (float)(v8 * this->m_transform.m[0].v[1]) + this->m_wheels[v6].m_hardPointWs.v[1];
    v10->m_hardPointWs.v[2] = (float)(v8 * this->m_transform.m[0].v[2]) + this->m_wheels[v6].m_hardPointWs.v[2];
    _XMM0 = (unsigned int)this->m_vehicleAnimProfile;
    m_suspStiffnessAdaptive = this->m_wheelCommon.m_suspStiffnessAdaptive;
    m_suspDampingAdaptive = this->m_wheelCommon.m_suspDampingAdaptive;
    m_wheelInContactCount = this->m_wheelInContactCount;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_30_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    this->m_wheelCommon.m_suspStiffnessAdaptive = *(float *)&_XMM0;
    this->m_wheelCommon.m_suspDampingAdaptive = 5.0;
    BgVehiclePhysicsGround::ComputeSuspensionForces_SingleWheel(this, deltaTime, v10, v6);
    this->m_wheelCommon.m_suspStiffnessAdaptive = m_suspStiffnessAdaptive;
    this->m_wheelInContactCount = m_wheelInContactCount;
    this->m_wheelCommon.m_suspDampingAdaptive = m_suspDampingAdaptive;
  }
}

/*
==============
BgVehiclePhysicsGround::ComputeSuspensionForces
==============
*/
void BgVehiclePhysicsGround::ComputeSuspensionForces(BgVehiclePhysicsGround *this, float deltaTime)
{
  unsigned int v3; 
  float v4; 
  vec3_t in1; 

  if ( !BgVehiclePhysics::IsKeyframed(this) )
  {
    v3 = 0;
    for ( this->m_wheelInContactCount = 0; v3 < this->m_wheelCount; ++v3 )
    {
      v4 = this->m_wheels[v3].m_centerLs.v[1] + this->m_wheelCommon.m_hardPointOffCenterLs.v[1];
      in1.v[0] = this->m_wheels[v3].m_centerLs.v[0] + this->m_wheelCommon.m_hardPointOffCenterLs.v[0];
      in1.v[2] = this->m_wheels[v3].m_centerLs.v[2] + this->m_wheelCommon.m_hardPointOffCenterLs.v[2];
      in1.v[1] = v4;
      MatrixTransformVector43(&in1, &this->m_transform, &this->m_wheels[v3].m_hardPointWs);
      BgVehiclePhysicsGround::ComputeSuspensionForces_SingleWheel(this, deltaTime, &this->m_wheels[v3], v3);
    }
  }
}

/*
==============
BgVehiclePhysicsGround::ComputeSuspensionForces_SingleWheel
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeSuspensionForces_SingleWheel(BgVehiclePhysicsGround *this, double deltaTime, BgVehiclePhysicsGround::Wheel *wheel, unsigned int windex)
{
  vec3_t *p_m_suspDirWs; 
  __int128 v8; 
  float v9; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  unsigned __int8 v13; 
  float v14; 
  vec3_t *p_m_contactPointWs; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const dvar_t *v22; 
  float v23; 
  float value; 
  double NormalSpeedPlane; 
  vec3_t *p_m_contactNormalWs; 
  float v27; 
  float v28; 
  double v29; 
  float v30; 
  float v31; 
  float v32; 
  double v33; 
  float v34; 
  unsigned int v35; 
  const dvar_t *v36; 
  float v37; 
  float v38; 
  double v39; 
  const dvar_t *v40; 
  float v41; 
  double v42; 
  float m_timeInAir; 
  __int128 v45; 
  const vec3_t *v47; 
  float v48; 
  __int128 v50; 
  float outRawFrac; 
  vec3_t end; 
  vec3_t start; 

  p_m_suspDirWs = &wheel->m_suspDirWs;
  v8 = *(_OWORD *)&deltaTime;
  AxisTransformVec3((const tmat33_t<vec3_t> *)&this->m_transform, &wheel->m_suspDirLs, &wheel->m_suspDirWs);
  v9 = p_m_suspDirWs->v[0];
  v10 = p_m_suspDirWs->v[1];
  v11 = p_m_suspDirWs->v[2];
  v12 = DCONST_DVARFLT_bg_vehFlatTireRad;
  v13 = wheel->m_state & 1;
  v14 = fsqrt((float)((float)(this->m_wheelCommon.m_hardPointOffCenterLs.v[0] * this->m_wheelCommon.m_hardPointOffCenterLs.v[0]) + (float)(this->m_wheelCommon.m_hardPointOffCenterLs.v[1] * this->m_wheelCommon.m_hardPointOffCenterLs.v[1])) + (float)(this->m_wheelCommon.m_hardPointOffCenterLs.v[2] * this->m_wheelCommon.m_hardPointOffCenterLs.v[2]));
  if ( !DCONST_DVARFLT_bg_vehFlatTireRad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFlatTireRad") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  p_m_contactPointWs = &wheel->m_contactPointWs;
  v16 = (float)(this->m_wheelCommon.m_radius - (float)((float)v13 * v12->current.value)) + v14;
  v17 = (float)(v9 * v16) + wheel->m_hardPointWs.v[0];
  v18 = (float)(v10 * v16) + wheel->m_hardPointWs.v[1];
  v19 = (float)(v11 * v16) + wheel->m_hardPointWs.v[2];
  wheel->m_contactPointWs.v[2] = v19;
  wheel->m_contactPointWs.v[0] = v17;
  wheel->m_contactPointWs.v[1] = v18;
  v20 = wheel->m_hardPointWs.v[1];
  v21 = wheel->m_hardPointWs.v[2];
  v22 = DCONST_DVARFLT_bg_vehSuspNoiseAmp;
  start.v[0] = wheel->m_hardPointWs.v[0];
  start.v[1] = v20;
  start.v[2] = v21;
  end.v[2] = v19;
  v23 = fsqrt((float)((float)((float)(v20 - v18) * (float)(v20 - v18)) + (float)((float)(start.v[0] - v17) * (float)(start.v[0] - v17))) + (float)((float)(v21 - v19) * (float)(v21 - v19)));
  end.v[0] = v17;
  end.v[1] = v18;
  if ( !DCONST_DVARFLT_bg_vehSuspNoiseAmp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSuspNoiseAmp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  value = v22->current.value;
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
  p_m_contactNormalWs = &wheel->m_contactNormalWs;
  if ( !PhysicsVehicle_WheelCast(this->m_worldId, this->m_entityNumber, &start, &end, *(float *)&NormalSpeedPlane * value, &outRawFrac, &wheel->m_contactPointWs, &wheel->m_contactNormalWs, &wheel->m_contactBodyId, &wheel->m_surfFlags) )
    goto LABEL_21;
  v27 = v9 * p_m_contactNormalWs->v[0];
  v28 = FLOAT_1_0;
  v29 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10 * wheel->m_contactNormalWs.v[1]) + v27) + (float)(v11 * wheel->m_contactNormalWs.v[2])) ^ _xmm), 0.0, 1.0);
  v30 = wheel->m_hardPointWs.v[1] - wheel->m_contactPointWs.v[1];
  v31 = wheel->m_hardPointWs.v[2] - wheel->m_contactPointWs.v[2];
  v32 = *(float *)&v29;
  v33 = I_fclamp((float)(v23 - fsqrt((float)((float)(v30 * v30) + (float)((float)(wheel->m_hardPointWs.v[0] - p_m_contactPointWs->v[0]) * (float)(wheel->m_hardPointWs.v[0] - p_m_contactPointWs->v[0]))) + (float)(v31 * v31))) / v23, 0.0, 1.0);
  v34 = outRawFrac;
  v35 = wheel->m_state & 1;
  wheel->m_suspDeformRatio = *(float *)&v33;
  wheel->m_suspRawFraction = v34;
  v36 = DCONST_DVARFLT_bg_vehFlatTireSuspK;
  LODWORD(v37) = _mm_cvtepi32_ps((__m128i)v35).m128_u32[0];
  if ( !DCONST_DVARFLT_bg_vehFlatTireSuspK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFlatTireSuspK") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  v38 = (float)((float)((float)(v37 * this->m_wheelCommon.m_suspStiffness) + (float)((float)(1.0 - v37) * this->m_wheelCommon.m_suspStiffnessAdaptive)) * (float)(v23 * wheel->m_suspDeformRatio)) * (float)((float)(v37 * v36->current.value) + (float)(1.0 - v37));
  v39 = PhysicsVehicle_ComputeProjectedPointVelocity(&this->m_centerOfMassWs, &this->m_angularVelocityWs, &this->m_linearVelocityWs, &wheel->m_contactPointWs, &wheel->m_contactNormalWs);
  v40 = DCONST_DVARBOOL_bg_vehSuspGlobalUp;
  v41 = v38 - (float)(*(float *)&v39 * this->m_wheelCommon.m_suspDampingAdaptive);
  if ( !DCONST_DVARBOOL_bg_vehSuspGlobalUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSuspGlobalUp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.enabled )
  {
    v42 = I_fclamp((float)((float)(wheel->m_contactNormalWs.v[1] * GLOBAL_UP->v[1]) + (float)(wheel->m_contactNormalWs.v[0] * GLOBAL_UP->v[0])) + (float)(wheel->m_contactNormalWs.v[2] * GLOBAL_UP->v[2]), 0.0, 1.0);
    *(float *)&v42 = NormalizeRange(*(float *)&v42, 0.5);
    v28 = 1.0 - (float)((float)((float)((float)(1.0 - *(float *)&v42) * (float)(1.0 - *(float *)&v42)) * (float)(1.0 - *(float *)&v42)) * (float)(1.0 - *(float *)&v42));
  }
  if ( v28 > 0.001 )
  {
    m_timeInAir = wheel->m_timeInAir;
    v45 = LODWORD(m_timeInAir);
    *(float *)&v45 = m_timeInAir - *(float *)&v8;
    _XMM0 = v45;
    wheel->m_suspForce = (float)((float)(v32 * this->m_mass) * v28) * v41;
    __asm { vminss  xmm2, xmm0, xmm7 }
    wheel->m_timeInAir = *(float *)&_XMM2;
    if ( m_timeInAir >= 0.0 && *(float *)&_XMM2 <= 0.0 )
      ((void (__fastcall *)(BgVehiclePhysicsGround *, _QWORD))this->WheelMakesContact)(this, windex);
    ++this->m_wheelInContactCount;
  }
  else
  {
LABEL_21:
    v47 = GLOBAL_UP;
    *(_QWORD *)&wheel->m_suspDeformRatio = 0i64;
    wheel->m_suspRawFraction = 1.0;
    wheel->m_contactBodyId = 0xFFFFFF;
    wheel->m_surfFlags = 0;
    p_m_contactNormalWs->v[0] = v47->v[0];
    wheel->m_contactNormalWs.v[1] = v47->v[1];
    wheel->m_contactNormalWs.v[2] = v47->v[2];
    p_m_contactPointWs->v[0] = wheel->m_hardPointWs.v[0];
    wheel->m_contactPointWs.v[1] = wheel->m_hardPointWs.v[1];
    wheel->m_contactPointWs.v[2] = wheel->m_hardPointWs.v[2];
    v48 = wheel->m_timeInAir;
    v50 = v8;
    *(float *)&v50 = *(float *)&v8 + v48;
    _XMM0 = v50;
    __asm { vmaxss  xmm2, xmm0, xmm7 }
    wheel->m_timeInAir = *(float *)&_XMM2;
    if ( v48 <= 0.0 && *(float *)&_XMM2 >= 0.0 )
      ((void (__fastcall *)(BgVehiclePhysicsGround *, _QWORD))this->WheelLosesContact)(this, windex);
  }
}

/*
==============
BgVehiclePhysicsCarBase::ComputeWheelAngularSpeed
==============
*/
bool BgVehiclePhysicsCarBase::ComputeWheelAngularSpeed(BgVehiclePhysicsCarBase *this, BgVehiclePhysicsGround::Wheel *wheel, float wheelForwardSpeed, float surfFric, float deltaTime)
{
  double Value; 
  float v9; 
  float v10; 
  bool result; 
  double NormalSpeedRelative; 
  float v13; 
  bool IsBraking; 
  float v17; 
  double v18; 
  float v19; 
  float v23; 
  bool v24; 
  float m_blocked; 
  float m_torqueRatio; 
  double Float_Internal_DebugName; 
  double v28; 
  float v29; 
  double v30; 
  float v31; 
  float v32; 
  double v33; 
  double v34; 
  float v35; 
  unsigned int m_vehicleAnimProfile; 
  int v40; 

  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  LODWORD(v9) = LODWORD(Value) & _xmm;
  v10 = *(float *)&Value;
  if ( wheel->m_timeInAir > 0.15000001 )
  {
    *(_QWORD *)wheel->m_lateralImpulseWs.v = 0i64;
    wheel->m_lateralImpulseWs.v[2] = 0.0;
    if ( wheel->m_torqueRatio <= 0.001 || v9 <= 0.001 )
    {
      wheel->m_spinSpeed = (float)(1.0 - deltaTime) * wheel->m_spinSpeed;
      wheel->m_skid = 1.0;
      return 0;
    }
    else
    {
      wheel->m_spinSpeed = *(float *)&Value * skidMaxRadSec;
      wheel->m_skid = 1.0;
      return 0;
    }
  }
  NormalSpeedRelative = BgVehiclePhysicsCarBase::GetNormalSpeedRelative(this);
  v13 = *(float *)&NormalSpeedRelative;
  _XMM7 = LODWORD(FLOAT_1_0);
  IsBraking = BgVehiclePhysicsGround::IsBraking(this);
  _XMM10 = 0i64;
  if ( (wheel->m_state & 1) != 0 && wheel->m_contactBodyId != 0xFFFFFF )
  {
    v17 = FLOAT_0_5;
    goto LABEL_24;
  }
  v18 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 7u);
  LODWORD(v19) = LODWORD(v18) & _xmm;
  _XMM0 = (float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_linearVelocityWs.v[0] * this->m_transform.m[0].v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) >= 0.0;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm7, xmm1, xmm2
  }
  v23 = *(float *)&_XMM0 * this->m_friction.car.speedToBlock;
  if ( (float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_linearVelocityWs.v[0] * this->m_transform.m[0].v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) < 0.0 )
    v24 = v10 >= 0.75;
  else
    v24 = v10 <= -0.75;
  if ( v19 > 0.001 && this->m_steering.m_handbrakeFactor > 0.001 && (wheel->m_torqueRatio <= 0.001 || v9 < 0.001) )
  {
    v17 = 1.0 - v19;
    goto LABEL_24;
  }
  if ( IsBraking )
  {
    m_blocked = wheel->m_blocked;
    if ( m_blocked < 1.0 )
      goto LABEL_21;
    if ( v13 >= v23 )
    {
LABEL_22:
      v17 = 1.0 - v9;
      goto LABEL_24;
    }
    if ( m_blocked < 1.0 )
    {
LABEL_21:
      if ( v24 )
        goto LABEL_22;
    }
  }
  v17 = FLOAT_1_0;
LABEL_24:
  wheel->m_blocked = v17;
  m_torqueRatio = wheel->m_torqueRatio;
  if ( m_torqueRatio <= 0.001 || IsBraking || this->m_friction.car.skidBaseFactor <= 0.0 || v9 <= 0.0 )
  {
    wheel->m_skid = 0.0;
    v35 = 0.0;
  }
  else
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehSpeedSkidThreshold, "bg_vehSpeedSkidThreshold");
    v28 = I_fclamp(v13 / *(float *)&Float_Internal_DebugName, 0.0, 1.0);
    v29 = *(float *)&v28;
    v30 = I_fclamp(1.0 - (float)((float)((float)((float)((float)(surfFric * surfFric) * surfFric) * (float)((float)(surfFric * surfFric) * surfFric)) * (float)((float)(surfFric * surfFric) * surfFric)) * (float)((float)(surfFric * surfFric) * surfFric)), 0.0, 1.0);
    v31 = (float)(*(float *)&v30 * 50.0) * (float)(1.0 - v29);
    v32 = 1.0 - (float)((float)(v29 * v29) * v29);
    wheel->m_skid = v31 + v32;
    wheel->m_skid = (float)(v9 * this->m_friction.car.skidBaseFactor) * (float)(v31 + v32);
    v33 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehTimeToSkid, "bg_vehTimeToSkid");
    v34 = I_fclamp((float)(1.0 / *(float *)&v33) * this->m_controlEx.gasTime, 0.0, 1.0);
    m_torqueRatio = wheel->m_torqueRatio;
    v35 = (float)(*(float *)&v34 * *(float *)&v34) * wheel->m_skid;
    wheel->m_skid = v35;
  }
  _XMM0 = LODWORD(FLOAT_N1_0);
  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  __asm
  {
    vcmpless xmm1, xmm10, xmm9
    vblendvps xmm1, xmm0, xmm7, xmm1
  }
  if ( m_vehicleAnimProfile > 0x13 || (v40 = 720916, !_bittest(&v40, m_vehicleAnimProfile)) )
    *(float *)&_XMM7 = wheel->m_blocked;
  result = 1;
  wheel->m_spinSpeed = (float)((float)(wheelForwardSpeed / this->m_wheelCommon.m_radius) + (float)((float)((float)((float)(*(float *)&_XMM1 * skidMaxRadSec) * v35) * (float)((float)((float)(v9 * v9) * (float)(v9 * v9)) * (float)(v9 * v9))) * m_torqueRatio)) * *(float *)&_XMM7;
  return result;
}

/*
==============
BgVehiclePhysicsGround::CreatePhysics
==============
*/
char BgVehiclePhysicsGround::CreatePhysics(BgVehiclePhysicsGround *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  float physics_extraGravityFactor; 
  int v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int *m_axleBodyIds; 
  float outPadding; 
  int sides; 
  float m_radius; 
  unsigned int PhysicsBodyId; 
  vec3_t gravity; 

  BgVehiclePhysics::CreatePhysics(this, vehPhysicsDef);
  physics_extraGravityFactor = vehPhysicsDef->physics_extraGravityFactor;
  Physics_GetGravity((const Physics_WorldId)this->m_worldId, &gravity);
  v5 = Vec3MajorAxis(&gravity);
  v6 = 0;
  v7 = v5;
  *(_QWORD *)this->m_extraGravityFactor.v = 0i64;
  this->m_extraGravityFactor.v[2] = 0.0;
  if ( (unsigned int)v5 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v5, 3) )
    __debugbreak();
  this->m_extraGravityFactor.v[v7] = physics_extraGravityFactor;
  if ( !BgVehiclePhysicsGround::IsAxleBodyCreationEnabled(this) )
    return 1;
  v8 = this->m_wheelCount >> 1;
  if ( !v8 )
    return 1;
  m_axleBodyIds = this->m_axleBodyIds;
  do
  {
    if ( (*m_axleBodyIds & 0xFFFFFF) != 0xFFFFFF )
      PhysicsVehicle_DestroyAxleRigidBody(this->m_worldId, *m_axleBodyIds);
    outPadding = vehPhysicsDef->physics_axleBodyPadding;
    sides = vehPhysicsDef->physics_axleBodySides;
    m_radius = this->m_wheelCommon.m_radius;
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
    *m_axleBodyIds = PhysicsVehicle_CreateAxleRigidBody(this->m_worldId, PhysicsBodyId, &this->m_wheels[2 * v6].m_centerLs, (const vec3_t *)((char *)&this->m_deferActionMgr + 304 * v6 + 752), m_radius, sides, outPadding);
    ++v6;
    ++m_axleBodyIds;
  }
  while ( v6 < v8 );
  return 1;
}

/*
==============
BgVehiclePhysicsTreadedBase::CreatePhysics
==============
*/
char BgVehiclePhysicsTreadedBase::CreatePhysics(BgVehiclePhysicsTreadedBase *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  float physics_extraGravityFactor; 
  int v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int *m_axleBodyIds; 
  float outPadding; 
  int sides; 
  float m_radius; 
  unsigned int PhysicsBodyId; 
  unsigned int v14; 
  vec3_t gravity; 

  BgVehiclePhysics::CreatePhysics(this, vehPhysicsDef);
  physics_extraGravityFactor = vehPhysicsDef->physics_extraGravityFactor;
  Physics_GetGravity((const Physics_WorldId)this->m_worldId, &gravity);
  v5 = Vec3MajorAxis(&gravity);
  v6 = 0;
  v7 = v5;
  *(_QWORD *)this->m_extraGravityFactor.v = 0i64;
  this->m_extraGravityFactor.v[2] = 0.0;
  if ( (unsigned int)v5 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v5, 3) )
    __debugbreak();
  this->m_extraGravityFactor.v[v7] = physics_extraGravityFactor;
  if ( BgVehiclePhysicsGround::IsAxleBodyCreationEnabled(this) )
  {
    v8 = this->m_wheelCount >> 1;
    if ( v8 )
    {
      m_axleBodyIds = this->m_axleBodyIds;
      do
      {
        if ( (*m_axleBodyIds & 0xFFFFFF) != 0xFFFFFF )
          PhysicsVehicle_DestroyAxleRigidBody(this->m_worldId, *m_axleBodyIds);
        outPadding = vehPhysicsDef->physics_axleBodyPadding;
        sides = vehPhysicsDef->physics_axleBodySides;
        m_radius = this->m_wheelCommon.m_radius;
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
        *m_axleBodyIds = PhysicsVehicle_CreateAxleRigidBody(this->m_worldId, PhysicsBodyId, &this->m_wheels[2 * v6].m_centerLs, (const vec3_t *)((char *)&this->m_deferActionMgr + 304 * v6 + 752), m_radius, sides, outPadding);
        ++v6;
        ++m_axleBodyIds;
      }
      while ( v6 < v8 );
    }
  }
  if ( BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
  {
    v14 = BgVehiclePhysics::GetPhysicsBodyId(this);
    PhysicsVehicle_SetSoftContacts(this->m_worldId, v14, 0);
  }
  return 1;
}

/*
==============
BgVehiclePhysicsCarBase::DampVelocitiesAndStop
==============
*/
void BgVehiclePhysicsCarBase::DampVelocitiesAndStop(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  __int64 v2; 
  double Value; 
  float v6; 
  double v7; 
  double PlaneSpeed; 
  float v9; 
  double v10; 
  float v11; 
  float v12; 
  double UpInclination; 
  __int128 v16; 
  float v19; 
  float v20; 
  char v22; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 

  v2 = tls_index;
  if ( dword_148BD2C08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_148BD2C08);
    if ( dword_148BD2C08 == -1 )
    {
      THRESHOLD_TO_OVERDAMP_0 = FLOAT_62500_0;
      j__Init_thread_footer(&dword_148BD2C08);
    }
  }
  if ( dword_148BD2C10 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2) + 1772i64) )
  {
    j__Init_thread_header(&dword_148BD2C10);
    if ( dword_148BD2C10 == -1 )
    {
      THRESHOLD_TO_OVERDAMP_ONSTEER = FLOAT_250000_0;
      j__Init_thread_footer(&dword_148BD2C10);
    }
  }
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  v6 = FLOAT_0_30000001;
  if ( COERCE_FLOAT(LODWORD(Value) & _xmm) > 0.001 )
  {
    if ( this->m_playerControlled )
      goto LABEL_23;
    v20 = FLOAT_0_40000001;
    v19 = FLOAT_0_050000001;
LABEL_22:
    BgVehiclePhysicsGround::DampingVelocities(this, deltaTime, v19, v20);
    goto LABEL_23;
  }
  if ( this->m_vehicleAnimProfile )
  {
    if ( this->m_wheelInContactCount < this->m_wheelCount - 1 || this->m_timeSinceLastCollisionBody <= 2.0 || this->IsInAir(this) )
      goto LABEL_23;
  }
  else
  {
    v7 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
    if ( *(float *)&v7 <= 0.89999998 || this->m_wheelInContactCount != 4 || this->m_timeSinceLastCollision <= 2.5 )
      goto LABEL_23;
  }
  PlaneSpeed = BgVehiclePhysics::GetPlaneSpeed(this);
  v9 = *(float *)&PlaneSpeed * *(float *)&PlaneSpeed;
  v10 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  LODWORD(v11) = LODWORD(v10) & _xmm;
  if ( v9 <= (float)(THRESHOLD_TO_REMOVE_0 * THRESHOLD_TO_REMOVE_0) )
  {
    v12 = v9 / (float)(REMOVE_RANGE_0 * REMOVE_RANGE_0);
    UpInclination = BgVehiclePhysics::GetUpInclination(this);
    BgVehiclePhysicsGround::RemoveMovement(this, (float)(1.0 - *(float *)&UpInclination) * v12, 0.1);
  }
  _XMM0 = LODWORD(THRESHOLD_TO_OVERDAMP_0);
  v16 = 0i64;
  *(float *)&v16 = (float)(v11 > 0.001);
  _XMM4 = v16;
  __asm
  {
    vcmpneqss xmm2, xmm4, xmm7
    vblendvps xmm3, xmm0, xmm1, xmm2
  }
  if ( v9 < *(float *)&_XMM3 )
  {
    v19 = (float)((float)((float)((float)(1.0 - (float)(v9 / *(float *)&_XMM3)) * (float)(1.0 - (float)(v9 / *(float *)&_XMM3))) * (float)(1.0 - (float)(v9 / *(float *)&_XMM3))) * 2.0) + (float)(*(float *)&v16 * 0.60000002);
    v20 = FLOAT_0_30000001;
    goto LABEL_22;
  }
LABEL_23:
  if ( !BgVehiclePhysicsGround::HasMoveOrInput(this) && this->m_playerControlled && !this->IsInAir(this) && MIN_TIME_AFTER_FIRE_FOR_ANGULAR_DAMP < this->m_timeSinceLastFire && this->m_controls.timeToAcceptInput < -1.0 && this->m_timeSinceLastCollision > 2.0 && (this->m_vehicleAnimProfile || this->m_wheels[0].m_contactBodyId != 0xFFFFFF || this->m_wheels[1].m_contactBodyId != 0xFFFFFF || this->m_wheelInContactCount != 2) )
    BgVehiclePhysicsGround::DampingVelocities(this, deltaTime, 0.0, SUSPENSION_EXTRA_ANGULAR_DAMP);
  if ( this->m_flatTire )
  {
    LODWORD(_XMM3) = 0;
    v22 = this->m_wheels[0].m_state & 1;
    if ( v22 && this->m_wheels[0].m_contactBodyId != 0xFFFFFF && (this->m_wheels[1].m_state & 1) != 0 )
    {
      _XMM0 = this->m_wheels[1].m_contactBodyId;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_0_25);
      __asm { vblendvps xmm3, xmm1, xmm3, xmm2; angularDampFrame }
    }
    if ( !v22 || this->m_wheels[0].m_contactBodyId == 0xFFFFFF )
      v26 = 0.0;
    else
      v26 = FLOAT_0_30000001;
    if ( (this->m_wheels[1].m_state & 1) == 0 || this->m_wheels[1].m_contactBodyId == 0xFFFFFF )
      v6 = 0.0;
    v27 = v26 + v6;
    v28 = FLOAT_0_2;
    if ( (this->m_wheels[2].m_state & 1) == 0 || this->m_wheels[2].m_contactBodyId == 0xFFFFFF )
      v29 = 0.0;
    else
      v29 = FLOAT_0_2;
    v30 = v27 + v29;
    if ( (this->m_wheels[3].m_state & 1) == 0 || this->m_wheels[3].m_contactBodyId == 0xFFFFFF )
      v28 = 0.0;
    BgVehiclePhysicsGround::DampingVelocities(this, deltaTime, v30 + v28, *(float *)&_XMM3);
  }
}

/*
==============
BgVehiclePhysicsTreadedBase::DampVelocitiesAndStop
==============
*/
void BgVehiclePhysicsTreadedBase::DampVelocitiesAndStop(BgVehiclePhysicsTreadedBase *this, float deltaTime)
{
  __int128 v2; 
  __int128 v4; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  BgVehiclePhysicsTreadedBase *v11; 
  float v12; 
  float v13; 

  *(double *)&v2 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  v4 = v2 & (unsigned int)_xmm;
  if ( *(float *)&v4 > 0.001 || (*(double *)&v4 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u), v5 = v4 & (unsigned int)_xmm, *(float *)&v5 > 0.001) )
  {
    if ( !this->m_playerControlled )
    {
      v13 = FLOAT_0_5;
      v12 = FLOAT_0_5;
      v11 = this;
LABEL_11:
      BgVehiclePhysicsGround::DampingVelocities(v11, deltaTime, v13, v12);
    }
  }
  else if ( !this->IsInAir(this) )
  {
    *(double *)&v5 = BgVehiclePhysics::GetPlaneSpeed(this);
    v7 = v5;
    *(float *)&v7 = *(float *)&v5 * *(float *)&v5;
    v6 = *(float *)&v5 * *(float *)&v5;
    if ( (float)(*(float *)&v5 * *(float *)&v5) <= (float)(THRESHOLD_TO_REMOVE * THRESHOLD_TO_REMOVE) )
    {
      *(float *)&v7 = *(float *)&v7 / (float)(REMOVE_RANGE * REMOVE_RANGE);
      _XMM2 = v7;
      __asm
      {
        vcmpltss xmm0, xmm2, cs:__real@3c23d70a
        vblendvps xmm6, xmm2, xmm10, xmm0
      }
      *(double *)&_XMM0 = BgVehiclePhysics::GetUpInclination(this);
      BgVehiclePhysicsGround::RemoveMovement(this, (float)(1.0 - *(float *)&_XMM0) * *(float *)&_XMM6, 0.1);
    }
    v11 = this;
    if ( v6 >= THRESHOLD_TO_OVERDAMP )
    {
      v12 = FLOAT_1_0;
      v13 = FLOAT_1_0;
    }
    else
    {
      v12 = FLOAT_0_5;
      v13 = (float)((float)((float)(1.0 - (float)(v6 / THRESHOLD_TO_OVERDAMP)) * (float)(1.0 - (float)(v6 / THRESHOLD_TO_OVERDAMP))) * (float)(1.0 - (float)(v6 / THRESHOLD_TO_OVERDAMP))) * 3.0;
    }
    goto LABEL_11;
  }
  if ( !BgVehiclePhysicsGround::HasMoveOrInput(this) && this->m_playerControlled && MIN_TIME_AFTER_FIRE_FOR_ANGULAR_DAMP < this->m_timeSinceLastFire && this->m_controls.timeToAcceptInput < -1.0 && this->m_timeSinceLastCollision > 1.0 )
    BgVehiclePhysicsGround::DampingVelocities(this, deltaTime, 0.0, SUSPENSION_EXTRA_ANGULAR_DAMP);
}

/*
==============
BgVehiclePhysicsTwoWheeled::DampVelocitiesAndStop
==============
*/
void BgVehiclePhysicsTwoWheeled::DampVelocitiesAndStop(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  double Value; 

  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  BgVehiclePhysicsGround::DampingVelocities(this, deltaTime, (float)(1.0 - COERCE_FLOAT(LODWORD(Value) & _xmm)) * 1.5, 0.1);
}

/*
==============
BgVehiclePhysicsGround::DampingVelocities
==============
*/
void BgVehiclePhysicsGround::DampingVelocities(BgVehiclePhysicsGround *this, float deltaTime, float linearDampFrame, float angularDampFrame)
{
  const dvar_t *v4; 
  __int128 v8; 
  __int128 v11; 

  v4 = DCONST_DVARMPBOOL_bg_vehVelDamping;
  if ( !DCONST_DVARMPBOOL_bg_vehVelDamping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehVelDamping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    if ( linearDampFrame > 0.0 )
    {
      v8 = LODWORD(FLOAT_1_0);
      *(float *)&v8 = 1.0 - (float)(deltaTime * linearDampFrame);
      _XMM1 = v8;
      __asm { vmaxss  xmm2, xmm1, xmm3 }
      this->m_linearVelocityWs.v[0] = *(float *)&_XMM2 * this->m_linearVelocityWs.v[0];
      this->m_linearVelocityWs.v[1] = *(float *)&_XMM2 * this->m_linearVelocityWs.v[1];
      this->m_linearVelocityWs.v[2] = *(float *)&_XMM2 * this->m_linearVelocityWs.v[2];
    }
    if ( angularDampFrame > 0.0 )
    {
      v11 = LODWORD(FLOAT_1_0);
      *(float *)&v11 = 1.0 - (float)(deltaTime * angularDampFrame);
      _XMM1 = v11;
      __asm { vmaxss  xmm2, xmm1, xmm3 }
      this->m_angularVelocityWs.v[0] = *(float *)&_XMM2 * this->m_angularVelocityWs.v[0];
      this->m_angularVelocityWs.v[1] = *(float *)&_XMM2 * this->m_angularVelocityWs.v[1];
      this->m_angularVelocityWs.v[2] = *(float *)&_XMM2 * this->m_angularVelocityWs.v[2];
    }
  }
}

/*
==============
BgVehiclePhysicsCarBase::DeactivationLogic
==============
*/
void BgVehiclePhysicsCarBase::DeactivationLogic(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  BgVehiclePhysics::DeactivationLogic(this, deltaTime);
  if ( !this->m_playerControlled && this->m_timeSinceLastCollisionBody > 2.0 )
    BgVehiclePhysicsGround::DampingVelocities(this, deltaTime, 0.050000001, 1.0);
}

/*
==============
BgVehiclePhysicsTank::DeactivationLogic
==============
*/
void BgVehiclePhysicsTank::DeactivationLogic(BgVehiclePhysicsTank *this, float deltaTime)
{
  double Value; 

  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 3u);
  if ( COERCE_FLOAT(LODWORD(Value) & _xmm) > 0.001 )
    BgVehiclePhysicsGround::RemoveMovement(this, 0.89999998, 0.89999998);
  if ( !this->m_pmoveObject && !this->m_playerControlled && BgVehiclePhysics::IsDynamic(this) && BgVehiclePhysicsGround::IsNotMoving(this, 1.0, 20.0) && this->m_rotSpeedSqEMA < 0.0074999998 && this->m_wheelInContactCount )
    BgVehiclePhysics::SetKeyframed(this, 0);
  BgVehiclePhysics::DeactivationLogic(this, deltaTime);
}

/*
==============
BgVehiclePhysicsTreadedBase::DeactivationLogic
==============
*/
void BgVehiclePhysicsTreadedBase::DeactivationLogic(BgVehiclePhysicsTreadedBase *this, float deltaTime)
{
  if ( !this->m_pmoveObject && !this->m_playerControlled && BgVehiclePhysics::IsDynamic(this) && BgVehiclePhysicsGround::IsNotMoving(this, 1.0, 20.0) && this->m_rotSpeedSqEMA < 0.0074999998 && this->m_wheelInContactCount )
    BgVehiclePhysics::SetKeyframed(this, 0);
  BgVehiclePhysics::DeactivationLogic(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::DebugDraw
==============
*/
void BgVehiclePhysicsGround::DebugDraw(BgVehiclePhysicsGround *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  __int128 v6; 
  vec3_t *v12; 
  unsigned int PhysicsBodyId; 
  float v14; 
  const char *m_defName; 
  __int64 m_vehicleId; 
  __int64 m_entityNumber; 
  float v18; 
  float v19; 
  char *v20; 
  const dvar_t *v21; 
  const char *v22; 
  int integer; 
  float v24; 
  float v25; 
  float v26; 
  double NormalSpeed; 
  const char *v28; 
  VehiclePhysicsNetcodeType m_netcodeType; 
  const char *v30; 
  int v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  unsigned int v38; 
  unsigned int m_wheelCount; 
  float *p_m_suspDeformRatio; 
  unsigned int v41; 
  __int64 v42; 
  float *v50; 
  __int64 v51; 
  const char *v52; 
  float v53; 
  unsigned int v54; 
  __int128 i; 
  const char *v56; 
  const char *v57; 
  __int128 v58; 
  __int64 v59; 
  unsigned int v60; 
  float v61; 
  __int64 v62; 
  float v63; 
  __int128 v64; 
  float v65; 
  __int128 v66; 
  vec3_t *p_m_contactPointWs; 
  float m_skid; 
  float v72; 
  const vec4_t *v73; 
  float v74; 
  float v75; 
  __int64 v76; 
  vec3_t *p_m_hardPointWs; 
  float v78; 
  __int128 v79; 
  float v80; 
  __int128 v81; 
  int v85; 
  float v86; 
  float v87; 
  unsigned int v88; 
  float v89; 
  vec3_t position; 
  vec4_t setColor; 
  vec4_t orientation; 
  __int128 v93; 

  BgVehiclePhysics::DebugDraw(this, scrPlace, x, y, tabWidth, charHeight);
  if ( (BgVehiclePhysics::GetPhysicsBodyId(this) & 0xFFFFFF) != 0xFFFFFF && !this->m_pmoveObject && BgVehiclePhysics::IsDynamic(this) )
  {
    _XMM10 = LODWORD(FLOAT_1_0);
    CG_DebugSphere(&this->m_centerOfMassWs, 1.0, &colorGreen, 0, 0);
    v12 = &this->m_transform.m[3];
    CG_DebugSphere(&this->m_transform.m[3], 1.0, &colorOrange, 0, 0);
    setColor = colorOrange;
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
    Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, PhysicsBodyId, &position, &orientation);
    v14 = 50.0 * this->m_transform.m[1].v[1];
    m_defName = this->m_defName;
    m_vehicleId = this->m_vehicleId;
    m_entityNumber = (unsigned int)this->m_entityNumber;
    position.v[0] = (float)(50.0 * this->m_transform.m[1].v[0]) + position.v[0];
    v18 = v14 + position.v[1];
    v19 = 50.0 * this->m_transform.m[1].v[2];
    position.v[1] = v18;
    position.v[2] = v19 + (float)(position.v[2] + 40.0);
    v20 = j_va("E%d VId: %d - %s", m_entityNumber, m_vehicleId, m_defName);
    v21 = DCONST_DVARINT_bg_vehicleDebugInfo;
    v22 = v20;
    if ( !DCONST_DVARINT_bg_vehicleDebugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( scrPlace )
    {
      integer = v21->current.integer;
      if ( (integer == this->m_vehicleId || !integer) && this->m_playerControlled )
      {
        v24 = *y;
        v25 = *x;
        v93 = v6;
        Physics_DrawDebugString(scrPlace, v25, v24, v22, &setColor, 0, 1, charHeight, 0);
        *y = (float)(charHeight * 2.0) + *y;
        v26 = (float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2]);
        NormalSpeed = BgVehiclePhysics::GetNormalSpeed(this);
        v28 = j_va("Spd: %.0f mph (%.2f)", (float)(COERCE_FLOAT(LODWORD(v26) & _xmm) * 0.056818184), *(float *)&NormalSpeed);
        Physics_DrawDebugString(scrPlace, *x, *y, v28, &setColor, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        m_netcodeType = this->m_netcodeType;
        if ( (m_netcodeType & 0xFFFFFFFC) == 0 && m_netcodeType != VEH_NETCODE_SERVER_AUTH )
        {
          this->GetSoundValues(this, 0, 0, &v86, &v87, (float *)&v85, (int *)&v88, &v89);
          v30 = j_va("Gas: %.2f Rpm: %.2f Gear: %d", (float)(v86 - v87), v85, v88);
          Physics_DrawDebugString(scrPlace, *x, *y, v30, &setColor, 0, 1, charHeight, 0);
          *y = charHeight + *y;
        }
        _XMM8 = 0i64;
        __asm
        {
          vcmpltss xmm0, xmm8, xmm1
          vblendvps xmm6, xmm10, xmm1, xmm0
        }
        *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
        v34 = _XMM0;
        *(double *)&_XMM0 = I_fclamp(this->m_avgSkidRatio / *(float *)&_XMM6, 0.0, 1.0);
        v35 = j_va("Skidding: %.2f", (float)(*(float *)&_XMM0 * COERCE_FLOAT(v34 & _xmm)));
        Physics_DrawDebugString(scrPlace, *x, *y, v35, &setColor, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        *(double *)&_XMM0 = BgVehiclePhysicsGround::GetDriftingRatioExp(this);
        v36 = j_va("Drifting: %.2f", *(float *)&_XMM0);
        Physics_DrawDebugString(scrPlace, *x, *y, v36, &setColor, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        *(double *)&_XMM0 = I_fclamp(1.0 - this->m_avgBlockRatio, 0.0, 1.0);
        v37 = j_va("BrakeBlock: %.2f", *(float *)&_XMM0);
        Physics_DrawDebugString(scrPlace, *x, *y, v37, &setColor, 0, 1, charHeight, 0);
        v38 = 0;
        *y = charHeight + *y;
        m_wheelCount = this->m_wheelCount;
        if ( m_wheelCount >= 4 )
        {
          p_m_suspDeformRatio = &this->m_wheels[1].m_suspDeformRatio;
          v41 = ((m_wheelCount - 4) >> 2) + 1;
          v42 = v41;
          v38 = 4 * v41;
          do
          {
            _XMM0 = *((unsigned int *)p_m_suspDeformRatio - 38);
            _XMM1 = *(unsigned int *)p_m_suspDeformRatio;
            p_m_suspDeformRatio += 152;
            __asm { vmaxss  xmm2, xmm0, xmm8 }
            _XMM0 = *((unsigned int *)p_m_suspDeformRatio - 114);
            __asm { vmaxss  xmm3, xmm1, xmm2 }
            _XMM1 = *((unsigned int *)p_m_suspDeformRatio - 76);
            __asm
            {
              vmaxss  xmm2, xmm0, xmm3
              vmaxss  xmm8, xmm1, xmm2
            }
            --v42;
          }
          while ( v42 );
        }
        if ( v38 < m_wheelCount )
        {
          v50 = &this->m_wheels[v38].m_suspDeformRatio;
          v51 = m_wheelCount - v38;
          do
          {
            __asm { vmaxss  xmm8, xmm8, dword ptr [rax] }
            v50 += 38;
            --v51;
          }
          while ( v51 );
        }
        v52 = j_va("SuspDeform: %.2f", *(float *)&_XMM8);
        Physics_DrawDebugString(scrPlace, *x, *y, v52, &setColor, 0, 1, charHeight, 0);
        v53 = charHeight + *y;
        *y = v53;
        v54 = 0;
        for ( i = *(unsigned int *)x; v54 < this->m_wheelCount; ++v54 )
        {
          v56 = Com_SurfaceTypeToName((this->m_wheels[v54].m_surfFlags >> 19) & 0x3F);
          v57 = j_va((const char *)&queryFormat, v56);
          Physics_DrawDebugString(scrPlace, *(float *)&i, *y, v57, &setColor, 0, 1, charHeight, 0);
          v53 = *y;
          if ( (v54 & 1) != 0 )
          {
            v53 = v53 + charHeight;
            *y = v53;
            i = *(unsigned int *)x;
          }
          else
          {
            v58 = i;
            *(float *)&v58 = *(float *)&i + 50.0;
            i = v58;
          }
        }
        *y = v53 + charHeight;
        if ( (float)(v53 + charHeight) > 430.0 )
        {
          *y = 16.0;
          *x = *x + 150.0;
        }
      }
    }
    v59 = this->m_wheelCount;
    v60 = 0;
    v61 = fsqrt((float)((float)(this->m_wheelCommon.m_hardPointOffCenterLs.v[0] * this->m_wheelCommon.m_hardPointOffCenterLs.v[0]) + (float)(this->m_wheelCommon.m_hardPointOffCenterLs.v[1] * this->m_wheelCommon.m_hardPointOffCenterLs.v[1])) + (float)(this->m_wheelCommon.m_hardPointOffCenterLs.v[2] * this->m_wheelCommon.m_hardPointOffCenterLs.v[2]));
    if ( (_DWORD)v59 )
    {
      do
      {
        v62 = v60;
        CG_DebugSphere(&this->m_wheels[v62].m_hardPointWs, 1.5, &colorGreen, 0, 0);
        if ( this->m_wheels[v62].m_contactBodyId != 0xFFFFFF )
        {
          CG_DebugLine(&this->m_wheels[v62].m_hardPointWs, &this->m_wheels[v62].m_contactPointWs, &colorWhiteFaded, 0, 0);
          CG_DebugSphere(&this->m_wheels[v62].m_contactPointWs, 1.0, &colorRed, 0, 0);
        }
        v63 = this->m_wheels[v62].m_suspDirWs.v[1];
        v64 = LODWORD(this->m_wheels[v62].m_suspDirWs.v[0]);
        v65 = this->m_wheels[v62].m_suspDirWs.v[2];
        v66 = v64;
        *(float *)&v66 = fsqrt((float)((float)(*(float *)&v64 * *(float *)&v64) + (float)(v63 * v63)) + (float)(v65 * v65));
        _XMM3 = v66;
        __asm
        {
          vcmpless xmm0, xmm3, xmm9
          vblendvps xmm0, xmm3, xmm10, xmm0
        }
        *(float *)&_XMM3 = v61 + this->m_wheelCommon.m_radius;
        position.v[0] = (float)((float)(*(float *)&v64 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3) + this->m_wheels[v62].m_hardPointWs.v[0];
        position.v[1] = (float)((float)(v63 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3) + this->m_wheels[v62].m_hardPointWs.v[1];
        position.v[2] = (float)((float)(v65 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3) + this->m_wheels[v62].m_hardPointWs.v[2];
        CG_DebugLine(&this->m_wheels[v62].m_hardPointWs, &position, &colorWhite, 0, 0);
        p_m_contactPointWs = &this->m_wheels[v62].m_contactPointWs;
        *(float *)&_XMM0 = debugScale * this->m_wheels[v62].m_linearForceWs.v[1];
        position.v[0] = (float)(debugScale * this->m_wheels[v62].m_linearForceWs.v[0]) + p_m_contactPointWs->v[0];
        *(float *)&v66 = debugScale * this->m_wheels[v62].m_linearForceWs.v[2];
        m_skid = this->m_wheels[v62].m_skid;
        position.v[1] = *(float *)&_XMM0 + this->m_wheels[v62].m_contactPointWs.v[1];
        v72 = *(float *)&v66 + this->m_wheels[v62].m_contactPointWs.v[2];
        v73 = &colorRed;
        if ( m_skid <= 1.0 )
          v73 = &colorBlue;
        position.v[2] = v72;
        CG_DebugLine(&this->m_wheels[v62].m_contactPointWs, &position, v73, 0, 0);
        v74 = debugScale * this->m_wheels[v62].m_lateralImpulseWs.v[1];
        position.v[0] = (float)(debugScale * this->m_wheels[v62].m_lateralImpulseWs.v[0]) + p_m_contactPointWs->v[0];
        v75 = debugScale * this->m_wheels[v62].m_lateralImpulseWs.v[2];
        position.v[1] = v74 + this->m_wheels[v62].m_contactPointWs.v[1];
        position.v[2] = v75 + this->m_wheels[v62].m_contactPointWs.v[2];
        CG_DebugLine(&this->m_wheels[v62].m_contactPointWs, &position, &colorCyan, 0, 0);
        v59 = this->m_wheelCount;
        ++v60;
      }
      while ( v60 < (unsigned int)v59 );
      v12 = &this->m_transform.m[3];
    }
    if ( (unsigned int)v59 < 0xC )
    {
      v76 = v59;
      p_m_hardPointWs = &this->m_wheels[v59].m_hardPointWs;
      CG_DebugSphere(p_m_hardPointWs, 2.5, &colorGreen, 0, 0);
      CG_DebugLine(p_m_hardPointWs, &this->m_wheels[v76].m_contactPointWs, &colorWhite, 0, 0);
      if ( this->m_wheels[v76].m_contactBodyId != 0xFFFFFF )
        CG_DebugSphere(&this->m_wheels[v76].m_contactPointWs, 2.0, &colorRed, 0, 0);
    }
    v78 = this->m_linearVelocityWs.v[1];
    v79 = LODWORD(this->m_linearVelocityWs.v[0]);
    v80 = this->m_linearVelocityWs.v[2];
    v81 = v79;
    *(float *)&v81 = fsqrt((float)((float)(*(float *)&v79 * *(float *)&v79) + (float)(v78 * v78)) + (float)(v80 * v80));
    _XMM3 = v81;
    __asm
    {
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    position.v[0] = (float)((float)(*(float *)&v79 * (float)(1.0 / *(float *)&_XMM0)) * 65.0) + v12->v[0];
    position.v[1] = (float)((float)(v78 * (float)(1.0 / *(float *)&_XMM0)) * 65.0) + v12->v[1];
    position.v[2] = (float)((float)(v80 * (float)(1.0 / *(float *)&_XMM0)) * 65.0) + v12->v[2];
    CG_DebugLine(v12, &position, &colorYellow, 0, 0);
  }
}

/*
==============
BgVehiclePhysicsGround::DestroyPhysics
==============
*/
void BgVehiclePhysicsGround::DestroyPhysics(BgVehiclePhysicsGround *this)
{
  unsigned int *m_axleBodyIds; 
  __int64 v3; 

  BgVehiclePhysics::DestroyPhysics(this);
  if ( BgVehiclePhysicsGround::IsAxleBodyCreationEnabled(this) )
  {
    m_axleBodyIds = this->m_axleBodyIds;
    v3 = 6i64;
    do
    {
      if ( (*m_axleBodyIds & 0xFFFFFF) != 0xFFFFFF )
      {
        PhysicsVehicle_DestroyAxleRigidBody(this->m_worldId, *m_axleBodyIds);
        *m_axleBodyIds = 0xFFFFFF;
      }
      ++m_axleBodyIds;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
BgVehiclePhysicsGround::SoundData::FetchSound
==============
*/
__int64 BgVehiclePhysicsGround::SoundData::FetchSound(BgVehiclePhysicsGround::SoundData *this, const char *name)
{
  const char *v2; 
  char v3; 
  unsigned int v4; 
  char v5; 

  v2 = name;
  if ( !name )
    return 0i64;
  v3 = *name;
  if ( !*name )
    return 0i64;
  v4 = 5381;
  do
  {
    ++v2;
    v5 = v3 | 0x20;
    if ( (unsigned int)(v3 - 65) >= 0x1A )
      v5 = v3;
    v4 = 65599 * v4 + v5;
    v3 = *v2;
  }
  while ( *v2 );
  if ( !v4 )
    return 1;
  return v4;
}

/*
==============
BgVehiclePhysicsCarBase::FilterAccelForce
==============
*/
float BgVehiclePhysicsCarBase::FilterAccelForce(BgVehiclePhysicsCarBase *this, float rawAccelForce)
{
  const dvar_t *v4; 
  double v9; 

  *(float *)&_XMM7 = rawAccelForce;
  if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO && this->IsInAir(this) )
  {
    v4 = DCONST_DVARFLT_bg_vehAtvMaxEngineAir;
    if ( !DCONST_DVARFLT_bg_vehAtvMaxEngineAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAtvMaxEngineAir") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    _XMM0 = v4->current.unsignedInt;
    __asm { vminss  xmm7, xmm0, xmm7 }
  }
  if ( this->m_vehicleAnimProfile )
    return *(float *)&_XMM7;
  if ( this->m_wheelCount != 2 )
    return *(float *)&_XMM7;
  if ( this->m_timeSinceLastCollision <= 0.5 )
    return *(float *)&_XMM7;
  _XMM0 = LODWORD(this->m_wheels[2].m_timeInAir);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rcx]
    vmaxss  xmm3, xmm1, dword ptr [rbx+528h]
  }
  if ( *(float *)&_XMM3 <= 1.5 )
    return *(float *)&_XMM7;
  v9 = I_fclamp((float)(*(float *)&_XMM3 - 1.5) * 0.5, 0.0, 1.0);
  return *(float *)&_XMM7 * (float)(1.0 - *(float *)&v9);
}

/*
==============
BgVehiclePhysicsCarBase::FireWeapon
==============
*/
void BgVehiclePhysicsCarBase::FireWeapon(BgVehiclePhysicsCarBase *this, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  BgVehicleEventSystem *v8; 
  const dvar_t *v9; 
  float value; 
  double v11; 
  float kickBackForceMultiplier; 
  float v13; 
  float v14; 
  vec3_t impulseWs; 

  if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_VINDIA )
  {
    v8 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
    v8->TankFire(v8, this);
    v9 = DCONST_DVARFLT_bg_vindiaKickBackForce;
    if ( !DCONST_DVARFLT_bg_vindiaKickBackForce && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaKickBackForce") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    value = v9->current.value;
    v11 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
    if ( weapDef )
      kickBackForceMultiplier = weapDef->kickBackForceMultiplier;
    else
      kickBackForceMultiplier = FLOAT_1_0;
    v13 = (float)((float)((float)((float)(1.0 - *(float *)&v11) * (float)(1.0 - *(float *)&v11)) - 1.0) * value) * kickBackForceMultiplier;
    v14 = v13 * dirWs->v[1];
    impulseWs.v[0] = v13 * dirWs->v[0];
    impulseWs.v[2] = v13 * dirWs->v[2];
    impulseWs.v[1] = v14;
    BgVehiclePhysics::ApplyAngularImpulse(this, &impulseWs, atWs);
    this->m_timeSinceLastFire = 0.0;
  }
}

/*
==============
BgVehiclePhysicsSentryDrone::FireWeapon
==============
*/
void BgVehiclePhysicsSentryDrone::FireWeapon(BgVehiclePhysicsSentryDrone *this, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  const dvar_t *v8; 
  float value; 
  float kickBackForceMultiplier; 
  double v11; 
  float v12; 
  unsigned int PhysicsBodyId; 
  unsigned int v14; 
  unsigned int v15; 
  vec3_t angVel; 
  vec3_t impulseWs; 
  vec3_t velLs; 
  vec3_t outVelLs; 
  vec3_t linVel; 

  if ( this->m_wheelInContactCount >= this->m_wheelCount - 2 )
  {
    v8 = DCONST_DVARFLT_bg_wheelsonKickBackForce;
    if ( !DCONST_DVARFLT_bg_wheelsonKickBackForce && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonKickBackForce") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    value = v8->current.value;
    if ( weapDef )
      kickBackForceMultiplier = weapDef->kickBackForceMultiplier;
    else
      kickBackForceMultiplier = FLOAT_1_0;
    v11 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
    LODWORD(v12) = COERCE_UNSIGNED_INT(*(float *)&v11 * (float)(kickBackForceMultiplier * value)) ^ _xmm;
    *(float *)&v11 = v12 * dirWs->v[1];
    impulseWs.v[0] = v12 * dirWs->v[0];
    impulseWs.v[2] = v12 * dirWs->v[2];
    impulseWs.v[1] = *(float *)&v11;
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
    Physics_GetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, PhysicsBodyId, &linVel, &angVel);
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &angVel, &outVelLs);
    v14 = BgVehiclePhysics::GetPhysicsBodyId(this);
    Physics_AccumulateRigidBodyAngularImpulse(this->m_worldId, v14, &impulseWs, atWs, &angVel);
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &angVel, &velLs);
    velLs.v[2] = outVelLs.v[2];
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &velLs, &angVel);
    v15 = BgVehiclePhysics::GetPhysicsBodyId(this);
    Physics_SetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, v15, &linVel, &angVel);
    this->m_timeSinceLastFire = 0.0;
  }
}

/*
==============
BgVehiclePhysicsTank::FireWeapon
==============
*/
void BgVehiclePhysicsTank::FireWeapon(BgVehiclePhysicsTank *this, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  BgVehicleEventSystem *v8; 
  const dvar_t *v9; 
  float value; 
  double v11; 
  float kickBackForceMultiplier; 
  float v13; 
  float v14; 
  vec3_t impulseWs; 

  v8 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v8->TankFire(v8, this);
  v9 = DCONST_DVARFLT_bg_bradleyKickBackForce;
  if ( !DCONST_DVARFLT_bg_bradleyKickBackForce && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyKickBackForce") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  value = v9->current.value;
  v11 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
  if ( weapDef )
    kickBackForceMultiplier = weapDef->kickBackForceMultiplier;
  else
    kickBackForceMultiplier = FLOAT_1_0;
  v13 = (float)((float)((float)((float)(1.0 - *(float *)&v11) * (float)(1.0 - *(float *)&v11)) - 1.0) * value) * kickBackForceMultiplier;
  v14 = v13 * dirWs->v[1];
  impulseWs.v[0] = v13 * dirWs->v[0];
  impulseWs.v[2] = v13 * dirWs->v[2];
  impulseWs.v[1] = v14;
  BgVehiclePhysics::ApplyAngularImpulse(this, &impulseWs, atWs);
  this->m_timeSinceLastFire = 0.0;
}

/*
==============
BgVehiclePhysicsCarBase::GetCameraFovDelta
==============
*/
float BgVehiclePhysicsCarBase::GetCameraFovDelta(BgVehiclePhysicsCarBase *this)
{
  return this->m_cameraConfig.m_camFovDelta;
}

/*
==============
BgVehiclePhysicsGround::GetExtraGravityVector
==============
*/
void BgVehiclePhysicsGround::GetExtraGravityVector(BgVehiclePhysicsGround *this, vec3_t *outGravVec)
{
  float v4; 

  Physics_GetGravity((const Physics_WorldId)this->m_worldId, outGravVec);
  v4 = this->m_extraGravityFactor.v[0];
  if ( v4 == 0.0 && this->m_extraGravityFactor.v[1] == 0.0 && this->m_extraGravityFactor.v[2] == 0.0 )
  {
    outGravVec->v[0] = v4 * outGravVec->v[0];
    outGravVec->v[1] = this->m_extraGravityFactor.v[1] * outGravVec->v[1];
    outGravVec->v[2] = this->m_extraGravityFactor.v[2] * outGravVec->v[2];
  }
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireExtraDampFactors
==============
*/
void BgVehiclePhysicsCarBase::GetFlatTireExtraDampFactors(BgVehiclePhysicsCarBase *this, float *outLdamp, float *outAdamp)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  if ( this->m_flatTire )
  {
    *outAdamp = 0.0;
    if ( (this->m_wheels[0].m_state & 1) != 0 && this->m_wheels[0].m_contactBodyId != 0xFFFFFF && (this->m_wheels[1].m_state & 1) != 0 )
    {
      _XMM0 = this->m_wheels[1].m_contactBodyId;
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_0_25);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      *outAdamp = *(float *)&_XMM0;
    }
    v7 = FLOAT_0_30000001;
    *outLdamp = 0.0;
    if ( (this->m_wheels[0].m_state & 1) == 0 || this->m_wheels[0].m_contactBodyId == 0xFFFFFF )
      v8 = 0.0;
    else
      v8 = FLOAT_0_30000001;
    *outLdamp = v8;
    if ( (this->m_wheels[1].m_state & 1) == 0 || this->m_wheels[1].m_contactBodyId == 0xFFFFFF )
      v7 = 0.0;
    v9 = v8 + v7;
    v10 = FLOAT_0_2;
    *outLdamp = v9;
    if ( (this->m_wheels[2].m_state & 1) == 0 || this->m_wheels[2].m_contactBodyId == 0xFFFFFF )
      v11 = 0.0;
    else
      v11 = FLOAT_0_2;
    v12 = v9 + v11;
    *outLdamp = v12;
    if ( (this->m_wheels[3].m_state & 1) == 0 || this->m_wheels[3].m_contactBodyId == 0xFFFFFF )
      v10 = 0.0;
    *outLdamp = v12 + v10;
  }
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireFactorOnFriction
==============
*/
float BgVehiclePhysicsCarBase::GetFlatTireFactorOnFriction(BgVehiclePhysicsCarBase *this, unsigned int windex)
{
  __int64 v3; 
  unsigned int m_wheelCount; 
  int v5; 
  unsigned int *p_m_contactBodyId; 
  __int64 v7; 
  bool v8; 
  int v9; 

  v3 = windex;
  if ( windex >= this->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 3978, ASSERT_TYPE_ASSERT, "(unsigned)( windex ) < (unsigned)( m_wheelCount )", "windex doesn't index m_wheelCount\n\t%i not in [0, %i)", windex, this->m_wheelCount) )
    __debugbreak();
  if ( (unsigned int)v3 < 2 || (this->m_wheels[v3].m_state & 1) == 0 )
    return FLOAT_1_0;
  m_wheelCount = this->m_wheelCount;
  v5 = 0;
  if ( m_wheelCount <= 2 )
    return FLOAT_0_30000001;
  p_m_contactBodyId = &this->m_wheels[2].m_contactBodyId;
  v7 = m_wheelCount - 2;
  do
  {
    v8 = (p_m_contactBodyId[1] & 1) != 0 && *p_m_contactBodyId != 0xFFFFFF;
    v9 = v5 + 1;
    if ( !v8 )
      v9 = v5;
    p_m_contactBodyId += 38;
    v5 = v9;
    --v7;
  }
  while ( v7 );
  if ( v9 < 2 )
    return FLOAT_0_30000001;
  else
    return FLOAT_0_1;
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireFactorOnSteering
==============
*/
float BgVehiclePhysicsCarBase::GetFlatTireFactorOnSteering(BgVehiclePhysicsCarBase *this)
{
  bool v1; 
  bool v2; 

  v1 = (this->m_wheels[0].m_state & 1) != 0 && this->m_wheels[0].m_contactBodyId != 0xFFFFFF;
  v2 = (this->m_wheels[1].m_state & 1) != 0 && this->m_wheels[1].m_contactBodyId != 0xFFFFFF;
  if ( v1 )
  {
    if ( v2 )
      return FLOAT_0_000099999997;
  }
  else if ( !v2 )
  {
    return FLOAT_1_0;
  }
  return FLOAT_0_050000001;
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireMaxYawFactorOnSteering
==============
*/
float BgVehiclePhysicsCarBase::GetFlatTireMaxYawFactorOnSteering(BgVehiclePhysicsCarBase *this)
{
  bool v1; 
  bool v2; 

  v1 = (this->m_wheels[0].m_state & 1) != 0 && this->m_wheels[0].m_contactBodyId != 0xFFFFFF;
  v2 = (this->m_wheels[1].m_state & 1) != 0 && this->m_wheels[1].m_contactBodyId != 0xFFFFFF;
  if ( v1 )
  {
    if ( v2 )
      return FLOAT_0_34999999;
  }
  else if ( !v2 )
  {
    return FLOAT_1_0;
  }
  return FLOAT_0_69999999;
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireSteeringDeviation
==============
*/
float BgVehiclePhysicsCarBase::GetFlatTireSteeringDeviation(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  char v3; 
  bool v4; 
  char v5; 
  bool v6; 
  char v8; 
  char v9; 
  float v10; 
  float v11; 
  float v15; 
  float v16; 
  double Value; 

  v3 = this->m_wheels[0].m_state & 1;
  v4 = v3 && this->m_wheels[0].m_contactBodyId != 0xFFFFFF;
  v5 = this->m_wheels[1].m_state & 1;
  v6 = v5 && this->m_wheels[1].m_contactBodyId != 0xFFFFFF;
  LODWORD(_XMM6) = 0;
  v8 = this->m_wheels[2].m_state & 1;
  if ( (!v8 || this->m_wheels[2].m_contactBodyId == 0xFFFFFF) && ((this->m_wheels[3].m_state & 1) == 0 || this->m_wheels[3].m_contactBodyId == 0xFFFFFF) )
  {
    v9 = 0;
    if ( !v4 )
    {
      if ( !v6 )
        goto LABEL_38;
      goto LABEL_28;
    }
  }
  else
  {
    v9 = 1;
    if ( !v4 )
    {
      if ( !v6 )
      {
        v10 = FLOAT_1_0;
        if ( !v8 || this->m_wheels[2].m_contactBodyId == 0xFFFFFF )
          v11 = 0.0;
        else
          v11 = FLOAT_1_0;
        if ( (this->m_wheels[3].m_state & 1) == 0 || this->m_wheels[3].m_contactBodyId == 0xFFFFFF )
          v10 = 0.0;
        *(float *)&_XMM6 = v11 - v10;
        goto LABEL_37;
      }
      goto LABEL_28;
    }
  }
  if ( v6 )
  {
    _XMM0 = LODWORD(this->m_wheels[1].m_timeInAir) & (unsigned __int128)_xmm;
    __asm { vcmpltss xmm2, xmm0, xmm1 }
    _XMM0 = LODWORD(FLOAT_0_5);
    __asm { vblendvps xmm6, xmm0, xmm1, xmm2 }
    goto LABEL_36;
  }
LABEL_28:
  v15 = FLOAT_1_0;
  if ( !v3 || this->m_wheels[0].m_contactBodyId == 0xFFFFFF )
    v16 = 0.0;
  else
    v16 = FLOAT_1_0;
  if ( !v5 || this->m_wheels[1].m_contactBodyId == 0xFFFFFF )
    v15 = 0.0;
  *(float *)&_XMM6 = v16 - v15;
LABEL_36:
  if ( v9 )
LABEL_37:
    *(float *)&_XMM6 = *(float *)&_XMM6 * 0.40000001;
LABEL_38:
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  return (float)(COERCE_FLOAT(LODWORD(Value) & _xmm) * (float)(*(float *)&_XMM6 * deltaTime)) * 18.0;
}

/*
==============
BgVehiclePhysicsCarBase::GetForwardSpeedRelative
==============
*/
float BgVehiclePhysicsCarBase::GetForwardSpeedRelative(BgVehiclePhysicsCarBase *this)
{
  return (float)((float)((float)(this->m_linearVelocityWs.v[1] - this->m_surfaceLinVel.v[1]) * this->m_transform.m[0].v[1]) + (float)((float)(this->m_linearVelocityWs.v[0] - this->m_surfaceLinVel.v[0]) * this->m_transform.m[0].v[0])) + (float)((float)(this->m_linearVelocityWs.v[2] - this->m_surfaceLinVel.v[2]) * this->m_transform.m[0].v[2]);
}

/*
==============
BgVehiclePhysicsCarBase::GetGearEngineMult
==============
*/
float BgVehiclePhysicsCarBase::GetGearEngineMult(BgVehiclePhysicsCarBase *this)
{
  double Value; 
  double NormalSpeedPlane; 
  double v11; 
  float v12; 

  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  if ( *(float *)&Value < 0.0 )
    return FLOAT_1_0;
  _XMM0 = (unsigned int)this->m_vehicleAnimProfile;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM7 = LODWORD(FLOAT_1_0);
  __asm
  {
    vblendvps xmm8, xmm7, xmm2, xmm3
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm7, xmm1, xmm2
  }
  v12 = *(float *)&_XMM0;
  if ( *(float *)&_XMM8 <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 4474, ASSERT_TYPE_ASSERT, "(spThres > 0.001f)", (const char *)&queryFormat, "spThres > EQUAL_EPSILON") )
    __debugbreak();
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
  v11 = I_fclamp(*(float *)&NormalSpeedPlane / *(float *)&_XMM8, 0.0, 1.0);
  return (float)((float)(1.0 - (float)(1.0 - *(float *)&v11)) * v12) + (float)(1.0 - *(float *)&v11);
}

/*
==============
GetInputCharValueWithThreshold
==============
*/
float GetInputCharValueWithThreshold(char value, char threshold)
{
  __int128 v2; 
  float v3; 
  double v5; 
  float v6; 
  __int128 v8; 

  v2 = 0i64;
  *(float *)&v2 = (float)value;
  LODWORD(v3) = v2 & _xmm;
  _XMM6 = 0i64;
  v5 = I_fclamp((float)threshold, 0.0, 126.0);
  v6 = *(float *)&v5;
  if ( COERCE_FLOAT(v2 & _xmm) < *(float *)&v5 )
    return 0.0;
  v8 = v2 & _xmm;
  *(float *)&v8 = v3 - *(float *)&v5;
  _XMM1 = v8 ^ _xmm;
  __asm
  {
    vcmpless xmm0, xmm6, xmm8
    vblendvps xmm2, xmm1, xmm2, xmm0
  }
  return *(float *)&_XMM2 / (float)(127.0 - v6);
}

/*
==============
BgVehiclePhysicsCarBase::GetLocalSteering
==============
*/
void BgVehiclePhysicsCarBase::GetLocalSteering(BgVehiclePhysicsCarBase *this, BgVehiclePhysicsGround::Steering *outSteering)
{
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v3; 
  __int32 v4; 

  *outSteering = this->m_steering;
  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile )
  {
    v3 = m_vehicleAnimProfile - 1;
    if ( v3 )
    {
      v4 = v3 - 10;
      if ( v4 )
      {
        if ( v4 == 8 )
        {
          outSteering->m_maxYawSpeed = 1.4;
          outSteering->m_returnSpeed = 2.0;
          outSteering->m_steerSpeedIncrease = 2.7;
          outSteering->m_steerSpeed = 3.5999999;
        }
      }
      else
      {
        outSteering->m_maxYawSpeed = 1.0;
        outSteering->m_offsetPointUp = 0.0;
        outSteering->m_steerSpeed = 1.4;
        outSteering->m_steerSpeedIncrease = 1.7;
      }
    }
    else
    {
      outSteering->m_returnSpeed = 1.0;
      outSteering->m_steerSpeed = 3.0;
      outSteering->m_steerSpeedIncrease = 1.8;
    }
  }
  else
  {
    outSteering->m_maxYawSpeed = 1.0;
    *(_QWORD *)&outSteering->m_offsetPoint = 1082130432i64;
    outSteering->m_returnSpeed = 4.0;
    outSteering->m_steerSpeedIncrease = 1.6;
    outSteering->m_steerSpeed = 3.5999999;
  }
}

/*
==============
BgVehiclePhysicsCarBase::GetNormalSpeedRelative
==============
*/
double BgVehiclePhysicsCarBase::GetNormalSpeedRelative(BgVehiclePhysicsCarBase *this)
{
  float v3; 
  double ForwardSpeedOfKeyframed; 

  if ( BgVehiclePhysics::IsDynamic(this) )
  {
    *((_QWORD *)&_XMM0 + 1) = 0i64;
    v3 = (float)((float)((float)(this->m_linearVelocityWs.v[1] - this->m_surfaceLinVel.v[1]) * this->m_transform.m[0].v[1]) + (float)((float)(this->m_linearVelocityWs.v[0] - this->m_surfaceLinVel.v[0]) * this->m_transform.m[0].v[0])) + (float)((float)(this->m_linearVelocityWs.v[2] - this->m_surfaceLinVel.v[2]) * this->m_transform.m[0].v[2]);
  }
  else
  {
    ForwardSpeedOfKeyframed = BgVehiclePhysics::GetForwardSpeedOfKeyframed(this);
    v3 = *(float *)&ForwardSpeedOfKeyframed;
  }
  if ( v3 <= 0.0 )
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(this);
  else
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(this);
  __asm { vmaxss  xmm0, xmm0, cs:__real@41200000 }
  return I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 / *(float *)&_XMM0) & _xmm), 0.0, 1.0);
}

/*
==============
BgVehiclePhysicsGround::GetRagdollInitialImpact
==============
*/
void BgVehiclePhysicsGround::GetRagdollInitialImpact(BgVehiclePhysicsGround *this, const vec3_t *entPos, bool killcam, int *outHitLoc, vec3_t *outImpactVec)
{
  __int128 v6; 
  __int128 v7; 
  double NormalSpeedPlane; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  const dvar_t *v25; 
  const char *v26; 
  float value; 
  __int128 v28; 
  __int128 v29; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  __int128 v37; 
  float v38; 
  __int128 v42; 
  float v43; 
  float v47; 
  float v48; 
  float v49; 
  const dvar_t *v50; 
  float v51; 
  float v52; 
  float v1[4]; 
  __int128 v54; 
  __int128 v55; 

  if ( killcam )
  {
    *outImpactVec = this->m_ragdollImpactVec;
    *outHitLoc = this->m_ragdollImpactHitloc;
    return;
  }
  *outHitLoc = 5;
  if ( BgVehiclePhysics::IsDynamic(this) )
  {
    NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
    *(double *)outImpactVec->v = *(double *)this->m_linearVelocityWs.v;
    v12 = this->m_linearVelocityWs.v[2];
    v13 = *(float *)&NormalSpeedPlane;
  }
  else
  {
    v14 = this->m_history.m_lastLinearVel.v[1];
    v15 = this->m_history.m_lastLinearVel.v[0];
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(this);
    __asm { vmaxss  xmm0, xmm0, cs:__real@41200000 }
    v17 = fsqrt((float)(v15 * v15) + (float)(v14 * v14)) * (float)(1.0 / *(float *)&_XMM0);
    I_fclamp(v17, 0.0, 1.0);
    v13 = v17;
    if ( !outImpactVec )
      goto LABEL_8;
    *(double *)outImpactVec->v = *(double *)this->m_history.m_lastLinearVel.v;
    v12 = this->m_history.m_lastLinearVel.v[2];
  }
  outImpactVec->v[2] = v12;
LABEL_8:
  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  if ( VecNCompareCustomEpsilon(outImpactVec->v, v1, 0.001, 3) )
  {
    *(_QWORD *)outImpactVec->v = 0i64;
    outImpactVec->v[2] = 0.0;
    *outHitLoc = 0;
    *(_QWORD *)this->m_ragdollImpactVec.v = 0i64;
    *(_QWORD *)&this->m_ragdollImpactVec.z = 0i64;
    return;
  }
  v18 = LODWORD(outImpactVec->v[0]);
  v19 = outImpactVec->v[1];
  v20 = outImpactVec->v[2];
  v55 = v6;
  v21 = v18;
  *(float *)&v21 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(v19 * v19)) + (float)(v20 * v20));
  _XMM4 = v21;
  v54 = v7;
  __asm
  {
    vcmpless xmm0, xmm4, xmm13
    vblendvps xmm0, xmm4, xmm11, xmm0
  }
  outImpactVec->v[0] = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM0);
  outImpactVec->v[1] = v19 * (float)(1.0 / *(float *)&_XMM0);
  outImpactVec->v[2] = (float)(1.0 / *(float *)&_XMM0) * outImpactVec->v[2];
  if ( this->m_vehicleAnimProfile )
  {
    v25 = DCONST_DVARFLT_bg_vehRagdollElev;
    if ( !DCONST_DVARFLT_bg_vehRagdollElev )
    {
      v26 = "bg_vehRagdollElev";
LABEL_15:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v26) )
        __debugbreak();
    }
  }
  else
  {
    v25 = DCONST_DVARFLT_bg_vehRagdollAtvElev;
    if ( !DCONST_DVARFLT_bg_vehRagdollAtvElev )
    {
      v26 = "bg_vehRagdollAtvElev";
      goto LABEL_15;
    }
  }
  Dvar_CheckFrontendServerThread(v25);
  value = v25->current.value;
  v28 = LODWORD(outImpactVec->v[1]);
  v29 = v28;
  *(float *)&v29 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(outImpactVec->v[0] * outImpactVec->v[0])) + (float)(value * value));
  _XMM3 = v29;
  __asm
  {
    vcmpless xmm0, xmm3, xmm13
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  v33 = (float)(1.0 / *(float *)&_XMM0) * outImpactVec->v[0];
  v34 = (float)(1.0 / *(float *)&_XMM0) * value;
  v35 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v28;
  outImpactVec->v[0] = v33;
  outImpactVec->v[1] = v35;
  outImpactVec->v[2] = v34;
  *(float *)&v28 = entPos->v[0] - this->m_transform.m[3].v[0];
  v37 = LODWORD(entPos->v[1]);
  v36 = entPos->v[1] - this->m_transform.m[3].v[1];
  v38 = entPos->v[2] - this->m_transform.m[3].v[2];
  *(float *)&v37 = fsqrt((float)((float)(v36 * v36) + (float)(*(float *)&v28 * *(float *)&v28)) + (float)(v38 * v38));
  _XMM1 = v37;
  __asm
  {
    vcmpless xmm0, xmm1, xmm13
    vblendvps xmm0, xmm1, xmm11, xmm0
  }
  v42 = LODWORD(FLOAT_1_0);
  *(float *)&v28 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v28;
  v43 = (float)(1.0 / *(float *)&_XMM0) * v36;
  *(float *)&v42 = fsqrt((float)((float)(v43 * v43) + (float)(*(float *)&v28 * *(float *)&v28)) + (float)(v34 * v34));
  _XMM4 = v42;
  __asm
  {
    vcmpless xmm0, xmm4, xmm13
    vblendvps xmm0, xmm4, xmm11, xmm0
  }
  v47 = *(float *)&v28 * (float)(1.0 / *(float *)&_XMM0);
  v48 = v43 * (float)(1.0 / *(float *)&_XMM0);
  v49 = v34 * (float)(1.0 / *(float *)&_XMM0);
  outImpactVec->v[0] = (float)(v47 * 0.75) + (float)(v33 * 0.25);
  outImpactVec->v[1] = (float)(v48 * 0.75) + (float)(v35 * 0.25);
  outImpactVec->v[2] = (float)(v49 * 0.75) + (float)(v34 * 0.25);
  I_fclamp(v13, 0.0, 1.0);
  v50 = DCONST_DVARFLT_bg_vehRagdollMaxForce;
  if ( !DCONST_DVARFLT_bg_vehRagdollMaxForce && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehRagdollMaxForce") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  v51 = v13 * v50->current.value;
  v52 = v51 * outImpactVec->v[1];
  outImpactVec->v[0] = v51 * outImpactVec->v[0];
  outImpactVec->v[2] = v51 * outImpactVec->v[2];
  outImpactVec->v[1] = v52;
  *outHitLoc = ((float)((float)((float)(v48 * this->m_transform.m[1].v[1]) + (float)(v47 * this->m_transform.m[1].v[0])) + (float)(v49 * this->m_transform.m[1].v[2])) >= 0.0) + 14;
  this->m_ragdollImpactVec = *outImpactVec;
  this->m_ragdollImpactHitloc = *outHitLoc;
}

/*
==============
BgVehiclePhysicsCarBase::GetReversingEngineMult
==============
*/
double BgVehiclePhysicsCarBase::GetReversingEngineMult(BgVehiclePhysicsCarBase *this)
{
  double Value; 
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v4; 
  __int32 v5; 
  const dvar_t *v6; 
  const char *v7; 
  double Float_Internal_DebugName; 
  double result; 
  const dvar_t *v10; 
  const char *v11; 

  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  if ( *(float *)&Value >= 0.0 || (float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) >= 0.0 )
  {
    if ( !BgVehiclePhysicsGround::IsBraking(this) )
      goto LABEL_22;
    if ( this->m_vehicleAnimProfile )
    {
      v10 = DVARFLT_bg_vehBrakingEngineMult;
      if ( !DVARFLT_bg_vehBrakingEngineMult )
      {
        v11 = "bg_vehBrakingEngineMult";
LABEL_19:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v11) )
          __debugbreak();
      }
    }
    else
    {
      v10 = DVARFLT_bg_vehBrakingEngineMultAtv;
      if ( !DVARFLT_bg_vehBrakingEngineMultAtv )
      {
        v11 = "bg_vehBrakingEngineMultAtv";
        goto LABEL_19;
      }
    }
    Dvar_CheckFrontendServerThread(v10);
    *(_QWORD *)&result = v10->current.unsignedInt;
    return result;
  }
  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
  {
    v6 = DVARFLT_bg_atangoReverseAccelFactor;
    v7 = "bg_atangoReverseAccelFactor";
LABEL_11:
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v6, v7);
    if ( *(float *)&Float_Internal_DebugName >= 0.0 )
      return I_fclamp(*(float *)&Float_Internal_DebugName, 0.0, 1.0);
    goto LABEL_22;
  }
  v4 = m_vehicleAnimProfile - 1;
  if ( !v4 )
  {
    v6 = DVARFLT_bg_tromeoReverseAccelFactor;
    v7 = "bg_tromeoReverseAccelFactor";
    goto LABEL_11;
  }
  v5 = v4 - 10;
  if ( !v5 )
  {
    v6 = DVARFLT_bg_dechoReverseAccelFactor;
    v7 = "bg_dechoReverseAccelFactor";
    goto LABEL_11;
  }
  if ( v5 == 8 )
  {
    v6 = DVARFLT_bg_mkiloReverseAccelFactor;
    v7 = "bg_mkiloReverseAccelFactor";
    goto LABEL_11;
  }
LABEL_22:
  *(_QWORD *)&result = LODWORD(FLOAT_1_0);
  return result;
}

/*
==============
BgVehiclePhysicsGround::GetSoundHorn
==============
*/
__int64 BgVehiclePhysicsGround::GetSoundHorn(BgVehiclePhysicsGround *this)
{
  return this->m_sound.Horn;
}

/*
==============
BgVehiclePhysicsGround::GetSoundValues
==============
*/
void BgVehiclePhysicsGround::GetSoundValues(BgVehiclePhysicsGround *this, const int clientNum, int time, float *outThrottle, float *outBrake, float *outRpmNormal, int *outGear, float *outMph)
{
  double v10; 
  double v11; 

  if ( this->m_clientGeoLoaded && Physics_IsPredictiveWorld(this->m_worldId) )
  {
    v10 = I_fclamp(this->m_revSound.m_throttle, 0.0, 1.0);
    *outThrottle = *(float *)&v10;
    v11 = I_fclamp(this->m_revSound.m_brake, 0.0, 1.0);
    *outBrake = *(float *)&v11;
    _XMM1 = LODWORD(this->m_revSound.m_mph);
    __asm { vmaxss  xmm0, xmm1, xmm6 }
    *outMph = *(float *)&_XMM0;
    *outGear = I_clamp(abs32(this->m_revSound.m_gear), 1, 6);
    *(double *)&_XMM0 = I_fclamp(this->m_revSound.m_rpm, 0.0, 1.0);
    *outRpmNormal = *(float *)&_XMM0;
  }
  else
  {
    *outThrottle = 0.0;
    *outBrake = 0.0;
    *outGear = 1;
    *outMph = 0.0;
    *outRpmNormal = 0;
  }
}

/*
==============
BgVehiclePhysicsTank::Gravity
==============
*/
void BgVehiclePhysicsTank::Gravity(BgVehiclePhysicsTank *this, float deltaTime)
{
  __int64 m_wheelCount; 
  unsigned int v4; 
  float v5; 
  float v6; 
  float v7; 
  __int64 v8; 
  vec3_t gravity; 

  if ( this->m_playerControlled )
  {
    Physics_GetGravity((const Physics_WorldId)this->m_worldId, &gravity);
    m_wheelCount = this->m_wheelCount;
    v4 = 0;
    v5 = (float)m_wheelCount;
    v6 = (float)((float)((float)((float)(v5 * WHEEL_MASS) + this->m_mass) * (float)(1.0 / v5)) * (float)((float)(gravity.v[2] * this->m_extraGravityFactor.v[2]) * (float)(1.0 / v5))) * deltaTime;
    v7 = v6 * this->m_transform.m[2].v[1];
    gravity.v[0] = v6 * this->m_transform.m[2].v[0];
    gravity.v[2] = v6 * this->m_transform.m[2].v[2];
    gravity.v[1] = v7;
    if ( (_DWORD)m_wheelCount )
    {
      do
      {
        v8 = v4;
        if ( this->m_wheels[v8].m_contactBodyId == 0xFFFFFF )
          BgVehiclePhysics::AccumulateImpulse(this, &gravity, &this->m_wheels[v8].m_hardPointWs);
        ++v4;
      }
      while ( v4 < this->m_wheelCount );
    }
    gravity.v[0] = v6 * GLOBAL_UP->v[0];
    gravity.v[1] = v6 * GLOBAL_UP->v[1];
    gravity.v[2] = v6 * GLOBAL_UP->v[2];
    BgVehiclePhysics::AccumulateImpulse(this, &gravity, &this->m_centerOfMassWs);
  }
  else
  {
    BgVehiclePhysicsGround::ApplyExtraGravity(this, deltaTime);
  }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::InterpolateAnimParams
==============
*/
void BgVehiclePhysicsAtvQuadNew::InterpolateAnimParams(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  const dvar_t *v2; 
  float v4; 
  float m_timeInAir; 
  __int128 v7; 
  unsigned int v9; 
  unsigned int m_simulationFrame; 
  double NormalSpeedPlane; 
  float v12; 
  double PerlinNoise2dValue; 
  const dvar_t *v14; 
  float v15; 
  double v16; 
  const dvar_t *v18; 
  __int128 v20; 
  double TopSpeedReverse; 
  __int128 v22; 
  __int128 v23; 

  v2 = DVARBOOL_bg_vehAtvNoiseAnim;
  v4 = FLOAT_1_0;
  if ( !DVARBOOL_bg_vehAtvNoiseAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAtvNoiseAnim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( !this->m_wheelInContactCount || BgVehiclePhysicsGround::IsReversing(this) || (m_timeInAir = this->m_timeInAir, m_timeInAir <= 0.0) && m_timeInAir >= COERCE_FLOAT(COERCE_UNSIGNED_INT(2.0 * ATV_AFTER_LANDING_TIME) ^ _xmm) )
    {
      this->m_animPitch.v[2] = 0.0;
      this->m_animYaw.v[2] = 0.0;
    }
    else
    {
      v7 = LODWORD(cm.broadphaseMax.v[1]);
      *(float *)&v7 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
      _XMM3 = v7;
      __asm { vmaxss  xmm0, xmm3, xmm2 }
      v9 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 4982, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
        __debugbreak();
      m_simulationFrame = this->m_simulationFrame;
      NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
      v12 = NormalizeRange(*(float *)&NormalSpeedPlane, 0.1);
      PerlinNoise2dValue = Physics_GetPerlinNoise2dValue(13, v9, m_simulationFrame % v9, m_simulationFrame / v9 % v9);
      v14 = DCONST_DVARFLT_bg_vehAtvNoiseAnimNoisePitch;
      if ( !DCONST_DVARFLT_bg_vehAtvNoiseAnimNoisePitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAtvNoiseAnimNoisePitch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      this->m_animPitch.v[2] = (float)(*(float *)&PerlinNoise2dValue * (float)(v12 * v12)) * v14->current.value;
    }
    if ( this->m_timeInAirBeforeLanding > 0.15000001 )
    {
      v15 = this->m_timeInAir;
      if ( v15 > 0.0 )
      {
        v4 = FLOAT_1_0;
      }
      else
      {
        v16 = I_fclamp(COERCE_FLOAT(LODWORD(v15) & _xmm) / ATV_AFTER_LANDING_TIME, 0.0, 1.0);
        v4 = (float)(*(float *)&v16 * *(float *)&v16) * *(float *)&v16;
      }
    }
  }
  _XMM9 = LODWORD(FLOAT_6_0);
  BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  v18 = DCONST_DVARFLT_bg_atvAnimPitchFactorGround;
  if ( !DCONST_DVARFLT_bg_atvAnimPitchFactorGround && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_atvAnimPitchFactorGround") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v20 = LODWORD(this->m_transform.m[0].v[1]);
  _XMM0 = LODWORD(this->m_transform.m[0].v[2]);
  *(float *)&v20 = (float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(*(float *)&_XMM0 * this->m_linearVelocityWs.v[2]);
  if ( *(float *)&v20 <= 0.0 )
    TopSpeedReverse = BgVehiclePhysics::GetTopSpeedReverse(this);
  else
    TopSpeedReverse = BgVehiclePhysics::GetTopSpeedForward(this);
  if ( *(float *)&TopSpeedReverse <= 0.0 )
  {
    v23 = LODWORD(FLOAT_1_0);
  }
  else
  {
    v22 = v20 & (unsigned int)_xmm;
    *(float *)&v22 = *(float *)&v22 * (float)(2.0 / *(float *)&TopSpeedReverse);
    *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v22 + 1);
    I_fclamp(*(float *)&v22, 0.0, 1.0);
    v23 = v22;
  }
  if ( this->m_wheelInContactCount )
  {
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 5u);
    __asm { vmaxss  xmm10, xmm0, xmm7 }
    if ( this->m_timeInAir <= 0.0 )
    {
      _XMM1 = LODWORD(ATV_AFTER_LANDING_TIME) ^ (unsigned __int128)_xmm;
      __asm
      {
        vcmpless xmm2, xmm1, xmm2
        vblendvps xmm9, xmm9, xmm0, xmm2
      }
    }
  }
  else
  {
    *(float *)&_XMM9 = FLOAT_12_0;
    _XMM10 = LODWORD(FLOAT_1_0);
  }
  BgVehiclePhysics::DampLerp(this->m_animPitch.v, this->m_animPitch.v[1], deltaTime, *(float *)&_XMM9);
  _XMM1 = v23 ^ _xmm;
  _XMM6 = LODWORD(FLOAT_N1_0);
  __asm
  {
    vcmpless xmm0, xmm6, [rsp+0F8h+var_B4]
    vblendvps xmm0, xmm1, xmm11, xmm0
  }
  _XMM0 = _XMM10 & (unsigned int)_xmm;
  __asm
  {
    vcmpltss xmm2, xmm0, xmm1
    vblendvps xmm0, xmm10, xmm3, xmm2
  }
  this->m_animPitch.v[1] = (float)(*(float *)&_XMM0 * 100.0) * v4;
  BgVehiclePhysics::DampLerp(this->m_animYaw.v, this->m_animYaw.v[1], deltaTime, 5.5);
  *(double *)&_XMM0 = I_fclamp((float)(1.25 / this->m_steering.m_yawMaxAngle) * this->m_steering.m_yaw, -1.0, 1.0);
  this->m_animYaw.v[1] = *(float *)&_XMM0 * -100.0;
  BgVehiclePhysicsGround::Steering::LerpYaw(&this->m_steering, this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::InterpolateAnimParams
==============
*/
void BgVehiclePhysicsCarBase::InterpolateAnimParams(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  BgVehiclePhysicsGround::Steering::LerpYaw(&this->m_steering, this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::IsAxleBodyCreationEnabled
==============
*/
bool BgVehiclePhysicsGround::IsAxleBodyCreationEnabled(BgVehiclePhysicsGround *this)
{
  const dvar_t *v1; 
  int integer; 

  v1 = DCONST_DVARINT_bg_vehicleAxleBodies;
  if ( !DCONST_DVARINT_bg_vehicleAxleBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleAxleBodies") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( integer != 3 )
  {
    if ( integer == 1 )
    {
      if ( this->m_worldId > (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
        return 0;
    }
    else if ( integer != 2 || !Physics_IsPredictiveWorld(this->m_worldId) )
    {
      return 0;
    }
  }
  return this->m_axleBodiesAllowed;
}

/*
==============
BgVehiclePhysicsGround::IsInAir
==============
*/
bool BgVehiclePhysicsGround::IsInAir(BgVehiclePhysicsGround *this)
{
  return this->m_wheelInContactCount == 0;
}

/*
==============
BgVehiclePhysicsGround::IsOtherKeyframedEntity
==============
*/
char BgVehiclePhysicsGround::IsOtherKeyframedEntity(BgVehiclePhysicsGround *this, unsigned int bodyId, __int16 entTypeToCompare, vec3_t *outLinVel)
{
  BGVehicles *m_vehicleSystem; 
  unsigned int (__fastcall *PhysicsExtractIdFromPhysicsUserData)(BGVehicles *, int, entityType_s *, bool *); 
  unsigned int BodyUserData; 
  char v12; 
  __int16 v13; 

  *(_QWORD *)outLinVel->v = 0i64;
  outLinVel->v[2] = 0.0;
  if ( bodyId == 0xFFFFFF )
    return 0;
  v13 = 0;
  v12 = 0;
  m_vehicleSystem = this->m_vehicleSystem;
  PhysicsExtractIdFromPhysicsUserData = m_vehicleSystem->PhysicsExtractIdFromPhysicsUserData;
  BodyUserData = PhysicsVehicle_GetBodyUserData(this->m_worldId, bodyId);
  PhysicsExtractIdFromPhysicsUserData(m_vehicleSystem, BodyUserData, (entityType_s *)&v13, (bool *)&v12);
  if ( v13 != entTypeToCompare || !Physics_IsRigidBodyKeyframed(this->m_worldId, bodyId) )
    return 0;
  Physics_GetRigidBodyLinVel((const Physics_WorldId)this->m_worldId, bodyId, outLinVel);
  return 1;
}

/*
==============
BgVehiclePhysicsCarBase::Jump
==============
*/
void BgVehiclePhysicsCarBase::Jump(BgVehiclePhysicsCarBase *this, float afterThisTime)
{
  ;
}

/*
==============
BgVehiclePhysicsCarBase::Land
==============
*/
void BgVehiclePhysicsCarBase::Land(BgVehiclePhysicsCarBase *this, float timeWasInAir)
{
  float v3; 
  BgVehicleEventSystem *v4; 
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v17; 
  unsigned int v18; 
  float v19; 
  __int128 v20; 
  __int128 v24; 
  __int128 v25; 
  float v29; 
  int v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 

  LODWORD(v3) = LODWORD(timeWasInAir) & _xmm;
  if ( Physics_IsPredictiveWorld(this->m_worldId) && this->m_playerControlled )
  {
    v4 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
    ((void (__fastcall *)(BgVehicleEventSystem *, BgVehiclePhysicsCarBase *))v4->CarLanded)(v4, this);
  }
  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  _XMM0 = (unsigned int)m_vehicleAnimProfile;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_0_69999999);
  __asm { vblendvps xmm6, xmm1, xmm2, xmm3 }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(this);
  *(float *)&_XMM0 = NormalizeRange(*(float *)&_XMM0, *(float *)&_XMM6);
  _XMM11 = LODWORD(FLOAT_1_0);
  _XMM1 = (unsigned int)m_vehicleAnimProfile;
  __asm
  {
    vpcmpeqd xmm4, xmm1, xmm2
    vblendvps xmm1, xmm11, xmm3, xmm4
  }
  v14 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_fclamp(v3 / *(float *)&_XMM1, 0.0, 1.0);
  v15 = this->m_linearVelocityWs.v[1];
  v16 = LODWORD(this->m_linearVelocityWs.v[0]);
  v17 = this->m_transform.m[0].v[1];
  v18 = this->m_vehicleAnimProfile;
  v19 = *(float *)&_XMM0;
  v20 = v16;
  *(float *)&v20 = fsqrt((float)(*(float *)&v16 * *(float *)&v16) + (float)(v15 * v15));
  _XMM3 = v20;
  __asm
  {
    vcmpless xmm1, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm11, xmm1
  }
  v24 = LODWORD(this->m_transform.m[0].v[0]);
  v25 = v24;
  *(float *)&v25 = fsqrt((float)(*(float *)&v24 * *(float *)&v24) + (float)(v17 * v17));
  _XMM2 = v25;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm11, xmm0
  }
  v29 = (float)((float)((float)(1.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(*(float *)&v24 * (float)(1.0 / *(float *)&_XMM0)) * (float)(*(float *)&v16 * (float)(1.0 / *(float *)&_XMM1))) + (float)((float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v15 * (float)(1.0 / *(float *)&_XMM1)))) & _xmm)) + v14) * 0.40000001) + (float)(v19 * 0.2);
  if ( v18 > 0x13 || (v30 = 720916, !_bittest(&v30, v18)) )
  {
    BgVehiclePhysicsGround::SetCurrentFriction(this, (float)((float)(1.0 - v29) * this->m_friction.car.tgtFriction) + (float)(v29 * 0.30000001));
    this->m_friction.car.timeToRecover = v29 * 0.02;
  }
  v31 = DCONST_DVARFLT_bg_vehSuspStiffAdaptive;
  if ( !DCONST_DVARFLT_bg_vehSuspStiffAdaptive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSuspStiffAdaptive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  this->m_wheelCommon.m_suspStiffnessAdaptive = (float)((float)(1.0 - v19) * this->m_wheelCommon.m_suspStiffness) + (float)(v19 * v31->current.value);
  v32 = DCONST_DVARFLT_bg_vehSuspDampAdaptive;
  if ( !DCONST_DVARFLT_bg_vehSuspDampAdaptive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSuspDampAdaptive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  this->m_wheelCommon.m_suspDampingAdaptive = (float)((float)(1.0 - v19) * this->m_wheelCommon.m_suspDamping) + (float)(v19 * v32->current.value);
}

/*
==============
BgVehiclePhysicsGround::Steering::LerpYaw
==============
*/
void BgVehiclePhysicsGround::Steering::LerpYaw(BgVehiclePhysicsGround::Steering *this, const BgVehiclePhysicsGround *vehicle, float deltaTime)
{
  float m_yawInterpolated; 
  char v8; 
  __int128 m_returnSpeed_low; 
  float v13; 
  __int128 v15; 
  __int128 m_yawInterpolated_low; 
  double NormalSpeed; 
  const dvar_t *v19; 
  __int128 v21; 
  float v23; 

  m_yawInterpolated = this->m_yawInterpolated;
  _XMM5 = 0i64;
  if ( COERCE_FLOAT(LODWORD(m_yawInterpolated) & _xmm) <= 0.001 || (*(float *)&_XMM2 = this->m_yaw, COERCE_FLOAT(_XMM2 & _xmm) <= 0.001) || (float)(*(float *)&_XMM2 * m_yawInterpolated) >= 0.0 )
  {
    *(float *)&_XMM2 = this->m_yaw;
    v8 = 0;
  }
  else
  {
    v8 = 1;
  }
  if ( COERCE_FLOAT(_XMM2 & _xmm) > COERCE_FLOAT(LODWORD(m_yawInterpolated) & _xmm) )
  {
    if ( !v8 )
      goto LABEL_16;
    goto LABEL_10;
  }
  if ( v8 )
  {
LABEL_10:
    m_returnSpeed_low = 0i64;
    goto LABEL_12;
  }
  m_returnSpeed_low = LODWORD(this->m_returnSpeed);
LABEL_12:
  _XMM1 = m_returnSpeed_low ^ _xmm;
  __asm
  {
    vcmpless xmm0, xmm5, xmm0
    vblendvps xmm0, xmm1, xmm4, xmm0
  }
  v13 = *(float *)&_XMM0 * deltaTime;
  if ( (float)(*(float *)&_XMM0 * deltaTime) >= 0.0 )
  {
    if ( (float)(*(float *)&_XMM0 * deltaTime) > 0.0 )
    {
      m_yawInterpolated_low = LODWORD(this->m_yawInterpolated);
      *(float *)&m_yawInterpolated_low = m_yawInterpolated + v13;
      _XMM0 = m_yawInterpolated_low;
      __asm { vminss  xmm2, xmm0, xmm2 }
    }
  }
  else
  {
    v15 = LODWORD(this->m_yawInterpolated);
    *(float *)&v15 = m_yawInterpolated + v13;
    _XMM0 = v15;
    __asm { vmaxss  xmm2, xmm0, xmm2 }
  }
LABEL_16:
  this->m_yawInterpolated = *(float *)&_XMM2;
  NormalSpeed = BgVehiclePhysics::GetNormalSpeed(&vehicle->BgVehiclePhysics);
  v19 = DCONST_DVARFLT_bg_carYawSpeed;
  v21 = LODWORD(FLOAT_1_0);
  *(float *)&v21 = 1.0 - *(float *)&NormalSpeed;
  _XMM2 = v21;
  __asm { vmaxss  xmm0, xmm2, cs:__real@3f000000 }
  v23 = COERCE_FLOAT(COERCE_UNSIGNED_INT(this->m_yaw / this->m_yawMaxAngle) & _xmm) * (float)(*(float *)&_XMM0 * this->m_yaw);
  if ( !DCONST_DVARFLT_bg_carYawSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carYawSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  BgVehiclePhysics::DampLerp(&this->m_yawVisual, v23, deltaTime, v19->current.value);
}

/*
==============
BgVehiclePhysicsGround::ModifyMassFactorsOnContact
==============
*/
bool BgVehiclePhysicsGround::ModifyMassFactorsOnContact(BgVehiclePhysicsGround *this, const BgVehicleCollisionCallbackInfo *collInfo, __int64 indexCollInfo, vec4_t *outMassFactors)
{
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  bool result; 

  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile )
  {
    if ( m_vehicleAnimProfile == VEH_ANIMPROFILE_COSCAR )
    {
      if ( ((unsigned __int8 (__fastcall *)(BgVehiclePhysicsGround *, const BgVehicleCollisionCallbackInfo *, __int64))this->IsInAir)(this, collInfo, indexCollInfo) )
      {
        return 0;
      }
      else
      {
        outMassFactors->v[0] = 1.0;
        result = 1;
        outMassFactors->v[1] = 1.2;
        outMassFactors->v[2] = 17.0;
        outMassFactors->v[3] = 20.0;
      }
    }
    else if ( m_vehicleAnimProfile == VEH_ANIMPROFILE_VINDIA || m_vehicleAnimProfile == VEH_ANIMPROFILE_MKILO )
    {
      outMassFactors->v[0] = 0.30000001;
      result = 1;
      outMassFactors->v[1] = 0.1;
      outMassFactors->v[2] = 0.80000001;
      outMassFactors->v[3] = 0.69999999;
    }
    else
    {
      outMassFactors->v[0] = 0.15000001;
      result = 1;
      outMassFactors->v[1] = 0.1;
      outMassFactors->v[2] = 0.80000001;
      outMassFactors->v[3] = 1.0;
    }
  }
  else
  {
    outMassFactors->v[0] = 0.5;
    result = 1;
    outMassFactors->v[1] = 0.5;
    outMassFactors->v[2] = 0.60000002;
    outMassFactors->v[3] = 1.0;
  }
  return result;
}

/*
==============
BgVehiclePhysicsGround::NeedComputeSuspension
==============
*/
bool BgVehiclePhysicsGround::NeedComputeSuspension(BgVehiclePhysicsGround *this)
{
  return !BgVehiclePhysics::IsKeyframed(this);
}

/*
==============
BgVehiclePhysicsGround::PostStep
==============
*/
void BgVehiclePhysicsGround::PostStep(BgVehiclePhysicsGround *this, float deltaTime)
{
  float v3; 
  float v4; 
  float v5; 

  BgVehiclePhysics::PostStep(this, deltaTime);
  this->m_timeToHitPlayer = this->m_timeToHitPlayer - deltaTime;
  v3 = 0.5 / deltaTime;
  v4 = (float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2]);
  v5 = v4 * v4;
  if ( (float)(0.5 / deltaTime) > 1.0 )
    v5 = (float)(this->m_speedSqEMA - (float)((float)(1.0 / v3) * this->m_speedSqEMA)) + (float)((float)(1.0 / v3) * v5);
  this->m_speedSqEMA = v5;
  if ( (float)(0.5 / deltaTime) > 1.0 )
    this->m_rotSpeedSqEMA = (float)(this->m_rotSpeedSqEMA - (float)((float)(1.0 / v3) * this->m_rotSpeedSqEMA)) + (float)((float)(1.0 / v3) * (float)((float)((float)(this->m_angularVelocityWs.v[0] * this->m_angularVelocityWs.v[0]) + (float)(this->m_angularVelocityWs.v[1] * this->m_angularVelocityWs.v[1])) + (float)(this->m_angularVelocityWs.v[2] * this->m_angularVelocityWs.v[2])));
  else
    this->m_rotSpeedSqEMA = (float)((float)(this->m_angularVelocityWs.v[0] * this->m_angularVelocityWs.v[0]) + (float)(this->m_angularVelocityWs.v[1] * this->m_angularVelocityWs.v[1])) + (float)(this->m_angularVelocityWs.v[2] * this->m_angularVelocityWs.v[2]);
}

/*
==============
BgVehiclePhysicsGround::ReactToScriptableEvent
==============
*/
void BgVehiclePhysicsGround::ReactToScriptableEvent(BgVehiclePhysicsGround *this, const ScriptableEventParams *eventParams, const ScriptableEventDef *eventDef)
{
  const dvar_t *v5; 
  signed int tireIndex; 
  int m_deferredBlowUpTireIndex; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1024, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !eventDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1025, ASSERT_TYPE_ASSERT, "(eventDef)", (const char *)&queryFormat, "eventDef") )
    __debugbreak();
  if ( eventDef->type == Scriptable_EventType_VehicleBlowUpTire )
  {
    v5 = DVARBOOL_vehicle_tireblown_enabled;
    if ( !DVARBOOL_vehicle_tireblown_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_tireblown_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      this->m_deferredBlowUpTireIndex = -1;
      tireIndex = eventDef->data.vehicleBlowUpTire.tireIndex;
      if ( tireIndex >= 0 )
      {
        m_deferredBlowUpTireIndex = this->m_deferredBlowUpTireIndex;
        if ( tireIndex < this->m_wheelCount )
          m_deferredBlowUpTireIndex = eventDef->data.vehicleBlowUpTire.tireIndex;
        this->m_deferredBlowUpTireIndex = m_deferredBlowUpTireIndex;
      }
    }
  }
}

/*
==============
BgVehiclePhysicsGround::ReactToServerEvent
==============
*/
void BgVehiclePhysicsGround::ReactToServerEvent(BgVehiclePhysicsGround *this, unsigned int eventType, unsigned int eventParam)
{
  unsigned int v5; 
  BgVehicleEventSystem *v6; 
  unsigned int v7; 
  int v8; 
  int v9; 
  int v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  BGVehicles *m_vehicleSystem; 
  float v19; 
  float v20; 
  float v21; 
  __int64 v22; 
  float v23; 
  float v24; 
  float v25; 
  vec3_t outHalfSize; 

  v5 = eventType - 166;
  if ( !v5 )
  {
    if ( this->m_playerControlled || !BgVehiclePhysics::IsKeyframed(this) || this->m_pmoveObject )
      return;
    v7 = eventParam & 0x3F;
    BgVehiclePhysicsGround::ComputeApproxHalfSize(this, &outHalfSize);
    v8 = (unsigned __int8)eventParam >> 6;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        LODWORD(v14) = LODWORD(outHalfSize.v[1]) ^ _xmm;
LABEL_16:
        v13 = (float)(v14 * this->m_transform.m[1].v[0]) + this->m_transform.m[3].v[0];
        v15 = v14 * this->m_transform.m[1].v[2];
        v16 = v14 * this->m_transform.m[1].v[1];
LABEL_21:
        v11 = v15 + this->m_transform.m[3].v[2];
        v12 = v16 + this->m_transform.m[3].v[1];
LABEL_22:
        m_vehicleSystem = this->m_vehicleSystem;
        v19 = outHalfSize.v[2] * this->m_transform.m[2].v[1];
        v23 = v13 + (float)(outHalfSize.v[2] * this->m_transform.m[2].v[0]);
        v20 = v12 + v19;
        v21 = outHalfSize.v[2] * this->m_transform.m[2].v[2];
        v24 = v20;
        v25 = v11 + v21;
        v22 = (__int64)m_vehicleSystem->PhysicsGetEventSystem(m_vehicleSystem);
        (*(void (__fastcall **)(__int64, BgVehiclePhysicsGround *, float *, _QWORD))(*(_QWORD *)v22 + 24i64))(v22, this, &v23, v7);
        return;
      }
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1001, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "It must be 0..3") )
            __debugbreak();
          v11 = v25;
          v12 = v24;
          v13 = v23;
          goto LABEL_22;
        }
        v14 = outHalfSize.v[1];
        goto LABEL_16;
      }
      LODWORD(v17) = LODWORD(outHalfSize.v[0]) ^ _xmm;
    }
    else
    {
      v17 = outHalfSize.v[0];
    }
    v13 = (float)(v17 * this->m_transform.m[0].v[0]) + this->m_transform.m[3].v[0];
    v15 = v17 * this->m_transform.m[0].v[2];
    v16 = v17 * this->m_transform.m[0].v[1];
    goto LABEL_21;
  }
  if ( v5 == 3 && !this->m_pmoveObject )
  {
    v6 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
    v6->Horn(v6, this, eventParam, 0);
  }
}

/*
==============
BgVehiclePhysicsGround::RemoveMovement
==============
*/
void BgVehiclePhysicsGround::RemoveMovement(BgVehiclePhysicsGround *this, float planeMovFactor, float yawRotFactor)
{
  vec3_t outVelLs; 

  if ( planeMovFactor >= 0.0 )
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
    outVelLs.v[0] = planeMovFactor * outVelLs.v[0];
    outVelLs.v[1] = planeMovFactor * outVelLs.v[1];
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
  }
  if ( yawRotFactor >= 0.0 )
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
    outVelLs.v[2] = yawRotFactor * outVelLs.v[2];
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
  }
}

/*
==============
BgVehiclePhysicsGround::Reset
==============
*/
void BgVehiclePhysicsGround::Reset(BgVehiclePhysicsGround *this)
{
  BgVehiclePhysics::Reset(this);
  this->m_steering.m_force = 100.0;
  *(_QWORD *)&this->m_steering.m_steerSpeedIncrease = 1067030938i64;
  *(_QWORD *)&this->m_steering.m_yawVisual = 0i64;
  this->m_steering.m_handbrakeFactor = 0.0;
  *(_QWORD *)&this->m_steering.m_yawLast = 0i64;
  this->m_steering.m_durationToControl = 0.0;
  this->m_steering.m_factor = 1.0;
  this->m_steering.m_yawMaxAngle = 30.0;
  this->m_steering.m_maxYawSpeed = 1.1;
  *(_QWORD *)&this->m_steering.m_offsetPoint = 1112014848i64;
  *(_QWORD *)&this->m_steering.m_returnSpeed = 0x40000000i64;
  this->m_steering.m_steerSpeed = 20.0;
  this->m_engine.m_minTimeInGear = 0.25;
  this->m_engine.m_clutchTime = 0.15000001;
  this->m_engine.m_accelForce = 260.0;
  this->m_engine.m_gearPeriod = 0.2;
  *(_QWORD *)&this->m_engine.m_lastNormalSpeed = 0i64;
  this->m_engine.m_offsetPoint = -25.0;
  this->m_engine.m_reductionOnHB = 0.30000001;
  *(_QWORD *)&this->m_rumble.m_scaleWithSpeed = 0i64;
  *(_QWORD *)&this->m_rumble.m_duration = 0i64;
  *(_QWORD *)&this->m_sound.ImpactHard = 0i64;
  *(_QWORD *)&this->m_sound.DrivingFast = 0i64;
  *(_QWORD *)&this->m_sound.DrivingFlatFast = 0i64;
  *(_QWORD *)&this->m_sound.Suspension = 0i64;
  *(_QWORD *)&this->m_sound.BrakingLight = 0i64;
  *(_QWORD *)&this->m_sound.Skidding = 0i64;
  memset_0(&this->m_vfx, 0, sizeof(this->m_vfx));
  this->m_friction.tread.v[0] = 1.0;
  *(_QWORD *)&this->m_friction.car.tgtFricRecover = 1050253722i64;
  this->m_friction.car.amountLost = 0.2;
  this->m_friction.car.skidBaseFactor = 0.5;
  this->m_friction.car.speedToBlock = 0.60000002;
  *(_QWORD *)&this->m_friction.car.handbrakeFric = 1036831949i64;
  this->m_friction.car.tgtFriction = 1.0;
  *(_QWORD *)&this->m_stuntManager.m_currentType = 0i64;
  this->m_stuntManager.m_stuntDuration = 0.0;
  memset_0(this->m_wheels, 0, sizeof(this->m_wheels));
  *(_QWORD *)&this->m_controlEx.lastSteering = 0i64;
  *(_QWORD *)&this->m_controlEx.steeringTimeAdaptive = 0i64;
  *(_QWORD *)&this->m_controlEx.handbrakingTime = 0i64;
  BgVehiclePhysicsRevSound::Reset(&this->m_revSound);
  *(_QWORD *)&this->m_speedSqEMA = 0i64;
  this->m_autoHandbrake = 1;
  this->m_chassisNoise.m_enabled = 0;
  *(_QWORD *)&this->m_avgSpinSpeed = 0i64;
  this->m_avgBlockRatio = 0.0;
  *(_QWORD *)this->m_ragdollImpactVec.v = 0i64;
  *(_QWORD *)&this->m_ragdollImpactVec.z = 0i64;
  this->m_wheelCommon.m_suspStiffnessAdaptive = this->m_wheelCommon.m_suspStiffness;
  this->m_wheelCommon.m_suspDampingAdaptive = this->m_wheelCommon.m_suspDamping;
  *(_QWORD *)&this->m_timeSinceLastFire = 1148846080i64;
  this->m_flatTire = 0;
  this->m_deferredBlowUpTireIndex = -1;
}

/*
==============
BgVehiclePhysicsTank::Reset
==============
*/
void BgVehiclePhysicsTank::Reset(BgVehiclePhysicsTank *this)
{
  BgVehiclePhysics::Reset(this);
  this->m_steering.m_force = 100.0;
  *(_QWORD *)&this->m_steering.m_steerSpeedIncrease = 1067030938i64;
  *(_QWORD *)&this->m_steering.m_yawVisual = 0i64;
  this->m_steering.m_handbrakeFactor = 0.0;
  *(_QWORD *)&this->m_steering.m_yawLast = 0i64;
  this->m_steering.m_durationToControl = 0.0;
  this->m_steering.m_factor = 1.0;
  this->m_steering.m_yawMaxAngle = 30.0;
  this->m_steering.m_maxYawSpeed = 1.1;
  *(_QWORD *)&this->m_steering.m_offsetPoint = 1112014848i64;
  *(_QWORD *)&this->m_steering.m_returnSpeed = 0x40000000i64;
  this->m_steering.m_steerSpeed = 20.0;
  this->m_engine.m_minTimeInGear = 0.25;
  this->m_engine.m_clutchTime = 0.15000001;
  this->m_engine.m_accelForce = 260.0;
  this->m_engine.m_gearPeriod = 0.2;
  *(_QWORD *)&this->m_engine.m_lastNormalSpeed = 0i64;
  this->m_engine.m_offsetPoint = -25.0;
  this->m_engine.m_reductionOnHB = 0.30000001;
  *(_QWORD *)&this->m_rumble.m_scaleWithSpeed = 0i64;
  *(_QWORD *)&this->m_rumble.m_duration = 0i64;
  *(_QWORD *)&this->m_sound.ImpactHard = 0i64;
  *(_QWORD *)&this->m_sound.DrivingFast = 0i64;
  *(_QWORD *)&this->m_sound.DrivingFlatFast = 0i64;
  *(_QWORD *)&this->m_sound.Suspension = 0i64;
  *(_QWORD *)&this->m_sound.BrakingLight = 0i64;
  *(_QWORD *)&this->m_sound.Skidding = 0i64;
  memset_0(&this->m_vfx, 0, sizeof(this->m_vfx));
  this->m_friction.tread.v[0] = 1.0;
  *(_QWORD *)&this->m_friction.car.tgtFricRecover = 1050253722i64;
  this->m_friction.car.amountLost = 0.2;
  this->m_friction.car.skidBaseFactor = 0.5;
  this->m_friction.car.speedToBlock = 0.60000002;
  *(_QWORD *)&this->m_friction.car.handbrakeFric = 1036831949i64;
  this->m_friction.car.tgtFriction = 1.0;
  *(_QWORD *)&this->m_stuntManager.m_currentType = 0i64;
  this->m_stuntManager.m_stuntDuration = 0.0;
  memset_0(this->m_wheels, 0, sizeof(this->m_wheels));
  *(_QWORD *)&this->m_controlEx.lastSteering = 0i64;
  *(_QWORD *)&this->m_controlEx.steeringTimeAdaptive = 0i64;
  *(_QWORD *)&this->m_controlEx.handbrakingTime = 0i64;
  BgVehiclePhysicsRevSound::Reset(&this->m_revSound);
  *(_QWORD *)&this->m_speedSqEMA = 0i64;
  this->m_autoHandbrake = 1;
  this->m_chassisNoise.m_enabled = 0;
  *(_QWORD *)&this->m_avgSpinSpeed = 0i64;
  this->m_avgBlockRatio = 0.0;
  *(_QWORD *)this->m_ragdollImpactVec.v = 0i64;
  *(_QWORD *)&this->m_ragdollImpactVec.z = 0i64;
  this->m_wheelCommon.m_suspStiffnessAdaptive = this->m_wheelCommon.m_suspStiffness;
  this->m_wheelCommon.m_suspDampingAdaptive = this->m_wheelCommon.m_suspDamping;
  *(_QWORD *)&this->m_timeSinceLastFire = 1148846080i64;
  this->m_flatTire = 0;
  this->m_deferredBlowUpTireIndex = -1;
  this->m_treadTorqueRatio = 0i64;
}

/*
==============
BgVehiclePhysicsTreadedBase::Reset
==============
*/
void BgVehiclePhysicsTreadedBase::Reset(BgVehiclePhysicsTreadedBase *this)
{
  BgVehiclePhysics::Reset(this);
  this->m_steering.m_force = 100.0;
  *(_QWORD *)&this->m_steering.m_steerSpeedIncrease = 1067030938i64;
  *(_QWORD *)&this->m_steering.m_yawVisual = 0i64;
  this->m_steering.m_handbrakeFactor = 0.0;
  *(_QWORD *)&this->m_steering.m_yawLast = 0i64;
  this->m_steering.m_durationToControl = 0.0;
  this->m_steering.m_factor = 1.0;
  this->m_steering.m_yawMaxAngle = 30.0;
  this->m_steering.m_maxYawSpeed = 1.1;
  *(_QWORD *)&this->m_steering.m_offsetPoint = 1112014848i64;
  *(_QWORD *)&this->m_steering.m_returnSpeed = 0x40000000i64;
  this->m_steering.m_steerSpeed = 20.0;
  this->m_engine.m_minTimeInGear = 0.25;
  this->m_engine.m_clutchTime = 0.15000001;
  this->m_engine.m_accelForce = 260.0;
  this->m_engine.m_gearPeriod = 0.2;
  *(_QWORD *)&this->m_engine.m_lastNormalSpeed = 0i64;
  this->m_engine.m_offsetPoint = -25.0;
  this->m_engine.m_reductionOnHB = 0.30000001;
  *(_QWORD *)&this->m_rumble.m_scaleWithSpeed = 0i64;
  *(_QWORD *)&this->m_rumble.m_duration = 0i64;
  *(_QWORD *)&this->m_sound.ImpactHard = 0i64;
  *(_QWORD *)&this->m_sound.DrivingFast = 0i64;
  *(_QWORD *)&this->m_sound.DrivingFlatFast = 0i64;
  *(_QWORD *)&this->m_sound.Suspension = 0i64;
  *(_QWORD *)&this->m_sound.BrakingLight = 0i64;
  *(_QWORD *)&this->m_sound.Skidding = 0i64;
  memset_0(&this->m_vfx, 0, sizeof(this->m_vfx));
  this->m_friction.tread.v[0] = 1.0;
  *(_QWORD *)&this->m_friction.car.tgtFricRecover = 1050253722i64;
  this->m_friction.car.amountLost = 0.2;
  this->m_friction.car.skidBaseFactor = 0.5;
  this->m_friction.car.speedToBlock = 0.60000002;
  *(_QWORD *)&this->m_friction.car.handbrakeFric = 1036831949i64;
  this->m_friction.car.tgtFriction = 1.0;
  *(_QWORD *)&this->m_stuntManager.m_currentType = 0i64;
  this->m_stuntManager.m_stuntDuration = 0.0;
  memset_0(this->m_wheels, 0, sizeof(this->m_wheels));
  *(_QWORD *)&this->m_controlEx.lastSteering = 0i64;
  *(_QWORD *)&this->m_controlEx.steeringTimeAdaptive = 0i64;
  *(_QWORD *)&this->m_controlEx.handbrakingTime = 0i64;
  BgVehiclePhysicsRevSound::Reset(&this->m_revSound);
  *(_QWORD *)&this->m_speedSqEMA = 0i64;
  this->m_autoHandbrake = 1;
  this->m_chassisNoise.m_enabled = 0;
  *(_QWORD *)&this->m_avgSpinSpeed = 0i64;
  this->m_avgBlockRatio = 0.0;
  *(_QWORD *)this->m_ragdollImpactVec.v = 0i64;
  *(_QWORD *)&this->m_ragdollImpactVec.z = 0i64;
  this->m_wheelCommon.m_suspStiffnessAdaptive = this->m_wheelCommon.m_suspStiffness;
  this->m_wheelCommon.m_suspDampingAdaptive = this->m_wheelCommon.m_suspDamping;
  *(_QWORD *)&this->m_timeSinceLastFire = 1148846080i64;
  this->m_flatTire = 0;
  this->m_deferredBlowUpTireIndex = -1;
}

/*
==============
BgVehiclePhysicsGround::Engine::Reset
==============
*/
void BgVehiclePhysicsGround::Engine::Reset(BgVehiclePhysicsGround::Engine *this)
{
  this->m_minTimeInGear = 0.25;
  *(_QWORD *)&this->m_lastNormalSpeed = 0i64;
  this->m_clutchTime = 0.15000001;
  this->m_accelForce = 260.0;
  this->m_gearPeriod = 0.2;
  this->m_offsetPoint = -25.0;
  this->m_reductionOnHB = 0.30000001;
}

/*
==============
BgVehiclePhysicsGround::FrictionCar::Reset
==============
*/
void BgVehiclePhysicsGround::FrictionCar::Reset(BgVehiclePhysicsGround::FrictionCar *this)
{
  this->baseFriction = 1.0;
  *(_QWORD *)&this->tgtFricRecover = 1050253722i64;
  this->amountLost = 0.2;
  this->skidBaseFactor = 0.5;
  this->speedToBlock = 0.60000002;
  *(_QWORD *)&this->handbrakeFric = 1036831949i64;
  this->tgtFriction = 1.0;
}

/*
==============
BgVehiclePhysicsGround::RumbleData::Reset
==============
*/
void BgVehiclePhysicsGround::RumbleData::Reset(BgVehiclePhysicsGround::RumbleData *this)
{
  *(_QWORD *)&this->m_scaleWithSpeed = 0i64;
  *(_QWORD *)&this->m_duration = 0i64;
}

/*
==============
BgVehiclePhysicsGround::SoundData::Reset
==============
*/
void BgVehiclePhysicsGround::SoundData::Reset(BgVehiclePhysicsGround::SoundData *this)
{
  *(_QWORD *)&this->ImpactHard = 0i64;
  *(_QWORD *)&this->DrivingFast = 0i64;
  *(_QWORD *)&this->DrivingFlatFast = 0i64;
  *(_QWORD *)&this->Suspension = 0i64;
  *(_QWORD *)&this->BrakingLight = 0i64;
  *(_QWORD *)&this->Skidding = 0i64;
}

/*
==============
BgVehiclePhysicsGround::Steering::Reset
==============
*/
void BgVehiclePhysicsGround::Steering::Reset(BgVehiclePhysicsGround::Steering *this)
{
  this->m_force = 100.0;
  *(_QWORD *)&this->m_yawVisual = 0i64;
  this->m_handbrakeFactor = 0.0;
  *(_QWORD *)&this->m_yawLast = 0i64;
  this->m_durationToControl = 0.0;
  *(_QWORD *)&this->m_steerSpeedIncrease = 1067030938i64;
  this->m_factor = 1.0;
  this->m_yawMaxAngle = 30.0;
  this->m_maxYawSpeed = 1.1;
  *(_QWORD *)&this->m_offsetPoint = 1112014848i64;
  *(_QWORD *)&this->m_returnSpeed = 0x40000000i64;
  this->m_steerSpeed = 20.0;
}

/*
==============
BgVehiclePhysicsGround::StuntManager::Reset
==============
*/
void BgVehiclePhysicsGround::StuntManager::Reset(BgVehiclePhysicsGround::StuntManager *this)
{
  *(_QWORD *)&this->m_currentType = 0i64;
  this->m_stuntDuration = 0.0;
}

/*
==============
BgVehiclePhysicsGround::VfxData::Reset
==============
*/
void BgVehiclePhysicsGround::VfxData::Reset(BgVehiclePhysicsGround::VfxData *this)
{
  memset_0(this, 0, sizeof(BgVehiclePhysicsGround::VfxData));
}

/*
==============
BgVehiclePhysicsGround::RumbleData::Set
==============
*/

void __fastcall BgVehiclePhysicsGround::RumbleData::Set(BgVehiclePhysicsGround::RumbleData *this, float _intensity, double duration)
{
  double v5; 

  _XMM7 = *(_OWORD *)&duration;
  v5 = I_fclamp(_intensity, 0.0, 1.0);
  __asm { vmaxss  xmm1, xmm7, xmm6 }
  this->m_t = *(float *)&duration;
  this->m_duration = *(float *)&_XMM1;
  this->m_intensity = *(float *)&v5;
}

/*
==============
BgVehiclePhysicsGround::SetSoundHorn
==============
*/
void BgVehiclePhysicsGround::SetSoundHorn(BgVehiclePhysicsGround *this, unsigned int hornHash)
{
  if ( this->m_worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    this->m_sound.Horn = hornHash;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1231, ASSERT_TYPE_ASSERT, "(IsServer())", (const char *)&queryFormat, "IsServer()") )
      __debugbreak();
    this->m_sound.Horn = hornHash;
  }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::Setup
==============
*/
bool BgVehiclePhysicsAtvQuadNew::Setup(BgVehiclePhysicsAtvQuadNew *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  bool result; 
  double TopSpeedForward; 

  result = BgVehiclePhysicsCarBase::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    this->m_wheels[0].m_torqueRatio = 0.30000001;
    this->m_wheels[1].m_torqueRatio = 0.30000001;
    this->m_wheels[2].m_torqueRatio = 0.25;
    this->m_wheels[3].m_torqueRatio = 0.25;
    this->m_chassisNoise.m_enabled = 1;
    this->m_chassisNoise.m_basedOnTime = 1;
    this->m_chassisNoise.m_minDisp = 0.1;
    this->m_chassisNoise.m_maxDisp = 0.80000001;
    *(_QWORD *)this->m_chassisNoise.m_scale.v = 1056964608i64;
    this->m_chassisNoise.m_scale.v[2] = 0.5;
    TopSpeedForward = BgVehiclePhysics::GetTopSpeedForward(this);
    this->m_chassisNoise.m_speedAtMaxNoise = *(float *)&TopSpeedForward * 0.80000001;
    this->m_chassisNoise.m_yawSpeedAtMaxNoise = 0.52359879;
    result = 1;
    this->m_chassisNoise.m_reduceWhenNotControlled = 1;
    *(_QWORD *)this->m_animPitch.v = 0i64;
    *(_QWORD *)&this->m_animPitch.z = 0i64;
    *(_QWORD *)&this->m_animYaw.y = 0i64;
    this->m_friction.car.skidBaseFactor = 0.69999999;
  }
  return result;
}

/*
==============
BgVehiclePhysicsCarBase::Setup
==============
*/
bool BgVehiclePhysicsCarBase::Setup(BgVehiclePhysicsCarBase *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  bool result; 
  float physics_frictionBase; 
  float physics_camPitchBase; 
  float physics_camRangeAdd; 

  result = BgVehiclePhysicsGround::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    physics_frictionBase = vehDef->vehiclePhysicsDef.physics_frictionBase;
    this->m_friction.tread.v[0] = physics_frictionBase;
    this->m_friction.car.tgtFriction = physics_frictionBase;
    this->m_friction.car.timeToRecover = 0.0;
    this->m_friction.tread.v[1] = vehDef->vehiclePhysicsDef.physics_frictionRecoverSpeedTgt;
    this->m_friction.car.unused = 0.0;
    this->m_friction.car.amountLost = vehDef->vehiclePhysicsDef.physics_frictionLost;
    this->m_friction.car.skidBaseFactor = 0.5;
    this->m_friction.car.handbrakeFric = vehDef->vehiclePhysicsDef.physics_frictionHandbrake;
    this->m_friction.car.speedToBlock = vehDef->vehiclePhysicsDef.physics_frictionSpeedToBlock;
    this->m_stabilizePitch = vehDef->vehiclePhysicsDef.physics_stabilizePitchSpeed;
    this->m_stabilizeRoll = vehDef->vehiclePhysicsDef.physics_stabilizeRollSpeed;
    this->m_gravFactorAir = vehDef->vehiclePhysicsDef.physics_extraGravityFactorAir;
    this->m_cameraConfig.m_camFovDeltaMax = vehDef->vehiclePhysicsDef.physics_camFovDelta;
    physics_camPitchBase = vehDef->vehiclePhysicsDef.physics_camPitchBase;
    this->m_cameraConfig.m_camPitchBase = physics_camPitchBase;
    this->m_cameraConfig.m_camPitchDynamic = vehDef->vehiclePhysicsDef.physics_camPitchDynamic;
    physics_camRangeAdd = vehDef->vehiclePhysicsDef.physics_camRangeAdd;
    this->m_cameraConfig.m_camPitchAdd = physics_camPitchBase;
    this->m_cameraConfig.m_camRangeAddMax = physics_camRangeAdd;
    this->m_cameraConfig.m_camReturnFactor = 1.0;
    *(_QWORD *)&this->m_cameraConfig.m_camFovDelta = 0i64;
    *(_QWORD *)&this->m_cameraConfig.m_camOscillTime = 0i64;
    *(_QWORD *)&this->m_cameraConfig.m_lastNSpeed = 0i64;
    switch ( this->m_vehicleAnimProfile )
    {
      case VEH_ANIMPROFILE_TROMEO:
        this->m_friction.car.skidBaseFactor = 0.69999999;
        goto LABEL_8;
      case VEH_ANIMPROFILE_VINDIA:
        this->m_steering.m_offsetPointUp = -10.0;
        break;
      case VEH_ANIMPROFILE_MKILO:
        break;
      default:
LABEL_8:
        *(_QWORD *)this->m_surfaceLinVel.v = 0i64;
        result = 1;
        *(_QWORD *)&this->m_surfaceLinVel.z = 0i64;
        *(_QWORD *)&this->m_surfaceAngVel.y = 0i64;
        return result;
    }
    this->m_rumble.m_scaleWithSpeed = 0.001;
    this->m_friction.car.skidBaseFactor = 0.0;
    goto LABEL_8;
  }
  return result;
}

/*
==============
BgVehiclePhysicsGround::Setup
==============
*/
bool BgVehiclePhysicsGround::Setup(BgVehiclePhysicsGround *this, BGVehicles *vehSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  bool result; 
  int physics_numWheels; 
  unsigned int m_wheelCount; 
  const vec3_t *v11; 
  unsigned int i; 
  __int64 v13; 
  __int64 v14; 
  float *v15; 
  unsigned int v16; 
  __int64 v17; 
  BgVehiclePhysicsGround::Wheel *v18; 
  __int64 v19; 
  float physics_suspDamping; 
  float physics_suspStiffness; 
  unsigned int v22; 
  int v23; 
  scr_string_t WheelBoneTag; 
  __int64 v25; 
  __int128 accel_low; 
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v37; 
  __int32 v38; 
  const dvar_t *v39; 
  const char *v40; 
  float value; 
  scr_string_t wheelTags[12]; 

  result = BgVehiclePhysics::Setup(this, vehSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    physics_numWheels = vehDef->vehiclePhysicsDef.physics_numWheels;
    this->m_wheelCount = physics_numWheels;
    if ( ((physics_numWheels & 1) != 0 || !physics_numWheels) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 582, ASSERT_TYPE_ASSERT, "(( m_wheelCount % 2 ) == 0 && m_wheelCount > 0)", (const char *)&queryFormat, "( m_wheelCount % 2 ) == 0 && m_wheelCount > 0") )
      __debugbreak();
    if ( this->m_wheelCount > BGVehicles::GetWheelCount(NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 583, ASSERT_TYPE_ASSERT, "(m_wheelCount <= static_cast<uint>( BGVehicles::GetWheelCount( nullptr ) ))", (const char *)&queryFormat, "m_wheelCount <= static_cast<uint>( BGVehicles::GetWheelCount( nullptr ) )") )
      __debugbreak();
    memset_0(this->m_wheels, 0, sizeof(this->m_wheels));
    m_wheelCount = this->m_wheelCount;
    v11 = GLOBAL_UP;
    for ( i = 0; i < m_wheelCount; m_wheelCount = this->m_wheelCount )
    {
      v13 = i++;
      v14 = v13;
      this->m_wheels[v14].m_contactBodyId = 0xFFFFFF;
      this->m_wheels[v14].m_skid = 1.0;
      this->m_wheels[v14].m_blocked = 1.0;
      this->m_wheels[v14].m_suspRawFraction = 1.0;
      this->m_wheels[v14].m_suspDirLs.v[0] = COERCE_FLOAT(LODWORD(v11->v[0]) ^ _xmm);
      this->m_wheels[v14].m_suspDirLs.v[1] = COERCE_FLOAT(LODWORD(v11->v[1]) ^ _xmm);
      this->m_wheels[v14].m_suspDirLs.v[2] = COERCE_FLOAT(LODWORD(v11->v[2]) ^ _xmm);
    }
    if ( m_wheelCount < 0xC )
    {
      if ( 12 - m_wheelCount >= 4 )
      {
        v15 = &this->m_wheels[m_wheelCount].m_suspDirLs.v[2];
        v16 = ((8 - m_wheelCount) >> 2) + 1;
        v17 = v16;
        m_wheelCount += 4 * v16;
        do
        {
          *(__m256i *)(v15 - 2) = *(__m256i *)this->m_wheels[0].m_suspDirLs.v;
          *(__m256i *)(v15 + 6) = *(__m256i *)&this->m_wheels[0].m_centerLs.z;
          *(__m256i *)(v15 + 14) = *(__m256i *)&this->m_wheels[0].m_suspDirWs.y;
          *(__m256i *)(v15 + 22) = *(__m256i *)&this->m_wheels[0].m_suspRawFraction;
          *(_OWORD *)(v15 + 30) = *(_OWORD *)&this->m_wheels[0].m_skid;
          *((double *)v15 + 17) = *(double *)&this->m_wheels[0].m_contactBodyId;
          *(v15 - 2) = COERCE_FLOAT(LODWORD(v11->v[0]) ^ _xmm);
          *(v15 - 1) = COERCE_FLOAT(LODWORD(v11->v[1]) ^ _xmm);
          *v15 = COERCE_FLOAT(LODWORD(v11->v[2]) ^ _xmm);
          *(__m256i *)(v15 + 36) = *(__m256i *)this->m_wheels[0].m_suspDirLs.v;
          *(__m256i *)(v15 + 44) = *(__m256i *)&this->m_wheels[0].m_centerLs.z;
          *(__m256i *)(v15 + 52) = *(__m256i *)&this->m_wheels[0].m_suspDirWs.y;
          *(__m256i *)(v15 + 60) = *(__m256i *)&this->m_wheels[0].m_suspRawFraction;
          *((_OWORD *)v15 + 17) = *(_OWORD *)&this->m_wheels[0].m_skid;
          *((double *)v15 + 36) = *(double *)&this->m_wheels[0].m_contactBodyId;
          v15[36] = COERCE_FLOAT(LODWORD(v11->v[0]) ^ _xmm);
          v15[37] = COERCE_FLOAT(LODWORD(v11->v[1]) ^ _xmm);
          v15[38] = COERCE_FLOAT(LODWORD(v11->v[2]) ^ _xmm);
          *(__m256i *)(v15 + 74) = *(__m256i *)this->m_wheels[0].m_suspDirLs.v;
          *(__m256i *)(v15 + 82) = *(__m256i *)&this->m_wheels[0].m_centerLs.z;
          *(__m256i *)(v15 + 90) = *(__m256i *)&this->m_wheels[0].m_suspDirWs.y;
          *(__m256i *)(v15 + 98) = *(__m256i *)&this->m_wheels[0].m_suspRawFraction;
          *(_OWORD *)(v15 + 106) = *(_OWORD *)&this->m_wheels[0].m_skid;
          *((double *)v15 + 55) = *(double *)&this->m_wheels[0].m_contactBodyId;
          v15[74] = COERCE_FLOAT(LODWORD(v11->v[0]) ^ _xmm);
          v15[75] = COERCE_FLOAT(LODWORD(v11->v[1]) ^ _xmm);
          v15[76] = COERCE_FLOAT(LODWORD(v11->v[2]) ^ _xmm);
          *((__m256i *)v15 + 14) = *(__m256i *)this->m_wheels[0].m_suspDirLs.v;
          *((__m256i *)v15 + 15) = *(__m256i *)&this->m_wheels[0].m_centerLs.z;
          *((__m256i *)v15 + 16) = *(__m256i *)&this->m_wheels[0].m_suspDirWs.y;
          *((__m256i *)v15 + 17) = *(__m256i *)&this->m_wheels[0].m_suspRawFraction;
          *((_OWORD *)v15 + 36) = *(_OWORD *)&this->m_wheels[0].m_skid;
          *((double *)v15 + 74) = *(double *)&this->m_wheels[0].m_contactBodyId;
          v15[112] = COERCE_FLOAT(LODWORD(v11->v[0]) ^ _xmm);
          v15[113] = COERCE_FLOAT(LODWORD(v11->v[1]) ^ _xmm);
          v15 += 152;
          *(v15 - 38) = COERCE_FLOAT(LODWORD(v11->v[2]) ^ _xmm);
          --v17;
        }
        while ( v17 );
      }
      if ( m_wheelCount < 0xC )
      {
        v18 = &this->m_wheels[m_wheelCount];
        v19 = 12 - m_wheelCount;
        do
        {
          ++v18;
          *(__m256i *)v18[-1].m_suspDirLs.v = *(__m256i *)this->m_wheels[0].m_suspDirLs.v;
          *(__m256i *)&v18[-1].m_centerLs.z = *(__m256i *)&this->m_wheels[0].m_centerLs.z;
          *(__m256i *)&v18[-1].m_suspDirWs.y = *(__m256i *)&this->m_wheels[0].m_suspDirWs.y;
          *(__m256i *)&v18[-1].m_suspRawFraction = *(__m256i *)&this->m_wheels[0].m_suspRawFraction;
          *(_OWORD *)&v18[-1].m_skid = *(_OWORD *)&this->m_wheels[0].m_skid;
          *(double *)&v18[-1].m_contactBodyId = *(double *)&this->m_wheels[0].m_contactBodyId;
          v18[-1].m_suspDirLs.v[0] = COERCE_FLOAT(LODWORD(v11->v[0]) ^ _xmm);
          v18[-1].m_suspDirLs.v[1] = COERCE_FLOAT(LODWORD(v11->v[1]) ^ _xmm);
          v18[-1].m_suspDirLs.v[2] = COERCE_FLOAT(LODWORD(v11->v[2]) ^ _xmm);
          --v19;
        }
        while ( v19 );
      }
    }
    physics_suspDamping = vehDef->vehiclePhysicsDef.physics_suspDamping;
    this->m_wheelCommon.m_suspDamping = physics_suspDamping;
    physics_suspStiffness = vehDef->vehiclePhysicsDef.physics_suspStiffness;
    this->m_wheelCommon.m_suspStiffness = physics_suspStiffness;
    this->m_wheelCommon.m_suspStiffnessAdaptive = physics_suspStiffness;
    this->m_wheelCommon.m_suspDampingAdaptive = physics_suspDamping;
    this->m_wheelCommon.m_suspNoiseAmp = vehDef->vehiclePhysicsDef.physics_suspNoiseAmp;
    v22 = 0;
    v23 = 0;
    this->m_wheelCommon.m_radius = vehDef->vehiclePhysicsDef.physics_wheelRadius;
    this->m_wheelCommon.m_hardPointOffCenterLs = vehDef->vehiclePhysicsDef.physics_hardPointOffset;
    for ( this->m_massFactorOnContact = vehDef->vehiclePhysicsDef.physics_massFactorContact; v23 < BGVehicles::GetWheelCount(vehDef); ++v23 )
    {
      WheelBoneTag = BGVehicles::GetWheelBoneTag(vehDef, v23);
      if ( WheelBoneTag )
      {
        v25 = v22++;
        wheelTags[v25] = WheelBoneTag;
      }
    }
    if ( v22 != this->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 637, ASSERT_TYPE_ASSERT, "( wheelCount == m_wheelCount )", "Mistmach number of wheels. Wheel count specified in Vehicle Def != Available wheel bone tags") )
      __debugbreak();
    BgVehiclePhysicsGround::SetupWheelsFromBones(this, wheelTags);
    this->m_chassisNoise.m_enabled = 0;
    this->m_topAngularSpeedLs.v[0] = 2.0943952;
    this->m_topAngularSpeedLs.v[1] = 2.0943952;
    this->m_topAngularSpeedLs.v[2] = 2.4434609;
    this->m_axleBodyIds[0] = 0xFFFFFF;
    this->m_axleBodyIds[1] = 0xFFFFFF;
    this->m_axleBodyIds[2] = 0xFFFFFF;
    this->m_axleBodyIds[3] = 0xFFFFFF;
    this->m_axleBodyIds[4] = 0xFFFFFF;
    this->m_axleBodyIds[5] = 0xFFFFFF;
    this->m_axleBodiesAllowed = vehDef->vehiclePhysicsDef.physics_axleRigidBodies;
    _XMM0 = LODWORD(vehDef->vehiclePhysicsDef.physics_frontalSuspension);
    __asm { vmaxss  xmm0, xmm0, xmm6 }
    this->m_frontalSuspension = *(float *)&_XMM0;
    this->m_engine.m_accelForce = 260.0;
    this->m_engine.m_offsetPoint = -25.0;
    this->m_engine.m_reductionOnHB = 0.30000001;
    this->m_engine.m_minTimeInGear = 0.25;
    this->m_engine.m_clutchTime = 0.15000001;
    this->m_engine.m_gearPeriod = 0.2;
    *(_QWORD *)&this->m_engine.m_lastNormalSpeed = 0i64;
    accel_low = LODWORD(vehDef->accel);
    *(float *)&accel_low = vehDef->accel * 0.056818184;
    _XMM1 = accel_low;
    __asm { vmaxss  xmm1, xmm1, xmm6 }
    this->m_engine.m_accelForce = *(float *)&_XMM1;
    this->m_engine.m_offsetPoint = vehDef->vehiclePhysicsDef.physics_engineOffsetPoint;
    this->m_engine.m_reductionOnHB = vehDef->vehiclePhysicsDef.physics_engineReductionOnHB;
    this->m_steering.m_force = vehDef->vehiclePhysicsDef.physics_steeringForce;
    _XMM0 = LODWORD(vehDef->vehiclePhysicsDef.maxSteeringAngle);
    __asm { vmaxss  xmm1, xmm0, cs:__real@3f800000 }
    this->m_steering.m_yawMaxAngle = *(float *)&_XMM1;
    _XMM2 = LODWORD(vehDef->vehiclePhysicsDef.physics_steeringFactor);
    __asm
    {
      vmaxss  xmm0, xmm2, xmm6
      vminss  xmm1, xmm0, cs:__real@447a0000
    }
    this->m_steering.m_factor = *(float *)&_XMM1;
    this->m_steering.m_maxYawSpeed = vehDef->vehiclePhysicsDef.physics_steeringMaxYawSpeed;
    this->m_steering.m_offsetPoint = vehDef->vehiclePhysicsDef.physics_steeringOffsetPoint;
    this->m_steering.m_offsetPointUp = vehDef->vehiclePhysicsDef.physics_steeringOffsetPointUp;
    this->m_steering.m_returnSpeed = vehDef->vehiclePhysicsDef.physics_steeringReturnSpeed;
    this->m_steering.m_changeDirSpeed = 0.0;
    this->m_steering.m_handbrakeFactor = vehDef->vehiclePhysicsDef.physics_steeringHandbrake;
    this->m_steering.m_steerSpeed = vehDef->vehiclePhysicsDef.physics_steeringSpeed;
    this->m_steering.m_steerSpeedIncrease = vehDef->vehiclePhysicsDef.physics_steeringSpeedIncrease;
    *(_QWORD *)&this->m_stuntManager.m_currentType = 0i64;
    this->m_stuntManager.m_stuntDuration = 0.0;
    if ( Physics_IsPredictiveWorld(this->m_worldId) )
      BgVehiclePhysicsGround::SoundData::Setup(&this->m_sound, vehDef);
    m_vehicleAnimProfile = this->m_vehicleAnimProfile;
    *(_QWORD *)&this->m_timeInAir = 0i64;
    this->m_timeToHitPlayer = 0.0;
    if ( m_vehicleAnimProfile )
    {
      v37 = m_vehicleAnimProfile - 1;
      if ( v37 )
      {
        v38 = v37 - 10;
        if ( v38 )
        {
          if ( v38 != 8 )
            return 1;
          v39 = DVARFLT_bg_mkiloReverseTopSpeedMPH;
          if ( !DVARFLT_bg_mkiloReverseTopSpeedMPH )
          {
            v40 = "bg_mkiloReverseTopSpeedMPH";
            goto LABEL_39;
          }
LABEL_41:
          Dvar_CheckFrontendServerThread(v39);
          value = v39->current.value;
          if ( value >= 0.0 )
            this->m_topSpeedForward.v[1] = value * 17.6;
          return 1;
        }
        v39 = DVARFLT_bg_dechoReverseTopSpeedMPH;
        if ( DVARFLT_bg_dechoReverseTopSpeedMPH )
          goto LABEL_41;
        v40 = "bg_dechoReverseTopSpeedMPH";
      }
      else
      {
        v39 = DVARFLT_bg_tromeoReverseTopSpeedMPH;
        if ( DVARFLT_bg_tromeoReverseTopSpeedMPH )
          goto LABEL_41;
        v40 = "bg_tromeoReverseTopSpeedMPH";
      }
    }
    else
    {
      v39 = DVARFLT_bg_atangoReverseTopSpeedMPH;
      if ( DVARFLT_bg_atangoReverseTopSpeedMPH )
        goto LABEL_41;
      v40 = "bg_atangoReverseTopSpeedMPH";
    }
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v40) )
      __debugbreak();
    goto LABEL_41;
  }
  return result;
}

/*
==============
BgVehiclePhysicsSentryDrone::Setup
==============
*/
char BgVehiclePhysicsSentryDrone::Setup(BgVehiclePhysicsSentryDrone *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  if ( !BgVehiclePhysicsGround::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef) )
    return 0;
  this->m_friction.tread.v[0] = vehDef->vehiclePhysicsDef.physics_rollingFriction;
  this->m_friction.tread.v[1] = vehDef->vehiclePhysicsDef.physics_lateralFriction;
  this->m_acceleration = vehDef->accel;
  return 1;
}

/*
==============
BgVehiclePhysicsTank::Setup
==============
*/
bool BgVehiclePhysicsTank::Setup(BgVehiclePhysicsTank *this, BGVehicles *vehSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  bool result; 

  if ( !BgVehiclePhysicsGround::Setup(this, vehSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef) )
    return 0;
  this->m_friction.tread.v[0] = vehDef->vehiclePhysicsDef.physics_rollingFriction;
  this->m_friction.tread.v[1] = vehDef->vehiclePhysicsDef.physics_lateralFriction;
  result = 1;
  this->m_treadTorqueRatio = 0i64;
  this->m_movDirection = 0.0;
  *(_WORD *)&this->m_chassisNoise.m_reduceWhenNotControlled = 257;
  this->m_chassisNoise.m_basedOnTime = 1;
  this->m_chassisNoise.m_minDisp = 0.0099999998;
  this->m_chassisNoise.m_maxDisp = 0.2;
  *(_QWORD *)this->m_chassisNoise.m_scale.v = 1051931443i64;
  this->m_chassisNoise.m_scale.v[2] = 0.2;
  this->m_chassisNoise.m_speedAtMaxNoise = 50.0;
  this->m_chassisNoise.m_yawSpeedAtMaxNoise = 0.17453294;
  this->m_topSpeedForward.v[1] = 281.60001;
  return result;
}

/*
==============
BgVehiclePhysicsTechnical::Setup
==============
*/
bool BgVehiclePhysicsTechnical::Setup(BgVehiclePhysicsTechnical *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  bool result; 
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v10; 
  __int32 v11; 

  result = BgVehiclePhysicsCarBase::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    m_vehicleAnimProfile = this->m_vehicleAnimProfile;
    this->m_wheels[0].m_torqueRatio = 0.5;
    this->m_wheels[1].m_torqueRatio = 0.5;
    v10 = m_vehicleAnimProfile - 1;
    if ( !v10 || (v11 = v10 - 3) == 0 || v11 == 7 )
    {
      this->m_wheels[2].m_torqueRatio = 0.5;
      this->m_wheels[3].m_torqueRatio = 0.5;
    }
    return 1;
  }
  return result;
}

/*
==============
BgVehiclePhysicsTreadedBase::Setup
==============
*/
bool BgVehiclePhysicsTreadedBase::Setup(BgVehiclePhysicsTreadedBase *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  bool result; 

  result = BgVehiclePhysicsGround::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    this->m_friction.tread.v[0] = vehDef->vehiclePhysicsDef.physics_rollingFriction;
    this->m_friction.tread.v[1] = vehDef->vehiclePhysicsDef.physics_lateralFriction;
    return 1;
  }
  return result;
}

/*
==============
BgVehiclePhysicsTwoWheeled::Setup
==============
*/
char BgVehiclePhysicsTwoWheeled::Setup(BgVehiclePhysicsTwoWheeled *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  BgVehiclePhysicsGround::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  return 1;
}

/*
==============
BgVehiclePhysicsCarBase::CameraConfig::Setup
==============
*/
void BgVehiclePhysicsCarBase::CameraConfig::Setup(BgVehiclePhysicsCarBase::CameraConfig *this, const VehiclePhysicsDef *physDef)
{
  float physics_camPitchBase; 

  this->m_camFovDeltaMax = physDef->physics_camFovDelta;
  physics_camPitchBase = physDef->physics_camPitchBase;
  this->m_camPitchBase = physics_camPitchBase;
  this->m_camPitchDynamic = physDef->physics_camPitchDynamic;
  this->m_camRangeAddMax = physDef->physics_camRangeAdd;
  *(_QWORD *)&this->m_camFovDelta = 0i64;
  *(_QWORD *)&this->m_camOscillTime = 0i64;
  *(_QWORD *)&this->m_lastNSpeed = 0i64;
  this->m_camPitchAdd = physics_camPitchBase;
  this->m_camReturnFactor = 1.0;
}

/*
==============
BgVehiclePhysicsGround::Engine::Setup
==============
*/
void BgVehiclePhysicsGround::Engine::Setup(BgVehiclePhysicsGround::Engine *this, const VehicleDef *vehDef)
{
  __int128 accel_low; 

  this->m_accelForce = 260.0;
  this->m_offsetPoint = -25.0;
  this->m_reductionOnHB = 0.30000001;
  *(_QWORD *)&this->m_lastNormalSpeed = 0i64;
  this->m_minTimeInGear = 0.25;
  this->m_clutchTime = 0.15000001;
  this->m_gearPeriod = 0.2;
  accel_low = LODWORD(vehDef->accel);
  *(float *)&accel_low = vehDef->accel * 0.056818184;
  _XMM2 = accel_low;
  __asm { vmaxss  xmm2, xmm2, xmm1 }
  this->m_accelForce = *(float *)&_XMM2;
  this->m_offsetPoint = vehDef->vehiclePhysicsDef.physics_engineOffsetPoint;
  this->m_reductionOnHB = vehDef->vehiclePhysicsDef.physics_engineReductionOnHB;
}

/*
==============
BgVehiclePhysicsGround::FrictionCar::Setup
==============
*/
void BgVehiclePhysicsGround::FrictionCar::Setup(BgVehiclePhysicsGround::FrictionCar *this, const VehicleDef *vehDef)
{
  float physics_frictionBase; 

  physics_frictionBase = vehDef->vehiclePhysicsDef.physics_frictionBase;
  this->baseFriction = physics_frictionBase;
  this->tgtFriction = physics_frictionBase;
  this->timeToRecover = 0.0;
  this->tgtFricRecover = vehDef->vehiclePhysicsDef.physics_frictionRecoverSpeedTgt;
  this->unused = 0.0;
  this->amountLost = vehDef->vehiclePhysicsDef.physics_frictionLost;
  this->skidBaseFactor = 0.5;
  this->handbrakeFric = vehDef->vehiclePhysicsDef.physics_frictionHandbrake;
  this->speedToBlock = vehDef->vehiclePhysicsDef.physics_frictionSpeedToBlock;
}

/*
==============
BgVehiclePhysicsGround::SoundData::Setup
==============
*/
void BgVehiclePhysicsGround::SoundData::Setup(BgVehiclePhysicsGround::SoundData *this, const VehicleDef *vehDef)
{
  const char *name; 
  unsigned int v5; 
  char v6; 
  unsigned int v7; 
  char v8; 
  const char *v9; 
  char v10; 
  unsigned int v11; 
  char v12; 
  const char *v13; 
  char v14; 
  unsigned int v15; 
  char v16; 
  const char *v17; 
  char v18; 
  unsigned int v19; 
  char v20; 
  const char *v21; 
  char v22; 
  unsigned int v23; 
  char v24; 
  const char *v25; 
  char v26; 
  unsigned int v27; 
  char v28; 
  const char *v29; 
  char v30; 
  unsigned int v31; 
  char v32; 
  const char *v33; 
  char v34; 
  unsigned int v35; 
  char v36; 
  const char *v37; 
  char v38; 
  unsigned int v39; 
  char v40; 
  const char *v41; 
  char v42; 
  unsigned int v43; 
  char v44; 
  const char *v45; 
  char v46; 
  unsigned int v47; 
  char v48; 
  const char *v49; 
  char v50; 
  char v51; 

  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 518, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  name = vehDef->vehiclePhysicsDef.sndImpactHard.alias.name;
  v5 = 5381;
  if ( name && (v6 = *name) != 0 )
  {
    v7 = 5381;
    do
    {
      ++name;
      v8 = v6 | 0x20;
      if ( (unsigned int)(v6 - 65) >= 0x1A )
        v8 = v6;
      v7 = 65599 * v7 + v8;
      v6 = *name;
    }
    while ( *name );
    if ( !v7 )
      v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  this->ImpactHard = v7;
  v9 = vehDef->vehiclePhysicsDef.sndImpactLight.alias.name;
  if ( v9 && (v10 = *v9) != 0 )
  {
    v11 = 5381;
    do
    {
      ++v9;
      v12 = v10 | 0x20;
      if ( (unsigned int)(v10 - 65) >= 0x1A )
        v12 = v10;
      v11 = 65599 * v11 + v12;
      v10 = *v9;
    }
    while ( *v9 );
    if ( !v11 )
      v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  this->ImpactLight = v11;
  v13 = vehDef->vehiclePhysicsDef.sndDrivingFast.alias.name;
  if ( v13 && (v14 = *v13) != 0 )
  {
    v15 = 5381;
    do
    {
      ++v13;
      v16 = v14 | 0x20;
      if ( (unsigned int)(v14 - 65) >= 0x1A )
        v16 = v14;
      v15 = 65599 * v15 + v16;
      v14 = *v13;
    }
    while ( *v13 );
    if ( !v15 )
      v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  this->DrivingFast = v15;
  v17 = vehDef->vehiclePhysicsDef.sndDrivingSlow.alias.name;
  if ( v17 && (v18 = *v17) != 0 )
  {
    v19 = 5381;
    do
    {
      ++v17;
      v20 = v18 | 0x20;
      if ( (unsigned int)(v18 - 65) >= 0x1A )
        v20 = v18;
      v19 = 65599 * v19 + v20;
      v18 = *v17;
    }
    while ( *v17 );
    if ( !v19 )
      v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  this->DrivingSlow = v19;
  v21 = vehDef->vehiclePhysicsDef.sndSuspension.alias.name;
  if ( v21 && (v22 = *v21) != 0 )
  {
    v23 = 5381;
    do
    {
      ++v21;
      v24 = v22 | 0x20;
      if ( (unsigned int)(v22 - 65) >= 0x1A )
        v24 = v22;
      v23 = 65599 * v23 + v24;
      v22 = *v21;
    }
    while ( *v21 );
    if ( !v23 )
      v23 = 1;
  }
  else
  {
    v23 = 0;
  }
  this->Suspension = v23;
  v25 = vehDef->vehiclePhysicsDef.sndBrakingHard.alias.name;
  if ( v25 && (v26 = *v25) != 0 )
  {
    v27 = 5381;
    do
    {
      ++v25;
      v28 = v26 | 0x20;
      if ( (unsigned int)(v26 - 65) >= 0x1A )
        v28 = v26;
      v27 = 65599 * v27 + v28;
      v26 = *v25;
    }
    while ( *v25 );
    if ( !v27 )
      v27 = 1;
  }
  else
  {
    v27 = 0;
  }
  this->BrakingHard = v27;
  v29 = vehDef->vehiclePhysicsDef.sndBrakingLight.alias.name;
  if ( v29 && (v30 = *v29) != 0 )
  {
    v31 = 5381;
    do
    {
      ++v29;
      v32 = v30 | 0x20;
      if ( (unsigned int)(v30 - 65) >= 0x1A )
        v32 = v30;
      v31 = 65599 * v31 + v32;
      v30 = *v29;
    }
    while ( *v29 );
    if ( !v31 )
      v31 = 1;
  }
  else
  {
    v31 = 0;
  }
  this->BrakingLight = v31;
  v33 = vehDef->vehiclePhysicsDef.sndDrifting.alias.name;
  if ( v33 && (v34 = *v33) != 0 )
  {
    v35 = 5381;
    do
    {
      ++v33;
      v36 = v34 | 0x20;
      if ( (unsigned int)(v34 - 65) >= 0x1A )
        v36 = v34;
      v35 = 65599 * v35 + v36;
      v34 = *v33;
    }
    while ( *v33 );
    if ( !v35 )
      v35 = 1;
  }
  else
  {
    v35 = 0;
  }
  this->Drifting = v35;
  v37 = vehDef->vehiclePhysicsDef.sndSkidding.alias.name;
  if ( v37 && (v38 = *v37) != 0 )
  {
    v39 = 5381;
    do
    {
      ++v37;
      v40 = v38 | 0x20;
      if ( (unsigned int)(v38 - 65) >= 0x1A )
        v40 = v38;
      v39 = 65599 * v39 + v40;
      v38 = *v37;
    }
    while ( *v37 );
    if ( !v39 )
      v39 = 1;
  }
  else
  {
    v39 = 0;
  }
  this->Skidding = v39;
  v41 = vehDef->vehiclePhysicsDef.sndDlc1.alias.name;
  if ( v41 && (v42 = *v41) != 0 )
  {
    v43 = 5381;
    do
    {
      ++v41;
      v44 = v42 | 0x20;
      if ( (unsigned int)(v42 - 65) >= 0x1A )
        v44 = v42;
      v43 = 65599 * v43 + v44;
      v42 = *v41;
    }
    while ( *v41 );
    if ( !v43 )
      v43 = 1;
  }
  else
  {
    v43 = 0;
  }
  this->Horn = v43;
  v45 = vehDef->vehiclePhysicsDef.sndDlc2.alias.name;
  if ( v45 && (v46 = *v45) != 0 )
  {
    v47 = 5381;
    do
    {
      ++v45;
      v48 = v46 | 0x20;
      if ( (unsigned int)(v46 - 65) >= 0x1A )
        v48 = v46;
      v47 = 65599 * v47 + v48;
      v46 = *v45;
    }
    while ( *v45 );
    if ( !v47 )
      v47 = 1;
  }
  else
  {
    v47 = 0;
  }
  this->DrivingFlatFast = v47;
  v49 = vehDef->vehiclePhysicsDef.sndDlc3.alias.name;
  if ( v49 && (v50 = *v49) != 0 )
  {
    do
    {
      ++v49;
      v51 = v50 | 0x20;
      if ( (unsigned int)(v50 - 65) >= 0x1A )
        v51 = v50;
      v5 = 65599 * v5 + v51;
      v50 = *v49;
    }
    while ( *v49 );
    if ( !v5 )
      v5 = 1;
    this->DrivingFlatSlow = v5;
  }
  else
  {
    this->DrivingFlatSlow = 0;
  }
}

/*
==============
BgVehiclePhysicsGround::Steering::Setup
==============
*/
void BgVehiclePhysicsGround::Steering::Setup(BgVehiclePhysicsGround::Steering *this, const VehicleDef *vehDef)
{
  this->m_force = vehDef->vehiclePhysicsDef.physics_steeringForce;
  _XMM0 = LODWORD(vehDef->vehiclePhysicsDef.maxSteeringAngle);
  __asm { vmaxss  xmm1, xmm0, cs:__real@3f800000 }
  this->m_yawMaxAngle = *(float *)&_XMM1;
  _XMM2 = LODWORD(vehDef->vehiclePhysicsDef.physics_steeringFactor);
  __asm
  {
    vmaxss  xmm1, xmm2, xmm0
    vminss  xmm2, xmm1, cs:__real@447a0000
  }
  this->m_factor = *(float *)&_XMM2;
  this->m_maxYawSpeed = vehDef->vehiclePhysicsDef.physics_steeringMaxYawSpeed;
  this->m_offsetPoint = vehDef->vehiclePhysicsDef.physics_steeringOffsetPoint;
  this->m_offsetPointUp = vehDef->vehiclePhysicsDef.physics_steeringOffsetPointUp;
  this->m_returnSpeed = vehDef->vehiclePhysicsDef.physics_steeringReturnSpeed;
  this->m_changeDirSpeed = 0.0;
  this->m_handbrakeFactor = vehDef->vehiclePhysicsDef.physics_steeringHandbrake;
  this->m_steerSpeed = vehDef->vehiclePhysicsDef.physics_steeringSpeed;
  this->m_steerSpeedIncrease = vehDef->vehiclePhysicsDef.physics_steeringSpeedIncrease;
}

/*
==============
BgVehiclePhysicsGround::StuntManager::Setup
==============
*/
void BgVehiclePhysicsGround::StuntManager::Setup(BgVehiclePhysicsGround::StuntManager *this, const VehicleDef *vehDef)
{
  *(_QWORD *)&this->m_currentType = 0i64;
  this->m_stuntDuration = 0.0;
}

/*
==============
BgVehiclePhysicsGround::SetupWheelsFromBones
==============
*/
void BgVehiclePhysicsGround::SetupWheelsFromBones(BgVehiclePhysicsGround *this, const scr_string_t *wheelTags)
{
  unsigned int v4; 
  __int64 v5; 
  const DObjAnimMat *v6; 
  const dvar_t *v7; 
  float *v8; 
  float v9; 

  if ( !this->m_vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1328, ASSERT_TYPE_ASSERT, "(m_vehicleSystem)", (const char *)&queryFormat, "m_vehicleSystem") )
    __debugbreak();
  if ( !wheelTags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1329, ASSERT_TYPE_ASSERT, "(wheelTags)", (const char *)&queryFormat, "wheelTags") )
    __debugbreak();
  if ( !this->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1330, ASSERT_TYPE_ASSERT, "( m_wheelCount != 0 )", "BgVehiclePhysicsGround::SetupWheelsFromBones() with 0 wheels should not happen") )
    __debugbreak();
  v4 = 0;
  if ( this->m_wheelCount )
  {
    while ( 1 )
    {
      v5 = v4;
      v6 = this->m_vehicleSystem->PhysicsGetBoneLocalMatrix(this->m_vehicleSystem, (unsigned int)this->m_entityNumber, (unsigned int)wheelTags[v4], &this->m_wheels[v5].m_boneIndex);
      v7 = DVARBOOL_bg_vehHandleVehicleNullPtr;
      v8 = (float *)v6;
      if ( !DVARBOOL_bg_vehHandleVehicleNullPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehHandleVehicleNullPtr") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( !v7->current.enabled )
        break;
      if ( v8 )
        goto LABEL_20;
      *(_QWORD *)this->m_wheels[v5].m_centerLs.v = 0i64;
      v9 = 0.0;
LABEL_21:
      ++v4;
      this->m_wheels[v5].m_centerLs.v[2] = v9;
      if ( v4 >= this->m_wheelCount )
        return;
    }
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1344, ASSERT_TYPE_ASSERT, "(boneMat)", (const char *)&queryFormat, "boneMat") )
      __debugbreak();
LABEL_20:
    this->m_wheels[v5].m_centerLs.v[0] = v8[4];
    this->m_wheels[v5].m_centerLs.v[1] = v8[5];
    v9 = v8[6];
    goto LABEL_21;
  }
}

/*
==============
BgVehiclePhysicsCarBase::StabilizeAngles
==============
*/
void BgVehiclePhysicsCarBase::StabilizeAngles(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  double NormalSpeedPlane; 
  const dvar_t *v5; 
  const char *v6; 
  double v7; 
  float v8; 
  int v13; 
  unsigned int v14; 
  float v15; 
  float v16; 
  unsigned int v17; 
  unsigned int m_vehicleAnimProfile; 
  float m_stabilizeRoll; 
  double Float_Internal_DebugName; 
  double v21; 

  if ( !this->m_playerControlled || BgVehiclePhysicsGround::IsTooInclinedToDamp(this, 45.0) )
  {
    if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
      BgVehiclePhysicsGround::TryStabilizeAngles(this, deltaTime, 2.0, 8.0);
  }
  else
  {
    if ( this->m_vehicleAnimProfile )
    {
      v13 = 720916;
      if ( !this->IsInAir(this) || (v14 = this->m_vehicleAnimProfile, v14 <= 0x13) && _bittest(&v13, v14) )
      {
        m_vehicleAnimProfile = this->m_vehicleAnimProfile;
        if ( m_vehicleAnimProfile <= 0x13 && _bittest(&v13, m_vehicleAnimProfile) )
        {
          m_stabilizeRoll = this->m_stabilizeRoll;
        }
        else
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehDampRoll, "bg_vehDampRoll");
          m_vehicleAnimProfile = this->m_vehicleAnimProfile;
          m_stabilizeRoll = *(float *)&Float_Internal_DebugName;
        }
        if ( m_vehicleAnimProfile <= 0x13 && _bittest(&v13, m_vehicleAnimProfile) )
          *(float *)&v21 = this->m_stabilizePitch;
        else
          v21 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehDampPitch, "bg_vehDampPitch");
        if ( this->m_timeSinceLastCollision < 0.5 )
        {
          m_stabilizeRoll = m_stabilizeRoll * 2.0;
          *(float *)&v21 = *(float *)&v21 * 2.0;
        }
        v15 = *(float *)&v21;
        v16 = m_stabilizeRoll;
      }
      else if ( this->IsInAir(this) )
      {
        v15 = FLOAT_0_25;
        v16 = FLOAT_0_5;
      }
      else
      {
        v17 = this->m_vehicleAnimProfile;
        if ( v17 <= 0x13 && _bittest(&v13, v17) || this->m_wheels[0].m_contactBodyId != 0xFFFFFF || this->m_wheels[1].m_contactBodyId != 0xFFFFFF || this->IsInAir(this) || this->m_timeSinceLastCollision <= 0.5 )
          return;
        v15 = FLOAT_2_0;
        v16 = FLOAT_0_25;
      }
      BgVehiclePhysicsGround::TryStabilizeAngles(this, deltaTime, v16, v15);
      return;
    }
    NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
    if ( *(float *)&NormalSpeedPlane < 0.30000001 )
    {
      v8 = FLOAT_2_0;
      *(float *)&_XMM3 = FLOAT_1_0;
    }
    else
    {
      if ( this->IsInAir(this) && this->m_timeSinceLastCollision > 0.1 )
      {
        v5 = DCONST_DVARFLT_bg_vehAtvDampAir;
        v6 = "bg_vehAtvDampAir";
      }
      else
      {
        v5 = DCONST_DVARFLT_bg_vehAtvDamp;
        v6 = "bg_vehAtvDamp";
      }
      v7 = Dvar_GetFloat_Internal_DebugName(v5, v6);
      v8 = *(float *)&v7;
      _XMM0 = BgVehiclePhysicsGround::IsFacingUpward(this);
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_1_0);
      __asm { vblendvps xmm3, xmm1, xmm6, xmm2 }
    }
    BgVehiclePhysicsGround::TryStabilizeAngles(this, deltaTime, v8, *(float *)&_XMM3);
  }
}

/*
==============
BgVehiclePhysicsTank::StabilizeAngles
==============
*/
void BgVehiclePhysicsTank::StabilizeAngles(BgVehiclePhysicsTank *this, float deltaTime)
{
  const dvar_t *v3; 
  float v6; 
  float value; 
  vec3_t angles; 

  if ( this->m_playerControlled )
  {
    BgVehiclePhysicsGround::TryStabilizeAngles(this, deltaTime, 1.0, 0.0);
    AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &angles);
    v3 = DCONST_DVARFLT_bg_bradleyPitchRecover;
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    LODWORD(v6) = COERCE_UNSIGNED_INT((float)((float)(angles.v[0] * 0.0027777778) - *(float *)&_XMM4) * 360.0) & _xmm;
    if ( !DCONST_DVARFLT_bg_bradleyPitchRecover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyPitchRecover") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    value = v3->current.value;
    if ( value > 0.0 && v6 > 10.0 )
      BgVehiclePhysicsGround::TryStabilizeAngles(this, deltaTime, 0.0, value);
  }
}

/*
==============
BgVehiclePhysicsTwoWheeled::StabilizeAngles
==============
*/
void BgVehiclePhysicsTwoWheeled::StabilizeAngles(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  double Value; 
  float v4; 
  vec3_t outVelLs; 

  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  v4 = 1.0 - COERCE_FLOAT(LODWORD(Value) & _xmm);
  BgVehiclePhysicsGround::TryStabilizeAngles(this, deltaTime, v4 * 8.0, 0.40000001);
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  BgVehiclePhysics::DampLerp(outVelLs.v, 0.0, deltaTime, v4 * 5.0);
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
}

/*
==============
BgVehiclePhysicsGround::FrictionCar::StartControlling
==============
*/
void BgVehiclePhysicsGround::FrictionCar::StartControlling(BgVehiclePhysicsGround::FrictionCar *this)
{
  this->tgtFriction = this->baseFriction;
  this->timeToRecover = 0.0;
}

/*
==============
BgVehiclePhysicsGround::StartPlayerControlling
==============
*/
void BgVehiclePhysicsGround::StartPlayerControlling(BgVehiclePhysicsGround *this)
{
  BgVehiclePhysics::StartPlayerControlling(this);
  if ( this->m_vehicleType == VEH_CAR )
  {
    this->m_friction.car.tgtFriction = this->m_friction.tread.v[0];
    this->m_friction.car.timeToRecover = 0.0;
  }
}

/*
==============
BgVehiclePhysicsCarBase::Step
==============
*/
char BgVehiclePhysicsCarBase::Step(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  __int64 v3; 
  const BgVehiclePhysicsGround::Wheel *v4; 
  __int64 m_wheelCount; 

  BgVehiclePhysicsGround::Step(this, deltaTime);
  BgVehiclePhysicsGround::ComputeSuspensionForces(this, deltaTime);
  BgVehiclePhysics::DampLerp(&this->m_wheelCommon.m_suspStiffnessAdaptive, this->m_wheelCommon.m_suspStiffness, deltaTime, 1.8);
  BgVehiclePhysics::DampLerp(&this->m_wheelCommon.m_suspDampingAdaptive, this->m_wheelCommon.m_suspDamping, deltaTime, 0.25);
  BgVehiclePhysicsGround::ComputeFrontalSuspensionForce(this, deltaTime, ATV_FRONTAL_SUSP_OFFSET, this->m_wheelCount);
  BgVehiclePhysicsCarBase::ApplySurfaceVelocity(this, deltaTime);
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))this->AdjustCenterOfMass)(this);
  m_wheelCount = this->m_wheelCount;
  if ( (_DWORD)m_wheelCount != 12 && this->m_frontalSuspension > 0.0 && (unsigned int)m_wheelCount < 0xC )
  {
    v4 = &this->m_wheels[m_wheelCount];
    if ( this->m_wheels[m_wheelCount].m_contactBodyId != 0xFFFFFF )
      BgVehiclePhysicsGround::ApplySingleSuspensionForce(this, deltaTime, v4);
  }
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *, __int64, const BgVehiclePhysicsGround::Wheel *))this->ApplyEngine)(this, v3, v4);
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))this->ApplyExtraGravity)(this);
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))this->ApplySteering)(this);
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))this->ApplyFriction)(this);
  BgVehiclePhysicsCarBase::DampVelocitiesAndStop(this, deltaTime);
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))this->InterpolateAnimParams)(this);
  BgVehiclePhysicsGround::ComputeAverageWheelValues(this);
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))this->ComputeEngineSound)(this);
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))this->ApplyRumble)(this);
  BgVehiclePhysicsCarBase::CameraConfig::Step(&this->m_cameraConfig, this, deltaTime);
  BgVehiclePhysicsCarBase::ApplyExtraDamping(this, deltaTime);
  BgVehiclePhysicsGround::ApplySuspensionForces(this, deltaTime);
  BgVehiclePhysicsCarBase::StabilizeAngles(this, deltaTime);
  return 1;
}

/*
==============
BgVehiclePhysicsGround::Step
==============
*/
bool BgVehiclePhysicsGround::Step(BgVehiclePhysicsGround *this, float deltaTime)
{
  double Value; 
  float m_fwSpeedOnCollision; 
  const dvar_t *v8; 
  const char *v9; 
  double v10; 
  BgVehiclePhysicsGround_vtbl *v11; 
  unsigned int i; 
  __int64 v13; 
  BgVehicleEventSystem *v14; 
  float m_timeInAir; 
  bool v16; 
  float v17; 
  __int128 m_timeInAir_low; 
  __int128 v22; 
  bool v23; 
  BgVehiclePhysicsGround_vtbl *v24; 
  bool result; 
  float m_stuntTime; 
  vec3_t outVelLs; 

  BgVehiclePhysics::Step(this, deltaTime);
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  m_fwSpeedOnCollision = this->m_fwSpeedOnCollision;
  if ( (float)(m_fwSpeedOnCollision * *(float *)&Value) <= 0.001 || m_fwSpeedOnCollision <= 0.0 || this->m_timeSinceLastCollision >= 1.0 )
  {
    this->m_fwSpeedOnCollision = 0.0;
  }
  else
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
    _XMM0 = LODWORD(this->m_fwSpeedOnCollision);
    __asm { vmaxss  xmm1, xmm0, dword ptr [rsp+0A8h+outVelLs] }
    outVelLs.v[0] = *(float *)&_XMM1;
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
  }
  if ( this->m_vehicleAnimProfile )
  {
    v8 = DCONST_DVARFLT_bg_vehDampFwMomentum;
    if ( DCONST_DVARFLT_bg_vehDampFwMomentum )
      goto LABEL_13;
    v9 = "bg_vehDampFwMomentum";
  }
  else
  {
    v8 = DCONST_DVARFLT_bg_vehDampFwMomentumAtv;
    if ( DCONST_DVARFLT_bg_vehDampFwMomentumAtv )
      goto LABEL_13;
    v9 = "bg_vehDampFwMomentumAtv";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
    __debugbreak();
LABEL_13:
  Dvar_CheckFrontendServerThread(v8);
  BgVehiclePhysics::DampLerp(&this->m_fwSpeedOnCollision, 0.0, deltaTime, v8->current.value);
  BgVehiclePhysicsGround::UpdateControlTimes(this, deltaTime);
  v10 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  v11 = this->__vftable;
  this->m_controlEx.lastSteering = *(float *)&v10;
  ((void (__fastcall *)(BgVehiclePhysicsGround *))v11->UpdateSteeringAngle)(this);
  for ( i = 0; i < this->m_wheelCount; this->m_wheels[v13].m_spinAngle = (float)((float)(deltaTime * this->m_wheels[v13].m_spinSpeed) * 57.295776) + this->m_wheels[v13].m_spinAngle )
    v13 = i++;
  if ( Physics_IsPredictiveWorld(this->m_worldId) && this->m_playerControlled )
  {
    v14 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
    v14->CarDriving(v14, this);
  }
  m_timeInAir = this->m_timeInAir;
  v16 = this->IsInAir(this);
  v17 = this->m_timeInAir;
  if ( v16 )
  {
    m_timeInAir_low = LODWORD(this->m_timeInAir);
    *(float *)&m_timeInAir_low = v17 + deltaTime;
    _XMM0 = m_timeInAir_low;
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    v22 = LODWORD(this->m_timeInAir);
    *(float *)&v22 = v17 - deltaTime;
    _XMM0 = v22;
    __asm { vminss  xmm1, xmm0, xmm6 }
  }
  v23 = m_timeInAir < 0.0;
  this->m_timeInAir = *(float *)&_XMM1;
  if ( m_timeInAir > 0.0 )
  {
    if ( *(float *)&_XMM1 <= 0.0 )
    {
      v24 = this->__vftable;
      this->m_timeInAirBeforeLanding = m_timeInAir;
      ((void (__fastcall *)(BgVehiclePhysicsGround *))v24->Land)(this);
    }
    v23 = m_timeInAir < 0.0;
  }
  if ( v23 && this->m_timeInAir >= 0.0 )
    ((void (__fastcall *)(BgVehiclePhysicsGround *))this->Jump)(this);
  result = 1;
  this->m_timeSinceLastFire = deltaTime + this->m_timeSinceLastFire;
  m_stuntTime = this->m_stuntManager.m_stuntTime;
  if ( m_stuntTime <= 0.0 )
  {
    this->m_stuntManager.m_stuntDuration = 0.0;
    this->m_stuntManager.m_currentType = NO_STUNT;
  }
  else
  {
    this->m_stuntManager.m_stuntTime = m_stuntTime - deltaTime;
  }
  return result;
}

/*
==============
BgVehiclePhysicsSentryDrone::Step
==============
*/
char BgVehiclePhysicsSentryDrone::Step(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  const dvar_t *v6; 
  unsigned int m_wheelCount; 
  __int64 v8; 
  float v9; 
  double v10; 
  float v11; 
  double Value; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  float v15; 
  double v16; 
  const dvar_t *v17; 
  double v18; 
  double v19; 
  vec3_t outVelLs; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 

  BgVehiclePhysicsGround::Step(this, deltaTime);
  if ( !BgVehiclePhysics::IsKeyframed(this) )
  {
    v24 = v2;
    v23 = v3;
    v22 = v4;
    BgVehiclePhysicsGround::ComputeSuspensionForces(this, deltaTime);
    v6 = DCONST_DVARFLT_bg_wheelsonFrontalOffset;
    m_wheelCount = this->m_wheelCount;
    if ( !DCONST_DVARFLT_bg_wheelsonFrontalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonFrontalOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    BgVehiclePhysicsGround::ComputeFrontalSuspensionForce(this, deltaTime, v6->current.value, m_wheelCount);
    BgVehiclePhysicsGround::ApplySuspensionForces(this, deltaTime);
    v8 = this->m_wheelCount;
    if ( (_DWORD)v8 != 12 && this->m_frontalSuspension > 0.0 && (unsigned int)v8 < 0xC && this->m_wheels[v8].m_contactBodyId != 0xFFFFFF )
      BgVehiclePhysicsGround::ApplySingleSuspensionForce(this, deltaTime, &this->m_wheels[v8]);
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
    v9 = FLOAT_1_0;
    v10 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
    outVelLs.v[1] = (float)(*(float *)&v10 < 0.25881907) * outVelLs.v[1];
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
    BgVehiclePhysicsSentryDrone::ApplyEngine(this, deltaTime);
    v11 = FLOAT_1_0;
    if ( !this->m_wheelInContactCount )
    {
      if ( Physics_IsRigidBodyValid(this->m_worldId, this->m_lastColliderBodyId) && this->m_timeSinceLastCollision < 0.25 )
        v11 = FLOAT_0_5;
      else
        v11 = 0.0;
    }
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
    Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
    if ( *(float *)&Value < 0.0 )
    {
      v13 = DCONST_DVARBOOL_bg_wheelsonReverseSteering;
      if ( !DCONST_DVARBOOL_bg_wheelsonReverseSteering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonReverseSteering") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v13->current.enabled )
        v9 = FLOAT_N1_0;
    }
    v14 = DCONST_DVARFLT_bg_wheelsonTurnFactor;
    if ( !DCONST_DVARFLT_bg_wheelsonTurnFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonTurnFactor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = v14->current.value;
    v16 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
    outVelLs.v[2] = (float)((float)((float)((float)((float)((float)(*(float *)&v16 * VELOCITY_FACTOR_COMP) * this->m_steering.m_factor) * v9) * v11) * (float)(YAW_DEG_SEC_0 * 0.017453292)) * k_1) * v15;
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
    BgVehiclePhysicsTreadedBase::DampVelocitiesAndStop(this, deltaTime);
    BgVehiclePhysicsGround::ApplyExtraGravity(this, deltaTime);
    v17 = DCONST_DVARFLT_bg_wheelsonRollReturnSpeed;
    if ( !DCONST_DVARFLT_bg_wheelsonRollReturnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonRollReturnSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    BgVehiclePhysicsGround::TryStabilizeAngles(this, deltaTime, v17->current.value, 4.0);
    BgVehiclePhysicsRevSound::SetMph(&this->m_revSound, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) & _xmm) * 0.056818184);
    v18 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 0);
    this->m_revSound.m_throttle = *(float *)&v18;
    v19 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 1u);
    this->m_revSound.m_brake = *(float *)&v19;
  }
  return 1;
}

/*
==============
BgVehiclePhysicsTank::Step
==============
*/
bool BgVehiclePhysicsTank::Step(BgVehiclePhysicsTank *this, float deltaTime)
{
  double v4; 
  const dvar_t *v5; 
  bool IsReversing; 
  const dvar_t *v7; 
  float v14; 
  __int64 m_wheelCount; 
  unsigned int v16; 
  float v17; 
  float v18; 
  float v19; 
  __int64 v20; 
  const dvar_t *v21; 
  float v24; 
  float value; 
  double v26; 
  float v27; 
  double NormalSpeed; 
  float v29; 
  double v30; 
  float *v31; 
  BgVehicleEventSystem *v32; 
  int *v33; 
  float m_t; 
  bool result; 
  float v38; 
  float v39; 
  float v40; 
  vec3_t outVelLs; 

  BgVehiclePhysicsGround::Step(this, deltaTime);
  if ( BgVehiclePhysics::IsKeyframed(this) )
    return 1;
  BgVehiclePhysicsGround::ComputeSuspensionForces(this, deltaTime);
  BgVehiclePhysicsGround::ApplySuspensionForces(this, deltaTime);
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  v4 = I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
  v5 = DCONST_DVARFLT_bg_bradleyAngleCutoff;
  if ( !DCONST_DVARFLT_bg_bradleyAngleCutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyAngleCutoff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  outVelLs.v[1] = (float)(cosf_0(0.017453292 * v5->current.value) > (float)(*(float *)&v4 * *(float *)&v4)) * outVelLs.v[1];
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
  BgVehiclePhysicsTank::ApplyEngineForce(this, deltaTime);
  if ( !this->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 2609, ASSERT_TYPE_ASSERT, "(m_wheelCount > 0)", (const char *)&queryFormat, "m_wheelCount > 0") )
    __debugbreak();
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  IsReversing = BgVehiclePhysicsGround::IsReversing(this);
  v7 = DCONST_DVARFLT_bg_bradleyTimeToFullSteer;
  _XMM0 = IsReversing;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_N1_0);
  __asm { vblendvps xmm0, xmm1, xmm8, xmm2 }
  v38 = *(float *)&_XMM0;
  if ( !DCONST_DVARFLT_bg_bradleyTimeToFullSteer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyTimeToFullSteer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  _XMM0 = v7->current.unsignedInt;
  __asm { vmaxss  xmm1, xmm0, xmm9 }
  v14 = this->m_controlEx.steeringTimeAdaptive / *(float *)&_XMM1;
  I_fclamp(v14, 0.0, 1.0);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  outVelLs.v[2] = (float)((float)((float)((float)((float)(*(float *)&_XMM0 * (float)(0.017453292 * YAW_DEG_SEC)) * k_0) * this->m_steering.m_factor) * VELOCITY_FACTOR_COMP) * v38) * v14;
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
  BgVehiclePhysicsTreadedBase::DampVelocitiesAndStop(this, deltaTime);
  if ( this->m_playerControlled )
  {
    Physics_GetGravity((const Physics_WorldId)this->m_worldId, &outVelLs);
    m_wheelCount = this->m_wheelCount;
    v16 = 0;
    v17 = (float)m_wheelCount;
    v18 = (float)((float)((float)((float)(v17 * WHEEL_MASS) + this->m_mass) * (float)(1.0 / v17)) * (float)((float)(outVelLs.v[2] * this->m_extraGravityFactor.v[2]) * (float)(1.0 / v17))) * deltaTime;
    v19 = v18 * this->m_transform.m[2].v[1];
    outVelLs.v[0] = v18 * this->m_transform.m[2].v[0];
    outVelLs.v[2] = v18 * this->m_transform.m[2].v[2];
    outVelLs.v[1] = v19;
    if ( (_DWORD)m_wheelCount )
    {
      do
      {
        v20 = v16;
        if ( this->m_wheels[v20].m_contactBodyId == 0xFFFFFF )
          BgVehiclePhysics::AccumulateImpulse(this, &outVelLs, &this->m_wheels[v20].m_hardPointWs);
        ++v16;
      }
      while ( v16 < this->m_wheelCount );
    }
    outVelLs.v[0] = v18 * GLOBAL_UP->v[0];
    outVelLs.v[1] = v18 * GLOBAL_UP->v[1];
    outVelLs.v[2] = v18 * GLOBAL_UP->v[2];
    BgVehiclePhysics::AccumulateImpulse(this, &outVelLs, &this->m_centerOfMassWs);
  }
  else
  {
    BgVehiclePhysicsGround::ApplyExtraGravity(this, deltaTime);
  }
  if ( this->m_playerControlled )
  {
    BgVehiclePhysicsGround::TryStabilizeAngles(this, deltaTime, 1.0, 0.0);
    AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &outVelLs);
    v21 = DCONST_DVARFLT_bg_bradleyPitchRecover;
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    LODWORD(v24) = COERCE_UNSIGNED_INT((float)((float)(outVelLs.v[0] * 0.0027777778) - *(float *)&_XMM4) * 360.0) & _xmm;
    if ( !DCONST_DVARFLT_bg_bradleyPitchRecover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyPitchRecover") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    value = v21->current.value;
    if ( value > 0.0 && v24 > 10.0 )
      BgVehiclePhysicsGround::TryStabilizeAngles(this, deltaTime, 0.0, value);
  }
  BgVehiclePhysicsGround::ComputeAverageWheelValues(this);
  BgVehiclePhysicsTank::ComputeEngineSound(this, deltaTime);
  if ( !Physics_IsPredictiveWorld(this->m_worldId) || this->m_pmoveObject )
    return 1;
  if ( this->m_playerControlled )
  {
    v26 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
    v27 = (float)(COERCE_FLOAT(LODWORD(v26) & _xmm) * COERCE_FLOAT(LODWORD(v26) & _xmm)) * 0.15000001;
    v38 = v27;
    NormalSpeed = BgVehiclePhysics::GetNormalSpeed(this);
    v29 = COERCE_FLOAT(LODWORD(NormalSpeed) & _xmm) * 0.0099999998;
    v40 = v29;
    v30 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 6u);
    v39 = COERCE_FLOAT(LODWORD(v30) & _xmm) * 0.1;
    BgVehiclePhysicsGround::RumbleData::GetIntensity(&this->m_rumble);
    v31 = &v38;
    if ( v27 <= v39 )
      v31 = &v39;
    v32 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
    v33 = (int *)&v40;
    if ( v29 <= *v31 )
      v33 = (int *)v31;
    _XMM0 = (unsigned int)*v33;
    __asm { vmaxss  xmm1, xmm0, xmm7 }
    ((void (__fastcall *)(BgVehicleEventSystem *))v32->CarGamepadRumble)(v32);
  }
  m_t = this->m_rumble.m_t;
  if ( m_t <= 0.0 || this->m_rumble.m_duration <= 0.0 || this->m_rumble.m_intensity <= 0.0 )
    return 1;
  this->m_rumble.m_t = m_t - deltaTime;
  result = 1;
  if ( (float)(m_t - deltaTime) <= 0.0 )
    *(_QWORD *)&this->m_rumble.m_intensity = 0i64;
  return result;
}

/*
==============
BgVehiclePhysicsTwoWheeled::Step
==============
*/
char BgVehiclePhysicsTwoWheeled::Step(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  double Value; 
  double v5; 
  __int128 m_accelForce_low; 
  unsigned int m_wheelInContactCount; 
  float v8; 
  float m_offsetPoint; 
  bool v12; 
  float v13; 
  float v14; 
  double v15; 
  __int64 v16; 
  double v17; 
  float v18; 
  double NormalSpeedPlane; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  double v24; 
  double v25; 
  vec3_t impulseWs; 
  vec3_t atPointWs; 

  BgVehiclePhysicsGround::Step(this, deltaTime);
  BgVehiclePhysicsGround::ComputeSuspensionForces(this, deltaTime);
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  v5 = I_fclamp(*(float *)&Value, -0.5, 1.0);
  if ( *(float *)&v5 > 0.0 || (float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) >= -0.001 )
  {
    m_accelForce_low = LODWORD(this->m_engine.m_accelForce);
    m_wheelInContactCount = this->m_wheelInContactCount;
    *(float *)&m_accelForce_low = (float)((float)(this->m_engine.m_accelForce * 1550.0032) * deltaTime) * *(float *)&v5;
    v8 = *(float *)&m_accelForce_low * this->m_transform.m[0].v[1];
    impulseWs.v[0] = *(float *)&m_accelForce_low * this->m_transform.m[0].v[0];
    *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&m_accelForce_low + 1);
    impulseWs.v[2] = *(float *)&m_accelForce_low * this->m_transform.m[0].v[2];
    impulseWs.v[1] = v8;
    if ( m_wheelInContactCount == 2 )
    {
      m_offsetPoint = this->m_engine.m_offsetPoint;
    }
    else if ( m_wheelInContactCount != 1 || this->m_wheels[0].m_contactBodyId == 0xFFFFFF )
    {
      m_offsetPoint = 0.0;
    }
    else
    {
      *(double *)&_XMM0 = BgVehiclePhysics::GetUpInclination(this);
      __asm { vmaxss  xmm1, xmm0, xmm8 }
      m_offsetPoint = *(float *)&_XMM1 * this->m_engine.m_offsetPoint;
    }
    v12 = this->m_timeSinceLastCollision > 0.1;
    v13 = m_offsetPoint * this->m_transform.m[2].v[1];
    atPointWs.v[0] = (float)(m_offsetPoint * this->m_transform.m[2].v[0]) + this->m_centerOfMassWs.v[0];
    v14 = m_offsetPoint * this->m_transform.m[2].v[2];
    atPointWs.v[1] = v13 + this->m_centerOfMassWs.v[1];
    atPointWs.v[2] = v14 + this->m_centerOfMassWs.v[2];
    if ( v12 )
      BgVehiclePhysics::AccumulateImpulse(this, &impulseWs, &atPointWs);
    else
      BgVehiclePhysics::AccumulateOnlyLinearImpulse(this, &impulseWs);
  }
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &atPointWs);
  BgVehiclePhysics::DampLerp(&atPointWs.v[1], 0.0, deltaTime, 15.0);
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &atPointWs, &this->m_linearVelocityWs);
  v15 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  BgVehiclePhysicsGround::DampingVelocities(this, deltaTime, (float)(1.0 - COERCE_FLOAT(LODWORD(v15) & _xmm)) * 1.5, 0.1);
  BgVehiclePhysicsGround::ComputeAverageWheelValues(this);
  BgVehiclePhysicsGround::ApplySuspensionForces(this, deltaTime);
  v16 = COERCE_UNSIGNED_INT64(BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u)) & _xmm;
  BgVehiclePhysicsGround::TryStabilizeAngles(this, deltaTime, (float)(1.0 - *(float *)&v16) * 8.0, 0.40000001);
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &atPointWs);
  BgVehiclePhysics::DampLerp(atPointWs.v, 0.0, deltaTime, (float)(1.0 - *(float *)&v16) * 5.0);
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &atPointWs, &this->m_angularVelocityWs);
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &impulseWs);
  v17 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  v18 = *(float *)&v17;
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
  if ( *(float *)&NormalSpeedPlane >= 0.050000001 )
  {
    v21 = *(float *)&NormalSpeedPlane * 2.0;
    I_fclamp(*(float *)&NormalSpeedPlane * 2.0, 0.0, 1.0);
    v20 = v21;
  }
  else
  {
    v20 = 0.0;
  }
  LODWORD(v22) = COERCE_UNSIGNED_INT((float)((float)(this->m_transform.m[1].v[1] * GLOBAL_UP->v[1]) + (float)(GLOBAL_UP->v[0] * this->m_transform.m[1].v[0])) + (float)(this->m_transform.m[1].v[2] * GLOBAL_UP->v[2])) & _xmm;
  if ( v22 <= 0.69999999 )
    LODWORD(v23) = COERCE_UNSIGNED_INT((float)(v20 * deltaTime) * v18) ^ _xmm;
  else
    v23 = 0.0;
  v24 = I_fclamp(v23 + impulseWs.v[0], -1.0, 1.0);
  impulseWs.v[0] = *(float *)&v24;
  v25 = I_fclamp((float)((float)((float)((float)((float)(1.0 - (float)((float)((float)(1.0 - v22) * (float)(1.0 - v22)) * (float)(1.0 - v22))) * 3.5) + (float)(v20 * 4.0)) * v18) * deltaTime) + impulseWs.v[2], -1.0, 1.0);
  impulseWs.v[2] = *(float *)&v25;
  BgVehiclePhysics::DampLerp(&impulseWs.v[2], 0.0, deltaTime, 4.0);
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &impulseWs, &this->m_angularVelocityWs);
  BgVehiclePhysicsGround::Steering::LerpYaw(&this->m_steering, this, deltaTime);
  return 1;
}

/*
==============
BgVehiclePhysicsCarBase::CameraConfig::Step
==============
*/
void BgVehiclePhysicsCarBase::CameraConfig::Step(BgVehiclePhysicsCarBase::CameraConfig *this, const BgVehiclePhysicsCarBase *vehObj, float deltaTime)
{
  double NormalSpeed; 
  const dvar_t *v7; 
  double v8; 
  double Value; 
  int v10; 
  double v11; 
  __int128 v13; 
  double v15; 
  double v16; 
  const dvar_t *v17; 
  float v18; 
  double v19; 
  float v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  float v23; 
  double v24; 
  float v25; 
  float v26; 
  float v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  float v30; 
  float v31; 
  const dvar_t *v32; 
  float v33; 
  const dvar_t *v34; 
  float v35; 
  const dvar_t *v36; 
  float v37; 

  if ( Physics_IsPredictiveWorld(vehObj->m_worldId) )
  {
    NormalSpeed = BgVehiclePhysics::GetNormalSpeed(&vehObj->BgVehiclePhysicsGround);
    v7 = DCONST_DVARBOOL_bg_vehCamAdjustOnDrift;
    v8 = NormalSpeed;
    if ( !DCONST_DVARBOOL_bg_vehCamAdjustOnDrift && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamAdjustOnDrift") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      Value = BgVehiclePhysicsControls::GetValue(&vehObj->m_controls, 2u);
      v10 = LODWORD(Value);
      v11 = I_fclamp(vehObj->m_friction.car.tgtFriction / vehObj->m_friction.tread.v[0], 0.0, 1.0);
      v13 = LODWORD(FLOAT_1_0);
      *(float *)&v13 = 1.0 - (float)((float)((float)(1.0 - *(float *)&v11) * (float)(1.0 - *(float *)&v11)) * (float)(1.0 - *(float *)&v11));
      _XMM1 = v13;
      __asm { vmaxss  xmm0, xmm1, cs:__real@3dcccccd }
      *(float *)&v13 = (float)(1.0 - COERCE_FLOAT(v10 & _xmm)) + *(float *)&_XMM0;
      this->m_camReturnFactor = *(float *)&v13;
      v15 = I_fclamp(*(float *)&v13, 0.0, 1.0);
      this->m_camReturnFactor = *(float *)&v15;
      if ( *(float *)&v8 > 0.2 )
      {
        v16 = I_fclamp((float)((float)(*(float *)&v8 - 0.2) * 1.5) + *(float *)&v15, 0.0, 1.0);
        this->m_camReturnFactor = *(float *)&v16;
      }
    }
    else
    {
      this->m_camReturnFactor = 1.0;
    }
    v17 = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg;
    if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = v17->current.value;
    v19 = I_fclamp((float)((float)(0.0 * vehObj->m_transform.m[2].v[0]) + (float)(0.0 * vehObj->m_transform.m[2].v[1])) + (float)(1.0 * vehObj->m_transform.m[2].v[2]), 0.0, 1.0);
    v20 = (float)(*(float *)&v19 * *(float *)&v19) * v18;
    if ( (float)(COERCE_FLOAT(LODWORD(v20) & _xmm) + this->m_camFovDeltaMax) <= 0.001 )
    {
      this->m_camFovDelta = v20;
    }
    else
    {
      v21 = DCONST_DVARBOOL_bg_vehEnhanceSenseOfSpeedFovSpring;
      if ( !DCONST_DVARBOOL_bg_vehEnhanceSenseOfSpeedFovSpring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedFovSpring") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.enabled )
      {
        BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaWithSpring(this, vehObj, *(float *)&v8, deltaTime);
      }
      else
      {
        v22 = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg;
        if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        v23 = v22->current.value;
        v24 = I_fclamp((float)((float)(0.0 * vehObj->m_transform.m[2].v[0]) + (float)(0.0 * vehObj->m_transform.m[2].v[1])) + (float)(1.0 * vehObj->m_transform.m[2].v[2]), 0.0, 1.0);
        v25 = (float)(*(float *)&v24 * *(float *)&v24) * v23;
        v26 = COERCE_FLOAT(LODWORD(v25) & _xmm) + this->m_camFovDeltaMax;
        if ( *(float *)&v8 >= this->m_lastNSpeed )
        {
          v28 = DCONST_DVARFLT_bg_vehCamFovDeltaSpeed;
          if ( !DCONST_DVARFLT_bg_vehCamFovDeltaSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaSpeed") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v28);
          v27 = v28->current.value;
        }
        else
        {
          v27 = FLOAT_0_5;
        }
        NormalizeRange(v8, 0.40000001);
        v29 = DCONST_DVARFLT_bg_vehCamFovDeltaAir;
        if ( !DCONST_DVARFLT_bg_vehCamFovDeltaAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaAir") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        v30 = v29->current.value;
        v31 = (float)((float)((float)vehObj->IsInAir((BgVehiclePhysics *)vehObj) * v30) + (float)((float)((float)(*(float *)&v8 * *(float *)&v8) * *(float *)&v8) * v26)) + v25;
        BgVehiclePhysics::DampLerp(&this->m_camFovDelta, v31, deltaTime, v27);
      }
    }
    this->m_lastNSpeed = *(float *)&v8;
    v32 = DCONST_DVARFLT_bg_vehCamPitchSpeed;
    v33 = (float)((float)(*(float *)&v8 * *(float *)&v8) * this->m_camPitchDynamic) + this->m_camPitchBase;
    if ( !DCONST_DVARFLT_bg_vehCamPitchSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamPitchSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    BgVehiclePhysics::DampLerp(&this->m_camPitchAdd, v33, deltaTime, v32->current.value);
    v34 = DCONST_DVARFLT_bg_vehCamRangeAddMin;
    if ( !DCONST_DVARFLT_bg_vehCamRangeAddMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamRangeAddMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    v35 = v34->current.value;
    v36 = DCONST_DVARFLT_bg_vehCamRangeSpeed;
    v37 = (float)((float)((float)(COERCE_FLOAT(LODWORD(v35) & _xmm) + 1.0) * (float)(*(float *)&v8 * *(float *)&v8)) + v35) * this->m_camRangeAddMax;
    if ( !DCONST_DVARFLT_bg_vehCamRangeSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamRangeSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    BgVehiclePhysics::DampLerp(&this->m_camRangeAdd, v37, deltaTime, v36->current.value);
  }
}

/*
==============
BgVehiclePhysicsGround::Engine::Step
==============
*/
void BgVehiclePhysicsGround::Engine::Step(BgVehiclePhysicsGround::Engine *this, const BgVehiclePhysicsGround *vehicle, float deltaTime)
{
  double NormalSpeed; 
  float m_clutching; 
  float v12; 

  NormalSpeed = BgVehiclePhysics::GetNormalSpeed(&vehicle->BgVehiclePhysics);
  _XMM4 = 0i64;
  _XMM2 = 0i64;
  __asm
  {
    vroundss xmm4, xmm4, xmm3, 1
    vroundss xmm2, xmm2, xmm1, 1
  }
  if ( SLODWORD(_XMM2) != SLODWORD(_XMM4) && !BgVehiclePhysicsGround::IsReversing((BgVehiclePhysicsGround *)vehicle) )
  {
    m_clutching = this->m_clutching;
    if ( m_clutching <= 0.0 && COERCE_FLOAT(LODWORD(m_clutching) & _xmm) > this->m_minTimeInGear )
      this->m_clutching = this->m_clutchTime;
  }
  v12 = this->m_clutching - deltaTime;
  this->m_lastNormalSpeed = *(float *)&NormalSpeed;
  this->m_clutching = v12;
}

/*
==============
BgVehiclePhysicsGround::FrictionCar::Step
==============
*/
void BgVehiclePhysicsGround::FrictionCar::Step(BgVehiclePhysicsGround::FrictionCar *this, const BgVehiclePhysicsGround *vehicle, float surfFric, float deltaTime)
{
  __int128 tgtFriction_low; 
  double Value; 
  float v12; 
  double v13; 
  float handbrakeFric; 
  float *p_tgtFriction; 
  float tgtFricRecover; 
  float baseFriction; 
  double NormalSpeed; 
  float v19; 
  double v20; 
  float v21; 
  unsigned int m_contactBodyId; 
  const BgVehiclePhysicsGround::Wheel *Wheel; 
  float amountLost; 
  bool v25; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  bool IsReversing; 
  bool v34; 
  __int128 v36; 
  float v38; 

  if ( vehicle->IsInAir((BgVehiclePhysics *)vehicle) )
  {
    tgtFriction_low = LODWORD(this->tgtFriction);
    *(float *)&tgtFriction_low = this->tgtFriction - (float)(deltaTime * 2.5);
    _XMM1 = tgtFriction_low;
    __asm { vmaxss  xmm2, xmm1, cs:__real@3dcccccd }
    this->tgtFriction = *(float *)&_XMM2;
    this->timeToRecover = 0.0;
    goto LABEL_17;
  }
  Value = BgVehiclePhysicsControls::GetValue(&vehicle->m_controls, 4u);
  LODWORD(v12) = LODWORD(Value) & _xmm;
  v13 = BgVehiclePhysicsControls::GetValue(&vehicle->m_controls, 7u);
  if ( COERCE_FLOAT(LODWORD(v13) & _xmm) >= 0.001 )
  {
    handbrakeFric = this->handbrakeFric;
    if ( handbrakeFric >= 0.001 )
    {
      p_tgtFriction = &this->tgtFriction;
      if ( v12 > 0.001 )
      {
        *p_tgtFriction = (float)((float)((float)(1.0 - COERCE_FLOAT(LODWORD(v13) & _xmm)) * this->baseFriction) * 0.25) + (float)((float)(handbrakeFric * COERCE_FLOAT(LODWORD(v13) & _xmm)) * 0.75);
        goto LABEL_17;
      }
      tgtFricRecover = this->tgtFricRecover;
      baseFriction = this->baseFriction;
LABEL_16:
      BgVehiclePhysics::DampLerp(p_tgtFriction, baseFriction, deltaTime, tgtFricRecover);
      goto LABEL_17;
    }
  }
  NormalSpeed = BgVehiclePhysics::GetNormalSpeed(&vehicle->BgVehiclePhysics);
  v19 = *(float *)&NormalSpeed;
  v20 = BgVehiclePhysicsControls::GetValue(&vehicle->m_controls, 2u);
  v21 = (float)(COERCE_FLOAT(LODWORD(v20) & _xmm) * FRIC_STEERING_CONTRIBUTION) + (float)(v12 * FRIC_GAS_CONTRIBUTION);
  m_contactBodyId = BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehicle, 2u)->m_contactBodyId;
  Wheel = BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehicle, 3u);
  amountLost = this->amountLost;
  v25 = m_contactBodyId == 0xFFFFFF;
  v26 = DCONST_DVARFLT_bg_vehUTurnDrift;
  v27 = (float)(Wheel->m_contactBodyId != 0xFFFFFF) + (float)!v25;
  if ( !DCONST_DVARFLT_bg_vehUTurnDrift && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehUTurnDrift") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  v28 = v26->current.value;
  if ( v28 > 0.001 && v19 < speedUTThreshold )
    amountLost = amountLost + (float)((float)(1.0 - (float)((float)(v19 - speedUTThreshold) / (float)(1.0 - speedUTThreshold))) * (float)((float)(v21 * v21) * v28));
  IsReversing = BgVehiclePhysicsGround::IsReversing((BgVehiclePhysicsGround *)vehicle);
  p_tgtFriction = &this->tgtFriction;
  _XMM0 = IsReversing;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_0_25);
  __asm { vblendvps xmm3, xmm1, xmm8, xmm2 }
  v34 = this->timeToRecover > 0.0;
  v36 = LODWORD(this->tgtFriction);
  *(float *)&v36 = this->tgtFriction - (float)((float)((float)((float)((float)((float)(*(float *)&_XMM3 * (float)((float)((float)(v21 * v21) * v21) * amountLost)) * v19) * 0.60000002) * deltaTime) * (float)(2.0 - surfFric)) * v27);
  _XMM1 = v36;
  __asm { vmaxss  xmm0, xmm1, xmm2 }
  this->tgtFriction = *(float *)&_XMM0;
  if ( !v34 )
  {
    v38 = (float)((float)(1.0 - v19) * (float)(1.0 - v19)) * (float)(1.0 - v19);
    tgtFricRecover = (float)((float)((float)((float)((float)(v38 * v38) * v38) * v38) * 3.0) + 1.0) * (float)(surfFric * this->tgtFricRecover);
    baseFriction = this->baseFriction;
    goto LABEL_16;
  }
LABEL_17:
  this->timeToRecover = this->timeToRecover - deltaTime;
}

/*
==============
BgVehiclePhysicsGround::RumbleData::Step
==============
*/
void BgVehiclePhysicsGround::RumbleData::Step(BgVehiclePhysicsGround::RumbleData *this, float deltaTime)
{
  float m_t; 

  m_t = this->m_t;
  if ( m_t > 0.0 && this->m_duration > 0.0 && this->m_intensity > 0.0 )
  {
    this->m_t = m_t - deltaTime;
    if ( (float)(m_t - deltaTime) <= 0.0 )
      *(_QWORD *)&this->m_intensity = 0i64;
  }
}

/*
==============
BgVehiclePhysicsGround::StuntManager::Step
==============
*/
void BgVehiclePhysicsGround::StuntManager::Step(BgVehiclePhysicsGround::StuntManager *this, BgVehiclePhysicsGround *vehObj, float deltaTime)
{
  float m_stuntTime; 

  m_stuntTime = this->m_stuntTime;
  if ( m_stuntTime <= 0.0 )
  {
    this->m_stuntDuration = 0.0;
    this->m_currentType = NO_STUNT;
  }
  else
  {
    this->m_stuntTime = m_stuntTime - deltaTime;
  }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::StepClientKeyframe
==============
*/
void BgVehiclePhysicsAtvQuadNew::StepClientKeyframe(BgVehiclePhysicsAtvQuadNew *this, float deltaTime)
{
  BgVehicleEventSystem *v3; 

  v3 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v3->CarDrivingKeyframed(v3, this);
  ((void (__fastcall *)(BgVehiclePhysicsAtvQuadNew *))this->ComputeEngineSound)(this);
  this->m_animPitch.v[0] = this->m_animPitch.v[0] - (float)((float)(this->m_animPitch.v[0] * deltaTime) * 4.0);
  this->m_animYaw.v[0] = this->m_animYaw.v[0] - (float)((float)(this->m_animYaw.v[0] * deltaTime) * 4.0);
  this->m_animPitch.v[2] = 0.0;
  this->m_animYaw.v[2] = 0.0;
}

/*
==============
BgVehiclePhysicsCarBase::StepClientKeyframe
==============
*/
void BgVehiclePhysicsCarBase::StepClientKeyframe(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  BgVehicleEventSystem *v3; 

  v3 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v3->CarDrivingKeyframed(v3, this);
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))this->ComputeEngineSound)(this);
}

/*
==============
BgVehiclePhysicsGround::StepClientKeyframe
==============
*/
void BgVehiclePhysicsGround::StepClientKeyframe(BgVehiclePhysicsGround *this, float deltaTime)
{
  BgVehicleEventSystem *v3; 

  v3 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v3->CarDrivingKeyframed(v3, this);
}

/*
==============
BgVehiclePhysicsTank::StepClientKeyframe
==============
*/
void BgVehiclePhysicsTank::StepClientKeyframe(BgVehiclePhysicsTank *this, float deltaTime)
{
  BgVehicleEventSystem *v3; 

  v3 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v3->CarDrivingKeyframed(v3, this);
  BgVehiclePhysicsTank::ComputeEngineSound(this, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::StepDvarConfiguration
==============
*/
void BgVehiclePhysicsCarBase::StepDvarConfiguration(BgVehiclePhysicsCarBase *this)
{
  ;
}

/*
==============
BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaDamped
==============
*/
void BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaDamped(BgVehiclePhysicsCarBase::CameraConfig *this, const BgVehiclePhysicsCarBase *vehObj, double normalSpeed, float deltaTime)
{
  const dvar_t *v4; 
  float value; 
  double v8; 
  float v9; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  bool v16; 

  v4 = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg;
  if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v8 = I_fclamp((float)((float)(0.0 * vehObj->m_transform.m[2].v[1]) + (float)(0.0 * vehObj->m_transform.m[2].v[0])) + (float)(1.0 * vehObj->m_transform.m[2].v[2]), 0.0, 1.0);
  v9 = (float)(*(float *)&v8 * *(float *)&v8) * value;
  v10 = COERCE_FLOAT(LODWORD(v9) & _xmm) + this->m_camFovDeltaMax;
  if ( *(float *)&normalSpeed >= this->m_lastNSpeed )
  {
    v12 = DCONST_DVARFLT_bg_vehCamFovDeltaSpeed;
    if ( !DCONST_DVARFLT_bg_vehCamFovDeltaSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v11 = v12->current.value;
  }
  else
  {
    v11 = FLOAT_0_5;
  }
  v13 = NormalizeRange(normalSpeed, 0.40000001);
  v14 = DCONST_DVARFLT_bg_vehCamFovDeltaAir;
  if ( !DCONST_DVARFLT_bg_vehCamFovDeltaAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaAir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = v14->current.value;
  v16 = vehObj->IsInAir((BgVehiclePhysics *)vehObj);
  BgVehiclePhysics::DampLerp(&this->m_camFovDelta, (float)((float)((float)v16 * v15) + (float)((float)((float)(v13 * v13) * v13) * v10)) + v9, deltaTime, v11);
}

/*
==============
BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaWithSpring
==============
*/
void BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaWithSpring(BgVehiclePhysicsCarBase::CameraConfig *this, const BgVehiclePhysicsCarBase *vehObj, double normalSpeed, float deltaTime)
{
  const dvar_t *v4; 
  float value; 
  double v8; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  const dvar_t *v18; 
  float m_lastNSpeed; 
  float v20; 
  float v21; 
  float m_camFovDelta; 
  float v23; 
  const dvar_t *v24; 
  double v25; 
  const dvar_t *v26; 
  float m_camOscillTime; 
  float v28; 
  const dvar_t *v29; 
  float v30; 
  float v31; 
  int integer; 
  double v33; 
  float m_camOscillStart; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 

  v4 = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg;
  if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v8 = I_fclamp((float)((float)(0.0 * vehObj->m_transform.m[2].v[1]) + (float)(0.0 * vehObj->m_transform.m[2].v[0])) + (float)(1.0 * vehObj->m_transform.m[2].v[2]), 0.0, 1.0);
  v9 = DCONST_DVARFLT_cspringThreshold;
  v10 = (float)(*(float *)&v8 * *(float *)&v8) * value;
  v42 = v10;
  if ( !DCONST_DVARFLT_cspringThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v11 = v9->current.value;
  v12 = DCONST_DVARFLT_cspringMaxT;
  if ( !DCONST_DVARFLT_cspringMaxT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringMaxT") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.value;
  v14 = DCONST_DVARFLT_cspringMinT;
  if ( !DCONST_DVARFLT_cspringMinT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringMinT") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = v14->current.value;
  v16 = DCONST_DVARFLT_cspringD;
  if ( !DCONST_DVARFLT_cspringD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringD") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = v16->current.value;
  v18 = DCONST_DVARFLT_cspringF;
  v43 = v17;
  if ( !DCONST_DVARFLT_cspringF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringF") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  m_lastNSpeed = this->m_lastNSpeed;
  v20 = FLOAT_0_30000001;
  v41 = v18->current.value;
  v21 = COERCE_FLOAT(LODWORD(v10) & _xmm) + this->m_camFovDeltaMax;
  if ( *(float *)&normalSpeed >= m_lastNSpeed )
  {
    if ( this->m_camOscillTime <= 0.0 )
    {
      v24 = DCONST_DVARFLT_bg_vehCamFovDeltaSpeed;
      if ( !DCONST_DVARFLT_bg_vehCamFovDeltaSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      v20 = v24->current.value;
      *(_QWORD *)&this->m_camOscillTime = 0i64;
    }
  }
  else if ( (float)(m_lastNSpeed - *(float *)&normalSpeed) > v11 && this->m_camOscillTime <= 0.0 )
  {
    m_camFovDelta = this->m_camFovDelta;
    v23 = (float)((float)(1.0 - (float)((float)((float)(m_lastNSpeed - *(float *)&normalSpeed) - v11) / (float)(1.0 - v11))) * (float)(v13 - v15)) + v15;
    this->m_camOscillDur = v23;
    this->m_camOscillTime = v23;
    this->m_camOscillStart = m_camFovDelta;
  }
  v25 = I_fclamp(vehObj->m_timeInAir * 2.0, 0.0, 1.0);
  v26 = DCONST_DVARFLT_bg_vehCamFovDeltaAir;
  if ( !DCONST_DVARFLT_bg_vehCamFovDeltaAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaAir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  m_camOscillTime = this->m_camOscillTime;
  v28 = (float)(*(float *)&v25 * v26->current.value) * *(float *)&normalSpeed;
  if ( m_camOscillTime <= 0.0 )
  {
    v39 = deltaTime;
  }
  else
  {
    v29 = DCONST_DVARINT_cspringTmode;
    v31 = 1.0 - (float)(m_camOscillTime / this->m_camOscillDur);
    v30 = v31;
    if ( !DCONST_DVARINT_cspringTmode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringTmode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    integer = v29->current.integer;
    if ( integer == 1 )
    {
      v30 = v31 * v31;
    }
    else if ( integer == 2 )
    {
      v33 = I_fclamp(1.0 - v31, 0.0, 1.0);
      v30 = 1.0 - (float)(*(float *)&v33 * *(float *)&v33);
    }
    m_camOscillStart = this->m_camOscillStart;
    v35 = (float)(m_camOscillStart - v10) - v28;
    if ( v35 <= 0.001 )
    {
      this->m_camOscillDur = 0.0;
      v38 = 0.0;
    }
    else
    {
      v36 = powf_0(2.7182817, COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 * v43) ^ _xmm));
      v37 = (float)(1.0 - (float)(v36 * cosf_0(v30 * v41))) * v35;
      v38 = this->m_camOscillTime;
      this->m_camFovDelta = m_camOscillStart - v37;
    }
    v39 = deltaTime;
    v10 = v42;
    m_camOscillTime = v38 - deltaTime;
    this->m_camOscillTime = m_camOscillTime;
  }
  if ( m_camOscillTime <= 0.0 )
  {
    v40 = NormalizeRange(normalSpeed, 0.40000001);
    BgVehiclePhysics::DampLerp(&this->m_camFovDelta, (float)((float)((float)((float)(v40 * v40) * v40) * v21) + v28) + v10, v39, v20);
  }
}

/*
==============
BgVehiclePhysicsGround::StopPlayerControlling
==============
*/
void BgVehiclePhysicsGround::StopPlayerControlling(BgVehiclePhysicsGround *this)
{
  BgVehicleEventSystem *v2; 

  if ( Physics_IsPredictiveWorld(this->m_worldId) && this->m_playerControlled )
  {
    v2 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
    v2->CarStopPlayer(v2, this);
  }
  if ( this->m_worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
    this->m_sound.Horn = 0;
  BgVehiclePhysics::StopPlayerControlling(this);
}

/*
==============
BgVehiclePhysicsCarBase::StoreConfigurationForDvars
==============
*/
void BgVehiclePhysicsCarBase::StoreConfigurationForDvars(BgVehiclePhysicsCarBase *this)
{
  ;
}

/*
==============
BgVehiclePhysicsCarBase::SupportsFeature
==============
*/
bool BgVehiclePhysicsCarBase::SupportsFeature(BgVehiclePhysicsCarBase *this, BgVehiclePhysicsFeature feat)
{
  unsigned int v2; 
  int v3; 
  bool result; 
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  unsigned int v6; 
  int v7; 

  switch ( feat )
  {
    case VPFEAT_STEERING_WHEELS:
    case VPFEAT_CHASSIS_VIBRATION_NOISE:
    case VPFEAT_COM_RUNTIME_ADJUST:
    case VPFEAT_WHEEL_SPINANGLES:
    case VPFEAT_REV_AUDIO:
    case VPFEAT_CAMERA_FOV_CHANGE:
    case VPFEAT_TIRE_BLOWN:
      goto LABEL_10;
    case VPFEAT_LIGHT:
      m_vehicleAnimProfile = this->m_vehicleAnimProfile;
      if ( m_vehicleAnimProfile && m_vehicleAnimProfile != VEH_ANIMPROFILE_SCOOTER )
        goto LABEL_7;
      goto LABEL_10;
    case VPFEAT_HEAVY:
      v2 = this->m_vehicleAnimProfile;
      if ( v2 > 0x13 )
        goto LABEL_7;
      v3 = 720916;
      if ( !_bittest(&v3, v2) )
        goto LABEL_7;
      result = 1;
      break;
    case VPFEAT_HANDBRAKE_FOR_DRIFT:
      v6 = this->m_vehicleAnimProfile;
      if ( v6 <= 0x13 && (v7 = 720916, _bittest(&v7, v6)) )
LABEL_7:
        result = 0;
      else
LABEL_10:
        result = 1;
      break;
    default:
      switch ( feat )
      {
        case VPFEAT_SUSPENSION_WHEELS:
        case VPFEAT_GROUND_VEHICLE:
        case VPFEAT_NAVIGATE_MESH:
        case VPFEAT_DOOR_ANIMS:
        case VPFEAT_PLAYERHIT_RESPONSE:
        case VPFEAT_DAMAGE_CALCULATION:
        case VPFEAT_CAMERA_RADIAL_BLUR:
          goto LABEL_10;
        case VPFEAT_HORN:
          result = this->m_vehicleAnimProfile != VEH_ANIMPROFILE_COSCAR;
          break;
        case VPFEAT_HAS_TURRET:
          result = ((this->m_vehicleAnimProfile - 2) & 0xFFFFFFFD) == 0;
          break;
        case VPFEAT_SCRIPTABLE_FILTERING:
          result = this->m_vehicleGameProfile != VEH_GAMEPROFILE_WHEELSON;
          break;
        default:
          goto LABEL_7;
      }
      break;
  }
  return result;
}

/*
==============
BgVehiclePhysicsGround::SupportsFeature
==============
*/
bool BgVehiclePhysicsGround::SupportsFeature(BgVehiclePhysicsGround *this, BgVehiclePhysicsFeature feat)
{
  bool result; 

  switch ( feat )
  {
    case VPFEAT_SUSPENSION_WHEELS:
    case VPFEAT_GROUND_VEHICLE:
    case VPFEAT_NAVIGATE_MESH:
    case VPFEAT_DOOR_ANIMS:
    case VPFEAT_PLAYERHIT_RESPONSE:
    case VPFEAT_DAMAGE_CALCULATION:
    case VPFEAT_CAMERA_RADIAL_BLUR:
      result = 1;
      break;
    case VPFEAT_HORN:
      result = this->m_vehicleAnimProfile != VEH_ANIMPROFILE_COSCAR;
      break;
    case VPFEAT_HAS_TURRET:
      result = ((this->m_vehicleAnimProfile - 2) & 0xFFFFFFFD) == 0;
      break;
    case VPFEAT_SCRIPTABLE_FILTERING:
      result = this->m_vehicleGameProfile != VEH_GAMEPROFILE_WHEELSON;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
BgVehiclePhysicsSentryDrone::SupportsFeature
==============
*/
bool BgVehiclePhysicsSentryDrone::SupportsFeature(BgVehiclePhysicsSentryDrone *this, BgVehiclePhysicsFeature feat)
{
  return (feat & 0xFFFFFFFB) == 0 || BgVehiclePhysicsGround::SupportsFeature(this, feat);
}

/*
==============
BgVehiclePhysicsTank::SupportsFeature
==============
*/
bool BgVehiclePhysicsTank::SupportsFeature(BgVehiclePhysicsTank *this, BgVehiclePhysicsFeature feat)
{
  int v2; 
  bool result; 

  result = (unsigned int)feat <= VPFEAT_REV_AUDIO && (v2 = 131361, _bittest(&v2, feat)) || BgVehiclePhysicsGround::SupportsFeature(this, feat);
  return result;
}

/*
==============
BgVehiclePhysicsTwoWheeled::SupportsFeature
==============
*/
bool BgVehiclePhysicsTwoWheeled::SupportsFeature(BgVehiclePhysicsTwoWheeled *this, BgVehiclePhysicsFeature feat)
{
  return ((feat - 25) & 0xFFFFFFFD) == 0 || BgVehiclePhysicsGround::SupportsFeature(this, feat);
}

/*
==============
BgVehiclePhysicsGround::TryStabilizeAngles
==============
*/
void BgVehiclePhysicsGround::TryStabilizeAngles(BgVehiclePhysicsGround *this, float deltaTime, float rollSpeed, float pitchSpeed)
{
  char v7; 
  __int128 v9; 
  float v10; 
  __int128 v11; 
  __int128 v15; 
  float v16; 
  __int128 v18; 
  vec3_t outVelLs; 

  if ( rollSpeed > 0.001 || pitchSpeed > 0.001 )
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
    v7 = 0;
    _XMM11 = 0i64;
    if ( rollSpeed > 0.001 )
    {
      v9 = LODWORD(this->m_transform.m[1].v[1]);
      *(float *)&v9 = (float)((float)(this->m_transform.m[1].v[1] * GLOBAL_UP->v[1]) + (float)(this->m_transform.m[1].v[0] * GLOBAL_UP->v[0])) + (float)(this->m_transform.m[1].v[2] * GLOBAL_UP->v[2]);
      LODWORD(v10) = v9 & _xmm;
      if ( COERCE_FLOAT(v9 & _xmm) > 0.001 )
      {
        v11 = v9 & (unsigned int)_xmm;
        *(float *)&v11 = fsqrt(v10);
        _XMM1 = v11 ^ _xmm;
        __asm
        {
          vcmpless xmm0, xmm11, xmm3
          vblendvps xmm0, xmm1, xmm2, xmm0
        }
        outVelLs.v[0] = outVelLs.v[0] - (float)((float)(*(float *)&_XMM0 * deltaTime) * rollSpeed);
        v7 = 1;
      }
    }
    if ( pitchSpeed <= 0.001 || (v15 = LODWORD(this->m_transform.m[0].v[1]), *(float *)&v15 = (float)((float)(this->m_transform.m[0].v[1] * GLOBAL_UP->v[1]) + (float)(this->m_transform.m[0].v[0] * GLOBAL_UP->v[0])) + (float)(this->m_transform.m[0].v[2] * GLOBAL_UP->v[2]), LODWORD(v16) = v15 & _xmm, COERCE_FLOAT(v15 & _xmm) <= 0.001) )
    {
      if ( !v7 )
        return;
    }
    else
    {
      __asm { vcmpless xmm0, xmm11, xmm3 }
      v18 = v15 & (unsigned int)_xmm;
      *(float *)&v18 = fsqrt(v16);
      _XMM1 = v18 ^ _xmm;
      __asm { vblendvps xmm0, xmm1, xmm2, xmm0 }
      outVelLs.v[1] = (float)((float)(*(float *)&_XMM0 * pitchSpeed) * deltaTime) + outVelLs.v[1];
    }
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
  }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::UpdateAnimationParams
==============
*/
bool BgVehiclePhysicsAtvQuadNew::UpdateAnimationParams(BgVehiclePhysicsAtvQuadNew *this, int vehicleSeat, VehicleWorldmodelAAnim *outAnimParams)
{
  bool result; 

  if ( vehicleSeat != 1 )
    return 0;
  if ( !outAnimParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 4796, ASSERT_TYPE_ASSERT, "(outAnimParams)", (const char *)&queryFormat, "outAnimParams") )
    __debugbreak();
  outAnimParams->yaw = this->m_animYaw.v[0];
  result = 1;
  outAnimParams->pitch = this->m_animPitch.v[2] + this->m_animPitch.v[0];
  return result;
}

/*
==============
BgVehiclePhysicsTechnical::UpdateAnimationParams
==============
*/
bool BgVehiclePhysicsTechnical::UpdateAnimationParams(BgVehiclePhysicsTechnical *this, int vehicleSeat, VehicleWorldmodelAAnim *outAnimParams)
{
  bool result; 
  float v7; 
  double v9; 
  double v13; 

  if ( !outAnimParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 4670, ASSERT_TYPE_ASSERT, "(outAnimParams)", (const char *)&queryFormat, "outAnimParams") )
    __debugbreak();
  if ( vehicleSeat != 1 )
    return 0;
  v7 = acosf_0(1.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(this->m_transform.m[0].v[1] * GLOBAL_UP->v[1]) + (float)(this->m_transform.m[0].v[0] * GLOBAL_UP->v[0])) + (float)(this->m_transform.m[0].v[2] * GLOBAL_UP->v[2])) & _xmm));
  _XMM6 = 0i64;
  v9 = I_fclamp(v7 * 0.76394373, 0.0, 1.0);
  _XMM1 = LODWORD(FLOAT_N1_0);
  __asm
  {
    vcmpless xmm3, xmm6, xmm7
    vblendvps xmm3, xmm1, xmm8, xmm3
  }
  outAnimParams->pitch = (float)(*(float *)&v9 * *(float *)&_XMM3) * 100.0;
  v13 = I_fclamp((float)(1.1111112 / this->m_steering.m_yawMaxAngle) * this->m_steering.m_yaw, -1.0, 1.0);
  result = 1;
  outAnimParams->yaw = *(float *)&v13 * -100.0;
  return result;
}

/*
==============
BgVehiclePhysicsGround::UpdateControlTimes
==============
*/

void __fastcall BgVehiclePhysicsGround::UpdateControlTimes(BgVehiclePhysicsGround *this, double deltaTime)
{
  __int128 v3; 
  double Value; 
  bool v5; 
  char v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  float handbrakingTime; 
  __int128 handbrakingTime_low; 
  __int128 v21; 
  float handbrakingFullTime; 
  double NormalSpeed; 
  float v25; 
  double v26; 
  double v27; 

  v3 = *(_OWORD *)&deltaTime;
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  v5 = COERCE_FLOAT(LODWORD(Value) & _xmm) > 0.001;
  BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  _XMM7 = 0i64;
  if ( !v5 )
    goto LABEL_4;
  __asm { vcmpless xmm1, xmm7, dword ptr [rbx+0A1Ch] }
  _XMM3 = LODWORD(FLOAT_N1_0);
  __asm
  {
    vcmpless xmm0, xmm7, xmm0
    vblendvps xmm2, xmm3, xmm9, xmm1
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  if ( (float)(*(float *)&_XMM2 * *(float *)&_XMM0) < 0.0 )
    v12 = 1;
  else
LABEL_4:
    v12 = 0;
  if ( !v5 || v12 )
  {
    *(_QWORD *)&this->m_controlEx.steeringTime = 0i64;
  }
  else
  {
    this->m_controlEx.steeringTime = *(float *)&v3 + this->m_controlEx.steeringTime;
    v13 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
    this->m_controlEx.steeringTimeAdaptive = (float)(COERCE_FLOAT(LODWORD(v13) & _xmm) * *(float *)&v3) + this->m_controlEx.steeringTimeAdaptive;
  }
  v14 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  if ( COERCE_FLOAT(LODWORD(v14) & _xmm) > 0.001 )
  {
    v15 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
    this->m_controlEx.gasTime = (float)(COERCE_FLOAT(LODWORD(v15) & _xmm) * *(float *)&v3) + this->m_controlEx.gasTime;
  }
  else
  {
    this->m_controlEx.gasTime = 0.0;
  }
  if ( HBENDDECAY <= HBSTARTDECAY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1955, ASSERT_TYPE_ASSERT, "(HBENDDECAY > HBSTARTDECAY)", (const char *)&queryFormat, "HBENDDECAY > HBSTARTDECAY") )
    __debugbreak();
  if ( HBSTARTDECAY <= HBMAXTIME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1956, ASSERT_TYPE_ASSERT, "(HBSTARTDECAY > HBMAXTIME)", (const char *)&queryFormat, "HBSTARTDECAY > HBMAXTIME") )
    __debugbreak();
  v16 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 3u);
  handbrakingTime = this->m_controlEx.handbrakingTime;
  if ( COERCE_FLOAT(LODWORD(v16) & _xmm) > 0.001 )
  {
    v21 = v3;
    *(float *)&v21 = (float)(*(float *)&v3 * 16.0) + handbrakingTime;
    _XMM2 = v21;
    __asm { vminss  xmm1, xmm2, cs:HBMAXTIME }
    this->m_controlEx.handbrakingFullTime = *(float *)&v3 + this->m_controlEx.handbrakingFullTime;
  }
  else
  {
    handbrakingTime_low = LODWORD(this->m_controlEx.handbrakingTime);
    *(float *)&handbrakingTime_low = handbrakingTime - *(float *)&v3;
    _XMM0 = handbrakingTime_low;
    __asm { vmaxss  xmm1, xmm0, xmm7 }
    this->m_controlEx.handbrakingFullTime = *(float *)&_XMM1;
  }
  this->m_controlEx.handbrakingTime = *(float *)&_XMM1;
  if ( this->SupportsFeature(this, VPFEAT_HANDBRAKE_FOR_DRIFT) )
  {
    handbrakingFullTime = this->m_controlEx.handbrakingFullTime;
    if ( handbrakingFullTime >= HBSTARTDECAY )
    {
      v27 = I_fclamp((float)(handbrakingFullTime - HBSTARTDECAY) / (float)(HBENDDECAY - HBSTARTDECAY), 0.0, 1.0);
      this->m_controls.playerValues[7] = 1.0 - (float)((float)((float)(1.0 - *(float *)&v27) - 1.0) * (float)((float)(1.0 - *(float *)&v27) - 1.0));
    }
    else
    {
      NormalSpeed = BgVehiclePhysics::GetNormalSpeed(this);
      v25 = *(float *)&NormalSpeed / normalSpeedThresholdForHB;
      I_fclamp(*(float *)&NormalSpeed / normalSpeedThresholdForHB, 0.0, 1.0);
      v26 = I_fclamp(this->m_controlEx.handbrakingTime / HBMAXTIME, 0.0, 1.0);
      this->m_controls.playerValues[7] = *(float *)&v26 * v25;
    }
  }
  else
  {
    this->m_controls.playerValues[7] = 0;
  }
}

/*
==============
BgVehiclePhysicsGround::UpdatePlayerInputControls
==============
*/
void BgVehiclePhysicsGround::UpdatePlayerInputControls(BgVehiclePhysicsGround *this, const usercmd_s *cmd, const playerState_s *ps)
{
  float InputCharValueWithThreshold; 
  float v10; 
  unsigned __int64 v11; 
  __int128 v12; 

  BgVehiclePhysics::UpdatePlayerInputControls(this, cmd, ps);
  BgVehiclePhysics::UpdateHornInputControls(this, cmd, 0x1000u, 0x2000u);
  InputCharValueWithThreshold = GetInputCharValueWithThreshold(-cmd->remoteControlMove[1], CAR_STEER_THRESHOLD);
  *(float *)&_XMM0 = GetInputCharValueWithThreshold(cmd->remoteControlMove[0], CAR_THROTTLE_THRESHOLD);
  __asm { vmaxss  xmm1, xmm0, xmm2 }
  _XMM0 = _XMM0 ^ _xmm;
  this->m_controls.playerValues[2] = InputCharValueWithThreshold;
  __asm { vmaxss  xmm0, xmm0, xmm2 }
  this->m_controls.playerValues[0] = *(float *)&_XMM1;
  this->m_controls.playerValues[1] = *(float *)&_XMM0;
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 0);
  v10 = *(float *)&_XMM0;
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 1u);
  this->m_controls.playerValues[4] = v10 - *(float *)&_XMM0;
  if ( (cmd->buttons & 0x8000000000000i64) != 0 )
  {
    this->m_controls.playerValues[5] = (float)cmd->remoteControlMove[2] * 0.0078740157;
    LODWORD(v11) = (cmd->buttons & 0x21) != 0;
  }
  else
  {
    this->m_controls.playerValues[5] = (float)((cmd->buttons >> 45) & 1) - (float)((cmd->buttons >> 29) & 1);
    v11 = (cmd->buttons >> 40) & 1;
  }
  this->m_controls.playerValues[3] = (float)(int)v11;
  if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_VINDIA )
  {
    v12 = 0i64;
    *(float *)&v12 = (float)cmd->yawmove * 0.0078740157;
    _XMM5 = v12;
    _XMM0 = v12 & _xmm;
    __asm
    {
      vcmpltss xmm1, xmm0, xmm3
      vblendvps xmm0, xmm5, xmm4, xmm1
    }
    this->m_controls.playerValues[6] = *(float *)&_XMM0;
  }
}

/*
==============
BgVehiclePhysicsSentryDrone::UpdatePlayerInputControls
==============
*/
void BgVehiclePhysicsSentryDrone::UpdatePlayerInputControls(BgVehiclePhysicsSentryDrone *this, const usercmd_s *cmd, const playerState_s *ps)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v10; 
  __int128 v12; 
  __int128 v13; 
  const dvar_t *v14; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  const dvar_t *v30; 
  float c; 
  float s; 
  vec3_t angles; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 

  v37 = v3;
  v35 = v5;
  v34 = v6;
  BgVehiclePhysicsGround::UpdatePlayerInputControls(this, cmd, ps);
  v10 = 0i64;
  *(float *)&v10 = (float)cmd->remoteControlMove[0] * 0.0078740157;
  _XMM9 = v10;
  v12 = 0i64;
  *(float *)&v12 = (float)cmd->remoteControlMove[1] * 0.0078740157;
  v13 = v12;
  AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &angles);
  v14 = DVARINT_bg_wheelsonControls;
  if ( !DVARINT_bg_wheelsonControls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonControls") )
    __debugbreak();
  v36 = v4;
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.integer == 1 )
    goto LABEL_9;
  if ( v14->current.integer == 2 )
    goto LABEL_8;
  if ( v14->current.integer != 3 )
  {
    if ( v14->current.integer != 4 )
      goto LABEL_10;
LABEL_8:
    _XMM1 = 0i64;
    __asm { vroundss xmm4, xmm1, xmm2, 1 }
    FastSinCos((float)((float)((float)(ps->viewangles.v[1] - angles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * -6.2831855, &s, &c);
    v18 = _XMM9;
    *(float *)&v18 = *(float *)&_XMM9 * c;
    v17 = v18;
    v20 = _XMM9;
    *(float *)&v20 = *(float *)&_XMM9 * s;
    v19 = v20;
    v21 = v17;
    *(float *)&v21 = *(float *)&v17 - (float)(*(float *)&v13 * s);
    _XMM9 = v21;
    v22 = v19;
    *(float *)&v22 = *(float *)&v19 + (float)(*(float *)&v13 * c);
    v13 = v22;
  }
LABEL_9:
  _XMM3 = v13 ^ _xmm;
  _XMM0 = (v13 ^ _xmm) & _xmm;
  __asm
  {
    vcmpltss xmm2, xmm0, xmm2
    vblendvps xmm0, xmm3, xmm7, xmm2
  }
  this->m_controls.playerValues[2] = *(float *)&_XMM0;
LABEL_10:
  _XMM1 = _XMM9 ^ _xmm;
  __asm { vmaxss  xmm0, xmm9, xmm6 }
  this->m_controls.playerValues[0] = *(float *)&_XMM0;
  __asm { vmaxss  xmm0, xmm1, xmm6 }
  this->m_controls.playerValues[1] = *(float *)&_XMM0;
  if ( this->m_autoHandbrake )
  {
    v30 = DCONST_DVARMODEFLT_bg_bradleyHandbrakeTreshold;
    if ( !DCONST_DVARMODEFLT_bg_bradleyHandbrakeTreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyHandbrakeTreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    this->m_controls.playerValues[3] = (float)BgVehiclePhysicsGround::IsNotMoving(this, 0.1, v30->current.value);
  }
}

/*
==============
BgVehiclePhysicsTank::UpdatePlayerInputControls
==============
*/
void BgVehiclePhysicsTank::UpdatePlayerInputControls(BgVehiclePhysicsTank *this, const usercmd_s *cmd, const playerState_s *ps)
{
  int v5; 
  __int128 v6; 
  __int128 v11; 
  const dvar_t *v16; 
  vec3_t angles; 

  BgVehiclePhysicsGround::UpdatePlayerInputControls(this, cmd, ps);
  v5 = cmd->remoteControlMove[1];
  v6 = 0i64;
  *(float *)&v6 = (float)cmd->remoteControlMove[0] * 0.0078740157;
  _XMM6 = v6;
  AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &angles);
  _XMM1 = v6 ^ _xmm;
  this->m_controls.playerValues[2] = (float)v5 * -0.0078740157;
  __asm { vmaxss  xmm0, xmm6, xmm2 }
  this->m_controls.playerValues[0] = *(float *)&_XMM0;
  __asm { vmaxss  xmm0, xmm1, xmm2 }
  this->m_controls.playerValues[1] = *(float *)&_XMM0;
  v11 = 0i64;
  *(float *)&v11 = (float)cmd->yawmove * 0.0078740157;
  _XMM4 = v11;
  _XMM0 = v11 & _xmm;
  __asm
  {
    vcmpltss xmm1, xmm0, xmm3
    vblendvps xmm0, xmm4, xmm5, xmm1
  }
  this->m_controls.playerValues[6] = *(float *)&_XMM0;
  if ( this->m_autoHandbrake )
  {
    v16 = DCONST_DVARMODEFLT_bg_bradleyHandbrakeTreshold;
    if ( !DCONST_DVARMODEFLT_bg_bradleyHandbrakeTreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyHandbrakeTreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    this->m_controls.playerValues[3] = (float)BgVehiclePhysicsGround::IsNotMoving(this, 0.1, v16->current.value);
  }
}

/*
==============
BgVehiclePhysicsCarBase::UpdateSteeringAngle
==============
*/
void BgVehiclePhysicsCarBase::UpdateSteeringAngle(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  double Value; 
  int v4; 
  float m_yawMaxAngle; 
  float v6; 

  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  v4 = LODWORD(Value);
  BgVehiclePhysics::GetNormalSpeed(this);
  m_yawMaxAngle = this->m_steering.m_yawMaxAngle;
  v6 = cbrtf(COERCE_FLOAT(v4 & _xmm));
  _XMM2 = LODWORD(FLOAT_N1_0);
  _XMM1 = 0i64;
  __asm
  {
    vcmpless xmm4, xmm1, xmm6
    vblendvps xmm1, xmm2, xmm3, xmm4
  }
  this->m_steering.m_yaw = (float)(v6 * *(float *)&_XMM1) * m_yawMaxAngle;
}

/*
==============
BgVehiclePhysicsTwoWheeled::UpdateSteeringAngle
==============
*/
void BgVehiclePhysicsTwoWheeled::UpdateSteeringAngle(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  __int128 v2; 
  __int128 v4; 
  double NormalSpeedPlane; 
  float v6; 

  *(double *)&v2 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  v4 = v2;
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
  v6 = (float)((float)((float)(*(float *)&NormalSpeedPlane * 0.89999998) * (float)(*(float *)&NormalSpeedPlane * 0.89999998)) * (float)(*(float *)&NormalSpeedPlane * 0.89999998)) * (float)(*(float *)&NormalSpeedPlane * 0.89999998);
  _XMM2 = v4 & _xmm ^ _xmm;
  _XMM0 = 0i64;
  __asm
  {
    vcmpless xmm1, xmm0, xmm7
    vblendvps xmm1, xmm2, xmm6, xmm1
  }
  this->m_steering.m_yaw = (float)(1.0 - v6) * *(float *)&_XMM1;
}

/*
==============
BgVehiclePhysicsGround::UpdateTimeInAir
==============
*/
void BgVehiclePhysicsGround::UpdateTimeInAir(BgVehiclePhysicsGround *this, float deltaTime)
{
  float m_timeInAir; 
  char v4; 
  float v5; 
  __int128 m_timeInAir_low; 
  __int128 v10; 
  bool v11; 
  BgVehiclePhysicsGround_vtbl *v12; 

  m_timeInAir = this->m_timeInAir;
  v4 = ((__int64 (*)(void))this->IsInAir)();
  v5 = this->m_timeInAir;
  if ( v4 )
  {
    m_timeInAir_low = LODWORD(this->m_timeInAir);
    *(float *)&m_timeInAir_low = v5 + deltaTime;
    _XMM0 = m_timeInAir_low;
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    v10 = LODWORD(this->m_timeInAir);
    *(float *)&v10 = v5 - deltaTime;
    _XMM0 = v10;
    __asm { vminss  xmm1, xmm0, xmm6 }
  }
  v11 = m_timeInAir < 0.0;
  this->m_timeInAir = *(float *)&_XMM1;
  if ( m_timeInAir > 0.0 )
  {
    if ( *(float *)&_XMM1 <= 0.0 )
    {
      v12 = this->__vftable;
      this->m_timeInAirBeforeLanding = m_timeInAir;
      ((void (__fastcall *)(BgVehiclePhysicsGround *))v12->Land)(this);
    }
    v11 = m_timeInAir < 0.0;
  }
  if ( v11 && this->m_timeInAir >= 0.0 )
    ((void (__fastcall *)(BgVehiclePhysicsGround *))this->Jump)(this);
}

