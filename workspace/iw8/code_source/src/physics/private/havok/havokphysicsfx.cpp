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
  hkMemoryAllocator *v6; 
  int v7; 
  unsigned int *v8; 
  int v9; 
  int numParticlesPerInstance; 
  hkMemoryAllocator *v11; 
  int v12; 
  int v13; 
  int v14; 
  int m_remainingParticles; 
  hkMemoryAllocator *v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  hkMemoryAllocator *v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  hkMemoryAllocator *v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  hkMemoryAllocator *v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  hkMemoryAllocator *v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  hkMemoryAllocator *v41; 
  hkArray<Particle_OnImpactData,hkContainerHeapAllocator> *p_m_impactData; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  __int64 v48; 
  PhysicsFXPipelineIntegratorType type; 
  hkMemoryRouter *Value; 
  _QWORD *v57; 
  _QWORD *v58; 
  hkMemoryRouter *v59; 
  _QWORD *v60; 
  int v61; 
  int numInOut; 
  int v65; 

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
  v65 = (unsigned __int64)&this->m_impactRegistered >> 32;
  this->m_impactRegistered.m_storage.m_words.m_data = NULL;
  this->m_impactRegistered.m_storage.m_words.m_size = 0;
  this->m_impactRegistered.m_storage.m_words.m_capacityAndFlags = 0x80000000;
  numInOut = 0;
  v6 = hkMemHeapAllocator();
  v7 = numInOut;
  v61 = numInOut;
  if ( numInOut )
  {
    v8 = (unsigned int *)hkMemoryAllocator::bufAlloc2(v6, 4, &numInOut);
    v7 = numInOut;
  }
  else
  {
    v8 = NULL;
  }
  v9 = 0x80000000;
  if ( v7 )
    v9 = v7;
  p_m_impactRegistered->m_storage.m_words.m_data = v8;
  this->m_impactRegistered.m_storage.m_words.m_size = v61;
  this->m_impactRegistered.m_storage.m_words.m_capacityAndFlags = v9;
  this->m_impactRegistered.m_storage.m_numBits = 0;
  this->m_impactData.m_data = NULL;
  this->m_impactData.m_size = 0;
  this->m_impactData.m_capacityAndFlags = 0x80000000;
  this->m_worldId = worldId;
  this->m_ignoreBodies = HavokPhysics_AllocateIgnoreBodies(0, 0);
  this->m_asset = asset;
  numParticlesPerInstance = asset->numParticlesPerInstance;
  this->m_remainingParticles = numParticlesPerInstance;
  v11 = hkMemHeapAllocator();
  v12 = this->m_positions.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v12 < numParticlesPerInstance )
  {
    v13 = 2 * v12;
    if ( (unsigned int)v13 >= 0x3FFFFFFF )
      v13 = 1073741822;
    v14 = numParticlesPerInstance;
    if ( numParticlesPerInstance < v13 )
      v14 = v13;
    hkArrayUtil::_reserve(v11, &this->m_positions, v14, 16);
  }
  this->m_positions.m_size = numParticlesPerInstance;
  m_remainingParticles = this->m_remainingParticles;
  v16 = hkMemHeapAllocator();
  v17 = this->m_linearVelocities.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v17 < m_remainingParticles )
  {
    v18 = 2 * v17;
    if ( (unsigned int)v18 >= 0x3FFFFFFF )
      v18 = 1073741822;
    v19 = m_remainingParticles;
    if ( m_remainingParticles < v18 )
      v19 = v18;
    hkArrayUtil::_reserve(v16, &this->m_linearVelocities, v19, 16);
  }
  this->m_linearVelocities.m_size = m_remainingParticles;
  v20 = this->m_remainingParticles;
  v21 = hkMemHeapAllocator();
  v22 = this->m_orientations.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v22 < v20 )
  {
    v23 = 2 * v22;
    if ( (unsigned int)v23 >= 0x3FFFFFFF )
      v23 = 1073741822;
    v24 = v20;
    if ( v20 < v23 )
      v24 = v23;
    hkArrayUtil::_reserve(v21, &this->m_orientations, v24, 16);
  }
  this->m_orientations.m_size = v20;
  v25 = this->m_remainingParticles;
  v26 = hkMemHeapAllocator();
  v27 = this->m_angularVelocities.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v27 < v25 )
  {
    v28 = 2 * v27;
    if ( (unsigned int)v28 >= 0x3FFFFFFF )
      v28 = 1073741822;
    v29 = v25;
    if ( v25 < v28 )
      v29 = v28;
    hkArrayUtil::_reserve(v26, &this->m_angularVelocities, v29, 16);
  }
  this->m_angularVelocities.m_size = v25;
  v30 = this->m_remainingParticles;
  v31 = hkMemHeapAllocator();
  v32 = this->m_scales.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v32 < v30 )
  {
    v33 = 2 * v32;
    if ( (unsigned int)v33 >= 0x3FFFFFFF )
      v33 = 1073741822;
    v34 = v30;
    if ( v30 < v33 )
      v34 = v33;
    hkArrayUtil::_reserve(v31, &this->m_scales, v34, 4);
  }
  this->m_scales.m_size = v30;
  v35 = this->m_remainingParticles;
  v36 = hkMemHeapAllocator();
  v37 = this->m_shapeIndices.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v37 < v35 )
  {
    v38 = 2 * v37;
    if ( (unsigned int)v38 >= 0x3FFFFFFF )
      v38 = 1073741822;
    v39 = v35;
    if ( v35 < v38 )
      v39 = v38;
    hkArrayUtil::_reserve(v36, &this->m_shapeIndices, v39, 4);
  }
  this->m_shapeIndices.m_size = v35;
  hkBitFieldBase<hkBitFieldStorage<hkArray<unsigned int,hkContainerHeapAllocator>>>::setSizeAndFill(&this->m_impactRegistered, 0, this->m_remainingParticles, 0);
  v40 = this->m_remainingParticles;
  v41 = hkMemHeapAllocator();
  p_m_impactData = &this->m_impactData;
  v43 = this->m_impactData.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v43 < v40 )
  {
    v44 = 2 * v43;
    if ( (unsigned int)v44 >= 0x3FFFFFFF )
      v44 = 1073741822;
    v45 = v40;
    if ( v40 < v44 )
      v45 = v44;
    hkArrayUtil::_reserve(v41, &this->m_impactData, v45, 80);
    p_m_impactData = &this->m_impactData;
  }
  p_m_impactData->m_size = v40;
  v46 = 0;
  if ( this->m_remainingParticles > 0 )
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
    v48 = 0i64;
    _RCX = 0i64;
    do
    {
      _RAX = this->m_positions.m_data;
      __asm { vmovups xmmword ptr [rcx+rax], xmm1 }
      _RAX = this->m_linearVelocities.m_data;
      __asm { vmovups xmmword ptr [rcx+rax], xmm1 }
      _RAX = this->m_orientations.m_data;
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
        vmovups xmmword ptr [rcx+rax], xmm0
      }
      _RAX = this->m_angularVelocities.m_data;
      __asm { vmovups xmmword ptr [rcx+rax], xmm1 }
      this->m_scales.m_data[v48] = 0.0;
      this->m_shapeIndices.m_data[v48] = 0;
      ++v46;
      _RCX += 16i64;
      ++v48;
    }
    while ( v46 < this->m_remainingParticles );
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
    v57 = Value->m_heap->blockAlloc(Value->m_heap, 48i64);
    v58 = v57;
    if ( v57 )
    {
      v57[1] = 0i64;
      v57[2] = 0i64;
      v57[3] = 0i64;
      v57[4] = 0i64;
      v57[5] = 0i64;
      *v57 = &HavokPhysicsFX_LinAngDampingIntegratorTask::`vftable';
      *((_DWORD *)v57 + 8) = this->m_worldId;
      v57[5] = this;
    }
    else
    {
      v58 = NULL;
      MEMORY[0x20] = this->m_worldId;
      MEMORY[0x28] = this;
    }
  }
  else
  {
    v59 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v59 )
      v59 = hkMemoryRouter::s_fallbackRouter;
    v60 = v59->m_heap->blockAlloc(v59->m_heap, 32i64);
    v58 = v60;
    if ( v60 )
    {
      v60[1] = 0i64;
      v60[2] = 0i64;
      v60[3] = 0i64;
      *v60 = &HavokPhysicsFX_BasicIntegratorTask::`vftable';
    }
    else
    {
      v58 = NULL;
    }
    *((_DWORD *)v58 + 2) = this->m_worldId;
    v58[2] = this;
  }
  this->m_stepTask = (hkTask *)v58;
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
  hkMemoryRouter *v24; 
  hknpParticleShapeLibrary *v25; 
  hknpParticleShapeLibrary *m_shapeLibrary; 
  int v27; 
  hknpParticlesColliderId *v29; 
  unsigned int m_serialAndIndex; 
  hknpParticlesCollider *v31; 
  PhysicsFXShape *v32; 
  hknpConvexShape *FXHKShape; 
  int v34; 
  hkMemoryAllocator *v35; 
  int v36; 
  __int64 v37; 
  hknpEventSignal *EventSignal; 
  signed __int32 v40[8]; 
  char *fmt; 
  __int64 v42; 
  __int64 v43; 
  hknpParticlesColliderCinfo v44; 
  __int64 v45; 
  char v46; 
  void *v47; 
  PhysicsFXShape *physicsFXShape; 

  physicsFXShape = shapeAsset;
  v45 = -2i64;
  _R14 = pipelineAsset;
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
  if ( numParticles > _R14->numParticlesPerInstance )
  {
    LODWORD(v42) = _R14->numParticlesPerInstance;
    LODWORD(fmt) = numParticles;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444BE830, 764i64, _R14->name, fmt, v42);
  }
  if ( HavokPhysicsFX_ReachedPipelineLimit((Physics_WorldId)v8) )
  {
    LODWORD(v42) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 424, ASSERT_TYPE_ASSERT, "( ( !HavokPhysicsFX_ReachedPipelineLimit( worldId ) ) )", "( worldId ) = %u", v42) )
      __debugbreak();
  }
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v11 = (HavokPhysicsFX_Pipeline *)Value->m_heap->blockAlloc(Value->m_heap, 272i64);
  v47 = v11;
  if ( v11 )
  {
    HavokPhysicsFX_Pipeline::HavokPhysicsFX_Pipeline(v11, (Physics_WorldId)v8, _R14);
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
    LODWORD(v43) = m_size;
    LODWORD(v42) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 438, ASSERT_TYPE_ASSERT, "(unsigned)( pipelineIdx ) < (unsigned)( numSupportedPipelines )", "pipelineIdx doesn't index numSupportedPipelines\n\t%i not in [0, %i)", v42, v43) )
      __debugbreak();
  }
  s_HavokPhysicsFXWorlds[v8].pipelineInstances->m_data[v16] = v13;
  ++s_HavokPhysicsFXWorlds[v8].numPipelineInstances;
  v13->m_ignoreBodies->m_ignoreLayers = 2;
  v13->m_collisionFilterUserData.ignoreBodies = v13->m_ignoreBodies;
  hknpParticlesColliderCinfo::hknpParticlesColliderCinfo(&v44);
  v18 = v13->m_positions.m_size;
  v44.m_positions.m_begin = v13->m_positions.m_data->m_quad.m128_f32;
  v44.m_positions.m_numElements = v18;
  v44.m_positions.m_stride = 16;
  v19 = v13->m_linearVelocities.m_size;
  v44.m_linearVelocities.m_begin = v13->m_linearVelocities.m_data->m_quad.m128_f32;
  v44.m_linearVelocities.m_numElements = v19;
  v44.m_linearVelocities.m_stride = 16;
  v20 = v13->m_orientations.m_size;
  v44.m_orientations.m_begin = v13->m_orientations.m_data->m_vec.m_quad.m128_f32;
  v44.m_orientations.m_numElements = v20;
  v44.m_orientations.m_stride = 16;
  v21 = v13->m_angularVelocities.m_size;
  v44.m_angularVelocities.m_begin = v13->m_angularVelocities.m_data->m_quad.m128_f32;
  v44.m_angularVelocities.m_numElements = v21;
  v44.m_angularVelocities.m_stride = 16;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+0Ch]
    vmovss  [rbp+50h+var_100.m_friction], xmm0
    vmovss  xmm1, dword ptr [r14+10h]
    vmovss  [rbp+50h+var_100.m_restitution], xmm1
  }
  v24 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v24 )
    v24 = hkMemoryRouter::s_fallbackRouter;
  v25 = (hknpParticleShapeLibrary *)v24->m_heap->blockAlloc(v24->m_heap, 48i64);
  v47 = v25;
  if ( v25 )
    hknpParticleShapeLibrary::hknpParticleShapeLibrary(v25);
  v44.m_shapeLibrary = v25;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 457, ASSERT_TYPE_ASSERT, "(colliderCinfo.m_shapeLibrary)", (const char *)&queryFormat, "colliderCinfo.m_shapeLibrary") )
    __debugbreak();
  m_shapeLibrary = v44.m_shapeLibrary;
  _InterlockedOr(v40, 0);
  LOWORD(m_shapeLibrary) = m_shapeLibrary->m_refCount;
  _InterlockedOr(v40, 0);
  if ( (_WORD)m_shapeLibrary != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 458, ASSERT_TYPE_ASSERT, "(colliderCinfo.m_shapeLibrary->getReferenceCount() == 1)", (const char *)&queryFormat, "colliderCinfo.m_shapeLibrary->getReferenceCount() == 1") )
    __debugbreak();
  v27 = v13->m_shapeIndices.m_size;
  v44.m_shapeIndices.m_begin = v13->m_shapeIndices.m_data;
  v44.m_shapeIndices.m_numElements = v27;
  v44.m_shapeIndices.m_stride = 4;
  v44.m_collisionFilterData.m_collisionFilterInfo = 256;
  v44.m_collisionFilterData.m_userData = (unsigned __int64)&v13->m_collisionFilterUserData;
  *(_DWORD *)v44.m_rigidBodyCollisionLod = 1;
  v44.m_enableDynamicBodyCollisions = 1;
  v44.m_enableParticleParticleCollisions = _R14->particleParticleCollisions;
  *(_DWORD *)&v44.m_enableDeterministicParticleParticleCollisions = 0;
  v44.m_raiseParticlesCollidedWithParticlesEvents = 0;
  v44.m_raiseParticleBodyImpulseAppliedEvents = _R14->raiseCollisionCallbacks;
  *(_WORD *)&v44.m_raiseParticleParticleImpulseAppliedEvents = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+18h]
    vmovss  [rbp+50h+var_100.m_callbackImpulseThreshold], xmm0
  }
  v44.m_maxBatchSize = 100;
  v44.m_supportDisabledParticles = 1;
  v44.m_userData = Physics_MakeRef(Physics_RefSystem_LightweightParticles, Physics_RelationshipSystem_None, 0, v16);
  v29 = World->allocateParticlesCollider(&World->hknpWorldWriter, (hknpParticlesColliderId *)&v46, &v44);
  m_serialAndIndex = v29->m_serialAndIndex;
  v13->m_colliderId = (hknpParticlesColliderId)v29->m_serialAndIndex;
  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 486, ASSERT_TYPE_ASSERT, "(pipeline->m_colliderId.isValid())", (const char *)&queryFormat, "pipeline->m_colliderId.isValid()") )
    __debugbreak();
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD))World->addParticlesCollider)(&World->hknpWorldWriter, v13->m_colliderId.m_serialAndIndex);
  hkReferencedObject::removeReference(v44.m_shapeLibrary);
  v31 = hknpWorld::accessParticlesCollider(World, v13->m_colliderId);
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 493, ASSERT_TYPE_ASSERT, "( collider ) != ( nullptr )", "%s != %s\n\t%p, %p", "collider", "nullptr", NULL, NULL) )
    __debugbreak();
  HavokPhysics_SetRigidBodyUserData((Physics_WorldId)v8, v31->m_worldBodyId, v44.m_userData);
  HavokPhysicsFX_LockAssetRead();
  v32 = physicsFXShape;
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
  v34 = hknpParticleShapeLibrary::addShape(v44.m_shapeLibrary, FXHKShape);
  *shapeIndex = v34;
  if ( v34 != v13->m_shapes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 507, ASSERT_TYPE_ASSERT, "(*shapeIndex == pipeline->m_shapes.getSize())", (const char *)&queryFormat, "*shapeIndex == pipeline->m_shapes.getSize()") )
    __debugbreak();
  v35 = hkMemHeapAllocator();
  v36 = v13->m_shapes.m_size;
  if ( v36 == (v13->m_shapes.m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v35, &v13->m_shapes, 16);
    v36 = v13->m_shapes.m_size;
  }
  v37 = (__int64)&v13->m_shapes.m_data[v36];
  v13->m_shapes.m_size = v36 + 1;
  *(_QWORD *)v37 = v32;
  *(_DWORD *)(v37 + 8) = 0;
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
  __int64 v19; 
  __int64 v20; 

  v5 = particleId;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1005, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1006, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (unsigned int)v5 >= pipelineInstance->m_impactRegistered.m_storage.m_numBits )
  {
    LODWORD(v19) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1007, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_impactRegistered.getSize() )", "particleId doesn't index pipelineInstance->m_impactRegistered.getSize()\n\t%i not in [0, %i)", v19, pipelineInstance->m_impactRegistered.m_storage.m_numBits) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= pipelineInstance->m_impactData.m_size )
  {
    LODWORD(v20) = pipelineInstance->m_impactData.m_size;
    LODWORD(v19) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_impactData.getSize() )", "particleId doesn't index pipelineInstance->m_impactData.getSize()\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  v9 = v5 >> 5;
  v10 = v5;
  v11 = v5 & 0x1F;
  v12 = v9;
  _RCX = 10 * v10;
  *impact = (pipelineInstance->m_impactRegistered.m_storage.m_words.m_data[v9] >> v11) & 1;
  _RAX = pipelineInstance->m_impactData.m_data;
  _RDX = data;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rcx*8]
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm1, ymmword ptr [rax+rcx*8+20h]
    vmovups ymmword ptr [rdx+20h], ymm1
    vmovups xmm0, xmmword ptr [rax+rcx*8+40h]
    vmovups xmmword ptr [rdx+40h], xmm0
  }
  pipelineInstance->m_impactRegistered.m_storage.m_words.m_data[v12] &= ~(1 << v11);
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
  __int64 v12; 
  __int64 v17; 
  __int64 v18; 

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
    _RBP = 0i64;
    do
    {
      v12 = particleIds[v10];
      if ( (unsigned int)v12 >= pipelineInstance->m_linearVelocities.m_size )
      {
        LODWORD(v18) = pipelineInstance->m_linearVelocities.m_size;
        LODWORD(v17) = particleIds[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1104, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_linearVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_linearVelocities.getSize()\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      _RAX = pipelineInstance->m_linearVelocities.m_data;
      _RCX = velocities->m_data;
      _RDX = 2 * v12;
      ++v10;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax+rdx*8]
        vmovups xmmword ptr [rcx+rbp], xmm0
      }
      _RBP += 16i64;
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
  __int64 v17; 

  _RBP = velocity;
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
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1084, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_linearVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_linearVelocities.getSize()\n\t%i not in [0, %i)", v17, pipelineInstance->m_linearVelocities.m_size) )
      __debugbreak();
  }
  _RAX = pipelineInstance->m_linearVelocities.m_data;
  _RCX = 2 * v5;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+rcx*8]
    vmovups xmmword ptr [rbp+0], xmm0
  }
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
  __int64 v8; 
  __int64 v12; 
  __int64 v14; 
  float *v18; 
  __int64 v19; 
  unsigned int m_size; 
  bool v21; 
  bool v22; 
  hkQuaternionf *m_data; 
  __int64 v40; 
  __int64 v41; 

  v8 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1128, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1129, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v8 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1130, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (int)v8 > pipelineInstance->m_orientations.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1131, ASSERT_TYPE_ASSERT, "(numParticles <= pipelineInstance->m_orientations.getSize())", (const char *)&queryFormat, "numParticles <= pipelineInstance->m_orientations.getSize()") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1132, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !orientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1133, ASSERT_TYPE_ASSERT, "(orientations)", (const char *)&queryFormat, "orientations") )
    __debugbreak();
  v12 = v8;
  if ( (int)v8 > 0 )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+98h+var_48], xmm7
    }
    v14 = 0i64;
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    _RSI = &orientations->v[2];
    __asm
    {
      vmovaps [rsp+98h+var_58], xmm8
      vmovss  xmm8, cs:__real@3b03126f
    }
    v18 = &orientations->v[2];
    do
    {
      v19 = particleIds[v14];
      m_size = pipelineInstance->m_orientations.m_size;
      v21 = (unsigned int)v19 < m_size;
      if ( (unsigned int)v19 >= m_size )
      {
        LODWORD(v41) = pipelineInstance->m_orientations.m_size;
        LODWORD(v40) = particleIds[v14];
        v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1139, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_orientations.getSize() )", "particleId doesn't index pipelineInstance->m_orientations.getSize()\n\t%i not in [0, %i)", v40, v41);
        v21 = 0;
        if ( v22 )
          __debugbreak();
      }
      m_data = pipelineInstance->m_orientations.m_data;
      *(v18 - 2) = m_data[v19].m_vec.m_quad.m128_f32[0];
      *(v18 - 1) = m_data[v19].m_vec.m_quad.m128_f32[1];
      *v18 = m_data[v19].m_vec.m_quad.m128_f32[2];
      v18[1] = m_data[v19].m_vec.m_quad.m128_f32[3];
      __asm
      {
        vmovss  xmm0, dword ptr [rsi-8]
        vmovss  xmm2, dword ptr [rsi-4]
        vmovss  xmm3, dword ptr [rsi]
        vmovss  xmm4, dword ptr [rsi+4]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsubss  xmm1, xmm2, xmm7
        vandps  xmm1, xmm1, xmm6
        vcomiss xmm1, xmm8
      }
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1144, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( orientations[inputParticleIdx] ))", (const char *)&queryFormat, "Vec4IsNormalized( orientations[inputParticleIdx] )") )
        __debugbreak();
      ++v14;
      v18 += 4;
      _RSI += 4;
    }
    while ( v14 < v12 );
    __asm
    {
      vmovaps xmm8, [rsp+98h+var_58]
      vmovaps xmm7, [rsp+98h+var_48]
      vmovaps xmm6, [rsp+98h+var_38]
    }
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
  __int64 v17; 

  _RBP = position;
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
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1021, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_positions.getSize() )", "particleId doesn't index pipelineInstance->m_positions.getSize()\n\t%i not in [0, %i)", v17, pipelineInstance->m_positions.m_size) )
      __debugbreak();
  }
  _RAX = pipelineInstance->m_positions.m_data;
  _RCX = 2 * v5;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+rcx*8]
    vmovups xmmword ptr [rbp+0], xmm0
  }
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
  __int64 v12; 
  __int64 v17; 
  __int64 v18; 

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
    _RBP = 0i64;
    do
    {
      v12 = particleIds[v10];
      if ( (unsigned int)v12 >= pipelineInstance->m_positions.m_size )
      {
        LODWORD(v18) = pipelineInstance->m_positions.m_size;
        LODWORD(v17) = particleIds[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1041, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_positions.getSize() )", "particleId doesn't index pipelineInstance->m_positions.getSize()\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      _RAX = pipelineInstance->m_positions.m_data;
      _RCX = positions->m_data;
      _RDX = 2 * v12;
      ++v10;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax+rdx*8]
        vmovups xmmword ptr [rcx+rbp], xmm0
      }
      _RBP += 16i64;
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
  unsigned __int16 v12; 
  __int64 v13; 
  unsigned __int64 m_userData; 
  const hknpShape **p_m_shape; 
  __int64 m_size; 
  unsigned int v17; 
  __int16 v18; 
  int v19; 
  unsigned __int64 val; 
  __int64 v21; 
  hknpInplaceTriangleShape v22; 
  hknpShapeCollector v23; 
  unsigned int m_value; 

  m_value = shapeKey.m_value;
  v21 = -2i64;
  v3 = &world->hknpWorldReader;
  v4 = ((__int64 (__fastcall *)(hknpWorldReader *, __int64))world->getBody)(&world->hknpWorldReader, bodyId);
  v5 = v4;
  if ( m_value == -1 )
    return truncate_cast<unsigned int,unsigned __int64>(*(unsigned int *)(*(_QWORD *)(v4 + 96) + 40i64));
  __asm { vmovss  xmm1, cs:__real@3c75c28f; radius }
  hknpInplaceTriangleShape::hknpInplaceTriangleShape(&v22, *(float *)&_XMM1);
  v23.m_internal.m_shapeBuffer.m_shape = NULL;
  v23.m_internal.m_shapeBuffer.m_buffer = v23.m_internal.m_shapeBuffer.m_storage;
  v23.m_internal.m_shapeBuffer.m_bufferSize = 2048;
  v23.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpInplaceShapeBuffer<2048>::`vftable';
  v23.m_internal.m_shape = NULL;
  v23.m_parentShape = NULL;
  v23.m_shapeTagPath.m_size = 0;
  *(_QWORD *)&v23.m_internal.m_flags.m_storage = 13i64;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rbp+0CF0h+var_C80.m_transform.m_rotation.baseclass_0.m_col0.m_quad], ymm0
    vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rbp+0CF0h+var_C80.m_transform.m_rotation.baseclass_0.m_col2.m_quad], ymm0
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbp+0CF0h+var_C80.m_internal.m_scale.m_quad], xmm0
  }
  v23.m_internal.m_shapeTags[0] = -1;
  (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, hknpShapeCollector *))(**(_QWORD **)(v5 + 96) + 176i64))(*(_QWORD *)(v5 + 96), &m_value, 1i64, &v23);
  if ( (v23.m_internal.m_flags.m_storage & 0x10) != 0 )
    TriangleShape = hknpShapeCollector::getTriangleShape(&v23, 0, (hknpTriangleShape *)&v22);
  else
    TriangleShape = (const hknpTriangleShape *)v23.m_internal.m_shape;
  v12 = v23.m_internal.m_shapeTags[0];
  v18 = -1;
  v19 = 0;
  val = 0i64;
  v13 = (__int64)v3->getShapeTagCodec(v3);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD, unsigned int, const hknpTriangleShape *, __int16 *))(*(_QWORD *)v13 + 32i64))(v13, v12, 0i64, v5, *(_QWORD *)(v5 + 96), *(_QWORD *)(v5 + 96), m_value, TriangleShape, &v18);
  LODWORD(m_userData) = val;
  if ( !val )
  {
    m_userData = TriangleShape->m_userData;
    if ( v23.m_shapeTagPath.m_size > 0 )
    {
      p_m_shape = &v23.m_shapeTagPath.m_data[0].m_shape;
      m_size = (unsigned int)v23.m_shapeTagPath.m_size;
      do
      {
        m_userData |= (*p_m_shape)->m_userData;
        p_m_shape += 4;
        --m_size;
      }
      while ( m_size );
    }
  }
  v17 = truncate_cast<unsigned int,unsigned __int64>((unsigned int)m_userData);
  v23.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpShapeBuffer::`vftable';
  if ( v23.m_internal.m_shapeBuffer.m_shape )
    ((void (__fastcall *)(hknpShape *, _QWORD))v23.m_internal.m_shapeBuffer.m_shape->~hkBaseObject)(v23.m_internal.m_shapeBuffer.m_shape, 0i64);
  return v17;
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
  const dvar_t *v12; 
  hknpWorld *m_world; 
  Physics_WorldId WorldId; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  __int64 RefId; 
  HavokPhysicsFX_Pipeline *v21; 
  unsigned int SurfFlags; 
  const char *soundAlias; 
  int v35; 
  hkArray<HavokPhysicsFX_QueuedSound,hkContainerHeapAllocator> *sounds; 
  hkMemoryAllocator *v50; 
  int m_size; 
  int Ref; 
  __int64 v82; 
  __int64 v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  __int128 v98; 
  __int128 v99; 
  __int128 v100; 

  v12 = DVARBOOL_physicsFX_enableCallbacks;
  _RDI = event;
  if ( !DVARBOOL_physicsFX_enableCallbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_enableCallbacks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    m_world = input->m_world;
    __asm
    {
      vmovaps [rsp+158h+var_48], xmm6
      vmovaps [rsp+158h+var_58], xmm7
      vmovaps [rsp+158h+var_68], xmm8
      vmovaps [rsp+158h+var_78], xmm9
      vmovaps [rsp+158h+var_98], xmm11
      vmovaps [rsp+158h+var_A8], xmm12
      vmovaps [rsp+158h+var_B8], xmm13
      vmovaps [rsp+158h+var_C8], xmm14
      vmovaps [rsp+158h+var_D8], xmm15
    }
    WorldId = HavokPhysics_GetWorldId(m_world);
    v17 = WorldId;
    if ( WorldId == PHYSICS_WORLD_ID_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 335, ASSERT_TYPE_ASSERT, "(worldId != PHYSICS_WORLD_ID_INVALID)", (const char *)&queryFormat, "worldId != PHYSICS_WORLD_ID_INVALID") )
      __debugbreak();
    v18 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))m_world->getParticlesCollider)(&m_world->hknpWorldReader, *(unsigned int *)&_RDI[2].m_secondaryType);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 342, ASSERT_TYPE_ASSERT, "(collider)", (const char *)&queryFormat, "collider") )
      __debugbreak();
    v19 = (unsigned int)*(_QWORD *)(v18 + 176);
    if ( v19 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v19, "unsigned", v19) )
      __debugbreak();
    if ( Physics_GetRefSystem(v19) != Physics_RefSystem_LightweightParticles )
    {
      LODWORD(v83) = 12;
      LODWORD(v82) = Physics_GetRefSystem(v19);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 346, ASSERT_TYPE_ASSERT, "( Physics_GetRefSystem( ref ) ) == ( Physics_RefSystem_LightweightParticles )", "%s == %s\n\t%i, %i", "Physics_GetRefSystem( ref )", "Physics_RefSystem_LightweightParticles", v82, v83) )
        __debugbreak();
    }
    RefId = Physics_GetRefId(v19);
    if ( !s_HavokPhysicsFXWorlds[v17].pipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 348, ASSERT_TYPE_ASSERT, "( fxWorld->pipelineInstances ) != ( nullptr )", "%s != %s\n\t%p, %p", "fxWorld->pipelineInstances", "nullptr", NULL, NULL) )
      __debugbreak();
    v21 = s_HavokPhysicsFXWorlds[v17].pipelineInstances->m_data[RefId];
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 350, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
      __debugbreak();
    v96 = *(_DWORD *)&_RDI[3].m_filterBits;
    _RBX = v21->m_shapes.m_data[v21->m_shapeIndices.m_data[v96]].asset;
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 358, ASSERT_TYPE_ASSERT, "(shapeAsset)", (const char *)&queryFormat, "shapeAsset") )
      __debugbreak();
    __asm
    {
      vmovss  xmm6, cs:__real@42000000
      vmulss  xmm9, xmm6, dword ptr [rdi+20h]
      vmulss  xmm7, xmm6, dword ptr [rdi+24h]
      vmulss  xmm8, xmm6, dword ptr [rdi+28h]
      vmovss  [rsp+158h+var_108], xmm9
    }
    if ( (v84 & 0x7F800000) == 2139095040 )
      goto LABEL_60;
    __asm { vmovss  [rsp+158h+var_108], xmm7 }
    if ( (v85 & 0x7F800000) == 2139095040 )
      goto LABEL_60;
    __asm { vmovss  [rsp+158h+var_108], xmm8 }
    if ( (v86 & 0x7F800000) == 2139095040 )
    {
LABEL_60:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 364, ASSERT_TYPE_SANITY, "( !IS_NAN( ( position )[0] ) && !IS_NAN( ( position )[1] ) && !IS_NAN( ( position )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( position )[0] ) && !IS_NAN( ( position )[1] ) && !IS_NAN( ( position )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm2, xmm6, dword ptr [rdi+30h]
      vmulss  xmm14, xmm6, dword ptr [rdi+34h]
      vmulss  xmm15, xmm6, dword ptr [rdi+38h]
      vmovss  [rsp+158h+var_108], xmm2
      vmovss  [rsp+158h+var_100], xmm2
    }
    if ( (v87 & 0x7F800000) == 2139095040 )
      goto LABEL_61;
    __asm { vmovss  [rsp+158h+var_108], xmm14 }
    if ( (v88 & 0x7F800000) == 2139095040 )
      goto LABEL_61;
    __asm { vmovss  [rsp+158h+var_108], xmm15 }
    if ( (v89 & 0x7F800000) == 2139095040 )
    {
LABEL_61:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 370, ASSERT_TYPE_SANITY, "( !IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm13, xmm6, dword ptr [rax]
      vmulss  xmm11, xmm6, dword ptr [rax+4]
      vmulss  xmm12, xmm6, dword ptr [rax+8]
      vmovss  [rsp+158h+var_108], xmm13
    }
    if ( (v90 & 0x7F800000) == 2139095040 )
      goto LABEL_62;
    __asm { vmovss  [rsp+158h+var_108], xmm11 }
    if ( (v91 & 0x7F800000) == 2139095040 )
      goto LABEL_62;
    __asm { vmovss  [rsp+158h+var_108], xmm12 }
    if ( (v92 & 0x7F800000) == 2139095040 )
    {
LABEL_62:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 376, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] )") )
        __debugbreak();
    }
    SurfFlags = HavokPhysicsFX_GetSurfFlags(m_world, *(unsigned int *)&_RDI[11].m_filterBits, *(const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *)&_RDI[12].m_sizePaddedTo16);
    soundAlias = _RBX->soundAlias;
    v35 = SurfFlags;
    if ( soundAlias && *soundAlias )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+40h]
        vmovss  xmm1, dword ptr [rbx+24h]
        vsubss  xmm2, xmm1, dword ptr [rbx+20h]
        vsubss  xmm3, xmm0, dword ptr [rbx+20h]
        vmovss  xmm6, cs:__real@3f800000
        vdivss  xmm0, xmm3, xmm2; val
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps [rsp+158h+var_88], xmm10
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm10, dword ptr [rdi+40h]
        vsubss  xmm1, xmm6, xmm0
        vmulss  xmm2, xmm1, dword ptr [rbx+28h]
        vmulss  xmm0, xmm0, dword ptr [rbx+2Ch]
      }
      *(_QWORD *)&v98 = _RBX->soundAlias;
      __asm { vaddss  xmm6, xmm2, xmm0 }
      if ( (unsigned int)(v17 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
        __debugbreak();
      if ( !s_HavokPhysicsFXWorlds[v17].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 261, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
        __debugbreak();
      __asm { vmovss  [rsp+158h+var_108], xmm9 }
      if ( (v93 & 0x7F800000) == 2139095040 )
        goto LABEL_63;
      __asm { vmovss  [rsp+158h+var_108], xmm7 }
      if ( (v94 & 0x7F800000) == 2139095040 )
        goto LABEL_63;
      __asm { vmovss  [rsp+158h+var_108], xmm8 }
      if ( (v95 & 0x7F800000) == 2139095040 )
      {
LABEL_63:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 263, ASSERT_TYPE_SANITY, "( !IS_NAN( ( position )[0] ) && !IS_NAN( ( position )[1] ) && !IS_NAN( ( position )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( position )[0] ) && !IS_NAN( ( position )[1] ) && !IS_NAN( ( position )[2] )") )
          __debugbreak();
      }
      sounds = s_HavokPhysicsFXWorlds[v17].sounds;
      v50 = hkMemHeapAllocator();
      m_size = sounds->m_size;
      if ( m_size == (sounds->m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v50, sounds, 40);
        m_size = sounds->m_size;
      }
      _RDX = sounds->m_data;
      _R8 = m_size;
      sounds->m_size = m_size + 1;
      __asm
      {
        vmovss  dword ptr [rdx+r8*8], xmm9
        vmovss  dword ptr [rdx+r8*8+4], xmm7
        vmovss  dword ptr [rdx+r8*8+8], xmm8
        vmovss  dword ptr [rdx+r8*8+18h], xmm10
        vmovaps xmm10, [rsp+158h+var_88]
      }
      _RDX[_R8].soundAlias = (const char *)v98;
      __asm { vmovss  dword ptr [rdx+r8*8+1Ch], xmm6 }
      _RDX[_R8].surfFlags = v35;
    }
    _RBX = v96;
    __asm { vmovss  xmm1, [rsp+158h+var_100] }
    v21->m_impactRegistered.m_storage.m_words.m_data[(__int64)v96 >> 5] |= 1 << (v96 & 0x1F);
    HIDWORD(v98) = 0;
    __asm { vmovups xmm0, [rsp+158h+var_F8] }
    _RAX = v21->m_impactData.m_data;
    __asm
    {
      vmovss  xmm0, xmm0, xmm9
      vinsertps xmm0, xmm0, xmm7, 10h
      vinsertps xmm0, xmm0, xmm8, 20h ; ' '
      vmovups xmmword ptr [rax+rbx*8], xmm0
      vmovups [rsp+158h+var_F8], xmm0
    }
    HIDWORD(v99) = 0;
    _RAX = v21->m_impactData.m_data;
    __asm
    {
      vmovups xmm0, [rsp+158h+var_F8]
      vmovss  xmm0, xmm0, xmm1
      vinsertps xmm0, xmm0, xmm14, 10h
      vinsertps xmm0, xmm0, xmm15, 20h ; ' '
      vmovups xmmword ptr [rax+rbx*8+10h], xmm0
      vmovups [rsp+158h+var_F8], xmm0
    }
    HIDWORD(v100) = 0;
    _RAX = v21->m_impactData.m_data;
    __asm
    {
      vmovups xmm0, [rsp+158h+var_F8]
      vmovss  xmm0, xmm0, xmm13
      vinsertps xmm0, xmm0, xmm11, 10h
      vinsertps xmm0, xmm0, xmm12, 20h ; ' '
      vmovups xmmword ptr [rax+rbx*8+20h], xmm0
    }
    v21->m_impactData.m_data[_RBX].surfaceFlags = v35;
    Ref = HavokPhysics_GetRef((Physics_WorldId)v17, *(hknpBodyId *)&_RDI[11].m_filterBits);
    __asm
    {
      vmovaps xmm15, [rsp+158h+var_D8]
      vmovaps xmm14, [rsp+158h+var_C8]
      vmovaps xmm13, [rsp+158h+var_B8]
      vmovaps xmm12, [rsp+158h+var_A8]
      vmovaps xmm11, [rsp+158h+var_98]
      vmovaps xmm9, [rsp+158h+var_78]
      vmovaps xmm8, [rsp+158h+var_68]
      vmovaps xmm7, [rsp+158h+var_58]
      vmovaps xmm6, [rsp+158h+var_48]
    }
    v21->m_impactData.m_data[_RBX].entNum = Physics_GetEntityNum(Ref);
    v21->m_impactData.m_data[_RBX].hitType = TRACE_HITTYPE_BEGIN;
    v21->m_impactData.m_data[_RBX].partName = 0;
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
  __int128 v12; 

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
  *((_QWORD *)&v12 + 1) = &particleIds[v4];
  *(_QWORD *)&v12 = particleIds;
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovdqa [rsp+48h+var_18], xmm0
  }
  ((void (__fastcall *)(hknpWorldWriter *, __int64, __int128 *))v9->rebuildParticleCollisionCaches)(&World->hknpWorldWriter, m_serialAndIndex, &v12);
}

/*
==============
HavokPhysicsFX_PlaySounds
==============
*/
void HavokPhysicsFX_PlaySounds(LocalClientNum_t localClientNum, Physics_WorldId worldId)
{
  __int64 v4; 
  __int64 v6; 
  hkArray<HavokPhysicsFX_QueuedSound,hkContainerHeapAllocator> *sounds; 
  const HavokPhysicsFX_QueuedSound *org; 
  unsigned int surfFlags; 
  unsigned __int64 SndEntHandle; 
  float fmt; 

  v4 = worldId;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  v6 = v4;
  if ( !s_HavokPhysicsFXWorlds[v4].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1356, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  sounds = s_HavokPhysicsFXWorlds[v4].sounds;
  org = sounds->m_data;
  if ( sounds->m_data != &sounds->m_data[sounds->m_size] )
  {
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vmovaps [rsp+78h+var_38], xmm7
      vmovss  xmm7, cs:__real@3f800000
    }
    do
    {
      surfFlags = org->surfFlags;
      __asm { vmovss  xmm6, dword ptr [rdi+1Ch] }
      SndEntHandle = CG_GenerateSndEntHandle(localClientNum, 2046);
      __asm
      {
        vmovaps xmm3, xmm6; volumeScale
        vmovss  dword ptr [rsp+78h+fmt], xmm7
      }
      SND_PlaySurfaceSoundAsync(org->soundAlias, (surfFlags >> 19) & 0x3F, SndEntHandle, *(float *)&_XMM3, fmt, 0, &org->position);
      HavokPhysicsFX_Debug_RegisterSoundEvent(org);
      sounds = s_HavokPhysicsFXWorlds[v6].sounds;
      ++org;
    }
    while ( org != &sounds->m_data[sounds->m_size] );
    __asm
    {
      vmovaps xmm7, [rsp+78h+var_38]
      vmovaps xmm6, [rsp+78h+var_28]
    }
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
  __int64 v6; 
  __int64 v10; 
  float *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v19; 
  __int64 v20; 

  v6 = numParticles;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 970, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 971, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 972, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( (int)v6 > pipelineInstance->m_angularVelocities.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 973, ASSERT_TYPE_ASSERT, "(numParticles <= pipelineInstance->m_angularVelocities.getSize())", (const char *)&queryFormat, "numParticles <= pipelineInstance->m_angularVelocities.getSize()") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 974, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !velocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 975, ASSERT_TYPE_ASSERT, "(velocities)", (const char *)&queryFormat, "velocities") )
    __debugbreak();
  v10 = v6;
  if ( (int)v6 > 0 )
  {
    v11 = &velocities->v[2];
    v12 = 0i64;
    do
    {
      v13 = particleIds[v12];
      if ( (unsigned int)v13 >= pipelineInstance->m_linearVelocities.m_size )
      {
        LODWORD(v20) = pipelineInstance->m_linearVelocities.m_size;
        LODWORD(v19) = particleIds[v12];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 980, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_linearVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_linearVelocities.getSize()\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      _RAX = pipelineInstance->m_angularVelocities.m_data;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vinsertps xmm0, xmm0, dword ptr [rbx-8], 0
        vinsertps xmm0, xmm0, dword ptr [rbx-4], 10h
        vinsertps xmm0, xmm0, dword ptr [rbx], 20h ; ' '
      }
      _RCX = 2 * v13;
      v11 += 3;
      ++v12;
      __asm { vmovups xmmword ptr [rax+rcx*8], xmm0 }
    }
    while ( v12 < v10 );
  }
}

/*
==============
HavokPhysicsFX_SetParticleAngularVelocity
==============
*/
void HavokPhysicsFX_SetParticleAngularVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec3_t *velocity)
{
  __int64 v5; 
  __int64 v14; 

  v5 = particleId;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 959, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 960, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (unsigned int)v5 >= pipelineInstance->m_angularVelocities.m_size )
  {
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 961, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_angularVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_angularVelocities.getSize()\n\t%i not in [0, %i)", v14, pipelineInstance->m_angularVelocities.m_size) )
      __debugbreak();
  }
  _RAX = pipelineInstance->m_angularVelocities.m_data;
  _RCX = 2 * v5;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, dword ptr [rdi], 0
    vinsertps xmm0, xmm0, dword ptr [rdi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rdi+8], 20h ; ' '
    vmovups xmmword ptr [rax+rcx*8], xmm0
  }
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
  __int64 v12; 
  __int64 v17; 
  __int64 v18; 

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
    _RBP = 0i64;
    do
    {
      v12 = particleIds[v10];
      if ( (unsigned int)v12 >= pipelineInstance->m_linearVelocities.m_size )
      {
        LODWORD(v18) = pipelineInstance->m_linearVelocities.m_size;
        LODWORD(v17) = particleIds[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 919, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_linearVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_linearVelocities.getSize()\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      _RCX = velocities->m_data;
      _RAX = pipelineInstance->m_linearVelocities.m_data;
      _RDX = 2 * v12;
      ++v10;
      __asm { vmovups xmm0, xmmword ptr [rcx+rbp] }
      _RBP += 16i64;
      __asm { vmovups xmmword ptr [rax+rdx*8], xmm0 }
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
  __int64 v17; 

  _RBP = velocity;
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
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 901, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_linearVelocities.getSize() )", "particleId doesn't index pipelineInstance->m_linearVelocities.getSize()\n\t%i not in [0, %i)", v17, pipelineInstance->m_linearVelocities.m_size) )
      __debugbreak();
  }
  _RAX = pipelineInstance->m_linearVelocities.m_data;
  __asm { vmovups xmm0, xmmword ptr [rbp+0] }
  _RCX = 2 * v5;
  __asm { vmovups xmmword ptr [rax+rcx*8], xmm0 }
}

/*
==============
HavokPhysicsFX_SetParticleOrientation
==============
*/
void HavokPhysicsFX_SetParticleOrientation(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec4_t *orientation)
{
  __int64 v4; 
  unsigned int m_size; 
  bool v9; 
  bool v10; 
  __int64 v30; 

  v4 = particleId;
  _RBX = orientation;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 928, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 929, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  m_size = pipelineInstance->m_orientations.m_size;
  v9 = (unsigned int)v4 < m_size;
  if ( (unsigned int)v4 >= m_size )
  {
    LODWORD(v30) = v4;
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 930, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_orientations.getSize() )", "particleId doesn't index pipelineInstance->m_orientations.getSize()\n\t%i not in [0, %i)", v30, pipelineInstance->m_orientations.m_size);
    v9 = 0;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, cs:__real@3f800000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 931, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( orientation ))", (const char *)&queryFormat, "Vec4IsNormalized( orientation )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
  }
  _RAX = pipelineInstance->m_orientations.m_data;
  __asm { vinsertps xmm0, xmm0, dword ptr [rbx+0Ch], 30h ; '0' }
  _RCX = 2 * v4;
  __asm { vmovups xmmword ptr [rax+rcx*8], xmm0 }
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
  __int64 v11; 
  __int64 v12; 
  __int64 v19; 
  __int64 v20; 

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
    _RBX = &orientations->v[2];
    v11 = 0i64;
    do
    {
      v12 = particleIds[v11];
      if ( (unsigned int)v12 >= pipelineInstance->m_orientations.m_size )
      {
        LODWORD(v20) = pipelineInstance->m_orientations.m_size;
        LODWORD(v19) = particleIds[v11];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 950, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_orientations.getSize() )", "particleId doesn't index pipelineInstance->m_orientations.getSize()\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-8]
        vinsertps xmm0, xmm0, dword ptr [rbx-4], 10h
        vinsertps xmm0, xmm0, dword ptr [rbx], 20h ; ' '
        vinsertps xmm0, xmm0, dword ptr [rbx+4], 30h ; '0'
      }
      _RAX = pipelineInstance->m_orientations.m_data;
      _RCX = 2 * v12;
      _RBX += 4;
      ++v11;
      __asm { vmovups xmmword ptr [rax+rcx*8], xmm0 }
    }
    while ( v11 < v9 );
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
  __int64 v17; 

  _RBP = position;
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
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 746, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_positions.getSize() )", "particleId doesn't index pipelineInstance->m_positions.getSize()\n\t%i not in [0, %i)", v17, pipelineInstance->m_positions.m_size) )
      __debugbreak();
  }
  _RAX = pipelineInstance->m_positions.m_data;
  __asm { vmovups xmm0, xmmword ptr [rbp+0] }
  _RCX = 2 * v5;
  __asm { vmovups xmmword ptr [rax+rcx*8], xmm0 }
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
  __int64 v12; 
  __int64 v17; 
  __int64 v18; 

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
    _RBP = 0i64;
    do
    {
      v12 = particleIds[v10];
      if ( (unsigned int)v12 >= pipelineInstance->m_positions.m_size )
      {
        LODWORD(v18) = pipelineInstance->m_positions.m_size;
        LODWORD(v17) = particleIds[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 764, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( pipelineInstance->m_positions.getSize() )", "particleId doesn't index pipelineInstance->m_positions.getSize()\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      _RCX = positions->m_data;
      _RAX = pipelineInstance->m_positions.m_data;
      _RDX = 2 * v12;
      ++v10;
      __asm { vmovups xmm0, xmmword ptr [rcx+rbp] }
      _RBP += 16i64;
      __asm { vmovups xmmword ptr [rax+rdx*8], xmm0 }
    }
    while ( v10 < v9 );
  }
}

/*
==============
HavokPhysicsFX_SetParticleScale
==============
*/

void __fastcall HavokPhysicsFX_SetParticleScale(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, double scale)
{
  __int64 v7; 
  int v10; 
  hknpWorld *World; 
  PhysicsFXShape *asset; 
  unsigned int NumScaledShapes; 
  hkArray<float,hkContainerHeapAllocator> *ShapeScales; 
  bool v16; 
  bool v17; 
  int v19; 
  unsigned int v20; 
  bool v22; 
  bool v23; 
  unsigned int v25; 
  bool v55; 
  bool v56; 
  __int64 m_size; 
  HavokPhysicsFX_ScaledShapeAsset *m_data; 
  __int64 i; 
  const hknpConvexShape *FXHKShape; 
  hknpParticlesCollider *v70; 
  hkMemoryAllocator *v71; 
  int v72; 
  HavokPhysicsFX_ScaledShapeAsset *v73; 
  __int64 v75; 
  __int64 v77; 
  int v78; 

  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  v7 = particleId;
  __asm { vmovaps xmm6, xmm3 }
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 773, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 774, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  v10 = 0;
  if ( (int)v7 < 0 || (int)v7 > pipelineInstance->m_asset->numParticlesPerInstance )
  {
    LODWORD(v75) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 775, ASSERT_TYPE_ASSERT, "( 0 ) <= ( particleId ) && ( particleId ) <= ( pipelineInstance->m_asset->numParticlesPerInstance )", "particleId not in [0, pipelineInstance->m_asset->numParticlesPerInstance]\n\t%i not in [%i, %i]", v75, 0i64, pipelineInstance->m_asset->numParticlesPerInstance) )
      __debugbreak();
  }
  __asm { vmovss  [rsp+88h+arg_10], xmm6 }
  if ( (v78 & 0x7F800000) != 2139095040 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 776, ASSERT_TYPE_ASSERT, "(!IS_NAN( scale ) && scale > 0.f)", (const char *)&queryFormat, "!IS_NAN( scale ) && scale > 0.f") )
    __debugbreak();
  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 780, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  HavokPhysicsFX_LockAssetRead();
  v77 = v7;
  asset = pipelineInstance->m_shapes.m_data[pipelineInstance->m_shapeIndices.m_data[v7]].asset;
  NumScaledShapes = HavokPhysicsFX_GetNumScaledShapes(asset);
  ShapeScales = HavokPhysicsFX_GetShapeScales(asset);
  if ( !NumScaledShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 793, ASSERT_TYPE_ASSERT, "(numScaledShapesInAsset > 0)", (const char *)&queryFormat, "numScaledShapesInAsset > 0") )
    __debugbreak();
  v16 = ShapeScales->m_size == NumScaledShapes;
  if ( ShapeScales->m_size != NumScaledShapes )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 794, ASSERT_TYPE_ASSERT, "(assetShapeScales->getSize() == (int)numScaledShapesInAsset)", (const char *)&queryFormat, "assetShapeScales->getSize() == (int)numScaledShapesInAsset");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vucomiss xmm6, xmm3
  }
  v19 = 0;
  if ( !v16 )
  {
    v20 = 1;
    if ( NumScaledShapes > 1 )
    {
      __asm { vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      v22 = NumScaledShapes - 1 < 4;
      v23 = NumScaledShapes - 1 <= 4;
      if ( NumScaledShapes - 1 >= 4 )
      {
        _RDX = ShapeScales->m_data;
        v25 = NumScaledShapes - 3;
        do
        {
          _R8 = (int)v20;
          __asm
          {
            vmovss  xmm0, dword ptr [rdx+r8*4]
            vcomiss xmm0, xmm3
          }
          if ( !v23 )
          {
            __asm { vcomiss xmm6, xmm3 }
            if ( v22 )
              goto LABEL_35;
            __asm { vcomiss xmm0, xmm3 }
          }
          if ( !v22 )
            goto LABEL_34;
          __asm { vcomiss xmm6, xmm3 }
          if ( v23 )
          {
LABEL_34:
            __asm
            {
              vdivss  xmm0, xmm6, xmm0
              vsubss  xmm2, xmm0, xmm3
              vandps  xmm2, xmm2, xmm4
              vdivss  xmm0, xmm6, dword ptr [rdx+rax*4]
              vsubss  xmm1, xmm0, xmm3
              vandps  xmm1, xmm1, xmm4
              vcomiss xmm1, xmm2
            }
            if ( !v23 )
              v19 = v20;
          }
LABEL_35:
          __asm
          {
            vmovss  xmm0, dword ptr [rdx+r8*4+4]
            vcomiss xmm0, xmm3
          }
          if ( !v23 )
          {
            __asm { vcomiss xmm6, xmm3 }
            if ( v22 )
              goto LABEL_42;
            __asm { vcomiss xmm0, xmm3 }
          }
          if ( !v22 )
            goto LABEL_88;
          __asm { vcomiss xmm6, xmm3 }
          if ( v23 )
          {
LABEL_88:
            __asm
            {
              vdivss  xmm0, xmm6, xmm0
              vsubss  xmm2, xmm0, xmm3
              vandps  xmm2, xmm2, xmm4
              vdivss  xmm0, xmm6, dword ptr [rdx+rax*4]
              vsubss  xmm1, xmm0, xmm3
              vandps  xmm1, xmm1, xmm4
              vcomiss xmm2, xmm1
            }
            if ( v22 )
              v19 = v20 + 1;
          }
LABEL_42:
          __asm
          {
            vmovss  xmm0, dword ptr [rdx+r8*4+8]
            vcomiss xmm0, xmm3
          }
          if ( !v23 )
          {
            __asm { vcomiss xmm6, xmm3 }
            if ( v22 )
              goto LABEL_49;
            __asm { vcomiss xmm0, xmm3 }
          }
          if ( !v22 )
            goto LABEL_89;
          __asm { vcomiss xmm6, xmm3 }
          if ( v23 )
          {
LABEL_89:
            __asm
            {
              vdivss  xmm0, xmm6, xmm0
              vsubss  xmm2, xmm0, xmm3
              vandps  xmm2, xmm2, xmm4
              vdivss  xmm0, xmm6, dword ptr [rdx+rax*4]
              vsubss  xmm1, xmm0, xmm3
              vandps  xmm1, xmm1, xmm4
              vcomiss xmm2, xmm1
            }
            if ( v22 )
              v19 = v20 + 2;
          }
LABEL_49:
          __asm
          {
            vmovss  xmm0, dword ptr [rdx+r8*4+0Ch]
            vcomiss xmm0, xmm3
          }
          if ( v23 )
            goto LABEL_52;
          __asm { vcomiss xmm6, xmm3 }
          if ( !v22 )
          {
            __asm { vcomiss xmm0, xmm3 }
LABEL_52:
            if ( !v22 )
              goto LABEL_90;
            __asm { vcomiss xmm6, xmm3 }
            if ( v23 )
            {
LABEL_90:
              __asm
              {
                vdivss  xmm0, xmm6, xmm0
                vsubss  xmm2, xmm0, xmm3
                vandps  xmm2, xmm2, xmm4
                vdivss  xmm0, xmm6, dword ptr [rdx+rax*4]
                vsubss  xmm1, xmm0, xmm3
                vandps  xmm1, xmm1, xmm4
                vcomiss xmm2, xmm1
              }
              if ( v22 )
                v19 = v20 + 3;
            }
          }
          v20 += 4;
          v22 = v20 < v25;
          v23 = v20 <= v25;
        }
        while ( v20 < v25 );
      }
      v55 = v20 < NumScaledShapes;
      v56 = v20 <= NumScaledShapes;
      if ( v20 < NumScaledShapes )
      {
        _RDX = ShapeScales->m_data;
        while ( 1 )
        {
          _RAX = (int)v20;
          __asm
          {
            vmovss  xmm0, dword ptr [rdx+rax*4]
            vcomiss xmm0, xmm3
          }
          if ( v56 )
            goto LABEL_62;
          __asm { vcomiss xmm6, xmm3 }
          if ( !v55 )
            break;
LABEL_66:
          v55 = ++v20 < NumScaledShapes;
          v56 = v20 <= NumScaledShapes;
          if ( v20 >= NumScaledShapes )
            goto LABEL_67;
        }
        __asm { vcomiss xmm0, xmm3 }
LABEL_62:
        if ( !v55 )
          goto LABEL_65;
        __asm { vcomiss xmm6, xmm3 }
        if ( v56 )
        {
LABEL_65:
          __asm
          {
            vdivss  xmm0, xmm6, xmm0
            vsubss  xmm2, xmm0, xmm3
            vandps  xmm2, xmm2, xmm4
            vdivss  xmm0, xmm6, dword ptr [rdx+rax*4]
            vsubss  xmm1, xmm0, xmm3
            vandps  xmm1, xmm1, xmm4
            vcomiss xmm1, xmm2
          }
          if ( !v56 )
            v19 = v20;
        }
        goto LABEL_66;
      }
    }
  }
LABEL_67:
  m_size = pipelineInstance->m_shapes.m_size;
  if ( (int)m_size > 0 )
  {
    m_data = pipelineInstance->m_shapes.m_data;
    for ( i = 0i64; i < m_size; ++i )
    {
      if ( m_data->asset == asset && m_data->scaleShapeIndex == v19 )
        break;
      ++v10;
      ++m_data;
    }
  }
  if ( v10 == (_DWORD)m_size )
  {
    Sys_ProfBeginNamedEvent(0xFFFF00FF, "Particles: Create Scaled Shape");
    FXHKShape = HavokPhysicsFX_GetFXHKShape(asset, v19);
    if ( !FXHKShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 856, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    v70 = hknpWorld::accessParticlesCollider(World, pipelineInstance->m_colliderId);
    if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 860, ASSERT_TYPE_ASSERT, "(collider)", (const char *)&queryFormat, "collider") )
      __debugbreak();
    v10 = hknpParticleShapeLibrary::addShape(v70->m_particleShapeLibrary.m_ptr, FXHKShape);
    if ( v10 != pipelineInstance->m_shapes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 864, ASSERT_TYPE_ASSERT, "(shapeIdx == pipelineInstance->m_shapes.getSize())", (const char *)&queryFormat, "shapeIdx == pipelineInstance->m_shapes.getSize()") )
      __debugbreak();
    v71 = hkMemHeapAllocator();
    v72 = pipelineInstance->m_shapes.m_size;
    if ( v72 == (pipelineInstance->m_shapes.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v71, &pipelineInstance->m_shapes, 16);
      v72 = pipelineInstance->m_shapes.m_size;
    }
    v73 = &pipelineInstance->m_shapes.m_data[v72];
    pipelineInstance->m_shapes.m_size = v72 + 1;
    v73->asset = asset;
    v73->scaleShapeIndex = v19;
    Sys_ProfEndNamedEvent();
  }
  pipelineInstance->m_shapeIndices.m_data[v77] = v10;
  pipelineInstance->m_scales.m_data[v77] = ShapeScales->m_data[v19];
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
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

  v5 = numParticles;
  _RBX = particleIds;
  if ( !pipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 883, ASSERT_TYPE_ASSERT, "(pipelineInstance)", (const char *)&queryFormat, "pipelineInstance") )
    __debugbreak();
  if ( !HavokPhysicsFX_HasPipeline(worldId, pipelineInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 884, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_HasPipeline( worldId, pipelineInstance ))", "%s\n\tUnknown pipeline instance", "HavokPhysicsFX_HasPipeline( worldId, pipelineInstance )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 885, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 886, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !scales && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 887, ASSERT_TYPE_ASSERT, "(scales)", (const char *)&queryFormat, "scales") )
    __debugbreak();
  if ( v5 > 0 )
  {
    _RSI = (char *)((char *)scales - (char *)_RBX);
    do
    {
      __asm { vmovss  xmm3, dword ptr [rsi+rbx]; scale }
      HavokPhysicsFX_SetParticleScale(worldId, pipelineInstance, *_RBX++, *(float *)&_XMM3);
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
  __int64 v2; 
  hknpWorld *World; 
  HavokPhysicsThreadPool *ThreadPool; 
  hkDefaultTaskQueue *TaskQueue; 
  hknpTaskGraph *taskGraph; 
  const hknpStepInput *StepInput; 
  struct hkTaskQueue::_Handle *v8; 
  int v10; 
  int v11; 

  v2 = worldId;
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "Update the Colliders");
  if ( (unsigned int)(v2 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !s_HavokPhysicsFXWorlds[v2].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1268, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  World = HavokPhysics_GetWorld((Physics_WorldId)v2);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1272, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  ThreadPool = HavokPhysics_GetThreadPool();
  if ( !ThreadPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1276, ASSERT_TYPE_ASSERT, "(threadPool)", (const char *)&queryFormat, "threadPool") )
    __debugbreak();
  TaskQueue = HavokPhysics_GetTaskQueue((Physics_WorldId)v2);
  if ( !TaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1280, ASSERT_TYPE_ASSERT, "(taskQueue)", (const char *)&queryFormat, "taskQueue") )
    __debugbreak();
  taskGraph = s_HavokPhysicsFXWorlds[v2].taskGraph;
  if ( !taskGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1284, ASSERT_TYPE_ASSERT, "(taskGraph)", (const char *)&queryFormat, "taskGraph") )
    __debugbreak();
  StepInput = HavokPhysics_GetStepInput((Physics_WorldId)v2);
  if ( !StepInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1288, ASSERT_TYPE_ASSERT, "(stepInput)", (const char *)&queryFormat, "stepInput") )
    __debugbreak();
  hknpWorld::generateAllParticlesCollidersTasks(World, StepInput, taskGraph);
  v8 = hkTaskGraph::submitToTaskQueue(taskGraph, &TaskQueue->hkTaskQueue, FIFO);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+58h+arg_8], xmm0
    vmovss  [rsp+58h+arg_0], xmm0
  }
  TaskQueue->processUntilFinished(&TaskQueue->hkTaskQueue, (float *)&v11, (float *)&v10, v8);
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
  __int64 v2; 
  HavokPhysicsThreadPool *ThreadPool; 
  hkDefaultTaskQueue *TaskQueue; 
  hknpTaskGraph *taskGraph; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int v7; 
  HavokPhysicsFX_Pipeline **m_data; 
  int v9; 
  char *Value; 
  int *v11; 
  _QWORD *v12; 
  char *v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  ThreadContext CurrentThreadContext; 
  struct hkTaskQueue::_Handle *v17; 
  __int64 v19; 
  __int64 v20; 
  hkHandle<unsigned short,65535,hkTaskGraph::TaskIdDiscriminant> result; 
  int v22; 
  int v23; 

  v2 = worldId;
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "Step the Pipelines");
  if ( (unsigned int)(v2 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !s_HavokPhysicsFXWorlds[v2].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1191, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  ThreadPool = HavokPhysics_GetThreadPool();
  if ( !ThreadPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1195, ASSERT_TYPE_ASSERT, "(threadPool)", (const char *)&queryFormat, "threadPool") )
    __debugbreak();
  TaskQueue = HavokPhysics_GetTaskQueue((Physics_WorldId)v2);
  if ( !TaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1199, ASSERT_TYPE_ASSERT, "(taskQueue)", (const char *)&queryFormat, "taskQueue") )
    __debugbreak();
  taskGraph = s_HavokPhysicsFXWorlds[v2].taskGraph;
  if ( !taskGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1203, ASSERT_TYPE_ASSERT, "(taskGraph)", (const char *)&queryFormat, "taskGraph") )
    __debugbreak();
  pipelineInstances = s_HavokPhysicsFXWorlds[v2].pipelineInstances;
  v7 = 0;
  m_data = pipelineInstances->m_data;
  if ( pipelineInstances->m_data != &pipelineInstances->m_data[pipelineInstances->m_size] )
  {
    do
    {
      if ( *m_data )
      {
        hkTaskGraph::addTask(taskGraph, &result, (*m_data)->m_stepTask, (hkTask::Priority::Enum)64);
        ++v7;
      }
      ++m_data;
    }
    while ( m_data != &s_HavokPhysicsFXWorlds[v2].pipelineInstances->m_data[s_HavokPhysicsFXWorlds[v2].pipelineInstances->m_size] );
  }
  if ( v7 != s_HavokPhysicsFXWorlds[v2].numPipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1222, ASSERT_TYPE_ASSERT, "( numTasks ) == ( world->numPipelineInstances )", "%s == %s\n\t%i, %i", "numTasks", "world->numPipelineInstances", v7, s_HavokPhysicsFXWorlds[v2].numPipelineInstances) )
    __debugbreak();
  if ( HavokPhysics_IsWorldMultithreaded((Physics_WorldId)v2) && v7 > 1 && !Physics_RenderDebugEnabled() )
  {
    HavokPhysicsThreadPool::setUsage(ThreadPool, HAVOKPHYSICS_THREADPOOL_USAGE_FX);
    v9 = ThreadPool->getNumThreads(ThreadPool);
    if ( v7 - 1 < v9 )
      v9 = v7 - 1;
    Value = (char *)Sys_GetValue(0);
    v11 = (int *)(Value + 26536);
    if ( (unsigned int)(*((_DWORD *)Value + 6634) + 1) >= 3 )
    {
      LODWORD(v20) = 3;
      LODWORD(v19) = *((_DWORD *)Value + 6634) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( (unsigned int)++*v11 >= 3 )
    {
      LODWORD(v20) = 3;
      LODWORD(v19) = *v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    v12 = Value + 2088;
    v13 = Value + 40;
    if ( *v12 < (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v12 += 8i64;
    if ( *v12 >= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v12 = v11;
    if ( *v12 <= (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v14 = *v11;
    v15 = __rdtsc();
    v11[v14 + 2] = v15;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 611, NULL, 0);
    HavokPhysicsThreadPool::startWorkerCommands(ThreadPool, (Physics_WorldId)v2, v9);
    Profile_EndInternal(NULL);
  }
  v17 = hkTaskGraph::submitToTaskQueue(taskGraph, &TaskQueue->hkTaskQueue, FIFO);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+88h+arg_10], xmm0
    vmovss  [rsp+88h+arg_8], xmm0
  }
  TaskQueue->processUntilFinished(&TaskQueue->hkTaskQueue, (float *)&v23, (float *)&v22, v17);
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
  __int64 v2; 

  v2 = worldId;
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1323, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)(v2 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 239, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !s_HavokPhysicsFXWorlds[v2].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1327, ASSERT_TYPE_ASSERT, "(world->isInitialized)", (const char *)&queryFormat, "world->isInitialized") )
    __debugbreak();
  _RDI = HavokPhysics_GetStepInput((Physics_WorldId)v2);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1331, ASSERT_TYPE_ASSERT, "(stepInput)", (const char *)&queryFormat, "stepInput") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rdi]
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
  const char *v9; 
  __int64 m_size; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  int v116; 
  int v117; 
  int v118; 
  int v119; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  int v130; 
  int v131; 
  int v132; 
  int v133; 
  int v134; 
  int v135; 
  int v136; 
  int v137; 
  int v138; 
  int v139; 
  int v140; 
  hkVector4f gravity; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  v9 = j_va("Step Pipeline %s with %i particles", this->m_pipelineInstance->m_asset->name, (unsigned int)this->m_pipelineInstance->m_positions.m_size);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v9);
  _RBX = HavokPhysics_GetStepInput((Physics_WorldId)*((_DWORD *)&this->__vftable + 2));
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1423, ASSERT_TYPE_ASSERT, "(stepInput)", (const char *)&queryFormat, "stepInput") )
    __debugbreak();
  m_size = this->m_pipelineInstance->m_positions.m_size;
  HavokPhysics_GetGravity(*((const Physics_WorldId *)&this->__vftable + 2), &gravity);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+gravity.m_quad]
    vmovss  [rbp+57h+var_A0], xmm0
  }
  if ( (v96 & 0x7F800000) == 2139095040 )
    goto LABEL_80;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+gravity.m_quad+4]
    vmovss  [rbp+57h+var_A0], xmm0
  }
  if ( (v97 & 0x7F800000) == 2139095040 )
    goto LABEL_80;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+gravity.m_quad+8]
    vmovss  [rbp+57h+var_A0], xmm0
  }
  if ( (v98 & 0x7F800000) == 2139095040 )
    goto LABEL_80;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+gravity.m_quad+0Ch]
    vmovss  [rbp+57h+var_A0], xmm0
  }
  if ( (v99 & 0x7F800000) == 2139095040 )
  {
LABEL_80:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1431, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gravity )(0) ) && !IS_NAN( ( gravity )(1) ) && !IS_NAN( ( gravity )(2) ) && !IS_NAN( ( gravity )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( gravity )(0) ) && !IS_NAN( ( gravity )(1) ) && !IS_NAN( ( gravity )(2) ) && !IS_NAN( ( gravity )(3) )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vmovss  [rbp+57h+var_A0], xmm6
  }
  if ( (v100 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1435, ASSERT_TYPE_SANITY, "( !IS_NAN( deltaTime ) )", (const char *)&queryFormat, "!IS_NAN( deltaTime )") )
    __debugbreak();
  __asm
  {
    vmovaps xmm10, xmm6
    vshufps xmm10, xmm10, xmm10, 0
    vmulps  xmm9, xmm10, xmmword ptr [rbp+57h+gravity.m_quad]
    vmovss  [rbp+57h+var_A0], xmm9
  }
  if ( (v101 & 0x7F800000) == 2139095040 )
    goto LABEL_81;
  __asm { vextractps [rbp+57h+var_A0], xmm9, 1 }
  if ( (v102 & 0x7F800000) == 2139095040 )
    goto LABEL_81;
  __asm { vextractps [rbp+57h+var_A0], xmm9, 2 }
  if ( (v103 & 0x7F800000) == 2139095040 )
    goto LABEL_81;
  __asm { vextractps [rbp+57h+var_A0], xmm9, 3 }
  if ( (v104 & 0x7F800000) == 2139095040 )
  {
LABEL_81:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1440, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gravityLinVelDelta )(0) ) && !IS_NAN( ( gravityLinVelDelta )(1) ) && !IS_NAN( ( gravityLinVelDelta )(2) ) && !IS_NAN( ( gravityLinVelDelta )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( gravityLinVelDelta )(0) ) && !IS_NAN( ( gravityLinVelDelta )(1) ) && !IS_NAN( ( gravityLinVelDelta )(2) ) && !IS_NAN( ( gravityLinVelDelta )(3) )") )
      __debugbreak();
  }
  if ( m_size > 0 )
  {
    _RBX = 0i64;
    __asm
    {
      vmovaps [rsp+0D0h+var_48+8], xmm7
      vmovaps [rsp+0D0h+var_58+8], xmm8
    }
    do
    {
      _RCX = this->m_pipelineInstance->m_linearVelocities.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v105 & 0x7F800000) == 2139095040 )
        goto LABEL_82;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v106 & 0x7F800000) == 2139095040 )
        goto LABEL_82;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v107 & 0x7F800000) == 2139095040 )
        goto LABEL_82;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v108 & 0x7F800000) == 2139095040 )
      {
LABEL_82:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1446, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_linearVelocities.m_data;
      __asm
      {
        vaddps  xmm0, xmm9, xmmword ptr [rbx+rcx]
        vmovups xmmword ptr [rbx+rcx], xmm0
      }
      _RCX = this->m_pipelineInstance->m_linearVelocities.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v109 & 0x7F800000) == 2139095040 )
        goto LABEL_83;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v110 & 0x7F800000) == 2139095040 )
        goto LABEL_83;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v111 & 0x7F800000) == 2139095040 )
        goto LABEL_83;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v112 & 0x7F800000) == 2139095040 )
      {
LABEL_83:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_positions.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v113 & 0x7F800000) == 2139095040 )
        goto LABEL_84;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v114 & 0x7F800000) == 2139095040 )
        goto LABEL_84;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v115 & 0x7F800000) == 2139095040 )
        goto LABEL_84;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v116 & 0x7F800000) == 2139095040 )
      {
LABEL_84:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1450, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_positions.m_data;
      __asm
      {
        vmulps  xmm0, xmm10, xmmword ptr [rax+rbx]
        vaddps  xmm1, xmm0, xmmword ptr [rbx+rcx]
        vmovups xmmword ptr [rbx+rcx], xmm1
      }
      _RCX = this->m_pipelineInstance->m_positions.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v117 & 0x7F800000) == 2139095040 )
        goto LABEL_85;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v118 & 0x7F800000) == 2139095040 )
        goto LABEL_85;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v119 & 0x7F800000) == 2139095040 )
        goto LABEL_85;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v120 & 0x7F800000) == 2139095040 )
      {
LABEL_85:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1452, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_angularVelocities.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v121 & 0x7F800000) == 2139095040 )
        goto LABEL_86;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v122 & 0x7F800000) == 2139095040 )
        goto LABEL_86;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v123 & 0x7F800000) == 2139095040 )
        goto LABEL_86;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v124 & 0x7F800000) == 2139095040 )
      {
LABEL_86:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1454, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(3) )") )
          __debugbreak();
      }
      __asm
      {
        vmulps  xmm0, xmm10, xmmword ptr [rcx+rbx]
        vblendps xmm8, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+70h, 8; __m128 const near * const g_vectorfConstants
        vmovss  [rbp+57h+var_A0], xmm8
      }
      if ( (v125 & 0x7F800000) == 2139095040 )
        goto LABEL_87;
      __asm { vextractps [rbp+57h+var_A0], xmm8, 1 }
      if ( (v126 & 0x7F800000) == 2139095040 )
        goto LABEL_87;
      __asm { vextractps [rbp+57h+var_A0], xmm8, 2 }
      if ( (v127 & 0x7F800000) == 2139095040 )
        goto LABEL_87;
      __asm { vextractps [rbp+57h+var_A0], xmm8, 3 }
      if ( (v128 & 0x7F800000) == 2139095040 )
      {
LABEL_87:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1456, ASSERT_TYPE_SANITY, "( !IS_NAN( ( q.m_vec )(0) ) && !IS_NAN( ( q.m_vec )(1) ) && !IS_NAN( ( q.m_vec )(2) ) && !IS_NAN( ( q.m_vec )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( q.m_vec )(0) ) && !IS_NAN( ( q.m_vec )(1) ) && !IS_NAN( ( q.m_vec )(2) ) && !IS_NAN( ( q.m_vec )(3) )") )
          __debugbreak();
      }
      __asm
      {
        vshufps xmm6, xmm8, xmm8, 0FFh
        vshufps xmm0, xmm8, xmm8, 0C9h ; 'É'
      }
      _RCX = this->m_pipelineInstance->m_orientations.m_data;
      __asm
      {
        vmovups xmm7, xmmword ptr [rbx+rcx]
        vbroadcastss xmm5, dword ptr [rbx+rcx+0Ch]
        vmulps  xmm2, xmm0, xmm7
        vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm8
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm1, xmm5, xmm6
        vdpps   xmm0, xmm8, xmm7, 7Fh
        vsubps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm7, xmm6
        vaddps  xmm2, xmm1, xmm0
        vmulps  xmm1, xmm5, xmm8
        vaddps  xmm2, xmm2, xmm1
        vblendps xmm6, xmm2, xmm3, 8
        vmovss  [rbp+57h+var_A0], xmm6
      }
      if ( (v129 & 0x7F800000) == 2139095040 )
        goto LABEL_88;
      __asm { vextractps [rbp+57h+var_A0], xmm6, 1 }
      if ( (v130 & 0x7F800000) == 2139095040 )
        goto LABEL_88;
      __asm { vextractps [rbp+57h+var_A0], xmm6, 2 }
      if ( (v131 & 0x7F800000) == 2139095040 )
        goto LABEL_88;
      __asm { vextractps [rbp+57h+var_A0], xmm6, 3 }
      if ( (v132 & 0x7F800000) == 2139095040 )
      {
LABEL_88:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1459, ASSERT_TYPE_SANITY, "( !IS_NAN( ( r.m_vec )(0) ) && !IS_NAN( ( r.m_vec )(1) ) && !IS_NAN( ( r.m_vec )(2) ) && !IS_NAN( ( r.m_vec )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( r.m_vec )(0) ) && !IS_NAN( ( r.m_vec )(1) ) && !IS_NAN( ( r.m_vec )(2) ) && !IS_NAN( ( r.m_vec )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_orientations.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v133 & 0x7F800000) == 2139095040 )
        goto LABEL_89;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v134 & 0x7F800000) == 2139095040 )
        goto LABEL_89;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v135 & 0x7F800000) == 2139095040 )
        goto LABEL_89;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v136 & 0x7F800000) == 2139095040 )
      {
LABEL_89:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1461, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) )") )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
        vdpps   xmm0, xmm6, xmm6, 0FFh
        vrsqrtps xmm4, xmm0
      }
      _RCX = this->m_pipelineInstance->m_orientations.m_data;
      __asm
      {
        vmulps  xmm0, xmm4, xmm0
        vmulps  xmm2, xmm0, xmm4
        vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
        vsubps  xmm3, xmm1, xmm2
        vmulps  xmm2, xmm3, xmm0
        vmulps  xmm1, xmm2, xmm6
        vmovups xmmword ptr [rbx+rcx], xmm1
      }
      _RCX = this->m_pipelineInstance->m_orientations.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v137 & 0x7F800000) == 2139095040 )
        goto LABEL_90;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v138 & 0x7F800000) == 2139095040 )
        goto LABEL_90;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v139 & 0x7F800000) == 2139095040 )
        goto LABEL_90;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_A0], xmm0
      }
      if ( (v140 & 0x7F800000) == 2139095040 )
      {
LABEL_90:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1463, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RBX += 16i64;
      --m_size;
    }
    while ( m_size );
    __asm
    {
      vmovaps xmm8, [rsp+0D0h+var_58+8]
      vmovaps xmm7, [rsp+0D0h+var_48+8]
    }
  }
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+0D0h+var_38+8]
    vmovaps xmm9, [rsp+0D0h+var_68+8]
    vmovaps xmm10, [rsp+0D0h+var_78+8]
  }
}

/*
==============
HavokPhysicsFX_LinAngDampingIntegratorTask::process
==============
*/

void __fastcall HavokPhysicsFX_LinAngDampingIntegratorTask::process(HavokPhysicsFX_LinAngDampingIntegratorTask *this, const hkTask::Input *input, double _XMM2_8)
{
  const char *v12; 
  __int64 m_size; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  int v130; 
  int v131; 
  int v132; 
  int v133; 
  int v134; 
  int v135; 
  int v136; 
  int v137; 
  int v138; 
  int v139; 
  int v140; 
  int v141; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  int v146; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  int v154; 
  int v155; 
  int v156; 
  int v157; 
  int v158; 
  int v159; 
  int v160; 
  int v161; 
  int v162; 
  int v163; 
  int v164; 
  int v165; 
  int v166; 
  int v167; 
  int v168; 
  int v169; 
  hkVector4f gravity; 
  char v173; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  v12 = j_va("Step Pipeline %s with %i particles", this->m_pipelineInstance->m_asset->name, (unsigned int)this->m_pipelineInstance->m_positions.m_size);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v12);
  _RBX = HavokPhysics_GetStepInput(this->m_worldId);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1477, ASSERT_TYPE_ASSERT, "(stepInput)", (const char *)&queryFormat, "stepInput") )
    __debugbreak();
  m_size = this->m_pipelineInstance->m_positions.m_size;
  HavokPhysics_GetGravity((const Physics_WorldId)this->m_worldId, &gravity);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+gravity.m_quad]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v121 & 0x7F800000) == 2139095040 )
    goto LABEL_92;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+gravity.m_quad+4]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v122 & 0x7F800000) == 2139095040 )
    goto LABEL_92;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+gravity.m_quad+8]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v123 & 0x7F800000) == 2139095040 )
    goto LABEL_92;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+gravity.m_quad+0Ch]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v124 & 0x7F800000) == 2139095040 )
  {
LABEL_92:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1485, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gravity )(0) ) && !IS_NAN( ( gravity )(1) ) && !IS_NAN( ( gravity )(2) ) && !IS_NAN( ( gravity )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( gravity )(0) ) && !IS_NAN( ( gravity )(1) ) && !IS_NAN( ( gravity )(2) ) && !IS_NAN( ( gravity )(3) )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vmovss  [rbp+57h+var_C0], xmm6
  }
  if ( (v125 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1489, ASSERT_TYPE_SANITY, "( !IS_NAN( deltaTime ) )", (const char *)&queryFormat, "!IS_NAN( deltaTime )") )
    __debugbreak();
  __asm
  {
    vmovaps xmm10, xmm6
    vshufps xmm10, xmm10, xmm10, 0
    vmulps  xmm9, xmm10, xmmword ptr [rbp+57h+gravity.m_quad]
    vmovss  [rbp+57h+var_C0], xmm9
  }
  if ( (v126 & 0x7F800000) == 2139095040 )
    goto LABEL_93;
  __asm { vextractps [rbp+57h+var_C0], xmm9, 1 }
  if ( (v127 & 0x7F800000) == 2139095040 )
    goto LABEL_93;
  __asm { vextractps [rbp+57h+var_C0], xmm9, 2 }
  if ( (v128 & 0x7F800000) == 2139095040 )
    goto LABEL_93;
  __asm { vextractps [rbp+57h+var_C0], xmm9, 3 }
  if ( (v129 & 0x7F800000) == 2139095040 )
  {
LABEL_93:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1494, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gravityLinVelDelta )(0) ) && !IS_NAN( ( gravityLinVelDelta )(1) ) && !IS_NAN( ( gravityLinVelDelta )(2) ) && !IS_NAN( ( gravityLinVelDelta )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( gravityLinVelDelta )(0) ) && !IS_NAN( ( gravityLinVelDelta )(1) ) && !IS_NAN( ( gravityLinVelDelta )(2) ) && !IS_NAN( ( gravityLinVelDelta )(3) )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vxorps  xmm2, xmm2, xmm2
  }
  _RCX = this->m_pipelineInstance->m_asset;
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+24h]
    vmovss  xmm7, dword ptr [rcx+28h]
    vmulss  xmm0, xmm6, xmm4
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm7, xmm6
    vmovss  [rbp+57h+var_C0], xmm4
    vmaxss  xmm8, xmm1, xmm2
    vsubss  xmm1, xmm3, xmm0
    vmaxss  xmm6, xmm1, xmm2
  }
  if ( (v130 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1501, ASSERT_TYPE_SANITY, "( !IS_NAN( linearDamping ) )", (const char *)&queryFormat, "!IS_NAN( linearDamping )") )
    __debugbreak();
  __asm { vmovss  [rbp+57h+var_C0], xmm7 }
  if ( (v131 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1502, ASSERT_TYPE_SANITY, "( !IS_NAN( angularDamping ) )", (const char *)&queryFormat, "!IS_NAN( angularDamping )") )
    __debugbreak();
  __asm { vmovss  [rbp+57h+var_C0], xmm8 }
  if ( (v132 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1503, ASSERT_TYPE_SANITY, "( !IS_NAN( linearDampingScalar ) )", (const char *)&queryFormat, "!IS_NAN( linearDampingScalar )") )
    __debugbreak();
  __asm { vmovss  [rbp+57h+var_C0], xmm6 }
  if ( (v133 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1504, ASSERT_TYPE_SANITY, "( !IS_NAN( angularDampingScalar ) )", (const char *)&queryFormat, "!IS_NAN( angularDampingScalar )") )
    __debugbreak();
  if ( m_size > 0 )
  {
    _RBX = 0i64;
    __asm
    {
      vmovaps xmmword ptr [rsp+0F0h+var_88+8], xmm11
      vmovaps [rsp+0F0h+var_98+8], xmm12
      vmovaps xmm12, xmm6
      vmovaps xmm11, xmm8
      vshufps xmm12, xmm12, xmm12, 0
      vshufps xmm11, xmm11, xmm11, 0
    }
    do
    {
      _RCX = this->m_pipelineInstance->m_linearVelocities.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v134 & 0x7F800000) == 2139095040 )
        goto LABEL_94;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v135 & 0x7F800000) == 2139095040 )
        goto LABEL_94;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v136 & 0x7F800000) == 2139095040 )
        goto LABEL_94;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v137 & 0x7F800000) == 2139095040 )
      {
LABEL_94:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1510, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_linearVelocities.m_data;
      __asm
      {
        vaddps  xmm0, xmm9, xmmword ptr [rbx+rcx]
        vmovups xmmword ptr [rbx+rcx], xmm0
      }
      _RCX = this->m_pipelineInstance->m_linearVelocities.m_data;
      __asm
      {
        vmulps  xmm0, xmm11, xmmword ptr [rbx+rcx]
        vmovups xmmword ptr [rbx+rcx], xmm0
      }
      _RCX = this->m_pipelineInstance->m_linearVelocities.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v138 & 0x7F800000) == 2139095040 )
        goto LABEL_95;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v139 & 0x7F800000) == 2139095040 )
        goto LABEL_95;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v140 & 0x7F800000) == 2139095040 )
        goto LABEL_95;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v141 & 0x7F800000) == 2139095040 )
      {
LABEL_95:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1513, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_linearVelocities[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_positions.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v142 & 0x7F800000) == 2139095040 )
        goto LABEL_96;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v143 & 0x7F800000) == 2139095040 )
        goto LABEL_96;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v144 & 0x7F800000) == 2139095040 )
        goto LABEL_96;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v145 & 0x7F800000) == 2139095040 )
      {
LABEL_96:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1515, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_positions.m_data;
      __asm
      {
        vmulps  xmm0, xmm10, xmmword ptr [rax+rbx]
        vaddps  xmm1, xmm0, xmmword ptr [rbx+rcx]
        vmovups xmmword ptr [rbx+rcx], xmm1
      }
      _RCX = this->m_pipelineInstance->m_positions.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v146 & 0x7F800000) == 2139095040 )
        goto LABEL_97;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v147 & 0x7F800000) == 2139095040 )
        goto LABEL_97;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v148 & 0x7F800000) == 2139095040 )
        goto LABEL_97;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v149 & 0x7F800000) == 2139095040 )
      {
LABEL_97:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1517, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_positions[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_angularVelocities.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v150 & 0x7F800000) == 2139095040 )
        goto LABEL_98;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v151 & 0x7F800000) == 2139095040 )
        goto LABEL_98;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v152 & 0x7F800000) == 2139095040 )
        goto LABEL_98;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v153 & 0x7F800000) == 2139095040 )
      {
LABEL_98:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1519, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_angularVelocities[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_angularVelocities.m_data;
      __asm
      {
        vmulps  xmm0, xmm12, xmmword ptr [rbx+rcx]
        vmovups xmmword ptr [rbx+rcx], xmm0
        vmulps  xmm0, xmm10, xmmword ptr [rcx+rbx]
        vblendps xmm8, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+70h, 8; __m128 const near * const g_vectorfConstants
        vmovss  [rbp+57h+var_C0], xmm8
      }
      if ( (v154 & 0x7F800000) == 2139095040 )
        goto LABEL_99;
      __asm { vextractps [rbp+57h+var_C0], xmm8, 1 }
      if ( (v155 & 0x7F800000) == 2139095040 )
        goto LABEL_99;
      __asm { vextractps [rbp+57h+var_C0], xmm8, 2 }
      if ( (v156 & 0x7F800000) == 2139095040 )
        goto LABEL_99;
      __asm { vextractps [rbp+57h+var_C0], xmm8, 3 }
      if ( (v157 & 0x7F800000) == 2139095040 )
      {
LABEL_99:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1522, ASSERT_TYPE_SANITY, "( !IS_NAN( ( q.m_vec )(0) ) && !IS_NAN( ( q.m_vec )(1) ) && !IS_NAN( ( q.m_vec )(2) ) && !IS_NAN( ( q.m_vec )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( q.m_vec )(0) ) && !IS_NAN( ( q.m_vec )(1) ) && !IS_NAN( ( q.m_vec )(2) ) && !IS_NAN( ( q.m_vec )(3) )") )
          __debugbreak();
      }
      __asm
      {
        vshufps xmm6, xmm8, xmm8, 0FFh
        vshufps xmm0, xmm8, xmm8, 0C9h ; 'É'
      }
      _RCX = this->m_pipelineInstance->m_orientations.m_data;
      __asm
      {
        vmovups xmm7, xmmword ptr [rbx+rcx]
        vbroadcastss xmm5, dword ptr [rbx+rcx+0Ch]
        vmulps  xmm2, xmm0, xmm7
        vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm8
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm1, xmm5, xmm6
        vdpps   xmm0, xmm8, xmm7, 7Fh
        vsubps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm7, xmm6
        vaddps  xmm2, xmm1, xmm0
        vmulps  xmm1, xmm5, xmm8
        vaddps  xmm2, xmm2, xmm1
        vblendps xmm6, xmm2, xmm3, 8
        vmovss  [rbp+57h+var_C0], xmm6
      }
      if ( (v158 & 0x7F800000) == 2139095040 )
        goto LABEL_100;
      __asm { vextractps [rbp+57h+var_C0], xmm6, 1 }
      if ( (v159 & 0x7F800000) == 2139095040 )
        goto LABEL_100;
      __asm { vextractps [rbp+57h+var_C0], xmm6, 2 }
      if ( (v160 & 0x7F800000) == 2139095040 )
        goto LABEL_100;
      __asm { vextractps [rbp+57h+var_C0], xmm6, 3 }
      if ( (v161 & 0x7F800000) == 2139095040 )
      {
LABEL_100:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1525, ASSERT_TYPE_SANITY, "( !IS_NAN( ( r.m_vec )(0) ) && !IS_NAN( ( r.m_vec )(1) ) && !IS_NAN( ( r.m_vec )(2) ) && !IS_NAN( ( r.m_vec )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( r.m_vec )(0) ) && !IS_NAN( ( r.m_vec )(1) ) && !IS_NAN( ( r.m_vec )(2) ) && !IS_NAN( ( r.m_vec )(3) )") )
          __debugbreak();
      }
      _RCX = this->m_pipelineInstance->m_orientations.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v162 & 0x7F800000) == 2139095040 )
        goto LABEL_101;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v163 & 0x7F800000) == 2139095040 )
        goto LABEL_101;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v164 & 0x7F800000) == 2139095040 )
        goto LABEL_101;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v165 & 0x7F800000) == 2139095040 )
      {
LABEL_101:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1527, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) )") )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
        vdpps   xmm0, xmm6, xmm6, 0FFh
        vrsqrtps xmm4, xmm0
      }
      _RCX = this->m_pipelineInstance->m_orientations.m_data;
      __asm
      {
        vmulps  xmm0, xmm4, xmm0
        vmulps  xmm2, xmm0, xmm4
        vsubps  xmm3, xmm1, xmm2
        vmulps  xmm2, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
        vmulps  xmm1, xmm3, xmm2
        vmulps  xmm4, xmm1, xmm6
        vmovups xmmword ptr [rbx+rcx], xmm4
      }
      _RCX = this->m_pipelineInstance->m_orientations.m_data;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v166 & 0x7F800000) == 2139095040 )
        goto LABEL_102;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+4]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v167 & 0x7F800000) == 2139095040 )
        goto LABEL_102;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+8]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v168 & 0x7F800000) == 2139095040 )
        goto LABEL_102;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v169 & 0x7F800000) == 2139095040 )
      {
LABEL_102:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfx.cpp", 1529, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(0) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(1) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(2) ) && !IS_NAN( ( m_pipelineInstance->m_orientations[particleIdx] )(3) )") )
          __debugbreak();
      }
      _RBX += 16i64;
      --m_size;
    }
    while ( m_size );
    __asm
    {
      vmovaps xmm12, [rsp+0F0h+var_98+8]
      vmovaps xmm11, xmmword ptr [rsp+0F0h+var_88+8]
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v173;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

