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
  __int64 v5; 
  __int64 v6; 
  Physics_WorldId v7; 
  __int64 v8; 
  __int64 v10; 
  char v14; 
  unsigned int *flags; 
  int physicsRefId; 
  const XModel *pModel; 
  int v18; 
  int Ref; 
  const PhysicsAsset *physicsAsset; 
  int v21; 
  char v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int *v27; 
  signed int v28; 
  unsigned int v29; 
  unsigned int m_serialAndIndex; 
  int v31; 
  hknpWorld *world; 
  void (__fastcall *onImpactCB)(Physics_SimpleCollisionCallback_Data *); 
  ntl::fixed_map<unsigned int,Particle_OnImpactCBData,2048,ntl::less<unsigned int,unsigned int> > *v46; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v49; 
  ntl::red_black_tree_node_base *v50; 
  bool v52; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> >,ntl::pair<unsigned int,Particle_OnImpactCBData> *,ntl::pair<unsigned int,Particle_OnImpactCBData> &> *inserted; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *i; 
  ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *v55; 
  unsigned int *v56; 
  bool v57; 
  int v61; 
  int v62; 
  __int64 v63; 
  __int64 v64; 
  const ParticleEmitter **p_pParticleEmitterOwner; 
  unsigned int v66; 
  __int64 v67; 
  ParticleSystem *v68; 
  __int64 v69; 
  ParticleSystemFlags m_flags; 
  const ParticleSystemDef *Def; 
  ParticleState *v72; 
  volatile int v73; 
  const ParticleEmitter **v74; 
  __int64 v75; 
  ParticleModulePhysicsLight *v76; 
  volatile int v77; 
  ParticleDeferredPhysicsGlassCreateData *v78; 
  unsigned __int64 v79; 
  const char *v80; 
  __int64 j; 
  __int64 v82; 
  char *v83; 
  __int64 ignoreSystems; 
  __int64 add; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  signed int v92; 
  int v93; 
  Physics_WorldId worldId; 
  int NumRigidBodys; 
  unsigned int *p_instanceId; 
  __int64 v98; 
  __int64 v99; 
  hknpBodyId result; 
  unsigned __int64 v101; 
  Physics_InstantiateShapeOverride shapeOverride; 
  __int128 v103; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> >,ntl::pair<unsigned int,Particle_OnImpactCBData> *,ntl::pair<unsigned int,Particle_OnImpactCBData> &> v104; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> >,ntl::pair<unsigned int,Particle_OnImpactCBData> *,ntl::pair<unsigned int,Particle_OnImpactCBData> &> v105; 
  int v106[4]; 
  int v107[4]; 
  ntl::pair<unsigned int,Particle_OnImpactCBData> r_element; 

  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 401, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  Profile2_UpdateEntry(89);
  v101 = (unsigned __int64)&dword_14FDE8134 & 3;
  if ( ((unsigned __int8)&dword_14FDE8134 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8134) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8134);
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "vfx create physics");
  Profile_Begin(655);
  v99 = v5;
  v6 = v5;
  if ( g_particleDeferredPhysicsCreateListCount[v5] >= 0x801u )
  {
    LODWORD(add) = 2049;
    LODWORD(ignoreSystems) = g_particleDeferredPhysicsCreateListCount[v5];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsCreateListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_LIST_MAX + 1 )", "g_particleDeferredPhysicsCreateListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_LIST_MAX + 1\n\t%i not in [0, %i)", ignoreSystems, add) )
      __debugbreak();
  }
  if ( g_particleDeferredPhysicsFXCreateListCount[v5] >= 0x801u )
  {
    LODWORD(add) = 2049;
    LODWORD(ignoreSystems) = g_particleDeferredPhysicsFXCreateListCount[v5];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 408, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsFXCreateListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX + 1 )", "g_particleDeferredPhysicsFXCreateListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_FX_LIST_MAX + 1\n\t%i not in [0, %i)", ignoreSystems, add) )
      __debugbreak();
  }
  if ( g_particleDeferredPhysicsGlassCreateListCount[v5] >= 0x801u )
  {
    LODWORD(add) = 2049;
    LODWORD(ignoreSystems) = g_particleDeferredPhysicsGlassCreateListCount[v5];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 409, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsGlassCreateListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX + 1 )", "g_particleDeferredPhysicsGlassCreateListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX + 1\n\t%i not in [0, %i)", ignoreSystems, add) )
      __debugbreak();
  }
  if ( g_particleDeferredPhysicsRayCastCreateListCount[v5] >= 0x801u )
  {
    LODWORD(add) = 2049;
    LODWORD(ignoreSystems) = g_particleDeferredPhysicsRayCastCreateListCount[v5];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 410, ASSERT_TYPE_ASSERT, "(unsigned)( g_particleDeferredPhysicsRayCastCreateListCount[localClientNum] ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_RAY_CAST_LIST_MAX + 1 )", "g_particleDeferredPhysicsRayCastCreateListCount[localClientNum] doesn't index PARTICLE_DEFERRED_PHYSICS_RAY_CAST_LIST_MAX + 1\n\t%i not in [0, %i)", ignoreSystems, add) )
      __debugbreak();
  }
  v93 = 0;
  v7 = 3 * v5 + 3;
  worldId = 3 * v5 + 4;
  if ( g_particleDeferredPhysicsCreateListCount[v5] > 0 )
  {
    v8 = 0i64;
    __asm
    {
      vmovaps [rsp+1A0h+var_38+8], xmm6
      vmovaps [rsp+1A0h+var_48+8], xmm7
      vmovaps [rsp+1A0h+var_58+8], xmm8
      vmovss  xmm8, cs:__real@3d000000
    }
    v10 = v5 << 11;
    v98 = 0i64;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    while ( 1 )
    {
      _R15 = &g_particleDeferredPhysicsCreateList[0][v10 + v8];
      if ( _R15->state )
        break;
LABEL_147:
      ++v98;
      v57 = v93 + 1 < g_particleDeferredPhysicsCreateListCount[v6];
      v8 = v98;
      ++v93;
      if ( !v57 )
      {
        __asm
        {
          vmovaps xmm8, [rsp+1A0h+var_58+8]
          vmovaps xmm7, [rsp+1A0h+var_48+8]
          vmovaps xmm6, [rsp+1A0h+var_38+8]
        }
        goto LABEL_149;
      }
    }
    *(double *)&_XMM0 = Physics_GetFixedMemoryPoolUsage(v7);
    _RAX = particle_physics_memory_threshold;
    __asm { vcomiss xmm0, dword ptr [rax+28h] }
    if ( !(v24 | v14) )
    {
      flags = _R15->flags;
      if ( flags )
      {
        *flags &= ~2u;
        *_R15->flags |= 0x40u;
      }
LABEL_145:
      _R15->physicsInstanceID->createListIndex = -1;
      _R15->state = PARTICLE_DEFERRED_PHYSICS_INVALID;
      goto LABEL_146;
    }
    if ( _R15->state != PARTICLE_DEFERRED_PHYSICS_PENDING_CREATION && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 433, ASSERT_TYPE_ASSERT, "(pDeferredPhysicsData->state == ParticleDeferredPhysicsCreateData::PARTICLE_DEFERRED_PHYSICS_PENDING_CREATION)", (const char *)&queryFormat, "pDeferredPhysicsData->state == ParticleDeferredPhysicsCreateData::PARTICLE_DEFERRED_PHYSICS_PENDING_CREATION") )
      __debugbreak();
    physicsRefId = _R15->physicsRefId;
    pModel = _R15->pModel;
    p_instanceId = &_R15->physicsInstanceID->instanceId;
    if ( physicsRefId >= 0x400000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 441, ASSERT_TYPE_ASSERT, "(physicsRefId < g_PhysicsMaxNumSupportedParticles)", (const char *)&queryFormat, "physicsRefId < g_PhysicsMaxNumSupportedParticles") )
      __debugbreak();
    if ( (physicsRefId < 0 || (unsigned int)physicsRefId > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)physicsRefId, "signed", physicsRefId) )
      __debugbreak();
    v18 = physicsRefId >> 16;
    if ( (physicsRefId >> 16 < 0 || (unsigned int)v18 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", BYTE2(physicsRefId), "signed", v18) )
      __debugbreak();
    Ref = Physics_MakeRef(Physics_RefSystem_Particles, Physics_RelationshipSystem_None, BYTE2(physicsRefId), physicsRefId);
    physicsAsset = pModel->physicsAsset;
    v21 = Ref;
    shapeOverride.customShape = NULL;
    shapeOverride.shapeOverride = -1;
    shapeOverride.physicsAssetAddendum = NULL;
    shapeOverride.shapeAddendum = -1;
    shapeOverride.massProperties = NULL;
    *(_WORD *)&shapeOverride.overrideMass = 0;
    shapeOverride.overrideTensor = 0;
    if ( particle_physics_doPenetrationTest->current.enabled )
    {
      _RCX = particle_physics_allowedPenetrationDepth;
      __asm { vmovss  xmm6, dword ptr [rcx+28h] }
      *(double *)&_XMM0 = Physics_GetInstantiatiationPenetrationDepthForAsset(v7, physicsAsset, &_R15->position, &_R15->quat, &shapeOverride, 0);
      __asm { vcomiss xmm0, xmm6 }
      if ( !(v24 | v14) )
        goto LABEL_42;
      __asm { vcomiss xmm0, xmm7 }
      if ( v24 )
      {
LABEL_42:
        Particle_ClearPendingPhysicsData(_R15);
LABEL_146:
        v10 = v6 << 11;
        goto LABEL_147;
      }
    }
    v25 = Physics_InstantiateAsset(v7, pModel, physicsAsset, v21, &_R15->position, &_R15->quat, 1, 0, 0, &shapeOverride, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeNone, 0);
    *p_instanceId = v25;
    if ( v25 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 466, ASSERT_TYPE_ASSERT, "(physicsInstanceID->instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstanceID->instanceId != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v26 = Physics_InstantiateAsset(worldId, pModel, physicsAsset, v21, &_R15->position, &_R15->quat, 1, 0, 0, &shapeOverride, Physics_InstantiationForceTypeKeyframedAtMost, Physics_InstantiationFilterTypeNone, 0);
    v27 = p_instanceId;
    p_instanceId[1] = v26;
    if ( v26 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 468, ASSERT_TYPE_ASSERT, "(physicsInstanceID->detailInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstanceID->detailInstanceId != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v28 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys(v7, *p_instanceId);
    v92 = 0;
    if ( NumRigidBodys <= 0 )
    {
LABEL_143:
      v56 = _R15->flags;
      if ( v56 )
      {
        *v56 &= ~2u;
        *_R15->flags |= 0x40u;
      }
      goto LABEL_145;
    }
    while ( 1 )
    {
      v29 = *v27;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v7 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", add) )
          __debugbreak();
      }
      if ( v29 == -1 )
      {
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", add) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
      {
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", add) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", add) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, v7, v29, v28)->m_serialAndIndex;
      v31 = m_serialAndIndex & 0xFFFFFF;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 475, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 368, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v7 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 369, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", add) )
          __debugbreak();
      }
      if ( v31 == 0xFFFFFF )
      {
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 370, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", add) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+1Ch]
        vmovss  [rsp+1A0h+var_130], xmm0
      }
      if ( (v86 & 0x7F800000) == 2139095040 )
        goto LABEL_210;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+20h]
        vmovss  [rsp+1A0h+var_130], xmm0
      }
      if ( (v87 & 0x7F800000) == 2139095040 )
        goto LABEL_210;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+24h]
        vmovss  [rsp+1A0h+var_130], xmm0
      }
      if ( (v88 & 0x7F800000) == 2139095040 )
      {
LABEL_210:
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 371, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", add) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+28h]
        vmovss  [rsp+1A0h+var_130], xmm0
      }
      if ( (v89 & 0x7F800000) == 2139095040 )
        goto LABEL_211;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+2Ch]
        vmovss  [rsp+1A0h+var_130], xmm0
      }
      if ( (v90 & 0x7F800000) == 2139095040 )
        goto LABEL_211;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+30h]
        vmovss  [rsp+1A0h+var_130], xmm0
      }
      if ( (v91 & 0x7F800000) == 2139095040 )
      {
LABEL_211:
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 372, ASSERT_TYPE_ASSERT, "(!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan angVel", "!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] )", add) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm0, xmm8, dword ptr [r15+20h]
        vmulss  xmm1, xmm8, dword ptr [r15+1Ch]
        vmulss  xmm2, xmm8, dword ptr [r15+24h]
        vmovss  [rbp+0A0h+var_7C], xmm0
        vmovss  xmm0, dword ptr [r15+28h]
        vmovss  [rbp+0A0h+var_90], xmm0
        vmovss  xmm0, dword ptr [r15+30h]
        vmovss  [rbp+0A0h+var_80], xmm1
        vmovss  xmm1, dword ptr [r15+2Ch]
        vmovss  [rbp+0A0h+var_88], xmm0
        vmovss  [rbp+0A0h+var_78], xmm2
        vmovss  [rbp+0A0h+var_74], xmm7
        vmovss  [rbp+0A0h+var_8C], xmm1
        vmovss  [rbp+0A0h+var_84], xmm7
      }
      if ( (unsigned int)v7 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 485, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", add) )
          __debugbreak();
      }
      if ( v31 == 0xFFFFFF )
      {
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 486, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", add) )
          __debugbreak();
      }
      world = HavokPhysics_GetMutableWorld(v7)->world;
      if ( !world )
      {
        LODWORD(add) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 490, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", add) )
          __debugbreak();
      }
      ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, int *, _DWORD))world->setBodyVelocity)(&world->hknpWorldWriter, m_serialAndIndex, v107, v106, 0);
      onImpactCB = _R15->onImpactCB;
      if ( !onImpactCB )
        goto LABEL_142;
      Physics_SimpleCollisionCallback_RegisterBody(v7, m_serialAndIndex, onImpactCB);
      __asm { vmovups xmm6, xmmword ptr [r15+50h] }
      v46 = &g_physicsBodyToParticleIDMap[v6];
      mp_parent = v46->m_endNodeBase.mp_parent;
      p_m_endNodeBase = &v46->m_endNodeBase;
      v49 = &v46->m_endNodeBase;
      v50 = mp_parent;
      while ( v50 )
      {
        if ( v50[1].m_color < m_serialAndIndex )
        {
          v50 = v50->mp_right;
        }
        else
        {
          v49 = v50;
          v50 = v50->mp_left;
        }
      }
      if ( v49 != p_m_endNodeBase )
      {
        _RBX = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)&v46->m_endNodeBase;
        if ( m_serialAndIndex >= v49[1].m_color )
          _RBX = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)v49;
        if ( _RBX != p_m_endNodeBase )
        {
          if ( !_RBX )
            goto LABEL_139;
          goto LABEL_141;
        }
      }
      r_element.first = m_serialAndIndex;
      v103 = 0ui64;
      v52 = 1;
      __asm
      {
        vmovups xmm0, [rbp+0A0h+var_B0]
        vmovups xmmword ptr [rbp+0A0h+r_element.second.particleSystemHandle], xmm0
      }
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v52 = m_serialAndIndex < mp_parent[1].m_color;
        if ( m_serialAndIndex >= mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      _RBX = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)p_m_endNodeBase;
      if ( v52 )
      {
        if ( p_m_endNodeBase == v46->m_endNodeBase.mp_left )
        {
          inserted = ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Particle_OnImpactCBData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData>>,2048,8>,ntl::return_pair_first<unsigned int,Particle_OnImpactCBData>,ntl::less<unsigned int,unsigned int>>::insert_node(&g_physicsBodyToParticleIDMap[v6], &v104, p_m_endNodeBase, &r_element, 1, 0);
LABEL_118:
          _RBX = inserted->mp_node;
          goto LABEL_138;
        }
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
        {
          _RBX = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)p_m_endNodeBase->mp_left;
          if ( _RBX )
          {
            for ( i = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)_RBX->mp_right; i; i = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)i->mp_right )
              _RBX = i;
          }
          else
          {
            _RBX = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)p_m_endNodeBase->mp_parent;
            if ( p_m_endNodeBase == _RBX->mp_left )
            {
              do
              {
                v55 = _RBX;
                _RBX = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)_RBX->mp_parent;
              }
              while ( v55 == _RBX->mp_left );
            }
          }
        }
        else
        {
          _RBX = (ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData> > *)p_m_endNodeBase->mp_right;
        }
      }
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( _RBX->m_element.first < m_serialAndIndex )
      {
        inserted = ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Particle_OnImpactCBData>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Particle_OnImpactCBData>>,2048,8>,ntl::return_pair_first<unsigned int,Particle_OnImpactCBData>,ntl::less<unsigned int,unsigned int>>::insert_node(&g_physicsBodyToParticleIDMap[v6], &v105, p_m_endNodeBase, &r_element, 0, 0);
        goto LABEL_118;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\map\\map.h", 87, ASSERT_TYPE_ASSERT, "( retVal.second )", (const char *)&queryFormat, "retVal.second") )
        __debugbreak();
LABEL_138:
      if ( !_RBX )
      {
LABEL_139:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
      }
LABEL_141:
      v28 = v92;
      __asm { vmovups xmmword ptr [rbx+24h], xmm6 }
LABEL_142:
      v27 = p_instanceId;
      v92 = ++v28;
      if ( v28 >= NumRigidBodys )
        goto LABEL_143;
    }
  }
LABEL_149:
  v61 = 2048;
  v62 = 2048;
  if ( g_particleDeferredPhysicsFXPipelineCreateListCount[v6] < 2048 )
    v62 = g_particleDeferredPhysicsFXPipelineCreateListCount[v6];
  v63 = v62;
  if ( v62 > 0 )
  {
    v64 = v6 << 12;
    p_pParticleEmitterOwner = &g_particleDeferredPhysicsFXPipelineCreateList[v6][0].pParticleEmitterOwner;
    do
    {
      v66 = 0;
      if ( g_particleSystemsGeneration[v64 + ((_DWORD)p_pParticleEmitterOwner[1] & 0xFFF)].__all32 == *((_DWORD *)p_pParticleEmitterOwner + 2) )
        v66 = (_DWORD)p_pParticleEmitterOwner[1] & 0xFFF;
      v67 = v66;
      v68 = NULL;
      v69 = v64 + v67;
      if ( g_particleSystems[0][v69] >= (ParticleSystem *)0x1000 )
        v68 = g_particleSystems[0][v69];
      if ( v68 )
      {
        m_flags = v68->m_flags;
        if ( (m_flags & 0xD0070) != 0 )
        {
          Def = ParticleSystem::GetDef(v68);
          Com_PrintWarning(21, "VFX: Trying to request a Havok FX pipeline for a system with invalid flags: %s (0x%16llx)\n", Def->name, m_flags);
        }
        else if ( ((*p_pParticleEmitterOwner)->m_flags & 0x40) == 0 )
        {
          v72 = (ParticleState *)*(p_pParticleEmitterOwner - 1);
          if ( !v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 520, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
            __debugbreak();
          if ( !ParticleState::UsesPhysicsFX(v72) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 521, ASSERT_TYPE_ASSERT, "(pParticleState->UsesPhysicsFX())", (const char *)&queryFormat, "pParticleState->UsesPhysicsFX()") )
            __debugbreak();
          if ( v72->m_physicsFXPipelineInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 522, ASSERT_TYPE_ASSERT, "(pParticleState->GetPhysicsFXPipelineInstance() == nullptr)", (const char *)&queryFormat, "pParticleState->GetPhysicsFXPipelineInstance() == nullptr") )
            __debugbreak();
          ParticleState::RequestPhysicsPipelineInstance(v72);
        }
      }
      p_pParticleEmitterOwner += 3;
      --v63;
    }
    while ( v63 );
    v6 = v99;
    v61 = 2048;
  }
  v73 = 0;
  if ( g_particleDeferredPhysicsFXCreateListCount[v6] > 0 )
  {
    v74 = &g_particleDeferredPhysicsFXCreateList[v6][0].pParticleEmitterOwner;
    do
    {
      v75 = (v6 << 12) + ((_DWORD)v74[1] & 0xFFF);
      if ( g_particleSystemsGeneration[v75].__all32 == *((_DWORD *)v74 + 2) && g_particleSystems[0][v75] >= (ParticleSystem *)0x1000 && ((*v74)->m_flags & 0x40) == 0 )
      {
        v76 = (ParticleModulePhysicsLight *)*(v74 - 4);
        if ( !v76 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 540, ASSERT_TYPE_ASSERT, "(pModulePhysicsLight)", (const char *)&queryFormat, "pModulePhysicsLight") )
          __debugbreak();
        ParticleModulePhysicsLight::CreatePhysicsParticles(v76, (ParticleData *)*(v74 - 3), *((_DWORD *)v74 - 4), *((_DWORD *)v74 - 3), (ParticleState *)*(v74 - 1));
      }
      ++v73;
      v74 += 6;
    }
    while ( v73 < g_particleDeferredPhysicsFXCreateListCount[v6] );
    v61 = 2048;
  }
  v77 = 0;
  if ( g_particleDeferredPhysicsGlassCreateListCount[v6] > 0 )
  {
    v78 = g_particleDeferredPhysicsGlassCreateList[v6];
    do
    {
      if ( !v78->skipCreation )
        Glass_CreatePhysicsFromDeferredData(v78, v7);
      ++v77;
      ++v78;
    }
    while ( v77 < g_particleDeferredPhysicsGlassCreateListCount[v6] );
  }
  Profile2_UpdateEntry(91);
  v79 = (unsigned __int64)&dword_14FDE813C & 3;
  if ( ((unsigned __int8)&dword_14FDE813C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE813C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE813C);
  v80 = j_va("vfx ray cast (%d)", (unsigned int)g_particleDeferredPhysicsRayCastCreateListCount[v6]);
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, v80);
  if ( g_particleDeferredPhysicsRayCastCreateListCount[v6] < 2048 )
    v61 = g_particleDeferredPhysicsRayCastCreateListCount[v6];
  if ( v61 > 0 )
  {
    for ( j = 0i64; j < v61; ++j )
    {
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(add) = 2;
        LODWORD(ignoreSystems) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 616, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ignoreSystems, add) )
          __debugbreak();
      }
      v82 = g_particleDeferredPhysicsRayCastIndex[v6] + 2 * v6;
      g_particleDeferredPhysicsRayCastResultValid[0][v82] = 1;
      v83 = (char *)g_particleDeferredPhysicsRayCastCreateList + 294912 * v82 + 144 * j;
      Particle_WorldTrace((trace_t *)v83, (const vec3_t *)(v83 + 88), (const vec3_t *)(v83 + 100), (const Bounds *)(v83 + 112), *((_DWORD *)v83 + 34));
    }
    v79 = (unsigned __int64)&dword_14FDE813C & 3;
  }
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(91);
  if ( v79 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE813C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE813C);
  g_particleDeferredPhysicsCreateListCount[v6] = 0;
  g_particleDeferredPhysicsFXCreateListCount[v6] = 0;
  g_particleDeferredPhysicsFXPipelineCreateListCount[v6] = 0;
  g_particleDeferredPhysicsGlassCreateListCount[v6] = 0;
  g_particleDeferredPhysicsRayCastCreateListCount[v6] = 0;
  g_particleDeferredPhysicsRayCastIndex[v6] = ((unsigned __int8)g_particleDeferredPhysicsRayCastIndex[v6] - 1) & 1;
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(89);
  if ( v101 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8134) )
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

char __fastcall FX_ConvertDecalTime(double editorDecalTime, unsigned __int16 *outConvertedValue, double _XMM2_8)
{
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@41000000
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 2
    vcvttss2si eax, xmm2
  }
  if ( _EAX > 0xFFFF )
    return 0;
  if ( outConvertedValue )
    *outConvertedValue = _EAX;
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
  hkMonitorStream *v11; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  char v16; 
  char v17; 
  hknpShape *ShapeCapsuleUpAxis; 
  int RaycastHitRef; 
  unsigned __int16 ShapecastHitHitGlassId; 
  int v27; 
  unsigned __int16 v28; 
  unsigned int RaycastHitBodyId; 
  unsigned __int16 RaycastHitGlassId; 
  int EntityNum; 
  unsigned __int16 v35; 
  const char *RigidBodyName; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v45; 
  hkMonitorStream *v46; 
  char optionalInplaceBuffer[432]; 

  v45 = -2i64;
  __asm { vmovaps [rsp+2A0h+var_50], xmm6 }
  _RDI = bounds;
  _RSI = results;
  Profile_Begin(220);
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v11 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtParticle_WorldTrace");
  v46 = v11;
  ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE);
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+0Ch]; radius
    vmovss  xmm0, dword ptr [rdi+14h]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm3, xmm6
  }
  if ( v16 | v17 )
  {
    *(_QWORD *)&extendedData.accuracy = 0i64;
    LODWORD(extendedData.ignoreBodies) = 1;
    __asm { vmovss  dword ptr [rsp+2A0h+extendedData.ignoreBodies+4], xmm6 }
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = brushmask;
    Physics_Raycast(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, start, end, (Physics_RaycastExtendedData *)&extendedData, ClosestResult);
    _RSI->fraction = 1.0;
    if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
      goto LABEL_33;
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
    __asm { vmovss  dword ptr [rsi], xmm0 }
    HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, &_RSI->normal);
    _RSI->surfaceFlags = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+10h]
      vmovss  [rsp+2A0h+var_260], xmm0
    }
    if ( (v41 & 0x7F800000) == 2139095040 )
      goto LABEL_38;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+14h]
      vmovss  [rsp+2A0h+var_260], xmm0
    }
    if ( (v42 & 0x7F800000) == 2139095040 )
      goto LABEL_38;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+18h]
      vmovss  [rsp+2A0h+var_260], xmm0
    }
    if ( (v43 & 0x7F800000) == 2139095040 )
    {
LABEL_38:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 347, ASSERT_TYPE_SANITY, "( !IS_NAN( ( results->normal )[0] ) && !IS_NAN( ( results->normal )[1] ) && !IS_NAN( ( results->normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( results->normal )[0] ) && !IS_NAN( ( results->normal )[1] ) && !IS_NAN( ( results->normal )[2] )") )
        __debugbreak();
    }
    _RSI->contents = HavokPhysics_CollisionQueryResult::GetRaycastHitContents(ClosestResult, 0);
    RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(ClosestResult, 0);
    RaycastHitGlassId = HavokPhysics_CollisionQueryResult::GetRaycastHitGlassId(ClosestResult, 0);
    if ( RaycastHitGlassId )
    {
      _RSI->hitId = RaycastHitGlassId;
      _RSI->hitType = TRACE_HITTYPE_GLASS;
      goto LABEL_33;
    }
    if ( !Physics_IsServerEntitylessScriptable(RaycastHitRef) && !Physics_IsClientEntitylessScriptable(RaycastHitRef) )
    {
      EntityNum = Physics_GetEntityNum(RaycastHitRef);
      v35 = truncate_cast<unsigned short,int>(EntityNum);
      _RSI->hitId = v35;
      _RSI->hitType = Physics_GetHitTypeByEntId(v35);
      RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
      goto LABEL_29;
    }
LABEL_32:
    _RSI->hitType = TRACE_HITTYPE_SCRIPTABLE;
    _RSI->hitId = RaycastHitRef & 0x3FFFFF;
    goto LABEL_33;
  }
  __asm { vsubss  xmm2, xmm0, xmm3; halfHeight }
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, &_RDI->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, optionalInplaceBuffer, 432, Temporary);
  if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 284, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  __asm
  {
    vmovss  [rsp+2A0h+extendedData.startTolerance], xmm6
    vmovss  xmm0, cs:__real@3c83126f
    vmovss  [rsp+2A0h+extendedData.accuracy], xmm0
  }
  extendedData.simplifyStart = 0;
  extendedData.ignoreBodies = NULL;
  __asm
  {
    vmovss  [rsp+2A0h+extendedData.collisionBuffer], xmm6
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+2A0h+extendedData.nonBrushShape], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = brushmask;
  Physics_Shapecast(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, ClosestResult, NULL);
  _RSI->fraction = 1.0;
  if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(ClosestResult, 0);
    __asm { vmovss  dword ptr [rsi], xmm0 }
    HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(ClosestResult, 0, &_RSI->normal);
    _RSI->surfaceFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(ClosestResult, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+10h]
      vmovss  [rsp+2A0h+var_260], xmm0
    }
    if ( (v38 & 0x7F800000) == 2139095040 )
      goto LABEL_39;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+14h]
      vmovss  [rsp+2A0h+var_260], xmm0
    }
    if ( (v39 & 0x7F800000) == 2139095040 )
      goto LABEL_39;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+18h]
      vmovss  [rsp+2A0h+var_260], xmm0
    }
    if ( (v40 & 0x7F800000) == 2139095040 )
    {
LABEL_39:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.cpp", 300, ASSERT_TYPE_SANITY, "( !IS_NAN( ( results->normal )[0] ) && !IS_NAN( ( results->normal )[1] ) && !IS_NAN( ( results->normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( results->normal )[0] ) && !IS_NAN( ( results->normal )[1] ) && !IS_NAN( ( results->normal )[2] )") )
        __debugbreak();
    }
    _RSI->contents = HavokPhysics_CollisionQueryResult::GetShapecastHitHitContents(ClosestResult, 0);
    RaycastHitRef = HavokPhysics_CollisionQueryResult::GetShapecastHitRef(ClosestResult, 0);
    ShapecastHitHitGlassId = HavokPhysics_CollisionQueryResult::GetShapecastHitHitGlassId(ClosestResult, 0);
    if ( ShapecastHitHitGlassId )
    {
      _RSI->hitId = ShapecastHitHitGlassId;
      _RSI->hitType = TRACE_HITTYPE_GLASS;
      goto LABEL_33;
    }
    if ( !Physics_IsServerEntitylessScriptable(RaycastHitRef) && !Physics_IsClientEntitylessScriptable(RaycastHitRef) )
    {
      v27 = Physics_GetEntityNum(RaycastHitRef);
      v28 = truncate_cast<unsigned short,int>(v27);
      _RSI->hitId = v28;
      _RSI->hitType = Physics_GetHitTypeByEntId(v28);
      RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(ClosestResult, 0);
LABEL_29:
      RigidBodyName = Physics_GetRigidBodyName(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, RaycastHitBodyId);
      if ( Physics_GetRefSystem(RaycastHitRef) == Physics_RefSystem_Ragdoll )
        RigidBodyName = Physics_GetRagdollBoneName(RigidBodyName);
      _RSI->partName = SL_FindString(RigidBodyName);
      goto LABEL_33;
    }
    goto LABEL_32;
  }
LABEL_33:
  Profile_EndInternal(NULL);
  if ( v11 )
    hkMonitorStream::timerEnd(v11, "Et");
  __asm { vmovaps xmm6, [rsp+2A0h+var_50] }
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

