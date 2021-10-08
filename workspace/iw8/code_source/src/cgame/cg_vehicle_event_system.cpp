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
  const FlightDynamics::SoundData *SoundData; 
  const FlightDynamics::SoundData *v21; 
  unsigned int RotorImpactHard; 
  const SndAliasList *AliasFromId; 
  unsigned int RotorImpactLight; 
  char v25; 
  bool v26; 
  SndAliasList *v27; 
  __int64 v29; 
  unsigned int ImpactLight; 
  char v49; 
  signed int vehIndex; 
  HelicopterDynamics::VfxData *MutableVfxData; 
  __int64 AvailableVfxSlot; 
  float vol; 
  float v79; 

  _RSI = (BgVehiclePhysics *)vehObj;
  if ( !Physics_IsPredictiveWorld(vehObj->m_worldId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 379, ASSERT_TYPE_ASSERT, "(vehObj.IsClient())", (const char *)&queryFormat, "vehObj.IsClient()") )
    __debugbreak();
  if ( _RSI->SupportsFeature(_RSI, VPFEAT_COLLISION_AUDIO) && _RSI->SupportsFeature(_RSI, VPFEAT_VDX_VEHICLE) )
  {
    CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    m_vehicleDefIndex = _RSI->m_vehicleDefIndex;
    if ( m_vehicleDefIndex < 0x80 )
    {
      _RAX = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
      _R14 = _RAX;
      if ( _RAX )
      {
        __asm
        {
          vmovaps [rsp+0C8h+var_38], xmm6
          vmovss  xmm6, cs:__real@3f800000
          vcomiss xmm6, dword ptr [rax+350h]
          vmovaps [rsp+0C8h+var_58], xmm8
          vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovaps [rsp+0C8h+var_68], xmm9
          vmovss  xmm9, cs:__real@3a83126f
          vmovaps [rsp+0C8h+var_78], xmm10
          vmovaps xmm10, xmm6
          vmovaps [rsp+0C8h+var_48], xmm7
        }
        SoundData = FlightDynamics::GetSoundData((FlightDynamics *)_RSI);
        v21 = SoundData;
        if ( isRotorImpact )
        {
          RotorImpactHard = SoundData->RotorImpactHard;
          if ( RotorImpactHard )
            AliasFromId = SND_FindAliasFromId(RotorImpactHard);
          else
            AliasFromId = NULL;
          RotorImpactLight = v21->RotorImpactLight;
          v25 = 0;
          v26 = RotorImpactLight == 0;
          if ( RotorImpactLight )
            v27 = SND_FindAliasFromId(RotorImpactLight);
          else
            v27 = NULL;
          _RCX = 984i64;
          v29 = 1016i64;
        }
        else
        {
          if ( SoundData->ImpactHard )
            AliasFromId = SND_FindAliasFromId(SoundData->ImpactHard);
          else
            AliasFromId = NULL;
          ImpactLight = v21->ImpactLight;
          v25 = 0;
          v26 = ImpactLight == 0;
          if ( ImpactLight )
            v27 = SND_FindAliasFromId(ImpactLight);
          else
            v27 = NULL;
          _RCX = 816i64;
          v29 = 856i64;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+1A4h]
          vmovss  xmm2, dword ptr [rsi+1A8h]
          vmovss  xmm3, dword ptr [rsi+1ACh]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm0, xmm2, xmm2
          vmulss  xmm7, xmm0, cs:__real@3d68ba2f
          vcomiss xmm7, dword ptr [r14+rcx+8]
        }
        _RBX = (char *)_R14 + _RCX;
        _R15 = (char *)_R14 + v29;
        if ( v25 | v26 )
        {
          __asm { vcomiss xmm7, dword ptr [r15+8] }
          if ( v25 | v26 )
          {
LABEL_37:
            __asm
            {
              vmovaps xmm7, [rsp+0C8h+var_48]
              vmovaps xmm10, [rsp+0C8h+var_78]
              vmovaps xmm9, [rsp+0C8h+var_68]
              vmovaps xmm8, [rsp+0C8h+var_58]
              vmovaps xmm6, [rsp+0C8h+var_38]
            }
            if ( isRotorImpact && _RSI->m_vehicleAnimProfile == VEH_ANIMPROFILE_LBRAVO && (_R14->vehiclePhysicsDef.vfxImpactHard.surfaceEffects || _R14->vehiclePhysicsDef.vfxImpactLight.surfaceEffects) )
            {
              MutableVfxData = HelicopterDynamics::GetMutableVfxData((HelicopterDynamics *)_RSI);
              AvailableVfxSlot = CgVehicleEventSystem::FindAvailableVfxSlot(this, MutableVfxData->Spark, 4u);
              *(double *)&_XMM0 = BgVehiclePhysics::GetPlaneSpeed(_RSI);
              __asm { vmulss  xmm1, xmm0, cs:__real@3d68ba2f; factor }
              CgVehicleEventSystem::PlayFactorDependentSurfaceVfx(this, *(float *)&_XMM1, &_R14->vehiclePhysicsDef.vfxImpactHard, &_R14->vehiclePhysicsDef.vfxImpactLight, posWs, normal, surfaceData, &MutableVfxData->Spark[AvailableVfxSlot]);
            }
            return;
          }
          _RBX = (char *)_R14 + v29;
          AliasFromId = v27;
        }
        if ( AliasFromId && _RBX )
        {
          *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RSI);
          __asm
          {
            vmulss  xmm3, xmm0, cs:__real@3d68ba2f
            vsubss  xmm2, xmm7, dword ptr [r15+8]
            vsubss  xmm0, xmm3, dword ptr [r15+8]
            vdivss  xmm0, xmm2, xmm0; val
            vmovaps xmm2, xmm6; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  xmm3, dword ptr [rbx+0Ch]
            vmovss  xmm2, dword ptr [rbx+10h]
            vandps  xmm1, xmm3, xmm8
            vcomiss xmm1, xmm9
            vmovaps xmm7, xmm0
          }
          if ( v49 )
          {
            __asm
            {
              vandps  xmm1, xmm2, xmm8
              vcomiss xmm1, xmm9
            }
            if ( v49 )
            {
              __asm
              {
                vxorps  xmm3, xmm3, xmm3
                vmovaps xmm2, xmm6
              }
            }
          }
          __asm
          {
            vmovss  xmm4, dword ptr [rbx+14h]
            vmaxss  xmm0, xmm3, xmm2
            vsubss  xmm1, xmm0, xmm3
            vmulss  xmm2, xmm1, xmm7
            vmovss  xmm1, dword ptr [rbx+18h]
            vandps  xmm0, xmm4, xmm8
            vcomiss xmm0, xmm9
            vaddss  xmm3, xmm2, xmm3
            vmulss  xmm5, xmm3, xmm10
          }
          if ( v49 )
          {
            __asm
            {
              vandps  xmm0, xmm1, xmm8
              vcomiss xmm0, xmm9
            }
            if ( v49 )
            {
              __asm
              {
                vmovaps xmm4, xmm6
                vmovaps xmm1, xmm6
              }
            }
          }
          vehIndex = _RSI->m_vehicleId - 1;
          if ( vehIndex < 0 )
            vehIndex = 0;
          __asm
          {
            vmaxss  xmm0, xmm4, xmm1
            vsubss  xmm1, xmm0, xmm4
            vmulss  xmm2, xmm1, xmm7
            vaddss  xmm3, xmm2, xmm4
            vmovss  [rsp+0C8h+var_98], xmm3
            vmovss  [rsp+0C8h+vol], xmm5
          }
          CgVehicleEventSystem::PlaySoundSurfaceDeferred(this, AliasFromId, _RSI->m_entityNumber, surfaceData, posWs, vol, v79, 250, vehIndex, 9u);
        }
        goto LABEL_37;
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
  unsigned int PhysicsBodyId; 
  unsigned int m_vehicleDefIndex; 
  CgVehicleSystem *v16; 
  LocalClientNum_t m_localClientNum; 
  ParticleManager *ParticleManager; 
  int m_entityNumber; 
  ParticleManager *v20; 
  LocalClientNum_t v21; 
  centity_t *Entity; 
  unsigned int m_wheelCount; 
  SndAliasList *v34; 
  unsigned int v35; 
  unsigned int v40; 
  unsigned int v41; 
  bool v42; 
  bool v43; 
  unsigned __int8 v46; 
  unsigned int v62; 
  __int64 v63; 
  bool v65; 
  __int64 v66; 
  bool v67; 
  const ParticleSystemDef *v69; 
  __int64 v70; 
  VehicleClient *Client; 
  unsigned int DrivingSlow; 
  const vec3_t *posWs; 
  unsigned int surfaceData; 
  SndAliasList *sndLightAlias; 
  unsigned int DrivingFast; 
  SndAliasList *AliasFromId; 
  __int64 v87; 
  __int64 v88; 
  __int64 v92; 
  CgVehicleSystem_vtbl *v93; 
  __int64 v94; 
  unsigned int BrakingLight; 
  unsigned int v96; 
  SndAliasList *v97; 
  unsigned int BrakingHard; 
  float v107; 
  float v108; 
  char v109; 
  unsigned __int8 wheelSurfaceType; 
  unsigned int v111; 
  const VehicleDef *ClientDef; 
  int v113; 
  int v114; 
  CgVehicleSystem *VehicleSystem; 
  ParticleManager *pmgr; 
  vec3_t position; 
  tmat43_t<vec3_t> result; 
  vec4_t orientation; 
  vec4_t v120; 

  _RBX = (BgVehiclePhysicsGround *)vehObj;
  if ( BgVehiclePhysics::IsKeyframed(&vehObj->BgVehiclePhysics) && !_RBX->m_pmoveObject )
  {
    if ( BgVehiclePhysics::IsPhysicsBodyIdValid(_RBX) )
    {
      PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RBX);
      Physics_GetRigidBodyTransform((const Physics_WorldId)_RBX->m_worldId, PhysicsBodyId, &position, &orientation);
    }
    if ( CgVehicleEventSystem::IsFarFromPlayer(this, &position) )
    {
      CgVehicleEventSystem::StopAllVfxOnVehicle(this, _RBX);
    }
    else
    {
      m_vehicleDefIndex = _RBX->m_vehicleDefIndex;
      if ( m_vehicleDefIndex < 0x80 )
      {
        VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
        v16 = VehicleSystem;
        ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
        if ( ClientDef )
        {
          m_localClientNum = this->m_localClientNum;
          __asm
          {
            vmovaps [rsp+1C0h+var_40], xmm6
            vmovaps [rsp+1C0h+var_50], xmm7
            vmovaps [rsp+1C0h+var_90], xmm11
            vmovaps [rsp+1C0h+var_A0], xmm12
            vmovaps [rsp+1C0h+var_B0], xmm13
            vmovaps [rsp+1C0h+var_C0], xmm14
            vmovaps [rsp+1C0h+var_D0], xmm15
          }
          ParticleManager = ParticleManager::GetParticleManager(m_localClientNum);
          m_entityNumber = _RBX->m_entityNumber;
          v20 = ParticleManager;
          v21 = this->m_localClientNum;
          pmgr = ParticleManager;
          Entity = CG_GetEntity(v21, m_entityNumber);
          __asm
          {
            vmovsd  xmm14, qword ptr [rbx+140h]
            vmovss  xmm7, cs:__real@3d68ba2f
            vmulss  xmm1, xmm14, xmm14
          }
          position.v[2] = _RBX->m_history.m_lastLinearVel.v[2];
          _R14 = Entity;
          __asm
          {
            vmovsd  qword ptr [rbp+0C0h+position], xmm14
            vmovss  xmm15, dword ptr [rbp+0C0h+position+4]
            vmulss  xmm0, xmm15, xmm15
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vmulss  xmm11, xmm2, xmm7
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehFxKFThresholdDriving, "bg_vehFxKFThresholdDriving");
          __asm
          {
            vcomiss xmm11, xmm0
            vmovaps xmm6, xmm0
          }
          if ( !v42 )
            __asm { vaddss  xmm11, xmm11, dword ptr [rdi+510h] }
          m_wheelCount = _RBX->m_wheelCount;
          v34 = NULL;
          v35 = 0;
          __asm
          {
            vmovss  xmm12, cs:__real@37800080
            vmovss  xmm13, cs:__real@3f7fbe77
          }
          if ( m_wheelCount )
          {
            do
            {
              if ( _R14->pose.vehicle.wheelSurfaceType )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, ecx
                  vmulss  xmm1, xmm0, xmm12
                  vcomiss xmm1, xmm13
                }
              }
              CgVehicleEventSystem::StopVfx(this, v20, &_RBX->m_vfx.Driving[v35]);
              m_wheelCount = _RBX->m_wheelCount;
              ++v35;
            }
            while ( v35 < m_wheelCount );
          }
          if ( _R14->pose.vehicle.wheelSurfaceType )
          {
            v40 = 0;
            v111 = 0;
            v41 = 0;
            if ( m_wheelCount )
            {
              __asm
              {
                vmovaps [rsp+1C0h+var_60], xmm8
                vmovaps [rsp+1C0h+var_70], xmm9
                vmovaps [rsp+1C0h+var_80], xmm10
              }
              do
              {
                if ( v40 >= maxWheelsInKeyframedVehicles )
                  break;
                v42 = v41 < 0xC;
                if ( v41 >= 0xC )
                {
                  v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 822, ASSERT_TYPE_ASSERT, "(windex < 12)", (const char *)&queryFormat, "windex < VEHICLE_MAX_WHEEL_COUNT");
                  v42 = 0;
                  if ( v43 )
                    __debugbreak();
                }
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vmulss  xmm10, xmm0, xmm12
                  vcomiss xmm10, xmm13
                }
                if ( v42 )
                {
                  v46 = _R14->pose.vehicle.wheelBoneIndex[v41];
                  if ( v46 < 0xFEu && CG_Vehicle_GetWorldBoneMatrix((const LocalClientNum_t)this->m_localClientNum, _RBX->m_entityNumber, v46, &result) )
                  {
                    __asm
                    {
                      vmovss  xmm3, dword ptr [r14+0B0h]
                      vmulss  xmm2, xmm3, cs:__real@3f000000
                      vmulss  xmm1, xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
                      vaddss  xmm7, xmm1, dword ptr [rbp+0C0h+result+24h]
                      vmulss  xmm1, xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
                      vaddss  xmm5, xmm1, dword ptr [rbp+0C0h+result+28h]
                      vmulss  xmm1, xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
                      vaddss  xmm4, xmm1, dword ptr [rbp+0C0h+result+2Ch]
                      vmulss  xmm1, xmm3, xmm10
                      vxorps  xmm3, xmm1, cs:__xmm@80000000800000008000000080000000
                      vmulss  xmm0, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
                      vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
                      vaddss  xmm2, xmm0, xmm7
                      vaddss  xmm0, xmm1, xmm5
                      vmovss  dword ptr [rbp+0C0h+position], xmm2
                      vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
                      vaddss  xmm1, xmm2, xmm4
                      vmovss  dword ptr [rbp+0C0h+position+8], xmm1
                      vmovss  dword ptr [rbp+0C0h+position+4], xmm0
                    }
                  }
                  else if ( BgVehiclePhysics::IsPhysicsBodyIdValid(_RBX) )
                  {
                    v62 = BgVehiclePhysics::GetPhysicsBodyId(_RBX);
                    Physics_GetRigidBodyTransform((const Physics_WorldId)_RBX->m_worldId, v62, &position, &v120);
                  }
                  wheelSurfaceType = _R14->pose.vehicle.wheelSurfaceType;
                  v63 = 1456i64;
                  if ( (BgVehiclePhysicsGround::GetWheel(_RBX, v41)->m_state & 1) == 0 )
                    v63 = 1312i64;
                  _RDI = (__int64 *)((char *)ClientDef + v63);
                  v65 = (BgVehiclePhysicsGround::GetWheel(_RBX, v41)->m_state & 1) == 0;
                  v66 = 1432i64;
                  if ( v65 )
                    v66 = 1288i64;
                  v67 = __CFADD__(ClientDef, v66) || (const VehicleDef *)((char *)ClientDef + v66) == NULL;
                  _RAX = (__int64 *)((char *)ClientDef + v66);
                  __asm { vcomiss xmm11, dword ptr [rax+8] }
                  if ( v67 )
                  {
                    __asm { vcomiss xmm11, dword ptr [rdi+8] }
                    _RAX = NULL;
                    if ( !v67 )
                      _RAX = _RDI;
                  }
                  v69 = NULL;
                  if ( _RAX )
                  {
                    v70 = *_RAX;
                    if ( *_RAX )
                    {
                      if ( wheelSurfaceType >= 0x40u || (v69 = *(const ParticleSystemDef **)(v70 + 8i64 * wheelSurfaceType + 8)) == NULL && (v69 = *(const ParticleSystemDef **)(v70 + 296)) == NULL )
                        v69 = NULL;
                    }
                  }
                  CgVehicleEventSystem::PlayFactorDependentVfx(this, v69, &position, &identityMatrix33.m[2], &_RBX->m_vfx.Driving[v41], NULL);
                  v40 = ++v111;
                }
                else
                {
                  CgVehicleEventSystem::StopVfx(this, pmgr, &_RBX->m_vfx.Driving[v41]);
                  v40 = v111;
                }
                ++v41;
              }
              while ( v41 < _RBX->m_wheelCount );
              __asm { vmovss  xmm7, cs:__real@3d68ba2f }
              v16 = VehicleSystem;
              __asm
              {
                vmovaps xmm10, [rsp+1C0h+var_80]
                vmovaps xmm9, [rsp+1C0h+var_70]
                vmovaps xmm8, [rsp+1C0h+var_60]
              }
            }
            Client = CgVehicleSystem::GetClient(v16, _R14);
            if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 928, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
              __debugbreak();
            DrivingSlow = _RBX->m_sound.DrivingSlow;
            posWs = &Client->audioState.entOrigin;
            surfaceData = _R14->pose.vehicle.wheelSurfaceType;
            __asm
            {
              vmulss  xmm1, xmm14, xmm14
              vmulss  xmm0, xmm15, xmm15
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm2, xmm1, xmm1
              vmulss  xmm7, xmm2, xmm7
            }
            if ( DrivingSlow )
              sndLightAlias = SND_FindAliasFromId(DrivingSlow);
            else
              sndLightAlias = NULL;
            DrivingFast = _RBX->m_sound.DrivingFast;
            if ( DrivingFast )
              AliasFromId = SND_FindAliasFromId(DrivingFast);
            else
              AliasFromId = NULL;
            if ( _RBX->m_flatTire )
            {
              v87 = 1176i64;
              v88 = 1144i64;
            }
            else
            {
              v87 = 920i64;
              v88 = 888i64;
            }
            __asm
            {
              vmovss  xmm6, cs:__real@3f800000
              vmovss  [rsp+1C0h+var_178], xmm6
              vmovaps xmm1, xmm7; planeMPH
            }
            CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, *(float *)&_XMM1, _RBX, (const VehiclePhysicsSoundGroup *)((char *)ClientDef + v88), (const VehiclePhysicsSoundGroup *)((char *)ClientDef + v87), AliasFromId, sndLightAlias, posWs, surfaceData, v107, 1u);
            __asm { vxorps  xmm0, xmm0, xmm0 }
            v92 = (unsigned int)_RBX->m_entityNumber;
            v93 = VehicleSystem->__vftable;
            __asm
            {
              vmovss  [rsp+1C0h+var_14C], xmm0
              vmovss  [rsp+1C0h+var_150], xmm0
            }
            v109 = 0;
            v93->PhysicsUnpackLerpStateValues(VehicleSystem, v92, (float *)&v114, (bool *)&v109, (float *)&v113);
            if ( v109 )
            {
              v94 = _RBX->m_vehicleId - 1;
              if ( (int)v94 < 0 )
                v94 = 0i64;
              if ( !SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v94].ids[2]) )
              {
                BrakingLight = _RBX->m_sound.BrakingLight;
                v96 = _R14->pose.vehicle.wheelSurfaceType;
                if ( BrakingLight )
                  v97 = SND_FindAliasFromId(BrakingLight);
                else
                  v97 = NULL;
                BrakingHard = _RBX->m_sound.BrakingHard;
                if ( BrakingHard )
                  v34 = SND_FindAliasFromId(BrakingHard);
                __asm
                {
                  vmovss  [rsp+1C0h+var_178], xmm6
                  vmovaps xmm1, xmm7; planeMPH
                }
                CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, *(float *)&_XMM1, _RBX, &ClientDef->vehiclePhysicsDef.sndBrakingHard, &ClientDef->vehiclePhysicsDef.sndBrakingLight, v34, v97, posWs, v96, v108, 2u);
              }
            }
          }
          __asm
          {
            vmovaps xmm14, [rsp+1C0h+var_C0]
            vmovaps xmm13, [rsp+1C0h+var_B0]
            vmovaps xmm12, [rsp+1C0h+var_A0]
            vmovaps xmm11, [rsp+1C0h+var_90]
            vmovaps xmm7, [rsp+1C0h+var_50]
            vmovaps xmm6, [rsp+1C0h+var_40]
            vmovaps xmm15, [rsp+1C0h+var_D0]
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
  LocalClientNum_t m_localClientNum; 
  SndAliasList *v32; 
  unsigned int surfaceData; 
  __int64 v36; 
  unsigned int DrivingSlow; 
  SndAliasList *AliasFromId; 
  unsigned int DrivingFast; 
  SndAliasList *v41; 
  __int64 v42; 
  __int64 v43; 
  unsigned int Drifting; 
  SndAliasList *v45; 
  unsigned int v53; 
  unsigned int Skidding; 
  int v55; 
  BOOL v59; 
  bool v60; 
  char v84; 
  bool v85; 
  bool IsPlaybackIdPlaying; 
  unsigned int BrakingLight; 
  SndAliasList *v90; 
  unsigned int BrakingHard; 
  SndAliasList *v92; 
  unsigned int v93; 
  unsigned int Suspension; 
  SndAliasList *v97; 
  unsigned int v98; 
  SndAliasList *v99; 
  float v101; 
  float v102; 
  float v103; 
  unsigned int outSurfData; 
  unsigned int outSurfDataSkid; 
  int m_entityNumber; 
  float outMaxSuspDeform; 
  int entNum; 
  SndAliasList *snd; 
  vec3_t posWs; 
  ExtentBounds outExtBounds; 
  vec3_t outSuspWs; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  _R14 = vehDef;
  __asm { vmovaps xmmword ptr [r11-78h], xmm9 }
  m_localClientNum = this->m_localClientNum;
  __asm { vmovaps xmmword ptr [r11-88h], xmm10 }
  _RDI = vehObj;
  GetVehicleAndTurretExtBounds(m_localClientNum, vehObj, &outExtBounds);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+57h+outExtBounds.maxs+8]
    vaddss  xmm0, xmm1, dword ptr [rbp+57h+outExtBounds.mins+8]
    vmovss  xmm10, cs:__real@3f000000
    vmovss  xmm2, dword ptr [rbp+57h+outExtBounds.maxs]
    vmulss  xmm5, xmm0, xmm10
    vsubss  xmm0, xmm5, dword ptr [rbp+57h+outExtBounds.mins+8]
    vsubss  xmm1, xmm1, xmm5
    vmaxss  xmm1, xmm1, xmm0
    vaddss  xmm4, xmm1, cs:__real@40a00000
    vaddss  xmm0, xmm2, dword ptr [rbp+57h+outExtBounds.mins]
    vmulss  xmm1, xmm4, dword ptr [rdi+18Ch]
    vmovss  xmm2, dword ptr [rbp+57h+outExtBounds.maxs+4]
    vmulss  xmm3, xmm0, xmm10
    vaddss  xmm0, xmm3, xmm1
    vaddss  xmm1, xmm2, dword ptr [rbp+57h+outExtBounds.mins+4]
    vmovss  dword ptr [rbp+57h+var_C0], xmm0
    vmulss  xmm0, xmm4, dword ptr [rdi+190h]
    vmulss  xmm3, xmm1, xmm10
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm4, dword ptr [rdi+194h]
  }
  v32 = NULL;
  __asm
  {
    vmovss  dword ptr [rbp+57h+var_C0+4], xmm1
    vaddss  xmm1, xmm0, xmm5
  }
  outSurfData = 0;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  outSurfDataSkid = 0;
  __asm
  {
    vmovss  dword ptr [rbp+57h+var_C0+8], xmm1
    vmovss  [rbp+57h+var_D4], xmm9
  }
  CgVehicleEventSystem::ComputeTireDataForSound(this, _RDI, &outSurfData, &outSurfDataSkid, &outMaxSuspDeform, &outSuspWs);
  surfaceData = outSurfData;
  v36 = _RDI->m_vehicleId - 1;
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( (int)v36 < 0 )
    v36 = 0i64;
  if ( outSurfData )
  {
    DrivingSlow = _RDI->m_sound.DrivingSlow;
    if ( DrivingSlow )
      AliasFromId = SND_FindAliasFromId(DrivingSlow);
    else
      AliasFromId = NULL;
    DrivingFast = _RDI->m_sound.DrivingFast;
    if ( DrivingFast )
      v41 = SND_FindAliasFromId(DrivingFast);
    else
      v41 = NULL;
    if ( _RDI->m_flatTire )
    {
      v42 = 1176i64;
      v43 = 1144i64;
    }
    else
    {
      v42 = 920i64;
      v43 = 888i64;
    }
    __asm { vmovss  [rsp+130h+var_F0], xmm7 }
    CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, _RDI, (const VehiclePhysicsSoundGroup *)((char *)_R14 + v43), (const VehiclePhysicsSoundGroup *)((char *)_R14 + v42), v41, AliasFromId, &posWs, surfaceData, v101, 1u);
    Drifting = _RDI->m_sound.Drifting;
    m_entityNumber = _RDI->m_entityNumber;
    if ( Drifting )
      v45 = SND_FindAliasFromId(Drifting);
    else
      v45 = NULL;
    __asm { vxorps  xmm1, xmm1, xmm1; min }
    if ( _RDI->m_vehicleType == VEH_CAR )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0AB8h]
        vdivss  xmm0, xmm0, dword ptr [rdi+0A98h]; val
        vmovaps xmm2, xmm7; max
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vsubss  xmm1, xmm7, xmm0 }
    }
    __asm
    {
      vmulss  xmm2, xmm1, xmm1
      vmulss  xmm0, xmm2, xmm2
      vmulss  xmm1, xmm0, xmm2
      vmulss  xmm1, xmm1, xmm2; factor
    }
    CgVehicleEventSystem::PlayFactorDependentSurfaceSound(this, *(float *)&_XMM1, &_R14->vehiclePhysicsDef.sndDrifting, v45, m_entityNumber, &posWs, surfaceData, v36);
  }
  v53 = outSurfDataSkid;
  if ( outSurfDataSkid )
  {
    Skidding = _RDI->m_sound.Skidding;
    v55 = _RDI->m_entityNumber;
    __asm { vmovaps [rsp+130h+var_68+8], xmm8 }
    entNum = v55;
    if ( Skidding )
      snd = SND_FindAliasFromId(Skidding);
    else
      snd = NULL;
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+0AA8h]
      vcmpltss xmm0, xmm9, xmm1
      vblendvps xmm0, xmm7, xmm1, xmm0
      vmovss  [rsp+130h+outSurfDataSkid], xmm0
    }
    v59 = Com_BitCheckAssert(_RDI->m_controls.playerEnabledBits, 4, 4);
    v60 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 4, 4);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+0D8h]
      vmovss  xmm6, dword ptr [rdi+0F8h]
      vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    if ( v59 + 3 * v60 == 1 )
    {
      __asm { vmovaps xmm6, xmm3 }
      goto LABEL_38;
    }
    if ( v59 + 3 * v60 != 3 )
    {
      if ( v59 + 3 * v60 != 4 )
        goto LABEL_36;
      switch ( _RDI->m_controls.valuePolicy[4] )
      {
        case VP_MAXABS:
          __asm
          {
            vandps  xmm0, xmm6, xmm8
            vandps  xmm1, xmm3, xmm8
            vcmpltss xmm1, xmm0, xmm1
            vblendvps xmm6, xmm6, xmm3, xmm1
          }
          goto LABEL_38;
        case VP_MINABS:
          __asm
          {
            vandps  xmm0, xmm6, xmm8
            vandps  xmm1, xmm3, xmm8
            vcmpltss xmm1, xmm1, xmm0
            vblendvps xmm6, xmm6, xmm3, xmm1
          }
          goto LABEL_38;
        case VP_AVERAGE:
          __asm
          {
            vaddss  xmm0, xmm6, xmm3
            vmulss  xmm6, xmm0, xmm10
          }
          goto LABEL_38;
        case VP_AVERAGE_WEIGHT_PLAYER:
          __asm
          {
            vmovss  xmm1, dword ptr [rdi+118h]
            vsubss  xmm0, xmm7, xmm1
            vmulss  xmm2, xmm0, xmm6
            vmulss  xmm1, xmm3, xmm1
            vaddss  xmm6, xmm2, xmm1
          }
          goto LABEL_38;
      }
      if ( _RDI->m_controls.valuePolicy[4] != VP_AVERAGE_WEIGHT_EXTERNAL )
      {
LABEL_36:
        __asm { vxorps  xmm6, xmm6, xmm6 }
        goto LABEL_38;
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+118h]
        vsubss  xmm0, xmm7, xmm1
        vmulss  xmm2, xmm0, xmm3
        vmulss  xmm1, xmm6, xmm1
        vaddss  xmm6, xmm2, xmm1
      }
    }
LABEL_38:
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0C80h]
      vdivss  xmm0, xmm0, [rsp+130h+outSurfDataSkid]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vandps  xmm6, xmm6, xmm8
      vmulss  xmm1, xmm0, xmm6; factor
    }
    CgVehicleEventSystem::PlayFactorDependentSurfaceSound(this, *(float *)&_XMM1, &_R14->vehiclePhysicsDef.sndSkidding, snd, entNum, &posWs, v53, v36);
    __asm { vmovaps xmm8, [rsp+130h+var_68+8] }
  }
  __asm
  {
    vsubss  xmm0, xmm7, dword ptr [rdi+0C84h]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm0, cs:__real@3a83126f
    vmovaps xmm10, [rsp+130h+var_88+8]
    vmovaps xmm9, [rsp+130h+var_78+8]
  }
  if ( v84 | v85 || (IsPlaybackIdPlaying = SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v36].ids[2]), v84 = 0, v85 = !IsPlaybackIdPlaying, IsPlaybackIdPlaying) )
  {
    v93 = outSurfData;
  }
  else
  {
    BrakingLight = _RDI->m_sound.BrakingLight;
    if ( BrakingLight )
      v90 = SND_FindAliasFromId(BrakingLight);
    else
      v90 = NULL;
    BrakingHard = _RDI->m_sound.BrakingHard;
    if ( BrakingHard )
      v92 = SND_FindAliasFromId(BrakingHard);
    else
      v92 = NULL;
    v93 = outSurfData;
    __asm { vmovss  [rsp+130h+var_F0], xmm7 }
    CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, _RDI, &_R14->vehiclePhysicsDef.sndBrakingHard, &_R14->vehiclePhysicsDef.sndBrakingLight, v92, v90, &posWs, outSurfData, v102, 2u);
  }
  __asm
  {
    vmovss  xmm6, [rbp+57h+var_D4]
    vcomiss xmm6, dword ptr [r14+3C0h]
    vmovaps xmm7, [rsp+130h+var_58+8]
  }
  if ( !(v84 | v85) && !SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v36].ids[3]) )
  {
    Suspension = _RDI->m_sound.Suspension;
    if ( Suspension )
    {
      v97 = SND_FindAliasFromId(Suspension);
      v98 = _RDI->m_sound.Suspension;
      v99 = v97;
      if ( v98 )
        v32 = SND_FindAliasFromId(v98);
    }
    else
    {
      v99 = NULL;
    }
    __asm { vmovss  [rsp+130h+var_F0], xmm6 }
    CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, _RDI, &_R14->vehiclePhysicsDef.sndSuspension, &_R14->vehiclePhysicsDef.sndSuspension, v32, v99, &outSuspWs, v93, v103, 3u);
  }
  __asm { vmovaps xmm6, xmmword ptr [rsp+130h+var_48+8] }
}

/*
==============
CgVehicleEventSystem::CarDriving_Vfx
==============
*/
void CgVehicleEventSystem::CarDriving_Vfx(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehicleDef *vehDef)
{
  __int64 m_localClientNum; 
  ParticleManager *v35; 
  const dvar_t *v47; 
  unsigned int unsignedInt; 
  unsigned int v49; 
  ParticleSystemHandle *Skidding; 
  __int64 v52; 
  __int64 v77; 
  __int64 v79; 
  bool v80; 
  const ParticleSystemDef *v82; 
  __int64 v83; 
  const VehicleDef *v104; 
  char v108; 
  bool v109; 
  const ParticleSystemDef *particleSystemDef; 
  FootstepVFX *surfaceEffects; 
  char v116; 
  char v117; 
  const dvar_t *v130; 
  centity_t *Entity; 
  const Camo *VehicleCamo; 
  LocalClientNum_t v133; 
  unsigned int number; 
  unsigned int v135; 
  unsigned int v136; 
  CgVehicleSystem *VehicleSystem; 
  __int64 v138; 
  scr_string_t *v139; 
  scr_string_t v144; 
  const vec4_t *v145; 
  char v194; 
  char v195; 
  char v205; 
  const char *v211; 
  __int64 ackRatio; 
  float ackRatiob; 
  __int64 ackRatioa; 
  __int64 yawMult; 
  float yawMultb; 
  __int64 yawMulta; 
  unsigned int wheelNdx; 
  __int64 v232; 
  const VehicleDef *v233; 
  unsigned __int8 inOutIndex[8]; 
  const Camo *v235; 
  DObj *obj; 
  int modelIndex; 
  vec3_t outOrigin; 
  __int64 v239; 
  VehicleStickerCamoInfo outStickerCamoInfo; 
  vec3_t posWs; 
  vec3_t normal; 
  vec3_t outVelLs; 
  vec3_t outPointVel; 
  vec3_t forwardWs; 
  vec3_t vec; 
  vec3_t out; 
  vec3_t v248; 
  tmat33_t<vec3_t> axis; 
  char _Buffer[1024]; 
  char v251; 
  void *retaddr; 

  _RAX = &retaddr;
  v239 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R13 = vehDef;
  v233 = vehDef;
  _R14 = (BgVehiclePhysicsGround *)vehObj;
  BgVehiclePhysics::ComputeVelocityLocalSpace(&vehObj->BgVehiclePhysics, &vehObj->m_linearVelocityWs, &outVelLs);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+520h+outVelLs]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm1, dword ptr [rbp+520h+outVelLs+4]
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm2
    vsqrtss xmm3, xmm0, xmm0
    vmulss  xmm15, xmm3, cs:__real@3d68ba2f
  }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_R14);
  __asm
  {
    vminss  xmm1, xmm0, cs:__real@3f4ccccd
    vmovss  dword ptr [rsp+620h+var_5C0], xmm1
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( _R14->m_vehicleType == VEH_CAR )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14+0AB8h]
      vdivss  xmm0, xmm0, dword ptr [r14+0A98h]; val
      vmovaps xmm2, xmm8; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vsubss  xmm10, xmm8, xmm0 }
  }
  else
  {
    __asm { vxorps  xmm10, xmm10, xmm10 }
  }
  __asm { vmovss  dword ptr [rsp+620h+inOutIndex+4], xmm10 }
  _RBX = DCONST_DVARFLT_bg_vehWheelOffsetForFx;
  if ( !DCONST_DVARFLT_bg_vehWheelOffsetForFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehWheelOffsetForFx") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm9, dword ptr [rbx+28h]
    vmovss  dword ptr [rsp+620h+var_5D8], xmm9
  }
  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(yawMult) = 2;
    LODWORD(ackRatio) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ackRatio, yawMult) )
      __debugbreak();
  }
  v35 = &g_particleManager[m_localClientNum];
  __asm
  {
    vxorps  xmm14, xmm14, xmm14
    vmovss  [rsp+620h+yawMult], xmm8
    vmovss  [rsp+620h+ackRatio], xmm8
  }
  BgVehiclePhysicsGround::Steering::ComputeAxis(&_R14->m_steering, _R14, 0, &forwardWs, NULL, ackRatiob, yawMultb);
  _RBX = DCONST_DVARFLT_bg_vehContactAheadForFx;
  if ( !DCONST_DVARFLT_bg_vehContactAheadForFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehContactAheadForFx") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  BgVehiclePhysics::GetNormalSpeed(_R14);
  __asm
  {
    vsubss  xmm1, xmm8, xmm0
    vmulss  xmm0, xmm1, xmm1
    vmulss  xmm2, xmm0, xmm1
    vsubss  xmm1, xmm8, xmm2
    vmulss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rsp+620h+obj], xmm0
    vcomiss xmm10, dword ptr [r13+570h]
  }
  if ( v108 | v109 )
  {
    __asm { vmovss  xmm6, cs:__real@bf800000 }
  }
  else
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(_R14, &_R14->m_angularVelocityWs, &outVelLs);
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+520h+outVelLs+8]
      vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm6, cs:__real@bf800000
      vcomiss xmm0, xmm7
    }
    if ( !(v108 | v109) )
    {
      __asm
      {
        vcmpless xmm0, xmm7, xmm1
        vblendvps xmm0, xmm6, xmm8, xmm0
        vmovaps xmm14, xmm0
        vmovss  dword ptr [rbp+520h+outStickerCamoInfo.stickerIndices], xmm0
      }
    }
  }
  v47 = DCONST_DVARINT_bg_vehMaxWheelCountForFx;
  if ( !DCONST_DVARINT_bg_vehMaxWheelCountForFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMaxWheelCountForFx") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  unsignedInt = v47->current.unsignedInt;
  if ( unsignedInt > _R14->m_wheelCount )
    unsignedInt = _R14->m_wheelCount;
  *(_DWORD *)outStickerCamoInfo.stickerIndices = unsignedInt;
  v49 = 0;
  wheelNdx = 0;
  if ( unsignedInt )
  {
    _RSI = &_R14->m_wheels[0].m_contactPointWs.v[1];
    Skidding = _R14->m_vfx.Skidding;
    while ( 1 )
    {
      if ( v49 >= _R14->m_wheelCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 252, ASSERT_TYPE_ASSERT, "(wheelNdx < m_wheelCount)", (const char *)&queryFormat, "wheelNdx < m_wheelCount") )
          __debugbreak();
        v49 = wheelNdx;
      }
      v52 = (*((_DWORD *)_RSI + 25) >> 19) & 0x3F;
      if ( *((_DWORD *)_RSI + 26) != 0xFFFFFF )
      {
        if ( (_DWORD)v52 )
          break;
      }
      CgVehicleEventSystem::StopVfx(this, v35, Skidding - 36);
      CgVehicleEventSystem::StopVfx(this, v35, Skidding - 12);
      CgVehicleEventSystem::StopVfx(this, v35, Skidding);
      CgVehicleEventSystem::StopVfx(this, v35, Skidding - 24);
LABEL_59:
      v49 = wheelNdx + 1;
      wheelNdx = v49;
      ++Skidding;
      _RSI += 38;
      __asm { vmovss  xmm6, cs:__real@bf800000 }
      if ( v49 >= *(_DWORD *)outStickerCamoInfo.stickerIndices )
        goto LABEL_60;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, cs:__real@40000000
      vsubss  xmm2, xmm8, xmm1
      vmulss  xmm4, xmm2, dword ptr [r14+180h]
      vmulss  xmm5, xmm2, dword ptr [r14+184h]
      vmulss  xmm2, xmm2, dword ptr [r14+188h]
      vmulss  xmm11, xmm4, xmm9
      vaddss  xmm0, xmm11, dword ptr [rsi-4]
      vmovss  dword ptr [rbp+520h+posWs], xmm0
      vmulss  xmm12, xmm5, xmm9
      vaddss  xmm0, xmm12, dword ptr [rsi]
      vmovss  dword ptr [rbp+520h+posWs+4], xmm0
      vmulss  xmm13, xmm2, xmm9
      vaddss  xmm0, xmm13, dword ptr [rsi+4]
      vmovss  dword ptr [rbp+520h+posWs+8], xmm0
      vmovss  xmm9, dword ptr [rsp+620h+var_5C0]
      vsubss  xmm3, xmm8, xmm9
      vmulss  xmm1, xmm3, dword ptr [rsi+8]
      vmulss  xmm0, xmm4, xmm9
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbp+520h+normal], xmm1
      vmulss  xmm1, xmm3, dword ptr [rsi+0Ch]
      vmulss  xmm0, xmm5, xmm9
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbp+520h+normal+4], xmm1
      vmulss  xmm2, xmm2, xmm9
      vmulss  xmm0, xmm3, dword ptr [rsi+10h]
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbp+520h+normal+8], xmm1
    }
    v77 = 1456i64;
    if ( (BgVehiclePhysicsGround::GetWheel(_R14, v49)->m_state & 1) == 0 )
      v77 = 1312i64;
    _R13 = (char *)v233 + v77;
    v109 = (BgVehiclePhysicsGround::GetWheel(_R14, wheelNdx)->m_state & 1) == 0;
    v79 = 1432i64;
    if ( v109 )
      v79 = 1288i64;
    v80 = __CFADD__(v233, v79) || (const VehicleDef *)((char *)v233 + v79) == NULL;
    _RAX = (__int64 *)((char *)v233 + v79);
    __asm { vcomiss xmm15, dword ptr [rax+8] }
    if ( v80 )
    {
      _RAX = NULL;
      __asm { vcomiss xmm15, dword ptr [r13+8] }
    }
    v82 = NULL;
    if ( _RAX )
    {
      v83 = *_RAX;
      if ( *_RAX )
      {
        v82 = *(const ParticleSystemDef **)(v83 + 8 * v52 + 8);
        if ( !v82 )
          v82 = *(const ParticleSystemDef **)(v83 + 296);
      }
    }
    CgVehicleEventSystem::PlayFactorDependentVfx(this, v82, &posWs, &normal, Skidding - 36, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+54h]
      vcmpless xmm1, xmm0, cs:__real@80000000
      vblendvps xmm5, xmm6, xmm8, xmm1
      vmulss  xmm1, xmm5, dword ptr [rsp+620h+obj]
      vmulss  xmm0, xmm1, dword ptr [rbp+520h+forwardWs]
      vaddss  xmm6, xmm0, dword ptr [rsi-4]
      vmulss  xmm0, xmm1, dword ptr [rbp+520h+forwardWs+4]
      vaddss  xmm9, xmm0, dword ptr [rsi]
      vmulss  xmm0, xmm1, dword ptr [rbp+520h+forwardWs+8]
      vaddss  xmm10, xmm0, dword ptr [rsi+4]
      vmulss  xmm1, xmm5, dword ptr [rbp+520h+forwardWs]
      vmovss  dword ptr [rbp+520h+normal], xmm1
      vmulss  xmm0, xmm5, dword ptr [rbp+520h+forwardWs+4]
      vmovss  dword ptr [rbp+520h+normal+4], xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+520h+forwardWs+8]
      vmovss  dword ptr [rbp+520h+normal+8], xmm1
      vmovss  xmm0, cs:__real@3a83126f
      vcomiss xmm0, dword ptr [rsi+48h]
    }
    if ( v108 )
    {
      __asm
      {
        vmovaps xmm2, xmm8; max
        vmovaps xmm1, xmm7; min
        vmovss  xmm0, dword ptr [rsi+58h]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vcomiss xmm0, xmm7 }
      if ( !(v108 | v109) )
      {
        __asm
        {
          vaddss  xmm1, xmm11, xmm6
          vmovss  dword ptr [rbp+520h+posWs], xmm1
          vaddss  xmm2, xmm12, xmm9
          vmovss  dword ptr [rbp+520h+posWs+4], xmm2
          vaddss  xmm1, xmm10, xmm13
          vmovss  dword ptr [rbp+520h+posWs+8], xmm1
        }
        v104 = v233;
        _RAX = &v233->vehiclePhysicsDef.vfxSkidding;
        __asm { vcomiss xmm0, dword ptr [rax+8] }
        CgVehicleEventSystem::PlayFactorDependentVfx(this, NULL, &posWs, &normal, Skidding, NULL);
LABEL_45:
        __asm
        {
          vsubss  xmm0, xmm8, dword ptr [rsi+5Ch]; val
          vmovaps xmm2, xmm8; max
          vmovaps xmm1, xmm7; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vcomiss xmm0, xmm7 }
        if ( v108 | v109 )
        {
          CgVehicleEventSystem::StopVfx(this, v35, Skidding - 24);
        }
        else
        {
          __asm
          {
            vaddss  xmm0, xmm6, xmm11
            vmovss  dword ptr [rbp+520h+posWs], xmm0
            vaddss  xmm1, xmm12, xmm9
            vmovss  dword ptr [rbp+520h+posWs+4], xmm1
            vaddss  xmm0, xmm10, xmm13
            vmovss  dword ptr [rbp+520h+posWs+8], xmm0
          }
          _RCX = &v104->vehiclePhysicsDef.vfxBrakingLight;
          _RAX = &v104->vehiclePhysicsDef.vfxBrakingHard;
          __asm { vcomiss xmm15, dword ptr [rax+8] }
          if ( v108 | v109 )
          {
            _RAX = NULL;
            __asm { vcomiss xmm15, dword ptr [rcx+8] }
          }
          particleSystemDef = NULL;
          if ( _RAX )
          {
            surfaceEffects = _RAX->surfaceEffects;
            if ( _RAX->surfaceEffects )
            {
              particleSystemDef = surfaceEffects->footstepVFX[v52].particleSystemDef;
              if ( !particleSystemDef )
                particleSystemDef = surfaceEffects->footstepVFX[36].particleSystemDef;
            }
          }
          CgVehicleEventSystem::PlayFactorDependentVfx(this, particleSystemDef, &posWs, &normal, Skidding - 24, NULL);
        }
        __asm
        {
          vmovss  xmm10, dword ptr [rsp+620h+inOutIndex+4]
          vcomiss xmm10, xmm7
        }
        if ( v116 | v117 )
          goto LABEL_57;
        __asm { vucomiss xmm14, xmm7 }
        if ( v117 )
        {
LABEL_57:
          CgVehicleEventSystem::StopVfx(this, v35, Skidding - 12);
          __asm { vmovss  xmm9, dword ptr [rsp+620h+var_5D8] }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm14, dword ptr [r14+180h]
            vmovss  dword ptr [rbp+520h+normal], xmm0
            vmulss  xmm2, xmm14, dword ptr [r14+184h]
            vmovss  dword ptr [rbp+520h+normal+4], xmm2
            vmulss  xmm3, xmm14, dword ptr [r14+188h]
            vmovss  dword ptr [rbp+520h+normal+8], xmm3
            vmovss  xmm9, dword ptr [rsp+620h+var_5D8]
            vmulss  xmm0, xmm0, xmm9
            vaddss  xmm1, xmm0, dword ptr [rsi-4]
            vmovss  dword ptr [rbp+520h+posWs], xmm1
            vmulss  xmm2, xmm2, xmm9
            vaddss  xmm0, xmm2, dword ptr [rsi]
            vmovss  dword ptr [rbp+520h+posWs+4], xmm0
            vmulss  xmm1, xmm3, xmm9
            vaddss  xmm2, xmm1, dword ptr [rsi+4]
            vmovss  dword ptr [rbp+520h+posWs+8], xmm2
          }
          _RAX = &v104->vehiclePhysicsDef.vfxDrifting;
          __asm { vcomiss xmm10, dword ptr [rax+8] }
          CgVehicleEventSystem::PlayFactorDependentVfx(this, NULL, &posWs, &normal, Skidding - 12, NULL);
        }
        goto LABEL_59;
      }
      CgVehicleEventSystem::StopVfx(this, v35, Skidding);
    }
    v104 = v233;
    goto LABEL_45;
  }
LABEL_60:
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE) && Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE|0x100) )
  {
    v130 = DVARBOOL_bg_vehicleEnableCamoVFX;
    if ( !DVARBOOL_bg_vehicleEnableCamoVFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleEnableCamoVFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v130);
    if ( v130->current.enabled )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, _R14->m_entityNumber);
      *(_DWORD *)outStickerCamoInfo.stickerIndices = 0;
      outStickerCamoInfo.camoIndex = 0;
      BG_Vehicle_GetStickerCamoMaterialIndices(&Entity->nextState.lerp.u.agentCorpse.attachModels[6].m_data, &outStickerCamoInfo);
      VehicleCamo = BG_Camo_GetVehicleCamo(outStickerCamoInfo.camoIndex);
      v235 = VehicleCamo;
      v133 = this->m_localClientNum;
      number = Entity->nextState.number;
      if ( number > 0x9E4 )
      {
        LODWORD(yawMulta) = Entity->nextState.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", yawMulta) )
          __debugbreak();
      }
      if ( (unsigned int)v133 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(yawMulta) = 2;
        LODWORD(ackRatioa) = v133;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", ackRatioa, yawMulta) )
          __debugbreak();
      }
      v135 = 2533 * v133 + number;
      if ( v135 >= 0x13CA )
      {
        LODWORD(yawMulta) = v135;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", yawMulta) )
          __debugbreak();
      }
      v136 = clientObjMap[v135];
      if ( v136 )
      {
        if ( v136 >= (unsigned int)s_objCount )
        {
          LODWORD(yawMulta) = v136;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", yawMulta) )
            __debugbreak();
        }
        obj = (DObj *)s_objBuf[v136];
        if ( obj && VehicleCamo && VehicleCamo->vehVfxTailLight.particleSystemDef )
        {
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
          if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1377, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
            __debugbreak();
          v233 = *(const VehicleDef **)&scr_const.tag_light_back_left;
          v138 = 0i64;
          v139 = (scr_string_t *)&v233;
          __asm
          {
            vmovss  xmm9, cs:__real@3c23d70a
            vmovss  xmm10, cs:__real@461c4000
            vmovss  xmm11, cs:__real@3f000000
            vmovss  xmm12, cs:__real@3a83126f
          }
          do
          {
            v144 = *v139;
            if ( DObjGetBoneIndexInternal_5(obj, *v139, inOutIndex, &modelIndex) )
            {
              LODWORD(v232) = 254;
              v145 = (const vec4_t *)VehicleSystem->PhysicsGetBoneLocalMatrix(VehicleSystem, _R14->m_entityNumber, v144, (int *)&v232);
              if ( v145 )
              {
                if ( (_DWORD)v232 != 254 )
                {
                  QuatToAxis(v145, &axis);
                  __asm
                  {
                    vmulss  xmm1, xmm9, dword ptr [rbp+520h+axis]
                    vaddss  xmm2, xmm1, dword ptr [rsi+10h]
                    vmovss  dword ptr [rbp+520h+vec], xmm2
                    vmulss  xmm1, xmm9, dword ptr [rbp+520h+axis+4]
                    vaddss  xmm2, xmm1, dword ptr [rsi+14h]
                    vmovss  dword ptr [rbp+520h+vec+4], xmm2
                    vmulss  xmm1, xmm9, dword ptr [rbp+520h+axis+8]
                    vaddss  xmm2, xmm1, dword ptr [rsi+18h]
                    vmovss  dword ptr [rbp+520h+vec+8], xmm2
                  }
                  AxisTransformVec3((const tmat33_t<vec3_t> *)&_R14->m_transform, &vec, &out);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+520h+out]
                    vaddss  xmm1, xmm0, dword ptr [rsp+620h+outOrigin]
                    vmovss  dword ptr [rbp+520h+posWs], xmm1
                    vmovss  xmm2, dword ptr [rbp+520h+out+4]
                    vaddss  xmm0, xmm2, dword ptr [rsp+620h+outOrigin+4]
                    vmovss  dword ptr [rbp+520h+posWs+4], xmm0
                    vmovss  xmm1, dword ptr [rbp+520h+out+8]
                    vaddss  xmm2, xmm1, dword ptr [rbp+520h+outOrigin+8]
                    vmovss  dword ptr [rbp+520h+posWs+8], xmm2
                    vmovss  xmm5, dword ptr [rbp+520h+axis+4]
                    vmulss  xmm1, xmm5, dword ptr [rsi+4]
                    vmovss  xmm4, dword ptr [rbp+520h+axis]
                    vmulss  xmm0, xmm4, dword ptr [rsi]
                    vaddss  xmm2, xmm1, xmm0
                    vmovss  xmm3, dword ptr [rbp+520h+axis+8]
                    vmulss  xmm0, xmm3, dword ptr [rsi+8]
                    vaddss  xmm1, xmm2, xmm0
                    vmovss  dword ptr [rbp+520h+var_518], xmm1
                    vmulss  xmm1, xmm5, dword ptr [rsi+10h]
                    vmulss  xmm0, xmm4, dword ptr [rsi+0Ch]
                    vaddss  xmm2, xmm1, xmm0
                    vmulss  xmm1, xmm3, dword ptr [rsi+14h]
                    vaddss  xmm0, xmm2, xmm1
                    vmovss  dword ptr [rbp+520h+var_518+4], xmm0
                    vmulss  xmm1, xmm5, dword ptr [rsi+1Ch]
                    vmulss  xmm0, xmm4, dword ptr [rsi+18h]
                    vaddss  xmm2, xmm1, xmm0
                    vmulss  xmm1, xmm3, dword ptr [rsi+20h]
                    vaddss  xmm0, xmm2, xmm1
                    vmovss  dword ptr [rbp+520h+var_518+8], xmm0
                  }
                  PhysicsVehicle_ComputePointVelocity(&_R14->m_centerOfMassWs, &_R14->m_angularVelocityWs, &_R14->m_linearVelocityWs, &posWs, &outPointVel);
                  CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
                    vmulss  xmm5, xmm0, xmm12
                    vmovss  xmm6, dword ptr [rbp+520h+outPointVel]
                    vmulss  xmm1, xmm5, xmm6
                    vaddss  xmm1, xmm1, dword ptr [rbp+520h+posWs]
                    vmovss  dword ptr [rbp+520h+posWs], xmm1
                    vmovss  xmm3, dword ptr [rbp+520h+outPointVel+4]
                    vmulss  xmm2, xmm5, xmm3
                    vaddss  xmm1, xmm2, dword ptr [rbp+520h+posWs+4]
                    vmovss  dword ptr [rbp+520h+posWs+4], xmm1
                    vmovss  xmm4, dword ptr [rbp+520h+outPointVel+8]
                    vmulss  xmm2, xmm5, xmm4
                    vaddss  xmm1, xmm2, dword ptr [rbp+520h+posWs+8]
                    vmovss  dword ptr [rbp+520h+posWs+8], xmm1
                    vmulss  xmm2, xmm3, xmm3
                    vmulss  xmm0, xmm6, xmm6
                    vaddss  xmm3, xmm2, xmm0
                    vmulss  xmm1, xmm4, xmm4
                    vaddss  xmm2, xmm3, xmm1
                    vsqrtss xmm6, xmm2, xmm2
                    vcomiss xmm6, xmm7
                  }
                  if ( v108 | v109 )
                    goto LABEL_93;
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_vehiclePlayTailLightSpeedThreshold, "bg_vehiclePlayTailLightSpeedThreshold");
                  __asm
                  {
                    vmovss  xmm1, dword ptr [rbp+520h+outPointVel+4]
                    vmulss  xmm4, xmm1, dword ptr [rsi+4]
                    vmovss  xmm2, dword ptr [rbp+520h+outPointVel]
                    vmulss  xmm3, xmm2, dword ptr [rsi]
                    vaddss  xmm5, xmm4, xmm3
                    vmovss  xmm1, dword ptr [rbp+520h+outPointVel+8]
                    vmulss  xmm2, xmm1, dword ptr [rsi+8]
                    vaddss  xmm4, xmm5, xmm2
                    vmulss  xmm3, xmm6, xmm9
                    vcomiss xmm4, xmm3
                  }
                  if ( v194 | v195 )
                    goto LABEL_93;
                  __asm { vcomiss xmm6, xmm0 }
                  if ( v194 | v195 )
                  {
LABEL_93:
                    CgVehicleEventSystem::StopVfx(this, v35, &_R14->m_vfx.CamoTailLight[v138]);
                    v205 = 0;
                  }
                  else
                  {
                    v205 = 1;
                    CgVehicleEventSystem::PlayFactorDependentVfx(this, v235->vehVfxTailLight.particleSystemDef, &posWs, &v248, &_R14->m_vfx.CamoTailLight[v138], NULL);
                  }
                  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_vehicleEnableCamoVFXDebugDraw, "bg_vehicleEnableCamoVFXDebugDraw") )
                  {
                    __asm { vmovaps xmm1, xmm8; radius }
                    CG_DebugSphere(&posWs, *(float *)&_XMM1, &colorBlue, 0, 5);
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rbp+520h+posWs]
                      vmovss  dword ptr [rbp+520h+outVelLs], xmm0
                      vmovss  xmm1, dword ptr [rbp+520h+posWs+4]
                      vmovss  dword ptr [rbp+520h+outVelLs+4], xmm1
                      vaddss  xmm2, xmm10, dword ptr [rbp+520h+posWs+8]
                      vmovss  dword ptr [rbp+520h+outVelLs+8], xmm2
                    }
                    CG_DebugLine(&posWs, &outVelLs, &colorBlue, 0, 5);
                    __asm { vcvtss2sd xmm3, xmm6, xmm6 }
                    v211 = "Off";
                    if ( v205 )
                      v211 = "On";
                    __asm { vmovq   r9, xmm3 }
                    j_sprintf(_Buffer, "%s\nSpeed:%6.3f", v211, *(double *)&_XMM3);
                    __asm { vmovaps xmm2, xmm11; scale }
                    CG_DebugString(&posWs, &colorCyan, *(float *)&_XMM2, _Buffer, 0, 1);
                  }
                }
              }
            }
            v138 = (unsigned int)(v138 + 1);
            ++v139;
          }
          while ( (unsigned int)v138 < 2 );
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
      }
    }
  }
  _R11 = &v251;
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
CgVehicleEventSystem::CarGamepadRumble
==============
*/

void __fastcall CgVehicleEventSystem::CarGamepadRumble(CgVehicleEventSystem *this, double intensity)
{
  cg_t *LocalClientGlobals; 
  float scale; 

  _RBX = DCONST_DVARFLT_bg_carGamepadRumble;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm6, xmm1
  }
  if ( !DCONST_DVARFLT_bg_carGamepadRumble && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_carGamepadRumble") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 465, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmulss  xmm0, xmm7, xmm6; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  [rsp+68h+scale], xmm0 }
  CG_Rumble_PlayDeferred(this->m_localClientNum, &this->m_rumbleCarContinuous, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, scale, 1);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
CgVehicleEventSystem::CarImpact
==============
*/
void CgVehicleEventSystem::CarImpact(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *posWs, unsigned int surfaceData, const vec3_t *normal, bool playvfx)
{
  unsigned int m_vehicleDefIndex; 
  const vec3_t *v17; 
  char v30; 
  char v31; 
  unsigned int pbidType; 
  SndAliasList *sndHardAlias; 
  __int64 v38; 
  unsigned int ImpactLight; 
  SndAliasList *sndLightAlias; 
  unsigned int ImpactHard; 
  int v42; 
  char v43; 
  __int64 AvailableVfxSlot; 
  float v58; 

  _RDI = (BgVehiclePhysicsGround *)vehObj;
  if ( Physics_IsPredictiveWorld(vehObj->m_worldId) && _RDI->m_playerControlled )
  {
    CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    m_vehicleDefIndex = _RDI->m_vehicleDefIndex;
    if ( m_vehicleDefIndex < 0x80 )
    {
      _RBP = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
      if ( _RBP )
      {
        __asm { vmovss  xmm0, dword ptr [rdi+190h] }
        v17 = normal;
        __asm
        {
          vmovaps [rsp+0B8h+var_38], xmm6
          vmovaps [rsp+0B8h+var_48], xmm7
          vmovaps [rsp+0B8h+var_58], xmm8
          vmulss  xmm2, xmm0, dword ptr [r15+4]
          vmovss  xmm0, dword ptr [rdi+18Ch]
          vmulss  xmm1, xmm0, dword ptr [r15]
          vaddss  xmm3, xmm2, xmm1
          vmovss  xmm2, dword ptr [rdi+194h]
          vmulss  xmm0, xmm2, dword ptr [r15+8]
          vaddss  xmm0, xmm3, xmm0
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
          vmovaps [rsp+0B8h+var_68], xmm9
          vmovss  xmm9, cs:__real@3f800000
          vmovaps xmm2, xmm9; max
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps xmm8, xmm9
          vxorps  xmm6, xmm6, xmm6
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+350h]; Y
          vcomiss xmm1, xmm9
          vmovaps xmm7, xmm0
        }
        if ( v30 )
          goto LABEL_9;
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+0C88h]
          vcomiss xmm2, xmm6
        }
        if ( v30 | v31 )
        {
          __asm { vcomiss xmm2, cs:__real@be4ccccd }
          if ( !v30 )
            goto LABEL_9;
        }
        powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vsubss  xmm8, xmm9, xmm0
          vcomiss xmm8, cs:__real@3a83126f
        }
        if ( !(v30 | v31) )
        {
LABEL_9:
          pbidType = 4;
          sndHardAlias = NULL;
          while ( 1 )
          {
            v38 = _RDI->m_vehicleId - 1;
            if ( (int)v38 < 0 )
              v38 = 0i64;
            if ( !SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v38].ids[pbidType]) )
              break;
            if ( ++pbidType > 7 )
            {
              CgVehicleEventSystem::StopSoundDeferred(this, 4u);
              pbidType = 4;
              break;
            }
          }
          ImpactLight = _RDI->m_sound.ImpactLight;
          if ( ImpactLight )
            sndLightAlias = SND_FindAliasFromId(ImpactLight);
          else
            sndLightAlias = NULL;
          ImpactHard = _RDI->m_sound.ImpactHard;
          if ( ImpactHard )
            sndHardAlias = SND_FindAliasFromId(ImpactHard);
          __asm { vmovss  [rsp+0B8h+var_78], xmm8 }
          v42 = CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, _RDI, &_RBP->vehiclePhysicsDef.sndImpactHard, &_RBP->vehiclePhysicsDef.sndImpactLight, sndHardAlias, sndLightAlias, posWs, surfaceData, v58, pbidType);
          v17 = normal;
          if ( v42 >= 0 && (unsigned int)v42 < 0xC0 )
            this->m_sounds[(__int64)v42].debug = 1;
        }
        v43 = 0;
        __asm { vmovaps xmm8, [rsp+0B8h+var_58] }
        if ( playvfx )
        {
          if ( _RBP->vehiclePhysicsDef.vfxImpactHard.surfaceEffects || (v43 = 0, _RBP->vehiclePhysicsDef.vfxImpactLight.surfaceEffects) )
          {
            AvailableVfxSlot = CgVehicleEventSystem::FindAvailableVfxSlot(this, _RDI->m_vfx.Impact, 4u);
            *(double *)&_XMM0 = BgVehiclePhysics::GetPlaneSpeed(_RDI);
            __asm { vmulss  xmm1, xmm0, cs:__real@3d68ba2f; factor }
            CgVehicleEventSystem::PlayFactorDependentSurfaceVfx(this, *(float *)&_XMM1, &_RBP->vehiclePhysicsDef.vfxImpactHard, &_RBP->vehiclePhysicsDef.vfxImpactLight, posWs, v17, surfaceData, &_RDI->m_vfx.Impact[AvailableVfxSlot]);
          }
        }
        __asm
        {
          vmovss  xmm0, cs:__real@40200000
          vcomiss xmm0, dword ptr [rdi+2B0h]
        }
        if ( v43 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehShakeImpactScale, "bg_vehShakeImpactScale");
          __asm
          {
            vmulss  xmm1, xmm7, xmm7
            vmulss  xmm2, xmm1, xmm7
            vmulss  xmm3, xmm2, xmm7
            vsubss  xmm1, xmm9, xmm3
            vmulss  xmm6, xmm0, xmm1
          }
          *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RDI);
          __asm
          {
            vmulss  xmm1, xmm0, xmm0; normalSpeed
            vmovaps xmm2, xmm6; shakeScale
          }
          CgVehicleEventSystem::ImpactShakeCamOnSpeed(this, *(float *)&_XMM1, *(float *)&_XMM2);
        }
        __asm
        {
          vmovaps xmm7, [rsp+0B8h+var_48]
          vmovaps xmm6, [rsp+0B8h+var_38]
          vmovaps xmm9, [rsp+0B8h+var_68]
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
  __int64 v7; 
  const vec3_t *posWs; 
  unsigned int PhysicsBodyId; 
  unsigned int m_vehicleDefIndex; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v13; 
  SndAliasList *AliasFromId; 
  char v43; 
  char v44; 
  unsigned int AvailableVfxSlot; 
  const ParticleSystemDef *particleSystemDef; 
  FootstepVFX *surfaceEffects; 
  __int64 v49; 
  unsigned int ImpactLight; 
  SndAliasList *sndLightAlias; 
  unsigned int ImpactHard; 
  float v56; 
  vec3_t position; 
  vec4_t orientation; 

  v7 = surfaceData;
  posWs = impactPosWs;
  _RBX = (BgVehiclePhysicsGround *)vehObj;
  if ( BgVehiclePhysics::IsKeyframed(&vehObj->BgVehiclePhysics) && !_RBX->m_pmoveObject )
  {
    if ( BgVehiclePhysics::IsPhysicsBodyIdValid(_RBX) )
    {
      PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RBX);
      Physics_GetRigidBodyTransform((const Physics_WorldId)_RBX->m_worldId, PhysicsBodyId, &position, &orientation);
    }
    if ( !CgVehicleEventSystem::IsFarFromPlayer(this, &position) )
    {
      m_vehicleDefIndex = _RBX->m_vehicleDefIndex;
      if ( m_vehicleDefIndex < 0x80 )
      {
        CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
        ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
        v13 = ClientDef;
        if ( ClientDef )
        {
          __asm
          {
            vmovsd  xmm0, qword ptr [rbx+140h]
            vmovsd  [rsp+0F8h+var_88], xmm0
          }
          if ( (_DWORD)v7 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r12]
              vsubss  xmm4, xmm0, dword ptr [rsp+0F8h+position]
              vmovss  xmm1, dword ptr [r12+4]
              vsubss  xmm5, xmm1, dword ptr [rsp+0F8h+position+4]
              vmovss  xmm0, dword ptr [r12+8]
            }
            AliasFromId = NULL;
            __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
            _R14 = &ClientDef->vehiclePhysicsDef.vfxImpactHard;
            __asm
            {
              vsubss  xmm6, xmm0, dword ptr [rsp+0F8h+position+8]
              vmulss  xmm0, xmm6, xmm6
              vmulss  xmm2, xmm5, xmm5
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm1, xmm2, xmm2
              vcmpless xmm0, xmm1, cs:__real@80000000
              vmovaps [rsp+0F8h+var_58], xmm7
              vmovss  xmm7, cs:__real@3f800000
              vblendvps xmm0, xmm1, xmm7, xmm0
              vdivss  xmm2, xmm7, xmm0
              vmulss  xmm0, xmm4, xmm2
              vmulss  xmm1, xmm5, xmm2
              vmovss  dword ptr [rsp+0F8h+position], xmm0
              vmulss  xmm0, xmm6, xmm2
              vmovss  dword ptr [rsp+0F8h+position+4], xmm1
              vmovss  xmm1, dword ptr [rsp+0F8h+var_88]
              vmulss  xmm3, xmm1, xmm1
              vmovss  dword ptr [rsp+0F8h+position+8], xmm0
              vmovss  xmm0, dword ptr [rsp+0F8h+var_88+4]
              vmulss  xmm2, xmm0, xmm0
              vaddss  xmm1, xmm3, xmm2
              vsqrtss xmm3, xmm1, xmm1
              vmulss  xmm6, xmm3, cs:__real@3d68ba2f
            }
            if ( ClientDef->vehiclePhysicsDef.vfxImpactHard.surfaceEffects || ClientDef->vehiclePhysicsDef.vfxImpactLight.surfaceEffects )
            {
              AvailableVfxSlot = CgVehicleEventSystem::FindAvailableVfxSlot(this, _RBX->m_vfx.Impact, 4u);
              __asm { vcomiss xmm6, dword ptr [r14+8] }
              _RCX = &v13->vehiclePhysicsDef.vfxImpactLight;
              if ( v43 | v44 )
              {
                __asm { vcomiss xmm6, dword ptr [rcx+8] }
                _R14 = NULL;
                if ( !(v43 | v44) )
                  _R14 = &v13->vehiclePhysicsDef.vfxImpactLight;
              }
              particleSystemDef = NULL;
              if ( _R14 )
              {
                surfaceEffects = _R14->surfaceEffects;
                if ( _R14->surfaceEffects )
                {
                  if ( (unsigned int)v7 >= 0x40 || (particleSystemDef = surfaceEffects->footstepVFX[v7].particleSystemDef) == NULL && (particleSystemDef = surfaceEffects->footstepVFX[36].particleSystemDef) == NULL )
                    particleSystemDef = NULL;
                }
              }
              CgVehicleEventSystem::PlayFactorDependentVfx(this, particleSystemDef, posWs, &position, &_RBX->m_vfx.Impact[AvailableVfxSlot], NULL);
            }
            v49 = _RBX->m_vehicleId - 1;
            if ( (int)v49 < 0 )
              v49 = 0i64;
            CgVehicleEventSystem::StopSoundDeferred(this, this->m_vehiclePlaybackIds[v49].ids[4]);
            ImpactLight = _RBX->m_sound.ImpactLight;
            if ( ImpactLight )
              sndLightAlias = SND_FindAliasFromId(ImpactLight);
            else
              sndLightAlias = NULL;
            ImpactHard = _RBX->m_sound.ImpactHard;
            if ( ImpactHard )
              AliasFromId = SND_FindAliasFromId(ImpactHard);
            __asm
            {
              vmovss  [rsp+0F8h+var_B0], xmm7
              vmovaps xmm1, xmm6; planeMPH
            }
            CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, *(float *)&_XMM1, _RBX, &v13->vehiclePhysicsDef.sndImpactHard, &v13->vehiclePhysicsDef.sndImpactLight, AliasFromId, sndLightAlias, posWs, v7, v56, 4u);
            __asm
            {
              vmovaps xmm7, [rsp+0F8h+var_58]
              vmovaps xmm6, [rsp+0F8h+var_48]
            }
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
  unsigned int ImpactHard; 
  unsigned int v30; 
  signed int vehIndex; 
  int m_entityNumber; 
  const SndAliasList *AliasFromId; 
  __int64 AvailableVfxSlot; 
  VehiclePhysicsVfxGroup *p_vfxImpactHard; 
  const ParticleSystemDef *particleSystemDef; 
  char v39; 
  char v40; 
  FootstepVFX *surfaceEffects; 
  float invertAxis; 
  float v62; 
  vec3_t normal; 
  vec3_t atPointWs; 
  vec3_t impulseWs; 

  _RBX = vehObj;
  if ( vehObj->m_playerControlled && Physics_IsPredictiveWorld(vehObj->m_worldId) )
  {
    CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    m_vehicleDefIndex = _RBX->m_vehicleDefIndex;
    if ( m_vehicleDefIndex < 0x80 )
    {
      ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
      if ( ClientDef )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+198h]
          vsubss  xmm4, xmm0, dword ptr [r14]
          vmovss  xmm1, dword ptr [rbx+19Ch]
          vsubss  xmm5, xmm1, dword ptr [r14+4]
          vmovss  xmm0, dword ptr [rbx+1A0h]
        }
        ImpactHard = _RBX->m_sound.ImpactHard;
        __asm
        {
          vmovaps [rsp+0E8h+var_48], xmm6
          vmovaps [rsp+0E8h+var_58], xmm7
          vsubss  xmm6, xmm0, dword ptr [r14+8]
          vmovss  xmm7, cs:__real@3f800000
          vmulss  xmm0, xmm6, xmm6
          vmulss  xmm2, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm7, xmm0
          vdivss  xmm2, xmm7, xmm0
          vmulss  xmm0, xmm4, xmm2
          vmovss  dword ptr [rsp+0E8h+normal], xmm0
          vmulss  xmm0, xmm6, xmm2
          vmulss  xmm1, xmm5, xmm2
          vmovss  dword ptr [rsp+0E8h+normal+8], xmm0
          vmovss  dword ptr [rsp+0E8h+normal+4], xmm1
        }
        if ( ImpactHard && SND_FindAliasFromId(ImpactHard) )
        {
          v30 = _RBX->m_sound.ImpactHard;
          vehIndex = _RBX->m_vehicleId - 1;
          m_entityNumber = _RBX->m_entityNumber;
          if ( vehIndex < 0 )
            vehIndex = 0;
          if ( v30 )
            AliasFromId = SND_FindAliasFromId(v30);
          else
            AliasFromId = NULL;
          __asm
          {
            vmovss  [rsp+0E8h+var_B8], xmm7
            vmovss  dword ptr [rsp+0E8h+invertAxis], xmm7
          }
          CgVehicleEventSystem::PlaySoundSurfaceDeferred(this, AliasFromId, m_entityNumber, 7u, playerPos, invertAxis, v62, 0, vehIndex, 9u);
        }
        _RDI = &ClientDef->vehiclePhysicsDef.vfxImpactHard;
        if ( ClientDef->vehiclePhysicsDef.vfxImpactHard.surfaceEffects || ClientDef->vehiclePhysicsDef.vfxImpactLight.surfaceEffects )
        {
          AvailableVfxSlot = CgVehicleEventSystem::FindAvailableVfxSlot(this, _RBX->m_vfx.Impact, 4u);
          *(double *)&_XMM0 = BgVehiclePhysics::GetPlaneSpeed(_RBX);
          __asm
          {
            vmulss  xmm1, xmm0, cs:__real@3d68ba2f
            vaddss  xmm2, xmm1, dword ptr [rsi+4E0h]
            vcomiss xmm2, dword ptr [rdi+8]
          }
          p_vfxImpactHard = NULL;
          particleSystemDef = NULL;
          if ( !(v39 | v40) )
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
          CgVehicleEventSystem::PlayFactorDependentVfx(this, particleSystemDef, playerPos, &normal, &_RBX->m_vfx.Impact[AvailableVfxSlot], NULL);
        }
        *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
        __asm
        {
          vmovaps xmm6, xmm0
          vmulss  xmm0, xmm0, cs:__real@3fc00000; val
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm2, cs:__real@3e19999a; shakeScale
          vmovaps xmm1, xmm0; normalSpeed
        }
        CgVehicleEventSystem::ImpactShakeCamOnSpeed(this, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm3, cs:__real@42c80000
          vmulss  xmm4, xmm6, cs:__real@45bb8000
          vmulss  xmm0, xmm3, dword ptr [rbx+18Ch]
          vaddss  xmm1, xmm0, dword ptr [rbx+22Ch]
          vmulss  xmm0, xmm3, dword ptr [rbx+190h]
          vmulss  xmm2, xmm4, dword ptr [rsp+0E8h+normal+4]
          vmovss  dword ptr [rsp+0E8h+atPointWs], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+230h]
          vmulss  xmm0, xmm3, dword ptr [rbx+194h]
          vmovss  dword ptr [rsp+0E8h+atPointWs+4], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+234h]
          vmulss  xmm0, xmm4, dword ptr [rsp+0E8h+normal]
          vmovss  dword ptr [rsp+0E8h+atPointWs+8], xmm1
          vmulss  xmm1, xmm4, dword ptr [rsp+0E8h+normal+8]
          vmovss  dword ptr [rsp+0E8h+impulseWs+8], xmm1
          vmovss  dword ptr [rsp+0E8h+impulseWs], xmm0
          vmovss  dword ptr [rsp+0E8h+impulseWs+4], xmm2
        }
        BgVehiclePhysics::ApplyAngularImpulse(_RBX, &impulseWs, &atPointWs);
        __asm
        {
          vmovaps xmm7, [rsp+0E8h+var_58]
          vmovaps xmm6, [rsp+0E8h+var_48]
        }
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::CarLanded
==============
*/

void __fastcall CgVehicleEventSystem::CarLanded(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, double timeWasInAir)
{
  char v12; 
  char v16; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v22; 
  void (__fastcall *CarGamepadRumble)(BgVehicleEventSystem *, float); 
  const dvar_t *v25; 
  unsigned int m_vehicleDefIndex; 
  const VehicleDef *ClientDef; 
  SndAliasList *sndLightAlias; 
  unsigned int v31; 
  unsigned int surfaceData; 
  unsigned int Suspension; 
  float fmt; 
  float v41; 
  vec3_t outOrg; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm6, xmm2
  }
  if ( Physics_IsPredictiveWorld(vehObj->m_worldId) && vehObj->m_playerControlled )
  {
    _RDI = DCONST_DVARFLT_bg_vehShakeMinTimeAir;
    if ( !DCONST_DVARFLT_bg_vehShakeMinTimeAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehShakeMinTimeAir") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm6, dword ptr [rdi+28h] }
    if ( !v12 )
    {
      _RDI = DCONST_DVARFLT_bg_vehShakeMinTimeAir;
      if ( !DCONST_DVARFLT_bg_vehShakeMinTimeAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehShakeMinTimeAir") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vxorps  xmm1, xmm1, xmm1; min
        vcomiss xmm0, xmm1
      }
      if ( v12 | v16 )
        __asm { vmovaps xmm0, xmm6; val }
      else
        __asm { vdivss  xmm0, xmm6, xmm0 }
      __asm { vmovss  xmm2, cs:__real@3f800000; max }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm7, xmm0 }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      __asm { vmovss  xmm8, cs:SHAKECAM_RAD }
      v22 = DCONST_DVARFLT_bg_vehLandedShake;
      if ( !DCONST_DVARFLT_bg_vehLandedShake && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehLandedShake") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rdi+28h]; scale
        vmovss  dword ptr [rsp+0B8h+fmt], xmm8
      }
      CG_StartShakeCamera(this->m_localClientNum, *(float *)&_XMM1, 800, &outOrg, fmt);
      CarGamepadRumble = this->CarGamepadRumble;
      v25 = DCONST_DVARFLT_bg_vehLandedRumble;
      if ( !DCONST_DVARFLT_bg_vehLandedRumble && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehLandedRumble") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      __asm { vmulss  xmm1, xmm7, dword ptr [rdi+28h] }
      ((void (__fastcall *)(CgVehicleEventSystem *))CarGamepadRumble)(this);
      __asm
      {
        vmovss  xmm7, cs:__real@3e4ccccd
        vcomiss xmm6, xmm7
      }
      if ( !(v12 | v16) )
      {
        m_vehicleDefIndex = vehObj->m_vehicleDefIndex;
        if ( m_vehicleDefIndex < 0x80 )
        {
          CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
          ClientDef = CgVehicleSystem::GetClientDef(m_vehicleDefIndex);
          if ( ClientDef )
          {
            sndLightAlias = NULL;
            v31 = 0;
            if ( vehObj->m_wheelCount )
            {
              while ( BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, v31)->m_contactBodyId == 0xFFFFFF )
              {
                if ( ++v31 >= vehObj->m_wheelCount )
                  goto LABEL_30;
              }
              surfaceData = (BgVehiclePhysicsGround::GetWheel((BgVehiclePhysicsGround *)vehObj, v31)->m_surfFlags >> 19) & 0x3F;
              if ( surfaceData )
              {
                Suspension = vehObj->m_sound.Suspension;
                if ( Suspension )
                  sndLightAlias = SND_FindAliasFromId(Suspension);
                __asm
                {
                  vsubss  xmm0, xmm6, xmm7
                  vmulss  xmm1, xmm0, cs:__real@3fa00000
                  vmovss  [rsp+0B8h+var_78], xmm1
                }
                CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, vehObj, &ClientDef->vehiclePhysicsDef.sndSuspension, &ClientDef->vehiclePhysicsDef.sndSuspension, sndLightAlias, sndLightAlias, &vehObj->m_centerOfMassWs, surfaceData, v41, 3u);
              }
            }
          }
        }
      }
LABEL_30:
      memset(&outOrg, 0, sizeof(outOrg));
    }
  }
  _R11 = &v43;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  int v37; 
  vec3_t outOrigin; 
  animScriptVehicleType_t outVehicleType; 
  ParticleSystemDef *pDef; 
  __int64 v41; 
  __int64 v42; 
  vec3_t out; 
  vec3_t invertAxis; 
  vec3_t posWs; 

  v41 = -2i64;
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
              LODWORD(v42) = 0;
              BYTE4(v42) = 0;
              BG_Vehicle_GetStickerCamoMaterialIndices(&v10->nextState.lerp.u.agentCorpse.attachModels[6].m_data, (VehicleStickerCamoInfo *)&v42);
              VehicleCamo = BG_Camo_GetVehicleCamo(BYTE4(v42));
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
                    v42 = (unsigned int)v19;
                    if ( ClientDef->doorBones[v19] )
                    {
                      v37 = 254;
                      v21 = (__int64)VehicleSystem->PhysicsGetBoneLocalMatrix(VehicleSystem, v18->m_entityNumber, ClientDef->doorBones[v19], &v37);
                      if ( v21 )
                      {
                        AxisTransformVec3((const tmat33_t<vec3_t> *)&v18->m_transform, (const vec3_t *)(v21 + 16), &out);
                        CG_GetPoseOrigin(&v10->pose, &outOrigin);
                        __asm
                        {
                          vmovss  xmm0, dword ptr [rbp+57h+outOrigin]
                          vaddss  xmm1, xmm0, dword ptr [rbp+57h+out]
                          vmovss  dword ptr [rbp+57h+posWs], xmm1
                          vmovss  xmm2, dword ptr [rbp+57h+outOrigin+4]
                          vaddss  xmm0, xmm2, dword ptr [rbp+57h+out+4]
                          vmovss  dword ptr [rbp+57h+posWs+4], xmm0
                          vmovss  xmm1, dword ptr [rbp+57h+outOrigin+8]
                          vaddss  xmm2, xmm1, dword ptr [rbp+57h+out+8]
                          vmovss  dword ptr [rbp+57h+posWs+8], xmm2
                          vmovss  xmm3, cs:__real@3f800000
                          vmovss  dword ptr [rbp+57h+var_58], xmm3
                        }
                        _ER13 = v19 & 1;
                        _EAX = 0;
                        __asm
                        {
                          vmovd   xmm1, eax
                          vmovd   xmm0, r13d
                          vpcmpeqd xmm2, xmm0, xmm1
                          vmovss  xmm1, cs:__real@bf800000
                          vblendvps xmm0, xmm1, xmm3, xmm2
                          vmovss  dword ptr [rbp+57h+var_58+4], xmm0
                          vmovss  dword ptr [rbp+57h+var_58+8], xmm3
                        }
                        CgVehicleEventSystem::PlayFactorDependentVfx(this, pDef, &posWs, v18->m_transform.m, (ParticleSystemHandle *)&v18[4].m_controls.externalValues[v42 + 4], &invertAxis);
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
  char v16; 
  unsigned int v18; 
  signed int v21; 
  unsigned int m_wheelCount; 
  unsigned int v23; 
  bool v26; 
  __int64 v27; 
  unsigned int v28; 
  bool v29; 
  __int64 v36[8]; 

  _R15 = outMaxSuspDeform;
  *outSurfData = 0;
  _RBX = (BgVehiclePhysicsGround *)vehObj;
  *outSurfDataSkid = 0;
  *outMaxSuspDeform = 0.0;
  *outSuspWs = vehObj->m_centerOfMassWs;
  if ( !vehObj->IsInAir((BgVehiclePhysics *)vehObj) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+178h]
      vmulss  xmm3, xmm0, dword ptr [rbx+1A8h]
      vmovss  xmm1, dword ptr [rbx+174h]
      vmulss  xmm2, xmm1, dword ptr [rbx+1A4h]
      vmovss  xmm0, dword ptr [rbx+17Ch]
      vmulss  xmm1, xmm0, dword ptr [rbx+1ACh]
    }
    v16 = 1;
    __asm { vaddss  xmm4, xmm3, xmm2 }
    v18 = 0;
    __asm
    {
      vaddss  xmm3, xmm4, xmm1
      vxorps  xmm2, xmm2, xmm2
      vcomiss xmm3, xmm2
    }
    memset(v36, 0, sizeof(v36));
    v21 = -1;
    m_wheelCount = _RBX->m_wheelCount;
    v23 = 0;
    if ( m_wheelCount )
    {
      __asm
      {
        vmovaps [rsp+0E8h+var_48], xmm6
        vmovss  xmm6, cs:__real@3a83126f
      }
      do
      {
        if ( v18 >= m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 252, ASSERT_TYPE_ASSERT, "(wheelNdx < m_wheelCount)", (const char *)&queryFormat, "wheelNdx < m_wheelCount") )
          __debugbreak();
        _RCX = v18;
        v26 = _RBX->m_wheels[_RCX].m_contactBodyId <= 0xFFFFFF;
        if ( _RBX->m_wheels[_RCX].m_contactBodyId == 0xFFFFFF )
        {
          __asm { vcomiss xmm6, dword ptr [rcx+rbx+348h] }
          if ( _RBX->m_wheels[_RCX].m_contactBodyId < 0xFFFFFF )
            v16 = 0;
        }
        else
        {
          v27 = (_RBX->m_wheels[_RCX].m_surfFlags >> 19) & 0x3F;
          v28 = (unsigned __int8)++*((_BYTE *)v36 + v27);
          v29 = v28 < v23;
          if ( v28 > v23 )
          {
            v23 = *((unsigned __int8 *)v36 + v27);
            *outSurfData = v27;
          }
          __asm { vcomiss xmm6, dword ptr [rcx+rbx+348h] }
          if ( v29 && !*outSurfDataSkid )
            *outSurfDataSkid = (_RBX->m_wheels[_RCX].m_surfFlags >> 19) & 0x3F;
          v26 = 1;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rbx+33Ch]
          vcomiss xmm0, dword ptr [r15]
        }
        if ( !v26 )
        {
          __asm { vmovss  dword ptr [r15], xmm0 }
          v21 = v18;
        }
        m_wheelCount = _RBX->m_wheelCount;
        ++v18;
      }
      while ( v18 < m_wheelCount );
      __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
      if ( v21 > 0 )
      {
        _RAX = BgVehiclePhysicsGround::GetWheel(_RBX, v21);
        _RCX = outSuspWs;
        __asm
        {
          vmovsd  xmm0, qword ptr [rax+0Ch]
          vmovsd  qword ptr [rcx], xmm0
        }
        outSuspWs->v[2] = _RAX->m_hardPointWs.v[2];
      }
      if ( !v16 )
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
  int v28; 
  vec3_t vec; 
  ExtentBounds outExtBounds; 
  tmat33_t<vec3_t> axis; 

  v3 = DVARBOOL_vehicle_horn_heli_tag;
  _RSI = outOffset;
  if ( !DVARBOOL_vehicle_horn_heli_tag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_horn_heli_tag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && vehObj->m_vehicleAnimProfile == VEH_ANIMPROFILE_LBRAVO && (VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum), m_entityNumber = (unsigned int)vehObj->m_entityNumber, v28 = 254, (v9 = (const vec4_t *)VehicleSystem->PhysicsGetBoneLocalMatrix(VehicleSystem, m_entityNumber, scr_const.tag_light_1, &v28)) != NULL) )
  {
    QuatToAxis(v9, &axis);
    __asm
    {
      vmovss  xmm3, cs:__real@40a00000
      vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+axis]
      vaddss  xmm2, xmm1, dword ptr [rbx+10h]
      vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+axis+4]
      vmovss  dword ptr [rsp+0B8h+vec], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbx+14h]
      vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+axis+8]
      vmovss  dword ptr [rsp+0B8h+vec+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbx+18h]
      vmovss  dword ptr [rsp+0B8h+vec+8], xmm2
    }
    AxisTransformVec3((const tmat33_t<vec3_t> *)&vehObj->m_transform, &vec, _RSI);
  }
  else
  {
    GetVehicleAndTurretExtBounds((const LocalClientNum_t)this->m_localClientNum, vehObj, &outExtBounds);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+0B8h+outExtBounds.maxs+8]
      vaddss  xmm0, xmm3, dword ptr [rsp+0B8h+outExtBounds.mins+8]
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vsubss  xmm2, xmm1, dword ptr [rsp+0B8h+outExtBounds.mins+8]
      vsubss  xmm1, xmm3, xmm1
      vmaxss  xmm0, xmm2, xmm1
      vmulss  xmm2, xmm0, cs:__real@40000000
      vaddss  xmm3, xmm2, cs:__real@40a00000
      vmulss  xmm0, xmm3, dword ptr [rdi+18Ch]
      vmovss  dword ptr [rsi], xmm0
      vmulss  xmm1, xmm3, dword ptr [rdi+190h]
      vmovss  dword ptr [rsi+4], xmm1
      vmulss  xmm0, xmm3, dword ptr [rdi+194h]
      vmovss  dword ptr [rsi+8], xmm0
    }
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

  _RBX = outExtBounds;
  if ( !BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)vehObj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 251, ASSERT_TYPE_ASSERT, "(vehObj.IsPhysicsBodyIdValid())", (const char *)&queryFormat, "vehObj.IsPhysicsBodyIdValid()") )
    __debugbreak();
  m_worldId = vehObj->m_worldId;
  PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)vehObj);
  if ( !Physics_IsRigidBodyValid(m_worldId, PhysicsBodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 254, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( worldId, vehicleBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( worldId, vehicleBodyId )") )
    __debugbreak();
  Physics_GetRigidBodyAABB(m_worldId, PhysicsBodyId, &_RBX->mins, &_RBX->maxs);
  if ( vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_HAS_TURRET) )
  {
    TurretEnt = CG_Turret_GetTurretEnt(localClientNum);
    if ( TurretEnt )
    {
      BodyId = PhysicsVehicle_GetBodyId(m_worldId, TurretEnt->nextState.number);
      if ( Physics_IsRigidBodyValid(m_worldId, BodyId) )
      {
        Physics_GetRigidBodyAABB(m_worldId, BodyId, &aabbMin, &aabbMax);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+78h+aabbMin]
          vminss  xmm1, xmm0, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm1
          vmovss  xmm2, dword ptr [rbx+0Ch]
          vmaxss  xmm0, xmm2, dword ptr [rsp+78h+aabbMax]
          vmovss  dword ptr [rbx+0Ch], xmm0
          vmovss  xmm1, dword ptr [rbx+4]
          vminss  xmm0, xmm1, dword ptr [rsp+78h+aabbMin+4]
          vmovss  dword ptr [rbx+4], xmm0
          vmovss  xmm1, dword ptr [rbx+10h]
          vmaxss  xmm0, xmm1, dword ptr [rsp+78h+aabbMax+4]
          vmovss  dword ptr [rbx+10h], xmm0
          vmovss  xmm1, dword ptr [rbx+8]
          vminss  xmm0, xmm1, dword ptr [rsp+78h+aabbMin+8]
          vmovss  xmm1, dword ptr [rsp+78h+aabbMax+8]
          vmovss  dword ptr [rbx+8], xmm0
          vmaxss  xmm0, xmm1, dword ptr [rbx+14h]
          vmovss  dword ptr [rbx+14h], xmm0
        }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+14h]
        vaddss  xmm1, xmm0, cs:__real@41a00000
        vmovss  dword ptr [rbx+14h], xmm1
      }
    }
  }
}

/*
==============
CgVehicleEventSystem::GetWheelContactPointKeyframed
==============
*/
bool CgVehicleEventSystem::GetWheelContactPointKeyframed(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, unsigned int windex, const CEntVehicleInfo *vinfo, vec3_t *outPointWs)
{
  __int64 v12; 
  bool v14; 
  bool v15; 
  bool v19; 
  unsigned __int8 v20; 
  unsigned int PhysicsBodyId; 
  tmat43_t<vec3_t> result; 
  vec4_t orientation; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  _RBP = outPointWs;
  _RDI = vinfo;
  v12 = windex;
  v14 = windex < 0xC;
  if ( windex >= 0xC )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 822, ASSERT_TYPE_ASSERT, "(windex < 12)", (const char *)&queryFormat, "windex < VEHICLE_MAX_WHEEL_COUNT");
    v14 = 0;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, cs:__real@37800080
    vcomiss xmm6, cs:__real@3f7fbe77
  }
  if ( v14 )
  {
    v20 = _RDI->wheelBoneIndex[v12];
    if ( v20 < 0xFEu && CG_Vehicle_GetWorldBoneMatrix((const LocalClientNum_t)this->m_localClientNum, vehObj->m_entityNumber, v20, &result) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+10h]
        vmovss  xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vmovss  xmm5, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vmovaps [rsp+0C8h+var_48], xmm7
        vmulss  xmm7, xmm0, cs:__real@3f000000
        vmulss  xmm1, xmm7, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm2, xmm1, dword ptr [rsp+0C8h+result+24h]
        vmulss  xmm0, xmm0, xmm6
        vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm6, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm2, xmm2, xmm0
        vmulss  xmm1, xmm7, xmm4
        vaddss  xmm3, xmm1, dword ptr [rsp+0C8h+result+28h]
        vmulss  xmm0, xmm7, xmm5
        vmovaps xmm7, [rsp+0C8h+var_48]
        vmovss  dword ptr [rbp+0], xmm2
        vmulss  xmm2, xmm6, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm1, xmm3, xmm2
        vaddss  xmm3, xmm0, dword ptr [rsp+0C8h+result+2Ch]
        vmovss  dword ptr [rbp+4], xmm1
        vmulss  xmm2, xmm6, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rbp+8], xmm0
      }
    }
    else if ( BgVehiclePhysics::IsPhysicsBodyIdValid(&vehObj->BgVehiclePhysics) )
    {
      PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(&vehObj->BgVehiclePhysics);
      Physics_GetRigidBodyTransform((const Physics_WorldId)vehObj->m_worldId, PhysicsBodyId, outPointWs, &orientation);
    }
    v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
  return v19;
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
  const vec4_t *v21; 
  int v41; 
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
        out.v[2] = vec3_origin.v[2];
        __asm
        {
          vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
          vmovsd  qword ptr [rsp+0E8h+out], xmm0
        }
        if ( !DVARBOOL_vehicle_horn_heli_tag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_horn_heli_tag") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        if ( v17->current.enabled && vehObj->m_vehicleAnimProfile == VEH_ANIMPROFILE_LBRAVO && (VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum), m_entityNumber = (unsigned int)vehObj->m_entityNumber, v41 = 254, (v21 = (const vec4_t *)VehicleSystem->PhysicsGetBoneLocalMatrix(VehicleSystem, m_entityNumber, scr_const.tag_light_1, &v41)) != NULL) )
        {
          QuatToAxis(v21, &axis);
          __asm
          {
            vmovss  xmm3, cs:__real@40a00000
            vmulss  xmm1, xmm3, dword ptr [rsp+0E8h+axis]
            vaddss  xmm2, xmm1, dword ptr [rdi+10h]
            vmulss  xmm1, xmm3, dword ptr [rsp+0E8h+axis+4]
            vmovss  dword ptr [rsp+0E8h+vec], xmm2
            vaddss  xmm2, xmm1, dword ptr [rdi+14h]
            vmulss  xmm1, xmm3, dword ptr [rsp+0E8h+axis+8]
            vmovss  dword ptr [rsp+0E8h+vec+4], xmm2
            vaddss  xmm2, xmm1, dword ptr [rdi+18h]
            vmovss  dword ptr [rsp+0E8h+vec+8], xmm2
          }
          AxisTransformVec3((const tmat33_t<vec3_t> *)&vehObj->m_transform, &vec, &out);
        }
        else
        {
          GetVehicleAndTurretExtBounds((const LocalClientNum_t)this->m_localClientNum, vehObj, &outExtBounds);
          __asm
          {
            vmovss  xmm3, dword ptr [rsp+0E8h+outExtBounds.maxs+8]
            vaddss  xmm0, xmm3, dword ptr [rsp+0E8h+outExtBounds.mins+8]
            vmulss  xmm1, xmm0, cs:__real@3f000000
            vsubss  xmm2, xmm1, dword ptr [rsp+0E8h+outExtBounds.mins+8]
            vsubss  xmm1, xmm3, xmm1
            vmaxss  xmm0, xmm2, xmm1
            vmulss  xmm2, xmm0, cs:__real@40000000
            vaddss  xmm3, xmm2, cs:__real@40a00000
            vmulss  xmm0, xmm3, dword ptr [rbx+18Ch]
            vmulss  xmm1, xmm3, dword ptr [rbx+190h]
            vmovss  dword ptr [rsp+0E8h+out], xmm0
            vmulss  xmm0, xmm3, dword ptr [rbx+194h]
            vmovss  dword ptr [rsp+0E8h+out+8], xmm0
            vmovss  dword ptr [rsp+0E8h+out+4], xmm1
          }
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

void __fastcall CgVehicleEventSystem::ImpactShakeCamOnSpeed(CgVehicleEventSystem *this, double normalSpeed, double shakeScale)
{
  cg_t *LocalClientGlobals; 
  char v13; 
  char v14; 
  const dvar_t *v17; 
  float fmt; 
  vec3_t outOrg; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  _RDI = DCONST_DVARFLT_bg_vehShakeImpactThreshold;
  if ( !DCONST_DVARFLT_bg_vehShakeImpactThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehShakeImpactThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  xmm0, dword ptr [rdi+28h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vcomiss xmm0, cs:__real@3f7fbe77 }
  if ( v13 )
  {
    __asm { vcomiss xmm6, xmm0 }
    if ( !(v13 | v14) )
    {
      __asm { vmulss  xmm6, xmm6, xmm6 }
      v17 = DCONST_DVARINT_bg_vehShakeImpactDur;
      if ( !DCONST_DVARINT_bg_vehShakeImpactDur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehShakeImpactDur") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+28h]
        vmulss  xmm1, xmm0, xmm6
        vcvttss2si r8d, xmm1; duration
      }
      if ( _ER8 > 0 )
      {
        __asm
        {
          vmulss  xmm1, xmm6, xmm7; scale
          vcomiss xmm1, cs:__real@3a83126f
          vmovss  xmm0, cs:SHAKECAM_RAD
          vmovss  dword ptr [rsp+88h+fmt], xmm0
        }
        CG_StartShakeCamera(this->m_localClientNum, *(float *)&_XMM1, _ER8, &outOrg, fmt);
      }
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
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
  char v19; 
  char v20; 
  _BOOL8 result; 
  vec3_t outOrg; 
  __int64 v24; 

  v24 = -2i64;
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RDI = posWs;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm3, xmm0, dword ptr [rsp+78h+outOrg]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+78h+outOrg+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+78h+outOrg+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm6, xmm3, xmm0
  }
  _RDI = DCONST_DVARFLT_bg_vehFxKFMaxDist;
  if ( !DCONST_DVARFLT_bg_vehFxKFMaxDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehFxKFMaxDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm6, xmm1
  }
  memset(&outOrg, 0, sizeof(outOrg));
  result = !(v19 | v20);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
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

__int64 __fastcall CgVehicleEventSystem::PlayFactorDependentSurfaceSound(CgVehicleEventSystem *this, double factor, const VehiclePhysicsSoundGroup *sndConfig, SndAliasList *snd)
{
  __int64 result; 
  char v11; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vcomiss xmm1, xmm0
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vcomiss xmm0, xmm6
  }
  result = 0xFFFFFFFFi64;
  _R11 = &v11;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
CgVehicleEventSystem::PlayFactorDependentSurfaceVfx
==============
*/

void __fastcall CgVehicleEventSystem::PlayFactorDependentSurfaceVfx(CgVehicleEventSystem *this, double factor, const VehiclePhysicsVfxGroup *vfxHard, const VehiclePhysicsVfxGroup *vfxLight, const vec3_t *posWs, const vec3_t *normal, unsigned int surfaceData, ParticleSystemHandle *phandle)
{
  char v8; 
  char v9; 
  const ParticleSystemDef *particleSystemDef; 
  FootstepVFX *surfaceEffects; 

  __asm { vcomiss xmm1, dword ptr [r8+8] }
  if ( v8 | v9 )
  {
    vfxHard = NULL;
    __asm { vcomiss xmm1, dword ptr [r9+8] }
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
  ParticleManager *v15; 
  ParticleSystemHandle v16; 
  __int64 v17; 
  ParticleSystemHandleImpl v18; 
  unsigned __int32 v19; 
  __int64 v21; 
  LocalClientNum_t v73; 
  cg_t *LocalClientGlobals; 
  ParticleSystemHandle v91; 
  __int128 v96; 
  __int128 v97; 
  __int128 v98; 
  __int128 v99; 
  char outAxis[64]; 
  float4 emitterPos; 
  vector3 emitterOrientationMat; 

  m_localClientNum = this->m_localClientNum;
  _RSI = posWs;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", m_localClientNum, 2) )
    __debugbreak();
  v15 = &g_particleManager[m_localClientNum];
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1517, ASSERT_TYPE_ASSERT, "(particleMgr)", (const char *)&queryFormat, "particleMgr") )
    __debugbreak();
  __asm { vmovaps [rsp+178h+var_48], xmm6 }
  if ( phandle )
  {
    v16 = *phandle;
    if ( *phandle && (v17 = ((__int64)(int)this->m_localClientNum << 12) + (v16 & 0xFFF), v18.__all32 = (unsigned int)g_particleSystemsGeneration[v17], v18.__all32 == v16) && g_particleSystems[0][v17] >= (ParticleSystem *)0x1000 )
    {
      v19 = 0;
      _RBX = 0i64;
      if ( v18.__all32 == v16 )
        v19 = *phandle & 0xFFF;
      v21 = (__int64)(int)this->m_localClientNum << 12;
      if ( *((_QWORD *)&g_particleSystems[0][v21] + v19) >= 0x1000ui64 )
        _RBX = *((_QWORD *)&g_particleSystems[0][v21] + v19);
      if ( _RBX )
      {
        if ( !*(_BYTE *)(_RBX + 559) || !pDef )
          goto LABEL_23;
        if ( !*(_QWORD *)(_RBX + 400) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
          __debugbreak();
        if ( pDef == *(const ParticleSystemDef **)(_RBX + 400) )
        {
          __asm { vmovss  xmm0, dword ptr [rsi] }
          HIDWORD(v96) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rsp+50h]
            vmovss  xmm3, xmm3, xmm0
            vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
            vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
            vmovups xmmword ptr [rbx+30h], xmm3
            vmovups xmm1, xmmword ptr [rbx+20h]
            vshufps xmm4, xmm1, xmmword ptr [rbx+30h], 44h ; 'D'
            vshufps xmm5, xmm1, xmmword ptr [rbx+30h], 0EEh ; 'î'
            vmovups xmm3, xmmword ptr [rbx]
            vshufps xmm6, xmm3, xmmword ptr [rbx+10h], 44h ; 'D'
            vshufps xmm2, xmm3, xmmword ptr [rbx+10h], 0EEh ; 'î'
            vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
            vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
            vmovups xmmword ptr [rsp+178h+outAxis+10h], xmm1
            vmovups xmmword ptr [rsp+178h+outAxis], xmm0
            vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
            vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
            vmovups xmmword ptr [rsp+178h+outAxis+20h], xmm0
            vmovups ymm0, ymmword ptr [rsp+178h+outAxis]
            vmovups xmmword ptr [rsp+178h+outAxis+30h], xmm1
            vmovups ymm1, ymmword ptr [rsp+178h+outAxis+20h]
            vmovups ymmword ptr [rbx+40h], ymm0
            vmovups ymmword ptr [rbx+60h], ymm1
          }
        }
        else
        {
LABEL_23:
          CgVehicleEventSystem::StopVfx(this, v15, phandle);
        }
        goto LABEL_30;
      }
    }
    else if ( pDef )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovaps [rsp+178h+var_58], xmm7
      }
      HIDWORD(v96) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+50h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
        vmovaps [rsp+178h+var_68], xmm8
        vmovaps [rsp+178h+var_78], xmm9
        vmovups xmmword ptr [rsp+50h], xmm3
        vmovups xmmword ptr [rsp+178h+emitterPos.v], xmm3
      }
      BG_AxisFromForward(normal, &identityMatrix33.m[2], (tmat33_t<vec3_t> *)outAxis);
      _RAX = invertAxis;
      if ( invertAxis )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rax]
          vmovss  xmm0, dword ptr [rsp+178h+outAxis]
          vmovss  xmm1, dword ptr [rsp+178h+outAxis+4]
          vmovss  xmm3, dword ptr [rax+4]
          vmulss  xmm4, xmm0, xmm2
          vmovss  xmm0, dword ptr [rsp+178h+outAxis+8]
          vmulss  xmm6, xmm0, xmm2
          vmovss  xmm0, dword ptr [rsp+178h+outAxis+0Ch]
          vmulss  xmm5, xmm1, xmm2
          vmovss  xmm1, dword ptr [rsp+178h+outAxis+10h]
          vmovss  xmm2, dword ptr [rax+8]
          vmulss  xmm7, xmm0, xmm3
          vmovss  xmm0, dword ptr [rsp+178h+outAxis+14h]
          vmulss  xmm8, xmm1, xmm3
          vmulss  xmm1, xmm2, dword ptr [rsp+178h+outAxis+1Ch]
          vmulss  xmm3, xmm0, xmm3
          vmovss  xmm0, dword ptr [rsp+178h+outAxis+18h]
          vmulss  xmm9, xmm0, xmm2
          vmovss  xmm0, dword ptr [rsp+178h+outAxis+20h]
          vmulss  xmm2, xmm0, xmm2
          vmovss  dword ptr [rsp+178h+outAxis+20h], xmm2
          vmovss  dword ptr [rsp+178h+outAxis], xmm4
          vmovss  dword ptr [rsp+178h+outAxis+4], xmm5
          vmovss  dword ptr [rsp+178h+outAxis+8], xmm6
          vmovss  dword ptr [rsp+178h+outAxis+0Ch], xmm7
          vmovss  dword ptr [rsp+178h+outAxis+10h], xmm8
          vmovss  dword ptr [rsp+178h+outAxis+14h], xmm3
          vmovss  dword ptr [rsp+178h+outAxis+18h], xmm9
          vmovss  dword ptr [rsp+178h+outAxis+1Ch], xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rsp+178h+outAxis+20h]
          vmovss  xmm1, dword ptr [rsp+178h+outAxis+1Ch]
          vmovss  xmm9, dword ptr [rsp+178h+outAxis+18h]
          vmovss  xmm3, dword ptr [rsp+178h+outAxis+14h]
          vmovss  xmm8, dword ptr [rsp+178h+outAxis+10h]
          vmovss  xmm7, dword ptr [rsp+178h+outAxis+0Ch]
          vmovss  xmm6, dword ptr [rsp+178h+outAxis+8]
          vmovss  xmm5, dword ptr [rsp+178h+outAxis+4]
          vmovss  xmm4, dword ptr [rsp+178h+outAxis]
        }
      }
      v73 = this->m_localClientNum;
      HIDWORD(v97) = 0;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+50h]
        vmovss  xmm0, xmm0, xmm4
        vinsertps xmm0, xmm0, xmm5, 10h
        vinsertps xmm0, xmm0, xmm6, 20h ; ' '
        vmovups xmmword ptr [rsp+50h], xmm0
        vmovups xmmword ptr [rsp+178h+emitterOrientationMat.x.v], xmm0
      }
      HIDWORD(v98) = 0;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+50h]
        vmovss  xmm0, xmm0, xmm7
        vinsertps xmm0, xmm0, xmm8, 10h
        vinsertps xmm0, xmm0, xmm3, 20h ; ' '
        vmovups xmmword ptr [rsp+50h], xmm0
        vmovups xmmword ptr [rsp+178h+emitterOrientationMat.y.v], xmm0
      }
      HIDWORD(v99) = 0;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+50h]
        vmovss  xmm0, xmm0, xmm9
        vinsertps xmm0, xmm0, xmm1, 10h
        vinsertps xmm0, xmm0, xmm2, 20h ; ' '
        vxorps  xmm2, xmm2, xmm2
        vmovups xmmword ptr [rsp+178h+emitterOrientationMat.z.v], xmm0
        vxorps  xmm0, xmm2, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vxorps  xmm2, xmm1, xmm2
        vmovups [rsp+178h+var_98], xmm2
      }
      LocalClientGlobals = CG_GetLocalClientGlobals(v73);
      v91 = ParticleManager::AddSystem(&g_particleManager[m_localClientNum], this->m_localClientNum, pDef, &emitterPos, &emitterOrientationMat, LocalClientGlobals->time, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
      __asm
      {
        vmovaps xmm9, [rsp+178h+var_78]
        vmovaps xmm8, [rsp+178h+var_68]
        vmovaps xmm7, [rsp+178h+var_58]
      }
      *phandle = v91;
      goto LABEL_30;
    }
    *phandle = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
LABEL_30:
  __asm { vmovaps xmm6, [rsp+178h+var_48] }
}

/*
==============
CgVehicleEventSystem::PlaySoundDeferred
==============
*/
__int64 CgVehicleEventSystem::PlaySoundDeferred(CgVehicleEventSystem *this, const SndAliasList *snd, int entNum, unsigned int vehIndex, unsigned int pbentryId)
{
  unsigned __int32 v10; 
  centity_t *Entity; 
  vec3_t outOrigin; 

  _RSI = this;
  if ( !snd )
    return 0xFFFFFFFFi64;
  if ( this->m_lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1785, ASSERT_TYPE_ASSERT, "( m_lock == 0 )", "Can't call CgVehicleEventSystem::PlaySoundDeferred() while ProcessEventsMainThread() is running") )
    __debugbreak();
  if ( (((_BYTE)_RSI + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &_RSI->m_soundsCursor) )
    __debugbreak();
  v10 = _InterlockedExchangeAdd(&_RSI->m_soundsCursor, 1u);
  if ( v10 >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1788, ASSERT_TYPE_ASSERT, "( index < MAX_DEFERRED_SOUNDS )", "Not enough room for a new event. Increase MAX_DEFERRED_SOUNDS ?") )
    __debugbreak();
  if ( vehIndex >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1790, ASSERT_TYPE_ASSERT, "(vehIndex < (1 << 7))", (const char *)&queryFormat, "vehIndex < MAX_VEHICLES", -2i64) )
    __debugbreak();
  _RDI = (unsigned __int64)v10 << 6;
  *(CgVehicleEventSystem::DeferredSound::DeferredSoundType *)((char *)&_RSI->m_sounds[0].playType + _RDI) = DST_NORMAL;
  *(const SndAliasList **)((char *)&_RSI->m_sounds[0].snd + _RDI) = snd;
  *(int *)((char *)&_RSI->m_sounds[0].entnum + _RDI) = entNum;
  *(unsigned int *)((char *)&_RSI->m_sounds[0].u.vehicleIndex + _RDI) = vehIndex;
  *(CgVehicleEventSystem::PlaybackId::IdType *)((char *)&_RSI->m_sounds[0].playbackIdType + _RDI) = pbentryId;
  *(int *)((char *)&_RSI->m_sounds[0].time + _RDI) = CG_GetLocalClientGlobals((const LocalClientNum_t)_RSI->m_localClientNum)->time;
  *(&_RSI->m_sounds[0].debug + _RDI) = 1;
  Entity = CG_GetEntity((const LocalClientNum_t)_RSI->m_localClientNum, entNum);
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+outOrigin]
    vaddss  xmm0, xmm0, dword ptr [rcx]
    vmovss  dword ptr [rdi+rsi+210h], xmm0
    vmovss  xmm1, dword ptr [rsp+68h+outOrigin+4]
    vaddss  xmm2, xmm1, dword ptr [rcx+4]
    vmovss  dword ptr [rdi+rsi+214h], xmm2
    vmovss  xmm0, dword ptr [rsp+68h+outOrigin+8]
    vaddss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rdi+rsi+218h], xmm1
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  return v10;
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
  int time; 

  _RSI = this;
  if ( !snd )
    return 0xFFFFFFFFi64;
  if ( this->m_lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1817, ASSERT_TYPE_ASSERT, "( m_lock == 0 )", "Can't call CgVehicleEventSystem::PlaySoundSurfaceDeferred() while ProcessEventsMainThread() is running") )
    __debugbreak();
  if ( (((_BYTE)_RSI + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &_RSI->m_soundsCursor) )
    __debugbreak();
  v15 = _InterlockedExchangeAdd(&_RSI->m_soundsCursor, 1u);
  if ( v15 >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1820, ASSERT_TYPE_ASSERT, "( index < MAX_DEFERRED_SOUNDS )", "Not enough room for a new event. Increase MAX_DEFERRED_SOUNDS ?") )
    __debugbreak();
  if ( vehIndex >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1822, ASSERT_TYPE_ASSERT, "(vehIndex < (1 << 7))", (const char *)&queryFormat, "vehIndex < MAX_VEHICLES") )
    __debugbreak();
  _RAX = origin;
  __asm { vmovss  xmm1, [rsp+48h+pitch] }
  _RBX = (unsigned __int64)v15 << 6;
  *(CgVehicleEventSystem::DeferredSound::DeferredSoundType *)((char *)&_RSI->m_sounds[0].playType + _RBX) = DST_SURFACE;
  *(int *)((char *)&_RSI->m_sounds[0].entnum + _RBX) = entNum;
  *(const SndAliasList **)((char *)&_RSI->m_sounds[0].snd + _RBX) = snd;
  __asm
  {
    vmovsd  xmm0, qword ptr [rax]
    vmovsd  qword ptr [rbx+rsi+210h], xmm0
  }
  *(float *)&_RAX = origin->v[2];
  __asm { vmovss  xmm0, [rsp+48h+vol] }
  *(int *)((char *)&_RSI->m_sounds[0].fadeTime + _RBX) = fadeTime;
  *(CgVehicleEventSystem::PlaybackId::IdType *)((char *)&_RSI->m_sounds[0].playbackIdType + _RBX) = pbEntryId;
  __asm
  {
    vmovss  dword ptr [rbx+rsi+220h], xmm0
    vmovss  dword ptr [rbx+rsi+224h], xmm1
  }
  *(_DWORD *)((char *)&_RSI->m_sounds[0].origin.v[2] + _RBX) = (_DWORD)_RAX;
  *(unsigned int *)((char *)&_RSI->m_sounds[0].surface + _RBX) = surfaceData;
  *(unsigned int *)((char *)&_RSI->m_sounds[0].u.vehicleIndex + _RBX) = vehIndex;
  time = CG_GetLocalClientGlobals((const LocalClientNum_t)_RSI->m_localClientNum)->time;
  result = v15;
  *(int *)((char *)&_RSI->m_sounds[0].time + _RBX) = time;
  *(&_RSI->m_sounds[0].debug + _RBX) = 0;
  return result;
}

/*
==============
CgVehicleEventSystem::PlaySpeedDependentSurfaceSound
==============
*/
int CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(CgVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const VehiclePhysicsSoundGroup *sndHard, const VehiclePhysicsSoundGroup *sndLight, SndAliasList *sndHardAlias, SndAliasList *sndLightAlias, const vec3_t *posWs, unsigned int surfaceData, float mult, unsigned int pbidType)
{
  float v23; 
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(&vehObj->BgVehiclePhysics, &vehObj->m_linearVelocityWs, &outVelLs);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outVelLs]
    vmovss  xmm1, dword ptr [rsp+98h+outVelLs+4]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm2
    vsqrtss xmm3, xmm0, xmm0
    vmovss  xmm0, [rsp+98h+mult]
    vmulss  xmm1, xmm3, cs:__real@3d68ba2f; planeMPH
    vmovss  [rsp+98h+var_50], xmm0
  }
  return CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(this, *(float *)&_XMM1, vehObj, sndHard, sndLight, sndHardAlias, sndLightAlias, posWs, surfaceData, v23, pbidType);
}

/*
==============
CgVehicleEventSystem::PlaySpeedDependentSurfaceSound
==============
*/

int __fastcall CgVehicleEventSystem::PlaySpeedDependentSurfaceSound(CgVehicleEventSystem *this, double planeMPH, const BgVehiclePhysicsGround *vehObj, const VehiclePhysicsSoundGroup *sndHard, const VehiclePhysicsSoundGroup *sndLight, SndAliasList *sndHardAlias, SndAliasList *sndLightAlias, const vec3_t *posWs, unsigned int surfaceData, float mult, unsigned int pbidType)
{
  char v28; 
  signed int vehIndex; 
  int result; 
  float v58; 
  float v59; 
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vcomiss xmm1, dword ptr [r9+8] }
  _RBX = sndHard;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm1
  }
  if ( sndHardAlias && sndHard )
  {
    __asm
    {
      vmovaps [rsp+98h+var_28], xmm7
      vmovaps [rsp+98h+var_38], xmm8
      vmovaps [rsp+98h+var_48], xmm9
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(&vehObj->BgVehiclePhysics);
    __asm
    {
      vsubss  xmm2, xmm6, dword ptr [rdi+8]
      vmulss  xmm3, xmm0, cs:__real@3d68ba2f
      vsubss  xmm0, xmm3, dword ptr [rdi+8]
      vmovss  xmm6, cs:__real@3f800000
      vdivss  xmm0, xmm2, xmm0; val
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+0Ch]
      vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm7, cs:__real@3a83126f
      vmovss  xmm2, dword ptr [rbx+10h]
      vandps  xmm1, xmm3, xmm5
      vcomiss xmm1, xmm7
      vmovaps xmm8, xmm0
    }
    if ( v28 )
    {
      __asm
      {
        vandps  xmm1, xmm2, xmm5
        vcomiss xmm1, xmm7
      }
      if ( v28 )
      {
        __asm
        {
          vxorps  xmm3, xmm3, xmm3
          vmovaps xmm2, xmm6
        }
      }
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+14h]
      vmaxss  xmm0, xmm3, xmm2
      vsubss  xmm1, xmm0, xmm3
      vmulss  xmm2, xmm1, xmm8
      vmovss  xmm1, dword ptr [rbx+18h]
      vandps  xmm0, xmm4, xmm5
      vcomiss xmm0, xmm7
      vaddss  xmm3, xmm2, xmm3
      vmulss  xmm9, xmm3, [rsp+98h+mult]
    }
    if ( v28 )
    {
      __asm
      {
        vandps  xmm0, xmm1, xmm5
        vcomiss xmm0, xmm7
      }
      if ( v28 )
      {
        __asm
        {
          vmovaps xmm4, xmm6
          vmovaps xmm1, xmm6
        }
      }
    }
    vehIndex = vehObj->m_vehicleId - 1;
    if ( vehIndex < 0 )
      vehIndex = 0;
    __asm
    {
      vmaxss  xmm0, xmm4, xmm1
      vsubss  xmm1, xmm0, xmm4
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm3, xmm2, xmm4
      vmovss  [rsp+98h+var_68], xmm3
      vmovss  [rsp+98h+var_70], xmm9
    }
    result = CgVehicleEventSystem::PlaySoundSurfaceDeferred(this, sndHardAlias, vehObj->m_entityNumber, surfaceData, posWs, v58, v59, 250, vehIndex, pbidType);
    __asm
    {
      vmovaps xmm9, [rsp+98h+var_48]
      vmovaps xmm8, [rsp+98h+var_38]
      vmovaps xmm7, [rsp+98h+var_28]
    }
  }
  else
  {
    result = -1;
  }
  _R11 = &v63;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
CgVehicleEventSystem::PlaySpeedDependentSurfaceSoundAircraft
==============
*/
int CgVehicleEventSystem::PlaySpeedDependentSurfaceSoundAircraft(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, const VehiclePhysicsSoundGroup *sndHard, const VehiclePhysicsSoundGroup *sndLight, SndAliasList *sndHardAlias, SndAliasList *sndLightAlias, const vec3_t *posWs, unsigned int surfaceData, float mult, unsigned int pbidType)
{
  const BgVehiclePhysics *v27; 
  char v36; 
  signed int vehIndex; 
  int result; 
  float v66; 
  float v67; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+1A4h]
    vmovss  xmm2, dword ptr [rdx+1A8h]
    vmovss  xmm3, dword ptr [rdx+1ACh]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmovaps xmmword ptr [rax-18h], xmm6
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RBX = sndHard;
  __asm
  {
    vmovss  xmm7, cs:__real@3d68ba2f
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm6, xmm0, xmm7
    vcomiss xmm6, dword ptr [r8+8]
  }
  v27 = vehObj;
  if ( sndHardAlias && sndHard )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm8
      vmovaps [rsp+98h+var_48], xmm9
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward((BgVehiclePhysics *)vehObj);
    __asm
    {
      vsubss  xmm2, xmm6, dword ptr [rsi+8]
      vmovss  xmm6, cs:__real@3f800000
      vmulss  xmm3, xmm0, xmm7
      vsubss  xmm0, xmm3, dword ptr [rsi+8]
      vdivss  xmm0, xmm2, xmm0; val
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+0Ch]
      vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm7, cs:__real@3a83126f
      vmovss  xmm2, dword ptr [rbx+10h]
      vandps  xmm1, xmm3, xmm5
      vcomiss xmm1, xmm7
      vmovaps xmm8, xmm0
    }
    if ( v36 )
    {
      __asm
      {
        vandps  xmm1, xmm2, xmm5
        vcomiss xmm1, xmm7
      }
      if ( v36 )
      {
        __asm
        {
          vxorps  xmm3, xmm3, xmm3
          vmovaps xmm2, xmm6
        }
      }
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+14h]
      vmaxss  xmm0, xmm3, xmm2
      vsubss  xmm1, xmm0, xmm3
      vmulss  xmm2, xmm1, xmm8
      vmovss  xmm1, dword ptr [rbx+18h]
      vandps  xmm0, xmm4, xmm5
      vcomiss xmm0, xmm7
      vaddss  xmm3, xmm2, xmm3
      vmulss  xmm9, xmm3, [rsp+98h+mult]
    }
    if ( v36 )
    {
      __asm
      {
        vandps  xmm0, xmm1, xmm5
        vcomiss xmm0, xmm7
      }
      if ( v36 )
      {
        __asm
        {
          vmovaps xmm4, xmm6
          vmovaps xmm1, xmm6
        }
      }
    }
    vehIndex = v27->m_vehicleId - 1;
    if ( vehIndex < 0 )
      vehIndex = 0;
    __asm
    {
      vmaxss  xmm0, xmm4, xmm1
      vsubss  xmm1, xmm0, xmm4
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm3, xmm2, xmm4
      vmovss  [rsp+98h+var_68], xmm3
      vmovss  [rsp+98h+var_70], xmm9
    }
    result = CgVehicleEventSystem::PlaySoundSurfaceDeferred(this, sndHardAlias, v27->m_entityNumber, surfaceData, posWs, v66, v67, 250, vehIndex, pbidType);
    __asm
    {
      vmovaps xmm9, [rsp+98h+var_48]
      vmovaps xmm8, [rsp+98h+var_38]
    }
  }
  else
  {
    result = -1;
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v71;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
CgVehicleEventSystem::ProcessDeferredEventsInternal
==============
*/
void CgVehicleEventSystem::ProcessDeferredEventsInternal(CgVehicleEventSystem *this)
{
  int v8; 
  unsigned int v9; 
  CgSoundSystem *SoundSystem; 
  int v11; 
  unsigned __int64 v16; 
  int v18; 
  int v19; 
  int v20; 
  unsigned int v23; 
  const dvar_t *v24; 
  unsigned int v25; 
  _QWORD *v26; 
  const char *v31; 
  const char *v36; 
  const char **v41; 
  vec3_t *p_point; 
  const char *v49; 
  const SndAliasList *v50; 
  unsigned int v51; 
  const dvar_t *v52; 
  const char **v53; 
  __int64 v65; 
  char *fmt; 
  __int64 duration; 
  __int64 v74; 
  __int64 v75; 
  int v76; 
  vec3_t point; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 1707, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v8 = 0;
  v9 = 0;
  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
  v11 = 9;
  if ( this->m_soundsCursor )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_58], xmm8
      vmovss  xmm8, cs:__real@41200000
      vmovaps [rsp+0F8h+var_68], xmm9
      vmovss  xmm9, cs:__real@3ecccccd
      vmovaps [rsp+0F8h+var_78], xmm10
      vmovss  xmm10, cs:__real@40400000
      vmovaps [rsp+0F8h+var_88], xmm11
      vmovss  xmm11, cs:__real@3f19999a
      vmovaps [rsp+0F8h+var_38], xmm6
      vmovaps [rsp+0F8h+var_48], xmm7
    }
    while ( 1 )
    {
      v16 = (unsigned __int64)v9 << 6;
      _RBX = (char *)this->m_sounds + v16;
      v18 = *(CgVehicleEventSystem::DeferredSound::DeferredSoundType *)((char *)&this->m_sounds[0].playType + v16);
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 == 1 )
              SND_StopSoundAliasById(*(unsigned int *)((char *)&this->m_sounds[0].u.vehicleIndex + v16));
          }
          else
          {
            CgVehicleEventSystem::StopAllSoundsOnVehicle(this, *(int *)((char *)&this->m_sounds[0].entnum + v16), *(unsigned int *)((char *)&this->m_sounds[0].u.vehicleIndex + v16));
          }
        }
        else if ( *(int *)((char *)&this->m_sounds[0].time + v16) != v8 || *(CgVehicleEventSystem::PlaybackId::IdType *)((char *)&this->m_sounds[0].playbackIdType + v16) != v11 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+14h]
            vmovss  xmm1, dword ptr [rbx+10h]
            vmovss  dword ptr [rsp+0F8h+var_C8], xmm0
            vmovss  [rsp+0F8h+duration], xmm1
          }
          LODWORD(fmt) = *(unsigned int *)((char *)&this->m_sounds[0].surface + v16);
          v23 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, char *, _QWORD, char *, __int64, __int64, _DWORD, __int64, int, _QWORD, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, *(unsigned int *)((char *)&this->m_sounds[0].entnum + v16), (char *)this->m_sounds + v16, *(const SndAliasList **)((char *)&this->m_sounds[0].snd + v16), fmt, duration, v74, *(int *)((char *)&this->m_sounds[0].fadeTime + v16), v75, v76, *(_QWORD *)point.v, LODWORD(point.v[2]));
          v24 = DCONST_DVARINT_bg_vehicleDebug;
          v25 = v23;
          v8 = *((_DWORD *)_RBX + 12);
          v11 = *((_DWORD *)_RBX + 14);
          if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v24);
          if ( v24->current.integer == 2 )
          {
            if ( _RBX[60] )
            {
              v26 = (_QWORD *)*((_QWORD *)_RBX + 4);
              if ( v26 )
              {
                if ( *v26 )
                {
                  __asm
                  {
                    vmovss  xmm6, dword ptr [rbx+14h]
                    vmovss  xmm7, dword ptr [rbx+10h]
                    vcvtss2sd xmm6, xmm6, xmm6
                    vcvtss2sd xmm7, xmm7, xmm7
                  }
                  v31 = Com_SurfaceTypeToName(*((_DWORD *)_RBX + 11));
                  __asm
                  {
                    vmovaps xmm3, xmm6
                    vmovaps xmm2, xmm7
                    vmovq   r9, xmm3
                    vmovq   r8, xmm2
                  }
                  v36 = j_va("%s (v:%.2f / p:%.2f)", v31, _R8, _R9);
                  __asm { vmovaps xmm2, xmm11; scale }
                  CG_DebugString((const vec3_t *)_RBX, &colorBlue, *(float *)&_XMM2, v36, 0, 300);
                  __asm
                  {
                    vmovss  xmm1, dword ptr [rbx]
                    vmulss  xmm3, xmm8, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
                    vmulss  xmm2, xmm8, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
                  }
                  v41 = (const char **)*((_QWORD *)_RBX + 4);
                  p_point = (vec3_t *)&v75;
                  __asm
                  {
                    vsubss  xmm2, xmm1, xmm2
                    vmovss  xmm1, dword ptr [rbx+4]
                    vmovss  [rsp+0F8h+var_B8], xmm2
                    vsubss  xmm2, xmm1, xmm3
                    vmulss  xmm3, xmm8, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
                    vmovss  xmm1, dword ptr [rbx+8]
                    vmovss  [rsp+0F8h+var_B4], xmm2
                    vsubss  xmm2, xmm1, xmm3
                    vmovss  [rsp+0F8h+var_B0], xmm2
                  }
                  v49 = *v41;
                  goto LABEL_33;
                }
              }
            }
          }
          goto LABEL_34;
        }
      }
      else
      {
        v50 = *(const SndAliasList **)((char *)&this->m_sounds[0].snd + v16);
        if ( v50 && (*(int *)((char *)&this->m_sounds[0].time + v16) != v8 || *(CgVehicleEventSystem::PlaybackId::IdType *)((char *)&this->m_sounds[0].playbackIdType + v16) != v11) )
        {
          v51 = CgSoundSystem::PlaySoundAlias(SoundSystem, *(int *)((char *)&this->m_sounds[0].entnum + v16), (const vec3_t *)((char *)&this->m_sounds[0].origin + v16), v50);
          v52 = DCONST_DVARINT_bg_vehicleDebug;
          v25 = v51;
          v8 = *((_DWORD *)_RBX + 12);
          v11 = *((_DWORD *)_RBX + 14);
          if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v52);
          if ( v52->current.integer == 2 )
          {
            if ( _RBX[60] )
            {
              v53 = (const char **)*((_QWORD *)_RBX + 4);
              if ( v53 )
              {
                v49 = *v53;
                if ( *v53 )
                {
                  __asm
                  {
                    vmovss  xmm1, dword ptr [rbx]
                    vmulss  xmm3, xmm8, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
                    vmulss  xmm2, xmm8, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
                    vsubss  xmm2, xmm1, xmm2
                    vmovss  xmm1, dword ptr [rbx+4]
                    vmovss  dword ptr [rsp+0F8h+point], xmm2
                    vsubss  xmm2, xmm1, xmm3
                    vmulss  xmm3, xmm8, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
                    vmovss  xmm1, dword ptr [rbx+8]
                    vmovss  dword ptr [rsp+0F8h+point+4], xmm2
                    vsubss  xmm2, xmm1, xmm3
                  }
                  p_point = &point;
                  __asm { vmovss  dword ptr [rsp+0F8h+point+8], xmm2 }
LABEL_33:
                  __asm { vmovaps xmm2, xmm9; scale }
                  CG_DebugString(p_point, &colorBlueHeat, *(float *)&_XMM2, v49, 0, 300);
                  __asm { vmovaps xmm1, xmm10; radius }
                  CG_DebugSphere((const vec3_t *)_RBX, *(float *)&_XMM1, &colorMagenta, 1, 300);
                }
              }
            }
          }
LABEL_34:
          if ( v25 )
          {
            v65 = *((int *)_RBX + 14);
            if ( (int)v65 < 9 )
            {
              this->m_vehiclePlaybackIds[*((unsigned int *)_RBX + 13)].ids[v65] = v25;
              this->m_vehiclePlaybackIds[*((unsigned int *)_RBX + 13)].surfData = *((_DWORD *)_RBX + 11);
            }
          }
        }
      }
      if ( ++v9 >= this->m_soundsCursor )
      {
        __asm
        {
          vmovaps xmm11, [rsp+0F8h+var_88]
          vmovaps xmm10, [rsp+0F8h+var_78]
          vmovaps xmm9, [rsp+0F8h+var_68]
          vmovaps xmm8, [rsp+0F8h+var_58]
          vmovaps xmm7, [rsp+0F8h+var_48]
          vmovaps xmm6, [rsp+0F8h+var_38]
        }
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

void __fastcall CgVehicleEventSystem::RCPlaneBoost(CgVehicleEventSystem *this, const BgVehiclePhysics *vehObj, double shakeScale, int shakeDur, float shakeRad, const SndAliasList *snd)
{
  cg_t *LocalClientGlobals; 
  __int64 v14; 
  signed int v15; 
  float pbentryId; 
  vec3_t outOrg; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_event_system.cpp", 97, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj", -2i64) )
    __debugbreak();
  if ( !vehObj->m_pmoveObject )
  {
    __asm { vcomiss xmm6, cs:__real@3a83126f }
    if ( vehObj->m_pmoveObject && shakeDur > 0 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      __asm
      {
        vmovss  xmm0, [rsp+68h+shakeRad]
        vmovss  [rsp+68h+pbentryId], xmm0
        vmovaps xmm1, xmm6; scale
      }
      CG_StartShakeCamera(this->m_localClientNum, *(float *)&_XMM1, shakeDur, &outOrg, pbentryId);
      memset(&outOrg, 0, sizeof(outOrg));
    }
    if ( snd )
    {
      v14 = vehObj->m_vehicleId - 1;
      if ( (int)v14 < 0 )
        v14 = 0i64;
      if ( !SND_IsPlaybackIdPlaying(this->m_vehiclePlaybackIds[v14].ids[0]) )
      {
        v15 = vehObj->m_vehicleId - 1;
        if ( v15 < 0 )
          v15 = 0;
        CgVehicleEventSystem::PlaySoundDeferred(this, snd, vehObj->m_entityNumber, v15, 0, &vec3_origin);
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
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
  float v7; 
  vec3_t outOrg; 

  if ( Physics_IsPredictiveWorld(vehObj->m_worldId) && vehObj->m_playerControlled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, cs:SHAKECAM_RAD
      vmovss  [rsp+58h+var_38], xmm0
      vmovss  xmm1, cs:__real@3e19999a; scale
    }
    CG_StartShakeCamera(this->m_localClientNum, *(float *)&_XMM1, 800, &outOrg, v7);
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

