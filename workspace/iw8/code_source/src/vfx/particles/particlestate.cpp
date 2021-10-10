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
  __int64 v8; 
  ParticleState::ModuleData *v10; 
  __int64 m_localClientNum; 
  const ParticleModule *v12; 
  const ParticleModuleUpdateData *UpdateData; 
  __int64 v14; 
  ParticleEmitterDef *EmitterDef; 
  ParticleDataFlags DataFlags; 
  ParticleState::ElementTypeModule v17; 
  const char *VFXName; 
  const ParticleModuleInitAtlas *m_pModuleInitAtlas; 
  ParticleManager *ParticleManager; 
  ParticleManager *v21; 
  const ParticleLinkedAssetListDef *v22; 
  ParticleSystemHandle m_systemBeamChild; 
  const ParticleSystem *pParentSystem; 
  ParticleSystem *v25; 
  const FxMarkSpawnData *pMarkSpawnData; 
  int LocalClientTime; 
  ParticleSystemHandle v28; 
  __int64 v29; 
  ParticleSystem *v30; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  unsigned int v33; 
  float v34; 
  float v35; 
  Particle_TrailData *v36; 
  int v37; 
  bool result; 
  __int64 v39; 
  FxPhysics *v40; 
  __int64 v41; 
  char v42; 
  __int64 v43; 
  int v44; 
  unsigned int v45; 
  __int64 v46; 
  __int64 v47; 
  ParticleData *v48; 
  __int64 v49; 
  Particle_ParticleSimModelData *v50; 
  unsigned int m_maxActiveParticleSimParticles; 
  Particle_ParticleSimModelData *m_particleSimModelDataList; 
  const ParticleStateDef *m_pStateDef; 
  Particle_TailData *v54; 
  ParticleState::ElementTypeModule v55; 
  float v56; 
  __int64 v57; 
  __int64 m_type; 
  float v59; 
  float v60; 
  float v61; 
  unsigned __int8 *m_vectorFieldList; 
  unsigned __int8 *v63; 
  ParticleSystem *v64; 
  ParticleState::ElementTypeModule v65; 
  PhysicsFXShape *v66; 
  bool v67; 
  int *v68; 
  ParticleSystem *v69; 
  volatile signed __int32 *v70; 
  unsigned __int32 v71; 
  __int64 v72; 
  __int64 v73; 
  Particle_OnImpactData *v74; 
  float *v75; 
  ParticleLinkedAssetListDef *pLinkedAssetList; 
  __int64 randomSeed; 
  signed int _numSheets; 
  unsigned int _numSheetsa; 
  unsigned int _numSheetsb; 
  const char *pEmittera; 
  ParticleModule v83; 
  vector4 outTransform; 

  v8 = group;
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 258, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( !pModuleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 259, ASSERT_TYPE_ASSERT, "(pModuleDef)", (const char *)&queryFormat, "pModuleDef") )
    __debugbreak();
  if ( index >= this->m_pStateDef->moduleGroupDefs[v8].numModules )
  {
    LODWORD(pLinkedAssetList) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_pStateDef->moduleGroupDefs[group].numModules )", "index doesn't index m_pStateDef->moduleGroupDefs[group].numModules\n\t%i not in [0, %i)", pLinkedAssetList, this->m_pStateDef->moduleGroupDefs[v8].numModules) )
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
  v10 = this->m_pModuleDataList[v8];
  m_localClientNum = pEmitterOwner->m_pSystemOwner->m_localClientNum;
  v12 = ParticleModule::ConvertFromModuleDef(pModuleDef);
  v10[index].pModule = v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 268, ASSERT_TYPE_ASSERT, "(pModuleDataList[index].pModule)", (const char *)&queryFormat, "pModuleDataList[index].pModule") )
    __debugbreak();
  if ( ((__int64)v10[index].pModule & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 269, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pModuleDataList[index].pModule)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pModuleDataList[index].pModule)) % (PARTICLE_ALIGNMENT) == 0") )
    __debugbreak();
  UpdateData = ParticleModule::GetUpdateData();
  v14 = (__int64)pModuleDef->moduleType << 6;
  v10[index].pUpdateData = (const ParticleModuleUpdateData *)((char *)UpdateData + v14);
  if ( !(const ParticleModuleUpdateData *)((char *)UpdateData + v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 272, ASSERT_TYPE_ASSERT, "(pModuleDataList[index].pUpdateData)", (const char *)&queryFormat, "pModuleDataList[index].pUpdateData") )
    __debugbreak();
  EmitterDef = (ParticleEmitterDef *)ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner);
  DataFlags = ParticleEmitterDef::GetDataFlags(EmitterDef);
  v17.pModule = v10[index].pModule;
  _numSheets = DataFlags;
  VFXName = ParticleState::GetVFXName(this);
  switch ( pModuleDef->moduleType )
  {
    case PARTICLE_MODULE_INIT_BEGIN:
      m_pModuleInitAtlas = this->m_pModuleInitAtlas;
      if ( (v17.pModule->m_flags & 1) != 0 )
      {
        if ( !m_pModuleInitAtlas || (m_pModuleInitAtlas->m_flags & 1) != 0 )
          this->m_atlasData.isAtlas = 0;
      }
      else
      {
        if ( m_pModuleInitAtlas )
          Com_PrintWarning(21, "WARNING: You should only be using a single InitAtlas module for %s\n", VFXName);
        this->m_pModuleInitAtlas = (const ParticleModuleInitAtlas *)v17.pModule;
        ParticleState::InitAtlasData(this, (const ParticleModuleInitAtlas *const)v17.pModule, pEmitterOwner);
      }
      return 1;
    case PARTICLE_MODULE_INIT_ATTRIBUTES:
      if ( (v17.pModule->m_flags & 1) == 0 )
      {
        if ( this->m_pModuleInitAttributes )
          Com_PrintWarning(21, "WARNING: You should only be using a single InitAttributes module for %s\n", VFXName);
        this->m_pModuleInitAttributes = (const ParticleModuleInitAttributes *)v17.pModule;
      }
      return 1;
    case PARTICLE_MODULE_INIT_BEAM:
      if ( (v17.pModule->m_flags & 1) == 0 )
      {
        this->m_elementTypeModule = v17;
        ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)m_localClientNum);
        v21 = ParticleManager;
        v22 = (const ParticleLinkedAssetListDef *)&this->m_elementTypeModule.pModule[12];
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
              ParticleManager::KillSystem(v21, m_systemBeamChild);
            pParentSystem = ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
            v25 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
            pMarkSpawnData = ParticleSystem::GetMarkSpawnData(v25);
            LocalClientTime = CG_GetLocalClientTime((const LocalClientNum_t)pEmitterOwner->m_pSystemOwner->m_localClientNum);
            v28 = ParticleEmitter::SpawnChildEffect((ParticleEmitter *)pEmitterOwner, (LocalClientNum_t)m_localClientNum, LocalClientTime, v21, this, v22, 0, &outTransform.w, &outTransform, 0xFFFu, 0xFFFFu, NULL, NULL, pMarkSpawnData, 1, 0, pParentSystem, NULL, PARTICLE_SYSTEM_FLAG_NONE);
            this->m_systemBeamChild = v28;
            v29 = (m_localClientNum << 12) + (v28 & 0xFFF);
            if ( g_particleSystemsGeneration[v29].__all32 != v28 && v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 933, ASSERT_TYPE_ASSERT, "(g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE") )
              __debugbreak();
            v30 = g_particleSystems[0][v29];
            if ( v30 )
              ParticleState::UpdateBeamChildTransform(this, v30);
          }
        }
      }
      return 1;
    case PARTICLE_MODULE_INIT_CLOUD:
    case PARTICLE_MODULE_INIT_DECAL:
    case PARTICLE_MODULE_INIT_FLARE:
    case PARTICLE_MODULE_INIT_LIGHT_OMNI:
    case PARTICLE_MODULE_INIT_LIGHT_SPOT:
    case PARTICLE_MODULE_INIT_ORIENTED_SPRITE:
    case PARTICLE_MODULE_INIT_RUNNER:
    case PARTICLE_MODULE_INIT_VOLUMETRIC:
    case PARTICLE_MODULE_INIT_DISMEMBER:
      if ( (v17.pModule->m_flags & 1) == 0 )
        this->m_elementTypeModule = v17;
      return 1;
    case PARTICLE_MODULE_INIT_GEO_TRAIL:
      if ( (v17.pModule->m_flags & 1) != 0 )
        return 1;
      this->m_elementTypeModule = v17;
      v33 = *(_DWORD *)&v17.pModule[1].m_type;
      v34 = *(float *)&v17.pModule[1].m_flags;
      v35 = *(float *)&v17.pModule[2].m_type;
      _numSheetsa = *(_DWORD *)&v17.pModule[3].m_type;
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
      v36 = (Particle_TrailData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 96i64 * particleCountMax);
      this->m_trailDataList = v36;
      if ( !v36 )
      {
        Com_PrintError(21, "Could not allocate %d trail data structures for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
        goto LABEL_64;
      }
      v37 = 0;
      if ( !particleCountMax )
        goto LABEL_60;
      while ( Particle_TrailData::Init(&this->m_trailDataList[v37], v33, v34, v35, _numSheetsa, pEmitterOwner) )
      {
        if ( ++v37 >= particleCountMax )
          goto LABEL_60;
      }
      Com_PrintError(21, "Could not allocate %d trails for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", v33, VFXName);
      ParticleState::ReleaseTrailDataList(this);
      result = 0;
      this->m_isRunning = 0;
      return result;
    case PARTICLE_MODULE_INIT_KILL_WRAP_BOX:
      if ( (v17.pModule->m_flags & 1) == 0 )
        this->m_pModuleInitKillWrapBox = (const ParticleModuleInitKillWrapBox *)v17.pModule;
      return 1;
    case PARTICLE_MODULE_INIT_MATERIAL:
      if ( (v17.pModule->m_flags & 1) == 0 )
      {
        if ( this->m_pModuleInitMaterial )
          Com_PrintWarning(21, "WARNING: You should only be using a single InitMaterial module for %s\n", VFXName);
        this->m_pModuleInitMaterial = (const ParticleModuleInitMaterial *)v17.pModule;
      }
      return 1;
    case PARTICLE_MODULE_INIT_MODEL:
      if ( (v17.pModule->m_flags & 1) != 0 )
        return 1;
      this->m_elementTypeModule = v17;
      this->m_isRunning = 1;
      if ( !LOBYTE(v17.pModule[1].m_type) )
        return 1;
      v39 = particleCountMax;
      v40 = (FxPhysics *)ParticleManager::ParticleSystemAlloc((LocalClientNum_t)m_localClientNum, 12i64 * particleCountMax);
      this->m_physicsInstanceIDList = v40;
      if ( !v40 )
      {
        Com_PrintError(21, "Could not allocate %d physics instance IDs for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
        goto LABEL_64;
      }
      this->m_isRunning = 1;
      if ( particleCountMax )
      {
        v41 = 0i64;
        do
        {
          this->m_physicsInstanceIDList[v41++].createListIndex = -1;
          this->m_physicsInstanceIDList[v41 - 1].instanceId = -1;
          this->m_physicsInstanceIDList[v41 - 1].detailInstanceId = -1;
          --v39;
        }
        while ( v39 );
      }
      return 1;
    case PARTICLE_MODULE_INIT_OCCLUSION_QUERY:
      if ( (v17.pModule->m_flags & 1) == 0 )
      {
        if ( (this->m_pStateDef->flags & 0x80000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 482, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_STATE_DEF_FLAG_USE_OCCLUSION_QUERY ))", (const char *)&queryFormat, "HasFlag( PARTICLE_STATE_DEF_FLAG_USE_OCCLUSION_QUERY )") )
          __debugbreak();
        if ( this->m_pModuleInitOcclusionQuery )
          Com_PrintWarning(21, "WARNING: You should only be using a single OcclusionQuery module for %s\n", VFXName);
        this->m_pModuleInitOcclusionQuery = (const ParticleModuleInitOcclusionQuery *)v17.pModule;
        ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner)->m_pModuleInitOcclusionQuery = this->m_pModuleInitOcclusionQuery;
      }
      return 1;
    case PARTICLE_MODULE_INIT_PARTICLE_SIM:
      if ( (v17.pModule->m_flags & 1) != 0 )
        return 1;
      v42 = 0;
      if ( this->m_pModuleInitParticleSim )
        Com_PrintWarning(21, "WARNING: You should only be using a single ParticleSim module for %s\n", VFXName);
      v43 = 0i64;
      this->m_pModuleInitParticleSim = (const ParticleModuleInitParticleSim *)v17.pModule;
      this->m_maxActiveParticleSimParticles = 0;
      v44 = 0;
      if ( *(int *)&v17.pModule[2].m_type <= 0 )
        goto LABEL_97;
      v45 = 0;
      v46 = 0i64;
      do
      {
        v46 += 32i64;
        v47 = *(_QWORD *)(v46 + *(_QWORD *)&v17.pModule[1] - 32);
        if ( *(_DWORD *)(v47 + 68) > v45 )
          v45 = *(_DWORD *)(v47 + 68);
        this->m_maxActiveParticleSimParticles = v45;
        if ( *(_BYTE *)(v47 + 72) )
          v42 = 1;
        ++v44;
      }
      while ( v44 < *(_DWORD *)&v17.pModule[2].m_type );
      if ( !v45 )
LABEL_97:
        Com_PrintWarning(21, "WARNING: Particle sim animation assets for %s have no active particles.\n", VFXName);
      if ( !v42 )
        goto LABEL_105;
      v48 = (ParticleData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 0x70ui64);
      this->m_pParticleSimUpdateParticleData = v48;
      if ( !v48 )
        goto LABEL_104;
      if ( ParticleData::Init(v48, (LocalClientNum_t)m_localClientNum, 1u, pEmitterOwner, (const ParticleDataFlags)_numSheets) )
      {
        ParticleData::AddParticlesRunning(this->m_pParticleSimUpdateParticleData, 1u);
        if ( this->m_pParticleSimUpdateParticleData )
          goto LABEL_105;
      }
      else
      {
        ParticleManager::ParticleSystemFree((LocalClientNum_t)m_localClientNum, this->m_pParticleSimUpdateParticleData);
        this->m_pParticleSimUpdateParticleData = NULL;
      }
LABEL_104:
      Com_PrintWarning(21, "WARNING: Could not allocate particle data required to evaluate the visual state per particle for %s.  That feature will be disabled. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", VFXName);
LABEL_105:
      if ( this->m_pStateDef->elementType != 7 || !this->m_maxActiveParticleSimParticles )
        return 1;
      v49 = particleCountMax;
      v50 = (Particle_ParticleSimModelData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 16i64 * particleCountMax);
      this->m_particleSimModelDataList = v50;
      if ( !v50 )
      {
        Com_PrintError(21, "Could not allocate %d particle sim data structures for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
        result = 0;
        this->m_isRunning = 0;
        return result;
      }
      if ( particleCountMax )
      {
        do
        {
          m_maxActiveParticleSimParticles = this->m_maxActiveParticleSimParticles;
          m_particleSimModelDataList = this->m_particleSimModelDataList;
          if ( !m_maxActiveParticleSimParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3683, ASSERT_TYPE_ASSERT, "(_maxActiveParticles > 0)", (const char *)&queryFormat, "_maxActiveParticles > 0") )
            __debugbreak();
          m_particleSimModelDataList[v43++].maxActiveParticles = m_maxActiveParticleSimParticles;
          --v49;
        }
        while ( v49 );
      }
      goto LABEL_60;
    case PARTICLE_MODULE_INIT_RELATIVE_VELOCITY:
      if ( (v17.pModule->m_flags & 1) == 0 )
      {
        if ( this->m_pModuleInitRelativeVelocity )
          Com_PrintWarning(21, "WARNING: You should only be using a single InitRelativeVelocity module for %s\n", VFXName);
        this->m_pModuleInitRelativeVelocity = (const ParticleModuleInitRelativeVelocity *)v17.pModule;
      }
      return 1;
    case PARTICLE_MODULE_INIT_SOUND:
      if ( (v17.pModule->m_flags & 1) == 0 )
        this->m_pModuleInitSound = (const ParticleModuleInitSound *)v17.pModule;
      return 1;
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_FIRST:
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_CYLINDER:
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_ELLIPSOID:
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_SPHERE:
      if ( (v17.pModule->m_flags & 1) == 0 )
        this->m_spawnShapeTypeModule.pModuleSpawnShape = (const ParticleModuleInitSpawnShape *)v17.pModule;
      return 1;
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_MESH:
      if ( (v17.pModule->m_flags & 1) == 0 )
      {
        this->m_spawnShapeTypeModule.pModuleSpawnShape = (const ParticleModuleInitSpawnShape *)v17.pModule;
        if ( !*(_DWORD *)&v17.pModule[6].m_type )
        {
          Com_PrintWarning(21, "WARNING: Mesh spawner has no mesh assets. Disabling module for %s\n", VFXName);
          this->m_spawnShapeTypeModule.pModuleSpawnShape = NULL;
        }
      }
      return 1;
    case PARTICLE_MODULE_INIT_TAIL:
      if ( (v17.pModule->m_flags & 1) != 0 )
        return 1;
      m_pStateDef = this->m_pStateDef;
      this->m_elementTypeModule = v17;
      if ( (m_pStateDef->flags & 0x2000000) == 0 )
        return 1;
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
      v54 = (Particle_TailData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 0x20ui64);
      this->m_tailDataList = v54;
      if ( !v54 )
      {
        Com_PrintError(21, "Could not allocate tail data structure for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", VFXName);
        result = 0;
        this->m_isRunning = 0;
        return result;
      }
      v55.pModule = (const ParticleModule *)this->m_elementTypeModule;
      v56 = FLOAT_1_0;
      v57 = *((unsigned __int16 *)&v55.pModule[1].m_type + 1);
      m_type = (unsigned __int16)v55.pModule[1].m_type;
      if ( (unsigned int)v57 <= 1 )
      {
        v60 = FLOAT_1_0;
      }
      else
      {
        v59 = (float)v57;
        v60 = 1.0 / v59;
      }
      v54->maxParentSpeedInv = v60;
      if ( (unsigned int)m_type > 1 )
      {
        v61 = (float)m_type;
        v56 = 1.0 / v61;
      }
      this->m_tailDataList->averagePastVelocitiesInv = v56;
      this->m_tailDataList->updateTimer = 0.0;
LABEL_60:
      this->m_isRunning = 1;
      return 1;
    case PARTICLE_MODULE_INIT_VECTOR_FIELD:
      if ( (v17.pModule->m_flags & 1) != 0 )
        return 1;
      m_vectorFieldList = this->m_vectorFieldList;
      this->m_elementTypeModule = v17;
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
      v63 = (unsigned __int8 *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, particleCountMax);
      this->m_vectorFieldList = v63;
      if ( v63 )
        goto LABEL_60;
      Com_PrintError(21, "Could not allocate %d vector field handles for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
      goto LABEL_64;
    case PARTICLE_MODULE_FORCE_DRAG_GRAPH:
      if ( (v17.pModule->m_flags & 1) == 0 )
        this->m_pModuleForceDragGraph = (const ParticleModuleForceDragGraph *)v17.pModule;
      return 1;
    case PARTICLE_MODULE_GRAVITY:
      if ( (v17.pModule->m_flags & 1) == 0 )
        this->m_pModuleGravity = (const ParticleModuleGravity *)v17.pModule;
      return 1;
    case PARTICLE_MODULE_PARENT_VELOCITY_GRAPH:
      if ( (v17.pModule->m_flags & 1) == 0 )
        this->m_pModuleParentVelocityGraph = (const ParticleModuleParentVelocityGraph *)v17.pModule;
      return 1;
    case PARTICLE_MODULE_PHYSICS_LIGHT:
      if ( !particle_enable_physics_light->current.enabled )
        R_WarnOncePerFrame(R_WARN_VFX_PHYSICS_DISABLED, "(ParticleState::AddModule)");
      if ( (v17.pModule->m_flags & 1) != 0 || (this->m_pStateDef->flags & 0x400) == 0 )
        return 1;
      if ( this->m_pModulePhysicsLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 753, ASSERT_TYPE_ASSERT, "(!m_pModulePhysicsLight)", (const char *)&queryFormat, "!m_pModulePhysicsLight") )
        __debugbreak();
      v64 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
      _numSheetsb = ParticleSystem::GetSystemHandle(v64);
      this->m_physicsWorldId = 3 * m_localClientNum + 3;
      if ( *(int *)&v17.pModule[3].m_type <= 0 )
      {
        if ( this->m_pModulePhysicsLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 837, ASSERT_TYPE_ASSERT, "(!m_pModulePhysicsLight)", (const char *)&queryFormat, "!m_pModulePhysicsLight") )
          __debugbreak();
        if ( this->m_physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 838, ASSERT_TYPE_ASSERT, "(!m_physicsFXPipelineInstance)", (const char *)&queryFormat, "!m_physicsFXPipelineInstance") )
          __debugbreak();
        if ( this->m_physicsFXParticleIDList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 839, ASSERT_TYPE_ASSERT, "(!m_physicsFXParticleIDList)", (const char *)&queryFormat, "!m_physicsFXParticleIDList") )
          __debugbreak();
        return 1;
      }
      if ( !*(_QWORD *)&v17.pModule[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 765, ASSERT_TYPE_ASSERT, "(pModulePhysicsLight->m_linkedAssetList.assetList)", (const char *)&queryFormat, "pModulePhysicsLight->m_linkedAssetList.assetList") )
        __debugbreak();
      v83 = v17.pModule[2];
      this->m_physicsFXPipeline = **(PhysicsFXPipeline ***)&v83;
      this->m_physicsFXShape = *(PhysicsFXShape **)(*(_QWORD *)&v83 + 8i64);
      if ( this->m_pStateDef->elementType == 7 )
      {
        v65.pModule = (const ParticleModule *)this->m_elementTypeModule;
        if ( !v65.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 775, ASSERT_TYPE_ASSERT, "(pModuleInitModel)", (const char *)&queryFormat, "pModuleInitModel") )
          __debugbreak();
        if ( *(int *)&v65.pModule[3].m_type > 0 )
        {
          if ( !*(_QWORD *)&v65.pModule[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 781, ASSERT_TYPE_ASSERT, "(pModuleInitModel->m_linkedAssetList.assetList)", (const char *)&queryFormat, "pModuleInitModel->m_linkedAssetList.assetList") )
            __debugbreak();
          if ( *(int *)&v65.pModule[3].m_type <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 782, ASSERT_TYPE_ASSERT, "(pModuleInitModel->m_linkedAssetList.numAssets > 0)", (const char *)&queryFormat, "pModuleInitModel->m_linkedAssetList.numAssets > 0") )
            __debugbreak();
          v66 = *(PhysicsFXShape **)(**(_QWORD **)&v65.pModule[2] + 632i64);
          if ( v66 )
            this->m_physicsFXShape = v66;
        }
      }
      v67 = this->m_physicsFXPipelineInstance == NULL;
      this->m_physicsFXShapeIndex = -1;
      if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 794, ASSERT_TYPE_ASSERT, "(!m_physicsFXPipelineInstance)", (const char *)&queryFormat, "!m_physicsFXPipelineInstance") )
        __debugbreak();
      if ( this->m_physicsFXParticleIDList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 797, ASSERT_TYPE_ASSERT, "(!m_physicsFXParticleIDList)", (const char *)&queryFormat, "!m_physicsFXParticleIDList") )
        __debugbreak();
      v68 = (int *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 4i64 * particleCountMax);
      this->m_physicsFXParticleIDList = v68;
      if ( v68 )
      {
        this->m_isRunning = 1;
        this->m_numPhysicsFXParticles = 0;
        this->m_pipelinePendingDeletion = 0;
        this->m_pModulePhysicsLight = (const ParticleModulePhysicsLight *)v17.pModule;
        if ( this->m_pendingPhysicsFXPipelineCreation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 817, ASSERT_TYPE_ASSERT, "(!m_pendingPhysicsFXPipelineCreation)", (const char *)&queryFormat, "!m_pendingPhysicsFXPipelineCreation") )
          __debugbreak();
        v69 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
        pEmittera = ParticleSystem::GetDef(v69)->name;
        if ( (unsigned int)m_localClientNum >= 2 )
        {
          LODWORD(randomSeed) = 2;
          LODWORD(pLinkedAssetList) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 536, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", pLinkedAssetList, randomSeed) )
            __debugbreak();
        }
        v70 = &g_particleDeferredPhysicsFXPipelineCreateListCount[m_localClientNum];
        if ( ((unsigned __int8)v70 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_particleDeferredPhysicsFXPipelineCreateListCount[m_localClientNum]) )
          __debugbreak();
        v71 = _InterlockedExchangeAdd(v70, 1u);
        if ( v71 < 0x800 )
        {
          v72 = (int)v71 + (m_localClientNum << 11);
          g_particleDeferredPhysicsFXPipelineCreateList[0][v72].pParticleState = this;
          g_particleDeferredPhysicsFXPipelineCreateList[0][v72].pParticleEmitterOwner = pEmitterOwner;
          g_particleDeferredPhysicsFXPipelineCreateList[0][v72].particleSystemHandle = _numSheetsb;
          this->m_pendingPhysicsFXPipelineCreation = 1;
          v73 = *(unsigned int *)(**(_QWORD **)&v83 + 8i64);
          if ( particleCountMax > (unsigned int)v73 )
            Com_PrintWarning(21, "WARNING: The physics pipeline can only support %d particles; however, you are trying to spawn %d particles for effect %s. Disabling lightweight physics.\n", v73, particleCountMax, VFXName);
        }
        else
        {
          Com_PrintWarning(21, "Exceeded deferred pipeline create list size. %d > %u, %s\n", v71, 2048i64, pEmittera);
        }
        return 1;
      }
      Com_PrintError(21, "Could not allocate %d physics FX IDs for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
LABEL_64:
      result = 0;
      this->m_isRunning = 0;
      return result;
    case PARTICLE_MODULE_SCALE_BY_DISTANCE:
      if ( (v17.pModule->m_flags & 1) == 0 )
        this->m_pModuleScaleByDistance = (const ParticleModuleScaleByDistance *)v17.pModule;
      return 1;
    case PARTICLE_MODULE_TEST_IMPACT:
      if ( (v17.pModule->m_flags & 1) != 0 )
        return 1;
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
      v74 = (Particle_OnImpactData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 80i64 * particleCountMax);
      this->m_onImpactDataList = v74;
      if ( v74 )
        goto LABEL_60;
      Com_PrintError(21, "Could not allocate %d impact data sets for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
      goto LABEL_64;
    case PARTICLE_MODULE_TEST_TIME_IN_STATE:
      if ( (v17.pModule->m_flags & 1) != 0 )
        return 1;
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
      v75 = (float *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 4i64 * particleCountMax);
      this->m_timeInStateList = v75;
      if ( v75 )
        goto LABEL_60;
      Com_PrintError(21, "Could not allocate %d time in state array elements for %s. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCountMax, VFXName);
      goto LABEL_64;
    default:
      return 1;
  }
}

/*
==============
Particle_TrailData::AddPoint
==============
*/
char Particle_TrailData::AddPoint(Particle_TrailData *this, const float4 *point)
{
  __int64 lastPointIndexPrev; 
  __m128 v7; 
  char result; 
  unsigned int v12; 
  unsigned int numPointsRunning; 
  float splitAngle; 
  float v23; 
  __int128 v25; 
  __int64 v33; 
  unsigned int lastPointIndex; 
  float v35; 
  unsigned int NextIndex; 
  unsigned int v37; 
  float c; 
  float s[3]; 
  __int128 v45; 

  _RDI = this;
  _RAX = Particle_GetPositionArray(this->pParticleData);
  lastPointIndexPrev = _RDI->lastPointIndexPrev;
  _XMM1 = g_equalsEpsilon.v;
  v7 = _mm128_sub_ps(point->v, _RAX[lastPointIndexPrev].v);
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vandnps xmm2, xmm0, xmm9
    vcmpltps xmm0, xmm1, xmm2
    vmovmskps eax, xmm0
  }
  if ( ((unsigned __int8)_RAX & 0xF) == 0 )
    return 0;
  v12 = lastPointIndexPrev;
  _XMM8 = _mm128_mul_ps(v7, v7);
  __asm
  {
    vhaddps xmm0, xmm8, xmm8
    vhaddps xmm7, xmm0, xmm0
    vcmpltps xmm0, xmm7, xmmword ptr [rdi+20h]
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) == 15 )
  {
    numPointsRunning = _RDI->numPointsRunning;
    if ( numPointsRunning > 1 )
    {
      __asm
      {
        vbroadcastss xmm0, dword ptr [rdi]
        vcmpltps xmm0, xmm0, xmm7
        vmovmskps eax, xmm0
      }
      if ( (_EAX & 0xF) != 15 || (splitAngle = _RDI->splitAngle, splitAngle <= 0.0) || numPointsRunning <= 2 )
      {
        result = 0;
        _RDI->pointList[_RDI->lastPointIndex].spawnDistance = _mm_sqrt_ps(_XMM7).m128_f32[0] + _RDI->pointList[lastPointIndexPrev].spawnDistance;
        return result;
      }
      v23 = _RDI->pointList[lastPointIndexPrev].direction.v[0];
      HIDWORD(v45) = 0;
      v25 = v45;
      *(float *)&v25 = v23;
      _XMM4 = v25;
      __asm
      {
        vinsertps xmm4, xmm4, xmm1, 10h
        vinsertps xmm4, xmm4, xmm2, 20h ; ' '
        vhaddps xmm1, xmm8, xmm8
        vhaddps xmm1, xmm1, xmm1
      }
      _XMM4 = _mm128_mul_ps(_mm128_div_ps(v7, _mm_sqrt_ps(_XMM1)), _XMM4);
      __asm { vhaddps xmm6, xmm4, xmm4 }
      FastSinCos(splitAngle, s, &c);
      __asm { vhaddps xmm1, xmm6, xmm6 }
      if ( c < *(float *)&_XMM1 )
      {
        result = 0;
        _RDI->pointList[_RDI->lastPointIndex].spawnDistance = _mm_sqrt_ps(_XMM7).m128_f32[0] + _RDI->pointList[_RDI->lastPointIndexPrev].spawnDistance;
        return result;
      }
      v12 = _RDI->lastPointIndexPrev;
    }
  }
  v33 = v12;
  lastPointIndex = _RDI->lastPointIndex;
  v35 = _mm_sqrt_ps(_XMM7).m128_f32[0] + _RDI->pointList[v33].spawnDistance;
  _RDI->lastPointIndexPrev = lastPointIndex;
  NextIndex = Particle_TrailData::GetNextIndex(_RDI, lastPointIndex);
  v37 = _RDI->numPointsRunning;
  _RDI->lastPointIndex = NextIndex;
  if ( v37 < _RDI->numPointsMax )
    _RDI->numPointsRunning = v37 + 1;
  _RDI->pointList[NextIndex].spawnDistance = v35;
  if ( _RDI->splitAngle <= 0.0 || _RDI->numPointsRunning <= 2 )
  {
    _RDI->pointList[_RDI->lastPointIndex].direction.v[0] = 0.0;
    _RDI->pointList[_RDI->lastPointIndex].direction.v[1] = 0.0;
    _RDI->pointList[_RDI->lastPointIndex].direction.v[2] = 0.0;
  }
  else
  {
    __asm
    {
      vhaddps xmm0, xmm8, xmm8
      vhaddps xmm0, xmm0, xmm0
    }
    _XMM2 = _mm128_div_ps(v7, _mm_sqrt_ps(_XMM0));
    _RAX = _RDI->pointList;
    _RCX = _RDI->lastPointIndexPrev;
    _RAX[_RCX].direction.v[0] = _XMM2.m128_f32[0];
    __asm
    {
      vextractps dword ptr [rax+rcx*8+48h], xmm2, 1
      vextractps dword ptr [rax+rcx*8+4Ch], xmm2, 2
    }
  }
  return 1;
}

/*
==============
ParticleState::ApplyModifiers
==============
*/
void ParticleState::ApplyModifiers(ParticleState *this, const ParticleSystem *pSystemOwner, ParticleData *pParticleData)
{
  ParticleState *v5; 
  float4 *SizeArray; 
  float4 *VelocityArray; 
  const int *RandomSeedArray; 
  const ParticleStateDef *m_pStateDef; 
  const int *v10; 
  __int64 m_particleCountRunning; 
  const int *v12; 
  const float4 *v13; 
  __int64 v14; 
  float4 *v15; 
  const int *v16; 
  const float4 *v17; 
  __int64 v18; 
  float4 *v19; 
  const float4 *v20; 
  float4 *v21; 
  const float4 *v22; 
  float4 *v23; 
  const ParticleStateDef *v25; 
  float4 result; 

  v5 = this;
  if ( !pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2994, ASSERT_TYPE_ASSERT, "(pSystemOwner)", (const char *)&queryFormat, "pSystemOwner") )
    __debugbreak();
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2995, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( (pSystemOwner->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2996, ASSERT_TYPE_ASSERT, "(pSystemOwner->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "pSystemOwner->HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  SizeArray = Particle_GetSizeArray(pParticleData);
  VelocityArray = Particle_GetVelocityArray(pParticleData);
  RandomSeedArray = Particle_GetRandomSeedArray(pParticleData);
  m_pStateDef = v5->m_pStateDef;
  v10 = RandomSeedArray;
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  v25 = m_pStateDef;
  if ( (m_pStateDef->flags & 0x18000000000i64) != 0 )
  {
    if ( !(_DWORD)m_particleCountRunning )
      goto LABEL_20;
    v16 = RandomSeedArray;
    v17 = SizeArray;
    v18 = m_particleCountRunning;
    do
    {
      v19 = ParticleSystem::ApplyScaleModifiers((ParticleSystem *)pSystemOwner, &result, v17++, *v16, 1);
      ++SizeArray;
      ++v16;
      SizeArray[-1] = (float4)v19->v;
      --v18;
    }
    while ( v18 );
    goto LABEL_19;
  }
  if ( (pSystemOwner->m_flags & 0x100000000i64) != 0 )
  {
    ParticleModuleInitAttributes::InitParticleSize(v5->m_pModuleInitAttributes, SizeArray, RandomSeedArray, m_particleCountRunning);
    if ( (_DWORD)m_particleCountRunning )
    {
      v12 = v10;
      v13 = SizeArray;
      v14 = (unsigned int)m_particleCountRunning;
      do
      {
        v15 = ParticleSystem::ApplyScaleModifiers((ParticleSystem *)pSystemOwner, &result, v13++, *v12, 1);
        ++SizeArray;
        ++v12;
        SizeArray[-1] = (float4)v15->v;
        --v14;
      }
      while ( v14 );
LABEL_19:
      m_pStateDef = v25;
      v5 = this;
    }
  }
LABEL_20:
  if ( (m_pStateDef->flags & 0x300) != 0 )
  {
    if ( (_DWORD)m_particleCountRunning )
    {
      v20 = VelocityArray;
      do
      {
        v21 = ParticleSystem::ApplyVelocityModifiers((ParticleSystem *)pSystemOwner, &result, v20++, *v10);
        ++VelocityArray;
        ++v10;
        VelocityArray[-1] = (float4)v21->v;
        --m_particleCountRunning;
      }
      while ( m_particleCountRunning );
    }
  }
  else if ( (pSystemOwner->m_flags & 0x100000000i64) != 0 )
  {
    ParticleModuleInitAttributes::InitParticleVelocity(v5->m_pModuleInitAttributes, VelocityArray, v10, v5, m_particleCountRunning);
    if ( (_DWORD)m_particleCountRunning )
    {
      v22 = VelocityArray;
      do
      {
        v23 = ParticleSystem::ApplyVelocityModifiers((ParticleSystem *)pSystemOwner, &result, v22++, *v10);
        ++VelocityArray;
        ++v10;
        VelocityArray[-1] = (float4)v23->v;
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
  ParticleState::SpawnShapeTypeModule v4; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  __m128 v10; 
  float4 v11; 
  const vector4 *EmitterTransform; 
  float4 v13; 
  float4 lookAtInput; 
  float4 v15; 

  v4.pModuleSpawnShape = (const ParticleModuleInitSpawnShape *)this->m_spawnShapeTypeModule;
  if ( v4.pModuleSpawnShape && (v4.pModuleSpawnShape->m_flags & 1) == 0 )
  {
    ParticleModuleInitSpawnShape::GetCalculationOffset((ParticleModuleInitSpawnShape *)v4.pModuleSpawnShape, pEmitter, this, &v15);
    m_pModuleInitRelativeVelocity = this->m_pModuleInitRelativeVelocity;
    v10 = _mm128_add_ps(position->v, v15.v);
    if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
    {
      v11.v = (__m128)ParticleEmitter::GetEmitterTransform((ParticleEmitter *)pEmitter, this)->w;
      EmitterTransform = ParticleEmitter::GetEmitterTransform((ParticleEmitter *)pEmitter, this);
      v10 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v10, v10, 0), EmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v10, v10, 85), EmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v10, v10, 170), EmitterTransform->z.v), EmitterTransform->w.v)));
    }
    else
    {
      v11.v = 0i64;
    }
    if ( v4.pModuleSpawnShape->m_normalAxis )
    {
      if ( v4.pModuleSpawnShape->m_normalAxis == PARTICLE_MODULE_AXIS_Y )
      {
        lookAtInput.v = _mm128_sub_ps(v10, v11.v);
        Particle_GenerateMatrixFromLookAt(&lookAtInput, outParticleTransform);
      }
      else if ( v4.pModuleSpawnShape->m_normalAxis == PARTICLE_MODULE_AXIS_Z )
      {
        lookAtInput.v = _mm128_sub_ps(v10, v11.v);
        Particle_GenerateMatrixFromLookAt(&lookAtInput, outParticleTransform);
        v13.v = _mm128_sub_ps((__m128)0i64, outParticleTransform->z.v);
        outParticleTransform->z = outParticleTransform->y;
LABEL_14:
        outParticleTransform->y = (float4)v13.v;
        Particle_AssertFloat4IsNormalized(&outParticleTransform->x);
        Particle_AssertFloat4IsNormalized(&outParticleTransform->y);
        Particle_AssertFloat4IsNormalized(&outParticleTransform->z);
      }
      outParticleTransform->w = 0i64;
      return;
    }
    lookAtInput.v = _mm128_sub_ps(v10, v11.v);
    Particle_GenerateMatrixFromLookAt(&lookAtInput, outParticleTransform);
    v13.v = _mm128_sub_ps((__m128)0i64, outParticleTransform->x.v);
    outParticleTransform->x = outParticleTransform->y;
    goto LABEL_14;
  }
  *(tmat44_t<vec4_t> *)outParticleTransform = identityMatrix44;
}

/*
==============
ParticleState::DebugDraw
==============
*/
void ParticleState::DebugDraw(ParticleState *this, const ParticleEmitter *pEmitterOwner, const ParticleData *pParticleData)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
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
  const vector4 *EmitterTransform; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  bool v28; 
  tmat33_t<vec3_t> *p_axis; 
  __m128 v30; 
  __int64 v33; 
  float4 *VelocityArray; 
  float4 *v35; 
  const vector4 *v36; 
  __int64 v37; 
  signed __int64 v38; 
  unsigned __int8 *v39; 
  vec4_t *v40; 
  vec4_t v41; 
  const dvar_t *v44; 
  __int64 v45; 
  Particle_TrailData *TrailDataList; 
  unsigned int *p_numPointsRunning; 
  __int64 v48; 
  unsigned int v49; 
  ParticleData *v50; 
  unsigned int v51; 
  __int64 v52; 
  unsigned __int8 *v53; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  unsigned int v58; 
  __int64 v59; 
  __int64 v60; 
  unsigned __int8 v61; 
  const VectorFieldInstance *Instance; 
  const dvar_t *v63; 
  const VectorFieldInstance *v64; 
  bool v65; 
  ParticleState::ModuleData **v66; 
  unsigned __int8 *ParticleDataArray; 
  vec3_t pos; 
  vec3_t start; 
  vec4_t color; 
  tmat33_t<vec3_t> in2; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  __int128 v77; 
  __int128 v78; 
  __int128 v79; 

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
  v66 = v8->m_pModuleDataList;
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
          m_pModuleDataList = v66;
        }
      }
    }
    ++m_pModuleDataList;
    v9 += 16i64;
    v66 = m_pModuleDataList;
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
          EmitterTransform = ParticleEmitter::GetEmitterTransform(v7, v8);
          _XMM1 = EmitterTransform->x.v;
          LODWORD(in2.m[0].v[0]) = EmitterTransform->x;
          __asm
          {
            vextractps dword ptr [rbp+80h+in2+4], xmm1, 1
            vextractps dword ptr [rbp+80h+in2+8], xmm1, 2
          }
          _XMM1.v = (__m128)EmitterTransform->y;
          LODWORD(in2.m[1].v[0]) = _XMM1.v.m128_i32[0];
          __asm
          {
            vextractps dword ptr [rbp+80h+in2+10h], xmm1, 1
            vextractps dword ptr [rbp+80h+in2+14h], xmm1, 2
          }
          _XMM1.v = (__m128)EmitterTransform->z;
          LODWORD(in2.m[2].v[0]) = _XMM1.v.m128_i32[0];
          __asm
          {
            vextractps dword ptr [rbp+80h+in2+1Ch], xmm1, 1
            vextractps dword ptr [rbp+80h+in2+20h], xmm1, 2
          }
          if ( (_DWORD)m_particleCountRunning )
          {
            v25 = *(_QWORD *)color.v;
            v26 = 0i64;
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
                quat = *(vec4_t *)&ParticleDataArray[v26];
                QuatToAxis(&quat, &axis);
                v28 = ParticleState::UseBoltInfo(v8);
                p_axis = &axis;
                if ( v28 )
                {
                  v30 = *(__m128 *)(v26 + v25);
                  _XMM1 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v30, v30, 0), EmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v30, v30, 85), EmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v30, v30, 170), EmitterTransform->z.v), EmitterTransform->w.v)));
                  pos.v[0] = _XMM1.m128_f32[0];
                  __asm
                  {
                    vextractps dword ptr [rsp+180h+pos+4], xmm1, 1
                    vextractps dword ptr [rsp+180h+pos+8], xmm1, 2
                  }
                  MatrixMultiply(&axis, &in2, &out);
                  p_axis = &out;
                }
                else
                {
                  _XMM1 = *(_OWORD *)(v26 + v25);
                  LODWORD(pos.v[0]) = _XMM1;
                  __asm
                  {
                    vextractps dword ptr [rsp+180h+pos+4], xmm1, 1
                    vextractps dword ptr [rsp+180h+pos+8], xmm1, 2
                  }
                }
                Particle_DebugAxis(p_axis, &pos, &colorMagenta, &colorYellow, &colorCyan, particle_axes_length->current.value, 1, 0);
              }
              v27 += 4i64;
              v26 += 16i64;
              --m_particleCountRunning;
            }
            while ( m_particleCountRunning );
            v7 = *(ParticleEmitter **)start.v;
          }
        }
      }
    }
  }
  v79 = v3;
  if ( particle_debug_draw_velocity->current.enabled )
  {
    v33 = v6->m_particleCountRunning;
    VelocityArray = Particle_GetVelocityArray(v6);
    v35 = Particle_GetPositionArray(v6);
    v36 = ParticleEmitter::GetEmitterTransform(v7, v8);
    if ( (_DWORD)v33 )
    {
      v78 = v4;
      v37 = 0i64;
      v77 = v5;
      v38 = (char *)VelocityArray - (char *)v35;
      do
      {
        if ( v8->m_pStateDef->elementType == 9 )
        {
          if ( !v6->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
            __debugbreak();
          v39 = ParticleData::GetParticleDataArray(v6, PARTICLE_DATA_CHILD_SYSTEM);
          v40 = &colorLtBlue;
          if ( *(_DWORD *)&v39[v37] )
            v40 = &colorMdBlue;
          v41 = *v40;
        }
        else
        {
          v41 = colorLtBlue;
        }
        _XMM6 = _mm128_add_ps(v35->v, *(__m128 *)((char *)&v35->v + v38));
        _XMM7 = v35->v;
        color = v41;
        if ( ParticleState::UseBoltInfo(v8) )
        {
          _XMM7 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 0), v36->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 85), v36->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 170), v36->z.v), v36->w.v)));
          _XMM6 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 0), v36->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 85), v36->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 170), v36->z.v), v36->w.v)));
        }
        start.v[0] = _XMM7.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rsp+180h+start+4], xmm7, 1
          vextractps dword ptr [rsp+180h+start+8], xmm7, 2
        }
        pos.v[0] = _XMM6.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rsp+180h+pos+4], xmm6, 1
          vextractps dword ptr [rsp+180h+pos+8], xmm6, 2
        }
        Particle_DebugVector(&start, &pos, 3.0, &color, 1, 0);
        v37 += 4i64;
        ++v35;
        --v33;
      }
      while ( v33 );
    }
  }
  if ( v8->m_pStateDef->elementType == 4 )
  {
    v44 = particle_debug_draw_geo_trails;
    if ( !particle_debug_draw_geo_trails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    if ( v44->current.enabled )
    {
      v45 = v6->m_particleCountRunning;
      v65 = (v8->m_pStateDef->flags & 8) != 0;
      TrailDataList = ParticleState::GetTrailDataList(v8);
      if ( (_DWORD)v45 )
      {
        p_numPointsRunning = &TrailDataList->numPointsRunning;
        *(_QWORD *)color.v = v45;
        do
        {
          v48 = *p_numPointsRunning;
          v49 = *(p_numPointsRunning - 5);
          v50 = *(ParticleData **)(p_numPointsRunning - 15);
          if ( (_DWORD)v48 == v49 )
            v51 = (*(p_numPointsRunning - 2) + 1) % v49;
          else
            v51 = *(p_numPointsRunning - 3);
          if ( v50->m_particleCountRunning != (_DWORD)v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2373, ASSERT_TYPE_ASSERT, "(pTrailParticleData->GetParticleCountRunning() == numPoints)", (const char *)&queryFormat, "pTrailParticleData->GetParticleCountRunning() == numPoints") )
            __debugbreak();
          v52 = *(_QWORD *)(p_numPointsRunning - 17);
          if ( !v50->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
            __debugbreak();
          v53 = ParticleData::GetParticleDataArray(v50, PARTICLE_DATA_POSITION);
          if ( (_DWORD)v48 )
          {
            do
            {
              if ( v65 )
                _XMM3 = _mm128_add_ps(*(__m128 *)(v52 + 80i64 * v51 + 48), *(__m128 *)&v53[16 * v51]);
              else
                _XMM3 = *(__m128 *)&v53[16 * v51];
              start.v[0] = _XMM3.m128_f32[0];
              _XMM2 = _mm128_add_ps(_mm128_mul_ps((__m128)_xmm, *(__m128 *)(v52 + 80i64 * v51 + 32)), _XMM3);
              pos.v[0] = _XMM2.m128_f32[0];
              __asm
              {
                vextractps dword ptr [rsp+180h+pos+4], xmm2, 1
                vextractps dword ptr [rsp+180h+pos+8], xmm2, 2
                vextractps dword ptr [rsp+180h+start+4], xmm3, 1
                vextractps dword ptr [rsp+180h+start+8], xmm3, 2
              }
              Particle_DebugLine(&start, &pos, &colorFacebookBlue, 1, 0);
              if ( v51 >= *(p_numPointsRunning - 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
                __debugbreak();
              v51 = (v51 + 1) % *(p_numPointsRunning - 5);
              --v48;
            }
            while ( v48 );
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
  if ( v8->m_pStateDef->elementType == 11 )
  {
    v56 = particle_debug_draw_vectorfields;
    if ( !particle_debug_draw_vectorfields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v56);
    if ( v56->current.enabled )
      goto LABEL_93;
    v57 = DVARINT_cg_vectorFieldsDraw;
    if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    if ( v57->current.integer )
    {
LABEL_93:
      v58 = v6->m_particleCountRunning;
      if ( v58 )
      {
        v59 = 0i64;
        v60 = v58;
        do
        {
          v61 = v8->m_vectorFieldList[v59];
          if ( v61 != 0xFF )
          {
            Instance = CG_VectorField_GetInstance(v61);
            v63 = DVARINT_cg_vectorFieldsDraw;
            v64 = Instance;
            if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v63);
            CG_VectorField_DrawField(v64, v63->current.integer != 1);
          }
          ++v59;
          --v60;
        }
        while ( v60 );
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
  ParticleSystem *v17; 
  const ParticleSystemDef *v18; 
  ParticleSystem *v19; 
  const ParticleSystemDef *v20; 
  ParticleSystem *v24; 
  const ParticleSystemDef *v25; 
  __m128 v; 
  __m128 v27; 
  vec4_t v28; 
  const ParticleSystemDef *v33; 
  float v34; 
  float v35; 

  if ( (position->v.m128_i32[0] & 0x7F800000) == 2139095040 || (position->v.m128_i32[1] & 0x7F800000) == 2139095040 || (position->v.m128_i32[2] & 0x7F800000) == 2139095040 )
  {
    if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
      __debugbreak();
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)this->m_pEmitterOwner);
    Def = ParticleSystem::GetDef(SystemOwner);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3757, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[0] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[1] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[2] ) ) )", "fx %s", Def->name) )
      __debugbreak();
  }
  if ( (position->v.m128_i32[0] & 0x7F800000) == 2139095040 || (position->v.m128_i32[1] & 0x7F800000) == 2139095040 || (position->v.m128_i32[2] & 0x7F800000) == 2139095040 )
  {
    if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
      __debugbreak();
    v17 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)this->m_pEmitterOwner);
    v18 = ParticleSystem::GetDef(v17);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3758, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[0] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[1] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[2] ) ) )", "fx %s", v18->name) )
      __debugbreak();
  }
  if ( (position->v.m128_i32[0] & 0x7F800000) == 2139095040 || (position->v.m128_i32[1] & 0x7F800000) == 2139095040 || (position->v.m128_i32[2] & 0x7F800000) == 2139095040 )
  {
    if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
      __debugbreak();
    v19 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)this->m_pEmitterOwner);
    v20 = ParticleSystem::GetDef(v19);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3759, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[0] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[1] ) && !IS_NAN( ( *reinterpret_cast<const vec3_t*>( &position ) )[2] ) ) )", "fx %s", v20->name) )
      __debugbreak();
  }
  _XMM0 = rotationAngleQuat->v;
  __asm
  {
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX )
  {
    if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
      __debugbreak();
    v24 = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)this->m_pEmitterOwner);
    v25 = ParticleSystem::GetDef(v24);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3760, ASSERT_TYPE_ASSERT, "( !Float4IsNaN( rotationAngleQuat ) )", "fx %s", v25->name) )
      __debugbreak();
  }
  v = normal->v;
  impactData->pos = (float4)position->v;
  v27 = velocity->v;
  impactData->normal.v = v;
  v28 = (vec4_t)rotationAngleQuat->v;
  impactData->incomingVelocity.v = v27;
  impactData->particleQuat = v28;
  _XMM1 = _mm128_mul_ps(impactData->incomingVelocity.v, impactData->incomingVelocity.v);
  impactData->surfaceFlags = surfaceFlags;
  __asm { vinsertps xmm2, xmm1, xmm1, 8 }
  impactData->entNum = entNum;
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  impactData->hitType = hitType;
  impactData->partName = partName;
  if ( *(float *)&_XMM1 <= 0.00000011920929 )
  {
    if ( !pEmitterOwner->m_pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
      __debugbreak();
    v33 = ParticleSystem::GetDef((ParticleSystem *)pEmitterOwner->m_pSystemOwner);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3771, ASSERT_TYPE_ASSERT, "( ( Float4ExtractX( Float3LengthSq( impactData->incomingVelocity ) ) > 1.192092896e-07F ) )", "( pEmitterOwner->GetSystemOwner()->GetVFXName() ) = %s", v33->name) )
      __debugbreak();
  }
  v34 = impactData->particleQuat.v[0];
  v35 = impactData->particleQuat.v[3];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(v34 * v34) + (float)(impactData->particleQuat.v[1] * impactData->particleQuat.v[1])) + (float)(impactData->particleQuat.v[2] * impactData->particleQuat.v[2])) + (float)(v35 * v35)) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3772, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( impactData->particleQuat ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( impactData->particleQuat )", v34, impactData->particleQuat.v[1], impactData->particleQuat.v[2], v35) )
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

bool __fastcall Particle_TrailData::Init(Particle_TrailData *this, unsigned int _numPointsMax, double _splitDistance, float _splitAngle, unsigned int _numSheets, const ParticleEmitter *pEmitter)
{
  __int64 v7; 
  __m128 v8; 
  LocalClientNum_t m_localClientNum; 
  Particle_TrailPoint *v10; 
  bool result; 
  ParticleData *v12; 
  ParticleEmitterDef *EmitterDef; 
  ParticleDataFlags DataFlags; 

  v7 = _numPointsMax;
  if ( !_numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3518, ASSERT_TYPE_ASSERT, "(_numPointsMax > 0)", (const char *)&queryFormat, "_numPointsMax > 0") )
    __debugbreak();
  if ( !_numSheets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3519, ASSERT_TYPE_ASSERT, "(_numSheets > 0)", (const char *)&queryFormat, "_numSheets > 0") )
    __debugbreak();
  if ( !pEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3520, ASSERT_TYPE_ASSERT, "(pEmitter)", (const char *)&queryFormat, "pEmitter") )
    __debugbreak();
  if ( this->pointList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3521, ASSERT_TYPE_ASSERT, "(!pointList)", (const char *)&queryFormat, "!pointList") )
    __debugbreak();
  if ( this->pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3522, ASSERT_TYPE_ASSERT, "(!pParticleData)", (const char *)&queryFormat, "!pParticleData") )
    __debugbreak();
  v8 = *(__m128 *)&_splitDistance;
  v8.m128_f32[0] = *(float *)&_splitDistance * *(float *)&_splitDistance;
  m_localClientNum = pEmitter->m_pSystemOwner->m_localClientNum;
  this->splitDistance = *(float *)&_splitDistance;
  this->splitAngle = _splitAngle;
  this->splitDistanceSq.v = _mm_shuffle_ps(v8, v8, 0);
  this->numPointsMax = v7;
  this->numSheets = _numSheets;
  v10 = (Particle_TrailPoint *)ParticleManager::ParticleSystemAllocAndClear(m_localClientNum, 80 * v7);
  this->pointList = v10;
  if ( v10 )
  {
    v12 = (ParticleData *)ParticleManager::ParticleSystemAllocAndClear(m_localClientNum, 0x70ui64);
    this->pParticleData = v12;
    if ( v12 )
    {
      EmitterDef = (ParticleEmitterDef *)ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitter);
      DataFlags = ParticleEmitterDef::GetDataFlags(EmitterDef);
      return ParticleData::Init(this->pParticleData, m_localClientNum, this->numPointsMax, pEmitter, DataFlags);
    }
    else
    {
      ParticleManager::ParticleSystemFree(m_localClientNum, this->pointList);
      result = 0;
      this->pointList = NULL;
    }
  }
  else
  {
    Com_PrintError(21, "Could not allocate %d trail points. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", this->numPointsMax);
    return 0;
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
  ntl::fixed_map<unsigned int,Particle_OnImpactCBData,2048,ntl::less<unsigned int,unsigned int> > *v3; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *mp_node; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *mp_right; 
  unsigned int v8; 
  bool v9; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *i; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *v11; 
  unsigned int v12; 
  __int64 v13; 
  ParticleSystem *v14; 
  __int64 v15; 
  const ParticleSystemDef *Def; 
  ParticleEmitter *EmitterByIndex; 
  ParticleState *ParticleStateNonConst; 
  ParticleData *ParticleDataNonConst; 
  unsigned int particleHandle; 
  ParticleData *v21; 
  unsigned int m_particleCountRunning; 
  unsigned __int8 *ParticleDataArray; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v26; 
  Particle_OnImpactData *m_onImpactDataList; 
  float4 *RotationAngleArray; 
  float v33; 
  __m128 v; 
  float v36; 
  __m128 v40; 
  __m128 v43; 
  const float4 *v44; 
  int hintInsertLessElement; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> >,ntl::pair<unsigned int,Particle_OnImpactCBData> *,ntl::pair<unsigned int,Particle_OnImpactCBData> &> result; 
  float4 v47; 
  float4 v48; 
  float4 v49; 
  ntl::pair<unsigned int,Particle_OnImpactCBData> r_element; 

  if ( !pPhysicsCBData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 928, ASSERT_TYPE_ASSERT, "(pPhysicsCBData)", (const char *)&queryFormat, "pPhysicsCBData") )
    __debugbreak();
  LocalClientForWorld = Physics_GetLocalClientForWorld(pPhysicsCBData->worldId);
  v3 = &g_physicsBodyToParticleIDMap[LocalClientForWorld];
  mp_parent = v3->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &v3->m_endNodeBase;
  mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)&v3->m_endNodeBase;
  mp_right = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)mp_parent;
  if ( mp_parent )
  {
    do
    {
      if ( mp_right->m_element.first < pPhysicsCBData->bodyIds[0] )
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
  if ( mp_node == p_m_endNodeBase || pPhysicsCBData->bodyIds[0] < mp_node->m_element.first )
  {
    v8 = pPhysicsCBData->bodyIds[0];
    v49.v = (__m128)0i64;
    v9 = 1;
    r_element.first = v8;
    r_element.second = 0ui64;
    while ( mp_parent )
    {
      p_m_endNodeBase = mp_parent;
      v9 = v8 < mp_parent[1].m_color;
      if ( v8 >= mp_parent[1].m_color )
        mp_parent = mp_parent->mp_right;
      else
        mp_parent = mp_parent->mp_left;
    }
    mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)p_m_endNodeBase;
    if ( v9 )
    {
      if ( p_m_endNodeBase == v3->m_endNodeBase.mp_left )
      {
        mp_node = ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Particle_OnImpactCBData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData>>,2048,8>,ntl::return_pair_first<unsigned int,Particle_OnImpactCBData>,ntl::less<unsigned int,unsigned int>>::insert_node(v3, &result, p_m_endNodeBase, &r_element, 1, 0)->mp_node;
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
              v11 = mp_node;
              mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)mp_node->mp_parent;
            }
            while ( v11 == mp_node->mp_left );
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
    if ( mp_node->m_element.first >= v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\map\\map.h", 87, ASSERT_TYPE_ASSERT, "( retVal.second )", (const char *)&queryFormat, "retVal.second") )
        __debugbreak();
    }
    else
    {
      mp_node = ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Particle_OnImpactCBData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData>>,2048,8>,ntl::return_pair_first<unsigned int,Particle_OnImpactCBData>,ntl::less<unsigned int,unsigned int>>::insert_node(v3, &result, p_m_endNodeBase, &r_element, 0, 0)->mp_node;
    }
    goto LABEL_38;
  }
LABEL_41:
  v12 = 0;
  v13 = LocalClientForWorld << 12;
  if ( g_particleSystemsGeneration[v13 + (mp_node->m_element.second.particleSystemHandle & 0xFFF)].__all32 == mp_node->m_element.second.particleSystemHandle )
    v12 = mp_node->m_element.second.particleSystemHandle & 0xFFF;
  v14 = NULL;
  v15 = v13 + v12;
  if ( g_particleSystems[0][v15] >= (ParticleSystem *)0x1000 )
    v14 = g_particleSystems[0][v15];
  if ( v14 )
  {
    if ( (v14->m_flags & 0x10) != 0 )
    {
      Def = ParticleSystem::GetDef(v14);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 947, ASSERT_TYPE_ASSERT, "(!pSystem->IsDead())", "%s\n\tVFX ASSERT for effect: %s\n", "!pSystem->IsDead()", Def->name) )
        __debugbreak();
    }
    EmitterByIndex = (ParticleEmitter *)ParticleSystem::GetEmitterByIndex(v14, mp_node->m_element.second.particleEmitterIndex);
    if ( !EmitterByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 950, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
      __debugbreak();
    if ( (EmitterByIndex->m_flags & 0x40) == 0 )
    {
      ParticleStateNonConst = ParticleEmitter::GetParticleStateNonConst(EmitterByIndex, mp_node->m_element.second.particleStateIndex);
      if ( !ParticleStateNonConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 957, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
        __debugbreak();
      ParticleDataNonConst = ParticleEmitter::GetParticleDataNonConst(EmitterByIndex, mp_node->m_element.second.particleStateIndex);
      particleHandle = mp_node->m_element.second.particleHandle;
      v21 = ParticleDataNonConst;
      result.mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)Particle_GetFlagsArray(ParticleDataNonConst);
      v47.v.m128_u64[0] = (unsigned __int64)Particle_GetVelocityArray(v21);
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 375, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
        __debugbreak();
      if ( !v21->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 376, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      m_particleCountRunning = v21->m_particleCountRunning;
      if ( !v21->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      ParticleDataArray = ParticleData::GetParticleDataArray(v21, PARTICLE_DATA_HANDLE);
      if ( !ParticleDataArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 380, ASSERT_TYPE_ASSERT, "(handleArray)", (const char *)&queryFormat, "handleArray") )
        __debugbreak();
      v24 = 0;
      if ( m_particleCountRunning )
      {
        while ( particleHandle != *(_DWORD *)ParticleDataArray )
        {
          ++v24;
          ParticleDataArray += 4;
          if ( v24 >= m_particleCountRunning )
            return;
        }
        if ( v24 != -1 )
        {
          v25 = v24;
          v26 = v24;
          _XMM1 = _mm128_mul_ps(*(__m128 *)(v47.v.m128_u64[0] + 16i64 * v24), *(__m128 *)(v47.v.m128_u64[0] + 16i64 * v24));
          __asm
          {
            vinsertps xmm2, xmm1, xmm1, 8
            vhaddps xmm0, xmm2, xmm2
            vhaddps xmm1, xmm0, xmm0
          }
          if ( *(float *)&_XMM1 > 0.00000011920929 )
          {
            if ( !ParticleStateNonConst->m_onImpactDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 455, ASSERT_TYPE_ASSERT, "(m_onImpactDataList)", (const char *)&queryFormat, "m_onImpactDataList") )
              __debugbreak();
            m_onImpactDataList = ParticleStateNonConst->m_onImpactDataList;
            if ( !m_onImpactDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 975, ASSERT_TYPE_ASSERT, "(pImpactDataList)", (const char *)&queryFormat, "pImpactDataList") )
              __debugbreak();
            RotationAngleArray = Particle_GetRotationAngleArray(v21);
            v33 = pPhysicsCBData->position.v[0];
            v49.v.m128_i32[3] = 0;
            v = v49.v;
            v.m128_f32[0] = v33;
            _XMM7 = v;
            v36 = pPhysicsCBData->normal.v[0];
            __asm
            {
              vinsertps xmm7, xmm7, dword ptr [r12+18h], 10h
              vinsertps xmm7, xmm7, dword ptr [r12+1Ch], 20h ; ' '
            }
            v49.v = _XMM7;
            v49.v.m128_i32[3] = 0;
            v40 = v49.v;
            v40.m128_f32[0] = v36;
            _XMM6 = v40;
            __asm
            {
              vinsertps xmm6, xmm6, dword ptr [r12+24h], 10h
              vinsertps xmm6, xmm6, dword ptr [r12+28h], 20h ; ' '
            }
            v43 = RotationAngleArray[v25].v;
            v49.v = _XMM6;
            Float4RadianToQuat(NULL, v44);
            v49.v = v43;
            hintInsertLessElement = pPhysicsCBData->surfaceFlagData[0];
            v47.v = *(__m128 *)(v47.v.m128_u64[0] + 4 * v25);
            v48.v = _XMM6;
            *(__m128 *)&r_element.first = _XMM7;
            ParticleState::FillImpactData(ParticleStateNonConst, &m_onImpactDataList[v26], (float4 *)&r_element, &v48, &v47, hintInsertLessElement, 0x7FFu, TRACE_HITTYPE_BEGIN, (scr_string_t)0, &v49, EmitterByIndex);
            *((_DWORD *)&result.mp_node->m_color + v26) |= 4u;
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
  return r2->cameraDistance < r1->cameraDistance;
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

void __fastcall ParticleState::UpdateAtlasIndex(ParticleState *this, const ParticleModuleInitAtlas *const pModuleInitAtlas, float dt, double emitterLifeNormalized, unsigned int randomSeed, float particleLife, float *outAtlasIndex)
{
  ParticleCurveDef *m_curves; 
  double CurveValue; 
  float v16; 
  double v17; 
  float v18; 
  double v19; 
  float v20; 
  int entryCount; 
  float particleLifea; 

  _XMM6 = *(_OWORD *)&emitterLifeNormalized;
  if ( !pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3493, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
    __debugbreak();
  _XMM0 = this->m_atlasData.behavior & 0x20;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm1, xmm2
  }
  particleLifea = *(float *)&_XMM0;
  if ( !pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3477, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
    __debugbreak();
  if ( (pModuleInitAtlas->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3478, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas->IsEnabled())", (const char *)&queryFormat, "pModuleInitAtlas->IsEnabled()") )
    __debugbreak();
  m_curves = pModuleInitAtlas->m_curves;
  if ( (pModuleInitAtlas->m_flags & 0x10) != 0 )
  {
    CurveValue = Particle_GetCurveValue(m_curves, *(const float *)&_XMM0);
    v16 = *(float *)&CurveValue * pModuleInitAtlas->m_curves[0].scale;
    v17 = Particle_GetCurveValue(&pModuleInitAtlas->m_curves[1], particleLifea);
    v18 = (float)((float)(1.0 - fx_randomTable[randomSeed + 47]) * v16) + (float)((float)(*(float *)&v17 * pModuleInitAtlas->m_curves[1].scale) * fx_randomTable[randomSeed + 47]);
  }
  else
  {
    v19 = Particle_GetCurveValue(m_curves, *(const float *)&_XMM0);
    v18 = *(float *)&v19 * pModuleInitAtlas->m_curves[0].scale;
  }
  if ( (this->m_atlasData.behavior & 4) != 0 )
    v20 = (float)this->m_atlasData.entryCount * v18;
  else
    v20 = (float)(v18 * dt) + *outAtlasIndex;
  *outAtlasIndex = v20;
  if ( (this->m_atlasData.behavior & 8) != 0 )
  {
    entryCount = this->m_atlasData.entryCount;
    if ( v20 >= (float)(entryCount * this->m_atlasData.loopCount - 1) )
      *outAtlasIndex = (float)(entryCount - 1);
  }
}

/*
==============
ParticleState::UpdateBeamChildTransform
==============
*/

void __fastcall ParticleState::UpdateBeamChildTransform(ParticleState *this, ParticleSystem *systemBeamChild, double a3, double a4)
{
  __int128 v4; 
  __int128 v5; 
  ParticleEmitter *EmitterOwner; 
  const float4 *SystemOwner; 
  const vector4 *EmitterTransform; 
  const vector4 *v11; 
  int v12; 
  __m256i v13; 
  __m256i v14; 
  vector4 systemTransform; 
  vector4 outTransform; 

  if ( systemBeamChild )
  {
    EmitterOwner = (ParticleEmitter *)ParticleState::GetEmitterOwner(this);
    SystemOwner = (const float4 *)ParticleEmitter::GetSystemOwner(EmitterOwner);
    EmitterTransform = ParticleEmitter::GetEmitterTransform(EmitterOwner, this);
    ParticleEmitter::GetBeamTransform(EmitterOwner, this, &outTransform);
    Float4x4Mul(&outTransform, EmitterTransform, v11);
    v12 = SystemOwner[26].v.m128_i32[0];
    *(_OWORD *)v14.m256i_i8 = *(_OWORD *)&a3;
    *(_OWORD *)v13.m256i_i8 = v4;
    *(_OWORD *)&v14.m256i_u64[2] = *(_OWORD *)&a4;
    *(_OWORD *)&v13.m256i_u64[2] = v5;
    *(__m256i *)systemTransform.x.v.m128_f32 = v13;
    *(__m256i *)systemTransform.z.v.m128_f32 = v14;
    if ( (v12 & 0x100) == 0 )
      systemTransform.w.v = _mm128_add_ps(EmitterTransform->w.v, outTransform.w.v);
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
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  ParticleEmitter *v12; 
  __m128 v15; 
  __m128 v16; 
  ParticleSystem *SystemOwner; 
  __int64 m_particleCountRunning; 
  const float4 *v19; 
  float *CameraDistanceArray; 
  const vector4 *EmitterTransform; 
  float v22; 
  const vector4 *v23; 
  __m128 v25; 
  float invFovScale; 
  __m128 v29; 
  bool v34; 
  __int64 v35; 
  unsigned int *FlagsArray; 
  float4 *ColorArray; 
  float m_emitterLifeNormalized; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  const ParticleModuleInitAtlas *m_pModuleInitAtlas; 
  const vector4 *v41; 
  vector4 *p_m_systemTransformTranspose; 
  __int64 m_localClientNum; 
  vector4 *p_m_cameraTransformPosOnlyTranspose; 
  __m128 v45; 
  float v46; 
  __m128 v47; 
  __m128 v48; 
  __m128 v50; 
  const ParticleSystem *v53; 
  const ParticleStateDef *m_pStateDef; 
  unsigned __int64 flags; 
  const ParticleModuleInitRelativeVelocity *v56; 
  ParticleRelativeVelocityType m_velocityType; 
  float4 *SpawnQuatArray; 
  float4 *v59; 
  __int64 v60; 
  signed __int64 v61; 
  __m128 v62; 
  __m128 v; 
  __m128 v64; 
  __m128 v65; 
  __m128 v66; 
  __m128 v67; 
  __m128 v68; 
  const char *VFXName; 
  float4 *v70; 
  __int64 v71; 
  __m128 v72; 
  float4 *v73; 
  const float4 *v74; 
  vector3 *v75; 
  float4 *v76; 
  __int64 v77; 
  signed __int64 v78; 
  __m128 v79; 
  __m128 v80; 
  const ParticleStateDef *v81; 
  const ParticleModuleParentVelocityGraph *m_pModuleParentVelocityGraph; 
  const ParticleModuleForceDragGraph *m_pModuleForceDragGraph; 
  const ParticleModuleInitKillWrapBox *v84; 
  __m128 v85; 
  __m128 v86; 
  unsigned int v87; 
  __m128 *v88; 
  signed __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  __m128 v92; 
  __m128 *v95; 
  const ParticleModuleInitRelativeVelocity *v96; 
  __m128 v97; 
  char v99; 
  __m128 v100; 
  __m128 v101; 
  __m128 v102; 
  __m128 v103; 
  __m128 v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  float v109; 
  float v110; 
  float v111; 
  __m128 v116; 
  __m128 v117; 
  unsigned __int8 *ParticleDataArray; 
  int v123; 
  const ParticleStateDef *v126; 
  unsigned __int64 v127; 
  float4 *ParentVelocityArray; 
  ParticleState::ElementTypeModule v129; 
  unsigned __int64 v132; 
  unsigned __int32 v133; 
  ParticleSystem *v134; 
  unsigned __int64 v135; 
  ParticleSystem *v136; 
  float *m_timeInStateList; 
  unsigned int v138; 
  __int64 v139; 
  __int64 v140; 
  __int64 v141; 
  unsigned int v142; 
  __int64 v143; 
  float *v144; 
  __int64 v145; 
  ParticleEmitter *v146; 
  bool v147; 
  char v148; 
  bool Bool_Internal; 
  bool v150; 
  bool hasRotation; 
  float v152; 
  int v153; 
  float v154; 
  float4 *velocityArray; 
  int *RandomSeedArray; 
  signed __int64 v158; 
  vector4 *rEmitterTransform; 
  __m128 *p_v; 
  float *v161; 
  signed __int64 v162; 
  float *LifeArray; 
  signed __int64 v164; 
  float4 *v165; 
  signed __int64 v166; 
  float4 *RotationRateArray; 
  signed __int64 v168; 
  const ParticleModuleInitKillWrapBox *m_pModuleInitKillWrapBox; 
  float4 *rotationAngleArray; 
  float4 *sizeArray; 
  float4 *positionArray; 
  float4 posWorld; 
  unsigned __int64 v174; 
  __int64 v175; 
  __int64 v176; 
  __int64 v177; 
  __m128 v178; 
  __m128 v179; 
  __m128 v180; 
  __m128 v181; 
  __m128 v182; 
  __m128 center; 
  __m128 v184; 
  unsigned int v185; 
  unsigned int v186; 
  vec4_t color; 
  __int128 v188; 
  __int128 v189; 
  __int128 v190; 
  __int128 v191; 
  __int128 v192; 
  __int128 v193; 

  v12 = (ParticleEmitter *)pEmitterOwner;
  v15 = _mm_shuffle_ps(*(__m128 *)&dt, *(__m128 *)&dt, 0);
  v16 = _mm_shuffle_ps(v15, v15, 0);
  v184 = v16;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1117, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1118, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1119, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( (this->m_pStateDef->flags & 0x400) != 0 )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
    if ( (ParticleSystem::GetDef(SystemOwner)->flags & 0x10) != 0 && (this->m_pStateDef->flags & 0x800000000i64) != 0 )
    {
      m_particleCountRunning = pParticleData->m_particleCountRunning;
      v19 = Particle_GetPositionArray(pParticleData);
      CameraDistanceArray = Particle_GetCameraDistanceArray(pParticleData);
      EmitterTransform = ParticleEmitter::GetEmitterTransform((ParticleEmitter *)pEmitterOwner, this);
      v22 = pCamera->origin.v[0];
      v23 = EmitterTransform;
      v182.m128_i32[3] = 0;
      v25 = v182;
      v25.m128_f32[0] = v22;
      _XMM6 = v25;
      __asm
      {
        vinsertps xmm6, xmm6, dword ptr [r12+4], 10h
        vinsertps xmm6, xmm6, dword ptr [r12+8], 20h ; ' '
      }
      if ( (ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner)->flags & 0x2000000) != 0 )
        invFovScale = FLOAT_1_0;
      else
        invFovScale = pCamera->invFovScale;
      if ( (_DWORD)m_particleCountRunning )
      {
        do
        {
          ParticleEmitter::GetWorldPos((ParticleEmitter *)pEmitterOwner, v19, &posWorld, this, v23);
          v29 = _mm128_sub_ps(_XMM6, posWorld.v);
          _XMM1 = _mm128_mul_ps(v29, v29);
          __asm
          {
            vinsertps xmm2, xmm1, xmm1, 8
            vhaddps xmm0, xmm2, xmm2
            vhaddps xmm0, xmm0, xmm0
          }
          ++v19;
          *CameraDistanceArray++ = _mm_sqrt_ps(_XMM0).m128_f32[0] * invFovScale;
          --m_particleCountRunning;
        }
        while ( m_particleCountRunning );
      }
    }
    return;
  }
  v192 = v7;
  v191 = v8;
  Bool_Internal = Dvar_GetBool_Internal(particle_debug_draw_particles);
  v34 = Dvar_GetBool_Internal(particle_sort_particles);
  v35 = pParticleData->m_particleCountRunning;
  v150 = v34;
  positionArray = Particle_GetPositionArray(pParticleData);
  velocityArray = Particle_GetVelocityArray(pParticleData);
  sizeArray = Particle_GetSizeArray(pParticleData);
  rotationAngleArray = Particle_GetRotationAngleArray(pParticleData);
  v161 = Particle_GetCameraDistanceArray(pParticleData);
  RotationRateArray = Particle_GetRotationRateArray(pParticleData);
  Particle_GetSpawnTimeArray(pParticleData);
  RandomSeedArray = Particle_GetRandomSeedArray(pParticleData);
  FlagsArray = Particle_GetFlagsArray(pParticleData);
  LifeArray = Particle_GetLifeArray(pParticleData);
  ColorArray = Particle_GetColorArray(pParticleData);
  m_emitterLifeNormalized = pEmitterOwner->m_emitterLifeNormalized;
  v165 = ColorArray;
  m_pModuleInitRelativeVelocity = this->m_pModuleInitRelativeVelocity;
  hasRotation = (this->m_pStateDef->flags & 0xF0) != 0;
  v174 = this->m_pStateDef->flags & 0x300;
  v152 = m_emitterLifeNormalized;
  v147 = m_pModuleInitRelativeVelocity && (m_pModuleInitRelativeVelocity->m_flags & 1) == 0 && ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) == 0;
  m_pModuleInitAtlas = this->m_pModuleInitAtlas;
  if ( !m_pModuleInitAtlas || (m_pModuleInitAtlas->m_flags & 1) != 0 || (v148 = 1, !this->m_atlasData.isAtlas) )
    v148 = 0;
  v41 = ParticleEmitter::GetEmitterTransform((ParticleEmitter *)pEmitterOwner, this);
  rEmitterTransform = (vector4 *)v41;
  if ( (this->m_pStateDef->flags & 2) != 0 || (this->m_pStateDef->flags & 0x10000000) != 0 )
  {
    m_localClientNum = pEmitterOwner->m_pSystemOwner->m_localClientNum;
    if ( (this->m_pStateDef->flags & 0x10000000) != 0 )
    {
      if ( (unsigned int)m_localClientNum >= 2 )
      {
        LODWORD(v146) = pEmitterOwner->m_pSystemOwner->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v146, 2) )
          __debugbreak();
      }
      p_m_cameraTransformPosOnlyTranspose = &g_particleManager[0].m_cameraTransformPosOnlyTranspose;
    }
    else
    {
      if ( (unsigned int)m_localClientNum >= 2 )
      {
        LODWORD(v146) = pEmitterOwner->m_pSystemOwner->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v146, 2) )
          __debugbreak();
      }
      p_m_cameraTransformPosOnlyTranspose = &g_particleManager[0].m_cameraTransformTranspose;
    }
    p_m_systemTransformTranspose = &p_m_cameraTransformPosOnlyTranspose[4916 * m_localClientNum];
  }
  else
  {
    p_m_systemTransformTranspose = &ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner)->m_systemTransformTranspose;
  }
  p_v = &p_m_systemTransformTranspose->x.v;
  m_pModuleInitKillWrapBox = this->m_pModuleInitKillWrapBox;
  v45 = _mm_shuffle_ps(v15, v15, 0);
  v182 = v45;
  v46 = pCamera->origin.v[0];
  v47 = (__m128)LODWORD(pCamera->origin.v[1]);
  v48 = (__m128)LODWORD(pCamera->origin.v[2]);
  center.m128_i32[3] = 0;
  v50 = center;
  v50.m128_f32[0] = v46;
  _XMM3 = v50;
  __asm
  {
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
  }
  center = _XMM3;
  v53 = ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
  if ( (v53->m_flags & 0x40000000) != 0 && (ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner)->flags & 0x800000) == 0 )
    ParticleState::ApplyModifiers(this, v53, pParticleData);
  m_pStateDef = this->m_pStateDef;
  v193 = v6;
  flags = m_pStateDef->flags;
  if ( (flags & 0x100) != 0 )
  {
    v56 = this->m_pModuleInitRelativeVelocity;
    if ( v56 && (v56->m_flags & 1) == 0 && (m_velocityType = v56->m_velocityType) != PARTICLE_RELATIVE_VELOCITY_TYPE_LOCAL )
    {
      if ( m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN || m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN_WITH_BOLT_INFO )
      {
        if ( (flags & 4) != 0 )
        {
          SpawnQuatArray = Particle_GetSpawnQuatArray(pParticleData);
          if ( (_DWORD)v35 )
          {
            v59 = velocityArray;
            v60 = v35;
            v61 = (char *)SpawnQuatArray - (char *)velocityArray;
            do
            {
              v62 = *(__m128 *)((char *)&v59->v + v61);
              v = v59->v;
              ++v59;
              v64 = _mm_shuffle_ps(v62, v62, 210);
              v65 = _mm_shuffle_ps(v62, v62, 201);
              v66 = _mm_shuffle_ps(v62, v62, 255);
              v67 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 210), v65), _mm128_mul_ps(_mm_shuffle_ps(v, v, 201), v64));
              v68 = _mm128_add_ps(v67, v67);
              v59[-1].v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v68, v68, 210), v65), _mm128_mul_ps(_mm_shuffle_ps(v68, v68, 201), v64)), _mm128_add_ps(_mm128_mul_ps(v66, v68), v));
              --v60;
            }
            while ( v60 );
          }
        }
        else
        {
          VFXName = ParticleState::GetVFXName(this);
          R_WarnOncePerFrame(R_WARN_VFX_NO_LOCATION_MODULE_FOR_RELATIVE_TO_EFFECT_ORIGIN, VFXName);
        }
      }
    }
    else if ( (ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner)->m_flags & 1) != 0 )
    {
      Particle_GetSpawnPosArray(pParticleData);
      v73 = Particle_GetSpawnQuatArray(pParticleData);
      if ( (_DWORD)v35 )
      {
        v76 = velocityArray;
        v77 = v35;
        v78 = (char *)v73 - (char *)velocityArray;
        do
        {
          v79 = *(__m128 *)((char *)&v76->v + v78);
          Float4UnitQuatToAxis(v75, v74);
          v80 = v76->v;
          ++v76;
          v48 = _mm128_mul_ps(v48, _mm_shuffle_ps(v80, v80, 170));
          v47 = _mm128_add_ps(_mm128_mul_ps(v79, _mm_shuffle_ps(v80, v80, 0)), _mm128_add_ps(_mm128_mul_ps(v47, _mm_shuffle_ps(v80, v80, 85)), v48));
          v76[-1] = (float4)v47;
          --v77;
        }
        while ( v77 );
        v41 = rEmitterTransform;
      }
      v12 = (ParticleEmitter *)pEmitterOwner;
    }
    else if ( (_DWORD)v35 )
    {
      v70 = velocityArray;
      v71 = v35;
      do
      {
        v72 = v70->v;
        ++v70;
        v70[-1].v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v72, v72, 0), v41->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v72, v72, 85), v41->y.v), _mm128_mul_ps(_mm_shuffle_ps(v72, v72, 170), v41->z.v)));
        --v71;
      }
      while ( v71 );
    }
  }
  v81 = this->m_pStateDef;
  if ( (v81->flags & 0x2000000) != 0 )
  {
    m_pModuleParentVelocityGraph = this->m_pModuleParentVelocityGraph;
    if ( m_pModuleParentVelocityGraph )
    {
      ParticleModuleParentVelocityGraph::Update(m_pModuleParentVelocityGraph, pParticleData, 0, v35, v15.m128_f32[0], v12, this);
      v81 = this->m_pStateDef;
    }
  }
  if ( (v81->flags & 0x1000000) != 0 )
    ParticleState::UpdateVelocityBasedOnVectorFields(this, v15.m128_f32[0], v12, &v41->w);
  m_pModuleForceDragGraph = this->m_pModuleForceDragGraph;
  if ( m_pModuleForceDragGraph && (m_pModuleForceDragGraph->m_flags & 1) == 0 )
    ParticleModuleForceDragGraph::Update(m_pModuleForceDragGraph, pParticleData, 0, v35, v15.m128_f32[0], v12, this);
  v190 = v9;
  v189 = v10;
  v188 = v11;
  if ( m_pModuleInitKillWrapBox )
  {
    v84 = this->m_pModuleInitKillWrapBox;
    v86 = v84->m_bounds.v;
    v178 = v84->m_offset.v;
    v85 = v178;
    v181 = _mm_shuffle_ps(v86, v86, 85);
    v179 = _mm_shuffle_ps(v85, v85, 85);
    v180 = _mm_shuffle_ps(v85, v85, 170);
    posWorld.v = _mm_shuffle_ps(v86, v86, 170);
  }
  else
  {
    v86.m128_i32[0] = v184.m128_i32[3];
    posWorld.v = (__m128)v186;
    v180 = (__m128)v184.m128_u32[2];
    v179 = (__m128)v184.m128_u32[1];
    v178 = (__m128)v184.m128_u32[0];
    v181 = (__m128)v185;
  }
  if ( (ParticleEmitter::GetEmitterDef(v12)->flags & 0x2000000) != 0 )
    v154 = FLOAT_1_0;
  else
    v154 = pCamera->invFovScale;
  v87 = 0;
  v153 = 0;
  if ( (_DWORD)v35 )
  {
    v88 = &velocityArray->v;
    v89 = (char *)RotationRateArray - (char *)velocityArray;
    v90 = (char *)rotationAngleArray - (char *)velocityArray;
    v166 = (char *)v165 - (char *)velocityArray;
    v91 = (char *)positionArray - (char *)velocityArray;
    v162 = (char *)v161 - (char *)FlagsArray;
    v164 = (char *)LifeArray - (char *)FlagsArray;
    v92 = center;
    v175 = (char *)sizeArray - (char *)velocityArray;
    v158 = (char *)RandomSeedArray - (char *)FlagsArray;
    v168 = (char *)RotationRateArray - (char *)velocityArray;
    v177 = (char *)rotationAngleArray - (char *)velocityArray;
    v176 = (char *)positionArray - (char *)velocityArray;
    while ( 1 )
    {
      if ( this->m_pModuleGravity )
      {
        _XMM3 = 0i64;
        if ( v174 )
          __asm { vinsertps xmm3, xmm3, xmm1, 20h ; ' ' }
        else
          __asm { vinsertps xmm3, xmm3, xmm0, 20h ; ' ' }
        if ( v147 )
          _XMM3 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM3, _XMM3, 0), *p_v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM3, _XMM3, 85), p_v[1]), _mm128_mul_ps(_mm_shuffle_ps(_XMM3, _XMM3, 170), p_v[2]))), (__m128)_xmm);
        *v88 = _mm128_add_ps(_XMM3, *v88);
      }
      v95 = (__m128 *)((char *)v88 + v91);
      if ( (this->m_pStateDef->flags & 8) == 0 )
        *v95 = _mm128_add_ps(_mm128_mul_ps(v45, *v88), *v95);
      *(__m128 *)((char *)v88 + v90) = _mm128_add_ps(_mm128_mul_ps(v45, *(__m128 *)((char *)v88 + v89)), *(__m128 *)((char *)v88 + v90));
      v96 = this->m_pModuleInitRelativeVelocity;
      if ( !v96 || (v96->m_flags & 1) != 0 || ((v96->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        _XMM12 = *v95;
      }
      else
      {
        v97 = *(__m128 *)((char *)v88 + v91);
        _XMM12 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v97, v97, 0), rEmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v97, v97, 85), rEmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v97, v97, 170), rEmitterTransform->z.v), rEmitterTransform->w.v)));
      }
      if ( (this->m_pStateDef->flags & 0x10000000) != 0 )
        _XMM12 = _mm128_add_ps(_XMM12, ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner)->m_systemTransform.w.v);
      if ( !m_pModuleInitKillWrapBox )
        goto LABEL_129;
      if ( !FlagsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1624, ASSERT_TYPE_ASSERT, "(outParticleFlags)", (const char *)&queryFormat, "outParticleFlags") )
        __debugbreak();
      if ( !this->m_pModuleInitKillWrapBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1625, ASSERT_TYPE_ASSERT, "(m_pModuleInitKillWrapBox)", (const char *)&queryFormat, "m_pModuleInitKillWrapBox") )
        __debugbreak();
      v99 = 1;
      v100 = _mm128_sub_ps(_XMM12, rEmitterTransform->w.v);
      v101 = rEmitterTransform->z.v;
      v102 = _mm_shuffle_ps(v101, (__m128)0i64, 68);
      v103 = _mm_shuffle_ps(v100, v100, 0);
      v104 = _mm_shuffle_ps(v100, v100, 85);
      v105 = _mm_shuffle_ps(v100, v100, 170);
      v106 = _mm_shuffle_ps(rEmitterTransform->x.v, rEmitterTransform->y.v, 68);
      v107 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(v105, _mm_shuffle_ps(_mm_shuffle_ps(rEmitterTransform->x.v, rEmitterTransform->y.v, 238), _mm_shuffle_ps(v101, (__m128)0i64, 238), 136)), _mm128_add_ps(_mm128_mul_ps(v103, _mm_shuffle_ps(v106, v102, 136)), g_negativeZero.v)), _mm128_add_ps(_mm128_mul_ps(v104, _mm_shuffle_ps(v106, v102, 221)), g_negativeZero.v));
      v108 = (__m128)(*(_OWORD *)&v107 & *(_OWORD *)&g_keepXYZ.v);
      v109 = COERCE_FLOAT(v107.m128_i32[0] & g_keepXYZ.v.m128_i32[0]) - v178.m128_f32[0];
      v110 = _mm_shuffle_ps(v108, v108, 85).m128_f32[0] - v179.m128_f32[0];
      v111 = _mm_shuffle_ps(v108, v108, 170).m128_f32[0] - v180.m128_f32[0];
      if ( v109 <= v86.m128_f32[0] )
      {
        if ( v109 < COERCE_FLOAT(v86.m128_i32[0] ^ _xmm) )
        {
          v99 = 0;
          if ( (this->m_pModuleInitKillWrapBox->m_planesKill & 2) != 0 )
          {
            *FlagsArray |= 1u;
            goto LABEL_128;
          }
        }
      }
      else
      {
        v99 = 0;
        if ( (this->m_pModuleInitKillWrapBox->m_planesKill & 1) != 0 )
        {
          *FlagsArray |= 1u;
          goto LABEL_128;
        }
      }
      if ( v110 <= v181.m128_f32[0] )
      {
        if ( v110 < COERCE_FLOAT(v181.m128_i32[0] ^ _xmm) )
        {
          v99 = 0;
          if ( (this->m_pModuleInitKillWrapBox->m_planesKill & 8) != 0 )
          {
            *FlagsArray |= 1u;
            goto LABEL_128;
          }
        }
      }
      else
      {
        v99 = 0;
        if ( (this->m_pModuleInitKillWrapBox->m_planesKill & 4) != 0 )
        {
          *FlagsArray |= 1u;
          goto LABEL_128;
        }
      }
      if ( v111 <= posWorld.v.m128_f32[0] )
      {
        if ( v111 >= COERCE_FLOAT(posWorld.v.m128_i32[0] ^ _xmm) )
        {
          if ( !v99 )
          {
LABEL_127:
            _XMM1 = 0i64;
            __asm
            {
              vinsertps xmm1, xmm1, xmm3, 0
              vinsertps xmm1, xmm1, xmm5, 10h
              vinsertps xmm1, xmm1, xmm4, 20h ; ' '
            }
            v116 = _mm128_mul_ps(_XMM1, (__m128)_xmm);
            *v95 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v116, v116, 0), rEmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v116, v116, 85), rEmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v116, v116, 170), rEmitterTransform->z.v), rEmitterTransform->w.v)));
          }
        }
        else
        {
          if ( (this->m_pModuleInitKillWrapBox->m_planesKill & 0x20) == 0 )
            goto LABEL_127;
          *FlagsArray |= 1u;
        }
      }
      else
      {
        if ( (this->m_pModuleInitKillWrapBox->m_planesKill & 0x10) == 0 )
          goto LABEL_127;
        *FlagsArray |= 1u;
      }
LABEL_128:
      v45 = v182;
LABEL_129:
      v117 = _mm128_sub_ps(v92, _XMM12);
      _XMM1 = _mm128_mul_ps(v117, v117);
      __asm
      {
        vinsertps xmm2, xmm1, xmm1, 8
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm0, xmm0, xmm0
      }
      *(float *)((char *)FlagsArray + v162) = _mm_sqrt_ps(_XMM0).m128_f32[0] * v154;
      if ( v148 )
      {
        if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
          __debugbreak();
        ParticleDataArray = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_ATLAS_INDEX);
        v123 = v153;
        ParticleState::UpdateAtlasIndex(this, this->m_pModuleInitAtlas, v15.m128_f32[0], v152, *(unsigned int *)((char *)FlagsArray + v158), *(float *)((char *)FlagsArray + v164), (float *)&ParticleDataArray[4 * v153]);
      }
      else
      {
        v123 = v153;
      }
      if ( Bool_Internal )
      {
        center.m128_f32[0] = _XMM12.m128_f32[0];
        _XMM2 = _mm_shuffle_ps(*(__m128 *)((char *)v88 + v175), *(__m128 *)((char *)v88 + v175), 85);
        __asm { vmaxss  xmm1, xmm2, xmm1; radius }
        color = *(vec4_t *)((char *)v88 + v166);
        __asm
        {
          vextractps dword ptr [rbp+1D0h+center+4], xmm12, 1
          vextractps dword ptr [rbp+1D0h+center+8], xmm12, 2
        }
        Particle_DebugSphere((const vec3_t *)&center, *(float *)&_XMM1, &color, 1, 0);
      }
      v91 = v176;
      v90 = v177;
      ++FlagsArray;
      ++v88;
      v89 = v168;
      v153 = v123 + 1;
      if ( v123 + 1 >= (unsigned int)v35 )
      {
        v16 = v184;
        v12 = (ParticleEmitter *)pEmitterOwner;
        break;
      }
    }
  }
  v126 = this->m_pStateDef;
  v127 = v126->flags;
  if ( (v127 & 0x40000000) != 0 && v150 && (v127 & 0x8000) != 0 )
  {
    ParticleState::SortParticles(this, (LocalClientNum_t)this->m_pParticleData->m_localClientNum, v35);
    v126 = this->m_pStateDef;
  }
  switch ( v126->elementType )
  {
    case 1u:
      v129.pModule = (const ParticleModule *)this->m_elementTypeModule;
      if ( v129.pModule )
      {
        _XMM0 = 0i64;
        __asm { vroundss xmm4, xmm0, xmm3, 1 }
        this->m_beamTextureOffsetV = (float)((float)(v15.m128_f32[0] * *(float *)&v129.pModule[14].m_type) + this->m_beamTextureOffsetV) - *(float *)&_XMM4;
        this->m_beamSpiralGraphOffset = (float)(v15.m128_f32[0] * *(float *)&v129.pModule[14].m_flags) + this->m_beamSpiralGraphOffset;
      }
      v132 = (unsigned __int64)pParticleData->m_localClientNum << 12;
      v133 = 0;
      v134 = NULL;
      if ( g_particleSystemsGeneration[v132 + (this->m_systemBeamChild & 0xFFF)].__all32 == this->m_systemBeamChild )
        v133 = this->m_systemBeamChild & 0xFFF;
      v135 = v132 + v133;
      if ( g_particleSystems[0][v135] >= (ParticleSystem *)0x1000 )
        v134 = g_particleSystems[0][v135];
      if ( v134 )
      {
        ParticleState::UpdateBeamChildTransform(this, v134);
        if ( Dvar_GetBool_Internal(particle_parent_updates_child) || (v136 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v12), (ParticleSystem::GetDef(v136)->flags & 0x80000) != 0) )
          ParticleSystem::Update(v134, currentTime, pCamera, (int)(float)(v15.m128_f32[0] * 1000.0));
      }
      break;
    case 4u:
      ParticleState::Update_GeoTrails(this, pParticleData, v15.m128_f32[0], pCamera);
      break;
    case 9u:
      ParticleState::Update_Runners(this, v15.m128_f32[0], currentTime, v12, pCamera, pParticleData, v35, positionArray, sizeArray, velocityArray, rotationAngleArray, hasRotation, rEmitterTransform);
      break;
    case 0xAu:
      if ( (v126->flags & 0x2000000) != 0 )
      {
        if ( !this->m_tailDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 485, ASSERT_TYPE_ASSERT, "(m_tailDataList)", (const char *)&queryFormat, "m_tailDataList") )
          __debugbreak();
        this->m_tailDataList->updateTimer = v15.m128_f32[0] + this->m_tailDataList->updateTimer;
        ParentVelocityArray = Particle_GetParentVelocityArray(pParticleData);
        ParticleEmitter::UpdateParentVelocity(v12, v35, ParentVelocityArray);
      }
      break;
    case 0xBu:
      ParticleState::Update_VectorFields(this, pParticleData);
      break;
  }
  if ( (this->m_pStateDef->flags & 0x400000000i64) != 0 )
  {
    if ( !this->m_timeInStateList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 525, ASSERT_TYPE_ASSERT, "(m_timeInStateList)", (const char *)&queryFormat, "m_timeInStateList") )
      __debugbreak();
    m_timeInStateList = this->m_timeInStateList;
    if ( (_DWORD)v35 )
    {
      if ( (unsigned int)v35 >= 0x10 )
      {
        v138 = 8;
        do
        {
          v139 = v87;
          v87 += 16;
          *(__m128 *)&m_timeInStateList[v139] = _mm128_add_ps(v16, *(__m128 *)&m_timeInStateList[v139]);
          *(__m128 *)&m_timeInStateList[v138 - 4] = _mm128_add_ps(v16, *(__m128 *)&m_timeInStateList[v138 - 4]);
          *(__m128 *)&m_timeInStateList[v138] = _mm128_add_ps(v16, *(__m128 *)&m_timeInStateList[v138]);
          v140 = v138 + 4;
          v138 += 16;
          *(__m128 *)&m_timeInStateList[v140] = _mm128_add_ps(v16, *(__m128 *)&m_timeInStateList[v140]);
        }
        while ( v87 < ((unsigned int)v35 & 0xFFFFFFF0) );
      }
      if ( v87 < (unsigned int)v35 )
      {
        if ( (unsigned int)v35 - v87 >= 4 )
        {
          v141 = (__int64)&m_timeInStateList[v87 + 2];
          v142 = (((unsigned int)v35 - v87 - 4) >> 2) + 1;
          v143 = v142;
          v87 += 4 * v142;
          do
          {
            *(__m128 *)(v141 - 8) = _mm128_add_ps(v15, *(__m128 *)(v141 - 8));
            v141 += 16i64;
            --v143;
          }
          while ( v143 );
        }
        if ( v87 < (unsigned int)v35 )
        {
          v144 = &m_timeInStateList[v87];
          v145 = (unsigned int)v35 - v87;
          do
          {
            *v144 = v15.m128_f32[0] + *v144;
            ++v144;
            --v145;
          }
          while ( v145 );
        }
      }
    }
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
  __m128 v; 
  float4 v13; 
  float4 v14; 

  if ( !pChildSystem )
    return;
  if ( !pChildSystem->m_isRunning )
    return;
  m_flags = pChildSystem->m_flags;
  if ( (m_flags & 0x30) != 0 || (BYTE2(m_flags) & 1) != 0 )
    return;
  if ( velocityOptions == PARTICLE_USE_VELOCITY_OPTION_MULT )
  {
    pChildSystem->m_velocityMod.min = velocityMod->min;
    v13.v = (__m128)velocityMod->max;
    pChildSystem->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_MULT;
  }
  else
  {
    if ( velocityOptions != PARTICLE_USE_VELOCITY_OPTION_OVERRIDE )
    {
      pChildSystem->m_velocityMod.min = (float4)g_one.v;
      v = g_one.v;
      pChildSystem->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_NONE;
      pChildSystem->m_velocityMod.max.v = v;
      pChildSystem->m_flags = m_flags | 0x40000000;
      goto LABEL_11;
    }
    pChildSystem->m_velocityMod.min = (float4)velocity->v;
    v13.v = velocity->v;
    pChildSystem->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_OVERRIDE;
  }
  pChildSystem->m_velocityMod.max = (float4)v13.v;
  pChildSystem->m_flags |= 0x40000000ui64;
LABEL_11:
  if ( scaleOptions == PARTICLE_USE_SCALE_OPTION_MULT )
  {
    pChildSystem->m_scaleMod.min = scaleMod->min;
    v14.v = (__m128)scaleMod->max;
    pChildSystem->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_MULT;
  }
  else if ( scaleOptions == PARTICLE_USE_SCALE_OPTION_OVERRIDE )
  {
    pChildSystem->m_scaleMod.min = (float4)size->v;
    v14.v = size->v;
    pChildSystem->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_OVERRIDE;
  }
  else
  {
    pChildSystem->m_scaleMod.min = (float4)g_one.v;
    v14.v = g_one.v;
    pChildSystem->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_NONE;
  }
  pChildSystem->m_scaleMod.max = (float4)v14.v;
  pChildSystem->m_flags |= 0x40000000ui64;
  if ( (pSystemOwner->m_flags & 0x40000000) != 0 )
  {
    if ( pChildSystem->m_scaleOptions == PARTICLE_USE_SCALE_OPTION_MULT )
    {
      pChildSystem->m_scaleMod.min.v = _mm128_mul_ps(pSystemOwner->m_scaleMod.min.v, pChildSystem->m_scaleMod.min.v);
      pChildSystem->m_scaleMod.max.v = _mm128_mul_ps(pSystemOwner->m_scaleMod.max.v, pChildSystem->m_scaleMod.max.v);
    }
    if ( pChildSystem->m_velocityOptions == PARTICLE_USE_VELOCITY_OPTION_MULT )
    {
      if ( (pSystemOwner->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 338, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
        __debugbreak();
      pChildSystem->m_velocityMod.min.v = _mm128_mul_ps(pSystemOwner->m_velocityMod.min.v, pChildSystem->m_velocityMod.min.v);
      pChildSystem->m_velocityMod.max.v = _mm128_mul_ps(pSystemOwner->m_velocityMod.max.v, pChildSystem->m_velocityMod.max.v);
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
  float4 v6; 

  if ( scaleOptions == PARTICLE_USE_SCALE_OPTION_MULT )
  {
    pChildSystem->m_scaleMod.min = scaleMod->min;
    v6.v = (__m128)scaleMod->max;
    pChildSystem->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_MULT;
  }
  else if ( scaleOptions == PARTICLE_USE_SCALE_OPTION_OVERRIDE )
  {
    pChildSystem->m_scaleMod.min = (float4)size->v;
    v6.v = size->v;
    pChildSystem->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_OVERRIDE;
  }
  else
  {
    pChildSystem->m_scaleMod.min = (float4)g_one.v;
    v6.v = g_one.v;
    pChildSystem->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_NONE;
  }
  pChildSystem->m_scaleMod.max = (float4)v6.v;
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
  __m128 v7; 
  const ParticleEmitterDef *EmitterDef; 
  ParticleSystemHandle SystemHandle; 
  float spawnFrustumCullRadius; 
  const ParticleStateDef *m_pStateDef; 
  ParticleSystem *SystemOwner; 
  unsigned int v14; 
  float4 *PositionArray; 
  float4 *VelocityArray; 
  float *VectorFieldScaleArray; 
  __m128 v18; 
  unsigned int m_particleCountRunning; 
  signed __int64 v20; 
  __int64 v21; 
  unsigned int m_numVectorFields; 
  float v24; 
  float v25; 
  __m128 v27; 
  float v30; 
  float v31; 
  __m128 v33; 
  vec3_t outSample; 
  vec3_t v37; 
  vec3_t pos; 
  vec3_t worldPos; 
  __m128 v; 
  __m128 v41; 

  v7 = *(__m128 *)&dt;
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1477, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( !this->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1478, ASSERT_TYPE_ASSERT, "(m_pParticleData)", (const char *)&queryFormat, "m_pParticleData") )
    __debugbreak();
  if ( (this->m_pStateDef->flags & 0x1000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 1479, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_STATE_DEF_FLAG_USE_VECTOR_FIELDS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_STATE_DEF_FLAG_USE_VECTOR_FIELDS )") )
    __debugbreak();
  EmitterDef = ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner);
  _XMM1 = emitterPos->v;
  SystemHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
  spawnFrustumCullRadius = EmitterDef->spawnFrustumCullRadius;
  m_pStateDef = this->m_pStateDef;
  LODWORD(worldPos.v[0]) = *(const float4 *)emitterPos->v.m128_f32;
  __asm
  {
    vextractps dword ptr [rbp+57h+worldPos+4], xmm1, 1
    vextractps dword ptr [rbp+57h+worldPos+8], xmm1, 2
  }
  if ( (m_pStateDef->flags & 0x2000000000i64) != 0 )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
    SystemHandle = ParticleSystem::GetSystemHandle(SystemOwner);
  }
  v14 = CG_Wind_QueryRegion(&worldPos, spawnFrustumCullRadius, SystemHandle, this->m_vectorFields, 8);
  this->m_numVectorFields = v14;
  if ( v14 )
  {
    PositionArray = Particle_GetPositionArray(this->m_pParticleData);
    VelocityArray = Particle_GetVelocityArray(this->m_pParticleData);
    VectorFieldScaleArray = Particle_GetVectorFieldScaleArray(this->m_pParticleData);
    v18 = _mm_shuffle_ps(v7, v7, 0);
    m_particleCountRunning = this->m_pParticleData->m_particleCountRunning;
    if ( m_particleCountRunning )
    {
      v20 = (char *)PositionArray - (char *)VelocityArray;
      v21 = m_particleCountRunning;
      do
      {
        _XMM1 = *(__int128 *)((char *)VelocityArray + v20);
        m_numVectorFields = this->m_numVectorFields;
        LODWORD(pos.v[0]) = _XMM1;
        __asm
        {
          vextractps dword ptr [rbp+57h+pos+4], xmm1, 1
          vextractps dword ptr [rbp+57h+pos+8], xmm1, 2
        }
        if ( CG_Wind_SamplePosAgainstInstances(&pos, &outSample, m_numVectorFields, this->m_vectorFields, HALF_HALF) )
        {
          if ( (this->m_pStateDef->flags & 0x1000000000i64) != 0 )
          {
            v24 = outSample.v[0] * *VectorFieldScaleArray;
            v25 = outSample.v[1] * *VectorFieldScaleArray;
            outSample.v[2] = outSample.v[2] * *VectorFieldScaleArray;
            outSample.v[0] = v24;
            outSample.v[1] = v25;
          }
          else
          {
            v24 = outSample.v[0];
          }
          v.m128_i32[3] = 0;
          v27 = v;
          v27.m128_f32[0] = v24;
          _XMM0 = v27;
          __asm
          {
            vinsertps xmm0, xmm0, xmm4, 10h
            vinsertps xmm0, xmm0, xmm1, 20h ; ' '
          }
          v = _XMM0.v;
          *VelocityArray = (float4)_XMM0.v;
        }
        if ( CG_Wind_SamplePosAgainstInstances(&pos, &v37, this->m_numVectorFields, this->m_vectorFields, HALF) )
        {
          if ( (this->m_pStateDef->flags & 0x1000000000i64) != 0 )
          {
            v30 = v37.v[0] * *VectorFieldScaleArray;
            v31 = v37.v[1] * *VectorFieldScaleArray;
            v37.v[2] = v37.v[2] * *VectorFieldScaleArray;
            v37.v[0] = v30;
            v37.v[1] = v31;
          }
          else
          {
            v30 = v37.v[0];
          }
          v41.m128_i32[3] = 0;
          v33 = v41;
          v33.m128_f32[0] = v30;
          _XMM0 = v33;
          __asm
          {
            vinsertps xmm0, xmm0, xmm4, 10h
            vinsertps xmm0, xmm0, xmm1, 20h ; ' '
          }
          v41 = _XMM0;
          VelocityArray->v = _mm128_add_ps(_mm128_mul_ps(v18, _XMM0), VelocityArray->v);
        }
        ++VectorFieldScaleArray;
        ++VelocityArray;
        --v21;
      }
      while ( v21 );
    }
  }
}

/*
==============
ParticleState::UpdateVelocityModifier
==============
*/
void ParticleState::UpdateVelocityModifier(ParticleState *this, const ParticleSystem *pSystemOwner, ParticleSystem *pChildSystem, const float4 *velocity, const ParticleModifier *velocityMod, ParticleUseVelocityOptions velocityOptions)
{
  float4 v6; 

  if ( velocityOptions == PARTICLE_USE_VELOCITY_OPTION_MULT )
  {
    pChildSystem->m_velocityMod.min = velocityMod->min;
    v6.v = (__m128)velocityMod->max;
    pChildSystem->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_MULT;
  }
  else if ( velocityOptions == PARTICLE_USE_VELOCITY_OPTION_OVERRIDE )
  {
    pChildSystem->m_velocityMod.min = (float4)velocity->v;
    v6.v = velocity->v;
    pChildSystem->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_OVERRIDE;
  }
  else
  {
    pChildSystem->m_velocityMod.min = (float4)g_one.v;
    v6.v = g_one.v;
    pChildSystem->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_NONE;
  }
  pChildSystem->m_velocityMod.max = (float4)v6.v;
  pChildSystem->m_flags |= 0x40000000ui64;
}

/*
==============
ParticleState::Update_GeoTrailTangentsAndCameraDist
==============
*/
void ParticleState::Update_GeoTrailTangentsAndCameraDist(ParticleState *this, const ParticleEmitter *pEmitterOwner, Particle_TrailData *rTrailData, const float4 *sizeArray, const float4 *positionArray, float *cameraDistanceArray, const FxCamera *pCamera, bool cameraFacing)
{
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  const ParticleStateDef *m_pStateDef; 
  unsigned int numPointsRunning; 
  unsigned int numPointsMax; 
  __int64 firstPointIndex; 
  Particle_TrailPoint *pointList; 
  __int64 v21; 
  const float4 *v22; 
  const float4 *v23; 
  __m128 v; 
  __m128 v25; 
  float v26; 
  __m128 v28; 
  __m128 v31; 
  __m128 v32; 
  vec4_t v33; 
  vec4_t v34; 
  __int64 v35; 
  float invFovScale; 
  float *v37; 
  __m128 v38; 
  bool v43; 
  __int64 v44; 
  __int64 v45; 
  const float4 *v46; 
  const float4 *v47; 
  __int64 v48; 
  __m128 v50; 
  __m128 v60; 
  __m128 v67; 
  __m128 v90; 
  __m128 v95; 
  __m128 v96; 
  __m128 v101; 
  __int64 v104; 
  __m128 v107; 
  __int64 v111; 
  bool v113; 
  _QWORD outMatrix[7]; 
  float *v115; 
  float4 targetPos; 
  float4 cameraPos; 
  float4 currLookAt; 
  _OWORD v119[10]; 

  v115 = cameraDistanceArray;
  m_pStateDef = this->m_pStateDef;
  v119[6] = v8;
  v119[3] = v9;
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
    firstPointIndex = (rTrailData->lastPointIndex + 1) % numPointsMax;
  else
    firstPointIndex = rTrailData->firstPointIndex;
  pointList = rTrailData->pointList;
  v113 = (this->m_pStateDef->flags & 8) != 0;
  if ( (unsigned int)firstPointIndex >= numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
    __debugbreak();
  v21 = (unsigned int)(firstPointIndex + 1) % rTrailData->numPointsMax;
  v22 = &positionArray[v21];
  v23 = &positionArray[firstPointIndex];
  if ( v113 )
  {
    v = _mm128_add_ps(pointList[firstPointIndex].offset.v, v23->v);
    v25 = _mm128_add_ps(pointList[v21].offset.v, v22->v);
  }
  else
  {
    v = v23->v;
    v25 = v22->v;
  }
  v26 = pCamera->origin.v[0];
  currLookAt.v.m128_i32[3] = 0;
  v28 = currLookAt.v;
  v28.m128_f32[0] = v26;
  _XMM10 = v28;
  __asm
  {
    vinsertps xmm10, xmm10, dword ptr [rsi+4], 10h
    vinsertps xmm10, xmm10, dword ptr [rsi+8], 20h ; ' '
  }
  v31 = _mm128_sub_ps(v25, v);
  currLookAt.v = _mm_shuffle_ps(v31, _mm_shuffle_ps(v31, (__m128)0i64, 250), 132);
  targetPos.v = v;
  cameraPos.v = _XMM10;
  if ( cameraFacing )
    Particle_GenerateCameraFacingMatrix(&cameraPos, &targetPos, &currLookAt, (vector3 *)&outMatrix[1]);
  else
    Particle_GenerateMatrixFromLookAt(&currLookAt, (vector3 *)&outMatrix[1]);
  v32 = *(__m128 *)&outMatrix[1];
  v33 = *(vec4_t *)&outMatrix[3];
  v34 = *(vec4_t *)&outMatrix[5];
  v35 = firstPointIndex;
  pointList[v35].tangent = *(float4 *)&outMatrix[1];
  pointList[v35].bitangent = (float4)v33;
  pointList[v35].normal = (float4)v34;
  if ( (ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitterOwner)->flags & 0x2000000) != 0 )
    invFovScale = FLOAT_1_0;
  else
    invFovScale = pCamera->invFovScale;
  v37 = v115;
  v38 = _mm128_sub_ps(_XMM10, v);
  _XMM1 = _mm128_mul_ps(v38, v38);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
  }
  v115[firstPointIndex] = _mm_sqrt_ps(_XMM0).m128_f32[0] * invFovScale;
  v43 = numPointsRunning == 2;
  v44 = numPointsRunning - 2;
  if ( !v43 )
  {
    v119[1] = v10;
    v119[0] = v11;
    do
    {
      if ( (unsigned int)v21 >= rTrailData->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
        __debugbreak();
      HIDWORD(v45) = 0;
      v46 = &positionArray[v21];
      v47 = &positionArray[(unsigned int)(v21 + 1) % rTrailData->numPointsMax];
      v48 = (unsigned int)(v21 + 1) % rTrailData->numPointsMax;
      if ( v113 )
      {
        _XMM9 = _mm128_add_ps(pointList[v21].offset.v, v46->v);
        LODWORD(v45) = (unsigned int)(v21 + 1) % rTrailData->numPointsMax;
        v25 = _mm128_add_ps(pointList[v45].offset.v, v47->v);
      }
      else
      {
        _XMM9 = v46->v;
        v25 = v47->v;
      }
      v50 = _mm128_sub_ps(v25, _XMM9);
      _XMM6 = _mm_shuffle_ps(v50, _mm_shuffle_ps(v50, (__m128)0i64, 250), 132);
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
        _XMM7 = g_negativeZero.v;
        _XMM8 = g_equalsEpsilon.v;
        v60 = _mm128_sub_ps(_XMM9, _XMM10);
        __asm
        {
          vandnps xmm0, xmm7, xmm4
          vcmpltps xmm0, xmm8, xmm0
          vmovmskps eax, xmm0
        }
        if ( (_EAX & 0xF) == 0 )
          v60 = g_0010.v;
        __asm
        {
          vandnps xmm0, xmm7, xmm6
          vcmpltps xmm0, xmm8, xmm0
          vmovmskps eax, xmm0
        }
        if ( (_EAX & 0xF) == 0 )
          _XMM6 = g_1000.v;
        v67 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 210), _mm_shuffle_ps(v60, v60, 201)), _mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 201), _mm_shuffle_ps(v60, v60, 210)));
        __asm
        {
          vandnps xmm1, xmm7, xmm5
          vcmpltps xmm0, xmm8, xmm1
          vmovmskps eax, xmm0
        }
        if ( (_EAX & 0xF) != 0 )
        {
          _XMM0 = _mm128_mul_ps(v67, v67);
          __asm
          {
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vrsqrtps xmm1, xmm0
          }
          v32 = _mm128_mul_ps(_XMM1, v67);
        }
        else
        {
          v32 = g_0100.v;
        }
        _XMM0 = _mm128_mul_ps(_XMM6, _XMM6);
        __asm
        {
          vinsertps xmm1, xmm0, xmm0, 8
          vhaddps xmm2, xmm1, xmm1
          vhaddps xmm0, xmm2, xmm2
          vrsqrtps xmm1, xmm0
        }
        v33 = (vec4_t)_mm128_sub_ps((__m128)0i64, _mm128_mul_ps(_XMM1, _XMM6));
        v34 = (vec4_t)_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v32, v32, 201), _mm_shuffle_ps((__m128)v33, (__m128)v33, 210)), _mm128_mul_ps(_mm_shuffle_ps(v32, v32, 210), _mm_shuffle_ps((__m128)v33, (__m128)v33, 201)));
      }
      else
      {
        if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 301, ASSERT_TYPE_ASSERT, "(Float4ExtractW( lookAtInput ) == 0.0f)", "%s\n\t%g %g %g %g", "Float4ExtractW( lookAtInput ) == 0.0f", _XMM6.m128_f32[0], _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0], _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0], _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0]) )
          __debugbreak();
        _XMM0 = g_negativeZero.v;
        _XMM1 = g_equalsEpsilon.v;
        __asm
        {
          vandnps xmm2, xmm0, xmm6
          vcmpltps xmm0, xmm1, xmm2
          vmovmskps eax, xmm0
        }
        if ( (_EAX & 0xF) != 0 )
        {
          _XMM0 = _mm128_mul_ps(_XMM6, _XMM6);
          __asm
          {
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
          }
          v90 = _mm128_div_ps(_XMM6, _mm_sqrt_ps(_XMM0));
          _XMM0 = _mm128_mul_ps(v90, (__m128)_xmm);
          __asm
          {
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
          }
          if ( *(float *)&_XMM0 <= 0.99900001 )
          {
            if ( *(float *)&_XMM0 >= -0.99900001 )
            {
              v96 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v90, v90, 201), _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 210)), _mm128_mul_ps(_mm_shuffle_ps(v90, v90, 210), _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 201)));
              _XMM1 = _mm128_mul_ps(v96, v96);
              __asm
              {
                vinsertps xmm0, xmm1, xmm1, 8
                vhaddps xmm2, xmm0, xmm0
                vhaddps xmm0, xmm2, xmm2
              }
              v95 = _mm128_div_ps(v96, _mm_sqrt_ps(_XMM0));
            }
            else
            {
              v95 = (__m128)_xmm;
            }
          }
          else
          {
            v95 = (__m128)_xmm;
          }
          *(__m128 *)&outMatrix[5] = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v90, v90, 210), _mm_shuffle_ps(v95, v95, 201)), _mm128_mul_ps(_mm_shuffle_ps(v90, v90, 201), _mm_shuffle_ps(v95, v95, 210)));
          *(__m128 *)&outMatrix[1] = v95;
          *(__m128 *)&outMatrix[3] = v90;
          Particle_AssertFloat4IsNormalized((const float4 *)&outMatrix[1]);
          Particle_AssertFloat4IsNormalized((const float4 *)&outMatrix[3]);
          Particle_AssertFloat4IsNormalized((const float4 *)&outMatrix[5]);
          v34 = *(vec4_t *)&outMatrix[5];
          v33 = *(vec4_t *)&outMatrix[3];
          v32 = *(__m128 *)&outMatrix[1];
        }
        else
        {
          v32 = (__m128)identityMatrix44.m[0];
          v33 = identityMatrix44.m[1];
          v34 = identityMatrix44.m[2];
        }
      }
      v101 = _mm128_sub_ps(_XMM10, _XMM9);
      _XMM1 = _mm128_mul_ps(v101, v101);
      __asm { vinsertps xmm2, xmm1, xmm1, 8 }
      v104 = v21;
      __asm
      {
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm0, xmm0, xmm0
      }
      pointList[v104].tangent.v = v32;
      pointList[v104].bitangent = (float4)v33;
      pointList[v104].normal = (float4)v34;
      v37[v21] = _mm_sqrt_ps(_XMM0).m128_f32[0] * invFovScale;
      v21 = v48;
      --v44;
    }
    while ( v44 );
  }
  if ( (_DWORD)v21 != rTrailData->lastPointIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2973, ASSERT_TYPE_ASSERT, "(trailIndex == rTrailData.lastPointIndex)", (const char *)&queryFormat, "trailIndex == rTrailData.lastPointIndex") )
    __debugbreak();
  v107 = _mm128_sub_ps(_XMM10, v25);
  _XMM1 = _mm128_mul_ps(v107, v107);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
  }
  v111 = v21;
  __asm { vhaddps xmm0, xmm0, xmm0 }
  pointList[v111].tangent.v = v32;
  pointList[v111].bitangent = (float4)v33;
  pointList[v111].normal = (float4)v34;
  v37[v21] = _mm_sqrt_ps(_XMM0).m128_f32[0] * invFovScale;
}

/*
==============
ParticleState::Update_GeoTrails
==============
*/

void __fastcall ParticleState::Update_GeoTrails(ParticleState *this, const ParticleData *pParticleData, double dt, const FxCamera *pCamera)
{
  float v7; 
  ParticleEmitter *m_pEmitterOwner; 
  unsigned int m_particleCountRunning; 
  Particle_TrailData *v10; 
  float4 *VelocityArray; 
  bool v12; 
  unsigned __int8 *ParticleDataArray; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  unsigned __int8 *v18; 
  unsigned __int8 *v19; 
  ParticleState::ElementTypeModule v20; 
  const ParticleStateDef *m_pStateDef; 
  const ParticleModuleGroupDef *moduleGroupDefs; 
  const ParticleEmitterDef *EmitterDef; 
  const ParticleModuleInitAtlas *v24; 
  __int128 m_emitterLife_low; 
  int min_low; 
  int max_low; 
  __m128 v29; 
  __int64 v30; 
  __m128 v; 
  Particle_TrailData *v32; 
  __int64 numPointsRunning; 
  ParticleData *v34; 
  unsigned int numPointsMax; 
  unsigned int firstPointIndex; 
  unsigned __int8 *v37; 
  unsigned __int8 *v38; 
  float4 *v39; 
  unsigned __int8 *v40; 
  unsigned __int8 *v41; 
  unsigned __int8 *v42; 
  unsigned __int8 *v43; 
  unsigned __int64 v44; 
  unsigned __int8 *v45; 
  unsigned __int8 *v46; 
  float v47; 
  __int64 v48; 
  __int128 v49; 
  unsigned int v52; 
  Particle_TrailData *v53; 
  unsigned int v54; 
  __int64 v55; 
  Particle_TrailData *v56; 
  unsigned int v57; 
  unsigned int v58; 
  ParticleData *v59; 
  unsigned int v60; 
  ParticleData *v61; 
  __int64 lastPointIndex; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  __m128 v64; 
  __m128 v65; 
  const ParticleStateDef *v66; 
  unsigned __int8 *v67; 
  __int64 v68; 
  Particle_TrailData *v69; 
  __int64 v70; 
  __int64 v71; 
  float4 *v72; 
  __int64 v73; 
  float4 *v74; 
  __int64 v75; 
  float v76; 
  __m128 v77; 
  ParticleState *pParticleState; 
  float *v79; 
  __int64 v80; 
  __m128 v81; 
  __m128 v94; 
  __m128 v99; 
  __m128 v100; 
  float v105; 
  ParticleData *v106; 
  char v107; 
  unsigned int v108; 
  unsigned int v109; 
  unsigned int m_particleCountMax; 
  unsigned int v111; 
  __int64 v112; 
  int m_localClientNum; 
  ParticleData *v114; 
  __int64 v115; 
  ParticleDataFlags v116; 
  unsigned int SingleParticleSize; 
  unsigned __int16 v118; 
  LocalClientNum_t v119; 
  unsigned int v120; 
  unsigned __int8 *v121; 
  unsigned __int8 *v122; 
  unsigned __int8 *v123; 
  unsigned __int8 *v124; 
  __int64 p_offset; 
  ParticleModule *v126; 
  __int64 v127; 
  unsigned __int8 *v128; 
  float4 *v129; 
  ParticleModule *v130; 
  LocalClientNum_t v131; 
  unsigned __int8 *m_pParticleData; 
  ParticleState *v133; 
  unsigned int v134; 
  unsigned int v135; 
  char v136; 
  unsigned int v137; 
  unsigned int v138; 
  int v139; 
  const char *VFXName; 
  unsigned int v141; 
  unsigned int v142; 
  unsigned __int8 *v143; 
  __int64 v144; 
  __int64 v145; 
  __int64 v146; 
  __m128 v147; 
  __m128 v148; 
  __m128 v149; 
  __m128 v150; 
  __m128 v151; 
  __m128 v152; 
  __m128 v153; 
  __m128 v154; 
  ParticleState *v155; 
  unsigned __int8 *v156; 
  __int64 v157; 
  float *v158; 
  __int64 v159; 
  const ParticleModuleInitAtlas *v161; 
  const ParticleCurveDef *m_curves; 
  double CurveValue; 
  float v166; 
  double v167; 
  float v168; 
  double v169; 
  float v170; 
  int entryCount; 
  float *v172; 
  __int64 v173; 
  unsigned __int8 *v174; 
  __int64 v175; 
  const ParticleCurveDef *v179; 
  double v180; 
  float v181; 
  double v182; 
  float v183; 
  double v184; 
  float v185; 
  int v186; 
  __int64 v187; 
  bool v188; 
  char v189; 
  unsigned int particleOffset; 
  float particleOffseta; 
  float particleOffsetb; 
  char v193; 
  Particle_TrailData *rTrailData; 
  ParticleEmitter *pEmitterOwner; 
  char m_flags; 
  unsigned __int8 *v198; 
  unsigned __int8 *v199; 
  unsigned int v200; 
  unsigned __int8 *v201; 
  unsigned int v202; 
  unsigned int particleCount; 
  const ParticleModuleInitAtlas *m_pModuleInitAtlas; 
  __int64 v205; 
  unsigned __int8 *v206; 
  unsigned __int8 *v207; 
  int v208; 
  bool v209; 
  unsigned __int8 *v210; 
  ParticleData *pParticleDataa; 
  float4 *positionArray; 
  float4 point; 
  unsigned __int8 *v214; 
  int v215; 
  unsigned int v216; 
  int v217; 
  Particle_TrailPoint *pointList; 
  ParticleModule *v219; 
  float *v220; 
  unsigned __int8 *v221; 
  unsigned __int8 *v222; 
  ParticleModule *pModuleBase; 
  float4 *v224; 
  ParticleModule *v225; 
  ParticleModule *v226; 
  unsigned __int8 *v227; 
  ParticleModule *v228; 
  ParticleModule *v229; 
  ParticleModule *v230; 
  ParticleModule *v231; 
  float *cameraDistanceArray; 
  float4 *sizeArray; 
  const vector4 *EmitterTransform; 
  unsigned __int8 *v235; 
  unsigned __int8 *v236; 
  float4 *v237; 
  unsigned __int8 *v238; 
  unsigned __int8 *v239; 
  unsigned __int8 *v240; 
  unsigned __int8 *v241; 
  unsigned __int8 *v242; 
  const ParticleEmitterDef *v243; 
  ParticleState::ElementTypeModule v244; 
  FxCamera *pCameraa; 
  unsigned __int8 *v246; 
  Particle_TrailData *TrailDataList; 
  float4 quat; 
  float4 normal; 
  float4 v250; 
  float4 v251; 

  pCameraa = (FxCamera *)pCamera;
  v7 = *(float *)&dt;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2428, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( this->m_pStateDef->elementType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2429, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL") )
    __debugbreak();
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2430, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !this->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  m_pEmitterOwner = (ParticleEmitter *)this->m_pEmitterOwner;
  m_particleCountRunning = pParticleData->m_particleCountRunning;
  pEmitterOwner = m_pEmitterOwner;
  v216 = m_particleCountRunning;
  EmitterTransform = ParticleEmitter::GetEmitterTransform(m_pEmitterOwner, this);
  TrailDataList = ParticleState::GetTrailDataList(this);
  v10 = TrailDataList;
  v224 = Particle_GetPositionArray(pParticleData);
  VelocityArray = Particle_GetVelocityArray(pParticleData);
  v12 = pParticleData->m_pParticleData == NULL;
  v237 = VelocityArray;
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  ParticleDataArray = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_RANDOM_SEED);
  v12 = pParticleData->m_pParticleData == NULL;
  v221 = ParticleDataArray;
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v14 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_SIZE);
  v12 = pParticleData->m_pParticleData == NULL;
  v236 = v14;
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 343, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v15 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_COLOR);
  v12 = pParticleData->m_pParticleData == NULL;
  v235 = v15;
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 357, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v16 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_EMISSIVE);
  v12 = pParticleData->m_pParticleData == NULL;
  v238 = v16;
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 359, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v240 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_INTENSITY);
  if ( ParticleData::HasParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_TEMPERATURE) )
  {
    if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 360, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
      __debugbreak();
    v222 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_TEMPERATURE);
  }
  else
  {
    v222 = NULL;
  }
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 366, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v17 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_VECTOR_FIELD_SCALE);
  v12 = pParticleData->m_pParticleData == NULL;
  v241 = v17;
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 354, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v18 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_FLAGS);
  v12 = pParticleData->m_pParticleData == NULL;
  v246 = v18;
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 361, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v19 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_CAMERA_DISTANCE);
  v20.pModule = (const ParticleModule *)this->m_elementTypeModule;
  m_pStateDef = this->m_pStateDef;
  v242 = v19;
  v244.pModule = v20.pModule;
  moduleGroupDefs = m_pStateDef->moduleGroupDefs;
  if ( !v20.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2455, ASSERT_TYPE_ASSERT, "(pModuleInitGeoTrail)", (const char *)&queryFormat, "pModuleInitGeoTrail") )
    __debugbreak();
  m_flags = v20.pModule[6].m_flags;
  pModuleBase = (ParticleModule *)ParticleModule::FindModule<ParticleModuleColorGraph>(moduleGroupDefs, PARTICLE_MODULE_COLOR_GRAPH, 0xFFFFFFFF);
  v219 = (ParticleModule *)ParticleModule::FindModule<ParticleModulePositionGraph>(moduleGroupDefs, PARTICLE_MODULE_POSITION_GRAPH, 0xFFFFFFFF);
  v225 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleSizeGraph>(moduleGroupDefs, PARTICLE_MODULE_SIZE_GRAPH, 0xFFFFFFFF);
  v226 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleVelocityGraph>(moduleGroupDefs, PARTICLE_MODULE_VELOCITY_GRAPH, 0xFFFFFFFF);
  v228 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleEmissiveGraph>(moduleGroupDefs, PARTICLE_MODULE_EMISSIVE_GRAPH, 0xFFFFFFFF);
  v229 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleIntensityGraph>(moduleGroupDefs, PARTICLE_MODULE_INTENSITY_GRAPH, 0xFFFFFFFF);
  v230 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleTemperatureGraph>(moduleGroupDefs, PARTICLE_MODULE_TEMPERATURE_GRAPH, 0xFFFFFFFF);
  v231 = (ParticleModule *)ParticleModule::FindModule<ParticleModuleVectorFieldGraph>(moduleGroupDefs, PARTICLE_MODULE_VECTOR_FIELD_GRAPH, 0xFFFFFFFF);
  m_pModuleInitAtlas = this->m_pModuleInitAtlas;
  EmitterDef = ParticleEmitter::GetEmitterDef(m_pEmitterOwner);
  v24 = this->m_pModuleInitAtlas;
  m_emitterLife_low = LODWORD(m_pEmitterOwner->m_emitterLife);
  _XMM11 = LODWORD(m_pEmitterOwner->m_emitterLifeNormalized);
  min_low = SLODWORD(EmitterDef->particleLife.min);
  max_low = SLODWORD(EmitterDef->particleLife.max);
  v243 = EmitterDef;
  v209 = (m_pEmitterOwner->m_flags & 2) != 0;
  v217 = min_low;
  v215 = max_low;
  if ( !v24 || (v24->m_flags & 1) != 0 || (v193 = 1, !this->m_atlasData.isAtlas) )
    v193 = 0;
  v29 = _mm_shuffle_ps(*(__m128 *)&dt, *(__m128 *)&dt, 0);
  Particle_RotMatrixToQuat(EmitterTransform, &quat);
  v30 = 0i64;
  v208 = 0;
  if ( m_particleCountRunning )
  {
    v = quat.v;
    v205 = 0i64;
    while ( 1 )
    {
      v32 = &v10[v30];
      rTrailData = v32;
      numPointsRunning = v32->numPointsRunning;
      v34 = v32->pParticleData;
      numPointsMax = v32->numPointsMax;
      pParticleDataa = v34;
      pointList = v32->pointList;
      if ( (_DWORD)numPointsRunning == numPointsMax )
        firstPointIndex = (v32->lastPointIndex + 1) % numPointsMax;
      else
        firstPointIndex = v32->firstPointIndex;
      if ( v34->m_particleCountRunning != (_DWORD)numPointsRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2497, ASSERT_TYPE_ASSERT, "(pTrailParticleData->GetParticleCountRunning() == numPoints)", (const char *)&queryFormat, "pTrailParticleData->GetParticleCountRunning() == numPoints") )
        __debugbreak();
      if ( !v34->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 347, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v198 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_LIFE);
      if ( !v34->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 346, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v37 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_SPAWN_TIME);
      v12 = v34->m_pParticleData == NULL;
      v38 = v37;
      v214 = v37;
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v206 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_RANDOM_SEED);
      if ( !v34->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 343, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v199 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_COLOR);
      if ( !v34->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v39 = (float4 *)ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_SIZE);
      v12 = v34->m_pParticleData == NULL;
      sizeArray = v39;
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 342, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v40 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_VELOCITY);
      v12 = v34->m_pParticleData == NULL;
      v227 = v40;
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      positionArray = (float4 *)ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_POSITION);
      if ( !v34->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 357, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v41 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_EMISSIVE);
      v12 = v34->m_pParticleData == NULL;
      v239 = v41;
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 359, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v201 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_INTENSITY);
      v42 = v201;
      if ( ParticleData::HasParticleDataArray(v34, PARTICLE_DATA_TEMPERATURE) )
      {
        if ( !v34->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 360, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
          __debugbreak();
        v43 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_TEMPERATURE);
      }
      else
      {
        v43 = NULL;
      }
      v12 = v34->m_pParticleData == NULL;
      v44 = (unsigned __int64)v43;
      point.v.m128_u64[0] = (unsigned __int64)v43;
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v210 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_SPAWN_QUAT);
      if ( !v34->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v45 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_ATLAS_INDEX);
      v12 = v34->m_pParticleData == NULL;
      v220 = (float *)v45;
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 366, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v46 = ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_VECTOR_FIELD_SCALE);
      if ( !v34->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 361, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      cameraDistanceArray = (float *)ParticleData::GetParticleDataArray(v34, PARTICLE_DATA_CAMERA_DISTANCE);
      v47 = (float)((float)(1.0 - fx_randomTable[*(int *)&v221[4 * v205] + 18]) * *(float *)&min_low) + (float)(*(float *)&max_low * fx_randomTable[*(int *)&v221[4 * v205] + 18]);
      if ( (_DWORD)numPointsRunning )
      {
        v48 = numPointsRunning;
        do
        {
          v49 = m_emitterLife_low;
          *(float *)&v49 = (float)(*(float *)&m_emitterLife_low - *(float *)&v38[4 * firstPointIndex]) * (float)(1.0 / v47);
          _XMM1 = v49;
          __asm { vminss  xmm2, xmm1, xmm10 }
          *(float *)&v198[4 * firstPointIndex] = *(float *)&_XMM2;
          if ( firstPointIndex >= rTrailData->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
            __debugbreak();
          v52 = rTrailData->numPointsMax;
          firstPointIndex = (firstPointIndex + 1) % v52;
          --v48;
        }
        while ( v48 );
        v44 = point.v.m128_u64[0];
        v42 = v201;
        v53 = rTrailData;
      }
      else
      {
        v53 = rTrailData;
        v52 = rTrailData->numPointsMax;
      }
      if ( v53->numPointsRunning == v52 )
        v54 = (v53->lastPointIndex + 1) % v52;
      else
        v54 = v53->firstPointIndex;
      if ( (unsigned int)numPointsRunning > 1 )
      {
        v55 = (unsigned int)(numPointsRunning - 1);
        do
        {
          if ( v54 >= v53->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
            __debugbreak();
          v56 = rTrailData;
          v57 = (v54 + 1) % rTrailData->numPointsMax;
          if ( *(float *)&v198[4 * v57] < 1.0 )
          {
            v53 = rTrailData;
          }
          else
          {
            if ( !rTrailData->numPointsRunning )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3672, ASSERT_TYPE_ASSERT, "(numPointsRunning > 0)", (const char *)&queryFormat, "numPointsRunning > 0") )
                __debugbreak();
              v56 = rTrailData;
            }
            if ( v54 >= v56->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
              __debugbreak();
            v53 = rTrailData;
            v58 = (v54 + 1) % rTrailData->numPointsMax;
            v59 = rTrailData->pParticleData;
            --rTrailData->numPointsRunning;
            rTrailData->firstPointIndex = v58;
            if ( !v59->m_particleCountRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 208, ASSERT_TYPE_ASSERT, "(particleCount <= GetParticleCountRunning())", (const char *)&queryFormat, "particleCount <= GetParticleCountRunning()") )
              __debugbreak();
            --v59->m_particleCountRunning;
          }
          v54 = v57;
          --v55;
        }
        while ( v55 );
        v44 = point.v.m128_u64[0];
        v42 = v201;
      }
      if ( (_DWORD)numPointsRunning && *(float *)&v198[4 * v54] >= 1.0 )
      {
        if ( !v53->numPointsRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3672, ASSERT_TYPE_ASSERT, "(numPointsRunning > 0)", (const char *)&queryFormat, "numPointsRunning > 0") )
          __debugbreak();
        if ( v54 >= v53->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
          __debugbreak();
        --v53->numPointsRunning;
        v60 = v54 + 1;
        v61 = v53->pParticleData;
        v53->firstPointIndex = v60 % v53->numPointsMax;
        if ( !v61->m_particleCountRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 208, ASSERT_TYPE_ASSERT, "(particleCount <= GetParticleCountRunning())", (const char *)&queryFormat, "particleCount <= GetParticleCountRunning()") )
          __debugbreak();
        --v61->m_particleCountRunning;
      }
      v202 = v53->numPointsRunning;
      if ( pParticleDataa->m_particleCountRunning != v202 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2547, ASSERT_TYPE_ASSERT, "(pTrailParticleData->GetParticleCountRunning() == numPoints)", (const char *)&queryFormat, "pTrailParticleData->GetParticleCountRunning() == numPoints") )
        __debugbreak();
      if ( v209 )
        goto LABEL_189;
      lastPointIndex = v53->lastPointIndex;
      m_pModuleInitRelativeVelocity = this->m_pModuleInitRelativeVelocity;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        v65 = v224[v205].v;
      }
      else
      {
        v64 = v224[v205].v;
        v65 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v64, v64, 0), EmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v64, v64, 85), EmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v64, v64, 170), EmitterTransform->z.v), EmitterTransform->w.v)));
      }
      v66 = this->m_pStateDef;
      point.v = v65;
      if ( (v66->flags & 0x10000000) != 0 )
      {
        v65 = _mm128_add_ps(v65, ParticleEmitter::GetSystemOwner(pEmitterOwner)->m_systemTransform.w.v);
        point.v = v65;
      }
      v67 = v214;
      v68 = lastPointIndex;
      *(float *)&v214[4 * lastPointIndex] = *(float *)&m_emitterLife_low;
      if ( !Particle_TrailData::AddPoint(rTrailData, &point) )
        break;
      v69 = rTrailData;
      if ( v202 < rTrailData->numPointsMax )
      {
        if ( pParticleDataa->m_particleCountRunning + 1 > pParticleDataa->m_particleCountMax )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 202, ASSERT_TYPE_ASSERT, "(GetParticleCountRunning() + particleCount <= m_particleCountMax)", (const char *)&queryFormat, "GetParticleCountRunning() + particleCount <= m_particleCountMax") )
            __debugbreak();
          v69 = rTrailData;
        }
        ++pParticleDataa->m_particleCountRunning;
        ++v202;
      }
      v70 = v69->lastPointIndex;
      v71 = v70;
      v72 = positionArray;
      positionArray[v71] = (float4)v65;
      *(_DWORD *)&v198[4 * v70] = 0;
      v73 = (__int64)v221;
      *(float *)&v67[4 * v70] = *(float *)&m_emitterLife_low;
      v74 = sizeArray;
      *(_DWORD *)&v206[4 * v70] = *(_DWORD *)(v73 + 4 * v205);
      *(_OWORD *)&v199[4 * v71] = *(_OWORD *)&v235[16 * v205];
      v75 = (__int64)v237;
      v74[v71] = *(float4 *)&v236[16 * v205];
      *(_OWORD *)&v227[4 * v71] = *(_OWORD *)(v75 + 16 * v205);
      *(_OWORD *)&v239[4 * v71] = *(_OWORD *)&v238[16 * v205];
      *(_DWORD *)&v42[4 * v70] = *(_DWORD *)&v240[4 * v205];
      if ( v44 )
      {
        if ( v222 )
          v76 = *(float *)&v222[4 * v205];
        else
          v76 = FLOAT_1_0;
        *(float *)(v44 + 4 * v70) = v76;
      }
      v77 = 0i64;
      *(_DWORD *)&v46[4 * v70] = *(_DWORD *)&v241[4 * v205];
      pParticleState = this;
      v220[v70] = 0.0;
      v79 = cameraDistanceArray;
      v80 = (__int64)pointList;
      cameraDistanceArray[v70] = *(float *)&v242[4 * v205];
      *(_OWORD *)(v80 + 80 * v70 + 48) = 0i64;
      if ( (this->m_pStateDef->flags & 0x800000000i64) != 0 )
      {
        *(double *)v77.m128_u64 = ParticleEmitter::GetScaleFactorByCameraDistance(pEmitterOwner, this->m_pModuleScaleByDistance, v79[v70], *(_DWORD *)&v206[4 * v70]);
        v72 = positionArray;
        v74[v71].v = _mm128_mul_ps(_mm_shuffle_ps(v77, v77, 0), v74[v71].v);
      }
      if ( m_flags )
      {
        v81 = _mm128_sub_ps(v72[v71].v, v72[v68].v);
        if ( _mm_shuffle_ps(v81, v81, 255).m128_f32[0] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 301, ASSERT_TYPE_ASSERT, "(Float4ExtractW( lookAtInput ) == 0.0f)", "%s\n\t%g %g %g %g", "Float4ExtractW( lookAtInput ) == 0.0f", v81.m128_f32[0], _mm_shuffle_ps(v81, v81, 85).m128_f32[0], _mm_shuffle_ps(v81, v81, 170).m128_f32[0], _mm_shuffle_ps(v81, v81, 255).m128_f32[0]) )
          __debugbreak();
        _XMM0 = g_negativeZero.v;
        _XMM1 = g_equalsEpsilon.v;
        __asm
        {
          vandnps xmm2, xmm0, xmm6
          vcmpltps xmm0, xmm1, xmm2
          vmovmskps eax, xmm0
        }
        if ( (_EAX & 0xF) != 0 )
        {
          _XMM0 = _mm128_mul_ps(v81, v81);
          __asm
          {
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
          }
          v94 = _mm128_div_ps(v81, _mm_sqrt_ps(_XMM0));
          _XMM0 = _mm128_mul_ps(v94, (__m128)_xmm);
          __asm
          {
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
          }
          if ( *(float *)&_XMM0 <= 0.99900001 )
          {
            if ( *(float *)&_XMM0 >= -0.99900001 )
            {
              v100 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 210), _mm_shuffle_ps(v94, v94, 201)), _mm128_mul_ps(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 201), _mm_shuffle_ps(v94, v94, 210)));
              _XMM1 = _mm128_mul_ps(v100, v100);
              __asm
              {
                vinsertps xmm0, xmm1, xmm1, 8
                vhaddps xmm2, xmm0, xmm0
                vhaddps xmm0, xmm2, xmm2
              }
              v99 = _mm128_div_ps(v100, _mm_sqrt_ps(_XMM0));
            }
            else
            {
              v99 = (__m128)_xmm;
            }
          }
          else
          {
            v99 = (__m128)_xmm;
          }
          v251.v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v99, v99, 201), _mm_shuffle_ps(v94, v94, 210)), _mm128_mul_ps(_mm_shuffle_ps(v99, v99, 210), _mm_shuffle_ps(v94, v94, 201)));
          normal.v = v99;
          v250.v = v94;
          Particle_AssertFloat4IsNormalized(&normal);
          Particle_AssertFloat4IsNormalized(&v250);
          Particle_AssertFloat4IsNormalized(&v251);
          _XMM3 = v251.v;
          _XMM2 = v250.v;
          _XMM1 = normal.v;
        }
        else
        {
          _XMM1 = (__m128)identityMatrix44.m[0];
          _XMM2 = (__m128)identityMatrix44.m[1];
          _XMM3 = (__m128)identityMatrix44.m[2];
        }
        normal.v.m128_f32[0] = _XMM1.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbp+230h+normal.v+4], xmm1, 1
          vextractps dword ptr [rbp+230h+normal.v+8], xmm1, 2
        }
        normal.v.m128_f32[3] = _XMM2.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbp+230h+var_110.v], xmm2, 1
          vextractps dword ptr [rbp+230h+var_110.v+4], xmm2, 2
        }
        v250.v.m128_f32[2] = _XMM3.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbp+230h+var_110.v+0Ch], xmm3, 1
          vextractps dword ptr [rbp+230h+var_100.v], xmm3, 2
        }
        AxisToQuat((const tmat33_t<vec3_t> *)&normal, (vec4_t *)&quat);
        v105 = (float)((float)((float)(quat.v.m128_f32[0] * quat.v.m128_f32[0]) + (float)(quat.v.m128_f32[1] * quat.v.m128_f32[1])) + (float)(quat.v.m128_f32[2] * quat.v.m128_f32[2])) + (float)(quat.v.m128_f32[3] * quat.v.m128_f32[3]);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v105 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 272, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", quat.v.m128_f32[0], quat.v.m128_f32[1], quat.v.m128_f32[2], quat.v.m128_f32[3], fsqrt(v105)) )
          __debugbreak();
        v53 = rTrailData;
        *(float4 *)&v210[4 * v71] = (float4)quat.v;
      }
      else
      {
        v53 = rTrailData;
        *(__m128 *)&v210[4 * v71] = v;
      }
LABEL_190:
      if ( v53->numPointsRunning != v202 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2621, ASSERT_TYPE_ASSERT, "(trailDataCurr.numPointsRunning == numPoints)", (const char *)&queryFormat, "trailDataCurr.numPointsRunning == numPoints") )
        __debugbreak();
      if ( v202 )
      {
        v106 = pParticleDataa;
        v107 = 0;
        v108 = 0;
        v200 = 0;
        v189 = 0;
        v109 = rTrailData->numPointsRunning;
        m_particleCountMax = pParticleDataa->m_particleCountMax;
        if ( v109 == m_particleCountMax )
        {
          v111 = 0;
          particleOffset = 0;
          goto LABEL_196;
        }
        v138 = rTrailData->numPointsMax;
        if ( v109 == v138 )
          v111 = (rTrailData->lastPointIndex + 1) % v138;
        else
          v111 = rTrailData->firstPointIndex;
        particleOffset = v111;
        v139 = v111 + v109 - m_particleCountMax;
        if ( v139 <= 0 )
        {
LABEL_196:
          particleCount = rTrailData->numPointsRunning;
          v112 = particleCount;
        }
        else
        {
          v112 = m_particleCountMax - v111;
          v200 = v139;
          v108 = v139;
          particleCount = v112;
          v107 = 1;
          v189 = 1;
          if ( (_DWORD)v112 + v139 != v109 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 2649, ASSERT_TYPE_ASSERT, "(particleCount1 + particleCount2 == trailDataCurr.numPointsRunning)", (const char *)&queryFormat, "particleCount1 + particleCount2 == trailDataCurr.numPointsRunning") )
            __debugbreak();
        }
        if ( pModuleBase )
        {
          ParticleModuleColorGraph::Update(pModuleBase, pParticleDataa, v111, v112, v7, pEmitterOwner, pParticleState);
          if ( v107 )
            ParticleModuleColorGraph::Update(pModuleBase, pParticleDataa, 0, v108, v7, pEmitterOwner, pParticleState);
        }
        if ( v219 )
        {
          m_localClientNum = pEmitterOwner->m_pSystemOwner->m_localClientNum;
          point.v.m128_i32[0] = m_localClientNum;
          v114 = (ParticleData *)ParticleManager::ParticleSystemAllocAndClear((LocalClientNum_t)m_localClientNum, 0x70ui64);
          if ( v114 )
          {
            v115 = (__int64)v243;
            if ( v243->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particledb.h", 2954, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
              __debugbreak();
            v116 = *(_DWORD *)(v115 + 144);
            if ( v114->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 154, ASSERT_TYPE_ASSERT, "(!m_pParticleData)", (const char *)&queryFormat, "!m_pParticleData") )
              __debugbreak();
            if ( v116 == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 156, ASSERT_TYPE_ASSERT, "(dataFlags != static_cast<ParticleDataFlags>( 0 ))", (const char *)&queryFormat, "dataFlags != static_cast<ParticleDataFlags>( 0 )") )
              __debugbreak();
            if ( (m_localClientNum < 0 || (unsigned int)m_localClientNum > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum LocalClientNum_t>(enum LocalClientNum_t)", "unsigned", (unsigned __int8)m_localClientNum, "signed", m_localClientNum) )
              __debugbreak();
            v114->m_localClientNum = m_localClientNum;
            *(_QWORD *)&v114->m_particleCountRunning = 0i64;
            v114->m_particleCountMax = 1;
            v114->m_dataFlags = v116;
            SingleParticleSize = Particle_GetSingleParticleSize(v116);
            v118 = truncate_cast<unsigned short,unsigned int>(SingleParticleSize);
            v119 = v114->m_localClientNum;
            v120 = v114->m_particleCountMax;
            v114->m_particleSize = v118;
            v114->m_pParticleData = Particle_AllocateBlock(v119, v118, v120);
            v114->m_pEmitter = pEmitterOwner;
            v114->m_pEmitterPadding = NULL;
            *(_QWORD *)v114->m_pad = 0i64;
            ParticleData::BuildParticleOffsetTable(v114);
            if ( v114->m_pParticleData )
            {
              v121 = ParticleData::GetParticleDataArray(v114, PARTICLE_DATA_LIFE);
              v12 = v114->m_pParticleData == NULL;
              v214 = v121;
              if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
                __debugbreak();
              v122 = ParticleData::GetParticleDataArray(v114, PARTICLE_DATA_RANDOM_SEED);
              if ( !v114->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
                __debugbreak();
              v123 = ParticleData::GetParticleDataArray(v114, PARTICLE_DATA_POSITION);
              if ( v111 < (unsigned int)v112 + v111 )
              {
                v124 = &v206[4 * v111];
                p_offset = (__int64)&pointList[v111].offset;
                do
                {
                  *(_DWORD *)v214 = *(_DWORD *)&v124[v198 - v206];
                  v126 = v219;
                  *(_DWORD *)v122 = *(_DWORD *)v124;
                  ParticleModulePositionGraph::Update(v126, v114, 0, 1u, v7, pEmitterOwner, this);
                  p_offset += 80i64;
                  v124 += 4;
                  *(_OWORD *)(p_offset - 80) = *(_OWORD *)v123;
                  --v112;
                }
                while ( v112 );
              }
              if ( v189 && v200 )
              {
                v127 = v200;
                v128 = v206;
                v129 = &pointList->offset;
                do
                {
                  *(_DWORD *)v214 = *(_DWORD *)&v128[v198 - v206];
                  v130 = v219;
                  *(_DWORD *)v122 = *(_DWORD *)v128;
                  ParticleModulePositionGraph::Update(v130, v114, 0, 1u, v7, pEmitterOwner, this);
                  v129 += 5;
                  v128 += 4;
                  v129[-5] = *(float4 *)v123;
                  --v127;
                }
                while ( v127 );
              }
              v131 = v114->m_localClientNum;
              m_pParticleData = v114->m_pParticleData;
              *(_QWORD *)&v114->m_particleCountRunning = 0i64;
              Particle_ReleaseBlock(v131, m_pParticleData);
              v114->m_pParticleData = NULL;
              *(_QWORD *)&v114->m_particleCountRunning = 0i64;
              v114->m_particleCountMax = 0;
              v114->m_pEmitter = NULL;
              v114->m_pEmitterPadding = NULL;
              v114->m_particleSize = 0;
              v114->m_dataFlags = USE_NONE;
              ParticleData::DestroyParticleOffsetTable(v114);
              ParticleManager::ParticleSystemFree((LocalClientNum_t)point.v.m128_i32[0], v114);
              v106 = pParticleDataa;
              goto LABEL_230;
            }
            ParticleManager::ParticleSystemFree((LocalClientNum_t)m_localClientNum, v114);
          }
          v133 = this;
          VFXName = ParticleState::GetVFXName(this);
          Com_PrintWarning(21, "Could not allocate dynamic data for a geo trail's position graph in effect: %s\n", VFXName);
        }
        else
        {
LABEL_230:
          v133 = this;
        }
        v134 = particleCount;
        v135 = particleOffset;
        if ( v225 )
        {
          ParticleModuleSizeGraph::Update(v225, v106, particleOffset, particleCount, v7, pEmitterOwner, v133);
          v136 = v189;
          v137 = v200;
          if ( v189 )
            ParticleModuleSizeGraph::Update(v225, v106, 0, v200, v7, pEmitterOwner, v133);
        }
        else
        {
          v137 = v200;
          v136 = v189;
        }
        if ( v226 )
        {
          ParticleModuleVelocityGraph::Update(v226, v106, particleOffset, particleCount, v7, pEmitterOwner, v133);
          if ( v136 )
            ParticleModuleVelocityGraph::Update(v226, v106, 0, v137, v7, pEmitterOwner, v133);
          v141 = rTrailData->numPointsMax;
          if ( rTrailData->numPointsRunning == v141 )
            v142 = (rTrailData->lastPointIndex + 1) % v141;
          else
            v142 = rTrailData->firstPointIndex;
          v143 = v210;
          v144 = (__int64)v227;
          v145 = v202;
          do
          {
            v146 = v142;
            v147 = *(__m128 *)&v143[16 * v142];
            v148 = *(__m128 *)(v144 + 16i64 * v142);
            v149 = _mm_shuffle_ps(v147, v147, 210);
            v150 = _mm_shuffle_ps(v147, v147, 201);
            v151 = _mm_shuffle_ps(v147, v147, 255);
            v152 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v148, v148, 210), v150), _mm128_mul_ps(_mm_shuffle_ps(v148, v148, 201), v149));
            v153 = _mm128_add_ps(v152, v152);
            v154 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v153, v153, 210), v150), _mm128_mul_ps(_mm_shuffle_ps(v153, v153, 201), v149)), _mm128_add_ps(_mm128_mul_ps(v151, v153), v148));
            *(__m128 *)(v144 + 4 * v146) = v154;
            positionArray[v146].v = _mm128_add_ps(_mm128_mul_ps(v29, v154), positionArray[v142].v);
            if ( v142 >= rTrailData->numPointsMax )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
                __debugbreak();
              v143 = v210;
            }
            v142 = (v142 + 1) % rTrailData->numPointsMax;
            --v145;
          }
          while ( v145 );
          max_low = v215;
          v134 = particleCount;
          v135 = particleOffset;
          v137 = v200;
          v136 = v189;
          v106 = pParticleDataa;
        }
        v53 = rTrailData;
        v155 = this;
        if ( v228 )
        {
          ParticleModuleEmissiveGraph::Update(v228, v106, v135, v134, v7, pEmitterOwner, this);
          if ( v136 )
            ParticleModuleEmissiveGraph::Update(v228, v106, 0, v137, v7, pEmitterOwner, this);
        }
        if ( v229 )
        {
          ParticleModuleIntensityGraph::Update(v229, v106, v135, v134, v7, pEmitterOwner, this);
          if ( v136 )
            ParticleModuleIntensityGraph::Update(v229, v106, 0, v137, v7, pEmitterOwner, this);
        }
        if ( v230 )
        {
          ParticleModuleTemperatureGraph::Update(v230, v106, v135, v134, v7, pEmitterOwner, this);
          if ( v136 )
            ParticleModuleTemperatureGraph::Update(v230, v106, 0, v137, v7, pEmitterOwner, this);
        }
        if ( v231 )
        {
          ParticleModuleVectorFieldGraph::Update(v231, v106, v135, v134, v7, pEmitterOwner, this);
          if ( v136 )
            ParticleModuleVectorFieldGraph::Update(v231, v106, 0, v137, v7, pEmitterOwner, this);
        }
        if ( v193 )
        {
          if ( v135 < v134 + v135 )
          {
            v156 = (unsigned __int8 *)(v206 - (unsigned __int8 *)v220);
            v157 = v134;
            v158 = &v220[v135];
            do
            {
              v159 = *(int *)&v156[(_QWORD)v158];
              if ( !m_pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3493, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
                __debugbreak();
              _XMM0 = v155->m_atlasData.behavior & 0x20;
              v161 = m_pModuleInitAtlas;
              __asm
              {
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm0, xmm11, xmm6, xmm2
              }
              particleOffseta = *(float *)&_XMM0;
              if ( !m_pModuleInitAtlas )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3477, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
                  __debugbreak();
                v161 = NULL;
              }
              if ( (v161->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3478, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas->IsEnabled())", (const char *)&queryFormat, "pModuleInitAtlas->IsEnabled()") )
                __debugbreak();
              m_curves = m_pModuleInitAtlas->m_curves;
              if ( (m_pModuleInitAtlas->m_flags & 0x10) != 0 )
              {
                CurveValue = Particle_GetCurveValue(m_curves, *(const float *)&_XMM0);
                v166 = *(float *)&CurveValue * m_pModuleInitAtlas->m_curves[0].scale;
                v167 = Particle_GetCurveValue(&m_pModuleInitAtlas->m_curves[1], particleOffseta);
                v155 = this;
                v168 = (float)((float)(1.0 - fx_randomTable[v159 + 47]) * v166) + (float)(fx_randomTable[v159 + 47] * (float)(*(float *)&v167 * m_pModuleInitAtlas->m_curves[1].scale));
              }
              else
              {
                v169 = Particle_GetCurveValue(m_curves, *(const float *)&_XMM0);
                v168 = *(float *)&v169 * m_pModuleInitAtlas->m_curves[0].scale;
              }
              if ( (v155->m_atlasData.behavior & 4) != 0 )
                v170 = (float)v155->m_atlasData.entryCount * v168;
              else
                v170 = (float)(v7 * v168) + *v158;
              *v158 = v170;
              if ( (v155->m_atlasData.behavior & 8) != 0 )
              {
                entryCount = v155->m_atlasData.entryCount;
                if ( v170 >= (float)(entryCount * v155->m_atlasData.loopCount - 1) )
                  *v158 = (float)(entryCount - 1);
              }
              ++v158;
              --v157;
            }
            while ( v157 );
          }
          if ( v189 && v200 )
          {
            v172 = v220;
            v173 = v200;
            v174 = (unsigned __int8 *)(v206 - (unsigned __int8 *)v220);
            v207 = (unsigned __int8 *)(v206 - (unsigned __int8 *)v220);
            do
            {
              v175 = *(int *)&v174[(_QWORD)v172];
              if ( !m_pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3493, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
                __debugbreak();
              _XMM0 = v155->m_atlasData.behavior & 0x20;
              __asm
              {
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm0, xmm11, xmm6, xmm2
              }
              particleOffsetb = *(float *)&_XMM0;
              if ( !m_pModuleInitAtlas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3477, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas)", (const char *)&queryFormat, "pModuleInitAtlas") )
                __debugbreak();
              if ( (m_pModuleInitAtlas->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3478, ASSERT_TYPE_ASSERT, "(pModuleInitAtlas->IsEnabled())", (const char *)&queryFormat, "pModuleInitAtlas->IsEnabled()") )
                __debugbreak();
              v179 = m_pModuleInitAtlas->m_curves;
              if ( (m_pModuleInitAtlas->m_flags & 0x10) != 0 )
              {
                v180 = Particle_GetCurveValue(v179, *(const float *)&_XMM0);
                v181 = *(float *)&v180 * m_pModuleInitAtlas->m_curves[0].scale;
                v182 = Particle_GetCurveValue(&m_pModuleInitAtlas->m_curves[1], particleOffsetb);
                v155 = this;
                v183 = (float)((float)(1.0 - fx_randomTable[v175 + 47]) * v181) + (float)(fx_randomTable[v175 + 47] * (float)(*(float *)&v182 * m_pModuleInitAtlas->m_curves[1].scale));
              }
              else
              {
                v184 = Particle_GetCurveValue(v179, *(const float *)&_XMM0);
                v183 = *(float *)&v184 * m_pModuleInitAtlas->m_curves[0].scale;
              }
              if ( (v155->m_atlasData.behavior & 4) != 0 )
                v185 = (float)v155->m_atlasData.entryCount * v183;
              else
                v185 = (float)(v183 * v7) + *v172;
              *v172 = v185;
              if ( (v155->m_atlasData.behavior & 8) != 0 )
              {
                v186 = v155->m_atlasData.entryCount;
                if ( v185 >= (float)(v186 * v155->m_atlasData.loopCount - 1) )
                  *v172 = (float)(v186 - 1);
              }
              ++v172;
              v174 = v207;
              --v173;
            }
            while ( v173 );
          }
          v53 = rTrailData;
        }
      }
      if ( v202 <= 1 )
      {
        if ( !v202 && v209 )
        {
          v187 = v205;
          *(_DWORD *)&v246[4 * v205] |= 1u;
          goto LABEL_318;
        }
      }
      else
      {
        ParticleState::Update_GeoTrailTangentsAndCameraDist(this, pEmitterOwner, v53, sizeArray, positionArray, cameraDistanceArray, pCameraa, BYTE2(v244.pModule[6].m_flags));
      }
      v187 = v205;
LABEL_318:
      v30 = v187 + 1;
      min_low = v217;
      v10 = TrailDataList;
      v188 = ++v208 < v216;
      v205 = v30;
      if ( !v188 )
        return;
    }
    v53 = rTrailData;
    positionArray[lastPointIndex] = (float4)v65;
    *(_DWORD *)&v198[4 * lastPointIndex] = 0;
    *(float *)&v67[4 * lastPointIndex] = *(float *)&m_emitterLife_low;
LABEL_189:
    pParticleState = this;
    goto LABEL_190;
  }
}

/*
==============
ParticleState::Update_RunnerChildTransform
==============
*/
void ParticleState::Update_RunnerChildTransform(ParticleState *this, ParticleSystem *pChildSystem, const ParticleEmitter *pEmitterOwner, const float4 *position, const float4 *velocity, const float4 *rotationAngle, bool hasRotation, const vector4 *rEmitterTransform, ParticleUseOrientationOptions useOrientationOptions, bool useLegacyOrientationOptions)
{
  __m128 v; 
  float4 v11; 
  float4 v12; 
  unsigned __int64 v17; 
  ParticleUseOrientationOptions v18; 
  __m128 v19; 
  const float4 *v20; 
  vector3 *v21; 
  __m128 v22; 
  const vector4 *v23; 
  float4 v24; 
  vector4 M1; 
  vector4 result; 

  if ( !pChildSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3245, ASSERT_TYPE_ASSERT, "(pChildSystem)", (const char *)&queryFormat, "pChildSystem") )
    __debugbreak();
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3246, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  v17 = (unsigned __int8)useOrientationOptions;
  if ( useLegacyOrientationOptions && hasRotation )
  {
    v18 = useOrientationOptions;
    if ( useOrientationOptions )
      v18 = PARTICLE_USE_ORIENTATION_OPTION_ROTATION;
    v17 = (unsigned __int8)v18;
  }
  switch ( (char)v17 )
  {
    case 1:
      M1.x = (float4)g_1000.v;
      M1.y = (float4)g_0100.v;
      v = g_0001.v;
      M1.z = (float4)g_0010.v;
      M1.w = (float4)g_0001.v;
      goto LABEL_15;
    case 2:
      result = *rEmitterTransform;
      M1 = result;
LABEL_15:
      if ( hasRotation )
      {
        v19 = rotationAngle->v;
        Float4RadianToQuat((float4 *)v17, (const float4 *)hasRotation);
        Float4UnitQuatToAxis(v21, v20);
        result.x.v = v19;
        v22 = g_unit.v;
        result.y.v = v;
        result.w = (float4)g_unit.v;
        result.z = (float4)v11.v;
        Float4x4Mul(&result, &M1, v23);
        result.z = (float4)v11.v;
        result.x.v = v22;
        result.w = (float4)v12.v;
        result.y.v = v;
        M1 = result;
      }
      break;
    case 3:
      Particle_GenerateMatrixFromLookAt(velocity, &M1);
      break;
    case 4:
      Particle_GenerateMatrixFromLookAt(velocity, &M1);
      v24.v = _mm128_sub_ps((__m128)0i64, M1.x.v);
      M1.x = M1.y;
      goto LABEL_19;
    case 5:
      Particle_GenerateMatrixFromLookAt(velocity, &M1);
      v24.v = _mm128_sub_ps((__m128)0i64, M1.z.v);
      M1.z = M1.y;
LABEL_19:
      M1.y = (float4)v24.v;
      Particle_AssertFloat4IsNormalized(&M1.x);
      Particle_AssertFloat4IsNormalized(&M1.y);
      Particle_AssertFloat4IsNormalized(&M1.z);
      break;
    case 6:
      result = *rEmitterTransform;
      M1 = result;
      break;
    default:
      M1.x = (float4)g_1000.v;
      M1.y = (float4)g_0100.v;
      M1.z = (float4)g_0010.v;
      M1.w = (float4)g_0001.v;
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
void ParticleState::Update_Runners(ParticleState *this, float dt, int currentTime, const ParticleEmitter *pEmitterOwner, const FxCamera *pCamera, ParticleData *pParticleData, unsigned int numParticles, const float4 *positionArray, const float4 *sizeArray, const float4 *velocityArray, const float4 *rotationAngleArray, bool hasRotation, const vector4 *rEmitterTransform)
{
  unsigned int v15; 
  ParticleState::ElementTypeModule v16; 
  ParticleSystemHandle *v17; 
  unsigned int *v18; 
  const ParticleSystem *SystemOwner; 
  const dvar_t *v20; 
  ParticleSystem *v21; 
  __int64 m_localClientNum; 
  ParticleState *v23; 
  __int64 v24; 
  unsigned int v25; 
  ParticleState::ElementTypeModule v26; 
  ParticleManager *v27; 
  unsigned __int8 v28; 
  __int64 v29; 
  const float4 *v30; 
  const ParticleModifier *velocityMod; 
  const ParticleModifier *v32; 
  ParticleSystemHandle *v33; 
  __int64 v34; 
  unsigned __int64 v35; 
  unsigned int v36; 
  ParticleSystem *v37; 
  unsigned __int64 v38; 
  const float4 *v39; 
  __int64 v40; 
  const float4 *v41; 
  signed __int64 v42; 
  unsigned int v43; 
  __int64 v44; 
  ParticleSystem *v45; 
  ParticleSystemFlags v46; 
  __int64 v47; 
  signed __int64 v48; 
  __int64 v49; 
  unsigned int v50; 
  ParticleSystem *v51; 
  __int64 v52; 
  ParticleSystemFlags m_flags; 
  ParticleModifier *scaleMod; 
  int preRollDeltaTime; 
  unsigned int *FlagsArray; 
  ParticleSystemHandle *ChildSystemArray; 
  __int64 v58; 
  char v60; 
  ParticleData *pParticleDataa; 
  ParticleUseOrientationOptions numParticlesa; 

  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3114, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3115, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.cpp", 3116, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  v15 = numParticles;
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
  v16.pModule = (const ParticleModule *)this->m_elementTypeModule;
  ChildSystemArray = Particle_GetChildSystemArray(pParticleData);
  v17 = ChildSystemArray;
  FlagsArray = Particle_GetFlagsArray(pParticleData);
  v18 = FlagsArray;
  SystemOwner = ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
  v20 = particle_parent_updates_child;
  v21 = (ParticleSystem *)SystemOwner;
  if ( !particle_parent_updates_child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled || (v60 = 0, (ParticleSystem::GetDef(v21)->flags & 0x80000) != 0) )
    v60 = 1;
  m_localClientNum = v21->m_localClientNum;
  preRollDeltaTime = (int)(float)(dt * 1000.0);
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(scaleMod) = v21->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", scaleMod, 2) )
      __debugbreak();
  }
  v23 = this;
  v24 = m_localClientNum;
  v25 = 0;
  v26.pModule = (const ParticleModule *)this->m_elementTypeModule;
  v27 = &g_particleManager[v24];
  v28 = pParticleData->m_localClientNum;
  pParticleDataa = (ParticleData *)v27;
  if ( HIBYTE(v26.pModule[12].m_type) || *((_BYTE *)&v26.pModule[12].m_type + 2) )
  {
    v29 = v28;
    v58 = v28;
    if ( numParticles )
    {
      v30 = sizeArray;
      velocityMod = (const ParticleModifier *)&v16.pModule[6];
      v32 = (const ParticleModifier *)&v16.pModule[2];
      v33 = ChildSystemArray;
      v34 = numParticles;
      v35 = (unsigned __int64)v28 << 12;
      do
      {
        v36 = 0;
        if ( g_particleSystemsGeneration[v35 + (*v33 & 0xFFF)].__all32 == *v33 )
          v36 = *v33 & 0xFFF;
        v37 = NULL;
        v38 = *((_QWORD *)&g_particleSystems[0][v35] + v36);
        if ( v38 >= 0x1000 )
          v37 = (ParticleSystem *)v38;
        ParticleState::UpdateModifiers(this, v21, v37, v30, (const float4 *)((char *)v30 + (char *)velocityArray - (char *)sizeArray), v32, velocityMod, SHIBYTE(v16.pModule[12].m_type), *((ParticleUseVelocityOptions *)&v16.pModule[12].m_type + 2));
        ++v30;
        ++v33;
        velocityMod = (const ParticleModifier *)&v16.pModule[6];
        v32 = (const ParticleModifier *)&v16.pModule[2];
        --v34;
      }
      while ( v34 );
      v18 = FlagsArray;
      v17 = ChildSystemArray;
      v25 = 0;
      v29 = v58;
      v15 = numParticles;
      v27 = (ParticleManager *)pParticleDataa;
      v23 = this;
    }
  }
  else
  {
    v29 = v28;
  }
  if ( !*((_BYTE *)&v16.pModule[12].m_type + 3) )
  {
    if ( !v15 )
      return;
    v47 = v29 << 12;
    v48 = (char *)v17 - (char *)v18;
    v49 = v15;
    while ( 1 )
    {
      v50 = 0;
      v51 = NULL;
      if ( g_particleSystemsGeneration[v47 + (*(unsigned int *)((char *)v18 + v48) & 0xFFF)].__all32 == *(unsigned int *)((char *)v18 + v48) )
        v50 = *(unsigned int *)((char *)v18 + v48) & 0xFFF;
      v52 = v47 + v50;
      if ( g_particleSystems[0][v52] >= (ParticleSystem *)0x1000 )
        v51 = g_particleSystems[0][v52];
      if ( v51 )
      {
        if ( v51->m_isRunning )
        {
          m_flags = v51->m_flags;
          if ( (m_flags & 0x30) == 0 && (BYTE2(m_flags) & 1) == 0 )
          {
            if ( v60 )
              ParticleSystem::Update(v51, currentTime, pCamera, preRollDeltaTime);
            goto LABEL_76;
          }
        }
        ParticleManager::AddDeferredChildRemoval(v27, v51, 0, 0, 0);
        *(unsigned int *)((char *)v18 + v48) = 0;
      }
      *v18 |= 1u;
LABEL_76:
      v27 = (ParticleManager *)pParticleDataa;
      ++v18;
      if ( !--v49 )
        return;
    }
  }
  numParticlesa = v16.pModule[12].m_type;
  if ( v15 )
  {
    v39 = velocityArray;
    v40 = v29 << 12;
    v41 = velocityArray;
    v42 = (char *)v17 - (char *)v18;
    do
    {
      v43 = 0;
      if ( g_particleSystemsGeneration[v40 + (*(unsigned int *)((char *)v18 + v42) & 0xFFF)].__all32 == *(unsigned int *)((char *)v18 + v42) )
        v43 = *(unsigned int *)((char *)v18 + v42) & 0xFFF;
      v44 = v40 + v43;
      v45 = NULL;
      if ( g_particleSystems[0][v44] >= (ParticleSystem *)0x1000 )
        v45 = g_particleSystems[0][v44];
      if ( v45 )
      {
        if ( v45->m_isRunning )
        {
          v46 = v45->m_flags;
          if ( (v46 & 0x30) == 0 && (BYTE2(v46) & 1) == 0 )
          {
            ParticleState::Update_RunnerChildTransform(v23, v45, pEmitterOwner, &positionArray[v25], &v39[v25], &rotationAngleArray[v25], hasRotation, rEmitterTransform, numParticlesa, HIBYTE(v16.pModule[12].m_flags));
            v45->m_parentVelocity = (float4)v41->v;
            if ( v60 )
              ParticleSystem::Update(v45, currentTime, pCamera, preRollDeltaTime);
            goto LABEL_60;
          }
        }
        ParticleManager::AddDeferredChildRemoval(v27, v45, 0, 0, 0);
        *(unsigned int *)((char *)v18 + v42) = 0;
      }
      *v18 |= 1u;
LABEL_60:
      v27 = (ParticleManager *)pParticleDataa;
      ++v25;
      v23 = this;
      ++v41;
      v39 = velocityArray;
      ++v18;
    }
    while ( v25 < v15 );
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
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 
  const float4 *v10; 
  __m128 *p_v; 
  __int64 v12; 
  signed __int64 v13; 
  signed __int64 v14; 
  float4 *m_pStateDef; 
  __int128 v16; 
  float v17; 
  int v23; 
  bool v24; 
  const float4 *v26; 
  vector3 *v27; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  ParticleRelativeVelocityType m_velocityType; 
  float4 *v30; 
  __m128 v31; 
  unsigned __int8 *m_vectorFieldList; 
  const vector4 *EmitterTransform; 
  ParticleEmitter *v35; 
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
  v35 = m_pEmitterOwner;
  PositionArray = Particle_GetPositionArray(pParticleData);
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 351, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  ParticleDataArray = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_ROTATION_ANGLE);
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v8 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_SIZE);
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 366, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v9 = ParticleData::GetParticleDataArray((ParticleData *)pParticleData, PARTICLE_DATA_VECTOR_FIELD_SCALE);
  EmitterTransform = ParticleEmitter::GetEmitterTransform(m_pEmitterOwner, this);
  p_v = &EmitterTransform->x.v;
  if ( (_DWORD)m_particleCountRunning )
  {
    v12 = 0i64;
    v13 = v8 - ParticleDataArray;
    v14 = (char *)PositionArray - (char *)ParticleDataArray;
    do
    {
      if ( this->m_vectorFieldList[v12] != 0xFF )
      {
        m_pStateDef = (float4 *)this->m_pStateDef;
        v16 = *(_OWORD *)&ParticleDataArray[v13];
        if ( (m_pStateDef[1].v.m128_u64[0] & 0x1000000000i64) != 0 )
          v17 = *(float *)v9;
        else
          v17 = FLOAT_1_0;
        _XMM0 = g_negativeZero.v;
        __asm { vandnps xmm2, xmm0, xmmword ptr [rbx] }
        _XMM1 = g_equalsEpsilon.v;
        __asm
        {
          vcmpltps xmm0, xmm1, xmm2
          vmovmskps eax, xmm0
        }
        v23 = _EAX & 0xF;
        v24 = v23 != 0;
        if ( v23 )
        {
          _XMM0 = *(_OWORD *)ParticleDataArray;
          Float4RadianToQuat(m_pStateDef, v10);
          Float4UnitQuatToAxis(v27, v26);
          m_pStateDef = (float4 *)this->m_pStateDef;
          p_v = &EmitterTransform->x.v;
          orient.axis.m[0].v[0] = *(float *)&_XMM0;
          __asm
          {
            vextractps dword ptr [rsp+0F8h+orient.axis+4], xmm0, 1
            vextractps dword ptr [rsp+0F8h+orient.axis+8], xmm0, 2
          }
          orient.axis.m[1].v[0] = _XMM1.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rsp+0F8h+orient.axis+10h], xmm1, 1
            vextractps dword ptr [rsp+0F8h+orient.axis+14h], xmm1, 2
          }
          orient.axis.m[2].v[0] = *(float *)&_XMM2;
          __asm
          {
            vextractps dword ptr [rsp+0F8h+orient.axis+1Ch], xmm2, 1
            vextractps dword ptr [rsp+0F8h+orient.axis+20h], xmm2, 2
          }
        }
        else
        {
          orient.axis = orIdentity.axis;
        }
        m_pModuleInitRelativeVelocity = this->m_pModuleInitRelativeVelocity;
        if ( m_pModuleInitRelativeVelocity && (m_pModuleInitRelativeVelocity->m_flags & 1) == 0 && ((m_velocityType = m_pModuleInitRelativeVelocity->m_velocityType, v30 = m_pStateDef, m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_COUNT) || m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN_WITH_BOLT_INFO) )
        {
          v31 = *(__m128 *)&ParticleDataArray[v14];
          _XMM6 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v31, v31, 0), *p_v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v31, v31, 85), p_v[1]), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v31, v31, 170), p_v[2]), p_v[3])));
        }
        else
        {
          _XMM6 = *(__m128 *)&ParticleDataArray[v14];
          v30 = m_pStateDef;
        }
        if ( (v30[1].v.m128_i32[0] & 0x10000000) != 0 )
          _XMM6 = _mm128_add_ps(_XMM6, ParticleEmitter::GetSystemOwner(v35)->m_systemTransform.w.v);
        m_vectorFieldList = this->m_vectorFieldList;
        orient.origin.v[0] = _XMM6.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rsp+0F8h+orient.origin+4], xmm6, 1
          vextractps dword ptr [rsp+0F8h+orient.origin+8], xmm6, 2
        }
        CG_VectorField_UpdateInstanceForFxWithHandle(m_vectorFieldList[v12], &orient, v17, *(float *)&v16, v24);
        p_v = &EmitterTransform->x.v;
      }
      ++v12;
      v9 += 4;
      ParticleDataArray += 16;
      --m_particleCountRunning;
    }
    while ( m_particleCountRunning );
  }
}

