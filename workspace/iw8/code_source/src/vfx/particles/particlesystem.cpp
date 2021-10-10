/*
==============
ParticleSystem::ThermalOrNVGStateChanged
==============
*/

void __fastcall ParticleSystem::ThermalOrNVGStateChanged(ParticleSystem *this, bool thermalEnabled, bool nvgEnabled, GameModeType gameMode, bool isHighPlayerCount)
{
  ?ThermalOrNVGStateChanged@ParticleSystem@@QEAAX_N0W4GameModeType@@0@Z(this, thermalEnabled, nvgEnabled, gameMode, isHighPlayerCount);
}

/*
==============
ParticleSystem::UpdateBolting
==============
*/

void __fastcall ParticleSystem::UpdateBolting(ParticleSystem *this, float dt)
{
  ?UpdateBolting@ParticleSystem@@QEAAXM@Z(this, dt);
}

/*
==============
ParticleSystem::Update
==============
*/

void __fastcall ParticleSystem::Update(ParticleSystem *this, const int currentTime, const FxCamera *pCamera, int preRollDeltaTime)
{
  ?Update@ParticleSystem@@QEAAXHPEBUFxCamera@@H@Z(this, currentTime, pCamera, preRollDeltaTime);
}

/*
==============
ParticleSystem::ApplyVelocityModifiers
==============
*/

float4 *__fastcall ParticleSystem::ApplyVelocityModifiers(ParticleSystem *this, float4 *result, const float4 *baseVelocity, const int lerpValueSeed, const float4 *defaultLerpValue)
{
  return ?ApplyVelocityModifiers@ParticleSystem@@QEBA?AUfloat4@@AEBU2@HU2@@Z(this, result, baseVelocity, lerpValueSeed, defaultLerpValue);
}

/*
==============
ParticleSystem::ProcessInstancePools
==============
*/

void __fastcall ParticleSystem::ProcessInstancePools(ParticleSystem *this, const FxCamera *pCamera, InstancePoolData *instancePoolTable, ntl::fixed_map<ParticleEmitterDef const *,InstancePoolData,128,ntl::less<ParticleEmitterDef const *,ParticleEmitterDef const *> > *soloInstancePoolMap, unsigned int *instancePoolLimits)
{
  ?ProcessInstancePools@ParticleSystem@@QEAAXPEBUFxCamera@@PEAUInstancePoolData@@PEAV?$fixed_map@PEBUParticleEmitterDef@@UInstancePoolData@@$0IA@U?$less@PEBUParticleEmitterDef@@PEBU1@@ntl@@@ntl@@PEAI@Z(this, pCamera, instancePoolTable, soloInstancePoolMap, instancePoolLimits);
}

/*
==============
ParticleSystem::TransferBoltFromPredictedEntToCEnt
==============
*/

void __fastcall ParticleSystem::TransferBoltFromPredictedEntToCEnt(ParticleSystem *this, int predictedEntIdx, int boneIndex, const int centNum)
{
  ?TransferBoltFromPredictedEntToCEnt@ParticleSystem@@QEAAXHHH@Z(this, predictedEntIdx, boneIndex, centNum);
}

/*
==============
ParticleSystem::ApplyScaleModifiers
==============
*/

float4 *__fastcall ParticleSystem::ApplyScaleModifiers(ParticleSystem *this, float4 *result, const float4 *baseSize, const int lerpValueSeed, const float4 *defaultLerpValue, const bool useUniformInterpolationScaling)
{
  return ?ApplyScaleModifiers@ParticleSystem@@QEBA?AUfloat4@@AEBU2@HU2@_N@Z(this, result, baseSize, lerpValueSeed, defaultLerpValue, useUniformInterpolationScaling);
}

/*
==============
ParticleSystem::Stop
==============
*/

void __fastcall ParticleSystem::Stop(ParticleSystem *this)
{
  ?Stop@ParticleSystem@@QEAAXXZ(this);
}

/*
==============
ParticleSystem::Restart
==============
*/

void __fastcall ParticleSystem::Restart(ParticleSystem *this, const int currentTime)
{
  ?Restart@ParticleSystem@@QEAAXH@Z(this, currentTime);
}

/*
==============
ParticleSystem::ClearBolting
==============
*/

void __fastcall ParticleSystem::ClearBolting(ParticleSystem *this)
{
  ?ClearBolting@ParticleSystem@@QEAAXXZ(this);
}

/*
==============
ParticleSystem::DrawSpriteParticles
==============
*/

void __fastcall ParticleSystem::DrawSpriteParticles(ParticleSystem *this, FxDrawState *pDrawState, const GfxBackEndData *backEndData, bool transShadowPass)
{
  ?DrawSpriteParticles@ParticleSystem@@QEAAXPEAUFxDrawState@@PEBUGfxBackEndData@@_N@Z(this, pDrawState, backEndData, transShadowPass);
}

/*
==============
ParticleSystem::AlignToSun
==============
*/

void __fastcall ParticleSystem::AlignToSun(ParticleSystem *this, const FxCamera *pCamera)
{
  ?AlignToSun@ParticleSystem@@AEAAXPEBUFxCamera@@@Z(this, pCamera);
}

/*
==============
ParticleSystem::GetProfileData
==============
*/

void __fastcall ParticleSystem::GetProfileData(ParticleSystem *this, ParticleProfileGlobalData *outProfileData)
{
  ?GetProfileData@ParticleSystem@@QEBAXAEAUParticleProfileGlobalData@@@Z(this, outProfileData);
}

/*
==============
ParticleSystem::GetMarkSpawnData
==============
*/

const FxMarkSpawnData *__fastcall ParticleSystem::GetMarkSpawnData(ParticleSystem *this)
{
  return ?GetMarkSpawnData@ParticleSystem@@QEBAAEBUFxMarkSpawnData@@XZ(this);
}

/*
==============
ParticleSystem::DisableEmittersForGameMode
==============
*/

void __fastcall ParticleSystem::DisableEmittersForGameMode(ParticleSystem *this, GameModeType gameMode, bool isHighPlayerCount)
{
  ?DisableEmittersForGameMode@ParticleSystem@@QEAAXW4GameModeType@@_N@Z(this, gameMode, isHighPlayerCount);
}

/*
==============
ParticleSystem::IsEnabledForPhase
==============
*/

bool __fastcall ParticleSystem::IsEnabledForPhase(ParticleSystem *this)
{
  return ?IsEnabledForPhase@ParticleSystem@@AEBA_NXZ(this);
}

/*
==============
ParticleSystem::SetBeamCurvePoints
==============
*/

void __fastcall ParticleSystem::SetBeamCurvePoints(ParticleSystem *this, const float4 *startPos, const float4 *endPos, const float4 *curvePoint1, const float4 *curvePoint2)
{
  ?SetBeamCurvePoints@ParticleSystem@@QEAAXAEBUfloat4@@000@Z(this, startPos, endPos, curvePoint1, curvePoint2);
}

/*
==============
ParticleSystem::SetBoltBoneVisible
==============
*/

void __fastcall ParticleSystem::SetBoltBoneVisible(ParticleSystem *this, bool boneVisible)
{
  ?SetBoltBoneVisible@ParticleSystem@@AEAAX_N@Z(this, boneVisible);
}

/*
==============
ParticleSystem::SetDrawWithViewModel
==============
*/

void __fastcall ParticleSystem::SetDrawWithViewModel(ParticleSystem *this, bool enabled)
{
  ?SetDrawWithViewModel@ParticleSystem@@QEAAX_N@Z(this, enabled);
}

/*
==============
ParticleSystem::StopImpactMarks
==============
*/

void __fastcall ParticleSystem::StopImpactMarks(ParticleSystem *this)
{
  ?StopImpactMarks@ParticleSystem@@QEAAXXZ(this);
}

/*
==============
ParticleSystem::GetEmitterByIndex
==============
*/

const ParticleEmitter *__fastcall ParticleSystem::GetEmitterByIndex(ParticleSystem *this, unsigned int index)
{
  return ?GetEmitterByIndex@ParticleSystem@@QEBAPEBVParticleEmitter@@I@Z(this, index);
}

/*
==============
ParticleSystem::AllocOcclusionQuery
==============
*/

void __fastcall ParticleSystem::AllocOcclusionQuery(ParticleSystem *this, LocalClientNum_t localClientNum)
{
  ?AllocOcclusionQuery@ParticleSystem@@AEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ParticleSystem::UpdateScriptedInputs
==============
*/

void __fastcall ParticleSystem::UpdateScriptedInputs(ParticleSystem *this)
{
  ?UpdateScriptedInputs@ParticleSystem@@AEAAXXZ(this);
}

/*
==============
Particle_CullCone
==============
*/

bool __fastcall Particle_CullCone(const FxCamera *pCamera, const vec3_t *pos, float *outConeCullBlendFactor)
{
  return ?Particle_CullCone@@YA_NPEBUFxCamera@@AEBTvec3_t@@AEAM@Z(pCamera, pos, outConeCullBlendFactor);
}

/*
==============
ParticleSystem::HandleMyChanges
==============
*/

void __fastcall ParticleSystem::HandleMyChanges(ParticleSystem *this)
{
  ?HandleMyChanges@ParticleSystem@@QEAAXXZ(this);
}

/*
==============
ParticleSystem::SetEmissionCurveValue
==============
*/

void __fastcall ParticleSystem::SetEmissionCurveValue(ParticleSystem *this, const float value)
{
  ?SetEmissionCurveValue@ParticleSystem@@QEAAXM@Z(this, value);
}

/*
==============
ParticleSystem::SetBoltOffset
==============
*/

void __fastcall ParticleSystem::SetBoltOffset(ParticleSystem *this, const orientation_t *boltOffset)
{
  ?SetBoltOffset@ParticleSystem@@AEAAXPEBUorientation_t@@@Z(this, boltOffset);
}

/*
==============
ParticleSystem::SetScriptedInput
==============
*/

void __fastcall ParticleSystem::SetScriptedInput(ParticleSystem *this, ParticleScriptedInputKey key, bool value)
{
  ?SetScriptedInput@ParticleSystem@@AEAAXW4ParticleScriptedInputKey@@_N@Z(this, key, value);
}

/*
==============
ParticleSystem::GetBoltTemporalBits
==============
*/

unsigned int __fastcall ParticleSystem::GetBoltTemporalBits(ParticleSystem *this, LocalClientNum_t localClientNum, int dobjHandle)
{
  return ?GetBoltTemporalBits@ParticleSystem@@AEAAIW4LocalClientNum_t@@H@Z(this, localClientNum, dobjHandle);
}

/*
==============
ParticleSystem::AccumulateBounds
==============
*/

void __fastcall ParticleSystem::AccumulateBounds(ParticleSystem *this, BuildBounds *boundsAccumulator, const float4 *posWorld, float width, float height)
{
  ?AccumulateBounds@ParticleSystem@@QEBAXAEAUBuildBounds@@AEBUfloat4@@MM@Z(this, boundsAccumulator, posWorld, width, height);
}

/*
==============
ParticleSystem::Init
==============
*/

bool __fastcall ParticleSystem::Init(ParticleSystem *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, ParticleSystemHandle particleSystemHandle, ParticleSystemHandle parentSystemHandle, const float4 *systemPos, const vector3 *systemOrientationMat, int spawnTime, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, scr_string_t boneName, unsigned int archiveState)
{
  return ?Init@ParticleSystem@@QEAA_NW4LocalClientNum_t@@PEBUParticleSystemDef@@W4ParticleSystemHandle@@2AEBUfloat4@@AEBUvector3@@HW4ParticleSystemFlags@@IIPEBUorientation_t@@PEBUFxCamera@@PEBUFxMarkSpawnData@@W4scr_string_t@@I@Z(this, localClientNum, pSystemDef, particleSystemHandle, parentSystemHandle, systemPos, systemOrientationMat, spawnTime, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData, boneName, archiveState);
}

/*
==============
ParticleSystem::UpdateOcclusionQuery
==============
*/

void __fastcall ParticleSystem::UpdateOcclusionQuery(ParticleSystem *this, int msecDelta, const FxCamera *pCamera)
{
  ?UpdateOcclusionQuery@ParticleSystem@@AEAAXHPEBUFxCamera@@@Z(this, msecDelta, pCamera);
}

/*
==============
ParticleSystem::FreeOcclusionQuery
==============
*/

void __fastcall ParticleSystem::FreeOcclusionQuery(ParticleSystem *this)
{
  ?FreeOcclusionQuery@ParticleSystem@@AEAAXXZ(this);
}

/*
==============
ParticleSystem::CullSystemDraw
==============
*/

bool __fastcall ParticleSystem::CullSystemDraw(ParticleSystem *this, const FxCamera *pCamera)
{
  return ?CullSystemDraw@ParticleSystem@@AEBA_NPEBUFxCamera@@@Z(this, pCamera);
}

/*
==============
ParticleSystem::PropagateToDetailWorld
==============
*/

void __fastcall ParticleSystem::PropagateToDetailWorld(ParticleSystem *this)
{
  ?PropagateToDetailWorld@ParticleSystem@@QEAAXXZ(this);
}

/*
==============
ParticleSystem::ApplyVelocityModifiers
==============
*/

float4 *__fastcall ParticleSystem::ApplyVelocityModifiers(ParticleSystem *this, float4 *result, const float4 *baseVelocity, const int lerpValueSeed)
{
  return ?ApplyVelocityModifiers@ParticleSystem@@QEBA?AUfloat4@@AEBU2@H@Z(this, result, baseVelocity, lerpValueSeed);
}

/*
==============
ParticleSystem::FreeEmitters
==============
*/

void __fastcall ParticleSystem::FreeEmitters(ParticleSystem *this, bool myChanges)
{
  ?FreeEmitters@ParticleSystem@@AEAAX_N@Z(this, myChanges);
}

/*
==============
ParticleSystem::UpdateCullingAndOcclusion
==============
*/

bool __fastcall ParticleSystem::UpdateCullingAndOcclusion(ParticleSystem *this, FxSystem *fxSystem)
{
  return ?UpdateCullingAndOcclusion@ParticleSystem@@QEAA_NPEAUFxSystem@@@Z(this, fxSystem);
}

/*
==============
ParticleSystem::HandleMyChangesPreLoad
==============
*/

void __fastcall ParticleSystem::HandleMyChangesPreLoad(ParticleSystem *this)
{
  ?HandleMyChangesPreLoad@ParticleSystem@@QEAAXXZ(this);
}

/*
==============
ParticleSystem::UpdateChildTransforms
==============
*/

void __fastcall ParticleSystem::UpdateChildTransforms(ParticleSystem *this)
{
  ?UpdateChildTransforms@ParticleSystem@@QEAAXXZ(this);
}

/*
==============
ParticleSystem::SetDataFromArchive
==============
*/

void __fastcall ParticleSystem::SetDataFromArchive(ParticleSystem *this, const ParticleSystemSave *particleSystemSave)
{
  ?SetDataFromArchive@ParticleSystem@@QEAAXAEBUParticleSystemSave@@@Z(this, particleSystemSave);
}

/*
==============
ParticleSystem::PreRoll
==============
*/

bool __fastcall ParticleSystem::PreRoll(ParticleSystem *this, const int simulationTimeMsec, const FxCamera *pCamera)
{
  return ?PreRoll@ParticleSystem@@QEAA_NHPEBUFxCamera@@@Z(this, simulationTimeMsec, pCamera);
}

/*
==============
ParticleSystem::ResetProfilerData
==============
*/

void __fastcall ParticleSystem::ResetProfilerData(ParticleSystem *this)
{
  ?ResetProfilerData@ParticleSystem@@QEAAXXZ(this);
}

/*
==============
ParticleSystem::CalcBoltKey
==============
*/

unsigned int __fastcall ParticleSystem::CalcBoltKey(ParticleSystem *this)
{
  return ?CalcBoltKey@ParticleSystem@@QEBAIXZ(this);
}

/*
==============
ParticleSystem::Release
==============
*/

void __fastcall ParticleSystem::Release(ParticleSystem *this)
{
  ?Release@ParticleSystem@@QEAAXXZ(this);
}

/*
==============
ParticleSystem::~ParticleSystem
==============
*/

void __fastcall ParticleSystem::~ParticleSystem(ParticleSystem *this)
{
  ??1ParticleSystem@@QEAA@XZ(this);
}

/*
==============
ParticleSystem::InitBoltedSpawnPos
==============
*/

void __fastcall ParticleSystem::InitBoltedSpawnPos(ParticleSystem *this)
{
  ?InitBoltedSpawnPos@ParticleSystem@@AEAAXXZ(this);
}

/*
==============
ParticleSystem::ApplyScaleModifiers
==============
*/

float4 *__fastcall ParticleSystem::ApplyScaleModifiers(ParticleSystem *this, float4 *result, const float4 *baseSize, const int lerpValueSeed, const bool useUniformInterpolationScaling)
{
  return ?ApplyScaleModifiers@ParticleSystem@@QEBA?AUfloat4@@AEBU2@H_N@Z(this, result, baseSize, lerpValueSeed, useUniformInterpolationScaling);
}

/*
==============
ParticleSystem::EnableEmitterGroup
==============
*/

void __fastcall ParticleSystem::EnableEmitterGroup(ParticleSystem *this, ParticleGroupID emitterGroupID, bool enable, bool isHighPlayerCount)
{
  ?EnableEmitterGroup@ParticleSystem@@QEAAXW4ParticleGroupID@@_N1@Z(this, emitterGroupID, enable, isHighPlayerCount);
}

/*
==============
ParticleSystem::DrawNonSpriteParticles
==============
*/

void __fastcall ParticleSystem::DrawNonSpriteParticles(ParticleSystem *this, const FxCamera *pCamera)
{
  ?DrawNonSpriteParticles@ParticleSystem@@QEAAXPEBUFxCamera@@@Z(this, pCamera);
}

/*
==============
ParticleSystem::CalculateDistanceToCameraSquared
==============
*/

void __fastcall ParticleSystem::CalculateDistanceToCameraSquared(ParticleSystem *this)
{
  ?CalculateDistanceToCameraSquared@ParticleSystem@@AEAAXXZ(this);
}

/*
==============
ParticleSystem::UpdateOcclusionFade
==============
*/

void __fastcall ParticleSystem::UpdateOcclusionFade(ParticleSystem *this, const float4 *pos, int msecDelta, const FxCamera *pCamera)
{
  ?UpdateOcclusionFade@ParticleSystem@@QEAAXAEBUfloat4@@HPEBUFxCamera@@@Z(this, pos, msecDelta, pCamera);
}

/*
==============
ParticleSystem::SetGlobalTintIndex
==============
*/

void __fastcall ParticleSystem::SetGlobalTintIndex(ParticleSystem *this, unsigned __int8 globalTintIndex)
{
  ?SetGlobalTintIndex@ParticleSystem@@QEAAXE@Z(this, globalTintIndex);
}

/*
==============
ParticleSystem::CanDraw
==============
*/

bool __fastcall ParticleSystem::CanDraw(ParticleSystem *this)
{
  return ?CanDraw@ParticleSystem@@QEBA_NXZ(this);
}

/*
==============
ParticleSystem::DrawLights
==============
*/

void __fastcall ParticleSystem::DrawLights(ParticleSystem *this, const FxCamera *pCamera)
{
  ?DrawLights@ParticleSystem@@QEAAXPEBUFxCamera@@@Z(this, pCamera);
}

/*
==============
ParticleSystem::GetGlobalTintIndex
==============
*/

unsigned __int8 __fastcall ParticleSystem::GetGlobalTintIndex(ParticleSystem *this)
{
  return ?GetGlobalTintIndex@ParticleSystem@@QEBAEXZ(this);
}

/*
==============
ParticleSystem::DebugDraw
==============
*/

void __fastcall ParticleSystem::DebugDraw(ParticleSystem *this, const int currentTime, const FxCamera *pCamera)
{
  ?DebugDraw@ParticleSystem@@QEAAXHPEBUFxCamera@@@Z(this, currentTime, pCamera);
}

/*
==============
ParticleSystem::SetFirstUpdateOrPreRoll
==============
*/

void __fastcall ParticleSystem::SetFirstUpdateOrPreRoll(ParticleSystem *this, const FxCamera *pCamera)
{
  ?SetFirstUpdateOrPreRoll@ParticleSystem@@QEAAXPEBUFxCamera@@@Z(this, pCamera);
}

/*
==============
ParticleSystem::EnableAltModeParticles
==============
*/

void __fastcall ParticleSystem::EnableAltModeParticles(ParticleSystem *this, const bool isAltModeEnabled, const ParticleGroupID standardModeGroupId, const ParticleGroupID altModeGroupId, GameModeType gameMode, bool isHighPlayerCount)
{
  ?EnableAltModeParticles@ParticleSystem@@QEAAX_NW4ParticleGroupID@@1W4GameModeType@@_N@Z(this, isAltModeEnabled, standardModeGroupId, altModeGroupId, gameMode, isHighPlayerCount);
}

/*
==============
ParticleSystem::InitScriptedInputs
==============
*/

void __fastcall ParticleSystem::InitScriptedInputs(ParticleSystem *this)
{
  ?InitScriptedInputs@ParticleSystem@@AEAAXXZ(this);
}

/*
==============
ParticleSystem::InitBolting
==============
*/

void __fastcall ParticleSystem::InitBolting(ParticleSystem *this, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, scr_string_t boneName, unsigned int archiveState)
{
  ?InitBolting@ParticleSystem@@AEAAXIIPEBUorientation_t@@W4scr_string_t@@I@Z(this, dobjHandle, boneIndex, boltOffset, boneName, archiveState);
}

/*
==============
ParticleSystem::GetTravelVector
==============
*/

void __fastcall ParticleSystem::GetTravelVector(ParticleSystem *this, float4 *outTravelVector)
{
  ?GetTravelVector@ParticleSystem@@QEBAXAEAUfloat4@@@Z(this, outTravelVector);
}

/*
==============
ParticleSystem::GarbageCollect
==============
*/

void __fastcall ParticleSystem::GarbageCollect(ParticleSystem *this)
{
  ?GarbageCollect@ParticleSystem@@QEAAXXZ(this);
}

/*
==============
ParticleSystem::GetBeamPos
==============
*/

void __fastcall ParticleSystem::GetBeamPos(ParticleSystem *this, float4 *startPos, float4 *endPos)
{
  ?GetBeamPos@ParticleSystem@@QEAAXAEAUfloat4@@0@Z(this, startPos, endPos);
}

/*
==============
ParticleSystem::SetBeamPos
==============
*/

void __fastcall ParticleSystem::SetBeamPos(ParticleSystem *this, const float4 *startPos, const float4 *endPos)
{
  ?SetBeamPos@ParticleSystem@@QEAAXAEBUfloat4@@0@Z(this, startPos, endPos);
}

/*
==============
ParticleSystem::~ParticleSystem
==============
*/
void ParticleSystem::~ParticleSystem(ParticleSystem *this)
{
  ParticleEmitter *m_pEmitters; 
  int v3; 
  __int64 m_localClientNum; 

  m_pEmitters = this->m_pEmitters;
  if ( m_pEmitters )
  {
    v3 = 0;
    if ( this->m_pSystemDef->numEmitters > 0 )
    {
      do
        ParticleEmitter::~ParticleEmitter(&this->m_pEmitters[v3++]);
      while ( v3 < this->m_pSystemDef->numEmitters );
      m_pEmitters = this->m_pEmitters;
    }
    ParticleManager::ParticleSystemFree(this->m_localClientNum, m_pEmitters);
    this->m_pEmitters = NULL;
  }
  this->m_isRunning = 0;
  *(_QWORD *)&this->m_systemHandle = 0i64;
  *(_QWORD *)&this->m_spawnTime = 0i64;
  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  ParticleManager::FreeMarkSpawnData(&g_particleManager[m_localClientNum], this->m_markSpawnDataIndex);
  this->m_loopTime = 0;
  ParticleSystem::FreeOcclusionQuery(this);
  this->m_flags |= 0x10ui64;
}

/*
==============
ParticleSystem::AccumulateBounds
==============
*/

void __fastcall ParticleSystem::AccumulateBounds(ParticleSystem *this, BuildBounds *boundsAccumulator, const float4 *posWorld, double width)
{
  __m128 v; 
  __int128 v7; 
  __m128 v11; 
  __int128 v18; 
  __m128 v19; 

  __asm { vmaxss  xmm4, xmm3, [rsp+28h+height] }
  v = posWorld->v;
  _mm_shuffle_ps(v, v, 85);
  _mm_shuffle_ps(v, v, 170);
  HIDWORD(v18) = 0;
  v7 = v18;
  *(float *)&v7 = COERCE_FLOAT(*posWorld);
  _XMM3 = v7;
  __asm
  {
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
  }
  v19 = _XMM3;
  v19.m128_i32[3] = 0;
  v11 = v19;
  v11.m128_f32[0] = *(float *)&_XMM4;
  _XMM0 = v11;
  __asm
  {
    vinsertps xmm0, xmm0, xmm4, 10h
    vinsertps xmm0, xmm0, xmm4, 20h ; ' '
  }
  _XMM1 = _mm128_sub_ps(_XMM3, _XMM0);
  _XMM2 = _mm128_add_ps(_XMM3, _XMM0);
  __asm { vminps  xmm0, xmm1, xmmword ptr [rdx] }
  boundsAccumulator->mins = (float4)_XMM0.v;
  __asm { vmaxps  xmm0, xmm2, xmmword ptr [rdx+10h] }
  boundsAccumulator->maxs = (float4)_XMM0.v;
}

/*
==============
ParticleSystem::AlignToSun
==============
*/
void ParticleSystem::AlignToSun(ParticleSystem *this, const FxCamera *pCamera)
{
  unsigned int ActiveStageIndex; 
  Stage *StageByIndex; 
  __int64 sunPrimaryLightIndex; 
  ComPrimaryLight *v9; 
  float v10; 
  __m128 v; 
  __int64 v15; 
  vector4 outMatrix; 
  float4 lookAtInput; 

  if ( (ParticleSystem::GetDef(this)->flags & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2236, ASSERT_TYPE_ASSERT, "(HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_ALIGN_TO_SUN ))", (const char *)&queryFormat, "HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_ALIGN_TO_SUN )") )
    __debugbreak();
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2237, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  ParticleSystem::GetDef(this);
  _XMM6 = _xmm;
  __asm { vinsertps xmm6, xmm6, dword ptr [rax+38h], 10h }
  ActiveStageIndex = R_GetActiveStageIndex(&pCamera->origin);
  StageByIndex = R_GetStageByIndex(ActiveStageIndex);
  if ( !StageByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2248, ASSERT_TYPE_ASSERT, "(stage)", (const char *)&queryFormat, "stage") )
    __debugbreak();
  sunPrimaryLightIndex = StageByIndex->sunPrimaryLightIndex;
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  if ( (unsigned int)sunPrimaryLightIndex >= comWorld.primaryLightCount )
  {
    LODWORD(v15) = sunPrimaryLightIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v15, comWorld.primaryLightCount) )
      __debugbreak();
  }
  v9 = &comWorld.primaryLights[sunPrimaryLightIndex];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2250, ASSERT_TYPE_ASSERT, "(light)", (const char *)&queryFormat, "light") )
    __debugbreak();
  v10 = v9->dir.v[0];
  lookAtInput.v.m128_i32[3] = 0;
  v = lookAtInput.v;
  v.m128_f32[0] = v10;
  _XMM3 = v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rbx+30h], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+34h], 20h ; ' '
  }
  lookAtInput.v = _XMM3;
  Particle_GenerateMatrixFromLookAt(&lookAtInput, &outMatrix);
  outMatrix.w.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 0), outMatrix.x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 85), outMatrix.y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 170), outMatrix.z.v), g_unit.v)));
  ParticleSystem::SetSystemTransform(this, &outMatrix);
}

/*
==============
ParticleSystem::AllocOcclusionQuery
==============
*/
void ParticleSystem::AllocOcclusionQuery(ParticleSystem *this, LocalClientNum_t localClientNum)
{
  unsigned __int16 v4; 
  const ParticleModuleInitOcclusionQuery *m_pModuleInitOcclusionQuery; 

  if ( (ParticleSystem::GetDef(this)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2169, ASSERT_TYPE_ASSERT, "(HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY ))", (const char *)&queryFormat, "HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY )") )
    __debugbreak();
  if ( !this->m_pModuleInitOcclusionQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2170, ASSERT_TYPE_ASSERT, "(m_pModuleInitOcclusionQuery)", (const char *)&queryFormat, "m_pModuleInitOcclusionQuery") )
    __debugbreak();
  if ( this->m_occlusionQueryHandle != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2171, ASSERT_TYPE_ASSERT, "(GetOcclusionQueryHandle() == 0xffff)", (const char *)&queryFormat, "GetOcclusionQueryHandle() == OQ_HANDLE_NONE") )
    __debugbreak();
  v4 = RB_AllocOcclusionQuery(localClientNum, NULL, 1, this->m_pModuleInitOcclusionQuery->m_depthBias);
  this->m_occlusionQueryHandle = v4;
  if ( v4 == 0xFFFF )
  {
    this->m_occlusionFade = 1.0;
  }
  else
  {
    m_pModuleInitOcclusionQuery = this->m_pModuleInitOcclusionQuery;
    this->m_occlusionFade = 0.0;
    if ( (m_pModuleInitOcclusionQuery->m_flags & 0x4000) != 0 )
      RB_SetOcclusionQuerySize(v4, m_pModuleInitOcclusionQuery->m_worldSize.v[0], m_pModuleInitOcclusionQuery->m_worldSize.v[1]);
  }
}

/*
==============
ParticleSystem::ApplyScaleModifiers
==============
*/
float4 *ParticleSystem::ApplyScaleModifiers(ParticleSystem *this, float4 *result, const float4 *baseSize, const int lerpValueSeed, const float4 *defaultLerpValue, const bool useUniformInterpolationScaling)
{
  float4 *v16; 

  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 322, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  if ( lerpValueSeed < 0 )
  {
    _XMM6 = defaultLerpValue->v;
  }
  else
  {
    _XMM6 = 0i64;
    if ( useUniformInterpolationScaling )
    {
      __asm
      {
        vinsertps xmm6, xmm6, xmm0, 0
        vinsertps xmm6, xmm6, xmm0, 10h
        vinsertps xmm6, xmm6, xmm0, 20h ; ' '
      }
    }
    else
    {
      __asm
      {
        vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0E0h], 0
        vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0E4h], 10h
        vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0E8h], 20h ; ' '
      }
    }
  }
  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 316, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  v16 = result;
  if ( this->m_scaleOptions == PARTICLE_USE_SCALE_OPTION_MULT )
  {
    result->v = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(this->m_scaleMod.max.v, this->m_scaleMod.min.v), _XMM6), this->m_scaleMod.min.v), baseSize->v);
  }
  else if ( this->m_scaleOptions == PARTICLE_USE_SCALE_OPTION_OVERRIDE )
  {
    result->v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(this->m_scaleMod.max.v, this->m_scaleMod.min.v), _XMM6), this->m_scaleMod.min.v);
  }
  else
  {
    *result = (float4)baseSize->v;
  }
  return v16;
}

/*
==============
ParticleSystem::ApplyScaleModifiers
==============
*/
float4 *ParticleSystem::ApplyScaleModifiers(ParticleSystem *this, float4 *result, const float4 *baseSize, const int lerpValueSeed, const bool useUniformInterpolationScaling)
{
  float4 *v15; 

  _XMM6 = g_oneHalf.v;
  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 322, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  if ( lerpValueSeed >= 0 )
  {
    _XMM6 = 0i64;
    if ( useUniformInterpolationScaling )
    {
      __asm
      {
        vinsertps xmm6, xmm6, xmm0, 0
        vinsertps xmm6, xmm6, xmm0, 10h
        vinsertps xmm6, xmm6, xmm0, 20h ; ' '
      }
    }
    else
    {
      __asm
      {
        vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0E0h], 0
        vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0E4h], 10h
        vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0E8h], 20h ; ' '
      }
    }
  }
  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 316, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  v15 = result;
  if ( this->m_scaleOptions == PARTICLE_USE_SCALE_OPTION_MULT )
  {
    result->v = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(this->m_scaleMod.max.v, this->m_scaleMod.min.v), _XMM6), this->m_scaleMod.min.v), baseSize->v);
  }
  else if ( this->m_scaleOptions == PARTICLE_USE_SCALE_OPTION_OVERRIDE )
  {
    result->v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(this->m_scaleMod.max.v, this->m_scaleMod.min.v), _XMM6), this->m_scaleMod.min.v);
  }
  else
  {
    *result = (float4)baseSize->v;
  }
  return v15;
}

/*
==============
ParticleSystem::ApplyVelocityModifiers
==============
*/
float4 *ParticleSystem::ApplyVelocityModifiers(ParticleSystem *this, float4 *result, const float4 *baseVelocity, const int lerpValueSeed)
{
  float4 *v12; 

  _XMM6 = g_oneHalf.v;
  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 338, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  if ( lerpValueSeed >= 0 )
  {
    _XMM6 = 0i64;
    __asm
    {
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0D4h], 0
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0D8h], 10h
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0DCh], 20h ; ' '
    }
  }
  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 332, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  v12 = result;
  if ( this->m_velocityOptions == PARTICLE_USE_VELOCITY_OPTION_MULT )
  {
    result->v = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(this->m_velocityMod.max.v, this->m_velocityMod.min.v), _XMM6), this->m_velocityMod.min.v), baseVelocity->v);
  }
  else if ( this->m_velocityOptions == PARTICLE_USE_VELOCITY_OPTION_OVERRIDE )
  {
    result->v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(this->m_velocityMod.max.v, this->m_velocityMod.min.v), _XMM6), this->m_velocityMod.min.v);
  }
  else
  {
    *result = (float4)baseVelocity->v;
  }
  return v12;
}

/*
==============
ParticleSystem::ApplyVelocityModifiers
==============
*/
float4 *ParticleSystem::ApplyVelocityModifiers(ParticleSystem *this, float4 *result, const float4 *baseVelocity, const int lerpValueSeed, const float4 *defaultLerpValue)
{
  float4 *v13; 

  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 338, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  if ( lerpValueSeed < 0 )
  {
    _XMM6 = defaultLerpValue->v;
  }
  else
  {
    _XMM6 = 0i64;
    __asm
    {
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0D4h], 0
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0D8h], 10h
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0DCh], 20h ; ' '
    }
  }
  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 332, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  v13 = result;
  if ( this->m_velocityOptions == PARTICLE_USE_VELOCITY_OPTION_MULT )
  {
    result->v = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(this->m_velocityMod.max.v, this->m_velocityMod.min.v), _XMM6), this->m_velocityMod.min.v), baseVelocity->v);
  }
  else if ( this->m_velocityOptions == PARTICLE_USE_VELOCITY_OPTION_OVERRIDE )
  {
    result->v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(this->m_velocityMod.max.v, this->m_velocityMod.min.v), _XMM6), this->m_velocityMod.min.v);
  }
  else
  {
    *result = (float4)baseVelocity->v;
  }
  return v13;
}

/*
==============
ParticleSystem::CalcBoltKey
==============
*/
__int64 ParticleSystem::CalcBoltKey(ParticleSystem *this)
{
  LocalClientNum_t m_localClientNum; 
  int v4; 

  if ( this->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    m_localClientNum = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", m_localClientNum, v4) )
      __debugbreak();
  }
  return (unsigned __int16)(*(_DWORD *)&this->m_bolt.FxBoltBase >> 14) | ((*(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFFu) << 16);
}

/*
==============
ParticleSystem::CalculateDistanceToCameraSquared
==============
*/
void ParticleSystem::CalculateDistanceToCameraSquared(ParticleSystem *this)
{
  __int64 m_localClientNum; 
  __m128 v3; 

  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  v3 = _mm128_sub_ps(g_particleManager[m_localClientNum].m_cameraTransform.w.v, this->m_systemTransform.w.v);
  _XMM2 = _mm128_mul_ps(v3, v3);
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  this->m_distanceToCameraSquared = *(float *)&_XMM1;
}

/*
==============
ParticleSystem::CanDraw
==============
*/
bool ParticleSystem::CanDraw(ParticleSystem *this)
{
  ParticleSystemFlags m_flags; 
  bool result; 

  result = 0;
  if ( this->m_isRunning )
  {
    m_flags = this->m_flags;
    if ( (m_flags & 0x30) == 0 && (BYTE2(m_flags) & 1) == 0 && (m_flags & 0x8000000) == 0 )
      return 1;
  }
  return result;
}

/*
==============
ParticleSystem::ClearBolting
==============
*/
void ParticleSystem::ClearBolting(ParticleSystem *this)
{
  __int64 m_localClientNum; 
  ntl::fixed_hash_map<unsigned int,orientation_t,4096,4099,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *p_m_particleSystemBoneHashMap; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned int r_keyVal; 

  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  r_keyVal = ParticleSystem::CalcBoltKey(this);
  p_m_particleSystemBoneHashMap = &g_particleManager[m_localClientNum].m_particleSystemBoneHashMap;
  v4 = r_keyVal % 0x1003ui64;
  if ( v4 >= 0x1003 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v5 = ntl::internal::hash_table<unsigned int,orientation_t,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,orientation_t>,4096,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t>>,4099>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1>>::find_and_remove_nodes(p_m_particleSystemBoneHashMap, &p_m_particleSystemBoneHashMap->m_buckets.ntl::internal::hash_table<unsigned int,orientation_t,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,orientation_t>,4096,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> >,4099>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v4], &r_keyVal, (ntl::integral_constant<bool,1>)r_keyVal);
  if ( v5 > p_m_particleSystemBoneHashMap->m_currentNumItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 192, ASSERT_TYPE_ASSERT, "( removed <= m_currentNumItems )", (const char *)&queryFormat, "removed <= m_currentNumItems") )
    __debugbreak();
  p_m_particleSystemBoneHashMap->m_currentNumItems -= v5;
}

/*
==============
ParticleSystem::CullSystemDraw
==============
*/
bool ParticleSystem::CullSystemDraw(ParticleSystem *this, const FxCamera *pCamera)
{
  const dvar_t *v4; 
  float drawFrustumCullRadius; 
  float4 v6; 
  unsigned int frustumPlaneCount; 
  __m128 v; 
  float4 posWorld; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2097, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  v4 = particle_system_culling_draw;
  if ( !particle_system_culling_draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 0;
  drawFrustumCullRadius = ParticleSystem::GetDef(this)->drawFrustumCullRadius;
  if ( drawFrustumCullRadius <= 0.0 )
    return 0;
  v6.v = (__m128)this->m_systemTransform.w;
  frustumPlaneCount = pCamera->frustumPlaneCount;
  posWorld.v.m128_i32[3] = 0;
  v = posWorld.v;
  v.m128_f32[0] = v6.v.m128_f32[0];
  _XMM0 = v;
  _mm_shuffle_ps(v6.v, v6.v, 85);
  __asm { vinsertps xmm0, xmm0, xmm2, 10h }
  _mm_shuffle_ps(v6.v, v6.v, 170);
  __asm { vinsertps xmm0, xmm0, xmm4, 20h ; ' ' }
  posWorld.v = _XMM0;
  return FX_CullSphere(pCamera, frustumPlaneCount, &posWorld, drawFrustumCullRadius, 1);
}

/*
==============
ParticleSystem::DebugDraw
==============
*/
void ParticleSystem::DebugDraw(ParticleSystem *this, const int currentTime, const FxCamera *pCamera)
{
  const dvar_t *v3; 
  const ParticleSystemDef *Def; 
  const ParticleSystemDef *v8; 
  int i; 
  const dvar_t *v10; 
  float4 v11; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  unsigned int v16; 
  float v17; 
  const ParticleSystemDef *v18; 
  float v19; 
  char *fmt; 
  vec3_t center; 
  tmat33_t<vec3_t> axis; 
  char dest[1024]; 

  v3 = particle_debug_draw_frustum_cull_radius;
  if ( !particle_debug_draw_frustum_cull_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    _XMM1.v = (__m128)this->m_systemTransform.w;
    LODWORD(center.v[0]) = _XMM1.v.m128_i32[0];
    __asm
    {
      vextractps dword ptr [rsp+4A8h+center+4], xmm1, 1
      vextractps dword ptr [rsp+4A8h+center+8], xmm1, 2
    }
    Def = ParticleSystem::GetDef(this);
    Particle_DebugSphere(&center, Def->drawFrustumCullRadius, &colorOrangeHeat, 1, 0);
    v8 = ParticleSystem::GetDef(this);
    Particle_DebugSphere(&center, v8->updateFrustumCullRadius, &colorGreenFaded, 1, 0);
  }
  for ( i = 0; i < this->m_pSystemDef->numEmitters; ++i )
    ParticleEmitter::DebugDraw(&this->m_pEmitters[i]);
  v10 = particle_debug_draw_systems;
  if ( !particle_debug_draw_systems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && pCamera )
  {
    v11.v = (__m128)this->m_systemTransform.w;
    v12 = particle_debug_draw_systems_distance;
    v13 = _mm_shuffle_ps(v11.v, v11.v, 170).m128_f32[0];
    v14 = v13 - pCamera->origin.v[2];
    center.v[1] = _mm_shuffle_ps(v11.v, v11.v, 85).m128_f32[0];
    v15 = center.v[1] - pCamera->origin.v[1];
    center.v[0] = v11.v.m128_f32[0];
    v11.v.m128_f32[0] = v11.v.m128_f32[0] - pCamera->origin.v[0];
    center.v[2] = v13;
    v16 = (int)fsqrt((float)((float)(v15 * v15) + (float)(v11.v.m128_f32[0] * v11.v.m128_f32[0])) + (float)(v14 * v14));
    if ( !particle_debug_draw_systems_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v17 = (float)v16;
    if ( v17 <= v12->current.value )
    {
      v18 = ParticleSystem::GetDef(this);
      LODWORD(fmt) = v16;
      Com_sprintf(dest, 0x400ui64, "%s (%d)", v18->name, fmt);
      if ( v17 >= 10.0 )
        v19 = v17 * 0.0017500001;
      else
        v19 = FLOAT_0_050000001;
      CL_AddDebugString(&center, &colorWhiteFaded, v19, dest, 0, 1);
      _XMM2.v = (__m128)this->m_systemTransform.y;
      _XMM1.v = (__m128)this->m_systemTransform.x;
      LODWORD(axis.m[1].v[0]) = _XMM2.v.m128_i32[0];
      __asm
      {
        vextractps dword ptr [rsp+4A8h+axis+10h], xmm2, 1
        vextractps dword ptr [rsp+4A8h+axis+14h], xmm2, 2
      }
      _XMM2.v = (__m128)this->m_systemTransform.z;
      LODWORD(axis.m[2].v[0]) = _XMM2.v.m128_i32[0];
      __asm
      {
        vextractps dword ptr [rsp+4A8h+axis+1Ch], xmm2, 1
        vextractps dword ptr [rsp+4A8h+axis+20h], xmm2, 2
      }
      axis.m[0].v[0] = _XMM1.v.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rsp+4A8h+axis+4], xmm1, 1
        vextractps dword ptr [rsp+4A8h+axis+8], xmm1, 2
      }
      CL_AddOrientedDebugStar(&center, &axis, &colorWhiteFaded, v19, 1, 0);
    }
  }
}

/*
==============
ParticleSystem::DisableEmittersForGameMode
==============
*/
void ParticleSystem::DisableEmittersForGameMode(ParticleSystem *this, GameModeType gameMode, bool isHighPlayerCount)
{
  unsigned int GameModeDisableFlag; 
  int i; 
  ParticleEmitter *v6; 

  GameModeDisableFlag = Particle_GetGameModeDisableFlag((GameModeType)(unsigned __int8)gameMode, isHighPlayerCount);
  if ( (GameModeDisableFlag & 0xF0000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1098, ASSERT_TYPE_ASSERT, "(( gameModeDisableFlag & PARTICLE_EMITTER_DEF_FLAG_DISABLE_IN_SP ) || ( gameModeDisableFlag & PARTICLE_EMITTER_DEF_FLAG_DISABLE_IN_MP_LPC ) || ( gameModeDisableFlag & PARTICLE_EMITTER_DEF_FLAG_DISABLE_IN_MP_HPC ) || ( gameModeDisableFlag & PARTICLE_EMITTER_DEF_FLAG_DISABLE_IN_CP ))", (const char *)&queryFormat, "( gameModeDisableFlag & PARTICLE_EMITTER_DEF_FLAG_DISABLE_IN_SP ) || ( gameModeDisableFlag & PARTICLE_EMITTER_DEF_FLAG_DISABLE_IN_MP_LPC ) || ( gameModeDisableFlag & PARTICLE_EMITTER_DEF_FLAG_DISABLE_IN_MP_HPC ) || ( gameModeDisableFlag & PARTICLE_EMITTER_DEF_FLAG_DISABLE_IN_CP )") )
    __debugbreak();
  for ( i = 0; i < this->m_pSystemDef->numEmitters; ++i )
  {
    v6 = &this->m_pEmitters[i];
    if ( (GameModeDisableFlag & ParticleEmitter::GetEmitterDef(v6)->flags) != 0 )
      ParticleEmitter::Kill(v6);
  }
}

/*
==============
ParticleSystem::DrawLights
==============
*/
void ParticleSystem::DrawLights(ParticleSystem *this, const FxCamera *pCamera)
{
  int v4; 
  __int64 v5; 
  __int64 v6; 
  ParticleEmitter *v7; 
  unsigned int m_flags; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 695, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 696, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  v4 = 0;
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v5 = 0i64;
    do
    {
      v6 = v4;
      if ( (ParticleEmitter::GetEmitterDef(&this->m_pEmitters[v6])->flags & 0x80) != 0 )
      {
        v7 = &this->m_pEmitters[v5];
        m_flags = v7->m_flags;
        if ( (m_flags & 0x40) == 0 && (m_flags & 1) == 0 && (m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(v7)->flags & 1) == 0 )
          ParticleEmitter::DrawLights(&this->m_pEmitters[v6], pCamera);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < this->m_pSystemDef->numEmitters );
  }
}

/*
==============
ParticleSystem::DrawNonSpriteParticles
==============
*/
void ParticleSystem::DrawNonSpriteParticles(ParticleSystem *this, const FxCamera *pCamera)
{
  int v4; 
  __int64 v5; 
  ParticleEmitter *v6; 
  unsigned int m_flags; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 665, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 666, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( !ParticleSystem::CullSystemDraw(this, pCamera) )
  {
    v4 = 0;
    if ( this->m_pSystemDef->numEmitters > 0 )
    {
      v5 = 0i64;
      do
      {
        v6 = &this->m_pEmitters[v5];
        m_flags = v6->m_flags;
        if ( (m_flags & 0x40) == 0 && (m_flags & 1) == 0 && (m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(v6)->flags & 1) == 0 )
          ParticleEmitter::DrawNonSpriteParticles(&this->m_pEmitters[v4], pCamera);
        ++v4;
        ++v5;
      }
      while ( v4 < this->m_pSystemDef->numEmitters );
    }
  }
}

/*
==============
ParticleSystem::DrawSpriteParticles
==============
*/
void ParticleSystem::DrawSpriteParticles(ParticleSystem *this, FxDrawState *pDrawState, const GfxBackEndData *backEndData, bool transShadowPass)
{
  bool v4; 
  FxDrawState *v6; 
  int v9; 
  unsigned int v10; 
  __int64 NumActiveLightGrids; 
  const GfxGpuLightGrid **ActiveLightGridsList; 
  double v13; 
  __int64 v15; 
  int v16; 
  const GfxGpuLightGrid **v17; 
  float4 v18; 
  const ParticleSystemDef *m_pSystemDef; 
  __m128 v; 
  __m128 v21; 
  float4 v22; 
  __int64 v23; 
  ParticleEmitter *v24; 
  unsigned int m_flags; 
  __int64 v34; 
  vec3_t pos; 
  Bounds bounds; 
  BuildBounds umbraBoundsAccumulator; 
  BuildBounds lightingBoundsAccumulator; 

  v4 = transShadowPass;
  v6 = pDrawState;
  _RBX = this;
  if ( !pDrawState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 572, ASSERT_TYPE_ASSERT, "(pDrawState)", (const char *)&queryFormat, "pDrawState") )
    __debugbreak();
  if ( !_RBX->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 573, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( fx_umbra_culling->current.enabled )
    goto LABEL_12;
  if ( (ParticleSystem::GetDef(_RBX)->flags & 0x40) != 0 && !v4 )
    ParticleSystem::UpdateOcclusionQuery(_RBX, v6->system->msecDelta, v6->camera);
  if ( !ParticleSystem::CullSystemDraw(_RBX, v6->camera) )
  {
LABEL_12:
    _XMM1.v = (__m128)_RBX->m_systemTransform.w;
    v6->fovCullBlendFactor = 1.0;
    pos.v[0] = _XMM1.v.m128_f32[0];
    __asm
    {
      vextractps dword ptr [rbp+57h+pos+4], xmm1, 1
      vextractps dword ptr [rbp+57h+pos+8], xmm1, 2
    }
    if ( (ParticleSystem::GetDef(_RBX)->flags & 0x4000000) == 0 || !Particle_CullCone(v6->camera, &pos, &v6->fovCullBlendFactor) )
    {
      v9 = 0;
      v10 = 0;
      NumActiveLightGrids = R_GetNumActiveLightGrids(backEndData);
      ActiveLightGridsList = R_GetActiveLightGridsList(backEndData);
      v13 = *(double *)&_RBX->m_lightingBounds.halfSize.y;
      *(_OWORD *)bounds.midPoint.v = *(_OWORD *)_RBX->m_lightingBounds.midPoint.v;
      *(double *)&bounds.halfSize.y = v13;
      if ( _mm_shuffle_ps(*(__m128 *)bounds.midPoint.v, *(__m128 *)bounds.midPoint.v, 255).m128_f32[0] <= 0.0 && bounds.halfSize.v[1] <= 0.0 && bounds.halfSize.v[2] <= 0.0 )
      {
        _XMM2.v = (__m128)_RBX->m_systemTransform.w;
        LODWORD(bounds.midPoint.v[0]) = _XMM2.v.m128_i32[0];
        __asm
        {
          vextractps dword ptr [rbp+57h+bounds.midPoint+4], xmm2, 1
          vextractps dword ptr [rbp+57h+bounds.midPoint+8], xmm2, 2
        }
        bounds.halfSize.v[0] = FLOAT_100_0;
        bounds.halfSize.v[1] = FLOAT_100_0;
        bounds.halfSize.v[2] = FLOAT_100_0;
      }
      v34 = NumActiveLightGrids;
      if ( (int)NumActiveLightGrids > 0 )
      {
        v15 = 0i64;
        v16 = 1;
        v17 = ActiveLightGridsList;
        do
        {
          if ( Bounds_IntersectGpuLightGrid(&bounds, v17[v15]) )
            v10 |= v16;
          v16 = __ROL4__(v16, 1);
          ++v15;
        }
        while ( v15 < v34 );
        v6 = pDrawState;
        v4 = transShadowPass;
      }
      v18.v = (__m128)_xmm;
      m_pSystemDef = _RBX->m_pSystemDef;
      v = _mm128_sub_ps((__m128)0i64, (__m128)_xmm);
      v21 = _mm128_sub_ps((__m128)0i64, (__m128)_xmm);
      umbraBoundsAccumulator.maxs.v = v;
      lightingBoundsAccumulator.maxs.v = v21;
      umbraBoundsAccumulator.mins = (float4)_xmm;
      lightingBoundsAccumulator.mins = (float4)_xmm;
      v22.v = (__m128)_xmm;
      if ( m_pSystemDef->numEmitters > 0 )
      {
        v23 = 0i64;
        do
        {
          v24 = &_RBX->m_pEmitters[v23];
          m_flags = v24->m_flags;
          if ( (m_flags & 0x40) == 0 && (m_flags & 1) == 0 && (m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(v24)->flags & 1) == 0 && (!v4 || (ParticleEmitter::GetEmitterDef(&_RBX->m_pEmitters[v9])->flags & 0x800) != 0) )
            ParticleEmitter::DrawSpriteParticles(&_RBX->m_pEmitters[v9], v6, v10, v4, &umbraBoundsAccumulator, &lightingBoundsAccumulator);
          ++v9;
          ++v23;
        }
        while ( v9 < _RBX->m_pSystemDef->numEmitters );
        v = umbraBoundsAccumulator.maxs.v;
        v18.v = (__m128)umbraBoundsAccumulator.mins;
        v21 = lightingBoundsAccumulator.maxs.v;
        v22.v = (__m128)lightingBoundsAccumulator.mins;
      }
      _XMM2 = _mm128_mul_ps(_mm128_add_ps(v22.v, v21), g_oneHalf.v);
      _RBX->m_lightingBounds.midPoint.v[0] = _XMM2.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rbx+1D0h], xmm2, 1
        vextractps dword ptr [rbx+1D4h], xmm2, 2
      }
      _XMM1 = _mm128_sub_ps(_XMM2, v22.v);
      _mm128_sub_ps(v21, _XMM2);
      __asm { vmaxps  xmm3, xmm1, xmm0 }
      _RBX->m_lightingBounds.halfSize.v[0] = *(float *)&_XMM3;
      __asm
      {
        vextractps dword ptr [rbx+1DCh], xmm3, 1
        vextractps dword ptr [rbx+1E0h], xmm3, 2
      }
      if ( fx_umbra_culling->current.enabled )
      {
        _XMM2 = _mm128_mul_ps(_mm128_add_ps(v18.v, v), g_oneHalf.v);
        _XMM1 = _mm128_sub_ps(_XMM2, v18.v);
        _mm128_sub_ps(v, _XMM2);
        __asm { vmaxps  xmm3, xmm1, xmm0 }
        if ( v4 )
        {
          _R8 = &_RBX->m_umbraBoundsTransShadow;
          _RBX->m_umbraBoundsTransShadow.midPoint.v[0] = _XMM2.m128_f32[0];
          __asm
          {
            vextractps dword ptr [r8+4], xmm2, 1
            vextractps dword ptr [r8+8], xmm2, 2
          }
          _RBX->m_umbraBoundsTransShadow.halfSize.v[0] = *(float *)&_XMM3;
          __asm
          {
            vextractps dword ptr [r8+10h], xmm3, 1
            vextractps dword ptr [r8+14h], xmm3, 2
          }
          R_AddBoundsToCodeSurfGlob(v6->codeSurfGlob, backEndData, &_RBX->m_umbraBoundsTransShadow);
        }
        else
        {
          _RBX->m_umbraBounds.midPoint.v[0] = _XMM2.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rbx+1E8h], xmm2, 1
            vextractps dword ptr [rbx+1ECh], xmm2, 2
          }
          _RBX->m_umbraBounds.halfSize.v[0] = *(float *)&_XMM3;
          __asm
          {
            vextractps dword ptr [rbx+1F4h], xmm3, 1
            vextractps dword ptr [rbx+1F8h], xmm3, 2
          }
        }
      }
    }
  }
}

/*
==============
ParticleSystem::EnableAltModeParticles
==============
*/
void ParticleSystem::EnableAltModeParticles(ParticleSystem *this, const bool isAltModeEnabled, const ParticleGroupID standardModeGroupId, const ParticleGroupID altModeGroupId, GameModeType gameMode, bool isHighPlayerCount)
{
  int v10; 
  unsigned int GameModeDisableFlag; 
  __int64 v12; 
  ParticleEmitter *v13; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v15; 
  ParticleGroupID *groupIDs; 
  const ParticleEmitterDef *v17; 
  unsigned int v18; 
  ParticleGroupID *v19; 
  unsigned int m_flags; 
  unsigned int v21; 

  if ( (ParticleSystem::GetDef(this)->flags & 0x400000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1154, ASSERT_TYPE_ASSERT, "(HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_HAS_EMITTER_GROUP_IDS ))", (const char *)&queryFormat, "HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_HAS_EMITTER_GROUP_IDS )") )
    __debugbreak();
  v10 = 0;
  GameModeDisableFlag = Particle_GetGameModeDisableFlag((GameModeType)(unsigned __int8)gameMode, isHighPlayerCount);
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v12 = 0i64;
    do
    {
      v13 = &this->m_pEmitters[v12];
      if ( (GameModeDisableFlag & ParticleEmitter::GetEmitterDef(v13)->flags) == 0 )
      {
        EmitterDef = ParticleEmitter::GetEmitterDef(v13);
        v15 = 0;
        groupIDs = EmitterDef->groupIDs;
        do
        {
          if ( standardModeGroupId == *groupIDs )
          {
            v21 = v13->m_flags & 0xFFFFFFDF;
            if ( isAltModeEnabled )
              v21 = v13->m_flags | 0x20;
            v13->m_flags = v21;
            goto LABEL_20;
          }
          ++v15;
          ++groupIDs;
        }
        while ( v15 < 4 );
        v17 = ParticleEmitter::GetEmitterDef(v13);
        v18 = 0;
        v19 = v17->groupIDs;
        while ( altModeGroupId != *v19 )
        {
          ++v18;
          ++v19;
          if ( v18 >= 4 )
            goto LABEL_20;
        }
        m_flags = v13->m_flags;
        if ( isAltModeEnabled )
          v13->m_flags = m_flags & 0xFFFFFFDF;
        else
          v13->m_flags = m_flags | 0x20;
      }
LABEL_20:
      ++v10;
      ++v12;
    }
    while ( v10 < this->m_pSystemDef->numEmitters );
  }
}

/*
==============
ParticleSystem::EnableEmitterGroup
==============
*/
void ParticleSystem::EnableEmitterGroup(ParticleSystem *this, ParticleGroupID emitterGroupID, bool enable, bool isHighPlayerCount)
{
  unsigned __int8 ActiveGameMode; 
  int v9; 
  unsigned int GameModeDisableFlag; 
  __int64 v11; 
  ParticleEmitter *v12; 
  const ParticleEmitterDef *EmitterDef; 
  unsigned int v14; 
  ParticleGroupID *groupIDs; 
  unsigned int m_flags; 
  unsigned int v17; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v9 = 0;
  GameModeDisableFlag = Particle_GetGameModeDisableFlag((GameModeType)ActiveGameMode, isHighPlayerCount);
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v11 = 0i64;
    do
    {
      v12 = &this->m_pEmitters[v11];
      if ( (GameModeDisableFlag & ParticleEmitter::GetEmitterDef(v12)->flags) == 0 )
      {
        EmitterDef = ParticleEmitter::GetEmitterDef(v12);
        v14 = 0;
        groupIDs = EmitterDef->groupIDs;
        while ( emitterGroupID != *groupIDs )
        {
          ++v14;
          ++groupIDs;
          if ( v14 >= 4 )
            goto LABEL_12;
        }
        m_flags = v12->m_flags;
        if ( enable )
          v17 = m_flags & 0xFFFFFFDF;
        else
          v17 = m_flags | 0x20;
        v12->m_flags = v17;
      }
LABEL_12:
      ++v9;
      ++v11;
    }
    while ( v9 < this->m_pSystemDef->numEmitters );
  }
}

/*
==============
ParticleSystem::FreeEmitters
==============
*/
void ParticleSystem::FreeEmitters(ParticleSystem *this, bool myChanges)
{
  ParticleManager *ParticleManager; 
  ParticleEmitter *m_pEmitters; 
  int v5; 

  if ( myChanges && (this->m_flags & 0x800) != 0 )
  {
    ParticleManager = ParticleManager::GetParticleManager(this->m_localClientNum);
    ParticleManager::KillSystem(ParticleManager, this);
  }
  else
  {
    m_pEmitters = this->m_pEmitters;
    if ( m_pEmitters )
    {
      v5 = 0;
      if ( this->m_pSystemDef->numEmitters > 0 )
      {
        do
          ParticleEmitter::~ParticleEmitter(&this->m_pEmitters[v5++]);
        while ( v5 < this->m_pSystemDef->numEmitters );
        m_pEmitters = this->m_pEmitters;
      }
      ParticleManager::ParticleSystemFree(this->m_localClientNum, m_pEmitters);
      this->m_pEmitters = NULL;
    }
  }
}

/*
==============
ParticleSystem::FreeOcclusionQuery
==============
*/
void ParticleSystem::FreeOcclusionQuery(ParticleSystem *this)
{
  if ( this->m_occlusionQueryHandle != 0xFFFF )
  {
    if ( (ParticleSystem::GetDef(this)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2196, ASSERT_TYPE_ASSERT, "(HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY ))", (const char *)&queryFormat, "HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY )") )
      __debugbreak();
    RB_FreeOcclusionQuery(this->m_occlusionQueryHandle);
    this->m_occlusionQueryHandle = -1;
  }
}

/*
==============
ParticleSystem::GarbageCollect
==============
*/
void ParticleSystem::GarbageCollect(ParticleSystem *this)
{
  int v2; 
  __int64 v3; 
  ParticleEmitter *v4; 
  unsigned int m_flags; 

  if ( (this->m_flags & 0x2000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1003, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_GARBAGE_COLLECT_PENDING ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_GARBAGE_COLLECT_PENDING )") )
    __debugbreak();
  v2 = 0;
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v3 = 0i64;
    do
    {
      v4 = &this->m_pEmitters[v3];
      m_flags = v4->m_flags;
      if ( (m_flags & 0x80) != 0 )
      {
        if ( (m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 343, ASSERT_TYPE_ASSERT, "(!HasFlag( PARTICLE_EMITTER_FLAG_NO_PARTICLE_DATA ) && HasFlag( PARTICLE_EMITTER_FLAG_GARBAGE_COLLECT_PENDING ))", (const char *)&queryFormat, "!HasFlag( PARTICLE_EMITTER_FLAG_NO_PARTICLE_DATA ) && HasFlag( PARTICLE_EMITTER_FLAG_GARBAGE_COLLECT_PENDING )") )
          __debugbreak();
        ParticleEmitter::FreeParticleData(v4);
      }
      ++v2;
      ++v3;
    }
    while ( v2 < this->m_pSystemDef->numEmitters );
  }
  this->m_flags &= ~0x2000000ui64;
}

/*
==============
ParticleSystem::GetBeamPos
==============
*/
void ParticleSystem::GetBeamPos(ParticleSystem *this, float4 *startPos, float4 *endPos)
{
  if ( !this->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1196, ASSERT_TYPE_ASSERT, "(m_pEmitters)", (const char *)&queryFormat, "m_pEmitters") )
    __debugbreak();
  *startPos = this->m_beamData.m_beamStartPos;
  *endPos = this->m_beamData.m_beamEndPos;
}

/*
==============
ParticleSystem::GetBoltTemporalBits
==============
*/
__int64 ParticleSystem::GetBoltTemporalBits(ParticleSystem *this, LocalClientNum_t localClientNum, int dobjHandle)
{
  __int64 v3; 
  __int64 v4; 
  CgEntitySystem *v6; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v7; 
  bool v8; 
  __int64 v9; 
  __int64 v10; 

  v3 = dobjHandle;
  v4 = localClientNum;
  if ( (unsigned int)dobjHandle >= 0x7FE )
    return 0i64;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v4 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v10) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v4] )
  {
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v10) )
      __debugbreak();
  }
  v6 = CgEntitySystem::ms_entitySystemArray[v4];
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v7 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)((char *)v6 + 760 * v3);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|0x80) )
    return v7[188].m_flags[0] & 3;
  v8 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v7 + 107, ACTIVE, 2u);
  if ( (unsigned int)(v3 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v3, "signed", v3) )
    __debugbreak();
  return (v8 ? 2 : 0) | (unsigned int)CG_IsEntityHighLoD((const LocalClientNum_t)v4, v3);
}

/*
==============
ParticleSystem::GetEmitterByIndex
==============
*/
ParticleEmitter *ParticleSystem::GetEmitterByIndex(ParticleSystem *this, unsigned int index)
{
  __int64 v2; 
  const ParticleSystemDef *m_pSystemDef; 
  __int64 v6; 
  int numEmitters; 

  v2 = index;
  if ( !this->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
    __debugbreak();
  m_pSystemDef = this->m_pSystemDef;
  if ( (unsigned int)v2 >= m_pSystemDef->numEmitters )
  {
    if ( !m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
      __debugbreak();
    numEmitters = this->m_pSystemDef->numEmitters;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 826, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetDef()->numEmitters )", "index doesn't index GetDef()->numEmitters\n\t%i not in [0, %i)", v6, numEmitters) )
      __debugbreak();
  }
  if ( !this->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 827, ASSERT_TYPE_ASSERT, "(m_pEmitters)", (const char *)&queryFormat, "m_pEmitters") )
    __debugbreak();
  return &this->m_pEmitters[v2];
}

/*
==============
ParticleSystem::GetGlobalTintIndex
==============
*/
__int64 ParticleSystem::GetGlobalTintIndex(ParticleSystem *this)
{
  return this->m_globalTintIndex;
}

/*
==============
ParticleSystem::GetMarkSpawnData
==============
*/
const FxMarkSpawnData *ParticleSystem::GetMarkSpawnData(ParticleSystem *this)
{
  __int64 m_localClientNum; 

  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  return ParticleManager::GetMarkSpawnData(&g_particleManager[m_localClientNum], this->m_markSpawnDataIndex);
}

/*
==============
ParticleSystem::GetProfileData
==============
*/
void ParticleSystem::GetProfileData(ParticleSystem *this, ParticleProfileGlobalData *outProfileData)
{
  int v4; 
  __int64 v5; 
  __int64 v6; 
  ParticleEmitter *m_pEmitters; 
  __int64 v8; 
  ParticleEmitter *v9; 
  ParticleEmitter *v10; 
  unsigned int m_flags; 
  ParticleSystemFlags v12; 

  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 777, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  ++outProfileData->numSystems;
  v4 = 0;
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v5 = 0i64;
    v6 = 508i64;
    do
    {
      m_pEmitters = this->m_pEmitters;
      if ( (m_pEmitters[v5].m_flags & 0x40) == 0 )
      {
        outProfileData->numParticlesAllocated += m_pEmitters[v5].m_particleCountMax;
        v8 = v4;
        outProfileData->numParticlesRunning += ParticleEmitter::GetParticleCountRunningForAllStates(&this->m_pEmitters[v8]);
        outProfileData->numParticlesDelayed += ParticleEmitter::GetParticleCountDelayed(&this->m_pEmitters[v8]);
        outProfileData->numParticlesSpawned = outProfileData->numParticlesRunning + outProfileData->numParticlesDelayed;
        outProfileData->numParticlesRendered += this->m_pEmitters[v5].m_numParticlesRendered;
        outProfileData->numLights += this->m_pEmitters[v5].m_numLights;
        outProfileData->numTrails += *(_DWORD *)((char *)this->m_pEmitters->m_particleDrawData + v6 - 4);
        outProfileData->numTrailSegments += *(_DWORD *)((char *)&this->m_pEmitters->m_particleDrawData[0].vfxName + v6);
        outProfileData->numBeams += *(_DWORD *)((char *)&this->m_pEmitters->m_particleDrawData[0].vfxName + v6 + 4);
        outProfileData->numBeamSegments += *(_DWORD *)((char *)&this->m_pEmitters->m_particleDrawData[0].atlasData + v6);
        outProfileData->numRayCasts += this->m_pEmitters[v5].m_numRayCasts;
        outProfileData->numPhysicsFX += this->m_pEmitters[v5].m_numPhysicsFX;
        outProfileData->numPhysicsObjects += this->m_pEmitters[v5].m_numPhysicsObjects;
        m_pEmitters = this->m_pEmitters;
      }
      v9 = &m_pEmitters[v5];
      if ( (m_pEmitters[v5].m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(&m_pEmitters[v5])->flags & 1) == 0 && (v9->m_flags & 1) == 0 )
        outProfileData->updateTimeMicroSecs += this->m_pEmitters[v5].m_profilerUpdateTime;
      v10 = &this->m_pEmitters[v5];
      m_flags = v10->m_flags;
      if ( (m_flags & 0x40) == 0 && (m_flags & 1) == 0 && (m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(v10)->flags & 1) == 0 )
        outProfileData->renderTimeMicroSecs += this->m_pEmitters[v5].m_profilerRenderTime;
      ++v4;
      v6 += 560i64;
      ++v5;
    }
    while ( v4 < this->m_pSystemDef->numEmitters );
  }
  if ( this->m_isRunning )
  {
    v12 = this->m_flags;
    if ( (v12 & 0x31) == 1 && (BYTE2(v12) & 1) == 0 )
      ++outProfileData->numBolts;
  }
  if ( this->m_occlusionQueryHandle != 0xFFFF )
    ++outProfileData->numOcclusionQueries;
}

/*
==============
ParticleSystem::GetTravelVector
==============
*/
void ParticleSystem::GetTravelVector(ParticleSystem *this, float4 *outTravelVector)
{
  outTravelVector->v = _mm128_sub_ps(this->m_systemTransform.w.v, this->m_lastPos.v);
}

/*
==============
ParticleSystem::HandleMyChanges
==============
*/
void ParticleSystem::HandleMyChanges(ParticleSystem *this)
{
  __int64 m_localClientNum; 
  ParticleManager *v3; 
  const FxCamera *pCamera; 
  XAssetHeader v5; 
  char v6; 
  bool v7; 
  const ParticleSystemDef *Def; 
  int dobjHandle; 
  unsigned int boneIndex; 
  vec4_t offsetQuat; 
  orientation_t *boltOffset; 
  unsigned int archiveState; 
  ParticleSystemFlags particleSystemFlags; 
  int spawnTime; 
  int m_spawnTime; 
  const ParticleSystemDef *v18; 
  unsigned __int8 ActiveGameMode; 
  ParticleSystemHandle parentSystemHandle; 
  vec4_t quat; 
  orientation_t v22; 

  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", m_localClientNum, 2) )
    __debugbreak();
  v3 = &g_particleManager[m_localClientNum];
  if ( !v3->m_pFxSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 550, ASSERT_TYPE_ASSERT, "(GetFxSystem())", (const char *)&queryFormat, "GetFxSystem()") )
    __debugbreak();
  pCamera = &v3->m_pFxSystem->camera;
  v5.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_VFX, this->m_pSystemDef->name, 1).physicsLibrary;
  this->m_pSystemDef = v5.vfx;
  if ( !v5.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1289, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
    __debugbreak();
  v6 = this->m_flags & 1;
  v7 = (this->m_flags & 0x200000) != 0;
  if ( (this->m_flags & 0x200000) != 0 )
  {
    if ( !v6 )
    {
      Def = ParticleSystem::GetDef(this);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1294, ASSERT_TYPE_ASSERT, "(!hasBoltOffset || isBolted)", "%s\n\tVFX ASSERT for effect: %s\n", "!hasBoltOffset || isBolted", Def->name) )
        __debugbreak();
      goto LABEL_14;
    }
LABEL_19:
    dobjHandle = *(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFF;
    boneIndex = (unsigned __int16)(*(_DWORD *)&this->m_bolt.FxBoltBase >> 14);
    goto LABEL_16;
  }
  if ( v6 )
    goto LABEL_19;
LABEL_14:
  dobjHandle = 4095;
  boneIndex = 0xFFFF;
LABEL_16:
  if ( v7 )
  {
    _XMM1.v = (__m128)this->m_bolt.offsetPos;
    offsetQuat = (vec4_t)this->m_bolt.offsetQuat;
    LODWORD(v22.origin.v[0]) = _XMM1.v.m128_i32[0];
    __asm
    {
      vextractps dword ptr [rsp+0F8h+var_60.origin+4], xmm1, 1
      vextractps dword ptr [rsp+0F8h+var_60.origin+8], xmm1, 2
    }
    quat = offsetQuat;
    QuatToAxis(&quat, &v22.axis);
    boltOffset = &v22;
  }
  else
  {
    boltOffset = NULL;
  }
  archiveState = v3->m_archiveState;
  particleSystemFlags = this->m_flags;
  spawnTime = CG_GetLocalClientTime((const LocalClientNum_t)this->m_localClientNum);
  parentSystemHandle = this->m_parentSystemHandle;
  if ( this->m_systemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 196, ASSERT_TYPE_ASSERT, "(m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  ParticleSystem::Init(this, this->m_localClientNum, this->m_pSystemDef, this->m_systemHandle, parentSystemHandle, &this->m_systemTransform.w, &this->m_systemTransform, spawnTime, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, NULL, (scr_string_t)0, archiveState);
  m_spawnTime = this->m_spawnTime;
  if ( m_spawnTime >= 0 )
  {
    this->m_lastUpdateTime = m_spawnTime;
    this->m_flags |= 0x1000000ui64;
  }
  else
  {
    if ( !ParticleSystem::PreRoll(this, m_spawnTime, pCamera) )
    {
      *(_QWORD *)&this->m_spawnTime = 0i64;
      this->m_flags |= 0x1000000ui64;
      v18 = ParticleSystem::GetDef(this);
      Com_PrintWarning(21, "Pre-roll on effect %s has failed.\n", v18->name);
    }
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    if ( BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) )
      this->m_flags |= 0x800000ui64;
  }
}

/*
==============
ParticleSystem::HandleMyChangesPreLoad
==============
*/
void ParticleSystem::HandleMyChangesPreLoad(ParticleSystem *this)
{
  ParticleSystem::FreeEmitters(this, 1);
  this->m_flags |= 0x8000ui64;
}

/*
==============
ParticleSystem::Init
==============
*/
bool ParticleSystem::Init(ParticleSystem *this, LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, ParticleSystemHandle particleSystemHandle, ParticleSystemHandle parentSystemHandle, const float4 *systemPos, const vector3 *systemOrientationMat, int spawnTime, ParticleSystemFlags particleSystemFlags, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, scr_string_t boneName, unsigned int archiveState)
{
  unsigned __int16 MarkSpawnData; 
  int preRollMSec; 
  int v22; 
  ParticleEmitter *v23; 
  unsigned int v24; 
  const ParticleSystemDef *m_pSystemDef; 
  signed int v26; 
  ParticleScriptedInputNodeDef *scriptedInputNodeDefs; 
  const dvar_t *v28; 
  ParticleManager *ParticleManager; 
  bool result; 
  __int64 v31; 

  if ( !pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 135, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
    __debugbreak();
  if ( this->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 136, ASSERT_TYPE_ASSERT, "(m_pEmitters == 0)", (const char *)&queryFormat, "m_pEmitters == NULL") )
    __debugbreak();
  MarkSpawnData = 0;
  this->m_pSystemDef = pSystemDef;
  this->m_flags = PARTICLE_SYSTEM_FLAG_NONE;
  this->m_localClientNum = localClientNum;
  preRollMSec = pSystemDef->preRollMSec;
  if ( preRollMSec )
    v22 = -preRollMSec;
  else
    v22 = spawnTime;
  this->m_spawnTime = v22;
  this->m_loopTime = v22;
  if ( particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 152, ASSERT_TYPE_ASSERT, "(particleSystemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "particleSystemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  this->m_occlusionQueryHandle = -1;
  this->m_systemHandle = particleSystemHandle;
  this->m_parentSystemHandle = parentSystemHandle;
  this->m_loopedFxEnt = -1;
  this->m_fxEnt = 2047;
  this->m_pModuleInitOcclusionQuery = NULL;
  this->m_weaponHeat = -1;
  if ( !pSystemDef->numEmitters )
    goto LABEL_50;
  v23 = (ParticleEmitter *)ParticleManager::ParticleSystemAllocAndClear(localClientNum, 560i64 * this->m_pSystemDef->numEmitters);
  this->m_pEmitters = v23;
  if ( !v23 )
  {
    Com_PrintError(21, "Could not allocate %d Particle Emitters. Please increase PARTICLE_SYSTEM_POOL.\n", (unsigned int)this->m_pSystemDef->numEmitters);
LABEL_50:
    this->m_isRunning = 0;
    return 0;
  }
  this->m_isRunning = 1;
  this->m_flags = particleSystemFlags & 0xFFFFFFFFFFBFFF7Fui64;
  if ( (ParticleSystem::GetDef(this)->flags & 0x4000) != 0 )
    v24 = (16361 * ((unsigned int)(214013 * spawnTime + 2531011) >> 17)) >> 15;
  else
    v24 = 16361 * rand() / 0x8000;
  this->m_randomSeed = v24;
  ParticleSystem::SetSystemTransform(this, systemPos, systemOrientationMat);
  ParticleSystem::InitBolting(this, dobjHandle, boneIndex, boltOffset, boneName, archiveState);
  m_pSystemDef = this->m_pSystemDef;
  v26 = 0;
  this->m_boltedSpawnPosSet = 0;
  if ( m_pSystemDef->numEmitters > 0 )
  {
    while ( ParticleEmitter::Init(&this->m_pEmitters[v26], this, &m_pSystemDef->emitterDefs[v26], v26) )
    {
      m_pSystemDef = this->m_pSystemDef;
      if ( ++v26 >= m_pSystemDef->numEmitters )
        goto LABEL_21;
    }
    ParticleManager::ParticleSystemFree(localClientNum, this->m_pEmitters);
    return 0;
  }
LABEL_21:
  ParticleSystem::CalculateDistanceToCameraSquared(this);
  if ( this->m_pModuleInitOcclusionQuery )
  {
    ParticleSystem::AllocOcclusionQuery(this, localClientNum);
  }
  else
  {
    if ( this->m_occlusionQueryHandle != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 218, ASSERT_TYPE_ASSERT, "(m_occlusionQueryHandle == 0xffff)", (const char *)&queryFormat, "m_occlusionQueryHandle == OQ_HANDLE_NONE") )
      __debugbreak();
    this->m_occlusionFade = 1.0;
  }
  *(_QWORD *)this->m_lightingBounds.midPoint.v = 0i64;
  this->m_lightingBounds.midPoint.v[2] = 0.0;
  this->m_lightingBounds.halfSize.v[0] = -3.4028235e38;
  this->m_lightingBounds.halfSize.v[1] = -3.4028235e38;
  this->m_lightingBounds.halfSize.v[2] = -3.4028235e38;
  if ( (ParticleSystem::GetDef(this)->flags & 0x20) != 0 )
  {
    *(_QWORD *)&this->m_scriptedInputRecords[0].key = 0i64;
    *(_QWORD *)this->m_scriptedInputRecords[0].pad = 0i64;
    scriptedInputNodeDefs = ParticleSystem::GetDef(this)->scriptedInputNodeDefs;
    if ( !scriptedInputNodeDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1992, ASSERT_TYPE_ASSERT, "(scriptedInputNodes)", (const char *)&queryFormat, "scriptedInputNodes") )
      __debugbreak();
    if ( scriptedInputNodeDefs->nodeBase.m_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1993, ASSERT_TYPE_ASSERT, "(scriptedInputNodes[0].GetNodeType() == PARTICLE_SCRIPTED_INPUT_NODE_KVP)", (const char *)&queryFormat, "scriptedInputNodes[0].GetNodeType() == PARTICLE_SCRIPTED_INPUT_NODE_KVP") )
      __debugbreak();
    this->m_scriptedInputRecords[0] = (ParticleScriptedInputRecord)*((_OWORD *)&scriptedInputNodeDefs->emitterDisable + 1);
    this->m_scriptedInputRecords[0].dirty = 1;
  }
  this->m_lastPos = (float4)systemPos->v;
  this->m_flags &= ~0x80000000ui64;
  v28 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( v28->current.enabled && (ParticleSystem::GetDef(this)->flags & 0x200000) != 0 )
    this->m_flags |= 0x10000ui64;
  if ( pMarkSpawnData )
  {
    if ( (*((_BYTE *)pMarkSpawnData + 3) & 0x40) != 0 && pMarkSpawnData->materialOverrideIndex >= 0xAFFFu )
    {
      LODWORD(v31) = pMarkSpawnData->materialOverrideIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 243, ASSERT_TYPE_ASSERT, "( ( !pMarkSpawnData->markMaterialIsOverridden || ( pMarkSpawnData->materialOverrideIndex < MAX_SORTED_MATERIALS ) ) )", "( pMarkSpawnData->materialOverrideIndex ) = %u", v31) )
        __debugbreak();
    }
    ParticleManager = ParticleManager::GetParticleManager(this->m_localClientNum);
    MarkSpawnData = ParticleManager::AllocateMarkSpawnData(ParticleManager, pMarkSpawnData);
  }
  this->m_markSpawnDataIndex = MarkSpawnData;
  result = 1;
  this->m_globalTintIndex = 0;
  return result;
}

/*
==============
ParticleSystem::InitBoltedSpawnPos
==============
*/
void ParticleSystem::InitBoltedSpawnPos(ParticleSystem *this)
{
  int i; 

  if ( !this->m_boltedSpawnPosSet )
  {
    for ( i = 0; i < this->m_pSystemDef->numEmitters; ++i )
      ParticleEmitter::InitBoltedSpawnPos(&this->m_pEmitters[i]);
    this->m_boltedSpawnPosSet = 1;
  }
}

/*
==============
ParticleSystem::InitBolting
==============
*/
void ParticleSystem::InitBolting(ParticleSystem *this, unsigned int dobjHandle, unsigned int boneIndex, const orientation_t *boltOffset, scr_string_t boneName, unsigned int archiveState)
{
  ParticleSystemFlags m_flags; 
  char BoltTemporalBits; 
  const cpose_t *Pose; 
  float v13; 
  vec4_t v15; 
  float4 v18; 
  const float4 *v19; 
  float4 *v20; 
  vec4_t v22; 
  const float4 *v25; 
  const float4 *v26; 
  float v30; 
  vec4_t v31; 
  float4 v32; 
  __m128 v33; 
  __m128 v34; 
  float4 v41; 
  __m128 v; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  float4 v47; 
  float4 v48; 
  unsigned int v53; 
  LocalClientNum_t m_localClientNum; 
  unsigned int v55; 
  unsigned int v56; 
  const DObj *v57; 
  const char *v58; 
  const ParticleSystemDef *v59; 
  scr_string_t v60; 
  const ParticleSystemDef *v61; 
  const ParticleSystemDef *v62; 
  const ParticleSystemDef *Def; 
  __int64 v64; 
  __int64 v65; 
  vec3_t outOrigin; 
  __int64 v67; 
  vec4_t out; 
  tmat33_t<vec3_t> mat; 

  v67 = -2i64;
  m_flags = this->m_flags;
  this->m_bolt.boneVisible = 1;
  *(_DWORD *)&this->m_bolt.FxBoltBase &= 0xC0003000;
  *(_DWORD *)&this->m_bolt.FxBoltBase |= dobjHandle & 0xFFF | ((unsigned __int16)boneIndex << 14);
  this->m_bolt.boneName = 0;
  if ( (m_flags & 0x2000) != 0 || (m_flags & 0x20000000) != 0 || dobjHandle != 4095 )
  {
    this->m_flags = m_flags | 1;
    if ( (m_flags & 0x2000) != 0 || (m_flags & 0x20000000) != 0 )
    {
      if ( boneIndex == 0xFFFF )
      {
        this->m_bolt.offsetPos = (float4)g_unit.v;
        this->m_bolt.offsetQuat = (float4)g_unit.v;
      }
      else
      {
        ParticleSystem::SetBoltOffset(this, boltOffset);
      }
    }
    else
    {
      BoltTemporalBits = ParticleSystem::GetBoltTemporalBits(this, this->m_localClientNum, dobjHandle);
      *(_DWORD *)&this->m_bolt.FxBoltBase &= 0xFFFFCFFF;
      *(_DWORD *)&this->m_bolt.FxBoltBase |= (BoltTemporalBits & 3) << 12;
      if ( boneIndex == 0xFFFF )
      {
        if ( dobjHandle >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1388, ASSERT_TYPE_ASSERT, "(dobjHandle < ( 2048 ))", (const char *)&queryFormat, "dobjHandle < MAX_GENTITIES") )
          __debugbreak();
        this->m_flags |= 2ui64;
        Pose = CG_GetPose(this->m_localClientNum, dobjHandle);
        v13 = Pose->angles.v[0];
        out.v[3] = 0.0;
        v15 = out;
        v15.v[0] = v13;
        _XMM3 = v15;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rdi+4Ch], 10h
          vinsertps xmm3, xmm3, dword ptr [rdi+50h], 20h ; ' '
        }
        out = _XMM3;
        v18.v = _mm128_mul_ps((__m128)_XMM3, g_degreeToRadian.v);
        Float4RadianToQuat(v20, v19);
        this->m_bolt.offsetQuat = (float4)v18.v;
        CG_GetPoseOrigin(Pose, &outOrigin);
        out.v[3] = 0.0;
        v22 = out;
        v22.v[0] = outOrigin.v[0];
        _XMM3 = v22;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rbp+47h+outOrigin+4], 10h
          vinsertps xmm3, xmm3, dword ptr [rbp+47h+outOrigin+8], 20h
        }
        out = _XMM3;
        this->m_bolt.offsetQuat.v = _mm128_mul_ps(this->m_bolt.offsetQuat.v, (__m128)_xmm);
        this->m_bolt.offsetPos.v = _mm128_sub_ps((__m128)0i64, (__m128)_XMM3);
        Float4QuatTransform(v26, v25, &this->m_bolt.offsetPos);
        _XMM1.v = (__m128)this->m_systemTransform.x;
        LODWORD(mat.m[0].v[0]) = this->m_systemTransform.x;
        __asm
        {
          vextractps dword ptr [rbp+47h+mat+4], xmm1, 1
          vextractps dword ptr [rbp+47h+mat+8], xmm1, 2
        }
        _XMM2.v = (__m128)this->m_systemTransform.y;
        LODWORD(mat.m[1].v[0]) = _XMM2.v.m128_i32[0];
        __asm
        {
          vextractps dword ptr [rbp+47h+mat+10h], xmm2, 1
          vextractps dword ptr [rbp+47h+mat+14h], xmm2, 2
        }
        _XMM2.v = (__m128)this->m_systemTransform.z;
        LODWORD(mat.m[2].v[0]) = _XMM2.v.m128_i32[0];
        __asm
        {
          vextractps dword ptr [rbp+47h+mat+1Ch], xmm2, 1
          vextractps dword ptr [rbp+47h+mat+20h], xmm2, 2
        }
        AxisToQuat(&mat, &out);
        v30 = (float)((float)((float)(out.v[0] * out.v[0]) + (float)(out.v[1] * out.v[1])) + (float)(out.v[2] * out.v[2])) + (float)(out.v[3] * out.v[3]);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 272, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", out.v[0], out.v[1], out.v[2], out.v[3], fsqrt(v30)) )
          __debugbreak();
        v31 = out;
        v32.v = (__m128)this->m_bolt.offsetQuat;
        v33 = _mm_shuffle_ps((__m128)v31, (__m128)v31, 255);
        v34 = _mm_shuffle_ps(v32.v, v32.v, 255);
        _XMM1 = _mm128_mul_ps((__m128)out, v32.v);
        __asm
        {
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
          vhaddps xmm3, xmm2, xmm2
        }
        _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v33, v34), _XMM3);
        _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v32.v, v32.v, 201), _mm_shuffle_ps((__m128)v31, (__m128)v31, 210)), _mm128_mul_ps(_mm_shuffle_ps(v32.v, v32.v, 210), _mm_shuffle_ps((__m128)v31, (__m128)v31, 201))), _mm128_add_ps(_mm128_mul_ps(v33, v32.v), _mm128_mul_ps((__m128)out, v34)));
        __asm { vblendps xmm7, xmm2, xmm0, 7 }
        v41.v = (__m128)this->m_systemTransform.w;
        v = v32.v;
        v43 = _mm_shuffle_ps(v, v, 201);
        v44 = _mm_shuffle_ps(v, v, 210);
        v45 = _mm128_sub_ps(_mm128_mul_ps(v43, _mm_shuffle_ps(v41.v, v41.v, 210)), _mm128_mul_ps(v44, _mm_shuffle_ps(v41.v, v41.v, 201)));
        v46 = _mm128_add_ps(v45, v45);
        v47.v = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 255), v46), v41.v), _mm128_sub_ps(_mm128_mul_ps(v43, _mm_shuffle_ps(v46, v46, 210)), _mm128_mul_ps(v44, _mm_shuffle_ps(v46, v46, 201)))), this->m_bolt.offsetPos.v);
        this->m_bolt.offsetQuat = (float4)_XMM7.v;
        this->m_bolt.offsetPos = (float4)v47.v;
        this->m_bolt.offsetPos.v = _mm_shuffle_ps(v47.v, _mm_shuffle_ps(v47.v, g_unit.v, 250), 132);
        v48.v = (__m128)this->m_bolt.offsetQuat;
        _XMM0 = _mm128_mul_ps(v48.v, v48.v);
        __asm
        {
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm2, xmm1, xmm1
          vrsqrtps xmm0, xmm2
        }
        this->m_bolt.offsetQuat.v = _mm128_mul_ps(_XMM0, v48.v);
        Particle_AssertFloat4IsNormalized(&this->m_bolt.offsetQuat);
        this->m_flags |= 0x200000ui64;
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      else
      {
        ParticleSystem::SetBoltOffset(this, boltOffset);
        if ( (ParticleSystem::GetDef(this)->flags & 0x2000) != 0 )
        {
          if ( archiveState == 2 )
          {
            this->m_bolt.boneName = boneName;
            if ( !boneName )
            {
              Def = ParticleSystem::GetDef(this);
              Com_PrintWarning(21, "WARNING: Restoring a null bone name. Always Update Bone Index will not function correctly for: %s\n", Def->name);
            }
          }
          else
          {
            v53 = *(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFF;
            m_localClientNum = this->m_localClientNum;
            if ( v53 >= 0x9E5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", *(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFF) )
              __debugbreak();
            if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
            {
              LODWORD(v65) = 2;
              LODWORD(v64) = m_localClientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v64, v65) )
                __debugbreak();
            }
            v55 = 2533 * m_localClientNum + v53;
            if ( v55 >= 0x13CA )
            {
              LODWORD(v65) = v55;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v65) )
                __debugbreak();
            }
            v56 = clientObjMap[v55];
            if ( !v56 )
              goto LABEL_36;
            if ( v56 >= (unsigned int)s_objCount )
            {
              LODWORD(v65) = v56;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v65) )
                __debugbreak();
            }
            v57 = (const DObj *)s_objBuf[v56];
            if ( !v57 )
            {
LABEL_36:
              v62 = ParticleSystem::GetDef(this);
              Com_PrintError(21, "ERROR: Trying to bolt the effect %s to a non-existent object. Disabling bolting.\n", v62->name);
              this->m_flags &= ~1ui64;
              return;
            }
            v58 = DObjGetBoneName(v57, boneIndex);
            if ( !v58 )
            {
              v59 = ParticleSystem::GetDef(this);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1441, ASSERT_TYPE_ASSERT, "(pBoneName)", "%s\n\tVFX ASSERT for effect: %s\n", "pBoneName", v59->name) )
                __debugbreak();
            }
            v60 = SL_ConvertFromString(v58);
            this->m_bolt.boneName = v60;
            if ( !v60 )
            {
              v61 = ParticleSystem::GetDef(this);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1444, ASSERT_TYPE_ASSERT, "(m_bolt.boneName != ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tVFX ASSERT for effect: %s\n", "m_bolt.boneName != ( static_cast< scr_string_t >( 0 ) )", v61->name) )
                __debugbreak();
            }
          }
        }
      }
      if ( (*(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFFu) - 2048 <= 1 )
        this->m_flags |= 0x800000000ui64;
    }
  }
}

/*
==============
ParticleSystem::InitScriptedInputs
==============
*/
void ParticleSystem::InitScriptedInputs(ParticleSystem *this)
{
  ParticleScriptedInputNodeDef *scriptedInputNodeDefs; 

  *(_QWORD *)&this->m_scriptedInputRecords[0].key = 0i64;
  *(_QWORD *)this->m_scriptedInputRecords[0].pad = 0i64;
  scriptedInputNodeDefs = ParticleSystem::GetDef(this)->scriptedInputNodeDefs;
  if ( !scriptedInputNodeDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1992, ASSERT_TYPE_ASSERT, "(scriptedInputNodes)", (const char *)&queryFormat, "scriptedInputNodes") )
    __debugbreak();
  if ( scriptedInputNodeDefs->nodeBase.m_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1993, ASSERT_TYPE_ASSERT, "(scriptedInputNodes[0].GetNodeType() == PARTICLE_SCRIPTED_INPUT_NODE_KVP)", (const char *)&queryFormat, "scriptedInputNodes[0].GetNodeType() == PARTICLE_SCRIPTED_INPUT_NODE_KVP") )
    __debugbreak();
  this->m_scriptedInputRecords[0] = (ParticleScriptedInputRecord)*((_OWORD *)&scriptedInputNodeDefs->emitterDisable + 1);
  this->m_scriptedInputRecords[0].dirty = 1;
}

/*
==============
ParticleSystem::IsEnabledForPhase
==============
*/
char ParticleSystem::IsEnabledForPhase(ParticleSystem *this)
{
  return 1;
}

/*
==============
Particle_CullCone
==============
*/
bool Particle_CullCone(const FxCamera *pCamera, const vec3_t *pos, float *outConeCullBlendFactor)
{
  float v3; 
  float v4; 
  __int128 v5; 
  float v7; 
  bool result; 

  v3 = pos->v[0] - pCamera->origin.v[0];
  v5 = LODWORD(pos->v[1]);
  v4 = pos->v[1] - pCamera->origin.v[1];
  v7 = pos->v[2] - pCamera->origin.v[2];
  *(float *)&v5 = fsqrt((float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v7 * v7));
  _XMM1 = v5;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm2, xmm0
  }
  *(double *)&_XMM0 = I_fclamp((float)((float)((float)((float)((float)(v4 * (float)(1.0 / *(float *)&_XMM0)) * pCamera->axis.m[0].v[1]) + (float)((float)(v3 * (float)(1.0 / *(float *)&_XMM0)) * pCamera->axis.m[0].v[0])) + (float)((float)(v7 * (float)(1.0 / *(float *)&_XMM0)) * pCamera->axis.m[0].v[2])) * pCamera->coneCullFovScale) + pCamera->coneCullFovBias, 0.0, 1.0);
  result = *(float *)&_XMM0 <= 0.0;
  *outConeCullBlendFactor = *(float *)&_XMM0;
  return result;
}

/*
==============
ParticleSystem::PreRoll
==============
*/
bool ParticleSystem::PreRoll(ParticleSystem *this, const int simulationTimeMsec, const FxCamera *pCamera)
{
  const ParticleSystemDef *Def; 
  bool result; 
  __int64 v8; 
  ParticleSystem *v9; 
  __int64 v10; 
  unsigned __int32 v11; 
  __int64 v12; 
  const dvar_t *v13; 
  int v14; 
  int LocalClientTime; 
  int v16; 

  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1903, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( simulationTimeMsec >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1904, ASSERT_TYPE_ASSERT, "(simulationTimeMsec < 0)", (const char *)&queryFormat, "simulationTimeMsec < 0") )
    __debugbreak();
  if ( (ParticleSystem::GetDef(this)->flags & 0x1000) != 0 )
  {
    Def = ParticleSystem::GetDef(this);
    Com_PrintWarning(21, "Trying to pre-roll effect %s that does not support pre-roll. Possibly due to physics, spawning child systems, spawning marks, etc.\n", Def->name);
    return 0;
  }
  else
  {
    v8 = this->m_flags | 0x40000;
    this->m_flags = v8;
    if ( (v8 & 0x4000000) != 0 )
    {
      if ( (v8 & 0x1000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1916, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_PARENT_OWNER ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_PARENT_OWNER )") )
        __debugbreak();
      if ( this->m_parentSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 199, ASSERT_TYPE_ASSERT, "(m_parentSystemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_parentSystemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
        __debugbreak();
      v9 = NULL;
      v10 = (__int64)(int)this->m_localClientNum << 12;
      v11 = 0;
      if ( g_particleSystemsGeneration[v10 + (this->m_parentSystemHandle & 0xFFF)].__all32 == this->m_parentSystemHandle )
        v11 = this->m_parentSystemHandle & 0xFFF;
      v12 = v10 + v11;
      if ( g_particleSystems[0][v12] >= (ParticleSystem *)0x1000 )
        v9 = g_particleSystems[0][v12];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1919, ASSERT_TYPE_ASSERT, "(pParentSystem)", (const char *)&queryFormat, "pParentSystem") )
        __debugbreak();
      v13 = particle_parent_updates_child;
      if ( !particle_parent_updates_child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( !v13->current.enabled && (ParticleSystem::GetDef(v9)->flags & 0x80000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1920, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal( particle_parent_updates_child ) || pParentSystem->HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_PARENT_UPDATES_CHILD ))", (const char *)&queryFormat, "Dvar_GetBool_Internal( particle_parent_updates_child ) || pParentSystem->HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_PARENT_UPDATES_CHILD )") )
        __debugbreak();
      this->m_flags &= ~0x40000ui64;
      return 0;
    }
    else
    {
      v14 = simulationTimeMsec;
      if ( simulationTimeMsec < 0 )
      {
        do
        {
          ParticleSystem::Update(this, v14, pCamera, 100);
          v14 += 100;
        }
        while ( ParticleSystem::CanUpdate(this) && v14 < 0 );
      }
      LocalClientTime = CG_GetLocalClientTime((const LocalClientNum_t)this->m_localClientNum);
      this->m_lastUpdateTime = LocalClientTime;
      v16 = simulationTimeMsec + LocalClientTime - v14;
      if ( v16 < 0 )
        v16 = 0;
      this->m_spawnTime = v16;
      result = 1;
      this->m_flags &= ~0x40000ui64;
    }
  }
  return result;
}

/*
==============
ParticleSystem::ProcessInstancePools
==============
*/
void ParticleSystem::ProcessInstancePools(ParticleSystem *this, const FxCamera *pCamera, InstancePoolData *instancePoolTable, ntl::fixed_map<ParticleEmitterDef const *,InstancePoolData,128,ntl::less<ParticleEmitterDef const *,ParticleEmitterDef const *> > *soloInstancePoolMap, unsigned int *instancePoolLimits)
{
  int v5; 
  __int64 v10; 
  ParticleEmitter *v11; 
  ntl::red_black_tree_node_base *i; 
  bool *p_killOldest; 
  __int64 v14; 

  v5 = 0;
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v10 = 0i64;
    do
    {
      v11 = &this->m_pEmitters[v10];
      if ( (v11->m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(&this->m_pEmitters[v10])->flags & 1) == 0 && (v11->m_flags & 1) == 0 )
        ParticleEmitter::ProcessInstancePool(&this->m_pEmitters[v5], pCamera, instancePoolTable, soloInstancePoolMap, instancePoolLimits);
      ++v5;
      ++v10;
    }
    while ( v5 < this->m_pSystemDef->numEmitters );
  }
  for ( i = soloInstancePoolMap->m_endNodeBase.mp_left; i != &soloInstancePoolMap->m_endNodeBase; i = ntl::red_black_tree_node_base::get_next(i) )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( BYTE4(i[1].mp_left) )
    {
      ParticleEmitter::Kill((ParticleEmitter *)i[1].mp_parent);
      BYTE4(i[1].mp_left) = 0;
    }
  }
  p_killOldest = &instancePoolTable->killOldest;
  v14 = 7i64;
  do
  {
    if ( *p_killOldest )
    {
      ParticleEmitter::Kill(*(ParticleEmitter **)(p_killOldest - 12));
      *p_killOldest = 0;
    }
    p_killOldest += 16;
    --v14;
  }
  while ( v14 );
}

/*
==============
ParticleSystem::PropagateToDetailWorld
==============
*/
void ParticleSystem::PropagateToDetailWorld(ParticleSystem *this)
{
  int v1; 
  LocalClientNum_t m_localClientNum; 
  int v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  ParticleEmitter *m_pEmitters; 
  const ParticleSystemDef *Def; 
  Physics_WorldId detailWorld; 

  v1 = 0;
  m_localClientNum = this->m_localClientNum;
  v4 = 0;
  v5 = 0;
  v6 = 3 * m_localClientNum + 3;
  detailWorld = 3 * m_localClientNum + 4;
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v7 = 0i64;
    do
    {
      ++v1;
      v8 = v5;
      if ( (ParticleEmitter::GetEmitterDef(&this->m_pEmitters[v8])->flags & 0x20) != 0 )
      {
        m_pEmitters = this->m_pEmitters;
        if ( (m_pEmitters[v7].m_flags & 0x40) == 0 )
        {
          ++v4;
          Def = ParticleSystem::GetDef(this);
          ParticleEmitter::PropagateToDetailWorld(&m_pEmitters[v8], (Physics_WorldId)v6, detailWorld, Def->name);
        }
      }
      ++v5;
      ++v7;
    }
    while ( v5 < this->m_pSystemDef->numEmitters );
    m_localClientNum = this->m_localClientNum;
  }
  Physics_SetCGFXEmittersDetailPropagationDebugData(m_localClientNum, v1, v4);
}

/*
==============
ParticleSystem::Release
==============
*/
void ParticleSystem::Release(ParticleSystem *this)
{
  ParticleEmitter *m_pEmitters; 
  int v3; 
  __int64 m_localClientNum; 
  int v5; 
  int v6; 

  m_pEmitters = this->m_pEmitters;
  if ( m_pEmitters )
  {
    v3 = 0;
    if ( this->m_pSystemDef->numEmitters > 0 )
    {
      do
        ParticleEmitter::~ParticleEmitter(&this->m_pEmitters[v3++]);
      while ( v3 < this->m_pSystemDef->numEmitters );
      m_pEmitters = this->m_pEmitters;
    }
    ParticleManager::ParticleSystemFree(this->m_localClientNum, m_pEmitters);
    this->m_pEmitters = NULL;
  }
  m_localClientNum = this->m_localClientNum;
  this->m_isRunning = 0;
  *(_QWORD *)&this->m_systemHandle = 0i64;
  *(_QWORD *)&this->m_spawnTime = 0i64;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    v6 = 2;
    v5 = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  ParticleManager::FreeMarkSpawnData(&g_particleManager[m_localClientNum], this->m_markSpawnDataIndex);
  this->m_loopTime = 0;
  ParticleSystem::FreeOcclusionQuery(this);
  this->m_flags |= 0x10ui64;
}

/*
==============
ParticleSystem::ResetProfilerData
==============
*/
void ParticleSystem::ResetProfilerData(ParticleSystem *this)
{
  int i; 

  for ( i = 0; i < this->m_pSystemDef->numEmitters; ++i )
    ParticleEmitter::ResetProfilerData(&this->m_pEmitters[i]);
}

/*
==============
ParticleSystem::Restart
==============
*/
void ParticleSystem::Restart(ParticleSystem *this, const int currentTime)
{
  const ParticleSystemDef *m_pSystemDef; 
  int v5; 
  __int64 v6; 
  ParticleEmitter *m_pEmitters; 

  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 285, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  m_pSystemDef = this->m_pSystemDef;
  this->m_spawnTime = currentTime;
  this->m_lastUpdateTime = currentTime;
  this->m_loopTime = currentTime;
  v5 = 0;
  if ( m_pSystemDef->numEmitters > 0 )
  {
    v6 = 0i64;
    do
    {
      m_pEmitters = this->m_pEmitters;
      if ( m_pEmitters[v6].m_isRunning )
        ParticleEmitter::Restart(&m_pEmitters[v5]);
      ++v5;
      ++v6;
    }
    while ( v5 < this->m_pSystemDef->numEmitters );
  }
}

/*
==============
ParticleSystem::SetBeamCurvePoints
==============
*/
void ParticleSystem::SetBeamCurvePoints(ParticleSystem *this, const float4 *startPos, const float4 *endPos, const float4 *curvePoint1, const float4 *curvePoint2)
{
  int i; 

  if ( !this->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1205, ASSERT_TYPE_ASSERT, "(m_pEmitters)", (const char *)&queryFormat, "m_pEmitters") )
    __debugbreak();
  if ( !this->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1181, ASSERT_TYPE_ASSERT, "(m_pEmitters)", (const char *)&queryFormat, "m_pEmitters") )
    __debugbreak();
  this->m_beamData.m_beamStartPos = (float4)startPos->v;
  this->m_beamData.m_beamEndPos = (float4)endPos->v;
  this->m_flags |= 0x100ui64;
  for ( i = 0; i < this->m_pSystemDef->numEmitters; ++i )
    ParticleEmitter::UpdateBeamChildTransform(&this->m_pEmitters[i]);
  this->m_beamData.m_beamCurvePoint1 = (float4)curvePoint1->v;
  this->m_beamData.m_beamCurvePoint2 = (float4)curvePoint2->v;
  this->m_beamData.m_useCurvePoints = 1;
}

/*
==============
ParticleSystem::SetBeamPos
==============
*/
void ParticleSystem::SetBeamPos(ParticleSystem *this, const float4 *startPos, const float4 *endPos)
{
  int i; 

  if ( !this->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1181, ASSERT_TYPE_ASSERT, "(m_pEmitters)", (const char *)&queryFormat, "m_pEmitters") )
    __debugbreak();
  this->m_beamData.m_beamStartPos = (float4)startPos->v;
  this->m_beamData.m_beamEndPos = (float4)endPos->v;
  this->m_flags |= 0x100ui64;
  for ( i = 0; i < this->m_pSystemDef->numEmitters; ++i )
    ParticleEmitter::UpdateBeamChildTransform(&this->m_pEmitters[i]);
}

/*
==============
ParticleSystem::SetBoltBoneVisible
==============
*/
void ParticleSystem::SetBoltBoneVisible(ParticleSystem *this, bool boneVisible)
{
  const ParticleSystemDef *Def; 

  if ( (this->m_flags & 1) != 0 )
  {
    this->m_bolt.boneVisible = boneVisible;
  }
  else
  {
    Def = ParticleSystem::GetDef(this);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1555, ASSERT_TYPE_ASSERT, "( ( HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED ) ) )", "( GetVFXName() ) = %s", Def->name) )
      __debugbreak();
    this->m_bolt.boneVisible = boneVisible;
  }
}

/*
==============
ParticleSystem::SetBoltOffset
==============
*/
void ParticleSystem::SetBoltOffset(ParticleSystem *this, const orientation_t *boltOffset)
{
  vec4_t out; 

  if ( boltOffset )
  {
    if ( memcmp_0(boltOffset, &orIdentity, 0x30ui64) )
    {
      AxisToQuat(&boltOffset->axis, &out);
      _XMM0 = _mm128_mul_ps((__m128)out, (__m128)out);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm0, xmm1, xmm1
        vrsqrtps xmm1, xmm0
      }
      this->m_bolt.offsetQuat.v = _mm128_mul_ps(_XMM1, (__m128)out);
      Particle_AssertFloat4IsNormalized(&this->m_bolt.offsetQuat);
      _XMM0 = *(_OWORD *)boltOffset->origin.v;
      __asm { vinsertps xmm2, xmm0, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0' }
      this->m_bolt.offsetPos = (float4)_XMM2.v;
      this->m_flags |= 0x200000ui64;
    }
  }
}

/*
==============
ParticleSystem::SetDataFromArchive
==============
*/
void ParticleSystem::SetDataFromArchive(ParticleSystem *this, const ParticleSystemSave *particleSystemSave)
{
  if ( particleSystemSave->systemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 990, ASSERT_TYPE_ASSERT, "(particleSystemSave.systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "particleSystemSave.systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  if ( particleSystemSave->systemHandle != this->m_systemHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 991, ASSERT_TYPE_ASSERT, "(particleSystemSave.systemHandle == m_systemHandle)", (const char *)&queryFormat, "particleSystemSave.systemHandle == m_systemHandle") )
    __debugbreak();
  this->m_occlusionQueryHandle = particleSystemSave->occlusionQueryHandle;
  *(_DWORD *)&this->m_bolt.FxBoltBase ^= (*(_DWORD *)&this->m_bolt.FxBoltBase ^ (particleSystemSave->temporalBits << 12)) & 0x3000;
  this->m_lastUpdateTime = particleSystemSave->lastUpdateTime;
  this->m_spawnTime = particleSystemSave->spawnTimeMsec;
  this->m_loopedFxEnt = particleSystemSave->loopedFxEnt;
}

/*
==============
ParticleSystem::SetDrawWithViewModel
==============
*/
void ParticleSystem::SetDrawWithViewModel(ParticleSystem *this, bool enabled)
{
  int v2; 
  __int64 v3; 

  v2 = 0;
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v3 = 0i64;
    do
    {
      ++v3;
      ++v2;
      this->m_pEmitters[v3 - 1].m_flags ^= ((unsigned __int16)this->m_pEmitters[v3 - 1].m_flags ^ (unsigned __int16)-enabled) & 0x100;
    }
    while ( v2 < this->m_pSystemDef->numEmitters );
  }
}

/*
==============
ParticleSystem::SetEmissionCurveValue
==============
*/
void ParticleSystem::SetEmissionCurveValue(ParticleSystem *this, const float value)
{
  int v2; 
  __int64 v4; 
  ParticleEmitter *v5; 

  v2 = 0;
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v4 = 0i64;
    do
    {
      v5 = &this->m_pEmitters[v4];
      if ( (v5->m_flags & 0x40) == 0 )
        ParticleEmitter::SetEmissionCurveValue(v5, value);
      ++v2;
      ++v4;
    }
    while ( v2 < this->m_pSystemDef->numEmitters );
  }
}

/*
==============
ParticleSystem::SetFirstUpdateOrPreRoll
==============
*/
void ParticleSystem::SetFirstUpdateOrPreRoll(ParticleSystem *this, const FxCamera *pCamera)
{
  int m_spawnTime; 
  const ParticleSystemDef *Def; 
  unsigned __int8 ActiveGameMode; 

  m_spawnTime = this->m_spawnTime;
  if ( m_spawnTime >= 0 )
  {
    this->m_lastUpdateTime = m_spawnTime;
    this->m_flags |= 0x1000000ui64;
  }
  else
  {
    if ( !ParticleSystem::PreRoll(this, m_spawnTime, pCamera) )
    {
      *(_QWORD *)&this->m_spawnTime = 0i64;
      this->m_flags |= 0x1000000ui64;
      Def = ParticleSystem::GetDef(this);
      Com_PrintWarning(21, "Pre-roll on effect %s has failed.\n", Def->name);
    }
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    if ( BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) )
      this->m_flags |= 0x800000ui64;
  }
}

/*
==============
ParticleSystem::SetGlobalTintIndex
==============
*/
void ParticleSystem::SetGlobalTintIndex(ParticleSystem *this, unsigned __int8 globalTintIndex)
{
  int v4; 
  int v5; 

  if ( globalTintIndex < 3u )
  {
    this->m_globalTintIndex = globalTintIndex;
  }
  else
  {
    v5 = 3;
    v4 = globalTintIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2502, ASSERT_TYPE_ASSERT, "(unsigned)( globalTintIndex ) < (unsigned)( NUM_GLOBAL_TINTS )", "globalTintIndex doesn't index NUM_GLOBAL_TINTS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
    this->m_globalTintIndex = globalTintIndex;
  }
}

/*
==============
ParticleSystem::SetScriptedInput
==============
*/
void ParticleSystem::SetScriptedInput(ParticleSystem *this, ParticleScriptedInputKey key, bool value)
{
  ParticleScriptedInputRecord *m_scriptedInputRecords; 
  unsigned int v5; 
  __int64 v6; 

  m_scriptedInputRecords = this->m_scriptedInputRecords;
  v5 = 0;
  while ( m_scriptedInputRecords->key != key )
  {
    ++v5;
    ++m_scriptedInputRecords;
    if ( v5 )
      return;
  }
  v6 = v5;
  this->m_scriptedInputRecords[v6].value = value;
  this->m_scriptedInputRecords[v6].dirty = 1;
}

/*
==============
ParticleSystem::Stop
==============
*/
void ParticleSystem::Stop(ParticleSystem *this)
{
  __int64 m_localClientNum; 
  int v3; 
  __int64 v4; 
  ParticleEmitter *m_pEmitters; 

  if ( (this->m_flags & 0x70) != 0 )
  {
    m_localClientNum = this->m_localClientNum;
    if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
      __debugbreak();
    if ( g_particleManager[m_localClientNum].m_archiveState != ARCHIVE_STATE_RESTORING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1038, ASSERT_TYPE_ASSERT, "(CanStop() || ParticleManager::GetParticleManager( GetLocalClientNum() )->GetArchiveState() == ParticleManager::ARCHIVE_STATE_RESTORING)", (const char *)&queryFormat, "CanStop() || ParticleManager::GetParticleManager( GetLocalClientNum() )->GetArchiveState() == ParticleManager::ARCHIVE_STATE_RESTORING") )
      __debugbreak();
  }
  this->m_flags |= 0x48ui64;
  if ( this->m_pEmitters )
  {
    v3 = 0;
    if ( this->m_pSystemDef->numEmitters > 0 )
    {
      v4 = 0i64;
      do
      {
        m_pEmitters = this->m_pEmitters;
        if ( (m_pEmitters[v4].m_flags & 2) == 0 )
          ParticleEmitter::Stop(&m_pEmitters[v3]);
        ++v3;
        ++v4;
      }
      while ( v3 < this->m_pSystemDef->numEmitters );
    }
  }
}

/*
==============
ParticleSystem::StopImpactMarks
==============
*/
void ParticleSystem::StopImpactMarks(ParticleSystem *this)
{
  int v2; 
  __int64 v3; 
  ParticleEmitter *m_pEmitters; 
  unsigned int m_impactMarkHandle; 

  if ( this->m_pEmitters )
  {
    v2 = 0;
    if ( this->m_pSystemDef->numEmitters > 0 )
    {
      v3 = 0i64;
      do
      {
        m_pEmitters = this->m_pEmitters;
        m_impactMarkHandle = m_pEmitters[v3].m_impactMarkHandle;
        if ( m_impactMarkHandle != -1 )
        {
          FX_StopImpactMark(this->m_localClientNum, m_impactMarkHandle);
          m_pEmitters[v3].m_impactMarkHandle = -1;
        }
        ++v2;
        ++v3;
      }
      while ( v2 < this->m_pSystemDef->numEmitters );
    }
  }
}

/*
==============
ParticleSystem::ThermalOrNVGStateChanged
==============
*/
void ParticleSystem::ThermalOrNVGStateChanged(ParticleSystem *this, bool thermalEnabled, bool nvgEnabled, GameModeType gameMode, bool isHighPlayerCount)
{
  int v8; 
  __int64 v9; 
  ParticleEmitter *v10; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  __int64 v13; 
  int v14; 
  bool v15; 
  bool v16; 
  __int16 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int GameModeDisableFlag; 

  v8 = 0;
  GameModeDisableFlag = Particle_GetGameModeDisableFlag((GameModeType)(unsigned __int8)gameMode, isHighPlayerCount);
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v9 = 0i64;
    do
    {
      v10 = &this->m_pEmitters[v9];
      SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v10);
      Def = ParticleSystem::GetDef(SystemOwner);
      if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 171, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
        __debugbreak();
      if ( !Def->emitterDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 172, ASSERT_TYPE_ASSERT, "(pSystemDef->emitterDefs)", (const char *)&queryFormat, "pSystemDef->emitterDefs") )
        __debugbreak();
      if ( (unsigned int)v10->m_emitterIndex >= Def->numEmitters )
      {
        LODWORD(v19) = Def->numEmitters;
        LODWORD(v18) = v10->m_emitterIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( m_emitterIndex ) < (unsigned)( pSystemDef->numEmitters )", "m_emitterIndex doesn't index pSystemDef->numEmitters\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v13 = (__int64)&Def->emitterDefs[v10->m_emitterIndex];
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 176, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
        __debugbreak();
      v14 = *(_DWORD *)(v13 + 100);
      if ( (v14 & GameModeDisableFlag) == 0 )
      {
        v15 = 1;
        v16 = 1;
        if ( (v14 & 0x1000) != 0 )
        {
          v15 = nvgEnabled;
        }
        else if ( (v14 & 0x2000) != 0 )
        {
          v15 = !nvgEnabled;
        }
        if ( (v14 & 0x4000) != 0 )
        {
          v16 = thermalEnabled;
        }
        else if ( (v14 & 0x8000) != 0 )
        {
          v16 = !thermalEnabled;
        }
        if ( v15 && v16 )
          v17 = 0;
        else
          v17 = -1;
        v10->m_flags ^= ((unsigned __int16)v17 ^ (unsigned __int16)v10->m_flags) & 0x200;
      }
      ++v8;
      ++v9;
    }
    while ( v8 < this->m_pSystemDef->numEmitters );
  }
}

/*
==============
ParticleSystem::TransferBoltFromPredictedEntToCEnt
==============
*/
void ParticleSystem::TransferBoltFromPredictedEntToCEnt(ParticleSystem *this, int predictedEntIdx, int boneIndex, const int centNum)
{
  __int64 m_localClientNum; 
  unsigned int *v9; 
  __m256i v10; 
  float4 v11; 
  __int64 archiveState; 
  _BYTE v13[64]; 
  __m128 v14; 

  if ( (this->m_flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 710, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED )") )
    __debugbreak();
  if ( (this->m_flags & 0x20000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 711, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED_TO_PREDICTED_ENT ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED_TO_PREDICTED_ENT )") )
    __debugbreak();
  if ( (*(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFF) != predictedEntIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 712, ASSERT_TYPE_ASSERT, "(m_bolt.dobjHandle == static_cast<uint>( predictedEntIdx ))", (const char *)&queryFormat, "m_bolt.dobjHandle == static_cast<uint>( predictedEntIdx )") )
    __debugbreak();
  if ( (unsigned __int16)(*(_DWORD *)&this->m_bolt.FxBoltBase >> 14) != boneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 713, ASSERT_TYPE_ASSERT, "(m_bolt.boneIndex == static_cast<uint>( boneIndex ))", (const char *)&queryFormat, "m_bolt.boneIndex == static_cast<uint>( boneIndex )") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(archiveState) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", archiveState, 2) )
      __debugbreak();
  }
  v9 = (unsigned int *)&g_particleManager[m_localClientNum];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 716, ASSERT_TYPE_ASSERT, "(pParticleManager)", (const char *)&queryFormat, "pParticleManager") )
    __debugbreak();
  this->m_flags &= ~0x20000000ui64;
  memset_0(v13, 0, 0x50ui64);
  v10 = *(__m256i *)&v13[32];
  *(__m256i *)&this->m_bolt.FxBoltBase = *(__m256i *)v13;
  v11.v = v14;
  *(__m256i *)this->m_bolt.offsetQuat.v.m128_f32 = v10;
  this->m_bolt.velocity = (float4)v11.v;
  ParticleSystem::InitBolting(this, centNum, boneIndex, &orIdentity, (scr_string_t)0, *v9);
}

/*
==============
ParticleSystem::Update
==============
*/
void ParticleSystem::Update(ParticleSystem *this, const int currentTime, const FxCamera *pCamera, int preRollDeltaTime)
{
  float4 v4; 
  float4 v5; 
  const FxCamera *v7; 
  ParticleSystemHandle m_parentSystemHandle; 
  __int64 v11; 
  ParticleSystemFlags *p_m_flags; 
  ParticleSystemFlags m_flags; 
  ParticleSystemFlags v14; 
  __m128 v15; 
  __m128 v16; 
  unsigned __int64 v17; 
  const dvar_t *v18; 
  int v19; 
  ParticleSystemFlags *v20; 
  __m128 unsignedInt; 
  const ParticleSystemDef *m_pSystemDef; 
  __int64 v24; 
  ParticleEmitter *m_pEmitters; 
  unsigned __int8 ActiveGameMode; 
  __m128 v27; 
  float updateFrustumCullRadius; 
  float4 v29; 
  unsigned int frustumPlaneCount; 
  __m128 v; 
  bool v35; 
  int v36; 
  __int64 v37; 
  ParticleEmitter *v38; 
  float v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  const ParticleSystemDef *v46; 
  int v47; 
  unsigned __int64 v48; 
  ParticleEmitter *v49; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  __int64 v52; 
  int v53; 
  const ParticleSystemDef *v54; 
  int numEmitters; 
  int v56; 
  unsigned int *v57; 
  const float4 *v58; 
  vector3 *v59; 
  const ParticleSystemDef *v60; 
  float4 v61; 
  __m128 v62; 
  const ParticleSystemDef *v63; 
  __int64 v67; 
  ParticleEmitter *v68; 
  __int64 v69; 
  __int64 v70; 
  char v71; 
  char v72; 
  char v73; 
  float4 systemPos; 
  vector3 systemOrientationMat; 
  float4 posWorld; 
  vec3_t pos; 

  systemPos.v.m128_u64[0] = (unsigned __int64)pCamera;
  v7 = pCamera;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 335, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 336, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  m_parentSystemHandle = this->m_parentSystemHandle;
  if ( m_parentSystemHandle )
  {
    if ( (this->m_flags & 0x40000) != 0 )
    {
      v11 = ((__int64)(int)this->m_localClientNum << 12) + (m_parentSystemHandle & 0xFFF);
      if ( g_particleSystemsGeneration[v11].__all32 != m_parentSystemHandle || g_particleSystems[0][v11] < (ParticleSystem *)0x1000 )
        this->m_flags &= ~0x40000ui64;
    }
  }
  p_m_flags = &this->m_flags;
  m_flags = this->m_flags;
  if ( (m_flags & 0x40000) != 0 || this->m_lastUpdateTime < currentTime || (BYTE3(m_flags) & 1) != 0 )
  {
    if ( (ParticleSystem::GetDef(this)->flags & 0x400) != 0 )
      ParticleSystem::AlignToSun(this, v7);
    v14 = *p_m_flags;
    if ( (*p_m_flags & 0x40000) != 0 )
    {
      v15 = 0i64;
      v15.m128_f32[0] = (float)preRollDeltaTime * 0.001;
      v16 = v15;
      v17 = *p_m_flags;
    }
    else if ( (v14 & 0x800000) != 0 )
    {
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      if ( !BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 372, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsOnline( Com_GameMode_GetActiveGameMode() ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsOnline( Com_GameMode_GetActiveGameMode() )") )
        __debugbreak();
      v16 = (__m128)LODWORD(FLOAT_0_050000001);
      v17 = *p_m_flags & 0xFFFFFFFFFF7FFFFFui64;
    }
    else
    {
      v17 = *p_m_flags;
      v27 = 0i64;
      v27.m128_f32[0] = (float)(currentTime - this->m_lastUpdateTime) * 0.001;
      v16 = v27;
      if ( (BYTE3(v14) & 1) != 0 && v27.m128_f32[0] <= 0.0 )
        v16 = (__m128)LODWORD(FLOAT_0_016666668);
    }
    *p_m_flags = v17 & 0xFFFFFFFFFEFFFFFFui64;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2121, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
      __debugbreak();
    v18 = particle_system_culling_update;
    if ( !particle_system_culling_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = 0;
    if ( v18->current.enabled )
    {
      updateFrustumCullRadius = ParticleSystem::GetDef(this)->updateFrustumCullRadius;
      if ( updateFrustumCullRadius > 0.0 )
      {
        v29.v = (__m128)this->m_systemTransform.w;
        frustumPlaneCount = v7->frustumPlaneCount;
        v4.v = _mm_shuffle_ps(v29.v, v29.v, 85);
        v5.v = _mm_shuffle_ps(v29.v, v29.v, 170);
        posWorld.v.m128_i32[3] = 0;
        v = posWorld.v;
        v.m128_f32[0] = v29.v.m128_f32[0];
        _XMM0 = v;
        __asm
        {
          vinsertps xmm0, xmm0, xmm1, 10h
          vinsertps xmm0, xmm0, xmm2, 20h ; ' '
        }
        posWorld.v = _XMM0;
        pos.v[0] = v29.v.m128_f32[0];
        pos.v[1] = v4.v.m128_f32[0];
        pos.v[2] = v5.v.m128_f32[0];
        if ( FX_CullSphere(v7, frustumPlaneCount, &posWorld, updateFrustumCullRadius, 1) )
        {
          v71 = 1;
          v20 = &this->m_flags;
        }
        else
        {
          if ( (ParticleSystem::GetDef(this)->flags & 0x4000000) != 0 )
          {
            v35 = Particle_CullCone(v7, &pos, posWorld.v.m128_f32);
            v71 = v35;
          }
          else
          {
            v35 = 0;
            v71 = 0;
          }
          v20 = &this->m_flags;
          if ( !v35 )
            goto LABEL_28;
        }
        *v20 |= 0x100000ui64;
        v36 = 0;
        if ( this->m_pSystemDef->numEmitters > 0 )
        {
          v37 = 0i64;
          do
          {
            v38 = &this->m_pEmitters[v37];
            if ( (v38->m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(&this->m_pEmitters[v37])->flags & 1) == 0 && (v38->m_flags & 1) == 0 )
            {
              v4.v = v16;
              ParticleEmitter::CheckPulse(&this->m_pEmitters[v36], v16.m128_f32[0], currentTime);
            }
            ++v36;
            ++v37;
          }
          while ( v36 < this->m_pSystemDef->numEmitters );
          p_m_flags = &this->m_flags;
        }
LABEL_29:
        _XMM8 = 0i64;
        if ( Particle_ToolGetCurrentSystem(this->m_localClientNum) == this )
        {
          unsignedInt = (__m128)particle_edit_mode_loop_time->current.unsignedInt;
          if ( unsignedInt.m128_f32[0] > 0.0 && currentTime - this->m_loopTime >= (int)(float)(unsignedInt.m128_f32[0] * 1000.0) )
          {
            if ( !this->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 285, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
              __debugbreak();
            m_pSystemDef = this->m_pSystemDef;
            this->m_spawnTime = currentTime;
            this->m_lastUpdateTime = currentTime;
            this->m_loopTime = currentTime;
            if ( m_pSystemDef->numEmitters > 0 )
            {
              v24 = 0i64;
              do
              {
                m_pEmitters = this->m_pEmitters;
                if ( m_pEmitters[v24].m_isRunning )
                  ParticleEmitter::Restart(&m_pEmitters[v19]);
                ++v19;
                ++v24;
              }
              while ( v19 < this->m_pSystemDef->numEmitters );
            }
            return;
          }
          if ( particle_figure8_playback->current.enabled )
          {
            *(double *)unsignedInt.m128_u64 = Dvar_GetFloat_Internal(particle_figure8_radius);
            v39 = unsignedInt.m128_f32[0];
            *(double *)unsignedInt.m128_u64 = Dvar_GetFloat_Internal(particle_figure8_time);
            v40 = unsignedInt;
            v40.m128_f32[0] = unsignedInt.m128_f32[0] * 1000.0;
            v5.v = v40;
            v41 = 0i64;
            v41.m128_f32[0] = (float)((currentTime - this->m_spawnTime) % (int)(float)(unsignedInt.m128_f32[0] * 1000.0)) / v5.v.m128_f32[0];
            if ( (v41.m128_f32[0] < 0.0 || v41.m128_f32[0] > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 433, ASSERT_TYPE_ASSERT, "(a >= 0 && a <= 1.0f)", (const char *)&queryFormat, "a >= 0 && a <= 1.0f") )
              __debugbreak();
            v41.m128_f32[0] = v41.m128_f32[0] * 6.29;
            sinf_0(v41.m128_f32[0]);
            v41.m128_f32[0] = v41.m128_f32[0] * 2.0;
            v42 = v41;
            v42.m128_f32[0] = sinf_0(v41.m128_f32[0]);
            v43 = v42;
            v43.m128_f32[0] = v42.m128_f32[0] * v39;
            v4.v = v43;
            _XMM8 = 0i64;
            __asm
            {
              vinsertps xmm8, xmm8, xmm1, 0
              vinsertps xmm8, xmm8, xmm7, 10h
            }
          }
        }
        if ( (*p_m_flags & 0x10) != 0 )
          return;
        if ( (*p_m_flags & 8) == 0 )
          goto LABEL_106;
        v46 = this->m_pSystemDef;
        if ( (v46->flags & 0x800000) != 0 )
        {
          *(_QWORD *)pos.v = ParticleManager::GetParticleManager(this->m_localClientNum);
          v47 = 0;
          v72 = *(_BYTE *)(*(_QWORD *)pos.v + 301139i64);
          v73 = *(_BYTE *)(*(_QWORD *)pos.v + 301140i64);
          if ( this->m_pSystemDef->numEmitters > 0 )
          {
            v48 = 0i64;
            posWorld.v.m128_u64[0] = 0i64;
            while ( 1 )
            {
              v49 = (ParticleEmitter *)((char *)this->m_pEmitters + v48);
              SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v49);
              Def = ParticleSystem::GetDef(SystemOwner);
              if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 171, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
                __debugbreak();
              if ( !Def->emitterDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 172, ASSERT_TYPE_ASSERT, "(pSystemDef->emitterDefs)", (const char *)&queryFormat, "pSystemDef->emitterDefs") )
                __debugbreak();
              if ( (unsigned int)v49->m_emitterIndex >= Def->numEmitters )
              {
                LODWORD(v70) = Def->numEmitters;
                LODWORD(v69) = v49->m_emitterIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( m_emitterIndex ) < (unsigned)( pSystemDef->numEmitters )", "m_emitterIndex doesn't index pSystemDef->numEmitters\n\t%i not in [0, %i)", v69, v70) )
                  __debugbreak();
              }
              v52 = (__int64)&Def->emitterDefs[v49->m_emitterIndex];
              if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 176, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
                __debugbreak();
              if ( **(_DWORD **)pos.v == 2 || ((v53 = *(_DWORD *)(v52 + 100), (v53 & 0x1000) == 0) || v72) && ((v53 & 0x2000) == 0 || !v72) && ((v53 & 0x4000) == 0 || v73) && ((v53 & 0x8000) == 0 || !v73) )
              {
                if ( (v49->m_flags & 1) == 0 )
                  break;
              }
              v54 = this->m_pSystemDef;
              v48 = posWorld.v.m128_u64[0] + 560;
              ++v47;
              posWorld.v.m128_u64[0] += 560i64;
              if ( v47 >= v54->numEmitters )
              {
                this->m_flags |= 0x10ui64;
                return;
              }
            }
            v7 = (const FxCamera *)systemPos.v.m128_u64[0];
LABEL_106:
            if ( !v71 )
            {
              if ( Particle_ToolGetCurrentSystem(this->m_localClientNum) == this )
              {
                v60 = this->m_pSystemDef;
                systemPos.v = _mm128_add_ps(_XMM8, v60->gameTweakPosition.v);
                v61.v = (__m128)v60->gameTweakRotation;
                Float4UnitQuatToAxis(v59, v58);
                systemOrientationMat.y = (float4)v4.v;
                systemOrientationMat.x = (float4)v61.v;
                systemOrientationMat.z = (float4)v5.v;
                ParticleSystem::SetSystemTransform(this, &systemPos, &systemOrientationMat);
              }
              ParticleSystem::GetDef(this);
              v62 = _mm128_sub_ps(this->m_systemTransform.w.v, this->m_lastPos.v);
              v63 = this->m_pSystemDef;
              _XMM2 = _mm128_mul_ps(v62, v62);
              __asm
              {
                vhaddps xmm0, xmm2, xmm2
                vhaddps xmm0, xmm0, xmm0
              }
              this->m_distanceTraveled = _mm_sqrt_ps(_XMM0).m128_f32[0];
              if ( v63->numEmitters > 0 )
              {
                v67 = 0i64;
                do
                {
                  v68 = &this->m_pEmitters[v67];
                  if ( (v68->m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(&this->m_pEmitters[v67])->flags & 1) == 0 && (v68->m_flags & 1) == 0 )
                    ParticleEmitter::Update(&this->m_pEmitters[v19], v16.m128_f32[0], currentTime, v7);
                  ++v19;
                  ++v67;
                }
                while ( v19 < this->m_pSystemDef->numEmitters );
              }
              ParticleSystem::CalculateDistanceToCameraSquared(this);
              this->m_lastPos = this->m_systemTransform.w;
            }
            this->m_lastUpdateTime = currentTime;
            return;
          }
        }
        else
        {
          numEmitters = v46->numEmitters;
          v56 = 0;
          if ( numEmitters > 0 )
          {
            v57 = &this->m_pEmitters->m_flags;
            while ( (*(_BYTE *)v57 & 1) != 0 )
            {
              ++v56;
              v57 += 140;
              if ( v56 >= numEmitters )
                goto LABEL_104;
            }
            goto LABEL_106;
          }
        }
LABEL_104:
        *p_m_flags |= 0x10ui64;
        return;
      }
      v71 = 0;
    }
    else
    {
      v71 = 0;
    }
    v20 = &this->m_flags;
LABEL_28:
    *v20 &= ~0x100000ui64;
    goto LABEL_29;
  }
}

/*
==============
ParticleSystem::UpdateBolting
==============
*/

void __fastcall ParticleSystem::UpdateBolting(ParticleSystem *this, double dt, double a3, double _XMM3_8)
{
  float v4; 
  const ParticleSystemDef *Def; 
  __m128 v7; 
  __m128 v8; 
  float4 v9; 
  __m128 v10; 
  __m128 v; 
  __m128 v24; 
  __m128 v25; 
  const float4 *v26; 
  vector3 *v27; 
  __m128 v28; 
  __m128 v29; 
  ParticleManager *v30; 
  unsigned __int8 v31; 
  int v32; 
  CgPredictedEntitySystem *System; 
  __m128 v34; 
  __m128 v36; 
  __m128 v43; 
  __m128 v44; 
  const float4 *v45; 
  vector3 *v46; 
  __m128 v47; 
  __m128 v48; 
  int v49; 
  unsigned int BoltTemporalBits; 
  FxBoltBase v51; 
  bool v52; 
  bool v53; 
  LocalClientNum_t m_localClientNum; 
  const cpose_t *PoseExtended; 
  const float4 *v56; 
  float4 *v57; 
  const cpose_t *v58; 
  bool BoneOrientation; 
  float v60; 
  __m128 v62; 
  float4 v65; 
  const float4 *v66; 
  vector3 *v67; 
  __m128 v69; 
  ParticleManager *ParticleManager; 
  unsigned __int64 v72; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *v73; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *mp_next; 
  float v75; 
  __m128 v77; 
  const ParticleSystemDef *v79; 
  ParticleSystemFlags m_flags; 
  char v81; 
  unsigned __int64 v82; 
  float4 v83; 
  __m128 v84; 
  __m128 v85; 
  __m128 v86; 
  __m128 v87; 
  float4 v88; 
  float4 v89; 
  const float4 *v90; 
  vector3 *v91; 
  float4 v92; 
  const vector4 *v93; 
  __m128 v94; 
  __m128 v95; 
  __m128 v96; 
  __m128 v97; 
  bool IsBoneVisible; 
  ParticleManager *v99; 
  bool outBoneVisible; 
  float4 v101; 
  vector4 result; 
  __int64 v103; 
  float4 normal; 
  vec3_t outOrigin; 
  vec4_t outQuat; 
  vector4 systemOrientationMat; 
  float4 systemPos; 

  v103 = -2i64;
  v4 = *(float *)&dt;
  if ( (this->m_flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1585, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED )") )
    __debugbreak();
  ParticleSystem::SetBoltBoneVisible(this, 1);
  if ( (this->m_flags & 0x2000) != 0 )
  {
    Def = ParticleSystem::GetDef(this);
    if ( Particle_GetDynEntTransform(this->m_localClientNum, *(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFF, (unsigned __int16)(*(_DWORD *)&this->m_bolt.FxBoltBase >> 14), &outOrigin, &outQuat, Def->name) )
    {
      v7 = (__m128)LODWORD(FLOAT_1_0);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(outQuat.v[0] * outQuat.v[0]) + (float)(outQuat.v[1] * outQuat.v[1])) + (float)(outQuat.v[2] * outQuat.v[2])) + (float)(outQuat.v[3] * outQuat.v[3])) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1619, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( quat ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( quat )", outQuat.v[0], outQuat.v[1], outQuat.v[2], outQuat.v[3]) )
        __debugbreak();
      v8 = 0i64;
      if ( (this->m_flags & 0x200000) != 0 )
      {
        systemPos.v = (__m128)this->m_bolt.offsetPos;
        v9.v = (__m128)this->m_bolt.offsetQuat;
        QuatTrans_TransformPoint(&outQuat, &outOrigin, (const vec3_t *)&systemPos, (vec3_t *)&normal);
        v10 = _mm_shuffle_ps(v9.v, v9.v, 255);
        v10.m128_f32[0] = (float)((float)((float)(v10.m128_f32[0] * outQuat.v[0]) + (float)(v9.v.m128_f32[0] * outQuat.v[3])) + (float)(_mm_shuffle_ps(v9.v, v9.v, 170).m128_f32[0] * outQuat.v[1])) - (float)(_mm_shuffle_ps(v9.v, v9.v, 85).m128_f32[0] * outQuat.v[2]);
        v101.v = v10;
        _XMM6 = normal.v;
        v8 = 0i64;
        __asm { vinsertps xmm6, xmm6, xmm7, 30h ; '0' }
        _XMM3 = v10;
        __asm
        {
          vinsertps xmm3, xmm3, xmm8, 10h
          vinsertps xmm3, xmm3, xmm5, 20h ; ' '
          vinsertps xmm3, xmm3, xmm2, 30h ; '0'
        }
        normal.v = (__m128)_XMM3;
        v7 = (__m128)LODWORD(FLOAT_1_0);
      }
      else
      {
        normal.v.m128_i32[3] = 0;
        v = normal.v;
        v.m128_f32[0] = outOrigin.v[0];
        _XMM6 = v;
        __asm
        {
          vinsertps xmm6, xmm6, dword ptr [rsp+218h+outOrigin+4], 10h
          vinsertps xmm6, xmm6, dword ptr [rsp+218h+outOrigin+8], 20h
        }
        normal.v = _XMM6;
        _XMM3 = outQuat;
      }
      systemPos.v = _XMM6;
      _XMM0 = _mm128_mul_ps((__m128)_XMM3, (__m128)_XMM3);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm0, xmm1, xmm1
        vrsqrtps xmm1, xmm0
      }
      v24 = _mm128_mul_ps(_XMM1.v, (__m128)_XMM3);
      normal.v = v24;
      Particle_AssertFloat4IsNormalized(&normal);
      v25 = normal.v;
      Float4UnitQuatToAxis(v27, v26);
      systemOrientationMat.y = (float4)_XMM1.v;
      systemOrientationMat.x.v = v25;
      systemOrientationMat.z.v = v24;
      ParticleSystem::SetSystemTransform(this, &systemPos, &systemOrientationMat);
      ParticleSystem::UpdateChildTransforms(this);
      ParticleSystem::InitBoltedSpawnPos(this);
      v28 = _mm128_sub_ps(_XMM6, this->m_bolt.prevPos.v);
      if ( v4 > 0.00000011920929 )
      {
        v29 = v7;
        v29.m128_f32[0] = v7.m128_f32[0] / v4;
        v8 = v29;
      }
      this->m_bolt.velocity.v = _mm128_mul_ps(_mm_shuffle_ps(v8, v8, 0), v28);
      this->m_bolt.prevPos.v = _XMM6;
      return;
    }
    goto LABEL_15;
  }
  if ( (this->m_flags & 0x20000000) == 0 )
  {
    v49 = *(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFF;
    if ( v49 == 4095 )
      return;
    BoltTemporalBits = ParticleSystem::GetBoltTemporalBits(this, this->m_localClientNum, v49);
    v51 = this->m_bolt.FxBoltBase;
    v52 = BoltTemporalBits == ((*(unsigned int *)&v51 >> 12) & 3);
    v53 = 0;
    m_localClientNum = this->m_localClientNum;
    if ( (this->m_flags & 2) != 0 )
    {
      PoseExtended = CG_GetPoseExtended(m_localClientNum, *(_WORD *)&v51 & 0xFFF, 1);
      v58 = PoseExtended;
      if ( PoseExtended )
      {
        v60 = PoseExtended->angles.v[0];
        normal.v.m128_i32[3] = 0;
        v62 = normal.v;
        v62.m128_f32[0] = v60;
        _XMM3 = v62;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rdi+4Ch], 10h
          vinsertps xmm3, xmm3, dword ptr [rdi+50h], 20h ; ' '
        }
        normal.v = _XMM3;
        v65.v = _mm128_mul_ps(_XMM3, g_degreeToRadian.v);
        Float4RadianToQuat(v57, v56);
        Float4UnitQuatToAxis(v67, v66);
        systemOrientationMat.y = *(float4 *)&dt;
        systemOrientationMat.x = (float4)v65.v;
        *(__m256i *)result.x.v.m128_f32 = *(__m256i *)systemOrientationMat.x.v.m128_f32;
        result.z = *(float4 *)&a3;
        CG_GetPoseOrigin(v58, &outOrigin);
        *(_OWORD *)&dt = LODWORD(outOrigin.v[1]);
        normal.v.m128_i32[3] = 0;
        v69 = normal.v;
        v69.m128_f32[0] = outOrigin.v[0];
        _XMM3 = v69;
        __asm
        {
          vinsertps xmm3, xmm3, xmm1, 10h
          vinsertps xmm3, xmm3, dword ptr [rsp+218h+outOrigin+8], 20h
        }
        result.w = *(float4 *)&_XMM3_8;
        BoneOrientation = 1;
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      else
      {
        BoneOrientation = 0;
        v53 = (ParticleSystem::GetDef(this)->flags & 0x100000) == 0;
      }
    }
    else
    {
      ParticleManager = ParticleManager::GetParticleManager(m_localClientNum);
      v72 = ParticleSystem::CalcBoltKey(this);
      if ( v72 % 0x1003 >= 0x1003 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v73 = &ParticleManager->m_particleSystemBoneHashMap.m_buckets.m_data[v72 % 0x1003];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *)v73->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *)v73->m_listHead.m_sentinel.mp_next == v73 )
      {
LABEL_42:
        mp_next = NULL;
      }
      else
      {
        while ( 1 )
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v72 )
            break;
          mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *)mp_next->m_listHead.m_sentinel.mp_next;
          if ( mp_next == v73 )
            goto LABEL_42;
        }
      }
      if ( !mp_next || mp_next == (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *)-12i64 )
      {
        BoneOrientation = FX_GetBoneOrientation(this->m_localClientNum, *(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFF, (unsigned __int16)(*(_DWORD *)&this->m_bolt.FxBoltBase >> 14), (orientation_t *)&systemOrientationMat);
        if ( BoneOrientation )
        {
          v79 = ParticleSystem::GetDef(this);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1783, ASSERT_TYPE_ASSERT, "(!hasBolt)", "%s\n\tVFX ASSERT for effect: %s\n", "!hasBolt", v79->name) )
            __debugbreak();
        }
      }
      else
      {
        Float4x4LoadMat33Unaligned((const tmat33_t<vec3_t> *)&mp_next[3], &result);
        v75 = *((float *)&mp_next[1].m_listHead.m_sentinel.mp_next + 1);
        *(_OWORD *)&dt = LODWORD(mp_next[2].m_listHead.m_sentinel.mp_next);
        normal.v.m128_i32[3] = 0;
        v77 = normal.v;
        v77.m128_f32[0] = v75;
        _XMM3 = v77;
        __asm
        {
          vinsertps xmm3, xmm3, xmm1, 10h
          vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
        }
        result.w = *(float4 *)&_XMM3_8;
        BoneOrientation = 1;
      }
    }
    if ( !v52 || !BoneOrientation )
    {
      v99 = ParticleManager::GetParticleManager(this->m_localClientNum);
      if ( !v53 && (ParticleSystem::GetDef(this)->flags & 0x100) == 0 )
      {
        ParticleManager::StopSystem(v99, this);
        return;
      }
      v30 = v99;
      goto LABEL_71;
    }
    Particle_AssertFloat4IsNormalized(&result.x);
    Particle_AssertFloat4IsNormalized(&result.y);
    Particle_AssertFloat4IsNormalized(&result.z);
    m_flags = this->m_flags;
    v81 = m_flags & 6;
    v82 = (unsigned __int64)m_flags >> 21;
    if ( v81 == 2 )
    {
      systemOrientationMat.x = (float4)LODWORD(FLOAT_1_0);
      systemOrientationMat.y.v = _mm_shuffle_ps(systemOrientationMat.x.v, systemOrientationMat.x.v, 81);
      systemOrientationMat.z.v = _mm_shuffle_ps(systemOrientationMat.x.v, systemOrientationMat.x.v, 69);
      if ( (v82 & 1) == 0 )
      {
        ParticleSystem::SetSystemTransform(this, &g_unit, &systemOrientationMat);
LABEL_66:
        IsBoneVisible = FX_IsBoneVisible(this->m_localClientNum, *(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFF, (unsigned __int16)(*(_DWORD *)&this->m_bolt.FxBoltBase >> 14));
        ParticleSystem::SetBoltBoneVisible(this, IsBoneVisible);
        ParticleSystem::UpdateChildTransforms(this);
        ParticleSystem::InitBoltedSpawnPos(this);
        return;
      }
      v83.v = (__m128)this->m_bolt.offsetPos;
      v84 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v83.v, v83.v, 0), result.x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v83.v, v83.v, 85), result.y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v83.v, v83.v, 170), result.z.v), result.w.v)));
      v101.v = v84;
      ParticleSystem::SetSystemTransform(this, &v101, &systemOrientationMat);
      v85 = _mm128_sub_ps(v84, this->m_bolt.prevPos.v);
      if ( v4 <= 0.00000011920929 )
      {
        v86 = 0i64;
      }
      else
      {
        v87 = (__m128)LODWORD(FLOAT_1_0);
        v87.m128_f32[0] = 1.0 / v4;
        v86 = v87;
      }
      v88.v = _mm128_mul_ps(_mm_shuffle_ps(v86, v86, 0), v85);
      this->m_bolt.prevPos.v = v84;
    }
    else
    {
      if ( (v82 & 1) != 0 )
      {
        Particle_AssertFloat4IsNormalized(&this->m_bolt.offsetQuat);
        v89.v = (__m128)this->m_bolt.offsetQuat;
        Float4UnitQuatToAxis(v91, v90);
        systemOrientationMat.y = *(float4 *)&dt;
        systemOrientationMat.x = (float4)v89.v;
        systemOrientationMat.z = *(float4 *)&a3;
        systemOrientationMat.w = this->m_bolt.offsetPos;
        v92.v = (__m128)systemOrientationMat.w;
        Particle_AssertFloat4IsNormalized(&systemOrientationMat.x);
        Particle_AssertFloat4IsNormalized(&systemOrientationMat.y);
        Particle_AssertFloat4IsNormalized(&systemOrientationMat.z);
        Float4x4Mul(&systemOrientationMat, &result, v93);
        result.w = *(float4 *)&_XMM3_8;
        result.z = *(float4 *)&a3;
        result.y = *(float4 *)&dt;
        result.x = (float4)v92.v;
        systemOrientationMat = result;
        Particle_RotMatrixAutoRenormalize(&systemOrientationMat);
        ParticleSystem::SetSystemTransform(this, &systemOrientationMat);
        v94 = systemOrientationMat.w.v;
      }
      else
      {
        Particle_RotMatrixAutoRenormalize(&result);
        ParticleSystem::SetSystemTransform(this, &result);
        v94 = result.w.v;
      }
      v95 = _mm128_sub_ps(v94, this->m_bolt.prevPos.v);
      if ( v4 <= 0.00000011920929 )
      {
        v96 = 0i64;
      }
      else
      {
        v97 = (__m128)LODWORD(FLOAT_1_0);
        v97.m128_f32[0] = 1.0 / v4;
        v96 = v97;
      }
      this->m_bolt.prevPos.v = v94;
      v88.v = _mm128_mul_ps(_mm_shuffle_ps(v96, v96, 0), v95);
    }
    this->m_bolt.velocity = (float4)v88.v;
    goto LABEL_66;
  }
  outBoneVisible = 1;
  ParticleSystem::GetDef(this);
  v31 = *(_DWORD *)&this->m_bolt.FxBoltBase >> 14;
  v32 = *(_DWORD *)&this->m_bolt.FxBoltBase & 0xFFF;
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 494, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  v34 = 0i64;
  outOrigin.v[0] = 0.0;
  outOrigin.v[1] = 0.0;
  outOrigin.v[2] = 0.0;
  outQuat = quat_identity;
  if ( !CgPredictedEntitySystem::IsPredictedEntityInUse(System, v32 - 2501) || !CgPredictedEntitySystem::GetBoneTransform(System, v32 - 2501, v31, &outOrigin, (tmat33_t<vec3_t> *)&systemOrientationMat, &outBoneVisible) )
  {
LABEL_15:
    v30 = ParticleManager::GetParticleManager(this->m_localClientNum);
LABEL_71:
    ParticleManager::KillSystem(v30, this);
    return;
  }
  AxisToQuat((const tmat33_t<vec3_t> *)&systemOrientationMat, &outQuat);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(outQuat.v[0] * outQuat.v[0]) + (float)(outQuat.v[1] * outQuat.v[1])) + (float)(outQuat.v[2] * outQuat.v[2])) + (float)(outQuat.v[3] * outQuat.v[3])) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1680, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( quat ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( quat )", outQuat.v[0], outQuat.v[1], outQuat.v[2], outQuat.v[3]) )
    __debugbreak();
  normal.v.m128_i32[3] = 0;
  v36 = normal.v;
  v36.m128_f32[0] = outOrigin.v[0];
  _XMM6 = v36;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rsp+218h+outOrigin+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rsp+218h+outOrigin+8], 20h
  }
  v101.v = _XMM6;
  _XMM0 = _mm128_mul_ps((__m128)outQuat, (__m128)outQuat);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vrsqrtps xmm1, xmm0
  }
  v43 = _mm128_mul_ps(_XMM1.v, (__m128)outQuat);
  systemPos.v = v43;
  Particle_AssertFloat4IsNormalized(&systemPos);
  v44 = systemPos.v;
  Float4UnitQuatToAxis(v46, v45);
  systemOrientationMat.y = (float4)_XMM1.v;
  systemOrientationMat.x.v = v44;
  systemOrientationMat.z.v = v43;
  ParticleSystem::SetSystemTransform(this, &v101, &systemOrientationMat);
  ParticleSystem::UpdateChildTransforms(this);
  ParticleSystem::InitBoltedSpawnPos(this);
  v47 = _mm128_sub_ps(_XMM6, this->m_bolt.prevPos.v);
  if ( v4 > 0.00000011920929 )
  {
    v48 = (__m128)LODWORD(FLOAT_1_0);
    v48.m128_f32[0] = 1.0 / v4;
    v34 = v48;
  }
  this->m_bolt.velocity.v = _mm128_mul_ps(_mm_shuffle_ps(v34, v34, 0), v47);
  this->m_bolt.prevPos.v = _XMM6;
  ParticleSystem::SetBoltBoneVisible(this, outBoneVisible);
}

/*
==============
ParticleSystem::UpdateChildTransforms
==============
*/
void ParticleSystem::UpdateChildTransforms(ParticleSystem *this)
{
  int v2; 
  __int64 v3; 
  ParticleEmitter *v4; 
  ParticleEmitter *m_pEmitters; 

  if ( (ParticleSystem::GetDef(this)->flags & 0x8000) != 0 )
  {
    v2 = 0;
    if ( this->m_pSystemDef->numEmitters > 0 )
    {
      v3 = 0i64;
      do
      {
        v4 = &this->m_pEmitters[v3];
        if ( (v4->m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(&this->m_pEmitters[v3])->flags & 1) == 0 && (v4->m_flags & 1) == 0 )
        {
          m_pEmitters = this->m_pEmitters;
          if ( (m_pEmitters[v3].m_flags & 0x40) == 0 )
            ParticleEmitter::UpdateChildTransforms(&m_pEmitters[v2]);
        }
        ++v2;
        ++v3;
      }
      while ( v2 < this->m_pSystemDef->numEmitters );
    }
  }
}

/*
==============
ParticleSystem::UpdateCullingAndOcclusion
==============
*/
bool ParticleSystem::UpdateCullingAndOcclusion(ParticleSystem *this, FxSystem *fxSystem)
{
  if ( (ParticleSystem::GetDef(this)->flags & 0x40) != 0 )
    ParticleSystem::UpdateOcclusionQuery(this, fxSystem->msecDelta, &fxSystem->camera);
  return ParticleSystem::CullSystemDraw(this, &fxSystem->camera);
}

/*
==============
ParticleSystem::UpdateOcclusionFade
==============
*/
void ParticleSystem::UpdateOcclusionFade(ParticleSystem *this, const float4 *pos, int msecDelta, const FxCamera *pCamera)
{
  const ParticleModuleInitOcclusionQuery *m_pModuleInitOcclusionQuery; 
  int v10; 
  const ParticleSystemDef *m_pSystemDef; 
  const ParticleSystemDef *v13; 
  const ParticleSystemDef *v14; 
  int numEmitters; 
  ParticleEmitter *m_pEmitters; 
  ParticleEmitter *v17; 
  const ParticleState *ParticleState; 
  ParticleModuleInitSpawnShape *pModuleSpawnShape; 
  const ParticleSystemDef *v21; 
  ParticleEmitter *v22; 
  ParticleEmitter *v23; 
  ParticleModuleInitSpawnShape *SpawnShapeModuleExt; 
  const ParticleEmitterDef *EmitterDef; 
  const ParticleSystem *EmitterTransformWithCameraOffset; 
  const ParticleSystemDef *Def; 
  const ParticleModuleInitOcclusionQuery *v29; 
  float value; 
  int integer; 
  double OcclusionQueryVisibility; 
  __int64 m_localClientNum; 
  unsigned int OcclusionQueryOffscreenRaycastHandle; 
  __int64 v36; 
  __int64 v37; 
  float v40; 
  float v41; 
  float v42; 
  __int128 v43; 
  unsigned int v46; 
  double updated; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  int v51; 
  __int64 v52; 
  int iFadeOutTime; 
  vec3_t position; 
  Bounds outOffset; 

  if ( (ParticleSystem::GetDef(this)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 848, ASSERT_TYPE_ASSERT, "(HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY ))", (const char *)&queryFormat, "HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY )") )
    __debugbreak();
  if ( !this->m_pModuleInitOcclusionQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 849, ASSERT_TYPE_ASSERT, "(m_pModuleInitOcclusionQuery)", (const char *)&queryFormat, "m_pModuleInitOcclusionQuery") )
    __debugbreak();
  m_pModuleInitOcclusionQuery = this->m_pModuleInitOcclusionQuery;
  *(float *)&_XMM11 = FLOAT_1_0;
  v10 = (int)(float)(1000.0 * m_pModuleInitOcclusionQuery->m_fadeInTime);
  iFadeOutTime = (int)(float)(1000.0 * m_pModuleInitOcclusionQuery->m_fadeOutTime);
  if ( this->m_occlusionQueryHandle != 0xFFFF )
  {
    _XMM1 = pos->v;
    LODWORD(position.v[0]) = *(const float4 *)pos->v.m128_f32;
    __asm
    {
      vextractps dword ptr [rsp+130h+position+4], xmm1, 1
      vextractps dword ptr [rsp+130h+position+8], xmm1, 2
    }
    if ( (ParticleSystem::GetDef(this)->flags & 0x80) != 0 )
    {
      if ( !this->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
        __debugbreak();
      m_pSystemDef = this->m_pSystemDef;
      if ( !m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
        __debugbreak();
      v13 = this->m_pSystemDef;
      if ( m_pSystemDef->occlusionOverrideEmitterIndex >= (unsigned int)v13->numEmitters )
      {
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
          __debugbreak();
        v14 = this->m_pSystemDef;
        numEmitters = v14->numEmitters;
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
          __debugbreak();
        LODWORD(v48) = this->m_pSystemDef->occlusionOverrideEmitterIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 865, ASSERT_TYPE_ASSERT, "(unsigned)( GetDef()->occlusionOverrideEmitterIndex ) < (unsigned)( GetDef()->numEmitters )", "GetDef()->occlusionOverrideEmitterIndex doesn't index GetDef()->numEmitters\n\t%i not in [0, %i)", v48, numEmitters) )
          __debugbreak();
      }
      m_pEmitters = this->m_pEmitters;
      v17 = &m_pEmitters[ParticleSystem::GetDef(this)->occlusionOverrideEmitterIndex];
      if ( !ParticleEmitter::GetEmitterDef(v17)->numStates )
      {
        LODWORD(v50) = ParticleEmitter::GetEmitterDef(v17)->numStates;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 868, ASSERT_TYPE_ASSERT, "(unsigned)( 0 ) < (unsigned)( emitter.GetNumStates() )", "0 doesn't index emitter.GetNumStates()\n\t%i not in [0, %i)", 0i64, v50) )
          __debugbreak();
      }
      if ( (v17->m_flags & 0x40) == 0 )
      {
        ParticleState = ParticleEmitter::GetParticleState(v17, 0);
        pModuleSpawnShape = (ParticleModuleInitSpawnShape *)ParticleState->m_spawnShapeTypeModule.pModuleSpawnShape;
        if ( pModuleSpawnShape )
        {
          ParticleModuleInitSpawnShape::GetOffsetForShape(pModuleSpawnShape, ParticleState, (float4 *)&outOffset);
          _XMM2 = _mm128_add_ps(pos->v, *(__m128 *)outOffset.midPoint.v);
          position.v[0] = _XMM2.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rsp+130h+position+4], xmm2, 1
            vextractps dword ptr [rsp+130h+position+8], xmm2, 2
          }
        }
      }
      goto LABEL_52;
    }
    if ( (ParticleSystem::GetDef(this)->flags & 0x8000000) == 0 )
    {
LABEL_52:
      RB_SetOcclusionQueryPosition(this->m_occlusionQueryHandle, &position);
      if ( (this->m_flags & 0x800000000i64) != 0 )
        RB_SetOcclusionQueryDepthHack(this->m_occlusionQueryHandle, 1);
      v29 = this->m_pModuleInitOcclusionQuery;
      _XMM6 = 0i64;
      value = particle_occlusion_query_override_world_size->current.value;
      if ( (v29->m_flags & 0x4000) == 0 && value < 0.0 || particle_occlusion_query_disable_world_size->current.enabled )
      {
        RB_InvalidateOcclusionQuerySize(this->m_occlusionQueryHandle);
      }
      else
      {
        if ( value < 0.0 )
        {
          integer = LODWORD(v29->m_worldSize.v[1]);
          value = v29->m_worldSize.v[0];
        }
        else
        {
          integer = particle_occlusion_query_override_world_size->current.integer;
        }
        RB_SetOcclusionQuerySize(this->m_occlusionQueryHandle, value, *(float *)&integer);
      }
      OcclusionQueryVisibility = RB_GetOcclusionQueryVisibility(this->m_occlusionQueryHandle);
      LODWORD(_XMM11) = LODWORD(OcclusionQueryVisibility);
      if ( this->m_pModuleInitOcclusionQuery->m_offscreenRaycast )
      {
        if ( RB_GetOcclusionQueryOffscreenRaycastSent(this->m_occlusionQueryHandle) && RB_OcclusionQueryUseOffscreenRaycastResult(this->m_occlusionQueryHandle) )
        {
          m_localClientNum = this->m_localClientNum;
          if ( (unsigned int)m_localClientNum >= 2 )
          {
            LODWORD(v50) = 2;
            LODWORD(v48) = this->m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 623, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v48, v50) )
              __debugbreak();
            LODWORD(v52) = 2;
            LODWORD(v49) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 609, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v49, v52) )
              __debugbreak();
          }
          if ( g_particleDeferredPhysicsRayCastResultValid[m_localClientNum][((unsigned __int8)g_particleDeferredPhysicsRayCastIndex[m_localClientNum] - 1) & 1] )
          {
            OcclusionQueryOffscreenRaycastHandle = RB_GetOcclusionQueryOffscreenRaycastHandle(this->m_occlusionQueryHandle);
            v36 = this->m_localClientNum;
            v37 = OcclusionQueryOffscreenRaycastHandle;
            if ( (unsigned int)v36 >= 2 )
            {
              LODWORD(v50) = 2;
              LODWORD(v48) = this->m_localClientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 631, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v48, v50) )
                __debugbreak();
            }
            if ( (unsigned int)v37 >= 0x800 )
            {
              LODWORD(v50) = 2048;
              LODWORD(v48) = v37;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 632, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_RAY_CAST_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_RAY_CAST_LIST_MAX\n\t%i not in [0, %i)", v48, v50) )
                __debugbreak();
            }
            if ( (unsigned int)v36 >= 2 )
            {
              LODWORD(v50) = 2;
              LODWORD(v48) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 609, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v48, v50) )
                __debugbreak();
            }
            _XMM0 = LODWORD(g_particleDeferredPhysicsRayCastCreateList[0][(((unsigned __int8)g_particleDeferredPhysicsRayCastIndex[v36] - 1) & 1) + 2 * v36][v37].results.fraction);
            __asm
            {
              vcmpeqss xmm1, xmm0, xmm7
              vblendvps xmm11, xmm6, xmm7, xmm1
            }
          }
        }
        outOffset.halfSize.v[0] = 0.0;
        outOffset.halfSize.v[1] = 0.0;
        outOffset.halfSize.v[2] = 0.0;
        outOffset.midPoint.v[0] = 0.0;
        outOffset.midPoint.v[1] = 0.0;
        outOffset.midPoint.v[2] = 0.0;
        if ( (ParticleSystem::GetDef(this)->flags & 0x400) != 0 && ParticleSystem::GetDef(this)->sunDistance > 1000000.0 )
        {
          v40 = position.v[0] - pCamera->origin.v[0];
          v43 = LODWORD(position.v[1]);
          v41 = position.v[1] - pCamera->origin.v[1];
          v42 = position.v[2] - pCamera->origin.v[2];
          *(float *)&v43 = (float)((float)(v41 * v41) + (float)(v40 * v40)) + (float)(v42 * v42);
          if ( *(float *)&v43 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
            __debugbreak();
          _XMM1 = v43;
          __asm { vrsqrtss xmm3, xmm1, xmm1 }
          position.v[0] = (float)((float)(*(float *)&_XMM3 * v40) * 1000000.0) + pCamera->origin.v[0];
          position.v[1] = (float)((float)(*(float *)&_XMM3 * v41) * 1000000.0) + pCamera->origin.v[1];
          position.v[2] = (float)((float)(*(float *)&_XMM3 * v42) * 1000000.0) + pCamera->origin.v[2];
        }
        v46 = Particle_AddDeferredPhysicsRayCastCreate(this->m_localClientNum, &pCamera->origin, &position, &outOffset, 8389889);
        RB_OcclusionQueryOffscreenRaycastSent(this->m_occlusionQueryHandle, v46);
      }
      goto LABEL_88;
    }
    if ( !this->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
      __debugbreak();
    v21 = this->m_pSystemDef;
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
      __debugbreak();
    if ( v21->occlusionOverrideEmitterIndex >= (unsigned int)this->m_pSystemDef->numEmitters )
    {
      v51 = ParticleSystem::GetDef(this)->numEmitters;
      LODWORD(v48) = ParticleSystem::GetDef(this)->occlusionOverrideEmitterIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 886, ASSERT_TYPE_ASSERT, "(unsigned)( GetDef()->occlusionOverrideEmitterIndex ) < (unsigned)( GetDef()->numEmitters )", "GetDef()->occlusionOverrideEmitterIndex doesn't index GetDef()->numEmitters\n\t%i not in [0, %i)", v48, v51) )
        __debugbreak();
    }
    v22 = this->m_pEmitters;
    v23 = &v22[ParticleSystem::GetDef(this)->occlusionOverrideEmitterIndex];
    SpawnShapeModuleExt = (ParticleModuleInitSpawnShape *)ParticleEmitter::GetSpawnShapeModuleExt(v23, 0);
    if ( !SpawnShapeModuleExt )
    {
      ParticleEmitter::GetEmitterDef(v23);
      Def = ParticleSystem::GetDef(this);
      Com_PrintWarning(21, "WARNING: 'Override System Location' requires valid spawn shape: %s, %s\n", Def->name, (const char *)&queryFormat.fmt + 3);
      goto LABEL_52;
    }
    ParticleModuleInitSpawnShape::GetOffsetForShape(SpawnShapeModuleExt, v23, (float4 *)&outOffset);
    EmitterDef = ParticleEmitter::GetEmitterDef(v23);
    if ( EmitterDef->numStates <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 896, ASSERT_TYPE_ASSERT, "( ( emitterDef->numStates > 0 ) )", "( emitterDef->GetName() ) = %s", (const char *)&queryFormat.fmt + 3) )
      __debugbreak();
    if ( (EmitterDef->stateDefs->flags & 2) != 0 )
    {
      if ( (EmitterDef->stateDefs->flags & 0x10000000) == 0 )
      {
        EmitterTransformWithCameraOffset = (const ParticleSystem *)ParticleEmitter::GetEmitterTransformWithCameraOffset(v23);
        goto LABEL_50;
      }
    }
    else if ( (EmitterDef->stateDefs->flags & 0x10000000) == 0 )
    {
      EmitterTransformWithCameraOffset = ParticleEmitter::GetSystemOwner(v23);
LABEL_50:
      _XMM1 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)outOffset.midPoint.v, *(__m128 *)outOffset.midPoint.v, 0), EmitterTransformWithCameraOffset->m_systemTransform.x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)outOffset.midPoint.v, *(__m128 *)outOffset.midPoint.v, 85), EmitterTransformWithCameraOffset->m_systemTransform.y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)outOffset.midPoint.v, *(__m128 *)outOffset.midPoint.v, 170), EmitterTransformWithCameraOffset->m_systemTransform.z.v), EmitterTransformWithCameraOffset->m_systemTransform.w.v)));
      position.v[0] = _XMM1.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rsp+130h+position+4], xmm1, 1
        vextractps dword ptr [rsp+130h+position+8], xmm1, 2
      }
      goto LABEL_52;
    }
    EmitterTransformWithCameraOffset = (const ParticleSystem *)ParticleEmitter::GetEmitterTransformWithCameraOffsetPosOnly(v23);
    goto LABEL_50;
  }
LABEL_88:
  if ( msecDelta < 0 )
    msecDelta = 0;
  updated = R_UpdateOverTime(this->m_occlusionFade, *(float *)&_XMM11, v10, iFadeOutTime, msecDelta);
  this->m_occlusionFade = *(float *)&updated;
}

/*
==============
ParticleSystem::UpdateOcclusionQuery
==============
*/
void ParticleSystem::UpdateOcclusionQuery(ParticleSystem *this, int msecDelta, const FxCamera *pCamera)
{
  int v6; 
  __int64 v7; 
  ParticleEmitter *m_pEmitters; 

  if ( (ParticleSystem::GetDef(this)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2205, ASSERT_TYPE_ASSERT, "(HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY ))", (const char *)&queryFormat, "HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY )") )
    __debugbreak();
  v6 = 0;
  if ( this->m_pSystemDef->numEmitters <= 0 )
  {
LABEL_9:
    ParticleSystem::FreeOcclusionQuery(this);
  }
  else
  {
    v7 = 0i64;
    while ( 1 )
    {
      m_pEmitters = this->m_pEmitters;
      if ( (m_pEmitters[v7].m_flags & 0x40) == 0 && (ParticleEmitter::GetEmitterDef(&m_pEmitters[v6])->flags & 0x400) != 0 )
        break;
      ++v6;
      ++v7;
      if ( v6 >= this->m_pSystemDef->numEmitters )
        goto LABEL_9;
    }
    if ( this->m_occlusionQueryHandle == 0xFFFF )
      ParticleSystem::AllocOcclusionQuery(this, this->m_localClientNum);
    else
      ParticleSystem::UpdateOcclusionFade(this, &this->m_systemTransform.w, msecDelta, pCamera);
  }
}

/*
==============
ParticleSystem::UpdateScriptedInputs
==============
*/
void ParticleSystem::UpdateScriptedInputs(ParticleSystem *this)
{
  ;
}

