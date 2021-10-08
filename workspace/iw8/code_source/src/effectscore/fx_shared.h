/*
==============
Particle_AddDeferredPhysicsFXCreate
==============
*/

void __fastcall Particle_AddDeferredPhysicsFXCreate(LocalClientNum_t localClientNum, const ParticleModulePhysicsLight *pModule, ParticleData *pParticleData, unsigned int particleOffset, unsigned int particleCountEmit, ParticleState *pParticleState, const ParticleEmitter *pEmitterOwner, ParticleSystemHandle particleSystemHandle)
{
  ?Particle_AddDeferredPhysicsFXCreate@@YAXW4LocalClientNum_t@@PEBUParticleModulePhysicsLight@@PEAUParticleData@@IIPEAVParticleState@@PEBVParticleEmitter@@W4ParticleSystemHandle@@@Z(localClientNum, pModule, pParticleData, particleOffset, particleCountEmit, pParticleState, pEmitterOwner, particleSystemHandle);
}

/*
==============
FX_IsValidFxId
==============
*/

bool __fastcall FX_IsValidFxId(int fxId)
{
  return ?FX_IsValidFxId@@YA_NH@Z(fxId);
}

/*
==============
Particle_AddDeferredPhysicsFXDestroy
==============
*/

void __fastcall Particle_AddDeferredPhysicsFXDestroy(LocalClientNum_t localClientNum, unsigned int physicsWorldId, HavokPhysicsFX_Pipeline *physicsFXPipeline, int physicsFXParticleID)
{
  ?Particle_AddDeferredPhysicsFXDestroy@@YAXW4LocalClientNum_t@@IPEAVHavokPhysicsFX_Pipeline@@H@Z(localClientNum, physicsWorldId, physicsFXPipeline, physicsFXParticleID);
}

/*
==============
FXRegisteredDef::FXRegisteredDef
==============
*/

void __fastcall FXRegisteredDef::FXRegisteredDef(FXRegisteredDef *this)
{
  ??0FXRegisteredDef@@QEAA@XZ(this);
}

/*
==============
FX_IsValidFxId
==============
*/
bool FX_IsValidFxId(int fxId)
{
  if ( fxId <= 0 )
    return 0;
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 98, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  return fxId < BgDynamicLimits::ms_data.m_effectNamesCount;
}

/*
==============
FXRegisteredDef::FXRegisteredDef
==============
*/
void FXRegisteredDef::FXRegisteredDef(FXRegisteredDef *this)
{
  this->m_particleSystemDef = NULL;
}

/*
==============
Particle_AddDeferredPhysicsFXCreate
==============
*/
void Particle_AddDeferredPhysicsFXCreate(LocalClientNum_t localClientNum, const ParticleModulePhysicsLight *pModule, ParticleData *pParticleData, unsigned int particleOffset, unsigned int particleCountEmit, ParticleState *pParticleState, const ParticleEmitter *pEmitterOwner, ParticleSystemHandle particleSystemHandle)
{
  __int64 v8; 
  __int64 v12; 
  volatile signed __int32 *v13; 
  unsigned __int32 v14; 
  ParticleDeferredPhysicsFXCreateData *v15; 
  __int64 v16; 
  __int64 v17; 

  v8 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 493, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 494, ASSERT_TYPE_ASSERT, "(pModule)", (const char *)&queryFormat, "pModule") )
    __debugbreak();
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 495, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 496, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 497, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
    __debugbreak();
  v12 = v8;
  v13 = &g_particleDeferredPhysicsFXCreateListCount[v8];
  if ( ((unsigned __int8)v13 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_particleDeferredPhysicsFXCreateListCount[v8]) )
    __debugbreak();
  v14 = _InterlockedExchangeAdd(v13, 1u);
  if ( v14 >= 0x800 )
  {
    LODWORD(v17) = 2048;
    LODWORD(v16) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 500, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v15 = &g_particleDeferredPhysicsFXCreateList[v12][v14];
  v15->particleCountEmit = particleCountEmit;
  v15->pParticleEmitterOwner = pEmitterOwner;
  v15->particleSystemHandle = particleSystemHandle;
  v15->pModule = pModule;
  v15->pParticleData = pParticleData;
  v15->particleOffset = particleOffset;
  v15->pParticleState = pParticleState;
}

/*
==============
Particle_AddDeferredPhysicsFXDestroy
==============
*/
void Particle_AddDeferredPhysicsFXDestroy(LocalClientNum_t localClientNum, unsigned int physicsWorldId, HavokPhysicsFX_Pipeline *physicsFXPipeline, int physicsFXParticleID)
{
  __int64 v4; 
  __int64 v8; 
  volatile signed __int32 *v9; 
  signed __int32 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 516, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !physicsFXPipeline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 517, ASSERT_TYPE_ASSERT, "(physicsFXPipeline)", (const char *)&queryFormat, "physicsFXPipeline") )
    __debugbreak();
  v8 = v4;
  v9 = &g_particleDeferredPhysicsFXDestroyListCount[v4];
  if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_particleDeferredPhysicsFXDestroyListCount[v4]) )
    __debugbreak();
  v10 = _InterlockedExchangeAdd(v9, 1u);
  if ( (unsigned int)v10 >= 0x800 )
  {
    LODWORD(v13) = 2048;
    LODWORD(v12) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 522, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v11 = v10 + (v8 << 11);
  g_particleDeferredPhysicsFXDestroyList[0][v11].physicsFXPipeline = physicsFXPipeline;
  g_particleDeferredPhysicsFXDestroyList[0][v11].physicsWorldId = physicsWorldId;
  g_particleDeferredPhysicsFXDestroyList[0][v11].physicsFXParticleID = physicsFXParticleID;
}

