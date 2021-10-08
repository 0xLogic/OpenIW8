/*
==============
Particle_TrailData::Init
==============
*/

bool __fastcall Particle_TrailData::Init(Particle_TrailData *this, unsigned int _numPointsMax, float _splitDistance, float _splitAngle, unsigned int _numSheets, const ParticleEmitter *pEmitter)
{
  return ?Init@Particle_TrailData@@QEAA_NIMMIPEBVParticleEmitter@@@Z(this, _numPointsMax, _splitDistance, _splitAngle, _numSheets, pEmitter);
}

/*
==============
ParticleState::SortParticles
==============
*/

void __fastcall ParticleState::SortParticles(ParticleState *this, LocalClientNum_t localClientNum, unsigned int numParticlesToBeSorted)
{
  ?SortParticles@ParticleState@@AEAAXW4LocalClientNum_t@@I@Z(this, localClientNum, numParticlesToBeSorted);
}

/*
==============
ParticleState::KillVectorFieldParticles
==============
*/

void __fastcall ParticleState::KillVectorFieldParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner, bool killAll)
{
  ?KillVectorFieldParticles@ParticleState@@QEAAXPEAUParticleData@@IIPEBVParticleEmitter@@_N@Z(this, pParticleData, particleOffset, particleCount, pEmitterOwner, killAll);
}

/*
==============
ParticleState::Update_Runners
==============
*/

void __fastcall ParticleState::Update_Runners(ParticleState *this, float dt, int currentTime, const ParticleEmitter *pEmitterOwner, const FxCamera *pCamera, ParticleData *pParticleData, unsigned int numParticles, const float4 *positionArray, const float4 *sizeArray, const float4 *velocityArray, const float4 *rotationAngleArray, bool hasRotation, const vector4 *rEmitterTransform)
{
  ?Update_Runners@ParticleState@@AEAAXMHPEBVParticleEmitter@@PEBUFxCamera@@PEAUParticleData@@IPEBUfloat4@@333_NAEBUvector4@@@Z(this, dt, currentTime, pEmitterOwner, pCamera, pParticleData, numParticles, positionArray, sizeArray, velocityArray, rotationAngleArray, hasRotation, rEmitterTransform);
}

/*
==============
ParticleState::ApplyModifiers
==============
*/

void __fastcall ParticleState::ApplyModifiers(ParticleState *this, const ParticleSystem *pSystemOwner, ParticleData *pParticleData)
{
  ?ApplyModifiers@ParticleState@@AEAAXPEBVParticleSystem@@PEAUParticleData@@@Z(this, pSystemOwner, pParticleData);
}

/*
==============
ParticleState::UpdateAtlasIndex
==============
*/

void __fastcall ParticleState::UpdateAtlasIndex(ParticleState *this, const ParticleModuleInitAtlas *const pModuleInitAtlas, float dt, float emitterLifeNormalized, unsigned int randomSeed, float particleLife, float *outAtlasIndex)
{
  ?UpdateAtlasIndex@ParticleState@@AEAAXQEBUParticleModuleInitAtlas@@MMIMPEAM@Z(this, pModuleInitAtlas, dt, emitterLifeNormalized, randomSeed, particleLife, outAtlasIndex);
}

/*
==============
Particle_TrailData::Reset
==============
*/

void __fastcall Particle_TrailData::Reset(Particle_TrailData *this)
{
  ?Reset@Particle_TrailData@@QEAAXXZ(this);
}

/*
==============
ParticleState::UpdateVelocityModifier
==============
*/

void __fastcall ParticleState::UpdateVelocityModifier(ParticleState *this, const ParticleSystem *pSystemOwner, ParticleSystem *pChildSystem, const float4 *velocity, const ParticleModifier *velocityMod, ParticleUseVelocityOptions velocityOptions)
{
  ?UpdateVelocityModifier@ParticleState@@AEBAXPEBVParticleSystem@@PEAV2@AEBUfloat4@@AEBUParticleModifier@@W4ParticleUseVelocityOptions@@@Z(this, pSystemOwner, pChildSystem, velocity, velocityMod, velocityOptions);
}

/*
==============
ParticleState::KillGeoTrailParticles
==============
*/

void __fastcall ParticleState::KillGeoTrailParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner, bool killAll)
{
  ?KillGeoTrailParticles@ParticleState@@QEAAXPEAUParticleData@@IIPEBVParticleEmitter@@_N@Z(this, pParticleData, particleOffset, particleCount, pEmitterOwner, killAll);
}

/*
==============
ParticleState::Release
==============
*/

void __fastcall ParticleState::Release(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  ?Release@ParticleState@@QEAAXPEAUParticleData@@PEBVParticleEmitter@@@Z(this, pParticleData, pEmitterOwner);
}

/*
==============
Particle_TrailData::Release
==============
*/

void __fastcall Particle_TrailData::Release(Particle_TrailData *this, LocalClientNum_t localClientNum)
{
  ?Release@Particle_TrailData@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ParticleState::KillPhysicsModelParticles
==============
*/

void __fastcall ParticleState::KillPhysicsModelParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner, bool killAll)
{
  ?KillPhysicsModelParticles@ParticleState@@QEAAXPEAUParticleData@@IIPEBVParticleEmitter@@_N@Z(this, pParticleData, particleOffset, particleCount, pEmitterOwner, killAll);
}

/*
==============
ParticleState::UpdateVelocityBasedOnVectorFields
==============
*/

void __fastcall ParticleState::UpdateVelocityBasedOnVectorFields(ParticleState *this, float dt, const ParticleEmitter *pEmitterOwner, const float4 *emitterPos)
{
  ?UpdateVelocityBasedOnVectorFields@ParticleState@@AEAAXMPEBVParticleEmitter@@AEBUfloat4@@@Z(this, dt, pEmitterOwner, emitterPos);
}

/*
==============
ParticleState::KillPhysicsModelParticlesAll
==============
*/

void __fastcall ParticleState::KillPhysicsModelParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  ?KillPhysicsModelParticlesAll@ParticleState@@QEAAXPEAUParticleData@@PEBVParticleEmitter@@@Z(this, pParticleData, pEmitterOwner);
}

/*
==============
ParticleState::FreeGroupMemory
==============
*/

void __fastcall ParticleState::FreeGroupMemory(ParticleState *this, unsigned int numGroupsToFree)
{
  ?FreeGroupMemory@ParticleState@@AEAAXI@Z(this, numGroupsToFree);
}

/*
==============
ParticleState::KillGeoTrailParticlesAll
==============
*/

void __fastcall ParticleState::KillGeoTrailParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  ?KillGeoTrailParticlesAll@ParticleState@@QEAAXPEAUParticleData@@PEBVParticleEmitter@@@Z(this, pParticleData, pEmitterOwner);
}

/*
==============
ParticleState::KillPhysicsFXParticlesAll
==============
*/

void __fastcall ParticleState::KillPhysicsFXParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  ?KillPhysicsFXParticlesAll@ParticleState@@QEAAXPEAUParticleData@@PEBVParticleEmitter@@@Z(this, pParticleData, pEmitterOwner);
}

/*
==============
ParticleState::HasModifierModules
==============
*/

bool __fastcall ParticleState::HasModifierModules(ParticleState *this)
{
  return ?HasModifierModules@ParticleState@@AEAA_NXZ(this);
}

/*
==============
ParticleState::ReleaseTailDataList
==============
*/

void __fastcall ParticleState::ReleaseTailDataList(ParticleState *this)
{
  ?ReleaseTailDataList@ParticleState@@AEAAXXZ(this);
}

/*
==============
ParticleState::Update_GeoTrailTangentsAndCameraDist
==============
*/

void __fastcall ParticleState::Update_GeoTrailTangentsAndCameraDist(ParticleState *this, const ParticleEmitter *pEmitterOwner, Particle_TrailData *rTrailData, const float4 *sizeArray, const float4 *positionArray, float *cameraDistanceArray, const FxCamera *pCamera, bool cameraFacing)
{
  ?Update_GeoTrailTangentsAndCameraDist@ParticleState@@AEAAXPEBVParticleEmitter@@AEAUParticle_TrailData@@PEBUfloat4@@2PEAMPEBUFxCamera@@_N@Z(this, pEmitterOwner, rTrailData, sizeArray, positionArray, cameraDistanceArray, pCamera, cameraFacing);
}

/*
==============
ParticleState::UpdateScaleModifier
==============
*/

void __fastcall ParticleState::UpdateScaleModifier(ParticleState *this, const ParticleSystem *pSystemOwner, ParticleSystem *pChildSystem, const float4 *size, const ParticleModifier *scaleMod, ParticleUseScaleOptions scaleOptions)
{
  ?UpdateScaleModifier@ParticleState@@AEBAXPEBVParticleSystem@@PEAV2@AEBUfloat4@@AEBUParticleModifier@@W4ParticleUseScaleOptions@@@Z(this, pSystemOwner, pChildSystem, size, scaleMod, scaleOptions);
}

/*
==============
ParticleState::KillPhysicsPipelineInstanceDeferred
==============
*/

void __fastcall ParticleState::KillPhysicsPipelineInstanceDeferred(ParticleState *this)
{
  ?KillPhysicsPipelineInstanceDeferred@ParticleState@@QEAAXXZ(this);
}

/*
==============
ParticleState::ReleaseParticleSimModelDataList
==============
*/

void __fastcall ParticleState::ReleaseParticleSimModelDataList(ParticleState *this)
{
  ?ReleaseParticleSimModelDataList@ParticleState@@AEAAXXZ(this);
}

/*
==============
ParticleState::KillPhysicsParticles
==============
*/

void __fastcall ParticleState::KillPhysicsParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner, bool killAll)
{
  ?KillPhysicsParticles@ParticleState@@QEAAXPEAUParticleData@@IIPEBVParticleEmitter@@_N@Z(this, pParticleData, particleOffset, particleCount, pEmitterOwner, killAll);
}

/*
==============
Particle_ParticleSimModelData::Release
==============
*/

void __fastcall Particle_ParticleSimModelData::Release(Particle_ParticleSimModelData *this, LocalClientNum_t localClientNum)
{
  ?Release@Particle_ParticleSimModelData@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ParticleState::UpdateLiveTweakingData
==============
*/

void __fastcall ParticleState::UpdateLiveTweakingData(ParticleState *this)
{
  ?UpdateLiveTweakingData@ParticleState@@QEAAXXZ(this);
}

/*
==============
ParticleState::FillImpactData
==============
*/

void __fastcall ParticleState::FillImpactData(ParticleState *this, Particle_OnImpactData *impactData, float4 *position, float4 *normal, float4 *velocity, int surfaceFlags, unsigned int entNum, TraceHitType hitType, scr_string_t partName, float4 *rotationAngleQuat, const ParticleEmitter *pEmitterOwner)
{
  ?FillImpactData@ParticleState@@QEBAXPEAUParticle_OnImpactData@@Ufloat4@@11HIW4TraceHitType@@W4scr_string_t@@1PEBVParticleEmitter@@@Z(this, impactData, position, normal, velocity, surfaceFlags, entNum, hitType, partName, rotationAngleQuat, pEmitterOwner);
}

/*
==============
ParticleState::RequestPhysicsPipelineInstance
==============
*/

void __fastcall ParticleState::RequestPhysicsPipelineInstance(ParticleState *this)
{
  ?RequestPhysicsPipelineInstance@ParticleState@@QEAAXXZ(this);
}

/*
==============
ParticleState::UpdateInternal
==============
*/

void __fastcall ParticleState::UpdateInternal(ParticleState *this, ParticleData *pParticleData, const float dt, const int currentTime, const ParticleEmitter *pEmitterOwner, const FxCamera *pCamera)
{
  ?UpdateInternal@ParticleState@@AEAAXPEAUParticleData@@MHPEBVParticleEmitter@@PEBUFxCamera@@@Z(this, pParticleData, dt, currentTime, pEmitterOwner, pCamera);
}

/*
==============
ParticleState::KillRunnerParticles
==============
*/

void __fastcall ParticleState::KillRunnerParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner, bool killAll, bool fromStateSwitch)
{
  ?KillRunnerParticles@ParticleState@@QEAAXPEAUParticleData@@IIPEBVParticleEmitter@@_N2@Z(this, pParticleData, particleOffset, particleCount, pEmitterOwner, killAll, fromStateSwitch);
}

/*
==============
ParticleState::KillAllParticles
==============
*/

void __fastcall ParticleState::KillAllParticles(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  ?KillAllParticles@ParticleState@@QEAAXPEAUParticleData@@PEBVParticleEmitter@@@Z(this, pParticleData, pEmitterOwner);
}

/*
==============
ParticleState::KillSoundParticlesAll
==============
*/

void __fastcall ParticleState::KillSoundParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  ?KillSoundParticlesAll@ParticleState@@QEAAXPEAUParticleData@@PEBVParticleEmitter@@@Z(this, pParticleData, pEmitterOwner);
}

/*
==============
ParticleState::CalculateSpawnOffsetParticleTransform
==============
*/

void __fastcall ParticleState::CalculateSpawnOffsetParticleTransform(ParticleState *this, const float4 *position, const ParticleEmitter *pEmitter, vector4 *outParticleTransform)
{
  ?CalculateSpawnOffsetParticleTransform@ParticleState@@QEBAXAEBUfloat4@@PEBVParticleEmitter@@AEAUvector4@@@Z(this, position, pEmitter, outParticleTransform);
}

/*
==============
Particle_ParticleSimModelData::Init
==============
*/

bool __fastcall Particle_ParticleSimModelData::Init(Particle_ParticleSimModelData *this, unsigned int _maxActiveParticles, const ParticleEmitter *pEmitter)
{
  return ?Init@Particle_ParticleSimModelData@@QEAA_NIPEBVParticleEmitter@@@Z(this, _maxActiveParticles, pEmitter);
}

/*
==============
ParticleState::Update_RunnerChildrenTransforms
==============
*/

void __fastcall ParticleState::Update_RunnerChildrenTransforms(ParticleState *this)
{
  ?Update_RunnerChildrenTransforms@ParticleState@@QEAAXXZ(this);
}

/*
==============
ParticleState::KillRunnerParticlesAll
==============
*/

void __fastcall ParticleState::KillRunnerParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  ?KillRunnerParticlesAll@ParticleState@@QEAAXPEAUParticleData@@PEBVParticleEmitter@@@Z(this, pParticleData, pEmitterOwner);
}

/*
==============
ParticleState::Init
==============
*/

bool __fastcall ParticleState::Init(ParticleState *this, const ParticleEmitter *pEmitterOwner, const ParticleStateDef *pStateDef, const unsigned int stateIndex, ParticleData *pParticleData, const unsigned int particleCountMax)
{
  return ?Init@ParticleState@@QEAA_NPEBVParticleEmitter@@PEBUParticleStateDef@@IPEAUParticleData@@I@Z(this, pEmitterOwner, pStateDef, stateIndex, pParticleData, particleCountMax);
}

/*
==============
ParticleState::KillPhysicsPipelineInstance
==============
*/

void __fastcall ParticleState::KillPhysicsPipelineInstance(ParticleState *this)
{
  ?KillPhysicsPipelineInstance@ParticleState@@QEAAXXZ(this);
}

/*
==============
ParticleState::UpdateModifiers
==============
*/

void __fastcall ParticleState::UpdateModifiers(ParticleState *this, const ParticleSystem *pSystemOwner, ParticleSystem *pChildSystem, const float4 *size, const float4 *velocity, const ParticleModifier *scaleMod, const ParticleModifier *velocityMod, ParticleUseScaleOptions scaleOptions, ParticleUseVelocityOptions velocityOptions)
{
  ?UpdateModifiers@ParticleState@@QEBAXPEBVParticleSystem@@PEAV2@AEBUfloat4@@2AEBUParticleModifier@@3W4ParticleUseScaleOptions@@W4ParticleUseVelocityOptions@@@Z(this, pSystemOwner, pChildSystem, size, velocity, scaleMod, velocityMod, scaleOptions, velocityOptions);
}

/*
==============
ParticleState::AddModule
==============
*/

bool __fastcall ParticleState::AddModule(ParticleState *this, const ParticleEmitter *pEmitterOwner, const ParticleModule::ParticleModuleGroup group, const ParticleModuleDef *pModuleDef, const unsigned int index, const unsigned int particleCountMax)
{
  return ?AddModule@ParticleState@@QEAA_NPEBVParticleEmitter@@W4ParticleModuleGroup@ParticleModule@@PEBUParticleModuleDef@@II@Z(this, pEmitterOwner, group, pModuleDef, index, particleCountMax);
}

/*
==============
ParticleState::KillPhysicsFXParticles
==============
*/

void __fastcall ParticleState::KillPhysicsFXParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner, bool killAll)
{
  ?KillPhysicsFXParticles@ParticleState@@QEAAXPEAUParticleData@@IIPEBVParticleEmitter@@_N@Z(this, pParticleData, particleOffset, particleCount, pEmitterOwner, killAll);
}

/*
==============
Particle_TrailData::AddPoint
==============
*/

bool __fastcall Particle_TrailData::AddPoint(Particle_TrailData *this, const float4 *point)
{
  return ?AddPoint@Particle_TrailData@@QEAA_NAEBUfloat4@@@Z(this, point);
}

/*
==============
ParticleState::ReleaseTrailDataList
==============
*/

void __fastcall ParticleState::ReleaseTrailDataList(ParticleState *this)
{
  ?ReleaseTrailDataList@ParticleState@@AEAAXXZ(this);
}

/*
==============
ParticleState::KillVectorFieldParticlesAll
==============
*/

void __fastcall ParticleState::KillVectorFieldParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  ?KillVectorFieldParticlesAll@ParticleState@@QEAAXPEAUParticleData@@PEBVParticleEmitter@@@Z(this, pParticleData, pEmitterOwner);
}

/*
==============
ParticleState::InitAtlasData
==============
*/

void __fastcall ParticleState::InitAtlasData(ParticleState *this, const ParticleModuleInitAtlas *const pModuleInitAtlas, const ParticleEmitter *const pEmitterOwner)
{
  ?InitAtlasData@ParticleState@@AEAAXQEBUParticleModuleInitAtlas@@QEBVParticleEmitter@@@Z(this, pModuleInitAtlas, pEmitterOwner);
}

/*
==============
ParticleState::GetVFXName
==============
*/

const char *__fastcall ParticleState::GetVFXName(ParticleState *this)
{
  return ?GetVFXName@ParticleState@@QEBAPEBDXZ(this);
}

/*
==============
ParticleState::UpdateBeamChildTransform
==============
*/

void __fastcall ParticleState::UpdateBeamChildTransform(ParticleState *this, LocalClientNum_t localClientNum)
{
  ?UpdateBeamChildTransform@ParticleState@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ParticleState::EmitPhysicsParticles
==============
*/

void __fastcall ParticleState::EmitPhysicsParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleCountEmit, const ParticleEmitter *pEmitterOwner)
{
  ?EmitPhysicsParticles@ParticleState@@QEAAXPEAUParticleData@@IPEBVParticleEmitter@@@Z(this, pParticleData, particleCountEmit, pEmitterOwner);
}

/*
==============
ParticleState::UpdateBeamChildTransform
==============
*/

void __fastcall ParticleState::UpdateBeamChildTransform(ParticleState *this, ParticleSystem *systemBeamChild)
{
  ?UpdateBeamChildTransform@ParticleState@@QEAAXPEAVParticleSystem@@@Z(this, systemBeamChild);
}

/*
==============
ParticleState::KillPhysicsParticlesAll
==============
*/

void __fastcall ParticleState::KillPhysicsParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  ?KillPhysicsParticlesAll@ParticleState@@QEAAXPEAUParticleData@@PEBVParticleEmitter@@@Z(this, pParticleData, pEmitterOwner);
}

/*
==============
ParticleState::DebugDraw
==============
*/

void __fastcall ParticleState::DebugDraw(ParticleState *this, const ParticleEmitter *pEmitterOwner, const ParticleData *pParticleData)
{
  ?DebugDraw@ParticleState@@QEAAXPEBVParticleEmitter@@PEBUParticleData@@@Z(this, pEmitterOwner, pParticleData);
}

/*
==============
ParticleState::Update_GeoTrails
==============
*/

void __fastcall ParticleState::Update_GeoTrails(ParticleState *this, const ParticleData *pParticleData, const float dt, const FxCamera *pCamera)
{
  ?Update_GeoTrails@ParticleState@@AEAAXPEBUParticleData@@MPEBUFxCamera@@@Z(this, pParticleData, dt, pCamera);
}

/*
==============
ParticleState::Update_RunnerChildTransform
==============
*/

void __fastcall ParticleState::Update_RunnerChildTransform(ParticleState *this, ParticleSystem *pChildSystem, const ParticleEmitter *pEmitterOwner, const float4 *position, const float4 *velocity, const float4 *rotationAngle, bool hasRotation, const vector4 *rEmitterTransform, ParticleUseOrientationOptions useOrientationOptions, bool useLegacyOrientationOptions)
{
  ?Update_RunnerChildTransform@ParticleState@@AEAAXPEAVParticleSystem@@PEBVParticleEmitter@@AEBUfloat4@@22_NAEBUvector4@@W4ParticleUseOrientationOptions@@3@Z(this, pChildSystem, pEmitterOwner, position, velocity, rotationAngle, hasRotation, rEmitterTransform, useOrientationOptions, useLegacyOrientationOptions);
}

/*
==============
ParticleState::OnImpactCB
==============
*/

void __fastcall ParticleState::OnImpactCB(Physics_SimpleCollisionCallback_Data *pPhysicsCBData)
{
  ?OnImpactCB@ParticleState@@SAXPEAUPhysics_SimpleCollisionCallback_Data@@@Z(pPhysicsCBData);
}

/*
==============
ParticleState::~ParticleState
==============
*/

void __fastcall ParticleState::~ParticleState(ParticleState *this)
{
  ??1ParticleState@@QEAA@XZ(this);
}

/*
==============
ParticleState::Update_VectorFields
==============
*/

void __fastcall ParticleState::Update_VectorFields(ParticleState *this, const ParticleData *pParticleData)
{
  ?Update_VectorFields@ParticleState@@AEAAXPEBUParticleData@@@Z(this, pParticleData);
}

/*
==============
ParticleState::KillSoundParticles
==============
*/

void __fastcall ParticleState::KillSoundParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner, bool killAll)
{
  ?KillSoundParticles@ParticleState@@QEAAXPEAUParticleData@@IIPEBVParticleEmitter@@_N@Z(this, pParticleData, particleOffset, particleCount, pEmitterOwner, killAll);
}

/*
==============
ParticleState::UpdateScriptedInputData
==============
*/

void __fastcall ParticleState::UpdateScriptedInputData(ParticleState *this, ParticleData *pParticleData, const float dt, const ParticleEmitter *pEmitterOwner)
{
  ?UpdateScriptedInputData@ParticleState@@AEAAXPEAUParticleData@@MPEBVParticleEmitter@@@Z(this, pParticleData, dt, pEmitterOwner);
}

/*
==============
ParticleState::~ParticleState
==============
*/
void ParticleState::~ParticleState(ParticleState *this)
{
  ParticleState::Release(this, this->m_pParticleData, this->m_pEmitterOwner);
}

/*
==============
ParticleState::AddModule
==============
*/
bool ParticleState::AddModule(ParticleState *this, const ParticleEmitter *pEmitterOwner, const ParticleModule::ParticleModuleGroup group, const ParticleModuleDef *pModuleDef, const unsigned int index, const unsigned int particleCountMax)
{
  __int64 v11; 
  ParticleState::ModuleData *v13; 
  __int64 m_localClientNum; 
  const ParticleModule *v15; 
  const ParticleModuleUpdateData *UpdateData; 
  __int64 v17; 
  ParticleEmitterDef *EmitterDef; 
  ParticleDataFlags DataFlags; 
  const char *VFXName; 
  const ParticleModuleInitAtlas *m_pModuleInitAtlas; 
  ParticleManager *ParticleManager; 
  ParticleManager *v24; 
  const ParticleLinkedAssetListDef *v25; 
  ParticleSystemHandle m_systemBeamChild; 
  const ParticleSystem *pParentSystem; 
  ParticleSystem *v28; 
  const FxMarkSpawnData *pMarkSpawnData; 
  int LocalClientTime; 
  ParticleSystemHandle v31; 
  __int64 v32; 
  ParticleSystem *v33; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  unsigned int v36; 
  Particle_TrailData *v39; 
  int v40; 
  bool result; 
  __int64 v46; 
  FxPhysics *v47; 
  __int64 v48; 
  char v49; 
  __int64 v50; 
  int v51; 
  unsigned int v52; 
  __int64 v53; 
  __int64 v54; 
  ParticleData *v55; 
  __int64 v56; 
  Particle_ParticleSimModelData *v57; 
  unsigned int m_maxActiveParticleSimParticles; 
  Particle_ParticleSimModelData *m_particleSimModelDataList; 
  const ParticleStateDef *m_pStateDef; 
  ParticleState::ElementTypeModule v62; 
  unsigned int m_type; 
  unsigned __int8 *m_vectorFieldList; 
  unsigned __int8 *v71; 
  ParticleSystem *v72; 
  ParticleState::ElementTypeModule v73; 
  PhysicsFXShape *v74; 
  bool v75; 
  int *v76; 
  ParticleSystem *v77; 
  volatile signed __int32 *v78; 
  unsigned __int32 v79; 
  __int64 v80; 
  __int64 v81; 
  Particle_OnImpactData *v82; 
  float *v83; 
  ParticleLinkedAssetListDef *pLinkedAssetList; 
  __int64 randomSeed; 
  signed int _numSheets; 
  unsigned int _numSheetsa; 
  unsigned int _numSheetsb; 
  const char *pEmittera; 
  ParticleModule v91; 
  vector4 outTransform; 

  v11 = group;
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 258, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( !pModuleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 259, ASSERT_TYPE_ASSERT, "(pModuleDef)", (const char *)&queryFormat, "pModuleDef") )
    __debugbreak();
  if ( index >= this->m_pStateDef->moduleGroupDefs[v11].numModules )
  {
    LODWORD(pLinkedAssetList) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_pStateDef->moduleGroupDefs[group].numModules )", "index doesn't index m_pStateDef->moduleGroupDefs[group].numModules\n\t%i not in [0, %i)", pLinkedAssetList, this->m_pStateDef->moduleGroupDefs[v11].numModules) )
      __debugbreak();
  }
  if ( pModuleDef->moduleType >= PARTICLE_MODULE_COUNT )
  {
    LODWORD(randomSeed) = 62;
    LODWORD(pLinkedAssetList) = pModuleDef->moduleType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( pModuleDef->moduleType ) < (unsigned)( PARTICLE_MODULE_COUNT )", "pModuleDef->moduleType doesn't index PARTICLE_MODULE_COUNT\n\t%i not in [0, %i)", pLinkedAssetList, randomSeed) )
      __debugbreak();
  }
  if ( ((unsigned __int8)pModuleDef & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 262, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pModuleDef)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pModuleDef)) % (PARTICLE_ALIGNMENT) == 0") )
    __debugbreak();
  v13 = this->m_pModuleDataList[v11];
  m_localClientNum = pEmitterOwner->m_pSystemOwner->m_localClientNum;
  v15 = ParticleModule::ConvertFromModuleDef(pModuleDef);
  v13[index].pModule = v15;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 268, ASSERT_TYPE_ASSERT, "(pModuleDataList[index].pModule)", (const char *)&queryFormat, "pModuleDataList[index].pModule") )
    __debugbreak();
  if ( ((__int64)v13[index].pModule & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 269, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pModuleDataList[index].pModule)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pModuleDataList[index].pModule)) % (PARTICLE_ALIGNMENT) == 0") )
    __debugbreak();
  UpdateData = ParticleModule::GetUpdateData();
  v17 = (__int64)pModuleDef->moduleType << 6;
  v13[index].pUpdateData = (const ParticleModuleUpdateData *)((char *)UpdateData + v17);
  if ( !(const ParticleModuleUpdateData *)((char *)UpdateData + v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 272, ASSERT_TYPE_ASSERT, "(pModuleDataList[index].pUpdateData)", (const char *)&queryFormat, "pModuleDataList[index].pUpdateData") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+178h+var_58], xmm6
    vmovaps [rsp+178h+var_68], xmm7
  }
  EmitterDef = (ParticleEmitterDef *)ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner);
  DataFlags = ParticleEmitterDef::GetDataFlags(EmitterDef);
  _RBX.pModule = v13[index].pModule;
  _numSheets = DataFlags;
  VFXName = ParticleState::GetVFXName(this);
  switch ( pModuleDef->moduleType )
  {
    case PARTICLE_MODULE_INIT_BEGIN:
      m_pModuleInitAtlas = this->m_pModuleInitAtlas;
      if ( (_RBX.pModule->m_flags & 1) != 0 )
      {
        if ( !m_pModuleInitAtlas || (m_pModuleInitAtlas->m_flags & 1) != 0 )
          this->m_atlasData.isAtlas = 0;
      }
      else
      {
        if ( m_pModuleInitAtlas )
          Com_PrintWarning(21, "WARNING: You should only be using a single InitAtlas module for %s\n", VFXName);
        this->m_pModuleInitAtlas = (const ParticleModuleInitAtlas *)_RBX.pModule;
        ParticleState::InitAtlasData(this, (const ParticleModuleInitAtlas *const)_RBX.pModule, pEmitterOwner);
      }
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_ATTRIBUTES:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
      {
        if ( this->m_pModuleInitAttributes )
          Com_PrintWarning(21, "WARNING: You should only be using a single InitAttributes module for %s\n", VFXName);
        this->m_pModuleInitAttributes = (const ParticleModuleInitAttributes *)_RBX.pModule;
      }
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_BEAM:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
      {
        this->m_elementTypeModule = _RBX;
        ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)m_localClientNum);
        v24 = ParticleManager;
        v25 = (const ParticleLinkedAssetListDef *)&this->m_elementTypeModule.pModule[12];
        if ( *(int *)&this->m_elementTypeModule.pModule[13].m_type > 0 )
        {
          if ( ParticleManager->m_archiveState == ARCHIVE_STATE_RESTORING )
          {
            SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
            Def = ParticleSystem::GetDef(SystemOwner);
            Com_PrintWarning(21, "Can't create child effects during a savegame restore- killed child attached to beam : %s \n", Def->name);
          }
          else
          {
            ParticleEmitter::GetBeamTransform((ParticleEmitter *)pEmitterOwner, this, &outTransform);
            m_systemBeamChild = this->m_systemBeamChild;
            if ( m_systemBeamChild )
              ParticleManager::KillSystem(v24, m_systemBeamChild);
            pParentSystem = ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
            v28 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
            pMarkSpawnData = ParticleSystem::GetMarkSpawnData(v28);
            LocalClientTime = CG_GetLocalClientTime((const LocalClientNum_t)pEmitterOwner->m_pSystemOwner->m_localClientNum);
            v31 = ParticleEmitter::SpawnChildEffect((ParticleEmitter *)pEmitterOwner, (LocalClientNum_t)m_localClientNum, LocalClientTime, v24, this, v25, 0, &outTransform.w, &outTransform, 0xFFFu, 0xFFFFu, NULL, NULL, pMarkSpawnData, 1, 0, pParentSystem, NULL, PARTICLE_SYSTEM_FLAG_NONE);
            this->m_systemBeamChild = v31;
            v32 = (m_localClientNum << 12) + (v31 & 0xFFF);
            if ( g_particleSystemsGeneration[v32].__all32 != v31 && v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 933, ASSERT_TYPE_ASSERT, "(g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE") )
              __debugbreak();
            v33 = g_particleSystems[0][v32];
            if ( v33 )
              ParticleState::UpdateBeamChildTransform(this, v33);
          }
        }
      }
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_CLOUD:
    case PARTICLE_MODULE_INIT_DECAL:
    case PARTICLE_MODULE_INIT_FLARE:
    case PARTICLE_MODULE_INIT_LIGHT_OMNI:
    case PARTICLE_MODULE_INIT_LIGHT_SPOT:
    case PARTICLE_MODULE_INIT_ORIENTED_SPRITE:
    case PARTICLE_MODULE_INIT_RUNNER:
    case PARTICLE_MODULE_INIT_VOLUMETRIC:
    case PARTICLE_MODULE_INIT_DISMEMBER:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
        this->m_elementTypeModule = _RBX;
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_GEO_TRAIL:
      if ( (_RBX.pModule->m_flags & 1) != 0 )
        goto LABEL_61;
      this->m_elementTypeModule = _RBX;
      v36 = *(_DWORD *)&_RBX.pModule[1].m_type;
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+0Ch]
        vmovss  xmm7, dword ptr [rbx+10h]
      }
      _numSheetsa = *(_DWORD *)&_RBX.pModule[3].m_type;
      if ( this->m_trailDataList )
      {
        ParticleState::ReleaseTrailDataList(this);
        Com_PrintWarning(21, "WARNING: You should only be using a single InitGeoTrail module for %s\n", VFXName);
        if ( this->m_trailDataList )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 383, ASSERT_TYPE_ASSERT, "(!m_trailDataList)", (const char *)&queryFormat, "!m_trailDataList") )
            __debugbreak();
        }
      }
      v39 = (Particle_TrailData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 96i64 * particleCountMax);
      this->m_trailDataList = v39;
      if ( !v39 )
      {
        Com_PrintError(21, "Could not allocate %d trail data structures for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
        goto LABEL_65;
      }
      v40 = 0;
      if ( !particleCountMax )
        goto LABEL_60;
      while ( 1 )
      {
        __asm
        {
          vmovaps xmm3, xmm7; _splitAngle
          vmovaps xmm2, xmm6; _splitDistance
        }
        if ( !Particle_TrailData::Init(&this->m_trailDataList[v40], v36, *(float *)&_XMM2, *(float *)&_XMM3, _numSheetsa, pEmitterOwner) )
          break;
        if ( ++v40 >= particleCountMax )
          goto LABEL_60;
      }
      Com_PrintError(21, "Could not allocate %d trails for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", v36, VFXName);
      ParticleState::ReleaseTrailDataList(this);
      result = 0;
      this->m_isRunning = 0;
      goto LABEL_62;
    case PARTICLE_MODULE_INIT_KILL_WRAP_BOX:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
        this->m_pModuleInitKillWrapBox = (const ParticleModuleInitKillWrapBox *)_RBX.pModule;
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_MATERIAL:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
      {
        if ( this->m_pModuleInitMaterial )
          Com_PrintWarning(21, "WARNING: You should only be using a single InitMaterial module for %s\n", VFXName);
        this->m_pModuleInitMaterial = (const ParticleModuleInitMaterial *)_RBX.pModule;
      }
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_MODEL:
      if ( (_RBX.pModule->m_flags & 1) != 0 )
        goto LABEL_61;
      this->m_elementTypeModule = _RBX;
      this->m_isRunning = 1;
      if ( !LOBYTE(_RBX.pModule[1].m_type) )
        goto LABEL_61;
      v46 = particleCountMax;
      v47 = (FxPhysics *)ParticleManager::ParticleSystemAlloc((LocalClientNum_t)m_localClientNum, 12i64 * particleCountMax);
      this->m_physicsInstanceIDList = v47;
      if ( !v47 )
      {
        Com_PrintError(21, "Could not allocate %d physics instance IDs for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
        goto LABEL_65;
      }
      this->m_isRunning = 1;
      if ( particleCountMax )
      {
        v48 = 0i64;
        do
        {
          this->m_physicsInstanceIDList[v48++].createListIndex = -1;
          this->m_physicsInstanceIDList[v48 - 1].instanceId = -1;
          this->m_physicsInstanceIDList[v48 - 1].detailInstanceId = -1;
          --v46;
        }
        while ( v46 );
      }
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_OCCLUSION_QUERY:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
      {
        if ( (this->m_pStateDef->flags & 0x80000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 482, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_STATE_DEF_FLAG_USE_OCCLUSION_QUERY ))", (const char *)&queryFormat, "HasFlag( PARTICLE_STATE_DEF_FLAG_USE_OCCLUSION_QUERY )") )
          __debugbreak();
        if ( this->m_pModuleInitOcclusionQuery )
          Com_PrintWarning(21, "WARNING: You should only be using a single OcclusionQuery module for %s\n", VFXName);
        this->m_pModuleInitOcclusionQuery = (const ParticleModuleInitOcclusionQuery *)_RBX.pModule;
        ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner)->m_pModuleInitOcclusionQuery = this->m_pModuleInitOcclusionQuery;
      }
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_PARTICLE_SIM:
      if ( (_RBX.pModule->m_flags & 1) != 0 )
        goto LABEL_61;
      v49 = 0;
      if ( this->m_pModuleInitParticleSim )
        Com_PrintWarning(21, "WARNING: You should only be using a single ParticleSim module for %s\n", VFXName);
      v50 = 0i64;
      this->m_pModuleInitParticleSim = (const ParticleModuleInitParticleSim *)_RBX.pModule;
      this->m_maxActiveParticleSimParticles = 0;
      v51 = 0;
      if ( *(int *)&_RBX.pModule[2].m_type <= 0 )
        goto LABEL_98;
      v52 = 0;
      v53 = 0i64;
      do
      {
        v53 += 32i64;
        v54 = *(_QWORD *)(v53 + *(_QWORD *)&_RBX.pModule[1] - 32);
        if ( *(_DWORD *)(v54 + 68) > v52 )
          v52 = *(_DWORD *)(v54 + 68);
        this->m_maxActiveParticleSimParticles = v52;
        if ( *(_BYTE *)(v54 + 72) )
          v49 = 1;
        ++v51;
      }
      while ( v51 < *(_DWORD *)&_RBX.pModule[2].m_type );
      if ( !v52 )
LABEL_98:
        Com_PrintWarning(21, "WARNING: Particle sim animation assets for %s have no active particles.\n", VFXName);
      if ( !v49 )
        goto LABEL_106;
      v55 = (ParticleData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 0x70ui64);
      this->m_pParticleSimUpdateParticleData = v55;
      if ( !v55 )
        goto LABEL_105;
      if ( ParticleData::Init(v55, (LocalClientNum_t)m_localClientNum, 1u, pEmitterOwner, (const ParticleDataFlags)_numSheets) )
      {
        ParticleData::AddParticlesRunning(this->m_pParticleSimUpdateParticleData, 1u);
        if ( this->m_pParticleSimUpdateParticleData )
          goto LABEL_106;
      }
      else
      {
        ParticleManager::ParticleSystemFree((LocalClientNum_t)m_localClientNum, this->m_pParticleSimUpdateParticleData);
        this->m_pParticleSimUpdateParticleData = NULL;
      }
LABEL_105:
      Com_PrintWarning(21, "WARNING: Could not allocate particle data required to evaluate the visual state per particle for %s.  That feature will be disabled. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", VFXName);
LABEL_106:
      if ( this->m_pStateDef->elementType != 7 || !this->m_maxActiveParticleSimParticles )
        goto LABEL_61;
      v56 = particleCountMax;
      v57 = (Particle_ParticleSimModelData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 16i64 * particleCountMax);
      this->m_particleSimModelDataList = v57;
      if ( !v57 )
      {
        Com_PrintError(21, "Could not allocate %d particle sim data structures for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
        result = 0;
        this->m_isRunning = 0;
        goto LABEL_62;
      }
      if ( particleCountMax )
      {
        do
        {
          m_maxActiveParticleSimParticles = this->m_maxActiveParticleSimParticles;
          m_particleSimModelDataList = this->m_particleSimModelDataList;
          if ( !m_maxActiveParticleSimParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3683, ASSERT_TYPE_ASSERT, "(_maxActiveParticles > 0)", (const char *)&queryFormat, "_maxActiveParticles > 0") )
            __debugbreak();
          m_particleSimModelDataList[v50++].maxActiveParticles = m_maxActiveParticleSimParticles;
          --v56;
        }
        while ( v56 );
      }
      goto LABEL_60;
    case PARTICLE_MODULE_INIT_RELATIVE_VELOCITY:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
      {
        if ( this->m_pModuleInitRelativeVelocity )
          Com_PrintWarning(21, "WARNING: You should only be using a single InitRelativeVelocity module for %s\n", VFXName);
        this->m_pModuleInitRelativeVelocity = (const ParticleModuleInitRelativeVelocity *)_RBX.pModule;
      }
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_SOUND:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
        this->m_pModuleInitSound = (const ParticleModuleInitSound *)_RBX.pModule;
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_FIRST:
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_CYLINDER:
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_ELLIPSOID:
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_SPHERE:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
        this->m_spawnShapeTypeModule.pModuleSpawnShape = (const ParticleModuleInitSpawnShape *)_RBX.pModule;
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_MESH:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
      {
        this->m_spawnShapeTypeModule.pModuleSpawnShape = (const ParticleModuleInitSpawnShape *)_RBX.pModule;
        if ( !*(_DWORD *)&_RBX.pModule[6].m_type )
        {
          Com_PrintWarning(21, "WARNING: Mesh spawner has no mesh assets. Disabling module for %s\n", VFXName);
          this->m_spawnShapeTypeModule.pModuleSpawnShape = NULL;
        }
      }
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_TAIL:
      if ( (_RBX.pModule->m_flags & 1) != 0 )
        goto LABEL_61;
      m_pStateDef = this->m_pStateDef;
      this->m_elementTypeModule = _RBX;
      if ( (m_pStateDef->flags & 0x2000000) == 0 )
        goto LABEL_61;
      if ( this->m_tailDataList )
      {
        ParticleState::ReleaseTailDataList(this);
        Com_PrintWarning(21, "WARNING: You should only be using a single InitTail module for %s\n", VFXName);
        if ( this->m_tailDataList )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 655, ASSERT_TYPE_ASSERT, "(!m_tailDataList)", (const char *)&queryFormat, "!m_tailDataList") )
            __debugbreak();
        }
      }
      _RAX = (Particle_TailData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 0x20ui64);
      this->m_tailDataList = _RAX;
      if ( !_RAX )
      {
        Com_PrintError(21, "Could not allocate tail data structure for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", VFXName);
        result = 0;
        this->m_isRunning = 0;
        goto LABEL_62;
      }
      v62.pModule = (const ParticleModule *)this->m_elementTypeModule;
      __asm { vmovss  xmm1, cs:__real@3f800000 }
      m_type = (unsigned __int16)v62.pModule[1].m_type;
      if ( *((unsigned __int16 *)&v62.pModule[1].m_type + 1) <= 1u )
      {
        __asm { vmovaps xmm2, xmm1 }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r8
          vdivss  xmm2, xmm1, xmm0
        }
      }
      __asm { vmovss  dword ptr [rax+14h], xmm2 }
      if ( m_type > 1 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rdx
          vdivss  xmm1, xmm1, xmm0
        }
      }
      _RAX = this->m_tailDataList;
      __asm { vmovss  dword ptr [rax+10h], xmm1 }
      this->m_tailDataList->updateTimer = 0.0;
LABEL_60:
      this->m_isRunning = 1;
      goto LABEL_61;
    case PARTICLE_MODULE_INIT_VECTOR_FIELD:
      if ( (_RBX.pModule->m_flags & 1) != 0 )
        goto LABEL_61;
      m_vectorFieldList = this->m_vectorFieldList;
      this->m_elementTypeModule = _RBX;
      if ( m_vectorFieldList )
      {
        ParticleManager::ParticleSystemFree((LocalClientNum_t)m_localClientNum, m_vectorFieldList);
        this->m_vectorFieldList = NULL;
        Com_PrintWarning(21, "WARNING: You should only be using a single InitVectorField module for %s\n", VFXName);
        if ( this->m_vectorFieldList )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 693, ASSERT_TYPE_ASSERT, "(!m_vectorFieldList)", (const char *)&queryFormat, "!m_vectorFieldList") )
            __debugbreak();
        }
      }
      v71 = (unsigned __int8 *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, particleCountMax);
      this->m_vectorFieldList = v71;
      if ( v71 )
        goto LABEL_60;
      Com_PrintError(21, "Could not allocate %d vector field handles for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
      goto LABEL_65;
    case PARTICLE_MODULE_FORCE_DRAG_GRAPH:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
        this->m_pModuleForceDragGraph = (const ParticleModuleForceDragGraph *)_RBX.pModule;
      goto LABEL_61;
    case PARTICLE_MODULE_GRAVITY:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
        this->m_pModuleGravity = (const ParticleModuleGravity *)_RBX.pModule;
      goto LABEL_61;
    case PARTICLE_MODULE_PARENT_VELOCITY_GRAPH:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
        this->m_pModuleParentVelocityGraph = (const ParticleModuleParentVelocityGraph *)_RBX.pModule;
      goto LABEL_61;
    case PARTICLE_MODULE_PHYSICS_LIGHT:
      if ( !particle_enable_physics_light->current.enabled )
        R_WarnOncePerFrame(R_WARN_VFX_PHYSICS_DISABLED, "(ParticleState::AddModule)");
      if ( (_RBX.pModule->m_flags & 1) != 0 || (this->m_pStateDef->flags & 0x400) == 0 )
        goto LABEL_61;
      if ( this->m_pModulePhysicsLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 753, ASSERT_TYPE_ASSERT, "(!m_pModulePhysicsLight)", (const char *)&queryFormat, "!m_pModulePhysicsLight") )
        __debugbreak();
      v72 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
      _numSheetsb = ParticleSystem::GetSystemHandle(v72);
      this->m_physicsWorldId = 3 * m_localClientNum + 3;
      if ( *(int *)&_RBX.pModule[3].m_type <= 0 )
      {
        if ( this->m_pModulePhysicsLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 837, ASSERT_TYPE_ASSERT, "(!m_pModulePhysicsLight)", (const char *)&queryFormat, "!m_pModulePhysicsLight") )
          __debugbreak();
        if ( this->m_physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 838, ASSERT_TYPE_ASSERT, "(!m_physicsFXPipelineInstance)", (const char *)&queryFormat, "!m_physicsFXPipelineInstance") )
          __debugbreak();
        if ( this->m_physicsFXParticleIDList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 839, ASSERT_TYPE_ASSERT, "(!m_physicsFXParticleIDList)", (const char *)&queryFormat, "!m_physicsFXParticleIDList") )
          __debugbreak();
        goto LABEL_61;
      }
      if ( !*(_QWORD *)&_RBX.pModule[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 765, ASSERT_TYPE_ASSERT, "(pModulePhysicsLight->m_linkedAssetList.assetList)", (const char *)&queryFormat, "pModulePhysicsLight->m_linkedAssetList.assetList") )
        __debugbreak();
      v91 = _RBX.pModule[2];
      this->m_physicsFXPipeline = **(PhysicsFXPipeline ***)&v91;
      this->m_physicsFXShape = *(PhysicsFXShape **)(*(_QWORD *)&v91 + 8i64);
      if ( this->m_pStateDef->elementType == 7 )
      {
        v73.pModule = (const ParticleModule *)this->m_elementTypeModule;
        if ( !v73.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 775, ASSERT_TYPE_ASSERT, "(pModuleInitModel)", (const char *)&queryFormat, "pModuleInitModel") )
          __debugbreak();
        if ( *(int *)&v73.pModule[3].m_type > 0 )
        {
          if ( !*(_QWORD *)&v73.pModule[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 781, ASSERT_TYPE_ASSERT, "(pModuleInitModel->m_linkedAssetList.assetList)", (const char *)&queryFormat, "pModuleInitModel->m_linkedAssetList.assetList") )
            __debugbreak();
          if ( *(int *)&v73.pModule[3].m_type <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 782, ASSERT_TYPE_ASSERT, "(pModuleInitModel->m_linkedAssetList.numAssets > 0)", (const char *)&queryFormat, "pModuleInitModel->m_linkedAssetList.numAssets > 0") )
            __debugbreak();
          v74 = *(PhysicsFXShape **)(**(_QWORD **)&v73.pModule[2] + 632i64);
          if ( v74 )
            this->m_physicsFXShape = v74;
        }
      }
      v75 = this->m_physicsFXPipelineInstance == NULL;
      this->m_physicsFXShapeIndex = -1;
      if ( !v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 794, ASSERT_TYPE_ASSERT, "(!m_physicsFXPipelineInstance)", (const char *)&queryFormat, "!m_physicsFXPipelineInstance") )
        __debugbreak();
      if ( this->m_physicsFXParticleIDList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 797, ASSERT_TYPE_ASSERT, "(!m_physicsFXParticleIDList)", (const char *)&queryFormat, "!m_physicsFXParticleIDList") )
        __debugbreak();
      v76 = (int *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 4i64 * particleCountMax);
      this->m_physicsFXParticleIDList = v76;
      if ( v76 )
      {
        this->m_isRunning = 1;
        this->m_numPhysicsFXParticles = 0;
        this->m_pipelinePendingDeletion = 0;
        this->m_pModulePhysicsLight = (const ParticleModulePhysicsLight *)_RBX.pModule;
        if ( this->m_pendingPhysicsFXPipelineCreation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 817, ASSERT_TYPE_ASSERT, "(!m_pendingPhysicsFXPipelineCreation)", (const char *)&queryFormat, "!m_pendingPhysicsFXPipelineCreation") )
          __debugbreak();
        v77 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
        pEmittera = ParticleSystem::GetDef(v77)->name;
        if ( (unsigned int)m_localClientNum >= 2 )
        {
          LODWORD(randomSeed) = 2;
          LODWORD(pLinkedAssetList) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 536, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", pLinkedAssetList, randomSeed) )
            __debugbreak();
        }
        v78 = &g_particleDeferredPhysicsFXPipelineCreateListCount[m_localClientNum];
        if ( ((unsigned __int8)v78 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_particleDeferredPhysicsFXPipelineCreateListCount[m_localClientNum]) )
          __debugbreak();
        v79 = _InterlockedExchangeAdd(v78, 1u);
        if ( v79 < 0x800 )
        {
          v80 = (int)v79 + (m_localClientNum << 11);
          g_particleDeferredPhysicsFXPipelineCreateList[0][v80].pParticleState = this;
          g_particleDeferredPhysicsFXPipelineCreateList[0][v80].pParticleEmitterOwner = pEmitterOwner;
          g_particleDeferredPhysicsFXPipelineCreateList[0][v80].particleSystemHandle = _numSheetsb;
          this->m_pendingPhysicsFXPipelineCreation = 1;
          v81 = *(unsigned int *)(**(_QWORD **)&v91 + 8i64);
          if ( particleCountMax > (unsigned int)v81 )
            Com_PrintWarning(21, "WARNING: The physics pipeline can only support %d particles; however, you are trying to spawn %d particles for effect %s. Disabling lightweight physics.\n", v81, particleCountMax, VFXName);
        }
        else
        {
          Com_PrintWarning(21, "Exceeded deferred pipeline create list size. %d > %u, %s\n", v79, 2048i64, pEmittera);
        }
LABEL_61:
        result = 1;
        goto LABEL_62;
      }
      Com_PrintError(21, "Could not allocate %d physics FX IDs for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
LABEL_65:
      result = 0;
      this->m_isRunning = 0;
LABEL_62:
      __asm
      {
        vmovaps xmm7, [rsp+178h+var_68]
        vmovaps xmm6, [rsp+178h+var_58]
      }
      return result;
    case PARTICLE_MODULE_SCALE_BY_DISTANCE:
      if ( (_RBX.pModule->m_flags & 1) == 0 )
        this->m_pModuleScaleByDistance = (const ParticleModuleScaleByDistance *)_RBX.pModule;
      goto LABEL_61;
    case PARTICLE_MODULE_TEST_IMPACT:
      if ( (_RBX.pModule->m_flags & 1) != 0 )
        goto LABEL_61;
      if ( this->m_onImpactDataList )
      {
        ParticleManager::ParticleSystemFree((LocalClientNum_t)m_localClientNum, this->m_onImpactDataList);
        this->m_onImpactDataList = NULL;
        Com_PrintWarning(21, "WARNING: You should only be using a single TestImpact module for %s\n", VFXName);
        if ( this->m_onImpactDataList )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 866, ASSERT_TYPE_ASSERT, "(!m_onImpactDataList)", (const char *)&queryFormat, "!m_onImpactDataList") )
            __debugbreak();
        }
      }
      v82 = (Particle_OnImpactData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 80i64 * particleCountMax);
      this->m_onImpactDataList = v82;
      if ( v82 )
        goto LABEL_60;
      Com_PrintError(21, "Could not allocate %d impact data sets for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
      goto LABEL_65;
    case PARTICLE_MODULE_TEST_TIME_IN_STATE:
      if ( (_RBX.pModule->m_flags & 1) != 0 )
        goto LABEL_61;
      if ( this->m_timeInStateList )
      {
        ParticleManager::ParticleSystemFree((LocalClientNum_t)m_localClientNum, this->m_timeInStateList);
        this->m_timeInStateList = NULL;
        Com_PrintWarning(21, "WARNING: You should only be using a single TestTimeInState module for %s\n", VFXName);
        if ( this->m_timeInStateList )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 898, ASSERT_TYPE_ASSERT, "(!m_timeInStateList)", (const char *)&queryFormat, "!m_timeInStateList") )
            __debugbreak();
        }
      }
      v83 = (float *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 4i64 * particleCountMax);
      this->m_timeInStateList = v83;
      if ( v83 )
        goto LABEL_60;
      Com_PrintError(21, "Could not allocate %d time in state array elements for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
      goto LABEL_65;
    default:
      goto LABEL_61;
  }
}

/*
==============
Particle_TrailData::AddPoint
==============
*/
bool Particle_TrailData::AddPoint(Particle_TrailData *this, const float4 *point)
{
  bool result; 
  unsigned int v23; 
  unsigned int lastPointIndex; 
  unsigned int NextIndex; 
  unsigned int numPointsRunning; 
  bool v35; 

  __asm { vmovaps [rsp+0A8h+var_48], xmm9 }
  _RDI = this;
  _RBX = point;
  Particle_GetPositionArray(this->pParticleData);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmm1, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
    vsubps  xmm9, xmm0, xmmword ptr [rax+r8*8]
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm2, xmm0, xmm9
    vcmpltps xmm0, xmm1, xmm2
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_18], xmm6
      vmovaps [rsp+0A8h+var_28], xmm7
      vmovaps [rsp+0A8h+var_38], xmm8
      vmulps  xmm8, xmm9, xmm9
      vhaddps xmm0, xmm8, xmm8
      vhaddps xmm7, xmm0, xmm0
      vcmpltps xmm0, xmm7, xmmword ptr [rdi+20h]
      vmovmskps eax, xmm0
      vmovaps [rsp+0A8h+var_58], xmm10
      vxorps  xmm10, xmm10, xmm10
    }
    if ( (_EAX & 0xF) == 15 && (v23 = _RDI->numPointsRunning, v23 > 1) )
    {
      __asm
      {
        vbroadcastss xmm0, dword ptr [rdi]
        vcmpltps xmm0, xmm0, xmm7
        vmovmskps eax, xmm0
      }
      if ( (_EAX & 0xF) == 15 )
      {
        __asm
        {
          vmovss  xmm5, dword ptr [rdi+34h]
          vcomiss xmm5, xmm10
        }
      }
      _RDX = _RDI->pointList;
      __asm
      {
        vsqrtps xmm0, xmm7
        vaddss  xmm1, xmm0, dword ptr [rdx+rax*8+40h]
      }
      _RCX = 10i64 * _RDI->lastPointIndex;
      result = 0;
      __asm { vmovss  dword ptr [rdx+rcx*8+40h], xmm1 }
    }
    else
    {
      lastPointIndex = _RDI->lastPointIndex;
      __asm
      {
        vsqrtps xmm0, xmm7
        vaddss  xmm6, xmm0, dword ptr [rax+rcx*8+40h]
      }
      _RDI->lastPointIndexPrev = lastPointIndex;
      NextIndex = Particle_TrailData::GetNextIndex(_RDI, lastPointIndex);
      numPointsRunning = _RDI->numPointsRunning;
      _RDI->lastPointIndex = NextIndex;
      if ( numPointsRunning < _RDI->numPointsMax )
        _RDI->numPointsRunning = numPointsRunning + 1;
      _RCX = 5i64 * NextIndex;
      _RAX = _RDI->pointList;
      v35 = __CFADD__(_RCX, _RCX);
      _RCX *= 2i64;
      __asm
      {
        vmovss  dword ptr [rax+rcx*8+40h], xmm6
        vcomiss xmm10, dword ptr [rdi+34h]
      }
      if ( v35 && _RDI->numPointsRunning > 2 )
      {
        __asm
        {
          vhaddps xmm0, xmm8, xmm8
          vhaddps xmm0, xmm0, xmm0
          vsqrtps xmm1, xmm0
          vdivps  xmm2, xmm9, xmm1
        }
        _RAX = _RDI->pointList;
        _RCX = 10i64 * _RDI->lastPointIndexPrev;
        __asm
        {
          vmovss  dword ptr [rax+rcx*8+44h], xmm2
          vextractps dword ptr [rax+rcx*8+48h], xmm2, 1
          vextractps dword ptr [rax+rcx*8+4Ch], xmm2, 2
        }
      }
      else
      {
        _RDI->pointList[_RDI->lastPointIndex].direction.v[0] = 0.0;
        _RDI->pointList[_RDI->lastPointIndex].direction.v[1] = 0.0;
        _RDI->pointList[_RDI->lastPointIndex].direction.v[2] = 0.0;
      }
      result = 1;
    }
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_38]
      vmovaps xmm7, [rsp+0A8h+var_28]
      vmovaps xmm6, [rsp+0A8h+var_18]
      vmovaps xmm10, [rsp+0A8h+var_58]
    }
  }
  else
  {
    result = 0;
  }
  __asm { vmovaps xmm9, [rsp+0A8h+var_48] }
  return result;
}

/*
==============
ParticleState::ApplyModifiers
==============
*/
void ParticleState::ApplyModifiers(ParticleState *this, const ParticleSystem *pSystemOwner, ParticleData *pParticleData)
{
  ParticleState *v5; 
  const int *RandomSeedArray; 
  const ParticleStateDef *m_pStateDef; 
  const int *v10; 
  __int64 m_particleCountRunning; 
  const int *v12; 
  const float4 *v13; 
  __int64 v14; 
  const int *v17; 
  const float4 *v18; 
  __int64 v19; 
  const float4 *v22; 
  const float4 *v25; 
  const ParticleStateDef *v29; 
  float4 result; 

  v5 = this;
  if ( !pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2994, ASSERT_TYPE_ASSERT, "(pSystemOwner)", (const char *)&queryFormat, "pSystemOwner") )
    __debugbreak();
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2995, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( (pSystemOwner->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2996, ASSERT_TYPE_ASSERT, "(pSystemOwner->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "pSystemOwner->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  _RBP = Particle_GetSizeArray(pParticleData);
  _RDI = Particle_GetVelocityArray(pParticleData);
  RandomSeedArray = Particle_GetRandomSeedArray(pParticleData);
  m_pStateDef = v5->m_pStateDef;
  v10 = RandomSeedArray;
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  v29 = m_pStateDef;
  if ( (m_pStateDef->flags & 0x18000000000i64) != 0 )
  {
    if ( !(_DWORD)m_particleCountRunning )
      goto LABEL_20;
    v17 = RandomSeedArray;
    v18 = _RBP;
    v19 = m_particleCountRunning;
    do
    {
      _RAX = ParticleSystem::ApplyScaleModifiers((ParticleSystem *)pSystemOwner, &result, v18++, *v17, 1);
      ++_RBP;
      ++v17;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovdqa xmmword ptr [rbp-10h], xmm0
      }
      --v19;
    }
    while ( v19 );
    goto LABEL_19;
  }
  if ( (pSystemOwner->m_flags & 0x100000000i64) != 0 )
  {
    ParticleModuleInitAttributes::InitParticleSize(v5->m_pModuleInitAttributes, _RBP, RandomSeedArray, m_particleCountRunning);
    if ( (_DWORD)m_particleCountRunning )
    {
      v12 = v10;
      v13 = _RBP;
      v14 = (unsigned int)m_particleCountRunning;
      do
      {
        _RAX = ParticleSystem::ApplyScaleModifiers((ParticleSystem *)pSystemOwner, &result, v13++, *v12, 1);
        ++_RBP;
        ++v12;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovdqa xmmword ptr [rbp-10h], xmm0
        }
        --v14;
      }
      while ( v14 );
LABEL_19:
      m_pStateDef = v29;
      v5 = this;
    }
  }
LABEL_20:
  if ( (m_pStateDef->flags & 0x300) != 0 )
  {
    if ( (_DWORD)m_particleCountRunning )
    {
      v22 = _RDI;
      do
      {
        _RAX = ParticleSystem::ApplyVelocityModifiers((ParticleSystem *)pSystemOwner, &result, v22++, *v10);
        ++_RDI;
        ++v10;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovdqa xmmword ptr [rdi-10h], xmm0
        }
        --m_particleCountRunning;
      }
      while ( m_particleCountRunning );
    }
  }
  else if ( (pSystemOwner->m_flags & 0x100000000i64) != 0 )
  {
    ParticleModuleInitAttributes::InitParticleVelocity(v5->m_pModuleInitAttributes, _RDI, v10, v5, m_particleCountRunning);
    if ( (_DWORD)m_particleCountRunning )
    {
      v25 = _RDI;
      do
      {
        _RAX = ParticleSystem::ApplyVelocityModifiers((ParticleSystem *)pSystemOwner, &result, v25++, *v10);
        ++_RDI;
        ++v10;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovdqa xmmword ptr [rdi-10h], xmm0
        }
        --m_particleCountRunning;
      }
      while ( m_particleCountRunning );
    }
  }
}

/*
==============
ParticleState::CalculateSpawnOffsetParticleTransform
==============
*/
void ParticleState::CalculateSpawnOffsetParticleTransform(ParticleState *this, const float4 *position, const ParticleEmitter *pEmitter, vector4 *outParticleTransform)
{
  ParticleState::SpawnShapeTypeModule v8; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  float4 lookAtInput; 
  float4 v41[6]; 
  void *retaddr; 

  _R11 = &retaddr;
  v8.pModuleSpawnShape = (const ParticleModuleInitSpawnShape *)this->m_spawnShapeTypeModule;
  _RSI = outParticleTransform;
  _R15 = position;
  if ( v8.pModuleSpawnShape && (v8.pModuleSpawnShape->m_flags & 1) == 0 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
    }
    ParticleModuleInitSpawnShape::GetCalculationOffset((ParticleModuleInitSpawnShape *)v8.pModuleSpawnShape, pEmitter, this, v41);
    m_pModuleInitRelativeVelocity = this->m_pModuleInitRelativeVelocity;
    __asm
    {
      vmovups xmm1, xmmword ptr [r15]
      vaddps  xmm6, xmm1, [rsp+0D8h+var_68]
    }
    if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
    {
      _RAX = ParticleEmitter::GetEmitterTransform((ParticleEmitter *)pEmitter, this);
      __asm { vmovups xmm7, xmmword ptr [rax+30h] }
      ParticleEmitter::GetEmitterTransform((ParticleEmitter *)pEmitter, this);
      __asm
      {
        vshufps xmm2, xmm6, xmm6, 0AAh ; 'ª'
        vshufps xmm3, xmm6, xmm6, 55h ; 'U'
        vshufps xmm4, xmm6, xmm6, 0
        vmulps  xmm0, xmm2, xmmword ptr [rax+20h]
        vaddps  xmm2, xmm0, xmmword ptr [rax+30h]
        vmulps  xmm0, xmm3, xmmword ptr [rax+10h]
        vaddps  xmm1, xmm0, xmm2
        vmulps  xmm0, xmm4, xmmword ptr [rax]
        vaddps  xmm6, xmm0, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm7, xmm7, xmm7 }
    }
    if ( v8.pModuleSpawnShape->m_normalAxis )
    {
      if ( v8.pModuleSpawnShape->m_normalAxis == PARTICLE_MODULE_AXIS_Y )
      {
        __asm
        {
          vsubps  xmm0, xmm6, xmm7
          vmovups xmmword ptr [rsp+0D8h+lookAtInput.v], xmm0
        }
        Particle_GenerateMatrixFromLookAt(&lookAtInput, _RSI);
      }
      else if ( v8.pModuleSpawnShape->m_normalAxis == PARTICLE_MODULE_AXIS_Z )
      {
        __asm
        {
          vsubps  xmm0, xmm6, xmm7
          vmovups xmmword ptr [rsp+0D8h+lookAtInput.v], xmm0
        }
        Particle_GenerateMatrixFromLookAt(&lookAtInput, _RSI);
        __asm
        {
          vmovups xmm2, xmmword ptr [rsi+10h]
          vxorps  xmm0, xmm0, xmm0
          vsubps  xmm1, xmm0, xmmword ptr [rsi+20h]
          vmovups xmmword ptr [rsi+20h], xmm2
        }
LABEL_14:
        __asm { vmovups xmmword ptr [rsi+10h], xmm1 }
        Particle_AssertFloat4IsNormalized(&_RSI->x);
        Particle_AssertFloat4IsNormalized(&_RSI->y);
        Particle_AssertFloat4IsNormalized(&_RSI->z);
      }
      __asm
      {
        vmovaps xmm7, [rsp+0D8h+var_48]
        vmovaps xmm6, [rsp+0D8h+var_38]
        vxorps  xmm0, xmm0, xmm0
        vmovups xmmword ptr [rsi+30h], xmm0
      }
      return;
    }
    __asm
    {
      vsubps  xmm0, xmm6, xmm7
      vmovups xmmword ptr [rsp+0D8h+lookAtInput.v], xmm0
    }
    Particle_GenerateMatrixFromLookAt(&lookAtInput, _RSI);
    __asm
    {
      vmovups xmm2, xmmword ptr [rsi+10h]
      vxorps  xmm0, xmm0, xmm0
      vsubps  xmm1, xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rsi], xmm2
    }
    goto LABEL_14;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
    vmovups [rsp+0D8h+var_A8], ymm0
    vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
    vmovups [rsp+0D8h+var_88], ymm0
    vmovups ymm0, [rsp+0D8h+var_A8]
    vmovups ymm1, [rsp+0D8h+var_88]
    vmovups ymmword ptr [r9], ymm0
    vmovups ymmword ptr [r9+20h], ymm1
  }
}

/*
==============
ParticleState::DebugDraw
==============
*/
void ParticleState::DebugDraw(ParticleState *this, const ParticleEmitter *pEmitterOwner, const ParticleData *pParticleData)
{
  ParticleData *v6; 
  ParticleEmitter *v7; 
  ParticleState *v8; 
  __int64 v9; 
  ParticleState::ModuleData **m_pModuleDataList; 
  const ParticleStateDef *m_pStateDef; 
  ParticleState::ModuleData *v12; 
  __int64 v13; 
  const ParticleModule *pModule; 
  void (__fastcall *debugDrawFunc)(const ParticleModule *, const ParticleEmitter *, const ParticleData *, const ParticleState *); 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  ParticleRelativeVelocityType m_velocityType; 
  __int64 m_particleCountRunning; 
  float4 *PositionArray; 
  bool v20; 
  __int64 v27; 
  bool v30; 
  tmat33_t<vec3_t> *p_axis; 
  __int64 v45; 
  __int64 v47; 
  unsigned __int8 *v49; 
  const dvar_t *v74; 
  __int64 v75; 
  Particle_TrailData *TrailDataList; 
  unsigned int *p_numPointsRunning; 
  __int64 v78; 
  unsigned int v79; 
  ParticleData *v80; 
  unsigned int v81; 
  const dvar_t *v92; 
  const dvar_t *v93; 
  unsigned int v94; 
  __int64 v95; 
  __int64 v96; 
  unsigned __int8 v97; 
  const VectorFieldInstance *Instance; 
  const dvar_t *v99; 
  const VectorFieldInstance *v100; 
  float length; 
  bool v102; 
  ParticleState::ModuleData **v103; 
  unsigned __int8 *ParticleDataArray; 
  vec3_t pos; 
  vec3_t start; 
  vec4_t color; 
  tmat33_t<vec3_t> in2; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  v6 = (ParticleData *)pParticleData;
  *(_QWORD *)start.v = pEmitterOwner;
  v7 = (ParticleEmitter *)pEmitterOwner;
  v8 = this;
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2230, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2231, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !v6->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2232, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v9 = 0i64;
  m_pModuleDataList = v8->m_pModuleDataList;
  *(_QWORD *)color.v = 0i64;
  v103 = v8->m_pModuleDataList;
  do
  {
    m_pStateDef = v8->m_pStateDef;
    if ( !*(&m_pStateDef->moduleGroupDefs->disabled + v9) )
    {
      v12 = *m_pModuleDataList;
      if ( *m_pModuleDataList )
      {
        v13 = *(int *)((char *)&m_pStateDef->moduleGroupDefs->numModules + v9);
        if ( v13 > 0 )
        {
          do
          {
            pModule = v12->pModule;
            if ( !v12->pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2255, ASSERT_TYPE_ASSERT, "(pModule)", (const char *)&queryFormat, "pModule") )
              __debugbreak();
            if ( (pModule->m_flags & 1) == 0 )
            {
              debugDrawFunc = v12->pUpdateData->debugDrawFunc;
              if ( debugDrawFunc )
                debugDrawFunc(pModule, v7, v6, v8);
            }
            ++v12;
            --v13;
          }
          while ( v13 );
          v9 = *(_QWORD *)color.v;
          m_pModuleDataList = v103;
        }
      }
    }
    ++m_pModuleDataList;
    v9 += 16i64;
    v103 = m_pModuleDataList;
    *(_QWORD *)color.v = v9;
  }
  while ( v9 < 48 );
  if ( particle_show_axes_effect_origin->current.enabled )
  {
    m_pModuleInitRelativeVelocity = v8->m_pModuleInitRelativeVelocity;
    if ( m_pModuleInitRelativeVelocity )
    {
      if ( (m_pModuleInitRelativeVelocity->m_flags & 1) == 0 )
      {
        m_velocityType = m_pModuleInitRelativeVelocity->m_velocityType;
        if ( m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN || m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN_WITH_BOLT_INFO )
        {
          m_particleCountRunning = v6->m_particleCountRunning;
          PositionArray = Particle_GetPositionArray(v6);
          v20 = v6->m_pParticleData == NULL;
          *(_QWORD *)color.v = PositionArray;
          if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
            __debugbreak();
          ParticleDataArray = ParticleData::GetParticleDataArray(v6, PARTICLE_DATA_SPAWN_QUAT);
          _R12 = ParticleEmitter::GetEmitterTransform(v7, v8);
          __asm
          {
            vmovups xmm1, xmmword ptr [rax]
            vmovss  dword ptr [rbp+80h+in2], xmm1
            vextractps dword ptr [rbp+80h+in2+4], xmm1, 1
            vextractps dword ptr [rbp+80h+in2+8], xmm1, 2
            vmovups xmm1, xmmword ptr [rax+10h]
            vmovss  dword ptr [rbp+80h+in2+0Ch], xmm1
            vextractps dword ptr [rbp+80h+in2+10h], xmm1, 1
            vextractps dword ptr [rbp+80h+in2+14h], xmm1, 2
            vmovups xmm1, xmmword ptr [rax+20h]
            vmovss  dword ptr [rbp+80h+in2+18h], xmm1
            vextractps dword ptr [rbp+80h+in2+1Ch], xmm1, 1
            vextractps dword ptr [rbp+80h+in2+20h], xmm1, 2
          }
          if ( (_DWORD)m_particleCountRunning )
          {
            _R13 = *(_QWORD *)color.v;
            _RBX = 0i64;
            v27 = 0i64;
            do
            {
              if ( v8->m_pStateDef->elementType != 9 )
                goto LABEL_38;
              if ( !v6->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
                __debugbreak();
              if ( !*(_DWORD *)&ParticleData::GetParticleDataArray(v6, PARTICLE_DATA_CHILD_SYSTEM)[v27] )
              {
LABEL_38:
                _RAX = ParticleDataArray;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rbx+rax]
                  vmovups xmmword ptr [rbp+80h+quat], xmm0
                }
                QuatToAxis(&quat, &axis);
                v30 = ParticleState::UseBoltInfo(v8);
                p_axis = &axis;
                if ( v30 )
                {
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [rbx+r13]
                    vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
                    vshufps xmm3, xmm0, xmm0, 55h ; 'U'
                    vshufps xmm4, xmm0, xmm0, 0
                    vmulps  xmm0, xmm2, xmmword ptr [r12+20h]
                    vaddps  xmm2, xmm0, xmmword ptr [r12+30h]
                    vmulps  xmm0, xmm3, xmmword ptr [r12+10h]
                    vaddps  xmm1, xmm0, xmm2
                    vmulps  xmm0, xmm4, xmmword ptr [r12]
                    vaddps  xmm1, xmm0, xmm1
                    vmovss  dword ptr [rsp+180h+pos], xmm1
                    vextractps dword ptr [rsp+180h+pos+4], xmm1, 1
                    vextractps dword ptr [rsp+180h+pos+8], xmm1, 2
                  }
                  MatrixMultiply(&axis, &in2, &out);
                  p_axis = &out;
                }
                else
                {
                  __asm
                  {
                    vmovups xmm1, xmmword ptr [rbx+r13]
                    vmovss  dword ptr [rsp+180h+pos], xmm1
                    vextractps dword ptr [rsp+180h+pos+4], xmm1, 1
                    vextractps dword ptr [rsp+180h+pos+8], xmm1, 2
                  }
                }
                _RAX = particle_axes_length;
                __asm
                {
                  vmovss  xmm0, dword ptr [rax+28h]
                  vmovss  [rsp+180h+length], xmm0
                }
                Particle_DebugAxis(p_axis, &pos, &colorMagenta, &colorYellow, &colorCyan, length, 1, 0);
              }
              v27 += 4i64;
              _RBX += 16i64;
              --m_particleCountRunning;
            }
            while ( m_particleCountRunning );
            v7 = *(ParticleEmitter **)start.v;
          }
        }
      }
    }
  }
  __asm { vmovaps [rsp+180h+var_40], xmm6 }
  if ( particle_debug_draw_velocity->current.enabled )
  {
    v45 = v6->m_particleCountRunning;
    Particle_GetVelocityArray(v6);
    _RBX = Particle_GetPositionArray(v6);
    ParticleEmitter::GetEmitterTransform(v7, v8);
    if ( (_DWORD)v45 )
    {
      __asm { vmovaps [rsp+180h+var_50], xmm7 }
      v47 = 0i64;
      __asm
      {
        vmovaps [rsp+180h+var_60], xmm8
        vmovss  xmm8, cs:__real@40400000
      }
      do
      {
        if ( v8->m_pStateDef->elementType == 9 )
        {
          if ( !v6->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
            __debugbreak();
          v49 = ParticleData::GetParticleDataArray(v6, PARTICLE_DATA_CHILD_SYSTEM);
          _RCX = &colorLtBlue;
          if ( *(_DWORD *)&v49[v47] )
            _RCX = &colorMdBlue;
          __asm { vmovups xmm0, xmmword ptr [rcx] }
        }
        else
        {
          __asm { vmovups xmm0, xmmword ptr cs:?colorLtBlue@@3Tvec4_t@@B; vec4_t const colorLtBlue }
        }
        __asm
        {
          vmovups xmm1, xmmword ptr [rbx]
          vaddps  xmm6, xmm1, xmmword ptr [r12+rbx]
          vmovups xmm7, xmm1
          vmovups xmmword ptr [rbp+80h+color], xmm0
        }
        if ( ParticleState::UseBoltInfo(v8) )
        {
          __asm
          {
            vshufps xmm2, xmm7, xmm7, 0AAh ; 'ª'
            vmulps  xmm0, xmm2, xmmword ptr [r13+20h]
            vaddps  xmm2, xmm0, xmmword ptr [r13+30h]
            vshufps xmm3, xmm7, xmm7, 55h ; 'U'
            vmulps  xmm0, xmm3, xmmword ptr [r13+10h]
            vaddps  xmm1, xmm0, xmm2
            vshufps xmm4, xmm7, xmm7, 0
            vmulps  xmm0, xmm4, xmmword ptr [r13+0]
            vaddps  xmm7, xmm0, xmm1
            vshufps xmm2, xmm6, xmm6, 0AAh ; 'ª'
            vmulps  xmm0, xmm2, xmmword ptr [r13+20h]
            vaddps  xmm2, xmm0, xmmword ptr [r13+30h]
            vshufps xmm3, xmm6, xmm6, 55h ; 'U'
            vmulps  xmm0, xmm3, xmmword ptr [r13+10h]
            vshufps xmm4, xmm6, xmm6, 0
            vaddps  xmm1, xmm0, xmm2
            vmulps  xmm0, xmm4, xmmword ptr [r13+0]
            vaddps  xmm6, xmm0, xmm1
          }
        }
        __asm
        {
          vmovaps xmm2, xmm8; size
          vmovss  dword ptr [rsp+180h+start], xmm7
          vextractps dword ptr [rsp+180h+start+4], xmm7, 1
          vextractps dword ptr [rsp+180h+start+8], xmm7, 2
          vmovss  dword ptr [rsp+180h+pos], xmm6
          vextractps dword ptr [rsp+180h+pos+4], xmm6, 1
          vextractps dword ptr [rsp+180h+pos+8], xmm6, 2
        }
        Particle_DebugVector(&start, &pos, *(const float *)&_XMM2, &color, 1, 0);
        v47 += 4i64;
        ++_RBX;
        --v45;
      }
      while ( v45 );
      __asm
      {
        vmovaps xmm8, [rsp+180h+var_60]
        vmovaps xmm7, [rsp+180h+var_50]
      }
    }
  }
  if ( v8->m_pStateDef->elementType == 4 )
  {
    v74 = particle_debug_draw_geo_trails;
    if ( !particle_debug_draw_geo_trails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v74);
    if ( v74->current.enabled )
    {
      v75 = v6->m_particleCountRunning;
      v102 = (v8->m_pStateDef->flags & 8) != 0;
      TrailDataList = ParticleState::GetTrailDataList(v8);
      if ( (_DWORD)v75 )
      {
        p_numPointsRunning = &TrailDataList->numPointsRunning;
        *(_QWORD *)color.v = v75;
        do
        {
          v78 = *p_numPointsRunning;
          v79 = *(p_numPointsRunning - 5);
          v80 = *(ParticleData **)(p_numPointsRunning - 15);
          if ( (_DWORD)v78 == v79 )
            v81 = (*(p_numPointsRunning - 2) + 1) % v79;
          else
            v81 = *(p_numPointsRunning - 3);
          if ( v80->m_particleCountRunning != (_DWORD)v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2373, ASSERT_TYPE_ASSERT, "(pTrailParticleData->GetParticleCountRunning() == numPoints)", (const char *)&queryFormat, "pTrailParticleData->GetParticleCountRunning() == numPoints") )
            __debugbreak();
          _R12 = *(_QWORD *)(p_numPointsRunning - 17);
          if ( !v80->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
            __debugbreak();
          _R13 = ParticleData::GetParticleDataArray(v80, PARTICLE_DATA_POSITION);
          if ( (_DWORD)v78 )
          {
            __asm { vmovups xmm6, cs:__xmm@41a0000041a0000041a0000041a00000 }
            do
            {
              _RCX = 2i64 * v81;
              if ( v102 )
              {
                _RAX = 10i64 * v81;
                __asm
                {
                  vmovups xmm1, xmmword ptr [r12+rax*8+30h]
                  vaddps  xmm3, xmm1, xmmword ptr [r13+rcx*8+0]
                }
              }
              else
              {
                __asm { vmovups xmm3, xmmword ptr [r13+rcx*8+0] }
              }
              __asm
              {
                vmovss  dword ptr [rsp+180h+start], xmm3
                vmulps  xmm0, xmm6, xmmword ptr [r12+rax*8+20h]
                vaddps  xmm2, xmm0, xmm3
                vmovss  dword ptr [rsp+180h+pos], xmm2
                vextractps dword ptr [rsp+180h+pos+4], xmm2, 1
                vextractps dword ptr [rsp+180h+pos+8], xmm2, 2
                vextractps dword ptr [rsp+180h+start+4], xmm3, 1
                vextractps dword ptr [rsp+180h+start+8], xmm3, 2
              }
              Particle_DebugLine(&start, &pos, &colorFacebookBlue, 1, 0);
              if ( v81 >= *(p_numPointsRunning - 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
                __debugbreak();
              v81 = (v81 + 1) % *(p_numPointsRunning - 5);
              --v78;
            }
            while ( v78 );
          }
          p_numPointsRunning += 24;
          --*(_QWORD *)color.v;
        }
        while ( *(_QWORD *)color.v );
        v8 = this;
        v6 = (ParticleData *)pParticleData;
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+180h+var_40] }
  if ( v8->m_pStateDef->elementType == 11 )
  {
    v92 = particle_debug_draw_vectorfields;
    if ( !particle_debug_draw_vectorfields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v92);
    if ( v92->current.enabled )
      goto LABEL_95;
    v93 = DVARINT_cg_vectorFieldsDraw;
    if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v93);
    if ( v93->current.integer )
    {
LABEL_95:
      v94 = v6->m_particleCountRunning;
      if ( v94 )
      {
        v95 = 0i64;
        v96 = v94;
        do
        {
          v97 = v8->m_vectorFieldList[v95];
          if ( v97 != 0xFF )
          {
            Instance = CG_VectorField_GetInstance(v97);
            v99 = DVARINT_cg_vectorFieldsDraw;
            v100 = Instance;
            if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v99);
            CG_VectorField_DrawField(v100, v99->current.integer != 1);
          }
          ++v95;
          --v96;
        }
        while ( v96 );
      }
    }
  }
}

/*
==============
ParticleState::EmitPhysicsParticles
==============
*/
void ParticleState::EmitPhysicsParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleCountEmit, const ParticleEmitter *pEmitterOwner)
{
  const ParticleStateDef *m_pStateDef; 
  ParticleModuleInitModel *pModule; 

  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2027, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !particleCountEmit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2028, ASSERT_TYPE_ASSERT, "(particleCountEmit > 0)", (const char *)&queryFormat, "particleCountEmit > 0") )
    __debugbreak();
  if ( (this->m_pStateDef->flags & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2029, ASSERT_TYPE_ASSERT, "(HasPhysics())", (const char *)&queryFormat, "HasPhysics()") )
    __debugbreak();
  m_pStateDef = this->m_pStateDef;
  if ( (m_pStateDef->flags & 0x400) != 0 && this->m_pModulePhysicsLight )
  {
    if ( this->m_pendingPhysicsFXPipelineCreation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2035, ASSERT_TYPE_ASSERT, "(!m_pendingPhysicsFXPipelineCreation)", (const char *)&queryFormat, "!m_pendingPhysicsFXPipelineCreation") )
      __debugbreak();
    if ( !this->m_physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2036, ASSERT_TYPE_ASSERT, "(m_physicsFXPipelineInstance)", (const char *)&queryFormat, "m_physicsFXPipelineInstance") )
      __debugbreak();
    if ( !this->m_pModulePhysicsLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2037, ASSERT_TYPE_ASSERT, "(m_pModulePhysicsLight)", (const char *)&queryFormat, "m_pModulePhysicsLight") )
      __debugbreak();
    ParticleModulePhysicsLight::InitPhysicsParticles((ParticleModulePhysicsLight *)this->m_pModulePhysicsLight, pParticleData, particleCountEmit, this);
    m_pStateDef = this->m_pStateDef;
  }
  if ( (m_pStateDef->flags & 0x400) != 0 && !this->m_pModulePhysicsLight && this->m_physicsInstanceIDList )
  {
    if ( m_pStateDef->elementType != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2046, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL") )
      __debugbreak();
    pModule = (ParticleModuleInitModel *)this->m_elementTypeModule.pModule;
    if ( !pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2048, ASSERT_TYPE_ASSERT, "(pModuleInitModel)", (const char *)&queryFormat, "pModuleInitModel") )
      __debugbreak();
    ParticleModuleInitModel::InitPhysicsParticles(pModule, pParticleData, particleCountEmit, pEmitterOwner, this, this->m_physicsInstanceIDList);
  }
}

/*
==============
ParticleState::FillImpactData
==============
*/
void ParticleState::FillImpactData(ParticleState *this, Particle_OnImpactData *impactData, float4 *position, float4 *normal, float4 *velocity, int surfaceFlags, unsigned int entNum, TraceHitType hitType, scr_string_t partName, float4 *rotationAngleQuat, const ParticleEmitter *pEmitterOwner)
{
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  ParticleSystem *v24; 
  const ParticleSystemDef *v25; 
  ParticleSystem *v29; 
  const ParticleSystemDef *v30; 
  bool v34; 
  ParticleSystem *v35; 
  const ParticleSystemDef *v36; 
  bool v37; 
  const ParticleSystemDef *v48; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 

  __asm { vmovss  xmm0, dword ptr [r8] }
  _R14 = rotationAngleQuat;
  __asm { vmovss  [rsp+98h+var_48], xmm0 }
  _R15 = normal;
  _RBX = position;
  _RDI = impactData;
  if ( (v73 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  [rsp+98h+var_48], xmm0
  }
  if ( (v74 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  [rsp+98h+var_48], xmm0
  }
  if ( (v75 & 0x7F800000) == 2139095040 )
  {
LABEL_41:
    if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
      __debugbreak();
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)this->m_pEmitterOwner);
    Def = ParticleSystem::GetDef(SystemOwner);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3757, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[0] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[1] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[2] ) ) )", "fx %s", Def->name) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+98h+var_48], xmm0
  }
  if ( (v76 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+98h+var_48], xmm0
  }
  if ( (v77 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+98h+var_48], xmm0
  }
  if ( (v78 & 0x7F800000) == 2139095040 )
  {
LABEL_42:
    if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
      __debugbreak();
    v24 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)this->m_pEmitterOwner);
    v25 = ParticleSystem::GetDef(v24);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3758, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[0] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[1] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[2] ) ) )", "fx %s", v25->name) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+98h+var_48], xmm0
  }
  if ( (v79 & 0x7F800000) == 2139095040 )
    goto LABEL_43;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+98h+var_48], xmm0
  }
  if ( (v80 & 0x7F800000) == 2139095040 )
    goto LABEL_43;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+98h+var_48], xmm0
  }
  if ( (v81 & 0x7F800000) == 2139095040 )
  {
LABEL_43:
    if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
      __debugbreak();
    v29 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)this->m_pEmitterOwner);
    v30 = ParticleSystem::GetDef(v29);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3759, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[0] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[1] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[2] ) ) )", "fx %s", v30->name) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  v34 = _EAX == 0;
  if ( _EAX )
  {
    if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
      __debugbreak();
    v35 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)this->m_pEmitterOwner);
    v36 = ParticleSystem::GetDef(v35);
    v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3760, ASSERT_TYPE_ASSERT, "( !Float4IsNaN( rotationAngleQuat ) )", "fx %s", v36->name);
    v34 = !v37;
    if ( v37 )
      __debugbreak();
  }
  _RAX = velocity;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmm1, xmmword ptr [r15]
    vmovdqu xmmword ptr [rdi], xmm0
    vmovups xmm0, xmmword ptr [rax]
    vmovdqu xmmword ptr [rdi+10h], xmm1
    vmovups xmm1, xmmword ptr [r14]
    vmovdqu xmmword ptr [rdi+20h], xmm0
    vmovups xmmword ptr [rdi+30h], xmm1
    vmovups xmm0, xmmword ptr [rdi+20h]
    vmulps  xmm1, xmm0, xmm0
  }
  _RDI->surfaceFlags = surfaceFlags;
  __asm { vinsertps xmm2, xmm1, xmm1, 8 }
  _RDI->entNum = entNum;
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vcomiss xmm1, cs:__real@34000000
  }
  _RDI->hitType = hitType;
  _RDI->partName = partName;
  if ( v34 )
  {
    if ( !pEmitterOwner->m_pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
      __debugbreak();
    v48 = ParticleSystem::GetDef((ParticleSystem *)pEmitterOwner->m_pSystemOwner);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3771, ASSERT_TYPE_ASSERT, "( ( Float4ExtractX( Float3LengthSq( impactData->incomingVelocity ) ) > 1.192092896e-07F ) )", "( pEmitterOwner->GetSystemOwner()->GetVFXName() ) = %s", v48->name) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+34h]
    vmovss  xmm3, dword ptr [rdi+38h]
    vmovss  xmm5, dword ptr [rdi+30h]
    vmovss  xmm4, dword ptr [rdi+3Ch]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, cs:__real@3f800000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b83126f
    vmovss  xmm1, dword ptr [rdi+38h]
    vmovss  xmm2, dword ptr [rdi+34h]
    vmovaps xmm0, xmm4
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+98h+var_50], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+98h+var_58], xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+98h+var_60], xmm2
    vcvtss2sd xmm3, xmm5, xmm5
    vmovsd  [rsp+98h+var_68], xmm3
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3772, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( impactData->particleQuat ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( impactData->particleQuat )", v69, v70, v71, v72) )
    __debugbreak();
}

/*
==============
ParticleState::FreeGroupMemory
==============
*/
void ParticleState::FreeGroupMemory(ParticleState *this, unsigned int numGroupsToFree)
{
  __int64 v3; 
  LocalClientNum_t m_localClientNum; 
  void **m_pModuleDataList; 

  v3 = numGroupsToFree;
  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  m_localClientNum = this->m_pEmitterOwner->m_pSystemOwner->m_localClientNum;
  if ( (_DWORD)v3 )
  {
    m_pModuleDataList = (void **)this->m_pModuleDataList;
    do
    {
      ParticleManager::ParticleSystemFree(m_localClientNum, *m_pModuleDataList);
      *m_pModuleDataList++ = NULL;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
ParticleState::GetVFXName
==============
*/
const char *ParticleState::GetVFXName(ParticleState *this)
{
  ParticleSystem *SystemOwner; 

  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)this->m_pEmitterOwner);
  return ParticleSystem::GetDef(SystemOwner)->name;
}

/*
==============
ParticleState::HasModifierModules
==============
*/
bool ParticleState::HasModifierModules(ParticleState *this)
{
  return *(ParticleModuleType *)((char *)&this->m_elementTypeModule.pModule[12].m_type + 1) != PARTICLE_MODULE_INIT_BEGIN;
}

/*
==============
ParticleState::Init
==============
*/
char ParticleState::Init(ParticleState *this, const ParticleEmitter *pEmitterOwner, const ParticleStateDef *pStateDef, const unsigned int stateIndex, ParticleData *pParticleData, const unsigned int particleCountMax)
{
  ParticleModule::ParticleModuleGroup v9; 
  __int64 v10; 
  const ParticleSystem *m_pSystemOwner; 
  void **m_pModuleDataList; 
  ParticleState::ModuleData **v13; 
  LocalClientNum_t m_localClientNum; 
  const ParticleStateDef *m_pStateDef; 
  ParticleModuleGroupDef *moduleGroupDefs; 
  __int64 numModules; 
  ParticleState::ModuleData *v18; 
  signed int v19; 
  LocalClientNum_t v20; 
  unsigned __int32 v21; 
  __int64 v22; 
  bool v24; 
  LocalClientNum_t v25; 
  __int64 v26; 
  LocalClientNum_t pParticleDataa; 

  if ( !pStateDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 72, ASSERT_TYPE_ASSERT, "(pStateDef)", (const char *)&queryFormat, "pStateDef") )
    __debugbreak();
  if ( ((unsigned __int8)pStateDef & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 73, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pStateDef)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pStateDef)) % (PARTICLE_ALIGNMENT) == 0") )
    __debugbreak();
  v9 = PARTICLE_MODULE_GROUP_INIT;
  this->m_pParticleData = pParticleData;
  v10 = 0i64;
  this->m_pEmitterOwner = pEmitterOwner;
  this->m_particleCountMax = particleCountMax;
  this->m_pStateDef = pStateDef;
  this->m_numVectorFields = 0;
  this->m_maxActiveParticleSimParticles = 0;
  this->m_pParticleSimUpdateParticleData = NULL;
  this->m_pendingPhysicsFXPipelineCreation = 0;
  this->m_trailDataList = NULL;
  this->m_tailDataList = NULL;
  this->m_vectorFieldList = NULL;
  this->m_timeInStateList = NULL;
  this->m_systemBeamChild = PARTICLE_SYSTEM_INVALID_HANDLE;
  m_pSystemOwner = pEmitterOwner->m_pSystemOwner;
  m_pModuleDataList = (void **)this->m_pModuleDataList;
  v13 = this->m_pModuleDataList;
  m_localClientNum = m_pSystemOwner->m_localClientNum;
  for ( pParticleDataa = m_localClientNum; ; m_localClientNum = pParticleDataa )
  {
    if ( *v13 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 93, ASSERT_TYPE_ASSERT, "(!m_pModuleDataList[moduleGroupIndex])", (const char *)&queryFormat, "!m_pModuleDataList[moduleGroupIndex]") )
        __debugbreak();
      m_localClientNum = pParticleDataa;
    }
    m_pStateDef = this->m_pStateDef;
    moduleGroupDefs = m_pStateDef->moduleGroupDefs;
    numModules = m_pStateDef->moduleGroupDefs[v10].numModules;
    if ( !(_DWORD)numModules )
    {
      *v13 = NULL;
      goto LABEL_18;
    }
    v18 = (ParticleState::ModuleData *)ParticleManager::ParticleSystemAllocAndClear(m_localClientNum, 16 * numModules);
    *v13 = v18;
    if ( !v18 )
    {
      Com_PrintError(21, "Could not allocate %d Particle Modules. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", (unsigned int)numModules);
      v24 = this->m_pEmitterOwner == NULL;
      this->m_isRunning = 0;
      if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
        __debugbreak();
      v25 = this->m_pEmitterOwner->m_pSystemOwner->m_localClientNum;
      if ( v9 )
      {
        v26 = (unsigned int)v9;
        do
        {
          ParticleManager::ParticleSystemFree(v25, *m_pModuleDataList);
          *m_pModuleDataList++ = NULL;
          --v26;
        }
        while ( v26 );
      }
      return 0;
    }
    v19 = 0;
    this->m_stateIndex = stateIndex;
    this->m_isRunning = 1;
    if ( (int)numModules > 0 )
      break;
LABEL_18:
    ++v9;
    ++v13;
    ++v10;
    if ( (unsigned int)v9 >= PARTICLE_MODULE_GROUP_COUNT )
      return 1;
  }
  while ( ParticleState::AddModule(this, this->m_pEmitterOwner, v9, &moduleGroupDefs[v10].moduleDefs[v19], v19, particleCountMax) )
  {
    if ( ++v19 >= (int)numModules )
      goto LABEL_18;
  }
  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  v20 = this->m_pEmitterOwner->m_pSystemOwner->m_localClientNum;
  v21 = v9 + 1;
  if ( v21 )
  {
    v22 = v21;
    do
    {
      ParticleManager::ParticleSystemFree(v20, *m_pModuleDataList);
      *m_pModuleDataList++ = NULL;
      --v22;
    }
    while ( v22 );
  }
  return 0;
}

/*
==============
Particle_ParticleSimModelData::Init
==============
*/
bool Particle_ParticleSimModelData::Init(Particle_ParticleSimModelData *this, unsigned int _maxActiveParticles, const ParticleEmitter *pEmitter)
{
  bool result; 

  if ( !_maxActiveParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3683, ASSERT_TYPE_ASSERT, "(_maxActiveParticles > 0)", (const char *)&queryFormat, "_maxActiveParticles > 0") )
    __debugbreak();
  if ( !pEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3684, ASSERT_TYPE_ASSERT, "(pEmitter)", (const char *)&queryFormat, "pEmitter") )
    __debugbreak();
  result = 1;
  this->maxActiveParticles = _maxActiveParticles;
  return result;
}

/*
==============
Particle_TrailData::Init
==============
*/

bool __fastcall Particle_TrailData::Init(Particle_TrailData *this, unsigned int _numPointsMax, double _splitDistance, double _splitAngle, unsigned int _numSheets, const ParticleEmitter *pEmitter)
{
  __int64 v9; 
  LocalClientNum_t m_localClientNum; 
  Particle_TrailPoint *v15; 
  bool result; 
  ParticleData *v17; 
  ParticleEmitterDef *EmitterDef; 
  ParticleDataFlags DataFlags; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  v9 = _numPointsMax;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( !_numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3518, ASSERT_TYPE_ASSERT, "(_numPointsMax > 0)", (const char *)&queryFormat, "_numPointsMax > 0") )
    __debugbreak();
  if ( !_numSheets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3519, ASSERT_TYPE_ASSERT, "(_numSheets > 0)", (const char *)&queryFormat, "_numSheets > 0") )
    __debugbreak();
  if ( !pEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3520, ASSERT_TYPE_ASSERT, "(pEmitter)", (const char *)&queryFormat, "pEmitter") )
    __debugbreak();
  if ( _RBX->pointList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3521, ASSERT_TYPE_ASSERT, "(!pointList)", (const char *)&queryFormat, "!pointList") )
    __debugbreak();
  if ( _RBX->pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3522, ASSERT_TYPE_ASSERT, "(!pParticleData)", (const char *)&queryFormat, "!pParticleData") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vshufps xmm0, xmm0, xmm0, 0
  }
  m_localClientNum = pEmitter->m_pSystemOwner->m_localClientNum;
  __asm
  {
    vmovss  dword ptr [rbx+30h], xmm6
    vmovss  dword ptr [rbx+34h], xmm7
    vmovups xmmword ptr [rbx+20h], xmm0
  }
  _RBX->numPointsMax = v9;
  _RBX->numSheets = _numSheets;
  v15 = (Particle_TrailPoint *)ParticleManager::ParticleSystemAllocAndClear(m_localClientNum, 80 * v9);
  _RBX->pointList = v15;
  if ( v15 )
  {
    v17 = (ParticleData *)ParticleManager::ParticleSystemAllocAndClear(m_localClientNum, 0x70ui64);
    _RBX->pParticleData = v17;
    if ( v17 )
    {
      EmitterDef = (ParticleEmitterDef *)ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitter);
      DataFlags = ParticleEmitterDef::GetDataFlags(EmitterDef);
      result = ParticleData::Init(_RBX->pParticleData, m_localClientNum, _RBX->numPointsMax, pEmitter, DataFlags);
    }
    else
    {
      ParticleManager::ParticleSystemFree(m_localClientNum, _RBX->pointList);
      result = 0;
      _RBX->pointList = NULL;
    }
  }
  else
  {
    Com_PrintError(21, "Could not allocate %d trail points. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", _RBX->numPointsMax);
    result = 0;
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return result;
}

/*
==============
ParticleState::InitAtlasData
==============
*/
void ParticleState::InitAtlasData(ParticleState *this, const ParticleModuleInitAtlas *const pModuleInitAtlas, const ParticleEmitter *const pEmitterOwner)
{
  unsigned __int8 v6; 
  const ParticleModuleInitParticleSim *m_pModuleInitParticleSim; 
  const ParticleLinkedAssetListDef *p_m_linkedAssetList; 
  Material *material; 
  const ParticleLinkedAssetListDef *v10; 
  const ParticleModuleInitMaterial *m_pModuleInitMaterial; 
  const ParticleLinkedAssetListDef *v12; 
  unsigned __int8 textureAtlasRowCount; 
  unsigned __int8 v14; 
  __int16 v15; 

  if ( !pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3366, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
    __debugbreak();
  if ( (pModuleInitAtlas->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3367, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas->IsEnabled())", (const char *)&queryFormat, "pModuleInitAtlas->IsEnabled()") )
    __debugbreak();
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3368, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  this->m_atlasData.behavior = 0;
  v6 = pModuleInitAtlas->m_randomIndex + 1;
  this->m_atlasData.behavior = v6;
  if ( pModuleInitAtlas->m_playOverLife )
  {
    v6 |= 4u;
    this->m_atlasData.behavior = v6;
    if ( (pModuleInitAtlas->m_flags & 4) != 0 && (pEmitterOwner->m_flags & 8) == 0 )
    {
      v6 |= 0x20u;
      this->m_atlasData.behavior = v6;
    }
  }
  if ( pModuleInitAtlas->m_loopCount != -1 )
  {
    this->m_atlasData.behavior = v6 | 8;
    this->m_atlasData.loopCount = pModuleInitAtlas->m_loopCount;
  }
  m_pModuleInitParticleSim = this->m_pModuleInitParticleSim;
  if ( m_pModuleInitParticleSim )
  {
    p_m_linkedAssetList = &m_pModuleInitParticleSim->m_linkedAssetList;
    if ( p_m_linkedAssetList )
    {
      if ( p_m_linkedAssetList->assetList )
      {
        Particle_VerifyAssetList(p_m_linkedAssetList);
        material = *(Material **)&p_m_linkedAssetList->assetList->material->contents;
        if ( material )
          goto LABEL_28;
      }
    }
  }
  if ( this->m_pStateDef->elementType == 2 && (v10 = (const ParticleLinkedAssetListDef *)&this->m_elementTypeModule.pModule[2], this->m_elementTypeModule.pModule != (const ParticleModule *)-16i64) && v10->assetList && (Particle_VerifyAssetList(v10), (material = v10->assetList->material) != NULL) || (m_pModuleInitMaterial = this->m_pModuleInitMaterial) != NULL && (v12 = &m_pModuleInitMaterial->m_linkedAssetList) != NULL && v12->assetList && (Particle_VerifyAssetList(v12), (material = v12->assetList->material) != NULL) )
  {
LABEL_28:
    textureAtlasRowCount = material->textureAtlasRowCount;
    if ( textureAtlasRowCount && material->textureAtlasColumnCount )
    {
      this->m_atlasData.rowIndexBits = I_log2Floor(textureAtlasRowCount);
      v14 = I_log2Floor(material->textureAtlasColumnCount);
      this->m_atlasData.colIndexBits = v14;
      if ( material->packedAtlasDataSize )
      {
        v15 = *(_WORD *)material->packedAtlasData;
      }
      else
      {
        if ( material->textureAtlasRowCount <= 1u && material->textureAtlasColumnCount <= 1u )
        {
          this->m_atlasData.isAtlas = 0;
          goto LABEL_35;
        }
        v15 = 1 << (this->m_atlasData.rowIndexBits + v14);
      }
      this->m_atlasData.entryCount = v15;
      this->m_atlasData.isAtlas = 1;
      if ( this->m_pStateDef->elementType != 2 )
      {
        if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 615, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
          __debugbreak();
        if ( (material->techniqueSet->flags & 0x10) != 0 )
        {
          this->m_atlasData.behavior |= 0x10u;
          return;
        }
      }
LABEL_35:
      this->m_atlasData.behavior &= ~0x10u;
      return;
    }
    Com_PrintWarning(8, "Material used as atlas but row/col counts are 0. Fallback to single frame. %s\n", material->name);
  }
  this->m_atlasData.isAtlas = 0;
}

/*
==============
ParticleState::KillAllParticles
==============
*/
void ParticleState::KillAllParticles(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  const ParticleStateDef *m_pStateDef; 
  unsigned int elementType; 

  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1851, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1852, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  m_pStateDef = this->m_pStateDef;
  if ( (m_pStateDef->flags & 0x400) != 0 )
  {
    ParticleState::KillPhysicsFXParticlesAll(this, pParticleData, pEmitterOwner);
    ParticleState::KillPhysicsModelParticlesAll(this, pParticleData, pEmitterOwner);
    m_pStateDef = this->m_pStateDef;
  }
  if ( (m_pStateDef->flags & 0x8000000) != 0 )
  {
    ParticleState::KillSoundParticlesAll(this, pParticleData, pEmitterOwner);
    m_pStateDef = this->m_pStateDef;
  }
  elementType = m_pStateDef->elementType;
  switch ( elementType )
  {
    case 4u:
      ParticleState::KillGeoTrailParticlesAll(this, pParticleData, pEmitterOwner);
      break;
    case 9u:
      ParticleState::KillRunnerParticlesAll(this, pParticleData, pEmitterOwner);
      break;
    case 0xBu:
      ParticleState::KillVectorFieldParticlesAll(this, pParticleData, pEmitterOwner);
      break;
  }
}

/*
==============
ParticleState::KillGeoTrailParticles
==============
*/
void ParticleState::KillGeoTrailParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner)
{
  __int64 v5; 
  __int64 v7; 
  Particle_TrailData *v9; 
  unsigned int *p_firstPointIndex; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v5 = particleCount;
  v7 = particleOffset;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1879, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1880, ASSERT_TYPE_ASSERT, "(particleCount > 0)", (const char *)&queryFormat, "particleCount > 0") )
    __debugbreak();
  if ( (int)v7 + (int)v5 >= pParticleData->m_particleCountRunning + 1 )
  {
    LODWORD(v13) = v7 + v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1881, ASSERT_TYPE_ASSERT, "(unsigned)( particleOffset + particleCount ) < (unsigned)( pParticleData->GetParticleCountRunning() + 1 )", "particleOffset + particleCount doesn't index pParticleData->GetParticleCountRunning() + 1\n\t%i not in [0, %i)", v13, pParticleData->m_particleCountRunning + 1) )
      __debugbreak();
  }
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1882, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( this->m_pStateDef->elementType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1883, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL") )
    __debugbreak();
  v9 = &ParticleState::GetTrailDataList(this)[v7];
  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  if ( !ParticleManager::ParticleSystemPointerInRange(this->m_pEmitterOwner->m_pSystemOwner->m_localClientNum, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1888, ASSERT_TYPE_ASSERT, "(ParticleManager::ParticleSystemPointerInRange( GetEmitterOwner()->GetLocalClientNum(), pTrailData ))", (const char *)&queryFormat, "ParticleManager::ParticleSystemPointerInRange( GetEmitterOwner()->GetLocalClientNum(), pTrailData )") )
    __debugbreak();
  if ( (_DWORD)v5 )
  {
    p_firstPointIndex = &v9->firstPointIndex;
    v11 = v5;
    do
    {
      v12 = *((_QWORD *)p_firstPointIndex - 6);
      *((_QWORD *)p_firstPointIndex + 1) = 0i64;
      *(_QWORD *)p_firstPointIndex = 0i64;
      if ( v12 )
        *(_QWORD *)(v12 + 8) = 0i64;
      p_firstPointIndex += 24;
      --v11;
    }
    while ( v11 );
  }
}

/*
==============
ParticleState::KillGeoTrailParticlesAll
==============
*/
void ParticleState::KillGeoTrailParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  unsigned int m_particleCountRunning; 

  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1900, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( this->m_pStateDef->elementType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1901, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL") )
    __debugbreak();
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  if ( m_particleCountRunning )
    ParticleState::KillGeoTrailParticles(this, pParticleData, 0, m_particleCountRunning, pEmitterOwner, 1);
}

/*
==============
ParticleState::KillPhysicsFXParticles
==============
*/
void ParticleState::KillPhysicsFXParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner, bool killAll)
{
  __int64 v6; 
  __int64 v8; 
  int *v10; 
  __int64 m_localClientNum; 
  const ParticleEmitter *v12; 
  __int64 v13; 
  int *v14; 
  int v15; 
  int v16; 
  HavokPhysicsFX_Pipeline *m_physicsFXPipelineInstance; 
  unsigned int m_physicsWorldId; 
  volatile int *v19; 
  signed __int32 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  int *v24; 
  __int64 v25; 
  const ParticleEmitter *pEmitterOwnera; 

  v6 = particleCount;
  v8 = particleOffset;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2073, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !(_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2074, ASSERT_TYPE_ASSERT, "(particleCount > 0)", (const char *)&queryFormat, "particleCount > 0") )
    __debugbreak();
  if ( (int)v8 + (int)v6 >= pParticleData->m_particleCountRunning + 1 )
  {
    LODWORD(v22) = v8 + v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2075, ASSERT_TYPE_ASSERT, "(unsigned)( particleOffset + particleCount ) < (unsigned)( pParticleData->GetParticleCountRunning() + 1 )", "particleOffset + particleCount doesn't index pParticleData->GetParticleCountRunning() + 1\n\t%i not in [0, %i)", v22, pParticleData->m_particleCountRunning + 1) )
      __debugbreak();
  }
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2076, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( (this->m_pStateDef->flags & 0x400) != 0 && this->m_pModulePhysicsLight )
  {
    if ( !this->m_physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2084, ASSERT_TYPE_ASSERT, "(m_physicsFXPipelineInstance)", (const char *)&queryFormat, "m_physicsFXPipelineInstance") )
      __debugbreak();
    v10 = &this->m_physicsFXParticleIDList[v8];
    v24 = v10;
    m_localClientNum = pEmitterOwner->m_pSystemOwner->m_localClientNum;
    pEmitterOwnera = (const ParticleEmitter *)Particle_GetFlagsArrayAtIndex(pParticleData, v8);
    v12 = pEmitterOwnera;
    if ( (_DWORD)v6 )
    {
      v25 = v6;
      v13 = m_localClientNum;
      v14 = v10;
      do
      {
        v15 = *(_DWORD *)((_BYTE *)&v12->m_particleDrawData[0].vfxName + (char *)v14 - (char *)v10) & 2;
        if ( killAll )
        {
          if ( v15 )
            goto LABEL_41;
          Particle_AddDeferredPhysicsFXDestroy((LocalClientNum_t)m_localClientNum, this->m_physicsWorldId, this->m_physicsFXPipelineInstance, *v14);
          if ( --this->m_numPhysicsFXParticles >= this->m_particleCountMax + 1 )
          {
            LODWORD(v23) = this->m_particleCountMax + 1;
            LODWORD(v22) = this->m_numPhysicsFXParticles;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 566, ASSERT_TYPE_ASSERT, "(unsigned)( m_numPhysicsFXParticles ) < (unsigned)( m_particleCountMax + 1 )", "m_numPhysicsFXParticles doesn't index m_particleCountMax + 1\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
        }
        else
        {
          if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2096, ASSERT_TYPE_ASSERT, "((flagsArray[i] & PARTICLE_FLAG_PENDING_DEFERRED_PHYSICS) == 0)", (const char *)&queryFormat, "(flagsArray[i] & PARTICLE_FLAG_PENDING_DEFERRED_PHYSICS) == 0") )
            __debugbreak();
          v16 = *v14;
          m_physicsFXPipelineInstance = this->m_physicsFXPipelineInstance;
          m_physicsWorldId = this->m_physicsWorldId;
          if ( (unsigned int)m_localClientNum >= 2 )
          {
            LODWORD(v23) = 2;
            LODWORD(v22) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 516, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          if ( !m_physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 517, ASSERT_TYPE_ASSERT, "(physicsFXPipeline)", (const char *)&queryFormat, "physicsFXPipeline") )
            __debugbreak();
          v19 = &g_particleDeferredPhysicsFXDestroyListCount[v13];
          if ( ((unsigned __int8)v19 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v19) )
            __debugbreak();
          v20 = _InterlockedExchangeAdd(v19, 1u);
          if ( (unsigned int)v20 >= 0x800 )
          {
            LODWORD(v23) = 2048;
            LODWORD(v22) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 522, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v13 = m_localClientNum;
          v21 = v20 + (m_localClientNum << 11);
          g_particleDeferredPhysicsFXDestroyList[0][v21].physicsWorldId = m_physicsWorldId;
          g_particleDeferredPhysicsFXDestroyList[0][v21].physicsFXPipeline = m_physicsFXPipelineInstance;
          g_particleDeferredPhysicsFXDestroyList[0][v21].physicsFXParticleID = v16;
          if ( --this->m_numPhysicsFXParticles >= this->m_particleCountMax + 1 )
          {
            LODWORD(v23) = this->m_particleCountMax + 1;
            LODWORD(v22) = this->m_numPhysicsFXParticles;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 566, ASSERT_TYPE_ASSERT, "(unsigned)( m_numPhysicsFXParticles ) < (unsigned)( m_particleCountMax + 1 )", "m_numPhysicsFXParticles doesn't index m_particleCountMax + 1\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v10 = v24;
        }
        v12 = pEmitterOwnera;
LABEL_41:
        ++v14;
        --v25;
      }
      while ( v25 );
    }
  }
}

/*
==============
ParticleState::KillPhysicsFXParticlesAll
==============
*/
void ParticleState::KillPhysicsFXParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  unsigned int m_particleCountRunning; 

  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2122, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  if ( m_particleCountRunning )
    ParticleState::KillPhysicsFXParticles(this, pParticleData, 0, m_particleCountRunning, pEmitterOwner, 1);
}

/*
==============
ParticleState::KillPhysicsModelParticles
==============
*/
void ParticleState::KillPhysicsModelParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner)
{
  unsigned int v6; 
  ParticleState *v8; 
  const ParticleStateDef *m_pStateDef; 
  ParticleState::ElementTypeModule v11; 
  LocalClientNum_t m_localClientNum; 
  void (__fastcall *v13)(Physics_SimpleCollisionCallback_Data *); 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 createListIndex; 
  ParticleDeferredPhysicsCreateData *v18; 
  FxPhysics *m_physicsInstanceIDList; 
  FxPhysics *v20; 
  unsigned int instanceId; 
  unsigned int detailInstanceId; 
  volatile int *v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  ParticleDeferredPhysicsDestroyData *v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  void (__fastcall *v31)(Physics_SimpleCollisionCallback_Data *); 
  LocalClientNum_t v33; 
  unsigned int pEmitterOwnera; 

  v6 = particleOffset;
  v8 = this;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2132, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !particleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2133, ASSERT_TYPE_ASSERT, "(particleCount > 0)", (const char *)&queryFormat, "particleCount > 0") )
    __debugbreak();
  if ( v6 + particleCount >= pParticleData->m_particleCountRunning + 1 )
  {
    LODWORD(v29) = v6 + particleCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2134, ASSERT_TYPE_ASSERT, "(unsigned)( particleOffset + particleCount ) < (unsigned)( pParticleData->GetParticleCountRunning() + 1 )", "particleOffset + particleCount doesn't index pParticleData->GetParticleCountRunning() + 1\n\t%i not in [0, %i)", v29, pParticleData->m_particleCountRunning + 1) )
      __debugbreak();
  }
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2135, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  m_pStateDef = v8->m_pStateDef;
  if ( (m_pStateDef->flags & 0x400) != 0 && !v8->m_pModulePhysicsLight && v8->m_physicsInstanceIDList )
  {
    if ( m_pStateDef->elementType != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2143, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL") )
      __debugbreak();
    v11.pModule = (const ParticleModule *)v8->m_elementTypeModule;
    if ( !v11.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2147, ASSERT_TYPE_ASSERT, "(pModuleInitModel)", (const char *)&queryFormat, "pModuleInitModel") )
      __debugbreak();
    if ( !LOBYTE(v11.pModule[1].m_type) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2148, ASSERT_TYPE_ASSERT, "(pModuleInitModel->m_usePhysics)", (const char *)&queryFormat, "pModuleInitModel->m_usePhysics") )
      __debugbreak();
    m_localClientNum = pEmitterOwner->m_pSystemOwner->m_localClientNum;
    v33 = m_localClientNum;
    v13 = NULL;
    if ( (v8->m_pStateDef->flags & 0x10000) != 0 )
      v13 = ParticleState::OnImpactCB;
    v31 = v13;
    v14 = 0;
    pEmitterOwnera = 0;
    if ( particleCount )
    {
      v15 = pEmitterOwner->m_pSystemOwner->m_localClientNum;
      do
      {
        v16 = v6 + v14;
        createListIndex = v8->m_physicsInstanceIDList[v16].createListIndex;
        if ( (_DWORD)createListIndex == -1 )
          goto LABEL_49;
        if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v30) = 2;
          LODWORD(v29) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 459, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        if ( (unsigned int)createListIndex >= 0x800 )
        {
          LODWORD(v30) = 2048;
          LODWORD(v29) = createListIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 460, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_LIST_MAX\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        v18 = &g_particleDeferredPhysicsCreateList[v15][createListIndex];
        if ( v18 && v18->state == PARTICLE_DEFERRED_PHYSICS_PENDING_CREATION )
        {
          m_physicsInstanceIDList = v8->m_physicsInstanceIDList;
          if ( (m_physicsInstanceIDList[v16].instanceId != -1 || m_physicsInstanceIDList[v16].detailInstanceId != -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2184, ASSERT_TYPE_ASSERT, "(m_physicsInstanceIDList[particleIdx].instanceId == 0xFFFFFFFF && m_physicsInstanceIDList[particleIdx].detailInstanceId == 0xFFFFFFFF)", (const char *)&queryFormat, "m_physicsInstanceIDList[particleIdx].instanceId == PHYSICSINSTANCEID_INVALID && m_physicsInstanceIDList[particleIdx].detailInstanceId == PHYSICSINSTANCEID_INVALID") )
            __debugbreak();
          if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
          {
            LODWORD(v30) = 2;
            LODWORD(v29) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 449, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, v30) )
              __debugbreak();
          }
          if ( (unsigned int)createListIndex >= 0x800 )
          {
            LODWORD(v30) = 2048;
            LODWORD(v29) = createListIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 450, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_LIST_MAX\n\t%i not in [0, %i)", v29, v30) )
              __debugbreak();
          }
          g_particleDeferredPhysicsCreateList[v15][createListIndex].state = PARTICLE_DEFERRED_PHYSICS_INVALID;
        }
        else
        {
LABEL_49:
          v20 = v8->m_physicsInstanceIDList;
          instanceId = v20[v16].instanceId;
          if ( instanceId != -1 )
          {
            detailInstanceId = v20[v16].detailInstanceId;
            if ( detailInstanceId != -1 )
            {
              if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
              {
                LODWORD(v30) = 2;
                LODWORD(v29) = m_localClientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 468, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, v30) )
                  __debugbreak();
              }
              v23 = &g_particleDeferredPhysicsDestroyListCount[v15];
              if ( ((unsigned __int8)v23 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v23) )
                __debugbreak();
              v24 = _InterlockedExchangeAdd(v23, 1u);
              if ( (unsigned int)v24 >= 0x800 )
              {
                LODWORD(v30) = 2048;
                LODWORD(v29) = v24;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 471, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_LIST_MAX\n\t%i not in [0, %i)", v29, v30) )
                  __debugbreak();
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 474, ASSERT_TYPE_ASSERT, "(index < PARTICLE_DEFERRED_PHYSICS_LIST_MAX)", (const char *)&queryFormat, "index < PARTICLE_DEFERRED_PHYSICS_LIST_MAX") )
                  __debugbreak();
              }
              v25 = v24;
              if ( v24 > 0 )
              {
                v26 = v24;
                v27 = g_particleDeferredPhysicsDestroyList[m_localClientNum];
                do
                {
                  if ( (v27->physicsInstanceID.instanceId == instanceId || v27->physicsInstanceID.detailInstanceId == detailInstanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 478, ASSERT_TYPE_ASSERT, "(data->physicsInstanceID.instanceId != instanceId && data->physicsInstanceID.detailInstanceId != detailInstanceId)", (const char *)&queryFormat, "data->physicsInstanceID.instanceId != instanceId && data->physicsInstanceID.detailInstanceId != detailInstanceId") )
                    __debugbreak();
                  ++v27;
                  --v26;
                }
                while ( v26 );
                v8 = this;
                m_localClientNum = v33;
              }
              v28 = v25 + ((__int64)(int)m_localClientNum << 11);
              v15 = m_localClientNum;
              v28 *= 3i64;
              *(&g_particleDeferredPhysicsDestroyList[0][0].physicsInstanceID.instanceId + 2 * v28) = instanceId;
              *(&g_particleDeferredPhysicsDestroyList[0][0].physicsInstanceID.detailInstanceId + 2 * v28) = detailInstanceId;
              *((_QWORD *)&g_particleDeferredPhysicsDestroyList[0][0].onImpactCB + v28) = v31;
              v8->m_physicsInstanceIDList[v16].instanceId = -1;
              v8->m_physicsInstanceIDList[v16].detailInstanceId = -1;
            }
          }
          v6 = particleOffset;
        }
        v14 = pEmitterOwnera + 1;
        pEmitterOwnera = v14;
      }
      while ( v14 < particleCount );
    }
  }
}

/*
==============
ParticleState::KillPhysicsModelParticlesAll
==============
*/
void ParticleState::KillPhysicsModelParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  unsigned int m_particleCountRunning; 

  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2207, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  if ( m_particleCountRunning )
    ParticleState::KillPhysicsModelParticles(this, pParticleData, 0, m_particleCountRunning, pEmitterOwner, 1);
}

/*
==============
ParticleState::KillPhysicsParticles
==============
*/
void ParticleState::KillPhysicsParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner, bool killAll)
{
  ParticleState::KillPhysicsFXParticles(this, pParticleData, particleOffset, particleCount, pEmitterOwner, killAll);
  ParticleState::KillPhysicsModelParticles(this, pParticleData, particleOffset, particleCount, pEmitterOwner, killAll);
}

/*
==============
ParticleState::KillPhysicsParticlesAll
==============
*/
void ParticleState::KillPhysicsParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  ParticleState::KillPhysicsFXParticlesAll(this, pParticleData, pEmitterOwner);
  ParticleState::KillPhysicsModelParticlesAll(this, pParticleData, pEmitterOwner);
}

/*
==============
ParticleState::KillPhysicsPipelineInstance
==============
*/
void ParticleState::KillPhysicsPipelineInstance(ParticleState *this)
{
  HavokPhysicsFX_Pipeline *m_physicsFXPipelineInstance; 

  if ( !ParticleState::UsesPhysicsFX(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1015, ASSERT_TYPE_ASSERT, "(UsesPhysicsFX())", (const char *)&queryFormat, "UsesPhysicsFX()") )
    __debugbreak();
  m_physicsFXPipelineInstance = this->m_physicsFXPipelineInstance;
  if ( m_physicsFXPipelineInstance )
  {
    if ( !PhysicsFX_ReleasePipeline(this->m_physicsWorldId, m_physicsFXPipelineInstance, this->m_particleCountMax) )
      ParticleState::KillPhysicsFXParticlesAll(this, this->m_pParticleData, this->m_pEmitterOwner);
    this->m_physicsFXPipelineInstance = NULL;
    this->m_physicsFXShapeIndex = -1;
    this->m_pipelinePendingDeletion = 0;
  }
}

/*
==============
ParticleState::KillPhysicsPipelineInstanceDeferred
==============
*/
void ParticleState::KillPhysicsPipelineInstanceDeferred(ParticleState *this)
{
  HavokPhysicsFX_Pipeline *m_physicsFXPipelineInstance; 
  ParticleEmitter *pParticleEmitterOwner; 
  ParticleSystem *SystemOwner; 
  ParticleSystemHandle particleSystemHandle; 
  LocalClientNum_t m_localClientNum; 
  unsigned int m_particleCountMax; 
  HavokPhysicsFX_Pipeline *v8; 
  Physics_WorldId m_physicsWorldId; 

  if ( !this->m_pipelinePendingDeletion )
  {
    m_physicsFXPipelineInstance = this->m_physicsFXPipelineInstance;
    if ( m_physicsFXPipelineInstance )
    {
      if ( this->m_pendingPhysicsFXPipelineCreation )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1045, ASSERT_TYPE_ASSERT, "(!GetPhysicsFXPipelineInstance())", (const char *)&queryFormat, "!GetPhysicsFXPipelineInstance()") )
          __debugbreak();
      }
      else
      {
        if ( !PhysicsFX_HasPipeline(this->m_physicsWorldId, m_physicsFXPipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1056, ASSERT_TYPE_ASSERT, "(PhysicsFX_HasPipeline( GetPhysicsWorldID(), GetPhysicsFXPipelineInstance() ))", (const char *)&queryFormat, "PhysicsFX_HasPipeline( GetPhysicsWorldID(), GetPhysicsFXPipelineInstance() )") )
          __debugbreak();
        pParticleEmitterOwner = (ParticleEmitter *)ParticleState::GetEmitterOwner(this);
        SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(pParticleEmitterOwner);
        particleSystemHandle = ParticleSystem::GetSystemHandle(SystemOwner);
        m_localClientNum = SystemOwner->m_localClientNum;
        m_particleCountMax = this->m_particleCountMax;
        v8 = this->m_physicsFXPipelineInstance;
        m_physicsWorldId = this->m_physicsWorldId;
        this->m_pipelinePendingDeletion = 1;
        Particle_AddDeferredPhysicsFXPipelineDestroy(m_localClientNum, m_physicsWorldId, v8, m_particleCountMax, this, pParticleEmitterOwner, particleSystemHandle);
      }
    }
  }
}

/*
==============
ParticleState::KillRunnerParticles
==============
*/
void ParticleState::KillRunnerParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner, bool killAll, bool fromStateSwitch)
{
  __int64 v7; 
  __int64 v9; 
  ParticleState::ElementTypeModule v11; 
  char m_flags; 
  char v13; 
  __int64 m_localClientNum; 
  __int64 v15; 
  unsigned __int8 v16; 
  ParticleManager *v17; 
  ParticleSystemHandle *v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  const ParticleSystem *v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  __int64 v25; 

  v7 = particleCount;
  v9 = particleOffset;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1911, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !(_DWORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1912, ASSERT_TYPE_ASSERT, "(particleCount > 0)", (const char *)&queryFormat, "particleCount > 0") )
    __debugbreak();
  if ( (int)v9 + (int)v7 >= pParticleData->m_particleCountRunning + 1 )
  {
    LODWORD(v24) = v9 + v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1913, ASSERT_TYPE_ASSERT, "(unsigned)( particleOffset + particleCount ) < (unsigned)( pParticleData->GetParticleCountRunning() + 1 )", "particleOffset + particleCount doesn't index pParticleData->GetParticleCountRunning() + 1\n\t%i not in [0, %i)", v24, pParticleData->m_particleCountRunning + 1) )
      __debugbreak();
  }
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1914, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( this->m_pStateDef->elementType != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1915, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_RUNNER)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_RUNNER") )
    __debugbreak();
  v11.pModule = (const ParticleModule *)this->m_elementTypeModule;
  if ( !v11.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1918, ASSERT_TYPE_ASSERT, "(pModuleInitRunner)", (const char *)&queryFormat, "pModuleInitRunner") )
    __debugbreak();
  m_flags = v11.pModule[12].m_flags;
  v13 = BYTE1(v11.pModule[12].m_flags);
  m_localClientNum = pEmitterOwner->m_pSystemOwner->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(v25) = 2;
    LODWORD(v24) = pEmitterOwner->m_pSystemOwner->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  v15 = m_localClientNum;
  v16 = pParticleData->m_localClientNum;
  v17 = &g_particleManager[v15];
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v9 >= pParticleData->m_particleCountMax )
  {
    LODWORD(v25) = pParticleData->m_particleCountMax;
    LODWORD(v24) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  v18 = &Particle_GetChildSystemArray(pParticleData)[v9];
  if ( (_DWORD)v7 )
  {
    v19 = (unsigned __int64)v16 << 12;
    v20 = v7;
    do
    {
      v21 = 0;
      if ( g_particleSystemsGeneration[v19 + (*v18 & 0xFFF)].__all32 == *v18 )
        v21 = *v18 & 0xFFF;
      v22 = NULL;
      v23 = v19 + v21;
      if ( g_particleSystems[0][v23] >= (ParticleSystem *)0x1000 )
        v22 = g_particleSystems[0][v23];
      if ( v22 )
      {
        if ( v13 || m_flags || !fromStateSwitch )
          ParticleManager::AddDeferredChildRemoval(v17, v22, v13, m_flags, fromStateSwitch);
        *v18 = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
      ++v18;
      --v20;
    }
    while ( v20 );
  }
}

/*
==============
ParticleState::KillRunnerParticlesAll
==============
*/
void ParticleState::KillRunnerParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  unsigned int m_particleCountRunning; 

  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1944, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( this->m_pStateDef->elementType != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1945, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_RUNNER)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_RUNNER") )
    __debugbreak();
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  if ( m_particleCountRunning )
    ParticleState::KillRunnerParticles(this, pParticleData, 0, m_particleCountRunning, pEmitterOwner, 1, 0);
}

/*
==============
ParticleState::KillSoundParticles
==============
*/
void ParticleState::KillSoundParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner)
{
  __int64 v5; 
  __int64 v7; 
  unsigned int *v9; 
  unsigned int *FlagsArrayAtIndex; 
  __int64 m_localClientNum; 
  ParticleManager *v12; 
  ParticleSystem *SystemOwner; 
  ParticleSystemHandle SystemHandle; 
  signed __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v5 = particleCount;
  v7 = particleOffset;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1955, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1956, ASSERT_TYPE_ASSERT, "(particleCount > 0)", (const char *)&queryFormat, "particleCount > 0") )
    __debugbreak();
  if ( (int)v7 + (int)v5 >= pParticleData->m_particleCountRunning + 1 )
  {
    LODWORD(v17) = v7 + v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1957, ASSERT_TYPE_ASSERT, "(unsigned)( particleOffset + particleCount ) < (unsigned)( pParticleData->GetParticleCountRunning() + 1 )", "particleOffset + particleCount doesn't index pParticleData->GetParticleCountRunning() + 1\n\t%i not in [0, %i)", v17, pParticleData->m_particleCountRunning + 1) )
      __debugbreak();
  }
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1958, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( !this->m_pModuleInitSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1959, ASSERT_TYPE_ASSERT, "(GetModuleInitSound())", (const char *)&queryFormat, "GetModuleInitSound()") )
    __debugbreak();
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v7 >= pParticleData->m_particleCountMax )
  {
    LODWORD(v18) = pParticleData->m_particleCountMax;
    LODWORD(v17) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v9 = (unsigned int *)&ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_HANDLE)[4 * v7];
  FlagsArrayAtIndex = Particle_GetFlagsArrayAtIndex(pParticleData, v7);
  m_localClientNum = pEmitterOwner->m_pSystemOwner->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(v18) = 2;
    LODWORD(v17) = pEmitterOwner->m_pSystemOwner->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v12 = &g_particleManager[m_localClientNum];
  SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
  SystemHandle = ParticleSystem::GetSystemHandle(SystemOwner);
  if ( (_DWORD)v5 )
  {
    v15 = (char *)FlagsArrayAtIndex - (char *)v9;
    v16 = v5;
    do
    {
      if ( *((char *)v9 + v15) < 0 )
        ParticleManager::KillSound(v12, this, *v9, SystemHandle);
      ++v9;
      --v16;
    }
    while ( v16 );
  }
}

/*
==============
ParticleState::KillSoundParticlesAll
==============
*/
void ParticleState::KillSoundParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  unsigned int m_particleCountRunning; 

  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1979, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !this->m_pModuleInitSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1980, ASSERT_TYPE_ASSERT, "(GetModuleInitSound())", (const char *)&queryFormat, "GetModuleInitSound()") )
    __debugbreak();
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  if ( m_particleCountRunning )
    ParticleState::KillSoundParticles(this, pParticleData, 0, m_particleCountRunning, pEmitterOwner, 1);
}

/*
==============
ParticleState::KillVectorFieldParticles
==============
*/
void ParticleState::KillVectorFieldParticles(ParticleState *this, ParticleData *pParticleData, const unsigned int particleOffset, const unsigned int particleCount, const ParticleEmitter *pEmitterOwner)
{
  __int64 v5; 
  __int64 v7; 
  unsigned __int8 *v9; 
  __int64 v10; 

  v5 = particleCount;
  v7 = particleOffset;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1991, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1992, ASSERT_TYPE_ASSERT, "(particleCount > 0)", (const char *)&queryFormat, "particleCount > 0") )
    __debugbreak();
  if ( (int)v7 + (int)v5 >= pParticleData->m_particleCountRunning + 1 )
  {
    LODWORD(v10) = v7 + v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1993, ASSERT_TYPE_ASSERT, "(unsigned)( particleOffset + particleCount ) < (unsigned)( pParticleData->GetParticleCountRunning() + 1 )", "particleOffset + particleCount doesn't index pParticleData->GetParticleCountRunning() + 1\n\t%i not in [0, %i)", v10, pParticleData->m_particleCountRunning + 1) )
      __debugbreak();
  }
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1994, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( this->m_pStateDef->elementType != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1995, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD") )
    __debugbreak();
  if ( !this->m_vectorFieldList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 512, ASSERT_TYPE_ASSERT, "(m_vectorFieldList)", (const char *)&queryFormat, "m_vectorFieldList") )
    __debugbreak();
  v9 = &this->m_vectorFieldList[v7];
  if ( (_DWORD)v5 )
  {
    do
    {
      if ( *v9 != 0xFF )
      {
        CG_VectorField_FreeInstanceForFxWithHandle(*v9);
        *v9 = -1;
      }
      ++v9;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
ParticleState::KillVectorFieldParticlesAll
==============
*/
void ParticleState::KillVectorFieldParticlesAll(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  __int64 m_particleCountRunning; 
  unsigned __int8 *m_vectorFieldList; 
  __int64 v8; 

  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2014, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( this->m_pStateDef->elementType != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2015, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD") )
    __debugbreak();
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  if ( (_DWORD)m_particleCountRunning )
  {
    if ( (unsigned int)m_particleCountRunning >= (int)m_particleCountRunning + 1 )
    {
      LODWORD(v8) = m_particleCountRunning;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1993, ASSERT_TYPE_ASSERT, "(unsigned)( particleOffset + particleCount ) < (unsigned)( pParticleData->GetParticleCountRunning() + 1 )", "particleOffset + particleCount doesn't index pParticleData->GetParticleCountRunning() + 1\n\t%i not in [0, %i)", v8, m_particleCountRunning + 1) )
        __debugbreak();
    }
    if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1994, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
      __debugbreak();
    if ( this->m_pStateDef->elementType != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1995, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD") )
      __debugbreak();
    if ( !this->m_vectorFieldList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 512, ASSERT_TYPE_ASSERT, "(m_vectorFieldList)", (const char *)&queryFormat, "m_vectorFieldList") )
      __debugbreak();
    m_vectorFieldList = this->m_vectorFieldList;
    do
    {
      if ( *m_vectorFieldList != 0xFF )
      {
        CG_VectorField_FreeInstanceForFxWithHandle(*m_vectorFieldList);
        *m_vectorFieldList = -1;
      }
      ++m_vectorFieldList;
      --m_particleCountRunning;
    }
    while ( m_particleCountRunning );
  }
}

/*
==============
ParticleState::OnImpactCB
==============
*/
void ParticleState::OnImpactCB(Physics_SimpleCollisionCallback_Data *pPhysicsCBData)
{
  __int64 LocalClientForWorld; 
  ntl::fixed_map<unsigned int,Particle_OnImpactCBData,2048,ntl::less<unsigned int,unsigned int> > *v5; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *mp_node; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *mp_right; 
  unsigned int v10; 
  bool v11; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *i; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *v14; 
  unsigned int v15; 
  __int64 v16; 
  ParticleSystem *v17; 
  __int64 v18; 
  const ParticleSystemDef *Def; 
  ParticleEmitter *EmitterByIndex; 
  ParticleState *ParticleStateNonConst; 
  ParticleData *ParticleDataNonConst; 
  unsigned int particleHandle; 
  ParticleData *v24; 
  unsigned int m_particleCountRunning; 
  unsigned __int8 *ParticleDataArray; 
  unsigned int v27; 
  bool v28; 
  __int64 v30; 
  bool v37; 
  Particle_OnImpactData *m_onImpactDataList; 
  const float4 *v51; 
  int hintInsertLessElement; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> >,ntl::pair<unsigned int,Particle_OnImpactCBData> *,ntl::pair<unsigned int,Particle_OnImpactCBData> &> result; 
  float4 v58; 
  float4 v59; 
  float4 v60; 
  ntl::pair<unsigned int,Particle_OnImpactCBData> r_element; 

  _R12 = pPhysicsCBData;
  if ( !pPhysicsCBData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 928, ASSERT_TYPE_ASSERT, "(pPhysicsCBData)", (const char *)&queryFormat, "pPhysicsCBData") )
    __debugbreak();
  LocalClientForWorld = Physics_GetLocalClientForWorld(_R12->worldId);
  v5 = &g_physicsBodyToParticleIDMap[LocalClientForWorld];
  mp_parent = v5->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &v5->m_endNodeBase;
  mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)&v5->m_endNodeBase;
  mp_right = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)mp_parent;
  if ( mp_parent )
  {
    do
    {
      if ( mp_right->m_element.first < _R12->bodyIds[0] )
      {
        mp_right = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)mp_right->mp_right;
      }
      else
      {
        mp_node = mp_right;
        mp_right = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)mp_right->mp_left;
      }
    }
    while ( mp_right );
  }
  if ( mp_node == p_m_endNodeBase || _R12->bodyIds[0] < mp_node->m_element.first )
  {
    v10 = _R12->bodyIds[0];
    v60.v = (__m128)0i64;
    v11 = 1;
    r_element.first = v10;
    __asm
    {
      vmovups xmm0, [rbp+57h+var_80]
      vmovups xmmword ptr [rbp+57h+r_element.second.particleSystemHandle], xmm0
    }
    while ( mp_parent )
    {
      p_m_endNodeBase = mp_parent;
      v11 = v10 < mp_parent[1].m_color;
      if ( v10 >= mp_parent[1].m_color )
        mp_parent = mp_parent->mp_right;
      else
        mp_parent = mp_parent->mp_left;
    }
    mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)p_m_endNodeBase;
    if ( v11 )
    {
      if ( p_m_endNodeBase == v5->m_endNodeBase.mp_left )
      {
        mp_node = ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Particle_OnImpactCBData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData>>,2048,8>,ntl::return_pair_first<unsigned int,Particle_OnImpactCBData>,ntl::less<unsigned int,unsigned int>>::insert_node(v5, &result, p_m_endNodeBase, &r_element, 1, 0)->mp_node;
LABEL_38:
        if ( !mp_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        goto LABEL_41;
      }
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
      {
        mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)p_m_endNodeBase->mp_left;
        if ( mp_node )
        {
          for ( i = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)mp_node->mp_right; i; i = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)i->mp_right )
            mp_node = i;
        }
        else
        {
          mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)p_m_endNodeBase->mp_parent;
          if ( p_m_endNodeBase == mp_node->mp_left )
          {
            do
            {
              v14 = mp_node;
              mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)mp_node->mp_parent;
            }
            while ( v14 == mp_node->mp_left );
          }
        }
      }
      else
      {
        mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)p_m_endNodeBase->mp_right;
      }
    }
    if ( !mp_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( mp_node->m_element.first >= v10 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\map\\map.h", 87, ASSERT_TYPE_ASSERT, "( retVal.second )", (const char *)&queryFormat, "retVal.second") )
        __debugbreak();
    }
    else
    {
      mp_node = ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Particle_OnImpactCBData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData>>,2048,8>,ntl::return_pair_first<unsigned int,Particle_OnImpactCBData>,ntl::less<unsigned int,unsigned int>>::insert_node(v5, &result, p_m_endNodeBase, &r_element, 0, 0)->mp_node;
    }
    goto LABEL_38;
  }
LABEL_41:
  v15 = 0;
  v16 = LocalClientForWorld << 12;
  if ( g_particleSystemsGeneration[v16 + (mp_node->m_element.second.particleSystemHandle & 0xFFF)].__all32 == mp_node->m_element.second.particleSystemHandle )
    v15 = mp_node->m_element.second.particleSystemHandle & 0xFFF;
  v17 = NULL;
  v18 = v16 + v15;
  if ( g_particleSystems[0][v18] >= (ParticleSystem *)0x1000 )
    v17 = g_particleSystems[0][v18];
  if ( v17 )
  {
    if ( (v17->m_flags & 0x10) != 0 )
    {
      Def = ParticleSystem::GetDef(v17);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 947, ASSERT_TYPE_ASSERT, "(!pSystem->IsDead())", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->IsDead()", Def->name) )
        __debugbreak();
    }
    EmitterByIndex = (ParticleEmitter *)ParticleSystem::GetEmitterByIndex(v17, mp_node->m_element.second.particleEmitterIndex);
    if ( !EmitterByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 950, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
      __debugbreak();
    if ( (EmitterByIndex->m_flags & 0x40) == 0 )
    {
      ParticleStateNonConst = ParticleEmitter::GetParticleStateNonConst(EmitterByIndex, mp_node->m_element.second.particleStateIndex);
      if ( !ParticleStateNonConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 957, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
        __debugbreak();
      ParticleDataNonConst = ParticleEmitter::GetParticleDataNonConst(EmitterByIndex, mp_node->m_element.second.particleStateIndex);
      particleHandle = mp_node->m_element.second.particleHandle;
      v24 = ParticleDataNonConst;
      result.mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)Particle_GetFlagsArray(ParticleDataNonConst);
      v58.v.m128_u64[0] = (unsigned __int64)Particle_GetVelocityArray(v24);
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 375, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
        __debugbreak();
      if ( !v24->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 376, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      m_particleCountRunning = v24->m_particleCountRunning;
      if ( !v24->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      ParticleDataArray = ParticleData::GetParticleDataArray(v24, PARTICLE_DATA_HANDLE);
      if ( !ParticleDataArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 380, ASSERT_TYPE_ASSERT, "(handleArray)", (const char *)&queryFormat, "handleArray") )
        __debugbreak();
      v27 = 0;
      if ( m_particleCountRunning )
      {
        while ( particleHandle != *(_DWORD *)ParticleDataArray )
        {
          ++v27;
          ParticleDataArray += 4;
          if ( v27 >= m_particleCountRunning )
            return;
        }
        if ( v27 != -1 )
        {
          v28 = __CFADD__(v27, v27) || 2i64 * v27 == 0;
          _RBX = 2i64 * v27;
          v30 = v27;
          _RAX = v58.v.m128_u64[0];
          __asm
          {
            vmovups xmm0, xmmword ptr [rax+rbx*8]
            vmulps  xmm1, xmm0, xmm0
            vinsertps xmm2, xmm1, xmm1, 8
            vhaddps xmm0, xmm2, xmm2
            vhaddps xmm1, xmm0, xmm0
            vcomiss xmm1, cs:__real@34000000
          }
          if ( !v28 )
          {
            v37 = ParticleStateNonConst->m_onImpactDataList == NULL;
            __asm
            {
              vmovaps [rsp+110h+var_30], xmm6
              vmovaps [rsp+110h+var_40], xmm7
            }
            if ( v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 455, ASSERT_TYPE_ASSERT, "(m_onImpactDataList)", (const char *)&queryFormat, "m_onImpactDataList") )
              __debugbreak();
            m_onImpactDataList = ParticleStateNonConst->m_onImpactDataList;
            if ( !m_onImpactDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 975, ASSERT_TYPE_ASSERT, "(pImpactDataList)", (const char *)&queryFormat, "pImpactDataList") )
              __debugbreak();
            _RAX = Particle_GetRotationAngleArray(v24);
            __asm { vmovss  xmm0, dword ptr [r12+14h] }
            v60.v.m128_i32[3] = 0;
            __asm
            {
              vmovups xmm7, [rbp+57h+var_80]
              vmovss  xmm7, xmm7, xmm0
              vmovss  xmm0, dword ptr [r12+20h]
              vinsertps xmm7, xmm7, dword ptr [r12+18h], 10h
              vinsertps xmm7, xmm7, dword ptr [r12+1Ch], 20h ; ' '
              vmovups [rbp+57h+var_80], xmm7
            }
            v60.v.m128_i32[3] = 0;
            __asm
            {
              vmovups xmm6, [rbp+57h+var_80]
              vmovss  xmm6, xmm6, xmm0
              vinsertps xmm6, xmm6, dword ptr [r12+24h], 10h
              vinsertps xmm6, xmm6, dword ptr [r12+28h], 20h ; ' '
              vmovups xmm0, xmmword ptr [rax+rbx*8]
              vmovups [rbp+57h+var_80], xmm6
            }
            Float4RadianToQuat(NULL, v51);
            _RAX = v58.v.m128_u64[0];
            __asm
            {
              vmovups [rbp+57h+var_80], xmm0
              vmovups xmm0, xmmword ptr [rax+rbx*8]
            }
            hintInsertLessElement = _R12->surfaceFlagData[0];
            __asm
            {
              vmovups [rbp+57h+var_A0], xmm0
              vmovdqa [rbp+57h+var_90], xmm6
              vmovdqa xmmword ptr [rbp+57h+r_element.first], xmm7
            }
            ParticleState::FillImpactData(ParticleStateNonConst, &m_onImpactDataList[v30], (float4 *)&r_element, &v59, &v58, hintInsertLessElement, 0x7FFu, TRACE_HITTYPE_BEGIN, (scr_string_t)0, &v60, EmitterByIndex);
            __asm
            {
              vmovaps xmm7, [rsp+110h+var_40]
              vmovaps xmm6, [rsp+110h+var_30]
            }
            *((_DWORD *)&result.mp_node->m_color + v30) |= 4u;
          }
        }
      }
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 937, ASSERT_TYPE_ASSERT, "(pSystem)", (const char *)&queryFormat, "pSystem") )
  {
    __debugbreak();
  }
}

/*
==============
Particle_SortParticles
==============
*/
bool Particle_SortParticles(const Particle_SortData *r1, const Particle_SortData *r2)
{
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vcomiss xmm0, dword ptr [rcx]
  }
  return v2;
}

/*
==============
ParticleState::Release
==============
*/
void ParticleState::Release(ParticleState *this, ParticleData *pParticleData, const ParticleEmitter *pEmitterOwner)
{
  const ParticleStateDef *m_pStateDef; 
  LocalClientNum_t m_localClientNum; 
  unsigned int elementType; 
  Particle_OnImpactData *m_onImpactDataList; 
  unsigned __int8 *m_vectorFieldList; 
  float *m_timeInStateList; 
  ParticleManager *ParticleManager; 
  HavokPhysicsFX_Pipeline *m_physicsFXPipelineInstance; 
  ParticleEmitter *pParticleEmitterOwner; 
  ParticleSystem *SystemOwner; 
  ParticleSystemHandle particleSystemHandle; 
  LocalClientNum_t v17; 
  unsigned int m_particleCountMax; 
  HavokPhysicsFX_Pipeline *v19; 
  Physics_WorldId m_physicsWorldId; 
  int *m_physicsFXParticleIDList; 
  FxPhysics *m_physicsInstanceIDList; 
  ParticleData *m_pParticleSimUpdateParticleData; 
  LocalClientNum_t v24; 
  unsigned __int8 *m_pParticleData; 
  void **m_pModuleDataList; 
  __int64 v27; 

  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 141, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 142, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  m_pStateDef = this->m_pStateDef;
  m_localClientNum = pEmitterOwner->m_pSystemOwner->m_localClientNum;
  elementType = m_pStateDef->elementType;
  switch ( elementType )
  {
    case 4u:
      ParticleState::KillGeoTrailParticlesAll(this, pParticleData, pEmitterOwner);
      break;
    case 7u:
      if ( (m_pStateDef->flags & 0x400) != 0 && !this->m_pModulePhysicsLight && this->m_physicsInstanceIDList )
        ParticleState::KillPhysicsModelParticlesAll(this, pParticleData, pEmitterOwner);
      break;
    case 9u:
      ParticleState::KillRunnerParticlesAll(this, pParticleData, pEmitterOwner);
      break;
    case 0xBu:
      ParticleState::KillVectorFieldParticlesAll(this, pParticleData, pEmitterOwner);
      break;
  }
  m_onImpactDataList = this->m_onImpactDataList;
  if ( m_onImpactDataList )
  {
    ParticleManager::ParticleSystemFree(m_localClientNum, m_onImpactDataList);
    this->m_onImpactDataList = NULL;
  }
  if ( this->m_trailDataList )
  {
    ParticleState::ReleaseTrailDataList(this);
    this->m_trailDataList = NULL;
  }
  if ( this->m_tailDataList )
  {
    ParticleState::ReleaseTailDataList(this);
    this->m_tailDataList = NULL;
  }
  m_vectorFieldList = this->m_vectorFieldList;
  if ( m_vectorFieldList )
  {
    ParticleManager::ParticleSystemFree(m_localClientNum, m_vectorFieldList);
    this->m_vectorFieldList = NULL;
  }
  m_timeInStateList = this->m_timeInStateList;
  if ( m_timeInStateList )
  {
    ParticleManager::ParticleSystemFree(m_localClientNum, m_timeInStateList);
    this->m_timeInStateList = NULL;
  }
  if ( this->m_systemBeamChild )
  {
    ParticleManager = ParticleManager::GetParticleManager(m_localClientNum);
    ParticleManager::KillSystem(ParticleManager, this->m_systemBeamChild);
    this->m_systemBeamChild = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
  if ( this->m_pModulePhysicsLight )
  {
    if ( this->m_physicsFXPipelineInstance )
    {
      ParticleState::KillPhysicsFXParticlesAll(this, this->m_pParticleData, this->m_pEmitterOwner);
      if ( !this->m_pipelinePendingDeletion )
      {
        m_physicsFXPipelineInstance = this->m_physicsFXPipelineInstance;
        if ( m_physicsFXPipelineInstance )
        {
          if ( this->m_pendingPhysicsFXPipelineCreation )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1045, ASSERT_TYPE_ASSERT, "(!GetPhysicsFXPipelineInstance())", (const char *)&queryFormat, "!GetPhysicsFXPipelineInstance()") )
              __debugbreak();
          }
          else
          {
            if ( !PhysicsFX_HasPipeline(this->m_physicsWorldId, m_physicsFXPipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1056, ASSERT_TYPE_ASSERT, "(PhysicsFX_HasPipeline( GetPhysicsWorldID(), GetPhysicsFXPipelineInstance() ))", (const char *)&queryFormat, "PhysicsFX_HasPipeline( GetPhysicsWorldID(), GetPhysicsFXPipelineInstance() )") )
              __debugbreak();
            pParticleEmitterOwner = (ParticleEmitter *)ParticleState::GetEmitterOwner(this);
            SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(pParticleEmitterOwner);
            particleSystemHandle = ParticleSystem::GetSystemHandle(SystemOwner);
            v17 = SystemOwner->m_localClientNum;
            m_particleCountMax = this->m_particleCountMax;
            v19 = this->m_physicsFXPipelineInstance;
            m_physicsWorldId = this->m_physicsWorldId;
            this->m_pipelinePendingDeletion = 1;
            Particle_AddDeferredPhysicsFXPipelineDestroy(v17, m_physicsWorldId, v19, m_particleCountMax, this, pParticleEmitterOwner, particleSystemHandle);
          }
        }
      }
    }
  }
  m_physicsFXParticleIDList = this->m_physicsFXParticleIDList;
  if ( m_physicsFXParticleIDList )
  {
    ParticleManager::ParticleSystemFree(m_localClientNum, m_physicsFXParticleIDList);
    this->m_physicsFXParticleIDList = NULL;
  }
  m_physicsInstanceIDList = this->m_physicsInstanceIDList;
  if ( m_physicsInstanceIDList )
  {
    ParticleManager::ParticleSystemFree(m_localClientNum, m_physicsInstanceIDList);
    this->m_physicsInstanceIDList = NULL;
  }
  m_pParticleSimUpdateParticleData = this->m_pParticleSimUpdateParticleData;
  if ( m_pParticleSimUpdateParticleData )
  {
    v24 = m_pParticleSimUpdateParticleData->m_localClientNum;
    m_pParticleData = m_pParticleSimUpdateParticleData->m_pParticleData;
    *(_QWORD *)&m_pParticleSimUpdateParticleData->m_particleCountRunning = 0i64;
    Particle_ReleaseBlock(v24, m_pParticleData);
    m_pParticleSimUpdateParticleData->m_pParticleData = NULL;
    *(_QWORD *)&m_pParticleSimUpdateParticleData->m_particleCountRunning = 0i64;
    m_pParticleSimUpdateParticleData->m_particleCountMax = 0;
    m_pParticleSimUpdateParticleData->m_pEmitter = NULL;
    m_pParticleSimUpdateParticleData->m_pEmitterPadding = NULL;
    m_pParticleSimUpdateParticleData->m_particleSize = 0;
    m_pParticleSimUpdateParticleData->m_dataFlags = USE_NONE;
    ParticleData::DestroyParticleOffsetTable(m_pParticleSimUpdateParticleData);
    ParticleManager::ParticleSystemFree(m_localClientNum, this->m_pParticleSimUpdateParticleData);
  }
  if ( (this->m_pStateDef->flags & 0x8000000) != 0 )
    ParticleState::KillSoundParticlesAll(this, pParticleData, pEmitterOwner);
  ParticleState::ReleaseParticleSimModelDataList(this);
  m_pModuleDataList = (void **)this->m_pModuleDataList;
  v27 = 3i64;
  do
  {
    if ( *m_pModuleDataList )
    {
      ParticleManager::ParticleSystemFree(m_localClientNum, *m_pModuleDataList);
      *m_pModuleDataList = NULL;
    }
    ++m_pModuleDataList;
    --v27;
  }
  while ( v27 );
  this->m_isRunning = 0;
}

/*
==============
Particle_ParticleSimModelData::Release
==============
*/
void Particle_ParticleSimModelData::Release(Particle_ParticleSimModelData *this, LocalClientNum_t localClientNum)
{
  this->maxActiveParticles = 0;
}

/*
==============
Particle_TrailData::Release
==============
*/
void Particle_TrailData::Release(Particle_TrailData *this, LocalClientNum_t localClientNum)
{
  Particle_TrailPoint *pointList; 
  ParticleData *pParticleData; 
  LocalClientNum_t m_localClientNum; 
  unsigned __int8 *m_pParticleData; 

  pointList = this->pointList;
  if ( pointList )
  {
    ParticleManager::ParticleSystemFree(localClientNum, pointList);
    this->pointList = NULL;
  }
  pParticleData = this->pParticleData;
  if ( pParticleData )
  {
    m_localClientNum = pParticleData->m_localClientNum;
    m_pParticleData = pParticleData->m_pParticleData;
    *(_QWORD *)&pParticleData->m_particleCountRunning = 0i64;
    Particle_ReleaseBlock(m_localClientNum, m_pParticleData);
    pParticleData->m_pParticleData = NULL;
    *(_QWORD *)&pParticleData->m_particleCountRunning = 0i64;
    pParticleData->m_particleCountMax = 0;
    pParticleData->m_pEmitter = NULL;
    pParticleData->m_pEmitterPadding = NULL;
    pParticleData->m_particleSize = 0;
    pParticleData->m_dataFlags = USE_NONE;
    ParticleData::DestroyParticleOffsetTable(pParticleData);
    ParticleManager::ParticleSystemFree(localClientNum, this->pParticleData);
    this->pParticleData = NULL;
  }
}

/*
==============
ParticleState::ReleaseParticleSimModelDataList
==============
*/
void ParticleState::ReleaseParticleSimModelDataList(ParticleState *this)
{
  const ParticleSystem *m_pSystemOwner; 
  unsigned int v3; 
  LocalClientNum_t i; 
  __int64 v5; 

  if ( this->m_particleSimModelDataList )
  {
    m_pSystemOwner = ParticleState::GetEmitterOwner(this)->m_pSystemOwner;
    v3 = 0;
    for ( i = m_pSystemOwner->m_localClientNum; v3 < this->m_particleCountMax; this->m_particleSimModelDataList[v5].maxActiveParticles = 0 )
      v5 = v3++;
    ParticleManager::ParticleSystemFree(i, this->m_particleSimModelDataList);
    this->m_particleSimModelDataList = NULL;
  }
}

/*
==============
ParticleState::ReleaseTailDataList
==============
*/
void ParticleState::ReleaseTailDataList(ParticleState *this)
{
  LocalClientNum_t m_localClientNum; 

  if ( !this->m_tailDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3335, ASSERT_TYPE_ASSERT, "(m_tailDataList)", (const char *)&queryFormat, "m_tailDataList") )
    __debugbreak();
  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  m_localClientNum = this->m_pEmitterOwner->m_pSystemOwner->m_localClientNum;
  if ( !ParticleManager::ParticleSystemPointerInRange(m_localClientNum, this->m_tailDataList) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3340, ASSERT_TYPE_ASSERT, "(ParticleManager::ParticleSystemPointerInRange( localClientNum, m_tailDataList ))", (const char *)&queryFormat, "ParticleManager::ParticleSystemPointerInRange( localClientNum, m_tailDataList )") )
    __debugbreak();
  ParticleManager::ParticleSystemFree(m_localClientNum, this->m_tailDataList);
  this->m_tailDataList = NULL;
}

/*
==============
ParticleState::ReleaseTrailDataList
==============
*/
void ParticleState::ReleaseTrailDataList(ParticleState *this)
{
  LocalClientNum_t m_localClientNum; 
  unsigned int i; 
  Particle_TrailData *v4; 
  Particle_TrailPoint *pointList; 
  ParticleData *pParticleData; 
  LocalClientNum_t v7; 
  unsigned __int8 *m_pParticleData; 

  if ( !this->m_trailDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3315, ASSERT_TYPE_ASSERT, "(m_trailDataList)", (const char *)&queryFormat, "m_trailDataList") )
    __debugbreak();
  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  m_localClientNum = this->m_pEmitterOwner->m_pSystemOwner->m_localClientNum;
  if ( !ParticleManager::ParticleSystemPointerInRange(m_localClientNum, this->m_trailDataList) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3320, ASSERT_TYPE_ASSERT, "(ParticleManager::ParticleSystemPointerInRange( localClientNum, m_trailDataList ))", (const char *)&queryFormat, "ParticleManager::ParticleSystemPointerInRange( localClientNum, m_trailDataList )") )
    __debugbreak();
  if ( this->m_particleCountMax != this->m_pParticleData->m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3322, ASSERT_TYPE_ASSERT, "(m_particleCountMax == m_pParticleData->GetParticleCountMax())", (const char *)&queryFormat, "m_particleCountMax == m_pParticleData->GetParticleCountMax()") )
    __debugbreak();
  for ( i = 0; i < this->m_particleCountMax; ++i )
  {
    v4 = &this->m_trailDataList[i];
    pointList = v4->pointList;
    if ( pointList )
    {
      ParticleManager::ParticleSystemFree(m_localClientNum, pointList);
      v4->pointList = NULL;
    }
    pParticleData = v4->pParticleData;
    if ( pParticleData )
    {
      v7 = pParticleData->m_localClientNum;
      m_pParticleData = pParticleData->m_pParticleData;
      *(_QWORD *)&pParticleData->m_particleCountRunning = 0i64;
      Particle_ReleaseBlock(v7, m_pParticleData);
      pParticleData->m_pParticleData = NULL;
      *(_QWORD *)&pParticleData->m_particleCountRunning = 0i64;
      pParticleData->m_particleCountMax = 0;
      pParticleData->m_pEmitter = NULL;
      pParticleData->m_pEmitterPadding = NULL;
      pParticleData->m_particleSize = 0;
      pParticleData->m_dataFlags = USE_NONE;
      ParticleData::DestroyParticleOffsetTable(pParticleData);
      ParticleManager::ParticleSystemFree(m_localClientNum, v4->pParticleData);
      v4->pParticleData = NULL;
    }
  }
  ParticleManager::ParticleSystemFree(m_localClientNum, this->m_trailDataList);
  this->m_trailDataList = NULL;
}

/*
==============
ParticleState::RequestPhysicsPipelineInstance
==============
*/
void ParticleState::RequestPhysicsPipelineInstance(ParticleState *this)
{
  HavokPhysicsFX_Pipeline *v2; 
  const char *VFXName; 

  if ( this->m_physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1000, ASSERT_TYPE_ASSERT, "(!m_physicsFXPipelineInstance)", (const char *)&queryFormat, "!m_physicsFXPipelineInstance") )
    __debugbreak();
  if ( !this->m_pendingPhysicsFXPipelineCreation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1001, ASSERT_TYPE_ASSERT, "(m_pendingPhysicsFXPipelineCreation)", (const char *)&queryFormat, "m_pendingPhysicsFXPipelineCreation") )
    __debugbreak();
  v2 = PhysicsFX_RequestPipeline(this->m_physicsWorldId, this->m_physicsFXPipeline, this->m_physicsFXShape, this->m_particleCountMax, &this->m_physicsFXShapeIndex);
  this->m_physicsFXPipelineInstance = v2;
  this->m_pendingPhysicsFXPipelineCreation = 0;
  if ( !v2 )
  {
    VFXName = ParticleState::GetVFXName(this);
    Com_PrintWarning(21, "WARNING: Could not allocate a HavokFX pipeline. Emitter kill pending for effect: %s\n", VFXName);
  }
}

/*
==============
Particle_TrailData::Reset
==============
*/
void Particle_TrailData::Reset(Particle_TrailData *this)
{
  ParticleData *pParticleData; 

  pParticleData = this->pParticleData;
  *(_QWORD *)&this->lastPointIndexPrev = 0i64;
  *(_QWORD *)&this->firstPointIndex = 0i64;
  if ( pParticleData )
    *(_QWORD *)&pParticleData->m_particleCountRunning = 0i64;
}

/*
==============
ParticleState::SortParticles
==============
*/
void ParticleState::SortParticles(ParticleState *this, LocalClientNum_t localClientNum, unsigned int numParticlesToBeSorted)
{
  __int64 v3; 
  const dvar_t *v6; 
  ParticleEmitterDef *EmitterDef; 
  ParticleDataFlags DataFlags; 
  unsigned int m_particleCountMax; 
  float *CameraDistanceArray; 
  const char *v11; 
  ParticleData *v12; 
  const char *v13; 
  const ParticleEmitter *EmitterOwner; 
  const char *v15; 
  Particle_SortData *v16; 
  Particle_SortData *v17; 
  const char *VFXName; 
  __int64 v19; 
  int v20; 
  float *v21; 
  Particle_SortData *v22; 
  Particle_SortData *v23; 
  float *v24; 
  unsigned int v25; 
  const unsigned int *p_particleIndex; 

  v3 = numParticlesToBeSorted;
  if ( !this->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1542, ASSERT_TYPE_ASSERT, "(m_pParticleData)", (const char *)&queryFormat, "m_pParticleData", -2i64) )
    __debugbreak();
  if ( (this->m_pStateDef->flags & 0x8000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1543, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_STATE_DEF_FLAG_SORT_PARTICLES ))", (const char *)&queryFormat, "HasFlag( PARTICLE_STATE_DEF_FLAG_SORT_PARTICLES )") )
    __debugbreak();
  v6 = particle_sort_particles;
  if ( !particle_sort_particles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1545, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal( particle_sort_particles ))", (const char *)&queryFormat, "Dvar_GetBool_Internal( particle_sort_particles )") )
    __debugbreak();
  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  EmitterDef = (ParticleEmitterDef *)ParticleEmitter::GetEmitterDef((ParticleEmitter *)this->m_pEmitterOwner);
  DataFlags = ParticleEmitterDef::GetDataFlags(EmitterDef);
  m_particleCountMax = this->m_pParticleData->m_particleCountMax;
  if ( (unsigned int)v3 > m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1550, ASSERT_TYPE_ASSERT, "(numParticlesToBeSorted <= numParticlesMax)", (const char *)&queryFormat, "numParticlesToBeSorted <= numParticlesMax") )
    __debugbreak();
  CameraDistanceArray = Particle_GetCameraDistanceArray(this->m_pParticleData);
  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  if ( ParticleEmitter::SupportsBasicCopy((ParticleEmitter *)this->m_pEmitterOwner, this) )
  {
    v12 = (ParticleData *)ParticleManager::ParticleSystemAllocAndClear(localClientNum, 0x70ui64);
    if ( v12 )
    {
      EmitterOwner = ParticleState::GetEmitterOwner(this);
      if ( ParticleData::Init(v12, (LocalClientNum_t)this->m_pParticleData->m_localClientNum, m_particleCountMax, EmitterOwner, DataFlags) )
      {
        v16 = (Particle_SortData *)ParticleManager::ParticleSystemAlloc((LocalClientNum_t)this->m_pParticleData->m_localClientNum, 8 * v3);
        v17 = v16;
        if ( v16 )
        {
          v19 = 0i64;
          if ( (unsigned int)v3 >= 4 )
          {
            v20 = 2;
            v21 = CameraDistanceArray + 2;
            v22 = v16 + 1;
            do
            {
              v22[-1].cameraDistance = *(v21 - 2);
              v22[-1].particleIndex = v19;
              v22->cameraDistance = *(v21 - 1);
              v22->particleIndex = v20 - 1;
              v22[1].cameraDistance = *v21;
              v22[1].particleIndex = v20;
              v22[2].cameraDistance = v21[1];
              v22[2].particleIndex = v20 + 1;
              v21 += 4;
              v22 += 4;
              v19 = (unsigned int)(v19 + 4);
              v20 += 4;
            }
            while ( (unsigned int)v19 < (int)v3 - 3 );
          }
          if ( (unsigned int)v19 < (unsigned int)v3 )
          {
            v23 = &v16[v19];
            v24 = &CameraDistanceArray[v19];
            do
            {
              v23->cameraDistance = *v24;
              v23->particleIndex = v19;
              ++v24;
              ++v23;
              LODWORD(v19) = v19 + 1;
            }
            while ( (unsigned int)v19 < (unsigned int)v3 );
          }
          std::_Sort_unchecked<Particle_SortData *,bool (*)(Particle_SortData const &,Particle_SortData const &)>(v16, &v16[v3], v3, Particle_SortParticles);
          Particle_CopyParticleData(this->m_pParticleData, v12);
          v25 = 0;
          if ( (_DWORD)v3 )
          {
            p_particleIndex = &v17->particleIndex;
            do
            {
              if ( *p_particleIndex != v25 )
                Particle_CopyParticle(v12, *p_particleIndex, this->m_pParticleData, v25);
              ++v25;
              p_particleIndex += 2;
            }
            while ( v25 < (unsigned int)v3 );
          }
          ParticleManager::ParticleSystemFree(localClientNum, v17);
          *(_QWORD *)&v12->m_particleCountRunning = 0i64;
          Particle_ReleaseBlock((LocalClientNum_t)v12->m_localClientNum, v12->m_pParticleData);
          v12->m_pParticleData = NULL;
          *(_QWORD *)&v12->m_particleCountRunning = 0i64;
          v12->m_particleCountMax = 0;
          v12->m_pEmitter = NULL;
          v12->m_pEmitterPadding = NULL;
          v12->m_particleSize = 0;
          v12->m_dataFlags = USE_NONE;
          ParticleData::DestroyParticleOffsetTable(v12);
          ParticleManager::ParticleSystemFree(localClientNum, v12);
        }
        else
        {
          ParticleData::`scalar deleting destructor'(v12, 0);
          ParticleManager::ParticleSystemFree(localClientNum, v12);
          VFXName = ParticleState::GetVFXName(this);
          Com_PrintError(21, "Could not allocate %d sort particles for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", (unsigned int)v3, VFXName);
        }
      }
      else
      {
        ParticleManager::ParticleSystemFree(localClientNum, v12);
        v15 = ParticleState::GetVFXName(this);
        Com_PrintError(21, "Could not allocate %d particles for sorting in effect %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", m_particleCountMax, v15);
      }
    }
    else
    {
      v13 = ParticleState::GetVFXName(this);
      Com_PrintError(21, "Could not allocate particle data for sorting in %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", v13);
    }
  }
  else
  {
    v11 = ParticleState::GetVFXName(this);
    Com_PrintWarning(21, "WARNING: Trying to sort particles for a complex system (only basic sprites are supported): %s\n", v11);
  }
}

/*
==============
ParticleState::UpdateAtlasIndex
==============
*/

void __fastcall ParticleState::UpdateAtlasIndex(ParticleState *this, const ParticleModuleInitAtlas *const pModuleInitAtlas, double dt, double emitterLifeNormalized, unsigned int randomSeed, float particleLife, float *outAtlasIndex)
{
  ParticleCurveDef *m_curves; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm3
  }
  if ( !pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3493, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
    __debugbreak();
  _ECX = 0;
  _EAX = this->m_atlasData.behavior & 0x20;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ecx
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, [rsp+68h+particleLife]
    vblendvps xmm0, xmm6, xmm1, xmm2
    vmovss  [rsp+68h+particleLife], xmm0
  }
  if ( !pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3477, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
    __debugbreak();
  if ( (pModuleInitAtlas->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3478, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas->IsEnabled())", (const char *)&queryFormat, "pModuleInitAtlas->IsEnabled()") )
    __debugbreak();
  m_curves = pModuleInitAtlas->m_curves;
  __asm { vmovss  xmm1, [rsp+68h+particleLife]; time }
  if ( (pModuleInitAtlas->m_flags & 0x10) != 0 )
  {
    __asm { vmovaps [rsp+68h+var_28], xmm7 }
    *(double *)&_XMM0 = Particle_GetCurveValue(m_curves, *(const float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, [rsp+68h+particleLife]; time
      vmulss  xmm7, xmm0, dword ptr [rbx+2Ch]
    }
    *(double *)&_XMM0 = Particle_GetCurveValue(&pModuleInitAtlas->m_curves[1], *(const float *)&_XMM1);
    __asm
    {
      vmulss  xmm4, xmm0, dword ptr [rbx+3Ch]
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, dword ptr [rcx+rax*4]
      vmulss  xmm2, xmm4, dword ptr [rcx+rax*4]
      vmulss  xmm3, xmm1, xmm7
      vmovaps xmm7, [rsp+68h+var_28]
      vaddss  xmm5, xmm3, xmm2
    }
  }
  else
  {
    *(double *)&_XMM0 = Particle_GetCurveValue(m_curves, *(const float *)&_XMM1);
    __asm { vmulss  xmm5, xmm0, dword ptr [rbx+2Ch] }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  _RCX = outAtlasIndex;
  if ( (this->m_atlasData.behavior & 4) != 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm5
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm5, xmm8
      vaddss  xmm1, xmm0, dword ptr [rcx]
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+68h+var_38]
    vmovss  dword ptr [rcx], xmm1
  }
  if ( (this->m_atlasData.behavior & 8) != 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcomiss xmm1, xmm0
    }
    if ( is_mul_ok(this->m_atlasData.entryCount, this->m_atlasData.loopCount) )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rcx], xmm0
      }
    }
  }
}

/*
==============
ParticleState::UpdateBeamChildTransform
==============
*/

void __fastcall ParticleState::UpdateBeamChildTransform(ParticleState *this, ParticleSystem *systemBeamChild, double _XMM2_8, double _XMM3_8)
{
  ParticleEmitter *EmitterOwner; 
  const float4 *SystemOwner; 
  const vector4 *v11; 
  int v12; 
  vector4 systemTransform; 
  vector4 outTransform; 

  if ( systemBeamChild )
  {
    EmitterOwner = (ParticleEmitter *)ParticleState::GetEmitterOwner(this);
    SystemOwner = (const float4 *)ParticleEmitter::GetSystemOwner(EmitterOwner);
    _R12 = ParticleEmitter::GetEmitterTransform(EmitterOwner, this);
    ParticleEmitter::GetBeamTransform(EmitterOwner, this, &outTransform);
    Float4x4Mul(&outTransform, _R12, v11);
    v12 = SystemOwner[26].v.m128_i32[0];
    __asm
    {
      vmovups xmmword ptr [rsp+128h+var_D8], xmm2
      vmovups xmmword ptr [rsp+128h+var_F8], xmm0
      vmovups xmmword ptr [rsp+128h+var_D8+10h], xmm3
      vmovups ymm0, [rsp+128h+var_D8]
      vmovups xmmword ptr [rsp+128h+var_F8+10h], xmm1
      vmovups ymm2, [rsp+128h+var_F8]
      vmovups ymmword ptr [rsp+128h+systemTransform.baseclass_0.x.v], ymm2
      vmovups ymmword ptr [rsp+128h+systemTransform.baseclass_0.z.v], ymm0
    }
    if ( (v12 & 0x100) == 0 )
    {
      __asm
      {
        vmovups xmm1, xmmword ptr [r12+30h]
        vaddps  xmm1, xmm1, xmmword ptr [rsp+128h+outTransform.w.v]
        vmovups xmmword ptr [rsp+128h+systemTransform.w.v], xmm1
      }
    }
    ParticleSystem::SetSystemTransform(systemBeamChild, &systemTransform);
    ParticleSystem::SetBeamPos(systemBeamChild, SystemOwner + 15, SystemOwner + 16);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1795, ASSERT_TYPE_ASSERT, "(systemBeamChild)", (const char *)&queryFormat, "systemBeamChild") )
  {
    __debugbreak();
  }
}

/*
==============
ParticleState::UpdateBeamChildTransform
==============
*/
void ParticleState::UpdateBeamChildTransform(ParticleState *this, LocalClientNum_t localClientNum)
{
  ParticleSystemHandle m_systemBeamChild; 
  __int64 v3; 
  ParticleSystem *v4; 
  unsigned int v6; 
  __int64 v7; 

  m_systemBeamChild = this->m_systemBeamChild;
  v3 = (__int64)(int)localClientNum << 12;
  v4 = NULL;
  v6 = 0;
  if ( g_particleSystemsGeneration[v3 + (m_systemBeamChild & 0xFFF)].__all32 == m_systemBeamChild )
    v6 = m_systemBeamChild & 0xFFF;
  v7 = v3 + v6;
  if ( g_particleSystems[0][v7] >= (ParticleSystem *)0x1000 )
    v4 = g_particleSystems[0][v7];
  ParticleState::UpdateBeamChildTransform(this, v4);
}

/*
==============
ParticleState::UpdateInternal
==============
*/

void __fastcall ParticleState::UpdateInternal(ParticleState *this, ParticleData *pParticleData, double dt, const int currentTime, const ParticleEmitter *pEmitterOwner, const FxCamera *pCamera)
{
  const ParticleStateDef *m_pStateDef; 
  unsigned __int64 v25; 
  ParticleSystem *SystemOwner; 
  __int64 m_particleCountRunning; 
  const float4 *v28; 
  const vector4 *EmitterTransform; 
  const vector4 *v32; 
  bool v46; 
  __int64 v47; 
  float4 *ColorArray; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  const ParticleModuleInitAtlas *m_pModuleInitAtlas; 
  const vector4 *v54; 
  LocalClientNum_t m_localClientNum; 
  const ParticleSystem *v66; 
  const ParticleStateDef *v67; 
  unsigned __int64 flags; 
  const ParticleModuleInitRelativeVelocity *v69; 
  ParticleRelativeVelocityType m_velocityType; 
  float4 *SpawnQuatArray; 
  __int64 v73; 
  const char *VFXName; 
  __int64 v95; 
  float4 *v104; 
  const float4 *v105; 
  vector3 *v106; 
  __int64 v108; 
  const ParticleStateDef *v118; 
  const ParticleModule *m_pModuleParentVelocityGraph; 
  const ParticleModuleForceDragGraph *m_pModuleForceDragGraph; 
  unsigned int v149; 
  signed __int64 v156; 
  const ParticleModuleInitRelativeVelocity *v182; 
  bool v192; 
  bool v193; 
  bool v194; 
  char v196; 
  const ParticleModuleInitKillWrapBox *v224; 
  const ParticleModuleInitKillWrapBox *v228; 
  int v255; 
  const ParticleStateDef *v266; 
  unsigned __int64 v269; 
  float4 *ParentVelocityArray; 
  unsigned __int64 v288; 
  unsigned int v289; 
  ParticleSystem *v290; 
  unsigned __int64 v291; 
  ParticleSystem *v292; 
  unsigned int v296; 
  unsigned int v306; 
  __int64 v307; 
  __int64 v310; 
  float fmt; 
  float fmta; 
  ParticleEmitter *v318; 
  float v319; 
  ParticleState *pParticleState; 
  bool v321; 
  char v322; 
  bool Bool_Internal; 
  bool v324; 
  bool hasRotation; 
  int v327; 
  float4 *velocityArray; 
  int *RandomSeedArray; 
  signed __int64 v343; 
  vector4 *rEmitterTransform; 
  float *CameraDistanceArray; 
  signed __int64 v346; 
  float *LifeArray; 
  signed __int64 v348; 
  float4 *v349; 
  signed __int64 v350; 
  const ParticleModuleInitKillWrapBox *m_pModuleInitKillWrapBox; 
  float4 *rotationAngleArray; 
  float4 *sizeArray; 
  float4 *positionArray; 
  float4 posWorld; 
  unsigned __int64 v356; 
  __int64 v357; 
  __int64 v358; 
  __int64 v359; 
  __int128 v364; 
  __int128 center; 
  vec4_t color; 

  __asm
  {
    vmovaps [rsp+2D0h+var_A0], xmm11
    vmovaps [rsp+2D0h+var_C0], xmm13
  }
  _R15 = (ParticleEmitter *)pEmitterOwner;
  _R12 = pCamera;
  _RBX = this;
  __asm
  {
    vmovaps xmm11, xmm2
    vshufps xmm11, xmm11, xmm11, 0
    vmovaps xmm13, xmm11
    vshufps xmm13, xmm13, xmm13, 0
    vmovups [rbp+1D0h+var_120], xmm13
  }
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1117, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1118, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1119, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  m_pStateDef = _RBX->m_pStateDef;
  __asm { vmovaps [rsp+2D0h+var_50], xmm6 }
  v25 = (unsigned __int64)LODWORD(m_pStateDef->flags) >> 10;
  __asm { vmovaps [rsp+2D0h+var_60], xmm7 }
  if ( (v25 & 1) != 0 )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
    if ( (ParticleSystem::GetDef(SystemOwner)->flags & 0x10) != 0 && (_RBX->m_pStateDef->flags & 0x800000000i64) != 0 )
    {
      m_particleCountRunning = pParticleData->m_particleCountRunning;
      v28 = Particle_GetPositionArray(pParticleData);
      _RSI = Particle_GetCameraDistanceArray(pParticleData);
      EmitterTransform = ParticleEmitter::GetEmitterTransform((ParticleEmitter *)pEmitterOwner, _RBX);
      __asm { vmovss  xmm0, dword ptr [r12] }
      v32 = EmitterTransform;
      HIDWORD(v364) = 0;
      __asm
      {
        vmovups xmm6, xmmword ptr [rbp+90h]
        vmovss  xmm6, xmm6, xmm0
        vinsertps xmm6, xmm6, dword ptr [r12+4], 10h
        vinsertps xmm6, xmm6, dword ptr [r12+8], 20h ; ' '
      }
      if ( (ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner)->flags & 0x2000000) != 0 )
        __asm { vmovss  xmm7, cs:__real@3f800000 }
      else
        __asm { vmovss  xmm7, dword ptr [r12+0C4h] }
      if ( (_DWORD)m_particleCountRunning )
      {
        do
        {
          ParticleEmitter::GetWorldPos((ParticleEmitter *)pEmitterOwner, v28, &posWorld, _RBX, v32);
          __asm
          {
            vsubps  xmm0, xmm6, xmmword ptr [rbp+1D0h+posWorld.v]
            vmulps  xmm1, xmm0, xmm0
            vinsertps xmm2, xmm1, xmm1, 8
            vhaddps xmm0, xmm2, xmm2
            vhaddps xmm0, xmm0, xmm0
            vsqrtps xmm1, xmm0
            vmulss  xmm1, xmm1, xmm7
          }
          ++v28;
          __asm { vmovss  dword ptr [rsi], xmm1 }
          ++_RSI;
          --m_particleCountRunning;
        }
        while ( m_particleCountRunning );
      }
    }
    goto LABEL_171;
  }
  __asm
  {
    vmovaps [rsp+2D0h+var_80], xmm9
    vmovaps [rsp+2D0h+var_90], xmm10
  }
  Bool_Internal = Dvar_GetBool_Internal(particle_debug_draw_particles);
  v46 = Dvar_GetBool_Internal(particle_sort_particles);
  v47 = pParticleData->m_particleCountRunning;
  v324 = v46;
  positionArray = Particle_GetPositionArray(pParticleData);
  velocityArray = Particle_GetVelocityArray(pParticleData);
  sizeArray = Particle_GetSizeArray(pParticleData);
  rotationAngleArray = Particle_GetRotationAngleArray(pParticleData);
  CameraDistanceArray = Particle_GetCameraDistanceArray(pParticleData);
  Particle_GetRotationRateArray(pParticleData);
  Particle_GetSpawnTimeArray(pParticleData);
  RandomSeedArray = Particle_GetRandomSeedArray(pParticleData);
  _RDI = Particle_GetFlagsArray(pParticleData);
  LifeArray = Particle_GetLifeArray(pParticleData);
  ColorArray = Particle_GetColorArray(pParticleData);
  __asm
  {
    vmovss  xmm10, dword ptr [r15+174h]
    vmovss  xmm0, dword ptr [r15+178h]
  }
  v349 = ColorArray;
  m_pModuleInitRelativeVelocity = _RBX->m_pModuleInitRelativeVelocity;
  __asm { vmovss  [rbp+1D0h+var_234], xmm10 }
  hasRotation = (_RBX->m_pStateDef->flags & 0xF0) != 0;
  v356 = _RBX->m_pStateDef->flags & 0x300;
  __asm { vmovss  [rsp+2D0h+var_258], xmm0 }
  v321 = m_pModuleInitRelativeVelocity && (m_pModuleInitRelativeVelocity->m_flags & 1) == 0 && ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) == 0;
  m_pModuleInitAtlas = _RBX->m_pModuleInitAtlas;
  if ( !m_pModuleInitAtlas || (m_pModuleInitAtlas->m_flags & 1) != 0 || (v322 = 1, !_RBX->m_atlasData.isAtlas) )
    v322 = 0;
  v54 = ParticleEmitter::GetEmitterTransform((ParticleEmitter *)pEmitterOwner, _RBX);
  rEmitterTransform = (vector4 *)v54;
  if ( (_RBX->m_pStateDef->flags & 2) != 0 || (_RBX->m_pStateDef->flags & 0x10000000) != 0 )
  {
    m_localClientNum = pEmitterOwner->m_pSystemOwner->m_localClientNum;
    if ( (_RBX->m_pStateDef->flags & 0x10000000) != 0 )
    {
      if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v318) = pEmitterOwner->m_pSystemOwner->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v318, 2) )
          __debugbreak();
      }
    }
    else if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v318) = pEmitterOwner->m_pSystemOwner->m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v318, 2) )
        __debugbreak();
    }
  }
  else
  {
    ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
  }
  m_pModuleInitKillWrapBox = _RBX->m_pModuleInitKillWrapBox;
  _RAX = pCamera;
  __asm
  {
    vmovaps xmm9, xmm11
    vshufps xmm9, xmm9, xmm9, 0
    vmovups xmmword ptr [rbp+90h], xmm9
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  xmm2, dword ptr [rax+8]
  }
  HIDWORD(center) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp+0A0h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    vmovups xmmword ptr [rbp+0A0h], xmm3
  }
  v66 = ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
  if ( (v66->m_flags & 0x40000000) != 0 && (ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner)->flags & 0x800000) == 0 )
    ParticleState::ApplyModifiers(_RBX, v66, pParticleData);
  v67 = _RBX->m_pStateDef;
  __asm { vmovaps [rsp+2D0h+var_70], xmm8 }
  flags = v67->flags;
  if ( (flags & 0x100) != 0 )
  {
    v69 = _RBX->m_pModuleInitRelativeVelocity;
    if ( v69 && (v69->m_flags & 1) == 0 && (m_velocityType = v69->m_velocityType) != PARTICLE_RELATIVE_VELOCITY_TYPE_LOCAL )
    {
      if ( m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN || m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN_WITH_BOLT_INFO )
      {
        if ( (flags & 4) != 0 )
        {
          SpawnQuatArray = Particle_GetSpawnQuatArray(pParticleData);
          if ( (_DWORD)v47 )
          {
            _RCX = velocityArray;
            v73 = v47;
            _RAX = (char *)SpawnQuatArray - (char *)velocityArray;
            do
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+rcx]
                vmovups xmm8, xmmword ptr [rcx]
              }
              ++_RCX;
              __asm
              {
                vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
                vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
                vshufps xmm5, xmm0, xmm0, 0FFh
                vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
                vmulps  xmm3, xmm0, xmm6
                vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
                vmulps  xmm2, xmm1, xmm7
                vsubps  xmm0, xmm3, xmm2
                vaddps  xmm4, xmm0, xmm0
                vmulps  xmm0, xmm5, xmm4
                vaddps  xmm5, xmm0, xmm8
                vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
                vmulps  xmm3, xmm1, xmm6
                vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
                vmulps  xmm2, xmm0, xmm7
                vsubps  xmm1, xmm3, xmm2
                vaddps  xmm3, xmm1, xmm5
                vmovups xmmword ptr [rcx-10h], xmm3
              }
              --v73;
            }
            while ( v73 );
          }
        }
        else
        {
          VFXName = ParticleState::GetVFXName(_RBX);
          R_WarnOncePerFrame(R_WARN_VFX_NO_LOCATION_MODULE_FOR_RELATIVE_TO_EFFECT_ORIGIN, VFXName);
        }
      }
    }
    else if ( (ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner)->m_flags & 1) != 0 )
    {
      Particle_GetSpawnPosArray(pParticleData);
      v104 = Particle_GetSpawnQuatArray(pParticleData);
      if ( (_DWORD)v47 )
      {
        _RSI = velocityArray;
        v108 = v47;
        _R15 = (char *)v104 - (char *)velocityArray;
        do
        {
          __asm { vmovups xmm0, xmmword ptr [r15+rsi] }
          Float4UnitQuatToAxis(v106, v105);
          __asm { vmovups xmm3, xmmword ptr [rsi] }
          ++_RSI;
          __asm
          {
            vshufps xmm4, xmm3, xmm3, 0AAh ; 'ª'
            vshufps xmm5, xmm3, xmm3, 55h ; 'U'
            vmulps  xmm1, xmm1, xmm5
            vshufps xmm6, xmm3, xmm3, 0
            vmulps  xmm2, xmm2, xmm4
            vaddps  xmm3, xmm1, xmm2
            vmulps  xmm0, xmm0, xmm6
            vaddps  xmm1, xmm0, xmm3
            vmovups xmmword ptr [rsi-10h], xmm1
          }
          --v108;
        }
        while ( v108 );
        v54 = rEmitterTransform;
      }
      _R15 = (ParticleEmitter *)pEmitterOwner;
    }
    else if ( (_DWORD)v47 )
    {
      _RAX = velocityArray;
      v95 = v47;
      do
      {
        __asm { vmovups xmm0, xmmword ptr [rax] }
        ++_RAX;
        __asm
        {
          vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
          vmulps  xmm1, xmm1, xmmword ptr [r14+20h]
          vshufps xmm2, xmm0, xmm0, 55h ; 'U'
          vshufps xmm3, xmm0, xmm0, 0
          vmulps  xmm0, xmm2, xmmword ptr [r14+10h]
          vaddps  xmm2, xmm0, xmm1
          vmulps  xmm0, xmm3, xmmword ptr [r14]
          vaddps  xmm1, xmm0, xmm2
          vmovups xmmword ptr [rax-10h], xmm1
        }
        --v95;
      }
      while ( v95 );
    }
  }
  v118 = _RBX->m_pStateDef;
  if ( (v118->flags & 0x2000000) != 0 )
  {
    m_pModuleParentVelocityGraph = _RBX->m_pModuleParentVelocityGraph;
    if ( m_pModuleParentVelocityGraph )
    {
      __asm { vmovss  dword ptr [rsp+2D0h+fmt], xmm11 }
      ParticleModuleParentVelocityGraph::Update(m_pModuleParentVelocityGraph, pParticleData, 0, v47, fmt, _R15, _RBX);
      v118 = _RBX->m_pStateDef;
    }
  }
  if ( (v118->flags & 0x1000000) != 0 )
  {
    __asm { vmovaps xmm1, xmm11; dt }
    ParticleState::UpdateVelocityBasedOnVectorFields(_RBX, *(float *)&_XMM1, _R15, &v54->w);
  }
  m_pModuleForceDragGraph = _RBX->m_pModuleForceDragGraph;
  if ( m_pModuleForceDragGraph && (m_pModuleForceDragGraph->m_flags & 1) == 0 )
  {
    __asm { vmovss  dword ptr [rsp+2D0h+fmt], xmm11 }
    ParticleModuleForceDragGraph::Update(m_pModuleForceDragGraph, pParticleData, 0, v47, fmta, _R15, _RBX);
  }
  __asm
  {
    vmovaps [rsp+2D0h+var_B0], xmm12
    vmovaps [rsp+2D0h+var_D0], xmm14
    vmovaps [rsp+2D0h+var_E0], xmm15
  }
  if ( m_pModuleInitKillWrapBox )
  {
    _RAX = _RBX->m_pModuleInitKillWrapBox;
    __asm
    {
      vmovups xmm6, xmmword ptr [rax+20h]
      vmovups xmm14, xmmword ptr [rax+10h]
      vshufps xmm0, xmm6, xmm6, 55h ; 'U'
      vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
      vshufps xmm7, xmm14, xmm14, 0AAh ; 'ª'
      vshufps xmm8, xmm14, xmm14, 55h ; 'U'
      vsubss  xmm10, xmm1, xmm7
      vmovss  [rbp+1D0h+var_240], xmm10
      vaddss  xmm10, xmm14, xmm6
      vsubss  xmm15, xmm6, xmm14
      vsubss  xmm12, xmm0, xmm8
      vmovups [rbp+1D0h+var_180], xmm6
      vmovups [rbp+1D0h+var_150], xmm8
      vaddss  xmm6, xmm7, xmm1
      vaddss  xmm8, xmm8, xmm0
      vmovss  [rbp+1D0h+var_24C], xmm10
      vmovss  xmm10, [rbp+1D0h+var_234]
      vmovss  [rbp+1D0h+var_23C], xmm6
      vmovss  [rbp+1D0h+var_250], xmm15
      vmovss  [rbp+1D0h+var_248], xmm12
      vmovss  [rbp+1D0h+var_244], xmm8
      vmovups [rbp+1D0h+var_170], xmm0
      vmovups [rbp+1D0h+var_160], xmm1
      vmovups xmmword ptr [rbp+1D0h+posWorld.v], xmm7
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rbp+1D0h+var_10C]
      vmovss  xmm1, [rbp+1D0h+var_110]
      vmovss  xmm14, dword ptr [rbp+1D0h+var_120+0Ch]
      vmovups xmmword ptr [rbp+1D0h+posWorld.v], xmm0
      vmovss  xmm0, dword ptr [rbp+1D0h+var_120+8]
      vmovups [rbp+1D0h+var_160], xmm0
      vmovss  xmm0, dword ptr [rbp+1D0h+var_120+4]
      vmovups [rbp+1D0h+var_170], xmm0
      vmovss  xmm0, dword ptr [rbp+1D0h+var_120]
      vmovups [rbp+1D0h+var_180], xmm0
      vmovss  xmm0, [rsp+2D0h+var_258]
      vmovss  [rbp+1D0h+var_23C], xmm0
      vmovss  xmm0, [rsp+2D0h+var_258]
      vmovss  [rbp+1D0h+var_244], xmm0
      vmovss  xmm0, [rsp+2D0h+var_258]
      vmovss  [rbp+1D0h+var_24C], xmm0
      vmovss  xmm0, [rsp+2D0h+var_258]
      vmovss  [rbp+1D0h+var_240], xmm0
      vmovss  xmm0, [rsp+2D0h+var_258]
      vmovss  [rbp+1D0h+var_248], xmm0
      vmovss  xmm0, [rsp+2D0h+var_258]
      vmovss  [rbp+1D0h+var_250], xmm0
      vmovups [rbp+1D0h+var_150], xmm1
    }
  }
  __asm { vmovss  xmm1, cs:__real@3f800000 }
  if ( (ParticleEmitter::GetEmitterDef(_R15)->flags & 0x2000000) != 0 )
  {
    __asm { vmovss  [rbp+1D0h+var_238], xmm1 }
  }
  else
  {
    _RAX = pCamera;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0C4h]
      vmovss  [rbp+1D0h+var_238], xmm0
    }
  }
  v149 = 0;
  _R11 = 0x140000000ui64;
  v327 = 0;
  if ( (_DWORD)v47 )
  {
    _R14 = velocityArray;
    _R8 = (char *)rotationAngleArray - (char *)velocityArray;
    v350 = (char *)v349 - (char *)velocityArray;
    _RDX = (char *)positionArray - (char *)velocityArray;
    v346 = (char *)CameraDistanceArray - (char *)_RDI;
    v348 = (char *)LifeArray - (char *)_RDI;
    __asm
    {
      vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovups xmm13, xmmword ptr [rbp+0A0h]
    }
    v357 = (char *)sizeArray - (char *)velocityArray;
    v156 = (char *)RandomSeedArray - (char *)_RDI;
    v343 = (char *)RandomSeedArray - (char *)_RDI;
    v359 = (char *)rotationAngleArray - (char *)velocityArray;
    v358 = (char *)positionArray - (char *)velocityArray;
    while ( 1 )
    {
      if ( _RBX->m_pModuleGravity )
      {
        _RAX = *(int *)((char *)_RDI + v156);
        __asm
        {
          vmovss  xmm2, ds:(rva ?fx_randomTable@@3QBMB+0B0h)[r11+rax*4]; float const near * const fx_randomTable
          vsubss  xmm0, xmm1, xmm2
          vmulss  xmm1, xmm0, dword ptr [rcx+8]
          vmulss  xmm0, xmm2, dword ptr [rcx+0Ch]
          vaddss  xmm1, xmm1, xmm0
          vmulss  xmm3, xmm1, cs:__real@c4480000
        }
        if ( v356 )
        {
          __asm
          {
            vsubss  xmm0, xmm10, dword ptr [r9+rdi]
            vmulss  xmm1, xmm0, xmm3
            vxorps  xmm3, xmm3, xmm3
            vinsertps xmm3, xmm3, xmm1, 20h ; ' '
          }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm3, xmm11
            vxorps  xmm3, xmm3, xmm3
            vinsertps xmm3, xmm3, xmm0, 20h ; ' '
          }
        }
        if ( v321 )
        {
          __asm
          {
            vshufps xmm2, xmm3, xmm3, 55h ; 'U'
            vshufps xmm1, xmm3, xmm3, 0AAh ; 'ª'
            vshufps xmm3, xmm3, xmm3, 0
            vmulps  xmm0, xmm2, xmmword ptr [rax+10h]
            vmulps  xmm1, xmm1, xmmword ptr [rax+20h]
            vaddps  xmm2, xmm0, xmm1
            vmulps  xmm0, xmm3, xmmword ptr [rax]
            vaddps  xmm2, xmm0, xmm2
            vmulps  xmm3, xmm2, cs:__xmm@000000003f8000003f8000003f800000
          }
        }
        __asm
        {
          vaddps  xmm1, xmm3, xmmword ptr [r14]
          vmovups xmmword ptr [r14], xmm1
        }
      }
      _R15 = (char *)_R14 + _RDX;
      if ( (_RBX->m_pStateDef->flags & 8) == 0 )
      {
        __asm
        {
          vmulps  xmm0, xmm9, xmmword ptr [r14]
          vaddps  xmm1, xmm0, xmmword ptr [r15]
          vmovups xmmword ptr [r15], xmm1
        }
      }
      __asm
      {
        vmulps  xmm0, xmm9, xmmword ptr [r10+r14]
        vaddps  xmm1, xmm0, xmmword ptr [r8+r14]
        vmovups xmmword ptr [r8+r14], xmm1
      }
      v182 = _RBX->m_pModuleInitRelativeVelocity;
      if ( !v182 || (v182->m_flags & 1) != 0 || ((v182->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        __asm { vmovups xmm12, xmmword ptr [r15] }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rdx+r14]
          vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
          vshufps xmm3, xmm0, xmm0, 55h ; 'U'
          vshufps xmm4, xmm0, xmm0, 0
          vmulps  xmm0, xmm2, xmmword ptr [rax+20h]
          vaddps  xmm2, xmm0, xmmword ptr [rax+30h]
          vmulps  xmm0, xmm3, xmmword ptr [rax+10h]
          vaddps  xmm1, xmm0, xmm2
          vmulps  xmm0, xmm4, xmmword ptr [rax]
          vaddps  xmm12, xmm0, xmm1
        }
      }
      if ( (_RBX->m_pStateDef->flags & 0x10000000) != 0 )
      {
        ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
        __asm { vaddps  xmm12, xmm12, xmmword ptr [rax+30h] }
      }
      if ( !m_pModuleInitKillWrapBox )
        goto LABEL_119;
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1624, ASSERT_TYPE_ASSERT, "(outParticleFlags)", (const char *)&queryFormat, "outParticleFlags") )
        __debugbreak();
      v192 = _RBX->m_pModuleInitKillWrapBox == NULL;
      v193 = v192;
      if ( !_RBX->m_pModuleInitKillWrapBox )
      {
        v194 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1625, ASSERT_TYPE_ASSERT, "(m_pModuleInitKillWrapBox)", (const char *)&queryFormat, "m_pModuleInitKillWrapBox");
        v192 = !v194;
        v193 = !v194;
        if ( v194 )
          __debugbreak();
      }
      _RDX = rEmitterTransform;
      v196 = 1;
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vsubps  xmm1, xmm12, xmmword ptr [rdx+30h]
        vmovups xmm4, xmmword ptr [rdx+20h]
        vmovups xmm7, xmmword ptr [rdx]
        vshufps xmm0, xmm4, xmm2, 44h ; 'D'
        vshufps xmm8, xmm1, xmm1, 0
        vshufps xmm9, xmm1, xmm1, 55h ; 'U'
        vshufps xmm10, xmm1, xmm1, 0AAh ; 'ª'
        vshufps xmm1, xmm7, xmmword ptr [rdx+10h], 44h ; 'D'
        vshufps xmm3, xmm1, xmm0, 88h ; 'ˆ'
        vshufps xmm6, xmm1, xmm0, 0DDh ; 'Ý'
        vshufps xmm1, xmm7, xmmword ptr [rdx+10h], 0EEh ; 'î'
        vshufps xmm0, xmm4, xmm2, 0EEh ; 'î'
        vshufps xmm5, xmm1, xmm0, 88h ; 'ˆ'
        vmulps  xmm0, xmm8, xmm3
        vaddps  xmm3, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vmulps  xmm0, xmm9, xmm6
        vaddps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vmulps  xmm1, xmm10, xmm5
        vaddps  xmm0, xmm1, xmm3
        vaddps  xmm2, xmm0, xmm2
        vandps  xmm3, xmm2, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
        vsubss  xmm2, xmm3, dword ptr [rbp+1D0h+var_180]
        vcomiss xmm2, xmm14
        vshufps xmm5, xmm3, xmm3, 55h ; 'U'
        vsubss  xmm1, xmm5, dword ptr [rbp+1D0h+var_170]
        vshufps xmm4, xmm3, xmm3, 0AAh ; 'ª'
        vsubss  xmm6, xmm4, dword ptr [rbp+1D0h+var_160]
      }
      if ( v192 )
      {
        __asm
        {
          vxorps  xmm0, xmm14, xmm15
          vcomiss xmm2, xmm0
        }
      }
      else
      {
        v224 = _RBX->m_pModuleInitKillWrapBox;
        v196 = 0;
        v193 = (v224->m_planesKill & 1) == 0;
        if ( (v224->m_planesKill & 1) != 0 )
        {
          *_RDI |= 1u;
          goto LABEL_118;
        }
        __asm { vmovss  xmm3, [rbp+1D0h+var_250] }
      }
      __asm
      {
        vmovups xmm8, [rbp+1D0h+var_150]
        vcomiss xmm1, xmm8
      }
      if ( v193 )
      {
        __asm
        {
          vxorps  xmm0, xmm8, xmm15
          vcomiss xmm1, xmm0
        }
      }
      else
      {
        v228 = _RBX->m_pModuleInitKillWrapBox;
        v196 = 0;
        v193 = (v228->m_planesKill & 4) == 0;
        if ( (v228->m_planesKill & 4) != 0 )
        {
          *_RDI |= 1u;
          goto LABEL_118;
        }
        __asm { vmovss  xmm5, [rbp+1D0h+var_248] }
      }
      __asm
      {
        vmovups xmm7, xmmword ptr [rbp+1D0h+posWorld.v]
        vcomiss xmm6, xmm7
      }
      if ( v193 )
      {
        __asm
        {
          vxorps  xmm0, xmm7, xmm15
          vcomiss xmm6, xmm0
        }
        if ( !v196 )
          goto LABEL_117;
      }
      else
      {
        if ( (_RBX->m_pModuleInitKillWrapBox->m_planesKill & 0x10) == 0 )
        {
          __asm { vmovss  xmm4, [rbp+1D0h+var_240] }
LABEL_117:
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vinsertps xmm1, xmm1, xmm3, 0
            vinsertps xmm1, xmm1, xmm5, 10h
            vinsertps xmm1, xmm1, xmm4, 20h ; ' '
            vmulps  xmm2, xmm1, cs:__xmm@3f7d70a43f7d70a43f7d70a43f7d70a4
            vshufps xmm3, xmm2, xmm2, 0AAh ; 'ª'
            vmulps  xmm0, xmm3, xmmword ptr [rdx+20h]
            vshufps xmm4, xmm2, xmm2, 55h ; 'U'
            vshufps xmm5, xmm2, xmm2, 0
            vaddps  xmm2, xmm0, xmmword ptr [rdx+30h]
            vmulps  xmm0, xmm4, xmmword ptr [rdx+10h]
            vaddps  xmm1, xmm0, xmm2
            vmulps  xmm0, xmm5, xmmword ptr [rdx]
            vaddps  xmm1, xmm0, xmm1
            vmovups xmmword ptr [r15], xmm1
          }
          goto LABEL_118;
        }
        *_RDI |= 1u;
      }
LABEL_118:
      __asm { vmovups xmm9, xmmword ptr [rbp+90h] }
LABEL_119:
      _RAX = v346;
      __asm
      {
        vsubps  xmm0, xmm13, xmm12
        vmulps  xmm1, xmm0, xmm0
        vinsertps xmm2, xmm1, xmm1, 8
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm0, xmm0, xmm0
        vsqrtps xmm1, xmm0
        vmulss  xmm1, xmm1, [rbp+1D0h+var_238]
        vmovss  dword ptr [rax+rdi], xmm1
      }
      if ( v322 )
      {
        if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
          __debugbreak();
        v255 = v327;
        __asm
        {
          vmovss  xmm3, [rsp+2D0h+var_258]; emitterLifeNormalized
          vmovaps xmm2, xmm11; dt
        }
        pParticleState = (ParticleState *)&ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_ATLAS_INDEX)[4 * v327];
        _RAX = v348;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+rdi]
          vmovss  dword ptr [rsp+2D0h+var_2A8], xmm0
        }
        ParticleState::UpdateAtlasIndex(_RBX, _RBX->m_pModuleInitAtlas, *(float *)&_XMM2, *(float *)&_XMM3, *(unsigned int *)((char *)_RDI + v343), v319, pParticleState->m_moduleGraphLengthData.color.v.m128_f32);
      }
      else
      {
        v255 = v327;
      }
      if ( Bool_Internal )
      {
        _RAX = v357;
        __asm
        {
          vmovss  dword ptr [rbp+1D0h+center], xmm12
          vmovups xmm0, xmmword ptr [rax+r14]
        }
        _RAX = v350;
        __asm
        {
          vshufps xmm2, xmm0, xmm0, 55h ; 'U'
          vmovups xmm1, xmm0
          vmaxss  xmm1, xmm2, xmm1; radius
          vmovups xmm0, xmmword ptr [rax+r14]
          vmovups xmmword ptr [rbp+1D0h+color], xmm0
          vextractps dword ptr [rbp+1D0h+center+4], xmm12, 1
          vextractps dword ptr [rbp+1D0h+center+8], xmm12, 2
        }
        Particle_DebugSphere((const vec3_t *)&center, *(float *)&_XMM1, &color, 1, 0);
      }
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vmovss  xmm10, [rbp+1D0h+var_234]
      }
      _RDX = v358;
      _R11 = 0x140000000ui64;
      _R8 = v359;
      v156 = v343;
      ++_RDI;
      ++_R14;
      v327 = v255 + 1;
      if ( v255 + 1 >= (unsigned int)v47 )
      {
        __asm { vmovups xmm13, [rbp+1D0h+var_120] }
        _R15 = (ParticleEmitter *)pEmitterOwner;
        break;
      }
    }
  }
  __asm { vmovaps xmm15, [rsp+2D0h+var_E0] }
  v266 = _RBX->m_pStateDef;
  __asm
  {
    vmovaps xmm14, [rsp+2D0h+var_D0]
    vmovaps xmm12, [rsp+2D0h+var_B0]
  }
  v269 = v266->flags;
  __asm
  {
    vmovaps xmm10, [rsp+2D0h+var_90]
    vmovaps xmm9, [rsp+2D0h+var_80]
    vmovaps xmm8, [rsp+2D0h+var_70]
  }
  if ( (v269 & 0x40000000) != 0 && v324 && (v269 & 0x8000) != 0 )
  {
    ParticleState::SortParticles(_RBX, (LocalClientNum_t)_RBX->m_pParticleData->m_localClientNum, v47);
    v266 = _RBX->m_pStateDef;
  }
  switch ( v266->elementType )
  {
    case 1u:
      if ( _RBX->m_elementTypeModule.pModule )
      {
        __asm
        {
          vmulss  xmm0, xmm11, dword ptr [rax+70h]
          vaddss  xmm5, xmm0, dword ptr [rbx+30h]
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vmovaps xmm2, xmm5
          vmovss  xmm3, xmm1, xmm2
          vroundss xmm4, xmm0, xmm3, 1
          vsubss  xmm1, xmm5, xmm4
          vmovss  dword ptr [rbx+30h], xmm1
          vmulss  xmm0, xmm11, dword ptr [rax+74h]
          vaddss  xmm1, xmm0, dword ptr [rbx+34h]
          vmovss  dword ptr [rbx+34h], xmm1
        }
      }
      v288 = (unsigned __int64)pParticleData->m_localClientNum << 12;
      v289 = 0;
      v290 = NULL;
      if ( g_particleSystemsGeneration[v288 + (_RBX->m_systemBeamChild & 0xFFF)].__all32 == _RBX->m_systemBeamChild )
        v289 = _RBX->m_systemBeamChild & 0xFFF;
      v291 = v288 + v289;
      if ( g_particleSystems[0][v291] >= (ParticleSystem *)0x1000 )
        v290 = g_particleSystems[0][v291];
      if ( v290 )
      {
        ParticleState::UpdateBeamChildTransform(_RBX, v290);
        if ( Dvar_GetBool_Internal(particle_parent_updates_child) || (v292 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_R15), (ParticleSystem::GetDef(v292)->flags & 0x80000) != 0) )
        {
          __asm
          {
            vmulss  xmm0, xmm11, cs:__real@447a0000
            vcvttss2si r9, xmm0; preRollDeltaTime
          }
          ParticleSystem::Update(v290, currentTime, pCamera, _R9);
        }
      }
      break;
    case 4u:
      __asm { vmovaps xmm2, xmm11; dt }
      ParticleState::Update_GeoTrails(_RBX, pParticleData, *(const float *)&_XMM2, pCamera);
      break;
    case 9u:
      __asm { vmovaps xmm1, xmm11; dt }
      ParticleState::Update_Runners(_RBX, *(float *)&_XMM1, currentTime, _R15, pCamera, pParticleData, v47, positionArray, sizeArray, velocityArray, rotationAngleArray, hasRotation, rEmitterTransform);
      break;
    case 0xAu:
      if ( (v266->flags & 0x2000000) != 0 )
      {
        if ( !_RBX->m_tailDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 485, ASSERT_TYPE_ASSERT, "(m_tailDataList)", (const char *)&queryFormat, "m_tailDataList") )
          __debugbreak();
        _RAX = _RBX->m_tailDataList;
        __asm
        {
          vaddss  xmm0, xmm11, dword ptr [rax+18h]
          vmovss  dword ptr [rax+18h], xmm0
        }
        ParentVelocityArray = Particle_GetParentVelocityArray(pParticleData);
        ParticleEmitter::UpdateParentVelocity(_R15, v47, ParentVelocityArray);
      }
      break;
    case 0xBu:
      ParticleState::Update_VectorFields(_RBX, pParticleData);
      break;
  }
  if ( (_RBX->m_pStateDef->flags & 0x400000000i64) != 0 )
  {
    if ( !_RBX->m_timeInStateList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 525, ASSERT_TYPE_ASSERT, "(m_timeInStateList)", (const char *)&queryFormat, "m_timeInStateList") )
      __debugbreak();
    _RDX = _RBX->m_timeInStateList;
    if ( (_DWORD)v47 )
    {
      if ( (unsigned int)v47 >= 0x10 )
      {
        v296 = 8;
        do
        {
          _RAX = v149;
          v149 += 16;
          __asm
          {
            vaddps  xmm0, xmm13, xmmword ptr [rdx+rax*4]
            vmovups xmmword ptr [rdx+rax*4], xmm0
          }
          _RAX = v296 - 4;
          __asm
          {
            vaddps  xmm1, xmm13, xmmword ptr [rdx+rax*4]
            vmovups xmmword ptr [rdx+rax*4], xmm1
          }
          _RAX = v296;
          __asm
          {
            vaddps  xmm1, xmm13, xmmword ptr [rdx+rax*4]
            vmovups xmmword ptr [rdx+rax*4], xmm1
          }
          _RAX = v296 + 4;
          v296 += 16;
          __asm
          {
            vaddps  xmm0, xmm13, xmmword ptr [rdx+rax*4]
            vmovups xmmword ptr [rdx+rax*4], xmm0
          }
        }
        while ( v149 < ((unsigned int)v47 & 0xFFFFFFF0) );
      }
      if ( v149 < (unsigned int)v47 )
      {
        if ( (unsigned int)v47 - v149 >= 4 )
        {
          _RCX = (__int64)&_RDX[v149 + 2];
          v306 = (((unsigned int)v47 - v149 - 4) >> 2) + 1;
          v307 = v306;
          v149 += 4 * v306;
          do
          {
            __asm
            {
              vaddps  xmm0, xmm11, xmmword ptr [rcx-8]
              vmovups xmmword ptr [rcx-8], xmm0
            }
            _RCX += 16i64;
            --v307;
          }
          while ( v307 );
        }
        if ( v149 < (unsigned int)v47 )
        {
          _RCX = &_RDX[v149];
          v310 = (unsigned int)v47 - v149;
          do
          {
            __asm
            {
              vaddss  xmm0, xmm11, dword ptr [rcx]
              vmovss  dword ptr [rcx], xmm0
            }
            ++_RCX;
            --v310;
          }
          while ( v310 );
        }
      }
    }
  }
LABEL_171:
  __asm
  {
    vmovaps xmm7, [rsp+2D0h+var_60]
    vmovaps xmm6, [rsp+2D0h+var_50]
    vmovaps xmm11, [rsp+2D0h+var_A0]
    vmovaps xmm13, [rsp+2D0h+var_C0]
  }
}

/*
==============
ParticleState::UpdateLiveTweakingData
==============
*/
void ParticleState::UpdateLiveTweakingData(ParticleState *this)
{
  const ParticleModuleInitAtlas *m_pModuleInitAtlas; 
  const ParticleEmitter *EmitterOwner; 

  m_pModuleInitAtlas = this->m_pModuleInitAtlas;
  if ( m_pModuleInitAtlas && (m_pModuleInitAtlas->m_flags & 1) == 0 && this->m_atlasData.isAtlas )
  {
    EmitterOwner = ParticleState::GetEmitterOwner(this);
    ParticleState::InitAtlasData(this, m_pModuleInitAtlas, EmitterOwner);
  }
}

/*
==============
ParticleState::UpdateModifiers
==============
*/
void ParticleState::UpdateModifiers(ParticleState *this, const ParticleSystem *pSystemOwner, ParticleSystem *pChildSystem, const float4 *size, const float4 *velocity, const ParticleModifier *scaleMod, const ParticleModifier *velocityMod, ParticleUseScaleOptions scaleOptions, ParticleUseVelocityOptions velocityOptions)
{
  ParticleSystemFlags m_flags; 

  if ( !pChildSystem )
    return;
  _RBX = pChildSystem;
  _RDI = pSystemOwner;
  if ( !pChildSystem->m_isRunning )
    return;
  m_flags = pChildSystem->m_flags;
  if ( (m_flags & 0x30) != 0 || (BYTE2(m_flags) & 1) != 0 )
    return;
  if ( velocityOptions == PARTICLE_USE_VELOCITY_OPTION_MULT )
  {
    _RAX = velocityMod;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx+0B0h], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
    }
    _RBX->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_MULT;
  }
  else
  {
    if ( velocityOptions != PARTICLE_USE_VELOCITY_OPTION_OVERRIDE )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups xmmword ptr [rbx+0B0h], xmm0
        vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      }
      _RBX->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_NONE;
      __asm { vmovups xmmword ptr [rbx+0C0h], xmm1 }
      _RBX->m_flags = m_flags | 0x40000000;
      goto LABEL_11;
    }
    _RAX = velocity;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx+0B0h], xmm0
      vmovups xmm1, xmmword ptr [rax]
    }
    _RBX->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_OVERRIDE;
  }
  __asm { vmovups xmmword ptr [rbx+0C0h], xmm1 }
  _RBX->m_flags |= 0x40000000ui64;
LABEL_11:
  if ( scaleOptions == PARTICLE_USE_SCALE_OPTION_MULT )
  {
    _RAX = scaleMod;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx+0D0h], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
    }
    _RBX->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_MULT;
  }
  else if ( scaleOptions == PARTICLE_USE_SCALE_OPTION_OVERRIDE )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r9]
      vmovups xmmword ptr [rbx+0D0h], xmm0
      vmovups xmm1, xmmword ptr [r9]
    }
    _RBX->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_OVERRIDE;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vmovups xmmword ptr [rbx+0D0h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    }
    _RBX->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_NONE;
  }
  __asm { vmovups xmmword ptr [rbx+0E0h], xmm1 }
  _RBX->m_flags |= 0x40000000ui64;
  if ( (pSystemOwner->m_flags & 0x40000000) != 0 )
  {
    if ( _RBX->m_scaleOptions == PARTICLE_USE_SCALE_OPTION_MULT )
    {
      __asm
      {
        vmovups xmm1, xmmword ptr [rdx+0D0h]
        vmulps  xmm0, xmm1, xmmword ptr [rbx+0D0h]
        vmovups xmmword ptr [rbx+0D0h], xmm0
        vmovups xmm1, xmmword ptr [rdx+0E0h]
        vmulps  xmm0, xmm1, xmmword ptr [rbx+0E0h]
        vmovups xmmword ptr [rbx+0E0h], xmm0
      }
    }
    if ( _RBX->m_velocityOptions == PARTICLE_USE_VELOCITY_OPTION_MULT )
    {
      if ( (pSystemOwner->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 338, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
        __debugbreak();
      __asm
      {
        vmovups xmm1, xmmword ptr [rdi+0B0h]
        vmulps  xmm0, xmm1, xmmword ptr [rbx+0B0h]
        vmovups xmmword ptr [rbx+0B0h], xmm0
        vmovups xmm1, xmmword ptr [rdi+0C0h]
        vmulps  xmm0, xmm1, xmmword ptr [rbx+0C0h]
        vmovups xmmword ptr [rbx+0C0h], xmm0
      }
    }
  }
}

/*
==============
ParticleState::UpdateScaleModifier
==============
*/
void ParticleState::UpdateScaleModifier(ParticleState *this, const ParticleSystem *pSystemOwner, ParticleSystem *pChildSystem, const float4 *size, const ParticleModifier *scaleMod, ParticleUseScaleOptions scaleOptions)
{
  if ( scaleOptions == PARTICLE_USE_SCALE_OPTION_MULT )
  {
    _RAX = scaleMod;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [r8+0D0h], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
    }
    pChildSystem->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_MULT;
  }
  else if ( scaleOptions == PARTICLE_USE_SCALE_OPTION_OVERRIDE )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r9]
      vmovups xmmword ptr [r8+0D0h], xmm0
      vmovups xmm1, xmmword ptr [r9]
    }
    pChildSystem->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_OVERRIDE;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vmovups xmmword ptr [r8+0D0h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    }
    pChildSystem->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_NONE;
  }
  __asm { vmovups xmmword ptr [r8+0E0h], xmm1 }
  pChildSystem->m_flags |= 0x40000000ui64;
}

/*
==============
ParticleState::UpdateScriptedInputData
==============
*/
void ParticleState::UpdateScriptedInputData(ParticleState *this, ParticleData *pParticleData, const float dt, const ParticleEmitter *pEmitterOwner)
{
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1071, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1072, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner);
}

/*
==============
ParticleState::UpdateVelocityBasedOnVectorFields
==============
*/

void __fastcall ParticleState::UpdateVelocityBasedOnVectorFields(ParticleState *this, double dt, const ParticleEmitter *pEmitterOwner, const float4 *emitterPos)
{
  ParticleSystemHandle SystemHandle; 
  const ParticleStateDef *m_pStateDef; 
  ParticleSystem *SystemOwner; 
  unsigned int v18; 
  float4 *PositionArray; 
  unsigned int m_particleCountRunning; 
  __int64 v26; 
  unsigned int m_numVectorFields; 
  vec3_t outSample; 
  vec3_t v63; 
  vec3_t pos; 
  vec3_t worldPos; 
  __int128 v66; 
  __int128 v67; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RSI = emitterPos;
  __asm { vmovaps xmm7, xmm1 }
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1477, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( !this->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1478, ASSERT_TYPE_ASSERT, "(m_pParticleData)", (const char *)&queryFormat, "m_pParticleData") )
    __debugbreak();
  if ( (this->m_pStateDef->flags & 0x1000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1479, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_STATE_DEF_FLAG_USE_VECTOR_FIELDS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_STATE_DEF_FLAG_USE_VECTOR_FIELDS )") )
    __debugbreak();
  _RAX = ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner);
  __asm { vmovups xmm1, xmmword ptr [rsi] }
  SystemHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
  __asm { vmovss  xmm6, dword ptr [rax+60h] }
  m_pStateDef = this->m_pStateDef;
  __asm
  {
    vmovss  dword ptr [rbp+57h+worldPos], xmm1
    vextractps dword ptr [rbp+57h+worldPos+4], xmm1, 1
    vextractps dword ptr [rbp+57h+worldPos+8], xmm1, 2
  }
  if ( (m_pStateDef->flags & 0x2000000000i64) != 0 )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
    SystemHandle = ParticleSystem::GetSystemHandle(SystemOwner);
  }
  __asm { vmovaps xmm1, xmm6; radius }
  v18 = CG_Wind_QueryRegion(&worldPos, *(float *)&_XMM1, SystemHandle, this->m_vectorFields, 8);
  this->m_numVectorFields = v18;
  if ( v18 )
  {
    PositionArray = Particle_GetPositionArray(this->m_pParticleData);
    _RDI = Particle_GetVelocityArray(this->m_pParticleData);
    _RSI = Particle_GetVectorFieldScaleArray(this->m_pParticleData);
    __asm
    {
      vmovaps xmm6, xmm7
      vshufps xmm6, xmm6, xmm6, 0
    }
    m_particleCountRunning = this->m_pParticleData->m_particleCountRunning;
    if ( m_particleCountRunning )
    {
      _R12 = (char *)PositionArray - (char *)_RDI;
      v26 = m_particleCountRunning;
      do
      {
        __asm { vmovups xmm1, xmmword ptr [r12+rdi] }
        m_numVectorFields = this->m_numVectorFields;
        __asm
        {
          vmovss  dword ptr [rbp+57h+pos], xmm1
          vextractps dword ptr [rbp+57h+pos+4], xmm1, 1
          vextractps dword ptr [rbp+57h+pos+8], xmm1, 2
        }
        if ( CG_Wind_SamplePosAgainstInstances(&pos, &outSample, m_numVectorFields, this->m_vectorFields, HALF_HALF) )
        {
          if ( (this->m_pStateDef->flags & 0x1000000000i64) != 0 )
          {
            __asm
            {
              vmovss  xmm2, dword ptr [rsi]
              vmovss  xmm0, dword ptr [rbp+57h+outSample]
              vmovss  xmm1, dword ptr [rbp+57h+outSample+4]
              vmulss  xmm3, xmm0, xmm2
              vmovss  xmm0, dword ptr [rbp+57h+outSample+8]
              vmulss  xmm4, xmm1, xmm2
              vmulss  xmm1, xmm0, xmm2
              vmovss  dword ptr [rbp+57h+outSample+8], xmm1
              vmovss  dword ptr [rbp+57h+outSample], xmm3
              vmovss  dword ptr [rbp+57h+outSample+4], xmm4
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+57h+outSample+8]
              vmovss  xmm4, dword ptr [rbp+57h+outSample+4]
              vmovss  xmm3, dword ptr [rbp+57h+outSample]
            }
          }
          HIDWORD(v66) = 0;
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp-19h]
            vmovss  xmm0, xmm0, xmm3
            vinsertps xmm0, xmm0, xmm4, 10h
            vinsertps xmm0, xmm0, xmm1, 20h ; ' '
            vmovups xmmword ptr [rbp-19h], xmm0
            vmovups xmmword ptr [rdi], xmm0
          }
        }
        if ( CG_Wind_SamplePosAgainstInstances(&pos, &v63, this->m_numVectorFields, this->m_vectorFields, HALF) )
        {
          if ( (this->m_pStateDef->flags & 0x1000000000i64) != 0 )
          {
            __asm
            {
              vmovss  xmm2, dword ptr [rsi]
              vmovss  xmm0, dword ptr [rbp+57h+var_A0]
              vmovss  xmm1, dword ptr [rbp+57h+var_A0+4]
              vmulss  xmm3, xmm0, xmm2
              vmovss  xmm0, dword ptr [rbp+57h+var_A0+8]
              vmulss  xmm4, xmm1, xmm2
              vmulss  xmm1, xmm0, xmm2
              vmovss  dword ptr [rbp+57h+var_A0+8], xmm1
              vmovss  dword ptr [rbp+57h+var_A0], xmm3
              vmovss  dword ptr [rbp+57h+var_A0+4], xmm4
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+57h+var_A0+8]
              vmovss  xmm4, dword ptr [rbp+57h+var_A0+4]
              vmovss  xmm3, dword ptr [rbp+57h+var_A0]
            }
          }
          HIDWORD(v67) = 0;
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp-9]
            vmovss  xmm0, xmm0, xmm3
            vinsertps xmm0, xmm0, xmm4, 10h
            vinsertps xmm0, xmm0, xmm1, 20h ; ' '
            vmovups xmmword ptr [rbp-9], xmm0
            vmulps  xmm0, xmm6, xmm0
            vaddps  xmm1, xmm0, xmmword ptr [rdi]
            vmovups xmmword ptr [rdi], xmm1
          }
        }
        ++_RSI;
        ++_RDI;
        --v26;
      }
      while ( v26 );
    }
  }
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
ParticleState::UpdateVelocityModifier
==============
*/
void ParticleState::UpdateVelocityModifier(ParticleState *this, const ParticleSystem *pSystemOwner, ParticleSystem *pChildSystem, const float4 *velocity, const ParticleModifier *velocityMod, ParticleUseVelocityOptions velocityOptions)
{
  if ( velocityOptions == PARTICLE_USE_VELOCITY_OPTION_MULT )
  {
    _RAX = velocityMod;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [r8+0B0h], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
    }
    pChildSystem->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_MULT;
  }
  else if ( velocityOptions == PARTICLE_USE_VELOCITY_OPTION_OVERRIDE )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r9]
      vmovups xmmword ptr [r8+0B0h], xmm0
      vmovups xmm1, xmmword ptr [r9]
    }
    pChildSystem->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_OVERRIDE;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vmovups xmmword ptr [r8+0B0h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    }
    pChildSystem->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_NONE;
  }
  __asm { vmovups xmmword ptr [r8+0C0h], xmm1 }
  pChildSystem->m_flags |= 0x40000000ui64;
}

/*
==============
ParticleState::Update_GeoTrailTangentsAndCameraDist
==============
*/
void ParticleState::Update_GeoTrailTangentsAndCameraDist(ParticleState *this, const ParticleEmitter *pEmitterOwner, Particle_TrailData *rTrailData, const float4 *sizeArray, const float4 *positionArray, float *cameraDistanceArray, const FxCamera *pCamera, bool cameraFacing)
{
  const ParticleStateDef *m_pStateDef; 
  unsigned int numPointsRunning; 
  unsigned int numPointsMax; 
  bool v62; 
  __int64 v63; 
  __int64 v68; 
  bool v184; 
  _QWORD outMatrix[7]; 
  float *v186; 
  float4 targetPos; 
  float4 cameraPos; 
  float4 currLookAt; 
  char v194; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0B8h], xmm13
  }
  _RSI = pCamera;
  v186 = cameraDistanceArray;
  m_pStateDef = this->m_pStateDef;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-0A8h], xmm12
  }
  if ( m_pStateDef->elementType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2820, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL") )
    __debugbreak();
  if ( !sizeArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2821, ASSERT_TYPE_ASSERT, "(sizeArray)", (const char *)&queryFormat, "sizeArray") )
    __debugbreak();
  if ( !positionArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2822, ASSERT_TYPE_ASSERT, "(positionArray)", (const char *)&queryFormat, "positionArray") )
    __debugbreak();
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2823, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  numPointsRunning = rTrailData->numPointsRunning;
  if ( numPointsRunning <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2826, ASSERT_TYPE_ASSERT, "(numTrailPoints > 1)", (const char *)&queryFormat, "numTrailPoints > 1") )
    __debugbreak();
  numPointsMax = rTrailData->numPointsMax;
  if ( rTrailData->numPointsRunning == numPointsMax )
    _RDI = (rTrailData->lastPointIndex + 1) % numPointsMax;
  else
    _RDI = rTrailData->firstPointIndex;
  _R12 = rTrailData->pointList;
  v184 = (this->m_pStateDef->flags & 8) != 0;
  if ( (unsigned int)_RDI >= numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
    __debugbreak();
  _RBX = (unsigned int)(_RDI + 1) % rTrailData->numPointsMax;
  _RDX = &positionArray[_RBX];
  _RCX = &positionArray[_RDI];
  if ( v184 )
  {
    _RAX = 10 * _RDI;
    __asm
    {
      vmovups xmm1, xmmword ptr [r12+rax*8+30h]
      vaddps  xmm9, xmm1, xmmword ptr [rcx]
    }
    _RAX = 10 * _RBX;
    __asm
    {
      vmovups xmm1, xmmword ptr [r12+rax*8+30h]
      vaddps  xmm11, xmm1, xmmword ptr [rdx]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm9, xmmword ptr [rcx]
      vmovups xmm11, xmmword ptr [rdx]
    }
  }
  __asm { vmovss  xmm0, dword ptr [rsi] }
  currLookAt.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm10, xmmword ptr [rbp-40h]
    vmovss  xmm10, xmm10, xmm0
    vinsertps xmm10, xmm10, dword ptr [rsi+4], 10h
    vinsertps xmm10, xmm10, dword ptr [rsi+8], 20h ; ' '
    vsubps  xmm3, xmm11, xmm9
    vxorps  xmm12, xmm12, xmm12
    vshufps xmm0, xmm3, xmm12, 0FAh ; 'ú'
    vshufps xmm1, xmm3, xmm0, 84h ; '„'
    vmovups xmmword ptr [rbp-40h], xmm10
    vmovups xmmword ptr [rbp-40h], xmm1
    vmovups xmmword ptr [rbp+0B0h+targetPos.v], xmm9
    vmovups xmmword ptr [rbp+0B0h+cameraPos.v], xmm10
  }
  if ( cameraFacing )
    Particle_GenerateCameraFacingMatrix(&cameraPos, &targetPos, &currLookAt, (vector3 *)&outMatrix[1]);
  else
    Particle_GenerateMatrixFromLookAt(&currLookAt, (vector3 *)&outMatrix[1]);
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+1B0h+outMatrix+8]
    vmovups xmm6, xmmword ptr [rsp+1B0h+outMatrix+18h]
    vmovups xmm8, xmmword ptr [rbp+0B0h+outMatrix+28h]
  }
  _RAX = 10 * _RDI;
  __asm
  {
    vmovups xmmword ptr [r12+rax*8], xmm7
    vmovups xmmword ptr [r12+rax*8+10h], xmm6
    vmovups xmmword ptr [r12+rax*8+20h], xmm8
  }
  if ( (ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner)->flags & 0x2000000) != 0 )
    __asm { vmovss  xmm13, cs:__real@3f800000 }
  else
    __asm { vmovss  xmm13, dword ptr [rsi+0C4h] }
  _R15 = v186;
  __asm
  {
    vsubps  xmm0, xmm10, xmm9
    vmulps  xmm1, xmm0, xmm0
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vmulss  xmm1, xmm1, xmm13
    vmovss  dword ptr [r15+rdi*4], xmm1
  }
  v62 = numPointsRunning == 2;
  v63 = numPointsRunning - 2;
  if ( !v62 )
  {
    __asm
    {
      vmovaps xmmword ptr [rsp+1B0h+var_C8+8], xmm14
      vmovss  xmm14, cs:__real@bf7fbe77
      vmovaps [rsp+1B0h+var_D8+8], xmm15
      vxorps  xmm15, xmm15, xmm15
    }
    do
    {
      if ( (unsigned int)_RBX >= rTrailData->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
        __debugbreak();
      _RCX = &positionArray[_RBX];
      _R8 = &positionArray[(unsigned int)(_RBX + 1) % rTrailData->numPointsMax];
      v68 = (unsigned int)(_RBX + 1) % rTrailData->numPointsMax;
      if ( v184 )
      {
        _RAX = 10 * _RBX;
        __asm
        {
          vmovups xmm1, xmmword ptr [r12+rax*8+30h]
          vaddps  xmm9, xmm1, xmmword ptr [rcx]
        }
        _RAX = 10i64 * ((unsigned int)(_RBX + 1) % rTrailData->numPointsMax);
        __asm
        {
          vmovups xmm1, xmmword ptr [r12+rax*8+30h]
          vaddps  xmm11, xmm1, xmmword ptr [r8]
        }
      }
      else
      {
        __asm
        {
          vmovups xmm9, xmmword ptr [rcx]
          vmovups xmm11, xmmword ptr [r8]
        }
      }
      __asm
      {
        vsubps  xmm1, xmm11, xmm9
        vshufps xmm0, xmm1, xmm12, 0FAh ; 'ú'
        vshufps xmm6, xmm1, xmm0, 84h ; '„'
      }
      if ( cameraFacing )
      {
        __asm
        {
          vcmpneqps xmm0, xmm9, xmm9
          vmovmskps eax, xmm0
        }
        if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 412, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( targetPos ))", (const char *)&queryFormat, "!Float4IsNaN( targetPos )") )
          __debugbreak();
        __asm
        {
          vcmpneqps xmm0, xmm10, xmm10
          vmovmskps eax, xmm0
        }
        if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 413, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( cameraPos ))", (const char *)&queryFormat, "!Float4IsNaN( cameraPos )") )
          __debugbreak();
        __asm
        {
          vcmpneqps xmm0, xmm6, xmm6
          vmovmskps eax, xmm0
        }
        if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 414, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( currLookAt ))", (const char *)&queryFormat, "!Float4IsNaN( currLookAt )") )
          __debugbreak();
        __asm
        {
          vmovups xmm7, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
          vmovups xmm8, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
          vsubps  xmm4, xmm9, xmm10
          vandnps xmm0, xmm7, xmm4
          vcmpltps xmm0, xmm8, xmm0
          vmovmskps eax, xmm0
        }
        if ( (_EAX & 0xF) == 0 )
          __asm { vmovdqa xmm4, xmmword ptr cs:?g_0010@@3Ufloat4@@B.v; float4 const g_0010 }
        __asm
        {
          vandnps xmm0, xmm7, xmm6
          vcmpltps xmm0, xmm8, xmm0
          vmovmskps eax, xmm0
        }
        if ( (_EAX & 0xF) == 0 )
          __asm { vmovdqa xmm6, xmmword ptr cs:?g_1000@@3Ufloat4@@B.v; float4 const g_1000 }
        __asm
        {
          vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
          vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
          vmulps  xmm3, xmm1, xmm0
          vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
          vshufps xmm2, xmm6, xmm6, 0D2h ; 'Ò'
          vmulps  xmm0, xmm2, xmm1
          vsubps  xmm5, xmm0, xmm3
          vandnps xmm1, xmm7, xmm5
          vcmpltps xmm0, xmm8, xmm1
          vmovmskps eax, xmm0
        }
        if ( (_EAX & 0xF) != 0 )
        {
          __asm
          {
            vmulps  xmm0, xmm5, xmm5
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vrsqrtps xmm1, xmm0
            vmulps  xmm7, xmm1, xmm5
          }
        }
        else
        {
          __asm { vmovdqa xmm7, xmmword ptr cs:?g_0100@@3Ufloat4@@B.v; float4 const g_0100 }
        }
        __asm
        {
          vmulps  xmm0, xmm6, xmm6
          vinsertps xmm1, xmm0, xmm0, 8
          vhaddps xmm2, xmm1, xmm1
          vhaddps xmm0, xmm2, xmm2
          vrsqrtps xmm1, xmm0
          vmulps  xmm2, xmm1, xmm6
          vsubps  xmm6, xmm12, xmm2
          vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
          vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
          vmulps  xmm3, xmm1, xmm0
          vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
          vshufps xmm2, xmm7, xmm7, 0D2h ; 'Ò'
          vmulps  xmm0, xmm2, xmm1
          vsubps  xmm8, xmm3, xmm0
        }
      }
      else
      {
        __asm
        {
          vshufps xmm0, xmm6, xmm6, 0FFh
          vucomiss xmm0, xmm15
          vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
          vmovups xmm1, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
          vmovups xmm4, cs:__xmm@000000003f8000000000000000000000
          vandnps xmm2, xmm0, xmm6
          vcmpltps xmm0, xmm1, xmm2
          vmovmskps eax, xmm0
        }
        if ( (_EAX & 0xF) != 0 )
        {
          __asm
          {
            vmulps  xmm0, xmm6, xmm6
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vsqrtps xmm1, xmm0
            vdivps  xmm6, xmm6, xmm1
            vmulps  xmm0, xmm6, xmm4
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vcomiss xmm0, cs:__real@3f7fbe77
          }
          if ( (_EAX & 0xF) != 0 )
          {
            __asm { vmovups xmm5, cs:__xmm@0000000000000000000000003f800000 }
          }
          else
          {
            __asm
            {
              vcomiss xmm0, xmm14
              vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
              vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
              vmulps  xmm3, xmm1, xmm0
              vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
              vshufps xmm2, xmm6, xmm6, 0D2h ; 'Ò'
              vmulps  xmm0, xmm2, xmm1
              vsubps  xmm4, xmm3, xmm0
              vmulps  xmm1, xmm4, xmm4
              vinsertps xmm0, xmm1, xmm1, 8
              vhaddps xmm2, xmm0, xmm0
              vhaddps xmm0, xmm2, xmm2
              vsqrtps xmm1, xmm0
              vdivps  xmm5, xmm4, xmm1
            }
          }
          __asm
          {
            vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
            vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
            vmulps  xmm3, xmm1, xmm0
            vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
            vshufps xmm2, xmm6, xmm6, 0D2h ; 'Ò'
            vmulps  xmm0, xmm2, xmm1
            vsubps  xmm4, xmm0, xmm3
            vmovdqa xmmword ptr [rbp+0B0h+outMatrix+28h], xmm4
            vmovdqa xmmword ptr [rsp+1B0h+outMatrix+8], xmm5
            vmovdqa xmmword ptr [rsp+1B0h+outMatrix+18h], xmm6
          }
          Particle_AssertFloat4IsNormalized((const float4 *)&outMatrix[1]);
          Particle_AssertFloat4IsNormalized((const float4 *)&outMatrix[3]);
          Particle_AssertFloat4IsNormalized((const float4 *)&outMatrix[5]);
          __asm
          {
            vmovups xmm8, xmmword ptr [rbp+0B0h+outMatrix+28h]
            vmovups xmm6, xmmword ptr [rsp+1B0h+outMatrix+18h]
            vmovups xmm7, xmmword ptr [rsp+1B0h+outMatrix+8]
          }
        }
        else
        {
          __asm
          {
            vmovups xmm7, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
            vmovups xmm6, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+10h; tmat44_t<vec4_t> const identityMatrix44
            vmovups xmm8, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
          }
        }
      }
      __asm
      {
        vsubps  xmm0, xmm10, xmm9
        vmulps  xmm1, xmm0, xmm0
        vinsertps xmm2, xmm1, xmm1, 8
      }
      _RAX = 10 * _RBX;
      __asm
      {
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm0, xmm0, xmm0
        vsqrtps xmm1, xmm0
        vmulss  xmm1, xmm1, xmm13
        vmovups xmmword ptr [r12+rax*8], xmm7
        vmovups xmmword ptr [r12+rax*8+10h], xmm6
        vmovups xmmword ptr [r12+rax*8+20h], xmm8
        vmovss  dword ptr [r15+rbx*4], xmm1
      }
      _RBX = v68;
      --v63;
    }
    while ( v63 );
    __asm
    {
      vmovaps xmm15, [rsp+1B0h+var_D8+8]
      vmovaps xmm14, xmmword ptr [rsp+1B0h+var_C8+8]
    }
  }
  __asm
  {
    vmovaps xmm12, xmmword ptr [rsp+1B0h+var_A8+8]
    vmovaps xmm9, xmmword ptr [rsp+1B0h+var_78+8]
  }
  if ( (_DWORD)_RBX != rTrailData->lastPointIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2973, ASSERT_TYPE_ASSERT, "(trailIndex == rTrailData.lastPointIndex)", (const char *)&queryFormat, "trailIndex == rTrailData.lastPointIndex") )
    __debugbreak();
  __asm
  {
    vsubps  xmm0, xmm10, xmm11
    vmulps  xmm1, xmm0, xmm0
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
  }
  _RAX = 10 * _RBX;
  __asm
  {
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vmulss  xmm1, xmm1, xmm13
    vmovups xmmword ptr [r12+rax*8], xmm7
    vmovups xmmword ptr [r12+rax*8+10h], xmm6
    vmovups xmmword ptr [r12+rax*8+20h], xmm8
    vmovss  dword ptr [r15+rbx*4], xmm1
  }
  _R11 = &v194;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm8, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-68h]
    vmovaps xmm11, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-98h]
  }
}

/*
==============
ParticleState::Update_GeoTrails
==============
*/

void __fastcall ParticleState::Update_GeoTrails(ParticleState *this, const ParticleData *pParticleData, double dt, const FxCamera *pCamera)
{
  unsigned int m_particleCountRunning; 
  Particle_TrailData *v21; 
  float4 *VelocityArray; 
  bool v23; 
  unsigned __int8 *ParticleDataArray; 
  unsigned __int8 *v25; 
  unsigned __int8 *v26; 
  unsigned __int8 *v27; 
  unsigned __int8 *v28; 
  unsigned __int8 *v29; 
  unsigned __int8 *v30; 
  ParticleState::ElementTypeModule v31; 
  const ParticleStateDef *m_pStateDef; 
  const ParticleModuleGroupDef *moduleGroupDefs; 
  const ParticleModuleInitAtlas *v35; 
  __int64 v42; 
  Particle_TrailData *v47; 
  __int64 numPointsRunning; 
  ParticleData *v49; 
  unsigned int numPointsMax; 
  unsigned int firstPointIndex; 
  unsigned __int8 *v52; 
  float4 *v53; 
  unsigned __int8 *v54; 
  unsigned __int8 *v55; 
  unsigned __int8 *v56; 
  unsigned __int8 *v57; 
  unsigned __int8 *v59; 
  unsigned __int8 *v60; 
  __int64 v66; 
  unsigned int v72; 
  Particle_TrailData *v73; 
  unsigned int v74; 
  __int64 v76; 
  Particle_TrailData *v77; 
  bool v78; 
  unsigned int v80; 
  unsigned int v81; 
  ParticleData *v82; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  const ParticleStateDef *v100; 
  __int64 v102; 
  Particle_TrailData *v103; 
  __int64 v108; 
  ParticleState *v123; 
  ParticleData *v203; 
  char v204; 
  unsigned int v205; 
  unsigned int v206; 
  unsigned int m_particleCountMax; 
  unsigned int v208; 
  __int64 v209; 
  int m_localClientNum; 
  ParticleData *v211; 
  __int64 v212; 
  ParticleDataFlags v213; 
  unsigned int SingleParticleSize; 
  unsigned __int16 v215; 
  LocalClientNum_t v216; 
  unsigned int v217; 
  unsigned __int8 *v218; 
  unsigned __int8 *v219; 
  unsigned __int8 *v221; 
  ParticleModule *v223; 
  __int64 v225; 
  unsigned __int8 *v226; 
  ParticleModule *v228; 
  LocalClientNum_t v230; 
  unsigned __int8 *m_pParticleData; 
  ParticleState *v232; 
  unsigned int v233; 
  unsigned int v234; 
  char v235; 
  unsigned int v236; 
  unsigned int v237; 
  int v238; 
  const char *VFXName; 
  unsigned int v240; 
  unsigned int v241; 
  __int64 v244; 
  ParticleState *v267; 
  unsigned __int8 *v269; 
  __int64 v270; 
  const ParticleModuleInitAtlas *v277; 
  const ParticleCurveDef *m_curves; 
  __int64 v299; 
  unsigned __int8 *v301; 
  const ParticleCurveDef *v310; 
  __int64 v326; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float fmto; 
  ParticleEmitter *pEmitterOwner; 
  ParticleState *pParticleState; 
  ParticleState *pParticleStatea; 
  double cameraFacing; 
  double cameraFacinga; 
  double v360; 
  double v361; 
  double v362; 
  double v363; 
  char v364; 
  unsigned int particleOffset; 
  char v368; 
  Particle_TrailData *rTrailData; 
  ParticleEmitter *v370; 
  char m_flags; 
  unsigned __int8 *v373; 
  unsigned __int8 *v374; 
  unsigned __int8 *v375; 
  unsigned int v376; 
  unsigned __int8 *v377; 
  unsigned int v378; 
  unsigned __int8 *particleCount; 
  unsigned int particleCounta; 
  const ParticleModuleInitAtlas *m_pModuleInitAtlas; 
  __int64 v382; 
  unsigned __int8 *v383; 
  unsigned __int8 *v384; 
  int v385; 
  bool v386; 
  unsigned __int8 *v387; 
  ParticleData *pParticleDataa; 
  float4 *positionArray; 
  float4 point; 
  unsigned __int8 *v391; 
  unsigned int v393; 
  Particle_TrailPoint *pointList; 
  ParticleModule *v396; 
  __int64 v397; 
  unsigned __int8 *v398; 
  unsigned __int8 *v399; 
  ParticleModule *pModuleBase; 
  float4 *v401; 
  ParticleModule *v402; 
  ParticleModule *v403; 
  unsigned __int8 *v404; 
  ParticleModule *v405; 
  ParticleModule *v406; 
  ParticleModule *v407; 
  ParticleModule *v408; 
  float *cameraDistanceArray; 
  float4 *sizeArray; 
  const vector4 *EmitterTransform; 
  unsigned __int8 *v412; 
  unsigned __int8 *v413; 
  float4 *v414; 
  unsigned __int8 *v415; 
  unsigned __int8 *v416; 
  unsigned __int8 *v417; 
  unsigned __int8 *v418; 
  unsigned __int8 *v419; 
  const ParticleEmitterDef *v420; 
  ParticleState::ElementTypeModule v421; 
  FxCamera *pCameraa; 
  unsigned __int8 *v423; 
  Particle_TrailData *TrailDataList; 
  float4 quat; 
  float4 normal; 
  float4 v427; 
  float4 v428; 
  char v433; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
  }
  pCameraa = (FxCamera *)pCamera;
  __asm { vmovaps xmm9, xmm2 }
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2428, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( this->m_pStateDef->elementType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2429, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL") )
    __debugbreak();
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2430, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  _RSI = (ParticleEmitter *)this->m_pEmitterOwner;
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  v370 = _RSI;
  v393 = m_particleCountRunning;
  EmitterTransform = ParticleEmitter::GetEmitterTransform(_RSI, this);
  TrailDataList = ParticleState::GetTrailDataList(this);
  v21 = TrailDataList;
  v401 = Particle_GetPositionArray(pParticleData);
  VelocityArray = Particle_GetVelocityArray(pParticleData);
  v23 = pParticleData->m_pParticleData == NULL;
  v414 = VelocityArray;
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  ParticleDataArray = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_RANDOM_SEED);
  v23 = pParticleData->m_pParticleData == NULL;
  v398 = ParticleDataArray;
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v25 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_SIZE);
  v23 = pParticleData->m_pParticleData == NULL;
  v413 = v25;
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 343, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v26 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_COLOR);
  v23 = pParticleData->m_pParticleData == NULL;
  v412 = v26;
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 357, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v27 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_EMISSIVE);
  v23 = pParticleData->m_pParticleData == NULL;
  v415 = v27;
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 359, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v417 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_INTENSITY);
  if ( ParticleData::HasParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_TEMPERATURE) )
  {
    if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 360, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
      __debugbreak();
    v399 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_TEMPERATURE);
  }
  else
  {
    v399 = NULL;
  }
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 366, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v28 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_VECTOR_FIELD_SCALE);
  v23 = pParticleData->m_pParticleData == NULL;
  v418 = v28;
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 354, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v29 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_FLAGS);
  v23 = pParticleData->m_pParticleData == NULL;
  v423 = v29;
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 361, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v30 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_CAMERA_DISTANCE);
  v31.pModule = (const ParticleModule *)this->m_elementTypeModule;
  m_pStateDef = this->m_pStateDef;
  v419 = v30;
  v421.pModule = v31.pModule;
  moduleGroupDefs = m_pStateDef->moduleGroupDefs;
  if ( !v31.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2455, ASSERT_TYPE_ASSERT, "(pModuleInitGeoTrail)", (const char *)&queryFormat, "pModuleInitGeoTrail") )
    __debugbreak();
  m_flags = v31.pModule[6].m_flags;
  pModuleBase = (ParticleModule *)ParticleModule::FindModule<ParticleModuleColorGraph>(moduleGroupDefs, PARTICLE_MODULE_COLOR_GRAPH, 0xFFFFFFFF);
  v396 = (ParticleModule *)ParticleModule::FindModule<ParticleModulePositionGraph>(moduleGroupDefs, PARTICLE_MODULE_POSITION_GRAPH, 0xFFFFFFFF);
  v402 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleSizeGraph>(moduleGroupDefs, PARTICLE_MODULE_SIZE_GRAPH, 0xFFFFFFFF);
  v403 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleVelocityGraph>(moduleGroupDefs, PARTICLE_MODULE_VELOCITY_GRAPH, 0xFFFFFFFF);
  v405 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleEmissiveGraph>(moduleGroupDefs, PARTICLE_MODULE_EMISSIVE_GRAPH, 0xFFFFFFFF);
  v406 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleIntensityGraph>(moduleGroupDefs, PARTICLE_MODULE_INTENSITY_GRAPH, 0xFFFFFFFF);
  v407 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleTemperatureGraph>(moduleGroupDefs, PARTICLE_MODULE_TEMPERATURE_GRAPH, 0xFFFFFFFF);
  v408 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleVectorFieldGraph>(moduleGroupDefs, PARTICLE_MODULE_VECTOR_FIELD_GRAPH, 0xFFFFFFFF);
  m_pModuleInitAtlas = this->m_pModuleInitAtlas;
  _RAX = ParticleEmitter::GetEmitterDef(_RSI);
  v35 = this->m_pModuleInitAtlas;
  __asm
  {
    vmovss  xmm12, dword ptr [rsi+174h]
    vmovss  xmm11, dword ptr [rsi+178h]
    vmovss  xmm6, dword ptr [rax+14h]
    vmovss  xmm8, dword ptr [rax+18h]
  }
  v420 = _RAX;
  v386 = (_RSI->m_flags & 2) != 0;
  __asm
  {
    vmovss  [rbp+230h+var_230], xmm6
    vmovss  [rbp+230h+var_238], xmm8
  }
  if ( !v35 || (v35->m_flags & 1) != 0 || (v368 = 1, !this->m_atlasData.isAtlas) )
    v368 = 0;
  __asm
  {
    vmovaps xmm13, xmm9
    vshufps xmm13, xmm13, xmm13, 0
  }
  Particle_RotMatrixToQuat(EmitterTransform, &quat);
  v42 = 0i64;
  v385 = 0;
  if ( m_particleCountRunning )
  {
    __asm
    {
      vmovaps xmmword ptr [rsp+330h+var_68+8], xmm7
      vmovaps xmmword ptr [rsp+330h+var_98+8], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vmovaps xmmword ptr [rsp+330h+var_D8+8], xmm14
      vmovups xmm14, xmmword ptr [rbp+230h+quat.v]
      vmovaps [rsp+330h+var_E8+8], xmm15
      vmovss  xmm15, cs:__real@bf7fbe77
    }
    v382 = 0i64;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    while ( 1 )
    {
      v47 = &v21[v42];
      rTrailData = v47;
      numPointsRunning = v47->numPointsRunning;
      v49 = v47->pParticleData;
      numPointsMax = v47->numPointsMax;
      pParticleDataa = v49;
      pointList = v47->pointList;
      if ( (_DWORD)numPointsRunning == numPointsMax )
        firstPointIndex = (v47->lastPointIndex + 1) % numPointsMax;
      else
        firstPointIndex = v47->firstPointIndex;
      if ( v49->m_particleCountRunning != (_DWORD)numPointsRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2497, ASSERT_TYPE_ASSERT, "(pTrailParticleData->GetParticleCountRunning() == numPoints)", (const char *)&queryFormat, "pTrailParticleData->GetParticleCountRunning() == numPoints") )
        __debugbreak();
      if ( !v49->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 347, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v373 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_LIFE);
      if ( !v49->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 346, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v52 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_SPAWN_TIME);
      v23 = v49->m_pParticleData == NULL;
      v391 = v52;
      if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v383 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_RANDOM_SEED);
      if ( !v49->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 343, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v375 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_COLOR);
      if ( !v49->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v53 = (float4 *)ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_SIZE);
      v23 = v49->m_pParticleData == NULL;
      sizeArray = v53;
      if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 342, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v54 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_VELOCITY);
      v23 = v49->m_pParticleData == NULL;
      v404 = v54;
      if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      positionArray = (float4 *)ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_POSITION);
      if ( !v49->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 357, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v55 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_EMISSIVE);
      v23 = v49->m_pParticleData == NULL;
      v416 = v55;
      if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 359, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v377 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_INTENSITY);
      v56 = v377;
      if ( ParticleData::HasParticleDataArray(v49, PARTICLE_DATA_TEMPERATURE) )
      {
        if ( !v49->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 360, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
          __debugbreak();
        v57 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_TEMPERATURE);
      }
      else
      {
        v57 = NULL;
      }
      v23 = v49->m_pParticleData == NULL;
      _R13 = (unsigned __int64)v57;
      point.v.m128_u64[0] = (unsigned __int64)v57;
      if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v387 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_SPAWN_QUAT);
      if ( !v49->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v59 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_ATLAS_INDEX);
      v23 = v49->m_pParticleData == NULL;
      v397 = (__int64)v59;
      if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 366, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v60 = ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_VECTOR_FIELD_SCALE);
      particleCount = v60;
      if ( !v49->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 361, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      cameraDistanceArray = (float *)ParticleData::GetParticleDataArray(v49, PARTICLE_DATA_CAMERA_DISTANCE);
      __asm
      {
        vsubss  xmm0, xmm10, dword ptr [rax+rcx*4+48h]
        vmulss  xmm1, xmm8, dword ptr [rax+rcx*4+48h]
        vmulss  xmm2, xmm0, xmm6
        vaddss  xmm3, xmm2, xmm1
      }
      if ( (_DWORD)numPointsRunning )
      {
        _R12 = v373;
        v66 = numPointsRunning;
        __asm { vdivss  xmm6, xmm10, xmm3 }
        do
        {
          _RAX = firstPointIndex;
          __asm
          {
            vsubss  xmm0, xmm12, dword ptr [rsi+rax*4]
            vmulss  xmm1, xmm0, xmm6
            vminss  xmm2, xmm1, xmm10
            vmovss  dword ptr [r12+rax*4], xmm2
          }
          if ( firstPointIndex >= rTrailData->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
            __debugbreak();
          v72 = rTrailData->numPointsMax;
          firstPointIndex = (firstPointIndex + 1) % v72;
          --v66;
        }
        while ( v66 );
        v60 = particleCount;
        _R13 = point.v.m128_u64[0];
        v56 = v377;
        v73 = rTrailData;
      }
      else
      {
        v73 = rTrailData;
        v72 = rTrailData->numPointsMax;
      }
      if ( v73->numPointsRunning == v72 )
        v74 = (v73->lastPointIndex + 1) % v72;
      else
        v74 = v73->firstPointIndex;
      if ( (unsigned int)numPointsRunning > 1 )
      {
        _R12 = v373;
        v76 = (unsigned int)(numPointsRunning - 1);
        do
        {
          if ( v74 >= v73->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
            __debugbreak();
          v77 = rTrailData;
          _RDX = (v74 + 1) % rTrailData->numPointsMax;
          v80 = (v74 + 1) % rTrailData->numPointsMax;
          __asm { vcomiss xmm10, dword ptr [r12+rdx*4] }
          if ( v78 || v23 )
          {
            if ( !rTrailData->numPointsRunning )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3672, ASSERT_TYPE_ASSERT, "(numPointsRunning > 0)", (const char *)&queryFormat, "numPointsRunning > 0") )
                __debugbreak();
              v77 = rTrailData;
            }
            if ( v74 >= v77->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
              __debugbreak();
            v73 = rTrailData;
            v81 = (v74 + 1) % rTrailData->numPointsMax;
            v82 = rTrailData->pParticleData;
            --rTrailData->numPointsRunning;
            rTrailData->firstPointIndex = v81;
            if ( !v82->m_particleCountRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 208, ASSERT_TYPE_ASSERT, "(particleCount <= GetParticleCountRunning())", (const char *)&queryFormat, "particleCount <= GetParticleCountRunning()") )
              __debugbreak();
            --v82->m_particleCountRunning;
          }
          else
          {
            v73 = rTrailData;
          }
          v74 = v80;
          --v76;
        }
        while ( v76 );
        v60 = particleCount;
        _R13 = point.v.m128_u64[0];
        v56 = v377;
      }
      if ( (_DWORD)numPointsRunning )
      {
        _RCX = v373;
        _RAX = v74;
        __asm { vcomiss xmm10, dword ptr [rcx+rax*4] }
      }
      v378 = v73->numPointsRunning;
      if ( pParticleDataa->m_particleCountRunning != v378 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2547, ASSERT_TYPE_ASSERT, "(pTrailParticleData->GetParticleCountRunning() == numPoints)", (const char *)&queryFormat, "pTrailParticleData->GetParticleCountRunning() == numPoints") )
        __debugbreak();
      if ( v386 )
        goto LABEL_177;
      _RBX = v73->lastPointIndex;
      _RDI = 2 * v382;
      m_pModuleInitRelativeVelocity = this->m_pModuleInitRelativeVelocity;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        _RAX = v401;
        __asm { vmovups xmm6, xmmword ptr [rax+rdi*8] }
      }
      else
      {
        _RAX = v401;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax+rdi*8]
          vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
          vshufps xmm3, xmm0, xmm0, 55h ; 'U'
          vshufps xmm4, xmm0, xmm0, 0
          vmulps  xmm0, xmm2, xmmword ptr [rax+20h]
          vaddps  xmm2, xmm0, xmmword ptr [rax+30h]
          vmulps  xmm0, xmm3, xmmword ptr [rax+10h]
          vaddps  xmm1, xmm0, xmm2
          vmulps  xmm0, xmm4, xmmword ptr [rax]
          vaddps  xmm6, xmm0, xmm1
        }
      }
      v100 = this->m_pStateDef;
      __asm { vmovups xmmword ptr [rbp+230h+point.v], xmm6 }
      if ( (v100->flags & 0x10000000) != 0 )
      {
        ParticleEmitter::GetSystemOwner(v370);
        __asm
        {
          vaddps  xmm6, xmm6, xmmword ptr [rax+30h]
          vmovups xmmword ptr [rbp+230h+point.v], xmm6
        }
      }
      _R15 = v391;
      v102 = _RBX;
      __asm { vmovss  dword ptr [r15+rbx*4], xmm12 }
      if ( !Particle_TrailData::AddPoint(rTrailData, &point) )
        break;
      v103 = rTrailData;
      if ( v378 < rTrailData->numPointsMax )
      {
        if ( pParticleDataa->m_particleCountRunning + 1 > pParticleDataa->m_particleCountMax )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 202, ASSERT_TYPE_ASSERT, "(GetParticleCountRunning() + particleCount <= m_particleCountMax)", (const char *)&queryFormat, "GetParticleCountRunning() + particleCount <= m_particleCountMax") )
            __debugbreak();
          v103 = rTrailData;
        }
        ++pParticleDataa->m_particleCountRunning;
        ++v378;
      }
      _RDX = v103->lastPointIndex;
      _RCX = v382;
      _RBX = 2 * _RDX;
      _R10 = positionArray;
      __asm { vmovups xmmword ptr [r10+rbx*8], xmm6 }
      *(_DWORD *)&v373[4 * _RDX] = 0;
      v108 = (__int64)v398;
      __asm { vmovss  dword ptr [r15+rdx*4], xmm12 }
      _R15 = sizeArray;
      *(_DWORD *)&v383[4 * _RDX] = *(_DWORD *)(v108 + 4 * v382);
      _RAX = (__int64)v412;
      __asm { vmovups xmm0, xmmword ptr [rax+rdi*8] }
      _RAX = v375;
      __asm { vmovdqu xmmword ptr [rax+rbx*8], xmm0 }
      _RAX = (__int64)v413;
      __asm { vmovups xmm1, xmmword ptr [rax+rdi*8] }
      _RAX = (__int64)v414;
      __asm
      {
        vmovdqu xmmword ptr [r15+rbx*8], xmm1
        vmovups xmm0, xmmword ptr [rax+rdi*8]
      }
      _RAX = (__int64)v404;
      __asm { vmovdqu xmmword ptr [rax+rbx*8], xmm0 }
      _RAX = (__int64)v415;
      __asm { vmovups xmm1, xmmword ptr [rax+rdi*8] }
      _RAX = (__int64)v416;
      __asm { vmovdqu xmmword ptr [rax+rbx*8], xmm1 }
      *(_DWORD *)&v56[4 * _RDX] = *(_DWORD *)&v417[4 * v382];
      if ( _R13 )
      {
        _RAX = v399;
        if ( v399 )
          __asm { vmovss  xmm0, dword ptr [rax+rcx*4] }
        else
          __asm { vmovaps xmm0, xmm10 }
        __asm { vmovss  dword ptr [r13+rdx*4+0], xmm0 }
      }
      __asm { vxorps  xmm0, xmm0, xmm0 }
      *(_DWORD *)&v60[4 * _RDX] = *(_DWORD *)&v418[4 * v382];
      v123 = this;
      *(_DWORD *)(v397 + 4 * _RDX) = 0;
      _R8 = cameraDistanceArray;
      _RCX = (__int64)pointList;
      cameraDistanceArray[_RDX] = *(float *)&v419[4 * v382];
      _RAX = 10 * _RDX;
      __asm { vmovups xmmword ptr [rcx+rax*8+30h], xmm0 }
      if ( (this->m_pStateDef->flags & 0x800000000i64) != 0 )
      {
        __asm { vmovss  xmm2, dword ptr [r8+rdx*4]; cameraDistance }
        *(double *)&_XMM0 = ParticleEmitter::GetScaleFactorByCameraDistance(v370, this->m_pModuleScaleByDistance, *(float *)&_XMM2, *(_DWORD *)&v383[4 * _RDX]);
        _R10 = positionArray;
        __asm
        {
          vshufps xmm0, xmm0, xmm0, 0
          vmulps  xmm0, xmm0, xmmword ptr [r15+rbx*8]
          vmovups xmmword ptr [r15+rbx*8], xmm0
        }
      }
      if ( m_flags )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r10+rbx*8]
          vsubps  xmm6, xmm0, xmmword ptr [r10+rsi*8]
          vshufps xmm1, xmm6, xmm6, 0FFh
          vucomiss xmm1, xmm7
        }
        if ( 2 * v102 )
        {
          __asm
          {
            vshufps xmm0, xmm6, xmm6, 0FFh
            vcvtss2sd xmm3, xmm0, xmm0
            vmovsd  [rsp+330h+var_2E8], xmm3
            vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
            vshufps xmm0, xmm6, xmm6, 55h ; 'U'
            vcvtss2sd xmm2, xmm1, xmm1
            vmovsd  [rsp+330h+var_2F0], xmm2
            vcvtss2sd xmm1, xmm0, xmm0
            vmovsd  qword ptr [rsp+330h+cameraFacing], xmm1
            vcvtss2sd xmm0, xmm6, xmm6
            vmovsd  [rsp+330h+pParticleState], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 301, ASSERT_TYPE_ASSERT, "(Float4ExtractW( lookAtInput ) == 0.0f)", "%s\n\t%g %g %g %g", "Float4ExtractW( lookAtInput ) == 0.0f", *(double *)&pParticleState, cameraFacing, v360, v362) )
            __debugbreak();
        }
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
          vmovups xmm1, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
          vmovups xmm4, cs:__xmm@000000003f8000000000000000000000
          vandnps xmm2, xmm0, xmm6
          vcmpltps xmm0, xmm1, xmm2
          vmovmskps eax, xmm0
        }
        if ( (_EAX & 0xF) != 0 )
        {
          __asm
          {
            vmulps  xmm0, xmm6, xmm6
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vsqrtps xmm1, xmm0
            vdivps  xmm6, xmm6, xmm1
            vmulps  xmm0, xmm6, xmm4
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vcomiss xmm0, cs:__real@3f7fbe77
          }
          if ( (_EAX & 0xF) != 0 )
          {
            __asm { vmovups xmm5, cs:__xmm@0000000000000000000000003f800000 }
          }
          else
          {
            __asm
            {
              vcomiss xmm0, xmm15
              vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
              vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
              vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
              vmulps  xmm3, xmm1, xmm0
              vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
              vmulps  xmm0, xmm2, xmm1
              vsubps  xmm4, xmm0, xmm3
              vmulps  xmm1, xmm4, xmm4
              vinsertps xmm0, xmm1, xmm1, 8
              vhaddps xmm2, xmm0, xmm0
              vhaddps xmm0, xmm2, xmm2
              vsqrtps xmm1, xmm0
              vdivps  xmm5, xmm4, xmm1
            }
          }
          __asm
          {
            vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
            vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
            vmulps  xmm3, xmm1, xmm0
            vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
            vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
            vmulps  xmm0, xmm2, xmm1
            vsubps  xmm4, xmm3, xmm0
            vmovdqa xmmword ptr [rbp+230h+var_100.v], xmm4
            vmovdqa xmmword ptr [rbp+230h+normal.v], xmm5
            vmovdqa xmmword ptr [rbp+230h+var_110.v], xmm6
          }
          Particle_AssertFloat4IsNormalized(&normal);
          Particle_AssertFloat4IsNormalized(&v427);
          Particle_AssertFloat4IsNormalized(&v428);
          __asm
          {
            vmovups xmm3, xmmword ptr [rbp+230h+var_100.v]
            vmovups xmm2, xmmword ptr [rbp+230h+var_110.v]
            vmovups xmm1, xmmword ptr [rbp+230h+normal.v]
          }
        }
        else
        {
          __asm
          {
            vmovups xmm1, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
            vmovups xmm2, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+10h; tmat44_t<vec4_t> const identityMatrix44
            vmovups xmm3, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
          }
        }
        __asm
        {
          vmovss  dword ptr [rbp+230h+normal.v], xmm1
          vextractps dword ptr [rbp+230h+normal.v+4], xmm1, 1
          vextractps dword ptr [rbp+230h+normal.v+8], xmm1, 2
          vmovss  dword ptr [rbp+230h+normal.v+0Ch], xmm2
          vextractps dword ptr [rbp+230h+var_110.v], xmm2, 1
          vextractps dword ptr [rbp+230h+var_110.v+4], xmm2, 2
          vmovss  dword ptr [rbp+230h+var_110.v+8], xmm3
          vextractps dword ptr [rbp+230h+var_110.v+0Ch], xmm3, 1
          vextractps dword ptr [rbp+230h+var_100.v], xmm3, 2
        }
        AxisToQuat((const tmat33_t<vec3_t> *)&normal, (vec4_t *)&quat);
        __asm
        {
          vmovss  xmm4, dword ptr [rbp+230h+quat.v]
          vmovss  xmm5, dword ptr [rbp+230h+quat.v+4]
          vmovss  xmm6, dword ptr [rbp+230h+quat.v+8]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vmovss  xmm2, dword ptr [rbp+230h+quat.v+0Ch]
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm0, xmm3, xmm0
          vsubss  xmm1, xmm0, xmm10
          vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm1, cs:__real@3b03126f
        }
        if ( !v78 )
        {
          __asm
          {
            vsqrtss xmm0, xmm0, xmm0
            vcvtss2sd xmm1, xmm0, xmm0
            vmovsd  [rsp+330h+var_2E8], xmm1
            vcvtss2sd xmm2, xmm2, xmm2
            vmovsd  [rsp+330h+var_2F0], xmm2
            vcvtss2sd xmm3, xmm6, xmm6
            vmovsd  qword ptr [rsp+330h+cameraFacing], xmm3
            vcvtss2sd xmm0, xmm5, xmm5
            vmovsd  [rsp+330h+pParticleState], xmm0
            vcvtss2sd xmm4, xmm4, xmm4
            vmovsd  [rsp+330h+pEmitterOwner], xmm4
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 272, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", *(double *)&pEmitterOwner, *(double *)&pParticleStatea, cameraFacinga, v361, v363) )
            __debugbreak();
        }
        _RAX = v387;
        __asm { vmovups xmm0, xmmword ptr [rbp+230h+quat.v] }
        v73 = rTrailData;
        __asm { vmovups xmmword ptr [rax+rbx*8], xmm0 }
      }
      else
      {
        _RAX = v387;
        v73 = rTrailData;
        __asm { vmovups xmmword ptr [rax+rbx*8], xmm14 }
      }
LABEL_178:
      if ( v73->numPointsRunning != v378 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2621, ASSERT_TYPE_ASSERT, "(trailDataCurr.numPointsRunning == numPoints)", (const char *)&queryFormat, "trailDataCurr.numPointsRunning == numPoints") )
        __debugbreak();
      if ( v378 )
      {
        v203 = pParticleDataa;
        v204 = 0;
        v205 = 0;
        v376 = 0;
        v364 = 0;
        v206 = rTrailData->numPointsRunning;
        m_particleCountMax = pParticleDataa->m_particleCountMax;
        if ( v206 == m_particleCountMax )
        {
          v208 = 0;
          particleOffset = 0;
          goto LABEL_184;
        }
        v237 = rTrailData->numPointsMax;
        if ( v206 == v237 )
          v208 = (rTrailData->lastPointIndex + 1) % v237;
        else
          v208 = rTrailData->firstPointIndex;
        particleOffset = v208;
        v238 = v208 + v206 - m_particleCountMax;
        if ( v238 <= 0 )
        {
LABEL_184:
          particleCounta = rTrailData->numPointsRunning;
          v209 = particleCounta;
        }
        else
        {
          v209 = m_particleCountMax - v208;
          v376 = v238;
          v205 = v238;
          particleCounta = v209;
          v204 = 1;
          v364 = 1;
          if ( (_DWORD)v209 + v238 != v206 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2649, ASSERT_TYPE_ASSERT, "(particleCount1 + particleCount2 == trailDataCurr.numPointsRunning)", (const char *)&queryFormat, "particleCount1 + particleCount2 == trailDataCurr.numPointsRunning") )
            __debugbreak();
        }
        if ( pModuleBase )
        {
          __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
          ParticleModuleColorGraph::Update(pModuleBase, pParticleDataa, v208, v209, fmt, v370, v123);
          if ( v204 )
          {
            __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
            ParticleModuleColorGraph::Update(pModuleBase, pParticleDataa, 0, v205, fmta, v370, v123);
          }
        }
        if ( v396 )
        {
          m_localClientNum = v370->m_pSystemOwner->m_localClientNum;
          point.v.m128_i32[0] = m_localClientNum;
          v211 = (ParticleData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 0x70ui64);
          if ( v211 )
          {
            v212 = (__int64)v420;
            if ( v420->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particledb.h", 2954, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
              __debugbreak();
            v213 = *(_DWORD *)(v212 + 144);
            if ( v211->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 154, ASSERT_TYPE_ASSERT, "(!m_pParticleData)", (const char *)&queryFormat, "!m_pParticleData") )
              __debugbreak();
            if ( v213 == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 156, ASSERT_TYPE_ASSERT, "(dataFlags != static_cast<ParticleDataFlags>( 0 ))", (const char *)&queryFormat, "dataFlags != static_cast<ParticleDataFlags>( 0 )") )
              __debugbreak();
            if ( (m_localClientNum < 0 || (unsigned int)m_localClientNum > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum LocalClientNum_t>(enum LocalClientNum_t)", "unsigned", (unsigned __int8)m_localClientNum, "signed", m_localClientNum) )
              __debugbreak();
            v211->m_localClientNum = m_localClientNum;
            *(_QWORD *)&v211->m_particleCountRunning = 0i64;
            v211->m_particleCountMax = 1;
            v211->m_dataFlags = v213;
            SingleParticleSize = Particle_GetSingleParticleSize(v213);
            v215 = truncate_cast<unsigned short,unsigned int>(SingleParticleSize);
            v216 = v211->m_localClientNum;
            v217 = v211->m_particleCountMax;
            v211->m_particleSize = v215;
            v211->m_pParticleData = Particle_AllocateBlock(v216, v215, v217);
            v211->m_pEmitter = v370;
            v211->m_pEmitterPadding = NULL;
            *(_QWORD *)v211->m_pad = 0i64;
            ParticleData::BuildParticleOffsetTable(v211);
            if ( v211->m_pParticleData )
            {
              v218 = ParticleData::GetParticleDataArray(v211, PARTICLE_DATA_LIFE);
              v23 = v211->m_pParticleData == NULL;
              v391 = v218;
              if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
                __debugbreak();
              v219 = ParticleData::GetParticleDataArray(v211, PARTICLE_DATA_RANDOM_SEED);
              if ( !v211->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
                __debugbreak();
              _R12 = ParticleData::GetParticleDataArray(v211, PARTICLE_DATA_POSITION);
              if ( v208 < (unsigned int)v209 + v208 )
              {
                v221 = &v383[4 * v208];
                _RSI = (__int64)&pointList[v208].offset;
                do
                {
                  *(_DWORD *)v391 = *(_DWORD *)&v221[v373 - v383];
                  v223 = v396;
                  *(_DWORD *)v219 = *(_DWORD *)v221;
                  __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
                  ParticleModulePositionGraph::Update(v223, v211, 0, 1u, fmtb, v370, this);
                  _RSI += 80i64;
                  v221 += 4;
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r12]
                    vmovdqu xmmword ptr [rsi-50h], xmm0
                  }
                  --v209;
                }
                while ( v209 );
              }
              if ( v364 && v376 )
              {
                v225 = v376;
                v226 = v383;
                _RSI = &pointList->offset;
                do
                {
                  *(_DWORD *)v391 = *(_DWORD *)&v226[v373 - v383];
                  v228 = v396;
                  *(_DWORD *)v219 = *(_DWORD *)v226;
                  __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
                  ParticleModulePositionGraph::Update(v228, v211, 0, 1u, fmtc, v370, this);
                  _RSI += 5;
                  v226 += 4;
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r12]
                    vmovdqu xmmword ptr [rsi-50h], xmm0
                  }
                  --v225;
                }
                while ( v225 );
              }
              v230 = v211->m_localClientNum;
              m_pParticleData = v211->m_pParticleData;
              *(_QWORD *)&v211->m_particleCountRunning = 0i64;
              Particle_ReleaseBlock(v230, m_pParticleData);
              v211->m_pParticleData = NULL;
              *(_QWORD *)&v211->m_particleCountRunning = 0i64;
              v211->m_particleCountMax = 0;
              v211->m_pEmitter = NULL;
              v211->m_pEmitterPadding = NULL;
              v211->m_particleSize = 0;
              v211->m_dataFlags = USE_NONE;
              ParticleData::DestroyParticleOffsetTable(v211);
              ParticleManager::ParticleSystemFree((LocalClientNum_t)point.v.m128_i32[0], v211);
              v203 = pParticleDataa;
              goto LABEL_218;
            }
            ParticleManager::ParticleSystemFree((LocalClientNum_t)m_localClientNum, v211);
          }
          v232 = this;
          VFXName = ParticleState::GetVFXName(this);
          Com_PrintWarning(21, "Could not allocate dynamic data for a geo trail's position graph in effect: %s\n", VFXName);
        }
        else
        {
LABEL_218:
          v232 = this;
        }
        v233 = particleCounta;
        v234 = particleOffset;
        if ( v402 )
        {
          __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
          ParticleModuleSizeGraph::Update(v402, v203, particleOffset, particleCounta, fmtd, v370, v232);
          v235 = v364;
          v236 = v376;
          if ( v364 )
          {
            __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
            ParticleModuleSizeGraph::Update(v402, v203, 0, v376, fmte, v370, v232);
          }
        }
        else
        {
          v236 = v376;
          v235 = v364;
        }
        if ( v403 )
        {
          __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
          ParticleModuleVelocityGraph::Update(v403, v203, particleOffset, particleCounta, fmtf, v370, v232);
          if ( v235 )
          {
            __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
            ParticleModuleVelocityGraph::Update(v403, v203, 0, v236, fmtg, v370, v232);
          }
          v240 = rTrailData->numPointsMax;
          if ( rTrailData->numPointsRunning == v240 )
            v241 = (rTrailData->lastPointIndex + 1) % v240;
          else
            v241 = rTrailData->firstPointIndex;
          _RCX = v387;
          _R12 = (__int64)v404;
          v244 = v378;
          _R14 = positionArray;
          do
          {
            _RAX = 2i64 * v241;
            __asm
            {
              vmovups xmm0, xmmword ptr [rcx+rax*8]
              vmovups xmm8, xmmword ptr [r12+rax*8]
              vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
              vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
              vshufps xmm5, xmm0, xmm0, 0FFh
              vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
              vmulps  xmm3, xmm0, xmm6
              vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
              vmulps  xmm2, xmm1, xmm7
              vsubps  xmm0, xmm3, xmm2
              vaddps  xmm4, xmm0, xmm0
              vmulps  xmm0, xmm5, xmm4
              vaddps  xmm5, xmm0, xmm8
              vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
              vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
              vmulps  xmm2, xmm0, xmm7
              vmulps  xmm3, xmm1, xmm6
              vsubps  xmm1, xmm3, xmm2
              vaddps  xmm4, xmm1, xmm5
              vmovups xmmword ptr [r12+rax*8], xmm4
              vmulps  xmm0, xmm13, xmm4
              vaddps  xmm1, xmm0, xmmword ptr [r14+rax*8]
              vmovups xmmword ptr [r14+rax*8], xmm1
            }
            if ( v241 >= rTrailData->numPointsMax )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
                __debugbreak();
              _RCX = v387;
            }
            v241 = (v241 + 1) % rTrailData->numPointsMax;
            --v244;
          }
          while ( v244 );
          __asm { vmovss  xmm8, [rbp+230h+var_238] }
          v233 = particleCounta;
          v234 = particleOffset;
          v236 = v376;
          v235 = v364;
          v203 = pParticleDataa;
        }
        v73 = rTrailData;
        v267 = this;
        if ( v405 )
        {
          __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
          ParticleModuleEmissiveGraph::Update(v405, v203, v234, v233, fmth, v370, this);
          if ( v235 )
          {
            __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
            ParticleModuleEmissiveGraph::Update(v405, v203, 0, v236, fmti, v370, this);
          }
        }
        if ( v406 )
        {
          __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
          ParticleModuleIntensityGraph::Update(v406, v203, v234, v233, fmtj, v370, this);
          if ( v235 )
          {
            __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
            ParticleModuleIntensityGraph::Update(v406, v203, 0, v236, fmtk, v370, this);
          }
        }
        if ( v407 )
        {
          __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
          ParticleModuleTemperatureGraph::Update(v407, v203, v234, v233, fmtl, v370, this);
          if ( v235 )
          {
            __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
            ParticleModuleTemperatureGraph::Update(v407, v203, 0, v236, fmtm, v370, this);
          }
        }
        if ( v408 )
        {
          __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
          ParticleModuleVectorFieldGraph::Update(v408, v203, v234, v233, fmtn, v370, this);
          if ( v235 )
          {
            __asm { vmovss  dword ptr [rsp+330h+fmt], xmm9 }
            ParticleModuleVectorFieldGraph::Update(v408, v203, 0, v236, fmto, v370, this);
          }
        }
        if ( v368 )
        {
          if ( v234 < v233 + v234 )
          {
            _R12 = &v373[-v397];
            v269 = &v383[-v397];
            v270 = v233;
            _RDI = v397 + 4i64 * v234;
            do
            {
              _RSI = *(int *)&v269[_RDI];
              __asm { vmovss  xmm6, dword ptr [r12+rdi] }
              if ( !m_pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3493, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
                __debugbreak();
              _ECX = 0;
              _EAX = v267->m_atlasData.behavior & 0x20;
              __asm { vmovd   xmm0, eax }
              v277 = m_pModuleInitAtlas;
              __asm
              {
                vmovd   xmm1, ecx
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm0, xmm11, xmm6, xmm2
                vmovss  [rsp+330h+particleOffset], xmm0
              }
              if ( !m_pModuleInitAtlas )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3477, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
                  __debugbreak();
                v277 = NULL;
              }
              if ( (v277->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3478, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas->IsEnabled())", (const char *)&queryFormat, "pModuleInitAtlas->IsEnabled()") )
                __debugbreak();
              m_curves = m_pModuleInitAtlas->m_curves;
              __asm { vmovss  xmm1, [rsp+330h+particleOffset]; time }
              if ( (m_pModuleInitAtlas->m_flags & 0x10) != 0 )
              {
                *(double *)&_XMM0 = Particle_GetCurveValue(m_curves, *(const float *)&_XMM1);
                __asm
                {
                  vmovss  xmm1, [rsp+330h+particleOffset]; time
                  vmulss  xmm7, xmm0, dword ptr [r14+2Ch]
                }
                *(double *)&_XMM0 = Particle_GetCurveValue(&m_pModuleInitAtlas->m_curves[1], *(const float *)&_XMM1);
                __asm { vmulss  xmm3, xmm0, dword ptr [r14+3Ch] }
                v267 = this;
                _RCX = fx_randomTable;
                __asm
                {
                  vmovss  xmm1, dword ptr [rcx+rsi*4+0BCh]
                  vsubss  xmm0, xmm10, xmm1
                  vmulss  xmm2, xmm0, xmm7
                  vmulss  xmm1, xmm1, xmm3
                  vaddss  xmm4, xmm2, xmm1
                }
              }
              else
              {
                *(double *)&_XMM0 = Particle_GetCurveValue(m_curves, *(const float *)&_XMM1);
                __asm { vmulss  xmm4, xmm0, dword ptr [r14+2Ch] }
              }
              if ( (v267->m_atlasData.behavior & 4) != 0 )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vmulss  xmm1, xmm0, xmm4
                }
              }
              else
              {
                __asm
                {
                  vmulss  xmm0, xmm9, xmm4
                  vaddss  xmm1, xmm0, dword ptr [rdi]
                }
              }
              __asm { vmovss  dword ptr [rdi], xmm1 }
              if ( (v267->m_atlasData.behavior & 8) != 0 )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vcomiss xmm1, xmm0
                }
                if ( is_mul_ok(v267->m_atlasData.entryCount, v267->m_atlasData.loopCount) )
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, eax
                    vmovss  dword ptr [rdi], xmm0
                  }
                }
              }
              _RDI += 4i64;
              --v270;
            }
            while ( v270 );
          }
          if ( v364 && v376 )
          {
            _R15 = v397;
            v299 = v376;
            _RCX = &v373[-v397];
            v301 = &v383[-v397];
            v384 = &v383[-v397];
            v374 = &v373[-v397];
            do
            {
              _RDI = *(int *)&v301[_R15];
              __asm { vmovss  xmm6, dword ptr [r15+rcx] }
              if ( !m_pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3493, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
                __debugbreak();
              _ECX = 0;
              _EAX = v267->m_atlasData.behavior & 0x20;
              __asm
              {
                vmovd   xmm0, eax
                vmovd   xmm1, ecx
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm0, xmm11, xmm6, xmm2
                vmovss  [rsp+330h+particleOffset], xmm0
              }
              if ( !m_pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3477, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
                __debugbreak();
              if ( (m_pModuleInitAtlas->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3478, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas->IsEnabled())", (const char *)&queryFormat, "pModuleInitAtlas->IsEnabled()") )
                __debugbreak();
              v310 = m_pModuleInitAtlas->m_curves;
              __asm { vmovss  xmm1, [rsp+330h+particleOffset]; time }
              if ( (m_pModuleInitAtlas->m_flags & 0x10) != 0 )
              {
                *(double *)&_XMM0 = Particle_GetCurveValue(v310, *(const float *)&_XMM1);
                __asm
                {
                  vmovss  xmm1, [rsp+330h+particleOffset]; time
                  vmulss  xmm7, xmm0, dword ptr [r13+2Ch]
                }
                *(double *)&_XMM0 = Particle_GetCurveValue(&m_pModuleInitAtlas->m_curves[1], *(const float *)&_XMM1);
                __asm { vmulss  xmm3, xmm0, dword ptr [r13+3Ch] }
                v267 = this;
                _RCX = fx_randomTable;
                __asm
                {
                  vmovss  xmm1, dword ptr [rcx+rdi*4+0BCh]
                  vsubss  xmm0, xmm10, xmm1
                  vmulss  xmm2, xmm0, xmm7
                  vmulss  xmm1, xmm1, xmm3
                  vaddss  xmm4, xmm2, xmm1
                }
              }
              else
              {
                *(double *)&_XMM0 = Particle_GetCurveValue(v310, *(const float *)&_XMM1);
                __asm { vmulss  xmm4, xmm0, dword ptr [r13+2Ch] }
              }
              if ( (v267->m_atlasData.behavior & 4) != 0 )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vmulss  xmm1, xmm0, xmm4
                }
              }
              else
              {
                __asm
                {
                  vmulss  xmm0, xmm4, xmm9
                  vaddss  xmm1, xmm0, dword ptr [r15]
                }
              }
              __asm { vmovss  dword ptr [r15], xmm1 }
              if ( (v267->m_atlasData.behavior & 8) != 0 )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vcomiss xmm1, xmm0
                }
                if ( is_mul_ok(v267->m_atlasData.entryCount, v267->m_atlasData.loopCount) )
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, eax
                    vmovss  dword ptr [r15], xmm0
                  }
                }
              }
              _RCX = v374;
              _R15 += 4i64;
              v301 = v384;
              --v299;
            }
            while ( v299 );
          }
          v73 = rTrailData;
        }
      }
      if ( v378 <= 1 )
      {
        if ( !v378 && v386 )
        {
          v326 = v382;
          *(_DWORD *)&v423[4 * v382] |= 1u;
          goto LABEL_306;
        }
      }
      else
      {
        ParticleState::Update_GeoTrailTangentsAndCameraDist(this, v370, v73, sizeArray, positionArray, cameraDistanceArray, pCameraa, BYTE2(v421.pModule[6].m_flags));
      }
      v326 = v382;
LABEL_306:
      v42 = v326 + 1;
      __asm { vmovss  xmm6, [rbp+230h+var_230] }
      v21 = TrailDataList;
      v78 = ++v385 < v393;
      v382 = v42;
      __asm { vxorps  xmm7, xmm7, xmm7 }
      if ( !v78 )
      {
        __asm
        {
          vmovaps xmm15, [rsp+330h+var_E8+8]
          vmovaps xmm14, xmmword ptr [rsp+330h+var_D8+8]
          vmovaps xmm10, xmmword ptr [rsp+330h+var_98+8]
          vmovaps xmm7, xmmword ptr [rsp+330h+var_68+8]
        }
        goto LABEL_308;
      }
    }
    _RAX = positionArray;
    _RSI = 2 * _RBX;
    v73 = rTrailData;
    __asm { vmovups xmmword ptr [rax+rsi*8], xmm6 }
    *(_DWORD *)&v373[4 * _RBX] = 0;
    __asm { vmovss  dword ptr [r15+rbx*4], xmm12 }
LABEL_177:
    v123 = this;
    goto LABEL_178;
  }
LABEL_308:
  _R11 = &v433;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
  }
}

/*
==============
ParticleState::Update_RunnerChildTransform
==============
*/
void ParticleState::Update_RunnerChildTransform(ParticleState *this, ParticleSystem *pChildSystem, const ParticleEmitter *pEmitterOwner, const float4 *position, const float4 *velocity, const float4 *rotationAngle, bool hasRotation, const vector4 *rEmitterTransform, ParticleUseOrientationOptions useOrientationOptions, bool useLegacyOrientationOptions)
{
  unsigned __int64 v19; 
  ParticleUseOrientationOptions v20; 
  const float4 *v30; 
  vector3 *v31; 
  const vector4 *v34; 
  vector4 M1; 
  vector4 result; 

  _R13 = rotationAngle;
  if ( !pChildSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3245, ASSERT_TYPE_ASSERT, "(pChildSystem)", (const char *)&queryFormat, "pChildSystem") )
    __debugbreak();
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3246, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  v19 = (unsigned __int8)useOrientationOptions;
  if ( useLegacyOrientationOptions && hasRotation )
  {
    v20 = useOrientationOptions;
    if ( useOrientationOptions )
      v20 = PARTICLE_USE_ORIENTATION_OPTION_ROTATION;
    v19 = (unsigned __int8)v20;
  }
  _RBX = rEmitterTransform;
  switch ( (char)v19 )
  {
    case 1:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_1000@@3Ufloat4@@B.v; jumptable 000000014280BF8C case 1
        vmovups xmm1, xmmword ptr cs:?g_0100@@3Ufloat4@@B.v; float4 const g_0100
        vmovdqa xmmword ptr [rsp+0E8h+M1.baseclass_0.x.v], xmm0
        vmovups xmm0, xmmword ptr cs:?g_0010@@3Ufloat4@@B.v; float4 const g_0010
        vmovdqa xmmword ptr [rsp+0E8h+M1.baseclass_0.y.v], xmm1
        vmovups xmm1, xmmword ptr cs:?g_0001@@3Ufloat4@@B.v; float4 const g_0001
        vmovdqa xmmword ptr [rsp+0E8h+M1.baseclass_0.z.v], xmm0
        vmovdqa xmmword ptr [rsp+0E8h+M1.w.v], xmm1
      }
      goto LABEL_15;
    case 2:
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]; jumptable 000000014280BF8C case 2
        vmovups ymmword ptr [rsp+0E8h+result.baseclass_0.x.v], ymm0
        vmovups ymm0, ymmword ptr [rbx+20h]
        vmovups ymmword ptr [rsp+0E8h+result.baseclass_0.z.v], ymm0
        vmovups ymm0, ymmword ptr [rsp+0E8h+result.baseclass_0.x.v]
        vmovups ymm1, ymmword ptr [rsp+0E8h+result.baseclass_0.z.v]
        vmovups ymmword ptr [rsp+0E8h+M1.baseclass_0.x.v], ymm0
        vmovups ymmword ptr [rsp+0E8h+M1.baseclass_0.z.v], ymm1
      }
LABEL_15:
      if ( hasRotation )
      {
        __asm { vmovups xmm0, xmmword ptr [r13+0] }
        Float4RadianToQuat((float4 *)v19, (const float4 *)hasRotation);
        Float4UnitQuatToAxis(v31, v30);
        __asm
        {
          vmovups xmmword ptr [rsp+0E8h+result.baseclass_0.x.v], xmm0
          vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
          vmovups xmmword ptr [rsp+0E8h+result.baseclass_0.y.v], xmm1
          vmovups ymm3, ymmword ptr [rsp+0E8h+result.baseclass_0.x.v]
          vmovups ymmword ptr [rsp+0E8h+result.baseclass_0.x.v], ymm3
          vmovdqa xmmword ptr [rsp+0E8h+result.w.v], xmm0
          vmovups xmmword ptr [rsp+0E8h+result.baseclass_0.z.v], xmm2
        }
        Float4x4Mul(&result, &M1, v34);
        __asm
        {
          vmovups xmmword ptr [rsp+0E8h+result.baseclass_0.z.v], xmm2
          vmovups xmmword ptr [rsp+0E8h+result.baseclass_0.x.v], xmm0
          vmovups xmmword ptr [rsp+0E8h+result.w.v], xmm3
          vmovups ymm0, ymmword ptr [rsp+0E8h+result.baseclass_0.z.v]
          vmovups xmmword ptr [rsp+0E8h+result.baseclass_0.y.v], xmm1
          vmovups ymm2, ymmword ptr [rsp+0E8h+result.baseclass_0.x.v]
          vmovups ymmword ptr [rsp+0E8h+M1.baseclass_0.x.v], ymm2
          vmovups ymmword ptr [rsp+0E8h+M1.baseclass_0.z.v], ymm0
        }
      }
      break;
    case 3:
      Particle_GenerateMatrixFromLookAt(velocity, &M1);
      break;
    case 4:
      Particle_GenerateMatrixFromLookAt(velocity, &M1);
      __asm
      {
        vmovdqa xmm2, xmmword ptr [rsp+0E8h+M1.baseclass_0.y.v]
        vxorps  xmm0, xmm0, xmm0
        vsubps  xmm1, xmm0, xmmword ptr [rsp+0E8h+M1.baseclass_0.x.v]
        vmovdqa xmmword ptr [rsp+0E8h+M1.baseclass_0.x.v], xmm2
      }
      goto LABEL_19;
    case 5:
      Particle_GenerateMatrixFromLookAt(velocity, &M1);
      __asm
      {
        vmovdqa xmm2, xmmword ptr [rsp+0E8h+M1.baseclass_0.y.v]
        vxorps  xmm0, xmm0, xmm0
        vsubps  xmm1, xmm0, xmmword ptr [rsp+0E8h+M1.baseclass_0.z.v]
        vmovdqa xmmword ptr [rsp+0E8h+M1.baseclass_0.z.v], xmm2
      }
LABEL_19:
      __asm { vmovups xmmword ptr [rsp+0E8h+M1.baseclass_0.y.v], xmm1 }
      Particle_AssertFloat4IsNormalized(&M1.x);
      Particle_AssertFloat4IsNormalized(&M1.y);
      Particle_AssertFloat4IsNormalized(&M1.z);
      break;
    case 6:
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]; jumptable 000000014280BF8C case 6
        vmovups ymmword ptr [rsp+0E8h+result.baseclass_0.x.v], ymm0
        vmovups ymm0, ymmword ptr [rbx+20h]
        vmovups ymmword ptr [rsp+0E8h+result.baseclass_0.z.v], ymm0
        vmovups ymm0, ymmword ptr [rsp+0E8h+result.baseclass_0.x.v]
        vmovups ymm1, ymmword ptr [rsp+0E8h+result.baseclass_0.z.v]
        vmovups ymmword ptr [rsp+0E8h+M1.baseclass_0.x.v], ymm0
        vmovups ymmword ptr [rsp+0E8h+M1.baseclass_0.z.v], ymm1
      }
      break;
    default:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_1000@@3Ufloat4@@B.v; jumptable 000000014280BF8C default case
        vmovups xmm1, xmmword ptr cs:?g_0100@@3Ufloat4@@B.v; float4 const g_0100
        vmovdqa xmmword ptr [rsp+0E8h+M1.baseclass_0.x.v], xmm0
        vmovups xmm0, xmmword ptr cs:?g_0010@@3Ufloat4@@B.v; float4 const g_0010
        vmovdqa xmmword ptr [rsp+0E8h+M1.baseclass_0.y.v], xmm1
        vmovups xmm1, xmmword ptr cs:?g_0001@@3Ufloat4@@B.v; float4 const g_0001
        vmovdqa xmmword ptr [rsp+0E8h+M1.baseclass_0.z.v], xmm0
        vmovdqa xmmword ptr [rsp+0E8h+M1.w.v], xmm1
      }
      break;
  }
  ParticleEmitter::GetWorldPos((ParticleEmitter *)pEmitterOwner, position, &M1.w, this, rEmitterTransform);
  ParticleSystem::SetSystemTransform(pChildSystem, &M1);
}

/*
==============
ParticleState::Update_RunnerChildrenTransforms
==============
*/
void ParticleState::Update_RunnerChildrenTransforms(ParticleState *this)
{
  _BYTE *pModule; 
  ParticleUseOrientationOptions useOrientationOptions; 
  ParticleEmitter *EmitterOwner; 
  ParticleSystemHandle *ChildSystemArray; 
  unsigned int v6; 
  float4 *RotationAngleArray; 
  unsigned int m_particleCountRunning; 
  __int64 v9; 
  unsigned int v10; 
  ParticleSystem *v11; 
  __int64 v12; 
  ParticleSystemFlags m_flags; 
  float4 *v14; 
  bool hasRotation; 
  float4 *VelocityArray; 
  float4 *PositionArray; 
  vector4 *rEmitterTransform; 

  if ( this->m_pStateDef->elementType != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3209, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_RUNNER)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_RUNNER") )
    __debugbreak();
  pModule = this->m_elementTypeModule.pModule;
  if ( pModule[99] )
  {
    useOrientationOptions = pModule[96];
    hasRotation = (this->m_pStateDef->flags & 0xF0) != 0;
    EmitterOwner = (ParticleEmitter *)ParticleState::GetEmitterOwner(this);
    rEmitterTransform = (vector4 *)ParticleEmitter::GetEmitterTransform(EmitterOwner, this);
    ChildSystemArray = Particle_GetChildSystemArray(this->m_pParticleData);
    PositionArray = Particle_GetPositionArray(this->m_pParticleData);
    VelocityArray = Particle_GetVelocityArray(this->m_pParticleData);
    v6 = 0;
    RotationAngleArray = Particle_GetRotationAngleArray(this->m_pParticleData);
    v14 = RotationAngleArray;
    m_particleCountRunning = this->m_pParticleData->m_particleCountRunning;
    if ( m_particleCountRunning )
    {
      v9 = (__int64)(int)EmitterOwner->m_pSystemOwner->m_localClientNum << 12;
      do
      {
        v10 = 0;
        if ( g_particleSystemsGeneration[v9 + (*ChildSystemArray & 0xFFF)].__all32 == *ChildSystemArray )
          v10 = *ChildSystemArray & 0xFFF;
        v11 = NULL;
        v12 = v9 + v10;
        if ( g_particleSystems[0][v12] >= (ParticleSystem *)0x1000 )
          v11 = g_particleSystems[0][v12];
        if ( v11 )
        {
          if ( v11->m_isRunning )
          {
            m_flags = v11->m_flags;
            if ( (m_flags & 0x30) == 0 && (BYTE2(m_flags) & 1) == 0 )
            {
              ParticleState::Update_RunnerChildTransform(this, v11, EmitterOwner, &PositionArray[v6], &VelocityArray[v6], &RotationAngleArray[v6], hasRotation, rEmitterTransform, useOrientationOptions, pModule[103]);
              RotationAngleArray = v14;
            }
          }
        }
        ++v6;
        ++ChildSystemArray;
      }
      while ( v6 < m_particleCountRunning );
    }
  }
}

/*
==============
ParticleState::Update_Runners
==============
*/

void __fastcall ParticleState::Update_Runners(ParticleState *this, double dt, int currentTime, const ParticleEmitter *pEmitterOwner, const FxCamera *pCamera, ParticleData *pParticleData, unsigned int numParticles, const float4 *positionArray, const float4 *sizeArray, const float4 *velocityArray, const float4 *rotationAngleArray, bool hasRotation, const vector4 *rEmitterTransform)
{
  unsigned int v18; 
  ParticleState::ElementTypeModule v19; 
  ParticleSystemHandle *v20; 
  unsigned int *v21; 
  const ParticleSystem *SystemOwner; 
  const dvar_t *v23; 
  ParticleSystem *v24; 
  __int64 m_localClientNum; 
  ParticleState *v29; 
  __int64 v30; 
  unsigned int v31; 
  ParticleState::ElementTypeModule v32; 
  ParticleManager *v33; 
  unsigned __int8 v34; 
  __int64 v35; 
  const float4 *v36; 
  const ParticleModifier *velocityMod; 
  const ParticleModifier *v38; 
  ParticleSystemHandle *v39; 
  __int64 v40; 
  unsigned __int64 v41; 
  unsigned int v42; 
  ParticleSystem *v43; 
  unsigned __int64 v44; 
  const float4 *v45; 
  __int64 v46; 
  signed __int64 v48; 
  unsigned int v49; 
  __int64 v50; 
  ParticleSystemFlags v52; 
  __int64 v54; 
  signed __int64 v55; 
  __int64 v56; 
  unsigned int v57; 
  ParticleSystem *v58; 
  __int64 v59; 
  ParticleSystemFlags m_flags; 
  ParticleModifier *scaleMod; 
  int preRollDeltaTime; 
  unsigned int *FlagsArray; 
  ParticleSystemHandle *ChildSystemArray; 
  __int64 v65; 
  void *retaddr; 
  char v69; 
  ParticleData *pParticleDataa; 
  ParticleUseOrientationOptions numParticlesa; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3114, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3115, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3116, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  v18 = numParticles;
  if ( pParticleData->m_particleCountRunning != numParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3117, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleCountRunning() == numParticles)", (const char *)&queryFormat, "pParticleData->GetParticleCountRunning() == numParticles") )
    __debugbreak();
  if ( !positionArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3118, ASSERT_TYPE_ASSERT, "(positionArray)", (const char *)&queryFormat, "positionArray") )
    __debugbreak();
  if ( !velocityArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3119, ASSERT_TYPE_ASSERT, "(velocityArray)", (const char *)&queryFormat, "velocityArray") )
    __debugbreak();
  if ( !rotationAngleArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3120, ASSERT_TYPE_ASSERT, "(rotationAngleArray)", (const char *)&queryFormat, "rotationAngleArray") )
    __debugbreak();
  if ( this->m_pStateDef->elementType != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3121, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_RUNNER)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_RUNNER") )
    __debugbreak();
  v19.pModule = (const ParticleModule *)this->m_elementTypeModule;
  ChildSystemArray = Particle_GetChildSystemArray(pParticleData);
  v20 = ChildSystemArray;
  FlagsArray = Particle_GetFlagsArray(pParticleData);
  v21 = FlagsArray;
  SystemOwner = ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
  v23 = particle_parent_updates_child;
  v24 = (ParticleSystem *)SystemOwner;
  if ( !particle_parent_updates_child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled || (v69 = 0, (ParticleSystem::GetDef(v24)->flags & 0x80000) != 0) )
    v69 = 1;
  __asm { vmulss  xmm0, xmm6, cs:__real@447a0000 }
  m_localClientNum = v24->m_localClientNum;
  __asm
  {
    vmovaps xmm6, [rsp+0D8h+var_58]
    vcvttss2si rax, xmm0
  }
  preRollDeltaTime = _RAX;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(scaleMod) = v24->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", scaleMod, 2) )
      __debugbreak();
  }
  v29 = this;
  v30 = m_localClientNum;
  v31 = 0;
  v32.pModule = (const ParticleModule *)this->m_elementTypeModule;
  v33 = &g_particleManager[v30];
  v34 = pParticleData->m_localClientNum;
  pParticleDataa = (ParticleData *)v33;
  if ( HIBYTE(v32.pModule[12].m_type) || *((_BYTE *)&v32.pModule[12].m_type + 2) )
  {
    v35 = v34;
    v65 = v34;
    if ( numParticles )
    {
      v36 = sizeArray;
      velocityMod = (const ParticleModifier *)&v19.pModule[6];
      v38 = (const ParticleModifier *)&v19.pModule[2];
      v39 = ChildSystemArray;
      v40 = numParticles;
      v41 = (unsigned __int64)v34 << 12;
      do
      {
        v42 = 0;
        if ( g_particleSystemsGeneration[v41 + (*v39 & 0xFFF)].__all32 == *v39 )
          v42 = *v39 & 0xFFF;
        v43 = NULL;
        v44 = *((_QWORD *)&g_particleSystems[0][v41] + v42);
        if ( v44 >= 0x1000 )
          v43 = (ParticleSystem *)v44;
        ParticleState::UpdateModifiers(this, v24, v43, v36, (const float4 *)((char *)v36 + (char *)velocityArray - (char *)sizeArray), v38, velocityMod, SHIBYTE(v19.pModule[12].m_type), *((ParticleUseVelocityOptions *)&v19.pModule[12].m_type + 2));
        ++v36;
        ++v39;
        velocityMod = (const ParticleModifier *)&v19.pModule[6];
        v38 = (const ParticleModifier *)&v19.pModule[2];
        --v40;
      }
      while ( v40 );
      v21 = FlagsArray;
      v20 = ChildSystemArray;
      v31 = 0;
      v35 = v65;
      v18 = numParticles;
      v33 = (ParticleManager *)pParticleDataa;
      v29 = this;
    }
  }
  else
  {
    v35 = v34;
  }
  if ( !*((_BYTE *)&v19.pModule[12].m_type + 3) )
  {
    if ( !v18 )
      return;
    v54 = v35 << 12;
    v55 = (char *)v20 - (char *)v21;
    v56 = v18;
    while ( 1 )
    {
      v57 = 0;
      v58 = NULL;
      if ( g_particleSystemsGeneration[v54 + (*(unsigned int *)((char *)v21 + v55) & 0xFFF)].__all32 == *(unsigned int *)((char *)v21 + v55) )
        v57 = *(unsigned int *)((char *)v21 + v55) & 0xFFF;
      v59 = v54 + v57;
      if ( g_particleSystems[0][v59] >= (ParticleSystem *)0x1000 )
        v58 = g_particleSystems[0][v59];
      if ( v58 )
      {
        if ( v58->m_isRunning )
        {
          m_flags = v58->m_flags;
          if ( (m_flags & 0x30) == 0 && (BYTE2(m_flags) & 1) == 0 )
          {
            if ( v69 )
              ParticleSystem::Update(v58, currentTime, pCamera, preRollDeltaTime);
            goto LABEL_76;
          }
        }
        ParticleManager::AddDeferredChildRemoval(v33, v58, 0, 0, 0);
        *(unsigned int *)((char *)v21 + v55) = 0;
      }
      *v21 |= 1u;
LABEL_76:
      v33 = (ParticleManager *)pParticleDataa;
      ++v21;
      if ( !--v56 )
        return;
    }
  }
  numParticlesa = v19.pModule[12].m_type;
  if ( v18 )
  {
    v45 = velocityArray;
    v46 = v35 << 12;
    _R15 = velocityArray;
    v48 = (char *)v20 - (char *)v21;
    do
    {
      v49 = 0;
      if ( g_particleSystemsGeneration[v46 + (*(unsigned int *)((char *)v21 + v48) & 0xFFF)].__all32 == *(unsigned int *)((char *)v21 + v48) )
        v49 = *(unsigned int *)((char *)v21 + v48) & 0xFFF;
      v50 = v46 + v49;
      _RDI = NULL;
      if ( g_particleSystems[0][v50] >= (ParticleSystem *)0x1000 )
        _RDI = g_particleSystems[0][v50];
      if ( _RDI )
      {
        if ( _RDI->m_isRunning )
        {
          v52 = _RDI->m_flags;
          if ( (v52 & 0x30) == 0 && (BYTE2(v52) & 1) == 0 )
          {
            ParticleState::Update_RunnerChildTransform(v29, _RDI, pEmitterOwner, &positionArray[v31], &v45[v31], &rotationAngleArray[v31], hasRotation, rEmitterTransform, numParticlesa, HIBYTE(v19.pModule[12].m_flags));
            __asm
            {
              vmovups xmm0, xmmword ptr [r15]
              vmovdqa xmmword ptr [rdi+80h], xmm0
            }
            if ( v69 )
              ParticleSystem::Update(_RDI, currentTime, pCamera, preRollDeltaTime);
            goto LABEL_60;
          }
        }
        ParticleManager::AddDeferredChildRemoval(v33, _RDI, 0, 0, 0);
        *(unsigned int *)((char *)v21 + v48) = 0;
      }
      *v21 |= 1u;
LABEL_60:
      v33 = (ParticleManager *)pParticleDataa;
      ++v31;
      v29 = this;
      ++_R15;
      v45 = velocityArray;
      ++v21;
    }
    while ( v31 < v18 );
  }
}

/*
==============
ParticleState::Update_VectorFields
==============
*/
void ParticleState::Update_VectorFields(ParticleState *this, const ParticleData *pParticleData)
{
  __int64 m_particleCountRunning; 
  ParticleEmitter *m_pEmitterOwner; 
  float4 *PositionArray; 
  unsigned __int8 *ParticleDataArray; 
  const float4 *v14; 
  __int64 v15; 
  float4 *m_pStateDef; 
  int v27; 
  bool v28; 
  const float4 *v30; 
  vector3 *v31; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  ParticleRelativeVelocityType m_velocityType; 
  float4 *v37; 
  unsigned __int8 *m_vectorFieldList; 
  ParticleEmitter *v55; 
  orientation_t orient; 

  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3260, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !this->m_vectorFieldList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3261, ASSERT_TYPE_ASSERT, "(m_vectorFieldList)", (const char *)&queryFormat, "m_vectorFieldList") )
    __debugbreak();
  if ( this->m_pStateDef->elementType != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3262, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD") )
    __debugbreak();
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  m_pEmitterOwner = (ParticleEmitter *)this->m_pEmitterOwner;
  v55 = m_pEmitterOwner;
  PositionArray = Particle_GetPositionArray(pParticleData);
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 351, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  _RBX = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_ROTATION_ANGLE);
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  ParticleDataArray = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_SIZE);
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 366, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  _RBP = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_VECTOR_FIELD_SCALE);
  ParticleEmitter::GetEmitterTransform(m_pEmitterOwner, this);
  if ( (_DWORD)m_particleCountRunning )
  {
    __asm { vmovaps [rsp+0F8h+var_78], xmm9 }
    v15 = 0i64;
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovaps [rsp+0F8h+var_48], xmm6
    }
    _R13 = ParticleDataArray - _RBX;
    __asm { vmovaps [rsp+0F8h+var_58], xmm7 }
    _R12 = (char *)PositionArray - (char *)_RBX;
    __asm { vmovaps [rsp+0F8h+var_68], xmm8 }
    do
    {
      if ( this->m_vectorFieldList[v15] != 0xFF )
      {
        m_pStateDef = (float4 *)this->m_pStateDef;
        __asm { vmovups xmm8, xmmword ptr [rbx+r13] }
        if ( (m_pStateDef[1].v.m128_u64[0] & 0x1000000000i64) != 0 )
          __asm { vmovss  xmm7, dword ptr [rbp+0] }
        else
          __asm { vmovaps xmm7, xmm9 }
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
          vandnps xmm2, xmm0, xmmword ptr [rbx]
          vmovups xmm1, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
          vcmpltps xmm0, xmm1, xmm2
          vmovmskps eax, xmm0
        }
        v27 = _EAX & 0xF;
        v28 = v27 != 0;
        if ( v27 )
        {
          __asm { vmovups xmm0, xmmword ptr [rbx] }
          Float4RadianToQuat(m_pStateDef, v14);
          Float4UnitQuatToAxis(v31, v30);
          m_pStateDef = (float4 *)this->m_pStateDef;
          __asm
          {
            vmovss  dword ptr [rsp+0F8h+orient.axis], xmm0
            vextractps dword ptr [rsp+0F8h+orient.axis+4], xmm0, 1
            vextractps dword ptr [rsp+0F8h+orient.axis+8], xmm0, 2
            vmovss  dword ptr [rsp+0F8h+orient.axis+0Ch], xmm1
            vextractps dword ptr [rsp+0F8h+orient.axis+10h], xmm1, 1
            vextractps dword ptr [rsp+0F8h+orient.axis+14h], xmm1, 2
            vmovss  dword ptr [rsp+0F8h+orient.axis+18h], xmm2
            vextractps dword ptr [rsp+0F8h+orient.axis+1Ch], xmm2, 1
            vextractps dword ptr [rsp+0F8h+orient.axis+20h], xmm2, 2
          }
        }
        else
        {
          __asm
          {
            vmovsd  xmm0, qword ptr cs:?orIdentity@@3Uorientation_t@@B.axis; orientation_t const orIdentity
            vmovsd  qword ptr [rsp+0F8h+orient.axis], xmm0
            vmovsd  xmm0, qword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+0Ch; orientation_t const orIdentity
          }
          orient.axis.m[0].v[2] = orIdentity.axis.m[0].v[2];
          __asm
          {
            vmovsd  qword ptr [rsp+0F8h+orient.axis+0Ch], xmm0
            vmovsd  xmm0, qword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+18h; orientation_t const orIdentity
          }
          orient.axis.m[1].v[2] = orIdentity.axis.m[1].v[2];
          __asm { vmovsd  qword ptr [rsp+0F8h+orient.axis+18h], xmm0 }
          orient.axis.m[2].v[2] = orIdentity.axis.m[2].v[2];
        }
        m_pModuleInitRelativeVelocity = this->m_pModuleInitRelativeVelocity;
        if ( m_pModuleInitRelativeVelocity && (m_pModuleInitRelativeVelocity->m_flags & 1) == 0 && ((m_velocityType = m_pModuleInitRelativeVelocity->m_velocityType, v37 = m_pStateDef, m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_COUNT) || m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN_WITH_BOLT_INFO) )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [r12+rbx]
            vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
            vshufps xmm3, xmm0, xmm0, 55h ; 'U'
            vshufps xmm4, xmm0, xmm0, 0
            vmulps  xmm0, xmm2, xmmword ptr [r9+20h]
            vaddps  xmm2, xmm0, xmmword ptr [r9+30h]
            vmulps  xmm0, xmm3, xmmword ptr [r9+10h]
            vaddps  xmm1, xmm0, xmm2
            vmulps  xmm0, xmm4, xmmword ptr [r9]
            vaddps  xmm6, xmm0, xmm1
          }
        }
        else
        {
          __asm { vmovups xmm6, xmmword ptr [r12+rbx] }
          v37 = m_pStateDef;
        }
        if ( (v37[1].v.m128_i32[0] & 0x10000000) != 0 )
        {
          ParticleEmitter::GetSystemOwner(v55);
          __asm { vaddps  xmm6, xmm6, xmmword ptr [rax+30h] }
        }
        m_vectorFieldList = this->m_vectorFieldList;
        __asm
        {
          vmovss  dword ptr [rsp+0F8h+orient.origin], xmm6
          vextractps dword ptr [rsp+0F8h+orient.origin+4], xmm6, 1
          vextractps dword ptr [rsp+0F8h+orient.origin+8], xmm6, 2
          vmovaps xmm3, xmm8; sizeScale
          vmovaps xmm2, xmm7; strengthScale
        }
        CG_VectorField_UpdateInstanceForFxWithHandle(m_vectorFieldList[v15], &orient, *(float *)&_XMM2, *(float *)&_XMM3, v28);
      }
      ++v15;
      _RBP += 4;
      _RBX += 16;
      --m_particleCountRunning;
    }
    while ( m_particleCountRunning );
    __asm
    {
      vmovaps xmm9, [rsp+0F8h+var_78]
      vmovaps xmm8, [rsp+0F8h+var_68]
      vmovaps xmm7, [rsp+0F8h+var_58]
      vmovaps xmm6, [rsp+0F8h+var_48]
    }
  }
}

