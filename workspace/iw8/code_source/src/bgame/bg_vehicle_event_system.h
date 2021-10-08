/*
==============
BgVehicleEventSystem::AircraftImpact
==============
*/

void __fastcall BgVehicleEventSystem::AircraftImpact(BgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, const vec3_t *impactPosWs, unsigned int surfaceData, const bool isRotorImpact, const vec3_t *normal)
{
  ?AircraftImpact@BgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysics@@AEBTvec3_t@@I_N1@Z(this, vehObj, impactPosWs, surfaceData, isRotorImpact, normal);
}

/*
==============
BgVehicleEventSystem::CarImpactPlayer
==============
*/

void __fastcall BgVehicleEventSystem::CarImpactPlayer(BgVehicleEventSystem *this, BgVehiclePhysicsGround *vehObj, const vec3_t *playerPos)
{
  ?CarImpactPlayer@BgVehicleEventSystem@@UEAAXAEAVBgVehiclePhysicsGround@@AEBTvec3_t@@@Z(this, vehObj, playerPos);
}

/*
==============
BgVehicleEventSystem::TankFire
==============
*/

void __fastcall BgVehicleEventSystem::TankFire(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ?TankFire@BgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@@Z(this, vehObj);
}

/*
==============
BgVehicleEventSystem::CarDrivingKeyframed
==============
*/

void __fastcall BgVehicleEventSystem::CarDrivingKeyframed(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ?CarDrivingKeyframed@BgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@@Z(this, vehObj);
}

/*
==============
BgVehicleEventSystem::ProcessDeferredEventsInternal
==============
*/

void __fastcall BgVehicleEventSystem::ProcessDeferredEventsInternal(BgVehicleEventSystem *this)
{
  ?ProcessDeferredEventsInternal@BgVehicleEventSystem@@MEBAXXZ(this);
}

/*
==============
BgVehicleEventSystem::CarImpactKeyframed
==============
*/

void __fastcall BgVehicleEventSystem::CarImpactKeyframed(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *impactPosWs, unsigned int surfaceData)
{
  ?CarImpactKeyframed@BgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@AEBTvec3_t@@I@Z(this, vehObj, impactPosWs, surfaceData);
}

/*
==============
BgVehicleEventSystem::VehicleReset
==============
*/

void __fastcall BgVehicleEventSystem::VehicleReset(BgVehicleEventSystem *this, const BgVehiclePhysics *vehObj)
{
  ?VehicleReset@BgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysics@@@Z(this, vehObj);
}

/*
==============
BgVehicleEventSystem::CarPlayDoorSmokeVFX
==============
*/

void __fastcall BgVehicleEventSystem::CarPlayDoorSmokeVFX(BgVehicleEventSystem *this, int playerEntNum)
{
  ?CarPlayDoorSmokeVFX@BgVehicleEventSystem@@UEAAXH@Z(this, playerEntNum);
}

/*
==============
BgVehicleEventSystem::CarLanded
==============
*/

void __fastcall BgVehicleEventSystem::CarLanded(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, float timeWasInAir)
{
  ?CarLanded@BgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@M@Z(this, vehObj, timeWasInAir);
}

/*
==============
BgVehicleEventSystem::CarGamepadRumble
==============
*/

void __fastcall BgVehicleEventSystem::CarGamepadRumble(BgVehicleEventSystem *this, float intensity)
{
  ?CarGamepadRumble@BgVehicleEventSystem@@UEAAXM@Z(this, intensity);
}

/*
==============
BgVehicleEventSystem::RCPlaneBoost
==============
*/

void __fastcall BgVehicleEventSystem::RCPlaneBoost(BgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, float shakeScale, int shakeDur, float shakeRad, const SndAliasList *snd)
{
  ?RCPlaneBoost@BgVehicleEventSystem@@UEAAXPEBVBgVehiclePhysics@@MHMPEBUSndAliasList@@@Z(this, vehObj, shakeScale, shakeDur, shakeRad, snd);
}

/*
==============
BgVehicleEventSystem::CarStopPlayer
==============
*/

void __fastcall BgVehicleEventSystem::CarStopPlayer(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ?CarStopPlayer@BgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@@Z(this, vehObj);
}

/*
==============
BgVehicleEventSystem::Horn
==============
*/

void __fastcall BgVehicleEventSystem::Horn(BgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, unsigned int sndHash, bool checkForTime)
{
  ?Horn@BgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysics@@I_N@Z(this, vehObj, sndHash, checkForTime);
}

/*
==============
BgVehicleEventSystem::CarImpact
==============
*/

void __fastcall BgVehicleEventSystem::CarImpact(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *impactPosWs, unsigned int surfaceData, const vec3_t *normal, bool playvfx)
{
  ?CarImpact@BgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@AEBTvec3_t@@I1_N@Z(this, vehObj, impactPosWs, surfaceData, normal, playvfx);
}

/*
==============
BgVehicleEventSystem::CarDriving
==============
*/

void __fastcall BgVehicleEventSystem::CarDriving(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ?CarDriving@BgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@@Z(this, vehObj);
}

/*
==============
BgVehicleEventSystem::AircraftImpact
==============
*/
void BgVehicleEventSystem::AircraftImpact(BgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, const vec3_t *impactPosWs, unsigned int surfaceData)
{
  ;
}

/*
==============
BgVehicleEventSystem::CarDriving
==============
*/
void BgVehicleEventSystem::CarDriving(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ;
}

/*
==============
BgVehicleEventSystem::CarDrivingKeyframed
==============
*/
void BgVehicleEventSystem::CarDrivingKeyframed(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ;
}

/*
==============
BgVehicleEventSystem::CarGamepadRumble
==============
*/
void BgVehicleEventSystem::CarGamepadRumble(BgVehicleEventSystem *this, float intensity)
{
  ;
}

/*
==============
BgVehicleEventSystem::CarImpact
==============
*/
void BgVehicleEventSystem::CarImpact(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *impactPosWs, unsigned int surfaceData)
{
  ;
}

/*
==============
BgVehicleEventSystem::CarImpactKeyframed
==============
*/
void BgVehicleEventSystem::CarImpactKeyframed(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *impactPosWs, unsigned int surfaceData)
{
  ;
}

/*
==============
BgVehicleEventSystem::CarImpactPlayer
==============
*/
void BgVehicleEventSystem::CarImpactPlayer(BgVehicleEventSystem *this, BgVehiclePhysicsGround *vehObj, const vec3_t *playerPos)
{
  ;
}

/*
==============
BgVehicleEventSystem::CarLanded
==============
*/
void BgVehicleEventSystem::CarLanded(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, float timeWasInAir)
{
  ;
}

/*
==============
BgVehicleEventSystem::CarPlayDoorSmokeVFX
==============
*/
void BgVehicleEventSystem::CarPlayDoorSmokeVFX(BgVehicleEventSystem *this, int playerEntNum)
{
  ;
}

/*
==============
BgVehicleEventSystem::CarStopPlayer
==============
*/
void BgVehicleEventSystem::CarStopPlayer(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ;
}

/*
==============
BgVehicleEventSystem::Horn
==============
*/
void BgVehicleEventSystem::Horn(BgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, unsigned int sndHash, bool checkForTime)
{
  ;
}

/*
==============
BgVehicleEventSystem::ProcessDeferredEventsInternal
==============
*/
void BgVehicleEventSystem::ProcessDeferredEventsInternal(BgVehicleEventSystem *this)
{
  ;
}

/*
==============
BgVehicleEventSystem::RCPlaneBoost
==============
*/
void BgVehicleEventSystem::RCPlaneBoost(BgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, float shakeScale, int shakeDur)
{
  ;
}

/*
==============
BgVehicleEventSystem::TankFire
==============
*/
void BgVehicleEventSystem::TankFire(BgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ;
}

/*
==============
BgVehicleEventSystem::VehicleReset
==============
*/
void BgVehicleEventSystem::VehicleReset(BgVehicleEventSystem *this, const BgVehiclePhysics *vehObj)
{
  ;
}

