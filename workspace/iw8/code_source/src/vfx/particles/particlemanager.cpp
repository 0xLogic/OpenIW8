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
  float4 *m_globalTints; 
  __int64 v8; 

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
  m_globalTints = this->m_globalTints;
  v8 = 3i64;
  do
  {
    *m_globalTints++ = (float4)_xmm;
    --v8;
  }
  while ( v8 );
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
    _XMM1 = origin->v;
    *(float *)((char *)_RSI->m_soundCreateList[0].pos.v + _RBX) = COERCE_FLOAT(*origin);
    __asm
    {
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
  float4 v12; 
  float4 v13; 
  LocalClientNum_t v16; 
  __m128 v; 
  vector3 emitterOrientationMat; 

  v16 = (int)localClientNum;
  v = emitterOrientationQuat->v;
  Float4UnitQuatToAxis((vector3 *)this, localClientNum);
  emitterOrientationMat.y = (float4)v12.v;
  emitterOrientationMat.x.v = v;
  emitterOrientationMat.z = (float4)v13.v;
  return ParticleManager::AddSystem(this, v16, pSystemDef, emitterPos, &emitterOrientationMat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, (scr_string_t)0, PARTICLE_SYSTEM_INVALID_HANDLE, PARTICLE_SYSTEM_INVALID_HANDLE);
}

/*
==============
ParticleManager::AddSystem
==============
*/
ParticleSystemHandle ParticleManager::AddSystem(ParticleManager *this, const float4 *localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const float4 *emitterOrientationQuat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, scr_string_t boneName)
{
  float4 v13; 
  float4 v14; 
  LocalClientNum_t v17; 
  __m128 v; 
  vector3 emitterOrientationMat; 

  v17 = (int)localClientNum;
  v = emitterOrientationQuat->v;
  Float4UnitQuatToAxis((vector3 *)this, localClientNum);
  emitterOrientationMat.y = (float4)v13.v;
  emitterOrientationMat.x.v = v;
  emitterOrientationMat.z = (float4)v14.v;
  return ParticleManager::AddSystem(this, v17, pSystemDef, emitterPos, &emitterOrientationMat, spawnTimeMsec, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, boneName, PARTICLE_SYSTEM_INVALID_HANDLE, PARTICLE_SYSTEM_INVALID_HANDLE);
}

/*
==============
ParticleManager::AddSystem
==============
*/
ParticleSystemHandle ParticleManager::AddSystem(ParticleManager *this, const float4 *localClientNum, const ParticleSystemDef *pSystemDef, const float4 *emitterPos, const float4 *emitterOrientationQuat, int spawnTimeMsec, ParticleSystemFlags particleSystemFlags, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData)
{
  float4 v9; 
  float4 v10; 
  LocalClientNum_t v13; 
  __m128 v; 
  vector3 emitterOrientationMat; 

  v13 = (int)localClientNum;
  v = emitterOrientationQuat->v;
  Float4UnitQuatToAxis((vector3 *)this, localClientNum);
  emitterOrientationMat.y = (float4)v9.v;
  emitterOrientationMat.x.v = v;
  emitterOrientationMat.z = (float4)v10.v;
  return ParticleManager::AddSystem(this, v13, pSystemDef, emitterPos, &emitterOrientationMat, spawnTimeMsec, particleSystemFlags, 0xFFFu, 0xFFFFu, NULL, pCamera, pMarkSpawnData, (scr_string_t)0, PARTICLE_SYSTEM_INVALID_HANDLE, PARTICLE_SYSTEM_INVALID_HANDLE);
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
  __int128 v8; 
  float4 v9; 
  __m128 v; 
  const float4 *v15; 
  vector3 *v16; 
  FXRegisteredDef outDef; 
  __m256i v19; 
  vector3 emitterOrientationMat; 

  if ( !vfxName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1043, ASSERT_TYPE_ASSERT, "(vfxName)", (const char *)&queryFormat, "vfxName") )
    __debugbreak();
  outDef.m_particleSystemDef = NULL;
  FX_LoadEffect(vfxName, &outDef);
  v = emitterOrientationQuat->v;
  Float4UnitQuatToAxis(v16, v15);
  *(_OWORD *)&v19.m256i_u64[2] = v8;
  *(__m128 *)v19.m256i_i8 = v;
  *(__m256i *)emitterOrientationMat.x.v.m128_f32 = v19;
  emitterOrientationMat.z = (float4)v9.v;
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
  int v12; 
  __int64 v13; 
  ParticleEmitterDef *emitterDefs; 
  __int64 v17; 
  __int64 v18; 
  int v34; 
  ParticleEmitterDef *v35; 
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
  v12 = 0;
  LODWORD(v13) = 0;
  if ( (int)numEmitters > 0 && (unsigned int)numEmitters >= 8 )
  {
    emitterDefs = Def->emitterDefs;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v17 = 0i64;
    v18 = 0i64;
    do
    {
      _XMM0 = emitterDefs[v17].particleCountMax;
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+0C4h], 1
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+164h], 2
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+204h], 3
        vpaddd  xmm1, xmm0, xmm1
      }
      _XMM0 = emitterDefs[v17 + 4].particleCountMax;
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+344h], 1
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+3E4h], 2
        vpinsrd xmm0, xmm0, dword ptr [rcx+r10+484h], 3
      }
      LODWORD(v13) = v13 + 8;
      v17 += 8i64;
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
    }
    v12 = _XMM0;
  }
  v13 = (int)v13;
  v34 = 0;
  if ( (int)v13 < numEmitters )
  {
    if ( numEmitters - (int)v13 >= 2 )
    {
      v35 = Def->emitterDefs;
      v36 = (int)v13;
      v37 = ((unsigned __int64)(numEmitters - (int)v13 - 2) >> 1) + 1;
      v13 = (int)v13 + 2 * v37;
      do
      {
        v9 += v35[v36].particleCountMax;
        v34 += v35[v36 + 1].particleCountMax;
        v36 += 2i64;
        --v37;
      }
      while ( v37 );
    }
    if ( v13 < numEmitters )
      v12 += Def->emitterDefs[v13].particleCountMax;
    v12 += v34 + v9;
  }
  v38 = ParticleSystem::GetDef((ParticleSystem *)particleSystem);
  LODWORD(v40) = m_lastUpdateTime;
  LODWORD(fmt) = m_spawnTime;
  Com_sprintf(line, v5, "%s,%d,%d,%d,%d,%d\n", v38->name, fmt, v40, m_lastUpdateTime - m_spawnTime, numEmitters, v12);
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
  float4 *v7; 
  int v8; 
  int v9; 

  GlobalTintIndex = ParticleSystem::GetGlobalTintIndex((ParticleSystem *)pParticleSystem);
  v6 = GlobalTintIndex;
  if ( GlobalTintIndex >= 3u )
  {
    v9 = 3;
    v8 = GlobalTintIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3236, ASSERT_TYPE_ASSERT, "(unsigned)( globalTintIndex ) < (unsigned)( NUM_GLOBAL_TINTS )", "globalTintIndex doesn't index NUM_GLOBAL_TINTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v7 = result;
  *result = this->m_globalTints[v6];
  return v7;
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
  unsigned __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  ParticleSystem **v11; 
  ParticleSystem **v12; 
  ParticleSystemHandleImpl *v13; 
  unsigned int i; 
  int v15; 
  int RowCount; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  const char *ColumnValueForRow; 
  FxMarkSpawnData v21; 
  __m256i v22; 
  __m256i v23; 
  BucketAllocatorThreadParams threadParams; 
  StringTable *tablePtr; 

  m_localClientNum = this->m_localClientNum;
  v5 = localClientNum;
  if ( this->m_isInitialized )
  {
    if ( m_localClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 220, ASSERT_TYPE_ASSERT, "(m_localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "m_localClientNum != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 221, ASSERT_TYPE_ASSERT, "(m_isRunning)", (const char *)&queryFormat, "m_isRunning") )
      __debugbreak();
  }
  else
  {
    if ( m_localClientNum != LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 226, ASSERT_TYPE_ASSERT, "(m_localClientNum == LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "m_localClientNum == LOCAL_CLIENT_INVALID") )
      __debugbreak();
    if ( this->m_numSystemsRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 228, ASSERT_TYPE_ASSERT, "(m_numSystemsRunning == 0)", (const char *)&queryFormat, "m_numSystemsRunning == 0") )
      __debugbreak();
    if ( this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 229, ASSERT_TYPE_ASSERT, "(m_pSystems == 0)", (const char *)&queryFormat, "m_pSystems == NULL") )
      __debugbreak();
    this->m_localClientNum = v5;
    v7 = 0;
    this->m_numSystemsRunning = 0;
    this->m_deferredChildRemovalCount = 0;
    this->m_archiveState = ARCHIVE_STATE_INACTIVE;
    this->m_isHighPlayerCount = isHighPlayerCount;
    this->m_cameraTransform = (vector4)identityMatrix44;
    this->m_cameraTransformPosOnly = (vector4)identityMatrix44;
    this->m_cameraTransformTranspose = (vector4)identityMatrix44;
    v22 = *(__m256i *)identityMatrix44.m[0].v;
    v23 = *(__m256i *)identityMatrix44.row2.v;
    this->m_cameraTransformPosOnlyTranspose = (vector4)identityMatrix44;
    if ( !ParticleManager::ms_memoryPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3090, ASSERT_TYPE_ASSERT, "(ms_memoryPool != nullptr)", (const char *)&queryFormat, "ms_memoryPool != nullptr") )
      __debugbreak();
    v8 = ParticleManager::ms_memoryPoolSize;
    if ( ParticleManager::ms_memoryPoolSize != 12582912 * (ParticleManager::ms_memoryPoolSize / 0xC00000) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3091, ASSERT_TYPE_ASSERT, "(ms_memoryPoolSize % PARTICLE_SYSTEM_POOL_SIZE == 0)", (const char *)&queryFormat, "ms_memoryPoolSize % PARTICLE_SYSTEM_POOL_SIZE == 0") )
        __debugbreak();
      v8 = ParticleManager::ms_memoryPoolSize;
    }
    v9 = (unsigned int)(12582912 * this->m_localClientNum);
    if ( v9 + 12582912 > v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3094, ASSERT_TYPE_ASSERT, "(memoryOffset + PARTICLE_SYSTEM_POOL_SIZE <= ms_memoryPoolSize)", (const char *)&queryFormat, "memoryOffset + PARTICLE_SYSTEM_POOL_SIZE <= ms_memoryPoolSize") )
      __debugbreak();
    s_particleSystemPool[this->m_localClientNum].pool = &ParticleManager::ms_memoryPool[v9];
    s_particleSystemPool[this->m_localClientNum].poolSize = 12582912;
    s_particleSystemPool[this->m_localClientNum].alignment = 16;
    BlockMemMan_Init(&s_particleSystemPool[this->m_localClientNum]);
    BucketAllocatorThreadParams::BucketAllocatorThreadParams(&threadParams);
    v10 = this->m_localClientNum;
    threadParams.threadSafe = 1;
    threadParams.criticalSection = CRITSECT_BUCKET_ALLOCATOR_PARTICLES;
    BucketAllocator_Init(&s_bucketAllocator[v10], &s_particleSystemPool[v10], ParticleManager::BucketAllocCallback, ParticleManager::BucketFreeCallback, threadParams);
    this->m_isInitialized = 1;
    v11 = (ParticleSystem **)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)v5, 0x8000ui64);
    this->m_pSystems = v11;
    if ( v11 )
    {
      this->m_isRunning = 1;
      this->m_pFxSystem = NULL;
      memset_0(this->m_fxThreadLocks, 0, sizeof(this->m_fxThreadLocks));
      memset_0(this->m_soundCreateList, 0, sizeof(this->m_soundCreateList));
      this->m_soundCreateListCount = 0;
      memset_0(this->m_soundDestroyList, 0, sizeof(this->m_soundDestroyList));
      this->m_soundDestroyListCount = 0;
      memset_0(this->m_soundPlayList, 0, sizeof(this->m_soundPlayList));
      this->m_soundPlayListCount = 0;
      this->m_standardModeGroupId = Particle_HashString("non_rave_mode", 0xDui64);
      this->m_altModeGroupId = Particle_HashString("rave_mode", 9ui64);
      this->m_localPlayerAltModeParticlesInUse = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_LADDER_AIM|0x80);
      v12 = g_particleSystems[v5];
      v13 = &g_particleSystemsGeneration[4096 * v5];
      for ( i = 0; i < 0x1000; *((_DWORD *)v12 - 2) = i )
      {
        *((_DWORD *)v12++ + 1) = 0;
        v15 = v13->__all32 ^ (v13->__all32 ^ i) & 0xFFF;
        ++v13;
        ++i;
        v13[-1].__all32 = v15 + 4096;
      }
      g_particleSystems[v5][0] = NULL;
      g_particleSystemsGeneration[4096 * v5].__all32 = -1;
      this->m_handleManager.m_localClientNum = v5;
      this->m_handleManager.m_numAllocated = 0;
      this->m_handleManager.m_freelistDequeue = 1;
      this->m_handleManager.m_freelistEnqueue = 4095;
      this->m_handleManager.m_restoring = 0;
      ParticleManager::LockCommandStreamProcess(this);
      memset_0(this->m_commandStreamBuf, 0, sizeof(this->m_commandStreamBuf));
      ParticleManager::ResetCmdStream(this);
      ParticleManager::UnlockCommandStreamProcess(this);
      this->m_instancePoolTable = (InstancePoolData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)v5, 0x70ui64);
      this->m_instancePoolLimits = (unsigned int *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)v5, 0x1Cui64);
      StringTable_GetAsset("fx_instance_pools.csv", (const StringTable **)&tablePtr);
      RowCount = StringTable_GetRowCount(tablePtr);
      v17 = RowCount;
      if ( RowCount != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 423, ASSERT_TYPE_ASSERT, "(rowNum == PARTICLE_INSTANCE_POOL_TYPE_COUNT)", "%s\n\tNumber of instance pools in csv does not match with game.", "rowNum == PARTICLE_INSTANCE_POOL_TYPE_COUNT") )
        __debugbreak();
      v18 = v17;
      if ( (int)v17 > 0 )
      {
        v19 = 0i64;
        do
        {
          ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v7++, 1);
          this->m_instancePoolLimits[v19++] = atoi(ColumnValueForRow);
        }
        while ( v19 < v18 );
      }
      FxMarkSpawnData::SetDefaults(&v21);
      this->m_markSpawnDataPool.m_dataPool[0] = v21;
      this->m_markSpawnDataPool.m_dataPoolAllocTable.array[0] |= 0x80000000;
      this->m_markSpawnDataPool.errorCallback = MarkSpawnDataPoolErrorHandler;
    }
    else
    {
      Com_PrintError(21, "Could not allocate %d Particle Systems. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", 4096i64);
      this->m_isRunning = 0;
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

void __fastcall ParticleSystem_RestoreCmd(const void *const data, const float4 *a2, double a3)
{
  __int128 v3; 
  float v5; 
  int v6; 
  __int64 v7; 
  const FxCamera *pCamera; 
  __int128 v9; 
  __m128 v; 
  bool v14; 
  ParticleSystemHandle restoredParticleSystem; 
  int v16; 
  __int64 v17; 
  const orientation_t *boltOffset; 
  ParticleSystemHandle v19; 
  __int64 v20; 
  ParticleSystem *v21; 
  __m256i v22; 
  float4 emitterPos; 
  int v24[3]; 
  tmat33_t<vec3_t> axis; 
  vector3 emitterOrientationMat; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3266, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  v5 = *((float *)data + 5);
  v6 = *((_DWORD *)data + 8);
  v7 = *((_QWORD *)data + 14);
  pCamera = (const FxCamera *)*((_QWORD *)data + 15);
  v9 = *(_OWORD *)((char *)data + 4);
  emitterPos.v.m128_i32[3] = 0;
  v = emitterPos.v;
  v.m128_f32[0] = v5;
  _XMM3 = v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rdi+18h], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+1Ch], 20h ; ' '
  }
  emitterPos.v = _XMM3;
  v14 = (*(_QWORD *)&v6 & 0x200000i64) != 0;
  if ( v14 )
  {
    *(_OWORD *)&a3 = *((unsigned int *)data + 22);
    v24[0] = *((_DWORD *)data + 21);
    v3 = *((unsigned int *)data + 23);
    v24[2] = *((_DWORD *)data + 23);
    v24[1] = SLODWORD(a3);
    QuatToAxis((const vec4_t *)((char *)data + 68), &axis);
  }
  restoredParticleSystem = *(_DWORD *)data;
  Float4UnitQuatToAxis((vector3 *)data, a2);
  v16 = *((_DWORD *)data + 11) - *((_DWORD *)data + 10);
  *(_OWORD *)&v22.m256i_u64[2] = v3;
  *(_OWORD *)v22.m256i_i8 = v9;
  *(__m256i *)emitterOrientationMat.x.v.m128_f32 = v22;
  emitterOrientationMat.z = *(float4 *)&a3;
  if ( v16 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3294, ASSERT_TYPE_ASSERT, "(timeElapsed >= 0)", (const char *)&queryFormat, "timeElapsed >= 0") )
    __debugbreak();
  v17 = *(int *)(v7 + 301132);
  boltOffset = (const orientation_t *)v24;
  if ( v16 > 60000 )
    v16 = 60000;
  if ( !v14 )
    boltOffset = NULL;
  if ( v16 < 0 )
    v16 = 0;
  v19 = ParticleManager::AddSystem((ParticleManager *)v7, (LocalClientNum_t)v17, *((const ParticleSystemDef **)data + 13), &emitterPos, &emitterOrientationMat, -v16, *((ParticleSystemFlags *)data + 4), *((_DWORD *)data + 13), *((_DWORD *)data + 14), boltOffset, pCamera, NULL, *((scr_string_t *)data + 15), *((ParticleSystemHandle *)data + 25), restoredParticleSystem);
  v20 = (v19 & 0xFFF) + (v17 << 12);
  if ( g_particleSystemsGeneration[v20].__all32 != v19 && v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 933, ASSERT_TYPE_ASSERT, "(g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  v21 = g_particleSystems[0][v20];
  if ( v21 )
    ParticleSystem::SetDataFromArchive(v21, (const ParticleSystemSave *)data);
  else
    Com_PrintWarning(21, "WARNING: Could not allocate effect %s on save game restore\n", **((const char ***)data + 13));
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
  if ( !pSystem1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1507, ASSERT_TYPE_ASSERT, "(pSystem1)", (const char *)&queryFormat, "pSystem1") )
    __debugbreak();
  if ( !pSystem2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1508, ASSERT_TYPE_ASSERT, "(pSystem2)", (const char *)&queryFormat, "pSystem2") )
    __debugbreak();
  return pSystem2->m_distanceToCameraSquared < pSystem1->m_distanceToCameraSquared;
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
  MemoryFile *v2; 
  unsigned int m_numSystemsRunning; 
  unsigned int v5; 
  ParticleSystem *v6; 
  ParticleSystemHandleImpl *v7; 
  __int64 v8; 
  unsigned int i; 
  ParticleSystem *v10; 
  float v15; 
  const ParticleSystemDef *Def; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  int p; 
  int v22; 
  vec4_t out; 
  tmat33_t<vec3_t> mat; 
  ParticleSystemHandle m_systemHandle; 
  vec4_t v26; 
  int v27; 
  ParticleSystemFlags m_flags; 
  int m_spawnTime; 
  int m_lastUpdateTime; 
  unsigned int m_loopedFxEnt; 
  int v34; 
  int v35; 
  scr_string_t boneName; 
  int v37; 
  float4 v38; 
  int v39; 
  unsigned __int16 m_occlusionQueryHandle; 
  ParticleSystemHandle m_parentSystemHandle; 

  *(_QWORD *)out.v = memFile;
  v2 = memFile;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2289, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx save buffer");
  this->m_archiveState = ARCHIVE_STATE_SAVING;
  v22 = 0;
  p = 13;
  ParticleManager::LockReadHandleManager(this);
  m_numSystemsRunning = this->m_numSystemsRunning;
  ParticleManager::UnlockReadHandleManager(this);
  v20 = 0;
  v5 = 0;
  if ( m_numSystemsRunning )
  {
    do
    {
      if ( v5 >= this->m_numSystemsRunning )
      {
        LODWORD(v19) = this->m_numSystemsRunning;
        LODWORD(v18) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
        __debugbreak();
      if ( !this->m_pSystems[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
        __debugbreak();
      v6 = this->m_pSystems[v5];
      if ( v6->m_isRunning && (v6->m_flags & 0x10000870) == 0 )
        ++v20;
      ++v5;
    }
    while ( v5 < m_numSystemsRunning );
    v2 = *(MemoryFile **)out.v;
  }
  MemFile_WriteData(v2, 4ui64, &p);
  MemFile_WriteData(v2, 4ui64, &v20);
  MemFile_WriteData(v2, 4ui64, &v22);
  v7 = g_particleSystemsGeneration;
  v8 = 2i64;
  do
  {
    MemFile_WriteData(v2, 0x4000ui64, v7);
    v7 += 4096;
    --v8;
  }
  while ( v8 );
  for ( i = 0; i < m_numSystemsRunning; ++i )
  {
    if ( i >= this->m_numSystemsRunning )
    {
      LODWORD(v19) = this->m_numSystemsRunning;
      LODWORD(v18) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
      __debugbreak();
    if ( !this->m_pSystems[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
      __debugbreak();
    v10 = this->m_pSystems[i];
    if ( v10->m_isRunning && (v10->m_flags & 0x10000870) == 0 )
    {
      if ( v10->m_systemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 196, ASSERT_TYPE_ASSERT, "(m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
        __debugbreak();
      m_systemHandle = v10->m_systemHandle;
      _XMM1.v = (__m128)v10->m_systemTransform.w;
      v27 = _XMM1.v.m128_i32[0];
      __asm
      {
        vextractps [rbp+90h+var_D8], xmm1, 1
        vextractps [rbp+90h+var_D4], xmm1, 2
      }
      _XMM2.v = (__m128)v10->m_systemTransform.y;
      _XMM1.v = (__m128)v10->m_systemTransform.x;
      LODWORD(mat.m[1].v[0]) = _XMM2.v.m128_i32[0];
      __asm
      {
        vextractps dword ptr [rbp+90h+mat+10h], xmm2, 1
        vextractps dword ptr [rbp+90h+mat+14h], xmm2, 2
      }
      _XMM2.v = (__m128)v10->m_systemTransform.z;
      LODWORD(mat.m[2].v[0]) = _XMM2.v.m128_i32[0];
      __asm
      {
        vextractps dword ptr [rbp+90h+mat+1Ch], xmm2, 1
        vextractps dword ptr [rbp+90h+mat+20h], xmm2, 2
      }
      mat.m[0].v[0] = _XMM1.v.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rsp+190h+mat+4], xmm1, 1
        vextractps dword ptr [rsp+190h+mat+8], xmm1, 2
      }
      AxisToQuat(&mat, &out);
      v15 = (float)((float)((float)(out.v[0] * out.v[0]) + (float)(out.v[1] * out.v[1])) + (float)(out.v[2] * out.v[2])) + (float)(out.v[3] * out.v[3]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 272, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", out.v[0], out.v[1], out.v[2], out.v[3], fsqrt(v15)) )
        __debugbreak();
      v26 = out;
      m_spawnTime = v10->m_spawnTime;
      m_flags = v10->m_flags;
      m_lastUpdateTime = v10->m_lastUpdateTime;
      if ( (v10->m_flags & 0x400000) != 0 )
      {
        if ( v10->m_loopedFxEnt == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 202, ASSERT_TYPE_ASSERT, "(m_loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT)", (const char *)&queryFormat, "m_loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT") )
          __debugbreak();
        m_loopedFxEnt = v10->m_loopedFxEnt;
      }
      else
      {
        m_loopedFxEnt = -1;
      }
      if ( (v10->m_flags & 1) != 0 )
      {
        v34 = *(_DWORD *)&v10->m_bolt.FxBoltBase & 0xFFF;
        v35 = (unsigned __int16)(*(_DWORD *)&v10->m_bolt.FxBoltBase >> 14);
        boneName = v10->m_bolt.boneName;
        v37 = (*(_DWORD *)&v10->m_bolt.FxBoltBase >> 12) & 3;
        _XMM1.v = (__m128)v10->m_bolt.offsetPos;
        v39 = _XMM1.v.m128_i32[0];
        __asm
        {
          vextractps [rbp+90h+var_98], xmm1, 1
          vextractps [rbp+90h+var_94], xmm1, 2
        }
        v38.v = (__m128)v10->m_bolt.offsetQuat;
      }
      else
      {
        v34 = 4095;
        v35 = 0xFFFF;
      }
      m_occlusionQueryHandle = v10->m_occlusionQueryHandle;
      if ( (v10->m_flags & 0x800) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2373, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VFX Save: Deadcode. Should not be executed.") )
          __debugbreak();
        if ( v10->m_parentSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 199, ASSERT_TYPE_ASSERT, "(m_parentSystemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_parentSystemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
          __debugbreak();
        m_parentSystemHandle = v10->m_parentSystemHandle;
      }
      else
      {
        m_parentSystemHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
      Def = ParticleSystem::GetDef(v10);
      MemFile_WriteCString(v2, Def->name);
      MemFile_WriteData(v2, 0x68ui64, &m_systemHandle);
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
  int v6; 
  int v7; 

  if ( tintIndex >= 3u )
  {
    v7 = 3;
    v6 = tintIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 3243, ASSERT_TYPE_ASSERT, "(unsigned)( tintIndex ) < (unsigned)( NUM_GLOBAL_TINTS )", "tintIndex doesn't index NUM_GLOBAL_TINTS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  this->m_globalTints[tintIndex] = (float4)tint->v;
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
  __int16 v9; 
  int v10; 
  bool Bool_Internal; 
  int j; 
  ParticleSystem *v13; 
  ParticleSystem *v14; 
  ParticleSystemFlags m_flags; 
  bool v16; 
  int k; 
  __int64 v18; 
  ParticleSystem *v19; 
  __int64 v20; 
  __int64 v21; 
  __int16 v22; 
  int v23; 
  unsigned int v24; 
  int v25; 
  unsigned int v26; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 456, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( this->m_enableUpdate && pCamera->frustumPlaneCount )
  {
    if ( particle_enable->current.enabled && particle_update->current.enabled )
    {
      if ( this->m_isRunning )
      {
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
        v22 = _ET0;
        v9 = v22;
        __asm { vstmxcsr [rsp+108h+arg_0] }
        v10 = v9 & 0x1F80;
        v24 = v23 & 0xFFFFE07F | 0x1800;
        __asm { vldmxcsr [rsp+108h+arg_0] }
        Bool_Internal = Dvar_GetBool_Internal(particle_parent_updates_child);
        for ( j = Sys_InterlockedIncrement(&this->m_updateIndexUpdate); j < this->m_numSystemsUpdate; j = Sys_InterlockedIncrement(&this->m_updateIndexUpdate) )
        {
          v13 = ParticleManager::GetParticleSystemByIndex(this, j);
          v14 = v13;
          v16 = 0;
          if ( v13->m_isRunning )
          {
            m_flags = v13->m_flags;
            if ( (m_flags & 0x30) == 0 && (BYTE2(m_flags) & 1) == 0 )
              v16 = 1;
          }
          if ( v16 && (!Bool_Internal && (v14->m_flags & 0x4000000) == 0 || (v14->m_flags & 0x1000) == 0) )
            ParticleSystem::Update(v14, currentTime, pCamera, 0);
        }
        __asm { vstmxcsr [rsp+108h+arg_0] }
        v26 = v10 | v25 & 0xFFFFE07F;
        __asm { vldmxcsr [rsp+108h+arg_0] }
        Sys_ProfEndNamedEvent();
      }
    }
    else
    {
      for ( k = Sys_InterlockedIncrement(&this->m_updateIndexSetLastUpdateTime); k < this->m_numSystemsUpdate; k = _InterlockedIncrement(&this->m_updateIndexSetLastUpdateTime) )
      {
        if ( (unsigned int)k >= this->m_numSystemsRunning )
        {
          LODWORD(v21) = this->m_numSystemsRunning;
          LODWORD(v20) = k;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
          __debugbreak();
        v18 = k;
        if ( !this->m_pSystems[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
          __debugbreak();
        v19 = this->m_pSystems[v18];
        if ( v19->m_isRunning )
          v19->m_lastUpdateTime = currentTime;
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
void ParticleManager::UpdateBoltingAndDrawLights(ParticleManager *this, float dt)
{
  FxSystem *m_pFxSystem; 
  team_t team; 
  FxCamera *p_camera; 
  volatile int *p_m_updateIndexBolting; 
  int i; 
  ParticleSystem *v8; 
  ParticleSystemFlags m_flags; 
  const char *string; 
  const ParticleSystemDef *Def; 
  __int64 v12; 
  __int64 v13; 

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
      LODWORD(v13) = this->m_numSystemsRunning;
      LODWORD(v12) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numSystemsRunning )", "index doesn't index m_numSystemsRunning\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( !this->m_pSystems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 717, ASSERT_TYPE_ASSERT, "(m_pSystems)", (const char *)&queryFormat, "m_pSystems") )
      __debugbreak();
    if ( !this->m_pSystems[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 718, ASSERT_TYPE_ASSERT, "(m_pSystems[index])", (const char *)&queryFormat, "m_pSystems[index]") )
      __debugbreak();
    v8 = this->m_pSystems[i];
    if ( v8->m_isRunning )
    {
      m_flags = v8->m_flags;
      if ( (m_flags & 0x31) == 1 && (BYTE2(m_flags) & 1) == 0 )
        ParticleSystem::UpdateBolting(v8, dt);
    }
    if ( (ParticleSystem::GetDef(v8)->flags & 4) != 0 && ParticleSystem::CanDraw(v8) && ((v8->m_flags & 0x200) == 0 || team == TEAM_TWO) && ((v8->m_flags & 0x400) == 0 || team == TEAM_ONE) )
    {
      if ( !particle_use_filter->current.enabled || (string = particle_profile_filter->current.string, Def = ParticleSystem::GetDef(v8), strstr_0(Def->name, string)) )
        ParticleSystem::DrawLights(v8, p_camera);
    }
    if ( (((_BYTE)this + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_updateIndexBolting) )
      __debugbreak();
  }
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
  char *v72; 
  char *v73; 
  char **v74; 
  int v75; 
  vec3_t *outOrigins; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  unsigned int v80; 
  int v81; 
  int v82; 
  int v83; 
  DObj *obj; 
  int v85; 
  int v86; 
  __int64 v87; 
  __int64 v88; 
  _BYTE v90[64]; 
  int boneIndices; 
  char v92[508]; 
  vec3_t v93; 
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
  v83 = v2;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(outOrigins) = *v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outOrigins, 2) )
      __debugbreak();
  }
  v3 = v1[4];
  v4 = v2;
  v88 = v2;
  v87 = 314624 * v2;
  v86 = v3;
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
      v81 = _R13;
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
      v81 = _R13;
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
          LODWORD(v2) = v83;
          v4 = v88;
          v81 = _R13;
          break;
        }
      }
    }
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx get bone orientations dobj");
    if ( (unsigned int)_R13 >= 0x9E5 )
    {
      LODWORD(v77) = 2533;
      LODWORD(outOrigins) = _R13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2949, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", outOrigins, v77) )
        __debugbreak();
    }
    v20 = s_numBonesUsed[v4][(int)_R13];
    v80 = v20;
    if ( v20 - 1 > 0x7E )
    {
      LODWORD(v79) = 128;
      LODWORD(v78) = _R13;
      LODWORD(v77) = s_numBonesUsed[v4][(int)_R13];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2951, ASSERT_TYPE_ASSERT, "(( boneCount > 0 ) && ( boneCount < PARTICLE_BONE_CACHE_MAX_NUM_BONES ))", "%s\n\tbonecount (%u) for dobjHandle %d exceeds PARTICLE_BONE_CACHE_MAX_NUM_BONES (%u) or is zero.\n", "( boneCount > 0 ) && ( boneCount < PARTICLE_BONE_CACHE_MAX_NUM_BONES )", v77, v78, v79) )
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
        v20 = v80;
      }
      boneIndices = _RBX;
      if ( (unsigned int)_RBX >= 0xFE )
      {
LABEL_126:
        LODWORD(v77) = 254;
        LODWORD(outOrigins) = _RBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2979, ASSERT_TYPE_ASSERT, "(unsigned)( boneList[0] ) < (unsigned)( DOBJ_MAX_PARTS )", "boneList[0] doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", outOrigins, v77) )
          __debugbreak();
      }
      if ( v20 <= 1 )
        goto LABEL_151;
      v52 = v92;
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
              LODWORD(v77) = 254;
              LODWORD(outOrigins) = v63;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2983, ASSERT_TYPE_ASSERT, "(unsigned)( boneList[bone] ) < (unsigned)( DOBJ_MAX_PARTS )", "boneList[bone] doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", outOrigins, v77) )
                __debugbreak();
            }
            ++p_boneIndices;
            v52 += 4;
            if ( !--v54 )
            {
              LODWORD(_R13) = v81;
              LODWORD(v2) = v83;
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
      LODWORD(v77) = _R13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v77) )
        __debugbreak();
    }
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v77) = 2;
      LODWORD(outOrigins) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outOrigins, v77) )
        __debugbreak();
    }
    v21 = _R13 + 2533 * v2;
    if ( v21 >= 0x13CA )
    {
      LODWORD(v77) = _R13 + 2533 * v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v77) )
        __debugbreak();
    }
    v22 = clientObjMap[v21];
    if ( v22 )
    {
      if ( v22 >= (unsigned int)s_objCount )
      {
        LODWORD(v77) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v77) )
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
      LODWORD(v77) = 486;
      LODWORD(outOrigins) = _R13 - 2048;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2957, ASSERT_TYPE_ASSERT, "(unsigned)( localDObjIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientOnlyDObjBonesUsed[0] ) ) + 0 ) )", "localDObjIndex doesn't index ARRAY_COUNT( s_clientOnlyDObjBonesUsed[0] )\n\t%i not in [0, %i)", outOrigins, v77) )
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
      v20 = v80;
    }
LABEL_83:
    boneIndices = _RBX;
    v30 = _RBX & 0x7FFF;
    if ( v30 >= 0xFFE )
    {
      LODWORD(v77) = 4094;
      LODWORD(outOrigins) = v30;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2959, ASSERT_TYPE_ASSERT, "(unsigned)( boneList[0] & ((1 << 15) - 1) ) < (unsigned)( DOBJ_MAX_TOTAL_PARTS )", "boneList[0] & CLIENT_BONEINDEX_MASK doesn't index DOBJ_MAX_TOTAL_PARTS\n\t%i not in [0, %i)", outOrigins, v77) )
        __debugbreak();
    }
    v31 = 1;
    if ( v20 > 1 )
    {
      v32 = v20 - 1;
      v85 = v20;
      v33 = v92;
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
          LODWORD(v77) = 4094;
          LODWORD(outOrigins) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2964, ASSERT_TYPE_ASSERT, "(unsigned)( boneList[bone] & ((1 << 15) - 1) ) < (unsigned)( DOBJ_MAX_TOTAL_PARTS )", "boneList[bone] & CLIENT_BONEINDEX_MASK doesn't index DOBJ_MAX_TOTAL_PARTS\n\t%i not in [0, %i)", outOrigins, v77) )
            __debugbreak();
        }
        v43 = *v34;
        if ( v43 >= DObjGetNumBones(obj) )
          *v34 = v43 | 0x8000;
        ++v34;
        v33 += 4;
        if ( !--v32 )
        {
          v31 = v85;
          LODWORD(v2) = v83;
          break;
        }
      }
    }
    v44 = *(_DWORD *)&v92[4 * (v31 - 1) - 4];
    v45 = (unsigned int)(v31 - 1);
    LODWORD(_R13) = v81;
    if ( v44 >= DObjGetNumBones(obj) )
      *(_DWORD *)&v92[4 * v45 - 4] = v44 | 0x8000;
LABEL_150:
    v20 = v80;
LABEL_151:
    FX_GetMultipleBoneOrientations((LocalClientNum_t)v2, _R13, v20, &boneIndices, &outTagMatrices, &v93);
    Sys_EnterCriticalSection(CRITSECT_FX_UPDATE_BONE_HASH);
    if ( v20 )
    {
      v64 = &boneIndices;
      v82 = (_DWORD)_R13 << 16;
      v65 = &v93.v[2];
      p_outTagMatrices = &outTagMatrices;
      v67 = v20;
      v68 = (char *)&g_particleManager[0].m_particleSystemBoneHashMap.m_buckets + v87;
      do
      {
        v69 = *v64 | v82;
        v70 = v69 % 0x1003ui64;
        if ( v70 >= 0x1003 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v71 = &v68[8 * v70];
        v72 = *(char **)v71;
        if ( *(char **)v71 == v71 )
        {
LABEL_162:
          v72 = NULL;
        }
        else
        {
          while ( 1 )
          {
            if ( !v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( *((_DWORD *)v72 + 2) == v69 )
              break;
            v72 = *(char **)v72;
            if ( v72 == v71 )
              goto LABEL_162;
          }
        }
        if ( !v72 )
        {
          v73 = *(char **)v71;
          *(_DWORD *)v90 = v69;
          memset(&v90[4], 0, 48);
          if ( *(char **)v71 == v71 )
          {
LABEL_170:
            v74 = (char **)((char *)&g_particleManager[0].m_particleSystemBoneHashMap.m_freelist + v87);
            if ( !*(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&g_particleManager[0].m_particleSystemBoneHashMap.m_freelist.m_head.mp_next + v87) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
              if ( !*v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
            }
            if ( *v74 == (char *)v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x40ui64, 0x1000ui64) )
              __debugbreak();
            v72 = *v74;
            *v74 = *(char **)*v74;
            *(__m256i *)(v72 + 8) = *(__m256i *)v90;
            *(_OWORD *)(v72 + 40) = *(_OWORD *)&v90[32];
            *(_QWORD *)v72 = 0i64;
            *((_DWORD *)v72 + 14) = *(_DWORD *)&v90[48];
            *(_QWORD *)v72 = *(_QWORD *)v71;
            *(_QWORD *)v71 = v72;
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
            v72 = NULL;
          }
          ++*(unsigned __int64 *)((char *)&g_particleManager[0].m_particleSystemBoneHashMap.m_currentNumItems + v87);
          if ( !v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 331, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
            __debugbreak();
        }
        MatrixCopy33(p_outTagMatrices++, (tmat33_t<vec3_t> *)(v72 + 24));
        v68 = (char *)&g_particleManager[0].m_particleSystemBoneHashMap.m_buckets + v87;
        ++v64;
        *((float *)v72 + 3) = *(v65 - 2);
        *((float *)v72 + 4) = *(v65 - 1);
        v75 = *(_DWORD *)v65;
        v65 += 3;
        *((_DWORD *)v72 + 5) = v75;
        --v67;
      }
      while ( v67 );
      LODWORD(v2) = v83;
    }
    Sys_LeaveCriticalSection(CRITSECT_FX_UPDATE_BONE_HASH);
    Sys_ProfEndNamedEvent();
    v1 = (int *)cmdInfo;
    v3 = v86;
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
void ParticleManager::UpdateCachedCameraTransform(ParticleManager *this, const FxCamera *pCamera)
{
  __int128 v5; 
  __int128 v9; 
  __int128 v13; 
  float4 v18; 
  float4 v19; 
  float4 v20; 
  float4 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  float4 v28; 
  float4 v29; 
  float4 v30; 
  float4 v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m256i v36; 
  __m256i v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2564, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( pCamera->isValid )
  {
    HIDWORD(v38) = 0;
    v5 = v38;
    *(float *)&v5 = pCamera->axis.m[0].v[0];
    _XMM3 = v5;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rbx+74h], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+78h], 20h ; ' '
    }
    this->m_cameraTransform.x = (float4)_XMM3.v;
    HIDWORD(v39) = 0;
    v9 = v39;
    *(float *)&v9 = pCamera->axis.m[1].v[0];
    _XMM3 = v9;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rbx+80h], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+84h], 20h ; ' '
    }
    this->m_cameraTransform.y = (float4)_XMM3.v;
    HIDWORD(v40) = 0;
    v13 = v40;
    *(float *)&v13 = pCamera->axis.m[2].v[0];
    _XMM3 = v13;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rbx+8Ch], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+90h], 20h ; ' '
    }
    this->m_cameraTransform.z = (float4)_XMM3.v;
    this->m_cameraTransform.w = (float4)(*(_OWORD *)&g_one.v & *(_OWORD *)&g_keepW.v);
    _XMM0 = *(_OWORD *)pCamera->origin.v;
    __asm { vinsertps xmm1, xmm0, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0' }
    this->m_cameraTransform.w = (float4)_XMM1.v;
    v18.v = (__m128)this->m_cameraTransform.z;
    v19.v = (__m128)this->m_cameraTransform.w;
    v20.v = (__m128)this->m_cameraTransform.x;
    v21.v = (__m128)this->m_cameraTransform.y;
    v22 = _mm_shuffle_ps(v18.v, v19.v, 68);
    v23 = _mm_shuffle_ps(v18.v, v19.v, 238);
    v24 = _mm_shuffle_ps(v20.v, v21.v, 68);
    *(__m128 *)v36.m256i_i8 = _mm_shuffle_ps(v24, v22, 136);
    v25 = _mm_shuffle_ps(v20.v, v21.v, 238);
    *(__m128 *)&v36.m256i_u64[2] = _mm_shuffle_ps(v24, v22, 221);
    *(__m128 *)v37.m256i_i8 = _mm_shuffle_ps(v25, v23, 136);
    *(__m256i *)this->m_cameraTransformTranspose.x.v.m128_f32 = v36;
    *(__m128 *)&v37.m256i_u64[2] = _mm_shuffle_ps(v25, v23, 221);
    *(__m256i *)this->m_cameraTransformTranspose.z.v.m128_f32 = v37;
    this->m_cameraTransformPosOnly = (vector4)identityMatrix44;
    _XMM0 = *(_OWORD *)pCamera->origin.v;
    __asm { vinsertps xmm1, xmm0, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0' }
    this->m_cameraTransformPosOnly.w = (float4)_XMM1.v;
    v28.v = (__m128)this->m_cameraTransformPosOnly.w;
    v29.v = (__m128)this->m_cameraTransformPosOnly.z;
    v30.v = (__m128)this->m_cameraTransformPosOnly.x;
    v31.v = (__m128)this->m_cameraTransformPosOnly.y;
    v32 = _mm_shuffle_ps(v29.v, v28.v, 68);
    v33 = _mm_shuffle_ps(v29.v, v28.v, 238);
    v34 = _mm_shuffle_ps(v30.v, v31.v, 68);
    v35 = _mm_shuffle_ps(v30.v, v31.v, 238);
    *(__m128 *)v36.m256i_i8 = _mm_shuffle_ps(v34, v32, 136);
    *(__m128 *)&v36.m256i_u64[2] = _mm_shuffle_ps(v34, v32, 221);
    *(__m128 *)v37.m256i_i8 = _mm_shuffle_ps(v35, v33, 136);
    *(__m256i *)this->m_cameraTransformPosOnlyTranspose.x.v.m128_f32 = v36;
    *(__m128 *)&v37.m256i_u64[2] = _mm_shuffle_ps(v35, v33, 221);
    *(__m256i *)this->m_cameraTransformPosOnlyTranspose.z.v.m128_f32 = v37;
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
  __int128 v1; 
  __int128 v2; 
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
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  bool isLooping; 
  ParticleManager::Particle_SoundData *v24; 
  int soundId; 
  bool v26; 
  __int64 v27; 
  ParticleEmitter *v28; 
  ParticleData *m_pParticleData; 
  unsigned __int8 *ParticleDataArray; 
  int v31; 
  unsigned int m_particleCountRunning; 
  unsigned __int8 *v33; 
  unsigned int v34; 
  const ParticleSystem *v35; 
  __int64 v36; 
  vector4 *p_m_cameraTransformPosOnly; 
  __int64 v38; 
  __m128 *v39; 
  __int64 v40; 
  __m128 v41; 
  bool updated; 
  unsigned __int64 v44; 
  char v45; 
  int v46; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  bool v49; 
  __int64 v50; 
  __int64 v51; 
  SndAliasList *AliasFromId; 
  const SndAliasList *v53; 
  unsigned __int64 ParticleSndEntHandle; 
  unsigned int v55; 
  int v56; 
  bool v57; 
  __int64 v58; 
  __int64 v59; 
  volatile int v60; 
  int particleSoundIndex; 
  LocalClientNum_t localClientNum; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  unsigned __int8 *v66; 
  ParticleManager::Particle_SoundData *rSoundData; 
  CgSoundSystem *v68; 
  vec3_t org; 
  __int128 v70; 
  __int128 v71; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1798, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(v59) = CgSoundSystem::ms_allocatedCount;
    LODWORD(v58) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v65 = m_localClientNum;
  v5 = m_localClientNum;
  if ( !CgSoundSystem::ms_soundSystemArray[m_localClientNum] )
  {
    LODWORD(v59) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v59) )
      __debugbreak();
  }
  v68 = CgSoundSystem::ms_soundSystemArray[m_localClientNum];
  if ( this->m_soundPlayListCount )
  {
    v6 = 0;
    if ( this->m_soundDestroyListCount > 0 )
    {
      p_particleHandle = &this->m_soundDestroyList[0].particleHandle;
      do
      {
        v8 = p_particleHandle[5];
        v9 = *p_particleHandle;
        v10 = *(const ParticleState **)(p_particleHandle + 1);
        v11 = *(const ParticleState **)(p_particleHandle + 3);
        if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 2596, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
          __debugbreak();
        v12 = 0;
        p_pParticleState = &this->m_soundPlayList[0].pParticleState;
        while ( v11 != p_pParticleState[1] || v10 != *p_pParticleState || v9 != *((_DWORD *)p_pParticleState - 1) || v8 != *((_DWORD *)p_pParticleState + 4) )
        {
          ++v12;
          p_pParticleState += 8;
          if ( v12 >= 0x20 )
            goto LABEL_36;
        }
        v14 = (unsigned __int64)v12 << 6;
        v15 = *(&this->m_soundPlayList[0].isLooping + v14);
        v16 = *(unsigned int *)((char *)&this->m_soundPlayList[0].soundId + v14);
        if ( v15 )
          v17 = v16 == -1;
        else
          v17 = v16 == 0;
        if ( !v17 )
        {
          if ( v15 )
          {
            SND_StopVirtualLoopSound(v16);
            v15 = *(&this->m_soundPlayList[0].isLooping + v14);
          }
          *(unsigned int *)((char *)&this->m_soundPlayList[0].soundId + v14) = -(v15 != 0);
          if ( !this->m_soundPlayListCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1819, ASSERT_TYPE_ASSERT, "(m_soundPlayListCount > 0)", (const char *)&queryFormat, "m_soundPlayListCount > 0") )
            __debugbreak();
          --this->m_soundPlayListCount;
        }
LABEL_36:
        ParticleManager::EnableSoundFlag(this, 0, (const ParticleManager::Particle_SoundData *)(p_particleHandle - 9));
        ++v6;
        p_particleHandle += 16;
      }
      while ( v6 < this->m_soundDestroyListCount );
      v5 = v65;
    }
    if ( this->m_soundPlayListCount )
      goto LABEL_40;
  }
  if ( this->m_soundCreateListCount > 0 )
  {
LABEL_40:
    v18 = 0;
    v70 = v2;
    v19 = 0;
    v60 = 0;
    v20 = 0i64;
    particleSoundIndex = 0;
    v21 = 0i64;
    v63 = 0i64;
    v64 = 0i64;
    v71 = v1;
    do
    {
      v22 = v20 << 6;
      isLooping = this->m_soundPlayList[v20].isLooping;
      v24 = &this->m_soundPlayList[v20];
      soundId = this->m_soundPlayList[v20].soundId;
      rSoundData = v24;
      if ( isLooping )
        v26 = soundId == -1;
      else
        v26 = soundId == 0;
      if ( v26 )
      {
        if ( v18 < this->m_soundCreateListCount )
        {
          if ( this->m_soundPlayListCount >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1901, ASSERT_TYPE_ASSERT, "(m_soundPlayListCount < PARTICLE_MAX_NUM_SOUNDS)", (const char *)&queryFormat, "m_soundPlayListCount < PARTICLE_MAX_NUM_SOUNDS") )
            __debugbreak();
          ++v18;
          v50 = v21 << 6;
          v60 = v18;
          v64 = v21 + 1;
          v51 = (v5 << 12) + (this->m_soundCreateList[v21].systemHandle & 0xFFF);
          if ( g_particleSystemsGeneration[v51].__all32 == this->m_soundCreateList[v21].systemHandle && g_particleSystems[0][v51] >= (ParticleSystem *)0x1000 )
          {
            *(__m256i *)&v24->currentTime = *(__m256i *)((char *)&this->m_soundCreateList[0].currentTime + v50);
            *(__m256i *)&v24->pos.z = *(__m256i *)((char *)&this->m_soundCreateList[0].pos.z + v50);
            AliasFromId = SND_FindAliasFromId(*(unsigned int *)((char *)&this->m_soundPlayList[0].aliasId + v22));
            v53 = AliasFromId;
            if ( AliasFromId )
            {
              *(&this->m_soundPlayList[0].isLooping + v22) = AliasFromId->head->flags & 1;
              ParticleSndEntHandle = CG_GenerateParticleSndEntHandle(localClientNum, v19);
              if ( *(&this->m_soundPlayList[0].isLooping + v22) )
              {
                v55 = SND_PlayVirtualLoopSound(v53, ParticleSndEntHandle, (const vec3_t *)((char *)&this->m_soundPlayList[0].pos + v22), 1.0, 1.0);
              }
              else
              {
                v56 = ParticleSndEntHandle;
                if ( (ParticleSndEntHandle & 0x1FFFFFFFFi64) > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)ParticleSndEntHandle, "unsigned", ParticleSndEntHandle & 0x1FFFFFFFFi64) )
                  __debugbreak();
                v55 = CgSoundSystem::PlaySoundAliasAtTime(v68, v56, (const vec3_t *)((char *)&this->m_soundPlayList[0].pos + v22), v53, v24->currentTime);
              }
              *(unsigned int *)((char *)&this->m_soundPlayList[0].soundId + v22) = v55;
              if ( *(&this->m_soundPlayList[0].isLooping + v22) )
                v57 = v55 == -1;
              else
                v57 = v55 == 0;
              if ( !v57 )
              {
                ParticleManager::EnableSoundFlag(this, 1, v24);
                ++this->m_soundPlayListCount;
              }
            }
            else
            {
              Com_PrintWarning(21, "VFX: Could not find alias from sound name: %s\n", *(const char **)((char *)&this->m_soundPlayList[0].soundName + v22));
            }
          }
        }
      }
      else
      {
        v27 = (v5 << 12) + (*(ParticleSystemHandle *)((_BYTE *)&this->m_soundPlayList[0].systemHandle + v22) & 0xFFF);
        if ( g_particleSystemsGeneration[v27].__all32 == *(ParticleSystemHandle *)((char *)&this->m_soundPlayList[0].systemHandle + v22) && g_particleSystems[0][v27] >= (ParticleSystem *)0x1000 )
        {
          v28 = *(ParticleEmitter **)((char *)&this->m_soundPlayList[0].pParticleEmitter + v22);
          if ( (v28->m_flags & 0x40) != 0 )
          {
            SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(*(ParticleEmitter **)((char *)&this->m_soundPlayList[0].pParticleEmitter + v22));
            Def = ParticleSystem::GetDef(SystemOwner);
            Com_PrintWarning(21, "VFX WARNING: Trying to update a particle sound position when there is no particle data for effect %s\n", Def->name);
            v45 = *(&this->m_soundPlayList[0].isLooping + v22);
            if ( v45 )
            {
              *(unsigned int *)((char *)&this->m_soundPlayList[0].soundId + v22) = -1;
              v46 = -1;
            }
            else
            {
              v45 = 0;
              *(unsigned int *)((char *)&this->m_soundPlayList[0].soundId + v22) = 0;
              v46 = 0;
            }
          }
          else
          {
            m_pParticleData = (*(const ParticleState **)((char *)&this->m_soundPlayList[0].pParticleState + v22))->m_pParticleData;
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
            v31 = *(unsigned int *)((char *)&this->m_soundPlayList[0].particleHandle + v22);
            v66 = ParticleDataArray;
            if ( !m_pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 376, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            m_particleCountRunning = m_pParticleData->m_particleCountRunning;
            if ( !m_pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            v33 = ParticleData::GetParticleDataArray(m_pParticleData, PARTICLE_DATA_HANDLE);
            if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 380, ASSERT_TYPE_ASSERT, "(handleArray)", (const char *)&queryFormat, "handleArray") )
              __debugbreak();
            v34 = 0;
            if ( m_particleCountRunning )
            {
              while ( v31 != *(_DWORD *)v33 )
              {
                ++v34;
                v33 += 4;
                if ( v34 >= m_particleCountRunning )
                  goto LABEL_95;
              }
              if ( v34 != -1 )
              {
                if ( ((*(const ParticleState **)((char *)&this->m_soundPlayList[0].pParticleState + v22))->m_pStateDef->flags & 2) != 0 || ((*(const ParticleState **)((char *)&this->m_soundPlayList[0].pParticleState + v22))->m_pStateDef->flags & 0x10000000) != 0 )
                {
                  v36 = v28->m_pSystemOwner->m_localClientNum;
                  if ( ((*(const ParticleState **)((char *)&this->m_soundPlayList[0].pParticleState + v22))->m_pStateDef->flags & 0x10000000) != 0 )
                  {
                    if ( (unsigned int)v36 >= 2 )
                    {
                      LODWORD(v59) = 2;
                      LODWORD(v58) = v28->m_pSystemOwner->m_localClientNum;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v58, v59) )
                        __debugbreak();
                    }
                    p_m_cameraTransformPosOnly = &g_particleManager[0].m_cameraTransformPosOnly;
                  }
                  else
                  {
                    if ( (unsigned int)v36 >= 2 )
                    {
                      LODWORD(v59) = 2;
                      LODWORD(v58) = v28->m_pSystemOwner->m_localClientNum;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v58, v59) )
                        __debugbreak();
                    }
                    p_m_cameraTransformPosOnly = &g_particleManager[0].m_cameraTransform;
                  }
                  v35 = (const ParticleSystem *)&p_m_cameraTransformPosOnly[4916 * v36];
                }
                else
                {
                  v35 = ParticleEmitter::GetSystemOwner(v28);
                }
                v38 = *(__int64 *)((char *)&this->m_soundPlayList[0].pParticleState + v22);
                v39 = (__m128 *)&v66[16 * v34];
                v40 = *(_QWORD *)(v38 + 152);
                if ( !v40 || (*(_BYTE *)(v40 + 4) & 1) != 0 || ((*(_DWORD *)(v40 + 8) - 3) & 0xFFFFFFFD) != 0 )
                {
                  _XMM6 = *v39;
                }
                else
                {
                  v41 = *v39;
                  _XMM6 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v41, v41, 0), v35->m_systemTransform.x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v41, v41, 85), v35->m_systemTransform.y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v41, v41, 170), v35->m_systemTransform.z.v), v35->m_systemTransform.w.v)));
                }
                if ( (*(_DWORD *)(*(_QWORD *)(v38 + 72) + 16i64) & 0x10000000) != 0 )
                  _XMM6 = _mm128_add_ps(_XMM6, ParticleEmitter::GetSystemOwner(v28)->m_systemTransform.w.v);
                v17 = !*(&this->m_soundPlayList[0].isLooping + v22);
                org.v[0] = _XMM6.m128_f32[0];
                __asm
                {
                  vextractps dword ptr [rsp+0F8h+org+4], xmm6, 1
                  vextractps dword ptr [rsp+0F8h+org+8], xmm6, 2
                }
                if ( v17 )
                {
                  v44 = CG_GenerateParticleSndEntHandle(localClientNum, particleSoundIndex);
                  updated = SND_SetWorldPosition(*(unsigned int *)((char *)&this->m_soundPlayList[0].soundId + v22), &org, v44);
                }
                else
                {
                  updated = SND_UpdateVirtualLoopSound(*(unsigned int *)((char *)&this->m_soundPlayList[0].soundId + v22), &org, 1.0, 1.0);
                }
                if ( !updated )
                  *(unsigned int *)((char *)&this->m_soundPlayList[0].soundId + v22) = -*(&this->m_soundPlayList[0].isLooping + v22);
              }
            }
LABEL_95:
            v45 = *(&this->m_soundPlayList[0].isLooping + v22);
            v46 = *(unsigned int *)((char *)&this->m_soundPlayList[0].soundId + v22);
            v24 = rSoundData;
            v19 = particleSoundIndex;
          }
          if ( v45 )
            v49 = v46 == -1;
          else
            v49 = v46 == 0;
          if ( v49 )
          {
            ParticleManager::EnableSoundFlag(this, 0, v24);
            --this->m_soundPlayListCount;
          }
          v18 = v60;
        }
        else
        {
          if ( isLooping )
          {
            SND_StopVirtualLoopSound(soundId);
            isLooping = *(&this->m_soundPlayList[0].isLooping + v22);
          }
          *(unsigned int *)((char *)&this->m_soundPlayList[0].soundId + v22) = -isLooping;
        }
      }
      v21 = v64;
      v20 = v63 + 1;
      v5 = v65;
      particleSoundIndex = ++v19;
      ++v63;
    }
    while ( v19 < 0x20 );
    if ( v18 != this->m_soundCreateListCount )
      Com_PrintWarning(21, "VFX: The max limit of %d effects sounds has been reached. %d pending effect sounds will not be spawned\n", 32i64, (unsigned int)(this->m_soundCreateListCount - v18));
    this->m_soundCreateListCount = 0;
    this->m_soundDestroyListCount = 0;
  }
  if ( this->m_soundPlayListCount > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.cpp", 1956, ASSERT_TYPE_ASSERT, "(m_soundPlayListCount <= PARTICLE_MAX_NUM_SOUNDS)", (const char *)&queryFormat, "m_soundPlayListCount <= PARTICLE_MAX_NUM_SOUNDS") )
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

