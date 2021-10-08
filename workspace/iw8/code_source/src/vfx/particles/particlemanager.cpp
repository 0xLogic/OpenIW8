/*
==============
ParticleManager::Save
==============
*/

void __fastcall ParticleManager::Save(ParticleManager *this, MemoryFile *memFile)
{
  ?Save@ParticleManager@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
ParticleManager::KillSystemInternal
==============
*/

void __fastcall ParticleManager::KillSystemInternal(ParticleManager *this, ParticleSystem *pSystem, bool lock)
{
  ?KillSystemInternal@ParticleManager@@AEAAXPEAVParticleSystem@@_N@Z(this, pSystem, lock);
}

/*
==============
ParticleManager::BucketFreeCallback
==============
*/

void __fastcall ParticleManager::BucketFreeCallback(void *memptr, void *customData)
{
  ?BucketFreeCallback@ParticleManager@@CAXPEAX0@Z(memptr, customData);
}

/*
==============
ParticleManager::HandleMyChanges
==============
*/

void __fastcall ParticleManager::HandleMyChanges(bool restoreCurrentEffect)
{
  ?HandleMyChanges@ParticleManager@@SAX_N@Z(restoreCurrentEffect);
}

/*
==============
ParticleManager::ResetCmdStream
==============
*/

void __fastcall ParticleManager::ResetCmdStream(ParticleManager *this)
{
  ?ResetCmdStream@ParticleManager@@AEAAXXZ(this);
}

/*
==============
ParticleManager::KillAllSystemsOnDObjImmediate
==============
*/

void __fastcall ParticleManager::KillAllSystemsOnDObjImmediate(ParticleManager *this, unsigned int dobjHandle, const bool lock)
{
  ?KillAllSystemsOnDObjImmediate@ParticleManager@@QEAAXI_N@Z(this, dobjHandle, lock);
}

/*
==============
ParticleManager::AddSystem
==============
*/

ParticleSystemHandle __fastcall ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const float4 *emitterOrientationQuat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData)
{
  return ?AddSystem@ParticleManager@@QEAA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBUParticleSystemDef@@AEBUfloat4@@2HW4ParticleSystemFlags@@PEBUFxCamera@@PEBUFxMarkSpawnData@@@Z(this, localClientNum, pSystemDef, emitterPos, emitterOrientationQuat, spawnTimeMsec, particleSystemFlags, pCamera, pMarkSpawnData);
}

/*
==============
ParticleManager::GetGlobalTintColor
==============
*/

float4 *__fastcall ParticleManager::GetGlobalTintColor(ParticleManager *this, float4 *result, const ParticleSystem *const pParticleSystem)
{
  return ?GetGlobalTintColor@ParticleManager@@QEBA?AUfloat4@@QEBVParticleSystem@@@Z(this, result, pParticleSystem);
}

/*
==============
Particle_LoadMagmaHeightfield
==============
*/

void __fastcall Particle_LoadMagmaHeightfield(const GfxWorld *world, bool isFrontendScene)
{
  ?Particle_LoadMagmaHeightfield@@YAXPEBUGfxWorld@@_N@Z(world, isFrontendScene);
}

/*
==============
ParticleManager::AddSystem
==============
*/

ParticleSystemHandle __fastcall ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const vector3 *emitterOrientationMat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData)
{
  return ?AddSystem@ParticleManager@@QEAA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBUParticleSystemDef@@AEBUfloat4@@AEBUvector3@@HW4ParticleSystemFlags@@IIPEBUorientation_t@@PEBUFxCamera@@PEBUFxMarkSpawnData@@@Z(this, localClientNum, pSystemDef, emitterPos, emitterOrientationMat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData);
}

/*
==============
ParticleManager::Restart
==============
*/

void __fastcall ParticleManager::Restart(ParticleManager *this, const int currentTime)
{
  ?Restart@ParticleManager@@QEAAXH@Z(this, currentTime);
}

/*
==============
ParticleManager::AddSystem
==============
*/

ParticleSystemHandle __fastcall ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const float4 *emitterOrientationQuat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData)
{
  return ?AddSystem@ParticleManager@@QEAA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBUParticleSystemDef@@AEBUfloat4@@2HW4ParticleSystemFlags@@IIPEBUorientation_t@@PEBUFxCamera@@PEBUFxMarkSpawnData@@@Z(this, localClientNum, pSystemDef, emitterPos, emitterOrientationQuat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData);
}

/*
==============
ParticleManager::EnableDrawForAllSystemsOnDObj
==============
*/

void __fastcall ParticleManager::EnableDrawForAllSystemsOnDObj(ParticleManager *this, unsigned int dobjHandle, bool bDraw)
{
  ?EnableDrawForAllSystemsOnDObj@ParticleManager@@QEAAXI_N@Z(this, dobjHandle, bDraw);
}

/*
==============
ParticleManager::UpdateSounds
==============
*/

void __fastcall ParticleManager::UpdateSounds(ParticleManager *this)
{
  ?UpdateSounds@ParticleManager@@QEAAXXZ(this);
}

/*
==============
ParticleManager::ProcessRemoveAndStopRequests
==============
*/

void __fastcall ParticleManager::ProcessRemoveAndStopRequests(ParticleManager *this)
{
  ?ProcessRemoveAndStopRequests@ParticleManager@@AEAAXXZ(this);
}

/*
==============
ParticleManager::ValidateSystem
==============
*/

void __fastcall ParticleManager::ValidateSystem(ParticleManager *this, const ParticleSystem *pSystem)
{
  ?ValidateSystem@ParticleManager@@AEAAXPEBVParticleSystem@@@Z(this, pSystem);
}

/*
==============
Particle_GetMagmaHeightfield
==============
*/

const GfxImage *__fastcall Particle_GetMagmaHeightfield()
{
  return ?Particle_GetMagmaHeightfield@@YAPEBUGfxImage@@XZ();
}

/*
==============
ParticleManager::UpdateAltModeParticles
==============
*/

void __fastcall ParticleManager::UpdateAltModeParticles(ParticleManager *this, int numSystemsRunning)
{
  ?UpdateAltModeParticles@ParticleManager@@AEAAXH@Z(this, numSystemsRunning);
}

/*
==============
ParticleManager::FindBoltedSystemInternal
==============
*/

ParticleSystem *__fastcall ParticleManager::FindBoltedSystemInternal(ParticleManager *this, const int numSystemsRunning, const ParticleSystemDef *pSystemDef, unsigned int dobjHandle, unsigned int boneIndex)
{
  return ?FindBoltedSystemInternal@ParticleManager@@AEAAPEAVParticleSystem@@HPEBUParticleSystemDef@@II@Z(this, numSystemsRunning, pSystemDef, dobjHandle, boneIndex);
}

/*
==============
ParticleManager::GetMemoryUsageInBytes
==============
*/

unsigned int __fastcall ParticleManager::GetMemoryUsageInBytes(ParticleManager *this)
{
  return ?GetMemoryUsageInBytes@ParticleManager@@QEBAIXZ(this);
}

/*
==============
ParticleManager::AddSystem
==============
*/

ParticleSystemHandle __fastcall ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const vector3 *emitterOrientationMat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, scr_string_t boneName, ParticleSystemHandle parentParticleSystem, ParticleSystemHandle restoredParticleSystem)
{
  return ?AddSystem@ParticleManager@@QEAA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBUParticleSystemDef@@AEBUfloat4@@AEBUvector3@@HW4ParticleSystemFlags@@IIPEBUorientation_t@@PEBUFxCamera@@PEBUFxMarkSpawnData@@W4scr_string_t@@W42@9@Z(this, localClientNum, pSystemDef, emitterPos, emitterOrientationMat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, boneName, parentParticleSystem, restoredParticleSystem);
}

/*
==============
ParticleManager::ClearSoundData
==============
*/

void __fastcall ParticleManager::ClearSoundData(ParticleManager *this)
{
  ?ClearSoundData@ParticleManager@@AEAAXXZ(this);
}

/*
==============
ParticleManager::KillSystemDefNewerThan
==============
*/

void __fastcall ParticleManager::KillSystemDefNewerThan(ParticleManager *this, const ParticleSystemDef *pSystemDef, int time)
{
  ?KillSystemDefNewerThan@ParticleManager@@QEAAXPEBUParticleSystemDef@@H@Z(this, pSystemDef, time);
}

/*
==============
ParticleManager::DebugDumpParticleSystemsToConsole
==============
*/

void __fastcall ParticleManager::DebugDumpParticleSystemsToConsole(ParticleManager *this, bool logfileOnly)
{
  ?DebugDumpParticleSystemsToConsole@ParticleManager@@QEAAX_N@Z(this, logfileOnly);
}

/*
==============
ParticleManager::Restore
==============
*/

void __fastcall ParticleManager::Restore(ParticleManager *this, MemoryFile *memFile)
{
  ?Restore@ParticleManager@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
ParticleManager::AddCmd
==============
*/

void __fastcall ParticleManager::AddCmd(ParticleManager *this, ParticleSystemCommandType cmdTyp, const void *cmdData)
{
  ?AddCmd@ParticleManager@@AEAAXW4ParticleSystemCommandType@@PEBX@Z(this, cmdTyp, cmdData);
}

/*
==============
ParticleManager::UpdateCachedCameraTransform
==============
*/

void __fastcall ParticleManager::UpdateCachedCameraTransform(ParticleManager *this, const FxCamera *pCamera)
{
  ?UpdateCachedCameraTransform@ParticleManager@@AEAAXPEBUFxCamera@@@Z(this, pCamera);
}

/*
==============
ParticleManager::PreUpdate
==============
*/

void __fastcall ParticleManager::PreUpdate(ParticleManager *this, FxSystem *pFxSystem)
{
  ?PreUpdate@ParticleManager@@QEAAXPEAUFxSystem@@@Z(this, pFxSystem);
}

/*
==============
ParticleManager::EnableSoundFlag
==============
*/

void __fastcall ParticleManager::EnableSoundFlag(ParticleManager *this, bool enable, const ParticleManager::Particle_SoundData *rSoundData)
{
  ?EnableSoundFlag@ParticleManager@@AEAAX_NAEBUParticle_SoundData@1@@Z(this, enable, rSoundData);
}

/*
==============
MarkSpawnDataPoolErrorHandler
==============
*/

void MarkSpawnDataPoolErrorHandler(void)
{
  ?MarkSpawnDataPoolErrorHandler@@YAXXZ();
}

/*
==============
ParticleManager::ParticleSystemPointerInRange
==============
*/

bool __fastcall ParticleManager::ParticleSystemPointerInRange(LocalClientNum_t localClientNum, void *memptr)
{
  return ?ParticleSystemPointerInRange@ParticleManager@@SA_NW4LocalClientNum_t@@PEAX@Z(localClientNum, memptr);
}

/*
==============
ParticleManager::KillSystem
==============
*/

void __fastcall ParticleManager::KillSystem(ParticleManager *this, ParticleSystemHandle systemHandle)
{
  ?KillSystem@ParticleManager@@QEAAXW4ParticleSystemHandle@@@Z(this, systemHandle);
}

/*
==============
ParticleManager::AddSystemByName
==============
*/

ParticleSystemHandle __fastcall ParticleManager::AddSystemByName(ParticleManager *this, LocalClientNum_t localClientNum, const char *vfxName, const float4 *emitterPos, const float4 *emitterOrientationQuat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, const FxMarkSpawnData *pMarkSpawnData)
{
  return ?AddSystemByName@ParticleManager@@QEAA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBDAEBUfloat4@@2HW4ParticleSystemFlags@@PEBUFxMarkSpawnData@@@Z(this, localClientNum, vfxName, emitterPos, emitterOrientationQuat, spawnTimeMsec, particleSystemFlags, pMarkSpawnData);
}

/*
==============
ParticleManager::Init
==============
*/

void __fastcall ParticleManager::Init(ParticleManager *this, LocalClientNum_t localClientNum, bool isHighPlayerCount)
{
  ?Init@ParticleManager@@QEAAXW4LocalClientNum_t@@_N@Z(this, localClientNum, isHighPlayerCount);
}

/*
==============
ParticleManager::GetProfileData
==============
*/

void __fastcall ParticleManager::GetProfileData(ParticleManager *this, ParticleProfileGlobalData *outProfileGlobalData)
{
  ?GetProfileData@ParticleManager@@QEAAXAEAUParticleProfileGlobalData@@@Z(this, outProfileGlobalData);
}

/*
==============
ParticleManager::KillLoopedFxEntSystem
==============
*/

void __fastcall ParticleManager::KillLoopedFxEntSystem(ParticleManager *this, const ParticleSystem *pSystem)
{
  ?KillLoopedFxEntSystem@ParticleManager@@QEAAXPEBVParticleSystem@@@Z(this, pSystem);
}

/*
==============
ParticleManager::UpdateCulling
==============
*/

void __fastcall ParticleManager::UpdateCulling(ParticleManager *this, FxSystem *fxSystem)
{
  ?UpdateCulling@ParticleManager@@QEAAXPEAUFxSystem@@@Z(this, fxSystem);
}

/*
==============
ParticleManager::InitInstancePoolLimits
==============
*/

void __fastcall ParticleManager::InitInstancePoolLimits(ParticleManager *this)
{
  ?InitInstancePoolLimits@ParticleManager@@QEAAXXZ(this);
}

/*
==============
ParticleManager::FreeMarkSpawnData
==============
*/

void __fastcall ParticleManager::FreeMarkSpawnData(ParticleManager *this, unsigned __int16 dataIndex)
{
  ?FreeMarkSpawnData@ParticleManager@@QEAAXG@Z(this, dataIndex);
}

/*
==============
ParticleManager::AddSound
==============
*/

void __fastcall ParticleManager::AddSound(ParticleManager *this, const char *soundName, const unsigned int *aliasId, const float4 *origin, int currentTime, const ParticleState *pParticleState, unsigned int particleHandle, ParticleSystemHandle systemHandle)
{
  ?AddSound@ParticleManager@@QEAAXPEBDAEBIAEBUfloat4@@HPEBVParticleState@@IW4ParticleSystemHandle@@@Z(this, soundName, aliasId, origin, currentTime, pParticleState, particleHandle, systemHandle);
}

/*
==============
ParticleManager::UnlinkFxEntInternal
==============
*/

void __fastcall ParticleManager::UnlinkFxEntInternal(ParticleManager *this, const LocalClientNum_t localClientNum, ParticleSystem *const pSystem)
{
  ?UnlinkFxEntInternal@ParticleManager@@AEBAXW4LocalClientNum_t@@QEAVParticleSystem@@@Z(this, localClientNum, pSystem);
}

/*
==============
ParticleManager::DebugDumpParticleSystemsToCSV
==============
*/

void __fastcall ParticleManager::DebugDumpParticleSystemsToCSV(ParticleManager *this, const char *filenameSuffix)
{
  ?DebugDumpParticleSystemsToCSV@ParticleManager@@QEAAXPEBD@Z(this, filenameSuffix);
}

/*
==============
ParticleManager::TransferBoltFromPredictedEntToCEnt
==============
*/

bool __fastcall ParticleManager::TransferBoltFromPredictedEntToCEnt(ParticleManager *this, const ParticleSystemDef *pSystemDef, int predictedEntIdx, int boneIndex, const int centNum)
{
  return ?TransferBoltFromPredictedEntToCEnt@ParticleManager@@QEAA_NPEBUParticleSystemDef@@HHH@Z(this, pSystemDef, predictedEntIdx, boneIndex, centNum);
}

/*
==============
ParticleManager::DoDebugDraw
==============
*/

bool __fastcall ParticleManager::DoDebugDraw(ParticleManager *this)
{
  return ?DoDebugDraw@ParticleManager@@AEBA_NXZ(this);
}

/*
==============
ParticleManager::KillAllSystemsOnDObj
==============
*/

void __fastcall ParticleManager::KillAllSystemsOnDObj(ParticleManager *this, unsigned int dobjHandle)
{
  ?KillAllSystemsOnDObj@ParticleManager@@QEAAXI@Z(this, dobjHandle);
}

/*
==============
ParticleManager::InstancePoolPass
==============
*/

void __fastcall ParticleManager::InstancePoolPass(ParticleManager *this, const FxCamera *pCamera)
{
  ?InstancePoolPass@ParticleManager@@QEAAXPEBUFxCamera@@@Z(this, pCamera);
}

/*
==============
ParticleManager::AddSystem
==============
*/

ParticleSystemHandle __fastcall ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const float4 *emitterOrientationQuat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, scr_string_t boneName)
{
  return ?AddSystem@ParticleManager@@QEAA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBUParticleSystemDef@@AEBUfloat4@@2HW4ParticleSystemFlags@@IIPEBUorientation_t@@PEBUFxCamera@@PEBUFxMarkSpawnData@@W4scr_string_t@@@Z(this, localClientNum, pSystemDef, emitterPos, emitterOrientationQuat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, boneName);
}

/*
==============
ParticleManager::ParticleSystemAlloc
==============
*/

void *__fastcall ParticleManager::ParticleSystemAlloc(LocalClientNum_t localClientNum, unsigned __int64 allocSize)
{
  return ?ParticleSystemAlloc@ParticleManager@@SAPEAXW4LocalClientNum_t@@_K@Z(localClientNum, allocSize);
}

/*
==============
ParticleManager::AddSystem
==============
*/

ParticleSystemHandle __fastcall ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const vector3 *emitterOrientationMat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, scr_string_t boneName, ParticleSystemHandle parentParticleSystem)
{
  return ?AddSystem@ParticleManager@@QEAA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBUParticleSystemDef@@AEBUfloat4@@AEBUvector3@@HW4ParticleSystemFlags@@IIPEBUorientation_t@@PEBUFxCamera@@PEBUFxMarkSpawnData@@W4scr_string_t@@W42@@Z(this, localClientNum, pSystemDef, emitterPos, emitterOrientationMat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, boneName, parentParticleSystem);
}

/*
==============
ParticleManager::RemoveAllSystems
==============
*/

void __fastcall ParticleManager::RemoveAllSystems(ParticleManager *this, bool immediateKill)
{
  ?RemoveAllSystems@ParticleManager@@QEAAX_N@Z(this, immediateKill);
}

/*
==============
ParticleManager::PropagateToDetailWorld
==============
*/

void __fastcall ParticleManager::PropagateToDetailWorld(ParticleManager *this)
{
  ?PropagateToDetailWorld@ParticleManager@@QEAAXXZ(this);
}

/*
==============
ParticleManager::HandleMyChangesPreLoad
==============
*/

void __fastcall ParticleManager::HandleMyChangesPreLoad(bool removeCurrentEffect)
{
  ?HandleMyChangesPreLoad@ParticleManager@@SAX_N@Z(removeCurrentEffect);
}

/*
==============
ParticleManager::StopSystem
==============
*/

void __fastcall ParticleManager::StopSystem(ParticleManager *this, ParticleSystemHandle systemHandle)
{
  ?StopSystem@ParticleManager@@QEAAXW4ParticleSystemHandle@@@Z(this, systemHandle);
}

/*
==============
ParticleManager::UpdateBoltingAndDrawLights
==============
*/

void __fastcall ParticleManager::UpdateBoltingAndDrawLights(ParticleManager *this, float dt)
{
  ?UpdateBoltingAndDrawLights@ParticleManager@@QEAAXM@Z(this, dt);
}

/*
==============
ParticleManager::UpdateBoneMapCache
==============
*/

void __fastcall ParticleManager::UpdateBoneMapCache(ParticleManager *this)
{
  ?UpdateBoneMapCache@ParticleManager@@QEAAXXZ(this);
}

/*
==============
ParticleManager::DoNotDraw
==============
*/

bool __fastcall ParticleManager::DoNotDraw(ParticleManager *this)
{
  return ?DoNotDraw@ParticleManager@@AEBA_NXZ(this);
}

/*
==============
ParticleManager::GetParticleSystemByIndex
==============
*/

ParticleSystem *__fastcall ParticleManager::GetParticleSystemByIndex(ParticleManager *this, int index)
{
  return ?GetParticleSystemByIndex@ParticleManager@@AEAAPEAVParticleSystem@@H@Z(this, index);
}

/*
==============
ParticleManager::UpdateNVGAndThermalState
==============
*/

void __fastcall ParticleManager::UpdateNVGAndThermalState(ParticleManager *this, int numSystemsRunning)
{
  ?UpdateNVGAndThermalState@ParticleManager@@AEAAXH@Z(this, numSystemsRunning);
}

/*
==============
ParticleManager::AllocateMarkSpawnData
==============
*/

unsigned __int16 __fastcall ParticleManager::AllocateMarkSpawnData(ParticleManager *this, const FxMarkSpawnData *markSpawnData)
{
  return ?AllocateMarkSpawnData@ParticleManager@@QEAAGPEBUFxMarkSpawnData@@@Z(this, markSpawnData);
}

/*
==============
ParticleManager::DrawNonSpriteParticles
==============
*/

void __fastcall ParticleManager::DrawNonSpriteParticles(ParticleManager *this, FxSystem *pFxSystem)
{
  ?DrawNonSpriteParticles@ParticleManager@@QEAAXPEAUFxSystem@@@Z(this, pFxSystem);
}

/*
==============
ParticleManager::AddSystem
==============
*/

ParticleSystemHandle __fastcall ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const vector3 *emitterOrientationMat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData)
{
  return ?AddSystem@ParticleManager@@QEAA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBUParticleSystemDef@@AEBUfloat4@@AEBUvector3@@HW4ParticleSystemFlags@@PEBUFxCamera@@PEBUFxMarkSpawnData@@@Z(this, localClientNum, pSystemDef, emitterPos, emitterOrientationMat, spawnTimeMsec, particleSystemFlags, pCamera, pMarkSpawnData);
}

/*
==============
ParticleManager::OnKillcamEntityTransition
==============
*/

void __fastcall ParticleManager::OnKillcamEntityTransition(ParticleManager *this, LocalClientNum_t localClientNum)
{
  ?OnKillcamEntityTransition@ParticleManager@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ParticleManager::ProcessDeferredRequestsAndSort
==============
*/

void __fastcall ParticleManager::ProcessDeferredRequestsAndSort(ParticleManager *this, LocalClientNum_t localClientNum)
{
  ?ProcessDeferredRequestsAndSort@ParticleManager@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ParticleManager::~ParticleManager
==============
*/

void __fastcall ParticleManager::~ParticleManager(ParticleManager *this)
{
  ??1ParticleManager@@QEAA@XZ(this);
}

/*
==============
ParticleSystemHandleManager::release
==============
*/

void __fastcall ParticleSystemHandleManager::release(ParticleSystemHandleManager *this, ParticleSystemHandle handle)
{
  ?release@ParticleSystemHandleManager@@QEAAXW4ParticleSystemHandle@@@Z(this, handle);
}

/*
==============
ParticleManager::AddDeferredChildRemoval
==============
*/

void __fastcall ParticleManager::AddDeferredChildRemoval(ParticleManager *this, const ParticleSystem *pChildSystem, bool killChild, bool stopChild, bool fromStateSwitch)
{
  ?AddDeferredChildRemoval@ParticleManager@@QEAAXPEBVParticleSystem@@_N11@Z(this, pChildSystem, killChild, stopChild, fromStateSwitch);
}

/*
==============
ParticleManager::StopBoltedSystem
==============
*/

void __fastcall ParticleManager::StopBoltedSystem(ParticleManager *this, const ParticleSystemDef *pSystemDef, unsigned int dobjHandle, unsigned int boneIndex)
{
  ?StopBoltedSystem@ParticleManager@@QEAAXPEBUParticleSystemDef@@II@Z(this, pSystemDef, dobjHandle, boneIndex);
}

/*
==============
ParticleManager::DrawSpriteParticles
==============
*/

void __fastcall ParticleManager::DrawSpriteParticles(ParticleManager *this, FxDrawState *pDrawState, const GfxBackEndData *backEndData)
{
  ?DrawSpriteParticles@ParticleManager@@QEAAXPEAUFxDrawState@@PEBUGfxBackEndData@@@Z(this, pDrawState, backEndData);
}

/*
==============
ParticleManager::GetSoundIndex
==============
*/

unsigned int __fastcall ParticleManager::GetSoundIndex(ParticleManager *this, const ParticleEmitter *pParticleEmitter, const ParticleState *pParticleState, unsigned int particleHandle, ParticleSystemHandle systemHandle)
{
  return ?GetSoundIndex@ParticleManager@@AEBAIPEBVParticleEmitter@@PEBVParticleState@@IW4ParticleSystemHandle@@@Z(this, pParticleEmitter, pParticleState, particleHandle, systemHandle);
}

/*
==============
ParticleManager::ReleaseMemoryPool
==============
*/

void __fastcall ParticleManager::ReleaseMemoryPool(ParticleManager *this, bool warnOnLeaks)
{
  ?ReleaseMemoryPool@ParticleManager@@AEAAX_N@Z(this, warnOnLeaks);
}

/*
==============
ParticleManager::Release
==============
*/

void __fastcall ParticleManager::Release(ParticleManager *this)
{
  ?Release@ParticleManager@@QEAAXXZ(this);
}

/*
==============
ParticleManager::ParticleManager
==============
*/

void __fastcall ParticleManager::ParticleManager(ParticleManager *this)
{
  ??0ParticleManager@@QEAA@XZ(this);
}

/*
==============
ParticleManager::ProcessDeferredChildRemovalRequests
==============
*/

void __fastcall ParticleManager::ProcessDeferredChildRemovalRequests(ParticleManager *this)
{
  ?ProcessDeferredChildRemovalRequests@ParticleManager@@AEAAXXZ(this);
}

/*
==============
ParticleManager::AllocateMemory
==============
*/

void __fastcall ParticleManager::AllocateMemory(HunkUser *hunkUser, int maxLocalClients)
{
  ?AllocateMemory@ParticleManager@@SAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
ParticleManager::ParticleSystemAllocAndClear
==============
*/

void *__fastcall ParticleManager::ParticleSystemAllocAndClear(LocalClientNum_t localClientNum, unsigned __int64 allocSize)
{
  return ?ParticleSystemAllocAndClear@ParticleManager@@SAPEAXW4LocalClientNum_t@@_K@Z(localClientNum, allocSize);
}

/*
==============
ParticleManager::FreeMemory
==============
*/

void ParticleManager::FreeMemory(void)
{
  ?FreeMemory@ParticleManager@@SAXXZ();
}

/*
==============
ParticleManager::KillSystem
==============
*/

void __fastcall ParticleManager::KillSystem(ParticleManager *this, ParticleSystem *pSystem)
{
  ?KillSystem@ParticleManager@@QEAAXPEAVParticleSystem@@@Z(this, pSystem);
}

/*
==============
ParticleManager::ParticleSystemFree
==============
*/

void __fastcall ParticleManager::ParticleSystemFree(LocalClientNum_t localClientNum, void *memptr)
{
  ?ParticleSystemFree@ParticleManager@@SAXW4LocalClientNum_t@@PEAX@Z(localClientNum, memptr);
}

/*
==============
ParticleManager::BucketAllocCallback
==============
*/

void *__fastcall ParticleManager::BucketAllocCallback(unsigned __int64 allocSize, void *customData)
{
  return ?BucketAllocCallback@ParticleManager@@CAPEAX_KPEAX@Z(allocSize, customData);
}

/*
==============
Particle_ReleaseMagmaHeightfield
==============
*/

void __fastcall Particle_ReleaseMagmaHeightfield(const GfxWorld *world)
{
  ?Particle_ReleaseMagmaHeightfield@@YAXPEBUGfxWorld@@@Z(world);
}

/*
==============
ParticleManager::FindBoltedSystem
==============
*/

ParticleSystem *__fastcall ParticleManager::FindBoltedSystem(ParticleManager *this, const ParticleSystemDef *pSystemDef, unsigned int dobjHandle, unsigned int boneIndex)
{
  return ?FindBoltedSystem@ParticleManager@@QEAAPEAVParticleSystem@@PEBUParticleSystemDef@@II@Z(this, pSystemDef, dobjHandle, boneIndex);
}

/*
==============
ParticleManager::InitMemoryPool
==============
*/

void __fastcall ParticleManager::InitMemoryPool(ParticleManager *this)
{
  ?InitMemoryPool@ParticleManager@@AEAAXXZ(this);
}

/*
==============
ParticleManager::SetGlobalTint
==============
*/

void __fastcall ParticleManager::SetGlobalTint(ParticleManager *this, const unsigned __int8 tintIndex, const float4 *tint)
{
  ?SetGlobalTint@ParticleManager@@QEAAXEAEBUfloat4@@@Z(this, tintIndex, tint);
}

/*
==============
ParticleManager::ProcessCommandStream
==============
*/

void __fastcall ParticleManager::ProcessCommandStream(ParticleManager *this)
{
  ?ProcessCommandStream@ParticleManager@@AEAAXXZ(this);
}

/*
==============
ParticleManager::GetMarkSpawnData
==============
*/

const FxMarkSpawnData *__fastcall ParticleManager::GetMarkSpawnData(ParticleManager *this, unsigned __int16 markSpawnDataIndex)
{
  return ?GetMarkSpawnData@ParticleManager@@QEAAAEBUFxMarkSpawnData@@G@Z(this, markSpawnDataIndex);
}

/*
==============
ParticleSystem_RestoreCmd
==============
*/

void __fastcall ParticleSystem_RestoreCmd(const void *const data)
{
  ?ParticleSystem_RestoreCmd@@YAXQEBX@Z(data);
}

/*
==============
ParticleManager::KillBoltedSystem
==============
*/

void __fastcall ParticleManager::KillBoltedSystem(ParticleManager *this, const ParticleSystemDef *pSystemDef, unsigned int dobjHandle, unsigned int boneIndex)
{
  ?KillBoltedSystem@ParticleManager@@QEAAXPEBUParticleSystemDef@@II@Z(this, pSystemDef, dobjHandle, boneIndex);
}

/*
==============
ParticleManager::Update
==============
*/

void __fastcall ParticleManager::Update(ParticleManager *this, const int currentTime, const FxCamera *pCamera)
{
  ?Update@ParticleManager@@QEAAXHPEBUFxCamera@@@Z(this, currentTime, pCamera);
}

/*
==============
ParticleManager::OnKillcamTransition
==============
*/

void __fastcall ParticleManager::OnKillcamTransition(ParticleManager *this, LocalClientNum_t localClientNum)
{
  ?OnKillcamTransition@ParticleManager@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ParticleManager::DebugDraw
==============
*/

void __fastcall ParticleManager::DebugDraw(ParticleManager *this, const int currentTime)
{
  ?DebugDraw@ParticleManager@@QEAAXH@Z(this, currentTime);
}

/*
==============
ParticleManager::KillSound
==============
*/

void __fastcall ParticleManager::KillSound(ParticleManager *this, const ParticleState *pParticleState, unsigned int particleHandle, ParticleSystemHandle systemHandle)
{
  ?KillSound@ParticleManager@@QEAAXPEBVParticleState@@IW4ParticleSystemHandle@@@Z(this, pParticleState, particleHandle, systemHandle);
}

/*
==============
ParticleManager::StopSystem
==============
*/

void __fastcall ParticleManager::StopSystem(ParticleManager *this, ParticleSystem *pSystem)
{
  ?StopSystem@ParticleManager@@QEAAXPEAVParticleSystem@@@Z(this, pSystem);
}

/*
==============
ParticleManager::EnableAllSystemsOnDObj
==============
*/

void __fastcall ParticleManager::EnableAllSystemsOnDObj(ParticleManager *this, unsigned int dobjHandle, bool bEnable)
{
  ?EnableAllSystemsOnDObj@ParticleManager@@QEAAXI_N@Z(this, dobjHandle, bEnable);
}

/*
==============
ParticleManager::UpdateBoneMapWorker
==============
*/

void __fastcall ParticleManager::UpdateBoneMapWorker(const void *const cmdInfo)
{
  ?UpdateBoneMapWorker@ParticleManager@@SAXQEBX@Z(cmdInfo);
}

/*
==============
ParticleManager::ParticleManager
==============
*/
void ParticleManager::ParticleManager(ParticleManager *this)
{
  ntl::fixed_hash_map<unsigned int,orientation_t,4096,4099,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *p_m_particleSystemBoneHashMap; 
  ntl::internal::pool_allocator_freelist<64> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<64> *v4; 
  ntl::internal::pool_allocator_freelist<56> *v5; 
  ntl::internal::pool_allocator_freelist<56> *v6; 
  __int64 v9; 

  p_m_particleSystemBoneHashMap = &this->m_particleSystemBoneHashMap;
  p_m_freelist = &this->m_particleSystemBoneHashMap.m_freelist;
  v4 = &p_m_particleSystemBoneHashMap->m_freelist;
  do
  {
    v4 -= 8;
    v4->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v4;
  }
  while ( v4 > (ntl::internal::pool_allocator_freelist<64> *)p_m_particleSystemBoneHashMap );
  p_m_particleSystemBoneHashMap->m_freelist.m_head.mp_next = &v4->m_head;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  `eh vector constructor iterator'(&p_m_particleSystemBoneHashMap->m_buckets, 8ui64, 0x1003ui64, (void (__fastcall *)(void *))ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t>>::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t>>, (void (__fastcall *)(void *))ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t>>::~intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t>>);
  p_m_particleSystemBoneHashMap->m_currentNumItems = 0i64;
  this->m_localClientNum = LOCAL_CLIENT_INVALID;
  *(_DWORD *)&this->m_localPlayerHasKillcamEntity = 0;
  this->m_localPlayerThermalState = 0;
  *(_WORD *)&this->m_localPlayerAltModeParticlesInUse = 0;
  *(_QWORD *)&this->m_standardModeGroupId = 0i64;
  this->m_numSystemsRunning = 0;
  v5 = &this->m_soloInstancePoolMap.m_freelist;
  v6 = &this->m_soloInstancePoolMap.m_freelist;
  do
  {
    v6 -= 7;
    v6->m_head.mp_next = &v5->m_head;
    v5 = v6;
  }
  while ( v6 > (ntl::internal::pool_allocator_freelist<56> *)&this->m_soloInstancePoolMap );
  this->m_soloInstancePoolMap.m_freelist.m_head.mp_next = &v6->m_head;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_soloInstancePoolMap.m_size = 0i64;
  this->m_soloInstancePoolMap.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  this->m_soloInstancePoolMap.m_endNodeBase.mp_parent = NULL;
  this->m_soloInstancePoolMap.m_endNodeBase.mp_left = &this->m_soloInstancePoolMap.m_endNodeBase;
  this->m_soloInstancePoolMap.m_endNodeBase.mp_right = &this->m_soloInstancePoolMap.m_endNodeBase;
  memset_0(&this->m_markSpawnDataPool, 0, 0x1000ui64);
  *(_QWORD *)this->m_markSpawnDataPool.m_dataPoolAllocTable.array = 0i64;
  *(_QWORD *)&this->m_markSpawnDataPool.m_dataPoolAllocTable.array[2] = 0i64;
  *(_QWORD *)&this->m_markSpawnDataPool.m_dataPoolAllocTable.array[4] = 0i64;
  *(_QWORD *)&this->m_markSpawnDataPool.m_dataPoolAllocTable.array[6] = 0i64;
  *(_QWORD *)&this->m_markSpawnDataPool.m_dataPoolAllocTable.array[8] = 0i64;
  *(_QWORD *)&this->m_markSpawnDataPool.m_dataPoolAllocTable.array[10] = 0i64;
  *(_QWORD *)&this->m_markSpawnDataPool.m_dataPoolAllocTable.array[12] = 0i64;
  *(_QWORD *)&this->m_markSpawnDataPool.m_dataPoolAllocTable.array[14] = 0i64;
  this->m_deferredChildRemovalCount = 0;
  this->m_pSystems = NULL;
  this->m_pFxSystem = NULL;
  this->m_enableUpdate = 0;
  this->m_handleManagerLock.readCount = 0;
  this->m_handleManagerLock.writeCount = 0;
  this->m_handleManagerLock.writeThreadId = 0;
  this->m_commandStreamOffset = 0;
  this->m_commandStreamAccessCheck = 0;
  this->m_disableDebugDraw = 0;
  __asm { vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000 }
  _RAX = this->m_globalTints;
  v9 = 3i64;
  do
  {
    __asm { vmovups xmmword ptr [rax], xmm0 }
    ++_RAX;
    --v9;
  }
  while ( v9 );
}

/*
==============
ParticleManager::~ParticleManager
==============
*/
void ParticleManager::~ParticleManager(ParticleManager *this)
{
  if ( this->m_isInitialized )
    ParticleManager::Release(this);
  ntl::map<ParticleEmitterDef const *,InstancePoolData,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleEmitterDef const *,InstancePoolData>>,128,8>,ntl::less<ParticleEmitterDef const *,ParticleEmitterDef const *>>::~map<ParticleEmitterDef const *,InstancePoolData,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleEmitterDef const *,InstancePoolData>>,128,8>,ntl::less<ParticleEmitterDef const *,ParticleEmitterDef const *>>(&this->m_soloInstancePoolMap);
  ntl::fixed_hash_map<unsigned int,orientation_t,4096,4099,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>>::~fixed_hash_map<unsigned int,orientation_t,4096,4099,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>>(&this->m_particleSystemBoneHashMap);
}

/*
==============
ParticleManager::AddCmd
==============
*/
void ParticleManager::AddCmd(ParticleManager *this, ParticleSystemCommandType cmdTyp, const void *cmdData)
{
  size_t v6; 
  volatile int *p_m_commandStreamOffset; 
  signed __int32 v8; 

  v6 = S_PARTICLE_SYSTEM_COMMAND_TYPE_SIZE[(unsigned __int8)cmdTyp];
  p_m_commandStreamOffset = &this->m_commandStreamOffset;
  if ( (((_BYTE)this + 0x80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_commandStreamOffset) )
    __debugbreak();
  v8 = _InterlockedExchangeAdd(p_m_commandStreamOffset, v6 + 1);
  if ( (unsigned int)(v8 + v6 + 1) <= 0x400 )
  {
    this->m_commandStreamBuf[v8] = cmdTyp;
    memcpy_0(&this->m_commandStreamBuf[v8 + 1], cmdData, v6);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 692, ASSERT_TYPE_ASSERT, "(offset + 1 + cmdSize <= PARTICLE_SYSTEM_COMMAND_STREAM_SIZE)", (const char *)&queryFormat, "offset + PARTICLE_SYSTEM_COMMAND_TYPE_SIZE + cmdSize <= PARTICLE_SYSTEM_COMMAND_STREAM_SIZE") )
      __debugbreak();
    R_WarnOncePerFrame(R_WARN_VFX_COMMAND_BUFFER_OVERFLOW);
  }
}

/*
==============
ParticleManager::AddDeferredChildRemoval
==============
*/
void ParticleManager::AddDeferredChildRemoval(ParticleManager *this, const ParticleSystem *pChildSystem, bool killChild, bool stopChild, bool fromStateSwitch)
{
  ParticleSystemFlags m_flags; 
  int v10; 
  unsigned __int32 v11; 
  ParticleDeferredChildRemoval *v12; 
  __int64 v13; 

  if ( !pChildSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3019, ASSERT_TYPE_ASSERT, "(pChildSystem)", (const char *)&queryFormat, "pChildSystem") )
    __debugbreak();
  if ( !killChild && !stopChild && fromStateSwitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3020, ASSERT_TYPE_ASSERT, "(killChild || stopChild || !fromStateSwitch)", (const char *)&queryFormat, "killChild || stopChild || !fromStateSwitch") )
    __debugbreak();
  m_flags = pChildSystem->m_flags;
  if ( (m_flags & 0x10) != 0 )
  {
    pChildSystem->m_flags = m_flags & 0xFFFFFFFFBFFFE7FFui64;
    return;
  }
  if ( (((_BYTE)this + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_deferredChildRemovalCount) )
    __debugbreak();
  v10 = 1;
  v11 = _InterlockedExchangeAdd(&this->m_deferredChildRemovalCount, 1u);
  if ( v11 >= 0x1000 )
  {
    LODWORD(v13) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3037, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_SYSTEM_COUNT_MAX )", "index doesn't index PARTICLE_SYSTEM_COUNT_MAX\n\t%i not in [0, %i)", v13, 4096) )
      __debugbreak();
  }
  v12 = &s_deferredChildRemoval[(__int64)(int)this->m_localClientNum][v11];
  v12->systemHandle = ParticleSystem::GetSystemHandle((ParticleSystem *)pChildSystem);
  v12->flags = 0;
  if ( killChild )
    goto LABEL_20;
  v10 = 0;
  if ( stopChild )
  {
    v10 = 2;
LABEL_20:
    v12->flags = v10;
  }
  if ( !fromStateSwitch )
  {
    v10 |= 4u;
    v12->flags = v10;
  }
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3051, ASSERT_TYPE_ASSERT, "(deferredChildRemovalData.flags != 0)", (const char *)&queryFormat, "deferredChildRemovalData.flags != 0") )
    __debugbreak();
}

/*
==============
ParticleManager::AddSound
==============
*/
void ParticleManager::AddSound(ParticleManager *this, const char *soundName, const unsigned int *aliasId, const float4 *origin, int currentTime, const ParticleState *pParticleState, unsigned int particleHandle, ParticleSystemHandle systemHandle)
{
  __int64 v12; 
  signed __int32 v13; 
  const char *VFXName; 

  _R15 = origin;
  _RSI = this;
  if ( particleHandle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1745, ASSERT_TYPE_ASSERT, "(particleHandle != PARTICLE_INVALID_HANDLE)", (const char *)&queryFormat, "particleHandle != PARTICLE_INVALID_HANDLE") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1746, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !pParticleState->m_pEmitterOwner )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
      __debugbreak();
    if ( !pParticleState->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1747, ASSERT_TYPE_ASSERT, "(pParticleState->GetEmitterOwner())", (const char *)&queryFormat, "pParticleState->GetEmitterOwner()") )
      __debugbreak();
  }
  v12 = ((__int64)(int)_RSI->m_localClientNum << 12) + (systemHandle & 0xFFF);
  if ( (g_particleSystemsGeneration[v12].__all32 != systemHandle || g_particleSystems[0][v12] < (ParticleSystem *)0x1000) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1748, ASSERT_TYPE_ASSERT, "(Particle_IsParticleSystemValid( GetLocalClientNum(), systemHandle ))", (const char *)&queryFormat, "Particle_IsParticleSystemValid( GetLocalClientNum(), systemHandle )") )
    __debugbreak();
  if ( (((_BYTE)_RSI + 56) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &_RSI->m_soundCreateListCount) )
    __debugbreak();
  v13 = _InterlockedExchangeAdd(&_RSI->m_soundCreateListCount, 1u);
  if ( (unsigned int)v13 < 0x20 )
  {
    _RBX = (__int64)v13 << 6;
    *(int *)((char *)&_RSI->m_soundCreateList[0].currentTime + _RBX) = currentTime;
    *(const char **)((char *)&_RSI->m_soundCreateList[0].soundName + _RBX) = soundName;
    *(unsigned int *)((char *)&_RSI->m_soundCreateList[0].aliasId + _RBX) = *aliasId;
    __asm
    {
      vmovups xmm1, xmmword ptr [r15]
      vmovss  dword ptr [rbx+rsi+48050h], xmm1
      vextractps dword ptr [rbx+rsi+48054h], xmm1, 1
      vextractps dword ptr [rbx+rsi+48058h], xmm1, 2
    }
    *(unsigned int *)((char *)&_RSI->m_soundCreateList[0].particleHandle + _RBX) = particleHandle;
    *(const ParticleState **)((char *)&_RSI->m_soundCreateList[0].pParticleState + _RBX) = pParticleState;
    *(const ParticleEmitter **)((char *)&_RSI->m_soundCreateList[0].pParticleEmitter + _RBX) = ParticleState::GetEmitterOwner((ParticleState *)pParticleState);
    *(ParticleSystemHandle *)((char *)&_RSI->m_soundCreateList[0].systemHandle + _RBX) = systemHandle;
    *(&_RSI->m_soundCreateList[0].isLooping + _RBX) = 0;
    *(unsigned int *)((char *)&_RSI->m_soundCreateList[0].soundId + _RBX) = 0;
  }
  else
  {
    VFXName = ParticleState::GetVFXName((ParticleState *)pParticleState);
    R_WarnOncePerFrame(R_WARN_VFX_TOO_MANY_SOUNDS, 32i64, VFXName);
  }
}

/*
==============
ParticleManager::AddSystem
==============
*/
ParticleSystemHandle ParticleManager::AddSystem(ParticleManager *this, const float4 *localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const float4 *emitterOrientationQuat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData)
{
  LocalClientNum_t v17; 
  vector3 emitterOrientationMat; 

  _RAX = emitterOrientationQuat;
  v17 = (int)localClientNum;
  __asm { vmovups xmm0, xmmword ptr [rax] }
  Float4UnitQuatToAxis((vector3 *)this, localClientNum);
  __asm
  {
    vmovups xmmword ptr [rsp+0F8h+var_78.y.v], xmm1
    vmovups xmmword ptr [rsp+0F8h+var_78.x.v], xmm0
    vmovups ymm3, ymmword ptr [rsp+0F8h+var_78.x.v]
    vmovups ymmword ptr [rsp+0F8h+var_78.x.v], ymm3
    vmovups xmmword ptr [rsp+0F8h+var_78.z.v], xmm2
  }
  return ParticleManager::AddSystem(this, v17, pSystemDef, emitterPos, &emitterOrientationMat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, (scr_string_t)0, PARTICLE_SYSTEM_INVALID_HANDLE, PARTICLE_SYSTEM_INVALID_HANDLE);
}

/*
==============
ParticleManager::AddSystem
==============
*/
ParticleSystemHandle ParticleManager::AddSystem(ParticleManager *this, const float4 *localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const float4 *emitterOrientationQuat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, scr_string_t boneName)
{
  LocalClientNum_t v18; 
  vector3 emitterOrientationMat; 

  _RAX = emitterOrientationQuat;
  v18 = (int)localClientNum;
  __asm { vmovups xmm0, xmmword ptr [rax] }
  Float4UnitQuatToAxis((vector3 *)this, localClientNum);
  __asm
  {
    vmovups xmmword ptr [rsp+0F8h+var_78.y.v], xmm1
    vmovups xmmword ptr [rsp+0F8h+var_78.x.v], xmm0
    vmovups ymm3, ymmword ptr [rsp+0F8h+var_78.x.v]
    vmovups ymmword ptr [rsp+0F8h+var_78.x.v], ymm3
    vmovups xmmword ptr [rsp+0F8h+var_78.z.v], xmm2
  }
  return ParticleManager::AddSystem(this, v18, pSystemDef, emitterPos, &emitterOrientationMat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, boneName, PARTICLE_SYSTEM_INVALID_HANDLE, PARTICLE_SYSTEM_INVALID_HANDLE);
}

/*
==============
ParticleManager::AddSystem
==============
*/
ParticleSystemHandle ParticleManager::AddSystem(ParticleManager *this, const float4 *localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const float4 *emitterOrientationQuat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData)
{
  LocalClientNum_t v14; 
  vector3 emitterOrientationMat; 

  _RAX = emitterOrientationQuat;
  v14 = (int)localClientNum;
  __asm { vmovups xmm0, xmmword ptr [rax] }
  Float4UnitQuatToAxis((vector3 *)this, localClientNum);
  __asm
  {
    vmovups xmmword ptr [rsp+0F8h+var_78.y.v], xmm1
    vmovups xmmword ptr [rsp+0F8h+var_78.x.v], xmm0
    vmovups ymm3, ymmword ptr [rsp+0F8h+var_78.x.v]
    vmovups ymmword ptr [rsp+0F8h+var_78.x.v], ymm3
    vmovups xmmword ptr [rsp+0F8h+var_78.z.v], xmm2
  }
  return ParticleManager::AddSystem(this, v14, pSystemDef, emitterPos, &emitterOrientationMat, spawnTimeMsec, particleSystemFlags, 0xFFFu, 0xFFFFu, NULL, pCamera, pMarkSpawnData, (scr_string_t)0, PARTICLE_SYSTEM_INVALID_HANDLE, PARTICLE_SYSTEM_INVALID_HANDLE);
}

/*
==============
ParticleManager::AddSystem
==============
*/
ParticleSystemHandle ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const vector3 *emitterOrientationMat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData)
{
  return ParticleManager::AddSystem(this, localClientNum, pSystemDef, emitterPos, emitterOrientationMat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, (scr_string_t)0, PARTICLE_SYSTEM_INVALID_HANDLE, PARTICLE_SYSTEM_INVALID_HANDLE);
}

/*
==============
ParticleManager::AddSystem
==============
*/
__int64 ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const vector3 *emitterOrientationMat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, scr_string_t boneName, ParticleSystemHandle parentParticleSystem, ParticleSystemHandle restoredParticleSystem)
{
  __int64 v16; 
  FxSystem *System; 
  volatile int *p_threadingCheckUpdate4Pass; 
  int integer; 
  unsigned __int32 v21; 
  __int64 v22; 
  ParticleSystem *v23; 
  const char *v24; 
  const char *name; 
  unsigned __int8 ActiveGameMode; 
  unsigned __int8 v27; 
  bool m_isHighPlayerCount; 
  int v29; 
  __int64 v30; 
  unsigned int *p_flags; 
  const char *v32; 
  ParticleSystemHandle v33; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  ParticleSystem *v37; 
  __int64 m_freelistDequeue; 
  ParticleSystemHandleImpl *v39; 
  unsigned __int64 v40; 
  unsigned int v41; 
  bool v42; 
  FastCriticalSection *p_m_handleManagerLock; 
  ParticleSystemHandleManager *p_m_handleManager; 
  char *fmt; 
  GameModeType fmta; 
  float4 *systemPos; 
  vector3 *systemOrientationMat; 

  v16 = localClientNum;
  if ( !pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 781, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
    __debugbreak();
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 783, ASSERT_TYPE_ASSERT, "(m_isRunning)", (const char *)&queryFormat, "m_isRunning") )
    __debugbreak();
  if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 784, ASSERT_TYPE_ASSERT, "(m_pSystems != 0)", (const char *)&queryFormat, "m_pSystems != NULL") )
    __debugbreak();
  if ( boneName && this->m_archiveState != ARCHIVE_STATE_RESTORING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 786, ASSERT_TYPE_ASSERT, "(boneName == ( static_cast< scr_string_t >( 0 ) ) || GetArchiveState() == ARCHIVE_STATE_RESTORING)", (const char *)&queryFormat, "boneName == NULL_SCR_STRING || GetArchiveState() == ARCHIVE_STATE_RESTORING") )
    __debugbreak();
  System = FX_GetSystem(v16);
  p_threadingCheckUpdate4Pass = &System->threadingCheckUpdate4Pass;
  if ( (((_BYTE)System + 48) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &System->threadingCheckUpdate4Pass) )
    __debugbreak();
  if ( *p_threadingCheckUpdate4Pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 790, ASSERT_TYPE_ASSERT, "(Sys_InterlockedLoad( &FX_GetSystem( localClientNum )->threadingCheckUpdate4Pass ) == 0)", (const char *)&queryFormat, "Sys_InterlockedLoad( &FX_GetSystem( localClientNum )->threadingCheckUpdate4Pass ) == 0") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "ParticleManager::AddSystem");
  integer = particle_log_name->current.integer;
  if ( integer )
  {
    if ( parentParticleSystem )
    {
      v21 = 0;
      if ( g_particleSystemsGeneration[4096 * v16 + (parentParticleSystem & 0xFFF)].__all32 == parentParticleSystem )
        v21 = parentParticleSystem & 0xFFF;
      v22 = (v16 << 12) + v21;
      v23 = NULL;
      if ( g_particleSystems[0][v22] >= (ParticleSystem *)0x1000 )
        v23 = g_particleSystems[0][v22];
    }
    else
    {
      v23 = NULL;
    }
    if ( !v23 || integer >= 2 )
    {
      v24 = SL_ConvertToStringSafe(boneName);
      if ( v23 )
        name = ParticleSystem::GetDef(v23)->name;
      else
        name = "<no parent>";
      Com_Printf(21, "AddVFX: %d, %s, %s, 0x%zx, %u, %u, %s\n", (unsigned int)spawnTimeMsec, pSystemDef->name, name, particleSystemFlags, dobjHandle, boneIndex, v24);
    }
  }
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v27 = ActiveGameMode;
  m_isHighPlayerCount = this->m_isHighPlayerCount;
  if ( ActiveGameMode != 1 && !BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 604, ASSERT_TYPE_ASSERT, "(gameMode == GameModeType::SP || BG_GameInterface_GameModeIsOnline( gameMode ))", (const char *)&queryFormat, "gameMode == GameModeType::SP || BG_GameInterface_GameModeIsOnline( gameMode )") )
    __debugbreak();
  if ( v27 == 2 )
  {
    v29 = 0x20000;
    if ( m_isHighPlayerCount )
      v29 = 0x40000;
  }
  else if ( v27 == 3 )
  {
    v29 = 0x80000;
  }
  else
  {
    v29 = 0x10000;
  }
  if ( pSystemDef->numEmitters <= 0 )
  {
LABEL_48:
    if ( !particle_log_name->current.enabled )
    {
LABEL_51:
      v33 = PARTICLE_SYSTEM_INVALID_HANDLE;
      goto LABEL_52;
    }
    v32 = "!haveEnabledEmitters";
LABEL_50:
    Com_Printf(21, "AddVFX: Failed %d, %s, %s\n", (unsigned int)spawnTimeMsec, v32, pSystemDef->name);
    goto LABEL_51;
  }
  v30 = 0i64;
  p_flags = &pSystemDef->emitterDefs->flags;
  while ( (v29 & *p_flags) != 0 )
  {
    ++v30;
    p_flags += 40;
    if ( v30 >= pSystemDef->numEmitters )
      goto LABEL_48;
  }
  v35 = particle_enable;
  if ( !particle_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( !v35->current.enabled )
    goto LABEL_136;
  v36 = particle_update;
  if ( !particle_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  if ( !v36->current.enabled )
  {
LABEL_136:
    if ( !particle_log_name->current.enabled )
      goto LABEL_51;
    v32 = "particles disabled or not updating";
    goto LABEL_50;
  }
  if ( this->m_localPlayerHasKillcamEntity && (pSystemDef->flags & 0x20000) != 0 )
  {
    if ( !particle_log_name->current.enabled )
      goto LABEL_51;
    v32 = "PARTICLE_SYSTEM_DEF_FLAG_KILL_ON_KILLCAM_ENTITY_TRANSITION";
    goto LABEL_50;
  }
  if ( ((unsigned __int8)pSystemDef & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 869, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pSystemDef)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pSystemDef)) % (PARTICLE_ALIGNMENT) == 0") )
    __debugbreak();
  v37 = (ParticleSystem *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)v16, 0x240ui64);
  if ( !v37 )
  {
LABEL_115:
    Com_PrintError(21, "Could not allocate particle system based off of def %s, time=%d. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", pSystemDef->name, (unsigned int)spawnTimeMsec);
    goto LABEL_51;
  }
  if ( this->m_archiveState == ARCHIVE_STATE_SAVING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 879, ASSERT_TYPE_ASSERT, "(m_archiveState != ARCHIVE_STATE_SAVING)", (const char *)&queryFormat, "m_archiveState != ARCHIVE_STATE_SAVING") )
    __debugbreak();
  Sys_LockWrite(&this->m_handleManagerLock);
  if ( this->m_numSystemsRunning < 0xFFEu )
  {
    if ( this->m_archiveState )
    {
      if ( this->m_handleManager.m_numAllocated == 4094 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 170, ASSERT_TYPE_ASSERT, "(!full())", (const char *)&queryFormat, "!full()") )
        __debugbreak();
      if ( !this->m_handleManager.m_restoring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 174, ASSERT_TYPE_ASSERT, "(m_restoring)", (const char *)&queryFormat, "m_restoring") )
        __debugbreak();
      v33 = restoredParticleSystem;
      if ( (restoredParticleSystem & 0xFFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 175, ASSERT_TYPE_ASSERT, "(handleImpl._index > 0)", (const char *)&queryFormat, "handleImpl._index > 0") )
        __debugbreak();
      if ( this->m_handleManager.m_freelistDequeue != 1 )
      {
        LODWORD(systemPos) = this->m_handleManager.m_freelistDequeue;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 177, ASSERT_TYPE_ASSERT, "( ( m_freelistDequeue == 1 ) )", "( m_freelistDequeue ) = %u", systemPos) )
          __debugbreak();
      }
      if ( this->m_handleManager.m_freelistEnqueue != 4095 )
      {
        LODWORD(systemPos) = this->m_handleManager.m_freelistEnqueue;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 178, ASSERT_TYPE_ASSERT, "( ( m_freelistEnqueue == PARTICLE_SYSTEM_COUNT_MAX - 1 ) )", "( m_freelistEnqueue ) = %u", systemPos) )
          __debugbreak();
      }
      if ( g_particleSystemsGeneration[4096 * (unsigned __int64)this->m_handleManager.m_localClientNum + (restoredParticleSystem & 0xFFF)].__all32 != restoredParticleSystem )
      {
        LODWORD(systemPos) = restoredParticleSystem;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 179, ASSERT_TYPE_ASSERT, "( ( g_particleSystemsGeneration[m_localClientNum][handleImpl._index].__all32 == handleImpl.__all32 ) )", "( handleImpl.__all32 ) = %u", systemPos) )
          __debugbreak();
      }
      ++this->m_handleManager.m_numAllocated;
      if ( restoredParticleSystem == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 897, ASSERT_TYPE_ASSERT, "(systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
        __debugbreak();
    }
    else if ( this->m_handleManager.m_numAllocated == 4094 )
    {
      v33 = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
    else
    {
      if ( this->m_handleManager.m_freelistDequeue >= 0x1000 )
      {
        LODWORD(systemOrientationMat) = 4096;
        LODWORD(systemPos) = this->m_handleManager.m_freelistDequeue;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 156, ASSERT_TYPE_ASSERT, "(unsigned)( m_freelistDequeue ) < (unsigned)( PARTICLE_SYSTEM_COUNT_MAX )", "m_freelistDequeue doesn't index PARTICLE_SYSTEM_COUNT_MAX\n\t%i not in [0, %i)", systemPos, systemOrientationMat) )
          __debugbreak();
      }
      m_freelistDequeue = this->m_handleManager.m_freelistDequeue;
      v39 = &g_particleSystemsGeneration[4096 * (unsigned __int64)this->m_handleManager.m_localClientNum + m_freelistDequeue];
      v39->__all32 = v39->__all32 & 0xFFF | ((v39->__all32 & 0xFFFFF000) + 4096);
      v40 = (unsigned __int64)this->m_handleManager.m_localClientNum << 12;
      v33 = g_particleSystemsGeneration[v40 + this->m_handleManager.m_freelistDequeue].__all32 ^ ((unsigned __int16)m_freelistDequeue ^ (unsigned __int16)g_particleSystemsGeneration[v40 + this->m_handleManager.m_freelistDequeue].__all32) & 0xFFF;
      if ( (g_particleSystemsGeneration[v40 + ((LOWORD(g_particleSystemsGeneration[v40 + this->m_handleManager.m_freelistDequeue].__all32) ^ ((unsigned __int16)m_freelistDequeue ^ (unsigned __int16)g_particleSystemsGeneration[v40 + this->m_handleManager.m_freelistDequeue].__all32) & 0xFFF) & 0xFFF)].__all32 & 0xFFF) != ((LOWORD(g_particleSystemsGeneration[v40 + this->m_handleManager.m_freelistDequeue].__all32) ^ ((unsigned __int16)m_freelistDequeue ^ (unsigned __int16)g_particleSystemsGeneration[v40 + this->m_handleManager.m_freelistDequeue].__all32) & 0xFFF) & 0xFFF) )
      {
        LODWORD(systemPos) = (LOWORD(g_particleSystemsGeneration[v40 + this->m_handleManager.m_freelistDequeue].__all32) ^ ((unsigned __int16)m_freelistDequeue ^ (unsigned __int16)g_particleSystemsGeneration[v40 + this->m_handleManager.m_freelistDequeue].__all32) & 0xFFF) & 0xFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 161, ASSERT_TYPE_ASSERT, "( ( g_particleSystemsGeneration[m_localClientNum][handleImpl._index]._index == handleImpl._index ) )", "( handleImpl._index ) = %u", systemPos) )
          __debugbreak();
      }
      v41 = (unsigned int)g_particleSystems[(unsigned __int64)this->m_handleManager.m_localClientNum][this->m_handleManager.m_freelistDequeue];
      this->m_handleManager.m_freelistDequeue = v41;
      if ( v41 >= 0x1000 )
      {
        LODWORD(systemOrientationMat) = 4096;
        LODWORD(systemPos) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 163, ASSERT_TYPE_ASSERT, "(unsigned)( m_freelistDequeue ) < (unsigned)( PARTICLE_SYSTEM_COUNT_MAX )", "m_freelistDequeue doesn't index PARTICLE_SYSTEM_COUNT_MAX\n\t%i not in [0, %i)", systemPos, systemOrientationMat) )
          __debugbreak();
      }
      ++this->m_handleManager.m_numAllocated;
    }
  }
  else
  {
    v33 = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
  ParticleManager::UnlockHandleManager(this);
  if ( v33 == PARTICLE_SYSTEM_INVALID_HANDLE )
  {
    LODWORD(fmt) = 4096;
    Com_PrintWarning(21, "Could not add particle system based off of def %s, time=%d. Max limit of %d running systems has been reached\n", pSystemDef->name, (unsigned int)spawnTimeMsec, fmt);
    ParticleManager::ParticleSystemFree((LocalClientNum_t)v16, v37);
    goto LABEL_51;
  }
  v42 = ParticleSystem::Init(v37, localClientNum, pSystemDef, v33, parentParticleSystem, emitterPos, emitterOrientationMat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, boneName, this->m_archiveState);
  p_m_handleManagerLock = &this->m_handleManagerLock;
  if ( !v42 )
  {
    Sys_LockWrite(p_m_handleManagerLock);
    p_m_handleManager = &this->m_handleManager;
    if ( this->m_archiveState )
      ParticleSystemHandleManager::releaseRestore(p_m_handleManager, v33);
    else
      ParticleSystemHandleManager::release(p_m_handleManager, v33);
    ParticleManager::UnlockHandleManager(this);
    ParticleManager::ParticleSystemFree(localClientNum, v37);
    if ( pSystemDef->numEmitters <= 0 )
      goto LABEL_51;
    goto LABEL_115;
  }
  Sys_LockWrite(p_m_handleManagerLock);
  if ( this->m_numSystemsRunning >= 0xFFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 939, ASSERT_TYPE_ASSERT, "(m_numSystemsRunning < PARTICLE_SYSTEM_MAX_HANDLES)", (const char *)&queryFormat, "m_numSystemsRunning < PARTICLE_SYSTEM_MAX_HANDLES") )
    __debugbreak();
  if ( this->m_pSystems[this->m_numSystemsRunning] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 940, ASSERT_TYPE_ASSERT, "(m_pSystems[m_numSystemsRunning] == nullptr)", (const char *)&queryFormat, "m_pSystems[m_numSystemsRunning] == nullptr") )
    __debugbreak();
  this->m_pSystems[this->m_numSystemsRunning++] = v37;
  ParticleManager::UnlockHandleManager(this);
  if ( !this->m_handleManager.m_numAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 219, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  if ( (v33 & 0xFFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 223, ASSERT_TYPE_ASSERT, "(handleImpl._index > 0)", (const char *)&queryFormat, "handleImpl._index > 0") )
    __debugbreak();
  g_particleSystems[(unsigned __int64)this->m_handleManager.m_localClientNum][v33 & 0xFFF] = v37;
  ParticleSystem::SetFirstUpdateOrPreRoll(v37, pCamera);
  if ( this->m_archiveState == ARCHIVE_STATE_RESTORING && (v37->m_flags & 0x40) != 0 )
    ParticleSystem::Stop(v37);
  ParticleSystem::DisableEmittersForGameMode(v37, (GameModeType)v27, this->m_isHighPlayerCount);
  if ( (pSystemDef->flags & 0x800000) != 0 )
    ParticleSystem::ThermalOrNVGStateChanged(v37, this->m_localPlayerThermalState, this->m_localPlayerNVGState, (GameModeType)v27, this->m_isHighPlayerCount);
  if ( this->m_localPlayerAltModeParticlesInUse && (ParticleSystem::GetDef(v37)->flags & 0x400000) != 0 )
  {
    LOBYTE(fmta) = v27;
    ParticleSystem::EnableAltModeParticles(v37, this->m_localPlayerAltModeParticlesState, (const ParticleGroupID)this->m_standardModeGroupId, (const ParticleGroupID)this->m_altModeGroupId, fmta, this->m_isHighPlayerCount);
  }
LABEL_52:
  Sys_ProfEndNamedEvent();
  return (unsigned int)v33;
}

/*
==============
ParticleManager::AddSystem
==============
*/
ParticleSystemHandle ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const vector3 *emitterOrientationMat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, scr_string_t boneName, ParticleSystemHandle parentParticleSystem)
{
  return ParticleManager::AddSystem(this, localClientNum, pSystemDef, emitterPos, emitterOrientationMat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, boneName, parentParticleSystem, PARTICLE_SYSTEM_INVALID_HANDLE);
}

/*
==============
ParticleManager::AddSystem
==============
*/
ParticleSystemHandle ParticleManager::AddSystem(ParticleManager *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const vector3 *emitterOrientationMat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData)
{
  return ParticleManager::AddSystem(this, localClientNum, pSystemDef, emitterPos, emitterOrientationMat, spawnTimeMsec, particleSystemFlags, 0xFFFu, 0xFFFFu, NULL, pCamera, pMarkSpawnData, (scr_string_t)0, PARTICLE_SYSTEM_INVALID_HANDLE, PARTICLE_SYSTEM_INVALID_HANDLE);
}

/*
==============
ParticleManager::AddSystemByName
==============
*/
ParticleSystemHandle ParticleManager::AddSystemByName(ParticleManager *this, LocalClientNum_t localClientNum, const char *vfxName, const float4 *emitterPos, const float4 *emitterOrientationQuat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, const FxMarkSpawnData *pMarkSpawnData)
{
  const float4 *v16; 
  vector3 *v17; 
  FXRegisteredDef outDef; 
  vector3 emitterOrientationMat; 

  _R14 = emitterOrientationQuat;
  if ( !vfxName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1043, ASSERT_TYPE_ASSERT, "(vfxName)", (const char *)&queryFormat, "vfxName") )
    __debugbreak();
  outDef.m_particleSystemDef = NULL;
  FX_LoadEffect(vfxName, &outDef);
  __asm { vmovups xmm0, xmmword ptr [r14] }
  Float4UnitQuatToAxis(v17, v16);
  __asm
  {
    vmovups xmmword ptr [rsp+138h+var_A8+10h], xmm1
    vmovups xmmword ptr [rsp+138h+var_A8], xmm0
    vmovups ymm3, [rsp+138h+var_A8]
    vmovups ymmword ptr [rsp+138h+emitterOrientationMat.x.v], ymm3
    vmovups xmmword ptr [rsp+138h+emitterOrientationMat.z.v], xmm2
  }
  return ParticleManager::AddSystem(this, localClientNum, outDef.m_particleSystemDef, emitterPos, &emitterOrientationMat, spawnTimeMsec, particleSystemFlags, 0xFFFu, 0xFFFFu, NULL, NULL, pMarkSpawnData, (scr_string_t)0, PARTICLE_SYSTEM_INVALID_HANDLE, PARTICLE_SYSTEM_INVALID_HANDLE);
}

/*
==============
ParticleManager::AllocateMarkSpawnData
==============
*/
__int64 ParticleManager::AllocateMarkSpawnData(ParticleManager *this, const FxMarkSpawnData *markSpawnData)
{
  IndexedDataPool<FxMarkSpawnData,512,90> *p_m_markSpawnDataPool; 
  unsigned int v4; 
  bitarray<512> *p_m_dataPoolAllocTable; 
  unsigned int v6; 
  int v7; 
  unsigned int v8; 
  bitarray<512> *v9; 
  unsigned int v10; 

  p_m_markSpawnDataPool = &this->m_markSpawnDataPool;
  Sys_EnterCriticalSection(CRITSECT_BUCKET_ALLOCATOR_PARTICLES);
  v4 = 0;
  p_m_dataPoolAllocTable = &p_m_markSpawnDataPool->m_dataPoolAllocTable;
  v6 = 0;
  while ( 1 )
  {
    v7 = ~p_m_dataPoolAllocTable->array[0];
    if ( p_m_dataPoolAllocTable->array[0] != -1 )
      break;
    ++v6;
    p_m_dataPoolAllocTable = (bitarray<512> *)((char *)p_m_dataPoolAllocTable + 4);
    if ( v6 >= 0x10 )
    {
      Sys_LeaveCriticalSection((CriticalSection)(v7 + 90));
      p_m_markSpawnDataPool->errorCallback();
      return (unsigned __int16)v4;
    }
  }
  if ( *markSpawnData != *(_QWORD *)p_m_markSpawnDataPool->m_dataPool )
  {
    v8 = 0;
    v9 = &p_m_markSpawnDataPool->m_dataPoolAllocTable;
    do
    {
      v10 = __lzcnt(~v9->array[0]);
      v4 += v10;
      if ( v10 < 0x20 )
        break;
      ++v8;
      v9 = (bitarray<512> *)((char *)v9 + 4);
    }
    while ( v8 < 0x10 );
    LOWORD(v4) = truncate_cast<unsigned short,unsigned int>(v4);
    p_m_markSpawnDataPool->m_dataPool[(unsigned __int16)v4] = *markSpawnData;
    bitarray_base<bitarray<512>>::setBit(&p_m_markSpawnDataPool->m_dataPoolAllocTable, (unsigned __int16)v4);
  }
  Sys_LeaveCriticalSection(CRITSECT_BUCKET_ALLOCATOR_PARTICLES);
  return (unsigned __int16)v4;
}

/*
==============
ParticleManager::AllocateMemory
==============
*/
void ParticleManager::AllocateMemory(HunkUser *hunkUser, int maxLocalClients)
{
  unsigned __int64 v2; 

  v2 = (unsigned int)(12582912 * maxLocalClients);
  ParticleManager::ms_memoryPoolSize = (unsigned int)v2;
  ParticleManager::ms_memoryPool = (char *)Mem_HunkUser_AllocInternal(hunkUser, v2, 0x10ui64, "ParticleManager::AllocateMemory");
}

/*
==============
ParticleManager::BucketAllocCallback
==============
*/
void *ParticleManager::BucketAllocCallback(unsigned __int64 allocSize, void *customData)
{
  if ( !customData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3199, ASSERT_TYPE_ASSERT, "(bp)", (const char *)&queryFormat, "bp") )
    __debugbreak();
  return BlockMemMan_Allocate(allocSize, (BlockMemoryPool *)customData);
}

/*
==============
ParticleManager::BucketFreeCallback
==============
*/
void ParticleManager::BucketFreeCallback(void *memptr, void *customData)
{
  if ( !customData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3208, ASSERT_TYPE_ASSERT, "(bp)", (const char *)&queryFormat, "bp") )
    __debugbreak();
  BlockMemMan_Free(memptr, (BlockMemoryPool *)customData);
}

/*
==============
ParticleManager::ClearSoundData
==============
*/
void ParticleManager::ClearSoundData(ParticleManager *this)
{
  memset_0(this->m_soundCreateList, 0, sizeof(this->m_soundCreateList));
  this->m_soundCreateListCount = 0;
  memset_0(this->m_soundDestroyList, 0, sizeof(this->m_soundDestroyList));
  this->m_soundDestroyListCount = 0;
  memset_0(this->m_soundPlayList, 0, sizeof(this->m_soundPlayList));
  this->m_soundPlayListCount = 0;
}

/*
==============
ParticleManager::DebugDraw
==============
*/
void ParticleManager::DebugDraw(ParticleManager *this, const int currentTime)
{
  const dvar_t *v4; 
  __int64 m_numSystemsRunning; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  ParticleSystem *v9; 
  const char *string; 
  const ParticleSystemDef *Def; 
  __int64 v12; 
  __int64 v13; 

  if ( !this->m_disableDebugDraw )
  {
    if ( particle_debug_draw->current.enabled || particle_debug_draw_systems->current.enabled || particle_debug_draw_modules->current.enabled || particle_debug_draw_lights->current.enabled || particle_debug_draw_vectorfields->current.enabled )
      goto LABEL_17;
    v4 = DVARINT_cg_vectorFieldsDraw;
    if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.integer || particle_debug_draw_frustum_cull_radius->current.enabled || particle_debug_draw_spawn_shape->current.enabled || particle_debug_draw_geo_trails->current.enabled || particle_show_axes->current.enabled || particle_show_axes_effect_origin->current.enabled || particle_debug_draw_velocity->current.enabled )
    {
LABEL_17:
      ParticleManager::LockReadHandleManager(this);
      ParticleManager::LockReadHandleManager(this);
      m_numSystemsRunning = this->m_numSystemsRunning;
      ParticleManager::UnlockReadHandleManager(this);
      v6 = 0;
      v7 = m_numSystemsRunning;
      if ( (int)m_numSystemsRunning > 0 )
      {
        v8 = 0i64;
        do
        {
          if ( v6 >= this->m_numSystemsRunning )
          {
            LODWORD(v13) = this->m_numSystemsRunning;
            LODWORD(v12) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v12, v13) )
              __debugbreak();
          }
          if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
            __debugbreak();
          if ( !this->m_pSystems[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
            __debugbreak();
          v9 = this->m_pSystems[v8];
          if ( ParticleSystem::CanDraw(v9) )
          {
            if ( !particle_use_filter->current.enabled || (string = particle_profile_filter->current.string, Def = ParticleSystem::GetDef(v9), strstr_0(Def->name, string)) )
              ParticleSystem::DebugDraw(v9, currentTime, &this->m_pFxSystem->camera);
          }
          ++v6;
          ++v8;
        }
        while ( v8 < v7 );
      }
      ParticleManager::UnlockReadHandleManager(this);
    }
  }
}

/*
==============
ParticleManager::DebugDumpParticleSystemsToCSV
==============
*/
void ParticleManager::DebugDumpParticleSystemsToCSV(ParticleManager *this, const char *filenameSuffix)
{
  const char *v2; 
  const char *v4; 
  fileHandle_t *v5; 
  fileHandle_t v6; 
  __int64 m_numSystemsRunning; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  fileHandle_t dest[16]; 
  char line[256]; 

  v2 = (char *)&queryFormat.fmt + 3;
  if ( *filenameSuffix )
    v2 = "_";
  Com_sprintf((char *)dest, 0x80ui64, "%s%s%s%s", "ParticleSystemInfo", v2, filenameSuffix, ".csv");
  Com_Printf(14, "Opening file \"%s\" for writing.\n", (const char *)dest);
  v5 = FS_FOpenTextFileWrite(dest, v4);
  v6.handle.handle = (__int64)v5;
  if ( v5 == (fileHandle_t *)-1i64 )
  {
    Com_PrintError(14, "Couldn't open file \"%s\" for writing.\n", (const char *)dest);
  }
  else
  {
    FS_Write("Name,SpawnTime,LastUpdateTime,Lifetime,NumEmitters,MaxParticleCount\n", 0x44ui64, (fileHandle_t)v5);
    ParticleManager::LockReadHandleManager(this);
    m_numSystemsRunning = this->m_numSystemsRunning;
    ParticleManager::UnlockReadHandleManager(this);
    v8 = 0;
    v9 = m_numSystemsRunning;
    if ( (int)m_numSystemsRunning > 0 )
    {
      v10 = 0i64;
      do
      {
        if ( v8 >= this->m_numSystemsRunning )
        {
          LODWORD(v13) = this->m_numSystemsRunning;
          LODWORD(v12) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        if ( !this->m_pSystems[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        DebugParticleSystemInfoLine(this->m_pSystems[v10], line, 256);
        v11 = -1i64;
        do
          ++v11;
        while ( line[v11] );
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2243, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
          __debugbreak();
        FS_Write(line, v11, v6);
        ++v8;
        line[0] = 0;
        ++v10;
      }
      while ( v10 < v9 );
    }
    FS_FCloseFile(v6);
    Com_Printf(14, "Done writing file: %s.\n", (const char *)dest);
  }
}

/*
==============
ParticleManager::DebugDumpParticleSystemsToConsole
==============
*/
void ParticleManager::DebugDumpParticleSystemsToConsole(ParticleManager *this, bool logfileOnly)
{
  int v3; 
  __int64 m_numSystemsRunning; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  char line[256]; 

  v3 = 8 * !logfileOnly + 6;
  Com_Printf(v3, "=====================================================================================\n");
  Com_Printf(v3, "============(particle system dump begin)\n");
  Com_Printf(v3, "Name,SpawnTime,LastUpdateTime,Lifetime,NumEmitters,MaxParticleCount\n");
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  v5 = 0;
  v6 = m_numSystemsRunning;
  if ( (int)m_numSystemsRunning > 0 )
  {
    v7 = 0i64;
    do
    {
      if ( v5 >= this->m_numSystemsRunning )
      {
        LODWORD(v9) = this->m_numSystemsRunning;
        LODWORD(v8) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      DebugParticleSystemInfoLine(this->m_pSystems[v7], line, 256);
      Com_Printf(v3, (const char *)&queryFormat, line);
      ++v5;
      line[0] = 0;
      ++v7;
    }
    while ( v7 < v6 );
  }
  Com_Printf(v3, "(end particle system dump)============\n");
  Com_Printf(v3, "=====================================================================================\n");
}

/*
==============
DebugParticleSystemInfoLine
==============
*/
void DebugParticleSystemInfoLine(const ParticleSystem *particleSystem, char *line, const int lineLength)
{
  unsigned __int64 v5; 
  const ParticleSystemDef *Def; 
  int m_lastUpdateTime; 
  int v9; 
  int m_spawnTime; 
  __int64 numEmitters; 
  __int64 v13; 
  __int64 v18; 
  int v34; 
  ParticleEmitterDef *emitterDefs; 
  __int64 v36; 
  unsigned __int64 v37; 
  const ParticleSystemDef *v38; 
  char *fmt; 
  __int64 v40; 

  v5 = lineLength;
  if ( !particleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2189, ASSERT_TYPE_ASSERT, "(particleSystem)", (const char *)&queryFormat, "particleSystem") )
    __debugbreak();
  Def = ParticleSystem::GetDef((ParticleSystem *)particleSystem);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2192, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  m_lastUpdateTime = particleSystem->m_lastUpdateTime;
  v9 = 0;
  m_spawnTime = particleSystem->m_spawnTime;
  numEmitters = Def->numEmitters;
  _EBX = 0;
  LODWORD(v13) = 0;
  if ( (int)numEmitters > 0 && (unsigned int)numEmitters >= 8 )
  {
    _R10 = Def->emitterDefs;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    _RCX = 0i64;
    v18 = 0i64;
    do
    {
      __asm
      {
        vmovd   xmm0, dword ptr [rcx+r10+24h]
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+0C4h], 1
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+164h], 2
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+204h], 3
        vpaddd  xmm1, xmm0, xmm1
        vmovd   xmm0, dword ptr [rcx+r10+2A4h]
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+344h], 1
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+3E4h], 2
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+484h], 3
      }
      LODWORD(v13) = v13 + 8;
      _RCX += 1280i64;
      v18 += 8i64;
      __asm { vpaddd  xmm2, xmm0, xmm2 }
    }
    while ( v18 < (int)numEmitters - (int)numEmitters % 8 );
    __asm
    {
      vpaddd  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
      vmovd   ebx, xmm0
    }
  }
  v13 = (int)v13;
  v34 = 0;
  if ( (int)v13 < numEmitters )
  {
    if ( numEmitters - (int)v13 >= 2 )
    {
      emitterDefs = Def->emitterDefs;
      v36 = (int)v13;
      v37 = ((unsigned __int64)(numEmitters - (int)v13 - 2) >> 1) + 1;
      v13 = (int)v13 + 2 * v37;
      do
      {
        v9 += emitterDefs[v36].particleCountMax;
        v34 += emitterDefs[v36 + 1].particleCountMax;
        v36 += 2i64;
        --v37;
      }
      while ( v37 );
    }
    if ( v13 < numEmitters )
      _EBX += Def->emitterDefs[v13].particleCountMax;
    _EBX += v34 + v9;
  }
  v38 = ParticleSystem::GetDef((ParticleSystem *)particleSystem);
  LODWORD(v40) = m_lastUpdateTime;
  LODWORD(fmt) = m_spawnTime;
  Com_sprintf(line, v5, "%s,%d,%d,%d,%d,%d\n", v38->name, fmt, v40, m_lastUpdateTime - m_spawnTime, numEmitters, _EBX);
}

/*
==============
ParticleManager::DoDebugDraw
==============
*/
bool ParticleManager::DoDebugDraw(ParticleManager *this)
{
  const dvar_t *v1; 

  if ( this->m_disableDebugDraw )
    return 0;
  if ( particle_debug_draw->current.enabled || particle_debug_draw_systems->current.enabled || particle_debug_draw_modules->current.enabled || particle_debug_draw_lights->current.enabled || particle_debug_draw_vectorfields->current.enabled )
    return 1;
  v1 = DVARINT_cg_vectorFieldsDraw;
  if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.integer || particle_debug_draw_frustum_cull_radius->current.enabled || particle_debug_draw_spawn_shape->current.enabled || particle_debug_draw_geo_trails->current.enabled || particle_show_axes->current.enabled || particle_show_axes_effect_origin->current.enabled || particle_debug_draw_velocity->current.enabled;
}

/*
==============
ParticleManager::DoNotDraw
==============
*/
bool ParticleManager::DoNotDraw(ParticleManager *this)
{
  return !particle_enable->current.enabled || !particle_draw->current.enabled || !this->m_isRunning;
}

/*
==============
ParticleManager::DrawNonSpriteParticles
==============
*/
void ParticleManager::DrawNonSpriteParticles(ParticleManager *this, FxSystem *pFxSystem)
{
  FxSystem *v2; 
  team_t team; 
  __int64 m_numSystemsRunning; 
  unsigned int v6; 
  __int64 v7; 
  ParticleSystem *v8; 
  const char *string; 
  const ParticleSystemDef *Def; 
  __int64 v11; 
  __int64 v12; 
  FxSystem *fxSystem; 
  __int64 v15; 

  v2 = pFxSystem;
  if ( !pFxSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 652, ASSERT_TYPE_ASSERT, "(pFxSystem)", (const char *)&queryFormat, "pFxSystem") )
    __debugbreak();
  if ( particle_enable->current.enabled && particle_draw->current.enabled && this->m_isRunning )
  {
    fxSystem = FX_GetSystem(this->m_localClientNum);
    FX_ThreadingCheck_Enter(fxSystem, 2);
    Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx draw non-sprites");
    this->m_pFxSystem = v2;
    team = v2->team;
    if ( v2 == (FxSystem *)-96i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 666, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
      __debugbreak();
    FX_WaitEnterReadSystemLock(v2->lock);
    ParticleManager::UpdateCachedCameraTransform(this, &v2->camera);
    ParticleManager::LockReadHandleManager(this);
    m_numSystemsRunning = this->m_numSystemsRunning;
    ParticleManager::UnlockReadHandleManager(this);
    v6 = 0;
    v15 = m_numSystemsRunning;
    if ( (int)m_numSystemsRunning > 0 )
    {
      v7 = 0i64;
      do
      {
        if ( v6 >= this->m_numSystemsRunning )
        {
          LODWORD(v12) = this->m_numSystemsRunning;
          LODWORD(v11) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        if ( !this->m_pSystems[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        v8 = this->m_pSystems[v7];
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2535, ASSERT_TYPE_ASSERT, "(pSystem)", (const char *)&queryFormat, "pSystem") )
          __debugbreak();
        if ( (ParticleSystem::GetDef(v8)->flags & 2) != 0 && ParticleSystem::CanDraw(v8) && ((v8->m_flags & 0x200) == 0 || team == TEAM_TWO) && ((v8->m_flags & 0x400) == 0 || team == TEAM_ONE) )
        {
          if ( !particle_use_filter->current.enabled || (string = particle_profile_filter->current.string, Def = ParticleSystem::GetDef(v8), strstr_0(Def->name, string)) )
            ParticleSystem::DrawNonSpriteParticles(v8, &v2->camera);
        }
        ++v6;
        ++v7;
      }
      while ( v7 < v15 );
      v2 = pFxSystem;
    }
    FX_ExitReadSystemLock(v2->lock);
    Sys_ProfEndNamedEvent();
    FX_ThreadingCheck_Leave(fxSystem, 2);
  }
}

/*
==============
ParticleManager::DrawSpriteParticles
==============
*/
void ParticleManager::DrawSpriteParticles(ParticleManager *this, FxDrawState *pDrawState, const GfxBackEndData *backEndData)
{
  team_t team; 
  GfxCodeSurfListType codeSurfListType; 
  __int64 m_numSystemsRunning; 
  unsigned int v8; 
  __int64 v9; 
  ParticleSystem *v10; 
  const char *string; 
  const ParticleSystemDef *Def; 
  __int64 v13; 
  __int64 v14; 
  FxSystem *fxSystem; 
  __int64 v17; 

  if ( !pDrawState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 581, ASSERT_TYPE_ASSERT, "(pDrawState)", (const char *)&queryFormat, "pDrawState") )
    __debugbreak();
  if ( particle_enable->current.enabled && particle_draw->current.enabled && this->m_isRunning )
  {
    fxSystem = FX_GetSystem(this->m_localClientNum);
    FX_ThreadingCheck_Enter(fxSystem, 2);
    if ( !this->m_pFxSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 589, ASSERT_TYPE_ASSERT, "(m_pFxSystem)", (const char *)&queryFormat, "m_pFxSystem") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx draw sprites");
    team = this->m_pFxSystem->team;
    codeSurfListType = pDrawState->codeSurfListType;
    if ( codeSurfListType != GFX_CODE_SURFLIST_SUNSHADOW_TRANS )
      ParticleManager::UpdateCachedCameraTransform(this, pDrawState->camera);
    ParticleManager::LockReadHandleManager(this);
    m_numSystemsRunning = this->m_numSystemsRunning;
    ParticleManager::UnlockReadHandleManager(this);
    v8 = 0;
    v17 = m_numSystemsRunning;
    if ( (int)m_numSystemsRunning > 0 )
    {
      v9 = 0i64;
      while ( 1 )
      {
        if ( v8 >= this->m_numSystemsRunning )
        {
          LODWORD(v14) = this->m_numSystemsRunning;
          LODWORD(v13) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        if ( !this->m_pSystems[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        v10 = this->m_pSystems[v9];
        if ( !fx_umbra_culling->current.enabled )
          break;
        if ( (v10->m_flags & 0x400000000i64) == 0 )
          goto LABEL_37;
LABEL_40:
        ++v8;
        if ( ++v9 >= v17 )
          goto LABEL_41;
      }
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2535, ASSERT_TYPE_ASSERT, "(pSystem)", (const char *)&queryFormat, "pSystem") )
        __debugbreak();
      if ( (ParticleSystem::GetDef(v10)->flags & 1) == 0 || !ParticleSystem::CanDraw(v10) || (v10->m_flags & 0x200) != 0 && team != TEAM_TWO )
        goto LABEL_40;
      if ( (v10->m_flags & 0x400) != 0 && team != TEAM_ONE )
        goto LABEL_40;
      if ( particle_use_filter->current.enabled )
      {
        string = particle_profile_filter->current.string;
        Def = ParticleSystem::GetDef(v10);
        if ( !strstr_0(Def->name, string) )
          goto LABEL_40;
      }
LABEL_37:
      if ( codeSurfListType != GFX_CODE_SURFLIST_SUNSHADOW_TRANS || (ParticleSystem::GetDef(v10)->flags & 0x200) != 0 )
        ParticleSystem::DrawSpriteParticles(v10, pDrawState, backEndData, codeSurfListType == GFX_CODE_SURFLIST_SUNSHADOW_TRANS);
      goto LABEL_40;
    }
LABEL_41:
    Sys_ProfEndNamedEvent();
    FX_ThreadingCheck_Leave(fxSystem, 2);
  }
}

/*
==============
ParticleManager::EnableAllSystemsOnDObj
==============
*/
void ParticleManager::EnableAllSystemsOnDObj(ParticleManager *this, unsigned int dobjHandle, bool bEnable)
{
  FxSystem *System; 
  __int64 m_numSystemsRunning; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  ParticleSystem *v11; 
  __int64 v12; 
  __int64 v13; 

  System = FX_GetSystem(this->m_localClientNum);
  FX_ThreadingCheck_Enter(System, 0);
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  v8 = 0;
  v9 = m_numSystemsRunning;
  if ( (int)m_numSystemsRunning > 0 )
  {
    v10 = 0i64;
    do
    {
      if ( v8 >= this->m_numSystemsRunning )
      {
        LODWORD(v13) = this->m_numSystemsRunning;
        LODWORD(v12) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v11 = this->m_pSystems[v10];
      if ( (v11->m_flags & 1) != 0 && (*(_DWORD *)&v11->m_bolt.FxBoltBase & 0xFFF) == dobjHandle )
      {
        if ( bEnable )
          v11->m_flags &= ~0x10000ui64;
        else
          v11->m_flags |= 0x10000ui64;
      }
      ++v8;
      ++v10;
    }
    while ( v10 < v9 );
  }
  FX_ThreadingCheck_Leave(System, 0);
}

/*
==============
ParticleManager::EnableDrawForAllSystemsOnDObj
==============
*/
void ParticleManager::EnableDrawForAllSystemsOnDObj(ParticleManager *this, unsigned int dobjHandle, bool bDraw)
{
  FxSystem *System; 
  __int64 m_numSystemsRunning; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  ParticleSystem *v11; 
  __int64 v12; 
  __int64 v13; 

  System = FX_GetSystem(this->m_localClientNum);
  FX_ThreadingCheck_Enter(System, 0);
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  v8 = 0;
  v9 = m_numSystemsRunning;
  if ( (int)m_numSystemsRunning > 0 )
  {
    v10 = 0i64;
    do
    {
      if ( v8 >= this->m_numSystemsRunning )
      {
        LODWORD(v13) = this->m_numSystemsRunning;
        LODWORD(v12) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v11 = this->m_pSystems[v10];
      if ( (v11->m_flags & 1) != 0 && (*(_DWORD *)&v11->m_bolt.FxBoltBase & 0xFFF) == dobjHandle )
      {
        if ( bDraw )
          v11->m_flags &= ~0x8000000ui64;
        else
          v11->m_flags |= 0x8000000ui64;
      }
      ++v8;
      ++v10;
    }
    while ( v10 < v9 );
  }
  FX_ThreadingCheck_Leave(System, 0);
}

/*
==============
ParticleManager::EnableSoundFlag
==============
*/
void ParticleManager::EnableSoundFlag(ParticleManager *this, bool enable, const ParticleManager::Particle_SoundData *rSoundData)
{
  ParticleSystemHandle systemHandle; 
  __int64 v5; 
  const ParticleState *pParticleState; 
  ParticleData *m_pParticleData; 
  const char *VFXName; 
  unsigned __int8 *ParticleDataArray; 
  unsigned int ParticleIndexFromHandle; 
  __int64 v12; 
  int v13; 
  unsigned int v14; 

  systemHandle = rSoundData->systemHandle;
  v5 = ((__int64)(int)this->m_localClientNum << 12) + (systemHandle & 0xFFF);
  if ( g_particleSystemsGeneration[v5].__all32 == systemHandle && g_particleSystems[0][v5] >= (ParticleSystem *)0x1000 )
  {
    if ( !rSoundData->pParticleEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2615, ASSERT_TYPE_ASSERT, "(rSoundData.pParticleEmitter)", (const char *)&queryFormat, "rSoundData.pParticleEmitter") )
      __debugbreak();
    if ( (rSoundData->pParticleEmitter->m_flags & 0x40) == 0 )
    {
      if ( !rSoundData->pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2620, ASSERT_TYPE_ASSERT, "(rSoundData.pParticleState)", (const char *)&queryFormat, "rSoundData.pParticleState") )
        __debugbreak();
      pParticleState = rSoundData->pParticleState;
      if ( !pParticleState->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
        __debugbreak();
      if ( pParticleState->m_pEmitterOwner != rSoundData->pParticleEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2621, ASSERT_TYPE_ASSERT, "(rSoundData.pParticleState->GetEmitterOwner() == rSoundData.pParticleEmitter)", (const char *)&queryFormat, "rSoundData.pParticleState->GetEmitterOwner() == rSoundData.pParticleEmitter") )
        __debugbreak();
      if ( rSoundData->particleHandle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2622, ASSERT_TYPE_ASSERT, "(rSoundData.particleHandle != PARTICLE_INVALID_HANDLE)", (const char *)&queryFormat, "rSoundData.particleHandle != PARTICLE_INVALID_HANDLE") )
        __debugbreak();
      m_pParticleData = rSoundData->pParticleState->m_pParticleData;
      if ( !m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2625, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
        __debugbreak();
      if ( m_pParticleData->m_pParticleData )
      {
        ParticleDataArray = ParticleData::GetParticleDataArray(m_pParticleData, PARTICLE_DATA_FLAGS);
        ParticleIndexFromHandle = Particle_GetParticleIndexFromHandle(m_pParticleData, rSoundData->particleHandle);
        if ( ParticleIndexFromHandle != -1 )
        {
          v12 = ParticleIndexFromHandle;
          v13 = *(_DWORD *)&ParticleDataArray[4 * ParticleIndexFromHandle];
          if ( enable )
            v14 = v13 | 0x80;
          else
            v14 = v13 & 0xFFFFFF7F;
          *(_DWORD *)&ParticleDataArray[4 * v12] = v14;
        }
      }
      else
      {
        VFXName = ParticleState::GetVFXName((ParticleState *)rSoundData->pParticleState);
        Com_PrintError(21, "EnableSoundFlag: could not find any valid particle data for effect %s\n", VFXName);
      }
    }
  }
}

/*
==============
ParticleManager::FindBoltedSystem
==============
*/
ParticleSystem *ParticleManager::FindBoltedSystem(ParticleManager *this, const ParticleSystemDef *pSystemDef, unsigned int dobjHandle, unsigned int boneIndex)
{
  int m_numSystemsRunning; 
  ParticleSystem *BoltedSystemInternal; 
  FxSystem *System; 

  System = FX_GetSystem(this->m_localClientNum);
  FX_ThreadingCheck_Enter(System, 2);
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  BoltedSystemInternal = ParticleManager::FindBoltedSystemInternal(this, m_numSystemsRunning, pSystemDef, dobjHandle, boneIndex);
  FX_ThreadingCheck_Leave(System, 2);
  return BoltedSystemInternal;
}

/*
==============
ParticleManager::FindBoltedSystemInternal
==============
*/
ParticleSystem *ParticleManager::FindBoltedSystemInternal(ParticleManager *this, const int numSystemsRunning, const ParticleSystemDef *pSystemDef, unsigned int dobjHandle, unsigned int boneIndex)
{
  unsigned int v9; 
  __int64 i; 
  ParticleSystem *v11; 
  __int64 v13; 
  __int64 v14; 

  if ( !pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1163, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
    __debugbreak();
  v9 = 0;
  if ( numSystemsRunning <= 0 )
    return 0i64;
  for ( i = 0i64; ; ++i )
  {
    if ( v9 >= this->m_numSystemsRunning )
    {
      LODWORD(v14) = this->m_numSystemsRunning;
      LODWORD(v13) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
      __debugbreak();
    if ( !this->m_pSystems[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
      __debugbreak();
    v11 = this->m_pSystems[i];
    if ( (v11->m_flags & 1) != 0 )
    {
      if ( !v11->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
        __debugbreak();
      if ( v11->m_pSystemDef == pSystemDef && (*(_DWORD *)&v11->m_bolt.FxBoltBase & 0xFFF) == dobjHandle && (unsigned __int16)(*(_DWORD *)&v11->m_bolt.FxBoltBase >> 14) == boneIndex )
        break;
    }
    if ( (int)++v9 >= numSystemsRunning )
      return 0i64;
  }
  return v11;
}

/*
==============
ParticleManager::FreeMarkSpawnData
==============
*/
void ParticleManager::FreeMarkSpawnData(ParticleManager *this, unsigned __int16 dataIndex)
{
  bitarray<512> *p_m_dataPoolAllocTable; 
  unsigned __int64 v3; 
  unsigned int v4; 
  bool v5; 
  unsigned int *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 

  if ( dataIndex )
  {
    p_m_dataPoolAllocTable = &this->m_markSpawnDataPool.m_dataPoolAllocTable;
    v3 = dataIndex;
    if ( dataIndex >= 0x200u )
    {
      v8 = 512;
      v7 = dataIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
        __debugbreak();
    }
    v4 = 0x80000000 >> (v3 & 0x1F);
    v5 = (v4 & p_m_dataPoolAllocTable->array[v3 >> 5]) == 0;
    v6 = &p_m_dataPoolAllocTable->array[v3 >> 5];
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 350, ASSERT_TYPE_ASSERT, "(m_dataPoolAllocTable.testBit( index ) == true)", (const char *)&queryFormat, "m_dataPoolAllocTable.testBit( index ) == true") )
      __debugbreak();
    Sys_EnterCriticalSection(CRITSECT_BUCKET_ALLOCATOR_PARTICLES);
    if ( (unsigned int)v3 >= 0x200 )
    {
      v10 = 512;
      v9 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v9, v10) )
        __debugbreak();
    }
    *v6 &= ~v4;
    Sys_LeaveCriticalSection(CRITSECT_BUCKET_ALLOCATOR_PARTICLES);
  }
}

/*
==============
ParticleManager::FreeMemory
==============
*/
void ParticleManager::FreeMemory(void)
{
  if ( ParticleManager::ms_memoryPool )
  {
    if ( !ParticleManager::ms_memoryPoolSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 398, ASSERT_TYPE_ASSERT, "(ms_memoryPoolSize)", (const char *)&queryFormat, "ms_memoryPoolSize") )
      __debugbreak();
    DebugWipe(ParticleManager::ms_memoryPool, ParticleManager::ms_memoryPoolSize);
  }
  ParticleManager::ms_memoryPoolSize = 0i64;
  ParticleManager::ms_memoryPool = NULL;
}

/*
==============
ParticleManager::GetGlobalTintColor
==============
*/
float4 *ParticleManager::GetGlobalTintColor(ParticleManager *this, float4 *result, const ParticleSystem *const pParticleSystem)
{
  unsigned __int8 GlobalTintIndex; 
  unsigned __int8 v6; 
  float4 *v9; 
  int v10; 
  int v11; 

  _RSI = this;
  _RDI = result;
  GlobalTintIndex = ParticleSystem::GetGlobalTintIndex((ParticleSystem *)pParticleSystem);
  v6 = GlobalTintIndex;
  if ( GlobalTintIndex >= 3u )
  {
    v11 = 3;
    v10 = GlobalTintIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3236, ASSERT_TYPE_ASSERT, "(unsigned)( globalTintIndex ) < (unsigned)( NUM_GLOBAL_TINTS )", "globalTintIndex doesn't index NUM_GLOBAL_TINTS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  _RAX = 2 * (v6 + 19661i64);
  __asm { vmovups xmm0, xmmword ptr [rsi+rax*8] }
  v9 = _RDI;
  __asm { vmovdqa xmmword ptr [rdi], xmm0 }
  return v9;
}

/*
==============
ParticleManager::GetMarkSpawnData
==============
*/
IndexedDataPool<FxMarkSpawnData,512,90> *ParticleManager::GetMarkSpawnData(ParticleManager *this, unsigned __int16 markSpawnDataIndex)
{
  IndexedDataPool<FxMarkSpawnData,512,90> *p_m_markSpawnDataPool; 
  unsigned __int64 v4; 
  int v6; 
  int v7; 

  p_m_markSpawnDataPool = &this->m_markSpawnDataPool;
  v4 = markSpawnDataIndex;
  if ( markSpawnDataIndex >= 0x200u )
  {
    v7 = 512;
    v6 = markSpawnDataIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v4 & 0x1F)) & p_m_markSpawnDataPool->m_dataPoolAllocTable.array[v4 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 367, ASSERT_TYPE_ASSERT, "(m_dataPoolAllocTable.testBit( index ) == true)", (const char *)&queryFormat, "m_dataPoolAllocTable.testBit( index ) == true") )
    __debugbreak();
  if ( markSpawnDataIndex >= 0x200u )
    return p_m_markSpawnDataPool;
  else
    return (IndexedDataPool<FxMarkSpawnData,512,90> *)((char *)p_m_markSpawnDataPool + 8 * markSpawnDataIndex);
}

/*
==============
ParticleManager::GetMemoryUsageInBytes
==============
*/
__int64 ParticleManager::GetMemoryUsageInBytes(ParticleManager *this)
{
  BlockMemoryPool *v1; 

  v1 = &s_particleSystemPool[this->m_localClientNum];
  return v1->poolSize - BlockMemMan_GetFreeRemaining(v1);
}

/*
==============
ParticleManager::GetParticleSystemByIndex
==============
*/
ParticleSystem *ParticleManager::GetParticleSystemByIndex(ParticleManager *this, int index)
{
  __int64 v3; 
  ParticleSystem **m_pSystems; 
  int m_numSystemsRunning; 

  v3 = index;
  if ( (unsigned int)index >= this->m_numSystemsRunning )
  {
    m_numSystemsRunning = this->m_numSystemsRunning;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", index, m_numSystemsRunning) )
      __debugbreak();
  }
  if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
    __debugbreak();
  m_pSystems = this->m_pSystems;
  if ( !m_pSystems[v3] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
      __debugbreak();
    m_pSystems = this->m_pSystems;
  }
  return m_pSystems[v3];
}

/*
==============
ParticleManager::GetProfileData
==============
*/
void ParticleManager::GetProfileData(ParticleManager *this, ParticleProfileGlobalData *outProfileGlobalData)
{
  __int64 m_numSystemsRunning; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  ParticleSystem *v8; 
  __int64 v9; 
  __int64 v10; 

  if ( this->m_isRunning )
  {
    ParticleManager::LockReadHandleManager(this);
    m_numSystemsRunning = this->m_numSystemsRunning;
    ParticleManager::UnlockReadHandleManager(this);
    v5 = 0;
    v6 = m_numSystemsRunning;
    if ( (int)m_numSystemsRunning > 0 )
    {
      v7 = 0i64;
      do
      {
        if ( v5 >= this->m_numSystemsRunning )
        {
          LODWORD(v10) = this->m_numSystemsRunning;
          LODWORD(v9) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        if ( !this->m_pSystems[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        v8 = this->m_pSystems[v7];
        if ( v8->m_isRunning )
          ParticleSystem::GetProfileData(v8, outProfileGlobalData);
        ++v5;
        ++v7;
      }
      while ( v7 < v6 );
    }
  }
}

/*
==============
ParticleManager::GetSoundIndex
==============
*/
__int64 ParticleManager::GetSoundIndex(ParticleManager *this, const ParticleEmitter *pParticleEmitter, const ParticleState *pParticleState, unsigned int particleHandle, ParticleSystemHandle systemHandle)
{
  const ParticleState **p_pParticleState; 
  unsigned int v10; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2596, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  p_pParticleState = &this->m_soundPlayList[0].pParticleState;
  v10 = 0;
  while ( pParticleEmitter != (const ParticleEmitter *)p_pParticleState[1] || pParticleState != *p_pParticleState || particleHandle != *((_DWORD *)p_pParticleState - 1) || systemHandle != *((_DWORD *)p_pParticleState + 4) )
  {
    ++v10;
    p_pParticleState += 8;
    if ( v10 >= 0x20 )
      return 0xFFFFFFFFi64;
  }
  return v10;
}

/*
==============
ParticleManager::HandleMyChanges
==============
*/
void ParticleManager::HandleMyChanges(bool restoreCurrentEffect)
{
  LocalClientNum_t v1; 
  bool v2; 
  ParticleSystem ***p_m_pSystems; 
  connstate_t *p_connectionState; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  LocalClientNum_t v11; 
  connstate_t *v12; 

  v1 = LOCAL_CLIENT_0;
  v2 = restoreCurrentEffect;
  v11 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_m_pSystems = &g_particleManager[0].m_pSystems;
    p_connectionState = &clientUIActives[0].connectionState;
    v12 = &clientUIActives[0].connectionState;
    do
    {
      if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v9) = 2;
        LODWORD(v8) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      ParticleManager::LockReadHandleManager((ParticleManager *)(p_m_pSystems - 39074));
      v5 = *((int *)p_m_pSystems - 2860);
      ParticleManager::UnlockReadHandleManager((ParticleManager *)(p_m_pSystems - 39074));
      v6 = 0;
      v7 = 0i64;
      if ( v5 > 0 )
      {
        do
        {
          if ( v6 >= *((_DWORD *)p_m_pSystems - 2860) )
          {
            LODWORD(v9) = *((_DWORD *)p_m_pSystems - 2860);
            LODWORD(v8) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v8, v9) )
              __debugbreak();
          }
          if ( !*p_m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
            __debugbreak();
          if ( !(*p_m_pSystems)[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
            __debugbreak();
          ParticleSystem::HandleMyChanges((*p_m_pSystems)[v7]);
          ++v6;
          ++v7;
        }
        while ( v7 < v5 );
        v1 = v11;
        p_connectionState = v12;
        v2 = restoreCurrentEffect;
      }
      if ( v2 )
        Particle_ToolCommandRestoreCurrentEffect(v1);
      if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v9) = 2;
        LODWORD(v8) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE )
        CG_Particle_ClearParticleDeferredPhysics(v1, 1);
      ++v1;
      *((_BYTE *)p_m_pSystems + 1972) = 0;
      p_connectionState += 110;
      v11 = v1;
      p_m_pSystems += 39328;
      v12 = p_connectionState;
    }
    while ( v1 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
ParticleManager::HandleMyChangesPreLoad
==============
*/
void ParticleManager::HandleMyChangesPreLoad(bool removeCurrentEffect)
{
  LocalClientNum_t v1; 
  bool v2; 
  int *p_m_numSystemsRunning; 
  connstate_t *p_connectionState; 
  ParticleManager *v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  LocalClientNum_t v12; 
  connstate_t *v13; 

  v1 = LOCAL_CLIENT_0;
  v2 = removeCurrentEffect;
  v12 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_m_numSystemsRunning = &g_particleManager[0].m_numSystemsRunning;
    p_connectionState = &clientUIActives[0].connectionState;
    v13 = &clientUIActives[0].connectionState;
    do
    {
      if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v10) = 2;
        LODWORD(v9) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      *((_BYTE *)p_m_numSystemsRunning + 13412) = 1;
      Particle_ClearProfiler(v1);
      if ( v2 )
        Particle_ToolCommandRemoveCurrentEffect(v1);
      v5 = (ParticleManager *)(p_m_numSystemsRunning - 75288);
      ParticleManager::LockReadHandleManager((ParticleManager *)(p_m_numSystemsRunning - 75288));
      v6 = *p_m_numSystemsRunning;
      ParticleManager::UnlockReadHandleManager((ParticleManager *)(p_m_numSystemsRunning - 75288));
      v7 = 0;
      v8 = 0i64;
      if ( v6 > 0 )
      {
        do
        {
          if ( v7 >= *p_m_numSystemsRunning )
          {
            LODWORD(v10) = *p_m_numSystemsRunning;
            LODWORD(v9) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v9, v10) )
              __debugbreak();
          }
          if ( !*((_QWORD *)p_m_numSystemsRunning + 1430) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
            __debugbreak();
          if ( !*(_QWORD *)(*((_QWORD *)p_m_numSystemsRunning + 1430) + 8 * v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
            __debugbreak();
          ParticleSystem::HandleMyChangesPreLoad(*(ParticleSystem **)(*((_QWORD *)p_m_numSystemsRunning + 1430) + 8 * v8));
          ++v7;
          ++v8;
        }
        while ( v8 < v6 );
        v1 = v12;
        v5 = (ParticleManager *)(p_m_numSystemsRunning - 75288);
        p_connectionState = v13;
        v2 = removeCurrentEffect;
      }
      g_particleDeferredPhysicsFXDestroyListCount[v1] = 0;
      ParticleManager::ProcessDeferredRequestsAndSort(v5, v1);
      if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v10) = 2;
        LODWORD(v9) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE )
        CG_Particle_ClearParticleDeferredPhysics(v1, 1);
      ++v1;
      p_connectionState += 110;
      v12 = v1;
      p_m_numSystemsRunning += 78656;
      v13 = p_connectionState;
    }
    while ( v1 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
ParticleManager::Init
==============
*/
void ParticleManager::Init(ParticleManager *this, LocalClientNum_t localClientNum, bool isHighPlayerCount)
{
  LocalClientNum_t m_localClientNum; 
  __int64 v5; 
  int v7; 
  unsigned __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  ParticleSystem **v27; 
  ParticleSystem **v28; 
  ParticleSystemHandleImpl *v29; 
  unsigned int i; 
  int v31; 
  int RowCount; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  const char *ColumnValueForRow; 
  FxMarkSpawnData v37; 
  BucketAllocatorThreadParams threadParams; 
  StringTable *tablePtr; 

  m_localClientNum = this->m_localClientNum;
  v5 = localClientNum;
  _RBX = this;
  if ( this->m_isInitialized )
  {
    if ( m_localClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 220, ASSERT_TYPE_ASSERT, "(m_localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "m_localClientNum != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    if ( !_RBX->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 221, ASSERT_TYPE_ASSERT, "(m_isRunning)", (const char *)&queryFormat, "m_isRunning") )
      __debugbreak();
  }
  else
  {
    if ( m_localClientNum != LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 226, ASSERT_TYPE_ASSERT, "(m_localClientNum == LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "m_localClientNum == LOCAL_CLIENT_INVALID") )
      __debugbreak();
    if ( _RBX->m_numSystemsRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 228, ASSERT_TYPE_ASSERT, "(m_numSystemsRunning == 0)", (const char *)&queryFormat, "m_numSystemsRunning == 0") )
      __debugbreak();
    if ( _RBX->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 229, ASSERT_TYPE_ASSERT, "(m_pSystems == 0)", (const char *)&queryFormat, "m_pSystems == NULL") )
      __debugbreak();
    _RBX->m_localClientNum = v5;
    v7 = 0;
    _RBX->m_numSystemsRunning = 0;
    _RBX->m_deferredChildRemovalCount = 0;
    _RBX->m_archiveState = ARCHIVE_STATE_INACTIVE;
    _RBX->m_isHighPlayerCount = isHighPlayerCount;
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
      vmovups [rsp+98h+var_58], ymm0
      vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
      vmovups [rsp+98h+var_38], ymm0
      vmovups ymm0, [rsp+98h+var_58]
      vmovups ymm1, [rsp+98h+var_38]
      vmovups ymmword ptr [rbx+4C520h], ymm0
      vmovups ymmword ptr [rbx+4C540h], ymm1
      vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
      vmovups [rsp+98h+var_58], ymm0
      vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
      vmovups [rsp+98h+var_38], ymm0
      vmovups ymm0, [rsp+98h+var_58]
      vmovups ymm1, [rsp+98h+var_38]
      vmovups ymmword ptr [rbx+4C5A0h], ymm0
      vmovups ymmword ptr [rbx+4C5C0h], ymm1
      vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
      vmovups [rsp+98h+var_58], ymm0
      vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
      vmovups [rsp+98h+var_38], ymm0
      vmovups ymm0, [rsp+98h+var_58]
      vmovups ymm1, [rsp+98h+var_38]
      vmovups ymmword ptr [rbx+4C560h], ymm0
      vmovups ymmword ptr [rbx+4C580h], ymm1
      vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
      vmovups [rsp+98h+var_58], ymm0
      vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
      vmovups [rsp+98h+var_38], ymm0
      vmovups ymm0, [rsp+98h+var_58]
      vmovups ymm1, [rsp+98h+var_38]
      vmovups ymmword ptr [rbx+4C5E0h], ymm0
      vmovups ymmword ptr [rbx+4C600h], ymm1
    }
    if ( !ParticleManager::ms_memoryPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3090, ASSERT_TYPE_ASSERT, "(ms_memoryPool != nullptr)", (const char *)&queryFormat, "ms_memoryPool != nullptr") )
      __debugbreak();
    v24 = ParticleManager::ms_memoryPoolSize;
    if ( ParticleManager::ms_memoryPoolSize != 12582912 * (ParticleManager::ms_memoryPoolSize / 0xC00000) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3091, ASSERT_TYPE_ASSERT, "(ms_memoryPoolSize % PARTICLE_SYSTEM_POOL_SIZE == 0)", (const char *)&queryFormat, "ms_memoryPoolSize % PARTICLE_SYSTEM_POOL_SIZE == 0") )
        __debugbreak();
      v24 = ParticleManager::ms_memoryPoolSize;
    }
    v25 = (unsigned int)(12582912 * _RBX->m_localClientNum);
    if ( v25 + 12582912 > v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3094, ASSERT_TYPE_ASSERT, "(memoryOffset + PARTICLE_SYSTEM_POOL_SIZE <= ms_memoryPoolSize)", (const char *)&queryFormat, "memoryOffset + PARTICLE_SYSTEM_POOL_SIZE <= ms_memoryPoolSize") )
      __debugbreak();
    s_particleSystemPool[_RBX->m_localClientNum].pool = &ParticleManager::ms_memoryPool[v25];
    s_particleSystemPool[_RBX->m_localClientNum].poolSize = 12582912;
    s_particleSystemPool[_RBX->m_localClientNum].alignment = 16;
    BlockMemMan_Init(&s_particleSystemPool[_RBX->m_localClientNum]);
    BucketAllocatorThreadParams::BucketAllocatorThreadParams(&threadParams);
    v26 = _RBX->m_localClientNum;
    threadParams.threadSafe = 1;
    threadParams.criticalSection = CRITSECT_BUCKET_ALLOCATOR_PARTICLES;
    BucketAllocator_Init(&s_bucketAllocator[v26], &s_particleSystemPool[v26], ParticleManager::BucketAllocCallback, ParticleManager::BucketFreeCallback, threadParams);
    _RBX->m_isInitialized = 1;
    v27 = (ParticleSystem **)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)v5, 0x8000ui64);
    _RBX->m_pSystems = v27;
    if ( v27 )
    {
      _RBX->m_isRunning = 1;
      _RBX->m_pFxSystem = NULL;
      memset_0(_RBX->m_fxThreadLocks, 0, sizeof(_RBX->m_fxThreadLocks));
      memset_0(_RBX->m_soundCreateList, 0, sizeof(_RBX->m_soundCreateList));
      _RBX->m_soundCreateListCount = 0;
      memset_0(_RBX->m_soundDestroyList, 0, sizeof(_RBX->m_soundDestroyList));
      _RBX->m_soundDestroyListCount = 0;
      memset_0(_RBX->m_soundPlayList, 0, sizeof(_RBX->m_soundPlayList));
      _RBX->m_soundPlayListCount = 0;
      _RBX->m_standardModeGroupId = Particle_HashString("non_rave_mode", 0xDui64);
      _RBX->m_altModeGroupId = Particle_HashString("rave_mode", 9ui64);
      _RBX->m_localPlayerAltModeParticlesInUse = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_LADDER_AIM|0x80);
      v28 = g_particleSystems[v5];
      v29 = &g_particleSystemsGeneration[4096 * v5];
      for ( i = 0; i < 0x1000; *((_DWORD *)v28 - 2) = i )
      {
        *((_DWORD *)v28++ + 1) = 0;
        v31 = v29->__all32 ^ (v29->__all32 ^ i) & 0xFFF;
        ++v29;
        ++i;
        v29[-1].__all32 = v31 + 4096;
      }
      g_particleSystems[v5][0] = NULL;
      g_particleSystemsGeneration[4096 * v5].__all32 = -1;
      _RBX->m_handleManager.m_localClientNum = v5;
      _RBX->m_handleManager.m_numAllocated = 0;
      _RBX->m_handleManager.m_freelistDequeue = 1;
      _RBX->m_handleManager.m_freelistEnqueue = 4095;
      _RBX->m_handleManager.m_restoring = 0;
      ParticleManager::LockCommandStreamProcess(_RBX);
      memset_0(_RBX->m_commandStreamBuf, 0, sizeof(_RBX->m_commandStreamBuf));
      ParticleManager::ResetCmdStream(_RBX);
      ParticleManager::UnlockCommandStreamProcess(_RBX);
      _RBX->m_instancePoolTable = (InstancePoolData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)v5, 0x70ui64);
      _RBX->m_instancePoolLimits = (unsigned int *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)v5, 0x1Cui64);
      StringTable_GetAsset("fx_instance_pools.csv", (const StringTable **)&tablePtr);
      RowCount = StringTable_GetRowCount(tablePtr);
      v33 = RowCount;
      if ( RowCount != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 423, ASSERT_TYPE_ASSERT, "(rowNum == PARTICLE_INSTANCE_POOL_TYPE_COUNT)", "%s\n\tNumber of instance pools in csv does not match with game.", "rowNum == PARTICLE_INSTANCE_POOL_TYPE_COUNT") )
        __debugbreak();
      v34 = v33;
      if ( (int)v33 > 0 )
      {
        v35 = 0i64;
        do
        {
          ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v7++, 1);
          _RBX->m_instancePoolLimits[v35++] = atoi(ColumnValueForRow);
        }
        while ( v35 < v34 );
      }
      FxMarkSpawnData::SetDefaults(&v37);
      _RBX->m_markSpawnDataPool.m_dataPool[0] = v37;
      _RBX->m_markSpawnDataPool.m_dataPoolAllocTable.array[0] |= 0x80000000;
      _RBX->m_markSpawnDataPool.errorCallback = MarkSpawnDataPoolErrorHandler;
    }
    else
    {
      Com_PrintError(21, "Could not allocate %d Particle Systems. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", 4096i64);
      _RBX->m_isRunning = 0;
    }
  }
}

/*
==============
ParticleManager::InitInstancePoolLimits
==============
*/
void ParticleManager::InitInstancePoolLimits(ParticleManager *this)
{
  int RowCount; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  const char *ColumnValueForRow; 
  StringTable *tablePtr; 

  StringTable_GetAsset("fx_instance_pools.csv", (const StringTable **)&tablePtr);
  RowCount = StringTable_GetRowCount(tablePtr);
  v3 = RowCount;
  if ( RowCount != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 423, ASSERT_TYPE_ASSERT, "(rowNum == PARTICLE_INSTANCE_POOL_TYPE_COUNT)", "%s\n\tNumber of instance pools in csv does not match with game.", "rowNum == PARTICLE_INSTANCE_POOL_TYPE_COUNT") )
    __debugbreak();
  v4 = 0;
  v5 = v3;
  if ( (int)v3 > 0 )
  {
    v6 = 0i64;
    do
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v4++, 1);
      this->m_instancePoolLimits[v6++] = atoi(ColumnValueForRow);
    }
    while ( v6 < v5 );
  }
}

/*
==============
ParticleManager::InitMemoryPool
==============
*/
void ParticleManager::InitMemoryPool(ParticleManager *this)
{
  unsigned __int64 v2; 
  __int64 v3; 
  __int64 m_localClientNum; 
  BucketAllocatorThreadParams threadParams; 

  if ( !ParticleManager::ms_memoryPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3090, ASSERT_TYPE_ASSERT, "(ms_memoryPool != nullptr)", (const char *)&queryFormat, "ms_memoryPool != nullptr") )
    __debugbreak();
  v2 = ParticleManager::ms_memoryPoolSize;
  if ( ParticleManager::ms_memoryPoolSize != 12582912 * (ParticleManager::ms_memoryPoolSize / 0xC00000) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3091, ASSERT_TYPE_ASSERT, "(ms_memoryPoolSize % PARTICLE_SYSTEM_POOL_SIZE == 0)", (const char *)&queryFormat, "ms_memoryPoolSize % PARTICLE_SYSTEM_POOL_SIZE == 0") )
      __debugbreak();
    v2 = ParticleManager::ms_memoryPoolSize;
  }
  v3 = (unsigned int)(12582912 * this->m_localClientNum);
  if ( v3 + 12582912 > v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3094, ASSERT_TYPE_ASSERT, "(memoryOffset + PARTICLE_SYSTEM_POOL_SIZE <= ms_memoryPoolSize)", (const char *)&queryFormat, "memoryOffset + PARTICLE_SYSTEM_POOL_SIZE <= ms_memoryPoolSize") )
    __debugbreak();
  s_particleSystemPool[this->m_localClientNum].pool = &ParticleManager::ms_memoryPool[v3];
  s_particleSystemPool[this->m_localClientNum].poolSize = 12582912;
  s_particleSystemPool[this->m_localClientNum].alignment = 16;
  BlockMemMan_Init(&s_particleSystemPool[this->m_localClientNum]);
  BucketAllocatorThreadParams::BucketAllocatorThreadParams(&threadParams);
  m_localClientNum = this->m_localClientNum;
  threadParams.threadSafe = 1;
  threadParams.criticalSection = CRITSECT_BUCKET_ALLOCATOR_PARTICLES;
  BucketAllocator_Init(&s_bucketAllocator[m_localClientNum], &s_particleSystemPool[m_localClientNum], ParticleManager::BucketAllocCallback, ParticleManager::BucketFreeCallback, threadParams);
}

/*
==============
ParticleManager::InstancePoolPass
==============
*/
void ParticleManager::InstancePoolPass(ParticleManager *this, const FxCamera *pCamera)
{
  int v4; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  int m_numSystemsRunning; 
  __int64 v8; 
  bool v9; 
  ParticleSystem *v10; 
  ParticleSystemFlags m_flags; 
  __int64 v12; 
  __int64 v13; 

  Sys_LockWrite(&this->m_handleManagerLock);
  memset_0(this->m_instancePoolTable, 0, 0x70ui64);
  v4 = 0;
  if ( this->m_soloInstancePoolMap.m_size )
  {
    mp_parent = this->m_soloInstancePoolMap.m_endNodeBase.mp_parent;
    if ( mp_parent )
    {
      do
      {
        ntl::red_black_tree<ParticleEmitterDef const *,ntl::pair<ParticleEmitterDef const *,InstancePoolData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleEmitterDef const *,InstancePoolData>>,128,8>,ntl::return_pair_first<ParticleEmitterDef const *,InstancePoolData>,ntl::less<ParticleEmitterDef const *,ParticleEmitterDef const *>>::erase_tree(&this->m_soloInstancePoolMap, (ntl::red_black_tree_node<ntl::pair<ParticleEmitterDef const *,InstancePoolData> > *)mp_parent->mp_right);
        mp_left = mp_parent->mp_left;
        *(_QWORD *)&mp_parent->m_color = this->m_soloInstancePoolMap.m_freelist.m_head.mp_next;
        this->m_soloInstancePoolMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
        mp_parent = mp_left;
      }
      while ( mp_left );
    }
    this->m_soloInstancePoolMap.m_endNodeBase.mp_parent = NULL;
    this->m_soloInstancePoolMap.m_endNodeBase.mp_left = &this->m_soloInstancePoolMap.m_endNodeBase;
    this->m_soloInstancePoolMap.m_endNodeBase.mp_right = &this->m_soloInstancePoolMap.m_endNodeBase;
    this->m_soloInstancePoolMap.m_size = 0i64;
  }
  m_numSystemsRunning = this->m_numSystemsRunning;
  if ( m_numSystemsRunning > 0 )
  {
    v8 = 0i64;
    v9 = m_numSystemsRunning != 0;
    do
    {
      if ( !v9 )
      {
        LODWORD(v13) = m_numSystemsRunning;
        LODWORD(v12) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v10 = this->m_pSystems[v8];
      if ( !v10->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
        __debugbreak();
      if ( (v10->m_pSystemDef->flags & 0x1000000) != 0 && v10->m_isRunning )
      {
        m_flags = v10->m_flags;
        if ( (m_flags & 0x30) == 0 && (BYTE2(m_flags) & 1) == 0 )
          ParticleSystem::ProcessInstancePools(v10, pCamera, this->m_instancePoolTable, &this->m_soloInstancePoolMap, this->m_instancePoolLimits);
      }
      m_numSystemsRunning = this->m_numSystemsRunning;
      ++v4;
      ++v8;
      v9 = v4 < (unsigned int)m_numSystemsRunning;
    }
    while ( v4 < m_numSystemsRunning );
  }
  ParticleManager::UnlockHandleManager(this);
}

/*
==============
ParticleManager::KillAllSystemsOnDObj
==============
*/
void ParticleManager::KillAllSystemsOnDObj(ParticleManager *this, unsigned int dobjHandle)
{
  unsigned __int16 cmdData; 

  ParticleManager::LockCommandStreamAdd(this);
  cmdData = truncate_cast<unsigned short,unsigned int>(dobjHandle);
  ParticleManager::AddCmd(this, KillAllSystemsOnDObjCmd, &cmdData);
}

/*
==============
ParticleManager::KillAllSystemsOnDObjImmediate
==============
*/
void ParticleManager::KillAllSystemsOnDObjImmediate(ParticleManager *this, unsigned int dobjHandle, const bool lock)
{
  int m_numSystemsRunning; 
  int v4; 
  bool v8; 
  __int64 v9; 
  ParticleSystem *v10; 
  __int64 v11; 
  __int64 v12; 

  m_numSystemsRunning = this->m_numSystemsRunning;
  v4 = 0;
  if ( m_numSystemsRunning > 0 )
  {
    v8 = m_numSystemsRunning != 0;
    v9 = 0i64;
    do
    {
      if ( !v8 )
      {
        LODWORD(v12) = m_numSystemsRunning;
        LODWORD(v11) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v10 = this->m_pSystems[v9];
      if ( (v10->m_flags & 1) != 0 && (*(_DWORD *)&v10->m_bolt.FxBoltBase & 0xFFF) == dobjHandle && (v10->m_flags & 0x30) == 0 )
        ParticleManager::KillSystemInternal(this, v10, lock);
      m_numSystemsRunning = this->m_numSystemsRunning;
      ++v4;
      ++v9;
      v8 = v4 < (unsigned int)m_numSystemsRunning;
    }
    while ( v4 < m_numSystemsRunning );
  }
}

/*
==============
ParticleManager::KillBoltedSystem
==============
*/
void ParticleManager::KillBoltedSystem(ParticleManager *this, const ParticleSystemDef *pSystemDef, unsigned int dobjHandle, unsigned int boneIndex)
{
  const ParticleSystemDef *cmdData; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  char v11; 

  if ( !pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1330, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
    __debugbreak();
  ParticleManager::LockCommandStreamAdd(this);
  cmdData = pSystemDef;
  v9 = truncate_cast<unsigned short,unsigned int>(boneIndex);
  v10 = truncate_cast<unsigned short,unsigned int>(dobjHandle);
  v11 = 0;
  ParticleManager::AddCmd(this, KillOrStopBoltedSystemCmd, &cmdData);
}

/*
==============
ParticleManager::KillLoopedFxEntSystem
==============
*/
void ParticleManager::KillLoopedFxEntSystem(ParticleManager *this, const ParticleSystem *pSystem)
{
  FxSystem *System; 
  const ParticleSystemDef *Def; 
  const ParticleSystemDef *v6; 
  __int64 m_numSystemsRunning; 
  unsigned int v8; 
  __int64 i; 
  ParticleSystem *v10; 
  const ParticleSystemDef *v11; 
  const ParticleSystemDef *v12; 
  const ParticleSystemDef *v13; 
  ParticleSystemFlags m_flags; 
  ParticleSystemHandle SystemHandle; 
  const ParticleSystemDef *v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int LoopedFxEnt; 

  System = FX_GetSystem(this->m_localClientNum);
  FX_ThreadingCheck_Enter(System, 0);
  ParticleManager::ValidateSystem(this, pSystem);
  if ( SLOBYTE(pSystem->m_flags) < 0 )
  {
    Def = ParticleSystem::GetDef((ParticleSystem *)pSystem);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1080, ASSERT_TYPE_ASSERT, "(!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )", Def->name) )
      __debugbreak();
  }
  if ( (pSystem->m_flags & 0x400000) == 0 )
  {
    v6 = ParticleSystem::GetDef((ParticleSystem *)pSystem);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1081, ASSERT_TYPE_ASSERT, "(pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT_LOOPED ))", "%s\n\tVFX ASSERT for effect: %s\n", "pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT_LOOPED )", v6->name) )
      __debugbreak();
  }
  LoopedFxEnt = ParticleSystem::GetLoopedFxEnt((ParticleSystem *)pSystem);
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  v8 = 0;
  if ( (int)m_numSystemsRunning > 0 )
  {
    for ( i = 0i64; i < m_numSystemsRunning; ++i )
    {
      if ( v8 >= this->m_numSystemsRunning )
      {
        LODWORD(v18) = this->m_numSystemsRunning;
        LODWORD(v17) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v10 = this->m_pSystems[i];
      if ( (v10->m_flags & 0x400000) != 0 )
      {
        if ( v10->m_loopedFxEnt == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 202, ASSERT_TYPE_ASSERT, "(m_loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT)", (const char *)&queryFormat, "m_loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT") )
          __debugbreak();
        if ( v10->m_loopedFxEnt == LoopedFxEnt )
        {
          if ( pSystem != v10 && SLOBYTE(v10->m_flags) >= 0 )
          {
            v11 = ParticleSystem::GetDef(v10);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1095, ASSERT_TYPE_ASSERT, "(pSystem == pSystemInList || pSystemInList->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", "%s\n\tVFX ASSERT for effect: %s\n", "pSystem == pSystemInList || pSystemInList->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )", v11->name) )
              __debugbreak();
          }
          if ( (v10->m_flags & 0x400000) == 0 )
          {
            v12 = ParticleSystem::GetDef(v10);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1096, ASSERT_TYPE_ASSERT, "(pSystemInList->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT_LOOPED ))", "%s\n\tVFX ASSERT for effect: %s\n", "pSystemInList->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT_LOOPED )", v12->name) )
              __debugbreak();
          }
          v10->m_flags &= ~0x80ui64;
          v10->m_fxEnt = 2047;
          ParticleManager::ValidateSystem(this, v10);
          if ( SLOBYTE(v10->m_flags) < 0 )
          {
            v13 = ParticleSystem::GetDef(v10);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1194, ASSERT_TYPE_ASSERT, "(!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )", v13->name) )
              __debugbreak();
          }
          m_flags = v10->m_flags;
          if ( (m_flags & 0x20) == 0 )
          {
            v10->m_flags = m_flags | 0x20;
            Sys_LockWrite(&this->m_handleManagerLock);
            SystemHandle = ParticleSystem::GetSystemHandle(v10);
            ParticleSystemHandleManager::incGeneration(&this->m_handleManager, SystemHandle);
            ParticleManager::UnlockHandleManager(this);
          }
        }
      }
      ++v8;
    }
  }
  if ( (pSystem->m_flags & 0x20) == 0 )
  {
    v16 = ParticleSystem::GetDef((ParticleSystem *)pSystem);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1103, ASSERT_TYPE_ASSERT, "(pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_REMOVE_PENDING ))", "%s\n\tVFX ASSERT for effect: %s\n", "pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_REMOVE_PENDING )", v16->name) )
      __debugbreak();
  }
  FX_ThreadingCheck_Leave(System, 0);
}

/*
==============
ParticleManager::KillSound
==============
*/
void ParticleManager::KillSound(ParticleManager *this, const ParticleState *pParticleState, unsigned int particleHandle, ParticleSystemHandle systemHandle)
{
  unsigned __int32 v8; 
  ParticleManager::Particle_SoundData *v9; 
  __int64 v10; 

  if ( particleHandle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1778, ASSERT_TYPE_ASSERT, "(particleHandle != PARTICLE_INVALID_HANDLE)", (const char *)&queryFormat, "particleHandle != PARTICLE_INVALID_HANDLE") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1779, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !pParticleState->m_pEmitterOwner )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
      __debugbreak();
    if ( !pParticleState->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1780, ASSERT_TYPE_ASSERT, "(pParticleState->GetEmitterOwner())", (const char *)&queryFormat, "pParticleState->GetEmitterOwner()") )
      __debugbreak();
  }
  if ( (((_BYTE)this + 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_soundDestroyListCount) )
    __debugbreak();
  v8 = _InterlockedExchangeAdd(&this->m_soundDestroyListCount, 1u);
  if ( v8 >= 0x20 )
  {
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1785, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_MAX_NUM_SOUNDS )", "index doesn't index PARTICLE_MAX_NUM_SOUNDS\n\t%i not in [0, %i)", v10, 32) )
      __debugbreak();
  }
  v9 = &this->m_soundDestroyList[v8];
  v9->particleHandle = particleHandle;
  v9->pParticleState = pParticleState;
  if ( !pParticleState->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  v9->pParticleEmitter = pParticleState->m_pEmitterOwner;
  v9->systemHandle = systemHandle;
}

/*
==============
ParticleManager::KillSystem
==============
*/
void ParticleManager::KillSystem(ParticleManager *this, ParticleSystem *pSystem)
{
  ParticleManager::KillSystemInternal(this, pSystem, 1);
}

/*
==============
ParticleManager::KillSystem
==============
*/
void ParticleManager::KillSystem(ParticleManager *this, ParticleSystemHandle systemHandle)
{
  __int64 v2; 
  ParticleSystem *v3; 
  unsigned __int32 v5; 
  __int64 v6; 

  v2 = (__int64)(int)this->m_localClientNum << 12;
  v3 = NULL;
  v5 = 0;
  if ( g_particleSystemsGeneration[v2 + (systemHandle & 0xFFF)].__all32 == systemHandle )
    v5 = systemHandle & 0xFFF;
  v6 = v2 + v5;
  if ( g_particleSystems[0][v6] >= (ParticleSystem *)0x1000 )
    v3 = g_particleSystems[0][v6];
  if ( v3 )
    ParticleManager::KillSystemInternal(this, v3, 1);
  else
    Com_PrintWarning(21, "Trying to kill ParticleSystem using invalid handle\n");
}

/*
==============
ParticleManager::KillSystemDefNewerThan
==============
*/
void ParticleManager::KillSystemDefNewerThan(ParticleManager *this, const ParticleSystemDef *pSystemDef, int time)
{
  FxSystem *System; 
  __int64 m_numSystemsRunning; 
  unsigned int v7; 
  __int64 i; 
  ParticleSystem *v9; 
  const ParticleSystemDef *Def; 
  ParticleSystemFlags m_flags; 
  ParticleSystemHandle SystemHandle; 
  __int64 v13; 
  __int64 v14; 

  if ( !pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1395, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1396, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  System = FX_GetSystem(this->m_localClientNum);
  FX_ThreadingCheck_Enter(System, 0);
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  v7 = 0;
  if ( (int)m_numSystemsRunning > 0 )
  {
    for ( i = 0i64; i < m_numSystemsRunning; ++i )
    {
      if ( v7 >= this->m_numSystemsRunning )
      {
        LODWORD(v14) = this->m_numSystemsRunning;
        LODWORD(v13) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v9 = this->m_pSystems[i];
      if ( !v9->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
        __debugbreak();
      if ( v9->m_pSystemDef == pSystemDef && time <= v9->m_spawnTime )
      {
        ParticleManager::ValidateSystem(this, v9);
        if ( SLOBYTE(v9->m_flags) < 0 )
        {
          Def = ParticleSystem::GetDef(v9);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1194, ASSERT_TYPE_ASSERT, "(!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )", Def->name) )
            __debugbreak();
        }
        m_flags = v9->m_flags;
        if ( (m_flags & 0x20) == 0 )
        {
          v9->m_flags = m_flags | 0x20;
          Sys_LockWrite(&this->m_handleManagerLock);
          SystemHandle = ParticleSystem::GetSystemHandle(v9);
          ParticleSystemHandleManager::incGeneration(&this->m_handleManager, SystemHandle);
          ParticleManager::UnlockHandleManager(this);
        }
      }
      ++v7;
    }
  }
  FX_ThreadingCheck_Leave(System, 0);
}

/*
==============
ParticleManager::KillSystemInternal
==============
*/
void ParticleManager::KillSystemInternal(ParticleManager *this, ParticleSystem *pSystem, bool lock)
{
  const ParticleSystemDef *Def; 
  ParticleSystemFlags m_flags; 
  ParticleSystemHandle SystemHandle; 

  ParticleManager::ValidateSystem(this, pSystem);
  if ( SLOBYTE(pSystem->m_flags) < 0 )
  {
    Def = ParticleSystem::GetDef(pSystem);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1194, ASSERT_TYPE_ASSERT, "(!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )", Def->name) )
      __debugbreak();
  }
  m_flags = pSystem->m_flags;
  if ( (m_flags & 0x20) == 0 )
  {
    pSystem->m_flags = m_flags | 0x20;
    if ( lock )
      Sys_LockWrite(&this->m_handleManagerLock);
    SystemHandle = ParticleSystem::GetSystemHandle(pSystem);
    ParticleSystemHandleManager::incGeneration(&this->m_handleManager, SystemHandle);
    if ( lock )
      ParticleManager::UnlockHandleManager(this);
  }
}

/*
==============
MarkSpawnDataPoolErrorHandler
==============
*/
void MarkSpawnDataPoolErrorHandler(void)
{
  R_WarnOncePerFrame(R_WARN_FX_MARK_SPAWN_DATA_POOL_LIMIT);
}

/*
==============
ParticleManager::OnKillcamEntityTransition
==============
*/
void ParticleManager::OnKillcamEntityTransition(ParticleManager *this, LocalClientNum_t localClientNum)
{
  FxSystem *System; 
  __int64 m_numSystemsRunning; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  ParticleSystem *v9; 
  const ParticleSystemDef *Def; 
  ParticleSystemFlags m_flags; 
  ParticleSystemHandle SystemHandle; 
  __int64 v13; 
  __int64 v14; 

  System = FX_GetSystem(this->m_localClientNum);
  FX_ThreadingCheck_Enter(System, 0);
  this->m_localPlayerHasKillcamEntity = 1;
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  v6 = 0;
  v7 = m_numSystemsRunning;
  if ( (int)m_numSystemsRunning > 0 )
  {
    v8 = 0i64;
    do
    {
      if ( v6 >= this->m_numSystemsRunning )
      {
        LODWORD(v14) = this->m_numSystemsRunning;
        LODWORD(v13) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v9 = this->m_pSystems[v8];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1456, ASSERT_TYPE_ASSERT, "(pSystem)", (const char *)&queryFormat, "pSystem") )
        __debugbreak();
      if ( v9->m_localClientNum == localClientNum && (ParticleSystem::GetDef(v9)->flags & 0x20000) != 0 )
      {
        if ( SLOBYTE(v9->m_flags) < 0 )
          ParticleManager::UnlinkFxEntInternal(this, localClientNum, v9);
        ParticleManager::ValidateSystem(this, v9);
        if ( SLOBYTE(v9->m_flags) < 0 )
        {
          Def = ParticleSystem::GetDef(v9);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1194, ASSERT_TYPE_ASSERT, "(!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )", Def->name) )
            __debugbreak();
        }
        m_flags = v9->m_flags;
        if ( (m_flags & 0x20) == 0 )
        {
          v9->m_flags = m_flags | 0x20;
          Sys_LockWrite(&this->m_handleManagerLock);
          SystemHandle = ParticleSystem::GetSystemHandle(v9);
          ParticleSystemHandleManager::incGeneration(&this->m_handleManager, SystemHandle);
          ParticleManager::UnlockHandleManager(this);
        }
      }
      ++v6;
      ++v8;
    }
    while ( v8 < v7 );
  }
  FX_ThreadingCheck_Leave(System, 0);
}

/*
==============
ParticleManager::OnKillcamTransition
==============
*/
void ParticleManager::OnKillcamTransition(ParticleManager *this, LocalClientNum_t localClientNum)
{
  FxSystem *System; 
  __int64 m_numSystemsRunning; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  ParticleSystem *v9; 
  const ParticleSystemDef *Def; 
  ParticleSystemFlags m_flags; 
  ParticleSystemHandle SystemHandle; 
  __int64 v13; 
  __int64 v14; 

  System = FX_GetSystem(this->m_localClientNum);
  FX_ThreadingCheck_Enter(System, 0);
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  v6 = 0;
  v7 = m_numSystemsRunning;
  if ( (int)m_numSystemsRunning > 0 )
  {
    v8 = 0i64;
    do
    {
      if ( v6 >= this->m_numSystemsRunning )
      {
        LODWORD(v14) = this->m_numSystemsRunning;
        LODWORD(v13) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v9 = this->m_pSystems[v8];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1431, ASSERT_TYPE_ASSERT, "(pSystem)", (const char *)&queryFormat, "pSystem") )
        __debugbreak();
      if ( v9->m_localClientNum == localClientNum && (ParticleSystem::GetDef(v9)->flags & 0x800) != 0 )
      {
        if ( SLOBYTE(v9->m_flags) < 0 )
          ParticleManager::UnlinkFxEntInternal(this, localClientNum, v9);
        ParticleManager::ValidateSystem(this, v9);
        if ( SLOBYTE(v9->m_flags) < 0 )
        {
          Def = ParticleSystem::GetDef(v9);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1194, ASSERT_TYPE_ASSERT, "(!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )", Def->name) )
            __debugbreak();
        }
        m_flags = v9->m_flags;
        if ( (m_flags & 0x20) == 0 )
        {
          v9->m_flags = m_flags | 0x20;
          Sys_LockWrite(&this->m_handleManagerLock);
          SystemHandle = ParticleSystem::GetSystemHandle(v9);
          ParticleSystemHandleManager::incGeneration(&this->m_handleManager, SystemHandle);
          ParticleManager::UnlockHandleManager(this);
        }
      }
      ++v6;
      ++v8;
    }
    while ( v8 < v7 );
  }
  FX_ThreadingCheck_Leave(System, 0);
}

/*
==============
ParticleManager::ParticleSystemAlloc
==============
*/
void *ParticleManager::ParticleSystemAlloc(LocalClientNum_t localClientNum, unsigned __int64 allocSize)
{
  __int64 v2; 
  unsigned __int64 v4; 
  void *v5; 

  v2 = localClientNum;
  if ( !allocSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3132, ASSERT_TYPE_ASSERT, "(allocSize > 0)", (const char *)&queryFormat, "allocSize > 0") )
    __debugbreak();
  v4 = (allocSize + 15) & 0xFFFFFFFFFFFFFFF0ui64;
  v5 = BucketAllocator_Alloc(v4, &s_bucketAllocator[v2]);
  if ( ((unsigned __int8)v5 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3145, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pData)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pData)) % (PARTICLE_ALIGNMENT) == 0") )
    __debugbreak();
  if ( !v5 )
    Com_PrintError(21, "Could not allocate %zu bytes. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", v4);
  return v5;
}

/*
==============
ParticleManager::ParticleSystemAllocAndClear
==============
*/
void *ParticleManager::ParticleSystemAllocAndClear(LocalClientNum_t localClientNum, unsigned __int64 allocSize)
{
  __int64 v2; 
  unsigned __int64 v3; 
  void *v4; 

  v2 = localClientNum;
  v3 = (allocSize + 15) & 0xFFFFFFFFFFFFFFF0ui64;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3132, ASSERT_TYPE_ASSERT, "(allocSize > 0)", (const char *)&queryFormat, "allocSize > 0") )
    __debugbreak();
  v4 = BucketAllocator_Alloc(v3, &s_bucketAllocator[v2]);
  if ( ((unsigned __int8)v4 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3145, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pData)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pData)) % (PARTICLE_ALIGNMENT) == 0") )
    __debugbreak();
  if ( v4 )
  {
    memset_0(v4, 0, v3);
    return v4;
  }
  else
  {
    Com_PrintError(21, "Could not allocate %zu bytes. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", v3);
    return 0i64;
  }
}

/*
==============
ParticleManager::ParticleSystemFree
==============
*/
void ParticleManager::ParticleSystemFree(LocalClientNum_t localClientNum, void *memptr)
{
  __int64 v2; 
  __int64 v4; 

  v2 = localClientNum;
  if ( !memptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3176, ASSERT_TYPE_ASSERT, "(memptr)", (const char *)&queryFormat, "memptr") )
    __debugbreak();
  v4 = v2;
  if ( !BlockMemMan_PointerInRange(memptr, (BlockMemoryPool *)&s_bucketAllocator[v4].customData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3179, ASSERT_TYPE_ASSERT, "(ParticleSystemPointerInRange( localClientNum, memptr ))", (const char *)&queryFormat, "ParticleSystemPointerInRange( localClientNum, memptr )") )
    __debugbreak();
  BucketAllocator_Free(memptr, &s_bucketAllocator[v4]);
}

/*
==============
ParticleManager::ParticleSystemPointerInRange
==============
*/
bool ParticleManager::ParticleSystemPointerInRange(LocalClientNum_t localClientNum, void *memptr)
{
  return BlockMemMan_PointerInRange(memptr, (BlockMemoryPool *)&s_bucketAllocator[localClientNum].customData);
}

/*
==============
ParticleSystem_RestoreCmd
==============
*/

void __fastcall ParticleSystem_RestoreCmd(const void *const data, const float4 *a2, double _XMM2_8)
{
  int v7; 
  __int64 v8; 
  const FxCamera *pCamera; 
  bool v16; 
  ParticleSystemHandle restoredParticleSystem; 
  int v20; 
  __int64 v22; 
  const orientation_t *boltOffset; 
  ParticleSystemHandle v24; 
  __int64 v25; 
  ParticleSystem *v26; 
  float4 emitterPos; 
  int v31[3]; 
  tmat33_t<vec3_t> axis; 
  vector3 emitterOrientationMat; 
  char v35; 

  __asm { vmovaps [rsp+168h+var_38], xmm6 }
  _RDI = (char *)data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3266, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rdi+14h] }
  v7 = *((_DWORD *)_RDI + 8);
  v8 = *((_QWORD *)_RDI + 14);
  pCamera = (const FxCamera *)*((_QWORD *)_RDI + 15);
  __asm { vmovups xmm6, xmmword ptr [rdi+4] }
  emitterPos.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+168h+emitterPos.v]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdi+18h], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+1Ch], 20h ; ' '
    vmovups xmmword ptr [rsp+168h+emitterPos.v], xmm3
    vmovups xmmword ptr [rsp+168h+emitterPos.v], xmm3
  }
  v16 = (*(_QWORD *)&v7 & 0x200000i64) != 0;
  if ( v16 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+54h]
      vmovss  xmm2, dword ptr [rdi+58h]
      vmovss  [rsp+168h+var_A8], xmm1
      vmovss  xmm1, dword ptr [rdi+5Ch]
      vmovss  [rsp+168h+var_A0], xmm1
      vmovss  [rsp+168h+var_A4], xmm2
    }
    QuatToAxis((const vec4_t *)(_RDI + 68), &axis);
  }
  restoredParticleSystem = *(_DWORD *)_RDI;
  __asm { vmovups xmm0, xmm6 }
  Float4UnitQuatToAxis((vector3 *)data, a2);
  v20 = *((_DWORD *)_RDI + 11) - *((_DWORD *)_RDI + 10);
  __asm
  {
    vmovups xmmword ptr [rsp+168h+var_E8+10h], xmm1
    vmovups xmmword ptr [rsp+168h+var_E8], xmm0
    vmovups ymm3, [rsp+168h+var_E8]
    vmovups ymmword ptr [rsp+168h+emitterOrientationMat.x.v], ymm3
    vmovups xmmword ptr [rsp+168h+emitterOrientationMat.z.v], xmm2
  }
  if ( v20 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3294, ASSERT_TYPE_ASSERT, "(timeElapsed >= 0)", (const char *)&queryFormat, "timeElapsed >= 0") )
    __debugbreak();
  v22 = *(int *)(v8 + 301132);
  boltOffset = (const orientation_t *)v31;
  if ( v20 > 60000 )
    v20 = 60000;
  if ( !v16 )
    boltOffset = NULL;
  if ( v20 < 0 )
    v20 = 0;
  v24 = ParticleManager::AddSystem((ParticleManager *)v8, (LocalClientNum_t)v22, *((const ParticleSystemDef **)_RDI + 13), &emitterPos, &emitterOrientationMat, -v20, *((ParticleSystemFlags *)_RDI + 4), *((_DWORD *)_RDI + 13), *((_DWORD *)_RDI + 14), boltOffset, pCamera, NULL, *((scr_string_t *)_RDI + 15), *((ParticleSystemHandle *)_RDI + 25), restoredParticleSystem);
  v25 = (v24 & 0xFFF) + (v22 << 12);
  if ( g_particleSystemsGeneration[v25].__all32 != v24 && v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 933, ASSERT_TYPE_ASSERT, "(g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  v26 = g_particleSystems[0][v25];
  if ( v26 )
    ParticleSystem::SetDataFromArchive(v26, (const ParticleSystemSave *)_RDI);
  else
    Com_PrintWarning(21, "WARNING: Could not allocate effect %s on save game restore\n", **((const char ***)_RDI + 13));
  _R11 = &v35;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
Particle_GetMagmaHeightfield
==============
*/
GfxImage *Particle_GetMagmaHeightfield()
{
  return s_vfxMagmaHeightfield;
}

/*
==============
Particle_LoadMagmaHeightfield
==============
*/
void Particle_LoadMagmaHeightfield(const GfxWorld *world, bool isFrontendScene)
{
  if ( s_vfxMagmaHeightfield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3328, ASSERT_TYPE_ASSERT, "(!s_vfxMagmaHeightfield)", (const char *)&queryFormat, "!s_vfxMagmaHeightfield") )
    __debugbreak();
  s_vfxMagmaHeightfield = NULL;
  if ( !isFrontendScene )
  {
    if ( DB_XAssetExists(ASSET_TYPE_IMAGE, "vfx_magma_heightfield") )
      s_vfxMagmaHeightfield = Image_Register("vfx_magma_heightfield", IMAGE_TRACK_FX);
  }
}

/*
==============
Particle_ReleaseMagmaHeightfield
==============
*/
void Particle_ReleaseMagmaHeightfield(const GfxWorld *world)
{
  s_vfxMagmaHeightfield = NULL;
}

/*
==============
Particle_SortSystems
==============
*/
bool Particle_SortSystems(const ParticleSystem *pSystem1, const ParticleSystem *pSystem2)
{
  _RBX = pSystem2;
  _RDI = pSystem1;
  if ( !pSystem1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1507, ASSERT_TYPE_ASSERT, "(pSystem1)", (const char *)&queryFormat, "pSystem1") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1508, ASSERT_TYPE_ASSERT, "(pSystem2)", (const char *)&queryFormat, "pSystem2") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1C4h]
    vcomiss xmm0, dword ptr [rdi+1C4h]
  }
  return 0;
}

/*
==============
ParticleManager::PreUpdate
==============
*/
void ParticleManager::PreUpdate(ParticleManager *this, FxSystem *pFxSystem)
{
  FxSystem *System; 
  __int64 m_numSystemsRunning; 
  FxCamera *p_camera; 
  bool v7; 
  __int64 v8; 
  bool v9; 
  int integer; 
  bool v11; 
  bool IsThermalVisionOn; 
  int v13; 
  bool v14; 
  unsigned __int8 ActiveGameMode; 
  unsigned int v16; 
  __int64 v17; 
  ParticleSystem *v18; 
  unsigned int v19; 
  __int64 i; 
  __int64 v21; 
  __int64 v22; 
  FxSystem *v23; 

  if ( !pFxSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2461, ASSERT_TYPE_ASSERT, "(pFxSystem)", (const char *)&queryFormat, "pFxSystem") )
    __debugbreak();
  System = FX_GetSystem(this->m_localClientNum);
  v23 = System;
  FX_ThreadingCheck_Enter(System, 0);
  this->m_pFxSystem = pFxSystem;
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  this->m_numSystemsUpdate = m_numSystemsRunning;
  this->m_updateIndexSetLastUpdateTime = -1;
  this->m_updateIndexKillSystem = -1;
  this->m_updateIndexUpdate = -1;
  this->m_updateIndexBolting = -1;
  if ( !this->m_isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2477, ASSERT_TYPE_ASSERT, "(m_isInitialized)", (const char *)&queryFormat, "m_isInitialized") )
    __debugbreak();
  if ( this->m_localClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2478, ASSERT_TYPE_ASSERT, "(m_localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "m_localClientNum != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  CG_LocalEntity_ResetWorkIndex((const LocalClientNum_t)this->m_localClientNum);
  this->m_localPlayerHasKillcamEntity = CG_View_IsKillCamEntityView((const LocalClientNum_t)this->m_localClientNum);
  if ( !this->m_pFxSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 550, ASSERT_TYPE_ASSERT, "(GetFxSystem())", (const char *)&queryFormat, "GetFxSystem()") )
    __debugbreak();
  p_camera = &this->m_pFxSystem->camera;
  if ( this->m_pFxSystem == (FxSystem *)-96i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2493, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  ParticleManager::UpdateCachedCameraTransform(this, p_camera);
  if ( this->m_standardModeGroupId == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2653, ASSERT_TYPE_ASSERT, "(m_standardModeGroupId != ParticleGroupID::NONE)", (const char *)&queryFormat, "m_standardModeGroupId != ParticleGroupID::NONE") )
    __debugbreak();
  if ( this->m_altModeGroupId == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2654, ASSERT_TYPE_ASSERT, "(m_altModeGroupId != ParticleGroupID::NONE)", (const char *)&queryFormat, "m_altModeGroupId != ParticleGroupID::NONE") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "ParticleManager::UpdateAltModeParticles");
  v7 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_LADDER_AIM|0x80);
  this->m_localPlayerAltModeParticlesInUse = v7;
  v8 = m_numSystemsRunning;
  if ( v7 )
  {
    Sys_ProfEndNamedEvent();
  }
  else
  {
    if ( this->m_localPlayerAltModeParticlesState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2660, ASSERT_TYPE_ASSERT, "(m_localPlayerAltModeParticlesState == false)", "%s\n\tm_localPlayerAltModeParticlesInUse is not expected to become 'false' during the lifetime of a ParticleManager object.", "m_localPlayerAltModeParticlesState == false") )
      __debugbreak();
    this->m_localPlayerAltModeParticlesState = 0;
    Sys_ProfEndNamedEvent();
  }
  v9 = CG_LookingThroughNightVision((const LocalClientNum_t)this->m_localClientNum);
  integer = particle_nightvision_override->current.integer;
  if ( integer == 1 )
  {
    v11 = 1;
  }
  else
  {
    v11 = v9;
    if ( integer == 2 )
      v11 = 0;
  }
  IsThermalVisionOn = CG_View_IsThermalVisionOn((const LocalClientNum_t)this->m_localClientNum);
  v13 = particle_thermal_override->current.integer;
  if ( v13 == 1 )
  {
    v14 = 1;
  }
  else
  {
    v14 = IsThermalVisionOn;
    if ( v13 == 2 )
      v14 = 0;
  }
  if ( v14 != this->m_localPlayerThermalState || v11 != this->m_localPlayerNVGState )
  {
    this->m_localPlayerThermalState = v14;
    this->m_localPlayerNVGState = v11;
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    v16 = 0;
    if ( m_numSystemsRunning <= 0 )
    {
      System = v23;
    }
    else
    {
      v17 = 0i64;
      do
      {
        if ( v16 >= this->m_numSystemsRunning )
        {
          LODWORD(v22) = this->m_numSystemsRunning;
          LODWORD(v21) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        if ( !this->m_pSystems[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        v18 = this->m_pSystems[v17];
        if ( (ParticleSystem::GetDef(v18)->flags & 0x800000) != 0 )
          ParticleSystem::ThermalOrNVGStateChanged(v18, v14, v11, (GameModeType)ActiveGameMode, this->m_isHighPlayerCount);
        ++v16;
        ++v17;
      }
      while ( v17 < v8 );
      System = v23;
    }
  }
  if ( particle_profile->current.integer > 0 )
  {
    v19 = 0;
    if ( v8 > 0 )
    {
      for ( i = 0i64; i < v8; ++i )
      {
        if ( v19 >= this->m_numSystemsRunning )
        {
          LODWORD(v22) = this->m_numSystemsRunning;
          LODWORD(v21) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        if ( !this->m_pSystems[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        ParticleSystem::ResetProfilerData(this->m_pSystems[i]);
        ++v19;
      }
      System = v23;
    }
  }
  FX_ThreadingCheck_Leave(System, 0);
}

/*
==============
ParticleManager::ProcessCommandStream
==============
*/
void ParticleManager::ProcessCommandStream(ParticleManager *this)
{
  volatile int *p_m_commandStreamOffset; 
  int v3; 
  unsigned __int8 *m_commandStreamBuf; 
  int v5; 
  __int64 v6; 
  unsigned __int8 v7; 
  size_t v8; 
  int m_numSystemsRunning; 
  int v10; 
  int v11; 
  __int64 v12; 
  bool v13; 
  ParticleSystem *v14; 
  const ParticleSystemDef *v15; 
  ParticleSystemFlags v16; 
  ParticleSystemHandle v17; 
  ParticleSystem *BoltedSystemInternal; 
  ParticleSystem *v19; 
  const ParticleSystemDef *Def; 
  ParticleSystemFlags m_flags; 
  ParticleSystemHandle SystemHandle; 
  __int64 v23; 
  __int64 v24; 
  unsigned __int16 v25[2]; 
  int v26; 
  int v27; 
  ParticleSystemDef *pSystemDef; 
  unsigned __int16 v29; 
  unsigned __int16 v30; 
  char v31; 

  ParticleManager::LockCommandStreamProcess(this);
  p_m_commandStreamOffset = &this->m_commandStreamOffset;
  if ( (((_BYTE)this + 0x80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &this->m_commandStreamOffset) )
    __debugbreak();
  v3 = 1024;
  m_commandStreamBuf = this->m_commandStreamBuf;
  if ( *(int *)p_m_commandStreamOffset < 1024 )
    v3 = *p_m_commandStreamOffset;
  v5 = 0;
  v27 = v3;
  while ( v5 < v3 )
  {
    v6 = v5;
    v7 = m_commandStreamBuf[v5];
    if ( v7 == 3 )
      break;
    if ( (unsigned __int8)(v7 - 1) > 2u )
    {
      LODWORD(v23) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1673, ASSERT_TYPE_ASSERT, "( ( cmdType > ParticleSystemCommandType::InvalidCmd && cmdType < ParticleSystemCommandType::CmdCount ) )", "( cmdType ) = %i", v23) )
        __debugbreak();
    }
    v8 = (unsigned int)S_PARTICLE_SYSTEM_COMMAND_TYPE_SIZE[v7];
    v5 += v8 + 1;
    v26 = v5;
    if ( v7 == 1 )
    {
      memcpy_0(&pSystemDef, &m_commandStreamBuf[v6 + 1], v8);
      BoltedSystemInternal = ParticleManager::FindBoltedSystemInternal(this, this->m_numSystemsRunning, pSystemDef, v30, v29);
      v19 = BoltedSystemInternal;
      if ( v31 )
      {
        if ( BoltedSystemInternal && (BoltedSystemInternal->m_flags & 0x70) == 0 )
        {
          ParticleManager::ValidateSystem(this, BoltedSystemInternal);
          v19->m_flags |= 0x80000ui64;
        }
      }
      else if ( BoltedSystemInternal && (BoltedSystemInternal->m_flags & 0x30) == 0 )
      {
        ParticleManager::ValidateSystem(this, BoltedSystemInternal);
        if ( SLOBYTE(v19->m_flags) < 0 )
        {
          Def = ParticleSystem::GetDef(v19);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1194, ASSERT_TYPE_ASSERT, "(!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )", Def->name) )
            __debugbreak();
        }
        m_flags = v19->m_flags;
        if ( (m_flags & 0x20) == 0 )
        {
          v19->m_flags = m_flags | 0x20;
          SystemHandle = ParticleSystem::GetSystemHandle(v19);
          ParticleSystemHandleManager::incGeneration(&this->m_handleManager, SystemHandle);
        }
      }
    }
    else
    {
      if ( v7 != 2 )
      {
        LODWORD(v23) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1711, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid ParticleSystemCommand: %u", v23) )
          __debugbreak();
        break;
      }
      memcpy_0(v25, &m_commandStreamBuf[v6 + 1], v8);
      m_numSystemsRunning = this->m_numSystemsRunning;
      v10 = 0;
      v11 = v25[0];
      if ( m_numSystemsRunning > 0 )
      {
        v12 = 0i64;
        v13 = m_numSystemsRunning != 0;
        do
        {
          if ( !v13 )
          {
            LODWORD(v24) = m_numSystemsRunning;
            LODWORD(v23) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
            __debugbreak();
          if ( !this->m_pSystems[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
            __debugbreak();
          v14 = this->m_pSystems[v12];
          if ( (v14->m_flags & 1) != 0 && (*(_DWORD *)&v14->m_bolt.FxBoltBase & 0xFFF) == v11 && (v14->m_flags & 0x30) == 0 )
          {
            ParticleManager::ValidateSystem(this, this->m_pSystems[v12]);
            if ( SLOBYTE(v14->m_flags) < 0 )
            {
              v15 = ParticleSystem::GetDef(v14);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1194, ASSERT_TYPE_ASSERT, "(!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )", v15->name) )
                __debugbreak();
            }
            v16 = v14->m_flags;
            if ( (v16 & 0x20) == 0 )
            {
              v14->m_flags = v16 | 0x20;
              v17 = ParticleSystem::GetSystemHandle(v14);
              ParticleSystemHandleManager::incGeneration(&this->m_handleManager, v17);
            }
          }
          m_numSystemsRunning = this->m_numSystemsRunning;
          ++v10;
          ++v12;
          v13 = v10 < (unsigned int)m_numSystemsRunning;
        }
        while ( v10 < m_numSystemsRunning );
        v5 = v26;
        m_commandStreamBuf = this->m_commandStreamBuf;
        v3 = v27;
      }
    }
  }
  ParticleManager::ResetCmdStream(this);
  ParticleManager::UnlockCommandStreamProcess(this);
}

/*
==============
ParticleManager::ProcessDeferredChildRemovalRequests
==============
*/
void ParticleManager::ProcessDeferredChildRemovalRequests(ParticleManager *this)
{
  volatile int v2; 
  __int64 v3; 
  _DWORD *v4; 
  unsigned int v5; 
  __int64 v6; 
  ParticleSystem *v7; 
  __int64 v8; 
  const ParticleSystemDef *Def; 
  ParticleSystemFlags m_flags; 
  ParticleSystemHandle SystemHandle; 

  if ( this->m_numSystemsRunning <= 0 )
  {
    this->m_deferredChildRemovalCount = 0;
  }
  else
  {
    v2 = 0;
    v3 = (__int64)(int)this->m_localClientNum << 15;
    if ( this->m_deferredChildRemovalCount <= 0 )
    {
      this->m_deferredChildRemovalCount = 0;
    }
    else
    {
      v4 = (unsigned int *)((char *)&s_deferredChildRemoval[0][0].flags + v3);
      do
      {
        v5 = 0;
        v6 = (__int64)(int)this->m_localClientNum << 12;
        if ( g_particleSystemsGeneration[v6 + (*(v4 - 1) & 0xFFF)].__all32 == *(v4 - 1) )
          v5 = *(v4 - 1) & 0xFFF;
        v7 = NULL;
        v8 = v6 + v5;
        if ( g_particleSystems[0][v8] >= (ParticleSystem *)0x1000 )
          v7 = g_particleSystems[0][v8];
        if ( v7 )
        {
          if ( (*v4 & 1) != 0 )
          {
            if ( (v7->m_flags & 0x30) == 0 )
            {
              ParticleManager::ValidateSystem(this, v7);
              if ( SLOBYTE(v7->m_flags) < 0 )
              {
                Def = ParticleSystem::GetDef(v7);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1194, ASSERT_TYPE_ASSERT, "(!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )", Def->name) )
                  __debugbreak();
              }
              m_flags = v7->m_flags;
              if ( (m_flags & 0x20) == 0 )
              {
                v7->m_flags = m_flags | 0x20;
                SystemHandle = ParticleSystem::GetSystemHandle(v7);
                ParticleSystemHandleManager::incGeneration(&this->m_handleManager, SystemHandle);
              }
            }
          }
          else if ( (*v4 & 2) != 0 && (v7->m_flags & 0x70) == 0 )
          {
            ParticleManager::ValidateSystem(this, v7);
            v7->m_flags |= 0x80000ui64;
          }
          if ( (*(_BYTE *)v4 & 4) != 0 )
            v7->m_flags &= 0xFFFFFFFFBBFFEFFFui64;
        }
        ++v2;
        v4 += 2;
      }
      while ( v2 < this->m_deferredChildRemovalCount );
      this->m_deferredChildRemovalCount = 0;
    }
  }
}

/*
==============
ParticleManager::ProcessDeferredRequestsAndSort
==============
*/
void ParticleManager::ProcessDeferredRequestsAndSort(ParticleManager *this, LocalClientNum_t localClientNum)
{
  FxSystem *System; 
  volatile signed __int32 *p_threadingCheckUpdate4Pass; 
  int v6; 
  int m_numSystemsRunning; 
  __int64 v8; 
  bool v9; 
  ParticleSystem *v10; 
  const dvar_t *v11; 
  FxSystem *v12; 
  volatile signed __int32 *v13; 
  __int64 v14; 
  __int64 v15; 
  FxSystem *fxSystem; 

  fxSystem = FX_GetSystem(localClientNum);
  FX_ThreadingCheck_Enter(fxSystem, 0);
  System = FX_GetSystem(localClientNum);
  p_threadingCheckUpdate4Pass = &System->threadingCheckUpdate4Pass;
  if ( (((_BYTE)System + 48) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &System->threadingCheckUpdate4Pass) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_threadingCheckUpdate4Pass, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1517, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &FX_GetSystem( localClientNum )->threadingCheckUpdate4Pass, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &FX_GetSystem( localClientNum )->threadingCheckUpdate4Pass, 1, 0 ) == 0") )
    __debugbreak();
  Sys_LockWrite(&this->m_handleManagerLock);
  ParticleManager::ProcessCommandStream(this);
  ParticleManager::ProcessRemoveAndStopRequests(this);
  ParticleManager::ProcessDeferredChildRemovalRequests(this);
  ParticleManager::ProcessRemoveAndStopRequests(this);
  v6 = 0;
  m_numSystemsRunning = this->m_numSystemsRunning;
  if ( m_numSystemsRunning > 0 )
  {
    v8 = 0i64;
    v9 = m_numSystemsRunning != 0;
    do
    {
      if ( !v9 )
      {
        LODWORD(v15) = m_numSystemsRunning;
        LODWORD(v14) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v10 = this->m_pSystems[v8];
      if ( (v10->m_flags & 0x2000000) != 0 )
        ParticleSystem::GarbageCollect(v10);
      ++v6;
      ++v8;
      m_numSystemsRunning = this->m_numSystemsRunning;
      v9 = v6 < (unsigned int)m_numSystemsRunning;
    }
    while ( v6 < m_numSystemsRunning );
  }
  v11 = particle_sort_systems;
  if ( !particle_sort_systems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
    std::_Sort_unchecked<ParticleSystem * *,bool (*)(ParticleSystem const *,ParticleSystem const *)>(this->m_pSystems, &this->m_pSystems[this->m_numSystemsRunning], this->m_numSystemsRunning, Particle_SortSystems);
  ParticleManager::UnlockHandleManager(this);
  v12 = FX_GetSystem(localClientNum);
  v13 = &v12->threadingCheckUpdate4Pass;
  if ( (((_BYTE)v12 + 48) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v12->threadingCheckUpdate4Pass) )
    __debugbreak();
  if ( _InterlockedCompareExchange(v13, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1554, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &FX_GetSystem( localClientNum )->threadingCheckUpdate4Pass, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &FX_GetSystem( localClientNum )->threadingCheckUpdate4Pass, 0, 1 ) == 1") )
    __debugbreak();
  FX_ThreadingCheck_Leave(fxSystem, 0);
}

/*
==============
ParticleManager::ProcessRemoveAndStopRequests
==============
*/
void ParticleManager::ProcessRemoveAndStopRequests(ParticleManager *this)
{
  int v2; 
  __int64 i; 
  ParticleSystem *v4; 
  ParticleSystemFlags m_flags; 
  ParticleSystemFlags v6; 
  ParticleSystemHandle SystemHandle; 
  __int64 v8; 
  ParticleSystem *v9; 
  ParticleSystemFlags v10; 
  ParticleSystemHandle v11; 
  __int64 v12; 
  __int64 v13; 

  v2 = this->m_numSystemsRunning - 1;
  if ( v2 < 0 )
    return;
  for ( i = v2; ; --i )
  {
    if ( (unsigned int)v2 >= this->m_numSystemsRunning )
    {
      LODWORD(v13) = this->m_numSystemsRunning;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
      __debugbreak();
    if ( !this->m_pSystems[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
      __debugbreak();
    v4 = this->m_pSystems[i];
    if ( v4->m_isRunning )
    {
      m_flags = v4->m_flags;
      if ( (m_flags & 0x31) == 1 && (BYTE2(m_flags) & 1) == 0 )
        ParticleSystem::ClearBolting(v4);
    }
    v6 = v4->m_flags;
    if ( (v6 & 0x20) == 0 )
    {
      if ( (v6 & 0x80000) != 0 )
      {
        ParticleManager::ValidateSystem(this, v4);
        if ( (v4->m_flags & 0x70) == 0 )
        {
          ParticleSystem::Stop(v4);
          ParticleSystem::StopImpactMarks(v4);
        }
      }
      goto LABEL_22;
    }
    if ( v2 != this->m_numSystemsRunning - 1 )
      break;
    ParticleManager::ValidateSystem(this, v4);
    SystemHandle = ParticleSystem::GetSystemHandle(v4);
    ParticleSystem::StopImpactMarks(v4);
    ParticleSystem::~ParticleSystem(v4);
    ParticleManager::ParticleSystemFree(this->m_localClientNum, v4);
    ParticleSystemHandleManager::release(&this->m_handleManager, SystemHandle);
    this->m_pSystems[i] = NULL;
    --this->m_numSystemsRunning;
LABEL_22:
    if ( --v2 < 0 )
      return;
  }
  v8 = v2;
  do
  {
    if ( (unsigned int)v2 >= this->m_numSystemsRunning )
    {
      LODWORD(v13) = this->m_numSystemsRunning;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
      __debugbreak();
    if ( !this->m_pSystems[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
      __debugbreak();
    v9 = this->m_pSystems[v8];
    v10 = v9->m_flags;
    if ( (v10 & 0x20) != 0 )
    {
      ParticleManager::ValidateSystem(this, this->m_pSystems[v8]);
      v11 = ParticleSystem::GetSystemHandle(v9);
      ParticleSystem::StopImpactMarks(v9);
      ParticleSystem::~ParticleSystem(v9);
      ParticleManager::ParticleSystemFree(this->m_localClientNum, v9);
      ParticleSystemHandleManager::release(&this->m_handleManager, v11);
      if ( !this->m_pSystems[this->m_numSystemsRunning - 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1598, ASSERT_TYPE_ASSERT, "(m_pSystems[m_numSystemsRunning - 1])", (const char *)&queryFormat, "m_pSystems[m_numSystemsRunning - 1]") )
        __debugbreak();
      this->m_pSystems[v8] = this->m_pSystems[this->m_numSystemsRunning - 1];
      this->m_pSystems[--this->m_numSystemsRunning] = NULL;
    }
    else if ( (v10 & 0x80000) != 0 )
    {
      ParticleManager::ValidateSystem(this, this->m_pSystems[v8]);
      if ( (v9->m_flags & 0x70) == 0 )
      {
        ParticleSystem::Stop(v9);
        ParticleSystem::StopImpactMarks(v9);
      }
    }
    --v8;
    --v2;
  }
  while ( v2 >= 0 );
}

/*
==============
ParticleManager::PropagateToDetailWorld
==============
*/
void ParticleManager::PropagateToDetailWorld(ParticleManager *this)
{
  unsigned int v1; 
  int v3; 
  __int64 m_numSystemsRunning; 
  __int64 i; 
  ParticleSystem *v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = 0;
  v3 = 0;
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  if ( (int)m_numSystemsRunning > 0 )
  {
    for ( i = 0i64; i < m_numSystemsRunning; ++i )
    {
      if ( v1 >= this->m_numSystemsRunning )
      {
        LODWORD(v8) = this->m_numSystemsRunning;
        LODWORD(v7) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v6 = this->m_pSystems[i];
      if ( (v6->m_flags & 0x10) == 0 && (ParticleSystem::GetDef(this->m_pSystems[i])->flags & 8) != 0 )
      {
        ++v3;
        ParticleSystem::PropagateToDetailWorld(v6);
      }
      ++v1;
    }
    v1 = m_numSystemsRunning;
  }
  Physics_SetCGFXSystemsDetailPropagationDebugData(this->m_localClientNum, v1, v3);
}

/*
==============
ParticleManager::Release
==============
*/
void ParticleManager::Release(ParticleManager *this)
{
  FxSystem *System; 
  InstancePoolData *m_instancePoolTable; 
  unsigned int *m_instancePoolLimits; 
  int v5; 
  int m_numSystemsRunning; 
  __int64 v7; 
  bool v8; 
  ParticleSystem *v9; 
  ParticleSystemHandle SystemHandle; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *p_m_buckets; 
  unsigned __int64 *i; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *j; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v14; 
  bitarray<512> *p_m_dataPoolAllocTable; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 

  if ( this->m_isInitialized )
  {
    System = FX_GetSystem(this->m_localClientNum);
    FX_ThreadingCheck_Enter(System, 0);
    m_instancePoolTable = this->m_instancePoolTable;
    if ( m_instancePoolTable )
    {
      ParticleManager::ParticleSystemFree(this->m_localClientNum, m_instancePoolTable);
      this->m_instancePoolTable = NULL;
    }
    m_instancePoolLimits = this->m_instancePoolLimits;
    if ( m_instancePoolLimits )
    {
      ParticleManager::ParticleSystemFree(this->m_localClientNum, m_instancePoolLimits);
      this->m_instancePoolLimits = NULL;
    }
    if ( this->m_pSystems )
    {
      Sys_LockWrite(&this->m_handleManagerLock);
      v5 = 0;
      m_numSystemsRunning = this->m_numSystemsRunning;
      if ( m_numSystemsRunning > 0 )
      {
        v7 = 0i64;
        v8 = m_numSystemsRunning != 0;
        do
        {
          if ( !v8 )
          {
            LODWORD(v18) = m_numSystemsRunning;
            LODWORD(v17) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
            __debugbreak();
          if ( !this->m_pSystems[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
            __debugbreak();
          v9 = this->m_pSystems[v7];
          ParticleManager::ValidateSystem(this, v9);
          SystemHandle = ParticleSystem::GetSystemHandle(v9);
          ParticleSystem::StopImpactMarks(v9);
          ParticleSystem::~ParticleSystem(v9);
          ParticleManager::ParticleSystemFree(this->m_localClientNum, v9);
          ParticleSystemHandleManager::release(&this->m_handleManager, SystemHandle);
          ++v5;
          ++v7;
          m_numSystemsRunning = this->m_numSystemsRunning;
          v8 = v5 < (unsigned int)m_numSystemsRunning;
        }
        while ( v5 < m_numSystemsRunning );
      }
      ParticleManager::ParticleSystemFree(this->m_localClientNum, this->m_pSystems);
      if ( this->m_handleManager.m_numAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 330, ASSERT_TYPE_ASSERT, "(m_handleManager.empty())", (const char *)&queryFormat, "m_handleManager.empty()") )
        __debugbreak();
      ParticleManager::UnlockHandleManager(this);
    }
    BucketAllocator_Shutdown(&s_bucketAllocator[this->m_localClientNum], 1);
    s_particleSystemPool[this->m_localClientNum].pool = NULL;
    s_particleSystemPool[this->m_localClientNum].poolSize = 0;
    this->m_localClientNum = LOCAL_CLIENT_INVALID;
    this->m_pSystems = NULL;
    this->m_numSystemsRunning = 0;
    this->m_deferredChildRemovalCount = 0;
    this->m_pFxSystem = NULL;
    this->m_archiveState = ARCHIVE_STATE_INACTIVE;
    *(_WORD *)&this->m_isInitialized = 0;
    this->m_enableUpdate = 0;
    p_m_buckets = &this->m_particleSystemBoneHashMap.m_buckets;
    for ( i = &this->m_particleSystemBoneHashMap.m_currentNumItems; p_m_buckets != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *)i; p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *)((char *)p_m_buckets + 8) )
    {
      for ( j = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *)p_m_buckets->m_data[0].m_listHead.m_sentinel.mp_next; j != p_m_buckets; this->m_particleSystemBoneHashMap.m_freelist.m_head.mp_next = v14 )
      {
        if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v14 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)j;
        if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        j = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *)j->m_data[0].m_listHead.m_sentinel.mp_next;
        v14->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_particleSystemBoneHashMap.m_freelist.m_head;
      }
      p_m_buckets->m_data[0].m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)p_m_buckets;
    }
    *i = 0i64;
    Particle_ToolCommandClose();
    p_m_dataPoolAllocTable = &this->m_markSpawnDataPool.m_dataPoolAllocTable;
    if ( (p_m_dataPoolAllocTable->array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 398, ASSERT_TYPE_ASSERT, "(m_dataPoolAllocTable.testBit( 0 ) == true)", (const char *)&queryFormat, "m_dataPoolAllocTable.testBit( 0 ) == true") )
      __debugbreak();
    p_m_dataPoolAllocTable->array[0] &= ~0x80000000;
    v16 = 0;
    while ( !p_m_dataPoolAllocTable->array[0] )
    {
      ++v16;
      p_m_dataPoolAllocTable = (bitarray<512> *)((char *)p_m_dataPoolAllocTable + 4);
      if ( v16 >= 0x10 )
        goto LABEL_42;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 400, ASSERT_TYPE_ASSERT, "(m_dataPoolAllocTable.noBitsOn() == true)", (const char *)&queryFormat, "m_dataPoolAllocTable.noBitsOn() == true") )
      __debugbreak();
LABEL_42:
    FX_ThreadingCheck_Leave(System, 0);
  }
}

/*
==============
ParticleManager::ReleaseMemoryPool
==============
*/
void ParticleManager::ReleaseMemoryPool(ParticleManager *this, bool warnOnLeaks)
{
  BucketAllocator_Shutdown(&s_bucketAllocator[this->m_localClientNum], warnOnLeaks);
  s_particleSystemPool[this->m_localClientNum].pool = NULL;
  s_particleSystemPool[this->m_localClientNum].poolSize = 0;
}

/*
==============
ParticleManager::RemoveAllSystems
==============
*/
void ParticleManager::RemoveAllSystems(ParticleManager *this, bool immediateKill)
{
  bool v2; 
  FxSystem *System; 
  int v5; 
  int m_numSystemsRunning; 
  __int64 v7; 
  bool v8; 
  ParticleSystem *v9; 
  ParticleSystemHandle SystemHandle; 
  ParticleSystemHandle m_systemHandle; 
  int v12; 
  __int64 v13; 
  ParticleSystemHandleImpl *v14; 
  __int64 v15; 
  __int64 v16; 

  v2 = immediateKill;
  System = FX_GetSystem(this->m_localClientNum);
  FX_ThreadingCheck_Enter(System, 0);
  Sys_LockWrite(&this->m_handleManagerLock);
  v5 = 0;
  m_numSystemsRunning = this->m_numSystemsRunning;
  if ( m_numSystemsRunning > 0 )
  {
    v7 = 0i64;
    v8 = m_numSystemsRunning != 0;
    do
    {
      if ( !v8 )
      {
        LODWORD(v16) = m_numSystemsRunning;
        LODWORD(v15) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v9 = this->m_pSystems[v7];
      ParticleManager::ValidateSystem(this, v9);
      if ( v2 )
      {
        ParticleManager::ValidateSystem(this, v9);
        SystemHandle = ParticleSystem::GetSystemHandle(v9);
        ParticleSystem::StopImpactMarks(v9);
        ParticleSystem::~ParticleSystem(v9);
        ParticleManager::ParticleSystemFree(this->m_localClientNum, v9);
        ParticleSystemHandleManager::release(&this->m_handleManager, SystemHandle);
      }
      else
      {
        if ( v9->m_systemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 196, ASSERT_TYPE_ASSERT, "(m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
          __debugbreak();
        m_systemHandle = v9->m_systemHandle;
        if ( !this->m_handleManager.m_numAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 189, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        v12 = m_systemHandle & 0xFFF;
        if ( (m_systemHandle & 0xFFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 193, ASSERT_TYPE_ASSERT, "(handleImpl._index > 0)", (const char *)&queryFormat, "handleImpl._index > 0") )
          __debugbreak();
        v13 = m_systemHandle & 0xFFF;
        if ( (g_particleSystemsGeneration[4096 * (unsigned __int64)this->m_handleManager.m_localClientNum + v13].__all32 & 0xFFF) != v12 )
        {
          LODWORD(v15) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 195, ASSERT_TYPE_ASSERT, "( ( g_particleSystemsGeneration[m_localClientNum][handleImpl._index]._index == handleImpl._index ) )", "( handleImpl._index ) = %u", v15) )
            __debugbreak();
        }
        v14 = &g_particleSystemsGeneration[4096 * (unsigned __int64)this->m_handleManager.m_localClientNum + v13];
        v14->__all32 = v14->__all32 & 0xFFF | ((v14->__all32 & 0xFFFFF000) + 4096);
        v9->m_flags |= 0x20ui64;
        v2 = immediateKill;
      }
      ++v5;
      ++v7;
      m_numSystemsRunning = this->m_numSystemsRunning;
      v8 = v5 < (unsigned int)m_numSystemsRunning;
    }
    while ( v5 < m_numSystemsRunning );
  }
  if ( v2 )
  {
    this->m_numSystemsRunning = 0;
    this->m_deferredChildRemovalCount = 0;
    if ( this->m_handleManager.m_numAllocated )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1498, ASSERT_TYPE_ASSERT, "(m_handleManager.empty())", (const char *)&queryFormat, "m_handleManager.empty()") )
        __debugbreak();
    }
  }
  ParticleManager::UnlockHandleManager(this);
  FX_ThreadingCheck_Leave(System, 0);
}

/*
==============
ParticleManager::ResetCmdStream
==============
*/
void ParticleManager::ResetCmdStream(ParticleManager *this)
{
  volatile __int32 *p_m_commandStreamOffset; 

  p_m_commandStreamOffset = &this->m_commandStreamOffset;
  *(_QWORD *)&this->m_commandStreamBuf[1007] = 0x303030303030303i64;
  *(_QWORD *)&this->m_commandStreamBuf[1015] = 0x303030303030303i64;
  this->m_commandStreamBuf[1023] = 3;
  if ( (((_BYTE)this + 0x80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &this->m_commandStreamOffset) )
    __debugbreak();
  _InterlockedExchange(p_m_commandStreamOffset, 0);
}

/*
==============
ParticleManager::Restart
==============
*/
void ParticleManager::Restart(ParticleManager *this, const int currentTime)
{
  FxSystem *System; 
  __int64 m_numSystemsRunning; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  ParticleSystem *v9; 
  __int64 v10; 
  __int64 v11; 

  if ( this->m_isRunning )
  {
    System = FX_GetSystem(this->m_localClientNum);
    FX_ThreadingCheck_Enter(System, 0);
    if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 373, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
      __debugbreak();
    ParticleManager::LockReadHandleManager(this);
    m_numSystemsRunning = this->m_numSystemsRunning;
    ParticleManager::UnlockReadHandleManager(this);
    v6 = 0;
    v7 = m_numSystemsRunning;
    if ( (int)m_numSystemsRunning > 0 )
    {
      v8 = 0i64;
      do
      {
        if ( v6 >= this->m_numSystemsRunning )
        {
          LODWORD(v11) = this->m_numSystemsRunning;
          LODWORD(v10) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        if ( !this->m_pSystems[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        v9 = this->m_pSystems[v8];
        if ( v9->m_isRunning )
          ParticleSystem::Restart(v9, currentTime);
        ++v6;
        ++v8;
      }
      while ( v8 < v7 );
    }
    FX_ThreadingCheck_Leave(System, 0);
  }
}

/*
==============
ParticleManager::Restore
==============
*/
void ParticleManager::Restore(ParticleManager *this, MemoryFile *memFile)
{
  __int64 v4; 
  ParticleSystemHandleManager *p_m_handleManager; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  FxCamera *p_camera; 
  ParticleSystemHandleImpl *v10; 
  unsigned int v11; 
  unsigned int v12; 
  const char *CString; 
  const ParticleSystemDef *v14; 
  unsigned int v15; 
  int p; 
  char v17[8]; 
  char data[104]; 
  const ParticleSystemDef *v19; 
  ParticleManager *v20; 
  FxCamera *v21; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2393, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v4 = 2i64;
  p_m_handleManager = &this->m_handleManager;
  this->m_archiveState = ARCHIVE_STATE_RESTORING;
  if ( this->m_handleManager.m_restoring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 230, ASSERT_TYPE_ASSERT, "(!m_restoring)", (const char *)&queryFormat, "!m_restoring") )
    __debugbreak();
  this->m_handleManager.m_restoring = 1;
  v6 = 1i64;
  v7 = 1365i64;
  do
  {
    g_particleSystems[(unsigned __int64)p_m_handleManager->m_localClientNum][v6] = NULL;
    g_particleSystems[(unsigned __int64)p_m_handleManager->m_localClientNum][v6 + 1] = NULL;
    v8 = v6 + ((unsigned __int64)p_m_handleManager->m_localClientNum << 12);
    v6 += 3i64;
    g_particleSystems[0][v8 + 2] = NULL;
    --v7;
  }
  while ( v7 );
  if ( !this->m_pFxSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 550, ASSERT_TYPE_ASSERT, "(GetFxSystem())", (const char *)&queryFormat, "GetFxSystem()") )
    __debugbreak();
  p_camera = &this->m_pFxSystem->camera;
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p != 13 )
    Sys_Error((const ObfuscateErrorText)&stru_144502B78);
  MemFile_ReadData(memFile, 4ui64, &v15);
  MemFile_ReadData(memFile, 4ui64, v17);
  v10 = g_particleSystemsGeneration;
  do
  {
    MemFile_ReadData(memFile, 0x4000ui64, v10);
    v10 += 4096;
    --v4;
  }
  while ( v4 );
  v11 = v15;
  v12 = 0;
  if ( v15 )
  {
    do
    {
      CString = MemFile_ReadCString(memFile);
      v14 = ParticleSystem_Register(CString);
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2431, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
        __debugbreak();
      MemFile_ReadData(memFile, 0x68ui64, data);
      v20 = this;
      v21 = p_camera;
      v19 = v14;
      if ( !Sys_TryAddWorkerCmd(WRKCMD_RESTORE_PARTICLE_SYSTEM, data) )
        ParticleSystem_RestoreCmd(data);
      ++v12;
    }
    while ( v12 < v15 );
    p_m_handleManager = &this->m_handleManager;
  }
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_RESTORE_PARTICLE_SYSTEM);
  if ( v11 != v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2451, ASSERT_TYPE_ASSERT, "( numSystemsSavedBefore ) == ( numSystemsSaved )", "%s == %s\n\t%u, %u", "numSystemsSavedBefore", "numSystemsSaved", v11, v15) )
    __debugbreak();
  ParticleSystemHandleManager::restoreEnd(p_m_handleManager);
  this->m_archiveState = ARCHIVE_STATE_INACTIVE;
}

/*
==============
ParticleManager::Save
==============
*/
void ParticleManager::Save(ParticleManager *this, MemoryFile *memFile)
{
  MemoryFile *v6; 
  unsigned int m_numSystemsRunning; 
  unsigned int v9; 
  ParticleSystem *v10; 
  ParticleSystemHandleImpl *v11; 
  __int64 v12; 
  unsigned int v13; 
  char v35; 
  const ParticleSystemDef *Def; 
  __int64 v50; 
  double v51; 
  __int64 v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  int v57; 
  int p; 
  int v59; 
  vec4_t out; 
  tmat33_t<vec3_t> mat; 
  ParticleSystemHandle m_systemHandle; 
  ParticleSystemFlags m_flags; 
  int m_spawnTime; 
  int m_lastUpdateTime; 
  unsigned int m_loopedFxEnt; 
  int v71; 
  int v72; 
  scr_string_t boneName; 
  int v74; 
  unsigned __int16 m_occlusionQueryHandle; 
  ParticleSystemHandle m_parentSystemHandle; 

  *(_QWORD *)out.v = memFile;
  v6 = memFile;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2289, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx save buffer");
  this->m_archiveState = ARCHIVE_STATE_SAVING;
  v59 = 0;
  p = 13;
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  v57 = 0;
  v9 = 0;
  if ( m_numSystemsRunning )
  {
    do
    {
      if ( v9 >= this->m_numSystemsRunning )
      {
        LODWORD(v52) = this->m_numSystemsRunning;
        LODWORD(v50) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v50, v52) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v10 = this->m_pSystems[v9];
      if ( v10->m_isRunning && (v10->m_flags & 0x10000870) == 0 )
        ++v57;
      ++v9;
    }
    while ( v9 < m_numSystemsRunning );
    v6 = *(MemoryFile **)out.v;
  }
  MemFile_WriteData(v6, 4ui64, &p);
  MemFile_WriteData(v6, 4ui64, &v57);
  MemFile_WriteData(v6, 4ui64, &v59);
  v11 = g_particleSystemsGeneration;
  v12 = 2i64;
  do
  {
    MemFile_WriteData(v6, 0x4000ui64, v11);
    v11 += 4096;
    --v12;
  }
  while ( v12 );
  v13 = 0;
  if ( m_numSystemsRunning )
  {
    __asm
    {
      vmovaps [rsp+190h+var_50], xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+190h+var_60], xmm8
      vmovss  xmm8, cs:__real@3f800000
      vmovaps [rsp+190h+var_70], xmm9
      vmovss  xmm9, cs:__real@3b03126f
      vmovaps [rsp+190h+var_40], xmm6
    }
    do
    {
      if ( v13 >= this->m_numSystemsRunning )
      {
        LODWORD(v52) = this->m_numSystemsRunning;
        LODWORD(v50) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v50, v52) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      _RBX = this->m_pSystems[v13];
      if ( _RBX->m_isRunning && (_RBX->m_flags & 0x10000870) == 0 )
      {
        if ( _RBX->m_systemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 196, ASSERT_TYPE_ASSERT, "(m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
          __debugbreak();
        m_systemHandle = _RBX->m_systemHandle;
        __asm
        {
          vmovups xmm1, xmmword ptr [rbx+30h]
          vmovss  [rbp+90h+var_DC], xmm1
          vextractps [rbp+90h+var_D8], xmm1, 1
          vextractps [rbp+90h+var_D4], xmm1, 2
          vmovups xmm2, xmmword ptr [rbx+10h]
          vmovups xmm1, xmmword ptr [rbx]
          vmovss  dword ptr [rsp+190h+mat+0Ch], xmm2
          vextractps dword ptr [rbp+90h+mat+10h], xmm2, 1
          vextractps dword ptr [rbp+90h+mat+14h], xmm2, 2
          vmovups xmm2, xmmword ptr [rbx+20h]
          vmovss  dword ptr [rbp+90h+mat+18h], xmm2
          vextractps dword ptr [rbp+90h+mat+1Ch], xmm2, 1
          vextractps dword ptr [rbp+90h+mat+20h], xmm2, 2
          vmovss  dword ptr [rsp+190h+mat], xmm1
          vextractps dword ptr [rsp+190h+mat+4], xmm1, 1
          vextractps dword ptr [rsp+190h+mat+8], xmm1, 2
        }
        AxisToQuat(&mat, &out);
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+190h+out]
          vmovss  xmm5, dword ptr [rsp+190h+out+4]
          vmovss  xmm6, dword ptr [rsp+190h+out+8]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vmovss  xmm2, dword ptr [rsp+190h+out+0Ch]
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm0, xmm3, xmm0
          vsubss  xmm1, xmm0, xmm8
          vandps  xmm1, xmm1, xmm7
          vcomiss xmm1, xmm9
        }
        if ( !v35 )
        {
          __asm
          {
            vsqrtss xmm0, xmm0, xmm0
            vcvtss2sd xmm1, xmm0, xmm0
            vmovsd  [rsp+190h+var_148], xmm1
            vcvtss2sd xmm2, xmm2, xmm2
            vmovsd  [rsp+190h+var_150], xmm2
            vcvtss2sd xmm3, xmm6, xmm6
            vmovsd  [rsp+190h+var_158], xmm3
            vcvtss2sd xmm0, xmm5, xmm5
            vmovsd  [rsp+190h+var_160], xmm0
            vcvtss2sd xmm4, xmm4, xmm4
            vmovsd  [rsp+190h+var_168], xmm4
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 272, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v51, v53, v54, v55, v56) )
            __debugbreak();
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+190h+out]
          vmovups [rbp+90h+var_EC], xmm0
        }
        m_spawnTime = _RBX->m_spawnTime;
        m_flags = _RBX->m_flags;
        m_lastUpdateTime = _RBX->m_lastUpdateTime;
        if ( (_RBX->m_flags & 0x400000) != 0 )
        {
          if ( _RBX->m_loopedFxEnt == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 202, ASSERT_TYPE_ASSERT, "(m_loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT)", (const char *)&queryFormat, "m_loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT") )
            __debugbreak();
          m_loopedFxEnt = _RBX->m_loopedFxEnt;
        }
        else
        {
          m_loopedFxEnt = -1;
        }
        if ( (_RBX->m_flags & 1) != 0 )
        {
          v71 = *(_DWORD *)&_RBX->m_bolt.FxBoltBase & 0xFFF;
          v72 = (unsigned __int16)(*(_DWORD *)&_RBX->m_bolt.FxBoltBase >> 14);
          boneName = _RBX->m_bolt.boneName;
          v74 = (*(_DWORD *)&_RBX->m_bolt.FxBoltBase >> 12) & 3;
          __asm
          {
            vmovups xmm1, xmmword ptr [rbx+150h]
            vmovss  [rbp+90h+var_9C], xmm1
            vextractps [rbp+90h+var_98], xmm1, 1
            vextractps [rbp+90h+var_94], xmm1, 2
            vmovups xmm0, xmmword ptr [rbx+160h]
            vmovups [rbp+90h+var_AC], xmm0
          }
        }
        else
        {
          v71 = 4095;
          v72 = 0xFFFF;
        }
        m_occlusionQueryHandle = _RBX->m_occlusionQueryHandle;
        if ( (_RBX->m_flags & 0x800) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2373, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VFX Save: Deadcode. Should not be executed.") )
            __debugbreak();
          if ( _RBX->m_parentSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 199, ASSERT_TYPE_ASSERT, "(m_parentSystemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_parentSystemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
            __debugbreak();
          m_parentSystemHandle = _RBX->m_parentSystemHandle;
        }
        else
        {
          m_parentSystemHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
        }
        Def = ParticleSystem::GetDef(_RBX);
        MemFile_WriteCString(v6, Def->name);
        MemFile_WriteData(v6, 0x68ui64, &m_systemHandle);
      }
      ++v13;
    }
    while ( v13 < m_numSystemsRunning );
    __asm
    {
      vmovaps xmm9, [rsp+190h+var_70]
      vmovaps xmm8, [rsp+190h+var_60]
      vmovaps xmm7, [rsp+190h+var_50]
      vmovaps xmm6, [rsp+190h+var_40]
    }
  }
  this->m_archiveState = ARCHIVE_STATE_INACTIVE;
  Sys_ProfEndNamedEvent();
}

/*
==============
ParticleManager::SetGlobalTint
==============
*/
void ParticleManager::SetGlobalTint(ParticleManager *this, const unsigned __int8 tintIndex, const float4 *tint)
{
  int v8; 
  int v9; 

  _RDI = tint;
  _RSI = this;
  if ( tintIndex >= 3u )
  {
    v9 = 3;
    v8 = tintIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3243, ASSERT_TYPE_ASSERT, "(unsigned)( tintIndex ) < (unsigned)( NUM_GLOBAL_TINTS )", "tintIndex doesn't index NUM_GLOBAL_TINTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  __asm { vmovups xmm0, xmmword ptr [rdi] }
  _RAX = 2 * (tintIndex + 19661i64);
  __asm { vmovups xmmword ptr [rsi+rax*8], xmm0 }
}

/*
==============
ParticleManager::StopBoltedSystem
==============
*/
void ParticleManager::StopBoltedSystem(ParticleManager *this, const ParticleSystemDef *pSystemDef, unsigned int dobjHandle, unsigned int boneIndex)
{
  const ParticleSystemDef *cmdData; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  char v11; 

  ParticleManager::LockCommandStreamAdd(this);
  cmdData = pSystemDef;
  v9 = truncate_cast<unsigned short,unsigned int>(boneIndex);
  v10 = truncate_cast<unsigned short,unsigned int>(dobjHandle);
  v11 = 1;
  ParticleManager::AddCmd(this, KillOrStopBoltedSystemCmd, &cmdData);
}

/*
==============
ParticleManager::StopSystem
==============
*/
void ParticleManager::StopSystem(ParticleManager *this, ParticleSystem *pSystem)
{
  ParticleManager::ValidateSystem(this, pSystem);
  pSystem->m_flags |= 0x80000ui64;
}

/*
==============
ParticleManager::StopSystem
==============
*/
void ParticleManager::StopSystem(ParticleManager *this, ParticleSystemHandle systemHandle)
{
  __int64 v2; 
  ParticleSystem *v3; 
  unsigned __int32 v5; 
  __int64 v6; 

  v2 = (__int64)(int)this->m_localClientNum << 12;
  v3 = NULL;
  v5 = 0;
  if ( g_particleSystemsGeneration[v2 + (systemHandle & 0xFFF)].__all32 == systemHandle )
    v5 = systemHandle & 0xFFF;
  v6 = v2 + v5;
  if ( g_particleSystems[0][v6] >= (ParticleSystem *)0x1000 )
    v3 = g_particleSystems[0][v6];
  if ( v3 )
  {
    ParticleManager::ValidateSystem(this, v3);
    v3->m_flags |= 0x80000ui64;
  }
  else
  {
    Com_PrintWarning(21, "Trying to stop ParticleSystem using invalid handle\n");
  }
}

/*
==============
ParticleManager::TransferBoltFromPredictedEntToCEnt
==============
*/
__int64 ParticleManager::TransferBoltFromPredictedEntToCEnt(ParticleManager *this, const ParticleSystemDef *pSystemDef, int predictedEntIdx, int boneIndex, const int centNum)
{
  unsigned __int8 v9; 
  __int64 m_numSystemsRunning; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  ParticleSystem *v14; 
  __int64 v16; 
  __int64 v17; 
  FxSystem *fxSystem; 
  char v19; 

  if ( !pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1347, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
    __debugbreak();
  fxSystem = FX_GetSystem(this->m_localClientNum);
  FX_ThreadingCheck_Enter(fxSystem, 0);
  v9 = 0;
  v19 = 0;
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  v11 = 0;
  v12 = m_numSystemsRunning;
  if ( (int)m_numSystemsRunning > 0 )
  {
    v13 = 0i64;
    do
    {
      if ( v11 >= this->m_numSystemsRunning )
      {
        LODWORD(v17) = this->m_numSystemsRunning;
        LODWORD(v16) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v14 = this->m_pSystems[v13];
      if ( (v14->m_flags & 0x20000001) == 536870913 )
      {
        if ( !v14->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
          __debugbreak();
        if ( v14->m_pSystemDef == pSystemDef && (*(_DWORD *)&v14->m_bolt.FxBoltBase & 0xFFF) == predictedEntIdx && (unsigned __int16)(*(_DWORD *)&v14->m_bolt.FxBoltBase >> 14) == boneIndex )
        {
          ParticleSystem::TransferBoltFromPredictedEntToCEnt(v14, predictedEntIdx, boneIndex, centNum);
          v19 = 1;
        }
      }
      ++v11;
      ++v13;
    }
    while ( v13 < v12 );
    v9 = v19;
  }
  FX_ThreadingCheck_Leave(fxSystem, 0);
  return v9;
}

/*
==============
ParticleManager::UnlinkFxEntInternal
==============
*/
void ParticleManager::UnlinkFxEntInternal(ParticleManager *this, const LocalClientNum_t localClientNum, ParticleSystem *const pSystem)
{
  unsigned int m_fxEnt; 
  __int64 v6; 
  int v7; 

  if ( SLOBYTE(pSystem->m_flags) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1414, ASSERT_TYPE_ASSERT, "(pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", (const char *)&queryFormat, "pSystem->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )") )
    __debugbreak();
  m_fxEnt = pSystem->m_fxEnt;
  if ( m_fxEnt >= 0x7FF )
  {
    v7 = 2047;
    LODWORD(v6) = pSystem->m_fxEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1417, ASSERT_TYPE_ASSERT, "(unsigned)( fxEnt ) < (unsigned)( ENTITYNUM_NONE )", "fxEnt doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  FX_OnParticleSystemKilledEarly(localClientNum, m_fxEnt, pSystem);
}

/*
==============
ParticleManager::Update
==============
*/
void ParticleManager::Update(ParticleManager *this, const int currentTime, const FxCamera *pCamera)
{
  int i; 
  ParticleSystem *ParticleSystemByIndex; 
  __int16 v19; 
  int v20; 
  bool Bool_Internal; 
  int j; 
  ParticleSystem *v23; 
  ParticleSystem *v24; 
  ParticleSystemFlags m_flags; 
  bool v26; 
  int k; 
  __int64 v38; 
  ParticleSystem *v39; 
  __int64 v40; 
  __int64 v41; 
  __int16 v52; 
  int v53; 
  unsigned int v54; 
  int v55; 
  unsigned int v56; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 456, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( this->m_enableUpdate && pCamera->frustumPlaneCount )
  {
    if ( particle_enable->current.enabled && particle_update->current.enabled )
    {
      if ( this->m_isRunning )
      {
        __asm
        {
          vmovaps [rsp+108h+var_38], xmm6
          vmovaps [rsp+108h+var_48], xmm7
          vmovaps [rsp+108h+var_58], xmm8
          vmovaps [rsp+108h+var_68], xmm9
          vmovaps [rsp+108h+var_78], xmm10
          vmovaps [rsp+108h+var_88], xmm11
          vmovaps [rsp+108h+var_98], xmm12
          vmovaps [rsp+108h+var_A8], xmm13
          vmovaps [rsp+108h+var_B8], xmm14
          vmovaps [rsp+108h+var_C8], xmm15
        }
        Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx update systems (dead)");
        for ( i = Sys_InterlockedIncrement(&this->m_updateIndexKillSystem); i < this->m_numSystemsUpdate; i = Sys_InterlockedIncrement(&this->m_updateIndexKillSystem) )
        {
          ParticleSystemByIndex = ParticleManager::GetParticleSystemByIndex(this, i);
          if ( (ParticleSystemByIndex->m_flags & 0x1090) == 16i64 )
            ParticleManager::KillSystemInternal(this, ParticleSystemByIndex, 1);
        }
        Sys_ProfEndNamedEvent();
        Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx update systems");
        __asm { vstmxcsr [rsp+108h+arg_0] }
        v52 = _ET0;
        v19 = v52;
        __asm { vstmxcsr [rsp+108h+arg_0] }
        v20 = v19 & 0x1F80;
        v54 = v53 & 0xFFFFE07F | 0x1800;
        __asm { vldmxcsr [rsp+108h+arg_0] }
        Bool_Internal = Dvar_GetBool_Internal(particle_parent_updates_child);
        for ( j = Sys_InterlockedIncrement(&this->m_updateIndexUpdate); j < this->m_numSystemsUpdate; j = Sys_InterlockedIncrement(&this->m_updateIndexUpdate) )
        {
          v23 = ParticleManager::GetParticleSystemByIndex(this, j);
          v24 = v23;
          v26 = 0;
          if ( v23->m_isRunning )
          {
            m_flags = v23->m_flags;
            if ( (m_flags & 0x30) == 0 && (BYTE2(m_flags) & 1) == 0 )
              v26 = 1;
          }
          if ( v26 && (!Bool_Internal && (v24->m_flags & 0x4000000) == 0 || (v24->m_flags & 0x1000) == 0) )
            ParticleSystem::Update(v24, currentTime, pCamera, 0);
        }
        __asm { vstmxcsr [rsp+108h+arg_0] }
        v56 = v20 | v55 & 0xFFFFE07F;
        __asm { vldmxcsr [rsp+108h+arg_0] }
        Sys_ProfEndNamedEvent();
        __asm
        {
          vmovaps xmm15, [rsp+108h+var_C8]
          vmovaps xmm14, [rsp+108h+var_B8]
          vmovaps xmm13, [rsp+108h+var_A8]
          vmovaps xmm12, [rsp+108h+var_98]
          vmovaps xmm11, [rsp+108h+var_88]
          vmovaps xmm10, [rsp+108h+var_78]
          vmovaps xmm9, [rsp+108h+var_68]
          vmovaps xmm8, [rsp+108h+var_58]
          vmovaps xmm7, [rsp+108h+var_48]
          vmovaps xmm6, [rsp+108h+var_38]
        }
      }
    }
    else
    {
      for ( k = Sys_InterlockedIncrement(&this->m_updateIndexSetLastUpdateTime); k < this->m_numSystemsUpdate; k = _InterlockedIncrement(&this->m_updateIndexSetLastUpdateTime) )
      {
        if ( (unsigned int)k >= this->m_numSystemsRunning )
        {
          LODWORD(v41) = this->m_numSystemsRunning;
          LODWORD(v40) = k;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        v38 = k;
        if ( !this->m_pSystems[v38] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        v39 = this->m_pSystems[v38];
        if ( v39->m_isRunning )
          v39->m_lastUpdateTime = currentTime;
        if ( (((_BYTE)this - 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_updateIndexSetLastUpdateTime) )
          __debugbreak();
      }
    }
  }
}

/*
==============
ParticleManager::UpdateAltModeParticles
==============
*/
void ParticleManager::UpdateAltModeParticles(ParticleManager *this, int numSystemsRunning)
{
  bool v3; 

  if ( this->m_standardModeGroupId == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2653, ASSERT_TYPE_ASSERT, "(m_standardModeGroupId != ParticleGroupID::NONE)", (const char *)&queryFormat, "m_standardModeGroupId != ParticleGroupID::NONE", -2i64) )
    __debugbreak();
  if ( this->m_altModeGroupId == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2654, ASSERT_TYPE_ASSERT, "(m_altModeGroupId != ParticleGroupID::NONE)", (const char *)&queryFormat, "m_altModeGroupId != ParticleGroupID::NONE") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "ParticleManager::UpdateAltModeParticles");
  v3 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_LADDER_AIM|0x80);
  this->m_localPlayerAltModeParticlesInUse = v3;
  if ( !v3 )
  {
    if ( this->m_localPlayerAltModeParticlesState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2660, ASSERT_TYPE_ASSERT, "(m_localPlayerAltModeParticlesState == false)", "%s\n\tm_localPlayerAltModeParticlesInUse is not expected to become 'false' during the lifetime of a ParticleManager object.", "m_localPlayerAltModeParticlesState == false") )
      __debugbreak();
    this->m_localPlayerAltModeParticlesState = 0;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ParticleManager::UpdateBoltingAndDrawLights
==============
*/

void __fastcall ParticleManager::UpdateBoltingAndDrawLights(ParticleManager *this, double dt)
{
  FxSystem *m_pFxSystem; 
  team_t team; 
  FxCamera *p_camera; 
  volatile int *p_m_updateIndexBolting; 
  int i; 
  ParticleSystem *v10; 
  ParticleSystemFlags m_flags; 
  const char *string; 
  const ParticleSystemDef *Def; 
  __int64 v16; 
  __int64 v17; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !this->m_pFxSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 551, ASSERT_TYPE_ASSERT, "(m_pFxSystem)", (const char *)&queryFormat, "m_pFxSystem") )
    __debugbreak();
  m_pFxSystem = this->m_pFxSystem;
  team = m_pFxSystem->team;
  if ( !m_pFxSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 550, ASSERT_TYPE_ASSERT, "(GetFxSystem())", (const char *)&queryFormat, "GetFxSystem()") )
    __debugbreak();
  p_camera = &this->m_pFxSystem->camera;
  if ( this->m_pFxSystem == (FxSystem *)-96i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 557, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  p_m_updateIndexBolting = &this->m_updateIndexBolting;
  if ( (((_BYTE)this + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_updateIndexBolting) )
    __debugbreak();
  for ( i = _InterlockedIncrement(p_m_updateIndexBolting); i < this->m_numSystemsUpdate; i = _InterlockedIncrement(p_m_updateIndexBolting) )
  {
    if ( (unsigned int)i >= this->m_numSystemsRunning )
    {
      LODWORD(v17) = this->m_numSystemsRunning;
      LODWORD(v16) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
      __debugbreak();
    if ( !this->m_pSystems[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
      __debugbreak();
    v10 = this->m_pSystems[i];
    if ( v10->m_isRunning )
    {
      m_flags = v10->m_flags;
      if ( (m_flags & 0x31) == 1 && (BYTE2(m_flags) & 1) == 0 )
      {
        __asm { vmovaps xmm1, xmm6; dt }
        ParticleSystem::UpdateBolting(v10, *(float *)&_XMM1);
      }
    }
    if ( (ParticleSystem::GetDef(v10)->flags & 4) != 0 && ParticleSystem::CanDraw(v10) && ((v10->m_flags & 0x200) == 0 || team == TEAM_TWO) && ((v10->m_flags & 0x400) == 0 || team == TEAM_ONE) )
    {
      if ( !particle_use_filter->current.enabled || (string = particle_profile_filter->current.string, Def = ParticleSystem::GetDef(v10), strstr_0(Def->name, string)) )
        ParticleSystem::DrawLights(v10, p_camera);
    }
    if ( (((_BYTE)this + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_updateIndexBolting) )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
ParticleManager::UpdateBoneMapCache
==============
*/
void ParticleManager::UpdateBoneMapCache(ParticleManager *this)
{
  __int64 m_localClientNum; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *p_m_buckets; 
  unsigned int v4; 
  unsigned __int64 *p_m_currentNumItems; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v7; 
  __int64 m_numSystemsUpdate; 
  __int64 v9; 
  Particle_bitset<2560> *v10; 
  unsigned int v11; 
  __int64 v12; 
  ParticleSystem *v13; 
  ParticleSystemFlags m_flags; 
  const DObj *ClientDObj; 
  scr_string_t boneName; 
  int v17; 
  const char *v18; 
  const ParticleSystemDef *Def; 
  FxBoltBase v20; 
  __int64 v21; 
  bool v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  __int64 v26; 
  Particle_bitset<4096> *v27; 
  FxBoltBase v28; 
  unsigned __int64 v29; 
  unsigned int v30; 
  LocalClientNum_t v31; 
  const char *v32; 
  const ParticleSystemDef *v33; 
  unsigned __int8 v34; 
  unsigned __int64 v35; 
  const char *DobjDebugName; 
  const ParticleSystemDef *v37; 
  unsigned __int64 v38; 
  Particle_bitset<256> *v39; 
  bool v40; 
  unsigned __int64 v41; 
  __int64 v42; 
  unsigned __int64 v43; 
  unsigned __int64 v44; 
  __int64 v45; 
  Particle_bitset<256> *v46; 
  unsigned __int64 v47; 
  unsigned __int8 v48; 
  FxBoltBase v49; 
  __int64 v50; 
  Particle_bitset<256> *v51; 
  unsigned __int64 v52; 
  const char *v53; 
  volatile int *p_m_updateBoneMapDobj; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  int modelIndex; 
  __int64 v59; 
  __int64 v60; 
  Particle_bitset<2560> *v61; 
  unsigned __int64 v62; 
  unsigned __int64 v63; 
  int data; 
  volatile int *v65; 
  unsigned int v66; 
  unsigned __int8 inOutIndex; 
  unsigned int v68; 
  int v69; 

  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx bone caching");
  Profile2_UpdateEntry(78);
  v63 = (unsigned __int64)&dword_14FDE8108 & 3;
  if ( ((unsigned __int8)&dword_14FDE8108 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8108) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8108);
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx bone consolidation");
  Profile2_UpdateEntry(79);
  v62 = (unsigned __int64)&dword_14FDE810C & 3;
  if ( ((unsigned __int8)&dword_14FDE810C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE810C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE810C);
  m_localClientNum = this->m_localClientNum;
  p_m_buckets = &this->m_particleSystemBoneHashMap.m_buckets;
  v4 = 0;
  p_m_currentNumItems = &this->m_particleSystemBoneHashMap.m_currentNumItems;
  v68 = 0;
  if ( &this->m_particleSystemBoneHashMap.m_buckets != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *)&this->m_particleSystemBoneHashMap.m_currentNumItems )
  {
    do
    {
      for ( i = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *)p_m_buckets->m_data[0].m_listHead.m_sentinel.mp_next; i != p_m_buckets; this->m_particleSystemBoneHashMap.m_freelist.m_head.mp_next = v7 )
      {
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v7 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)i;
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        i = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *)i->m_data[0].m_listHead.m_sentinel.mp_next;
        v7->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_particleSystemBoneHashMap.m_freelist.m_head;
      }
      p_m_buckets->m_data[0].m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)p_m_buckets;
      p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *)((char *)p_m_buckets + 8);
    }
    while ( p_m_buckets != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099> *)p_m_currentNumItems );
    v4 = v68;
  }
  *p_m_currentNumItems = 0i64;
  m_numSystemsUpdate = this->m_numSystemsUpdate;
  v9 = m_localClientNum;
  v10 = &s_dObjHandleUsed[m_localClientNum];
  v61 = v10;
  memset_0(v10, 0, sizeof(Particle_bitset<2560>));
  v11 = 0;
  v60 = m_numSystemsUpdate;
  v69 = 0;
  if ( (int)m_numSystemsUpdate > 0 )
  {
    v12 = 0i64;
    v59 = 0i64;
    do
    {
      if ( v11 >= this->m_numSystemsRunning )
      {
        LODWORD(v57) = this->m_numSystemsRunning;
        LODWORD(v56) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v56, v57) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v13 = this->m_pSystems[v12];
      if ( !v13->m_isRunning )
        goto LABEL_81;
      m_flags = v13->m_flags;
      if ( (m_flags & 0x31) != 1 || (BYTE2(m_flags) & 1) != 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF) == 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2767, ASSERT_TYPE_ASSERT, "(bolt.dobjHandle != ((1 << 12) - 1))", (const char *)&queryFormat, "bolt.dobjHandle != FX_DOBJ_HANDLE_NONE") )
        __debugbreak();
      if ( (v13->m_flags & 0x20002002) != 0 || Mayhem_IsMayhem(*(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF) && Mayhem_IsHidden((LocalClientNum_t)m_localClientNum, *(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF) )
        goto LABEL_81;
      if ( !FX_GetBoneOrientation_IsDObjEntityValid((LocalClientNum_t)m_localClientNum, *(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF) )
        goto LABEL_81;
      ClientDObj = Com_GetClientDObj(*(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF, (LocalClientNum_t)m_localClientNum);
      if ( !ClientDObj )
        goto LABEL_81;
      if ( (ParticleSystem::GetDef(v13)->flags & 0x2000) != 0 )
      {
        boneName = v13->m_bolt.boneName;
        inOutIndex = -2;
        if ( DObjGetBoneIndexInternal_89(ClientDObj, boneName, &inOutIndex, &modelIndex) )
        {
          v17 = inOutIndex;
          *(_DWORD *)&v13->m_bolt.FxBoltBase &= 0xC0003FFF;
          *(_DWORD *)&v13->m_bolt.FxBoltBase |= v17 << 14;
        }
        else
        {
          v18 = SL_ConvertToString(v13->m_bolt.boneName);
          Def = ParticleSystem::GetDef(v13);
          Com_PrintWarning(21, "Failed to update particle %s bolt on bone %s.", Def->name, v18);
          *(_DWORD *)&v13->m_bolt.FxBoltBase |= 0x3FFFC000u;
          v12 = v59;
        }
      }
      if ( !DObjIsValidBoneIndex(ClientDObj, (unsigned __int16)(*(_DWORD *)&v13->m_bolt.FxBoltBase >> 14)) )
        goto LABEL_81;
      if ( (*(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFFu) >= 0x9E5 )
      {
        LODWORD(v57) = 2533;
        LODWORD(v56) = *(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2823, ASSERT_TYPE_ASSERT, "(unsigned)( bolt.dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "bolt.dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", v56, v57) )
          __debugbreak();
      }
      v20 = v13->m_bolt.FxBoltBase;
      if ( (*(_WORD *)&v20 & 0xFFFu) < 0x800 )
      {
        v40 = Particle_bitset<2560>::test(v10, *(_WORD *)&v20 & 0xFFF);
        v41 = (unsigned int)v13->m_bolt.FxBoltBase;
        if ( !v40 )
        {
          if ( v4 < 0x200 )
          {
            v68 = v4 + 1;
            Particle_bitset<2560>::set(v10, v41 & 0xFFF);
            v50 = *(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF;
            v45 = v9 << 11;
            s_numBonesUsed[v9][v50] = 1;
            v51 = &s_dObjBonesUsed + 2048 * v9 + v50;
            v51->m_data[0] = 0i64;
            v51->m_data[1] = 0i64;
            v51->m_data[2] = 0i64;
            v51->m_data[3] = 0i64;
            v49 = v13->m_bolt.FxBoltBase;
LABEL_76:
            v52 = (unsigned __int64)*(unsigned int *)&v49 >> 14;
            v39 = &s_dObjBonesUsed + v45 + (*(_WORD *)&v49 & 0xFFF);
            v38 = (unsigned __int16)v52;
            if ( (unsigned __int16)v52 >= 0x100u )
            {
              LODWORD(v57) = 256;
              LODWORD(v56) = (unsigned __int16)v52;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 601, ASSERT_TYPE_ASSERT, "(unsigned)( pos ) < (unsigned)( NumBits )", "pos doesn't index NumBits\n\t%i not in [0, %i)", v56, v57) )
                __debugbreak();
            }
            goto LABEL_79;
          }
          goto LABEL_61;
        }
        v42 = v41 & 0xFFF;
        v43 = v41 >> 14;
        v44 = (unsigned __int16)v43;
        v45 = v9 << 11;
        v46 = &s_dObjBonesUsed + 2048 * v9 + v42;
        if ( (unsigned __int16)v43 >= 0x100u )
        {
          LODWORD(v57) = 256;
          LODWORD(v56) = (unsigned __int16)v43;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 607, ASSERT_TYPE_ASSERT, "(unsigned)( pos ) < (unsigned)( NumBits )", "pos doesn't index NumBits\n\t%i not in [0, %i)", v56, v57) )
            __debugbreak();
        }
        v28 = v13->m_bolt.FxBoltBase;
        v47 = v46->m_data[v44 >> 6];
        v30 = s_numBonesUsed[v9][*(_WORD *)&v28 & 0xFFF] + !_bittest64((const __int64 *)&v47, v44 & 0x3F);
        if ( v30 <= 0x80 )
        {
          v48 = truncate_cast<unsigned char,unsigned int>(v30);
          v49 = v13->m_bolt.FxBoltBase;
          s_numBonesUsed[v9][*(_WORD *)&v49 & 0xFFF] = v48;
          goto LABEL_76;
        }
        v31 = (int)m_localClientNum;
      }
      else
      {
        v21 = (*(_WORD *)&v20 & 0xFFFu) - 2048;
        if ( (unsigned int)v21 >= 0x1E6 )
        {
          LODWORD(v57) = 486;
          LODWORD(v56) = (*(_WORD *)&v20 & 0xFFF) - 2048;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2828, ASSERT_TYPE_ASSERT, "(unsigned)( localDObjIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientOnlyDObjBonesUsed[0] ) ) + 0 ) )", "localDObjIndex doesn't index ARRAY_COUNT( s_clientOnlyDObjBonesUsed[0] )\n\t%i not in [0, %i)", v56, v57) )
            __debugbreak();
        }
        v22 = Particle_bitset<2560>::test(v10, *(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF);
        v23 = (unsigned int)v13->m_bolt.FxBoltBase;
        if ( !v22 )
        {
          if ( v4 < 0x200 )
          {
            v68 = v4 + 1;
            Particle_bitset<2560>::set(v10, v23 & 0xFFF);
            v24 = 486 * v9;
            v26 = (unsigned int)v21;
            s_numBonesUsed[v9][*(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF] = 1;
            memset_0(&s_clientOnlyDObjBonesUsed + v21 + 486 * v9, 0, sizeof(Particle_bitset<4096>));
            v35 = (unsigned int)v13->m_bolt.FxBoltBase;
            goto LABEL_63;
          }
LABEL_61:
          DobjDebugName = FX_GetDobjDebugName((LocalClientNum_t)m_localClientNum, *(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF, (unsigned __int16)(*(_DWORD *)&v13->m_bolt.FxBoltBase >> 14), v13->m_bolt.boneName);
          v37 = ParticleSystem::GetDef(v13);
          Com_PrintWarning(21, "Num dobj handles (%u) exceeds PARTICLE_BONE_CACHE_MAX_NUM_DOBJS (%u) System: '%s' Bolt: '%s'", v4, 512i64, v37->name, DobjDebugName);
          goto LABEL_80;
        }
        v24 = 486 * v9;
        v25 = (v23 >> 14) & 0x7FFF;
        v26 = (unsigned int)v21;
        v27 = &s_clientOnlyDObjBonesUsed + v21 + 486 * v9;
        if ( (unsigned int)v25 >= 0x1000 )
        {
          LODWORD(v57) = 4096;
          LODWORD(v56) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 607, ASSERT_TYPE_ASSERT, "(unsigned)( pos ) < (unsigned)( NumBits )", "pos doesn't index NumBits\n\t%i not in [0, %i)", v56, v57) )
            __debugbreak();
        }
        v28 = v13->m_bolt.FxBoltBase;
        v29 = v27->m_data[v25 >> 6];
        v30 = s_numBonesUsed[v9][*(_WORD *)&v28 & 0xFFF] + !_bittest64((const __int64 *)&v29, v25 & 0x3F);
        if ( v30 <= 0x80 )
        {
          v34 = truncate_cast<unsigned char,unsigned int>(v30);
          v35 = (unsigned int)v13->m_bolt.FxBoltBase;
          s_numBonesUsed[v9][*(_DWORD *)&v13->m_bolt.FxBoltBase & 0xFFF] = v34;
LABEL_63:
          v38 = (v35 >> 14) & 0x7FFF;
          v39 = (Particle_bitset<256> *)(&s_clientOnlyDObjBonesUsed + v26 + v24);
          if ( (unsigned int)v38 >= 0x1000 )
          {
            LODWORD(v57) = 4096;
            LODWORD(v56) = v38;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 601, ASSERT_TYPE_ASSERT, "(unsigned)( pos ) < (unsigned)( NumBits )", "pos doesn't index NumBits\n\t%i not in [0, %i)", v56, v57) )
              __debugbreak();
          }
          LODWORD(m_localClientNum) = v9;
LABEL_79:
          v39->m_data[v38 >> 6] |= 1i64 << (v38 & 0x3F);
          goto LABEL_80;
        }
        LODWORD(m_localClientNum) = v9;
        v31 = (int)v9;
      }
      v32 = FX_GetDobjDebugName(v31, *(_WORD *)&v28 & 0xFFF, (unsigned __int16)(*(unsigned int *)&v28 >> 14), v13->m_bolt.boneName);
      v33 = ParticleSystem::GetDef(v13);
      Com_PrintWarning(21, "Bone count (%u) exceeds PARTICLE_BONE_CACHE_MAX_NUM_BONES (%u) System: '%s' Bolt: '%s'", v30, 128i64, v33->name, v32);
LABEL_80:
      v12 = v59;
LABEL_81:
      v10 = v61;
      v4 = v68;
      v11 = v69 + 1;
      ++v12;
      ++v69;
      v59 = v12;
    }
    while ( v12 < v60 );
  }
  Profile2_UpdateEntry(79);
  if ( v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE810C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE810C);
  Sys_ProfEndNamedEvent();
  v53 = j_va("vfx get bone orientations %d", v4);
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, v53);
  Profile2_UpdateEntry(80);
  if ( ((unsigned __int8)&dword_14FDE8110 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8110) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8110);
  p_m_updateBoneMapDobj = &this->m_updateBoneMapDobj;
  *p_m_updateBoneMapDobj = -1;
  if ( v4 )
  {
    data = m_localClientNum;
    v55 = 4i64;
    v65 = p_m_updateBoneMapDobj;
    v66 = v4;
    do
    {
      Sys_AddWorkerCmd(WRKCMD_UPDATE_FX_BONE_HASH_MAP, &data);
      --v55;
    }
    while ( v55 );
  }
  Profile2_UpdateEntry(80);
  if ( ((unsigned __int64)&dword_14FDE8110 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8110) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8110);
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(78);
  if ( v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8108) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8108);
  Sys_ProfEndNamedEvent();
}

/*
==============
ParticleManager::UpdateBoneMapWorker
==============
*/
void ParticleManager::UpdateBoneMapWorker(const void *const cmdInfo)
{
  int *v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  volatile signed __int32 *v5; 
  __int64 v6; 
  __int64 v7; 
  Particle_bitset<2560> *v8; 
  Particle_bitset<2560> *v11; 
  int v14; 
  __int64 v15; 
  unsigned __int64 *v16; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v24; 
  char *v26; 
  __int64 *v27; 
  unsigned int v30; 
  int v31; 
  __int64 v32; 
  char *v33; 
  int *v34; 
  int v35; 
  __int64 v36; 
  char *v37; 
  int v40; 
  unsigned int v42; 
  int v43; 
  int v44; 
  __int64 v45; 
  Particle_bitset<256> *v47; 
  Particle_bitset<256> *v49; 
  char *v52; 
  int *p_boneIndices; 
  __int64 v54; 
  int v55; 
  __int64 v56; 
  unsigned __int64 *v57; 
  int v60; 
  unsigned int v62; 
  int v63; 
  int *v64; 
  float *v65; 
  tmat33_t<vec3_t> *p_outTagMatrices; 
  __int64 v67; 
  char *v68; 
  unsigned int v69; 
  unsigned __int64 v70; 
  char *v71; 
  char *v73; 
  char **v76; 
  int v79; 
  vec3_t *outOrigins; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  unsigned int v84; 
  int v85; 
  int v86; 
  int v87; 
  DObj *obj; 
  int v89; 
  int v90; 
  __int64 v91; 
  __int64 v92; 
  _BYTE v94[32]; 
  __int128 v95; 
  _BYTE v96[52]; 
  int boneIndices; 
  char v98[508]; 
  vec3_t v99; 
  tmat33_t<vec3_t> outTagMatrices; 

  v1 = (int *)cmdInfo;
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx get bone orientations");
  Profile2_UpdateEntry(78);
  if ( ((unsigned __int8)&dword_14FDE8108 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8108) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8108);
  Profile2_UpdateEntry(80);
  if ( ((unsigned __int8)&dword_14FDE8110 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8110) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8110);
  v2 = *v1;
  v87 = v2;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(outOrigins) = *v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outOrigins, 2) )
      __debugbreak();
  }
  v3 = v1[4];
  v4 = v2;
  v92 = v2;
  v91 = 314624 * v2;
  v90 = v3;
  while ( 1 )
  {
    Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx get bone orientations find next dobj");
    v5 = (volatile signed __int32 *)*((_QWORD *)v1 + 1);
    if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v5) )
      __debugbreak();
    v6 = (unsigned int)_InterlockedIncrement(v5);
    if ( (int)v6 >= v3 )
      break;
    v7 = 0i64;
    v8 = &s_dObjHandleUsed[v4];
    _RAX = v8->m_data[0];
    if ( v8->m_data[0] )
    {
      __asm { tzcnt   r13, rax }
      v85 = _R13;
      if ( (unsigned int)_R13 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 630, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
        __debugbreak();
    }
    else
    {
      v11 = &s_dObjHandleUsed[v4];
      do
      {
        ++v7;
        v11 = (Particle_bitset<2560> *)((char *)v11 + 8);
        if ( v7 == 40 )
        {
          LODWORD(_R13) = 2560;
          goto LABEL_27;
        }
        _RCX = v11->m_data[0];
      }
      while ( !v11->m_data[0] );
      __asm { tzcnt   rdi, rcx }
      if ( (unsigned int)_RDI >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 645, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
        __debugbreak();
      LODWORD(_R13) = _RDI + ((_DWORD)v7 << 6);
LABEL_27:
      v85 = _R13;
    }
    if ( (int)v6 >= 1 )
    {
      while ( 1 )
      {
        if ( (int)_R13 < 2559 )
        {
          v14 = _R13 + 1;
          if ( (int)_R13 + 1 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 621, ASSERT_TYPE_ASSERT, "(pos >= 0)", (const char *)&queryFormat, "pos >= 0") )
            __debugbreak();
          v15 = v14 >> 6;
          v16 = &v8->m_data[v15];
          if ( *v16 & (-1i64 << (v14 & 0x3F)) )
          {
            __asm { tzcnt   rdi, r8 }
            if ( (unsigned int)_RDI >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 630, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
              __debugbreak();
LABEL_37:
            LODWORD(_R13) = _RDI + ((_DWORD)v15 << 6);
            goto LABEL_44;
          }
          while ( 1 )
          {
            ++v15;
            ++v16;
            if ( v15 == 40 )
              break;
            _RAX = *v16;
            if ( *v16 )
            {
              __asm { tzcnt   rdi, rax }
              if ( (unsigned int)_RDI >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 645, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
              {
                __debugbreak();
                LODWORD(_R13) = _RDI + ((_DWORD)v15 << 6);
                goto LABEL_44;
              }
              goto LABEL_37;
            }
          }
        }
        LODWORD(_R13) = 2560;
LABEL_44:
        if ( !--v6 )
        {
          LODWORD(v2) = v87;
          v4 = v92;
          v85 = _R13;
          break;
        }
      }
    }
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx get bone orientations dobj");
    if ( (unsigned int)_R13 >= 0x9E5 )
    {
      LODWORD(v81) = 2533;
      LODWORD(outOrigins) = _R13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2949, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", outOrigins, v81) )
        __debugbreak();
    }
    v20 = s_numBonesUsed[v4][(int)_R13];
    v84 = v20;
    if ( v20 - 1 > 0x7E )
    {
      LODWORD(v83) = 128;
      LODWORD(v82) = _R13;
      LODWORD(v81) = s_numBonesUsed[v4][(int)_R13];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2951, ASSERT_TYPE_ASSERT, "(( boneCount > 0 ) && ( boneCount < PARTICLE_BONE_CACHE_MAX_NUM_BONES ))", "%s\n\tbonecount (%u) for dobjHandle %d exceeds PARTICLE_BONE_CACHE_MAX_NUM_BONES (%u) or is zero.\n", "( boneCount > 0 ) && ( boneCount < PARTICLE_BONE_CACHE_MAX_NUM_BONES )", v81, v82, v83) )
        __debugbreak();
    }
    if ( (int)_R13 < 2048 )
    {
      _RBX = 0i64;
      v47 = &s_dObjBonesUsed + 2048 * v4 + (int)_R13;
      _RAX = v47->m_data[0];
      if ( v47->m_data[0] )
      {
        __asm { tzcnt   rbx, rax }
        if ( (unsigned int)_RBX >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 630, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
          __debugbreak();
      }
      else
      {
        v49 = v47;
        do
        {
          ++_RBX;
          v49 = (Particle_bitset<256> *)((char *)v49 + 8);
          if ( _RBX == 4 )
          {
            LODWORD(_RBX) = 256;
            boneIndices = 256;
            goto LABEL_126;
          }
          _RCX = v49->m_data[0];
        }
        while ( !v49->m_data[0] );
        __asm { tzcnt   rdi, rcx }
        if ( (unsigned int)_RDI >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 645, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
          __debugbreak();
        LODWORD(_RBX) = _RDI + ((_DWORD)_RBX << 6);
        v20 = v84;
      }
      boneIndices = _RBX;
      if ( (unsigned int)_RBX >= 0xFE )
      {
LABEL_126:
        LODWORD(v81) = 254;
        LODWORD(outOrigins) = _RBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2979, ASSERT_TYPE_ASSERT, "(unsigned)( boneList[0] ) < (unsigned)( DOBJ_MAX_PARTS )", "boneList[0] doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", outOrigins, v81) )
          __debugbreak();
      }
      if ( v20 <= 1 )
        goto LABEL_151;
      v52 = v98;
      p_boneIndices = &boneIndices;
      v54 = v20 - 1;
      while ( 2 )
      {
        if ( *p_boneIndices < 255 )
        {
          v55 = *p_boneIndices + 1;
          if ( v55 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 621, ASSERT_TYPE_ASSERT, "(pos >= 0)", (const char *)&queryFormat, "pos >= 0") )
            __debugbreak();
          v56 = v55 >> 6;
          v57 = &v47->m_data[v56];
          if ( *v57 & (-1i64 << (v55 & 0x3F)) )
          {
            __asm { tzcnt   rdi, r8 }
            if ( (unsigned int)_RDI >= 0x40 )
            {
              v60 = 630;
LABEL_141:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", v60, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
                __debugbreak();
            }
LABEL_143:
            v62 = ((_DWORD)v56 << 6) + _RDI;
            *(_DWORD *)v52 = v62;
            v63 = v62;
            if ( v62 >= 0xFE )
            {
LABEL_146:
              LODWORD(v81) = 254;
              LODWORD(outOrigins) = v63;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2983, ASSERT_TYPE_ASSERT, "(unsigned)( boneList[bone] ) < (unsigned)( DOBJ_MAX_PARTS )", "boneList[bone] doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", outOrigins, v81) )
                __debugbreak();
            }
            ++p_boneIndices;
            v52 += 4;
            if ( !--v54 )
            {
              LODWORD(_R13) = v85;
              LODWORD(v2) = v87;
              goto LABEL_150;
            }
            continue;
          }
          while ( 1 )
          {
            ++v56;
            ++v57;
            if ( v56 == 4 )
              break;
            _RAX = *v57;
            if ( *v57 )
            {
              __asm { tzcnt   rdi, rax }
              if ( (unsigned int)_RDI < 0x40 )
                goto LABEL_143;
              v60 = 645;
              goto LABEL_141;
            }
          }
        }
        break;
      }
      v63 = 256;
      *(_DWORD *)v52 = 256;
      goto LABEL_146;
    }
    if ( (unsigned int)_R13 > 0x9E4 )
    {
      LODWORD(v81) = _R13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v81) )
        __debugbreak();
    }
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v81) = 2;
      LODWORD(outOrigins) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outOrigins, v81) )
        __debugbreak();
    }
    v21 = _R13 + 2533 * v2;
    if ( v21 >= 0x13CA )
    {
      LODWORD(v81) = _R13 + 2533 * v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v81) )
        __debugbreak();
    }
    v22 = clientObjMap[v21];
    if ( v22 )
    {
      if ( v22 >= (unsigned int)s_objCount )
      {
        LODWORD(v81) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v81) )
          __debugbreak();
      }
      obj = (DObj *)s_objBuf[v22];
    }
    else
    {
      obj = NULL;
    }
    if ( (unsigned int)(_R13 - 2048) >= 0x1E6 )
    {
      LODWORD(v81) = 486;
      LODWORD(outOrigins) = _R13 - 2048;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2957, ASSERT_TYPE_ASSERT, "(unsigned)( localDObjIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientOnlyDObjBonesUsed[0] ) ) + 0 ) )", "localDObjIndex doesn't index ARRAY_COUNT( s_clientOnlyDObjBonesUsed[0] )\n\t%i not in [0, %i)", outOrigins, v81) )
        __debugbreak();
    }
    _RBX = 0i64;
    v24 = ((unsigned int)(_R13 - 2048) + 486 * v4) << 9;
    _RAX = *(unsigned __int64 *)((char *)s_clientOnlyDObjBonesUsed.m_data + v24);
    v26 = (char *)&s_clientOnlyDObjBonesUsed + v24;
    if ( _RAX )
    {
      __asm { tzcnt   rbx, rax }
      if ( (unsigned int)_RBX >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 630, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
        __debugbreak();
    }
    else
    {
      v27 = (__int64 *)((char *)&s_clientOnlyDObjBonesUsed + v24);
      do
      {
        ++_RBX;
        ++v27;
        if ( _RBX == 64 )
        {
          LODWORD(_RBX) = 4096;
          goto LABEL_83;
        }
        _RCX = *v27;
      }
      while ( !*v27 );
      __asm { tzcnt   rdi, rcx }
      if ( (unsigned int)_RDI >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 645, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
        __debugbreak();
      LODWORD(_RBX) = _RDI + ((_DWORD)_RBX << 6);
      v20 = v84;
    }
LABEL_83:
    boneIndices = _RBX;
    v30 = _RBX & 0x7FFF;
    if ( v30 >= 0xFFE )
    {
      LODWORD(v81) = 4094;
      LODWORD(outOrigins) = v30;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2959, ASSERT_TYPE_ASSERT, "(unsigned)( boneList[0] & ((1 << 15) - 1) ) < (unsigned)( DOBJ_MAX_TOTAL_PARTS )", "boneList[0] & CLIENT_BONEINDEX_MASK doesn't index DOBJ_MAX_TOTAL_PARTS\n\t%i not in [0, %i)", outOrigins, v81) )
        __debugbreak();
    }
    v31 = 1;
    if ( v20 > 1 )
    {
      v32 = v20 - 1;
      v89 = v20;
      v33 = v98;
      v34 = &boneIndices;
      while ( 1 )
      {
        if ( *v34 < 4095 )
        {
          v35 = *v34 + 1;
          if ( v35 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 621, ASSERT_TYPE_ASSERT, "(pos >= 0)", (const char *)&queryFormat, "pos >= 0") )
            __debugbreak();
          v36 = v35 >> 6;
          v37 = &v26[8 * v36];
          if ( *(_QWORD *)v37 & (-1i64 << (v35 & 0x3F)) )
          {
            __asm { tzcnt   rbx, r8 }
            if ( (unsigned int)_RBX >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 630, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
              __debugbreak();
LABEL_96:
            v40 = ((_DWORD)v36 << 6) + _RBX;
            goto LABEL_103;
          }
          while ( 1 )
          {
            ++v36;
            v37 += 8;
            if ( v36 == 64 )
              break;
            _RAX = *(_QWORD *)v37;
            if ( *(_QWORD *)v37 )
            {
              __asm { tzcnt   rbx, rax }
              if ( (unsigned int)_RBX >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 645, ASSERT_TYPE_ASSERT, "(tzcnt < 64)", (const char *)&queryFormat, "tzcnt < 64") )
              {
                __debugbreak();
                v40 = ((_DWORD)v36 << 6) + _RBX;
                goto LABEL_103;
              }
              goto LABEL_96;
            }
          }
        }
        v40 = 4096;
LABEL_103:
        *(_DWORD *)v33 = v40;
        v42 = v40 & 0x7FFF;
        if ( v42 >= 0xFFE )
        {
          LODWORD(v81) = 4094;
          LODWORD(outOrigins) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2964, ASSERT_TYPE_ASSERT, "(unsigned)( boneList[bone] & ((1 << 15) - 1) ) < (unsigned)( DOBJ_MAX_TOTAL_PARTS )", "boneList[bone] & CLIENT_BONEINDEX_MASK doesn't index DOBJ_MAX_TOTAL_PARTS\n\t%i not in [0, %i)", outOrigins, v81) )
            __debugbreak();
        }
        v43 = *v34;
        if ( v43 >= DObjGetNumBones(obj) )
          *v34 = v43 | 0x8000;
        ++v34;
        v33 += 4;
        if ( !--v32 )
        {
          v31 = v89;
          LODWORD(v2) = v87;
          break;
        }
      }
    }
    v44 = *(_DWORD *)&v98[4 * (v31 - 1) - 4];
    v45 = (unsigned int)(v31 - 1);
    LODWORD(_R13) = v85;
    if ( v44 >= DObjGetNumBones(obj) )
      *(_DWORD *)&v98[4 * v45 - 4] = v44 | 0x8000;
LABEL_150:
    v20 = v84;
LABEL_151:
    FX_GetMultipleBoneOrientations((LocalClientNum_t)v2, _R13, v20, &boneIndices, &outTagMatrices, &v99);
    Sys_EnterCriticalSection(CRITSECT_FX_UPDATE_BONE_HASH);
    if ( v20 )
    {
      v64 = &boneIndices;
      v86 = (_DWORD)_R13 << 16;
      v65 = &v99.v[2];
      p_outTagMatrices = &outTagMatrices;
      v67 = v20;
      v68 = (char *)&g_particleManager[0].m_particleSystemBoneHashMap.m_buckets + v91;
      do
      {
        v69 = *v64 | v86;
        v70 = v69 % 0x1003ui64;
        if ( v70 >= 0x1003 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v71 = &v68[8 * v70];
        _RBX = *(char **)v71;
        if ( *(char **)v71 == v71 )
        {
LABEL_162:
          _RBX = NULL;
        }
        else
        {
          while ( 1 )
          {
            if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( *((_DWORD *)_RBX + 2) == v69 )
              break;
            _RBX = *(char **)_RBX;
            if ( _RBX == v71 )
              goto LABEL_162;
          }
        }
        if ( !_RBX )
        {
          v73 = *(char **)v71;
          memset(v94, 0, sizeof(v94));
          v95 = 0ui64;
          *(_DWORD *)v96 = v69;
          __asm
          {
            vmovups ymm0, [rbp+1A40h+var_1AA0]
            vmovups xmm1, [rbp+1A40h+var_1A80]
            vmovups [rbp+1A40h+var_1A70+4], ymm0
            vmovups [rbp+1A40h+var_1A4C], xmm1
          }
          if ( *(char **)v71 == v71 )
          {
LABEL_170:
            v76 = (char **)((char *)&g_particleManager[0].m_particleSystemBoneHashMap.m_freelist + v91);
            if ( !*(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&g_particleManager[0].m_particleSystemBoneHashMap.m_freelist.m_head.mp_next + v91) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
              if ( !*v76 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
            }
            if ( *v76 == (char *)v76 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x40ui64, 0x1000ui64) )
              __debugbreak();
            _RBX = *v76;
            __asm
            {
              vmovups ymm0, [rbp+1A40h+var_1A70]
              vmovups xmm1, xmmword ptr [rbp-10h]
            }
            *v76 = *(char **)*v76;
            __asm
            {
              vmovups ymmword ptr [rbx+8], ymm0
              vmovups xmmword ptr [rbx+28h], xmm1
            }
            *(_QWORD *)_RBX = 0i64;
            *((_DWORD *)_RBX + 14) = *(_DWORD *)&v96[48];
            *(_QWORD *)_RBX = *(_QWORD *)v71;
            *(_QWORD *)v71 = _RBX;
          }
          else
          {
            while ( 1 )
            {
              if ( !v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              if ( *((_DWORD *)v73 + 2) == v69 )
                break;
              v73 = *(char **)v73;
              if ( v73 == v71 )
                goto LABEL_170;
            }
            _RBX = NULL;
          }
          ++*(unsigned __int64 *)((char *)&g_particleManager[0].m_particleSystemBoneHashMap.m_currentNumItems + v91);
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 331, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
            __debugbreak();
        }
        MatrixCopy33(p_outTagMatrices++, (tmat33_t<vec3_t> *)(_RBX + 24));
        v68 = (char *)&g_particleManager[0].m_particleSystemBoneHashMap.m_buckets + v91;
        ++v64;
        *((float *)_RBX + 3) = *(v65 - 2);
        *((float *)_RBX + 4) = *(v65 - 1);
        v79 = *(_DWORD *)v65;
        v65 += 3;
        *((_DWORD *)_RBX + 5) = v79;
        --v67;
      }
      while ( v67 );
      LODWORD(v2) = v87;
    }
    Sys_LeaveCriticalSection(CRITSECT_FX_UPDATE_BONE_HASH);
    Sys_ProfEndNamedEvent();
    v1 = (int *)cmdInfo;
    v3 = v90;
    v4 = (int)v2;
  }
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(80);
  if ( ((unsigned __int64)&dword_14FDE8110 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8110) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8110);
  Profile2_UpdateEntry(78);
  if ( ((unsigned __int64)&dword_14FDE8108 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8108) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8108);
  Sys_ProfEndNamedEvent();
}

/*
==============
ParticleManager::UpdateCachedCameraTransform
==============
*/

void __fastcall ParticleManager::UpdateCachedCameraTransform(ParticleManager *this, const FxCamera *pCamera, double _XMM2_8)
{
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 

  _RBX = pCamera;
  _RDI = this;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2564, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( _RBX->isValid )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+70h]
      vxorps  xmm2, xmm2, xmm2
      vmovaps [rsp+0D8h+var_18], xmm6
    }
    HIDWORD(v68) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+70h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rbx+74h], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+78h], 20h ; ' '
      vmovups xmmword ptr [rdi+4C520h], xmm3
      vmovss  xmm0, dword ptr [rbx+7Ch]
    }
    HIDWORD(v69) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+80h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rbx+80h], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+84h], 20h ; ' '
      vmovups xmmword ptr [rdi+4C530h], xmm3
      vmovss  xmm0, dword ptr [rbx+88h]
    }
    HIDWORD(v70) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+90h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rbx+8Ch], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+90h], 20h ; ' '
      vmovups xmmword ptr [rdi+4C540h], xmm3
      vxorps  xmm0, xmm2, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
      vxorps  xmm3, xmm1, xmm2
      vmovups xmmword ptr [rdi+4C550h], xmm3
      vmovups xmm0, xmmword ptr [rbx]
      vinsertps xmm1, xmm0, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0'
      vmovups xmmword ptr [rdi+4C550h], xmm1
      vmovups xmm1, xmmword ptr [rdi+4C540h]
      vmovups xmm0, xmmword ptr [rdi+4C550h]
      vmovups xmm3, xmmword ptr [rdi+4C520h]
      vmovups xmm2, xmmword ptr [rdi+4C530h]
      vshufps xmm4, xmm1, xmm0, 44h ; 'D'
      vshufps xmm5, xmm1, xmm0, 0EEh ; 'î'
      vshufps xmm6, xmm3, xmm2, 44h ; 'D'
      vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
      vmovups xmmword ptr [rsp+0D8h+var_A8], xmm0
      vshufps xmm2, xmm3, xmm2, 0EEh ; 'î'
      vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
      vmovups xmmword ptr [rsp+0D8h+var_A8+10h], xmm1
      vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
      vmovups xmmword ptr [rsp+0D8h+var_88], xmm0
      vmovups ymm0, [rsp+0D8h+var_A8]
      vmovups ymmword ptr [rdi+4C560h], ymm0
      vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
      vmovups xmmword ptr [rsp+0D8h+var_88+10h], xmm1
      vmovups ymm1, [rsp+0D8h+var_88]
      vmovups ymmword ptr [rdi+4C580h], ymm1
      vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
      vmovups [rsp+0D8h+var_A8], ymm0
      vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
      vmovups [rsp+0D8h+var_88], ymm0
      vmovups ymm0, [rsp+0D8h+var_A8]
      vmovups ymm1, [rsp+0D8h+var_88]
      vmovups ymmword ptr [rdi+4C5A0h], ymm0
      vmovups ymmword ptr [rdi+4C5C0h], ymm1
      vmovups xmm0, xmmword ptr [rbx]
      vinsertps xmm1, xmm0, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0'
      vmovups xmmword ptr [rdi+4C5D0h], xmm1
      vmovups xmm0, xmmword ptr [rdi+4C5D0h]
      vmovups xmm1, xmmword ptr [rdi+4C5C0h]
      vmovups xmm3, xmmword ptr [rdi+4C5A0h]
      vmovups xmm2, xmmword ptr [rdi+4C5B0h]
      vshufps xmm4, xmm1, xmm0, 44h ; 'D'
      vshufps xmm5, xmm1, xmm0, 0EEh ; 'î'
      vshufps xmm6, xmm3, xmm2, 44h ; 'D'
      vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
      vshufps xmm2, xmm3, xmm2, 0EEh ; 'î'
      vmovups xmmword ptr [rsp+0D8h+var_A8], xmm0
      vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
      vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
      vmovups xmmword ptr [rsp+0D8h+var_A8+10h], xmm1
      vmovups xmmword ptr [rsp+0D8h+var_88], xmm0
      vmovups ymm0, [rsp+0D8h+var_A8]
      vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
      vmovups ymmword ptr [rdi+4C5E0h], ymm0
      vmovaps [rsp+0D8h+var_28], xmm7
      vmovups xmmword ptr [rsp+0D8h+var_88+10h], xmm1
      vmovups ymm1, [rsp+0D8h+var_88]
      vmovaps xmm7, [rsp+0D8h+var_28]
      vmovaps xmm6, [rsp+0D8h+var_18]
      vmovups ymmword ptr [rdi+4C600h], ymm1
    }
  }
}

/*
==============
ParticleManager::UpdateCulling
==============
*/
void ParticleManager::UpdateCulling(ParticleManager *this, FxSystem *fxSystem)
{
  int v4; 
  team_t team; 
  int m_numSystemsRunning; 
  __int64 v7; 
  bool v8; 
  ParticleSystem *v9; 
  const char *string; 
  const ParticleSystemDef *Def; 
  __int64 v12; 
  __int64 v13; 

  if ( particle_enable->current.enabled && particle_draw->current.enabled && this->m_isRunning )
  {
    v4 = 0;
    team = this->m_pFxSystem->team;
    m_numSystemsRunning = this->m_numSystemsRunning;
    if ( m_numSystemsRunning > 0 )
    {
      v7 = 0i64;
      v8 = m_numSystemsRunning != 0;
      do
      {
        if ( !v8 )
        {
          LODWORD(v13) = m_numSystemsRunning;
          LODWORD(v12) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        if ( !this->m_pSystems[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        v9 = this->m_pSystems[v7];
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2535, ASSERT_TYPE_ASSERT, "(pSystem)", (const char *)&queryFormat, "pSystem") )
          __debugbreak();
        if ( (ParticleSystem::GetDef(v9)->flags & 1) != 0 && ParticleSystem::CanDraw(v9) && ((v9->m_flags & 0x200) == 0 || team == TEAM_TWO) && ((v9->m_flags & 0x400) == 0 || team == TEAM_ONE) && (!particle_use_filter->current.enabled || (string = particle_profile_filter->current.string, Def = ParticleSystem::GetDef(v9), strstr_0(Def->name, string))) && !ParticleSystem::UpdateCullingAndOcclusion(v9, fxSystem) )
        {
          v9->m_flags &= ~0x400000000ui64;
          v9->m_flags ^= (((R_Umbra_IsBoxVisible(&v9->m_umbraBounds, 0, this->m_localClientNum, 0) != 0) - 1i64) ^ v9->m_flags) & 0x200000000i64;
        }
        else
        {
          v9->m_flags |= 0x400000000ui64;
        }
        m_numSystemsRunning = this->m_numSystemsRunning;
        ++v4;
        ++v7;
        v8 = v4 < (unsigned int)m_numSystemsRunning;
      }
      while ( v4 < m_numSystemsRunning );
    }
  }
}

/*
==============
ParticleManager::UpdateNVGAndThermalState
==============
*/
void ParticleManager::UpdateNVGAndThermalState(ParticleManager *this, int numSystemsRunning)
{
  bool v4; 
  int v5; 
  int integer; 
  bool v7; 
  bool IsThermalVisionOn; 
  int v9; 
  bool v10; 
  unsigned __int8 ActiveGameMode; 
  __int64 v12; 
  ParticleSystem *v13; 
  __int64 v14; 
  __int64 v15; 

  v4 = CG_LookingThroughNightVision((const LocalClientNum_t)this->m_localClientNum);
  v5 = 0;
  integer = particle_nightvision_override->current.integer;
  if ( integer == 1 )
  {
    v7 = 1;
  }
  else
  {
    v7 = v4;
    if ( integer == 2 )
      v7 = 0;
  }
  IsThermalVisionOn = CG_View_IsThermalVisionOn((const LocalClientNum_t)this->m_localClientNum);
  v9 = particle_thermal_override->current.integer;
  if ( v9 == 1 )
  {
    v10 = 1;
  }
  else
  {
    v10 = IsThermalVisionOn;
    if ( v9 == 2 )
      v10 = 0;
  }
  if ( v10 != this->m_localPlayerThermalState || v7 != this->m_localPlayerNVGState )
  {
    this->m_localPlayerThermalState = v10;
    this->m_localPlayerNVGState = v7;
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    if ( numSystemsRunning > 0 )
    {
      v12 = 0i64;
      do
      {
        if ( (unsigned int)v5 >= this->m_numSystemsRunning )
        {
          LODWORD(v15) = this->m_numSystemsRunning;
          LODWORD(v14) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        if ( !this->m_pSystems[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        v13 = this->m_pSystems[v12];
        if ( (ParticleSystem::GetDef(v13)->flags & 0x800000) != 0 )
          ParticleSystem::ThermalOrNVGStateChanged(v13, v10, v7, (GameModeType)ActiveGameMode, this->m_isHighPlayerCount);
        ++v5;
        ++v12;
      }
      while ( v5 < numSystemsRunning );
    }
  }
}

/*
==============
ParticleManager::UpdateSounds
==============
*/
void ParticleManager::UpdateSounds(ParticleManager *this)
{
  __int64 m_localClientNum; 
  __int64 v5; 
  volatile int v6; 
  unsigned int *p_particleHandle; 
  unsigned int v8; 
  unsigned int v9; 
  const ParticleState *v10; 
  const ParticleState *v11; 
  unsigned int v12; 
  const ParticleState **p_pParticleState; 
  unsigned __int64 v14; 
  char v15; 
  int v16; 
  bool v17; 
  volatile int v18; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  bool isLooping; 
  int soundId; 
  bool v27; 
  __int64 v28; 
  ParticleEmitter *v29; 
  ParticleData *m_pParticleData; 
  unsigned __int8 *ParticleDataArray; 
  int v32; 
  unsigned int m_particleCountRunning; 
  unsigned __int8 *v34; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v37; 
  __int64 v39; 
  bool updated; 
  unsigned __int64 v53; 
  char v54; 
  int v55; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  bool v58; 
  __int64 v62; 
  SndAliasList *AliasFromId; 
  const SndAliasList *v66; 
  unsigned __int64 ParticleSndEntHandle; 
  int v69; 
  int v70; 
  bool v71; 
  float fmt; 
  __int64 v73; 
  __int64 v74; 
  volatile int v75; 
  int particleSoundIndex; 
  LocalClientNum_t localClientNum; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  unsigned __int8 *v81; 
  ParticleManager::Particle_SoundData *rSoundData; 
  CgSoundSystem *v83; 
  vec3_t org; 

  _RBX = this;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1798, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  m_localClientNum = _RBX->m_localClientNum;
  localClientNum = _RBX->m_localClientNum;
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(v74) = CgSoundSystem::ms_allocatedCount;
    LODWORD(v73) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v73, v74) )
      __debugbreak();
  }
  v80 = m_localClientNum;
  v5 = m_localClientNum;
  if ( !CgSoundSystem::ms_soundSystemArray[m_localClientNum] )
  {
    LODWORD(v74) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v74) )
      __debugbreak();
  }
  v83 = CgSoundSystem::ms_soundSystemArray[m_localClientNum];
  if ( _RBX->m_soundPlayListCount )
  {
    v6 = 0;
    if ( _RBX->m_soundDestroyListCount > 0 )
    {
      p_particleHandle = &_RBX->m_soundDestroyList[0].particleHandle;
      do
      {
        v8 = p_particleHandle[5];
        v9 = *p_particleHandle;
        v10 = *(const ParticleState **)(p_particleHandle + 1);
        v11 = *(const ParticleState **)(p_particleHandle + 3);
        if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2596, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
          __debugbreak();
        v12 = 0;
        p_pParticleState = &_RBX->m_soundPlayList[0].pParticleState;
        while ( v11 != p_pParticleState[1] || v10 != *p_pParticleState || v9 != *((_DWORD *)p_pParticleState - 1) || v8 != *((_DWORD *)p_pParticleState + 4) )
        {
          ++v12;
          p_pParticleState += 8;
          if ( v12 >= 0x20 )
            goto LABEL_36;
        }
        v14 = (unsigned __int64)v12 << 6;
        v15 = *(&_RBX->m_soundPlayList[0].isLooping + v14);
        v16 = *(unsigned int *)((char *)&_RBX->m_soundPlayList[0].soundId + v14);
        if ( v15 )
          v17 = v16 == -1;
        else
          v17 = v16 == 0;
        if ( !v17 )
        {
          if ( v15 )
          {
            SND_StopVirtualLoopSound(v16);
            v15 = *(&_RBX->m_soundPlayList[0].isLooping + v14);
          }
          *(unsigned int *)((char *)&_RBX->m_soundPlayList[0].soundId + v14) = -(v15 != 0);
          if ( !_RBX->m_soundPlayListCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1819, ASSERT_TYPE_ASSERT, "(m_soundPlayListCount > 0)", (const char *)&queryFormat, "m_soundPlayListCount > 0") )
            __debugbreak();
          --_RBX->m_soundPlayListCount;
        }
LABEL_36:
        ParticleManager::EnableSoundFlag(_RBX, 0, (const ParticleManager::Particle_SoundData *)(p_particleHandle - 9));
        ++v6;
        p_particleHandle += 16;
      }
      while ( v6 < _RBX->m_soundDestroyListCount );
      v5 = v80;
    }
    if ( _RBX->m_soundPlayListCount )
      goto LABEL_40;
  }
  if ( _RBX->m_soundCreateListCount > 0 )
  {
LABEL_40:
    v18 = 0;
    __asm
    {
      vmovaps [rsp+0F8h+var_48], xmm7
      vmovss  xmm7, cs:__real@3f800000
    }
    v20 = 0;
    v75 = 0;
    v21 = 0i64;
    particleSoundIndex = 0;
    v22 = 0i64;
    v78 = 0i64;
    v79 = 0i64;
    __asm { vmovaps [rsp+0F8h+var_38], xmm6 }
    do
    {
      v23 = v21 << 6;
      isLooping = _RBX->m_soundPlayList[v21].isLooping;
      _R15 = &_RBX->m_soundPlayList[v21];
      soundId = _RBX->m_soundPlayList[v21].soundId;
      rSoundData = (ParticleManager::Particle_SoundData *)_R15;
      if ( isLooping )
        v27 = soundId == -1;
      else
        v27 = soundId == 0;
      if ( v27 )
      {
        if ( v18 < _RBX->m_soundCreateListCount )
        {
          if ( _RBX->m_soundPlayListCount >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1901, ASSERT_TYPE_ASSERT, "(m_soundPlayListCount < PARTICLE_MAX_NUM_SOUNDS)", (const char *)&queryFormat, "m_soundPlayListCount < PARTICLE_MAX_NUM_SOUNDS") )
            __debugbreak();
          ++v18;
          _R8 = v22 << 6;
          v75 = v18;
          v79 = v22 + 1;
          v62 = (v5 << 12) + (_RBX->m_soundCreateList[v22].systemHandle & 0xFFF);
          if ( g_particleSystemsGeneration[v62].__all32 == _RBX->m_soundCreateList[v22].systemHandle && g_particleSystems[0][v62] >= (ParticleSystem *)0x1000 )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [r8+rbx+48038h]
              vmovups ymmword ptr [r15], ymm0
              vmovups ymm1, ymmword ptr [r8+rbx+48058h]
              vmovups ymmword ptr [r15+20h], ymm1
            }
            AliasFromId = SND_FindAliasFromId(*(unsigned int *)((char *)&_RBX->m_soundPlayList[0].aliasId + v23));
            v66 = AliasFromId;
            if ( AliasFromId )
            {
              *(&_RBX->m_soundPlayList[0].isLooping + v23) = AliasFromId->head->flags & 1;
              ParticleSndEntHandle = CG_GenerateParticleSndEntHandle(localClientNum, v20);
              if ( *(&_RBX->m_soundPlayList[0].isLooping + v23) )
              {
                __asm
                {
                  vmovaps xmm3, xmm7; volume
                  vmovss  dword ptr [rsp+0F8h+fmt], xmm7
                }
                v69 = SND_PlayVirtualLoopSound(v66, ParticleSndEntHandle, (const vec3_t *)((char *)&_RBX->m_soundPlayList[0].pos + v23), *(const float *)&_XMM3, fmt);
              }
              else
              {
                v70 = ParticleSndEntHandle;
                if ( (ParticleSndEntHandle & 0x1FFFFFFFFi64) > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)ParticleSndEntHandle, "unsigned", ParticleSndEntHandle & 0x1FFFFFFFFi64) )
                  __debugbreak();
                v69 = CgSoundSystem::PlaySoundAliasAtTime(v83, v70, (const vec3_t *)((char *)&_RBX->m_soundPlayList[0].pos + v23), v66, _R15->currentTime);
              }
              *(unsigned int *)((char *)&_RBX->m_soundPlayList[0].soundId + v23) = v69;
              if ( *(&_RBX->m_soundPlayList[0].isLooping + v23) )
                v71 = v69 == -1;
              else
                v71 = v69 == 0;
              if ( !v71 )
              {
                ParticleManager::EnableSoundFlag(_RBX, 1, _R15);
                ++_RBX->m_soundPlayListCount;
              }
            }
            else
            {
              Com_PrintWarning(21, "VFX: Could not find alias from sound name: %s\n", *(const char **)((char *)&_RBX->m_soundPlayList[0].soundName + v23));
            }
          }
        }
      }
      else
      {
        v28 = (v5 << 12) + (*(ParticleSystemHandle *)((_BYTE *)&_RBX->m_soundPlayList[0].systemHandle + v23) & 0xFFF);
        if ( g_particleSystemsGeneration[v28].__all32 == *(ParticleSystemHandle *)((char *)&_RBX->m_soundPlayList[0].systemHandle + v23) && g_particleSystems[0][v28] >= (ParticleSystem *)0x1000 )
        {
          v29 = *(ParticleEmitter **)((char *)&_RBX->m_soundPlayList[0].pParticleEmitter + v23);
          if ( (v29->m_flags & 0x40) != 0 )
          {
            SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(*(ParticleEmitter **)((char *)&_RBX->m_soundPlayList[0].pParticleEmitter + v23));
            Def = ParticleSystem::GetDef(SystemOwner);
            Com_PrintWarning(21, "VFX WARNING: Trying to update a particle sound position when there is no particle data for effect %s\n", Def->name);
            v54 = *(&_RBX->m_soundPlayList[0].isLooping + v23);
            if ( v54 )
            {
              *(unsigned int *)((char *)&_RBX->m_soundPlayList[0].soundId + v23) = -1;
              v55 = -1;
            }
            else
            {
              v54 = 0;
              *(unsigned int *)((char *)&_RBX->m_soundPlayList[0].soundId + v23) = 0;
              v55 = 0;
            }
          }
          else
          {
            m_pParticleData = (*(const ParticleState **)((char *)&_RBX->m_soundPlayList[0].pParticleState + v23))->m_pParticleData;
            if ( !m_pParticleData )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1857, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
                __debugbreak();
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
                __debugbreak();
            }
            if ( !m_pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            ParticleDataArray = ParticleData::GetParticleDataArray(m_pParticleData, PARTICLE_DATA_POSITION);
            v32 = *(unsigned int *)((char *)&_RBX->m_soundPlayList[0].particleHandle + v23);
            v81 = ParticleDataArray;
            if ( !m_pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 376, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            m_particleCountRunning = m_pParticleData->m_particleCountRunning;
            if ( !m_pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            v34 = ParticleData::GetParticleDataArray(m_pParticleData, PARTICLE_DATA_HANDLE);
            if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 380, ASSERT_TYPE_ASSERT, "(handleArray)", (const char *)&queryFormat, "handleArray") )
              __debugbreak();
            v35 = 0;
            if ( m_particleCountRunning )
            {
              while ( v32 != *(_DWORD *)v34 )
              {
                ++v35;
                v34 += 4;
                if ( v35 >= m_particleCountRunning )
                  goto LABEL_93;
              }
              if ( v35 != -1 )
              {
                if ( ((*(const ParticleState **)((char *)&_RBX->m_soundPlayList[0].pParticleState + v23))->m_pStateDef->flags & 2) != 0 || ((*(const ParticleState **)((char *)&_RBX->m_soundPlayList[0].pParticleState + v23))->m_pStateDef->flags & 0x10000000) != 0 )
                {
                  v36 = v29->m_pSystemOwner->m_localClientNum;
                  if ( ((*(const ParticleState **)((char *)&_RBX->m_soundPlayList[0].pParticleState + v23))->m_pStateDef->flags & 0x10000000) != 0 )
                  {
                    if ( v36 >= 2 )
                    {
                      LODWORD(v74) = 2;
                      LODWORD(v73) = v29->m_pSystemOwner->m_localClientNum;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v73, v74) )
                        __debugbreak();
                    }
                  }
                  else if ( v36 >= 2 )
                  {
                    LODWORD(v74) = 2;
                    LODWORD(v73) = v29->m_pSystemOwner->m_localClientNum;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v73, v74) )
                      __debugbreak();
                  }
                }
                else
                {
                  ParticleEmitter::GetSystemOwner(v29);
                }
                v37 = *(__int64 *)((char *)&_RBX->m_soundPlayList[0].pParticleState + v23);
                _RDX = &v81[16 * v35];
                v39 = *(_QWORD *)(v37 + 152);
                if ( !v39 || (*(_BYTE *)(v39 + 4) & 1) != 0 || ((*(_DWORD *)(v39 + 8) - 3) & 0xFFFFFFFD) != 0 )
                {
                  __asm { vmovups xmm6, xmmword ptr [rdx] }
                }
                else
                {
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [rdx]
                    vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
                    vshufps xmm3, xmm0, xmm0, 55h ; 'U'
                    vshufps xmm4, xmm0, xmm0, 0
                    vmulps  xmm0, xmm2, xmmword ptr [rcx+20h]
                    vaddps  xmm2, xmm0, xmmword ptr [rcx+30h]
                    vmulps  xmm0, xmm3, xmmword ptr [rcx+10h]
                    vaddps  xmm1, xmm0, xmm2
                    vmulps  xmm0, xmm4, xmmword ptr [rcx]
                    vaddps  xmm6, xmm0, xmm1
                  }
                }
                if ( (*(_DWORD *)(*(_QWORD *)(v37 + 72) + 16i64) & 0x10000000) != 0 )
                {
                  ParticleEmitter::GetSystemOwner(v29);
                  __asm { vaddps  xmm6, xmm6, xmmword ptr [rax+30h] }
                }
                v17 = !*(&_RBX->m_soundPlayList[0].isLooping + v23);
                __asm
                {
                  vmovss  dword ptr [rsp+0F8h+org], xmm6
                  vextractps dword ptr [rsp+0F8h+org+4], xmm6, 1
                  vextractps dword ptr [rsp+0F8h+org+8], xmm6, 2
                }
                if ( v17 )
                {
                  v53 = CG_GenerateParticleSndEntHandle(localClientNum, particleSoundIndex);
                  updated = SND_SetWorldPosition(*(unsigned int *)((char *)&_RBX->m_soundPlayList[0].soundId + v23), &org, v53);
                }
                else
                {
                  __asm
                  {
                    vmovaps xmm3, xmm7; pitch
                    vmovaps xmm2, xmm7; volume
                  }
                  updated = SND_UpdateVirtualLoopSound(*(unsigned int *)((char *)&_RBX->m_soundPlayList[0].soundId + v23), &org, *(float *)&_XMM2, *(float *)&_XMM3);
                }
                if ( !updated )
                  *(unsigned int *)((char *)&_RBX->m_soundPlayList[0].soundId + v23) = -*(&_RBX->m_soundPlayList[0].isLooping + v23);
              }
            }
LABEL_93:
            v54 = *(&_RBX->m_soundPlayList[0].isLooping + v23);
            v55 = *(unsigned int *)((char *)&_RBX->m_soundPlayList[0].soundId + v23);
            _R15 = rSoundData;
            v20 = particleSoundIndex;
          }
          if ( v54 )
            v58 = v55 == -1;
          else
            v58 = v55 == 0;
          if ( v58 )
          {
            ParticleManager::EnableSoundFlag(_RBX, 0, _R15);
            --_RBX->m_soundPlayListCount;
          }
          v18 = v75;
        }
        else
        {
          if ( isLooping )
          {
            SND_StopVirtualLoopSound(soundId);
            isLooping = *(&_RBX->m_soundPlayList[0].isLooping + v23);
          }
          *(unsigned int *)((char *)&_RBX->m_soundPlayList[0].soundId + v23) = -isLooping;
        }
      }
      v22 = v79;
      v21 = v78 + 1;
      v5 = v80;
      particleSoundIndex = ++v20;
      ++v78;
    }
    while ( v20 < 0x20 );
    __asm
    {
      vmovaps xmm7, [rsp+0F8h+var_48]
      vmovaps xmm6, [rsp+0F8h+var_38]
    }
    if ( v18 != _RBX->m_soundCreateListCount )
      Com_PrintWarning(21, "VFX: The max limit of %d effects sounds has been reached. %d pending effect sounds will not be spawned\n", 32i64, (unsigned int)(_RBX->m_soundCreateListCount - v18));
    _RBX->m_soundCreateListCount = 0;
    _RBX->m_soundDestroyListCount = 0;
  }
  if ( _RBX->m_soundPlayListCount > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1956, ASSERT_TYPE_ASSERT, "(m_soundPlayListCount <= PARTICLE_MAX_NUM_SOUNDS)", (const char *)&queryFormat, "m_soundPlayListCount <= PARTICLE_MAX_NUM_SOUNDS") )
    __debugbreak();
}

/*
==============
ParticleManager::ValidateSystem
==============
*/
void ParticleManager::ValidateSystem(ParticleManager *this, const ParticleSystem *pSystem)
{
  __int64 v3; 
  int v4; 

  if ( !pSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 737, ASSERT_TYPE_ASSERT, "(pSystem)", (const char *)&queryFormat, "pSystem") )
    __debugbreak();
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 739, ASSERT_TYPE_ASSERT, "(m_isRunning)", (const char *)&queryFormat, "m_isRunning") )
    __debugbreak();
  if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 740, ASSERT_TYPE_ASSERT, "(m_pSystems != 0)", (const char *)&queryFormat, "m_pSystems != NULL") )
    __debugbreak();
  if ( this->m_numSystemsRunning <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 742, ASSERT_TYPE_ASSERT, "(m_numSystemsRunning > 0)", (const char *)&queryFormat, "m_numSystemsRunning > 0") )
    __debugbreak();
  if ( this->m_numSystemsRunning >= 0x1001u )
  {
    v4 = 4097;
    LODWORD(v3) = this->m_numSystemsRunning;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 743, ASSERT_TYPE_ASSERT, "(unsigned)( m_numSystemsRunning ) < (unsigned)( PARTICLE_SYSTEM_COUNT_MAX + 1 )", "m_numSystemsRunning doesn't index PARTICLE_SYSTEM_COUNT_MAX + 1\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
}

/*
==============
ParticleSystemHandleManager::release
==============
*/
void ParticleSystemHandleManager::release(ParticleSystemHandleManager *this, ParticleSystemHandle handle)
{
  __int16 v2; 
  int v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 

  v2 = handle;
  if ( !this->m_numAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3250, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  v4 = v2 & 0xFFF;
  if ( (v2 & 0xFFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3253, ASSERT_TYPE_ASSERT, "(handleImpl._index > 0)", (const char *)&queryFormat, "handleImpl._index > 0") )
    __debugbreak();
  v5 = ((unsigned __int64)this->m_localClientNum << 12) + (v2 & 0xFFF);
  g_particleSystemsGeneration[v5].__all32 += 4096;
  v6 = this->m_freelistEnqueue + ((unsigned __int64)this->m_localClientNum << 12);
  LODWORD(g_particleSystems[0][v6]) = v4;
  HIDWORD(g_particleSystems[0][v6]) = 0;
  --this->m_numAllocated;
  this->m_freelistEnqueue = v4;
}

