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

void __fastcall ParticleEmitter::BatchUpdate(ParticleEmitter *this, double dt, int currentTime, const FxCamera *pCamera)
{
  bool v11; 
  const FxCamera *v12; 
  int v13; 
  ParticleSystem *v19; 
  __int64 numStates; 
  __int64 v21; 
  __int64 v22; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  const float4 *pModule; 
  const float4 *v25; 
  const float4 *v26; 
  ParticleEmitter::ParticleStateData *v28; 
  const ParticleStateDef *m_pStateDef; 
  __int64 numModules; 
  ParticleState::ModuleData *v31; 
  unsigned int m_particleCountRunning; 
  ParticleModule *v33; 
  __int64 v35; 
  ParticleEmitter::ParticleStateData *v38; 
  ParticleData *v39; 
  unsigned __int8 *ParticleDataArray; 
  unsigned __int8 *v41; 
  unsigned __int8 *v43; 
  unsigned int v44; 
  __int64 v45; 
  unsigned int v46; 
  unsigned __int16 v47; 
  signed __int64 v48; 
  signed __int64 v49; 
  bool v50; 
  bool v51; 
  bool v53; 
  bool v58; 
  bool v62; 
  char *v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  unsigned int v76; 
  _WORD *v77; 
  ParticleEmitter::ParticleStateData *v78; 
  const ParticleStateDef *v79; 
  __int64 v80; 
  ParticleState::ModuleData *v81; 
  unsigned int v82; 
  ParticleModule *v83; 
  char *fmt; 
  int fmta; 
  int fmtb; 
  bool v91; 
  __int64 v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  const ParticleSystem *SystemOwner; 
  __int64 v97; 
  char v102; 
  void *retaddr; 
  bool v104; 
  int v105; 
  unsigned __int16 m_randomSeed; 

  _RAX = &retaddr;
  v11 = !this->m_isRunning;
  __asm { vmovaps xmmword ptr [rax-68h], xmm7 }
  v12 = pCamera;
  __asm { vmovaps xmmword ptr [rax-98h], xmm10 }
  v13 = currentTime;
  __asm { vmovaps [rsp+118h+var_A8], xmm11 }
  _RBP = this;
  __asm { vmovaps xmm7, xmm1 }
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1980, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  _RAX = ParticleEmitter::GetEmitterDef(_RBP);
  __asm
  {
    vmovss  xmm10, dword ptr [rax+14h]
    vmovss  xmm11, dword ptr [rax+18h]
  }
  LODWORD(_RAX) = _RAX->flags;
  v104 = ((unsigned __int8)_RAX & 8) != 0;
  v91 = ((unsigned __int8)_RAX & 0x10) != 0;
  SystemOwner = ParticleEmitter::GetSystemOwner(_RBP);
  v19 = (ParticleSystem *)SystemOwner;
  v92 = 0i64;
  numStates = (unsigned int)ParticleEmitter::GetEmitterDef(_RBP)->numStates;
  v105 = numStates;
  if ( (_DWORD)numStates )
  {
    v21 = 0i64;
    v93 = numStates;
    v22 = 0i64;
    do
    {
      if ( (v19->m_flags & 0x100) == 0 )
      {
        m_pParticleStateData = _RBP->m_pParticleStateData;
        if ( m_pParticleStateData[v21].m_particleState.m_pStateDef->elementType == 1 )
        {
          pModule = (const float4 *)m_pParticleStateData[v21].m_particleState.m_elementTypeModule.pModule;
          if ( !pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2006, ASSERT_TYPE_ASSERT, "(pModuleInitBeam)", (const char *)&queryFormat, "pModuleInitBeam") )
            __debugbreak();
          v25 = pModule + 2;
          v26 = pModule + 1;
          if ( (pModule->v.m128_i8[8] & 2) != 0 )
            ParticleSystem::SetBeamCurvePoints(v19, v26, v25, pModule + 4, pModule + 5);
          else
            ParticleSystem::SetBeamPos(v19, v26, v25);
        }
      }
      __asm { vmovaps xmm1, xmm7; dt }
      ParticleEmitter::ParticleStateData::ProcessUpdateModules(&_RBP->m_pParticleStateData[v22], *(const float *)&_XMM1, v13, _RBP, v12);
      v28 = &_RBP->m_pParticleStateData[v21];
      if ( v28->m_particleState.m_isRunning && v28->m_particleData.m_particleCountRunning && (v28->m_particleState.m_pStateDef->flags & 1) == 0 )
      {
        if ( v28 == (ParticleEmitter::ParticleStateData *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 247, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
          __debugbreak();
        m_pStateDef = v28->m_particleState.m_pStateDef;
        if ( !m_pStateDef->moduleGroupDefs[2].disabled )
        {
          numModules = m_pStateDef->moduleGroupDefs[2].numModules;
          v31 = v28->m_particleState.m_pModuleDataList[2];
          m_particleCountRunning = v28->m_particleData.m_particleCountRunning;
          if ( numModules > 0 )
          {
            do
            {
              v33 = (ParticleModule *)v31->pModule;
              if ( v31->pModule->m_type == PARTICLE_MODULE_TEST_BIRTH && (v33->m_flags & 0x201) == 0 )
              {
                __asm { vmovss  dword ptr [rsp+118h+fmt], xmm7 }
                ((void (__fastcall *)(ParticleModule *, ParticleData *, _QWORD, _QWORD, int, ParticleEmitter *, ParticleEmitter::ParticleStateData *))v31->pUpdateData->updateFunc)(v33, &v28->m_particleData, 0i64, m_particleCountRunning, fmta, _RBP, v28);
              }
              ++v31;
              --numModules;
            }
            while ( numModules );
          }
          v12 = pCamera;
        }
        v13 = currentTime;
      }
      v19 = (ParticleSystem *)SystemOwner;
      ++v22;
      ++v21;
      --v93;
    }
    while ( v93 );
    LODWORD(numStates) = v105;
  }
  __asm
  {
    vaddss  xmm0, xmm7, dword ptr [rbp+174h]
    vmovss  dword ptr [rbp+174h], xmm0
  }
  if ( (_DWORD)numStates )
  {
    __asm
    {
      vmovaps [rsp+118h+var_58], xmm6
      vmovaps [rsp+118h+var_78], xmm8
    }
    v35 = 0i64;
    v94 = 0i64;
    __asm
    {
      vmovaps [rsp+118h+var_88], xmm9
      vmovss  xmm9, cs:__real@3f800000
    }
    v97 = (unsigned int)numStates;
    v95 = (unsigned int)numStates;
    __asm { vxorps  xmm8, xmm8, xmm8 }
    do
    {
      v38 = _RBP->m_pParticleStateData;
      v39 = (ParticleData *)((char *)&v38->m_particleData + v35);
      if ( (ParticleEmitter::ParticleStateData *)((char *)v38 + v35) == (ParticleEmitter::ParticleStateData *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
        __debugbreak();
      if ( !v39->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      ParticleDataArray = ParticleData::GetParticleDataArray(v39, PARTICLE_DATA_RANDOM_SEED);
      if ( !v39->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 347, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v41 = ParticleData::GetParticleDataArray(v39, PARTICLE_DATA_LIFE);
      if ( !v39->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 346, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      _RBX = ParticleData::GetParticleDataArray(v39, PARTICLE_DATA_SPAWN_TIME);
      if ( !v39->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 354, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v43 = ParticleData::GetParticleDataArray(v39, PARTICLE_DATA_FLAGS);
      v44 = v39->m_particleCountRunning;
      v45 = 0i64;
      v46 = 0;
      m_randomSeed = _RBP->m_randomSeed;
      v47 = _RBP->m_pSystemOwner->m_randomSeed;
      if ( v44 )
      {
        v48 = v43 - _RBX;
        v49 = ParticleDataArray - _RBX;
        v50 = v41 < _RBX;
        _RSI = v41 - _RBX;
        v51 = v50 || _RSI == 0;
        do
        {
          __asm { vcomiss xmm8, dword ptr [rbx] }
          if ( !v51 )
          {
            v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2046, ASSERT_TYPE_ASSERT, "(spawnTimeArray[i] >= 0.0f)", (const char *)&queryFormat, "spawnTimeArray[i] >= 0.0f");
            v50 = 0;
            v51 = !v53;
            if ( v53 )
              __debugbreak();
          }
          __asm
          {
            vsubss  xmm0, xmm9, dword ptr [rcx+rax*4]
            vmulss  xmm1, xmm11, dword ptr [rcx+rax*4]
            vmulss  xmm2, xmm0, xmm10
            vaddss  xmm6, xmm2, xmm1
            vcomiss xmm6, xmm8
          }
          if ( v51 )
          {
            v58 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2049, ASSERT_TYPE_ASSERT, "(particleLife > 0.0f)", (const char *)&queryFormat, "particleLife > 0.0f");
            v50 = 0;
            if ( v58 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+174h]
            vsubss  xmm1, xmm0, dword ptr [rbx]
            vdivss  xmm2, xmm1, xmm6
            vcomiss xmm2, xmm8
            vmovss  dword ptr [rsi+rbx], xmm2
          }
          if ( v50 )
          {
            v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2052, ASSERT_TYPE_ASSERT, "(lifeArray[i] >= 0.0f)", (const char *)&queryFormat, "lifeArray[i] >= 0.0f");
            v50 = 0;
            if ( v62 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm4, dword ptr [rsi+rbx]
            vcomiss xmm4, xmm9
          }
          if ( !v50 )
          {
            if ( v104 )
            {
              if ( v91 )
              {
                __asm
                {
                  vmovaps xmm1, xmm4
                  vmovaps xmm2, xmm1
                  vxorps  xmm1, xmm1, xmm1
                  vroundss xmm3, xmm1, xmm2, 1
                  vsubss  xmm0, xmm4, xmm3
                  vmovss  dword ptr [rsi+rbx], xmm0
                }
                *(float *)_RBX = _RBP->m_emitterLife;
                *(_DWORD *)&_RBX[v49] = (10111 * (unsigned __int8)v46 + currentTime + m_randomSeed + (unsigned int)v47) % 0x3FE9;
              }
              else
              {
                *(_DWORD *)&_RBX[_RSI] = 1065353216;
              }
            }
            else
            {
              *(_DWORD *)&_RBX[v48] |= 1u;
            }
          }
          ++v46;
          _RBX += 4;
          v50 = v46 < v44;
          v51 = v46 <= v44;
        }
        while ( v46 < v44 );
        v45 = 0i64;
      }
      v35 = v94 + 528;
      v11 = v95-- == 1;
      v94 += 528i64;
    }
    while ( !v11 );
    __asm
    {
      vmovaps xmm9, [rsp+118h+var_88]
      vmovaps xmm8, [rsp+118h+var_78]
      vmovaps xmm6, [rsp+118h+var_58]
    }
    do
    {
      v72 = (char *)_RBP->m_pParticleStateData + v45;
      if ( v72[380] && *((_DWORD *)v72 + 106) && (*(_BYTE *)(*((_QWORD *)v72 + 9) + 16i64) & 1) == 0 )
      {
        if ( v72 == (char *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 223, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
          __debugbreak();
        v73 = *((_QWORD *)v72 + 9);
        if ( !*(_BYTE *)(*(_QWORD *)v73 + 44i64) )
        {
          v74 = *(int *)(*(_QWORD *)v73 + 40i64);
          v75 = *((_QWORD *)v72 + 12);
          v76 = *((_DWORD *)v72 + 106);
          if ( v74 > 0 )
          {
            do
            {
              v77 = *(_WORD **)v75;
              if ( (unsigned __int16)(**(_WORD **)v75 - 56) > 1u && (*((_DWORD *)v77 + 1) & 0x201) == 0 )
              {
                __asm { vmovss  dword ptr [rsp+118h+fmt], xmm7 }
                (**(void (__fastcall ***)(_WORD *, __int64, _QWORD, _QWORD, char *, ParticleEmitter *, char *))(v75 + 8))(v77, (__int64)(v72 + 416), 0i64, v76, fmt, _RBP, v72);
              }
              v75 += 16i64;
              --v74;
            }
            while ( v74 );
          }
        }
      }
      v78 = &_RBP->m_pParticleStateData[v92];
      if ( v78->m_particleState.m_isRunning && v78->m_particleData.m_particleCountRunning && (v78->m_particleState.m_pStateDef->flags & 1) == 0 )
      {
        if ( v78 == (ParticleEmitter::ParticleStateData *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 268, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
          __debugbreak();
        v79 = v78->m_particleState.m_pStateDef;
        if ( !v79->moduleGroupDefs[2].disabled )
        {
          v80 = v79->moduleGroupDefs[2].numModules;
          v81 = v78->m_particleState.m_pModuleDataList[2];
          v82 = v78->m_particleData.m_particleCountRunning;
          if ( v80 > 0 )
          {
            do
            {
              v83 = (ParticleModule *)v81->pModule;
              if ( v81->pModule->m_type == PARTICLE_MODULE_TEST_DEATH && (v83->m_flags & 0x201) == 0 )
              {
                __asm { vmovss  dword ptr [rsp+118h+fmt], xmm7 }
                ((void (__fastcall *)(ParticleModule *, ParticleData *, _QWORD, _QWORD, int, ParticleEmitter *, ParticleEmitter::ParticleStateData *))v81->pUpdateData->updateFunc)(v83, &v78->m_particleData, 0i64, v82, fmtb, _RBP, v78);
              }
              ++v81;
              --v80;
            }
            while ( v80 );
          }
        }
      }
      v45 = v92 * 528 + 528;
      v11 = v97-- == 1;
      ++v92;
    }
    while ( !v11 );
  }
  _R11 = &v102;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-68h]
    vmovaps xmm11, xmmword ptr [r11-78h]
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

  __asm
  {
    vmovups xmm0, cs:__xmm@0000000000000000000000003f800000
    vmovups xmm1, cs:__xmm@000000003f8000000000000000000000
    vmovups xmmword ptr [r9], xmm0
    vmovups xmmword ptr [r9+20h], xmm1
    vmovups xmm0, xmmword ptr [r8]
    vsubps  xmm0, xmm0, xmmword ptr [rdx]
  }
  _RBX = startPos;
  _RDI = outTransform;
  __asm { vmovups xmmword ptr [rsp+38h+lookAtInput.v], xmm0 }
  Particle_GenerateMatrixFromLookAt(&lookAtInput, outTransform);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovdqu xmmword ptr [rdi+30h], xmm0
  }
}

/*
==============
ParticleEmitter::CalculateParticleCountMax
==============
*/
unsigned int ParticleEmitter::CalculateParticleCountMax(ParticleEmitter *this)
{
  unsigned int result; 

  _RAX = ParticleEmitter::GetEmitterDef(this);
  _RCX = this->m_pModuleEmissionGraph;
  if ( _RCX )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+18h]
      vmaxss  xmm2, xmm0, dword ptr [rax+14h]
      vmovss  xmm1, dword ptr [rcx+1Ch]
    }
    if ( (_RCX->m_flags & 0x10) != 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+2Ch]
        vmaxss  xmm1, xmm0, xmm1
      }
    }
    __asm
    {
      vmulss  xmm2, xmm1, xmm2
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm3, xmm1, xmm2, 2
      vcvttss2si eax, xmm3
    }
    this->m_particleCountMax = result;
  }
  else
  {
    result = _RAX->particleCountMax;
    this->m_particleCountMax = result;
  }
  return result;
}

/*
==============
ParticleEmitter::CheckPulse
==============
*/

void __fastcall ParticleEmitter::CheckPulse(ParticleEmitter *this, double dt, const int currentTime)
{
  const dvar_t *v4; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  ParticleSystem *v9; 
  const ParticleSystemDef *v10; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int m_flags; 
  const ParticleEmitterDef *v13; 
  unsigned int ParticleCountSpawnedForAllStates; 
  unsigned int v15; 
  bool v16; 
  bool v17; 
  ParticleSystem *v22; 

  v4 = particle_system_culling_update;
  _RBX = this;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !particle_system_culling_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RBX);
    Def = ParticleSystem::GetDef(SystemOwner);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 588, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal( particle_system_culling_update ))", "%s\n\tVFX ASSERT for effect: %s\n", "Dvar_GetBool_Internal( particle_system_culling_update )", Def->name) )
      __debugbreak();
  }
  if ( (_RBX->m_flags & 0x220) != 0 || (ParticleEmitter::GetEmitterDef(_RBX)->flags & 1) != 0 || (_RBX->m_flags & 1) != 0 )
  {
    v9 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RBX);
    v10 = ParticleSystem::GetDef(v9);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 590, ASSERT_TYPE_ASSERT, "(CanUpdate())", "%s\n\tVFX ASSERT for effect: %s\n", "CanUpdate()", v10->name) )
      __debugbreak();
  }
  if ( (ParticleEmitter::GetSystemOwner(_RBX)->m_flags & 0x100000) != 0 )
  {
    EmitterDef = ParticleEmitter::GetEmitterDef(_RBX);
    m_flags = _RBX->m_flags;
    v13 = EmitterDef;
    if ( (m_flags & 0x40) != 0 )
    {
      v15 = 0;
    }
    else
    {
      ParticleCountSpawnedForAllStates = ParticleEmitter::GetParticleCountSpawnedForAllStates(_RBX);
      m_flags = _RBX->m_flags;
      v15 = ParticleCountSpawnedForAllStates;
    }
    v16 = (v13->flags & 2) != 0;
    v17 = (m_flags & 8) != 0;
    if ( !v17 )
    {
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rbx+174h]
        vmovss  dword ptr [rbx+174h], xmm0
        vaddss  xmm0, xmm6, dword ptr [rbx+180h]
        vmovss  dword ptr [rbx+180h], xmm0
      }
    }
    if ( !v16 || v15 )
    {
      if ( !v17 )
      {
        if ( (v13->flags & 8) == 0 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+17Ch]
            vaddss  xmm1, xmm0, dword ptr [rdi+18h]
            vcomiss xmm1, dword ptr [rbx+174h]
          }
        }
        goto LABEL_26;
      }
      v22 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RBX);
      if ( (ParticleSystem::GetDef(v22)->flags & 0x40000) == 0 || (_RBX->m_flags & 2) == 0 )
        goto LABEL_26;
    }
    ParticleEmitter::Kill(_RBX);
  }
LABEL_26:
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  char v4; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdx+1Ch]
  }
  if ( v4 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [r9], xmm0
    }
    prevPlacementOut->scale = curPlacementIn->scale;
    if ( velocityIn )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+10h]
        vmovss  xmm4, cs:__real@3c888889
        vmulss  xmm1, xmm4, dword ptr [r8]
        vsubss  xmm1, xmm0, xmm1
        vmovss  dword ptr [r9+10h], xmm1
        vmulss  xmm3, xmm4, dword ptr [r8+4]
        vmovss  xmm0, dword ptr [rcx+14h]
        vsubss  xmm1, xmm0, xmm3
        vmovss  dword ptr [r9+14h], xmm1
        vmulss  xmm3, xmm4, dword ptr [r8+8]
        vmovss  xmm0, dword ptr [rcx+18h]
        vsubss  xmm1, xmm0, xmm3
        vmovss  dword ptr [r9+18h], xmm1
      }
    }
    else
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rcx+10h]
        vmovsd  qword ptr [r9+10h], xmm0
      }
      prevPlacementOut->base.origin.v[2] = curPlacementIn->base.origin.v[2];
    }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx]
      vmovups ymmword ptr [r9], ymm0
    }
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
  __int64 v19; 
  __int64 v20; 

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
      LODWORD(v19) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 463, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v6->m_particleState.m_particleCountMax) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v20) = v6->m_particleState.m_particleCountMax;
      LODWORD(v19) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 464, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v20) )
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
      LODWORD(v19) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 493, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v6->m_particleState.m_particleCountMax) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v20) = v6->m_particleState.m_particleCountMax;
      LODWORD(v19) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 494, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v20) )
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
        LODWORD(v20) = v6->m_particleState.m_particleCountMax;
        LODWORD(v19) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 534, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
      {
        LODWORD(v20) = v6->m_particleState.m_particleCountMax;
        LODWORD(v19) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 535, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v20) )
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
        LODWORD(v20) = v6->m_particleState.m_particleCountMax;
        LODWORD(v19) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 582, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
      {
        LODWORD(v20) = v6->m_particleState.m_particleCountMax;
        LODWORD(v19) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 583, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      _R8 = v6->m_particleState.m_physicsInstanceIDList;
      _RCX = v5;
      _RDX = 3 * v4;
      __asm
      {
        vmovsd  xmm0, qword ptr [r8+rdx*4]
        vmovsd  qword ptr [r8+rcx*4], xmm0
      }
      _R8[_RCX].createListIndex = _R8[v4].createListIndex;
      m_pStateDef = v6->m_particleState.m_pStateDef;
    }
  }
  if ( (m_pStateDef->flags & 0x10000) != 0 )
  {
    if ( !v6->m_particleState.m_onImpactDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 434, ASSERT_TYPE_ASSERT, "(m_onImpactDataList)", (const char *)&queryFormat, "m_onImpactDataList") )
      __debugbreak();
    if ( (unsigned int)v4 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v20) = v6->m_particleState.m_particleCountMax;
      LODWORD(v19) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 436, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v20) = v6->m_particleState.m_particleCountMax;
      LODWORD(v19) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 437, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    _R8 = v6->m_particleState.m_onImpactDataList;
    _RDX = 10 * v4;
    _RCX = 10 * v5;
    __asm
    {
      vmovups ymm0, ymmword ptr [r8+rdx*8]
      vmovups ymmword ptr [r8+rcx*8], ymm0
      vmovups ymm1, ymmword ptr [r8+rdx*8+20h]
      vmovups ymmword ptr [r8+rcx*8+20h], ymm1
      vmovups xmm0, xmmword ptr [r8+rdx*8+40h]
      vmovups xmmword ptr [r8+rcx*8+40h], xmm0
    }
    m_pStateDef = v6->m_particleState.m_pStateDef;
  }
  if ( (m_pStateDef->flags & 0x400000000i64) != 0 )
  {
    if ( !v6->m_particleState.m_timeInStateList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 518, ASSERT_TYPE_ASSERT, "(m_timeInStateList)", (const char *)&queryFormat, "m_timeInStateList") )
      __debugbreak();
    if ( (unsigned int)v4 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v20) = v6->m_particleState.m_particleCountMax;
      LODWORD(v19) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 520, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= v6->m_particleState.m_particleCountMax )
    {
      LODWORD(v20) = v6->m_particleState.m_particleCountMax;
      LODWORD(v19) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 521, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( m_particleCountMax )", "toIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v19, v20) )
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

  __asm
  {
    vmovups xmm0, xmmword ptr [r8+20h]
    vmovups xmmword ptr [r9], xmm0
    vmovups xmm1, xmmword ptr [r8+30h]
    vmovups xmmword ptr [r9+10h], xmm1
    vmovups xmm0, xmmword ptr [r8+40h]
    vmovups xmmword ptr [r9+20h], xmm0
    vmovups xmm1, xmmword ptr [r8+50h]
    vmovups xmmword ptr [r9+30h], xmm1
    vmovups xmm0, xmmword ptr [r8+60h]
    vmovups xmmword ptr [r9+40h], xmm0
    vmovups xmm1, xmmword ptr [r8+70h]
    vmovups xmmword ptr [r9+50h], xmm1
    vmovups xmm0, xmmword ptr [r8+80h]
    vmovups xmmword ptr [r9+60h], xmm0
    vmovups xmm0, xmmword ptr [r8+90h]
    vmovups xmmword ptr [r9+70h], xmm0
    vmovups xmm1, xmmword ptr [r8+0A0h]
    vmovups xmmword ptr [r9+80h], xmm1
    vmovups xmm0, xmmword ptr [r8+0B0h]
    vmovups xmmword ptr [r9+90h], xmm0
    vmovups xmm1, xmmword ptr [r8+0C0h]
    vmovups xmmword ptr [r9+0A0h], xmm1
    vmovups xmm0, xmmword ptr [r8+0D0h]
    vmovups xmmword ptr [r9+0B0h], xmm0
  }
  m_shaderGraphOptions = initMaterial->m_shaderGraphOptions;
  _RBX = outMaterialConsts;
  _RDI = shaderParams;
  if ( m_shaderGraphOptions == PARTICLE_SHADER_GRAPH_SPHERICALZ )
  {
    outMaterialConsts->depthScanColor = shaderParams->rgba0;
    outMaterialConsts->depthScanOutlineColor = shaderParams->rgba1;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+20h]
      vmulss  xmm1, xmm0, xmm0
      vmovaps [rsp+48h+var_18], xmm6
      vmovaps [rsp+48h+var_28], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vsubss  xmm0, xmm7, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm7; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+24h]
      vmulss  xmm4, xmm3, xmm3
      vmovaps xmm6, xmm0
      vsubss  xmm0, xmm7, xmm4; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm7, [rsp+48h+var_28]
      vmovss  dword ptr [rbx+80h], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
    _RBX->regionHighlightParms.v[1] = 0.0;
    _RBX->regionHighlightParms.v[3] = 0.0;
    __asm { vmovss  dword ptr [rbx+88h], xmm0 }
  }
  else if ( m_shaderGraphOptions == PARTICLE_SHADER_GRAPH_DEPTHSCAN )
  {
    outMaterialConsts->depthScanColor = shaderParams->rgba0;
    outMaterialConsts->depthScanOutlineColor = shaderParams->rgba1;
    __asm { vmovss  xmm0, dword ptr [rdx+24h] }
    *(_QWORD *)outMaterialConsts->regionHighlightParms.v = LODWORD(shaderParams->params0.v[0]);
    outMaterialConsts->regionHighlightParms.v[3] = 0.0;
    __asm { vmovss  dword ptr [r9+88h], xmm0 }
  }
}

/*
==============
ParticleEmitter::CullBasedOnAlphaThreshhold
==============
*/

bool __fastcall ParticleEmitter::CullBasedOnAlphaThreshhold(ParticleEmitter *this, const ParticleState *pParticleState, double cameraDistance, Particle_DrawData *r_particleDrawData)
{
  char v12; 
  bool v15; 
  const ParticleStateDef *m_pStateDef; 
  const ParticleSystemDef *Def; 
  const ParticleModuleInitOcclusionQuery *m_pModuleInitOcclusionQuery; 
  bool v20; 
  bool result; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
    vmovaps xmm1, xmm2; cameraDistance
  }
  _RSI = r_particleDrawData;
  _RDI = this;
  *(double *)&_XMM0 = ParticleEmitter::EvaluateDistanceFade(this, *(float *)&_XMM1);
  __asm
  {
    vcomiss xmm0, dword ptr [rdi+1A4h]
    vmovaps xmm7, xmm0
  }
  if ( v12 | v15 )
    goto LABEL_12;
  __asm
  {
    vmovups xmm6, cs:__xmm@000000003f8000003f8000003f800000
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v15 = pParticleState == NULL;
  if ( pParticleState )
  {
    m_pStateDef = pParticleState->m_pStateDef;
    v15 = (m_pStateDef->flags & 0x80000) == 0;
    if ( (m_pStateDef->flags & 0x80000) != 0 )
    {
      _RBP = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RDI);
      Def = ParticleSystem::GetDef(_RBP);
      v15 = (Def->flags & 0x40) == 0;
      if ( (Def->flags & 0x40) != 0 )
      {
        m_pModuleInitOcclusionQuery = pParticleState->m_pModuleInitOcclusionQuery;
        v15 = m_pModuleInitOcclusionQuery == NULL;
        if ( !m_pModuleInitOcclusionQuery )
        {
          v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2430, ASSERT_TYPE_ASSERT, "(pModuleInitOcclusionQuery)", (const char *)&queryFormat, "pModuleInitOcclusionQuery");
          v15 = !v20;
          if ( v20 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+220h]
          vcomiss xmm5, dword ptr [rdi+1A4h]
        }
        if ( v15 )
          goto LABEL_12;
        __asm
        {
          vmulss  xmm3, xmm5, dword ptr [rbx+18h]
          vmovss  xmm0, cs:__real@3f800000
          vmovups xmm6, cs:__xmm@000000003f8000003f8000003f800000
          vsubss  xmm1, xmm0, xmm5
          vmulss  xmm2, xmm1, dword ptr [rbx+14h]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm0, xmm4, dword ptr [rsi+70h]
          vmovss  dword ptr [rsi+70h], xmm0
          vmulss  xmm0, xmm4, dword ptr [rsi+74h]
          vmulss  xmm1, xmm5, xmm7
          vmovss  dword ptr [rsi+74h], xmm0
          vinsertps xmm6, xmm6, xmm1, 30h ; '0'
        }
      }
    }
  }
  __asm
  {
    vmulps  xmm2, xmm6, xmmword ptr [rsi+60h]
    vmovups xmmword ptr [rsi+60h], xmm2
    vshufps xmm0, xmm6, xmm6, 0FFh
    vmulps  xmm1, xmm0, xmmword ptr [rsi+30h]
    vshufps xmm2, xmm2, xmm2, 0FFh
    vmovups xmmword ptr [rsi+30h], xmm1
    vcomiss xmm2, dword ptr [rdi+1A4h]
  }
  if ( v15 )
  {
LABEL_12:
    result = 1;
    goto LABEL_13;
  }
  result = 0;
LABEL_13:
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
  return result;
}

/*
==============
ParticleEmitter::CullElementForDraw_Sprite
==============
*/
bool ParticleEmitter::CullElementForDraw_Sprite(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount, const ParticleState *pParticleState, float cameraDistance, Particle_DrawData *r_particleDrawData)
{
  bool v14; 
  bool result; 
  vec3_t center; 

  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  _RSI = r_particleDrawData;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2283, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2284, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+74h]
    vmaxss  xmm6, xmm0, dword ptr [rsi+70h]
  }
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2230, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  v14 = 0;
  if ( fx_cull_elem_draw->current.enabled )
  {
    __asm { vmovaps xmm3, xmm6; radius }
    v14 = FX_CullSphere(pCamera, frustumPlaneCount, &r_particleDrawData->posWorld, *(float *)&_XMM3, 0);
  }
  if ( particle_debug_draw->current.enabled || particle_debug_draw_cull_bounds->current.enabled )
  {
    __asm
    {
      vmovups xmm2, xmmword ptr [rsi+40h]
      vmovaps xmm1, xmm6; radius
      vmovss  dword ptr [rsp+98h+center], xmm2
      vextractps dword ptr [rsp+98h+center+4], xmm2, 1
      vextractps dword ptr [rsp+98h+center+8], xmm2, 2
    }
    Particle_DebugSphere(&center, *(float *)&_XMM1, &colorOrange, 1, 0);
  }
  if ( !v14 || pParticleState && (pParticleState->m_pStateDef->flags & 0x80000) != 0 && pParticleState->m_pModuleInitOcclusionQuery->m_offscreenRaycast )
  {
    __asm { vmovss  xmm2, [rsp+98h+cameraDistance]; cameraDistance }
    result = ParticleEmitter::CullBasedOnAlphaThreshhold(this, pParticleState, *(float *)&_XMM2, r_particleDrawData);
  }
  else
  {
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
  return result;
}

/*
==============
ParticleEmitter::CullElementForDraw_Tail
==============
*/

bool __fastcall ParticleEmitter::CullElementForDraw_Tail(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount, double cameraDistance, Particle_DrawData *r_particleDrawData)
{
  bool v17; 
  bool result; 
  float fmt; 
  float radius; 
  vec3_t center; 
  vec3_t rotation; 
  vec3_t end; 
  vec3_t start; 

  __asm { vmovaps [rsp+128h+var_98], xmm12 }
  _RBX = r_particleDrawData;
  __asm { vmovaps xmm12, xmm3 }
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2295, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  __asm { vmovaps [rsp+128h+var_78], xmm10 }
  v17 = !fx_cull_elem_draw->current.enabled;
  __asm { vmovaps [rsp+128h+var_88], xmm11 }
  if ( !v17 )
  {
    __asm
    {
      vmovss  xmm11, dword ptr [rbx+70h]
      vmovss  xmm10, dword ptr [rbx+74h]
      vmovss  [rsp+128h+radius], xmm11
      vmovss  dword ptr [rsp+128h+fmt], xmm10
    }
    if ( FX_CullCylinder(pCamera, frustumPlaneCount, &r_particleDrawData->posWorld, &r_particleDrawData->velDirWorld, fmt, radius) )
      goto LABEL_10;
    if ( particle_debug_draw->current.enabled || particle_debug_draw_cull_bounds->current.enabled )
    {
      __asm
      {
        vxorps  xmm3, xmm10, cs:__xmm@80000000800000008000000080000000
        vmovaps [rsp+128h+var_38], xmm6
        vmovups xmm6, xmmword ptr [rbx+50h]
        vshufps xmm5, xmm6, xmm6, 55h ; 'U'
        vmulss  xmm0, xmm6, xmm3
        vmulss  xmm2, xmm5, xmm3
        vshufps xmm4, xmm6, xmm6, 0AAh ; 'ª'
        vmovaps [rsp+128h+var_48], xmm7
        vmovaps [rsp+128h+var_58], xmm8
        vmovaps [rsp+128h+var_68], xmm9
        vmovups xmm9, xmmword ptr [rbx+40h]
        vaddss  xmm1, xmm0, xmm9
        vmovss  dword ptr [rsp+128h+start], xmm1
        vmulss  xmm1, xmm4, xmm3
        vshufps xmm8, xmm9, xmm9, 55h ; 'U'
        vaddss  xmm0, xmm2, xmm8
        vmovss  dword ptr [rsp+128h+start+4], xmm0
        vshufps xmm7, xmm9, xmm9, 0AAh ; 'ª'
        vaddss  xmm2, xmm1, xmm7
        vmulss  xmm0, xmm6, xmm10
        vaddss  xmm1, xmm0, xmm9
        vmovss  dword ptr [rsp+128h+end], xmm1
        vmulss  xmm1, xmm4, xmm10
        vaddss  xmm3, xmm1, xmm7
        vmovss  xmm1, cs:__real@3f800000; radius
        vmovss  dword ptr [rsp+128h+start+8], xmm2
        vmulss  xmm2, xmm5, xmm10
        vaddss  xmm0, xmm2, xmm8
        vmovss  dword ptr [rsp+128h+end+8], xmm3
        vmovss  dword ptr [rsp+128h+center], xmm9
        vmovss  dword ptr [rsp+128h+center+4], xmm8
        vmovss  dword ptr [rsp+128h+center+8], xmm7
        vmovss  dword ptr [rsp+128h+rotation], xmm6
        vmovss  dword ptr [rsp+128h+rotation+4], xmm5
        vmovss  dword ptr [rsp+128h+rotation+8], xmm4
        vmovss  dword ptr [rsp+128h+end+4], xmm0
      }
      Particle_DebugSphere(&center, *(float *)&_XMM1, &colorOrange, 1, 0);
      __asm { vmovaps xmm2, xmm11; radius }
      Particle_DebugCylinder(&start, &end, *(float *)&_XMM2, &rotation, &colorOrange, 1, 0);
      __asm
      {
        vmovaps xmm9, [rsp+128h+var_68]
        vmovaps xmm8, [rsp+128h+var_58]
        vmovaps xmm7, [rsp+128h+var_48]
        vmovaps xmm6, [rsp+128h+var_38]
      }
    }
  }
  __asm { vmovaps xmm2, xmm12; cameraDistance }
  if ( !ParticleEmitter::CullBasedOnAlphaThreshhold(this, NULL, *(float *)&_XMM2, r_particleDrawData) )
  {
    result = 0;
    goto LABEL_12;
  }
LABEL_10:
  result = 1;
LABEL_12:
  __asm
  {
    vmovaps xmm11, [rsp+128h+var_88]
    vmovaps xmm10, [rsp+128h+var_78]
    vmovaps xmm12, [rsp+128h+var_98]
  }
  return result;
}

/*
==============
ParticleEmitter::DebugDraw
==============
*/
void ParticleEmitter::DebugDraw(ParticleEmitter *this)
{
  int v4; 
  unsigned int m_flags; 
  ParticleEmitter::ParticleStateData *v14; 
  vec3_t center; 
  tmat33_t<vec3_t> axes; 

  _RSI = ParticleEmitter::GetEmitterDef(this);
  v4 = 0;
  if ( particle_debug_draw->current.enabled || particle_debug_draw_frustum_cull_radius->current.enabled )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rsi+60h]
    }
  }
  if ( particle_debug_draw->current.enabled || particle_show_axes->current.enabled )
  {
    _RAX = ParticleEmitter::GetSystemOwner(this);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax]
      vmovss  dword ptr [rsp+78h+axes], xmm1
      vextractps dword ptr [rsp+78h+axes+4], xmm1, 1
      vextractps dword ptr [rsp+78h+axes+8], xmm1, 2
      vmovups xmm2, xmmword ptr [rax+10h]
      vmovss  dword ptr [rsp+78h+axes+0Ch], xmm2
      vextractps dword ptr [rsp+78h+axes+10h], xmm2, 1
      vextractps dword ptr [rsp+78h+axes+14h], xmm2, 2
      vmovups xmm2, xmmword ptr [rax+20h]
      vmovss  dword ptr [rsp+78h+axes+18h], xmm2
      vextractps dword ptr [rsp+78h+axes+1Ch], xmm2, 1
      vextractps dword ptr [rsp+78h+axes+20h], xmm2, 2
      vmovups xmm2, xmmword ptr [rax+30h]
    }
    _RAX = particle_axes_length;
    __asm
    {
      vmovss  dword ptr [rsp+78h+center], xmm2
      vextractps dword ptr [rsp+78h+center+4], xmm2, 1
      vextractps dword ptr [rsp+78h+center+8], xmm2, 2
      vmovss  xmm2, dword ptr [rax+28h]; length
    }
    Particle_DebugAxis(&axes, &center, *(float *)&_XMM2, 1, 0);
  }
  m_flags = this->m_flags;
  if ( (m_flags & 0x40) == 0 && (m_flags & 1) == 0 && (m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(this)->flags & 1) == 0 )
  {
    if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 891, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
      __debugbreak();
    if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 892, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
      __debugbreak();
    if ( _RSI->numStates > 0 )
    {
      do
      {
        v14 = &this->m_pParticleStateData[v4];
        ParticleState::DebugDraw(&v14->m_particleState, this, &v14->m_particleData);
        ++v4;
      }
      while ( v4 < _RSI->numStates );
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
  const ParticleStateDef *m_pStateDef; 
  const ParticleModuleInitMaterial *m_pModuleInitMaterial; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  FxCamera *camera; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v26; 
  const ParticleStateDef *v28; 
  const ParticleModuleInitParticleSim *m_pModuleInitParticleSim; 
  unsigned __int64 flags; 
  unsigned int elementType; 
  __int64 v34; 
  __int64 v35; 
  unsigned __int64 v36; 
  ParticleLinkedAssetListDef *p_m_linkedAssetList; 
  Material *v38; 
  ParticleSystem *v39; 
  const ParticleSystemDef *v40; 
  const ParticleModuleInitAtlas *m_pModuleInitAtlas; 
  ParticleSystem *v43; 
  const float4 *v44; 
  const char *name; 
  vector3 *flags_low; 
  ParticleLinkedAssetListDef *v47; 
  FxParticleSimAnimation *particleSim; 
  ParticleSystem *v50; 
  const ParticleSystemDef *v51; 
  ParticleModuleScaleByDistance *m_pModuleScaleByDistance; 
  const ParticleStateDef *v53; 
  const vector4 *v62; 
  const vector4 *v75; 
  unsigned int v94; 
  float4 *p_posWorld; 
  __int64 v102; 
  vector4 *v103; 
  const float4 *v104; 
  ParticleManager *ParticleManager; 
  const ParticleSystem *v116; 
  char v124; 
  unsigned int v127; 
  const ParticleStateDef *v131; 
  float4 *v132; 
  const float4 *v137; 
  vector3 *v138; 
  const vector4 *v140; 
  bool v147; 
  const ParticleStateDef *v152; 
  unsigned int v160; 
  FxCamera *v161; 
  FxDrawState *v163; 
  GfxFlareSurfGlob *flareSurfGlob; 
  unsigned int v174; 
  unsigned int v175; 
  const float4 *v179; 
  vector3 *v180; 
  const vector4 *v181; 
  bool v182; 
  const float4 *v188; 
  vector3 *v189; 
  const ParticleStateDef *v231; 
  float4 *ParentVelocityArray; 
  bool v233; 
  bool v235; 
  unsigned int v262; 
  ParticleSystem *v268; 
  ParticleSystem *v270; 
  ParticleSystem *v272; 
  unsigned __int8 *ParticleDataArray; 
  int v283; 
  bool v312; 
  Material *v313; 
  ParticleSystem *v314; 
  const ParticleSystemDef *v315; 
  int v316; 
  ParticleSystem *v317; 
  const ParticleSystemDef *v318; 
  ParticleLinkedAssetListDef *v319; 
  FxParticleSimAnimation *v320; 
  ParticleSystem *v321; 
  const ParticleSystemDef *v322; 
  const FxSystem *system; 
  ParticleManager *v326; 
  const ParticleSystem *v327; 
  Material *v330; 
  unsigned __int8 *packedAtlasData; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  Particle_DrawData *r_particleDrawData; 
  float r_particleDrawDataa; 
  float4 *rOutNormal; 
  float rOutNormala; 
  float pParticleSimAnimation; 
  char v349; 
  bool v350; 
  bool v351; 
  unsigned int v352; 
  unsigned int outEmitterDataIndex; 
  unsigned int frustumPlaneCount; 
  unsigned int particleIndex; 
  FxDrawState *pDrawStatea; 
  Material *material; 
  unsigned int m_particleCountRunning; 
  float4 *RotationAngleArray; 
  float *CameraDistanceArray; 
  FxCamera *pCamera; 
  FxParticleSimAnimation *v362; 
  float4 *posArray; 
  vector4 *M1; 
  const ParticleModuleInitMaterial *v365; 
  int *RandomSeedArray; 
  float4 rOutTangent; 
  float4 rOutBitangent; 
  float4 normal; 
  unsigned int activeLightGridsBitmaska; 
  float4 *VelocityArray; 
  ParticleLinkedAssetListDef *pLinkedAssetList; 
  __int64 v373; 
  const ParticleSystem *v374; 
  float4 rPos; 
  vector4 result; 
  float4 rVelocity; 
  float4 *SizeArray; 
  float4 *SpawnPosArray; 
  BuildBounds *boundsAccumulator; 
  BuildBounds *v381; 
  ParticleLinkedAssetListDef *v382; 
  __int64 v383; 
  float *SpawnTimeArray; 
  unsigned __int64 v385; 
  __int64 v386; 
  float4 *ColorArray; 
  ParticleModuleScaleByDistance *pModuleScaleByDistance; 
  float4 *SpawnQuatArray; 
  unsigned __int64 v390; 
  vector4 v393; 
  GfxEffectFlare flareData; 
  vec3_t posWorld; 
  float4 lookAtInput; 
  GfxSpriteEmitter data; 
  float4 v403; 
  Particle_FlareDrawData outFlareDrawData; 
  vector3 outMatrix; 
  vector4 rParticleTransform; 

  v381 = umbraBoundsAccumulator;
  _R15 = pDrawState;
  _RSI = this;
  boundsAccumulator = lightingBoundsAccumulator;
  activeLightGridsBitmaska = activeLightGridsBitmask;
  pDrawStatea = pDrawState;
  if ( !pDrawState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2576, ASSERT_TYPE_ASSERT, "(pDrawState)", (const char *)&queryFormat, "pDrawState") )
    __debugbreak();
  m_pStateDef = r_particleStateData->m_particleState.m_pStateDef;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
    vmovdqa xmmword ptr [rsp+598h+var_338.w.v], xmm0
  }
  if ( (m_pStateDef->flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2588, ASSERT_TYPE_ASSERT, "(pParticleState->IsSprite())", (const char *)&queryFormat, "pParticleState->IsSprite()") )
    __debugbreak();
  m_pModuleInitMaterial = r_particleStateData->m_particleState.m_pModuleInitMaterial;
  v365 = m_pModuleInitMaterial;
  if ( !m_pModuleInitMaterial )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
    Def = ParticleSystem::GetDef(SystemOwner);
    Com_PrintWarning(21, "Emitter is missing 'Material' module - %s", Def->name);
    return;
  }
  camera = (FxCamera *)_R15->camera;
  m_particleCountRunning = r_particleStateData->m_particleData.m_particleCountRunning;
  pCamera = camera;
  if ( !camera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2602, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  EmitterDef = ParticleEmitter::GetEmitterDef(_RSI);
  v26 = camera->frustumPlaneCount;
  if ( (EmitterDef->flags & 4) != 0 && v26 > 5 )
    v26 = 5;
  frustumPlaneCount = v26;
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
  v374 = ParticleEmitter::GetSystemOwner(_RSI);
  _RAX = (vector4 *)ParticleEmitter::GetEmitterTransform(_RSI, &r_particleStateData->m_particleState);
  v28 = r_particleStateData->m_particleState.m_pStateDef;
  m_pModuleInitParticleSim = r_particleStateData->m_particleState.m_pModuleInitParticleSim;
  M1 = _RAX;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+598h+var_E8.baseclass_0.x.v], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+598h+var_E8.baseclass_0.z.v], ymm1
  }
  flags = v28->flags;
  elementType = v28->elementType;
  v352 = elementType;
  v373 = (unsigned __int8)flags & 0xA0;
  v34 = flags >> 33;
  LOBYTE(v34) = (flags & 0x200000000i64) != 0;
  v383 = v34;
  v35 = flags >> 22;
  LOBYTE(v35) = (flags & 0x400000) != 0;
  v386 = v35;
  v36 = flags;
  flags >>= 41;
  LOBYTE(flags) = flags & 1;
  v36 >>= 23;
  LOBYTE(v36) = v36 & 1;
  v390 = flags;
  v385 = v36;
  if ( m_pModuleInitParticleSim )
  {
    pLinkedAssetList = NULL;
    goto LABEL_24;
  }
  v182 = &m_pModuleInitMaterial->m_linkedAssetList == NULL;
  p_m_linkedAssetList = &m_pModuleInitMaterial->m_linkedAssetList;
  pLinkedAssetList = p_m_linkedAssetList;
  if ( v182 )
  {
LABEL_24:
    v350 = 0;
    goto LABEL_25;
  }
  Particle_VerifyAssetList(p_m_linkedAssetList);
  v350 = p_m_linkedAssetList->numAssets == 1;
  if ( p_m_linkedAssetList->numAssets != 1 )
  {
LABEL_25:
    material = NULL;
    goto LABEL_26;
  }
  Particle_VerifyAssetList(p_m_linkedAssetList);
  v38 = p_m_linkedAssetList->assetList->material;
  material = v38;
  if ( v38 )
  {
    if ( SLOBYTE(v38->surfaceFlags) < 0 )
    {
      v39 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
      v40 = ParticleSystem::GetDef(v39);
      R_WarnOncePerFrame(R_WARN_VFX_INVALID_MATERIAL, v38->name, v40->name, "SURF_NODRAW");
      return;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2641, ASSERT_TYPE_ASSERT, "(!hasSingleMaterialAsset || material)", (const char *)&queryFormat, "!hasSingleMaterialAsset || material") )
  {
    __debugbreak();
  }
LABEL_26:
  m_pModuleInitAtlas = r_particleStateData->m_particleState.m_pModuleInitAtlas;
  if ( !m_pModuleInitAtlas || (m_pModuleInitAtlas->m_flags & 1) != 0 || (v349 = 1, !r_particleStateData->m_particleState.m_atlasData.isAtlas) )
    v349 = 0;
  _RDI = (ParticleEmitter *)&_RSI->m_particleDrawData[1];
  if ( !transShadowPass )
    _RDI = _RSI;
  DebugWipe(_RDI, 0xA0ui64);
  v43 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
  name = ParticleSystem::GetDef(v43)->name;
  _RDI->m_particleDrawData[0].hasAtlas = v349;
  _RDI->m_particleDrawData[0].vfxName = name;
  flags_low = (vector3 *)LODWORD(r_particleStateData->m_particleState.m_pStateDef->flags);
  _RDI->m_particleDrawData[0].codeSurfFlags = 0;
  _RDI->m_particleDrawData[0].hasMirrorTexture = ((unsigned __int16)flags_low & 0x7800) != 0i64;
  _RDI->m_particleDrawData[0].hasParticleSim = m_pModuleInitParticleSim != NULL;
  _RDI->m_particleDrawData[0].atlasData = &r_particleStateData->m_particleState.m_atlasData;
  if ( !transShadowPass && ParticleEmitter::ShouldDrawWithViewModel(_RSI, &r_particleStateData->m_particleState) )
    _RDI->m_particleDrawData[0].codeSurfFlags |= 1u;
  v47 = &m_pModuleInitParticleSim->m_linkedAssetList;
  __asm { vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000 }
  _RDI->m_particleDrawData[0].allowLighting = pCamera->lightmap;
  _RDI->m_particleDrawData[0].anisotropy = v365->m_materialData.anisotropy;
  v182 = !_RDI->m_particleDrawData[0].hasParticleSim;
  _RDI->m_particleDrawData[0].rotationAngle = 0.0;
  if ( v182 )
    v47 = NULL;
  v382 = v47;
  __asm { vmovups xmmword ptr [rdi+30h], xmm0 }
  if ( v47 )
  {
    Particle_VerifyAssetList(v47);
    v351 = v47->numAssets == 1;
    if ( v47->numAssets == 1 )
    {
      Particle_VerifyAssetList(v47);
      particleSim = v47->assetList->particleSim;
      v362 = particleSim;
      if ( particleSim )
      {
        if ( SLOBYTE(particleSim->material->surfaceFlags) < 0 )
        {
          v50 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
          v51 = ParticleSystem::GetDef(v50);
          R_WarnOncePerFrame(R_WARN_VFX_INVALID_MATERIAL, particleSim->material->name, v51->name, "SURF_NODRAW");
          return;
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2689, ASSERT_TYPE_ASSERT, "(!hasSingleParticleSimAsset || pParticleSimAnimation)", (const char *)&queryFormat, "!hasSingleParticleSimAsset || pParticleSimAnimation") )
      {
        __debugbreak();
      }
      goto LABEL_46;
    }
  }
  else
  {
    v351 = 0;
  }
  v362 = NULL;
LABEL_46:
  m_pModuleScaleByDistance = (ParticleModuleScaleByDistance *)r_particleStateData->m_particleState.m_pModuleScaleByDistance;
  __asm
  {
    vmovaps [rsp+598h+var_58], xmm7
    vmovaps [rsp+598h+var_68], xmm8
    vmovaps [rsp+598h+var_98], xmm11
  }
  pModuleScaleByDistance = m_pModuleScaleByDistance;
  if ( !m_pModuleScaleByDistance )
  {
    v53 = r_particleStateData->m_particleState.m_pStateDef;
    flags_low = (vector3 *)(v53->flags >> 35);
    if ( (v53->flags & 0x800000000i64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2699, ASSERT_TYPE_ASSERT, "(pModuleScaleByDistance || !pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_SCALE_BY_DISTANCE ))", (const char *)&queryFormat, "pModuleScaleByDistance || !pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_SCALE_BY_DISTANCE )") )
      __debugbreak();
  }
  _RAX = pCamera;
  __asm
  {
    vmovaps [rsp+598h+var_48], xmm6
    vmovups xmm7, cs:__xmm@3f8000003f8000003f8000003f800000
    vxorps  xmm8, xmm8, xmm8
    vmovups xmm0, xmmword ptr [rax]
    vinsertps xmm11, xmm0, xmm7, 0F0h ; 'ð'
  }
  switch ( elementType )
  {
    case 0u:
      goto LABEL_71;
    case 1u:
      _RBX.pModule = (const ParticleModule *)r_particleStateData->m_particleState.m_elementTypeModule;
      _RAX = ParticleEmitter::GetSystemOwner(_RSI);
      if ( (_RAX->m_flags & 0x100) != 0 )
      {
        __asm
        {
          vmovups xmm6, xmmword ptr [rax+0F0h]
          vmovups xmm1, xmmword ptr [rax+100h]
        }
      }
      else
      {
        __asm
        {
          vmovups xmm6, xmmword ptr [rbx+10h]
          vmovups xmm1, xmmword ptr [rbx+20h]
        }
      }
      if ( _RBX.pModule )
      {
        __asm
        {
          vaddps  xmm6, xmm6, xmmword ptr [rbx+30h]
          vaddps  xmm1, xmm1, xmmword ptr [rbx+30h]
        }
      }
      __asm
      {
        vsubps  xmm3, xmm1, xmm6
        vmulps  xmm0, xmm3, xmm3
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vucomiss xmm2, xmm8
      }
      if ( _RBX.pModule )
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@0000000000000000000000003f800000
          vmovups xmm1, cs:__xmm@000000003f8000000000000000000000
          vmovups xmmword ptr [rsp+598h+result.baseclass_0.x.v], xmm0
          vmovups xmmword ptr [rsp+598h+result.baseclass_0.z.v], xmm1
          vmovups xmmword ptr [rsp+598h+lookAtInput.v], xmm3
        }
        Particle_GenerateMatrixFromLookAt(&lookAtInput, &result);
        __asm { vmovdqa xmmword ptr [rsp+598h+result.w.v], xmm6 }
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
          vmovups ymmword ptr [rsp+598h+result.baseclass_0.x.v], ymm0
          vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
          vmovups ymmword ptr [rsp+598h+result.baseclass_0.z.v], ymm0
        }
      }
      if ( (ParticleEmitter::GetSystemOwner(_RSI)->m_flags & 0x100) == 0 )
      {
        Float4x4Mul(M1, &result, v75);
        __asm
        {
          vmovups xmmword ptr [rsp+598h+var_358], xmm2
          vmovups xmmword ptr [rsp+598h+var_378], xmm0
          vmovups xmmword ptr [rsp+598h+var_358+10h], xmm3
          vmovups ymm0, [rsp+598h+var_358]
          vmovups xmmword ptr [rsp+598h+var_378+10h], xmm1
          vmovups ymm2, [rsp+598h+var_378]
          vmovups ymmword ptr [rsp+598h+result.baseclass_0.x.v], ymm2
          vmovups ymmword ptr [rsp+598h+result.baseclass_0.z.v], ymm0
        }
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+598h+result.baseclass_0.z.v]
        vmovups xmm1, xmmword ptr [rsp+598h+result.baseclass_0.x.v]
        vmovdqa xmmword ptr [rsp+598h+normal.v], xmm0
        vmovups xmm0, xmmword ptr [rsp+598h+result.baseclass_0.y.v]
        vmovdqa xmmword ptr [rsp+598h+rOutBitangent.v], xmm0
        vmovdqa xmmword ptr [rsp+598h+rOutTangent.v], xmm1
      }
      break;
    case 4u:
LABEL_71:
      __asm
      {
        vmovups xmm0, xmmword ptr [r15+60h]
        vmovups xmm1, xmmword ptr [r15+70h]
        vmovups xmmword ptr [rsp+598h+rOutTangent.v], xmm0
        vmovups xmm0, xmmword ptr [r15+50h]
        vmovups xmmword ptr [rsp+598h+normal.v], xmm0
        vmovups xmmword ptr [rsp+598h+rOutBitangent.v], xmm1
      }
      break;
    case 8u:
      _RBX.pModule = (const ParticleModule *)r_particleStateData->m_particleState.m_elementTypeModule;
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
        vmovdqa xmmword ptr [rsp+598h+result.w.v], xmm0
      }
      if ( !_RBX.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2752, ASSERT_TYPE_ASSERT, "(pModule)", (const char *)&queryFormat, "pModule") )
        __debugbreak();
      __asm { vmovups xmm0, xmmword ptr [rbx+10h] }
      Float4UnitQuatToAxis(flags_low, v44);
      v182 = !_RDI->m_particleDrawData[0].hasParticleSim;
      __asm
      {
        vmovups xmmword ptr [rsp+598h+var_2F8+10h], xmm1
        vmovups xmmword ptr [rsp+598h+var_2F8], xmm0
        vmovups ymm3, [rsp+598h+var_2F8]
        vmovups ymmword ptr [rsp+598h+result.baseclass_0.x.v], ymm3
        vmovups xmmword ptr [rsp+598h+result.baseclass_0.z.v], xmm2
      }
      if ( v182 )
      {
        Float4x4Mul(&result, M1, v62);
        __asm
        {
          vmovups xmmword ptr [rsp+598h+var_358], xmm2
          vmovups xmmword ptr [rsp+598h+var_378], xmm0
          vmovups xmmword ptr [rsp+598h+var_358+10h], xmm3
          vmovups ymm0, [rsp+598h+var_358]
          vmovups xmmword ptr [rsp+598h+var_378+10h], xmm1
          vmovups ymm2, [rsp+598h+var_378]
          vmovups ymmword ptr [rsp+598h+result.baseclass_0.x.v], ymm2
          vmovups ymmword ptr [rsp+598h+result.baseclass_0.z.v], ymm0
          vmovups xmm2, xmmword ptr [rsp+598h+result.baseclass_0.z.v]
        }
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+598h+result.baseclass_0.x.v]
        vmovups xmm1, xmmword ptr [rsp+598h+result.baseclass_0.y.v]
        vmovdqa xmmword ptr [rsp+598h+rOutTangent.v], xmm0
        vmovdqa xmmword ptr [rsp+598h+rOutBitangent.v], xmm1
        vmovdqa xmmword ptr [rsp+598h+normal.v], xmm2
      }
      break;
  }
  outEmitterDataIndex = -1;
  __asm
  {
    vmovups xmmword ptr [rdi+90h], xmm7
    vmovss  xmm7, cs:__real@3f800000
  }
  if ( (ParticleEmitter::GetEmitterDef(_RSI)->flags & 0x1000000) != 0 )
  {
    ParticleEmitter::GetSystemOwner(_RSI);
    __asm
    {
      vmovups xmm2, cs:__xmm@000000003f8000003f8000003f800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm1, xmm0, cs:__real@3b808081
      vsubss  xmm0, xmm7, xmm1
      vmulss  xmm0, xmm0, dword ptr [rax+0CCh]
      vaddss  xmm1, xmm0, xmm1
      vinsertps xmm2, xmm2, xmm1, 30h ; '0'
      vmovups xmmword ptr [rdi+90h], xmm2
    }
  }
  __asm
  {
    vmovups xmm0, cs:__xmm@000000003f8000003f8000003f800000
    vinsertps xmm0, xmm0, dword ptr [r15+690h], 30h ; '0'
    vmulps  xmm0, xmm0, xmmword ptr [rdi+90h]
  }
  v94 = 0;
  particleIndex = 0;
  __asm { vmovups xmmword ptr [rdi+90h], xmm0 }
  if ( m_particleCountRunning )
  {
    __asm { vmovaps [rsp+598h+var_78], xmm9 }
    p_posWorld = &_RDI->m_particleDrawData[0].posWorld;
    __asm
    {
      vmovss  xmm9, cs:__real@34000000
      vmovaps [rsp+598h+var_88], xmm10
    }
    _R15 = 0i64;
    __asm { vmovss  xmm10, cs:__real@3c888889 }
    while ( 2 )
    {
      _RDX = SizeArray;
      _R14 = 2 * _R15;
      __asm { vmovups xmm0, xmmword ptr [rdx+r14*8] }
      v102 = v94;
      v103 = M1;
      v104 = &posArray[v102];
      __asm
      {
        vmovss  dword ptr [rdi+70h], xmm0
        vextractps dword ptr [rdi+74h], xmm0, 1
      }
      ParticleEmitter::GetWorldPos(_RSI, v104, p_posWorld, &r_particleStateData->m_particleState, v103);
      v182 = (_BYTE)v386 == 0;
      _RAX = ColorArray;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax+r14*8]
        vmulps  xmm1, xmm0, xmm0
        vshufps xmm0, xmm1, xmm0, 0FAh ; 'ú'
        vshufps xmm1, xmm1, xmm0, 84h ; '„'
        vmovups xmmword ptr [rdi+60h], xmm1
        vmovups xmm2, xmmword ptr [rdi+90h]
        vmulps  xmm0, xmm2, xmm1
        vmovups xmmword ptr [rdi+60h], xmm0
      }
      _RDI->m_particleDrawData[0].lightingFrac = 0.0;
      _RDI->m_particleDrawData[0].temperatureScale = 1.0;
      if ( !v182 )
      {
        _RAX = Particle_GetEmissiveArray(&r_particleStateData->m_particleData);
        __asm
        {
          vmovups xmm0, xmmword ptr [rax+r14*8]
          vmulps  xmm1, xmm0, xmm0
          vshufps xmm0, xmm1, xmm0, 0FAh ; 'ú'
          vshufps xmm1, xmm1, xmm0, 84h ; '„'
          vmovups xmmword ptr [rdi+30h], xmm1
        }
        if ( (ParticleEmitter::GetSystemOwner(_RSI)->m_flags & 0x1000000000i64) != 0 )
        {
          ParticleManager = ParticleManager::GetParticleManager(_RSI->m_pSystemOwner->m_localClientNum);
          v116 = ParticleEmitter::GetSystemOwner(_RSI);
          ParticleManager::GetGlobalTintColor(ParticleManager, &lookAtInput, v116);
          __asm
          {
            vbroadcastss xmm2, dword ptr [rdi+3Ch]
            vshufps xmm2, xmm2, xmm2, 0
            vmulps  xmm0, xmm2, xmmword ptr [rsp+598h+lookAtInput.v]
            vmovups xmmword ptr [rsp+598h+lookAtInput.v], xmm0
            vmovups xmmword ptr [rdi+30h], xmm0
          }
        }
        if ( (r_particleStateData->m_particleState.m_pStateDef->flags & 0x40000000000i64) != 0 )
        {
          _RAX = Particle_GetLightingFracArray(&r_particleStateData->m_particleData);
          __asm
          {
            vmovss  xmm0, dword ptr [rax+r15*4]
            vmovss  dword ptr [rdi+24h], xmm0
            vaddss  xmm0, xmm0, dword ptr [rax+0C8h]
            vmaxss  xmm1, xmm0, xmm8
            vmovss  dword ptr [rdi+24h], xmm1
            vaddss  xmm0, xmm1, dword ptr [rax+28h]
            vmaxss  xmm0, xmm0, xmm8
            vmovss  dword ptr [rdi+24h], xmm0
          }
          _RAX = fx_overrideLightFrac;
          __asm
          {
            vmovss  xmm1, dword ptr [rax+28h]
            vcomiss xmm1, xmm8
          }
          if ( !v124 )
            __asm { vmovss  dword ptr [rdi+24h], xmm1 }
        }
      }
      if ( (_BYTE)v385 )
      {
        _RAX = Particle_GetIntensityArray(&r_particleStateData->m_particleData);
        __asm { vmovups xmm1, cs:__xmm@3f800000000000000000000000000000 }
        v127 = v352;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+r15*4]
          vinsertps xmm1, xmm1, xmm0, 0
          vinsertps xmm1, xmm1, xmm0, 10h
          vinsertps xmm1, xmm1, xmm0, 20h ; ' '
          vmulps  xmm0, xmm1, xmmword ptr [rdi+60h]
          vmovups xmmword ptr [rdi+60h], xmm0
        }
        if ( v352 == 3 )
        {
          __asm
          {
            vmulps  xmm0, xmm1, xmmword ptr [rdi+30h]
            vmovups xmmword ptr [rdi+30h], xmm0
          }
        }
      }
      else
      {
        v127 = v352;
      }
      if ( (_BYTE)v390 )
        _RDI->m_particleDrawData[0].temperatureScale = Particle_GetTemperatureArray(&r_particleStateData->m_particleData)[_R15];
      if ( v349 )
        _RDI->m_particleDrawData[0].atlasIndex = Particle_GetAtlasIndexArray(&r_particleStateData->m_particleData)[_R15];
      v131 = r_particleStateData->m_particleState.m_pStateDef;
      v132 = (float4 *)(v131->flags >> 35);
      if ( (v131->flags & 0x800000000i64) != 0 )
      {
        _RAX = CameraDistanceArray;
        __asm { vmovss  xmm2, dword ptr [rax+r15*4]; cameraDistance }
        *(double *)&_XMM0 = ParticleEmitter::GetScaleFactorByCameraDistance(_RSI, pModuleScaleByDistance, *(float *)&_XMM2, RandomSeedArray[_R15]);
        __asm
        {
          vmulss  xmm1, xmm0, dword ptr [rdi+70h]
          vmovss  dword ptr [rdi+70h], xmm1
          vmulss  xmm0, xmm0, dword ptr [rdi+74h]
          vmovss  dword ptr [rdi+74h], xmm0
        }
      }
      if ( v127 != 4 )
      {
        __asm
        {
          vucomiss xmm8, dword ptr [rdi+70h]
          vucomiss xmm8, dword ptr [rdi+74h]
        }
      }
      switch ( v127 )
      {
        case 0u:
          _RAX = CameraDistanceArray;
          if ( _RDI->m_particleDrawData[0].hasParticleSim )
          {
            __asm { vmovss  xmm2, dword ptr [rax+r15*4]; cameraDistance }
            v147 = ParticleEmitter::CullBasedOnAlphaThreshhold(_RSI, NULL, *(float *)&_XMM2, _RDI->m_particleDrawData);
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax+r15*4]
              vmovss  dword ptr [rsp+598h+fmt], xmm0
            }
            v147 = ParticleEmitter::CullElementForDraw_Sprite(_RSI, pCamera, frustumPlaneCount, &r_particleStateData->m_particleState, fmt, _RDI->m_particleDrawData);
          }
          if ( !v147 )
          {
            if ( (r_particleStateData->m_particleState.m_pStateDef->flags & 0x20000) != 0 )
            {
              __asm
              {
                vxorps  xmm6, xmm6, xmm6
                vsubps  xmm1, xmm11, xmmword ptr [rax+r14*8]
                vshufps xmm0, xmm1, xmm6, 0FAh ; 'ú'
                vshufps xmm1, xmm1, xmm0, 84h ; '„'
                vmovups xmmword ptr [rsp+598h+rPos.v], xmm1
              }
              Particle_GenerateMatrixFromLookAt(&rPos, &outMatrix);
              v152 = r_particleStateData->m_particleState.m_pStateDef;
              __asm
              {
                vsubps  xmm0, xmm6, xmmword ptr [rsp+598h+outMatrix.x.v]
                vmovups xmmword ptr [rsp+598h+rOutTangent.v], xmm0
              }
              if ( (v152->flags & 0x40000) != 0 )
                _RAX = &pDrawStatea->cameraBitangent;
              else
                _RAX = &outMatrix.z;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax]
                vmovups xmm1, xmmword ptr [rsp+598h+outMatrix.y.v]
                vmovups xmmword ptr [rsp+598h+rOutBitangent.v], xmm0
                vmovdqa xmmword ptr [rsp+598h+normal.v], xmm1
              }
            }
            if ( !_RDI->m_particleDrawData[0].hasParticleSim )
            {
              _RAX = RotationAngleArray;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+r14*8]
                vmovss  dword ptr [rdi+20h], xmm0
              }
            }
            goto LABEL_154;
          }
          goto LABEL_228;
        case 1u:
          if ( v373 )
          {
            _RAX = RotationAngleArray;
            __asm { vmovups xmm0, xmmword ptr [rax+r14*8] }
            Float4RadianToQuat(v132, (const float4 *)0x140000000i64);
            Float4UnitQuatToAxis(v138, v137);
            __asm
            {
              vmovups xmmword ptr [rsp+598h+var_2F8+10h], xmm1
              vmovups xmmword ptr [rsp+598h+var_2F8], xmm0
              vmovups ymm3, [rsp+598h+var_2F8]
              vmovups ymmword ptr [rsp+598h+var_338.baseclass_0.x.v], ymm3
              vmovups xmmword ptr [rsp+598h+var_338.baseclass_0.z.v], xmm2
            }
            Float4x4Mul(&v393, &result, v140);
            __asm
            {
              vucomiss xmm8, dword ptr [rdi+20h]
              vmovups xmmword ptr [rsp+598h+var_2A8+10h], xmm3
              vmovups xmmword ptr [rsp+598h+var_2A8], xmm2
              vmovups ymm4, [rsp+598h+var_2A8]
              vmovups xmmword ptr [rsp+598h+var_2C8+10h], xmm1
              vmovups xmmword ptr [rsp+598h+var_2C8], xmm0
              vmovups ymm3, [rsp+598h+var_2C8]
              vmovups ymmword ptr [rsp+598h+var_338.baseclass_0.x.v], ymm3
              vmovups ymmword ptr [rsp+598h+var_338.baseclass_0.z.v], ymm4
              vmovdqa xmmword ptr [rsp+598h+normal.v], xmm2
              vmovdqa xmmword ptr [rsp+598h+rOutTangent.v], xmm0
              vmovdqa xmmword ptr [rsp+598h+rOutBitangent.v], xmm1
            }
            if ( !v182 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2888, ASSERT_TYPE_ASSERT, "(r_particleDrawData.rotationAngle == 0.0f)", (const char *)&queryFormat, "r_particleDrawData.rotationAngle == 0.0f") )
              __debugbreak();
          }
          _RAX = CameraDistanceArray;
          __asm { vmovss  xmm2, dword ptr [rax+r15*4]; cameraDistance }
          if ( !ParticleEmitter::CullBasedOnAlphaThreshhold(_RSI, NULL, *(float *)&_XMM2, _RDI->m_particleDrawData) )
          {
            ++_RSI->m_numBeams;
            goto LABEL_154;
          }
          goto LABEL_228;
        case 3u:
          _RAX = RotationAngleArray;
          v160 = frustumPlaneCount;
          v161 = pCamera;
          __asm { vmovups xmm1, xmmword ptr [rax+r14*8] }
          v163 = pDrawStatea;
          _RAX = CameraDistanceArray;
          __asm
          {
            vmovss  dword ptr [rdi+20h], xmm1
            vmovss  xmm0, dword ptr [rax+r15*4]
            vmovss  dword ptr [rsp+598h+rOutNormal], xmm0
            vmovss  dword ptr [rsp+598h+r_particleDrawData], xmm1
          }
          if ( ParticleEmitter::DrawSetup_Flare(_RSI, v163->drawFlares, v161, v160, &r_particleStateData->m_particleState, r_particleDrawDataa, rOutNormala, _RDI->m_particleDrawData, &outFlareDrawData) )
          {
            if ( outEmitterDataIndex != -1 )
              goto LABEL_155;
            __asm { vmovups xmm0, xmmword ptr [rdi+40h] }
            flareSurfGlob = v163->flareSurfGlob;
            __asm
            {
              vshufps xmm1, xmm0, xmm0, 55h ; 'U'
              vsubss  xmm1, xmm1, dword ptr [rax+4]
              vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
              vsubss  xmm0, xmm0, dword ptr [rax]
              vmovss  dword ptr [rsp+598h+flareData.worldPosition], xmm0
              vsubss  xmm0, xmm2, dword ptr [rax+8]
              vmovss  dword ptr [rsp+598h+flareData.worldPosition+8], xmm0
              vmovss  dword ptr [rsp+598h+flareData.worldPosition+4], xmm1
            }
            if ( R_AddFlareEmitterData(flareSurfGlob, (const GfxSpriteEmitter *)&v365->m_materialData, &flareData, &outEmitterDataIndex) )
              goto LABEL_155;
          }
          goto LABEL_228;
        case 4u:
          _RAX = RotationAngleArray;
          v174 = particleIndex;
          v175 = frustumPlaneCount;
          __asm
          {
            vmovups xmm0, xmmword ptr [rax+r14*8]
            vmovss  dword ptr [rdi+20h], xmm0
          }
          if ( ParticleEmitter::DrawSetup_GeoTrail(_RSI, v175, &r_particleStateData->m_particleState, v174, _RDI->m_particleDrawData) )
            goto LABEL_154;
          goto LABEL_228;
        case 8u:
          if ( v373 )
          {
            _RAX = RotationAngleArray;
            __asm { vmovups xmm0, xmmword ptr [rax+r14*8] }
            Float4RadianToQuat(v132, (const float4 *)0x140000000i64);
            Float4UnitQuatToAxis(v180, v179);
            v182 = !_RDI->m_particleDrawData[0].hasParticleSim;
            __asm
            {
              vmovups xmmword ptr [rsp+598h+var_378+10h], xmm1
              vmovups xmmword ptr [rsp+598h+var_378], xmm0
              vmovups ymm3, [rsp+598h+var_378]
              vmovups ymmword ptr [rsp+598h+var_338.baseclass_0.x.v], ymm3
              vmovups xmmword ptr [rsp+598h+var_338.baseclass_0.z.v], xmm2
            }
            if ( v182 )
            {
              Float4x4Mul(&v393, M1, v181);
              __asm
              {
                vmovups xmmword ptr [rsp+598h+var_268], xmm2
                vmovups xmmword ptr [rsp+598h+var_288], xmm0
                vmovups xmmword ptr [rsp+598h+var_268+10h], xmm3
                vmovups ymm0, [rsp+598h+var_268]
                vmovups xmmword ptr [rsp+598h+var_288+10h], xmm1
                vmovups ymm2, [rsp+598h+var_288]
                vmovups ymmword ptr [rsp+598h+var_338.baseclass_0.x.v], ymm2
                vmovups ymmword ptr [rsp+598h+var_338.baseclass_0.z.v], ymm0
                vmovups xmm2, xmmword ptr [rsp+598h+var_338.baseclass_0.z.v]
              }
            }
            __asm
            {
              vucomiss xmm8, dword ptr [rdi+20h]
              vmovups xmm0, xmmword ptr [rsp+598h+var_338.baseclass_0.x.v]
              vmovups xmm1, xmmword ptr [rsp+598h+var_338.baseclass_0.y.v]
              vmovdqa xmmword ptr [rsp+598h+rOutTangent.v], xmm0
              vmovdqa xmmword ptr [rsp+598h+rOutBitangent.v], xmm1
              vmovdqa xmmword ptr [rsp+598h+normal.v], xmm2
            }
            if ( !v182 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2987, ASSERT_TYPE_ASSERT, "(r_particleDrawData.rotationAngle == 0.0f)", (const char *)&queryFormat, "r_particleDrawData.rotationAngle == 0.0f") )
              __debugbreak();
          }
          else if ( ParticleState::IsRelativeToEmitterOrigin(&r_particleStateData->m_particleState) )
          {
            _RAX = SpawnQuatArray;
            __asm { vmovups xmm0, xmmword ptr [rax+r14*8] }
            Float4UnitQuatToAxis(v189, v188);
            __asm
            {
              vmovdqa xmmword ptr [rsp+598h+rOutTangent.v], xmm0
              vxorps  xmm0, xmm0, xmm0
              vmovdqa xmmword ptr [rsp+598h+normal.v], xmm1
              vsubps  xmm1, xmm0, xmm2
              vmovups xmmword ptr [rsp+598h+rOutBitangent.v], xmm1
            }
          }
          else
          {
            _RAX = RotationAngleArray;
            __asm
            {
              vmovups xmm0, xmmword ptr [rax+r14*8]
              vmovss  dword ptr [rdi+20h], xmm0
            }
          }
          _RAX = CameraDistanceArray;
          __asm { vmovss  xmm0, dword ptr [rax+r15*4] }
          if ( _RDI->m_particleDrawData[0].hasParticleSim )
          {
            __asm { vmovaps xmm2, xmm0; cameraDistance }
            if ( !ParticleEmitter::CullBasedOnAlphaThreshhold(_RSI, NULL, *(float *)&_XMM2, _RDI->m_particleDrawData) )
              goto LABEL_154;
          }
          else
          {
            __asm { vmovss  dword ptr [rsp+598h+fmt], xmm0 }
            if ( !ParticleEmitter::CullElementForDraw_Sprite(_RSI, pCamera, frustumPlaneCount, &r_particleStateData->m_particleState, fmta, _RDI->m_particleDrawData) )
              goto LABEL_154;
          }
          goto LABEL_228;
        case 0xAu:
          if ( ParticleState::UseBoltInfo(&r_particleStateData->m_particleState) )
          {
            _RAX = posArray;
            __asm { vmovups xmm0, xmmword ptr [rax+r14*8] }
            _RAX = VelocityArray;
            __asm
            {
              vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
              vshufps xmm3, xmm0, xmm0, 55h ; 'U'
              vshufps xmm4, xmm0, xmm0, 0
              vmulps  xmm0, xmm2, xmmword ptr [rdx+20h]
              vaddps  xmm2, xmm0, xmmword ptr [rdx+30h]
              vmulps  xmm0, xmm3, xmmword ptr [rdx+10h]
              vaddps  xmm1, xmm0, xmm2
              vmulps  xmm0, xmm4, xmmword ptr [rdx]
              vaddps  xmm1, xmm0, xmm1
              vmovups xmm0, xmmword ptr [rax+r14*8]
              vshufps xmm2, xmm0, xmm0, 55h ; 'U'
              vmovups xmmword ptr [rsp+598h+rPos.v], xmm1
              vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
              vmulps  xmm1, xmm1, xmmword ptr [rdx+20h]
              vshufps xmm3, xmm0, xmm0, 0
              vmulps  xmm0, xmm2, xmmword ptr [rdx+10h]
              vaddps  xmm2, xmm0, xmm1
              vmulps  xmm0, xmm3, xmmword ptr [rdx]
              vaddps  xmm6, xmm0, xmm2
            }
          }
          else
          {
            if ( ParticleState::GetRelativeVelocityType(&r_particleStateData->m_particleState) == PARTICLE_RELATIVE_VELOCITY_TYPE_WORLD_WITH_BOLT_INFO )
            {
              _RAX = SpawnPosArray;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+r14*8]
                vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
                vshufps xmm3, xmm0, xmm0, 55h ; 'U'
                vshufps xmm4, xmm0, xmm0, 0
                vmulps  xmm0, xmm2, xmmword ptr [rax+20h]
                vaddps  xmm2, xmm0, xmmword ptr [rax+30h]
                vmulps  xmm0, xmm3, xmmword ptr [rax+10h]
                vaddps  xmm1, xmm0, xmm2
                vmulps  xmm0, xmm4, xmmword ptr [rax]
                vaddps  xmm1, xmm0, xmm1
                vmovups xmmword ptr [rsp+598h+rPos.v], xmm1
              }
            }
            else
            {
              _RAX = posArray;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+r14*8]
                vmovups xmmword ptr [rsp+598h+rPos.v], xmm0
              }
            }
            _RAX = VelocityArray;
            __asm { vmovups xmm6, xmmword ptr [rax+r14*8] }
          }
          v231 = r_particleStateData->m_particleState.m_pStateDef;
          __asm { vmovups xmmword ptr [rsp+598h+rVelocity.v], xmm6 }
          if ( (v231->flags & 0x2000000) != 0 )
          {
            ParentVelocityArray = Particle_GetParentVelocityArray(&r_particleStateData->m_particleData);
            v233 = r_particleStateData->m_particleState.m_tailDataList == NULL;
            _RBX = ParentVelocityArray;
            if ( !r_particleStateData->m_particleState.m_tailDataList )
            {
              v235 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 485, ASSERT_TYPE_ASSERT, "(m_tailDataList)", (const char *)&queryFormat, "m_tailDataList");
              v233 = !v235;
              if ( v235 )
                __debugbreak();
            }
            __asm { vmovups xmm5, xmmword ptr [rbx+r14*8] }
            _RCX = r_particleStateData->m_particleState.m_tailDataList;
            __asm
            {
              vmulps  xmm1, xmm5, xmm5
              vinsertps xmm2, xmm1, xmm1, 8
              vhaddps xmm0, xmm2, xmm2
              vhaddps xmm0, xmm0, xmm0
              vsqrtps xmm4, xmm0
              vcomiss xmm4, xmm9
              vmulps  xmm1, xmm5, xmm5
              vinsertps xmm2, xmm1, xmm1, 8
              vhaddps xmm0, xmm2, xmm2
              vhaddps xmm0, xmm0, xmm0
              vrsqrtps xmm1, xmm0
              vmulps  xmm5, xmm1, xmm5
              vbroadcastss xmm0, dword ptr [rcx+14h]
              vmulps  xmm3, xmm6, xmm6
              vmulps  xmm4, xmm0, xmm4
              vinsertps xmm0, xmm3, xmm3, 8
              vhaddps xmm1, xmm0, xmm0
              vhaddps xmm2, xmm1, xmm1
              vcomiss xmm2, xmm9
              vinsertps xmm0, xmm3, xmm3, 8
              vhaddps xmm1, xmm0, xmm0
              vhaddps xmm0, xmm1, xmm1
              vrsqrtps xmm1, xmm0
              vmulps  xmm6, xmm1, xmm6
              vsubps  xmm0, xmm5, xmm6
              vmulps  xmm1, xmm0, xmm4
              vaddps  xmm6, xmm1, xmm6
              vmovss  xmm1, dword ptr [rcx+10h]
              vcomiss xmm1, xmm7
              vmovups xmmword ptr [rsp+598h+rVelocity.v], xmm6
              vcomiss xmm10, dword ptr [rcx+18h]
            }
            v127 = v352;
            if ( v233 )
            {
              v262 = m_particleCountRunning - 1;
              __asm { vmovups xmmword ptr [rcx], xmm6 }
              if ( particleIndex == v262 )
                _RCX->updateTimer = 0.0;
            }
          }
          v182 = !_RDI->m_particleDrawData[0].hasParticleSim;
          _RAX = RotationAngleArray;
          __asm { vmovups xmm0, xmmword ptr [rax+r14*8] }
          _RAX = CameraDistanceArray;
          __asm
          {
            vmovss  dword ptr [rdi+20h], xmm0
            vmovss  xmm1, dword ptr [rax+r15*4]
          }
          if ( v182 )
          {
            __asm { vmovss  dword ptr [rsp+598h+pParticleSimAnimation], xmm1 }
            if ( ParticleEmitter::DrawSetup_Tail(_RSI, pCamera, frustumPlaneCount, r_particleStateData->m_particleState.m_elementTypeModule.pModuleInitTail, &rOutTangent, &rOutBitangent, &normal, &rPos, &rVelocity, pParticleSimAnimation, _RDI->m_particleDrawData) )
              goto LABEL_149;
          }
          else
          {
            __asm { vmovaps xmm2, xmm1; cameraDistance }
            if ( !ParticleEmitter::CullBasedOnAlphaThreshhold(_RSI, NULL, *(float *)&_XMM2, _RDI->m_particleDrawData) )
            {
              __asm { vmovups xmmword ptr [rdi+50h], xmm6 }
LABEL_149:
              if ( !BYTE2(r_particleStateData->m_particleState.m_elementTypeModule.pModule[1].m_flags) )
                goto LABEL_154;
              v163 = pDrawStatea;
              if ( !_RDI->m_particleDrawData[0].hasParticleSim )
                _RDI->m_particleDrawData[0].rotationAngle = 0.0;
              goto LABEL_155;
            }
          }
          goto LABEL_228;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VFX: Unsupported sprite type in ParticleEmitter::DrawElements_SpriteCommon") )
            __debugbreak();
LABEL_154:
          v163 = pDrawStatea;
LABEL_155:
          v268 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+74h]
            vmovss  xmm3, dword ptr [rdi+70h]; width
            vmovss  dword ptr [rsp+598h+fmt], xmm0
          }
          ParticleSystem::AccumulateBounds(v268, boundsAccumulator, &_RDI->m_particleDrawData[0].posWorld, *(float *)&_XMM3, fmtb);
          if ( (ParticleEmitter::GetSystemOwner(_RSI)->m_flags & 0x1000000000i64) != 0 || !fx_umbra_culling->current.enabled || v127 == 4 )
            goto LABEL_163;
          if ( v127 == 3 )
            goto LABEL_183;
          if ( v127 == 1 )
            goto LABEL_163;
          v270 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+74h]
            vmovss  xmm3, dword ptr [rdi+70h]; width
          }
          v272 = v270;
          __asm { vmovss  dword ptr [rsp+598h+fmt], xmm0 }
          ParticleSystem::AccumulateBounds(v270, v381, &_RDI->m_particleDrawData[0].posWorld, *(float *)&_XMM3, fmtc);
          if ( (v272->m_flags & 0x200000000i64) != 0 && !transShadowPass )
            goto LABEL_228;
          v127 = v352;
LABEL_163:
          if ( v127 == 3 )
            goto LABEL_183;
          if ( outEmitterDataIndex != -1 )
            goto LABEL_186;
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
            ParticleDataArray = ParticleData::GetParticleDataArray(&r_particleStateData->m_particleData, PARTICLE_DATA_SHADER_PARAMS);
            _RDX = &data;
            _RBX = &ParticleDataArray[48 * _R15];
            _RAX = (__int64)v365;
            __asm
            {
              vmovups ymm0, ymmword ptr [rax+20h]
              vmovups ymmword ptr [rdx], ymm0
              vmovups ymm0, ymmword ptr [rax+40h]
              vmovups ymmword ptr [rdx+20h], ymm0
              vmovups ymm0, ymmword ptr [rax+60h]
              vmovups ymmword ptr [rdx+40h], ymm0
              vmovups ymm0, ymmword ptr [rax+80h]
              vmovups ymmword ptr [rdx+60h], ymm0
              vmovups ymm0, ymmword ptr [rax+0A0h]
              vmovups ymmword ptr [rdx+80h], ymm0
              vmovups ymm0, ymmword ptr [rax+0C0h]
            }
            v283 = *(_DWORD *)(_RAX + 12);
            __asm { vmovups ymmword ptr [rdx+0A0h], ymm0 }
            if ( v283 == 2 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx]
                vmovss  dword ptr [rsp+598h+data.depthScanColor], xmm0
                vmovss  xmm1, dword ptr [rbx+4]
                vmovss  dword ptr [rsp+598h+data.depthScanColor+4], xmm1
                vmovss  xmm0, dword ptr [rbx+8]
                vmovss  dword ptr [rsp+598h+data.depthScanColor+8], xmm0
                vmovss  xmm1, dword ptr [rbx+0Ch]
                vmovss  dword ptr [rsp+598h+data.depthScanColor+0Ch], xmm1
                vmovss  xmm0, dword ptr [rbx+10h]
                vmovss  dword ptr [rsp+598h+data.depthScanOutlineColor], xmm0
                vmovss  xmm1, dword ptr [rbx+14h]
                vmovss  dword ptr [rsp+598h+data.depthScanOutlineColor+4], xmm1
                vmovss  xmm0, dword ptr [rbx+18h]
                vmovss  dword ptr [rsp+598h+data.depthScanOutlineColor+8], xmm0
                vmovss  xmm1, dword ptr [rbx+1Ch]
                vmovss  dword ptr [rsp+598h+data.depthScanOutlineColor+0Ch], xmm1
                vmovss  xmm0, dword ptr [rbx+20h]
                vmulss  xmm2, xmm0, xmm0
                vsubss  xmm0, xmm7, xmm2; val
                vmovaps xmm2, xmm7; max
                vmovaps xmm1, xmm8; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovss  xmm1, dword ptr [rbx+24h]
                vmulss  xmm2, xmm1, xmm1
                vmovaps xmm6, xmm0
                vsubss  xmm0, xmm7, xmm2; val
                vmovaps xmm2, xmm7; max
                vmovaps xmm1, xmm8; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovss  dword ptr [rsp+598h+data.regionHighlightParms+8], xmm0
                vmovss  dword ptr [rsp+598h+data.regionHighlightParms], xmm6
              }
              goto LABEL_179;
            }
            if ( v283 == 1 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx]
                vmovss  dword ptr [rsp+598h+data.depthScanColor], xmm0
                vmovss  xmm1, dword ptr [rbx+4]
                vmovss  dword ptr [rsp+598h+data.depthScanColor+4], xmm1
                vmovss  xmm0, dword ptr [rbx+8]
                vmovss  dword ptr [rsp+598h+data.depthScanColor+8], xmm0
                vmovss  xmm1, dword ptr [rbx+0Ch]
                vmovss  dword ptr [rsp+598h+data.depthScanColor+0Ch], xmm1
                vmovss  xmm0, dword ptr [rbx+10h]
                vmovss  dword ptr [rsp+598h+data.depthScanOutlineColor], xmm0
                vmovss  xmm1, dword ptr [rbx+14h]
                vmovss  dword ptr [rsp+598h+data.depthScanOutlineColor+4], xmm1
                vmovss  xmm0, dword ptr [rbx+18h]
                vmovss  dword ptr [rsp+598h+data.depthScanOutlineColor+8], xmm0
                vmovss  xmm1, dword ptr [rbx+1Ch]
                vmovss  dword ptr [rsp+598h+data.depthScanOutlineColor+0Ch], xmm1
                vmovss  xmm2, dword ptr [rbx+24h]
                vmovss  xmm0, dword ptr [rbx+20h]
                vmovss  dword ptr [rsp+598h+data.regionHighlightParms], xmm0
                vmovss  dword ptr [rsp+598h+data.regionHighlightParms+8], xmm2
              }
LABEL_179:
              __asm
              {
                vmovss  dword ptr [rsp+598h+data.regionHighlightParms+0Ch], xmm8
                vmovss  dword ptr [rsp+598h+data.regionHighlightParms+4], xmm8
              }
            }
            v312 = R_AddCodeSurfEmitterData(v163->codeSurfGlob, &data, &outEmitterDataIndex);
            v127 = v352;
            goto LABEL_182;
          }
          v312 = R_AddCodeSurfEmitterData(v163->codeSurfGlob, (const GfxSpriteEmitter *)&v365->m_materialData, &outEmitterDataIndex);
LABEL_182:
          if ( !v312 )
            goto LABEL_228;
LABEL_183:
          if ( outEmitterDataIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3157, ASSERT_TYPE_ASSERT, "(emitterDataIndex != 0xffffffff)", (const char *)&queryFormat, "emitterDataIndex != PER_EMITTER_DATA_INVALID_INDEX") )
            __debugbreak();
LABEL_186:
          if ( v350 || _RDI->m_particleDrawData[0].hasParticleSim )
            goto LABEL_196;
          if ( !pLinkedAssetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3162, ASSERT_TYPE_ASSERT, "(pMaterialLinkedAssetListDef)", (const char *)&queryFormat, "pMaterialLinkedAssetListDef") )
            __debugbreak();
          v313 = Particle_GetRandomAsset(pLinkedAssetList, RandomSeedArray[_R15], FXRAND_VISUAL)->material;
          material = v313;
          if ( SLOBYTE(v313->surfaceFlags) < 0 )
          {
            v314 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
            v315 = ParticleSystem::GetDef(v314);
            R_WarnOncePerFrame(R_WARN_VFX_INVALID_MATERIAL, material->name, v315->name, "SURF_NODRAW");
            goto LABEL_228;
          }
          if ( v127 <= 8 )
          {
            v316 = 265;
            if ( _bittest(&v316, v127) )
            {
              v317 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
              v318 = ParticleSystem::GetDef(v317);
              R_WarnOncePerFrame(R_WARN_VFX_MATERIAL_LIST_ATLAS, material->name, v318->name, "SURF_NODRAW");
LABEL_196:
              v313 = material;
            }
          }
          if ( v313 )
            goto LABEL_201;
          if ( !_RDI->m_particleDrawData[0].hasParticleSim )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3176, ASSERT_TYPE_ASSERT, "(material || r_particleDrawData.hasParticleSim)", (const char *)&queryFormat, "material || r_particleDrawData.hasParticleSim") )
              __debugbreak();
LABEL_201:
            if ( !_RDI->m_particleDrawData[0].hasParticleSim )
              goto LABEL_208;
          }
          if ( !v351 )
          {
            v319 = v382;
            if ( !v382 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3182, ASSERT_TYPE_ASSERT, "(pParticleSimLinkedAssetListDef)", (const char *)&queryFormat, "pParticleSimLinkedAssetListDef") )
              __debugbreak();
            v320 = (FxParticleSimAnimation *)Particle_GetRandomAsset(v319, RandomSeedArray[_R15], FXRAND_VISUAL)->material;
            v362 = v320;
            if ( SLOBYTE(v320->material->surfaceFlags) < 0 )
            {
              v321 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
              v322 = ParticleSystem::GetDef(v321);
              R_WarnOncePerFrame(R_WARN_VFX_INVALID_MATERIAL, v320->material->name, v322->name, "SURF_NODRAW");
              goto LABEL_228;
            }
          }
          else
          {
LABEL_208:
            v320 = v362;
          }
          if ( !v320 && _RDI->m_particleDrawData[0].hasParticleSim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3191, ASSERT_TYPE_ASSERT, "(pParticleSimAnimation || !r_particleDrawData.hasParticleSim)", (const char *)&queryFormat, "pParticleSimAnimation || !r_particleDrawData.hasParticleSim") )
            __debugbreak();
          if ( (_BYTE)v383 )
          {
            __asm
            {
              vmovups xmm1, xmmword ptr [rdi+40h]
              vmovss  xmm3, dword ptr [rdi+6Ch]; opacity
              vmovss  xmm2, dword ptr [rdi+70h]; radius
            }
            system = v163->system;
            __asm
            {
              vmovss  dword ptr [rsp+598h+posWorld], xmm1
              vextractps dword ptr [rsp+598h+posWorld+4], xmm1, 1
              vextractps dword ptr [rsp+598h+posWorld+8], xmm1, 2
            }
            FX_AddVisBlocker(system, &posWorld, *(float *)&_XMM2, *(float *)&_XMM3);
          }
          if ( (ParticleEmitter::GetSystemOwner(_RSI)->m_flags & 0x1000000000i64) != 0 )
          {
            v326 = ParticleManager::GetParticleManager(_RSI->m_pSystemOwner->m_localClientNum);
            v327 = ParticleEmitter::GetSystemOwner(_RSI);
            ParticleManager::GetGlobalTintColor(v326, &v403, v327);
            __asm
            {
              vmovups xmm1, xmmword ptr [rsi+60h]
              vmulps  xmm1, xmm1, xmmword ptr [rsp+598h+var_158.v]
            }
            v320 = v362;
            __asm { vmovups xmmword ptr [rsi+60h], xmm1 }
          }
          if ( _RDI->m_particleDrawData[0].hasParticleSim )
            v330 = v320->material;
          else
            v330 = material;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+174h]
            vsubss  xmm1, xmm0, dword ptr [rcx+r15*4]
          }
          _RDI->m_particleDrawData[0].randomSeed = RandomSeedArray[_R15];
          __asm { vmovss  dword ptr [rdi+18h], xmm1 }
          if ( v330 )
            packedAtlasData = v330->packedAtlasData;
          else
            packedAtlasData = NULL;
          _RDI->m_particleDrawData[0].packedAtlasData = packedAtlasData;
          if ( (ParticleEmitter::GetEmitterDef(_RSI)->flags & 0x200000) != 0 || (v330->surfaceFlags & 0x8000000) != 0 && (ParticleEmitter::GetEmitterDef(_RSI)->flags & 0x400000) == 0 )
            _RDI->m_particleDrawData[0].codeSurfFlags |= 2u;
          ParticleEmitter::SpriteDrawPostCull(_RSI, v163, r_particleStateData, &rOutTangent, &rOutBitangent, &normal, activeLightGridsBitmaska, material, _RDI->m_particleDrawData, v362, particleIndex, posArray, &rParticleTransform, &r_particleStateData->m_particleState.m_elementTypeModule, &outFlareDrawData, outEmitterDataIndex);
LABEL_228:
          p_posWorld = &_RDI->m_particleDrawData[0].posWorld;
          v94 = particleIndex + 1;
          ++_R15;
          particleIndex = v94;
          if ( v94 < m_particleCountRunning )
            continue;
          __asm
          {
            vmovaps xmm10, [rsp+598h+var_88]
            vmovaps xmm9, [rsp+598h+var_78]
          }
          break;
      }
      break;
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+598h+var_48]
    vmovaps xmm7, [rsp+598h+var_58]
    vmovaps xmm8, [rsp+598h+var_68]
    vmovaps xmm11, [rsp+598h+var_98]
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
  float4 *RotationAngleArray; 
  int *RandomSeedArray; 
  ParticleState::ElementTypeModule v21; 
  unsigned int v22; 
  const ParticleLinkedAssetListDef *v24; 
  __int64 v26; 
  int v37; 
  int v38; 
  __int64 v41; 
  char v44; 
  unsigned __int8 v69; 
  unsigned __int8 v76; 
  unsigned __int8 v82; 
  unsigned __int8 v90; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  FxMarkProjectionAxis v103; 
  unsigned __int8 color[4]; 
  unsigned int v105; 
  float4 *ColorArray; 
  ParticleEmitter *v107; 
  const Particle_DrawData *v108; 
  float4 *PositionArray; 
  vector4 *rEmitterTransform; 
  ParticleState *rParticleState; 
  __int64 v112; 
  float v113; 
  float v114; 
  float v115; 
  vec4_t result; 
  tmat33_t<vec3_t> v117; 
  vec3_t origin; 
  __int128 v119; 
  tmat33_t<vec3_t> originalAxis; 
  vec4_t markSizeOrig; 
  tmat33_t<vec3_t> axis; 

  m_particleCountRunning = r_particleStateData->m_particleData.m_particleCountRunning;
  v107 = this;
  v108 = r_particleDrawData;
  rParticleState = &r_particleStateData->m_particleState;
  v105 = m_particleCountRunning;
  _RDI = Particle_GetSizeArray(&r_particleStateData->m_particleData);
  PositionArray = Particle_GetPositionArray(&r_particleStateData->m_particleData);
  RotationAngleArray = Particle_GetRotationAngleArray(&r_particleStateData->m_particleData);
  ColorArray = Particle_GetColorArray(&r_particleStateData->m_particleData);
  _R14 = Particle_GetAtlasIndexArray(&r_particleStateData->m_particleData);
  RandomSeedArray = Particle_GetRandomSeedArray(&r_particleStateData->m_particleData);
  _RAX = (vector4 *)ParticleEmitter::GetEmitterTransform(this, &r_particleStateData->m_particleState);
  v21.pModule = (const ParticleModule *)r_particleStateData->m_particleState.m_elementTypeModule;
  v22 = 0;
  rEmitterTransform = _RAX;
  __asm { vmovups ymm0, ymmword ptr [rax] }
  v24 = (const ParticleLinkedAssetListDef *)&v21.pModule[2];
  v103 = *((_BYTE *)&v21.pModule[6].m_type + 3);
  __asm
  {
    vmovups [rsp+298h+var_188], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups [rsp+298h+var_168], ymm0
  }
  if ( m_particleCountRunning )
  {
    __asm { vmovaps [rsp+298h+var_48], xmm6 }
    v26 = (char *)RandomSeedArray - (char *)_R14;
    __asm { vmovaps [rsp+298h+var_58], xmm7 }
    _R12 = (char *)RotationAngleArray - (char *)_RDI;
    ColorArray = (float4 *)((char *)ColorArray - (__int64)_RDI);
    __asm
    {
      vmovaps [rsp+298h+var_68], xmm8
      vmovss  xmm8, cs:__real@437f0000
      vmovaps [rsp+298h+var_78], xmm9
      vmovss  xmm9, cs:__real@3f000000
      vmovaps [rsp+298h+var_88], xmm10
      vmovss  xmm10, dword ptr [rsp+298h+var_168+8]
      vmovaps [rsp+298h+var_98], xmm11
      vmovss  xmm11, dword ptr [rsp+298h+var_188+18h]
      vmovaps [rsp+298h+var_A8], xmm12
      vmovss  xmm12, dword ptr [rsp+298h+var_188+8]
      vmovaps [rsp+298h+var_B8], xmm13
      vmovss  xmm13, dword ptr [rsp+298h+var_188]
      vmovaps [rsp+298h+var_C8], xmm14
      vmovss  xmm14, dword ptr [rsp+298h+var_188+4]
      vmovaps [rsp+298h+var_D8], xmm15
      vmovss  xmm15, dword ptr [rsp+298h+var_188+10h]
    }
    v112 = v26;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      v37 = *(_DWORD *)((char *)_R14 + v26);
      Particle_VerifyAssetList(v24);
      v38 = Particle_RandomIndex(v37, FXRAND_VISUAL, v24->numAssets);
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmm7, xmmword ptr [r12+rdi]
      }
      v41 = (__int64)&v24->assetList[v38];
      __asm { vmovaps xmmword ptr [rsp+298h+markSizeOrig], xmm0 }
      _RAX = FX_DeriveMarkSize(&result, &markSizeOrig);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vucomiss xmm0, xmm6
        vmovups [rsp+298h+var_198], xmm0
      }
      if ( !v44 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+298h+var_198+4]
          vucomiss xmm0, xmm6
          vmovss  xmm0, dword ptr [rsp+298h+var_198+8]
          vucomiss xmm0, xmm6
        }
        _RBX = v108;
        ParticleEmitter::GetWorldPos(v107, &PositionArray[v22], &v108->posWorld, rParticleState, rEmitterTransform);
        __asm
        {
          vmovups xmm1, xmmword ptr [rbx+40h]
          vunpcklps xmm0, xmm13, xmm14
          vmovsd  qword ptr [rsp+298h+originalAxis], xmm0
          vmovss  xmm0, dword ptr [rsp+298h+var_188+14h]
          vunpcklps xmm0, xmm15, xmm0
          vmovsd  qword ptr [rsp+298h+originalAxis+0Ch], xmm0
          vmovss  xmm0, dword ptr [rsp+298h+var_168]
          vmovss  dword ptr [rsp+298h+origin], xmm1
          vextractps dword ptr [rsp+298h+origin+4], xmm1, 1
          vextractps dword ptr [rsp+298h+origin+8], xmm1, 2
          vmovss  xmm1, dword ptr [rsp+298h+var_168+4]
          vunpcklps xmm0, xmm0, xmm1
          vmovss  [rsp+298h+var_208], xmm12
        }
        originalAxis.m[0].v[2] = v113;
        __asm { vmovss  [rsp+298h+var_1F8], xmm11 }
        originalAxis.m[1].v[2] = v114;
        __asm
        {
          vmovss  [rsp+298h+var_1E8], xmm10
          vmovaps xmm3, xmm7; rotationAngle
          vmovsd  qword ptr [rsp+298h+originalAxis+18h], xmm0
        }
        originalAxis.m[2].v[2] = v115;
        _RAX = FX_OrientDecalProjectionAxis(&v117, &originalAxis, v103, *(float *)&_XMM3);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm4, xmm4, xmm4
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+298h+axis], ymm0
        }
        axis.m[2].v[2] = _RAX->m[2].v[2];
        _RAX = ColorArray;
        __asm
        {
          vmovups xmm3, xmmword ptr [rax+rdi]
          vmulss  xmm0, xmm3, xmm8
          vaddss  xmm2, xmm0, xmm9
          vmovss  xmm2, xmm1, xmm2
          vroundss xmm0, xmm4, xmm2, 1
          vcvttss2si ecx, xmm0
          vshufps xmm0, xmm3, xmm3, 55h ; 'U'
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v69 = _ECX;
        __asm { vmulss  xmm0, xmm0, xmm8 }
        if ( _ECX < 0 )
          v69 = 0;
        __asm { vaddss  xmm2, xmm0, xmm9 }
        color[0] = v69;
        __asm
        {
          vmovss  xmm2, xmm1, xmm2
          vroundss xmm0, xmm4, xmm2, 1
          vcvttss2si ecx, xmm0
          vshufps xmm0, xmm3, xmm3, 0AAh ; 'ª'
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v76 = _ECX;
        __asm { vmulss  xmm0, xmm0, xmm8 }
        if ( _ECX < 0 )
          v76 = 0;
        __asm { vaddss  xmm2, xmm0, xmm9 }
        color[1] = v76;
        __asm
        {
          vmovss  xmm2, xmm1, xmm2
          vroundss xmm0, xmm4, xmm2, 1
          vcvttss2si ecx, xmm0
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v82 = _ECX;
        if ( _ECX < 0 )
          v82 = 0;
        __asm { vcvttss2si ebx, dword ptr [r14] }
        color[2] = v82;
        __asm
        {
          vshufps xmm3, xmm3, xmm3, 0FFh
          vmulss  xmm0, xmm3, xmm8
          vaddss  xmm2, xmm0, xmm9
          vmovss  xmm2, xmm1, xmm2
          vroundss xmm0, xmm4, xmm2, 1
          vcvttss2si ecx, xmm0
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v90 = _ECX;
        if ( _ECX < 0 )
          v90 = 0;
        color[3] = v90;
        SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v107);
        Def = ParticleSystem::GetDef(SystemOwner);
        R_AddParticleDecalVolume(&origin, (const vec3_t *)&v119, &axis, color, _EBX, *(Material **)(v41 + 8), Def->name);
      }
      v26 = v112;
      ++v22;
      ++_RDI;
      ++_R14;
    }
    while ( v22 < v105 );
    __asm
    {
      vmovaps xmm15, [rsp+298h+var_D8]
      vmovaps xmm14, [rsp+298h+var_C8]
      vmovaps xmm13, [rsp+298h+var_B8]
      vmovaps xmm12, [rsp+298h+var_A8]
      vmovaps xmm11, [rsp+298h+var_98]
      vmovaps xmm10, [rsp+298h+var_88]
      vmovaps xmm9, [rsp+298h+var_78]
      vmovaps xmm8, [rsp+298h+var_68]
      vmovaps xmm7, [rsp+298h+var_58]
      vmovaps xmm6, [rsp+298h+var_48]
    }
  }
}

/*
==============
ParticleEmitter::DrawSetup_Flare
==============
*/
bool ParticleEmitter::DrawSetup_Flare(ParticleEmitter *this, bool drawFlares, const FxCamera *pCamera, unsigned int frustumPlaneCount, const ParticleState *pParticleState, float rotationAngle, float cameraDistance, Particle_DrawData *r_particleDrawData, Particle_FlareDrawData *outFlareDrawData)
{
  bool v30; 
  bool v31; 
  unsigned int m_flags; 
  bool v121; 
  bool v122; 
  bool result; 
  float fmt; 
  float c; 
  float s[3]; 

  _RSI = r_particleDrawData;
  _RDI = pCamera;
  _RBP = outFlareDrawData;
  _R15 = this;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3320, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3321, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+128h+var_48], xmm6
    vmovaps [rsp+128h+var_58], xmm7
    vmovaps [rsp+128h+var_68], xmm8
    vmovaps [rsp+128h+var_78], xmm9
    vmovaps [rsp+128h+var_88], xmm10
    vmovaps [rsp+128h+var_98], xmm11
    vmovaps [rsp+128h+var_A8], xmm12
    vmovaps [rsp+128h+var_B8], xmm13
    vmovaps [rsp+128h+var_C8], xmm14
  }
  if ( !drawFlares )
    goto LABEL_35;
  if ( fx_draw_flare->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, [rsp+128h+cameraDistance]
      vmovss  dword ptr [rsp+128h+fmt], xmm0
    }
    if ( !ParticleEmitter::CullElementForDraw_Sprite(_R15, _RDI, frustumPlaneCount, pParticleState, fmt, r_particleDrawData) )
    {
      __asm { vmovups xmm6, xmmword ptr [rsi+40h] }
      _RBX.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
      __asm
      {
        vshufps xmm7, xmm6, xmm6, 55h ; 'U'
        vshufps xmm8, xmm6, xmm6, 0AAh ; 'ª'
      }
      v30 = _RBX.pModule == NULL;
      if ( !_RBX.pModule )
      {
        v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3360, ASSERT_TYPE_ASSERT, "(pModuleInitFlare)", (const char *)&queryFormat, "pModuleInitFlare");
        v30 = !v31;
        if ( v31 )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm4, xmm8, dword ptr [rdi+8]
        vsubss  xmm5, xmm6, dword ptr [rdi]
        vsubss  xmm3, xmm7, dword ptr [rdi+4]
        vmulss  xmm1, xmm3, dword ptr [rdi+80h]
        vmulss  xmm0, xmm5, dword ptr [rdi+7Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rdi+84h]
        vaddss  xmm0, xmm2, xmm1
        vxorps  xmm9, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm5, dword ptr [rdi+88h]
        vmulss  xmm1, xmm3, dword ptr [rdi+8Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rdi+90h]
        vmulss  xmm0, xmm5, dword ptr [rdi+70h]
        vaddss  xmm10, xmm2, xmm1
        vmulss  xmm1, xmm3, dword ptr [rdi+74h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rdi+78h]
        vaddss  xmm14, xmm2, xmm1
        vxorps  xmm8, xmm8, xmm8
        vcomiss xmm14, xmm8
        vmovss  [rsp+128h+var_F8], xmm9
        vmovss  [rsp+128h+var_F4], xmm10
      }
      if ( !v30 )
      {
        m_flags = _RBX.pModule[4].m_flags;
        __asm
        {
          vmovaps [rsp+128h+var_D8], xmm15
          vmovss  xmm15, cs:__real@3f800000
          vmovaps xmm13, xmm15
          vmovaps xmm7, xmm15
        }
        if ( (m_flags & 2) != 0 )
        {
          __asm
          {
            vmulss  xmm1, xmm10, xmm10
            vmulss  xmm0, xmm9, xmm9
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm14, xmm14
            vaddss  xmm0, xmm2, xmm1; val
          }
          *(double *)&_XMM0 = I_rsqrt(*(float *)&_XMM0);
          m_flags = _RBX.pModule[4].m_flags;
          __asm { vmulss  xmm13, xmm0, xmm14 }
        }
        if ( (m_flags & 0x60) == 32 )
        {
          _RAX = ParticleEmitter::GetEmitterTransform(_R15, pParticleState);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi]
            vmovss  xmm1, dword ptr [rdi+4]
            vsubss  xmm8, xmm0, xmm6
            vmovss  xmm0, dword ptr [rdi+8]
            vmovups xmm12, xmmword ptr [rax]
            vmovups xmm10, xmmword ptr [rax+10h]
            vmovups xmm11, xmmword ptr [rax+20h]
            vshufps xmm2, xmm6, xmm6, 55h ; 'U'
            vsubss  xmm7, xmm1, xmm2
            vshufps xmm3, xmm6, xmm6, 0AAh ; 'ª'
            vsubss  xmm6, xmm0, xmm3
            vmulss  xmm2, xmm7, xmm7
            vmulss  xmm1, xmm8, xmm8
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm0, xmm3, xmm0; val
          }
          *(double *)&_XMM0 = I_rsqrt(*(float *)&_XMM0);
          __asm
          {
            vmulss  xmm5, xmm0, xmm8
            vmovups xmm8, xmmword ptr [rbx+10h]
            vmulss  xmm9, xmm0, xmm6
            vmulss  xmm4, xmm0, xmm7
            vshufps xmm6, xmm8, xmm8, 55h ; 'U'
            vshufps xmm1, xmm12, xmm12, 55h ; 'U'
            vshufps xmm7, xmm8, xmm8, 0AAh ; 'ª'
            vshufps xmm0, xmm10, xmm10, 55h ; 'U'
            vmulss  xmm2, xmm0, xmm6
            vmulss  xmm0, xmm1, xmm8
            vaddss  xmm3, xmm2, xmm0
            vshufps xmm2, xmm11, xmm11, 55h ; 'U'
            vmulss  xmm0, xmm2, xmm7
            vaddss  xmm1, xmm3, xmm0
            vmulss  xmm4, xmm1, xmm4
            vmulss  xmm0, xmm10, xmm6
            vmulss  xmm2, xmm12, xmm8
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm1, xmm11, xmm7
            vaddss  xmm0, xmm3, xmm1
            vmulss  xmm2, xmm0, xmm5
            vaddss  xmm5, xmm4, xmm2
            vshufps xmm1, xmm10, xmm10, 0AAh ; 'ª'
            vmulss  xmm2, xmm1, xmm6
            vshufps xmm1, xmm11, xmm11, 0AAh ; 'ª'
            vshufps xmm0, xmm12, xmm12, 0AAh ; 'ª'
            vmulss  xmm0, xmm0, xmm8
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm0, xmm1, xmm7
            vaddss  xmm1, xmm3, xmm0
            vmulss  xmm2, xmm1, xmm9
            vaddss  xmm6, xmm5, xmm2
            vmovaps xmm1, xmm6; time
          }
          *(double *)&_XMM0 = Particle_GetCurveValue((const ParticleCurveDef *)&_RBX.pModule[14], *(const float *)&_XMM1);
          __asm
          {
            vmovaps xmm1, xmm6; time
            vmovaps xmm7, xmm0
          }
          *(double *)&_XMM0 = Particle_GetCurveValue((const ParticleCurveDef *)&_RBX.pModule[16], *(const float *)&_XMM1);
          __asm
          {
            vmovaps xmm6, xmm0
            vmovaps xmm0, xmm7; val
            vmovaps xmm2, xmm15; max
            vxorps  xmm1, xmm1, xmm1; min
            vxorps  xmm8, xmm8, xmm8
          }
          I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmulss  xmm13, xmm13, xmm0
            vmovaps xmm0, xmm6; val
            vmovaps xmm2, xmm15; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  xmm9, [rsp+128h+var_F8]
            vmovss  xmm10, [rsp+128h+var_F4]
            vmovaps xmm7, xmm0
          }
        }
        ParticleEmitter::ShouldDrawWithViewModel(_R15, pParticleState);
        __asm { vmovss  xmm2, dword ptr [rbx+0Ch] }
        v121 = 0;
        v122 = (_RBX.pModule[4].m_flags & 4) == 0;
        __asm
        {
          vmulss  xmm0, xmm14, dword ptr [rcx+rdi]
          vdivss  xmm1, xmm2, xmm0
          vmulss  xmm0, xmm14, dword ptr [rcx+rdi+4]
          vmulss  xmm11, xmm1, xmm9
          vdivss  xmm1, xmm10, xmm0
          vmulss  xmm0, xmm14, dword ptr [rdi+0B4h]
          vmulss  xmm12, xmm1, xmm2
          vdivss  xmm2, xmm9, xmm0
          vmovss  [rsp+128h+var_F8], xmm0
          vmulss  xmm0, xmm14, dword ptr [rdi+0B8h]
          vmovss  [rsp+128h+var_E8], xmm0
          vmulss  xmm1, xmm2, xmm2
          vdivss  xmm0, xmm10, xmm0
          vmulss  xmm0, xmm0, xmm0
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm9, xmm1, xmm1
        }
        if ( !v122 )
        {
          __asm
          {
            vaddss  xmm0, xmm11, xmm15
            vmulss  xmm1, xmm0, cs:__real@3f000000; time
          }
          *(double *)&_XMM0 = Particle_GetCurveValue((const ParticleCurveDef *)&_RBX.pModule[10], *(const float *)&_XMM1);
          __asm
          {
            vaddss  xmm1, xmm12, xmm15
            vmulss  xmm1, xmm1, cs:__real@3f000000; time
            vmovaps xmm10, xmm0
          }
          *(double *)&_XMM0 = Particle_GetCurveValue((const ParticleCurveDef *)&_RBX.pModule[12], *(const float *)&_XMM1);
          __asm
          {
            vmovss  [rsp+128h+var_F4], xmm0
            vmovaps xmm2, xmm15; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          if ( (_RBX.pModule[4].m_flags & 0x10) != 0 )
          {
            __asm { vmaxss  xmm0, xmm0, xmm10; val }
            I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm { vmulss  xmm13, xmm13, xmm0 }
          }
          else
          {
            __asm { vmovaps xmm0, xmm10; val }
            I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmulss  xmm6, xmm13, xmm0
              vmovss  xmm0, [rsp+128h+var_F4]; val
              vmovaps xmm2, xmm15; max
              vxorps  xmm1, xmm1, xmm1; min
            }
            I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm { vmulss  xmm13, xmm6, xmm0 }
          }
          v121 = (_RBX.pModule[4].m_flags & 8) != 0;
          v122 = (_RBX.pModule[4].m_flags & 8) == 0;
        }
        __asm
        {
          vcomiss xmm13, xmm8
          vmovaps xmm15, [rsp+128h+var_D8]
        }
        if ( !v122 )
        {
          __asm
          {
            vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
            vinsertps xmm1, xmm1, xmm13, 0
            vinsertps xmm1, xmm1, xmm13, 10h
            vinsertps xmm1, xmm1, xmm13, 20h ; ' '
            vmulps  xmm0, xmm1, xmmword ptr [rsi+30h]
            vmovups xmmword ptr [rsi+30h], xmm0
          }
          if ( v121 )
          {
            __asm
            {
              vmovaps xmm1, xmm13
              vshufps xmm1, xmm1, xmm1, 0
            }
          }
          __asm
          {
            vmulps  xmm1, xmm1, xmmword ptr [rsi+60h]
            vshufps xmm0, xmm1, xmm1, 0FFh
            vmovups xmmword ptr [rsi+60h], xmm1
            vcomiss xmm0, dword ptr [r15+1A4h]
          }
          if ( v121 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+2Ch]
              vucomiss xmm1, xmm8
              vsubss  xmm0, xmm14, dword ptr [rbx+28h]
              vdivss  xmm1, xmm0, xmm1
              vmulss  xmm2, xmm1, dword ptr [rbx+34h]
              vaddss  xmm3, xmm2, dword ptr [rbx+30h]
              vmulss  xmm7, xmm7, xmm3
              vmovss  xmm0, dword ptr [rbx+3Ch]
              vucomiss xmm0, xmm8
              vmovss  xmm6, [rsp+128h+rotationAngle]
              vmulss  xmm0, xmm0, xmm9
              vaddss  xmm1, xmm0, dword ptr [rbx+38h]
              vaddss  xmm6, xmm1, xmm6
            }
            if ( *(_DWORD *)&_RBX.pModule[4].m_type )
            {
              __asm
              {
                vmovaps xmm1, xmm11; X
                vmovaps xmm0, xmm12; Y
              }
              *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, edi
                vmulss  xmm2, xmm0, xmm1
                vaddss  xmm6, xmm6, xmm2
              }
            }
            __asm { vmovaps xmm0, xmm6; radians }
            FastSinCos(*(const float *)&_XMM0, s, &c);
            __asm
            {
              vmulss  xmm0, xmm9, dword ptr [rbx+44h]
              vaddss  xmm1, xmm0, dword ptr [rbx+40h]
              vmulss  xmm0, xmm9, dword ptr [rbx+4Ch]
              vmulss  xmm2, xmm1, xmm7
              vmulss  xmm5, xmm2, dword ptr [rsi+70h]
              vaddss  xmm1, xmm0, dword ptr [rbx+48h]
              vmulss  xmm6, xmm5, [rsp+128h+c]
              vmulss  xmm2, xmm1, xmm7
              vmulss  xmm4, xmm2, dword ptr [rsi+74h]
              vmulss  xmm2, xmm4, [rsp+128h+s]
              vmulss  xmm7, xmm5, [rsp+128h+s]
              vmulss  xmm5, xmm4, [rsp+128h+c]
              vsubss  xmm0, xmm6, xmm2
              vdivss  xmm8, xmm0, [rsp+128h+var_F8]
              vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000
              vmovss  dword ptr [rbp+0], xmm11
              vmovss  dword ptr [rbp+4], xmm12
            }
            outFlareDrawData->clipPos.v[2] = 0.0;
            __asm
            {
              vaddss  xmm1, xmm5, xmm7
              vdivss  xmm4, xmm1, [rsp+128h+var_E8]
              vsubss  xmm2, xmm0, xmm2
              vdivss  xmm3, xmm2, [rsp+128h+var_F8]
              vmovss  dword ptr [rbp+0Ch], xmm8
              vmovss  dword ptr [rbp+10h], xmm4
              vsubss  xmm1, xmm5, xmm7
              vdivss  xmm0, xmm1, [rsp+128h+var_E8]
              vmovss  dword ptr [rbp+14h], xmm3
              vmovss  dword ptr [rbp+18h], xmm0
            }
            goto LABEL_34;
          }
        }
      }
    }
LABEL_35:
    result = 0;
    goto LABEL_36;
  }
LABEL_34:
  result = 1;
LABEL_36:
  __asm
  {
    vmovaps xmm14, [rsp+128h+var_C8]
    vmovaps xmm13, [rsp+128h+var_B8]
    vmovaps xmm12, [rsp+128h+var_A8]
    vmovaps xmm11, [rsp+128h+var_98]
    vmovaps xmm10, [rsp+128h+var_88]
    vmovaps xmm9, [rsp+128h+var_78]
    vmovaps xmm8, [rsp+128h+var_68]
    vmovaps xmm7, [rsp+128h+var_58]
    vmovaps xmm6, [rsp+128h+var_48]
  }
  return result;
}

/*
==============
ParticleEmitter::DrawSetup_GeoTrail
==============
*/
bool ParticleEmitter::DrawSetup_GeoTrail(ParticleEmitter *this, unsigned int frustumPlaneCount, const ParticleState *pParticleState, unsigned int particleIndex, const Particle_DrawData *r_particleDrawData)
{
  __int64 v9; 
  Particle_TrailData *v12; 
  unsigned int numPointsRunning; 
  __int64 lastPointIndex; 
  unsigned int numPointsMax; 
  unsigned int firstPointIndex; 
  char v29; 
  bool result; 

  v9 = particleIndex;
  _R14 = this;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3519, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !pParticleState->m_trailDataList )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 482, ASSERT_TYPE_ASSERT, "(m_trailDataList)", (const char *)&queryFormat, "m_trailDataList") )
      __debugbreak();
    if ( !pParticleState->m_trailDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3520, ASSERT_TYPE_ASSERT, "(pParticleState->GetTrailDataList())", (const char *)&queryFormat, "pParticleState->GetTrailDataList()") )
      __debugbreak();
  }
  if ( (unsigned int)v9 >= pParticleState->m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3521, ASSERT_TYPE_ASSERT, "(particleIndex < pParticleState->GetParticleCountMax())", (const char *)&queryFormat, "particleIndex < pParticleState->GetParticleCountMax()") )
    __debugbreak();
  v12 = &ParticleState::GetTrailDataList((ParticleState *)pParticleState)[v9];
  if ( !pParticleState->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  if ( !ParticleManager::ParticleSystemPointerInRange(pParticleState->m_pEmitterOwner->m_pSystemOwner->m_localClientNum, v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3525, ASSERT_TYPE_ASSERT, "(ParticleManager::ParticleSystemPointerInRange( pParticleState->GetEmitterOwner()->GetLocalClientNum(), pTrailData ))", (const char *)&queryFormat, "ParticleManager::ParticleSystemPointerInRange( pParticleState->GetEmitterOwner()->GetLocalClientNum(), pTrailData )") )
    __debugbreak();
  ++_R14->m_numTrails;
  __asm { vmovaps [rsp+88h+var_38], xmm7 }
  _R14->m_numTrailSegments += v12->numPointsRunning * v12->numSheets;
  numPointsRunning = v12->numPointsRunning;
  if ( numPointsRunning < 2 )
    goto LABEL_32;
  lastPointIndex = v12->lastPointIndex;
  _RAX = v12->pointList;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  _RCX = 10 * lastPointIndex;
  __asm { vucomiss xmm7, dword ptr [rax+rcx*8+40h] }
  if ( !(10 * lastPointIndex) )
    goto LABEL_32;
  numPointsMax = v12->numPointsMax;
  __asm
  {
    vmovaps [rsp+88h+var_48], xmm8
    vmovaps [rsp+88h+var_58], xmm9
  }
  if ( numPointsRunning == numPointsMax )
    firstPointIndex = ((int)lastPointIndex + 1) % numPointsMax;
  else
    firstPointIndex = v12->firstPointIndex;
  if ( firstPointIndex >= numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
    __debugbreak();
  _RSI = (firstPointIndex + 1) % v12->numPointsMax;
  _RBX = ParticleEmitter::GetEmitterDef(_R14);
  _RDI = Particle_GetSpawnTimeArray(v12->pParticleData);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+14h]
    vmovss  xmm9, dword ptr [rbx+18h]
  }
  Particle_GetRandomSeedArray(v12->pParticleData);
  __asm { vmovss  xmm0, dword ptr [rdi+rsi*4] }
  _RBX = firstPointIndex;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+rbx*4]
    vsubss  xmm5, xmm0, xmm1
    vucomiss xmm5, xmm7
  }
  if ( v29 )
  {
    _RDX = r_particleDrawData;
    _RCX = 10i64 * firstPointIndex;
    r_particleDrawData->geoTrailSegmentLerp = 0.0;
    _RAX = v12->pointList;
    __asm { vmovss  xmm1, dword ptr [rax+rcx*8+40h] }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+88h+var_28], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vsubss  xmm0, xmm6, dword ptr [rcx+rax*4]
      vmulss  xmm2, xmm9, dword ptr [rcx+rax*4]
      vmulss  xmm3, xmm0, xmm8
      vmovss  xmm0, dword ptr [r14+174h]
      vaddss  xmm4, xmm3, xmm2
      vsubss  xmm3, xmm0, xmm4
      vsubss  xmm2, xmm3, xmm1
      vdivss  xmm0, xmm2, xmm5; val
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RDX = r_particleDrawData;
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vmovaps xmm6, [rsp+88h+var_28]
      vmovss  dword ptr [rdx+84h], xmm0
      vmulss  xmm2, xmm1, dword ptr [rcx+rax*8+40h]
      vmulss  xmm0, xmm0, dword ptr [rcx+rax*8+40h]
      vaddss  xmm1, xmm2, xmm0
    }
  }
  __asm
  {
    vmovss  dword ptr [rdx+88h], xmm1
    vmovaps xmm9, [rsp+88h+var_58]
    vmovaps xmm8, [rsp+88h+var_48]
  }
  _RAX = v12->pointList;
  _RCX = 10i64 * v12->lastPointIndex;
  __asm { vucomiss xmm1, dword ptr [rax+rcx*8+40h] }
  if ( _RCX )
    result = 1;
  else
LABEL_32:
    result = 0;
  __asm { vmovaps xmm7, [rsp+88h+var_38] }
  return result;
}

/*
==============
ParticleEmitter::DrawSetup_LightOmni
==============
*/
void ParticleEmitter::DrawSetup_LightOmni(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const FxCamera *pCamera, Particle_DrawData *r_particleDrawData)
{
  ParticleState::ElementTypeModule v12; 
  __int64 m_particleCountRunning; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v17; 
  unsigned int m_flags; 
  const ParticleLinkedAssetListDef *v19; 
  GfxLightDef *lightDef; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  const ParticleStateDef *m_pStateDef; 
  char v39; 
  bool v40; 
  const FxCamera *v62; 
  char v71; 
  char v72; 
  const ParticleModuleInitSpawn *m_pModuleInitSpawn; 
  ParticleCurveDef *m_curves; 
  int v80; 
  bool v93; 
  unsigned int frustumPlaneCount; 
  GfxLightDef *v95; 
  float *CameraDistanceArray; 
  signed __int64 v98; 
  float4 *SizeArray; 
  signed __int64 v100; 
  float4 *ColorArray; 
  signed __int64 v102; 
  __int64 v104; 
  ParticleModuleInitLightOmni *pModuleInitLightOmni; 
  vec3_t center; 
  vec3_t colorLinearSrgb; 
  vec3_t org; 

  _RDI = this;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3583, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( rParticleStateData->m_particleState.m_pStateDef->elementType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3584, ASSERT_TYPE_ASSERT, "(rParticleStateData.m_particleState.GetElementType() == PARTICLE_ELEMENT_TYPE_LIGHT_OMNI)", (const char *)&queryFormat, "rParticleStateData.m_particleState.GetElementType() == PARTICLE_ELEMENT_TYPE_LIGHT_OMNI") )
    __debugbreak();
  v12.pModule = (const ParticleModule *)rParticleStateData->m_particleState.m_elementTypeModule;
  pModuleInitLightOmni = (ParticleModuleInitLightOmni *)v12.pModule;
  if ( !v12.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3587, ASSERT_TYPE_ASSERT, "(pModuleInitLightOmni)", (const char *)&queryFormat, "pModuleInitLightOmni") )
    __debugbreak();
  m_particleCountRunning = rParticleStateData->m_particleData.m_particleCountRunning;
  _R14 = Particle_GetPositionArray(&rParticleStateData->m_particleData);
  SizeArray = Particle_GetSizeArray(&rParticleStateData->m_particleData);
  ColorArray = Particle_GetColorArray(&rParticleStateData->m_particleData);
  CameraDistanceArray = Particle_GetCameraDistanceArray(&rParticleStateData->m_particleData);
  _R15 = Particle_GetRandomSeedArray(&rParticleStateData->m_particleData);
  ParticleEmitter::GetEmitterTransform(_RDI, &rParticleStateData->m_particleState);
  EmitterDef = ParticleEmitter::GetEmitterDef(_RDI);
  v17 = pCamera->frustumPlaneCount;
  if ( (EmitterDef->flags & 4) != 0 && v17 > 5 )
    v17 = 5;
  m_flags = v12.pModule->m_flags;
  v19 = (const ParticleLinkedAssetListDef *)&v12.pModule[1];
  frustumPlaneCount = v17;
  if ( (m_flags & 0x800) != 0 )
  {
    Particle_VerifyAssetList(v19);
    v93 = v19->numAssets == 1;
    if ( v19->numAssets == 1 )
    {
      Particle_VerifyAssetList(v19);
      lightDef = v19->assetList->lightDef;
      goto LABEL_18;
    }
  }
  else
  {
    v93 = 1;
  }
  lightDef = NULL;
LABEL_18:
  v95 = lightDef;
  if ( (_DWORD)m_particleCountRunning )
  {
    _RDX = r_particleDrawData;
    v100 = (char *)SizeArray - (char *)_R14;
    v102 = (char *)ColorArray - (char *)_R14;
    __asm { vmovaps [rsp+168h+var_58], xmm6 }
    _R8 = (char *)CameraDistanceArray - (char *)_R15;
    __asm { vmovaps [rsp+168h+var_68], xmm7 }
    _RBP = &r_particleDrawData->posWorld;
    __asm
    {
      vmovaps [rsp+168h+var_78], xmm8
      vmovaps [rsp+168h+var_88], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmovaps [rsp+168h+var_98], xmm10
    }
    v104 = m_particleCountRunning;
    __asm { vxorps  xmm10, xmm10, xmm10 }
    v98 = (char *)CameraDistanceArray - (char *)_R15;
    do
    {
      m_pModuleInitRelativeVelocity = rParticleStateData->m_particleState.m_pModuleInitRelativeVelocity;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vmovdqu xmmword ptr [rbp+0], xmm0
        }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
          vshufps xmm3, xmm0, xmm0, 55h ; 'U'
          vshufps xmm4, xmm0, xmm0, 0
          vmulps  xmm0, xmm2, xmmword ptr [rax+20h]
          vaddps  xmm2, xmm0, xmmword ptr [rax+30h]
          vmulps  xmm0, xmm3, xmmword ptr [rax+10h]
          vaddps  xmm1, xmm0, xmm2
          vmulps  xmm0, xmm4, xmmword ptr [rax]
          vaddps  xmm1, xmm0, xmm1
          vmovups xmmword ptr [rbp+0], xmm1
        }
      }
      m_pStateDef = rParticleStateData->m_particleState.m_pStateDef;
      v39 = 0;
      v40 = (m_pStateDef->flags & 0x10000000) == 0i64;
      if ( (m_pStateDef->flags & 0x10000000) != 0 )
      {
        _RAX = ParticleEmitter::GetSystemOwner(_RDI);
        _RDX = r_particleDrawData;
        _R8 = v98;
        __asm
        {
          vmovups xmm1, xmmword ptr [rax+30h]
          vaddps  xmm0, xmm1, xmmword ptr [rbp+0]
          vmovups xmmword ptr [rbp+0], xmm0
        }
      }
      _RAX = v100;
      __asm { vmovups xmm7, xmmword ptr [rax+r14] }
      _RAX = v102;
      __asm
      {
        vshufps xmm8, xmm7, xmm7, 55h ; 'U'
        vmovups xmm0, xmmword ptr [rax+r14]
        vmovups [rsp+168h+var_E8], xmm0
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm0, dword ptr [rsp+168h+var_E8+4]
        vmulss  xmm4, xmm0, xmm0
        vmovss  xmm0, dword ptr [rsp+168h+var_E8+8]
        vmulss  xmm1, xmm4, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B+4; vec3_t const luminanceCoefficientsBT709
        vmulss  xmm5, xmm0, xmm0
        vmulss  xmm0, xmm3, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B; vec3_t const luminanceCoefficientsBT709
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B+8; vec3_t const luminanceCoefficientsBT709
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, xmm10
        vmovss  dword ptr [rsp+168h+var_E8], xmm3
        vmovss  dword ptr [rsp+168h+var_E8+4], xmm4
        vmovss  dword ptr [rsp+168h+var_E8+8], xmm5
      }
      if ( !(v39 | v40) )
      {
        __asm
        {
          vdivss  xmm0, xmm9, xmm0
          vmulss  xmm3, xmm0, xmm3
          vmulss  xmm4, xmm0, xmm4
          vmulss  xmm5, xmm0, xmm5
          vmovss  dword ptr [rsp+168h+var_E8], xmm3
          vmovss  dword ptr [rsp+168h+var_E8+4], xmm4
          vmovss  dword ptr [rsp+168h+var_E8+8], xmm5
        }
      }
      v62 = pCamera;
      __asm
      {
        vmovaps xmm0, xmm3
        vinsertps xmm0, xmm0, xmm4, 10h
        vinsertps xmm0, xmm0, xmm5, 20h ; ' '
        vinsertps xmm0, xmm0, dword ptr [rsp+168h+var_E8+0Ch], 30h
        vmovups xmmword ptr [rdx+60h], xmm0
        vmovss  xmm6, dword ptr [r8+r15]
      }
      if ( !pCamera )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2339, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
          __debugbreak();
        v62 = NULL;
      }
      if ( !fx_cull_elem_draw->current.enabled )
        goto LABEL_61;
      __asm { vmovaps xmm3, xmm7; radius }
      if ( !FX_CullSphere(v62, frustumPlaneCount, _RBP, *(float *)&_XMM3, 0) )
      {
LABEL_61:
        if ( particle_debug_draw->current.enabled || particle_debug_draw_cull_bounds->current.enabled )
        {
          __asm
          {
            vmovups xmm1, xmmword ptr [rbp+0]
            vmovss  dword ptr [rsp+168h+center], xmm1
            vextractps dword ptr [rsp+168h+center+4], xmm1, 1
            vextractps dword ptr [rsp+168h+center+8], xmm1, 2
            vmovaps xmm1, xmm7; radius
          }
          Particle_DebugSphere(&center, *(float *)&_XMM1, &colorOrange, 1, 0);
        }
        _RAX = ParticleEmitter::GetEmitterDef(_RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rax+4Ch]
          vucomiss xmm0, xmm10
        }
        if ( v72 )
        {
          __asm { vmovaps xmm0, xmm9 }
        }
        else
        {
          m_pModuleInitSpawn = _RDI->m_pModuleInitSpawn;
          __asm { vdivss  xmm6, xmm6, xmm0 }
          if ( m_pModuleInitSpawn )
            m_curves = m_pModuleInitSpawn->m_curves;
          else
            m_curves = &ParticleEmitter::GetEmitterDef(_RDI)->fadeCurveDef;
          __asm { vmovaps xmm1, xmm6; time }
          *(double *)&_XMM0 = Particle_GetCurveValue(m_curves, *(const float *)&_XMM1);
        }
        __asm { vcomiss xmm0, dword ptr [rdi+1A4h] }
        if ( !(v71 | v72) )
        {
          __asm { vmulss  xmm6, xmm8, xmm0 }
          if ( !v93 )
          {
            v80 = *_R15;
            Particle_VerifyAssetList(v19);
            lightDef = v19->assetList[Particle_RandomIndex(v80, FXRAND_VISUAL, v19->numAssets)].lightDef;
            v95 = lightDef;
            if ( !lightDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3645, ASSERT_TYPE_ASSERT, "(lightDef)", (const char *)&queryFormat, "lightDef") )
              __debugbreak();
          }
          __asm { vmovups xmm1, xmmword ptr [rbp+0] }
          _RAX = r_particleDrawData;
          __asm
          {
            vmovss  dword ptr [rsp+168h+org], xmm1
            vextractps dword ptr [rsp+168h+org+4], xmm1, 1
            vextractps dword ptr [rsp+168h+org+8], xmm1, 2
            vmovups xmm0, xmmword ptr [rax+60h]
            vmovss  dword ptr [rsp+168h+colorLinearSrgb], xmm0
            vmovss  xmm0, dword ptr [rax+64h]
            vmovss  dword ptr [rsp+168h+colorLinearSrgb+4], xmm0
            vmovss  xmm0, dword ptr [rax+68h]
            vmovaps xmm3, xmm6; intensity
            vmovaps xmm1, xmm7; radius
            vmovss  dword ptr [rsp+168h+colorLinearSrgb+8], xmm0
          }
          if ( R_AddOmniLightToScene(&org, *(float *)&_XMM1, &colorLinearSrgb, *(float *)&_XMM3, pModuleInitLightOmni, lightDef) )
          {
            if ( (((_BYTE)_RDI - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &_RDI->m_numParticlesRendered) )
              __debugbreak();
            _InterlockedIncrement(&_RDI->m_numParticlesRendered);
            if ( (((_BYTE)_RDI - 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &_RDI->m_numLights) )
              __debugbreak();
            _InterlockedIncrement(&_RDI->m_numLights);
          }
        }
      }
      lightDef = v95;
      ++_R14;
      _RDX = r_particleDrawData;
      ++_R15;
      v40 = v104-- == 1;
      _R8 = v98;
    }
    while ( !v40 );
    __asm
    {
      vmovaps xmm10, [rsp+168h+var_98]
      vmovaps xmm9, [rsp+168h+var_88]
      vmovaps xmm8, [rsp+168h+var_78]
      vmovaps xmm7, [rsp+168h+var_68]
      vmovaps xmm6, [rsp+168h+var_58]
    }
  }
}

/*
==============
ParticleEmitter::DrawSetup_LightSpot
==============
*/
void ParticleEmitter::DrawSetup_LightSpot(ParticleEmitter *this, ParticleEmitter::ParticleStateData *rParticleStateData, const FxCamera *pCamera, Particle_DrawData *r_particleDrawData)
{
  ParticleData *p_m_particleData; 
  __int64 m_particleCountRunning; 
  int *RandomSeedArray; 
  ParticleEmitter::ParticleStateData *v18; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v21; 
  ParticleState::ElementTypeModule v22; 
  const ParticleLinkedAssetListDef *v23; 
  const float4 *v34; 
  vector3 *v35; 
  const vector4 *v37; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  const ParticleStateDef *m_pStateDef; 
  char v53; 
  bool v54; 
  const FxCamera *v73; 
  char v82; 
  char v83; 
  const ParticleModuleInitSpawn *m_pModuleInitSpawn; 
  ParticleCurveDef *m_curves; 
  int v90; 
  float intensity; 
  unsigned int frustumPlaneCount; 
  vector4 *M1; 
  int v103; 
  float4 *SizeArray; 
  signed __int64 v105; 
  float4 *ColorArray; 
  signed __int64 v107; 
  float *CameraDistanceArray; 
  signed __int64 v109; 
  GfxLightDef *lightDef; 
  float4 *RotationAngleArray; 
  float4 *v114; 
  __int64 v115; 
  __int64 v117; 
  ParticleModuleInitLightSpot *pModuleInitLightSpot; 
  vector4 result; 
  vec3_t dir; 
  vec3_t up; 
  vec3_t center; 
  vec3_t colorLinearSrgb; 
  vec3_t org; 

  _RDI = this;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3671, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( rParticleStateData->m_particleState.m_pStateDef->elementType != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3672, ASSERT_TYPE_ASSERT, "(rParticleStateData.m_particleState.GetElementType() == PARTICLE_ELEMENT_TYPE_LIGHT_SPOT)", (const char *)&queryFormat, "rParticleStateData.m_particleState.GetElementType() == PARTICLE_ELEMENT_TYPE_LIGHT_SPOT") )
    __debugbreak();
  p_m_particleData = &rParticleStateData->m_particleData;
  m_particleCountRunning = p_m_particleData->m_particleCountRunning;
  _R15 = Particle_GetPositionArray(p_m_particleData);
  SizeArray = Particle_GetSizeArray(p_m_particleData);
  ColorArray = Particle_GetColorArray(p_m_particleData);
  RotationAngleArray = Particle_GetRotationAngleArray(p_m_particleData);
  CameraDistanceArray = Particle_GetCameraDistanceArray(p_m_particleData);
  RandomSeedArray = Particle_GetRandomSeedArray(p_m_particleData);
  v18 = rParticleStateData;
  _R12 = RandomSeedArray;
  v117 = rParticleStateData->m_particleState.m_pStateDef->flags & 0xF0;
  M1 = (vector4 *)ParticleEmitter::GetEmitterTransform(_RDI, &rParticleStateData->m_particleState);
  EmitterDef = ParticleEmitter::GetEmitterDef(_RDI);
  v21 = pCamera->frustumPlaneCount;
  if ( (EmitterDef->flags & 4) != 0 && v21 > 5 )
    v21 = 5;
  v22.pModule = (const ParticleModule *)rParticleStateData->m_particleState.m_elementTypeModule;
  frustumPlaneCount = v21;
  pModuleInitLightSpot = (ParticleModuleInitLightSpot *)v22.pModule;
  if ( !v22.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3692, ASSERT_TYPE_ASSERT, "(pModuleInitLightSpot)", (const char *)&queryFormat, "pModuleInitLightSpot") )
    __debugbreak();
  v23 = (const ParticleLinkedAssetListDef *)&v22.pModule[1];
  Particle_VerifyAssetList((const ParticleLinkedAssetListDef *)&v22.pModule[1]);
  v103 = *(_DWORD *)&v22.pModule[2].m_type;
  if ( v103 == 1 )
  {
    Particle_VerifyAssetList((const ParticleLinkedAssetListDef *)&v22.pModule[1]);
    lightDef = v23->assetList->lightDef;
  }
  else
  {
    lightDef = NULL;
  }
  _RDX = &M1->x;
  __asm
  {
    vmovups xmm1, xmmword ptr [rdx]
    vmovss  dword ptr [rsp+258h+dir], xmm1
    vextractps dword ptr [rsp+258h+dir+4], xmm1, 1
    vextractps dword ptr [rsp+258h+dir+8], xmm1, 2
    vmovups xmm1, xmmword ptr [rdx+10h]
    vmovss  [rsp+258h+var_DC], xmm1
    vextractps [rsp+258h+var_D8], xmm1, 1
    vextractps [rsp+258h+var_D4], xmm1, 2
    vmovups xmm1, xmmword ptr [rdx+20h]
    vmovss  dword ptr [rsp+258h+up], xmm1
    vextractps dword ptr [rsp+258h+up+4], xmm1, 1
    vextractps dword ptr [rsp+258h+up+8], xmm1, 2
  }
  if ( (_DWORD)m_particleCountRunning )
  {
    v105 = (char *)SizeArray - (char *)_R15;
    _RCX = (float4 *)((char *)RotationAngleArray - (char *)_R15);
    v107 = (char *)ColorArray - (char *)_R15;
    _R14 = r_particleDrawData;
    v109 = (char *)CameraDistanceArray - (char *)_R12;
    __asm
    {
      vmovaps [rsp+258h+var_48], xmm6
      vmovaps [rsp+258h+var_58], xmm7
      vmovaps [rsp+258h+var_68], xmm8
      vmovaps [rsp+258h+var_78], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmovaps [rsp+258h+var_88], xmm10
    }
    v115 = m_particleCountRunning;
    __asm { vxorps  xmm10, xmm10, xmm10 }
    v114 = (float4 *)((char *)RotationAngleArray - (char *)_R15);
    do
    {
      if ( v117 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
          vmovdqa xmmword ptr [rsp+258h+result.w.v], xmm0
          vmovups xmm0, xmmword ptr [rcx+r15]
        }
        Float4RadianToQuat(_RCX, _RDX);
        Float4UnitQuatToAxis(v35, v34);
        __asm
        {
          vmovups xmmword ptr [rsp+258h+var_128+10h], xmm1
          vmovups xmmword ptr [rsp+258h+var_128], xmm0
          vmovups ymm3, [rsp+258h+var_128]
          vmovups ymmword ptr [rsp+258h+result.baseclass_0.x.v], ymm3
          vmovups xmmword ptr [rsp+258h+result.baseclass_0.z.v], xmm2
        }
        Float4x4Mul(&result, M1, v37);
        __asm
        {
          vmovups xmmword ptr [rsp+258h+var_188+10h], xmm3
          vmovups xmmword ptr [rsp+258h+var_188], xmm2
          vmovups ymm4, [rsp+258h+var_188]
          vmovups xmmword ptr [rsp+258h+var_1A8+10h], xmm1
          vmovups xmmword ptr [rsp+258h+var_1A8], xmm0
          vmovups ymm3, [rsp+258h+var_1A8]
          vmovups ymmword ptr [rsp+258h+result.baseclass_0.x.v], ymm3
          vmovups ymmword ptr [rsp+258h+result.baseclass_0.z.v], ymm4
          vmovss  dword ptr [rsp+258h+dir], xmm0
          vextractps dword ptr [rsp+258h+dir+4], xmm0, 1
          vextractps dword ptr [rsp+258h+dir+8], xmm0, 2
          vmovss  [rsp+258h+var_DC], xmm1
          vextractps [rsp+258h+var_D8], xmm1, 1
          vextractps [rsp+258h+var_D4], xmm1, 2
          vmovss  dword ptr [rsp+258h+up], xmm2
          vextractps dword ptr [rsp+258h+up+4], xmm2, 1
          vextractps dword ptr [rsp+258h+up+8], xmm2, 2
        }
      }
      m_pModuleInitRelativeVelocity = v18->m_particleState.m_pModuleInitRelativeVelocity;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vmovdqu xmmword ptr [r14+40h], xmm0
        }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
          vshufps xmm3, xmm0, xmm0, 55h ; 'U'
          vshufps xmm4, xmm0, xmm0, 0
          vmulps  xmm0, xmm2, xmmword ptr [rdx+20h]
          vaddps  xmm2, xmm0, xmmword ptr [rdx+30h]
          vmulps  xmm0, xmm3, xmmword ptr [rdx+10h]
          vaddps  xmm1, xmm0, xmm2
          vmulps  xmm0, xmm4, xmmword ptr [rdx]
          vaddps  xmm1, xmm0, xmm1
          vmovups xmmword ptr [r14+40h], xmm1
        }
      }
      m_pStateDef = v18->m_particleState.m_pStateDef;
      v53 = 0;
      v54 = (m_pStateDef->flags & 0x10000000) == 0i64;
      if ( (m_pStateDef->flags & 0x10000000) != 0 )
      {
        _RAX = ParticleEmitter::GetSystemOwner(_RDI);
        __asm
        {
          vmovups xmm1, xmmword ptr [rax+30h]
          vaddps  xmm0, xmm1, xmmword ptr [r14+40h]
          vmovups xmmword ptr [r14+40h], xmm0
        }
      }
      _RAX = v105;
      __asm { vmovups xmm7, xmmword ptr [rax+r15] }
      _RAX = v107;
      __asm
      {
        vshufps xmm8, xmm7, xmm7, 55h ; 'U'
        vmovups xmm0, xmmword ptr [rax+r15]
        vmovups [rsp+258h+var_F8], xmm0
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm0, dword ptr [rsp+258h+var_F8+4]
        vmulss  xmm1, xmm3, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B; vec3_t const luminanceCoefficientsBT709
        vmulss  xmm4, xmm0, xmm0
        vmovss  xmm0, dword ptr [rsp+258h+var_F8+8]
        vmulss  xmm5, xmm0, xmm0
        vmulss  xmm0, xmm4, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B+4; vec3_t const luminanceCoefficientsBT709
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B+8; vec3_t const luminanceCoefficientsBT709
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, xmm10
        vmovss  dword ptr [rsp+258h+var_F8], xmm3
        vmovss  dword ptr [rsp+258h+var_F8+4], xmm4
        vmovss  dword ptr [rsp+258h+var_F8+8], xmm5
      }
      if ( !(v53 | v54) )
      {
        __asm
        {
          vdivss  xmm0, xmm9, xmm0
          vmulss  xmm3, xmm0, xmm3
          vmulss  xmm4, xmm0, xmm4
          vmulss  xmm5, xmm0, xmm5
          vmovss  dword ptr [rsp+258h+var_F8], xmm3
          vmovss  dword ptr [rsp+258h+var_F8+4], xmm4
          vmovss  dword ptr [rsp+258h+var_F8+8], xmm5
        }
      }
      v73 = pCamera;
      _RAX = r_particleDrawData;
      __asm
      {
        vmovaps xmm0, xmm3
        vinsertps xmm0, xmm0, xmm4, 10h
        vinsertps xmm0, xmm0, xmm5, 20h ; ' '
        vinsertps xmm0, xmm0, dword ptr [rsp+258h+var_F8+0Ch], 30h
        vmovups xmmword ptr [rax+60h], xmm0
      }
      _RAX = v109;
      __asm { vmovss  xmm6, dword ptr [rax+r12] }
      if ( !pCamera )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2339, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
          __debugbreak();
        v73 = NULL;
      }
      if ( !fx_cull_elem_draw->current.enabled )
        goto LABEL_61;
      __asm { vmovaps xmm3, xmm7; radius }
      if ( !FX_CullSphere(v73, frustumPlaneCount, &r_particleDrawData->posWorld, *(float *)&_XMM3, 0) )
      {
LABEL_61:
        if ( particle_debug_draw->current.enabled || particle_debug_draw_cull_bounds->current.enabled )
        {
          __asm
          {
            vmovups xmm1, xmmword ptr [r14+40h]
            vmovss  dword ptr [rsp+258h+center], xmm1
            vextractps dword ptr [rsp+258h+center+4], xmm1, 1
            vextractps dword ptr [rsp+258h+center+8], xmm1, 2
            vmovaps xmm1, xmm7; radius
          }
          Particle_DebugSphere(&center, *(float *)&_XMM1, &colorOrange, 1, 0);
        }
        _RAX = ParticleEmitter::GetEmitterDef(_RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rax+4Ch]
          vucomiss xmm0, xmm10
        }
        if ( v83 )
        {
          __asm { vmovaps xmm0, xmm9 }
        }
        else
        {
          m_pModuleInitSpawn = _RDI->m_pModuleInitSpawn;
          __asm { vdivss  xmm6, xmm6, xmm0 }
          if ( m_pModuleInitSpawn )
            m_curves = m_pModuleInitSpawn->m_curves;
          else
            m_curves = &ParticleEmitter::GetEmitterDef(_RDI)->fadeCurveDef;
          __asm { vmovaps xmm1, xmm6; time }
          *(double *)&_XMM0 = Particle_GetCurveValue(m_curves, *(const float *)&_XMM1);
        }
        __asm { vcomiss xmm0, dword ptr [rdi+1A4h] }
        if ( !(v82 | v83) )
        {
          __asm { vmulss  xmm6, xmm8, xmm0 }
          if ( v103 != 1 )
          {
            v90 = *_R12;
            Particle_VerifyAssetList(v23);
            lightDef = v23->assetList[Particle_RandomIndex(v90, FXRAND_VISUAL, v23->numAssets)].lightDef;
            if ( !lightDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3732, ASSERT_TYPE_ASSERT, "(lightDef)", (const char *)&queryFormat, "lightDef") )
              __debugbreak();
          }
          __asm { vmovups xmm1, xmmword ptr [r14+40h] }
          _RAX = r_particleDrawData;
          __asm
          {
            vmovaps xmm3, xmm7; radius
            vmovups xmm0, xmmword ptr [rax+60h]
            vmovss  dword ptr [rsp+258h+colorLinearSrgb], xmm0
            vmovss  xmm0, dword ptr [rax+64h]
            vmovss  dword ptr [rsp+258h+colorLinearSrgb+4], xmm0
            vmovss  xmm0, dword ptr [rax+68h]
            vmovss  [rsp+258h+intensity], xmm6
            vmovss  dword ptr [rsp+258h+org], xmm1
            vextractps dword ptr [rsp+258h+org+4], xmm1, 1
            vextractps dword ptr [rsp+258h+org+8], xmm1, 2
            vmovss  dword ptr [rsp+258h+colorLinearSrgb+8], xmm0
          }
          if ( R_AddSpotLightToScene(&org, &dir, &up, *(float *)&_XMM3, &colorLinearSrgb, intensity, pModuleInitLightSpot, lightDef) )
          {
            if ( (((_BYTE)_RDI - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &_RDI->m_numParticlesRendered) )
              __debugbreak();
            _InterlockedIncrement(&_RDI->m_numParticlesRendered);
            if ( (((_BYTE)_RDI - 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &_RDI->m_numLights) )
              __debugbreak();
            _InterlockedIncrement(&_RDI->m_numLights);
          }
        }
      }
      v18 = rParticleStateData;
      ++_R15;
      _RDX = &M1->x;
      ++_R12;
      v54 = v115-- == 1;
      _RCX = v114;
    }
    while ( !v54 );
    __asm
    {
      vmovaps xmm10, [rsp+258h+var_88]
      vmovaps xmm9, [rsp+258h+var_78]
      vmovaps xmm8, [rsp+258h+var_68]
      vmovaps xmm7, [rsp+258h+var_58]
      vmovaps xmm6, [rsp+258h+var_48]
    }
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
  int v12; 
  unsigned __int64 flags; 
  unsigned __int64 v14; 
  char v15; 
  GfxScaledPlacement *PrevPlacementArray; 
  ParticleState::ElementTypeModule v19; 
  int v21; 
  const ParticleStateDef *v22; 
  int v23; 
  bool v24; 
  __int32 v25; 
  const FxPhysics *PhysicsInstanceIDList; 
  float4 *v27; 
  float *v31; 
  __int64 v33; 
  unsigned int v34; 
  __int64 v35; 
  unsigned int instanceId; 
  unsigned int NumRigidBodys; 
  const PhysicsAsset *InstanceAsset; 
  const char *v40; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  unsigned int m_serialAndIndex; 
  signed __int32 v55; 
  bool v58; 
  ParticleLinkedAssetListDef *v59; 
  int v60; 
  const XModel *model; 
  bool v62; 
  ParticleSystem *v76; 
  const ParticleSystemDef *v77; 
  const float4 *v99; 
  bool v100; 
  float4 *RotationAngleArray; 
  unsigned int *FlagsArray; 
  unsigned int v105; 
  unsigned int v106; 
  char *v109; 
  bool v114; 
  bool v117; 
  int v120; 
  bool v121; 
  ParticleSystem *v135; 
  const ParticleSystemDef *v136; 
  const float4 *v157; 
  bool v158; 
  unsigned __int64 v160; 
  vector4 *EmitterTransform; 
  const ParticleSystem *v162; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  const ParticleModuleScaleByDistance *m_pModuleScaleByDistance; 
  unsigned int v166; 
  bool v171; 
  unsigned int v173; 
  const ParticleStateDef *v176; 
  bool v177; 
  __int64 v181; 
  const float4 *v182; 
  float4 *v183; 
  int v208; 
  const float4 *v230; 
  bool v231; 
  __int64 v240; 
  __int64 v241; 
  char v242; 
  unsigned int m_particleCountRunning; 
  bool v244; 
  bool v245; 
  unsigned int v246; 
  ParticleRelativeVelocityType m_velocityType; 
  float *LightingFracArray; 
  char *v249; 
  char *v250; 
  float4 *SizeArray; 
  signed __int64 v254; 
  signed __int64 v255; 
  signed __int64 v256; 
  int v257; 
  float *CameraDistanceArray; 
  __int64 v259; 
  char *v260; 
  float4 *ColorArray; 
  signed __int64 v262; 
  signed __int64 v263; 
  signed __int64 v264; 
  float4 *v265; 
  float4 *SpawnQuatArray; 
  XModel *pModel; 
  unsigned int renderFlags; 
  char v269; 
  const FxPhysics *v270; 
  hknpBodyId result[2]; 
  ParticleLinkedAssetListDef *pLinkedAssetList; 
  GfxScaledPlacement *v273; 
  float4 *PositionArray; 
  float4 *VelocityArray; 
  vector4 *rEmitterTransform; 
  float4 *v277; 
  float4 packedColorAndEmissive; 
  float4 *EmissiveArray; 
  unsigned __int64 v280; 
  float4 v281; 
  float4 v282; 
  float4 color; 
  float4 v284; 
  float4 v285; 
  float4 v286; 
  float4 v287; 
  float4 v288; 
  float4 v289; 
  vec3_t vec; 
  vec3_t linVel; 
  vec4_t quat; 
  vec3_t v293; 
  vec3_t v294; 
  __int128 v295; 
  __int128 v296; 
  __int128 v297; 
  vec4_t orientation[2]; 
  GfxScaledPlacement prevPlacementOut; 

  m_pStateDef = rParticleStateData->m_particleState.m_pStateDef;
  packedColorAndEmissive.v.m128_u64[0] = (unsigned __int64)r_particleDrawData;
  if ( m_pStateDef->elementType != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3787, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL") )
    __debugbreak();
  v12 = 3080;
  if ( fx_models_shadows_thermal->current.enabled )
    v12 = 0;
  flags = rParticleStateData->m_particleState.m_pStateDef->flags;
  v14 = flags >> 22;
  flags >>= 20;
  v15 = v14 & 1;
  LOBYTE(flags) = flags & 1;
  v269 = v15;
  v280 = flags;
  m_particleCountRunning = rParticleStateData->m_particleData.m_particleCountRunning;
  *(_QWORD *)&result[0].m_serialAndIndex = Particle_GetRandomSeedArray(&rParticleStateData->m_particleData);
  _R15 = *(int **)&result[0].m_serialAndIndex;
  SizeArray = Particle_GetSizeArray(&rParticleStateData->m_particleData);
  PositionArray = Particle_GetPositionArray(&rParticleStateData->m_particleData);
  _R13 = PositionArray;
  VelocityArray = Particle_GetVelocityArray(&rParticleStateData->m_particleData);
  ColorArray = Particle_GetColorArray(&rParticleStateData->m_particleData);
  EmissiveArray = Particle_GetEmissiveArray(&rParticleStateData->m_particleData);
  LightingFracArray = Particle_GetLightingFracArray(&rParticleStateData->m_particleData);
  CameraDistanceArray = Particle_GetCameraDistanceArray(&rParticleStateData->m_particleData);
  PrevPlacementArray = Particle_GetPrevPlacementArray(&rParticleStateData->m_particleData);
  v19.pModule = (const ParticleModule *)rParticleStateData->m_particleState.m_elementTypeModule;
  v273 = PrevPlacementArray;
  if ( !v19.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3822, ASSERT_TYPE_ASSERT, "(pModuleInitModel)", (const char *)&queryFormat, "pModuleInitModel") )
    __debugbreak();
  pLinkedAssetList = (ParticleLinkedAssetListDef *)&v19.pModule[2];
  Particle_VerifyAssetList((const ParticleLinkedAssetListDef *)&v19.pModule[2]);
  v257 = *(_DWORD *)&v19.pModule[3].m_type;
  if ( v257 == 1 )
  {
    Particle_VerifyAssetList((const ParticleLinkedAssetListDef *)&v19.pModule[2]);
    pModel = **(XModel ***)&v19.pModule[2];
  }
  else
  {
    pModel = NULL;
  }
  __asm
  {
    vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups [rsp+318h+var_108], xmm0
  }
  if ( ParticleEmitter::ShouldDrawWithViewModel(this, &rParticleStateData->m_particleState) )
    v12 |= 1u;
  v21 = v12 | 0x200;
  if ( !HIBYTE(v19.pModule[1].m_type) )
    v21 = v12;
  renderFlags = v21;
  if ( v257 != 1 || pModel )
  {
    v22 = rParticleStateData->m_particleState.m_pStateDef;
    __asm
    {
      vmovaps [rsp+318h+var_48], xmm6
      vmovaps [rsp+318h+var_58], xmm7
      vmovaps [rsp+318h+var_68], xmm8
    }
    v23 = v22->flags;
    __asm
    {
      vmovaps [rsp+318h+var_78], xmm9
      vmovaps [rsp+318h+var_88], xmm10
      vmovaps [rsp+318h+var_98], xmm11
      vmovaps [rsp+318h+var_A8], xmm12
    }
    v24 = (v23 & 0x400) != 0i64;
    if ( v24 && !rParticleStateData->m_particleState.m_pModulePhysicsLight && rParticleStateData->m_particleState.m_physicsInstanceIDList )
    {
      v25 = 3 * this->m_pSystemOwner->m_localClientNum + 3;
      PhysicsInstanceIDList = ParticleState::GetPhysicsInstanceIDList(&rParticleStateData->m_particleState);
      v270 = PhysicsInstanceIDList;
      v246 = 0;
      if ( m_particleCountRunning )
      {
        v254 = (char *)SizeArray - (char *)VelocityArray;
        v27 = VelocityArray;
        v262 = (char *)ColorArray - (char *)VelocityArray;
        __asm
        {
          vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm11, cs:__real@3f800000
          vmovss  xmm12, cs:__real@3b83126f
        }
        v31 = LightingFracArray;
        _R14 = (char *)PositionArray - (char *)VelocityArray;
        v33 = *(_QWORD *)&result[0].m_serialAndIndex - (_QWORD)LightingFracArray;
        v34 = m_particleCountRunning;
        v265 = VelocityArray;
        v35 = (__int64)v273;
        v259 = (__int64)v273;
        __asm { vxorps  xmm9, xmm9, xmm9 }
        do
        {
          instanceId = PhysicsInstanceIDList->instanceId;
          if ( PhysicsInstanceIDList->instanceId != -1 )
          {
            NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v25, instanceId);
            InstanceAsset = HavokPhysics_GetInstanceAsset((Physics_WorldId)v25, instanceId);
            if ( NumRigidBodys != 1 )
            {
              v40 = InstanceAsset ? InstanceAsset->name : "UNKNOWN";
              SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
              Def = ParticleSystem::GetDef(SystemOwner);
              LODWORD(v241) = NumRigidBodys;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3872, ASSERT_TYPE_ASSERT, "(numBodies == 1)", "%s\n\tPhysics Particles only support single body assets: %s references a particle with physics asset %s that has %i\n", "numBodies == 1", Def->name, v40, v241) )
                __debugbreak();
            }
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v25 > 7 )
            {
              LODWORD(v240) = v25;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v240) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v25 - 2) <= 5 )
            {
              LODWORD(v240) = v25;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v240) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v25 <= 1 )
            {
              LODWORD(v240) = v25;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v240) )
                __debugbreak();
            }
            m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v25, instanceId, 0)->m_serialAndIndex;
            if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3875, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( body0Id ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( body0Id )") )
              __debugbreak();
            Physics_GetRigidBodyTransform((const Physics_WorldId)v25, m_serialAndIndex, (vec3_t *)&orientation[1], orientation);
            Physics_GetRigidBodyLinVel((const Physics_WorldId)v25, m_serialAndIndex, &linVel);
            __asm { vmovss  xmm0, dword ptr [rsp+318h+orientation+10h] }
            _RSI = v265;
            HIDWORD(v295) = 0;
            __asm
            {
              vmovups xmm3, xmmword ptr [rsp+1F0h]
              vmovss  xmm3, xmm3, xmm0
              vinsertps xmm3, xmm3, dword ptr [rsp+318h+orientation+14h], 10h
              vinsertps xmm3, xmm3, dword ptr [rsp+318h+orientation+18h], 20h
              vmovss  xmm0, dword ptr [rsp+318h+linVel]
              vmovups xmmword ptr [r14+rsi], xmm3
              vmovups xmmword ptr [rsp+1F0h], xmm3
            }
            HIDWORD(v296) = 0;
            __asm
            {
              vmovups xmm3, xmmword ptr [rsp+200h]
              vmovss  xmm3, xmm3, xmm0
              vinsertps xmm3, xmm3, dword ptr [rsp+318h+linVel+4], 10h
              vinsertps xmm3, xmm3, dword ptr [rsp+318h+linVel+8], 20h
              vmovups xmmword ptr [rsp+200h], xmm3
              vmovups xmmword ptr [rsi], xmm3
            }
            if ( (((_BYTE)this + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_numPhysicsObjects) )
              __debugbreak();
            v55 = _InterlockedIncrement(&this->m_numPhysicsObjects);
            _RAX = v254;
            __asm
            {
              vmovups xmm0, xmmword ptr [rax+rsi]
              vcomiss xmm0, xmm9
              vmovss  dword ptr [rsp+318h+orientation+1Ch], xmm0
            }
            if ( v55 )
            {
              v58 = v257 == 0;
              if ( v257 == 1 )
              {
                model = pModel;
              }
              else
              {
                v59 = pLinkedAssetList;
                v60 = *(_DWORD *)((char *)LightingFracArray + v33);
                Particle_VerifyAssetList(pLinkedAssetList);
                model = v59->assetList[Particle_RandomIndex(v60, FXRAND_VISUAL, v59->numAssets)].model;
                pModel = (XModel *)model;
                v58 = 0;
                if ( !model )
                {
                  v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3896, ASSERT_TYPE_ASSERT, "(pModel)", (const char *)&queryFormat, "pModel");
                  v58 = 0;
                  if ( v62 )
                    __debugbreak();
                }
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+318h+orientation]
                vmovss  xmm1, dword ptr [rsp+318h+orientation+4]
                vmulss  xmm3, xmm0, xmm0
                vmovss  xmm0, dword ptr [rsp+318h+orientation+8]
                vmulss  xmm2, xmm1, xmm1
                vaddss  xmm4, xmm3, xmm2
                vmovss  xmm2, dword ptr [rsp+318h+orientation+0Ch]
                vmulss  xmm1, xmm0, xmm0
                vaddss  xmm3, xmm4, xmm1
                vmulss  xmm0, xmm2, xmm2
                vaddss  xmm1, xmm3, xmm0
                vsubss  xmm3, xmm1, xmm11
                vandps  xmm3, xmm3, xmm10
                vcomiss xmm3, xmm12
              }
              if ( !v58 )
              {
                v76 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
                v77 = ParticleSystem::GetDef(v76);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3900, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( placement[0].base.quat ))", "%s\n\tVFX ERROR: Unnormalized quat when using model physics: %s\n", "Particle_Vec4IsNormalized( placement[0].base.quat )", v77->name) )
                  __debugbreak();
              }
              if ( v15 )
                _RCX = (__int128 *)&EmissiveArray[v246];
              else
                _RCX = &v297;
              __asm
              {
                vmovups xmm0, xmmword ptr [rcx]
                vmovups xmmword ptr [rsp+318h+color.v], xmm0
              }
              if ( v15 )
              {
                _RAX = LightingFracArray;
                __asm { vmovss  xmm8, dword ptr [rax] }
              }
              else
              {
                __asm { vmovaps xmm8, xmm9 }
              }
              FX_GammaToLinear(&color);
              _RAX = v265;
              _RCX = v262;
              __asm
              {
                vmovups xmm0, xmmword ptr [rcx+rax]
                vmovups xmmword ptr [rsp+318h+var_1F8.v], xmm0
              }
              FX_GammaToLinear(&v282);
              __asm
              {
                vmovups xmm6, xmmword ptr [rsp+318h+color.v]
                vmovups xmm0, xmmword ptr [rsp+318h+var_1F8.v]
                vcvtps2ph xmm7, xmm0, 0
                vmovss  dword ptr [rsp+318h+vec], xmm6
                vextractps dword ptr [rsp+318h+vec+4], xmm6, 1
                vextractps dword ptr [rsp+318h+vec+8], xmm6, 2
                vxorps  xmm1, xmm1, xmm1
              }
              LODWORD(v277) = Vec3PackR11G11B10F(&vec);
              __asm
              {
                vshufps xmm0, xmm6, xmm6, 0FFh
                vinsertps xmm1, xmm1, xmm0, 0
                vinsertps xmm1, xmm1, xmm8, 10h
                vcvtps2ph xmm0, xmm1, 0
                vmovss  dword ptr [rsp+318h+rEmitterTransform], xmm0
                vshufps xmm0, xmm7, xmm7, 55h ; 'U'
                vmovaps xmm1, xmm7
                vinsertps xmm1, xmm1, xmm0, 10h
                vinsertps xmm1, xmm1, dword ptr [rsp+318h+var_230], 20h
                vinsertps xmm1, xmm1, dword ptr [rsp+318h+packedColorAndEmissive.v], 30h
                vmovups xmmword ptr [rsp+318h+packedColorAndEmissive.v], xmm1
              }
              if ( VelocityArray )
                v99 = &VelocityArray[v246];
              else
                v99 = NULL;
              ComputeModelPrevPlacement((const GfxScaledPlacement *)orientation, &v273[v246], v99, &prevPlacementOut);
              v100 = (_BYTE)v280 || v15;
              ParticleEmitter::AddModelToScene(this, model, (GfxScaledPlacement *)orientation, &packedColorAndEmissive, v100, renderFlags);
              _RAX = v259;
              __asm
              {
                vmovups ymm0, ymmword ptr [rsp+318h+orientation]
                vmovups ymmword ptr [rax], ymm0
              }
              v27 = v265;
            }
            else
            {
              v27 = v265;
            }
            v34 = m_particleCountRunning;
            v31 = LightingFracArray;
            v35 = v259;
            PhysicsInstanceIDList = v270;
          }
          v270 = ++PhysicsInstanceIDList;
          ++v31;
          ++v246;
          ++v27;
          LightingFracArray = v31;
          v35 += 32i64;
          v265 = v27;
          v259 = v35;
        }
        while ( v246 < v34 );
      }
    }
    else if ( v24 && rParticleStateData->m_particleState.m_pModulePhysicsLight )
    {
      RotationAngleArray = Particle_GetRotationAngleArray(&rParticleStateData->m_particleData);
      FlagsArray = Particle_GetFlagsArray(&rParticleStateData->m_particleData);
      v105 = 0;
      v106 = m_particleCountRunning;
      if ( m_particleCountRunning )
      {
        v263 = (char *)ColorArray - (char *)PositionArray;
        _RCX = (char *)SizeArray - (char *)PositionArray;
        _RSI = (__int64)v273;
        v109 = (char *)FlagsArray - *(_QWORD *)&result[0].m_serialAndIndex;
        __asm
        {
          vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm11, cs:__real@3f800000
          vmovss  xmm12, cs:__real@3b03126f
        }
        _R12 = (char *)RotationAngleArray - (char *)PositionArray;
        v255 = (char *)SizeArray - (char *)PositionArray;
        v114 = (unsigned __int64)LightingFracArray <= *(_QWORD *)&result[0].m_serialAndIndex;
        v249 = (char *)LightingFracArray - *(_QWORD *)&result[0].m_serialAndIndex;
        __asm { vxorps  xmm9, xmm9, xmm9 }
        do
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rcx+r13]
            vcomiss xmm0, xmm9
            vmovss  dword ptr [rsp+318h+orientation+1Ch], xmm0
          }
          if ( !v114 && (*((_BYTE *)_R15 + (_QWORD)v109) & 0x42) == 0 )
          {
            v117 = v257 == 0;
            __asm
            {
              vmovups xmm1, xmmword ptr [r13+0]
              vmovss  dword ptr [rsp+318h+orientation+10h], xmm1
              vextractps dword ptr [rsp+318h+orientation+14h], xmm1, 1
              vextractps dword ptr [rsp+318h+orientation+18h], xmm1, 2
              vmovups xmm0, xmmword ptr [r12+r13]
              vmovups xmmword ptr [rsp+318h+orientation], xmm0
            }
            if ( v257 != 1 )
            {
              v120 = *_R15;
              Particle_VerifyAssetList(pLinkedAssetList);
              pModel = pLinkedAssetList->assetList[Particle_RandomIndex(v120, FXRAND_VISUAL, pLinkedAssetList->numAssets)].model;
              v117 = 0;
              if ( !pModel )
              {
                v121 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3957, ASSERT_TYPE_ASSERT, "(pModel)", (const char *)&queryFormat, "pModel");
                v117 = 0;
                if ( v121 )
                  __debugbreak();
              }
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+318h+orientation]
              vmovss  xmm1, dword ptr [rsp+318h+orientation+4]
              vmulss  xmm3, xmm0, xmm0
              vmovss  xmm0, dword ptr [rsp+318h+orientation+8]
              vmulss  xmm2, xmm1, xmm1
              vaddss  xmm4, xmm3, xmm2
              vmovss  xmm2, dword ptr [rsp+318h+orientation+0Ch]
              vmulss  xmm1, xmm0, xmm0
              vaddss  xmm3, xmm4, xmm1
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm1, xmm3, xmm0
              vsubss  xmm3, xmm1, xmm11
              vandps  xmm3, xmm3, xmm10
              vcomiss xmm3, xmm12
            }
            if ( !v117 )
            {
              v135 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
              v136 = ParticleSystem::GetDef(v135);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 3960, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( placement[0].base.quat ))", "%s\n\tVFX ERROR: Unnormalized quat when using HavokFX: %s\n", "Vec4IsNormalized( placement[0].base.quat )", v136->name) )
                __debugbreak();
            }
            if ( v269 )
              _RCX = (__int128 *)&EmissiveArray[v105];
            else
              _RCX = &v297;
            __asm
            {
              vmovups xmm0, xmmword ptr [rcx]
              vmovups xmmword ptr [rsp+318h+var_1C8.v], xmm0
            }
            if ( v269 )
            {
              _RAX = v249;
              __asm { vmovss  xmm8, dword ptr [rax+r15] }
            }
            else
            {
              __asm { vmovaps xmm8, xmm9 }
            }
            FX_GammaToLinear(&v285);
            _RAX = v263;
            __asm
            {
              vmovups xmm0, xmmword ptr [rax+r13]
              vmovups xmmword ptr [rsp+318h+var_1D8.v], xmm0
            }
            FX_GammaToLinear(&v284);
            __asm
            {
              vmovups xmm6, xmmword ptr [rsp+318h+var_1C8.v]
              vmovups xmm0, xmmword ptr [rsp+318h+var_1D8.v]
              vcvtps2ph xmm7, xmm0, 0
              vmovss  dword ptr [rsp+318h+var_148], xmm6
              vextractps dword ptr [rsp+318h+var_148+4], xmm6, 1
              vextractps dword ptr [rsp+318h+var_148+8], xmm6, 2
              vxorps  xmm1, xmm1, xmm1
            }
            packedColorAndEmissive.v.m128_i32[0] = Vec3PackR11G11B10F(&v293);
            __asm
            {
              vshufps xmm0, xmm6, xmm6, 0FFh
              vinsertps xmm1, xmm1, xmm0, 0
              vinsertps xmm1, xmm1, xmm8, 10h
              vcvtps2ph xmm0, xmm1, 0
              vmovss  [rsp+318h+var_2B0], xmm0
              vshufps xmm0, xmm7, xmm7, 55h ; 'U'
              vmovaps xmm1, xmm7
              vinsertps xmm1, xmm1, xmm0, 10h
              vinsertps xmm1, xmm1, dword ptr [rsp+318h+packedColorAndEmissive.v], 20h
              vinsertps xmm1, xmm1, [rsp+318h+var_2B0], 30h
              vmovups xmmword ptr [rsp+318h+var_1A8.v], xmm1
            }
            if ( VelocityArray )
              v157 = &VelocityArray[v105];
            else
              v157 = NULL;
            ComputeModelPrevPlacement((const GfxScaledPlacement *)orientation, &v273[v105], v157, &prevPlacementOut);
            v158 = (_BYTE)v280 || v269;
            ParticleEmitter::AddModelToScene(this, pModel, (GfxScaledPlacement *)orientation, &v287, v158, renderFlags);
            __asm { vmovups ymm0, ymmword ptr [rsp+318h+orientation] }
            v106 = m_particleCountRunning;
            _RCX = v255;
            __asm { vmovups ymmword ptr [rsi], ymm0 }
          }
          ++v105;
          ++_R15;
          ++_R13;
          _RSI += 32i64;
          v114 = v105 <= v106;
        }
        while ( v105 < v106 );
      }
    }
    else
    {
      v277 = Particle_GetPositionArray(&rParticleStateData->m_particleData);
      *(_QWORD *)vec.v = Particle_GetRotationAngleArray(&rParticleStateData->m_particleData);
      SpawnQuatArray = Particle_GetSpawnQuatArray(&rParticleStateData->m_particleData);
      v160 = rParticleStateData->m_particleState.m_pStateDef->flags & 0xA0;
      v245 = (_DWORD)v160 != 0;
      EmitterTransform = (vector4 *)ParticleEmitter::GetEmitterTransform(this, &rParticleStateData->m_particleState);
      rEmitterTransform = EmitterTransform;
      v162 = ParticleEmitter::GetSystemOwner(this);
      m_pModuleInitRelativeVelocity = rParticleStateData->m_particleState.m_pModuleInitRelativeVelocity;
      v244 = v162->m_flags & 1;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 )
        m_velocityType = PARTICLE_RELATIVE_VELOCITY_TYPE_LOCAL;
      else
        m_velocityType = m_pModuleInitRelativeVelocity->m_velocityType;
      if ( !(_DWORD)v160 || (v242 = 1, (v19.pModule->m_flags & 0x2000) == 0) )
        v242 = 0;
      m_pModuleScaleByDistance = rParticleStateData->m_particleState.m_pModuleScaleByDistance;
      *(_QWORD *)linVel.v = m_pModuleScaleByDistance;
      if ( !m_pModuleScaleByDistance && (rParticleStateData->m_particleState.m_pStateDef->flags & 0x800000000i64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4007, ASSERT_TYPE_ASSERT, "(pModuleScaleByDistance || !pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_SCALE_BY_DISTANCE ))", (const char *)&queryFormat, "pModuleScaleByDistance || !pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_SCALE_BY_DISTANCE )") )
        __debugbreak();
      Particle_RotMatrixToQuatVec(EmitterTransform, &quat);
      __asm { vmovups xmm0, xmmword ptr [rsp+318h+quat] }
      v166 = 0;
      __asm { vmovups xmmword ptr [rsp+318h+orientation], xmm0 }
      if ( m_particleCountRunning )
      {
        _R15 = SpawnQuatArray;
        _RDX = *(int **)&result[0].m_serialAndIndex;
        _RCX = (char *)SizeArray - (char *)SpawnQuatArray;
        v264 = (char *)ColorArray - (char *)SpawnQuatArray;
        _R8 = (char *)CameraDistanceArray - *(_QWORD *)&result[0].m_serialAndIndex;
        v171 = (unsigned __int64)LightingFracArray <= *(_QWORD *)&result[0].m_serialAndIndex;
        v250 = (char *)LightingFracArray - *(_QWORD *)&result[0].m_serialAndIndex;
        _R13 = (__int64)v273;
        v173 = m_particleCountRunning;
        v256 = (char *)SizeArray - (char *)SpawnQuatArray;
        v260 = (char *)CameraDistanceArray - *(_QWORD *)&result[0].m_serialAndIndex;
        __asm { vxorps  xmm10, xmm10, xmm10 }
        do
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rcx+r15]
            vcomiss xmm0, xmm10
            vmovss  dword ptr [rsp+318h+orientation+1Ch], xmm0
          }
          if ( !v171 )
          {
            v176 = rParticleStateData->m_particleState.m_pStateDef;
            v177 = (v176->flags & 0x800000000i64) == 0;
            if ( (v176->flags & 0x800000000i64) != 0 )
            {
              __asm { vmovss  xmm2, dword ptr [r8+rdx]; cameraDistance }
              ParticleEmitter::GetScaleFactorByCameraDistance(this, m_pModuleScaleByDistance, *(float *)&_XMM2, *_RDX);
              __asm { vmovss  xmm1, dword ptr [rsp+318h+orientation+1Ch] }
              _RDX = *(int **)&result[0].m_serialAndIndex;
              __asm
              {
                vmulss  xmm0, xmm1, xmm0
                vmovss  dword ptr [rsp+318h+orientation+1Ch], xmm0
              }
            }
            __asm { vucomiss xmm0, xmm10 }
            if ( !v177 )
            {
              _RBX = packedColorAndEmissive.v.m128_u64[0];
              v181 = v166;
              ParticleEmitter::GetWorldPos(this, &v277[v181], (float4 *)(packedColorAndEmissive.v.m128_u64[0] + 64), &rParticleStateData->m_particleState, rEmitterTransform);
              __asm { vmovups xmm1, xmmword ptr [rbx+40h] }
              _RAX = *(_QWORD *)vec.v - (_QWORD)SpawnQuatArray;
              __asm
              {
                vmovss  dword ptr [rsp+318h+orientation+10h], xmm1
                vextractps dword ptr [rsp+318h+orientation+14h], xmm1, 1
                vextractps dword ptr [rsp+318h+orientation+18h], xmm1, 2
                vmovups xmm0, xmmword ptr [rax+r15]
              }
              if ( v242 )
              {
                Float4RadianToQuat(v183, v182);
                __asm
                {
                  vmovups xmm6, xmmword ptr [r15]
                  vshufps xmm2, xmm0, xmm0, 0C9h ; 'É'
                  vshufps xmm3, xmm0, xmm0, 0D2h ; 'Ò'
                  vmovups xmm9, xmm0
                  vshufps xmm8, xmm0, xmm0, 0FFh
                  vmulps  xmm0, xmm0, xmm6
                  vshufps xmm1, xmm6, xmm6, 0D2h ; 'Ò'
                  vmulps  xmm4, xmm2, xmm1
                  vshufps xmm2, xmm6, xmm6, 0C9h ; 'É'
                  vmulps  xmm1, xmm3, xmm2
                  vsubps  xmm5, xmm1, xmm4
                  vinsertps xmm1, xmm0, xmm0, 8
                  vhaddps xmm2, xmm1, xmm1
                  vshufps xmm7, xmm6, xmm6, 0FFh
                  vmulps  xmm0, xmm8, xmm7
                  vmulps  xmm1, xmm9, xmm7
                  vmulps  xmm4, xmm8, xmm6
                  vaddps  xmm1, xmm4, xmm1
                  vhaddps xmm3, xmm2, xmm2
                  vsubps  xmm2, xmm0, xmm3
                  vaddps  xmm0, xmm5, xmm1
                  vblendps xmm1, xmm2, xmm0, 7
                  vmovups xmmword ptr [rsp+318h+orientation], xmm1
                }
              }
              else
              {
                __asm { vmovups [rsp+318h+var_198], xmm0 }
                ParticleEmitter::HandleSpecial3DRotation(this, v245, &v288, v244, m_velocityType, &SpawnQuatArray[v181], &quat, orientation);
              }
              if ( v257 != 1 )
              {
                v208 = **(_DWORD **)&result[0].m_serialAndIndex;
                Particle_VerifyAssetList(pLinkedAssetList);
                pModel = pLinkedAssetList->assetList[Particle_RandomIndex(v208, FXRAND_VISUAL, pLinkedAssetList->numAssets)].model;
                if ( !pModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4057, ASSERT_TYPE_ASSERT, "(pModel)", (const char *)&queryFormat, "pModel") )
                  __debugbreak();
              }
              if ( v269 )
                _RAX = (__int128 *)&EmissiveArray[v181];
              else
                _RAX = &v297;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax]
                vmovups xmmword ptr [rsp+318h+var_1B8.v], xmm0
              }
              if ( v269 )
              {
                _RAX = *(_QWORD *)&result[0].m_serialAndIndex;
                _RCX = v250;
                __asm { vmovss  xmm8, dword ptr [rax+rcx] }
              }
              else
              {
                __asm { vmovaps xmm8, xmm10 }
              }
              FX_GammaToLinear(&v286);
              _RAX = v264;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+r15]
                vmovups xmmword ptr [rsp+318h+var_208.v], xmm0
              }
              FX_GammaToLinear(&v281);
              __asm
              {
                vmovups xmm6, xmmword ptr [rsp+318h+var_1B8.v]
                vmovups xmm0, xmmword ptr [rsp+318h+var_208.v]
                vcvtps2ph xmm7, xmm0, 0
                vmovss  dword ptr [rsp+318h+var_138], xmm6
                vextractps dword ptr [rsp+318h+var_138+4], xmm6, 1
                vextractps dword ptr [rsp+318h+var_138+8], xmm6, 2
                vxorps  xmm1, xmm1, xmm1
              }
              Vec3PackR11G11B10F(&v294);
              __asm
              {
                vshufps xmm0, xmm6, xmm6, 0FFh
                vinsertps xmm1, xmm1, xmm0, 0
                vinsertps xmm1, xmm1, xmm8, 10h
                vcvtps2ph xmm0, xmm1, 0
                vmovss  dword ptr [rsp+318h+var_248], xmm0
                vshufps xmm0, xmm7, xmm7, 55h ; 'U'
                vmovaps xmm1, xmm7
                vinsertps xmm1, xmm1, xmm0, 10h
                vinsertps xmm1, xmm1, [rsp+318h+var_2B0], 20h
                vinsertps xmm1, xmm1, dword ptr [rsp+318h+var_248], 30h
                vmovups xmmword ptr [rsp+318h+var_188.v], xmm1
              }
              if ( VelocityArray )
                v230 = &VelocityArray[v181];
              else
                v230 = NULL;
              ComputeModelPrevPlacement((const GfxScaledPlacement *)orientation, &v273[v166], v230, &prevPlacementOut);
              v231 = (_BYTE)v280 || v269;
              ParticleEmitter::AddModelToScene(this, pModel, (GfxScaledPlacement *)orientation, &v289, v231, renderFlags);
              __asm { vmovups ymm0, ymmword ptr [rsp+318h+orientation] }
              _RDX = *(int **)&result[0].m_serialAndIndex;
              m_pModuleScaleByDistance = *(const ParticleModuleScaleByDistance **)linVel.v;
              __asm { vmovups ymmword ptr [r13+0], ymm0 }
            }
            _RCX = v256;
            v173 = m_particleCountRunning;
          }
          _R8 = v260;
          ++_RDX;
          ++v166;
          *(_QWORD *)&result[0].m_serialAndIndex = _RDX;
          ++_R15;
          _R13 += 32i64;
          v171 = v166 <= v173;
        }
        while ( v166 < v173 );
      }
    }
    __asm
    {
      vmovaps xmm11, [rsp+318h+var_98]
      vmovaps xmm10, [rsp+318h+var_88]
      vmovaps xmm9, [rsp+318h+var_78]
      vmovaps xmm8, [rsp+318h+var_68]
      vmovaps xmm7, [rsp+318h+var_58]
      vmovaps xmm6, [rsp+318h+var_48]
      vmovaps xmm12, [rsp+318h+var_A8]
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
  const float4 *PositionArray; 
  int *RandomSeedArray; 
  const ParticleStateDef *m_pStateDef; 
  ParticleLinkedAssetListDef *p_m_linkedAssetList; 
  int numAssets; 
  Material *material; 
  int v21; 
  float v24; 
  float v25; 
  int v26; 
  float4 *RotationAngleArray; 
  signed __int64 v28; 
  float4 *ColorArray; 
  signed __int64 v30; 
  __int64 v32; 
  vector4 rParticleSimTransform; 

  _R15 = this;
  if ( rParticleStateData->m_particleState.m_maxActiveParticleSimParticles )
  {
    m_particleCountRunning = rParticleStateData->m_particleData.m_particleCountRunning;
    _R12 = Particle_GetSizeArray(&rParticleStateData->m_particleData);
    ColorArray = Particle_GetColorArray(&rParticleStateData->m_particleData);
    PositionArray = Particle_GetPositionArray(&rParticleStateData->m_particleData);
    Particle_GetSpawnTimeArray(&rParticleStateData->m_particleData);
    RotationAngleArray = Particle_GetRotationAngleArray(&rParticleStateData->m_particleData);
    RandomSeedArray = Particle_GetRandomSeedArray(&rParticleStateData->m_particleData);
    _RAX = ParticleEmitter::GetEmitterTransform(_R15, &rParticleStateData->m_particleState);
    m_pStateDef = rParticleStateData->m_particleState.m_pStateDef;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+148h+var_A8.baseclass_0.x.v], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rsp+148h+var_A8.baseclass_0.z.v], ymm1
    }
    if ( m_pStateDef->elementType != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4129, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_MODEL") )
      __debugbreak();
    p_m_linkedAssetList = &pModuleInitParticleSim->m_linkedAssetList;
    Particle_VerifyAssetList(&pModuleInitParticleSim->m_linkedAssetList);
    numAssets = pModuleInitParticleSim->m_linkedAssetList.numAssets;
    v26 = numAssets;
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
      v28 = (char *)RotationAngleArray - (char *)PositionArray;
      v30 = (char *)ColorArray - (char *)PositionArray;
      __asm { vmovaps [rsp+148h+var_48], xmm6 }
      v32 = m_particleCountRunning;
      __asm { vmovaps [rsp+148h+var_58], xmm7 }
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15+174h]
          vsubss  xmm7, xmm0, dword ptr [rdx+rdi]
          vmovups xmm6, xmmword ptr [r12]
        }
        if ( numAssets != 1 )
        {
          v21 = *RandomSeedArray;
          Particle_VerifyAssetList(p_m_linkedAssetList);
          material = pModuleInitParticleSim->m_linkedAssetList.assetList[Particle_RandomIndex(v21, FXRAND_VISUAL, pModuleInitParticleSim->m_linkedAssetList.numAssets)].material;
          if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4153, ASSERT_TYPE_ASSERT, "(pParticleSimAnimation)", (const char *)&queryFormat, "pParticleSimAnimation") )
            __debugbreak();
        }
        __asm
        {
          vmovss  [rsp+148h+var_100], xmm7
          vmovss  [rsp+148h+var_108], xmm6
        }
        FX_DrawParticleSimAnimationModels(&rParticleStateData->m_particleState, _R15, (FxParticleSimAnimation *)material, (const float4 *)((char *)PositionArray + v30), PositionArray, (const float4 *)((char *)PositionArray + v28), &rParticleSimTransform, pModuleInitParticleSim, v24, v25, *RandomSeedArray);
        numAssets = v26;
        ++PositionArray;
        ++_R12;
        ++RandomSeedArray;
        --v32;
      }
      while ( v32 );
      __asm
      {
        vmovaps xmm7, [rsp+148h+var_58]
        vmovaps xmm6, [rsp+148h+var_48]
      }
    }
  }
}

/*
==============
ParticleEmitter::DrawSetup_Tail
==============
*/
bool ParticleEmitter::DrawSetup_Tail(ParticleEmitter *this, const FxCamera *pCamera, unsigned int frustumPlaneCount, const ParticleModuleInitTail *pModuleInitTail, float4 *rOutTangent, float4 *rOutBitangent, float4 *rOutNormal, const float4 *rPos, const float4 *rVelocity, float cameraDistance, Particle_DrawData *r_particleDrawData)
{
  bool v39; 
  bool result; 
  __int128 v110; 
  vec3_t point; 
  vec3_t dir; 

  _R13 = rOutTangent;
  _RBX = r_particleDrawData;
  _RSI = pCamera;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4178, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !pModuleInitTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4179, ASSERT_TYPE_ASSERT, "(pModuleInitTail)", (const char *)&queryFormat, "pModuleInitTail") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero }
  _RCX = rVelocity;
  __asm
  {
    vmovups xmm1, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
    vmovaps [rsp+0E0h+var_40], xmm6
    vmovaps [rsp+0E0h+var_50], xmm7
    vandnps xmm2, xmm0, xmmword ptr [rcx]
    vcmpltps xmm0, xmm1, xmm2
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) == 0 )
    goto LABEL_19;
  __asm
  {
    vmovups xmm3, xmmword ptr [rcx]
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm7, xmm3, xmm1
    vmovups xmmword ptr [rbx+50h], xmm7
  }
  if ( pModuleInitTail->m_scaleWithVelocity )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmulps  xmm1, xmm0, xmm0
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
      vsqrtps xmm1, xmm0
      vmulss  xmm0, xmm1, dword ptr [rbx+74h]
      vmovss  dword ptr [rbx+74h], xmm0
    }
  }
  v39 = !pModuleInitTail->m_rotateAroundPivot;
  _R14 = rPos;
  if ( pModuleInitTail->m_rotateAroundPivot )
  {
    __asm
    {
      vmovaps [rsp+0E0h+var_60], xmm8
      vmovss  xmm8, dword ptr [rbx+20h]
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm8, xmm0
    }
    if ( !v39 )
    {
      __asm
      {
        vmovups xmm4, xmmword ptr [r14]
        vmovss  xmm0, dword ptr [rsi]
        vmovss  xmm1, dword ptr [rsi+4]
        vsubss  xmm5, xmm0, xmm4
        vmovss  xmm0, dword ptr [rsi+8]
        vshufps xmm2, xmm4, xmm4, 55h ; 'U'
        vsubss  xmm6, xmm1, xmm2
        vshufps xmm3, xmm4, xmm4, 0AAh ; 'ª'
        vmulss  xmm2, xmm6, xmm6
        vmulss  xmm1, xmm5, xmm5
        vmovss  dword ptr [rbp+37h+point], xmm7
        vextractps dword ptr [rbp+37h+point+4], xmm7, 1
        vextractps dword ptr [rbp+37h+point+8], xmm7, 2
        vsubss  xmm7, xmm0, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm3, xmm8, cs:__real@42652ee0; degrees
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rbp+37h+dir], xmm0
        vmulss  xmm0, xmm7, xmm2
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rbp+37h+dir+8], xmm0
        vmovss  dword ptr [rbp+37h+dir+4], xmm1
      }
      RotatePointAroundVector((vec3_t *)&v110, &dir, &point, *(float *)&_XMM3);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+37h+var_A0]
        vmovss  xmm1, dword ptr [rbp+37h+var_A0+4]
      }
      HIDWORD(v110) = 0;
      __asm
      {
        vmovups xmm7, [rbp+37h+var_A0]
        vmovss  xmm7, xmm7, xmm0
        vinsertps xmm7, xmm7, xmm1, 10h
        vinsertps xmm7, xmm7, dword ptr [rbp+37h+var_A0+8], 20h
        vmovups [rbp+37h+var_A0], xmm7
      }
    }
    __asm { vmovaps xmm8, [rsp+0E0h+var_60] }
  }
  if ( pModuleInitTail->m_tailLeading )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+74h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vshufps xmm1, xmm1, xmm1, 0
      vmulps  xmm1, xmm1, xmm7
      vaddps  xmm0, xmm1, xmmword ptr [r14]
      vmovups xmmword ptr [rbx+40h], xmm0
    }
  }
  else
  {
    __asm
    {
      vbroadcastss xmm0, dword ptr [rbx+74h]
      vmulps  xmm0, xmm0, xmm7
      vaddps  xmm1, xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbx+40h], xmm1
    }
  }
  __asm { vmovss  xmm3, [rbp+37h+cameraDistance]; cameraDistance }
  if ( ParticleEmitter::CullElementForDraw_Tail(this, _RSI, frustumPlaneCount, *(float *)&_XMM3, r_particleDrawData) )
  {
LABEL_19:
    result = 0;
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rsi] }
    HIDWORD(v110) = 0;
    _RAX = rOutNormal;
    __asm
    {
      vmovups xmm3, [rbp+37h+var_A0]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
      vsubps  xmm1, xmm3, xmmword ptr [rbx+40h]
      vshufps xmm0, xmm1, xmm1, 0D2h ; 'Ò'
      vshufps xmm1, xmm1, xmm1, 0C9h ; 'É'
      vshufps xmm6, xmm7, xmm7, 0D2h ; 'Ò'
      vmulps  xmm2, xmm1, xmm6
      vshufps xmm5, xmm7, xmm7, 0C9h ; 'É'
      vmulps  xmm3, xmm0, xmm5
      vsubps  xmm4, xmm3, xmm2
      vmulps  xmm0, xmm4, xmm4
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vrsqrtps xmm1, xmm0
      vmulps  xmm4, xmm1, xmm4
      vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
      vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
      vmulps  xmm3, xmm0, xmm5
      vmulps  xmm2, xmm1, xmm6
      vsubps  xmm0, xmm2, xmm3
      vmovups xmmword ptr [rax], xmm0
    }
    _RAX = rOutBitangent;
    __asm
    {
      vmovups xmmword ptr [r13+0], xmm4
      vmovups xmmword ptr [rax], xmm7
    }
    result = 1;
  }
  __asm
  {
    vmovaps xmm7, [rsp+0E0h+var_50]
    vmovaps xmm6, [rsp+0E0h+var_40]
  }
  return result;
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
  unsigned int numStates; 
  __int64 v15; 
  __int64 i; 
  ParticleEmitter::ParticleStateData *v17; 
  unsigned __int64 flags; 
  const ParticleModuleInitParticleSim *m_pModuleInitParticleSim; 
  const ParticleLinkedAssetListDef *p_m_linkedAssetList; 
  _QWORD *p_contents; 
  const ParticleLinkedAssetListDef *m_pModuleInitMaterial; 
  int numAssets; 
  const ParticleLinkedAssetListDef *v24; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  int v27; 

  _RSI = this;
  if ( !pDrawState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 656, ASSERT_TYPE_ASSERT, "(pDrawState)", (const char *)&queryFormat, "pDrawState") )
    __debugbreak();
  v27 = Sys_Microseconds();
  if ( ParticleEmitter::DrawCommon(_RSI) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdx
      vmulss  xmm1, xmm0, cs:__real@3b808081
      vmovss  dword ptr [rsi+1A4h], xmm1
    }
    numStates = ParticleEmitter::GetEmitterDef(_RSI)->numStates;
    if ( numStates )
    {
      v15 = 0i64;
      for ( i = numStates; i; --i )
      {
        v17 = &_RSI->m_pParticleStateData[v15];
        flags = v17->m_particleState.m_pStateDef->flags;
        if ( (flags & 0x40000000) == 0 || transShadowPass && (flags & 0x80000000) == 0 )
          goto LABEL_26;
        m_pModuleInitParticleSim = v17->m_particleState.m_pModuleInitParticleSim;
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
          m_pModuleInitMaterial = (const ParticleLinkedAssetListDef *)v17->m_particleState.m_pModuleInitMaterial;
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
          v24 = m_pModuleInitMaterial + 1;
          if ( !v24 || !v24->assetList )
          {
LABEL_25:
            ParticleEmitter::GetEmitterDef(_RSI);
            SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
            Def = ParticleSystem::GetDef(SystemOwner);
            Com_PrintError(21, "WARNING: Could not find material for VFX file %s | %s. Make sure there is at least 1 asset in the material or particle sim asset list.\n", Def->name, (const char *)&queryFormat.fmt + 3);
            goto LABEL_26;
          }
          Particle_VerifyAssetList(v24);
          p_contents = &v24->assetList->material;
        }
        if ( !*p_contents )
          goto LABEL_25;
        ParticleEmitter::DrawElements_SpriteCommon(_RSI, pDrawState, v17, activeLightGridsBitmask, transShadowPass, umbraBoundsAccumulator, lightingBoundsAccumulator);
LABEL_26:
        ++v15;
      }
    }
    _RSI->m_profilerRenderTime += Sys_Microseconds() - v27;
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
  int *v9; 
  unsigned int v10; 
  bool v13; 
  int v17; 
  int *RandomSeedArrayNextFreeElem; 
  float *SpawnTimeArrayNextFreeElem; 
  float *SpawnTimeArrayAtIndex; 
  ParticleData *v21; 
  int v22; 
  unsigned int m_particleCountMax; 

  _R13 = this;
  if ( (this->m_flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1750, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_EMITTER_FLAG_HAS_PARTICLE_DELAY ))", (const char *)&queryFormat, "HasFlag( PARTICLE_EMITTER_FLAG_HAS_PARTICLE_DELAY )") )
    __debugbreak();
  if ( !numParticlesDelayed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1751, ASSERT_TYPE_ASSERT, "(numParticlesDelayed > 0)", (const char *)&queryFormat, "numParticlesDelayed > 0") )
    __debugbreak();
  p_m_particleData = &_R13->m_pParticleStateData->m_particleData;
  v21 = p_m_particleData;
  m_particleCountMax = _R13->m_pParticleStateData->m_particleData.m_particleCountMax;
  v22 = _R13->m_pParticleStateData->m_particleData.m_particleCountDelayed + _R13->m_pParticleStateData->m_particleData.m_particleCountRunning;
  SpawnTimeArrayAtIndex = Particle_GetSpawnTimeArrayAtIndex(p_m_particleData, m_particleCountMax - numParticlesDelayed);
  RandomSeedArrayAtIndex = Particle_GetRandomSeedArrayAtIndex(p_m_particleData, m_particleCountMax - numParticlesDelayed);
  SpawnTimeArrayNextFreeElem = Particle_GetSpawnTimeArrayNextFreeElem(p_m_particleData);
  _RSI = 0i64;
  RandomSeedArrayNextFreeElem = Particle_GetRandomSeedArrayNextFreeElem(p_m_particleData);
  v9 = RandomSeedArrayNextFreeElem;
  v10 = 0;
  if ( numParticlesDelayed )
  {
    _R15 = SpawnTimeArrayNextFreeElem;
    _RBX = RandomSeedArrayAtIndex;
    _R14 = (char *)SpawnTimeArrayAtIndex - (char *)RandomSeedArrayAtIndex;
    v13 = SpawnTimeArrayAtIndex <= (float *)RandomSeedArrayAtIndex;
    do
    {
      __asm
      {
        vmovss  xmm1, dword ptr [r14+rbx]
        vcomiss xmm1, dword ptr [r13+174h]
      }
      if ( v13 )
      {
        if ( v22 == m_particleCountMax )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r15+rsi*4]
            vmovss  dword ptr [r15+rsi*4], xmm1
            vmovss  dword ptr [r14+rbx], xmm0
          }
          v17 = v9[_RSI];
          v9[_RSI] = *_RBX;
          *_RBX = v17;
        }
        else
        {
          __asm { vmovss  dword ptr [r15+rsi*4], xmm1 }
          v9[_RSI] = *_RBX;
          if ( v10 != (_DWORD)_RSI )
          {
            if ( !v10 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1787, ASSERT_TYPE_ASSERT, "(i > 0)", (const char *)&queryFormat, "i > 0") )
                __debugbreak();
              v9 = RandomSeedArrayNextFreeElem;
            }
            *(int *)((char *)_RBX + _R14) = LODWORD(SpawnTimeArrayAtIndex[_RSI]);
            *_RBX = RandomSeedArrayAtIndex[_RSI];
            RandomSeedArrayAtIndex[_RSI] = 0x7FFFFFFF;
          }
        }
        _RSI = (unsigned int)(_RSI + 1);
      }
      ++v10;
      ++_RBX;
      v13 = v10 <= numParticlesDelayed;
    }
    while ( v10 < numParticlesDelayed );
    if ( (_DWORD)_RSI )
    {
      ParticleEmitter::EmitParticles(_R13, _RSI, currentTime, 1, pCamera);
      if ( (unsigned int)_RSI > v21->m_particleCountDelayed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 232, ASSERT_TYPE_ASSERT, "(particleCount <= GetParticleCountDelayed())", (const char *)&queryFormat, "particleCount <= GetParticleCountDelayed()") )
        __debugbreak();
      v21->m_particleCountDelayed -= _RSI;
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
  unsigned int m_particleCountMax; 
  unsigned __int8 v12; 
  __int64 m_localClientNum; 
  ParticleManager *v14; 
  const ParticleEmitterDef *EmitterDef; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  ParticleData *p_m_particleData; 
  unsigned int elementType; 
  ParticleSystem *v19; 
  const FxMarkSpawnData *MarkSpawnData; 
  ParticleSystem *v21; 
  ParticleSystem *v22; 
  const ParticleSystemDef *v23; 
  ParticleSystem *v24; 
  const ParticleSystemDef *v25; 
  ParticleSystem *v26; 
  const ParticleSystemDef *Def; 
  bool v28; 
  bool v29; 
  bool v30; 
  ParticleSystem *v31; 
  const ParticleSystemDef *v32; 
  const ParticleSystemDef *v35; 
  float *SpawnTimeArrayNextFreeElem; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  const vector4 *EmitterTransform; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  ParticleRelativeVelocityType m_velocityType; 
  unsigned int v48; 
  signed __int64 v49; 
  signed __int64 v50; 
  _DWORD *v51; 
  unsigned int m_particleHandleCounter; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int v55; 
  float *v56; 
  unsigned int v57; 
  ParticleState *v58; 
  __int64 v59; 
  float4 *v60; 
  unsigned int v61; 
  ParticleState::ModuleData *v62; 
  __int64 numModules; 
  void (__fastcall *initParticlesFunc)(const ParticleModule *, const ParticleState *, ParticleData *, const FxCamera *, const unsigned int); 
  float4 *v66; 
  __int64 v74; 
  bool v78; 
  bool v79; 
  int v80; 
  int v81; 
  int v82; 
  const float4 *v85; 
  __int64 v86; 
  char v88; 
  unsigned int v109; 
  float4 *v110; 
  ParticleState::ElementTypeModule *v111; 
  __int64 markEntnum; 
  CgEntitySystem *v118; 
  unsigned int v119; 
  __int64 v123; 
  __int64 v142; 
  const vec3_t *v160; 
  const int *v161; 
  LocalClientNum_t v162; 
  const float4 *positionArray; 
  unsigned int v164; 
  const ParticleStateDef *v166; 
  int v167; 
  orientation_t *v168; 
  int v169; 
  ParticleSystem *v170; 
  const ParticleSystemDef *v171; 
  unsigned int v172; 
  __int64 v173; 
  __int64 v175; 
  const ParticleModuleInitRelativeVelocity *v188; 
  __int64 v205; 
  float4 *v206; 
  const ParticleModuleInitRelativeVelocity *v207; 
  const ParticleStateDef *m_pStateDef; 
  int LocalClientTime; 
  ParticleSystemHandle v227; 
  const float4 *v228; 
  const ParticleState::ElementTypeModule *v229; 
  __int64 v232; 
  const float *v233; 
  float4 *RotationAngleArrayNextFreeElem; 
  const float4 *ColorArrayNextFreeElem; 
  const vector4 *v236; 
  __int64 numParticlesa; 
  float4 *parentVelocityArray; 
  float4 *parentVelocityArraya; 
  float4 *parentVelocityArrayb; 
  float4 *rotationAngleArray; 
  bool v242; 
  ParticleUseOrientationOptions m_type; 
  char v245; 
  LocalClientNum_t localClientNum; 
  float4 *position; 
  int boneIndex; 
  int boneIndexa; 
  bool v250; 
  char attachedToParent; 
  int *randomSeedArray; 
  int dobjHandle; 
  int dobjHandlea; 
  ParticleState *pParticleState; 
  vector4 *rEmitterTransform; 
  ParticleSystem *SystemOwner; 
  ParticleState::ElementTypeModule *p_m_elementTypeModule; 
  float4 *v260; 
  signed __int64 v261; 
  unsigned int v262; 
  float4 *v263; 
  char *v264; 
  float4 *velocityArray; 
  orientation_t *v266; 
  orientation_t *boltOffset; 
  unsigned int m_particleCountRunning; 
  ParticleData *v269; 
  bool v270; 
  ParticleSystem::ParticleBolt *bolt; 
  ParticleState::ElementTypeModule v272; 
  FxMarkSpawnData *pMarkSpawnData; 
  unsigned int *handleArray; 
  __int64 v275; 
  float4 *boltOffsetQuat; 
  float4 *boltOffsetPos; 
  unsigned int *flagsArray; 
  float4 *sizeArray; 
  ParticleManager *pManager[2]; 
  float4 pos; 
  vec4_t out; 
  vector4 outParticleTransform; 
  vec4_t quat; 
  _DWORD axis[12]; 
  vector3 orientationMat; 

  _RSI = this;
  pos.v.m128_u64[0] = (unsigned __int64)this;
  if ( !numParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1274, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !_RSI->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1275, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( !_RSI->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1276, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  m_particleCountMax = _RSI->m_pParticleStateData->m_particleData.m_particleCountMax;
  if ( numParticles + ParticleEmitter::GetParticleCountRunningForAllStates(_RSI) > m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1277, ASSERT_TYPE_ASSERT, "(GetParticleCountRunningForAllStates() + numParticles <= m_pParticleStateData[0].m_particleData.GetParticleCountMax())", (const char *)&queryFormat, "GetParticleCountRunningForAllStates() + numParticles <= m_pParticleStateData[0].m_particleData.GetParticleCountMax()") )
    __debugbreak();
  v12 = 2;
  m_localClientNum = _RSI->m_pSystemOwner->m_localClientNum;
  localClientNum = (int)m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(numParticlesa) = _RSI->m_pSystemOwner->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", numParticlesa, 2) )
      __debugbreak();
  }
  v14 = &g_particleManager[m_localClientNum];
  pManager[0] = v14;
  SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
  EmitterDef = ParticleEmitter::GetEmitterDef(_RSI);
  m_pParticleStateData = _RSI->m_pParticleStateData;
  *(_QWORD *)out.v = EmitterDef;
  pParticleState = &m_pParticleStateData->m_particleState;
  p_m_particleData = &m_pParticleStateData->m_particleData;
  m_particleCountRunning = m_pParticleStateData->m_particleData.m_particleCountRunning;
  v269 = &m_pParticleStateData->m_particleData;
  elementType = m_pParticleStateData->m_particleState.m_pStateDef->elementType;
  v262 = elementType;
  p_m_elementTypeModule = &m_pParticleStateData->m_particleState.m_elementTypeModule;
  v19 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
  MarkSpawnData = ParticleSystem::GetMarkSpawnData(v19);
  v21 = SystemOwner;
  pMarkSpawnData = (FxMarkSpawnData *)MarkSpawnData;
  if ( (SystemOwner->m_flags & 0x40000) != 0 )
  {
    if ( currentTime >= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1302, ASSERT_TYPE_ASSERT, "(currentTime < 0)", (const char *)&queryFormat, "currentTime < 0") )
        __debugbreak();
      v21 = SystemOwner;
    }
    if ( (m_pParticleStateData->m_particleState.m_pStateDef->flags & 0x200400) != 0 )
    {
      v26 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
      Def = ParticleSystem::GetDef(v26);
      Com_PrintWarning(21, "Can't preroll emitters using physics (LWP, HWP, raycast)- killed 1 spawn cycle for this emitter : %s \n", Def->name);
      return;
    }
    if ( elementType == 2 )
    {
      v22 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
      v23 = ParticleSystem::GetDef(v22);
      Com_PrintWarning(21, "Can't preroll emitters using physics (decals)- killed 1 spawn cycle for this emitter : %s \n", v23->name);
      return;
    }
    if ( v14->m_archiveState == ARCHIVE_STATE_RESTORING && elementType == 9 )
    {
      v24 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
      v25 = ParticleSystem::GetDef(v24);
      Com_PrintWarning(21, "Can't create child effects during a savegame restore- killed 1 spawn cycle for this emitter : %s \n", v25->name);
      return;
    }
  }
  v28 = v21->m_flags & 1;
  v30 = (v21->m_flags & 0x200000) != 0;
  v29 = (v21->m_flags & 0x200000) == 0;
  __asm { vmovaps [rsp+2C8h+var_48], xmm6 }
  v270 = v30;
  v242 = v28;
  if ( !v29 && !v28 )
  {
    v31 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
    v32 = ParticleSystem::GetDef(v31);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1332, ASSERT_TYPE_ASSERT, "(!hasBoltOffset || isBolted)", "%s\n\tVFX ASSERT for effect: %s\n", "!hasBoltOffset || isBolted", v32->name) )
      __debugbreak();
    v21 = SystemOwner;
    v30 = v270;
  }
  bolt = &v21->m_bolt;
  if ( v28 )
  {
    boneIndex = (unsigned __int16)(*(_DWORD *)&v21->m_bolt.FxBoltBase >> 14);
    dobjHandle = *(_DWORD *)&v21->m_bolt.FxBoltBase & 0xFFF;
  }
  else
  {
    dobjHandle = 4095;
    boneIndex = 0xFFFF;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?orIdentity@@3Uorientation_t@@B.origin; orientation_t const orIdentity
    vmovups xmm1, xmmword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+14h; orientation_t const orIdentity
    vmovups ymmword ptr [rsp+2C8h+axis], ymm0
    vmovups xmmword ptr [rsp+2C8h+axis+20h], xmm1
  }
  if ( v30 )
  {
    if ( elementType == 2 && !v21->m_boltedSpawnPosSet )
    {
      v35 = ParticleSystem::GetDef(v21);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1343, ASSERT_TYPE_ASSERT, "( ( ( elementType == PARTICLE_ELEMENT_TYPE_DECAL && pSystem->BoltedSpawnPosSet() ) || elementType != PARTICLE_ELEMENT_TYPE_DECAL ) )", "( pSystem->GetVFXName() ) = %s", v35->name) )
        __debugbreak();
    }
    _RBX = &bolt->offsetPos;
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx]
      vmovss  dword ptr [rsp+2C8h+axis], xmm1
      vextractps dword ptr [rsp+2C8h+axis+4], xmm1, 1
      vextractps dword ptr [rsp+2C8h+axis+8], xmm1, 2
    }
    boltOffsetPos = &bolt->offsetPos;
    _RBX = &bolt->offsetQuat;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rsp+2C8h+quat], xmm0
    }
    boltOffsetQuat = &bolt->offsetQuat;
    QuatToAxis(&quat, (tmat33_t<vec3_t> *)&axis[3]);
    v266 = (orientation_t *)axis;
  }
  else
  {
    v266 = NULL;
    boltOffsetPos = NULL;
    boltOffsetQuat = NULL;
  }
  ParticleData::ClearNextFreeElems(&m_pParticleStateData->m_particleData, numParticles, (const ParticleDataFlags)(hasDelay << 14));
  SpawnTimeArrayNextFreeElem = Particle_GetSpawnTimeArrayNextFreeElem(&m_pParticleStateData->m_particleData);
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v39 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v39 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v39;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  position = &Particle_GetPositionArray(&m_pParticleStateData->m_particleData)[v39];
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 342, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v40 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 342, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v40 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v40;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 342, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  velocityArray = &Particle_GetVelocityArray(&m_pParticleStateData->m_particleData)[v40];
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 344, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v41 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 344, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v41 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v41;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 344, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  v260 = &Particle_GetSpawnPosArray(&m_pParticleStateData->m_particleData)[v41];
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v42 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v42 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v42;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  v263 = &Particle_GetSpawnQuatArray(&m_pParticleStateData->m_particleData)[v42];
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v43 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v43 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v43;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  sizeArray = &Particle_GetSizeArray(&m_pParticleStateData->m_particleData)[v43];
  randomSeedArray = Particle_GetRandomSeedArrayNextFreeElem(&m_pParticleStateData->m_particleData);
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 354, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  flagsArray = Particle_GetFlagsArrayAtIndex(&m_pParticleStateData->m_particleData, m_pParticleStateData->m_particleData.m_particleCountRunning);
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v44 = m_pParticleStateData->m_particleData.m_particleCountRunning;
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  if ( (unsigned int)v44 >= m_pParticleStateData->m_particleData.m_particleCountMax )
  {
    LODWORD(parentVelocityArray) = m_pParticleStateData->m_particleData.m_particleCountMax;
    LODWORD(numParticlesa) = v44;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
      __debugbreak();
  }
  if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 356, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  handleArray = (unsigned int *)&ParticleData::GetParticleDataArray(&m_pParticleStateData->m_particleData, PARTICLE_DATA_HANDLE)[4 * v44];
  *(_QWORD *)quat.v = ParticleEmitter::GetSystemOwner(_RSI);
  EmitterTransform = ParticleEmitter::GetEmitterTransform(_RSI, &m_pParticleStateData->m_particleState);
  m_pModuleInitRelativeVelocity = m_pParticleStateData->m_particleState.m_pModuleInitRelativeVelocity;
  rEmitterTransform = (vector4 *)EmitterTransform;
  v272.pModule = (const ParticleModule *)m_pParticleStateData->m_particleState.m_elementTypeModule;
  if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 )
    m_velocityType = PARTICLE_RELATIVE_VELOCITY_TYPE_LOCAL;
  else
    m_velocityType = m_pModuleInitRelativeVelocity->m_velocityType;
  v250 = (pParticleState->m_pStateDef->flags & 0xF0) != 0;
  v275 = pParticleState->m_pStateDef->flags & 0x300;
  v48 = 0;
  if ( numParticles >= 4 )
  {
    v49 = (char *)randomSeedArray - (char *)SpawnTimeArrayNextFreeElem;
    v50 = (char *)handleArray - (char *)SpawnTimeArrayNextFreeElem;
    v51 = SpawnTimeArrayNextFreeElem + 1;
    do
    {
      if ( !hasDelay )
        *(_DWORD *)((char *)v51 + v49 - 4) = (_RSI->m_randomSeed + currentTime + _RSI->m_pSystemOwner->m_randomSeed + 10111 * (unsigned int)(unsigned __int8)v48) % 0x3FE9;
      *(v51 - 1) = LODWORD(_RSI->m_emitterLife);
      m_particleHandleCounter = _RSI->m_particleHandleCounter;
      _RSI->m_particleHandleCounter = m_particleHandleCounter + 1;
      *(_DWORD *)((char *)v51 + v50 - 4) = m_particleHandleCounter;
      if ( !hasDelay )
        *(_DWORD *)((char *)v51 + v49) = (10111 * (unsigned __int8)(v12 - 1) + currentTime + _RSI->m_randomSeed + (unsigned int)_RSI->m_pSystemOwner->m_randomSeed) % 0x3FE9;
      *v51 = LODWORD(_RSI->m_emitterLife);
      v53 = _RSI->m_particleHandleCounter;
      _RSI->m_particleHandleCounter = v53 + 1;
      *(_DWORD *)((char *)v51 + v50) = v53;
      if ( !hasDelay )
        *(_DWORD *)((char *)v51 + v49 + 4) = (_RSI->m_randomSeed + currentTime + 10111 * v12 + (unsigned int)_RSI->m_pSystemOwner->m_randomSeed) % 0x3FE9;
      v51[1] = LODWORD(_RSI->m_emitterLife);
      v54 = _RSI->m_particleHandleCounter;
      _RSI->m_particleHandleCounter = v54 + 1;
      *(_DWORD *)((char *)v51 + v50 + 4) = v54;
      if ( !hasDelay )
        *(_DWORD *)((char *)v51 + v49 + 8) = (10111 * (unsigned __int8)(v12 + 1) + currentTime + _RSI->m_randomSeed + (unsigned int)_RSI->m_pSystemOwner->m_randomSeed) % 0x3FE9;
      v48 += 4;
      v51[2] = LODWORD(_RSI->m_emitterLife);
      v12 += 4;
      v55 = _RSI->m_particleHandleCounter;
      _RSI->m_particleHandleCounter = v55 + 1;
      *(_DWORD *)((char *)v51 + v50 + 8) = v55;
      v51 += 4;
    }
    while ( v48 < numParticles - 3 );
    p_m_particleData = v269;
  }
  if ( v48 < numParticles )
  {
    v56 = &SpawnTimeArrayNextFreeElem[v48];
    do
    {
      if ( !hasDelay )
        *(_DWORD *)((char *)v56 + (char *)randomSeedArray - (char *)SpawnTimeArrayNextFreeElem) = (_RSI->m_randomSeed + currentTime + _RSI->m_pSystemOwner->m_randomSeed + 10111 * (unsigned int)(unsigned __int8)v48) % 0x3FE9;
      ++v48;
      *v56 = _RSI->m_emitterLife;
      v57 = _RSI->m_particleHandleCounter;
      _RSI->m_particleHandleCounter = v57 + 1;
      *(_DWORD *)((char *)v56++ + (char *)handleArray - (char *)SpawnTimeArrayNextFreeElem) = v57;
    }
    while ( v48 < numParticles );
    p_m_particleData = v269;
  }
  v58 = pParticleState;
  if ( (pParticleState->m_pStateDef->flags & 0x2000000) != 0 )
  {
    if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 362, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
      __debugbreak();
    v59 = p_m_particleData->m_particleCountRunning;
    if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 362, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
      __debugbreak();
    if ( (unsigned int)v59 >= p_m_particleData->m_particleCountMax )
    {
      LODWORD(parentVelocityArray) = p_m_particleData->m_particleCountMax;
      LODWORD(numParticlesa) = v59;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 362, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
        __debugbreak();
    }
    v60 = Particle_GetParentVelocityArray(p_m_particleData);
    v61 = numParticles;
    ParticleEmitter::InitParentVelocityArray(_RSI, localClientNum, pParticleState, v242, bolt, numParticles, &v60[v59]);
  }
  else
  {
    v61 = numParticles;
  }
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 290, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 291, ASSERT_TYPE_ASSERT, "(particleCountEmit > 0)", (const char *)&queryFormat, "particleCountEmit > 0") )
    __debugbreak();
  v62 = pParticleState->m_pModuleDataList[0];
  numModules = pParticleState->m_pStateDef->moduleGroupDefs->numModules;
  if ( numModules > 0 )
  {
    do
    {
      if ( (v62->pModule->m_flags & 1) == 0 )
      {
        initParticlesFunc = v62->pUpdateData->initParticlesFunc;
        if ( initParticlesFunc )
          initParticlesFunc(v62->pModule, pParticleState, p_m_particleData, pCamera, v61);
      }
      ++v62;
      --numModules;
    }
    while ( numModules );
    _RSI = (ParticleEmitter *)pos.v.m128_u64[0];
  }
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( (*(_DWORD *)(*(_QWORD *)out.v + 100i64) & 0x200) != 0 )
  {
    ParticleEmitter::GetSystemOwner(_RSI);
    v66 = position;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+140h]
      vxorps  xmm1, xmm1, xmm1
      vsubps  xmm3, xmm0, xmmword ptr [rax+30h]
      vmovss  xmm0, cs:__real@3f800000
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm4, xmm0, xmm1
      vxorps  xmm2, xmm2, xmm2
    }
    if ( v61 )
    {
      _RAX = position;
      v74 = v61;
      do
      {
        ++_RAX;
        __asm
        {
          vmovaps xmm0, xmm2
          vshufps xmm0, xmm0, xmm0, 0
          vmulps  xmm0, xmm0, xmm3
          vaddps  xmm1, xmm0, xmmword ptr [rax-10h]
          vmovups xmmword ptr [rax-10h], xmm1
          vaddss  xmm2, xmm2, xmm4
        }
        --v74;
      }
      while ( v74 );
    }
  }
  else
  {
    v66 = position;
  }
  v78 = v242;
  v79 = particle_use_spawn_position_in_runner_bolt_offset->current.enabled && v262 == 9 && v242;
  v245 = v79;
  if ( m_velocityType )
  {
    v80 = m_velocityType - 1;
    if ( !v80 )
      goto LABEL_206;
    v81 = v80 - 1;
    if ( !v81 )
      goto LABEL_165;
    v82 = v81 - 2;
    if ( v82 )
    {
      if ( v82 == 1 )
      {
LABEL_165:
        if ( v61 )
        {
          _RBX = v66;
          v264 = (char *)((char *)v263 - (char *)v66);
          _R15 = (char *)((char *)v260 - (char *)v66);
          v85 = v66;
          v86 = numParticles;
          _R13 = (char *)((char *)velocityArray - (char *)v66);
          do
          {
            ParticleState::CalculateSpawnOffsetParticleTransform(pParticleState, v85, _RSI, &outParticleTransform);
            v88 = ParticleState::UseBoltInfo(pParticleState);
            __asm { vmovups xmm0, xmmword ptr [rbx] }
            if ( v88 )
            {
              __asm { vmovdqu xmmword ptr [r15+rbx], xmm0 }
            }
            else
            {
              __asm
              {
                vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
                vshufps xmm3, xmm0, xmm0, 55h ; 'U'
                vshufps xmm4, xmm0, xmm0, 0
                vmulps  xmm0, xmm2, xmmword ptr [r14+20h]
                vaddps  xmm2, xmm0, xmmword ptr [r14+30h]
                vmulps  xmm0, xmm3, xmmword ptr [r14+10h]
                vaddps  xmm1, xmm0, xmm2
                vmulps  xmm0, xmm4, xmmword ptr [r14]
                vaddps  xmm2, xmm0, xmm1
                vmovups xmmword ptr [rbx], xmm2
              }
              if ( v245 == v88 )
                __asm { vmovups xmmword ptr [r15+rbx], xmm2 }
            }
            Particle_RotMatrixToQuatVec(&outParticleTransform, &out);
            _RAX = v264;
            __asm
            {
              vmovups xmm0, xmmword ptr [rsp+2C8h+out]
              vmovups xmmword ptr [rax+rbx], xmm0
            }
            if ( !v275 )
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [rbx+r13]
                vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
                vmulps  xmm2, xmm1, xmmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.z.v]
                vshufps xmm3, xmm0, xmm0, 55h ; 'U'
                vshufps xmm4, xmm0, xmm0, 0
                vmulps  xmm0, xmm3, xmmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.y.v]
                vaddps  xmm3, xmm0, xmm2
                vmulps  xmm0, xmm4, xmmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.x.v]
                vaddps  xmm2, xmm0, xmm3
                vmovups xmmword ptr [rbx+r13], xmm2
              }
            }
            ++v85;
            ++_RBX;
            --v86;
          }
          while ( v86 );
          p_m_particleData = v269;
          v58 = pParticleState;
        }
      }
    }
    else
    {
LABEL_206:
      if ( v61 )
      {
        _RAX = v66;
        _RCX = (char *)((char *)v260 - (char *)v66);
        _R8 = (char *)((char *)v263 - (char *)v66);
        v123 = v61;
        _R15 = rEmitterTransform;
        do
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovdqu xmmword ptr [rcx+rax], xmm0
            vmovups xmm1, xmmword ptr [rax]
          }
          ++_RAX;
          __asm
          {
            vshufps xmm2, xmm1, xmm1, 0AAh ; 'ª'
            vmulps  xmm0, xmm2, xmmword ptr [r15+20h]
            vaddps  xmm2, xmm0, xmmword ptr [r15+30h]
            vshufps xmm3, xmm1, xmm1, 55h ; 'U'
            vmulps  xmm0, xmm3, xmmword ptr [r15+10h]
            vshufps xmm4, xmm1, xmm1, 0
            vaddps  xmm1, xmm0, xmm2
            vmulps  xmm0, xmm4, xmmword ptr [r15]
            vaddps  xmm1, xmm0, xmm1
            vmovups xmmword ptr [rax-10h], xmm1
            vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
            vmovups xmmword ptr [r8+rax-10h], xmm0
          }
          --v123;
        }
        while ( v123 );
        goto LABEL_176;
      }
    }
    _R15 = rEmitterTransform;
LABEL_176:
    v109 = numParticles;
LABEL_177:
    v110 = position;
    goto LABEL_178;
  }
  _R15 = rEmitterTransform;
  if ( v242 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r15]
      vmovups ymmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.x.v], ymm0
      vmovups ymm0, ymmword ptr [r15+20h]
      vmovups ymmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.z.v], ymm0
    }
    Axis34ToQuat((const tmat34_t<vec4_t> *)&outParticleTransform, &out);
    __asm { vmovaps xmm5, xmmword ptr [rsp+2C8h+out] }
    v78 = v242;
  }
  else
  {
    __asm { vmovups xmm5, xmmword ptr [rsp+2C8h+pManager] }
  }
  v109 = numParticles;
  if ( !numParticles )
    goto LABEL_177;
  v110 = position;
  _RAX = velocityArray;
  _R8 = (char *)position - (char *)velocityArray;
  _RDX = (char *)v260 - (char *)velocityArray;
  _R9 = (char *)v263 - (char *)velocityArray;
  v142 = numParticles;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r8+rax]
      vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
      vshufps xmm3, xmm0, xmm0, 55h ; 'U'
      vshufps xmm4, xmm0, xmm0, 0
      vmulps  xmm0, xmm2, xmmword ptr [r15+20h]
      vaddps  xmm2, xmm0, xmmword ptr [r15+30h]
      vmulps  xmm0, xmm3, xmmword ptr [r15+10h]
      vaddps  xmm1, xmm0, xmm2
      vmulps  xmm0, xmm4, xmmword ptr [r15]
      vaddps  xmm1, xmm0, xmm1
      vmovups xmmword ptr [r8+rax], xmm1
    }
    if ( !v275 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
        vmulps  xmm1, xmm1, xmmword ptr [r15+20h]
        vshufps xmm2, xmm0, xmm0, 55h ; 'U'
        vshufps xmm3, xmm0, xmm0, 0
        vmulps  xmm0, xmm2, xmmword ptr [r15+10h]
        vaddps  xmm2, xmm0, xmm1
        vmulps  xmm0, xmm3, xmmword ptr [r15]
        vaddps  xmm1, xmm0, xmm2
        vmovups xmmword ptr [rax], xmm1
      }
    }
    if ( v78 )
    {
      if ( !v79 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r15+30h]
          vmovdqu xmmword ptr [rdx+rax], xmm0
        }
      }
      __asm { vmovups xmmword ptr [r9+rax], xmm5 }
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
        vmovups xmmword ptr [r9+rax], xmm0
      }
    }
    ++_RAX;
    --v142;
  }
  while ( v142 );
LABEL_178:
  switch ( v262 )
  {
    case 2u:
      v229 = &v58->m_elementTypeModule;
      if ( !*((_BYTE *)&v58->m_elementTypeModule.pModule[6].m_type + 2) )
      {
        _RCX = v58->m_pModuleInitAtlas;
        if ( _RCX && (_RCX->m_flags & 1) == 0 && v58->m_atlasData.isAtlas )
        {
          LODWORD(pManager[0]) = 0;
          HIDWORD(pManager[0]) = _RCX->m_loopCount;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+2Ch]
            vmovss  dword ptr [rsp+2C8h+pManager+8], xmm0
          }
        }
        else
        {
          pManager[0] = NULL;
          __asm { vmovss  dword ptr [rsp+2C8h+pManager+8], xmm6 }
        }
        if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
          __debugbreak();
        v232 = p_m_particleData->m_particleCountRunning;
        if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
          __debugbreak();
        if ( (unsigned int)v232 >= p_m_particleData->m_particleCountMax )
        {
          LODWORD(parentVelocityArray) = p_m_particleData->m_particleCountMax;
          LODWORD(numParticlesa) = v232;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
            __debugbreak();
        }
        v233 = &Particle_GetAtlasIndexArray(p_m_particleData)[v232];
        RotationAngleArrayNextFreeElem = Particle_GetRotationAngleArrayNextFreeElem(p_m_particleData);
        ColorArrayNextFreeElem = Particle_GetColorArrayNextFreeElem(p_m_particleData);
        v236 = _R15;
        positionArray = position;
        v162 = localClientNum;
        rotationAngleArray = RotationAngleArrayNextFreeElem;
        v164 = numParticles;
        ParticleEmitter::SpawnDecals(_RSI, localClientNum, numParticles, v236, v229, randomSeedArray, ColorArrayNextFreeElem, position, sizeArray, rotationAngleArray, flagsArray, pMarkSpawnData, v233, (FX_ImpactMark_AtlasInfo *)pManager, boltOffsetPos, boltOffsetQuat);
        v161 = randomSeedArray;
        goto LABEL_235;
      }
      break;
    case 4u:
      v228 = Particle_GetColorArrayNextFreeElem(p_m_particleData);
      parentVelocityArrayb = v110;
      v161 = randomSeedArray;
      ParticleEmitter::SpawnGeoTrails(_RSI, v109, v58, _R15, randomSeedArray, v228, parentVelocityArrayb, sizeArray, velocityArray);
      goto LABEL_234;
    case 9u:
      if ( !v272.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1587, ASSERT_TYPE_ASSERT, "(pModuleInitRunner)", (const char *)&queryFormat, "pModuleInitRunner") )
        __debugbreak();
      v167 = dobjHandle;
      attachedToParent = *((_BYTE *)&v272.pModule[12].m_type + 3);
      v168 = v266;
      if ( attachedToParent )
        v167 = 4095;
      v169 = boneIndex;
      dobjHandlea = v167;
      if ( *((_BYTE *)&v272.pModule[12].m_type + 3) )
        v169 = 0xFFFF;
      if ( *((_BYTE *)&v272.pModule[12].m_type + 3) )
        v168 = NULL;
      boneIndexa = v169;
      boltOffset = v168;
      if ( *(_DWORD *)&v272.pModule[11].m_type )
      {
        v172 = 0;
        m_type = v272.pModule[12].m_type;
        if ( v109 )
        {
          v173 = 0i64;
          v261 = (char *)v260 - (char *)position;
          _RDI = position;
          do
          {
            if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            v175 = p_m_particleData->m_particleCountRunning;
            if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
              __debugbreak();
            if ( (unsigned int)v175 >= p_m_particleData->m_particleCountMax )
            {
              LODWORD(parentVelocityArray) = p_m_particleData->m_particleCountMax;
              LODWORD(numParticlesa) = v175;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 349, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
                __debugbreak();
            }
            *(_QWORD *)out.v = &Particle_GetChildSystemArray(p_m_particleData)[v175];
            if ( ParticleState::IsRelativeToEmitterOrigin(pParticleState) )
            {
              if ( (unsigned __int8)(m_type - 3) > 2u )
              {
                __asm
                {
                  vmovups ymm0, ymmword ptr [r15]
                  vmovups ymm1, ymmword ptr [r15+20h]
                  vmovups ymmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.x.v], ymm0
                  vmovups ymmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.z.v], ymm1
                }
              }
              else
              {
                ParticleState::CalculateSpawnOffsetParticleTransform(pParticleState, &position[v172], _RSI, &outParticleTransform);
              }
              __asm
              {
                vmovups xmm0, xmmword ptr [rdi]
                vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
                vshufps xmm3, xmm0, xmm0, 55h ; 'U'
                vshufps xmm4, xmm0, xmm0, 0
                vmulps  xmm0, xmm2, xmmword ptr [r15+20h]
                vaddps  xmm2, xmm0, xmmword ptr [r15+30h]
                vmulps  xmm0, xmm3, xmmword ptr [r15+10h]
                vaddps  xmm1, xmm0, xmm2
                vmulps  xmm0, xmm4, xmmword ptr [r15]
                vaddps  xmm1, xmm0, xmm1
                vmovups xmmword ptr [rsp+2C8h+pos.v], xmm1
              }
            }
            else if ( (unsigned __int8)(m_type - 3) <= 2u && BYTE2(v272.pModule[12].m_flags) )
            {
              v188 = pParticleState->m_pModuleInitRelativeVelocity;
              __asm
              {
                vmovups ymm0, ymmword ptr [r15]
                vmovups ymm1, ymmword ptr [r15+20h]
                vmovups ymmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.x.v], ymm0
                vmovups ymmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.z.v], ymm1
              }
              if ( !v188 || (v188->m_flags & 1) != 0 || ((v188->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [rdi]
                  vmovups xmmword ptr [rsp+2C8h+pos.v], xmm0
                }
              }
              else
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [rdi]
                  vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
                  vshufps xmm3, xmm0, xmm0, 55h ; 'U'
                  vshufps xmm4, xmm0, xmm0, 0
                  vmulps  xmm0, xmm2, xmmword ptr [r15+20h]
                  vaddps  xmm2, xmm0, xmmword ptr [r15+30h]
                  vmulps  xmm0, xmm3, xmmword ptr [r15+10h]
                  vaddps  xmm1, xmm0, xmm2
                  vmulps  xmm0, xmm4, xmmword ptr [r15]
                  vaddps  xmm1, xmm0, xmm1
                  vmovups xmmword ptr [rsp+2C8h+pos.v], xmm1
                }
              }
              if ( (pParticleState->m_pStateDef->flags & 0x10000000) != 0 )
              {
                _RAX = ParticleEmitter::GetSystemOwner(_RSI);
                __asm
                {
                  vmovups xmm1, xmmword ptr [rax+30h]
                  vaddps  xmm1, xmm1, xmmword ptr [rsp+2C8h+pos.v]
                  vmovups xmmword ptr [rsp+2C8h+pos.v], xmm1
                }
              }
            }
            else
            {
              if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 351, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
                __debugbreak();
              v205 = p_m_particleData->m_particleCountRunning;
              if ( !p_m_particleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 351, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
                __debugbreak();
              if ( (unsigned int)v205 >= p_m_particleData->m_particleCountMax )
              {
                LODWORD(parentVelocityArray) = p_m_particleData->m_particleCountMax;
                LODWORD(numParticlesa) = v205;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 351, ASSERT_TYPE_ASSERT, "(unsigned)( particleIndex ) < (unsigned)( pParticleData->GetParticleCountMax() )", "particleIndex doesn't index pParticleData->GetParticleCountMax()\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
                  __debugbreak();
              }
              v206 = Particle_GetRotationAngleArray(p_m_particleData);
              ParticleEmitter::GetChildOrientation(_RSI, &position[v172], &velocityArray[v172], &v206[v205 + v172], v250, _R15, m_type, 1, &outParticleTransform);
              v207 = pParticleState->m_pModuleInitRelativeVelocity;
              if ( !v207 || (v207->m_flags & 1) != 0 || ((v207->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
              {
                __asm { vmovups xmm2, xmmword ptr [rdi] }
              }
              else
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [rdi]
                  vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
                  vshufps xmm3, xmm0, xmm0, 55h ; 'U'
                  vshufps xmm4, xmm0, xmm0, 0
                  vmulps  xmm0, xmm2, xmmword ptr [r15+20h]
                  vaddps  xmm2, xmm0, xmmword ptr [r15+30h]
                  vmulps  xmm0, xmm3, xmmword ptr [r15+10h]
                  vaddps  xmm1, xmm0, xmm2
                  vmulps  xmm0, xmm4, xmmword ptr [r15]
                  vaddps  xmm2, xmm0, xmm1
                }
              }
              m_pStateDef = pParticleState->m_pStateDef;
              __asm { vmovups xmmword ptr [rsp+2C8h+outParticleTransform.w.v], xmm2 }
              if ( (m_pStateDef->flags & 0x10000000) != 0 )
              {
                _RAX = ParticleEmitter::GetSystemOwner(_RSI);
                __asm
                {
                  vmovups xmm1, xmmword ptr [rax+30h]
                  vaddps  xmm2, xmm1, xmmword ptr [rsp+2C8h+outParticleTransform.w.v]
                  vmovups xmmword ptr [rsp+2C8h+outParticleTransform.w.v], xmm2
                }
              }
              __asm { vmovdqa xmmword ptr [rsp+2C8h+pos.v], xmm2 }
            }
            __asm
            {
              vmovups ymm0, ymmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.x.v]
              vmovups xmm1, xmmword ptr [rsp+2C8h+outParticleTransform.baseclass_0.z.v]
              vmovups ymmword ptr [rsp+2C8h+orientationMat.x.v], ymm0
              vmovups xmmword ptr [rsp+2C8h+orientationMat.z.v], xmm1
            }
            if ( v245 )
            {
              _RAX = v261;
              __asm
              {
                vmovups xmm1, xmmword ptr [rax+rdi]
                vaddps  xmm2, xmm1, xmmword ptr [rax+10h]
                vmovss  dword ptr [rsp+2C8h+axis], xmm2
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
                LocalClientTime = CG_GetLocalClientTime((const LocalClientNum_t)_RSI->m_pSystemOwner->m_localClientNum);
            }
            v227 = ParticleEmitter::SpawnChildEffect(_RSI, localClientNum, LocalClientTime, pManager[0], pParticleState, (const ParticleLinkedAssetListDef *)&v272.pModule[10], randomSeedArray[v173], &pos, &orientationMat, dobjHandlea, boneIndexa, boltOffset, pCamera, pMarkSpawnData, 1, attachedToParent, *(const ParticleSystem **)quat.v, NULL, PARTICLE_SYSTEM_FLAG_NONE);
            ++v172;
            ++_RDI;
            *(_DWORD *)(*(_QWORD *)out.v + v173 * 4) = v227;
            ++v173;
          }
          while ( v172 < numParticles );
        }
      }
      else
      {
        v170 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RSI);
        v171 = ParticleSystem::GetDef(v170);
        Com_PrintWarning(21, "There are no child effects in the runner for effect: %s", v171->name);
      }
      break;
    case 0xBu:
      parentVelocityArraya = v110;
      v161 = randomSeedArray;
      ParticleEmitter::SpawnVectorFields(_RSI, v109, v58, _R15, &v58->m_elementTypeModule, randomSeedArray, parentVelocityArraya);
      goto LABEL_234;
    case 0xDu:
      if ( v109 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1675, ASSERT_TYPE_ASSERT, "(numParticles == 1)", (const char *)&queryFormat, "numParticles == 1") )
        __debugbreak();
      if ( (SystemOwner->m_flags & 0x4000000000i64) != 0 )
      {
        v164 = numParticles;
        positionArray = position;
        v162 = localClientNum;
        v161 = randomSeedArray;
        goto LABEL_235;
      }
      v111 = p_m_elementTypeModule;
      if ( !*(_DWORD *)&p_m_elementTypeModule->pModule[1].m_type )
        goto LABEL_232;
      _R12 = 0x140000000ui64;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
        vmulss  xmm1, xmm0, cs:__real@3c23d70a
      }
      _RAX = *randomSeedArray;
      __asm { vcomiss xmm1, ds:(rva ?fx_randomTable@@3QBMB+7Ch)[r12+rax*4]; float const near * const fx_randomTable }
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
        v118 = CgEntitySystem::ms_entitySystemArray[localClientNum];
        if ( (unsigned int)markEntnum >= 0x800 )
        {
          LODWORD(parentVelocityArray) = 2048;
          LODWORD(numParticlesa) = markEntnum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", numParticlesa, parentVelocityArray) )
            __debugbreak();
        }
        if ( (CgEntitySystem *)((char *)v118 + 760 * markEntnum) != (CgEntitySystem *)-16i64 && (v118->m_entities[markEntnum].flags & 1) != 0 && v118->m_entities[markEntnum].nextState.number < 2533 && (unsigned int)pMarkSpawnData->boneIndex - 1 <= 0xFC )
        {
          dobjHandle = v118->m_entities[markEntnum].nextState.number;
          v119 = pMarkSpawnData->boneIndex;
          v111 = p_m_elementTypeModule;
LABEL_226:
          if ( dobjHandle < 2533 && (v119 - 1 <= 0xFC || v119 >= 0x100) )
          {
            v160 = (const vec3_t *)axis;
            if ( !v270 )
              v160 = NULL;
            FX_Dismemberment_DismemberBone(localClientNum, dobjHandle, v119, v160, v111->pModule[1].m_flags);
          }
LABEL_232:
          *flagsArray |= 1u;
          break;
        }
        v111 = p_m_elementTypeModule;
      }
      v119 = boneIndex;
      goto LABEL_226;
  }
  v161 = randomSeedArray;
LABEL_234:
  v162 = localClientNum;
  positionArray = position;
  v164 = numParticles;
LABEL_235:
  __asm { vmovaps xmm6, [rsp+2C8h+var_48] }
  v166 = pParticleState->m_pStateDef;
  if ( (v166->flags & 0x400) != 0 )
  {
    ParticleState::EmitPhysicsParticles(pParticleState, p_m_particleData, v164, _RSI);
    v166 = pParticleState->m_pStateDef;
  }
  if ( (v166->flags & 0x8000000) != 0 )
    ParticleEmitter::SpawnSounds(_RSI, v162, currentTime, v164, pParticleState, pParticleState->m_pModuleInitSound, v161, positionArray, handleArray);
  if ( m_particleCountRunning != p_m_particleData->m_particleCountRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1734, ASSERT_TYPE_ASSERT, "(checkRunningParticles == particleData->GetParticleCountRunning())", (const char *)&queryFormat, "checkRunningParticles == particleData->GetParticleCountRunning()") )
    __debugbreak();
  ParticleData::AddParticlesRunning(p_m_particleData, v164);
  _RSI->m_lifetimeParticleCount += v164;
}

/*
==============
ParticleEmitter::EvaluateDistanceFade
==============
*/

double __fastcall ParticleEmitter::EvaluateDistanceFade(ParticleEmitter *this, double cameraDistance)
{
  char v9; 
  const ParticleModuleInitSpawn *m_pModuleInitSpawn; 
  ParticleCurveDef *m_curves; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RAX = ParticleEmitter::GetEmitterDef(this);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, dword ptr [rax+4Ch]
    vucomiss xmm2, xmm0
  }
  if ( v9 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  else
  {
    m_pModuleInitSpawn = this->m_pModuleInitSpawn;
    __asm { vdivss  xmm6, xmm6, xmm2 }
    if ( m_pModuleInitSpawn )
      m_curves = m_pModuleInitSpawn->m_curves;
    else
      m_curves = &ParticleEmitter::GetEmitterDef(this)->fadeCurveDef;
    __asm
    {
      vmovaps xmm1, xmm6; time
      vmovaps xmm6, [rsp+38h+var_18]
    }
    *(double *)&_XMM0 = Particle_GetCurveValue(m_curves, *(const float *)&_XMM1);
  }
  return *(double *)&_XMM0;
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
  _RDI = outCurvePoint1;
  _RSI = outCurvePoint2;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4702, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  _RBX.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
  _RBP = ParticleEmitter::GetSystemOwner(this);
  ParticleEmitter::GetBeamPos(this, pParticleState, outStartPos, outEndPos);
  if ( (_RBP->m_flags & 0x100) != 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+110h]
      vmovdqu xmmword ptr [rdi], xmm0
      vmovups xmm1, xmmword ptr [rbp+120h]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovdqu xmmword ptr [rdi], xmm0
      vmovups xmm1, xmmword ptr [rbx+50h]
    }
  }
  __asm { vmovdqu xmmword ptr [rsi], xmm1 }
  if ( _RBX.pModule )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rdi]
      vaddps  xmm0, xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rdi], xmm0
      vmovups xmm1, xmmword ptr [rsi]
      vaddps  xmm0, xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rsi], xmm0
    }
  }
}

/*
==============
ParticleEmitter::GetBeamLength
==============
*/
float ParticleEmitter::GetBeamLength(ParticleEmitter *this, const ParticleState *pParticleState)
{
  if ( !pParticleState )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4733, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4673, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
      __debugbreak();
  }
  _RBX.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
  _RAX = ParticleEmitter::GetSystemOwner(this);
  if ( (_RAX->m_flags & 0x100) != 0 )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+0F0h]
      vmovups xmm2, xmmword ptr [rax+100h]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx+10h]
      vmovups xmm2, xmmword ptr [rbx+20h]
    }
  }
  if ( _RBX.pModule )
  {
    __asm
    {
      vaddps  xmm1, xmm1, xmmword ptr [rbx+30h]
      vaddps  xmm2, xmm2, xmmword ptr [rbx+30h]
    }
  }
  __asm
  {
    vsubps  xmm0, xmm2, xmm1
    vmulps  xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm0, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
ParticleEmitter::GetBeamPos
==============
*/
void ParticleEmitter::GetBeamPos(ParticleEmitter *this, const ParticleState *pParticleState, float4 *outStartPos, float4 *outEndPos)
{
  _RSI = outEndPos;
  _RDI = outStartPos;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4673, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  _RBX.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
  _RAX = ParticleEmitter::GetSystemOwner(this);
  if ( (_RAX->m_flags & 0x100) != 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+0F0h]
      vmovdqu xmmword ptr [rdi], xmm0
      vmovups xmm1, xmmword ptr [rax+100h]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+10h]
      vmovdqu xmmword ptr [rdi], xmm0
      vmovups xmm1, xmmword ptr [rbx+20h]
    }
  }
  __asm { vmovdqu xmmword ptr [rsi], xmm1 }
  if ( _RBX.pModule )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rdi]
      vaddps  xmm0, xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rdi], xmm0
      vmovups xmm1, xmmword ptr [rsi]
      vaddps  xmm0, xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rsi], xmm0
    }
  }
}

/*
==============
ParticleEmitter::GetBeamTransform
==============
*/
void ParticleEmitter::GetBeamTransform(ParticleEmitter *this, const ParticleState *pParticleState, vector4 *outTransform)
{
  float4 lookAtInput; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = outTransform;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4673, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  _RDI.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
  _RAX = ParticleEmitter::GetSystemOwner(this);
  if ( (_RAX->m_flags & 0x100) != 0 )
  {
    __asm
    {
      vmovups xmm6, xmmword ptr [rax+0F0h]
      vmovups xmm1, xmmword ptr [rax+100h]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm6, xmmword ptr [rdi+10h]
      vmovups xmm1, xmmword ptr [rdi+20h]
    }
  }
  if ( _RDI.pModule )
  {
    __asm
    {
      vaddps  xmm6, xmm6, xmmword ptr [rdi+30h]
      vaddps  xmm1, xmm1, xmmword ptr [rdi+30h]
    }
  }
  __asm
  {
    vsubps  xmm2, xmm1, xmm6
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( _RDI.pModule )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@0000000000000000000000003f800000
      vmovups xmm1, cs:__xmm@000000003f8000000000000000000000
      vmovups xmmword ptr [rbx], xmm0
      vmovups xmmword ptr [rbx+20h], xmm1
      vmovups xmmword ptr [rsp+68h+lookAtInput.v], xmm2
    }
    Particle_GenerateMatrixFromLookAt(&lookAtInput, _RBX);
    __asm { vmovups xmmword ptr [rbx+30h], xmm6 }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
      vmovups xmmword ptr [rbx], xmm0
      vmovups xmm1, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+10h; tmat44_t<vec4_t> const identityMatrix44
      vmovups xmmword ptr [rbx+10h], xmm1
      vmovups xmm0, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
      vmovups xmmword ptr [rbx+20h], xmm0
      vmovups xmm1, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+30h; tmat44_t<vec4_t> const identityMatrix44
      vmovups xmmword ptr [rbx+30h], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
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
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v7; 
  unsigned int numStates; 
  int v9; 
  __int64 v19; 
  int v31; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  __int64 v33; 
  unsigned int v34; 
  __int64 v35; 

  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 933, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 934, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
    __debugbreak();
  if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 935, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  v4 = 0;
  _EDI = 0;
  EmitterDef = ParticleEmitter::GetEmitterDef(this);
  v7 = 0;
  numStates = EmitterDef->numStates;
  if ( numStates >= 8 )
  {
    v9 = 2;
    _R14 = this->m_pParticleStateData;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    do
    {
      _RAX = 528i64 * v7;
      v7 += 8;
      __asm
      {
        vmovd   xmm0, dword ptr [rax+r14+1A8h]
        vpinsrd xmm0, xmm0, dword ptr [rdx+r14+1A8h], 1
        vpinsrd xmm0, xmm0, dword ptr [r8+r14+1A8h], 2
        vpinsrd xmm0, xmm0, dword ptr [r10+r14+1A8h], 3
        vpaddd  xmm1, xmm0, xmm1
      }
      v19 = (unsigned int)(v9 + 2);
      v9 += 8;
      _RAX = 528 * v19;
      __asm
      {
        vmovd   xmm0, dword ptr [rax+r14+1A8h]
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
      vmovd   edi, xmm0
    }
  }
  v31 = 0;
  if ( v7 >= numStates )
    return _EDI;
  if ( numStates - v7 >= 2 )
  {
    m_pParticleStateData = this->m_pParticleStateData;
    v33 = v7;
    v34 = ((numStates - v7 - 2) >> 1) + 1;
    v35 = v34;
    v7 += 2 * v34;
    do
    {
      v4 += m_pParticleStateData[v33].m_particleData.m_particleCountRunning;
      v31 += m_pParticleStateData[v33 + 1].m_particleData.m_particleCountRunning;
      v33 += 2i64;
      --v35;
    }
    while ( v35 );
  }
  if ( v7 < numStates )
    _EDI += this->m_pParticleStateData[v7].m_particleData.m_particleCountRunning;
  return _EDI + v31 + v4;
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

float __fastcall ParticleEmitter::GetScaleFactorByCameraDistance(ParticleEmitter *this, const ParticleModuleScaleByDistance *pModuleScaleByDistance, double cameraDistance, int randomSeed)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm6, xmm2
  }
  if ( !pModuleScaleByDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5258, ASSERT_TYPE_ASSERT, "(pModuleScaleByDistance)", (const char *)&queryFormat, "pModuleScaleByDistance") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vdivss  xmm0, xmm6, dword ptr [rdi+30h]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm1, xmm0; time
    vmovaps xmm8, xmm0
  }
  *(double *)&_XMM0 = Particle_GetCurveValue(pModuleScaleByDistance->m_curves, *(const float *)&_XMM1);
  __asm { vmulss  xmm6, xmm0, dword ptr [rdi+1Ch] }
  if ( (pModuleScaleByDistance->m_flags & 0x10) != 0 )
  {
    __asm { vmovaps xmm1, xmm8; time }
    *(double *)&_XMM0 = Particle_GetCurveValue(&pModuleScaleByDistance->m_curves[1], *(const float *)&_XMM1);
    __asm
    {
      vmulss  xmm3, xmm0, dword ptr [rdi+2Ch]
      vsubss  xmm0, xmm7, dword ptr [rcx+rsi*4]
      vmulss  xmm1, xmm3, dword ptr [rcx+rsi*4]
      vmulss  xmm2, xmm0, xmm6
      vaddss  xmm0, xmm2, xmm1
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return *(float *)&_XMM0;
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
  char v12; 
  bool v13; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  bool result; 
  __int16 gridIdx[8]; 
  float4 posWorld; 
  vec2_t position; 

  _RSI = pCamera;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2161, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0D8h+var_28], xmm6
    vmovaps [rsp+0D8h+var_38], xmm7
    vmovaps [rsp+0D8h+var_48], xmm8
    vmovaps [rsp+0D8h+var_58], xmm9
    vmovaps [rsp+0D8h+var_68], xmm10
  }
  _RBX = ParticleEmitter::GetEmitterDef(this);
  if ( !fx_cull_elem_spawn->current.enabled )
    goto LABEL_17;
  _RAX = ParticleEmitter::GetSystemOwner(this);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovups xmm7, xmmword ptr [rax+30h]
    vshufps xmm8, xmm7, xmm7, 55h ; 'U'
    vshufps xmm9, xmm7, xmm7, 0AAh ; 'ª'
    vmovss  dword ptr [rsp+0D8h+position+4], xmm8
    vmovss  [rsp+0D8h+var_80], xmm9
    vmovss  dword ptr [rsp+0D8h+position], xmm7
    vmovss  xmm10, dword ptr [rbx+44h]
    vucomiss xmm10, xmm6
  }
  if ( !v13 )
    goto LABEL_21;
  __asm { vucomiss xmm6, dword ptr [rbx+48h] }
  if ( !v13 )
  {
LABEL_21:
    v12 = 0;
    v13 = (_RBX->flags & 0x2000000) == 0;
    if ( (_RBX->flags & 0x2000000) != 0 )
      __asm { vmovss  xmm5, cs:__real@3f800000 }
    else
      __asm { vmovss  xmm5, dword ptr [rsi+0C4h] }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm3, xmm0, xmm7
      vmovss  xmm0, dword ptr [rsi+8]
      vsubss  xmm2, xmm1, xmm8
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vsubss  xmm4, xmm0, xmm9
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm2, xmm5
      vcomiss xmm1, xmm10
      vcomiss xmm1, dword ptr [rbx+48h]
    }
    if ( (_RBX->flags & 0x2000000) != 0 )
      goto LABEL_16;
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+60h]; radius
    vcomiss xmm3, xmm6
  }
  if ( !(v12 | v13) )
  {
    posWorld.v.m128_i32[3] = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+0D8h+posWorld.v]
      vmovss  xmm0, xmm0, xmm7
      vinsertps xmm0, xmm0, xmm8, 10h
      vinsertps xmm0, xmm0, xmm9, 20h ; ' '
      vmovups xmmword ptr [rsp+0D8h+posWorld.v], xmm0
      vmovups xmmword ptr [rsp+0D8h+posWorld.v], xmm0
    }
    if ( FX_CullSphere(_RSI, frustumPlaneCount, &posWorld, *(float *)&_XMM3, 1) )
      goto LABEL_16;
  }
  m_pParticleStateData = this->m_pParticleStateData;
  if ( m_pParticleStateData && (m_pParticleStateData->m_particleState.m_pStateDef->flags & 0x200400) != 0 && !WorldCollision_IsCollisionReadyAt((const Physics_WorldId)(3 * this->m_pSystemOwner->m_localClientNum + 3), &position, gridIdx) )
LABEL_16:
    result = 0;
  else
LABEL_17:
    result = 1;
  __asm
  {
    vmovaps xmm10, [rsp+0D8h+var_68]
    vmovaps xmm9, [rsp+0D8h+var_58]
    vmovaps xmm8, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_38]
    vmovaps xmm6, [rsp+0D8h+var_28]
  }
  return result;
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
  char v32; 
  char v36; 
  unsigned int v37; 
  char v38; 
  unsigned int v39; 
  int v40; 
  unsigned int v41; 
  char v42; 
  int v43; 
  int v44; 
  unsigned int v45; 
  __int64 v48; 

  v4 = emitterIndex;
  m_pSystemOwner = pSystemOwner;
  _RDI = this;
  if ( !pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 109, ASSERT_TYPE_ASSERT, "(pSystemOwner)", (const char *)&queryFormat, "pSystemOwner") )
    __debugbreak();
  if ( !pEmitterDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 110, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
    __debugbreak();
  if ( _RDI->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 111, ASSERT_TYPE_ASSERT, "(!m_pParticleStateData)", (const char *)&queryFormat, "!m_pParticleStateData") )
    __debugbreak();
  if ( !m_pSystemOwner->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
    __debugbreak();
  m_pSystemDef = m_pSystemOwner->m_pSystemDef;
  if ( (unsigned int)v4 >= m_pSystemDef->numEmitters )
  {
    if ( !m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
      __debugbreak();
    LODWORD(v48) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( emitterIndex ) < (unsigned)( pSystemOwner->GetDef()->numEmitters )", "emitterIndex doesn't index pSystemOwner->GetDef()->numEmitters\n\t%i not in [0, %i)", v48, m_pSystemOwner->m_pSystemDef->numEmitters) )
      __debugbreak();
  }
  if ( (pEmitterDef->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 113, ASSERT_TYPE_ASSERT, "(!pEmitterDef->IsDisabled())", (const char *)&queryFormat, "!pEmitterDef->IsDisabled()") )
    __debugbreak();
  if ( (_RDI->m_flags & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 114, ASSERT_TYPE_ASSERT, "(!HasFlag( PARTICLE_EMITTER_FLAG_DISABLED ))", (const char *)&queryFormat, "!HasFlag( PARTICLE_EMITTER_FLAG_DISABLED )") )
    __debugbreak();
  if ( ((unsigned __int8)pEmitterDef & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 115, ASSERT_TYPE_ASSERT, "(((uintptr_t)(const void *)(pEmitterDef)) % (16) == 0)", (const char *)&queryFormat, "((uintptr_t)(const void *)(pEmitterDef)) % (PARTICLE_ALIGNMENT) == 0") )
    __debugbreak();
  _RDI->m_impactMarkHandle = -1;
  *(_QWORD *)&_RDI->m_emitterLife = 0i64;
  *(_QWORD *)&_RDI->m_lastSpawnTime = 0i64;
  _RDI->m_particleRemainder = 0.0;
  *(_QWORD *)&_RDI->m_alphaThreshold = 0i64;
  *(_QWORD *)&_RDI->m_scriptedChannels = 0i64;
  _RDI->m_scriptedInputChannelData.color.v.m128_u64[0] = 0i64;
  _RDI->m_scriptedInputChannelData.color.v.m128_u64[1] = 0i64;
  _RDI->m_scriptedInputChannelData.size.v.m128_u64[0] = 0i64;
  _RDI->m_scriptedInputChannelData.size.v.m128_u64[1] = 0i64;
  *(_QWORD *)&_RDI->m_scriptedInputChannelData.colorOperation = 0i64;
  *(_QWORD *)_RDI->m_scriptedInputChannelData.pad = 0i64;
  _RDI->m_lifetimeParticleCount = 0;
  _RDI->m_instancePoolProcessed = 0;
  _RDI->m_pSystemOwner = m_pSystemOwner;
  if ( (unsigned int)v4 > 0xFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v4, "unsigned", v4) )
      __debugbreak();
    m_pSystemOwner = _RDI->m_pSystemOwner;
  }
  _RDI->m_emitterIndex = v4;
  _RDI->m_randomSeed = (pEmitterDef->randomSeed + m_pSystemOwner->m_spawnTime + (unsigned int)m_pSystemOwner->m_randomSeed) % 0x3FE9;
  if ( pEmitterDef->numStates <= 0 )
  {
    _RDI->m_pModuleEmissionGraph = NULL;
    v10 = NULL;
  }
  else
  {
    moduleGroupDefs = pEmitterDef->stateDefs->moduleGroupDefs;
    _RDI->m_pModuleEmissionGraph = ParticleModule::FindModule<ParticleModuleEmissionGraph>(moduleGroupDefs, PARTICLE_MODULE_EMISSION_GRAPH, 0xFFFFFFFF);
    v10 = ParticleModule::FindModule<ParticleModuleInitSpawn>(moduleGroupDefs, PARTICLE_MODULE_INIT_SPAWN, 0xFFFFFFFF);
  }
  _RDI->m_pModuleInitSpawn = v10;
  if ( ParticleEmitter::CalculateParticleCountMax(_RDI) )
  {
    _RAX = _RDI->m_randomSeed;
    _RCX = fx_randomTable;
    __asm { vmovss  xmm3, cs:__real@3f800000 }
    _RDI->m_instancePoolProcessed = 0;
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+rax*4+48h]
      vsubss  xmm0, xmm3, xmm1
      vmulss  xmm2, xmm0, dword ptr [rsi+30h]
      vmulss  xmm1, xmm1, dword ptr [rsi+34h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rdi+17Ch], xmm0
      vmovss  xmm1, dword ptr [rcx+rax*4+50h]
      vsubss  xmm0, xmm3, xmm1
      vmulss  xmm2, xmm0, dword ptr [rsi+0Ch]
      vmulss  xmm1, xmm1, dword ptr [rsi+10h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rdi+18Ch], xmm0
      vmovss  xmm1, dword ptr [rcx+rax*4+54h]
      vsubss  xmm0, xmm3, xmm1
      vmulss  xmm2, xmm0, dword ptr [rsi+7Ch]
      vmulss  xmm1, xmm1, dword ptr [rsi+80h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rdi+198h], xmm0
    }
    _RDI->m_burstCount = ParticleEmitter::GetBurstCount(_RDI);
    _RDI->m_gameScrubbedCurve = 0.0;
    _RAX = ParticleEmitter::GetEmitterDef(_RDI);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _RDX = _RAX;
    __asm { vucomiss xmm0, dword ptr [rax+30h] }
    if ( !v32 )
      goto LABEL_40;
    __asm { vucomiss xmm0, dword ptr [rax+34h] }
    if ( v32 )
      v36 = 1;
    else
LABEL_40:
      v36 = 0;
    v37 = _RDI->m_flags | 8;
    if ( !v36 )
      v37 = _RDI->m_flags & 0xFFFFFFF7;
    _RDI->m_flags = v37;
    __asm { vucomiss xmm0, dword ptr [rdx+38h] }
    if ( v36 )
    {
      v38 = 0;
    }
    else
    {
      __asm { vucomiss xmm0, dword ptr [rdx+3Ch] }
      v38 = 1;
    }
    v39 = v37;
    v40 = v37 | 4;
    v41 = v39 & 0xFFFFFFFB;
    if ( v38 )
      v40 = v41;
    _RDI->m_flags = v40;
    __asm { vucomiss xmm0, dword ptr [rdx+1Ch] }
    if ( v38 )
    {
      v42 = 0;
    }
    else
    {
      __asm { vucomiss xmm0, dword ptr [rdx+20h] }
      v42 = 1;
    }
    v43 = v40;
    v44 = v40 | 0x10;
    v45 = v43 & 0xFFFFFFEF;
    if ( v42 )
      v44 = v45;
    _RDI->m_flags = v44 | 0x40;
    _RAX = ParticleEmitter::GetSystemOwner(_RDI);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+30h]
      vmovdqa xmmword ptr [rdi+140h], xmm0
    }
    _RDI->m_isRunning = 1;
    return 1;
  }
  else
  {
    _RDI->m_isRunning = 0;
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(_RDI);
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
  _RBX = this;
  _RAX = ParticleEmitter::GetSystemOwner(this);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+30h]
    vmovdqa xmmword ptr [rbx+140h], xmm0
  }
}

/*
==============
ParticleEmitter::InitParentVelocityArray
==============
*/
void ParticleEmitter::InitParentVelocityArray(ParticleEmitter *this, LocalClientNum_t localClientNum, const ParticleState *pParticleState, bool isBolted, const ParticleSystem::ParticleBolt *bolt, unsigned int numParticles, float4 *parentVelocityArray)
{
  __int64 v12; 
  __int64 v14; 

  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4595, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  _RBX = parentVelocityArray;
  if ( !parentVelocityArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4596, ASSERT_TYPE_ASSERT, "(parentVelocityArray)", (const char *)&queryFormat, "parentVelocityArray") )
    __debugbreak();
  if ( (pParticleState->m_pStateDef->flags & 0x2000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4597, ASSERT_TYPE_ASSERT, "(pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_INHERIT_PARENT_VELOCITY ))", (const char *)&queryFormat, "pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_INHERIT_PARENT_VELOCITY )") )
    __debugbreak();
  if ( isBolted )
  {
    v14 = numParticles;
    if ( numParticles )
    {
      _RCX = bolt;
      do
      {
        ++_RBX;
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx+40h]
          vmovdqa xmmword ptr [rbx-10h], xmm0
        }
        --v14;
      }
      while ( v14 );
    }
  }
  else
  {
    _RAX = ParticleEmitter::GetSystemOwner(this);
    if ( (_RAX->m_flags & 0x1000) != 0 )
    {
      v12 = numParticles;
      if ( numParticles )
      {
        do
        {
          ++_RBX;
          __asm
          {
            vmovups xmm0, xmmword ptr [rax+80h]
            vmovdqa xmmword ptr [rbx-10h], xmm0
          }
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
  ntl::red_black_tree_node_base *v21; 
  InstancePoolData *p_mp_parent; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  unsigned int currentInstances; 
  unsigned int frustumPlaneCount; 
  const ParticleSystem *v37; 
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
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+0B8h+result.mp_node]
      vmovups xmmword ptr [rsp+0B8h+r_element.second.oldest], xmm0
    }
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
              v21 = mp_left;
              mp_left = mp_left->mp_parent;
            }
            while ( v21 == mp_left->mp_left );
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
      _RAX = ParticleEmitter::GetSystemOwner(this);
      frustumPlaneCount = pCamera->frustumPlaneCount;
      __asm
      {
        vmovups xmm1, xmmword ptr [rax+30h]
        vshufps xmm3, xmm1, xmm1, 0AAh ; 'ª'
      }
      HIDWORD(result[1].mp_node) = 0;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+0B8h+result.mp_node]
        vmovss  xmm0, xmm0, xmm1
        vshufps xmm2, xmm1, xmm1, 55h ; 'U'
        vinsertps xmm0, xmm0, xmm2, 10h
        vinsertps xmm0, xmm0, xmm3, 20h ; ' '
        vmovups xmmword ptr [rsp+0B8h+result.mp_node], xmm0
        vxorps  xmm3, xmm3, xmm3; radius
        vmovups xmmword ptr [rsp+0B8h+result.mp_node], xmm0
      }
      if ( !FX_CullSphere(pCamera, frustumPlaneCount, (const float4 *)result, *(float *)&_XMM3, 1) )
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
    v37 = ParticleEmitter::GetSystemOwner(this);
    if ( !p_mp_parent->oldest || (m_spawnTime = v37->m_spawnTime, m_spawnTime < ParticleEmitter::GetSystemOwner(p_mp_parent->oldest)->m_spawnTime) )
      p_mp_parent->oldest = this;
  }
}

/*
==============
ParticleEmitter::ParticleStateData::ProcessUpdateModules
==============
*/

void __fastcall ParticleEmitter::ParticleStateData::ProcessUpdateModules(ParticleEmitter::ParticleStateData *this, double dt, const int currentTime, const ParticleEmitter *pEmitterOwner, const FxCamera *pCamera)
{
  const ParticleStateDef *m_pStateDef; 
  __int64 numModules; 
  ParticleState::ModuleData *v12; 
  unsigned int m_particleCountRunning; 
  int fmt; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps xmm6, xmm1
  }
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
        v12 = this->m_particleState.m_pModuleDataList[1];
        m_particleCountRunning = this->m_particleData.m_particleCountRunning;
        if ( numModules > 0 )
        {
          do
          {
            if ( (v12->pModule->m_flags & 0x201) == 0 )
            {
              __asm { vmovss  dword ptr [rsp+78h+fmt], xmm6 }
              ((void (__fastcall *)(const ParticleModule *, ParticleData *, _QWORD, _QWORD, int, const ParticleEmitter *, ParticleEmitter::ParticleStateData *))v12->pUpdateData->updateFunc)(v12->pModule, &this->m_particleData, 0i64, m_particleCountRunning, fmt, pEmitterOwner, this);
            }
            ++v12;
            --numModules;
          }
          while ( numModules );
        }
      }
      __asm { vmovaps xmm2, xmm6; dt }
      ParticleState::UpdateScriptedInputData(&this->m_particleState, &this->m_particleData, *(const float *)&_XMM2, pEmitterOwner);
      __asm { vmovaps xmm2, xmm6; dt }
      ParticleState::UpdateInternal(&this->m_particleState, &this->m_particleData, *(const float *)&_XMM2, currentTime, pEmitterOwner, pCamera);
    }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
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
  __int64 v4; 
  __int64 v5; 
  ParticleEmitter::ParticleStateData *v6; 
  char v7; 

  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 174, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( (this->m_flags & 0x40) == 0 )
  {
    if ( !this->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 178, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
      __debugbreak();
    numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
    if ( numStates )
    {
      v4 = numStates;
      v5 = 0i64;
      do
      {
        v6 = &this->m_pParticleStateData[v5];
        ParticleState::KillAllParticles(&v6->m_particleState, &v6->m_particleData, this);
        ++v5;
        *(_QWORD *)&v6->m_particleData.m_particleCountRunning = 0i64;
        --v4;
      }
      while ( v4 );
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
  _RAX = ParticleEmitter::GetEmitterDef(this);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rax+38h]
  }
  if ( !v7 )
    goto LABEL_13;
  __asm { vucomiss xmm0, dword ptr [rax+3Ch] }
  if ( !v7 )
LABEL_13:
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

void __fastcall ParticleEmitter::SetEmissionCurveValue(ParticleEmitter *this, double value)
{
  const ParticleSystem *m_pSystemOwner; 
  ParticleEmitter *v4; 
  __int64 m_localClientNum; 
  int numStates; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  ParticleData *p_m_particleData; 
  unsigned __int8 *ParticleDataArray; 
  int m_particleCountRunning; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned __int64 v17; 
  ParticleSystem *v18; 

  m_pSystemOwner = this->m_pSystemOwner;
  v4 = this;
  __asm
  {
    vmovss  dword ptr [rcx+188h], xmm1
    vmovaps [rsp+68h+var_38], xmm6
    vmovaps xmm6, xmm1
  }
  m_localClientNum = m_pSystemOwner->m_localClientNum;
  numStates = ParticleEmitter::GetEmitterDef(this)->numStates;
  if ( numStates > 0 )
  {
    v8 = 0i64;
    v9 = m_localClientNum;
    v10 = (unsigned int)numStates;
    do
    {
      p_m_particleData = &v4->m_pParticleStateData[v8].m_particleData;
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
          v14 = (unsigned int)m_particleCountRunning;
          v15 = v9 << 12;
          do
          {
            v16 = 0;
            if ( g_particleSystemsGeneration[v15 + (*(_DWORD *)ParticleDataArray & 0xFFF)].__all32 == *(_DWORD *)ParticleDataArray )
              v16 = *(_DWORD *)ParticleDataArray & 0xFFF;
            v17 = *((_QWORD *)&g_particleSystems[0][v15] + v16);
            v18 = NULL;
            if ( v17 >= 0x1000 )
              v18 = (ParticleSystem *)v17;
            if ( v18 )
            {
              __asm { vmovaps xmm1, xmm6; value }
              ParticleSystem::SetEmissionCurveValue(v18, *(const float *)&_XMM1);
            }
            ParticleDataArray += 4;
            --v14;
          }
          while ( v14 );
        }
      }
      ++v8;
      --v10;
    }
    while ( v10 );
  }
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
}

/*
==============
ParticleEmitter::SetupFlags
==============
*/
void ParticleEmitter::SetupFlags(ParticleEmitter *this)
{
  char v3; 
  char v7; 
  unsigned int v8; 
  char v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  char v13; 
  int v14; 
  int v15; 
  unsigned int v16; 

  _RAX = ParticleEmitter::GetEmitterDef(this);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _RDX = _RAX;
  __asm { vucomiss xmm0, dword ptr [rax+30h] }
  if ( !v3 )
    goto LABEL_4;
  __asm { vucomiss xmm0, dword ptr [rax+34h] }
  if ( v3 )
    v7 = 1;
  else
LABEL_4:
    v7 = 0;
  v8 = this->m_flags | 8;
  if ( !v7 )
    v8 = this->m_flags & 0xFFFFFFF7;
  this->m_flags = v8;
  __asm { vucomiss xmm0, dword ptr [rdx+38h] }
  if ( v7 )
  {
    v9 = 0;
  }
  else
  {
    __asm { vucomiss xmm0, dword ptr [rdx+3Ch] }
    v9 = 1;
  }
  v10 = v8;
  v11 = v8 | 4;
  v12 = v10 & 0xFFFFFFFB;
  if ( v9 )
    v11 = v12;
  this->m_flags = v11;
  __asm { vucomiss xmm0, dword ptr [rdx+1Ch] }
  if ( v9 )
  {
    v13 = 0;
  }
  else
  {
    __asm { vucomiss xmm0, dword ptr [rdx+20h] }
    v13 = 1;
  }
  v14 = v11;
  v15 = v11 | 0x10;
  v16 = v14 & 0xFFFFFFEF;
  if ( v13 )
    v15 = v16;
  this->m_flags = v15 | 0x40;
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
  bool v23; 
  ParticleSystemFlags m_flags; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  ParticleSystemHandle parentParticleSystem; 
  ParticleSystemHandle v29; 
  __int64 v30; 
  ParticleSystemHandle v31; 

  _RSI = pParentSystem;
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
  v23 = 0;
  if ( hasParentOwner )
  {
    m_flags = pParentSystem->m_flags;
    v25 = spawnFlags | 0x1808;
    if ( attachedToParent )
    {
      if ( (m_flags & 0x800000000i64) != 0 )
        v25 = spawnFlags | 0x800001808i64;
    }
    else
    {
      v26 = spawnFlags | 0x180C;
      if ( (m_flags & 4) == 0 )
        v26 = spawnFlags | 0x1808;
      v27 = v26;
      v25 = v26 | 0x2000;
      if ( (m_flags & 0x2000) == 0 )
        v25 = v27;
      if ( (m_flags & 0x20000000) != 0 )
        v25 |= 0x20000000ui64;
    }
    particleSystemFlags = v25 | 0x4000;
    v23 = (pParentSystem->m_flags & 0x4000) != 0;
    if ( (pParentSystem->m_flags & 0x4000) == 0 )
      particleSystemFlags = v25;
    if ( Dvar_GetBool_Internal(particle_parent_updates_child) || (ParticleSystem::GetDef((ParticleSystem *)pParentSystem)->flags & 0x80000) != 0 )
      particleSystemFlags |= 0x4000000ui64;
  }
  if ( !systemDefOverride )
  {
    Particle_VerifyAssetList(pLinkedAssetList);
    particleSystem = pLinkedAssetList->assetList[Particle_RandomIndex(randomSeed, FXRAND_VISUAL, pLinkedAssetList->numAssets)].particleSystem;
  }
  parentParticleSystem = ParticleSystem::GetSystemHandle((ParticleSystem *)pParentSystem);
  v29 = ParticleManager::AddSystem(pManager, localClientNum, particleSystem, pos, orientationMat, currentTime, (ParticleSystemFlags)particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, (scr_string_t)0, parentParticleSystem);
  v30 = (v29 & 0xFFF) + ((__int64)(int)localClientNum << 12);
  v31 = v29;
  if ( g_particleSystemsGeneration[v30].__all32 != v29 && v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 933, ASSERT_TYPE_ASSERT, "(g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  _RBX = g_particleSystems[0][v30];
  if ( _RBX && v23 )
  {
    if ( !pParentSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4858, ASSERT_TYPE_ASSERT, "(pParentSystem)", (const char *)&queryFormat, "pParentSystem") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+90h]
      vmovdqa xmmword ptr [rbx+90h], xmm0
    }
    _RBX->m_flags |= 0x4000ui64;
  }
  return (unsigned int)v31;
}

/*
==============
ParticleEmitter::SpawnDecals
==============
*/
void ParticleEmitter::SpawnDecals(ParticleEmitter *this, LocalClientNum_t localClientNum, unsigned int numParticles, const vector4 *rEmitterTransform, const ParticleState::ElementTypeModule *elementTypeModule, const int *randomSeedArray, const float4 *colorArray, const float4 *positionArray, const float4 *sizeArray, const float4 *rotationAngleArray, unsigned int *flagsArray, const FxMarkSpawnData *pMarkSpawnData, const float *atlasIndexArray, FX_ImpactMark_AtlasInfo *atlasInfo, const float4 *boltOffsetPos, const float4 *boltOffsetQuat)
{
  unsigned int *v25; 
  __int64 v26; 
  unsigned __int16 m_flags; 
  char v30; 
  unsigned __int64 v31; 
  ParticleSystem *SystemOwner; 
  unsigned int v35; 
  unsigned __int8 v44; 
  char v52; 
  char v59; 
  char v66; 
  const int *v68; 
  signed __int64 v69; 
  int v71; 
  int v72; 
  ParticleLinkedAssetDef *v74; 
  unsigned __int8 v90; 
  char v95; 
  char v100; 
  char v105; 
  unsigned __int8 v111; 
  unsigned __int8 v116; 
  unsigned __int8 v121; 
  unsigned __int8 v127; 
  __int64 materialOverrideIndex; 
  Material *MaterialAtIndex; 
  const char *name; 
  const char *v132; 
  ParticleSystem *v133; 
  const ParticleSystemDef *Def; 
  unsigned __int8 v135; 
  Material *v136; 
  const char *v137; 
  const char *v138; 
  ParticleSystem *v139; 
  const ParticleSystemDef *v140; 
  unsigned int v141; 
  unsigned int v142; 
  ParticleSystem *v143; 
  const ParticleSystemDef *v144; 
  ParticleSystem *v145; 
  const ParticleSystemDef *v146; 
  __int64 fadeOutInfo; 
  __int64 stoppableFadeOutInfo; 
  float v155; 
  bool markViewmodel; 
  int viewmodelClientIndex; 
  unsigned __int8 markBoneIndex; 
  FxMarkProjectionAxis projectionAxis; 
  const FX_ImpactMark_AtlasInfo *v160; 
  const float4 *v161; 
  const float4 *v162; 
  bool decalSpray; 
  bool bypassStackingLimiter; 
  char markDynEnt; 
  char affectsGameplay; 
  char killOnKillcamTransition; 
  char *vfxName; 
  bool v169; 
  FxMarkProjectionAxis v170; 
  unsigned __int8 nativeColorLerp; 
  char v172; 
  char v173; 
  char v174; 
  unsigned __int16 v175; 
  unsigned __int16 v176; 
  unsigned __int16 v177; 
  unsigned __int16 m_flags_high; 
  unsigned __int16 m_type; 
  unsigned __int8 nativeColor[4]; 
  unsigned int v181; 
  LocalClientNum_t localClientNuma; 
  const float4 *v183; 
  const float4 *v184; 
  const int *v185; 
  ParticleLinkedAssetListDef *pLinkedAssetList; 
  FX_ImpactMark_AtlasInfo *v187; 
  unsigned __int64 v188; 
  float4 *v189; 
  float4 *v190; 
  __int64 v191; 
  vec3_t origin; 
  vec4_t markSizeOrig; 
  vec4_t out; 
  _BYTE mat[64]; 
  char v198; 
  void *retaddr; 
  const float4 *positionArraya; 
  const float *atlasIndexArraya; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _RSI = rEmitterTransform;
  _R13 = sizeArray;
  v25 = flagsArray;
  v185 = randomSeedArray;
  v184 = colorArray;
  v183 = rotationAngleArray;
  v187 = atlasInfo;
  v190 = (float4 *)boltOffsetPos;
  v189 = (float4 *)boltOffsetQuat;
  v26 = numParticles;
  localClientNuma = localClientNum;
  if ( !numParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4872, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !v185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4873, ASSERT_TYPE_ASSERT, "(randomSeedArray)", (const char *)&queryFormat, "randomSeedArray") )
    __debugbreak();
  if ( !v184 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4874, ASSERT_TYPE_ASSERT, "(colorArray)", (const char *)&queryFormat, "colorArray") )
    __debugbreak();
  if ( !positionArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4875, ASSERT_TYPE_ASSERT, "(positionArray)", (const char *)&queryFormat, "positionArray") )
    __debugbreak();
  if ( !sizeArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4876, ASSERT_TYPE_ASSERT, "(sizeArray)", (const char *)&queryFormat, "sizeArray") )
    __debugbreak();
  if ( !v183 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4877, ASSERT_TYPE_ASSERT, "(rotationAngleArray)", (const char *)&queryFormat, "rotationAngleArray") )
    __debugbreak();
  if ( !flagsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4878, ASSERT_TYPE_ASSERT, "(flagsArray)", (const char *)&queryFormat, "flagsArray") )
    __debugbreak();
  if ( !pMarkSpawnData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4879, ASSERT_TYPE_ASSERT, "(pMarkSpawnData)", (const char *)&queryFormat, "pMarkSpawnData") )
    __debugbreak();
  _RAX = elementTypeModule->pModule;
  m_flags = elementTypeModule->pModule[1].m_flags;
  __asm { vmovups xmm6, xmmword ptr [rax+20h] }
  pLinkedAssetList = (ParticleLinkedAssetListDef *)&elementTypeModule->pModule[2];
  m_type = _RAX[1].m_type;
  v177 = *((_WORD *)&_RAX[1].m_type + 1);
  m_flags_high = HIWORD(_RAX[1].m_flags);
  v175 = _RAX[6].m_type;
  v30 = _RAX[6].m_flags;
  LOBYTE(_RAX) = *((_BYTE *)&_RAX[6].m_type + 3);
  v169 = v30;
  v176 = m_flags;
  v170 = (char)_RAX;
  v31 = (unsigned __int64)ParticleEmitter::GetSystemOwner(this)->m_flags >> 37;
  LOBYTE(v31) = v31 & 1;
  v188 = v31;
  SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
  __asm
  {
    vmovss  xmm9, cs:__real@437f0000
    vmovss  xmm10, cs:__real@3f000000
  }
  v35 = ParticleSystem::GetDef(SystemOwner)->flags >> 11;
  LOBYTE(v35) = v35 & 1;
  v181 = v35;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmulss  xmm0, xmm6, xmm9
    vaddss  xmm1, xmm0, xmm10
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm8, xmm1, 1
    vcvttss2si ecx, xmm2
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v44 = _ECX;
  __asm { vmulss  xmm0, xmm0, xmm9 }
  if ( _ECX < 0 )
    v44 = 0;
  __asm { vaddss  xmm2, xmm0, xmm10 }
  nativeColorLerp = v44;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm2, xmm1, xmm2
    vroundss xmm0, xmm8, xmm2, 1
    vcvttss2si ecx, xmm0
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v52 = _ECX;
  __asm { vmulss  xmm0, xmm0, xmm9 }
  if ( _ECX < 0 )
    v52 = 0;
  __asm
  {
    vaddss  xmm2, xmm0, xmm10
    vmovss  xmm2, xmm1, xmm2
    vroundss xmm0, xmm8, xmm2, 1
    vcvttss2si ecx, xmm0
  }
  v172 = v52;
  __asm { vshufps xmm6, xmm6, xmm6, 0FFh }
  if ( _ECX > 255 )
    _ECX = 255;
  v59 = _ECX;
  __asm
  {
    vmulss  xmm0, xmm6, xmm9
    vaddss  xmm2, xmm0, xmm10
  }
  if ( _ECX < 0 )
    v59 = 0;
  __asm
  {
    vmovss  xmm2, xmm1, xmm2
    vroundss xmm0, xmm8, xmm2, 1
    vcvttss2si ecx, xmm0
  }
  v173 = v59;
  __asm { vmovups ymm0, ymmword ptr [rsi] }
  if ( _ECX > 255 )
    _ECX = 255;
  v66 = _ECX;
  __asm
  {
    vmovups ymmword ptr [rbp+100h+mat], ymm0
    vmovups ymm0, ymmword ptr [rsi+20h]
  }
  if ( _ECX < 0 )
    v66 = 0;
  v174 = v66;
  __asm { vmovups ymmword ptr [rbp+100h+mat+20h], ymm0 }
  Axis34ToQuat((const tmat34_t<vec4_t> *)mat, &out);
  if ( (_DWORD)v26 )
  {
    v183 = (const float4 *)((char *)v183 - (__int64)sizeArray);
    v68 = (const int *)((char *)v185 - (char *)atlasIndexArray);
    v184 = (const float4 *)((char *)v184 - (__int64)sizeArray);
    positionArraya = (const float4 *)((char *)positionArray - (char *)sizeArray);
    v69 = (char *)atlasIndexArray - (char *)flagsArray;
    __asm { vmovaps xmmword ptr [rsp+260h+var_58+8], xmm7 }
    atlasIndexArraya = (const float *)((char *)atlasIndexArray - (char *)flagsArray);
    v185 = v68;
    v191 = v26;
    do
    {
      _RSI = (char *)v25 + v69;
      v71 = *(const int *)((char *)v68 + (_QWORD)v25 + v69);
      Particle_VerifyAssetList(pLinkedAssetList);
      v72 = Particle_RandomIndex(v71, FXRAND_VISUAL, pLinkedAssetList->numAssets);
      __asm
      {
        vmovups xmm0, xmmword ptr [r13+0]
        vmovaps xmmword ptr [rbp+100h+var_F0], xmm0
      }
      v74 = &pLinkedAssetList->assetList[v72];
      _RAX = v183;
      __asm { vmovups xmm7, xmmword ptr [rax+r13] }
      _RAX = v184;
      __asm { vmovups xmm2, xmmword ptr [rax+r13] }
      _RAX = positionArraya;
      __asm
      {
        vmovups [rbp+100h+var_108], xmm2
        vmovss  xmm4, dword ptr [rbp+100h+var_108+8]
        vmovss  xmm5, dword ptr [rbp+100h+var_108+4]
        vmovups xmm1, xmmword ptr [rax+r13]
        vmovss  xmm6, dword ptr [rbp+100h+var_108]
        vmovss  dword ptr [rbp+100h+var_118], xmm1
        vextractps dword ptr [rbp+100h+var_118+4], xmm1, 1
        vextractps dword ptr [rbp+100h+var_118+8], xmm1, 2
        vshufps xmm3, xmm2, xmm2, 0FFh
      }
      if ( !v175 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm9
          vaddss  xmm2, xmm0, xmm10
          vroundss xmm0, xmm8, xmm2, 1
          vcvttss2si ecx, xmm0
          vmulss  xmm0, xmm5, xmm9
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v90 = _ECX;
        __asm { vaddss  xmm2, xmm0, xmm10 }
        if ( _ECX < 0 )
          v90 = 0;
        nativeColorLerp = v90;
        __asm
        {
          vroundss xmm0, xmm8, xmm2, 1
          vcvttss2si ecx, xmm0
          vmulss  xmm0, xmm4, xmm9
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v95 = _ECX;
        __asm { vaddss  xmm2, xmm0, xmm10 }
        if ( _ECX < 0 )
          v95 = 0;
        __asm
        {
          vroundss xmm0, xmm8, xmm2, 1
          vcvttss2si ecx, xmm0
        }
        v172 = v95;
        __asm { vmulss  xmm0, xmm3, xmm9 }
        if ( _ECX > 255 )
          _ECX = 255;
        v100 = _ECX;
        __asm { vaddss  xmm2, xmm0, xmm10 }
        if ( _ECX < 0 )
          v100 = 0;
        v173 = v100;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vmovss  xmm2, xmm1, xmm2
          vroundss xmm0, xmm8, xmm2, 1
          vcvttss2si ecx, xmm0
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v105 = _ECX;
        if ( _ECX < 0 )
          v105 = 0;
        v174 = v105;
      }
      __asm
      {
        vmulss  xmm0, xmm6, xmm9
        vaddss  xmm2, xmm0, xmm10
        vroundss xmm0, xmm8, xmm2, 1
        vcvttss2si ecx, xmm0
        vmulss  xmm0, xmm5, xmm9
      }
      if ( _ECX > 255 )
        _ECX = 255;
      v111 = _ECX;
      __asm { vaddss  xmm2, xmm0, xmm10 }
      if ( _ECX < 0 )
        v111 = 0;
      nativeColor[0] = v111;
      __asm
      {
        vroundss xmm0, xmm8, xmm2, 1
        vcvttss2si ecx, xmm0
        vmulss  xmm0, xmm4, xmm9
      }
      if ( _ECX > 255 )
        _ECX = 255;
      v116 = _ECX;
      __asm { vaddss  xmm2, xmm0, xmm10 }
      if ( _ECX < 0 )
        v116 = 0;
      nativeColor[1] = v116;
      __asm
      {
        vroundss xmm0, xmm8, xmm2, 1
        vcvttss2si ecx, xmm0
        vmulss  xmm0, xmm3, xmm9
      }
      if ( _ECX > 255 )
        _ECX = 255;
      v121 = _ECX;
      __asm { vaddss  xmm2, xmm0, xmm10 }
      if ( _ECX < 0 )
        v121 = 0;
      nativeColor[2] = v121;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm2, xmm1, xmm2
        vroundss xmm0, xmm8, xmm2, 1
        vcvttss2si ecx, xmm0
      }
      if ( _ECX > 255 )
        _ECX = 255;
      v127 = _ECX;
      if ( _ECX < 0 )
        v127 = 0;
      nativeColor[3] = v127;
      __asm { vcvttss2si eax, dword ptr [rsi] }
      v187->startFrame = _EAX;
      if ( _EAX >= 0x7FFF )
      {
        LODWORD(stoppableFadeOutInfo) = 0x7FFF;
        LODWORD(fadeOutInfo) = _EAX;
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
          v132 = ParticleSystem::GetDef((ParticleSystem *)this->m_pSystemOwner)->name;
          if ( !this->m_pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
            __debugbreak();
          Com_Printf(21, "D+ SpawnDecals: time: %d vfx: %s, material: %s \n", (unsigned int)this->m_pSystemOwner->m_spawnTime, v132, name);
          m_flags = v176;
        }
        v133 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
        Def = ParticleSystem::GetDef(v133);
        v135 = *((_BYTE *)pMarkSpawnData + 3);
        vfxName = (char *)Def->name;
        killOnKillcamTransition = v181;
        affectsGameplay = v188;
        markDynEnt = v135 >> 7;
        bypassStackingLimiter = v169;
        decalSpray = 1;
        v162 = v189;
        v161 = v190;
        v160 = v187;
        projectionAxis = v170;
        markBoneIndex = pMarkSpawnData->boneIndex;
        viewmodelClientIndex = v135 & 0xF;
        markViewmodel = (v135 & 0x20) != 0;
        v136 = MaterialAtIndex;
      }
      else
      {
        if ( R_DecalVolumesMarks_DebugEnabled() )
        {
          v137 = v74->physicsFXData.physicsFXShape->name;
          if ( !this->m_pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
            __debugbreak();
          v138 = ParticleSystem::GetDef((ParticleSystem *)this->m_pSystemOwner)->name;
          if ( !this->m_pSystemOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
            __debugbreak();
          Com_Printf(21, "D+ SpawnDecals: time: %d, vfx: %s, material: %s \n", (unsigned int)this->m_pSystemOwner->m_spawnTime, v138, v137);
          m_flags = v176;
        }
        v139 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
        v140 = ParticleSystem::GetDef(v139);
        v135 = *((_BYTE *)pMarkSpawnData + 3);
        vfxName = (char *)v140->name;
        killOnKillcamTransition = v181;
        affectsGameplay = v188;
        markDynEnt = v135 >> 7;
        bypassStackingLimiter = v169;
        decalSpray = 0;
        v162 = v189;
        v161 = v190;
        v160 = v187;
        projectionAxis = v170;
        markBoneIndex = pMarkSpawnData->boneIndex;
        viewmodelClientIndex = v135 & 0xF;
        markViewmodel = (v135 & 0x20) != 0;
        v136 = v74->decal.materials[1];
      }
      __asm { vmovss  dword ptr [rsp+260h+var_218], xmm7 }
      v141 = FX_ImpactMark(localClientNuma, v136, m_type, m_flags_high, v175, v177, m_flags, &origin, &out, v155, nativeColor, &nativeColorLerp, &markSizeOrig, pMarkSpawnData->markEntnum, (v135 & 0x10) != 0, markViewmodel, viewmodelClientIndex, markBoneIndex, projectionAxis, v160, v161, v162, decalSpray, bypassStackingLimiter, markDynEnt, affectsGameplay, killOnKillcamTransition, vfxName);
      *v25 |= 1u;
      v142 = v141;
      if ( m_flags != 0xFFFF )
      {
        if ( this->m_impactMarkHandle != -1 )
        {
          v143 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
          v144 = ParticleSystem::GetDef(v143);
          if ( !v144 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 171, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
            __debugbreak();
          if ( !v144->emitterDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 172, ASSERT_TYPE_ASSERT, "(pSystemDef->emitterDefs)", (const char *)&queryFormat, "pSystemDef->emitterDefs") )
            __debugbreak();
          if ( (unsigned int)this->m_emitterIndex >= v144->numEmitters )
          {
            LODWORD(stoppableFadeOutInfo) = v144->numEmitters;
            LODWORD(fadeOutInfo) = this->m_emitterIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( m_emitterIndex ) < (unsigned)( pSystemDef->numEmitters )", "m_emitterIndex doesn't index pSystemDef->numEmitters\n\t%i not in [0, %i)", fadeOutInfo, stoppableFadeOutInfo) )
              __debugbreak();
          }
          if ( !&v144->emitterDefs[this->m_emitterIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 176, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
            __debugbreak();
          v145 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
          v146 = ParticleSystem::GetDef(v145);
          Com_PrintWarning(21, "WARNING: Trying to create multiple impact marks with one emitter: %s | %s\n", v146->name, (const char *)&queryFormat.fmt + 3);
        }
        if ( v142 != -1 )
          this->m_impactMarkHandle = v142;
      }
      v68 = v185;
      ++_R13;
      v69 = (signed __int64)atlasIndexArraya;
      ++v25;
      --v191;
    }
    while ( v191 );
    __asm { vmovaps xmm7, xmmword ptr [rsp+260h+var_58+8] }
  }
  _R11 = &v198;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
ParticleEmitter::SpawnGeoTrails
==============
*/
void ParticleEmitter::SpawnGeoTrails(ParticleEmitter *this, unsigned int numParticles, ParticleState *pParticleState, const vector4 *rEmitterTransform, const int *randomSeedArray, const float4 *colorArray, const float4 *positionArray, const float4 *sizeArray, const float4 *velocityArray)
{
  __int64 v14; 
  Particle_TrailData *TrailDataList; 
  Particle_TrailData *v19; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  __int64 v34; 
  ParticleData *v35; 
  unsigned __int8 *v36; 
  bool v37; 
  __int64 v61; 
  unsigned __int8 *ParticleDataArray; 
  ParticleState::ElementTypeModule v63; 
  vec4_t quat; 
  char v67; 
  void *retaddr; 
  const float4 *colorArraya; 
  const float4 *sizeArraya; 
  const float4 *velocityArraya; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v14 = numParticles;
  _RSI = this;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4996, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( pParticleState->m_pStateDef->elementType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4997, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL") )
    __debugbreak();
  if ( !randomSeedArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4998, ASSERT_TYPE_ASSERT, "(randomSeedArray)", (const char *)&queryFormat, "randomSeedArray") )
    __debugbreak();
  if ( !colorArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 4999, ASSERT_TYPE_ASSERT, "(colorArray)", (const char *)&queryFormat, "colorArray") )
    __debugbreak();
  _R12 = positionArray;
  if ( !positionArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5000, ASSERT_TYPE_ASSERT, "(positionArray)", (const char *)&queryFormat, "positionArray") )
    __debugbreak();
  if ( !sizeArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5001, ASSERT_TYPE_ASSERT, "(sizeArray)", (const char *)&queryFormat, "sizeArray") )
    __debugbreak();
  if ( !velocityArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5002, ASSERT_TYPE_ASSERT, "(velocityArray)", (const char *)&queryFormat, "velocityArray") )
    __debugbreak();
  if ( (unsigned int)v14 > pParticleState->m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5004, ASSERT_TYPE_ASSERT, "(numParticles <= pParticleState->GetParticleCountMax())", (const char *)&queryFormat, "numParticles <= pParticleState->GetParticleCountMax()") )
    __debugbreak();
  v63.pModule = (const ParticleModule *)pParticleState->m_elementTypeModule;
  if ( !v63.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5007, ASSERT_TYPE_ASSERT, "(pModuleInitGeoTrail)", (const char *)&queryFormat, "pModuleInitGeoTrail") )
    __debugbreak();
  TrailDataList = ParticleState::GetTrailDataList(pParticleState);
  v19 = &TrailDataList[ParticleEmitter::GetParticleCountSpawnedForFirstState(_RSI)];
  if ( !pParticleState->m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  if ( !ParticleManager::ParticleSystemPointerInRange(pParticleState->m_pEmitterOwner->m_pSystemOwner->m_localClientNum, v19) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5013, ASSERT_TYPE_ASSERT, "(ParticleManager::ParticleSystemPointerInRange( pParticleState->GetEmitterOwner()->GetLocalClientNum(), pTrailDataList ))", (const char *)&queryFormat, "ParticleManager::ParticleSystemPointerInRange( pParticleState->GetEmitterOwner()->GetLocalClientNum(), pTrailDataList )") )
    __debugbreak();
  __asm { vmovss  xmm7, dword ptr [rsi+174h] }
  Particle_RotMatrixToQuatVec(rEmitterTransform, &quat);
  __asm { vmovups xmm8, xmmword ptr [rsp+0E8h+quat] }
  if ( (_DWORD)v14 )
  {
    colorArraya = (const float4 *)((char *)colorArray - (char *)positionArray);
    _R15 = &v19->numPointsRunning;
    __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
    sizeArraya = (const float4 *)((char *)sizeArray - (char *)positionArray);
    velocityArraya = (const float4 *)((char *)velocityArray - (char *)positionArray);
    v61 = v14;
    do
    {
      m_pModuleInitRelativeVelocity = pParticleState->m_pModuleInitRelativeVelocity;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        __asm { vmovups xmm6, xmmword ptr [r12] }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r12]
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
      if ( (pParticleState->m_pStateDef->flags & 0x10000000) != 0 )
      {
        ParticleEmitter::GetSystemOwner(_RSI);
        __asm { vaddps  xmm6, xmm6, xmmword ptr [rax+30h] }
      }
      v34 = *(_QWORD *)(_R15 - 17);
      *(_R15 - 2) = 0;
      *_R15 = 1;
      *(_DWORD *)(v34 + 64) = 0;
      v35 = *(ParticleData **)(_R15 - 15);
      if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5030, ASSERT_TYPE_ASSERT, "(pTrailParticleData)", (const char *)&queryFormat, "pTrailParticleData") )
        __debugbreak();
      if ( v35->m_particleCountRunning + v35->m_particleCountDelayed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5031, ASSERT_TYPE_ASSERT, "(pTrailParticleData->GetParticleCountSpawned() == 0)", (const char *)&queryFormat, "pTrailParticleData->GetParticleCountSpawned() == 0") )
        __debugbreak();
      if ( !v35->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 353, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      ParticleDataArray = ParticleData::GetParticleDataArray(v35, PARTICLE_DATA_RANDOM_SEED);
      if ( !v35->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 347, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      v36 = ParticleData::GetParticleDataArray(v35, PARTICLE_DATA_LIFE);
      v37 = v35->m_pParticleData == NULL;
      *(_QWORD *)quat.v = v36;
      if ( v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 346, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      _R12 = ParticleData::GetParticleDataArray(v35, PARTICLE_DATA_SPAWN_TIME);
      if ( !v35->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 343, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      _R14 = ParticleData::GetParticleDataArray(v35, PARTICLE_DATA_COLOR);
      if ( !v35->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      _RBP = ParticleData::GetParticleDataArray(v35, PARTICLE_DATA_SIZE);
      if ( !v35->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      _RSI = ParticleData::GetParticleDataArray(v35, PARTICLE_DATA_POSITION);
      if ( !v35->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 342, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      _RDI = ParticleData::GetParticleDataArray(v35, PARTICLE_DATA_VELOCITY);
      if ( !v35->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 345, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
        __debugbreak();
      _RAX = ParticleData::GetParticleDataArray(v35, PARTICLE_DATA_SPAWN_QUAT);
      *(_DWORD *)ParticleDataArray = *randomSeedArray;
      **(_DWORD **)quat.v = 0;
      _RCX = colorArraya;
      __asm { vmovss  dword ptr [r12], xmm7 }
      _R12 = positionArray;
      __asm { vmovups xmm0, xmmword ptr [rcx+r12] }
      _RCX = sizeArraya;
      __asm
      {
        vmovdqu xmmword ptr [r14], xmm0
        vmovups xmm1, xmmword ptr [rcx+r12]
      }
      _RCX = velocityArraya;
      __asm
      {
        vmovdqu xmmword ptr [rbp+0], xmm1
        vmovups xmmword ptr [rsi], xmm6
        vmovups xmm0, xmmword ptr [rcx+r12]
      }
      _RCX.pModule = v63.pModule;
      __asm
      {
        vmovdqu xmmword ptr [rdi], xmm0
        vmovups xmmword ptr [rax], xmm8
        vmovss  xmm2, dword ptr [rcx+28h]
        vmovss  xmm0, dword ptr [rcx+2Ch]
        vsubss  xmm1, xmm0, xmm2
        vmulss  xmm1, xmm1, dword ptr [rcx+rax*4]
        vaddss  xmm0, xmm1, xmm2
        vmovss  dword ptr [r15+4], xmm0
      }
      if ( v35->m_particleCountRunning + 1 > v35->m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 202, ASSERT_TYPE_ASSERT, "(GetParticleCountRunning() + particleCount <= m_particleCountMax)", (const char *)&queryFormat, "GetParticleCountRunning() + particleCount <= m_particleCountMax") )
        __debugbreak();
      ++v35->m_particleCountRunning;
      _RSI = this;
      _R12 = ++positionArray;
      _R15 += 24;
      ++randomSeedArray;
      --v61;
    }
    while ( v61 );
    __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
  }
  _R11 = &v67;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  int v18; 
  signed __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  unsigned __int8 v39; 
  char *v46; 
  int v47; 
  __m128 *p_v; 
  int *v56; 
  float *SpawnTimeArrayAtIndex; 
  unsigned __int16 v58; 

  _RSI = this;
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1210, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( !_RSI->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1211, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
    __debugbreak();
  m_particleCountMax = _RSI->m_pParticleStateData->m_particleData.m_particleCountMax;
  if ( numParticles + ParticleEmitter::GetParticleCountSpawnedForAllStates(_RSI) > m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1212, ASSERT_TYPE_ASSERT, "(GetParticleCountSpawnedForAllStates() + numParticles <= m_pParticleStateData[0].m_particleData.GetParticleCountMax())", (const char *)&queryFormat, "GetParticleCountSpawnedForAllStates() + numParticles <= m_pParticleStateData[0].m_particleData.GetParticleCountMax()") )
    __debugbreak();
  if ( !numParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1213, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (_RSI->m_flags & 0x10) != 0 )
  {
    m_pParticleStateData = _RSI->m_pParticleStateData;
    v10 = m_pParticleStateData->m_particleData.m_particleCountMax - m_pParticleStateData->m_particleData.m_particleCountDelayed - numParticles;
    SpawnTimeArrayAtIndex = Particle_GetSpawnTimeArrayAtIndex(&m_pParticleStateData->m_particleData, v10);
    v11 = SpawnTimeArrayAtIndex;
    RandomSeedArrayAtIndex = Particle_GetRandomSeedArrayAtIndex(&m_pParticleStateData->m_particleData, v10);
    m_randomSeed = _RSI->m_randomSeed;
    v56 = RandomSeedArrayAtIndex;
    v14 = _RSI->m_pSystemOwner->m_randomSeed;
    v58 = v14;
    EmitterDef = ParticleEmitter::GetEmitterDef(_RSI);
    v16 = 0i64;
    _R10 = EmitterDef;
    if ( numParticles >= 4 )
    {
      v18 = v14;
      _RDI = SpawnTimeArrayAtIndex + 1;
      v20 = (char *)RandomSeedArrayAtIndex - (char *)SpawnTimeArrayAtIndex;
      v21 = 2;
      v22 = v18;
      do
      {
        _RDI += 4;
        v23 = 10111 * (unsigned __int8)v16;
        v16 = (unsigned int)(v16 + 4);
        *(_DWORD *)((char *)_RDI + v20 - 20) = (currentTime + (unsigned int)m_randomSeed + v22 + v23) % 0x3FE9;
        __asm
        {
          vmovss  xmm0, dword ptr [r10+20h]
          vsubss  xmm1, xmm0, dword ptr [r10+1Ch]
          vmulss  xmm1, xmm1, dword ptr [r8+rax*4+4Ch]
          vaddss  xmm0, xmm1, dword ptr [r10+1Ch]
          vaddss  xmm2, xmm0, dword ptr [rsi+174h]
          vmovss  dword ptr [rdi-14h], xmm2
        }
        *(_DWORD *)((char *)_RDI + v20 - 16) = (currentTime + m_randomSeed + v22 + 10111 * (unsigned int)(unsigned __int8)(v21 - 1)) % 0x3FE9;
        __asm
        {
          vmovss  xmm0, dword ptr [r10+20h]
          vsubss  xmm1, xmm0, dword ptr [r10+1Ch]
          vmulss  xmm1, xmm1, dword ptr [r8+rax*4+4Ch]
          vaddss  xmm0, xmm1, dword ptr [r10+1Ch]
          vaddss  xmm2, xmm0, dword ptr [rsi+174h]
          vmovss  dword ptr [rdi-10h], xmm2
        }
        *(_DWORD *)((char *)_RDI + v20 - 12) = (currentTime + m_randomSeed + v22 + 10111 * (unsigned int)(unsigned __int8)v21) % 0x3FE9;
        __asm
        {
          vmovss  xmm0, dword ptr [r10+20h]
          vsubss  xmm1, xmm0, dword ptr [r10+1Ch]
          vmulss  xmm1, xmm1, dword ptr [r8+rax*4+4Ch]
          vaddss  xmm0, xmm1, dword ptr [r10+1Ch]
          vaddss  xmm2, xmm0, dword ptr [rsi+174h]
          vmovss  dword ptr [rdi-0Ch], xmm2
        }
        v39 = v21 + 1;
        v21 += 4;
        *(_DWORD *)((char *)_RDI + v20 - 8) = (currentTime + m_randomSeed + v22 + 10111 * (unsigned int)v39) % 0x3FE9;
        __asm
        {
          vmovss  xmm0, dword ptr [r10+20h]
          vsubss  xmm1, xmm0, dword ptr [r10+1Ch]
          vmulss  xmm1, xmm1, dword ptr [r8+rax*4+4Ch]
          vaddss  xmm0, xmm1, dword ptr [r10+1Ch]
          vaddss  xmm2, xmm0, dword ptr [rsi+174h]
          vmovss  dword ptr [rdi-8], xmm2
        }
      }
      while ( (unsigned int)v16 < numParticles - 3 );
      RandomSeedArrayAtIndex = v56;
      v11 = SpawnTimeArrayAtIndex;
      v14 = v58;
    }
    if ( (unsigned int)v16 < numParticles )
    {
      _R8 = &v11[v16];
      v46 = (char *)((char *)RandomSeedArrayAtIndex - (char *)v11);
      do
      {
        ++_R8;
        v47 = 10111 * (unsigned __int8)v16;
        LODWORD(v16) = v16 + 1;
        *(_DWORD *)&v46[(_QWORD)_R8 - 4] = (currentTime + m_randomSeed + (unsigned int)v14 + v47) % 0x3FE9;
        __asm
        {
          vmovss  xmm0, dword ptr [r10+20h]
          vsubss  xmm1, xmm0, dword ptr [r10+1Ch]
          vmulss  xmm1, xmm1, dword ptr [r15+rax*4+4Ch]
          vaddss  xmm0, xmm1, dword ptr [r10+1Ch]
          vaddss  xmm2, xmm0, dword ptr [rsi+174h]
          vmovss  dword ptr [r8-4], xmm2
        }
      }
      while ( (unsigned int)v16 < numParticles );
    }
    p_v = &_RSI->m_pParticleStateData->m_particleState.m_moduleGraphLengthData.color.v;
    if ( numParticles + p_v[26].m128_i32[3] + p_v[26].m128_i32[2] > p_v[27].m128_i32[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 220, ASSERT_TYPE_ASSERT, "(GetParticleCountSpawned() + particleCount <= m_particleCountMax)", (const char *)&queryFormat, "GetParticleCountSpawned() + particleCount <= m_particleCountMax") )
      __debugbreak();
    p_v[26].m128_i32[3] += numParticles;
  }
  else
  {
    ParticleEmitter::EmitParticles(_RSI, numParticles, currentTime, 0, pCamera);
  }
  _RSI->m_lastSpawnTime = _RSI->m_emitterLife;
  _RAX = ParticleEmitter::GetSystemOwner(_RSI);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+30h]
    vmovdqa xmmword ptr [rsi+140h], xmm0
  }
}

/*
==============
ParticleEmitter::SpawnSounds
==============
*/
void ParticleEmitter::SpawnSounds(ParticleEmitter *this, LocalClientNum_t localClientNum, int currentTime, unsigned int numParticles, const ParticleState *pParticleState, const ParticleModuleInitSound *pModuleInitSound, const int *randomSeedArray, const float4 *positionArray, const unsigned int *handleArray)
{
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
  ParticleSystemHandle systemHandle; 
  unsigned int aliasId; 
  ParticleEmitter *v39; 
  const vector4 *i; 
  ParticleManager *ParticleManager; 
  float4 origin; 

  _RBP = positionArray;
  v12 = (unsigned int *)handleArray;
  v39 = this;
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
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v39);
    systemHandle = ParticleSystem::GetSystemHandle(SystemOwner);
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    v14 = 0;
    for ( i = ParticleEmitter::GetEmitterTransform(v39, pParticleState); v14 < numParticles; ++v12 )
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
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+0]
          vmovups xmmword ptr [rsp+0C8h+origin.v], xmm0
        }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+0]
          vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
          vshufps xmm3, xmm0, xmm0, 55h ; 'U'
          vshufps xmm4, xmm0, xmm0, 0
          vmulps  xmm0, xmm2, xmmword ptr [rax+20h]
          vaddps  xmm2, xmm0, xmmword ptr [rax+30h]
          vmulps  xmm0, xmm3, xmmword ptr [rax+10h]
          vaddps  xmm1, xmm0, xmm2
          vmulps  xmm0, xmm4, xmmword ptr [rax]
          vaddps  xmm1, xmm0, xmm1
          vmovups xmmword ptr [rsp+0C8h+origin.v], xmm1
        }
      }
      if ( (pParticleState->m_pStateDef->flags & 0x10000000) != 0 )
      {
        _RAX = ParticleEmitter::GetSystemOwner(v39);
        __asm
        {
          vmovups xmm1, xmmword ptr [rax+30h]
          vaddps  xmm1, xmm1, xmmword ptr [rsp+0C8h+origin.v]
          vmovups xmmword ptr [rsp+0C8h+origin.v], xmm1
        }
      }
      ParticleManager::AddSound(ParticleManager, v16->sound, &aliasId, &origin, currentTime, pParticleState, *v12, systemHandle);
      ++v14;
      ++_RBP;
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
  const int *v12; 
  unsigned __int8 *m_vectorFieldList; 
  unsigned int v16; 
  unsigned __int8 *v17; 
  int v20; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  bool v32; 
  const ParticleSystem *m_pSystemOwner; 
  unsigned __int8 v34; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  ParticleLinkedAssetListDef *pLinkedAssetList; 
  VectorField *vf; 
  orientation_t orient; 

  v12 = randomSeedArray;
  if ( !numParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5112, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5113, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( pParticleState->m_pStateDef->elementType != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5114, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_VECTOR_FIELD") )
    __debugbreak();
  if ( !randomSeedArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5115, ASSERT_TYPE_ASSERT, "(randomSeedArray)", (const char *)&queryFormat, "randomSeedArray") )
    __debugbreak();
  _RDI = positionArray;
  if ( !positionArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5116, ASSERT_TYPE_ASSERT, "(positionArray)", (const char *)&queryFormat, "positionArray") )
    __debugbreak();
  pLinkedAssetList = (ParticleLinkedAssetListDef *)&elementTypeModule->pModule[1];
  if ( !pParticleState->m_vectorFieldList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 512, ASSERT_TYPE_ASSERT, "(m_vectorFieldList)", (const char *)&queryFormat, "m_vectorFieldList") )
    __debugbreak();
  m_vectorFieldList = pParticleState->m_vectorFieldList;
  v16 = 0;
  v17 = &m_vectorFieldList[ParticleEmitter::GetParticleCountSpawnedForFirstState(this)];
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rsp+0C8h+orient.axis+20h], xmm1
    vmovups ymmword ptr [rsp+0C8h+orient.axis], ymm0
  }
  if ( numParticles )
  {
    __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
    while ( 1 )
    {
      v20 = *v12;
      Particle_VerifyAssetList(pLinkedAssetList);
      vf = pLinkedAssetList->assetList[Particle_RandomIndex(v20, FXRAND_VISUAL, pLinkedAssetList->numAssets)].vectorField;
      if ( !vf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 5134, ASSERT_TYPE_ASSERT, "(vf)", (const char *)&queryFormat, "vf") )
        __debugbreak();
      m_pModuleInitRelativeVelocity = pParticleState->m_pModuleInitRelativeVelocity;
      if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
      {
        __asm { vmovups xmm6, xmmword ptr [rdi] }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi]
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
      if ( (pParticleState->m_pStateDef->flags & 0x10000000) != 0 )
      {
        ParticleEmitter::GetSystemOwner(this);
        __asm { vaddps  xmm6, xmm6, xmmword ptr [rax+30h] }
      }
      v32 = this->m_pSystemOwner == NULL;
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+orient.origin], xmm6
        vextractps dword ptr [rsp+0C8h+orient.origin+4], xmm6, 1
        vextractps dword ptr [rsp+0C8h+orient.origin+8], xmm6, 2
      }
      if ( v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
        __debugbreak();
      m_pSystemOwner = this->m_pSystemOwner;
      if ( m_pSystemOwner->m_systemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 196, ASSERT_TYPE_ASSERT, "(m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
        __debugbreak();
      v34 = CG_VectorField_AllocInstanceForFx(vf, &orient, 0xFFu, m_pSystemOwner->m_systemHandle);
      *v17 = v34;
      if ( v34 == 0xFF )
        break;
      ++v16;
      ++v12;
      ++_RDI;
      ++v17;
      if ( v16 >= numParticles )
        goto LABEL_41;
    }
    ParticleEmitter::GetEmitterDef(this);
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    Def = ParticleSystem::GetDef(SystemOwner);
    Com_PrintWarning(21, "WARNING: Could not allocate vector field for effect: %s | %s\n", Def->name, (const char *)&queryFormat.fmt + 3);
LABEL_41:
    __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
  }
}

/*
==============
ParticleEmitter::SpriteDrawPostCull
==============
*/
void ParticleEmitter::SpriteDrawPostCull(ParticleEmitter *this, FxDrawState *pDrawState, const ParticleEmitter::ParticleStateData *rParticleStateData, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, Material *const material, const Particle_DrawData *r_drawData, FxParticleSimAnimation *pParticleSimAnimation, unsigned int particleIndex, const float4 *posArray, const vector4 *rParticleTransform, const ParticleState::ElementTypeModule *rElementTypeModule, const Particle_FlareDrawData *rFlareDrawData, unsigned int emitterDataIndex)
{
  Particle_TrailData *TrailDataList; 
  volatile int *p_m_numParticlesRendered; 
  const ParticleModuleInitParticleSim *m_pModuleInitParticleSim; 
  _QWORD v39[3]; 
  float4 v40; 
  float4 v41; 
  float4 v42; 
  float4 v43; 
  float4 v44; 
  float4 v45; 
  float4 v46; 
  float4 v47; 
  float4 v48; 
  float4 v49; 
  float4 v50; 

  _R14 = tangent;
  if ( !pDrawState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2487, ASSERT_TYPE_ASSERT, "(pDrawState)", (const char *)&queryFormat, "pDrawState") )
    __debugbreak();
  switch ( rParticleStateData->m_particleState.m_pStateDef->elementType )
  {
    case 1u:
      _RAX = normal;
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX = bitangent;
      __asm
      {
        vmovups [rbp+50h+var_50], xmm0
        vmovups xmm0, xmmword ptr [r14]
        vmovups [rbp+50h+var_30], xmm0
        vmovups xmm1, xmmword ptr [rax]
        vmovups [rbp+50h+var_40], xmm1
      }
      FX_BeamGenVerts(pDrawState, this, rParticleStateData, &v50, &v49, &v48, activeLightGridsBitmask, material, r_drawData, emitterDataIndex);
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
      _RAX = normal;
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX = bitangent;
      __asm
      {
        vmovups [rbp+50h+var_80], xmm0
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmm1, xmmword ptr [rax]
        vmovups [rbp+50h+var_70], xmm1
        vmovups [rbp+50h+var_60], xmm0
      }
      FX_TrailGenVerts(pDrawState, this, rParticleStateData, &v47, &v46, &v45, activeLightGridsBitmask, material, r_drawData, &TrailDataList[particleIndex], &posArray[particleIndex], emitterDataIndex);
      break;
    default:
      _RAX = normal;
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX = bitangent;
      __asm { vmovups xmm1, xmmword ptr [rax] }
      if ( r_drawData->hasParticleSim )
      {
        m_pModuleInitParticleSim = rParticleStateData->m_particleState.m_pModuleInitParticleSim;
        __asm
        {
          vmovups xmmword ptr [rsp+150h+var_E8+8], xmm0
          vmovups xmm0, xmmword ptr [r14]
          vmovups [rbp+50h+var_D0], xmm1
          vmovups [rbp+50h+var_C0], xmm0
        }
        FX_GenParticleSimAnimationVerts(pDrawState, &rParticleStateData->m_particleState, this, &v41, &v40, (const float4 *)&v39[1], activeLightGridsBitmask, pParticleSimAnimation, r_drawData, rParticleTransform, rElementTypeModule, m_pModuleInitParticleSim, emitterDataIndex);
      }
      else
      {
        __asm
        {
          vmovups [rbp+50h+var_B0], xmm0
          vmovups xmm0, xmmword ptr [r14]
          vmovups [rbp+50h+var_A0], xmm1
          vmovups [rbp+50h+var_90], xmm0
        }
        FX_QuadGenQuad(pDrawState, &rParticleStateData->m_particleState, &v44, &v43, &v42, activeLightGridsBitmask, material, r_drawData, emitterDataIndex);
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

void __fastcall ParticleEmitter::Update(ParticleEmitter *this, double dt, const int currentTime, const FxCamera *pCamera)
{
  const ParticleEmitterDef *EmitterDef; 
  unsigned int frustumPlaneCount; 
  bool v18; 
  unsigned int m_flags; 
  unsigned int numStates; 
  __int64 v21; 
  __int64 v22; 
  ParticleEmitter::ParticleStateData *v23; 
  const ParticleSystem *SystemOwner; 
  bool v33; 
  unsigned int v34; 
  bool v35; 
  unsigned int ParticleCountSpawnedForAllStates; 
  unsigned int v37; 
  bool v38; 
  unsigned int v39; 
  bool v41; 
  const ParticleSystem *v45; 
  ParticleEmitter::ParticleStateData *m_pParticleStateData; 
  const ParticleSystem *v47; 
  unsigned int v49; 
  bool v50; 
  unsigned int m_particleCountDelayed; 
  unsigned int v52; 
  unsigned int m_particleCountMax; 
  bool v57; 
  const ParticleState *ParticleState; 
  ParticleModuleEmissionGraph *m_pModuleEmissionGraph; 
  ParticleState::SpawnShapeTypeModule v70; 
  char v71; 
  const ParticleState *v77; 
  unsigned int v97; 
  unsigned int v103; 
  int v111; 

  __asm { vmovaps [rsp+0F8h+var_B8], xmm12 }
  _RDI = this;
  __asm { vmovaps xmm12, xmm1 }
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 306, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !_RDI->m_pParticleStateData && (_RDI->m_flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 307, ASSERT_TYPE_ASSERT, "(m_pParticleStateData || !HasParticleData())", (const char *)&queryFormat, "m_pParticleStateData || !HasParticleData()") )
    __debugbreak();
  if ( (_RDI->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 308, ASSERT_TYPE_ASSERT, "(!IsDead())", (const char *)&queryFormat, "!IsDead()") )
    __debugbreak();
  EmitterDef = ParticleEmitter::GetEmitterDef(_RDI);
  frustumPlaneCount = pCamera->frustumPlaneCount;
  if ( (EmitterDef->flags & 4) != 0 && frustumPlaneCount > 5 )
    frustumPlaneCount = 5;
  _RSI = ParticleEmitter::GetEmitterDef(_RDI);
  v111 = Sys_Microseconds();
  v18 = (_RDI->m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(_RDI)->flags & 1) == 0 && (_RDI->m_flags & 1) == 0;
  m_flags = _RDI->m_flags;
  if ( v18 )
  {
    __asm { vmovaps [rsp+0F8h+var_A8], xmm11 }
    if ( (_RDI->m_flags & 0x40) == 0 )
    {
      SystemOwner = ParticleEmitter::GetSystemOwner(_RDI);
      ParticleEmitter::KillParticles(_RDI, (SystemOwner->m_flags & 0x40000) == 0);
      m_flags = _RDI->m_flags;
    }
    __asm { vmovss  xmm11, cs:__real@3f800000 }
    if ( (m_flags & 4) != 0 )
    {
      _RAX = _RDI->m_randomSeed;
      _RDX = &fx_randomTable[19];
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+184h]
        vmovss  xmm1, dword ptr [rdx+rax*4]
        vsubss  xmm0, xmm11, xmm1
        vmulss  xmm2, xmm0, dword ptr [rsi+38h]
        vmulss  xmm1, xmm1, dword ptr [rsi+3Ch]
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm3, xmm0
      }
      _RDI->m_flags = m_flags & 0xFFFFFFFB;
    }
    v33 = ParticleEmitter::InSpawnRange(_RDI, pCamera, frustumPlaneCount);
    v34 = _RDI->m_flags;
    v35 = v33;
    if ( (v34 & 0x40) != 0 )
    {
      v37 = 0;
    }
    else
    {
      ParticleCountSpawnedForAllStates = ParticleEmitter::GetParticleCountSpawnedForAllStates(_RDI);
      v34 = _RDI->m_flags;
      v37 = ParticleCountSpawnedForAllStates;
    }
    v38 = (_RSI->flags & 2) != 0;
    if ( (v34 & 0x40) != 0 && (v34 & 2) != 0 )
    {
      ParticleEmitter::Kill(_RDI);
LABEL_130:
      __asm { vmovaps xmm11, [rsp+0F8h+var_A8] }
      goto LABEL_131;
    }
    if ( (ParticleEmitter::GetSystemOwner(_RDI)->m_flags & 1) != 0 && !ParticleEmitter::GetSystemOwner(_RDI)->m_boltedSpawnPosSet )
      goto LABEL_130;
    if ( !v35 && !v37 )
    {
      v39 = _RDI->m_flags;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+174h]
        vmovss  dword ptr [rdi+180h], xmm0
      }
      v41 = (v39 & 8) == 0;
      if ( (v39 & 8) == 0 )
      {
        __asm { vcomiss xmm11, dword ptr [rdi+178h] }
        if ( (v39 & 8) == 0 )
        {
          ParticleEmitter::Kill(_RDI);
          __asm { vmovss  xmm0, dword ptr [rdi+174h] }
          LOBYTE(v39) = _RDI->m_flags;
        }
      }
      __asm
      {
        vaddss  xmm1, xmm0, xmm12
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rdi+174h], xmm1
        vucomiss xmm0, dword ptr [rsi+30h]
      }
      if ( !v41 )
        goto LABEL_47;
      __asm { vucomiss xmm0, dword ptr [rsi+34h] }
      if ( !v41 )
      {
LABEL_47:
        __asm
        {
          vdivss  xmm0, xmm1, dword ptr [rdi+17Ch]
          vmovss  dword ptr [rdi+178h], xmm0
        }
      }
      if ( v38 && (v39 & 1) == 0 )
        ParticleEmitter::Kill(_RDI);
      if ( (_RDI->m_flags & 0x40) == 0 )
      {
        _RDI->m_flags |= 0x80u;
        v45 = ParticleEmitter::GetSystemOwner(_RDI);
        v45->m_flags |= 0x2000000ui64;
      }
      goto LABEL_130;
    }
    if ( (_RDI->m_flags & 0x40) != 0 && !ParticleEmitter::InitParticleData(_RDI) )
      goto LABEL_130;
    m_pParticleStateData = _RDI->m_pParticleStateData;
    if ( (m_pParticleStateData->m_particleState.m_pStateDef->flags & 0x400) != 0 && m_pParticleStateData->m_particleState.m_pModulePhysicsLight && !m_pParticleStateData->m_particleState.m_physicsFXPipelineInstance )
    {
      if ( !m_pParticleStateData->m_particleState.m_pendingPhysicsFXPipelineCreation || (_RDI->m_flags & 2) != 0 )
      {
        _RDI->m_flags |= 0x80u;
        v47 = ParticleEmitter::GetSystemOwner(_RDI);
        v47->m_flags |= 0x2000000ui64;
        ParticleEmitter::Kill(_RDI);
      }
      if ( (ParticleEmitter::GetSystemOwner(_RDI)->m_flags & 0x40000) == 0 )
        goto LABEL_130;
    }
    __asm { vmovaps [rsp+0F8h+var_88], xmm9 }
    ParticleEmitter::UpdateLiveTweakingData(_RDI, _RSI);
    __asm { vxorps  xmm9, xmm9, xmm9 }
    if ( v38 )
      __asm { vucomiss xmm9, dword ptr [rdi+174h] }
    __asm { vmovaps [rsp+0F8h+var_68], xmm7 }
    if ( (_RDI->m_flags & 1) == 0 )
    {
      if ( (_RDI->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 457, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
        __debugbreak();
      v49 = _RDI->m_flags;
      if ( (v49 & 8) == 0 )
      {
        __asm { vcomiss xmm11, dword ptr [rdi+178h] }
        if ( (_RDI->m_flags & 8) == 0 )
          goto LABEL_134;
      }
      if ( (v49 & 2) == 0 )
      {
        v50 = (v49 & 0x10) != 0;
        if ( !v35 )
        {
          if ( v50 )
            _RDI->m_pParticleStateData->m_particleData.m_particleCountDelayed = 0;
          _RDI->m_lastSpawnTime = _RDI->m_emitterLife;
          goto LABEL_125;
        }
        if ( v50 )
        {
          if ( !_RDI->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 976, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
            __debugbreak();
          if ( (_RDI->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 977, ASSERT_TYPE_ASSERT, "(HasParticleData())", (const char *)&queryFormat, "HasParticleData()") )
            __debugbreak();
          if ( !_RDI->m_pParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 978, ASSERT_TYPE_ASSERT, "(m_pParticleStateData)", (const char *)&queryFormat, "m_pParticleStateData") )
            __debugbreak();
          m_particleCountDelayed = _RDI->m_pParticleStateData->m_particleData.m_particleCountDelayed;
          if ( m_particleCountDelayed )
            ParticleEmitter::EmitDelayedParticles(_RDI, m_particleCountDelayed, currentTime, pCamera);
        }
        if ( !v38 )
        {
          m_particleCountMax = _RDI->m_particleCountMax;
          if ( v37 < m_particleCountMax )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+174h]
              vmovaps [rsp+0F8h+var_58], xmm6
              vmovaps [rsp+0F8h+var_98], xmm10
              vsubss  xmm10, xmm0, dword ptr [rdi+180h]
              vxorps  xmm7, xmm7, xmm7
            }
            v57 = (_RSI->flags & 0x200) != 0;
            if ( v57 )
            {
              __asm { vmovups xmm6, xmmword ptr [rdi+140h] }
              _RAX = ParticleEmitter::GetSystemOwner(_RDI);
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+30h]
                vsubps  xmm1, xmm0, xmm6
                vmulps  xmm2, xmm1, xmm1
                vinsertps xmm0, xmm2, xmm2, 8
                vhaddps xmm1, xmm0, xmm0
                vhaddps xmm0, xmm1, xmm1
                vsqrtps xmm1, xmm0
                vmulss  xmm1, xmm1, dword ptr [rdi+198h]
                vaddss  xmm2, xmm1, dword ptr [rdi+190h]
              }
            }
            else
            {
              ParticleState = ParticleEmitter::GetParticleState(_RDI, 0);
              m_pModuleEmissionGraph = (ParticleModuleEmissionGraph *)_RDI->m_pModuleEmissionGraph;
              v70.pModuleSpawnShape = (const ParticleModuleInitSpawnShape *)ParticleState->m_spawnShapeTypeModule;
              if ( m_pModuleEmissionGraph )
              {
                if ( (m_pModuleEmissionGraph->m_flags & 0x8000) != 0 )
                  __asm { vmovss  xmm1, dword ptr [rdi+188h] }
                else
                  __asm { vmovss  xmm1, dword ptr [rdi+178h]; time }
                *(double *)&_XMM0 = ParticleModuleEmissionGraph::GetSpawnRate(m_pModuleEmissionGraph, *(float *)&dt, _RDI->m_randomSeed);
                __asm { vmovaps xmm7, xmm0 }
              }
              else
              {
                if ( !v70.pModuleSpawnShape )
                  goto LABEL_102;
                if ( (v70.pModuleSpawnShape->m_flags & 1) != 0 )
                  goto LABEL_102;
                _RAX = ParticleEmitter::GetEmitterDef(_RDI);
                _RBX = _RAX;
                __asm { vucomiss xmm9, dword ptr [rax+94h] }
                if ( v71 )
                {
                  __asm { vucomiss xmm9, dword ptr [rax+98h] }
                  if ( v71 )
                    goto LABEL_102;
                }
                if ( ParticleEmitter::GetEmitterDef(_RDI)->numStates > 1u )
                {
LABEL_102:
                  __asm { vmovss  xmm7, dword ptr [rdi+18Ch] }
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm7, dword ptr [rbx+98h]
                    vmovaps [rsp+0F8h+var_78], xmm8
                    vmovss  xmm8, dword ptr [rbx+94h]
                    vminss  xmm6, xmm7, xmm8
                  }
                  v77 = ParticleEmitter::GetParticleState(_RDI, 0);
                  *(double *)&_XMM0 = ParticleModuleInitSpawnShape::GetVolumeSize((ParticleModuleInitSpawnShape *)v70.pModuleSpawnShape, v77);
                  __asm
                  {
                    vsubss  xmm1, xmm0, xmm6
                    vmaxss  xmm0, xmm7, xmm8
                    vmaxss  xmm3, xmm1, xmm9
                    vsubss  xmm1, xmm0, xmm6
                    vmaxss  xmm2, xmm1, xmm11
                    vdivss  xmm3, xmm3, xmm2
                    vminss  xmm4, xmm3, xmm11
                    vmulss  xmm0, xmm4, xmm4
                    vmulss  xmm7, xmm4, xmm0
                  }
                  _RAX = ParticleEmitter::GetEmitterDef(_RDI);
                  __asm { vmovss  xmm6, dword ptr [rax+10h] }
                  ParticleEmitter::GetEmitterDef(_RDI);
                  __asm
                  {
                    vmovaps xmm8, [rsp+0F8h+var_78]
                    vsubss  xmm0, xmm11, xmm7
                    vmulss  xmm1, xmm0, dword ptr [rax+0Ch]
                    vmulss  xmm0, xmm7, xmm6
                    vaddss  xmm7, xmm1, xmm0
                  }
                }
              }
              __asm
              {
                vmulss  xmm0, xmm7, xmm10
                vaddss  xmm2, xmm0, dword ptr [rdi+190h]
              }
            }
            __asm
            {
              vmovaps xmm10, [rsp+0F8h+var_98]
              vmovaps xmm6, [rsp+0F8h+var_58]
              vxorps  xmm1, xmm1, xmm1
              vroundss xmm1, xmm1, xmm2, 1
              vcvttss2si rcx, xmm1
            }
            if ( (_DWORD)_RCX )
            {
              v97 = m_particleCountMax - v37;
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rax
                vsubss  xmm1, xmm2, xmm0
              }
              if ( (unsigned int)_RCX + v37 <= m_particleCountMax )
                v97 = _RCX;
              __asm { vmovss  dword ptr [rdi+190h], xmm1 }
              ParticleEmitter::SpawnParticles(_RDI, v97, currentTime, pCamera);
            }
            else
            {
              __asm { vucomiss xmm9, dword ptr [rdi+174h] }
              if ( !v57 )
              {
                __asm { vcomiss xmm7, xmm9 }
                if ( !_RDI->m_pModuleEmissionGraph )
                {
                  __asm
                  {
                    vmulss  xmm0, xmm7, cs:__real@3c888889
                    vcvttss2si rax, xmm0
                  }
                  if ( (int)_RAX < 1 )
                    LODWORD(_RAX) = 1;
                  if ( (int)m_particleCountMax < (int)_RAX )
                    LODWORD(_RAX) = m_particleCountMax;
                  ParticleEmitter::SpawnParticles(_RDI, _RAX, currentTime, pCamera);
                }
              }
            }
          }
          goto LABEL_125;
        }
        if ( ParticleEmitter::GetParticleCountRunningForAllStates(_RDI) == _RDI->m_burstCount || !ParticleEmitter::GetParticleCountSpawnedForFirstState(_RDI) )
        {
          v52 = ParticleEmitter::GetEmitterDef(_RDI)->flags >> 3;
LABEL_123:
          if ( (v52 & 1) == 0 )
            ParticleEmitter::Stop(_RDI);
        }
      }
      else
      {
LABEL_134:
        if ( ParticleEmitter::GetParticleCountSpawnedForAllStates(_RDI) )
        {
          v103 = _RDI->m_flags;
          if ( (v103 & 0x10) != 0 )
          {
            _RDI->m_pParticleStateData->m_particleData.m_particleCountDelayed = 0;
            v103 = _RDI->m_flags;
          }
          v52 = v103 >> 1;
          goto LABEL_123;
        }
        ParticleEmitter::Kill(_RDI);
      }
    }
LABEL_125:
    __asm
    {
      vmovaps xmm9, [rsp+0F8h+var_88]
      vmovaps xmm7, [rsp+0F8h+var_68]
    }
    if ( (_RDI->m_flags & 1) == 0 )
    {
      __asm { vmovaps xmm1, xmm12; dt }
      ParticleEmitter::BatchUpdate(_RDI, *(float *)&_XMM1, currentTime, pCamera);
    }
    if ( (_RDI->m_flags & 8) == 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+174h]
        vdivss  xmm1, xmm0, dword ptr [rdi+17Ch]
        vmovss  dword ptr [rdi+178h], xmm1
      }
    }
    _RDI->m_profilerUpdateTime = Sys_Microseconds() - v111;
    goto LABEL_130;
  }
  if ( (_RDI->m_flags & 0x40) == 0 )
  {
    if ( !_RDI->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 1968, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
      __debugbreak();
    numStates = ParticleEmitter::GetEmitterDef(_RDI)->numStates;
    if ( numStates )
    {
      v21 = numStates;
      v22 = 0i64;
      do
      {
        v23 = &_RDI->m_pParticleStateData[v22];
        ParticleState::KillAllParticles(&v23->m_particleState, &v23->m_particleData, _RDI);
        ++v22;
        *(_QWORD *)&v23->m_particleData.m_particleCountRunning = 0i64;
        --v21;
      }
      while ( v21 );
    }
  }
LABEL_131:
  __asm { vmovaps xmm12, [rsp+0F8h+var_B8] }
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

void __fastcall ParticleEmitter::UpdateLiveTweakingData(ParticleEmitter *this, const ParticleEmitterDef *const pEmitterDef, __int64 a3, double _XMM3_8)
{
  bool v7; 
  bool v8; 
  char v10; 
  unsigned int m_flags; 
  bool v15; 
  int v16; 
  unsigned int v18; 
  char v25; 
  unsigned int v26; 
  const ParticleEmitterDef *EmitterDef; 
  int min; 
  int v40; 
  int v41; 
  bool v42; 
  __int64 v43; 
  unsigned int numStates; 
  __int64 v45; 

  _RBX = pEmitterDef;
  _RDI = this;
  v7 = pEmitterDef == NULL;
  if ( !pEmitterDef )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.cpp", 2096, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef");
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vucomiss xmm3, dword ptr [rbx+30h]
  }
  if ( !v7 )
    goto LABEL_7;
  __asm { vucomiss xmm3, dword ptr [rbx+34h] }
  if ( v7 )
    v10 = 1;
  else
LABEL_7:
    v10 = 0;
  m_flags = _RDI->m_flags;
  _R8 = fx_randomTable;
  __asm { vmovss  xmm4, cs:__real@3f800000 }
  if ( v10 )
  {
    __asm { vmovss  xmm0, cs:__real@7f7fffff }
    v16 = m_flags | 8;
    v15 = v16 == 0;
    _RDI->m_flags = v16;
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  else
  {
    v18 = m_flags & 0xFFFFFFF7;
    v15 = v18 == 0;
    _RDI->m_flags = v18;
    _RAX = _RDI->m_randomSeed;
    __asm
    {
      vmovss  xmm0, dword ptr [r8+rax*4+48h]
      vmulss  xmm2, xmm0, dword ptr [rbx+34h]
      vsubss  xmm0, xmm4, xmm0
      vmulss  xmm1, xmm0, dword ptr [rbx+30h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm2, dword ptr [rdi+174h]
      vdivss  xmm1, xmm2, xmm0
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi+17Ch], xmm0
    vmovss  dword ptr [rdi+178h], xmm1
    vucomiss xmm3, dword ptr [rbx+1Ch]
  }
  if ( !v15 )
    goto LABEL_14;
  __asm { vucomiss xmm3, dword ptr [rbx+20h] }
  if ( v15 )
    v25 = 1;
  else
LABEL_14:
    v25 = 0;
  v26 = _RDI->m_flags & 0xFFFFFFEF;
  if ( !v25 )
    v26 = _RDI->m_flags | 0x10;
  _RAX = _RDI->m_randomSeed;
  _RDI->m_flags = v26;
  __asm
  {
    vmovss  xmm1, dword ptr [r8+rax*4+50h]
    vsubss  xmm0, xmm4, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm1, dword ptr [rbx+10h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rdi+18Ch], xmm0
    vmovss  xmm1, dword ptr [r8+rax*4+54h]
    vsubss  xmm0, xmm4, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx+7Ch]
    vmulss  xmm1, xmm1, dword ptr [rbx+80h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rdi+198h], xmm0
  }
  EmitterDef = ParticleEmitter::GetEmitterDef(_RDI);
  min = EmitterDef->particleBurstCount.min;
  v40 = EmitterDef->particleBurstCount.max - min;
  if ( v40 )
  {
    v41 = Particle_RandomIndex(_RDI->m_randomSeed, FXRAND_SPAWN_COUNT, v40 + 1);
    v42 = EmitterDef->particleBurstCount.min + v41 < 0;
    min = EmitterDef->particleBurstCount.min + v41;
    v43 = 0i64;
  }
  else
  {
    v43 = 0i64;
    v42 = min < 0;
  }
  if ( v42 )
    min = 0;
  _RDI->m_burstCount = min;
  ParticleEmitter::CalculateParticleCountMax(_RDI);
  numStates = ParticleEmitter::GetEmitterDef(_RDI)->numStates;
  if ( numStates )
  {
    v45 = numStates;
    do
    {
      ParticleState::UpdateLiveTweakingData(&_RDI->m_pParticleStateData[v43++].m_particleState);
      --v45;
    }
    while ( v45 );
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

