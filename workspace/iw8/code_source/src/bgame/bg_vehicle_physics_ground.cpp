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

void __fastcall BgVehiclePhysicsGround::RumbleData::Add(BgVehiclePhysicsGround::RumbleData *this, const BgVehiclePhysicsGround *vehicle, double maxDur, double maxScale)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = this;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(&vehicle->BgVehiclePhysics);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmulss  xmm0, xmm0, xmm6; val
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmaxss  xmm1, xmm7, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+0Ch], xmm7
    vmovaps xmm7, [rsp+48h+var_28]
    vmovss  dword ptr [rbx+8], xmm1
    vmovss  dword ptr [rbx+4], xmm0
  }
}

/*
==============
BgVehiclePhysicsCarBase::AdjustCenterOfMass
==============
*/
void BgVehiclePhysicsCarBase::AdjustCenterOfMass(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  bool v4; 
  float v10; 
  vec3_t offsetLs; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm10 }
  v4 = this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO;
  _RDI = this;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0AECh]
    vdivss  xmm1, xmm0, dword ptr [rcx+0AC0h]
    vmovsd  xmm4, qword ptr [rcx+238h]
    vmulss  xmm3, xmm1, cs:dispHoriz
  }
  v10 = this->m_centerOfMassOffsetOriginalLs.v[2];
  __asm
  {
    vshufps xmm2, xmm4, xmm4, 55h ; 'U'
    vaddss  xmm0, xmm2, xmm3
    vmovsd  qword ptr [rsp+88h+offsetLs], xmm4
  }
  LODWORD(offsetLs.v[0]) = _RT0;
  __asm { vmovss  dword ptr [rsp+88h+offsetLs+4], xmm0 }
  offsetLs.v[2] = v10;
  if ( v4 )
  {
    __asm
    {
      vmovss  xmm10, cs:__real@3f000000
      vcomiss xmm10, dword ptr [rcx+2B0h]
    }
  }
  else if ( this->IsInAir(this) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+0C88h]
    }
  }
  BgVehiclePhysics::OffsetCenterOfMass(_RDI, &offsetLs, 0);
  __asm { vmovaps xmm10, [rsp+88h+var_48] }
}

/*
==============
BgVehiclePhysicsGround::AdjustExtraGravityFactor
==============
*/

void __fastcall BgVehiclePhysicsGround::AdjustExtraGravityFactor(BgVehiclePhysicsGround *this, double factor)
{
  int v7; 
  int v8; 
  vec3_t gravity; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps xmm6, xmm1 }
  Physics_GetGravity((const Physics_WorldId)this->m_worldId, &gravity);
  _RDI = Vec3MajorAxis(&gravity);
  *(_QWORD *)_RBX->m_extraGravityFactor.v = 0i64;
  _RBX->m_extraGravityFactor.v[2] = 0.0;
  if ( (unsigned int)_RDI >= 3 )
  {
    v8 = 3;
    v7 = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  __asm
  {
    vmovss  dword ptr [rbx+rdi*4+0A8Ch], xmm6
    vmovaps xmm6, [rsp+78h+var_18]
  }
}

/*
==============
BgVehiclePhysicsGround::AdjustTopSpeedReverse
==============
*/
void BgVehiclePhysicsGround::AdjustTopSpeedReverse(BgVehiclePhysicsGround *this)
{
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v4; 
  __int32 v5; 
  const char *v7; 
  char v10; 

  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  _RDI = this;
  if ( m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
  {
    _RBX = DVARFLT_bg_atangoReverseTopSpeedMPH;
    if ( DVARFLT_bg_atangoReverseTopSpeedMPH )
      goto LABEL_15;
    v7 = "bg_atangoReverseTopSpeedMPH";
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v7) )
      __debugbreak();
    goto LABEL_15;
  }
  v4 = m_vehicleAnimProfile - 1;
  if ( !v4 )
  {
    _RBX = DVARFLT_bg_tromeoReverseTopSpeedMPH;
    if ( DVARFLT_bg_tromeoReverseTopSpeedMPH )
      goto LABEL_15;
    v7 = "bg_tromeoReverseTopSpeedMPH";
    goto LABEL_13;
  }
  v5 = v4 - 10;
  if ( !v5 )
  {
    _RBX = DVARFLT_bg_dechoReverseTopSpeedMPH;
    if ( DVARFLT_bg_dechoReverseTopSpeedMPH )
      goto LABEL_15;
    v7 = "bg_dechoReverseTopSpeedMPH";
    goto LABEL_13;
  }
  if ( v5 != 8 )
    return;
  _RBX = DVARFLT_bg_mkiloReverseTopSpeedMPH;
  if ( !DVARFLT_bg_mkiloReverseTopSpeedMPH )
  {
    v7 = "bg_mkiloReverseTopSpeedMPH";
    goto LABEL_13;
  }
LABEL_15:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( !v10 )
  {
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@418ccccd
      vmovss  dword ptr [rdi+1F8h], xmm0
    }
  }
}

/*
==============
BgVehiclePhysicsGround::AfterPhysicsWorldStep
==============
*/
void BgVehiclePhysicsGround::AfterPhysicsWorldStep(BgVehiclePhysicsGround *this, float lastPhysicsStepTime)
{
  unsigned int v6; 
  unsigned int *m_axleBodyIds; 
  __int64 v10; 
  unsigned int PhysicsBodyId; 
  signed int m_deferredBlowUpTireIndex; 
  float v19; 
  float v20; 
  vec3_t position; 
  vec4_t orientation; 
  vec3_t v23; 
  vec4_t v24; 

  BgVehiclePhysics::AfterPhysicsWorldStep(this, lastPhysicsStepTime);
  if ( BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
  {
    if ( BgVehiclePhysicsGround::IsAxleBodyCreationEnabled(this) )
    {
      v6 = this->m_wheelCount >> 1;
      if ( v6 )
      {
        m_axleBodyIds = this->m_axleBodyIds;
        __asm
        {
          vmovaps [rsp+0C8h+var_18], xmm6
          vmovss  xmm6, cs:__real@3a83126f
          vmovaps [rsp+0C8h+var_28], xmm7
          vmovaps [rsp+0C8h+var_38], xmm8
          vmovss  xmm8, cs:__real@3f800000
        }
        v10 = v6;
        __asm { vxorps  xmm7, xmm7, xmm7 }
        do
        {
          if ( (*m_axleBodyIds & 0xFFFFFF) != 0xFFFFFF )
          {
            PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
            Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, PhysicsBodyId, &position, &orientation);
            Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, *m_axleBodyIds, &v23, &v24);
            __asm { vmovaps xmm2, xmm6; epsilon }
            if ( !VecNCompareCustomEpsilon(position.v, v23.v, *(float *)&_XMM2, 3) )
              goto LABEL_9;
            __asm { vmovaps xmm2, xmm6; epsilon }
            if ( VecNCompareCustomEpsilon(v24.v, orientation.v, *(float *)&_XMM2, 4) )
            {
              Physics_SetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, *m_axleBodyIds, &vec3_origin, &vec3_origin);
            }
            else
            {
LABEL_9:
              __asm
              {
                vmovss  [rsp+0C8h+var_90], xmm7
                vmovss  [rsp+0C8h+var_A8], xmm8
              }
              Physics_KeyframeRigidBodyTo(this->m_worldId, *m_axleBodyIds, &position, &orientation, v19, 1, 0, v20);
            }
          }
          ++m_axleBodyIds;
          --v10;
        }
        while ( v10 );
        __asm
        {
          vmovaps xmm8, [rsp+0C8h+var_38]
          vmovaps xmm7, [rsp+0C8h+var_28]
          vmovaps xmm6, [rsp+0C8h+var_18]
        }
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
  _RDI = this;
  if ( this->m_wheelInContactCount && !BgVehiclePhysicsGround::IsReversing(this) )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+0C88h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm3, xmm0
      vmovss  xmm0, cs:ATV_AFTER_LANDING_TIME
      vmulss  xmm1, xmm0, cs:__real@40000000
      vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
      vcomiss xmm3, xmm2
    }
  }
  _RDI->m_animPitch.v[2] = 0.0;
  _RDI->m_animYaw.v[2] = 0.0;
}

/*
==============
BgVehiclePhysicsCarBase::ApplyEngine
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplyEngine(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  unsigned int m_vehicleAnimProfile; 
  int v14; 
  unsigned __int8 v15; 
  bool v16; 
  const char *v25; 
  char v35; 
  char v36; 
  char v42; 
  VehiclePhysicsAnimProfile v50; 
  __int32 v51; 
  unsigned int v52; 
  bool v53; 
  const dvar_t *v54; 
  const char *v55; 
  bool IsBraking; 
  bool v143; 
  bool v144; 
  BgVehiclePhysicsCarBase_vtbl *v175; 
  bool v187; 
  bool v188; 
  float ackRatio; 
  float yawMult; 
  vec3_t forwardWs; 
  vec3_t atPointWs; 

  _RDI = this;
  __asm { vmovss  [rsp+120h+var_E0], xmm1 }
  if ( this->IsInAir(this) )
  {
    m_vehicleAnimProfile = _RDI->m_vehicleAnimProfile;
    if ( m_vehicleAnimProfile <= 0x13 )
    {
      v14 = 720916;
      v15 = _bittest(&v14, m_vehicleAnimProfile);
      if ( v15 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+1A4h]
          vmovss  xmm2, dword ptr [rdi+1A8h]
          vmovss  xmm3, dword ptr [rdi+1ACh]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, cs:__real@441c4000
        }
        if ( !(v15 | v16) )
          return;
      }
    }
  }
  v16 = _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO;
  __asm
  {
    vmovaps [rsp+120h+var_30], xmm6
    vmovaps [rsp+120h+var_40], xmm7
    vmovaps [rsp+120h+var_50], xmm8
    vmovaps [rsp+120h+var_60], xmm9
    vmovaps [rsp+120h+var_70], xmm10
    vmovaps [rsp+120h+var_80], xmm11
    vmovaps [rsp+120h+var_90], xmm12
    vmovaps [rsp+120h+var_A0], xmm13
    vmovaps [rsp+120h+var_B0], xmm15
  }
  if ( v16 )
  {
    _RBX = DCONST_DVARFLT_bg_vehAirTimeWithEngineAtv;
    if ( DCONST_DVARFLT_bg_vehAirTimeWithEngineAtv )
      goto LABEL_12;
    v25 = "bg_vehAirTimeWithEngineAtv";
  }
  else
  {
    _RBX = DCONST_DVARFLT_bg_vehAirTimeWithEngine;
    if ( DCONST_DVARFLT_bg_vehAirTimeWithEngine )
      goto LABEL_12;
    v25 = "bg_vehAirTimeWithEngine";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v25) )
    __debugbreak();
LABEL_12:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RDI);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+0C88h]
    vmovss  xmm8, cs:__real@3f800000
    vmulss  xmm1, xmm0, xmm6
    vcomiss xmm2, xmm1
    vxorps  xmm9, xmm9, xmm9
  }
  if ( v15 | v16 )
  {
    __asm { vmovaps xmm15, xmm8 }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm2, xmm1
      vdivss  xmm0, xmm0, xmm6; val
      vmovaps xmm2, xmm8; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vsubss  xmm15, xmm8, xmm0 }
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 4u);
  __asm
  {
    vcomiss xmm0, xmm9
    vmovaps xmm11, xmm0
  }
  if ( v35 | v36 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+0B00h]
      vcomiss xmm2, xmm9
    }
    if ( v35 | v36 )
      goto LABEL_19;
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+0AFCh]
      vcomiss xmm1, xmm9
    }
    if ( v35 | v36 )
    {
LABEL_19:
      __asm { vmovaps xmm1, xmm8 }
    }
    else
    {
      __asm
      {
        vdivss  xmm0, xmm1, xmm2
        vsubss  xmm1, xmm8, xmm0
      }
    }
    __asm { vmulss  xmm11, xmm11, xmm1 }
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 7u);
  __asm { vmovaps xmm12, xmm0 }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 4u);
  __asm { vcomiss xmm0, xmm9 }
  if ( v42 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+178h]
      vmovss  xmm2, dword ptr [rdi+174h]
      vmulss  xmm0, xmm2, dword ptr [rdi+1A4h]
      vmulss  xmm3, xmm1, dword ptr [rdi+1A8h]
      vmovss  xmm1, dword ptr [rdi+17Ch]
      vmulss  xmm2, xmm1, dword ptr [rdi+1ACh]
      vaddss  xmm4, xmm3, xmm0
      vaddss  xmm0, xmm4, xmm2
      vcomiss xmm0, xmm9
    }
    if ( v42 )
    {
      v50 = _RDI->m_vehicleAnimProfile;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          v52 = v51 - 10;
          if ( v52 )
          {
            v53 = v52 < 8;
            if ( v52 == 8 )
            {
              v54 = DVARFLT_bg_mkiloReverseAccelFactor;
              v55 = "bg_mkiloReverseAccelFactor";
              goto LABEL_31;
            }
LABEL_43:
            __asm { vmovaps xmm7, xmm8 }
            goto LABEL_44;
          }
          v54 = DVARFLT_bg_dechoReverseAccelFactor;
          v55 = "bg_dechoReverseAccelFactor";
        }
        else
        {
          v54 = DVARFLT_bg_tromeoReverseAccelFactor;
          v55 = "bg_tromeoReverseAccelFactor";
        }
      }
      else
      {
        v54 = DVARFLT_bg_atangoReverseAccelFactor;
        v55 = "bg_atangoReverseAccelFactor";
      }
LABEL_31:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v54, v55);
      __asm { vcomiss xmm0, xmm9 }
      if ( !v53 )
      {
        __asm
        {
          vmovaps xmm2, xmm8; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm7, xmm0 }
        goto LABEL_44;
      }
      goto LABEL_43;
    }
  }
  IsBraking = BgVehiclePhysicsGround::IsBraking(_RDI);
  v53 = 0;
  if ( !IsBraking )
    goto LABEL_43;
  if ( _RDI->m_vehicleAnimProfile )
  {
    _RBX = DVARFLT_bg_vehBrakingEngineMult;
    if ( !DVARFLT_bg_vehBrakingEngineMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehBrakingEngineMult") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  }
  else
  {
    _RBX = DVARFLT_bg_vehBrakingEngineMultAtv;
    if ( !DVARFLT_bg_vehBrakingEngineMultAtv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehBrakingEngineMultAtv") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  }
LABEL_44:
  __asm { vcomiss xmm8, dword ptr [rdi+2B0h] }
  if ( v53 )
    __asm { vmovss  xmm2, dword ptr [rdi+0B14h] }
  else
    __asm { vxorps  xmm2, xmm2, xmm2 }
  if ( _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
    __asm { vcomiss xmm11, xmm9 }
  __asm
  {
    vmulss  xmm0, xmm2, dword ptr [rdi+18Ch]
    vaddss  xmm1, xmm0, dword ptr [rdi+22Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+190h]
    vmovss  dword ptr [rsp+120h+atPointWs], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+230h]
    vmulss  xmm0, xmm2, dword ptr [rdi+194h]
    vmovss  dword ptr [rsp+120h+atPointWs+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+234h]
    vmovss  dword ptr [rsp+120h+atPointWs+8], xmm1
  }
  if ( BgVehiclePhysicsGround::IsBraking(_RDI) && _RDI->m_vehicleAnimProfile )
  {
    _RBX = DCONST_DVARFLT_bg_vehBrakingEngineOffset;
    if ( !DCONST_DVARFLT_bg_vehBrakingEngineOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehBrakingEngineOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+28h]
      vmulss  xmm2, xmm3, dword ptr [rdi+190h]
      vmulss  xmm1, xmm3, dword ptr [rdi+18Ch]
      vaddss  xmm1, xmm1, dword ptr [rsp+120h+atPointWs]
      vmovss  dword ptr [rsp+120h+atPointWs], xmm1
      vaddss  xmm1, xmm2, dword ptr [rsp+120h+atPointWs+4]
      vmulss  xmm2, xmm3, dword ptr [rdi+194h]
      vmovss  dword ptr [rsp+120h+atPointWs+4], xmm1
      vaddss  xmm1, xmm2, dword ptr [rsp+120h+atPointWs+8]
      vmovss  dword ptr [rsp+120h+atPointWs+8], xmm1
    }
  }
  __asm { vmovss  xmm6, cs:__real@3f333333 }
  if ( _RDI->m_vehicleAnimProfile )
  {
    _RBX = DCONST_DVARFLT_bg_vehAxleDirMult;
    if ( !DCONST_DVARFLT_bg_vehAxleDirMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAxleDirMult") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm
  {
    vmovss  [rsp+120h+yawMult], xmm0
    vmovss  [rsp+120h+ackRatio], xmm8
  }
  BgVehiclePhysicsGround::Steering::ComputeAxis(&_RDI->m_steering, _RDI, 0, &forwardWs, NULL, ackRatio, yawMult);
  if ( _RDI->m_wheels[0].m_contactBodyId == 0xFFFFFF && _RDI->m_wheels[1].m_contactBodyId == 0xFFFFFF )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+120h+forwardWs]
      vmovss  xmm4, dword ptr [rsp+120h+forwardWs+4]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm1, xmm4, xmm1
      vmovss  dword ptr [rsp+120h+forwardWs+4], xmm1
      vmovss  dword ptr [rsp+120h+forwardWs], xmm0
      vmovss  dword ptr [rsp+120h+forwardWs+8], xmm9
    }
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 4u);
  __asm { vcomiss xmm0, xmm9 }
  if ( v15 )
  {
    __asm { vmovaps xmm13, xmm8 }
  }
  else
  {
    _EBX = _RDI->m_vehicleAnimProfile;
    *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RDI);
    __asm { vmovd   xmm1, ebx }
    _ER15 = 19;
    __asm
    {
      vmovd   xmm2, r15d
      vpcmpeqd xmm3, xmm1, xmm2
      vmovss  xmm2, cs:__real@3ccccccd
      vblendvps xmm1, xmm8, xmm2, xmm3
      vdivss  xmm0, xmm0, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm8; max
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm4, xmm8, xmm0
      vmovd   xmm0, ebx
      vmovd   xmm1, r15d
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3fa00000
      vblendvps xmm3, xmm8, xmm1, xmm2
      vsubss  xmm0, xmm8, xmm4
      vmulss  xmm1, xmm3, xmm0
      vaddss  xmm13, xmm1, xmm4
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm0, dword ptr [rdi+18Ch]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rdi+190h]
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm0, dword ptr [rdi+194h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm8; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vcomiss xmm0, xmm6 }
  if ( v15 )
  {
    __asm { vmovss  xmm10, cs:__real@3c23d70a }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm3, xmm0, dword ptr [rdi+18Ch]
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm2, xmm1, dword ptr [rdi+190h]
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm1, xmm0, dword ptr [rdi+194h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm8; max
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm2, xmm8, xmm0
      vmulss  xmm0, xmm2, xmm2
      vmulss  xmm1, xmm0, xmm2
      vmulss  xmm2, xmm1, xmm2
      vsubss  xmm10, xmm8, xmm2
    }
  }
  _RBX = DCONST_DVARFLT_bg_vehShiftGears;
  __asm
  {
    vmulss  xmm0, xmm12, dword ptr [rdi+0B18h]
    vsubss  xmm12, xmm8, xmm0
  }
  if ( !DCONST_DVARFLT_bg_vehShiftGears && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehShiftGears") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm9, dword ptr [rdi+0B20h] }
  if ( v15 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm6, xmm0, dword ptr [rdi+0B0Ch]
    }
  }
  else
  {
    __asm { vmovss  xmm6, dword ptr [rdi+0B0Ch] }
  }
  v143 = 0;
  v144 = _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO;
  if ( _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
  {
    if ( _RDI->IsInAir(_RDI) )
    {
      _RBX = DCONST_DVARFLT_bg_vehAtvMaxEngineAir;
      if ( !DCONST_DVARFLT_bg_vehAtvMaxEngineAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAtvMaxEngineAir") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vminss  xmm6, xmm0, xmm6
      }
    }
    v143 = 0;
    v144 = _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO;
    if ( _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
    {
      v143 = _RDI->m_wheelCount < 2;
      v144 = _RDI->m_wheelCount == 2;
      if ( _RDI->m_wheelCount == 2 )
      {
        __asm
        {
          vmovss  xmm2, cs:__real@3f000000
          vcomiss xmm2, dword ptr [rdi+2B0h]
        }
        if ( _RDI->m_wheelCount < 2 )
        {
          __asm { vmovss  xmm4, cs:__real@3fc00000 }
          _RCX = &_RDI->m_wheels[0].m_timeInAir;
          __asm { vmovss  xmm0, dword ptr [rcx] }
          _RAX = &_RDI->m_wheels[1].m_timeInAir;
          __asm
          {
            vcomiss xmm0, dword ptr [rax]
            vmovss  xmm0, dword ptr [rdi+490h]
            vmaxss  xmm1, xmm0, dword ptr [rcx]
            vmaxss  xmm3, xmm1, dword ptr [rdi+528h]
            vcomiss xmm3, xmm4
          }
          if ( _RDI->m_wheelCount > 2 )
          {
            __asm
            {
              vsubss  xmm0, xmm3, xmm4
              vmulss  xmm0, xmm0, xmm2; val
              vmovaps xmm2, xmm8; max
              vxorps  xmm1, xmm1, xmm1; min
            }
            I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vsubss  xmm0, xmm8, xmm0
              vmulss  xmm6, xmm6, xmm0
            }
          }
        }
      }
    }
  }
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@44c1c01a
    vmulss  xmm1, xmm0, [rsp+120h+var_E0]
    vmovss  xmm6, cs:__real@3a83126f
    vmulss  xmm2, xmm1, xmm7
    vmulss  xmm3, xmm2, xmm11
    vmulss  xmm0, xmm3, xmm10
    vmulss  xmm1, xmm0, xmm12
    vmulss  xmm2, xmm1, xmm15
    vmovaps xmm15, [rsp+120h+var_B0]
    vmulss  xmm10, xmm2, xmm13
    vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm10, xmm13
    vcomiss xmm0, xmm6
  }
  if ( v143 || v144 )
    goto LABEL_104;
  __asm
  {
    vmulss  xmm1, xmm10, dword ptr [rsp+120h+forwardWs]
    vmulss  xmm0, xmm10, dword ptr [rsp+120h+forwardWs+4]
    vmulss  xmm2, xmm10, dword ptr [rsp+120h+forwardWs+8]
  }
  v175 = _RDI->__vftable;
  __asm
  {
    vmovss  dword ptr [rsp+120h+forwardWs], xmm1
    vmovss  dword ptr [rsp+120h+forwardWs+4], xmm0
    vmovss  dword ptr [rsp+120h+forwardWs+8], xmm2
  }
  if ( !v175->IsInAir(_RDI) && (_RDI->m_wheels[0].m_contactBodyId != 0xFFFFFF || _RDI->m_wheels[1].m_contactBodyId != 0xFFFFFF) )
  {
    if ( !BgVehiclePhysicsGround::IsFacingUpward(_RDI) )
    {
      BgVehiclePhysics::AccumulateImpulse(_RDI, &forwardWs, &atPointWs);
      goto LABEL_95;
    }
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm2, xmm1, dword ptr [rdi+174h]
      vmulss  xmm3, xmm0, dword ptr [rdi+178h]
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm1, xmm0, dword ptr [rdi+17Ch]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, cs:__real@3ecccccd
    }
  }
  BgVehiclePhysics::AccumulateOnlyLinearImpulse(_RDI, &forwardWs);
LABEL_95:
  _RBX = DCONST_DVARFLT_bg_vehEngineDriftRatio;
  if ( !DCONST_DVARFLT_bg_vehEngineDriftRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEngineDriftRatio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v187 = _RDI->m_vehicleType < VEH_CAR;
  v188 = _RDI->m_vehicleType == VEH_CAR;
  __asm { vmovaps xmm12, xmm0 }
  if ( _RDI->m_vehicleType == VEH_CAR )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+0AB8h]
      vdivss  xmm0, xmm1, dword ptr [rdi+0A98h]; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm8; max
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vsubss  xmm1, xmm8, xmm0 }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm
  {
    vcomiss xmm12, xmm9
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm1, xmm0, xmm2
    vmulss  xmm11, xmm1, xmm2
  }
  if ( !v187 && !v188 )
  {
    __asm { vcomiss xmm11, xmm6 }
    if ( !v187 && !v188 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rdi+1A8h]
        vmovss  xmm5, dword ptr [rdi+1A4h]
        vmovss  xmm7, dword ptr [rdi+1ACh]
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
        vdivss  xmm4, xmm8, xmm0
        vmulss  xmm0, xmm11, xmm12
        vmulss  xmm3, xmm0, xmm10
        vmulss  xmm1, xmm4, xmm5
        vmulss  xmm2, xmm1, xmm3
        vmulss  xmm0, xmm4, xmm6
        vmulss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rsp+120h+forwardWs], xmm2
        vmulss  xmm2, xmm4, xmm7
        vmulss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+120h+forwardWs+8], xmm0
        vmovss  dword ptr [rsp+120h+forwardWs+4], xmm1
      }
      BgVehiclePhysics::AccumulateOnlyLinearImpulse(_RDI, &forwardWs);
    }
  }
LABEL_104:
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RDI);
  __asm
  {
    vdivss  xmm3, xmm8, dword ptr [rdi+0B10h]
    vmulss  xmm1, xmm3, dword ptr [rdi+0B1Ch]
    vmovaps xmm12, [rsp+120h+var_90]
    vmovaps xmm11, [rsp+120h+var_80]
    vmovaps xmm10, [rsp+120h+var_70]
    vmovaps xmm8, [rsp+120h+var_50]
    vmovaps xmm7, [rsp+120h+var_40]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vxorps  xmm1, xmm1, xmm1
    vmulss  xmm3, xmm3, xmm0
    vroundss xmm1, xmm1, xmm3, 1
    vcvttss2si eax, xmm1
    vcvttss2si ecx, xmm2
    vmovaps xmm6, xmm0
  }
  if ( _ECX != _EAX && !BgVehiclePhysicsGround::IsReversing(_RDI) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0B20h]
      vcomiss xmm0, xmm9
      vandps  xmm0, xmm0, xmm13
      vcomiss xmm0, dword ptr [rdi+0B08h]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0B20h]
    vsubss  xmm1, xmm0, [rsp+120h+var_E0]
    vmovaps xmm13, [rsp+120h+var_A0]
    vmovaps xmm9, [rsp+120h+var_60]
    vmovss  dword ptr [rdi+0B1Ch], xmm6
    vmovaps xmm6, [rsp+120h+var_30]
    vmovss  dword ptr [rdi+0B20h], xmm1
  }
}

/*
==============
BgVehiclePhysicsSentryDrone::ApplyEngine
==============
*/

void __fastcall BgVehiclePhysicsSentryDrone::ApplyEngine(BgVehiclePhysicsSentryDrone *this, double deltaTime)
{
  const dvar_t *v21; 
  char v45; 
  char v46; 
  vec3_t atPointWs; 
  vec3_t impulseWs; 

  __asm { vmovaps [rsp+0B8h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps xmm6, xmm1 }
  if ( !this->m_wheelInContactCount )
  {
    if ( !Physics_IsRigidBodyValid(this->m_worldId, this->m_lastColliderBodyId) )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, cs:__real@3e800000
      vcomiss xmm0, dword ptr [rbx+2B0h]
    }
  }
  __asm
  {
    vmovaps [rsp+0B8h+var_28], xmm7
    vmovaps [rsp+0B8h+var_38], xmm8
    vmovaps [rsp+0B8h+var_48], xmm9
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
  __asm
  {
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm4, xmm1, dword ptr [rbx+190h]
    vmovss  xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm2, dword ptr [rbx+18Ch]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rbx+194h]
    vaddss  xmm5, xmm4, xmm3
    vmovaps xmm7, xmm0
    vaddss  xmm0, xmm5, xmm2; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm8, xmm8, xmm8
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v21 = DCONST_DVARFLT_bg_wheelsonAngleCutoff;
  __asm { vmulss  xmm9, xmm0, xmm0 }
  if ( !DCONST_DVARFLT_bg_wheelsonAngleCutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonAngleCutoff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  __asm
  {
    vmovss  xmm0, cs:__real@42b40000
    vsubss  xmm1, xmm0, dword ptr [rdi+28h]
    vmulss  xmm0, xmm1, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vcmpless xmm1, xmm0, xmm9
    vblendvps xmm2, xmm8, xmm9, xmm1
    vmovaps xmm9, [rsp+0B8h+var_48]
    vmovaps xmm8, [rsp+0B8h+var_38]
    vmulss  xmm0, xmm7, xmm6
    vmulss  xmm1, xmm0, dword ptr [rbx+0CA8h]
    vmulss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm3, dword ptr [rbx+174h]
    vaddss  xmm1, xmm0, dword ptr [rbx+1A4h]
    vmovss  dword ptr [rbx+1A4h], xmm1
    vmulss  xmm0, xmm3, dword ptr [rbx+178h]
    vaddss  xmm1, xmm0, dword ptr [rbx+1A8h]
    vmovss  dword ptr [rbx+1A8h], xmm1
    vmulss  xmm0, xmm3, dword ptr [rbx+17Ch]
    vaddss  xmm1, xmm0, dword ptr [rbx+1ACh]
    vmovss  dword ptr [rbx+1ACh], xmm1
  }
  if ( _RBX->m_wheelInContactCount == _RBX->m_wheelCount )
  {
    _RDI = DCONST_DVARFLT_bg_wheelsonEngineForce;
    if ( !DCONST_DVARFLT_bg_wheelsonEngineForce && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonEngineForce") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, cs:__real@44c1c01a
      vmulss  xmm2, xmm1, xmm6
      vmulss  xmm6, xmm2, xmm7
      vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( !(v45 | v46) )
    {
      _RDI = DCONST_DVARFLT_bg_wheelsonEngineOffset;
      if ( !DCONST_DVARFLT_bg_wheelsonEngineOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonEngineOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+28h]
        vmulss  xmm0, xmm2, dword ptr [rbx+18Ch]
        vaddss  xmm1, xmm0, dword ptr [rbx+22Ch]
        vmulss  xmm0, xmm2, dword ptr [rbx+190h]
        vmovss  dword ptr [rsp+0B8h+atPointWs], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+230h]
        vmulss  xmm0, xmm2, dword ptr [rbx+194h]
        vmovss  dword ptr [rsp+0B8h+atPointWs+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+234h]
        vmulss  xmm0, xmm6, dword ptr [rbx+174h]
        vmovss  dword ptr [rsp+0B8h+impulseWs], xmm0
        vmulss  xmm0, xmm6, dword ptr [rbx+17Ch]
        vmovss  dword ptr [rsp+0B8h+atPointWs+8], xmm1
        vmulss  xmm1, xmm6, dword ptr [rbx+178h]
        vmovss  dword ptr [rsp+0B8h+impulseWs+8], xmm0
        vmovss  dword ptr [rsp+0B8h+impulseWs+4], xmm1
      }
      BgVehiclePhysics::AccumulateOnlyAngularImpulse(_RBX, &impulseWs, &atPointWs);
    }
  }
  __asm { vmovaps xmm7, [rsp+0B8h+var_28] }
LABEL_17:
  __asm { vmovaps xmm6, [rsp+0B8h+var_18] }
}

/*
==============
BgVehiclePhysicsTwoWheeled::ApplyEngine
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::ApplyEngine(BgVehiclePhysicsTwoWheeled *this, double deltaTime)
{
  char v10; 
  char v13; 
  unsigned int m_wheelInContactCount; 
  bool v30; 
  vec3_t impulseWs; 
  vec3_t atPointWs; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  _RBX = this;
  __asm { vmovaps xmm8, xmm1 }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@bf000000; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovaps xmm7, xmm0
  }
  if ( !(v10 | v13) )
    goto LABEL_3;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+178h]
    vmovss  xmm2, dword ptr [rbx+174h]
    vmulss  xmm4, xmm1, dword ptr [rbx+1A8h]
    vmulss  xmm3, xmm2, dword ptr [rbx+1A4h]
    vmovss  xmm1, dword ptr [rbx+17Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx+1ACh]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm0, xmm5, xmm2
    vcomiss xmm0, cs:__real@ba83126f
  }
  if ( !v10 )
  {
LABEL_3:
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0B0Ch]
      vmulss  xmm1, xmm0, cs:__real@44c1c01a
    }
    m_wheelInContactCount = _RBX->m_wheelInContactCount;
    __asm
    {
      vmulss  xmm2, xmm1, xmm8
      vmulss  xmm3, xmm2, xmm7
      vmulss  xmm0, xmm3, dword ptr [rbx+174h]
      vmulss  xmm1, xmm3, dword ptr [rbx+178h]
      vmovss  dword ptr [rsp+88h+impulseWs], xmm0
      vmulss  xmm0, xmm3, dword ptr [rbx+17Ch]
      vmovss  dword ptr [rsp+88h+impulseWs+8], xmm0
      vmovss  dword ptr [rsp+88h+impulseWs+4], xmm1
    }
    v30 = m_wheelInContactCount < 2;
    if ( m_wheelInContactCount == 2 )
    {
      __asm { vmovss  xmm6, dword ptr [rbx+0B14h] }
    }
    else
    {
      v30 = m_wheelInContactCount == 0;
      if ( m_wheelInContactCount == 1 )
      {
        v30 = _RBX->m_wheels[0].m_contactBodyId < 0xFFFFFF;
        if ( _RBX->m_wheels[0].m_contactBodyId != 0xFFFFFF )
        {
          *(double *)&_XMM0 = BgVehiclePhysics::GetUpInclination(_RBX);
          __asm
          {
            vmaxss  xmm1, xmm0, xmm6
            vmulss  xmm6, xmm1, dword ptr [rbx+0B14h]
          }
        }
      }
    }
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+18Ch]
      vaddss  xmm1, xmm0, dword ptr [rbx+22Ch]
      vmulss  xmm0, xmm6, dword ptr [rbx+190h]
      vmovss  xmm2, cs:__real@3dcccccd
      vcomiss xmm2, dword ptr [rbx+2B0h]
      vmovss  dword ptr [rsp+88h+atPointWs], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+230h]
      vmulss  xmm0, xmm6, dword ptr [rbx+194h]
      vmovss  dword ptr [rsp+88h+atPointWs+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+234h]
      vmovss  dword ptr [rsp+88h+atPointWs+8], xmm1
    }
    if ( v30 )
      BgVehiclePhysics::AccumulateImpulse(_RBX, &impulseWs, &atPointWs);
    else
      BgVehiclePhysics::AccumulateOnlyLinearImpulse(_RBX, &impulseWs);
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
}

/*
==============
BgVehiclePhysicsTank::ApplyEngineForce
==============
*/

void __fastcall BgVehiclePhysicsTank::ApplyEngineForce(BgVehiclePhysicsTank *this, double deltaTime)
{
  const dvar_t *v39; 
  bool IsBraking; 
  __int64 v94; 
  vec3_t angles; 
  char v106; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
  }
  _RDI = this;
  __asm { vmovaps xmm11, xmm1 }
  AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &angles);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 4u);
  __asm
  {
    vmovss  xmm7, cs:__real@3b360b61
    vmulss  xmm4, xmm7, dword ptr [rsp+108h+angles]
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  _RBX = DCONST_DVARFLT_bg_bradleyMaxPitchDeg;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm3, xmm8, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm4, xmm7, dword ptr [rsp+108h+angles+8]
    vmulss  xmm9, xmm1, cs:__real@43b40000
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm8, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm6, xmm1, cs:__real@43b40000
    vandps  xmm6, xmm6, xmm10
    vmovaps xmm12, xmm0
    vandps  xmm9, xmm9, xmm10
  }
  if ( !DCONST_DVARFLT_bg_bradleyMaxPitchDeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyMaxPitchDeg") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]
    vaddss  xmm0, xmm1, cs:__real@41200000
    vdivss  xmm2, xmm6, xmm0
    vmovss  xmm6, cs:__real@3f800000
    vdivss  xmm1, xmm9, xmm1
    vmaxss  xmm0, xmm2, xmm1; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm7, xmm7, xmm7
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v39 = DCONST_DVARFLT_bg_bradleyAccel;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vsubss  xmm8, xmm6, xmm1
  }
  if ( !DCONST_DVARFLT_bg_bradleyAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  __asm
  {
    vmulss  xmm0, xmm12, xmm11
    vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    vmulss  xmm2, xmm1, xmm8
    vmulss  xmm0, xmm2, dword ptr [rdi+174h]
    vaddss  xmm1, xmm0, dword ptr [rdi+1A4h]
    vmovss  dword ptr [rdi+1A4h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+178h]
    vaddss  xmm1, xmm0, dword ptr [rdi+1A8h]
    vmovss  dword ptr [rdi+1A8h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+17Ch]
    vaddss  xmm1, xmm0, dword ptr [rdi+1ACh]
    vmovss  dword ptr [rdi+1ACh], xmm1
  }
  IsBraking = BgVehiclePhysicsGround::IsBraking(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm0, dword ptr [rdi+190h]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rdi+18Ch]
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm0, dword ptr [rdi+194h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm6; max
  }
  _EBX = IsBraking;
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm3, cs:__real@44c1c01a }
  _ESI = 0;
  __asm
  {
    vmovd   xmm2, esi
    vmovd   xmm1, ebx
    vpcmpeqd xmm4, xmm1, xmm2
    vmovss  xmm2, cs:__real@4541c01a
    vblendvps xmm1, xmm2, xmm3, xmm4
    vmulss  xmm3, xmm1, dword ptr [rdi+0B0Ch]
    vmulss  xmm4, xmm3, xmm11
    vmulss  xmm2, xmm4, xmm12
    vmulss  xmm8, xmm2, xmm0
    vandps  xmm0, xmm8, xmm10
    vcomiss xmm0, cs:__real@3a83126f
    vmovss  xmm0, dword ptr [rdi+178h]
    vmulss  xmm3, xmm0, dword ptr [rdi+1A8h]
    vmovss  xmm1, dword ptr [rdi+1A4h]
    vmulss  xmm2, xmm1, dword ptr [rdi+174h]
    vmovss  xmm0, dword ptr [rdi+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+1ACh]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rdi+1B8h]
    vandps  xmm2, xmm2, xmm10
    vmulss  xmm0, xmm2, cs:__real@3f22f983; val
    vaddss  xmm8, xmm4, xmm1
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmulss  xmm2, xmm0, cs:__real@44098000 }
  if ( _RDI->m_wheelCount )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@bf800000
      vcmpless xmm1, xmm7, xmm8
      vblendvps xmm1, xmm0, xmm6, xmm1
      vmulss  xmm2, xmm1, xmm2
      vaddss  xmm3, xmm2, xmm8
    }
    do
    {
      v94 = _ESI++;
      _RCX = v94;
      _RDI->m_wheels[_RCX].m_skid = 0.050000001;
      __asm
      {
        vdivss  xmm0, xmm3, dword ptr [rdi+0A18h]
        vmovss  dword ptr [rcx+rdi+354h], xmm0
      }
    }
    while ( _ESI < _RDI->m_wheelCount );
  }
  _R11 = &v106;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
BgVehiclePhysicsCarBase::ApplyExtraDamping
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplyExtraDamping(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  char v23; 
  bool v24; 
  vec3_t outVelLs; 
  vec3_t velLs; 

  __asm { vmovaps [rsp+78h+var_28], xmm7 }
  _RBX = this;
  __asm { vmovaps xmm7, xmm1 }
  if ( this->m_playerControlled )
  {
    if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
      goto LABEL_5;
    if ( !this->IsInAir(this) )
    {
      __asm { vmovss  xmm1, cs:__real@425c0000; angleDeg }
      if ( !BgVehiclePhysicsGround::IsTooInclinedToDamp(_RBX, *(float *)&deltaTime) )
      {
LABEL_5:
        __asm { vmovaps [rsp+78h+var_18], xmm6 }
        BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_angularVelocityWs, &outVelLs);
        if ( _RBX->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3e800000
            vcomiss xmm0, dword ptr [rbx+2B0h]
          }
          if ( _RBX->m_vehicleAnimProfile )
          {
            BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_linearVelocityWs, &velLs);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+78h+velLs+8]
              vxorps  xmm6, xmm6, xmm6
              vcomiss xmm0, xmm6
            }
            if ( !(v23 | v24) )
            {
              __asm
              {
                vmovss  xmm3, cs:__real@41700000; speed
                vmovaps xmm2, xmm7; frameTime
                vxorps  xmm1, xmm1, xmm1; dst
              }
              BgVehiclePhysics::DampLerp(&velLs.v[2], *(float *)&deltaTime, *(float *)&_XMM2, *(float *)&_XMM3);
            }
            __asm
            {
              vmovss  xmm3, cs:__real@40000000; speed
              vmovaps xmm2, xmm7; frameTime
              vxorps  xmm1, xmm1, xmm1; dst
            }
            BgVehiclePhysics::DampLerp(&velLs.v[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+78h+outVelLs+4]
              vcomiss xmm0, xmm6
            }
            if ( v23 && BgVehiclePhysicsGround::IsFacingUpward(_RBX) )
            {
              __asm
              {
                vmovss  xmm3, cs:__real@41700000; speed
                vmovaps xmm2, xmm7; frameTime
                vxorps  xmm1, xmm1, xmm1; dst
              }
              BgVehiclePhysics::DampLerp(&outVelLs.v[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
            }
            BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &velLs, &_RBX->m_linearVelocityWs);
            __asm
            {
              vmovss  xmm3, cs:__real@3fe66666; speed
              vmovaps xmm2, xmm7; frameTime
              vxorps  xmm1, xmm1, xmm1; dst
            }
            BgVehiclePhysics::DampLerp(outVelLs.v, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
          }
          if ( _RBX->IsInAir(_RBX) )
          {
            *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 5u);
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehAtvAirPitchControl, "bg_vehAtvAirPitchControl");
            __asm
            {
              vmulss  xmm1, xmm7, xmm6
              vmulss  xmm2, xmm0, xmm1
              vaddss  xmm2, xmm2, dword ptr [rsp+78h+outVelLs+4]
              vmovss  dword ptr [rsp+78h+outVelLs+4], xmm2
            }
          }
          goto LABEL_26;
        }
        v23 = 0;
        v24 = !_RBX->m_flatTire;
        __asm { vxorps  xmm6, xmm6, xmm6 }
        if ( !_RBX->m_flatTire )
        {
          __asm
          {
            vmovss  xmm3, cs:__real@3fe66666; speed
            vmovaps xmm2, xmm7; frameTime
            vxorps  xmm1, xmm1, xmm1; dst
          }
          BgVehiclePhysics::DampLerp(outVelLs.v, *(float *)&deltaTime, *(float *)&_XMM2, *(float *)&_XMM3);
        }
        __asm
        {
          vmovss  xmm0, cs:__real@3e99999a
          vcomiss xmm0, dword ptr [rbx+2B0h]
        }
        if ( v23 | v24 )
          goto LABEL_26;
        BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_linearVelocityWs, &velLs);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+78h+velLs+8]
          vcomiss xmm0, xmm6
        }
        if ( !(v23 | v24) )
        {
          __asm
          {
            vmovss  xmm3, cs:__real@41a00000; speed
            vmovaps xmm2, xmm7; frameTime
            vxorps  xmm1, xmm1, xmm1; dst
          }
          BgVehiclePhysics::DampLerp(&velLs.v[2], *(float *)&deltaTime, *(float *)&_XMM2, *(float *)&_XMM3);
        }
        __asm
        {
          vmovss  xmm3, cs:__real@40000000; speed
          vmovaps xmm2, xmm7; frameTime
          vxorps  xmm1, xmm1, xmm1; dst
        }
        BgVehiclePhysics::DampLerp(&velLs.v[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
        BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &velLs, &_RBX->m_linearVelocityWs);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+78h+outVelLs+4]
          vcomiss xmm0, xmm6
        }
        if ( v23 )
        {
          if ( !BgVehiclePhysicsGround::IsFacingUpward(_RBX) )
          {
LABEL_25:
            __asm
            {
              vmovss  xmm3, cs:__real@40800000; speed
              vmovaps xmm2, xmm7; frameTime
              vxorps  xmm1, xmm1, xmm1; dst
            }
            BgVehiclePhysics::DampLerp(outVelLs.v, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
LABEL_26:
            BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &outVelLs, &_RBX->m_angularVelocityWs);
            __asm { vmovaps xmm6, [rsp+78h+var_18] }
            goto LABEL_27;
          }
          __asm { vmovss  xmm3, cs:__real@41800000 }
        }
        else
        {
          __asm { vmovss  xmm3, cs:__real@40000000; speed }
        }
        __asm
        {
          vmovaps xmm2, xmm7; frameTime
          vxorps  xmm1, xmm1, xmm1; dst
        }
        BgVehiclePhysics::DampLerp(&outVelLs.v[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
        goto LABEL_25;
      }
    }
  }
LABEL_27:
  __asm { vmovaps xmm7, [rsp+78h+var_28] }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ApplyExtraGravity
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::ApplyExtraGravity(BgVehiclePhysicsAtvQuadNew *this, double deltaTime, __int64 a3, double _XMM3_8)
{
  char v13; 
  char v14; 
  vec3_t impulseWs; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RDI = this;
  __asm { vmovaps xmm6, xmm1 }
  if ( this->m_playerControlled )
  {
    _RBX = DCONST_DVARFLT_bg_vehForceGravAtv;
    if ( !DCONST_DVARFLT_bg_vehForceGravAtv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehForceGravAtv") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm2, xmm0, cs:__real@447a0000
      vmovss  xmm0, cs:__real@3f99999a
      vcomiss xmm0, dword ptr [rdi+0C88h]
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm1, xmm1, xmm1
      vmovss  dword ptr [rsp+78h+impulseWs], xmm3
      vmovss  dword ptr [rsp+78h+impulseWs+4], xmm1
      vmovss  dword ptr [rsp+78h+impulseWs+8], xmm2
    }
    if ( v13 | v14 )
    {
      _RBX = DCONST_DVARFLT_bg_vehAirMaxGravMult;
      if ( !DCONST_DVARFLT_bg_vehAirMaxGravMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAirMaxGravMult") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+28h]
        vmovss  xmm0, dword ptr [rsp+78h+impulseWs]
        vmulss  xmm1, xmm2, dword ptr [rsp+78h+impulseWs+4]
        vmulss  xmm3, xmm0, xmm2
        vmovss  xmm0, dword ptr [rsp+78h+impulseWs+8]
        vmulss  xmm2, xmm0, xmm2
      }
    }
    __asm
    {
      vmulss  xmm0, xmm3, xmm6
      vmovss  dword ptr [rsp+78h+impulseWs], xmm0
      vmulss  xmm0, xmm2, xmm6
      vmulss  xmm1, xmm1, xmm6
      vmovss  dword ptr [rsp+78h+impulseWs+8], xmm0
      vmovss  dword ptr [rsp+78h+impulseWs+4], xmm1
    }
    BgVehiclePhysics::AccumulateOnlyLinearImpulse(_RDI, &impulseWs);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
BgVehiclePhysicsGround::ApplyExtraGravity
==============
*/

void __fastcall BgVehiclePhysicsGround::ApplyExtraGravity(BgVehiclePhysicsGround *this, double deltaTime)
{
  unsigned int m_vehicleAnimProfile; 
  int v13; 
  const char *v15; 
  char v20; 
  const dvar_t *v21; 
  unsigned int v54; 
  unsigned int v59; 
  char v63; 
  vec3_t gravity; 
  vec3_t impulseWs; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm7 }
  _RBX = this;
  __asm { vmovaps xmm7, xmm1 }
  if ( !this->m_playerControlled )
    goto LABEL_44;
  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  v13 = 720916;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm8
  }
  if ( m_vehicleAnimProfile <= 0x13 && _bittest(&v13, m_vehicleAnimProfile) )
  {
    _RDI = DCONST_DVARFLT_bg_vehForceGravHeavy;
    if ( !DCONST_DVARFLT_bg_vehForceGravHeavy )
    {
      v15 = "bg_vehForceGravHeavy";
      goto LABEL_8;
    }
  }
  else
  {
    _RDI = DCONST_DVARFLT_bg_vehForceGrav;
    if ( !DCONST_DVARFLT_bg_vehForceGrav )
    {
      v15 = "bg_vehForceGrav";
LABEL_8:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v15) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  Physics_GetGravity((const Physics_WorldId)_RBX->m_worldId, &gravity);
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vcomiss xmm2, dword ptr [rbx+0C88h]
    vmulss  xmm1, xmm6, dword ptr [rbp+57h+gravity+8]
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rbp+57h+gravity], xmm8
    vmovss  dword ptr [rbp+57h+gravity+4], xmm8
    vmovss  dword ptr [rbp+57h+gravity+8], xmm1
  }
  if ( v20 | v63 )
  {
    v21 = DCONST_DVARFLT_bg_vehAirMaxGravMult;
    if ( !DCONST_DVARFLT_bg_vehAirMaxGravMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAirMaxGravMult") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [rdi+28h]
      vmulss  xmm3, xmm0, cs:__real@42700000
      vmulss  xmm2, xmm3, dword ptr [rbp+57h+gravity]
      vmulss  xmm1, xmm3, dword ptr [rbp+57h+gravity+4]
      vmulss  xmm0, xmm3, dword ptr [rbp+57h+gravity+8]
      vmovss  dword ptr [rbp+57h+gravity], xmm2
      vmovss  dword ptr [rbp+57h+gravity+4], xmm1
      vmovss  dword ptr [rbp+57h+gravity+8], xmm0
    }
    BgVehiclePhysics::AccumulateOnlyLinearImpulse(_RBX, &gravity);
  }
  else
  {
    _RDI = DCONST_DVARFLT_bg_vehSpeedThesholdForGravity;
    __asm
    {
      vmovaps [rsp+0F0h+var_68+8], xmm9
      vmovaps [rsp+0F0h+var_78+8], xmm10
      vmovaps [rsp+0F0h+var_88+8], xmm11
    }
    if ( !DCONST_DVARFLT_bg_vehSpeedThesholdForGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSpeedThesholdForGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm9, dword ptr [rdi+28h] }
    *(double *)&_XMM0 = BgVehiclePhysics::GetPlaneSpeed(_RBX);
    _RDI = DCONST_DVARFLT_bg_vehMinExtraGravity;
    __asm { vmulss  xmm10, xmm0, cs:__real@3aa57eb5 }
    if ( !DCONST_DVARFLT_bg_vehMinExtraGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMinExtraGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+2B0h]
      vmulss  xmm0, xmm2, cs:__real@40555555; val
      vmovss  xmm11, cs:__real@3f800000
      vmovss  xmm6, dword ptr [rdi+28h]
      vmovaps xmm2, xmm11; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm7, xmm0
      vsubss  xmm0, xmm11, xmm6; val
      vmovaps xmm2, xmm11; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovaps xmm0, xmm10; val
      vmovaps xmm1, xmm9; minval
    }
    *(float *)&_XMM0 = NormalizeRange(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vsubss  xmm1, xmm11, xmm1
      vmulss  xmm2, xmm1, xmm7
      vsubss  xmm0, xmm11, xmm7
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm2, xmm3, dword ptr [rbp+57h+gravity]
      vmulss  xmm1, xmm3, dword ptr [rbp+57h+gravity+4]
      vmulss  xmm0, xmm3, dword ptr [rbp+57h+gravity+8]
      vmovss  dword ptr [rbp+57h+gravity], xmm2
      vmovss  dword ptr [rbp+57h+gravity+4], xmm1
      vmovss  dword ptr [rbp+57h+gravity+8], xmm0
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
    _RDI = DCONST_DVARFLT_bg_vehWheelAirGravTime;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DCONST_DVARFLT_bg_vehWheelAirGravTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehWheelAirGravTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    v54 = _RBX->m_vehicleAnimProfile;
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    if ( v54 > 0x13 || !_bittest(&v13, v54) )
    {
      __asm
      {
        vmulss  xmm1, xmm7, cs:__real@3c23d70a
        vsubss  xmm0, xmm11, xmm7
        vmulss  xmm2, xmm0, xmm6
        vaddss  xmm6, xmm2, xmm1
      }
    }
    v59 = 0;
    if ( _RBX->m_wheelCount )
    {
      __asm
      {
        vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm9, cs:__real@3f19999a
        vmovss  xmm10, cs:__real@3e4ccccd
      }
      do
      {
        _R14 = v59;
        __asm
        {
          vmovss  xmm0, dword ptr [r14+rbx+360h]
          vcomiss xmm0, xmm8
        }
        if ( is_mul_ok(0x98ui64, v59) )
        {
          __asm { vcomiss xmm0, xmm6 }
          if ( ((152 * (unsigned __int128)v59) >> 64 != 0) | v63 )
            goto LABEL_37;
        }
        if ( _RBX->m_wheels[_R14].m_contactBodyId == 0xFFFFFF )
        {
          _RSI = DCONST_DVARFLT_bg_vehWheelAirGravAfterColl;
          if ( !DCONST_DVARFLT_bg_vehWheelAirGravAfterColl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehWheelAirGravAfterColl") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+28h]
            vcomiss xmm0, dword ptr [rbx+2B0h]
          }
          if ( !(v20 | v63) )
            goto LABEL_37;
        }
        if ( _RBX->IsInAir(_RBX) )
        {
LABEL_37:
          if ( v59 < 2 )
          {
            _RAX = GLOBAL_UP;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+184h]
              vmulss  xmm2, xmm0, dword ptr [rax+4]
              vmovss  xmm0, dword ptr [rax]
              vmulss  xmm1, xmm0, dword ptr [rbx+180h]
              vaddss  xmm3, xmm2, xmm1
              vmovss  xmm2, dword ptr [rbx+188h]
              vmulss  xmm0, xmm2, dword ptr [rax+8]
              vaddss  xmm0, xmm3, xmm0
              vandps  xmm0, xmm0, xmm7; val
              vmovaps xmm1, xmm9; minval
            }
            NormalizeRange(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm
            {
              vsubss  xmm0, xmm11, xmm0; val
              vmovaps xmm2, xmm11; max
              vmovaps xmm1, xmm8; min
            }
            I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+57h+gravity+4]
              vmovss  xmm2, dword ptr [rbp+57h+gravity]
              vmulss  xmm4, xmm1, xmm1
              vmovss  xmm1, dword ptr [rbp+57h+gravity+8]
              vmulss  xmm3, xmm2, xmm2
              vmulss  xmm2, xmm1, xmm1
              vsubss  xmm1, xmm11, xmm0
              vaddss  xmm5, xmm4, xmm3
              vaddss  xmm3, xmm5, xmm2
              vmulss  xmm2, xmm1, xmm10
              vaddss  xmm0, xmm2, xmm0
              vsqrtss xmm4, xmm3, xmm3
              vmulss  xmm3, xmm4, xmm0
              vmulss  xmm1, xmm3, dword ptr [r14+rbx+314h]
              vmulss  xmm0, xmm3, dword ptr [r14+rbx+318h]
              vmovss  dword ptr [rbp+57h+impulseWs], xmm1
              vmulss  xmm1, xmm3, dword ptr [r14+rbx+31Ch]
              vmovss  dword ptr [rbp+57h+impulseWs+8], xmm1
              vmovss  dword ptr [rbp+57h+impulseWs+4], xmm0
            }
          }
          else
          {
            __asm
            {
              vmovsd  xmm0, qword ptr [rbp+57h+gravity]
              vmovsd  qword ptr [rbp+57h+impulseWs], xmm0
            }
            impulseWs.v[2] = gravity.v[2];
          }
          BgVehiclePhysics::AccumulateImpulse(_RBX, &impulseWs, &_RBX->m_wheels[_R14].m_hardPointWs);
        }
        ++v59;
      }
      while ( v59 < _RBX->m_wheelCount );
    }
    __asm
    {
      vmovaps xmm10, [rsp+0F0h+var_78+8]
      vmovaps xmm9, [rsp+0F0h+var_68+8]
      vmovaps xmm11, [rsp+0F0h+var_88+8]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0F0h+var_38+8]
    vmovaps xmm8, [rsp+0F0h+var_58+8]
  }
LABEL_44:
  __asm { vmovaps xmm7, [rsp+0F0h+var_48+8] }
}

/*
==============
BgVehiclePhysicsCarBase::ApplyFriction
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplyFriction(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  unsigned int v23; 
  __int64 v26; 
  const dvar_t *v37; 
  unsigned int m_wheelCount; 
  int v76; 
  unsigned int *p_m_contactBodyId; 
  __int64 v78; 
  bool v79; 
  int v80; 
  char v99; 
  char v100; 
  float ackRatioa; 
  __int64 ackRatio; 
  float v144; 
  __int64 v145; 
  vec3_t sideWs; 
  vec3_t linVelWs; 
  vec3_t angVelWs; 
  vec3_t outPointVel; 
  vec3_t forwardWs; 
  vec3_t impulseWs; 
  char v157; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
    vxorps  xmm11, xmm11, xmm11
    vcomiss xmm11, dword ptr [rcx+0AC0h]
    vmovaps xmm15, xmm1
  }
  _RBX = this;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 4009, ASSERT_TYPE_ASSERT, "(m_steering.m_yawMaxAngle > 0.0f)", (const char *)&queryFormat, "m_steering.m_yawMaxAngle > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+260h]
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm7, xmm0, xmm1
    vmovss  [rsp+180h+var_150], xmm9
    vmovss  [rsp+180h+ackRatio], xmm9
    vmovss  [rsp+180h+var_13C], xmm7
  }
  BgVehiclePhysicsGround::Steering::ComputeAxis(&_RBX->m_steering, _RBX, 0, &forwardWs, &sideWs, ackRatioa, v144);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 7u);
  __asm
  {
    vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm6, cs:__real@3f000000
  }
  v23 = 0;
  *(_QWORD *)&_RBX->m_avgSpinSpeed = 0i64;
  __asm { vandps  xmm14, xmm0, xmm12 }
  if ( _RBX->m_wheelCount )
  {
    __asm
    {
      vmovaps [rsp+180h+var_B0], xmm13
      vmovss  xmm13, cs:__real@3a83126f
      vmovaps [rsp+180h+var_60], xmm8
      vmovaps [rsp+180h+var_80], xmm10
    }
    do
    {
      v26 = v23;
      _R15 = (__int64)&_RBX->m_wheels[v26];
      if ( v23 >= 2 )
      {
        __asm { vmovaps xmm10, xmm9 }
      }
      else
      {
        __asm
        {
          vcomiss xmm14, xmm13
          vmovss  xmm0, dword ptr [rbx+0AF0h]
          vandps  xmm0, xmm0, xmm12
          vdivss  xmm1, xmm0, dword ptr [rbx+0AC0h]
          vsubss  xmm0, xmm9, xmm1; val
          vmovaps xmm1, xmm11; min
          vmovaps xmm2, xmm9; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm10, xmm0 }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1A4h]
        vmovss  xmm1, dword ptr [rbx+1A8h]
      }
      v37 = DVARBOOL_bg_vehSurfaceVelocity;
      __asm
      {
        vmovss  dword ptr [rsp+180h+linVelWs], xmm0
        vmovss  xmm0, dword ptr [rbx+1ACh]
        vmovss  dword ptr [rsp+180h+linVelWs+4], xmm1
        vmovss  xmm1, dword ptr [rbx+1B0h]
        vmovss  dword ptr [rsp+180h+linVelWs+8], xmm0
        vmovss  xmm0, dword ptr [rbx+1B4h]
        vmovss  dword ptr [rsp+180h+angVelWs], xmm1
        vmovss  xmm1, dword ptr [rbx+1B8h]
        vmovss  dword ptr [rsp+180h+angVelWs+4], xmm0
        vmovss  dword ptr [rsp+180h+angVelWs+8], xmm1
      }
      if ( !DVARBOOL_bg_vehSurfaceVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSurfaceVelocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      if ( v37->current.enabled )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+1A4h]
          vsubss  xmm1, xmm0, dword ptr [rbx+0CD8h]
          vmovss  xmm2, dword ptr [rbx+1A8h]
          vsubss  xmm0, xmm2, dword ptr [rbx+0CDCh]
          vmovss  dword ptr [rsp+180h+linVelWs], xmm1
          vmovss  xmm1, dword ptr [rbx+1ACh]
          vsubss  xmm2, xmm1, dword ptr [rbx+0CE0h]
          vmovss  dword ptr [rsp+180h+linVelWs+4], xmm0
          vmovss  xmm0, dword ptr [rbx+1B0h]
          vsubss  xmm1, xmm0, dword ptr [rbx+0CE4h]
          vmovss  dword ptr [rsp+180h+linVelWs+8], xmm2
          vmovss  xmm2, dword ptr [rbx+1B4h]
          vsubss  xmm0, xmm2, dword ptr [rbx+0CE8h]
          vmovss  dword ptr [rsp+180h+angVelWs], xmm1
          vmovss  xmm1, dword ptr [rbx+1B8h]
          vsubss  xmm2, xmm1, dword ptr [rbx+0CECh]
          vmovss  dword ptr [rsp+180h+angVelWs+8], xmm2
          vmovss  dword ptr [rsp+180h+angVelWs+4], xmm0
        }
      }
      PhysicsVehicle_ComputePointVelocity(&_RBX->m_centerOfMassWs, &angVelWs, &linVelWs, &_RBX->m_wheels[v26].m_contactPointWs, &outPointVel);
      switch ( (_RBX->m_wheels[v26].m_surfFlags >> 19) & 0x3F )
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
          _RDI = DCONST_DVARFLT_bg_carMidFricSurf;
          if ( !DCONST_DVARFLT_bg_carMidFricSurf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carMidFricSurf") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm { vmovss  xmm3, dword ptr [rdi+28h] }
          break;
        case 7u:
        case 0xCu:
        case 0x14u:
        case 0x15u:
        case 0x1Bu:
        case 0x2Au:
          _RDI = DCONST_DVARFLT_bg_carLowFricSurf;
          if ( !DCONST_DVARFLT_bg_carLowFricSurf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carLowFricSurf") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm { vmovss  xmm3, dword ptr [rdi+28h] }
          break;
        default:
          __asm { vmovaps xmm3, xmm9; jumptable 000000014036825D default case, cases 5,13,14,22-26,28-30,33,36,43-48 }
          break;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+80h+forwardWs]
        vmulss  xmm1, xmm0, dword ptr [rsp+180h+outPointVel]
        vmovss  xmm0, dword ptr [rbp+80h+forwardWs+4]
        vmulss  xmm0, xmm0, dword ptr [rsp+180h+outPointVel+4]
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, dword ptr [rbp+80h+forwardWs+8]
        vmulss  xmm1, xmm0, dword ptr [rbp+80h+outPointVel+8]
        vmaxss  xmm6, xmm3, xmm6
        vaddss  xmm2, xmm2, xmm1
        vmovss  [rsp+180h+var_140], xmm6
        vmovss  dword ptr [rsp+180h+fmt], xmm15
      }
      if ( ((unsigned __int8 (__fastcall *)(BgVehiclePhysicsCarBase *, BgVehiclePhysicsGround::Wheel *))_RBX->ComputeWheelAngularSpeed)(_RBX, &_RBX->m_wheels[v26]) )
      {
        __asm
        {
          vmovss  xmm5, dword ptr [rsp+180h+sideWs]
          vmulss  xmm1, xmm5, dword ptr [rsp+180h+outPointVel]
          vmovss  xmm4, dword ptr [rsp+180h+sideWs+4]
          vmulss  xmm0, xmm4, dword ptr [rsp+180h+outPointVel+4]
          vmovss  xmm3, dword ptr [rsp+180h+sideWs+8]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, dword ptr [rbp+80h+outPointVel+8]
          vaddss  xmm8, xmm2, xmm1
          vmulss  xmm6, xmm8, xmm7
          vandps  xmm6, xmm6, xmm12
        }
        if ( v23 >= _RBX->m_wheelCount )
        {
          LODWORD(v145) = _RBX->m_wheelCount;
          LODWORD(ackRatio) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 3978, ASSERT_TYPE_ASSERT, "(unsigned)( windex ) < (unsigned)( m_wheelCount )", "windex doesn't index m_wheelCount\n\t%i not in [0, %i)", ackRatio, v145) )
            __debugbreak();
          __asm
          {
            vmovss  xmm5, dword ptr [rsp+180h+sideWs]
            vmovss  xmm4, dword ptr [rsp+180h+sideWs+4]
            vmovss  xmm3, dword ptr [rsp+180h+sideWs+8]
          }
        }
        if ( v23 >= 2 && (_RBX->m_wheels[v26].m_state & 1) != 0 )
        {
          m_wheelCount = _RBX->m_wheelCount;
          v76 = 0;
          if ( m_wheelCount <= 2 )
            goto LABEL_41;
          p_m_contactBodyId = &_RBX->m_wheels[2].m_contactBodyId;
          v78 = m_wheelCount - 2;
          do
          {
            v79 = (p_m_contactBodyId[1] & 1) != 0 && *p_m_contactBodyId != 0xFFFFFF;
            v80 = v76 + 1;
            if ( !v79 )
              v80 = v76;
            p_m_contactBodyId += 38;
            v76 = v80;
            --v78;
          }
          while ( v78 );
          if ( v80 < 2 )
LABEL_41:
            __asm { vmovss  xmm7, cs:__real@3e99999a }
          else
            __asm { vmovss  xmm7, cs:__real@3dcccccd }
        }
        else
        {
          __asm { vmovaps xmm7, xmm9 }
        }
        __asm
        {
          vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000
          vcmpless xmm0, xmm11, xmm8
          vblendvps xmm0, xmm1, xmm6, xmm0
          vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm1, xmm5, xmm2
          vmovss  dword ptr [r15+54h], xmm1
          vmulss  xmm1, xmm3, xmm2
          vmulss  xmm0, xmm4, xmm2
          vmovss  dword ptr [r15+58h], xmm0
          vmovss  dword ptr [r15+5Ch], xmm1
          vmovss  xmm0, dword ptr [r15+88h]
          vandps  xmm0, xmm0, xmm12
          vmulss  xmm0, xmm0, cs:__real@40d55555; val
          vmovaps xmm2, xmm9; max
          vmovaps xmm1, xmm11; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        _RDI = DCONST_DVARFLT_bg_vehInclThresForFric;
        __asm { vmovaps xmm8, xmm0 }
        if ( !DCONST_DVARFLT_bg_vehInclThresForFric && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehInclThresForFric") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm
        {
          vmovss  xmm6, dword ptr [rdi+28h]
          vcomiss xmm6, xmm13
        }
        if ( v99 | v100 )
        {
          __asm { vmovaps xmm2, xmm9 }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
            vmulss  xmm3, xmm0, dword ptr [rbx+190h]
            vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
            vmulss  xmm2, xmm1, dword ptr [rbx+18Ch]
            vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
            vmulss  xmm1, xmm0, dword ptr [rbx+194h]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm0, xmm4, xmm1; val
            vmovaps xmm1, xmm11; min
            vmovaps xmm2, xmm9; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vdivss  xmm0, xmm0, xmm6; val
            vmovaps xmm2, xmm9; max
            vmovaps xmm1, xmm11; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm2, xmm0 }
        }
        __asm
        {
          vmulss  xmm3, xmm15, cs:__real@42700000
          vmulss  xmm0, xmm10, dword ptr [rbx+0AB8h]
          vmulss  xmm1, xmm0, xmm8
          vmulss  xmm2, xmm1, xmm2
          vmulss  xmm4, xmm2, xmm7
          vmulss  xmm0, xmm4, dword ptr [r15+54h]
          vmulss  xmm1, xmm0, xmm3
          vmulss  xmm0, xmm4, dword ptr [r15+58h]
          vmovss  dword ptr [rbp+80h+impulseWs], xmm1
          vmulss  xmm1, xmm0, xmm3
          vmulss  xmm0, xmm4, dword ptr [r15+5Ch]
          vmovss  dword ptr [rbp+80h+impulseWs+4], xmm1
          vmulss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rbp+80h+impulseWs+8], xmm1
        }
        BgVehiclePhysics::AccumulateImpulse(_RBX, &impulseWs, &_RBX->m_wheels[v26].m_contactPointWs);
        __asm
        {
          vmovss  xmm6, [rsp+180h+var_140]
          vmovss  xmm7, [rsp+180h+var_13C]
        }
      }
      ++v23;
    }
    while ( v23 < _RBX->m_wheelCount );
    __asm
    {
      vmovaps xmm13, [rsp+180h+var_B0]
      vmovaps xmm10, [rsp+180h+var_80]
      vmovaps xmm8, [rsp+180h+var_60]
    }
  }
  __asm
  {
    vmovaps xmm3, xmm15; deltaTime
    vmovaps xmm2, xmm6; surfFric
  }
  BgVehiclePhysicsGround::FrictionCar::Step((BgVehiclePhysicsGround::FrictionCar *)&_RBX->m_friction, _RBX, *(float *)&_XMM2, *(float *)&_XMM3);
  _R11 = &v157;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-30h]
    vmovaps xmm7, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-80h]
    vmovaps xmm12, xmmword ptr [r11-90h]
    vmovaps xmm14, xmmword ptr [r11-0B0h]
    vmovaps xmm15, xmmword ptr [r11-0C0h]
  }
}

/*
==============
BgVehiclePhysicsSentryDrone::ApplyFriction
==============
*/
void BgVehiclePhysicsSentryDrone::ApplyFriction(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm0, dword ptr [rdi+190h]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rdi+18Ch]
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm0, dword ptr [rdi+194h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, cs:__real@3f800000; max
    vaddss  xmm0, xmm4, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm0, cs:__real@3e8483ef
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm1, xmm1, dword ptr [rsp+48h+outVelLs+4]
    vmovss  dword ptr [rsp+48h+outVelLs+4], xmm1
  }
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
}

/*
==============
BgVehiclePhysicsTank::ApplyFriction
==============
*/
void BgVehiclePhysicsTank::ApplyFriction(BgVehiclePhysicsTank *this, float deltaTime)
{
  vec3_t outVelLs; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm0, dword ptr [rbx+190h]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rbx+18Ch]
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm0, dword ptr [rbx+194h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, cs:__real@3f800000; max
    vaddss  xmm0, xmm4, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RDI = DCONST_DVARFLT_bg_bradleyAngleCutoff;
  __asm { vmulss  xmm6, xmm0, xmm0 }
  if ( !DCONST_DVARFLT_bg_bradleyAngleCutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyAngleCutoff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm6
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm1, xmm1, dword ptr [rsp+78h+outVelLs+4]
    vmovss  dword ptr [rsp+78h+outVelLs+4], xmm1
  }
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
BgVehiclePhysicsTwoWheeled::ApplyFriction
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::ApplyFriction(BgVehiclePhysicsTwoWheeled *this, double deltaTime)
{
  vec3_t outVelLs; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  __asm
  {
    vmovss  xmm3, cs:__real@41700000; speed
    vmovaps xmm2, xmm6; frameTime
    vxorps  xmm1, xmm1, xmm1; dst
  }
  BgVehiclePhysics::DampLerp(&outVelLs.v[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
BgVehiclePhysicsGround::ApplyFrontalSuspensionForce
==============
*/
void BgVehiclePhysicsGround::ApplyFrontalSuspensionForce(BgVehiclePhysicsGround *this, float deltaTime, unsigned int useIndex)
{
  __int64 v5; 

  if ( this->m_wheelCount != 12 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rcx+0C78h]
    }
    if ( this->m_wheelCount < 0xC && useIndex < 0xC )
    {
      v5 = useIndex;
      if ( this->m_wheels[v5].m_contactBodyId != 0xFFFFFF )
        BgVehiclePhysicsGround::ApplySingleSuspensionForce(this, deltaTime, &this->m_wheels[v5]);
    }
  }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ApplyRumble
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::ApplyRumble(BgVehiclePhysicsAtvQuadNew *this, double deltaTime)
{
  char v15; 
  bool v16; 
  unsigned int m_wheelCount; 
  unsigned int v63; 
  unsigned int v67; 
  __int64 v68; 
  __int64 p_m_suspDeformRatio; 
  __int64 v80; 
  char v84; 
  char v85; 
  __int64 v119; 
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  int v130; 
  int v131; 
  int v132; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+0E8h+var_A8], xmm15
    vmovaps xmm15, xmm1
  }
  if ( Physics_IsPredictiveWorld(this->m_worldId) && !_RBX->m_pmoveObject )
  {
    v15 = 0;
    v16 = !_RBX->m_playerControlled;
    __asm
    {
      vmovaps [rsp+0E8h+var_28], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    if ( !v16 )
    {
      v16 = _RBX->m_wheelInContactCount == 0;
      __asm { vmovaps [rsp+0E8h+var_18], xmm6 }
      if ( v16 )
      {
        *(double *)&_XMM0 = BgVehiclePhysicsGround::RumbleData::GetIntensity(&_RBX->m_rumble);
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm
        {
          vmovaps [rsp+0E8h+var_38], xmm8
          vmovaps [rsp+0E8h+var_48], xmm9
          vmovaps [rsp+0E8h+var_58], xmm10
          vmovaps [rsp+0E8h+var_68], xmm11
          vmovaps [rsp+0E8h+var_78], xmm12
          vmovaps [rsp+0E8h+var_88], xmm13
          vmovaps [rsp+0E8h+var_98], xmm14
        }
        *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RBX);
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+1A4h]
          vmovss  xmm5, dword ptr [rbx+1A8h]
          vmovss  xmm4, dword ptr [rbx+1ACh]
          vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm11, cs:__real@3f800000
          vandps  xmm10, xmm0, xmm14
          vmulss  xmm2, xmm6, xmm6
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm2, xmm4, xmm4
          vaddss  xmm3, xmm3, xmm2
          vsqrtss xmm1, xmm3, xmm3
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm11, xmm0
          vdivss  xmm1, xmm11, xmm0
          vmulss  xmm0, xmm5, xmm1
          vmulss  xmm3, xmm0, dword ptr [rbx+178h]
          vmulss  xmm1, xmm6, xmm1
          vmulss  xmm2, xmm1, dword ptr [rbx+174h]
          vaddss  xmm0, xmm3, xmm2
          vandps  xmm0, xmm0, xmm14
          vmaxss  xmm6, xmm0, xmm7
        }
        *(double *)&_XMM0 = BgVehiclePhysicsGround::GetDriftingRatio(_RBX);
        __asm
        {
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm2, xmm1, xmm6
          vsubss  xmm2, xmm11, xmm2
          vmulss  xmm0, xmm0, xmm2
          vmulss  xmm0, xmm0, xmm10
          vmovss  [rsp+0E8h+var_C4], xmm0
          vsubss  xmm0, xmm11, dword ptr [rbx+0C84h]; val
          vmovaps xmm2, xmm11; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm1, cs:scaleIntensity_0
          vmulss  xmm2, xmm1, cs:__real@3ecccccd
          vmulss  xmm0, xmm2, xmm0
          vmovss  [rsp+0E8h+var_C0], xmm0
        }
        if ( BgVehiclePhysicsGround::IsBraking(_RBX) )
        {
          __asm
          {
            vmovss  xmm0, cs:scaleIntensity_0
            vmulss  xmm6, xmm0, xmm10
          }
        }
        else
        {
          __asm { vxorps  xmm6, xmm6, xmm6 }
        }
        __asm { vmovss  [rsp+0E8h+var_B8], xmm6 }
        *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+3F0h]
          vaddss  xmm2, xmm1, dword ptr [rbx+358h]
          vmovss  xmm9, cs:__real@3f000000
          vandps  xmm0, xmm0, xmm14
          vmulss  xmm0, xmm0, xmm2
          vmulss  xmm0, xmm0, xmm9
          vmulss  xmm2, xmm0, cs:scaleIntensity_0
          vmulss  xmm1, xmm2, xmm2
          vmulss  xmm2, xmm1, xmm2
          vmulss  xmm12, xmm2, cs:__real@3d83126f
          vmovss  [rsp+0E8h+var_BC], xmm12
        }
        *(double *)&_XMM0 = BgVehiclePhysicsGround::RumbleData::GetIntensity(&_RBX->m_rumble);
        m_wheelCount = _RBX->m_wheelCount;
        v63 = 0;
        __asm
        {
          vmovss  [rsp+0E8h+var_B4], xmm0
          vmovaps xmm13, xmm0
          vxorps  xmm3, xmm3, xmm3
        }
        if ( m_wheelCount >= 4 )
        {
          _RCX = &_RBX->m_wheels[1].m_suspDeformRatio;
          v67 = ((m_wheelCount - 4) >> 2) + 1;
          v68 = v67;
          v63 = 4 * v67;
          do
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rcx]
              vmovss  xmm0, dword ptr [rcx-98h]
            }
            _RCX += 152;
            __asm
            {
              vmaxss  xmm2, xmm0, xmm3
              vmovss  xmm3, dword ptr [rcx-130h]
              vcmpless xmm0, xmm2, xmm1
              vblendvps xmm2, xmm2, xmm1, xmm0
              vmovss  xmm1, dword ptr [rcx-1C8h]
              vmaxss  xmm4, xmm1, xmm2
              vcmpless xmm0, xmm4, xmm3
              vblendvps xmm0, xmm4, xmm3, xmm0
              vmovss  [rsp+0E8h+var_C8], xmm0
              vmovss  xmm3, [rsp+0E8h+var_C8]
            }
            --v68;
          }
          while ( v68 );
        }
        if ( v63 < m_wheelCount )
        {
          p_m_suspDeformRatio = (__int64)&_RBX->m_wheels[v63].m_suspDeformRatio;
          v80 = m_wheelCount - v63;
          do
          {
            __asm { vmaxss  xmm3, xmm3, dword ptr [rax] }
            p_m_suspDeformRatio += 152i64;
            --v80;
          }
          while ( v80 );
        }
        __asm
        {
          vmovaps xmm2, xmm11; max
          vmovaps xmm1, xmm7; min
          vmovaps xmm0, xmm3; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vsubss  xmm1, xmm0, cs:__real@3e99999a
          vmulss  xmm2, xmm1, cs:__real@3fb6db6e
        }
        _EAX = _RBX->m_flatTire;
        __asm
        {
          vmaxss  xmm0, xmm2, xmm7
          vmulss  xmm8, xmm0, xmm9
          vmovd   xmm0, eax
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm1, xmm0, xmm10
          vmovss  xmm0, dword ptr [rbx+0C88h]
          vcomiss xmm0, xmm7
          vmulss  xmm9, xmm1, xmm9
          vmovss  [rsp+0E8h+var_B0], xmm9
          vmovss  [rsp+0E8h+var_C8], xmm8
          vmovaps xmm1, xmm7; min
        }
        if ( v84 | v85 )
        {
          __asm
          {
            vandps  xmm0, xmm0, xmm14
            vmulss  xmm0, xmm0, cs:__real@40800000
            vsubss  xmm0, xmm11, xmm0; val
            vmovaps xmm2, xmm11; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmulss  xmm1, xmm0, xmm10 }
        }
        __asm
        {
          vmovss  xmm0, [rsp+0E8h+var_C4]
          vmovaps xmm14, [rsp+0E8h+var_98]
          vmovaps xmm11, [rsp+0E8h+var_68]
        }
        _RAX = &v129;
        __asm { vmovaps xmm10, [rsp+0E8h+var_58] }
        _RDX = &v126;
        __asm
        {
          vcomiss xmm12, xmm6
          vmovaps xmm12, [rsp+0E8h+var_78]
        }
        if ( v84 | v85 )
          _RAX = &v130;
        _RCX = &v127;
        __asm
        {
          vcomiss xmm0, dword ptr [rax]
          vmovss  xmm0, [rsp+0E8h+var_C0]
        }
        if ( v84 | v85 )
          _RCX = _RAX;
        _RAX = &v131;
        __asm
        {
          vcomiss xmm13, dword ptr [rcx]
          vmovaps xmm13, [rsp+0E8h+var_88]
        }
        if ( v84 | v85 )
          _RAX = _RCX;
        _RCX = &v128;
        __asm { vcomiss xmm0, dword ptr [rax] }
        if ( v84 | v85 )
          _RCX = _RAX;
        _RAX = &v132;
        __asm
        {
          vcomiss xmm8, dword ptr [rcx]
          vmovaps xmm8, [rsp+0E8h+var_38]
        }
        if ( v84 | v85 )
          _RDX = _RCX;
        __asm
        {
          vcomiss xmm9, dword ptr [rdx]
          vmovaps xmm9, [rsp+0E8h+var_48]
        }
        if ( v84 | v85 )
          _RAX = _RDX;
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmaxss  xmm6, xmm0, xmm1
        }
      }
      v119 = (__int64)_RBX->m_vehicleSystem->PhysicsGetEventSystem(_RBX->m_vehicleSystem);
      __asm { vmovaps xmm1, xmm6 }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v119 + 8i64))(v119);
      __asm { vmovaps xmm6, [rsp+0E8h+var_18] }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0B30h]
      vcomiss xmm0, xmm7
    }
    if ( !(v15 | v16) )
    {
      __asm { vcomiss xmm7, dword ptr [rbx+0B2Ch] }
      if ( v15 )
      {
        __asm { vcomiss xmm7, dword ptr [rbx+0B28h] }
        if ( v15 )
        {
          __asm
          {
            vsubss  xmm0, xmm0, xmm15
            vcomiss xmm0, xmm7
            vmovss  dword ptr [rbx+0B30h], xmm0
          }
          if ( v15 | v16 )
            *(_QWORD *)&_RBX->m_rumble.m_intensity = 0i64;
        }
      }
    }
    __asm { vmovaps xmm7, [rsp+0E8h+var_28] }
  }
  __asm { vmovaps xmm15, [rsp+0E8h+var_A8] }
}

/*
==============
BgVehiclePhysicsCarBase::ApplyRumble
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplyRumble(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  char v15; 
  bool v16; 
  BgVehiclePhysicsCarBase_vtbl *v18; 
  bool HasMoveOrInput; 
  char v66; 
  bool v67; 
  unsigned int m_wheelCount; 
  unsigned int v69; 
  unsigned int v72; 
  __int64 v73; 
  __int64 v85; 
  __int64 v125; 
  int v132; 
  int v133; 
  int v134; 
  int v135; 
  int v136; 
  int v137; 
  int v138; 
  int v139; 
  int v140; 

  _RSI = this;
  __asm
  {
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps xmm13, xmm1
  }
  if ( Physics_IsPredictiveWorld(this->m_worldId) && !_RSI->m_pmoveObject )
  {
    v15 = 0;
    v16 = !_RSI->m_playerControlled;
    __asm
    {
      vmovaps [rsp+0F8h+var_28], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    if ( !v16 )
    {
      v18 = _RSI->__vftable;
      __asm { vmovaps [rsp+0F8h+var_18], xmm6 }
      if ( v18->IsInAir(_RSI) )
      {
        *(double *)&_XMM0 = BgVehiclePhysicsGround::RumbleData::GetIntensity(&_RSI->m_rumble);
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm
        {
          vmovaps [rsp+0F8h+var_38], xmm8
          vmovaps [rsp+0F8h+var_48], xmm9
          vmovaps [rsp+0F8h+var_58], xmm10
          vmovaps [rsp+0F8h+var_68], xmm11
          vmovaps [rsp+0F8h+var_78], xmm12
          vmovaps [rsp+0F8h+var_98], xmm14
          vmovaps [rsp+0F8h+var_A8], xmm15
        }
        *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RSI);
        __asm
        {
          vmovss  xmm6, dword ptr [rsi+1A4h]
          vmovss  xmm5, dword ptr [rsi+1A8h]
          vmovss  xmm4, dword ptr [rsi+1ACh]
          vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm10, cs:__real@3f800000
          vandps  xmm8, xmm0, xmm12
          vmulss  xmm2, xmm6, xmm6
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm2, xmm4, xmm4
          vaddss  xmm3, xmm3, xmm2
          vsqrtss xmm1, xmm3, xmm3
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm10, xmm0
          vdivss  xmm1, xmm10, xmm0
          vmulss  xmm0, xmm5, xmm1
          vmulss  xmm3, xmm0, dword ptr [rsi+178h]
          vmulss  xmm1, xmm6, xmm1
          vmulss  xmm2, xmm1, dword ptr [rsi+174h]
          vaddss  xmm0, xmm3, xmm2
          vandps  xmm0, xmm0, xmm12
          vmaxss  xmm6, xmm0, xmm7
        }
        *(double *)&_XMM0 = BgVehiclePhysicsGround::GetDriftingRatio(_RSI);
        __asm
        {
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm2, xmm1, xmm6
          vsubss  xmm2, xmm10, xmm2
          vmulss  xmm0, xmm0, xmm2
          vmulss  xmm0, xmm0, xmm8
          vmovss  [rsp+0F8h+var_D4], xmm0
          vsubss  xmm0, xmm10, dword ptr [rsi+0C84h]; val
          vmovaps xmm2, xmm10; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm1, cs:scaleIntensity
          vmulss  xmm2, xmm1, cs:__real@3e99999a
          vmulss  xmm0, xmm2, xmm0
          vmovss  [rsp+0F8h+var_D0], xmm0
        }
        if ( BgVehiclePhysicsGround::IsBraking(_RSI) )
        {
          __asm
          {
            vmovss  xmm0, cs:scaleIntensity
            vmulss  xmm9, xmm0, xmm8
          }
        }
        else
        {
          __asm { vxorps  xmm9, xmm9, xmm9 }
        }
        __asm { vmovss  [rsp+0F8h+var_C0], xmm9 }
        *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RSI->m_controls, 4u);
        __asm
        {
          vmovss  xmm1, dword ptr [rsi+3F0h]
          vaddss  xmm2, xmm1, dword ptr [rsi+358h]
          vandps  xmm0, xmm0, xmm12
          vmulss  xmm0, xmm0, xmm2
          vmulss  xmm3, xmm0, cs:__real@3dcccccd
          vmulss  xmm4, xmm3, cs:scaleIntensity
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm14, xmm1, xmm4
          vmovss  [rsp+0F8h+var_C4], xmm14
        }
        *(double *)&_XMM0 = BgVehiclePhysicsGround::RumbleData::GetIntensity(&_RSI->m_rumble);
        __asm
        {
          vmovss  [rsp+0F8h+var_BC], xmm0
          vmovaps xmm15, xmm0
          vmulss  xmm0, xmm8, dword ptr [rsi+0B24h]
          vmovss  [rsp+0F8h+var_CC], xmm0
        }
        *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RSI->m_controls, 6u);
        __asm
        {
          vandps  xmm0, xmm0, xmm12
          vmulss  xmm0, xmm0, cs:__real@3d4ccccd
          vmovss  [rsp+0F8h+var_C8], xmm0
        }
        HasMoveOrInput = BgVehiclePhysicsGround::HasMoveOrInput(_RSI);
        v66 = 0;
        v67 = !HasMoveOrInput;
        if ( HasMoveOrInput )
        {
          m_wheelCount = _RSI->m_wheelCount;
          v69 = 0;
          __asm { vxorps  xmm3, xmm3, xmm3 }
          if ( m_wheelCount >= 4 )
          {
            _RCX = &_RSI->m_wheels[1].m_suspDeformRatio;
            v72 = ((m_wheelCount - 4) >> 2) + 1;
            v73 = v72;
            v69 = 4 * v72;
            do
            {
              __asm
              {
                vmovss  xmm1, dword ptr [rcx]
                vmovss  xmm0, dword ptr [rcx-98h]
              }
              _RCX += 152;
              __asm
              {
                vmaxss  xmm2, xmm0, xmm3
                vmovss  xmm3, dword ptr [rcx-130h]
                vcmpless xmm0, xmm2, xmm1
                vblendvps xmm2, xmm2, xmm1, xmm0
                vmovss  xmm1, dword ptr [rcx-1C8h]
                vmaxss  xmm4, xmm1, xmm2
                vcmpless xmm0, xmm4, xmm3
                vblendvps xmm0, xmm4, xmm3, xmm0
                vmovss  [rsp+0F8h+var_D8], xmm0
                vmovss  xmm3, [rsp+0F8h+var_D8]
              }
              --v73;
            }
            while ( v73 );
          }
          if ( v69 < m_wheelCount )
          {
            _RAX = (__int64)&_RSI->m_wheels[v69].m_suspDeformRatio;
            v85 = m_wheelCount - v69;
            do
            {
              __asm { vmovss  xmm1, dword ptr [rax] }
              _RAX += 152i64;
              __asm { vmaxss  xmm3, xmm1, xmm3 }
              --v85;
            }
            while ( v85 );
          }
          __asm
          {
            vmovaps xmm2, xmm10; max
            vmovaps xmm1, xmm7; min
            vmovaps xmm0, xmm3; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        }
        else
        {
          __asm { vxorps  xmm0, xmm0, xmm0 }
        }
        __asm
        {
          vsubss  xmm0, xmm0, cs:__real@3e4ccccd
          vmulss  xmm1, xmm0, cs:__real@3fa00000
          vmovss  xmm4, dword ptr [rsi+0C88h]
          vcomiss xmm4, xmm7
          vmaxss  xmm2, xmm1, xmm7
          vmulss  xmm6, xmm2, cs:__real@3f000000
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm8
          vmulss  xmm11, xmm1, cs:__real@3f000000
          vmovaps xmm1, xmm7; min
          vmovss  [rsp+0F8h+var_D8], xmm6
        }
        if ( v66 | v67 )
        {
          __asm
          {
            vandps  xmm4, xmm4, xmm12
            vmulss  xmm0, xmm4, cs:__real@40800000
            vsubss  xmm0, xmm10, xmm0; val
            vmovaps xmm2, xmm10; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmulss  xmm1, xmm0, xmm8 }
        }
        __asm
        {
          vmovss  xmm0, [rsp+0F8h+var_D4]
          vmovaps xmm12, [rsp+0F8h+var_78]
          vmovaps xmm10, [rsp+0F8h+var_58]
        }
        _RAX = &v137;
        __asm { vmovaps xmm8, [rsp+0F8h+var_38] }
        _RDX = &v136;
        __asm
        {
          vcomiss xmm14, xmm9
          vmovaps xmm14, [rsp+0F8h+var_98]
          vmovaps xmm9, [rsp+0F8h+var_48]
        }
        if ( v66 | v67 )
          _RAX = &v138;
        _RCX = &v133;
        __asm
        {
          vmovss  [rsp+0F8h+var_B8], xmm1
          vcomiss xmm0, dword ptr [rax]
          vmovss  xmm0, [rsp+0F8h+var_D0]
        }
        if ( v66 | v67 )
          _RCX = _RAX;
        _RAX = &v139;
        __asm
        {
          vcomiss xmm15, dword ptr [rcx]
          vmovaps xmm15, [rsp+0F8h+var_A8]
        }
        if ( v66 | v67 )
          _RAX = _RCX;
        _RCX = &v134;
        __asm
        {
          vcomiss xmm0, dword ptr [rax]
          vmovss  xmm0, [rsp+0F8h+var_CC]
        }
        if ( v66 | v67 )
          _RCX = _RAX;
        _RAX = &v135;
        __asm
        {
          vcomiss xmm0, dword ptr [rcx]
          vmovss  xmm0, [rsp+0F8h+var_C8]
        }
        if ( v66 | v67 )
          _RAX = _RCX;
        _RCX = &v132;
        __asm { vcomiss xmm6, dword ptr [rax] }
        if ( v66 | v67 )
          _RCX = _RAX;
        _RAX = &v140;
        __asm { vcomiss xmm0, dword ptr [rcx] }
        if ( v66 | v67 )
          _RDX = _RCX;
        __asm { vcomiss xmm1, dword ptr [rdx] }
        if ( v66 | v67 )
          _RAX = _RDX;
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmaxss  xmm6, xmm0, xmm11
          vmovaps xmm11, [rsp+0F8h+var_68]
        }
      }
      v125 = (__int64)_RSI->m_vehicleSystem->PhysicsGetEventSystem(_RSI->m_vehicleSystem);
      __asm { vmovaps xmm1, xmm6 }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v125 + 8i64))(v125);
      __asm { vmovaps xmm6, [rsp+0F8h+var_18] }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0B30h]
      vcomiss xmm0, xmm7
    }
    if ( !(v15 | v16) )
    {
      __asm { vcomiss xmm7, dword ptr [rsi+0B2Ch] }
      if ( v15 )
      {
        __asm { vcomiss xmm7, dword ptr [rsi+0B28h] }
        if ( v15 )
        {
          __asm
          {
            vsubss  xmm0, xmm0, xmm13
            vcomiss xmm0, xmm7
            vmovss  dword ptr [rsi+0B30h], xmm0
          }
          if ( v15 | v16 )
            *(_QWORD *)&_RSI->m_rumble.m_intensity = 0i64;
        }
      }
    }
    __asm { vmovaps xmm7, [rsp+0F8h+var_28] }
  }
  __asm { vmovaps xmm13, [rsp+0F8h+var_88] }
}

/*
==============
BgVehiclePhysicsTank::ApplyRumble
==============
*/

void __fastcall BgVehiclePhysicsTank::ApplyRumble(BgVehiclePhysicsTank *this, double deltaTime)
{
  char v10; 
  bool v11; 
  __int64 v22; 
  int v38; 
  int v39; 
  int v40; 

  _RDI = this;
  __asm
  {
    vmovaps [rsp+78h+var_58], xmm10
    vmovaps xmm10, xmm1
  }
  if ( Physics_IsPredictiveWorld(this->m_worldId) && !_RDI->m_pmoveObject )
  {
    v10 = 0;
    v11 = !_RDI->m_playerControlled;
    if ( _RDI->m_playerControlled )
    {
      __asm
      {
        vmovaps [rsp+78h+var_18], xmm6
        vmovaps [rsp+78h+var_28], xmm7
        vmovaps [rsp+78h+var_38], xmm8
        vmovaps [rsp+78h+var_48], xmm9
      }
      *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 2u);
      __asm
      {
        vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm0, xmm0, xmm6
        vmulss  xmm0, xmm0, xmm0
        vmulss  xmm8, xmm0, cs:__real@3e19999a
        vmovss  [rsp+78h+arg_0], xmm8
      }
      *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RDI);
      __asm
      {
        vandps  xmm0, xmm0, xmm6
        vmulss  xmm9, xmm0, cs:__real@3c23d70a
        vmovss  [rsp+78h+arg_18], xmm9
      }
      *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 6u);
      __asm
      {
        vandps  xmm0, xmm0, xmm6
        vmulss  xmm6, xmm0, cs:__real@3dcccccd
        vmovss  [rsp+78h+arg_10], xmm6
      }
      *(double *)&_XMM0 = BgVehiclePhysicsGround::RumbleData::GetIntensity(&_RDI->m_rumble);
      __asm
      {
        vmulss  xmm7, xmm0, cs:__real@3f000000
        vcomiss xmm8, xmm6
      }
      _RBX = &v38;
      if ( v10 | v11 )
        _RBX = &v39;
      v22 = (__int64)_RDI->m_vehicleSystem->PhysicsGetEventSystem(_RDI->m_vehicleSystem);
      __asm { vcomiss xmm9, dword ptr [rbx] }
      _RCX = &v40;
      if ( v10 | v11 )
        _RCX = _RBX;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vmaxss  xmm1, xmm0, xmm7
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8i64))(v22);
      __asm
      {
        vmovaps xmm9, [rsp+78h+var_48]
        vmovaps xmm8, [rsp+78h+var_38]
        vmovaps xmm7, [rsp+78h+var_28]
        vmovaps xmm6, [rsp+78h+var_18]
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0B30h]
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    if ( !(v10 | v11) )
    {
      __asm { vcomiss xmm1, dword ptr [rdi+0B2Ch] }
      if ( v10 )
      {
        __asm { vcomiss xmm1, dword ptr [rdi+0B28h] }
        if ( v10 )
        {
          __asm
          {
            vsubss  xmm0, xmm0, xmm10
            vcomiss xmm0, xmm1
            vmovss  dword ptr [rdi+0B30h], xmm0
          }
          if ( v10 | v11 )
            *(_QWORD *)&_RDI->m_rumble.m_intensity = 0i64;
        }
      }
    }
  }
  __asm { vmovaps xmm10, [rsp+78h+var_58] }
}

/*
==============
BgVehiclePhysicsGround::ApplySingleSuspensionForce
==============
*/

void __fastcall BgVehiclePhysicsGround::ApplySingleSuspensionForce(BgVehiclePhysicsGround *this, double deltaTime, const BgVehiclePhysicsGround::Wheel *wheel)
{
  vec3_t impulseWs; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [r8+3Ch]
    vmovss  xmm2, dword ptr [r8+44h]
    vxorps  xmm4, xmm0, xmm3
    vmovss  xmm0, dword ptr [r8+40h]
    vxorps  xmm5, xmm0, xmm3
    vmulss  xmm0, xmm4, dword ptr [r8+30h]
    vmovaps xmm7, xmm1
    vmulss  xmm1, xmm5, dword ptr [r8+34h]
    vxorps  xmm6, xmm2, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [r8+38h]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [r8+68h]
    vmulss  xmm3, xmm2, xmm7
    vmulss  xmm1, xmm3, xmm4
    vmovss  dword ptr [rsp+68h+impulseWs], xmm1
    vmulss  xmm1, xmm3, xmm6
    vmulss  xmm0, xmm3, xmm5
    vmovss  dword ptr [rsp+68h+impulseWs+8], xmm1
    vmovss  dword ptr [rsp+68h+impulseWs+4], xmm0
  }
  BgVehiclePhysics::AccumulateImpulse(this, &impulseWs, &wheel->m_hardPointWs);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
BgVehiclePhysicsCarBase::ApplySteering
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplySteering(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  const dvar_t *v5; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !this->m_flatTire )
  {
    v5 = DCONST_DVARBOOL_bg_vehSteeringNew;
    if ( !DCONST_DVARBOOL_bg_vehSteeringNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSteeringNew") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( !v5->current.enabled )
      goto LABEL_8;
  }
  if ( this->m_vehicleAnimProfile != VEH_ANIMPROFILE_VINDIA )
  {
    __asm
    {
      vmovaps xmm1, xmm6; deltaTime
      vmovaps xmm6, [rsp+58h+var_18]
    }
    BgVehiclePhysicsCarBase::ApplySteeringWithFlatTire(this, *(float *)&_XMM1);
  }
  else
  {
LABEL_8:
    __asm
    {
      vmovaps xmm1, xmm6; deltaTime
      vmovaps xmm6, [rsp+58h+var_18]
    }
    BgVehiclePhysicsCarBase::ApplySteeringLegacy(this, *(float *)&_XMM1);
  }
}

/*
==============
BgVehiclePhysicsSentryDrone::ApplySteering
==============
*/
void BgVehiclePhysicsSentryDrone::ApplySteering(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  char v13; 
  const dvar_t *v14; 
  vec3_t outVelLs; 
  char v33; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBX = this;
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmm7, xmm8
    vxorps  xmm6, xmm6, xmm6
  }
  if ( !this->m_wheelInContactCount )
  {
    if ( Physics_IsRigidBodyValid(this->m_worldId, this->m_lastColliderBodyId) )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3e800000
        vcomiss xmm0, dword ptr [rbx+2B0h]
        vmovss  xmm7, cs:__real@3f000000
      }
    }
    else
    {
      __asm { vxorps  xmm7, xmm7, xmm7 }
    }
  }
  BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_angularVelocityWs, &outVelLs);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
  __asm { vcomiss xmm0, xmm6 }
  if ( v13 )
  {
    v14 = DCONST_DVARBOOL_bg_wheelsonReverseSteering;
    if ( !DCONST_DVARBOOL_bg_wheelsonReverseSteering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonReverseSteering") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      __asm { vmovss  xmm8, cs:__real@bf800000 }
  }
  _RDI = DCONST_DVARFLT_bg_wheelsonTurnFactor;
  if ( !DCONST_DVARFLT_bg_wheelsonTurnFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonTurnFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
  __asm
  {
    vmulss  xmm1, xmm0, cs:VELOCITY_FACTOR_COMP
    vmulss  xmm1, xmm1, dword ptr [rbx+0AC4h]
    vmovss  xmm2, cs:YAW_DEG_SEC_0
    vmulss  xmm0, xmm1, xmm8
    vmulss  xmm1, xmm2, cs:__real@3c8efa35
    vmulss  xmm3, xmm0, xmm7
    vmulss  xmm0, xmm3, xmm1
    vmulss  xmm3, xmm0, cs:k_1
    vmulss  xmm2, xmm3, xmm6
    vmovss  dword ptr [rsp+0A8h+outVelLs+8], xmm2
  }
  BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &outVelLs, &_RBX->m_angularVelocityWs);
  _R11 = &v33;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
BgVehiclePhysicsTank::ApplySteering
==============
*/
void BgVehiclePhysicsTank::ApplySteering(BgVehiclePhysicsTank *this, float deltaTime)
{
  vec3_t outVelLs; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = this;
  if ( !this->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 2609, ASSERT_TYPE_ASSERT, "(m_wheelCount > 0)", (const char *)&queryFormat, "m_wheelCount > 0") )
    __debugbreak();
  BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_angularVelocityWs, &outVelLs);
  LOBYTE(_EAX) = BgVehiclePhysicsGround::IsReversing(_RBX);
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  _RDI = DCONST_DVARFLT_bg_bradleyTimeToFullSteer;
  _ECX = 0;
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@bf800000
    vblendvps xmm1, xmm0, xmm6, xmm2
    vmovss  [rsp+78h+var_38], xmm1
  }
  if ( !DCONST_DVARFLT_bg_bradleyTimeToFullSteer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyTimeToFullSteer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  xmm1, dword ptr [rbx+0A24h]
    vmaxss  xmm3, xmm0, cs:__real@3c23d70a
    vdivss  xmm0, xmm1, xmm3; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm6; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
  __asm
  {
    vmovss  xmm1, cs:YAW_DEG_SEC
    vmulss  xmm2, xmm1, cs:__real@3c8efa35
    vmulss  xmm3, xmm0, xmm2
    vmulss  xmm4, xmm3, cs:k_0
    vmulss  xmm2, xmm4, dword ptr [rbx+0AC4h]
    vmulss  xmm2, xmm2, cs:VELOCITY_FACTOR_COMP
    vmulss  xmm3, xmm2, [rsp+78h+var_38]
    vmulss  xmm0, xmm3, xmm6
    vmovss  dword ptr [rsp+78h+outVelLs+8], xmm0
  }
  BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &outVelLs, &_RBX->m_angularVelocityWs);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
BgVehiclePhysicsTwoWheeled::ApplySteering
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::ApplySteering(BgVehiclePhysicsTwoWheeled *this, double deltaTime)
{
  char v13; 
  char v14; 
  vec3_t outVelLs; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
  }
  _RBX = this;
  __asm { vmovaps xmm11, xmm1 }
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
  __asm { vmovaps xmm12, xmm0 }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
  __asm
  {
    vcomiss xmm0, cs:__real@3d4ccccd
    vmovss  xmm10, cs:__real@3f800000
  }
  if ( v13 )
  {
    __asm { vxorps  xmm9, xmm9, xmm9 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@40000000; val
      vmovaps xmm2, xmm10; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm9, xmm0 }
  }
  _RAX = GLOBAL_UP;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+184h]
    vmulss  xmm3, xmm1, dword ptr [rax+4]
    vmovss  xmm1, dword ptr [rax]
    vmulss  xmm2, xmm1, dword ptr [rbx+180h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm3, dword ptr [rbx+188h]
    vmulss  xmm1, xmm3, dword ptr [rax+8]
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3f333333
  }
  if ( v13 | v14 )
  {
    __asm
    {
      vmulss  xmm0, xmm11, xmm9
      vmulss  xmm1, xmm0, xmm12
      vxorps  xmm1, xmm1, cs:__xmm@80000000800000008000000080000000
    }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm
  {
    vaddss  xmm0, xmm1, dword ptr [rsp+0A8h+outVelLs]; val
    vmovss  xmm1, cs:__real@bf800000; min
    vsubss  xmm6, xmm10, xmm2
    vmovaps xmm2, xmm10; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000; min
    vmovss  dword ptr [rsp+0A8h+outVelLs], xmm0
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm3, xmm0, xmm6
    vmulss  xmm0, xmm9, cs:__real@40800000
    vsubss  xmm3, xmm10, xmm3
    vmulss  xmm4, xmm3, cs:__real@40600000
    vaddss  xmm4, xmm4, xmm0
    vmulss  xmm5, xmm4, xmm12
    vmulss  xmm0, xmm5, xmm11
    vaddss  xmm0, xmm0, dword ptr [rsp+0A8h+outVelLs+8]; val
    vmovaps xmm2, xmm10; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm3, cs:__real@40800000; speed
    vmovaps xmm2, xmm11; frameTime
    vxorps  xmm1, xmm1, xmm1; dst
    vmovss  dword ptr [rsp+0A8h+outVelLs+8], xmm0
  }
  BgVehiclePhysics::DampLerp(&outVelLs.v[2], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &outVelLs, &_RBX->m_angularVelocityWs);
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
  }
}

/*
==============
BgVehiclePhysicsCarBase::ApplySteeringLegacy
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplySteeringLegacy(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  unsigned int m_contactBodyId; 
  const dvar_t *v84; 
  unsigned int m_vehicleAnimProfile; 
  int v93; 
  unsigned int v99; 
  int v100; 
  const dvar_t *v125; 
  bool v146; 
  char v158; 
  char v159; 
  const dvar_t *v164; 
  char v166; 
  vec3_t atPointWs; 
  vec3_t outVelLs; 
  vec3_t impulseWs; 
  char v222; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm0, dword ptr [rcx+0AFCh]
    vmovaps xmm14, xmm1
    vsubss  xmm1, xmm0, xmm1
    vxorps  xmm8, xmm8, xmm8
  }
  _ER12 = 0;
  _RDI = this;
  __asm
  {
    vcomiss xmm1, xmm8
    vmovss  dword ptr [rcx+0AFCh], xmm1
  }
  this->m_steering.m_durationToControl = 0.0;
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 7u);
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+0ACCh]
    vmovss  xmm6, cs:__real@3f000000
    vmovss  xmm1, dword ptr [rdi+2FCh]
    vaddss  xmm2, xmm1, dword ptr [rdi+394h]
    vmulss  xmm1, xmm4, dword ptr [rdi+174h]
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm12, cs:__real@3a83126f
    vandps  xmm7, xmm0, xmm10
    vcomiss xmm7, xmm12
    vmovss  xmm0, dword ptr [rdi+300h]
    vmulss  xmm3, xmm2, xmm6
    vaddss  xmm5, xmm3, xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+398h]
    vmulss  xmm0, xmm4, dword ptr [rdi+178h]
    vmulss  xmm2, xmm1, xmm6
    vmovss  xmm1, dword ptr [rdi+304h]
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm0, xmm1, dword ptr [rdi+39Ch]
    vmulss  xmm1, xmm4, dword ptr [rdi+17Ch]
    vmulss  xmm2, xmm0, xmm6
    vaddss  xmm4, xmm2, xmm1
    vmovss  dword ptr [rsp+168h+atPointWs+8], xmm4
    vmovss  [rsp+168h+var_110], xmm7
    vmovss  dword ptr [rsp+168h+atPointWs], xmm5
    vmovss  dword ptr [rsp+168h+atPointWs+4], xmm3
  }
  if ( v158 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+0AD0h]
      vmulss  xmm0, xmm2, dword ptr [rdi+18Ch]
      vaddss  xmm1, xmm0, xmm5
      vmulss  xmm0, xmm2, dword ptr [rdi+190h]
      vmovss  dword ptr [rsp+168h+atPointWs], xmm1
      vaddss  xmm1, xmm0, xmm3
      vmulss  xmm0, xmm2, dword ptr [rdi+194h]
      vmovss  dword ptr [rsp+168h+atPointWs+4], xmm1
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rsp+168h+atPointWs+8], xmm1
    }
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 4u);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+0AF0h]
    vandps  xmm15, xmm0, xmm10
    vandps  xmm1, xmm1, xmm10
    vdivss  xmm0, xmm1, dword ptr [rdi+0AC0h]
    vmovss  xmm1, dword ptr [rdi+0ABCh]
    vmulss  xmm2, xmm1, cs:__real@44c1c01a
    vmulss  xmm1, xmm7, dword ptr [rdi+0ADCh]
    vmovss  xmm7, cs:__real@3f800000
    vmovss  [rsp+168h+var_114], xmm0
    vmulss  xmm0, xmm2, cs:FIXED_STEERING_FOCE_MULT
    vmovss  [rsp+168h+var_118], xmm0
    vaddss  xmm0, xmm1, xmm7
    vmovss  [rsp+168h+var_120], xmm0
    vmovss  [rsp+168h+var_11C], xmm15
    vmovd   xmm1, r12d
  }
  _EAX = BgVehiclePhysicsGround::IsBraking(_RDI);
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
    vmovss  xmm2, dword ptr [rdi+1A4h]
    vmovss  [rsp+168h+var_128], xmm0
    vmovss  xmm0, dword ptr [rdi+1A8h]
    vsubss  xmm1, xmm0, dword ptr [rdi+0CDCh]
    vmulss  xmm3, xmm1, dword ptr [rdi+178h]
    vsubss  xmm0, xmm2, dword ptr [rdi+0CD8h]
    vmulss  xmm1, xmm0, dword ptr [rdi+174h]
    vmovss  xmm2, dword ptr [rdi+1ACh]
    vsubss  xmm0, xmm2, dword ptr [rdi+0CE0h]
    vmovss  xmm2, cs:__real@bf800000
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rdi+17Ch]
    vaddss  xmm3, xmm4, xmm1
    vcmpless xmm0, xmm8, xmm3
    vblendvps xmm1, xmm2, xmm7, xmm0
    vcmpless xmm0, xmm8, dword ptr [rdi+0AF0h]
    vblendvps xmm0, xmm2, xmm7, xmm0
    vmulss  xmm0, xmm1, xmm0
    vmovss  [rsp+168h+var_124], xmm0
  }
  *(double *)&_XMM0 = BgVehiclePhysicsGround::Steering::ChangingDirRatio(&_RDI->m_steering);
  m_contactBodyId = _RDI->m_wheels[0].m_contactBodyId;
  _EBP = 0xFFFFFF;
  __asm
  {
    vmovss  [rsp+168h+var_10C], xmm0
    vmovaps xmm13, xmm7
  }
  if ( m_contactBodyId == 0xFFFFFF && _RDI->m_wheels[1].m_contactBodyId == 0xFFFFFF )
  {
    if ( _RDI->IsInAir(_RDI) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+2B0h]
        vmulss  xmm0, xmm0, cs:__real@40a00000; val
        vmovaps xmm2, xmm7; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      v84 = DCONST_DVARFLT_bg_vehAirSteerFac;
      __asm { vmovaps xmm6, xmm0 }
      if ( !DCONST_DVARFLT_bg_vehAirSteerFac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAirSteerFac") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v84);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]
        vsubss  xmm0, xmm7, xmm6
        vaddss  xmm13, xmm1, xmm0
      }
    }
    else
    {
      m_vehicleAnimProfile = _RDI->m_vehicleAnimProfile;
      if ( m_vehicleAnimProfile )
      {
        if ( m_vehicleAnimProfile > 0x13 || (v93 = 720916, !_bittest(&v93, m_vehicleAnimProfile)) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+2B0h]
            vmulss  xmm0, xmm0, cs:__real@41200000; val
            vmovaps xmm2, xmm7; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vsubss  xmm1, xmm7, xmm0
            vmulss  xmm0, xmm0, cs:__real@3ecccccd
            vaddss  xmm13, xmm1, xmm0
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+3F8h]
          vminss  xmm1, xmm0, dword ptr [rdi+360h]
          vdivss  xmm2, xmm1, cs:timeToRemoveSteering_0
          vsubss  xmm0, xmm7, xmm2; val
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmulss  xmm13, xmm0, cs:__real@3f4ccccd }
      }
    }
  }
  else
  {
    v99 = _RDI->m_vehicleAnimProfile;
    if ( v99 > 0x13 || (v100 = 720916, !_bittest(&v100, v99)) )
    {
      if ( _RDI->m_wheelInContactCount == 2 && m_contactBodyId != 0xFFFFFF )
      {
        __asm
        {
          vmovd   xmm0, dword ptr [rdi+400h]
          vmovd   xmm1, ebp
          vpcmpeqd xmm2, xmm0, xmm1
          vmovss  xmm1, cs:__real@3f333333
          vblendvps xmm13, xmm1, xmm13, xmm2
        }
      }
    }
  }
  __asm { vmovaps xmm11, xmm7 }
  *(double *)&_XMM0 = BgVehiclePhysicsCarBase::GetNormalSpeedRelative(_RDI);
  __asm
  {
    vcomiss xmm0, cs:threshold_2
    vmovaps xmm9, xmm0
  }
  if ( v158 )
  {
    _RBX = DCONST_DVARFLT_bg_vehSteerSlow;
    if ( !DCONST_DVARFLT_bg_vehSteerSlow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSteerSlow") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vcomiss xmm9, xmm0
      vmovaps xmm10, xmm0
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    if ( v158 )
    {
      __asm { vdivss  xmm0, xmm0, cs:threshold_2; val }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm1, cs:powfExp_0; Y
        vdivss  xmm6, xmm9, xmm10
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm0, xmm1
        vmaxss  xmm11, xmm0, xmm15
      }
    }
    else
    {
      __asm { vdivss  xmm0, xmm9, cs:threshold_2; val }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  xmm1, cs:powfExp_0; Y }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vcomiss xmm15, xmm0
        vmovaps xmm11, xmm0
      }
      if ( !(v158 | v159) )
      {
        __asm
        {
          vaddss  xmm2, xmm10, cs:RANG_0; max
          vmovaps xmm1, xmm10; min
          vmovaps xmm0, xmm9; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        v125 = DCONST_DVARFLT_bg_vehOverSteerSlow;
        __asm
        {
          vdivss  xmm1, xmm9, cs:threshold_2
          vsubss  xmm6, xmm7, xmm1
          vmovaps xmm15, xmm0
        }
        if ( !DCONST_DVARFLT_bg_vehOverSteerSlow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehOverSteerSlow") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v125);
        __asm
        {
          vmovss  xmm0, [rsp+168h+var_11C]
          vmulss  xmm0, xmm0, dword ptr [rbx+28h]
          vsubss  xmm1, xmm15, xmm10
          vdivss  xmm2, xmm1, cs:RANG_0
          vmulss  xmm6, xmm0, xmm6
          vaddss  xmm0, xmm2, xmm11; val
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmaxss  xmm11, xmm0, xmm6 }
      }
    }
    __asm { vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  }
  __asm
  {
    vmulss  xmm0, xmm14, [rsp+168h+var_124]
    vmulss  xmm1, xmm0, [rsp+168h+var_118]
    vmovss  xmm15, [rsp+168h+var_128]
    vmulss  xmm2, xmm1, xmm11
    vmulss  xmm3, xmm2, [rsp+168h+var_114]
    vmulss  xmm0, xmm3, xmm15
    vmulss  xmm2, xmm0, [rsp+168h+var_120]
  }
  v146 = _RDI->m_wheels[0].m_contactBodyId <= 0xFFFFFF;
  if ( _RDI->m_wheels[0].m_contactBodyId != 0xFFFFFF || (v146 = _RDI->m_wheels[1].m_contactBodyId <= 0xFFFFFF, _RDI->m_wheels[1].m_contactBodyId != 0xFFFFFF) )
  {
    __asm
    {
      vandps  xmm0, xmm2, xmm10
      vcomiss xmm0, xmm12
    }
    if ( !v146 )
    {
      __asm
      {
        vmulss  xmm0, xmm2, dword ptr [rdi+180h]
        vmulss  xmm1, xmm2, dword ptr [rdi+184h]
        vmovss  dword ptr [rsp+168h+impulseWs], xmm0
        vmulss  xmm0, xmm2, dword ptr [rdi+188h]
        vmovss  dword ptr [rsp+168h+impulseWs+8], xmm0
        vmovss  dword ptr [rsp+168h+impulseWs+4], xmm1
      }
      BgVehiclePhysics::AccumulateOnlyAngularImpulse(_RDI, &impulseWs, &atPointWs);
    }
  }
  __asm { vmovaps xmm6, xmm7 }
  if ( _RDI->m_wheelCount > 4 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0AB8h]
      vdivss  xmm0, xmm0, dword ptr [rdi+0A98h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm7, xmm0
      vsubss  xmm6, xmm7, xmm1
    }
    if ( _RDI->m_wheelCount - _RDI->m_wheelInContactCount >= 2 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, rdx
        vcvtsi2ss xmm0, xmm0, rcx
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm6, xmm6, xmm1
      }
    }
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 2u);
  __asm { vandps  xmm10, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  BgVehiclePhysics::ComputeVelocityLocalSpace(_RDI, &_RDI->m_angularVelocityWs, &outVelLs);
  __asm { vcomiss xmm10, xmm12 }
  if ( v158 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+0AD4h]; speed
      vcomiss xmm3, xmm12
    }
    if ( !(v158 | v159) )
    {
      __asm { vcomiss xmm8, dword ptr [rdi+0AFCh] }
      if ( !v158 )
      {
        __asm
        {
          vmovaps xmm2, xmm14; frameTime
          vxorps  xmm1, xmm1, xmm1; dst
        }
        BgVehiclePhysics::DampLerp(&outVelLs.v[2], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      }
    }
  }
  else
  {
    __asm { vmulss  xmm0, xmm9, dword ptr [rdi+0AE4h] }
    v164 = DCONST_DVARFLT_bg_vehYawMaxIncrease;
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  [rsp+168h+var_128], xmm0
    }
    if ( !DCONST_DVARFLT_bg_vehYawMaxIncrease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehYawMaxIncrease") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v164);
    __asm
    {
      vmovss  xmm1, [rsp+168h+var_110]
      vcomiss xmm1, xmm12
      vmulss  xmm0, xmm9, dword ptr [rbx+28h]
      vaddss  xmm7, xmm0, xmm7
    }
    if ( v166 )
    {
      __asm { vmovss  xmm4, dword ptr [rdi+0AC8h] }
    }
    else
    {
      _RBX = DCONST_DVARFLT_bg_vehMaxYawSpeedHB;
      if ( !DCONST_DVARFLT_bg_vehMaxYawSpeedHB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMaxYawSpeedHB") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm4, dword ptr [rbx+28h] }
    }
    __asm
    {
      vcomiss xmm8, dword ptr [rdi+0AFCh]
      vmovss  xmm5, [rsp+168h+var_124]
      vmulss  xmm0, xmm5, [rsp+168h+var_10C]
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, xmm11
      vmulss  xmm3, xmm2, xmm13
      vmulss  xmm0, xmm3, xmm10
      vmulss  xmm1, xmm0, xmm15
      vmulss  xmm2, xmm1, [rsp+168h+var_120]
      vmulss  xmm0, xmm14, dword ptr [rdi+0AE0h]
      vmulss  xmm3, xmm2, xmm7
      vmulss  xmm2, xmm3, xmm4
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; max
      vmulss  xmm1, xmm0, xmm5
      vmulss  xmm6, xmm1, [rsp+168h+var_128]
    }
    if ( v166 )
    {
      __asm { vmovd   xmm1, r12d }
      _EAX = _RDI->IsInAir(_RDI);
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3f4ccccd
        vmovss  xmm1, cs:__real@3ecccccd
        vblendvps xmm0, xmm1, xmm0, xmm2
        vmulss  xmm2, xmm0, xmm6
        vaddss  xmm2, xmm2, dword ptr [rsp+168h+outVelLs+8]
        vmovss  dword ptr [rsp+168h+outVelLs+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
        vaddss  xmm0, xmm6, dword ptr [rdi+0AF8h]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rsp+168h+outVelLs+8], xmm0 }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+168h+outVelLs+8]
    vmovss  dword ptr [rdi+0AF8h], xmm0
  }
  BgVehiclePhysics::ComputeVelocityWorldSpace(_RDI, &outVelLs, &_RDI->m_angularVelocityWs);
  _R11 = &v222;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
BgVehiclePhysicsCarBase::ApplySteeringWithFlatTire
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplySteeringWithFlatTire(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v24; 
  __int32 v25; 
  bool v90; 
  bool IsReversing; 
  unsigned int m_contactBodyId; 
  const dvar_t *v102; 
  unsigned int v105; 
  int v111; 
  unsigned int v117; 
  int v118; 
  char v122; 
  const dvar_t *v140; 
  bool v164; 
  const dvar_t *v181; 
  bool v186; 
  bool v187; 
  bool v211; 
  bool v212; 
  bool v216; 
  bool v217; 
  vec3_t atPointWs; 
  vec3_t outVelLs; 
  vec3_t impulseWs; 
  char v293; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm0, dword ptr [rcx+0AFCh]
    vmovss  [rsp+1D0h+var_188], xmm1
    vsubss  xmm1, xmm0, xmm1
    vxorps  xmm8, xmm8, xmm8
  }
  _EDI = 0;
  _RBX = this;
  __asm
  {
    vcomiss xmm1, xmm8
    vmovss  dword ptr [rcx+0AFCh], xmm1
  }
  this->m_steering.m_durationToControl = 0.0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+0ABCh]
    vmovups ymm1, ymmword ptr [rcx+0ADCh]
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmmword ptr [rsp+1D0h+var_78+8], xmm10
    vmovups [rbp+0D0h+var_150], ymm0
    vmovsd  xmm0, qword ptr [rcx+0AFCh]
  }
  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  __asm
  {
    vmovaps [rsp+1D0h+var_88+8], xmm11
    vmovaps [rsp+1D0h+var_98+8], xmm12
    vmovups [rbp+0D0h+var_130], ymm1
    vmovsd  [rbp+0D0h+var_110], xmm0
  }
  if ( m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
  {
    __asm
    {
      vmovss  xmm10, cs:__real@40800000
      vmovss  xmm0, cs:__real@40666666
      vmovss  xmm11, cs:__real@3fcccccd
      vmovss  [rsp+1D0h+var_18C], xmm0
      vmovaps xmm9, xmm10
    }
    goto LABEL_10;
  }
  __asm { vmovss  xmm9, dword ptr [rbp+0D0h+var_150+10h] }
  v24 = m_vehicleAnimProfile - 1;
  if ( !v24 )
  {
    __asm
    {
      vmovss  xmm14, cs:__real@40400000
      vmovss  xmm11, cs:__real@3fe66666
      vmovss  xmm6, dword ptr [rbp+0D0h+var_150+14h]
      vmovss  xmm12, dword ptr [rbp+0D0h+var_150+0Ch]
      vmovss  [rsp+1D0h+var_18C], xmm14
      vmovaps xmm10, xmm7
    }
    goto LABEL_11;
  }
  v25 = v24 - 10;
  if ( !v25 )
  {
    __asm
    {
      vmovss  xmm14, cs:__real@3fb33333
      vmovss  xmm11, cs:__real@3fd9999a
      vmovss  xmm10, dword ptr [rbp+0D0h+var_150+18h]
      vmovss  [rsp+1D0h+var_18C], xmm14
    }
LABEL_10:
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovaps xmm12, xmm7
    }
    goto LABEL_11;
  }
  __asm { vmovss  xmm6, dword ptr [rbp+0D0h+var_150+14h] }
  if ( v25 == 8 )
  {
    __asm
    {
      vmovss  xmm14, cs:__real@40666666
      vmovss  xmm12, cs:__real@3fb33333
      vmovss  xmm10, cs:__real@40000000
      vmovss  xmm11, cs:__real@402ccccd
      vmovss  [rsp+1D0h+var_18C], xmm14
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm14, dword ptr [rbp+0D0h+var_130+4]
      vmovss  xmm11, dword ptr [rbp+0D0h+var_130+8]
      vmovss  xmm10, dword ptr [rbp+0D0h+var_150+18h]
      vmovss  xmm12, dword ptr [rbp+0D0h+var_150+0Ch]
      vmovss  [rsp+1D0h+var_18C], xmm14
    }
  }
LABEL_11:
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 7u);
  __asm
  {
    vmovss  xmm13, cs:__real@3f000000
    vmovss  xmm1, dword ptr [rbx+2FCh]
    vaddss  xmm2, xmm1, dword ptr [rbx+394h]
    vmulss  xmm1, xmm9, dword ptr [rbx+174h]
    vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm15, cs:__real@3a83126f
    vandps  xmm0, xmm0, xmm14
    vmulss  xmm3, xmm2, xmm13
    vaddss  xmm4, xmm3, xmm1
    vmovss  [rsp+1D0h+var_180], xmm0
    vmovss  xmm0, dword ptr [rbx+300h]
    vaddss  xmm1, xmm0, dword ptr [rbx+398h]
    vmulss  xmm0, xmm9, dword ptr [rbx+178h]
    vmulss  xmm2, xmm1, xmm13
    vmovss  xmm1, dword ptr [rbx+304h]
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm0, xmm1, dword ptr [rbx+39Ch]
    vmulss  xmm1, xmm9, dword ptr [rbx+17Ch]
    vmulss  xmm2, xmm0, xmm13
    vmovss  xmm0, [rsp+1D0h+var_180]
    vcomiss xmm0, xmm15
    vaddss  xmm5, xmm2, xmm1
    vmovss  dword ptr [rbp+0D0h+atPointWs+8], xmm5
    vmovss  dword ptr [rbp+0D0h+atPointWs], xmm4
    vmovss  dword ptr [rbp+0D0h+atPointWs+4], xmm3
  }
  if ( v122 )
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+18Ch]
      vaddss  xmm1, xmm0, xmm4
      vmulss  xmm0, xmm6, dword ptr [rbx+190h]
      vmovss  dword ptr [rbp+0D0h+atPointWs], xmm1
      vaddss  xmm1, xmm0, xmm3
      vmulss  xmm0, xmm6, dword ptr [rbx+194h]
      vmovss  dword ptr [rbp+0D0h+atPointWs+4], xmm1
      vaddss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rbp+0D0h+atPointWs+8], xmm1
    }
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+0D0h+var_150]
    vmulss  xmm2, xmm1, cs:__real@44c1c01a
    vmovss  xmm3, dword ptr [rbp+0D0h+var_130]
    vmulss  xmm1, xmm3, [rsp+1D0h+var_180]
    vmovss  xmm9, dword ptr [rbp+0D0h+var_130+14h]
    vandps  xmm0, xmm0, xmm14
    vmovss  [rsp+1D0h+var_184], xmm0
    vandps  xmm6, xmm9, xmm14
    vdivss  xmm14, xmm7, dword ptr [rbp+0D0h+var_150+4]
    vmulss  xmm0, xmm14, xmm6
    vmovss  [rsp+1D0h+var_160], xmm0
    vmulss  xmm0, xmm2, cs:FIXED_STEERING_FOCE_MULT
    vmovss  [rsp+1D0h+var_164], xmm0
    vaddss  xmm0, xmm1, xmm7
    vmovss  [rsp+1D0h+var_168], xmm0
    vmovd   xmm1, edi
  }
  _EAX = BgVehiclePhysicsGround::IsBraking(_RBX);
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, dword ptr [rbx+1A4h]
    vblendvps xmm0, xmm13, xmm7, xmm2
    vmulss  xmm2, xmm1, dword ptr [rbx+174h]
    vmovss  xmm13, cs:__real@3e4ccccd
    vmovss  [rsp+1D0h+var_16C], xmm0
    vmovss  xmm0, dword ptr [rbx+178h]
    vmulss  xmm3, xmm0, dword ptr [rbx+1A8h]
    vmovss  xmm0, dword ptr [rbx+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+1ACh]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1
    vmovss  [rsp+1D0h+var_17C], xmm0
    vmovss  xmm0, cs:__real@bf800000
    vcmpless xmm1, xmm8, xmm9
    vblendvps xmm0, xmm0, xmm7, xmm1
    vmovss  [rsp+1D0h+var_178], xmm0
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  v90 = !_RBX->m_flatTire;
  if ( _RBX->m_flatTire && (IsReversing = BgVehiclePhysicsGround::IsReversing(_RBX), v90 = !IsReversing, IsReversing) )
    __asm { vmovss  [rsp+1D0h+var_174], xmm13 }
  else
    __asm { vmovss  [rsp+1D0h+var_174], xmm7 }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0D0h+var_130+0Ch]
    vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, xmm15
  }
  if ( !v90 )
  {
    __asm
    {
      vcomiss xmm6, xmm15
      vmulss  xmm0, xmm0, xmm9
      vcomiss xmm0, xmm8
    }
  }
  __asm { vmovss  [rsp+1D0h+var_170], xmm7 }
  m_contactBodyId = _RBX->m_wheels[0].m_contactBodyId;
  __asm { vmovss  xmm3, cs:__real@3f333333 }
  _ER14 = 0xFFFFFF;
  __asm
  {
    vmovss  [rsp+1D0h+var_190], xmm7
    vmovaps xmm6, xmm7
  }
  if ( m_contactBodyId == 0xFFFFFF && _RBX->m_wheels[1].m_contactBodyId == 0xFFFFFF )
  {
    if ( _RBX->IsInAir(_RBX) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+2B0h]
        vmulss  xmm0, xmm0, cs:__real@40d55555; val
        vmovaps xmm2, xmm7; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      v102 = DCONST_DVARFLT_bg_vehAirSteerFac;
      __asm { vmovaps xmm6, xmm0 }
      if ( !DCONST_DVARFLT_bg_vehAirSteerFac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAirSteerFac") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v102);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rdi+28h]
        vsubss  xmm0, xmm7, xmm6
        vaddss  xmm6, xmm1, xmm0
        vmovss  [rsp+1D0h+var_190], xmm6
      }
    }
    else
    {
      v105 = _RBX->m_vehicleAnimProfile;
      if ( v105 )
      {
        if ( v105 > 0x13 || (v111 = 720916, !_bittest(&v111, v105)) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+2B0h]
            vmulss  xmm0, xmm0, cs:__real@41200000; val
            vmovaps xmm2, xmm7; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vsubss  xmm1, xmm7, xmm0
            vmulss  xmm0, xmm0, cs:__real@3ecccccd
            vaddss  xmm0, xmm1, xmm0
            vmovss  [rsp+1D0h+var_190], xmm0
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+3F8h]
          vminss  xmm1, xmm0, dword ptr [rbx+360h]
          vdivss  xmm2, xmm1, cs:timeToRemoveSteering
          vsubss  xmm0, xmm7, xmm2; val
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm6, xmm0, cs:__real@3f4ccccd
          vmovss  [rsp+1D0h+var_190], xmm6
        }
      }
    }
  }
  else
  {
    v117 = _RBX->m_vehicleAnimProfile;
    if ( v117 > 0x13 || (v118 = 720916, !_bittest(&v118, v117)) )
    {
      if ( _RBX->m_wheelInContactCount == 2 && m_contactBodyId != 0xFFFFFF )
      {
        __asm
        {
          vmovd   xmm0, dword ptr [rbx+400h]
          vmovd   xmm1, r14d
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm3, xmm6, xmm2
          vmovss  [rsp+1D0h+var_190], xmm0
        }
      }
    }
  }
  __asm { vmovaps xmm15, xmm7 }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RBX);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovss  xmm0, cs:threshold_1
    vcomiss xmm9, xmm0
  }
  if ( v122 )
  {
    __asm
    {
      vcomiss xmm9, xmm13
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    if ( v122 )
    {
      __asm { vdivss  xmm0, xmm13, xmm0; val }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  xmm1, cs:powfExp; Y }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm9, xmm9
        vmulss  xmm0, xmm0, xmm1
        vmulss  xmm2, xmm0, cs:__real@41c80000
        vmaxss  xmm15, xmm2, [rsp+1D0h+var_184]
      }
    }
    else
    {
      __asm { vdivss  xmm0, xmm9, xmm0; val }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  xmm1, cs:powfExp; Y }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm3, [rsp+1D0h+var_184]
        vcomiss xmm3, xmm0
        vmovaps xmm15, xmm0
      }
      if ( !(v122 | v217) )
      {
        __asm
        {
          vaddss  xmm2, xmm13, cs:RANG; max
          vmovaps xmm1, xmm13; min
          vmovaps xmm0, xmm9; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        v140 = DCONST_DVARFLT_bg_vehOverSteerSlow;
        __asm
        {
          vdivss  xmm1, xmm9, cs:threshold_1
          vsubss  xmm6, xmm7, xmm1
          vmovaps xmm14, xmm0
        }
        if ( !DCONST_DVARFLT_bg_vehOverSteerSlow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehOverSteerSlow") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v140);
        __asm
        {
          vmovss  xmm0, [rsp+1D0h+var_184]
          vmulss  xmm0, xmm0, dword ptr [rdi+28h]
          vsubss  xmm1, xmm14, xmm13
          vdivss  xmm2, xmm1, cs:RANG
          vmulss  xmm6, xmm0, xmm6
          vaddss  xmm0, xmm2, xmm15; val
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmaxss  xmm15, xmm0, xmm6 }
      }
    }
  }
  __asm
  {
    vmovss  xmm2, [rsp+1D0h+var_188]
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
    vcmpless xmm0, xmm8, [rsp+1D0h+var_17C]
    vblendvps xmm0, xmm1, xmm2, xmm0
    vmulss  xmm1, xmm0, [rsp+1D0h+var_178]
    vmulss  xmm2, xmm1, [rsp+1D0h+var_164]
    vmulss  xmm3, xmm2, xmm15
    vmulss  xmm0, xmm3, [rsp+1D0h+var_160]
    vmulss  xmm0, xmm0, [rsp+1D0h+var_16C]
    vmulss  xmm1, xmm0, [rsp+1D0h+var_168]
    vmulss  xmm2, xmm1, [rsp+1D0h+var_174]
  }
  v164 = _RBX->m_wheels[0].m_contactBodyId <= 0xFFFFFF;
  if ( _RBX->m_wheels[0].m_contactBodyId == 0xFFFFFF && (v164 = _RBX->m_wheels[1].m_contactBodyId <= 0xFFFFFF, _RBX->m_wheels[1].m_contactBodyId == 0xFFFFFF) )
  {
    __asm { vmovss  xmm14, cs:__real@3a83126f }
  }
  else
  {
    __asm
    {
      vandps  xmm0, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm14, cs:__real@3a83126f
      vcomiss xmm0, xmm14
    }
    if ( !v164 )
    {
      __asm
      {
        vmulss  xmm0, xmm2, dword ptr [rbx+180h]
        vmulss  xmm1, xmm2, dword ptr [rbx+184h]
        vmovss  dword ptr [rbp+0D0h+impulseWs], xmm0
        vmulss  xmm0, xmm2, dword ptr [rbx+188h]
        vmovss  dword ptr [rbp+0D0h+impulseWs+8], xmm0
        vmovss  dword ptr [rbp+0D0h+impulseWs+4], xmm1
      }
      BgVehiclePhysics::AccumulateOnlyAngularImpulse(_RBX, &impulseWs, &atPointWs);
    }
  }
  __asm { vmovaps xmm6, xmm7 }
  if ( _RBX->m_wheelCount > 4 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0AB8h]
      vdivss  xmm0, xmm0, dword ptr [rbx+0A98h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm7, xmm0
      vsubss  xmm6, xmm7, xmm1
    }
    if ( _RBX->m_wheelCount - _RBX->m_wheelInContactCount >= 2 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, rdx
        vcvtsi2ss xmm0, xmm0, rcx
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm6, xmm6, xmm1
      }
    }
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
  __asm { vandps  xmm13, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_angularVelocityWs, &outVelLs);
  __asm { vcomiss xmm13, xmm14 }
  if ( v122 )
  {
    if ( _RBX->m_wheels[0].m_contactBodyId != 0xFFFFFF && _RBX->m_wheels[1].m_contactBodyId != 0xFFFFFF && !_RBX->m_flatTire )
    {
      __asm { vcomiss xmm10, xmm14 }
      if ( _RBX->m_flatTire )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0D0h+var_110]
          vcomiss xmm0, xmm8
        }
        if ( !_RBX->m_flatTire )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3f000000
            vcomiss xmm0, dword ptr [rbx+2B0h]
          }
        }
      }
    }
    if ( _RBX->m_wheelInContactCount > 2 && _RBX->m_flatTire )
    {
      __asm { vmovss  xmm1, [rsp+1D0h+var_188]; deltaTime }
      *(double *)&_XMM0 = BgVehiclePhysicsCarBase::GetFlatTireSteeringDeviation(_RBX, *(float *)&_XMM1);
      __asm
      {
        vaddss  xmm0, xmm0, dword ptr [rbp+0D0h+outVelLs+8]
        vmovss  dword ptr [rbp+0D0h+outVelLs+8], xmm0
      }
    }
    goto LABEL_104;
  }
  v181 = DCONST_DVARFLT_bg_vehYawMaxIncrease;
  __asm
  {
    vmulss  xmm0, xmm11, xmm9
    vaddss  xmm11, xmm0, xmm7
  }
  if ( !DCONST_DVARFLT_bg_vehYawMaxIncrease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehYawMaxIncrease") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v181);
  __asm
  {
    vmulss  xmm0, xmm9, dword ptr [rdi+28h]
    vaddss  xmm9, xmm0, xmm7
  }
  v186 = (_RBX->m_wheels[0].m_state & 1) != 0 && _RBX->m_wheels[0].m_contactBodyId != 0xFFFFFF;
  v187 = (_RBX->m_wheels[1].m_state & 1) != 0 && _RBX->m_wheels[1].m_contactBodyId != 0xFFFFFF;
  if ( !v186 )
  {
    if ( !v187 )
    {
      __asm { vmovaps xmm10, xmm7 }
      goto LABEL_80;
    }
LABEL_79:
    __asm { vmovss  xmm10, cs:__real@3f333333 }
    goto LABEL_80;
  }
  if ( !v187 )
    goto LABEL_79;
  __asm { vmovss  xmm10, cs:__real@3eb33333 }
LABEL_80:
  __asm
  {
    vmovss  xmm0, [rsp+1D0h+var_180]
    vcomiss xmm0, xmm14
  }
  _RDI = DCONST_DVARFLT_bg_vehMaxYawSpeedHB;
  if ( !DCONST_DVARFLT_bg_vehMaxYawSpeedHB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMaxYawSpeedHB") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm12, dword ptr [rdi+28h]
    vmovss  xmm2, [rsp+1D0h+var_170]
    vcmpless xmm0, xmm8, [rsp+1D0h+var_17C]
    vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm1, xmm2, xmm4
    vblendvps xmm0, xmm1, xmm2, xmm0
    vmulss  xmm1, xmm0, [rsp+1D0h+var_178]
    vmulss  xmm2, xmm1, xmm6
    vmulss  xmm3, xmm2, xmm15
    vmulss  xmm0, xmm3, [rsp+1D0h+var_190]
    vmulss  xmm1, xmm0, xmm13
    vmulss  xmm2, xmm1, [rsp+1D0h+var_16C]
    vmulss  xmm3, xmm2, [rsp+1D0h+var_168]
    vmulss  xmm0, xmm3, xmm9
    vmulss  xmm1, xmm0, xmm12
    vmulss  xmm9, xmm1, xmm10
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm9, xmm9, xmm10
  }
  v211 = (_RBX->m_wheels[0].m_state & 1) != 0 && _RBX->m_wheels[0].m_contactBodyId != 0xFFFFFF;
  v212 = (_RBX->m_wheels[1].m_state & 1) != 0 && _RBX->m_wheels[1].m_contactBodyId != 0xFFFFFF;
  if ( !v211 )
  {
    if ( !v212 )
    {
      __asm { vmovaps xmm6, xmm7 }
      goto LABEL_97;
    }
LABEL_96:
    __asm { vmovss  xmm6, cs:__real@3d4ccccd }
    goto LABEL_97;
  }
  if ( !v212 )
    goto LABEL_96;
  __asm { vmovss  xmm6, cs:__real@38d1b717 }
LABEL_97:
  v216 = _RBX->m_vehicleType < VEH_CAR;
  v217 = _RBX->m_vehicleType == VEH_CAR;
  __asm { vxorps  xmm1, xmm1, xmm1; min }
  if ( _RBX->m_vehicleType == VEH_CAR )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0AB8h]
      vdivss  xmm0, xmm0, dword ptr [rbx+0A98h]; val
      vmovaps xmm2, xmm7; max
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
      vsubss  xmm1, xmm7, xmm0
    }
  }
  __asm
  {
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm1, xmm0, xmm2
    vmulss  xmm2, xmm1, xmm2
    vmovss  xmm1, dword ptr [rbp+0D0h+var_110+4]
    vcomiss xmm1, xmm8
    vsubss  xmm5, xmm7, xmm2
  }
  if ( !v216 && !v217 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0D0h+var_110]
      vcomiss xmm0, xmm8
    }
    if ( !v216 && !v217 )
    {
      __asm
      {
        vdivss  xmm0, xmm0, xmm1
        vsubss  xmm7, xmm7, xmm0
      }
    }
  }
  __asm
  {
    vmovss  xmm0, [rsp+1D0h+var_188]
    vmulss  xmm2, xmm0, [rsp+1D0h+var_18C]
    vcmpless xmm0, xmm8, [rsp+1D0h+var_17C]
    vxorps  xmm1, xmm2, xmm4
    vblendvps xmm0, xmm1, xmm2, xmm0
    vmulss  xmm1, xmm0, [rsp+1D0h+var_178]
    vmaxss  xmm0, xmm5, cs:__real@3e19999a
    vmulss  xmm2, xmm1, xmm11
    vmulss  xmm3, xmm2, xmm6
    vmulss  xmm4, xmm3, [rsp+1D0h+var_174]
    vmulss  xmm1, xmm4, xmm0
    vmulss  xmm5, xmm1, xmm7
    vandps  xmm2, xmm5, xmm10
    vcomiss xmm2, xmm14
  }
  if ( !v216 && !v217 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+0D0h+outVelLs+8]
      vaddss  xmm2, xmm5, xmm3
      vandps  xmm0, xmm2, xmm10
      vcmpltss xmm1, xmm0, xmm9
      vblendvps xmm0, xmm3, xmm2, xmm1
      vmovss  dword ptr [rbp+0D0h+outVelLs+8], xmm0
    }
  }
LABEL_104:
  BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &outVelLs, &_RBX->m_angularVelocityWs);
  __asm
  {
    vmovaps xmm12, [rsp+1D0h+var_98+8]
    vmovaps xmm11, [rsp+1D0h+var_88+8]
    vmovaps xmm10, xmmword ptr [rsp+1D0h+var_78+8]
  }
  _R11 = &v293;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
BgVehiclePhysicsCarBase::ApplySurfaceVelocity
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ApplySurfaceVelocity(BgVehiclePhysicsCarBase *this, double deltaTime, double _XMM2_8)
{
  unsigned int v14; 
  const dvar_t *v16; 
  __int64 v25; 
  unsigned int m_contactBodyId; 
  unsigned int v27; 
  Physics_WorldId m_worldId; 
  char v29; 
  char v30; 
  vec3_t linVel; 
  vec3_t angVel; 

  v14 = 0;
  _RBX = this;
  *(_OWORD *)this->m_surfaceLinVel.v = 0ui64;
  *(_QWORD *)&this->m_surfaceAngVel.y = 0i64;
  v16 = DVARBOOL_bg_vehSurfaceVelocity;
  if ( !DVARBOOL_bg_vehSurfaceVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSurfaceVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled && !_RBX->IsInAir(_RBX) )
  {
    __asm
    {
      vmovaps [rsp+118h+var_18], xmm6
      vmovaps [rsp+118h+var_28], xmm7
      vmovaps [rsp+118h+var_A8], xmm15
    }
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
    __asm
    {
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vxorps  xmm2, xmm2, xmm2
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm2, xmm2, rax
      vcvtsi2ss xmm1, xmm1, rcx
      vdivss  xmm2, xmm2, xmm1
      vmulss  xmm15, xmm2, xmm2
      vandps  xmm6, xmm0, xmm7
    }
    if ( _RBX->m_wheelCount )
    {
      while ( 1 )
      {
        v25 = v14;
        m_contactBodyId = _RBX->m_wheels[v25].m_contactBodyId;
        if ( m_contactBodyId != 0xFFFFFF && !Physics_IsRigidBodyStatic(_RBX->m_worldId, m_contactBodyId) )
          break;
        if ( ++v14 >= _RBX->m_wheelCount )
          goto LABEL_16;
      }
      v27 = _RBX->m_wheels[v25].m_contactBodyId;
      m_worldId = _RBX->m_worldId;
      __asm
      {
        vmovaps [rsp+118h+var_38], xmm8
        vmovaps [rsp+118h+var_48], xmm9
        vmovaps [rsp+118h+var_58], xmm10
        vmovaps [rsp+118h+var_68], xmm11
        vmovaps [rsp+118h+var_78], xmm12
        vmovaps [rsp+118h+var_88], xmm13
        vmovaps [rsp+118h+var_98], xmm14
      }
      Physics_GetRigidBodyLinAngVel(m_worldId, v27, &linVel, &angVel);
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vmovss  xmm9, dword ptr [rsp+118h+linVel]
        vmovss  xmm10, dword ptr [rsp+118h+linVel+4]
        vmovss  xmm11, dword ptr [rsp+118h+linVel+8]
        vmulss  xmm14, xmm6, cs:__real@3c23d70a
        vmulss  xmm1, xmm9, xmm9
        vmulss  xmm0, xmm10, xmm10
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm11, xmm11
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
        vdivss  xmm1, xmm8, xmm0
        vxorps  xmm12, xmm12, xmm12
        vcomiss xmm3, xmm12
        vmulss  xmm2, xmm9, xmm1
        vmulss  xmm4, xmm10, xmm1
        vmulss  xmm5, xmm11, xmm1
        vsubss  xmm13, xmm8, xmm6
      }
      if ( !(v29 | v30) )
      {
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [rbx+174h]
          vmulss  xmm1, xmm4, dword ptr [rbx+178h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, dword ptr [rbx+17Ch]
          vaddss  xmm0, xmm2, xmm1
          vandps  xmm0, xmm0, xmm7
          vsubss  xmm0, xmm8, xmm0; val
          vmovaps xmm2, xmm8; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm1, xmm13, cs:__real@3ee66666
          vaddss  xmm2, xmm1, xmm14
          vmulss  xmm3, xmm2, xmm15
          vmulss  xmm4, xmm0, xmm3
          vsubss  xmm2, xmm8, xmm4
          vmulss  xmm0, xmm2, dword ptr [rbx+1A4h]
          vmulss  xmm1, xmm9, xmm4
          vaddss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rbx+1A4h], xmm1
          vmulss  xmm2, xmm2, dword ptr [rbx+1A8h]
          vmulss  xmm0, xmm10, xmm4
          vaddss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rbx+1A8h], xmm1
        }
      }
      __asm
      {
        vmovss  xmm5, dword ptr [rsp+118h+angVel]
        vmovss  xmm6, dword ptr [rsp+118h+angVel+4]
        vmovss  xmm7, dword ptr [rsp+118h+angVel+8]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, xmm12
        vmovaps xmm12, [rsp+118h+var_78]
      }
      if ( !(v29 | v30) )
      {
        __asm
        {
          vmulss  xmm0, xmm13, cs:__real@3eb33333
          vaddss  xmm1, xmm0, xmm14
          vmulss  xmm4, xmm1, xmm15
          vsubss  xmm3, xmm8, xmm4
          vmulss  xmm1, xmm3, dword ptr [rbx+1B0h]
          vmulss  xmm0, xmm5, xmm4
          vaddss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rbx+1B0h], xmm1
          vmulss  xmm2, xmm3, dword ptr [rbx+1B4h]
          vmulss  xmm0, xmm6, xmm4
          vaddss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rbx+1B4h], xmm1
          vmulss  xmm2, xmm3, dword ptr [rbx+1B8h]
          vmulss  xmm0, xmm7, xmm4
          vaddss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rbx+1B8h], xmm1
        }
      }
      __asm
      {
        vmovaps xmm14, [rsp+118h+var_98]
        vmovaps xmm13, [rsp+118h+var_88]
        vmovaps xmm8, [rsp+118h+var_38]
        vmovss  dword ptr [rbx+0CD8h], xmm9
        vmovaps xmm9, [rsp+118h+var_48]
        vmovss  dword ptr [rbx+0CDCh], xmm10
        vmovaps xmm10, [rsp+118h+var_58]
        vmovss  dword ptr [rbx+0CE0h], xmm11
        vmovaps xmm11, [rsp+118h+var_68]
        vmovss  dword ptr [rbx+0CE4h], xmm5
        vmovss  dword ptr [rbx+0CE8h], xmm6
        vmovss  dword ptr [rbx+0CECh], xmm7
      }
    }
LABEL_16:
    __asm
    {
      vmovaps xmm7, [rsp+118h+var_28]
      vmovaps xmm6, [rsp+118h+var_18]
      vmovaps xmm15, [rsp+118h+var_A8]
    }
  }
}

/*
==============
BgVehiclePhysicsGround::ApplySuspensionForces
==============
*/

void __fastcall BgVehiclePhysicsGround::ApplySuspensionForces(BgVehiclePhysicsGround *this, double deltaTime)
{
  char v7; 
  char v8; 
  unsigned int i; 
  __int64 v10; 

  _RBX = DCONST_DVARFLT_bg_vehSuspIntegDT;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !DCONST_DVARFLT_bg_vehSuspIntegDT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSuspIntegDT") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !(v7 | v8) )
    __asm { vminss  xmm6, xmm0, xmm6 }
  for ( i = 0; i < this->m_wheelCount; ++i )
  {
    v10 = i;
    if ( this->m_wheels[v10].m_contactBodyId != 0xFFFFFF )
    {
      __asm { vmovaps xmm1, xmm6; deltaTime }
      BgVehiclePhysicsGround::ApplySingleSuspensionForce(this, *(float *)&_XMM1, &this->m_wheels[v10]);
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
BgVehiclePhysicsGround::BlowUpTire
==============
*/
void BgVehiclePhysicsGround::BlowUpTire(BgVehiclePhysicsGround *this, int tireIndex)
{
  const dvar_t *v8; 
  __int64 v9; 
  __int64 v11; 
  bool v12; 
  unsigned int m_vehicleAnimProfile; 
  int v48; 
  hknpBodyId v54; 
  Physics_WorldId m_worldId; 
  unsigned int PhysicsBodyId; 
  __int64 v80; 
  vec3_t velWs; 
  vec3_t atPointWs; 
  vec3_t impulseWs; 
  vec3_t outVelLs; 
  hkVector4f angVel; 

  v8 = DVARBOOL_vehicle_tireblown_enabled;
  v9 = tireIndex;
  _RBX = this;
  if ( !DVARBOOL_vehicle_tireblown_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_tireblown_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && (int)v9 >= 0 && (unsigned int)v9 < _RBX->m_wheelCount )
  {
    v11 = v9;
    if ( (_RBX->m_wheels[v9].m_state & 1) == 0 )
    {
      __asm
      {
        vmovaps [rsp+138h+var_38], xmm6
        vmovaps [rsp+138h+var_48], xmm7
        vmovaps [rsp+138h+var_58], xmm8
        vmovaps [rsp+138h+var_68], xmm9
      }
      _RBX->m_flatTire = 1;
      v12 = (_RBX->m_wheels[v11].m_state & 1) == 0;
      __asm
      {
        vmovaps [rsp+138h+var_78], xmm10
        vmovaps [rsp+138h+var_88], xmm11
      }
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 28, ASSERT_TYPE_ASSERT, "(!IsFlatTire())", (const char *)&queryFormat, "!IsFlatTire()") )
        __debugbreak();
      __asm { vmovss  xmm1, cs:__real@41200000; minTimeDynamic }
      _RBX->m_wheels[v11].m_state |= 1u;
      BgVehiclePhysics::SetDynamic(_RBX, *(float *)&_XMM1);
      _RBP = DCONST_DVARFLT_bg_vehFlatTireImpK;
      if ( !DCONST_DVARFLT_bg_vehFlatTireImpK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFlatTireImpK") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBP);
      __asm
      {
        vmovss  xmm0, cs:__real@3e800000
        vmovss  xmm8, cs:__real@3f000000
        vcmpltss xmm1, xmm8, dword ptr [rbx+0C88h]
        vmovss  xmm7, cs:__real@3f800000
        vmovss  xmm9, dword ptr [rbp+28h]
        vblendvps xmm0, xmm7, xmm0, xmm1
        vmovss  [rsp+138h+var_F8], xmm0
      }
      *(double *)&_XMM0 = ((double (__fastcall *)(BGVehicles *))_RBX->m_vehicleSystem->PhysicsGetLastStepTime)(_RBX->m_vehicleSystem);
      __asm { vmovaps xmm10, xmm0 }
      *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
      __asm
      {
        vmaxss  xmm1, xmm0, cs:__real@3e4ccccd
        vsubss  xmm2, xmm7, xmm1
        vmovaps xmm6, xmm0
      }
      _EDI = (int)v9 % 2;
      __asm
      {
        vmulss  xmm1, xmm2, xmm2
        vsubss  xmm0, xmm7, xmm1
        vmulss  xmm1, xmm0, xmm9
        vmulss  xmm2, xmm1, [rsp+138h+var_F8]
        vmulss  xmm3, xmm2, dword ptr [rbx+260h]
        vmulss  xmm4, xmm3, xmm10
        vmulss  xmm0, xmm4, dword ptr [rsi+rbx+314h]
        vmulss  xmm1, xmm4, dword ptr [rsi+rbx+318h]
        vmovss  dword ptr [rsp+138h+impulseWs], xmm0
        vmulss  xmm0, xmm4, dword ptr [rsi+rbx+31Ch]
        vmovss  dword ptr [rsp+138h+impulseWs+8], xmm0
        vmovss  xmm0, cs:__real@41a00000
        vmovss  dword ptr [rsp+138h+impulseWs+4], xmm1
        vmovd   xmm11, edi
        vcvtdq2ps xmm11, xmm11
        vmulss  xmm1, xmm11, cs:__real@42200000
        vsubss  xmm2, xmm0, xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+180h]
        vaddss  xmm1, xmm0, dword ptr [rsi+rbx+2FCh]
        vmulss  xmm0, xmm2, dword ptr [rbx+184h]
        vmovss  dword ptr [rsp+138h+atPointWs], xmm1
        vaddss  xmm1, xmm0, dword ptr [rsi+rbx+300h]
        vmulss  xmm0, xmm2, dword ptr [rbx+188h]
        vmovss  dword ptr [rsp+138h+atPointWs+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rsi+rbx+304h]
        vmovss  dword ptr [rsp+138h+atPointWs+8], xmm1
      }
      BgVehiclePhysics::ApplyImpulse(_RBX, &impulseWs, &atPointWs);
      m_vehicleAnimProfile = _RBX->m_vehicleAnimProfile;
      __asm { vmovaps xmm9, [rsp+138h+var_68] }
      if ( m_vehicleAnimProfile > 0x13 || (v48 = 720916, !_bittest(&v48, m_vehicleAnimProfile)) )
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm6
          vmulss  xmm1, xmm0, dword ptr [rbx+0AB8h]
          vmulss  xmm0, xmm6, cs:__real@3d4ccccd
          vaddss  xmm1, xmm1, xmm0; fricValue
        }
        BgVehiclePhysicsGround::SetCurrentFriction(_RBX, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm8, xmm6, xmm8
          vmovss  dword ptr [rbx+0B00h], xmm8
          vmovss  dword ptr [rbx+0AFCh], xmm8
          vmovss  dword ptr [rbx+0AB4h], xmm6
        }
        v54.m_serialAndIndex = BgVehiclePhysics::GetPhysicsBodyId(_RBX);
        m_worldId = _RBX->m_worldId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 292, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body AngVel when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)m_worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v80) = m_worldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 293, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body AngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v80) )
            __debugbreak();
        }
        if ( (v54.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v80) = m_worldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 294, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body AngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v80) )
            __debugbreak();
        }
        HavokPhysics_GetRigidBodyAngVel(m_worldId, v54, &angVel);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+138h+angVel.m_quad]
          vmovss  xmm1, dword ptr [rsp+138h+angVel.m_quad+4]
          vmovss  dword ptr [rsp+138h+velWs], xmm0
          vmovss  xmm0, dword ptr [rsp+138h+angVel.m_quad+8]
          vmovss  dword ptr [rsp+138h+velWs+8], xmm0
          vmovss  dword ptr [rsp+138h+velWs+4], xmm1
        }
        BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &velWs, &outVelLs);
        __asm
        {
          vmulss  xmm2, xmm6, cs:__real@42700000
          vmulss  xmm0, xmm11, xmm6
          vmulss  xmm1, xmm0, cs:__real@42f00000
          vsubss  xmm2, xmm2, xmm1
          vmulss  xmm3, xmm2, xmm10
          vaddss  xmm1, xmm3, dword ptr [rsp+138h+outVelLs+8]
          vmovss  dword ptr [rsp+138h+outVelLs+8], xmm1
        }
        BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &outVelLs, &velWs);
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RBX);
        Physics_SetRigidBodyAngVel((const Physics_WorldId)_RBX->m_worldId, PhysicsBodyId, &velWs);
        __asm
        {
          vmovss  xmm1, cs:__real@3e99999a; min
          vmovaps xmm2, xmm7; max
          vmovaps xmm0, xmm6; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm1, cs:__real@3dcccccd; min
          vmovaps xmm6, xmm0
          vmovaps xmm0, xmm8; val
          vmovaps xmm2, xmm7; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovaps xmm3, xmm6; maxScale
          vmovaps xmm2, xmm0; maxDur
        }
        BgVehiclePhysicsGround::RumbleData::Add(&_RBX->m_rumble, _RBX, *(float *)&_XMM2, *(float *)&_XMM3);
      }
      __asm
      {
        vmovaps xmm10, [rsp+138h+var_78]
        vmovaps xmm8, [rsp+138h+var_58]
        vmovaps xmm7, [rsp+138h+var_48]
        vmovaps xmm6, [rsp+138h+var_38]
        vmovaps xmm11, [rsp+138h+var_88]
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
  int result; 

  *(_QWORD *)outDamageDir->v = 0i64;
  outDamageDir->v[2] = 0.0;
  if ( dmgInfo->m_targetType == DAMAGE_SCRIPTABLE )
    return BgVehiclePhysicsGround::CalcDamage_Scriptable(this, dmgInfo, outDamageDir);
  if ( dmgInfo->m_targetType != DAMAGE_PLAYER )
    return 0;
  __asm { vcvttss2si eax, dword ptr [rdx+10h] }
  return result;
}

/*
==============
BgVehiclePhysicsGround::CalcDamage_Player
==============
*/
int BgVehiclePhysicsGround::CalcDamage_Player(BgVehiclePhysicsGround *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDmgDir)
{
  int result; 

  _RBX = dmgInfo;
  if ( dmgInfo->m_targetType == DAMAGE_PLAYER )
  {
    __asm { vcvttss2si eax, dword ptr [rdx+10h] }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1293, ASSERT_TYPE_ASSERT, "(dmgInfo.m_targetType == BgVehiclePhysicsDamageSetup::DAMAGE_PLAYER)", (const char *)&queryFormat, "dmgInfo.m_targetType == BgVehiclePhysicsDamageSetup::DAMAGE_PLAYER") )
      __debugbreak();
    __asm { vcvttss2si eax, dword ptr [rbx+10h] }
  }
  return result;
}

/*
==============
BgVehiclePhysicsGround::CalcDamage_Scriptable
==============
*/
int BgVehiclePhysicsGround::CalcDamage_Scriptable(BgVehiclePhysicsGround *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDmgDir)
{
  char v25; 
  bool v26; 
  int result; 
  vec3_t outVelLs; 

  _RBX = outDmgDir;
  _RSI = dmgInfo;
  _RDI = this;
  if ( dmgInfo->m_targetType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1246, ASSERT_TYPE_ASSERT, "(dmgInfo.m_targetType == BgVehiclePhysicsDamageSetup::DAMAGE_SCRIPTABLE)", (const char *)&queryFormat, "dmgInfo.m_targetType == BgVehiclePhysicsDamageSetup::DAMAGE_SCRIPTABLE") )
    __debugbreak();
  __asm { vmovaps [rsp+88h+var_28], xmm7 }
  if ( BgVehiclePhysics::IsDynamic(_RDI) )
  {
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    _RDX = &_RDI->m_linearVelocityWs;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+4]
      vmovss  xmm5, dword ptr [rdx]
      vmovss  xmm3, dword ptr [rdx+8]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm1, xmm2, dword ptr [rdx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdx+8]
      vmovss  dword ptr [rbx+8], xmm0
    }
    BgVehiclePhysics::ComputeVelocityLocalSpace(_RDI, &_RDI->m_linearVelocityWs, &outVelLs);
  }
  else
  {
    __asm { vmovaps [rsp+88h+var_18], xmm6 }
    v25 = 0;
    v26 = _RBX == NULL;
    if ( _RBX )
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rdi+140h]
        vmovsd  qword ptr [rbx], xmm0
      }
      _RBX->v[2] = _RDI->m_history.m_lastLinearVel.v[2];
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+4]
      vmovss  xmm4, dword ptr [rbx]
      vmovss  xmm5, dword ptr [rbx+8]
      vmovss  xmm7, cs:__real@3f800000
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovaps xmm6, [rsp+88h+var_18]
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+10h]
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm1, dword ptr [rsi+14h]
  }
  if ( v25 )
  {
    __asm { vcomiss xmm0, xmm1 }
    if ( v25 | v26 )
    {
      result = 0;
      goto LABEL_19;
    }
    if ( _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_WHOTEL )
    {
      _RBX = DCONST_DVARFLT_bg_wheelsonScriptDmgFactor;
      if ( !DCONST_DVARFLT_bg_wheelsonScriptDmgFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonScriptDmgFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmaxss  xmm7, xmm0, xmm7
        vmovss  xmm0, dword ptr [rsi+10h]
      }
    }
    __asm { vmulss  xmm0, xmm0, xmm7 }
  }
  __asm { vcvttss2si eax, xmm0 }
LABEL_19:
  __asm { vmovaps xmm7, [rsp+88h+var_28] }
  return result;
}

/*
==============
BgVehiclePhysicsCarBase::CanDampVelocities
==============
*/
char BgVehiclePhysicsCarBase::CanDampVelocities(BgVehiclePhysicsCarBase *this)
{
  unsigned int v2; 
  char v15; 
  char v16; 

  _RBX = this;
  if ( this->m_vehicleAnimProfile )
  {
    v2 = this->m_wheelCount - 1;
    if ( this->m_wheelInContactCount < v2 )
      return 0;
    __asm
    {
      vmovss  xmm0, cs:__real@40000000
      vcomiss xmm0, dword ptr [rcx+2ACh]
    }
    if ( this->m_wheelInContactCount >= v2 || this->IsInAir(this) )
      return 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm3, xmm0, dword ptr [rcx+190h]
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm2, xmm1, dword ptr [rcx+18Ch]
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm1, xmm0, dword ptr [rcx+194h]
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm2, cs:__real@3f800000; max
      vaddss  xmm0, xmm4, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vcomiss xmm0, cs:__real@3f666666 }
    if ( v15 | v16 )
      return 0;
    if ( _RBX->m_wheelInContactCount != 4 )
      return 0;
    __asm
    {
      vmovss  xmm0, cs:__real@40200000
      vcomiss xmm0, dword ptr [rbx+2B0h]
    }
    if ( _RBX->m_wheelInContactCount >= 4 )
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
  int v15; 
  int v17; 
  unsigned int PhysicsBodyId; 
  char v54; 
  char v55; 
  char v64; 
  __int64 v93; 
  unsigned int m_vehicleAnimProfile; 
  bool v107; 
  int v108; 
  BGVehicles *m_vehicleSystem; 
  char v143; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  char v149; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps [rsp+0E8h+var_98], xmm12
    vmovss  xmm0, cs:__real@3e4ccccd
    vcomiss xmm0, dword ptr [rcx+2B0h]
  }
  _RBX = this;
  _RBP = cbData;
  __asm
  {
    vmovss  xmm12, cs:__real@3f000000
    vmovss  xmm8, cs:__real@3f800000
  }
  v15 = 0;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_78], xmm10
      vmovaps [rsp+0E8h+var_88], xmm11
    }
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RBX);
    Physics_GetRigidBodyAABB(_RBX->m_worldId, PhysicsBodyId, &aabbMin, &aabbMax);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0E8h+aabbMin]
      vaddss  xmm1, xmm0, dword ptr [rsp+0E8h+aabbMax]
      vmovss  xmm0, dword ptr [rsp+0E8h+aabbMin+4]
      vmovss  xmm2, dword ptr [rbp+14h]
      vmulss  xmm3, xmm1, xmm12
      vaddss  xmm1, xmm0, dword ptr [rsp+0E8h+aabbMax+4]
      vmovss  xmm0, dword ptr [rsp+0E8h+aabbMin+8]
      vsubss  xmm6, xmm2, xmm3
      vmovss  xmm2, dword ptr [rbp+18h]
      vmulss  xmm3, xmm1, xmm12
      vaddss  xmm1, xmm0, dword ptr [rsp+0E8h+aabbMax+8]
      vsubss  xmm5, xmm2, xmm3
      vmovss  xmm2, dword ptr [rbp+1Ch]
      vmulss  xmm3, xmm1, xmm12
      vsubss  xmm4, xmm2, xmm3
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm10, xmm6, xmm1
      vmulss  xmm0, xmm10, dword ptr [rbx+18Ch]
      vmulss  xmm9, xmm5, xmm1
      vmulss  xmm11, xmm4, xmm1
      vmulss  xmm1, xmm9, dword ptr [rbx+190h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, dword ptr [rbx+194h]
      vaddss  xmm6, xmm2, xmm1
      vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
      vmovaps xmm2, xmm8; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    __asm { vcomiss xmm0, cs:__real@3edf66f3 }
    if ( v54 | v55 )
    {
      __asm { vcomiss xmm6, xmm7 }
      v17 = v54 + 4;
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm9, dword ptr [rbx+178h]
        vmulss  xmm0, xmm10, dword ptr [rbx+174h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm11, dword ptr [rbx+17Ch]
        vaddss  xmm6, xmm2, xmm1
        vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
      __asm { vcomiss xmm0, cs:__real@3f490fdb }
      if ( v64 | v55 )
      {
        __asm { vcomiss xmm6, xmm7 }
        v17 = 2;
        if ( !v64 )
          v17 = 0;
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm9, dword ptr [rbx+184h]
          vmulss  xmm0, xmm10, dword ptr [rbx+180h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm11, dword ptr [rbx+188h]
          vaddss  xmm0, xmm2, xmm1
          vcomiss xmm0, xmm7
        }
        v17 = 1;
        if ( !v64 )
          v17 = 3;
      }
    }
    __asm
    {
      vmovaps xmm10, [rsp+0E8h+var_78]
      vmovaps xmm11, [rsp+0E8h+var_88]
    }
  }
  else
  {
    v17 = 0;
  }
  _RBX->m_collisionZone = v17;
  BgVehiclePhysics::CollisionImpulseCallback(_RBX, _RBP);
  _RAX = GLOBAL_UP;
  _R14 = &_RBP->normal;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmulss  xmm2, xmm0, dword ptr [rax+4]
    vmovss  xmm0, dword ptr [rax]
    vmulss  xmm1, xmm0, dword ptr [r14]
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [r14+8]
    vmulss  xmm0, xmm2, dword ptr [rax+8]
    vaddss  xmm1, xmm3, xmm0
    vmaxss  xmm2, xmm1, xmm7
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm3, xmm0, xmm2
    vsubss  xmm1, xmm8, xmm3
    vmulss  xmm0, xmm1, cs:__real@3f99999a; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm8; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
  __asm
  {
    vmulss  xmm0, xmm0, xmm6; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RBX->m_rumble.m_duration = 0.1;
  __asm { vmovss  dword ptr [rbx+0B28h], xmm0 }
  _RBX->m_rumble.m_t = 0.1;
  LOBYTE(v15) = _RBP->bodyIds[0] == BgVehiclePhysics::GetPhysicsBodyId(_RBX);
  v93 = (__int64)_RBX->m_vehicleSystem->PhysicsGetEventSystem(_RBX->m_vehicleSystem);
  v143 = 1;
  (*(void (__fastcall **)(__int64, BgVehiclePhysicsGround *, vec3_t *, _QWORD, vec3_t *, char))(*(_QWORD *)v93 + 16i64))(v93, _RBX, &_RBP->position, (_RBP->surfaceFlagData[v15] >> 19) & 0x3F, &_RBP->normal, v143);
  BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_linearVelocityWs, &aabbMin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+aabbMin]
    vmovss  xmm1, dword ptr [rsp+0E8h+aabbMin+4]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm6, xmm3, xmm2
  }
  *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RBX);
  __asm
  {
    vmaxss  xmm1, xmm0, cs:__real@41200000
    vdivss  xmm0, xmm8, xmm1
    vsqrtss xmm2, xmm6, xmm6
    vmulss  xmm0, xmm2, xmm0; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  m_vehicleAnimProfile = _RBX->m_vehicleAnimProfile;
  __asm { vmovaps xmm9, xmm0 }
  if ( m_vehicleAnimProfile )
  {
    v107 = m_vehicleAnimProfile < 0x13;
    if ( m_vehicleAnimProfile > 0x13 || (v108 = 720916, !(v107 = _bittest(&v108, m_vehicleAnimProfile))) )
    {
      __asm { vcomiss xmm7, dword ptr [rbx+0AFCh] }
      if ( !v107 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+2CCh]
          vmovss  xmm1, dword ptr [rbx+18Ch]
          vmulss  xmm2, xmm1, dword ptr [rbx+2C8h]
          vmulss  xmm3, xmm0, dword ptr [rbx+190h]
          vmovss  xmm0, dword ptr [rbx+2D0h]
          vmulss  xmm1, xmm0, dword ptr [rbx+194h]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, xmm7
          vmovss  xmm6, cs:__real@3f59999a
          vmovaps xmm1, xmm6; minval
          vmovaps xmm0, xmm9; val
        }
        *(float *)&_XMM0 = NormalizeRange(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vsubss  xmm2, xmm8, xmm0
          vmulss  xmm3, xmm2, dword ptr [rbx+0AB8h]
          vmulss  xmm0, xmm0, xmm12
          vaddss  xmm1, xmm3, xmm0; fricValue
        }
        BgVehiclePhysicsGround::SetCurrentFriction(_RBX, *(float *)&_XMM1);
        __asm
        {
          vmovaps xmm1, xmm6; minval
          vmovaps xmm0, xmm9; val
        }
        *(float *)&_XMM0 = NormalizeRange(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm2, xmm0, cs:__real@3e99999a
          vmovaps xmm0, xmm9; val
          vmovaps xmm1, xmm6; minval
          vmovss  dword ptr [rbx+0AB4h], xmm2
        }
        *(float *)&_XMM0 = NormalizeRange(*(float *)&_XMM0, *(float *)&_XMM1);
        m_vehicleSystem = _RBX->m_vehicleSystem;
        __asm
        {
          vmovss  dword ptr [rbx+0B00h], xmm0
          vmovss  dword ptr [rbx+0AFCh], xmm0
          vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
          vmovsd  qword ptr [rsp+0E8h+aabbMin], xmm0
        }
        aabbMin.v[2] = vec3_origin.v[2];
        *(double *)&_XMM0 = ((double (__fastcall *)(BGVehicles *))m_vehicleSystem->PhysicsGetLastStepTime)(m_vehicleSystem);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCollImp, "bg_vehEnhanceSenseOfSpeedCollImp");
        __asm
        {
          vmulss  xmm1, xmm0, dword ptr [rbx+260h]
          vmulss  xmm2, xmm1, xmm9
          vmulss  xmm3, xmm2, xmm6
          vmulss  xmm0, xmm3, dword ptr [r14]
          vmulss  xmm1, xmm3, dword ptr [r14+4]
          vmovss  dword ptr [rsp+0E8h+aabbMin], xmm0
          vmovss  dword ptr [rsp+0E8h+aabbMin+4], xmm1
        }
        BgVehiclePhysics::ApplyAngularImpulse(_RBX, &aabbMin, &_RBP->position);
      }
    }
  }
  _R11 = &v149;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-80h]
  }
}

/*
==============
BgVehiclePhysicsGround::ComputeApproxHalfSize
==============
*/
void BgVehiclePhysicsGround::ComputeApproxHalfSize(BgVehiclePhysicsGround *this, vec3_t *outHalfSize)
{
  unsigned int PhysicsBodyId; 
  unsigned int m_wheelCount; 
  const dvar_t *v10; 
  const dvar_t *v33; 
  const dvar_t *v42; 
  const dvar_t *v50; 
  const dvar_t *v55; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps [rsp+0A8h+var_38], xmm7
  }
  _RBP = outHalfSize;
  __asm { vmovaps [rsp+0A8h+var_48], xmm8 }
  _RBX = this;
  PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
  Physics_GetRigidBodyAABB(_RBX->m_worldId, PhysicsBodyId, &aabbMin, &aabbMax);
  m_wheelCount = _RBX->m_wheelCount;
  __asm { vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  if ( m_wheelCount <= 2 )
  {
    __asm { vmovss  xmm0, dword ptr [rsp+0A8h+aabbMax] }
    v42 = DCONST_DVARFLT_bg_vehFxKFLongOffs;
    __asm
    {
      vsubss  xmm6, xmm0, dword ptr [rsp+0A8h+aabbMin]
      vandps  xmm6, xmm6, xmm7
    }
    if ( !DCONST_DVARFLT_bg_vehFxKFLongOffs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFLongOffs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    __asm
    {
      vmovss  xmm8, cs:__real@3f000000
      vmovss  xmm1, dword ptr [rsp+0A8h+aabbMax+4]
      vmulss  xmm0, xmm6, xmm8
      vaddss  xmm0, xmm0, dword ptr [rbx+28h]
      vsubss  xmm6, xmm1, dword ptr [rsp+0A8h+aabbMin+4]
      vmovss  dword ptr [rbp+0], xmm0
    }
    v50 = DCONST_DVARFLT_bg_vehFxKFWidthOffs;
    __asm { vandps  xmm6, xmm6, xmm7 }
    if ( !DCONST_DVARFLT_bg_vehFxKFWidthOffs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFWidthOffs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    __asm { vmulss  xmm0, xmm6, xmm8 }
  }
  else
  {
    v10 = DCONST_DVARFLT_bg_vehFxKFLongOffs;
    _RAX = 152i64 * (m_wheelCount - 2);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+2E4h]
      vsubss  xmm3, xmm0, dword ptr [rbx+2E4h]
      vmovss  xmm1, dword ptr [rax+rbx+2E8h]
      vsubss  xmm2, xmm1, dword ptr [rbx+2E8h]
      vmovss  xmm0, dword ptr [rax+rbx+2ECh]
      vsubss  xmm4, xmm0, dword ptr [rbx+2ECh]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm8, xmm2, xmm2
    }
    if ( !DCONST_DVARFLT_bg_vehFxKFLongOffs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFLongOffs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    __asm
    {
      vmovss  xmm6, cs:__real@3f000000
      vmulss  xmm0, xmm8, xmm6
      vaddss  xmm0, xmm0, dword ptr [r14+28h]
      vmovss  dword ptr [rbp+0], xmm0
      vmovss  xmm0, dword ptr [rbx+37Ch]
      vsubss  xmm3, xmm0, dword ptr [rbx+2E4h]
      vmovss  xmm1, dword ptr [rbx+380h]
      vsubss  xmm2, xmm1, dword ptr [rbx+2E8h]
      vmovss  xmm0, dword ptr [rbx+384h]
      vsubss  xmm4, xmm0, dword ptr [rbx+2ECh]
    }
    v33 = DCONST_DVARFLT_bg_vehFxKFWidthOffs;
    __asm
    {
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm8, xmm2, xmm2
    }
    if ( !DCONST_DVARFLT_bg_vehFxKFWidthOffs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFWidthOffs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    __asm { vmulss  xmm0, xmm8, xmm6 }
  }
  __asm
  {
    vaddss  xmm1, xmm0, dword ptr [rbx+28h]
    vmovss  dword ptr [rbp+4], xmm1
    vmovss  xmm0, dword ptr [rsp+0A8h+aabbMax+8]
    vsubss  xmm6, xmm0, dword ptr [rsp+0A8h+aabbMin+8]
  }
  v55 = DCONST_DVARFLT_bg_vehFxKFHeightFac;
  __asm
  {
    vmovaps xmm8, [rsp+0A8h+var_48]
    vandps  xmm6, xmm6, xmm7
    vmovaps xmm7, [rsp+0A8h+var_38]
  }
  if ( !DCONST_DVARFLT_bg_vehFxKFHeightFac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFHeightFac") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v55);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbx+28h]
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm6, [rsp+0A8h+var_28]
  }
}

/*
==============
BgVehiclePhysicsGround::ComputeAverageWheelValues
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeAverageWheelValues(BgVehiclePhysicsGround *this, double _XMM1_8, double _XMM2_8)
{
  bool v10; 
  unsigned int m_wheelCount; 
  int v13; 
  unsigned int v14; 
  int v23; 
  void *retaddr; 

  _RAX = &retaddr;
  v10 = this->m_wheelCount == 0;
  _RDI = this;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 2104, ASSERT_TYPE_ASSERT, "(m_wheelCount > 0)", (const char *)&queryFormat, "m_wheelCount > 0") )
    __debugbreak();
  m_wheelCount = _RDI->m_wheelCount;
  v13 = 0;
  *(_QWORD *)&_RDI->m_avgSpinSpeed = 0i64;
  v14 = 0;
  _RDI->m_avgBlockRatio = 0.0;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm4, xmm4, xmm4
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm1, xmm1, xmm1
  }
  if ( m_wheelCount )
  {
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm8
      vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+78h+var_48], xmm9
      vmovss  xmm9, cs:__real@3a83126f
    }
    do
    {
      _RBX = 152i64 * v14;
      v23 = v13 + 1;
      __asm
      {
        vmovaps xmm2, xmm7; max
        vmovaps xmm1, xmm6; min
        vmovss  xmm0, dword ptr [rbx+rdi+348h]
        vcomiss xmm0, xmm9
        vmovss  xmm0, dword ptr [rbx+rdi+354h]
        vandps  xmm0, xmm0, xmm8
        vaddss  xmm0, xmm0, dword ptr [rdi+0C7Ch]
        vmovss  dword ptr [rdi+0C7Ch], xmm0
        vmovss  xmm0, dword ptr [rbx+rdi+358h]; val
      }
      if ( (152 * (unsigned __int128)v14) >> 64 != 0 || v10 )
        v23 = v13;
      v13 = v23;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vaddss  xmm2, xmm0, dword ptr [rdi+0C80h]
        vmovss  dword ptr [rdi+0C80h], xmm2
        vmovss  xmm0, dword ptr [rbx+rdi+35Ch]
        vaddss  xmm1, xmm0, dword ptr [rdi+0C84h]
        vmovss  dword ptr [rdi+0C84h], xmm1
      }
      ++v14;
    }
    while ( v14 < _RDI->m_wheelCount );
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+0C7Ch]
      vmovaps xmm9, [rsp+78h+var_48]
      vmovaps xmm8, [rsp+78h+var_38]
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm3, xmm7, xmm0
    vmovaps xmm7, [rsp+78h+var_28]
    vmulss  xmm0, xmm4, xmm3
    vmovss  dword ptr [rdi+0C7Ch], xmm0
  }
  if ( v13 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm6, xmm2, xmm0
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi+0C80h], xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmulss  xmm0, xmm1, xmm3
    vmovss  dword ptr [rdi+0C84h], xmm0
  }
}

/*
==============
BgVehiclePhysicsGround::Steering::ComputeAxis
==============
*/
void BgVehiclePhysicsGround::Steering::ComputeAxis(BgVehiclePhysicsGround::Steering *this, const BgVehiclePhysicsGround *vehicle, unsigned int wheelIndex, vec3_t *forwardWs, vec3_t *sideWs)
{
  bool v11; 
  bool v12; 
  vec3_t out; 
  tmat33_t<vec3_t> mat; 

  _RBX = sideWs;
  _RDI = forwardWs;
  _R15 = this;
  if ( !forwardWs && !sideWs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 263, ASSERT_TYPE_ASSERT, "(forwardWs != nullptr || sideWs != nullptr)", (const char *)&queryFormat, "forwardWs != nullptr || sideWs != nullptr") )
    __debugbreak();
  BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehicle, wheelIndex);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+34h]
    vxorps  xmm3, xmm3, xmm3
    vmulss  xmm1, xmm0, dword ptr [rax+74h]
    vmulss  xmm2, xmm1, [rsp+0A8h+yawMult]
    vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm0, xmm3
  }
  if ( v11 )
  {
    v11 = wheelIndex == 0;
    v12 = wheelIndex == 1;
    if ( wheelIndex == 1 )
    {
LABEL_10:
      __asm { vmulss  xmm0, xmm0, [rsp+0A8h+ackRatio]; val }
      goto LABEL_11;
    }
    __asm { vcomiss xmm0, xmm3 }
  }
  if ( !v11 && !v12 && !wheelIndex )
    goto LABEL_10;
LABEL_11:
  __asm
  {
    vmovss  xmm2, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@c2b40000; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm1, xmm0; degrees }
  MatrixRotationZ(&mat, *(float *)&_XMM1);
  AxisTransformVec3(&mat, vehicle->m_transform.m, &out);
  if ( _RDI )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+out]
      vmovss  xmm1, dword ptr [rsp+0A8h+out+4]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rsp+0A8h+out+8]
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
  }
  if ( sideWs )
  {
    if ( &out == sideWs && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
      __debugbreak();
    if ( &vehicle->m_transform.row2 == sideWs && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
      __debugbreak();
    __asm
    {
      vmovss  xmm2, dword ptr [rsp+0A8h+out+8]
      vmulss  xmm0, xmm2, dword ptr [rdi+4]
      vmovss  xmm4, dword ptr [rsp+0A8h+out+4]
      vmulss  xmm1, xmm4, dword ptr [rdi+8]
      vmovss  xmm3, dword ptr [rsp+0A8h+out]
      vsubss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbx], xmm1
      vmulss  xmm2, xmm2, dword ptr [rdi]
      vmulss  xmm0, xmm3, dword ptr [rdi+8]
      vsubss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm2, xmm3, dword ptr [rdi+4]
      vmulss  xmm0, xmm4, dword ptr [rdi]
      vsubss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
}

/*
==============
BgVehiclePhysicsGround::ComputeChassisVibrationNoise
==============
*/
void BgVehiclePhysicsGround::ComputeChassisVibrationNoise(BgVehiclePhysicsGround *this, int time, vec3_t *outNoiseDisp)
{
  char v16; 
  char v17; 
  int v47; 
  int v52; 
  int v53; 
  unsigned int v59; 
  bool v61; 
  double v72; 
  double v73; 
  int v74; 
  int v75; 
  vec3_t outVelLs; 

  _R12 = outNoiseDisp;
  _RBX = this;
  if ( this->m_chassisNoise.m_enabled && !this->IsInAir(this) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm
      vmovss  xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm
      vsubss  xmm3, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
      vsubss  xmm2, xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
      vmovaps [rsp+0E8h+var_48], xmm6
      vmovaps [rsp+0E8h+var_58], xmm7
      vmaxss  xmm0, xmm3, xmm2
      vcvttss2si ebp, xmm0
      vmovaps [rsp+0E8h+var_68], xmm8
      vmovaps [rsp+0E8h+var_78], xmm9
    }
    if ( _EBP <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1857, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
      __debugbreak();
    BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_angularVelocityWs, &outVelLs);
    __asm
    {
      vmovss  xmm5, cs:__real@3a83126f
      vmovss  xmm6, dword ptr [rbx+0A78h]
      vcomiss xmm6, xmm5
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vxorps  xmm8, xmm8, xmm8
    }
    if ( v16 | v17 )
    {
      __asm { vxorps  xmm3, xmm3, xmm3 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+178h]
        vmulss  xmm3, xmm0, dword ptr [rbx+1A8h]
        vmovss  xmm1, dword ptr [rbx+174h]
        vmulss  xmm2, xmm1, dword ptr [rbx+1A4h]
        vmovss  xmm0, dword ptr [rbx+17Ch]
        vmulss  xmm1, xmm0, dword ptr [rbx+1ACh]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vandps  xmm2, xmm2, xmm7
        vdivss  xmm3, xmm2, xmm6
      }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+0A7Ch]
      vcomiss xmm1, xmm5
    }
    if ( v16 | v17 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0E8h+outVelLs+8]
        vandps  xmm0, xmm0, xmm7
        vdivss  xmm1, xmm0, xmm1
      }
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+0A84h]
      vmovss  xmm7, dword ptr [rbx+0A80h]
      vcomiss xmm7, xmm6
      vmaxss  xmm9, xmm1, xmm3
    }
    if ( !(v16 | v17) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0E8h+var_B8], xmm0
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+0E8h+var_C0], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v72, v73) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm9, xmm7
      vmovaps xmm9, [rsp+0E8h+var_78]
      vminss  xmm1, xmm0, xmm6
      vmulss  xmm7, xmm1, xmm1
    }
    if ( _RBX->m_chassisNoise.m_basedOnTime )
    {
      v47 = time % _EBP;
      _EAX = time / _EBP;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+198h]
        vsubss  xmm1, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
        vmovss  xmm0, dword ptr [rbx+19Ch]
        vcvttss2si eax, xmm1
        vsubss  xmm1, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
      }
      v47 = _EAX % _EBP;
      __asm { vcvttss2si eax, xmm1 }
    }
    v52 = v47;
    v74 = v47;
    v53 = _EAX % _EBP;
    v75 = _EAX % _EBP;
    if ( _RBX->m_chassisNoise.m_reduceWhenNotControlled )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vmovss  xmm1, cs:__real@3f000000; min
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
    }
    else
    {
      __asm { vmovss  xmm6, cs:__real@3f800000 }
    }
    v59 = 0;
    if ( _RBX->m_wheelCount )
    {
      do
      {
        switch ( (_RBX->m_wheels[v59].m_surfFlags >> 19) & 0x3F )
        {
          case 2u:
          case 7u:
          case 8u:
          case 0xBu:
          case 0xFu:
          case 0x14u:
          case 0x15u:
            _RDI = DCONST_DVARFLT_bg_carHighNoiseSurf;
            if ( !DCONST_DVARFLT_bg_carHighNoiseSurf )
            {
              v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carHighNoiseSurf");
              goto LABEL_29;
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
            _RDI = DCONST_DVARFLT_bg_carMidNoiseSurf;
            if ( !DCONST_DVARFLT_bg_carMidNoiseSurf )
            {
              v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carMidNoiseSurf");
              goto LABEL_29;
            }
            break;
          default:
            _RDI = DCONST_DVARFLT_bg_carLowNoiseSurf;
            if ( !DCONST_DVARFLT_bg_carLowNoiseSurf )
            {
              v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carLowNoiseSurf");
LABEL_29:
              if ( v61 )
                __debugbreak();
            }
            break;
        }
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vmovss  xmm0, dword ptr [rdi+28h] }
        ++v59;
        __asm { vmaxss  xmm8, xmm0, xmm8 }
      }
      while ( v59 < _RBX->m_wheelCount );
      v52 = v74;
      v53 = v75;
      _R12 = outNoiseDisp;
    }
    *(double *)&_XMM0 = Physics_GetPerlinNoise2dValue(13, _EBP, v52, v53);
    __asm
    {
      vmulss  xmm1, xmm0, xmm7
      vmovaps xmm7, [rsp+0E8h+var_58]
      vmulss  xmm2, xmm1, xmm6
      vmovaps xmm6, [rsp+0E8h+var_48]
      vmulss  xmm3, xmm2, xmm8
      vmulss  xmm0, xmm3, dword ptr [rbx+0A6Ch]
      vmovaps xmm8, [rsp+0E8h+var_68]
      vmovss  dword ptr [r12], xmm0
      vmulss  xmm1, xmm3, dword ptr [rbx+0A74h]
      vmovss  dword ptr [r12+8], xmm1
      vmulss  xmm0, xmm3, dword ptr [rbx+0A70h]
      vmovss  dword ptr [r12+4], xmm0
    }
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
  char v50; 
  char v59; 
  unsigned int v60; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  _RDI = cbData;
  if ( !BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
    return 0i64;
  __asm
  {
    vmovaps [rsp+0A8h+var_18], xmm6
    vmovaps [rsp+0A8h+var_28], xmm7
    vmovaps [rsp+0A8h+var_38], xmm8
    vmovaps [rsp+0A8h+var_48], xmm9
    vmovaps [rsp+0A8h+var_58], xmm10
    vmovaps [rsp+0A8h+var_68], xmm11
  }
  PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
  Physics_GetRigidBodyAABB(this->m_worldId, PhysicsBodyId, &aabbMin, &aabbMax);
  __asm
  {
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rsp+0A8h+aabbMin]
    vaddss  xmm1, xmm0, dword ptr [rsp+0A8h+aabbMax]
    vmovss  xmm0, dword ptr [rdi+14h]
    vmovss  xmm11, cs:__real@3f800000
    vmulss  xmm2, xmm1, xmm4
    vmovss  xmm1, dword ptr [rsp+0A8h+aabbMin+4]
    vsubss  xmm7, xmm0, xmm2
    vaddss  xmm2, xmm1, dword ptr [rsp+0A8h+aabbMax+4]
    vmovss  xmm1, dword ptr [rsp+0A8h+aabbMin+8]
    vmovss  xmm0, dword ptr [rdi+18h]
    vmulss  xmm3, xmm2, xmm4
    vaddss  xmm2, xmm1, dword ptr [rsp+0A8h+aabbMax+8]
    vsubss  xmm6, xmm0, xmm3
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmulss  xmm3, xmm2, xmm4
    vsubss  xmm5, xmm0, xmm3
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
    vdivss  xmm1, xmm11, xmm0
    vmulss  xmm8, xmm7, xmm1
    vmulss  xmm0, xmm8, dword ptr [rbx+18Ch]
    vmulss  xmm9, xmm6, xmm1
    vmulss  xmm10, xmm5, xmm1
    vmulss  xmm1, xmm9, dword ptr [rbx+190h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, dword ptr [rbx+194h]
    vaddss  xmm7, xmm2, xmm1
    vandps  xmm0, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
    vmovaps xmm2, xmm11; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm { vcomiss xmm0, cs:__real@3edf66f3 }
  if ( v59 | v50 )
  {
    __asm { vcomiss xmm7, xmm6 }
    result = 4i64;
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm9, dword ptr [rbx+178h]
      vmulss  xmm0, xmm8, dword ptr [rbx+174h]
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm10, dword ptr [rbx+17Ch]
      vaddss  xmm7, xmm3, xmm1
      vandps  xmm0, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
      vmovaps xmm2, xmm11; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    __asm { vcomiss xmm0, cs:__real@3f490fdb }
    if ( v59 | v50 )
    {
      v59 = 0;
      v60 = 0;
      result = 2i64;
      __asm { vcomiss xmm7, xmm6 }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm9, dword ptr [rbx+184h]
        vmulss  xmm0, xmm8, dword ptr [rbx+180h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm10, dword ptr [rbx+188h]
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, xmm6
      }
      result = 1i64;
      v60 = 3;
    }
    if ( !v59 )
      result = v60;
  }
  __asm
  {
    vmovaps xmm10, [rsp+0A8h+var_58]
    vmovaps xmm9, [rsp+0A8h+var_48]
    vmovaps xmm8, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_28]
    vmovaps xmm6, [rsp+0A8h+var_18]
    vmovaps xmm11, [rsp+0A8h+var_68]
  }
  return result;
}

/*
==============
BgVehiclePhysicsAtvQuadNew::ComputeEngineSound
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::ComputeEngineSound(BgVehiclePhysicsAtvQuadNew *this, double deltaTime)
{
  __int64 v8; 
  bool v10; 
  VehiclePhysicsNetcodeType m_netcodeType; 
  char v35; 
  bool v36; 
  BGVehicles *m_vehicleSystem; 
  BgVehiclePhysicsRevSound::ComputeInfo info; 
  char v69; 
  int v70; 
  int v71; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+0B0h+var_50], xmm9
    vmovaps xmm9, xmm1
  }
  if ( Physics_IsPredictiveWorld(this->m_worldId) && !_RBX->m_pmoveObject )
  {
    v8 = (__int64)_RBX->m_vehicleSystem->PhysicsGetVehicleDef(_RBX->m_vehicleSystem, _RBX->m_vehicleDefIndex);
    if ( v8 )
    {
      __asm { vmovss  xmm0, dword ptr [rbx+190h] }
      v10 = !_RBX->m_playerControlled;
      info.setup = (const VehiclePhysicsRevModifier *)(v8 + 3556);
      __asm
      {
        vmovaps [rsp+0B0h+var_20], xmm6
        vmovaps [rsp+0B0h+var_30], xmm7
        vmovss  xmm7, cs:__real@3f800000
        vmulss  xmm2, xmm0, dword ptr [rax+4]
        vmovss  xmm0, dword ptr [rbx+18Ch]
        vmulss  xmm1, xmm0, dword ptr [rax]
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm2, dword ptr [rbx+194h]
        vmulss  xmm0, xmm2, dword ptr [rax+8]
        vaddss  xmm1, xmm3, xmm0
        vxorps  xmm6, xmm6, xmm6
        vmaxss  xmm0, xmm1, xmm6
        vsubss  xmm0, xmm7, xmm0
        vmovss  [rbp+57h+info.inclination], xmm0
        vmovaps [rsp+0B0h+var_40], xmm8
      }
      if ( v10 || (m_netcodeType = _RBX->m_netcodeType, (m_netcodeType & 0xFFFFFFFC) != 0) || m_netcodeType == VEH_NETCODE_SERVER_AUTH )
      {
        m_vehicleSystem = _RBX->m_vehicleSystem;
        __asm
        {
          vmovss  [rbp+57h+arg_10], xmm6
          vmovss  [rbp+57h+arg_18], xmm6
        }
        v69 = 0;
        m_vehicleSystem->PhysicsUnpackLerpStateValues(m_vehicleSystem, _RBX->m_entityNumber, (float *)&v70, (bool *)&v69, (float *)&v71);
        __asm
        {
          vmovss  xmm0, [rbp+57h+arg_10]
          vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vandps  xmm0, xmm0, xmm8
          vmovss  [rbp+57h+info.gasInput], xmm0
        }
        *(double *)&_XMM0 = BgVehiclePhysics::GetForwardSpeedOfKeyframed(_RBX);
        __asm
        {
          vcomiss xmm0, xmm6
          vmovss  xmm2, [rbp+57h+arg_18]
          vmovss  xmm1, cs:__real@3d4ccccd
          vandps  xmm2, xmm2, xmm8
          vmovss  [rbp+57h+info.avgSpinSpeed], xmm2
          vmovss  [rbp+57h+info.forwardSpeed], xmm0
          vmovss  [rbp+57h+info.avgSkidRatio], xmm1
        }
        info.isInAir = 0;
        if ( v35 )
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(_RBX);
        else
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RBX);
        __asm
        {
          vmaxss  xmm1, xmm0, cs:__real@41200000
          vmovss  xmm0, [rbp+57h+info.forwardSpeed]
          vdivss  xmm0, xmm0, xmm1
          vandps  xmm0, xmm0, xmm8; val
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        v36 = 1;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0C80h]
          vmovss  xmm1, dword ptr [rbx+0C7Ch]
          vmovss  [rbp+57h+info.avgSkidRatio], xmm0
          vmovss  xmm0, dword ptr [rbx+178h]
          vmulss  xmm3, xmm0, dword ptr [rbx+1A8h]
          vmovss  xmm0, dword ptr [rbx+17Ch]
          vmovss  [rbp+57h+info.avgSpinSpeed], xmm1
          vmovss  xmm1, dword ptr [rbx+174h]
          vmulss  xmm2, xmm1, dword ptr [rbx+1A4h]
          vmulss  xmm1, xmm0, dword ptr [rbx+1ACh]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vmovss  [rbp+57h+info.forwardSpeed], xmm2
        }
        *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
        v10 = _RBX->m_wheelInContactCount == 0;
        __asm
        {
          vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vandps  xmm0, xmm0, xmm8
          vmovss  [rbp+57h+info.gasInput], xmm0
        }
        info.isInAir = v10;
        *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RBX);
        v36 = 0;
        v35 = 0;
      }
      _RAX = info.setup;
      __asm
      {
        vmovss  [rbp+57h+info.normalSpeed], xmm0
        vmovss  xmm0, [rbp+57h+info.forwardSpeed]
        vcomiss xmm0, xmm6
      }
      if ( v35 )
        __asm { vmovss  xmm7, dword ptr [rax+2Ch] }
      else
        __asm { vmovss  xmm7, dword ptr [rax+28h] }
      *(double *)&_XMM0 = BgVehiclePhysicsGround::ComputeApproxMaxRPM(_RBX);
      __asm
      {
        vaddss  xmm1, xmm0, xmm7
        vmovss  xmm0, [rbp+57h+info.gasInput]
        vmovss  [rbp+57h+info.maxSpinSpeedRPM], xmm1
        vmaxss  xmm1, xmm0, xmm6
        vmovss  xmm0, [rbp+57h+info.forwardSpeed]
        vmovss  dword ptr [rbx+0A44h], xmm1
        vandps  xmm0, xmm0, xmm8
        vmulss  xmm1, xmm0, cs:__real@3d68ba2f; mph
      }
      info.m_applyInterpolation = v36;
      _RBX->m_revSound.m_brake = 0.0;
      BgVehiclePhysicsRevSound::SetMph(&_RBX->m_revSound, *(float *)&_XMM1);
      __asm { vmovaps xmm1, xmm9; deltaTime }
      BgVehiclePhysicsRevSound::Update(&_RBX->m_revSound, *(float *)&_XMM1, &info);
      __asm
      {
        vmovaps xmm8, [rsp+0B0h+var_40]
        vmovaps xmm7, [rsp+0B0h+var_30]
        vmovaps xmm6, [rsp+0B0h+var_20]
      }
    }
  }
  __asm { vmovaps xmm9, [rsp+0B0h+var_50] }
}

/*
==============
BgVehiclePhysicsSentryDrone::ComputeEngineSound
==============
*/
void BgVehiclePhysicsSentryDrone::ComputeEngineSound(BgVehiclePhysicsSentryDrone *this, float deltaTime)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+178h]
    vmovss  xmm1, dword ptr [rcx+174h]
    vmulss  xmm2, xmm1, dword ptr [rcx+1A4h]
    vmulss  xmm3, xmm0, dword ptr [rcx+1A8h]
    vmovss  xmm0, dword ptr [rcx+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rcx+1ACh]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm2, cs:__real@3d68ba2f; mph
  }
  _RDI = this;
  BgVehiclePhysicsRevSound::SetMph(&this->m_revSound, *(float *)&_XMM1);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 0);
  __asm { vmovss  dword ptr [rdi+0A44h], xmm0 }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 1u);
  __asm { vmovss  dword ptr [rdi+0A48h], xmm0 }
}

/*
==============
BgVehiclePhysicsTank::ComputeEngineSound
==============
*/

void __fastcall BgVehiclePhysicsTank::ComputeEngineSound(BgVehiclePhysicsTank *this, double deltaTime)
{
  __int64 v9; 
  bool v11; 
  VehiclePhysicsNetcodeType m_netcodeType; 
  bool v41; 
  BGVehicles *m_vehicleSystem; 
  char v48; 
  BgVehiclePhysicsRevSound::ComputeInfo info; 
  char v84; 
  int v85; 
  int v86; 

  _RDI = this;
  __asm
  {
    vmovaps [rsp+0C0h+var_60], xmm10
    vmovaps xmm10, xmm1
  }
  if ( Physics_IsPredictiveWorld(this->m_worldId) && !_RDI->m_pmoveObject )
  {
    v9 = (__int64)_RDI->m_vehicleSystem->PhysicsGetVehicleDef(_RDI->m_vehicleSystem, _RDI->m_vehicleDefIndex);
    if ( v9 )
    {
      __asm { vmovss  xmm0, dword ptr [rdi+190h] }
      v11 = !_RDI->m_playerControlled;
      info.setup = (const VehiclePhysicsRevModifier *)(v9 + 3556);
      __asm
      {
        vmovaps [rsp+0C0h+var_20], xmm6
        vmovaps [rsp+0C0h+var_30], xmm7
        vmovaps [rsp+0C0h+var_40], xmm8
        vmulss  xmm2, xmm0, dword ptr [rax+4]
        vmovss  xmm0, dword ptr [rdi+18Ch]
        vmulss  xmm1, xmm0, dword ptr [rax]
        vmovss  xmm8, cs:__real@3f800000
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm2, dword ptr [rdi+194h]
        vmulss  xmm0, xmm2, dword ptr [rax+8]
        vaddss  xmm1, xmm3, xmm0
        vxorps  xmm7, xmm7, xmm7
        vmaxss  xmm0, xmm1, xmm7
        vsubss  xmm0, xmm8, xmm0
        vmovss  [rbp+57h+info.inclination], xmm0
        vmovaps [rsp+0C0h+var_50], xmm9
      }
      if ( v11 || (m_netcodeType = _RDI->m_netcodeType, (m_netcodeType & 0xFFFFFFFC) != 0) || m_netcodeType == VEH_NETCODE_SERVER_AUTH )
      {
        m_vehicleSystem = _RDI->m_vehicleSystem;
        __asm
        {
          vmovss  [rbp+57h+arg_10], xmm7
          vmovss  [rbp+57h+arg_18], xmm7
        }
        v84 = 0;
        m_vehicleSystem->PhysicsUnpackLerpStateValues(m_vehicleSystem, _RDI->m_entityNumber, (float *)&v85, (bool *)&v84, (float *)&v86);
        __asm
        {
          vmovss  xmm0, [rbp+57h+arg_10]
          vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vandps  xmm0, xmm0, xmm9
          vmovss  [rbp+57h+info.gasInput], xmm0
        }
        *(double *)&_XMM0 = BgVehiclePhysics::GetForwardSpeedOfKeyframed(_RDI);
        __asm
        {
          vdivss  xmm1, xmm0, dword ptr [rdi+0A18h]
          vcomiss xmm0, xmm7
          vandps  xmm1, xmm1, xmm9
        }
        info.isInAir = 0;
        __asm
        {
          vmovss  [rbp+57h+info.forwardSpeed], xmm0
          vmovss  [rbp+57h+info.avgSpinSpeed], xmm1
        }
        if ( v48 )
        {
          BgVehiclePhysics::GetTopSpeedReverse(_RDI);
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RDI);
          __asm
          {
            vmulss  xmm2, xmm0, cs:__real@bf000000
            vmovss  xmm1, [rbp+57h+info.forwardSpeed]
            vdivss  xmm0, xmm1, xmm2; val
          }
        }
        else
        {
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RDI);
          __asm
          {
            vmaxss  xmm2, xmm0, cs:__real@41200000
            vmovss  xmm1, [rbp+57h+info.forwardSpeed]
            vdivss  xmm0, xmm1, xmm2
            vandps  xmm0, xmm0, xmm9
          }
        }
        __asm
        {
          vmovaps xmm2, xmm8; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = BgVehiclePhysicsTank::GetNormalYawSpeed(_RDI);
        v41 = 1;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+178h]
          vmulss  xmm3, xmm0, dword ptr [rdi+1A8h]
          vmovss  xmm1, dword ptr [rdi+174h]
          vmulss  xmm2, xmm1, dword ptr [rdi+1A4h]
          vmovss  xmm0, dword ptr [rdi+17Ch]
          vmulss  xmm1, xmm0, dword ptr [rdi+1ACh]
          vmovss  xmm0, dword ptr [rdi+0C7Ch]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vmovss  [rbp+57h+info.forwardSpeed], xmm2
          vmovss  [rbp+57h+info.avgSpinSpeed], xmm0
        }
        *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 4u);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 2u);
        __asm { vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
        v11 = _RDI->m_wheelInContactCount == 0;
        __asm
        {
          vandps  xmm2, xmm0, xmm9
          vandps  xmm1, xmm6, xmm9
          vcmpltss xmm2, xmm1, xmm2
          vblendvps xmm0, xmm6, xmm0, xmm2
          vmovss  [rbp+57h+info.gasInput], xmm0
          vmovss  xmm0, [rbp+57h+info.forwardSpeed]
        }
        info.isInAir = v11;
        __asm { vcomiss xmm0, xmm7 }
        *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RDI);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = BgVehiclePhysicsTank::GetNormalYawSpeed(_RDI);
        v41 = 0;
      }
      __asm
      {
        vmaxss  xmm1, xmm0, xmm6
        vdivss  xmm0, xmm1, cs:speedSkidThres; val
        vmovss  [rbp+57h+info.normalSpeed], xmm1
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm8; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, [rsp+0C0h+var_20] }
      _RAX = info.setup;
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm2, xmm1, xmm0
        vsubss  xmm3, xmm8, xmm2
        vmovss  xmm2, [rbp+57h+info.forwardSpeed]
        vsubss  xmm0, xmm8, xmm0
        vmovaps xmm8, [rsp+0C0h+var_40]
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm2, xmm7
        vmovaps xmm7, [rsp+0C0h+var_30]
        vmovss  [rbp+57h+info.avgSkidRatio], xmm1
      }
      if ( v48 )
        __asm { vmovss  xmm0, dword ptr [rax+2Ch] }
      else
        __asm { vmovss  xmm0, dword ptr [rax+28h] }
      __asm
      {
        vmovss  [rbp+57h+info.maxSpinSpeedRPM], xmm0
        vmovss  xmm0, [rbp+57h+info.gasInput]
        vandps  xmm0, xmm0, xmm9
        vandps  xmm2, xmm2, xmm9
        vmulss  xmm1, xmm2, cs:__real@3d68ba2f; mph
        vmovss  dword ptr [rdi+0A44h], xmm0
      }
      _RDI->m_revSound.m_brake = 0.0;
      info.m_applyInterpolation = v41;
      BgVehiclePhysicsRevSound::SetMph(&_RDI->m_revSound, *(float *)&_XMM1);
      __asm { vmovaps xmm1, xmm10; deltaTime }
      BgVehiclePhysicsRevSound::Update(&_RDI->m_revSound, *(float *)&_XMM1, &info);
      __asm { vmovaps xmm9, [rsp+0C0h+var_50] }
    }
  }
  __asm { vmovaps xmm10, [rsp+0C0h+var_60] }
}

/*
==============
BgVehiclePhysicsTechnical::ComputeEngineSound
==============
*/

void __fastcall BgVehiclePhysicsTechnical::ComputeEngineSound(BgVehiclePhysicsTechnical *this, double deltaTime)
{
  __int64 v8; 
  bool v9; 
  VehiclePhysicsNetcodeType m_netcodeType; 
  char v26; 
  bool v27; 
  BGVehicles *m_vehicleSystem; 
  BgVehiclePhysicsRevSound::ComputeInfo info; 
  char v60; 
  int v61; 
  int v62; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+0B0h+var_50], xmm9
    vmovaps xmm9, xmm1
  }
  if ( Physics_IsPredictiveWorld(this->m_worldId) && !_RBX->m_pmoveObject )
  {
    v8 = (__int64)_RBX->m_vehicleSystem->PhysicsGetVehicleDef(_RBX->m_vehicleSystem, _RBX->m_vehicleDefIndex);
    if ( v8 )
    {
      __asm
      {
        vmovaps [rsp+0B0h+var_20], xmm6
        vmovaps [rsp+0B0h+var_30], xmm7
        vmovaps [rsp+0B0h+var_40], xmm8
      }
      info.setup = (const VehiclePhysicsRevModifier *)(v8 + 3556);
      BgVehiclePhysics::GetUpInclination(_RBX);
      v9 = !_RBX->m_playerControlled;
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vsubss  xmm0, xmm7, xmm0
        vmovss  [rbp+57h+info.inclination], xmm0
        vxorps  xmm6, xmm6, xmm6
      }
      if ( v9 || (m_netcodeType = _RBX->m_netcodeType, (m_netcodeType & 0xFFFFFFFC) != 0) || m_netcodeType == VEH_NETCODE_SERVER_AUTH )
      {
        m_vehicleSystem = _RBX->m_vehicleSystem;
        __asm
        {
          vmovss  [rbp+57h+arg_10], xmm6
          vmovss  [rbp+57h+arg_18], xmm6
        }
        v60 = 0;
        m_vehicleSystem->PhysicsUnpackLerpStateValues(m_vehicleSystem, _RBX->m_entityNumber, (float *)&v61, (bool *)&v60, (float *)&v62);
        __asm
        {
          vmovss  xmm0, [rbp+57h+arg_10]
          vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vandps  xmm0, xmm0, xmm8
          vmovss  [rbp+57h+info.gasInput], xmm0
        }
        *(double *)&_XMM0 = BgVehiclePhysics::GetForwardSpeedOfKeyframed(_RBX);
        __asm
        {
          vcomiss xmm0, xmm6
          vmovss  xmm2, [rbp+57h+arg_18]
          vmovss  xmm1, cs:__real@3d4ccccd
          vandps  xmm2, xmm2, xmm8
          vmovss  [rbp+57h+info.avgSpinSpeed], xmm2
          vmovss  [rbp+57h+info.forwardSpeed], xmm0
          vmovss  [rbp+57h+info.avgSkidRatio], xmm1
        }
        info.isInAir = 0;
        if ( v26 )
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(_RBX);
        else
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RBX);
        __asm
        {
          vmaxss  xmm1, xmm0, cs:__real@41200000
          vmovss  xmm0, [rbp+57h+info.forwardSpeed]
          vdivss  xmm0, xmm0, xmm1
          vandps  xmm0, xmm0, xmm8; val
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        v27 = 1;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0C80h]
          vmovss  xmm1, dword ptr [rbx+0C7Ch]
          vmovss  [rbp+57h+info.avgSkidRatio], xmm0
          vmovss  xmm0, dword ptr [rbx+178h]
          vmulss  xmm3, xmm0, dword ptr [rbx+1A8h]
          vmovss  xmm0, dword ptr [rbx+17Ch]
          vmovss  [rbp+57h+info.avgSpinSpeed], xmm1
          vmovss  xmm1, dword ptr [rbx+174h]
          vmulss  xmm2, xmm1, dword ptr [rbx+1A4h]
          vmulss  xmm1, xmm0, dword ptr [rbx+1ACh]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vmovss  [rbp+57h+info.forwardSpeed], xmm2
        }
        *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
        v9 = _RBX->m_wheelInContactCount == 0;
        __asm
        {
          vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vandps  xmm0, xmm0, xmm8
          vmovss  [rbp+57h+info.gasInput], xmm0
        }
        info.isInAir = v9;
        *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RBX);
        v27 = 0;
        v26 = 0;
      }
      _RAX = info.setup;
      __asm
      {
        vmovss  [rbp+57h+info.normalSpeed], xmm0
        vmovss  xmm0, [rbp+57h+info.forwardSpeed]
        vcomiss xmm0, xmm6
      }
      if ( v26 )
        __asm { vmovss  xmm7, dword ptr [rax+2Ch] }
      else
        __asm { vmovss  xmm7, dword ptr [rax+28h] }
      *(double *)&_XMM0 = BgVehiclePhysicsGround::ComputeApproxMaxRPM(_RBX);
      __asm
      {
        vaddss  xmm1, xmm0, xmm7
        vmovss  xmm0, [rbp+57h+info.gasInput]
        vmovss  [rbp+57h+info.maxSpinSpeedRPM], xmm1
        vmaxss  xmm1, xmm0, xmm6
        vmovss  xmm0, [rbp+57h+info.forwardSpeed]
        vmovss  dword ptr [rbx+0A44h], xmm1
        vandps  xmm0, xmm0, xmm8
        vmulss  xmm1, xmm0, cs:__real@3d68ba2f; mph
      }
      info.m_applyInterpolation = v27;
      _RBX->m_revSound.m_brake = 0.0;
      BgVehiclePhysicsRevSound::SetMph(&_RBX->m_revSound, *(float *)&_XMM1);
      __asm { vmovaps xmm1, xmm9; deltaTime }
      BgVehiclePhysicsRevSound::Update(&_RBX->m_revSound, *(float *)&_XMM1, &info);
      __asm
      {
        vmovaps xmm8, [rsp+0B0h+var_40]
        vmovaps xmm7, [rsp+0B0h+var_30]
        vmovaps xmm6, [rsp+0B0h+var_20]
      }
    }
  }
  __asm { vmovaps xmm9, [rsp+0B0h+var_50] }
}

/*
==============
BgVehiclePhysicsGround::ComputeFrontalSuspensionForce
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeFrontalSuspensionForce(BgVehiclePhysicsGround *this, double deltaTime, double frontalOffset, unsigned int useIndex)
{
  _RDI = this;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm2
  }
  if ( this->m_wheelCount != 12 && !BgVehiclePhysics::IsKeyframed(this) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+0C78h]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
BgVehiclePhysicsGround::ComputeSuspensionForces
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeSuspensionForces(BgVehiclePhysicsGround *this, double deltaTime)
{
  unsigned int v5; 
  vec3_t in1; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !BgVehiclePhysics::IsKeyframed(this) )
  {
    v5 = 0;
    for ( this->m_wheelInContactCount = 0; v5 < this->m_wheelCount; ++v5 )
    {
      _RBX = &this->m_wheels[v5];
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+18h]
        vaddss  xmm1, xmm0, dword ptr [rdi+9F8h]
        vmovss  xmm2, dword ptr [rbx+1Ch]
        vaddss  xmm0, xmm2, dword ptr [rdi+9FCh]
        vmovss  dword ptr [rsp+68h+in1], xmm1
        vmovss  xmm1, dword ptr [rbx+20h]
        vaddss  xmm2, xmm1, dword ptr [rdi+0A00h]
        vmovss  dword ptr [rsp+68h+in1+8], xmm2
        vmovss  dword ptr [rsp+68h+in1+4], xmm0
      }
      MatrixTransformVector43(&in1, &this->m_transform, &this->m_wheels[v5].m_hardPointWs);
      __asm { vmovaps xmm1, xmm6; deltaTime }
      BgVehiclePhysicsGround::ComputeSuspensionForces_SingleWheel(this, *(float *)&_XMM1, _RBX, v5);
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
BgVehiclePhysicsGround::ComputeSuspensionForces_SingleWheel
==============
*/

void __fastcall BgVehiclePhysicsGround::ComputeSuspensionForces_SingleWheel(BgVehiclePhysicsGround *this, double deltaTime, BgVehiclePhysicsGround::Wheel *wheel, unsigned int windex)
{
  const dvar_t *v23; 
  const dvar_t *v88; 
  const dvar_t *v100; 
  char v103; 
  bool v104; 
  const vec3_t *v127; 
  float fmt; 
  float outRawFrac; 
  vec3_t end; 
  vec3_t start; 
  char v144; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  _RDI = wheel;
  _RBX = &wheel->m_suspDirWs;
  _RSI = this;
  __asm { vmovaps xmm9, xmm1 }
  AxisTransformVec3((const tmat33_t<vec3_t> *)&this->m_transform, &wheel->m_suspDirLs, &wheel->m_suspDirWs);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+9F8h]
    vmovss  xmm2, dword ptr [rsi+9FCh]
    vmovss  xmm8, dword ptr [rbx]
    vmovss  xmm10, dword ptr [rbx+4]
    vmovss  xmm11, dword ptr [rbx+8]
    vmovss  xmm3, dword ptr [rsi+0A00h]
  }
  v23 = DCONST_DVARFLT_bg_vehFlatTireRad;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
  }
  if ( !DCONST_DVARFLT_bg_vehFlatTireRad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFlatTireRad") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _R14 = (_DWORD *)_RDI->m_contactPointWs.v;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rbp+28h]
    vmovss  xmm0, dword ptr [rsi+0A18h]
    vsubss  xmm1, xmm0, xmm1
    vaddss  xmm2, xmm1, xmm6
    vmulss  xmm0, xmm8, xmm2
    vaddss  xmm5, xmm0, dword ptr [rdi+0Ch]
    vmulss  xmm0, xmm10, xmm2
    vaddss  xmm4, xmm0, dword ptr [rdi+10h]
    vmulss  xmm0, xmm11, xmm2
    vaddss  xmm3, xmm0, dword ptr [rdi+14h]
    vmovss  dword ptr [r14+8], xmm3
    vmovss  dword ptr [r14], xmm5
    vmovss  dword ptr [r14+4], xmm4
    vmovss  xmm0, dword ptr [rdi+10h]
    vmovss  xmm2, dword ptr [rdi+0Ch]
    vmovss  xmm1, dword ptr [rdi+14h]
  }
  _RBX = DCONST_DVARFLT_bg_vehSuspNoiseAmp;
  __asm
  {
    vmovss  dword ptr [rsp+138h+start], xmm2
    vsubss  xmm2, xmm2, xmm5
    vmovss  dword ptr [rsp+138h+start+4], xmm0
    vsubss  xmm0, xmm0, xmm4
    vmovss  dword ptr [rsp+138h+start+8], xmm1
    vmovss  dword ptr [rsp+138h+end+8], xmm3
    vsubss  xmm3, xmm1, xmm3
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm12, xmm2, xmm2
    vmovss  dword ptr [rsp+138h+end], xmm5
    vmovss  dword ptr [rsp+138h+end+4], xmm4
  }
  if ( !DCONST_DVARFLT_bg_vehSuspNoiseAmp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSuspNoiseAmp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RSI);
  _RBX = (_DWORD *)_RDI->m_contactNormalWs.v;
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rsp+138h+fmt], xmm1
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !PhysicsVehicle_WheelCast(_RSI->m_worldId, _RSI->m_entityNumber, &start, &end, fmt, &outRawFrac, &_RDI->m_contactPointWs, &_RDI->m_contactNormalWs, &_RDI->m_contactBodyId, &_RDI->m_surfFlags) )
    goto LABEL_20;
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rbx]
    vmulss  xmm1, xmm10, dword ptr [rbx+4]
    vmovss  xmm8, cs:__real@3f800000
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, dword ptr [rbx+8]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+0Ch]
    vsubss  xmm5, xmm1, dword ptr [r14]
    vmovss  xmm2, dword ptr [rdi+10h]
    vsubss  xmm3, xmm2, dword ptr [r14+4]
    vmovss  xmm1, dword ptr [rdi+14h]
    vsubss  xmm4, xmm1, dword ptr [r14+8]
    vmulss  xmm2, xmm3, xmm3
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm3, xmm3, xmm2
    vmovaps xmm10, xmm0
    vsqrtss xmm0, xmm3, xmm3
    vsubss  xmm1, xmm12, xmm0
    vdivss  xmm0, xmm1, xmm12; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm8; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm1, [rsp+138h+var_E8] }
  _EAX = _RDI->m_state & 1;
  __asm
  {
    vmovss  dword ptr [rdi+64h], xmm0
    vmovss  dword ptr [rdi+60h], xmm1
  }
  v88 = DCONST_DVARFLT_bg_vehFlatTireSuspK;
  __asm
  {
    vmovd   xmm6, eax
    vcvtdq2ps xmm6, xmm6
  }
  if ( !DCONST_DVARFLT_bg_vehFlatTireSuspK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFlatTireSuspK") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v88);
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rsi+0A04h]
    vsubss  xmm4, xmm8, xmm6
    vmulss  xmm0, xmm4, dword ptr [rsi+0A08h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, dword ptr [rdi+64h]
    vmulss  xmm0, xmm6, dword ptr [rbp+28h]
    vmulss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm0, xmm4
    vmulss  xmm6, xmm3, xmm1
  }
  *(double *)&_XMM0 = PhysicsVehicle_ComputeProjectedPointVelocity(&_RSI->m_centerOfMassWs, &_RSI->m_angularVelocityWs, &_RSI->m_linearVelocityWs, &_RDI->m_contactPointWs, &_RDI->m_contactNormalWs);
  v100 = DCONST_DVARBOOL_bg_vehSuspGlobalUp;
  __asm
  {
    vmulss  xmm0, xmm0, dword ptr [rsi+0A10h]
    vsubss  xmm6, xmm6, xmm0
  }
  if ( !DCONST_DVARBOOL_bg_vehSuspGlobalUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSuspGlobalUp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v100);
  v103 = 0;
  v104 = !v100->current.enabled;
  if ( v100->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmulss  xmm2, xmm0, dword ptr [rax+4]
      vmovss  xmm0, dword ptr [rbx]
      vmulss  xmm1, xmm0, dword ptr [rax]
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm2, dword ptr [rbx+8]
      vmulss  xmm0, xmm2, dword ptr [rax+8]
      vaddss  xmm0, xmm3, xmm0; val
      vmovaps xmm2, xmm8; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  xmm1, cs:__real@3f000000; minval }
    NormalizeRange(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vsubss  xmm2, xmm8, xmm0
      vmulss  xmm0, xmm2, xmm2
      vmulss  xmm1, xmm0, xmm2
      vmulss  xmm2, xmm1, xmm2
      vsubss  xmm8, xmm8, xmm2
    }
  }
  __asm { vcomiss xmm8, cs:__real@3a83126f }
  if ( v103 | v104 )
  {
LABEL_20:
    v127 = GLOBAL_UP;
    *(_QWORD *)&_RDI->m_suspDeformRatio = 0i64;
    _RDI->m_suspRawFraction = 1.0;
    _RDI->m_contactBodyId = 0xFFFFFF;
    _RDI->m_surfFlags = 0;
    *_RBX = LODWORD(v127->v[0]);
    _RDI->m_contactNormalWs.v[1] = v127->v[1];
    _RDI->m_contactNormalWs.v[2] = v127->v[2];
    *_R14 = LODWORD(_RDI->m_hardPointWs.v[0]);
    _RDI->m_contactPointWs.v[1] = _RDI->m_hardPointWs.v[1];
    _RDI->m_contactPointWs.v[2] = _RDI->m_hardPointWs.v[2];
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+88h]
      vcomiss xmm1, xmm7
      vaddss  xmm0, xmm9, xmm1
      vmaxss  xmm2, xmm0, xmm7
      vmovss  dword ptr [rdi+88h], xmm2
      vcomiss xmm2, xmm7
      vmovaps xmm2, xmm9
    }
    ((void (__fastcall *)(BgVehiclePhysicsGround *, _QWORD))_RSI->WheelLosesContact)(_RSI, windex);
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm10, dword ptr [rsi+260h]
      vmulss  xmm1, xmm0, xmm8
      vmulss  xmm2, xmm1, xmm6
      vmovss  xmm1, dword ptr [rdi+88h]
      vcomiss xmm1, xmm7
      vsubss  xmm0, xmm1, xmm9
      vmovss  dword ptr [rdi+68h], xmm2
      vminss  xmm2, xmm0, xmm7
      vmovss  dword ptr [rdi+88h], xmm2
      vcomiss xmm2, xmm7
    }
    if ( v103 | v104 )
    {
      __asm { vmovaps xmm2, xmm9 }
      ((void (__fastcall *)(BgVehiclePhysicsGround *, _QWORD))_RSI->WheelMakesContact)(_RSI, windex);
    }
    ++_RSI->m_wheelInContactCount;
  }
  _R11 = &v144;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
}

/*
==============
BgVehiclePhysicsCarBase::ComputeWheelAngularSpeed
==============
*/

bool __fastcall BgVehiclePhysicsCarBase::ComputeWheelAngularSpeed(BgVehiclePhysicsCarBase *this, BgVehiclePhysicsGround::Wheel *wheel, double wheelForwardSpeed, double surfFric)
{
  bool result; 
  bool IsBraking; 
  bool v33; 
  char v35; 
  unsigned int m_vehicleAnimProfile; 
  int v69; 
  char v87; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm8 }
  _RBX = wheel;
  __asm { vmovaps xmmword ptr [rax-48h], xmm9 }
  _RDI = this;
  __asm
  {
    vmovaps [rsp+0B8h+var_88], xmm14
    vmovaps [rsp+0B8h+var_98], xmm15
    vmovaps xmm15, xmm3
    vmovaps xmm14, xmm2
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  __asm
  {
    vmovss  xmm1, cs:__real@3e19999a
    vcomiss xmm1, dword ptr [rbx+88h]
    vandps  xmm8, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmm9, xmm0
  }
  if ( v35 )
  {
    __asm { vmovss  xmm0, cs:__real@3a83126f }
    *(_QWORD *)_RBX->m_lateralImpulseWs.v = 0i64;
    _RBX->m_lateralImpulseWs.v[2] = 0.0;
    __asm
    {
      vcomiss xmm0, dword ptr [rbx+70h]
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, [rsp+0B8h+deltaTime]
      vmulss  xmm2, xmm1, dword ptr [rbx+7Ch]
      vmovss  dword ptr [rbx+7Ch], xmm2
    }
    _RBX->m_skid = 1.0;
    result = 0;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_18], xmm6
      vmovaps [rsp+0B8h+var_28], xmm7
      vmovaps [rsp+0B8h+var_58], xmm10
      vmovaps [rsp+0B8h+var_78], xmm13
    }
    *(double *)&_XMM0 = BgVehiclePhysicsCarBase::GetNormalSpeedRelative(_RDI);
    __asm
    {
      vmovaps xmm13, xmm0
      vmovss  xmm6, cs:__real@3a83126f
      vmovss  xmm7, cs:__real@3f800000
    }
    _ESI = 0;
    IsBraking = BgVehiclePhysicsGround::IsBraking(_RDI);
    __asm { vxorps  xmm10, xmm10, xmm10 }
    if ( (_RBX->m_state & 1) == 0 || (v33 = _RBX->m_contactBodyId <= 0xFFFFFF, _RBX->m_contactBodyId == 0xFFFFFF) )
    {
      __asm { vmovaps [rsp+0B8h+var_68], xmm11 }
      *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 7u);
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+178h]
        vmulss  xmm4, xmm1, dword ptr [rdi+1A8h]
        vmovss  xmm2, dword ptr [rdi+1A4h]
        vmulss  xmm3, xmm2, dword ptr [rdi+174h]
        vmovss  xmm1, dword ptr [rdi+17Ch]
        vmulss  xmm2, xmm1, dword ptr [rdi+1ACh]
        vandps  xmm11, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vaddss  xmm5, xmm4, xmm3
        vaddss  xmm3, xmm5, xmm2
        vcomiss xmm3, xmm10
        vmovd   xmm1, esi
      }
      _EAX = !v35;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@3f4ccccd
        vblendvps xmm0, xmm7, xmm1, xmm2
        vmulss  xmm3, xmm0, dword ptr [rdi+0AACh]
      }
      if ( v35 )
        __asm { vcomiss xmm9, cs:__real@3f400000 }
      else
        __asm { vcomiss xmm9, cs:__real@bf400000 }
      __asm { vcomiss xmm11, xmm6 }
      if ( !v35 )
        __asm { vcomiss xmm6, dword ptr [rdi+0ADCh] }
      v33 = !IsBraking;
      if ( IsBraking )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+84h]
          vcomiss xmm0, xmm7
          vcomiss xmm13, xmm3
          vsubss  xmm0, xmm7, xmm8
        }
      }
      else
      {
        __asm { vmovaps xmm0, xmm7 }
      }
      __asm { vmovaps xmm11, [rsp+0B8h+var_68] }
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@3f000000 }
    }
    __asm
    {
      vmovss  dword ptr [rbx+84h], xmm0
      vmovss  xmm5, dword ptr [rbx+70h]
      vcomiss xmm5, xmm6
    }
    if ( !v33 && !IsBraking )
      __asm { vcomiss xmm10, dword ptr [rdi+0AA8h] }
    _RBX->m_skid = 0.0;
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vmovss  xmm0, cs:__real@bf800000
    }
    m_vehicleAnimProfile = _RDI->m_vehicleAnimProfile;
    __asm
    {
      vmovaps xmm13, [rsp+0B8h+var_78]
      vmovaps xmm6, [rsp+0B8h+var_18]
      vcmpless xmm1, xmm10, xmm9
      vmovaps xmm10, [rsp+0B8h+var_58]
      vblendvps xmm1, xmm0, xmm7, xmm1
      vmulss  xmm2, xmm1, cs:skidMaxRadSec
      vmulss  xmm4, xmm8, xmm8
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm0, xmm4
      vmulss  xmm3, xmm2, xmm3
      vmulss  xmm2, xmm3, xmm1
      vmulss  xmm4, xmm2, xmm5
    }
    if ( m_vehicleAnimProfile > 0x13 || (v69 = 720916, !_bittest(&v69, m_vehicleAnimProfile)) )
      __asm { vmovss  xmm7, dword ptr [rbx+84h] }
    __asm
    {
      vdivss  xmm0, xmm14, dword ptr [rdi+0A18h]
      vaddss  xmm1, xmm0, xmm4
      vmulss  xmm2, xmm1, xmm7
      vmovaps xmm7, [rsp+0B8h+var_28]
    }
    result = 1;
    __asm { vmovss  dword ptr [rbx+7Ch], xmm2 }
  }
  __asm { vmovaps xmm15, [rsp+0B8h+var_98] }
  _R11 = &v87;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
  return result;
}

/*
==============
BgVehiclePhysicsGround::CreatePhysics
==============
*/
bool BgVehiclePhysicsGround::CreatePhysics(BgVehiclePhysicsGround *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  int v7; 
  unsigned int v8; 
  unsigned int v10; 
  unsigned int *m_axleBodyIds; 
  int sides; 
  unsigned int PhysicsBodyId; 
  bool result; 
  float fmt; 
  float outPadding; 
  vec3_t gravity; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _R15 = vehPhysicsDef;
  _RDI = this;
  BgVehiclePhysics::CreatePhysics(this, vehPhysicsDef);
  __asm { vmovss  xmm6, dword ptr [r15+0A0h] }
  Physics_GetGravity((const Physics_WorldId)_RDI->m_worldId, &gravity);
  v7 = Vec3MajorAxis(&gravity);
  v8 = 0;
  _RBX = v7;
  *(_QWORD *)_RDI->m_extraGravityFactor.v = 0i64;
  _RDI->m_extraGravityFactor.v[2] = 0.0;
  if ( (unsigned int)v7 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v7, 3) )
    __debugbreak();
  __asm { vmovss  dword ptr [rdi+rbx*4+0A8Ch], xmm6 }
  if ( BgVehiclePhysicsGround::IsAxleBodyCreationEnabled(_RDI) )
  {
    v10 = _RDI->m_wheelCount >> 1;
    if ( v10 )
    {
      m_axleBodyIds = _RDI->m_axleBodyIds;
      __asm { vmovaps [rsp+0A8h+var_48], xmm7 }
      do
      {
        if ( (*m_axleBodyIds & 0xFFFFFF) != 0xFFFFFF )
          PhysicsVehicle_DestroyAxleRigidBody(_RDI->m_worldId, *m_axleBodyIds);
        __asm { vmovss  xmm6, dword ptr [r15+18h] }
        sides = _R15->physics_axleBodySides;
        __asm { vmovss  xmm7, dword ptr [rdi+0A18h] }
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RDI);
        __asm
        {
          vmovss  [rsp+0A8h+outPadding], xmm6
          vmovss  dword ptr [rsp+0A8h+fmt], xmm7
        }
        *m_axleBodyIds = PhysicsVehicle_CreateAxleRigidBody(_RDI->m_worldId, PhysicsBodyId, &_RDI->m_wheels[2 * v8].m_centerLs, (const vec3_t *)((char *)&_RDI->m_deferActionMgr + 304 * v8 + 752), fmt, sides, outPadding);
        ++v8;
        ++m_axleBodyIds;
      }
      while ( v8 < v10 );
      __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
      result = 1;
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
BgVehiclePhysicsTreadedBase::CreatePhysics
==============
*/
char BgVehiclePhysicsTreadedBase::CreatePhysics(BgVehiclePhysicsTreadedBase *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  int v7; 
  unsigned int v8; 
  unsigned int v10; 
  unsigned int *m_axleBodyIds; 
  int sides; 
  unsigned int PhysicsBodyId; 
  bool IsPhysicsBodyIdValid; 
  unsigned int v19; 
  float fmt; 
  float outPadding; 
  vec3_t gravity; 

  _RDI = this;
  _R15 = vehPhysicsDef;
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  BgVehiclePhysics::CreatePhysics(this, vehPhysicsDef);
  __asm { vmovss  xmm6, dword ptr [r15+0A0h] }
  Physics_GetGravity((const Physics_WorldId)_RDI->m_worldId, &gravity);
  v7 = Vec3MajorAxis(&gravity);
  v8 = 0;
  _RBX = v7;
  *(_QWORD *)_RDI->m_extraGravityFactor.v = 0i64;
  _RDI->m_extraGravityFactor.v[2] = 0.0;
  if ( (unsigned int)v7 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v7, 3) )
    __debugbreak();
  __asm { vmovss  dword ptr [rdi+rbx*4+0A8Ch], xmm6 }
  if ( BgVehiclePhysicsGround::IsAxleBodyCreationEnabled(_RDI) )
  {
    v10 = _RDI->m_wheelCount >> 1;
    if ( v10 )
    {
      m_axleBodyIds = _RDI->m_axleBodyIds;
      __asm { vmovaps [rsp+0A8h+var_48], xmm7 }
      do
      {
        if ( (*m_axleBodyIds & 0xFFFFFF) != 0xFFFFFF )
          PhysicsVehicle_DestroyAxleRigidBody(_RDI->m_worldId, *m_axleBodyIds);
        __asm { vmovss  xmm6, dword ptr [r15+18h] }
        sides = _R15->physics_axleBodySides;
        __asm { vmovss  xmm7, dword ptr [rdi+0A18h] }
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RDI);
        __asm
        {
          vmovss  [rsp+0A8h+outPadding], xmm6
          vmovss  dword ptr [rsp+0A8h+fmt], xmm7
        }
        *m_axleBodyIds = PhysicsVehicle_CreateAxleRigidBody(_RDI->m_worldId, PhysicsBodyId, &_RDI->m_wheels[2 * v8].m_centerLs, (const vec3_t *)((char *)&_RDI->m_deferActionMgr + 304 * v8 + 752), fmt, sides, outPadding);
        ++v8;
        ++m_axleBodyIds;
      }
      while ( v8 < v10 );
      __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
    }
  }
  IsPhysicsBodyIdValid = BgVehiclePhysics::IsPhysicsBodyIdValid(_RDI);
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  if ( IsPhysicsBodyIdValid )
  {
    v19 = BgVehiclePhysics::GetPhysicsBodyId(_RDI);
    PhysicsVehicle_SetSoftContacts(_RDI->m_worldId, v19, 0);
  }
  return 1;
}

/*
==============
BgVehiclePhysicsCarBase::DampVelocitiesAndStop
==============
*/

void __fastcall BgVehiclePhysicsCarBase::DampVelocitiesAndStop(BgVehiclePhysicsCarBase *this, double deltaTime, __int64 a3, double _XMM3_8)
{
  __int64 v14; 
  char v22; 
  char v23; 
  unsigned int v25; 
  char v55; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  v14 = tls_index;
  _RBX = this;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm11, xmm1
  }
  if ( dword_148BD2C08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v14) + 1772i64) )
  {
    j__Init_thread_header(&dword_148BD2C08);
    if ( dword_148BD2C08 == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@47742400
        vmovss  cs:THRESHOLD_TO_OVERDAMP_0, xmm0
      }
      j__Init_thread_footer(&dword_148BD2C08);
    }
  }
  if ( dword_148BD2C10 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v14) + 1772i64) )
  {
    j__Init_thread_header(&dword_148BD2C10);
    if ( dword_148BD2C10 == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@48742400
        vmovss  cs:THRESHOLD_TO_OVERDAMP_ONSTEER, xmm0
      }
      j__Init_thread_footer(&dword_148BD2C10);
    }
  }
  __asm
  {
    vmovaps [rsp+0A8h+var_58], xmm10
    vmovaps [rsp+0A8h+var_78], xmm12
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:__real@40000000
    vmovss  xmm8, cs:__real@3e99999a
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, cs:__real@3a83126f
    vxorps  xmm7, xmm7, xmm7
  }
  if ( v22 | v23 )
  {
    __asm { vmovss  xmm12, cs:__real@3f800000 }
    if ( _RBX->m_vehicleAnimProfile )
    {
      v25 = _RBX->m_wheelCount - 1;
      if ( _RBX->m_wheelInContactCount < v25 )
        goto LABEL_21;
      __asm { vcomiss xmm9, dword ptr [rbx+2ACh] }
      if ( _RBX->m_wheelInContactCount >= v25 || _RBX->IsInAir(_RBX) )
        goto LABEL_21;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm3, xmm0, dword ptr [rbx+190h]
        vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm2, xmm1, dword ptr [rbx+18Ch]
        vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm1, xmm0, dword ptr [rbx+194h]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm0, xmm4, xmm1; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm12; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&deltaTime, *(float *)&_XMM2);
      __asm { vcomiss xmm0, cs:__real@3f666666 }
      if ( v22 | v23 )
        goto LABEL_21;
      if ( _RBX->m_wheelInContactCount != 4 )
        goto LABEL_21;
      __asm
      {
        vmovss  xmm0, cs:__real@40200000
        vcomiss xmm0, dword ptr [rbx+2B0h]
      }
      if ( _RBX->m_wheelInContactCount >= 4 )
        goto LABEL_21;
    }
    __asm { vmovaps [rsp+0A8h+var_88], xmm13 }
    *(double *)&_XMM0 = BgVehiclePhysics::GetPlaneSpeed(_RBX);
    __asm { vmulss  xmm10, xmm0, xmm0 }
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
    __asm
    {
      vmovss  xmm1, cs:THRESHOLD_TO_REMOVE_0
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm10, xmm2
      vandps  xmm13, xmm0, xmm6
    }
    if ( v22 | v23 )
    {
      __asm
      {
        vmovss  xmm1, cs:REMOVE_RANGE_0
        vmulss  xmm2, xmm1, xmm1
        vdivss  xmm6, xmm10, xmm2
      }
      BgVehiclePhysics::GetUpInclination(_RBX);
      __asm
      {
        vmovss  xmm2, cs:__real@3dcccccd; yawRotFactor
        vsubss  xmm0, xmm12, xmm0
        vmulss  xmm1, xmm0, xmm6; planeMovFactor
      }
      BgVehiclePhysicsGround::RemoveMovement(_RBX, *(float *)&_XMM1, *(float *)&_XMM2);
    }
    __asm
    {
      vmovss  xmm1, cs:THRESHOLD_TO_OVERDAMP_ONSTEER
      vmovss  xmm0, cs:THRESHOLD_TO_OVERDAMP_0
      vcomiss xmm13, cs:__real@3a83126f
      vmovaps xmm13, [rsp+0A8h+var_88]
      vxorps  xmm4, xmm4, xmm4
      vcvtsi2ss xmm4, xmm4, eax
      vcmpneqss xmm2, xmm4, xmm7
      vblendvps xmm3, xmm0, xmm1, xmm2
      vcomiss xmm10, xmm3
    }
  }
  else if ( !_RBX->m_playerControlled )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@3ecccccd; angularDampFrame
      vmovss  xmm2, cs:__real@3d4ccccd; linearDampFrame
      vmovaps xmm1, xmm11; deltaTime
    }
    BgVehiclePhysicsGround::DampingVelocities(_RBX, *(float *)&deltaTime, *(float *)&_XMM2, *(float *)&_XMM3_8);
  }
LABEL_21:
  __asm { vmovaps xmm12, [rsp+0A8h+var_78] }
  _EDI = 0xFFFFFF;
  __asm
  {
    vmovaps xmm10, [rsp+0A8h+var_58]
    vmovaps xmm6, [rsp+0A8h+var_18]
  }
  if ( !BgVehiclePhysicsGround::HasMoveOrInput(_RBX) && _RBX->m_playerControlled && !_RBX->IsInAir(_RBX) )
  {
    __asm
    {
      vmovss  xmm0, cs:MIN_TIME_AFTER_FIRE_FOR_ANGULAR_DAMP
      vcomiss xmm0, dword ptr [rbx+0C94h]
    }
  }
  __asm { vmovaps xmm9, [rsp+0A8h+var_48] }
  if ( _RBX->m_flatTire )
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
    v55 = _RBX->m_wheels[0].m_state & 1;
    if ( v55 && _RBX->m_wheels[0].m_contactBodyId != 0xFFFFFF && (_RBX->m_wheels[1].m_state & 1) != 0 )
    {
      __asm
      {
        vmovd   xmm0, dword ptr [rbx+400h]
        vmovd   xmm1, edi
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@3e800000
        vblendvps xmm3, xmm1, xmm3, xmm2; angularDampFrame
      }
    }
    if ( !v55 || _RBX->m_wheels[0].m_contactBodyId == 0xFFFFFF )
      __asm { vxorps  xmm0, xmm0, xmm0 }
    else
      __asm { vmovaps xmm0, xmm8 }
    if ( (_RBX->m_wheels[1].m_state & 1) == 0 || _RBX->m_wheels[1].m_contactBodyId == 0xFFFFFF )
      __asm { vxorps  xmm8, xmm8, xmm8 }
    __asm
    {
      vaddss  xmm2, xmm0, xmm8
      vmovss  xmm0, cs:__real@3e4ccccd
    }
    if ( (_RBX->m_wheels[2].m_state & 1) == 0 || _RBX->m_wheels[2].m_contactBodyId == 0xFFFFFF )
      __asm { vxorps  xmm1, xmm1, xmm1 }
    else
      __asm { vmovaps xmm1, xmm0 }
    __asm { vaddss  xmm2, xmm2, xmm1 }
    if ( (_RBX->m_wheels[3].m_state & 1) == 0 || _RBX->m_wheels[3].m_contactBodyId == 0xFFFFFF )
      __asm { vxorps  xmm0, xmm0, xmm0 }
    __asm
    {
      vaddss  xmm2, xmm2, xmm0; linearDampFrame
      vmovaps xmm1, xmm11; deltaTime
    }
    BgVehiclePhysicsGround::DampingVelocities(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  }
  _R11 = &v77;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
BgVehiclePhysicsTreadedBase::DampVelocitiesAndStop
==============
*/

void __fastcall BgVehiclePhysicsTreadedBase::DampVelocitiesAndStop(BgVehiclePhysicsTreadedBase *this, double deltaTime)
{
  char v15; 
  char v17; 
  BgVehiclePhysicsGround *v30; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = this;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps [rsp+78h+var_58], xmm10
    vmovaps xmm8, xmm1
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:__real@3a83126f
    vmovss  xmm7, cs:__real@3f800000
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm9
    vxorps  xmm10, xmm10, xmm10
  }
  if ( !(v17 | v15) )
    goto LABEL_18;
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
  __asm
  {
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm9
  }
  if ( v17 | v15 )
  {
    if ( !_RBX->IsInAir(_RBX) )
    {
      *(double *)&_XMM0 = BgVehiclePhysics::GetPlaneSpeed(_RBX);
      __asm
      {
        vmovss  xmm1, cs:THRESHOLD_TO_REMOVE
        vmulss  xmm9, xmm0, xmm0
        vmulss  xmm0, xmm1, xmm1
        vcomiss xmm9, xmm0
      }
      if ( v17 | v15 )
      {
        __asm
        {
          vmovss  xmm0, cs:REMOVE_RANGE
          vmulss  xmm1, xmm0, xmm0
          vdivss  xmm2, xmm9, xmm1
          vcmpltss xmm0, xmm2, cs:__real@3c23d70a
          vblendvps xmm6, xmm2, xmm10, xmm0
        }
        BgVehiclePhysics::GetUpInclination(_RBX);
        __asm
        {
          vmovss  xmm2, cs:__real@3dcccccd; yawRotFactor
          vsubss  xmm1, xmm7, xmm0
          vmulss  xmm1, xmm1, xmm6; planeMovFactor
        }
        BgVehiclePhysicsGround::RemoveMovement(_RBX, *(float *)&_XMM1, *(float *)&_XMM2);
      }
      __asm
      {
        vmovss  xmm0, cs:THRESHOLD_TO_OVERDAMP
        vcomiss xmm9, xmm0
      }
      v30 = _RBX;
      if ( v17 )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@3f000000
          vdivss  xmm0, xmm9, xmm0
          vsubss  xmm1, xmm7, xmm0
          vmulss  xmm0, xmm1, xmm1
          vmulss  xmm1, xmm0, xmm1
          vmulss  xmm2, xmm1, cs:__real@40400000
        }
      }
      else
      {
        __asm
        {
          vmovaps xmm3, xmm7
          vmovaps xmm2, xmm7
        }
      }
      goto LABEL_11;
    }
  }
  else
  {
LABEL_18:
    if ( !_RBX->m_playerControlled )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f000000; linearDampFrame
        vmovaps xmm3, xmm2; angularDampFrame
      }
      v30 = _RBX;
LABEL_11:
      __asm { vmovaps xmm1, xmm8; deltaTime }
      BgVehiclePhysicsGround::DampingVelocities(v30, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    }
  }
  if ( !BgVehiclePhysicsGround::HasMoveOrInput(_RBX) && _RBX->m_playerControlled )
  {
    __asm
    {
      vmovss  xmm0, cs:MIN_TIME_AFTER_FIRE_FOR_ANGULAR_DAMP
      vcomiss xmm0, dword ptr [rbx+0C94h]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
    vmovaps xmm10, [rsp+78h+var_58]
  }
}

/*
==============
BgVehiclePhysicsTwoWheeled::DampVelocitiesAndStop
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::DampVelocitiesAndStop(BgVehiclePhysicsTwoWheeled *this, double deltaTime)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm3, cs:__real@3dcccccd; angularDampFrame
    vsubss  xmm0, xmm2, xmm0
    vmulss  xmm2, xmm0, cs:__real@3fc00000; linearDampFrame
    vmovaps xmm1, xmm6; deltaTime
    vmovaps xmm6, [rsp+38h+var_18]
  }
  BgVehiclePhysicsGround::DampingVelocities(this, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
}

/*
==============
BgVehiclePhysicsGround::DampingVelocities
==============
*/

void __fastcall BgVehiclePhysicsGround::DampingVelocities(BgVehiclePhysicsGround *this, double deltaTime, double linearDampFrame, double angularDampFrame)
{
  const dvar_t *v7; 
  bool v12; 

  v7 = DCONST_DVARMPBOOL_bg_vehVelDamping;
  _RBX = this;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( !DCONST_DVARMPBOOL_bg_vehVelDamping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehVelDamping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v12 = !v7->current.enabled;
  if ( v7->current.enabled )
  {
    __asm
    {
      vmovss  xmm4, cs:__real@3f800000
      vxorps  xmm3, xmm3, xmm3
      vcomiss xmm6, xmm3
    }
    if ( v7->current.enabled )
    {
      __asm
      {
        vmulss  xmm0, xmm8, xmm6
        vsubss  xmm1, xmm4, xmm0
        vmaxss  xmm2, xmm1, xmm3
        vmulss  xmm0, xmm2, dword ptr [rbx+1A4h]
        vmovss  dword ptr [rbx+1A4h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rbx+1A8h]
        vmovss  dword ptr [rbx+1A8h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+1ACh]
        vmovss  dword ptr [rbx+1ACh], xmm0
      }
    }
    __asm { vcomiss xmm7, xmm3 }
    if ( !v12 )
    {
      __asm
      {
        vmulss  xmm0, xmm8, xmm7
        vsubss  xmm1, xmm4, xmm0
        vmaxss  xmm2, xmm1, xmm3
        vmulss  xmm0, xmm2, dword ptr [rbx+1B0h]
        vmovss  dword ptr [rbx+1B0h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rbx+1B4h]
        vmovss  dword ptr [rbx+1B4h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+1B8h]
        vmovss  dword ptr [rbx+1B8h], xmm0
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
}

/*
==============
BgVehiclePhysicsCarBase::DeactivationLogic
==============
*/

void __fastcall BgVehiclePhysicsCarBase::DeactivationLogic(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps xmm6, xmm1 }
  BgVehiclePhysics::DeactivationLogic(this, *(float *)&deltaTime);
  if ( !_RBX->m_playerControlled )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@40000000
      vcomiss xmm0, dword ptr [rbx+2ACh]
    }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
BgVehiclePhysicsTank::DeactivationLogic
==============
*/

void __fastcall BgVehiclePhysicsTank::DeactivationLogic(BgVehiclePhysicsTank *this, double deltaTime)
{
  char v7; 
  char v8; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 3u);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !(v7 | v8) )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f666666; planeMovFactor
      vmovaps xmm2, xmm1; yawRotFactor
    }
    BgVehiclePhysicsGround::RemoveMovement(_RBX, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  if ( !_RBX->m_pmoveObject && !_RBX->m_playerControlled && BgVehiclePhysics::IsDynamic(_RBX) )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@41a00000; speedThreshold
      vmovss  xmm1, cs:__real@3f800000; steeringThreshold
    }
    if ( BgVehiclePhysicsGround::IsNotMoving(_RBX, *(float *)&_XMM1, *(float *)&_XMM2) )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3bf5c28f
        vcomiss xmm0, dword ptr [rbx+0C74h]
      }
      if ( _RBX->m_wheelInContactCount )
        BgVehiclePhysics::SetKeyframed(_RBX, 0);
    }
  }
  __asm
  {
    vmovaps xmm1, xmm6; deltaTime
    vmovaps xmm6, [rsp+38h+var_18]
  }
  BgVehiclePhysics::DeactivationLogic(_RBX, *(float *)&_XMM1);
}

/*
==============
BgVehiclePhysicsTreadedBase::DeactivationLogic
==============
*/

void __fastcall BgVehiclePhysicsTreadedBase::DeactivationLogic(BgVehiclePhysicsTreadedBase *this, double deltaTime)
{
  _RBX = this;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !this->m_pmoveObject && !this->m_playerControlled && BgVehiclePhysics::IsDynamic(this) )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@41a00000; speedThreshold
      vmovss  xmm1, cs:__real@3f800000; steeringThreshold
    }
    if ( BgVehiclePhysicsGround::IsNotMoving(_RBX, *(float *)&_XMM1, *(float *)&_XMM2) )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3bf5c28f
        vcomiss xmm0, dword ptr [rbx+0C74h]
      }
      if ( _RBX->m_wheelInContactCount )
        BgVehiclePhysics::SetKeyframed(_RBX, 0);
    }
  }
  __asm
  {
    vmovaps xmm1, xmm6; deltaTime
    vmovaps xmm6, [rsp+38h+var_18]
  }
  BgVehiclePhysics::DeactivationLogic(_RBX, *(float *)&_XMM1);
}

/*
==============
BgVehiclePhysicsGround::DebugDraw
==============
*/
void BgVehiclePhysicsGround::DebugDraw(BgVehiclePhysicsGround *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const vec3_t *v22; 
  unsigned int PhysicsBodyId; 
  const char *m_defName; 
  __int64 m_vehicleId; 
  __int64 m_entityNumber; 
  char *v38; 
  const dvar_t *v39; 
  const char *v40; 
  int integer; 
  const char *v62; 
  VehiclePhysicsNetcodeType m_netcodeType; 
  const char *v74; 
  const char *v91; 
  const char *v97; 
  const char *v106; 
  unsigned int v111; 
  unsigned int m_wheelCount; 
  unsigned int v114; 
  __int64 v115; 
  __int64 p_m_suspDeformRatio; 
  __int64 v124; 
  const char *v127; 
  unsigned int v131; 
  bool v133; 
  const char *v134; 
  const char *v135; 
  __int64 v144; 
  unsigned int v145; 
  const vec4_t *v187; 
  char v188; 
  char v189; 
  __int64 v200; 
  const vec3_t *p_m_hardPointWs; 
  int duration; 
  int forceColor; 
  float v232; 
  float v233; 
  float v234; 
  float v235; 
  float v236; 
  float v237; 
  float v238; 
  float v239; 
  int v240; 
  int v241; 
  int v242; 
  unsigned int v243; 
  float v244; 
  vec3_t position; 
  vec4_t setColor; 
  vec4_t orientation; 

  __asm
  {
    vmovaps [rsp+160h+var_80], xmm9
    vmovss  xmm0, [rbp+60h+tabWidth]
    vmovss  xmm9, [rbp+60h+charHeight]
    vmovss  [rsp+160h+forceColor], xmm9
    vmovss  [rsp+160h+duration], xmm0
  }
  _RBX = y;
  _R14 = x;
  _RSI = this;
  BgVehiclePhysics::DebugDraw(this, scrPlace, x, y, *(float *)&duration, *(float *)&forceColor);
  if ( (BgVehiclePhysics::GetPhysicsBodyId(_RSI) & 0xFFFFFF) != 0xFFFFFF && !_RSI->m_pmoveObject && BgVehiclePhysics::IsDynamic(_RSI) )
  {
    __asm
    {
      vmovaps [rsp+160h+var_50], xmm6
      vmovaps [rsp+160h+var_60], xmm7
      vmovaps [rsp+160h+var_90], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vmovaps xmm1, xmm10; radius
      vmovaps [rsp+160h+var_A0], xmm11
      vmovaps [rsp+160h+var_C0], xmm13
    }
    CG_DebugSphere(&_RSI->m_centerOfMassWs, *(float *)&_XMM1, &colorGreen, 0, 0);
    v22 = &_RSI->m_transform.m[3];
    __asm { vmovaps xmm1, xmm10; radius }
    CG_DebugSphere(&_RSI->m_transform.m[3], *(float *)&_XMM1, &colorOrange, 0, 0);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
      vmovups xmmword ptr [rsp+160h+setColor], xmm0
    }
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RSI);
    Physics_GetRigidBodyTransform((const Physics_WorldId)_RSI->m_worldId, PhysicsBodyId, &position, &orientation);
    __asm
    {
      vmovss  xmm11, cs:__real@42480000
      vmulss  xmm3, xmm11, dword ptr [rsi+184h]
      vmovss  xmm0, dword ptr [rsp+160h+position+8]
      vmulss  xmm1, xmm11, dword ptr [rsi+180h]
      vaddss  xmm1, xmm1, dword ptr [rsp+160h+position]
    }
    m_defName = _RSI->m_defName;
    m_vehicleId = _RSI->m_vehicleId;
    m_entityNumber = (unsigned int)_RSI->m_entityNumber;
    __asm
    {
      vmovss  dword ptr [rsp+160h+position], xmm1
      vaddss  xmm1, xmm3, dword ptr [rsp+160h+position+4]
      vmulss  xmm3, xmm11, dword ptr [rsi+188h]
      vmovss  dword ptr [rsp+160h+position+4], xmm1
      vaddss  xmm1, xmm0, cs:__real@42200000
      vaddss  xmm2, xmm3, xmm1
      vmovss  dword ptr [rsp+160h+position+8], xmm2
    }
    v38 = j_va("E%d VId: %d - %s", m_entityNumber, m_vehicleId, m_defName);
    v39 = DCONST_DVARINT_bg_vehicleDebugInfo;
    v40 = v38;
    if ( !DCONST_DVARINT_bg_vehicleDebugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugInfo") )
      __debugbreak();
    __asm { vmovaps [rsp+160h+var_70], xmm8 }
    Dvar_CheckFrontendServerThread(v39);
    __asm { vmovss  xmm13, cs:__real@40000000 }
    if ( scrPlace )
    {
      integer = v39->current.integer;
      if ( (integer == _RSI->m_vehicleId || !integer) && _RSI->m_playerControlled )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovaps [rsp+160h+var_B0], xmm12
          vmovss  [rsp+160h+var_128], xmm9
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v40, &setColor, 0, 1, v232, 0);
        __asm
        {
          vmulss  xmm0, xmm9, xmm13
          vaddss  xmm1, xmm0, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm1
          vmovss  xmm0, dword ptr [rsi+178h]
          vmovss  xmm1, dword ptr [rsi+174h]
          vmulss  xmm3, xmm0, dword ptr [rsi+1A8h]
          vmulss  xmm2, xmm1, dword ptr [rsi+1A4h]
          vmovss  xmm0, dword ptr [rsi+17Ch]
          vmulss  xmm1, xmm0, dword ptr [rsi+1ACh]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm6, xmm4, xmm1
        }
        *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RSI);
        __asm
        {
          vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcvtss2sd xmm2, xmm0, xmm0
          vandps  xmm6, xmm6, xmm12
          vmulss  xmm0, xmm6, cs:__real@3d68ba2f
          vcvtss2sd xmm1, xmm0, xmm0
          vmovq   rdx, xmm1
          vmovq   r8, xmm2
        }
        v62 = j_va("Spd: %.0f mph (%.2f)", _RDX, _R8);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  [rsp+160h+var_128], xmm9
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v62, &setColor, 0, 1, v233, 0);
        __asm
        {
          vaddss  xmm0, xmm9, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
        }
        m_netcodeType = _RSI->m_netcodeType;
        if ( (m_netcodeType & 0xFFFFFFFC) == 0 && m_netcodeType != VEH_NETCODE_SERVER_AUTH )
        {
          _RSI->GetSoundValues(_RSI, 0, 0, (float *)&v241, (float *)&v242, (float *)&v240, (int *)&v243, &v244);
          __asm
          {
            vmovss  xmm0, [rsp+160h+var_10C]
            vsubss  xmm1, xmm0, [rsp+160h+var_108]
            vmovss  xmm2, [rsp+160h+var_110]
            vcvtss2sd xmm1, xmm1, xmm1
            vcvtss2sd xmm2, xmm2, xmm2
            vmovq   rdx, xmm1
            vmovq   r8, xmm2
          }
          v74 = j_va("Gas: %.2f Rpm: %.2f Gear: %d", _RDX, _R8, v243);
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; y
            vmovss  xmm1, dword ptr [r14]; x
            vmovss  [rsp+160h+var_128], xmm9
          }
          Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v74, &setColor, 0, 1, v234, 0);
          __asm
          {
            vaddss  xmm0, xmm9, dword ptr [rbx]
            vmovss  dword ptr [rbx], xmm0
          }
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rsi+0AA8h]
          vxorps  xmm8, xmm8, xmm8
          vcmpltss xmm0, xmm8, xmm1
          vblendvps xmm6, xmm10, xmm1, xmm0
        }
        *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RSI->m_controls, 4u);
        __asm
        {
          vmovss  xmm1, dword ptr [rsi+0C80h]
          vmovaps xmm7, xmm0
          vdivss  xmm0, xmm1, xmm6; val
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps xmm2, xmm10; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vandps  xmm7, xmm7, xmm12
          vmulss  xmm0, xmm0, xmm7
          vcvtss2sd xmm1, xmm0, xmm0
          vmovq   rdx, xmm1
        }
        v91 = j_va("Skidding: %.2f", _RDX);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  [rsp+160h+var_128], xmm9
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v91, &setColor, 0, 1, v235, 0);
        __asm
        {
          vaddss  xmm0, xmm9, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
        }
        *(double *)&_XMM0 = BgVehiclePhysicsGround::GetDriftingRatioExp(_RSI);
        __asm
        {
          vcvtss2sd xmm1, xmm0, xmm0
          vmovq   rdx, xmm1
        }
        v97 = j_va("Drifting: %.2f", _RDX);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  [rsp+160h+var_128], xmm9
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v97, &setColor, 0, 1, v236, 0);
        __asm
        {
          vaddss  xmm0, xmm9, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
          vsubss  xmm0, xmm10, dword ptr [rsi+0C84h]; val
          vmovaps xmm2, xmm10; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vcvtss2sd xmm1, xmm0, xmm0
          vmovq   rdx, xmm1
        }
        v106 = j_va("BrakeBlock: %.2f", _RDX);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  [rsp+160h+var_128], xmm9
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v106, &setColor, 0, 1, v237, 0);
        __asm
        {
          vaddss  xmm0, xmm9, dword ptr [rbx]
          vmovaps xmm12, [rsp+160h+var_B0]
        }
        v111 = 0;
        __asm { vmovss  dword ptr [rbx], xmm0 }
        m_wheelCount = _RSI->m_wheelCount;
        if ( m_wheelCount >= 4 )
        {
          _RCX = &_RSI->m_wheels[1].m_suspDeformRatio;
          v114 = ((m_wheelCount - 4) >> 2) + 1;
          v115 = v114;
          v111 = 4 * v114;
          do
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx-98h]
              vmovss  xmm1, dword ptr [rcx]
            }
            _RCX += 152;
            __asm
            {
              vmaxss  xmm2, xmm0, xmm8
              vmovss  xmm0, dword ptr [rcx-1C8h]
              vmaxss  xmm3, xmm1, xmm2
              vmovss  xmm1, dword ptr [rcx-130h]
              vmaxss  xmm2, xmm0, xmm3
              vmaxss  xmm8, xmm1, xmm2
            }
            --v115;
          }
          while ( v115 );
        }
        if ( v111 < m_wheelCount )
        {
          p_m_suspDeformRatio = (__int64)&_RSI->m_wheels[v111].m_suspDeformRatio;
          v124 = m_wheelCount - v111;
          do
          {
            __asm { vmaxss  xmm8, xmm8, dword ptr [rax] }
            p_m_suspDeformRatio += 152i64;
            --v124;
          }
          while ( v124 );
        }
        __asm
        {
          vcvtss2sd xmm1, xmm8, xmm8
          vmovq   rdx, xmm1
        }
        v127 = j_va("SuspDeform: %.2f", _RDX);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  [rsp+160h+var_128], xmm9
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v127, &setColor, 0, 1, v238, 0);
        __asm
        {
          vaddss  xmm0, xmm9, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
        }
        v131 = 0;
        __asm { vmovss  xmm6, dword ptr [r14] }
        v133 = _RSI->m_wheelCount == 0;
        if ( _RSI->m_wheelCount )
        {
          do
          {
            v134 = Com_SurfaceTypeToName((_RSI->m_wheels[v131].m_surfFlags >> 19) & 0x3F);
            v135 = j_va((const char *)&queryFormat, v134);
            __asm
            {
              vmovss  xmm2, dword ptr [rbx]; y
              vmovss  [rsp+160h+var_128], xmm9
              vmovaps xmm1, xmm6; x
            }
            Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v135, &setColor, 0, 1, v239, 0);
            __asm { vmovss  xmm0, dword ptr [rbx] }
            if ( (v131 & 1) != 0 )
            {
              __asm
              {
                vaddss  xmm0, xmm0, xmm9
                vmovss  dword ptr [rbx], xmm0
                vmovss  xmm6, dword ptr [r14]
              }
            }
            else
            {
              __asm { vaddss  xmm6, xmm6, xmm11 }
            }
            v133 = ++v131 <= _RSI->m_wheelCount;
          }
          while ( v131 < _RSI->m_wheelCount );
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm9
          vcomiss xmm0, cs:__real@43d70000
          vmovss  dword ptr [rbx], xmm0
        }
        if ( !v133 )
        {
          *_RBX = 16.0;
          __asm
          {
            vmovss  xmm0, dword ptr [r14]
            vaddss  xmm1, xmm0, cs:__real@43160000
            vmovss  dword ptr [r14], xmm1
          }
        }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+9F8h]
      vmovss  xmm2, dword ptr [rsi+9FCh]
      vmovss  xmm3, dword ptr [rsi+0A00h]
    }
    v144 = _RSI->m_wheelCount;
    v145 = 0;
    __asm
    {
      vmovss  xmm9, cs:__real@80000000
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm11, xmm2, xmm2
    }
    if ( (_DWORD)v144 )
    {
      __asm { vmovss  xmm8, cs:__real@3fc00000 }
      do
      {
        _RDI = v145;
        __asm { vmovaps xmm1, xmm8; radius }
        CG_DebugSphere(&_RSI->m_wheels[_RDI].m_hardPointWs, *(float *)&_XMM1, &colorGreen, 0, 0);
        if ( _RSI->m_wheels[_RDI].m_contactBodyId != 0xFFFFFF )
        {
          CG_DebugLine(&_RSI->m_wheels[_RDI].m_hardPointWs, &_RSI->m_wheels[_RDI].m_contactPointWs, &colorWhiteFaded, 0, 0);
          __asm { vmovaps xmm1, xmm10; radius }
          CG_DebugSphere(&_RSI->m_wheels[_RDI].m_contactPointWs, *(float *)&_XMM1, &colorRed, 0, 0);
        }
        __asm
        {
          vmovss  xmm6, dword ptr [rdi+rsi+318h]
          vmovss  xmm5, dword ptr [rdi+rsi+314h]
          vmovss  xmm7, dword ptr [rdi+rsi+31Ch]
          vmulss  xmm0, xmm6, xmm6
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, xmm9
          vblendvps xmm0, xmm3, xmm10, xmm0
          vaddss  xmm3, xmm11, dword ptr [rsi+0A18h]
          vdivss  xmm4, xmm10, xmm0
          vmulss  xmm0, xmm5, xmm4
          vmulss  xmm1, xmm0, xmm3
          vaddss  xmm2, xmm1, dword ptr [r14]
          vmulss  xmm0, xmm6, xmm4
          vmulss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rsp+160h+position], xmm2
          vaddss  xmm2, xmm1, dword ptr [r14+4]
          vmulss  xmm0, xmm7, xmm4
          vmulss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rsp+160h+position+4], xmm2
          vaddss  xmm2, xmm1, dword ptr [r14+8]
          vmovss  dword ptr [rsp+160h+position+8], xmm2
        }
        CG_DebugLine(&_RSI->m_wheels[_RDI].m_hardPointWs, &position, &colorWhite, 0, 0);
        __asm
        {
          vmovss  xmm2, cs:debugScale
          vmulss  xmm0, xmm2, dword ptr [rdi+rsi+320h]
          vaddss  xmm1, xmm0, dword ptr [rbx]
          vmulss  xmm0, xmm2, dword ptr [rdi+rsi+324h]
          vmovss  dword ptr [rsp+160h+position], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+4]
          vmulss  xmm0, xmm2, dword ptr [rdi+rsi+328h]
          vmovss  xmm2, dword ptr [rdi+rsi+358h]
          vcomiss xmm2, xmm10
          vmovss  dword ptr [rsp+160h+position+4], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+8]
        }
        v187 = &colorRed;
        if ( v188 | v189 )
          v187 = &colorBlue;
        __asm { vmovss  dword ptr [rsp+160h+position+8], xmm1 }
        CG_DebugLine(&_RSI->m_wheels[_RDI].m_contactPointWs, &position, v187, 0, 0);
        __asm
        {
          vmovss  xmm2, cs:debugScale
          vmulss  xmm0, xmm2, dword ptr [rdi+rsi+32Ch]
          vaddss  xmm1, xmm0, dword ptr [rbx]
          vmulss  xmm0, xmm2, dword ptr [rdi+rsi+330h]
          vmovss  dword ptr [rsp+160h+position], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+4]
          vmulss  xmm0, xmm2, dword ptr [rdi+rsi+334h]
          vmovss  dword ptr [rsp+160h+position+4], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+8]
          vmovss  dword ptr [rsp+160h+position+8], xmm1
        }
        CG_DebugLine(&_RSI->m_wheels[_RDI].m_contactPointWs, &position, &colorCyan, 0, 0);
        v144 = _RSI->m_wheelCount;
        ++v145;
      }
      while ( v145 < (unsigned int)v144 );
      v22 = &_RSI->m_transform.m[3];
    }
    __asm
    {
      vmovaps xmm11, [rsp+160h+var_A0]
      vmovaps xmm8, [rsp+160h+var_70]
    }
    if ( (unsigned int)v144 < 0xC )
    {
      __asm { vmovss  xmm1, cs:__real@40200000; radius }
      v200 = v144;
      p_m_hardPointWs = &_RSI->m_wheels[v144].m_hardPointWs;
      CG_DebugSphere(p_m_hardPointWs, *(float *)&_XMM1, &colorGreen, 0, 0);
      CG_DebugLine(p_m_hardPointWs, &_RSI->m_wheels[v200].m_contactPointWs, &colorWhite, 0, 0);
      if ( _RSI->m_wheels[v200].m_contactBodyId != 0xFFFFFF )
      {
        __asm { vmovaps xmm1, xmm13; radius }
        CG_DebugSphere(&_RSI->m_wheels[v200].m_contactPointWs, *(float *)&_XMM1, &colorRed, 0, 0);
      }
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+1A8h]
      vmovss  xmm5, dword ptr [rsi+1A4h]
      vmovss  xmm7, dword ptr [rsi+1ACh]
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm0, xmm3, xmm10, xmm0
      vmovss  xmm3, cs:__real@42820000
      vdivss  xmm4, xmm10, xmm0
      vmulss  xmm1, xmm5, xmm4
      vmulss  xmm0, xmm1, xmm3
      vaddss  xmm1, xmm0, dword ptr [r12]
      vmulss  xmm2, xmm6, xmm4
      vmulss  xmm0, xmm2, xmm3
      vmovss  dword ptr [rsp+160h+position], xmm1
      vaddss  xmm1, xmm0, dword ptr [r12+4]
      vmulss  xmm2, xmm7, xmm4
      vmulss  xmm0, xmm2, xmm3
      vmovss  dword ptr [rsp+160h+position+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [r12+8]
      vmovss  dword ptr [rsp+160h+position+8], xmm1
    }
    CG_DebugLine(v22, &position, &colorYellow, 0, 0);
    __asm
    {
      vmovaps xmm13, [rsp+160h+var_C0]
      vmovaps xmm10, [rsp+160h+var_90]
      vmovaps xmm7, [rsp+160h+var_60]
      vmovaps xmm6, [rsp+160h+var_50]
    }
  }
  __asm { vmovaps xmm9, [rsp+160h+var_80] }
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

float __fastcall BgVehiclePhysicsCarBase::FilterAccelForce(BgVehiclePhysicsCarBase *this, double rawAccelForce)
{
  _RBX = this;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO && this->IsInAir(this) )
  {
    _RDI = DCONST_DVARFLT_bg_vehAtvMaxEngineAir;
    if ( !DCONST_DVARFLT_bg_vehAtvMaxEngineAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAtvMaxEngineAir") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vminss  xmm7, xmm0, xmm7
    }
  }
  if ( _RBX->m_vehicleAnimProfile )
    goto LABEL_12;
  if ( _RBX->m_wheelCount != 2 )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vcomiss xmm2, dword ptr [rbx+2B0h]
  }
  if ( _RBX->m_wheelCount >= 2 )
    goto LABEL_12;
  __asm { vmovss  xmm4, cs:__real@3fc00000 }
  _RCX = &_RBX->m_wheels[0].m_timeInAir;
  __asm { vmovss  xmm0, dword ptr [rcx] }
  _RAX = &_RBX->m_wheels[1].m_timeInAir;
  __asm
  {
    vcomiss xmm0, dword ptr [rax]
    vmovss  xmm0, dword ptr [rbx+490h]
    vmaxss  xmm1, xmm0, dword ptr [rcx]
    vmaxss  xmm3, xmm1, dword ptr [rbx+528h]
    vcomiss xmm3, xmm4
  }
  if ( _RBX->m_wheelCount <= 2 )
  {
LABEL_12:
    __asm
    {
      vmovaps xmm0, xmm7
      vmovaps xmm7, [rsp+68h+var_28]
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm3, xmm4
      vmulss  xmm0, xmm0, xmm2; val
      vmovaps [rsp+68h+var_18], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm0, xmm6, xmm0
      vmovaps xmm6, [rsp+68h+var_18]
      vmulss  xmm0, xmm7, xmm0
      vmovaps xmm7, [rsp+68h+var_28]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsCarBase::FireWeapon
==============
*/
void BgVehiclePhysicsCarBase::FireWeapon(BgVehiclePhysicsCarBase *this, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  BGVehicles *m_vehicleSystem; 
  __int64 v10; 
  vec3_t impulseWs; 

  _RDI = weapDef;
  if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_VINDIA )
  {
    m_vehicleSystem = this->m_vehicleSystem;
    __asm
    {
      vmovaps [rsp+98h+var_28], xmm6
      vmovaps [rsp+98h+var_38], xmm7
    }
    v10 = (__int64)m_vehicleSystem->PhysicsGetEventSystem(m_vehicleSystem);
    (*(void (__fastcall **)(__int64, BgVehiclePhysicsCarBase *))(*(_QWORD *)v10 + 72i64))(v10, this);
    _RBP = DCONST_DVARFLT_bg_vindiaKickBackForce;
    if ( !DCONST_DVARFLT_bg_vindiaKickBackForce && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaKickBackForce") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm3, xmm0, dword ptr [rbx+190h]
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm2, xmm1, dword ptr [rbx+18Ch]
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm1, xmm0, dword ptr [rbx+194h]
      vmovss  xmm6, cs:__real@3f800000
      vmovss  xmm7, dword ptr [rbp+28h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm6; max
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm0, xmm6, xmm0
      vmulss  xmm1, xmm0, xmm0
    }
    if ( _RDI )
      __asm { vmovss  xmm2, dword ptr [rdi+1E8h] }
    else
      __asm { vmovaps xmm2, xmm6 }
    __asm
    {
      vsubss  xmm0, xmm1, xmm6
      vmulss  xmm1, xmm0, xmm7
      vmulss  xmm2, xmm1, xmm2
      vmulss  xmm0, xmm2, dword ptr [rsi]
      vmulss  xmm1, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+98h+impulseWs], xmm0
      vmulss  xmm0, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+98h+impulseWs+8], xmm0
      vmovss  dword ptr [rsp+98h+impulseWs+4], xmm1
    }
    BgVehiclePhysics::ApplyAngularImpulse(this, &impulseWs, atWs);
    __asm
    {
      vmovaps xmm7, [rsp+98h+var_38]
      vmovaps xmm6, [rsp+98h+var_28]
    }
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
  unsigned int PhysicsBodyId; 
  unsigned int v30; 
  unsigned int v32; 
  vec3_t angVel; 
  vec3_t impulseWs; 
  vec3_t velLs; 
  vec3_t outVelLs; 
  vec3_t linVel; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = weapDef;
  if ( this->m_wheelInContactCount >= this->m_wheelCount - 2 )
  {
    _RBX = DCONST_DVARFLT_bg_wheelsonKickBackForce;
    __asm
    {
      vmovaps xmmword ptr [r11-28h], xmm6
      vmovaps xmmword ptr [r11-38h], xmm7
    }
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonKickBackForce") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+28h]
      vmovss  xmm2, cs:__real@3f800000; max
    }
    if ( _RSI )
      __asm { vmovss  xmm6, dword ptr [rsi+1E8h] }
    else
      __asm { vmovaps xmm6, xmm2 }
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm4, xmm0, dword ptr [rdi+190h]
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm3, xmm1, dword ptr [rdi+18Ch]
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm1, xmm0, dword ptr [rdi+194h]
      vaddss  xmm5, xmm4, xmm3
      vaddss  xmm0, xmm5, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm6, xmm7
      vmulss  xmm0, xmm0, xmm1
      vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm2, dword ptr [rbp+0]
      vmulss  xmm0, xmm2, dword ptr [rbp+4]
      vmovss  dword ptr [rsp+0D8h+impulseWs], xmm1
      vmulss  xmm1, xmm2, dword ptr [rbp+8]
      vmovss  dword ptr [rsp+0D8h+impulseWs+8], xmm1
      vmovss  dword ptr [rsp+0D8h+impulseWs+4], xmm0
    }
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
    Physics_GetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, PhysicsBodyId, &linVel, &angVel);
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &angVel, &outVelLs);
    v30 = BgVehiclePhysics::GetPhysicsBodyId(this);
    Physics_AccumulateRigidBodyAngularImpulse(this->m_worldId, v30, &impulseWs, atWs, &angVel);
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &angVel, &velLs);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+outVelLs+8]
      vmovss  dword ptr [rsp+0D8h+velLs+8], xmm0
    }
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &velLs, &angVel);
    v32 = BgVehiclePhysics::GetPhysicsBodyId(this);
    Physics_SetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, v32, &linVel, &angVel);
    __asm
    {
      vmovaps xmm7, [rsp+0D8h+var_38]
      vmovaps xmm6, [rsp+0D8h+var_28]
    }
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
  BgVehicleEventSystem *v9; 
  vec3_t impulseWs; 

  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
  }
  _RDI = weapDef;
  v9 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v9->TankFire(v9, this);
  _RBP = DCONST_DVARFLT_bg_bradleyKickBackForce;
  if ( !DCONST_DVARFLT_bg_bradleyKickBackForce && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyKickBackForce") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm0, dword ptr [rbx+190h]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rbx+18Ch]
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm0, dword ptr [rbx+194h]
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm7, dword ptr [rbp+28h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm6; max
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm0, xmm6, xmm0
    vmulss  xmm1, xmm0, xmm0
  }
  if ( _RDI )
    __asm { vmovss  xmm2, dword ptr [rdi+1E8h] }
  else
    __asm { vmovaps xmm2, xmm6 }
  __asm
  {
    vsubss  xmm0, xmm1, xmm6
    vmulss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm1, xmm2
    vmulss  xmm0, xmm2, dword ptr [rsi]
    vmulss  xmm1, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+98h+impulseWs], xmm0
    vmulss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+98h+impulseWs+8], xmm0
    vmovss  dword ptr [rsp+98h+impulseWs+4], xmm1
  }
  BgVehiclePhysics::ApplyAngularImpulse(this, &impulseWs, atWs);
  this->m_timeSinceLastFire = 0.0;
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
}

/*
==============
BgVehiclePhysicsCarBase::GetCameraFovDelta
==============
*/
float BgVehiclePhysicsCarBase::GetCameraFovDelta(BgVehiclePhysicsCarBase *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+0CC0h] }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsGround::GetExtraGravityVector
==============
*/
void BgVehiclePhysicsGround::GetExtraGravityVector(BgVehiclePhysicsGround *this, vec3_t *outGravVec)
{
  char v5; 

  _RBX = this;
  _RDI = outGravVec;
  Physics_GetGravity((const Physics_WorldId)this->m_worldId, outGravVec);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0A8Ch]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( v5 )
  {
    __asm { vucomiss xmm0, dword ptr [rbx+0A90h] }
    if ( v5 )
    {
      __asm { vucomiss xmm0, dword ptr [rbx+0A94h] }
      if ( v5 )
      {
        __asm
        {
          vmulss  xmm0, xmm1, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm0
          vmovss  xmm1, dword ptr [rbx+0A90h]
          vmulss  xmm0, xmm1, dword ptr [rdi+4]
          vmovss  dword ptr [rdi+4], xmm0
          vmovss  xmm1, dword ptr [rbx+0A94h]
          vmulss  xmm0, xmm1, dword ptr [rdi+8]
          vmovss  dword ptr [rdi+8], xmm0
        }
      }
    }
  }
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireExtraDampFactors
==============
*/
void BgVehiclePhysicsCarBase::GetFlatTireExtraDampFactors(BgVehiclePhysicsCarBase *this, float *outLdamp, float *outAdamp)
{
  if ( this->m_flatTire )
  {
    _EAX = 0xFFFFFF;
    *outAdamp = 0.0;
    if ( (this->m_wheels[0].m_state & 1) != 0 && this->m_wheels[0].m_contactBodyId != 0xFFFFFF && (this->m_wheels[1].m_state & 1) != 0 )
    {
      __asm
      {
        vmovd   xmm0, dword ptr [rcx+400h]
        vmovss  xmm2, dword ptr [r8]
        vmovd   xmm1, eax
        vpcmpeqd xmm3, xmm0, xmm1
        vmovss  xmm1, cs:__real@3e800000
        vblendvps xmm0, xmm1, xmm2, xmm3
        vmovss  dword ptr [r8], xmm0
      }
    }
    __asm { vmovss  xmm1, cs:__real@3e99999a }
    *outLdamp = 0.0;
    if ( (this->m_wheels[0].m_state & 1) == 0 || this->m_wheels[0].m_contactBodyId == 0xFFFFFF )
      __asm { vxorps  xmm0, xmm0, xmm0 }
    else
      __asm { vmovaps xmm0, xmm1 }
    __asm { vmovss  dword ptr [rdx], xmm0 }
    if ( (this->m_wheels[1].m_state & 1) == 0 || this->m_wheels[1].m_contactBodyId == 0xFFFFFF )
      __asm { vxorps  xmm1, xmm1, xmm1 }
    __asm
    {
      vaddss  xmm2, xmm0, xmm1
      vmovss  xmm0, cs:__real@3e4ccccd
      vmovss  dword ptr [rdx], xmm2
    }
    if ( (this->m_wheels[2].m_state & 1) == 0 || this->m_wheels[2].m_contactBodyId == 0xFFFFFF )
      __asm { vxorps  xmm1, xmm1, xmm1 }
    else
      __asm { vmovaps xmm1, xmm0 }
    __asm
    {
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rdx], xmm2
    }
    if ( (this->m_wheels[3].m_state & 1) == 0 || this->m_wheels[3].m_contactBodyId == 0xFFFFFF )
      __asm { vxorps  xmm0, xmm0, xmm0 }
    __asm
    {
      vaddss  xmm0, xmm2, xmm0
      vmovss  dword ptr [rdx], xmm0
    }
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
  if ( (unsigned int)v3 >= 2 && (this->m_wheels[v3].m_state & 1) != 0 )
  {
    m_wheelCount = this->m_wheelCount;
    v5 = 0;
    if ( m_wheelCount <= 2 )
      goto LABEL_17;
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
LABEL_17:
      __asm { vmovss  xmm0, cs:__real@3e99999a }
    else
      __asm { vmovss  xmm0, cs:__real@3dcccccd }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
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
  if ( !v1 )
  {
    if ( !v2 )
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
      return *(float *)&_XMM0;
    }
LABEL_14:
    __asm { vmovss  xmm0, cs:__real@3d4ccccd }
    return *(float *)&_XMM0;
  }
  if ( !v2 )
    goto LABEL_14;
  __asm { vmovss  xmm0, cs:__real@38d1b717 }
  return *(float *)&_XMM0;
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
  if ( !v1 )
  {
    if ( !v2 )
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
      return *(float *)&_XMM0;
    }
LABEL_14:
    __asm { vmovss  xmm0, cs:__real@3f333333 }
    return *(float *)&_XMM0;
  }
  if ( !v2 )
    goto LABEL_14;
  __asm { vmovss  xmm0, cs:__real@3eb33333 }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsCarBase::GetFlatTireSteeringDeviation
==============
*/

float __fastcall BgVehiclePhysicsCarBase::GetFlatTireSteeringDeviation(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  char v6; 
  bool v7; 
  char v8; 
  bool v9; 
  char v11; 
  char v12; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm8
    vmovaps xmm8, xmm1
  }
  v6 = this->m_wheels[0].m_state & 1;
  v7 = v6 && this->m_wheels[0].m_contactBodyId != 0xFFFFFF;
  v8 = this->m_wheels[1].m_state & 1;
  v9 = v8 && this->m_wheels[1].m_contactBodyId != 0xFFFFFF;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v11 = this->m_wheels[2].m_state & 1;
  if ( (!v11 || this->m_wheels[2].m_contactBodyId == 0xFFFFFF) && ((this->m_wheels[3].m_state & 1) == 0 || this->m_wheels[3].m_contactBodyId == 0xFFFFFF) )
  {
    v12 = 0;
    if ( !v7 )
    {
      if ( !v9 )
        goto LABEL_38;
      goto LABEL_28;
    }
  }
  else
  {
    v12 = 1;
    if ( !v7 )
    {
      if ( !v9 )
      {
        __asm { vmovss  xmm0, cs:__real@3f800000 }
        if ( !v11 || this->m_wheels[2].m_contactBodyId == 0xFFFFFF )
          __asm { vxorps  xmm1, xmm1, xmm1 }
        else
          __asm { vmovaps xmm1, xmm0 }
        if ( (this->m_wheels[3].m_state & 1) == 0 || this->m_wheels[3].m_contactBodyId == 0xFFFFFF )
          __asm { vxorps  xmm0, xmm0, xmm0 }
        __asm { vsubss  xmm6, xmm1, xmm0 }
        goto LABEL_37;
      }
      goto LABEL_28;
    }
  }
  if ( v9 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+360h]
      vmovss  xmm0, dword ptr [rcx+3F8h]
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcmpltss xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@bf000000
      vmovss  xmm0, cs:__real@3f000000
      vblendvps xmm6, xmm0, xmm1, xmm2
    }
    goto LABEL_36;
  }
LABEL_28:
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  if ( !v6 || this->m_wheels[0].m_contactBodyId == 0xFFFFFF )
    __asm { vxorps  xmm1, xmm1, xmm1 }
  else
    __asm { vmovaps xmm1, xmm0 }
  if ( !v8 || this->m_wheels[1].m_contactBodyId == 0xFFFFFF )
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm { vsubss  xmm6, xmm1, xmm0 }
LABEL_36:
  if ( v12 )
LABEL_37:
    __asm { vmulss  xmm6, xmm6, cs:__real@3ecccccd }
LABEL_38:
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm6, xmm8
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm8, [rsp+48h+var_28]
    vmulss  xmm0, xmm0, xmm1
    vmulss  xmm0, xmm0, cs:__real@41900000
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsCarBase::GetForwardSpeedRelative
==============
*/
float BgVehiclePhysicsCarBase::GetForwardSpeedRelative(BgVehiclePhysicsCarBase *this)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1A8h]
    vsubss  xmm1, xmm0, dword ptr [rcx+0CDCh]
    vmulss  xmm3, xmm1, dword ptr [rcx+178h]
    vmovss  xmm2, dword ptr [rcx+1A4h]
    vsubss  xmm0, xmm2, dword ptr [rcx+0CD8h]
    vmulss  xmm1, xmm0, dword ptr [rcx+174h]
    vmovss  xmm2, dword ptr [rcx+1ACh]
    vsubss  xmm0, xmm2, dword ptr [rcx+0CE0h]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rcx+17Ch]
    vaddss  xmm0, xmm4, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsCarBase::GetGearEngineMult
==============
*/
float BgVehiclePhysicsCarBase::GetGearEngineMult(BgVehiclePhysicsCarBase *this)
{
  char v6; 
  char v7; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( v6 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovaps xmm6, [rsp+68h+var_18]
    }
  }
  else
  {
    _EAX = this->m_vehicleAnimProfile;
    _ECX = 19;
    __asm
    {
      vmovss  xmm2, cs:__real@3ccccccd
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovaps [rsp+68h+var_28], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vmovaps [rsp+68h+var_38], xmm8
      vblendvps xmm8, xmm7, xmm2, xmm3
      vcomiss xmm8, cs:__real@3a83126f
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3fa00000
      vblendvps xmm0, xmm7, xmm1, xmm2
      vmovss  [rsp+68h+arg_0], xmm8
      vmovss  [rsp+68h+arg_0], xmm0
    }
    if ( v6 | v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 4474, ASSERT_TYPE_ASSERT, "(spThres > 0.001f)", (const char *)&queryFormat, "spThres > EQUAL_EPSILON") )
      __debugbreak();
    *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(this);
    __asm
    {
      vdivss  xmm0, xmm0, xmm8; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm8, [rsp+68h+var_38]
      vmovaps xmm6, [rsp+68h+var_18]
      vsubss  xmm2, xmm7, xmm0
      vsubss  xmm0, xmm7, xmm2
      vmulss  xmm1, xmm0, [rsp+68h+arg_0]
      vmovaps xmm7, [rsp+68h+var_28]
      vaddss  xmm0, xmm1, xmm2
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
GetInputCharValueWithThreshold
==============
*/
float GetInputCharValueWithThreshold(char value, char threshold)
{
  char v16; 

  __asm
  {
    vmovss  xmm2, cs:__real@42fc0000; max
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, eax
    vandps  xmm7, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtsi2ss xmm0, xmm0, eax; val
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm7, xmm0
    vmovaps xmm3, xmm0
  }
  if ( v16 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vsubss  xmm2, xmm7, xmm3
      vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
      vcmpless xmm0, xmm6, xmm8
      vblendvps xmm2, xmm1, xmm2, xmm0
      vmovss  xmm0, cs:__real@42fe0000
      vsubss  xmm1, xmm0, xmm3
      vdivss  xmm0, xmm2, xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsCarBase::GetLocalSteering
==============
*/
void BgVehiclePhysicsCarBase::GetLocalSteering(BgVehiclePhysicsCarBase *this, BgVehiclePhysicsGround::Steering *outSteering)
{
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v6; 
  __int32 v7; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+0ABCh]
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm1, ymmword ptr [rcx+0ADCh]
    vmovups ymmword ptr [rdx+20h], ymm1
    vmovsd  xmm0, qword ptr [rcx+0AFCh]
    vmovsd  qword ptr [rdx+40h], xmm0
  }
  m_vehicleAnimProfile = this->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile )
  {
    v6 = m_vehicleAnimProfile - 1;
    if ( v6 )
    {
      v7 = v6 - 10;
      if ( v7 )
      {
        if ( v7 == 8 )
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

double __fastcall BgVehiclePhysicsCarBase::GetNormalSpeedRelative(BgVehiclePhysicsCarBase *this, double _XMM1_8)
{
  bool IsDynamic; 
  char v7; 
  bool v8; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps [rsp+48h+var_28], xmm7 }
  IsDynamic = BgVehiclePhysics::IsDynamic(this);
  v7 = 0;
  v8 = !IsDynamic;
  if ( IsDynamic )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1A8h]
      vsubss  xmm1, xmm0, dword ptr [rbx+0CDCh]
      vmulss  xmm3, xmm1, dword ptr [rbx+178h]
      vmovss  xmm2, dword ptr [rbx+1A4h]
      vsubss  xmm0, xmm2, dword ptr [rbx+0CD8h]
      vmulss  xmm1, xmm0, dword ptr [rbx+174h]
      vmovss  xmm2, dword ptr [rbx+1ACh]
      vsubss  xmm0, xmm2, dword ptr [rbx+0CE0h]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm0, dword ptr [rbx+17Ch]
      vaddss  xmm6, xmm4, xmm1
    }
  }
  else
  {
    *(double *)&_XMM0 = BgVehiclePhysics::GetForwardSpeedOfKeyframed(_RBX);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( v7 | v8 )
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(_RBX);
  else
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RBX);
  __asm
  {
    vmaxss  xmm0, xmm0, cs:__real@41200000
    vmovss  xmm2, cs:__real@3f800000; max
    vdivss  xmm0, xmm6, xmm0
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
BgVehiclePhysicsGround::GetRagdollInitialImpact
==============
*/
void BgVehiclePhysicsGround::GetRagdollInitialImpact(BgVehiclePhysicsGround *this, const vec3_t *entPos, bool killcam, int *outHitLoc, vec3_t *outImpactVec)
{
  float v22; 
  bool v53; 
  const char *v55; 
  const dvar_t *v114; 
  float v1[4]; 

  _RBX = outImpactVec;
  _R12 = entPos;
  _RDI = this;
  if ( killcam )
  {
    *outImpactVec = this->m_ragdollImpactVec;
    *outHitLoc = this->m_ragdollImpactHitloc;
    return;
  }
  __asm
  {
    vmovaps [rsp+118h+var_38], xmm6
    vmovaps [rsp+118h+var_48], xmm7
    vmovaps [rsp+118h+var_78], xmm10
    vmovaps [rsp+118h+var_88], xmm11
    vmovaps [rsp+118h+var_98], xmm12
  }
  *outHitLoc = 5;
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vxorps  xmm10, xmm10, xmm10
  }
  if ( BgVehiclePhysics::IsDynamic(this) )
  {
    *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RDI);
    __asm
    {
      vmovsd  xmm1, qword ptr [rdi+1A4h]
      vmovsd  qword ptr [rbx], xmm1
    }
    v22 = _RDI->m_linearVelocityWs.v[2];
    __asm { vmovaps xmm12, xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rdi+144h]
      vmovss  xmm6, dword ptr [rdi+140h]
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RDI);
    __asm
    {
      vmaxss  xmm0, xmm0, cs:__real@41200000
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vdivss  xmm0, xmm11, xmm0
      vmulss  xmm0, xmm3, xmm0; val
      vmovaps xmm2, xmm11; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm12, xmm0 }
    if ( !outImpactVec )
      goto LABEL_8;
    __asm
    {
      vmovsd  xmm0, qword ptr [rdi+140h]
      vmovsd  qword ptr [rbx], xmm0
    }
    v22 = _RDI->m_history.m_lastLinearVel.v[2];
  }
  outImpactVec->v[2] = v22;
LABEL_8:
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; epsilon
    vmovss  [rsp+118h+v1], xmm10
    vmovss  [rsp+118h+var_D4], xmm10
    vmovss  [rsp+118h+var_D0], xmm10
  }
  if ( !VecNCompareCustomEpsilon(outImpactVec->v, v1, *(float *)&_XMM2, 3) )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rbx]
      vmovss  xmm6, dword ptr [rbx+4]
      vmovss  xmm3, dword ptr [rbx+8]
      vmulss  xmm0, xmm6, xmm6
      vmovaps [rsp+118h+var_58], xmm8
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vmovaps [rsp+118h+var_68], xmm9
      vmovaps [rsp+118h+var_A8], xmm13
      vmovss  xmm13, cs:__real@80000000
      vcmpless xmm0, xmm4, xmm13
      vblendvps xmm0, xmm4, xmm11, xmm0
      vdivss  xmm2, xmm11, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm0
    }
    v53 = _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO;
    __asm { vmovaps [rsp+118h+var_B8], xmm14 }
    if ( v53 )
    {
      _R15 = DCONST_DVARFLT_bg_vehRagdollAtvElev;
      if ( !DCONST_DVARFLT_bg_vehRagdollAtvElev )
      {
        v55 = "bg_vehRagdollAtvElev";
        goto LABEL_15;
      }
    }
    else
    {
      _R15 = DCONST_DVARFLT_bg_vehRagdollElev;
      if ( !DCONST_DVARFLT_bg_vehRagdollElev )
      {
        v55 = "bg_vehRagdollElev";
LABEL_15:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v55) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(_R15);
    __asm
    {
      vmovss  xmm6, dword ptr [r15+28h]
      vmovss  xmm5, dword ptr [rbx+4]
      vmovss  xmm4, dword ptr [rbx]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm13
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm1, xmm11, xmm0
      vmulss  xmm7, xmm1, xmm4
      vmulss  xmm9, xmm1, xmm6
      vmulss  xmm8, xmm1, xmm5
      vmovss  dword ptr [rbx], xmm7
      vmovss  dword ptr [rbx+4], xmm8
      vmovss  dword ptr [rbx+8], xmm9
      vmovss  xmm0, dword ptr [r12]
      vsubss  xmm5, xmm0, dword ptr [rdi+198h]
      vmovss  xmm1, dword ptr [r12+4]
      vsubss  xmm6, xmm1, dword ptr [rdi+19Ch]
      vmovss  xmm0, dword ptr [r12+8]
      vsubss  xmm4, xmm0, dword ptr [rdi+1A0h]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, xmm13
      vblendvps xmm0, xmm1, xmm11, xmm0
      vdivss  xmm1, xmm11, xmm0
      vmulss  xmm5, xmm1, xmm5
      vmulss  xmm6, xmm1, xmm6
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm2, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm9, xmm9
      vaddss  xmm2, xmm3, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, xmm13
      vblendvps xmm0, xmm4, xmm11, xmm0
      vmovss  xmm4, cs:__real@3f400000
      vdivss  xmm1, xmm11, xmm0
      vmulss  xmm13, xmm5, xmm1
      vmovss  xmm5, cs:__real@3e800000
      vmulss  xmm6, xmm6, xmm1
      vmulss  xmm14, xmm9, xmm1
      vmulss  xmm1, xmm13, xmm4
      vmulss  xmm0, xmm7, xmm5
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbx], xmm1
      vmulss  xmm0, xmm8, xmm5
      vmulss  xmm3, xmm6, xmm4
      vaddss  xmm1, xmm3, xmm0
      vmulss  xmm0, xmm9, xmm5
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm4, xmm14, xmm4
      vaddss  xmm1, xmm4, xmm0
      vmovss  dword ptr [rbx+8], xmm1
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm11; max
      vmovaps xmm0, xmm12; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v114 = DCONST_DVARFLT_bg_vehRagdollMaxForce;
    __asm
    {
      vmovaps xmm9, [rsp+118h+var_68]
      vmovaps xmm8, [rsp+118h+var_58]
      vmovaps xmm7, xmm0
    }
    if ( !DCONST_DVARFLT_bg_vehRagdollMaxForce && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehRagdollMaxForce") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v114);
    __asm
    {
      vmulss  xmm2, xmm7, dword ptr [r15+28h]
      vmulss  xmm0, xmm2, dword ptr [rbx]
      vmulss  xmm1, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm0, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm13, dword ptr [rdi+180h]
      vmulss  xmm1, xmm6, dword ptr [rdi+184h]
      vmovaps xmm13, [rsp+118h+var_A8]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm14, dword ptr [rdi+188h]
      vmovaps xmm14, [rsp+118h+var_B8]
      vaddss  xmm0, xmm2, xmm1
      vcomiss xmm0, xmm10
    }
    *outHitLoc = 15;
    _RDI->m_ragdollImpactVec = *outImpactVec;
    _RDI->m_ragdollImpactHitloc = *outHitLoc;
    goto LABEL_21;
  }
  *(_QWORD *)outImpactVec->v = 0i64;
  outImpactVec->v[2] = 0.0;
  *outHitLoc = 0;
  *(_QWORD *)_RDI->m_ragdollImpactVec.v = 0i64;
  *(_QWORD *)&_RDI->m_ragdollImpactVec.z = 0i64;
LABEL_21:
  __asm
  {
    vmovaps xmm11, [rsp+118h+var_88]
    vmovaps xmm10, [rsp+118h+var_78]
    vmovaps xmm7, [rsp+118h+var_48]
    vmovaps xmm6, [rsp+118h+var_38]
    vmovaps xmm12, [rsp+118h+var_98]
  }
}

/*
==============
BgVehiclePhysicsCarBase::GetReversingEngineMult
==============
*/
double BgVehiclePhysicsCarBase::GetReversingEngineMult(BgVehiclePhysicsCarBase *this)
{
  char v4; 
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v15; 
  __int32 v16; 
  const dvar_t *v17; 
  const char *v18; 
  const char *v23; 

  _RBX = this;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( !v4 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+178h]
    vmovss  xmm1, dword ptr [rbx+174h]
    vmulss  xmm2, xmm1, dword ptr [rbx+1A4h]
    vmulss  xmm3, xmm0, dword ptr [rbx+1A8h]
    vmovss  xmm0, dword ptr [rbx+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+1ACh]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm6
  }
  if ( !v4 )
  {
LABEL_13:
    if ( !BgVehiclePhysicsGround::IsBraking(_RBX) )
      goto LABEL_22;
    if ( _RBX->m_vehicleAnimProfile )
    {
      _RBX = DVARFLT_bg_vehBrakingEngineMult;
      if ( !DVARFLT_bg_vehBrakingEngineMult )
      {
        v23 = "bg_vehBrakingEngineMult";
LABEL_19:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v23) )
          __debugbreak();
      }
    }
    else
    {
      _RBX = DVARFLT_bg_vehBrakingEngineMultAtv;
      if ( !DVARFLT_bg_vehBrakingEngineMultAtv )
      {
        v23 = "bg_vehBrakingEngineMultAtv";
        goto LABEL_19;
      }
    }
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovaps xmm6, [rsp+58h+var_18]
    }
    return *(double *)&_XMM0;
  }
  m_vehicleAnimProfile = _RBX->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile )
  {
    v15 = m_vehicleAnimProfile - 1;
    if ( v15 )
    {
      v16 = v15 - 10;
      if ( v16 )
      {
        if ( v16 != 8 )
        {
LABEL_22:
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovaps xmm6, [rsp+58h+var_18]
          }
          return *(double *)&_XMM0;
        }
        v17 = DVARFLT_bg_mkiloReverseAccelFactor;
        v18 = "bg_mkiloReverseAccelFactor";
      }
      else
      {
        v17 = DVARFLT_bg_dechoReverseAccelFactor;
        v18 = "bg_dechoReverseAccelFactor";
      }
    }
    else
    {
      v17 = DVARFLT_bg_tromeoReverseAccelFactor;
      v18 = "bg_tromeoReverseAccelFactor";
    }
  }
  else
  {
    v17 = DVARFLT_bg_atangoReverseAccelFactor;
    v18 = "bg_atangoReverseAccelFactor";
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v17, v18);
  __asm { vcomiss xmm0, xmm6 }
  if ( v4 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm6, [rsp+58h+var_18]
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  return *(double *)&_XMM0;
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
  _RDI = outThrottle;
  _RBX = this;
  if ( this->m_clientGeoLoaded && Physics_IsPredictiveWorld(this->m_worldId) )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovss  xmm0, dword ptr [rbx+0A44h]; val
      vmovaps [rsp+38h+var_18], xmm6
      vxorps  xmm1, xmm1, xmm1; min
      vxorps  xmm6, xmm6, xmm6
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rbx+0A48h]; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RAX = outBrake;
    __asm { vmovss  dword ptr [rax], xmm0 }
    _RAX = outMph;
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+0A4Ch]
      vmaxss  xmm0, xmm1, xmm6
      vmovss  dword ptr [rax], xmm0
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *outGear = I_clamp(abs32(_RBX->m_revSound.m_gear), 1, 6);
    __asm { vmovss  xmm0, dword ptr [rbx+0A3Ch]; val }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RAX = outRpmNormal;
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  else
  {
    *_RDI = 0.0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    *outBrake = 0.0;
    *outGear = 1;
    *outMph = 0.0;
    _RAX = outRpmNormal;
    __asm { vmovss  dword ptr [rax], xmm0 }
  }
}

/*
==============
BgVehiclePhysicsTank::Gravity
==============
*/

void __fastcall BgVehiclePhysicsTank::Gravity(BgVehiclePhysicsTank *this, double deltaTime)
{
  unsigned int m_wheelCount; 
  unsigned int v6; 
  __int64 v22; 
  vec3_t gravity; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( this->m_playerControlled )
  {
    Physics_GetGravity((const Physics_WorldId)this->m_worldId, &gravity);
    m_wheelCount = this->m_wheelCount;
    v6 = 0;
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm4, xmm0, xmm1
      vmulss  xmm1, xmm1, cs:WHEEL_MASS
      vaddss  xmm2, xmm1, dword ptr [rbx+260h]
      vmovss  xmm0, dword ptr [rsp+58h+gravity+8]
      vmulss  xmm1, xmm0, dword ptr [rbx+0A94h]
      vmulss  xmm3, xmm2, xmm4
      vmulss  xmm2, xmm1, xmm4
      vmulss  xmm3, xmm3, xmm2
      vmulss  xmm6, xmm3, xmm6
      vmulss  xmm0, xmm6, dword ptr [rbx+18Ch]
      vmulss  xmm1, xmm6, dword ptr [rbx+190h]
      vmovss  dword ptr [rsp+58h+gravity], xmm0
      vmulss  xmm0, xmm6, dword ptr [rbx+194h]
      vmovss  dword ptr [rsp+58h+gravity+8], xmm0
      vmovss  dword ptr [rsp+58h+gravity+4], xmm1
    }
    if ( m_wheelCount )
    {
      do
      {
        v22 = v6;
        if ( this->m_wheels[v22].m_contactBodyId == 0xFFFFFF )
          BgVehiclePhysics::AccumulateImpulse(this, &gravity, &this->m_wheels[v22].m_hardPointWs);
        ++v6;
      }
      while ( v6 < this->m_wheelCount );
    }
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rax]
      vmovss  dword ptr [rsp+58h+gravity], xmm0
      vmulss  xmm1, xmm6, dword ptr [rax+4]
      vmovss  dword ptr [rsp+58h+gravity+4], xmm1
      vmulss  xmm0, xmm6, dword ptr [rax+8]
      vmovss  dword ptr [rsp+58h+gravity+8], xmm0
    }
    BgVehiclePhysics::AccumulateImpulse(this, &gravity, &this->m_centerOfMassWs);
  }
  else
  {
    BgVehiclePhysicsGround::ApplyExtraGravity(this, *(float *)&deltaTime);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::InterpolateAnimParams
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::InterpolateAnimParams(BgVehiclePhysicsAtvQuadNew *this, double deltaTime)
{
  const dvar_t *v12; 
  const dvar_t *v32; 
  char v43; 
  char v44; 
  char v96; 
  void *retaddr; 

  _RAX = &retaddr;
  v12 = DVARBOOL_bg_vehAtvNoiseAnim;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RDI = this;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0F8h+var_88], xmm12
    vmovaps [rsp+0F8h+var_98], xmm13
    vmovaps [rsp+0F8h+var_A8], xmm15
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmm13, xmm8
    vmovss  [rsp+0F8h+var_B8], xmm1
  }
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehAtvNoiseAnim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  __asm
  {
    vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm10, cs:__real@40000000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( v12->current.enabled )
  {
    if ( _RDI->m_wheelInContactCount && !BgVehiclePhysicsGround::IsReversing(_RDI) )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+0C88h]
        vcomiss xmm3, xmm7
        vmulss  xmm1, xmm10, cs:ATV_AFTER_LANDING_TIME
        vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
        vcomiss xmm3, xmm2
      }
    }
    _RDI->m_animPitch.v[2] = 0.0;
    _RDI->m_animYaw.v[2] = 0.0;
    __asm
    {
      vmovss  xmm0, cs:__real@3e19999a
      vcomiss xmm0, dword ptr [rdi+0C8Ch]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+178h]
    vmulss  xmm3, xmm0, dword ptr [rdi+1A8h]
    vmovss  xmm1, dword ptr [rdi+174h]
    vmovss  xmm0, dword ptr [rdi+17Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+1A4h]
    vmulss  xmm1, xmm0, dword ptr [rdi+1ACh]
    vmovss  xmm9, cs:__real@40c00000
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1
    vmovss  [rsp+0F8h+var_B4], xmm0
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 4u);
  v32 = DCONST_DVARFLT_bg_atvAnimPitchFactorGround;
  __asm { vandps  xmm6, xmm0, xmm12 }
  if ( !DCONST_DVARFLT_bg_atvAnimPitchFactorGround && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_atvAnimPitchFactorGround") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+178h]
    vmovss  xmm1, dword ptr [rdi+174h]
    vmulss  xmm3, xmm0, dword ptr [rdi+1A8h]
    vmulss  xmm2, xmm1, dword ptr [rdi+1A4h]
    vmovss  xmm0, dword ptr [rdi+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+1ACh]
    vmulss  xmm15, xmm6, dword ptr [rbx+28h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
    vcomiss xmm6, xmm7
  }
  if ( v43 | v44 )
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(_RDI);
  else
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RDI);
  __asm { vcomiss xmm0, xmm7 }
  if ( v43 | v44 )
  {
    __asm { vmovaps xmm11, xmm8 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm10, xmm0
      vandps  xmm6, xmm6, xmm12
      vmulss  xmm0, xmm6, xmm0; val
      vmovaps xmm2, xmm8; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm11, xmm0 }
  }
  if ( _RDI->m_wheelInContactCount )
  {
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 5u);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+0C88h]
      vcomiss xmm2, xmm7
      vmaxss  xmm10, xmm0, xmm7
    }
    if ( v43 | v44 )
    {
      __asm
      {
        vmovss  xmm0, cs:ATV_AFTER_LANDING_TIME
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  xmm0, cs:__real@41200000
        vcmpless xmm2, xmm1, xmm2
        vblendvps xmm9, xmm9, xmm0, xmm2
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm9, cs:__real@41400000
      vmovaps xmm10, xmm8
    }
  }
  __asm
  {
    vmovss  xmm7, [rsp+0F8h+var_B8]
    vmovss  xmm1, dword ptr [rdi+0D04h]; dst
    vmovaps xmm2, xmm7; frameTime
    vmovaps xmm3, xmm9; speed
  }
  BgVehiclePhysics::DampLerp(_RDI->m_animPitch.v, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vxorps  xmm1, xmm11, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm6, cs:__real@bf800000
    vcmpless xmm0, xmm6, [rsp+0F8h+var_B4]
    vblendvps xmm0, xmm1, xmm11, xmm0
    vmulss  xmm3, xmm0, xmm15
    vandps  xmm1, xmm3, xmm12
    vandps  xmm0, xmm10, xmm12
    vcmpltss xmm2, xmm0, xmm1
    vblendvps xmm0, xmm10, xmm3, xmm2
    vmulss  xmm2, xmm0, cs:__real@42c80000
    vmulss  xmm3, xmm2, xmm13
    vmovss  dword ptr [rdi+0D04h], xmm3
    vmovss  xmm3, cs:__real@40b00000; speed
    vmovss  xmm1, dword ptr [rdi+0D10h]; dst
    vmovaps xmm2, xmm7; frameTime
  }
  BgVehiclePhysics::DampLerp(_RDI->m_animYaw.v, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm0, cs:__real@3fa00000
    vdivss  xmm3, xmm0, dword ptr [rdi+0AC0h]
    vmulss  xmm0, xmm3, dword ptr [rdi+0AF0h]; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@c2c80000
    vmovaps xmm2, xmm7; deltaTime
    vmovss  dword ptr [rdi+0D10h], xmm1
    vmovaps xmm15, [rsp+0F8h+var_A8]
  }
  _R11 = &v96;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
  BgVehiclePhysicsGround::Steering::LerpYaw(&_RDI->m_steering, _RDI, *(float *)&_XMM2);
}

/*
==============
BgVehiclePhysicsCarBase::InterpolateAnimParams
==============
*/

void __fastcall BgVehiclePhysicsCarBase::InterpolateAnimParams(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  __asm { vmovaps xmm2, xmm1; deltaTime }
  BgVehiclePhysicsGround::Steering::LerpYaw(&this->m_steering, this, *(float *)&_XMM2);
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

void __fastcall BgVehiclePhysicsCarBase::Land(BgVehiclePhysicsCarBase *this, double timeWasInAir)
{
  Physics_WorldId m_worldId; 
  __int64 v12; 
  unsigned int m_vehicleAnimProfile; 
  int v66; 
  const dvar_t *v72; 
  const dvar_t *v77; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RDI = this;
  m_worldId = this->m_worldId;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vandps  xmm7, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  if ( Physics_IsPredictiveWorld(m_worldId) && _RDI->m_playerControlled )
  {
    v12 = (__int64)_RDI->m_vehicleSystem->PhysicsGetEventSystem(_RDI->m_vehicleSystem);
    __asm { vmovaps xmm2, xmm7 }
    (*(void (__fastcall **)(__int64, BgVehiclePhysicsCarBase *))(*(_QWORD *)v12 + 64i64))(v12, _RDI);
  }
  _EBX = _RDI->m_vehicleAnimProfile;
  _ESI = 0;
  __asm
  {
    vmovss  xmm2, cs:__real@3f666666
    vmovd   xmm1, esi
    vmovd   xmm0, ebx
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f333333
    vblendvps xmm6, xmm1, xmm2, xmm3
  }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RDI);
  __asm { vmovaps xmm1, xmm6; minval }
  *(float *)&_XMM0 = NormalizeRange(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm3, cs:__real@3f4ccccd
    vmovss  xmm11, cs:__real@3f800000
    vmovd   xmm1, ebx
    vmovd   xmm2, esi
    vpcmpeqd xmm4, xmm1, xmm2
    vblendvps xmm1, xmm11, xmm3, xmm4
    vmovaps xmm9, xmm0
    vdivss  xmm0, xmm7, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm11; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+1A8h]
    vmovss  xmm7, dword ptr [rdi+1A4h]
    vmovss  xmm4, dword ptr [rdi+178h]
  }
  m_vehicleAnimProfile = _RDI->m_vehicleAnimProfile;
  __asm
  {
    vmovaps xmm10, xmm0
    vmulss  xmm2, xmm7, xmm7
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm1, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm11, xmm1
    vmovss  xmm3, dword ptr [rdi+174h]
    vdivss  xmm6, xmm11, xmm1
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm1, xmm3, xmm2
    vmulss  xmm0, xmm7, xmm6
    vmulss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm6
    vmulss  xmm2, xmm4, xmm2
    vmulss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm10, cs:__real@3e4ccccd
    vaddss  xmm3, xmm3, xmm0
    vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm11, xmm3
    vaddss  xmm1, xmm0, xmm9
    vmulss  xmm3, xmm1, cs:__real@3ecccccd
    vaddss  xmm6, xmm3, xmm2
  }
  if ( m_vehicleAnimProfile > 0x13 || (v66 = 720916, !_bittest(&v66, m_vehicleAnimProfile)) )
  {
    __asm
    {
      vsubss  xmm0, xmm11, xmm6
      vmulss  xmm1, xmm0, dword ptr [rdi+0AB8h]
      vmulss  xmm0, xmm6, cs:__real@3e99999a
      vaddss  xmm1, xmm1, xmm0; fricValue
    }
    BgVehiclePhysicsGround::SetCurrentFriction(_RDI, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@3ca3d70a
      vmovss  dword ptr [rdi+0AB4h], xmm0
    }
  }
  v72 = DCONST_DVARFLT_bg_vehSuspStiffAdaptive;
  if ( !DCONST_DVARFLT_bg_vehSuspStiffAdaptive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSuspStiffAdaptive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v72);
  __asm
  {
    vmulss  xmm0, xmm10, dword ptr [rbx+28h]
    vsubss  xmm6, xmm11, xmm10
    vmulss  xmm1, xmm6, dword ptr [rdi+0A04h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+0A08h], xmm1
  }
  v77 = DCONST_DVARFLT_bg_vehSuspDampAdaptive;
  if ( !DCONST_DVARFLT_bg_vehSuspDampAdaptive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSuspDampAdaptive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v77);
  __asm
  {
    vmulss  xmm0, xmm10, dword ptr [rbx+28h]
    vmulss  xmm1, xmm6, dword ptr [rdi+0A0Ch]
  }
  _R11 = &v88;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+0A10h], xmm1
  }
}

/*
==============
BgVehiclePhysicsGround::Steering::LerpYaw
==============
*/

void __fastcall BgVehiclePhysicsGround::Steering::LerpYaw(BgVehiclePhysicsGround::Steering *this, const BgVehiclePhysicsGround *vehicle, double deltaTime)
{
  __asm
  {
    vmovss  xmm3, dword ptr [rcx+2Ch]
    vmovss  xmm4, cs:__real@3a83126f
    vmovaps [rsp+68h+var_18], xmm6
  }
  _RBX = this;
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm1, xmm3, xmm6
    vcomiss xmm1, xmm4
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm2
    vxorps  xmm5, xmm5, xmm5
    vmovss  xmm2, dword ptr [rcx+34h]
    vandps  xmm0, xmm2, xmm6
    vcomiss xmm0, xmm4
    vmulss  xmm0, xmm2, xmm3
    vcomiss xmm0, xmm5
    vmovss  xmm2, dword ptr [rcx+34h]
    vandps  xmm0, xmm2, xmm6
    vcomiss xmm0, xmm1
    vmovss  xmm4, dword ptr [rcx+18h]
    vxorps  xmm1, xmm4, cs:__xmm@80000000800000008000000080000000
    vsubss  xmm0, xmm2, xmm3
    vcmpless xmm0, xmm5, xmm0
    vblendvps xmm0, xmm1, xmm4, xmm0
    vmulss  xmm4, xmm0, xmm7
    vcomiss xmm4, xmm5
    vmovss  dword ptr [rcx+2Ch], xmm2
  }
  BgVehiclePhysics::GetNormalSpeed(&vehicle->BgVehiclePhysics);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovss  xmm3, dword ptr [rbx+34h]
    vdivss  xmm4, xmm3, dword ptr [rbx+4]
  }
  _RDI = DCONST_DVARFLT_bg_carYawSpeed;
  __asm
  {
    vsubss  xmm2, xmm1, xmm0
    vmaxss  xmm0, xmm2, cs:__real@3f000000
    vmulss  xmm1, xmm0, xmm3
    vandps  xmm4, xmm4, xmm6
    vmulss  xmm6, xmm4, xmm1
  }
  if ( !DCONST_DVARFLT_bg_carYawSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carYawSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+28h]; speed
    vmovaps xmm2, xmm7; frameTime
    vmovaps xmm1, xmm6; dst
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  BgVehiclePhysics::DampLerp(&_RBX->m_yawVisual, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
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

void __fastcall BgVehiclePhysicsGround::PostStep(BgVehiclePhysicsGround *this, double deltaTime)
{
  char v5; 
  char v6; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps xmm6, xmm1 }
  BgVehiclePhysics::PostStep(this, *(float *)&deltaTime);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C90h]
    vmovss  xmm5, cs:__real@3f800000
    vsubss  xmm2, xmm0, xmm6
    vmovss  dword ptr [rbx+0C90h], xmm2
    vmovss  xmm0, dword ptr [rbx+178h]
    vmulss  xmm3, xmm0, dword ptr [rbx+1A8h]
    vmovss  xmm2, dword ptr [rbx+174h]
    vmulss  xmm1, xmm2, dword ptr [rbx+1A4h]
    vmovss  xmm0, dword ptr [rbx+17Ch]
    vmulss  xmm2, xmm0, dword ptr [rbx+1ACh]
    vmovss  xmm0, cs:__real@3f000000
    vaddss  xmm4, xmm3, xmm1
    vdivss  xmm6, xmm0, xmm6
    vcomiss xmm6, xmm5
    vaddss  xmm1, xmm4, xmm2
    vmulss  xmm4, xmm1, xmm1
  }
  if ( !(v5 | v6) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+0C70h]
      vdivss  xmm3, xmm5, xmm6
      vmulss  xmm0, xmm3, xmm1
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm4
      vaddss  xmm4, xmm2, xmm1
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+0C70h], xmm4
    vmovss  xmm0, dword ptr [rbx+1B0h]
    vmovss  xmm2, dword ptr [rbx+1B4h]
    vmovss  xmm3, dword ptr [rbx+1B8h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm4, xmm2, xmm1
  }
  if ( v5 | v6 )
  {
    __asm
    {
      vmovss  dword ptr [rbx+0C74h], xmm4
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+0C74h]
      vdivss  xmm3, xmm5, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
      vmulss  xmm0, xmm3, xmm1
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm4
      vaddss  xmm3, xmm2, xmm1
      vmovss  dword ptr [rbx+0C74h], xmm3
    }
  }
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
  BGVehicles *m_vehicleSystem; 
  __int64 v30; 
  int v31; 
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
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+68h+outHalfSize+4]
          vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
        }
LABEL_16:
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [rbx+180h]
          vaddss  xmm5, xmm0, dword ptr [rbx+198h]
          vmulss  xmm0, xmm2, dword ptr [rbx+188h]
          vmulss  xmm1, xmm2, dword ptr [rbx+184h]
        }
LABEL_21:
        __asm
        {
          vaddss  xmm3, xmm0, dword ptr [rbx+1A0h]
          vaddss  xmm4, xmm1, dword ptr [rbx+19Ch]
        }
LABEL_22:
        __asm
        {
          vmovss  xmm2, dword ptr [rsp+68h+outHalfSize+8]
          vmulss  xmm0, xmm2, dword ptr [rbx+18Ch]
        }
        m_vehicleSystem = this->m_vehicleSystem;
        __asm
        {
          vaddss  xmm1, xmm5, xmm0
          vmulss  xmm0, xmm2, dword ptr [rbx+190h]
          vmovss  [rsp+68h+var_38], xmm1
          vaddss  xmm1, xmm4, xmm0
          vmulss  xmm0, xmm2, dword ptr [rbx+194h]
          vmovss  [rsp+68h+var_34], xmm1
          vaddss  xmm1, xmm3, xmm0
          vmovss  [rsp+68h+var_30], xmm1
        }
        v30 = (__int64)m_vehicleSystem->PhysicsGetEventSystem(m_vehicleSystem);
        (*(void (__fastcall **)(__int64, BgVehiclePhysicsGround *, int *, _QWORD))(*(_QWORD *)v30 + 24i64))(v30, this, &v31, v7);
        return;
      }
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1001, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "It must be 0..3") )
            __debugbreak();
          __asm
          {
            vmovss  xmm3, [rsp+68h+var_30]
            vmovss  xmm4, [rsp+68h+var_34]
            vmovss  xmm5, [rsp+68h+var_38]
          }
          goto LABEL_22;
        }
        __asm { vmovss  xmm2, dword ptr [rsp+68h+outHalfSize+4] }
        goto LABEL_16;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+68h+outHalfSize]
        vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
      }
    }
    else
    {
      __asm { vmovss  xmm2, dword ptr [rsp+68h+outHalfSize] }
    }
    __asm
    {
      vmulss  xmm0, xmm2, dword ptr [rbx+174h]
      vaddss  xmm5, xmm0, dword ptr [rbx+198h]
      vmulss  xmm0, xmm2, dword ptr [rbx+17Ch]
      vmulss  xmm1, xmm2, dword ptr [rbx+178h]
    }
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

void __fastcall BgVehiclePhysicsGround::RemoveMovement(BgVehiclePhysicsGround *this, double planeMovFactor, double yawRotFactor)
{
  vec3_t outVelLs; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps xmm7, xmm2
    vcomiss xmm2, xmm0
    vmovaps xmm6, xmm1
  }
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rsp+68h+outVelLs]
    vmulss  xmm0, xmm6, dword ptr [rsp+68h+outVelLs+4]
    vmovss  dword ptr [rsp+68h+outVelLs], xmm1
    vmovss  dword ptr [rsp+68h+outVelLs+4], xmm0
  }
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  __asm
  {
    vmulss  xmm1, xmm7, dword ptr [rsp+68h+outVelLs+8]
    vmovss  dword ptr [rsp+68h+outVelLs+8], xmm1
  }
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
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

void __fastcall BgVehiclePhysicsGround::RumbleData::Set(BgVehiclePhysicsGround::RumbleData *this, double _intensity, double duration)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = this;
  __asm
  {
    vmovaps xmm0, xmm1; val
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmaxss  xmm1, xmm7, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+0Ch], xmm7
    vmovaps xmm7, [rsp+48h+var_28]
    vmovss  dword ptr [rbx+8], xmm1
    vmovss  dword ptr [rbx+4], xmm0
  }
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

  _RBX = this;
  result = BgVehiclePhysicsCarBase::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    _RBX->m_wheels[0].m_torqueRatio = 0.30000001;
    _RBX->m_wheels[1].m_torqueRatio = 0.30000001;
    _RBX->m_wheels[2].m_torqueRatio = 0.25;
    _RBX->m_wheels[3].m_torqueRatio = 0.25;
    _RBX->m_chassisNoise.m_enabled = 1;
    _RBX->m_chassisNoise.m_basedOnTime = 1;
    _RBX->m_chassisNoise.m_minDisp = 0.1;
    _RBX->m_chassisNoise.m_maxDisp = 0.80000001;
    *(_QWORD *)_RBX->m_chassisNoise.m_scale.v = 1056964608i64;
    _RBX->m_chassisNoise.m_scale.v[2] = 0.5;
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RBX);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3f4ccccd
      vmovss  dword ptr [rbx+0A78h], xmm1
    }
    _RBX->m_chassisNoise.m_yawSpeedAtMaxNoise = 0.52359879;
    result = 1;
    _RBX->m_chassisNoise.m_reduceWhenNotControlled = 1;
    *(_QWORD *)_RBX->m_animPitch.v = 0i64;
    *(_QWORD *)&_RBX->m_animPitch.z = 0i64;
    *(_QWORD *)&_RBX->m_animYaw.y = 0i64;
    _RBX->m_friction.car.skidBaseFactor = 0.69999999;
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
  float physics_camRangeAdd; 

  _RBX = this;
  _RDI = vehDef;
  result = BgVehiclePhysicsGround::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+1E8h]
      vmovss  dword ptr [rbx+0A98h], xmm0
      vmovss  dword ptr [rbx+0AB8h], xmm0
    }
    _RBX->m_friction.car.timeToRecover = 0.0;
    _RBX->m_friction.tread.v[1] = vehDef->vehiclePhysicsDef.physics_frictionRecoverSpeedTgt;
    _RBX->m_friction.car.unused = 0.0;
    _RBX->m_friction.car.amountLost = vehDef->vehiclePhysicsDef.physics_frictionLost;
    _RBX->m_friction.car.skidBaseFactor = 0.5;
    _RBX->m_friction.car.handbrakeFric = vehDef->vehiclePhysicsDef.physics_frictionHandbrake;
    _RBX->m_friction.car.speedToBlock = vehDef->vehiclePhysicsDef.physics_frictionSpeedToBlock;
    _RBX->m_stabilizePitch = vehDef->vehiclePhysicsDef.physics_stabilizePitchSpeed;
    _RBX->m_stabilizeRoll = vehDef->vehiclePhysicsDef.physics_stabilizeRollSpeed;
    _RBX->m_gravFactorAir = vehDef->vehiclePhysicsDef.physics_extraGravityFactorAir;
    _RBX->m_cameraConfig.m_camFovDeltaMax = vehDef->vehiclePhysicsDef.physics_camFovDelta;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+1A4h]
      vmovss  dword ptr [rbx+0CACh], xmm0
    }
    _RBX->m_cameraConfig.m_camPitchDynamic = vehDef->vehiclePhysicsDef.physics_camPitchDynamic;
    physics_camRangeAdd = vehDef->vehiclePhysicsDef.physics_camRangeAdd;
    __asm { vmovss  dword ptr [rbx+0CBCh], xmm0 }
    _RBX->m_cameraConfig.m_camRangeAddMax = physics_camRangeAdd;
    _RBX->m_cameraConfig.m_camReturnFactor = 1.0;
    *(_QWORD *)&_RBX->m_cameraConfig.m_camFovDelta = 0i64;
    *(_QWORD *)&_RBX->m_cameraConfig.m_camOscillTime = 0i64;
    *(_QWORD *)&_RBX->m_cameraConfig.m_lastNSpeed = 0i64;
    switch ( _RBX->m_vehicleAnimProfile )
    {
      case VEH_ANIMPROFILE_TROMEO:
        _RBX->m_friction.car.skidBaseFactor = 0.69999999;
        goto LABEL_8;
      case VEH_ANIMPROFILE_VINDIA:
        _RBX->m_steering.m_offsetPointUp = -10.0;
        break;
      case VEH_ANIMPROFILE_MKILO:
        break;
      default:
LABEL_8:
        *(_QWORD *)_RBX->m_surfaceLinVel.v = 0i64;
        result = 1;
        *(_QWORD *)&_RBX->m_surfaceLinVel.z = 0i64;
        *(_QWORD *)&_RBX->m_surfaceAngVel.y = 0i64;
        return result;
    }
    _RBX->m_rumble.m_scaleWithSpeed = 0.001;
    _RBX->m_friction.car.skidBaseFactor = 0.0;
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
  unsigned int v14; 
  __int64 v16; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v76; 
  unsigned int v91; 
  int v92; 
  scr_string_t WheelBoneTag; 
  __int64 v94; 
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v107; 
  __int32 v108; 
  const char *v110; 
  char v112; 
  scr_string_t wheelTags[12]; 

  _RBX = this;
  _RDI = vehDef;
  result = BgVehiclePhysics::Setup(this, vehSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    physics_numWheels = vehDef->vehiclePhysicsDef.physics_numWheels;
    __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
    _RBX->m_wheelCount = physics_numWheels;
    if ( ((physics_numWheels & 1) != 0 || !physics_numWheels) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 582, ASSERT_TYPE_ASSERT, "(( m_wheelCount % 2 ) == 0 && m_wheelCount > 0)", (const char *)&queryFormat, "( m_wheelCount % 2 ) == 0 && m_wheelCount > 0") )
      __debugbreak();
    if ( _RBX->m_wheelCount > BGVehicles::GetWheelCount(NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 583, ASSERT_TYPE_ASSERT, "(m_wheelCount <= static_cast<uint>( BGVehicles::GetWheelCount( nullptr ) ))", (const char *)&queryFormat, "m_wheelCount <= static_cast<uint>( BGVehicles::GetWheelCount( nullptr ) )") )
      __debugbreak();
    memset_0(_RBX->m_wheels, 0, sizeof(_RBX->m_wheels));
    m_wheelCount = _RBX->m_wheelCount;
    _RDX = GLOBAL_UP;
    v14 = 0;
    __asm { vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000 }
    if ( m_wheelCount )
    {
      do
      {
        v16 = v14++;
        _RCX = v16;
        _RBX->m_wheels[_RCX].m_contactBodyId = 0xFFFFFF;
        _RBX->m_wheels[_RCX].m_skid = 1.0;
        _RBX->m_wheels[_RCX].m_blocked = 1.0;
        _RBX->m_wheels[_RCX].m_suspRawFraction = 1.0;
        __asm
        {
          vmovss  xmm0, dword ptr [rdx]
          vxorps  xmm1, xmm0, xmm3
          vmovss  dword ptr [rcx+rbx+2D8h], xmm1
          vmovss  xmm2, dword ptr [rdx+4]
          vxorps  xmm0, xmm2, xmm3
          vmovss  dword ptr [rcx+rbx+2DCh], xmm0
          vmovss  xmm1, dword ptr [rdx+8]
          vxorps  xmm2, xmm1, xmm3
          vmovss  dword ptr [rcx+rbx+2E0h], xmm2
        }
        m_wheelCount = _RBX->m_wheelCount;
      }
      while ( v14 < m_wheelCount );
    }
    if ( m_wheelCount < 0xC )
    {
      if ( 12 - m_wheelCount >= 4 )
      {
        _RCX = (__int64)&_RBX->m_wheels[m_wheelCount].m_suspDirLs.z;
        v25 = ((8 - m_wheelCount) >> 2) + 1;
        v26 = v25;
        m_wheelCount += 4 * v25;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx+2D8h]
            vmovups ymmword ptr [rcx-8], ymm0
            vmovups ymm1, ymmword ptr [rbx+2F8h]
            vmovups ymmword ptr [rcx+18h], ymm1
            vmovups ymm0, ymmword ptr [rbx+318h]
            vmovups ymmword ptr [rcx+38h], ymm0
            vmovups ymm1, ymmword ptr [rbx+338h]
            vmovups ymmword ptr [rcx+58h], ymm1
            vmovups xmm0, xmmword ptr [rbx+358h]
            vmovups xmmword ptr [rcx+78h], xmm0
            vmovsd  xmm1, qword ptr [rbx+368h]
            vmovsd  qword ptr [rcx+88h], xmm1
            vmovss  xmm0, dword ptr [rdx]
            vxorps  xmm2, xmm0, xmm3
            vmovss  dword ptr [rcx-8], xmm2
            vmovss  xmm1, dword ptr [rdx+4]
            vxorps  xmm0, xmm1, xmm3
            vmovss  dword ptr [rcx-4], xmm0
            vmovss  xmm2, dword ptr [rdx+8]
            vxorps  xmm1, xmm2, xmm3
            vmovss  dword ptr [rcx], xmm1
            vmovups ymm0, ymmword ptr [rbx+2D8h]
            vmovups ymmword ptr [rcx+90h], ymm0
            vmovups ymm1, ymmword ptr [rbx+2F8h]
            vmovups ymmword ptr [rcx+0B0h], ymm1
            vmovups ymm0, ymmword ptr [rbx+318h]
            vmovups ymmword ptr [rcx+0D0h], ymm0
            vmovups ymm1, ymmword ptr [rbx+338h]
            vmovups ymmword ptr [rcx+0F0h], ymm1
            vmovups xmm0, xmmword ptr [rbx+358h]
            vmovups xmmword ptr [rcx+110h], xmm0
            vmovsd  xmm1, qword ptr [rbx+368h]
            vmovsd  qword ptr [rcx+120h], xmm1
            vmovss  xmm0, dword ptr [rdx]
            vxorps  xmm2, xmm0, xmm3
            vmovss  dword ptr [rcx+90h], xmm2
            vmovss  xmm1, dword ptr [rdx+4]
            vxorps  xmm0, xmm1, xmm3
            vmovss  dword ptr [rcx+94h], xmm0
            vmovss  xmm2, dword ptr [rdx+8]
            vxorps  xmm1, xmm2, xmm3
            vmovss  dword ptr [rcx+98h], xmm1
            vmovups ymm0, ymmword ptr [rbx+2D8h]
            vmovups ymmword ptr [rcx+128h], ymm0
            vmovups ymm1, ymmword ptr [rbx+2F8h]
            vmovups ymmword ptr [rcx+148h], ymm1
            vmovups ymm0, ymmword ptr [rbx+318h]
            vmovups ymmword ptr [rcx+168h], ymm0
            vmovups ymm1, ymmword ptr [rbx+338h]
            vmovups ymmword ptr [rcx+188h], ymm1
            vmovups xmm0, xmmword ptr [rbx+358h]
            vmovups xmmword ptr [rcx+1A8h], xmm0
            vmovsd  xmm1, qword ptr [rbx+368h]
            vmovsd  qword ptr [rcx+1B8h], xmm1
            vmovss  xmm0, dword ptr [rdx]
            vxorps  xmm2, xmm0, xmm3
            vmovss  dword ptr [rcx+128h], xmm2
            vmovss  xmm1, dword ptr [rdx+4]
            vxorps  xmm0, xmm1, xmm3
            vmovss  dword ptr [rcx+12Ch], xmm0
            vmovss  xmm2, dword ptr [rdx+8]
            vxorps  xmm1, xmm2, xmm3
            vmovss  dword ptr [rcx+130h], xmm1
            vmovups ymm0, ymmword ptr [rbx+2D8h]
            vmovups ymmword ptr [rcx+1C0h], ymm0
            vmovups ymm1, ymmword ptr [rbx+2F8h]
            vmovups ymmword ptr [rcx+1E0h], ymm1
            vmovups ymm0, ymmword ptr [rbx+318h]
            vmovups ymmword ptr [rcx+200h], ymm0
            vmovups ymm1, ymmword ptr [rbx+338h]
            vmovups ymmword ptr [rcx+220h], ymm1
            vmovups xmm0, xmmword ptr [rbx+358h]
            vmovups xmmword ptr [rcx+240h], xmm0
            vmovsd  xmm1, qword ptr [rbx+368h]
            vmovsd  qword ptr [rcx+250h], xmm1
            vmovss  xmm0, dword ptr [rdx]
            vxorps  xmm2, xmm0, xmm3
            vmovss  dword ptr [rcx+1C0h], xmm2
            vmovss  xmm1, dword ptr [rdx+4]
            vxorps  xmm0, xmm1, xmm3
            vmovss  dword ptr [rcx+1C4h], xmm0
          }
          _RCX += 608i64;
          __asm
          {
            vmovss  xmm2, dword ptr [rdx+8]
            vxorps  xmm1, xmm2, xmm3
            vmovss  dword ptr [rcx-98h], xmm1
          }
          --v26;
        }
        while ( v26 );
      }
      if ( m_wheelCount < 0xC )
      {
        _RCX = (__int64)&_RBX->m_wheels[m_wheelCount];
        v76 = 12 - m_wheelCount;
        do
        {
          _RCX += 152i64;
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx+2D8h]
            vmovups ymmword ptr [rcx-98h], ymm0
            vmovups ymm1, ymmword ptr [rbx+2F8h]
            vmovups ymmword ptr [rcx-78h], ymm1
            vmovups ymm0, ymmword ptr [rbx+318h]
            vmovups ymmword ptr [rcx-58h], ymm0
            vmovups ymm1, ymmword ptr [rbx+338h]
            vmovups ymmword ptr [rcx-38h], ymm1
            vmovups xmm0, xmmword ptr [rbx+358h]
            vmovups xmmword ptr [rcx-18h], xmm0
            vmovsd  xmm1, qword ptr [rbx+368h]
            vmovsd  qword ptr [rcx-8], xmm1
            vmovss  xmm0, dword ptr [rdx]
            vxorps  xmm2, xmm0, xmm3
            vmovss  dword ptr [rcx-98h], xmm2
            vmovss  xmm0, dword ptr [rdx+4]
            vxorps  xmm1, xmm0, xmm3
            vmovss  dword ptr [rcx-94h], xmm1
            vmovss  xmm2, dword ptr [rdx+8]
            vxorps  xmm0, xmm2, xmm3
            vmovss  dword ptr [rcx-90h], xmm0
          }
          --v76;
        }
        while ( v76 );
      }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+150h]
      vmovss  dword ptr [rbx+0A0Ch], xmm1
      vmovss  xmm0, dword ptr [rdi+14Ch]
      vmovss  dword ptr [rbx+0A04h], xmm0
      vmovss  dword ptr [rbx+0A08h], xmm0
      vmovss  dword ptr [rbx+0A10h], xmm1
    }
    _RBX->m_wheelCommon.m_suspNoiseAmp = vehDef->vehiclePhysicsDef.physics_suspNoiseAmp;
    v91 = 0;
    v92 = 0;
    _RBX->m_wheelCommon.m_radius = vehDef->vehiclePhysicsDef.physics_wheelRadius;
    _RBX->m_wheelCommon.m_hardPointOffCenterLs = vehDef->vehiclePhysicsDef.physics_hardPointOffset;
    for ( _RBX->m_massFactorOnContact = vehDef->vehiclePhysicsDef.physics_massFactorContact; v92 < BGVehicles::GetWheelCount(vehDef); ++v92 )
    {
      WheelBoneTag = BGVehicles::GetWheelBoneTag(vehDef, v92);
      if ( WheelBoneTag )
      {
        v94 = v91++;
        wheelTags[v94] = WheelBoneTag;
      }
    }
    if ( v91 != _RBX->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 637, ASSERT_TYPE_ASSERT, "( wheelCount == m_wheelCount )", "Mistmach number of wheels. Wheel count specified in Vehicle Def != Available wheel bone tags") )
      __debugbreak();
    BgVehiclePhysicsGround::SetupWheelsFromBones(_RBX, wheelTags);
    _RBX->m_chassisNoise.m_enabled = 0;
    _RBX->m_topAngularSpeedLs.v[0] = 2.0943952;
    _RBX->m_topAngularSpeedLs.v[1] = 2.0943952;
    _RBX->m_topAngularSpeedLs.v[2] = 2.4434609;
    _RBX->m_axleBodyIds[0] = 0xFFFFFF;
    _RBX->m_axleBodyIds[1] = 0xFFFFFF;
    _RBX->m_axleBodyIds[2] = 0xFFFFFF;
    _RBX->m_axleBodyIds[3] = 0xFFFFFF;
    _RBX->m_axleBodyIds[4] = 0xFFFFFF;
    _RBX->m_axleBodyIds[5] = 0xFFFFFF;
    _RBX->m_axleBodiesAllowed = vehDef->vehiclePhysicsDef.physics_axleRigidBodies;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+158h]
      vxorps  xmm6, xmm6, xmm6
      vmaxss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx+0C78h], xmm0
    }
    _RBX->m_engine.m_accelForce = 260.0;
    _RBX->m_engine.m_offsetPoint = -25.0;
    _RBX->m_engine.m_reductionOnHB = 0.30000001;
    _RBX->m_engine.m_minTimeInGear = 0.25;
    _RBX->m_engine.m_clutchTime = 0.15000001;
    _RBX->m_engine.m_gearPeriod = 0.2;
    *(_QWORD *)&_RBX->m_engine.m_lastNormalSpeed = 0i64;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+60h]
      vmulss  xmm1, xmm0, cs:__real@3d68ba2f
      vmaxss  xmm1, xmm1, xmm6
      vmovss  dword ptr [rbx+0B0Ch], xmm1
    }
    _RBX->m_engine.m_offsetPoint = vehDef->vehiclePhysicsDef.physics_engineOffsetPoint;
    _RBX->m_engine.m_reductionOnHB = vehDef->vehiclePhysicsDef.physics_engineReductionOnHB;
    _RBX->m_steering.m_force = vehDef->vehiclePhysicsDef.physics_steeringForce;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+2E8h]
      vmaxss  xmm1, xmm0, cs:__real@3f800000
      vmovss  dword ptr [rbx+0AC0h], xmm1
      vmovss  xmm2, dword ptr [rdi+1B0h]
      vmaxss  xmm0, xmm2, xmm6
      vminss  xmm1, xmm0, cs:__real@447a0000
      vmovss  dword ptr [rbx+0AC4h], xmm1
    }
    _RBX->m_steering.m_maxYawSpeed = vehDef->vehiclePhysicsDef.physics_steeringMaxYawSpeed;
    _RBX->m_steering.m_offsetPoint = vehDef->vehiclePhysicsDef.physics_steeringOffsetPoint;
    _RBX->m_steering.m_offsetPointUp = vehDef->vehiclePhysicsDef.physics_steeringOffsetPointUp;
    _RBX->m_steering.m_returnSpeed = vehDef->vehiclePhysicsDef.physics_steeringReturnSpeed;
    _RBX->m_steering.m_changeDirSpeed = 0.0;
    _RBX->m_steering.m_handbrakeFactor = vehDef->vehiclePhysicsDef.physics_steeringHandbrake;
    _RBX->m_steering.m_steerSpeed = vehDef->vehiclePhysicsDef.physics_steeringSpeed;
    _RBX->m_steering.m_steerSpeedIncrease = vehDef->vehiclePhysicsDef.physics_steeringSpeedIncrease;
    *(_QWORD *)&_RBX->m_stuntManager.m_currentType = 0i64;
    _RBX->m_stuntManager.m_stuntDuration = 0.0;
    if ( Physics_IsPredictiveWorld(_RBX->m_worldId) )
      BgVehiclePhysicsGround::SoundData::Setup(&_RBX->m_sound, vehDef);
    m_vehicleAnimProfile = _RBX->m_vehicleAnimProfile;
    *(_QWORD *)&_RBX->m_timeInAir = 0i64;
    _RBX->m_timeToHitPlayer = 0.0;
    if ( m_vehicleAnimProfile )
    {
      v107 = m_vehicleAnimProfile - 1;
      if ( v107 )
      {
        v108 = v107 - 10;
        if ( v108 )
        {
          if ( v108 != 8 )
          {
LABEL_43:
            __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
            return 1;
          }
          _RDI = DVARFLT_bg_mkiloReverseTopSpeedMPH;
          if ( !DVARFLT_bg_mkiloReverseTopSpeedMPH )
          {
            v110 = "bg_mkiloReverseTopSpeedMPH";
            goto LABEL_39;
          }
LABEL_41:
          Dvar_CheckFrontendServerThread(_RDI);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+28h]
            vcomiss xmm0, xmm6
          }
          if ( !v112 )
          {
            __asm
            {
              vmulss  xmm0, xmm0, cs:__real@418ccccd
              vmovss  dword ptr [rbx+1F8h], xmm0
            }
          }
          goto LABEL_43;
        }
        _RDI = DVARFLT_bg_dechoReverseTopSpeedMPH;
        if ( DVARFLT_bg_dechoReverseTopSpeedMPH )
          goto LABEL_41;
        v110 = "bg_dechoReverseTopSpeedMPH";
      }
      else
      {
        _RDI = DVARFLT_bg_tromeoReverseTopSpeedMPH;
        if ( DVARFLT_bg_tromeoReverseTopSpeedMPH )
          goto LABEL_41;
        v110 = "bg_tromeoReverseTopSpeedMPH";
      }
    }
    else
    {
      _RDI = DVARFLT_bg_atangoReverseTopSpeedMPH;
      if ( DVARFLT_bg_atangoReverseTopSpeedMPH )
        goto LABEL_41;
      v110 = "bg_atangoReverseTopSpeedMPH";
    }
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v110) )
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
  this->m_camFovDeltaMax = physDef->physics_camFovDelta;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0ACh]
    vmovss  dword ptr [rcx+4], xmm0
  }
  this->m_camPitchDynamic = physDef->physics_camPitchDynamic;
  this->m_camRangeAddMax = physDef->physics_camRangeAdd;
  *(_QWORD *)&this->m_camFovDelta = 0i64;
  *(_QWORD *)&this->m_camOscillTime = 0i64;
  *(_QWORD *)&this->m_lastNSpeed = 0i64;
  __asm { vmovss  dword ptr [rcx+14h], xmm0 }
  this->m_camReturnFactor = 1.0;
}

/*
==============
BgVehiclePhysicsGround::Engine::Setup
==============
*/
void BgVehiclePhysicsGround::Engine::Setup(BgVehiclePhysicsGround::Engine *this, const VehicleDef *vehDef)
{
  this->m_accelForce = 260.0;
  this->m_offsetPoint = -25.0;
  this->m_reductionOnHB = 0.30000001;
  *(_QWORD *)&this->m_lastNormalSpeed = 0i64;
  this->m_minTimeInGear = 0.25;
  this->m_clutchTime = 0.15000001;
  this->m_gearPeriod = 0.2;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+60h]
    vmulss  xmm2, xmm0, cs:__real@3d68ba2f
    vxorps  xmm1, xmm1, xmm1
    vmaxss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rcx+8], xmm2
  }
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
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+1E8h]
    vmovss  dword ptr [rcx], xmm0
    vmovss  dword ptr [rcx+20h], xmm0
  }
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
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+2E8h]
    vmaxss  xmm1, xmm0, cs:__real@3f800000
    vmovss  dword ptr [rcx+4], xmm1
    vmovss  xmm2, dword ptr [rdx+1B0h]
    vxorps  xmm0, xmm0, xmm0
    vmaxss  xmm1, xmm2, xmm0
    vminss  xmm2, xmm1, cs:__real@447a0000
    vmovss  dword ptr [rcx+8], xmm2
  }
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
  unsigned int v5; 
  __int64 v8; 
  const dvar_t *v9; 

  _RBX = this;
  if ( !this->m_vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1328, ASSERT_TYPE_ASSERT, "(m_vehicleSystem)", (const char *)&queryFormat, "m_vehicleSystem") )
    __debugbreak();
  if ( !wheelTags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1329, ASSERT_TYPE_ASSERT, "(wheelTags)", (const char *)&queryFormat, "wheelTags") )
    __debugbreak();
  if ( !_RBX->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1330, ASSERT_TYPE_ASSERT, "( m_wheelCount != 0 )", "BgVehiclePhysicsGround::SetupWheelsFromBones() with 0 wheels should not happen") )
    __debugbreak();
  v5 = 0;
  if ( _RBX->m_wheelCount )
  {
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    while ( 1 )
    {
      _RDI = v5;
      v8 = (__int64)_RBX->m_vehicleSystem->PhysicsGetBoneLocalMatrix(_RBX->m_vehicleSystem, _RBX->m_entityNumber, (scr_string_t)wheelTags[v5], &_RBX->m_wheels[_RDI].m_boneIndex);
      v9 = DVARBOOL_bg_vehHandleVehicleNullPtr;
      _RSI = v8;
      if ( !DVARBOOL_bg_vehHandleVehicleNullPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehHandleVehicleNullPtr") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( !v9->current.enabled )
        break;
      if ( _RSI )
        goto LABEL_21;
      *(_QWORD *)_RBX->m_wheels[_RDI].m_centerLs.v = 0i64;
      __asm { vmovaps xmm0, xmm6 }
LABEL_22:
      ++v5;
      __asm { vmovss  dword ptr [rdi+rbx+2F8h], xmm0 }
      if ( v5 >= _RBX->m_wheelCount )
      {
        __asm { vmovaps xmm6, [rsp+78h+var_38] }
        return;
      }
    }
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1344, ASSERT_TYPE_ASSERT, "(boneMat)", (const char *)&queryFormat, "boneMat") )
      __debugbreak();
LABEL_21:
    _RBX->m_wheels[_RDI].m_centerLs.v[0] = *(float *)(_RSI + 16);
    _RBX->m_wheels[_RDI].m_centerLs.v[1] = *(float *)(_RSI + 20);
    __asm { vmovss  xmm0, dword ptr [rsi+18h] }
    goto LABEL_22;
  }
}

/*
==============
BgVehiclePhysicsCarBase::StabilizeAngles
==============
*/

void __fastcall BgVehiclePhysicsCarBase::StabilizeAngles(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  int v20; 
  unsigned int v21; 
  unsigned int v27; 
  unsigned int m_vehicleAnimProfile; 
  unsigned __int8 v31; 
  char v32; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  if ( !this->m_playerControlled )
    goto LABEL_39;
  __asm { vmovss  xmm1, cs:__real@42340000; angleDeg }
  if ( BgVehiclePhysicsGround::IsTooInclinedToDamp(this, *(float *)&_XMM1) )
  {
LABEL_39:
    if ( _RBX->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@41000000; pitchSpeed
        vmovss  xmm2, cs:__real@40000000; rollSpeed
        vmovaps xmm1, xmm7; deltaTime
        vmovaps xmm7, [rsp+48h+var_28]
      }
      BgVehiclePhysicsGround::TryStabilizeAngles(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      return;
    }
LABEL_17:
    __asm { vmovaps xmm7, [rsp+48h+var_28] }
    return;
  }
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( _RBX->m_vehicleAnimProfile )
  {
    v20 = 720916;
    if ( !_RBX->IsInAir(_RBX) || (v21 = _RBX->m_vehicleAnimProfile, v21 <= 0x13) && _bittest(&v20, v21) )
    {
      m_vehicleAnimProfile = _RBX->m_vehicleAnimProfile;
      if ( m_vehicleAnimProfile <= 0x13 && _bittest(&v20, m_vehicleAnimProfile) )
      {
        __asm { vmovss  xmm6, dword ptr [rbx+0CF4h] }
      }
      else
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehDampRoll, "bg_vehDampRoll");
        m_vehicleAnimProfile = _RBX->m_vehicleAnimProfile;
        __asm { vmovaps xmm6, xmm0 }
      }
      if ( m_vehicleAnimProfile <= 0x13 && (v31 = _bittest(&v20, m_vehicleAnimProfile)) != 0 )
        __asm { vmovss  xmm0, dword ptr [rbx+0CF8h] }
      else
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehDampPitch, "bg_vehDampPitch");
      __asm
      {
        vmovss  xmm1, cs:__real@3f000000
        vcomiss xmm1, dword ptr [rbx+2B0h]
      }
      if ( !(v31 | v32) )
      {
        __asm
        {
          vmulss  xmm6, xmm6, cs:__real@40000000
          vmulss  xmm0, xmm0, cs:__real@40000000
        }
      }
      __asm
      {
        vmovaps xmm3, xmm0
        vmovaps xmm2, xmm6
      }
    }
    else
    {
      if ( !_RBX->IsInAir(_RBX) )
      {
        v27 = _RBX->m_vehicleAnimProfile;
        if ( (v27 > 0x13 || !_bittest(&v20, v27)) && _RBX->m_wheels[0].m_contactBodyId == 0xFFFFFF && _RBX->m_wheels[1].m_contactBodyId == 0xFFFFFF && !_RBX->IsInAir(_RBX) )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3f000000
            vcomiss xmm0, dword ptr [rbx+2B0h]
          }
        }
        goto LABEL_16;
      }
      __asm
      {
        vmovss  xmm3, cs:__real@3e800000; pitchSpeed
        vmovss  xmm2, cs:__real@3f000000; rollSpeed
      }
    }
    __asm { vmovaps xmm1, xmm7; deltaTime }
    BgVehiclePhysicsGround::TryStabilizeAngles(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
LABEL_16:
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
    goto LABEL_17;
  }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
  __asm { vcomiss xmm0, cs:__real@3e99999a }
  if ( v31 )
  {
    __asm
    {
      vmovss  xmm6, cs:__real@40000000
      vmovss  xmm3, cs:__real@3f800000; pitchSpeed
    }
  }
  else
  {
    if ( _RBX->IsInAir(_RBX) )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3dcccccd
        vcomiss xmm0, dword ptr [rbx+2B0h]
      }
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehAtvDamp, "bg_vehAtvDamp");
    __asm { vmovaps xmm6, xmm0 }
    _EAX = BgVehiclePhysicsGround::IsFacingUpward(_RBX);
    _ECX = 0;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm3, xmm1, xmm6, xmm2
    }
  }
  __asm
  {
    vmovaps xmm2, xmm6; rollSpeed
    vmovaps xmm1, xmm7; deltaTime
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  BgVehiclePhysicsGround::TryStabilizeAngles(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
}

/*
==============
BgVehiclePhysicsTank::StabilizeAngles
==============
*/

void __fastcall BgVehiclePhysicsTank::StabilizeAngles(BgVehiclePhysicsTank *this, double deltaTime, __int64 a3, double _XMM3_8)
{
  char v22; 
  char v23; 
  vec3_t angles; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  if ( this->m_playerControlled )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; rollSpeed
      vmovaps xmmword ptr [r11-18h], xmm6
      vxorps  xmm3, xmm3, xmm3; pitchSpeed
      vmovaps xmmword ptr [r11-38h], xmm8
      vxorps  xmm6, xmm6, xmm6
    }
    BgVehiclePhysicsGround::TryStabilizeAngles(this, *(float *)&deltaTime, *(float *)&_XMM2, *(float *)&_XMM3);
    AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+angles]
      vmulss  xmm5, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
    }
    _RDI = DCONST_DVARFLT_bg_bradleyPitchRecover;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm2, 1
      vsubss  xmm1, xmm5, xmm4
      vmulss  xmm8, xmm1, cs:__real@43b40000
      vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    if ( !DCONST_DVARFLT_bg_bradleyPitchRecover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyPitchRecover") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+28h]; pitchSpeed
      vcomiss xmm3, xmm6
    }
    if ( !(v22 | v23) )
    {
      __asm { vcomiss xmm8, cs:__real@41200000 }
      if ( !(v22 | v23) )
      {
        __asm
        {
          vxorps  xmm2, xmm2, xmm2; rollSpeed
          vmovaps xmm1, xmm7; deltaTime
        }
        BgVehiclePhysicsGround::TryStabilizeAngles(this, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      }
    }
    __asm
    {
      vmovaps xmm6, [rsp+98h+var_18]
      vmovaps xmm8, [rsp+98h+var_38]
    }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
}

/*
==============
BgVehiclePhysicsTwoWheeled::StabilizeAngles
==============
*/

void __fastcall BgVehiclePhysicsTwoWheeled::StabilizeAngles(BgVehiclePhysicsTwoWheeled *this, double deltaTime)
{
  vec3_t outVelLs; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm3, cs:__real@3ecccccd; pitchSpeed
    vsubss  xmm6, xmm1, xmm0
    vmulss  xmm2, xmm6, cs:__real@41000000; rollSpeed
    vmovaps xmm1, xmm7; deltaTime
  }
  BgVehiclePhysicsGround::TryStabilizeAngles(this, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  __asm
  {
    vmulss  xmm3, xmm6, cs:__real@40a00000; speed
    vmovaps xmm2, xmm7; frameTime
    vxorps  xmm1, xmm1, xmm1; dst
  }
  BgVehiclePhysics::DampLerp(outVelLs.v, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
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

char __fastcall BgVehiclePhysicsCarBase::Step(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  __int64 v17; 
  const BgVehiclePhysicsGround::Wheel *v18; 
  __int64 m_wheelCount; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps xmm6, xmm1 }
  BgVehiclePhysicsGround::Step(this, *(float *)&deltaTime);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysicsGround::ComputeSuspensionForces(_RBX, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm3, cs:__real@3fe66666; speed
    vmovss  xmm1, dword ptr [rbx+0A04h]; dst
    vmovaps xmm2, xmm6; frameTime
  }
  BgVehiclePhysics::DampLerp(&_RBX->m_wheelCommon.m_suspStiffnessAdaptive, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm3, cs:__real@3e800000; speed
    vmovss  xmm1, dword ptr [rbx+0A0Ch]; dst
    vmovaps xmm2, xmm6; frameTime
  }
  BgVehiclePhysics::DampLerp(&_RBX->m_wheelCommon.m_suspDampingAdaptive, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm2, cs:ATV_FRONTAL_SUSP_OFFSET; frontalOffset
    vmovaps xmm1, xmm6; deltaTime
  }
  BgVehiclePhysicsGround::ComputeFrontalSuspensionForce(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, _RBX->m_wheelCount);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysicsCarBase::ApplySurfaceVelocity(_RBX, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))_RBX->AdjustCenterOfMass)(_RBX);
  m_wheelCount = _RBX->m_wheelCount;
  if ( (_DWORD)m_wheelCount != 12 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbx+0C78h]
    }
    if ( (unsigned int)m_wheelCount < 0xC )
    {
      v18 = &_RBX->m_wheels[m_wheelCount];
      if ( _RBX->m_wheels[m_wheelCount].m_contactBodyId != 0xFFFFFF )
      {
        __asm { vmovaps xmm1, xmm6; deltaTime }
        BgVehiclePhysicsGround::ApplySingleSuspensionForce(_RBX, *(float *)&_XMM1, v18);
      }
    }
  }
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *, __int64, const BgVehiclePhysicsGround::Wheel *))_RBX->ApplyEngine)(_RBX, v17, v18);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))_RBX->ApplyExtraGravity)(_RBX);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))_RBX->ApplySteering)(_RBX);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))_RBX->ApplyFriction)(_RBX);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysicsCarBase::DampVelocitiesAndStop(_RBX, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))_RBX->InterpolateAnimParams)(_RBX);
  BgVehiclePhysicsGround::ComputeAverageWheelValues(_RBX);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))_RBX->ComputeEngineSound)(_RBX);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysicsCarBase *))_RBX->ApplyRumble)(_RBX);
  __asm { vmovaps xmm2, xmm6; deltaTime }
  BgVehiclePhysicsCarBase::CameraConfig::Step(&_RBX->m_cameraConfig, _RBX, *(float *)&_XMM2);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysicsCarBase::ApplyExtraDamping(_RBX, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysicsGround::ApplySuspensionForces(_RBX, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysicsCarBase::StabilizeAngles(_RBX, *(float *)&_XMM1);
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return 1;
}

/*
==============
BgVehiclePhysicsGround::Step
==============
*/

bool __fastcall BgVehiclePhysicsGround::Step(BgVehiclePhysicsGround *this, double deltaTime)
{
  char v9; 
  char v10; 
  const char *v15; 
  BgVehiclePhysicsGround_vtbl *v20; 
  unsigned int v22; 
  __int64 v24; 
  __int64 v29; 
  bool v31; 
  bool v33; 
  bool result; 
  vec3_t outVelLs; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps [rsp+0A8h+var_38], xmm7 }
  _RDI = this;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovaps xmm7, xmm1
  }
  BgVehiclePhysics::Step(this, *(float *)&deltaTime);
  BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 4u);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+0C98h]
    vmulss  xmm1, xmm2, xmm0
    vcomiss xmm1, cs:__real@3a83126f
    vxorps  xmm6, xmm6, xmm6
  }
  if ( v9 | v10 )
    goto LABEL_5;
  __asm { vcomiss xmm2, xmm6 }
  if ( v9 | v10 )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rdi+2B0h]
  }
  if ( v9 | v10 )
  {
LABEL_5:
    _RDI->m_fwSpeedOnCollision = 0.0;
  }
  else
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(_RDI, &_RDI->m_linearVelocityWs, &outVelLs);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0C98h]
      vmaxss  xmm1, xmm0, dword ptr [rsp+0A8h+outVelLs]
      vmovss  dword ptr [rsp+0A8h+outVelLs], xmm1
    }
    BgVehiclePhysics::ComputeVelocityWorldSpace(_RDI, &outVelLs, &_RDI->m_linearVelocityWs);
  }
  if ( _RDI->m_vehicleAnimProfile )
  {
    _RBX = DCONST_DVARFLT_bg_vehDampFwMomentum;
    if ( DCONST_DVARFLT_bg_vehDampFwMomentum )
      goto LABEL_13;
    v15 = "bg_vehDampFwMomentum";
  }
  else
  {
    _RBX = DCONST_DVARFLT_bg_vehDampFwMomentumAtv;
    if ( DCONST_DVARFLT_bg_vehDampFwMomentumAtv )
      goto LABEL_13;
    v15 = "bg_vehDampFwMomentumAtv";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v15) )
    __debugbreak();
LABEL_13:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+28h]; speed
    vmovaps xmm2, xmm7; frameTime
    vxorps  xmm1, xmm1, xmm1; dst
  }
  BgVehiclePhysics::DampLerp(&_RDI->m_fwSpeedOnCollision, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm { vmovaps xmm1, xmm7; deltaTime }
  BgVehiclePhysicsGround::UpdateControlTimes(_RDI, *(float *)&_XMM1);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 2u);
  v20 = _RDI->__vftable;
  __asm
  {
    vmovaps xmm1, xmm7
    vmovss  dword ptr [rdi+0A1Ch], xmm0
  }
  ((void (__fastcall *)(BgVehiclePhysicsGround *))v20->UpdateSteeringAngle)(_RDI);
  v22 = 0;
  if ( _RDI->m_wheelCount )
  {
    __asm { vmovss  xmm3, cs:__real@42652ee0 }
    do
    {
      v24 = v22++;
      _RCX = 152 * v24;
      __asm
      {
        vmulss  xmm0, xmm7, dword ptr [rcx+rdi+354h]
        vmulss  xmm1, xmm0, xmm3
        vaddss  xmm2, xmm1, dword ptr [rcx+rdi+350h]
        vmovss  dword ptr [rcx+rdi+350h], xmm2
      }
    }
    while ( v22 < _RDI->m_wheelCount );
  }
  if ( Physics_IsPredictiveWorld(_RDI->m_worldId) && _RDI->m_playerControlled )
  {
    v29 = (__int64)_RDI->m_vehicleSystem->PhysicsGetEventSystem(_RDI->m_vehicleSystem);
    (*(void (__fastcall **)(__int64, BgVehiclePhysicsGround *))(*(_QWORD *)v29 + 40i64))(v29, _RDI);
  }
  __asm { vmovss  xmm8, dword ptr [rdi+0C88h] }
  v31 = _RDI->IsInAir(_RDI);
  __asm { vmovss  xmm0, dword ptr [rdi+0C88h] }
  v33 = !v31;
  if ( v31 )
  {
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmaxss  xmm1, xmm0, xmm6
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm0, xmm7
      vminss  xmm1, xmm0, xmm6
    }
  }
  __asm
  {
    vcomiss xmm8, xmm6
    vmovss  dword ptr [rdi+0C88h], xmm1
  }
  if ( v31 )
  {
    __asm
    {
      vcomiss xmm1, xmm6
      vcomiss xmm8, xmm6
    }
  }
  __asm
  {
    vaddss  xmm0, xmm7, dword ptr [rdi+0C94h]
    vmovaps xmm8, [rsp+0A8h+var_48]
  }
  result = 1;
  __asm
  {
    vmovss  dword ptr [rdi+0C94h], xmm0
    vmovss  xmm0, dword ptr [rdi+0B68h]
    vcomiss xmm0, xmm6
    vmovaps xmm6, [rsp+0A8h+var_28]
  }
  if ( v33 )
  {
    _RDI->m_stuntManager.m_stuntDuration = 0.0;
    _RDI->m_stuntManager.m_currentType = NO_STUNT;
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi+0B68h], xmm0
    }
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
BgVehiclePhysicsSentryDrone::Step
==============
*/

bool __fastcall BgVehiclePhysicsSentryDrone::Step(BgVehiclePhysicsSentryDrone *this, double deltaTime)
{
  unsigned int m_wheelCount; 
  __int64 v14; 
  char v35; 
  const dvar_t *v36; 
  bool result; 
  vec3_t outVelLs; 

  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm7
    vmovaps xmm7, xmm1
  }
  _RBX = this;
  BgVehiclePhysicsGround::Step(this, *(float *)&deltaTime);
  if ( !BgVehiclePhysics::IsKeyframed(_RBX) )
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_58], xmm8
      vmovaps xmm1, xmm7; deltaTime
      vmovaps [rsp+0C8h+var_68], xmm9
    }
    BgVehiclePhysicsGround::ComputeSuspensionForces(_RBX, *(float *)&_XMM1);
    _RDI = DCONST_DVARFLT_bg_wheelsonFrontalOffset;
    m_wheelCount = _RBX->m_wheelCount;
    if ( !DCONST_DVARFLT_bg_wheelsonFrontalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonFrontalOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+28h]; frontalOffset
      vmovaps xmm1, xmm7; deltaTime
    }
    BgVehiclePhysicsGround::ComputeFrontalSuspensionForce(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, m_wheelCount);
    __asm { vmovaps xmm1, xmm7; deltaTime }
    BgVehiclePhysicsGround::ApplySuspensionForces(_RBX, *(float *)&_XMM1);
    v14 = _RBX->m_wheelCount;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( (_DWORD)v14 != 12 )
    {
      __asm { vcomiss xmm6, dword ptr [rbx+0C78h] }
      if ( (unsigned int)v14 < 0xC && _RBX->m_wheels[v14].m_contactBodyId != 0xFFFFFF )
      {
        __asm { vmovaps xmm1, xmm7; deltaTime }
        BgVehiclePhysicsGround::ApplySingleSuspensionForce(_RBX, *(float *)&_XMM1, &_RBX->m_wheels[v14]);
      }
    }
    BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_linearVelocityWs, &outVelLs);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm3, xmm0, dword ptr [rbx+190h]
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm2, xmm1, dword ptr [rbx+18Ch]
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm1, xmm0, dword ptr [rbx+194h]
      vmovss  xmm9, cs:__real@3f800000
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm9; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vcomiss xmm0, cs:__real@3e8483ef
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm1, xmm1, dword ptr [rsp+0C8h+outVelLs+4]
      vmovss  dword ptr [rsp+0C8h+outVelLs+4], xmm1
    }
    BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &outVelLs, &_RBX->m_linearVelocityWs);
    __asm { vmovaps xmm1, xmm7; deltaTime }
    BgVehiclePhysicsSentryDrone::ApplyEngine(_RBX, *(float *)&_XMM1);
    __asm { vmovaps xmm8, xmm9 }
    if ( !_RBX->m_wheelInContactCount )
    {
      if ( Physics_IsRigidBodyValid(_RBX->m_worldId, _RBX->m_lastColliderBodyId) )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3e800000
          vcomiss xmm0, dword ptr [rbx+2B0h]
          vmovss  xmm8, cs:__real@3f000000
        }
      }
      else
      {
        __asm { vxorps  xmm8, xmm8, xmm8 }
      }
    }
    BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_angularVelocityWs, &outVelLs);
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
    __asm { vcomiss xmm0, xmm6 }
    if ( v35 )
    {
      v36 = DCONST_DVARBOOL_bg_wheelsonReverseSteering;
      if ( !DCONST_DVARBOOL_bg_wheelsonReverseSteering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonReverseSteering") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      if ( v36->current.enabled )
        __asm { vmovss  xmm9, cs:__real@bf800000 }
    }
    _RDI = DCONST_DVARFLT_bg_wheelsonTurnFactor;
    if ( !DCONST_DVARFLT_bg_wheelsonTurnFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonTurnFactor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
    __asm
    {
      vmulss  xmm1, xmm0, cs:VELOCITY_FACTOR_COMP
      vmulss  xmm1, xmm1, dword ptr [rbx+0AC4h]
      vmovss  xmm2, cs:YAW_DEG_SEC_0
      vmulss  xmm0, xmm1, xmm9
      vmulss  xmm1, xmm2, cs:__real@3c8efa35
      vmulss  xmm3, xmm0, xmm8
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm3, xmm0, cs:k_1
      vmulss  xmm2, xmm3, xmm6
      vmovss  dword ptr [rsp+0C8h+outVelLs+8], xmm2
    }
    BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &outVelLs, &_RBX->m_angularVelocityWs);
    __asm { vmovaps xmm1, xmm7; deltaTime }
    BgVehiclePhysicsTreadedBase::DampVelocitiesAndStop(_RBX, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm7; deltaTime }
    BgVehiclePhysicsGround::ApplyExtraGravity(_RBX, *(float *)&_XMM1);
    _RDI = DCONST_DVARFLT_bg_wheelsonRollReturnSpeed;
    __asm
    {
      vmovaps xmm9, [rsp+0C8h+var_68]
      vmovaps xmm8, [rsp+0C8h+var_58]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
    if ( !DCONST_DVARFLT_bg_wheelsonRollReturnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonRollReturnSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm3, cs:__real@40800000; pitchSpeed
      vmovss  xmm2, dword ptr [rdi+28h]; rollSpeed
      vmovaps xmm1, xmm7; deltaTime
    }
    BgVehiclePhysicsGround::TryStabilizeAngles(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+178h]
      vmovss  xmm1, dword ptr [rbx+174h]
      vmulss  xmm2, xmm1, dword ptr [rbx+1A4h]
      vmulss  xmm3, xmm0, dword ptr [rbx+1A8h]
      vmovss  xmm0, dword ptr [rbx+17Ch]
      vmulss  xmm1, xmm0, dword ptr [rbx+1ACh]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm1, xmm2, cs:__real@3d68ba2f; mph
    }
    BgVehiclePhysicsRevSound::SetMph(&_RBX->m_revSound, *(float *)&_XMM1);
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 0);
    __asm { vmovss  dword ptr [rbx+0A44h], xmm0 }
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 1u);
    __asm { vmovss  dword ptr [rbx+0A48h], xmm0 }
  }
  result = 1;
  __asm { vmovaps xmm7, [rsp+0C8h+var_48] }
  return result;
}

/*
==============
BgVehiclePhysicsTank::Step
==============
*/

bool __fastcall BgVehiclePhysicsTank::Step(BgVehiclePhysicsTank *this, double deltaTime)
{
  const dvar_t *v24; 
  unsigned int m_wheelCount; 
  unsigned int v58; 
  __int64 v73; 
  char v88; 
  char v89; 
  char v94; 
  bool v95; 
  __int64 v105; 
  bool result; 
  int v118; 
  int v119; 
  int v120; 
  vec3_t outVelLs; 

  __asm
  {
    vmovaps [rsp+100h+var_80], xmm10
    vmovaps xmm10, xmm1
  }
  _RDI = this;
  BgVehiclePhysicsGround::Step(this, *(float *)&deltaTime);
  if ( BgVehiclePhysics::IsKeyframed(_RDI) )
  {
    result = 1;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+100h+var_40], xmm6
      vmovaps [rsp+100h+var_50], xmm7
      vmovaps [rsp+100h+var_60], xmm8
      vmovaps [rsp+100h+var_70], xmm9
      vmovaps xmm1, xmm10; deltaTime
      vmovaps [rsp+100h+var_90], xmm11
    }
    BgVehiclePhysicsGround::ComputeSuspensionForces(_RDI, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm10; deltaTime }
    BgVehiclePhysicsGround::ApplySuspensionForces(_RDI, *(float *)&_XMM1);
    BgVehiclePhysics::ComputeVelocityLocalSpace(_RDI, &_RDI->m_linearVelocityWs, &outVelLs);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm3, xmm0, dword ptr [rdi+190h]
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm2, xmm1, dword ptr [rdi+18Ch]
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm1, xmm0, dword ptr [rdi+194h]
      vmovss  xmm8, cs:__real@3f800000
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm8; max
      vxorps  xmm11, xmm11, xmm11
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v24 = DCONST_DVARFLT_bg_bradleyAngleCutoff;
    __asm { vmulss  xmm6, xmm0, xmm0 }
    if ( !DCONST_DVARFLT_bg_bradleyAngleCutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyAngleCutoff") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    __asm
    {
      vmovss  xmm7, cs:__real@3c8efa35
      vmulss  xmm0, xmm7, dword ptr [rbx+28h]; X
    }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm { vxorps  xmm1, xmm1, xmm1 }
    _ER15 = 0;
    __asm
    {
      vcomiss xmm0, xmm6
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm1, xmm1, dword ptr [rbp+57h+outVelLs+4]
      vmovss  dword ptr [rbp+57h+outVelLs+4], xmm1
    }
    BgVehiclePhysics::ComputeVelocityWorldSpace(_RDI, &outVelLs, &_RDI->m_linearVelocityWs);
    __asm { vmovaps xmm1, xmm10; deltaTime }
    BgVehiclePhysicsTank::ApplyEngineForce(_RDI, *(float *)&_XMM1);
    if ( !_RDI->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 2609, ASSERT_TYPE_ASSERT, "(m_wheelCount > 0)", (const char *)&queryFormat, "m_wheelCount > 0") )
      __debugbreak();
    BgVehiclePhysics::ComputeVelocityLocalSpace(_RDI, &_RDI->m_angularVelocityWs, &outVelLs);
    LOBYTE(_EAX) = BgVehiclePhysicsGround::IsReversing(_RDI);
    _RBX = DCONST_DVARFLT_bg_bradleyTimeToFullSteer;
    _EAX = (unsigned __int8)_EAX;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, r15d
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@bf800000
      vblendvps xmm0, xmm1, xmm8, xmm2
      vmovss  [rbp+57h+var_C0], xmm0
    }
    if ( !DCONST_DVARFLT_bg_bradleyTimeToFullSteer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyTimeToFullSteer") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  xmm9, cs:__real@3c23d70a
      vmaxss  xmm1, xmm0, xmm9
      vmovss  xmm0, dword ptr [rdi+0A24h]
      vdivss  xmm0, xmm0, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm8; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 2u);
    __asm
    {
      vmulss  xmm2, xmm7, cs:YAW_DEG_SEC
      vmulss  xmm3, xmm0, xmm2
      vmulss  xmm4, xmm3, cs:k_0
      vmulss  xmm2, xmm4, dword ptr [rdi+0AC4h]
      vmulss  xmm2, xmm2, cs:VELOCITY_FACTOR_COMP
      vmulss  xmm0, xmm2, [rbp+57h+var_C0]
      vmulss  xmm3, xmm0, xmm6
      vmovss  dword ptr [rbp+57h+outVelLs+8], xmm3
    }
    BgVehiclePhysics::ComputeVelocityWorldSpace(_RDI, &outVelLs, &_RDI->m_angularVelocityWs);
    __asm { vmovaps xmm1, xmm10; deltaTime }
    BgVehiclePhysicsTreadedBase::DampVelocitiesAndStop(_RDI, *(float *)&_XMM1);
    if ( _RDI->m_playerControlled )
    {
      Physics_GetGravity((const Physics_WorldId)_RDI->m_worldId, &outVelLs);
      m_wheelCount = _RDI->m_wheelCount;
      v58 = 0;
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+57h+outVelLs+8]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm4, xmm8, xmm0
        vmulss  xmm0, xmm0, cs:WHEEL_MASS
        vaddss  xmm1, xmm0, dword ptr [rdi+260h]
        vmulss  xmm0, xmm2, dword ptr [rdi+0A94h]
        vmulss  xmm3, xmm1, xmm4
        vmulss  xmm1, xmm0, xmm4
        vmulss  xmm3, xmm3, xmm1
        vmulss  xmm6, xmm3, xmm10
        vmulss  xmm0, xmm6, dword ptr [rdi+18Ch]
        vmulss  xmm1, xmm6, dword ptr [rdi+190h]
        vmovss  dword ptr [rbp+57h+outVelLs], xmm0
        vmulss  xmm0, xmm6, dword ptr [rdi+194h]
        vmovss  dword ptr [rbp+57h+outVelLs+8], xmm0
        vmovss  dword ptr [rbp+57h+outVelLs+4], xmm1
      }
      if ( m_wheelCount )
      {
        do
        {
          v73 = v58;
          if ( _RDI->m_wheels[v73].m_contactBodyId == 0xFFFFFF )
            BgVehiclePhysics::AccumulateImpulse(_RDI, &outVelLs, &_RDI->m_wheels[v73].m_hardPointWs);
          ++v58;
        }
        while ( v58 < _RDI->m_wheelCount );
      }
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rax]
        vmovss  dword ptr [rbp+57h+outVelLs], xmm0
        vmulss  xmm1, xmm6, dword ptr [rax+4]
        vmovss  dword ptr [rbp+57h+outVelLs+4], xmm1
        vmulss  xmm0, xmm6, dword ptr [rax+8]
        vmovss  dword ptr [rbp+57h+outVelLs+8], xmm0
      }
      BgVehiclePhysics::AccumulateImpulse(_RDI, &outVelLs, &_RDI->m_centerOfMassWs);
    }
    else
    {
      __asm { vmovaps xmm1, xmm10; deltaTime }
      BgVehiclePhysicsGround::ApplyExtraGravity(_RDI, *(float *)&_XMM1);
    }
    __asm { vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
    if ( _RDI->m_playerControlled )
    {
      __asm
      {
        vmovaps xmm3, xmm11; pitchSpeed
        vmovaps xmm2, xmm8; rollSpeed
        vmovaps xmm1, xmm10; deltaTime
      }
      BgVehiclePhysicsGround::TryStabilizeAngles(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      AxisToAngles((const tmat33_t<vec3_t> *)&_RDI->m_transform, &outVelLs);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+outVelLs]
        vmulss  xmm5, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm5, cs:__real@3f000000
      }
      _RBX = DCONST_DVARFLT_bg_bradleyPitchRecover;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vsubss  xmm1, xmm5, xmm4
        vmulss  xmm6, xmm1, cs:__real@43b40000
        vandps  xmm6, xmm6, xmm7
      }
      if ( !DCONST_DVARFLT_bg_bradleyPitchRecover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyPitchRecover") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+28h]; pitchSpeed
        vcomiss xmm3, xmm11
      }
      if ( !(v88 | v89) )
      {
        __asm { vcomiss xmm6, cs:__real@41200000 }
        if ( !(v88 | v89) )
        {
          __asm
          {
            vmovaps xmm2, xmm11; rollSpeed
            vmovaps xmm1, xmm10; deltaTime
          }
          BgVehiclePhysicsGround::TryStabilizeAngles(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
        }
      }
    }
    BgVehiclePhysicsGround::ComputeAverageWheelValues(_RDI);
    __asm { vmovaps xmm1, xmm10; deltaTime }
    BgVehiclePhysicsTank::ComputeEngineSound(_RDI, *(float *)&_XMM1);
    if ( !Physics_IsPredictiveWorld(_RDI->m_worldId) || _RDI->m_pmoveObject )
      goto LABEL_40;
    v94 = 0;
    v95 = !_RDI->m_playerControlled;
    if ( _RDI->m_playerControlled )
    {
      *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 2u);
      __asm
      {
        vandps  xmm0, xmm0, xmm7
        vmulss  xmm0, xmm0, xmm0
        vmulss  xmm8, xmm0, cs:__real@3e19999a
        vmovss  [rbp+57h+var_C0], xmm8
      }
      *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RDI);
      __asm
      {
        vandps  xmm0, xmm0, xmm7
        vmulss  xmm9, xmm0, xmm9
        vmovss  [rbp+57h+var_B8], xmm9
      }
      *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 6u);
      __asm
      {
        vandps  xmm0, xmm0, xmm7
        vmulss  xmm6, xmm0, cs:__real@3dcccccd
        vmovss  [rbp+57h+var_BC], xmm6
      }
      *(double *)&_XMM0 = BgVehiclePhysicsGround::RumbleData::GetIntensity(&_RDI->m_rumble);
      __asm
      {
        vmulss  xmm7, xmm0, cs:__real@3f000000
        vcomiss xmm8, xmm6
      }
      _RBX = &v118;
      if ( v88 | v89 )
        _RBX = &v119;
      v105 = (__int64)_RDI->m_vehicleSystem->PhysicsGetEventSystem(_RDI->m_vehicleSystem);
      __asm { vcomiss xmm9, dword ptr [rbx] }
      _RCX = &v120;
      if ( v88 | v89 )
        _RCX = _RBX;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vmaxss  xmm1, xmm0, xmm7
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 8i64))(v105);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0B30h]
      vcomiss xmm0, xmm11
    }
    if ( v94 | v95 )
      goto LABEL_40;
    __asm { vcomiss xmm11, dword ptr [rdi+0B2Ch] }
    if ( !v94 )
      goto LABEL_40;
    __asm { vcomiss xmm11, dword ptr [rdi+0B28h] }
    if ( v94 )
    {
      __asm
      {
        vsubss  xmm0, xmm0, xmm10
        vcomiss xmm0, xmm11
        vmovss  dword ptr [rdi+0B30h], xmm0
      }
      result = 1;
      if ( v94 | v95 )
        *(_QWORD *)&_RDI->m_rumble.m_intensity = 0i64;
    }
    else
    {
LABEL_40:
      result = 1;
    }
    __asm
    {
      vmovaps xmm9, [rsp+100h+var_70]
      vmovaps xmm8, [rsp+100h+var_60]
      vmovaps xmm7, [rsp+100h+var_50]
      vmovaps xmm6, [rsp+100h+var_40]
      vmovaps xmm11, [rsp+100h+var_90]
    }
  }
  __asm { vmovaps xmm10, [rsp+100h+var_80] }
  return result;
}

/*
==============
BgVehiclePhysicsTwoWheeled::Step
==============
*/

bool __fastcall BgVehiclePhysicsTwoWheeled::Step(BgVehiclePhysicsTwoWheeled *this, double deltaTime)
{
  char v17; 
  unsigned int m_wheelInContactCount; 
  bool v37; 
  char v61; 
  char v62; 
  bool result; 
  vec3_t impulseWs; 
  vec3_t atPointWs; 
  char v111; 
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
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm9, xmm1
  }
  _RDI = this;
  BgVehiclePhysicsGround::Step(this, *(float *)&deltaTime);
  __asm { vmovaps xmm1, xmm9; deltaTime }
  BgVehiclePhysicsGround::ComputeSuspensionForces(_RDI, *(float *)&_XMM1);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 4u);
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm1, cs:__real@bf000000; min
    vmovaps xmm2, xmm10; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm7, cs:__real@3dcccccd
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm0, xmm8
    vmovaps xmm6, xmm0
  }
  if ( !(v17 | v62) )
    goto LABEL_3;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+178h]
    vmovss  xmm2, dword ptr [rdi+174h]
    vmulss  xmm4, xmm1, dword ptr [rdi+1A8h]
    vmulss  xmm3, xmm2, dword ptr [rdi+1A4h]
    vmovss  xmm1, dword ptr [rdi+17Ch]
    vmulss  xmm0, xmm1, dword ptr [rdi+1ACh]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm2, xmm5, xmm0
    vcomiss xmm2, cs:__real@ba83126f
  }
  if ( !v17 )
  {
LABEL_3:
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0B0Ch]
      vmulss  xmm1, xmm0, cs:__real@44c1c01a
    }
    m_wheelInContactCount = _RDI->m_wheelInContactCount;
    __asm
    {
      vmulss  xmm2, xmm1, xmm9
      vmulss  xmm3, xmm2, xmm6
      vmulss  xmm0, xmm3, dword ptr [rdi+174h]
      vmulss  xmm1, xmm3, dword ptr [rdi+178h]
      vmovss  dword ptr [rsp+0C8h+impulseWs], xmm0
      vmulss  xmm0, xmm3, dword ptr [rdi+17Ch]
      vmovss  dword ptr [rsp+0C8h+impulseWs+8], xmm0
      vmovss  dword ptr [rsp+0C8h+impulseWs+4], xmm1
    }
    v37 = m_wheelInContactCount < 2;
    if ( m_wheelInContactCount == 2 )
    {
      __asm { vmovss  xmm2, dword ptr [rdi+0B14h] }
    }
    else
    {
      v37 = m_wheelInContactCount == 0;
      if ( m_wheelInContactCount != 1 || (v37 = _RDI->m_wheels[0].m_contactBodyId < 0xFFFFFF, _RDI->m_wheels[0].m_contactBodyId == 0xFFFFFF) )
      {
        __asm { vxorps  xmm2, xmm2, xmm2 }
      }
      else
      {
        *(double *)&_XMM0 = BgVehiclePhysics::GetUpInclination(_RDI);
        __asm
        {
          vmaxss  xmm1, xmm0, xmm8
          vmulss  xmm2, xmm1, dword ptr [rdi+0B14h]
        }
      }
    }
    __asm
    {
      vcomiss xmm7, dword ptr [rdi+2B0h]
      vmulss  xmm0, xmm2, dword ptr [rdi+18Ch]
      vaddss  xmm1, xmm0, dword ptr [rdi+22Ch]
      vmulss  xmm0, xmm2, dword ptr [rdi+190h]
      vmovss  dword ptr [rsp+0C8h+atPointWs], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+230h]
      vmulss  xmm0, xmm2, dword ptr [rdi+194h]
      vmovss  dword ptr [rsp+0C8h+atPointWs+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+234h]
      vmovss  dword ptr [rsp+0C8h+atPointWs+8], xmm1
    }
    if ( v37 )
      BgVehiclePhysics::AccumulateImpulse(_RDI, &impulseWs, &atPointWs);
    else
      BgVehiclePhysics::AccumulateOnlyLinearImpulse(_RDI, &impulseWs);
  }
  BgVehiclePhysics::ComputeVelocityLocalSpace(_RDI, &_RDI->m_linearVelocityWs, &atPointWs);
  __asm
  {
    vmovss  xmm3, cs:__real@41700000; speed
    vmovaps xmm2, xmm9; frameTime
    vxorps  xmm1, xmm1, xmm1; dst
  }
  BgVehiclePhysics::DampLerp(&atPointWs.v[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  BgVehiclePhysics::ComputeVelocityWorldSpace(_RDI, &atPointWs, &_RDI->m_linearVelocityWs);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 4u);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm10, xmm0
    vmulss  xmm2, xmm0, cs:__real@3fc00000; linearDampFrame
    vmovaps xmm3, xmm7; angularDampFrame
    vmovaps xmm1, xmm9; deltaTime
  }
  BgVehiclePhysicsGround::DampingVelocities(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  BgVehiclePhysicsGround::ComputeAverageWheelValues(_RDI);
  __asm { vmovaps xmm1, xmm9; deltaTime }
  BgVehiclePhysicsGround::ApplySuspensionForces(_RDI, *(float *)&_XMM1);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 2u);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm3, cs:__real@3ecccccd; pitchSpeed
    vsubss  xmm6, xmm10, xmm0
    vmulss  xmm2, xmm6, cs:__real@41000000; rollSpeed
    vmovaps xmm1, xmm9; deltaTime
  }
  BgVehiclePhysicsGround::TryStabilizeAngles(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  BgVehiclePhysics::ComputeVelocityLocalSpace(_RDI, &_RDI->m_angularVelocityWs, &atPointWs);
  __asm
  {
    vmulss  xmm3, xmm6, cs:__real@40a00000; speed
    vmovaps xmm2, xmm9; frameTime
    vxorps  xmm1, xmm1, xmm1; dst
  }
  BgVehiclePhysics::DampLerp(atPointWs.v, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  BgVehiclePhysics::ComputeVelocityWorldSpace(_RDI, &atPointWs, &_RDI->m_angularVelocityWs);
  BgVehiclePhysics::ComputeVelocityLocalSpace(_RDI, &_RDI->m_angularVelocityWs, &impulseWs);
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 2u);
  __asm { vmovaps xmm12, xmm0 }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RDI);
  __asm { vcomiss xmm0, cs:__real@3d4ccccd }
  if ( v61 )
  {
    __asm { vxorps  xmm11, xmm11, xmm11 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@40000000; val
      vmovaps xmm2, xmm10; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm11, xmm0 }
  }
  _RAX = GLOBAL_UP;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+184h]
    vmulss  xmm3, xmm1, dword ptr [rax+4]
    vmovss  xmm1, dword ptr [rax]
    vmulss  xmm2, xmm1, dword ptr [rdi+180h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm3, dword ptr [rdi+188h]
    vmulss  xmm1, xmm3, dword ptr [rax+8]
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3f333333
  }
  if ( v61 | v62 )
  {
    __asm
    {
      vmulss  xmm0, xmm11, xmm9
      vmulss  xmm1, xmm0, xmm12
      vxorps  xmm1, xmm1, cs:__xmm@80000000800000008000000080000000
    }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm
  {
    vaddss  xmm0, xmm1, dword ptr [rsp+0C8h+impulseWs]; val
    vmovss  xmm1, cs:__real@bf800000; min
    vsubss  xmm6, xmm10, xmm2
    vmovaps xmm2, xmm10; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000; min
    vmovss  dword ptr [rsp+0C8h+impulseWs], xmm0
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm0, xmm6
    vmulss  xmm0, xmm11, cs:__real@40800000
    vsubss  xmm2, xmm10, xmm2
    vmulss  xmm4, xmm2, cs:__real@40600000
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm4, xmm2, xmm12
    vmulss  xmm5, xmm4, xmm9
    vaddss  xmm0, xmm5, dword ptr [rsp+0C8h+impulseWs+8]; val
    vmovaps xmm2, xmm10; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm3, cs:__real@40800000; speed
    vmovaps xmm2, xmm9; frameTime
    vxorps  xmm1, xmm1, xmm1; dst
    vmovss  dword ptr [rsp+0C8h+impulseWs+8], xmm0
  }
  BgVehiclePhysics::DampLerp(&impulseWs.v[2], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  BgVehiclePhysics::ComputeVelocityWorldSpace(_RDI, &impulseWs, &_RDI->m_angularVelocityWs);
  __asm { vmovaps xmm2, xmm9; deltaTime }
  BgVehiclePhysicsGround::Steering::LerpYaw(&_RDI->m_steering, _RDI, *(float *)&_XMM2);
  result = 1;
  _R11 = &v111;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return result;
}

/*
==============
BgVehiclePhysicsCarBase::CameraConfig::Step
==============
*/

void __fastcall BgVehiclePhysicsCarBase::CameraConfig::Step(BgVehiclePhysicsCarBase::CameraConfig *this, const BgVehiclePhysicsCarBase *vehObj, double deltaTime)
{
  const dvar_t *v16; 
  char v36; 
  char v37; 
  const dvar_t *v59; 

  _RBX = this;
  __asm { vmovaps [rsp+0E8h+var_58], xmm9 }
  _RDI = (BgVehiclePhysicsCarBase *)vehObj;
  __asm { vmovaps xmm9, xmm2 }
  if ( Physics_IsPredictiveWorld(vehObj->m_worldId) )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_28], xmm6
      vmovaps [rsp+0E8h+var_38], xmm7
      vmovaps [rsp+0E8h+var_78], xmm11
      vmovaps [rsp+0E8h+var_88], xmm12
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RDI);
    v16 = DCONST_DVARBOOL_bg_vehCamAdjustOnDrift;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DCONST_DVARBOOL_bg_vehCamAdjustOnDrift && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamAdjustOnDrift") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    __asm
    {
      vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm11, cs:__real@3f800000
    }
    if ( v16->current.enabled )
    {
      *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 2u);
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+0AB8h]
        vmovaps xmm6, xmm0
        vdivss  xmm0, xmm1, dword ptr [rdi+0A98h]; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm11; max
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm11, xmm0
        vmulss  xmm0, xmm1, xmm1
        vmulss  xmm1, xmm0, xmm1
        vsubss  xmm1, xmm11, xmm1
        vmaxss  xmm0, xmm1, cs:__real@3dcccccd
        vandps  xmm6, xmm6, xmm12
        vsubss  xmm2, xmm11, xmm6
        vaddss  xmm0, xmm2, xmm0; val
        vmovaps xmm2, xmm11; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovss  dword ptr [rbx+10h], xmm0
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm1, cs:__real@3e4ccccd
        vcomiss xmm7, xmm1
        vmovss  dword ptr [rbx+10h], xmm0
      }
      if ( !(v36 | v37) )
      {
        __asm
        {
          vsubss  xmm1, xmm7, xmm1
          vmulss  xmm2, xmm1, cs:__real@3fc00000
          vaddss  xmm0, xmm2, xmm0; val
          vmovaps xmm2, xmm11; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovss  dword ptr [rbx+10h], xmm0 }
      }
    }
    else
    {
      _RBX->m_camReturnFactor = 1.0;
    }
    _RSI = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg;
    if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm3, xmm0, dword ptr [rdi+18Ch]
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm2, xmm1, dword ptr [rdi+190h]
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm1, xmm0, dword ptr [rdi+194h]
      vmovss  xmm6, dword ptr [rsi+28h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm11; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm3, xmm1, xmm6
      vandps  xmm2, xmm3, xmm12
      vaddss  xmm0, xmm2, dword ptr [rbx]
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( v36 | v37 )
    {
      __asm { vmovss  dword ptr [rbx+18h], xmm3 }
    }
    else
    {
      v59 = DCONST_DVARBOOL_bg_vehEnhanceSenseOfSpeedFovSpring;
      if ( !DCONST_DVARBOOL_bg_vehEnhanceSenseOfSpeedFovSpring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedFovSpring") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v59);
      if ( v59->current.enabled )
      {
        __asm
        {
          vmovaps xmm3, xmm9; deltaTime
          vmovaps xmm2, xmm7; normalSpeed
        }
        BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaWithSpring(_RBX, _RDI, *(float *)&_XMM2, *(float *)&_XMM3);
      }
      else
      {
        _RSI = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg;
        __asm
        {
          vmovaps [rsp+0E8h+var_48], xmm8
          vmovaps [rsp+0E8h+var_68], xmm10
          vmovaps [rsp+0E8h+var_98], xmm13
          vmovaps [rsp+0E8h+var_A8], xmm14
        }
        if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm
        {
          vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
          vmulss  xmm4, xmm0, dword ptr [rdi+18Ch]
          vmovss  xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
          vmulss  xmm3, xmm2, dword ptr [rdi+190h]
          vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
          vmulss  xmm2, xmm0, dword ptr [rdi+194h]
          vmovss  xmm6, dword ptr [rsi+28h]
          vaddss  xmm5, xmm4, xmm3
          vaddss  xmm0, xmm5, xmm2; val
          vmovaps xmm2, xmm11; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vcomiss xmm7, dword ptr [rbx+28h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm13, xmm1, xmm6
          vandps  xmm2, xmm13, xmm12
          vaddss  xmm14, xmm2, dword ptr [rbx]
        }
        if ( v36 )
        {
          __asm { vmovss  xmm8, cs:__real@3f000000 }
        }
        else
        {
          _RSI = DCONST_DVARFLT_bg_vehCamFovDeltaSpeed;
          if ( !DCONST_DVARFLT_bg_vehCamFovDeltaSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaSpeed") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm { vmovss  xmm8, dword ptr [rsi+28h] }
        }
        __asm
        {
          vmovss  xmm1, cs:__real@3ecccccd; minval
          vmovaps xmm0, xmm7; val
        }
        *(float *)&_XMM0 = NormalizeRange(*(double *)&_XMM0, *(double *)&_XMM1);
        _RSI = DCONST_DVARFLT_bg_vehCamFovDeltaAir;
        __asm { vmovaps xmm10, xmm0 }
        if ( !DCONST_DVARFLT_bg_vehCamFovDeltaAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaAir") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm { vmovss  xmm6, dword ptr [rsi+28h] }
        *(double *)&_XMM0 = ((double (__fastcall *)(BgVehiclePhysicsCarBase *))_RDI->IsInAir)(_RDI);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmulss  xmm1, xmm10, xmm10
          vmulss  xmm2, xmm1, xmm10
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm4, xmm0, xmm6
          vmulss  xmm0, xmm2, xmm14
          vaddss  xmm4, xmm4, xmm0
          vaddss  xmm1, xmm4, xmm13; dst
          vmovaps xmm3, xmm8; speed
          vmovaps xmm2, xmm9; frameTime
        }
        BgVehiclePhysics::DampLerp(&_RBX->m_camFovDelta, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
        __asm
        {
          vmovaps xmm14, [rsp+0E8h+var_A8]
          vmovaps xmm13, [rsp+0E8h+var_98]
          vmovaps xmm10, [rsp+0E8h+var_68]
          vmovaps xmm8, [rsp+0E8h+var_48]
        }
      }
    }
    __asm { vmovss  dword ptr [rbx+28h], xmm7 }
    _RDI = DCONST_DVARFLT_bg_vehCamPitchSpeed;
    __asm
    {
      vmulss  xmm6, xmm7, xmm7
      vmulss  xmm0, xmm6, dword ptr [rbx+8]
      vaddss  xmm7, xmm0, dword ptr [rbx+4]
    }
    if ( !DCONST_DVARFLT_bg_vehCamPitchSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamPitchSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+28h]; speed
      vmovaps xmm2, xmm9; frameTime
      vmovaps xmm1, xmm7; dst
    }
    BgVehiclePhysics::DampLerp(&_RBX->m_camPitchAdd, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    _RDI = DCONST_DVARFLT_bg_vehCamRangeAddMin;
    __asm { vmovaps xmm7, [rsp+0E8h+var_38] }
    if ( !DCONST_DVARFLT_bg_vehCamRangeAddMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamRangeAddMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm2, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_bg_vehCamRangeSpeed;
    __asm
    {
      vandps  xmm0, xmm2, xmm12
      vmovaps xmm12, [rsp+0E8h+var_88]
      vaddss  xmm0, xmm0, xmm11
      vmovaps xmm11, [rsp+0E8h+var_78]
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm2, xmm1, xmm2
      vmulss  xmm6, xmm2, dword ptr [rbx+0Ch]
    }
    if ( !DCONST_DVARFLT_bg_vehCamRangeSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamRangeSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+28h]; speed
      vmovaps xmm2, xmm9; frameTime
      vmovaps xmm1, xmm6; dst
    }
    BgVehiclePhysics::DampLerp(&_RBX->m_camRangeAdd, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovaps xmm6, [rsp+0E8h+var_28] }
  }
  __asm { vmovaps xmm9, [rsp+0E8h+var_58] }
}

/*
==============
BgVehiclePhysicsGround::Engine::Step
==============
*/

void __fastcall BgVehiclePhysicsGround::Engine::Step(BgVehiclePhysicsGround::Engine *this, const BgVehiclePhysicsGround *vehicle, double deltaTime)
{
  _RBX = this;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm2
  }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(&vehicle->BgVehiclePhysics);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm5, xmm1, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm5, dword ptr [rbx+18h]
    vmulss  xmm3, xmm5, xmm0
    vxorps  xmm4, xmm4, xmm4
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm4, xmm4, xmm3, 1
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si r8d, xmm4
    vcvttss2si eax, xmm2
    vmovaps xmm6, xmm0
  }
  if ( _EAX != _ER8 && !BgVehiclePhysicsGround::IsReversing((BgVehiclePhysicsGround *)vehicle) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+1Ch]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, dword ptr [rbx+4]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vsubss  xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+48h+var_28]
    vmovss  dword ptr [rbx+18h], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+1Ch], xmm1
  }
}

/*
==============
BgVehiclePhysicsGround::FrictionCar::Step
==============
*/

void __fastcall BgVehiclePhysicsGround::FrictionCar::Step(BgVehiclePhysicsGround::FrictionCar *this, const BgVehiclePhysicsGround *vehicle, double surfFric, double deltaTime)
{
  char v25; 
  char v26; 
  char v54; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = this;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm6, xmm3
    vmovaps xmm12, xmm2
  }
  if ( !vehicle->IsInAir((BgVehiclePhysics *)vehicle) )
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_28], xmm7
      vmovaps [rsp+0C8h+var_38], xmm8
      vmovaps [rsp+0C8h+var_48], xmm9
      vmovaps [rsp+0C8h+var_58], xmm10
    }
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&vehicle->m_controls, 4u);
    __asm
    {
      vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm8, xmm0, xmm10
    }
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&vehicle->m_controls, 7u);
    __asm
    {
      vmovss  xmm7, cs:__real@3a83126f
      vandps  xmm4, xmm0, xmm10
      vcomiss xmm4, xmm7
    }
    if ( v25 )
    {
      __asm
      {
        vmovaps [rsp+0C8h+var_68], xmm11
        vmovaps [rsp+0C8h+var_88], xmm13
      }
      *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(&vehicle->BgVehiclePhysics);
      __asm { vmovaps xmm9, xmm0 }
      *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&vehicle->m_controls, 2u);
      __asm
      {
        vmulss  xmm2, xmm8, cs:FRIC_GAS_CONTRIBUTION
        vandps  xmm0, xmm0, xmm10
        vmulss  xmm3, xmm0, cs:FRIC_STEERING_CONTRIBUTION
        vaddss  xmm10, xmm3, xmm2
      }
      BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehicle, 2u);
      BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehicle, 3u);
      __asm { vmovss  xmm11, dword ptr [rdi+0Ch] }
      _EBP = 0;
      __asm { vxorps  xmm1, xmm1, xmm1 }
      _RBX = DCONST_DVARFLT_bg_vehUTurnDrift;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcvtsi2ss xmm1, xmm1, ecx
        vaddss  xmm13, xmm1, xmm0
      }
      if ( !DCONST_DVARFLT_bg_vehUTurnDrift && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehUTurnDrift") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+28h]
        vcomiss xmm3, xmm7
        vmovss  xmm8, cs:__real@3f800000
      }
      if ( !(v54 | v26) )
      {
        __asm
        {
          vmovss  xmm0, cs:speedUTThreshold
          vcomiss xmm9, xmm0
        }
        if ( v54 )
        {
          __asm
          {
            vsubss  xmm1, xmm9, xmm0
            vsubss  xmm0, xmm8, xmm0
            vdivss  xmm1, xmm1, xmm0
            vsubss  xmm2, xmm8, xmm1
            vmulss  xmm0, xmm10, xmm10
            vmulss  xmm1, xmm0, xmm3
            vmulss  xmm2, xmm2, xmm1
            vaddss  xmm11, xmm11, xmm2
          }
        }
      }
      LOBYTE(_EAX) = BgVehiclePhysicsGround::IsReversing((BgVehiclePhysicsGround *)vehicle);
      __asm { vmovd   xmm1, ebp }
      _RCX = &_RDI->tgtFriction;
      _EAX = (unsigned __int8)_EAX;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@3e800000
        vblendvps xmm3, xmm1, xmm8, xmm2
        vmulss  xmm0, xmm10, xmm10
        vmulss  xmm2, xmm0, xmm10
        vmulss  xmm1, xmm2, xmm11
        vmovaps xmm11, [rsp+0C8h+var_68]
        vmulss  xmm3, xmm3, xmm1
        vmovss  xmm1, cs:__real@40000000
        vmulss  xmm0, xmm3, xmm9
        vmulss  xmm2, xmm0, cs:__real@3f19999a
        vsubss  xmm0, xmm1, xmm12
        vmulss  xmm4, xmm2, xmm6
        vmulss  xmm2, xmm4, xmm0
        vmovss  xmm0, dword ptr [rcx]
        vmulss  xmm3, xmm2, xmm13
        vmovaps xmm13, [rsp+0C8h+var_88]
        vxorps  xmm2, xmm2, xmm2
        vcomiss xmm2, dword ptr [rdi+1Ch]
        vsubss  xmm1, xmm0, xmm3
        vmaxss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rcx], xmm0
      }
      if ( v25 )
        goto LABEL_17;
      __asm
      {
        vsubss  xmm1, xmm8, xmm9
        vmulss  xmm0, xmm1, xmm1
        vmulss  xmm3, xmm0, xmm1
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm2, xmm1, xmm3
        vmulss  xmm0, xmm2, xmm3
        vmulss  xmm3, xmm0, cs:__real@40400000
        vmulss  xmm0, xmm12, dword ptr [rdi+4]
        vaddss  xmm1, xmm3, xmm8
        vmulss  xmm3, xmm1, xmm0; speed
        vmovss  xmm1, dword ptr [rdi]; dst
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm9, dword ptr [rdi+18h]
        vcomiss xmm9, xmm7
        vcomiss xmm8, xmm7
        vmovss  xmm5, dword ptr [rdi]
      }
      _RCX = &_RDI->tgtFriction;
      if ( !(v25 | v26) )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vsubss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm1, xmm5
          vmulss  xmm3, xmm2, cs:__real@3e800000
          vmulss  xmm0, xmm9, xmm4
          vmulss  xmm1, xmm0, cs:__real@3f400000
          vaddss  xmm2, xmm3, xmm1
          vmovss  dword ptr [rcx], xmm2
        }
LABEL_17:
        __asm
        {
          vmovaps xmm9, [rsp+0C8h+var_48]
          vmovaps xmm8, [rsp+0C8h+var_38]
          vmovaps xmm7, [rsp+0C8h+var_28]
          vmovaps xmm10, [rsp+0C8h+var_58]
        }
        goto LABEL_18;
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+4]
        vmovaps xmm1, xmm5
      }
    }
    __asm { vmovaps xmm2, xmm6; frameTime }
    BgVehiclePhysics::DampLerp(_RCX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    goto LABEL_17;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vmulss  xmm1, xmm6, cs:__real@40200000
    vsubss  xmm1, xmm0, xmm1
    vmaxss  xmm2, xmm1, cs:__real@3dcccccd
    vmovss  dword ptr [rdi+20h], xmm2
  }
  _RDI->timeToRecover = 0.0;
LABEL_18:
  __asm { vmovss  xmm0, dword ptr [rdi+1Ch] }
  _R11 = &v114;
  __asm
  {
    vmovaps xmm12, xmmword ptr [r11-70h]
    vsubss  xmm1, xmm0, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovss  dword ptr [rdi+1Ch], xmm1
  }
}

/*
==============
BgVehiclePhysicsGround::RumbleData::Step
==============
*/

void __fastcall BgVehiclePhysicsGround::RumbleData::Step(BgVehiclePhysicsGround::RumbleData *this, float deltaTime, double _XMM2_8)
{
  char v3; 
  char v4; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm0, xmm2
  }
  if ( !(v3 | v4) )
  {
    __asm { vcomiss xmm2, dword ptr [rcx+8] }
    if ( v3 )
    {
      __asm { vcomiss xmm2, dword ptr [rcx+4] }
      if ( v3 )
      {
        __asm
        {
          vsubss  xmm0, xmm0, xmm1
          vcomiss xmm0, xmm2
          vmovss  dword ptr [rcx+0Ch], xmm0
        }
        if ( v3 | v4 )
          *(_QWORD *)&this->m_intensity = 0i64;
      }
    }
  }
}

/*
==============
BgVehiclePhysicsGround::StuntManager::Step
==============
*/
void BgVehiclePhysicsGround::StuntManager::Step(BgVehiclePhysicsGround::StuntManager *this, BgVehiclePhysicsGround *vehObj, float deltaTime)
{
  char v3; 
  char v4; 

  __asm
  {
    vmovss  xmm1, dword ptr [rcx+4]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( v3 | v4 )
  {
    this->m_stuntDuration = 0.0;
    this->m_currentType = NO_STUNT;
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rcx+4], xmm0
    }
  }
}

/*
==============
BgVehiclePhysicsAtvQuadNew::StepClientKeyframe
==============
*/

void __fastcall BgVehiclePhysicsAtvQuadNew::StepClientKeyframe(BgVehiclePhysicsAtvQuadNew *this, double deltaTime)
{
  BgVehicleEventSystem *v5; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v5 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v5->CarDrivingKeyframed(v5, _RBX);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysicsAtvQuadNew *))_RBX->ComputeEngineSound)(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0D00h]
    vmulss  xmm0, xmm1, xmm6
    vmulss  xmm0, xmm0, cs:__real@40800000
    vsubss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rbx+0D00h], xmm1
    vmovss  xmm2, dword ptr [rbx+0D0Ch]
    vmulss  xmm0, xmm2, xmm6
    vmulss  xmm1, xmm0, cs:__real@40800000
    vmovaps xmm6, [rsp+38h+var_18]
    vsubss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rbx+0D0Ch], xmm2
  }
  _RBX->m_animPitch.v[2] = 0.0;
  _RBX->m_animYaw.v[2] = 0.0;
}

/*
==============
BgVehiclePhysicsCarBase::StepClientKeyframe
==============
*/

void __fastcall BgVehiclePhysicsCarBase::StepClientKeyframe(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  BgVehicleEventSystem *v5; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v5 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v5->CarDrivingKeyframed(v5, this);
  __asm
  {
    vmovaps xmm1, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
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

void __fastcall BgVehiclePhysicsTank::StepClientKeyframe(BgVehiclePhysicsTank *this, double deltaTime)
{
  BgVehicleEventSystem *v5; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v5 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v5->CarDrivingKeyframed(v5, this);
  __asm
  {
    vmovaps xmm1, xmm6; deltaTime
    vmovaps xmm6, [rsp+38h+var_18]
  }
  BgVehiclePhysicsTank::ComputeEngineSound(this, *(float *)&_XMM1);
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

void __fastcall BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaDamped(BgVehiclePhysicsCarBase::CameraConfig *this, const BgVehiclePhysicsCarBase *vehObj, double normalSpeed, double deltaTime)
{
  char v31; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RSI = this;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm9, xmm3
    vmovaps xmm8, xmm2
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm0, dword ptr [rdi+190h]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rdi+18Ch]
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm0, dword ptr [rdi+194h]
    vmovss  xmm6, dword ptr [rbx+28h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, cs:__real@3f800000; max
    vaddss  xmm0, xmm4, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm8, dword ptr [rsi+28h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm10, xmm1, xmm6
    vandps  xmm2, xmm10, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm11, xmm2, dword ptr [rsi]
  }
  if ( v31 )
  {
    __asm { vmovss  xmm7, cs:__real@3f000000 }
  }
  else
  {
    _RBX = DCONST_DVARFLT_bg_vehCamFovDeltaSpeed;
    if ( !DCONST_DVARFLT_bg_vehCamFovDeltaSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmovss  xmm1, cs:__real@3ecccccd; minval
    vmovaps xmm0, xmm8; val
  }
  *(float *)&_XMM0 = NormalizeRange(*(double *)&_XMM0, *(double *)&_XMM1);
  _RBX = DCONST_DVARFLT_bg_vehCamFovDeltaAir;
  __asm { vmovaps xmm8, xmm0 }
  if ( !DCONST_DVARFLT_bg_vehCamFovDeltaAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaAir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  *(double *)&_XMM0 = ((double (__fastcall *)(const BgVehiclePhysicsCarBase *))vehObj->IsInAir)(vehObj);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm2, xmm1, xmm8
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm4, xmm0, xmm6
    vmulss  xmm0, xmm2, xmm11
    vaddss  xmm4, xmm4, xmm0
    vaddss  xmm1, xmm4, xmm10; dst
    vmovaps xmm3, xmm7; speed
    vmovaps xmm2, xmm9; frameTime
  }
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  BgVehiclePhysics::DampLerp(&_RSI->m_camFovDelta, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
}

/*
==============
BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaWithSpring
==============
*/

void __fastcall BgVehiclePhysicsCarBase::CameraConfig::StepFovDeltaWithSpring(BgVehiclePhysicsCarBase::CameraConfig *this, const BgVehiclePhysicsCarBase *vehObj, double normalSpeed, double deltaTime)
{
  char v43; 
  char v44; 
  float m_camFovDelta; 
  const dvar_t *v63; 
  bool v65; 
  bool v66; 
  const dvar_t *v70; 
  unsigned int unsignedInt; 
  char v116; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovss  dword ptr [rax+20h], xmm3 }
  _RDI = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RSI = vehObj;
  __asm { vmovaps xmmword ptr [rax-48h], xmm7 }
  _RBX = this;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps [rsp+108h+var_98], xmm12
    vmovaps [rsp+108h+var_A8], xmm13
    vmovaps [rsp+108h+var_B8], xmm14
    vmovaps [rsp+108h+var_C8], xmm15
    vmovaps xmm14, xmm2
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm0, dword ptr [rsi+190h]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rsi+18Ch]
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm0, dword ptr [rsi+194h]
    vmovss  xmm12, cs:__real@3f800000
    vmovss  xmm6, dword ptr [rdi+28h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm12; max
    vxorps  xmm8, xmm8, xmm8
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RDI = DCONST_DVARFLT_cspringThreshold;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm10, xmm1, xmm6
    vmovss  [rsp+108h+arg_8], xmm10
  }
  if ( !DCONST_DVARFLT_cspringThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_cspringMaxT;
  if ( !DCONST_DVARFLT_cspringMaxT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringMaxT") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm9, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_cspringMinT;
  if ( !DCONST_DVARFLT_cspringMinT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringMinT") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm7, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_cspringD;
  if ( !DCONST_DVARFLT_cspringD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringD") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_cspringF;
  __asm { vmovss  [rsp+108h+arg_10], xmm0 }
  if ( !DCONST_DVARFLT_cspringF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringF") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  xmm1, dword ptr [rbx+28h]
    vcomiss xmm14, xmm1
    vmovss  xmm13, cs:__real@3e99999a
    vmovss  [rsp+108h+arg_0], xmm0
    vandps  xmm0, xmm10, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm15, xmm0, dword ptr [rbx]
  }
  if ( v43 )
  {
    __asm
    {
      vsubss  xmm0, xmm1, xmm14
      vcomiss xmm0, xmm6
    }
    if ( !(v43 | v44) )
    {
      __asm { vcomiss xmm8, dword ptr [rbx+20h] }
      if ( !v43 )
      {
        m_camFovDelta = _RBX->m_camFovDelta;
        __asm
        {
          vsubss  xmm1, xmm0, xmm6
          vsubss  xmm0, xmm12, xmm6
          vdivss  xmm1, xmm1, xmm0
          vsubss  xmm2, xmm12, xmm1
          vsubss  xmm0, xmm9, xmm7
          vmulss  xmm1, xmm2, xmm0
          vaddss  xmm3, xmm1, xmm7
          vmovss  dword ptr [rbx+24h], xmm3
          vmovss  dword ptr [rbx+20h], xmm3
        }
        _RBX->m_camOscillStart = m_camFovDelta;
      }
    }
  }
  else
  {
    __asm { vcomiss xmm8, dword ptr [rbx+20h] }
    if ( !v43 )
    {
      _RDI = DCONST_DVARFLT_bg_vehCamFovDeltaSpeed;
      if ( !DCONST_DVARFLT_bg_vehCamFovDeltaSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm13, dword ptr [rdi+28h] }
      *(_QWORD *)&_RBX->m_camOscillTime = 0i64;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0C88h]
    vmulss  xmm0, xmm0, cs:__real@40000000; val
    vmovaps xmm2, xmm12; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v63 = DCONST_DVARFLT_bg_vehCamFovDeltaAir;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_bg_vehCamFovDeltaAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamFovDeltaAir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v63);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+20h]
    vcomiss xmm1, xmm8
    vmulss  xmm0, xmm6, dword ptr [rdi+28h]
    vmulss  xmm11, xmm0, xmm14
  }
  if ( v65 || v66 )
  {
    __asm { vmovss  xmm6, [rsp+108h+arg_18] }
  }
  else
  {
    v70 = DCONST_DVARINT_cspringTmode;
    __asm
    {
      vdivss  xmm0, xmm1, dword ptr [rbx+24h]
      vsubss  xmm7, xmm12, xmm0
    }
    if ( !DCONST_DVARINT_cspringTmode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cspringTmode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    unsignedInt = v70->current.unsignedInt;
    v65 = unsignedInt == 0;
    v66 = unsignedInt == 1;
    if ( unsignedInt == 1 )
    {
      __asm { vmulss  xmm7, xmm7, xmm7 }
    }
    else
    {
      v65 = unsignedInt < 2;
      v66 = unsignedInt == 2;
      if ( unsignedInt == 2 )
      {
        __asm
        {
          vsubss  xmm0, xmm12, xmm7; val
          vmovaps xmm2, xmm12; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm1, xmm0, xmm0
          vsubss  xmm7, xmm12, xmm1
        }
      }
    }
    __asm
    {
      vmovss  xmm9, dword ptr [rbx+2Ch]
      vsubss  xmm0, xmm9, xmm10
      vsubss  xmm10, xmm0, xmm11
      vcomiss xmm10, cs:__real@3a83126f
    }
    if ( v65 || v66 )
    {
      _RBX->m_camOscillDur = 0.0;
      __asm { vxorps  xmm1, xmm1, xmm1 }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm7, [rsp+108h+arg_10]
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000; Y
        vmovss  xmm0, cs:__real@402df854; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm7, [rsp+108h+arg_0]; X
      }
      cosf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm6, xmm0
        vsubss  xmm1, xmm12, xmm1
        vmulss  xmm0, xmm1, xmm10
        vmovss  xmm1, dword ptr [rbx+20h]
        vsubss  xmm2, xmm9, xmm0
        vmovss  dword ptr [rbx+18h], xmm2
      }
    }
    __asm
    {
      vmovss  xmm6, [rsp+108h+arg_18]
      vmovss  xmm10, [rsp+108h+arg_8]
      vsubss  xmm1, xmm1, xmm6
      vmovss  dword ptr [rbx+20h], xmm1
    }
  }
  __asm { vcomiss xmm1, xmm8 }
  if ( v65 || v66 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3ecccccd; minval
      vmovaps xmm0, xmm14; val
    }
    *(float *)&_XMM0 = NormalizeRange(*(double *)&_XMM0, *(double *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm1, xmm0
      vmulss  xmm2, xmm0, xmm15
      vaddss  xmm4, xmm2, xmm11
      vaddss  xmm1, xmm4, xmm10; dst
      vmovaps xmm3, xmm13; speed
      vmovaps xmm2, xmm6; frameTime
    }
    BgVehiclePhysics::DampLerp(&_RBX->m_camFovDelta, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  }
  __asm { vmovaps xmm14, [rsp+108h+var_B8] }
  _R11 = &v116;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+108h+var_C8]
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

void __fastcall BgVehiclePhysicsGround::TryStabilizeAngles(BgVehiclePhysicsGround *this, double deltaTime, double rollSpeed, double pitchSpeed)
{
  bool v12; 
  char v16; 
  _BYTE v58[32]; 
  vec3_t outVelLs; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm6, cs:__real@3a83126f
    vcomiss xmm2, xmm6
    vmovaps xmm8, xmm3
  }
  v12 = (unsigned __int64)v58 != _security_cookie;
  _RBX = this;
  __asm
  {
    vcomiss xmm3, xmm6
    vmovaps xmm7, xmm2
    vmovaps xmm9, xmm1
  }
  if ( (unsigned __int64)v58 != _security_cookie )
  {
    __asm { vmovaps [rsp+98h+var_58], xmm11 }
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
    v16 = 0;
    __asm
    {
      vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vxorps  xmm11, xmm11, xmm11
    }
    if ( v12 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+184h]
        vmulss  xmm3, xmm0, dword ptr [rax+4]
        vmovss  xmm1, dword ptr [rbx+180h]
        vmulss  xmm2, xmm1, dword ptr [rax]
        vmovss  xmm0, dword ptr [rbx+188h]
        vmulss  xmm1, xmm0, dword ptr [rax+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm3, xmm4, xmm1
        vandps  xmm2, xmm3, xmm5
        vcomiss xmm2, xmm6
        vsqrtss xmm2, xmm2, xmm2
        vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
        vcmpless xmm0, xmm11, xmm3
        vblendvps xmm0, xmm1, xmm2, xmm0
        vmovss  xmm2, dword ptr [rsp+98h+outVelLs]
        vmulss  xmm1, xmm0, xmm9
        vmulss  xmm3, xmm1, xmm7
        vsubss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+98h+outVelLs], xmm0
      }
      v16 = 1;
    }
    if ( v12 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+178h]
        vmulss  xmm3, xmm0, dword ptr [rax+4]
        vmovss  xmm1, dword ptr [rbx+174h]
        vmulss  xmm2, xmm1, dword ptr [rax]
        vmovss  xmm0, dword ptr [rbx+17Ch]
        vmulss  xmm1, xmm0, dword ptr [rax+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm3, xmm4, xmm1
        vandps  xmm2, xmm3, xmm5
        vcomiss xmm2, xmm6
        vcmpless xmm0, xmm11, xmm3
        vsqrtss xmm2, xmm2, xmm2
        vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
        vblendvps xmm0, xmm1, xmm2, xmm0
        vmulss  xmm1, xmm0, xmm8
        vmulss  xmm3, xmm1, xmm9
        vaddss  xmm0, xmm3, dword ptr [rsp+98h+outVelLs+4]
        vmovss  dword ptr [rsp+98h+outVelLs+4], xmm0
      }
    }
    else if ( !v16 )
    {
LABEL_9:
      __asm { vmovaps xmm11, [rsp+98h+var_58] }
      goto LABEL_10;
    }
    BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &outVelLs, &_RBX->m_angularVelocityWs);
    goto LABEL_9;
  }
LABEL_10:
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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

  _RBX = outAnimParams;
  _RDI = this;
  if ( vehicleSeat != 1 )
    return 0;
  if ( !outAnimParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 4796, ASSERT_TYPE_ASSERT, "(outAnimParams)", (const char *)&queryFormat, "outAnimParams") )
    __debugbreak();
  _RBX->yaw = _RDI->m_animYaw.v[0];
  result = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0D08h]
    vaddss  xmm1, xmm0, dword ptr [rdi+0D00h]
    vmovss  dword ptr [rbx+10h], xmm1
  }
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

  _RBX = outAnimParams;
  _RSI = this;
  if ( !outAnimParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 4670, ASSERT_TYPE_ASSERT, "(outAnimParams)", (const char *)&queryFormat, "outAnimParams") )
    __debugbreak();
  if ( vehicleSeat != 1 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+178h]
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmulss  xmm2, xmm0, dword ptr [rax+4]
    vmovss  xmm0, dword ptr [rsi+174h]
    vmulss  xmm1, xmm0, dword ptr [rax]
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rsi+17Ch]
    vmulss  xmm0, xmm2, dword ptr [rax+8]
    vaddss  xmm7, xmm3, xmm0
    vandps  xmm1, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+68h+var_38], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vsubss  xmm0, xmm8, xmm1; X
  }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3f4391d1; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000; min
    vcmpless xmm3, xmm6, xmm7
    vblendvps xmm3, xmm1, xmm8, xmm3
    vmulss  xmm0, xmm0, xmm3
    vmulss  xmm4, xmm0, cs:__real@42c80000
    vmovss  xmm3, cs:__real@3f8e38e4
    vmovss  dword ptr [rbx+10h], xmm4
    vdivss  xmm0, xmm3, dword ptr [rsi+0AC0h]
    vmulss  xmm0, xmm0, dword ptr [rsi+0AF0h]; val
    vmovaps xmm2, xmm8; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@c2c80000
    vmovaps xmm8, [rsp+68h+var_38]
  }
  result = 1;
  __asm
  {
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rbx+0Ch], xmm1
  }
  return result;
}

/*
==============
BgVehiclePhysicsGround::UpdateControlTimes
==============
*/

void __fastcall BgVehiclePhysicsGround::UpdateControlTimes(BgVehiclePhysicsGround *this, double deltaTime)
{
  bool v10; 
  char v22; 
  bool v23; 
  bool v29; 
  __int128 v55; 
  __int128 v56; 
  char v59; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = this;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm6, xmm1
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  __asm
  {
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm0, xmm8
    vcomiss xmm0, cs:__real@3a83126f
  }
  v10 = !(v22 | v23);
  BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( v10 )
  {
    __asm
    {
      vcmpless xmm1, xmm7, dword ptr [rbx+0A1Ch]
      vmovss  xmm3, cs:__real@bf800000
      vcmpless xmm0, xmm7, xmm0
      vblendvps xmm2, xmm3, xmm9, xmm1
      vblendvps xmm0, xmm3, xmm9, xmm0
      vmulss  xmm1, xmm2, xmm0
      vcomiss xmm1, xmm7
    }
  }
  if ( v10 )
  {
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx+0A20h]
      vmovss  dword ptr [rbx+0A20h], xmm0
    }
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
    __asm
    {
      vandps  xmm0, xmm0, xmm8
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm0, xmm1, dword ptr [rbx+0A24h]
      vmovss  dword ptr [rbx+0A24h], xmm0
    }
  }
  else
  {
    *(_QWORD *)&_RBX->m_controlEx.steeringTime = 0i64;
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
  __asm
  {
    vandps  xmm0, xmm0, xmm8
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v22 | v23 )
  {
    _RBX->m_controlEx.gasTime = 0.0;
  }
  else
  {
    *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 4u);
    __asm
    {
      vandps  xmm0, xmm0, xmm8
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm0, xmm1, dword ptr [rbx+0A28h]
      vmovss  dword ptr [rbx+0A28h], xmm0
    }
  }
  __asm
  {
    vmovss  xmm0, cs:HBENDDECAY
    vcomiss xmm0, cs:HBSTARTDECAY
  }
  if ( v22 | v23 )
  {
    v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1955, ASSERT_TYPE_ASSERT, "(HBENDDECAY > HBSTARTDECAY)", (const char *)&queryFormat, "HBENDDECAY > HBSTARTDECAY", v55, v56);
    v22 = 0;
    v23 = !v29;
    if ( v29 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:HBSTARTDECAY
    vcomiss xmm0, cs:HBMAXTIME
  }
  if ( v22 | v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 1956, ASSERT_TYPE_ASSERT, "(HBSTARTDECAY > HBMAXTIME)", (const char *)&queryFormat, "HBSTARTDECAY > HBMAXTIME") )
    __debugbreak();
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 3u);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+0A2Ch]
    vandps  xmm0, xmm0, xmm8
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v22 | v23 )
  {
    __asm
    {
      vsubss  xmm0, xmm2, xmm6
      vmaxss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx+0A30h], xmm1
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm6, cs:__real@41800000
      vaddss  xmm0, xmm6, dword ptr [rbx+0A30h]
      vaddss  xmm2, xmm1, xmm2
      vminss  xmm1, xmm2, cs:HBMAXTIME
      vmovss  dword ptr [rbx+0A30h], xmm0
    }
  }
  __asm { vmovss  dword ptr [rbx+0A2Ch], xmm1 }
  if ( _RBX->SupportsFeature(_RBX, VPFEAT_HANDBRAKE_FOR_DRIFT) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0A30h]
      vmovss  xmm1, cs:HBSTARTDECAY
      vcomiss xmm0, xmm1
      vsubss  xmm2, xmm0, xmm1
      vmovss  xmm0, cs:HBENDDECAY
      vsubss  xmm1, xmm0, xmm1
      vdivss  xmm0, xmm2, xmm1; val
      vmovaps xmm2, xmm9; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm0, xmm9, xmm0
      vsubss  xmm1, xmm0, xmm9
      vmulss  xmm2, xmm1, xmm1
      vsubss  xmm0, xmm9, xmm2
      vmovss  dword ptr [rbx+0E4h], xmm0
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rbx+0E4h], xmm7 }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v59;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
BgVehiclePhysicsGround::UpdatePlayerInputControls
==============
*/
void BgVehiclePhysicsGround::UpdatePlayerInputControls(BgVehiclePhysicsGround *this, const usercmd_s *cmd, const playerState_s *ps)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RDI = this;
  BgVehiclePhysics::UpdatePlayerInputControls(this, cmd, ps);
  BgVehiclePhysics::UpdateHornInputControls(_RDI, cmd, 0x1000u, 0x2000u);
  *(float *)&_XMM0 = GetInputCharValueWithThreshold(-cmd->remoteControlMove[1], CAR_STEER_THRESHOLD);
  __asm { vmovaps xmm6, xmm0 }
  *(float *)&_XMM0 = GetInputCharValueWithThreshold(cmd->remoteControlMove[0], CAR_THROTTLE_THRESHOLD);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmaxss  xmm1, xmm0, xmm2
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdi+0D0h], xmm6
    vmaxss  xmm0, xmm0, xmm2
    vmovss  dword ptr [rdi+0C8h], xmm1
    vmovss  dword ptr [rdi+0CCh], xmm0
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 0);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RDI->m_controls, 1u);
  __asm
  {
    vmovss  xmm2, cs:__real@3c010204
    vsubss  xmm1, xmm6, xmm0
    vmovss  dword ptr [rdi+0D8h], xmm1
    vxorps  xmm0, xmm0, xmm0
  }
  if ( (cmd->buttons & 0x8000000000000i64) != 0 )
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rdi+0DCh], xmm1
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, ecx
      vsubss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rdi+0DCh], xmm1
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rdi+0D4h], xmm0
  }
  if ( _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_VINDIA )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm4, xmm1, xmm2
      vandps  xmm3, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm5, xmm0, xmm2
      vandps  xmm0, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcmpltss xmm1, xmm0, xmm3
      vblendvps xmm0, xmm5, xmm4, xmm1
      vmovss  dword ptr [rdi+0E0h], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
BgVehiclePhysicsSentryDrone::UpdatePlayerInputControls
==============
*/
void BgVehiclePhysicsSentryDrone::UpdatePlayerInputControls(BgVehiclePhysicsSentryDrone *this, const usercmd_s *cmd, const playerState_s *ps)
{
  const dvar_t *v17; 
  int integer; 
  int v21; 
  int v22; 
  int v23; 
  float c; 
  float s; 
  vec3_t angles; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  _RSI = ps;
  __asm { vmovaps xmmword ptr [r11-58h], xmm9 }
  _RDI = this;
  __asm { vmovaps xmmword ptr [r11-68h], xmm10 }
  BgVehiclePhysicsGround::UpdatePlayerInputControls(this, cmd, ps);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm9, xmm0, cs:__real@3c010204
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm10, xmm0, cs:__real@3c010204
  }
  AxisToAngles((const tmat33_t<vec3_t> *)&_RDI->m_transform, &angles);
  v17 = DVARINT_bg_wheelsonControls;
  if ( !DVARINT_bg_wheelsonControls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonControls") )
    __debugbreak();
  __asm { vmovaps [rsp+0C8h+var_48], xmm7 }
  Dvar_CheckFrontendServerThread(v17);
  integer = v17->current.integer;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( (unsigned int)(integer - 3) <= 1 )
    __asm { vmovss  xmm7, dword ptr [rdi+0D0h] }
  else
    __asm { vxorps  xmm7, xmm7, xmm7 }
  v21 = integer - 1;
  if ( !v21 )
    goto LABEL_12;
  v22 = v21 - 1;
  if ( !v22 )
    goto LABEL_11;
  v23 = v22 - 1;
  if ( v23 )
  {
    if ( v23 != 1 )
      goto LABEL_13;
LABEL_11:
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1DCh]
      vsubss  xmm1, xmm0, dword ptr [rsp+0C8h+angles+4]
      vmulss  xmm5, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm4, xmm1, xmm2, 1
      vsubss  xmm0, xmm5, xmm4
      vmulss  xmm0, xmm0, cs:__real@c0c90fdb; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, &c);
    __asm
    {
      vmulss  xmm1, xmm9, [rsp+0C8h+c]
      vmulss  xmm0, xmm10, [rsp+0C8h+s]
      vmovaps xmm3, xmm9
      vmulss  xmm2, xmm3, [rsp+0C8h+s]
      vsubss  xmm9, xmm1, xmm0
      vmulss  xmm1, xmm10, [rsp+0C8h+c]
      vaddss  xmm10, xmm2, xmm1
    }
  }
LABEL_12:
  __asm
  {
    vxorps  xmm3, xmm10, cs:__xmm@80000000800000008000000080000000
    vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm2, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcmpltss xmm2, xmm0, xmm2
    vblendvps xmm0, xmm3, xmm7, xmm2
    vmovss  dword ptr [rdi+0D0h], xmm0
  }
LABEL_13:
  __asm
  {
    vxorps  xmm1, xmm9, cs:__xmm@80000000800000008000000080000000
    vmovaps xmm10, [rsp+0C8h+var_68]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmaxss  xmm0, xmm9, xmm6
    vmovaps xmm9, [rsp+0C8h+var_58]
    vmovss  dword ptr [rdi+0C8h], xmm0
    vmaxss  xmm0, xmm1, xmm6
    vmovaps xmm6, [rsp+0C8h+var_38]
    vmovss  dword ptr [rdi+0CCh], xmm0
  }
  if ( _RDI->m_autoHandbrake )
  {
    _RBX = DCONST_DVARMODEFLT_bg_bradleyHandbrakeTreshold;
    if ( !DCONST_DVARMODEFLT_bg_bradleyHandbrakeTreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyHandbrakeTreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+28h]; speedThreshold
      vmovss  xmm1, cs:__real@3dcccccd; steeringThreshold
    }
    BgVehiclePhysicsGround::IsNotMoving(_RDI, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rdi+0D4h], xmm0
    }
  }
}

/*
==============
BgVehiclePhysicsTank::UpdatePlayerInputControls
==============
*/
void BgVehiclePhysicsTank::UpdatePlayerInputControls(BgVehiclePhysicsTank *this, const usercmd_s *cmd, const playerState_s *ps)
{
  vec3_t angles; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RSI = this;
  BgVehiclePhysicsGround::UpdatePlayerInputControls(this, cmd, ps);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, cs:__real@3c010204
  }
  AxisToAngles((const tmat33_t<vec3_t> *)&_RSI->m_transform, &angles);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm5, xmm0, cs:__real@3c010204
    vandps  xmm3, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebx
    vmulss  xmm0, xmm1, cs:__real@bc010204
    vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rsi+0D0h], xmm0
    vxorps  xmm2, xmm2, xmm2
    vmaxss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rsi+0C8h], xmm0
    vmaxss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rsi+0CCh], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm4, xmm1, cs:__real@3c010204
    vandps  xmm0, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcmpltss xmm1, xmm0, xmm3
    vblendvps xmm0, xmm4, xmm5, xmm1
    vmovss  dword ptr [rsi+0E0h], xmm0
  }
  if ( _RSI->m_autoHandbrake )
  {
    _RBX = DCONST_DVARMODEFLT_bg_bradleyHandbrakeTreshold;
    if ( !DCONST_DVARMODEFLT_bg_bradleyHandbrakeTreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyHandbrakeTreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+28h]; speedThreshold
      vmovss  xmm1, cs:__real@3dcccccd; steeringThreshold
    }
    BgVehiclePhysicsGround::IsNotMoving(_RSI, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rsi+0D4h], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
BgVehiclePhysicsCarBase::UpdateSteeringAngle
==============
*/

void __fastcall BgVehiclePhysicsCarBase::UpdateSteeringAngle(BgVehiclePhysicsCarBase *this, double deltaTime)
{
  _RBX = this;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  __asm { vmovaps xmm6, xmm0 }
  BgVehiclePhysics::GetNormalSpeed(_RBX);
  __asm
  {
    vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; X
    vmovss  xmm7, dword ptr [rbx+0AC0h]
  }
  *(float *)&_XMM0 = cbrtf(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vmovss  xmm2, cs:__real@bf800000
    vxorps  xmm1, xmm1, xmm1
    vcmpless xmm4, xmm1, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vblendvps xmm1, xmm2, xmm3, xmm4
    vmulss  xmm0, xmm0, xmm1
    vmulss  xmm3, xmm0, xmm7
    vmovaps xmm7, [rsp+48h+var_28]
    vmovss  dword ptr [rbx+0AF0h], xmm3
  }
}

/*
==============
BgVehiclePhysicsTwoWheeled::UpdateSteeringAngle
==============
*/
void BgVehiclePhysicsTwoWheeled::UpdateSteeringAngle(BgVehiclePhysicsTwoWheeled *this, float deltaTime)
{
  _RBX = this;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@3f666666
    vandps  xmm6, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm1, xmm3
    vmulss  xmm4, xmm2, xmm3
    vxorps  xmm2, xmm6, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm3, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcmpless xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+48h+var_28]
    vblendvps xmm1, xmm2, xmm6, xmm1
    vmovaps xmm6, [rsp+48h+var_18]
    vsubss  xmm5, xmm3, xmm4
    vmulss  xmm0, xmm5, xmm1
    vmovss  dword ptr [rbx+0AF0h], xmm0
  }
}

/*
==============
BgVehiclePhysicsGround::UpdateTimeInAir
==============
*/

void __fastcall BgVehiclePhysicsGround::UpdateTimeInAir(BgVehiclePhysicsGround *this, double deltaTime)
{
  char v7; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovss  xmm7, dword ptr [rcx+0C88h]
    vmovaps xmm6, xmm1
  }
  v7 = ((__int64 (*)(void))this->IsInAir)();
  __asm { vmovss  xmm0, dword ptr [rbx+0C88h] }
  if ( v7 )
  {
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vxorps  xmm6, xmm6, xmm6
      vmaxss  xmm1, xmm0, xmm6
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm0, xmm6
      vxorps  xmm6, xmm6, xmm6
      vminss  xmm1, xmm0, xmm6
    }
  }
  __asm
  {
    vcomiss xmm7, xmm6
    vmovss  dword ptr [rbx+0C88h], xmm1
  }
  if ( v7 )
  {
    __asm
    {
      vcomiss xmm1, xmm6
      vcomiss xmm7, xmm6
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
}

