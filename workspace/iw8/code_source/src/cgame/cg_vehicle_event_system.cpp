/*
==============
CgVehicleEventSystem::DebugDrawSlot
==============
*/

void __fastcall CgVehicleEventSystem::DebugDrawSlot(CgVehicleEventSystem *this, int slotNdx)
{
  ?DebugDrawSlot@CgVehicleEventSystem@@IEAAXH@Z(this, slotNdx);
}

/*
==============
CgVehicleEventSystem::CarDriving_Sounds
==============
*/

void __fastcall CgVehicleEventSystem::CarDriving_Sounds(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehicleDef *vehDef)
{
  ?CarDriving_Sounds@CgVehicleEventSystem@@IEAAXAEBVBgVehiclePhysicsGround@@PEBUVehicleDef@@@Z(this, vehObj, vehDef);
}

/*
==============
CgVehicleEventSystem::PlaySoundSurfaceDeferred
==============
*/

int __fastcall CgVehicleEventSystem::PlaySoundSurfaceDeferred(CgVehicleEventSystem *this, const SndAliasList *snd, int entNum, unsigned int surfaceData, const vec3_t *origin, float vol, float pitch, int fadeTime, unsigned int vehIndex, unsigned int pbEntryId)
{
  return ?PlaySoundSurfaceDeferred@CgVehicleEventSystem@@IEAAHPEBUSndAliasList@@HIAEBTvec3_t@@MMHII@Z(this, snd, entNum, surfaceData, origin, vol, pitch, fadeTime, vehIndex, pbEntryId);
}

/*
==============
CgVehicleEventSystem::IsFarFromPlayer
==============
*/

bool __fastcall CgVehicleEventSystem::IsFarFromPlayer(CgVehicleEventSystem *this, const vec3_t *posWs)
{
  return ?IsFarFromPlayer@CgVehicleEventSystem@@IEAA_NAEBTvec3_t@@@Z(this, posWs);
}

/*
==============
CgVehicleEventSystem::StopAllSoundsOnVehicle
==============
*/

void __fastcall CgVehicleEventSystem::StopAllSoundsOnVehicle(CgVehicleEventSystem *this, int entNum, unsigned int vehIndex)
{
  ?StopAllSoundsOnVehicle@CgVehicleEventSystem@@IEBAXHI@Z(this, entNum, vehIndex);
}

/*
==============
CgVehicleEventSystem::ImpactShakeCamOnSpeed
==============
*/

void __fastcall CgVehicleEventSystem::ImpactShakeCamOnSpeed(CgVehicleEventSystem *this, float normalSpeed, float shakeScale)
{
  ?ImpactShakeCamOnSpeed@CgVehicleEventSystem@@IEAAXMM@Z(this, normalSpeed, shakeScale);
}

/*
==============
CgVehicleEventSystem::ComputeTireDataForSound
==============
*/

void __fastcall CgVehicleEventSystem::ComputeTireDataForSound(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, unsigned int *outSurfData, unsigned int *outSurfDataSkid, float *outMaxSuspDeform, vec3_t *outSuspWs)
{
  ?ComputeTireDataForSound@CgVehicleEventSystem@@IEAAXAEBVBgVehiclePhysicsGround@@AEAI1AEAMAEATvec3_t@@@Z(this, vehObj, outSurfData, outSurfDataSkid, outMaxSuspDeform, outSuspWs);
}

/*
==============
CgVehicleEventSystem::GetTireSFXSlow
==============
*/

const VehiclePhysicsSoundGroup *__fastcall CgVehicleEventSystem::GetTireSFXSlow(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehiclePhysicsDef *physDef)
{
  return ?GetTireSFXSlow@CgVehicleEventSystem@@IEAAAEBUVehiclePhysicsSoundGroup@@AEBVBgVehiclePhysicsGround@@AEBUVehiclePhysicsDef@@@Z(this, vehObj, physDef);
}

/*
==============
CgVehicleEventSystem::CarDrivingKeyframed
==============
*/

void __fastcall CgVehicleEventSystem::CarDrivingKeyframed(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ?CarDrivingKeyframed@CgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@@Z(this, vehObj);
}

/*
==============
CgVehicleEventSystem::CarDriving
==============
*/

void __fastcall CgVehicleEventSystem::CarDriving(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ?CarDriving@CgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@@Z(this, vehObj);
}

/*
==============
CgVehicleEventSystem::GetTireVFXSlow
==============
*/

const VehiclePhysicsVfxGroup *__fastcall CgVehicleEventSystem::GetTireVFXSlow(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, unsigned int windex, const VehiclePhysicsDef *physDef)
{
  return ?GetTireVFXSlow@CgVehicleEventSystem@@IEAAAEBUVehiclePhysicsVfxGroup@@AEBVBgVehiclePhysicsGround@@IAEBUVehiclePhysicsDef@@@Z(this, vehObj, windex, physDef);
}

/*
==============
CgVehicleEventSystem::StopSoundsOnEntDeferred
==============
*/

void __fastcall CgVehicleEventSystem::StopSoundsOnEntDeferred(CgVehicleEventSystem *this, int entNum, unsigned int vehIndex)
{
  ?StopSoundsOnEntDeferred@CgVehicleEventSystem@@IEAAXHI@Z(this, entNum, vehIndex);
}

/*
==============
CgVehicleEventSystem::CarImpactPlayer
==============
*/

void __fastcall CgVehicleEventSystem::CarImpactPlayer(CgVehicleEventSystem *this, BgVehiclePhysicsGround *vehObj, const vec3_t *playerPos)
{
  ?CarImpactPlayer@CgVehicleEventSystem@@UEAAXAEAVBgVehiclePhysicsGround@@AEBTvec3_t@@@Z(this, vehObj, playerPos);
}

/*
==============
CgVehicleEventSystem::RCPlaneBoost
==============
*/

void __fastcall CgVehicleEventSystem::RCPlaneBoost(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, float shakeScale, int shakeDur, float shakeRad, const SndAliasList *snd)
{
  ?RCPlaneBoost@CgVehicleEventSystem@@UEAAXPEBVBgVehiclePhysics@@MHMPEBUSndAliasList@@@Z(this, vehObj, shakeScale, shakeDur, shakeRad, snd);
}

/*
==============
CgVehicleEventSystem::FindAvailableVfxSlot
==============
*/

unsigned int __fastcall CgVehicleEventSystem::FindAvailableVfxSlot(CgVehicleEventSystem *this, ParticleSystemHandle *slots, unsigned int maxVfxs)
{
  return ?FindAvailableVfxSlot@CgVehicleEventSystem@@IEAAIPEAW4ParticleSystemHandle@@I@Z(this, slots, maxVfxs);
}

/*
==============
CgVehicleEventSystem::CarImpactKeyframed
==============
*/

void __fastcall CgVehicleEventSystem::CarImpactKeyframed(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *impactPosWs, unsigned int surfaceData)
{
  ?CarImpactKeyframed@CgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@AEBTvec3_t@@I@Z(this, vehObj, impactPosWs, surfaceData);
}

/*
==============
CgVehicleEventSystem::StopVfx
==============
*/

void __fastcall CgVehicleEventSystem::StopVfx(CgVehicleEventSystem *this, ParticleManager *pmgr, ParticleSystemHandle *phandle)
{
  ?StopVfx@CgVehicleEventSystem@@IEAAXPEAVParticleManager@@AEAW4ParticleSystemHandle@@@Z(this, pmgr, phandle);
}

/*
==============
CgVehicleEventSystem::GetTireSFXFast
==============
*/

const VehiclePhysicsSoundGroup *__fastcall CgVehicleEventSystem::GetTireSFXFast(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehiclePhysicsDef *physDef)
{
  return ?GetTireSFXFast@CgVehicleEventSystem@@IEAAAEBUVehiclePhysicsSoundGroup@@AEBVBgVehiclePhysicsGround@@AEBUVehiclePhysicsDef@@@Z(this, vehObj, physDef);
}

/*
==============
CgVehicleEventSystem::PlaySpeedDependentSurfaceSound
==============
*/

int __fastcall CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehiclePhysicsSoundGroup *sndHard, const VehiclePhysicsSoundGroup *sndLight, SndAliasList *sndHardAlias, SndAliasList *sndLightAlias, const vec3_t *posWs, unsigned int surfaceData, float mult, unsigned int pbidType)
{
  return ?PlaySpeedDependentSurfaceSound@CgVehicleEventSystem@@IEAAHAEBVBgVehiclePhysicsGround@@AEBUVehiclePhysicsSoundGroup@@1PEAUSndAliasList@@2AEBTvec3_t@@IMI@Z(this, vehObj, sndHard, sndLight, sndHardAlias, sndLightAlias, posWs, surfaceData, mult, pbidType);
}

/*
==============
CgVehicleEventSystem::FindAvailableImpactSoundSlot
==============
*/

unsigned int __fastcall CgVehicleEventSystem::FindAvailableImpactSoundSlot(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  return ?FindAvailableImpactSoundSlot@CgVehicleEventSystem@@IEAAIAEBVBgVehiclePhysicsGround@@@Z(this, vehObj);
}

/*
==============
CgVehicleEventSystem::GetHornSoundOffset
==============
*/

void __fastcall CgVehicleEventSystem::GetHornSoundOffset(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, vec3_t *outOffset)
{
  ?GetHornSoundOffset@CgVehicleEventSystem@@IEBAXAEBVBgVehiclePhysics@@AEATvec3_t@@@Z(this, vehObj, outOffset);
}

/*
==============
CgVehicleEventSystem::GetWheelContactPointKeyframed
==============
*/

bool __fastcall CgVehicleEventSystem::GetWheelContactPointKeyframed(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, unsigned int windex, const CEntVehicleInfo *vinfo, vec3_t *outPointWs)
{
  return ?GetWheelContactPointKeyframed@CgVehicleEventSystem@@IEAA_NAEBVBgVehiclePhysicsGround@@IAEBUCEntVehicleInfo@@AEATvec3_t@@@Z(this, vehObj, windex, vinfo, outPointWs);
}

/*
==============
CgVehicleEventSystem::CarStopPlayer
==============
*/

void __fastcall CgVehicleEventSystem::CarStopPlayer(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ?CarStopPlayer@CgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@@Z(this, vehObj);
}

/*
==============
CgVehicleEventSystem::GetPlayerAndVehicleEntities
==============
*/

bool __fastcall CgVehicleEventSystem::GetPlayerAndVehicleEntities(CgVehicleEventSystem *this, int playerEntNum, centity_t **outPlayerEnt, centity_t **outVehEnt, animScriptVehicleSeat_t *outVehSeat)
{
  return ?GetPlayerAndVehicleEntities@CgVehicleEventSystem@@IEAA_NHAEAPEAUcentity_t@@0AEAW4animScriptVehicleSeat_t@@@Z(this, playerEntNum, outPlayerEnt, outVehEnt, outVehSeat);
}

/*
==============
CgVehicleEventSystem::CarPlayDoorSmokeVFX
==============
*/

void __fastcall CgVehicleEventSystem::CarPlayDoorSmokeVFX(CgVehicleEventSystem *this, int playerEntNum)
{
  ?CarPlayDoorSmokeVFX@CgVehicleEventSystem@@UEAAXH@Z(this, playerEntNum);
}

/*
==============
CgVehicleEventSystem::IsVfxHandleValid
==============
*/

bool __fastcall CgVehicleEventSystem::IsVfxHandleValid(CgVehicleEventSystem *this, ParticleSystemHandle *phandle)
{
  return ?IsVfxHandleValid@CgVehicleEventSystem@@IEAA_NPEAW4ParticleSystemHandle@@@Z(this, phandle);
}

/*
==============
CgVehicleEventSystem::LookUpEffectBySurface
==============
*/

FxCombinedDef *__fastcall CgVehicleEventSystem::LookUpEffectBySurface(CgVehicleEventSystem *this, const VehiclePhysicsVfxGroup *vfxConfig, unsigned int surfaceData)
{
  return ?LookUpEffectBySurface@CgVehicleEventSystem@@IEAAPEAUFxCombinedDef@@AEBUVehiclePhysicsVfxGroup@@I@Z(this, vfxConfig, surfaceData);
}

/*
==============
CgVehicleEventSystem::CarLanded
==============
*/

void __fastcall CgVehicleEventSystem::CarLanded(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, float timeWasInAir)
{
  ?CarLanded@CgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@M@Z(this, vehObj, timeWasInAir);
}

/*
==============
CgVehicleEventSystem::PlaySoundDeferred
==============
*/

int __fastcall CgVehicleEventSystem::PlaySoundDeferred(CgVehicleEventSystem *this, const SndAliasList *snd, int entNum, unsigned int vehIndex, unsigned int pbentryId, const vec3_t *offset)
{
  return ?PlaySoundDeferred@CgVehicleEventSystem@@IEAAHPEBUSndAliasList@@HIIAEBTvec3_t@@@Z(this, snd, entNum, vehIndex, pbentryId, offset);
}

/*
==============
CgVehicleEventSystem::StopSoundDeferred
==============
*/

void __fastcall CgVehicleEventSystem::StopSoundDeferred(CgVehicleEventSystem *this, unsigned int playbackId)
{
  ?StopSoundDeferred@CgVehicleEventSystem@@IEAAXI@Z(this, playbackId);
}

/*
==============
CgVehicleEventSystem::ProcessDeferredEventsInternal
==============
*/

void __fastcall CgVehicleEventSystem::ProcessDeferredEventsInternal(CgVehicleEventSystem *this)
{
  ?ProcessDeferredEventsInternal@CgVehicleEventSystem@@MEBAXXZ(this);
}

/*
==============
CgVehicleEventSystem::GetTireVFXFast
==============
*/

const VehiclePhysicsVfxGroup *__fastcall CgVehicleEventSystem::GetTireVFXFast(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, unsigned int windex, const VehiclePhysicsDef *physDef)
{
  return ?GetTireVFXFast@CgVehicleEventSystem@@IEAAAEBUVehiclePhysicsVfxGroup@@AEBVBgVehiclePhysicsGround@@IAEBUVehiclePhysicsDef@@@Z(this, vehObj, windex, physDef);
}

/*
==============
CgVehicleEventSystem::AircraftImpact
==============
*/

void __fastcall CgVehicleEventSystem::AircraftImpact(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, const vec3_t *posWs, unsigned int surfaceData, const bool isRotorImpact, const vec3_t *normal)
{
  ?AircraftImpact@CgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysics@@AEBTvec3_t@@I_N1@Z(this, vehObj, posWs, surfaceData, isRotorImpact, normal);
}

/*
==============
CgVehicleEventSystem::Horn
==============
*/

void __fastcall CgVehicleEventSystem::Horn(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, unsigned int sndHash, bool checkForTime)
{
  ?Horn@CgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysics@@I_N@Z(this, vehObj, sndHash, checkForTime);
}

/*
==============
CgVehicleEventSystem::StopAllVfxOnVehicle
==============
*/

void __fastcall CgVehicleEventSystem::StopAllVfxOnVehicle(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ?StopAllVfxOnVehicle@CgVehicleEventSystem@@IEAAXAEBVBgVehiclePhysicsGround@@@Z(this, vehObj);
}

/*
==============
CgVehicleEventSystem::Init
==============
*/

void __fastcall CgVehicleEventSystem::Init(CgVehicleEventSystem *this, LocalClientNum_t localClientNum)
{
  ?Init@CgVehicleEventSystem@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgVehicleEventSystem::PlaySpeedDependentSurfaceSoundAircraft
==============
*/

int __fastcall CgVehicleEventSystem::PlaySpeedDependentSurfaceSoundAircraft(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, const VehiclePhysicsSoundGroup *sndHard, const VehiclePhysicsSoundGroup *sndLight, SndAliasList *sndHardAlias, SndAliasList *sndLightAlias, const vec3_t *posWs, unsigned int surfaceData, float mult, unsigned int pbidType)
{
  return ?PlaySpeedDependentSurfaceSoundAircraft@CgVehicleEventSystem@@IEAAHAEBVBgVehiclePhysics@@AEBUVehiclePhysicsSoundGroup@@1PEAUSndAliasList@@2AEBTvec3_t@@IMI@Z(this, vehObj, sndHard, sndLight, sndHardAlias, sndLightAlias, posWs, surfaceData, mult, pbidType);
}

/*
==============
CgVehicleEventSystem::CarImpact
==============
*/

void __fastcall CgVehicleEventSystem::CarImpact(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *posWs, unsigned int surfaceData, const vec3_t *normal, bool playvfx)
{
  ?CarImpact@CgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@AEBTvec3_t@@I1_N@Z(this, vehObj, posWs, surfaceData, normal, playvfx);
}

/*
==============
CgVehicleEventSystem::CarGamepadRumble
==============
*/

void __fastcall CgVehicleEventSystem::CarGamepadRumble(CgVehicleEventSystem *this, float intensity)
{
  ?CarGamepadRumble@CgVehicleEventSystem@@UEAAXM@Z(this, intensity);
}

/*
==============
CgVehicleEventSystem::CarDriving_Vfx
==============
*/

void __fastcall CgVehicleEventSystem::CarDriving_Vfx(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehicleDef *vehDef)
{
  ?CarDriving_Vfx@CgVehicleEventSystem@@IEAAXAEBVBgVehiclePhysicsGround@@PEBUVehicleDef@@@Z(this, vehObj, vehDef);
}

/*
==============
CgVehicleEventSystem::PlayFactorDependentVfx
==============
*/

void __fastcall CgVehicleEventSystem::PlayFactorDependentVfx(CgVehicleEventSystem *this, const ParticleSystemDef *pDef, const vec3_t *posWs, const vec3_t *normal, ParticleSystemHandle *phandle, const vec3_t *invertAxis)
{
  ?PlayFactorDependentVfx@CgVehicleEventSystem@@IEAAXPEBUParticleSystemDef@@AEBTvec3_t@@1PEAW4ParticleSystemHandle@@PEBT3@@Z(this, pDef, posWs, normal, phandle, invertAxis);
}

/*
==============
CgVehicleEventSystem::TankFire
==============
*/

void __fastcall CgVehicleEventSystem::TankFire(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  ?TankFire@CgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@@Z(this, vehObj);
}

/*
==============
CgVehicleEventSystem::PlaySpeedDependentSurfaceSound
==============
*/

int __fastcall CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(CgVehicleEventSystem *this, float planeMPH, const BgVehiclePhysicsGround *vehObj, const VehiclePhysicsSoundGroup *sndHard, const VehiclePhysicsSoundGroup *sndLight, SndAliasList *sndHardAlias, SndAliasList *sndLightAlias, const vec3_t *posWs, unsigned int surfaceData, float mult, unsigned int pbidType)
{
  return ?PlaySpeedDependentSurfaceSound@CgVehicleEventSystem@@IEAAHMAEBVBgVehiclePhysicsGround@@AEBUVehiclePhysicsSoundGroup@@1PEAUSndAliasList@@2AEBTvec3_t@@IMI@Z(this, planeMPH, vehObj, sndHard, sndLight, sndHardAlias, sndLightAlias, posWs, surfaceData, mult, pbidType);
}

/*
==============
CgVehicleEventSystem::PlayFactorDependentSurfaceSound
==============
*/

int __fastcall CgVehicleEventSystem::PlayFactorDependentSurfaceSound(CgVehicleEventSystem *this, float factor, const VehiclePhysicsSoundGroup *sndConfig, SndAliasList *snd, int entNum, const vec3_t *posWs, unsigned int surfData, unsigned int vehIndex)
{
  return ?PlayFactorDependentSurfaceSound@CgVehicleEventSystem@@IEAAHMAEBUVehiclePhysicsSoundGroup@@PEAUSndAliasList@@HAEBTvec3_t@@II@Z(this, factor, sndConfig, snd, entNum, posWs, surfData, vehIndex);
}

/*
==============
CgVehicleEventSystem::PlayFactorDependentSurfaceVfx
==============
*/

void __fastcall CgVehicleEventSystem::PlayFactorDependentSurfaceVfx(CgVehicleEventSystem *this, float factor, const VehiclePhysicsVfxGroup *vfxHard, const VehiclePhysicsVfxGroup *vfxLight, const vec3_t *posWs, const vec3_t *normal, unsigned int surfaceData, ParticleSystemHandle *phandle)
{
  ?PlayFactorDependentSurfaceVfx@CgVehicleEventSystem@@IEAAXMAEBUVehiclePhysicsVfxGroup@@0AEBTvec3_t@@1IPEAW4ParticleSystemHandle@@@Z(this, factor, vfxHard, vfxLight, posWs, normal, surfaceData, phandle);
}

/*
==============
CgVehicleEventSystem::VehicleReset
==============
*/

void __fastcall CgVehicleEventSystem::VehicleReset(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj)
{
  ?VehicleReset@CgVehicleEventSystem@@UEAAXAEBVBgVehiclePhysics@@@Z(this, vehObj);
}

/*
==============
CgVehicleEventSystem::AircraftImpact
==============
*/
void CgVehicleEventSystem::AircraftImpact(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, const vec3_t *posWs, unsigned int surfaceData, const bool isRotorImpact, const vec3_t *normal)
{
  unsigned int m_vehicleDefIndex; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v10; 
  float v11; 
  const vec3_t *v12; 
  double v13; 
  const FlightDynamics::SoundData *SoundData; 
  const FlightDynamics::SoundData *v15; 
  unsigned int RotorImpactHard; 
  const SndAliasList *AliasFromId; 
  unsigned int RotorImpactLight; 
  SndAliasList *v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int ImpactLight; 
  float v23; 
  unsigned int *v24; 
  float *v25; 
  double TopSpeedForward; 
  float v27; 
  float vol; 
  signed int vehIndex; 
  HelicopterDynamics::VfxData *MutableVfxData; 
  __int64 AvailableVfxSlot; 
  double PlaneSpeed; 

  if ( !Physics_IsPredictiveWorld(vehObj->m_worldId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 379, ASSERT_TYPE_ASSERT, "(vehObj.IsClient())", (const char *)&queryFormat, "vehObj.IsClient()") )
    __debugbreak();
  if ( vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_COLLISION_AUDIO) && vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_VDX_VEHICLE) )
  {
    CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    m_vehicleDefIndex = vehObj->m_vehicleDefIndex;
    if ( m_vehicleDefIndex < 0x80 )
    {
      ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
      v10 = ClientDef;
      if ( ClientDef )
      {
        v11 = FLOAT_1_0;
        if ( ClientDef->vehiclePhysicsDef.sndImpactExp >= 1.0 )
        {
          v12 = normal;
          v13 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(vehObj->m_transform.m[2].v[1] * normal->v[1]) + (float)(normal->v[0] * vehObj->m_transform.m[2].v[0])) + (float)(vehObj->m_transform.m[2].v[2] * normal->v[2])) & _xmm), 0.0, 1.0);
          v11 = 1.0 - powf_0(*(float *)&v13, v10->vehiclePhysicsDef.sndImpactExp);
          if ( v11 <= 0.001 )
          {
LABEL_40:
            if ( isRotorImpact && vehObj->m_vehicleAnimProfile == VEH_ANIMPROFILE_LBRAVO && (v10->vehiclePhysicsDef.vfxImpactHard.surfaceEffects || v10->vehiclePhysicsDef.vfxImpactLight.surfaceEffects) )
            {
              MutableVfxData = HelicopterDynamics::GetMutableVfxData((HelicopterDynamics *)vehObj);
              AvailableVfxSlot = CgVehicleEventSystem::FindAvailableVfxSlot(this, MutableVfxData->Spark, 4u);
              PlaneSpeed = BgVehiclePhysics::GetPlaneSpeed((BgVehiclePhysics *)vehObj);
              CgVehicleEventSystem::PlayFactorDependentSurfaceVfx(this, *(float *)&PlaneSpeed * 0.056818184, &v10->vehiclePhysicsDef.vfxImpactHard, &v10->vehiclePhysicsDef.vfxImpactLight, posWs, v12, surfaceData, &MutableVfxData->Spark[AvailableVfxSlot]);
            }
            return;
          }
        }
        SoundData = FlightDynamics::GetSoundData((FlightDynamics *)vehObj);
        v15 = SoundData;
        if ( isRotorImpact )
        {
          RotorImpactHard = SoundData->RotorImpactHard;
          if ( RotorImpactHard )
            AliasFromId = SND_FindAliasFromId(RotorImpactHard);
          else
            AliasFromId = NULL;
          RotorImpactLight = v15->RotorImpactLight;
          if ( RotorImpactLight )
            v19 = SND_FindAliasFromId(RotorImpactLight);
          else
            v19 = NULL;
          v20 = 984i64;
          v21 = 1016i64;
        }
        else
        {
          if ( SoundData->ImpactHard )
            AliasFromId = SND_FindAliasFromId(SoundData->ImpactHard);
          else
            AliasFromId = NULL;
          ImpactLight = v15->ImpactLight;
          if ( ImpactLight )
            v19 = SND_FindAliasFromId(ImpactLight);
          else
            v19 = NULL;
          v20 = 816i64;
          v21 = 856i64;
        }
        v23 = fsqrt((float)((float)(vehObj->m_linearVelocityWs.v[0] * vehObj->m_linearVelocityWs.v[0]) + (float)(vehObj->m_linearVelocityWs.v[1] * vehObj->m_linearVelocityWs.v[1])) + (float)(vehObj->m_linearVelocityWs.v[2] * vehObj->m_linearVelocityWs.v[2])) * 0.056818184;
        v24 = (unsigned int *)((char *)v10 + v20);
        v25 = (float *)((char *)v10 + v21);
        if ( v23 <= *(float *)(&v10->type + v20) )
        {
          if ( v23 <= v25[2] )
          {
LABEL_39:
            v12 = normal;
            goto LABEL_40;
          }
          v24 = (unsigned int *)((char *)v10 + v21);
          AliasFromId = v19;
        }
        if ( AliasFromId && v24 )
        {
          TopSpeedForward = BgVehiclePhysics::GetTopSpeedForward((BgVehiclePhysics *)vehObj);
          v27 = (float)(v23 - v25[2]) / (float)((float)(*(float *)&TopSpeedForward * 0.056818184) - v25[2]);
          I_fclamp(v27, 0.0, 1.0);
          _XMM3 = v24[3];
          if ( COERCE_FLOAT(_XMM3 & _xmm) < 0.001 && COERCE_FLOAT(v24[4] & _xmm) < 0.001 )
            _XMM3 = 0i64;
          _XMM4 = v24[5];
          __asm { vmaxss  xmm0, xmm3, xmm2 }
          vol = (float)((float)((float)(*(float *)&_XMM0 - *(float *)&_XMM3) * v27) + *(float *)&_XMM3) * v11;
          if ( COERCE_FLOAT(_XMM4 & _xmm) < 0.001 && COERCE_FLOAT(v24[6] & _xmm) < 0.001 )
            _XMM4 = LODWORD(FLOAT_1_0);
          vehIndex = vehObj->m_vehicleId - 1;
          if ( vehIndex < 0 )
            vehIndex = 0;
          __asm { vmaxss  xmm0, xmm4, xmm1 }
          CgVehicleEventSystem::PlaySoundSurfaceDeferred(this, AliasFromId, vehObj->m_entityNumber, surfaceData, posWs, vol, (float)((float)(*(float *)&_XMM0 - *(float *)&_XMM4) * v27) + *(float *)&_XMM4, 250, vehIndex, 9u);
        }
        goto LABEL_39;
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::CarDriving
==============
*/
void CgVehicleEventSystem::CarDriving(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  unsigned int m_vehicleDefIndex; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v6; 

  if ( !Physics_IsPredictiveWorld(vehObj->m_worldId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 803, ASSERT_TYPE_ASSERT, "(vehObj.IsClient())", (const char *)&queryFormat, "vehObj.IsClient()") )
    __debugbreak();
  CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
  m_vehicleDefIndex = vehObj->m_vehicleDefIndex;
  if ( m_vehicleDefIndex < 0x80 )
  {
    ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
    v6 = ClientDef;
    if ( ClientDef )
    {
      CgVehicleEventSystem::CarDriving_Sounds(this, vehObj, ClientDef);
      CgVehicleEventSystem::CarDriving_Vfx(this, vehObj, v6);
    }
  }
}

/*
==============
CgVehicleEventSystem::CarDrivingKeyframed
==============
*/
void CgVehicleEventSystem::CarDrivingKeyframed(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  unsigned int PhysicsBodyId; 
  unsigned int m_vehicleDefIndex; 
  CgVehicleSystem *v9; 
  ParticleManager *ParticleManager; 
  int m_entityNumber; 
  ParticleManager *v12; 
  LocalClientNum_t m_localClientNum; 
  centity_t *Entity; 
  double v15; 
  float v16; 
  const centity_t *v17; 
  float v18; 
  float v19; 
  float v20; 
  double Float_Internal_DebugName; 
  unsigned int m_wheelCount; 
  SndAliasList *v23; 
  unsigned int i; 
  unsigned int v25; 
  unsigned int v26; 
  float v27; 
  unsigned __int8 v28; 
  float barrelPitch; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  unsigned int v34; 
  __int64 v35; 
  float *v36; 
  bool v37; 
  __int64 v38; 
  float *v39; 
  const ParticleSystemDef *v40; 
  __int64 v41; 
  VehicleClient *Client; 
  unsigned int DrivingSlow; 
  const vec3_t *posWs; 
  unsigned int surfaceData; 
  float v46; 
  SndAliasList *sndLightAlias; 
  unsigned int DrivingFast; 
  SndAliasList *AliasFromId; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  CgVehicleSystem_vtbl *v53; 
  __int64 v54; 
  unsigned int BrakingLight; 
  unsigned int v56; 
  SndAliasList *v57; 
  unsigned int BrakingHard; 
  char v59; 
  unsigned __int8 wheelSurfaceType; 
  unsigned int v61; 
  const VehicleDef *ClientDef; 
  float v63; 
  float v64; 
  CgVehicleSystem *VehicleSystem; 
  ParticleManager *pmgr; 
  vec3_t position; 
  tmat43_t<vec3_t> result; 
  vec4_t orientation; 
  vec4_t v70; 
  __int128 v71; 
  __int128 v72; 
  __int128 v73; 

  if ( BgVehiclePhysics::IsKeyframed(&vehObj->BgVehiclePhysics) && !vehObj->m_pmoveObject )
  {
    if ( BgVehiclePhysics::IsPhysicsBodyIdValid(&vehObj->BgVehiclePhysics) )
    {
      PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(&vehObj->BgVehiclePhysics);
      Physics_GetRigidBodyTransform((const Physics_WorldId)vehObj->m_worldId, PhysicsBodyId, &position, &orientation);
    }
    if ( CgVehicleEventSystem::IsFarFromPlayer(this, &position) )
    {
      CgVehicleEventSystem::StopAllVfxOnVehicle(this, vehObj);
    }
    else
    {
      m_vehicleDefIndex = vehObj->m_vehicleDefIndex;
      if ( m_vehicleDefIndex < 0x80 )
      {
        VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
        v9 = VehicleSystem;
        ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
        if ( ClientDef )
        {
          ParticleManager = ParticleManager::GetParticleManager(this->m_localClientNum);
          m_entityNumber = vehObj->m_entityNumber;
          v12 = ParticleManager;
          m_localClientNum = this->m_localClientNum;
          pmgr = ParticleManager;
          Entity = CG_GetEntity(m_localClientNum, m_entityNumber);
          v15 = *(double *)vehObj->m_history.m_lastLinearVel.v;
          v16 = FLOAT_0_056818184;
          position.v[2] = vehObj->m_history.m_lastLinearVel.v[2];
          v17 = Entity;
          *(double *)position.v = v15;
          v18 = position.v[1];
          v20 = fsqrt((float)(*(float *)&v15 * *(float *)&v15) + (float)(v18 * v18)) * 0.056818184;
          v19 = v20;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehFxKFThresholdDriving, "bg_vehFxKFThresholdDriving");
          if ( v20 >= *(float *)&Float_Internal_DebugName )
            v19 = v20 + ClientDef->vehiclePhysicsDef.vfxDrivingFast.threshold;
          m_wheelCount = vehObj->m_wheelCount;
          v23 = NULL;
          for ( i = 0; i < m_wheelCount; ++i )
          {
            if ( !v17->pose.vehicle.wheelSurfaceType || (float)((float)v17->pose.vehicle.wheelFraction[i] * 0.000015259022) >= 0.99900001 || v19 < *(float *)&Float_Internal_DebugName )
              CgVehicleEventSystem::StopVfx(this, v12, &vehObj->m_vfx.Driving[i]);
            m_wheelCount = vehObj->m_wheelCount;
          }
          if ( v17->pose.vehicle.wheelSurfaceType )
          {
            v25 = 0;
            v61 = 0;
            v26 = 0;
            if ( m_wheelCount )
            {
              v73 = v2;
              v72 = v3;
              v71 = v4;
              do
              {
                if ( v25 >= maxWheelsInKeyframedVehicles )
                  break;
                if ( v26 >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 822, ASSERT_TYPE_ASSERT, "(windex < 12)", (const char *)&queryFormat, "windex < VEHICLE_MAX_WHEEL_COUNT") )
                  __debugbreak();
                v27 = (float)v17->pose.vehicle.wheelFraction[v26] * 0.000015259022;
                if ( v27 >= 0.99900001 )
                {
                  CgVehicleEventSystem::StopVfx(this, pmgr, &vehObj->m_vfx.Driving[v26]);
                  v25 = v61;
                }
                else
                {
                  v28 = v17->pose.vehicle.wheelBoneIndex[v26];
                  if ( v28 < 0xFEu && CG_Vehicle_GetWorldBoneMatrix((const LocalClientNum_t)this->m_localClientNum, vehObj->m_entityNumber, v28, &result) )
                  {
                    barrelPitch = v17->pose.turret.barrelPitch;
                    v30 = (float)((float)(barrelPitch * 0.5) * 0.0) + result.m[3].v[0];
                    v31 = (float)((float)(barrelPitch * 0.5) * 0.0) + result.m[3].v[1];
                    v32 = (float)((float)(barrelPitch * 0.5) * 1.0) + result.m[3].v[2];
                    LODWORD(v33) = COERCE_UNSIGNED_INT(barrelPitch * v27) ^ _xmm;
                    position.v[0] = (float)(v33 * 0.0) + v30;
                    position.v[2] = (float)(v33 * 1.0) + v32;
                    position.v[1] = (float)(v33 * 0.0) + v31;
                  }
                  else if ( BgVehiclePhysics::IsPhysicsBodyIdValid(&vehObj->BgVehiclePhysics) )
                  {
                    v34 = BgVehiclePhysics::GetPhysicsBodyId(&vehObj->BgVehiclePhysics);
                    Physics_GetRigidBodyTransform((const Physics_WorldId)vehObj->m_worldId, v34, &position, &v70);
                  }
                  wheelSurfaceType = v17->pose.vehicle.wheelSurfaceType;
                  v35 = 1456i64;
                  if ( (BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, v26)->m_state & 1) == 0 )
                    v35 = 1312i64;
                  v36 = (float *)((char *)ClientDef + v35);
                  v37 = (BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, v26)->m_state & 1) == 0;
                  v38 = 1432i64;
                  if ( v37 )
                    v38 = 1288i64;
                  v39 = (float *)((char *)ClientDef + v38);
                  if ( v19 <= v39[2] )
                  {
                    v39 = NULL;
                    if ( v19 > v36[2] )
                      v39 = v36;
                  }
                  v40 = NULL;
                  if ( v39 )
                  {
                    v41 = *(_QWORD *)v39;
                    if ( *(_QWORD *)v39 )
                    {
                      if ( wheelSurfaceType >= 0x40u || (v40 = *(const ParticleSystemDef **)(v41 + 8i64 * wheelSurfaceType + 8)) == NULL && (v40 = *(const ParticleSystemDef **)(v41 + 296)) == NULL )
                        v40 = NULL;
                    }
                  }
                  CgVehicleEventSystem::PlayFactorDependentVfx(this, v40, &position, &identityMatrix33.m[2], &vehObj->m_vfx.Driving[v26], NULL);
                  v25 = ++v61;
                }
                ++v26;
              }
              while ( v26 < vehObj->m_wheelCount );
              v16 = FLOAT_0_056818184;
              v9 = VehicleSystem;
            }
            Client = CgVehicleSystem::GetClient(v9, v17);
            if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 928, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
              __debugbreak();
            DrivingSlow = vehObj->m_sound.DrivingSlow;
            posWs = &Client->audioState.entOrigin;
            surfaceData = v17->pose.vehicle.wheelSurfaceType;
            v46 = fsqrt((float)(*(float *)&v15 * *(float *)&v15) + (float)(v18 * v18)) * v16;
            if ( DrivingSlow )
              sndLightAlias = SND_FindAliasFromId(DrivingSlow);
            else
              sndLightAlias = NULL;
            DrivingFast = vehObj->m_sound.DrivingFast;
            if ( DrivingFast )
              AliasFromId = SND_FindAliasFromId(DrivingFast);
            else
              AliasFromId = NULL;
            if ( vehObj->m_flatTire )
            {
              v50 = 1176i64;
              v51 = 1144i64;
            }
            else
            {
              v50 = 920i64;
              v51 = 888i64;
            }
            CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, v46, vehObj, (const VehiclePhysicsSoundGroup *)((char *)ClientDef + v51), (const VehiclePhysicsSoundGroup *)((char *)ClientDef + v50), AliasFromId, sndLightAlias, posWs, surfaceData, 1.0, 1u);
            v52 = (unsigned int)vehObj->m_entityNumber;
            v53 = VehicleSystem->__vftable;
            v64 = 0.0;
            v63 = 0.0;
            v59 = 0;
            v53->PhysicsUnpackLerpStateValues(VehicleSystem, v52, &v64, (bool *)&v59, &v63);
            if ( v59 )
            {
              v54 = vehObj->m_vehicleId - 1;
              if ( (int)v54 < 0 )
                v54 = 0i64;
              if ( !SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v54].ids[2]) )
              {
                BrakingLight = vehObj->m_sound.BrakingLight;
                v56 = v17->pose.vehicle.wheelSurfaceType;
                if ( BrakingLight )
                  v57 = SND_FindAliasFromId(BrakingLight);
                else
                  v57 = NULL;
                BrakingHard = vehObj->m_sound.BrakingHard;
                if ( BrakingHard )
                  v23 = SND_FindAliasFromId(BrakingHard);
                CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, v46, vehObj, &ClientDef->vehiclePhysicsDef.sndBrakingHard, &ClientDef->vehiclePhysicsDef.sndBrakingLight, v23, v57, posWs, v56, 1.0, 2u);
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::CarDriving_Sounds
==============
*/
void CgVehicleEventSystem::CarDriving_Sounds(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehicleDef *vehDef)
{
  float v6; 
  __int128 v8; 
  SndAliasList *v10; 
  unsigned int surfaceData; 
  __int64 v13; 
  unsigned int DrivingSlow; 
  SndAliasList *AliasFromId; 
  unsigned int DrivingFast; 
  SndAliasList *v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int Drifting; 
  SndAliasList *v22; 
  float v23; 
  double v24; 
  unsigned int v25; 
  unsigned int Skidding; 
  BOOL v29; 
  bool v30; 
  __int128 v31; 
  double v37; 
  double v38; 
  unsigned int BrakingLight; 
  SndAliasList *v40; 
  unsigned int BrakingHard; 
  SndAliasList *v42; 
  unsigned int v43; 
  float v44; 
  unsigned int Suspension; 
  SndAliasList *v46; 
  unsigned int v47; 
  SndAliasList *v48; 
  unsigned int outSurfData; 
  unsigned int outSurfDataSkid; 
  int m_entityNumber; 
  float outMaxSuspDeform; 
  int entNum; 
  SndAliasList *snd; 
  vec3_t posWs; 
  ExtentBounds outExtBounds; 
  vec3_t outSuspWs; 

  GetVehicleAndTurretExtBounds((const LocalClientNum_t)this->m_localClientNum, vehObj, &outExtBounds);
  v6 = (float)(outExtBounds.maxs.v[2] + outExtBounds.mins.v[2]) * 0.5;
  v8 = LODWORD(outExtBounds.maxs.v[2]);
  *(float *)&v8 = outExtBounds.maxs.v[2] - v6;
  _XMM1 = v8;
  __asm { vmaxss  xmm1, xmm1, xmm0 }
  posWs.v[0] = (float)((float)(outExtBounds.maxs.v[0] + outExtBounds.mins.v[0]) * 0.5) + (float)((float)(*(float *)&_XMM1 + 5.0) * vehObj->m_transform.m[2].v[0]);
  *(float *)&v8 = (float)(*(float *)&_XMM1 + 5.0) * vehObj->m_transform.m[2].v[2];
  v10 = NULL;
  posWs.v[1] = (float)((float)(outExtBounds.maxs.v[1] + outExtBounds.mins.v[1]) * 0.5) + (float)((float)(*(float *)&_XMM1 + 5.0) * vehObj->m_transform.m[2].v[1]);
  outSurfData = 0;
  _XMM9 = 0i64;
  *(float *)&outSurfDataSkid = 0.0;
  posWs.v[2] = *(float *)&v8 + v6;
  outMaxSuspDeform = 0.0;
  CgVehicleEventSystem::ComputeTireDataForSound(this, vehObj, &outSurfData, &outSurfDataSkid, &outMaxSuspDeform, &outSuspWs);
  surfaceData = outSurfData;
  v13 = vehObj->m_vehicleId - 1;
  _XMM7 = LODWORD(FLOAT_1_0);
  if ( (int)v13 < 0 )
    v13 = 0i64;
  if ( outSurfData )
  {
    DrivingSlow = vehObj->m_sound.DrivingSlow;
    if ( DrivingSlow )
      AliasFromId = SND_FindAliasFromId(DrivingSlow);
    else
      AliasFromId = NULL;
    DrivingFast = vehObj->m_sound.DrivingFast;
    if ( DrivingFast )
      v18 = SND_FindAliasFromId(DrivingFast);
    else
      v18 = NULL;
    if ( vehObj->m_flatTire )
    {
      v19 = 1176i64;
      v20 = 1144i64;
    }
    else
    {
      v19 = 920i64;
      v20 = 888i64;
    }
    CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, vehObj, (const VehiclePhysicsSoundGroup *)((char *)vehDef + v20), (const VehiclePhysicsSoundGroup *)((char *)vehDef + v19), v18, AliasFromId, &posWs, surfaceData, 1.0, 1u);
    Drifting = vehObj->m_sound.Drifting;
    m_entityNumber = vehObj->m_entityNumber;
    if ( Drifting )
      v22 = SND_FindAliasFromId(Drifting);
    else
      v22 = NULL;
    v23 = 0.0;
    if ( vehObj->m_vehicleType == VEH_CAR )
    {
      v24 = I_fclamp(vehObj->m_friction.car.tgtFriction / vehObj->m_friction.tread.v[0], 0.0, 1.0);
      v23 = 1.0 - *(float *)&v24;
    }
    CgVehicleEventSystem::PlayFactorDependentSurfaceSound(this, (float)((float)((float)(v23 * v23) * (float)(v23 * v23)) * (float)(v23 * v23)) * (float)(v23 * v23), &vehDef->vehiclePhysicsDef.sndDrifting, v22, m_entityNumber, &posWs, surfaceData, v13);
  }
  v25 = outSurfDataSkid;
  if ( *(float *)&outSurfDataSkid != 0.0 )
  {
    Skidding = vehObj->m_sound.Skidding;
    entNum = vehObj->m_entityNumber;
    if ( Skidding )
      snd = SND_FindAliasFromId(Skidding);
    else
      snd = NULL;
    __asm
    {
      vcmpltss xmm0, xmm9, xmm1
      vblendvps xmm0, xmm7, xmm1, xmm0
    }
    outSurfDataSkid = _XMM0;
    v29 = Com_BitCheckAssert(vehObj->m_controls.playerEnabledBits, 4, 4);
    v30 = Com_BitCheckAssert(vehObj->m_controls.externalEnabledBits, 4, 4);
    v31 = LODWORD(vehObj->m_controls.playerValues[4]);
    _XMM6 = LODWORD(vehObj->m_controls.externalValues[4]);
    if ( v29 + 3 * v30 == 1 )
    {
      *(float *)&_XMM6 = vehObj->m_controls.playerValues[4];
      goto LABEL_38;
    }
    if ( v29 + 3 * v30 != 3 )
    {
      if ( v29 + 3 * v30 != 4 )
        goto LABEL_36;
      switch ( vehObj->m_controls.valuePolicy[4] )
      {
        case VP_MAXABS:
          _XMM0 = _XMM6 & (unsigned int)_xmm;
          __asm
          {
            vcmpltss xmm1, xmm0, xmm1
            vblendvps xmm6, xmm6, xmm3, xmm1
          }
          goto LABEL_38;
        case VP_MINABS:
          _XMM1 = v31 & (unsigned int)_xmm;
          __asm
          {
            vcmpltss xmm1, xmm1, xmm0
            vblendvps xmm6, xmm6, xmm3, xmm1
          }
          goto LABEL_38;
        case VP_AVERAGE:
          *(float *)&_XMM6 = (float)(*(float *)&_XMM6 + *(float *)&v31) * 0.5;
          goto LABEL_38;
        case VP_AVERAGE_WEIGHT_PLAYER:
          *(float *)&_XMM6 = (float)((float)(1.0 - vehObj->m_controls.policyWeight) * *(float *)&_XMM6) + (float)(*(float *)&v31 * vehObj->m_controls.policyWeight);
          goto LABEL_38;
      }
      if ( vehObj->m_controls.valuePolicy[4] != VP_AVERAGE_WEIGHT_EXTERNAL )
      {
LABEL_36:
        LODWORD(_XMM6) = 0;
        goto LABEL_38;
      }
      *(float *)&_XMM6 = (float)((float)(1.0 - vehObj->m_controls.policyWeight) * *(float *)&v31) + (float)(*(float *)&_XMM6 * vehObj->m_controls.policyWeight);
    }
LABEL_38:
    v37 = I_fclamp(vehObj->m_avgSkidRatio / *(float *)&outSurfDataSkid, 0.0, 1.0);
    CgVehicleEventSystem::PlayFactorDependentSurfaceSound(this, *(float *)&v37 * COERCE_FLOAT(_XMM6 & _xmm), &vehDef->vehiclePhysicsDef.sndSkidding, snd, entNum, &posWs, v25, v13);
  }
  v38 = I_fclamp(1.0 - vehObj->m_avgBlockRatio, 0.0, 1.0);
  if ( *(float *)&v38 <= 0.001 || SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v13].ids[2]) )
  {
    v43 = outSurfData;
  }
  else
  {
    BrakingLight = vehObj->m_sound.BrakingLight;
    if ( BrakingLight )
      v40 = SND_FindAliasFromId(BrakingLight);
    else
      v40 = NULL;
    BrakingHard = vehObj->m_sound.BrakingHard;
    if ( BrakingHard )
      v42 = SND_FindAliasFromId(BrakingHard);
    else
      v42 = NULL;
    v43 = outSurfData;
    CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, vehObj, &vehDef->vehiclePhysicsDef.sndBrakingHard, &vehDef->vehiclePhysicsDef.sndBrakingLight, v42, v40, &posWs, outSurfData, 1.0, 2u);
  }
  v44 = outMaxSuspDeform;
  if ( outMaxSuspDeform > vehDef->vehiclePhysicsDef.sndSuspension.threshold && !SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v13].ids[3]) )
  {
    Suspension = vehObj->m_sound.Suspension;
    if ( Suspension )
    {
      v46 = SND_FindAliasFromId(Suspension);
      v47 = vehObj->m_sound.Suspension;
      v48 = v46;
      if ( v47 )
        v10 = SND_FindAliasFromId(v47);
    }
    else
    {
      v48 = NULL;
    }
    CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, vehObj, &vehDef->vehiclePhysicsDef.sndSuspension, &vehDef->vehiclePhysicsDef.sndSuspension, v10, v48, &outSuspWs, v43, v44, 3u);
  }
}

/*
==============
CgVehicleEventSystem::CarDriving_Vfx
==============
*/
void CgVehicleEventSystem::CarDriving_Vfx(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehicleDef *vehDef)
{
  float v7; 
  double v10; 
  float v11; 
  const dvar_t *v12; 
  float value; 
  __int64 m_localClientNum; 
  ParticleManager *v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  double NormalSpeed; 
  const dvar_t *v23; 
  unsigned int unsignedInt; 
  unsigned int v25; 
  float *v26; 
  ParticleSystemHandle *Skidding; 
  __int64 v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  __int64 v37; 
  float *v38; 
  bool v39; 
  __int64 v40; 
  float *v41; 
  const ParticleSystemDef *v42; 
  __int64 v43; 
  float v47; 
  float v48; 
  float v49; 
  double v50; 
  float *v51; 
  VehiclePhysicsVfxGroup *p_vfxSkidding; 
  const ParticleSystemDef *particleSystemDef; 
  FootstepVFX *surfaceEffects; 
  double v55; 
  __int64 *v56; 
  const ParticleSystemDef *v57; 
  __int64 v58; 
  __int64 *v59; 
  const ParticleSystemDef *v60; 
  __int64 v61; 
  const dvar_t *v62; 
  centity_t *Entity; 
  const Camo *VehicleCamo; 
  LocalClientNum_t v65; 
  unsigned int number; 
  unsigned int v67; 
  unsigned int v68; 
  CgVehicleSystem *VehicleSystem; 
  __int64 v70; 
  scr_string_t *v71; 
  scr_string_t v72; 
  const vec4_t *v73; 
  float *v74; 
  float v75; 
  float v76; 
  double Float_Internal_DebugName; 
  char v78; 
  const char *v79; 
  __int64 ackRatio; 
  __int64 ackRatioa; 
  __int64 yawMult; 
  __int64 yawMulta; 
  unsigned int wheelNdx; 
  __int64 v85; 
  const VehicleDef *v86; 
  unsigned __int8 inOutIndex[8]; 
  const Camo *v88; 
  DObj *obj; 
  int modelIndex; 
  vec3_t outOrigin; 
  __int64 v92; 
  VehicleStickerCamoInfo outStickerCamoInfo; 
  vec3_t posWs; 
  vec3_t normal; 
  vec3_t outVelLs; 
  vec3_t outPointVel; 
  vec3_t forwardWs; 
  vec3_t vec; 
  vec3_t out; 
  vec3_t v101; 
  tmat33_t<vec3_t> axis; 
  char _Buffer[1024]; 

  v92 = -2i64;
  v86 = vehDef;
  BgVehiclePhysics::ComputeVelocityLocalSpace(&vehObj->BgVehiclePhysics, &vehObj->m_linearVelocityWs, &outVelLs);
  *((_QWORD *)&_XMM0 + 1) = 0i64;
  v7 = fsqrt((float)(outVelLs.v[0] * outVelLs.v[0]) + (float)(outVelLs.v[1] * outVelLs.v[1])) * 0.056818184;
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(&vehObj->BgVehiclePhysics);
  __asm { vminss  xmm1, xmm0, cs:__real@3f4ccccd }
  *(float *)&v88 = *(float *)&_XMM1;
  _XMM7 = 0i64;
  if ( vehObj->m_vehicleType == VEH_CAR )
  {
    v10 = I_fclamp(vehObj->m_friction.car.tgtFriction / vehObj->m_friction.tread.v[0], 0.0, 1.0);
    v11 = 1.0 - *(float *)&v10;
  }
  else
  {
    v11 = 0.0;
  }
  *(float *)&inOutIndex[4] = v11;
  v12 = DCONST_DVARFLT_bg_vehWheelOffsetForFx;
  if ( !DCONST_DVARFLT_bg_vehWheelOffsetForFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehWheelOffsetForFx") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  value = v12->current.value;
  *(float *)&v85 = value;
  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(yawMult) = 2;
    LODWORD(ackRatio) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ackRatio, yawMult) )
      __debugbreak();
  }
  v15 = &g_particleManager[m_localClientNum];
  v16 = 0.0;
  BgVehiclePhysicsGround::Steering::ComputeAxis(&vehObj->m_steering, vehObj, 0, &forwardWs, NULL, 1.0, 1.0);
  v17 = DCONST_DVARFLT_bg_vehContactAheadForFx;
  if ( !DCONST_DVARFLT_bg_vehContactAheadForFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehContactAheadForFx") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = v17->current.value;
  NormalSpeed = BgVehiclePhysics::GetNormalSpeed(&vehObj->BgVehiclePhysics);
  *(float *)&obj = (float)(1.0 - (float)((float)((float)(1.0 - *(float *)&NormalSpeed) * (float)(1.0 - *(float *)&NormalSpeed)) * (float)(1.0 - *(float *)&NormalSpeed))) * v18;
  if ( v11 <= vehDef->vehiclePhysicsDef.vfxDrifting.threshold )
  {
    _XMM6 = LODWORD(FLOAT_N1_0);
  }
  else
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(&vehObj->BgVehiclePhysics, &vehObj->m_angularVelocityWs, &outVelLs);
    _XMM6 = LODWORD(FLOAT_N1_0);
    if ( COERCE_FLOAT(LODWORD(outVelLs.v[2]) & _xmm) > 0.0 )
    {
      __asm
      {
        vcmpless xmm0, xmm7, xmm1
        vblendvps xmm0, xmm6, xmm8, xmm0
      }
      v16 = *(float *)&_XMM0;
      *(float *)outStickerCamoInfo.stickerIndices = *(float *)&_XMM0;
    }
  }
  v23 = DCONST_DVARINT_bg_vehMaxWheelCountForFx;
  if ( !DCONST_DVARINT_bg_vehMaxWheelCountForFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMaxWheelCountForFx") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  unsignedInt = v23->current.unsignedInt;
  if ( unsignedInt > vehObj->m_wheelCount )
    unsignedInt = vehObj->m_wheelCount;
  *(_DWORD *)outStickerCamoInfo.stickerIndices = unsignedInt;
  v25 = 0;
  wheelNdx = 0;
  if ( unsignedInt )
  {
    v26 = &vehObj->m_wheels[0].m_contactPointWs.v[1];
    Skidding = vehObj->m_vfx.Skidding;
    while ( 1 )
    {
      if ( v25 >= vehObj->m_wheelCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 252, ASSERT_TYPE_ASSERT, "(wheelNdx < m_wheelCount)", (const char *)&queryFormat, "wheelNdx < m_wheelCount") )
          __debugbreak();
        v25 = wheelNdx;
      }
      v28 = (*((_DWORD *)v26 + 25) >> 19) & 0x3F;
      if ( *((_DWORD *)v26 + 26) != 0xFFFFFF )
      {
        if ( (_DWORD)v28 )
          break;
      }
      CgVehicleEventSystem::StopVfx(this, v15, Skidding - 36);
      CgVehicleEventSystem::StopVfx(this, v15, Skidding - 12);
      CgVehicleEventSystem::StopVfx(this, v15, Skidding);
      CgVehicleEventSystem::StopVfx(this, v15, Skidding - 24);
LABEL_73:
      v25 = wheelNdx + 1;
      wheelNdx = v25;
      ++Skidding;
      v26 += 38;
      _XMM6 = LODWORD(FLOAT_N1_0);
      if ( v25 >= *(_DWORD *)outStickerCamoInfo.stickerIndices )
        goto LABEL_74;
    }
    v29 = (float)(v25 & 1);
    v30 = 1.0 - (float)(v29 * 2.0);
    v31 = v30 * vehObj->m_transform.m[1].v[0];
    v32 = v30 * vehObj->m_transform.m[1].v[1];
    v33 = v30 * vehObj->m_transform.m[1].v[2];
    v34 = v31 * value;
    posWs.v[0] = (float)(v31 * value) + *(v26 - 1);
    v35 = v32 * value;
    posWs.v[1] = (float)(v32 * value) + *v26;
    v36 = v33 * value;
    posWs.v[2] = (float)(v33 * value) + v26[1];
    normal.v[0] = (float)((float)(1.0 - *(float *)&v88) * v26[2]) + (float)(v31 * *(float *)&v88);
    normal.v[1] = (float)((float)(1.0 - *(float *)&v88) * v26[3]) + (float)(v32 * *(float *)&v88);
    normal.v[2] = (float)(v33 * *(float *)&v88) + (float)((float)(1.0 - *(float *)&v88) * v26[4]);
    v37 = 1456i64;
    if ( (BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, v25)->m_state & 1) == 0 )
      v37 = 1312i64;
    v38 = (float *)((char *)v86 + v37);
    v39 = (BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, wheelNdx)->m_state & 1) == 0;
    v40 = 1432i64;
    if ( v39 )
      v40 = 1288i64;
    v41 = (float *)((char *)v86 + v40);
    if ( v7 <= v41[2] )
    {
      v41 = NULL;
      if ( v7 > v38[2] )
        v41 = v38;
    }
    v42 = NULL;
    if ( v41 )
    {
      v43 = *(_QWORD *)v41;
      if ( *(_QWORD *)v41 )
      {
        v42 = *(const ParticleSystemDef **)(v43 + 8 * v28 + 8);
        if ( !v42 )
          v42 = *(const ParticleSystemDef **)(v43 + 296);
      }
    }
    CgVehicleEventSystem::PlayFactorDependentVfx(this, v42, &posWs, &normal, Skidding - 36, NULL);
    _XMM0 = *((unsigned int *)v26 + 21);
    __asm
    {
      vcmpless xmm1, xmm0, cs:__real@80000000
      vblendvps xmm5, xmm6, xmm8, xmm1
    }
    v47 = (float)((float)(*(float *)&_XMM5 * *(float *)&obj) * forwardWs.v[0]) + *(v26 - 1);
    v48 = (float)((float)(*(float *)&_XMM5 * *(float *)&obj) * forwardWs.v[1]) + *v26;
    v49 = (float)((float)(*(float *)&_XMM5 * *(float *)&obj) * forwardWs.v[2]) + v26[1];
    normal.v[0] = *(float *)&_XMM5 * forwardWs.v[0];
    normal.v[1] = *(float *)&_XMM5 * forwardWs.v[1];
    normal.v[2] = *(float *)&_XMM5 * forwardWs.v[2];
    if ( v26[18] > 0.001 )
    {
      v50 = I_fclamp(v26[22], 0.0, 1.0);
      if ( *(float *)&v50 > 0.0 )
      {
        posWs.v[0] = v34 + v47;
        posWs.v[1] = v35 + v48;
        posWs.v[2] = v49 + v36;
        v51 = (float *)v86;
        p_vfxSkidding = NULL;
        if ( *(float *)&v50 > v86->vehiclePhysicsDef.vfxSkidding.threshold )
          p_vfxSkidding = &v86->vehiclePhysicsDef.vfxSkidding;
        particleSystemDef = NULL;
        if ( p_vfxSkidding )
        {
          surfaceEffects = p_vfxSkidding->surfaceEffects;
          if ( p_vfxSkidding->surfaceEffects )
          {
            particleSystemDef = surfaceEffects->footstepVFX[v28].particleSystemDef;
            if ( !particleSystemDef )
              particleSystemDef = surfaceEffects->footstepVFX[36].particleSystemDef;
          }
        }
        CgVehicleEventSystem::PlayFactorDependentVfx(this, particleSystemDef, &posWs, &normal, Skidding, NULL);
        goto LABEL_52;
      }
      CgVehicleEventSystem::StopVfx(this, v15, Skidding);
    }
    v51 = (float *)v86;
LABEL_52:
    v55 = I_fclamp(1.0 - v26[23], 0.0, 1.0);
    if ( *(float *)&v55 <= 0.0 )
    {
      CgVehicleEventSystem::StopVfx(this, v15, Skidding - 24);
    }
    else
    {
      posWs.v[0] = v47 + v34;
      posWs.v[1] = v35 + v48;
      posWs.v[2] = v49 + v36;
      v56 = (__int64 *)(v51 + 334);
      if ( v7 <= v51[336] )
      {
        v56 = NULL;
        if ( v7 > v51[342] )
          v56 = (__int64 *)(v51 + 340);
      }
      v57 = NULL;
      if ( v56 )
      {
        v58 = *v56;
        if ( *v56 )
        {
          v57 = *(const ParticleSystemDef **)(v58 + 8 * v28 + 8);
          if ( !v57 )
            v57 = *(const ParticleSystemDef **)(v58 + 296);
        }
      }
      CgVehicleEventSystem::PlayFactorDependentVfx(this, v57, &posWs, &normal, Skidding - 24, NULL);
    }
    if ( *(float *)&inOutIndex[4] <= 0.0 || v16 == 0.0 )
    {
      CgVehicleEventSystem::StopVfx(this, v15, Skidding - 12);
      value = *(float *)&v85;
    }
    else
    {
      normal.v[0] = v16 * vehObj->m_transform.m[1].v[0];
      normal.v[1] = v16 * vehObj->m_transform.m[1].v[1];
      normal.v[2] = v16 * vehObj->m_transform.m[1].v[2];
      value = *(float *)&v85;
      posWs.v[0] = (float)(normal.v[0] * *(float *)&v85) + *(v26 - 1);
      posWs.v[1] = (float)(normal.v[1] * *(float *)&v85) + *v26;
      posWs.v[2] = (float)(normal.v[2] * *(float *)&v85) + v26[1];
      v59 = NULL;
      if ( *(float *)&inOutIndex[4] > v51[348] )
        v59 = (__int64 *)(v51 + 346);
      v60 = NULL;
      if ( v59 )
      {
        v61 = *v59;
        if ( v61 )
        {
          v60 = *(const ParticleSystemDef **)(v61 + 8 * v28 + 8);
          if ( !v60 )
            v60 = *(const ParticleSystemDef **)(v61 + 296);
        }
      }
      CgVehicleEventSystem::PlayFactorDependentVfx(this, v60, &posWs, &normal, Skidding - 12, NULL);
    }
    goto LABEL_73;
  }
LABEL_74:
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE) && Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE|0x100) )
  {
    v62 = DVARBOOL_bg_vehicleEnableCamoVFX;
    if ( !DVARBOOL_bg_vehicleEnableCamoVFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleEnableCamoVFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v62);
    if ( v62->current.enabled )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, vehObj->m_entityNumber);
      *(_DWORD *)outStickerCamoInfo.stickerIndices = 0;
      outStickerCamoInfo.camoIndex = 0;
      BG_Vehicle_GetStickerCamoMaterialIndices(&Entity->nextState.lerp.u.agentCorpse.attachModels[6].m_data, &outStickerCamoInfo);
      VehicleCamo = BG_Camo_GetVehicleCamo(outStickerCamoInfo.camoIndex);
      v88 = VehicleCamo;
      v65 = this->m_localClientNum;
      number = Entity->nextState.number;
      if ( number > 0x9E4 )
      {
        LODWORD(yawMulta) = Entity->nextState.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", yawMulta) )
          __debugbreak();
      }
      if ( (unsigned int)v65 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(yawMulta) = 2;
        LODWORD(ackRatioa) = v65;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", ackRatioa, yawMulta) )
          __debugbreak();
      }
      v67 = 2533 * v65 + number;
      if ( v67 >= 0x13CA )
      {
        LODWORD(yawMulta) = v67;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", yawMulta) )
          __debugbreak();
      }
      v68 = clientObjMap[v67];
      if ( v68 )
      {
        if ( v68 >= (unsigned int)s_objCount )
        {
          LODWORD(yawMulta) = v68;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", yawMulta) )
            __debugbreak();
        }
        obj = (DObj *)s_objBuf[v68];
        if ( obj && VehicleCamo && VehicleCamo->vehVfxTailLight.particleSystemDef )
        {
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
          if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1377, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
            __debugbreak();
          v86 = *(const VehicleDef **)&scr_const.tag_light_back_left;
          v70 = 0i64;
          v71 = (scr_string_t *)&v86;
          do
          {
            v72 = *v71;
            if ( DObjGetBoneIndexInternal_5(obj, *v71, inOutIndex, &modelIndex) )
            {
              LODWORD(v85) = 254;
              v73 = (const vec4_t *)VehicleSystem->PhysicsGetBoneLocalMatrix(VehicleSystem, vehObj->m_entityNumber, v72, (int *)&v85);
              v74 = (float *)v73;
              if ( v73 )
              {
                if ( (_DWORD)v85 != 254 )
                {
                  QuatToAxis(v73, &axis);
                  vec.v[0] = (float)(0.0099999998 * axis.m[0].v[0]) + v74[4];
                  vec.v[1] = (float)(0.0099999998 * axis.m[0].v[1]) + v74[5];
                  vec.v[2] = (float)(0.0099999998 * axis.m[0].v[2]) + v74[6];
                  AxisTransformVec3((const tmat33_t<vec3_t> *)&vehObj->m_transform, &vec, &out);
                  posWs.v[0] = out.v[0] + outOrigin.v[0];
                  posWs.v[1] = out.v[1] + outOrigin.v[1];
                  posWs.v[2] = out.v[2] + outOrigin.v[2];
                  v101.v[0] = (float)((float)(axis.m[0].v[1] * vehObj->m_transform.m[0].v[1]) + (float)(axis.m[0].v[0] * vehObj->m_transform.m[0].v[0])) + (float)(axis.m[0].v[2] * vehObj->m_transform.m[0].v[2]);
                  v101.v[1] = (float)((float)(axis.m[0].v[1] * vehObj->m_transform.m[1].v[1]) + (float)(axis.m[0].v[0] * vehObj->m_transform.m[1].v[0])) + (float)(axis.m[0].v[2] * vehObj->m_transform.m[1].v[2]);
                  v101.v[2] = (float)((float)(axis.m[0].v[1] * vehObj->m_transform.m[2].v[1]) + (float)(axis.m[0].v[0] * vehObj->m_transform.m[2].v[0])) + (float)(axis.m[0].v[2] * vehObj->m_transform.m[2].v[2]);
                  PhysicsVehicle_ComputePointVelocity(&vehObj->m_centerOfMassWs, &vehObj->m_angularVelocityWs, &vehObj->m_linearVelocityWs, &posWs, &outPointVel);
                  v75 = (float)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->frametime * 0.001;
                  posWs.v[0] = (float)(v75 * outPointVel.v[0]) + posWs.v[0];
                  posWs.v[1] = (float)(v75 * outPointVel.v[1]) + posWs.v[1];
                  posWs.v[2] = (float)(v75 * outPointVel.v[2]) + posWs.v[2];
                  v76 = fsqrt((float)((float)(outPointVel.v[1] * outPointVel.v[1]) + (float)(outPointVel.v[0] * outPointVel.v[0])) + (float)(outPointVel.v[2] * outPointVel.v[2]));
                  if ( v76 <= 0.0 || (Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_vehiclePlayTailLightSpeedThreshold, "bg_vehiclePlayTailLightSpeedThreshold"), (float)((float)((float)(outPointVel.v[1] * vehObj->m_transform.m[0].v[1]) + (float)(outPointVel.v[0] * vehObj->m_transform.m[0].v[0])) + (float)(outPointVel.v[2] * vehObj->m_transform.m[0].v[2])) <= (float)(v76 * 0.0099999998)) || v76 <= *(float *)&Float_Internal_DebugName )
                  {
                    CgVehicleEventSystem::StopVfx(this, v15, &vehObj->m_vfx.CamoTailLight[v70]);
                    v78 = 0;
                  }
                  else
                  {
                    v78 = 1;
                    CgVehicleEventSystem::PlayFactorDependentVfx(this, v88->vehVfxTailLight.particleSystemDef, &posWs, &v101, &vehObj->m_vfx.CamoTailLight[v70], NULL);
                  }
                  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_vehicleEnableCamoVFXDebugDraw, "bg_vehicleEnableCamoVFXDebugDraw") )
                  {
                    CG_DebugSphere(&posWs, 1.0, &colorBlue, 0, 5);
                    outVelLs.v[0] = posWs.v[0];
                    outVelLs.v[1] = posWs.v[1];
                    outVelLs.v[2] = posWs.v[2] + 10000.0;
                    CG_DebugLine(&posWs, &outVelLs, &colorBlue, 0, 5);
                    v79 = "Off";
                    if ( v78 )
                      v79 = "On";
                    j_sprintf(_Buffer, "%s\nSpeed:%6.3f", v79, v76);
                    CG_DebugString(&posWs, &colorCyan, 0.5, _Buffer, 0, 1);
                  }
                }
              }
            }
            v70 = (unsigned int)(v70 + 1);
            ++v71;
          }
          while ( (unsigned int)v70 < 2 );
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::CarGamepadRumble
==============
*/
void CgVehicleEventSystem::CarGamepadRumble(CgVehicleEventSystem *this, float intensity)
{
  const dvar_t *v2; 
  float value; 
  cg_t *LocalClientGlobals; 
  double scale; 

  v2 = DCONST_DVARFLT_bg_carGamepadRumble;
  if ( !DCONST_DVARFLT_bg_carGamepadRumble && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carGamepadRumble") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 465, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  scale = I_fclamp(value * intensity, 0.0, 1.0);
  CG_Rumble_PlayDeferred(this->m_localClientNum, &this->m_rumbleCarContinuous, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, *(float *)&scale, 1);
}

/*
==============
CgVehicleEventSystem::CarImpact
==============
*/
void CgVehicleEventSystem::CarImpact(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *posWs, unsigned int surfaceData, const vec3_t *normal, bool playvfx)
{
  unsigned int m_vehicleDefIndex; 
  const VehicleDef *ClientDef; 
  const vec3_t *v12; 
  float v13; 
  double v14; 
  float sndImpactExp; 
  float v16; 
  float m_timeInAir; 
  unsigned int pbidType; 
  SndAliasList *sndHardAlias; 
  __int64 v20; 
  unsigned int ImpactLight; 
  SndAliasList *sndLightAlias; 
  unsigned int ImpactHard; 
  int v24; 
  __int64 AvailableVfxSlot; 
  double PlaneSpeed; 
  double Float_Internal_DebugName; 
  float v28; 
  double NormalSpeedPlane; 

  if ( Physics_IsPredictiveWorld(vehObj->m_worldId) && vehObj->m_playerControlled )
  {
    CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    m_vehicleDefIndex = vehObj->m_vehicleDefIndex;
    if ( m_vehicleDefIndex < 0x80 )
    {
      ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
      if ( ClientDef )
      {
        v12 = normal;
        v13 = FLOAT_1_0;
        v14 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(vehObj->m_transform.m[2].v[1] * normal->v[1]) + (float)(vehObj->m_transform.m[2].v[0] * normal->v[0])) + (float)(vehObj->m_transform.m[2].v[2] * normal->v[2])) & _xmm), 0.0, 1.0);
        sndImpactExp = ClientDef->vehiclePhysicsDef.sndImpactExp;
        v16 = *(float *)&v14;
        if ( sndImpactExp < 1.0 || (m_timeInAir = vehObj->m_timeInAir, m_timeInAir <= 0.0) && m_timeInAir >= -0.2 || (v13 = 1.0 - powf_0(*(float *)&v14, sndImpactExp), v13 > 0.001) )
        {
          pbidType = 4;
          sndHardAlias = NULL;
          while ( 1 )
          {
            v20 = vehObj->m_vehicleId - 1;
            if ( (int)v20 < 0 )
              v20 = 0i64;
            if ( !SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v20].ids[pbidType]) )
              break;
            if ( ++pbidType > 7 )
            {
              CgVehicleEventSystem::StopSoundDeferred(this, 4u);
              pbidType = 4;
              break;
            }
          }
          ImpactLight = vehObj->m_sound.ImpactLight;
          if ( ImpactLight )
            sndLightAlias = SND_FindAliasFromId(ImpactLight);
          else
            sndLightAlias = NULL;
          ImpactHard = vehObj->m_sound.ImpactHard;
          if ( ImpactHard )
            sndHardAlias = SND_FindAliasFromId(ImpactHard);
          v24 = CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, vehObj, &ClientDef->vehiclePhysicsDef.sndImpactHard, &ClientDef->vehiclePhysicsDef.sndImpactLight, sndHardAlias, sndLightAlias, posWs, surfaceData, v13, pbidType);
          v12 = normal;
          if ( v24 >= 0 && (unsigned int)v24 < 0xC0 )
            this->m_sounds[(__int64)v24].debug = 1;
        }
        if ( playvfx && (ClientDef->vehiclePhysicsDef.vfxImpactHard.surfaceEffects || ClientDef->vehiclePhysicsDef.vfxImpactLight.surfaceEffects) )
        {
          AvailableVfxSlot = CgVehicleEventSystem::FindAvailableVfxSlot(this, vehObj->m_vfx.Impact, 4u);
          PlaneSpeed = BgVehiclePhysics::GetPlaneSpeed(&vehObj->BgVehiclePhysics);
          CgVehicleEventSystem::PlayFactorDependentSurfaceVfx(this, *(float *)&PlaneSpeed * 0.056818184, &ClientDef->vehiclePhysicsDef.vfxImpactHard, &ClientDef->vehiclePhysicsDef.vfxImpactLight, posWs, v12, surfaceData, &vehObj->m_vfx.Impact[AvailableVfxSlot]);
        }
        if ( vehObj->m_timeSinceLastCollision > 2.5 )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehShakeImpactScale, "bg_vehShakeImpactScale");
          v28 = *(float *)&Float_Internal_DebugName * (float)(1.0 - (float)((float)((float)(v16 * v16) * v16) * v16));
          NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(&vehObj->BgVehiclePhysics);
          CgVehicleEventSystem::ImpactShakeCamOnSpeed(this, *(float *)&NormalSpeedPlane * *(float *)&NormalSpeedPlane, v28);
        }
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::CarImpactKeyframed
==============
*/
void CgVehicleEventSystem::CarImpactKeyframed(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *impactPosWs, unsigned int surfaceData)
{
  __int64 v5; 
  unsigned int PhysicsBodyId; 
  unsigned int m_vehicleDefIndex; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  SndAliasList *AliasFromId; 
  VehiclePhysicsVfxGroup *p_vfxImpactHard; 
  float v17; 
  float v21; 
  unsigned int AvailableVfxSlot; 
  const ParticleSystemDef *particleSystemDef; 
  FootstepVFX *surfaceEffects; 
  __int64 v25; 
  unsigned int ImpactLight; 
  SndAliasList *sndLightAlias; 
  unsigned int ImpactHard; 
  vec3_t position; 
  __int64 v30; 
  vec4_t orientation; 

  v5 = surfaceData;
  if ( BgVehiclePhysics::IsKeyframed(&vehObj->BgVehiclePhysics) && !vehObj->m_pmoveObject )
  {
    if ( BgVehiclePhysics::IsPhysicsBodyIdValid(&vehObj->BgVehiclePhysics) )
    {
      PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(&vehObj->BgVehiclePhysics);
      Physics_GetRigidBodyTransform((const Physics_WorldId)vehObj->m_worldId, PhysicsBodyId, &position, &orientation);
    }
    if ( !CgVehicleEventSystem::IsFarFromPlayer(this, &position) )
    {
      m_vehicleDefIndex = vehObj->m_vehicleDefIndex;
      if ( m_vehicleDefIndex < 0x80 )
      {
        CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
        ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
        v11 = ClientDef;
        if ( ClientDef )
        {
          v30 = *(_QWORD *)vehObj->m_history.m_lastLinearVel.v;
          if ( (_DWORD)v5 )
          {
            v12 = impactPosWs->v[0] - position.v[0];
            v14 = LODWORD(impactPosWs->v[1]);
            v13 = impactPosWs->v[1] - position.v[1];
            AliasFromId = NULL;
            p_vfxImpactHard = &ClientDef->vehiclePhysicsDef.vfxImpactHard;
            v17 = impactPosWs->v[2] - position.v[2];
            *(float *)&v14 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v17 * v17));
            _XMM1 = v14;
            __asm
            {
              vcmpless xmm0, xmm1, cs:__real@80000000
              vblendvps xmm0, xmm1, xmm7, xmm0
            }
            position.v[0] = v12 * (float)(1.0 / *(float *)&_XMM0);
            position.v[1] = v13 * (float)(1.0 / *(float *)&_XMM0);
            position.v[2] = v17 * (float)(1.0 / *(float *)&_XMM0);
            v21 = fsqrt((float)(*(float *)&v30 * *(float *)&v30) + (float)(*((float *)&v30 + 1) * *((float *)&v30 + 1))) * 0.056818184;
            if ( ClientDef->vehiclePhysicsDef.vfxImpactHard.surfaceEffects || ClientDef->vehiclePhysicsDef.vfxImpactLight.surfaceEffects )
            {
              AvailableVfxSlot = CgVehicleEventSystem::FindAvailableVfxSlot(this, vehObj->m_vfx.Impact, 4u);
              if ( v21 <= p_vfxImpactHard->threshold )
              {
                p_vfxImpactHard = NULL;
                if ( v21 > v11->vehiclePhysicsDef.vfxImpactLight.threshold )
                  p_vfxImpactHard = &v11->vehiclePhysicsDef.vfxImpactLight;
              }
              particleSystemDef = NULL;
              if ( p_vfxImpactHard )
              {
                surfaceEffects = p_vfxImpactHard->surfaceEffects;
                if ( p_vfxImpactHard->surfaceEffects )
                {
                  if ( (unsigned int)v5 >= 0x40 || (particleSystemDef = surfaceEffects->footstepVFX[v5].particleSystemDef) == NULL && (particleSystemDef = surfaceEffects->footstepVFX[36].particleSystemDef) == NULL )
                    particleSystemDef = NULL;
                }
              }
              CgVehicleEventSystem::PlayFactorDependentVfx(this, particleSystemDef, impactPosWs, &position, &vehObj->m_vfx.Impact[AvailableVfxSlot], NULL);
            }
            v25 = vehObj->m_vehicleId - 1;
            if ( (int)v25 < 0 )
              v25 = 0i64;
            CgVehicleEventSystem::StopSoundDeferred(this, this->m_vehiclePlaybackIds[v25].ids[4]);
            ImpactLight = vehObj->m_sound.ImpactLight;
            if ( ImpactLight )
              sndLightAlias = SND_FindAliasFromId(ImpactLight);
            else
              sndLightAlias = NULL;
            ImpactHard = vehObj->m_sound.ImpactHard;
            if ( ImpactHard )
              AliasFromId = SND_FindAliasFromId(ImpactHard);
            CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, v21, vehObj, &v11->vehiclePhysicsDef.sndImpactHard, &v11->vehiclePhysicsDef.sndImpactLight, AliasFromId, sndLightAlias, impactPosWs, v5, 1.0, 4u);
          }
        }
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::CarImpactPlayer
==============
*/
void CgVehicleEventSystem::CarImpactPlayer(CgVehicleEventSystem *this, BgVehiclePhysicsGround *vehObj, const vec3_t *playerPos)
{
  unsigned int m_vehicleDefIndex; 
  const VehicleDef *ClientDef; 
  float v8; 
  float v9; 
  __int128 v10; 
  unsigned int ImpactHard; 
  float v12; 
  unsigned int v16; 
  signed int vehIndex; 
  int m_entityNumber; 
  const SndAliasList *AliasFromId; 
  __int64 AvailableVfxSlot; 
  double PlaneSpeed; 
  VehiclePhysicsVfxGroup *p_vfxImpactHard; 
  const ParticleSystemDef *particleSystemDef; 
  FootstepVFX *surfaceEffects; 
  double NormalSpeedPlane; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  vec3_t normal; 
  vec3_t atPointWs; 
  vec3_t impulseWs; 

  if ( vehObj->m_playerControlled && Physics_IsPredictiveWorld(vehObj->m_worldId) )
  {
    CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    m_vehicleDefIndex = vehObj->m_vehicleDefIndex;
    if ( m_vehicleDefIndex < 0x80 )
    {
      ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
      if ( ClientDef )
      {
        v8 = vehObj->m_transform.m[3].v[0] - playerPos->v[0];
        v10 = LODWORD(vehObj->m_transform.m[3].v[1]);
        v9 = vehObj->m_transform.m[3].v[1] - playerPos->v[1];
        ImpactHard = vehObj->m_sound.ImpactHard;
        v12 = vehObj->m_transform.m[3].v[2] - playerPos->v[2];
        *(float *)&v10 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v12 * v12));
        _XMM1 = v10;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm7, xmm0
        }
        normal.v[0] = v8 * (float)(1.0 / *(float *)&_XMM0);
        normal.v[2] = v12 * (float)(1.0 / *(float *)&_XMM0);
        normal.v[1] = v9 * (float)(1.0 / *(float *)&_XMM0);
        if ( ImpactHard && SND_FindAliasFromId(ImpactHard) )
        {
          v16 = vehObj->m_sound.ImpactHard;
          vehIndex = vehObj->m_vehicleId - 1;
          m_entityNumber = vehObj->m_entityNumber;
          if ( vehIndex < 0 )
            vehIndex = 0;
          if ( v16 )
            AliasFromId = SND_FindAliasFromId(v16);
          else
            AliasFromId = NULL;
          CgVehicleEventSystem::PlaySoundSurfaceDeferred(this, AliasFromId, m_entityNumber, 7u, playerPos, 1.0, 1.0, 0, vehIndex, 9u);
        }
        if ( ClientDef->vehiclePhysicsDef.vfxImpactHard.surfaceEffects || ClientDef->vehiclePhysicsDef.vfxImpactLight.surfaceEffects )
        {
          AvailableVfxSlot = CgVehicleEventSystem::FindAvailableVfxSlot(this, vehObj->m_vfx.Impact, 4u);
          PlaneSpeed = BgVehiclePhysics::GetPlaneSpeed(vehObj);
          p_vfxImpactHard = NULL;
          particleSystemDef = NULL;
          if ( (float)((float)(*(float *)&PlaneSpeed * 0.056818184) + ClientDef->vehiclePhysicsDef.vfxImpactHard.threshold) > ClientDef->vehiclePhysicsDef.vfxImpactHard.threshold )
            p_vfxImpactHard = &ClientDef->vehiclePhysicsDef.vfxImpactHard;
          if ( p_vfxImpactHard )
          {
            surfaceEffects = p_vfxImpactHard->surfaceEffects;
            if ( surfaceEffects )
            {
              particleSystemDef = surfaceEffects->footstepVFX[7].particleSystemDef;
              if ( !particleSystemDef )
              {
                particleSystemDef = surfaceEffects->footstepVFX[36].particleSystemDef;
                if ( !particleSystemDef )
                  particleSystemDef = NULL;
              }
            }
          }
          CgVehicleEventSystem::PlayFactorDependentVfx(this, particleSystemDef, playerPos, &normal, &vehObj->m_vfx.Impact[AvailableVfxSlot], NULL);
        }
        NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(vehObj);
        v26 = *(float *)&NormalSpeedPlane;
        v27 = *(float *)&NormalSpeedPlane * 1.5;
        I_fclamp(*(float *)&NormalSpeedPlane * 1.5, 0.0, 1.0);
        CgVehicleEventSystem::ImpactShakeCamOnSpeed(this, v27, 0.15000001);
        v28 = 100.0 * vehObj->m_transform.m[2].v[1];
        atPointWs.v[0] = (float)(100.0 * vehObj->m_transform.m[2].v[0]) + vehObj->m_centerOfMassWs.v[0];
        v29 = v28 + vehObj->m_centerOfMassWs.v[1];
        v30 = 100.0 * vehObj->m_transform.m[2].v[2];
        atPointWs.v[1] = v29;
        atPointWs.v[2] = v30 + vehObj->m_centerOfMassWs.v[2];
        impulseWs.v[2] = (float)(v26 * 6000.0) * normal.v[2];
        impulseWs.v[0] = (float)(v26 * 6000.0) * normal.v[0];
        impulseWs.v[1] = (float)(v26 * 6000.0) * normal.v[1];
        BgVehiclePhysics::ApplyAngularImpulse(vehObj, &impulseWs, &atPointWs);
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::CarLanded
==============
*/
void CgVehicleEventSystem::CarLanded(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, float timeWasInAir)
{
  const dvar_t *v5; 
  const dvar_t *v6; 
  float value; 
  float v8; 
  double v9; 
  cg_t *LocalClientGlobals; 
  float v11; 
  const dvar_t *v12; 
  void (__fastcall *CarGamepadRumble)(BgVehicleEventSystem *, float); 
  const dvar_t *v14; 
  unsigned int m_vehicleDefIndex; 
  const VehicleDef *ClientDef; 
  SndAliasList *sndLightAlias; 
  unsigned int v18; 
  unsigned int surfaceData; 
  unsigned int Suspension; 
  vec3_t outOrg; 

  if ( Physics_IsPredictiveWorld(vehObj->m_worldId) && vehObj->m_playerControlled )
  {
    v5 = DCONST_DVARFLT_bg_vehShakeMinTimeAir;
    if ( !DCONST_DVARFLT_bg_vehShakeMinTimeAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehShakeMinTimeAir") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( timeWasInAir >= v5->current.value )
    {
      v6 = DCONST_DVARFLT_bg_vehShakeMinTimeAir;
      if ( !DCONST_DVARFLT_bg_vehShakeMinTimeAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehShakeMinTimeAir") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      value = v6->current.value;
      if ( value <= 0.0 )
        v8 = timeWasInAir;
      else
        v8 = timeWasInAir / value;
      v9 = I_fclamp(v8, 0.0, 1.0);
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      v11 = SHAKECAM_RAD;
      v12 = DCONST_DVARFLT_bg_vehLandedShake;
      if ( !DCONST_DVARFLT_bg_vehLandedShake && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehLandedShake") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      CG_StartShakeCamera(this->m_localClientNum, *(float *)&v9 * v12->current.value, 800, &outOrg, v11);
      CarGamepadRumble = this->CarGamepadRumble;
      v14 = DCONST_DVARFLT_bg_vehLandedRumble;
      if ( !DCONST_DVARFLT_bg_vehLandedRumble && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehLandedRumble") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      ((void (__fastcall *)(CgVehicleEventSystem *))CarGamepadRumble)(this);
      if ( timeWasInAir > 0.2 )
      {
        m_vehicleDefIndex = vehObj->m_vehicleDefIndex;
        if ( m_vehicleDefIndex < 0x80 )
        {
          CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
          ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
          if ( ClientDef )
          {
            sndLightAlias = NULL;
            v18 = 0;
            if ( vehObj->m_wheelCount )
            {
              while ( BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, v18)->m_contactBodyId == 0xFFFFFF )
              {
                if ( ++v18 >= vehObj->m_wheelCount )
                  goto LABEL_30;
              }
              surfaceData = (BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, v18)->m_surfFlags >> 19) & 0x3F;
              if ( surfaceData )
              {
                Suspension = vehObj->m_sound.Suspension;
                if ( Suspension )
                  sndLightAlias = SND_FindAliasFromId(Suspension);
                CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, vehObj, &ClientDef->vehiclePhysicsDef.sndSuspension, &ClientDef->vehiclePhysicsDef.sndSuspension, sndLightAlias, sndLightAlias, &vehObj->m_centerOfMassWs, surfaceData, (float)(timeWasInAir - 0.2) * 1.25, 3u);
              }
            }
          }
        }
      }
LABEL_30:
      memset(&outOrg, 0, sizeof(outOrg));
    }
  }
}

/*
==============
CgVehicleEventSystem::CarPlayDoorSmokeVFX
==============
*/
void CgVehicleEventSystem::CarPlayDoorSmokeVFX(CgVehicleEventSystem *this, int playerEntNum)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  CgHandler *Handler; 
  int LinkedVehicle; 
  centity_t *v10; 
  const Camo *VehicleCamo; 
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  VehicleClient *v14; 
  const VehicleDef *ClientDef; 
  BgVehiclePhysicsManager *v16; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysics *v18; 
  __int64 v19; 
  unsigned int numDoors; 
  __int64 v21; 
  animScriptVehicleSeat_t outVehicleSeat; 
  int v27; 
  vec3_t outOrigin; 
  animScriptVehicleType_t outVehicleType; 
  ParticleSystemDef *pDef; 
  __int64 v31; 
  __int64 v32; 
  vec3_t out; 
  vec3_t invertAxis; 
  vec3_t posWs; 

  v31 = -2i64;
  v2 = playerEntNum;
  outVehicleSeat = VEHICLE_SEAT_UNUSED;
  if ( playerEntNum != 2047 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v2) )
    {
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( (unsigned int)v2 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v2, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
          __debugbreak();
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v2);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v2);
      }
      if ( CharacterInfo )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v2);
        if ( Entity )
        {
          p_nextState = &Entity->nextState;
          Handler = CgHandler::getHandler(this->m_localClientNum);
          LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(Handler, p_nextState, CharacterInfo, &outVehicleType, &outVehicleSeat);
          if ( LinkedVehicle != 2047 )
          {
            v10 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, LinkedVehicle);
            if ( v10 )
            {
              LODWORD(v32) = 0;
              BYTE4(v32) = 0;
              BG_Vehicle_GetStickerCamoMaterialIndices(&v10->nextState.lerp.u.agentCorpse.attachModels[6].m_data, (VehicleStickerCamoInfo *)&v32);
              VehicleCamo = BG_Camo_GetVehicleCamo(BYTE4(v32));
              if ( VehicleCamo )
              {
                pDef = (ParticleSystemDef *)VehicleCamo->vehVfxDoorSmoke.particleSystemDef;
                if ( pDef )
                {
                  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
                  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1117, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
                    __debugbreak();
                  Client = CgVehicleSystem::GetClient(VehicleSystem, v10);
                  v14 = Client;
                  if ( (!Client || !BGVehicles::PhysicsIsValid(Client->physicsId)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1120, ASSERT_TYPE_ASSERT, "(vehClient && BGVehicles::PhysicsIsValid( vehClient->physicsId ))", (const char *)&queryFormat, "vehClient && BGVehicles::PhysicsIsValid( vehClient->physicsId )") )
                    __debugbreak();
                  ClientDef = CgVehicleSystem::GetClientDef(v14->defIndex);
                  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1123, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
                    __debugbreak();
                  v16 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
                  ObjectById = BgVehiclePhysicsManager::GetObjectById(v16, v14->physicsId);
                  v18 = ObjectById;
                  if ( ObjectById && ObjectById->SupportsFeature(ObjectById, VPFEAT_GROUND_VEHICLE) )
                  {
                    v19 = (unsigned int)(outVehicleSeat - 1);
                    numDoors = 4;
                    if ( ClientDef->numDoors < 4 )
                      numDoors = ClientDef->numDoors;
                    if ( (unsigned int)v19 >= numDoors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1133, ASSERT_TYPE_ASSERT, "(doorIndex < static_cast<uint>(I_min( vehDef->numDoors, 4 )))", (const char *)&queryFormat, "doorIndex < static_cast<uint>(I_min( vehDef->numDoors, 4 ))") )
                      __debugbreak();
                    v32 = (unsigned int)v19;
                    if ( ClientDef->doorBones[v19] )
                    {
                      v27 = 254;
                      v21 = (__int64)VehicleSystem->PhysicsGetBoneLocalMatrix(VehicleSystem, v18->m_entityNumber, ClientDef->doorBones[v19], &v27);
                      if ( v21 )
                      {
                        AxisTransformVec3((const tmat33_t<vec3_t> *)&v18->m_transform, (const vec3_t *)(v21 + 16), &out);
                        CG_GetPoseOrigin(&v10->pose, &outOrigin);
                        posWs.v[0] = outOrigin.v[0] + out.v[0];
                        posWs.v[1] = outOrigin.v[1] + out.v[1];
                        posWs.v[2] = outOrigin.v[2] + out.v[2];
                        invertAxis.v[0] = FLOAT_1_0;
                        _XMM0 = v19 & 1;
                        __asm { vpcmpeqd xmm2, xmm0, xmm1 }
                        _XMM1 = LODWORD(FLOAT_N1_0);
                        __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
                        invertAxis.v[1] = *(float *)&_XMM0;
                        invertAxis.v[2] = FLOAT_1_0;
                        CgVehicleEventSystem::PlayFactorDependentVfx(this, pDef, &posWs, v18->m_transform.m, (ParticleSystemHandle *)&v18[4].m_controls.externalValues[v32 + 4], &invertAxis);
                        memset(&outOrigin, 0, sizeof(outOrigin));
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::CarStopPlayer
==============
*/
void CgVehicleEventSystem::CarStopPlayer(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  int m_entityNumber; 
  signed int v3; 
  unsigned __int32 v6; 
  char *v7; 

  m_entityNumber = vehObj->m_entityNumber;
  v3 = vehObj->m_vehicleId - 1;
  if ( v3 < 0 )
    v3 = 0;
  if ( this->m_lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1846, ASSERT_TYPE_ASSERT, "( m_lock == 0 )", "Can't call CgVehicleEventSystem::StopSoundsOnEntDeferred() while ProcessEventsMainThread() is running") )
    __debugbreak();
  if ( (((_BYTE)this + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_soundsCursor) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(&this->m_soundsCursor, 1u);
  if ( v6 >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1849, ASSERT_TYPE_ASSERT, "( index < MAX_DEFERRED_SOUNDS )", "Not enough room for a new event. Increase MAX_DEFERRED_SOUNDS ?") )
    __debugbreak();
  if ( m_entityNumber == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1851, ASSERT_TYPE_ASSERT, "(entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entNum != ENTITYNUM_NONE") )
    __debugbreak();
  v7 = (char *)this + 64 * (unsigned __int64)v6;
  *((_DWORD *)v7 + 135) = 2;
  *((_DWORD *)v7 + 142) = m_entityNumber;
  *((_DWORD *)v7 + 145) = v3;
  *((_DWORD *)v7 + 144) = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
  v7[588] = 0;
  CgVehicleEventSystem::StopAllVfxOnVehicle(this, vehObj);
}

/*
==============
CgVehicleEventSystem::ComputeTireDataForSound
==============
*/
void CgVehicleEventSystem::ComputeTireDataForSound(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, unsigned int *outSurfData, unsigned int *outSurfDataSkid, float *outMaxSuspDeform, vec3_t *outSuspWs)
{
  char v8; 
  unsigned int v9; 
  float v10; 
  signed int v11; 
  bool v12; 
  unsigned int m_wheelCount; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  float m_suspDeformRatio; 
  __int64 v20[8]; 

  *outSurfData = 0;
  *outSurfDataSkid = 0;
  *outMaxSuspDeform = 0.0;
  *outSuspWs = vehObj->m_centerOfMassWs;
  if ( !vehObj->IsInAir((BgVehiclePhysics *)vehObj) )
  {
    v8 = 1;
    v9 = 0;
    v10 = (float)((float)(vehObj->m_transform.m[0].v[1] * vehObj->m_linearVelocityWs.v[1]) + (float)(vehObj->m_transform.m[0].v[0] * vehObj->m_linearVelocityWs.v[0])) + (float)(vehObj->m_transform.m[0].v[2] * vehObj->m_linearVelocityWs.v[2]);
    memset(v20, 0, sizeof(v20));
    v11 = -1;
    v12 = v10 >= 0.0;
    m_wheelCount = vehObj->m_wheelCount;
    v14 = 0;
    if ( m_wheelCount )
    {
      do
      {
        v15 = m_wheelCount - v9 - 1;
        if ( v12 )
          v15 = v9;
        if ( v15 >= m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 252, ASSERT_TYPE_ASSERT, "(wheelNdx < m_wheelCount)", (const char *)&queryFormat, "wheelNdx < m_wheelCount") )
          __debugbreak();
        v16 = v15;
        if ( vehObj->m_wheels[v16].m_contactBodyId == 0xFFFFFF )
        {
          if ( vehObj->m_wheels[v16].m_torqueRatio > 0.001 )
            v8 = 0;
        }
        else
        {
          v17 = (vehObj->m_wheels[v16].m_surfFlags >> 19) & 0x3F;
          if ( (unsigned __int8)++*((_BYTE *)v20 + v17) > v14 )
          {
            v14 = *((unsigned __int8 *)v20 + v17);
            *outSurfData = v17;
          }
          if ( vehObj->m_wheels[v16].m_torqueRatio > 0.001 && !*outSurfDataSkid )
            *outSurfDataSkid = (vehObj->m_wheels[v16].m_surfFlags >> 19) & 0x3F;
        }
        m_suspDeformRatio = vehObj->m_wheels[v16].m_suspDeformRatio;
        if ( m_suspDeformRatio > *outMaxSuspDeform )
        {
          *outMaxSuspDeform = m_suspDeformRatio;
          v11 = v9;
        }
        m_wheelCount = vehObj->m_wheelCount;
        v12 = v10 >= 0.0;
        ++v9;
      }
      while ( v9 < m_wheelCount );
      if ( v11 > 0 )
        *outSuspWs = BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, v11)->m_hardPointWs;
      if ( !v8 )
        *outSurfDataSkid = 0;
    }
  }
}

/*
==============
CgVehicleEventSystem::DebugDrawSlot
==============
*/
void CgVehicleEventSystem::DebugDrawSlot(CgVehicleEventSystem *this, int slotNdx)
{
  if ( slotNdx >= 0 && (unsigned int)slotNdx < 0xC0 )
    this->m_sounds[(__int64)slotNdx].debug = 1;
}

/*
==============
CgVehicleEventSystem::FindAvailableImpactSoundSlot
==============
*/
__int64 CgVehicleEventSystem::FindAvailableImpactSoundSlot(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  unsigned int v4; 
  __int64 v5; 

  v4 = 4;
  while ( 1 )
  {
    v5 = vehObj->m_vehicleId - 1;
    if ( (int)v5 < 0 )
      v5 = 0i64;
    if ( !SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v5].ids[v4]) )
      break;
    if ( ++v4 > 7 )
    {
      CgVehicleEventSystem::StopSoundDeferred(this, 4u);
      return 4i64;
    }
  }
  return v4;
}

/*
==============
CgVehicleEventSystem::FindAvailableVfxSlot
==============
*/
__int64 CgVehicleEventSystem::FindAvailableVfxSlot(CgVehicleEventSystem *this, ParticleSystemHandle *slots, unsigned int maxVfxs)
{
  __int64 m_localClientNum; 
  ParticleManager *v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  ParticleSystemHandle *v12; 
  ParticleSystemHandle v13; 
  __int64 v14; 
  ParticleSystemHandleImpl v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  ParticleSystemHandle *v21; 
  __int64 v23; 
  cg_t *LocalClientGlobals; 

  if ( !slots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1168, ASSERT_TYPE_ASSERT, "(slots)", (const char *)&queryFormat, "slots") )
    __debugbreak();
  if ( !maxVfxs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1169, ASSERT_TYPE_ASSERT, "(maxVfxs > 0)", (const char *)&queryFormat, "maxVfxs > 0") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1172, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(v23) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, 2) )
      __debugbreak();
  }
  v7 = &g_particleManager[m_localClientNum];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1175, ASSERT_TYPE_ASSERT, "(particleMgr)", (const char *)&queryFormat, "particleMgr") )
    __debugbreak();
  v8 = 0i64;
  v9 = maxVfxs;
  v10 = 0;
  v11 = 0;
  if ( maxVfxs )
  {
    v12 = slots;
    while ( v12 )
    {
      v13 = *v12;
      if ( *v12 == PARTICLE_SYSTEM_INVALID_HANDLE )
        break;
      v14 = ((__int64)(int)this->m_localClientNum << 12) + (v13 & 0xFFF);
      v15.__all32 = (unsigned int)g_particleSystemsGeneration[v14];
      if ( v15.__all32 != v13 || g_particleSystems[0][v14] < (ParticleSystem *)0x1000 )
        break;
      v16 = 0;
      if ( v15.__all32 == v13 )
        v16 = *v12 & 0xFFF;
      v17 = (__int64)(int)this->m_localClientNum << 12;
      v18 = 0i64;
      if ( *((_QWORD *)&g_particleSystems[0][v17] + v16) >= 0x1000ui64 )
        v18 = *((_QWORD *)&g_particleSystems[0][v17] + v16);
      if ( !v18 )
        break;
      if ( !*(_BYTE *)(v18 + 559) )
      {
        v21 = &slots[v11];
        goto LABEL_36;
      }
      v19 = v11;
      v20 = LocalClientGlobals->time - *(_DWORD *)(v18 + 444);
      if ( v20 <= v10 )
        v19 = v9;
      ++v11;
      ++v12;
      v9 = v19;
      if ( v20 <= v10 )
        v20 = v10;
      v10 = v20;
      if ( v11 >= maxVfxs )
        goto LABEL_33;
    }
  }
  else
  {
LABEL_33:
    if ( v9 < maxVfxs )
      v8 = v9;
    v11 = v8;
    v21 = &slots[v8];
LABEL_36:
    CgVehicleEventSystem::StopVfx(this, v7, v21);
  }
  return v11;
}

/*
==============
CgVehicleEventSystem::GetHornSoundOffset
==============
*/
void CgVehicleEventSystem::GetHornSoundOffset(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, vec3_t *outOffset)
{
  const dvar_t *v3; 
  CgVehicleSystem *VehicleSystem; 
  __int64 m_entityNumber; 
  const vec4_t *v9; 
  float *v10; 
  __int128 v11; 
  int v14; 
  vec3_t vec; 
  ExtentBounds outExtBounds; 
  tmat33_t<vec3_t> axis; 

  v3 = DVARBOOL_vehicle_horn_heli_tag;
  if ( !DVARBOOL_vehicle_horn_heli_tag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_horn_heli_tag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && vehObj->m_vehicleAnimProfile == VEH_ANIMPROFILE_LBRAVO && (VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum), m_entityNumber = (unsigned int)vehObj->m_entityNumber, v14 = 254, v9 = (const vec4_t *)VehicleSystem->PhysicsGetBoneLocalMatrix(VehicleSystem, m_entityNumber, scr_const.tag_light_1, &v14), (v10 = (float *)v9) != NULL) )
  {
    QuatToAxis(v9, &axis);
    vec.v[0] = (float)(5.0 * axis.m[0].v[0]) + v10[4];
    vec.v[1] = (float)(5.0 * axis.m[0].v[1]) + v10[5];
    vec.v[2] = (float)(5.0 * axis.m[0].v[2]) + v10[6];
    AxisTransformVec3((const tmat33_t<vec3_t> *)&vehObj->m_transform, &vec, outOffset);
  }
  else
  {
    GetVehicleAndTurretExtBounds((const LocalClientNum_t)this->m_localClientNum, vehObj, &outExtBounds);
    v11 = LODWORD(outExtBounds.maxs.v[2]);
    *(float *)&v11 = (float)((float)(outExtBounds.maxs.v[2] + outExtBounds.mins.v[2]) * 0.5) - outExtBounds.mins.v[2];
    _XMM2 = v11;
    __asm { vmaxss  xmm0, xmm2, xmm1 }
    *(float *)&v11 = (float)(*(float *)&_XMM0 * 2.0) + 5.0;
    outOffset->v[0] = *(float *)&v11 * vehObj->m_transform.m[2].v[0];
    outOffset->v[1] = *(float *)&v11 * vehObj->m_transform.m[2].v[1];
    outOffset->v[2] = *(float *)&v11 * vehObj->m_transform.m[2].v[2];
  }
}

/*
==============
CgVehicleEventSystem::GetPlayerAndVehicleEntities
==============
*/
bool CgVehicleEventSystem::GetPlayerAndVehicleEntities(CgVehicleEventSystem *this, int playerEntNum, centity_t **outPlayerEnt, centity_t **outVehEnt, animScriptVehicleSeat_t *outVehSeat)
{
  __int64 v5; 
  CgGlobalsSP *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  centity_t *v12; 
  CgHandler *Handler; 
  int LinkedVehicle; 
  centity_t *v15; 
  int v17; 
  int v18; 
  animScriptVehicleType_t outVehicleType; 

  v5 = playerEntNum;
  if ( playerEntNum == 2047 )
    return 0;
  LocalClientGlobals = (CgGlobalsSP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v5) )
    return 0;
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)v5 >= *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28] )
    {
      v18 = *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28];
      v17 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[12] + 14792 * v5);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo(LocalClientGlobals, v5);
  }
  if ( !CharacterInfo )
    return 0;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v5);
  *outPlayerEnt = Entity;
  v12 = Entity;
  if ( !Entity )
    return 0;
  Handler = CgHandler::getHandler(this->m_localClientNum);
  LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(Handler, &v12->nextState, CharacterInfo, &outVehicleType, outVehSeat);
  if ( LinkedVehicle == 2047 )
    return 0;
  v15 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, LinkedVehicle);
  *outVehEnt = v15;
  return v15 != NULL;
}

/*
==============
CgVehicleEventSystem::GetTireSFXFast
==============
*/
const VehiclePhysicsSoundGroup *CgVehicleEventSystem::GetTireSFXFast(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehiclePhysicsDef *physDef)
{
  __int64 v3; 

  v3 = 896i64;
  if ( !vehObj->m_flatTire )
    v3 = 640i64;
  return (const VehiclePhysicsSoundGroup *)((char *)physDef + v3);
}

/*
==============
CgVehicleEventSystem::GetTireSFXSlow
==============
*/
const VehiclePhysicsSoundGroup *CgVehicleEventSystem::GetTireSFXSlow(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehiclePhysicsDef *physDef)
{
  __int64 v3; 

  v3 = 928i64;
  if ( !vehObj->m_flatTire )
    v3 = 672i64;
  return (const VehiclePhysicsSoundGroup *)((char *)physDef + v3);
}

/*
==============
CgVehicleEventSystem::GetTireVFXFast
==============
*/
const VehiclePhysicsVfxGroup *CgVehicleEventSystem::GetTireVFXFast(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, unsigned int windex, const VehiclePhysicsDef *physDef)
{
  bool v5; 
  __int64 v6; 

  v5 = (BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, windex)->m_state & 1) == 0;
  v6 = 1184i64;
  if ( v5 )
    v6 = 1040i64;
  return (const VehiclePhysicsVfxGroup *)((char *)physDef + v6);
}

/*
==============
CgVehicleEventSystem::GetTireVFXSlow
==============
*/
const VehiclePhysicsVfxGroup *CgVehicleEventSystem::GetTireVFXSlow(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, unsigned int windex, const VehiclePhysicsDef *physDef)
{
  bool v5; 
  __int64 v6; 

  v5 = (BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, windex)->m_state & 1) == 0;
  v6 = 1208i64;
  if ( v5 )
    v6 = 1064i64;
  return (const VehiclePhysicsVfxGroup *)((char *)physDef + v6);
}

/*
==============
GetVehicleAndTurretExtBounds
==============
*/
void GetVehicleAndTurretExtBounds(const LocalClientNum_t localClientNum, const BgVehiclePhysics *vehObj, ExtentBounds *outExtBounds)
{
  Physics_WorldId m_worldId; 
  unsigned int PhysicsBodyId; 
  const centity_t *TurretEnt; 
  unsigned int BodyId; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  if ( !BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)vehObj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 251, ASSERT_TYPE_ASSERT, "(vehObj.IsPhysicsBodyIdValid())", (const char *)&queryFormat, "vehObj.IsPhysicsBodyIdValid()") )
    __debugbreak();
  m_worldId = vehObj->m_worldId;
  PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)vehObj);
  if ( !Physics_IsRigidBodyValid(m_worldId, PhysicsBodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 254, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( worldId, vehicleBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( worldId, vehicleBodyId )") )
    __debugbreak();
  Physics_GetRigidBodyAABB(m_worldId, PhysicsBodyId, &outExtBounds->mins, &outExtBounds->maxs);
  if ( vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_HAS_TURRET) )
  {
    TurretEnt = CG_Turret_GetTurretEnt(localClientNum);
    if ( TurretEnt )
    {
      BodyId = PhysicsVehicle_GetBodyId(m_worldId, TurretEnt->nextState.number);
      if ( Physics_IsRigidBodyValid(m_worldId, BodyId) )
      {
        Physics_GetRigidBodyAABB(m_worldId, BodyId, &aabbMin, &aabbMax);
        _XMM0 = LODWORD(aabbMin.v[0]);
        __asm { vminss  xmm1, xmm0, dword ptr [rbx] }
        outExtBounds->mins.v[0] = *(float *)&_XMM1;
        _XMM2 = LODWORD(outExtBounds->maxs.v[0]);
        __asm { vmaxss  xmm0, xmm2, dword ptr [rsp+78h+aabbMax] }
        outExtBounds->maxs.v[0] = *(float *)&_XMM0;
        _XMM1 = LODWORD(outExtBounds->mins.v[1]);
        __asm { vminss  xmm0, xmm1, dword ptr [rsp+78h+aabbMin+4] }
        outExtBounds->mins.v[1] = *(float *)&_XMM0;
        _XMM1 = LODWORD(outExtBounds->maxs.v[1]);
        __asm { vmaxss  xmm0, xmm1, dword ptr [rsp+78h+aabbMax+4] }
        outExtBounds->maxs.v[1] = *(float *)&_XMM0;
        _XMM1 = LODWORD(outExtBounds->mins.v[2]);
        __asm { vminss  xmm0, xmm1, dword ptr [rsp+78h+aabbMin+8] }
        _XMM1 = LODWORD(aabbMax.v[2]);
        outExtBounds->mins.v[2] = *(float *)&_XMM0;
        __asm { vmaxss  xmm0, xmm1, dword ptr [rbx+14h] }
        outExtBounds->maxs.v[2] = *(float *)&_XMM0;
      }
    }
    else
    {
      outExtBounds->maxs.v[2] = outExtBounds->maxs.v[2] + 20.0;
    }
  }
}

/*
==============
CgVehicleEventSystem::GetWheelContactPointKeyframed
==============
*/
char CgVehicleEventSystem::GetWheelContactPointKeyframed(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, unsigned int windex, const CEntVehicleInfo *vinfo, vec3_t *outPointWs)
{
  __int128 v5; 
  __int64 v8; 
  float v10; 
  unsigned __int8 v12; 
  float time; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  unsigned int PhysicsBodyId; 
  tmat43_t<vec3_t> result; 
  vec4_t orientation; 
  __int128 v21; 

  v8 = windex;
  if ( windex >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 822, ASSERT_TYPE_ASSERT, "(windex < 12)", (const char *)&queryFormat, "windex < VEHICLE_MAX_WHEEL_COUNT") )
    __debugbreak();
  v10 = (float)vinfo->wheelFraction[v8] * 0.000015259022;
  if ( v10 >= 0.99900001 )
    return 0;
  v12 = vinfo->wheelBoneIndex[v8];
  if ( v12 < 0xFEu && CG_Vehicle_GetWorldBoneMatrix((const LocalClientNum_t)this->m_localClientNum, vehObj->m_entityNumber, v12, &result) )
  {
    time = vinfo->time;
    v21 = v5;
    LODWORD(v14) = COERCE_UNSIGNED_INT(time * v10) ^ _xmm;
    v15 = (float)((float)(time * 0.5) * 0.0) + result.m[3].v[1];
    outPointWs->v[0] = (float)((float)((float)(time * 0.5) * 0.0) + result.m[3].v[0]) + (float)(v14 * 0.0);
    v16 = v15 + (float)(v14 * 0.0);
    v17 = (float)((float)(time * 0.5) * 1.0) + result.m[3].v[2];
    outPointWs->v[1] = v16;
    outPointWs->v[2] = v17 + (float)(v14 * 1.0);
  }
  else if ( BgVehiclePhysics::IsPhysicsBodyIdValid(&vehObj->BgVehiclePhysics) )
  {
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(&vehObj->BgVehiclePhysics);
    Physics_GetRigidBodyTransform((const Physics_WorldId)vehObj->m_worldId, PhysicsBodyId, outPointWs, &orientation);
  }
  return 1;
}

/*
==============
CgVehicleEventSystem::Horn
==============
*/
void CgVehicleEventSystem::Horn(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, unsigned int sndHash, bool checkForTime)
{
  const dvar_t *v4; 
  signed int v8; 
  const SndAliasList *AliasFromId; 
  unsigned int v10; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v12; 
  int time; 
  int v14; 
  __int64 v15; 
  unsigned int v16; 
  const dvar_t *v17; 
  CgVehicleSystem *VehicleSystem; 
  __int64 m_entityNumber; 
  const vec4_t *v20; 
  float *v21; 
  __int128 v22; 
  float v25; 
  float v26; 
  int v28; 
  vec3_t out; 
  vec3_t vec; 
  ExtentBounds outExtBounds; 
  tmat33_t<vec3_t> axis; 

  v4 = DVARBOOL_vehicle_horn_enabled;
  if ( !DVARBOOL_vehicle_horn_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_horn_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    if ( !Physics_IsPredictiveWorld(vehObj->m_worldId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 705, ASSERT_TYPE_ASSERT, "(vehObj.IsClient())", (const char *)&queryFormat, "vehObj.IsClient()") )
      __debugbreak();
    if ( vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_HORN) )
    {
      v8 = vehObj->m_vehicleId - 1;
      if ( v8 < 0 )
        v8 = 0;
      if ( v8 >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 711, ASSERT_TYPE_ASSERT, "(vehicleIndex < (1 << 7))", (const char *)&queryFormat, "vehicleIndex < MAX_VEHICLES") )
        __debugbreak();
      if ( !sndHash || (AliasFromId = SND_FindAliasFromId(sndHash)) == NULL )
      {
        v10 = vehObj->GetSoundHorn((BgVehiclePhysics *)vehObj);
        if ( v10 )
          AliasFromId = SND_FindAliasFromId(v10);
        else
          AliasFromId = NULL;
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      v12 = DCONST_DVARINT_bg_vehEvHornShortTime;
      time = LocalClientGlobals->time;
      v14 = time - this->m_lastEventTimes[v8][0];
      if ( !DCONST_DVARINT_bg_vehEvHornShortTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEvHornShortTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( (!checkForTime || v14 >= v12->current.integer) && AliasFromId )
      {
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_vehicleStopHornBeforePlay, "bg_vehicleStopHornBeforePlay") )
        {
          v15 = vehObj->m_vehicleId - 1;
          if ( (int)v15 < 0 )
            v15 = 0i64;
          v16 = this->m_vehiclePlaybackIds[v15].ids[8];
          if ( SND_IsPlaybackIdPlaying(v16) )
            CgVehicleEventSystem::StopSoundDeferred(this, v16);
        }
        v17 = DVARBOOL_vehicle_horn_heli_tag;
        out = vec3_origin;
        if ( !DVARBOOL_vehicle_horn_heli_tag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_horn_heli_tag") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        if ( v17->current.enabled && vehObj->m_vehicleAnimProfile == VEH_ANIMPROFILE_LBRAVO && (VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum), m_entityNumber = (unsigned int)vehObj->m_entityNumber, v28 = 254, v20 = (const vec4_t *)VehicleSystem->PhysicsGetBoneLocalMatrix(VehicleSystem, m_entityNumber, scr_const.tag_light_1, &v28), (v21 = (float *)v20) != NULL) )
        {
          QuatToAxis(v20, &axis);
          vec.v[0] = (float)(5.0 * axis.m[0].v[0]) + v21[4];
          vec.v[1] = (float)(5.0 * axis.m[0].v[1]) + v21[5];
          vec.v[2] = (float)(5.0 * axis.m[0].v[2]) + v21[6];
          AxisTransformVec3((const tmat33_t<vec3_t> *)&vehObj->m_transform, &vec, &out);
        }
        else
        {
          GetVehicleAndTurretExtBounds((const LocalClientNum_t)this->m_localClientNum, vehObj, &outExtBounds);
          v22 = LODWORD(outExtBounds.maxs.v[2]);
          *(float *)&v22 = (float)((float)(outExtBounds.maxs.v[2] + outExtBounds.mins.v[2]) * 0.5) - outExtBounds.mins.v[2];
          _XMM2 = v22;
          __asm { vmaxss  xmm0, xmm2, xmm1 }
          v25 = (float)(*(float *)&_XMM0 * 2.0) + 5.0;
          v26 = v25 * vehObj->m_transform.m[2].v[1];
          out.v[0] = v25 * vehObj->m_transform.m[2].v[0];
          out.v[2] = v25 * vehObj->m_transform.m[2].v[2];
          out.v[1] = v26;
        }
        CgVehicleEventSystem::PlaySoundDeferred(this, AliasFromId, vehObj->m_entityNumber, v8, 8u, &out);
        this->m_lastEventTimes[v8][0] = time;
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::ImpactShakeCamOnSpeed
==============
*/
void CgVehicleEventSystem::ImpactShakeCamOnSpeed(CgVehicleEventSystem *this, float normalSpeed, float shakeScale)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v5; 
  double v6; 
  float v7; 
  const dvar_t *v8; 
  int v9; 
  vec3_t outOrg; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v5 = DCONST_DVARFLT_bg_vehShakeImpactThreshold;
  if ( !DCONST_DVARFLT_bg_vehShakeImpactThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehShakeImpactThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = I_fclamp(v5->current.value, 0.0, 1.0);
  if ( *(float *)&v6 < 0.99900001 && normalSpeed > *(float *)&v6 )
  {
    v7 = normalSpeed * normalSpeed;
    v8 = DCONST_DVARINT_bg_vehShakeImpactDur;
    if ( !DCONST_DVARINT_bg_vehShakeImpactDur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehShakeImpactDur") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = (int)(float)((float)v8->current.integer * v7);
    if ( v9 > 0 && (float)(v7 * shakeScale) > 0.001 )
      CG_StartShakeCamera(this->m_localClientNum, v7 * shakeScale, v9, &outOrg, SHAKECAM_RAD);
  }
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CgVehicleEventSystem::Init
==============
*/
void CgVehicleEventSystem::Init(CgVehicleEventSystem *this, LocalClientNum_t localClientNum)
{
  this->m_localClientNum = localClientNum;
  *(_DWORD *)&this->m_rumbleCarContinuous.swapTriggerRumblesOnLefty = 0;
  this->m_rumbleCarContinuous.name = "CarDrift";
  this->m_rumbleCarContinuous.duration = 1;
  this->m_rumbleCarContinuous.range = 1.0;
  this->m_rumbleCarContinuous.highRumbleGraph = &this->m_rumbleGraphCarContinuous;
  this->m_rumbleCarContinuous.lowRumbleGraph = &this->m_rumbleGraphCarContinuous;
  this->m_rumbleCarContinuous.leftTriggerRumbleGraph = &this->m_rumbleGraphCarContinuous;
  this->m_rumbleCarContinuous.rightTriggerRumbleGraph = &this->m_rumbleGraphCarContinuous;
  this->m_rumbleGraphCarContinuous.knotCount = 2;
  this->m_rumbleGraphCarContinuous.knots[0].v[0] = 0.0;
  this->m_rumbleGraphCarContinuous.knots[0].v[1] = 1.0;
  this->m_rumbleGraphCarContinuous.knots[1].v[0] = 1.0;
  this->m_rumbleGraphCarContinuous.knots[1].v[1] = 1.0;
  this->m_rumbleGraphCarContinuous.name = "CarDrift";
  memset_0(this->m_vehiclePlaybackIds, 0, sizeof(this->m_vehiclePlaybackIds));
  this->m_soundsCursor = 0;
}

/*
==============
CgVehicleEventSystem::IsFarFromPlayer
==============
*/
_BOOL8 CgVehicleEventSystem::IsFarFromPlayer(CgVehicleEventSystem *this, const vec3_t *posWs)
{
  cg_t *LocalClientGlobals; 
  float v4; 
  const dvar_t *v5; 
  float value; 
  vec3_t outOrg; 
  __int64 v9; 

  v9 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v4 = (float)((float)((float)(posWs->v[1] - outOrg.v[1]) * (float)(posWs->v[1] - outOrg.v[1])) + (float)((float)(posWs->v[0] - outOrg.v[0]) * (float)(posWs->v[0] - outOrg.v[0]))) + (float)((float)(posWs->v[2] - outOrg.v[2]) * (float)(posWs->v[2] - outOrg.v[2]));
  v5 = DCONST_DVARFLT_bg_vehFxKFMaxDist;
  if ( !DCONST_DVARFLT_bg_vehFxKFMaxDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFMaxDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  memset(&outOrg, 0, sizeof(outOrg));
  return v4 > (float)(value * value);
}

/*
==============
CgVehicleEventSystem::IsVfxHandleValid
==============
*/
bool CgVehicleEventSystem::IsVfxHandleValid(CgVehicleEventSystem *this, ParticleSystemHandle *phandle)
{
  ParticleSystemHandle v2; 
  __int64 v3; 
  bool result; 

  result = 0;
  if ( phandle )
  {
    v2 = *phandle;
    if ( *phandle )
    {
      v3 = ((__int64)(int)this->m_localClientNum << 12) + (v2 & 0xFFF);
      if ( g_particleSystemsGeneration[v3].__all32 == v2 && g_particleSystems[0][v3] >= (ParticleSystem *)0x1000 )
        return 1;
    }
  }
  return result;
}

/*
==============
CgVehicleEventSystem::LookUpEffectBySurface
==============
*/
FxCombinedDef *CgVehicleEventSystem::LookUpEffectBySurface(CgVehicleEventSystem *this, const VehiclePhysicsVfxGroup *vfxConfig, unsigned int surfaceData)
{
  FootstepVFX *surfaceEffects; 
  FxCombinedDef *result; 

  surfaceEffects = vfxConfig->surfaceEffects;
  if ( !vfxConfig->surfaceEffects || surfaceData >= 0x40 )
    return 0i64;
  result = &surfaceEffects->footstepVFX[surfaceData];
  if ( !result->particleSystemDef )
  {
    result = &surfaceEffects->footstepVFX[36];
    if ( !surfaceEffects->footstepVFX[36].particleSystemDef )
      return 0i64;
  }
  return result;
}

/*
==============
CgVehicleEventSystem::PlayFactorDependentSurfaceSound
==============
*/
int CgVehicleEventSystem::PlayFactorDependentSurfaceSound(CgVehicleEventSystem *this, float factor, const VehiclePhysicsSoundGroup *sndConfig, SndAliasList *snd, int entNum, const vec3_t *posWs, unsigned int surfData, unsigned int vehIndex)
{
  float threshold; 
  double v12; 
  float v14; 
  float v16; 

  threshold = sndConfig->threshold;
  if ( factor <= threshold || threshold >= 1.0 || !snd )
    return -1;
  v12 = I_fclamp((float)(factor - threshold) / (float)(1.0 - threshold), 0.0, 1.0);
  _XMM3 = LODWORD(sndConfig->vmin);
  v14 = *(float *)&v12;
  if ( COERCE_FLOAT(_XMM3 & _xmm) < 0.001 && COERCE_FLOAT(LODWORD(sndConfig->vmax) & _xmm) < 0.001 )
    _XMM3 = 0i64;
  __asm { vmaxss  xmm0, xmm3, xmm2 }
  v16 = (float)((float)(*(float *)&_XMM0 - *(float *)&_XMM3) * v14) + *(float *)&_XMM3;
  _XMM3 = LODWORD(sndConfig->pmin);
  if ( COERCE_FLOAT(_XMM3 & _xmm) < 0.001 && COERCE_FLOAT(LODWORD(sndConfig->pmax) & _xmm) < 0.001 )
    _XMM3 = LODWORD(FLOAT_1_0);
  __asm { vmaxss  xmm0, xmm3, xmm4 }
  return CgVehicleEventSystem::PlaySoundSurfaceDeferred(this, snd, entNum, surfData, posWs, v16, (float)((float)(*(float *)&_XMM0 - *(float *)&_XMM3) * v14) + *(float *)&_XMM3, 250, vehIndex, 9u);
}

/*
==============
CgVehicleEventSystem::PlayFactorDependentSurfaceVfx
==============
*/
void CgVehicleEventSystem::PlayFactorDependentSurfaceVfx(CgVehicleEventSystem *this, float factor, const VehiclePhysicsVfxGroup *vfxHard, const VehiclePhysicsVfxGroup *vfxLight, const vec3_t *posWs, const vec3_t *normal, unsigned int surfaceData, ParticleSystemHandle *phandle)
{
  const ParticleSystemDef *particleSystemDef; 
  FootstepVFX *surfaceEffects; 

  if ( factor <= vfxHard->threshold )
  {
    vfxHard = NULL;
    if ( factor > vfxLight->threshold )
      vfxHard = vfxLight;
  }
  particleSystemDef = NULL;
  if ( vfxHard )
  {
    surfaceEffects = vfxHard->surfaceEffects;
    if ( vfxHard->surfaceEffects )
    {
      if ( surfaceData >= 0x40 || (particleSystemDef = surfaceEffects->footstepVFX[surfaceData].particleSystemDef) == NULL && (particleSystemDef = surfaceEffects->footstepVFX[36].particleSystemDef) == NULL )
        particleSystemDef = NULL;
    }
  }
  CgVehicleEventSystem::PlayFactorDependentVfx(this, particleSystemDef, posWs, normal, phandle, NULL);
}

/*
==============
CgVehicleEventSystem::PlayFactorDependentVfx
==============
*/
void CgVehicleEventSystem::PlayFactorDependentVfx(CgVehicleEventSystem *this, const ParticleSystemDef *pDef, const vec3_t *posWs, const vec3_t *normal, ParticleSystemHandle *phandle, const vec3_t *invertAxis)
{
  __int64 m_localClientNum; 
  ParticleManager *v11; 
  ParticleSystemHandle v12; 
  __int64 v13; 
  ParticleSystemHandleImpl v14; 
  unsigned __int32 v15; 
  __int64 v16; 
  __int64 v17; 
  __int128 v19; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m256i v27; 
  __int128 v29; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  LocalClientNum_t v39; 
  __m128 v41; 
  __m128 v45; 
  __m128 v49; 
  cg_t *LocalClientGlobals; 
  __int128 v53; 
  __m128 v54; 
  __m128 v; 
  __m128 v56; 
  char outAxis[64]; 
  float4 emitterPos; 
  vector3 emitterOrientationMat; 
  __int128 v60; 

  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", m_localClientNum, 2) )
    __debugbreak();
  v11 = &g_particleManager[m_localClientNum];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1517, ASSERT_TYPE_ASSERT, "(particleMgr)", (const char *)&queryFormat, "particleMgr") )
    __debugbreak();
  if ( phandle )
  {
    v12 = *phandle;
    if ( *phandle && (v13 = ((__int64)(int)this->m_localClientNum << 12) + (v12 & 0xFFF), v14.__all32 = (unsigned int)g_particleSystemsGeneration[v13], v14.__all32 == v12) && g_particleSystems[0][v13] >= (ParticleSystem *)0x1000 )
    {
      v15 = 0;
      v16 = 0i64;
      if ( v14.__all32 == v12 )
        v15 = *phandle & 0xFFF;
      v17 = (__int64)(int)this->m_localClientNum << 12;
      if ( *((_QWORD *)&g_particleSystems[0][v17] + v15) >= 0x1000ui64 )
        v16 = *((_QWORD *)&g_particleSystems[0][v17] + v15);
      if ( v16 )
      {
        if ( !*(_BYTE *)(v16 + 559) || !pDef )
          goto LABEL_23;
        if ( !*(_QWORD *)(v16 + 400) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
          __debugbreak();
        if ( pDef == *(const ParticleSystemDef **)(v16 + 400) )
        {
          HIDWORD(v53) = 0;
          v19 = v53;
          *(float *)&v19 = posWs->v[0];
          _XMM3 = v19;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
            vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
          }
          *(_OWORD *)(v16 + 48) = _XMM3;
          v22 = *(__m128 *)(v16 + 32);
          v23 = _mm_shuffle_ps(v22, *(__m128 *)(v16 + 48), 68);
          v24 = _mm_shuffle_ps(v22, *(__m128 *)(v16 + 48), 238);
          v25 = _mm_shuffle_ps(*(__m128 *)v16, *(__m128 *)(v16 + 16), 68);
          v26 = _mm_shuffle_ps(*(__m128 *)v16, *(__m128 *)(v16 + 16), 238);
          *(__m128 *)&outAxis[16] = _mm_shuffle_ps(v25, v23, 221);
          *(__m128 *)outAxis = _mm_shuffle_ps(v25, v23, 136);
          *(__m128 *)&outAxis[32] = _mm_shuffle_ps(v26, v24, 136);
          *(__m128 *)&outAxis[48] = _mm_shuffle_ps(v26, v24, 221);
          v27 = *(__m256i *)&outAxis[32];
          *(__m256i *)(v16 + 64) = *(__m256i *)outAxis;
          *(__m256i *)(v16 + 96) = v27;
        }
        else
        {
LABEL_23:
          CgVehicleEventSystem::StopVfx(this, v11, phandle);
        }
        return;
      }
    }
    else if ( pDef )
    {
      HIDWORD(v53) = 0;
      v29 = v53;
      *(float *)&v29 = posWs->v[0];
      _XMM3 = v29;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
      }
      v54 = _XMM3;
      emitterPos.v = _XMM3;
      BG_AxisFromForward(normal, &identityMatrix33.m[2], (tmat33_t<vec3_t> *)outAxis);
      if ( invertAxis )
      {
        v32 = invertAxis->v[1];
        v33 = *(float *)outAxis * invertAxis->v[0];
        v34 = *(float *)&outAxis[8] * invertAxis->v[0];
        v35 = *(float *)&outAxis[4] * invertAxis->v[0];
        v36 = invertAxis->v[2];
        v37 = *(float *)&outAxis[12] * v32;
        v38 = *(float *)&outAxis[24] * v36;
        *(float *)&outAxis[32] = *(float *)&outAxis[32] * v36;
        *(float *)outAxis = v33;
        *(float *)&outAxis[4] = v35;
        *(float *)&outAxis[8] = v34;
        *(float *)&outAxis[12] = *(float *)&outAxis[12] * v32;
        *(float *)&outAxis[16] = *(float *)&outAxis[16] * v32;
        *(float *)&outAxis[20] = *(float *)&outAxis[20] * v32;
        *(float *)&outAxis[24] = *(float *)&outAxis[24] * v36;
        *(float *)&outAxis[28] = v36 * *(float *)&outAxis[28];
      }
      else
      {
        v38 = *(float *)&outAxis[24];
        v37 = *(float *)&outAxis[12];
        v33 = *(float *)outAxis;
      }
      v39 = this->m_localClientNum;
      v54.m128_i32[3] = 0;
      v41 = v54;
      v41.m128_f32[0] = v33;
      _XMM0 = v41;
      __asm
      {
        vinsertps xmm0, xmm0, xmm5, 10h
        vinsertps xmm0, xmm0, xmm6, 20h ; ' '
      }
      v = _XMM0.v;
      emitterOrientationMat.x = (float4)_XMM0.v;
      v.m128_i32[3] = 0;
      v45 = v;
      v45.m128_f32[0] = v37;
      _XMM0 = v45;
      __asm
      {
        vinsertps xmm0, xmm0, xmm8, 10h
        vinsertps xmm0, xmm0, xmm3, 20h ; ' '
      }
      v56 = _XMM0.v;
      emitterOrientationMat.y = (float4)_XMM0.v;
      v56.m128_i32[3] = 0;
      v49 = v56;
      v49.m128_f32[0] = v38;
      _XMM0 = v49;
      __asm
      {
        vinsertps xmm0, xmm0, xmm1, 10h
        vinsertps xmm0, xmm0, xmm2, 20h ; ' '
      }
      emitterOrientationMat.z = (float4)_XMM0.v;
      v60 = *(_OWORD *)&g_one.v & *(_OWORD *)&g_keepW.v;
      LocalClientGlobals = CG_GetLocalClientGlobals(v39);
      *phandle = ParticleManager::AddSystem(&g_particleManager[m_localClientNum], this->m_localClientNum, pDef, &emitterPos, &emitterOrientationMat, LocalClientGlobals->time, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
      return;
    }
    *phandle = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
}

/*
==============
CgVehicleEventSystem::PlaySoundDeferred
==============
*/
__int64 CgVehicleEventSystem::PlaySoundDeferred(CgVehicleEventSystem *this, const SndAliasList *snd, int entNum, unsigned int vehIndex, unsigned int pbentryId, const vec3_t *offset)
{
  unsigned __int32 v11; 
  unsigned __int64 v12; 
  centity_t *Entity; 
  vec3_t outOrigin; 

  if ( !snd )
    return 0xFFFFFFFFi64;
  if ( this->m_lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1785, ASSERT_TYPE_ASSERT, "( m_lock == 0 )", "Can't call CgVehicleEventSystem::PlaySoundDeferred() while ProcessEventsMainThread() is running") )
    __debugbreak();
  if ( (((_BYTE)this + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_soundsCursor) )
    __debugbreak();
  v11 = _InterlockedExchangeAdd(&this->m_soundsCursor, 1u);
  if ( v11 >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1788, ASSERT_TYPE_ASSERT, "( index < MAX_DEFERRED_SOUNDS )", "Not enough room for a new event. Increase MAX_DEFERRED_SOUNDS ?") )
    __debugbreak();
  if ( vehIndex >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1790, ASSERT_TYPE_ASSERT, "(vehIndex < (1 << 7))", (const char *)&queryFormat, "vehIndex < MAX_VEHICLES", -2i64) )
    __debugbreak();
  v12 = (unsigned __int64)v11 << 6;
  *(CgVehicleEventSystem::DeferredSound::DeferredSoundType *)((char *)&this->m_sounds[0].playType + v12) = DST_NORMAL;
  *(const SndAliasList **)((char *)&this->m_sounds[0].snd + v12) = snd;
  *(int *)((char *)&this->m_sounds[0].entnum + v12) = entNum;
  *(unsigned int *)((char *)&this->m_sounds[0].u.vehicleIndex + v12) = vehIndex;
  *(CgVehicleEventSystem::PlaybackId::IdType *)((char *)&this->m_sounds[0].playbackIdType + v12) = pbentryId;
  *(int *)((char *)&this->m_sounds[0].time + v12) = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
  *(&this->m_sounds[0].debug + v12) = 1;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  *(float *)((char *)this->m_sounds[0].origin.v + v12) = outOrigin.v[0] + offset->v[0];
  *(float *)((char *)&this->m_sounds[0].origin.v[1] + v12) = outOrigin.v[1] + offset->v[1];
  *(float *)((char *)&this->m_sounds[0].origin.v[2] + v12) = outOrigin.v[2] + offset->v[2];
  memset(&outOrigin, 0, sizeof(outOrigin));
  return v11;
}

/*
==============
CgVehicleEventSystem::PlaySoundSurfaceDeferred
==============
*/
__int64 CgVehicleEventSystem::PlaySoundSurfaceDeferred(CgVehicleEventSystem *this, const SndAliasList *snd, int entNum, unsigned int surfaceData, const vec3_t *origin, float vol, float pitch, int fadeTime, unsigned int vehIndex, unsigned int pbEntryId)
{
  __int64 result; 
  unsigned __int32 v15; 
  unsigned __int64 v16; 
  float v17; 
  int time; 

  if ( !snd )
    return 0xFFFFFFFFi64;
  if ( this->m_lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1817, ASSERT_TYPE_ASSERT, "( m_lock == 0 )", "Can't call CgVehicleEventSystem::PlaySoundSurfaceDeferred() while ProcessEventsMainThread() is running") )
    __debugbreak();
  if ( (((_BYTE)this + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_soundsCursor) )
    __debugbreak();
  v15 = _InterlockedExchangeAdd(&this->m_soundsCursor, 1u);
  if ( v15 >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1820, ASSERT_TYPE_ASSERT, "( index < MAX_DEFERRED_SOUNDS )", "Not enough room for a new event. Increase MAX_DEFERRED_SOUNDS ?") )
    __debugbreak();
  if ( vehIndex >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1822, ASSERT_TYPE_ASSERT, "(vehIndex < (1 << 7))", (const char *)&queryFormat, "vehIndex < MAX_VEHICLES") )
    __debugbreak();
  v16 = (unsigned __int64)v15 << 6;
  *(CgVehicleEventSystem::DeferredSound::DeferredSoundType *)((char *)&this->m_sounds[0].playType + v16) = DST_SURFACE;
  *(int *)((char *)&this->m_sounds[0].entnum + v16) = entNum;
  *(const SndAliasList **)((char *)&this->m_sounds[0].snd + v16) = snd;
  *(double *)((char *)this->m_sounds[0].origin.v + v16) = *(double *)origin->v;
  v17 = origin->v[2];
  *(int *)((char *)&this->m_sounds[0].fadeTime + v16) = fadeTime;
  *(CgVehicleEventSystem::PlaybackId::IdType *)((char *)&this->m_sounds[0].playbackIdType + v16) = pbEntryId;
  *(float *)((char *)&this->m_sounds[0].vol + v16) = vol;
  *(float *)((char *)&this->m_sounds[0].pitch + v16) = pitch;
  *(float *)((char *)&this->m_sounds[0].origin.v[2] + v16) = v17;
  *(unsigned int *)((char *)&this->m_sounds[0].surface + v16) = surfaceData;
  *(unsigned int *)((char *)&this->m_sounds[0].u.vehicleIndex + v16) = vehIndex;
  time = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
  result = v15;
  *(int *)((char *)&this->m_sounds[0].time + v16) = time;
  *(&this->m_sounds[0].debug + v16) = 0;
  return result;
}

/*
==============
CgVehicleEventSystem::PlaySpeedDependentSurfaceSound
==============
*/
int CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehiclePhysicsSoundGroup *sndHard, const VehiclePhysicsSoundGroup *sndLight, SndAliasList *sndHardAlias, SndAliasList *sndLightAlias, const vec3_t *posWs, unsigned int surfaceData, float mult, unsigned int pbidType)
{
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(&vehObj->BgVehiclePhysics, &vehObj->m_linearVelocityWs, &outVelLs);
  return CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, fsqrt((float)(outVelLs.v[0] * outVelLs.v[0]) + (float)(outVelLs.v[1] * outVelLs.v[1])) * 0.056818184, vehObj, sndHard, sndLight, sndHardAlias, sndLightAlias, posWs, surfaceData, mult, pbidType);
}

/*
==============
CgVehicleEventSystem::PlaySpeedDependentSurfaceSound
==============
*/
int CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(CgVehicleEventSystem *this, float planeMPH, const BgVehiclePhysicsGround *vehObj, const VehiclePhysicsSoundGroup *sndHard, const VehiclePhysicsSoundGroup *sndLight, SndAliasList *sndHardAlias, SndAliasList *sndLightAlias, const vec3_t *posWs, unsigned int surfaceData, float mult, unsigned int pbidType)
{
  unsigned int *v11; 
  double TopSpeedForward; 
  float v16; 
  float v20; 
  signed int vehIndex; 

  v11 = (unsigned int *)sndHard;
  if ( planeMPH <= sndHard->threshold )
  {
    if ( planeMPH <= sndLight->threshold )
      return -1;
    sndHardAlias = sndLightAlias;
    v11 = (unsigned int *)sndLight;
  }
  if ( !sndHardAlias || !v11 )
    return -1;
  TopSpeedForward = BgVehiclePhysics::GetTopSpeedForward(&vehObj->BgVehiclePhysics);
  v16 = (float)(planeMPH - sndLight->threshold) / (float)((float)(*(float *)&TopSpeedForward * 0.056818184) - sndLight->threshold);
  I_fclamp(v16, 0.0, 1.0);
  _XMM3 = v11[3];
  if ( COERCE_FLOAT(_XMM3 & _xmm) < 0.001 && COERCE_FLOAT(v11[4] & _xmm) < 0.001 )
    _XMM3 = 0i64;
  _XMM4 = v11[5];
  __asm { vmaxss  xmm0, xmm3, xmm2 }
  v20 = (float)((float)((float)(*(float *)&_XMM0 - *(float *)&_XMM3) * v16) + *(float *)&_XMM3) * mult;
  if ( COERCE_FLOAT(_XMM4 & _xmm) < 0.001 && COERCE_FLOAT(v11[6] & _xmm) < 0.001 )
    _XMM4 = LODWORD(FLOAT_1_0);
  vehIndex = vehObj->m_vehicleId - 1;
  if ( vehIndex < 0 )
    vehIndex = 0;
  __asm { vmaxss  xmm0, xmm4, xmm1 }
  return CgVehicleEventSystem::PlaySoundSurfaceDeferred(this, sndHardAlias, vehObj->m_entityNumber, surfaceData, posWs, v20, (float)((float)(*(float *)&_XMM0 - *(float *)&_XMM4) * v16) + *(float *)&_XMM4, 250, vehIndex, pbidType);
}

/*
==============
CgVehicleEventSystem::PlaySpeedDependentSurfaceSoundAircraft
==============
*/
int CgVehicleEventSystem::PlaySpeedDependentSurfaceSoundAircraft(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, const VehiclePhysicsSoundGroup *sndHard, const VehiclePhysicsSoundGroup *sndLight, SndAliasList *sndHardAlias, SndAliasList *sndLightAlias, const vec3_t *posWs, unsigned int surfaceData, float mult, unsigned int pbidType)
{
  unsigned int *v11; 
  float v12; 
  double TopSpeedForward; 
  float v17; 
  float v21; 
  signed int vehIndex; 

  v11 = (unsigned int *)sndHard;
  v12 = fsqrt((float)((float)(vehObj->m_linearVelocityWs.v[0] * vehObj->m_linearVelocityWs.v[0]) + (float)(vehObj->m_linearVelocityWs.v[1] * vehObj->m_linearVelocityWs.v[1])) + (float)(vehObj->m_linearVelocityWs.v[2] * vehObj->m_linearVelocityWs.v[2])) * 0.056818184;
  if ( v12 <= sndHard->threshold )
  {
    if ( v12 <= sndLight->threshold )
      return -1;
    sndHardAlias = sndLightAlias;
    v11 = (unsigned int *)sndLight;
  }
  if ( !sndHardAlias || !v11 )
    return -1;
  TopSpeedForward = BgVehiclePhysics::GetTopSpeedForward((BgVehiclePhysics *)vehObj);
  v17 = (float)(v12 - sndLight->threshold) / (float)((float)(*(float *)&TopSpeedForward * 0.056818184) - sndLight->threshold);
  I_fclamp(v17, 0.0, 1.0);
  _XMM3 = v11[3];
  if ( COERCE_FLOAT(_XMM3 & _xmm) < 0.001 && COERCE_FLOAT(v11[4] & _xmm) < 0.001 )
    _XMM3 = 0i64;
  _XMM4 = v11[5];
  __asm { vmaxss  xmm0, xmm3, xmm2 }
  v21 = (float)((float)((float)(*(float *)&_XMM0 - *(float *)&_XMM3) * v17) + *(float *)&_XMM3) * mult;
  if ( COERCE_FLOAT(_XMM4 & _xmm) < 0.001 && COERCE_FLOAT(v11[6] & _xmm) < 0.001 )
    _XMM4 = LODWORD(FLOAT_1_0);
  vehIndex = vehObj->m_vehicleId - 1;
  if ( vehIndex < 0 )
    vehIndex = 0;
  __asm { vmaxss  xmm0, xmm4, xmm1 }
  return CgVehicleEventSystem::PlaySoundSurfaceDeferred(this, sndHardAlias, vehObj->m_entityNumber, surfaceData, posWs, v21, (float)((float)(*(float *)&_XMM0 - *(float *)&_XMM4) * v17) + *(float *)&_XMM4, 250, vehIndex, pbidType);
}

/*
==============
CgVehicleEventSystem::ProcessDeferredEventsInternal
==============
*/
void CgVehicleEventSystem::ProcessDeferredEventsInternal(CgVehicleEventSystem *this)
{
  int v2; 
  unsigned int v3; 
  CgSoundSystem *SoundSystem; 
  int v5; 
  unsigned __int64 v6; 
  char *v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  _QWORD *v14; 
  double v15; 
  double v16; 
  const char *v17; 
  const char *v18; 
  const char **v19; 
  vec3_t *p_point; 
  float v21; 
  float v22; 
  float v23; 
  const char *v24; 
  const SndAliasList *v25; 
  unsigned int v26; 
  const dvar_t *v27; 
  const char **v28; 
  float v29; 
  float v30; 
  float v31; 
  __int64 v32; 
  char *fmt; 
  __int64 duration; 
  __int64 v35; 
  __int64 v36; 
  float v37; 
  vec3_t point; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1707, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
  v5 = 9;
  if ( this->m_soundsCursor )
  {
    while ( 1 )
    {
      v6 = (unsigned __int64)v3 << 6;
      v7 = (char *)this->m_sounds + v6;
      v8 = *(CgVehicleEventSystem::DeferredSound::DeferredSoundType *)((char *)&this->m_sounds[0].playType + v6);
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              SND_StopSoundAliasById(*(unsigned int *)((char *)&this->m_sounds[0].u.vehicleIndex + v6));
          }
          else
          {
            CgVehicleEventSystem::StopAllSoundsOnVehicle(this, *(int *)((char *)&this->m_sounds[0].entnum + v6), *(unsigned int *)((char *)&this->m_sounds[0].u.vehicleIndex + v6));
          }
        }
        else if ( *(int *)((char *)&this->m_sounds[0].time + v6) != v2 || *(CgVehicleEventSystem::PlaybackId::IdType *)((char *)&this->m_sounds[0].playbackIdType + v6) != v5 )
        {
          *(float *)&v35 = *(float *)((char *)&this->m_sounds[0].pitch + v6);
          *(float *)&duration = *(float *)((char *)&this->m_sounds[0].vol + v6);
          LODWORD(fmt) = *(unsigned int *)((char *)&this->m_sounds[0].surface + v6);
          v11 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, char *, _QWORD, char *, __int64, __int64, _DWORD, __int64, float, _QWORD, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, *(unsigned int *)((char *)&this->m_sounds[0].entnum + v6), (char *)this->m_sounds + v6, *(const SndAliasList **)((char *)&this->m_sounds[0].snd + v6), fmt, duration, v35, *(int *)((char *)&this->m_sounds[0].fadeTime + v6), v36, COERCE_FLOAT(LODWORD(v37)), *(_QWORD *)point.v, LODWORD(point.v[2]));
          v12 = DCONST_DVARINT_bg_vehicleDebug;
          v13 = v11;
          v2 = *((_DWORD *)v7 + 12);
          v5 = *((_DWORD *)v7 + 14);
          if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v12);
          if ( v12->current.integer == 2 )
          {
            if ( v7[60] )
            {
              v14 = (_QWORD *)*((_QWORD *)v7 + 4);
              if ( v14 )
              {
                if ( *v14 )
                {
                  v15 = *((float *)v7 + 5);
                  v16 = *((float *)v7 + 4);
                  v17 = Com_SurfaceTypeToName(*((_DWORD *)v7 + 11));
                  v18 = j_va("%s (v:%.2f / p:%.2f)", v17, v16, v15);
                  CG_DebugString((const vec3_t *)v7, &colorBlue, 0.60000002, v18, 0, 300);
                  v19 = (const char **)*((_QWORD *)v7 + 4);
                  p_point = (vec3_t *)&v36;
                  v21 = *((float *)v7 + 1);
                  *(float *)&v36 = *(float *)v7 - (float)(10.0 * 0.0);
                  v22 = v21 - (float)(10.0 * 0.0);
                  v23 = *((float *)v7 + 2);
                  *((float *)&v36 + 1) = v22;
                  v37 = v23 - (float)(10.0 * 1.0);
                  v24 = *v19;
                  goto LABEL_32;
                }
              }
            }
          }
          goto LABEL_33;
        }
      }
      else
      {
        v25 = *(const SndAliasList **)((char *)&this->m_sounds[0].snd + v6);
        if ( v25 && (*(int *)((char *)&this->m_sounds[0].time + v6) != v2 || *(CgVehicleEventSystem::PlaybackId::IdType *)((char *)&this->m_sounds[0].playbackIdType + v6) != v5) )
        {
          v26 = CgSoundSystem::PlaySoundAlias(SoundSystem, *(int *)((char *)&this->m_sounds[0].entnum + v6), (const vec3_t *)((char *)&this->m_sounds[0].origin + v6), v25);
          v27 = DCONST_DVARINT_bg_vehicleDebug;
          v13 = v26;
          v2 = *((_DWORD *)v7 + 12);
          v5 = *((_DWORD *)v7 + 14);
          if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v27);
          if ( v27->current.integer == 2 )
          {
            if ( v7[60] )
            {
              v28 = (const char **)*((_QWORD *)v7 + 4);
              if ( v28 )
              {
                v24 = *v28;
                if ( *v28 )
                {
                  v29 = *((float *)v7 + 1);
                  point.v[0] = *(float *)v7 - (float)(10.0 * 0.0);
                  v30 = v29 - (float)(10.0 * 0.0);
                  v31 = *((float *)v7 + 2);
                  point.v[1] = v30;
                  p_point = &point;
                  point.v[2] = v31 - (float)(10.0 * 1.0);
LABEL_32:
                  CG_DebugString(p_point, &colorBlueHeat, 0.40000001, v24, 0, 300);
                  CG_DebugSphere((const vec3_t *)v7, 3.0, &colorMagenta, 1, 300);
                }
              }
            }
          }
LABEL_33:
          if ( v13 )
          {
            v32 = *((int *)v7 + 14);
            if ( (int)v32 < 9 )
            {
              this->m_vehiclePlaybackIds[*((unsigned int *)v7 + 13)].ids[v32] = v13;
              this->m_vehiclePlaybackIds[*((unsigned int *)v7 + 13)].surfData = *((_DWORD *)v7 + 11);
            }
          }
        }
      }
      if ( ++v3 >= this->m_soundsCursor )
      {
        this->m_soundsCursor = 0;
        return;
      }
    }
  }
  this->m_soundsCursor = 0;
}

/*
==============
CgVehicleEventSystem::RCPlaneBoost
==============
*/
void CgVehicleEventSystem::RCPlaneBoost(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, float shakeScale, int shakeDur, float shakeRad, const SndAliasList *snd)
{
  cg_t *LocalClientGlobals; 
  __int64 v10; 
  signed int v11; 
  vec3_t outOrg; 

  if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 97, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj", -2i64) )
    __debugbreak();
  if ( !vehObj->m_pmoveObject )
  {
    if ( shakeScale > 0.001 && shakeDur > 0 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_StartShakeCamera(this->m_localClientNum, shakeScale, shakeDur, &outOrg, shakeRad);
      memset(&outOrg, 0, sizeof(outOrg));
    }
    if ( snd )
    {
      v10 = vehObj->m_vehicleId - 1;
      if ( (int)v10 < 0 )
        v10 = 0i64;
      if ( !SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v10].ids[0]) )
      {
        v11 = vehObj->m_vehicleId - 1;
        if ( v11 < 0 )
          v11 = 0;
        CgVehicleEventSystem::PlaySoundDeferred(this, snd, vehObj->m_entityNumber, v11, 0, &vec3_origin);
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::StopAllSoundsOnVehicle
==============
*/
void CgVehicleEventSystem::StopAllSoundsOnVehicle(CgVehicleEventSystem *this, int entNum, unsigned int vehIndex)
{
  __int64 v4; 
  CgSoundSystem *SoundSystem; 
  __int64 v7; 

  v4 = vehIndex;
  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
  CgSoundSystem::StopSoundsOnEnt(SoundSystem, entNum);
  v7 = v4;
  *(_QWORD *)this->m_vehiclePlaybackIds[v7].ids = 0i64;
  *(_QWORD *)&this->m_vehiclePlaybackIds[v7].ids[2] = 0i64;
  *(_QWORD *)&this->m_vehiclePlaybackIds[v7].ids[4] = 0i64;
  *(_QWORD *)&this->m_vehiclePlaybackIds[v7].ids[6] = 0i64;
  *(_QWORD *)&this->m_vehiclePlaybackIds[v7].ids[8] = 0i64;
}

/*
==============
CgVehicleEventSystem::StopAllVfxOnVehicle
==============
*/
void CgVehicleEventSystem::StopAllVfxOnVehicle(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  __int64 m_localClientNum; 
  __int64 v3; 
  __int64 v6; 
  ParticleManager *i; 
  __int64 v8; 
  ParticleSystemHandle *Impact; 
  __int64 v10; 
  ParticleSystemHandle *CamoTailLight; 
  ParticleSystemHandle *CamoDoorSmoke; 

  m_localClientNum = this->m_localClientNum;
  v3 = 2i64;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", m_localClientNum, 2) )
    __debugbreak();
  v6 = 0i64;
  for ( i = &g_particleManager[m_localClientNum]; (unsigned int)v6 < vehObj->m_wheelCount; v6 = (unsigned int)(v6 + 1) )
  {
    CgVehicleEventSystem::StopVfx(this, i, &vehObj->m_vfx.Driving[v6]);
    CgVehicleEventSystem::StopVfx(this, i, &vehObj->m_vfx.Drifting[v6]);
    CgVehicleEventSystem::StopVfx(this, i, &vehObj->m_vfx.Skidding[v6]);
    CgVehicleEventSystem::StopVfx(this, i, &vehObj->m_vfx.Braking[v6]);
  }
  v8 = 4i64;
  Impact = vehObj->m_vfx.Impact;
  v10 = 4i64;
  do
  {
    CgVehicleEventSystem::StopVfx(this, i, Impact++);
    --v10;
  }
  while ( v10 );
  CamoTailLight = vehObj->m_vfx.CamoTailLight;
  do
  {
    CgVehicleEventSystem::StopVfx(this, i, CamoTailLight++);
    --v3;
  }
  while ( v3 );
  CamoDoorSmoke = vehObj->m_vfx.CamoDoorSmoke;
  do
  {
    CgVehicleEventSystem::StopVfx(this, i, CamoDoorSmoke++);
    --v8;
  }
  while ( v8 );
}

/*
==============
CgVehicleEventSystem::StopSoundDeferred
==============
*/
void CgVehicleEventSystem::StopSoundDeferred(CgVehicleEventSystem *this, unsigned int playbackId)
{
  unsigned __int32 v4; 
  char *v5; 

  if ( this->m_lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1866, ASSERT_TYPE_ASSERT, "( m_lock == 0 )", "Can't call CgVehicleEventSystem::StopSoundDeferred() while ProcessEventsMainThread() is running") )
    __debugbreak();
  if ( (((_BYTE)this + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_soundsCursor) )
    __debugbreak();
  v4 = _InterlockedExchangeAdd(&this->m_soundsCursor, 1u);
  if ( v4 >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1869, ASSERT_TYPE_ASSERT, "( index < MAX_DEFERRED_SOUNDS )", "Not enough room for a new event. Increase MAX_DEFERRED_SOUNDS ?") )
    __debugbreak();
  v5 = (char *)this + 64 * (unsigned __int64)v4;
  *((_DWORD *)v5 + 135) = 3;
  *((_DWORD *)v5 + 145) = playbackId;
  *((_DWORD *)v5 + 144) = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
  v5[588] = 0;
}

/*
==============
CgVehicleEventSystem::StopSoundsOnEntDeferred
==============
*/
void CgVehicleEventSystem::StopSoundsOnEntDeferred(CgVehicleEventSystem *this, int entNum, unsigned int vehIndex)
{
  unsigned __int32 v6; 
  char *v7; 

  if ( this->m_lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1846, ASSERT_TYPE_ASSERT, "( m_lock == 0 )", "Can't call CgVehicleEventSystem::StopSoundsOnEntDeferred() while ProcessEventsMainThread() is running") )
    __debugbreak();
  if ( (((_BYTE)this + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_soundsCursor) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(&this->m_soundsCursor, 1u);
  if ( v6 >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1849, ASSERT_TYPE_ASSERT, "( index < MAX_DEFERRED_SOUNDS )", "Not enough room for a new event. Increase MAX_DEFERRED_SOUNDS ?") )
    __debugbreak();
  if ( entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1851, ASSERT_TYPE_ASSERT, "(entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entNum != ENTITYNUM_NONE") )
    __debugbreak();
  v7 = (char *)this + 64 * (unsigned __int64)v6;
  *((_DWORD *)v7 + 135) = 2;
  *((_DWORD *)v7 + 142) = entNum;
  *((_DWORD *)v7 + 145) = vehIndex;
  *((_DWORD *)v7 + 144) = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
  v7[588] = 0;
}

/*
==============
CgVehicleEventSystem::StopVfx
==============
*/
void CgVehicleEventSystem::StopVfx(CgVehicleEventSystem *this, ParticleManager *pmgr, ParticleSystemHandle *phandle)
{
  ParticleSystemHandle v6; 
  __int64 v7; 

  if ( !pmgr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1215, ASSERT_TYPE_ASSERT, "(pmgr)", (const char *)&queryFormat, "pmgr") )
    __debugbreak();
  if ( phandle )
  {
    v6 = *phandle;
    if ( *phandle )
    {
      v7 = ((__int64)(int)this->m_localClientNum << 12) + (v6 & 0xFFF);
      if ( g_particleSystemsGeneration[v7].__all32 == v6 && g_particleSystems[0][v7] >= (ParticleSystem *)0x1000 )
      {
        ParticleManager::StopSystem(pmgr, v6);
        *phandle = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::TankFire
==============
*/
void CgVehicleEventSystem::TankFire(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj)
{
  cg_t *LocalClientGlobals; 
  vec3_t outOrg; 

  if ( Physics_IsPredictiveWorld(vehObj->m_worldId) && vehObj->m_playerControlled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    CG_StartShakeCamera(this->m_localClientNum, 0.15000001, 800, &outOrg, SHAKECAM_RAD);
    memset(&outOrg, 0, sizeof(outOrg));
  }
}

/*
==============
CgVehicleEventSystem::VehicleReset
==============
*/
void CgVehicleEventSystem::VehicleReset(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj)
{
  signed int v2; 
  int m_entityNumber; 

  v2 = vehObj->m_vehicleId - 1;
  m_entityNumber = vehObj->m_entityNumber;
  if ( v2 < 0 )
    v2 = 0;
  CgVehicleEventSystem::StopAllSoundsOnVehicle(this, m_entityNumber, v2);
  if ( vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_GROUND_VEHICLE) )
    CgVehicleEventSystem::StopAllVfxOnVehicle(this, (const BgVehiclePhysicsGround *)vehObj);
}

