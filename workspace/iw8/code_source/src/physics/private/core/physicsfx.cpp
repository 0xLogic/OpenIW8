/*
==============
PhysicsFX_UnregisterWorld
==============
*/

void __fastcall PhysicsFX_UnregisterWorld(Physics_WorldId worldId)
{
  ?PhysicsFX_UnregisterWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsFX_WaitForPlaySoundsCmds
==============
*/

void PhysicsFX_WaitForPlaySoundsCmds(void)
{
  ?PhysicsFX_WaitForPlaySoundsCmds@@YAXXZ();
}

/*
==============
PhysicsFX_IsValidParticlePosition
==============
*/

bool __fastcall PhysicsFX_IsValidParticlePosition(const float4 *position)
{
  return ?PhysicsFX_IsValidParticlePosition@@YA_NAEBUfloat4@@@Z(position);
}

/*
==============
PhysicsFX_GetParticlePosition
==============
*/

void __fastcall PhysicsFX_GetParticlePosition(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec3_t *position)
{
  ?PhysicsFX_GetParticlePosition@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEATvec3_t@@@Z(worldId, pipelineInstance, particleId, position);
}

/*
==============
PhysicsFX_ReleasePipeline
==============
*/

bool __fastcall PhysicsFX_ReleasePipeline(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles)
{
  return ?PhysicsFX_ReleasePipeline@@YA_NW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@H@Z(worldId, pipelineInstance, numParticles);
}

/*
==============
PhysicsFX_SetParticleLinearVelocity
==============
*/

void __fastcall PhysicsFX_SetParticleLinearVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec3_t *velocity)
{
  ?PhysicsFX_SetParticleLinearVelocity@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEBTvec3_t@@@Z(worldId, pipelineInstance, particleId, velocity);
}

/*
==============
PhysicsFX_HasPipeline
==============
*/

bool __fastcall PhysicsFX_HasPipeline(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance)
{
  return ?PhysicsFX_HasPipeline@@YA_NW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@@Z(worldId, pipelineInstance);
}

/*
==============
PhysicsFX_PlaySounds
==============
*/

void __fastcall PhysicsFX_PlaySounds(LocalClientNum_t localClientNum, Physics_WorldId worldId)
{
  ?PhysicsFX_PlaySounds@@YAXW4LocalClientNum_t@@W4Physics_WorldId@@@Z(localClientNum, worldId);
}

/*
==============
PhysicsFX_SetParticleAngularVelocities
==============
*/

void __fastcall PhysicsFX_SetParticleAngularVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec3_t *velocities)
{
  ?PhysicsFX_SetParticleAngularVelocities@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEBTvec3_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, velocities);
}

/*
==============
PhysicsFX_SetParticleAngularVelocity
==============
*/

void __fastcall PhysicsFX_SetParticleAngularVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec3_t *velocity)
{
  ?PhysicsFX_SetParticleAngularVelocity@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEBTvec3_t@@@Z(worldId, pipelineInstance, particleId, velocity);
}

/*
==============
PhysicsFX_ParticlesUpdated
==============
*/

void __fastcall PhysicsFX_ParticlesUpdated(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds)
{
  ?PhysicsFX_ParticlesUpdated@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAH@Z(worldId, pipelineInstance, numParticles, particleIds);
}

/*
==============
PhysicsFX_GetParticleOrientations
==============
*/

void __fastcall PhysicsFX_GetParticleOrientations(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec4_t *orientations)
{
  ?PhysicsFX_GetParticleOrientations@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEATvec4_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, orientations);
}

/*
==============
PhysicsFX_SetParticleLinearVelocities
==============
*/

void __fastcall PhysicsFX_SetParticleLinearVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec3_t *velocities)
{
  ?PhysicsFX_SetParticleLinearVelocities@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEBTvec3_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, velocities);
}

/*
==============
PhysicsFX_SetParticlePositions
==============
*/

void __fastcall PhysicsFX_SetParticlePositions(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec3_t *positions)
{
  ?PhysicsFX_SetParticlePositions@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEBTvec3_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, positions);
}

/*
==============
PhysicsFX_SetParticlePosition
==============
*/

void __fastcall PhysicsFX_SetParticlePosition(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec3_t *position)
{
  ?PhysicsFX_SetParticlePosition@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEBTvec3_t@@@Z(worldId, pipelineInstance, particleId, position);
}

/*
==============
PhysicsFX_AssertNotLocked
==============
*/

void PhysicsFX_AssertNotLocked(void)
{
  ?PhysicsFX_AssertNotLocked@@YAXXZ();
}

/*
==============
PhysicsFX_GetParticleScales
==============
*/

void __fastcall PhysicsFX_GetParticleScales(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, float *scales)
{
  ?PhysicsFX_GetParticleScales@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEAM@Z(worldId, pipelineInstance, numParticles, particleIds, scales);
}

/*
==============
PhysicsFX_GetParticleAngularVelocities
==============
*/

void __fastcall PhysicsFX_GetParticleAngularVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec3_t *velocities)
{
  ?PhysicsFX_GetParticleAngularVelocities@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEATvec3_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, velocities);
}

/*
==============
PhysicsFX_CreateParticles
==============
*/

int __fastcall PhysicsFX_CreateParticles(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int shapeIndex, int numParticles, int *particleIds)
{
  return ?PhysicsFX_CreateParticles@@YAHW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HHPEAH@Z(worldId, pipelineInstance, shapeIndex, numParticles, particleIds);
}

/*
==============
PhysicsFX_GetParticleLinearVelocity
==============
*/

void __fastcall PhysicsFX_GetParticleLinearVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec3_t *velocity)
{
  ?PhysicsFX_GetParticleLinearVelocity@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEATvec3_t@@@Z(worldId, pipelineInstance, particleId, velocity);
}

/*
==============
PhysicsFX_DestroyParticles
==============
*/

void __fastcall PhysicsFX_DestroyParticles(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds)
{
  ?PhysicsFX_DestroyParticles@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAH@Z(worldId, pipelineInstance, numParticles, particleIds);
}

/*
==============
PhysicsFX_PlaySoundsCmd
==============
*/

void __fastcall PhysicsFX_PlaySoundsCmd(const void *const cmdData)
{
  ?PhysicsFX_PlaySoundsCmd@@YAXQEBX@Z(cmdData);
}

/*
==============
PhysicsFX_GetParticleScale
==============
*/

void __fastcall PhysicsFX_GetParticleScale(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, float *scale)
{
  ?PhysicsFX_GetParticleScale@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAM@Z(worldId, pipelineInstance, particleId, scale);
}

/*
==============
PhysicsFX_RegisterWorld
==============
*/

void __fastcall PhysicsFX_RegisterWorld(Physics_WorldId worldId)
{
  ?PhysicsFX_RegisterWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsFX_Lock
==============
*/

void __fastcall PhysicsFX_Lock(bool lock)
{
  ?PhysicsFX_Lock@@YAX_N@Z(lock);
}

/*
==============
PhysicsFX_RequestPipeline
==============
*/

HavokPhysicsFX_Pipeline *__fastcall PhysicsFX_RequestPipeline(Physics_WorldId worldId, PhysicsFXPipeline *pipelineAsset, PhysicsFXShape *shapeAsset, int numParticles, int *shapeIndex)
{
  return ?PhysicsFX_RequestPipeline@@YAPEAVHavokPhysicsFX_Pipeline@@W4Physics_WorldId@@PEAUPhysicsFXPipeline@@PEAUPhysicsFXShape@@HPEAH@Z(worldId, pipelineAsset, shapeAsset, numParticles, shapeIndex);
}

/*
==============
PhysicsFX_StepWorld
==============
*/

void __fastcall PhysicsFX_StepWorld(Physics_WorldId worldId)
{
  ?PhysicsFX_StepWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsFX_GetParticleLinearVelocities
==============
*/

void __fastcall PhysicsFX_GetParticleLinearVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec3_t *velocities)
{
  ?PhysicsFX_GetParticleLinearVelocities@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEATvec3_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, velocities);
}

/*
==============
PhysicsFX_GetParticleImpactAndClear
==============
*/

void __fastcall PhysicsFX_GetParticleImpactAndClear(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, bool *impact, Particle_OnImpactData *data)
{
  ?PhysicsFX_GetParticleImpactAndClear@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEA_NAEAUParticle_OnImpactData@@@Z(worldId, pipelineInstance, particleId, impact, data);
}

/*
==============
PhysicsFX_GetParticlePositions
==============
*/

void __fastcall PhysicsFX_GetParticlePositions(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec3_t *positions)
{
  ?PhysicsFX_GetParticlePositions@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEATvec3_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, positions);
}

/*
==============
PhysicsFX_SetParticleScale
==============
*/

void __fastcall PhysicsFX_SetParticleScale(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, float scale)
{
  ?PhysicsFX_SetParticleScale@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HM@Z(worldId, pipelineInstance, particleId, scale);
}

/*
==============
PhysicsFX_SetParticleOrientations
==============
*/

void __fastcall PhysicsFX_SetParticleOrientations(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec4_t *orientations)
{
  ?PhysicsFX_SetParticleOrientations@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEBTvec4_t@@@Z(worldId, pipelineInstance, numParticles, particleIds, orientations);
}

/*
==============
PhysicsFX_SetParticleScales
==============
*/

void __fastcall PhysicsFX_SetParticleScales(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, float *scales)
{
  ?PhysicsFX_SetParticleScales@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HPEAHPEAM@Z(worldId, pipelineInstance, numParticles, particleIds, scales);
}

/*
==============
PhysicsFX_Init
==============
*/

void PhysicsFX_Init(void)
{
  ?PhysicsFX_Init@@YAXXZ();
}

/*
==============
PhysicsFX_GetParticleOrientation
==============
*/

void __fastcall PhysicsFX_GetParticleOrientation(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec4_t *orientation)
{
  ?PhysicsFX_GetParticleOrientation@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEATvec4_t@@@Z(worldId, pipelineInstance, particleId, orientation);
}

/*
==============
PhysicsFX_Shutdown
==============
*/

void PhysicsFX_Shutdown(void)
{
  ?PhysicsFX_Shutdown@@YAXXZ();
}

/*
==============
PhysicsFX_SetParticleOrientation
==============
*/

void __fastcall PhysicsFX_SetParticleOrientation(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec4_t *orientation)
{
  ?PhysicsFX_SetParticleOrientation@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEBTvec4_t@@@Z(worldId, pipelineInstance, particleId, orientation);
}

/*
==============
PhysicsFX_QueuePlaySoundsCmd
==============
*/

void __fastcall PhysicsFX_QueuePlaySoundsCmd(LocalClientNum_t localClientNum)
{
  ?PhysicsFX_QueuePlaySoundsCmd@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
PhysicsFX_GetParticleAngularVelocity
==============
*/

void __fastcall PhysicsFX_GetParticleAngularVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec3_t *velocity)
{
  ?PhysicsFX_GetParticleAngularVelocity@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@HAEATvec3_t@@@Z(worldId, pipelineInstance, particleId, velocity);
}

/*
==============
PhysicsFX_AssertNotLocked
==============
*/
void PhysicsFX_AssertNotLocked(void)
{
  const dvar_t *v0; 

  if ( s_physicsFXLock )
  {
    v0 = DVARBOOL_physicsFX_debugDrawFXPipelineInstanceDrawParticles;
    if ( !DVARBOOL_physicsFX_debugDrawFXPipelineInstanceDrawParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelineInstanceDrawParticles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( !v0->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 105, ASSERT_TYPE_ASSERT, "(!s_physicsFXLock || Dvar_GetBool_Internal_DebugName( DVARBOOL_physicsFX_debugDrawFXPipelineInstanceDrawParticles, \"physicsFX_debugDrawFXPipelineInstanceDrawParticles\" ))", (const char *)&queryFormat, "!s_physicsFXLock || Dvar_GetBool( physicsFX_debugDrawFXPipelineInstanceDrawParticles )") )
      __debugbreak();
  }
}

/*
==============
PhysicsFX_CreateParticles
==============
*/
__int64 PhysicsFX_CreateParticles(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int shapeIndex, int numParticles, int *particleIds)
{
  const char *v9; 
  unsigned int Particles; 

  PhysicsFX_AssertNotLocked();
  if ( numParticles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 225, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 226, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "PhysicsFX_CreateParticles");
  v9 = j_va("%i Particles", (unsigned int)numParticles);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v9);
  Particles = HavokPhysicsFX_CreateParticles(worldId, pipelineInstance, shapeIndex, numParticles, particleIds);
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
  return Particles;
}

/*
==============
PhysicsFX_DestroyParticles
==============
*/
void PhysicsFX_DestroyParticles(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds)
{
  PhysicsFX_AssertNotLocked();
  if ( numParticles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 243, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 244, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "PhysicsFX_DestroyParticles");
  HavokPhysicsFX_DestroyParticles(worldId, pipelineInstance, numParticles, particleIds);
  Sys_ProfEndNamedEvent();
}

/*
==============
PhysicsFX_GetParticleAngularVelocities
==============
*/
void PhysicsFX_GetParticleAngularVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec3_t *velocities)
{
  PhysicsFX_AssertNotLocked();
  if ( numParticles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 578, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 579, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !velocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 580, ASSERT_TYPE_ASSERT, "(velocities)", (const char *)&queryFormat, "velocities") )
    __debugbreak();
  HavokPhysicsFX_GetParticleAngularVelocities(worldId, pipelineInstance, numParticles, particleIds, velocities);
}

/*
==============
PhysicsFX_GetParticleAngularVelocity
==============
*/
void PhysicsFX_GetParticleAngularVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec3_t *velocity)
{
  PhysicsFX_AssertNotLocked();
  HavokPhysicsFX_GetParticleAngularVelocity(worldId, pipelineInstance, particleId, velocity);
}

/*
==============
PhysicsFX_GetParticleImpactAndClear
==============
*/
void PhysicsFX_GetParticleImpactAndClear(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, bool *impact, Particle_OnImpactData *data)
{
  PhysicsFX_AssertNotLocked();
  HavokPhysicsFX_GetParticleImpactAndClear(worldId, pipelineInstance, particleId, impact, data);
}

/*
==============
PhysicsFX_GetParticleLinearVelocities
==============
*/
void PhysicsFX_GetParticleLinearVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec3_t *velocities)
{
  __int64 v6; 
  vec3_t *v9; 
  hkMemoryAllocator *v10; 
  int v11; 
  int v12; 
  hkVector4f *v13; 
  int v14; 
  __int64 v15; 
  hkVector4f *m_data; 
  float *v17; 
  float *v18; 
  unsigned __int64 v19; 
  float *v20; 
  float *v21; 
  __int64 v22; 
  hkMemoryAllocator *v23; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v24; 
  int numInOut; 

  v6 = numParticles;
  PhysicsFX_AssertNotLocked();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 523, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0", -2i64) )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 524, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v9 = velocities;
  if ( !velocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 525, ASSERT_TYPE_ASSERT, "(velocities)", (const char *)&queryFormat, "velocities") )
    __debugbreak();
  v24.m_data = NULL;
  v24.m_size = 0;
  v24.m_capacityAndFlags = 0x80000000;
  numInOut = v6;
  v10 = hkMemHeapAllocator();
  v11 = numInOut;
  v12 = numInOut;
  if ( numInOut )
  {
    v13 = (hkVector4f *)hkMemoryAllocator::bufAlloc2(v10, 16, &numInOut);
    v11 = numInOut;
  }
  else
  {
    v13 = NULL;
  }
  v14 = 0x80000000;
  if ( v11 )
    v14 = v11;
  v24.m_data = v13;
  v24.m_size = v12;
  v24.m_capacityAndFlags = v14;
  HavokPhysicsFX_GetParticleLinearVelocities(worldId, pipelineInstance, v6, particleIds, &v24);
  v15 = 0i64;
  m_data = v24.m_data;
  if ( v6 >= 4 )
  {
    v17 = &v9[1].v[2];
    v18 = &v24.m_data[1].m_quad.m128_f32[2];
    v19 = ((unsigned __int64)(v6 - 4) >> 2) + 1;
    v15 = 4 * v19;
    do
    {
      *(v17 - 5) = 32.0 * *(v18 - 6);
      *(v17 - 4) = 32.0 * *(v18 - 5);
      *(v17 - 3) = 32.0 * *(v18 - 4);
      *(v17 - 2) = 32.0 * *(v18 - 2);
      *(v17 - 1) = 32.0 * *(v18 - 1);
      *v17 = 32.0 * *v18;
      v17[1] = 32.0 * v18[2];
      v17[2] = 32.0 * v18[3];
      v17[3] = 32.0 * v18[4];
      v17[4] = 32.0 * v18[6];
      v17[5] = 32.0 * v18[7];
      v17[6] = 32.0 * v18[8];
      v17 += 12;
      v18 += 16;
      --v19;
    }
    while ( v19 );
  }
  if ( v15 < v6 )
  {
    v20 = &v9[v15].v[2];
    v21 = &m_data[v15].m_quad.m128_f32[2];
    v22 = v6 - v15;
    do
    {
      *(v20 - 2) = 32.0 * *(v21 - 2);
      *(v20 - 1) = 32.0 * *(v21 - 1);
      *v20 = 32.0 * *v21;
      v20 += 3;
      v21 += 4;
      --v22;
    }
    while ( v22 );
  }
  v23 = hkMemHeapAllocator();
  v24.m_size = 0;
  if ( v24.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v23, v24.m_data, 16, v24.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
PhysicsFX_GetParticleLinearVelocity
==============
*/
void PhysicsFX_GetParticleLinearVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec3_t *velocity)
{
  float v8; 
  float v9; 
  hkVector4f velocitya; 

  PhysicsFX_AssertNotLocked();
  HavokPhysicsFX_GetParticleLinearVelocity(worldId, pipelineInstance, particleId, &velocitya);
  v8 = 32.0 * velocitya.m_quad.m128_f32[1];
  v9 = 32.0 * velocitya.m_quad.m128_f32[2];
  velocity->v[0] = 32.0 * velocitya.m_quad.m128_f32[0];
  velocity->v[1] = v8;
  velocity->v[2] = v9;
}

/*
==============
PhysicsFX_GetParticleOrientation
==============
*/
void PhysicsFX_GetParticleOrientation(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec4_t *orientation)
{
  PhysicsFX_AssertNotLocked();
  HavokPhysicsFX_GetParticleOrientation(worldId, pipelineInstance, particleId, orientation);
}

/*
==============
PhysicsFX_GetParticleOrientations
==============
*/
void PhysicsFX_GetParticleOrientations(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec4_t *orientations)
{
  PhysicsFX_AssertNotLocked();
  if ( numParticles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 553, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 554, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !orientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 555, ASSERT_TYPE_ASSERT, "(orientations)", (const char *)&queryFormat, "orientations") )
    __debugbreak();
  HavokPhysicsFX_GetParticleOrientations(worldId, pipelineInstance, numParticles, particleIds, orientations);
}

/*
==============
PhysicsFX_GetParticlePosition
==============
*/
void PhysicsFX_GetParticlePosition(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec3_t *position)
{
  float v8; 
  float v9; 
  hkVector4f positiona; 

  PhysicsFX_AssertNotLocked();
  HavokPhysicsFX_GetParticlePosition(worldId, pipelineInstance, particleId, &positiona);
  v8 = 32.0 * positiona.m_quad.m128_f32[1];
  v9 = 32.0 * positiona.m_quad.m128_f32[2];
  position->v[0] = 32.0 * positiona.m_quad.m128_f32[0];
  position->v[1] = v8;
  position->v[2] = v9;
}

/*
==============
PhysicsFX_GetParticlePositions
==============
*/
void PhysicsFX_GetParticlePositions(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, vec3_t *positions)
{
  __int64 v6; 
  vec3_t *v9; 
  hkMemoryAllocator *v10; 
  int v11; 
  int v12; 
  hkVector4f *v13; 
  int v14; 
  __int64 v15; 
  hkVector4f *m_data; 
  float *v17; 
  float *v18; 
  unsigned __int64 v19; 
  float *v20; 
  float *v21; 
  __int64 v22; 
  hkMemoryAllocator *v23; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v24; 
  int numInOut; 

  v6 = numParticles;
  PhysicsFX_AssertNotLocked();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 465, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0", -2i64) )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 466, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v9 = positions;
  if ( !positions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 467, ASSERT_TYPE_ASSERT, "(positions)", (const char *)&queryFormat, "positions") )
    __debugbreak();
  v24.m_data = NULL;
  v24.m_size = 0;
  v24.m_capacityAndFlags = 0x80000000;
  numInOut = v6;
  v10 = hkMemHeapAllocator();
  v11 = numInOut;
  v12 = numInOut;
  if ( numInOut )
  {
    v13 = (hkVector4f *)hkMemoryAllocator::bufAlloc2(v10, 16, &numInOut);
    v11 = numInOut;
  }
  else
  {
    v13 = NULL;
  }
  v14 = 0x80000000;
  if ( v11 )
    v14 = v11;
  v24.m_data = v13;
  v24.m_size = v12;
  v24.m_capacityAndFlags = v14;
  HavokPhysicsFX_GetParticlePositions(worldId, pipelineInstance, v6, particleIds, &v24);
  v15 = 0i64;
  m_data = v24.m_data;
  if ( v6 >= 4 )
  {
    v17 = &v9[1].v[2];
    v18 = &v24.m_data[1].m_quad.m128_f32[2];
    v19 = ((unsigned __int64)(v6 - 4) >> 2) + 1;
    v15 = 4 * v19;
    do
    {
      *(v17 - 5) = 32.0 * *(v18 - 6);
      *(v17 - 4) = 32.0 * *(v18 - 5);
      *(v17 - 3) = 32.0 * *(v18 - 4);
      *(v17 - 2) = 32.0 * *(v18 - 2);
      *(v17 - 1) = 32.0 * *(v18 - 1);
      *v17 = 32.0 * *v18;
      v17[1] = 32.0 * v18[2];
      v17[2] = 32.0 * v18[3];
      v17[3] = 32.0 * v18[4];
      v17[4] = 32.0 * v18[6];
      v17[5] = 32.0 * v18[7];
      v17[6] = 32.0 * v18[8];
      v17 += 12;
      v18 += 16;
      --v19;
    }
    while ( v19 );
  }
  if ( v15 < v6 )
  {
    v20 = &v9[v15].v[2];
    v21 = &m_data[v15].m_quad.m128_f32[2];
    v22 = v6 - v15;
    do
    {
      *(v20 - 2) = 32.0 * *(v21 - 2);
      *(v20 - 1) = 32.0 * *(v21 - 1);
      *v20 = 32.0 * *v21;
      v20 += 3;
      v21 += 4;
      --v22;
    }
    while ( v22 );
  }
  v23 = hkMemHeapAllocator();
  v24.m_size = 0;
  if ( v24.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v23, v24.m_data, 16, v24.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
PhysicsFX_GetParticleScale
==============
*/
void PhysicsFX_GetParticleScale(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, float *scale)
{
  PhysicsFX_AssertNotLocked();
  if ( !scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 484, ASSERT_TYPE_ASSERT, "(scale)", (const char *)&queryFormat, "scale") )
    __debugbreak();
  HavokPhysicsFX_GetParticleScale(worldId, pipelineInstance, particleId, scale);
}

/*
==============
PhysicsFX_GetParticleScales
==============
*/
void PhysicsFX_GetParticleScales(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, float *scales)
{
  PhysicsFX_AssertNotLocked();
  if ( numParticles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 496, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 497, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !scales && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 498, ASSERT_TYPE_ASSERT, "(scales)", (const char *)&queryFormat, "scales") )
    __debugbreak();
  HavokPhysicsFX_GetParticleScales(worldId, pipelineInstance, numParticles, particleIds, scales);
}

/*
==============
PhysicsFX_HasPipeline
==============
*/
bool PhysicsFX_HasPipeline(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance)
{
  PhysicsFX_AssertNotLocked();
  return HavokPhysicsFX_HasPipeline(worldId, pipelineInstance);
}

/*
==============
PhysicsFX_Init
==============
*/
void PhysicsFX_Init(void)
{
  s_physicsFXLock = 0;
  HavokPhysicsFX_Init();
}

/*
==============
PhysicsFX_IsValidParticlePosition
==============
*/
bool PhysicsFX_IsValidParticlePosition(const float4 *position)
{
  _XMM2 = PHYSICS_FX_MAX_POS_FLOAT4.v;
  _XMM1 = position->v;
  _mm128_sub_ps((__m128)0i64, PHYSICS_FX_MAX_POS_FLOAT4.v);
  __asm
  {
    vcmpltps xmm1, xmm1, xmm0
    vmovmskps eax, xmm1
  }
  if ( (_EAX & 7) != 0 )
    return 0;
  __asm
  {
    vcmpleps xmm0, xmm2, xmmword ptr [rcx]
    vmovmskps eax, xmm0
  }
  return (_EAX & 7) == 0;
}

/*
==============
PhysicsFX_Lock
==============
*/
void PhysicsFX_Lock(bool lock)
{
  s_physicsFXLock = lock;
}

/*
==============
PhysicsFX_ParticlesUpdated
==============
*/
void PhysicsFX_ParticlesUpdated(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds)
{
  PhysicsFX_AssertNotLocked();
  if ( numParticles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 429, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 430, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  HavokPhysicsFX_ParticlesUpdated(worldId, pipelineInstance, numParticles, particleIds);
}

/*
==============
PhysicsFX_PlaySounds
==============
*/
void PhysicsFX_PlaySounds(LocalClientNum_t localClientNum, Physics_WorldId worldId)
{
  PhysicsFX_AssertNotLocked();
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "PhysicsFX_PlaySounds");
  HavokPhysicsFX_PlaySounds(localClientNum, worldId);
  Sys_ProfEndNamedEvent();
}

/*
==============
PhysicsFX_PlaySoundsCmd
==============
*/
void PhysicsFX_PlaySoundsCmd(const void *const cmdData)
{
  LocalClientNum_t v1; 

  v1 = *(_DWORD *)cmdData;
  PhysicsFX_AssertNotLocked();
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "PhysicsFX_PlaySounds");
  HavokPhysicsFX_PlaySounds(v1, (Physics_WorldId)(3 * v1 + 3));
  Sys_ProfEndNamedEvent();
}

/*
==============
PhysicsFX_QueuePlaySoundsCmd
==============
*/
void PhysicsFX_QueuePlaySoundsCmd(LocalClientNum_t localClientNum)
{
  LocalClientNum_t data; 

  data = localClientNum;
  Sys_AddWorkerCmd(WRKCMD_PHYSICSFX_PLAYSOUNDS, &data);
}

/*
==============
PhysicsFX_RegisterWorld
==============
*/

void __fastcall PhysicsFX_RegisterWorld(Physics_WorldId worldId)
{
  HavokPhysicsFX_RegisterWorld(worldId);
}

/*
==============
PhysicsFX_ReleasePipeline
==============
*/
__int64 PhysicsFX_ReleasePipeline(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles)
{
  PhysicsFX_AssertNotLocked();
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "PhysicsFX_ReleasePipeline");
  LOBYTE(numParticles) = HavokPhysicsFX_ReleasePipeline(worldId, pipelineInstance, numParticles);
  Sys_ProfEndNamedEvent();
  return (unsigned __int8)numParticles;
}

/*
==============
PhysicsFX_RequestPipeline
==============
*/
HavokPhysicsFX_Pipeline *PhysicsFX_RequestPipeline(Physics_WorldId worldId, PhysicsFXPipeline *pipelineAsset, PhysicsFXShape *shapeAsset, int numParticles, int *shapeIndex)
{
  HavokPhysicsFX_Pipeline *v9; 

  PhysicsFX_AssertNotLocked();
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "PhysicsFX_RequestPipeline");
  v9 = HavokPhysicsFX_RequestPipeline(worldId, pipelineAsset, shapeAsset, numParticles, shapeIndex);
  Sys_ProfEndNamedEvent();
  return v9;
}

/*
==============
PhysicsFX_SetParticleAngularVelocities
==============
*/
void PhysicsFX_SetParticleAngularVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec3_t *velocities)
{
  PhysicsFX_AssertNotLocked();
  if ( numParticles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 415, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 416, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !velocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 417, ASSERT_TYPE_ASSERT, "(velocities)", (const char *)&queryFormat, "velocities") )
    __debugbreak();
  HavokPhysicsFX_SetParticleAngularVelocities(worldId, pipelineInstance, numParticles, particleIds, velocities);
}

/*
==============
PhysicsFX_SetParticleAngularVelocity
==============
*/
void PhysicsFX_SetParticleAngularVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec3_t *velocity)
{
  PhysicsFX_AssertNotLocked();
  if ( ((LODWORD(velocity->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(velocity->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(velocity->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 403, ASSERT_TYPE_ASSERT, "(!IS_NAN( velocity[0] ) && !IS_NAN( velocity[1] ) && !IS_NAN( velocity[2] ))", (const char *)&queryFormat, "!IS_NAN( velocity[0] ) && !IS_NAN( velocity[1] ) && !IS_NAN( velocity[2] )") )
    __debugbreak();
  HavokPhysicsFX_SetParticleAngularVelocity(worldId, pipelineInstance, particleId, velocity);
}

/*
==============
PhysicsFX_SetParticleLinearVelocities
==============
*/
void PhysicsFX_SetParticleLinearVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec3_t *velocities)
{
  int *v5; 
  __int64 v6; 
  HavokPhysicsFX_Pipeline *v7; 
  Physics_WorldId v8; 
  const vec3_t *v9; 
  __int64 v10; 
  hkMemoryAllocator *v11; 
  int v12; 
  int v13; 
  hkVector4f *v14; 
  int v15; 
  __int64 v16; 
  float *v17; 
  float v18; 
  float v19; 
  hkVector4f *m_data; 
  hkMemoryAllocator *v21; 
  __int64 v22; 
  __int64 v23; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v24; 

  v23 = -2i64;
  v5 = particleIds;
  v6 = numParticles;
  v7 = pipelineInstance;
  v8 = worldId;
  PhysicsFX_AssertNotLocked();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 353, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 354, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v9 = velocities;
  if ( !velocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 355, ASSERT_TYPE_ASSERT, "(velocities)", (const char *)&queryFormat, "velocities") )
    __debugbreak();
  v10 = 0i64;
  v24.m_data = NULL;
  v24.m_size = 0;
  v24.m_capacityAndFlags = 0x80000000;
  LODWORD(velocities) = v6;
  v11 = hkMemHeapAllocator();
  v12 = (int)velocities;
  v13 = (int)velocities;
  if ( (_DWORD)velocities )
  {
    v14 = (hkVector4f *)hkMemoryAllocator::bufAlloc2(v11, 16, (int *)&velocities);
    v12 = (int)velocities;
  }
  else
  {
    v14 = NULL;
  }
  v15 = 0x80000000;
  if ( v12 )
    v15 = v12;
  v24.m_data = v14;
  v24.m_size = v13;
  v24.m_capacityAndFlags = v15;
  v16 = v6;
  if ( (int)v6 > 0 )
  {
    v17 = &v9->v[2];
    do
    {
      *(float *)&v22 = *(v17 - 2);
      if ( (v22 & 0x7F800000) == 2139095040 || (*(float *)&v22 = *(v17 - 1), (v22 & 0x7F800000) == 2139095040) || (*(float *)&v22 = *v17, (*(_DWORD *)v17 & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 361, ASSERT_TYPE_ASSERT, "(!IS_NAN( velocities[particleIt][0] ) && !IS_NAN( velocities[particleIt][1] ) && !IS_NAN( velocities[particleIt][2] ))", (const char *)&queryFormat, "!IS_NAN( velocities[particleIt][0] ) && !IS_NAN( velocities[particleIt][1] ) && !IS_NAN( velocities[particleIt][2] )", v22, v23) )
          __debugbreak();
      }
      v18 = *(v17 - 2);
      if ( (v18 < -1000000.0 || v18 > 1000000.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 362, ASSERT_TYPE_ASSERT, "(velocities[particleIt][0] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][0] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocities[particleIt][0] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][0] <= PHYSICS_FX_MAX_SPEED") )
        __debugbreak();
      v19 = *(v17 - 1);
      if ( (v19 < -1000000.0 || v19 > 1000000.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 363, ASSERT_TYPE_ASSERT, "(velocities[particleIt][1] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][1] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocities[particleIt][1] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][1] <= PHYSICS_FX_MAX_SPEED") )
        __debugbreak();
      if ( (*v17 < -1000000.0 || *v17 > 1000000.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 364, ASSERT_TYPE_ASSERT, "(velocities[particleIt][2] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][2] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocities[particleIt][2] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][2] <= PHYSICS_FX_MAX_SPEED") )
        __debugbreak();
      m_data = v24.m_data;
      v24.m_data[v10].m_quad.m128_f32[0] = 0.03125 * *(v17 - 2);
      m_data[v10].m_quad.m128_f32[1] = 0.03125 * *(v17 - 1);
      m_data[v10].m_quad.m128_f32[2] = 0.03125 * *v17;
      m_data[v10++].m_quad.m128_i32[3] = 0;
      v17 += 3;
      --v16;
    }
    while ( v16 );
    LODWORD(v6) = numParticles;
    v5 = particleIds;
    v7 = pipelineInstance;
    v8 = worldId;
  }
  HavokPhysicsFX_SetParticleLinearVelocities(v8, v7, v6, v5, &v24);
  v21 = hkMemHeapAllocator();
  v24.m_size = 0;
  if ( v24.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v21, v24.m_data, 16, v24.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
PhysicsFX_SetParticleLinearVelocity
==============
*/
void PhysicsFX_SetParticleLinearVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec3_t *velocity)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  hkVector4f velocitya; 

  PhysicsFX_AssertNotLocked();
  v12 = velocity->v[0];
  if ( (LODWORD(velocity->v[0]) & 0x7F800000) == 2139095040 || (v12 = velocity->v[1], (LODWORD(v12) & 0x7F800000) == 2139095040) || (v12 = velocity->v[2], (LODWORD(v12) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 335, ASSERT_TYPE_ASSERT, "(!IS_NAN( velocity[0] ) && !IS_NAN( velocity[1] ) && !IS_NAN( velocity[2] ))", (const char *)&queryFormat, "!IS_NAN( velocity[0] ) && !IS_NAN( velocity[1] ) && !IS_NAN( velocity[2] )", v12) )
      __debugbreak();
  }
  if ( (velocity->v[0] < -1000000.0 || velocity->v[0] > 1000000.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 336, ASSERT_TYPE_ASSERT, "(velocity[0] >= -PHYSICS_FX_MAX_SPEED && velocity[0] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocity[0] >= -PHYSICS_FX_MAX_SPEED && velocity[0] <= PHYSICS_FX_MAX_SPEED") )
    __debugbreak();
  v8 = velocity->v[1];
  if ( (v8 < -1000000.0 || v8 > 1000000.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 337, ASSERT_TYPE_ASSERT, "(velocity[1] >= -PHYSICS_FX_MAX_SPEED && velocity[1] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocity[1] >= -PHYSICS_FX_MAX_SPEED && velocity[1] <= PHYSICS_FX_MAX_SPEED") )
    __debugbreak();
  v9 = velocity->v[2];
  if ( (v9 < -1000000.0 || v9 > 1000000.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 338, ASSERT_TYPE_ASSERT, "(velocity[2] >= -PHYSICS_FX_MAX_SPEED && velocity[2] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocity[2] >= -PHYSICS_FX_MAX_SPEED && velocity[2] <= PHYSICS_FX_MAX_SPEED") )
    __debugbreak();
  v10 = 0.03125 * velocity->v[0];
  v11 = 0.03125 * velocity->v[2];
  velocitya.m_quad.m128_f32[1] = 0.03125 * velocity->v[1];
  velocitya.m_quad.m128_f32[3] = 0.0;
  velocitya.m_quad.m128_f32[0] = v10;
  velocitya.m_quad.m128_f32[2] = v11;
  HavokPhysicsFX_SetParticleLinearVelocity(worldId, pipelineInstance, particleId, &velocitya);
}

/*
==============
PhysicsFX_SetParticleOrientation
==============
*/
void PhysicsFX_SetParticleOrientation(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec4_t *orientation)
{
  PhysicsFX_AssertNotLocked();
  if ( ((LODWORD(orientation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 377, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientation[0] ) && !IS_NAN( orientation[1] ) && !IS_NAN( orientation[2] ) && !IS_NAN( orientation[3] ))", (const char *)&queryFormat, "!IS_NAN( orientation[0] ) && !IS_NAN( orientation[1] ) && !IS_NAN( orientation[2] ) && !IS_NAN( orientation[3] )") )
    __debugbreak();
  HavokPhysicsFX_SetParticleOrientation(worldId, pipelineInstance, particleId, orientation);
}

/*
==============
PhysicsFX_SetParticleOrientations
==============
*/
void PhysicsFX_SetParticleOrientations(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec4_t *orientations)
{
  PhysicsFX_AssertNotLocked();
  if ( numParticles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 389, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 390, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !orientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 391, ASSERT_TYPE_ASSERT, "(orientations)", (const char *)&queryFormat, "orientations") )
    __debugbreak();
  HavokPhysicsFX_SetParticleOrientations(worldId, pipelineInstance, numParticles, particleIds, orientations);
}

/*
==============
PhysicsFX_SetParticlePosition
==============
*/
void PhysicsFX_SetParticlePosition(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec3_t *position)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  hkVector4f positiona; 

  PhysicsFX_AssertNotLocked();
  v12 = position->v[0];
  if ( (LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (v12 = position->v[1], (LODWORD(v12) & 0x7F800000) == 2139095040) || (v12 = position->v[2], (LODWORD(v12) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 268, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", (const char *)&queryFormat, "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )", v12) )
      __debugbreak();
  }
  if ( (position->v[0] < -131072.0 || position->v[0] > 131072.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 269, ASSERT_TYPE_ASSERT, "(position[0] >= -PHYSICS_FX_MAX_POS && position[0] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "position[0] >= -PHYSICS_FX_MAX_POS && position[0] <= PHYSICS_FX_MAX_POS") )
    __debugbreak();
  v8 = position->v[1];
  if ( (v8 < -131072.0 || v8 > 131072.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 270, ASSERT_TYPE_ASSERT, "(position[1] >= -PHYSICS_FX_MAX_POS && position[1] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "position[1] >= -PHYSICS_FX_MAX_POS && position[1] <= PHYSICS_FX_MAX_POS") )
    __debugbreak();
  v9 = position->v[2];
  if ( (v9 < -131072.0 || v9 > 131072.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 271, ASSERT_TYPE_ASSERT, "(position[2] >= -PHYSICS_FX_MAX_POS && position[2] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "position[2] >= -PHYSICS_FX_MAX_POS && position[2] <= PHYSICS_FX_MAX_POS") )
    __debugbreak();
  v10 = 0.03125 * position->v[0];
  v11 = 0.03125 * position->v[2];
  positiona.m_quad.m128_f32[1] = 0.03125 * position->v[1];
  positiona.m_quad.m128_f32[3] = 0.0;
  positiona.m_quad.m128_f32[0] = v10;
  positiona.m_quad.m128_f32[2] = v11;
  HavokPhysicsFX_SetParticlePosition(worldId, pipelineInstance, particleId, &positiona);
}

/*
==============
PhysicsFX_SetParticlePositions
==============
*/
void PhysicsFX_SetParticlePositions(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec3_t *positions)
{
  int *v5; 
  __int64 v6; 
  HavokPhysicsFX_Pipeline *v7; 
  Physics_WorldId v8; 
  const vec3_t *v9; 
  __int64 v10; 
  hkMemoryAllocator *v11; 
  int v12; 
  int v13; 
  hkVector4f *v14; 
  int v15; 
  __int64 v16; 
  float *v17; 
  float v18; 
  float v19; 
  hkVector4f *m_data; 
  hkMemoryAllocator *v21; 
  __int64 v22; 
  __int64 v23; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v24; 

  v23 = -2i64;
  v5 = particleIds;
  v6 = numParticles;
  v7 = pipelineInstance;
  v8 = worldId;
  PhysicsFX_AssertNotLocked();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 286, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 287, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v9 = positions;
  if ( !positions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 288, ASSERT_TYPE_ASSERT, "(positions)", (const char *)&queryFormat, "positions") )
    __debugbreak();
  v10 = 0i64;
  v24.m_data = NULL;
  v24.m_size = 0;
  v24.m_capacityAndFlags = 0x80000000;
  LODWORD(positions) = v6;
  v11 = hkMemHeapAllocator();
  v12 = (int)positions;
  v13 = (int)positions;
  if ( (_DWORD)positions )
  {
    v14 = (hkVector4f *)hkMemoryAllocator::bufAlloc2(v11, 16, (int *)&positions);
    v12 = (int)positions;
  }
  else
  {
    v14 = NULL;
  }
  v15 = 0x80000000;
  if ( v12 )
    v15 = v12;
  v24.m_data = v14;
  v24.m_size = v13;
  v24.m_capacityAndFlags = v15;
  v16 = v6;
  if ( (int)v6 > 0 )
  {
    v17 = &v9->v[2];
    do
    {
      *(float *)&v22 = *(v17 - 2);
      if ( (v22 & 0x7F800000) == 2139095040 || (*(float *)&v22 = *(v17 - 1), (v22 & 0x7F800000) == 2139095040) || (*(float *)&v22 = *v17, (*(_DWORD *)v17 & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 294, ASSERT_TYPE_ASSERT, "(!IS_NAN( positions[particleIt][0] ) && !IS_NAN( positions[particleIt][1] ) && !IS_NAN( positions[particleIt][2] ))", (const char *)&queryFormat, "!IS_NAN( positions[particleIt][0] ) && !IS_NAN( positions[particleIt][1] ) && !IS_NAN( positions[particleIt][2] )", v22, v23) )
          __debugbreak();
      }
      v18 = *(v17 - 2);
      if ( (v18 < -131072.0 || v18 > 131072.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 295, ASSERT_TYPE_ASSERT, "(positions[particleIt][0] >= -PHYSICS_FX_MAX_POS && positions[particleIt][0] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "positions[particleIt][0] >= -PHYSICS_FX_MAX_POS && positions[particleIt][0] <= PHYSICS_FX_MAX_POS") )
        __debugbreak();
      v19 = *(v17 - 1);
      if ( (v19 < -131072.0 || v19 > 131072.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 296, ASSERT_TYPE_ASSERT, "(positions[particleIt][1] >= -PHYSICS_FX_MAX_POS && positions[particleIt][1] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "positions[particleIt][1] >= -PHYSICS_FX_MAX_POS && positions[particleIt][1] <= PHYSICS_FX_MAX_POS") )
        __debugbreak();
      if ( (*v17 < -131072.0 || *v17 > 131072.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 297, ASSERT_TYPE_ASSERT, "(positions[particleIt][2] >= -PHYSICS_FX_MAX_POS && positions[particleIt][2] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "positions[particleIt][2] >= -PHYSICS_FX_MAX_POS && positions[particleIt][2] <= PHYSICS_FX_MAX_POS") )
        __debugbreak();
      m_data = v24.m_data;
      v24.m_data[v10].m_quad.m128_f32[0] = 0.03125 * *(v17 - 2);
      m_data[v10].m_quad.m128_f32[1] = 0.03125 * *(v17 - 1);
      m_data[v10].m_quad.m128_f32[2] = 0.03125 * *v17;
      m_data[v10++].m_quad.m128_i32[3] = 0;
      v17 += 3;
      --v16;
    }
    while ( v16 );
    LODWORD(v6) = numParticles;
    v5 = particleIds;
    v7 = pipelineInstance;
    v8 = worldId;
  }
  HavokPhysicsFX_SetParticlePositions(v8, v7, v6, v5, &v24);
  v21 = hkMemHeapAllocator();
  v24.m_size = 0;
  if ( v24.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v21, v24.m_data, 16, v24.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
PhysicsFX_SetParticleScale
==============
*/
void PhysicsFX_SetParticleScale(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, float scale)
{
  PhysicsFX_AssertNotLocked();
  if ( ((LODWORD(scale) & 0x7F800000) == 2139095040 || scale <= 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 309, ASSERT_TYPE_ASSERT, "(!IS_NAN( scale ) && scale > 0.f)", (const char *)&queryFormat, "!IS_NAN( scale ) && scale > 0.f") )
    __debugbreak();
  HavokPhysicsFX_SetParticleScale(worldId, pipelineInstance, particleId, scale);
}

/*
==============
PhysicsFX_SetParticleScales
==============
*/
void PhysicsFX_SetParticleScales(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, float *scales)
{
  PhysicsFX_AssertNotLocked();
  if ( numParticles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 321, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !particleIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 322, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  if ( !scales && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 323, ASSERT_TYPE_ASSERT, "(scales)", (const char *)&queryFormat, "scales") )
    __debugbreak();
  HavokPhysicsFX_SetParticleScales(worldId, pipelineInstance, numParticles, particleIds, scales);
}

/*
==============
PhysicsFX_Shutdown
==============
*/
void PhysicsFX_Shutdown(void)
{
  s_physicsFXLock = 0;
  HavokPhysicsFX_Shutdown();
}

/*
==============
PhysicsFX_StepWorld
==============
*/
void PhysicsFX_StepWorld(Physics_WorldId worldId)
{
  unsigned __int64 TickCounter; 
  __int128 v7; 
  __int128 v9; 
  int NumPipelineInstances; 
  int NumAllocatedParticles; 
  const char *v13; 
  const char *v14; 

  _XMM6 = 0i64;
  __asm { vcvtsi2sd xmm6, xmm6, rax }
  if ( (hkStopwatch::getTicksPerSecond() & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM6 = *(double *)&_XMM6 + 1.844674407370955e19;
  TickCounter = hkStopwatch::getTickCounter();
  Profile2_UpdateEntry(89);
  if ( ((unsigned __int8)&dword_14FDE8134 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8134) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8134);
  Profile2_UpdateEntry(90);
  if ( ((unsigned __int8)&dword_14FDE8138 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8138) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8138);
  HavokPhysicsFX_StepWorld(worldId);
  Profile2_UpdateEntry(90);
  if ( ((unsigned __int64)&dword_14FDE8138 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8138) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8138);
  Profile2_UpdateEntry(89);
  if ( ((unsigned __int64)&dword_14FDE8134 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8134) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8134);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(hkStopwatch::getTickCounter() - TickCounter) < 0 )
  {
    *((_QWORD *)&v7 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v7 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v7;
  }
  *((_QWORD *)&v9 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v9 = *(double *)&_XMM0 / *(double *)&_XMM6;
  _XMM0 = v9;
  __asm { vcvtsd2ss xmm0, xmm0, xmm0; time }
  PhysicsFX_Debug_SetLastFrameTime(*(float *)&_XMM0);
  NumPipelineInstances = HavokPhysicsFX_GetNumPipelineInstances(worldId);
  NumAllocatedParticles = HavokPhysicsFX_GetNumAllocatedParticles(worldId);
  if ( NumPipelineInstances > 10 )
  {
    v13 = j_va("PhysFX Pipelines:%i max:%i", (unsigned int)NumPipelineInstances, 10i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PHYS_FX_PIPELINE_INSTANCES, 3000, v13, NumPipelineInstances);
  }
  if ( NumAllocatedParticles > 500 )
  {
    v14 = j_va("PhysFX Allocated Particles:%i max:%i", (unsigned int)NumAllocatedParticles, 500i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PHYS_FX_ALLOCATED_PARTICLES, 3000, v14, NumAllocatedParticles);
  }
}

/*
==============
PhysicsFX_UnregisterWorld
==============
*/

void __fastcall PhysicsFX_UnregisterWorld(Physics_WorldId worldId)
{
  HavokPhysicsFX_UnregisterWorld(worldId);
}

/*
==============
PhysicsFX_WaitForPlaySoundsCmds
==============
*/
void PhysicsFX_WaitForPlaySoundsCmds(void)
{
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_PHYSICSFX_PLAYSOUNDS);
}

