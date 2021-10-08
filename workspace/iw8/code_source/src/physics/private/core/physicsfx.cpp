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
  char *v19; 
  unsigned __int64 v20; 
  __int64 v34; 
  __int64 v35; 
  hkMemoryAllocator *v39; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v40; 
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
  v40.m_data = NULL;
  v40.m_size = 0;
  v40.m_capacityAndFlags = 0x80000000;
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
  v40.m_data = v13;
  v40.m_size = v12;
  v40.m_capacityAndFlags = v14;
  HavokPhysicsFX_GetParticleLinearVelocities(worldId, pipelineInstance, v6, particleIds, &v40);
  v15 = 0i64;
  m_data = v40.m_data;
  __asm { vmovss  xmm3, cs:__real@42000000 }
  if ( v6 >= 4 )
  {
    _RAX = (char *)&v9[1].z;
    v19 = &v40.m_data[1].m_quad.m128_i8[8];
    v20 = ((unsigned __int64)(v6 - 4) >> 2) + 1;
    v15 = 4 * v20;
    do
    {
      __asm
      {
        vmulss  xmm1, xmm3, dword ptr [rcx-18h]
        vmovss  dword ptr [rax-14h], xmm1
        vmulss  xmm0, xmm3, dword ptr [rcx-14h]
        vmovss  dword ptr [rax-10h], xmm0
        vmulss  xmm2, xmm3, dword ptr [rcx-10h]
        vmovss  dword ptr [rax-0Ch], xmm2
        vmulss  xmm1, xmm3, dword ptr [rcx-8]
        vmovss  dword ptr [rax-8], xmm1
        vmulss  xmm0, xmm3, dword ptr [rcx-4]
        vmovss  dword ptr [rax-4], xmm0
        vmulss  xmm2, xmm3, dword ptr [rcx]
        vmovss  dword ptr [rax], xmm2
        vmulss  xmm1, xmm3, dword ptr [rcx+8]
        vmovss  dword ptr [rax+4], xmm1
        vmulss  xmm0, xmm3, dword ptr [rcx+0Ch]
        vmovss  dword ptr [rax+8], xmm0
        vmulss  xmm2, xmm3, dword ptr [rcx+10h]
        vmovss  dword ptr [rax+0Ch], xmm2
        vmulss  xmm1, xmm3, dword ptr [rcx+18h]
        vmovss  dword ptr [rax+10h], xmm1
        vmulss  xmm0, xmm3, dword ptr [rcx+1Ch]
        vmovss  dword ptr [rax+14h], xmm0
        vmulss  xmm2, xmm3, dword ptr [rcx+20h]
        vmovss  dword ptr [rax+18h], xmm2
      }
      _RAX += 48;
      v19 += 64;
      --v20;
    }
    while ( v20 );
  }
  if ( v15 < v6 )
  {
    _RCX = (__int64)&v9[v15].z;
    v34 = (__int64)&m_data[v15].m_quad.m128_i64[1];
    v35 = v6 - v15;
    do
    {
      __asm
      {
        vmulss  xmm1, xmm3, dword ptr [rdx-8]
        vmovss  dword ptr [rcx-8], xmm1
        vmulss  xmm0, xmm3, dword ptr [rdx-4]
        vmovss  dword ptr [rcx-4], xmm0
        vmulss  xmm2, xmm3, dword ptr [rdx]
        vmovss  dword ptr [rcx], xmm2
      }
      _RCX += 12i64;
      v34 += 16i64;
      --v35;
    }
    while ( v35 );
  }
  v39 = hkMemHeapAllocator();
  v40.m_size = 0;
  if ( v40.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v39, v40.m_data, 16, v40.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
PhysicsFX_GetParticleLinearVelocity
==============
*/
void PhysicsFX_GetParticleLinearVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, vec3_t *velocity)
{
  hkVector4f velocitya; 

  _RBP = velocity;
  PhysicsFX_AssertNotLocked();
  HavokPhysicsFX_GetParticleLinearVelocity(worldId, pipelineInstance, particleId, &velocitya);
  __asm
  {
    vmovss  xmm3, cs:__real@42000000
    vmulss  xmm1, xmm3, dword ptr [rsp+68h+velocity.m_quad]
    vmulss  xmm0, xmm3, dword ptr [rsp+68h+velocity.m_quad+4]
    vmulss  xmm2, xmm3, dword ptr [rsp+68h+velocity.m_quad+8]
    vmovss  dword ptr [rbp+0], xmm1
    vmovss  dword ptr [rbp+4], xmm0
    vmovss  dword ptr [rbp+8], xmm2
  }
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
  hkVector4f positiona; 

  _RBP = position;
  PhysicsFX_AssertNotLocked();
  HavokPhysicsFX_GetParticlePosition(worldId, pipelineInstance, particleId, &positiona);
  __asm
  {
    vmovss  xmm3, cs:__real@42000000
    vmulss  xmm1, xmm3, dword ptr [rsp+68h+position.m_quad]
    vmulss  xmm0, xmm3, dword ptr [rsp+68h+position.m_quad+4]
    vmulss  xmm2, xmm3, dword ptr [rsp+68h+position.m_quad+8]
    vmovss  dword ptr [rbp+0], xmm1
    vmovss  dword ptr [rbp+4], xmm0
    vmovss  dword ptr [rbp+8], xmm2
  }
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
  char *v19; 
  unsigned __int64 v20; 
  __int64 v34; 
  __int64 v35; 
  hkMemoryAllocator *v39; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v40; 
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
  v40.m_data = NULL;
  v40.m_size = 0;
  v40.m_capacityAndFlags = 0x80000000;
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
  v40.m_data = v13;
  v40.m_size = v12;
  v40.m_capacityAndFlags = v14;
  HavokPhysicsFX_GetParticlePositions(worldId, pipelineInstance, v6, particleIds, &v40);
  v15 = 0i64;
  m_data = v40.m_data;
  __asm { vmovss  xmm3, cs:__real@42000000 }
  if ( v6 >= 4 )
  {
    _RAX = (char *)&v9[1].z;
    v19 = &v40.m_data[1].m_quad.m128_i8[8];
    v20 = ((unsigned __int64)(v6 - 4) >> 2) + 1;
    v15 = 4 * v20;
    do
    {
      __asm
      {
        vmulss  xmm1, xmm3, dword ptr [rcx-18h]
        vmovss  dword ptr [rax-14h], xmm1
        vmulss  xmm0, xmm3, dword ptr [rcx-14h]
        vmovss  dword ptr [rax-10h], xmm0
        vmulss  xmm2, xmm3, dword ptr [rcx-10h]
        vmovss  dword ptr [rax-0Ch], xmm2
        vmulss  xmm1, xmm3, dword ptr [rcx-8]
        vmovss  dword ptr [rax-8], xmm1
        vmulss  xmm0, xmm3, dword ptr [rcx-4]
        vmovss  dword ptr [rax-4], xmm0
        vmulss  xmm2, xmm3, dword ptr [rcx]
        vmovss  dword ptr [rax], xmm2
        vmulss  xmm1, xmm3, dword ptr [rcx+8]
        vmovss  dword ptr [rax+4], xmm1
        vmulss  xmm0, xmm3, dword ptr [rcx+0Ch]
        vmovss  dword ptr [rax+8], xmm0
        vmulss  xmm2, xmm3, dword ptr [rcx+10h]
        vmovss  dword ptr [rax+0Ch], xmm2
        vmulss  xmm1, xmm3, dword ptr [rcx+18h]
        vmovss  dword ptr [rax+10h], xmm1
        vmulss  xmm0, xmm3, dword ptr [rcx+1Ch]
        vmovss  dword ptr [rax+14h], xmm0
        vmulss  xmm2, xmm3, dword ptr [rcx+20h]
        vmovss  dword ptr [rax+18h], xmm2
      }
      _RAX += 48;
      v19 += 64;
      --v20;
    }
    while ( v20 );
  }
  if ( v15 < v6 )
  {
    _RCX = (__int64)&v9[v15].z;
    v34 = (__int64)&m_data[v15].m_quad.m128_i64[1];
    v35 = v6 - v15;
    do
    {
      __asm
      {
        vmulss  xmm1, xmm3, dword ptr [rdx-8]
        vmovss  dword ptr [rcx-8], xmm1
        vmulss  xmm0, xmm3, dword ptr [rdx-4]
        vmovss  dword ptr [rcx-4], xmm0
        vmulss  xmm2, xmm3, dword ptr [rdx]
        vmovss  dword ptr [rcx], xmm2
      }
      _RCX += 12i64;
      v34 += 16i64;
      --v35;
    }
    while ( v35 );
  }
  v39 = hkMemHeapAllocator();
  v40.m_size = 0;
  if ( v40.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v39, v40.m_data, 16, v40.m_capacityAndFlags & 0x3FFFFFFF);
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
  __asm
  {
    vmovups xmm2, xmmword ptr cs:PHYSICS_FX_MAX_POS_FLOAT4.v
    vmovups xmm1, xmmword ptr [rcx]
    vxorps  xmm0, xmm0, xmm0
    vsubps  xmm0, xmm0, xmm2
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
  int v11; 
  int v12; 
  int v13; 

  _RBX = velocity;
  PhysicsFX_AssertNotLocked();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+38h+arg_18], xmm0
  }
  if ( (v11 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+38h+arg_18], xmm0
  }
  if ( (v12 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+38h+arg_18], xmm0
  }
  if ( (v13 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 403, ASSERT_TYPE_ASSERT, "(!IS_NAN( velocity[0] ) && !IS_NAN( velocity[1] ) && !IS_NAN( velocity[2] ))", (const char *)&queryFormat, "!IS_NAN( velocity[0] ) && !IS_NAN( velocity[1] ) && !IS_NAN( velocity[2] )") )
      __debugbreak();
  }
  HavokPhysicsFX_SetParticleAngularVelocity(worldId, pipelineInstance, particleId, _RBX);
}

/*
==============
PhysicsFX_SetParticleLinearVelocities
==============
*/
void PhysicsFX_SetParticleLinearVelocities(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec3_t *velocities)
{
  int *v9; 
  __int64 v10; 
  HavokPhysicsFX_Pipeline *v11; 
  Physics_WorldId v12; 
  const vec3_t *v13; 
  hkMemoryAllocator *v15; 
  int v16; 
  int v17; 
  hkVector4f *v18; 
  int v19; 
  __int64 v20; 
  bool v28; 
  bool v29; 
  bool v30; 
  bool v32; 
  bool v34; 
  hkMemoryAllocator *v40; 
  int v44; 
  int v45; 
  int v46; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v47; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  v9 = particleIds;
  v10 = numParticles;
  v11 = pipelineInstance;
  v12 = worldId;
  PhysicsFX_AssertNotLocked();
  if ( (int)v10 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 353, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 354, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v13 = velocities;
  if ( !velocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 355, ASSERT_TYPE_ASSERT, "(velocities)", (const char *)&queryFormat, "velocities") )
    __debugbreak();
  _RSI = 0i64;
  v47.m_data = NULL;
  v47.m_size = 0;
  v47.m_capacityAndFlags = 0x80000000;
  LODWORD(velocities) = v10;
  v15 = hkMemHeapAllocator();
  v16 = (int)velocities;
  v17 = (int)velocities;
  if ( (_DWORD)velocities )
  {
    v18 = (hkVector4f *)hkMemoryAllocator::bufAlloc2(v15, 16, (int *)&velocities);
    v16 = (int)velocities;
  }
  else
  {
    v18 = NULL;
  }
  v19 = 0x80000000;
  if ( v16 )
    v19 = v16;
  v47.m_data = v18;
  v47.m_size = v17;
  v47.m_capacityAndFlags = v19;
  v20 = v10;
  if ( (int)v10 > 0 )
  {
    _RBX = &v13->v[2];
    __asm
    {
      vmovss  xmm6, cs:__real@c9742400
      vmovss  xmm7, cs:__real@49742400
      vmovss  xmm8, cs:__real@3d000000
    }
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-8]
        vmovss  [rsp+0C8h+var_98], xmm0
      }
      if ( (v44 & 0x7F800000) == 2139095040 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-4]
        vmovss  [rsp+0C8h+var_98], xmm0
      }
      if ( (v45 & 0x7F800000) == 2139095040 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  [rsp+0C8h+var_98], xmm0
      }
      v28 = (v46 & 0x7F800000u) < 0x7F800000;
      v29 = (v46 & 0x7F800000u) <= 0x7F800000;
      if ( (v46 & 0x7F800000) == 2139095040 )
      {
LABEL_41:
        v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 361, ASSERT_TYPE_ASSERT, "(!IS_NAN( velocities[particleIt][0] ) && !IS_NAN( velocities[particleIt][1] ) && !IS_NAN( velocities[particleIt][2] ))", (const char *)&queryFormat, "!IS_NAN( velocities[particleIt][0] ) && !IS_NAN( velocities[particleIt][1] ) && !IS_NAN( velocities[particleIt][2] )");
        v28 = 0;
        v29 = !v30;
        if ( v30 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-8]
        vcomiss xmm0, xmm6
      }
      if ( v28 )
        goto LABEL_42;
      __asm { vcomiss xmm0, xmm7 }
      if ( !v29 )
      {
LABEL_42:
        v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 362, ASSERT_TYPE_ASSERT, "(velocities[particleIt][0] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][0] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocities[particleIt][0] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][0] <= PHYSICS_FX_MAX_SPEED");
        v29 = !v32;
        if ( v32 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-4]
        vcomiss xmm0, xmm6
        vcomiss xmm0, xmm7
      }
      if ( !v29 )
      {
        v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 363, ASSERT_TYPE_ASSERT, "(velocities[particleIt][1] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][1] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocities[particleIt][1] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][1] <= PHYSICS_FX_MAX_SPEED");
        v29 = !v34;
        if ( v34 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vcomiss xmm0, xmm6
        vcomiss xmm0, xmm7
      }
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 364, ASSERT_TYPE_ASSERT, "(velocities[particleIt][2] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][2] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocities[particleIt][2] >= -PHYSICS_FX_MAX_SPEED && velocities[particleIt][2] <= PHYSICS_FX_MAX_SPEED") )
        __debugbreak();
      _RAX = v47.m_data;
      __asm
      {
        vmulss  xmm1, xmm8, dword ptr [rbx-8]
        vmovss  dword ptr [rsi+rax], xmm1
        vmulss  xmm0, xmm8, dword ptr [rbx-4]
        vmovss  dword ptr [rsi+rax+4], xmm0
        vmulss  xmm2, xmm8, dword ptr [rbx]
        vmovss  dword ptr [rsi+rax+8], xmm2
      }
      _RAX[_RSI++].m_quad.m128_i32[3] = 0;
      _RBX += 3;
      --v20;
    }
    while ( v20 );
    LODWORD(v10) = numParticles;
    v9 = particleIds;
    v11 = pipelineInstance;
    v12 = worldId;
  }
  HavokPhysicsFX_SetParticleLinearVelocities(v12, v11, v10, v9, &v47);
  v40 = hkMemHeapAllocator();
  v47.m_size = 0;
  if ( v47.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v40, v47.m_data, 16, v47.m_capacityAndFlags & 0x3FFFFFFF);
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_58]
    vmovaps xmm7, [rsp+0C8h+var_68]
    vmovaps xmm8, [rsp+0C8h+var_78]
  }
}

/*
==============
PhysicsFX_SetParticleLinearVelocity
==============
*/
void PhysicsFX_SetParticleLinearVelocity(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec3_t *velocity)
{
  bool v11; 
  bool v12; 
  bool v13; 
  bool v15; 
  bool v17; 
  int v24; 
  int v25; 
  int v26; 
  hkVector4f velocitya; 

  _RBX = velocity;
  PhysicsFX_AssertNotLocked();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_21;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_21;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+88h+var_58], xmm0
  }
  v11 = (v26 & 0x7F800000u) < 0x7F800000;
  v12 = (v26 & 0x7F800000u) <= 0x7F800000;
  if ( (v26 & 0x7F800000) == 2139095040 )
  {
LABEL_21:
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 335, ASSERT_TYPE_ASSERT, "(!IS_NAN( velocity[0] ) && !IS_NAN( velocity[1] ) && !IS_NAN( velocity[2] ))", (const char *)&queryFormat, "!IS_NAN( velocity[0] ) && !IS_NAN( velocity[1] ) && !IS_NAN( velocity[2] )");
    v11 = 0;
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vcomiss xmm0, cs:__real@c9742400
  }
  if ( v11 )
    goto LABEL_22;
  __asm { vcomiss xmm0, cs:__real@49742400 }
  if ( !v12 )
  {
LABEL_22:
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 336, ASSERT_TYPE_ASSERT, "(velocity[0] >= -PHYSICS_FX_MAX_SPEED && velocity[0] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocity[0] >= -PHYSICS_FX_MAX_SPEED && velocity[0] <= PHYSICS_FX_MAX_SPEED");
    v12 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm0, cs:__real@c9742400
    vcomiss xmm0, cs:__real@49742400
  }
  if ( !v12 )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 337, ASSERT_TYPE_ASSERT, "(velocity[1] >= -PHYSICS_FX_MAX_SPEED && velocity[1] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocity[1] >= -PHYSICS_FX_MAX_SPEED && velocity[1] <= PHYSICS_FX_MAX_SPEED");
    v12 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcomiss xmm0, cs:__real@c9742400
    vcomiss xmm0, cs:__real@49742400
  }
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 338, ASSERT_TYPE_ASSERT, "(velocity[2] >= -PHYSICS_FX_MAX_SPEED && velocity[2] <= PHYSICS_FX_MAX_SPEED)", (const char *)&queryFormat, "velocity[2] >= -PHYSICS_FX_MAX_SPEED && velocity[2] <= PHYSICS_FX_MAX_SPEED") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm2, xmm3, dword ptr [rbx+4]
    vmulss  xmm0, xmm3, dword ptr [rbx]
    vmulss  xmm1, xmm3, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+88h+velocity.m_quad+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+88h+velocity.m_quad+0Ch], xmm2
    vmovss  dword ptr [rsp+88h+velocity.m_quad], xmm0
    vmovss  dword ptr [rsp+88h+velocity.m_quad+8], xmm1
  }
  HavokPhysicsFX_SetParticleLinearVelocity(worldId, pipelineInstance, particleId, &velocitya);
}

/*
==============
PhysicsFX_SetParticleOrientation
==============
*/
void PhysicsFX_SetParticleOrientation(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, const vec4_t *orientation)
{
  int v12; 
  int v13; 
  int v14; 
  int v15; 

  _RBX = orientation;
  PhysicsFX_AssertNotLocked();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+38h+arg_18], xmm0
  }
  if ( (v12 & 0x7F800000) == 2139095040 )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+38h+arg_18], xmm0
  }
  if ( (v13 & 0x7F800000) == 2139095040 )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+38h+arg_18], xmm0
  }
  if ( (v14 & 0x7F800000) == 2139095040 )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+38h+arg_18], xmm0
  }
  if ( (v15 & 0x7F800000) == 2139095040 )
  {
LABEL_10:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 377, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientation[0] ) && !IS_NAN( orientation[1] ) && !IS_NAN( orientation[2] ) && !IS_NAN( orientation[3] ))", (const char *)&queryFormat, "!IS_NAN( orientation[0] ) && !IS_NAN( orientation[1] ) && !IS_NAN( orientation[2] ) && !IS_NAN( orientation[3] )") )
      __debugbreak();
  }
  HavokPhysicsFX_SetParticleOrientation(worldId, pipelineInstance, particleId, _RBX);
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
  bool v11; 
  bool v12; 
  bool v13; 
  bool v15; 
  bool v17; 
  int v24; 
  int v25; 
  int v26; 
  hkVector4f positiona; 

  _RBX = position;
  PhysicsFX_AssertNotLocked();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_21;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_21;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+88h+var_58], xmm0
  }
  v11 = (v26 & 0x7F800000u) < 0x7F800000;
  v12 = (v26 & 0x7F800000u) <= 0x7F800000;
  if ( (v26 & 0x7F800000) == 2139095040 )
  {
LABEL_21:
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 268, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", (const char *)&queryFormat, "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )");
    v11 = 0;
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vcomiss xmm0, cs:__real@c8000000
  }
  if ( v11 )
    goto LABEL_22;
  __asm { vcomiss xmm0, cs:__real@48000000 }
  if ( !v12 )
  {
LABEL_22:
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 269, ASSERT_TYPE_ASSERT, "(position[0] >= -PHYSICS_FX_MAX_POS && position[0] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "position[0] >= -PHYSICS_FX_MAX_POS && position[0] <= PHYSICS_FX_MAX_POS");
    v12 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm0, cs:__real@c8000000
    vcomiss xmm0, cs:__real@48000000
  }
  if ( !v12 )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 270, ASSERT_TYPE_ASSERT, "(position[1] >= -PHYSICS_FX_MAX_POS && position[1] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "position[1] >= -PHYSICS_FX_MAX_POS && position[1] <= PHYSICS_FX_MAX_POS");
    v12 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcomiss xmm0, cs:__real@c8000000
    vcomiss xmm0, cs:__real@48000000
  }
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 271, ASSERT_TYPE_ASSERT, "(position[2] >= -PHYSICS_FX_MAX_POS && position[2] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "position[2] >= -PHYSICS_FX_MAX_POS && position[2] <= PHYSICS_FX_MAX_POS") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm2, xmm3, dword ptr [rbx+4]
    vmulss  xmm0, xmm3, dword ptr [rbx]
    vmulss  xmm1, xmm3, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+88h+position.m_quad+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+88h+position.m_quad+0Ch], xmm2
    vmovss  dword ptr [rsp+88h+position.m_quad], xmm0
    vmovss  dword ptr [rsp+88h+position.m_quad+8], xmm1
  }
  HavokPhysicsFX_SetParticlePosition(worldId, pipelineInstance, particleId, &positiona);
}

/*
==============
PhysicsFX_SetParticlePositions
==============
*/
void PhysicsFX_SetParticlePositions(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int numParticles, int *particleIds, const vec3_t *positions)
{
  int *v9; 
  __int64 v10; 
  HavokPhysicsFX_Pipeline *v11; 
  Physics_WorldId v12; 
  const vec3_t *v13; 
  hkMemoryAllocator *v15; 
  int v16; 
  int v17; 
  hkVector4f *v18; 
  int v19; 
  __int64 v20; 
  bool v28; 
  bool v29; 
  bool v30; 
  bool v32; 
  bool v34; 
  hkMemoryAllocator *v40; 
  int v44; 
  int v45; 
  int v46; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v47; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  v9 = particleIds;
  v10 = numParticles;
  v11 = pipelineInstance;
  v12 = worldId;
  PhysicsFX_AssertNotLocked();
  if ( (int)v10 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 286, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 287, ASSERT_TYPE_ASSERT, "(particleIds)", (const char *)&queryFormat, "particleIds") )
    __debugbreak();
  v13 = positions;
  if ( !positions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 288, ASSERT_TYPE_ASSERT, "(positions)", (const char *)&queryFormat, "positions") )
    __debugbreak();
  _RSI = 0i64;
  v47.m_data = NULL;
  v47.m_size = 0;
  v47.m_capacityAndFlags = 0x80000000;
  LODWORD(positions) = v10;
  v15 = hkMemHeapAllocator();
  v16 = (int)positions;
  v17 = (int)positions;
  if ( (_DWORD)positions )
  {
    v18 = (hkVector4f *)hkMemoryAllocator::bufAlloc2(v15, 16, (int *)&positions);
    v16 = (int)positions;
  }
  else
  {
    v18 = NULL;
  }
  v19 = 0x80000000;
  if ( v16 )
    v19 = v16;
  v47.m_data = v18;
  v47.m_size = v17;
  v47.m_capacityAndFlags = v19;
  v20 = v10;
  if ( (int)v10 > 0 )
  {
    _RBX = &v13->v[2];
    __asm
    {
      vmovss  xmm6, cs:__real@c8000000
      vmovss  xmm7, cs:__real@48000000
      vmovss  xmm8, cs:__real@3d000000
    }
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-8]
        vmovss  [rsp+0C8h+var_98], xmm0
      }
      if ( (v44 & 0x7F800000) == 2139095040 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-4]
        vmovss  [rsp+0C8h+var_98], xmm0
      }
      if ( (v45 & 0x7F800000) == 2139095040 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  [rsp+0C8h+var_98], xmm0
      }
      v28 = (v46 & 0x7F800000u) < 0x7F800000;
      v29 = (v46 & 0x7F800000u) <= 0x7F800000;
      if ( (v46 & 0x7F800000) == 2139095040 )
      {
LABEL_41:
        v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 294, ASSERT_TYPE_ASSERT, "(!IS_NAN( positions[particleIt][0] ) && !IS_NAN( positions[particleIt][1] ) && !IS_NAN( positions[particleIt][2] ))", (const char *)&queryFormat, "!IS_NAN( positions[particleIt][0] ) && !IS_NAN( positions[particleIt][1] ) && !IS_NAN( positions[particleIt][2] )");
        v28 = 0;
        v29 = !v30;
        if ( v30 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-8]
        vcomiss xmm0, xmm6
      }
      if ( v28 )
        goto LABEL_42;
      __asm { vcomiss xmm0, xmm7 }
      if ( !v29 )
      {
LABEL_42:
        v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 295, ASSERT_TYPE_ASSERT, "(positions[particleIt][0] >= -PHYSICS_FX_MAX_POS && positions[particleIt][0] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "positions[particleIt][0] >= -PHYSICS_FX_MAX_POS && positions[particleIt][0] <= PHYSICS_FX_MAX_POS");
        v29 = !v32;
        if ( v32 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-4]
        vcomiss xmm0, xmm6
        vcomiss xmm0, xmm7
      }
      if ( !v29 )
      {
        v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 296, ASSERT_TYPE_ASSERT, "(positions[particleIt][1] >= -PHYSICS_FX_MAX_POS && positions[particleIt][1] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "positions[particleIt][1] >= -PHYSICS_FX_MAX_POS && positions[particleIt][1] <= PHYSICS_FX_MAX_POS");
        v29 = !v34;
        if ( v34 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vcomiss xmm0, xmm6
        vcomiss xmm0, xmm7
      }
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 297, ASSERT_TYPE_ASSERT, "(positions[particleIt][2] >= -PHYSICS_FX_MAX_POS && positions[particleIt][2] <= PHYSICS_FX_MAX_POS)", (const char *)&queryFormat, "positions[particleIt][2] >= -PHYSICS_FX_MAX_POS && positions[particleIt][2] <= PHYSICS_FX_MAX_POS") )
        __debugbreak();
      _RAX = v47.m_data;
      __asm
      {
        vmulss  xmm1, xmm8, dword ptr [rbx-8]
        vmovss  dword ptr [rsi+rax], xmm1
        vmulss  xmm0, xmm8, dword ptr [rbx-4]
        vmovss  dword ptr [rsi+rax+4], xmm0
        vmulss  xmm2, xmm8, dword ptr [rbx]
        vmovss  dword ptr [rsi+rax+8], xmm2
      }
      _RAX[_RSI++].m_quad.m128_i32[3] = 0;
      _RBX += 3;
      --v20;
    }
    while ( v20 );
    LODWORD(v10) = numParticles;
    v9 = particleIds;
    v11 = pipelineInstance;
    v12 = worldId;
  }
  HavokPhysicsFX_SetParticlePositions(v12, v11, v10, v9, &v47);
  v40 = hkMemHeapAllocator();
  v47.m_size = 0;
  if ( v47.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v40, v47.m_data, 16, v47.m_capacityAndFlags & 0x3FFFFFFF);
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_58]
    vmovaps xmm7, [rsp+0C8h+var_68]
    vmovaps xmm8, [rsp+0C8h+var_78]
  }
}

/*
==============
PhysicsFX_SetParticleScale
==============
*/

void __fastcall PhysicsFX_SetParticleScale(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipelineInstance, int particleId, double scale)
{
  int v14; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  PhysicsFX_AssertNotLocked();
  __asm { vmovss  [rsp+48h+arg_18], xmm6 }
  if ( (v14 & 0x7F800000) != 2139095040 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsfx.cpp", 309, ASSERT_TYPE_ASSERT, "(!IS_NAN( scale ) && scale > 0.f)", (const char *)&queryFormat, "!IS_NAN( scale ) && scale > 0.f") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm6; scale
    vmovaps xmm6, [rsp+48h+var_18]
  }
  HavokPhysicsFX_SetParticleScale(worldId, pipelineInstance, particleId, *(float *)&_XMM3);
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
  int NumPipelineInstances; 
  int NumAllocatedParticles; 
  const char *v14; 
  const char *v15; 

  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2sd xmm6, xmm6, rax
  }
  if ( (hkStopwatch::getTicksPerSecond() & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm6, xmm6, cs:__real@43f0000000000000 }
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(hkStopwatch::getTickCounter() - TickCounter) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vdivsd  xmm0, xmm0, xmm6
    vcvtsd2ss xmm0, xmm0, xmm0; time
  }
  PhysicsFX_Debug_SetLastFrameTime(*(float *)&_XMM0);
  NumPipelineInstances = HavokPhysicsFX_GetNumPipelineInstances(worldId);
  NumAllocatedParticles = HavokPhysicsFX_GetNumAllocatedParticles(worldId);
  if ( NumPipelineInstances > 10 )
  {
    v14 = j_va("PhysFX Pipelines:%i max:%i", (unsigned int)NumPipelineInstances, 10i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PHYS_FX_PIPELINE_INSTANCES, 3000, v14, NumPipelineInstances);
  }
  if ( NumAllocatedParticles > 500 )
  {
    v15 = j_va("PhysFX Allocated Particles:%i max:%i", (unsigned int)NumAllocatedParticles, 500i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PHYS_FX_ALLOCATED_PARTICLES, 3000, v15, NumAllocatedParticles);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
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

