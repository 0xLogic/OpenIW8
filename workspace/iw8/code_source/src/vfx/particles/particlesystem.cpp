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
  __int128 v20; 
  __int128 v21; 

  __asm
  {
    vmaxss  xmm4, xmm3, [rsp+28h+height]
    vmovups xmm0, xmmword ptr [r8]
    vshufps xmm1, xmm0, xmm0, 55h ; 'U'
    vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
  }
  HIDWORD(v20) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    vmovups xmmword ptr [rsp], xmm3
  }
  HIDWORD(v21) = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp]
    vmovss  xmm0, xmm0, xmm4
    vinsertps xmm0, xmm0, xmm4, 10h
    vinsertps xmm0, xmm0, xmm4, 20h ; ' '
    vsubps  xmm1, xmm3, xmm0
    vaddps  xmm2, xmm3, xmm0
    vminps  xmm0, xmm1, xmmword ptr [rdx]
    vmovups xmmword ptr [rdx], xmm0
    vmaxps  xmm0, xmm2, xmmword ptr [rdx+10h]
    vmovups xmmword ptr [rdx+10h], xmm0
  }
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
  __int64 v28; 
  vector4 outMatrix; 
  float4 lookAtInput; 
  char v32; 

  __asm { vmovaps [rsp+0B8h+var_18], xmm6 }
  if ( (ParticleSystem::GetDef(this)->flags & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2236, ASSERT_TYPE_ASSERT, "(HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_ALIGN_TO_SUN ))", (const char *)&queryFormat, "HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_ALIGN_TO_SUN )") )
    __debugbreak();
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2237, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  ParticleSystem::GetDef(this);
  __asm
  {
    vmovups xmm6, cs:__xmm@3f800000000000000000000000000000
    vinsertps xmm6, xmm6, dword ptr [rax+38h], 10h
  }
  ActiveStageIndex = R_GetActiveStageIndex(&pCamera->origin);
  StageByIndex = R_GetStageByIndex(ActiveStageIndex);
  if ( !StageByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2248, ASSERT_TYPE_ASSERT, "(stage)", (const char *)&queryFormat, "stage") )
    __debugbreak();
  sunPrimaryLightIndex = StageByIndex->sunPrimaryLightIndex;
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  if ( (unsigned int)sunPrimaryLightIndex >= comWorld.primaryLightCount )
  {
    LODWORD(v28) = sunPrimaryLightIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v28, comWorld.primaryLightCount) )
      __debugbreak();
  }
  _RBX = &comWorld.primaryLights[sunPrimaryLightIndex];
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2250, ASSERT_TYPE_ASSERT, "(light)", (const char *)&queryFormat, "light") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+2Ch] }
  lookAtInput.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+0B8h+lookAtInput.v]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rbx+30h], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+34h], 20h ; ' '
    vmovups xmmword ptr [rsp+0B8h+lookAtInput.v], xmm3
    vmovups xmmword ptr [rsp+0B8h+lookAtInput.v], xmm3
  }
  Particle_GenerateMatrixFromLookAt(&lookAtInput, &outMatrix);
  __asm
  {
    vshufps xmm3, xmm6, xmm6, 55h ; 'U'
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vmulps  xmm1, xmm1, xmmword ptr [rsp+0B8h+outMatrix.z.v]
    vaddps  xmm2, xmm1, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
    vmulps  xmm1, xmm3, xmmword ptr [rsp+0B8h+outMatrix.y.v]
    vaddps  xmm3, xmm1, xmm2
    vshufps xmm4, xmm6, xmm6, 0
    vmulps  xmm1, xmm4, xmmword ptr [rsp+0B8h+outMatrix.x.v]
    vaddps  xmm2, xmm1, xmm3
    vmovups [rsp+0B8h+var_48], xmm2
  }
  ParticleSystem::SetSystemTransform(this, &outMatrix);
  _R11 = &v32;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
ParticleSystem::AllocOcclusionQuery
==============
*/
void ParticleSystem::AllocOcclusionQuery(ParticleSystem *this, LocalClientNum_t localClientNum)
{
  unsigned __int16 v6; 

  if ( (ParticleSystem::GetDef(this)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2169, ASSERT_TYPE_ASSERT, "(HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY ))", (const char *)&queryFormat, "HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY )") )
    __debugbreak();
  if ( !this->m_pModuleInitOcclusionQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2170, ASSERT_TYPE_ASSERT, "(m_pModuleInitOcclusionQuery)", (const char *)&queryFormat, "m_pModuleInitOcclusionQuery") )
    __debugbreak();
  if ( this->m_occlusionQueryHandle != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2171, ASSERT_TYPE_ASSERT, "(GetOcclusionQueryHandle() == 0xffff)", (const char *)&queryFormat, "GetOcclusionQueryHandle() == OQ_HANDLE_NONE") )
    __debugbreak();
  _RAX = this->m_pModuleInitOcclusionQuery;
  __asm { vmovss  xmm3, dword ptr [rax+8]; depthBias }
  v6 = RB_AllocOcclusionQuery(localClientNum, NULL, 1, *(float *)&_XMM3);
  this->m_occlusionQueryHandle = v6;
  if ( v6 == 0xFFFF )
  {
    this->m_occlusionFade = 1.0;
  }
  else
  {
    _RDX = this->m_pModuleInitOcclusionQuery;
    this->m_occlusionFade = 0.0;
    if ( (_RDX->m_flags & 0x4000) != 0 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rdx+20h]; height
        vmovss  xmm1, dword ptr [rdx+1Ch]; width
      }
      RB_SetOcclusionQuerySize(v6, *(float *)&_XMM1, *(float *)&_XMM2);
    }
  }
}

/*
==============
ParticleSystem::ApplyScaleModifiers
==============
*/
float4 *ParticleSystem::ApplyScaleModifiers(ParticleSystem *this, float4 *result, const float4 *baseSize, const int lerpValueSeed, const float4 *defaultLerpValue, const bool useUniformInterpolationScaling)
{
  float4 *v22; 

  _RBP = baseSize;
  _RDI = result;
  _RBX = this;
  _RSI = lerpValueSeed;
  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 322, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  if ( (int)_RSI < 0 )
  {
    _RAX = defaultLerpValue;
    __asm { vmovups xmm6, xmmword ptr [rax] }
  }
  else
  {
    _RCX = fx_randomTable;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( useUniformInterpolationScaling )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rsi*4+0E0h]
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
  if ( (_RBX->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 316, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  v22 = _RDI;
  if ( _RBX->m_scaleOptions == PARTICLE_USE_SCALE_OPTION_MULT )
  {
    __asm
    {
      vmovups xmm2, xmmword ptr [rbx+0D0h]
      vmovups xmm0, xmmword ptr [rbx+0E0h]
      vsubps  xmm0, xmm0, xmm2
      vmulps  xmm1, xmm0, xmm6
      vaddps  xmm2, xmm1, xmm2
      vmulps  xmm3, xmm2, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rdi], xmm3
    }
  }
  else if ( _RBX->m_scaleOptions == PARTICLE_USE_SCALE_OPTION_OVERRIDE )
  {
    __asm
    {
      vmovups xmm2, xmmword ptr [rbx+0D0h]
      vmovups xmm0, xmmword ptr [rbx+0E0h]
      vsubps  xmm0, xmm0, xmm2
      vmulps  xmm1, xmm0, xmm6
      vaddps  xmm2, xmm1, xmm2
      vmovups xmmword ptr [rdi], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rdi], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return v22;
}

/*
==============
ParticleSystem::ApplyScaleModifiers
==============
*/
float4 *ParticleSystem::ApplyScaleModifiers(ParticleSystem *this, float4 *result, const float4 *baseSize, const int lerpValueSeed, const bool useUniformInterpolationScaling)
{
  float4 *v20; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  _RBP = baseSize;
  _RSI = lerpValueSeed;
  _RDI = result;
  _RBX = this;
  __asm { vmovdqa xmm6, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf }
  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 322, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  if ( (int)_RSI >= 0 )
  {
    _RCX = fx_randomTable;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( useUniformInterpolationScaling )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rsi*4+0E0h]
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
  if ( (_RBX->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 316, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  v20 = _RDI;
  if ( _RBX->m_scaleOptions == PARTICLE_USE_SCALE_OPTION_MULT )
  {
    __asm
    {
      vmovups xmm2, xmmword ptr [rbx+0D0h]
      vmovups xmm0, xmmword ptr [rbx+0E0h]
      vsubps  xmm0, xmm0, xmm2
      vmulps  xmm1, xmm0, xmm6
      vaddps  xmm2, xmm1, xmm2
      vmulps  xmm3, xmm2, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rdi], xmm3
    }
  }
  else if ( _RBX->m_scaleOptions == PARTICLE_USE_SCALE_OPTION_OVERRIDE )
  {
    __asm
    {
      vmovups xmm2, xmmword ptr [rbx+0D0h]
      vmovups xmm0, xmmword ptr [rbx+0E0h]
      vsubps  xmm0, xmm0, xmm2
      vmulps  xmm1, xmm0, xmm6
      vaddps  xmm2, xmm1, xmm2
      vmovups xmmword ptr [rdi], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rdi], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return v20;
}

/*
==============
ParticleSystem::ApplyVelocityModifiers
==============
*/
float4 *ParticleSystem::ApplyVelocityModifiers(ParticleSystem *this, float4 *result, const float4 *baseVelocity, const int lerpValueSeed)
{
  float4 *v14; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  _RBP = baseVelocity;
  _RDI = result;
  _RBX = this;
  __asm { vmovdqa xmm6, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf }
  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 338, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  if ( lerpValueSeed >= 0 )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0D4h], 0
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0D8h], 10h
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0DCh], 20h ; ' '
    }
  }
  if ( (_RBX->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 332, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  v14 = _RDI;
  if ( _RBX->m_velocityOptions == PARTICLE_USE_VELOCITY_OPTION_MULT )
  {
    __asm
    {
      vmovups xmm2, xmmword ptr [rbx+0B0h]
      vmovups xmm0, xmmword ptr [rbx+0C0h]
      vsubps  xmm0, xmm0, xmm2
      vmulps  xmm1, xmm0, xmm6
      vaddps  xmm2, xmm1, xmm2
      vmulps  xmm3, xmm2, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rdi], xmm3
    }
  }
  else if ( _RBX->m_velocityOptions == PARTICLE_USE_VELOCITY_OPTION_OVERRIDE )
  {
    __asm
    {
      vmovups xmm2, xmmword ptr [rbx+0B0h]
      vmovups xmm0, xmmword ptr [rbx+0C0h]
      vsubps  xmm0, xmm0, xmm2
      vmulps  xmm1, xmm0, xmm6
      vaddps  xmm2, xmm1, xmm2
      vmovups xmmword ptr [rdi], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rdi], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return v14;
}

/*
==============
ParticleSystem::ApplyVelocityModifiers
==============
*/
float4 *ParticleSystem::ApplyVelocityModifiers(ParticleSystem *this, float4 *result, const float4 *baseVelocity, const int lerpValueSeed, const float4 *defaultLerpValue)
{
  float4 *v16; 

  _RBP = baseVelocity;
  _RDI = result;
  _RBX = this;
  if ( (this->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 338, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  if ( lerpValueSeed < 0 )
  {
    _RAX = defaultLerpValue;
    __asm { vmovups xmm6, xmmword ptr [rax] }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0D4h], 0
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0D8h], 10h
      vinsertps xmm6, xmm6, dword ptr [rcx+rsi*4+0DCh], 20h ; ' '
    }
  }
  if ( (_RBX->m_flags & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 332, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_HAS_MODIFIERS )") )
    __debugbreak();
  v16 = _RDI;
  if ( _RBX->m_velocityOptions == PARTICLE_USE_VELOCITY_OPTION_MULT )
  {
    __asm
    {
      vmovups xmm2, xmmword ptr [rbx+0B0h]
      vmovups xmm0, xmmword ptr [rbx+0C0h]
      vsubps  xmm0, xmm0, xmm2
      vmulps  xmm1, xmm0, xmm6
      vaddps  xmm2, xmm1, xmm2
      vmulps  xmm3, xmm2, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rdi], xmm3
    }
  }
  else if ( _RBX->m_velocityOptions == PARTICLE_USE_VELOCITY_OPTION_OVERRIDE )
  {
    __asm
    {
      vmovups xmm2, xmmword ptr [rbx+0B0h]
      vmovups xmm0, xmmword ptr [rbx+0C0h]
      vsubps  xmm0, xmm0, xmm2
      vmulps  xmm1, xmm0, xmm6
      vaddps  xmm2, xmm1, xmm2
      vmovups xmmword ptr [rdi], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rdi], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return v16;
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

  m_localClientNum = this->m_localClientNum;
  _RDI = this;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  _RCX = 314624 * m_localClientNum;
  _RAX = &g_particleManager[0].m_cameraTransform.w;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+rax]
    vsubps  xmm1, xmm0, xmmword ptr [rdi+30h]
    vmulps  xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vmovss  dword ptr [rdi+1C4h], xmm1
  }
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
  const dvar_t *v5; 
  char v9; 
  char v10; 
  unsigned int frustumPlaneCount; 
  float4 posWorld; 

  _RSI = this;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2097, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  v5 = particle_system_culling_draw;
  if ( !particle_system_culling_draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    return 0;
  _RAX = ParticleSystem::GetDef(_RSI);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm3, dword ptr [rax+30h]; radius
    vcomiss xmm3, xmm0
  }
  if ( v9 | v10 )
    return 0;
  __asm { vmovups xmm1, xmmword ptr [rsi+30h] }
  frustumPlaneCount = pCamera->frustumPlaneCount;
  posWorld.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+58h+posWorld.v]
    vmovss  xmm0, xmm0, xmm1
    vshufps xmm2, xmm1, xmm1, 55h ; 'U'
    vinsertps xmm0, xmm0, xmm2, 10h
    vshufps xmm4, xmm1, xmm1, 0AAh ; 'ª'
    vinsertps xmm0, xmm0, xmm4, 20h ; ' '
    vmovups xmmword ptr [rsp+58h+posWorld.v], xmm0
    vmovups xmmword ptr [rsp+58h+posWorld.v], xmm0
  }
  return FX_CullSphere(pCamera, frustumPlaneCount, &posWorld, *(float *)&_XMM3, 1);
}

/*
==============
ParticleSystem::DebugDraw
==============
*/
void ParticleSystem::DebugDraw(ParticleSystem *this, const int currentTime, const FxCamera *pCamera)
{
  const dvar_t *v4; 
  int i; 
  const dvar_t *v13; 
  char v30; 
  char v31; 
  const ParticleSystemDef *Def; 
  char *fmt; 
  vec3_t center; 
  tmat33_t<vec3_t> axis; 
  char dest[1024]; 

  v4 = particle_debug_draw_frustum_cull_radius;
  _RDI = this;
  if ( !particle_debug_draw_frustum_cull_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rdi+30h]
      vmovss  dword ptr [rsp+4A8h+center], xmm1
      vextractps dword ptr [rsp+4A8h+center+4], xmm1, 1
      vextractps dword ptr [rsp+4A8h+center+8], xmm1, 2
    }
    _RAX = ParticleSystem::GetDef(_RDI);
    __asm { vmovss  xmm1, dword ptr [rax+30h]; radius }
    Particle_DebugSphere(&center, *(float *)&_XMM1, &colorOrangeHeat, 1, 0);
    _RAX = ParticleSystem::GetDef(_RDI);
    __asm { vmovss  xmm1, dword ptr [rax+34h]; radius }
    Particle_DebugSphere(&center, *(float *)&_XMM1, &colorGreenFaded, 1, 0);
  }
  for ( i = 0; i < _RDI->m_pSystemDef->numEmitters; ++i )
    ParticleEmitter::DebugDraw(&_RDI->m_pEmitters[i]);
  v13 = particle_debug_draw_systems;
  if ( !particle_debug_draw_systems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled && pCamera )
  {
    __asm { vmovups xmm2, xmmword ptr [rdi+30h] }
    _RBX = particle_debug_draw_systems_distance;
    __asm
    {
      vmovaps [rsp+4A8h+var_28], xmm6
      vshufps xmm0, xmm2, xmm2, 55h ; 'U'
      vshufps xmm1, xmm2, xmm2, 0AAh ; 'ª'
      vsubss  xmm3, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+4A8h+center+4], xmm0
      vsubss  xmm0, xmm0, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+4A8h+center], xmm2
      vsubss  xmm2, xmm2, dword ptr [rsi]
      vmovss  dword ptr [rsp+4A8h+center+8], xmm1
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vcvttss2si rsi, xmm0
    }
    if ( !particle_debug_draw_systems_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, rax
      vcomiss xmm6, dword ptr [rbx+28h]
    }
    if ( v30 | v31 )
    {
      Def = ParticleSystem::GetDef(_RDI);
      LODWORD(fmt) = _RSI;
      Com_sprintf(dest, 0x400ui64, "%s (%d)", Def->name, fmt);
      __asm { vcomiss xmm6, cs:__real@41200000 }
      if ( v30 )
        __asm { vmovss  xmm6, cs:__real@3d4ccccd }
      else
        __asm { vmulss  xmm6, xmm6, cs:__real@3ae56042 }
      __asm { vmovaps xmm2, xmm6; scale }
      CL_AddDebugString(&center, &colorWhiteFaded, *(float *)&_XMM2, dest, 0, 1);
      __asm
      {
        vmovups xmm2, xmmword ptr [rdi+10h]
        vmovups xmm1, xmmword ptr [rdi]
        vmovss  dword ptr [rsp+4A8h+axis+0Ch], xmm2
        vextractps dword ptr [rsp+4A8h+axis+10h], xmm2, 1
        vextractps dword ptr [rsp+4A8h+axis+14h], xmm2, 2
        vmovups xmm2, xmmword ptr [rdi+20h]
        vmovaps xmm3, xmm6; size
        vmovss  dword ptr [rsp+4A8h+axis+18h], xmm2
        vextractps dword ptr [rsp+4A8h+axis+1Ch], xmm2, 1
        vextractps dword ptr [rsp+4A8h+axis+20h], xmm2, 2
        vmovss  dword ptr [rsp+4A8h+axis], xmm1
        vextractps dword ptr [rsp+4A8h+axis+4], xmm1, 1
        vextractps dword ptr [rsp+4A8h+axis+8], xmm1, 2
      }
      CL_AddOrientedDebugStar(&center, &axis, &colorWhiteFaded, *(float *)&_XMM3, 1, 0);
    }
    __asm { vmovaps xmm6, [rsp+4A8h+var_28] }
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
  bool v5; 
  FxDrawState *v7; 
  int v10; 
  unsigned int v11; 
  __int64 NumActiveLightGrids; 
  char v13; 
  char v14; 
  const GfxGpuLightGrid **ActiveLightGridsList; 
  __int64 v21; 
  int v22; 
  const GfxGpuLightGrid **v23; 
  const ParticleSystemDef *m_pSystemDef; 
  __int64 v30; 
  ParticleEmitter *v31; 
  unsigned int m_flags; 
  __int64 v45; 
  vec3_t pos; 
  Bounds bounds; 
  BuildBounds umbraBoundsAccumulator; 
  BuildBounds lightingBoundsAccumulator; 

  v5 = transShadowPass;
  v7 = pDrawState;
  _RBX = this;
  if ( !pDrawState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 572, ASSERT_TYPE_ASSERT, "(pDrawState)", (const char *)&queryFormat, "pDrawState") )
    __debugbreak();
  if ( !_RBX->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 573, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  if ( fx_umbra_culling->current.enabled )
    goto LABEL_12;
  if ( (ParticleSystem::GetDef(_RBX)->flags & 0x40) != 0 && !v5 )
    ParticleSystem::UpdateOcclusionQuery(_RBX, v7->system->msecDelta, v7->camera);
  if ( !ParticleSystem::CullSystemDraw(_RBX, v7->camera) )
  {
LABEL_12:
    __asm { vmovups xmm1, xmmword ptr [rbx+30h] }
    v7->fovCullBlendFactor = 1.0;
    __asm
    {
      vmovss  dword ptr [rbp+57h+pos], xmm1
      vextractps dword ptr [rbp+57h+pos+4], xmm1, 1
      vextractps dword ptr [rbp+57h+pos+8], xmm1, 2
    }
    if ( (ParticleSystem::GetDef(_RBX)->flags & 0x4000000) == 0 || !Particle_CullCone(v7->camera, &pos, &v7->fovCullBlendFactor) )
    {
      v10 = 0;
      v11 = 0;
      NumActiveLightGrids = R_GetNumActiveLightGrids(backEndData);
      ActiveLightGridsList = R_GetActiveLightGridsList(backEndData);
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+1CCh]
        vmovsd  xmm0, qword ptr [rbx+1DCh]
        vmovups xmmword ptr [rbp+57h+bounds.midPoint], xmm1
        vshufps xmm1, xmm1, xmm1, 0FFh
        vxorps  xmm2, xmm2, xmm2
        vcomiss xmm1, xmm2
        vmovsd  qword ptr [rbp+57h+bounds.halfSize+4], xmm0
      }
      if ( v13 | v14 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+bounds.halfSize+4]
          vcomiss xmm0, xmm2
        }
        if ( v13 | v14 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+bounds.halfSize+8]
            vcomiss xmm0, xmm2
          }
          if ( v13 | v14 )
          {
            __asm
            {
              vmovups xmm2, xmmword ptr [rbx+30h]
              vmovss  xmm0, cs:__real@42c80000
              vmovss  dword ptr [rbp+57h+bounds.midPoint], xmm2
              vextractps dword ptr [rbp+57h+bounds.midPoint+4], xmm2, 1
              vextractps dword ptr [rbp+57h+bounds.midPoint+8], xmm2, 2
              vmovss  dword ptr [rbp+57h+bounds.halfSize], xmm0
              vmovss  dword ptr [rbp+57h+bounds.halfSize+4], xmm0
              vmovss  dword ptr [rbp+57h+bounds.halfSize+8], xmm0
            }
          }
        }
      }
      v45 = NumActiveLightGrids;
      if ( (int)NumActiveLightGrids > 0 )
      {
        v21 = 0i64;
        v22 = 1;
        v23 = ActiveLightGridsList;
        do
        {
          if ( Bounds_IntersectGpuLightGrid(&bounds, v23[v21]) )
            v11 |= v22;
          v22 = __ROL4__(v22, 1);
          ++v21;
        }
        while ( v21 < v45 );
        v7 = pDrawState;
        v5 = transShadowPass;
      }
      __asm { vmovups xmm4, cs:__xmm@7f7fffff7f7fffff7f7fffff7f7fffff }
      m_pSystemDef = _RBX->m_pSystemDef;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vsubps  xmm5, xmm0, xmm4
        vsubps  xmm3, xmm0, xmm4
        vmovups xmmword ptr [rbp+57h+umbraBoundsAccumulator.maxs.v], xmm5
        vmovups xmmword ptr [rbp+57h+var_70.maxs.v], xmm3
        vmovups xmmword ptr [rbp+57h+umbraBoundsAccumulator.mins.v], xmm4
        vmovups xmmword ptr [rbp+57h+var_70.mins.v], xmm4
        vmovups xmm1, xmm4
      }
      if ( m_pSystemDef->numEmitters > 0 )
      {
        v30 = 0i64;
        do
        {
          v31 = &_RBX->m_pEmitters[v30];
          m_flags = v31->m_flags;
          if ( (m_flags & 0x40) == 0 && (m_flags & 1) == 0 && (m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(v31)->flags & 1) == 0 && (!v5 || (ParticleEmitter::GetEmitterDef(&_RBX->m_pEmitters[v10])->flags & 0x800) != 0) )
            ParticleEmitter::DrawSpriteParticles(&_RBX->m_pEmitters[v10], v7, v11, v5, &umbraBoundsAccumulator, &lightingBoundsAccumulator);
          ++v10;
          ++v30;
        }
        while ( v10 < _RBX->m_pSystemDef->numEmitters );
        __asm
        {
          vmovups xmm5, xmmword ptr [rbp+57h+umbraBoundsAccumulator.maxs.v]
          vmovups xmm4, xmmword ptr [rbp+57h+umbraBoundsAccumulator.mins.v]
          vmovups xmm3, xmmword ptr [rbp+57h+var_70.maxs.v]
          vmovups xmm1, xmmword ptr [rbp+57h+var_70.mins.v]
        }
      }
      __asm
      {
        vaddps  xmm0, xmm1, xmm3
        vmulps  xmm2, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovss  dword ptr [rbx+1CCh], xmm2
        vextractps dword ptr [rbx+1D0h], xmm2, 1
        vextractps dword ptr [rbx+1D4h], xmm2, 2
        vsubps  xmm1, xmm2, xmm1
        vsubps  xmm0, xmm3, xmm2
        vmaxps  xmm3, xmm1, xmm0
        vmovss  dword ptr [rbx+1D8h], xmm3
        vextractps dword ptr [rbx+1DCh], xmm3, 1
        vextractps dword ptr [rbx+1E0h], xmm3, 2
      }
      if ( fx_umbra_culling->current.enabled )
      {
        __asm
        {
          vaddps  xmm0, xmm4, xmm5
          vmulps  xmm2, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
          vsubps  xmm1, xmm2, xmm4
          vsubps  xmm0, xmm5, xmm2
          vmaxps  xmm3, xmm1, xmm0
        }
        if ( v5 )
        {
          _R8 = &_RBX->m_umbraBoundsTransShadow;
          __asm
          {
            vmovss  dword ptr [r8], xmm2
            vextractps dword ptr [r8+4], xmm2, 1
            vextractps dword ptr [r8+8], xmm2, 2
            vmovss  dword ptr [r8+0Ch], xmm3
            vextractps dword ptr [r8+10h], xmm3, 1
            vextractps dword ptr [r8+14h], xmm3, 2
          }
          R_AddBoundsToCodeSurfGlob(v7->codeSurfGlob, backEndData, &_RBX->m_umbraBoundsTransShadow);
        }
        else
        {
          __asm
          {
            vmovss  dword ptr [rbx+1E4h], xmm2
            vextractps dword ptr [rbx+1E8h], xmm2, 1
            vextractps dword ptr [rbx+1ECh], xmm2, 2
            vmovss  dword ptr [rbx+1F0h], xmm3
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
  _RDI = endPos;
  _RSI = startPos;
  _RBX = this;
  if ( !this->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1196, ASSERT_TYPE_ASSERT, "(m_pEmitters)", (const char *)&queryFormat, "m_pEmitters") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+0F0h]
    vmovdqa xmmword ptr [rsi], xmm0
    vmovups xmm1, xmmword ptr [rbx+100h]
    vmovdqa xmmword ptr [rdi], xmm1
  }
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
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+30h]
    vsubps  xmm0, xmm0, xmmword ptr [rcx+0A0h]
    vmovups xmmword ptr [rdx], xmm0
  }
}

/*
==============
ParticleSystem::HandleMyChanges
==============
*/
void ParticleSystem::HandleMyChanges(ParticleSystem *this)
{
  __int64 m_localClientNum; 
  ParticleSystem *systemOrientationMat; 
  ParticleManager *v3; 
  const FxCamera *pCamera; 
  XAssetHeader v5; 
  char v6; 
  bool v7; 
  const ParticleSystemDef *Def; 
  int dobjHandle; 
  unsigned int boneIndex; 
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
  systemOrientationMat = this;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  v3 = &g_particleManager[m_localClientNum];
  if ( !v3->m_pFxSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 550, ASSERT_TYPE_ASSERT, "(GetFxSystem())", (const char *)&queryFormat, "GetFxSystem()") )
    __debugbreak();
  pCamera = &v3->m_pFxSystem->camera;
  v5.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_VFX, systemOrientationMat->m_pSystemDef->name, 1).physicsLibrary;
  systemOrientationMat->m_pSystemDef = v5.vfx;
  if ( !v5.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1289, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
    __debugbreak();
  v6 = systemOrientationMat->m_flags & 1;
  v7 = (systemOrientationMat->m_flags & 0x200000) != 0;
  if ( (systemOrientationMat->m_flags & 0x200000) != 0 )
  {
    if ( !v6 )
    {
      Def = ParticleSystem::GetDef(systemOrientationMat);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1294, ASSERT_TYPE_ASSERT, "(!hasBoltOffset || isBolted)", "%s\n\tVFX ASSERT for effect: %s\n", "!hasBoltOffset || isBolted", Def->name) )
        __debugbreak();
      goto LABEL_14;
    }
LABEL_19:
    dobjHandle = *(_DWORD *)&systemOrientationMat->m_bolt.FxBoltBase & 0xFFF;
    boneIndex = (unsigned __int16)(*(_DWORD *)&systemOrientationMat->m_bolt.FxBoltBase >> 14);
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
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx+150h]
      vmovups xmm0, xmmword ptr [rbx+160h]
      vmovss  dword ptr [rsp+0F8h+var_60.origin], xmm1
      vextractps dword ptr [rsp+0F8h+var_60.origin+4], xmm1, 1
      vextractps dword ptr [rsp+0F8h+var_60.origin+8], xmm1, 2
      vmovups xmmword ptr [rsp+0F8h+quat], xmm0
    }
    QuatToAxis(&quat, &v22.axis);
    boltOffset = &v22;
  }
  else
  {
    boltOffset = NULL;
  }
  archiveState = v3->m_archiveState;
  particleSystemFlags = systemOrientationMat->m_flags;
  spawnTime = CG_GetLocalClientTime((const LocalClientNum_t)systemOrientationMat->m_localClientNum);
  parentSystemHandle = systemOrientationMat->m_parentSystemHandle;
  if ( systemOrientationMat->m_systemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 196, ASSERT_TYPE_ASSERT, "(m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  ParticleSystem::Init(systemOrientationMat, systemOrientationMat->m_localClientNum, systemOrientationMat->m_pSystemDef, systemOrientationMat->m_systemHandle, parentSystemHandle, &systemOrientationMat->m_systemTransform.w, &systemOrientationMat->m_systemTransform, spawnTime, particleSystemFlags, dobjHandle, boneIndex, boltOffset, pCamera, NULL, (scr_string_t)0, archiveState);
  m_spawnTime = systemOrientationMat->m_spawnTime;
  if ( m_spawnTime >= 0 )
  {
    systemOrientationMat->m_lastUpdateTime = m_spawnTime;
    systemOrientationMat->m_flags |= 0x1000000ui64;
  }
  else
  {
    if ( !ParticleSystem::PreRoll(systemOrientationMat, m_spawnTime, pCamera) )
    {
      *(_QWORD *)&systemOrientationMat->m_spawnTime = 0i64;
      systemOrientationMat->m_flags |= 0x1000000ui64;
      v18 = ParticleSystem::GetDef(systemOrientationMat);
      Com_PrintWarning(21, "Pre-roll on effect %s has failed.\n", v18->name);
    }
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    if ( BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) )
      systemOrientationMat->m_flags |= 0x800000ui64;
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
  signed int v27; 
  const dvar_t *v31; 
  ParticleManager *ParticleManager; 
  bool result; 
  __int64 v34; 

  _RBX = this;
  if ( !pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 135, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
    __debugbreak();
  if ( _RBX->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 136, ASSERT_TYPE_ASSERT, "(m_pEmitters == 0)", (const char *)&queryFormat, "m_pEmitters == NULL") )
    __debugbreak();
  MarkSpawnData = 0;
  _RBX->m_pSystemDef = pSystemDef;
  _RBX->m_flags = PARTICLE_SYSTEM_FLAG_NONE;
  _RBX->m_localClientNum = localClientNum;
  preRollMSec = pSystemDef->preRollMSec;
  if ( preRollMSec )
    v22 = -preRollMSec;
  else
    v22 = spawnTime;
  _RBX->m_spawnTime = v22;
  _RBX->m_loopTime = v22;
  if ( particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 152, ASSERT_TYPE_ASSERT, "(particleSystemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "particleSystemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  _RBX->m_occlusionQueryHandle = -1;
  _RBX->m_systemHandle = particleSystemHandle;
  _RBX->m_parentSystemHandle = parentSystemHandle;
  _RBX->m_loopedFxEnt = -1;
  _RBX->m_fxEnt = 2047;
  _RBX->m_pModuleInitOcclusionQuery = NULL;
  _RBX->m_weaponHeat = -1;
  if ( !pSystemDef->numEmitters )
    goto LABEL_50;
  v23 = (ParticleEmitter *)ParticleManager::ParticleSystemAllocAndClear(localClientNum, 560i64 * _RBX->m_pSystemDef->numEmitters);
  _RBX->m_pEmitters = v23;
  if ( !v23 )
  {
    Com_PrintError(21, "Could not allocate %d Particle Emitters. Please increase PARTICLE_SYSTEM_POOL.\n", (unsigned int)_RBX->m_pSystemDef->numEmitters);
LABEL_50:
    _RBX->m_isRunning = 0;
    return 0;
  }
  _RBX->m_isRunning = 1;
  _RBX->m_flags = particleSystemFlags & 0xFFFFFFFFFFBFFF7Fui64;
  if ( (ParticleSystem::GetDef(_RBX)->flags & 0x4000) != 0 )
    v24 = (16361 * ((unsigned int)(214013 * spawnTime + 2531011) >> 17)) >> 15;
  else
    v24 = 16361 * rand() / 0x8000;
  _R14 = systemPos;
  _RBX->m_randomSeed = v24;
  ParticleSystem::SetSystemTransform(_RBX, systemPos, systemOrientationMat);
  ParticleSystem::InitBolting(_RBX, dobjHandle, boneIndex, boltOffset, boneName, archiveState);
  m_pSystemDef = _RBX->m_pSystemDef;
  v27 = 0;
  _RBX->m_boltedSpawnPosSet = 0;
  if ( m_pSystemDef->numEmitters > 0 )
  {
    while ( ParticleEmitter::Init(&_RBX->m_pEmitters[v27], _RBX, &m_pSystemDef->emitterDefs[v27], v27) )
    {
      m_pSystemDef = _RBX->m_pSystemDef;
      if ( ++v27 >= m_pSystemDef->numEmitters )
        goto LABEL_21;
    }
    ParticleManager::ParticleSystemFree(localClientNum, _RBX->m_pEmitters);
    return 0;
  }
LABEL_21:
  ParticleSystem::CalculateDistanceToCameraSquared(_RBX);
  if ( _RBX->m_pModuleInitOcclusionQuery )
  {
    ParticleSystem::AllocOcclusionQuery(_RBX, localClientNum);
  }
  else
  {
    if ( _RBX->m_occlusionQueryHandle != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 218, ASSERT_TYPE_ASSERT, "(m_occlusionQueryHandle == 0xffff)", (const char *)&queryFormat, "m_occlusionQueryHandle == OQ_HANDLE_NONE") )
      __debugbreak();
    _RBX->m_occlusionFade = 1.0;
  }
  *(_QWORD *)_RBX->m_lightingBounds.midPoint.v = 0i64;
  _RBX->m_lightingBounds.midPoint.v[2] = 0.0;
  _RBX->m_lightingBounds.halfSize.v[0] = -3.4028235e38;
  _RBX->m_lightingBounds.halfSize.v[1] = -3.4028235e38;
  _RBX->m_lightingBounds.halfSize.v[2] = -3.4028235e38;
  if ( (ParticleSystem::GetDef(_RBX)->flags & 0x20) != 0 )
  {
    *(_QWORD *)&_RBX->m_scriptedInputRecords[0].key = 0i64;
    *(_QWORD *)_RBX->m_scriptedInputRecords[0].pad = 0i64;
    _RDI = ParticleSystem::GetDef(_RBX)->scriptedInputNodeDefs;
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1992, ASSERT_TYPE_ASSERT, "(scriptedInputNodes)", (const char *)&queryFormat, "scriptedInputNodes") )
      __debugbreak();
    if ( _RDI->nodeBase.m_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1993, ASSERT_TYPE_ASSERT, "(scriptedInputNodes[0].GetNodeType() == PARTICLE_SCRIPTED_INPUT_NODE_KVP)", (const char *)&queryFormat, "scriptedInputNodes[0].GetNodeType() == PARTICLE_SCRIPTED_INPUT_NODE_KVP") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+10h]
      vmovups xmmword ptr [rbx+230h], xmm0
    }
    _RBX->m_scriptedInputRecords[0].dirty = 1;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovdqa xmmword ptr [rbx+0A0h], xmm0
  }
  _RBX->m_flags &= ~0x80000000ui64;
  v31 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  if ( v31->current.enabled && (ParticleSystem::GetDef(_RBX)->flags & 0x200000) != 0 )
    _RBX->m_flags |= 0x10000ui64;
  if ( pMarkSpawnData )
  {
    if ( (*((_BYTE *)pMarkSpawnData + 3) & 0x40) != 0 && pMarkSpawnData->materialOverrideIndex >= 0xAFFFu )
    {
      LODWORD(v34) = pMarkSpawnData->materialOverrideIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 243, ASSERT_TYPE_ASSERT, "( ( !pMarkSpawnData->markMaterialIsOverridden || ( pMarkSpawnData->materialOverrideIndex < MAX_SORTED_MATERIALS ) ) )", "( pMarkSpawnData->materialOverrideIndex ) = %u", v34) )
        __debugbreak();
    }
    ParticleManager = ParticleManager::GetParticleManager(_RBX->m_localClientNum);
    MarkSpawnData = ParticleManager::AllocateMarkSpawnData(ParticleManager, pMarkSpawnData);
  }
  _RBX->m_markSpawnDataIndex = MarkSpawnData;
  result = 1;
  _RBX->m_globalTintIndex = 0;
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
  const float4 *v23; 
  float4 *v24; 
  const float4 *v34; 
  const float4 *v35; 
  char v52; 
  unsigned int v109; 
  unsigned int m_localClientNum; 
  unsigned int v111; 
  unsigned int v112; 
  const DObj *v113; 
  const char *v114; 
  const ParticleSystemDef *v115; 
  scr_string_t v116; 
  const ParticleSystemDef *v117; 
  const ParticleSystemDef *v118; 
  const ParticleSystemDef *Def; 
  __int64 v126; 
  double v127; 
  __int64 v128; 
  double v129; 
  double v130; 
  double v131; 
  double v132; 
  vec3_t outOrigin; 
  __int64 v134; 
  vec4_t out; 
  tmat33_t<vec3_t> mat; 
  char v137; 
  void *retaddr; 

  _RAX = &retaddr;
  v134 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RBX = this;
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
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
          vmovups xmmword ptr [rbx+150h], xmm0
          vmovups xmm1, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
          vmovups xmmword ptr [rbx+160h], xmm1
        }
      }
      else
      {
        ParticleSystem::SetBoltOffset(this, boltOffset);
      }
    }
    else
    {
      BoltTemporalBits = ParticleSystem::GetBoltTemporalBits(this, this->m_localClientNum, dobjHandle);
      *(_DWORD *)&_RBX->m_bolt.FxBoltBase &= 0xFFFFCFFF;
      *(_DWORD *)&_RBX->m_bolt.FxBoltBase |= (BoltTemporalBits & 3) << 12;
      if ( boneIndex == 0xFFFF )
      {
        if ( dobjHandle >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1388, ASSERT_TYPE_ASSERT, "(dobjHandle < ( 2048 ))", (const char *)&queryFormat, "dobjHandle < MAX_GENTITIES") )
          __debugbreak();
        _RBX->m_flags |= 2ui64;
        _RDI = CG_GetPose(_RBX->m_localClientNum, dobjHandle);
        __asm { vmovss  xmm0, dword ptr [rax+48h] }
        out.v[3] = 0.0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rbp-59h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rdi+4Ch], 10h
          vinsertps xmm3, xmm3, dword ptr [rdi+50h], 20h ; ' '
          vmovups xmmword ptr [rbp-59h], xmm3
          vmulps  xmm0, xmm3, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
        }
        Float4RadianToQuat(v24, v23);
        __asm { vmovups xmmword ptr [rbx+160h], xmm0 }
        CG_GetPoseOrigin(_RDI, &outOrigin);
        __asm { vmovss  xmm0, dword ptr [rbp+47h+outOrigin] }
        out.v[3] = 0.0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rbp-59h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rbp+47h+outOrigin+4], 10h
          vinsertps xmm3, xmm3, dword ptr [rbp+47h+outOrigin+8], 20h
          vmovups xmmword ptr [rbp-59h], xmm3
          vmovups xmm1, xmmword ptr [rbx+160h]
          vmulps  xmm0, xmm1, cs:__xmm@3f800000bf800000bf800000bf800000
          vmovups xmmword ptr [rbx+160h], xmm0
          vxorps  xmm1, xmm1, xmm1
          vsubps  xmm1, xmm1, xmm3
          vmovups xmmword ptr [rbx+150h], xmm1
        }
        Float4QuatTransform(v35, v34, &_RBX->m_bolt.offsetPos);
        __asm
        {
          vmovups xmm1, xmmword ptr [rbx]
          vmovss  dword ptr [rbp+47h+mat], xmm1
          vextractps dword ptr [rbp+47h+mat+4], xmm1, 1
          vextractps dword ptr [rbp+47h+mat+8], xmm1, 2
          vmovups xmm2, xmmword ptr [rbx+10h]
          vmovss  dword ptr [rbp+47h+mat+0Ch], xmm2
          vextractps dword ptr [rbp+47h+mat+10h], xmm2, 1
          vextractps dword ptr [rbp+47h+mat+14h], xmm2, 2
          vmovups xmm2, xmmword ptr [rbx+20h]
          vmovss  dword ptr [rbp+47h+mat+18h], xmm2
          vextractps dword ptr [rbp+47h+mat+1Ch], xmm2, 1
          vextractps dword ptr [rbp+47h+mat+20h], xmm2, 2
        }
        AxisToQuat(&mat, &out);
        __asm
        {
          vmovss  xmm4, dword ptr [rbp+47h+out]
          vmulss  xmm1, xmm4, xmm4
          vmovss  xmm5, dword ptr [rbp+47h+out+4]
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmovss  xmm6, dword ptr [rbp+47h+out+8]
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vmovss  xmm2, dword ptr [rbp+47h+out+0Ch]
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm0, xmm3, xmm0
          vsubss  xmm1, xmm0, cs:__real@3f800000
          vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm1, cs:__real@3b03126f
        }
        if ( !v52 )
        {
          __asm
          {
            vsqrtss xmm0, xmm0, xmm0
            vcvtss2sd xmm1, xmm0, xmm0
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm3, xmm6, xmm6
            vcvtss2sd xmm0, xmm5, xmm5
            vcvtss2sd xmm4, xmm4, xmm4
            vmovsd  [rsp+110h+var_C8], xmm1
            vmovsd  [rsp+110h+var_D0], xmm2
            vmovsd  [rsp+110h+var_D8], xmm3
            vmovsd  [rsp+110h+var_E0], xmm0
            vmovsd  [rsp+110h+var_E8], xmm4
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 272, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v127, v129, v130, v131, v132) )
            __debugbreak();
        }
        __asm
        {
          vmovups xmm8, xmmword ptr [rbp+47h+out]
          vmovups xmm4, xmmword ptr [rbx+160h]
          vshufps xmm7, xmm8, xmm8, 0FFh
          vshufps xmm6, xmm4, xmm4, 0FFh
          vshufps xmm3, xmm4, xmm4, 0C9h ; 'É'
          vshufps xmm1, xmm8, xmm8, 0D2h ; 'Ò'
          vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
          vshufps xmm0, xmm8, xmm8, 0C9h ; 'É'
          vmulps  xmm1, xmm3, xmm1
          vmulps  xmm0, xmm2, xmm0
          vsubps  xmm5, xmm1, xmm0
          vmulps  xmm1, xmm8, xmm4
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
          vhaddps xmm3, xmm2, xmm2
          vmulps  xmm4, xmm7, xmm4
          vmulps  xmm1, xmm8, xmm6
          vmulps  xmm0, xmm7, xmm6
          vsubps  xmm2, xmm0, xmm3
          vaddps  xmm1, xmm4, xmm1
          vaddps  xmm0, xmm5, xmm1
          vblendps xmm7, xmm2, xmm0, 7
          vmovups xmm5, xmmword ptr [rbx+30h]
          vmovups xmm0, xmmword ptr [rbx+160h]
          vshufps xmm3, xmm0, xmm0, 0FFh
          vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
          vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
          vshufps xmm4, xmm0, xmm0, 0D2h ; 'Ò'
          vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
          vmulps  xmm1, xmm6, xmm1
          vmulps  xmm0, xmm4, xmm0
          vsubps  xmm1, xmm1, xmm0
          vaddps  xmm2, xmm1, xmm1
          vmulps  xmm0, xmm3, xmm2
          vaddps  xmm3, xmm0, xmm5
          vshufps xmm1, xmm2, xmm2, 0D2h ; 'Ò'
          vshufps xmm0, xmm2, xmm2, 0C9h ; 'É'
          vmulps  xmm1, xmm6, xmm1
          vmulps  xmm0, xmm4, xmm0
          vsubps  xmm1, xmm1, xmm0
          vaddps  xmm2, xmm3, xmm1
          vaddps  xmm1, xmm2, xmmword ptr [rbx+150h]
          vmovups xmmword ptr [rbx+160h], xmm7
          vmovups xmmword ptr [rbx+150h], xmm1
          vshufps xmm0, xmm1, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v, 0FAh ; 'ú'; float4 const g_unit
          vshufps xmm0, xmm1, xmm0, 84h ; '„'
          vmovups xmmword ptr [rbx+150h], xmm0
          vmovups xmm3, xmmword ptr [rbx+160h]
          vmulps  xmm0, xmm3, xmm3
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm2, xmm1, xmm1
          vrsqrtps xmm0, xmm2
          vmulps  xmm0, xmm0, xmm3
          vmovups xmmword ptr [rbx+160h], xmm0
        }
        Particle_AssertFloat4IsNormalized(&_RBX->m_bolt.offsetQuat);
        _RBX->m_flags |= 0x200000ui64;
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      else
      {
        ParticleSystem::SetBoltOffset(_RBX, boltOffset);
        if ( (ParticleSystem::GetDef(_RBX)->flags & 0x2000) != 0 )
        {
          if ( archiveState == 2 )
          {
            _RBX->m_bolt.boneName = boneName;
            if ( !boneName )
            {
              Def = ParticleSystem::GetDef(_RBX);
              Com_PrintWarning(21, "WARNING: Restoring a null bone name. Always Update Bone Index will not function correctly for: %s\n", Def->name);
            }
          }
          else
          {
            v109 = *(_DWORD *)&_RBX->m_bolt.FxBoltBase & 0xFFF;
            m_localClientNum = _RBX->m_localClientNum;
            if ( v109 >= 0x9E5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", *(_DWORD *)&_RBX->m_bolt.FxBoltBase & 0xFFF) )
              __debugbreak();
            if ( m_localClientNum >= 2 )
            {
              LODWORD(v128) = 2;
              LODWORD(v126) = m_localClientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v126, v128) )
                __debugbreak();
            }
            v111 = 2533 * m_localClientNum + v109;
            if ( v111 >= 0x13CA )
            {
              LODWORD(v128) = v111;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v128) )
                __debugbreak();
            }
            v112 = clientObjMap[v111];
            if ( !v112 )
              goto LABEL_36;
            if ( v112 >= (unsigned int)s_objCount )
            {
              LODWORD(v128) = v112;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v128) )
                __debugbreak();
            }
            v113 = (const DObj *)s_objBuf[v112];
            if ( !v113 )
            {
LABEL_36:
              v118 = ParticleSystem::GetDef(_RBX);
              Com_PrintError(21, "ERROR: Trying to bolt the effect %s to a non-existent object. Disabling bolting.\n", v118->name);
              _RBX->m_flags &= ~1ui64;
              goto LABEL_44;
            }
            v114 = DObjGetBoneName(v113, boneIndex);
            if ( !v114 )
            {
              v115 = ParticleSystem::GetDef(_RBX);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1441, ASSERT_TYPE_ASSERT, "(pBoneName)", "%s\n\tVFX ASSERT for effect: %s\n", "pBoneName", v115->name) )
                __debugbreak();
            }
            v116 = SL_ConvertFromString(v114);
            _RBX->m_bolt.boneName = v116;
            if ( !v116 )
            {
              v117 = ParticleSystem::GetDef(_RBX);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1444, ASSERT_TYPE_ASSERT, "(m_bolt.boneName != ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tVFX ASSERT for effect: %s\n", "m_bolt.boneName != ( static_cast< scr_string_t >( 0 ) )", v117->name) )
                __debugbreak();
            }
          }
        }
      }
      if ( (*(_DWORD *)&_RBX->m_bolt.FxBoltBase & 0xFFFu) - 2048 <= 1 )
        _RBX->m_flags |= 0x800000000ui64;
    }
  }
LABEL_44:
  _R11 = &v137;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
ParticleSystem::InitScriptedInputs
==============
*/
void ParticleSystem::InitScriptedInputs(ParticleSystem *this)
{
  _RBX = this;
  *(_QWORD *)&this->m_scriptedInputRecords[0].key = 0i64;
  *(_QWORD *)this->m_scriptedInputRecords[0].pad = 0i64;
  _RDI = ParticleSystem::GetDef(this)->scriptedInputNodeDefs;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1992, ASSERT_TYPE_ASSERT, "(scriptedInputNodes)", (const char *)&queryFormat, "scriptedInputNodes") )
    __debugbreak();
  if ( _RDI->nodeBase.m_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1993, ASSERT_TYPE_ASSERT, "(scriptedInputNodes[0].GetNodeType() == PARTICLE_SCRIPTED_INPUT_NODE_KVP)", (const char *)&queryFormat, "scriptedInputNodes[0].GetNodeType() == PARTICLE_SCRIPTED_INPUT_NODE_KVP") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+10h]
    vmovups xmmword ptr [rbx+230h], xmm0
  }
  _RBX->m_scriptedInputRecords[0].dirty = 1;
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
  char v36; 
  char v37; 
  bool result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm5, xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm4, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = outConeCullBlendFactor;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm7
    vsubss  xmm7, xmm0, dword ptr [rcx+8]
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000; max
    vblendvps xmm0, xmm1, xmm2, xmm0
    vdivss  xmm6, xmm2, xmm0
    vmulss  xmm0, xmm4, xmm6
    vmulss  xmm4, xmm0, dword ptr [rcx+74h]
    vmulss  xmm1, xmm5, xmm6
    vmulss  xmm3, xmm1, dword ptr [rcx+70h]
    vmulss  xmm0, xmm7, xmm6
    vmulss  xmm1, xmm0, dword ptr [rcx+78h]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm3, xmm5, xmm1
    vmulss  xmm4, xmm3, dword ptr [rcx+0D0h]
    vaddss  xmm0, xmm4, dword ptr [rcx+0D4h]; val
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, [rsp+48h+var_28]
    vcomiss xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  result = v36 | v37;
  __asm { vmovss  dword ptr [rbx], xmm0 }
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

  _RBP = curvePoint1;
  _RDI = endPos;
  _RSI = startPos;
  _RBX = this;
  if ( !this->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1205, ASSERT_TYPE_ASSERT, "(m_pEmitters)", (const char *)&queryFormat, "m_pEmitters") )
    __debugbreak();
  if ( !_RBX->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1181, ASSERT_TYPE_ASSERT, "(m_pEmitters)", (const char *)&queryFormat, "m_pEmitters") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovdqa xmmword ptr [rbx+0F0h], xmm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovdqa xmmword ptr [rbx+100h], xmm1
  }
  _RBX->m_flags |= 0x100ui64;
  for ( i = 0; i < _RBX->m_pSystemDef->numEmitters; ++i )
    ParticleEmitter::UpdateBeamChildTransform(&_RBX->m_pEmitters[i]);
  __asm { vmovups xmm0, xmmword ptr [rbp+0] }
  _RAX = curvePoint2;
  __asm
  {
    vmovdqa xmmword ptr [rbx+110h], xmm0
    vmovups xmm1, xmmword ptr [rax]
    vmovdqa xmmword ptr [rbx+120h], xmm1
  }
  _RBX->m_beamData.m_useCurvePoints = 1;
}

/*
==============
ParticleSystem::SetBeamPos
==============
*/
void ParticleSystem::SetBeamPos(ParticleSystem *this, const float4 *startPos, const float4 *endPos)
{
  int i; 

  _RBX = endPos;
  _RSI = startPos;
  _RDI = this;
  if ( !this->m_pEmitters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1181, ASSERT_TYPE_ASSERT, "(m_pEmitters)", (const char *)&queryFormat, "m_pEmitters") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovdqa xmmword ptr [rdi+0F0h], xmm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovdqa xmmword ptr [rdi+100h], xmm1
  }
  _RDI->m_flags |= 0x100ui64;
  for ( i = 0; i < _RDI->m_pSystemDef->numEmitters; ++i )
    ParticleEmitter::UpdateBeamChildTransform(&_RDI->m_pEmitters[i]);
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
    _RBX = boltOffset;
    _RDI = &this->m_systemTransform.x;
    if ( memcmp_0(boltOffset, &orIdentity, 0x30ui64) )
    {
      AxisToQuat(&_RBX->axis, &out);
      __asm
      {
        vmovups xmm2, xmmword ptr [rsp+48h+out]
        vmulps  xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm0, xmm1, xmm1
        vrsqrtps xmm1, xmm0
        vmulps  xmm2, xmm1, xmm2
      }
      _RCX = _RDI + 22;
      __asm { vmovups xmmword ptr [rcx], xmm2 }
      Particle_AssertFloat4IsNormalized(_RDI + 22);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vinsertps xmm2, xmm0, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0'
        vmovups xmmword ptr [rdi+150h], xmm2
      }
      _RDI[26].v.m128_u64[0] |= 0x200000ui64;
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

void __fastcall ParticleSystem::SetEmissionCurveValue(ParticleSystem *this, double value)
{
  int v3; 
  __int64 v6; 
  ParticleEmitter *v7; 

  v3 = 0;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( this->m_pSystemDef->numEmitters > 0 )
  {
    v6 = 0i64;
    do
    {
      v7 = &this->m_pEmitters[v6];
      if ( (v7->m_flags & 0x40) == 0 )
      {
        __asm { vmovaps xmm1, xmm6; value }
        ParticleEmitter::SetEmissionCurveValue(v7, *(float *)&_XMM1);
      }
      ++v3;
      ++v6;
    }
    while ( v3 < this->m_pSystemDef->numEmitters );
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
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
  __int64 archiveState; 
  _BYTE v14[64]; 

  _RBX = this;
  if ( (this->m_flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 710, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED )") )
    __debugbreak();
  if ( (_RBX->m_flags & 0x20000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 711, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED_TO_PREDICTED_ENT ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED_TO_PREDICTED_ENT )") )
    __debugbreak();
  if ( (*(_DWORD *)&_RBX->m_bolt.FxBoltBase & 0xFFF) != predictedEntIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 712, ASSERT_TYPE_ASSERT, "(m_bolt.dobjHandle == static_cast<uint>( predictedEntIdx ))", (const char *)&queryFormat, "m_bolt.dobjHandle == static_cast<uint>( predictedEntIdx )") )
    __debugbreak();
  if ( (unsigned __int16)(*(_DWORD *)&_RBX->m_bolt.FxBoltBase >> 14) != boneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 713, ASSERT_TYPE_ASSERT, "(m_bolt.boneIndex == static_cast<uint>( boneIndex ))", (const char *)&queryFormat, "m_bolt.boneIndex == static_cast<uint>( boneIndex )") )
    __debugbreak();
  m_localClientNum = _RBX->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(archiveState) = _RBX->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", archiveState, 2) )
      __debugbreak();
  }
  v9 = (unsigned int *)&g_particleManager[m_localClientNum];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 716, ASSERT_TYPE_ASSERT, "(pParticleManager)", (const char *)&queryFormat, "pParticleManager") )
    __debugbreak();
  _RBX->m_flags &= ~0x20000000ui64;
  memset_0(v14, 0, 0x50ui64);
  __asm
  {
    vmovups ymm0, [rsp+98h+var_58]
    vmovups ymm1, [rsp+98h+var_38]
    vmovups ymmword ptr [rbx+140h], ymm0
    vmovups xmm0, [rsp+98h+var_18]
    vmovups ymmword ptr [rbx+160h], ymm1
    vmovups xmmword ptr [rbx+180h], xmm0
  }
  ParticleSystem::InitBolting(_RBX, centNum, boneIndex, &orIdentity, (scr_string_t)0, *v9);
}

/*
==============
ParticleSystem::Update
==============
*/
void ParticleSystem::Update(ParticleSystem *this, const int currentTime, const FxCamera *pCamera, int preRollDeltaTime)
{
  const FxCamera *v11; 
  ParticleSystemHandle m_parentSystemHandle; 
  __int64 v15; 
  unsigned __int64 *p_m_flags; 
  ParticleSystemFlags m_flags; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v24; 
  const dvar_t *v25; 
  int v26; 
  ParticleSystemFlags *v27; 
  LocalClientNum_t m_localClientNum; 
  const ParticleSystem *CurrentSystem; 
  bool v31; 
  const ParticleSystemDef *m_pSystemDef; 
  __int64 v37; 
  ParticleEmitter *m_pEmitters; 
  unsigned __int8 ActiveGameMode; 
  unsigned int frustumPlaneCount; 
  bool v51; 
  int v52; 
  __int64 v53; 
  ParticleEmitter *v54; 
  char v57; 
  char v58; 
  const ParticleSystemDef *v69; 
  int v70; 
  unsigned __int64 v71; 
  ParticleEmitter *v72; 
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  __int64 v75; 
  int v76; 
  const ParticleSystemDef *v77; 
  int numEmitters; 
  int v79; 
  unsigned int *v80; 
  const float4 *v81; 
  vector3 *v82; 
  const ParticleSystemDef *v89; 
  __int64 v94; 
  ParticleEmitter *v95; 
  __int64 v102; 
  __int64 v103; 
  char v104; 
  char v105; 
  char v106; 
  float4 systemPos; 
  vector3 systemOrientationMat; 
  float4 posWorld; 
  vec3_t pos; 

  systemPos.v.m128_u64[0] = (unsigned __int64)pCamera;
  v11 = pCamera;
  _RBX = this;
  if ( !pCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 335, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
    __debugbreak();
  if ( !_RBX->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 336, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
    __debugbreak();
  m_parentSystemHandle = _RBX->m_parentSystemHandle;
  if ( m_parentSystemHandle )
  {
    if ( (_RBX->m_flags & 0x40000) != 0 )
    {
      v15 = ((__int64)(int)_RBX->m_localClientNum << 12) + (m_parentSystemHandle & 0xFFF);
      if ( g_particleSystemsGeneration[v15].__all32 != m_parentSystemHandle || g_particleSystems[0][v15] < (ParticleSystem *)0x1000 )
        _RBX->m_flags &= ~0x40000ui64;
    }
  }
  p_m_flags = (unsigned __int64 *)&_RBX->m_flags;
  m_flags = _RBX->m_flags;
  if ( (m_flags & 0x40000) != 0 || _RBX->m_lastUpdateTime < currentTime || (BYTE3(m_flags) & 1) != 0 )
  {
    __asm
    {
      vmovaps [rsp+138h+var_58], xmm7
      vmovaps [rsp+138h+var_68], xmm8
    }
    if ( (ParticleSystem::GetDef(_RBX)->flags & 0x400) != 0 )
      ParticleSystem::AlignToSun(_RBX, v11);
    v18 = *p_m_flags;
    v19 = *p_m_flags;
    __asm
    {
      vmovaps [rsp+138h+var_78], xmm9
      vxorps  xmm7, xmm7, xmm7
    }
    if ( (v19 & 0x40000) != 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vmulss  xmm9, xmm0, cs:__real@3a83126f
      }
      v24 = v18;
    }
    else if ( (v18 & 0x800000) != 0 )
    {
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      if ( !BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 372, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsOnline( Com_GameMode_GetActiveGameMode() ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsOnline( Com_GameMode_GetActiveGameMode() )") )
        __debugbreak();
      __asm { vmovss  xmm9, cs:__real@3d4ccccd }
      v24 = *p_m_flags & 0xFFFFFFFFFF7FFFFFui64;
    }
    else
    {
      v24 = v18;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm9, xmm0, cs:__real@3a83126f
      }
      if ( (v18 & 0x1000000) != 0 )
      {
        __asm { vcomiss xmm9, xmm7 }
        if ( (v18 & 0x1000000) == 0 )
          __asm { vmovss  xmm9, cs:__real@3c888889 }
      }
    }
    *p_m_flags = v24 & 0xFFFFFFFFFEFFFFFFui64;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 2121, ASSERT_TYPE_ASSERT, "(pCamera)", (const char *)&queryFormat, "pCamera") )
      __debugbreak();
    v25 = particle_system_culling_update;
    if ( !particle_system_culling_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v26 = 0;
    if ( v25->current.enabled )
    {
      _RAX = ParticleSystem::GetDef(_RBX);
      __asm
      {
        vmovss  xmm3, dword ptr [rax+34h]; radius
        vcomiss xmm3, xmm7
      }
      if ( !(v57 | v58) )
      {
        __asm { vmovups xmm4, xmmword ptr [rbx+30h] }
        frustumPlaneCount = v11->frustumPlaneCount;
        __asm
        {
          vshufps xmm1, xmm4, xmm4, 55h ; 'U'
          vshufps xmm2, xmm4, xmm4, 0AAh ; 'ª'
        }
        posWorld.v.m128_i32[3] = 0;
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+138h+posWorld.v]
          vmovss  xmm0, xmm0, xmm4
          vinsertps xmm0, xmm0, xmm1, 10h
          vinsertps xmm0, xmm0, xmm2, 20h ; ' '
          vmovups xmmword ptr [rsp+138h+posWorld.v], xmm0
          vmovups xmmword ptr [rsp+138h+posWorld.v], xmm0
          vmovss  dword ptr [rsp+138h+pos], xmm4
          vmovss  dword ptr [rsp+138h+pos+4], xmm1
          vmovss  dword ptr [rsp+138h+pos+8], xmm2
        }
        if ( FX_CullSphere(v11, frustumPlaneCount, &posWorld, *(float *)&_XMM3, 1) )
        {
          v104 = 1;
          v27 = &_RBX->m_flags;
        }
        else
        {
          if ( (ParticleSystem::GetDef(_RBX)->flags & 0x4000000) != 0 )
          {
            v51 = Particle_CullCone(v11, &pos, posWorld.v.m128_f32);
            v104 = v51;
          }
          else
          {
            v51 = 0;
            v104 = 0;
          }
          v27 = &_RBX->m_flags;
          if ( !v51 )
            goto LABEL_28;
        }
        *v27 |= 0x100000ui64;
        v52 = 0;
        if ( _RBX->m_pSystemDef->numEmitters > 0 )
        {
          v53 = 0i64;
          do
          {
            v54 = &_RBX->m_pEmitters[v53];
            if ( (v54->m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(&_RBX->m_pEmitters[v53])->flags & 1) == 0 && (v54->m_flags & 1) == 0 )
            {
              __asm { vmovaps xmm1, xmm9; dt }
              ParticleEmitter::CheckPulse(&_RBX->m_pEmitters[v52], *(const float *)&_XMM1, currentTime);
            }
            ++v52;
            ++v53;
          }
          while ( v52 < _RBX->m_pSystemDef->numEmitters );
          p_m_flags = (unsigned __int64 *)&_RBX->m_flags;
        }
LABEL_29:
        m_localClientNum = _RBX->m_localClientNum;
        __asm
        {
          vmovaps [rsp+138h+var_48], xmm6
          vxorps  xmm8, xmm8, xmm8
        }
        CurrentSystem = Particle_ToolGetCurrentSystem(m_localClientNum);
        v31 = CurrentSystem <= _RBX;
        if ( CurrentSystem == _RBX )
        {
          _RAX = particle_edit_mode_loop_time;
          __asm
          {
            vmovss  xmm6, cs:__real@447a0000
            vmovss  xmm0, dword ptr [rax+28h]
            vcomiss xmm0, xmm7
          }
          if ( !v31 )
          {
            __asm
            {
              vmulss  xmm0, xmm0, xmm6
              vcvttss2si rdx, xmm0
            }
            if ( currentTime - _RBX->m_loopTime >= (unsigned int)_RDX )
            {
              if ( !_RBX->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 285, ASSERT_TYPE_ASSERT, "(IsRunning())", (const char *)&queryFormat, "IsRunning()") )
                __debugbreak();
              m_pSystemDef = _RBX->m_pSystemDef;
              _RBX->m_spawnTime = currentTime;
              _RBX->m_lastUpdateTime = currentTime;
              _RBX->m_loopTime = currentTime;
              if ( m_pSystemDef->numEmitters > 0 )
              {
                v37 = 0i64;
                do
                {
                  m_pEmitters = _RBX->m_pEmitters;
                  if ( m_pEmitters[v37].m_isRunning )
                    ParticleEmitter::Restart(&m_pEmitters[v26]);
                  ++v26;
                  ++v37;
                }
                while ( v26 < _RBX->m_pSystemDef->numEmitters );
              }
              goto LABEL_118;
            }
          }
          if ( particle_figure8_playback->current.enabled )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal(particle_figure8_radius);
            __asm { vmovaps xmm8, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal(particle_figure8_time);
            __asm
            {
              vmulss  xmm2, xmm0, xmm6
              vcvttss2si ecx, xmm2
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, edx
              vdivss  xmm6, xmm1, xmm2
              vcomiss xmm6, xmm7
            }
            if ( v57 )
              goto LABEL_121;
            __asm { vcomiss xmm6, cs:__real@3f800000 }
            if ( !(v57 | v58) )
            {
LABEL_121:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 433, ASSERT_TYPE_ASSERT, "(a >= 0 && a <= 1.0f)", (const char *)&queryFormat, "a >= 0 && a <= 1.0f") )
                __debugbreak();
            }
            __asm
            {
              vmulss  xmm6, xmm6, cs:__real@40c947ae
              vmovaps xmm0, xmm6; X
            }
            *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
            __asm
            {
              vmulss  xmm1, xmm0, xmm8
              vmulss  xmm0, xmm6, cs:__real@40000000; X
              vmulss  xmm7, xmm1, cs:__real@40200000
            }
            *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
            __asm
            {
              vmulss  xmm1, xmm0, xmm8
              vxorps  xmm8, xmm8, xmm8
              vinsertps xmm8, xmm8, xmm1, 0
              vinsertps xmm8, xmm8, xmm7, 10h
            }
          }
        }
        if ( (*p_m_flags & 0x10) == 0 )
        {
          if ( (*p_m_flags & 8) == 0 )
          {
LABEL_106:
            if ( !v104 )
            {
              if ( Particle_ToolGetCurrentSystem(_RBX->m_localClientNum) == _RBX )
              {
                _RAX = _RBX->m_pSystemDef;
                __asm
                {
                  vaddps  xmm0, xmm8, xmmword ptr [rax+60h]
                  vmovups xmmword ptr [rsp+138h+systemPos.v], xmm0
                  vmovups xmm0, xmmword ptr [rax+70h]
                }
                Float4UnitQuatToAxis(v82, v81);
                __asm
                {
                  vmovups xmmword ptr [rsp+138h+systemOrientationMat.y.v], xmm1
                  vmovups xmmword ptr [rsp+138h+systemOrientationMat.x.v], xmm0
                  vmovups ymm3, ymmword ptr [rsp+138h+systemOrientationMat.x.v]
                  vmovups ymmword ptr [rsp+138h+systemOrientationMat.x.v], ymm3
                  vmovups xmmword ptr [rsp+138h+systemOrientationMat.z.v], xmm2
                }
                ParticleSystem::SetSystemTransform(_RBX, &systemPos, &systemOrientationMat);
              }
              ParticleSystem::GetDef(_RBX);
              __asm
              {
                vmovups xmm0, xmmword ptr [rbx+30h]
                vsubps  xmm1, xmm0, xmmword ptr [rbx+0A0h]
              }
              v89 = _RBX->m_pSystemDef;
              __asm
              {
                vmulps  xmm2, xmm1, xmm1
                vhaddps xmm0, xmm2, xmm2
                vhaddps xmm0, xmm0, xmm0
                vsqrtps xmm1, xmm0
                vmovss  dword ptr [rbx+228h], xmm1
              }
              if ( v89->numEmitters > 0 )
              {
                v94 = 0i64;
                do
                {
                  v95 = &_RBX->m_pEmitters[v94];
                  if ( (v95->m_flags & 0x220) == 0 && (ParticleEmitter::GetEmitterDef(&_RBX->m_pEmitters[v94])->flags & 1) == 0 && (v95->m_flags & 1) == 0 )
                  {
                    __asm { vmovaps xmm1, xmm9; dt }
                    ParticleEmitter::Update(&_RBX->m_pEmitters[v26], *(const float *)&_XMM1, currentTime, v11);
                  }
                  ++v26;
                  ++v94;
                }
                while ( v26 < _RBX->m_pSystemDef->numEmitters );
              }
              ParticleSystem::CalculateDistanceToCameraSquared(_RBX);
              __asm
              {
                vmovups xmm0, xmmword ptr [rbx+30h]
                vmovdqu xmmword ptr [rbx+0A0h], xmm0
              }
            }
            _RBX->m_lastUpdateTime = currentTime;
            goto LABEL_118;
          }
          v69 = _RBX->m_pSystemDef;
          if ( (v69->flags & 0x800000) != 0 )
          {
            *(_QWORD *)pos.v = ParticleManager::GetParticleManager(_RBX->m_localClientNum);
            v70 = 0;
            v105 = *(_BYTE *)(*(_QWORD *)pos.v + 301139i64);
            v106 = *(_BYTE *)(*(_QWORD *)pos.v + 301140i64);
            if ( _RBX->m_pSystemDef->numEmitters > 0 )
            {
              v71 = 0i64;
              posWorld.v.m128_u64[0] = 0i64;
              while ( 1 )
              {
                v72 = (ParticleEmitter *)((char *)_RBX->m_pEmitters + v71);
                SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v72);
                Def = ParticleSystem::GetDef(SystemOwner);
                if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 171, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
                  __debugbreak();
                if ( !Def->emitterDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 172, ASSERT_TYPE_ASSERT, "(pSystemDef->emitterDefs)", (const char *)&queryFormat, "pSystemDef->emitterDefs") )
                  __debugbreak();
                if ( (unsigned int)v72->m_emitterIndex >= Def->numEmitters )
                {
                  LODWORD(v103) = Def->numEmitters;
                  LODWORD(v102) = v72->m_emitterIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( m_emitterIndex ) < (unsigned)( pSystemDef->numEmitters )", "m_emitterIndex doesn't index pSystemDef->numEmitters\n\t%i not in [0, %i)", v102, v103) )
                    __debugbreak();
                }
                v75 = (__int64)&Def->emitterDefs[v72->m_emitterIndex];
                if ( !v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 176, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
                  __debugbreak();
                if ( **(_DWORD **)pos.v == 2 || ((v76 = *(_DWORD *)(v75 + 100), (v76 & 0x1000) == 0) || v105) && ((v76 & 0x2000) == 0 || !v105) && ((v76 & 0x4000) == 0 || v106) && ((v76 & 0x8000) == 0 || !v106) )
                {
                  if ( (v72->m_flags & 1) == 0 )
                    break;
                }
                v77 = _RBX->m_pSystemDef;
                v71 = posWorld.v.m128_u64[0] + 560;
                ++v70;
                posWorld.v.m128_u64[0] += 560i64;
                if ( v70 >= v77->numEmitters )
                {
                  _RBX->m_flags |= 0x10ui64;
                  goto LABEL_118;
                }
              }
              v11 = (const FxCamera *)systemPos.v.m128_u64[0];
              goto LABEL_106;
            }
          }
          else
          {
            numEmitters = v69->numEmitters;
            v79 = 0;
            if ( numEmitters > 0 )
            {
              v80 = &_RBX->m_pEmitters->m_flags;
              while ( (*(_BYTE *)v80 & 1) != 0 )
              {
                ++v79;
                v80 += 140;
                if ( v79 >= numEmitters )
                  goto LABEL_104;
              }
              goto LABEL_106;
            }
          }
LABEL_104:
          *p_m_flags |= 0x10ui64;
        }
LABEL_118:
        __asm
        {
          vmovaps xmm6, [rsp+138h+var_48]
          vmovaps xmm9, [rsp+138h+var_78]
          vmovaps xmm7, [rsp+138h+var_58]
          vmovaps xmm8, [rsp+138h+var_68]
        }
        return;
      }
      v104 = 0;
    }
    else
    {
      v104 = 0;
    }
    v27 = &_RBX->m_flags;
LABEL_28:
    *v27 &= ~0x100000ui64;
    goto LABEL_29;
  }
}

/*
==============
ParticleSystem::UpdateBolting
==============
*/

void __fastcall ParticleSystem::UpdateBolting(ParticleSystem *this, double dt, double _XMM2_8, double _XMM3_8)
{
  const ParticleSystemDef *Def; 
  const float4 *v91; 
  vector3 *v92; 
  ParticleManager *v99; 
  unsigned __int8 v100; 
  int v101; 
  CgPredictedEntitySystem *System; 
  const float4 *v135; 
  vector3 *v136; 
  int v143; 
  unsigned int BoltTemporalBits; 
  FxBoltBase v145; 
  bool v146; 
  bool v147; 
  LocalClientNum_t m_localClientNum; 
  const float4 *v150; 
  float4 *v151; 
  const cpose_t *v152; 
  bool BoneOrientation; 
  const float4 *v160; 
  vector3 *v161; 
  ParticleManager *ParticleManager; 
  unsigned __int64 v168; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *v169; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *mp_next; 
  const ParticleSystemDef *v176; 
  ParticleSystemFlags m_flags; 
  char v178; 
  unsigned __int64 v179; 
  const float4 *v199; 
  vector3 *v200; 
  const vector4 *v203; 
  char v206; 
  char v207; 
  bool IsBoneVisible; 
  ParticleManager *v216; 
  double v228; 
  double v229; 
  double v230; 
  double v231; 
  double v232; 
  double v233; 
  double v234; 
  double v235; 
  bool outBoneVisible; 
  float4 v237; 
  vector4 result; 
  __int64 v239; 
  float4 normal; 
  vec3_t outOrigin; 
  vec4_t outQuat; 
  vector4 systemOrientationMat; 
  float4 systemPos; 
  char v245; 
  void *retaddr; 

  _RAX = &retaddr;
  v239 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovaps xmm15, xmm1
  }
  _RBX = this;
  if ( (this->m_flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1585, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED ))", (const char *)&queryFormat, "HasFlag( PARTICLE_SYSTEM_FLAG_BOLTED )") )
    __debugbreak();
  ParticleSystem::SetBoltBoneVisible(_RBX, 1);
  if ( (_RBX->m_flags & 0x2000) != 0 )
  {
    Def = ParticleSystem::GetDef(_RBX);
    if ( Particle_GetDynEntTransform(_RBX->m_localClientNum, *(_DWORD *)&_RBX->m_bolt.FxBoltBase & 0xFFF, (unsigned __int16)(*(_DWORD *)&_RBX->m_bolt.FxBoltBase >> 14), &outOrigin, &outQuat, Def->name) )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+218h+outQuat]
        vmulss  xmm1, xmm4, xmm4
        vmovss  xmm5, dword ptr [rsp+218h+outQuat+4]
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm6, dword ptr [rsp+218h+outQuat+8]
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm7, dword ptr [rsp+218h+outQuat+0Ch]
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm1, xmm3, xmm0
        vmovss  xmm8, cs:__real@3f800000
        vsubss  xmm2, xmm1, xmm8
        vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm2, cs:__real@3b83126f
        vcvtss2sd xmm0, xmm7, xmm7
        vcvtss2sd xmm1, xmm6, xmm6
        vcvtss2sd xmm2, xmm5, xmm5
        vcvtss2sd xmm3, xmm4, xmm4
        vmovsd  [rsp+218h+var_1D0], xmm0
        vmovsd  [rsp+218h+var_1D8], xmm1
        vmovsd  [rsp+218h+var_1E0], xmm2
        vmovsd  [rsp+218h+var_1E8], xmm3
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1619, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( quat ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( quat )", v228, v230, v232, v234) )
        __debugbreak();
      __asm { vxorps  xmm7, xmm7, xmm7 }
      if ( (_RBX->m_flags & 0x200000) != 0 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx+150h]
          vmovaps xmmword ptr [rsp+218h+systemPos.v], xmm0
          vmovups xmm14, xmmword ptr [rbx+160h]
        }
        QuatTrans_TransformPoint(&outQuat, &outOrigin, (const vec3_t *)&systemPos, (vec3_t *)&normal);
        __asm
        {
          vshufps xmm13, xmm14, xmm14, 0FFh
          vmovss  xmm12, dword ptr [rsp+218h+outQuat]
          vmulss  xmm1, xmm13, xmm12
          vmovss  xmm10, dword ptr [rsp+218h+outQuat+0Ch]
          vmulss  xmm0, xmm14, xmm10
          vaddss  xmm2, xmm1, xmm0
          vshufps xmm11, xmm14, xmm14, 0AAh ; 'ª'
          vmovss  xmm9, dword ptr [rsp+218h+outQuat+4]
          vmulss  xmm0, xmm11, xmm9
          vaddss  xmm1, xmm2, xmm0
          vshufps xmm7, xmm14, xmm14, 55h ; 'U'
          vmovss  xmm6, dword ptr [rsp+218h+outQuat+8]
          vmulss  xmm0, xmm7, xmm6
          vsubss  xmm2, xmm1, xmm0
          vmovups xmmword ptr [rsp+218h+var_1B8.v], xmm2
          vmulss  xmm2, xmm7, xmm10
          vmulss  xmm1, xmm11, xmm12
          vsubss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm13, xmm9
          vaddss  xmm4, xmm3, xmm0
          vmulss  xmm1, xmm14, xmm6
          vaddss  xmm8, xmm4, xmm1
          vmulss  xmm2, xmm7, xmm12
          vmulss  xmm0, xmm11, xmm10
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm14, xmm9
          vsubss  xmm4, xmm3, xmm1
          vmulss  xmm0, xmm13, xmm6
          vaddss  xmm5, xmm4, xmm0
          vmulss  xmm2, xmm13, xmm10
          vmulss  xmm1, xmm14, xmm12
          vsubss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm7, xmm9
          vsubss  xmm4, xmm3, xmm0
          vmulss  xmm1, xmm11, xmm6
          vsubss  xmm2, xmm4, xmm1
          vmovups xmm6, xmmword ptr [rsp+218h+normal.v]
          vxorps  xmm7, xmm7, xmm7
          vinsertps xmm6, xmm6, xmm7, 30h ; '0'
          vmovups xmmword ptr [rsp+218h+normal.v], xmm6
          vmovups xmm3, xmmword ptr [rsp+218h+var_1B8.v]
          vinsertps xmm3, xmm3, xmm8, 10h
          vinsertps xmm3, xmm3, xmm5, 20h ; ' '
          vinsertps xmm3, xmm3, xmm2, 30h ; '0'
          vmovups xmmword ptr [rsp+218h+normal.v], xmm3
          vmovss  xmm8, cs:__real@3f800000
        }
      }
      else
      {
        __asm { vmovss  xmm0, dword ptr [rsp+218h+outOrigin] }
        normal.v.m128_i32[3] = 0;
        __asm
        {
          vmovups xmm6, xmmword ptr [rsp+218h+normal.v]
          vmovss  xmm6, xmm6, xmm0
          vinsertps xmm6, xmm6, dword ptr [rsp+218h+outOrigin+4], 10h
          vinsertps xmm6, xmm6, dword ptr [rsp+218h+outOrigin+8], 20h
          vmovups xmmword ptr [rsp+218h+normal.v], xmm6
          vmovaps xmm3, xmmword ptr [rsp+218h+outQuat]
        }
      }
      __asm
      {
        vmovups xmmword ptr [rsp+218h+systemPos.v], xmm6
        vmulps  xmm0, xmm3, xmm3
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm0, xmm1, xmm1
        vrsqrtps xmm1, xmm0
        vmulps  xmm2, xmm1, xmm3
        vmovups xmmword ptr [rsp+218h+normal.v], xmm2
      }
      Particle_AssertFloat4IsNormalized(&normal);
      __asm { vmovups xmm0, xmmword ptr [rsp+218h+normal.v] }
      Float4UnitQuatToAxis(v92, v91);
      __asm
      {
        vmovups xmmword ptr [rsp+218h+systemOrientationMat+10h], xmm1
        vmovups xmmword ptr [rsp+218h+systemOrientationMat], xmm0
        vmovups ymm3, ymmword ptr [rsp+218h+systemOrientationMat]
        vmovups ymmword ptr [rsp+218h+systemOrientationMat], ymm3
        vmovups xmmword ptr [rsp+218h+systemOrientationMat+20h], xmm2
      }
      ParticleSystem::SetSystemTransform(_RBX, &systemPos, &systemOrientationMat);
      ParticleSystem::UpdateChildTransforms(_RBX);
      ParticleSystem::InitBoltedSpawnPos(_RBX);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+170h]
        vsubps  xmm1, xmm6, xmm0
        vcomiss xmm15, cs:__real@34000000
      }
      if ( !(v206 | v207) )
        __asm { vdivss  xmm7, xmm8, xmm15 }
      __asm
      {
        vmovaps xmm0, xmm7
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbx+180h], xmm1
        vmovups xmmword ptr [rbx+170h], xmm6
      }
      goto LABEL_71;
    }
    goto LABEL_14;
  }
  if ( (_RBX->m_flags & 0x20000000) == 0 )
  {
    v143 = *(_DWORD *)&_RBX->m_bolt.FxBoltBase & 0xFFF;
    if ( v143 == 4095 )
      goto LABEL_71;
    BoltTemporalBits = ParticleSystem::GetBoltTemporalBits(_RBX, _RBX->m_localClientNum, v143);
    v145 = _RBX->m_bolt.FxBoltBase;
    v146 = BoltTemporalBits == ((*(unsigned int *)&v145 >> 12) & 3);
    v147 = 0;
    m_localClientNum = _RBX->m_localClientNum;
    if ( (_RBX->m_flags & 2) != 0 )
    {
      _RAX = CG_GetPoseExtended(m_localClientNum, *(_WORD *)&v145 & 0xFFF, 1);
      v152 = _RAX;
      if ( _RAX )
      {
        __asm { vmovss  xmm0, dword ptr [rax+48h] }
        normal.v.m128_i32[3] = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+218h+normal.v]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rdi+4Ch], 10h
          vinsertps xmm3, xmm3, dword ptr [rdi+50h], 20h ; ' '
          vmovups xmmword ptr [rsp+218h+normal.v], xmm3
          vmulps  xmm0, xmm3, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
        }
        Float4RadianToQuat(v151, v150);
        Float4UnitQuatToAxis(v161, v160);
        __asm
        {
          vmovups xmmword ptr [rsp+218h+systemOrientationMat+10h], xmm1
          vmovups xmmword ptr [rsp+218h+systemOrientationMat], xmm0
          vmovups ymm3, ymmword ptr [rsp+218h+systemOrientationMat]
          vmovups ymmword ptr [rsp+218h+result.baseclass_0.x.v], ymm3
          vmovups xmmword ptr [rsp+218h+result.baseclass_0.z.v], xmm2
        }
        CG_GetPoseOrigin(v152, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+218h+outOrigin]
          vmovss  xmm1, dword ptr [rsp+218h+outOrigin+4]
        }
        normal.v.m128_i32[3] = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+218h+normal.v]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, xmm1, 10h
          vinsertps xmm3, xmm3, dword ptr [rsp+218h+outOrigin+8], 20h
          vmovups xmmword ptr [rsp+218h+result.w.v], xmm3
        }
        BoneOrientation = 1;
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      else
      {
        BoneOrientation = 0;
        v147 = (ParticleSystem::GetDef(_RBX)->flags & 0x100000) == 0;
      }
    }
    else
    {
      ParticleManager = ParticleManager::GetParticleManager(m_localClientNum);
      v168 = ParticleSystem::CalcBoltKey(_RBX);
      if ( v168 % 0x1003 >= 0x1003 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v169 = &ParticleManager->m_particleSystemBoneHashMap.m_buckets.m_data[v168 % 0x1003];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *)v169->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *)v169->m_listHead.m_sentinel.mp_next == v169 )
      {
LABEL_41:
        mp_next = NULL;
      }
      else
      {
        while ( 1 )
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v168 )
            break;
          mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *)mp_next->m_listHead.m_sentinel.mp_next;
          if ( mp_next == v169 )
            goto LABEL_41;
        }
      }
      if ( !mp_next || (_RSI = (char *)&mp_next[1].m_listHead.m_sentinel.mp_next + 4, mp_next == (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,orientation_t> > *)-12i64) )
      {
        BoneOrientation = FX_GetBoneOrientation(_RBX->m_localClientNum, *(_DWORD *)&_RBX->m_bolt.FxBoltBase & 0xFFF, (unsigned __int16)(*(_DWORD *)&_RBX->m_bolt.FxBoltBase >> 14), (orientation_t *)&systemOrientationMat);
        if ( BoneOrientation )
        {
          v176 = ParticleSystem::GetDef(_RBX);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1783, ASSERT_TYPE_ASSERT, "(!hasBolt)", "%s\n\tVFX ASSERT for effect: %s\n", "!hasBolt", v176->name) )
            __debugbreak();
        }
      }
      else
      {
        Float4x4LoadMat33Unaligned((const tmat33_t<vec3_t> *)&mp_next[3], &result);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vmovss  xmm1, dword ptr [rsi+4]
        }
        normal.v.m128_i32[3] = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+218h+normal.v]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, xmm1, 10h
          vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
          vmovups xmmword ptr [rsp+218h+result.w.v], xmm3
        }
        BoneOrientation = 1;
      }
    }
    if ( !v146 || !BoneOrientation )
    {
      v216 = ParticleManager::GetParticleManager(_RBX->m_localClientNum);
      if ( !v147 && (ParticleSystem::GetDef(_RBX)->flags & 0x100) == 0 )
      {
        ParticleManager::StopSystem(v216, _RBX);
        goto LABEL_71;
      }
      v99 = v216;
LABEL_70:
      ParticleManager::KillSystem(v99, _RBX);
      goto LABEL_71;
    }
    Particle_AssertFloat4IsNormalized(&result.x);
    Particle_AssertFloat4IsNormalized(&result.y);
    Particle_AssertFloat4IsNormalized(&result.z);
    m_flags = _RBX->m_flags;
    v178 = m_flags & 6;
    v179 = (unsigned __int64)m_flags >> 21;
    if ( v178 == 2 )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vmovaps xmm1, xmm6
        vmovdqa xmmword ptr [rsp+218h+systemOrientationMat], xmm1
        vshufps xmm0, xmm1, xmm1, 51h ; 'Q'
        vmovups xmmword ptr [rsp+218h+systemOrientationMat+10h], xmm0
        vshufps xmm1, xmm1, xmm1, 45h ; 'E'
        vmovups xmmword ptr [rsp+218h+systemOrientationMat+20h], xmm1
      }
      if ( (v179 & 1) == 0 )
      {
        ParticleSystem::SetSystemTransform(_RBX, &g_unit, &systemOrientationMat);
LABEL_65:
        IsBoneVisible = FX_IsBoneVisible(_RBX->m_localClientNum, *(_DWORD *)&_RBX->m_bolt.FxBoltBase & 0xFFF, (unsigned __int16)(*(_DWORD *)&_RBX->m_bolt.FxBoltBase >> 14));
        ParticleSystem::SetBoltBoneVisible(_RBX, IsBoneVisible);
        ParticleSystem::UpdateChildTransforms(_RBX);
        ParticleSystem::InitBoltedSpawnPos(_RBX);
        goto LABEL_71;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+150h]
        vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
        vshufps xmm3, xmm0, xmm0, 55h ; 'U'
        vshufps xmm4, xmm0, xmm0, 0
        vmulps  xmm1, xmm1, xmmword ptr [rsp+218h+result.baseclass_0.z.v]
        vaddps  xmm2, xmm1, xmmword ptr [rsp+218h+result.w.v]
        vmulps  xmm1, xmm3, xmmword ptr [rsp+218h+result.baseclass_0.y.v]
        vaddps  xmm3, xmm1, xmm2
        vmulps  xmm1, xmm4, xmmword ptr [rsp+218h+result.baseclass_0.x.v]
        vaddps  xmm7, xmm1, xmm3
        vmovups xmmword ptr [rsp+218h+var_1B8.v], xmm7
      }
      ParticleSystem::SetSystemTransform(_RBX, &v237, &systemOrientationMat);
      __asm
      {
        vsubps  xmm1, xmm7, xmmword ptr [rbx+170h]
        vcomiss xmm15, cs:__real@34000000
      }
      if ( v206 | v207 )
        __asm { vxorps  xmm0, xmm0, xmm0 }
      else
        __asm { vdivss  xmm0, xmm6, xmm15 }
      __asm
      {
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbx+170h], xmm7
      }
    }
    else
    {
      if ( (v179 & 1) != 0 )
      {
        Particle_AssertFloat4IsNormalized(&_RBX->m_bolt.offsetQuat);
        __asm { vmovups xmm0, xmmword ptr [rbx+160h] }
        Float4UnitQuatToAxis(v200, v199);
        __asm
        {
          vmovups xmmword ptr [rsp+218h+systemOrientationMat+10h], xmm1
          vmovups xmmword ptr [rsp+218h+systemOrientationMat], xmm0
          vmovups ymm3, ymmword ptr [rsp+218h+systemOrientationMat]
          vmovups ymmword ptr [rsp+218h+systemOrientationMat], ymm3
          vmovups xmmword ptr [rsp+218h+systemOrientationMat+20h], xmm2
          vmovups xmm0, xmmword ptr [rbx+150h]
          vmovups xmmword ptr [rsp+218h+systemOrientationMat+30h], xmm0
        }
        Particle_AssertFloat4IsNormalized(&systemOrientationMat.x);
        Particle_AssertFloat4IsNormalized(&systemOrientationMat.y);
        Particle_AssertFloat4IsNormalized(&systemOrientationMat.z);
        Float4x4Mul(&systemOrientationMat, &result, v203);
        __asm
        {
          vmovups xmmword ptr [rsp+218h+result.w.v], xmm3
          vmovups xmmword ptr [rsp+218h+result.baseclass_0.z.v], xmm2
          vmovups xmmword ptr [rsp+218h+result.baseclass_0.y.v], xmm1
          vmovups xmmword ptr [rsp+218h+result.baseclass_0.x.v], xmm0
          vmovups ymm2, ymmword ptr [rsp+218h+result.baseclass_0.x.v]
          vmovups ymmword ptr [rsp+218h+systemOrientationMat], ymm2
          vmovups ymm0, ymmword ptr [rsp+218h+result.baseclass_0.z.v]
          vmovups ymmword ptr [rsp+218h+systemOrientationMat+20h], ymm0
        }
        Particle_RotMatrixAutoRenormalize(&systemOrientationMat);
        ParticleSystem::SetSystemTransform(_RBX, &systemOrientationMat);
        __asm { vmovups xmm2, xmmword ptr [rsp+218h+systemOrientationMat+30h] }
      }
      else
      {
        Particle_RotMatrixAutoRenormalize(&result);
        ParticleSystem::SetSystemTransform(_RBX, &result);
        __asm { vmovups xmm2, xmmword ptr [rsp+218h+result.w.v] }
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+170h]
        vsubps  xmm3, xmm2, xmm0
        vcomiss xmm15, cs:__real@34000000
      }
      if ( v206 | v207 )
      {
        __asm { vxorps  xmm1, xmm1, xmm1 }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vdivss  xmm1, xmm0, xmm15
        }
      }
      __asm
      {
        vmovaps xmm0, xmm1
        vshufps xmm0, xmm0, xmm0, 0
        vmovups xmmword ptr [rbx+170h], xmm2
        vmulps  xmm1, xmm0, xmm3
      }
    }
    __asm { vmovups xmmword ptr [rbx+180h], xmm1 }
    goto LABEL_65;
  }
  outBoneVisible = 1;
  ParticleSystem::GetDef(_RBX);
  v100 = *(_DWORD *)&_RBX->m_bolt.FxBoltBase >> 14;
  v101 = *(_DWORD *)&_RBX->m_bolt.FxBoltBase & 0xFFF;
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)_RBX->m_localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 494, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  dword ptr [rsp+218h+outOrigin], xmm7
    vmovss  dword ptr [rsp+218h+outOrigin+4], xmm7
    vmovss  dword ptr [rsp+218h+outOrigin+8], xmm7
    vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovdqa xmmword ptr [rsp+218h+outQuat], xmm0
  }
  if ( !CgPredictedEntitySystem::IsPredictedEntityInUse(System, v101 - 2501) || !CgPredictedEntitySystem::GetBoneTransform(System, v101 - 2501, v100, &outOrigin, (tmat33_t<vec3_t> *)&systemOrientationMat, &outBoneVisible) )
  {
LABEL_14:
    v99 = ParticleManager::GetParticleManager(_RBX->m_localClientNum);
    goto LABEL_70;
  }
  AxisToQuat((const tmat33_t<vec3_t> *)&systemOrientationMat, &outQuat);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+218h+outQuat]
    vmulss  xmm1, xmm4, xmm4
    vmovss  xmm5, dword ptr [rsp+218h+outQuat+4]
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm6, dword ptr [rsp+218h+outQuat+8]
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm8, dword ptr [rsp+218h+outQuat+0Ch]
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm1, xmm3, xmm0
    vmovss  xmm9, cs:__real@3f800000
    vsubss  xmm2, xmm1, xmm9
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3b83126f
  }
  if ( !v206 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm8, xmm8
      vcvtss2sd xmm1, xmm6, xmm6
      vcvtss2sd xmm2, xmm5, xmm5
      vcvtss2sd xmm3, xmm4, xmm4
      vmovsd  [rsp+218h+var_1D0], xmm0
      vmovsd  [rsp+218h+var_1D8], xmm1
      vmovsd  [rsp+218h+var_1E0], xmm2
      vmovsd  [rsp+218h+var_1E8], xmm3
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 1680, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( quat ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( quat )", v229, v231, v233, v235) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, dword ptr [rsp+218h+outOrigin] }
  normal.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+218h+normal.v]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [rsp+218h+outOrigin+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rsp+218h+outOrigin+8], 20h
    vmovups xmmword ptr [rsp+218h+var_1B8.v], xmm6
    vmovups xmm2, xmmword ptr [rsp+218h+outQuat]
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vrsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, xmm2
    vmovups xmmword ptr [rsp+218h+systemPos.v], xmm2
  }
  Particle_AssertFloat4IsNormalized(&systemPos);
  __asm { vmovups xmm0, xmmword ptr [rsp+218h+systemPos.v] }
  Float4UnitQuatToAxis(v136, v135);
  __asm
  {
    vmovups xmmword ptr [rsp+218h+systemOrientationMat+10h], xmm1
    vmovups xmmword ptr [rsp+218h+systemOrientationMat], xmm0
    vmovups ymm3, ymmword ptr [rsp+218h+systemOrientationMat]
    vmovups ymmword ptr [rsp+218h+systemOrientationMat], ymm3
    vmovups xmmword ptr [rsp+218h+systemOrientationMat+20h], xmm2
  }
  ParticleSystem::SetSystemTransform(_RBX, &v237, &systemOrientationMat);
  ParticleSystem::UpdateChildTransforms(_RBX);
  ParticleSystem::InitBoltedSpawnPos(_RBX);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+170h]
    vsubps  xmm1, xmm6, xmm0
    vcomiss xmm15, cs:__real@34000000
  }
  if ( !(v206 | v207) )
    __asm { vdivss  xmm7, xmm9, xmm15 }
  __asm
  {
    vmovaps xmm0, xmm7
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm1, xmm0, xmm1
    vmovups xmmword ptr [rbx+180h], xmm1
    vmovups xmmword ptr [rbx+170h], xmm6
  }
  ParticleSystem::SetBoltBoneVisible(_RBX, outBoneVisible);
LABEL_71:
  _R11 = &v245;
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
  const ParticleSystemDef *m_pSystemDef; 
  const ParticleSystemDef *v25; 
  const ParticleSystemDef *v26; 
  int numEmitters; 
  ParticleEmitter *m_pEmitters; 
  ParticleEmitter *v29; 
  const ParticleState *ParticleState; 
  ParticleModuleInitSpawnShape *pModuleSpawnShape; 
  const ParticleSystemDef *v34; 
  ParticleEmitter *v35; 
  ParticleEmitter *v36; 
  ParticleModuleInitSpawnShape *SpawnShapeModuleExt; 
  const ParticleEmitterDef *EmitterDef; 
  const ParticleSystemDef *Def; 
  __int64 m_localClientNum; 
  unsigned int OcclusionQueryOffscreenRaycastHandle; 
  __int64 v55; 
  __int64 v56; 
  char v61; 
  char v62; 
  unsigned int v91; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  int v101; 
  __int64 v102; 
  int iFadeOutTime; 
  vec3_t position; 
  Bounds outOffset; 
  char v111; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _R14 = pos;
  _RDI = this;
  if ( (ParticleSystem::GetDef(this)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 848, ASSERT_TYPE_ASSERT, "(HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY ))", (const char *)&queryFormat, "HasDefFlag( PARTICLE_SYSTEM_DEF_FLAG_USE_OCCLUSION_QUERY )") )
    __debugbreak();
  if ( !_RDI->m_pModuleInitOcclusionQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 849, ASSERT_TYPE_ASSERT, "(m_pModuleInitOcclusionQuery)", (const char *)&queryFormat, "m_pModuleInitOcclusionQuery") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@447a0000
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm11, xmm7
    vmulss  xmm0, xmm2, dword ptr [rax+0Ch]
    vcvttss2si r13, xmm0
    vmulss  xmm0, xmm2, dword ptr [rax+10h]
    vcvttss2si rbx, xmm0
  }
  iFadeOutTime = _RBX;
  if ( _RDI->m_occlusionQueryHandle != 0xFFFF )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [r14]
      vmovaps xmmword ptr [rsp+130h+var_48+8], xmm6
      vmovss  dword ptr [rsp+130h+position], xmm1
      vextractps dword ptr [rsp+130h+position+4], xmm1, 1
      vextractps dword ptr [rsp+130h+position+8], xmm1, 2
    }
    if ( (ParticleSystem::GetDef(_RDI)->flags & 0x80) != 0 )
    {
      if ( !_RDI->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
        __debugbreak();
      m_pSystemDef = _RDI->m_pSystemDef;
      if ( !m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
        __debugbreak();
      v25 = _RDI->m_pSystemDef;
      if ( m_pSystemDef->occlusionOverrideEmitterIndex >= (unsigned int)v25->numEmitters )
      {
        if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
          __debugbreak();
        v26 = _RDI->m_pSystemDef;
        numEmitters = v26->numEmitters;
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
          __debugbreak();
        LODWORD(v98) = _RDI->m_pSystemDef->occlusionOverrideEmitterIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 865, ASSERT_TYPE_ASSERT, "(unsigned)( GetDef()->occlusionOverrideEmitterIndex ) < (unsigned)( GetDef()->numEmitters )", "GetDef()->occlusionOverrideEmitterIndex doesn't index GetDef()->numEmitters\n\t%i not in [0, %i)", v98, numEmitters) )
          __debugbreak();
      }
      m_pEmitters = _RDI->m_pEmitters;
      v29 = &m_pEmitters[ParticleSystem::GetDef(_RDI)->occlusionOverrideEmitterIndex];
      if ( !ParticleEmitter::GetEmitterDef(v29)->numStates )
      {
        LODWORD(v100) = ParticleEmitter::GetEmitterDef(v29)->numStates;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 868, ASSERT_TYPE_ASSERT, "(unsigned)( 0 ) < (unsigned)( emitter.GetNumStates() )", "0 doesn't index emitter.GetNumStates()\n\t%i not in [0, %i)", 0i64, v100) )
          __debugbreak();
      }
      if ( (v29->m_flags & 0x40) == 0 )
      {
        ParticleState = ParticleEmitter::GetParticleState(v29, 0);
        pModuleSpawnShape = (ParticleModuleInitSpawnShape *)ParticleState->m_spawnShapeTypeModule.pModuleSpawnShape;
        if ( pModuleSpawnShape )
        {
          ParticleModuleInitSpawnShape::GetOffsetForShape(pModuleSpawnShape, ParticleState, (float4 *)&outOffset);
          __asm
          {
            vmovups xmm1, xmmword ptr [r14]
            vaddps  xmm2, xmm1, xmmword ptr [rbp+57h+outOffset.v]
            vmovss  dword ptr [rsp+130h+position], xmm2
            vextractps dword ptr [rsp+130h+position+4], xmm2, 1
            vextractps dword ptr [rsp+130h+position+8], xmm2, 2
          }
        }
      }
      goto LABEL_52;
    }
    if ( (ParticleSystem::GetDef(_RDI)->flags & 0x8000000) == 0 )
    {
LABEL_52:
      RB_SetOcclusionQueryPosition(_RDI->m_occlusionQueryHandle, &position);
      if ( (_RDI->m_flags & 0x800000000i64) != 0 )
        RB_SetOcclusionQueryDepthHack(_RDI->m_occlusionQueryHandle, 1);
      _RAX = particle_occlusion_query_override_world_size;
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vmovss  xmm1, dword ptr [rax+28h]
      }
      if ( (_RDI->m_pModuleInitOcclusionQuery->m_flags & 0x4000) == 0 )
        __asm { vcomiss xmm1, xmm6 }
      if ( particle_occlusion_query_disable_world_size->current.enabled )
      {
        RB_InvalidateOcclusionQuerySize(_RDI->m_occlusionQueryHandle);
      }
      else
      {
        __asm
        {
          vcomiss xmm1, xmm6
          vmovaps xmm2, xmm1
        }
        RB_SetOcclusionQuerySize(_RDI->m_occlusionQueryHandle, *(float *)&_XMM1, *(float *)&_XMM2);
      }
      *(double *)&_XMM0 = RB_GetOcclusionQueryVisibility(_RDI->m_occlusionQueryHandle);
      __asm { vmovaps xmm11, xmm0 }
      if ( _RDI->m_pModuleInitOcclusionQuery->m_offscreenRaycast )
      {
        if ( RB_GetOcclusionQueryOffscreenRaycastSent(_RDI->m_occlusionQueryHandle) && RB_OcclusionQueryUseOffscreenRaycastResult(_RDI->m_occlusionQueryHandle) )
        {
          m_localClientNum = _RDI->m_localClientNum;
          if ( (unsigned int)m_localClientNum >= 2 )
          {
            LODWORD(v100) = 2;
            LODWORD(v98) = _RDI->m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 623, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v98, v100) )
              __debugbreak();
            LODWORD(v102) = 2;
            LODWORD(v99) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 609, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v99, v102) )
              __debugbreak();
          }
          if ( g_particleDeferredPhysicsRayCastResultValid[m_localClientNum][((unsigned __int8)g_particleDeferredPhysicsRayCastIndex[m_localClientNum] - 1) & 1] )
          {
            OcclusionQueryOffscreenRaycastHandle = RB_GetOcclusionQueryOffscreenRaycastHandle(_RDI->m_occlusionQueryHandle);
            v55 = _RDI->m_localClientNum;
            v56 = OcclusionQueryOffscreenRaycastHandle;
            if ( (unsigned int)v55 >= 2 )
            {
              LODWORD(v100) = 2;
              LODWORD(v98) = _RDI->m_localClientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 631, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v98, v100) )
                __debugbreak();
            }
            if ( (unsigned int)v56 >= 0x800 )
            {
              LODWORD(v100) = 2048;
              LODWORD(v98) = v56;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 632, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_RAY_CAST_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_RAY_CAST_LIST_MAX\n\t%i not in [0, %i)", v98, v100) )
                __debugbreak();
            }
            if ( (unsigned int)v55 >= 2 )
            {
              LODWORD(v100) = 2;
              LODWORD(v98) = v55;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 609, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v98, v100) )
                __debugbreak();
            }
            _RDX = 0x140000000ui64;
            _RAX = 18 * (v56 + (((((unsigned __int8)g_particleDeferredPhysicsRayCastIndex[v55] - 1) & 1) + 2 * v55) << 11));
            __asm
            {
              vmovss  xmm0, dword ptr rva ?g_particleDeferredPhysicsRayCastCreateList@@3PAY11IAA@UParticleDeferredPhysicsRayCastCreateData@@A.results.fraction[rdx+rax*8]; ParticleDeferredPhysicsRayCastCreateData (near * g_particleDeferredPhysicsRayCastCreateList)[2][2048]
              vcmpeqss xmm1, xmm0, xmm7
              vblendvps xmm11, xmm6, xmm7, xmm1
            }
          }
        }
        __asm
        {
          vmovss  dword ptr [rbp+57h+outOffset.v+0Ch], xmm6
          vmovss  [rbp+57h+var_C0], xmm6
          vmovss  [rbp+57h+var_BC], xmm6
          vmovss  dword ptr [rbp+57h+outOffset.v], xmm6
          vmovss  dword ptr [rbp+57h+outOffset.v+4], xmm6
          vmovss  dword ptr [rbp+57h+outOffset.v+8], xmm6
        }
        if ( (ParticleSystem::GetDef(_RDI)->flags & 0x400) != 0 )
        {
          _RAX = ParticleSystem::GetDef(_RDI);
          __asm
          {
            vmovss  xmm7, cs:__real@49742400
            vcomiss xmm7, dword ptr [rax+38h]
          }
          if ( v61 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+130h+position]
              vmovaps xmmword ptr [rsp+130h+var_68+8], xmm8
              vsubss  xmm8, xmm0, dword ptr [r15]
              vmovss  xmm0, dword ptr [rsp+130h+position+4]
              vmovaps [rsp+130h+var_78+8], xmm9
              vsubss  xmm9, xmm0, dword ptr [r15+4]
              vmovss  xmm0, dword ptr [rsp+130h+position+8]
              vmovaps [rsp+130h+var_88+8], xmm10
              vsubss  xmm10, xmm0, dword ptr [r15+8]
              vmulss  xmm1, xmm9, xmm9
              vmulss  xmm0, xmm8, xmm8
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm10, xmm10
              vmovaps xmmword ptr [rsp+130h+var_A8+8], xmm12
              vaddss  xmm12, xmm2, xmm1
              vcomiss xmm12, xmm6
            }
            if ( v61 | v62 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
              __debugbreak();
            __asm
            {
              vmovaps xmm1, xmm12
              vmovaps xmm12, xmmword ptr [rsp+130h+var_A8+8]
              vrsqrtss xmm3, xmm1, xmm1
              vmulss  xmm0, xmm3, xmm8
              vmovaps xmm8, xmmword ptr [rsp+130h+var_68+8]
              vmulss  xmm1, xmm0, xmm7
              vaddss  xmm2, xmm1, dword ptr [r15]
              vmulss  xmm0, xmm3, xmm9
              vmovaps xmm9, [rsp+130h+var_78+8]
              vmulss  xmm1, xmm0, xmm7
              vmovss  dword ptr [rsp+130h+position], xmm2
              vaddss  xmm2, xmm1, dword ptr [r15+4]
              vmulss  xmm0, xmm3, xmm10
              vmovaps xmm10, [rsp+130h+var_88+8]
              vmulss  xmm1, xmm0, xmm7
              vmovss  dword ptr [rsp+130h+position+4], xmm2
              vaddss  xmm2, xmm1, dword ptr [r15+8]
              vmovss  dword ptr [rsp+130h+position+8], xmm2
            }
          }
        }
        v91 = Particle_AddDeferredPhysicsRayCastCreate(_RDI->m_localClientNum, &pCamera->origin, &position, &outOffset, 8389889);
        RB_OcclusionQueryOffscreenRaycastSent(_RDI->m_occlusionQueryHandle, v91);
      }
      __asm { vmovaps xmm6, xmmword ptr [rsp+130h+var_48+8] }
      goto LABEL_86;
    }
    if ( !_RDI->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
      __debugbreak();
    v34 = _RDI->m_pSystemDef;
    if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
      __debugbreak();
    if ( v34->occlusionOverrideEmitterIndex >= (unsigned int)_RDI->m_pSystemDef->numEmitters )
    {
      v101 = ParticleSystem::GetDef(_RDI)->numEmitters;
      LODWORD(v98) = ParticleSystem::GetDef(_RDI)->occlusionOverrideEmitterIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 886, ASSERT_TYPE_ASSERT, "(unsigned)( GetDef()->occlusionOverrideEmitterIndex ) < (unsigned)( GetDef()->numEmitters )", "GetDef()->occlusionOverrideEmitterIndex doesn't index GetDef()->numEmitters\n\t%i not in [0, %i)", v98, v101) )
        __debugbreak();
    }
    v35 = _RDI->m_pEmitters;
    v36 = &v35[ParticleSystem::GetDef(_RDI)->occlusionOverrideEmitterIndex];
    SpawnShapeModuleExt = (ParticleModuleInitSpawnShape *)ParticleEmitter::GetSpawnShapeModuleExt(v36, 0);
    if ( !SpawnShapeModuleExt )
    {
      ParticleEmitter::GetEmitterDef(v36);
      Def = ParticleSystem::GetDef(_RDI);
      Com_PrintWarning(21, "WARNING: 'Override System Location' requires valid spawn shape: %s, %s\n", Def->name, (const char *)&queryFormat.fmt + 3);
      goto LABEL_52;
    }
    ParticleModuleInitSpawnShape::GetOffsetForShape(SpawnShapeModuleExt, v36, (float4 *)&outOffset);
    EmitterDef = ParticleEmitter::GetEmitterDef(v36);
    if ( EmitterDef->numStates <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.cpp", 896, ASSERT_TYPE_ASSERT, "( ( emitterDef->numStates > 0 ) )", "( emitterDef->GetName() ) = %s", (const char *)&queryFormat.fmt + 3) )
      __debugbreak();
    if ( (EmitterDef->stateDefs->flags & 2) != 0 )
    {
      if ( (EmitterDef->stateDefs->flags & 0x10000000) == 0 )
      {
        ParticleEmitter::GetEmitterTransformWithCameraOffset(v36);
        goto LABEL_50;
      }
    }
    else if ( (EmitterDef->stateDefs->flags & 0x10000000) == 0 )
    {
      ParticleEmitter::GetSystemOwner(v36);
LABEL_50:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+57h+outOffset.v]
        vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
        vshufps xmm3, xmm0, xmm0, 55h ; 'U'
        vshufps xmm4, xmm0, xmm0, 0
        vmulps  xmm0, xmm2, xmmword ptr [rax+20h]
        vaddps  xmm2, xmm0, xmmword ptr [rax+30h]
        vmulps  xmm0, xmm3, xmmword ptr [rax+10h]
        vaddps  xmm1, xmm0, xmm2
        vmulps  xmm0, xmm4, xmmword ptr [rax]
        vaddps  xmm1, xmm0, xmm1
        vmovss  dword ptr [rsp+130h+position], xmm1
        vextractps dword ptr [rsp+130h+position+4], xmm1, 1
        vextractps dword ptr [rsp+130h+position+8], xmm1, 2
      }
      goto LABEL_52;
    }
    ParticleEmitter::GetEmitterTransformWithCameraOffsetPosOnly(v36);
    goto LABEL_50;
  }
LABEL_86:
  __asm { vmovss  xmm0, dword ptr [rdi+220h]; fCurrent }
  if ( msecDelta < 0 )
    msecDelta = 0;
  __asm { vmovaps xmm1, xmm11; fGoal }
  *(double *)&_XMM0 = R_UpdateOverTime(*(float *)&_XMM0, *(float *)&_XMM1, _R13, iFadeOutTime, msecDelta);
  __asm { vmovss  dword ptr [rdi+220h], xmm0 }
  _R11 = &v111;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
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

