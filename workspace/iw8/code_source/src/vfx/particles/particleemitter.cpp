/*
==============
ParticleEmitter::BatchUpdate
==============
*/

void __fastcall ParticleEmitter::BatchUpdate(ParticleEmitter *this, float dt, int currentTime, const FxCamera *pCamera)
{
  ?BatchUpdate@ParticleEmitter@@AEAAXMHPEBUFxCamera@@@Z(this, dt, currentTime, pCamera);
}

/*
==============
ParticleEmitter::DrawSetup_Tail
==============
*/

bool __fastcall ParticleEmitter::DrawSetup_Tail(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount, const ParticleModuleInitTail *pModuleInitTail, float4 *rOutTangent, float4 *rOutBitangent, float4 *rOutNormal, const float4 *rPos, const float4 *rVelocity, float cameraDistance, Particle_DrawData *r_particleDrawData)
{
  return ?DrawSetup_Tail@ParticleEmitter@@AEAA_NPEBUFxCamera@@IPEBUParticleModuleInitTail@@AEAUfloat4@@22AEBU4@3MAEAUParticle_DrawData@@@Z(this, pCamera, frustumPlaneCount, pModuleInitTail, rOutTangent, rOutBitangent, rOutNormal, rPos, rVelocity, cameraDistance, r_particleDrawData);
}

/*
==============
ParticleEmitter::GetBeamPos
==============
*/

void __fastcall ParticleEmitter::GetBeamPos(ParticleEmitter *this, const ParticleState *pParticleState, float4 *outStartPos, float4 *outEndPos)
{
  ?GetBeamPos@ParticleEmitter@@QEBAXPEBVParticleState@@AEAUfloat4@@1@Z(this, pParticleState, outStartPos, outEndPos);
}

/*
==============
ParticleEmitter::EmitParticles
==============
*/

void __fastcall ParticleEmitter::EmitParticles(ParticleEmitter *this, const unsigned int numParticles, const int currentTime, bool hasDelay, const FxCamera *pCamera)
{
  ?EmitParticles@ParticleEmitter@@AEAAXIH_NPEBUFxCamera@@@Z(this, numParticles, currentTime, hasDelay, pCamera);
}

/*
==============
ParticleEmitter::CopyParticleToAnotherState
==============
*/

void __fastcall ParticleEmitter::CopyParticleToAnotherState(ParticleEmitter *this, unsigned int stateIndexFrom, unsigned int particleIndexFrom, unsigned int stateIndexTo, unsigned int particleIndexTo)
{
  ?CopyParticleToAnotherState@ParticleEmitter@@AEAAXIIII@Z(this, stateIndexFrom, particleIndexFrom, stateIndexTo, particleIndexTo);
}

/*
==============
ParticleEmitter::FreeParticleData
==============
*/

void __fastcall ParticleEmitter::FreeParticleData(ParticleEmitter *this)
{
  ?FreeParticleData@ParticleEmitter@@AEAAXXZ(this);
}

/*
==============
ParticleEmitter::GetParticleState
==============
*/

const ParticleState *__fastcall ParticleEmitter::GetParticleState(ParticleEmitter *this, unsigned int stateIndex)
{
  return ?GetParticleState@ParticleEmitter@@QEBAPEBVParticleState@@I@Z(this, stateIndex);
}

/*
==============
ParticleEmitter::GetParticleStateNonConst
==============
*/

ParticleState *__fastcall ParticleEmitter::GetParticleStateNonConst(ParticleEmitter *this, unsigned int stateIndex)
{
  return ?GetParticleStateNonConst@ParticleEmitter@@QEBAPEAVParticleState@@I@Z(this, stateIndex);
}

/*
==============
ParticleEmitter::CalculateParticleCountMax
==============
*/

unsigned int __fastcall ParticleEmitter::CalculateParticleCountMax(ParticleEmitter *this)
{
  return ?CalculateParticleCountMax@ParticleEmitter@@AEAAIXZ(this);
}

/*
==============
ParticleEmitter::Update
==============
*/

void __fastcall ParticleEmitter::Update(ParticleEmitter *this, const float dt, const int currentTime, const FxCamera *pCamera)
{
  ?Update@ParticleEmitter@@QEAAXMHPEBUFxCamera@@@Z(this, dt, currentTime, pCamera);
}

/*
==============
ParticleEmitter::DrawSetup_Flare
==============
*/

bool __fastcall ParticleEmitter::DrawSetup_Flare(ParticleEmitter *this, bool drawFlares, const FxCamera *pCamera, unsigned int frustumPlaneCount, const ParticleState *pParticleState, float rotationAngle, float cameraDistance, Particle_DrawData *r_particleDrawData, Particle_FlareDrawData *outFlareDrawData)
{
  return ?DrawSetup_Flare@ParticleEmitter@@AEAA_N_NPEBUFxCamera@@IPEBVParticleState@@MMAEAUParticle_DrawData@@AEAUParticle_FlareDrawData@@@Z(this, drawFlares, pCamera, frustumPlaneCount, pParticleState, rotationAngle, cameraDistance, r_particleDrawData, outFlareDrawData);
}

/*
==============
ParticleEmitter::ParticleStateData::Restart
==============
*/

void __fastcall ParticleEmitter::ParticleStateData::Restart(ParticleEmitter::ParticleStateData *this, const ParticleEmitter *pEmitterOwner)
{
  ?Restart@ParticleStateData@ParticleEmitter@@QEAAXPEBV2@@Z(this, pEmitterOwner);
}

/*
==============
ParticleEmitter::DebugDraw
==============
*/

void __fastcall ParticleEmitter::DebugDraw(ParticleEmitter *this)
{
  ?DebugDraw@ParticleEmitter@@QEAAXXZ(this);
}

/*
==============
ParticleEmitter::DrawLights
==============
*/

void __fastcall ParticleEmitter::DrawLights(ParticleEmitter *this, const FxCamera *camera)
{
  ?DrawLights@ParticleEmitter@@QEAAXPEBUFxCamera@@@Z(this, camera);
}

/*
==============
ParticleEmitter::Kill
==============
*/

void __fastcall ParticleEmitter::Kill(ParticleEmitter *this)
{
  ?Kill@ParticleEmitter@@QEAAXXZ(this);
}

/*
==============
ParticleEmitter::GetParticleCountSpawnedForAllStates
==============
*/

unsigned int __fastcall ParticleEmitter::GetParticleCountSpawnedForAllStates(ParticleEmitter *this)
{
  return ?GetParticleCountSpawnedForAllStates@ParticleEmitter@@AEBAIXZ(this);
}

/*
==============
ParticleEmitter::SetEmissionCurveValue
==============
*/

void __fastcall ParticleEmitter::SetEmissionCurveValue(ParticleEmitter *this, float value)
{
  ?SetEmissionCurveValue@ParticleEmitter@@QEAAXM@Z(this, value);
}

/*
==============
ParticleEmitter::PropagateToDetailWorld
==============
*/

void __fastcall ParticleEmitter::PropagateToDetailWorld(ParticleEmitter *this, Physics_WorldId authWorld, Physics_WorldId detailWorld, const char *pVFXName)
{
  ?PropagateToDetailWorld@ParticleEmitter@@QEAAXW4Physics_WorldId@@0PEBD@Z(this, authWorld, detailWorld, pVFXName);
}

/*
==============
ParticleEmitter::ParticleStateData::ProcessUpdateModules
==============
*/

void __fastcall ParticleEmitter::ParticleStateData::ProcessUpdateModules(ParticleEmitter::ParticleStateData *this, const float dt, const int currentTime, const ParticleEmitter *pEmitterOwner, const FxCamera *pCamera)
{
  ?ProcessUpdateModules@ParticleStateData@ParticleEmitter@@QEAAXMHPEBV2@PEBUFxCamera@@@Z(this, dt, currentTime, pEmitterOwner, pCamera);
}

/*
==============
ParticleEmitter::InitParticleData
==============
*/

bool __fastcall ParticleEmitter::InitParticleData(ParticleEmitter *this)
{
  return ?InitParticleData@ParticleEmitter@@AEAA_NXZ(this);
}

/*
==============
ParticleEmitter::UpdateParentVelocity
==============
*/

void __fastcall ParticleEmitter::UpdateParentVelocity(ParticleEmitter *this, int numParticles, float4 *parentVelocityArray)
{
  ?UpdateParentVelocity@ParticleEmitter@@QEBAXHPEAUfloat4@@@Z(this, numParticles, parentVelocityArray);
}

/*
==============
ParticleEmitter::CheckPulse
==============
*/

void __fastcall ParticleEmitter::CheckPulse(ParticleEmitter *this, const float dt, const int currentTime)
{
  ?CheckPulse@ParticleEmitter@@QEAAXMH@Z(this, dt, currentTime);
}

/*
==============
ParticleEmitter::SpawnChildEffect
==============
*/

ParticleSystemHandle __fastcall ParticleEmitter::SpawnChildEffect(ParticleEmitter *this, LocalClientNum_t localClientNum, int currentTime, ParticleManager *pManager, const ParticleState *pParticleState, const ParticleLinkedAssetListDef *pLinkedAssetList, int randomSeed, const float4 *pos, const vector3 *orientationMat, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, bool hasParentOwner, bool attachedToParent, const ParticleSystem *pParentSystem, const ParticleSystemDef *const systemDefOverride, ParticleSystemFlags spawnFlags)
{
  return ?SpawnChildEffect@ParticleEmitter@@QEBA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@HPEAVParticleManager@@PEBVParticleState@@PEBUParticleLinkedAssetListDef@@HAEBUfloat4@@AEBUvector3@@IIPEBUorientation_t@@PEBUFxCamera@@PEBUFxMarkSpawnData@@_N9PEBVParticleSystem@@QEBUParticleSystemDef@@W4ParticleSystemFlags@@@Z(this, localClientNum, currentTime, pManager, pParticleState, pLinkedAssetList, randomSeed, pos, orientationMat, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, hasParentOwner, attachedToParent, pParentSystem, systemDefOverride, spawnFlags);
}

/*
==============
ParticleEmitter::GetBeamLength
==============
*/

double __fastcall ParticleEmitter::GetBeamLength(ParticleEmitter *this, const ParticleState *pParticleState)
{
  double result; 

  *(float *)&result = ?GetBeamLength@ParticleEmitter@@QEBAMPEBVParticleState@@@Z(this, pParticleState);
  return result;
}

/*
==============
ParticleEmitter::DrawSetup_Model
==============
*/

void __fastcall ParticleEmitter::DrawSetup_Model(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const Particle_DrawData *r_particleDrawData)
{
  ?DrawSetup_Model@ParticleEmitter@@AEAAXAEAUParticleStateData@1@AEBUParticle_DrawData@@@Z(this, rParticleStateData, r_particleDrawData);
}

/*
==============
ParticleEmitter::CullElementForDraw_Sprite
==============
*/

bool __fastcall ParticleEmitter::CullElementForDraw_Sprite(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount, const ParticleState *pParticleState, float cameraDistance, Particle_DrawData *r_particleDrawData)
{
  return ?CullElementForDraw_Sprite@ParticleEmitter@@AEBA_NPEBUFxCamera@@IPEBVParticleState@@MAEAUParticle_DrawData@@@Z(this, pCamera, frustumPlaneCount, pParticleState, cameraDistance, r_particleDrawData);
}

/*
==============
ParticleEmitter::GetParticleCountDelayed
==============
*/

unsigned int __fastcall ParticleEmitter::GetParticleCountDelayed(ParticleEmitter *this)
{
  return ?GetParticleCountDelayed@ParticleEmitter@@QEBAIXZ(this);
}

/*
==============
ParticleEmitter::CullElementForDraw_Tail
==============
*/

bool __fastcall ParticleEmitter::CullElementForDraw_Tail(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount, float cameraDistance, Particle_DrawData *r_particleDrawData)
{
  return ?CullElementForDraw_Tail@ParticleEmitter@@AEBA_NPEBUFxCamera@@IMAEAUParticle_DrawData@@@Z(this, pCamera, frustumPlaneCount, cameraDistance, r_particleDrawData);
}

/*
==============
ParticleEmitter::SpriteDrawPostCull
==============
*/

void __fastcall ParticleEmitter::SpriteDrawPostCull(ParticleEmitter *this, FxDrawState *pDrawState, const ParticleEmitter::ParticleStateData *rParticleStateData, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, Material *const material, const Particle_DrawData *r_drawData, FxParticleSimAnimation *pParticleSimAnimation, unsigned int particleIndex, const float4 *posArray, const vector4 *rParticleTransform, const ParticleState::ElementTypeModule *rElementTypeModule, const Particle_FlareDrawData *rFlareDrawData, unsigned int emitterDataIndex)
{
  ?SpriteDrawPostCull@ParticleEmitter@@AEAAXPEAUFxDrawState@@AEBUParticleStateData@1@AEBUfloat4@@22IQEAUMaterial@@AEBUParticle_DrawData@@PEAUFxParticleSimAnimation@@IPEBU4@AEBUvector4@@AEBTElementTypeModule@ParticleState@@AEBUParticle_FlareDrawData@@I@Z(this, pDrawState, rParticleStateData, tangent, bitangent, normal, activeLightGridsBitmask, material, r_drawData, pParticleSimAnimation, particleIndex, posArray, rParticleTransform, rElementTypeModule, rFlareDrawData, emitterDataIndex);
}

/*
==============
ParticleEmitter::ResetLifetime
==============
*/

void __fastcall ParticleEmitter::ResetLifetime(ParticleEmitter *this)
{
  ?ResetLifetime@ParticleEmitter@@AEAAXXZ(this);
}

/*
==============
ParticleEmitter::SpawnVectorFields
==============
*/

void __fastcall ParticleEmitter::SpawnVectorFields(ParticleEmitter *this, unsigned int numParticles, const ParticleState *pParticleState, const vector4 *rEmitterTransform, const ParticleState::ElementTypeModule *elementTypeModule, const int *randomSeedArray, const float4 *positionArray)
{
  ?SpawnVectorFields@ParticleEmitter@@AEAAXIPEBVParticleState@@AEBUvector4@@AEBTElementTypeModule@2@PEBHPEBUfloat4@@@Z(this, numParticles, pParticleState, rEmitterTransform, elementTypeModule, randomSeedArray, positionArray);
}

/*
==============
ParticleEmitter::SpawnSounds
==============
*/

void __fastcall ParticleEmitter::SpawnSounds(ParticleEmitter *this, LocalClientNum_t localClientNum, int currentTime, unsigned int numParticles, const ParticleState *pParticleState, const ParticleModuleInitSound *pModuleInitSound, const int *randomSeedArray, const float4 *positionArray, const unsigned int *handleArray)
{
  ?SpawnSounds@ParticleEmitter@@AEAAXW4LocalClientNum_t@@HIPEBVParticleState@@PEBUParticleModuleInitSound@@PEBHPEBUfloat4@@PEBI@Z(this, localClientNum, currentTime, numParticles, pParticleState, pModuleInitSound, randomSeedArray, positionArray, handleArray);
}

/*
==============
ParticleEmitter::DrawSetup_LightSpot
==============
*/

void __fastcall ParticleEmitter::DrawSetup_LightSpot(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const FxCamera *pCamera, Particle_DrawData *r_particleDrawData)
{
  ?DrawSetup_LightSpot@ParticleEmitter@@AEAAXAEAUParticleStateData@1@PEBUFxCamera@@AEAUParticle_DrawData@@@Z(this, rParticleStateData, pCamera, r_particleDrawData);
}

/*
==============
ParticleEmitter::EmitDelayedParticles
==============
*/

void __fastcall ParticleEmitter::EmitDelayedParticles(ParticleEmitter *this, unsigned int numParticlesDelayed, const int currentTime, const FxCamera *pCamera)
{
  ?EmitDelayedParticles@ParticleEmitter@@AEAAXIHPEBUFxCamera@@@Z(this, numParticlesDelayed, currentTime, pCamera);
}

/*
==============
ParticleEmitter::KillAllParticles
==============
*/

void __fastcall ParticleEmitter::KillAllParticles(ParticleEmitter *this)
{
  ?KillAllParticles@ParticleEmitter@@AEAAXXZ(this);
}

/*
==============
ParticleEmitter::KillParticles_Loop_ProcParticle
==============
*/

bool __fastcall ParticleEmitter::KillParticles_Loop_ProcParticle(ParticleEmitter *this, unsigned int particleIndex, unsigned int stateIndex, unsigned int numStates, ParticleEmitter::ParticleStateData *rParticleStateData, const unsigned int *flagsArray, const unsigned int *stateArray, unsigned int *removedParticlesCount)
{
  return ?KillParticles_Loop_ProcParticle@ParticleEmitter@@AEAA_NIIIAEAUParticleStateData@1@PEBI1AEAI@Z(this, particleIndex, stateIndex, numStates, rParticleStateData, flagsArray, stateArray, removedParticlesCount);
}

/*
==============
ParticleEmitter::GetParticleCountRunningForAllStates
==============
*/

unsigned int __fastcall ParticleEmitter::GetParticleCountRunningForAllStates(ParticleEmitter *this)
{
  return ?GetParticleCountRunningForAllStates@ParticleEmitter@@QEBAIXZ(this);
}

/*
==============
ParticleEmitter::GetParticleData
==============
*/

const ParticleData *__fastcall ParticleEmitter::GetParticleData(ParticleEmitter *this, unsigned int stateIndex)
{
  return ?GetParticleData@ParticleEmitter@@QEBAPEBUParticleData@@I@Z(this, stateIndex);
}

/*
==============
ParticleEmitter::InSpawnRange
==============
*/

bool __fastcall ParticleEmitter::InSpawnRange(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount)
{
  return ?InSpawnRange@ParticleEmitter@@AEBA_NPEBUFxCamera@@I@Z(this, pCamera, frustumPlaneCount);
}

/*
==============
ParticleEmitter::KillParticles_LoopPreserveOrder
==============
*/

void __fastcall ParticleEmitter::KillParticles_LoopPreserveOrder(ParticleEmitter *this, unsigned int stateIndex, unsigned int numStates, int particleCount, ParticleEmitter::ParticleStateData *rParticleStateData, const unsigned int *flagsArray, const unsigned int *stateArray, unsigned int *removedParticlesCount)
{
  ?KillParticles_LoopPreserveOrder@ParticleEmitter@@AEAAXIIHAEAUParticleStateData@1@PEBI1AEAI@Z(this, stateIndex, numStates, particleCount, rParticleStateData, flagsArray, stateArray, removedParticlesCount);
}

/*
==============
ParticleEmitter::Stop
==============
*/

void __fastcall ParticleEmitter::Stop(ParticleEmitter *this)
{
  ?Stop@ParticleEmitter@@QEAAXXZ(this);
}

/*
==============
ParticleEmitter::ShouldDrawWithViewModel
==============
*/

bool __fastcall ParticleEmitter::ShouldDrawWithViewModel(ParticleEmitter *this, const ParticleState *pParticleState)
{
  return ?ShouldDrawWithViewModel@ParticleEmitter@@QEBA_NPEBVParticleState@@@Z(this, pParticleState);
}

/*
==============
ParticleEmitter::SpawnDecals
==============
*/

void __fastcall ParticleEmitter::SpawnDecals(ParticleEmitter *this, LocalClientNum_t localClientNum, unsigned int numParticles, const vector4 *rEmitterTransform, const ParticleState::ElementTypeModule *elementTypeModule, const int *randomSeedArray, const float4 *colorArray, const float4 *positionArray, const float4 *sizeArray, const float4 *rotationAngleArray, unsigned int *flagsArray, const FxMarkSpawnData *pMarkSpawnData, const float *atlasIndexArray, FX_ImpactMark_AtlasInfo *atlasInfo, const float4 *boltOffsetPos, const float4 *boltOffsetQuat)
{
  ?SpawnDecals@ParticleEmitter@@AEAAXW4LocalClientNum_t@@IAEBUvector4@@AEBTElementTypeModule@ParticleState@@PEBHPEBUfloat4@@444PEAIPEBUFxMarkSpawnData@@PEBMPEAUFX_ImpactMark_AtlasInfo@@44@Z(this, localClientNum, numParticles, rEmitterTransform, elementTypeModule, randomSeedArray, colorArray, positionArray, sizeArray, rotationAngleArray, flagsArray, pMarkSpawnData, atlasIndexArray, atlasInfo, boltOffsetPos, boltOffsetQuat);
}

/*
==============
ParticleEmitter::KillParticles_LoopFast
==============
*/

void __fastcall ParticleEmitter::KillParticles_LoopFast(ParticleEmitter *this, unsigned int stateIndex, unsigned int numStates, int particleCount, ParticleEmitter::ParticleStateData *rParticleStateData, const unsigned int *flagsArray, const unsigned int *stateArray, unsigned int *removedParticlesCount)
{
  ?KillParticles_LoopFast@ParticleEmitter@@AEAAXIIHAEAUParticleStateData@1@PEBI1AEAI@Z(this, stateIndex, numStates, particleCount, rParticleStateData, flagsArray, stateArray, removedParticlesCount);
}

/*
==============
ParticleEmitter::KillParticles
==============
*/

void __fastcall ParticleEmitter::KillParticles(ParticleEmitter *this, bool preserveOrder)
{
  ?KillParticles@ParticleEmitter@@AEAAX_N@Z(this, preserveOrder);
}

/*
==============
ParticleEmitter::CopyParticle
==============
*/

void __fastcall ParticleEmitter::CopyParticle(ParticleEmitter *this, unsigned int stateIndex, unsigned int particleIndexFrom, unsigned int particleIndexTo)
{
  ?CopyParticle@ParticleEmitter@@AEAAXIII@Z(this, stateIndex, particleIndexFrom, particleIndexTo);
}

/*
==============
ParticleEmitter::GetScaleFactorByCameraDistance
==============
*/

double __fastcall ParticleEmitter::GetScaleFactorByCameraDistance(ParticleEmitter *this, const ParticleModuleScaleByDistance *pModuleScaleByDistance, float cameraDistance, int randomSeed)
{
  double result; 

  *(float *)&result = ?GetScaleFactorByCameraDistance@ParticleEmitter@@QEBAMPEBUParticleModuleScaleByDistance@@MH@Z(this, pModuleScaleByDistance, cameraDistance, randomSeed);
  return result;
}

/*
==============
ParticleEmitter::ParticleStateData::KillAllParticles
==============
*/

void __fastcall ParticleEmitter::ParticleStateData::KillAllParticles(ParticleEmitter::ParticleStateData *this, const ParticleEmitter *pEmitterOwner)
{
  ?KillAllParticles@ParticleStateData@ParticleEmitter@@AEAAXPEBV2@@Z(this, pEmitterOwner);
}

/*
==============
ParticleEmitter::SpawnGeoTrails
==============
*/

void __fastcall ParticleEmitter::SpawnGeoTrails(ParticleEmitter *this, unsigned int numParticles, ParticleState *pParticleState, const vector4 *rEmitterTransform, const int *randomSeedArray, const float4 *colorArray, const float4 *positionArray, const float4 *sizeArray, const float4 *velocityArray)
{
  ?SpawnGeoTrails@ParticleEmitter@@AEAAXIPEAVParticleState@@AEBUvector4@@PEBHPEBUfloat4@@333@Z(this, numParticles, pParticleState, rEmitterTransform, randomSeedArray, colorArray, positionArray, sizeArray, velocityArray);
}

/*
==============
ParticleEmitter::RequestFreeParticleData
==============
*/

void __fastcall ParticleEmitter::RequestFreeParticleData(ParticleEmitter *this)
{
  ?RequestFreeParticleData@ParticleEmitter@@AEAAXXZ(this);
}

/*
==============
ParticleEmitter::SetupFlags
==============
*/

void __fastcall ParticleEmitter::SetupFlags(ParticleEmitter *this)
{
  ?SetupFlags@ParticleEmitter@@AEAAXXZ(this);
}

/*
==============
ParticleEmitter::DrawElements_SpriteCommon
==============
*/

void __fastcall ParticleEmitter::DrawElements_SpriteCommon(ParticleEmitter *this, FxDrawState *pDrawState, ParticleEmitter::ParticleStateData *r_particleStateData, unsigned int activeLightGridsBitmask, bool transShadowPass, BuildBounds *umbraBoundsAccumulator, BuildBounds *lightingBoundsAccumulator)
{
  ?DrawElements_SpriteCommon@ParticleEmitter@@AEAAXPEAUFxDrawState@@AEAUParticleStateData@1@I_NAEAUBuildBounds@@3@Z(this, pDrawState, r_particleStateData, activeLightGridsBitmask, transShadowPass, umbraBoundsAccumulator, lightingBoundsAccumulator);
}

/*
==============
ParticleEmitter::UpdateLiveTweakingData
==============
*/

void __fastcall ParticleEmitter::UpdateLiveTweakingData(ParticleEmitter *this, const ParticleEmitterDef *const pEmitterDef)
{
  ?UpdateLiveTweakingData@ParticleEmitter@@AEAAXQEBUParticleEmitterDef@@@Z(this, pEmitterDef);
}

/*
==============
ParticleEmitter::DrawSpriteParticles
==============
*/

void __fastcall ParticleEmitter::DrawSpriteParticles(ParticleEmitter *this, FxDrawState *pDrawState, unsigned int activeLightGridsBitmask, bool transShadowPass, BuildBounds *umbraBoundsAccumulator, BuildBounds *lightingBoundsAccumulator)
{
  ?DrawSpriteParticles@ParticleEmitter@@QEAAXPEAUFxDrawState@@I_NAEAUBuildBounds@@2@Z(this, pDrawState, activeLightGridsBitmask, transShadowPass, umbraBoundsAccumulator, lightingBoundsAccumulator);
}

/*
==============
ParticleEmitter::UpdateBeamChildTransform
==============
*/

void __fastcall ParticleEmitter::UpdateBeamChildTransform(ParticleEmitter *this)
{
  ?UpdateBeamChildTransform@ParticleEmitter@@QEAAXXZ(this);
}

/*
==============
ParticleEmitter::GetBurstCount
==============
*/

int __fastcall ParticleEmitter::GetBurstCount(ParticleEmitter *this)
{
  return ?GetBurstCount@ParticleEmitter@@AEBAHXZ(this);
}

/*
==============
ParticleEmitter::InitParentVelocityArray
==============
*/

void __fastcall ParticleEmitter::InitParentVelocityArray(ParticleEmitter *this, LocalClientNum_t localClientNum, const ParticleState *pParticleState, bool isBolted, const ParticleSystem::ParticleBolt *bolt, unsigned int numParticles, float4 *parentVelocityArray)
{
  ?InitParentVelocityArray@ParticleEmitter@@AEBAXW4LocalClientNum_t@@PEBVParticleState@@_NAEBUParticleBolt@ParticleSystem@@IPEAUfloat4@@@Z(this, localClientNum, pParticleState, isBolted, bolt, numParticles, parentVelocityArray);
}

/*
==============
ParticleEmitter::Release
==============
*/

void __fastcall ParticleEmitter::Release(ParticleEmitter *this)
{
  ?Release@ParticleEmitter@@QEAAXXZ(this);
}

/*
==============
ParticleEmitter::ResetProfilerData
==============
*/

void __fastcall ParticleEmitter::ResetProfilerData(ParticleEmitter *this)
{
  ?ResetProfilerData@ParticleEmitter@@QEAAXXZ(this);
}

/*
==============
ParticleEmitter::ProcessInstancePool
==============
*/

void __fastcall ParticleEmitter::ProcessInstancePool(ParticleEmitter *this, const FxCamera *pCamera, InstancePoolData *instancePoolTable, ntl::fixed_map<ParticleEmitterDef const *,InstancePoolData,128,ntl::less<ParticleEmitterDef const *,ParticleEmitterDef const *> > *soloInstancePoolMap, const unsigned int *instancePoolLimits)
{
  ?ProcessInstancePool@ParticleEmitter@@QEAAXPEBUFxCamera@@PEAUInstancePoolData@@PEAV?$fixed_map@PEBUParticleEmitterDef@@UInstancePoolData@@$0IA@U?$less@PEBUParticleEmitterDef@@PEBU1@@ntl@@@ntl@@PEBI@Z(this, pCamera, instancePoolTable, soloInstancePoolMap, instancePoolLimits);
}

/*
==============
ParticleEmitter::CalcBeamTransform
==============
*/

void __fastcall ParticleEmitter::CalcBeamTransform(ParticleEmitter *this, const float4 *startPos, const float4 *endPos, vector4 *outTransform)
{
  ?CalcBeamTransform@ParticleEmitter@@QEBAXAEBUfloat4@@0AEAUvector4@@@Z(this, startPos, endPos, outTransform);
}

/*
==============
ParticleEmitter::GetBeamCurvePoints
==============
*/

void __fastcall ParticleEmitter::GetBeamCurvePoints(ParticleEmitter *this, const ParticleState *pParticleState, float4 *outStartPos, float4 *outEndPos, float4 *outCurvePoint1, float4 *outCurvePoint2)
{
  ?GetBeamCurvePoints@ParticleEmitter@@QEBAXPEBVParticleState@@AEAUfloat4@@111@Z(this, pParticleState, outStartPos, outEndPos, outCurvePoint1, outCurvePoint2);
}

/*
==============
ParticleEmitter::Restart
==============
*/

void __fastcall ParticleEmitter::Restart(ParticleEmitter *this)
{
  ?Restart@ParticleEmitter@@QEAAXXZ(this);
}

/*
==============
ParticleEmitter::ParticleStateData::Init
==============
*/

bool __fastcall ParticleEmitter::ParticleStateData::Init(ParticleEmitter::ParticleStateData *this, const ParticleStateDef *pStateDef, const unsigned int stateIndex, const ParticleEmitter *pEmitter)
{
  return ?Init@ParticleStateData@ParticleEmitter@@QEAA_NPEBUParticleStateDef@@IPEBV2@@Z(this, pStateDef, stateIndex, pEmitter);
}

/*
==============
ParticleEmitter::Init
==============
*/

bool __fastcall ParticleEmitter::Init(ParticleEmitter *this, const ParticleSystem *pSystemOwner, const ParticleEmitterDef *pEmitterDef, unsigned int emitterIndex)
{
  return ?Init@ParticleEmitter@@QEAA_NPEBVParticleSystem@@PEBUParticleEmitterDef@@I@Z(this, pSystemOwner, pEmitterDef, emitterIndex);
}

/*
==============
ParticleEmitter::UpdateChildTransforms
==============
*/

void __fastcall ParticleEmitter::UpdateChildTransforms(ParticleEmitter *this)
{
  ?UpdateChildTransforms@ParticleEmitter@@QEAAXXZ(this);
}

/*
==============
ParticleEmitter::DrawSetup_ParticleSimModel
==============
*/

void __fastcall ParticleEmitter::DrawSetup_ParticleSimModel(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const ParticleModuleInitParticleSim *pModuleInitParticleSim)
{
  ?DrawSetup_ParticleSimModel@ParticleEmitter@@AEAAXAEAUParticleStateData@1@PEBUParticleModuleInitParticleSim@@@Z(this, rParticleStateData, pModuleInitParticleSim);
}

/*
==============
ParticleEmitter::ParticleStateData::KillParticle
==============
*/

void __fastcall ParticleEmitter::ParticleStateData::KillParticle(ParticleEmitter::ParticleStateData *this, const unsigned int particleIndex, const ParticleEmitter *pEmitterOwner, bool fromStateSwitch)
{
  ?KillParticle@ParticleStateData@ParticleEmitter@@AEAAXIPEBV2@_N@Z(this, particleIndex, pEmitterOwner, fromStateSwitch);
}

/*
==============
ParticleEmitter::DrawSetup_Decal
==============
*/

void __fastcall ParticleEmitter::DrawSetup_Decal(ParticleEmitter *this, ParticleEmitter::ParticleStateData *r_particleStateData, const Particle_DrawData *r_particleDrawData)
{
  ?DrawSetup_Decal@ParticleEmitter@@AEAAXAEAUParticleStateData@1@AEBUParticle_DrawData@@@Z(this, r_particleStateData, r_particleDrawData);
}

/*
==============
ParticleEmitter::CopyShaderGraphParams
==============
*/

void __fastcall ParticleEmitter::CopyShaderGraphParams(ParticleEmitter *this, const ParticleShaderParams *shaderParams, const ParticleModuleInitMaterial *initMaterial, Particle_MaterialData *outMaterialConsts)
{
  ?CopyShaderGraphParams@ParticleEmitter@@AEAAXPEBUParticleShaderParams@@PEBUParticleModuleInitMaterial@@PEAUParticle_MaterialData@@@Z(this, shaderParams, initMaterial, outMaterialConsts);
}

/*
==============
ParticleEmitter::ClearAllDelayedParticles
==============
*/

void __fastcall ParticleEmitter::ClearAllDelayedParticles(ParticleEmitter *this)
{
  ?ClearAllDelayedParticles@ParticleEmitter@@AEAAXXZ(this);
}

/*
==============
ParticleEmitter::DrawSetup_Volumetric
==============
*/

void __fastcall ParticleEmitter::DrawSetup_Volumetric(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const FxCamera *pCamera, const Particle_DrawData *r_particleDrawData)
{
  ?DrawSetup_Volumetric@ParticleEmitter@@AEAAXAEAUParticleStateData@1@PEBUFxCamera@@AEBUParticle_DrawData@@@Z(this, rParticleStateData, pCamera, r_particleDrawData);
}

/*
==============
ComputeModelPrevPlacement
==============
*/

void __fastcall ComputeModelPrevPlacement(const GfxScaledPlacement *curPlacementIn, const GfxScaledPlacement *prevPlacementIn, const float4 *velocityIn, GfxScaledPlacement *prevPlacementOut)
{
  ?ComputeModelPrevPlacement@@YAXPEBUGfxScaledPlacement@@0PEBUfloat4@@PEAU1@@Z(curPlacementIn, prevPlacementIn, velocityIn, prevPlacementOut);
}

/*
==============
ParticleEmitter::GetParticleCountSpawnedForFirstState
==============
*/

unsigned int __fastcall ParticleEmitter::GetParticleCountSpawnedForFirstState(ParticleEmitter *this)
{
  return ?GetParticleCountSpawnedForFirstState@ParticleEmitter@@AEBAIXZ(this);
}

/*
==============
ParticleEmitter::GetBeamTransform
==============
*/

void __fastcall ParticleEmitter::GetBeamTransform(ParticleEmitter *this, const ParticleState *pParticleState, vector4 *outTransform)
{
  ?GetBeamTransform@ParticleEmitter@@QEBAXPEBVParticleState@@AEAUvector4@@@Z(this, pParticleState, outTransform);
}

/*
==============
ParticleEmitter::DrawNonSpriteParticles
==============
*/

void __fastcall ParticleEmitter::DrawNonSpriteParticles(ParticleEmitter *this, const FxCamera *pCamera)
{
  ?DrawNonSpriteParticles@ParticleEmitter@@QEAAXPEBUFxCamera@@@Z(this, pCamera);
}

/*
==============
ParticleEmitter::ParticleStateData::Release
==============
*/

void __fastcall ParticleEmitter::ParticleStateData::Release(ParticleEmitter::ParticleStateData *this, const ParticleEmitter *pEmitterOwner)
{
  ?Release@ParticleStateData@ParticleEmitter@@QEAAXPEBV2@@Z(this, pEmitterOwner);
}

/*
==============
ParticleEmitter::DrawSetup_LightOmni
==============
*/

void __fastcall ParticleEmitter::DrawSetup_LightOmni(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const FxCamera *pCamera, Particle_DrawData *r_particleDrawData)
{
  ?DrawSetup_LightOmni@ParticleEmitter@@AEAAXAEAUParticleStateData@1@PEBUFxCamera@@AEAUParticle_DrawData@@@Z(this, rParticleStateData, pCamera, r_particleDrawData);
}

/*
==============
ParticleEmitter::~ParticleEmitter
==============
*/

void __fastcall ParticleEmitter::~ParticleEmitter(ParticleEmitter *this)
{
  ??1ParticleEmitter@@QEAA@XZ(this);
}

/*
==============
ParticleEmitter::GetParticleDataNonConst
==============
*/

ParticleData *__fastcall ParticleEmitter::GetParticleDataNonConst(ParticleEmitter *this, unsigned int stateIndex)
{
  return ?GetParticleDataNonConst@ParticleEmitter@@QEBAPEAUParticleData@@I@Z(this, stateIndex);
}

/*
==============
ParticleEmitter::DrawSetup_GeoTrail
==============
*/

bool __fastcall ParticleEmitter::DrawSetup_GeoTrail(ParticleEmitter *this, unsigned int frustumPlaneCount, const ParticleState *pParticleState, unsigned int particleIndex, const Particle_DrawData *r_particleDrawData)
{
  return ?DrawSetup_GeoTrail@ParticleEmitter@@AEAA_NIPEBVParticleState@@IAEBUParticle_DrawData@@@Z(this, frustumPlaneCount, pParticleState, particleIndex, r_particleDrawData);
}

/*
==============
ParticleEmitter::GetSpawnShapeModuleExt
==============
*/

const ParticleModuleInitSpawnShape *__fastcall ParticleEmitter::GetSpawnShapeModuleExt(ParticleEmitter *this, unsigned int stateIndex)
{
  return ?GetSpawnShapeModuleExt@ParticleEmitter@@QEBAPEBUParticleModuleInitSpawnShape@@I@Z(this, stateIndex);
}

/*
==============
ParticleEmitter::SupportsBasicCopy
==============
*/

bool __fastcall ParticleEmitter::SupportsBasicCopy(ParticleEmitter *this, const ParticleState *pParticleState)
{
  return ?SupportsBasicCopy@ParticleEmitter@@QEBA_NPEBVParticleState@@@Z(this, pParticleState);
}

/*
==============
ParticleEmitter::EvaluateDistanceFade
==============
*/

double __fastcall ParticleEmitter::EvaluateDistanceFade(ParticleEmitter *this, float cameraDistance)
{
  double result; 

  *(float *)&result = ?EvaluateDistanceFade@ParticleEmitter@@QEBAMM@Z(this, cameraDistance);
  return result;
}

/*
==============
ParticleEmitter::SpawnParticles
==============
*/

void __fastcall ParticleEmitter::SpawnParticles(ParticleEmitter *this, const unsigned int numParticles, const int currentTime, const FxCamera *pCamera)
{
  ?SpawnParticles@ParticleEmitter@@AEAAXIHPEBUFxCamera@@@Z(this, numParticles, currentTime, pCamera);
}

/*
==============
ParticleEmitter::DrawCommon
==============
*/

bool __fastcall ParticleEmitter::DrawCommon(ParticleEmitter *this)
{
  return ?DrawCommon@ParticleEmitter@@AEAA_NXZ(this);
}

/*
==============
ParticleEmitter::CullBasedOnAlphaThreshhold
==============
*/

bool __fastcall ParticleEmitter::CullBasedOnAlphaThreshhold(ParticleEmitter *this, const ParticleState *pParticleState, float cameraDistance, Particle_DrawData *r_particleDrawData)
{
  return ?CullBasedOnAlphaThreshhold@ParticleEmitter@@AEBA_NPEBVParticleState@@MAEAUParticle_DrawData@@@Z(this, pParticleState, cameraDistance, r_particleDrawData);
}

/*
==============
ParticleEmitter::InitBoltedSpawnPos
==============
*/

void __fastcall ParticleEmitter::InitBoltedSpawnPos(ParticleEmitter *this)
{
  ?InitBoltedSpawnPos@ParticleEmitter@@QEAAXXZ(this);
}

/*
==============
ParticleEmitter::~ParticleEmitter
==============
*/
void ParticleEmitter::~ParticleEmitter(ParticleEmitter *this)
{
  unsigned int numStates; 
  __int64 v3; 
  __int64 v4; 

  if ( this->m_pParticleStateData )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    if ( numStates )
    {
      v3 = 0i64;
      v4 = numStates;
      do
      {
        ParticleEmitter::ParticleStateData::Release(&this->m_pParticleStateData[v3++], this);
        --v4;
      }
      while ( v4 );
    }
    ParticleManager::ParticleSystemFree(this->m_pSystemOwner->m_localClientNum, this->m_pParticleStateData);
    this->m_pParticleStateData = NULL;
  }
  this->m_flags &= ~0x80u;
  this->m_flags |= 0x40u;
}

/*
==============
ParticleEmitter::BatchUpdate
==============
*/
void ParticleEmitter::BatchUpdate(ParticleEmitter *this, float dt, int currentTime, const FxCamera *pCamera)
{
  const FxCamera *v4; 
  int v5; 
  const ParticleEmitterDef *EmitterDef; 
  float min; 
  float max; 
  ParticleSystem *v11; 
  __int64 numStates; 
  __int64 v13; 
  __int64 v14; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  const float4 *pModule; 
  const float4 *v17; 
  const float4 *v18; 
  ParticleEmitter::ParticleStateData *v19; 
  const ParticleStateDef *m_pStateDef; 
  __int64 numModules; 
  ParticleState::ModuleData *v22; 
  unsigned int m_particleCountRunning; 
  ParticleModule *v24; 
  __int64 v25; 
  ParticleEmitter::ParticleStateData *v26; 
  ParticleData *v27; 
  unsigned __int8 *ParticleDataArray; 
  unsigned __int8 *v29; 
  float *v30; 
  unsigned __int8 *v31; 
  unsigned int v32; 
  __int64 v33; 
  unsigned int v34; 
  unsigned __int16 v35; 
  signed __int64 v36; 
  signed __int64 v37; 
  signed __int64 v38; 
  float v39; 
  float v40; 
  float v41; 
  bool v44; 
  char *v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  unsigned int v49; 
  _WORD *v50; 
  ParticleEmitter::ParticleStateData *v51; 
  const ParticleStateDef *v52; 
  __int64 v53; 
  ParticleState::ModuleData *v54; 
  unsigned int v55; 
  ParticleModule *v56; 
  char *fmt; 
  bool v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  const ParticleSystem *SystemOwner; 
  __int64 v64; 
  bool v65; 
  int v66; 
  unsigned __int16 m_randomSeed; 

  v4 = pCamera;
  v5 = currentTime;
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1980, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  min = EmitterDef->particleLife.min;
  max = EmitterDef->particleLife.max;
  LODWORD(EmitterDef) = EmitterDef->flags;
  v65 = ((unsigned __int8)EmitterDef & 8) != 0;
  v58 = ((unsigned __int8)EmitterDef & 0x10) != 0;
  SystemOwner = ParticleEmitter::GetSystemOwner(this);
  v11 = (ParticleSystem *)SystemOwner;
  v59 = 0i64;
  numStates = (unsigned int)ParticleEmitter::GetEmitterDef(this)->numStates;
  v66 = numStates;
  if ( (_DWORD)numStates )
  {
    v13 = 0i64;
    v60 = numStates;
    v14 = 0i64;
    do
    {
      if ( (v11->m_flags & 0x100) == 0 )
      {
        m_pParticleStateData = this->m_pParticleStateData;
        if ( m_pParticleStateData[v13].m_particleState.m_pStateDef->elementType == 1 )
        {
          pModule = (const float4 *)m_pParticleStateData[v13].m_particleState.m_elementTypeModule.pModule;
          if ( !pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2006, ASSERT_TYPE_ASSERT, "(pModuleInitBeam)", (const char *)&queryFormat, "pModuleInitBeam") )
            __debugbreak();
          v17 = pModule + 2;
          v18 = pModule + 1;
          if ( (pModule->v.m128_i8[8] & 2) != 0 )
            ParticleSystem::SetBeamCurvePoints(v11, v18, v17, pModule + 4, pModule + 5);
          else
            ParticleSystem::SetBeamPos(v11, v18, v17);
        }
      }
      ParticleEmitter::ParticleStateData::ProcessUpdateModules(&this->m_pParticleStateData[v14], dt, v5, this, v4);
      v19 = &this->m_pParticleStateData[v13];
      if ( v19->m_particleState.m_isRunning && v19->m_particleData.m_particleCountRunning && (v19->m_particleState.m_pStateDef->flags & 1) == 0 )
      {
        if ( v19 == (ParticleEmitter::ParticleStateData *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 247, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
          __debugbreak();
        m_pStateDef = v19->m_particleState.m_pStateDef;
        if ( !m_pStateDef->moduleGroupDefs[2].disabled )
        {
          numModules = m_pStateDef->moduleGroupDefs[2].numModules;
          v22 = v19->m_particleState.m_pModuleDataList[2];
          m_particleCountRunning = v19->m_particleData.m_particleCountRunning;
          if ( numModules > 0 )
          {
            do
            {
              v24 = (ParticleModule *)v22->pModule;
              if ( v22->pModule->m_type == PARTICLE_MODULE_TEST_BIRTH && (v24->m_flags & 0x201) == 0 )
                ((void (__fastcall *)(ParticleModule *, ParticleData *, _QWORD, _QWORD, _DWORD, ParticleEmitter *, ParticleEmitter::ParticleStateData *))v22->pUpdateData->updateFunc)(v24, &v19->m_particleData, 0i64, m_particleCountRunning, LODWORD(dt), this, v19);
              ++v22;
              --numModules;
            }
            while ( numModules );
          }
          v4 = pCamera;
        }
        v5 = currentTime;
      }
      v11 = (ParticleSystem *)SystemOwner;
      ++v14;
      ++v13;
      --v60;
    }
    while ( v60 );
    LODWORD(numStates) = v66;
  }
  this->m_emitterLife = dt + this->m_emitterLife;
  if ( (_DWORD)numStates )
  {
    v25 = 0i64;
    v61 = 0i64;
    v64 = (unsigned int)numStates;
    v62 = (unsigned int)numStates;
    do
    {
      v26 = this->m_pParticleStateData;
      v27 = (ParticleData *)((char *)&v26->m_particleData + v25);
      if ( (ParticleEmitter::ParticleStateData *)((char *)v26 + v25) == (ParticleEmitter::ParticleStateData *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
        __debugbreak();
      if ( !v27->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      ParticleDataArray = ParticleData::GetParticleDataArray(v27, PARTICLE_DATA_RANDOM_SEED);
      if ( !v27->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 347, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v29 = ParticleData::GetParticleDataArray(v27, PARTICLE_DATA_LIFE);
      if ( !v27->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 346, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v30 = (float *)ParticleData::GetParticleDataArray(v27, PARTICLE_DATA_SPAWN_TIME);
      if ( !v27->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 354, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v31 = ParticleData::GetParticleDataArray(v27, PARTICLE_DATA_FLAGS);
      v32 = v27->m_particleCountRunning;
      v33 = 0i64;
      v34 = 0;
      m_randomSeed = this->m_randomSeed;
      v35 = this->m_pSystemOwner->m_randomSeed;
      if ( v32 )
      {
        v36 = v31 - (unsigned __int8 *)v30;
        v37 = ParticleDataArray - (unsigned __int8 *)v30;
        v38 = v29 - (unsigned __int8 *)v30;
        do
        {
          if ( *v30 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2046, ASSERT_TYPE_ASSERT, "(spawnTimeArray[i] >= 0.0f)", (const char *)&queryFormat, "spawnTimeArray[i] >= 0.0f") )
            __debugbreak();
          v39 = (float)((float)(1.0 - fx_randomTable[*(int *)((char *)v30 + v37) + 18]) * min) + (float)(max * fx_randomTable[*(int *)((char *)v30 + v37) + 18]);
          if ( v39 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2049, ASSERT_TYPE_ASSERT, "(particleLife > 0.0f)", (const char *)&queryFormat, "particleLife > 0.0f") )
            __debugbreak();
          v40 = (float)(this->m_emitterLife - *v30) / v39;
          *(float *)((char *)v30 + v38) = v40;
          if ( v40 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2052, ASSERT_TYPE_ASSERT, "(lifeArray[i] >= 0.0f)", (const char *)&queryFormat, "lifeArray[i] >= 0.0f") )
            __debugbreak();
          v41 = *(float *)((char *)v30 + v38);
          if ( v41 >= 1.0 )
          {
            if ( v65 )
            {
              if ( v58 )
              {
                _XMM1 = 0i64;
                __asm { vroundss xmm3, xmm1, xmm2, 1 }
                *(float *)((char *)v30 + v38) = v41 - *(float *)&_XMM3;
                *v30 = this->m_emitterLife;
                *(_DWORD *)((char *)v30 + v37) = (10111 * (unsigned __int8)v34 + currentTime + m_randomSeed + (unsigned int)v35) % 0x3FE9;
              }
              else
              {
                *(float *)((char *)v30 + v38) = 1.0;
              }
            }
            else
            {
              *(_DWORD *)((char *)v30 + v36) |= 1u;
            }
          }
          ++v34;
          ++v30;
        }
        while ( v34 < v32 );
        v33 = 0i64;
      }
      v25 = v61 + 528;
      v44 = v62-- == 1;
      v61 += 528i64;
    }
    while ( !v44 );
    do
    {
      v45 = (char *)this->m_pParticleStateData + v33;
      if ( v45[380] && *((_DWORD *)v45 + 106) && (*(_BYTE *)(*((_QWORD *)v45 + 9) + 16i64) & 1) == 0 )
      {
        if ( v45 == (char *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 223, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
          __debugbreak();
        v46 = *((_QWORD *)v45 + 9);
        if ( !*(_BYTE *)(*(_QWORD *)v46 + 44i64) )
        {
          v47 = *(int *)(*(_QWORD *)v46 + 40i64);
          v48 = *((_QWORD *)v45 + 12);
          v49 = *((_DWORD *)v45 + 106);
          if ( v47 > 0 )
          {
            do
            {
              v50 = *(_WORD **)v48;
              if ( (unsigned __int16)(**(_WORD **)v48 - 56) > 1u && (*((_DWORD *)v50 + 1) & 0x201) == 0 )
              {
                *(float *)&fmt = dt;
                (**(void (__fastcall ***)(_WORD *, __int64, _QWORD, _QWORD, char *, ParticleEmitter *, char *))(v48 + 8))(v50, (__int64)(v45 + 416), 0i64, v49, fmt, this, v45);
              }
              v48 += 16i64;
              --v47;
            }
            while ( v47 );
          }
        }
      }
      v51 = &this->m_pParticleStateData[v59];
      if ( v51->m_particleState.m_isRunning && v51->m_particleData.m_particleCountRunning && (v51->m_particleState.m_pStateDef->flags & 1) == 0 )
      {
        if ( v51 == (ParticleEmitter::ParticleStateData *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 268, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
          __debugbreak();
        v52 = v51->m_particleState.m_pStateDef;
        if ( !v52->moduleGroupDefs[2].disabled )
        {
          v53 = v52->moduleGroupDefs[2].numModules;
          v54 = v51->m_particleState.m_pModuleDataList[2];
          v55 = v51->m_particleData.m_particleCountRunning;
          if ( v53 > 0 )
          {
            do
            {
              v56 = (ParticleModule *)v54->pModule;
              if ( v54->pModule->m_type == PARTICLE_MODULE_TEST_DEATH && (v56->m_flags & 0x201) == 0 )
                ((void (__fastcall *)(ParticleModule *, ParticleData *, _QWORD, _QWORD, _DWORD, ParticleEmitter *, ParticleEmitter::ParticleStateData *))v54->pUpdateData->updateFunc)(v56, &v51->m_particleData, 0i64, v55, LODWORD(dt), this, v51);
              ++v54;
              --v53;
            }
            while ( v53 );
          }
        }
      }
      v33 = v59 * 528 + 528;
      v44 = v64-- == 1;
      ++v59;
    }
    while ( !v44 );
  }
}

/*
==============
ParticleEmitter::CalcBeamTransform
==============
*/
void ParticleEmitter::CalcBeamTransform(ParticleEmitter *this, const float4 *startPos, const float4 *endPos, vector4 *outTransform)
{
  float4 lookAtInput; 

  outTransform->x = (float4)_xmm;
  outTransform->z = (float4)_xmm;
  lookAtInput.v = _mm128_sub_ps(endPos->v, startPos->v);
  Particle_GenerateMatrixFromLookAt(&lookAtInput, outTransform);
  outTransform->w = (float4)startPos->v;
}

/*
==============
ParticleEmitter::CalculateParticleCountMax
==============
*/
__int64 ParticleEmitter::CalculateParticleCountMax(ParticleEmitter *this)
{
  const ParticleEmitterDef *EmitterDef; 
  const ParticleModuleEmissionGraph *m_pModuleEmissionGraph; 
  __int64 result; 

  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  m_pModuleEmissionGraph = this->m_pModuleEmissionGraph;
  if ( m_pModuleEmissionGraph )
  {
    _XMM0 = LODWORD(EmitterDef->particleLife.max);
    __asm { vmaxss  xmm2, xmm0, dword ptr [rax+14h] }
    if ( (m_pModuleEmissionGraph->m_flags & 0x10) != 0 )
    {
      _XMM0 = LODWORD(m_pModuleEmissionGraph->m_curves[1].scale);
      __asm { vmaxss  xmm1, xmm0, xmm1 }
    }
    _XMM1 = 0i64;
    __asm { vroundss xmm3, xmm1, xmm2, 2 }
    result = (unsigned int)(int)*(float *)&_XMM3;
    this->m_particleCountMax = result;
  }
  else
  {
    result = EmitterDef->particleCountMax;
    this->m_particleCountMax = result;
  }
  return result;
}

/*
==============
ParticleEmitter::CheckPulse
==============
*/
void ParticleEmitter::CheckPulse(ParticleEmitter *this, const float dt, const int currentTime)
{
  const dvar_t *v3; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  ParticleSystem *v7; 
  const ParticleSystemDef *v8; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int m_flags; 
  const ParticleEmitterDef *v11; 
  unsigned int ParticleCountSpawnedForAllStates; 
  unsigned int v13; 
  bool v14; 
  bool v15; 
  ParticleSystem *v16; 

  v3 = particle_system_culling_update;
  if ( !particle_system_culling_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    Def = ParticleSystem::GetDef(SystemOwner);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 588, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal( particle_system_culling_update ))", "%s\n\tVFX ASSERT for effect: %s\n", "Dvar_GetBool_Internal( particle_system_culling_update )", Def->name) )
      __debugbreak();
  }
  if ( (this->m_flags & 0x220) != 0 || (ParticleEmitter::GetEmitterDef(this)->flags & 1) != 0 || (this->m_flags & 1) != 0 )
  {
    v7 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    v8 = ParticleSystem::GetDef(v7);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 590, ASSERT_TYPE_ASSERT, "(CanUpdate())", "%s\n\tVFX ASSERT for effect: %s\n", "CanUpdate()", v8->name) )
      __debugbreak();
  }
  if ( (ParticleEmitter::GetSystemOwner(this)->m_flags & 0x100000) != 0 )
  {
    EmitterDef = ParticleEmitter::GetEmitterDef(this);
    m_flags = this->m_flags;
    v11 = EmitterDef;
    if ( (m_flags & 0x40) != 0 )
    {
      v13 = 0;
    }
    else
    {
      ParticleCountSpawnedForAllStates = ParticleEmitter::GetParticleCountSpawnedForAllStates(this);
      m_flags = this->m_flags;
      v13 = ParticleCountSpawnedForAllStates;
    }
    v14 = (v11->flags & 2) != 0;
    v15 = (m_flags & 8) != 0;
    if ( !v15 )
    {
      this->m_emitterLife = dt + this->m_emitterLife;
      this->m_lastSpawnTime = dt + this->m_lastSpawnTime;
    }
    if ( v14 && !v13 )
      goto LABEL_26;
    if ( v15 )
    {
      v16 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
      if ( (ParticleSystem::GetDef(v16)->flags & 0x40000) != 0 && (this->m_flags & 2) != 0 )
        goto LABEL_26;
    }
    else if ( (v11->flags & 8) == 0 && (float)(this->m_emitterLifeMax + v11->particleLife.max) < this->m_emitterLife )
    {
LABEL_26:
      ParticleEmitter::Kill(this);
    }
  }
}

/*
==============
ParticleEmitter::ClearAllDelayedParticles
==============
*/
void ParticleEmitter::ClearAllDelayedParticles(ParticleEmitter *this)
{
  if ( (this->m_flags & 0x10) != 0 )
    this->m_pParticleStateData->m_particleData.m_particleCountDelayed = 0;
}

/*
==============
ComputeModelPrevPlacement
==============
*/
void ComputeModelPrevPlacement(const GfxScaledPlacement *curPlacementIn, const GfxScaledPlacement *prevPlacementIn, const float4 *velocityIn, GfxScaledPlacement *prevPlacementOut)
{
  if ( prevPlacementIn->scale == 0.0 )
  {
    prevPlacementOut->base.quat = curPlacementIn->base.quat;
    prevPlacementOut->scale = curPlacementIn->scale;
    if ( velocityIn )
    {
      prevPlacementOut->base.origin.v[0] = curPlacementIn->base.origin.v[0] - (float)(0.016666668 * velocityIn->v.m128_f32[0]);
      prevPlacementOut->base.origin.v[1] = curPlacementIn->base.origin.v[1] - (float)(0.016666668 * velocityIn->v.m128_f32[1]);
      prevPlacementOut->base.origin.v[2] = curPlacementIn->base.origin.v[2] - (float)(0.016666668 * velocityIn->v.m128_f32[2]);
    }
    else
    {
      prevPlacementOut->base.origin = curPlacementIn->base.origin;
    }
  }
  else
  {
    *prevPlacementOut = *prevPlacementIn;
  }
}

/*
==============
ParticleEmitter::CopyParticle
==============
*/
void ParticleEmitter::CopyParticle(ParticleEmitter *this, unsigned int stateIndex, unsigned int particleIndexFrom, unsigned int particleIndexTo)
{
  __int64 v4; 
  __int64 v5; 
  ParticleEmitter::ParticleStateData *v6; 
  unsigned int elementType; 
  const ParticleStateDef *m_pStateDef; 
  FxPhysics *m_physicsInstanceIDList; 
  __int64 v10; 
  Particle_OnImpactData *m_onImpactDataList; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v4 = particleIndexFrom;
  v5 = particleIndexTo;
  v6 = &this->m_pParticleStateData[stateIndex];
  Particle_CopyParticle(&v6->m_particleData, particleIndexFrom, &v6->m_particleData, particleIndexTo);
  elementType = v6->m_particleState.m_pStateDef->elementType;
  if ( elementType == 4 )
  {
    if ( !v6->m_particleState.m_trailDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 461, ASSERT_TYPE_ASSERT, "(m_trailDataList)", (const char *)&queryFormat, "m_trailDataList") )
      __debugbreak();
    if ( (unsigned int)v4 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 463, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v6->m_particleState.m_particleCountMax) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v14) = v6->m_particleState.m_particleCountMax;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 464, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    Particle_TrailData::CopyTrailData(&v6->m_particleState.m_trailDataList[v4], &v6->m_particleState.m_trailDataList[v5]);
  }
  else if ( elementType == 11 )
  {
    if ( !v6->m_particleState.m_vectorFieldList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 491, ASSERT_TYPE_ASSERT, "(m_vectorFieldList)", (const char *)&queryFormat, "m_vectorFieldList") )
      __debugbreak();
    if ( (unsigned int)v4 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 493, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v6->m_particleState.m_particleCountMax) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v14) = v6->m_particleState.m_particleCountMax;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 494, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v6->m_particleState.m_vectorFieldList[v5] = v6->m_particleState.m_vectorFieldList[v4];
  }
  if ( (*(_BYTE *)Particle_GetFlagsArrayAtIndex(&v6->m_particleData, v4) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4355, ASSERT_TYPE_ASSERT, "((flagsArray[0] & PARTICLE_FLAG_PENDING_DEFERRED_PHYSICS) == 0)", (const char *)&queryFormat, "(flagsArray[0] & PARTICLE_FLAG_PENDING_DEFERRED_PHYSICS) == 0") )
    __debugbreak();
  m_pStateDef = v6->m_particleState.m_pStateDef;
  if ( (m_pStateDef->flags & 0x400) != 0 )
  {
    if ( v6->m_particleState.m_pModulePhysicsLight )
    {
      if ( !ParticleState::UsesPhysicsFX(&v6->m_particleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 531, ASSERT_TYPE_ASSERT, "(UsesPhysicsFX())", (const char *)&queryFormat, "UsesPhysicsFX()") )
        __debugbreak();
      if ( !v6->m_particleState.m_physicsFXParticleIDList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 532, ASSERT_TYPE_ASSERT, "(m_physicsFXParticleIDList)", (const char *)&queryFormat, "m_physicsFXParticleIDList") )
        __debugbreak();
      if ( (unsigned int)v4 >= v6->m_particleState.m_particleCountMax )
      {
        LODWORD(v14) = v6->m_particleState.m_particleCountMax;
        LODWORD(v13) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 534, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
      {
        LODWORD(v14) = v6->m_particleState.m_particleCountMax;
        LODWORD(v13) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 535, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v6->m_particleState.m_physicsFXParticleIDList[v5] = v6->m_particleState.m_physicsFXParticleIDList[v4];
      m_pStateDef = v6->m_particleState.m_pStateDef;
    }
    if ( (m_pStateDef->flags & 0x400) != 0 && !v6->m_particleState.m_pModulePhysicsLight && v6->m_particleState.m_physicsInstanceIDList )
    {
      if ( !ParticleState::UsesModelPhysics(&v6->m_particleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 579, ASSERT_TYPE_ASSERT, "(UsesModelPhysics())", (const char *)&queryFormat, "UsesModelPhysics()") )
        __debugbreak();
      if ( !v6->m_particleState.m_physicsInstanceIDList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 580, ASSERT_TYPE_ASSERT, "(m_physicsInstanceIDList)", (const char *)&queryFormat, "m_physicsInstanceIDList") )
        __debugbreak();
      if ( (unsigned int)v4 >= v6->m_particleState.m_particleCountMax )
      {
        LODWORD(v14) = v6->m_particleState.m_particleCountMax;
        LODWORD(v13) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 582, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
      {
        LODWORD(v14) = v6->m_particleState.m_particleCountMax;
        LODWORD(v13) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 583, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      m_physicsInstanceIDList = v6->m_particleState.m_physicsInstanceIDList;
      v10 = v5;
      *(double *)&m_physicsInstanceIDList[v10].instanceId = *(double *)&m_physicsInstanceIDList[v4].instanceId;
      m_physicsInstanceIDList[v10].createListIndex = m_physicsInstanceIDList[v4].createListIndex;
      m_pStateDef = v6->m_particleState.m_pStateDef;
    }
  }
  if ( (m_pStateDef->flags & 0x10000) != 0 )
  {
    if ( !v6->m_particleState.m_onImpactDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 434, ASSERT_TYPE_ASSERT, "(m_onImpactDataList)", (const char *)&queryFormat, "m_onImpactDataList") )
      __debugbreak();
    if ( (unsigned int)v4 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v14) = v6->m_particleState.m_particleCountMax;
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 436, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v14) = v6->m_particleState.m_particleCountMax;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 437, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    m_onImpactDataList = v6->m_particleState.m_onImpactDataList;
    v12 = v5;
    *(__m256i *)m_onImpactDataList[v12].pos.v.m128_f32 = *(__m256i *)m_onImpactDataList[v4].pos.v.m128_f32;
    *(__m256i *)m_onImpactDataList[v12].incomingVelocity.v.m128_f32 = *(__m256i *)m_onImpactDataList[v4].incomingVelocity.v.m128_f32;
    *(_OWORD *)&m_onImpactDataList[v12].surfaceFlags = *(_OWORD *)&m_onImpactDataList[v4].surfaceFlags;
    m_pStateDef = v6->m_particleState.m_pStateDef;
  }
  if ( (m_pStateDef->flags & 0x400000000i64) != 0 )
  {
    if ( !v6->m_particleState.m_timeInStateList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 518, ASSERT_TYPE_ASSERT, "(m_timeInStateList)", (const char *)&queryFormat, "m_timeInStateList") )
      __debugbreak();
    if ( (unsigned int)v4 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v14) = v6->m_particleState.m_particleCountMax;
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 520, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v14) = v6->m_particleState.m_particleCountMax;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 521, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v6->m_particleState.m_timeInStateList[v5] = v6->m_particleState.m_timeInStateList[v4];
  }
}

/*
==============
ParticleEmitter::CopyParticleToAnotherState
==============
*/
void ParticleEmitter::CopyParticleToAnotherState(ParticleEmitter *this, unsigned int stateIndexFrom, unsigned int particleIndexFrom, unsigned int stateIndexTo, unsigned int particleIndexTo)
{
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  __int64 v6; 
  ParticleEmitter::ParticleStateData *v7; 
  ParticleEmitter::ParticleStateData *v8; 
  unsigned int elementType; 
  const ParticleStateDef *m_pStateDef; 
  __int64 v11; 
  __int64 v12; 

  m_pParticleStateData = this->m_pParticleStateData;
  v6 = particleIndexFrom;
  v7 = &m_pParticleStateData[stateIndexFrom];
  v8 = &m_pParticleStateData[stateIndexTo];
  Particle_CopyParticle(&v7->m_particleData, particleIndexFrom, &v8->m_particleData, particleIndexTo);
  if ( ParticleData::HasParticleDataArray(&v8->m_particleData, PARTICLE_DATA_MODULE_TESTS) )
    Particle_GetModuleTestsArray(&v8->m_particleData)[particleIndexTo] = 0;
  elementType = v7->m_particleState.m_pStateDef->elementType;
  if ( v8->m_particleState.m_pStateDef->elementType == elementType )
  {
    if ( elementType == 4 )
    {
      ParticleState::CopyTrailDataToAnotherState(&v7->m_particleState, &v8->m_particleState, v6, particleIndexTo);
    }
    else if ( elementType == 11 )
    {
      if ( !v7->m_particleState.m_vectorFieldList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 501, ASSERT_TYPE_ASSERT, "(m_vectorFieldList)", (const char *)&queryFormat, "m_vectorFieldList") )
        __debugbreak();
      if ( v8->m_particleState.m_pStateDef->elementType != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 504, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD") )
        __debugbreak();
      if ( !v8->m_particleState.m_vectorFieldList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 505, ASSERT_TYPE_ASSERT, "(pParticleState->m_vectorFieldList)", (const char *)&queryFormat, "pParticleState->m_vectorFieldList") )
        __debugbreak();
      if ( (unsigned int)v6 >= v7->m_particleState.m_particleCountMax )
      {
        LODWORD(v11) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 507, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v11, v7->m_particleState.m_particleCountMax) )
          __debugbreak();
      }
      if ( particleIndexTo >= v8->m_particleState.m_particleCountMax )
      {
        LODWORD(v12) = v8->m_particleState.m_particleCountMax;
        LODWORD(v11) = particleIndexTo;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 508, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( pParticleState->m_particleCountMax )", "toIndex doesn't index pParticleState->m_particleCountMax\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      v8->m_particleState.m_vectorFieldList[particleIndexTo] = v7->m_particleState.m_vectorFieldList[v6];
    }
  }
  m_pStateDef = v7->m_particleState.m_pStateDef;
  if ( (m_pStateDef->flags & 0x400) != 0 && (v8->m_particleState.m_pStateDef->flags & 0x400) != 0 )
  {
    if ( (*(_BYTE *)Particle_GetFlagsArrayAtIndex(&v7->m_particleData, v6) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4431, ASSERT_TYPE_ASSERT, "((flagsArray[0] & PARTICLE_FLAG_PENDING_DEFERRED_PHYSICS) == 0)", (const char *)&queryFormat, "(flagsArray[0] & PARTICLE_FLAG_PENDING_DEFERRED_PHYSICS) == 0") )
      __debugbreak();
    m_pStateDef = v7->m_particleState.m_pStateDef;
    if ( (m_pStateDef->flags & 0x400) != 0 && v7->m_particleState.m_pModulePhysicsLight )
    {
      ParticleState::CopyPhysicsFXIDToAnotherState(&v7->m_particleState, &v8->m_particleState, v6, particleIndexTo);
      m_pStateDef = v7->m_particleState.m_pStateDef;
    }
    if ( (m_pStateDef->flags & 0x400) != 0 && !v7->m_particleState.m_pModulePhysicsLight && v7->m_particleState.m_physicsInstanceIDList )
    {
      ParticleState::CopyPhysicsInstanceIDToAnotherState(&v7->m_particleState, &v8->m_particleState, v6, particleIndexTo);
      m_pStateDef = v7->m_particleState.m_pStateDef;
    }
  }
  if ( (m_pStateDef->flags & 0x10000) != 0 && (v8->m_particleState.m_pStateDef->flags & 0x10000) != 0 )
  {
    ParticleState::CopyImpactDataToAnotherState(&v7->m_particleState, &v8->m_particleState, v6, particleIndexTo);
    m_pStateDef = v7->m_particleState.m_pStateDef;
  }
  if ( (m_pStateDef->flags & 0x400000000i64) != 0 )
  {
    if ( !v7->m_particleState.m_timeInStateList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 525, ASSERT_TYPE_ASSERT, "(m_timeInStateList)", (const char *)&queryFormat, "m_timeInStateList") )
      __debugbreak();
    v7->m_particleState.m_timeInStateList[v6] = 0.0;
  }
}

/*
==============
ParticleEmitter::CopyShaderGraphParams
==============
*/
void ParticleEmitter::CopyShaderGraphParams(ParticleEmitter *this, const ParticleShaderParams *shaderParams, const ParticleModuleInitMaterial *initMaterial, Particle_MaterialData *outMaterialConsts)
{
  ParticleShaderGraphOptions m_shaderGraphOptions; 
  double v7; 
  float v8; 
  double v9; 
  float v10; 

  *outMaterialConsts = initMaterial->m_materialData;
  m_shaderGraphOptions = initMaterial->m_shaderGraphOptions;
  if ( m_shaderGraphOptions == PARTICLE_SHADER_GRAPH_SPHERICALZ )
  {
    outMaterialConsts->depthScanColor = shaderParams->rgba0;
    outMaterialConsts->depthScanOutlineColor = shaderParams->rgba1;
    v7 = I_fclamp(1.0 - (float)(shaderParams->params0.v[0] * shaderParams->params0.v[0]), 0.0, 1.0);
    v8 = *(float *)&v7;
    v9 = I_fclamp(1.0 - (float)(shaderParams->params0.v[1] * shaderParams->params0.v[1]), 0.0, 1.0);
    outMaterialConsts->regionHighlightParms.v[0] = v8;
    outMaterialConsts->regionHighlightParms.v[1] = 0.0;
    outMaterialConsts->regionHighlightParms.v[3] = 0.0;
    outMaterialConsts->regionHighlightParms.v[2] = *(float *)&v9;
  }
  else if ( m_shaderGraphOptions == PARTICLE_SHADER_GRAPH_DEPTHSCAN )
  {
    outMaterialConsts->depthScanColor = shaderParams->rgba0;
    outMaterialConsts->depthScanOutlineColor = shaderParams->rgba1;
    v10 = shaderParams->params0.v[1];
    *(_QWORD *)outMaterialConsts->regionHighlightParms.v = LODWORD(shaderParams->params0.v[0]);
    outMaterialConsts->regionHighlightParms.v[3] = 0.0;
    outMaterialConsts->regionHighlightParms.v[2] = v10;
  }
}

/*
==============
ParticleEmitter::CullBasedOnAlphaThreshhold
==============
*/
char ParticleEmitter::CullBasedOnAlphaThreshhold(ParticleEmitter *this, const ParticleState *pParticleState, float cameraDistance, Particle_DrawData *r_particleDrawData)
{
  double v7; 
  ParticleSystem *SystemOwner; 
  const ParticleModuleInitOcclusionQuery *m_pModuleInitOcclusionQuery; 
  float m_occlusionFade; 
  float v13; 
  float v15; 
  float4 v16; 

  v7 = ParticleEmitter::EvaluateDistanceFade(this, cameraDistance);
  if ( *(float *)&v7 > this->m_alphaThreshold )
  {
    _XMM6 = _xmm;
    __asm { vinsertps xmm6, xmm6, xmm0, 30h ; '0' }
    if ( pParticleState )
    {
      if ( (pParticleState->m_pStateDef->flags & 0x80000) != 0 )
      {
        SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
        if ( (ParticleSystem::GetDef(SystemOwner)->flags & 0x40) != 0 )
        {
          m_pModuleInitOcclusionQuery = pParticleState->m_pModuleInitOcclusionQuery;
          if ( !m_pModuleInitOcclusionQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2430, ASSERT_TYPE_ASSERT, "(pModuleInitOcclusionQuery)", (const char *)&queryFormat, "pModuleInitOcclusionQuery") )
            __debugbreak();
          m_occlusionFade = SystemOwner->m_occlusionFade;
          if ( m_occlusionFade <= this->m_alphaThreshold )
            return 1;
          v13 = m_occlusionFade * m_pModuleInitOcclusionQuery->m_scale.max;
          _XMM6 = _xmm;
          v15 = (float)(1.0 - m_occlusionFade) * m_pModuleInitOcclusionQuery->m_scale.min;
          r_particleDrawData->size.v[0] = (float)(v13 + v15) * r_particleDrawData->size.v[0];
          r_particleDrawData->size.v[1] = (float)(v13 + v15) * r_particleDrawData->size.v[1];
          __asm { vinsertps xmm6, xmm6, xmm1, 30h ; '0' }
        }
      }
    }
    v16.v = _mm128_mul_ps(_XMM6, r_particleDrawData->color.v);
    r_particleDrawData->color = (float4)v16.v;
    r_particleDrawData->emissiveIntensity.v = _mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 255), r_particleDrawData->emissiveIntensity.v);
    if ( _mm_shuffle_ps(v16.v, v16.v, 255).m128_f32[0] > this->m_alphaThreshold )
      return 0;
  }
  return 1;
}

/*
==============
ParticleEmitter::CullElementForDraw_Sprite
==============
*/
bool ParticleEmitter::CullElementForDraw_Sprite(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount, const ParticleState *pParticleState, float cameraDistance, Particle_DrawData *r_particleDrawData)
{
  bool v12; 
  vec3_t center; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2283, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2284, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  _XMM0 = LODWORD(r_particleDrawData->size.v[1]);
  __asm { vmaxss  xmm6, xmm0, dword ptr [rsi+70h] }
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2230, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  v12 = 0;
  if ( fx_cull_elem_draw->current.enabled )
    v12 = FX_CullSphere(pCamera, frustumPlaneCount, &r_particleDrawData->posWorld, *(float *)&_XMM6, 0);
  if ( particle_debug_draw->current.enabled || particle_debug_draw_cull_bounds->current.enabled )
  {
    _XMM2.v = (__m128)r_particleDrawData->posWorld;
    LODWORD(center.v[0]) = _XMM2.v.m128_i32[0];
    __asm
    {
      vextractps dword ptr [rsp+98h+center+4], xmm2, 1
      vextractps dword ptr [rsp+98h+center+8], xmm2, 2
    }
    Particle_DebugSphere(&center, *(float *)&_XMM6, &colorOrange, 1, 0);
  }
  return v12 && (!pParticleState || (pParticleState->m_pStateDef->flags & 0x80000) == 0 || !pParticleState->m_pModuleInitOcclusionQuery->m_offscreenRaycast) || ParticleEmitter::CullBasedOnAlphaThreshhold(this, pParticleState, cameraDistance, r_particleDrawData);
}

/*
==============
ParticleEmitter::CullElementForDraw_Tail
==============
*/
bool ParticleEmitter::CullElementForDraw_Tail(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount, float cameraDistance, Particle_DrawData *r_particleDrawData)
{
  float radius; 
  float v9; 
  float4 v10; 
  float v11; 
  float v12; 
  float4 v13; 
  float v14; 
  float v15; 
  vec3_t center; 
  vec3_t rotation; 
  vec3_t end; 
  vec3_t start; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2295, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( fx_cull_elem_draw->current.enabled )
  {
    radius = r_particleDrawData->size.v[0];
    v9 = r_particleDrawData->size.v[1];
    if ( FX_CullCylinder(pCamera, frustumPlaneCount, &r_particleDrawData->posWorld, &r_particleDrawData->velDirWorld, v9, radius) )
      return 1;
    if ( particle_debug_draw->current.enabled || particle_debug_draw_cull_bounds->current.enabled )
    {
      v10.v = (__m128)r_particleDrawData->velDirWorld;
      v11 = _mm_shuffle_ps(v10.v, v10.v, 85).m128_f32[0];
      v12 = _mm_shuffle_ps(v10.v, v10.v, 170).m128_f32[0];
      v13.v = (__m128)r_particleDrawData->posWorld;
      start.v[0] = (float)(v10.v.m128_f32[0] * COERCE_FLOAT(LODWORD(v9) ^ _xmm)) + v13.v.m128_f32[0];
      v14 = _mm_shuffle_ps(v13.v, v13.v, 85).m128_f32[0];
      start.v[1] = (float)(v11 * COERCE_FLOAT(LODWORD(v9) ^ _xmm)) + v14;
      v15 = _mm_shuffle_ps(v13.v, v13.v, 170).m128_f32[0];
      end.v[0] = (float)(v10.v.m128_f32[0] * v9) + v13.v.m128_f32[0];
      start.v[2] = (float)(v12 * COERCE_FLOAT(LODWORD(v9) ^ _xmm)) + v15;
      end.v[2] = (float)(v12 * v9) + v15;
      center.v[0] = v13.v.m128_f32[0];
      center.v[1] = v14;
      center.v[2] = v15;
      rotation.v[0] = v10.v.m128_f32[0];
      rotation.v[1] = v11;
      rotation.v[2] = v12;
      end.v[1] = (float)(v11 * v9) + v14;
      Particle_DebugSphere(&center, 1.0, &colorOrange, 1, 0);
      Particle_DebugCylinder(&start, &end, radius, &rotation, &colorOrange, 1, 0);
    }
  }
  return ParticleEmitter::CullBasedOnAlphaThreshhold(this, NULL, cameraDistance, r_particleDrawData);
}

/*
==============
ParticleEmitter::DebugDraw
==============
*/
void ParticleEmitter::DebugDraw(ParticleEmitter *this)
{
  const ParticleEmitterDef *EmitterDef; 
  int v3; 
  const dvar_t *v4; 
  const ParticleSystem *SystemOwner; 
  unsigned int m_flags; 
  ParticleEmitter::ParticleStateData *v12; 
  vec3_t center; 
  tmat33_t<vec3_t> axes; 

  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  v3 = 0;
  v4 = particle_debug_draw;
  if ( (particle_debug_draw->current.enabled || particle_debug_draw_frustum_cull_radius->current.enabled) && EmitterDef->spawnFrustumCullRadius > 0.0 )
  {
    _XMM1.v = (__m128)ParticleEmitter::GetSystemOwner(this)->m_systemTransform.w;
    LODWORD(center.v[0]) = _XMM1.v.m128_i32[0];
    __asm
    {
      vextractps dword ptr [rsp+78h+center+4], xmm1, 1
      vextractps dword ptr [rsp+78h+center+8], xmm1, 2
    }
    Particle_DebugSphere(&center, EmitterDef->spawnFrustumCullRadius, &colorFacebookBlue, 1, 0);
    v4 = particle_debug_draw;
  }
  if ( v4->current.enabled || particle_show_axes->current.enabled )
  {
    SystemOwner = ParticleEmitter::GetSystemOwner(this);
    _XMM1.v = (__m128)SystemOwner->m_systemTransform.x;
    LODWORD(axes.m[0].v[0]) = SystemOwner->m_systemTransform.x;
    __asm
    {
      vextractps dword ptr [rsp+78h+axes+4], xmm1, 1
      vextractps dword ptr [rsp+78h+axes+8], xmm1, 2
    }
    _XMM2.v = (__m128)SystemOwner->m_systemTransform.y;
    LODWORD(axes.m[1].v[0]) = _XMM2.v.m128_i32[0];
    __asm
    {
      vextractps dword ptr [rsp+78h+axes+10h], xmm2, 1
      vextractps dword ptr [rsp+78h+axes+14h], xmm2, 2
    }
    _XMM2.v = (__m128)SystemOwner->m_systemTransform.z;
    LODWORD(axes.m[2].v[0]) = _XMM2.v.m128_i32[0];
    __asm
    {
      vextractps dword ptr [rsp+78h+axes+1Ch], xmm2, 1
      vextractps dword ptr [rsp+78h+axes+20h], xmm2, 2
    }
    _XMM2.v = (__m128)SystemOwner->m_systemTransform.w;
    LODWORD(center.v[0]) = _XMM2.v.m128_i32[0];
    __asm
    {
      vextractps dword ptr [rsp+78h+center+4], xmm2, 1
      vextractps dword ptr [rsp+78h+center+8], xmm2, 2
    }
    Particle_DebugAxis(&axes, &center, particle_axes_length->current.value, 1, 0);
  }
  m_flags = this->m_flags;
  if ( (m_flags & 0x40) == 0 && (m_flags & 1) == 0 && (m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(this)->flags & 1) == 0 )
  {
    if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 891, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
      __debugbreak();
    if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 892, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
      __debugbreak();
    if ( EmitterDef->numStates > 0 )
    {
      do
      {
        v12 = &this->m_pParticleStateData[v3];
        ParticleState::DebugDraw(&v12->m_particleState, this, &v12->m_particleData);
        ++v3;
      }
      while ( v3 < EmitterDef->numStates );
    }
  }
}

/*
==============
ParticleEmitter::DrawCommon
==============
*/
char ParticleEmitter::DrawCommon(ParticleEmitter *this)
{
  ParticleSystem *SystemOwner; 
  unsigned int m_flags; 
  FxSystem *m_pFxSystem; 
  FxCamera *p_camera; 
  bool zeroG; 
  ParticleGravityOptions gravityOptions; 

  SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
  if ( (SystemOwner->m_flags & 1) != 0 && !SystemOwner->m_bolt.boneVisible && (ParticleSystem::GetDef(SystemOwner)->flags & 0x2000000) != 0 )
    return 0;
  m_flags = this->m_flags;
  if ( (m_flags & 0xC1) != 0 || (m_flags & 0x220) != 0 || (ParticleEmitter::GetEmitterDef(this)->flags & 1) != 0 )
    return 0;
  m_pFxSystem = ParticleManager::GetParticleManager(this->m_pSystemOwner->m_localClientNum)->m_pFxSystem;
  if ( !m_pFxSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4323, ASSERT_TYPE_ASSERT, "(pSystem)", (const char *)&queryFormat, "pSystem") )
    __debugbreak();
  p_camera = &m_pFxSystem->camera;
  if ( !p_camera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 748, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  zeroG = p_camera->zeroG;
  gravityOptions = ParticleEmitter::GetEmitterDef(this)->gravityOptions;
  if ( gravityOptions == PARTICLE_GRAVITY_OPTION_GRAVITY_ONLY )
  {
    if ( zeroG )
      return 0;
  }
  else if ( gravityOptions == PARTICLE_GRAVITY_OPTION_GRAVITY_NEVER && !zeroG )
  {
    return 0;
  }
  return 1;
}

/*
==============
ParticleEmitter::DrawElements_SpriteCommon
==============
*/
void ParticleEmitter::DrawElements_SpriteCommon(ParticleEmitter *this, FxDrawState *pDrawState, ParticleEmitter::ParticleStateData *r_particleStateData, unsigned int activeLightGridsBitmask, bool transShadowPass, BuildBounds *umbraBoundsAccumulator, BuildBounds *lightingBoundsAccumulator)
{
  __int128 v7; 
  __m128 v8; 
  const ParticleStateDef *m_pStateDef; 
  const ParticleModuleInitMaterial *m_pModuleInitMaterial; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  FxCamera *camera; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v19; 
  vector4 *EmitterTransform; 
  const ParticleStateDef *v21; 
  const ParticleModuleInitParticleSim *m_pModuleInitParticleSim; 
  unsigned __int64 flags; 
  unsigned int elementType; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  bool v28; 
  ParticleLinkedAssetListDef *p_m_linkedAssetList; 
  Material *v30; 
  ParticleSystem *v31; 
  const ParticleSystemDef *v32; 
  const ParticleModuleInitAtlas *m_pModuleInitAtlas; 
  ParticleSystem *v35; 
  const float4 *v36; 
  const char *name; 
  vector3 *flags_low; 
  ParticleLinkedAssetListDef *v39; 
  FxParticleSimAnimation *particleSim; 
  ParticleSystem *v41; 
  const ParticleSystemDef *v42; 
  const ParticleStateDef *v43; 
  ParticleState::ElementTypeModule v46; 
  __int128 v47; 
  const vector4 *v48; 
  ParticleState::ElementTypeModule v49; 
  const ParticleSystem *v50; 
  float4 v51; 
  __m128 v52; 
  const vector4 *v56; 
  __m128 v; 
  __m128 v62; 
  unsigned int v63; 
  float4 *p_posWorld; 
  __int64 v65; 
  __int64 v67; 
  vector4 *v68; 
  const float4 *v69; 
  __m128 v70; 
  __m128 v71; 
  __m128 v73; 
  __m128 v75; 
  __m128 v76; 
  ParticleManager *ParticleManager; 
  const ParticleSystem *v78; 
  __int128 v80; 
  FxDrawState *v81; 
  __int128 v83; 
  __int128 v86; 
  unsigned int v88; 
  const ParticleStateDef *v91; 
  float4 *v92; 
  __m128 v93; 
  __m128 v94; 
  const float4 *v95; 
  vector3 *v96; 
  const vector4 *v97; 
  bool v98; 
  __m128 v99; 
  const ParticleStateDef *v100; 
  float4 *p_cameraBitangent; 
  unsigned int v102; 
  FxCamera *v103; 
  float4 v104; 
  FxDrawState *v105; 
  float *v106; 
  __m128 v107; 
  GfxFlareSurfGlob *flareSurfGlob; 
  float v109; 
  unsigned int v110; 
  unsigned int v111; 
  float4 v112; 
  const float4 *v113; 
  vector3 *v114; 
  const vector4 *v115; 
  const float4 *v116; 
  vector3 *v117; 
  __m128 v118; 
  float v119; 
  __m128 v120; 
  __m128 v121; 
  __m128 v122; 
  __m128 v123; 
  __m128 v124; 
  const ParticleStateDef *v125; 
  float4 *ParentVelocityArray; 
  __m128 v127; 
  __m128 v133; 
  __m128 v140; 
  __m128 v148; 
  unsigned int v149; 
  float *v150; 
  ParticleSystem *v151; 
  ParticleSystem *v152; 
  ParticleSystem *v153; 
  vec4_t *v154; 
  ParticleShaderGraphOptions m_shaderGraphOptions; 
  float v156; 
  double v157; 
  float v158; 
  bool v159; 
  Material *v160; 
  ParticleSystem *v161; 
  const ParticleSystemDef *v162; 
  int v163; 
  ParticleSystem *v164; 
  const ParticleSystemDef *v165; 
  ParticleLinkedAssetListDef *v166; 
  FxParticleSimAnimation *v167; 
  ParticleSystem *v168; 
  const ParticleSystemDef *v169; 
  float v171; 
  const FxSystem *system; 
  ParticleManager *v173; 
  const ParticleSystem *v174; 
  Material *v175; 
  float v176; 
  unsigned __int8 *packedAtlasData; 
  Particle_DrawData *r_particleDrawData; 
  float4 *rOutNormal; 
  char v180; 
  bool v181; 
  bool v182; 
  unsigned int v183; 
  unsigned int outEmitterDataIndex; 
  unsigned int frustumPlaneCount; 
  unsigned int particleIndex; 
  FxDrawState *pDrawStatea; 
  Material *material; 
  unsigned int m_particleCountRunning; 
  float4 *RotationAngleArray; 
  float *CameraDistanceArray; 
  FxCamera *pCamera; 
  FxParticleSimAnimation *pParticleSimAnimation; 
  float4 *posArray; 
  vector4 *M1; 
  const ParticleModuleInitMaterial *v196; 
  int *RandomSeedArray; 
  float4 rOutTangent; 
  float4 rOutBitangent; 
  float4 normal; 
  unsigned int activeLightGridsBitmaska; 
  float4 *VelocityArray; 
  ParticleLinkedAssetListDef *pLinkedAssetList; 
  __int64 v204; 
  const ParticleSystem *v205; 
  float4 rPos; 
  vector4 result; 
  float4 rVelocity; 
  float4 *SizeArray; 
  float4 *SpawnPosArray; 
  BuildBounds *boundsAccumulator; 
  BuildBounds *v212; 
  ParticleLinkedAssetListDef *v213; 
  __int64 v214; 
  float *SpawnTimeArray; 
  unsigned __int64 v216; 
  __int64 v217; 
  float4 *ColorArray; 
  ParticleModuleScaleByDistance *pModuleScaleByDistance; 
  float4 *SpawnQuatArray; 
  unsigned __int64 v221; 
  __m256i v222; 
  __m256i v223; 
  vector4 v224; 
  __m256i v225; 
  __m256i v226; 
  __m256i v227; 
  __m256i v228; 
  __m256i v229; 
  GfxEffectFlare flareData; 
  vec3_t posWorld; 
  float4 lookAtInput; 
  GfxSpriteEmitter data; 
  float4 v234; 
  Particle_FlareDrawData outFlareDrawData; 
  vector3 outMatrix; 
  vector4 rParticleTransform; 

  v212 = umbraBoundsAccumulator;
  boundsAccumulator = lightingBoundsAccumulator;
  activeLightGridsBitmaska = activeLightGridsBitmask;
  pDrawStatea = pDrawState;
  if ( !pDrawState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2576, ASSERT_TYPE_ASSERT, "(pDrawState)", (const char *)&queryFormat, "pDrawState") )
    __debugbreak();
  m_pStateDef = r_particleStateData->m_particleState.m_pStateDef;
  v224.w = (float4)g_unit.v;
  if ( (m_pStateDef->flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2588, ASSERT_TYPE_ASSERT, "(pParticleState->IsSprite())", (const char *)&queryFormat, "pParticleState->IsSprite()") )
    __debugbreak();
  m_pModuleInitMaterial = r_particleStateData->m_particleState.m_pModuleInitMaterial;
  v196 = m_pModuleInitMaterial;
  if ( !m_pModuleInitMaterial )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    Def = ParticleSystem::GetDef(SystemOwner);
    Com_PrintWarning(21, "Emitter is missing 'Material' module - %s", Def->name);
    return;
  }
  camera = (FxCamera *)pDrawState->camera;
  m_particleCountRunning = r_particleStateData->m_particleData.m_particleCountRunning;
  pCamera = camera;
  if ( !camera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2602, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  v19 = camera->frustumPlaneCount;
  if ( (EmitterDef->flags & 4) != 0 && v19 > 5 )
    v19 = 5;
  frustumPlaneCount = v19;
  SizeArray = Particle_GetSizeArray(&r_particleStateData->m_particleData);
  posArray = Particle_GetPositionArray(&r_particleStateData->m_particleData);
  ColorArray = Particle_GetColorArray(&r_particleStateData->m_particleData);
  RotationAngleArray = Particle_GetRotationAngleArray(&r_particleStateData->m_particleData);
  SpawnTimeArray = Particle_GetSpawnTimeArray(&r_particleStateData->m_particleData);
  RandomSeedArray = Particle_GetRandomSeedArray(&r_particleStateData->m_particleData);
  VelocityArray = Particle_GetVelocityArray(&r_particleStateData->m_particleData);
  SpawnPosArray = Particle_GetSpawnPosArray(&r_particleStateData->m_particleData);
  SpawnQuatArray = Particle_GetSpawnQuatArray(&r_particleStateData->m_particleData);
  CameraDistanceArray = Particle_GetCameraDistanceArray(&r_particleStateData->m_particleData);
  v205 = ParticleEmitter::GetSystemOwner(this);
  EmitterTransform = (vector4 *)ParticleEmitter::GetEmitterTransform(this, &r_particleStateData->m_particleState);
  v21 = r_particleStateData->m_particleState.m_pStateDef;
  m_pModuleInitParticleSim = r_particleStateData->m_particleState.m_pModuleInitParticleSim;
  M1 = EmitterTransform;
  rParticleTransform = *EmitterTransform;
  flags = v21->flags;
  elementType = v21->elementType;
  v183 = elementType;
  v204 = (unsigned __int8)flags & 0xA0;
  v25 = flags >> 33;
  LOBYTE(v25) = (flags & 0x200000000i64) != 0;
  v214 = v25;
  v26 = flags >> 22;
  LOBYTE(v26) = (flags & 0x400000) != 0;
  v217 = v26;
  v27 = flags;
  flags >>= 41;
  LOBYTE(flags) = flags & 1;
  v27 >>= 23;
  LOBYTE(v27) = v27 & 1;
  v221 = flags;
  v216 = v27;
  if ( m_pModuleInitParticleSim )
  {
    pLinkedAssetList = NULL;
    goto LABEL_24;
  }
  v28 = &m_pModuleInitMaterial->m_linkedAssetList == NULL;
  p_m_linkedAssetList = &m_pModuleInitMaterial->m_linkedAssetList;
  pLinkedAssetList = p_m_linkedAssetList;
  if ( v28 )
  {
LABEL_24:
    v181 = 0;
    goto LABEL_25;
  }
  Particle_VerifyAssetList(p_m_linkedAssetList);
  v181 = p_m_linkedAssetList->numAssets == 1;
  if ( p_m_linkedAssetList->numAssets != 1 )
  {
LABEL_25:
    material = NULL;
    goto LABEL_26;
  }
  Particle_VerifyAssetList(p_m_linkedAssetList);
  v30 = p_m_linkedAssetList->assetList->material;
  material = v30;
  if ( v30 )
  {
    if ( SLOBYTE(v30->surfaceFlags) < 0 )
    {
      v31 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
      v32 = ParticleSystem::GetDef(v31);
      R_WarnOncePerFrame(R_WARN_VFX_INVALID_MATERIAL, v30->name, v32->name, "SURF_NODRAW");
      return;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2641, ASSERT_TYPE_ASSERT, "(!hasSingleMaterialAsset || material)", (const char *)&queryFormat, "!hasSingleMaterialAsset || material") )
  {
    __debugbreak();
  }
LABEL_26:
  m_pModuleInitAtlas = r_particleStateData->m_particleState.m_pModuleInitAtlas;
  if ( !m_pModuleInitAtlas || (m_pModuleInitAtlas->m_flags & 1) != 0 || (v180 = 1, !r_particleStateData->m_particleState.m_atlasData.isAtlas) )
    v180 = 0;
  _RDI = (ParticleEmitter *)&this->m_particleDrawData[1];
  if ( !transShadowPass )
    _RDI = this;
  DebugWipe(_RDI, 0xA0ui64);
  v35 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
  name = ParticleSystem::GetDef(v35)->name;
  _RDI->m_particleDrawData[0].hasAtlas = v180;
  _RDI->m_particleDrawData[0].vfxName = name;
  flags_low = (vector3 *)LODWORD(r_particleStateData->m_particleState.m_pStateDef->flags);
  _RDI->m_particleDrawData[0].codeSurfFlags = 0;
  _RDI->m_particleDrawData[0].hasMirrorTexture = ((unsigned __int16)flags_low & 0x7800) != 0i64;
  _RDI->m_particleDrawData[0].hasParticleSim = m_pModuleInitParticleSim != NULL;
  _RDI->m_particleDrawData[0].atlasData = &r_particleStateData->m_particleState.m_atlasData;
  if ( !transShadowPass && ParticleEmitter::ShouldDrawWithViewModel(this, &r_particleStateData->m_particleState) )
    _RDI->m_particleDrawData[0].codeSurfFlags |= 1u;
  v39 = &m_pModuleInitParticleSim->m_linkedAssetList;
  _RDI->m_particleDrawData[0].allowLighting = pCamera->lightmap;
  _RDI->m_particleDrawData[0].anisotropy = v196->m_materialData.anisotropy;
  v28 = !_RDI->m_particleDrawData[0].hasParticleSim;
  _RDI->m_particleDrawData[0].rotationAngle = 0.0;
  if ( v28 )
    v39 = NULL;
  v213 = v39;
  _RDI->m_particleDrawData[0].emissiveIntensity = (float4)_xmm;
  if ( !v39 )
  {
    v182 = 0;
    goto LABEL_45;
  }
  Particle_VerifyAssetList(v39);
  v182 = v39->numAssets == 1;
  if ( v39->numAssets != 1 )
  {
LABEL_45:
    pParticleSimAnimation = NULL;
    goto LABEL_46;
  }
  Particle_VerifyAssetList(v39);
  particleSim = v39->assetList->particleSim;
  pParticleSimAnimation = particleSim;
  if ( particleSim )
  {
    if ( SLOBYTE(particleSim->material->surfaceFlags) < 0 )
    {
      v41 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
      v42 = ParticleSystem::GetDef(v41);
      R_WarnOncePerFrame(R_WARN_VFX_INVALID_MATERIAL, particleSim->material->name, v42->name, "SURF_NODRAW");
      return;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2689, ASSERT_TYPE_ASSERT, "(!hasSingleParticleSimAsset || pParticleSimAnimation)", (const char *)&queryFormat, "!hasSingleParticleSimAsset || pParticleSimAnimation") )
  {
    __debugbreak();
  }
LABEL_46:
  pModuleScaleByDistance = (ParticleModuleScaleByDistance *)r_particleStateData->m_particleState.m_pModuleScaleByDistance;
  if ( !pModuleScaleByDistance )
  {
    v43 = r_particleStateData->m_particleState.m_pStateDef;
    flags_low = (vector3 *)(v43->flags >> 35);
    if ( (v43->flags & 0x800000000i64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2699, ASSERT_TYPE_ASSERT, "(pModuleScaleByDistance || !pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_SCALE_BY_DISTANCE ))", (const char *)&queryFormat, "pModuleScaleByDistance || !pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_SCALE_BY_DISTANCE )") )
      __debugbreak();
  }
  _XMM0 = *(_OWORD *)pCamera->origin.v;
  __asm { vinsertps xmm11, xmm0, xmm7, 0F0h ; 'ð' }
  if ( !elementType )
    goto LABEL_71;
  if ( elementType != 1 )
  {
    if ( elementType != 4 )
    {
      if ( elementType == 8 )
      {
        v46.pModule = (const ParticleModule *)r_particleStateData->m_particleState.m_elementTypeModule;
        result.w = (float4)g_unit.v;
        if ( !v46.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2752, ASSERT_TYPE_ASSERT, "(pModule)", (const char *)&queryFormat, "pModule") )
          __debugbreak();
        v47 = *(_OWORD *)&v46.pModule[2].m_type;
        Float4UnitQuatToAxis(flags_low, v36);
        v28 = !_RDI->m_particleDrawData[0].hasParticleSim;
        *(_OWORD *)&v225.m256i_u64[2] = v7;
        *(_OWORD *)v225.m256i_i8 = v47;
        *(__m256i *)result.x.v.m128_f32 = v225;
        result.z.v = v8;
        if ( v28 )
        {
          Float4x4Mul(&result, M1, v48);
          *(__m128 *)v223.m256i_i8 = v8;
          *(_OWORD *)v222.m256i_i8 = v47;
          *(__m128 *)&v223.m256i_u64[2] = _XMM3;
          *(_OWORD *)&v222.m256i_u64[2] = v7;
          *(__m256i *)result.x.v.m128_f32 = v222;
          *(__m256i *)result.z.v.m128_f32 = v223;
        }
        rOutTangent.v = (__m128)result.x;
        rOutBitangent.v = (__m128)result.y;
        normal.v = v8;
      }
      goto LABEL_72;
    }
LABEL_71:
    v = pDrawState->cameraBitangent.v;
    rOutTangent.v = (__m128)pDrawState->negCameraTangent;
    normal.v = (__m128)pDrawState->negCameraNormal;
    rOutBitangent.v = v;
    goto LABEL_72;
  }
  v49.pModule = (const ParticleModule *)r_particleStateData->m_particleState.m_elementTypeModule;
  v50 = ParticleEmitter::GetSystemOwner(this);
  if ( (v50->m_flags & 0x100) != 0 )
  {
    v51.v = (__m128)v50->m_beamData.m_beamStartPos;
    v52 = v50->m_beamData.m_beamEndPos.v;
  }
  else
  {
    v51.v = *(__m128 *)&v49.pModule[2].m_type;
    v52 = *(__m128 *)&v49.pModule[4].m_type;
  }
  if ( v49.pModule )
  {
    v51.v = _mm128_add_ps(v51.v, *(__m128 *)&v49.pModule[6].m_type);
    v52 = _mm128_add_ps(v52, *(__m128 *)&v49.pModule[6].m_type);
  }
  _XMM3 = _mm128_sub_ps(v52, v51.v);
  _XMM0 = _mm128_mul_ps(_XMM3, _XMM3);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
  }
  if ( *(float *)&_XMM2 == 0.0 )
  {
    result = (vector4)identityMatrix44;
  }
  else
  {
    _XMM0 = (__m128)_xmm;
    _XMM1 = _xmm;
    result.x = (float4)_xmm;
    result.z = (float4)_xmm;
    lookAtInput.v = _XMM3;
    Particle_GenerateMatrixFromLookAt(&lookAtInput, &result);
    result.w = (float4)v51.v;
  }
  if ( (ParticleEmitter::GetSystemOwner(this)->m_flags & 0x100) == 0 )
  {
    Float4x4Mul(M1, &result, v56);
    *(_OWORD *)v223.m256i_i8 = _XMM2;
    *(__m128 *)v222.m256i_i8 = _XMM0;
    *(__m128 *)&v223.m256i_u64[2] = _XMM3;
    *(_OWORD *)&v222.m256i_u64[2] = _XMM1;
    *(__m256i *)result.x.v.m128_f32 = v222;
    *(__m256i *)result.z.v.m128_f32 = v223;
  }
  normal.v = (__m128)result.z;
  rOutBitangent.v = (__m128)result.y;
  rOutTangent.v = (__m128)result.x;
LABEL_72:
  outEmitterDataIndex = -1;
  _RDI->m_particleDrawData[0].weaponHeatScale = (float4)_xmm;
  if ( (ParticleEmitter::GetEmitterDef(this)->flags & 0x1000000) != 0 )
  {
    ParticleEmitter::GetSystemOwner(this);
    _XMM2 = _xmm;
    __asm { vinsertps xmm2, xmm2, xmm1, 30h ; '0' }
    _RDI->m_particleDrawData[0].weaponHeatScale = (float4)_XMM2.v;
  }
  _XMM0 = _xmm;
  __asm { vinsertps xmm0, xmm0, dword ptr [r15+690h], 30h ; '0' }
  v62 = _mm128_mul_ps(_XMM0, _RDI->m_particleDrawData[0].weaponHeatScale.v);
  v63 = 0;
  particleIndex = 0;
  _RDI->m_particleDrawData[0].weaponHeatScale.v = v62;
  if ( m_particleCountRunning )
  {
    p_posWorld = &_RDI->m_particleDrawData[0].posWorld;
    v65 = 0i64;
    while ( 1 )
    {
      _XMM0.v = (__m128)SizeArray[v65];
      v67 = v63;
      v68 = M1;
      v69 = &posArray[v67];
      _RDI->m_particleDrawData[0].size.v[0] = _XMM0.v.m128_f32[0];
      __asm { vextractps dword ptr [rdi+74h], xmm0, 1 }
      ParticleEmitter::GetWorldPos(this, v69, p_posWorld, &r_particleStateData->m_particleState, v68);
      v28 = (_BYTE)v217 == 0;
      v70 = ColorArray[v65].v;
      v71 = _mm128_mul_ps(v70, v70);
      _XMM1 = _mm_shuffle_ps(v71, _mm_shuffle_ps(v71, v70, 250), 132);
      _RDI->m_particleDrawData[0].color.v = _XMM1;
      v73 = _RDI->m_particleDrawData[0].weaponHeatScale.v;
      _XMM0 = _mm128_mul_ps(v73, _XMM1);
      _RDI->m_particleDrawData[0].color.v = _XMM0;
      _RDI->m_particleDrawData[0].lightingFrac = 0.0;
      _RDI->m_particleDrawData[0].temperatureScale = 1.0;
      if ( !v28 )
      {
        v75 = Particle_GetEmissiveArray(&r_particleStateData->m_particleData)[v65].v;
        v76 = _mm128_mul_ps(v75, v75);
        _XMM0 = _mm_shuffle_ps(v76, v75, 250);
        _XMM1 = _mm_shuffle_ps(v76, _XMM0, 132);
        _RDI->m_particleDrawData[0].emissiveIntensity.v = _XMM1;
        if ( (ParticleEmitter::GetSystemOwner(this)->m_flags & 0x1000000000i64) != 0 )
        {
          ParticleManager = ParticleManager::GetParticleManager(this->m_pSystemOwner->m_localClientNum);
          v78 = ParticleEmitter::GetSystemOwner(this);
          ParticleManager::GetGlobalTintColor(ParticleManager, &lookAtInput, v78);
          __asm { vbroadcastss xmm2, dword ptr [rdi+3Ch] }
          v73 = _mm_shuffle_ps(_XMM2, _XMM2, 0);
          _XMM0 = _mm128_mul_ps(v73, lookAtInput.v);
          lookAtInput.v = _XMM0;
          _RDI->m_particleDrawData[0].emissiveIntensity.v = _XMM0;
        }
        if ( (r_particleStateData->m_particleState.m_pStateDef->flags & 0x40000000000i64) != 0 )
        {
          v80 = LODWORD(Particle_GetLightingFracArray(&r_particleStateData->m_particleData)[v65]);
          v81 = pDrawStatea;
          _RDI->m_particleDrawData[0].lightingFrac = *(float *)&v80;
          v83 = v80;
          *(float *)&v83 = *(float *)&v80 + v81->camera->lightingFractionBias;
          _XMM0 = v83;
          __asm { vmaxss  xmm1, xmm0, xmm8 }
          _RDI->m_particleDrawData[0].lightingFrac = *(float *)&_XMM1;
          v86 = _XMM1;
          *(float *)&v86 = *(float *)&_XMM1 + fx_biasLightFrac->current.value;
          _XMM0 = v86;
          __asm { vmaxss  xmm0, xmm0, xmm8 }
          _RDI->m_particleDrawData[0].lightingFrac = _XMM0.m128_f32[0];
          _XMM1 = (__m128)fx_overrideLightFrac->current.unsignedInt;
          if ( _XMM1.m128_f32[0] >= 0.0 )
            _RDI->m_particleDrawData[0].lightingFrac = _XMM1.m128_f32[0];
        }
      }
      if ( (_BYTE)v216 )
      {
        Particle_GetIntensityArray(&r_particleStateData->m_particleData);
        _XMM1 = _xmm;
        v88 = v183;
        __asm
        {
          vinsertps xmm1, xmm1, xmm0, 0
          vinsertps xmm1, xmm1, xmm0, 10h
          vinsertps xmm1, xmm1, xmm0, 20h ; ' '
        }
        _XMM0 = _mm128_mul_ps(_XMM1, _RDI->m_particleDrawData[0].color.v);
        _RDI->m_particleDrawData[0].color.v = _XMM0;
        if ( v183 == 3 )
        {
          _XMM0 = _mm128_mul_ps(_XMM1, _RDI->m_particleDrawData[0].emissiveIntensity.v);
          _RDI->m_particleDrawData[0].emissiveIntensity.v = _XMM0;
        }
      }
      else
      {
        v88 = v183;
      }
      if ( (_BYTE)v221 )
        _RDI->m_particleDrawData[0].temperatureScale = Particle_GetTemperatureArray(&r_particleStateData->m_particleData)[v65];
      if ( v180 )
        _RDI->m_particleDrawData[0].atlasIndex = Particle_GetAtlasIndexArray(&r_particleStateData->m_particleData)[v65];
      v91 = r_particleStateData->m_particleState.m_pStateDef;
      v92 = (float4 *)(v91->flags >> 35);
      if ( (v91->flags & 0x800000000i64) != 0 )
      {
        v73 = (__m128)LODWORD(CameraDistanceArray[v65]);
        *(double *)_XMM0.m128_u64 = ParticleEmitter::GetScaleFactorByCameraDistance(this, pModuleScaleByDistance, v73.m128_f32[0], RandomSeedArray[v65]);
        v93 = _XMM0;
        v93.m128_f32[0] = _XMM0.m128_f32[0] * _RDI->m_particleDrawData[0].size.v[0];
        _XMM1 = v93;
        _RDI->m_particleDrawData[0].size.v[0] = v93.m128_f32[0];
        _RDI->m_particleDrawData[0].size.v[1] = _XMM0.m128_f32[0] * _RDI->m_particleDrawData[0].size.v[1];
      }
      if ( v88 != 4 && (_RDI->m_particleDrawData[0].size.v[0] == 0.0 || _RDI->m_particleDrawData[0].size.v[1] == 0.0) )
        goto LABEL_235;
      switch ( v88 )
      {
        case 0u:
          if ( _RDI->m_particleDrawData[0].hasParticleSim )
            v98 = ParticleEmitter::CullBasedOnAlphaThreshhold(this, NULL, CameraDistanceArray[v65], _RDI->m_particleDrawData);
          else
            v98 = ParticleEmitter::CullElementForDraw_Sprite(this, pCamera, frustumPlaneCount, &r_particleStateData->m_particleState, CameraDistanceArray[v65], _RDI->m_particleDrawData);
          if ( !v98 )
          {
            if ( (r_particleStateData->m_particleState.m_pStateDef->flags & 0x20000) != 0 )
            {
              v99 = _mm128_sub_ps(_XMM11, posArray[v65].v);
              rPos.v = _mm_shuffle_ps(v99, _mm_shuffle_ps(v99, (__m128)0i64, 250), 132);
              Particle_GenerateMatrixFromLookAt(&rPos, &outMatrix);
              v100 = r_particleStateData->m_particleState.m_pStateDef;
              rOutTangent.v = _mm128_sub_ps((__m128)0i64, outMatrix.x.v);
              if ( (v100->flags & 0x40000) != 0 )
                p_cameraBitangent = &pDrawStatea->cameraBitangent;
              else
                p_cameraBitangent = &outMatrix.z;
              rOutBitangent.v = p_cameraBitangent->v;
              normal.v = (__m128)outMatrix.y;
            }
            if ( !_RDI->m_particleDrawData[0].hasParticleSim )
              _RDI->m_particleDrawData[0].rotationAngle = COERCE_FLOAT(*(_OWORD *)&RotationAngleArray[v65]);
            goto LABEL_161;
          }
          goto LABEL_235;
        case 1u:
          if ( v204 )
          {
            v94 = RotationAngleArray[v65].v;
            Float4RadianToQuat(v92, (const float4 *)0x140000000i64);
            Float4UnitQuatToAxis(v96, v95);
            *(__m128 *)&v225.m256i_u64[2] = _XMM1;
            *(__m128 *)v225.m256i_i8 = v94;
            *(__m256i *)v224.x.v.m128_f32 = v225;
            v224.z.v = v73;
            Float4x4Mul(&v224, &result, v97);
            v28 = _RDI->m_particleDrawData[0].rotationAngle == 0.0;
            *(__m128 *)&v227.m256i_u64[2] = _XMM3;
            *(__m128 *)v227.m256i_i8 = v73;
            *(__m128 *)&v226.m256i_u64[2] = _XMM1;
            *(__m128 *)v226.m256i_i8 = v94;
            *(__m256i *)v224.x.v.m128_f32 = v226;
            *(__m256i *)v224.z.v.m128_f32 = v227;
            normal.v = v73;
            rOutTangent.v = v94;
            rOutBitangent.v = _XMM1;
            if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2888, ASSERT_TYPE_ASSERT, "(r_particleDrawData.rotationAngle == 0.0f)", (const char *)&queryFormat, "r_particleDrawData.rotationAngle == 0.0f") )
              __debugbreak();
          }
          if ( !ParticleEmitter::CullBasedOnAlphaThreshhold(this, NULL, CameraDistanceArray[v65], _RDI->m_particleDrawData) )
          {
            ++this->m_numBeams;
            goto LABEL_161;
          }
          goto LABEL_235;
        case 3u:
          v102 = frustumPlaneCount;
          v103 = pCamera;
          v104.v = (__m128)RotationAngleArray[v65];
          v105 = pDrawStatea;
          v106 = CameraDistanceArray;
          _RDI->m_particleDrawData[0].rotationAngle = v104.v.m128_f32[0];
          if ( ParticleEmitter::DrawSetup_Flare(this, v105->drawFlares, v103, v102, &r_particleStateData->m_particleState, v104.v.m128_f32[0], v106[v65], _RDI->m_particleDrawData, &outFlareDrawData) )
          {
            if ( outEmitterDataIndex != -1 )
              goto LABEL_162;
            v107 = _RDI->m_particleDrawData[0].posWorld.v;
            flareSurfGlob = v105->flareSurfGlob;
            v109 = _mm_shuffle_ps(v107, v107, 85).m128_f32[0] - pCamera->origin.v[1];
            flareData.worldPosition.v[0] = v107.m128_f32[0] - pCamera->origin.v[0];
            flareData.worldPosition.v[2] = _mm_shuffle_ps(v107, v107, 170).m128_f32[0] - pCamera->origin.v[2];
            flareData.worldPosition.v[1] = v109;
            if ( R_AddFlareEmitterData(flareSurfGlob, (const GfxSpriteEmitter *)&v196->m_materialData, &flareData, &outEmitterDataIndex) )
              goto LABEL_162;
          }
          goto LABEL_235;
        case 4u:
          v110 = particleIndex;
          v111 = frustumPlaneCount;
          _RDI->m_particleDrawData[0].rotationAngle = COERCE_FLOAT(*(_OWORD *)&RotationAngleArray[v65]);
          if ( ParticleEmitter::DrawSetup_GeoTrail(this, v111, &r_particleStateData->m_particleState, v110, _RDI->m_particleDrawData) )
            goto LABEL_161;
          goto LABEL_235;
        case 8u:
          if ( v204 )
          {
            v112.v = (__m128)RotationAngleArray[v65];
            Float4RadianToQuat(v92, (const float4 *)0x140000000i64);
            Float4UnitQuatToAxis(v114, v113);
            v28 = !_RDI->m_particleDrawData[0].hasParticleSim;
            *(__m128 *)&v222.m256i_u64[2] = _XMM1;
            *(float4 *)v222.m256i_i8 = (float4)v112.v;
            *(__m256i *)v224.x.v.m128_f32 = v222;
            v224.z.v = v73;
            if ( v28 )
            {
              Float4x4Mul(&v224, M1, v115);
              *(__m128 *)v229.m256i_i8 = v73;
              *(float4 *)v228.m256i_i8 = (float4)v112.v;
              *(__m128 *)&v229.m256i_u64[2] = _XMM3;
              *(__m128 *)&v228.m256i_u64[2] = _XMM1;
              *(__m256i *)v224.x.v.m128_f32 = v228;
              *(__m256i *)v224.z.v.m128_f32 = v229;
            }
            v28 = _RDI->m_particleDrawData[0].rotationAngle == 0.0;
            rOutTangent.v = (__m128)v224.x;
            rOutBitangent.v = (__m128)v224.y;
            normal.v = v73;
            if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2987, ASSERT_TYPE_ASSERT, "(r_particleDrawData.rotationAngle == 0.0f)", (const char *)&queryFormat, "r_particleDrawData.rotationAngle == 0.0f") )
              __debugbreak();
          }
          else if ( ParticleState::IsRelativeToEmitterOrigin(&r_particleStateData->m_particleState) )
          {
            v118 = SpawnQuatArray[v65].v;
            Float4UnitQuatToAxis(v117, v116);
            rOutTangent.v = v118;
            normal.v = _XMM1;
            rOutBitangent.v = _mm128_sub_ps((__m128)0i64, v73);
          }
          else
          {
            _RDI->m_particleDrawData[0].rotationAngle = COERCE_FLOAT(*(_OWORD *)&RotationAngleArray[v65]);
          }
          v119 = CameraDistanceArray[v65];
          if ( _RDI->m_particleDrawData[0].hasParticleSim )
          {
            if ( !ParticleEmitter::CullBasedOnAlphaThreshhold(this, NULL, v119, _RDI->m_particleDrawData) )
              goto LABEL_161;
          }
          else if ( !ParticleEmitter::CullElementForDraw_Sprite(this, pCamera, frustumPlaneCount, &r_particleStateData->m_particleState, v119, _RDI->m_particleDrawData) )
          {
            goto LABEL_161;
          }
          goto LABEL_235;
        case 0xAu:
          if ( ParticleState::UseBoltInfo(&r_particleStateData->m_particleState) )
          {
            v120 = posArray[v65].v;
            v121 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v120, v120, 0), v205->m_systemTransform.x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v120, v120, 85), v205->m_systemTransform.y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v120, v120, 170), v205->m_systemTransform.z.v), v205->m_systemTransform.w.v)));
            v122 = VelocityArray[v65].v;
            rPos.v = v121;
            _XMM3 = _mm_shuffle_ps(v122, v122, 0);
            v123 = _mm128_add_ps(_mm128_mul_ps(_XMM3, v205->m_systemTransform.x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v122, v122, 85), v205->m_systemTransform.y.v), _mm128_mul_ps(_mm_shuffle_ps(v122, v122, 170), v205->m_systemTransform.z.v)));
          }
          else
          {
            if ( ParticleState::GetRelativeVelocityType(&r_particleStateData->m_particleState) == PARTICLE_RELATIVE_VELOCITY_TYPE_WORLD_WITH_BOLT_INFO )
            {
              v124 = SpawnPosArray[v65].v;
              _XMM3 = _mm_shuffle_ps(v124, v124, 85);
              rPos.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v124, v124, 0), v205->m_systemTransform.x.v), _mm128_add_ps(_mm128_mul_ps(_XMM3, v205->m_systemTransform.y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v124, v124, 170), v205->m_systemTransform.z.v), v205->m_systemTransform.w.v)));
            }
            else
            {
              rPos.v = (__m128)posArray[v65];
            }
            v123 = VelocityArray[v65].v;
          }
          v125 = r_particleStateData->m_particleState.m_pStateDef;
          rVelocity.v = v123;
          if ( (v125->flags & 0x2000000) != 0 )
          {
            ParentVelocityArray = Particle_GetParentVelocityArray(&r_particleStateData->m_particleData);
            if ( !r_particleStateData->m_particleState.m_tailDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 485, ASSERT_TYPE_ASSERT, "(m_tailDataList)", (const char *)&queryFormat, "m_tailDataList") )
              __debugbreak();
            v127 = ParentVelocityArray[v65].v;
            _RCX = &r_particleStateData->m_particleState.m_tailDataList->average.v;
            _XMM1 = _mm128_mul_ps(v127, v127);
            __asm
            {
              vinsertps xmm2, xmm1, xmm1, 8
              vhaddps xmm0, xmm2, xmm2
              vhaddps xmm0, xmm0, xmm0
            }
            v133 = _mm_sqrt_ps(_XMM0);
            if ( v133.m128_f32[0] >= 0.00000011920929 )
            {
              _XMM1 = _mm128_mul_ps(v127, v127);
              __asm
              {
                vinsertps xmm2, xmm1, xmm1, 8
                vhaddps xmm0, xmm2, xmm2
                vhaddps xmm0, xmm0, xmm0
                vrsqrtps xmm1, xmm0
              }
              v127 = _mm128_mul_ps(_XMM1, v127);
            }
            __asm { vbroadcastss xmm0, dword ptr [rcx+14h] }
            _XMM3 = _mm128_mul_ps(v123, v123);
            v140 = _mm128_mul_ps(_XMM0, v133);
            __asm
            {
              vinsertps xmm0, xmm3, xmm3, 8
              vhaddps xmm1, xmm0, xmm0
              vhaddps xmm2, xmm1, xmm1
            }
            if ( *(float *)&_XMM2 >= 0.00000011920929 )
            {
              __asm
              {
                vinsertps xmm0, xmm3, xmm3, 8
                vhaddps xmm1, xmm0, xmm0
                vhaddps xmm0, xmm1, xmm1
                vrsqrtps xmm1, xmm0
              }
              v123 = _mm128_mul_ps(_XMM1, v123);
            }
            v123 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v127, v123), v140), v123);
            v148 = (__m128)_RCX[1].m128_u32[0];
            rVelocity.v = v123;
            if ( v148.m128_f32[0] < 1.0 )
            {
              _XMM3 = _mm_shuffle_ps(v148, v148, 0);
              v123 = _mm128_add_ps(_mm128_sub_ps(*_RCX, _mm128_mul_ps(_XMM3, *_RCX)), _mm128_mul_ps(v123, _XMM3));
              rVelocity.v = v123;
            }
            v88 = v183;
            if ( _RCX[1].m128_f32[2] >= 0.016666668 )
            {
              v149 = m_particleCountRunning - 1;
              *_RCX = v123;
              if ( particleIndex == v149 )
                _RCX[1].m128_i32[2] = 0;
            }
          }
          v28 = !_RDI->m_particleDrawData[0].hasParticleSim;
          v150 = CameraDistanceArray;
          _RDI->m_particleDrawData[0].rotationAngle = COERCE_FLOAT(*(_OWORD *)&RotationAngleArray[v65]);
          if ( v28 )
          {
            if ( ParticleEmitter::DrawSetup_Tail(this, pCamera, frustumPlaneCount, r_particleStateData->m_particleState.m_elementTypeModule.pModuleInitTail, &rOutTangent, &rOutBitangent, &normal, &rPos, &rVelocity, v150[v65], _RDI->m_particleDrawData) )
              goto LABEL_156;
          }
          else if ( !ParticleEmitter::CullBasedOnAlphaThreshhold(this, NULL, v150[v65], _RDI->m_particleDrawData) )
          {
            _RDI->m_particleDrawData[0].velDirWorld.v = v123;
LABEL_156:
            if ( !BYTE2(r_particleStateData->m_particleState.m_elementTypeModule.pModule[1].m_flags) )
              goto LABEL_161;
            v105 = pDrawStatea;
            if ( !_RDI->m_particleDrawData[0].hasParticleSim )
              _RDI->m_particleDrawData[0].rotationAngle = 0.0;
            goto LABEL_162;
          }
          goto LABEL_235;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VFX: Unsupported sprite type in ParticleEmitter::DrawElements_SpriteCommon") )
            __debugbreak();
LABEL_161:
          v105 = pDrawStatea;
LABEL_162:
          v151 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
          _XMM3 = (__m128)LODWORD(_RDI->m_particleDrawData[0].size.v[0]);
          ParticleSystem::AccumulateBounds(v151, boundsAccumulator, &_RDI->m_particleDrawData[0].posWorld, _XMM3.m128_f32[0], _RDI->m_particleDrawData[0].size.v[1]);
          if ( (ParticleEmitter::GetSystemOwner(this)->m_flags & 0x1000000000i64) != 0 || !fx_umbra_culling->current.enabled || v88 == 4 )
            goto LABEL_170;
          if ( v88 == 3 )
            goto LABEL_190;
          if ( v88 == 1 )
            goto LABEL_170;
          v152 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
          _XMM3 = (__m128)LODWORD(_RDI->m_particleDrawData[0].size.v[0]);
          v153 = v152;
          ParticleSystem::AccumulateBounds(v152, v212, &_RDI->m_particleDrawData[0].posWorld, _XMM3.m128_f32[0], _RDI->m_particleDrawData[0].size.v[1]);
          if ( (v153->m_flags & 0x200000000i64) != 0 && !transShadowPass )
            goto LABEL_235;
          v88 = v183;
LABEL_170:
          if ( v88 == 3 )
            goto LABEL_190;
          if ( outEmitterDataIndex != -1 )
            goto LABEL_193;
          if ( (r_particleStateData->m_particleState.m_pStateDef->flags & 0x4000000000i64) != 0 )
          {
            if ( !r_particleStateData->m_particleData.m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 370, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            if ( particleIndex >= r_particleStateData->m_particleData.m_particleCountMax )
            {
              LODWORD(rOutNormal) = r_particleStateData->m_particleData.m_particleCountMax;
              LODWORD(r_particleDrawData) = particleIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 370, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", r_particleDrawData, rOutNormal) )
                __debugbreak();
            }
            if ( !r_particleStateData->m_particleData.m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 370, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            v154 = (vec4_t *)&ParticleData::GetParticleDataArray(&r_particleStateData->m_particleData, PARTICLE_DATA_SHADER_PARAMS)[48 * v65];
            *(__m256i *)data.falloffParms.v = *(__m256i *)v196->m_materialData.falloffParms.v;
            *(__m256i *)data.transparentColor.v = *(__m256i *)v196->m_materialData.transparentColor.v;
            *(__m256i *)data.eyeOffsetParms.v = *(__m256i *)v196->m_materialData.eyeOffsetParms.v;
            *(__m256i *)data.featherParms0.v = *(__m256i *)v196->m_materialData.featherParms0.v;
            *(__m256i *)data.regionHighlightParms.v = *(__m256i *)v196->m_materialData.regionHighlightParms.v;
            m_shaderGraphOptions = v196->m_shaderGraphOptions;
            *(__m256i *)data.depthScanOutlineColor.v = *(__m256i *)v196->m_materialData.depthScanOutlineColor.v;
            if ( m_shaderGraphOptions == PARTICLE_SHADER_GRAPH_SPHERICALZ )
            {
              data.depthScanColor = *v154;
              data.depthScanOutlineColor = v154[1];
              v156 = 1.0 - (float)(v154[2].v[0] * v154[2].v[0]);
              I_fclamp(v156, 0.0, 1.0);
              v157 = I_fclamp(1.0 - (float)(v154[2].v[1] * v154[2].v[1]), 0.0, 1.0);
              data.regionHighlightParms.v[2] = *(float *)&v157;
              data.regionHighlightParms.v[0] = v156;
              goto LABEL_186;
            }
            if ( m_shaderGraphOptions == PARTICLE_SHADER_GRAPH_DEPTHSCAN )
            {
              data.depthScanColor = *v154;
              data.depthScanOutlineColor = v154[1];
              v158 = v154[2].v[1];
              data.regionHighlightParms.v[0] = v154[2].v[0];
              data.regionHighlightParms.v[2] = v158;
LABEL_186:
              data.regionHighlightParms.v[3] = 0.0;
              data.regionHighlightParms.v[1] = 0.0;
            }
            v159 = R_AddCodeSurfEmitterData(v105->codeSurfGlob, &data, &outEmitterDataIndex);
            v88 = v183;
            goto LABEL_189;
          }
          v159 = R_AddCodeSurfEmitterData(v105->codeSurfGlob, (const GfxSpriteEmitter *)&v196->m_materialData, &outEmitterDataIndex);
LABEL_189:
          if ( !v159 )
            goto LABEL_235;
LABEL_190:
          if ( outEmitterDataIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3157, ASSERT_TYPE_ASSERT, "(emitterDataIndex != 0xffffffff)", (const char *)&queryFormat, "emitterDataIndex != PER_EMITTER_DATA_INVALID_INDEX") )
            __debugbreak();
LABEL_193:
          if ( v181 || _RDI->m_particleDrawData[0].hasParticleSim )
            goto LABEL_203;
          if ( !pLinkedAssetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3162, ASSERT_TYPE_ASSERT, "(pMaterialLinkedAssetListDef)", (const char *)&queryFormat, "pMaterialLinkedAssetListDef") )
            __debugbreak();
          v160 = Particle_GetRandomAsset(pLinkedAssetList, RandomSeedArray[v65], FXRAND_VISUAL)->material;
          material = v160;
          if ( SLOBYTE(v160->surfaceFlags) < 0 )
          {
            v161 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
            v162 = ParticleSystem::GetDef(v161);
            R_WarnOncePerFrame(R_WARN_VFX_INVALID_MATERIAL, material->name, v162->name, "SURF_NODRAW");
            goto LABEL_235;
          }
          if ( v88 <= 8 )
          {
            v163 = 265;
            if ( _bittest(&v163, v88) )
            {
              v164 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
              v165 = ParticleSystem::GetDef(v164);
              R_WarnOncePerFrame(R_WARN_VFX_MATERIAL_LIST_ATLAS, material->name, v165->name, "SURF_NODRAW");
LABEL_203:
              v160 = material;
            }
          }
          if ( v160 )
            goto LABEL_208;
          if ( !_RDI->m_particleDrawData[0].hasParticleSim )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3176, ASSERT_TYPE_ASSERT, "(material || r_particleDrawData.hasParticleSim)", (const char *)&queryFormat, "material || r_particleDrawData.hasParticleSim") )
              __debugbreak();
LABEL_208:
            if ( !_RDI->m_particleDrawData[0].hasParticleSim )
              goto LABEL_215;
          }
          if ( v182 )
          {
LABEL_215:
            v167 = pParticleSimAnimation;
LABEL_216:
            if ( !v167 && _RDI->m_particleDrawData[0].hasParticleSim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3191, ASSERT_TYPE_ASSERT, "(pParticleSimAnimation || !r_particleDrawData.hasParticleSim)", (const char *)&queryFormat, "pParticleSimAnimation || !r_particleDrawData.hasParticleSim") )
              __debugbreak();
            if ( (_BYTE)v214 )
            {
              _XMM1.v = (__m128)_RDI->m_particleDrawData[0].posWorld;
              _XMM3 = (__m128)_RDI->m_particleDrawData[0].color.v.m128_u32[3];
              v171 = _RDI->m_particleDrawData[0].size.v[0];
              system = v105->system;
              LODWORD(posWorld.v[0]) = _XMM1.v.m128_i32[0];
              __asm
              {
                vextractps dword ptr [rsp+598h+posWorld+4], xmm1, 1
                vextractps dword ptr [rsp+598h+posWorld+8], xmm1, 2
              }
              FX_AddVisBlocker(system, &posWorld, v171, _XMM3.m128_f32[0]);
            }
            if ( (ParticleEmitter::GetSystemOwner(this)->m_flags & 0x1000000000i64) != 0 )
            {
              v173 = ParticleManager::GetParticleManager(this->m_pSystemOwner->m_localClientNum);
              v174 = ParticleEmitter::GetSystemOwner(this);
              ParticleManager::GetGlobalTintColor(v173, &v234, v174);
              v167 = pParticleSimAnimation;
              this->m_particleDrawData[0].color.v = _mm128_mul_ps(this->m_particleDrawData[0].color.v, v234.v);
            }
            if ( _RDI->m_particleDrawData[0].hasParticleSim )
              v175 = v167->material;
            else
              v175 = material;
            v176 = this->m_emitterLife - SpawnTimeArray[v65];
            _RDI->m_particleDrawData[0].randomSeed = RandomSeedArray[v65];
            _RDI->m_particleDrawData[0].particleLifeInSecs = v176;
            if ( v175 )
              packedAtlasData = v175->packedAtlasData;
            else
              packedAtlasData = NULL;
            _RDI->m_particleDrawData[0].packedAtlasData = packedAtlasData;
            if ( (ParticleEmitter::GetEmitterDef(this)->flags & 0x200000) != 0 || (v175->surfaceFlags & 0x8000000) != 0 && (ParticleEmitter::GetEmitterDef(this)->flags & 0x400000) == 0 )
              _RDI->m_particleDrawData[0].codeSurfFlags |= 2u;
            ParticleEmitter::SpriteDrawPostCull(this, v105, r_particleStateData, &rOutTangent, &rOutBitangent, &normal, activeLightGridsBitmaska, material, _RDI->m_particleDrawData, pParticleSimAnimation, particleIndex, posArray, &rParticleTransform, &r_particleStateData->m_particleState.m_elementTypeModule, &outFlareDrawData, outEmitterDataIndex);
            goto LABEL_235;
          }
          v166 = v213;
          if ( !v213 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3182, ASSERT_TYPE_ASSERT, "(pParticleSimLinkedAssetListDef)", (const char *)&queryFormat, "pParticleSimLinkedAssetListDef") )
            __debugbreak();
          v167 = (FxParticleSimAnimation *)Particle_GetRandomAsset(v166, RandomSeedArray[v65], FXRAND_VISUAL)->material;
          pParticleSimAnimation = v167;
          if ( SLOBYTE(v167->material->surfaceFlags) >= 0 )
            goto LABEL_216;
          v168 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
          v169 = ParticleSystem::GetDef(v168);
          R_WarnOncePerFrame(R_WARN_VFX_INVALID_MATERIAL, v167->material->name, v169->name, "SURF_NODRAW");
LABEL_235:
          p_posWorld = &_RDI->m_particleDrawData[0].posWorld;
          v63 = particleIndex + 1;
          ++v65;
          particleIndex = v63;
          if ( v63 >= m_particleCountRunning )
            return;
          break;
      }
    }
  }
}

/*
==============
ParticleEmitter::DrawLights
==============
*/
void ParticleEmitter::DrawLights(ParticleEmitter *this, const FxCamera *camera)
{
  int v4; 
  unsigned int numStates; 
  __int64 v6; 
  __int64 v7; 
  ParticleEmitter::ParticleStateData *v8; 

  if ( !camera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 821, ASSERT_TYPE_ASSERT, "(camera)", (const char *)&queryFormat, "camera") )
    __debugbreak();
  v4 = Sys_Microseconds();
  if ( ParticleEmitter::DrawCommon(this) )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    if ( numStates )
    {
      v6 = numStates;
      v7 = 0i64;
      do
      {
        v8 = &this->m_pParticleStateData[v7];
        if ( v8->m_particleState.m_pStateDef->elementType == 5 )
        {
          ParticleEmitter::DrawSetup_LightOmni(this, v8, camera, this->m_particleDrawData);
        }
        else if ( v8->m_particleState.m_pStateDef->elementType == 6 )
        {
          ParticleEmitter::DrawSetup_LightSpot(this, v8, camera, this->m_particleDrawData);
        }
        ++v7;
        --v6;
      }
      while ( v6 );
    }
    this->m_profilerRenderTime += Sys_Microseconds() - v4;
  }
}

/*
==============
ParticleEmitter::DrawNonSpriteParticles
==============
*/
void ParticleEmitter::DrawNonSpriteParticles(ParticleEmitter *this, const FxCamera *pCamera)
{
  int v3; 
  unsigned int numStates; 
  __int64 v5; 
  __int64 v6; 
  ParticleEmitter::ParticleStateData *v7; 
  unsigned int elementType; 
  const ParticleModuleInitParticleSim *m_pModuleInitParticleSim; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 754, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  v3 = Sys_Microseconds();
  if ( ParticleEmitter::DrawCommon(this) )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    if ( numStates )
    {
      v5 = numStates;
      v6 = 0i64;
      do
      {
        v7 = &this->m_pParticleStateData[v6];
        elementType = v7->m_particleState.m_pStateDef->elementType;
        if ( elementType == 2 )
        {
          if ( *((_BYTE *)&v7->m_particleState.m_elementTypeModule.pModule[6].m_type + 2) )
            ParticleEmitter::DrawSetup_Decal(this, v7, this->m_particleDrawData);
        }
        else if ( elementType == 7 )
        {
          m_pModuleInitParticleSim = v7->m_particleState.m_pModuleInitParticleSim;
          if ( m_pModuleInitParticleSim )
            ParticleEmitter::DrawSetup_ParticleSimModel(this, v7, m_pModuleInitParticleSim);
          else
            ParticleEmitter::DrawSetup_Model(this, v7, this->m_particleDrawData);
        }
        ++v6;
        --v5;
      }
      while ( v5 );
    }
    this->m_profilerRenderTime = Sys_Microseconds() - v3;
  }
}

/*
==============
ParticleEmitter::DrawSetup_Decal
==============
*/
void ParticleEmitter::DrawSetup_Decal(ParticleEmitter *this, ParticleEmitter::ParticleStateData *r_particleStateData, const Particle_DrawData *r_particleDrawData)
{
  unsigned int m_particleCountRunning; 
  float4 *SizeArray; 
  float4 *RotationAngleArray; 
  float *AtlasIndexArray; 
  int *RandomSeedArray; 
  vector4 *EmitterTransform; 
  ParticleState::ElementTypeModule v11; 
  unsigned int v12; 
  const ParticleLinkedAssetListDef *v13; 
  __int64 v14; 
  signed __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  int v21; 
  int v22; 
  __int128 v23; 
  __int64 v24; 
  const Particle_DrawData *v25; 
  tmat33_t<vec3_t> *v31; 
  __m128 v33; 
  int v35; 
  unsigned __int8 v36; 
  int v38; 
  unsigned __int8 v39; 
  int v41; 
  unsigned __int8 v42; 
  int v43; 
  int v45; 
  unsigned __int8 v46; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  FxMarkProjectionAxis v49; 
  unsigned __int8 color[4]; 
  unsigned int v51; 
  float4 *ColorArray; 
  ParticleEmitter *v53; 
  const Particle_DrawData *v54; 
  float4 *PositionArray; 
  vector4 *rEmitterTransform; 
  ParticleState *rParticleState; 
  __int64 v58; 
  int v59; 
  int v60; 
  int v61; 
  vec4_t result; 
  tmat33_t<vec3_t> v63; 
  vec3_t origin; 
  __int128 v65; 
  __m256i v66; 
  __m256i v67; 
  tmat33_t<vec3_t> originalAxis; 
  vec4_t markSizeOrig; 
  tmat33_t<vec3_t> axis; 

  m_particleCountRunning = r_particleStateData->m_particleData.m_particleCountRunning;
  v53 = this;
  v54 = r_particleDrawData;
  rParticleState = &r_particleStateData->m_particleState;
  v51 = m_particleCountRunning;
  SizeArray = Particle_GetSizeArray(&r_particleStateData->m_particleData);
  PositionArray = Particle_GetPositionArray(&r_particleStateData->m_particleData);
  RotationAngleArray = Particle_GetRotationAngleArray(&r_particleStateData->m_particleData);
  ColorArray = Particle_GetColorArray(&r_particleStateData->m_particleData);
  AtlasIndexArray = Particle_GetAtlasIndexArray(&r_particleStateData->m_particleData);
  RandomSeedArray = Particle_GetRandomSeedArray(&r_particleStateData->m_particleData);
  EmitterTransform = (vector4 *)ParticleEmitter::GetEmitterTransform(this, &r_particleStateData->m_particleState);
  v11.pModule = (const ParticleModule *)r_particleStateData->m_particleState.m_elementTypeModule;
  v12 = 0;
  rEmitterTransform = EmitterTransform;
  v13 = (const ParticleLinkedAssetListDef *)&v11.pModule[2];
  v49 = *((_BYTE *)&v11.pModule[6].m_type + 3);
  v66 = *(__m256i *)EmitterTransform->x.v.m128_f32;
  v67 = *(__m256i *)EmitterTransform->z.v.m128_f32;
  if ( m_particleCountRunning )
  {
    v14 = (char *)RandomSeedArray - (char *)AtlasIndexArray;
    v15 = (char *)RotationAngleArray - (char *)SizeArray;
    ColorArray = (float4 *)((char *)ColorArray - (__int64)SizeArray);
    v16 = v67.m256i_i32[2];
    v17 = v66.m256i_i32[6];
    v18 = v66.m256i_i32[2];
    _XMM13 = v66.m256i_u32[0];
    _XMM15 = v66.m256i_u32[4];
    v58 = v14;
    do
    {
      v21 = *(_DWORD *)((char *)AtlasIndexArray + v14);
      Particle_VerifyAssetList(v13);
      v22 = Particle_RandomIndex(v21, FXRAND_VISUAL, v13->numAssets);
      v23 = *(__int128 *)((char *)SizeArray + v15);
      v24 = (__int64)&v13->assetList[v22];
      markSizeOrig = (vec4_t)SizeArray->v;
      v65 = (__int128)*FX_DeriveMarkSize(&result, &markSizeOrig);
      if ( *(float *)&v65 != 0.0 && *((float *)&v65 + 1) != 0.0 && *((float *)&v65 + 2) != 0.0 )
      {
        v25 = v54;
        ParticleEmitter::GetWorldPos(v53, &PositionArray[v12], &v54->posWorld, rParticleState, rEmitterTransform);
        _XMM1.v = (__m128)v25->posWorld;
        __asm { vunpcklps xmm0, xmm13, xmm14 }
        *(double *)originalAxis.m[0].v = *(double *)&_XMM0;
        __asm { vunpcklps xmm0, xmm15, xmm0 }
        *(double *)originalAxis.row1.v = *(double *)&_XMM0;
        _XMM0 = v67.m256i_u32[0];
        origin.v[0] = _XMM1.v.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rsp+298h+origin+4], xmm1, 1
          vextractps dword ptr [rsp+298h+origin+8], xmm1, 2
          vunpcklps xmm0, xmm0, xmm1
        }
        v59 = v18;
        LODWORD(originalAxis.m[0].v[2]) = v18;
        v60 = v17;
        LODWORD(originalAxis.m[1].v[2]) = v17;
        v61 = v16;
        *(double *)originalAxis.row2.v = *(double *)&_XMM0;
        LODWORD(originalAxis.m[2].v[2]) = v16;
        v31 = FX_OrientDecalProjectionAxis(&v63, &originalAxis, v49, *(float *)&v23);
        _XMM4 = 0i64;
        axis = *v31;
        v33 = *(__m128 *)((char *)&SizeArray->v + (_QWORD)ColorArray);
        __asm { vroundss xmm0, xmm4, xmm2, 1 }
        v35 = (int)*(float *)&_XMM0;
        _mm_shuffle_ps(v33, v33, 85);
        if ( (int)*(float *)&_XMM0 > 255 )
          v35 = 255;
        v36 = v35;
        if ( v35 < 0 )
          v36 = 0;
        color[0] = v36;
        __asm { vroundss xmm0, xmm4, xmm2, 1 }
        v38 = (int)*(float *)&_XMM0;
        _mm_shuffle_ps(v33, v33, 170);
        if ( (int)*(float *)&_XMM0 > 255 )
          v38 = 255;
        v39 = v38;
        if ( v38 < 0 )
          v39 = 0;
        color[1] = v39;
        __asm { vroundss xmm0, xmm4, xmm2, 1 }
        v41 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 > 255 )
          v41 = 255;
        v42 = v41;
        if ( v41 < 0 )
          v42 = 0;
        v43 = (int)*AtlasIndexArray;
        color[2] = v42;
        _mm_shuffle_ps(v33, v33, 255);
        __asm { vroundss xmm0, xmm4, xmm2, 1 }
        v45 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 > 255 )
          v45 = 255;
        v46 = v45;
        if ( v45 < 0 )
          v46 = 0;
        color[3] = v46;
        SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v53);
        Def = ParticleSystem::GetDef(SystemOwner);
        R_AddParticleDecalVolume(&origin, (const vec3_t *)&v65, &axis, color, v43, *(Material **)(v24 + 8), Def->name);
      }
      v14 = v58;
      ++v12;
      ++SizeArray;
      ++AtlasIndexArray;
    }
    while ( v12 < v51 );
  }
}

/*
==============
ParticleEmitter::DrawSetup_Flare
==============
*/
char ParticleEmitter::DrawSetup_Flare(ParticleEmitter *this, bool drawFlares, const FxCamera *pCamera, unsigned int frustumPlaneCount, const ParticleState *pParticleState, float rotationAngle, float cameraDistance, Particle_DrawData *r_particleDrawData, Particle_FlareDrawData *outFlareDrawData)
{
  float4 v13; 
  ParticleState::ElementTypeModule v14; 
  __m128 v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __m128 v22; 
  float v23; 
  unsigned int m_flags; 
  __m128 v25; 
  float v26; 
  double v27; 
  const vector4 *EmitterTransform; 
  float v29; 
  __m128 v; 
  __m128 v31; 
  __m128 v32; 
  float v33; 
  float v34; 
  double v35; 
  float v36; 
  __m128 v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  double CurveValue; 
  float v44; 
  double v45; 
  float v46; 
  double v47; 
  __m128 v48; 
  bool ShouldDrawWithViewModel; 
  float v50; 
  __int64 v51; 
  bool v52; 
  bool v53; 
  __int128 v54; 
  __int128 v55; 
  float v56; 
  float v57; 
  float v58; 
  __m128 v61; 
  double v62; 
  __m128 v63; 
  double v64; 
  float4 v69; 
  float v70; 
  float v71; 
  float v72; 
  int v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float c; 
  float s; 
  float v89; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3320, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3321, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( drawFlares )
  {
    if ( !fx_draw_flare->current.enabled )
      return 1;
    if ( !ParticleEmitter::CullElementForDraw_Sprite(this, pCamera, frustumPlaneCount, pParticleState, cameraDistance, r_particleDrawData) )
    {
      v13.v = (__m128)r_particleDrawData->posWorld;
      v14.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
      v15 = _mm_shuffle_ps(v13.v, v13.v, 85);
      LODWORD(v16) = _mm_shuffle_ps(v13.v, v13.v, 170).m128_u32[0];
      if ( !v14.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3360, ASSERT_TYPE_ASSERT, "(pModuleInitFlare)", (const char *)&queryFormat, "pModuleInitFlare") )
        __debugbreak();
      v17 = v16 - pCamera->origin.v[2];
      v18 = v13.v.m128_f32[0] - pCamera->origin.v[0];
      v22 = v15;
      v19 = v15.m128_f32[0] - pCamera->origin.v[1];
      LODWORD(v20) = COERCE_UNSIGNED_INT((float)((float)(v19 * pCamera->axis.m[1].v[1]) + (float)(v18 * pCamera->axis.m[1].v[0])) + (float)(v17 * pCamera->axis.m[1].v[2])) ^ _xmm;
      v22.m128_f32[0] = (float)((float)(v19 * pCamera->axis.m[2].v[1]) + (float)(v18 * pCamera->axis.m[2].v[0])) + (float)(v17 * pCamera->axis.m[2].v[2]);
      v21 = v22.m128_f32[0];
      v23 = (float)((float)(v19 * pCamera->axis.m[0].v[1]) + (float)(v18 * pCamera->axis.m[0].v[0])) + (float)(v17 * pCamera->axis.m[0].v[2]);
      v83 = v20;
      v85 = v22.m128_f32[0];
      if ( v23 > 0.0 )
      {
        m_flags = v14.pModule[4].m_flags;
        v25 = (__m128)LODWORD(FLOAT_1_0);
        v26 = FLOAT_1_0;
        if ( (m_flags & 2) != 0 )
        {
          v27 = I_rsqrt((float)((float)(v22.m128_f32[0] * v22.m128_f32[0]) + (float)(v20 * v20)) + (float)(v23 * v23));
          m_flags = v14.pModule[4].m_flags;
          v22.m128_f32[0] = *(float *)&v27 * v23;
          v25 = v22;
        }
        if ( (m_flags & 0x60) == 32 )
        {
          EmitterTransform = ParticleEmitter::GetEmitterTransform(this, pParticleState);
          v29 = pCamera->origin.v[0] - v13.v.m128_f32[0];
          v = EmitterTransform->x.v;
          v31 = EmitterTransform->y.v;
          v32 = EmitterTransform->z.v;
          v33 = pCamera->origin.v[1] - _mm_shuffle_ps(v13.v, v13.v, 85).m128_f32[0];
          v34 = pCamera->origin.v[2] - _mm_shuffle_ps(v13.v, v13.v, 170).m128_f32[0];
          v35 = I_rsqrt((float)((float)(v33 * v33) + (float)(v29 * v29)) + (float)(v34 * v34));
          v36 = *(float *)&v35 * v29;
          v37 = *(__m128 *)&v14.pModule[2].m_type;
          v38 = *(float *)&v35 * v34;
          v39 = *(float *)&v35 * v33;
          v40 = _mm_shuffle_ps(v37, v37, 85).m128_f32[0];
          v41 = _mm_shuffle_ps(v37, v37, 170).m128_f32[0];
          v42 = (float)((float)((float)((float)((float)(_mm_shuffle_ps(v31, v31, 85).m128_f32[0] * v40) + (float)(_mm_shuffle_ps(v, v, 85).m128_f32[0] * v37.m128_f32[0])) + (float)(_mm_shuffle_ps(v32, v32, 85).m128_f32[0] * v41)) * v39) + (float)((float)((float)((float)(v.m128_f32[0] * v37.m128_f32[0]) + (float)(v31.m128_f32[0] * v40)) + (float)(v32.m128_f32[0] * v41)) * v36)) + (float)((float)((float)((float)(_mm_shuffle_ps(v31, v31, 170).m128_f32[0] * v40) + (float)(_mm_shuffle_ps(v, v, 170).m128_f32[0] * v37.m128_f32[0])) + (float)(_mm_shuffle_ps(v32, v32, 170).m128_f32[0] * v41)) * v38);
          CurveValue = Particle_GetCurveValue((const ParticleCurveDef *)&v14.pModule[14], v42);
          v44 = *(float *)&CurveValue;
          v45 = Particle_GetCurveValue((const ParticleCurveDef *)&v14.pModule[16], v42);
          v46 = *(float *)&v45;
          v47 = I_fclamp(v44, 0.0, 1.0);
          v48 = v25;
          v48.m128_f32[0] = v25.m128_f32[0] * *(float *)&v47;
          v25 = v48;
          I_fclamp(v46, 0.0, 1.0);
          v20 = v83;
          v21 = v85;
          v26 = v46;
        }
        ShouldDrawWithViewModel = ParticleEmitter::ShouldDrawWithViewModel(this, pParticleState);
        v50 = *(float *)&v14.pModule[1].m_flags;
        v51 = 41i64;
        if ( ShouldDrawWithViewModel )
          v51 = 43i64;
        v52 = 0;
        v53 = (v14.pModule[4].m_flags & 4) == 0;
        v54 = v14.pModule[1].m_flags;
        *(float *)&v54 = (float)(v50 / (float)(v23 * pCamera->origin.v[v51])) * v20;
        v55 = v54;
        v56 = (float)(v21 / (float)(v23 * pCamera->origin.v[v51 + 1])) * v50;
        *(float *)&v54 = v20 / (float)(v23 * pCamera->defaultFov.v[0]);
        v84 = v23 * pCamera->defaultFov.v[0];
        v89 = v23 * pCamera->defaultFov.v[1];
        v57 = fsqrt((float)(*(float *)&v54 * *(float *)&v54) + (float)((float)(v21 / v89) * (float)(v21 / v89)));
        if ( !v53 )
        {
          *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v55 + 1);
          *(double *)&_XMM0 = Particle_GetCurveValue((const ParticleCurveDef *)&v14.pModule[10], (float)(*(float *)&v55 + 1.0) * 0.5);
          v58 = *(float *)&_XMM0;
          *(double *)&_XMM0 = Particle_GetCurveValue((const ParticleCurveDef *)&v14.pModule[12], (float)(v56 + 1.0) * 0.5);
          v86 = *(float *)&_XMM0;
          if ( (v14.pModule[4].m_flags & 0x10) != 0 )
          {
            __asm { vmaxss  xmm0, xmm0, xmm10; val }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, 0.0, 1.0);
            v61 = v25;
            v61.m128_f32[0] = v25.m128_f32[0] * *(float *)&_XMM0;
            v25 = v61;
          }
          else
          {
            v62 = I_fclamp(v58, 0.0, 1.0);
            v63 = v25;
            v63.m128_f32[0] = v25.m128_f32[0] * *(float *)&v62;
            v64 = I_fclamp(v86, 0.0, 1.0);
            v63.m128_f32[0] = v63.m128_f32[0] * *(float *)&v64;
            v25 = v63;
          }
          v52 = (v14.pModule[4].m_flags & 8) != 0;
        }
        if ( v25.m128_f32[0] > 0.0 )
        {
          _XMM1 = _xmm;
          __asm
          {
            vinsertps xmm1, xmm1, xmm13, 0
            vinsertps xmm1, xmm1, xmm13, 10h
            vinsertps xmm1, xmm1, xmm13, 20h ; ' '
          }
          r_particleDrawData->emissiveIntensity.v = _mm128_mul_ps(_XMM1, r_particleDrawData->emissiveIntensity.v);
          if ( v52 )
            _XMM1 = _mm_shuffle_ps(v25, v25, 0);
          v69.v = _mm128_mul_ps(_XMM1, r_particleDrawData->color.v);
          r_particleDrawData->color = (float4)v69.v;
          if ( _mm_shuffle_ps(v69.v, v69.v, 255).m128_f32[0] > this->m_alphaThreshold )
          {
            v70 = *(float *)&v14.pModule[5].m_flags;
            if ( v70 != 0.0 )
              v26 = v26 * (float)((float)((float)((float)(v23 - *(float *)&v14.pModule[5].m_type) / v70) * *(float *)&v14.pModule[6].m_flags) + *(float *)&v14.pModule[6].m_type);
            v71 = *(float *)&v14.pModule[7].m_flags;
            v72 = rotationAngle;
            if ( v71 != 0.0 )
              v72 = (float)((float)(v71 * v57) + *(float *)&v14.pModule[7].m_type) + rotationAngle;
            v73 = *(_DWORD *)&v14.pModule[4].m_type;
            if ( v73 )
              v72 = v72 + (float)(atan2f_0(v56, *(float *)&v55) * (float)v73);
            FastSinCos(v72, &s, &c);
            v74 = (float)((float)((float)(v57 * *(float *)&v14.pModule[8].m_flags) + *(float *)&v14.pModule[8].m_type) * v26) * r_particleDrawData->size.v[0];
            v75 = v74 * c;
            v76 = (float)((float)((float)(v57 * *(float *)&v14.pModule[9].m_flags) + *(float *)&v14.pModule[9].m_type) * v26) * r_particleDrawData->size.v[1];
            v77 = v76 * s;
            v78 = v74 * s;
            v79 = v76 * c;
            outFlareDrawData->clipPos.v[0] = *(float *)&v55;
            outFlareDrawData->clipPos.v[1] = v56;
            outFlareDrawData->clipPos.v[2] = 0.0;
            v80 = (float)(v79 + v78) / v89;
            outFlareDrawData->du.v[0] = (float)(v75 - v77) / v84;
            outFlareDrawData->du.v[1] = v80;
            v81 = (float)(v79 - v78) / v89;
            outFlareDrawData->dv.v[0] = (float)(COERCE_FLOAT(LODWORD(v75) ^ _xmm) - v77) / v84;
            outFlareDrawData->dv.v[1] = v81;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
ParticleEmitter::DrawSetup_GeoTrail
==============
*/
bool ParticleEmitter::DrawSetup_GeoTrail(ParticleEmitter *this, unsigned int frustumPlaneCount, const ParticleState *pParticleState, unsigned int particleIndex, const Particle_DrawData *r_particleDrawData)
{
  __int64 v5; 
  Particle_TrailData *v8; 
  unsigned int numPointsRunning; 
  __int64 lastPointIndex; 
  unsigned int numPointsMax; 
  unsigned int firstPointIndex; 
  __int64 v13; 
  const ParticleEmitterDef *EmitterDef; 
  float *SpawnTimeArray; 
  float min; 
  float max; 
  int *RandomSeedArray; 
  float v19; 
  float v20; 
  double v21; 
  const Particle_DrawData *v22; 
  float spawnDistance; 

  v5 = particleIndex;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3519, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !pParticleState->m_trailDataList )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 482, ASSERT_TYPE_ASSERT, "(m_trailDataList)", (const char *)&queryFormat, "m_trailDataList") )
      __debugbreak();
    if ( !pParticleState->m_trailDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3520, ASSERT_TYPE_ASSERT, "(pParticleState->GetTrailDataList())", (const char *)&queryFormat, "pParticleState->GetTrailDataList()") )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= pParticleState->m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3521, ASSERT_TYPE_ASSERT, "(particleIndex < pParticleState->GetParticleCountMax())", (const char *)&queryFormat, "particleIndex < pParticleState->GetParticleCountMax()") )
    __debugbreak();
  v8 = &ParticleState::GetTrailDataList((ParticleState *)pParticleState)[v5];
  if ( !pParticleState->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  if ( !ParticleManager::ParticleSystemPointerInRange(pParticleState->m_pEmitterOwner->m_pSystemOwner->m_localClientNum, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3525, ASSERT_TYPE_ASSERT, "(ParticleManager::ParticleSystemPointerInRange( pParticleState->GetEmitterOwner()->GetLocalClientNum(), pTrailData ))", (const char *)&queryFormat, "ParticleManager::ParticleSystemPointerInRange( pParticleState->GetEmitterOwner()->GetLocalClientNum(), pTrailData )") )
    __debugbreak();
  ++this->m_numTrails;
  this->m_numTrailSegments += v8->numPointsRunning * v8->numSheets;
  numPointsRunning = v8->numPointsRunning;
  if ( numPointsRunning < 2 )
    return 0;
  lastPointIndex = v8->lastPointIndex;
  if ( v8->pointList[lastPointIndex].spawnDistance == 0.0 )
    return 0;
  numPointsMax = v8->numPointsMax;
  if ( numPointsRunning == numPointsMax )
    firstPointIndex = ((int)lastPointIndex + 1) % numPointsMax;
  else
    firstPointIndex = v8->firstPointIndex;
  if ( firstPointIndex >= numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
    __debugbreak();
  v13 = (firstPointIndex + 1) % v8->numPointsMax;
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  SpawnTimeArray = Particle_GetSpawnTimeArray(v8->pParticleData);
  min = EmitterDef->particleLife.min;
  max = EmitterDef->particleLife.max;
  RandomSeedArray = Particle_GetRandomSeedArray(v8->pParticleData);
  v19 = SpawnTimeArray[firstPointIndex];
  v20 = SpawnTimeArray[v13] - v19;
  if ( v20 == 0.0 )
  {
    v22 = r_particleDrawData;
    r_particleDrawData->geoTrailSegmentLerp = 0.0;
    spawnDistance = v8->pointList[firstPointIndex].spawnDistance;
  }
  else
  {
    v21 = I_fclamp((float)((float)(this->m_emitterLife - (float)((float)((float)(1.0 - fx_randomTable[*RandomSeedArray + 18]) * min) + (float)(max * fx_randomTable[*RandomSeedArray + 18]))) - v19) / v20, 0.0, 1.0);
    v22 = r_particleDrawData;
    r_particleDrawData->geoTrailSegmentLerp = *(float *)&v21;
    spawnDistance = (float)((float)(1.0 - *(float *)&v21) * v8->pointList[firstPointIndex].spawnDistance) + (float)(*(float *)&v21 * v8->pointList[v13].spawnDistance);
  }
  v22->geoTrailSpawnDistance = spawnDistance;
  return spawnDistance != v8->pointList[v8->lastPointIndex].spawnDistance;
}

/*
==============
ParticleEmitter::DrawSetup_LightOmni
==============
*/
void ParticleEmitter::DrawSetup_LightOmni(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const FxCamera *pCamera, Particle_DrawData *r_particleDrawData)
{
  ParticleState::ElementTypeModule v7; 
  __int64 m_particleCountRunning; 
  float4 *PositionArray; 
  int *RandomSeedArray; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v12; 
  unsigned int m_flags; 
  const ParticleLinkedAssetListDef *v14; 
  GfxLightDef *lightDef; 
  Particle_DrawData *v16; 
  signed __int64 v17; 
  float4 *p_posWorld; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  __m128 v; 
  const ParticleSystem *SystemOwner; 
  __m128 v22; 
  float v23; 
  __int128 v24; 
  __int128 v25; 
  float v26; 
  __int128 v27; 
  const FxCamera *v28; 
  float v33; 
  float fadeOutMaxDistance; 
  double CurveValue; 
  const ParticleModuleInitSpawn *m_pModuleInitSpawn; 
  ParticleCurveDef *m_curves; 
  int v39; 
  bool v41; 
  bool v42; 
  unsigned int frustumPlaneCount; 
  GfxLightDef *v44; 
  float *CameraDistanceArray; 
  signed __int64 v47; 
  float4 *SizeArray; 
  signed __int64 v49; 
  float4 *ColorArray; 
  signed __int64 v51; 
  __int64 v53; 
  const vector4 *EmitterTransform; 
  ParticleModuleInitLightOmni *pModuleInitLightOmni; 
  __int128 v56; 
  vec3_t center; 
  vec3_t colorLinearSrgb; 
  vec3_t org; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3583, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( rParticleStateData->m_particleState.m_pStateDef->elementType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3584, ASSERT_TYPE_ASSERT, "(rParticleStateData.m_particleState.GetElementType() == PARTICLE_ELEMENT_TYPE_LIGHT_OMNI)", (const char *)&queryFormat, "rParticleStateData.m_particleState.GetElementType() == PARTICLE_ELEMENT_TYPE_LIGHT_OMNI") )
    __debugbreak();
  v7.pModule = (const ParticleModule *)rParticleStateData->m_particleState.m_elementTypeModule;
  pModuleInitLightOmni = (ParticleModuleInitLightOmni *)v7.pModule;
  if ( !v7.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3587, ASSERT_TYPE_ASSERT, "(pModuleInitLightOmni)", (const char *)&queryFormat, "pModuleInitLightOmni") )
    __debugbreak();
  m_particleCountRunning = rParticleStateData->m_particleData.m_particleCountRunning;
  PositionArray = Particle_GetPositionArray(&rParticleStateData->m_particleData);
  SizeArray = Particle_GetSizeArray(&rParticleStateData->m_particleData);
  ColorArray = Particle_GetColorArray(&rParticleStateData->m_particleData);
  CameraDistanceArray = Particle_GetCameraDistanceArray(&rParticleStateData->m_particleData);
  RandomSeedArray = Particle_GetRandomSeedArray(&rParticleStateData->m_particleData);
  EmitterTransform = ParticleEmitter::GetEmitterTransform(this, &rParticleStateData->m_particleState);
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  v12 = pCamera->frustumPlaneCount;
  if ( (EmitterDef->flags & 4) != 0 && v12 > 5 )
    v12 = 5;
  m_flags = v7.pModule->m_flags;
  v14 = (const ParticleLinkedAssetListDef *)&v7.pModule[1];
  frustumPlaneCount = v12;
  if ( (m_flags & 0x800) != 0 )
  {
    Particle_VerifyAssetList(v14);
    v42 = v14->numAssets == 1;
    if ( v14->numAssets == 1 )
    {
      Particle_VerifyAssetList(v14);
      lightDef = v14->assetList->lightDef;
      goto LABEL_18;
    }
  }
  else
  {
    v42 = 1;
  }
  lightDef = NULL;
LABEL_18:
  v44 = lightDef;
  if ( (_DWORD)m_particleCountRunning )
  {
    v16 = r_particleDrawData;
    v49 = (char *)SizeArray - (char *)PositionArray;
    v51 = (char *)ColorArray - (char *)PositionArray;
    v17 = (char *)CameraDistanceArray - (char *)RandomSeedArray;
    p_posWorld = &r_particleDrawData->posWorld;
    v53 = m_particleCountRunning;
    v47 = (char *)CameraDistanceArray - (char *)RandomSeedArray;
    do
    {
      m_pModuleInitRelativeVelocity = rParticleStateData->m_particleState.m_pModuleInitRelativeVelocity;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        *p_posWorld = (float4)PositionArray->v;
      }
      else
      {
        v = PositionArray->v;
        p_posWorld->v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 0), EmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 85), EmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 170), EmitterTransform->z.v), EmitterTransform->w.v)));
      }
      if ( (rParticleStateData->m_particleState.m_pStateDef->flags & 0x10000000) != 0 )
      {
        SystemOwner = ParticleEmitter::GetSystemOwner(this);
        v16 = r_particleDrawData;
        v17 = v47;
        p_posWorld->v = _mm128_add_ps(SystemOwner->m_systemTransform.w.v, p_posWorld->v);
      }
      v22 = *(__m128 *)((char *)&PositionArray->v + v49);
      LODWORD(v23) = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
      v56 = *(__int128 *)((char *)PositionArray + v51);
      v25 = v56;
      *(float *)&v25 = *(float *)&v56 * *(float *)&v56;
      v24 = v25;
      v26 = (float)((float)((float)(*((float *)&v56 + 1) * *((float *)&v56 + 1)) * 0.71520001) + (float)((float)(*(float *)&v56 * *(float *)&v56) * 0.21259999)) + (float)((float)(*((float *)&v56 + 2) * *((float *)&v56 + 2)) * 0.0722);
      if ( v26 > 0.0 )
      {
        v27 = LODWORD(FLOAT_1_0);
        *(float *)&v27 = (float)(1.0 / v26) * *(float *)&v24;
        v24 = v27;
      }
      v28 = pCamera;
      _XMM0 = v24;
      __asm
      {
        vinsertps xmm0, xmm0, xmm4, 10h
        vinsertps xmm0, xmm0, xmm5, 20h ; ' '
        vinsertps xmm0, xmm0, dword ptr [rsp+168h+var_E8+0Ch], 30h
      }
      v16->color = (float4)_XMM0.v;
      v33 = *(float *)((char *)RandomSeedArray + v17);
      if ( !pCamera )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2339, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
          __debugbreak();
        v28 = NULL;
      }
      if ( !fx_cull_elem_draw->current.enabled || !FX_CullSphere(v28, frustumPlaneCount, p_posWorld, v22.m128_f32[0], 0) )
      {
        if ( particle_debug_draw->current.enabled || particle_debug_draw_cull_bounds->current.enabled )
        {
          _XMM1 = p_posWorld->v;
          LODWORD(center.v[0]) = *(float4 *)p_posWorld->v.m128_f32;
          __asm
          {
            vextractps dword ptr [rsp+168h+center+4], xmm1, 1
            vextractps dword ptr [rsp+168h+center+8], xmm1, 2
          }
          Particle_DebugSphere(&center, v22.m128_f32[0], &colorOrange, 1, 0);
        }
        fadeOutMaxDistance = ParticleEmitter::GetEmitterDef(this)->fadeOutMaxDistance;
        if ( fadeOutMaxDistance == 0.0 )
        {
          *(float *)&CurveValue = FLOAT_1_0;
        }
        else
        {
          m_pModuleInitSpawn = this->m_pModuleInitSpawn;
          if ( m_pModuleInitSpawn )
            m_curves = m_pModuleInitSpawn->m_curves;
          else
            m_curves = &ParticleEmitter::GetEmitterDef(this)->fadeCurveDef;
          CurveValue = Particle_GetCurveValue(m_curves, v33 / fadeOutMaxDistance);
        }
        if ( *(float *)&CurveValue > this->m_alphaThreshold )
        {
          if ( !v42 )
          {
            v39 = *RandomSeedArray;
            Particle_VerifyAssetList(v14);
            lightDef = v14->assetList[Particle_RandomIndex(v39, FXRAND_VISUAL, v14->numAssets)].lightDef;
            v44 = lightDef;
            if ( !lightDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3645, ASSERT_TYPE_ASSERT, "(lightDef)", (const char *)&queryFormat, "lightDef") )
              __debugbreak();
          }
          _XMM1 = p_posWorld->v;
          LODWORD(org.v[0]) = *(float4 *)p_posWorld->v.m128_f32;
          __asm
          {
            vextractps dword ptr [rsp+168h+org+4], xmm1, 1
            vextractps dword ptr [rsp+168h+org+8], xmm1, 2
          }
          LODWORD(colorLinearSrgb.v[0]) = r_particleDrawData->color;
          *(_QWORD *)&colorLinearSrgb.y = *(unsigned __int64 *)((char *)r_particleDrawData->color.v.m128_u64 + 4);
          if ( R_AddOmniLightToScene(&org, v22.m128_f32[0], &colorLinearSrgb, v23 * *(float *)&CurveValue, pModuleInitLightOmni, lightDef) )
          {
            if ( (((_BYTE)this - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_numParticlesRendered) )
              __debugbreak();
            _InterlockedIncrement(&this->m_numParticlesRendered);
            if ( (((_BYTE)this - 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_numLights) )
              __debugbreak();
            _InterlockedIncrement(&this->m_numLights);
          }
        }
      }
      lightDef = v44;
      ++PositionArray;
      v16 = r_particleDrawData;
      ++RandomSeedArray;
      v41 = v53-- == 1;
      v17 = v47;
    }
    while ( !v41 );
  }
}

/*
==============
ParticleEmitter::DrawSetup_LightSpot
==============
*/
void ParticleEmitter::DrawSetup_LightSpot(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const FxCamera *pCamera, Particle_DrawData *r_particleDrawData)
{
  __int128 v5; 
  ParticleData *p_m_particleData; 
  __int64 m_particleCountRunning; 
  float4 *PositionArray; 
  int *RandomSeedArray; 
  ParticleEmitter::ParticleStateData *v13; 
  int *v14; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v16; 
  const ParticleModuleInitLightSpot *pModuleInitLightSpot; 
  const ParticleLinkedAssetListDef *p_m_linkedAssetList; 
  const float4 *p_x; 
  float4 *v23; 
  const float4 *v25; 
  vector3 *v26; 
  const vector4 *v27; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  __m128 v; 
  __m128 v30; 
  float v31; 
  __int128 v32; 
  __int128 v33; 
  float v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  float v39; 
  float v40; 
  __int128 v41; 
  const FxCamera *v42; 
  __m128 v47; 
  float fadeOutMaxDistance; 
  double CurveValue; 
  const ParticleModuleInitSpawn *m_pModuleInitSpawn; 
  __m128 v52; 
  ParticleCurveDef *m_curves; 
  float intensity; 
  int v55; 
  float v56; 
  bool v57; 
  unsigned int frustumPlaneCount; 
  vector4 *M1; 
  int numAssets; 
  float4 *SizeArray; 
  signed __int64 v62; 
  float4 *ColorArray; 
  signed __int64 v64; 
  float *CameraDistanceArray; 
  signed __int64 v66; 
  GfxLightDef *lightDef; 
  float4 *RotationAngleArray; 
  float4 *v71; 
  __int64 v72; 
  __int64 v74; 
  __m256i v75; 
  __m256i v76; 
  vector4 result; 
  __m256i v78; 
  __int128 v79; 
  vec3_t dir; 
  int v81; 
  vec3_t up; 
  vec3_t center; 
  vec3_t colorLinearSrgb; 
  vec3_t org; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3671, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( rParticleStateData->m_particleState.m_pStateDef->elementType != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3672, ASSERT_TYPE_ASSERT, "(rParticleStateData.m_particleState.GetElementType() == PARTICLE_ELEMENT_TYPE_LIGHT_SPOT)", (const char *)&queryFormat, "rParticleStateData.m_particleState.GetElementType() == PARTICLE_ELEMENT_TYPE_LIGHT_SPOT") )
    __debugbreak();
  p_m_particleData = &rParticleStateData->m_particleData;
  m_particleCountRunning = p_m_particleData->m_particleCountRunning;
  PositionArray = Particle_GetPositionArray(p_m_particleData);
  SizeArray = Particle_GetSizeArray(p_m_particleData);
  ColorArray = Particle_GetColorArray(p_m_particleData);
  RotationAngleArray = Particle_GetRotationAngleArray(p_m_particleData);
  CameraDistanceArray = Particle_GetCameraDistanceArray(p_m_particleData);
  RandomSeedArray = Particle_GetRandomSeedArray(p_m_particleData);
  v13 = rParticleStateData;
  v14 = RandomSeedArray;
  v74 = rParticleStateData->m_particleState.m_pStateDef->flags & 0xF0;
  M1 = (vector4 *)ParticleEmitter::GetEmitterTransform(this, &rParticleStateData->m_particleState);
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  v16 = pCamera->frustumPlaneCount;
  if ( (EmitterDef->flags & 4) != 0 && v16 > 5 )
    v16 = 5;
  pModuleInitLightSpot = rParticleStateData->m_particleState.m_elementTypeModule.pModuleInitLightSpot;
  frustumPlaneCount = v16;
  if ( !pModuleInitLightSpot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3692, ASSERT_TYPE_ASSERT, "(pModuleInitLightSpot)", (const char *)&queryFormat, "pModuleInitLightSpot") )
    __debugbreak();
  p_m_linkedAssetList = &pModuleInitLightSpot->m_linkedAssetList;
  Particle_VerifyAssetList(&pModuleInitLightSpot->m_linkedAssetList);
  numAssets = pModuleInitLightSpot->m_linkedAssetList.numAssets;
  if ( numAssets == 1 )
  {
    Particle_VerifyAssetList(&pModuleInitLightSpot->m_linkedAssetList);
    lightDef = p_m_linkedAssetList->assetList->lightDef;
  }
  else
  {
    lightDef = NULL;
  }
  p_x = &M1->x;
  _XMM1.v = (__m128)M1->x;
  LODWORD(dir.v[0]) = M1->x;
  __asm
  {
    vextractps dword ptr [rsp+258h+dir+4], xmm1, 1
    vextractps dword ptr [rsp+258h+dir+8], xmm1, 2
  }
  _XMM1.v = (__m128)M1->y;
  v81 = _XMM1.v.m128_i32[0];
  __asm
  {
    vextractps [rsp+258h+var_D8], xmm1, 1
    vextractps [rsp+258h+var_D4], xmm1, 2
  }
  _XMM1.v = (__m128)M1->z;
  LODWORD(up.v[0]) = _XMM1.v.m128_i32[0];
  __asm
  {
    vextractps dword ptr [rsp+258h+up+4], xmm1, 1
    vextractps dword ptr [rsp+258h+up+8], xmm1, 2
  }
  if ( (_DWORD)m_particleCountRunning )
  {
    v62 = (char *)SizeArray - (char *)PositionArray;
    v23 = (float4 *)((char *)RotationAngleArray - (char *)PositionArray);
    v64 = (char *)ColorArray - (char *)PositionArray;
    v66 = (char *)CameraDistanceArray - (char *)v14;
    v72 = m_particleCountRunning;
    v71 = (float4 *)((char *)RotationAngleArray - (char *)PositionArray);
    do
    {
      if ( v74 )
      {
        result.w = (float4)g_unit.v;
        _XMM0 = *(__int128 *)((char *)PositionArray + (_QWORD)v23);
        Float4RadianToQuat(v23, p_x);
        Float4UnitQuatToAxis(v26, v25);
        *(float4 *)&v78.m256i_u64[2] = (float4)_XMM1.v;
        *(_OWORD *)v78.m256i_i8 = _XMM0;
        *(__m256i *)result.x.v.m128_f32 = v78;
        result.z = (float4)_XMM2.v;
        Float4x4Mul(&result, M1, v27);
        p_x = &M1->x;
        *(_OWORD *)&v76.m256i_u64[2] = v5;
        *(float4 *)v76.m256i_i8 = (float4)_XMM2.v;
        *(float4 *)&v75.m256i_u64[2] = (float4)_XMM1.v;
        *(_OWORD *)v75.m256i_i8 = _XMM0;
        *(__m256i *)result.x.v.m128_f32 = v75;
        *(__m256i *)result.z.v.m128_f32 = v76;
        dir.v[0] = *(float *)&_XMM0;
        __asm
        {
          vextractps dword ptr [rsp+258h+dir+4], xmm0, 1
          vextractps dword ptr [rsp+258h+dir+8], xmm0, 2
        }
        v81 = _XMM1.v.m128_i32[0];
        __asm
        {
          vextractps [rsp+258h+var_D8], xmm1, 1
          vextractps [rsp+258h+var_D4], xmm1, 2
        }
        up.v[0] = _XMM2.v.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rsp+258h+up+4], xmm2, 1
          vextractps dword ptr [rsp+258h+up+8], xmm2, 2
        }
      }
      m_pModuleInitRelativeVelocity = v13->m_particleState.m_pModuleInitRelativeVelocity;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        r_particleDrawData->posWorld = (float4)PositionArray->v;
      }
      else
      {
        v = PositionArray->v;
        r_particleDrawData->posWorld.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 0), p_x->v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 85), p_x[1].v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 170), p_x[2].v), p_x[3].v)));
      }
      if ( (v13->m_particleState.m_pStateDef->flags & 0x10000000) != 0 )
        r_particleDrawData->posWorld.v = _mm128_add_ps(ParticleEmitter::GetSystemOwner(this)->m_systemTransform.w.v, r_particleDrawData->posWorld.v);
      v30 = *(__m128 *)((char *)&PositionArray->v + v62);
      LODWORD(v31) = _mm_shuffle_ps(v30, v30, 85).m128_u32[0];
      v79 = *(__int128 *)((char *)PositionArray + v64);
      v32 = v79;
      *(float *)&v32 = *(float *)&v79 * *(float *)&v79;
      v5 = v32;
      *(float *)&v32 = (float)(*(float *)&v79 * *(float *)&v79) * 0.21259999;
      v33 = v32;
      v34 = *((float *)&v79 + 1) * *((float *)&v79 + 1);
      v36 = (__m128)DWORD2(v79);
      v36.m128_f32[0] = *((float *)&v79 + 2) * *((float *)&v79 + 2);
      v35 = v36;
      v37 = (__m128)v33;
      v37.m128_f32[0] = *(float *)&v33 + (float)((float)(*((float *)&v79 + 1) * *((float *)&v79 + 1)) * 0.71520001);
      _XMM2.v = v37;
      v38 = v35;
      v38.m128_f32[0] = v35.m128_f32[0] * 0.0722;
      _XMM1.v = v38;
      v39 = _XMM2.v.m128_f32[0] + (float)(v35.m128_f32[0] * 0.0722);
      *(float *)&v79 = *(float *)&v5;
      *((float *)&v79 + 1) = *((float *)&v79 + 1) * *((float *)&v79 + 1);
      *((float *)&v79 + 2) = v35.m128_f32[0];
      if ( v39 > 0.0 )
      {
        v41 = LODWORD(FLOAT_1_0);
        v40 = 1.0 / v39;
        *(float *)&v41 = v40 * *(float *)&v5;
        v5 = v41;
        *(float *)&v79 = *(float *)&v41;
        *((float *)&v79 + 1) = v40 * v34;
        *((float *)&v79 + 2) = v40 * v35.m128_f32[0];
      }
      v42 = pCamera;
      _XMM0 = v5;
      __asm
      {
        vinsertps xmm0, xmm0, xmm4, 10h
        vinsertps xmm0, xmm0, xmm5, 20h ; ' '
        vinsertps xmm0, xmm0, dword ptr [rsp+258h+var_F8+0Ch], 30h
      }
      r_particleDrawData->color = (float4)_XMM0.v;
      v47 = (__m128)*(unsigned int *)((char *)v14 + v66);
      if ( !pCamera )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2339, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
          __debugbreak();
        v42 = NULL;
      }
      if ( !fx_cull_elem_draw->current.enabled || (v5 = (__int128)v30, !FX_CullSphere(v42, frustumPlaneCount, &r_particleDrawData->posWorld, v30.m128_f32[0], 0)) )
      {
        if ( particle_debug_draw->current.enabled || particle_debug_draw_cull_bounds->current.enabled )
        {
          _XMM1.v = (__m128)r_particleDrawData->posWorld;
          LODWORD(center.v[0]) = _XMM1.v.m128_i32[0];
          __asm
          {
            vextractps dword ptr [rsp+258h+center+4], xmm1, 1
            vextractps dword ptr [rsp+258h+center+8], xmm1, 2
          }
          _XMM1.v = v30;
          Particle_DebugSphere(&center, v30.m128_f32[0], &colorOrange, 1, 0);
        }
        fadeOutMaxDistance = ParticleEmitter::GetEmitterDef(this)->fadeOutMaxDistance;
        if ( fadeOutMaxDistance == 0.0 )
        {
          *(float *)&CurveValue = FLOAT_1_0;
        }
        else
        {
          m_pModuleInitSpawn = this->m_pModuleInitSpawn;
          v52 = v47;
          v52.m128_f32[0] = v47.m128_f32[0] / fadeOutMaxDistance;
          if ( m_pModuleInitSpawn )
            m_curves = m_pModuleInitSpawn->m_curves;
          else
            m_curves = &ParticleEmitter::GetEmitterDef(this)->fadeCurveDef;
          _XMM1.v = v52;
          CurveValue = Particle_GetCurveValue(m_curves, v52.m128_f32[0]);
        }
        if ( *(float *)&CurveValue > this->m_alphaThreshold )
        {
          intensity = v31 * *(float *)&CurveValue;
          if ( numAssets != 1 )
          {
            v55 = *v14;
            Particle_VerifyAssetList(p_m_linkedAssetList);
            lightDef = pModuleInitLightSpot->m_linkedAssetList.assetList[Particle_RandomIndex(v55, FXRAND_VISUAL, pModuleInitLightSpot->m_linkedAssetList.numAssets)].lightDef;
            if ( !lightDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3732, ASSERT_TYPE_ASSERT, "(lightDef)", (const char *)&queryFormat, "lightDef") )
              __debugbreak();
          }
          _XMM1.v = (__m128)r_particleDrawData->posWorld;
          v5 = (__int128)v30;
          LODWORD(colorLinearSrgb.v[0]) = r_particleDrawData->color;
          LODWORD(colorLinearSrgb.v[1]) = r_particleDrawData->color.v.m128_i32[1];
          v56 = r_particleDrawData->color.v.m128_f32[2];
          org.v[0] = _XMM1.v.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rsp+258h+org+4], xmm1, 1
            vextractps dword ptr [rsp+258h+org+8], xmm1, 2
          }
          colorLinearSrgb.v[2] = v56;
          if ( R_AddSpotLightToScene(&org, &dir, &up, v30.m128_f32[0], &colorLinearSrgb, intensity, pModuleInitLightSpot, lightDef) )
          {
            if ( (((_BYTE)this - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_numParticlesRendered) )
              __debugbreak();
            _InterlockedIncrement(&this->m_numParticlesRendered);
            if ( (((_BYTE)this - 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_numLights) )
              __debugbreak();
            _InterlockedIncrement(&this->m_numLights);
          }
        }
      }
      v13 = rParticleStateData;
      ++PositionArray;
      p_x = &M1->x;
      ++v14;
      v57 = v72-- == 1;
      v23 = v71;
    }
    while ( !v57 );
  }
}

/*
==============
ParticleEmitter::DrawSetup_Model
==============
*/
void ParticleEmitter::DrawSetup_Model(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const Particle_DrawData *r_particleDrawData)
{
  const ParticleStateDef *m_pStateDef; 
  int v5; 
  unsigned __int64 flags; 
  unsigned __int64 v7; 
  char v8; 
  int *v9; 
  float4 *v10; 
  GfxScaledPlacement *PrevPlacementArray; 
  ParticleState::ElementTypeModule v12; 
  int v13; 
  const ParticleStateDef *v14; 
  __int32 v15; 
  const FxPhysics *PhysicsInstanceIDList; 
  float4 *v17; 
  float *v18; 
  signed __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  __int64 v22; 
  unsigned int instanceId; 
  unsigned int NumRigidBodys; 
  const PhysicsAsset *InstanceAsset; 
  const char *v26; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  unsigned int m_serialAndIndex; 
  __m128 v31; 
  float v34; 
  __m128 v36; 
  __int128 v39; 
  ParticleLinkedAssetListDef *v40; 
  int v41; 
  const XModel *model; 
  ParticleSystem *v43; 
  const ParticleSystemDef *v44; 
  __m128 *p_v; 
  const float4 *v57; 
  bool v58; 
  float4 *RotationAngleArray; 
  unsigned int *FlagsArray; 
  unsigned int v61; 
  unsigned int v62; 
  signed __int64 v63; 
  __m256i *v64; 
  char *v65; 
  signed __int64 v66; 
  __int128 v67; 
  int v69; 
  ParticleSystem *v70; 
  const ParticleSystemDef *v71; 
  __m128 *v72; 
  const float4 *v84; 
  bool v85; 
  unsigned __int64 v86; 
  vector4 *EmitterTransform; 
  const ParticleSystem *v88; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  const ParticleModuleScaleByDistance *m_pModuleScaleByDistance; 
  unsigned int v91; 
  __m128 *v92; 
  int *v93; 
  signed __int64 v94; 
  char *v95; 
  __m256i *v96; 
  unsigned int v97; 
  __int128 v98; 
  __int64 v99; 
  const float4 *v100; 
  float4 *v101; 
  __m128 v103; 
  __m128 v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  __m128 v110; 
  __m128 v113; 
  int v117; 
  __m128 *v118; 
  const float4 *v130; 
  bool v131; 
  __int64 v132; 
  __int64 v133; 
  char v134; 
  unsigned int m_particleCountRunning; 
  bool v136; 
  bool v137; 
  unsigned int v138; 
  ParticleRelativeVelocityType m_velocityType; 
  float *LightingFracArray; 
  float4 *SizeArray; 
  signed __int64 v143; 
  signed __int64 v144; 
  signed __int64 v145; 
  int v146; 
  float *CameraDistanceArray; 
  __m256i *v148; 
  char *v149; 
  float4 *ColorArray; 
  signed __int64 v151; 
  signed __int64 v152; 
  signed __int64 v153; 
  float4 *v154; 
  float4 *SpawnQuatArray; 
  XModel *pModel; 
  unsigned int renderFlags; 
  char v158; 
  const FxPhysics *v159; 
  hknpBodyId result[2]; 
  ParticleLinkedAssetListDef *pLinkedAssetList; 
  GfxScaledPlacement *v162; 
  float4 *PositionArray; 
  float4 *VelocityArray; 
  vector4 *rEmitterTransform; 
  float4 *v166; 
  float4 packedColorAndEmissive; 
  float4 *EmissiveArray; 
  unsigned __int64 v169; 
  float4 v170; 
  float4 v171; 
  float4 color; 
  float4 v173; 
  float4 v174; 
  float4 v175; 
  float4 v176; 
  float4 v177; 
  float4 v178; 
  vec3_t vec; 
  vec3_t linVel; 
  vec4_t quat; 
  vec3_t v182; 
  vec3_t v183; 
  __m128 v; 
  __m128 v185; 
  __int128 v186; 
  vec4_t orientation[2]; 
  GfxScaledPlacement prevPlacementOut; 

  m_pStateDef = rParticleStateData->m_particleState.m_pStateDef;
  packedColorAndEmissive.v.m128_u64[0] = (unsigned __int64)r_particleDrawData;
  if ( m_pStateDef->elementType != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3787, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL") )
    __debugbreak();
  v5 = 3080;
  if ( fx_models_shadows_thermal->current.enabled )
    v5 = 0;
  flags = rParticleStateData->m_particleState.m_pStateDef->flags;
  v7 = flags >> 22;
  flags >>= 20;
  v8 = v7 & 1;
  LOBYTE(flags) = flags & 1;
  v158 = v8;
  v169 = flags;
  m_particleCountRunning = rParticleStateData->m_particleData.m_particleCountRunning;
  *(_QWORD *)&result[0].m_serialAndIndex = Particle_GetRandomSeedArray(&rParticleStateData->m_particleData);
  v9 = *(int **)&result[0].m_serialAndIndex;
  SizeArray = Particle_GetSizeArray(&rParticleStateData->m_particleData);
  PositionArray = Particle_GetPositionArray(&rParticleStateData->m_particleData);
  v10 = PositionArray;
  VelocityArray = Particle_GetVelocityArray(&rParticleStateData->m_particleData);
  ColorArray = Particle_GetColorArray(&rParticleStateData->m_particleData);
  EmissiveArray = Particle_GetEmissiveArray(&rParticleStateData->m_particleData);
  LightingFracArray = Particle_GetLightingFracArray(&rParticleStateData->m_particleData);
  CameraDistanceArray = Particle_GetCameraDistanceArray(&rParticleStateData->m_particleData);
  PrevPlacementArray = Particle_GetPrevPlacementArray(&rParticleStateData->m_particleData);
  v12.pModule = (const ParticleModule *)rParticleStateData->m_particleState.m_elementTypeModule;
  v162 = PrevPlacementArray;
  if ( !v12.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3822, ASSERT_TYPE_ASSERT, "(pModuleInitModel)", (const char *)&queryFormat, "pModuleInitModel") )
    __debugbreak();
  pLinkedAssetList = (ParticleLinkedAssetListDef *)&v12.pModule[2];
  Particle_VerifyAssetList((const ParticleLinkedAssetListDef *)&v12.pModule[2]);
  v146 = *(_DWORD *)&v12.pModule[3].m_type;
  if ( v146 == 1 )
  {
    Particle_VerifyAssetList((const ParticleLinkedAssetListDef *)&v12.pModule[2]);
    pModel = **(XModel ***)&v12.pModule[2];
  }
  else
  {
    pModel = NULL;
  }
  v186 = _xmm;
  if ( ParticleEmitter::ShouldDrawWithViewModel(this, &rParticleStateData->m_particleState) )
    v5 |= 1u;
  v13 = v5 | 0x200;
  if ( !HIBYTE(v12.pModule[1].m_type) )
    v13 = v5;
  renderFlags = v13;
  if ( v146 != 1 || pModel )
  {
    v14 = rParticleStateData->m_particleState.m_pStateDef;
    if ( (v14->flags & 0x400) != 0 && !rParticleStateData->m_particleState.m_pModulePhysicsLight && rParticleStateData->m_particleState.m_physicsInstanceIDList )
    {
      v15 = 3 * this->m_pSystemOwner->m_localClientNum + 3;
      PhysicsInstanceIDList = ParticleState::GetPhysicsInstanceIDList(&rParticleStateData->m_particleState);
      v159 = PhysicsInstanceIDList;
      v138 = 0;
      if ( m_particleCountRunning )
      {
        v143 = (char *)SizeArray - (char *)VelocityArray;
        v17 = VelocityArray;
        v151 = (char *)ColorArray - (char *)VelocityArray;
        v18 = LightingFracArray;
        v19 = (char *)PositionArray - (char *)VelocityArray;
        v20 = *(_QWORD *)&result[0].m_serialAndIndex - (_QWORD)LightingFracArray;
        v21 = m_particleCountRunning;
        v154 = VelocityArray;
        v22 = (__int64)v162;
        v148 = (__m256i *)v162;
        do
        {
          instanceId = PhysicsInstanceIDList->instanceId;
          if ( PhysicsInstanceIDList->instanceId != -1 )
          {
            NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v15, instanceId);
            InstanceAsset = HavokPhysics_GetInstanceAsset((Physics_WorldId)v15, instanceId);
            if ( NumRigidBodys != 1 )
            {
              v26 = InstanceAsset ? InstanceAsset->name : "UNKNOWN";
              SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
              Def = ParticleSystem::GetDef(SystemOwner);
              LODWORD(v133) = NumRigidBodys;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3872, ASSERT_TYPE_ASSERT, "(numBodies == 1)", "%s\n\tPhysics Particles only support single body assets: %s references a particle with physics asset %s that has %i\n", "numBodies == 1", Def->name, v26, v133) )
                __debugbreak();
            }
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v15 > 7 )
            {
              LODWORD(v132) = v15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v132) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v15 - 2) <= 5 )
            {
              LODWORD(v132) = v15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v132) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v15 <= 1 )
            {
              LODWORD(v132) = v15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v132) )
                __debugbreak();
            }
            m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v15, instanceId, 0)->m_serialAndIndex;
            if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3875, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( body0Id ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( body0Id )") )
              __debugbreak();
            Physics_GetRigidBodyTransform((const Physics_WorldId)v15, m_serialAndIndex, (vec3_t *)&orientation[1], orientation);
            Physics_GetRigidBodyLinVel((const Physics_WorldId)v15, m_serialAndIndex, &linVel);
            v.m128_i32[3] = 0;
            v31 = v;
            v31.m128_f32[0] = orientation[1].v[0];
            _XMM3 = v31;
            __asm
            {
              vinsertps xmm3, xmm3, dword ptr [rsp+318h+orientation+14h], 10h
              vinsertps xmm3, xmm3, dword ptr [rsp+318h+orientation+18h], 20h
            }
            v34 = linVel.v[0];
            *(float4 *)((char *)v154 + v19) = (float4)_XMM3.v;
            v = _XMM3.v;
            v185.m128_i32[3] = 0;
            v36 = v185;
            v36.m128_f32[0] = v34;
            _XMM3 = v36;
            __asm
            {
              vinsertps xmm3, xmm3, dword ptr [rsp+318h+linVel+4], 10h
              vinsertps xmm3, xmm3, dword ptr [rsp+318h+linVel+8], 20h
            }
            v185 = _XMM3.v;
            *v154 = (float4)_XMM3.v;
            if ( (((_BYTE)this + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_numPhysicsObjects) )
              __debugbreak();
            _InterlockedIncrement(&this->m_numPhysicsObjects);
            v39 = *(__int128 *)((char *)v154 + v143);
            LODWORD(orientation[1].v[3]) = v39;
            if ( *(float *)&v39 <= 0.0 )
            {
              v17 = v154;
            }
            else
            {
              if ( v146 == 1 )
              {
                model = pModel;
              }
              else
              {
                v40 = pLinkedAssetList;
                v41 = *(_DWORD *)((char *)LightingFracArray + v20);
                Particle_VerifyAssetList(pLinkedAssetList);
                model = v40->assetList[Particle_RandomIndex(v41, FXRAND_VISUAL, v40->numAssets)].model;
                pModel = (XModel *)model;
                if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3896, ASSERT_TYPE_ASSERT, "(pModel)", (const char *)&queryFormat, "pModel") )
                  __debugbreak();
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(orientation[0].v[0] * orientation[0].v[0]) + (float)(orientation[0].v[1] * orientation[0].v[1])) + (float)(orientation[0].v[2] * orientation[0].v[2])) + (float)(orientation[0].v[3] * orientation[0].v[3])) - 1.0) & _xmm) >= 0.0040000002 )
              {
                v43 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
                v44 = ParticleSystem::GetDef(v43);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3900, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( placement[0].base.quat ))", "%s\n\tVFX ERROR: Unnormalized quat when using model physics: %s\n", "Particle_Vec4IsNormalized( placement[0].base.quat )", v44->name) )
                  __debugbreak();
              }
              if ( v8 )
                p_v = &EmissiveArray[v138].v;
              else
                p_v = (__m128 *)&v186;
              color.v = *p_v;
              FX_GammaToLinear(&color);
              v171.v = *(__m128 *)((char *)v154 + v151);
              FX_GammaToLinear(&v171);
              _XMM6 = color.v;
              _XMM0 = v171.v;
              __asm { vcvtps2ph xmm7, xmm0, 0 }
              vec.v[0] = color.v.m128_f32[0];
              __asm
              {
                vextractps dword ptr [rsp+318h+vec+4], xmm6, 1
                vextractps dword ptr [rsp+318h+vec+8], xmm6, 2
              }
              _XMM1 = 0i64;
              LODWORD(v166) = Vec3PackR11G11B10F(&vec);
              _mm_shuffle_ps(_XMM6, _XMM6, 255);
              __asm
              {
                vinsertps xmm1, xmm1, xmm0, 0
                vinsertps xmm1, xmm1, xmm8, 10h
                vcvtps2ph xmm0, xmm1, 0
              }
              *(float *)&rEmitterTransform = *(float *)&_XMM0;
              _mm_shuffle_ps(_XMM7, _XMM7, 85);
              _XMM1 = _XMM7;
              __asm
              {
                vinsertps xmm1, xmm1, xmm0, 10h
                vinsertps xmm1, xmm1, dword ptr [rsp+318h+var_230], 20h
                vinsertps xmm1, xmm1, dword ptr [rsp+318h+packedColorAndEmissive.v], 30h
              }
              packedColorAndEmissive.v = _XMM1;
              if ( VelocityArray )
                v57 = &VelocityArray[v138];
              else
                v57 = NULL;
              ComputeModelPrevPlacement((const GfxScaledPlacement *)orientation, &v162[v138], v57, &prevPlacementOut);
              v58 = (_BYTE)v169 || v8;
              ParticleEmitter::AddModelToScene(this, model, (GfxScaledPlacement *)orientation, &packedColorAndEmissive, v58, renderFlags);
              *v148 = *(__m256i *)orientation[0].v;
              v17 = v154;
            }
            v21 = m_particleCountRunning;
            v18 = LightingFracArray;
            v22 = (__int64)v148;
            PhysicsInstanceIDList = v159;
          }
          v159 = ++PhysicsInstanceIDList;
          ++v18;
          ++v138;
          ++v17;
          LightingFracArray = v18;
          v22 += 32i64;
          v154 = v17;
          v148 = (__m256i *)v22;
        }
        while ( v138 < v21 );
      }
    }
    else if ( (v14->flags & 0x400) != 0 && rParticleStateData->m_particleState.m_pModulePhysicsLight )
    {
      RotationAngleArray = Particle_GetRotationAngleArray(&rParticleStateData->m_particleData);
      FlagsArray = Particle_GetFlagsArray(&rParticleStateData->m_particleData);
      v61 = 0;
      v62 = m_particleCountRunning;
      if ( m_particleCountRunning )
      {
        v152 = (char *)ColorArray - (char *)PositionArray;
        v63 = (char *)SizeArray - (char *)PositionArray;
        v64 = (__m256i *)v162;
        v65 = (char *)FlagsArray - *(_QWORD *)&result[0].m_serialAndIndex;
        v66 = (char *)RotationAngleArray - (char *)PositionArray;
        v144 = (char *)SizeArray - (char *)PositionArray;
        do
        {
          v67 = *(__int128 *)((char *)v10 + v63);
          LODWORD(orientation[1].v[3]) = v67;
          if ( *(float *)&v67 > 0.0 && (*((_BYTE *)v9 + (_QWORD)v65) & 0x42) == 0 )
          {
            _XMM1 = v10->v;
            LODWORD(orientation[1].v[0]) = *(float4 *)v10->v.m128_f32;
            __asm
            {
              vextractps dword ptr [rsp+318h+orientation+14h], xmm1, 1
              vextractps dword ptr [rsp+318h+orientation+18h], xmm1, 2
            }
            orientation[0] = *(vec4_t *)((char *)v10 + v66);
            if ( v146 != 1 )
            {
              v69 = *v9;
              Particle_VerifyAssetList(pLinkedAssetList);
              pModel = pLinkedAssetList->assetList[Particle_RandomIndex(v69, FXRAND_VISUAL, pLinkedAssetList->numAssets)].model;
              if ( !pModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3957, ASSERT_TYPE_ASSERT, "(pModel)", (const char *)&queryFormat, "pModel") )
                __debugbreak();
            }
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(orientation[0].v[0] * orientation[0].v[0]) + (float)(orientation[0].v[1] * orientation[0].v[1])) + (float)(orientation[0].v[2] * orientation[0].v[2])) + (float)(orientation[0].v[3] * orientation[0].v[3])) - 1.0) & _xmm) >= 0.0020000001 )
            {
              v70 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
              v71 = ParticleSystem::GetDef(v70);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3960, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( placement[0].base.quat ))", "%s\n\tVFX ERROR: Unnormalized quat when using HavokFX: %s\n", "Vec4IsNormalized( placement[0].base.quat )", v71->name) )
                __debugbreak();
            }
            if ( v158 )
              v72 = &EmissiveArray[v61].v;
            else
              v72 = (__m128 *)&v186;
            v174.v = *v72;
            FX_GammaToLinear(&v174);
            v173.v = *(__m128 *)((char *)v10 + v152);
            FX_GammaToLinear(&v173);
            _XMM6 = v174.v;
            _XMM0 = v173.v;
            __asm { vcvtps2ph xmm7, xmm0, 0 }
            v182.v[0] = v174.v.m128_f32[0];
            __asm
            {
              vextractps dword ptr [rsp+318h+var_148+4], xmm6, 1
              vextractps dword ptr [rsp+318h+var_148+8], xmm6, 2
            }
            _XMM1 = 0i64;
            packedColorAndEmissive.v.m128_i32[0] = Vec3PackR11G11B10F(&v182);
            _mm_shuffle_ps(_XMM6, _XMM6, 255);
            __asm
            {
              vinsertps xmm1, xmm1, xmm0, 0
              vinsertps xmm1, xmm1, xmm8, 10h
              vcvtps2ph xmm0, xmm1, 0
            }
            _mm_shuffle_ps(_XMM7, _XMM7, 85);
            _XMM1 = _XMM7;
            __asm
            {
              vinsertps xmm1, xmm1, xmm0, 10h
              vinsertps xmm1, xmm1, dword ptr [rsp+318h+packedColorAndEmissive.v], 20h
              vinsertps xmm1, xmm1, [rsp+318h+var_2B0], 30h
            }
            v176.v = _XMM1;
            if ( VelocityArray )
              v84 = &VelocityArray[v61];
            else
              v84 = NULL;
            ComputeModelPrevPlacement((const GfxScaledPlacement *)orientation, &v162[v61], v84, &prevPlacementOut);
            v85 = (_BYTE)v169 || v158;
            ParticleEmitter::AddModelToScene(this, pModel, (GfxScaledPlacement *)orientation, &v176, v85, renderFlags);
            v62 = m_particleCountRunning;
            v63 = v144;
            *v64 = *(__m256i *)orientation[0].v;
          }
          ++v61;
          ++v9;
          ++v10;
          ++v64;
        }
        while ( v61 < v62 );
      }
    }
    else
    {
      v166 = Particle_GetPositionArray(&rParticleStateData->m_particleData);
      *(_QWORD *)vec.v = Particle_GetRotationAngleArray(&rParticleStateData->m_particleData);
      SpawnQuatArray = Particle_GetSpawnQuatArray(&rParticleStateData->m_particleData);
      v86 = rParticleStateData->m_particleState.m_pStateDef->flags & 0xA0;
      v137 = (_DWORD)v86 != 0;
      EmitterTransform = (vector4 *)ParticleEmitter::GetEmitterTransform(this, &rParticleStateData->m_particleState);
      rEmitterTransform = EmitterTransform;
      v88 = ParticleEmitter::GetSystemOwner(this);
      m_pModuleInitRelativeVelocity = rParticleStateData->m_particleState.m_pModuleInitRelativeVelocity;
      v136 = v88->m_flags & 1;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 )
        m_velocityType = PARTICLE_RELATIVE_VELOCITY_TYPE_LOCAL;
      else
        m_velocityType = m_pModuleInitRelativeVelocity->m_velocityType;
      if ( !(_DWORD)v86 || (v134 = 1, (v12.pModule->m_flags & 0x2000) == 0) )
        v134 = 0;
      m_pModuleScaleByDistance = rParticleStateData->m_particleState.m_pModuleScaleByDistance;
      *(_QWORD *)linVel.v = m_pModuleScaleByDistance;
      if ( !m_pModuleScaleByDistance && (rParticleStateData->m_particleState.m_pStateDef->flags & 0x800000000i64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4007, ASSERT_TYPE_ASSERT, "(pModuleScaleByDistance || !pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_SCALE_BY_DISTANCE ))", (const char *)&queryFormat, "pModuleScaleByDistance || !pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_SCALE_BY_DISTANCE )") )
        __debugbreak();
      Particle_RotMatrixToQuatVec(EmitterTransform, &quat);
      v91 = 0;
      orientation[0] = quat;
      if ( m_particleCountRunning )
      {
        v92 = &SpawnQuatArray->v;
        v93 = *(int **)&result[0].m_serialAndIndex;
        v94 = (char *)SizeArray - (char *)SpawnQuatArray;
        v153 = (char *)ColorArray - (char *)SpawnQuatArray;
        v95 = (char *)CameraDistanceArray - *(_QWORD *)&result[0].m_serialAndIndex;
        v96 = (__m256i *)v162;
        v97 = m_particleCountRunning;
        v145 = (char *)SizeArray - (char *)SpawnQuatArray;
        v149 = (char *)CameraDistanceArray - *(_QWORD *)&result[0].m_serialAndIndex;
        do
        {
          v98 = *(__int128 *)((char *)v92 + v94);
          LODWORD(orientation[1].v[3]) = v98;
          if ( *(float *)&v98 > 0.0 )
          {
            if ( (rParticleStateData->m_particleState.m_pStateDef->flags & 0x800000000i64) != 0 )
            {
              *(double *)&v98 = ParticleEmitter::GetScaleFactorByCameraDistance(this, m_pModuleScaleByDistance, *(float *)((char *)v93 + (_QWORD)v95), *v93);
              v93 = *(int **)&result[0].m_serialAndIndex;
              *(float *)&v98 = orientation[1].v[3] * *(float *)&v98;
              orientation[1].v[3] = *(float *)&v98;
            }
            if ( *(float *)&v98 != 0.0 )
            {
              v99 = v91;
              ParticleEmitter::GetWorldPos(this, &v166[v99], (float4 *)(packedColorAndEmissive.v.m128_u64[0] + 64), &rParticleStateData->m_particleState, rEmitterTransform);
              _XMM1 = *(_OWORD *)(packedColorAndEmissive.v.m128_u64[0] + 64);
              LODWORD(orientation[1].v[0]) = _XMM1;
              __asm
              {
                vextractps dword ptr [rsp+318h+orientation+14h], xmm1, 1
                vextractps dword ptr [rsp+318h+orientation+18h], xmm1, 2
              }
              v103 = *(__m128 *)((char *)v92 + *(_QWORD *)vec.v - (_QWORD)SpawnQuatArray);
              if ( v134 )
              {
                Float4RadianToQuat(v101, v100);
                v104 = *v92;
                v105 = _mm_shuffle_ps(v103, v103, 201);
                v106 = _mm_shuffle_ps(v103, v103, 210);
                v107 = v103;
                v108 = _mm_shuffle_ps(v103, v103, 255);
                _XMM0 = _mm128_mul_ps(v103, *v92);
                v110 = _mm128_sub_ps(_mm128_mul_ps(v106, _mm_shuffle_ps(v104, v104, 201)), _mm128_mul_ps(v105, _mm_shuffle_ps(v104, v104, 210)));
                __asm
                {
                  vinsertps xmm1, xmm0, xmm0, 8
                  vhaddps xmm2, xmm1, xmm1
                }
                v113 = _mm_shuffle_ps(v104, v104, 255);
                __asm { vhaddps xmm3, xmm2, xmm2 }
                _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v108, v113), _XMM3);
                _mm128_add_ps(v110, _mm128_add_ps(_mm128_mul_ps(v108, *v92), _mm128_mul_ps(v107, v113)));
                __asm { vblendps xmm1, xmm2, xmm0, 7 }
                orientation[0] = _XMM1;
              }
              else
              {
                v177.v = *(__m128 *)((char *)v92 + *(_QWORD *)vec.v - (_QWORD)SpawnQuatArray);
                ParticleEmitter::HandleSpecial3DRotation(this, v137, &v177, v136, m_velocityType, &SpawnQuatArray[v99], &quat, orientation);
              }
              if ( v146 != 1 )
              {
                v117 = **(_DWORD **)&result[0].m_serialAndIndex;
                Particle_VerifyAssetList(pLinkedAssetList);
                pModel = pLinkedAssetList->assetList[Particle_RandomIndex(v117, FXRAND_VISUAL, pLinkedAssetList->numAssets)].model;
                if ( !pModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4057, ASSERT_TYPE_ASSERT, "(pModel)", (const char *)&queryFormat, "pModel") )
                  __debugbreak();
              }
              if ( v158 )
                v118 = &EmissiveArray[v99].v;
              else
                v118 = (__m128 *)&v186;
              v175.v = *v118;
              FX_GammaToLinear(&v175);
              v170.v = *(__m128 *)((char *)v92 + v153);
              FX_GammaToLinear(&v170);
              _XMM6 = v175.v;
              _XMM0 = v170.v;
              __asm { vcvtps2ph xmm7, xmm0, 0 }
              v183.v[0] = v175.v.m128_f32[0];
              __asm
              {
                vextractps dword ptr [rsp+318h+var_138+4], xmm6, 1
                vextractps dword ptr [rsp+318h+var_138+8], xmm6, 2
              }
              _XMM1 = 0i64;
              Vec3PackR11G11B10F(&v183);
              _mm_shuffle_ps(_XMM6, _XMM6, 255);
              __asm
              {
                vinsertps xmm1, xmm1, xmm0, 0
                vinsertps xmm1, xmm1, xmm8, 10h
                vcvtps2ph xmm0, xmm1, 0
              }
              LODWORD(PositionArray) = _XMM0;
              _mm_shuffle_ps(_XMM7, _XMM7, 85);
              _XMM1 = _XMM7;
              __asm
              {
                vinsertps xmm1, xmm1, xmm0, 10h
                vinsertps xmm1, xmm1, [rsp+318h+var_2B0], 20h
                vinsertps xmm1, xmm1, dword ptr [rsp+318h+var_248], 30h
              }
              v178.v = _XMM1;
              if ( VelocityArray )
                v130 = &VelocityArray[v99];
              else
                v130 = NULL;
              ComputeModelPrevPlacement((const GfxScaledPlacement *)orientation, &v162[v91], v130, &prevPlacementOut);
              v131 = (_BYTE)v169 || v158;
              ParticleEmitter::AddModelToScene(this, pModel, (GfxScaledPlacement *)orientation, &v178, v131, renderFlags);
              v93 = *(int **)&result[0].m_serialAndIndex;
              m_pModuleScaleByDistance = *(const ParticleModuleScaleByDistance **)linVel.v;
              *v96 = *(__m256i *)orientation[0].v;
            }
            v94 = v145;
            v97 = m_particleCountRunning;
          }
          v95 = v149;
          ++v93;
          ++v91;
          *(_QWORD *)&result[0].m_serialAndIndex = v93;
          ++v92;
          ++v96;
        }
        while ( v91 < v97 );
      }
    }
  }
}

/*
==============
ParticleEmitter::DrawSetup_ParticleSimModel
==============
*/
void ParticleEmitter::DrawSetup_ParticleSimModel(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const ParticleModuleInitParticleSim *pModuleInitParticleSim)
{
  __int64 m_particleCountRunning; 
  float4 *SizeArray; 
  const float4 *PositionArray; 
  int *RandomSeedArray; 
  vector4 *EmitterTransform; 
  const ParticleStateDef *m_pStateDef; 
  ParticleLinkedAssetListDef *p_m_linkedAssetList; 
  int numAssets; 
  Material *material; 
  signed __int64 v14; 
  float v15; 
  __m128 v; 
  int v17; 
  int v18; 
  float4 *RotationAngleArray; 
  signed __int64 v20; 
  float4 *ColorArray; 
  signed __int64 v22; 
  float *SpawnTimeArray; 
  signed __int64 v24; 
  __int64 v26; 
  vector4 rParticleSimTransform; 

  if ( rParticleStateData->m_particleState.m_maxActiveParticleSimParticles )
  {
    m_particleCountRunning = rParticleStateData->m_particleData.m_particleCountRunning;
    SizeArray = Particle_GetSizeArray(&rParticleStateData->m_particleData);
    ColorArray = Particle_GetColorArray(&rParticleStateData->m_particleData);
    PositionArray = Particle_GetPositionArray(&rParticleStateData->m_particleData);
    SpawnTimeArray = Particle_GetSpawnTimeArray(&rParticleStateData->m_particleData);
    RotationAngleArray = Particle_GetRotationAngleArray(&rParticleStateData->m_particleData);
    RandomSeedArray = Particle_GetRandomSeedArray(&rParticleStateData->m_particleData);
    EmitterTransform = (vector4 *)ParticleEmitter::GetEmitterTransform(this, &rParticleStateData->m_particleState);
    m_pStateDef = rParticleStateData->m_particleState.m_pStateDef;
    rParticleSimTransform = *EmitterTransform;
    if ( m_pStateDef->elementType != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4129, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL") )
      __debugbreak();
    p_m_linkedAssetList = &pModuleInitParticleSim->m_linkedAssetList;
    Particle_VerifyAssetList(&pModuleInitParticleSim->m_linkedAssetList);
    numAssets = pModuleInitParticleSim->m_linkedAssetList.numAssets;
    v18 = numAssets;
    if ( numAssets == 1 )
    {
      Particle_VerifyAssetList(p_m_linkedAssetList);
      material = p_m_linkedAssetList->assetList->material;
      if ( !material )
        return;
      numAssets = 1;
    }
    else
    {
      material = NULL;
    }
    if ( (_DWORD)m_particleCountRunning )
    {
      v20 = (char *)RotationAngleArray - (char *)PositionArray;
      v22 = (char *)ColorArray - (char *)PositionArray;
      v14 = (char *)SpawnTimeArray - (char *)RandomSeedArray;
      v26 = m_particleCountRunning;
      v24 = (char *)SpawnTimeArray - (char *)RandomSeedArray;
      do
      {
        v15 = this->m_emitterLife - *(float *)((char *)RandomSeedArray + v14);
        v = SizeArray->v;
        if ( numAssets != 1 )
        {
          v17 = *RandomSeedArray;
          Particle_VerifyAssetList(p_m_linkedAssetList);
          material = pModuleInitParticleSim->m_linkedAssetList.assetList[Particle_RandomIndex(v17, FXRAND_VISUAL, pModuleInitParticleSim->m_linkedAssetList.numAssets)].material;
          if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4153, ASSERT_TYPE_ASSERT, "(pParticleSimAnimation)", (const char *)&queryFormat, "pParticleSimAnimation") )
            __debugbreak();
        }
        FX_DrawParticleSimAnimationModels(&rParticleStateData->m_particleState, this, (FxParticleSimAnimation *)material, (const float4 *)((char *)PositionArray + v22), PositionArray, (const float4 *)((char *)PositionArray + v20), &rParticleSimTransform, pModuleInitParticleSim, v.m128_f32[0], v15, *RandomSeedArray);
        numAssets = v18;
        ++PositionArray;
        v14 = v24;
        ++SizeArray;
        ++RandomSeedArray;
        --v26;
      }
      while ( v26 );
    }
  }
}

/*
==============
ParticleEmitter::DrawSetup_Tail
==============
*/
char ParticleEmitter::DrawSetup_Tail(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount, const ParticleModuleInitTail *pModuleInitTail, float4 *rOutTangent, float4 *rOutBitangent, float4 *rOutNormal, const float4 *rPos, const float4 *rVelocity, float cameraDistance, Particle_DrawData *r_particleDrawData)
{
  float rotationAngle; 
  __m128 v; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  float v36; 
  __int128 v41; 
  float v44; 
  __int128 v46; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 
  float4 v58; 
  __int128 v60; 
  vec3_t point; 
  vec3_t dir; 

  _RBX = r_particleDrawData;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4178, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !pModuleInitTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4179, ASSERT_TYPE_ASSERT, "(pModuleInitTail)", (const char *)&queryFormat, "pModuleInitTail") )
    __debugbreak();
  _XMM0 = g_negativeZero.v;
  _XMM1 = g_equalsEpsilon.v;
  __asm
  {
    vandnps xmm2, xmm0, xmmword ptr [rcx]
    vcmpltps xmm0, xmm1, xmm2
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) == 0 )
    return 0;
  _XMM1 = _mm128_mul_ps(rVelocity->v, rVelocity->v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
  }
  _XMM7.v = _mm128_div_ps(rVelocity->v, _mm_sqrt_ps(_XMM0));
  r_particleDrawData->velDirWorld = (float4)_XMM7.v;
  if ( pModuleInitTail->m_scaleWithVelocity )
  {
    _XMM1 = _mm128_mul_ps(rVelocity->v, rVelocity->v);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
    }
    r_particleDrawData->size.v[1] = _mm_sqrt_ps(_XMM0).m128_f32[0] * r_particleDrawData->size.v[1];
  }
  if ( pModuleInitTail->m_rotateAroundPivot )
  {
    rotationAngle = r_particleDrawData->rotationAngle;
    if ( rotationAngle != 0.0 )
    {
      v = rPos->v;
      v32 = pCamera->origin.v[0] - COERCE_FLOAT(*rPos);
      v33 = pCamera->origin.v[2];
      v35 = LODWORD(pCamera->origin.v[1]);
      v34 = pCamera->origin.v[1] - _mm_shuffle_ps(v, v, 85).m128_f32[0];
      point.v[0] = _XMM7.v.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rbp+37h+point+4], xmm7, 1
        vextractps dword ptr [rbp+37h+point+8], xmm7, 2
      }
      v36 = v33 - _mm_shuffle_ps(v, v, 170).m128_f32[0];
      *(float *)&v35 = fsqrt((float)((float)(v34 * v34) + (float)(v32 * v32)) + (float)(v36 * v36));
      _XMM4 = v35;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
      }
      dir.v[0] = v32 * (float)(1.0 / *(float *)&_XMM0);
      dir.v[2] = v36 * (float)(1.0 / *(float *)&_XMM0);
      dir.v[1] = v34 * (float)(1.0 / *(float *)&_XMM0);
      RotatePointAroundVector((vec3_t *)&v60, &dir, &point, rotationAngle * 57.295776);
      HIDWORD(v60) = 0;
      v41 = v60;
      *(float *)&v41 = *(float *)&v60;
      _XMM7 = v41;
      __asm
      {
        vinsertps xmm7, xmm7, xmm1, 10h
        vinsertps xmm7, xmm7, dword ptr [rbp+37h+var_A0+8], 20h
      }
      v60 = (__int128)_XMM7.v;
    }
  }
  if ( pModuleInitTail->m_tailLeading )
  {
    r_particleDrawData->posWorld.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)(LODWORD(r_particleDrawData->size.v[1]) ^ (unsigned __int128)_xmm), (__m128)(LODWORD(r_particleDrawData->size.v[1]) ^ (unsigned __int128)_xmm), 0), _XMM7.v), rPos->v);
  }
  else
  {
    __asm { vbroadcastss xmm0, dword ptr [rbx+74h] }
    r_particleDrawData->posWorld.v = _mm128_add_ps(_mm128_mul_ps(_XMM0, _XMM7.v), rPos->v);
  }
  if ( ParticleEmitter::CullElementForDraw_Tail(this, pCamera, frustumPlaneCount, cameraDistance, r_particleDrawData) )
    return 0;
  v44 = pCamera->origin.v[0];
  HIDWORD(v60) = 0;
  v46 = v60;
  *(float *)&v46 = v44;
  _XMM3 = v46;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
  }
  v49 = _mm128_sub_ps(_XMM3, r_particleDrawData->posWorld.v);
  v50 = _mm_shuffle_ps(_XMM7.v, _XMM7.v, 210);
  v51 = _mm_shuffle_ps(_XMM7.v, _XMM7.v, 201);
  v52 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v49, v49, 210), v51), _mm128_mul_ps(_mm_shuffle_ps(v49, v49, 201), v50));
  _XMM0 = _mm128_mul_ps(v52, v52);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
  }
  v58.v = _mm128_mul_ps(_XMM1, v52);
  rOutNormal->v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v58.v, v58.v, 201), v50), _mm128_mul_ps(_mm_shuffle_ps(v58.v, v58.v, 210), v51));
  *rOutTangent = (float4)v58.v;
  *rOutBitangent = (float4)_XMM7.v;
  return 1;
}

/*
==============
ParticleEmitter::DrawSetup_Volumetric
==============
*/
void ParticleEmitter::DrawSetup_Volumetric(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const FxCamera *pCamera, const Particle_DrawData *r_particleDrawData)
{
  ;
}

/*
==============
ParticleEmitter::DrawSpriteParticles
==============
*/
void ParticleEmitter::DrawSpriteParticles(ParticleEmitter *this, FxDrawState *pDrawState, unsigned int activeLightGridsBitmask, bool transShadowPass, BuildBounds *umbraBoundsAccumulator, BuildBounds *lightingBoundsAccumulator)
{
  float unsignedInt; 
  unsigned int numStates; 
  __int64 v12; 
  __int64 i; 
  ParticleEmitter::ParticleStateData *v14; 
  unsigned __int64 flags; 
  const ParticleModuleInitParticleSim *m_pModuleInitParticleSim; 
  const ParticleLinkedAssetListDef *p_m_linkedAssetList; 
  _QWORD *p_contents; 
  const ParticleLinkedAssetListDef *m_pModuleInitMaterial; 
  int numAssets; 
  const ParticleLinkedAssetListDef *v21; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  int v24; 

  if ( !pDrawState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 656, ASSERT_TYPE_ASSERT, "(pDrawState)", (const char *)&queryFormat, "pDrawState") )
    __debugbreak();
  v24 = Sys_Microseconds();
  if ( ParticleEmitter::DrawCommon(this) )
  {
    unsignedInt = (float)fx_alphaThreshold->current.unsignedInt;
    this->m_alphaThreshold = unsignedInt * 0.0039215689;
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    if ( numStates )
    {
      v12 = 0i64;
      for ( i = numStates; i; --i )
      {
        v14 = &this->m_pParticleStateData[v12];
        flags = v14->m_particleState.m_pStateDef->flags;
        if ( (flags & 0x40000000) == 0 || transShadowPass && (flags & 0x80000000) == 0 )
          goto LABEL_26;
        m_pModuleInitParticleSim = v14->m_particleState.m_pModuleInitParticleSim;
        if ( m_pModuleInitParticleSim )
        {
          p_m_linkedAssetList = &m_pModuleInitParticleSim->m_linkedAssetList;
          if ( !p_m_linkedAssetList || !p_m_linkedAssetList->assetList )
            goto LABEL_25;
          Particle_VerifyAssetList(p_m_linkedAssetList);
          p_contents = &p_m_linkedAssetList->assetList->material->contents;
        }
        else
        {
          m_pModuleInitMaterial = (const ParticleLinkedAssetListDef *)v14->m_particleState.m_pModuleInitMaterial;
          if ( !m_pModuleInitMaterial )
            goto LABEL_26;
          numAssets = m_pModuleInitMaterial->numAssets;
          if ( numAssets == 2 )
          {
            if ( pDrawState->camera->thermal )
              goto LABEL_26;
          }
          else if ( numAssets == 1 && !pDrawState->camera->thermal )
          {
            goto LABEL_26;
          }
          v21 = m_pModuleInitMaterial + 1;
          if ( !v21 || !v21->assetList )
          {
LABEL_25:
            ParticleEmitter::GetEmitterDef(this);
            SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
            Def = ParticleSystem::GetDef(SystemOwner);
            Com_PrintError(21, "WARNING: Could not find material for VFX file %s | %s. Make sure there is at least 1 asset in the material or particle sim asset list.\n", Def->name, (const char *)&queryFormat.fmt + 3);
            goto LABEL_26;
          }
          Particle_VerifyAssetList(v21);
          p_contents = &v21->assetList->material;
        }
        if ( !*p_contents )
          goto LABEL_25;
        ParticleEmitter::DrawElements_SpriteCommon(this, pDrawState, v14, activeLightGridsBitmask, transShadowPass, umbraBoundsAccumulator, lightingBoundsAccumulator);
LABEL_26:
        ++v12;
      }
    }
    this->m_profilerRenderTime += Sys_Microseconds() - v24;
  }
}

/*
==============
ParticleEmitter::EmitDelayedParticles
==============
*/
void ParticleEmitter::EmitDelayedParticles(ParticleEmitter *this, unsigned int numParticlesDelayed, const int currentTime, const FxCamera *pCamera)
{
  ParticleData *p_m_particleData; 
  int *RandomSeedArrayAtIndex; 
  __int64 v8; 
  int *v9; 
  unsigned int v10; 
  int *v11; 
  signed __int64 v12; 
  float v13; 
  float v14; 
  int v15; 
  int *RandomSeedArrayNextFreeElem; 
  float *SpawnTimeArrayNextFreeElem; 
  float *SpawnTimeArrayAtIndex; 
  unsigned int v19; 
  unsigned int m_particleCountMax; 

  if ( (this->m_flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1750, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_EMITTER_FLAG_HAS_PARTICLE_DELAY ))", (const char *)&queryFormat, "HasFlag( PARTICLE_EMITTER_FLAG_HAS_PARTICLE_DELAY )") )
    __debugbreak();
  if ( !numParticlesDelayed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1751, ASSERT_TYPE_ASSERT, "(numParticlesDelayed > 0)", (const char *)&queryFormat, "numParticlesDelayed > 0") )
    __debugbreak();
  p_m_particleData = &this->m_pParticleStateData->m_particleData;
  m_particleCountMax = this->m_pParticleStateData->m_particleData.m_particleCountMax;
  v19 = this->m_pParticleStateData->m_particleData.m_particleCountDelayed + this->m_pParticleStateData->m_particleData.m_particleCountRunning;
  SpawnTimeArrayAtIndex = Particle_GetSpawnTimeArrayAtIndex(p_m_particleData, m_particleCountMax - numParticlesDelayed);
  RandomSeedArrayAtIndex = Particle_GetRandomSeedArrayAtIndex(p_m_particleData, m_particleCountMax - numParticlesDelayed);
  SpawnTimeArrayNextFreeElem = Particle_GetSpawnTimeArrayNextFreeElem(p_m_particleData);
  v8 = 0i64;
  RandomSeedArrayNextFreeElem = Particle_GetRandomSeedArrayNextFreeElem(p_m_particleData);
  v9 = RandomSeedArrayNextFreeElem;
  v10 = 0;
  if ( numParticlesDelayed )
  {
    v11 = RandomSeedArrayAtIndex;
    v12 = (char *)SpawnTimeArrayAtIndex - (char *)RandomSeedArrayAtIndex;
    do
    {
      v13 = *(float *)((char *)v11 + v12);
      if ( v13 <= this->m_emitterLife )
      {
        if ( v19 == m_particleCountMax )
        {
          v14 = SpawnTimeArrayNextFreeElem[v8];
          SpawnTimeArrayNextFreeElem[v8] = v13;
          *(float *)((char *)v11 + v12) = v14;
          v15 = v9[v8];
          v9[v8] = *v11;
          *v11 = v15;
        }
        else
        {
          SpawnTimeArrayNextFreeElem[v8] = v13;
          v9[v8] = *v11;
          if ( v10 != (_DWORD)v8 )
          {
            if ( !v10 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1787, ASSERT_TYPE_ASSERT, "(i > 0)", (const char *)&queryFormat, "i > 0") )
                __debugbreak();
              v9 = RandomSeedArrayNextFreeElem;
            }
            *(int *)((char *)v11 + v12) = LODWORD(SpawnTimeArrayAtIndex[v8]);
            *v11 = RandomSeedArrayAtIndex[v8];
            RandomSeedArrayAtIndex[v8] = 0x7FFFFFFF;
          }
        }
        v8 = (unsigned int)(v8 + 1);
      }
      ++v10;
      ++v11;
    }
    while ( v10 < numParticlesDelayed );
    if ( (_DWORD)v8 )
    {
      ParticleEmitter::EmitParticles(this, v8, currentTime, 1, pCamera);
      if ( (unsigned int)v8 > p_m_particleData->m_particleCountDelayed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 232, ASSERT_TYPE_ASSERT, "(particleCount <= GetParticleCountDelayed())", (const char *)&queryFormat, "particleCount <= GetParticleCountDelayed()") )
        __debugbreak();
      p_m_particleData->m_particleCountDelayed -= v8;
    }
  }
}

/*
==============
ParticleEmitter::EmitParticles
==============
*/
void ParticleEmitter::EmitParticles(ParticleEmitter *this, const unsigned int numParticles, const int currentTime, bool hasDelay, const FxCamera *pCamera)
{
  __int128 v5; 
  ParticleEmitter *v8; 
  unsigned int m_particleCountMax; 
  unsigned __int8 v10; 
  __int64 m_localClientNum; 
  ParticleManager *v12; 
  const ParticleEmitterDef *EmitterDef; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  ParticleData *p_m_particleData; 
  unsigned int elementType; 
  ParticleSystem *v17; 
  const FxMarkSpawnData *MarkSpawnData; 
  ParticleSystem *v19; 
  ParticleSystem *v20; 
  const ParticleSystemDef *v21; 
  ParticleSystem *v22; 
  const ParticleSystemDef *v23; 
  ParticleSystem *v24; 
  const ParticleSystemDef *Def; 
  bool v26; 
  bool v27; 
  bool v28; 
  ParticleSystem *v29; 
  const ParticleSystemDef *v30; 
  const ParticleSystemDef *v31; 
  float *SpawnTimeArrayNextFreeElem; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  const vector4 *EmitterTransform; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  ParticleRelativeVelocityType m_velocityType; 
  unsigned int v43; 
  signed __int64 v44; 
  signed __int64 v45; 
  _DWORD *v46; 
  unsigned int m_particleHandleCounter; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  float *v51; 
  unsigned int v52; 
  ParticleState *v53; 
  __int64 v54; 
  float4 *v55; 
  unsigned int v56; 
  ParticleState::ModuleData *v57; 
  __int64 numModules; 
  void (__fastcall *initParticlesFunc)(const ParticleModule *, const ParticleState *, ParticleData *, const FxCamera *, const unsigned int); 
  const ParticleSystem *v60; 
  float4 *v61; 
  __m128 v62; 
  float v63; 
  __m128 v64; 
  float4 *v65; 
  __int64 v66; 
  __m128 v67; 
  bool v68; 
  bool v69; 
  int v70; 
  int v71; 
  int v72; 
  __m128 *p_v; 
  char *v74; 
  const float4 *v75; 
  __int64 v76; 
  char *v77; 
  bool v78; 
  __m128 v79; 
  __m128 v80; 
  const vector4 *v81; 
  unsigned int v82; 
  float4 *v83; 
  ParticleState::ElementTypeModule *v84; 
  __int64 v85; 
  float v86; 
  __int64 markEntnum; 
  CgEntitySystem *v88; 
  unsigned int v89; 
  __m128 *v90; 
  char *v91; 
  char *v92; 
  __int64 v93; 
  __m128 v94; 
  vec4_t v95; 
  __m128 *v96; 
  signed __int64 v97; 
  signed __int64 v98; 
  __int64 v99; 
  __m128 v100; 
  orientation_t *v101; 
  const int *v102; 
  LocalClientNum_t v103; 
  const float4 *positionArray; 
  unsigned int v105; 
  const ParticleStateDef *v106; 
  int v107; 
  orientation_t *v108; 
  int v109; 
  ParticleSystem *v110; 
  const ParticleSystemDef *v111; 
  unsigned int v112; 
  __int64 v113; 
  __m128 *v114; 
  __int64 v115; 
  __m256i v116; 
  __m128 v117; 
  const ParticleModuleInitRelativeVelocity *v118; 
  __m256i v119; 
  __m128 v120; 
  const ParticleSystem *v121; 
  __int64 v122; 
  float4 *v123; 
  const ParticleModuleInitRelativeVelocity *v124; 
  __m128 v125; 
  __m128 v126; 
  const ParticleStateDef *m_pStateDef; 
  const ParticleSystem *v128; 
  int LocalClientTime; 
  ParticleSystemHandle v131; 
  const float4 *v132; 
  const ParticleState::ElementTypeModule *v133; 
  const ParticleModuleInitAtlas *m_pModuleInitAtlas; 
  __int64 v135; 
  const float *v136; 
  float4 *RotationAngleArrayNextFreeElem; 
  const float4 *ColorArrayNextFreeElem; 
  const vector4 *v139; 
  __int64 numParticlesa; 
  float4 *parentVelocityArray; 
  float4 *parentVelocityArraya; 
  float4 *parentVelocityArrayb; 
  float4 *rotationAngleArray; 
  bool v145; 
  ParticleUseOrientationOptions m_type; 
  bool v148; 
  LocalClientNum_t localClientNum; 
  float4 *position; 
  int boneIndex; 
  int boneIndexa; 
  bool v153; 
  char attachedToParent; 
  int *randomSeedArray; 
  int dobjHandle; 
  int dobjHandlea; 
  ParticleState *pParticleState; 
  vector4 *rEmitterTransform; 
  ParticleSystem *SystemOwner; 
  ParticleState::ElementTypeModule *p_m_elementTypeModule; 
  float4 *v163; 
  signed __int64 v164; 
  unsigned int v165; 
  float4 *v166; 
  char *v167; 
  float4 *velocityArray; 
  orientation_t *p_axis; 
  orientation_t *boltOffset; 
  unsigned int m_particleCountRunning; 
  ParticleData *v172; 
  bool v173; 
  ParticleSystem::ParticleBolt *bolt; 
  ParticleState::ElementTypeModule v175; 
  FxMarkSpawnData *pMarkSpawnData; 
  unsigned int *handleArray; 
  __int64 v178; 
  float4 *boltOffsetQuat; 
  float4 *boltOffsetPos; 
  unsigned int *flagsArray; 
  float4 *sizeArray; 
  ParticleManager *pManager[2]; 
  float4 pos; 
  vec4_t out; 
  vector4 outParticleTransform; 
  vec4_t quat; 
  orientation_t axis; 
  vector3 orientationMat; 
  __int128 v190; 

  v8 = this;
  pos.v.m128_u64[0] = (unsigned __int64)this;
  if ( !numParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1274, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !v8->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1275, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( !v8->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1276, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  m_particleCountMax = v8->m_pParticleStateData->m_particleData.m_particleCountMax;
  if ( numParticles + ParticleEmitter::GetParticleCountRunningForAllStates(v8) > m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1277, ASSERT_TYPE_ASSERT, "(GetParticleCountRunningForAllStates() + numParticles <= m_pParticleStateData[0].m_particleData.GetParticleCountMax())", (const char *)&queryFormat, "GetParticleCountRunningForAllStates() + numParticles <= m_pParticleStateData[0].m_particleData.GetParticleCountMax()") )
    __debugbreak();
  v10 = 2;
  m_localClientNum = v8->m_pSystemOwner->m_localClientNum;
  localClientNum = (int)m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(numParticlesa) = v8->m_pSystemOwner->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", numParticlesa, 2) )
      __debugbreak();
  }
  v12 = &g_particleManager[m_localClientNum];
  pManager[0] = v12;
  SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v8);
  EmitterDef = ParticleEmitter::GetEmitterDef(v8);
  m_pParticleStateData = v8->m_pParticleStateData;
  *(_QWORD *)out.v = EmitterDef;
  pParticleState = &m_pParticleStateData->m_particleState;
  p_m_particleData = &m_pParticleStateData->m_particleData;
  m_particleCountRunning = m_pParticleStateData->m_particleData.m_particleCountRunning;
  v172 = &m_pParticleStateData->m_particleData;
  elementType = m_pParticleStateData->m_particleState.m_pStateDef->elementType;
  v165 = elementType;
  p_m_elementTypeModule = &m_pParticleStateData->m_particleState.m_elementTypeModule;
  v17 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v8);
  MarkSpawnData = ParticleSystem::GetMarkSpawnData(v17);
  v19 = SystemOwner;
  pMarkSpawnData = (FxMarkSpawnData *)MarkSpawnData;
  if ( (SystemOwner->m_flags & 0x40000) != 0 )
  {
    if ( currentTime >= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1302, ASSERT_TYPE_ASSERT, "(currentTime < 0)", (const char *)&queryFormat, "currentTime < 0") )
        __debugbreak();
      v19 = SystemOwner;
    }
    if ( (m_pParticleStateData->m_particleState.m_pStateDef->flags & 0x200400) != 0 )
    {
      v24 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v8);
      Def = ParticleSystem::GetDef(v24);
      Com_PrintWarning(21, "Can't preroll emitters using physics (LWP, HWP, raycast)- killed 1 spawn cycle for this emitter : %s \n", Def->name);
      return;
    }
    if ( elementType == 2 )
    {
      v20 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v8);
      v21 = ParticleSystem::GetDef(v20);
      Com_PrintWarning(21, "Can't preroll emitters using physics (decals)- killed 1 spawn cycle for this emitter : %s \n", v21->name);
      return;
    }
    if ( v12->m_archiveState == ARCHIVE_STATE_RESTORING && elementType == 9 )
    {
      v22 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v8);
      v23 = ParticleSystem::GetDef(v22);
      Com_PrintWarning(21, "Can't create child effects during a savegame restore- killed 1 spawn cycle for this emitter : %s \n", v23->name);
      return;
    }
  }
  v26 = v19->m_flags & 1;
  v28 = (v19->m_flags & 0x200000) != 0;
  v27 = (v19->m_flags & 0x200000) == 0;
  v190 = v5;
  v173 = v28;
  v145 = v26;
  if ( !v27 && !v26 )
  {
    v29 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v8);
    v30 = ParticleSystem::GetDef(v29);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1332, ASSERT_TYPE_ASSERT, "(!hasBoltOffset || isBolted)", "%s\n\tVFX ASSERT for effect: %s\n", "!hasBoltOffset || isBolted", v30->name) )
      __debugbreak();
    v19 = SystemOwner;
    v28 = v173;
  }
  bolt = &v19->m_bolt;
  if ( v26 )
  {
    boneIndex = (unsigned __int16)(*(_DWORD *)&v19->m_bolt.FxBoltBase >> 14);
    dobjHandle = *(_DWORD *)&v19->m_bolt.FxBoltBase & 0xFFF;
  }
  else
  {
    dobjHandle = 4095;
    boneIndex = 0xFFFF;
  }
  axis = orIdentity;
  if ( v28 )
  {
    if ( elementType == 2 && !v19->m_boltedSpawnPosSet )
    {
      v31 = ParticleSystem::GetDef(v19);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1343, ASSERT_TYPE_ASSERT, "( ( ( elementType == PARTICLE_ELEMENT_TYPE_DECAL && pSystem->BoltedSpawnPosSet() ) || elementType != PARTICLE_ELEMENT_TYPE_DECAL ) )", "( pSystem->GetVFXName() ) = %s", v31->name) )
        __debugbreak();
    }
    _XMM1.v = (__m128)bolt->offsetPos;
    LODWORD(axis.origin.v[0]) = _XMM1.v.m128_i32[0];
    __asm
    {
      vextractps dword ptr [rsp+2C8h+axis+4], xmm1, 1
      vextractps dword ptr [rsp+2C8h+axis+8], xmm1, 2
    }
    boltOffsetPos = &bolt->offsetPos;
    quat = (vec4_t)bolt->offsetQuat;
    boltOffsetQuat = &bolt->offsetQuat;
    QuatToAxis(&quat, &axis.axis);
    p_axis = &axis;
  }
  else
  {
    p_axis = NULL;
    boltOffsetPos = NULL;
    boltOffsetQuat = NULL;
  }
  ParticleData::ClearNextFreeElems(&m_pParticleStateData->m_particleData, numParticles, (const ParticleDataFlags)(hasDelay << 14));
  SpawnTimeArrayNextFreeElem = Particle_GetSpawnTimeArrayNextFreeElem(&m_pParticleStateData->m_particleData);
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v34 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v34 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v34;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  position = &Particle_GetPositionArray(&m_pParticleStateData->m_particleData)[v34];
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 342, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v35 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 342, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v35 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v35;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 342, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  velocityArray = &Particle_GetVelocityArray(&m_pParticleStateData->m_particleData)[v35];
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 344, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v36 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 344, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v36 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v36;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 344, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  v163 = &Particle_GetSpawnPosArray(&m_pParticleStateData->m_particleData)[v36];
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v37 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v37 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v37;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  v166 = &Particle_GetSpawnQuatArray(&m_pParticleStateData->m_particleData)[v37];
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v38 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v38 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v38;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  sizeArray = &Particle_GetSizeArray(&m_pParticleStateData->m_particleData)[v38];
  randomSeedArray = Particle_GetRandomSeedArrayNextFreeElem(&m_pParticleStateData->m_particleData);
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 354, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  flagsArray = Particle_GetFlagsArrayAtIndex(&m_pParticleStateData->m_particleData, m_pParticleStateData->m_particleData.m_particleCountRunning);
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v39 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v39 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v39;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  handleArray = (unsigned int *)&ParticleData::GetParticleDataArray(&m_pParticleStateData->m_particleData, PARTICLE_DATA_HANDLE)[4 * v39];
  *(_QWORD *)quat.v = ParticleEmitter::GetSystemOwner(v8);
  EmitterTransform = ParticleEmitter::GetEmitterTransform(v8, &m_pParticleStateData->m_particleState);
  m_pModuleInitRelativeVelocity = m_pParticleStateData->m_particleState.m_pModuleInitRelativeVelocity;
  rEmitterTransform = (vector4 *)EmitterTransform;
  v175.pModule = (const ParticleModule *)m_pParticleStateData->m_particleState.m_elementTypeModule;
  if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 )
    m_velocityType = PARTICLE_RELATIVE_VELOCITY_TYPE_LOCAL;
  else
    m_velocityType = m_pModuleInitRelativeVelocity->m_velocityType;
  v153 = (pParticleState->m_pStateDef->flags & 0xF0) != 0;
  v178 = pParticleState->m_pStateDef->flags & 0x300;
  v43 = 0;
  if ( numParticles >= 4 )
  {
    v44 = (char *)randomSeedArray - (char *)SpawnTimeArrayNextFreeElem;
    v45 = (char *)handleArray - (char *)SpawnTimeArrayNextFreeElem;
    v46 = SpawnTimeArrayNextFreeElem + 1;
    do
    {
      if ( !hasDelay )
        *(_DWORD *)((char *)v46 + v44 - 4) = (v8->m_randomSeed + currentTime + v8->m_pSystemOwner->m_randomSeed + 10111 * (unsigned int)(unsigned __int8)v43) % 0x3FE9;
      *(v46 - 1) = LODWORD(v8->m_emitterLife);
      m_particleHandleCounter = v8->m_particleHandleCounter;
      v8->m_particleHandleCounter = m_particleHandleCounter + 1;
      *(_DWORD *)((char *)v46 + v45 - 4) = m_particleHandleCounter;
      if ( !hasDelay )
        *(_DWORD *)((char *)v46 + v44) = (10111 * (unsigned __int8)(v10 - 1) + currentTime + v8->m_randomSeed + (unsigned int)v8->m_pSystemOwner->m_randomSeed) % 0x3FE9;
      *v46 = LODWORD(v8->m_emitterLife);
      v48 = v8->m_particleHandleCounter;
      v8->m_particleHandleCounter = v48 + 1;
      *(_DWORD *)((char *)v46 + v45) = v48;
      if ( !hasDelay )
        *(_DWORD *)((char *)v46 + v44 + 4) = (v8->m_randomSeed + currentTime + 10111 * v10 + (unsigned int)v8->m_pSystemOwner->m_randomSeed) % 0x3FE9;
      v46[1] = LODWORD(v8->m_emitterLife);
      v49 = v8->m_particleHandleCounter;
      v8->m_particleHandleCounter = v49 + 1;
      *(_DWORD *)((char *)v46 + v45 + 4) = v49;
      if ( !hasDelay )
        *(_DWORD *)((char *)v46 + v44 + 8) = (10111 * (unsigned __int8)(v10 + 1) + currentTime + v8->m_randomSeed + (unsigned int)v8->m_pSystemOwner->m_randomSeed) % 0x3FE9;
      v43 += 4;
      v46[2] = LODWORD(v8->m_emitterLife);
      v10 += 4;
      v50 = v8->m_particleHandleCounter;
      v8->m_particleHandleCounter = v50 + 1;
      *(_DWORD *)((char *)v46 + v45 + 8) = v50;
      v46 += 4;
    }
    while ( v43 < numParticles - 3 );
    p_m_particleData = v172;
  }
  if ( v43 < numParticles )
  {
    v51 = &SpawnTimeArrayNextFreeElem[v43];
    do
    {
      if ( !hasDelay )
        *(_DWORD *)((char *)v51 + (char *)randomSeedArray - (char *)SpawnTimeArrayNextFreeElem) = (v8->m_randomSeed + currentTime + v8->m_pSystemOwner->m_randomSeed + 10111 * (unsigned int)(unsigned __int8)v43) % 0x3FE9;
      ++v43;
      *v51 = v8->m_emitterLife;
      v52 = v8->m_particleHandleCounter;
      v8->m_particleHandleCounter = v52 + 1;
      *(_DWORD *)((char *)v51++ + (char *)handleArray - (char *)SpawnTimeArrayNextFreeElem) = v52;
    }
    while ( v43 < numParticles );
    p_m_particleData = v172;
  }
  v53 = pParticleState;
  if ( (pParticleState->m_pStateDef->flags & 0x2000000) != 0 )
  {
    if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 362, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
      __debugbreak();
    v54 = p_m_particleData->m_particleCountRunning;
    if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 362, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
      __debugbreak();
    if ( (unsigned int)v54 >= p_m_particleData->m_particleCountMax )
    {
      LODWORD(parentVelocityArray) = p_m_particleData->m_particleCountMax;
      LODWORD(numParticlesa) = v54;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 362, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
        __debugbreak();
    }
    v55 = Particle_GetParentVelocityArray(p_m_particleData);
    v56 = numParticles;
    ParticleEmitter::InitParentVelocityArray(v8, localClientNum, pParticleState, v145, bolt, numParticles, &v55[v54]);
  }
  else
  {
    v56 = numParticles;
  }
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 290, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 291, ASSERT_TYPE_ASSERT, "(particleCountEmit > 0)", (const char *)&queryFormat, "particleCountEmit > 0") )
    __debugbreak();
  v57 = pParticleState->m_pModuleDataList[0];
  numModules = pParticleState->m_pStateDef->moduleGroupDefs->numModules;
  if ( numModules > 0 )
  {
    do
    {
      if ( (v57->pModule->m_flags & 1) == 0 )
      {
        initParticlesFunc = v57->pUpdateData->initParticlesFunc;
        if ( initParticlesFunc )
          initParticlesFunc(v57->pModule, pParticleState, p_m_particleData, pCamera, v56);
      }
      ++v57;
      --numModules;
    }
    while ( numModules );
    v8 = (ParticleEmitter *)pos.v.m128_u64[0];
  }
  if ( (*(_DWORD *)(*(_QWORD *)out.v + 100i64) & 0x200) != 0 )
  {
    v60 = ParticleEmitter::GetSystemOwner(v8);
    v61 = position;
    v62 = _mm128_sub_ps(v8->m_lastSpawnPos.v, v60->m_systemTransform.w.v);
    v64 = 0i64;
    if ( v56 )
    {
      v65 = position;
      v66 = v56;
      do
      {
        ++v65;
        v65[-1].v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v64, v64, 0), v62), v65[-1].v);
        v67 = v64;
        v63 = (float)v56;
        v67.m128_f32[0] = v64.m128_f32[0] + (float)(1.0 / v63);
        v64 = v67;
        --v66;
      }
      while ( v66 );
    }
  }
  else
  {
    v61 = position;
  }
  v68 = v145;
  v69 = particle_use_spawn_position_in_runner_bolt_offset->current.enabled && v165 == 9 && v145;
  v148 = v69;
  if ( m_velocityType )
  {
    v70 = m_velocityType - 1;
    if ( !v70 )
      goto LABEL_207;
    v71 = v70 - 1;
    if ( !v71 )
      goto LABEL_165;
    v72 = v71 - 2;
    if ( v72 )
    {
      if ( v72 == 1 )
      {
LABEL_165:
        if ( v56 )
        {
          p_v = &v61->v;
          v167 = (char *)((char *)v166 - (char *)v61);
          v74 = (char *)((char *)v163 - (char *)v61);
          v75 = v61;
          v76 = numParticles;
          v77 = (char *)((char *)velocityArray - (char *)v61);
          do
          {
            ParticleState::CalculateSpawnOffsetParticleTransform(pParticleState, v75, v8, &outParticleTransform);
            v78 = ParticleState::UseBoltInfo(pParticleState);
            v79 = *p_v;
            if ( v78 )
            {
              *(__m128 *)((char *)p_v + (_QWORD)v74) = v79;
            }
            else
            {
              v80 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v79, v79, 0), rEmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v79, v79, 85), rEmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v79, v79, 170), rEmitterTransform->z.v), rEmitterTransform->w.v)));
              *p_v = v80;
              if ( !v148 )
                *(__m128 *)((char *)p_v + (_QWORD)v74) = v80;
            }
            Particle_RotMatrixToQuatVec(&outParticleTransform, &out);
            *(vec4_t *)((char *)p_v + (_QWORD)v167) = out;
            if ( !v178 )
              *(__m128 *)&v77[(_QWORD)p_v] = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v77[(_QWORD)p_v], *(__m128 *)&v77[(_QWORD)p_v], 0), outParticleTransform.x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v77[(_QWORD)p_v], *(__m128 *)&v77[(_QWORD)p_v], 85), outParticleTransform.y.v), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v77[(_QWORD)p_v], *(__m128 *)&v77[(_QWORD)p_v], 170), outParticleTransform.z.v)));
            ++v75;
            ++p_v;
            --v76;
          }
          while ( v76 );
          p_m_particleData = v172;
          v53 = pParticleState;
        }
      }
    }
    else
    {
LABEL_207:
      if ( v56 )
      {
        v90 = &v61->v;
        v91 = (char *)((char *)v163 - (char *)v61);
        v92 = (char *)((char *)v166 - (char *)v61);
        v93 = v56;
        v81 = rEmitterTransform;
        do
        {
          *(__m128 *)((char *)v90 + (_QWORD)v91) = *v90;
          v94 = *v90++;
          v90[-1] = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v94, v94, 0), rEmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v94, v94, 85), rEmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v94, v94, 170), rEmitterTransform->z.v), rEmitterTransform->w.v)));
          *(float4 *)((char *)&v90[-1] + (_QWORD)v92) = (float4)g_unit.v;
          --v93;
        }
        while ( v93 );
        goto LABEL_176;
      }
    }
    v81 = rEmitterTransform;
LABEL_176:
    v82 = numParticles;
LABEL_177:
    v83 = position;
    goto LABEL_178;
  }
  v81 = rEmitterTransform;
  if ( v145 )
  {
    outParticleTransform = *rEmitterTransform;
    Axis34ToQuat((const tmat34_t<vec4_t> *)&outParticleTransform, &out);
    v95 = out;
    v68 = v145;
  }
  else
  {
    v95 = *(vec4_t *)pManager;
  }
  v82 = numParticles;
  if ( !numParticles )
    goto LABEL_177;
  v83 = position;
  v96 = &velocityArray->v;
  v97 = (char *)position - (char *)velocityArray;
  v98 = (char *)v166 - (char *)velocityArray;
  v99 = numParticles;
  do
  {
    v100 = *(__m128 *)((char *)v96 + v97);
    *(__m128 *)((char *)v96 + v97) = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v100, v100, 0), rEmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v100, v100, 85), rEmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v100, v100, 170), rEmitterTransform->z.v), rEmitterTransform->w.v)));
    if ( !v178 )
      *v96 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*v96, *v96, 0), rEmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*v96, *v96, 85), rEmitterTransform->y.v), _mm128_mul_ps(_mm_shuffle_ps(*v96, *v96, 170), rEmitterTransform->z.v)));
    if ( v68 )
    {
      if ( !v69 )
        *(__m128 *)((char *)v96 + (char *)v163 - (char *)velocityArray) = rEmitterTransform->w.v;
      *(vec4_t *)((char *)v96 + v98) = v95;
    }
    else
    {
      *(float4 *)((char *)v96 + v98) = (float4)g_unit.v;
    }
    ++v96;
    --v99;
  }
  while ( v99 );
LABEL_178:
  switch ( v165 )
  {
    case 2u:
      v133 = &v53->m_elementTypeModule;
      if ( !*((_BYTE *)&v53->m_elementTypeModule.pModule[6].m_type + 2) )
      {
        m_pModuleInitAtlas = v53->m_pModuleInitAtlas;
        if ( m_pModuleInitAtlas && (m_pModuleInitAtlas->m_flags & 1) == 0 && v53->m_atlasData.isAtlas )
        {
          LODWORD(pManager[0]) = 0;
          HIDWORD(pManager[0]) = m_pModuleInitAtlas->m_loopCount;
          *(float *)&pManager[1] = m_pModuleInitAtlas->m_curves[0].scale;
        }
        else
        {
          pManager[0] = NULL;
          *(float *)&pManager[1] = 0.0;
        }
        if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
          __debugbreak();
        v135 = p_m_particleData->m_particleCountRunning;
        if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
          __debugbreak();
        if ( (unsigned int)v135 >= p_m_particleData->m_particleCountMax )
        {
          LODWORD(parentVelocityArray) = p_m_particleData->m_particleCountMax;
          LODWORD(numParticlesa) = v135;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
            __debugbreak();
        }
        v136 = &Particle_GetAtlasIndexArray(p_m_particleData)[v135];
        RotationAngleArrayNextFreeElem = Particle_GetRotationAngleArrayNextFreeElem(p_m_particleData);
        ColorArrayNextFreeElem = Particle_GetColorArrayNextFreeElem(p_m_particleData);
        v139 = v81;
        positionArray = position;
        v103 = localClientNum;
        rotationAngleArray = RotationAngleArrayNextFreeElem;
        v105 = numParticles;
        ParticleEmitter::SpawnDecals(v8, localClientNum, numParticles, v139, v133, randomSeedArray, ColorArrayNextFreeElem, position, sizeArray, rotationAngleArray, flagsArray, pMarkSpawnData, v136, (FX_ImpactMark_AtlasInfo *)pManager, boltOffsetPos, boltOffsetQuat);
        v102 = randomSeedArray;
        goto LABEL_236;
      }
      break;
    case 4u:
      v132 = Particle_GetColorArrayNextFreeElem(p_m_particleData);
      parentVelocityArrayb = v83;
      v102 = randomSeedArray;
      ParticleEmitter::SpawnGeoTrails(v8, v82, v53, v81, randomSeedArray, v132, parentVelocityArrayb, sizeArray, velocityArray);
      goto LABEL_235;
    case 9u:
      if ( !v175.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1587, ASSERT_TYPE_ASSERT, "(pModuleInitRunner)", (const char *)&queryFormat, "pModuleInitRunner") )
        __debugbreak();
      v107 = dobjHandle;
      attachedToParent = *((_BYTE *)&v175.pModule[12].m_type + 3);
      v108 = p_axis;
      if ( attachedToParent )
        v107 = 4095;
      v109 = boneIndex;
      dobjHandlea = v107;
      if ( *((_BYTE *)&v175.pModule[12].m_type + 3) )
        v109 = 0xFFFF;
      if ( *((_BYTE *)&v175.pModule[12].m_type + 3) )
        v108 = NULL;
      boneIndexa = v109;
      boltOffset = v108;
      if ( *(_DWORD *)&v175.pModule[11].m_type )
      {
        v112 = 0;
        m_type = v175.pModule[12].m_type;
        if ( v82 )
        {
          v113 = 0i64;
          v164 = (char *)v163 - (char *)position;
          v114 = &position->v;
          do
          {
            if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            v115 = p_m_particleData->m_particleCountRunning;
            if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            if ( (unsigned int)v115 >= p_m_particleData->m_particleCountMax )
            {
              LODWORD(parentVelocityArray) = p_m_particleData->m_particleCountMax;
              LODWORD(numParticlesa) = v115;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
                __debugbreak();
            }
            *(_QWORD *)out.v = &Particle_GetChildSystemArray(p_m_particleData)[v115];
            if ( ParticleState::IsRelativeToEmitterOrigin(pParticleState) )
            {
              if ( (unsigned __int8)(m_type - 3) > 2u )
              {
                v116 = *(__m256i *)v81->z.v.m128_f32;
                *(__m256i *)outParticleTransform.x.v.m128_f32 = *(__m256i *)v81->x.v.m128_f32;
                *(__m256i *)outParticleTransform.z.v.m128_f32 = v116;
              }
              else
              {
                ParticleState::CalculateSpawnOffsetParticleTransform(pParticleState, &position[v112], v8, &outParticleTransform);
              }
              v117 = *v114;
              pos.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v117, v117, 0), v81->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v117, v117, 85), v81->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v117, v117, 170), v81->z.v), v81->w.v)));
            }
            else if ( (unsigned __int8)(m_type - 3) <= 2u && BYTE2(v175.pModule[12].m_flags) )
            {
              v118 = pParticleState->m_pModuleInitRelativeVelocity;
              v119 = *(__m256i *)v81->z.v.m128_f32;
              *(__m256i *)outParticleTransform.x.v.m128_f32 = *(__m256i *)v81->x.v.m128_f32;
              *(__m256i *)outParticleTransform.z.v.m128_f32 = v119;
              if ( !v118 || (v118->m_flags & 1) != 0 || ((v118->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
              {
                pos.v = *v114;
              }
              else
              {
                v120 = *v114;
                pos.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v120, v120, 0), v81->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v120, v120, 85), v81->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v120, v120, 170), v81->z.v), v81->w.v)));
              }
              if ( (pParticleState->m_pStateDef->flags & 0x10000000) != 0 )
              {
                v121 = ParticleEmitter::GetSystemOwner(v8);
                pos.v = _mm128_add_ps(v121->m_systemTransform.w.v, pos.v);
              }
            }
            else
            {
              if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 351, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
                __debugbreak();
              v122 = p_m_particleData->m_particleCountRunning;
              if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 351, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
                __debugbreak();
              if ( (unsigned int)v122 >= p_m_particleData->m_particleCountMax )
              {
                LODWORD(parentVelocityArray) = p_m_particleData->m_particleCountMax;
                LODWORD(numParticlesa) = v122;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 351, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
                  __debugbreak();
              }
              v123 = Particle_GetRotationAngleArray(p_m_particleData);
              ParticleEmitter::GetChildOrientation(v8, &position[v112], &velocityArray[v112], &v123[v122 + v112], v153, v81, m_type, 1, &outParticleTransform);
              v124 = pParticleState->m_pModuleInitRelativeVelocity;
              if ( !v124 || (v124->m_flags & 1) != 0 || ((v124->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
              {
                v126 = *v114;
              }
              else
              {
                v125 = *v114;
                v126 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v125, v125, 0), v81->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v125, v125, 85), v81->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v125, v125, 170), v81->z.v), v81->w.v)));
              }
              m_pStateDef = pParticleState->m_pStateDef;
              outParticleTransform.w.v = v126;
              if ( (m_pStateDef->flags & 0x10000000) != 0 )
              {
                v128 = ParticleEmitter::GetSystemOwner(v8);
                v126 = _mm128_add_ps(v128->m_systemTransform.w.v, outParticleTransform.w.v);
                outParticleTransform.w.v = v126;
              }
              pos.v = v126;
            }
            orientationMat = outParticleTransform.vector3;
            if ( v148 )
            {
              _XMM2 = _mm128_add_ps(*(__m128 *)((char *)v114 + v164), bolt->offsetPos.v);
              axis.origin.v[0] = _XMM2.m128_f32[0];
              __asm
              {
                vextractps dword ptr [rsp+2C8h+axis+4], xmm2, 1
                vextractps dword ptr [rsp+2C8h+axis+8], xmm2, 2
              }
            }
            LocalClientTime = currentTime;
            if ( (SystemOwner->m_flags & 0x40000) != 0 )
            {
              if ( currentTime >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1655, ASSERT_TYPE_ASSERT, "(childTime < 0)", (const char *)&queryFormat, "childTime < 0") )
                __debugbreak();
              if ( (ParticleSystem::GetDef(SystemOwner)->flags & 0x10000) == 0 )
                LocalClientTime = CG_GetLocalClientTime((const LocalClientNum_t)v8->m_pSystemOwner->m_localClientNum);
            }
            v131 = ParticleEmitter::SpawnChildEffect(v8, localClientNum, LocalClientTime, pManager[0], pParticleState, (const ParticleLinkedAssetListDef *)&v175.pModule[10], randomSeedArray[v113], &pos, &orientationMat, dobjHandlea, boneIndexa, boltOffset, pCamera, pMarkSpawnData, 1, attachedToParent, *(const ParticleSystem **)quat.v, NULL, PARTICLE_SYSTEM_FLAG_NONE);
            ++v112;
            ++v114;
            *(_DWORD *)(*(_QWORD *)out.v + v113 * 4) = v131;
            ++v113;
          }
          while ( v112 < numParticles );
        }
      }
      else
      {
        v110 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v8);
        v111 = ParticleSystem::GetDef(v110);
        Com_PrintWarning(21, "There are no child effects in the runner for effect: %s", v111->name);
      }
      break;
    case 0xBu:
      parentVelocityArraya = v83;
      v102 = randomSeedArray;
      ParticleEmitter::SpawnVectorFields(v8, v82, v53, v81, &v53->m_elementTypeModule, randomSeedArray, parentVelocityArraya);
      goto LABEL_235;
    case 0xDu:
      if ( v82 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1675, ASSERT_TYPE_ASSERT, "(numParticles == 1)", (const char *)&queryFormat, "numParticles == 1") )
        __debugbreak();
      if ( (SystemOwner->m_flags & 0x4000000000i64) != 0 )
      {
        v105 = numParticles;
        positionArray = position;
        v103 = localClientNum;
        v102 = randomSeedArray;
        goto LABEL_236;
      }
      v84 = p_m_elementTypeModule;
      v85 = *(unsigned int *)&p_m_elementTypeModule->pModule[1].m_type;
      if ( !(_DWORD)v85 )
        goto LABEL_233;
      v86 = (float)v85;
      if ( (float)(v86 * 0.0099999998) < fx_randomTable[*randomSeedArray + 31] )
        goto LABEL_233;
      if ( pMarkSpawnData )
      {
        markEntnum = (int)pMarkSpawnData->markEntnum;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(parentVelocityArray) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", parentVelocityArray) )
            __debugbreak();
        }
        if ( localClientNum >= (unsigned int)CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(parentVelocityArray) = CgEntitySystem::ms_allocatedCount;
          LODWORD(numParticlesa) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[localClientNum] )
        {
          LODWORD(parentVelocityArray) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", parentVelocityArray) )
            __debugbreak();
        }
        v88 = CgEntitySystem::ms_entitySystemArray[localClientNum];
        if ( (unsigned int)markEntnum >= 0x800 )
        {
          LODWORD(parentVelocityArray) = 2048;
          LODWORD(numParticlesa) = markEntnum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
            __debugbreak();
        }
        if ( (CgEntitySystem *)((char *)v88 + 760 * markEntnum) != (CgEntitySystem *)-16i64 && (v88->m_entities[markEntnum].flags & 1) != 0 && v88->m_entities[markEntnum].nextState.number < 2533 && (unsigned int)pMarkSpawnData->boneIndex - 1 <= 0xFC )
        {
          dobjHandle = v88->m_entities[markEntnum].nextState.number;
          v89 = pMarkSpawnData->boneIndex;
          v84 = p_m_elementTypeModule;
LABEL_227:
          if ( dobjHandle < 2533 && (v89 - 1 <= 0xFC || v89 >= 0x100) )
          {
            v101 = &axis;
            if ( !v173 )
              v101 = NULL;
            FX_Dismemberment_DismemberBone(localClientNum, dobjHandle, v89, &v101->origin, v84->pModule[1].m_flags);
          }
LABEL_233:
          *flagsArray |= 1u;
          break;
        }
        v84 = p_m_elementTypeModule;
      }
      v89 = boneIndex;
      goto LABEL_227;
  }
  v102 = randomSeedArray;
LABEL_235:
  v103 = localClientNum;
  positionArray = position;
  v105 = numParticles;
LABEL_236:
  v106 = pParticleState->m_pStateDef;
  if ( (v106->flags & 0x400) != 0 )
  {
    ParticleState::EmitPhysicsParticles(pParticleState, p_m_particleData, v105, v8);
    v106 = pParticleState->m_pStateDef;
  }
  if ( (v106->flags & 0x8000000) != 0 )
    ParticleEmitter::SpawnSounds(v8, v103, currentTime, v105, pParticleState, pParticleState->m_pModuleInitSound, v102, positionArray, handleArray);
  if ( m_particleCountRunning != p_m_particleData->m_particleCountRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1734, ASSERT_TYPE_ASSERT, "(checkRunningParticles == particleData->GetParticleCountRunning())", (const char *)&queryFormat, "checkRunningParticles == particleData->GetParticleCountRunning()") )
    __debugbreak();
  ParticleData::AddParticlesRunning(p_m_particleData, v105);
  v8->m_lifetimeParticleCount += v105;
}

/*
==============
ParticleEmitter::EvaluateDistanceFade
==============
*/
double ParticleEmitter::EvaluateDistanceFade(ParticleEmitter *this, float cameraDistance)
{
  float fadeOutMaxDistance; 
  double result; 
  const ParticleModuleInitSpawn *m_pModuleInitSpawn; 
  ParticleCurveDef *m_curves; 

  fadeOutMaxDistance = ParticleEmitter::GetEmitterDef(this)->fadeOutMaxDistance;
  if ( fadeOutMaxDistance == 0.0 )
  {
    *(_QWORD *)&result = LODWORD(FLOAT_1_0);
  }
  else
  {
    m_pModuleInitSpawn = this->m_pModuleInitSpawn;
    if ( m_pModuleInitSpawn )
      m_curves = m_pModuleInitSpawn->m_curves;
    else
      m_curves = &ParticleEmitter::GetEmitterDef(this)->fadeCurveDef;
    return Particle_GetCurveValue(m_curves, cameraDistance / fadeOutMaxDistance);
  }
  return result;
}

/*
==============
ParticleEmitter::FreeParticleData
==============
*/
void ParticleEmitter::FreeParticleData(ParticleEmitter *this)
{
  unsigned int numStates; 
  __int64 v3; 
  __int64 v4; 
  ParticleEmitter::ParticleStateData *v5; 
  ParticleData *p_m_particleData; 
  LocalClientNum_t m_localClientNum; 
  unsigned __int8 *m_pParticleData; 

  if ( this->m_pParticleStateData )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    if ( numStates )
    {
      v3 = numStates;
      v4 = 0i64;
      do
      {
        v5 = &this->m_pParticleStateData[v4];
        p_m_particleData = &v5->m_particleData;
        ParticleState::Release(&v5->m_particleState, &v5->m_particleData, this);
        m_localClientNum = p_m_particleData->m_localClientNum;
        m_pParticleData = p_m_particleData->m_pParticleData;
        *(_QWORD *)&p_m_particleData->m_particleCountRunning = 0i64;
        Particle_ReleaseBlock(m_localClientNum, m_pParticleData);
        p_m_particleData->m_pParticleData = NULL;
        *(_QWORD *)&p_m_particleData->m_particleCountRunning = 0i64;
        p_m_particleData->m_particleCountMax = 0;
        p_m_particleData->m_pEmitter = NULL;
        p_m_particleData->m_pEmitterPadding = NULL;
        p_m_particleData->m_particleSize = 0;
        p_m_particleData->m_dataFlags = USE_NONE;
        ParticleData::DestroyParticleOffsetTable(p_m_particleData);
        ++v4;
        --v3;
      }
      while ( v3 );
    }
    ParticleManager::ParticleSystemFree(this->m_pSystemOwner->m_localClientNum, this->m_pParticleStateData);
    this->m_pParticleStateData = NULL;
  }
  this->m_flags &= ~0x80u;
  this->m_flags |= 0x40u;
}

/*
==============
ParticleEmitter::GetBeamCurvePoints
==============
*/
void ParticleEmitter::GetBeamCurvePoints(ParticleEmitter *this, const ParticleState *pParticleState, float4 *outStartPos, float4 *outEndPos, float4 *outCurvePoint1, float4 *outCurvePoint2)
{
  ParticleState::ElementTypeModule v10; 
  const ParticleSystem *SystemOwner; 
  float4 v12; 

  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4702, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  v10.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
  SystemOwner = ParticleEmitter::GetSystemOwner(this);
  ParticleEmitter::GetBeamPos(this, pParticleState, outStartPos, outEndPos);
  if ( (SystemOwner->m_flags & 0x100) != 0 )
  {
    *outCurvePoint1 = SystemOwner->m_beamData.m_beamCurvePoint1;
    v12.v = (__m128)SystemOwner->m_beamData.m_beamCurvePoint2;
  }
  else
  {
    *outCurvePoint1 = *(float4 *)&v10.pModule[8].m_type;
    v12.v = *(__m128 *)&v10.pModule[10].m_type;
  }
  *outCurvePoint2 = (float4)v12.v;
  if ( v10.pModule )
  {
    outCurvePoint1->v = _mm128_add_ps(outCurvePoint1->v, *(__m128 *)&v10.pModule[6].m_type);
    outCurvePoint2->v = _mm128_add_ps(outCurvePoint2->v, *(__m128 *)&v10.pModule[6].m_type);
  }
}

/*
==============
ParticleEmitter::GetBeamLength
==============
*/
float ParticleEmitter::GetBeamLength(ParticleEmitter *this, const ParticleState *pParticleState)
{
  ParticleState::ElementTypeModule v4; 
  const ParticleSystem *SystemOwner; 
  __m128 v; 
  __m128 v7; 
  __m128 v8; 
  float result; 

  if ( !pParticleState )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4733, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4673, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
      __debugbreak();
  }
  v4.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
  SystemOwner = ParticleEmitter::GetSystemOwner(this);
  if ( (SystemOwner->m_flags & 0x100) != 0 )
  {
    v = SystemOwner->m_beamData.m_beamStartPos.v;
    v7 = SystemOwner->m_beamData.m_beamEndPos.v;
  }
  else
  {
    v = *(__m128 *)&v4.pModule[2].m_type;
    v7 = *(__m128 *)&v4.pModule[4].m_type;
  }
  if ( v4.pModule )
  {
    v = _mm128_add_ps(v, *(__m128 *)&v4.pModule[6].m_type);
    v7 = _mm128_add_ps(v7, *(__m128 *)&v4.pModule[6].m_type);
  }
  v8 = _mm128_sub_ps(v7, v);
  _XMM1 = _mm128_mul_ps(v8, v8);
  __asm
  {
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  LODWORD(result) = _mm_sqrt_ps(_XMM0).m128_u32[0];
  return result;
}

/*
==============
ParticleEmitter::GetBeamPos
==============
*/
void ParticleEmitter::GetBeamPos(ParticleEmitter *this, const ParticleState *pParticleState, float4 *outStartPos, float4 *outEndPos)
{
  ParticleState::ElementTypeModule v8; 
  const ParticleSystem *SystemOwner; 
  float4 v10; 

  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4673, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  v8.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
  SystemOwner = ParticleEmitter::GetSystemOwner(this);
  if ( (SystemOwner->m_flags & 0x100) != 0 )
  {
    *outStartPos = SystemOwner->m_beamData.m_beamStartPos;
    v10.v = (__m128)SystemOwner->m_beamData.m_beamEndPos;
  }
  else
  {
    *outStartPos = *(float4 *)&v8.pModule[2].m_type;
    v10.v = *(__m128 *)&v8.pModule[4].m_type;
  }
  *outEndPos = (float4)v10.v;
  if ( v8.pModule )
  {
    outStartPos->v = _mm128_add_ps(outStartPos->v, *(__m128 *)&v8.pModule[6].m_type);
    outEndPos->v = _mm128_add_ps(outEndPos->v, *(__m128 *)&v8.pModule[6].m_type);
  }
}

/*
==============
ParticleEmitter::GetBeamTransform
==============
*/
void ParticleEmitter::GetBeamTransform(ParticleEmitter *this, const ParticleState *pParticleState, vector4 *outTransform)
{
  ParticleState::ElementTypeModule v6; 
  const ParticleSystem *SystemOwner; 
  float4 v8; 
  __m128 v; 
  __m128 v10; 
  float4 lookAtInput; 

  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4673, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  v6.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
  SystemOwner = ParticleEmitter::GetSystemOwner(this);
  if ( (SystemOwner->m_flags & 0x100) != 0 )
  {
    v8.v = (__m128)SystemOwner->m_beamData.m_beamStartPos;
    v = SystemOwner->m_beamData.m_beamEndPos.v;
  }
  else
  {
    v8.v = *(__m128 *)&v6.pModule[2].m_type;
    v = *(__m128 *)&v6.pModule[4].m_type;
  }
  if ( v6.pModule )
  {
    v8.v = _mm128_add_ps(v8.v, *(__m128 *)&v6.pModule[6].m_type);
    v = _mm128_add_ps(v, *(__m128 *)&v6.pModule[6].m_type);
  }
  v10 = _mm128_sub_ps(v, v8.v);
  _XMM0 = _mm128_mul_ps(v10, v10);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm1, xmm1, xmm1
  }
  if ( *(float *)&_XMM1 == 0.0 )
  {
    *(tmat44_t<vec4_t> *)outTransform = identityMatrix44;
  }
  else
  {
    outTransform->x = (float4)_xmm;
    outTransform->z = (float4)_xmm;
    lookAtInput.v = v10;
    Particle_GenerateMatrixFromLookAt(&lookAtInput, outTransform);
    outTransform->w = (float4)v8.v;
  }
}

/*
==============
ParticleEmitter::GetBurstCount
==============
*/
__int64 ParticleEmitter::GetBurstCount(ParticleEmitter *this)
{
  const ParticleEmitterDef *EmitterDef; 
  __int64 result; 
  int v4; 

  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  result = (unsigned int)EmitterDef->particleBurstCount.min;
  v4 = EmitterDef->particleBurstCount.max - result;
  if ( v4 )
  {
    result = (unsigned int)(EmitterDef->particleBurstCount.min + Particle_RandomIndex(this->m_randomSeed, FXRAND_SPAWN_COUNT, v4 + 1));
    if ( (int)result < 0 )
      return 0i64;
  }
  else if ( (int)result < 0 )
  {
    return 0i64;
  }
  return result;
}

/*
==============
ParticleEmitter::GetParticleCountDelayed
==============
*/
__int64 ParticleEmitter::GetParticleCountDelayed(ParticleEmitter *this)
{
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 976, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 977, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
    __debugbreak();
  if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 978, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  return this->m_pParticleStateData->m_particleData.m_particleCountDelayed;
}

/*
==============
ParticleEmitter::GetParticleCountRunningForAllStates
==============
*/

__int64 __fastcall ParticleEmitter::GetParticleCountRunningForAllStates(ParticleEmitter *this, double _XMM1_8, double _XMM2_8)
{
  int v4; 
  unsigned int v5; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v7; 
  unsigned int numStates; 
  int v9; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  __int64 v13; 
  __int64 v19; 
  int v30; 
  ParticleEmitter::ParticleStateData *v31; 
  __int64 v32; 
  unsigned int v33; 
  __int64 v34; 

  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 933, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 934, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
    __debugbreak();
  if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 935, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  v4 = 0;
  v5 = 0;
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  v7 = 0;
  numStates = EmitterDef->numStates;
  if ( numStates >= 8 )
  {
    v9 = 2;
    m_pParticleStateData = this->m_pParticleStateData;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    do
    {
      v13 = v7;
      v7 += 8;
      _XMM0 = m_pParticleStateData[v13].m_particleData.m_particleCountRunning;
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [rdx+r14+1A8h], 1
        vpinsrd xmm0, xmm0, dword ptr [r8+r14+1A8h], 2
        vpinsrd xmm0, xmm0, dword ptr [r10+r14+1A8h], 3
        vpaddd  xmm1, xmm0, xmm1
      }
      v19 = (unsigned int)(v9 + 2);
      v9 += 8;
      _XMM0 = m_pParticleStateData[v19].m_particleData.m_particleCountRunning;
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [rdx+r14+1A8h], 1
        vpinsrd xmm0, xmm0, dword ptr [r8+r14+1A8h], 2
        vpinsrd xmm0, xmm0, dword ptr [r9+r14+1A8h], 3
        vpaddd  xmm2, xmm0, xmm2
      }
    }
    while ( v7 < (numStates & 0xFFFFFFF8) );
    __asm
    {
      vpaddd  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
    }
    v5 = _XMM0;
  }
  v30 = 0;
  if ( v7 >= numStates )
    return v5;
  if ( numStates - v7 >= 2 )
  {
    v31 = this->m_pParticleStateData;
    v32 = v7;
    v33 = ((numStates - v7 - 2) >> 1) + 1;
    v34 = v33;
    v7 += 2 * v33;
    do
    {
      v4 += v31[v32].m_particleData.m_particleCountRunning;
      v30 += v31[v32 + 1].m_particleData.m_particleCountRunning;
      v32 += 2i64;
      --v34;
    }
    while ( v34 );
  }
  if ( v7 < numStates )
    v5 += this->m_pParticleStateData[v7].m_particleData.m_particleCountRunning;
  return v5 + v30 + v4;
}

/*
==============
ParticleEmitter::GetParticleCountSpawnedForAllStates
==============
*/
__int64 ParticleEmitter::GetParticleCountSpawnedForAllStates(ParticleEmitter *this)
{
  int v2; 
  int v3; 
  unsigned int v4; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v6; 
  unsigned int numStates; 
  unsigned int *p_m_particleCountRunning; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 

  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 949, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 950, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
    __debugbreak();
  if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 951, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  v4 = 0;
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  v6 = 0;
  numStates = EmitterDef->numStates;
  if ( numStates >= 2 )
  {
    p_m_particleCountRunning = &this->m_pParticleStateData->m_particleData.m_particleCountRunning;
    v9 = ((numStates - 2) >> 1) + 1;
    v10 = v9;
    v6 = 2 * v9;
    do
    {
      v11 = *p_m_particleCountRunning + p_m_particleCountRunning[1];
      p_m_particleCountRunning += 264;
      v2 += v11;
      v3 += *(p_m_particleCountRunning - 132) + *(p_m_particleCountRunning - 131);
      --v10;
    }
    while ( v10 );
  }
  if ( v6 < numStates )
    v4 = this->m_pParticleStateData[v6].m_particleData.m_particleCountRunning + this->m_pParticleStateData[v6].m_particleData.m_particleCountDelayed;
  return v4 + v3 + v2;
}

/*
==============
ParticleEmitter::GetParticleCountSpawnedForFirstState
==============
*/
__int64 ParticleEmitter::GetParticleCountSpawnedForFirstState(ParticleEmitter *this)
{
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 965, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 966, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
    __debugbreak();
  if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 967, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  return this->m_pParticleStateData->m_particleData.m_particleCountRunning + this->m_pParticleStateData->m_particleData.m_particleCountDelayed;
}

/*
==============
ParticleEmitter::GetParticleData
==============
*/
ParticleData *ParticleEmitter::GetParticleData(ParticleEmitter *this, unsigned int stateIndex)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v6; 
  int numStates; 

  v2 = stateIndex;
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 993, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 994, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
    __debugbreak();
  if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 995, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  if ( (unsigned int)v2 >= ParticleEmitter::GetEmitterDef(this)->numStates )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 996, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( GetNumStates() )", "stateIndex doesn't index GetNumStates()\n\t%i not in [0, %i)", v6, numStates) )
      __debugbreak();
  }
  v4 = v2;
  if ( !this->m_pParticleStateData[v4].m_particleState.m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 997, ASSERT_TYPE_ASSERT, "(m_pParticleStateData[stateIndex].m_particleState.IsRunning())", (const char *)&queryFormat, "m_pParticleStateData[stateIndex].m_particleState.IsRunning()") )
    __debugbreak();
  return &this->m_pParticleStateData[v4].m_particleData;
}

/*
==============
ParticleEmitter::GetParticleDataNonConst
==============
*/
ParticleData *ParticleEmitter::GetParticleDataNonConst(ParticleEmitter *this, unsigned int stateIndex)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v6; 
  int numStates; 

  v2 = stateIndex;
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 993, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 994, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
    __debugbreak();
  if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 995, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  if ( (unsigned int)v2 >= ParticleEmitter::GetEmitterDef(this)->numStates )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 996, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( GetNumStates() )", "stateIndex doesn't index GetNumStates()\n\t%i not in [0, %i)", v6, numStates) )
      __debugbreak();
  }
  v4 = v2;
  if ( !this->m_pParticleStateData[v4].m_particleState.m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 997, ASSERT_TYPE_ASSERT, "(m_pParticleStateData[stateIndex].m_particleState.IsRunning())", (const char *)&queryFormat, "m_pParticleStateData[stateIndex].m_particleState.IsRunning()") )
    __debugbreak();
  return &this->m_pParticleStateData[v4].m_particleData;
}

/*
==============
ParticleEmitter::GetParticleState
==============
*/
ParticleEmitter::ParticleStateData *ParticleEmitter::GetParticleState(ParticleEmitter *this, unsigned int stateIndex)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v6; 
  int numStates; 

  v2 = stateIndex;
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1011, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1012, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
    __debugbreak();
  if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1013, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  if ( (unsigned int)v2 >= ParticleEmitter::GetEmitterDef(this)->numStates )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1014, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( GetNumStates() )", "stateIndex doesn't index GetNumStates()\n\t%i not in [0, %i)", v6, numStates) )
      __debugbreak();
  }
  v4 = v2;
  if ( !this->m_pParticleStateData[v4].m_particleState.m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1015, ASSERT_TYPE_ASSERT, "(m_pParticleStateData[stateIndex].m_particleState.IsRunning())", (const char *)&queryFormat, "m_pParticleStateData[stateIndex].m_particleState.IsRunning()") )
    __debugbreak();
  return &this->m_pParticleStateData[v4];
}

/*
==============
ParticleEmitter::GetParticleStateNonConst
==============
*/
ParticleEmitter::ParticleStateData *ParticleEmitter::GetParticleStateNonConst(ParticleEmitter *this, unsigned int stateIndex)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v6; 
  int numStates; 

  v2 = stateIndex;
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1011, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1012, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
    __debugbreak();
  if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1013, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  if ( (unsigned int)v2 >= ParticleEmitter::GetEmitterDef(this)->numStates )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1014, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( GetNumStates() )", "stateIndex doesn't index GetNumStates()\n\t%i not in [0, %i)", v6, numStates) )
      __debugbreak();
  }
  v4 = v2;
  if ( !this->m_pParticleStateData[v4].m_particleState.m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1015, ASSERT_TYPE_ASSERT, "(m_pParticleStateData[stateIndex].m_particleState.IsRunning())", (const char *)&queryFormat, "m_pParticleStateData[stateIndex].m_particleState.IsRunning()") )
    __debugbreak();
  return &this->m_pParticleStateData[v4];
}

/*
==============
ParticleEmitter::GetScaleFactorByCameraDistance
==============
*/
float ParticleEmitter::GetScaleFactorByCameraDistance(ParticleEmitter *this, const ParticleModuleScaleByDistance *pModuleScaleByDistance, float cameraDistance, int randomSeed)
{
  __int64 v5; 
  float v6; 
  double CurveValue; 
  float v8; 
  double v9; 

  v5 = randomSeed;
  if ( !pModuleScaleByDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5258, ASSERT_TYPE_ASSERT, "(pModuleScaleByDistance)", (const char *)&queryFormat, "pModuleScaleByDistance") )
    __debugbreak();
  v6 = cameraDistance / pModuleScaleByDistance->m_maxDistance;
  I_fclamp(v6, 0.0, 1.0);
  CurveValue = Particle_GetCurveValue(pModuleScaleByDistance->m_curves, v6);
  v8 = *(float *)&CurveValue * pModuleScaleByDistance->m_curves[0].scale;
  if ( (pModuleScaleByDistance->m_flags & 0x10) == 0 )
    return *(float *)&CurveValue * pModuleScaleByDistance->m_curves[0].scale;
  v9 = Particle_GetCurveValue(&pModuleScaleByDistance->m_curves[1], v6);
  return (float)((float)(1.0 - fx_randomTable[v5 + 52]) * v8) + (float)((float)(*(float *)&v9 * pModuleScaleByDistance->m_curves[1].scale) * fx_randomTable[v5 + 52]);
}

/*
==============
ParticleEmitter::GetSpawnShapeModuleExt
==============
*/
ParticleModuleTypeDef *ParticleEmitter::GetSpawnShapeModuleExt(ParticleEmitter *this, unsigned int stateIndex)
{
  __int64 v2; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  const char *name; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  __int64 v8; 
  __int64 v10; 
  ParticleModuleGroupDef *moduleGroupDefs; 
  __int64 numModules; 
  ParticleModuleDef *moduleDefs; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  v2 = stateIndex;
  if ( stateIndex >= ParticleEmitter::GetEmitterDef(this)->numStates )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    Def = ParticleSystem::GetDef(SystemOwner);
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 171, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
      __debugbreak();
    if ( !Def->emitterDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 172, ASSERT_TYPE_ASSERT, "(pSystemDef->emitterDefs)", (const char *)&queryFormat, "pSystemDef->emitterDefs") )
      __debugbreak();
    if ( (unsigned int)this->m_emitterIndex >= Def->numEmitters )
    {
      LODWORD(v15) = this->m_emitterIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( m_emitterIndex ) < (unsigned)( pSystemDef->numEmitters )", "m_emitterIndex doesn't index pSystemDef->numEmitters\n\t%i not in [0, %i)", v15, Def->numEmitters) )
        __debugbreak();
    }
    if ( !&Def->emitterDefs[this->m_emitterIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 176, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
      __debugbreak();
    if ( !this->m_pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
      __debugbreak();
    name = ParticleSystem::GetDef((ParticleSystem *)this->m_pSystemOwner)->name;
    LODWORD(v16) = ParticleEmitter::GetEmitterDef(this)->numStates;
    LODWORD(v15) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1023, ASSERT_TYPE_ASSERT, "( stateIndex < GetNumStates() )", "%u < %u, %s:%s", v15, v16, name, (const char *)&queryFormat.fmt + 3) )
      __debugbreak();
  }
  m_pParticleStateData = this->m_pParticleStateData;
  v8 = v2;
  if ( m_pParticleStateData )
    return (ParticleModuleTypeDef *)m_pParticleStateData[v2].m_particleState.m_spawnShapeTypeModule.pModuleSpawnShape;
  v10 = 0i64;
  moduleGroupDefs = ParticleEmitter::GetEmitterDef(this)->stateDefs[v8].moduleGroupDefs;
  numModules = moduleGroupDefs->numModules;
  if ( (int)numModules > 0 )
  {
    moduleDefs = moduleGroupDefs->moduleDefs;
    v14 = 0i64;
    while ( (unsigned __int16)(moduleDefs->moduleType - 24) > 4u )
    {
      ++v14;
      ++moduleDefs;
      if ( v14 >= numModules )
        return 0i64;
    }
    return &moduleDefs->moduleData;
  }
  return (ParticleModuleTypeDef *)v10;
}

/*
==============
ParticleEmitter::InSpawnRange
==============
*/
bool ParticleEmitter::InSpawnRange(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount)
{
  const ParticleEmitterDef *EmitterDef; 
  float4 v7; 
  float v8; 
  float v9; 
  float min; 
  float v11; 
  float v12; 
  float spawnFrustumCullRadius; 
  __m128 v; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  __int16 gridIdx[8]; 
  float4 posWorld; 
  vec2_t position; 
  float v23; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2161, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  if ( !fx_cull_elem_spawn->current.enabled )
    return 1;
  v7.v = (__m128)ParticleEmitter::GetSystemOwner(this)->m_systemTransform.w;
  v8 = _mm_shuffle_ps(v7.v, v7.v, 85).m128_f32[0];
  v9 = _mm_shuffle_ps(v7.v, v7.v, 170).m128_f32[0];
  position.v[1] = v8;
  v23 = v9;
  position.v[0] = v7.v.m128_f32[0];
  min = EmitterDef->spawnRangeSq.min;
  if ( min != 0.0 || EmitterDef->spawnRangeSq.max != 0.0 )
  {
    v11 = (EmitterDef->flags & 0x2000000) != 0 ? FLOAT_1_0 : pCamera->invFovScale;
    v12 = (float)((float)((float)((float)(pCamera->origin.v[1] - v8) * (float)(pCamera->origin.v[1] - v8)) + (float)((float)(pCamera->origin.v[0] - v7.v.m128_f32[0]) * (float)(pCamera->origin.v[0] - v7.v.m128_f32[0]))) + (float)((float)(pCamera->origin.v[2] - v9) * (float)(pCamera->origin.v[2] - v9))) * v11;
    if ( v12 < min || v12 > EmitterDef->spawnRangeSq.max )
      return 0;
  }
  spawnFrustumCullRadius = EmitterDef->spawnFrustumCullRadius;
  if ( spawnFrustumCullRadius > 0.0 )
  {
    posWorld.v.m128_i32[3] = 0;
    v = posWorld.v;
    v.m128_f32[0] = v7.v.m128_f32[0];
    _XMM0 = v;
    __asm
    {
      vinsertps xmm0, xmm0, xmm8, 10h
      vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    }
    posWorld.v = _XMM0;
    if ( FX_CullSphere(pCamera, frustumPlaneCount, &posWorld, spawnFrustumCullRadius, 1) )
      return 0;
  }
  m_pParticleStateData = this->m_pParticleStateData;
  return !m_pParticleStateData || (m_pParticleStateData->m_particleState.m_pStateDef->flags & 0x200400) == 0 || WorldCollision_IsCollisionReadyAt((const Physics_WorldId)(3 * this->m_pSystemOwner->m_localClientNum + 3), &position, gridIdx);
}

/*
==============
ParticleEmitter::Init
==============
*/
char ParticleEmitter::Init(ParticleEmitter *this, const ParticleSystem *pSystemOwner, const ParticleEmitterDef *pEmitterDef, unsigned int emitterIndex)
{
  __int64 v4; 
  const ParticleSystem *m_pSystemOwner; 
  const ParticleSystemDef *m_pSystemDef; 
  ParticleModuleGroupDef *moduleGroupDefs; 
  const ParticleModuleInitSpawn *v10; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  __int64 m_randomSeed; 
  const ParticleEmitterDef *EmitterDef; 
  const ParticleEmitterDef *v16; 
  bool v17; 
  unsigned int v18; 
  bool v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  bool v23; 
  int v24; 
  int v25; 
  unsigned int v26; 
  __int64 v27; 

  v4 = emitterIndex;
  m_pSystemOwner = pSystemOwner;
  if ( !pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 109, ASSERT_TYPE_ASSERT, "(pSystemOwner)", (const char *)&queryFormat, "pSystemOwner") )
    __debugbreak();
  if ( !pEmitterDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 110, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
    __debugbreak();
  if ( this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 111, ASSERT_TYPE_ASSERT, "(!m_pParticleStateData)", (const char *)&queryFormat, "!m_pParticleStateData") )
    __debugbreak();
  if ( !m_pSystemOwner->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
    __debugbreak();
  m_pSystemDef = m_pSystemOwner->m_pSystemDef;
  if ( (unsigned int)v4 >= m_pSystemDef->numEmitters )
  {
    if ( !m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
      __debugbreak();
    LODWORD(v27) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( emitterIndex ) < (unsigned)( pSystemOwner->GetDef()->numEmitters )", "emitterIndex doesn't index pSystemOwner->GetDef()->numEmitters\n\t%i not in [0, %i)", v27, m_pSystemOwner->m_pSystemDef->numEmitters) )
      __debugbreak();
  }
  if ( (pEmitterDef->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 113, ASSERT_TYPE_ASSERT, "(!pEmitterDef->IsDisabled())", (const char *)&queryFormat, "!pEmitterDef->IsDisabled()") )
    __debugbreak();
  if ( (this->m_flags & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 114, ASSERT_TYPE_ASSERT, "(!HasFlag( PARTICLE_EMITTER_FLAG_DISABLED ))", (const char *)&queryFormat, "!HasFlag( PARTICLE_EMITTER_FLAG_DISABLED )") )
    __debugbreak();
  if ( ((unsigned __int8)pEmitterDef & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 115, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pEmitterDef)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pEmitterDef)) % (PARTICLE_ALIGNMENT) == 0") )
    __debugbreak();
  this->m_impactMarkHandle = -1;
  *(_QWORD *)&this->m_emitterLife = 0i64;
  *(_QWORD *)&this->m_lastSpawnTime = 0i64;
  this->m_particleRemainder = 0.0;
  *(_QWORD *)&this->m_alphaThreshold = 0i64;
  *(_QWORD *)&this->m_scriptedChannels = 0i64;
  this->m_scriptedInputChannelData.color.v.m128_u64[0] = 0i64;
  this->m_scriptedInputChannelData.color.v.m128_u64[1] = 0i64;
  this->m_scriptedInputChannelData.size.v.m128_u64[0] = 0i64;
  this->m_scriptedInputChannelData.size.v.m128_u64[1] = 0i64;
  *(_QWORD *)&this->m_scriptedInputChannelData.colorOperation = 0i64;
  *(_QWORD *)this->m_scriptedInputChannelData.pad = 0i64;
  this->m_lifetimeParticleCount = 0;
  this->m_instancePoolProcessed = 0;
  this->m_pSystemOwner = m_pSystemOwner;
  if ( (unsigned int)v4 > 0xFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v4, "unsigned", v4) )
      __debugbreak();
    m_pSystemOwner = this->m_pSystemOwner;
  }
  this->m_emitterIndex = v4;
  this->m_randomSeed = (pEmitterDef->randomSeed + m_pSystemOwner->m_spawnTime + (unsigned int)m_pSystemOwner->m_randomSeed) % 0x3FE9;
  if ( pEmitterDef->numStates <= 0 )
  {
    this->m_pModuleEmissionGraph = NULL;
    v10 = NULL;
  }
  else
  {
    moduleGroupDefs = pEmitterDef->stateDefs->moduleGroupDefs;
    this->m_pModuleEmissionGraph = ParticleModule::FindModule<ParticleModuleEmissionGraph>(moduleGroupDefs, PARTICLE_MODULE_EMISSION_GRAPH, 0xFFFFFFFF);
    v10 = ParticleModule::FindModule<ParticleModuleInitSpawn>(moduleGroupDefs, PARTICLE_MODULE_INIT_SPAWN, 0xFFFFFFFF);
  }
  this->m_pModuleInitSpawn = v10;
  if ( ParticleEmitter::CalculateParticleCountMax(this) )
  {
    m_randomSeed = this->m_randomSeed;
    this->m_instancePoolProcessed = 0;
    this->m_emitterLifeMax = (float)((float)(1.0 - fx_randomTable[m_randomSeed + 18]) * pEmitterDef->emitterLife.min) + (float)(fx_randomTable[m_randomSeed + 18] * pEmitterDef->emitterLife.max);
    this->m_spawnRate = (float)((float)(1.0 - fx_randomTable[m_randomSeed + 20]) * pEmitterDef->particleSpawnRate.min) + (float)(fx_randomTable[m_randomSeed + 20] * pEmitterDef->particleSpawnRate.max);
    this->m_emitByDistanceDensity = (float)((float)(1.0 - fx_randomTable[m_randomSeed + 21]) * pEmitterDef->emitByDistanceDensity.min) + (float)(fx_randomTable[m_randomSeed + 21] * pEmitterDef->emitByDistanceDensity.max);
    this->m_burstCount = ParticleEmitter::GetBurstCount(this);
    this->m_gameScrubbedCurve = 0.0;
    EmitterDef = ParticleEmitter::GetEmitterDef(this);
    v16 = EmitterDef;
    v17 = EmitterDef->emitterLife.min == 0.0 && EmitterDef->emitterLife.max == 0.0;
    v18 = this->m_flags | 8;
    if ( !v17 )
      v18 = this->m_flags & 0xFFFFFFF7;
    this->m_flags = v18;
    v19 = EmitterDef->emitterDelay.min == 0.0 && EmitterDef->emitterDelay.max == 0.0;
    v20 = v18;
    v21 = v18 | 4;
    v22 = v20 & 0xFFFFFFFB;
    if ( v19 )
      v21 = v22;
    this->m_flags = v21;
    v23 = v16->particleDelay.min == 0.0 && v16->particleDelay.max == 0.0;
    v24 = v21;
    v25 = v21 | 0x10;
    v26 = v24 & 0xFFFFFFEF;
    if ( v23 )
      v25 = v26;
    this->m_flags = v25 | 0x40;
    this->m_lastSpawnPos = ParticleEmitter::GetSystemOwner(this)->m_systemTransform.w;
    this->m_isRunning = 1;
    return 1;
  }
  else
  {
    this->m_isRunning = 0;
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    Def = ParticleSystem::GetDef(SystemOwner);
    Com_PrintError(21, "The effect %s has an emitter where the particle count is zero. Please fix the particle life and spawn rates or the Birth Graph.\n", Def->name);
    return 0;
  }
}

/*
==============
ParticleEmitter::ParticleStateData::Init
==============
*/
bool ParticleEmitter::ParticleStateData::Init(ParticleEmitter::ParticleStateData *this, const ParticleStateDef *pStateDef, const unsigned int stateIndex, const ParticleEmitter *pEmitter)
{
  unsigned int particleCountMax; 
  const ParticleEmitterDef *EmitterDef; 
  ParticleDataFlags m_dataFlags; 
  ParticleData *p_m_particleData; 
  bool result; 
  bool v13; 

  if ( !pEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4463, ASSERT_TYPE_ASSERT, "(pEmitter)", (const char *)&queryFormat, "pEmitter", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)pStateDef & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4464, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pStateDef)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pStateDef)) % (PARTICLE_ALIGNMENT) == 0") )
    __debugbreak();
  particleCountMax = pEmitter->m_particleCountMax;
  EmitterDef = ParticleEmitter::GetEmitterDef((ParticleEmitter *)pEmitter);
  if ( EmitterDef->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particledb.h", 2954, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
    __debugbreak();
  m_dataFlags = EmitterDef->m_dataFlags;
  p_m_particleData = &this->m_particleData;
  result = ParticleData::Init(&this->m_particleData, pEmitter->m_pSystemOwner->m_localClientNum, particleCountMax, pEmitter, m_dataFlags);
  if ( result )
  {
    v13 = ParticleState::Init(&this->m_particleState, pEmitter, pStateDef, stateIndex, &this->m_particleData, particleCountMax);
    if ( !v13 )
    {
      *(_QWORD *)&this->m_particleData.m_particleCountRunning = 0i64;
      Particle_ReleaseBlock((LocalClientNum_t)this->m_particleData.m_localClientNum, p_m_particleData->m_pParticleData);
      p_m_particleData->m_pParticleData = NULL;
      *(_QWORD *)&this->m_particleData.m_particleCountRunning = 0i64;
      this->m_particleData.m_particleCountMax = 0;
      this->m_particleData.m_pEmitter = NULL;
      this->m_particleData.m_pEmitterPadding = NULL;
      this->m_particleData.m_particleSize = 0;
      this->m_particleData.m_dataFlags = USE_NONE;
      ParticleData::DestroyParticleOffsetTable(&this->m_particleData);
    }
    return v13;
  }
  return result;
}

/*
==============
ParticleEmitter::InitBoltedSpawnPos
==============
*/
void ParticleEmitter::InitBoltedSpawnPos(ParticleEmitter *this)
{
  this->m_lastSpawnPos = ParticleEmitter::GetSystemOwner(this)->m_systemTransform.w;
}

/*
==============
ParticleEmitter::InitParentVelocityArray
==============
*/
void ParticleEmitter::InitParentVelocityArray(ParticleEmitter *this, LocalClientNum_t localClientNum, const ParticleState *pParticleState, bool isBolted, const ParticleSystem::ParticleBolt *bolt, unsigned int numParticles, float4 *parentVelocityArray)
{
  float4 *v10; 
  const ParticleSystem *SystemOwner; 
  __int64 v12; 
  __int64 v13; 

  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4595, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  v10 = parentVelocityArray;
  if ( !parentVelocityArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4596, ASSERT_TYPE_ASSERT, "(parentVelocityArray)", (const char *)&queryFormat, "parentVelocityArray") )
    __debugbreak();
  if ( (pParticleState->m_pStateDef->flags & 0x2000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4597, ASSERT_TYPE_ASSERT, "(pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_INHERIT_PARENT_VELOCITY ))", (const char *)&queryFormat, "pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_INHERIT_PARENT_VELOCITY )") )
    __debugbreak();
  if ( isBolted )
  {
    v13 = numParticles;
    if ( numParticles )
    {
      do
      {
        ++v10;
        v10[-1] = bolt->velocity;
        --v13;
      }
      while ( v13 );
    }
  }
  else
  {
    SystemOwner = ParticleEmitter::GetSystemOwner(this);
    if ( (SystemOwner->m_flags & 0x1000) != 0 )
    {
      v12 = numParticles;
      if ( numParticles )
      {
        do
        {
          ++v10;
          v10[-1] = SystemOwner->m_parentVelocity;
          --v12;
        }
        while ( v12 );
      }
    }
  }
}

/*
==============
ParticleEmitter::InitParticleData
==============
*/
char ParticleEmitter::InitParticleData(ParticleEmitter *this)
{
  const ParticleEmitterDef *EmitterDef; 
  __int64 numStates; 
  ParticleEmitter::ParticleStateData *v4; 
  __int64 v6; 
  __int64 v7; 
  ParticleEmitter::ParticleStateData *v8; 
  const ParticleStateDef *v9; 
  unsigned int particleCountMax; 
  const ParticleEmitterDef *v11; 
  ParticleDataFlags m_dataFlags; 
  unsigned __int8 **p_m_pParticleData; 
  __int64 v14; 
  LocalClientNum_t localClientNum; 
  const ParticleEmitterDef *v16; 

  if ( this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5276, ASSERT_TYPE_ASSERT, "(!m_pParticleStateData)", (const char *)&queryFormat, "!m_pParticleStateData", -2i64) )
    __debugbreak();
  if ( (this->m_flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5277, ASSERT_TYPE_ASSERT, "(!HasParticleData())", (const char *)&queryFormat, "!HasParticleData()") )
    __debugbreak();
  if ( (this->m_flags & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5278, ASSERT_TYPE_ASSERT, "(!IsStopped() && !IsDead())", (const char *)&queryFormat, "!IsStopped() && !IsDead()") )
    __debugbreak();
  if ( (this->m_flags & 0x80) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5279, ASSERT_TYPE_ASSERT, "(!HasFlag( PARTICLE_EMITTER_FLAG_GARBAGE_COLLECT_PENDING ))", (const char *)&queryFormat, "!HasFlag( PARTICLE_EMITTER_FLAG_GARBAGE_COLLECT_PENDING )") )
    __debugbreak();
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  v16 = EmitterDef;
  numStates = (unsigned int)ParticleEmitter::GetEmitterDef(this)->numStates;
  localClientNum = this->m_pSystemOwner->m_localClientNum;
  v4 = (ParticleEmitter::ParticleStateData *)ParticleManager::ParticleSystemAllocAndClear(localClientNum, 528 * numStates);
  this->m_pParticleStateData = v4;
  if ( v4 )
  {
    v6 = 0i64;
    if ( (_DWORD)numStates )
    {
      v7 = 0i64;
      while ( 1 )
      {
        v8 = &this->m_pParticleStateData[v7];
        v9 = &EmitterDef->stateDefs[(unsigned int)v6];
        if ( ((unsigned __int8)v9 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4464, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pStateDef)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pStateDef)) % (PARTICLE_ALIGNMENT) == 0") )
          __debugbreak();
        particleCountMax = this->m_particleCountMax;
        v11 = ParticleEmitter::GetEmitterDef(this);
        if ( v11->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particledb.h", 2954, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
          __debugbreak();
        m_dataFlags = v11->m_dataFlags;
        p_m_pParticleData = &v8->m_particleData.m_pParticleData;
        if ( !ParticleData::Init(&v8->m_particleData, this->m_pSystemOwner->m_localClientNum, particleCountMax, this, m_dataFlags) )
          break;
        if ( !ParticleState::Init(&v8->m_particleState, this, v9, v6, &v8->m_particleData, particleCountMax) )
        {
          *(_QWORD *)&v8->m_particleData.m_particleCountRunning = 0i64;
          Particle_ReleaseBlock((LocalClientNum_t)v8->m_particleData.m_localClientNum, *p_m_pParticleData);
          *p_m_pParticleData = NULL;
          *(_QWORD *)&v8->m_particleData.m_particleCountRunning = 0i64;
          v8->m_particleData.m_particleCountMax = 0;
          v8->m_particleData.m_pEmitter = NULL;
          v8->m_particleData.m_pEmitterPadding = NULL;
          v8->m_particleData.m_particleSize = 0;
          v8->m_particleData.m_dataFlags = USE_NONE;
          ParticleData::DestroyParticleOffsetTable(&v8->m_particleData);
          break;
        }
        v6 = (unsigned int)(v6 + 1);
        ++v7;
        if ( (unsigned int)v6 >= (unsigned int)numStates )
          goto LABEL_32;
        EmitterDef = v16;
      }
      if ( (_DWORD)v6 )
      {
        v14 = 0i64;
        do
        {
          ParticleEmitter::ParticleStateData::Release(&this->m_pParticleStateData[v14++], this);
          --v6;
        }
        while ( v6 );
      }
      ParticleManager::ParticleSystemFree(localClientNum, this->m_pParticleStateData);
      this->m_pParticleStateData = NULL;
      this->m_isRunning = 0;
      return 0;
    }
    else
    {
LABEL_32:
      this->m_isRunning = 1;
      this->m_flags &= ~0x40u;
      return 1;
    }
  }
  else
  {
    Com_PrintError(21, "Could not allocate %d Particle States. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", (unsigned int)numStates);
    this->m_isRunning = 0;
    return 0;
  }
}

/*
==============
ParticleEmitter::Kill
==============
*/
void ParticleEmitter::Kill(ParticleEmitter *this)
{
  const ParticleEmitterDef *EmitterDef; 
  unsigned int m_emitterIndex; 
  unsigned int flags; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  unsigned int v7; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  ParticleSystem *v9; 
  const ParticleSystemDef *v10; 
  unsigned int numStates; 
  __int64 v12; 
  __int64 v13; 
  ParticleEmitter::ParticleStateData *v14; 
  const ParticleSystem *v15; 
  ParticleSystem *v16; 
  const ParticleSystemDef *v17; 

  if ( (this->m_flags & 1) != 0 )
  {
    EmitterDef = ParticleEmitter::GetEmitterDef(this);
    m_emitterIndex = this->m_emitterIndex;
    flags = EmitterDef->flags;
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    Def = ParticleSystem::GetDef(SystemOwner);
    Com_Printf(21, "ParticleEmitter double kill. '%s', emitter %u, flags 0x%x\n", Def->name, m_emitterIndex, flags);
  }
  else
  {
    v7 = this->m_flags | 1;
    this->m_flags = v7;
    m_pParticleStateData = this->m_pParticleStateData;
    if ( (v7 & 0x40) != 0 )
    {
      if ( m_pParticleStateData )
      {
        v16 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
        v17 = ParticleSystem::GetDef(v16);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1111, ASSERT_TYPE_ASSERT, "(!m_pParticleStateData)", "%s\n\tVFX ERROR: Particle data stil exists even though the flag is set to false for: %s", "!m_pParticleStateData", v17->name) )
          __debugbreak();
      }
    }
    else
    {
      if ( !m_pParticleStateData )
      {
        v9 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
        v10 = ParticleSystem::GetDef(v9);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1091, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", "%s\n\tVFX ERROR: Particle data does not exist even though the flag is set to true for: %s", "m_pParticleStateData", v10->name) )
          __debugbreak();
      }
      numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
      if ( numStates )
      {
        v12 = 0i64;
        v13 = numStates;
        do
        {
          v14 = &this->m_pParticleStateData[v12];
          if ( (v14->m_particleState.m_pStateDef->flags & 0x400) != 0 )
          {
            if ( v14->m_particleState.m_pModulePhysicsLight )
              ParticleState::KillPhysicsPipelineInstanceDeferred(&v14->m_particleState);
          }
          ++v12;
          --v13;
        }
        while ( v13 );
      }
      this->m_flags |= 0x80u;
      v15 = ParticleEmitter::GetSystemOwner(this);
      v15->m_flags |= 0x2000000ui64;
    }
  }
}

/*
==============
ParticleEmitter::KillAllParticles
==============
*/
void ParticleEmitter::KillAllParticles(ParticleEmitter *this)
{
  unsigned int numStates; 
  __int64 v3; 
  __int64 v4; 
  ParticleEmitter::ParticleStateData *v5; 

  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1968, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
  if ( numStates )
  {
    v3 = numStates;
    v4 = 0i64;
    do
    {
      v5 = &this->m_pParticleStateData[v4];
      ParticleState::KillAllParticles(&v5->m_particleState, &v5->m_particleData, this);
      ++v4;
      *(_QWORD *)&v5->m_particleData.m_particleCountRunning = 0i64;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
ParticleEmitter::ParticleStateData::KillAllParticles
==============
*/
void ParticleEmitter::ParticleStateData::KillAllParticles(ParticleEmitter::ParticleStateData *this, const ParticleEmitter *pEmitterOwner)
{
  ParticleState::KillAllParticles(&this->m_particleState, &this->m_particleData, pEmitterOwner);
  *(_QWORD *)&this->m_particleData.m_particleCountRunning = 0i64;
}

/*
==============
ParticleEmitter::ParticleStateData::KillParticle
==============
*/
void ParticleEmitter::ParticleStateData::KillParticle(ParticleEmitter::ParticleStateData *this, const unsigned int particleIndex, const ParticleEmitter *pEmitterOwner, bool fromStateSwitch)
{
  const ParticleStateDef *m_pStateDef; 
  unsigned int elementType; 

  m_pStateDef = this->m_particleState.m_pStateDef;
  if ( (m_pStateDef->flags & 0x400) != 0 )
  {
    ParticleState::KillPhysicsParticles(&this->m_particleState, &this->m_particleData, particleIndex, 1u, pEmitterOwner, 0);
    m_pStateDef = this->m_particleState.m_pStateDef;
  }
  elementType = m_pStateDef->elementType;
  switch ( elementType )
  {
    case 4u:
      ParticleState::KillGeoTrailParticles(&this->m_particleState, &this->m_particleData, particleIndex, 1u, pEmitterOwner, 0);
      break;
    case 9u:
      ParticleState::KillRunnerParticles(&this->m_particleState, &this->m_particleData, particleIndex, 1u, pEmitterOwner, 0, fromStateSwitch);
      break;
    case 0xBu:
      ParticleState::KillVectorFieldParticles(&this->m_particleState, &this->m_particleData, particleIndex, 1u, pEmitterOwner, 0);
      break;
  }
  if ( (this->m_particleState.m_pStateDef->flags & 0x8000000) != 0 )
    ParticleState::KillSoundParticles(&this->m_particleState, &this->m_particleData, particleIndex, 1u, pEmitterOwner, 0);
}

/*
==============
ParticleEmitter::KillParticles
==============
*/
void ParticleEmitter::KillParticles(ParticleEmitter *this, bool preserveOrder)
{
  bool v2; 
  unsigned int v4; 
  __int64 v5; 
  ParticleEmitter::ParticleStateData *v6; 
  ParticleData *p_m_particleData; 
  const unsigned int *flagsArray; 
  unsigned __int8 *ParticleDataArray; 
  signed int m_particleCountRunning; 
  const unsigned int *stateArray; 
  unsigned int v12; 
  signed int i; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  signed int v18; 
  int numStates; 
  unsigned int removedParticlesCount; 
  __int64 v22; 

  v2 = preserveOrder;
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1930, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  v4 = 0;
  numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
  if ( numStates )
  {
    v5 = 0i64;
    v22 = 0i64;
    do
    {
      v6 = (ParticleEmitter::ParticleStateData *)((char *)this->m_pParticleStateData + v5);
      p_m_particleData = &v6->m_particleData;
      if ( v6 == (ParticleEmitter::ParticleStateData *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 354, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
        __debugbreak();
      if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 354, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      flagsArray = (const unsigned int *)ParticleData::GetParticleDataArray(&v6->m_particleData, PARTICLE_DATA_FLAGS);
      if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 350, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      ParticleDataArray = ParticleData::GetParticleDataArray(&v6->m_particleData, PARTICLE_DATA_STATE);
      m_particleCountRunning = v6->m_particleData.m_particleCountRunning;
      stateArray = (const unsigned int *)ParticleDataArray;
      removedParticlesCount = 0;
      if ( v2 )
      {
        v12 = 0;
        for ( i = 0; i < m_particleCountRunning; ++i )
        {
          if ( !ParticleEmitter::KillParticles_Loop_ProcParticle(this, i, v4, numStates, v6, flagsArray, stateArray, &removedParticlesCount) )
          {
            if ( v12 != i )
              ParticleEmitter::CopyParticle(this, v4, i, v12);
            ++v12;
          }
        }
      }
      else
      {
        v17 = m_particleCountRunning - 1;
        v18 = m_particleCountRunning - 1;
        if ( m_particleCountRunning - 1 >= 0 )
        {
          v14 = numStates;
          do
          {
            if ( ParticleEmitter::KillParticles_Loop_ProcParticle(this, v18, v4, numStates, v6, flagsArray, stateArray, &removedParticlesCount) )
            {
              if ( v18 != v17 )
                ParticleEmitter::CopyParticle(this, v4, v17, v18);
              --v17;
            }
            --v18;
          }
          while ( v18 >= 0 );
          goto LABEL_23;
        }
      }
      v14 = numStates;
LABEL_23:
      v15 = removedParticlesCount;
      if ( removedParticlesCount > v6->m_particleData.m_particleCountRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 208, ASSERT_TYPE_ASSERT, "(particleCount <= GetParticleCountRunning())", (const char *)&queryFormat, "particleCount <= GetParticleCountRunning()") )
        __debugbreak();
      v16 = v22;
      v6->m_particleData.m_particleCountRunning -= v15;
      v2 = preserveOrder;
      v5 = v16 + 528;
      ++v4;
      v22 = v5;
    }
    while ( v4 < v14 );
  }
}

/*
==============
ParticleEmitter::KillParticles_LoopFast
==============
*/
void ParticleEmitter::KillParticles_LoopFast(ParticleEmitter *this, unsigned int stateIndex, unsigned int numStates, int particleCount, ParticleEmitter::ParticleStateData *rParticleStateData, const unsigned int *flagsArray, const unsigned int *stateArray, unsigned int *removedParticlesCount)
{
  unsigned int v8; 
  unsigned int v9; 
  signed int i; 

  v8 = particleCount - 1;
  v9 = numStates;
  for ( i = particleCount - 1; i >= 0; v9 = numStates )
  {
    if ( ParticleEmitter::KillParticles_Loop_ProcParticle(this, i, stateIndex, v9, rParticleStateData, flagsArray, stateArray, removedParticlesCount) )
    {
      if ( i != v8 )
        ParticleEmitter::CopyParticle(this, stateIndex, v8, i);
      --v8;
    }
    --i;
  }
}

/*
==============
ParticleEmitter::KillParticles_LoopPreserveOrder
==============
*/
void ParticleEmitter::KillParticles_LoopPreserveOrder(ParticleEmitter *this, unsigned int stateIndex, unsigned int numStates, int particleCount, ParticleEmitter::ParticleStateData *rParticleStateData, const unsigned int *flagsArray, const unsigned int *stateArray, unsigned int *removedParticlesCount)
{
  unsigned int v8; 
  int i; 
  unsigned int v13; 

  if ( particleCount > 0 )
  {
    v13 = numStates;
    v8 = 0;
    for ( i = 0; i < particleCount; ++i )
    {
      if ( !ParticleEmitter::KillParticles_Loop_ProcParticle(this, i, stateIndex, numStates, rParticleStateData, flagsArray, stateArray, removedParticlesCount) )
      {
        if ( v8 != i )
          ParticleEmitter::CopyParticle(this, stateIndex, i, v8);
        ++v8;
      }
      numStates = v13;
    }
  }
}

/*
==============
ParticleEmitter::KillParticles_Loop_ProcParticle
==============
*/
char ParticleEmitter::KillParticles_Loop_ProcParticle(ParticleEmitter *this, unsigned int particleIndex, unsigned int stateIndex, unsigned int numStates, ParticleEmitter::ParticleStateData *rParticleStateData, const unsigned int *flagsArray, const unsigned int *stateArray, unsigned int *removedParticlesCount)
{
  __int64 v11; 
  ParticleEmitter::ParticleStateData *v12; 

  if ( (flagsArray[particleIndex] & 1) != 0 || (v11 = stateArray[particleIndex], (unsigned int)v11 >= numStates) )
  {
    ParticleEmitter::ParticleStateData::KillParticle(rParticleStateData, particleIndex, this, 0);
    ++*removedParticlesCount;
    return 1;
  }
  else if ( (_DWORD)v11 == stateIndex )
  {
    return 0;
  }
  else
  {
    v12 = &this->m_pParticleStateData[v11];
    ParticleEmitter::CopyParticleToAnotherState(this, stateIndex, particleIndex, v11, v12->m_particleData.m_particleCountRunning);
    if ( v12->m_particleData.m_particleCountRunning + 1 > v12->m_particleData.m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 202, ASSERT_TYPE_ASSERT, "(GetParticleCountRunning() + particleCount <= m_particleCountMax)", (const char *)&queryFormat, "GetParticleCountRunning() + particleCount <= m_particleCountMax") )
      __debugbreak();
    ++v12->m_particleData.m_particleCountRunning;
    ParticleEmitter::ParticleStateData::KillParticle(rParticleStateData, particleIndex, this, 1);
    ++*removedParticlesCount;
    return 1;
  }
}

/*
==============
ParticleEmitter::ProcessInstancePool
==============
*/
void ParticleEmitter::ProcessInstancePool(ParticleEmitter *this, const FxCamera *pCamera, InstancePoolData *instancePoolTable, ntl::fixed_map<ParticleEmitterDef const *,InstancePoolData,128,ntl::less<ParticleEmitterDef const *,ParticleEmitterDef const *> > *soloInstancePoolMap, const unsigned int *instancePoolLimits)
{
  const ParticleEmitterDef *EmitterDef; 
  unsigned int soloInstanceMax; 
  __int64 instancePool; 
  unsigned int v12; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  bool v15; 
  bool v16; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_iterator<ParticleEmitterDef const *,ntl::red_black_tree_node<ntl::pair<ParticleEmitterDef const *,InstancePoolData> >,ntl::pair<ParticleEmitterDef const *,InstancePoolData> *,ntl::pair<ParticleEmitterDef const *,InstancePoolData> &> *inserted; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v20; 
  InstancePoolData *p_mp_parent; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  unsigned int currentInstances; 
  const ParticleSystem *v25; 
  unsigned int frustumPlaneCount; 
  __m128 v; 
  __int128 v29; 
  const ParticleSystem *v32; 
  int m_spawnTime; 
  ntl::pair<ParticleEmitterDef const *,InstancePoolData> r_element; 
  ntl::red_black_tree_iterator<ParticleEmitterDef const *,ntl::red_black_tree_node<ntl::pair<ParticleEmitterDef const *,InstancePoolData> >,ntl::pair<ParticleEmitterDef const *,InstancePoolData> *,ntl::pair<ParticleEmitterDef const *,InstancePoolData> &> result[2]; 

  if ( (ParticleEmitter::GetEmitterDef(this)->flags & 0x100000) == 0 )
    return;
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  soloInstanceMax = EmitterDef->soloInstanceMax;
  instancePool = EmitterDef->instancePool;
  if ( soloInstanceMax )
    v12 = EmitterDef->soloInstanceMax;
  else
    v12 = instancePoolLimits[instancePool];
  if ( soloInstanceMax )
  {
    mp_parent = soloInstancePoolMap->m_endNodeBase.mp_parent;
    p_m_endNodeBase = &soloInstancePoolMap->m_endNodeBase;
    v15 = soloInstancePoolMap->m_size < 0x80;
    LODWORD(result[1].mp_node) = 0;
    result[0].mp_node = NULL;
    BYTE4(result[1].mp_node) = 0;
    if ( !v15 )
    {
      mp_left = &soloInstancePoolMap->m_endNodeBase;
      while ( mp_parent )
      {
        if ( *(_QWORD *)&mp_parent[1].m_color < (unsigned __int64)EmitterDef )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          mp_left = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      if ( mp_left == &soloInstancePoolMap->m_endNodeBase )
        goto LABEL_46;
      if ( (unsigned __int64)EmitterDef < *(_QWORD *)&mp_left[1].m_color )
        mp_left = &soloInstancePoolMap->m_endNodeBase;
      if ( mp_left == &soloInstancePoolMap->m_endNodeBase )
      {
LABEL_46:
        SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
        Def = ParticleSystem::GetDef(SystemOwner);
        Com_PrintWarning(21, "Too many solo instance pools, need to bump MAX_SOLO_INSTANCE_POOLS. Turning max off for %s \n", Def->name);
        return;
      }
      goto LABEL_33;
    }
    r_element.first = EmitterDef;
    v16 = 1;
    r_element.second = *(InstancePoolData *)&result[0].mp_node;
    while ( mp_parent )
    {
      p_m_endNodeBase = mp_parent;
      v16 = (unsigned __int64)EmitterDef < *(_QWORD *)&mp_parent[1].m_color;
      if ( (unsigned __int64)EmitterDef >= *(_QWORD *)&mp_parent[1].m_color )
        mp_parent = mp_parent->mp_right;
      else
        mp_parent = mp_parent->mp_left;
    }
    mp_left = p_m_endNodeBase;
    if ( v16 )
    {
      if ( p_m_endNodeBase == soloInstancePoolMap->m_endNodeBase.mp_left )
      {
        inserted = ntl::red_black_tree<ParticleEmitterDef const *,ntl::pair<ParticleEmitterDef const *,InstancePoolData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleEmitterDef const *,InstancePoolData>>,128,8>,ntl::return_pair_first<ParticleEmitterDef const *,InstancePoolData>,ntl::less<ParticleEmitterDef const *,ParticleEmitterDef const *>>::insert_node(soloInstancePoolMap, result, p_m_endNodeBase, &r_element, 1, 0);
        goto LABEL_32;
      }
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node", r_element.first, r_element.second.oldest, *(_QWORD *)&r_element.second.currentInstances) )
        __debugbreak();
      if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
      {
        mp_left = p_m_endNodeBase->mp_left;
        if ( mp_left )
        {
          for ( i = mp_left->mp_right; i; i = i->mp_right )
            mp_left = i;
        }
        else
        {
          mp_left = p_m_endNodeBase->mp_parent;
          if ( p_m_endNodeBase == mp_left->mp_left )
          {
            do
            {
              v20 = mp_left;
              mp_left = mp_left->mp_parent;
            }
            while ( v20 == mp_left->mp_left );
          }
        }
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_right;
      }
    }
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( *(_QWORD *)&mp_left[1].m_color >= (unsigned __int64)EmitterDef )
      goto LABEL_33;
    inserted = ntl::red_black_tree<ParticleEmitterDef const *,ntl::pair<ParticleEmitterDef const *,InstancePoolData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleEmitterDef const *,InstancePoolData>>,128,8>,ntl::return_pair_first<ParticleEmitterDef const *,InstancePoolData>,ntl::less<ParticleEmitterDef const *,ParticleEmitterDef const *>>::insert_node(soloInstancePoolMap, result, p_m_endNodeBase, &r_element, 0, 0);
LABEL_32:
    mp_left = inserted->mp_node;
LABEL_33:
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    p_mp_parent = (InstancePoolData *)&mp_left[1].mp_parent;
    goto LABEL_48;
  }
  p_mp_parent = &instancePoolTable[instancePool];
LABEL_48:
  currentInstances = p_mp_parent->currentInstances;
  if ( currentInstances >= v12 )
  {
    if ( !this->m_instancePoolProcessed )
    {
      if ( EmitterDef->instanceAction != PARTICLE_INSTANCE_POOL_ACTION_KILL_OLDEST_AND_SPAWN || currentInstances != v12 )
        goto LABEL_58;
      if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2218, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
        __debugbreak();
      v25 = ParticleEmitter::GetSystemOwner(this);
      frustumPlaneCount = pCamera->frustumPlaneCount;
      v = v25->m_systemTransform.w.v;
      _mm_shuffle_ps(v, v, 170);
      HIDWORD(result[1].mp_node) = 0;
      v29 = *(_OWORD *)&result[0].mp_node;
      *(float *)&v29 = v.m128_f32[0];
      _XMM0 = v29;
      _mm_shuffle_ps(v, v, 85);
      __asm
      {
        vinsertps xmm0, xmm0, xmm2, 10h
        vinsertps xmm0, xmm0, xmm3, 20h ; ' '
      }
      *(_OWORD *)&result[0].mp_node = _XMM0;
      if ( !FX_CullSphere(pCamera, frustumPlaneCount, (const float4 *)result, 0.0, 1) )
      {
        ++p_mp_parent->currentInstances;
        p_mp_parent->killOldest = 1;
        this->m_instancePoolProcessed = 1;
      }
      else
      {
LABEL_58:
        ParticleEmitter::Kill(this);
      }
    }
  }
  else
  {
    p_mp_parent->currentInstances = currentInstances + 1;
    this->m_instancePoolProcessed = 1;
  }
  if ( (this->m_flags & 1) == 0 )
  {
    v32 = ParticleEmitter::GetSystemOwner(this);
    if ( !p_mp_parent->oldest || (m_spawnTime = v32->m_spawnTime, m_spawnTime < ParticleEmitter::GetSystemOwner(p_mp_parent->oldest)->m_spawnTime) )
      p_mp_parent->oldest = this;
  }
}

/*
==============
ParticleEmitter::ParticleStateData::ProcessUpdateModules
==============
*/
void ParticleEmitter::ParticleStateData::ProcessUpdateModules(ParticleEmitter::ParticleStateData *this, const float dt, const int currentTime, const ParticleEmitter *pEmitterOwner, const FxCamera *pCamera)
{
  const ParticleStateDef *m_pStateDef; 
  __int64 numModules; 
  ParticleState::ModuleData *v10; 
  unsigned int m_particleCountRunning; 

  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4504, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4505, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( this->m_particleState.m_isRunning && this->m_particleData.m_particleCountRunning )
  {
    if ( (this->m_particleState.m_pStateDef->flags & 1) != 0 )
    {
      ParticleState::KillAllParticles(&this->m_particleState, &this->m_particleData, pEmitterOwner);
      *(_QWORD *)&this->m_particleData.m_particleCountRunning = 0i64;
    }
    else
    {
      if ( this == (ParticleEmitter::ParticleStateData *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 193, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
        __debugbreak();
      if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 194, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
        __debugbreak();
      if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 195, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
        __debugbreak();
      m_pStateDef = this->m_particleState.m_pStateDef;
      if ( m_pStateDef->elementType != 4 && !m_pStateDef->moduleGroupDefs[1].disabled )
      {
        numModules = m_pStateDef->moduleGroupDefs[1].numModules;
        v10 = this->m_particleState.m_pModuleDataList[1];
        m_particleCountRunning = this->m_particleData.m_particleCountRunning;
        if ( numModules > 0 )
        {
          do
          {
            if ( (v10->pModule->m_flags & 0x201) == 0 )
              ((void (__fastcall *)(const ParticleModule *, ParticleData *, _QWORD, _QWORD, _DWORD, const ParticleEmitter *, ParticleEmitter::ParticleStateData *))v10->pUpdateData->updateFunc)(v10->pModule, &this->m_particleData, 0i64, m_particleCountRunning, LODWORD(dt), pEmitterOwner, this);
            ++v10;
            --numModules;
          }
          while ( numModules );
        }
      }
      ParticleState::UpdateScriptedInputData(&this->m_particleState, &this->m_particleData, dt, pEmitterOwner);
      ParticleState::UpdateInternal(&this->m_particleState, &this->m_particleData, dt, currentTime, pEmitterOwner, pCamera);
    }
  }
}

/*
==============
ParticleEmitter::PropagateToDetailWorld
==============
*/
void ParticleEmitter::PropagateToDetailWorld(ParticleEmitter *this, Physics_WorldId authWorld, Physics_WorldId detailWorld, const char *pVFXName)
{
  ParticleEmitter *v4; 
  int v6; 
  int v7; 
  int v8; 
  __int64 numStates; 
  __int64 v10; 
  __int64 v11; 
  char *v12; 
  unsigned int *v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  int numState; 
  __int64 v19; 
  __int64 v20; 
  int v24; 

  v4 = this;
  if ( !pVFXName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1119, ASSERT_TYPE_ASSERT, "(pVFXName)", (const char *)&queryFormat, "pVFXName") )
    __debugbreak();
  if ( !v4->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1120, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", "%s\n\tPropagateToDetailWorld is being called on an effect (%s) that has been released\n", "m_pParticleStateData", pVFXName) )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  v8 = 0;
  numStates = (unsigned int)ParticleEmitter::GetEmitterDef(v4)->numStates;
  numState = numStates;
  if ( (_DWORD)numStates )
  {
    v10 = (unsigned int)numStates;
    v11 = 0i64;
    v19 = 0i64;
    v20 = numStates;
    do
    {
      v12 = (char *)v4->m_pParticleStateData + v11;
      if ( (*(_DWORD *)(*((_QWORD *)v12 + 9) + 16i64) & 0x400i64) != 0 && !*((_QWORD *)v12 + 24) )
      {
        v13 = (unsigned int *)*((_QWORD *)v12 + 33);
        if ( v13 )
        {
          v14 = *((_DWORD *)v12 + 106);
          ++v6;
          if ( v14 )
          {
            v15 = v14;
            v24 = v14 + v7;
            do
            {
              v16 = *v13;
              if ( *v13 != -1 )
              {
                v17 = v13[1];
                if ( v17 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1156, ASSERT_TYPE_ASSERT, "(detailInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "detailInstanceId != PHYSICSINSTANCEID_INVALID") )
                  __debugbreak();
                ++v8;
                FX_PropagateInstanceToDetailWorld(authWorld, detailWorld, v16, v17, pVFXName);
              }
              v13 += 3;
              --v15;
            }
            while ( v15 );
            v11 = v19;
            v10 = v20;
            v7 = v24;
          }
        }
        v4 = this;
      }
      v11 += 528i64;
      --v10;
      v19 = v11;
      v20 = v10;
    }
    while ( v10 );
  }
  Physics_SetCGFXStatesDetailPropagationDebugData(v4->m_pSystemOwner->m_localClientNum, numState, v6);
  Physics_SetCGFXParticlesDetailPropagationDebugData(v4->m_pSystemOwner->m_localClientNum, v7, v8);
}

/*
==============
ParticleEmitter::Release
==============
*/
void ParticleEmitter::Release(ParticleEmitter *this)
{
  unsigned int numStates; 
  __int64 v3; 
  __int64 v4; 

  if ( this->m_pParticleStateData )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    if ( numStates )
    {
      v3 = numStates;
      v4 = 0i64;
      do
      {
        ParticleEmitter::ParticleStateData::Release(&this->m_pParticleStateData[v4++], this);
        --v3;
      }
      while ( v3 );
    }
    ParticleManager::ParticleSystemFree(this->m_pSystemOwner->m_localClientNum, this->m_pParticleStateData);
    this->m_pParticleStateData = NULL;
  }
  this->m_flags &= ~0x80u;
  this->m_flags |= 0x40u;
}

/*
==============
ParticleEmitter::ParticleStateData::Release
==============
*/
void ParticleEmitter::ParticleStateData::Release(ParticleEmitter::ParticleStateData *this, const ParticleEmitter *pEmitterOwner)
{
  LocalClientNum_t m_localClientNum; 
  unsigned __int8 *m_pParticleData; 

  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4488, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  ParticleState::Release(&this->m_particleState, &this->m_particleData, pEmitterOwner);
  m_localClientNum = this->m_particleData.m_localClientNum;
  m_pParticleData = this->m_particleData.m_pParticleData;
  *(_QWORD *)&this->m_particleData.m_particleCountRunning = 0i64;
  Particle_ReleaseBlock(m_localClientNum, m_pParticleData);
  this->m_particleData.m_pParticleData = NULL;
  *(_QWORD *)&this->m_particleData.m_particleCountRunning = 0i64;
  this->m_particleData.m_particleCountMax = 0;
  this->m_particleData.m_pEmitter = NULL;
  this->m_particleData.m_pEmitterPadding = NULL;
  this->m_particleData.m_particleSize = 0;
  this->m_particleData.m_dataFlags = USE_NONE;
  ParticleData::DestroyParticleOffsetTable(&this->m_particleData);
}

/*
==============
ParticleEmitter::RequestFreeParticleData
==============
*/
void ParticleEmitter::RequestFreeParticleData(ParticleEmitter *this)
{
  const ParticleSystem *SystemOwner; 

  this->m_flags |= 0x80u;
  SystemOwner = ParticleEmitter::GetSystemOwner(this);
  SystemOwner->m_flags |= 0x2000000ui64;
}

/*
==============
ParticleEmitter::ResetLifetime
==============
*/
void ParticleEmitter::ResetLifetime(ParticleEmitter *this)
{
  this->m_impactMarkHandle = -1;
  *(_QWORD *)&this->m_emitterLife = 0i64;
  *(_QWORD *)&this->m_lastSpawnTime = 0i64;
  this->m_particleRemainder = 0.0;
  *(_QWORD *)&this->m_alphaThreshold = 0i64;
  *(_QWORD *)&this->m_scriptedChannels = 0i64;
  this->m_scriptedInputChannelData.color = 0ui64;
  this->m_scriptedInputChannelData.size = 0ui64;
  *(_QWORD *)&this->m_scriptedInputChannelData.colorOperation = 0i64;
  *(_QWORD *)this->m_scriptedInputChannelData.pad = 0i64;
  this->m_lifetimeParticleCount = 0;
  this->m_instancePoolProcessed = 0;
}

/*
==============
ParticleEmitter::ResetProfilerData
==============
*/
void ParticleEmitter::ResetProfilerData(ParticleEmitter *this)
{
  this->m_numParticlesRendered = 0;
  *(_QWORD *)&this->m_profilerUpdateTime = 0i64;
  this->m_numLights = 0;
  *(_QWORD *)&this->m_numTrails = 0i64;
  *(_QWORD *)&this->m_numBeams = 0i64;
  *(_QWORD *)&this->m_numRayCasts = 0i64;
  this->m_numPhysicsObjects = 0;
}

/*
==============
ParticleEmitter::Restart
==============
*/
void ParticleEmitter::Restart(ParticleEmitter *this)
{
  unsigned int numStates; 
  __int64 v3; 
  __int64 v4; 
  ParticleEmitter::ParticleStateData *v5; 
  const ParticleEmitterDef *EmitterDef; 

  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 174, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) == 0 )
  {
    if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 178, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
      __debugbreak();
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    if ( numStates )
    {
      v3 = numStates;
      v4 = 0i64;
      do
      {
        v5 = &this->m_pParticleStateData[v4];
        ParticleState::KillAllParticles(&v5->m_particleState, &v5->m_particleData, this);
        ++v4;
        *(_QWORD *)&v5->m_particleData.m_particleCountRunning = 0i64;
        --v3;
      }
      while ( v3 );
    }
  }
  *(_QWORD *)&this->m_emitterLife = 0i64;
  *(_QWORD *)&this->m_lastSpawnTime = 0i64;
  this->m_particleRemainder = 0.0;
  *(_QWORD *)&this->m_alphaThreshold = 0i64;
  this->m_impactMarkHandle = -1;
  *(_QWORD *)&this->m_scriptedChannels = 0i64;
  this->m_scriptedInputChannelData.color.v.m128_u64[0] = 0i64;
  this->m_scriptedInputChannelData.color.v.m128_u64[1] = 0i64;
  this->m_scriptedInputChannelData.size.v.m128_u64[0] = 0i64;
  this->m_scriptedInputChannelData.size.v.m128_u64[1] = 0i64;
  *(_QWORD *)&this->m_scriptedInputChannelData.colorOperation = 0i64;
  *(_QWORD *)this->m_scriptedInputChannelData.pad = 0i64;
  this->m_flags &= 0xFFFFFFFC;
  this->m_lifetimeParticleCount = 0;
  this->m_instancePoolProcessed = 0;
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  if ( EmitterDef->emitterDelay.min != 0.0 || EmitterDef->emitterDelay.max != 0.0 )
    this->m_flags |= 4u;
  ParticleEmitter::CalculateParticleCountMax(this);
}

/*
==============
ParticleEmitter::ParticleStateData::Restart
==============
*/
void ParticleEmitter::ParticleStateData::Restart(ParticleEmitter::ParticleStateData *this, const ParticleEmitter *pEmitterOwner)
{
  ParticleState::KillAllParticles(&this->m_particleState, &this->m_particleData, pEmitterOwner);
  *(_QWORD *)&this->m_particleData.m_particleCountRunning = 0i64;
}

/*
==============
ParticleEmitter::SetEmissionCurveValue
==============
*/
void ParticleEmitter::SetEmissionCurveValue(ParticleEmitter *this, float value)
{
  const ParticleSystem *m_pSystemOwner; 
  __int64 m_localClientNum; 
  int numStates; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  ParticleData *p_m_particleData; 
  unsigned __int8 *ParticleDataArray; 
  int m_particleCountRunning; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned __int64 v15; 
  ParticleSystem *v16; 

  m_pSystemOwner = this->m_pSystemOwner;
  this->m_gameScrubbedCurve = value;
  m_localClientNum = m_pSystemOwner->m_localClientNum;
  numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
  if ( numStates > 0 )
  {
    v6 = 0i64;
    v7 = m_localClientNum;
    v8 = (unsigned int)numStates;
    do
    {
      p_m_particleData = &this->m_pParticleStateData[v6].m_particleData;
      if ( ParticleData::HasParticleDataArray(p_m_particleData, PARTICLE_DATA_CHILD_SYSTEM) )
      {
        if ( !p_m_particleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
          __debugbreak();
        if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
          __debugbreak();
        ParticleDataArray = ParticleData::GetParticleDataArray(p_m_particleData, PARTICLE_DATA_CHILD_SYSTEM);
        m_particleCountRunning = p_m_particleData->m_particleCountRunning;
        if ( m_particleCountRunning > 0 )
        {
          v12 = (unsigned int)m_particleCountRunning;
          v13 = v7 << 12;
          do
          {
            v14 = 0;
            if ( g_particleSystemsGeneration[v13 + (*(_DWORD *)ParticleDataArray & 0xFFF)].__all32 == *(_DWORD *)ParticleDataArray )
              v14 = *(_DWORD *)ParticleDataArray & 0xFFF;
            v15 = *((_QWORD *)&g_particleSystems[0][v13] + v14);
            v16 = NULL;
            if ( v15 >= 0x1000 )
              v16 = (ParticleSystem *)v15;
            if ( v16 )
              ParticleSystem::SetEmissionCurveValue(v16, value);
            ParticleDataArray += 4;
            --v12;
          }
          while ( v12 );
        }
      }
      ++v6;
      --v8;
    }
    while ( v8 );
  }
}

/*
==============
ParticleEmitter::SetupFlags
==============
*/
void ParticleEmitter::SetupFlags(ParticleEmitter *this)
{
  const ParticleEmitterDef *EmitterDef; 
  const ParticleEmitterDef *v3; 
  bool v4; 
  unsigned int v5; 
  bool v6; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  bool v10; 
  int v11; 
  int v12; 
  unsigned int v13; 

  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  v3 = EmitterDef;
  v4 = EmitterDef->emitterLife.min == 0.0 && EmitterDef->emitterLife.max == 0.0;
  v5 = this->m_flags | 8;
  if ( !v4 )
    v5 = this->m_flags & 0xFFFFFFF7;
  this->m_flags = v5;
  v6 = EmitterDef->emitterDelay.min == 0.0 && EmitterDef->emitterDelay.max == 0.0;
  v7 = v5;
  v8 = v5 | 4;
  v9 = v7 & 0xFFFFFFFB;
  if ( v6 )
    v8 = v9;
  this->m_flags = v8;
  v10 = v3->particleDelay.min == 0.0 && v3->particleDelay.max == 0.0;
  v11 = v8;
  v12 = v8 | 0x10;
  v13 = v11 & 0xFFFFFFEF;
  if ( v10 )
    v12 = v13;
  this->m_flags = v12 | 0x40;
}

/*
==============
ParticleEmitter::ShouldDrawWithViewModel
==============
*/
bool ParticleEmitter::ShouldDrawWithViewModel(ParticleEmitter *this, const ParticleState *pParticleState)
{
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2398, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  return (pParticleState->m_pStateDef->flags & 0x4000000) != 0 || (this->m_flags & 0x100) != 0 || (ParticleEmitter::GetSystemOwner(this)->m_flags & 0x800000000i64) != 0;
}

/*
==============
ParticleEmitter::SpawnChildEffect
==============
*/
__int64 ParticleEmitter::SpawnChildEffect(ParticleEmitter *this, LocalClientNum_t localClientNum, int currentTime, ParticleManager *pManager, const ParticleState *pParticleState, const ParticleLinkedAssetListDef *pLinkedAssetList, int randomSeed, const float4 *pos, const vector3 *orientationMat, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, bool hasParentOwner, bool attachedToParent, const ParticleSystem *pParentSystem, const ParticleSystemDef *const systemDefOverride, ParticleSystemFlags spawnFlags)
{
  const ParticleSystemDef *particleSystem; 
  __int64 particleSystemFlags; 
  bool v22; 
  ParticleSystemFlags m_flags; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  ParticleSystemHandle parentParticleSystem; 
  ParticleSystemHandle v28; 
  __int64 v29; 
  ParticleSystemHandle v30; 
  float4 *p_x; 

  particleSystem = systemDefOverride;
  if ( !pLinkedAssetList && !systemDefOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4797, ASSERT_TYPE_ASSERT, "(pLinkedAssetList || systemDefOverride)", (const char *)&queryFormat, "pLinkedAssetList || systemDefOverride") )
    __debugbreak();
  if ( !pParentSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4798, ASSERT_TYPE_ASSERT, "(pParentSystem)", (const char *)&queryFormat, "pParentSystem") )
    __debugbreak();
  if ( attachedToParent && (dobjHandle != 4095 || boneIndex != 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4799, ASSERT_TYPE_ASSERT, "(!attachedToParent || (dobjHandle == ((1 << 12) - 1) && boneIndex == ((1 << 16) - 1)))", (const char *)&queryFormat, "!attachedToParent || (dobjHandle == FX_DOBJ_HANDLE_NONE && boneIndex == FX_BONE_INDEX_NONE)") )
    __debugbreak();
  if ( !particle_child_spawn_allow->current.enabled )
    return 0i64;
  particleSystemFlags = spawnFlags | 0x808;
  v22 = 0;
  if ( hasParentOwner )
  {
    m_flags = pParentSystem->m_flags;
    v24 = spawnFlags | 0x1808;
    if ( attachedToParent )
    {
      if ( (m_flags & 0x800000000i64) != 0 )
        v24 = spawnFlags | 0x800001808i64;
    }
    else
    {
      v25 = spawnFlags | 0x180C;
      if ( (m_flags & 4) == 0 )
        v25 = spawnFlags | 0x1808;
      v26 = v25;
      v24 = v25 | 0x2000;
      if ( (m_flags & 0x2000) == 0 )
        v24 = v26;
      if ( (m_flags & 0x20000000) != 0 )
        v24 |= 0x20000000ui64;
    }
    particleSystemFlags = v24 | 0x4000;
    v22 = (pParentSystem->m_flags & 0x4000) != 0;
    if ( (pParentSystem->m_flags & 0x4000) == 0 )
      particleSystemFlags = v24;
    if ( Dvar_GetBool_Internal(particle_parent_updates_child) || (ParticleSystem::GetDef((ParticleSystem *)pParentSystem)->flags & 0x80000) != 0 )
      particleSystemFlags |= 0x4000000ui64;
  }
  if ( !systemDefOverride )
  {
    Particle_VerifyAssetList(pLinkedAssetList);
    particleSystem = pLinkedAssetList->assetList[Particle_RandomIndex(randomSeed, FXRAND_VISUAL, pLinkedAssetList->numAssets)].particleSystem;
  }
  parentParticleSystem = ParticleSystem::GetSystemHandle((ParticleSystem *)pParentSystem);
  v28 = ParticleManager::AddSystem(pManager, localClientNum, particleSystem, pos, orientationMat, currentTime, (ParticleSystemFlags)particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, (scr_string_t)0, parentParticleSystem);
  v29 = (v28 & 0xFFF) + ((__int64)(int)localClientNum << 12);
  v30 = v28;
  if ( g_particleSystemsGeneration[v29].__all32 != v28 && v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 933, ASSERT_TYPE_ASSERT, "(g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  p_x = &g_particleSystems[0][v29]->m_systemTransform.x;
  if ( p_x && v22 )
  {
    if ( !pParentSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4858, ASSERT_TYPE_ASSERT, "(pParentSystem)", (const char *)&queryFormat, "pParentSystem") )
      __debugbreak();
    p_x[9] = pParentSystem->m_scriptedVelocity;
    p_x[26].v.m128_u64[0] |= 0x4000ui64;
  }
  return (unsigned int)v30;
}

/*
==============
ParticleEmitter::SpawnDecals
==============
*/
void ParticleEmitter::SpawnDecals(ParticleEmitter *this, LocalClientNum_t localClientNum, unsigned int numParticles, const vector4 *rEmitterTransform, const ParticleState::ElementTypeModule *elementTypeModule, const int *randomSeedArray, const float4 *colorArray, const float4 *positionArray, const float4 *sizeArray, const float4 *rotationAngleArray, unsigned int *flagsArray, const FxMarkSpawnData *pMarkSpawnData, const float *atlasIndexArray, FX_ImpactMark_AtlasInfo *atlasInfo, const float4 *boltOffsetPos, const float4 *boltOffsetQuat)
{
  vec4_t *v18; 
  unsigned int *v19; 
  __int64 v20; 
  const ParticleModule *pModule; 
  unsigned __int16 m_flags; 
  __m128 v23; 
  char v24; 
  unsigned __int64 v25; 
  ParticleSystem *SystemOwner; 
  unsigned int v27; 
  int v30; 
  unsigned __int8 v31; 
  int v33; 
  char v34; 
  int v36; 
  char v37; 
  int v39; 
  char v40; 
  __m256i v41; 
  const int *v42; 
  signed __int64 v43; 
  float *v44; 
  int v45; 
  int v46; 
  ParticleLinkedAssetDef *v47; 
  __int128 v48; 
  int v51; 
  unsigned __int8 v52; 
  int v54; 
  char v55; 
  int v57; 
  char v58; 
  int v60; 
  char v61; 
  int v63; 
  unsigned __int8 v64; 
  int v66; 
  unsigned __int8 v67; 
  int v69; 
  unsigned __int8 v70; 
  int v72; 
  unsigned __int8 v73; 
  unsigned int v74; 
  __int64 materialOverrideIndex; 
  Material *MaterialAtIndex; 
  const char *name; 
  const char *v78; 
  ParticleSystem *v79; 
  const ParticleSystemDef *Def; 
  unsigned int v81; 
  const char *v82; 
  const char *v83; 
  ParticleSystem *v84; 
  const ParticleSystemDef *v85; 
  unsigned int v86; 
  ParticleSystem *v87; 
  const ParticleSystemDef *v88; 
  ParticleSystem *v89; 
  const ParticleSystemDef *v90; 
  __int64 fadeOutInfo; 
  __int64 stoppableFadeOutInfo; 
  bool bypassStackingLimiter; 
  FxMarkProjectionAxis projectionAxis; 
  unsigned __int8 nativeColorLerp; 
  char v96; 
  char v97; 
  char v98; 
  unsigned __int16 v99; 
  unsigned __int16 v100; 
  unsigned __int16 v101; 
  unsigned __int16 m_flags_high; 
  unsigned __int16 m_type; 
  unsigned __int8 nativeColor[4]; 
  BOOL killOnKillcamTransition; 
  LocalClientNum_t localClientNuma; 
  const float4 *v107; 
  const float4 *v108; 
  const int *v109; 
  ParticleLinkedAssetListDef *pLinkedAssetList; 
  FX_ImpactMark_AtlasInfo *v111; 
  _BOOL8 affectsGameplay; 
  float4 *v113; 
  float4 *v114; 
  __int64 v115; 
  vec3_t origin; 
  __m128 v117; 
  vec4_t markSizeOrig; 
  vec4_t out; 
  _BYTE mat[64]; 
  const float4 *positionArraya; 
  const float *atlasIndexArraya; 

  v18 = (vec4_t *)sizeArray;
  v19 = flagsArray;
  v109 = randomSeedArray;
  v108 = colorArray;
  v107 = rotationAngleArray;
  v111 = atlasInfo;
  v114 = (float4 *)boltOffsetPos;
  v113 = (float4 *)boltOffsetQuat;
  v20 = numParticles;
  localClientNuma = localClientNum;
  if ( !numParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4872, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !v109 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4873, ASSERT_TYPE_ASSERT, "(randomSeedArray)", (const char *)&queryFormat, "randomSeedArray") )
    __debugbreak();
  if ( !v108 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4874, ASSERT_TYPE_ASSERT, "(colorArray)", (const char *)&queryFormat, "colorArray") )
    __debugbreak();
  if ( !positionArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4875, ASSERT_TYPE_ASSERT, "(positionArray)", (const char *)&queryFormat, "positionArray") )
    __debugbreak();
  if ( !sizeArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4876, ASSERT_TYPE_ASSERT, "(sizeArray)", (const char *)&queryFormat, "sizeArray") )
    __debugbreak();
  if ( !v107 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4877, ASSERT_TYPE_ASSERT, "(rotationAngleArray)", (const char *)&queryFormat, "rotationAngleArray") )
    __debugbreak();
  if ( !flagsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4878, ASSERT_TYPE_ASSERT, "(flagsArray)", (const char *)&queryFormat, "flagsArray") )
    __debugbreak();
  if ( !pMarkSpawnData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4879, ASSERT_TYPE_ASSERT, "(pMarkSpawnData)", (const char *)&queryFormat, "pMarkSpawnData") )
    __debugbreak();
  pModule = elementTypeModule->pModule;
  m_flags = elementTypeModule->pModule[1].m_flags;
  v23 = *(__m128 *)&elementTypeModule->pModule[4].m_type;
  pLinkedAssetList = (ParticleLinkedAssetListDef *)&elementTypeModule->pModule[2];
  m_type = pModule[1].m_type;
  v101 = *((_WORD *)&pModule[1].m_type + 1);
  m_flags_high = HIWORD(pModule[1].m_flags);
  v99 = pModule[6].m_type;
  v24 = pModule[6].m_flags;
  LOBYTE(pModule) = *((_BYTE *)&pModule[6].m_type + 3);
  bypassStackingLimiter = v24;
  v100 = m_flags;
  projectionAxis = (char)pModule;
  v25 = (unsigned __int64)ParticleEmitter::GetSystemOwner(this)->m_flags >> 37;
  LOBYTE(v25) = v25 & 1;
  affectsGameplay = v25;
  SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
  v27 = ParticleSystem::GetDef(SystemOwner)->flags >> 11;
  LOBYTE(v27) = v27 & 1;
  killOnKillcamTransition = v27;
  _XMM8 = 0i64;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  v30 = (int)*(float *)&_XMM2;
  _mm_shuffle_ps(v23, v23, 85);
  if ( (int)*(float *)&_XMM2 > 255 )
    v30 = 255;
  v31 = v30;
  if ( v30 < 0 )
    v31 = 0;
  nativeColorLerp = v31;
  __asm { vroundss xmm0, xmm8, xmm2, 1 }
  v33 = (int)*(float *)&_XMM0;
  _mm_shuffle_ps(v23, v23, 170);
  if ( (int)*(float *)&_XMM0 > 255 )
    v33 = 255;
  v34 = v33;
  if ( v33 < 0 )
    v34 = 0;
  __asm { vroundss xmm0, xmm8, xmm2, 1 }
  v36 = (int)*(float *)&_XMM0;
  v96 = v34;
  _mm_shuffle_ps(v23, v23, 255);
  if ( (int)*(float *)&_XMM0 > 255 )
    v36 = 255;
  v37 = v36;
  if ( v36 < 0 )
    v37 = 0;
  __asm { vroundss xmm0, xmm8, xmm2, 1 }
  v39 = (int)*(float *)&_XMM0;
  v97 = v37;
  if ( (int)*(float *)&_XMM0 > 255 )
    v39 = 255;
  v40 = v39;
  *(__m256i *)mat = *(__m256i *)rEmitterTransform->x.v.m128_f32;
  v41 = *(__m256i *)rEmitterTransform->z.v.m128_f32;
  if ( v39 < 0 )
    v40 = 0;
  v98 = v40;
  *(__m256i *)&mat[32] = v41;
  Axis34ToQuat((const tmat34_t<vec4_t> *)mat, &out);
  if ( (_DWORD)v20 )
  {
    v107 = (const float4 *)((char *)v107 - (__int64)sizeArray);
    v42 = (const int *)((char *)v109 - (char *)atlasIndexArray);
    v108 = (const float4 *)((char *)v108 - (__int64)sizeArray);
    positionArraya = (const float4 *)((char *)positionArray - (char *)sizeArray);
    v43 = (char *)atlasIndexArray - (char *)flagsArray;
    atlasIndexArraya = (const float *)((char *)atlasIndexArray - (char *)flagsArray);
    v109 = v42;
    v115 = v20;
    do
    {
      v44 = (float *)((char *)v19 + v43);
      v45 = *(const int *)((char *)v42 + (_QWORD)v19 + v43);
      Particle_VerifyAssetList(pLinkedAssetList);
      v46 = Particle_RandomIndex(v45, FXRAND_VISUAL, pLinkedAssetList->numAssets);
      markSizeOrig = *v18;
      v47 = &pLinkedAssetList->assetList[v46];
      v48 = *(__int128 *)((char *)v18 + (_QWORD)v107);
      v117 = *(__m128 *)((char *)v18 + (_QWORD)v108);
      _XMM1 = *(__int128 *)((char *)v18 + (_QWORD)positionArraya);
      LODWORD(origin.v[0]) = _XMM1;
      __asm
      {
        vextractps dword ptr [rbp+100h+var_118+4], xmm1, 1
        vextractps dword ptr [rbp+100h+var_118+8], xmm1, 2
      }
      _mm_shuffle_ps(v117, v117, 255);
      if ( !v99 )
      {
        __asm { vroundss xmm0, xmm8, xmm2, 1 }
        v51 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 > 255 )
          v51 = 255;
        v52 = v51;
        if ( v51 < 0 )
          v52 = 0;
        nativeColorLerp = v52;
        __asm { vroundss xmm0, xmm8, xmm2, 1 }
        v54 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 > 255 )
          v54 = 255;
        v55 = v54;
        if ( v54 < 0 )
          v55 = 0;
        __asm { vroundss xmm0, xmm8, xmm2, 1 }
        v57 = (int)*(float *)&_XMM0;
        v96 = v55;
        if ( (int)*(float *)&_XMM0 > 255 )
          v57 = 255;
        v58 = v57;
        if ( v57 < 0 )
          v58 = 0;
        v97 = v58;
        __asm { vroundss xmm0, xmm8, xmm2, 1 }
        v60 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 > 255 )
          v60 = 255;
        v61 = v60;
        if ( v60 < 0 )
          v61 = 0;
        v98 = v61;
      }
      __asm { vroundss xmm0, xmm8, xmm2, 1 }
      v63 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v63 = 255;
      v64 = v63;
      if ( v63 < 0 )
        v64 = 0;
      nativeColor[0] = v64;
      __asm { vroundss xmm0, xmm8, xmm2, 1 }
      v66 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v66 = 255;
      v67 = v66;
      if ( v66 < 0 )
        v67 = 0;
      nativeColor[1] = v67;
      __asm { vroundss xmm0, xmm8, xmm2, 1 }
      v69 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v69 = 255;
      v70 = v69;
      if ( v69 < 0 )
        v70 = 0;
      nativeColor[2] = v70;
      __asm { vroundss xmm0, xmm8, xmm2, 1 }
      v72 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v72 = 255;
      v73 = v72;
      if ( v72 < 0 )
        v73 = 0;
      nativeColor[3] = v73;
      v74 = (int)*v44;
      v111->startFrame = v74;
      if ( v74 >= 0x7FFF )
      {
        LODWORD(stoppableFadeOutInfo) = 0x7FFF;
        LODWORD(fadeOutInfo) = v74;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4930, ASSERT_TYPE_ASSERT, "(unsigned)( atlasInfo->startFrame ) < (unsigned)( 0x7fff )", "atlasInfo->startFrame doesn't index 0x7fff\n\t%i not in [0, %i)", fadeOutInfo, stoppableFadeOutInfo) )
          __debugbreak();
      }
      if ( (*((_BYTE *)pMarkSpawnData + 3) & 0x40) != 0 )
      {
        materialOverrideIndex = pMarkSpawnData->materialOverrideIndex;
        if ( (unsigned int)materialOverrideIndex >= rgp.materialCount )
        {
          LODWORD(stoppableFadeOutInfo) = rgp.materialCount;
          LODWORD(fadeOutInfo) = pMarkSpawnData->materialOverrideIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", fadeOutInfo, stoppableFadeOutInfo) )
            __debugbreak();
        }
        MaterialAtIndex = DB_GetMaterialAtIndex(rgp.sortedMaterials[materialOverrideIndex]);
        if ( R_DecalVolumesMarks_DebugEnabled() )
        {
          name = MaterialAtIndex->name;
          if ( !this->m_pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
            __debugbreak();
          v78 = ParticleSystem::GetDef((ParticleSystem *)this->m_pSystemOwner)->name;
          if ( !this->m_pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
            __debugbreak();
          Com_Printf(21, "D+ SpawnDecals: time: %d vfx: %s, material: %s \n", (unsigned int)this->m_pSystemOwner->m_spawnTime, v78, name);
          m_flags = v100;
        }
        v79 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
        Def = ParticleSystem::GetDef(v79);
        v81 = FX_ImpactMark(localClientNuma, MaterialAtIndex, m_type, m_flags_high, v99, v101, m_flags, &origin, &out, *(float *)&v48, nativeColor, &nativeColorLerp, &markSizeOrig, pMarkSpawnData->markEntnum, (*((_BYTE *)pMarkSpawnData + 3) & 0x10) != 0, (*((_BYTE *)pMarkSpawnData + 3) & 0x20) != 0, *((_BYTE *)pMarkSpawnData + 3) & 0xF, pMarkSpawnData->boneIndex, projectionAxis, v111, v114, v113, 1, bypassStackingLimiter, *((_BYTE *)pMarkSpawnData + 3) >> 7, affectsGameplay, killOnKillcamTransition, Def->name);
      }
      else
      {
        if ( R_DecalVolumesMarks_DebugEnabled() )
        {
          v82 = v47->physicsFXData.physicsFXShape->name;
          if ( !this->m_pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
            __debugbreak();
          v83 = ParticleSystem::GetDef((ParticleSystem *)this->m_pSystemOwner)->name;
          if ( !this->m_pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
            __debugbreak();
          Com_Printf(21, "D+ SpawnDecals: time: %d, vfx: %s, material: %s \n", (unsigned int)this->m_pSystemOwner->m_spawnTime, v83, v82);
          m_flags = v100;
        }
        v84 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
        v85 = ParticleSystem::GetDef(v84);
        v81 = FX_ImpactMark(localClientNuma, v47->decal.materials[1], m_type, m_flags_high, v99, v101, m_flags, &origin, &out, *(float *)&v48, nativeColor, &nativeColorLerp, &markSizeOrig, pMarkSpawnData->markEntnum, (*((_BYTE *)pMarkSpawnData + 3) & 0x10) != 0, (*((_BYTE *)pMarkSpawnData + 3) & 0x20) != 0, *((_BYTE *)pMarkSpawnData + 3) & 0xF, pMarkSpawnData->boneIndex, projectionAxis, v111, v114, v113, 0, bypassStackingLimiter, *((_BYTE *)pMarkSpawnData + 3) >> 7, affectsGameplay, killOnKillcamTransition, v85->name);
      }
      *v19 |= 1u;
      v86 = v81;
      if ( m_flags != 0xFFFF )
      {
        if ( this->m_impactMarkHandle != -1 )
        {
          v87 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
          v88 = ParticleSystem::GetDef(v87);
          if ( !v88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 171, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
            __debugbreak();
          if ( !v88->emitterDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 172, ASSERT_TYPE_ASSERT, "(pSystemDef->emitterDefs)", (const char *)&queryFormat, "pSystemDef->emitterDefs") )
            __debugbreak();
          if ( (unsigned int)this->m_emitterIndex >= v88->numEmitters )
          {
            LODWORD(stoppableFadeOutInfo) = v88->numEmitters;
            LODWORD(fadeOutInfo) = this->m_emitterIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( m_emitterIndex ) < (unsigned)( pSystemDef->numEmitters )", "m_emitterIndex doesn't index pSystemDef->numEmitters\n\t%i not in [0, %i)", fadeOutInfo, stoppableFadeOutInfo) )
              __debugbreak();
          }
          if ( !&v88->emitterDefs[this->m_emitterIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 176, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
            __debugbreak();
          v89 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
          v90 = ParticleSystem::GetDef(v89);
          Com_PrintWarning(21, "WARNING: Trying to create multiple impact marks with one emitter: %s | %s\n", v90->name, (const char *)&queryFormat.fmt + 3);
        }
        if ( v86 != -1 )
          this->m_impactMarkHandle = v86;
      }
      v42 = v109;
      ++v18;
      v43 = (signed __int64)atlasIndexArraya;
      ++v19;
      --v115;
    }
    while ( v115 );
  }
}

/*
==============
ParticleEmitter::SpawnGeoTrails
==============
*/
void ParticleEmitter::SpawnGeoTrails(ParticleEmitter *this, unsigned int numParticles, ParticleState *pParticleState, const vector4 *rEmitterTransform, const int *randomSeedArray, const float4 *colorArray, const float4 *positionArray, const float4 *sizeArray, const float4 *velocityArray)
{
  __int64 v10; 
  ParticleEmitter *v12; 
  const float4 *v13; 
  Particle_TrailData *TrailDataList; 
  Particle_TrailData *v15; 
  float m_emitterLife; 
  vec4_t v17; 
  unsigned int *p_numPointsRunning; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  __m128 v20; 
  __m128 v; 
  __int64 v22; 
  ParticleData *v23; 
  unsigned __int8 *v24; 
  bool v25; 
  float *v26; 
  float4 *v27; 
  float4 *v28; 
  unsigned __int8 *v29; 
  float4 *v30; 
  unsigned __int8 *v31; 
  __int64 v32; 
  unsigned __int8 *ParticleDataArray; 
  ParticleState::ElementTypeModule v35; 
  vec4_t quat; 
  const float4 *colorArraya; 
  const float4 *sizeArraya; 
  const float4 *velocityArraya; 

  v10 = numParticles;
  v12 = this;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4996, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( pParticleState->m_pStateDef->elementType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4997, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL") )
    __debugbreak();
  if ( !randomSeedArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4998, ASSERT_TYPE_ASSERT, "(randomSeedArray)", (const char *)&queryFormat, "randomSeedArray") )
    __debugbreak();
  if ( !colorArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4999, ASSERT_TYPE_ASSERT, "(colorArray)", (const char *)&queryFormat, "colorArray") )
    __debugbreak();
  v13 = positionArray;
  if ( !positionArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5000, ASSERT_TYPE_ASSERT, "(positionArray)", (const char *)&queryFormat, "positionArray") )
    __debugbreak();
  if ( !sizeArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5001, ASSERT_TYPE_ASSERT, "(sizeArray)", (const char *)&queryFormat, "sizeArray") )
    __debugbreak();
  if ( !velocityArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5002, ASSERT_TYPE_ASSERT, "(velocityArray)", (const char *)&queryFormat, "velocityArray") )
    __debugbreak();
  if ( (unsigned int)v10 > pParticleState->m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5004, ASSERT_TYPE_ASSERT, "(numParticles <= pParticleState->GetParticleCountMax())", (const char *)&queryFormat, "numParticles <= pParticleState->GetParticleCountMax()") )
    __debugbreak();
  v35.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
  if ( !v35.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5007, ASSERT_TYPE_ASSERT, "(pModuleInitGeoTrail)", (const char *)&queryFormat, "pModuleInitGeoTrail") )
    __debugbreak();
  TrailDataList = ParticleState::GetTrailDataList(pParticleState);
  v15 = &TrailDataList[ParticleEmitter::GetParticleCountSpawnedForFirstState(v12)];
  if ( !pParticleState->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  if ( !ParticleManager::ParticleSystemPointerInRange(pParticleState->m_pEmitterOwner->m_pSystemOwner->m_localClientNum, v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5013, ASSERT_TYPE_ASSERT, "(ParticleManager::ParticleSystemPointerInRange( pParticleState->GetEmitterOwner()->GetLocalClientNum(), pTrailDataList ))", (const char *)&queryFormat, "ParticleManager::ParticleSystemPointerInRange( pParticleState->GetEmitterOwner()->GetLocalClientNum(), pTrailDataList )") )
    __debugbreak();
  m_emitterLife = v12->m_emitterLife;
  Particle_RotMatrixToQuatVec(rEmitterTransform, &quat);
  v17 = quat;
  if ( (_DWORD)v10 )
  {
    colorArraya = (const float4 *)((char *)colorArray - (char *)positionArray);
    p_numPointsRunning = &v15->numPointsRunning;
    sizeArraya = (const float4 *)((char *)sizeArray - (char *)positionArray);
    velocityArraya = (const float4 *)((char *)velocityArray - (char *)positionArray);
    v32 = v10;
    do
    {
      m_pModuleInitRelativeVelocity = pParticleState->m_pModuleInitRelativeVelocity;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        v = v13->v;
      }
      else
      {
        v20 = v13->v;
        v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v20, v20, 0), rEmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v20, v20, 85), rEmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v20, v20, 170), rEmitterTransform->z.v), rEmitterTransform->w.v)));
      }
      if ( (pParticleState->m_pStateDef->flags & 0x10000000) != 0 )
        v = _mm128_add_ps(v, ParticleEmitter::GetSystemOwner(v12)->m_systemTransform.w.v);
      v22 = *(_QWORD *)(p_numPointsRunning - 17);
      *(p_numPointsRunning - 2) = 0;
      *p_numPointsRunning = 1;
      *(_DWORD *)(v22 + 64) = 0;
      v23 = *(ParticleData **)(p_numPointsRunning - 15);
      if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5030, ASSERT_TYPE_ASSERT, "(pTrailParticleData)", (const char *)&queryFormat, "pTrailParticleData") )
        __debugbreak();
      if ( v23->m_particleCountRunning + v23->m_particleCountDelayed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5031, ASSERT_TYPE_ASSERT, "(pTrailParticleData->GetParticleCountSpawned() == 0)", (const char *)&queryFormat, "pTrailParticleData->GetParticleCountSpawned() == 0") )
        __debugbreak();
      if ( !v23->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      ParticleDataArray = ParticleData::GetParticleDataArray(v23, PARTICLE_DATA_RANDOM_SEED);
      if ( !v23->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 347, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v24 = ParticleData::GetParticleDataArray(v23, PARTICLE_DATA_LIFE);
      v25 = v23->m_pParticleData == NULL;
      *(_QWORD *)quat.v = v24;
      if ( v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 346, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v26 = (float *)ParticleData::GetParticleDataArray(v23, PARTICLE_DATA_SPAWN_TIME);
      if ( !v23->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 343, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v27 = (float4 *)ParticleData::GetParticleDataArray(v23, PARTICLE_DATA_COLOR);
      if ( !v23->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v28 = (float4 *)ParticleData::GetParticleDataArray(v23, PARTICLE_DATA_SIZE);
      if ( !v23->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v29 = ParticleData::GetParticleDataArray(v23, PARTICLE_DATA_POSITION);
      if ( !v23->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 342, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v30 = (float4 *)ParticleData::GetParticleDataArray(v23, PARTICLE_DATA_VELOCITY);
      if ( !v23->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v31 = ParticleData::GetParticleDataArray(v23, PARTICLE_DATA_SPAWN_QUAT);
      *(_DWORD *)ParticleDataArray = *randomSeedArray;
      **(_DWORD **)quat.v = 0;
      *v26 = m_emitterLife;
      *v27 = *(const float4 *)((char *)positionArray + (_QWORD)colorArraya);
      *v28 = *(const float4 *)((char *)positionArray + (_QWORD)sizeArraya);
      *(__m128 *)v29 = v;
      *v30 = *(const float4 *)((char *)positionArray + (_QWORD)velocityArraya);
      *(vec4_t *)v31 = v17;
      *((float *)p_numPointsRunning + 1) = (float)((float)(*(float *)&v35.pModule[5].m_flags - *(float *)&v35.pModule[5].m_type) * fx_randomTable[*randomSeedArray + 59]) + *(float *)&v35.pModule[5].m_type;
      if ( v23->m_particleCountRunning + 1 > v23->m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 202, ASSERT_TYPE_ASSERT, "(GetParticleCountRunning() + particleCount <= m_particleCountMax)", (const char *)&queryFormat, "GetParticleCountRunning() + particleCount <= m_particleCountMax") )
        __debugbreak();
      ++v23->m_particleCountRunning;
      v12 = this;
      v13 = ++positionArray;
      p_numPointsRunning += 24;
      ++randomSeedArray;
      --v32;
    }
    while ( v32 );
  }
}

/*
==============
ParticleEmitter::SpawnParticles
==============
*/
void ParticleEmitter::SpawnParticles(ParticleEmitter *this, const unsigned int numParticles, const int currentTime, const FxCamera *pCamera)
{
  unsigned int m_particleCountMax; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  unsigned int v10; 
  float *v11; 
  int *RandomSeedArrayAtIndex; 
  unsigned __int16 m_randomSeed; 
  unsigned __int16 v14; 
  const ParticleEmitterDef *EmitterDef; 
  __int64 v16; 
  const ParticleEmitterDef *v17; 
  int v18; 
  float *v19; 
  signed __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  float *v28; 
  char *v29; 
  int v30; 
  __int64 v31; 
  ParticleEmitter::ParticleStateData *v32; 
  int *v33; 
  float *SpawnTimeArrayAtIndex; 
  unsigned __int16 v35; 

  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1210, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1211, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  m_particleCountMax = this->m_pParticleStateData->m_particleData.m_particleCountMax;
  if ( numParticles + ParticleEmitter::GetParticleCountSpawnedForAllStates(this) > m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1212, ASSERT_TYPE_ASSERT, "(GetParticleCountSpawnedForAllStates() + numParticles <= m_pParticleStateData[0].m_particleData.GetParticleCountMax())", (const char *)&queryFormat, "GetParticleCountSpawnedForAllStates() + numParticles <= m_pParticleStateData[0].m_particleData.GetParticleCountMax()") )
    __debugbreak();
  if ( !numParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1213, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (this->m_flags & 0x10) != 0 )
  {
    m_pParticleStateData = this->m_pParticleStateData;
    v10 = m_pParticleStateData->m_particleData.m_particleCountMax - m_pParticleStateData->m_particleData.m_particleCountDelayed - numParticles;
    SpawnTimeArrayAtIndex = Particle_GetSpawnTimeArrayAtIndex(&m_pParticleStateData->m_particleData, v10);
    v11 = SpawnTimeArrayAtIndex;
    RandomSeedArrayAtIndex = Particle_GetRandomSeedArrayAtIndex(&m_pParticleStateData->m_particleData, v10);
    m_randomSeed = this->m_randomSeed;
    v33 = RandomSeedArrayAtIndex;
    v14 = this->m_pSystemOwner->m_randomSeed;
    v35 = v14;
    EmitterDef = ParticleEmitter::GetEmitterDef(this);
    v16 = 0i64;
    v17 = EmitterDef;
    if ( numParticles >= 4 )
    {
      v18 = v14;
      v19 = SpawnTimeArrayAtIndex + 1;
      v20 = (char *)RandomSeedArrayAtIndex - (char *)SpawnTimeArrayAtIndex;
      v21 = 2;
      v22 = v18;
      do
      {
        v19 += 4;
        v23 = 10111 * (unsigned __int8)v16;
        v16 = (unsigned int)(v16 + 4);
        v24 = (currentTime + (unsigned int)m_randomSeed + v22 + v23) % 0x3FE9;
        *(_DWORD *)((char *)v19 + v20 - 20) = v24;
        *(v19 - 5) = (float)((float)((float)(v17->particleDelay.max - v17->particleDelay.min) * fx_randomTable[v24 + 19]) + v17->particleDelay.min) + this->m_emitterLife;
        v25 = (currentTime + m_randomSeed + v22 + 10111 * (unsigned int)(unsigned __int8)(v21 - 1)) % 0x3FE9;
        *(_DWORD *)((char *)v19 + v20 - 16) = v25;
        *(v19 - 4) = (float)((float)((float)(v17->particleDelay.max - v17->particleDelay.min) * fx_randomTable[v25 + 19]) + v17->particleDelay.min) + this->m_emitterLife;
        v26 = (currentTime + m_randomSeed + v22 + 10111 * (unsigned int)(unsigned __int8)v21) % 0x3FE9;
        *(_DWORD *)((char *)v19 + v20 - 12) = v26;
        *(v19 - 3) = (float)((float)((float)(v17->particleDelay.max - v17->particleDelay.min) * fx_randomTable[v26 + 19]) + v17->particleDelay.min) + this->m_emitterLife;
        LOBYTE(v26) = v21 + 1;
        v21 += 4;
        v27 = (currentTime + m_randomSeed + v22 + 10111 * (unsigned int)(unsigned __int8)v26) % 0x3FE9;
        *(_DWORD *)((char *)v19 + v20 - 8) = v27;
        *(v19 - 2) = (float)((float)((float)(v17->particleDelay.max - v17->particleDelay.min) * fx_randomTable[v27 + 19]) + v17->particleDelay.min) + this->m_emitterLife;
      }
      while ( (unsigned int)v16 < numParticles - 3 );
      RandomSeedArrayAtIndex = v33;
      v11 = SpawnTimeArrayAtIndex;
      v14 = v35;
    }
    if ( (unsigned int)v16 < numParticles )
    {
      v28 = &v11[v16];
      v29 = (char *)((char *)RandomSeedArrayAtIndex - (char *)v11);
      do
      {
        ++v28;
        v30 = 10111 * (unsigned __int8)v16;
        LODWORD(v16) = v16 + 1;
        v31 = (currentTime + m_randomSeed + (unsigned int)v14 + v30) % 0x3FE9;
        *(_DWORD *)&v29[(_QWORD)v28 - 4] = v31;
        *(v28 - 1) = (float)((float)((float)(v17->particleDelay.max - v17->particleDelay.min) * fx_randomTable[v31 + 19]) + v17->particleDelay.min) + this->m_emitterLife;
      }
      while ( (unsigned int)v16 < numParticles );
    }
    v32 = this->m_pParticleStateData;
    if ( numParticles + v32->m_particleData.m_particleCountDelayed + v32->m_particleData.m_particleCountRunning > v32->m_particleData.m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 220, ASSERT_TYPE_ASSERT, "(GetParticleCountSpawned() + particleCount <= m_particleCountMax)", (const char *)&queryFormat, "GetParticleCountSpawned() + particleCount <= m_particleCountMax") )
      __debugbreak();
    v32->m_particleData.m_particleCountDelayed += numParticles;
  }
  else
  {
    ParticleEmitter::EmitParticles(this, numParticles, currentTime, 0, pCamera);
  }
  this->m_lastSpawnTime = this->m_emitterLife;
  this->m_lastSpawnPos = ParticleEmitter::GetSystemOwner(this)->m_systemTransform.w;
}

/*
==============
ParticleEmitter::SpawnSounds
==============
*/
void ParticleEmitter::SpawnSounds(ParticleEmitter *this, LocalClientNum_t localClientNum, int currentTime, unsigned int numParticles, const ParticleState *pParticleState, const ParticleModuleInitSound *pModuleInitSound, const int *randomSeedArray, const float4 *positionArray, const unsigned int *handleArray)
{
  const float4 *v11; 
  unsigned int *v12; 
  ParticleSystem *SystemOwner; 
  unsigned int v14; 
  int v15; 
  ParticleLinkedAssetDef *v16; 
  const char *material; 
  char v18; 
  unsigned int v19; 
  char v20; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  __m128 v; 
  const ParticleSystem *v23; 
  ParticleSystemHandle systemHandle; 
  unsigned int aliasId; 
  ParticleEmitter *v27; 
  const vector4 *i; 
  ParticleManager *ParticleManager; 
  float4 origin; 

  v11 = positionArray;
  v12 = (unsigned int *)handleArray;
  v27 = this;
  if ( !numParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5065, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5066, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !pModuleInitSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5067, ASSERT_TYPE_ASSERT, "(pModuleInitSound)", (const char *)&queryFormat, "pModuleInitSound") )
    __debugbreak();
  if ( !randomSeedArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5068, ASSERT_TYPE_ASSERT, "(randomSeedArray)", (const char *)&queryFormat, "randomSeedArray") )
    __debugbreak();
  if ( !positionArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5069, ASSERT_TYPE_ASSERT, "(positionArray)", (const char *)&queryFormat, "positionArray") )
    __debugbreak();
  if ( !handleArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5070, ASSERT_TYPE_ASSERT, "(handleArray)", (const char *)&queryFormat, "handleArray") )
    __debugbreak();
  if ( !fx_rewindToFinish )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v27);
    systemHandle = ParticleSystem::GetSystemHandle(SystemOwner);
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    v14 = 0;
    for ( i = ParticleEmitter::GetEmitterTransform(v27, pParticleState); v14 < numParticles; ++v12 )
    {
      if ( currentTime < 0 )
        break;
      v15 = *(unsigned int *)((char *)v12 + (char *)randomSeedArray - (char *)handleArray);
      Particle_VerifyAssetList(&pModuleInitSound->m_linkedAssetList);
      v16 = &pModuleInitSound->m_linkedAssetList.assetList[Particle_RandomIndex(v15, FXRAND_VISUAL, pModuleInitSound->m_linkedAssetList.numAssets)];
      material = (const char *)v16->material;
      if ( v16->material && (v18 = *material) != 0 )
      {
        v19 = 5381;
        do
        {
          ++material;
          v20 = v18 | 0x20;
          if ( (unsigned int)(v18 - 65) >= 0x1A )
            v20 = v18;
          v19 = 65599 * v19 + v20;
          v18 = *material;
        }
        while ( *material );
        if ( !v19 )
          v19 = 1;
      }
      else
      {
        v19 = 0;
      }
      m_pModuleInitRelativeVelocity = pParticleState->m_pModuleInitRelativeVelocity;
      aliasId = v19;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        origin.v = v11->v;
      }
      else
      {
        v = v11->v;
        origin.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 0), i->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 85), i->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 170), i->z.v), i->w.v)));
      }
      if ( (pParticleState->m_pStateDef->flags & 0x10000000) != 0 )
      {
        v23 = ParticleEmitter::GetSystemOwner(v27);
        origin.v = _mm128_add_ps(v23->m_systemTransform.w.v, origin.v);
      }
      ParticleManager::AddSound(ParticleManager, v16->sound, &aliasId, &origin, currentTime, pParticleState, *v12, systemHandle);
      ++v14;
      ++v11;
    }
  }
}

/*
==============
ParticleEmitter::SpawnVectorFields
==============
*/
void ParticleEmitter::SpawnVectorFields(ParticleEmitter *this, unsigned int numParticles, const ParticleState *pParticleState, const vector4 *rEmitterTransform, const ParticleState::ElementTypeModule *elementTypeModule, const int *randomSeedArray, const float4 *positionArray)
{
  const int *v8; 
  const float4 *v10; 
  unsigned __int8 *m_vectorFieldList; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  int v14; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  __m128 v; 
  bool v18; 
  const ParticleSystem *m_pSystemOwner; 
  unsigned __int8 v20; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  ParticleLinkedAssetListDef *pLinkedAssetList; 
  VectorField *vf; 
  orientation_t orient; 

  v8 = randomSeedArray;
  if ( !numParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5112, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5113, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( pParticleState->m_pStateDef->elementType != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5114, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD") )
    __debugbreak();
  if ( !randomSeedArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5115, ASSERT_TYPE_ASSERT, "(randomSeedArray)", (const char *)&queryFormat, "randomSeedArray") )
    __debugbreak();
  v10 = positionArray;
  if ( !positionArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5116, ASSERT_TYPE_ASSERT, "(positionArray)", (const char *)&queryFormat, "positionArray") )
    __debugbreak();
  pLinkedAssetList = (ParticleLinkedAssetListDef *)&elementTypeModule->pModule[1];
  if ( !pParticleState->m_vectorFieldList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 512, ASSERT_TYPE_ASSERT, "(m_vectorFieldList)", (const char *)&queryFormat, "m_vectorFieldList") )
    __debugbreak();
  m_vectorFieldList = pParticleState->m_vectorFieldList;
  v12 = 0;
  v13 = &m_vectorFieldList[ParticleEmitter::GetParticleCountSpawnedForFirstState(this)];
  orient.axis.m[2].v[2] = 0.0;
  *(__m256i *)orient.axis.m[0].v = (__m256i)0i64;
  if ( numParticles )
  {
    while ( 1 )
    {
      v14 = *v8;
      Particle_VerifyAssetList(pLinkedAssetList);
      vf = pLinkedAssetList->assetList[Particle_RandomIndex(v14, FXRAND_VISUAL, pLinkedAssetList->numAssets)].vectorField;
      if ( !vf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5134, ASSERT_TYPE_ASSERT, "(vf)", (const char *)&queryFormat, "vf") )
        __debugbreak();
      m_pModuleInitRelativeVelocity = pParticleState->m_pModuleInitRelativeVelocity;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        _XMM6 = v10->v;
      }
      else
      {
        v = v10->v;
        _XMM6 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 0), rEmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 85), rEmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 170), rEmitterTransform->z.v), rEmitterTransform->w.v)));
      }
      if ( (pParticleState->m_pStateDef->flags & 0x10000000) != 0 )
        _XMM6 = _mm128_add_ps(_XMM6, ParticleEmitter::GetSystemOwner(this)->m_systemTransform.w.v);
      v18 = this->m_pSystemOwner == NULL;
      orient.origin.v[0] = _XMM6.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rsp+0C8h+orient.origin+4], xmm6, 1
        vextractps dword ptr [rsp+0C8h+orient.origin+8], xmm6, 2
      }
      if ( v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
        __debugbreak();
      m_pSystemOwner = this->m_pSystemOwner;
      if ( m_pSystemOwner->m_systemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 196, ASSERT_TYPE_ASSERT, "(m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
        __debugbreak();
      v20 = CG_VectorField_AllocInstanceForFx(vf, &orient, 0xFFu, m_pSystemOwner->m_systemHandle);
      *v13 = v20;
      if ( v20 == 0xFF )
        break;
      ++v12;
      ++v8;
      ++v10;
      ++v13;
      if ( v12 >= numParticles )
        return;
    }
    ParticleEmitter::GetEmitterDef(this);
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    Def = ParticleSystem::GetDef(SystemOwner);
    Com_PrintWarning(21, "WARNING: Could not allocate vector field for effect: %s | %s\n", Def->name, (const char *)&queryFormat.fmt + 3);
  }
}

/*
==============
ParticleEmitter::SpriteDrawPostCull
==============
*/
void ParticleEmitter::SpriteDrawPostCull(ParticleEmitter *this, FxDrawState *pDrawState, const ParticleEmitter::ParticleStateData *rParticleStateData, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, Material *const material, const Particle_DrawData *r_drawData, FxParticleSimAnimation *pParticleSimAnimation, unsigned int particleIndex, const float4 *posArray, const vector4 *rParticleTransform, const ParticleState::ElementTypeModule *rElementTypeModule, const Particle_FlareDrawData *rFlareDrawData, unsigned int emitterDataIndex)
{
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  Particle_TrailData *TrailDataList; 
  __m128 v; 
  volatile int *p_m_numParticlesRendered; 
  const ParticleModuleInitParticleSim *m_pModuleInitParticleSim; 
  _QWORD v27[3]; 
  float4 v28; 
  float4 v29; 
  float4 v30; 
  float4 v31; 
  float4 v32; 
  float4 v33; 
  float4 v34; 
  float4 v35; 
  float4 v36; 
  float4 v37; 
  float4 v38; 

  if ( !pDrawState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2487, ASSERT_TYPE_ASSERT, "(pDrawState)", (const char *)&queryFormat, "pDrawState") )
    __debugbreak();
  switch ( rParticleStateData->m_particleState.m_pStateDef->elementType )
  {
    case 1u:
      v36.v = normal->v;
      v38.v = tangent->v;
      v37.v = bitangent->v;
      FX_BeamGenVerts(pDrawState, this, rParticleStateData, &v38, &v37, &v36, activeLightGridsBitmask, material, r_drawData, emitterDataIndex);
      rParticleStateData->m_particleState.m_moduleGraphLengthData.color.v.m128_u64[0] = 0i64;
      rParticleStateData->m_particleState.m_moduleGraphLengthData.color.v.m128_u64[1] = 0i64;
      rParticleStateData->m_particleState.m_moduleGraphLengthData.position.v.m128_u64[0] = 0i64;
      rParticleStateData->m_particleState.m_moduleGraphLengthData.position.v.m128_u64[1] = 0i64;
      *(_QWORD *)&rParticleStateData->m_particleState.m_moduleGraphLengthData.useLength = 0i64;
      *(_QWORD *)rParticleStateData->m_particleState.m_moduleGraphLengthData.pad = 0i64;
      break;
    case 3u:
      FX_GenFlareVerts(pDrawState, &rFlareDrawData->clipPos, &rFlareDrawData->du, &rFlareDrawData->dv, material, r_drawData, &rParticleStateData->m_particleState, emitterDataIndex);
      break;
    case 4u:
      TrailDataList = ParticleState::GetTrailDataList(&rParticleStateData->m_particleState);
      if ( particleIndex >= rParticleStateData->m_particleState.m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2510, ASSERT_TYPE_ASSERT, "(particleIndex < rParticleStateData.m_particleState.GetParticleCountMax())", (const char *)&queryFormat, "particleIndex < rParticleStateData.m_particleState.GetParticleCountMax()") )
        __debugbreak();
      v33.v = normal->v;
      v = tangent->v;
      v34.v = bitangent->v;
      v35.v = v;
      FX_TrailGenVerts(pDrawState, this, rParticleStateData, &v35, &v34, &v33, activeLightGridsBitmask, material, r_drawData, &TrailDataList[particleIndex], &posArray[particleIndex], emitterDataIndex);
      break;
    default:
      v20 = bitangent->v;
      if ( r_drawData->hasParticleSim )
      {
        m_pModuleInitParticleSim = rParticleStateData->m_particleState.m_pModuleInitParticleSim;
        *(float4 *)&v27[1] = (float4)normal->v;
        v21 = tangent->v;
        v28.v = v20;
        v29.v = v21;
        FX_GenParticleSimAnimationVerts(pDrawState, &rParticleStateData->m_particleState, this, &v29, &v28, (const float4 *)&v27[1], activeLightGridsBitmask, pParticleSimAnimation, r_drawData, rParticleTransform, rElementTypeModule, m_pModuleInitParticleSim, emitterDataIndex);
      }
      else
      {
        v30.v = normal->v;
        v22 = tangent->v;
        v31.v = v20;
        v32.v = v22;
        FX_QuadGenQuad(pDrawState, &rParticleStateData->m_particleState, &v32, &v31, &v30, activeLightGridsBitmask, material, r_drawData, emitterDataIndex);
      }
      break;
  }
  p_m_numParticlesRendered = &this->m_numParticlesRendered;
  if ( (((_BYTE)this - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_numParticlesRendered) )
    __debugbreak();
  _InterlockedIncrement(p_m_numParticlesRendered);
}

/*
==============
ParticleEmitter::Stop
==============
*/
void ParticleEmitter::Stop(ParticleEmitter *this)
{
  unsigned int numStates; 
  __int64 v3; 
  __int64 v4; 

  if ( (this->m_flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1055, ASSERT_TYPE_ASSERT, "(!IsStopped())", (const char *)&queryFormat, "!IsStopped()") )
    __debugbreak();
  this->m_flags |= 2u;
  if ( (ParticleEmitter::GetEmitterDef(this)->flags & 8) != 0 && (this->m_flags & 0x40) == 0 )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    if ( numStates )
    {
      v3 = numStates;
      v4 = 0i64;
      do
      {
        if ( this->m_pParticleStateData[v4].m_particleState.m_pStateDef->elementType != 4 )
          ParticleEmitter::Kill(this);
        ++v4;
        --v3;
      }
      while ( v3 );
    }
  }
}

/*
==============
ParticleEmitter::SupportsBasicCopy
==============
*/
bool ParticleEmitter::SupportsBasicCopy(ParticleEmitter *this, const ParticleState *pParticleState)
{
  const ParticleStateDef *m_pStateDef; 
  unsigned __int64 flags; 
  unsigned int elementType; 
  int v6; 
  bool result; 

  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 906, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  m_pStateDef = pParticleState->m_pStateDef;
  flags = m_pStateDef->flags;
  result = (flags & 0x40000000) != 0 && ((elementType = m_pStateDef->elementType, elementType > 0xB) || (v6 = 2192, !_bittest(&v6, elementType))) && (flags & 0x400) == 0 && (flags & 0x10000) == 0;
  return result;
}

/*
==============
ParticleEmitter::Update
==============
*/
void ParticleEmitter::Update(ParticleEmitter *this, const float dt, const int currentTime, const FxCamera *pCamera)
{
  const ParticleEmitterDef *EmitterDef; 
  unsigned int frustumPlaneCount; 
  const ParticleEmitterDef *v10; 
  bool v11; 
  unsigned int m_flags; 
  unsigned int numStates; 
  __int64 v14; 
  __int64 v15; 
  ParticleEmitter::ParticleStateData *v16; 
  const ParticleSystem *SystemOwner; 
  float m_spawnDelay; 
  float v19; 
  bool v20; 
  unsigned int v21; 
  bool v22; 
  unsigned int ParticleCountSpawnedForAllStates; 
  unsigned int v24; 
  bool v25; 
  unsigned int v26; 
  float m_emitterLife; 
  const ParticleSystem *v28; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  const ParticleSystem *v30; 
  unsigned int m_burstCount; 
  ParticleEmitter *v32; 
  unsigned int v33; 
  bool v34; 
  unsigned int m_particleCountDelayed; 
  unsigned int v36; 
  unsigned int m_particleCountMax; 
  __int128 m_emitterLife_low; 
  float v39; 
  float m_spawnRate; 
  bool v41; 
  __m128 v42; 
  float v47; 
  const ParticleState *ParticleState; 
  ParticleModuleEmissionGraph *m_pModuleEmissionGraph; 
  ParticleState::SpawnShapeTypeModule v50; 
  float m_gameScrubbedCurve; 
  double SpawnRate; 
  const ParticleEmitterDef *v53; 
  const ParticleEmitterDef *v54; 
  const ParticleState *v57; 
  __int128 v59; 
  __int128 v63; 
  __int128 v66; 
  unsigned int v70; 
  unsigned int v71; 
  float v72; 
  float v73; 
  signed int v74; 
  unsigned int v75; 
  int v76; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 306, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !this->m_pParticleStateData && (this->m_flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 307, ASSERT_TYPE_ASSERT, "(m_pParticleStateData || !HasParticleData())", (const char *)&queryFormat, "m_pParticleStateData || !HasParticleData()") )
    __debugbreak();
  if ( (this->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 308, ASSERT_TYPE_ASSERT, "(!IsDead())", (const char *)&queryFormat, "!IsDead()") )
    __debugbreak();
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  frustumPlaneCount = pCamera->frustumPlaneCount;
  if ( (EmitterDef->flags & 4) != 0 && frustumPlaneCount > 5 )
    frustumPlaneCount = 5;
  v10 = ParticleEmitter::GetEmitterDef(this);
  v76 = Sys_Microseconds();
  v11 = (this->m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(this)->flags & 1) == 0 && (this->m_flags & 1) == 0;
  m_flags = this->m_flags;
  if ( !v11 )
  {
    if ( (this->m_flags & 0x40) == 0 )
    {
      if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1968, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
        __debugbreak();
      numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
      if ( numStates )
      {
        v14 = numStates;
        v15 = 0i64;
        do
        {
          v16 = &this->m_pParticleStateData[v15];
          ParticleState::KillAllParticles(&v16->m_particleState, &v16->m_particleData, this);
          ++v15;
          *(_QWORD *)&v16->m_particleData.m_particleCountRunning = 0i64;
          --v14;
        }
        while ( v14 );
      }
    }
    return;
  }
  if ( (this->m_flags & 0x40) == 0 )
  {
    SystemOwner = ParticleEmitter::GetSystemOwner(this);
    ParticleEmitter::KillParticles(this, (SystemOwner->m_flags & 0x40000) == 0);
    m_flags = this->m_flags;
  }
  if ( (m_flags & 4) != 0 )
  {
    m_spawnDelay = this->m_spawnDelay;
    v19 = fx_randomTable[this->m_randomSeed + 19];
    if ( m_spawnDelay < (float)((float)((float)(1.0 - v19) * v10->emitterDelay.min) + (float)(v19 * v10->emitterDelay.max)) )
    {
      this->m_spawnDelay = m_spawnDelay + dt;
      return;
    }
    this->m_flags = m_flags & 0xFFFFFFFB;
  }
  v20 = ParticleEmitter::InSpawnRange(this, pCamera, frustumPlaneCount);
  v21 = this->m_flags;
  v22 = v20;
  if ( (v21 & 0x40) != 0 )
  {
    v24 = 0;
  }
  else
  {
    ParticleCountSpawnedForAllStates = ParticleEmitter::GetParticleCountSpawnedForAllStates(this);
    v21 = this->m_flags;
    v24 = ParticleCountSpawnedForAllStates;
  }
  v25 = (v10->flags & 2) != 0;
  if ( (v21 & 0x40) != 0 && (v21 & 2) != 0 )
  {
    ParticleEmitter::Kill(this);
    return;
  }
  if ( (ParticleEmitter::GetSystemOwner(this)->m_flags & 1) == 0 || ParticleEmitter::GetSystemOwner(this)->m_boltedSpawnPosSet )
  {
    if ( !v22 && !v24 )
    {
      v26 = this->m_flags;
      m_emitterLife = this->m_emitterLife;
      this->m_lastSpawnTime = m_emitterLife;
      if ( (v26 & 8) == 0 && this->m_emitterLifeNormalized >= 1.0 )
      {
        ParticleEmitter::Kill(this);
        m_emitterLife = this->m_emitterLife;
        LOBYTE(v26) = this->m_flags;
      }
      this->m_emitterLife = m_emitterLife + dt;
      if ( v10->emitterLife.min != 0.0 || v10->emitterLife.max != 0.0 )
        this->m_emitterLifeNormalized = (float)(m_emitterLife + dt) / this->m_emitterLifeMax;
      if ( v25 && (v26 & 1) == 0 )
        ParticleEmitter::Kill(this);
      if ( (this->m_flags & 0x40) == 0 )
      {
        this->m_flags |= 0x80u;
        v28 = ParticleEmitter::GetSystemOwner(this);
        v28->m_flags |= 0x2000000ui64;
      }
      return;
    }
    if ( (this->m_flags & 0x40) == 0 || ParticleEmitter::InitParticleData(this) )
    {
      m_pParticleStateData = this->m_pParticleStateData;
      if ( (m_pParticleStateData->m_particleState.m_pStateDef->flags & 0x400) == 0 || !m_pParticleStateData->m_particleState.m_pModulePhysicsLight || m_pParticleStateData->m_particleState.m_physicsFXPipelineInstance )
        goto LABEL_64;
      if ( !m_pParticleStateData->m_particleState.m_pendingPhysicsFXPipelineCreation || (this->m_flags & 2) != 0 )
      {
        this->m_flags |= 0x80u;
        v30 = ParticleEmitter::GetSystemOwner(this);
        v30->m_flags |= 0x2000000ui64;
        ParticleEmitter::Kill(this);
      }
      if ( (ParticleEmitter::GetSystemOwner(this)->m_flags & 0x40000) != 0 )
      {
LABEL_64:
        ParticleEmitter::UpdateLiveTweakingData(this, v10);
        if ( v25 && this->m_emitterLife == 0.0 )
        {
          if ( v22 )
          {
            if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 441, ASSERT_TYPE_ASSERT, "(particleCountSpawnedForAllStates == 0)", (const char *)&queryFormat, "particleCountSpawnedForAllStates == 0") )
              __debugbreak();
            m_burstCount = this->m_burstCount;
            v32 = this;
            if ( m_burstCount )
            {
              ParticleEmitter::SpawnParticles(this, m_burstCount, currentTime, pCamera);
              goto LABEL_74;
            }
          }
          else
          {
            v32 = this;
          }
          ParticleEmitter::Kill(v32);
        }
LABEL_74:
        if ( (this->m_flags & 1) == 0 )
        {
          if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 457, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
            __debugbreak();
          v33 = this->m_flags;
          if ( (v33 & 8) == 0 && this->m_emitterLifeNormalized >= 1.0 || (v33 & 2) != 0 )
          {
            if ( ParticleEmitter::GetParticleCountSpawnedForAllStates(this) )
            {
              v75 = this->m_flags;
              if ( (v75 & 0x10) != 0 )
              {
                this->m_pParticleStateData->m_particleData.m_particleCountDelayed = 0;
                v75 = this->m_flags;
              }
              v36 = v75 >> 1;
              goto LABEL_135;
            }
            ParticleEmitter::Kill(this);
          }
          else
          {
            v34 = (v33 & 0x10) != 0;
            if ( !v22 )
            {
              if ( v34 )
                this->m_pParticleStateData->m_particleData.m_particleCountDelayed = 0;
              this->m_lastSpawnTime = this->m_emitterLife;
              goto LABEL_137;
            }
            if ( v34 )
            {
              if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 976, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
                __debugbreak();
              if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 977, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
                __debugbreak();
              if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 978, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
                __debugbreak();
              m_particleCountDelayed = this->m_pParticleStateData->m_particleData.m_particleCountDelayed;
              if ( m_particleCountDelayed )
                ParticleEmitter::EmitDelayedParticles(this, m_particleCountDelayed, currentTime, pCamera);
            }
            if ( !v25 )
            {
              m_particleCountMax = this->m_particleCountMax;
              if ( v24 < m_particleCountMax )
              {
                m_emitterLife_low = LODWORD(this->m_emitterLife);
                v39 = *(float *)&m_emitterLife_low - this->m_lastSpawnTime;
                m_spawnRate = 0.0;
                v41 = (v10->flags & 0x200) != 0;
                if ( v41 )
                {
                  v42 = _mm128_sub_ps(ParticleEmitter::GetSystemOwner(this)->m_systemTransform.w.v, this->m_lastSpawnPos.v);
                  _XMM2 = _mm128_mul_ps(v42, v42);
                  __asm
                  {
                    vinsertps xmm0, xmm2, xmm2, 8
                    vhaddps xmm1, xmm0, xmm0
                    vhaddps xmm0, xmm1, xmm1
                  }
                  v47 = (float)(_mm_sqrt_ps(_XMM0).m128_f32[0] * this->m_emitByDistanceDensity) + this->m_particleRemainder;
                }
                else
                {
                  ParticleState = ParticleEmitter::GetParticleState(this, 0);
                  m_pModuleEmissionGraph = (ParticleModuleEmissionGraph *)this->m_pModuleEmissionGraph;
                  v50.pModuleSpawnShape = (const ParticleModuleInitSpawnShape *)ParticleState->m_spawnShapeTypeModule;
                  if ( m_pModuleEmissionGraph )
                  {
                    if ( (m_pModuleEmissionGraph->m_flags & 0x8000) != 0 )
                      m_gameScrubbedCurve = this->m_gameScrubbedCurve;
                    else
                      m_gameScrubbedCurve = this->m_emitterLifeNormalized;
                    SpawnRate = ParticleModuleEmissionGraph::GetSpawnRate(m_pModuleEmissionGraph, m_gameScrubbedCurve, this->m_randomSeed);
                    m_spawnRate = *(float *)&SpawnRate;
                  }
                  else if ( !v50.pModuleSpawnShape || (v50.pModuleSpawnShape->m_flags & 1) != 0 || (v53 = ParticleEmitter::GetEmitterDef(this), v54 = v53, v53->particleSpawnShapeRange.min == 0.0) && v53->particleSpawnShapeRange.max == 0.0 || ParticleEmitter::GetEmitterDef(this)->numStates > 1u )
                  {
                    m_spawnRate = this->m_spawnRate;
                  }
                  else
                  {
                    _XMM7 = LODWORD(v54->particleSpawnShapeRange.max);
                    __asm { vminss  xmm6, xmm7, xmm8 }
                    v57 = ParticleEmitter::GetParticleState(this, 0);
                    *(double *)&m_emitterLife_low = ParticleModuleInitSpawnShape::GetVolumeSize((ParticleModuleInitSpawnShape *)v50.pModuleSpawnShape, v57);
                    v59 = m_emitterLife_low;
                    *(float *)&v59 = *(float *)&m_emitterLife_low - *(float *)&_XMM6;
                    _XMM1 = v59;
                    __asm
                    {
                      vmaxss  xmm0, xmm7, xmm8
                      vmaxss  xmm3, xmm1, xmm9
                    }
                    v63 = _XMM0;
                    *(float *)&v63 = *(float *)&_XMM0 - *(float *)&_XMM6;
                    _XMM1 = v63;
                    __asm { vmaxss  xmm2, xmm1, xmm11 }
                    v66 = _XMM3;
                    *(float *)&v66 = *(float *)&_XMM3 / *(float *)&_XMM2;
                    _XMM3 = v66;
                    __asm { vminss  xmm4, xmm3, xmm11 }
                    *(float *)&_XMM7 = *(float *)&_XMM4 * (float)(*(float *)&_XMM4 * *(float *)&_XMM4);
                    *(float *)&_XMM6 = ParticleEmitter::GetEmitterDef(this)->particleSpawnRate.max;
                    m_spawnRate = (float)((float)(1.0 - *(float *)&_XMM7) * ParticleEmitter::GetEmitterDef(this)->particleSpawnRate.min) + (float)(*(float *)&_XMM7 * *(float *)&_XMM6);
                  }
                  v47 = (float)(m_spawnRate * v39) + this->m_particleRemainder;
                }
                _XMM1 = 0i64;
                __asm { vroundss xmm1, xmm1, xmm2, 1 }
                v70 = (int)*(float *)&_XMM1;
                if ( (int)*(float *)&_XMM1 )
                {
                  v71 = m_particleCountMax - v24;
                  v72 = (float)v70;
                  v73 = v47 - v72;
                  if ( v70 + v24 <= m_particleCountMax )
                    v71 = (int)*(float *)&_XMM1;
                  this->m_particleRemainder = v73;
                  ParticleEmitter::SpawnParticles(this, v71, currentTime, pCamera);
                }
                else if ( this->m_emitterLife == 0.0 && !v41 && (m_spawnRate > 0.0 || !this->m_pModuleEmissionGraph) )
                {
                  v74 = (int)(float)(m_spawnRate * 0.016666668);
                  if ( v74 < 1 )
                    v74 = 1;
                  if ( (int)m_particleCountMax < v74 )
                    v74 = m_particleCountMax;
                  ParticleEmitter::SpawnParticles(this, v74, currentTime, pCamera);
                }
              }
              goto LABEL_137;
            }
            if ( ParticleEmitter::GetParticleCountRunningForAllStates(this) == this->m_burstCount || !ParticleEmitter::GetParticleCountSpawnedForFirstState(this) )
            {
              v36 = ParticleEmitter::GetEmitterDef(this)->flags >> 3;
LABEL_135:
              if ( (v36 & 1) == 0 )
                ParticleEmitter::Stop(this);
            }
          }
        }
LABEL_137:
        if ( (this->m_flags & 1) == 0 )
          ParticleEmitter::BatchUpdate(this, dt, currentTime, pCamera);
        if ( (this->m_flags & 8) == 0 )
          this->m_emitterLifeNormalized = this->m_emitterLife / this->m_emitterLifeMax;
        this->m_profilerUpdateTime = Sys_Microseconds() - v76;
      }
    }
  }
}

/*
==============
ParticleEmitter::UpdateBeamChildTransform
==============
*/
void ParticleEmitter::UpdateBeamChildTransform(ParticleEmitter *this)
{
  unsigned int numStates; 
  __int64 v3; 
  __int64 v4; 
  ParticleEmitter::ParticleStateData *v5; 

  if ( (this->m_flags & 0x40) == 0 )
  {
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    if ( numStates )
    {
      v3 = 0i64;
      v4 = numStates;
      do
      {
        v5 = &this->m_pParticleStateData[v3];
        if ( v5->m_particleState.m_systemBeamChild )
          ParticleState::UpdateBeamChildTransform(&v5->m_particleState, this->m_pSystemOwner->m_localClientNum);
        ++v3;
        --v4;
      }
      while ( v4 );
    }
  }
}

/*
==============
ParticleEmitter::UpdateChildTransforms
==============
*/
void ParticleEmitter::UpdateChildTransforms(ParticleEmitter *this)
{
  unsigned int numStates; 
  __int64 v3; 
  __int64 v4; 
  ParticleEmitter::ParticleStateData *v5; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 

  numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
  if ( numStates )
  {
    v3 = numStates;
    v4 = 0i64;
    do
    {
      v5 = &this->m_pParticleStateData[v4];
      if ( !v5 )
      {
        SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
        Def = ParticleSystem::GetDef(SystemOwner);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5170, ASSERT_TYPE_ASSERT, "(pParticleState)", "%s\n\tVFX ASSERT for effect: %s\n", "pParticleState", Def->name) )
          __debugbreak();
      }
      if ( v5->m_particleState.m_pStateDef->elementType == 9 )
        ParticleState::Update_RunnerChildrenTransforms(&v5->m_particleState);
      ++v4;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
ParticleEmitter::UpdateLiveTweakingData
==============
*/
void ParticleEmitter::UpdateLiveTweakingData(ParticleEmitter *this, const ParticleEmitterDef *const pEmitterDef)
{
  bool v4; 
  unsigned int m_flags; 
  float v6; 
  float v7; 
  float v8; 
  bool v9; 
  unsigned int v10; 
  __int64 m_randomSeed; 
  const ParticleEmitterDef *EmitterDef; 
  signed int min; 
  int v14; 
  int v15; 
  bool v16; 
  __int64 v17; 
  unsigned int numStates; 
  __int64 v19; 

  if ( !pEmitterDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2096, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
    __debugbreak();
  v4 = pEmitterDef->emitterLife.min == 0.0 && pEmitterDef->emitterLife.max == 0.0;
  m_flags = this->m_flags;
  if ( v4 )
  {
    v6 = FLOAT_3_4028235e38;
    this->m_flags = m_flags | 8;
    v7 = 0.0;
  }
  else
  {
    this->m_flags = m_flags & 0xFFFFFFF7;
    v8 = fx_randomTable[this->m_randomSeed + 18];
    v6 = (float)(v8 * pEmitterDef->emitterLife.max) + (float)((float)(1.0 - v8) * pEmitterDef->emitterLife.min);
    v7 = this->m_emitterLife / v6;
  }
  this->m_emitterLifeMax = v6;
  this->m_emitterLifeNormalized = v7;
  v9 = pEmitterDef->particleDelay.min == 0.0 && pEmitterDef->particleDelay.max == 0.0;
  v10 = this->m_flags & 0xFFFFFFEF;
  if ( !v9 )
    v10 = this->m_flags | 0x10;
  m_randomSeed = this->m_randomSeed;
  this->m_flags = v10;
  this->m_spawnRate = (float)((float)(1.0 - fx_randomTable[m_randomSeed + 20]) * pEmitterDef->particleSpawnRate.min) + (float)(fx_randomTable[m_randomSeed + 20] * pEmitterDef->particleSpawnRate.max);
  this->m_emitByDistanceDensity = (float)((float)(1.0 - fx_randomTable[m_randomSeed + 21]) * pEmitterDef->emitByDistanceDensity.min) + (float)(fx_randomTable[m_randomSeed + 21] * pEmitterDef->emitByDistanceDensity.max);
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  min = EmitterDef->particleBurstCount.min;
  v14 = EmitterDef->particleBurstCount.max - min;
  if ( v14 )
  {
    v15 = Particle_RandomIndex(this->m_randomSeed, FXRAND_SPAWN_COUNT, v14 + 1);
    v16 = EmitterDef->particleBurstCount.min + v15 < 0;
    min = EmitterDef->particleBurstCount.min + v15;
    v17 = 0i64;
  }
  else
  {
    v17 = 0i64;
    v16 = min < 0;
  }
  if ( v16 )
    min = 0;
  this->m_burstCount = min;
  ParticleEmitter::CalculateParticleCountMax(this);
  numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
  if ( numStates )
  {
    v19 = numStates;
    do
    {
      ParticleState::UpdateLiveTweakingData(&this->m_pParticleStateData[v17++].m_particleState);
      --v19;
    }
    while ( v19 );
  }
}

/*
==============
ParticleEmitter::UpdateParentVelocity
==============
*/
void ParticleEmitter::UpdateParentVelocity(ParticleEmitter *this, int numParticles, float4 *parentVelocityArray)
{
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  LocalClientNum_t m_localClientNum; 
  const ParticleSystem::ParticleBolt *SystemOwner; 

  m_pParticleStateData = this->m_pParticleStateData;
  m_localClientNum = this->m_pSystemOwner->m_localClientNum;
  SystemOwner = (const ParticleSystem::ParticleBolt *)ParticleEmitter::GetSystemOwner(this);
  ParticleEmitter::InitParentVelocityArray(this, m_localClientNum, &m_pParticleStateData->m_particleState, SystemOwner[5].offsetPos.v.m128_i8[0] & 1, SystemOwner + 4, numParticles, parentVelocityArray);
}

