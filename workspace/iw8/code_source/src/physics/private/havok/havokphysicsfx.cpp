/*
==============
HavokPhysicsFX_CreateParticles
==============
*/

int __fastcall HavokPhysicsFX_CreateParticles(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int shapeIndex, int numParticles, int *particleIds)
{
  return ?HavokPhysicsFX_CreateParticles@@YAHW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HHPEAH@Z(worldId, pipelineInstance, shapeIndex, numParticles, particleIds);
}

/*
==============
HavokPhysicsFX_OnParticlePostSolveEvent
==============
*/

void __fastcall HavokPhysicsFX_OnParticlePostSolveEvent(const hknpEventHandlerInput *input, const hknpEvent *event)
{
  ?HavokPhysicsFX_OnParticlePostSolveEvent@@YAXAEBUhknpEventHandlerInput@@AEBUhknpEvent@@@Z(input, event);
}

/*
==============
HavokPhysicsFX_PlaySounds
==============
*/

void __fastcall HavokPhysicsFX_PlaySounds(LocalClientNum_t localClientNum, Physics_WorldId worldId)
{
  ?HavokPhysicsFX_PlaySounds@@YAXW4LocalClientNum_t@@W4Physics_WorldId@@@Z(localClientNum, worldId);
}

/*
==============
HavokPhysicsFX_GetNumPipelineInstances
==============
*/

int __fastcall HavokPhysicsFX_GetNumPipelineInstances(Physics_WorldId worldId)
{
  return ?HavokPhysicsFX_GetNumPipelineInstances@@YAHW4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysicsFX_GetParticleOrientation
==============
*/

void __fastcall HavokPhysicsFX_GetParticleOrientation(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec4_t *orientation)
{
  ?HavokPhysicsFX_GetParticleOrientation@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEATvec4_t@@@Z(worldId, pipelineInstance, particleId, orientation);
}

/*
==============
HavokPhysicsFX_GetParticlePositions
==============
*/

void __fastcall HavokPhysicsFX_GetParticlePositions(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, hkArray<hkVector4f,hkContainerHeapAllocator> *positions)
{
  ?HavokPhysicsFX_GetParticlePositions@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHAEAV?$hkArray@VhkVector4f@@UhkContainerHeapAllocator@@@@@Z(worldId, pipelineInstance, numParticles, particleIds, positions);
}

/*
==============
HavokPhysicsFX_SetParticlePositions
==============
*/

void __fastcall HavokPhysicsFX_SetParticlePositions(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, hkArray<hkVector4f,hkContainerHeapAllocator> *positions)
{
  ?HavokPhysicsFX_SetParticlePositions@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHAEAV?$hkArray@VhkVector4f@@UhkContainerHeapAllocator@@@@@Z(worldId, pipelineInstance, numParticles, particleIds, positions);
}

/*
==============
HavokPhysicsFX_SetParticleAngularVelocity
==============
*/

void __fastcall HavokPhysicsFX_SetParticleAngularVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec3_t *velocity)
{
  ?HavokPhysicsFX_SetParticleAngularVelocity@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEBTvec3_t@@@Z(worldId, pipelineInstance, particleId, velocity);
}

/*
==============
HavokPhysicsFX_Pipeline::~HavokPhysicsFX_Pipeline
==============
*/

void __fastcall HavokPhysicsFX_Pipeline::~HavokPhysicsFX_Pipeline(HavokPhysicsFX_Pipeline *this)
{
  ??1HavokPhysicsFX_Pipeline@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsFX_RequestPipeline
==============
*/

HavokPhysicsFX_Pipeline *__fastcall HavokPhysicsFX_RequestPipeline(Physics_WorldId worldId, PhysicsFXPipeline *pipelineAsset, PhysicsFXShape *shapeAsset, int numParticles, int *shapeIndex)
{
  return ?HavokPhysicsFX_RequestPipeline@@YAPEAVHavokPhysicsFX_Pipeline@@W4Physics_WorldId@@PEAUPhysicsFXPipeline@@PEAUPhysicsFXShape@@HPEAH@Z(worldId, pipelineAsset, shapeAsset, numParticles, shapeIndex);
}

/*
==============
HavokPhysicsFX_RegisterWorld
==============
*/

void __fastcall HavokPhysicsFX_RegisterWorld(Physics_WorldId worldId)
{
  ?HavokPhysicsFX_RegisterWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysicsFX_Pipeline::HavokPhysicsFX_Pipeline
==============
*/

void __fastcall HavokPhysicsFX_Pipeline::HavokPhysicsFX_Pipeline(HavokPhysicsFX_Pipeline *this, Physics_WorldId worldId, PhysicsFXPipeline *asset)
{
  ??0HavokPhysicsFX_Pipeline@@QEAA@W4Physics_WorldId@@PEAUPhysicsFXPipeline@@@Z(this, worldId, asset);
}

/*
==============
HavokPhysicsFX_SetParticleOrientation
==============
*/

void __fastcall HavokPhysicsFX_SetParticleOrientation(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec4_t *orientation)
{
  ?HavokPhysicsFX_SetParticleOrientation@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEBTvec4_t@@@Z(worldId, pipelineInstance, particleId, orientation);
}

/*
==============
HavokPhysicsFX_SetParticleOrientations
==============
*/

void __fastcall HavokPhysicsFX_SetParticleOrientations(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec4_t *orientations)
{
  ?HavokPhysicsFX_SetParticleOrientations@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEBTvec4_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, orientations);
}

/*
==============
HavokPhysicsFX_GetParticleAngularVelocities
==============
*/

void __fastcall HavokPhysicsFX_GetParticleAngularVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec3_t *velocities)
{
  ?HavokPhysicsFX_GetParticleAngularVelocities@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEATvec3_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, velocities);
}

/*
==============
HavokPhysicsFX_IsInitialized
==============
*/

bool __fastcall HavokPhysicsFX_IsInitialized()
{
  return ?HavokPhysicsFX_IsInitialized@@YA_NXZ();
}

/*
==============
HavokPhysicsFX_ReleasePipeline
==============
*/

bool __fastcall HavokPhysicsFX_ReleasePipeline(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles)
{
  return ?HavokPhysicsFX_ReleasePipeline@@YA_NW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@H@Z(worldId, pipelineInstance, numParticles);
}

/*
==============
HavokPhysicsFX_SetParticleScale
==============
*/

void __fastcall HavokPhysicsFX_SetParticleScale(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, float scale)
{
  ?HavokPhysicsFX_SetParticleScale@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HM@Z(worldId, pipelineInstance, particleId, scale);
}

/*
==============
HavokPhysicsFX_DestroyParticles
==============
*/

void __fastcall HavokPhysicsFX_DestroyParticles(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds)
{
  ?HavokPhysicsFX_DestroyParticles@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAH@Z(worldId, pipelineInstance, numParticles, particleIds);
}

/*
==============
HavokPhysicsFX_GetParticleScales
==============
*/

void __fastcall HavokPhysicsFX_GetParticleScales(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, float *scales)
{
  ?HavokPhysicsFX_GetParticleScales@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEAM@Z(worldId, pipelineInstance, numParticles, particleIds, scales);
}

/*
==============
HavokPhysicsFX_GetParticlePosition
==============
*/

void __fastcall HavokPhysicsFX_GetParticlePosition(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, hkVector4f *position)
{
  ?HavokPhysicsFX_GetParticlePosition@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEAVhkVector4f@@@Z(worldId, pipelineInstance, particleId, position);
}

/*
==============
HavokPhysicsFX_GetParticleLinearVelocity
==============
*/

void __fastcall HavokPhysicsFX_GetParticleLinearVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, hkVector4f *velocity)
{
  ?HavokPhysicsFX_GetParticleLinearVelocity@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEAVhkVector4f@@@Z(worldId, pipelineInstance, particleId, velocity);
}

/*
==============
HavokPhysicsFX_GetParticleOrientations
==============
*/

void __fastcall HavokPhysicsFX_GetParticleOrientations(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec4_t *orientations)
{
  ?HavokPhysicsFX_GetParticleOrientations@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEATvec4_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, orientations);
}

/*
==============
HavokPhysicsFX_SetParticleLinearVelocities
==============
*/

void __fastcall HavokPhysicsFX_SetParticleLinearVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, hkArray<hkVector4f,hkContainerHeapAllocator> *velocities)
{
  ?HavokPhysicsFX_SetParticleLinearVelocities@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHAEAV?$hkArray@VhkVector4f@@UhkContainerHeapAllocator@@@@@Z(worldId, pipelineInstance, numParticles, particleIds, velocities);
}

/*
==============
HavokPhysicsFX_UnregisterWorld
==============
*/

void __fastcall HavokPhysicsFX_UnregisterWorld(Physics_WorldId worldId)
{
  ?HavokPhysicsFX_UnregisterWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysicsFX_LinAngDampingIntegratorTask::process
==============
*/

void __fastcall HavokPhysicsFX_LinAngDampingIntegratorTask::process(HavokPhysicsFX_LinAngDampingIntegratorTask *this, const hkTask::Input *input)
{
  ?process@HavokPhysicsFX_LinAngDampingIntegratorTask@@EEAAXAEBUInput@hkTask@@@Z(this, input);
}

/*
==============
HavokPhysicsFX_SetParticlePosition
==============
*/

void __fastcall HavokPhysicsFX_SetParticlePosition(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, hkVector4f *position)
{
  ?HavokPhysicsFX_SetParticlePosition@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEAVhkVector4f@@@Z(worldId, pipelineInstance, particleId, position);
}

/*
==============
HavokPhysicsFX_ParticlesUpdated
==============
*/

void __fastcall HavokPhysicsFX_ParticlesUpdated(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds)
{
  ?HavokPhysicsFX_ParticlesUpdated@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAH@Z(worldId, pipelineInstance, numParticles, particleIds);
}

/*
==============
HavokPhysicsFX_Shutdown
==============
*/

void HavokPhysicsFX_Shutdown(void)
{
  ?HavokPhysicsFX_Shutdown@@YAXXZ();
}

/*
==============
HavokPhysicsFX_SetParticleScales
==============
*/

void __fastcall HavokPhysicsFX_SetParticleScales(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, float *scales)
{
  ?HavokPhysicsFX_SetParticleScales@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEAM@Z(worldId, pipelineInstance, numParticles, particleIds, scales);
}

/*
==============
HavokPhysicsFX_SetParticleAngularVelocities
==============
*/

void __fastcall HavokPhysicsFX_SetParticleAngularVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec3_t *velocities)
{
  ?HavokPhysicsFX_SetParticleAngularVelocities@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEBTvec3_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, velocities);
}

/*
==============
HavokPhysicsFX_GetNumAllocatedParticles
==============
*/

int __fastcall HavokPhysicsFX_GetNumAllocatedParticles(Physics_WorldId worldId)
{
  return ?HavokPhysicsFX_GetNumAllocatedParticles@@YAHW4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysicsFX_GetParticleScale
==============
*/

void __fastcall HavokPhysicsFX_GetParticleScale(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, float *scale)
{
  ?HavokPhysicsFX_GetParticleScale@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAM@Z(worldId, pipelineInstance, particleId, scale);
}

/*
==============
HavokPhysicsFX_GetParticleLinearVelocities
==============
*/

void __fastcall HavokPhysicsFX_GetParticleLinearVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, hkArray<hkVector4f,hkContainerHeapAllocator> *velocities)
{
  ?HavokPhysicsFX_GetParticleLinearVelocities@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHAEAV?$hkArray@VhkVector4f@@UhkContainerHeapAllocator@@@@@Z(worldId, pipelineInstance, numParticles, particleIds, velocities);
}

/*
==============
HavokPhysicsFX_GetParticleAngularVelocity
==============
*/

void __fastcall HavokPhysicsFX_GetParticleAngularVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec3_t *velocity)
{
  ?HavokPhysicsFX_GetParticleAngularVelocity@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEATvec3_t@@@Z(worldId, pipelineInstance, particleId, velocity);
}

/*
==============
HavokPhysicsFX_BasicIntegratorTask::process
==============
*/

void __fastcall HavokPhysicsFX_BasicIntegratorTask::process(HavokPhysicsFX_BasicIntegratorTask *this, const hkTask::Input *input)
{
  ?process@HavokPhysicsFX_BasicIntegratorTask@@EEAAXAEBUInput@hkTask@@@Z(this, input);
}

/*
==============
HavokPhysicsFX_HasPipeline
==============
*/

bool __fastcall HavokPhysicsFX_HasPipeline(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance)
{
  return ?HavokPhysicsFX_HasPipeline@@YA_NW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@@Z(worldId, pipelineInstance);
}

/*
==============
HavokPhysicsFX_StepWorld
==============
*/

void __fastcall HavokPhysicsFX_StepWorld(Physics_WorldId worldId)
{
  ?HavokPhysicsFX_StepWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysicsFX_GetFXWorld
==============
*/

HavokPhysicsFX_World *__fastcall HavokPhysicsFX_GetFXWorld(Physics_WorldId worldId)
{
  return ?HavokPhysicsFX_GetFXWorld@@YAPEAUHavokPhysicsFX_World@@W4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysicsFX_Init
==============
*/

void HavokPhysicsFX_Init(void)
{
  ?HavokPhysicsFX_Init@@YAXXZ();
}

/*
==============
HavokPhysicsFX_GetParticleImpactAndClear
==============
*/

void __fastcall HavokPhysicsFX_GetParticleImpactAndClear(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, bool *impact, Particle_OnImpactData *data)
{
  ?HavokPhysicsFX_GetParticleImpactAndClear@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEA_NAEAUParticle_OnImpactData@@@Z(worldId, pipelineInstance, particleId, impact, data);
}

/*
==============
HavokPhysicsFX_SetParticleLinearVelocity
==============
*/

void __fastcall HavokPhysicsFX_SetParticleLinearVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, hkVector4f *velocity)
{
  ?HavokPhysicsFX_SetParticleLinearVelocity@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEAVhkVector4f@@@Z(worldId, pipelineInstance, particleId, velocity);
}

/*
==============
HavokPhysicsFX_Pipeline::HavokPhysicsFX_Pipeline
==============
*/
void HavokPhysicsFX_Pipeline::HavokPhysicsFX_Pipeline(HavokPhysicsFX_Pipeline *this, Physics_WorldId worldId, PhysicsFXPipeline *asset)
{
  hkBitField *p_m_impactRegistered; 
  hkMemoryAllocator *v5; 
  int v6; 
  unsigned int *v7; 
  int v8; 
  int numParticlesPerInstance; 
  hkMemoryAllocator *v10; 
  int v11; 
  int v12; 
  int v13; 
  int m_remainingParticles; 
  hkMemoryAllocator *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  hkMemoryAllocator *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  hkMemoryAllocator *v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  hkMemoryAllocator *v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  hkMemoryAllocator *v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  hkMemoryAllocator *v40; 
  hkArray<Particle_OnImpactData,hkContainerHeapAllocator> *p_m_impactData; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  __int64 v46; 
  __int64 v47; 
  PhysicsFXPipelineIntegratorType type; 
  hkMemoryRouter *Value; 
  _QWORD *v50; 
  _QWORD *v51; 
  hkMemoryRouter *v52; 
  _QWORD *v53; 
  int v54; 
  int numInOut; 
  int v58; 

  this->m_propertyBag.m_bag = NULL;
  this->m_memSizeAndFlags = -1;
  this->m_refCount = 1;
  this->__vftable = (HavokPhysicsFX_Pipeline_vtbl *)&HavokPhysicsFX_Pipeline::`vftable';
  this->m_collisionFilterUserData.collisionBuffer = 0.0;
  this->m_collisionFilterUserData.ignoreBodies = NULL;
  this->m_collisionFilterUserData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  this->m_collisionFilterUserData.nonBrushShape = NULL;
  this->m_collisionFilterUserData.secondPassShape = NULL;
  this->m_collisionFilterUserData.phaseSelection = All;
  this->m_shapes.m_data = NULL;
  this->m_shapes.m_size = 0;
  this->m_shapes.m_capacityAndFlags = 0x80000000;
  this->m_positions.m_data = NULL;
  this->m_positions.m_size = 0;
  this->m_positions.m_capacityAndFlags = 0x80000000;
  this->m_linearVelocities.m_data = NULL;
  this->m_linearVelocities.m_size = 0;
  this->m_linearVelocities.m_capacityAndFlags = 0x80000000;
  this->m_orientations.m_data = NULL;
  this->m_orientations.m_size = 0;
  this->m_orientations.m_capacityAndFlags = 0x80000000;
  this->m_angularVelocities.m_data = NULL;
  this->m_angularVelocities.m_size = 0;
  this->m_angularVelocities.m_capacityAndFlags = 0x80000000;
  this->m_scales.m_data = NULL;
  this->m_scales.m_size = 0;
  this->m_scales.m_capacityAndFlags = 0x80000000;
  this->m_shapeIndices.m_data = NULL;
  this->m_shapeIndices.m_size = 0;
  this->m_shapeIndices.m_capacityAndFlags = 0x80000000;
  p_m_impactRegistered = &this->m_impactRegistered;
  v58 = (unsigned __int64)&this->m_impactRegistered >> 32;
  this->m_impactRegistered.m_storage.m_words.m_data = NULL;
  this->m_impactRegistered.m_storage.m_words.m_size = 0;
  this->m_impactRegistered.m_storage.m_words.m_capacityAndFlags = 0x80000000;
  numInOut = 0;
  v5 = hkMemHeapAllocator();
  v6 = numInOut;
  v54 = numInOut;
  if ( numInOut )
  {
    v7 = (unsigned int *)hkMemoryAllocator::bufAlloc2(v5, 4, &numInOut);
    v6 = numInOut;
  }
  else
  {
    v7 = NULL;
  }
  v8 = 0x80000000;
  if ( v6 )
    v8 = v6;
  p_m_impactRegistered->m_storage.m_words.m_data = v7;
  this->m_impactRegistered.m_storage.m_words.m_size = v54;
  this->m_impactRegistered.m_storage.m_words.m_capacityAndFlags = v8;
  this->m_impactRegistered.m_storage.m_numBits = 0;
  this->m_impactData.m_data = NULL;
  this->m_impactData.m_size = 0;
  this->m_impactData.m_capacityAndFlags = 0x80000000;
  this->m_worldId = worldId;
  this->m_ignoreBodies = HavokPhysics_AllocateIgnoreBodies(0, 0);
  this->m_asset = asset;
  numParticlesPerInstance = asset->numParticlesPerInstance;
  this->m_remainingParticles = numParticlesPerInstance;
  v10 = hkMemHeapAllocator();
  v11 = this->m_positions.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v11 < numParticlesPerInstance )
  {
    v12 = 2 * v11;
    if ( (unsigned int)v12 >= 0x3FFFFFFF )
      v12 = 1073741822;
    v13 = numParticlesPerInstance;
    if ( numParticlesPerInstance < v12 )
      v13 = v12;
    hkArrayUtil::_reserve(v10, &this->m_positions, v13, 16);
  }
  this->m_positions.m_size = numParticlesPerInstance;
  m_remainingParticles = this->m_remainingParticles;
  v15 = hkMemHeapAllocator();
  v16 = this->m_linearVelocities.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v16 < m_remainingParticles )
  {
    v17 = 2 * v16;
    if ( (unsigned int)v17 >= 0x3FFFFFFF )
      v17 = 1073741822;
    v18 = m_remainingParticles;
    if ( m_remainingParticles < v17 )
      v18 = v17;
    hkArrayUtil::_reserve(v15, &this->m_linearVelocities, v18, 16);
  }
  this->m_linearVelocities.m_size = m_remainingParticles;
  v19 = this->m_remainingParticles;
  v20 = hkMemHeapAllocator();
  v21 = this->m_orientations.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v21 < v19 )
  {
    v22 = 2 * v21;
    if ( (unsigned int)v22 >= 0x3FFFFFFF )
      v22 = 1073741822;
    v23 = v19;
    if ( v19 < v22 )
      v23 = v22;
    hkArrayUtil::_reserve(v20, &this->m_orientations, v23, 16);
  }
  this->m_orientations.m_size = v19;
  v24 = this->m_remainingParticles;
  v25 = hkMemHeapAllocator();
  v26 = this->m_angularVelocities.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v26 < v24 )
  {
    v27 = 2 * v26;
    if ( (unsigned int)v27 >= 0x3FFFFFFF )
      v27 = 1073741822;
    v28 = v24;
    if ( v24 < v27 )
      v28 = v27;
    hkArrayUtil::_reserve(v25, &this->m_angularVelocities, v28, 16);
  }
  this->m_angularVelocities.m_size = v24;
  v29 = this->m_remainingParticles;
  v30 = hkMemHeapAllocator();
  v31 = this->m_scales.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v31 < v29 )
  {
    v32 = 2 * v31;
    if ( (unsigned int)v32 >= 0x3FFFFFFF )
      v32 = 1073741822;
    v33 = v29;
    if ( v29 < v32 )
      v33 = v32;
    hkArrayUtil::_reserve(v30, &this->m_scales, v33, 4);
  }
  this->m_scales.m_size = v29;
  v34 = this->m_remainingParticles;
  v35 = hkMemHeapAllocator();
  v36 = this->m_shapeIndices.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v36 < v34 )
  {
    v37 = 2 * v36;
    if ( (unsigned int)v37 >= 0x3FFFFFFF )
      v37 = 1073741822;
    v38 = v34;
    if ( v34 < v37 )
      v38 = v37;
    hkArrayUtil::_reserve(v35, &this->m_shapeIndices, v38, 4);
  }
  this->m_shapeIndices.m_size = v34;
  hkBitFieldBase<hkBitFieldStorage<hkArray<unsigned int,hkContainerHeapAllocator>>>::setSizeAndFill(&this->m_impactRegistered, 0, this->m_remainingParticles, 0);
  v39 = this->m_remainingParticles;
  v40 = hkMemHeapAllocator();
  p_m_impactData = &this->m_impactData;
  v42 = this->m_impactData.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v42 < v39 )
  {
    v43 = 2 * v42;
    if ( (unsigned int)v43 >= 0x3FFFFFFF )
      v43 = 1073741822;
    v44 = v39;
    if ( v39 < v43 )
      v44 = v43;
    hkArrayUtil::_reserve(v40, &this->m_impactData, v44, 80);
    p_m_impactData = &this->m_impactData;
  }
  p_m_impactData->m_size = v39;
  v45 = 0;
  if ( this->m_remainingParticles > 0 )
  {
    v46 = 0i64;
    v47 = 0i64;
    do
    {
      this->m_positions.m_data[v47] = 0i64;
      this->m_linearVelocities.m_data[v47] = 0i64;
      this->m_orientations.m_data[v47].m_vec.m_quad = g_vectorfConstants[35];
      this->m_angularVelocities.m_data[v47] = 0i64;
      this->m_scales.m_data[v46] = 0.0;
      this->m_shapeIndices.m_data[v46] = 0;
      ++v45;
      ++v47;
      ++v46;
    }
    while ( v45 < this->m_remainingParticles );
  }
  memset_0(p_m_impactData->m_data, 0, 80i64 * this->m_impactData.m_size);
  this->m_colliderId.m_serialAndIndex = 0xFFFFFF;
  type = asset->integrator.type;
  if ( type )
  {
    if ( type != Types_PhysicsFXPipelineIntegrator_LinAngDamping )
      return;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    v50 = Value->m_heap->blockAlloc(Value->m_heap, 48i64);
    v51 = v50;
    if ( v50 )
    {
      v50[1] = 0i64;
      v50[2] = 0i64;
      v50[3] = 0i64;
      v50[4] = 0i64;
      v50[5] = 0i64;
      *v50 = &HavokPhysicsFX_LinAngDampingIntegratorTask::`vftable';
      *((_DWORD *)v50 + 8) = this->m_worldId;
      v50[5] = this;
    }
    else
    {
      v51 = NULL;
      MEMORY[0x20] = this->m_worldId;
      MEMORY[0x28] = this;
    }
  }
  else
  {
    v52 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v52 )
      v52 = hkMemoryRouter::s_fallbackRouter;
    v53 = v52->m_heap->blockAlloc(v52->m_heap, 32i64);
    v51 = v53;
    if ( v53 )
    {
      v53[1] = 0i64;
      v53[2] = 0i64;
      v53[3] = 0i64;
      *v53 = &HavokPhysicsFX_BasicIntegratorTask::`vftable';
    }
    else
    {
      v51 = NULL;
    }
    *((_DWORD *)v51 + 2) = this->m_worldId;
    v51[2] = this;
  }
  this->m_stepTask = (hkTask *)v51;
}

/*
==============
HavokPhysicsFX_Pipeline::~HavokPhysicsFX_Pipeline
==============
*/
void HavokPhysicsFX_Pipeline::~HavokPhysicsFX_Pipeline(HavokPhysicsFX_Pipeline *this)
{
  hkMemoryAllocator *v2; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v4; 
  int v5; 
  hkMemoryAllocator *v6; 
  int v7; 
  hkMemoryAllocator *v8; 
  int v9; 
  hkMemoryAllocator *v10; 
  int v11; 
  hkMemoryAllocator *v12; 
  int v13; 
  hkMemoryAllocator *v14; 
  int v15; 
  hkMemoryAllocator *v16; 
  int v17; 
  hkMemoryAllocator *v18; 
  int v19; 

  this->__vftable = (HavokPhysicsFX_Pipeline_vtbl *)&HavokPhysicsFX_Pipeline::`vftable';
  if ( !this->m_ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 150, ASSERT_TYPE_ASSERT, "(m_ignoreBodies)", (const char *)&queryFormat, "m_ignoreBodies", -2i64) )
    __debugbreak();
  HavokPhysics_FreeIgnoreBodies(this->m_ignoreBodies);
  v2 = hkMemHeapAllocator();
  this->m_impactData.m_size = 0;
  m_capacityAndFlags = this->m_impactData.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v2, this->m_impactData.m_data, 80, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_impactData.m_data = NULL;
  this->m_impactData.m_capacityAndFlags = 0x80000000;
  v4 = hkMemHeapAllocator();
  this->m_impactRegistered.m_storage.m_words.m_size = 0;
  v5 = this->m_impactRegistered.m_storage.m_words.m_capacityAndFlags;
  if ( v5 >= 0 )
    hkMemoryAllocator::bufFree2(v4, this->m_impactRegistered.m_storage.m_words.m_data, 4, v5 & 0x3FFFFFFF);
  this->m_impactRegistered.m_storage.m_words.m_data = NULL;
  this->m_impactRegistered.m_storage.m_words.m_capacityAndFlags = 0x80000000;
  v6 = hkMemHeapAllocator();
  this->m_shapeIndices.m_size = 0;
  v7 = this->m_shapeIndices.m_capacityAndFlags;
  if ( v7 >= 0 )
    hkMemoryAllocator::bufFree2(v6, this->m_shapeIndices.m_data, 4, v7 & 0x3FFFFFFF);
  this->m_shapeIndices.m_data = NULL;
  this->m_shapeIndices.m_capacityAndFlags = 0x80000000;
  v8 = hkMemHeapAllocator();
  this->m_scales.m_size = 0;
  v9 = this->m_scales.m_capacityAndFlags;
  if ( v9 >= 0 )
    hkMemoryAllocator::bufFree2(v8, this->m_scales.m_data, 4, v9 & 0x3FFFFFFF);
  this->m_scales.m_data = NULL;
  this->m_scales.m_capacityAndFlags = 0x80000000;
  v10 = hkMemHeapAllocator();
  this->m_angularVelocities.m_size = 0;
  v11 = this->m_angularVelocities.m_capacityAndFlags;
  if ( v11 >= 0 )
    hkMemoryAllocator::bufFree2(v10, this->m_angularVelocities.m_data, 16, v11 & 0x3FFFFFFF);
  this->m_angularVelocities.m_data = NULL;
  this->m_angularVelocities.m_capacityAndFlags = 0x80000000;
  v12 = hkMemHeapAllocator();
  this->m_orientations.m_size = 0;
  v13 = this->m_orientations.m_capacityAndFlags;
  if ( v13 >= 0 )
    hkMemoryAllocator::bufFree2(v12, this->m_orientations.m_data, 16, v13 & 0x3FFFFFFF);
  this->m_orientations.m_data = NULL;
  this->m_orientations.m_capacityAndFlags = 0x80000000;
  v14 = hkMemHeapAllocator();
  this->m_linearVelocities.m_size = 0;
  v15 = this->m_linearVelocities.m_capacityAndFlags;
  if ( v15 >= 0 )
    hkMemoryAllocator::bufFree2(v14, this->m_linearVelocities.m_data, 16, v15 & 0x3FFFFFFF);
  this->m_linearVelocities.m_data = NULL;
  this->m_linearVelocities.m_capacityAndFlags = 0x80000000;
  v16 = hkMemHeapAllocator();
  this->m_positions.m_size = 0;
  v17 = this->m_positions.m_capacityAndFlags;
  if ( v17 >= 0 )
    hkMemoryAllocator::bufFree2(v16, this->m_positions.m_data, 16, v17 & 0x3FFFFFFF);
  this->m_positions.m_data = NULL;
  this->m_positions.m_capacityAndFlags = 0x80000000;
  v18 = hkMemHeapAllocator();
  this->m_shapes.m_size = 0;
  v19 = this->m_shapes.m_capacityAndFlags;
  if ( v19 >= 0 )
    hkMemoryAllocator::bufFree2(v18, this->m_shapes.m_data, 16, v19 & 0x3FFFFFFF);
  this->m_shapes.m_data = NULL;
  this->m_shapes.m_capacityAndFlags = 0x80000000;
  hkReferencedObject::~hkReferencedObject(this);
}

/*
==============
HavokPhysicsFX_CreateParticles
==============
*/
__int64 HavokPhysicsFX_CreateParticles(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int shapeIndex, int numParticles, int *particleIds)
{
  __int64 v5; 
  int *v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v18[9]; 
  int *particleIdsa; 

  v5 = numParticles;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 676, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 677, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 678, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 679, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  particleIdsa = (int *)HavokPhysics_GetWorld(worldId);
  v9 = particleIdsa;
  if ( !particleIdsa && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 683, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  v10 = (*(__int64 (__fastcall **)(int *, _QWORD))(*((_QWORD *)particleIdsa + 4) + 280i64))(particleIdsa + 8, pipelineInstance->m_colliderId.m_serialAndIndex);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 687, ASSERT_TYPE_ASSERT, "(collider)", (const char *)&queryFormat, "collider") )
    __debugbreak();
  v11 = 0;
  v12 = v5;
  v13 = 0;
  if ( (int)v5 > 0 )
  {
    v14 = 0i64;
    v15 = 0i64;
    do
    {
      if ( v13 >= pipelineInstance->m_asset->numParticlesPerInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 697, ASSERT_TYPE_ASSERT, "(testParticleId < pipelineInstance->m_asset->numParticlesPerInstance)", (const char *)&queryFormat, "testParticleId < pipelineInstance->m_asset->numParticlesPerInstance") )
        __debugbreak();
      if ( !*(_BYTE *)(v14 + *(_QWORD *)(v10 + 5704)) )
      {
        ++v11;
        particleIds[v15++] = v13;
        pipelineInstance->m_shapeIndices.m_data[v14] = shapeIndex;
      }
      ++v13;
      ++v14;
    }
    while ( v15 < v12 );
    v9 = particleIdsa;
    LODWORD(v5) = numParticles;
  }
  if ( v11 != (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 713, ASSERT_TYPE_ASSERT, "(numParticlesAllocated == numParticles)", (const char *)&queryFormat, "numParticlesAllocated == numParticles") )
    __debugbreak();
  v16 = *((_QWORD *)v9 + 3);
  v18[0] = (__int64)particleIds;
  v18[1] = (__int64)&particleIds[v11];
  (*(void (__fastcall **)(int *, _QWORD, __int64 *))(v16 + 560))(v9 + 6, pipelineInstance->m_colliderId.m_serialAndIndex, v18);
  return v11;
}

/*
==============
HavokPhysicsFX_CreatePipeline
==============
*/
HavokPhysicsFX_Pipeline *HavokPhysicsFX_CreatePipeline(Physics_WorldId worldId, PhysicsFXPipeline *pipelineAsset, PhysicsFXShape *shapeAsset, int numParticles, int *shapeIndex)
{
  __int64 v8; 
  hknpWorld *World; 
  hkMemoryRouter *Value; 
  HavokPhysicsFX_Pipeline *v11; 
  HavokPhysicsFX_Pipeline *v12; 
  HavokPhysicsFX_Pipeline *v13; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  unsigned int m_size; 
  unsigned int v16; 
  HavokPhysicsFX_Pipeline **m_data; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  hkMemoryRouter *v22; 
  hknpParticleShapeLibrary *v23; 
  hknpParticleShapeLibrary *m_shapeLibrary; 
  int v25; 
  hknpParticlesColliderId *v26; 
  unsigned int m_serialAndIndex; 
  hknpParticlesCollider *v28; 
  PhysicsFXShape *v29; 
  hknpConvexShape *FXHKShape; 
  int v31; 
  hkMemoryAllocator *v32; 
  int v33; 
  __int64 v34; 
  hknpEventSignal *EventSignal; 
  signed __int32 v37[8]; 
  char *fmt; 
  __int64 v39; 
  __int64 v40; 
  hknpParticlesColliderCinfo v41; 
  __int64 v42; 
  char v43; 
  void *v44; 
  PhysicsFXShape *physicsFXShape; 

  physicsFXShape = shapeAsset;
  v42 = -2i64;
  v8 = worldId;
  if ( !pipelineAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 406, ASSERT_TYPE_ASSERT, "(pipelineAsset)", (const char *)&queryFormat, "pipelineAsset") )
    __debugbreak();
  if ( !shapeAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 407, ASSERT_TYPE_ASSERT, "(shapeAsset)", (const char *)&queryFormat, "shapeAsset") )
    __debugbreak();
  if ( (unsigned int)(v8 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !s_HavokPhysicsFXWorlds[v8].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 411, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  World = HavokPhysics_GetWorld((Physics_WorldId)v8);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 415, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  if ( numParticles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 418, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( numParticles > pipelineAsset->numParticlesPerInstance )
  {
    LODWORD(v39) = pipelineAsset->numParticlesPerInstance;
    LODWORD(fmt) = numParticles;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444BE830, 764i64, pipelineAsset->name, fmt, v39);
  }
  if ( HavokPhysicsFX_ReachedPipelineLimit((Physics_WorldId)v8) )
  {
    LODWORD(v39) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 424, ASSERT_TYPE_ASSERT, "( ( !HavokPhysicsFX_ReachedPipelineLimit( worldId ) ) )", "( worldId ) = %u", v39) )
      __debugbreak();
  }
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v11 = (HavokPhysicsFX_Pipeline *)Value->m_heap->blockAlloc(Value->m_heap, 272i64);
  v44 = v11;
  if ( v11 )
  {
    HavokPhysicsFX_Pipeline::HavokPhysicsFX_Pipeline(v11, (Physics_WorldId)v8, pipelineAsset);
    v13 = v12;
  }
  else
  {
    v13 = NULL;
  }
  pipelineInstances = s_HavokPhysicsFXWorlds[v8].pipelineInstances;
  m_size = pipelineInstances->m_size;
  v16 = 0;
  if ( !m_size )
    goto LABEL_35;
  m_data = pipelineInstances->m_data;
  while ( m_data[v16] )
  {
    if ( ++v16 >= m_size )
      goto LABEL_35;
  }
  if ( v16 >= m_size )
  {
LABEL_35:
    LODWORD(v40) = m_size;
    LODWORD(v39) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 438, ASSERT_TYPE_ASSERT, "(unsigned)( pipelineIdx ) < (unsigned)( numSupportedPipelines )", "pipelineIdx doesn't index numSupportedPipelines\n\t%i not in [0, %i)", v39, v40) )
      __debugbreak();
  }
  s_HavokPhysicsFXWorlds[v8].pipelineInstances->m_data[v16] = v13;
  ++s_HavokPhysicsFXWorlds[v8].numPipelineInstances;
  v13->m_ignoreBodies->m_ignoreLayers = 2;
  v13->m_collisionFilterUserData.ignoreBodies = v13->m_ignoreBodies;
  hknpParticlesColliderCinfo::hknpParticlesColliderCinfo(&v41);
  v18 = v13->m_positions.m_size;
  v41.m_positions.m_begin = v13->m_positions.m_data->m_quad.m128_f32;
  v41.m_positions.m_numElements = v18;
  v41.m_positions.m_stride = 16;
  v19 = v13->m_linearVelocities.m_size;
  v41.m_linearVelocities.m_begin = v13->m_linearVelocities.m_data->m_quad.m128_f32;
  v41.m_linearVelocities.m_numElements = v19;
  v41.m_linearVelocities.m_stride = 16;
  v20 = v13->m_orientations.m_size;
  v41.m_orientations.m_begin = v13->m_orientations.m_data->m_vec.m_quad.m128_f32;
  v41.m_orientations.m_numElements = v20;
  v41.m_orientations.m_stride = 16;
  v21 = v13->m_angularVelocities.m_size;
  v41.m_angularVelocities.m_begin = v13->m_angularVelocities.m_data->m_quad.m128_f32;
  v41.m_angularVelocities.m_numElements = v21;
  v41.m_angularVelocities.m_stride = 16;
  v41.m_friction = pipelineAsset->friction;
  v41.m_restitution = pipelineAsset->restitution;
  v22 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v22 )
    v22 = hkMemoryRouter::s_fallbackRouter;
  v23 = (hknpParticleShapeLibrary *)v22->m_heap->blockAlloc(v22->m_heap, 48i64);
  v44 = v23;
  if ( v23 )
    hknpParticleShapeLibrary::hknpParticleShapeLibrary(v23);
  v41.m_shapeLibrary = v23;
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 457, ASSERT_TYPE_ASSERT, "(colliderCinfo.m_shapeLibrary)", (const char *)&queryFormat, "colliderCinfo.m_shapeLibrary") )
    __debugbreak();
  m_shapeLibrary = v41.m_shapeLibrary;
  _InterlockedOr(v37, 0);
  LOWORD(m_shapeLibrary) = m_shapeLibrary->m_refCount;
  _InterlockedOr(v37, 0);
  if ( (_WORD)m_shapeLibrary != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 458, ASSERT_TYPE_ASSERT, "(colliderCinfo.m_shapeLibrary->getReferenceCount() == 1)", (const char *)&queryFormat, "colliderCinfo.m_shapeLibrary->getReferenceCount() == 1") )
    __debugbreak();
  v25 = v13->m_shapeIndices.m_size;
  v41.m_shapeIndices.m_begin = v13->m_shapeIndices.m_data;
  v41.m_shapeIndices.m_numElements = v25;
  v41.m_shapeIndices.m_stride = 4;
  v41.m_collisionFilterData.m_collisionFilterInfo = 256;
  v41.m_collisionFilterData.m_userData = (unsigned __int64)&v13->m_collisionFilterUserData;
  *(_DWORD *)v41.m_rigidBodyCollisionLod = 1;
  v41.m_enableDynamicBodyCollisions = 1;
  v41.m_enableParticleParticleCollisions = pipelineAsset->particleParticleCollisions;
  *(_DWORD *)&v41.m_enableDeterministicParticleParticleCollisions = 0;
  v41.m_raiseParticlesCollidedWithParticlesEvents = 0;
  v41.m_raiseParticleBodyImpulseAppliedEvents = pipelineAsset->raiseCollisionCallbacks;
  *(_WORD *)&v41.m_raiseParticleParticleImpulseAppliedEvents = 0;
  v41.m_callbackImpulseThreshold = pipelineAsset->callbackImpulseThreshold;
  v41.m_maxBatchSize = 100;
  v41.m_supportDisabledParticles = 1;
  v41.m_userData = Physics_MakeRef(Physics_RefSystem_LightweightParticles, Physics_RelationshipSystem_None, 0, v16);
  v26 = World->allocateParticlesCollider(&World->hknpWorldWriter, (hknpParticlesColliderId *)&v43, &v41);
  m_serialAndIndex = v26->m_serialAndIndex;
  v13->m_colliderId = (hknpParticlesColliderId)v26->m_serialAndIndex;
  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 486, ASSERT_TYPE_ASSERT, "(pipeline->m_colliderId.isValid())", (const char *)&queryFormat, "pipeline->m_colliderId.isValid()") )
    __debugbreak();
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD))World->addParticlesCollider)(&World->hknpWorldWriter, v13->m_colliderId.m_serialAndIndex);
  hkReferencedObject::removeReference(v41.m_shapeLibrary);
  v28 = hknpWorld::accessParticlesCollider(World, v13->m_colliderId);
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 493, ASSERT_TYPE_ASSERT, "( collider ) != ( nullptr )", "%s != %s\n\t%p, %p", "collider", "nullptr", NULL, NULL) )
    __debugbreak();
  HavokPhysics_SetRigidBodyUserData((Physics_WorldId)v8, v28->m_worldBodyId, v41.m_userData);
  HavokPhysicsFX_LockAssetRead();
  v29 = physicsFXShape;
  FXHKShape = HavokPhysicsFX_GetFXHKShape(physicsFXShape, 0);
  if ( !FXHKShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 500, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  HavokPhysicsFX_UnlockAssetRead();
  if ( (FXHKShape->m_flags.m_storage & 1) == 0 )
  {
    FXHKShape = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 503, ASSERT_TYPE_ASSERT, "(cShape)", (const char *)&queryFormat, "cShape") )
      __debugbreak();
  }
  v31 = hknpParticleShapeLibrary::addShape(v41.m_shapeLibrary, FXHKShape);
  *shapeIndex = v31;
  if ( v31 != v13->m_shapes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 507, ASSERT_TYPE_ASSERT, "(*shapeIndex == pipeline->m_shapes.getSize())", (const char *)&queryFormat, "*shapeIndex == pipeline->m_shapes.getSize()") )
    __debugbreak();
  v32 = hkMemHeapAllocator();
  v33 = v13->m_shapes.m_size;
  if ( v33 == (v13->m_shapes.m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v32, &v13->m_shapes, 16);
    v33 = v13->m_shapes.m_size;
  }
  v34 = (__int64)&v13->m_shapes.m_data[v33];
  v13->m_shapes.m_size = v33 + 1;
  *(_QWORD *)v34 = v29;
  *(_DWORD *)(v34 + 8) = 0;
  EventSignal = hknpWorld::getEventSignal(World, PARTICLE_BODY_IMPULSE_APPLIED, v13->m_colliderId);
  hkSignal2<hknpEventHandlerInput const &,hknpEvent const &>::subscribe<void (*)(hknpEventHandlerInput const &,hknpEvent const &)>(EventSignal, HavokPhysicsFX_OnParticlePostSolveEvent, "IW-ParticleCollide");
  v13->m_remainingParticles -= numParticles;
  return v13;
}

/*
==============
HavokPhysicsFX_DestroyParticles
==============
*/
void HavokPhysicsFX_DestroyParticles(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds)
{
  __int64 v4; 
  hknpWorld *World; 
  hknpWorldWriter_vtbl *v9; 
  __int64 m_serialAndIndex; 
  __int64 v11[3]; 

  v4 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 726, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 727, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 728, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 729, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 733, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  v9 = World->hknpWorldWriter::__vftable;
  m_serialAndIndex = pipelineInstance->m_colliderId.m_serialAndIndex;
  v11[1] = (__int64)&particleIds[v4];
  v11[0] = (__int64)particleIds;
  ((void (__fastcall *)(hknpWorldWriter *, __int64, __int64 *))v9->disableParticles)(&World->hknpWorldWriter, m_serialAndIndex, v11);
}

/*
==============
HavokPhysicsFX_GetFXWorld
==============
*/
HavokPhysicsFX_World *HavokPhysicsFX_GetFXWorld(Physics_WorldId worldId)
{
  __int64 v1; 

  v1 = worldId;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  return &s_HavokPhysicsFXWorlds[v1];
}

/*
==============
HavokPhysicsFX_GetNumAllocatedParticles
==============
*/
__int64 HavokPhysicsFX_GetNumAllocatedParticles(Physics_WorldId worldId)
{
  __int64 v1; 
  bool v2; 
  HavokPhysicsFX_World *v3; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  unsigned int v5; 
  __int64 v6; 
  HavokPhysicsFX_Pipeline **m_data; 
  unsigned __int64 m_size; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 

  v1 = worldId;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v2 = !s_HavokPhysicsFXWorlds[v1].isInitialized;
  v3 = &s_HavokPhysicsFXWorlds[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1397, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  pipelineInstances = v3->pipelineInstances;
  v5 = 0;
  v6 = 0i64;
  m_data = pipelineInstances->m_data;
  m_size = pipelineInstances->m_size;
  v9 = (unsigned __int64)&pipelineInstances->m_data[m_size];
  v10 = (m_size * 8) >> 3;
  if ( (unsigned __int64)m_data > v9 )
    v10 = 0i64;
  if ( v10 )
  {
    do
    {
      if ( *m_data )
        v5 += (*m_data)->m_asset->numParticlesPerInstance;
      ++m_data;
      ++v6;
    }
    while ( v6 != v10 );
  }
  return v5;
}

/*
==============
HavokPhysicsFX_GetNumPipelineInstances
==============
*/
__int64 HavokPhysicsFX_GetNumPipelineInstances(Physics_WorldId worldId)
{
  __int64 v1; 
  bool v2; 
  HavokPhysicsFX_World *v3; 

  v1 = worldId;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v2 = !s_HavokPhysicsFXWorlds[v1].isInitialized;
  v3 = &s_HavokPhysicsFXWorlds[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1386, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  return (unsigned int)v3->numPipelineInstances;
}

/*
==============
HavokPhysicsFX_GetParticleAngularVelocities
==============
*/
void HavokPhysicsFX_GetParticleAngularVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec3_t *velocities)
{
  __int64 v5; 
  __int64 v9; 
  __int64 v10; 
  float *v11; 
  __int64 v12; 
  hkVector4f *m_data; 
  __int64 v14; 
  __int64 v15; 

  v5 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1166, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1167, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1168, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (int)v5 > pipelineInstance->m_angularVelocities.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1169, ASSERT_TYPE_ASSERT, "(numParticles <= pipelineInstance->m_angularVelocities.getSize())", (const char *)&queryFormat, "numParticles <= pipelineInstance->m_angularVelocities.getSize()") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1170, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !velocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1171, ASSERT_TYPE_ASSERT, "(velocities)", (const char *)&queryFormat, "velocities") )
    __debugbreak();
  v9 = v5;
  if ( (int)v5 > 0 )
  {
    v10 = 0i64;
    v11 = &velocities->v[2];
    do
    {
      v12 = particleIds[v10];
      if ( (unsigned int)v12 >= pipelineInstance->m_angularVelocities.m_size )
      {
        LODWORD(v15) = pipelineInstance->m_angularVelocities.m_size;
        LODWORD(v14) = particleIds[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1177, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_angularVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_angularVelocities.getSize()\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      m_data = pipelineInstance->m_angularVelocities.m_data;
      ++v10;
      *(v11 - 2) = m_data[v12].m_quad.m128_f32[0];
      *(v11 - 1) = m_data[v12].m_quad.m128_f32[1];
      *v11 = m_data[v12].m_quad.m128_f32[2];
      v11 += 3;
    }
    while ( v10 < v9 );
  }
}

/*
==============
HavokPhysicsFX_GetParticleAngularVelocity
==============
*/
void HavokPhysicsFX_GetParticleAngularVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec3_t *velocity)
{
  __int64 v4; 
  hkVector4f *m_data; 
  __int64 v9; 

  v4 = particleId;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1152, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1153, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (unsigned int)v4 >= pipelineInstance->m_angularVelocities.m_size )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1154, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_angularVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_angularVelocities.getSize()\n\t%i not in [0, %i)", v9, pipelineInstance->m_angularVelocities.m_size) )
      __debugbreak();
  }
  m_data = pipelineInstance->m_angularVelocities.m_data;
  LODWORD(velocity->v[0]) = m_data[v4].m_quad.m128_i32[0];
  LODWORD(velocity->v[1]) = m_data[v4].m_quad.m128_i32[1];
  LODWORD(velocity->v[2]) = m_data[v4].m_quad.m128_i32[2];
}

/*
==============
HavokPhysicsFX_GetParticleImpactAndClear
==============
*/
void HavokPhysicsFX_GetParticleImpactAndClear(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, bool *impact, Particle_OnImpactData *data)
{
  __int64 v5; 
  __int64 v9; 
  __int64 v10; 
  char v11; 
  __int64 v12; 
  __int64 v13; 

  v5 = particleId;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1005, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1006, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (unsigned int)v5 >= pipelineInstance->m_impactRegistered.m_storage.m_numBits )
  {
    LODWORD(v12) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1007, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_impactRegistered.getSize() )", "particleId doesn't index pipelineInstance->m_impactRegistered.getSize()\n\t%i not in [0, %i)", v12, pipelineInstance->m_impactRegistered.m_storage.m_numBits) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= pipelineInstance->m_impactData.m_size )
  {
    LODWORD(v13) = pipelineInstance->m_impactData.m_size;
    LODWORD(v12) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_impactData.getSize() )", "particleId doesn't index pipelineInstance->m_impactData.getSize()\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v9 = v5 >> 5;
  v10 = v5;
  v11 = v5 & 0x1F;
  *impact = (pipelineInstance->m_impactRegistered.m_storage.m_words.m_data[v9] >> v11) & 1;
  *data = pipelineInstance->m_impactData.m_data[v10];
  pipelineInstance->m_impactRegistered.m_storage.m_words.m_data[v9] &= ~(1 << v11);
}

/*
==============
HavokPhysicsFX_GetParticleLinearVelocities
==============
*/
void HavokPhysicsFX_GetParticleLinearVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, hkArray<hkVector4f,hkContainerHeapAllocator> *velocities)
{
  __int64 v5; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v5 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1094, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1095, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1096, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (int)v5 > pipelineInstance->m_linearVelocities.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1097, ASSERT_TYPE_ASSERT, "(numParticles <= pipelineInstance->m_linearVelocities.getSize())", (const char *)&queryFormat, "numParticles <= pipelineInstance->m_linearVelocities.getSize()") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1098, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v9 = v5;
  if ( (int)v5 > 0 )
  {
    v10 = 0i64;
    v11 = 0i64;
    do
    {
      v12 = particleIds[v10];
      if ( (unsigned int)v12 >= pipelineInstance->m_linearVelocities.m_size )
      {
        LODWORD(v14) = pipelineInstance->m_linearVelocities.m_size;
        LODWORD(v13) = particleIds[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1104, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_linearVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_linearVelocities.getSize()\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      ++v10;
      velocities->m_data[v11++] = pipelineInstance->m_linearVelocities.m_data[v12];
    }
    while ( v10 < v9 );
  }
}

/*
==============
HavokPhysicsFX_GetParticleLinearVelocity
==============
*/
void HavokPhysicsFX_GetParticleLinearVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, hkVector4f *velocity)
{
  __int64 v5; 
  __int64 v7; 
  bool v8; 
  HavokPhysicsFX_World *v9; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int v11; 
  unsigned int m_size; 
  HavokPhysicsFX_Pipeline **m_data; 
  __int64 v14; 

  v5 = particleId;
  v7 = worldId;
  if ( !pipelineInstance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1082, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 652, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
  }
  if ( (unsigned int)(v7 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v8 = !s_HavokPhysicsFXWorlds[v7].isInitialized;
  v9 = &s_HavokPhysicsFXWorlds[v7];
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 656, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  pipelineInstances = v9->pipelineInstances;
  v11 = 0;
  m_size = pipelineInstances->m_size;
  if ( m_size )
  {
    m_data = pipelineInstances->m_data;
    while ( m_data[v11] != pipelineInstance )
    {
      if ( ++v11 >= m_size )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1083, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= pipelineInstance->m_linearVelocities.m_size )
  {
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1084, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_linearVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_linearVelocities.getSize()\n\t%i not in [0, %i)", v14, pipelineInstance->m_linearVelocities.m_size) )
      __debugbreak();
  }
  *velocity = pipelineInstance->m_linearVelocities.m_data[v5];
}

/*
==============
HavokPhysicsFX_GetParticleOrientation
==============
*/
void HavokPhysicsFX_GetParticleOrientation(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec4_t *orientation)
{
  __int64 v4; 
  hkQuaternionf *m_data; 
  __int64 v9; 

  v4 = particleId;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1113, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1114, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (unsigned int)v4 >= pipelineInstance->m_orientations.m_size )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1115, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_orientations.getSize() )", "particleId doesn't index pipelineInstance->m_orientations.getSize()\n\t%i not in [0, %i)", v9, pipelineInstance->m_orientations.m_size) )
      __debugbreak();
  }
  m_data = pipelineInstance->m_orientations.m_data;
  LODWORD(orientation->v[0]) = m_data[v4].m_vec.m_quad.m128_i32[0];
  LODWORD(orientation->v[1]) = m_data[v4].m_vec.m_quad.m128_i32[1];
  LODWORD(orientation->v[2]) = m_data[v4].m_vec.m_quad.m128_i32[2];
  LODWORD(orientation->v[3]) = m_data[v4].m_vec.m_quad.m128_i32[3];
}

/*
==============
HavokPhysicsFX_GetParticleOrientations
==============
*/
void HavokPhysicsFX_GetParticleOrientations(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec4_t *orientations)
{
  __int64 v5; 
  __int64 v9; 
  __int64 v10; 
  float *v11; 
  float *v12; 
  __int64 v13; 
  hkQuaternionf *m_data; 
  __int64 v15; 
  __int64 v16; 

  v5 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1128, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1129, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1130, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (int)v5 > pipelineInstance->m_orientations.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1131, ASSERT_TYPE_ASSERT, "(numParticles <= pipelineInstance->m_orientations.getSize())", (const char *)&queryFormat, "numParticles <= pipelineInstance->m_orientations.getSize()") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1132, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !orientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1133, ASSERT_TYPE_ASSERT, "(orientations)", (const char *)&queryFormat, "orientations") )
    __debugbreak();
  v9 = v5;
  if ( (int)v5 > 0 )
  {
    v10 = 0i64;
    v11 = &orientations->v[2];
    v12 = &orientations->v[2];
    do
    {
      v13 = particleIds[v10];
      if ( (unsigned int)v13 >= pipelineInstance->m_orientations.m_size )
      {
        LODWORD(v16) = pipelineInstance->m_orientations.m_size;
        LODWORD(v15) = particleIds[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1139, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_orientations.getSize() )", "particleId doesn't index pipelineInstance->m_orientations.getSize()\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      m_data = pipelineInstance->m_orientations.m_data;
      *(v12 - 2) = m_data[v13].m_vec.m_quad.m128_f32[0];
      *(v12 - 1) = m_data[v13].m_vec.m_quad.m128_f32[1];
      *v12 = m_data[v13].m_vec.m_quad.m128_f32[2];
      v12[1] = m_data[v13].m_vec.m_quad.m128_f32[3];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(*(v11 - 2) * *(v11 - 2)) + (float)(*(v11 - 1) * *(v11 - 1))) + (float)(*v11 * *v11)) + (float)(v11[1] * v11[1])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1144, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( orientations[inputParticleIdx] ))", (const char *)&queryFormat, "Vec4IsNormalized( orientations[inputParticleIdx] )") )
        __debugbreak();
      ++v10;
      v12 += 4;
      v11 += 4;
    }
    while ( v10 < v9 );
  }
}

/*
==============
HavokPhysicsFX_GetParticlePosition
==============
*/
void HavokPhysicsFX_GetParticlePosition(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, hkVector4f *position)
{
  __int64 v5; 
  __int64 v7; 
  bool v8; 
  HavokPhysicsFX_World *v9; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int v11; 
  unsigned int m_size; 
  HavokPhysicsFX_Pipeline **m_data; 
  __int64 v14; 

  v5 = particleId;
  v7 = worldId;
  if ( !pipelineInstance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1019, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 652, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
  }
  if ( (unsigned int)(v7 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v8 = !s_HavokPhysicsFXWorlds[v7].isInitialized;
  v9 = &s_HavokPhysicsFXWorlds[v7];
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 656, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  pipelineInstances = v9->pipelineInstances;
  v11 = 0;
  m_size = pipelineInstances->m_size;
  if ( m_size )
  {
    m_data = pipelineInstances->m_data;
    while ( m_data[v11] != pipelineInstance )
    {
      if ( ++v11 >= m_size )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1020, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= pipelineInstance->m_positions.m_size )
  {
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1021, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_positions.getSize() )", "particleId doesn't index pipelineInstance->m_positions.getSize()\n\t%i not in [0, %i)", v14, pipelineInstance->m_positions.m_size) )
      __debugbreak();
  }
  *position = pipelineInstance->m_positions.m_data[v5];
}

/*
==============
HavokPhysicsFX_GetParticlePositions
==============
*/
void HavokPhysicsFX_GetParticlePositions(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, hkArray<hkVector4f,hkContainerHeapAllocator> *positions)
{
  __int64 v5; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v5 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1031, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1032, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1033, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (int)v5 > positions->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1034, ASSERT_TYPE_ASSERT, "(numParticles <= positions.getSize())", (const char *)&queryFormat, "numParticles <= positions.getSize()") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1035, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v9 = v5;
  if ( (int)v5 > 0 )
  {
    v10 = 0i64;
    v11 = 0i64;
    do
    {
      v12 = particleIds[v10];
      if ( (unsigned int)v12 >= pipelineInstance->m_positions.m_size )
      {
        LODWORD(v14) = pipelineInstance->m_positions.m_size;
        LODWORD(v13) = particleIds[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1041, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_positions.getSize() )", "particleId doesn't index pipelineInstance->m_positions.getSize()\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      ++v10;
      positions->m_data[v11++] = pipelineInstance->m_positions.m_data[v12];
    }
    while ( v10 < v9 );
  }
}

/*
==============
HavokPhysicsFX_GetParticleScale
==============
*/
void HavokPhysicsFX_GetParticleScale(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, float *scale)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int v10; 
  unsigned int m_size; 
  HavokPhysicsFX_Pipeline **m_data; 
  __int64 v13; 

  v4 = particleId;
  v6 = worldId;
  if ( !pipelineInstance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1050, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 652, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
  }
  if ( (unsigned int)(v6 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v8 = v6;
  if ( !s_HavokPhysicsFXWorlds[v8].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 656, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  pipelineInstances = s_HavokPhysicsFXWorlds[v8].pipelineInstances;
  v10 = 0;
  m_size = pipelineInstances->m_size;
  if ( m_size )
  {
    m_data = pipelineInstances->m_data;
    while ( m_data[v10] != pipelineInstance )
    {
      if ( ++v10 >= m_size )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1051, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
      __debugbreak();
  }
  if ( (int)v4 < 0 || (int)v4 > pipelineInstance->m_asset->numParticlesPerInstance )
  {
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1052, ASSERT_TYPE_ASSERT, "( 0 ) <= ( particleId ) && ( particleId ) <= ( pipelineInstance->m_asset->numParticlesPerInstance )", "particleId not in [0, pipelineInstance->m_asset->numParticlesPerInstance]\n\t%i not in [%i, %i]", v13, 0i64, pipelineInstance->m_asset->numParticlesPerInstance) )
      __debugbreak();
  }
  if ( !scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1053, ASSERT_TYPE_ASSERT, "(scale)", (const char *)&queryFormat, "scale") )
    __debugbreak();
  *scale = pipelineInstance->m_scales.m_data[v4];
}

/*
==============
HavokPhysicsFX_GetParticleScales
==============
*/
void HavokPhysicsFX_GetParticleScales(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, float *scales)
{
  __int64 v5; 
  float *v9; 
  __int64 v10; 
  signed __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v5 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1063, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1064, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1065, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1066, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v9 = scales;
  if ( !scales && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1067, ASSERT_TYPE_ASSERT, "(scales)", (const char *)&queryFormat, "scales") )
    __debugbreak();
  v10 = v5;
  if ( (int)v5 > 0 )
  {
    v11 = (char *)particleIds - (char *)scales;
    do
    {
      v12 = *(int *)((char *)v9 + v11);
      if ( (unsigned int)v12 >= pipelineInstance->m_scales.m_size )
      {
        LODWORD(v14) = pipelineInstance->m_scales.m_size;
        *(float *)&v13 = *(float *)((char *)v9 + v11);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1073, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_scales.getSize() )", "particleId doesn't index pipelineInstance->m_scales.getSize()\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      *v9++ = pipelineInstance->m_scales.m_data[v12];
      --v10;
    }
    while ( v10 );
  }
}

/*
==============
HavokPhysicsFX_GetSurfFlags
==============
*/
unsigned int HavokPhysicsFX_GetSurfFlags(const hknpWorld *world, __int64 bodyId, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> shapeKey)
{
  hknpWorldReader *v3; 
  __int64 v4; 
  __int64 v5; 
  const hknpTriangleShape *TriangleShape; 
  unsigned __int16 v8; 
  __int64 v9; 
  unsigned __int64 m_userData; 
  const hknpShape **p_m_shape; 
  __int64 m_size; 
  unsigned int v13; 
  __int16 v14; 
  int v15; 
  unsigned __int64 val; 
  __int64 v17; 
  hknpInplaceTriangleShape v18; 
  hknpShapeCollector v19; 
  unsigned int m_value; 

  m_value = shapeKey.m_value;
  v17 = -2i64;
  v3 = &world->hknpWorldReader;
  v4 = ((__int64 (__fastcall *)(hknpWorldReader *, __int64))world->getBody)(&world->hknpWorldReader, bodyId);
  v5 = v4;
  if ( m_value == -1 )
    return truncate_cast<unsigned int,unsigned __int64>(*(unsigned int *)(*(_QWORD *)(v4 + 96) + 40i64));
  hknpInplaceTriangleShape::hknpInplaceTriangleShape(&v18, 0.015);
  v19.m_internal.m_shapeBuffer.m_shape = NULL;
  v19.m_internal.m_shapeBuffer.m_buffer = v19.m_internal.m_shapeBuffer.m_storage;
  v19.m_internal.m_shapeBuffer.m_bufferSize = 2048;
  v19.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpInplaceShapeBuffer<2048>::`vftable';
  v19.m_internal.m_shape = NULL;
  v19.m_parentShape = NULL;
  v19.m_shapeTagPath.m_size = 0;
  *(_QWORD *)&v19.m_internal.m_flags.m_storage = 13i64;
  *(__m256i *)v19.m_transform.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)v19.m_transform.m_rotation.m_col2.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[34].m128_f32;
  v19.m_internal.m_scale.m_quad = g_vectorfConstants[6];
  v19.m_internal.m_shapeTags[0] = -1;
  (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, hknpShapeCollector *))(**(_QWORD **)(v5 + 96) + 176i64))(*(_QWORD *)(v5 + 96), &m_value, 1i64, &v19);
  if ( (v19.m_internal.m_flags.m_storage & 0x10) != 0 )
    TriangleShape = hknpShapeCollector::getTriangleShape(&v19, 0, (hknpTriangleShape *)&v18);
  else
    TriangleShape = (const hknpTriangleShape *)v19.m_internal.m_shape;
  v8 = v19.m_internal.m_shapeTags[0];
  v14 = -1;
  v15 = 0;
  val = 0i64;
  v9 = (__int64)v3->getShapeTagCodec(v3);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD, unsigned int, const hknpTriangleShape *, __int16 *))(*(_QWORD *)v9 + 32i64))(v9, v8, 0i64, v5, *(_QWORD *)(v5 + 96), *(_QWORD *)(v5 + 96), m_value, TriangleShape, &v14);
  LODWORD(m_userData) = val;
  if ( !val )
  {
    m_userData = TriangleShape->m_userData;
    if ( v19.m_shapeTagPath.m_size > 0 )
    {
      p_m_shape = &v19.m_shapeTagPath.m_data[0].m_shape;
      m_size = (unsigned int)v19.m_shapeTagPath.m_size;
      do
      {
        m_userData |= (*p_m_shape)->m_userData;
        p_m_shape += 4;
        --m_size;
      }
      while ( m_size );
    }
  }
  v13 = truncate_cast<unsigned int,unsigned __int64>((unsigned int)m_userData);
  v19.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpShapeBuffer::`vftable';
  if ( v19.m_internal.m_shapeBuffer.m_shape )
    ((void (__fastcall *)(hknpShape *, _QWORD))v19.m_internal.m_shapeBuffer.m_shape->~hkBaseObject)(v19.m_internal.m_shapeBuffer.m_shape, 0i64);
  return v13;
}

/*
==============
HavokPhysicsFX_HasPipeline
==============
*/
char HavokPhysicsFX_HasPipeline(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance)
{
  __int64 v2; 
  bool v4; 
  HavokPhysicsFX_World *v5; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int v7; 
  unsigned int m_size; 
  HavokPhysicsFX_Pipeline **m_data; 

  v2 = worldId;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 652, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( (unsigned int)(v2 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v4 = !s_HavokPhysicsFXWorlds[v2].isInitialized;
  v5 = &s_HavokPhysicsFXWorlds[v2];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 656, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  pipelineInstances = v5->pipelineInstances;
  v7 = 0;
  m_size = pipelineInstances->m_size;
  if ( !m_size )
    return 0;
  m_data = pipelineInstances->m_data;
  while ( m_data[v7] != pipelineInstance )
  {
    if ( ++v7 >= m_size )
      return 0;
  }
  return 1;
}

/*
==============
HavokPhysicsFX_Init
==============
*/
void HavokPhysicsFX_Init(void)
{
  if ( s_havokPhysicsFX_Initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 159, ASSERT_TYPE_ASSERT, "(!s_havokPhysicsFX_Initialized)", "%s\n\tHavokPhysicsFX Already initialized", "!s_havokPhysicsFX_Initialized") )
    __debugbreak();
  s_havokPhysicsFX_Initialized = 1;
  HavokPhysicsFX_InitAssets();
}

/*
==============
HavokPhysicsFX_IsInitialized
==============
*/
_BOOL8 HavokPhysicsFX_IsInitialized()
{
  return s_havokPhysicsFX_Initialized;
}

/*
==============
HavokPhysicsFX_OnParticlePostSolveEvent
==============
*/
void HavokPhysicsFX_OnParticlePostSolveEvent(const hknpEventHandlerInput *input, const hknpEvent *event)
{
  const dvar_t *v2; 
  hknpWorld *m_world; 
  Physics_WorldId WorldId; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  __int64 RefId; 
  HavokPhysicsFX_Pipeline *v11; 
  PhysicsFXShape *asset; 
  float v13; 
  float v14; 
  float v15; 
  float *m128_f32; 
  float v17; 
  unsigned int SurfFlags; 
  const char *soundAlias; 
  int v20; 
  double v21; 
  float v22; 
  float v23; 
  hkArray<HavokPhysicsFX_QueuedSound,hkContainerHeapAllocator> *sounds; 
  hkMemoryAllocator *v25; 
  int m_size; 
  HavokPhysicsFX_QueuedSound *m_data; 
  __int64 v28; 
  __int64 v29; 
  __int128 v31; 
  __m128 v35; 
  __m128 v39; 
  int Ref; 
  __int64 v43; 
  __int64 v44; 
  int v45; 
  float v46; 
  __int128 v47; 
  __m128 v; 
  __m128 v49; 

  v2 = DVARBOOL_physicsFX_enableCallbacks;
  if ( !DVARBOOL_physicsFX_enableCallbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_enableCallbacks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    m_world = input->m_world;
    WorldId = HavokPhysics_GetWorldId(m_world);
    v7 = WorldId;
    if ( WorldId == PHYSICS_WORLD_ID_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 335, ASSERT_TYPE_ASSERT, "(worldId != PHYSICS_WORLD_ID_INVALID)", (const char *)&queryFormat, "worldId != PHYSICS_WORLD_ID_INVALID") )
      __debugbreak();
    v8 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))m_world->getParticlesCollider)(&m_world->hknpWorldReader, *(unsigned int *)&event[2].m_secondaryType);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 342, ASSERT_TYPE_ASSERT, "(collider)", (const char *)&queryFormat, "collider") )
      __debugbreak();
    v9 = (unsigned int)*(_QWORD *)(v8 + 176);
    if ( v9 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v9, "unsigned", v9) )
      __debugbreak();
    if ( Physics_GetRefSystem(v9) != Physics_RefSystem_LightweightParticles )
    {
      LODWORD(v44) = 12;
      LODWORD(v43) = Physics_GetRefSystem(v9);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 346, ASSERT_TYPE_ASSERT, "( Physics_GetRefSystem( ref ) ) == ( Physics_RefSystem_LightweightParticles )", "%s == %s\n\t%i, %i", "Physics_GetRefSystem( ref )", "Physics_RefSystem_LightweightParticles", v43, v44) )
        __debugbreak();
    }
    RefId = Physics_GetRefId(v9);
    if ( !s_HavokPhysicsFXWorlds[v7].pipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 348, ASSERT_TYPE_ASSERT, "( fxWorld->pipelineInstances ) != ( nullptr )", "%s != %s\n\t%p, %p", "fxWorld->pipelineInstances", "nullptr", NULL, NULL) )
      __debugbreak();
    v11 = s_HavokPhysicsFXWorlds[v7].pipelineInstances->m_data[RefId];
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 350, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
    v45 = *(_DWORD *)&event[3].m_filterBits;
    asset = v11->m_shapes.m_data[v11->m_shapeIndices.m_data[v45]].asset;
    if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 358, ASSERT_TYPE_ASSERT, "(shapeAsset)", (const char *)&queryFormat, "shapeAsset") )
      __debugbreak();
    v13 = 32.0 * *(float *)&event[5].m_filterBits;
    v14 = 32.0 * *(float *)&event[6].m_sizePaddedTo16;
    v15 = 32.0 * *(float *)&event[6].m_secondaryType;
    if ( ((LODWORD(v13) & 0x7F800000) == 2139095040 || (LODWORD(v14) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(32.0 * *(float *)&event[6].m_secondaryType) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 364, ASSERT_TYPE_SANITY, "( !IS_NAN( ( position )[0] ) && !IS_NAN( ( position )[1] ) && !IS_NAN( ( position )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( position )[0] ) && !IS_NAN( ( position )[1] ) && !IS_NAN( ( position )[2] )") )
      __debugbreak();
    v46 = 32.0 * *(float *)&event[8].m_sizePaddedTo16;
    if ( ((LODWORD(v46) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(32.0 * *(float *)&event[8].m_secondaryType) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(32.0 * *(float *)&event[9].m_filterBits) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 370, ASSERT_TYPE_SANITY, "( !IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] )") )
      __debugbreak();
    m128_f32 = v11->m_linearVelocities.m_data[v45].m_quad.m128_f32;
    v17 = 32.0 * *m128_f32;
    if ( ((LODWORD(v17) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(32.0 * m128_f32[1]) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(32.0 * m128_f32[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 376, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] )") )
      __debugbreak();
    SurfFlags = HavokPhysicsFX_GetSurfFlags(m_world, *(unsigned int *)&event[11].m_filterBits, *(const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *)&event[12].m_sizePaddedTo16);
    soundAlias = asset->soundAlias;
    v20 = SurfFlags;
    if ( soundAlias && *soundAlias )
    {
      v21 = I_fclamp((float)(*(float *)&event[10].m_secondaryType - asset->soundMinImpulse) / (float)(asset->soundMaxImpulse - asset->soundMinImpulse), 0.0, 1.0);
      v22 = *(float *)&event[10].m_secondaryType;
      *(_QWORD *)&v47 = asset->soundAlias;
      v23 = (float)((float)(1.0 - *(float *)&v21) * asset->soundMinImpulseVolume) + (float)(*(float *)&v21 * asset->soundMaxImpulseVolume);
      if ( (unsigned int)(v7 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
        __debugbreak();
      if ( !s_HavokPhysicsFXWorlds[v7].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 261, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
        __debugbreak();
      if ( ((LODWORD(v13) & 0x7F800000) == 2139095040 || (LODWORD(v14) & 0x7F800000) == 2139095040 || (LODWORD(v15) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 263, ASSERT_TYPE_SANITY, "( !IS_NAN( ( position )[0] ) && !IS_NAN( ( position )[1] ) && !IS_NAN( ( position )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( position )[0] ) && !IS_NAN( ( position )[1] ) && !IS_NAN( ( position )[2] )") )
        __debugbreak();
      sounds = s_HavokPhysicsFXWorlds[v7].sounds;
      v25 = hkMemHeapAllocator();
      m_size = sounds->m_size;
      if ( m_size == (sounds->m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v25, sounds, 40);
        m_size = sounds->m_size;
      }
      m_data = sounds->m_data;
      v28 = m_size;
      sounds->m_size = m_size + 1;
      m_data[v28].position.v[0] = v13;
      m_data[v28].position.v[1] = v14;
      m_data[v28].position.v[2] = v15;
      m_data[v28].impulse = v22;
      m_data[v28].soundAlias = (const char *)v47;
      m_data[v28].volume = v23;
      m_data[v28].surfFlags = v20;
    }
    v29 = v45;
    v11->m_impactRegistered.m_storage.m_words.m_data[(__int64)v45 >> 5] |= 1 << (v45 & 0x1F);
    HIDWORD(v47) = 0;
    v31 = v47;
    *(float *)&v31 = v13;
    _XMM0 = v31;
    __asm
    {
      vinsertps xmm0, xmm0, xmm7, 10h
      vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    }
    v11->m_impactData.m_data[v29].pos = (float4)_XMM0.v;
    v = _XMM0.v;
    v.m128_i32[3] = 0;
    v35 = v;
    v35.m128_f32[0] = v46;
    _XMM0 = v35;
    __asm
    {
      vinsertps xmm0, xmm0, xmm14, 10h
      vinsertps xmm0, xmm0, xmm15, 20h ; ' '
    }
    v11->m_impactData.m_data[v29].normal = (float4)_XMM0.v;
    v49 = _XMM0.v;
    v49.m128_i32[3] = 0;
    v39 = v49;
    v39.m128_f32[0] = v17;
    _XMM0 = v39;
    __asm
    {
      vinsertps xmm0, xmm0, xmm11, 10h
      vinsertps xmm0, xmm0, xmm12, 20h ; ' '
    }
    v11->m_impactData.m_data[v29].incomingVelocity = (float4)_XMM0.v;
    v11->m_impactData.m_data[v29].surfaceFlags = v20;
    Ref = HavokPhysics_GetRef((Physics_WorldId)v7, *(hknpBodyId *)&event[11].m_filterBits);
    v11->m_impactData.m_data[v29].entNum = Physics_GetEntityNum(Ref);
    v11->m_impactData.m_data[v29].hitType = TRACE_HITTYPE_BEGIN;
    v11->m_impactData.m_data[v29].partName = 0;
  }
}

/*
==============
HavokPhysicsFX_ParticlesUpdated
==============
*/
void HavokPhysicsFX_ParticlesUpdated(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds)
{
  __int64 v4; 
  hknpWorld *World; 
  hknpWorldWriter_vtbl *v9; 
  __int64 m_serialAndIndex; 
  _QWORD v11[3]; 

  v4 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 989, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 990, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 991, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 992, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 996, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  v9 = World->hknpWorldWriter::__vftable;
  m_serialAndIndex = pipelineInstance->m_colliderId.m_serialAndIndex;
  v11[1] = &particleIds[v4];
  v11[0] = particleIds;
  ((void (__fastcall *)(hknpWorldWriter *, __int64, _QWORD *))v9->rebuildParticleCollisionCaches)(&World->hknpWorldWriter, m_serialAndIndex, v11);
}

/*
==============
HavokPhysicsFX_PlaySounds
==============
*/
void HavokPhysicsFX_PlaySounds(LocalClientNum_t localClientNum, Physics_WorldId worldId)
{
  __int64 v2; 
  __int64 v4; 
  hkArray<HavokPhysicsFX_QueuedSound,hkContainerHeapAllocator> *sounds; 
  HavokPhysicsFX_QueuedSound *org; 
  unsigned int surfFlags; 
  float volume; 
  unsigned __int64 SndEntHandle; 

  v2 = worldId;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v4 = v2;
  if ( !s_HavokPhysicsFXWorlds[v2].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1356, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  sounds = s_HavokPhysicsFXWorlds[v2].sounds;
  for ( org = sounds->m_data; org != &sounds->m_data[sounds->m_size]; ++org )
  {
    surfFlags = org->surfFlags;
    volume = org->volume;
    SndEntHandle = CG_GenerateSndEntHandle(localClientNum, 2046);
    SND_PlaySurfaceSoundAsync(org->soundAlias, (surfFlags >> 19) & 0x3F, SndEntHandle, volume, 1.0, 0, &org->position);
    HavokPhysicsFX_Debug_RegisterSoundEvent(org);
    sounds = s_HavokPhysicsFXWorlds[v4].sounds;
  }
  sounds->m_size = 0;
}

/*
==============
HavokPhysicsFX_ReachedPipelineLimit
==============
*/
bool HavokPhysicsFX_ReachedPipelineLimit(Physics_WorldId worldId)
{
  __int64 v1; 
  bool v2; 
  HavokPhysicsFX_World *v3; 

  v1 = worldId;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v2 = !s_HavokPhysicsFXWorlds[v1].isInitialized;
  v3 = &s_HavokPhysicsFXWorlds[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 249, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  return v3->numPipelineInstances >= v3->pipelineInstances->m_size;
}

/*
==============
HavokPhysicsFX_RegisterWorld
==============
*/
void HavokPhysicsFX_RegisterWorld(Physics_WorldId worldId)
{
  __int64 v1; 
  __int64 v2; 
  hkMemoryRouter *Value; 
  __int64 v4; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *v5; 
  hkMemoryAllocator *v6; 
  int m_size; 
  int v8; 
  int v9; 
  int v10; 
  hkMemoryRouter *v11; 
  __int64 v12; 
  hknpTaskGraph *v13; 
  hkMemoryRouter *v14; 
  hkArray<HavokPhysicsFX_QueuedSound,hkContainerHeapAllocator> *v15; 

  v1 = worldId;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 189, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST", -2i64) )
    __debugbreak();
  v2 = v1;
  if ( s_HavokPhysicsFXWorlds[v1].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 192, ASSERT_TYPE_ASSERT, "(!s_HavokPhysicsFXWorlds[worldId].isInitialized)", (const char *)&queryFormat, "!s_HavokPhysicsFXWorlds[worldId].isInitialized") )
    __debugbreak();
  s_HavokPhysicsFXWorlds[v2].isInitialized = 1;
  if ( s_HavokPhysicsFXWorlds[v2].pipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 196, ASSERT_TYPE_ASSERT, "(!s_HavokPhysicsFXWorlds[worldId].pipelineInstances)", (const char *)&queryFormat, "!s_HavokPhysicsFXWorlds[worldId].pipelineInstances") )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v4 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 16i64);
  v5 = (hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *)v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0i64;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 0x80000000;
  }
  else
  {
    v5 = NULL;
  }
  s_HavokPhysicsFXWorlds[v2].pipelineInstances = v5;
  v6 = hkMemHeapAllocator();
  m_size = v5->m_size;
  v8 = m_size + 10;
  v9 = v5->m_capacityAndFlags & 0x3FFFFFFF;
  if ( v9 < m_size + 10 )
  {
    v10 = 2 * v9;
    if ( (unsigned int)v10 >= 0x3FFFFFFF )
      v10 = 1073741822;
    if ( v8 < v10 )
      v8 = v10;
    hkArrayUtil::_reserve(v6, v5, v8, 8);
    m_size = v5->m_size;
  }
  v5->m_size = m_size + 10;
  memset_0(s_HavokPhysicsFXWorlds[v2].pipelineInstances->m_data, 0, 8i64 * s_HavokPhysicsFXWorlds[v2].pipelineInstances->m_size);
  s_HavokPhysicsFXWorlds[v2].numPipelineInstances = 0;
  if ( s_HavokPhysicsFXWorlds[v2].taskGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 203, ASSERT_TYPE_ASSERT, "(!s_HavokPhysicsFXWorlds[worldId].taskGraph)", (const char *)&queryFormat, "!s_HavokPhysicsFXWorlds[worldId].taskGraph") )
    __debugbreak();
  v11 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v11 )
    v11 = hkMemoryRouter::s_fallbackRouter;
  v12 = (__int64)v11->m_heap->blockAlloc(v11->m_heap, 544i64);
  v13 = (hknpTaskGraph *)v12;
  if ( v12 )
  {
    *(_QWORD *)(v12 + 8) = 0i64;
    *(_WORD *)(v12 + 16) = -1;
    *(_WORD *)(v12 + 18) = 1;
    *(_QWORD *)(v12 + 24) = v12 + 40;
    *(_DWORD *)(v12 + 32) = 0;
    *(_DWORD *)(v12 + 36) = -2147483632;
    *(_QWORD *)(v12 + 424) = v12 + 440;
    *(_DWORD *)(v12 + 432) = 0;
    *(_DWORD *)(v12 + 436) = -2147483632;
    *(_QWORD *)(v12 + 504) = 0i64;
    *(_DWORD *)(v12 + 512) = 0;
    *(_DWORD *)(v12 + 516) = 0x80000000;
    *(_QWORD *)v12 = hknpTaskGraph::`vftable';
    *(_QWORD *)(v12 + 534) = -1i64;
    *(_QWORD *)(v12 + 526) = -1i64;
    *(_DWORD *)(v12 + 522) = -1;
    *(_WORD *)(v12 + 520) = -1;
    hkTaskGraph::clear((hkTaskGraph *)v12);
  }
  else
  {
    v13 = NULL;
  }
  s_HavokPhysicsFXWorlds[v2].taskGraph = v13;
  if ( s_HavokPhysicsFXWorlds[v2].sounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 206, ASSERT_TYPE_ASSERT, "(!s_HavokPhysicsFXWorlds[worldId].sounds)", (const char *)&queryFormat, "!s_HavokPhysicsFXWorlds[worldId].sounds") )
    __debugbreak();
  v14 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v14 )
    v14 = hkMemoryRouter::s_fallbackRouter;
  v15 = (hkArray<HavokPhysicsFX_QueuedSound,hkContainerHeapAllocator> *)v14->m_heap->blockAlloc(v14->m_heap, 16i64);
  if ( v15 )
  {
    v15->m_data = NULL;
    v15->m_size = 0;
    v15->m_capacityAndFlags = 0x80000000;
    s_HavokPhysicsFXWorlds[v2].sounds = v15;
  }
  else
  {
    s_HavokPhysicsFXWorlds[v2].sounds = NULL;
  }
}

/*
==============
HavokPhysicsFX_ReleasePipeline
==============
*/
char HavokPhysicsFX_ReleasePipeline(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles)
{
  __int64 v3; 
  HavokPhysicsFX_World *v6; 
  hknpWorld *World; 
  PhysicsFXPipeline *m_asset; 
  unsigned int v9; 
  unsigned int v10; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  unsigned int m_size; 
  HavokPhysicsFX_Pipeline **m_data; 
  __int64 v15; 
  __int64 v16; 

  v3 = worldId;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 604, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( (unsigned int)(v3 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v6 = &s_HavokPhysicsFXWorlds[v3];
  if ( !v6->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 608, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  World = HavokPhysics_GetWorld((Physics_WorldId)v3);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 612, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  m_asset = pipelineInstance->m_asset;
  v9 = numParticles + pipelineInstance->m_remainingParticles;
  pipelineInstance->m_remainingParticles = v9;
  if ( v9 >= m_asset->numParticlesPerInstance + 1 )
  {
    LODWORD(v15) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 616, ASSERT_TYPE_ASSERT, "(unsigned)( pipelineInstance->m_remainingParticles ) < (unsigned)( pipelineInstance->m_asset->numParticlesPerInstance + 1 )", "pipelineInstance->m_remainingParticles doesn't index pipelineInstance->m_asset->numParticlesPerInstance + 1\n\t%i not in [0, %i)", v15, m_asset->numParticlesPerInstance + 1) )
      __debugbreak();
  }
  if ( pipelineInstance->m_remainingParticles < pipelineInstance->m_asset->numParticlesPerInstance )
    return 0;
  if ( (pipelineInstance->m_colliderId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 622, ASSERT_TYPE_ASSERT, "(pipelineInstance->m_colliderId.isValid())", (const char *)&queryFormat, "pipelineInstance->m_colliderId.isValid()") )
    __debugbreak();
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD))World->destroyParticlesCollider)(&World->hknpWorldWriter, pipelineInstance->m_colliderId.m_serialAndIndex);
  pipelineInstance->m_colliderId.m_serialAndIndex = 0xFFFFFF;
  v10 = 0;
  pipelineInstances = v6->pipelineInstances;
  m_size = pipelineInstances->m_size;
  if ( !m_size )
    goto LABEL_26;
  m_data = pipelineInstances->m_data;
  while ( m_data[v10] != pipelineInstance )
  {
    if ( ++v10 >= m_size )
      goto LABEL_26;
  }
  if ( v10 >= m_size )
  {
LABEL_26:
    LODWORD(v16) = m_size;
    LODWORD(v15) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 637, ASSERT_TYPE_ASSERT, "(unsigned)( pipelineIdx ) < (unsigned)( numSupportedPipelines )", "pipelineIdx doesn't index numSupportedPipelines\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v6->pipelineInstances->m_data[v10] = NULL;
  --v6->numPipelineInstances;
  hkReferencedObject::removeReference(pipelineInstance);
  return 1;
}

/*
==============
HavokPhysicsFX_RequestPipeline
==============
*/
HavokPhysicsFX_Pipeline *HavokPhysicsFX_RequestPipeline(Physics_WorldId worldId, PhysicsFXPipeline *pipelineAsset, PhysicsFXShape *shapeAsset, int numParticles, int *shapeIndex)
{
  __int64 v5; 
  hknpWorld *World; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  HavokPhysicsFX_Pipeline **m_data; 
  __int64 v12; 
  HavokPhysicsFX_Pipeline *v13; 
  int m_remainingParticles; 
  HavokPhysicsFX_Pipeline *result; 
  int m_size; 
  int v17; 
  PhysicsFXShape **p_asset; 
  hknpConvexShape *FXHKShape; 
  hknpParticlesCollider *v20; 
  int v21; 
  hkMemoryAllocator *v22; 
  int v23; 
  __int64 v24; 

  v5 = worldId;
  if ( !shapeAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 526, ASSERT_TYPE_ASSERT, "(shapeAsset)", (const char *)&queryFormat, "shapeAsset") )
    __debugbreak();
  if ( (unsigned int)(v5 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !s_HavokPhysicsFXWorlds[v5].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 530, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  World = HavokPhysics_GetWorld((Physics_WorldId)v5);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 534, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  pipelineInstances = s_HavokPhysicsFXWorlds[v5].pipelineInstances;
  m_data = pipelineInstances->m_data;
  v12 = (__int64)&pipelineInstances->m_data[pipelineInstances->m_size];
  if ( pipelineInstances->m_data == (HavokPhysicsFX_Pipeline **)v12 )
  {
LABEL_18:
    if ( HavokPhysicsFX_ReachedPipelineLimit((Physics_WorldId)v5) )
      return 0i64;
    else
      return HavokPhysicsFX_CreatePipeline((Physics_WorldId)v5, pipelineAsset, shapeAsset, numParticles, shapeIndex);
  }
  else
  {
    while ( 1 )
    {
      v13 = *m_data;
      if ( *m_data )
      {
        if ( v13->m_asset == pipelineAsset )
        {
          m_remainingParticles = v13->m_remainingParticles;
          if ( m_remainingParticles >= numParticles )
            break;
        }
      }
      if ( ++m_data == (HavokPhysicsFX_Pipeline **)v12 )
        goto LABEL_18;
    }
    m_size = v13->m_shapes.m_size;
    v17 = 0;
    v13->m_remainingParticles = m_remainingParticles - numParticles;
    if ( m_size <= 0 )
    {
LABEL_24:
      HavokPhysicsFX_LockAssetRead();
      FXHKShape = HavokPhysicsFX_GetFXHKShape(shapeAsset, 0);
      if ( !FXHKShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 569, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
        __debugbreak();
      HavokPhysicsFX_UnlockAssetRead();
      if ( (FXHKShape->m_flags.m_storage & 1) == 0 )
      {
        FXHKShape = NULL;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 572, ASSERT_TYPE_ASSERT, "(cShape)", (const char *)&queryFormat, "cShape") )
          __debugbreak();
      }
      v20 = hknpWorld::accessParticlesCollider(World, v13->m_colliderId);
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 576, ASSERT_TYPE_ASSERT, "(collider)", (const char *)&queryFormat, "collider") )
        __debugbreak();
      v21 = hknpParticleShapeLibrary::addShape(v20->m_particleShapeLibrary.m_ptr, FXHKShape);
      *shapeIndex = v21;
      if ( v21 != v13->m_shapes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 580, ASSERT_TYPE_ASSERT, "(*shapeIndex == pipelineInstance->m_shapes.getSize())", (const char *)&queryFormat, "*shapeIndex == pipelineInstance->m_shapes.getSize()") )
        __debugbreak();
      v22 = hkMemHeapAllocator();
      v23 = v13->m_shapes.m_size;
      if ( v23 == (v13->m_shapes.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v22, &v13->m_shapes, 16);
        v23 = v13->m_shapes.m_size;
      }
      v13->m_shapes.m_size = v23 + 1;
      result = v13;
      v24 = (__int64)&v13->m_shapes.m_data[v23];
      *(_QWORD *)v24 = shapeAsset;
      *(_DWORD *)(v24 + 8) = 0;
    }
    else
    {
      p_asset = &v13->m_shapes.m_data->asset;
      while ( *p_asset != shapeAsset )
      {
        ++v17;
        p_asset += 2;
        if ( v17 >= m_size )
          goto LABEL_24;
      }
      *shapeIndex = v17;
      return v13;
    }
  }
  return result;
}

/*
==============
HavokPhysicsFX_SetParticleAngularVelocities
==============
*/
void HavokPhysicsFX_SetParticleAngularVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec3_t *velocities)
{
  __int64 v5; 
  __int64 v9; 
  float *v10; 
  __int64 i; 
  __int64 v12; 
  __int64 v17; 
  __int64 v18; 

  v5 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 970, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 971, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 972, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (int)v5 > pipelineInstance->m_angularVelocities.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 973, ASSERT_TYPE_ASSERT, "(numParticles <= pipelineInstance->m_angularVelocities.getSize())", (const char *)&queryFormat, "numParticles <= pipelineInstance->m_angularVelocities.getSize()") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 974, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !velocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 975, ASSERT_TYPE_ASSERT, "(velocities)", (const char *)&queryFormat, "velocities") )
    __debugbreak();
  v9 = v5;
  if ( (int)v5 > 0 )
  {
    v10 = &velocities->v[2];
    for ( i = 0i64; i < v9; ++i )
    {
      v12 = particleIds[i];
      if ( (unsigned int)v12 >= pipelineInstance->m_linearVelocities.m_size )
      {
        LODWORD(v18) = pipelineInstance->m_linearVelocities.m_size;
        LODWORD(v17) = particleIds[i];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 980, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_linearVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_linearVelocities.getSize()\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      _XMM0 = 0i64;
      __asm
      {
        vinsertps xmm0, xmm0, dword ptr [rbx-8], 0
        vinsertps xmm0, xmm0, dword ptr [rbx-4], 10h
        vinsertps xmm0, xmm0, dword ptr [rbx], 20h ; ' '
      }
      v10 += 3;
      pipelineInstance->m_angularVelocities.m_data[v12] = (hkVector4f)_XMM0.m_quad;
    }
  }
}

/*
==============
HavokPhysicsFX_SetParticleAngularVelocity
==============
*/
void HavokPhysicsFX_SetParticleAngularVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec3_t *velocity)
{
  __int64 v4; 
  __int64 v11; 

  v4 = particleId;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 959, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 960, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (unsigned int)v4 >= pipelineInstance->m_angularVelocities.m_size )
  {
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 961, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_angularVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_angularVelocities.getSize()\n\t%i not in [0, %i)", v11, pipelineInstance->m_angularVelocities.m_size) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdi], 0
    vinsertps xmm0, xmm0, dword ptr [rdi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rdi+8], 20h ; ' '
  }
  pipelineInstance->m_angularVelocities.m_data[v4] = (hkVector4f)_XMM0.m_quad;
}

/*
==============
HavokPhysicsFX_SetParticleLinearVelocities
==============
*/
void HavokPhysicsFX_SetParticleLinearVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, hkArray<hkVector4f,hkContainerHeapAllocator> *velocities)
{
  __int64 v5; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  hkVector4f v13; 
  __int64 v14; 
  __int64 v15; 

  v5 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 910, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 911, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 912, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (int)v5 > pipelineInstance->m_linearVelocities.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 913, ASSERT_TYPE_ASSERT, "(numParticles <= pipelineInstance->m_linearVelocities.getSize())", (const char *)&queryFormat, "numParticles <= pipelineInstance->m_linearVelocities.getSize()") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 914, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v9 = v5;
  if ( (int)v5 > 0 )
  {
    v10 = 0i64;
    v11 = 0i64;
    do
    {
      v12 = particleIds[v10];
      if ( (unsigned int)v12 >= pipelineInstance->m_linearVelocities.m_size )
      {
        LODWORD(v15) = pipelineInstance->m_linearVelocities.m_size;
        LODWORD(v14) = particleIds[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 919, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_linearVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_linearVelocities.getSize()\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      ++v10;
      v13.m_quad = (__m128)velocities->m_data[v11++];
      pipelineInstance->m_linearVelocities.m_data[v12] = (hkVector4f)v13.m_quad;
    }
    while ( v10 < v9 );
  }
}

/*
==============
HavokPhysicsFX_SetParticleLinearVelocity
==============
*/
void HavokPhysicsFX_SetParticleLinearVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, hkVector4f *velocity)
{
  __int64 v5; 
  __int64 v7; 
  bool v8; 
  HavokPhysicsFX_World *v9; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int v11; 
  unsigned int m_size; 
  HavokPhysicsFX_Pipeline **m_data; 
  __int64 v14; 

  v5 = particleId;
  v7 = worldId;
  if ( !pipelineInstance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 899, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 652, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
  }
  if ( (unsigned int)(v7 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v8 = !s_HavokPhysicsFXWorlds[v7].isInitialized;
  v9 = &s_HavokPhysicsFXWorlds[v7];
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 656, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  pipelineInstances = v9->pipelineInstances;
  v11 = 0;
  m_size = pipelineInstances->m_size;
  if ( m_size )
  {
    m_data = pipelineInstances->m_data;
    while ( m_data[v11] != pipelineInstance )
    {
      if ( ++v11 >= m_size )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 900, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= pipelineInstance->m_linearVelocities.m_size )
  {
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 901, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_linearVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_linearVelocities.getSize()\n\t%i not in [0, %i)", v14, pipelineInstance->m_linearVelocities.m_size) )
      __debugbreak();
  }
  pipelineInstance->m_linearVelocities.m_data[v5] = (hkVector4f)velocity->m_quad;
}

/*
==============
HavokPhysicsFX_SetParticleOrientation
==============
*/
void HavokPhysicsFX_SetParticleOrientation(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec4_t *orientation)
{
  __int64 v4; 
  __int64 v12; 

  v4 = particleId;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 928, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 929, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (unsigned int)v4 >= pipelineInstance->m_orientations.m_size )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 930, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_orientations.getSize() )", "particleId doesn't index pipelineInstance->m_orientations.getSize()\n\t%i not in [0, %i)", v12, pipelineInstance->m_orientations.m_size) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(orientation->v[0] * orientation->v[0]) + (float)(orientation->v[1] * orientation->v[1])) + (float)(orientation->v[2] * orientation->v[2])) + (float)(orientation->v[3] * orientation->v[3])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 931, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( orientation ))", (const char *)&queryFormat, "Vec4IsNormalized( orientation )") )
    __debugbreak();
  _XMM0 = LODWORD(orientation->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbx+0Ch], 30h ; '0'
  }
  pipelineInstance->m_orientations.m_data[v4] = (hkQuaternionf)_XMM0.m_vec.m_quad;
}

/*
==============
HavokPhysicsFX_SetParticleOrientations
==============
*/
void HavokPhysicsFX_SetParticleOrientations(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec4_t *orientations)
{
  __int64 v5; 
  __int64 v9; 
  float *v10; 
  __int64 i; 
  __int64 v12; 
  __int64 v17; 
  __int64 v18; 

  v5 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 940, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 941, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 942, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (int)v5 > pipelineInstance->m_orientations.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 943, ASSERT_TYPE_ASSERT, "(numParticles <= pipelineInstance->m_orientations.getSize())", (const char *)&queryFormat, "numParticles <= pipelineInstance->m_orientations.getSize()") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 944, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !orientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 945, ASSERT_TYPE_ASSERT, "(orientations)", (const char *)&queryFormat, "orientations") )
    __debugbreak();
  v9 = v5;
  if ( (int)v5 > 0 )
  {
    v10 = &orientations->v[2];
    for ( i = 0i64; i < v9; ++i )
    {
      v12 = particleIds[i];
      if ( (unsigned int)v12 >= pipelineInstance->m_orientations.m_size )
      {
        LODWORD(v18) = pipelineInstance->m_orientations.m_size;
        LODWORD(v17) = particleIds[i];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 950, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_orientations.getSize() )", "particleId doesn't index pipelineInstance->m_orientations.getSize()\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      _XMM0 = *((unsigned int *)v10 - 2);
      __asm
      {
        vinsertps xmm0, xmm0, dword ptr [rbx-4], 10h
        vinsertps xmm0, xmm0, dword ptr [rbx], 20h ; ' '
        vinsertps xmm0, xmm0, dword ptr [rbx+4], 30h ; '0'
      }
      v10 += 4;
      pipelineInstance->m_orientations.m_data[v12] = (hkQuaternionf)_XMM0.m_vec.m_quad;
    }
  }
}

/*
==============
HavokPhysicsFX_SetParticlePosition
==============
*/
void HavokPhysicsFX_SetParticlePosition(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, hkVector4f *position)
{
  __int64 v5; 
  __int64 v7; 
  bool v8; 
  HavokPhysicsFX_World *v9; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int v11; 
  unsigned int m_size; 
  HavokPhysicsFX_Pipeline **m_data; 
  __int64 v14; 

  v5 = particleId;
  v7 = worldId;
  if ( !pipelineInstance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 744, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 652, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
  }
  if ( (unsigned int)(v7 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v8 = !s_HavokPhysicsFXWorlds[v7].isInitialized;
  v9 = &s_HavokPhysicsFXWorlds[v7];
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 656, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  pipelineInstances = v9->pipelineInstances;
  v11 = 0;
  m_size = pipelineInstances->m_size;
  if ( m_size )
  {
    m_data = pipelineInstances->m_data;
    while ( m_data[v11] != pipelineInstance )
    {
      if ( ++v11 >= m_size )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 745, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= pipelineInstance->m_positions.m_size )
  {
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 746, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_positions.getSize() )", "particleId doesn't index pipelineInstance->m_positions.getSize()\n\t%i not in [0, %i)", v14, pipelineInstance->m_positions.m_size) )
      __debugbreak();
  }
  pipelineInstance->m_positions.m_data[v5] = (hkVector4f)position->m_quad;
}

/*
==============
HavokPhysicsFX_SetParticlePositions
==============
*/
void HavokPhysicsFX_SetParticlePositions(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, hkArray<hkVector4f,hkContainerHeapAllocator> *positions)
{
  __int64 v5; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  hkVector4f v13; 
  __int64 v14; 
  __int64 v15; 

  v5 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 755, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 756, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 757, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (int)v5 > positions->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 758, ASSERT_TYPE_ASSERT, "(numParticles <= positions.getSize())", (const char *)&queryFormat, "numParticles <= positions.getSize()") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 759, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v9 = v5;
  if ( (int)v5 > 0 )
  {
    v10 = 0i64;
    v11 = 0i64;
    do
    {
      v12 = particleIds[v10];
      if ( (unsigned int)v12 >= pipelineInstance->m_positions.m_size )
      {
        LODWORD(v15) = pipelineInstance->m_positions.m_size;
        LODWORD(v14) = particleIds[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 764, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_positions.getSize() )", "particleId doesn't index pipelineInstance->m_positions.getSize()\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      ++v10;
      v13.m_quad = (__m128)positions->m_data[v11++];
      pipelineInstance->m_positions.m_data[v12] = (hkVector4f)v13.m_quad;
    }
    while ( v10 < v9 );
  }
}

/*
==============
HavokPhysicsFX_SetParticleScale
==============
*/
void HavokPhysicsFX_SetParticleScale(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, float scale)
{
  __int64 v5; 
  int v7; 
  hknpWorld *World; 
  PhysicsFXShape *asset; 
  unsigned int NumScaledShapes; 
  hkArray<float,hkContainerHeapAllocator> *ShapeScales; 
  int v12; 
  signed int v13; 
  float *m_data; 
  float v15; 
  bool v16; 
  float v17; 
  bool v18; 
  float v19; 
  bool v20; 
  float v21; 
  bool v22; 
  float *v23; 
  float v24; 
  bool v25; 
  __int64 m_size; 
  HavokPhysicsFX_ScaledShapeAsset *v27; 
  __int64 i; 
  const hknpConvexShape *FXHKShape; 
  hknpParticlesCollider *v30; 
  hkMemoryAllocator *v31; 
  int v32; 
  HavokPhysicsFX_ScaledShapeAsset *v33; 
  __int64 v34; 
  __int64 v35; 

  v5 = particleId;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 773, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 774, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  v7 = 0;
  if ( (int)v5 < 0 || (int)v5 > pipelineInstance->m_asset->numParticlesPerInstance )
  {
    LODWORD(v34) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 775, ASSERT_TYPE_ASSERT, "( 0 ) <= ( particleId ) && ( particleId ) <= ( pipelineInstance->m_asset->numParticlesPerInstance )", "particleId not in [0, pipelineInstance->m_asset->numParticlesPerInstance]\n\t%i not in [%i, %i]", v34, 0i64, pipelineInstance->m_asset->numParticlesPerInstance) )
      __debugbreak();
  }
  if ( ((LODWORD(scale) & 0x7F800000) == 2139095040 || scale <= 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 776, ASSERT_TYPE_ASSERT, "(!IS_NAN( scale ) && scale > 0.f)", (const char *)&queryFormat, "!IS_NAN( scale ) && scale > 0.f") )
    __debugbreak();
  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 780, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  HavokPhysicsFX_LockAssetRead();
  v35 = v5;
  asset = pipelineInstance->m_shapes.m_data[pipelineInstance->m_shapeIndices.m_data[v5]].asset;
  NumScaledShapes = HavokPhysicsFX_GetNumScaledShapes(asset);
  ShapeScales = HavokPhysicsFX_GetShapeScales(asset);
  if ( !NumScaledShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 793, ASSERT_TYPE_ASSERT, "(numScaledShapesInAsset > 0)", (const char *)&queryFormat, "numScaledShapesInAsset > 0") )
    __debugbreak();
  if ( ShapeScales->m_size != NumScaledShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 794, ASSERT_TYPE_ASSERT, "(assetShapeScales->getSize() == (int)numScaledShapesInAsset)", (const char *)&queryFormat, "assetShapeScales->getSize() == (int)numScaledShapesInAsset") )
    __debugbreak();
  v12 = 0;
  if ( scale != 1.0 )
  {
    v13 = 1;
    if ( NumScaledShapes > 1 )
    {
      if ( NumScaledShapes - 1 >= 4 )
      {
        m_data = ShapeScales->m_data;
        do
        {
          v15 = m_data[v13];
          v16 = v15 < 1.0;
          if ( v15 > 1.0 )
          {
            if ( scale < 1.0 )
              goto LABEL_35;
            v16 = v15 < 1.0;
          }
          if ( (!v16 || scale <= 1.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(scale / m_data[v12]) - 1.0) & _xmm) > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(scale / v15) - 1.0) & _xmm) )
            v12 = v13;
LABEL_35:
          v17 = m_data[v13 + 1];
          v18 = v17 < 1.0;
          if ( v17 > 1.0 )
          {
            if ( scale < 1.0 )
              goto LABEL_42;
            v18 = v17 < 1.0;
          }
          if ( (!v18 || scale <= 1.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(scale / v17) - 1.0) & _xmm) < COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(scale / m_data[v12]) - 1.0) & _xmm) )
            v12 = v13 + 1;
LABEL_42:
          v19 = m_data[v13 + 2];
          v20 = v19 < 1.0;
          if ( v19 > 1.0 )
          {
            if ( scale < 1.0 )
              goto LABEL_49;
            v20 = v19 < 1.0;
          }
          if ( (!v20 || scale <= 1.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(scale / v19) - 1.0) & _xmm) < COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(scale / m_data[v12]) - 1.0) & _xmm) )
            v12 = v13 + 2;
LABEL_49:
          v21 = m_data[v13 + 3];
          v22 = v21 < 1.0;
          if ( v21 <= 1.0 )
            goto LABEL_52;
          if ( scale >= 1.0 )
          {
            v22 = v21 < 1.0;
LABEL_52:
            if ( (!v22 || scale <= 1.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(scale / v21) - 1.0) & _xmm) < COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(scale / m_data[v12]) - 1.0) & _xmm) )
              v12 = v13 + 3;
          }
          v13 += 4;
        }
        while ( v13 < NumScaledShapes - 3 );
      }
      if ( v13 < NumScaledShapes )
      {
        v23 = ShapeScales->m_data;
        while ( 1 )
        {
          v24 = v23[v13];
          v25 = v24 < 1.0;
          if ( v24 <= 1.0 )
            goto LABEL_62;
          if ( scale >= 1.0 )
            break;
LABEL_66:
          if ( ++v13 >= NumScaledShapes )
            goto LABEL_67;
        }
        v25 = v24 < 1.0;
LABEL_62:
        if ( (!v25 || scale <= 1.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(scale / v23[v12]) - 1.0) & _xmm) > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(scale / v24) - 1.0) & _xmm) )
          v12 = v13;
        goto LABEL_66;
      }
    }
  }
LABEL_67:
  m_size = pipelineInstance->m_shapes.m_size;
  if ( (int)m_size > 0 )
  {
    v27 = pipelineInstance->m_shapes.m_data;
    for ( i = 0i64; i < m_size; ++i )
    {
      if ( v27->asset == asset && v27->scaleShapeIndex == v12 )
        break;
      ++v7;
      ++v27;
    }
  }
  if ( v7 == (_DWORD)m_size )
  {
    Sys_ProfBeginNamedEvent(0xFFFF00FF, "Particles: Create Scaled Shape");
    FXHKShape = HavokPhysicsFX_GetFXHKShape(asset, v12);
    if ( !FXHKShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 856, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    v30 = hknpWorld::accessParticlesCollider(World, pipelineInstance->m_colliderId);
    if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 860, ASSERT_TYPE_ASSERT, "(collider)", (const char *)&queryFormat, "collider") )
      __debugbreak();
    v7 = hknpParticleShapeLibrary::addShape(v30->m_particleShapeLibrary.m_ptr, FXHKShape);
    if ( v7 != pipelineInstance->m_shapes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 864, ASSERT_TYPE_ASSERT, "(shapeIdx == pipelineInstance->m_shapes.getSize())", (const char *)&queryFormat, "shapeIdx == pipelineInstance->m_shapes.getSize()") )
      __debugbreak();
    v31 = hkMemHeapAllocator();
    v32 = pipelineInstance->m_shapes.m_size;
    if ( v32 == (pipelineInstance->m_shapes.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v31, &pipelineInstance->m_shapes, 16);
      v32 = pipelineInstance->m_shapes.m_size;
    }
    v33 = &pipelineInstance->m_shapes.m_data[v32];
    pipelineInstance->m_shapes.m_size = v32 + 1;
    v33->asset = asset;
    v33->scaleShapeIndex = v12;
    Sys_ProfEndNamedEvent();
  }
  pipelineInstance->m_shapeIndices.m_data[v35] = v7;
  pipelineInstance->m_scales.m_data[v35] = ShapeScales->m_data[v12];
  HavokPhysicsFX_UnlockAssetRead();
}

/*
==============
HavokPhysicsFX_SetParticleScales
==============
*/
void HavokPhysicsFX_SetParticleScales(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, float *scales)
{
  __int64 v5; 
  signed __int64 v9; 

  v5 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 883, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 884, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 885, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 886, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !scales && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 887, ASSERT_TYPE_ASSERT, "(scales)", (const char *)&queryFormat, "scales") )
    __debugbreak();
  if ( v5 > 0 )
  {
    v9 = (char *)scales - (char *)particleIds;
    do
    {
      HavokPhysicsFX_SetParticleScale(worldId, pipelineInstance, *particleIds, *(float *)((char *)particleIds + v9));
      ++particleIds;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
HavokPhysicsFX_Shutdown
==============
*/
void HavokPhysicsFX_Shutdown(void)
{
  if ( !s_havokPhysicsFX_Initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 171, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFX_Initialized)", "%s\n\tHavokPhysicsFX Already shutdown", "s_havokPhysicsFX_Initialized") )
    __debugbreak();
  s_havokPhysicsFX_Initialized = 0;
  HavokPhysicsFX_ShutdownAssets();
}

/*
==============
HavokPhysicsFX_StepColliders
==============
*/
void HavokPhysicsFX_StepColliders(Physics_WorldId worldId)
{
  __int64 v1; 
  hknpWorld *World; 
  HavokPhysicsThreadPool *ThreadPool; 
  hkDefaultTaskQueue *TaskQueue; 
  hknpTaskGraph *taskGraph; 
  const hknpStepInput *StepInput; 
  struct hkTaskQueue::_Handle *v7; 
  float v8; 
  float v9; 

  v1 = worldId;
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "Update the Colliders");
  if ( (unsigned int)(v1 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !s_HavokPhysicsFXWorlds[v1].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1268, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  World = HavokPhysics_GetWorld((Physics_WorldId)v1);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1272, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  ThreadPool = HavokPhysics_GetThreadPool();
  if ( !ThreadPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1276, ASSERT_TYPE_ASSERT, "(threadPool)", (const char *)&queryFormat, "threadPool") )
    __debugbreak();
  TaskQueue = HavokPhysics_GetTaskQueue((Physics_WorldId)v1);
  if ( !TaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1280, ASSERT_TYPE_ASSERT, "(taskQueue)", (const char *)&queryFormat, "taskQueue") )
    __debugbreak();
  taskGraph = s_HavokPhysicsFXWorlds[v1].taskGraph;
  if ( !taskGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1284, ASSERT_TYPE_ASSERT, "(taskGraph)", (const char *)&queryFormat, "taskGraph") )
    __debugbreak();
  StepInput = HavokPhysics_GetStepInput((Physics_WorldId)v1);
  if ( !StepInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1288, ASSERT_TYPE_ASSERT, "(stepInput)", (const char *)&queryFormat, "stepInput") )
    __debugbreak();
  hknpWorld::generateAllParticlesCollidersTasks(World, StepInput, taskGraph);
  v7 = hkTaskGraph::submitToTaskQueue(taskGraph, &TaskQueue->hkTaskQueue, FIFO);
  v9 = 0.0;
  v8 = 0.0;
  TaskQueue->processUntilFinished(&TaskQueue->hkTaskQueue, &v9, &v8, v7);
  hkTaskGraph::freeTaskQueueHandles(taskGraph, &TaskQueue->hkTaskQueue);
  taskGraph->clear(taskGraph);
  hkDefaultTaskQueue::close(TaskQueue);
  HavokPhysicsThreadPool::waitForCompletion(ThreadPool, TaskQueue);
  hkDefaultTaskQueue::reset(TaskQueue);
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokPhysicsFX_StepPipelines
==============
*/
void HavokPhysicsFX_StepPipelines(Physics_WorldId worldId)
{
  __int64 v1; 
  HavokPhysicsThreadPool *ThreadPool; 
  hkDefaultTaskQueue *TaskQueue; 
  hknpTaskGraph *taskGraph; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int v6; 
  HavokPhysicsFX_Pipeline **m_data; 
  int v8; 
  char *Value; 
  int *v10; 
  _QWORD *v11; 
  char *v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  ThreadContext CurrentThreadContext; 
  struct hkTaskQueue::_Handle *v16; 
  __int64 v17; 
  __int64 v18; 
  hkHandle<unsigned short,65535,hkTaskGraph::TaskIdDiscriminant> result; 
  float v20; 
  float v21; 

  v1 = worldId;
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "Step the Pipelines");
  if ( (unsigned int)(v1 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !s_HavokPhysicsFXWorlds[v1].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1191, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  ThreadPool = HavokPhysics_GetThreadPool();
  if ( !ThreadPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1195, ASSERT_TYPE_ASSERT, "(threadPool)", (const char *)&queryFormat, "threadPool") )
    __debugbreak();
  TaskQueue = HavokPhysics_GetTaskQueue((Physics_WorldId)v1);
  if ( !TaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1199, ASSERT_TYPE_ASSERT, "(taskQueue)", (const char *)&queryFormat, "taskQueue") )
    __debugbreak();
  taskGraph = s_HavokPhysicsFXWorlds[v1].taskGraph;
  if ( !taskGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1203, ASSERT_TYPE_ASSERT, "(taskGraph)", (const char *)&queryFormat, "taskGraph") )
    __debugbreak();
  pipelineInstances = s_HavokPhysicsFXWorlds[v1].pipelineInstances;
  v6 = 0;
  m_data = pipelineInstances->m_data;
  if ( pipelineInstances->m_data != &pipelineInstances->m_data[pipelineInstances->m_size] )
  {
    do
    {
      if ( *m_data )
      {
        hkTaskGraph::addTask(taskGraph, &result, (*m_data)->m_stepTask, (hkTask::Priority::Enum)64);
        ++v6;
      }
      ++m_data;
    }
    while ( m_data != &s_HavokPhysicsFXWorlds[v1].pipelineInstances->m_data[s_HavokPhysicsFXWorlds[v1].pipelineInstances->m_size] );
  }
  if ( v6 != s_HavokPhysicsFXWorlds[v1].numPipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1222, ASSERT_TYPE_ASSERT, "( numTasks ) == ( world->numPipelineInstances )", "%s == %s\n\t%i, %i", "numTasks", "world->numPipelineInstances", v6, s_HavokPhysicsFXWorlds[v1].numPipelineInstances) )
    __debugbreak();
  if ( HavokPhysics_IsWorldMultithreaded((Physics_WorldId)v1) && v6 > 1 && !Physics_RenderDebugEnabled() )
  {
    HavokPhysicsThreadPool::setUsage(ThreadPool, HAVOKPHYSICS_THREADPOOL_USAGE_FX);
    v8 = ThreadPool->getNumThreads(ThreadPool);
    if ( v6 - 1 < v8 )
      v8 = v6 - 1;
    Value = (char *)Sys_GetValue(0);
    v10 = (int *)(Value + 26536);
    if ( (unsigned int)(*((_DWORD *)Value + 6634) + 1) >= 3 )
    {
      LODWORD(v18) = 3;
      LODWORD(v17) = *((_DWORD *)Value + 6634) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    if ( (unsigned int)++*v10 >= 3 )
    {
      LODWORD(v18) = 3;
      LODWORD(v17) = *v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v11 = Value + 2088;
    v12 = Value + 40;
    if ( *v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v11 += 8i64;
    if ( *v11 >= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v11 = v10;
    if ( *v11 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v13 = *v10;
    v14 = __rdtsc();
    v10[v13 + 2] = v14;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 611, NULL, 0);
    HavokPhysicsThreadPool::startWorkerCommands(ThreadPool, (Physics_WorldId)v1, v8);
    Profile_EndInternal(NULL);
  }
  v16 = hkTaskGraph::submitToTaskQueue(taskGraph, &TaskQueue->hkTaskQueue, FIFO);
  v21 = 0.0;
  v20 = 0.0;
  TaskQueue->processUntilFinished(&TaskQueue->hkTaskQueue, &v21, &v20, v16);
  hkTaskGraph::freeTaskQueueHandles(taskGraph, &TaskQueue->hkTaskQueue);
  taskGraph->clear(taskGraph);
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokPhysicsFX_StepWorld
==============
*/
void HavokPhysicsFX_StepWorld(Physics_WorldId worldId)
{
  __int64 v1; 
  hknpStepInput *StepInput; 
  __int64 numPipelineInstances; 
  const char *v4; 

  v1 = worldId;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1323, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)(v1 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !s_HavokPhysicsFXWorlds[v1].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1327, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  StepInput = HavokPhysics_GetStepInput((Physics_WorldId)v1);
  if ( !StepInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1331, ASSERT_TYPE_ASSERT, "(stepInput)", (const char *)&queryFormat, "stepInput") )
    __debugbreak();
  if ( StepInput->m_deltaTime > 0.0 )
  {
    numPipelineInstances = (unsigned int)s_HavokPhysicsFXWorlds[v1].numPipelineInstances;
    if ( (_DWORD)numPipelineInstances )
    {
      v4 = j_va("Havok FX Step World - %i Pipelines", numPipelineInstances);
      Sys_ProfBeginNamedEvent(0xFFFF00FF, v4);
      HavokPhysicsFX_StepPipelines((Physics_WorldId)v1);
      HavokPhysicsFX_StepColliders((Physics_WorldId)v1);
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
HavokPhysicsFX_UnregisterWorld
==============
*/
void HavokPhysicsFX_UnregisterWorld(Physics_WorldId worldId)
{
  __int64 v1; 
  __int64 v2; 
  hkArray<HavokPhysicsFX_QueuedSound,hkContainerHeapAllocator> *sounds; 
  hkMemoryAllocator *v4; 
  int m_capacityAndFlags; 
  hkMemoryRouter *Value; 
  hknpTaskGraph *taskGraph; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  hkMemoryAllocator *v9; 
  int v10; 
  hkMemoryRouter *v11; 

  v1 = worldId;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 214, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST", -2i64) )
    __debugbreak();
  v2 = v1;
  if ( !s_HavokPhysicsFXWorlds[v1].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 217, ASSERT_TYPE_ASSERT, "(s_HavokPhysicsFXWorlds[worldId].isInitialized)", (const char *)&queryFormat, "s_HavokPhysicsFXWorlds[worldId].isInitialized") )
    __debugbreak();
  s_HavokPhysicsFXWorlds[v2].isInitialized = 0;
  if ( !s_HavokPhysicsFXWorlds[v2].sounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 220, ASSERT_TYPE_ASSERT, "(s_HavokPhysicsFXWorlds[worldId].sounds)", (const char *)&queryFormat, "s_HavokPhysicsFXWorlds[worldId].sounds") )
    __debugbreak();
  sounds = s_HavokPhysicsFXWorlds[v2].sounds;
  if ( sounds )
  {
    v4 = hkMemHeapAllocator();
    sounds->m_size = 0;
    m_capacityAndFlags = sounds->m_capacityAndFlags;
    if ( m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v4, sounds->m_data, 40, m_capacityAndFlags & 0x3FFFFFFF);
    sounds->m_data = NULL;
    sounds->m_capacityAndFlags = 0x80000000;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, sounds, 16);
  }
  s_HavokPhysicsFXWorlds[v2].sounds = NULL;
  if ( !s_HavokPhysicsFXWorlds[v2].taskGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 225, ASSERT_TYPE_ASSERT, "(s_HavokPhysicsFXWorlds[worldId].taskGraph)", (const char *)&queryFormat, "s_HavokPhysicsFXWorlds[worldId].taskGraph") )
    __debugbreak();
  taskGraph = s_HavokPhysicsFXWorlds[v2].taskGraph;
  if ( taskGraph )
    ((void (__fastcall *)(hknpTaskGraph *, __int64))taskGraph->~hkBaseObject)(taskGraph, 1i64);
  s_HavokPhysicsFXWorlds[v2].taskGraph = NULL;
  if ( !s_HavokPhysicsFXWorlds[v2].pipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 230, ASSERT_TYPE_ASSERT, "(s_HavokPhysicsFXWorlds[worldId].pipelineInstances)", (const char *)&queryFormat, "s_HavokPhysicsFXWorlds[worldId].pipelineInstances") )
    __debugbreak();
  pipelineInstances = s_HavokPhysicsFXWorlds[v2].pipelineInstances;
  if ( pipelineInstances )
  {
    v9 = hkMemHeapAllocator();
    pipelineInstances->m_size = 0;
    v10 = pipelineInstances->m_capacityAndFlags;
    if ( v10 >= 0 )
      hkMemoryAllocator::bufFree2(v9, pipelineInstances->m_data, 8, v10 & 0x3FFFFFFF);
    pipelineInstances->m_data = NULL;
    pipelineInstances->m_capacityAndFlags = 0x80000000;
    v11 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v11 )
      v11 = hkMemoryRouter::s_fallbackRouter;
    v11->m_heap->blockFree(v11->m_heap, pipelineInstances, 16);
  }
  s_HavokPhysicsFXWorlds[v2].pipelineInstances = NULL;
}

/*
==============
HavokPhysicsFX_BasicIntegratorTask::process
==============
*/
void HavokPhysicsFX_BasicIntegratorTask::process(HavokPhysicsFX_BasicIntegratorTask *this, const hkTask::Input *input)
{
  const char *v3; 
  hknpStepInput *StepInput; 
  __int64 m_size; 
  __m128 m_deltaTime_low; 
  __m128 v7; 
  hkVector4f *m_data; 
  hkVector4f *v11; 
  hkVector4f *v12; 
  hkVector4f *v13; 
  hkVector4f *v14; 
  __m128 v17; 
  __m128 m_quad; 
  __m128 v21; 
  hkQuaternionf *v25; 
  hkQuaternionf *v28; 
  __int64 v29; 
  float v30; 
  hkVector4f gravity; 

  v3 = j_va("Step Pipeline %s with %i particles", this->m_pipelineInstance->m_asset->name, (unsigned int)this->m_pipelineInstance->m_positions.m_size);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v3);
  StepInput = HavokPhysics_GetStepInput((Physics_WorldId)*((_DWORD *)&this->__vftable + 2));
  if ( !StepInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1423, ASSERT_TYPE_ASSERT, "(stepInput)", (const char *)&queryFormat, "stepInput") )
    __debugbreak();
  m_size = this->m_pipelineInstance->m_positions.m_size;
  HavokPhysics_GetGravity(*((const Physics_WorldId *)&this->__vftable + 2), &gravity);
  v30 = gravity.m_quad.m128_f32[0];
  if ( (gravity.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v30 = gravity.m_quad.m128_f32[1], (gravity.m_quad.m128_i32[1] & 0x7F800000) == 2139095040) || (v30 = gravity.m_quad.m128_f32[2], (gravity.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) || (v30 = gravity.m_quad.m128_f32[3], (gravity.m_quad.m128_i32[3] & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1431, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gravity )(0) ) && !IS_NAN( ( gravity )(1) ) && !IS_NAN( ( gravity )(2) ) && !IS_NAN( ( gravity )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( gravity )(0) ) && !IS_NAN( ( gravity )(1) ) && !IS_NAN( ( gravity )(2) ) && !IS_NAN( ( gravity )(3) )", v30) )
      __debugbreak();
  }
  m_deltaTime_low = (__m128)LODWORD(StepInput->m_deltaTime);
  if ( (LODWORD(StepInput->m_deltaTime) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1435, ASSERT_TYPE_SANITY, "( !IS_NAN( deltaTime ) )", (const char *)&queryFormat, "!IS_NAN( deltaTime )") )
    __debugbreak();
  v7 = _mm_shuffle_ps(m_deltaTime_low, m_deltaTime_low, 0);
  _XMM9 = _mm128_mul_ps(v7, gravity.m_quad);
  *(float *)&v29 = _XMM9.m128_f32[0];
  if ( (_XMM9.m128_i32[0] & 0x7F800000) == 2139095040 )
    goto LABEL_79;
  __asm { vextractps [rbp+57h+var_A0], xmm9, 1 }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_79;
  __asm { vextractps [rbp+57h+var_A0], xmm9, 2 }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_79;
  __asm { vextractps [rbp+57h+var_A0], xmm9, 3 }
  if ( (v29 & 0x7F800000) == 2139095040 )
  {
LABEL_79:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1440, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gravityLinVelDelta )(0) ) && !IS_NAN( ( gravityLinVelDelta )(1) ) && !IS_NAN( ( gravityLinVelDelta )(2) ) && !IS_NAN( ( gravityLinVelDelta )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( gravityLinVelDelta )(0) ) && !IS_NAN( ( gravityLinVelDelta )(1) ) && !IS_NAN( ( gravityLinVelDelta )(2) ) && !IS_NAN( ( gravityLinVelDelta )(3) )", v29) )
      __debugbreak();
  }
  if ( m_size > 0 )
  {
    _RBX = 0i64;
    do
    {
      m_data = this->m_pipelineInstance->m_linearVelocities.m_data;
      if ( ((m_data[_RBX].m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (m_data[_RBX].m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (m_data[_RBX].m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (m_data[_RBX].m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1446, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) )") )
        __debugbreak();
      this->m_pipelineInstance->m_linearVelocities.m_data[_RBX].m_quad = _mm128_add_ps(_XMM9, this->m_pipelineInstance->m_linearVelocities.m_data[_RBX].m_quad);
      v11 = this->m_pipelineInstance->m_linearVelocities.m_data;
      if ( ((v11[_RBX].m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v11[_RBX].m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v11[_RBX].m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v11[_RBX].m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) )") )
        __debugbreak();
      v12 = this->m_pipelineInstance->m_positions.m_data;
      if ( ((v12[_RBX].m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v12[_RBX].m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v12[_RBX].m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v12[_RBX].m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1450, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) )") )
        __debugbreak();
      this->m_pipelineInstance->m_positions.m_data[_RBX].m_quad = _mm128_add_ps(_mm128_mul_ps(v7, this->m_pipelineInstance->m_linearVelocities.m_data[_RBX].m_quad), this->m_pipelineInstance->m_positions.m_data[_RBX].m_quad);
      v13 = this->m_pipelineInstance->m_positions.m_data;
      if ( ((v13[_RBX].m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v13[_RBX].m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v13[_RBX].m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v13[_RBX].m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1452, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) )") )
        __debugbreak();
      v14 = this->m_pipelineInstance->m_angularVelocities.m_data;
      if ( ((v14[_RBX].m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v14[_RBX].m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v14[_RBX].m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v14[_RBX].m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1454, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(3) )") )
        __debugbreak();
      _XMM0 = _mm128_mul_ps(v7, this->m_pipelineInstance->m_angularVelocities.m_data[_RBX].m_quad);
      __asm { vblendps xmm8, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+70h, 8; __m128 const near * const g_vectorfConstants }
      *(float *)&v29 = _XMM8.m128_f32[0];
      if ( (_XMM8.m128_i32[0] & 0x7F800000) == 2139095040 )
        goto LABEL_80;
      __asm { vextractps [rbp+57h+var_A0], xmm8, 1 }
      if ( (v29 & 0x7F800000) == 2139095040 )
        goto LABEL_80;
      __asm { vextractps [rbp+57h+var_A0], xmm8, 2 }
      if ( (v29 & 0x7F800000) == 2139095040 )
        goto LABEL_80;
      __asm { vextractps [rbp+57h+var_A0], xmm8, 3 }
      if ( (v29 & 0x7F800000) == 2139095040 )
      {
LABEL_80:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1456, ASSERT_TYPE_SANITY, "( !IS_NAN( ( q.m_vec )(0) ) && !IS_NAN( ( q.m_vec )(1) ) && !IS_NAN( ( q.m_vec )(2) ) && !IS_NAN( ( q.m_vec )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( q.m_vec )(0) ) && !IS_NAN( ( q.m_vec )(1) ) && !IS_NAN( ( q.m_vec )(2) ) && !IS_NAN( ( q.m_vec )(3) )", v29) )
          __debugbreak();
      }
      v17 = _mm_shuffle_ps(_XMM8, _XMM8, 255);
      _RCX = this->m_pipelineInstance->m_orientations.m_data;
      m_quad = _RCX[_RBX].m_vec.m_quad;
      __asm { vbroadcastss xmm5, dword ptr [rbx+rcx+0Ch] }
      v21 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(m_quad, m_quad, 201), _XMM8), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), m_quad));
      __asm { vdpps   xmm0, xmm8, xmm7, 7Fh }
      _mm128_sub_ps(_mm128_mul_ps(_XMM5, v17), _XMM0);
      _XMM2 = _mm128_add_ps(_mm128_add_ps(_mm_shuffle_ps(v21, v21, 201), _mm128_mul_ps(m_quad, v17)), _mm128_mul_ps(_XMM5, _XMM8));
      __asm { vblendps xmm6, xmm2, xmm3, 8 }
      *(float *)&v29 = _XMM6.m128_f32[0];
      if ( (_XMM6.m128_i32[0] & 0x7F800000) == 2139095040 )
        goto LABEL_81;
      __asm { vextractps [rbp+57h+var_A0], xmm6, 1 }
      if ( (v29 & 0x7F800000) == 2139095040 )
        goto LABEL_81;
      __asm { vextractps [rbp+57h+var_A0], xmm6, 2 }
      if ( (v29 & 0x7F800000) == 2139095040 )
        goto LABEL_81;
      __asm { vextractps [rbp+57h+var_A0], xmm6, 3 }
      if ( (v29 & 0x7F800000) == 2139095040 )
      {
LABEL_81:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1459, ASSERT_TYPE_SANITY, "( !IS_NAN( ( r.m_vec )(0) ) && !IS_NAN( ( r.m_vec )(1) ) && !IS_NAN( ( r.m_vec )(2) ) && !IS_NAN( ( r.m_vec )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( r.m_vec )(0) ) && !IS_NAN( ( r.m_vec )(1) ) && !IS_NAN( ( r.m_vec )(2) ) && !IS_NAN( ( r.m_vec )(3) )", v29) )
          __debugbreak();
      }
      v25 = this->m_pipelineInstance->m_orientations.m_data;
      if ( ((v25[_RBX].m_vec.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v25[_RBX].m_vec.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v25[_RBX].m_vec.m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v25[_RBX].m_vec.m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1461, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) )") )
        __debugbreak();
      __asm
      {
        vdpps   xmm0, xmm6, xmm6, 0FFh
        vrsqrtps xmm4, xmm0
      }
      this->m_pipelineInstance->m_orientations.m_data[_RBX].m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM6);
      v28 = this->m_pipelineInstance->m_orientations.m_data;
      if ( ((v28[_RBX].m_vec.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v28[_RBX].m_vec.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v28[_RBX].m_vec.m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v28[_RBX].m_vec.m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1463, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) )") )
        __debugbreak();
      ++_RBX;
      --m_size;
    }
    while ( m_size );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokPhysicsFX_LinAngDampingIntegratorTask::process
==============
*/
void HavokPhysicsFX_LinAngDampingIntegratorTask::process(HavokPhysicsFX_LinAngDampingIntegratorTask *this, const hkTask::Input *input)
{
  const char *v3; 
  hknpStepInput *StepInput; 
  __int64 m_size; 
  __m128 m_deltaTime_low; 
  __m128 v7; 
  PhysicsFXPipeline *m_asset; 
  float angularDamping; 
  __int128 v12; 
  __int128 v15; 
  __m128 v18; 
  __m128 v19; 
  hkVector4f *m_data; 
  hkVector4f *v21; 
  hkVector4f *v22; 
  hkVector4f *v23; 
  hkVector4f *v24; 
  __m128 v27; 
  __m128 m_quad; 
  __m128 v31; 
  hkQuaternionf *v35; 
  hkQuaternionf *v38; 
  __int64 v39; 
  float v40; 
  hkVector4f gravity; 

  v3 = j_va("Step Pipeline %s with %i particles", this->m_pipelineInstance->m_asset->name, (unsigned int)this->m_pipelineInstance->m_positions.m_size);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v3);
  StepInput = HavokPhysics_GetStepInput(this->m_worldId);
  if ( !StepInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1477, ASSERT_TYPE_ASSERT, "(stepInput)", (const char *)&queryFormat, "stepInput") )
    __debugbreak();
  m_size = this->m_pipelineInstance->m_positions.m_size;
  HavokPhysics_GetGravity((const Physics_WorldId)this->m_worldId, &gravity);
  v40 = gravity.m_quad.m128_f32[0];
  if ( (gravity.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v40 = gravity.m_quad.m128_f32[1], (gravity.m_quad.m128_i32[1] & 0x7F800000) == 2139095040) || (v40 = gravity.m_quad.m128_f32[2], (gravity.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) || (v40 = gravity.m_quad.m128_f32[3], (gravity.m_quad.m128_i32[3] & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1485, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gravity )(0) ) && !IS_NAN( ( gravity )(1) ) && !IS_NAN( ( gravity )(2) ) && !IS_NAN( ( gravity )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( gravity )(0) ) && !IS_NAN( ( gravity )(1) ) && !IS_NAN( ( gravity )(2) ) && !IS_NAN( ( gravity )(3) )", v40) )
      __debugbreak();
  }
  m_deltaTime_low = (__m128)LODWORD(StepInput->m_deltaTime);
  if ( (LODWORD(StepInput->m_deltaTime) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1489, ASSERT_TYPE_SANITY, "( !IS_NAN( deltaTime ) )", (const char *)&queryFormat, "!IS_NAN( deltaTime )") )
    __debugbreak();
  v7 = _mm_shuffle_ps(m_deltaTime_low, m_deltaTime_low, 0);
  _XMM9 = _mm128_mul_ps(v7, gravity.m_quad);
  *(float *)&v39 = _XMM9.m128_f32[0];
  if ( (_XMM9.m128_i32[0] & 0x7F800000) == 2139095040 )
    goto LABEL_91;
  __asm { vextractps [rbp+57h+var_C0], xmm9, 1 }
  if ( (v39 & 0x7F800000) == 2139095040 )
    goto LABEL_91;
  __asm { vextractps [rbp+57h+var_C0], xmm9, 2 }
  if ( (v39 & 0x7F800000) == 2139095040 )
    goto LABEL_91;
  __asm { vextractps [rbp+57h+var_C0], xmm9, 3 }
  if ( (v39 & 0x7F800000) == 2139095040 )
  {
LABEL_91:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1494, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gravityLinVelDelta )(0) ) && !IS_NAN( ( gravityLinVelDelta )(1) ) && !IS_NAN( ( gravityLinVelDelta )(2) ) && !IS_NAN( ( gravityLinVelDelta )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( gravityLinVelDelta )(0) ) && !IS_NAN( ( gravityLinVelDelta )(1) ) && !IS_NAN( ( gravityLinVelDelta )(2) ) && !IS_NAN( ( gravityLinVelDelta )(3) )", v39) )
      __debugbreak();
  }
  m_asset = this->m_pipelineInstance->m_asset;
  angularDamping = m_asset->integrator.u.linVelDampingIntegrator.angularDamping;
  v12 = LODWORD(FLOAT_1_0);
  *(float *)&v12 = 1.0 - (float)(m_deltaTime_low.m128_f32[0] * m_asset->integrator.u.linVelDampingIntegrator.linearDamping);
  _XMM1 = v12;
  __asm { vmaxss  xmm8, xmm1, xmm2 }
  v15 = LODWORD(FLOAT_1_0);
  *(float *)&v15 = 1.0 - (float)(angularDamping * m_deltaTime_low.m128_f32[0]);
  _XMM1 = v15;
  __asm { vmaxss  xmm6, xmm1, xmm2 }
  if ( (LODWORD(m_asset->integrator.u.linVelDampingIntegrator.linearDamping) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1501, ASSERT_TYPE_SANITY, "( !IS_NAN( linearDamping ) )", (const char *)&queryFormat, "!IS_NAN( linearDamping )") )
    __debugbreak();
  *(float *)&v39 = angularDamping;
  if ( (LODWORD(angularDamping) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1502, ASSERT_TYPE_SANITY, "( !IS_NAN( angularDamping ) )", (const char *)&queryFormat, "!IS_NAN( angularDamping )", v39) )
    __debugbreak();
  *(float *)&v39 = _XMM8.m128_f32[0];
  if ( (_XMM8.m128_i32[0] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1503, ASSERT_TYPE_SANITY, "( !IS_NAN( linearDampingScalar ) )", (const char *)&queryFormat, "!IS_NAN( linearDampingScalar )", v39) )
    __debugbreak();
  *(float *)&v39 = _XMM6.m128_f32[0];
  if ( (_XMM6.m128_i32[0] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1504, ASSERT_TYPE_SANITY, "( !IS_NAN( angularDampingScalar ) )", (const char *)&queryFormat, "!IS_NAN( angularDampingScalar )", v39) )
    __debugbreak();
  if ( m_size > 0 )
  {
    _RBX = 0i64;
    v18 = _mm_shuffle_ps(_XMM6, _XMM6, 0);
    v19 = _mm_shuffle_ps(_XMM8, _XMM8, 0);
    do
    {
      m_data = this->m_pipelineInstance->m_linearVelocities.m_data;
      if ( ((m_data[_RBX].m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (m_data[_RBX].m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (m_data[_RBX].m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (m_data[_RBX].m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1510, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) )") )
        __debugbreak();
      this->m_pipelineInstance->m_linearVelocities.m_data[_RBX].m_quad = _mm128_add_ps(_XMM9, this->m_pipelineInstance->m_linearVelocities.m_data[_RBX].m_quad);
      this->m_pipelineInstance->m_linearVelocities.m_data[_RBX].m_quad = _mm128_mul_ps(v19, this->m_pipelineInstance->m_linearVelocities.m_data[_RBX].m_quad);
      v21 = this->m_pipelineInstance->m_linearVelocities.m_data;
      if ( ((v21[_RBX].m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v21[_RBX].m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v21[_RBX].m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v21[_RBX].m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1513, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) )") )
        __debugbreak();
      v22 = this->m_pipelineInstance->m_positions.m_data;
      if ( ((v22[_RBX].m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v22[_RBX].m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v22[_RBX].m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v22[_RBX].m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1515, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) )") )
        __debugbreak();
      this->m_pipelineInstance->m_positions.m_data[_RBX].m_quad = _mm128_add_ps(_mm128_mul_ps(v7, this->m_pipelineInstance->m_linearVelocities.m_data[_RBX].m_quad), this->m_pipelineInstance->m_positions.m_data[_RBX].m_quad);
      v23 = this->m_pipelineInstance->m_positions.m_data;
      if ( ((v23[_RBX].m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v23[_RBX].m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v23[_RBX].m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v23[_RBX].m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1517, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) )") )
        __debugbreak();
      v24 = this->m_pipelineInstance->m_angularVelocities.m_data;
      if ( ((v24[_RBX].m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v24[_RBX].m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v24[_RBX].m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v24[_RBX].m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1519, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(3) )") )
        __debugbreak();
      this->m_pipelineInstance->m_angularVelocities.m_data[_RBX].m_quad = _mm128_mul_ps(v18, this->m_pipelineInstance->m_angularVelocities.m_data[_RBX].m_quad);
      _XMM0 = _mm128_mul_ps(v7, this->m_pipelineInstance->m_angularVelocities.m_data[_RBX].m_quad);
      __asm { vblendps xmm8, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+70h, 8; __m128 const near * const g_vectorfConstants }
      *(float *)&v39 = _XMM8.m128_f32[0];
      if ( (_XMM8.m128_i32[0] & 0x7F800000) == 2139095040 )
        goto LABEL_92;
      __asm { vextractps [rbp+57h+var_C0], xmm8, 1 }
      if ( (v39 & 0x7F800000) == 2139095040 )
        goto LABEL_92;
      __asm { vextractps [rbp+57h+var_C0], xmm8, 2 }
      if ( (v39 & 0x7F800000) == 2139095040 )
        goto LABEL_92;
      __asm { vextractps [rbp+57h+var_C0], xmm8, 3 }
      if ( (v39 & 0x7F800000) == 2139095040 )
      {
LABEL_92:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1522, ASSERT_TYPE_SANITY, "( !IS_NAN( ( q.m_vec )(0) ) && !IS_NAN( ( q.m_vec )(1) ) && !IS_NAN( ( q.m_vec )(2) ) && !IS_NAN( ( q.m_vec )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( q.m_vec )(0) ) && !IS_NAN( ( q.m_vec )(1) ) && !IS_NAN( ( q.m_vec )(2) ) && !IS_NAN( ( q.m_vec )(3) )", v39) )
          __debugbreak();
      }
      v27 = _mm_shuffle_ps(_XMM8, _XMM8, 255);
      _RCX = this->m_pipelineInstance->m_orientations.m_data;
      m_quad = _RCX[_RBX].m_vec.m_quad;
      __asm { vbroadcastss xmm5, dword ptr [rbx+rcx+0Ch] }
      v31 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(m_quad, m_quad, 201), _XMM8), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), m_quad));
      __asm { vdpps   xmm0, xmm8, xmm7, 7Fh }
      _mm128_sub_ps(_mm128_mul_ps(_XMM5, v27), _XMM0);
      _XMM2 = _mm128_add_ps(_mm128_add_ps(_mm_shuffle_ps(v31, v31, 201), _mm128_mul_ps(m_quad, v27)), _mm128_mul_ps(_XMM5, _XMM8));
      __asm { vblendps xmm6, xmm2, xmm3, 8 }
      *(float *)&v39 = _XMM6.m128_f32[0];
      if ( (_XMM6.m128_i32[0] & 0x7F800000) == 2139095040 )
        goto LABEL_93;
      __asm { vextractps [rbp+57h+var_C0], xmm6, 1 }
      if ( (v39 & 0x7F800000) == 2139095040 )
        goto LABEL_93;
      __asm { vextractps [rbp+57h+var_C0], xmm6, 2 }
      if ( (v39 & 0x7F800000) == 2139095040 )
        goto LABEL_93;
      __asm { vextractps [rbp+57h+var_C0], xmm6, 3 }
      if ( (v39 & 0x7F800000) == 2139095040 )
      {
LABEL_93:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1525, ASSERT_TYPE_SANITY, "( !IS_NAN( ( r.m_vec )(0) ) && !IS_NAN( ( r.m_vec )(1) ) && !IS_NAN( ( r.m_vec )(2) ) && !IS_NAN( ( r.m_vec )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( r.m_vec )(0) ) && !IS_NAN( ( r.m_vec )(1) ) && !IS_NAN( ( r.m_vec )(2) ) && !IS_NAN( ( r.m_vec )(3) )", v39) )
          __debugbreak();
      }
      v35 = this->m_pipelineInstance->m_orientations.m_data;
      if ( ((v35[_RBX].m_vec.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v35[_RBX].m_vec.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v35[_RBX].m_vec.m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v35[_RBX].m_vec.m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1527, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) )") )
        __debugbreak();
      __asm
      {
        vdpps   xmm0, xmm6, xmm6, 0FFh
        vrsqrtps xmm4, xmm0
      }
      this->m_pipelineInstance->m_orientations.m_data[_RBX].m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM6);
      v38 = this->m_pipelineInstance->m_orientations.m_data;
      if ( ((v38[_RBX].m_vec.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v38[_RBX].m_vec.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (v38[_RBX].m_vec.m_quad.m128_i32[2] & 0x7F800000) == 2139095040 || (v38[_RBX].m_vec.m_quad.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1529, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) )") )
        __debugbreak();
      ++_RBX;
      --m_size;
    }
    while ( m_size );
  }
  Sys_ProfEndNamedEvent();
}

