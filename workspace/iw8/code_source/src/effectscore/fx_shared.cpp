/*
==============
FXRegisteredDef::GetName
==============
*/

const char *__fastcall FXRegisteredDef::GetName(FXRegisteredDef *this)
{
  return ?GetName@FXRegisteredDef@@QEBAPEBDXZ(this);
}

/*
==============
CG_Particle_ClearParticleDeferredPhysics
==============
*/

void __fastcall CG_Particle_ClearParticleDeferredPhysics(LocalClientNum_t localClientNum, bool myChanges)
{
  ?CG_Particle_ClearParticleDeferredPhysics@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, myChanges);
}

/*
==============
FX_ConvertDecalTime
==============
*/

bool __fastcall FX_ConvertDecalTime(float editorDecalTime, unsigned __int16 *outConvertedValue)
{
  return ?FX_ConvertDecalTime@@YA_NMPEAG@Z(editorDecalTime, outConvertedValue);
}

/*
==============
CG_Particle_ProcessFxPhysicsObjectRequestsWork
==============
*/

void __fastcall CG_Particle_ProcessFxPhysicsObjectRequestsWork(const void *const cmdInfo)
{
  ?CG_Particle_ProcessFxPhysicsObjectRequestsWork@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Particle_AddDeferredPhysicsRayCastCreate
==============
*/

int __fastcall Particle_AddDeferredPhysicsRayCastCreate(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int brushMask)
{
  return ?Particle_AddDeferredPhysicsRayCastCreate@@YAHW4LocalClientNum_t@@AEBTvec3_t@@1AEBUBounds@@H@Z(localClientNum, start, end, bounds, brushMask);
}

/*
==============
Particle_AddDeferredPhysicsFXPipelineDestroy
==============
*/

void __fastcall Particle_AddDeferredPhysicsFXPipelineDestroy(LocalClientNum_t localClientNum, Physics_WorldId physicsWorldId, HavokPhysicsFX_Pipeline *physicsFXPipelineInstance, unsigned int numParticles, ParticleState *pParticleState, const ParticleEmitter *pParticleEmitterOwner, ParticleSystemHandle particleSystemHandle)
{
  ?Particle_AddDeferredPhysicsFXPipelineDestroy@@YAXW4LocalClientNum_t@@W4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@IPEAVParticleState@@PEBVParticleEmitter@@W4ParticleSystemHandle@@@Z(localClientNum, physicsWorldId, physicsFXPipelineInstance, numParticles, pParticleState, pParticleEmitterOwner, particleSystemHandle);
}

/*
==============
CG_Particle_AddProcessFxPhysicsObjectRequestsWorkerCmd
==============
*/

void __fastcall CG_Particle_AddProcessFxPhysicsObjectRequestsWorkerCmd(LocalClientNum_t localClientNum)
{
  ?CG_Particle_AddProcessFxPhysicsObjectRequestsWorkerCmd@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_LoadEffect
==============
*/

void __fastcall FX_LoadEffect(const char *effectName, FXRegisteredDef *outDef)
{
  ?FX_LoadEffect@@YAXPEBDPEAVFXRegisteredDef@@@Z(effectName, outDef);
}

/*
==============
FX_ResetParticleDeferredState
==============
*/

void __fastcall FX_ResetParticleDeferredState(LocalClientNum_t localClientNum)
{
  ?FX_ResetParticleDeferredState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_LoadEffectCombinedDef
==============
*/

void __fastcall FX_LoadEffectCombinedDef(const char *effectName, FxCombinedDef *outDef)
{
  ?FX_LoadEffectCombinedDef@@YAXPEBDAEAUFxCombinedDef@@@Z(effectName, outDef);
}

/*
==============
CG_DoneWithEffect
==============
*/

void __fastcall CG_DoneWithEffect(LocalClientNum_t localClientNum, ParticleSystemHandle particleSystemHandle)
{
  ?CG_DoneWithEffect@@YAXW4LocalClientNum_t@@W4ParticleSystemHandle@@@Z(localClientNum, particleSystemHandle);
}

/*
==============
Particle_CombinedDefGetName
==============
*/

const char *__fastcall Particle_CombinedDefGetName(const FxCombinedDef *def)
{
  return ?Particle_CombinedDefGetName@@YAPEBDAEBUFxCombinedDef@@@Z(def);
}

/*
==============
CG_Particle_ProcessFxPhysicsObjectRequests
==============
*/

void __fastcall CG_Particle_ProcessFxPhysicsObjectRequests(LocalClientNum_t localClientNum)
{
  ?CG_Particle_ProcessFxPhysicsObjectRequests@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FxMarkSpawnData::SetDefaults
==============
*/

void __fastcall FxMarkSpawnData::SetDefaults(FxMarkSpawnData *this)
{
  ?SetDefaults@FxMarkSpawnData@@QEAAXXZ(this);
}

/*
==============
CG_DoneWithEffect
==============
*/
void CG_DoneWithEffect(LocalClientNum_t localClientNum, ParticleSystemHandle particleSystemHandle)
{
  ParticleSystem *v3; 
  unsigned __int32 v4; 
  __int64 v5; 
  ParticleSystemFlags m_flags; 
  ParticleManager *ParticleManager; 

  v3 = NULL;
  v4 = 0;
  if ( g_particleSystemsGeneration[4096 * (__int64)(int)localClientNum + (particleSystemHandle & 0xFFF)].__all32 == particleSystemHandle )
    v4 = particleSystemHandle & 0xFFF;
  v5 = ((__int64)(int)localClientNum << 12) + v4;
  if ( g_particleSystems[0][v5] >= (ParticleSystem *)0x1000 )
    v3 = g_particleSystems[0][v5];
  if ( v3 )
  {
    v3->m_flags &= ~0x80ui64;
    m_flags = v3->m_flags;
    v3->m_fxEnt = 2047;
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    if ( (m_flags & 0x400000) != 0 )
      ParticleManager::KillLoopedFxEntSystem(ParticleManager, v3);
    else
      ParticleManager::KillSystem(ParticleManager, v3);
  }
}

/*
==============
CG_Particle_AddProcessFxPhysicsObjectRequestsWorkerCmd
==============
*/
void CG_Particle_AddProcessFxPhysicsObjectRequestsWorkerCmd(LocalClientNum_t localClientNum)
{
  LocalClientNum_t data; 

  data = localClientNum;
  Sys_AddWorkerCmd(WRKCMD_PROCESS_DEFERRED_PARTICLE_PHYSICS, &data);
}

/*
==============
CG_Particle_ClearParticleDeferredPhysics
==============
*/
void CG_Particle_ClearParticleDeferredPhysics(LocalClientNum_t localClientNum, bool myChanges)
{
  __int64 v2; 
  __int64 v4; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 778, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  CG_Particle_DestroyFxPhysicsObjects((LocalClientNum_t)v2);
  v4 = v2;
  if ( g_particleDeferredPhysicsDestroyListCount[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 782, ASSERT_TYPE_ASSERT, "(g_particleDeferredPhysicsDestroyListCount[localClientNum] == 0)", (const char *)&queryFormat, "g_particleDeferredPhysicsDestroyListCount[localClientNum] == 0") )
    __debugbreak();
  if ( g_particleDeferredPhysicsFXDestroyListCount[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 783, ASSERT_TYPE_ASSERT, "(g_particleDeferredPhysicsFXDestroyListCount[localClientNum] == 0)", (const char *)&queryFormat, "g_particleDeferredPhysicsFXDestroyListCount[localClientNum] == 0") )
    __debugbreak();
  if ( g_particleDeferredPhysicsFXPipelineDestroyListCount[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 784, ASSERT_TYPE_ASSERT, "(g_particleDeferredPhysicsFXPipelineDestroyListCount[localClientNum] == 0)", (const char *)&queryFormat, "g_particleDeferredPhysicsFXPipelineDestroyListCount[localClientNum] == 0") )
    __debugbreak();
  if ( g_particleDeferredPhysicsGlassDestroyListCount[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 785, ASSERT_TYPE_ASSERT, "(g_particleDeferredPhysicsGlassDestroyListCount[localClientNum] == 0)", (const char *)&queryFormat, "g_particleDeferredPhysicsGlassDestroyListCount[localClientNum] == 0") )
    __debugbreak();
  g_particleDeferredPhysicsCreateListCount[v4] = 0;
  g_particleDeferredPhysicsFXCreateListCount[v4] = 0;
  if ( !myChanges )
    g_particleDeferredPhysicsFXPipelineCreateListCount[v4] = 0;
  g_particleDeferredPhysicsGlassCreateListCount[v4] = 0;
  g_particleDeferredPhysicsRayCastCreateListCount[v4] = 0;
}

/*
==============
CG_Particle_CreateFxPhysicsObjects
==============
*/
void CG_Particle_CreateFxPhysicsObjects(LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int64 v4; 
  __int64 v5; 
  Physics_WorldId v6; 
  __int64 v7; 
  __int64 v8; 
  ParticleDeferredPhysicsCreateData *v9; 
  double FixedMemoryPoolUsage; 
  unsigned int *flags; 
  int physicsRefId; 
  const XModel *pModel; 
  int v14; 
  int Ref; 
  const PhysicsAsset *physicsAsset; 
  int v17; 
  float value; 
  double InstantiatiationPenetrationDepthForAsset; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int *v22; 
  signed int v23; 
  unsigned int v24; 
  unsigned int m_serialAndIndex; 
  int v26; 
  float v27; 
  int v28; 
  float v29; 
  float v30; 
  hknpWorld *world; 
  void (__fastcall *onImpactCB)(Physics_SimpleCollisionCallback_Data *); 
  Particle_OnImpactCBData onImpactData; 
  ntl::fixed_map<unsigned int,Particle_OnImpactCBData,2048,ntl::less<unsigned int,unsigned int> > *v34; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v37; 
  ntl::red_black_tree_node_base *v38; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *mp_node; 
  bool v40; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> >,ntl::pair<unsigned int,Particle_OnImpactCBData> *,ntl::pair<unsigned int,Particle_OnImpactCBData> &> *inserted; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *i; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *v43; 
  unsigned int *v44; 
  bool v45; 
  int v46; 
  int v47; 
  __int64 v48; 
  __int64 v49; 
  const ParticleEmitter **p_pParticleEmitterOwner; 
  unsigned int v51; 
  __int64 v52; 
  ParticleSystem *v53; 
  __int64 v54; 
  ParticleSystemFlags m_flags; 
  const ParticleSystemDef *Def; 
  ParticleState *v57; 
  volatile int v58; 
  const ParticleEmitter **v59; 
  __int64 v60; 
  ParticleModulePhysicsLight *v61; 
  volatile int v62; 
  ParticleDeferredPhysicsGlassCreateData *v63; 
  unsigned __int64 v64; 
  const char *v65; 
  __int64 j; 
  __int64 v67; 
  char *v68; 
  __int64 ignoreSystems; 
  __int64 add; 
  signed int v71; 
  int v72; 
  Physics_WorldId worldId; 
  int NumRigidBodys; 
  unsigned int *p_instanceId; 
  __int64 v77; 
  __int64 v78; 
  hknpBodyId result; 
  unsigned __int64 v80; 
  Physics_InstantiateShapeOverride shapeOverride; 
  __int128 v82; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> >,ntl::pair<unsigned int,Particle_OnImpactCBData> *,ntl::pair<unsigned int,Particle_OnImpactCBData> &> v83; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> >,ntl::pair<unsigned int,Particle_OnImpactCBData> *,ntl::pair<unsigned int,Particle_OnImpactCBData> &> v84; 
  int v85[4]; 
  int v86[4]; 
  ntl::pair<unsigned int,Particle_OnImpactCBData> r_element; 
  __int128 v88; 
  __int128 v89; 
  __int128 v90; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 401, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  Profile2_UpdateEntry(89);
  v80 = (unsigned __int64)&dword_14FDE8134 & 3;
  if ( ((unsigned __int8)&dword_14FDE8134 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8134) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8134);
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx create physics");
  Profile_Begin(655);
  v78 = v4;
  v5 = v4;
  if ( g_particleDeferredPhysicsCreateListCount[v4] >= 0x801u )
  {
    LODWORD(add) = 2049;
    LODWORD(ignoreSystems) = g_particleDeferredPhysicsCreateListCount[v4];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsCreateListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_LIST_MAX + 1 )", "g_particleDeferredPhysicsCreateListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_LIST_MAX + 1\n\t%i not in [0, %i)", ignoreSystems, add) )
      __debugbreak();
  }
  if ( g_particleDeferredPhysicsFXCreateListCount[v4] >= 0x801u )
  {
    LODWORD(add) = 2049;
    LODWORD(ignoreSystems) = g_particleDeferredPhysicsFXCreateListCount[v4];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 408, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsFXCreateListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX + 1 )", "g_particleDeferredPhysicsFXCreateListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX + 1\n\t%i not in [0, %i)", ignoreSystems, add) )
      __debugbreak();
  }
  if ( g_particleDeferredPhysicsGlassCreateListCount[v4] >= 0x801u )
  {
    LODWORD(add) = 2049;
    LODWORD(ignoreSystems) = g_particleDeferredPhysicsGlassCreateListCount[v4];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 409, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsGlassCreateListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX + 1 )", "g_particleDeferredPhysicsGlassCreateListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX + 1\n\t%i not in [0, %i)", ignoreSystems, add) )
      __debugbreak();
  }
  if ( g_particleDeferredPhysicsRayCastCreateListCount[v4] >= 0x801u )
  {
    LODWORD(add) = 2049;
    LODWORD(ignoreSystems) = g_particleDeferredPhysicsRayCastCreateListCount[v4];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 410, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsRayCastCreateListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_RAY_CAST_LIST_MAX + 1 )", "g_particleDeferredPhysicsRayCastCreateListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_RAY_CAST_LIST_MAX + 1\n\t%i not in [0, %i)", ignoreSystems, add) )
      __debugbreak();
  }
  v72 = 0;
  v6 = 3 * v4 + 3;
  worldId = 3 * v4 + 4;
  if ( g_particleDeferredPhysicsCreateListCount[v4] > 0 )
  {
    v7 = 0i64;
    v90 = v1;
    v89 = v2;
    v88 = v3;
    v8 = v4 << 11;
    v77 = 0i64;
    while ( 1 )
    {
      v9 = &g_particleDeferredPhysicsCreateList[0][v8 + v7];
      if ( v9->state )
        break;
LABEL_147:
      ++v77;
      v45 = v72 + 1 < g_particleDeferredPhysicsCreateListCount[v5];
      v7 = v77;
      ++v72;
      if ( !v45 )
        goto LABEL_148;
    }
    FixedMemoryPoolUsage = Physics_GetFixedMemoryPoolUsage(v6);
    if ( *(float *)&FixedMemoryPoolUsage > particle_physics_memory_threshold->current.value )
    {
      flags = v9->flags;
      if ( flags )
      {
        *flags &= ~2u;
        *v9->flags |= 0x40u;
      }
LABEL_145:
      v9->physicsInstanceID->createListIndex = -1;
      v9->state = PARTICLE_DEFERRED_PHYSICS_INVALID;
      goto LABEL_146;
    }
    if ( v9->state != PARTICLE_DEFERRED_PHYSICS_PENDING_CREATION && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 433, ASSERT_TYPE_ASSERT, "(pDeferredPhysicsData->state == ParticleDeferredPhysicsCreateData::PARTICLE_DEFERRED_PHYSICS_PENDING_CREATION)", (const char *)&queryFormat, "pDeferredPhysicsData->state == ParticleDeferredPhysicsCreateData::PARTICLE_DEFERRED_PHYSICS_PENDING_CREATION") )
      __debugbreak();
    physicsRefId = v9->physicsRefId;
    pModel = v9->pModel;
    p_instanceId = &v9->physicsInstanceID->instanceId;
    if ( physicsRefId >= 0x400000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 441, ASSERT_TYPE_ASSERT, "(physicsRefId < g_PhysicsMaxNumSupportedParticles)", (const char *)&queryFormat, "physicsRefId < g_PhysicsMaxNumSupportedParticles") )
      __debugbreak();
    if ( (physicsRefId < 0 || (unsigned int)physicsRefId > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)physicsRefId, "signed", physicsRefId) )
      __debugbreak();
    v14 = physicsRefId >> 16;
    if ( (physicsRefId >> 16 < 0 || (unsigned int)v14 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", BYTE2(physicsRefId), "signed", v14) )
      __debugbreak();
    Ref = Physics_MakeRef(Physics_RefSystem_Particles, Physics_RelationshipSystem_None, BYTE2(physicsRefId), physicsRefId);
    physicsAsset = pModel->physicsAsset;
    v17 = Ref;
    shapeOverride.customShape = NULL;
    shapeOverride.shapeOverride = -1;
    shapeOverride.physicsAssetAddendum = NULL;
    shapeOverride.shapeAddendum = -1;
    shapeOverride.massProperties = NULL;
    *(_WORD *)&shapeOverride.overrideMass = 0;
    shapeOverride.overrideTensor = 0;
    if ( particle_physics_doPenetrationTest->current.enabled )
    {
      value = particle_physics_allowedPenetrationDepth->current.value;
      InstantiatiationPenetrationDepthForAsset = Physics_GetInstantiatiationPenetrationDepthForAsset(v6, physicsAsset, &v9->position, &v9->quat, &shapeOverride, 0);
      if ( *(float *)&InstantiatiationPenetrationDepthForAsset > value || *(float *)&InstantiatiationPenetrationDepthForAsset < 0.0 )
      {
        Particle_ClearPendingPhysicsData(v9);
LABEL_146:
        v8 = v5 << 11;
        goto LABEL_147;
      }
    }
    v20 = Physics_InstantiateAsset(v6, pModel, physicsAsset, v17, &v9->position, &v9->quat, 1, 0, 0, &shapeOverride, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeNone, 0);
    *p_instanceId = v20;
    if ( v20 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 466, ASSERT_TYPE_ASSERT, "(physicsInstanceID->instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstanceID->instanceId != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v21 = Physics_InstantiateAsset(worldId, pModel, physicsAsset, v17, &v9->position, &v9->quat, 1, 0, 0, &shapeOverride, Physics_InstantiationForceTypeKeyframedAtMost, Physics_InstantiationFilterTypeNone, 0);
    v22 = p_instanceId;
    p_instanceId[1] = v21;
    if ( v21 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 468, ASSERT_TYPE_ASSERT, "(physicsInstanceID->detailInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstanceID->detailInstanceId != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v23 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys(v6, *p_instanceId);
    v71 = 0;
    if ( NumRigidBodys <= 0 )
    {
LABEL_143:
      v44 = v9->flags;
      if ( v44 )
      {
        *v44 &= ~2u;
        *v9->flags |= 0x40u;
      }
      goto LABEL_145;
    }
    while ( 1 )
    {
      v24 = *v22;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v6 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", add) )
          __debugbreak();
      }
      if ( v24 == -1 )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", add) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", add) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", add) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, v6, v24, v23)->m_serialAndIndex;
      v26 = m_serialAndIndex & 0xFFFFFF;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 475, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 368, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v6 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 369, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", add) )
          __debugbreak();
      }
      if ( v26 == 0xFFFFFF )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 370, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", add) )
          __debugbreak();
      }
      if ( (LODWORD(v9->velocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v9->velocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v9->velocity.v[2]) & 0x7F800000) == 2139095040 )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 371, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", add) )
          __debugbreak();
      }
      if ( (LODWORD(v9->angularVelocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v9->angularVelocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v9->angularVelocity.v[2]) & 0x7F800000) == 2139095040 )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 372, ASSERT_TYPE_ASSERT, "(!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan angVel", "!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] )", add) )
          __debugbreak();
      }
      v27 = 0.03125 * v9->velocity.v[0];
      *(float *)&v28 = 0.03125 * v9->velocity.v[2];
      *(float *)&v86[1] = 0.03125 * v9->velocity.v[1];
      v85[0] = LODWORD(v9->angularVelocity.v[0]);
      v29 = v9->angularVelocity.v[2];
      *(float *)v86 = v27;
      v30 = v9->angularVelocity.v[1];
      *(float *)&v85[2] = v29;
      v86[2] = v28;
      *(float *)&v86[3] = 0.0;
      *(float *)&v85[1] = v30;
      *(float *)&v85[3] = 0.0;
      if ( (unsigned int)v6 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 485, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", add) )
          __debugbreak();
      }
      if ( v26 == 0xFFFFFF )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 486, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", add) )
          __debugbreak();
      }
      world = HavokPhysics_GetMutableWorld(v6)->world;
      if ( !world )
      {
        LODWORD(add) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 490, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", add) )
          __debugbreak();
      }
      ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, int *, _DWORD))world->setBodyVelocity)(&world->hknpWorldWriter, m_serialAndIndex, v86, v85, 0);
      onImpactCB = v9->onImpactCB;
      if ( !onImpactCB )
        goto LABEL_142;
      Physics_SimpleCollisionCallback_RegisterBody(v6, m_serialAndIndex, onImpactCB);
      onImpactData = v9->onImpactData;
      v34 = &g_physicsBodyToParticleIDMap[v5];
      mp_parent = v34->m_endNodeBase.mp_parent;
      p_m_endNodeBase = &v34->m_endNodeBase;
      v37 = &v34->m_endNodeBase;
      v38 = mp_parent;
      while ( v38 )
      {
        if ( v38[1].m_color < m_serialAndIndex )
        {
          v38 = v38->mp_right;
        }
        else
        {
          v37 = v38;
          v38 = v38->mp_left;
        }
      }
      if ( v37 != p_m_endNodeBase )
      {
        mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)&v34->m_endNodeBase;
        if ( m_serialAndIndex >= v37[1].m_color )
          mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)v37;
        if ( mp_node != p_m_endNodeBase )
        {
          if ( !mp_node )
            goto LABEL_139;
          goto LABEL_141;
        }
      }
      r_element.first = m_serialAndIndex;
      v82 = 0ui64;
      v40 = 1;
      r_element.second = 0ui64;
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v40 = m_serialAndIndex < mp_parent[1].m_color;
        if ( m_serialAndIndex >= mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)p_m_endNodeBase;
      if ( v40 )
      {
        if ( p_m_endNodeBase == v34->m_endNodeBase.mp_left )
        {
          inserted = ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Particle_OnImpactCBData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData>>,2048,8>,ntl::return_pair_first<unsigned int,Particle_OnImpactCBData>,ntl::less<unsigned int,unsigned int>>::insert_node(&g_physicsBodyToParticleIDMap[v5], &v83, p_m_endNodeBase, &r_element, 1, 0);
LABEL_118:
          mp_node = inserted->mp_node;
          goto LABEL_138;
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
                v43 = mp_node;
                mp_node = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)mp_node->mp_parent;
              }
              while ( v43 == mp_node->mp_left );
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
      if ( mp_node->m_element.first < m_serialAndIndex )
      {
        inserted = ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Particle_OnImpactCBData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData>>,2048,8>,ntl::return_pair_first<unsigned int,Particle_OnImpactCBData>,ntl::less<unsigned int,unsigned int>>::insert_node(&g_physicsBodyToParticleIDMap[v5], &v84, p_m_endNodeBase, &r_element, 0, 0);
        goto LABEL_118;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\map\\map.h", 87, ASSERT_TYPE_ASSERT, "( retVal.second )", (const char *)&queryFormat, "retVal.second") )
        __debugbreak();
LABEL_138:
      if ( !mp_node )
      {
LABEL_139:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
      }
LABEL_141:
      v23 = v71;
      mp_node->m_element.second = onImpactData;
LABEL_142:
      v22 = p_instanceId;
      v71 = ++v23;
      if ( v23 >= NumRigidBodys )
        goto LABEL_143;
    }
  }
LABEL_148:
  v46 = 2048;
  v47 = 2048;
  if ( g_particleDeferredPhysicsFXPipelineCreateListCount[v5] < 2048 )
    v47 = g_particleDeferredPhysicsFXPipelineCreateListCount[v5];
  v48 = v47;
  if ( v47 > 0 )
  {
    v49 = v5 << 12;
    p_pParticleEmitterOwner = &g_particleDeferredPhysicsFXPipelineCreateList[v5][0].pParticleEmitterOwner;
    do
    {
      v51 = 0;
      if ( g_particleSystemsGeneration[v49 + ((_DWORD)p_pParticleEmitterOwner[1] & 0xFFF)].__all32 == *((_DWORD *)p_pParticleEmitterOwner + 2) )
        v51 = (_DWORD)p_pParticleEmitterOwner[1] & 0xFFF;
      v52 = v51;
      v53 = NULL;
      v54 = v49 + v52;
      if ( g_particleSystems[0][v54] >= (ParticleSystem *)0x1000 )
        v53 = g_particleSystems[0][v54];
      if ( v53 )
      {
        m_flags = v53->m_flags;
        if ( (m_flags & 0xD0070) != 0 )
        {
          Def = ParticleSystem::GetDef(v53);
          Com_PrintWarning(21, "VFX: Trying to request a Havok FX pipeline for a system with invalid flags: %s (0x%16llx)\n", Def->name, m_flags);
        }
        else if ( ((*p_pParticleEmitterOwner)->m_flags & 0x40) == 0 )
        {
          v57 = (ParticleState *)*(p_pParticleEmitterOwner - 1);
          if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 520, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
            __debugbreak();
          if ( !ParticleState::UsesPhysicsFX(v57) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 521, ASSERT_TYPE_ASSERT, "(pParticleState->UsesPhysicsFX())", (const char *)&queryFormat, "pParticleState->UsesPhysicsFX()") )
            __debugbreak();
          if ( v57->m_physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 522, ASSERT_TYPE_ASSERT, "(pParticleState->GetPhysicsFXPipelineInstance() == nullptr)", (const char *)&queryFormat, "pParticleState->GetPhysicsFXPipelineInstance() == nullptr") )
            __debugbreak();
          ParticleState::RequestPhysicsPipelineInstance(v57);
        }
      }
      p_pParticleEmitterOwner += 3;
      --v48;
    }
    while ( v48 );
    v5 = v78;
    v46 = 2048;
  }
  v58 = 0;
  if ( g_particleDeferredPhysicsFXCreateListCount[v5] > 0 )
  {
    v59 = &g_particleDeferredPhysicsFXCreateList[v5][0].pParticleEmitterOwner;
    do
    {
      v60 = (v5 << 12) + ((_DWORD)v59[1] & 0xFFF);
      if ( g_particleSystemsGeneration[v60].__all32 == *((_DWORD *)v59 + 2) && g_particleSystems[0][v60] >= (ParticleSystem *)0x1000 && ((*v59)->m_flags & 0x40) == 0 )
      {
        v61 = (ParticleModulePhysicsLight *)*(v59 - 4);
        if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 540, ASSERT_TYPE_ASSERT, "(pModulePhysicsLight)", (const char *)&queryFormat, "pModulePhysicsLight") )
          __debugbreak();
        ParticleModulePhysicsLight::CreatePhysicsParticles(v61, (ParticleData *)*(v59 - 3), *((_DWORD *)v59 - 4), *((_DWORD *)v59 - 3), (ParticleState *)*(v59 - 1));
      }
      ++v58;
      v59 += 6;
    }
    while ( v58 < g_particleDeferredPhysicsFXCreateListCount[v5] );
    v46 = 2048;
  }
  v62 = 0;
  if ( g_particleDeferredPhysicsGlassCreateListCount[v5] > 0 )
  {
    v63 = g_particleDeferredPhysicsGlassCreateList[v5];
    do
    {
      if ( !v63->skipCreation )
        Glass_CreatePhysicsFromDeferredData(v63, v6);
      ++v62;
      ++v63;
    }
    while ( v62 < g_particleDeferredPhysicsGlassCreateListCount[v5] );
  }
  Profile2_UpdateEntry(91);
  v64 = (unsigned __int64)&dword_14FDE813C & 3;
  if ( ((unsigned __int8)&dword_14FDE813C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE813C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE813C);
  v65 = j_va("vfx ray cast (%d)", (unsigned int)g_particleDeferredPhysicsRayCastCreateListCount[v5]);
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, v65);
  if ( g_particleDeferredPhysicsRayCastCreateListCount[v5] < 2048 )
    v46 = g_particleDeferredPhysicsRayCastCreateListCount[v5];
  if ( v46 > 0 )
  {
    for ( j = 0i64; j < v46; ++j )
    {
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(add) = 2;
        LODWORD(ignoreSystems) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 616, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ignoreSystems, add) )
          __debugbreak();
      }
      v67 = g_particleDeferredPhysicsRayCastIndex[v5] + 2 * v5;
      g_particleDeferredPhysicsRayCastResultValid[0][v67] = 1;
      v68 = (char *)g_particleDeferredPhysicsRayCastCreateList + 294912 * v67 + 144 * j;
      Particle_WorldTrace((trace_t *)v68, (const vec3_t *)(v68 + 88), (const vec3_t *)(v68 + 100), (const Bounds *)(v68 + 112), *((_DWORD *)v68 + 34));
    }
    v64 = (unsigned __int64)&dword_14FDE813C & 3;
  }
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(91);
  if ( v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE813C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE813C);
  g_particleDeferredPhysicsCreateListCount[v5] = 0;
  g_particleDeferredPhysicsFXCreateListCount[v5] = 0;
  g_particleDeferredPhysicsFXPipelineCreateListCount[v5] = 0;
  g_particleDeferredPhysicsGlassCreateListCount[v5] = 0;
  g_particleDeferredPhysicsRayCastCreateListCount[v5] = 0;
  g_particleDeferredPhysicsRayCastIndex[v5] = ((unsigned __int8)g_particleDeferredPhysicsRayCastIndex[v5] - 1) & 1;
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(89);
  if ( v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8134) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8134);
}

/*
==============
CG_Particle_DestroyFxPhysicsObjects
==============
*/
void CG_Particle_DestroyFxPhysicsObjects(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  Physics_WorldId v3; 
  volatile int v4; 
  Physics_WorldId v5; 
  ParticleDeferredPhysicsGlassDestroyData *v6; 
  volatile int v7; 
  void (__fastcall **p_onImpactCB)(Physics_SimpleCollisionCallback_Data *); 
  void (__fastcall *v9)(Physics_SimpleCollisionCallback_Data *); 
  unsigned int v10; 
  unsigned int v11; 
  signed int v12; 
  __int64 v13; 
  char **v14; 
  ntl::red_black_tree_node_base *v15; 
  unsigned int m_serialAndIndex; 
  char *v17; 
  ntl::red_black_tree_node_base *v18; 
  volatile int v19; 
  volatile int v20; 
  HavokPhysicsFX_Pipeline **p_physicsFXPipeline; 
  Physics_WorldId v22; 
  HavokPhysicsFX_Pipeline *v23; 
  volatile int v24; 
  __int64 v25; 
  const char *v26; 
  const ParticleEmitter **p_pParticleEmitterOwner; 
  unsigned int v28; 
  __int64 v29; 
  ParticleSystem *v30; 
  __int64 v31; 
  const ParticleEmitter *v32; 
  HavokPhysicsFX_Pipeline *v33; 
  const ParticleSystemDef *Def; 
  ParticleState *v35; 
  __int64 v36; 
  __int64 v37; 
  int particleIds; 
  hknpBodyId result; 
  void (__fastcall *v40)(Physics_SimpleCollisionCallback_Data *); 
  void (__fastcall **v41)(Physics_SimpleCollisionCallback_Data *); 
  __int64 v42; 
  ntl::red_black_tree_node_base *next; 
  unsigned int v44; 
  volatile int v45; 
  int NumRigidBodys; 
  Physics_WorldId v47; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 588, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  Profile_Begin(656);
  v42 = v1;
  v2 = v1;
  if ( g_particleDeferredPhysicsDestroyListCount[v1] >= 0x801u )
  {
    LODWORD(v37) = 2049;
    LODWORD(v36) = g_particleDeferredPhysicsDestroyListCount[v1];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 592, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsDestroyListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_LIST_MAX + 1 )", "g_particleDeferredPhysicsDestroyListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_LIST_MAX + 1\n\t%i not in [0, %i)", v36, v37) )
      __debugbreak();
  }
  if ( g_particleDeferredPhysicsFXDestroyListCount[v1] >= 0x801u )
  {
    LODWORD(v37) = 2049;
    LODWORD(v36) = g_particleDeferredPhysicsFXDestroyListCount[v1];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 593, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsFXDestroyListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX + 1 )", "g_particleDeferredPhysicsFXDestroyListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX + 1\n\t%i not in [0, %i)", v36, v37) )
      __debugbreak();
  }
  if ( g_particleDeferredPhysicsFXPipelineDestroyListCount[v1] >= 0x801u )
  {
    LODWORD(v37) = 2049;
    LODWORD(v36) = g_particleDeferredPhysicsFXPipelineDestroyListCount[v1];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 594, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsFXPipelineDestroyListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_FX_PIPELINE_LIST_MAX + 1 )", "g_particleDeferredPhysicsFXPipelineDestroyListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_FX_PIPELINE_LIST_MAX + 1\n\t%i not in [0, %i)", v36, v37) )
      __debugbreak();
  }
  if ( g_particleDeferredPhysicsGlassDestroyListCount[v1] >= 0x801u )
  {
    LODWORD(v37) = 2049;
    LODWORD(v36) = g_particleDeferredPhysicsGlassDestroyListCount[v1];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 595, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsGlassDestroyListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX + 1 )", "g_particleDeferredPhysicsGlassDestroyListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX + 1\n\t%i not in [0, %i)", v36, v37) )
      __debugbreak();
  }
  v3 = 3 * v1 + 4;
  v4 = 0;
  v47 = v3;
  v5 = 3 * v1 + 3;
  if ( g_particleDeferredPhysicsGlassDestroyListCount[v1] > 0 )
  {
    v6 = g_particleDeferredPhysicsGlassDestroyList[v1];
    do
    {
      Physics_DestroyConstraint(v5, v6->physicsInstance, 0, 1);
      ++v4;
      ++v6;
    }
    while ( v4 < g_particleDeferredPhysicsGlassDestroyListCount[v2] );
  }
  v7 = 0;
  v45 = 0;
  if ( g_particleDeferredPhysicsDestroyListCount[v2] > 0 )
  {
    p_onImpactCB = &g_particleDeferredPhysicsDestroyList[v2][0].onImpactCB;
    v41 = p_onImpactCB;
    do
    {
      v9 = *p_onImpactCB;
      v10 = *((_DWORD *)p_onImpactCB - 3);
      v11 = *((_DWORD *)p_onImpactCB - 4);
      v44 = v10;
      v40 = v9;
      if ( v9 )
      {
        v12 = 0;
        NumRigidBodys = Physics_GetNumRigidBodys(v5, v11);
        if ( NumRigidBodys > 0 )
        {
          v13 = 114744 * v2;
          v14 = (char **)((char *)&g_physicsBodyToParticleIDMap[0].m_endNodeBase.mp_parent + v13);
          v15 = (ntl::red_black_tree_node_base *)((char *)&g_physicsBodyToParticleIDMap[0].m_endNodeBase + v13);
          do
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v5 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
            {
              LODWORD(v37) = v5;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
                __debugbreak();
            }
            if ( v11 == -1 )
            {
              LODWORD(v37) = v5;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v37) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
            {
              LODWORD(v37) = v5;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v37) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
            {
              LODWORD(v37) = v5;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v37) )
                __debugbreak();
            }
            m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, v5, v11, v12)->m_serialAndIndex;
            if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 624, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            Physics_SimpleCollisionCallback_UnregisterBody(v5, m_serialAndIndex, v9, 1);
            v17 = *v14;
            if ( *v14 )
            {
              v18 = (ntl::red_black_tree_node_base *)((char *)&g_physicsBodyToParticleIDMap[0].m_endNodeBase + v13);
              do
              {
                if ( *((_DWORD *)v17 + 8) < m_serialAndIndex )
                {
                  v17 = (char *)*((_QWORD *)v17 + 3);
                }
                else
                {
                  v18 = (ntl::red_black_tree_node_base *)v17;
                  v17 = (char *)*((_QWORD *)v17 + 2);
                }
              }
              while ( v17 );
              if ( v18 != v15 && m_serialAndIndex >= v18[1].m_color )
              {
                if ( !*(unsigned __int64 *)((char *)&g_physicsBodyToParticleIDMap[0].m_size + v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
                  __debugbreak();
                if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                  __debugbreak();
                next = ntl::red_black_tree_node_base::get_next(v18);
                if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
                  __debugbreak();
                if ( v18 == v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
                  __debugbreak();
                ntl::red_black_tree_node_base::rebalance_for_erase(v18, (ntl::red_black_tree_node_base **)((char *)&g_physicsBodyToParticleIDMap[0].m_endNodeBase.mp_parent + v13), (ntl::red_black_tree_node_base **)((char *)&g_physicsBodyToParticleIDMap[0].m_endNodeBase.mp_left + v13), (ntl::red_black_tree_node_base **)((char *)&g_physicsBodyToParticleIDMap[0].m_endNodeBase.mp_right + v13));
                if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
                  __debugbreak();
                *(_QWORD *)&v18->m_color = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&g_physicsBodyToParticleIDMap[0].m_freelist.m_head.mp_next + v13);
                *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&g_physicsBodyToParticleIDMap[0].m_freelist.m_head.mp_next + v13) = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v18;
                --*(unsigned __int64 *)((char *)&g_physicsBodyToParticleIDMap[0].m_size + v13);
              }
              v9 = v40;
            }
            ++v12;
          }
          while ( v12 < NumRigidBodys );
          p_onImpactCB = v41;
          v2 = v42;
          v7 = v45;
          v3 = v47;
        }
        v10 = v44;
      }
      if ( v11 != -1 )
        Physics_DestroyInstance(v5, v11, 0);
      if ( v10 != -1 )
        Physics_DestroyInstance(v3, v10, 0);
      ++v7;
      v19 = g_particleDeferredPhysicsDestroyListCount[v2];
      p_onImpactCB += 3;
      v45 = v7;
      v41 = p_onImpactCB;
    }
    while ( v7 < v19 );
  }
  v20 = 0;
  if ( g_particleDeferredPhysicsFXDestroyListCount[v2] > 0 )
  {
    p_physicsFXPipeline = &g_particleDeferredPhysicsFXDestroyList[v2][0].physicsFXPipeline;
    do
    {
      v22 = *((_DWORD *)p_physicsFXPipeline - 2);
      v23 = *p_physicsFXPipeline;
      particleIds = *((_DWORD *)p_physicsFXPipeline + 2);
      if ( PhysicsFX_HasPipeline(v22, v23) )
        PhysicsFX_DestroyParticles(v22, *p_physicsFXPipeline, 1, &particleIds);
      ++v20;
      p_physicsFXPipeline += 3;
    }
    while ( v20 < g_particleDeferredPhysicsFXDestroyListCount[v2] );
  }
  v24 = 0;
  if ( g_particleDeferredPhysicsFXPipelineDestroyListCount[v2] > 0 )
  {
    v25 = v2 << 12;
    v26 = "pEmitterOwner";
    p_pParticleEmitterOwner = &g_particleDeferredPhysicsFXPipelineDestroyList[v2][0].pParticleEmitterOwner;
    do
    {
      v28 = 0;
      v29 = v25 + ((_DWORD)p_pParticleEmitterOwner[1] & 0xFFF);
      if ( g_particleSystemsGeneration[v29].__all32 == *((_DWORD *)p_pParticleEmitterOwner + 2) )
        v28 = (_DWORD)p_pParticleEmitterOwner[1] & 0xFFF;
      v30 = NULL;
      v31 = v25 + v28;
      if ( g_particleSystems[0][v31] >= (ParticleSystem *)0x1000 )
        v30 = g_particleSystems[0][v31];
      if ( v30 )
      {
        if ( (v30->m_flags & 0x8000) != 0 )
        {
          v30->m_flags &= ~0x8000ui64;
        }
        else
        {
          v32 = *p_pParticleEmitterOwner;
          if ( !*p_pParticleEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 689, ASSERT_TYPE_ASSERT, "(pEmitterOwner)", (const char *)&queryFormat, "pEmitterOwner") )
            __debugbreak();
          if ( (v32->m_flags & 0x40) == 0 )
          {
            v35 = (ParticleState *)*(p_pParticleEmitterOwner - 1);
            if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 724, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
              __debugbreak();
            if ( v35->m_pipelinePendingDeletion )
            {
              if ( !ParticleState::UsesPhysicsFX(v35) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 735, ASSERT_TYPE_ASSERT, "(pParticleState->UsesPhysicsFX())", (const char *)&queryFormat, "pParticleState->UsesPhysicsFX()") )
                __debugbreak();
              if ( !v35->m_physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 736, ASSERT_TYPE_ASSERT, "(pParticleState->GetPhysicsFXPipelineInstance() != nullptr)", (const char *)&queryFormat, "pParticleState->GetPhysicsFXPipelineInstance() != nullptr") )
                __debugbreak();
              ParticleState::KillPhysicsPipelineInstance(v35);
            }
            goto LABEL_111;
          }
        }
      }
      v33 = (HavokPhysicsFX_Pipeline *)*(p_pParticleEmitterOwner - 3);
      if ( v33 )
      {
        PhysicsFX_ReleasePipeline(*((Physics_WorldId *)p_pParticleEmitterOwner - 8), v33, *((_DWORD *)p_pParticleEmitterOwner - 4));
      }
      else if ( v30 )
      {
        Def = ParticleSystem::GetDef(v30);
        Com_PrintWarning(21, "VFX WARNING: The effect %s is trying to destroy a NULL pipeline\n", Def->name);
      }
      else
      {
        Com_PrintWarning(21, "VFX WARNING: Trying to destroy a NULL pipeline with an invalid system\n", v29, v26);
      }
LABEL_111:
      ++v24;
      p_pParticleEmitterOwner += 6;
      v26 = "pEmitterOwner";
    }
    while ( v24 < g_particleDeferredPhysicsFXPipelineDestroyListCount[v2] );
  }
  g_particleDeferredPhysicsDestroyListCount[v2] = 0;
  g_particleDeferredPhysicsFXDestroyListCount[v2] = 0;
  g_particleDeferredPhysicsFXPipelineDestroyListCount[v2] = 0;
  g_particleDeferredPhysicsGlassDestroyListCount[v2] = 0;
  Profile_EndInternal(NULL);
}

/*
==============
CG_Particle_ProcessFxPhysicsObjectRequests
==============
*/
void CG_Particle_ProcessFxPhysicsObjectRequests(LocalClientNum_t localClientNum)
{
  CG_Particle_DestroyFxPhysicsObjects(localClientNum);
  CG_Particle_CreateFxPhysicsObjects(localClientNum);
}

/*
==============
CG_Particle_ProcessFxPhysicsObjectRequestsWork
==============
*/
void CG_Particle_ProcessFxPhysicsObjectRequestsWork(const void *const cmdInfo)
{
  LocalClientNum_t v2; 

  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 810, ASSERT_TYPE_ASSERT, "(cmdInfo)", (const char *)&queryFormat, "cmdInfo") )
    __debugbreak();
  v2 = *(_DWORD *)cmdInfo;
  CG_Particle_DestroyFxPhysicsObjects(v2);
  CG_Particle_CreateFxPhysicsObjects(v2);
}

/*
==============
FX_ConvertDecalTime
==============
*/
char FX_ConvertDecalTime(float editorDecalTime, unsigned __int16 *outConvertedValue)
{
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 2 }
  if ( (unsigned int)(int)*(float *)&_XMM2 > 0xFFFF )
    return 0;
  if ( outConvertedValue )
    *outConvertedValue = (int)*(float *)&_XMM2;
  return 1;
}

/*
==============
FX_LoadEffect
==============
*/
void FX_LoadEffect(const char *effectName, FXRegisteredDef *outDef)
{
  __int64 v4; 
  char *v5; 
  int v6; 
  const char *v7; 
  __int64 v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  const ParticleSystemDef *v15; 
  char *fmt; 
  __int64 v17; 
  char dest[128]; 

  if ( !outDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 145, ASSERT_TYPE_ASSERT, "(outDef)", (const char *)&queryFormat, "outDef") )
    __debugbreak();
  v4 = -1i64;
  do
    ++v4;
  while ( effectName[v4] );
  if ( (unsigned int)v4 >= 0x80 )
  {
    LODWORD(v17) = 127;
    LODWORD(fmt) = v4;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14432D140, 130i64, effectName, fmt, v17);
  }
  v5 = strrchr_0(effectName, 46);
  v6 = (int)v5;
  if ( v5 )
  {
    v7 = v5 + 1;
    if ( v5 == (char *)-1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 25, ASSERT_TYPE_ASSERT, "(pExtension)", (const char *)&queryFormat, "pExtension") )
      __debugbreak();
    v8 = 3i64;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v9 = (const char *)("vfx" - v7);
    do
    {
      v10 = *(unsigned __int8 *)v7;
      v11 = v8;
      v12 = (unsigned __int8)(v7++)[(_QWORD)v9];
      --v8;
      if ( !v11 )
        break;
      if ( v10 != v12 )
      {
        v13 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v13 = v10;
        v10 = v13;
        v14 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v14 = v12;
        if ( v10 != v14 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 165, ASSERT_TYPE_ASSERT, "(Particle_IsVFXExtension( extension + 1 ))", "%s\n\tVFX: Effect name %s does not have the valid extension %s", "Particle_IsVFXExtension( extension + 1 )", effectName, ".vfx") )
            __debugbreak();
          break;
        }
      }
    }
    while ( v10 );
    Core_strncpy(dest, 0x80ui64, effectName, (unsigned int)(v6 - (_DWORD)effectName));
  }
  else
  {
    Core_strcpy(dest, 0x80ui64, effectName);
  }
  v15 = ParticleSystem_Register(dest);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 211, ASSERT_TYPE_ASSERT, "(pSystem)", "%s\n\tERROR: Could not find the VFX file %s. Please ensure it has been correctly included in the level CSV file.", "pSystem", effectName) )
    __debugbreak();
  outDef->m_particleSystemDef = v15;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 221, ASSERT_TYPE_ASSERT, "(outDef->GetParticleSystemDef())", (const char *)&queryFormat, "outDef->GetParticleSystemDef()") )
    __debugbreak();
  if ( !outDef->m_particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 225, ASSERT_TYPE_ASSERT, "(outDef->IsValid())", (const char *)&queryFormat, "outDef->IsValid()") )
    __debugbreak();
}

/*
==============
FX_LoadEffectCombinedDef
==============
*/
void FX_LoadEffectCombinedDef(const char *effectName, FxCombinedDef *outDef)
{
  FXRegisteredDef outDefa; 

  outDefa.m_particleSystemDef = NULL;
  FX_LoadEffect(effectName, &outDefa);
  outDef->particleSystemDef = outDefa.m_particleSystemDef;
}

/*
==============
FX_ResetParticleDeferredState
==============
*/
void FX_ResetParticleDeferredState(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ntl::fixed_map<unsigned int,Particle_OnImpactCBData,2048,ntl::less<unsigned int,unsigned int> > *v2; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 

  v1 = localClientNum;
  v2 = &g_physicsBodyToParticleIDMap[localClientNum];
  if ( v2->m_size )
  {
    mp_parent = v2->m_endNodeBase.mp_parent;
    if ( mp_parent )
    {
      do
      {
        ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Particle_OnImpactCBData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData>>,2048,8>,ntl::return_pair_first<unsigned int,Particle_OnImpactCBData>,ntl::less<unsigned int,unsigned int>>::erase_tree(v2, (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)mp_parent->mp_right);
        mp_left = mp_parent->mp_left;
        *(_QWORD *)&mp_parent->m_color = v2->m_freelist.m_head.mp_next;
        v2->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
        mp_parent = mp_left;
      }
      while ( mp_left );
    }
    v2->m_endNodeBase.mp_parent = NULL;
    v2->m_endNodeBase.mp_left = &v2->m_endNodeBase;
    v2->m_endNodeBase.mp_right = &v2->m_endNodeBase;
    v2->m_size = 0i64;
  }
  memset_0(g_particleDeferredPhysicsCreateList[v1], 0, sizeof(ParticleDeferredPhysicsCreateData[2048]));
  g_particleDeferredPhysicsCreateListCount[v1] = 0;
  memset_0(g_particleDeferredPhysicsDestroyList[v1], 0, sizeof(ParticleDeferredPhysicsDestroyData[2048]));
  g_particleDeferredPhysicsDestroyListCount[v1] = 0;
  memset_0(g_particleDeferredPhysicsFXCreateList[v1], 0, sizeof(ParticleDeferredPhysicsFXCreateData[2048]));
  g_particleDeferredPhysicsFXCreateListCount[v1] = 0;
  memset_0(g_particleDeferredPhysicsFXDestroyList[v1], 0, sizeof(ParticleDeferredPhysicsFXDestroyData[2048]));
  g_particleDeferredPhysicsFXDestroyListCount[v1] = 0;
  memset_0(g_particleDeferredPhysicsFXPipelineCreateList[v1], 0, sizeof(ParticleDeferredPhysicsFXPipelineCreateData[2048]));
  g_particleDeferredPhysicsFXPipelineCreateListCount[v1] = 0;
  memset_0(g_particleDeferredPhysicsFXPipelineDestroyList[v1], 0, sizeof(ParticleDeferredPhysicsFXPipelineDestroyData[2048]));
  g_particleDeferredPhysicsFXPipelineDestroyListCount[v1] = 0;
  memset_0(g_particleDeferredPhysicsGlassCreateList[v1], 0, 0x18000ui64);
  g_particleDeferredPhysicsGlassCreateListCount[v1] = 0;
  memset_0(g_particleDeferredPhysicsGlassDestroyList[v1], 0, 0x18000ui64);
  g_particleDeferredPhysicsGlassDestroyListCount[v1] = 0;
  memset_0(g_particleDeferredPhysicsRayCastCreateList[v1], 0, 0x18000ui64);
  g_particleDeferredPhysicsRayCastCreateListCount[v1] = 0;
  g_particleDeferredPhysicsRayCastIndex[v1] = 0;
  *(_WORD *)&g_particleDeferredPhysicsRayCastResultValid[v1][0] = 0;
}

/*
==============
FXRegisteredDef::GetName
==============
*/
const char *FXRegisteredDef::GetName(FXRegisteredDef *this)
{
  if ( this->m_particleSystemDef )
    return this->m_particleSystemDef->name;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 135, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to access a name on an invalid effect") )
    __debugbreak();
  return 0i64;
}

/*
==============
Particle_AddDeferredPhysicsFXPipelineDestroy
==============
*/
void Particle_AddDeferredPhysicsFXPipelineDestroy(LocalClientNum_t localClientNum, Physics_WorldId physicsWorldId, HavokPhysicsFX_Pipeline *physicsFXPipelineInstance, unsigned int numParticles, ParticleState *pParticleState, const ParticleEmitter *pParticleEmitterOwner, ParticleSystemHandle particleSystemHandle)
{
  __int64 v7; 
  __int64 v11; 
  volatile signed __int32 *v12; 
  unsigned __int32 v13; 
  ParticleDeferredPhysicsFXPipelineDestroyData *v14; 
  __int64 v15; 
  __int64 v16; 

  v7 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 827, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 828, ASSERT_TYPE_ASSERT, "(physicsFXPipelineInstance)", (const char *)&queryFormat, "physicsFXPipelineInstance") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 829, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !pParticleState->m_pipelinePendingDeletion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 830, ASSERT_TYPE_ASSERT, "(pParticleState->IsPipelinePendingDeletion())", (const char *)&queryFormat, "pParticleState->IsPipelinePendingDeletion()") )
    __debugbreak();
  if ( !ParticleState::UsesPhysicsFX(pParticleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 831, ASSERT_TYPE_ASSERT, "(pParticleState->UsesPhysicsFX())", (const char *)&queryFormat, "pParticleState->UsesPhysicsFX()") )
    __debugbreak();
  if ( !pParticleState->m_physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 832, ASSERT_TYPE_ASSERT, "(pParticleState->GetPhysicsFXPipelineInstance())", (const char *)&queryFormat, "pParticleState->GetPhysicsFXPipelineInstance()") )
    __debugbreak();
  if ( !pParticleEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 833, ASSERT_TYPE_ASSERT, "(pParticleEmitterOwner)", (const char *)&queryFormat, "pParticleEmitterOwner") )
    __debugbreak();
  if ( (pParticleEmitterOwner->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 834, ASSERT_TYPE_ASSERT, "(pParticleEmitterOwner->HasParticleData())", (const char *)&queryFormat, "pParticleEmitterOwner->HasParticleData()") )
    __debugbreak();
  v11 = v7;
  v12 = &g_particleDeferredPhysicsFXPipelineDestroyListCount[v7];
  if ( ((unsigned __int8)v12 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_particleDeferredPhysicsFXPipelineDestroyListCount[v7]) )
    __debugbreak();
  v13 = _InterlockedExchangeAdd(v12, 1u);
  if ( v13 >= 0x800 )
  {
    LODWORD(v16) = 2048;
    LODWORD(v15) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 837, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_FX_PIPELINE_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_FX_PIPELINE_LIST_MAX\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v14 = &g_particleDeferredPhysicsFXPipelineDestroyList[v11][v13];
  v14->pParticleEmitterOwner = pParticleEmitterOwner;
  v14->physicsWorldId = physicsWorldId;
  v14->physicsFXPipelineInstance = physicsFXPipelineInstance;
  v14->numParticles = numParticles;
  v14->pParticleState = pParticleState;
  v14->particleSystemHandle = particleSystemHandle;
}

/*
==============
Particle_AddDeferredPhysicsRayCastCreate
==============
*/
__int64 Particle_AddDeferredPhysicsRayCastCreate(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int brushMask)
{
  __int64 v5; 
  volatile signed __int32 *v9; 
  unsigned __int32 v10; 
  __int64 result; 
  __int64 v12; 
  __int64 v13; 
  __int64 v15; 
  int v16; 

  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v16 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 752, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v16) )
      __debugbreak();
  }
  v9 = &g_particleDeferredPhysicsRayCastCreateListCount[v5];
  if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_particleDeferredPhysicsRayCastCreateListCount[v5]) )
    __debugbreak();
  v10 = _InterlockedExchangeAdd(v9, 1u);
  if ( v10 < 0x800 )
  {
    if ( (unsigned int)v5 >= 2 )
    {
      LODWORD(v15) = 2;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 616, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
    }
    v12 = (int)v10 + ((g_particleDeferredPhysicsRayCastIndex[v5] + 2 * v5) << 11);
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].start.v[0] = start->v[0];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].start.v[1] = start->v[1];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].start.v[2] = start->v[2];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].end.v[0] = end->v[0];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].end.v[1] = end->v[1];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].end.v[2] = end->v[2];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].bounds.midPoint.v[0] = bounds->midPoint.v[0];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].bounds.midPoint.v[1] = bounds->midPoint.v[1];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].bounds.midPoint.v[2] = bounds->midPoint.v[2];
    result = v10;
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].bounds.halfSize.v[0] = bounds->halfSize.v[0];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].bounds.halfSize.v[1] = bounds->halfSize.v[1];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].bounds.halfSize.v[2] = bounds->halfSize.v[2];
    g_particleDeferredPhysicsRayCastCreateList[0][0][v12].brushMask = brushMask;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_VFX_DEFERRED_RAYCAST_LIMIT, 2048i64);
    return 2048i64;
  }
  return result;
}

/*
==============
Particle_ClearPendingPhysicsData
==============
*/
void Particle_ClearPendingPhysicsData(ParticleDeferredPhysicsCreateData *pDeferredPhysicsData)
{
  unsigned int *flags; 

  if ( !pDeferredPhysicsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 386, ASSERT_TYPE_ASSERT, "(pDeferredPhysicsData)", (const char *)&queryFormat, "pDeferredPhysicsData") )
    __debugbreak();
  flags = pDeferredPhysicsData->flags;
  if ( flags )
  {
    *flags &= ~2u;
    *pDeferredPhysicsData->flags |= 0x40u;
  }
  pDeferredPhysicsData->physicsInstanceID->createListIndex = -1;
  pDeferredPhysicsData->state = PARTICLE_DEFERRED_PHYSICS_INVALID;
}

/*
==============
Particle_CombinedDefGetName
==============
*/
const char *Particle_CombinedDefGetName(const FxCombinedDef *def)
{
  if ( def->particleSystemDef )
    return def->particleSystemDef->name;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 858, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to access a name on an invalid effect") )
    __debugbreak();
  return 0i64;
}

/*
==============
Particle_WorldTrace
==============
*/
void Particle_WorldTrace(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int brushmask)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v10; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  float v12; 
  hknpShape *ShapeCapsuleUpAxis; 
  double ShapecastHitFraction; 
  int RaycastHitRef; 
  unsigned __int16 ShapecastHitHitGlassId; 
  int v19; 
  unsigned __int16 v20; 
  unsigned int RaycastHitBodyId; 
  double RaycastHitFraction; 
  unsigned __int16 RaycastHitGlassId; 
  int EntityNum; 
  unsigned __int16 v25; 
  const char *RigidBodyName; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v28; 
  hkMonitorStream *v29; 
  char optionalInplaceBuffer[432]; 

  v28 = -2i64;
  Profile_Begin(220);
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v10 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtParticle_WorldTrace");
  v29 = v10;
  ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE);
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  v12 = bounds->halfSize.v[0];
  if ( v12 <= 0.0 )
  {
    *(_QWORD *)&extendedData.accuracy = 0i64;
    LODWORD(extendedData.ignoreBodies) = 1;
    *((float *)&extendedData.ignoreBodies + 1) = 0.0;
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = brushmask;
    Physics_Raycast(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, start, end, (Physics_RaycastExtendedData *)&extendedData, ClosestResult);
    results->fraction = 1.0;
    if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
      goto LABEL_33;
    RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
    results->fraction = *(float *)&RaycastHitFraction;
    HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, &results->normal);
    results->surfaceFlags = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0);
    if ( ((LODWORD(results->normal.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(results->normal.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(results->normal.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 347, ASSERT_TYPE_SANITY, "( !IS_NAN( ( results->normal )[0] ) && !IS_NAN( ( results->normal )[1] ) && !IS_NAN( ( results->normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( results->normal )[0] ) && !IS_NAN( ( results->normal )[1] ) && !IS_NAN( ( results->normal )[2] )") )
      __debugbreak();
    results->contents = HavokPhysics_CollisionQueryResult::GetRaycastHitContents(ClosestResult, 0);
    RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(ClosestResult, 0);
    RaycastHitGlassId = HavokPhysics_CollisionQueryResult::GetRaycastHitGlassId(ClosestResult, 0);
    if ( RaycastHitGlassId )
    {
      results->hitId = RaycastHitGlassId;
      results->hitType = TRACE_HITTYPE_GLASS;
      goto LABEL_33;
    }
    if ( !Physics_IsServerEntitylessScriptable(RaycastHitRef) && !Physics_IsClientEntitylessScriptable(RaycastHitRef) )
    {
      EntityNum = Physics_GetEntityNum(RaycastHitRef);
      v25 = truncate_cast<unsigned short,int>(EntityNum);
      results->hitId = v25;
      results->hitType = Physics_GetHitTypeByEntId(v25);
      RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
      goto LABEL_29;
    }
LABEL_32:
    results->hitType = TRACE_HITTYPE_SCRIPTABLE;
    results->hitId = RaycastHitRef & 0x3FFFFF;
    goto LABEL_33;
  }
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, &bounds->midPoint, bounds->halfSize.v[2] - v12, v12, optionalInplaceBuffer, 432, Temporary);
  if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 284, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  extendedData.startTolerance = 0.0;
  _XMM0 = LODWORD(FLOAT_0_016000001);
  extendedData.accuracy = FLOAT_0_016000001;
  extendedData.simplifyStart = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.collisionBuffer = 0.0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = brushmask;
  Physics_Shapecast(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, ClosestResult, NULL);
  results->fraction = 1.0;
  if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    ShapecastHitFraction = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(ClosestResult, 0);
    results->fraction = *(float *)&ShapecastHitFraction;
    HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(ClosestResult, 0, &results->normal);
    results->surfaceFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(ClosestResult, 0);
    if ( ((LODWORD(results->normal.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(results->normal.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(results->normal.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 300, ASSERT_TYPE_SANITY, "( !IS_NAN( ( results->normal )[0] ) && !IS_NAN( ( results->normal )[1] ) && !IS_NAN( ( results->normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( results->normal )[0] ) && !IS_NAN( ( results->normal )[1] ) && !IS_NAN( ( results->normal )[2] )") )
      __debugbreak();
    results->contents = HavokPhysics_CollisionQueryResult::GetShapecastHitHitContents(ClosestResult, 0);
    RaycastHitRef = HavokPhysics_CollisionQueryResult::GetShapecastHitRef(ClosestResult, 0);
    ShapecastHitHitGlassId = HavokPhysics_CollisionQueryResult::GetShapecastHitHitGlassId(ClosestResult, 0);
    if ( ShapecastHitHitGlassId )
    {
      results->hitId = ShapecastHitHitGlassId;
      results->hitType = TRACE_HITTYPE_GLASS;
      goto LABEL_33;
    }
    if ( !Physics_IsServerEntitylessScriptable(RaycastHitRef) && !Physics_IsClientEntitylessScriptable(RaycastHitRef) )
    {
      v19 = Physics_GetEntityNum(RaycastHitRef);
      v20 = truncate_cast<unsigned short,int>(v19);
      results->hitId = v20;
      results->hitType = Physics_GetHitTypeByEntId(v20);
      RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(ClosestResult, 0);
LABEL_29:
      RigidBodyName = Physics_GetRigidBodyName(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, RaycastHitBodyId);
      if ( Physics_GetRefSystem(RaycastHitRef) == Physics_RefSystem_Ragdoll )
        RigidBodyName = Physics_GetRagdollBoneName(RigidBodyName);
      results->partName = SL_FindString(RigidBodyName);
      goto LABEL_33;
    }
    goto LABEL_32;
  }
LABEL_33:
  Profile_EndInternal(NULL);
  if ( v10 )
    hkMonitorStream::timerEnd(v10, "Et");
}

/*
==============
FxMarkSpawnData::SetDefaults
==============
*/
void FxMarkSpawnData::SetDefaults(FxMarkSpawnData *this)
{
  this->markEntnum = 2047;
  *(_DWORD *)&this->materialOverrideIndex = 16646144;
}

