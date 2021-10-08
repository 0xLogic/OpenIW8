/*
==============
CG_WasEntityHighLoD
==============
*/

bool __fastcall CG_WasEntityHighLoD(const LocalClientNum_t localClientNum, const __int16 entityNum)
{
  return ?CG_WasEntityHighLoD@@YA_NW4LocalClientNum_t@@F@Z(localClientNum, entityNum);
}

/*
==============
CgEntitySystem::AddPacketEntitiesFromWorkers
==============
*/

void __fastcall CgEntitySystem::AddPacketEntitiesFromWorkers(CgEntitySystem *this, const LocalClientNum_t localClientNum, const snapshot_t *nextSnap, const bool contextKey)
{
  ?AddPacketEntitiesFromWorkers@CgEntitySystem@@QEAAXW4LocalClientNum_t@@PEBUsnapshot_t@@_N@Z(this, localClientNum, nextSnap, contextKey);
}

/*
==============
CgEntitySystem::GetEffectiveStance
==============
*/

EffectiveStance __fastcall CgEntitySystem::GetEffectiveStance(CgEntitySystem *this, const entityState_t *es)
{
  return ?GetEffectiveStance@CgEntitySystem@@QEBA?AW4EffectiveStance@@PEBUentityState_t@@@Z(this, es);
}

/*
==============
CgEntitySystem::GetTransformInfoFromEntityDataCache
==============
*/

void __fastcall CgEntitySystem::GetTransformInfoFromEntityDataCache(CgEntitySystem *this, const centity_t *ent, vec3_t *outOrigin, vec3_t *outAngles, bool prev)
{
  ?GetTransformInfoFromEntityDataCache@CgEntitySystem@@QEAAXPEBUcentity_t@@AEATvec3_t@@1_N@Z(this, ent, outOrigin, outAngles, prev);
}

/*
==============
CgEntitySystem::ResetEntityDataCacheForFrame
==============
*/

void __fastcall CgEntitySystem::ResetEntityDataCacheForFrame(CgEntitySystem *this)
{
  ?ResetEntityDataCacheForFrame@CgEntitySystem@@QEAAXXZ(this);
}

/*
==============
SetOrigin_Vec3Copy
==============
*/

void __fastcall SetOrigin_Vec3Copy(const vec3_t *from, vec4_t *to)
{
  ?SetOrigin_Vec3Copy@@YAXAEBTvec3_t@@AEATvec4_t@@@Z(from, to);
}

/*
==============
CG_IsEntityHighLoD
==============
*/

bool __fastcall CG_IsEntityHighLoD(const LocalClientNum_t localClientNum, const __int16 entityNum)
{
  return ?CG_IsEntityHighLoD@@YA_NW4LocalClientNum_t@@F@Z(localClientNum, entityNum);
}

/*
==============
CG_Entity_WaitEntityWorkersComplete
==============
*/

bool __fastcall CG_Entity_WaitEntityWorkersComplete(void *data)
{
  return ?CG_Entity_WaitEntityWorkersComplete@@YA_NPEAX@Z(data);
}

/*
==============
CgEntitySystem::ResetEntitySystemObufscation
==============
*/

void __fastcall CgEntitySystem::ResetEntitySystemObufscation(const LocalClientNum_t localClientNum)
{
  ?ResetEntitySystemObufscation@CgEntitySystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgEntitySystem::BuildEntityWorkers
==============
*/

void __fastcall CgEntitySystem::BuildEntityWorkers(CgEntitySystem *this, const int serverTime)
{
  ?BuildEntityWorkers@CgEntitySystem@@QEAAXH@Z(this, serverTime);
}

/*
==============
CgEntitySystem::ShouldCalculateParentLinkPositions
==============
*/

bool __fastcall CgEntitySystem::ShouldCalculateParentLinkPositions(CgEntitySystem *this, const centity_t *cent)
{
  return ?ShouldCalculateParentLinkPositions@CgEntitySystem@@QEBA_NPEBUcentity_t@@@Z(this, cent);
}

/*
==============
GetOrigin_Vec3Copy
==============
*/

void __fastcall GetOrigin_Vec3Copy(const vec4_t *from, vec3_t *to)
{
  ?GetOrigin_Vec3Copy@@YAXAEBTvec4_t@@AEATvec3_t@@@Z(from, to);
}

/*
==============
CgEntitySystem::IsScriptedAgent
==============
*/

bool __fastcall CgEntitySystem::IsScriptedAgent(CgEntitySystem *this, const entityState_t *es)
{
  return ?IsScriptedAgent@CgEntitySystem@@QEBA_NPEBUentityState_t@@@Z(this, es);
}

/*
==============
CgEntitySystem::CacheEntityData
==============
*/

void __fastcall CgEntitySystem::CacheEntityData(CgEntitySystem *this, const centity_t *ent)
{
  ?CacheEntityData@CgEntitySystem@@QEAAXPEBUcentity_t@@@Z(this, ent);
}

/*
==============
CgEntitySystem::AddPacketEntitiesFromWorkers
==============
*/
void CgEntitySystem::AddPacketEntitiesFromWorkers(CgEntitySystem *this, const LocalClientNum_t localClientNum, const snapshot_t *nextSnap, const bool contextKey)
{
  MpscStream<524288> *m_ptr; 
  const dvar_t *v9; 
  bool enabled; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  int data[2]; 
  CgEntityWork *p_m_entityWork; 
  LocalClientNum_t timeoutUserData; 
  CgEntityWork *v19; 
  MpscStream<524288> *v20; 
  Mem_LargeLocal workerOutputStream; 
  MpscStream<524288> *v22; 

  Mem_LargeLocal::Mem_LargeLocal(&workerOutputStream, 0x8000Cui64, "CgEntityWorkerOutputStream workerOutput");
  m_ptr = (MpscStream<524288> *)workerOutputStream.m_ptr;
  v22 = (MpscStream<524288> *)workerOutputStream.m_ptr;
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 161, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  v9 = DVARBOOL_cg_entityWorkers;
  if ( !DVARBOOL_cg_entityWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_entityWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  enabled = v9->current.enabled;
  if ( enabled )
  {
    Sys_ProfBeginNamedEvent(0xFF080910, "wait entity buckets");
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_ENTITY_BUCKET);
    Sys_ProfEndNamedEvent();
  }
  if ( this->m_entityWork.serverTime != nextSnap->serverTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 174, ASSERT_TYPE_ASSERT, "( m_entityWork.serverTime ) == ( nextSnap->serverTime )", "%s == %s\n\t%i, %i", "m_entityWork.serverTime", "nextSnap->serverTime", this->m_entityWork.serverTime, nextSnap->serverTime) )
    __debugbreak();
  this->m_entityWork.contextKey = contextKey;
  this->m_entityWork.workersPendingCount = this->m_entityWork.workerActiveCount;
  CG_EntityWorkers_InitWorkerOutput(m_ptr);
  CG_EntityWorkers_InitProfileFrameData(&this->m_entityWork);
  v11 = 0;
  if ( this->m_entityWork.workerActiveCount )
  {
    do
    {
      if ( v11 >= 0x100 )
      {
        LODWORD(v14) = 256;
        LODWORD(v13) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( workerOrderIndex ) < (unsigned)( ( sizeof( *array_counter( m_entityWork.workerExecuteOrder ) ) + 0 ) )", "workerOrderIndex doesn't index m_entityWork.workerExecuteOrder\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v12 = this->m_entityWork.workerExecuteOrder[v11];
      if ( (unsigned int)v12 >= 0x100 )
      {
        LODWORD(v14) = 256;
        LODWORD(v13) = this->m_entityWork.workerExecuteOrder[v11];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 191, ASSERT_TYPE_ASSERT, "(unsigned)( workerIndex ) < (unsigned)( ( sizeof( *array_counter( m_entityWork.workerSize ) ) + 0 ) )", "workerIndex doesn't index m_entityWork.workerSize\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !this->m_entityWork.workerSize[v12] )
      {
        LODWORD(v15) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 192, ASSERT_TYPE_ASSERT, "( m_entityWork.workerSize[workerIndex] ) != ( 0 )", "%s != %s\n\t%i, %i", "m_entityWork.workerSize[workerIndex]", "0", v15, 0i64) )
          __debugbreak();
      }
      if ( this == (CgEntitySystem *)-1603704i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity_workers.h", 316, ASSERT_TYPE_ASSERT, "(work)", (const char *)&queryFormat, "work") )
        __debugbreak();
      data[1] = localClientNum;
      data[0] = v12;
      p_m_entityWork = &this->m_entityWork;
      if ( enabled )
        Sys_AddWorkerCmd(WRKCMD_ENTITY_UPDATE, data);
      else
        CG_EntityWorkers_ExecuteWorkerThread(data);
      ++v11;
    }
    while ( v11 < this->m_entityWork.workerActiveCount );
    m_ptr = v22;
  }
  CG_EntityWorkers_ExecuteMainThread(localClientNum, &this->m_entityWork);
  if ( enabled )
  {
    timeoutUserData = localClientNum;
    v19 = &this->m_entityWork;
    v20 = m_ptr;
    Sys_ProcessWorkerCmdsOnlyOfTypeWithTimeout(WRKCMD_ENTITY_UPDATE, CG_Entity_WaitEntityWorkersComplete, &timeoutUserData);
  }
  else
  {
    CG_EntityWorkers_ProcessWorkerOutput(localClientNum, &this->m_entityWork, m_ptr);
  }
  if ( this->m_entityWork.workersPendingCount )
  {
    LODWORD(v15) = this->m_entityWork.workersPendingCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 229, ASSERT_TYPE_ASSERT, "( m_entityWork.workersPendingCount ) == ( 0 )", "%s == %s\n\t%i, %i", "m_entityWork.workersPendingCount", "0", v15, 0i64) )
      __debugbreak();
  }
  CG_EntityWorkers_ShutdownWorkerOutput();
  Mem_LargeLocal::~Mem_LargeLocal(&workerOutputStream);
}

/*
==============
CgEntitySystem::BuildEntityWorkers
==============
*/
void CgEntitySystem::BuildEntityWorkers(CgEntitySystem *this, const int serverTime)
{
  const dvar_t *v2; 
  CgEntityWorkBuilderCmd data; 

  CG_EntityWorkers_InitBuilderCmd((const LocalClientNum_t)this->m_localClientNum, serverTime, &this->m_entityWork, &this->m_entityWorkBuilder, &data);
  v2 = DVARBOOL_cg_entityWorkers;
  if ( !DVARBOOL_cg_entityWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_entityWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    Sys_AddWorkerCmd(WRKCMD_ENTITY_BUCKET, &data);
  else
    CG_EntityWorkers_ExecuteBuilder(&data);
}

/*
==============
CG_Entity_WaitEntityWorkersComplete
==============
*/
bool CG_Entity_WaitEntityWorkersComplete(void *data)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 147, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !*((_QWORD *)data + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 150, ASSERT_TYPE_ASSERT, "(waitData->work)", (const char *)&queryFormat, "waitData->work") )
    __debugbreak();
  if ( !*((_QWORD *)data + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 151, ASSERT_TYPE_ASSERT, "(waitData->workerOutput)", (const char *)&queryFormat, "waitData->workerOutput") )
    __debugbreak();
  return CG_EntityWorkers_ProcessWorkerOutput(*(const LocalClientNum_t *)data, *((CgEntityWork **)data + 1), *((MpscStream<524288> **)data + 2));
}

/*
==============
CG_IsEntityHighLoD
==============
*/
bool CG_IsEntityHighLoD(const LocalClientNum_t localClientNum, const __int16 entityNum)
{
  const CgSnapshotMP *NextSnap; 

  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)256) )
    return 1;
  NextSnap = CG_SnapshotMP_GetNextSnap(localClientNum);
  if ( !NextSnap )
  {
    NextSnap = CG_SnapshotMP_GetPrevSnap(localClientNum);
    if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 426, ASSERT_TYPE_ASSERT, "(snap != nullptr)", (const char *)&queryFormat, "snap != nullptr") )
      __debugbreak();
  }
  return bitarray_base<bitarray<2048>>::testBit(&NextSnap->entitiesLoD, entityNum);
}

/*
==============
CG_WasEntityHighLoD
==============
*/
bool CG_WasEntityHighLoD(const LocalClientNum_t localClientNum, const __int16 entityNum)
{
  bitarray_base<bitarray<2048> > *PrevSnap; 

  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)256) )
    return 1;
  PrevSnap = (bitarray_base<bitarray<2048> > *)CG_SnapshotMP_GetPrevSnap(localClientNum);
  if ( !PrevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 442, ASSERT_TYPE_ASSERT, "(snap != nullptr)", (const char *)&queryFormat, "snap != nullptr") )
    __debugbreak();
  return bitarray_base<bitarray<2048>>::testBit(PrevSnap + 763732, entityNum);
}

/*
==============
CgEntitySystem::CacheEntityData
==============
*/
void CgEntitySystem::CacheEntityData(CgEntitySystem *this, const centity_t *ent)
{
  __int16 number; 
  __int64 v14; 

  _RBX = ent;
  _RDI = this;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 79, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( _RBX->nextState.eType == ET_VEHICLE )
  {
    number = _RBX->nextState.number;
    if ( (unsigned __int16)number >= 0x800u )
    {
      LODWORD(v14) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 91, ASSERT_TYPE_ASSERT, "(unsigned)( ent->nextState.number ) < (unsigned)( (( 2048 ) + 0) )", "ent->nextState.number doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v14, 2048) )
        __debugbreak();
    }
    __asm { vmovups ymm0, ymmword ptr [rbx+19Ch] }
    _RCX = _RBX->nextState.number;
    __asm
    {
      vmovups ymmword ptr [rcx+rdi+195F60h], ymm0
      vmovups ymm1, ymmword ptr [rbx+1BCh]
      vmovups ymmword ptr [rcx+rdi+195F80h], ymm1
      vmovups ymm0, ymmword ptr [rbx+1DCh]
      vmovups ymmword ptr [rcx+rdi+195FA0h], ymm0
      vmovups xmm1, xmmword ptr [rbx+1FCh]
      vmovups xmmword ptr [rcx+rdi+195FC0h], xmm1
      vmovups ymm0, ymmword ptr [rbx+120h]
      vmovups ymmword ptr [rcx+rdi+195FD0h], ymm0
      vmovups ymm1, ymmword ptr [rbx+140h]
      vmovups ymmword ptr [rcx+rdi+195FF0h], ymm1
      vmovups ymm0, ymmword ptr [rbx+160h]
      vmovups ymmword ptr [rcx+rdi+196010h], ymm0
      vmovups xmm1, xmmword ptr [rbx+180h]
      vmovups xmmword ptr [rcx+rdi+196030h], xmm1
    }
    _RDI->m_entityDataCache.m_entData[_RCX].nextServerTime = CgEntityCache::s_nextServerTime;
    _RDI->m_entityDataCache.m_entData[_RCX].prevServerTime = CgEntityCache::s_prevServerTime;
    _RDI->m_entityDataCache.m_dataValid[_RBX->nextState.number] = 1;
  }
}

/*
==============
CgEntitySystem::GetEffectiveStance
==============
*/
__int64 CgEntitySystem::GetEffectiveStance(CgEntitySystem *this, const entityState_t *es)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  unsigned int v6; 
  __int16 playerFlags; 
  unsigned int v8; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 280, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 283, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = 0;
  if ( p_predictedPlayerState->clientNum == es->number )
  {
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0xBu) )
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 1u) )
      {
        return 2;
      }
      else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0) )
      {
        return 1;
      }
      return v6;
    }
    return 3;
  }
  if ( ((es->eType - 1) & 0xFFEF) != 0 )
    return v6;
  playerFlags = es->lerp.u.player.playerFlags;
  if ( (playerFlags & 0x10) != 0 )
    return 3;
  v8 = 0;
  if ( (playerFlags & 4) != 0 )
    return 2;
  return v8;
}

/*
==============
GetOrigin_Vec3Copy
==============
*/
void GetOrigin_Vec3Copy(const vec4_t *from, vec3_t *to)
{
  int v5; 
  int v6; 
  int v7; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  [rsp+38h+arg_0], xmm0
    vmovss  dword ptr [rdx+4], xmm2
    vmovss  xmm1, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+8], xmm1
  }
  if ( (v5 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_0], xmm2 }
  if ( (v6 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+38h+arg_0], xmm1 }
  if ( (v7 & 0x7F800000) == 2139095040 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 347, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
      __debugbreak();
  }
}

/*
==============
CgEntitySystem::GetTransformInfoFromEntityDataCache
==============
*/
void CgEntitySystem::GetTransformInfoFromEntityDataCache(CgEntitySystem *this, const centity_t *ent, vec3_t *outOrigin, vec3_t *outAngles, bool prev)
{
  __int64 number; 
  const LerpEntityState *p_nextState; 
  LocalClientNum_t m_localClientNum; 
  int v12; 
  CgTrajectory v13; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 106, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->nextState.number;
  p_nextState = &this->m_entityDataCache.m_entData[number].nextState;
  if ( !this->m_entityDataCache.m_dataValid[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 110, ASSERT_TYPE_ASSERT, "(m_entityDataCache.m_dataValid[ent->nextState.number])", (const char *)&queryFormat, "m_entityDataCache.m_dataValid[ent->nextState.number]") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( prev )
  {
    CgTrajectory::CgTrajectory(&v13, m_localClientNum, ent, p_nextState + 1);
    v12 = CgEntityCache::s_prevServerTime;
  }
  else
  {
    CgTrajectory::CgTrajectory(&v13, m_localClientNum, ent, p_nextState);
    v12 = CgEntityCache::s_nextServerTime;
  }
  BgTrajectory::EvaluateTrajectories(&v13, v12, outOrigin, outAngles);
}

/*
==============
CgEntitySystem::IsScriptedAgent
==============
*/
bool CgEntitySystem::IsScriptedAgent(CgEntitySystem *this, const entityState_t *es)
{
  __int64 m_localClientNum; 
  CgStatic **v6; 
  __int64 number; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  __int64 v10; 
  __int64 v11; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 237, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( es->eType != ET_AGENT )
    return 0;
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v11 = CgStatic::ms_allocatedCount;
    LODWORD(v10) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v6 = &CgStatic::ms_cgameStaticsArray[m_localClientNum];
  if ( !*v6 )
  {
    LODWORD(v11) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v11) )
      __debugbreak();
  }
  number = es->number;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)(*v6)->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)number >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v11) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
      LODWORD(v10) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * number);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, number);
  }
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 246, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  return CharacterInfo->usingAnimState == 1;
}

/*
==============
CgEntitySystem::ResetEntityDataCacheForFrame
==============
*/
void CgEntitySystem::ResetEntityDataCacheForFrame(CgEntitySystem *this)
{
  cg_t *LocalClientGlobals; 
  const snapshot_t *snap; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  _RDX = LocalClientGlobals;
  if ( LocalClientGlobals && (snap = LocalClientGlobals->snap) != NULL && _RDX->nextSnap )
  {
    CgEntityCache::s_prevServerTime = snap->serverTime;
    CgEntityCache::s_nextServerTime = _RDX->nextSnap->serverTime;
    __asm { vmovss  xmm0, dword ptr [rdx+65E0h] }
  }
  else
  {
    CgEntityCache::s_prevServerTime = 0;
    CgEntityCache::s_nextServerTime = 0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovss  cs:?s_frameInterpolation@CgEntityCache@@2MA, xmm0; float CgEntityCache::s_frameInterpolation }
  memset_0(this->m_entityDataCache.m_dataValid, 0, sizeof(this->m_entityDataCache.m_dataValid));
}

/*
==============
CgEntitySystem::ResetEntitySystemObufscation
==============
*/
void CgEntitySystem::ResetEntitySystemObufscation(const LocalClientNum_t localClientNum)
{
  LocalClientNum_t v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  bool v7; 
  __int16 v8; 
  __int64 v10; 
  CgEntitySystem *EntitySystem; 
  unsigned __int64 p_origin; 
  unsigned __int64 p_Get_origin; 
  unsigned __int64 p_prevOrigin; 
  unsigned __int64 p_Get_prevOrigin; 
  signed int v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  signed int v27; 
  __int64 v28; 
  bool v29; 
  const vec3_t *v30; 
  unsigned __int64 v31; 
  void (__fastcall *v32)(const vec4_t *, vec3_t *); 
  unsigned __int64 v33; 
  void (__fastcall *v34)(const vec3_t *, vec4_t *); 
  unsigned __int64 v35; 
  void (__fastcall *v36)(const vec4_t *, vec3_t *); 
  unsigned __int64 v37; 
  void (__fastcall *v38)(const vec3_t *, vec4_t *); 
  CgEntitySystem *v39; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int *v47; 
  unsigned int v48; 
  unsigned int v49; 
  __int64 randomIntSet; 
  __int64 randomIntSeta; 
  __int64 randomIntGet; 
  __int64 randomIntGeta; 
  __int16 v58; 
  LocalClientNum_t localClientNuma[2]; 
  bdRandom v60; 
  bdRandom v61; 
  __int64 v62; 
  vec3_t inOrigin; 
  int v64[14]; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  v62 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v3 = localClientNum;
  localClientNuma[0] = localClientNum;
  bdRandom::bdRandom(&v61);
  v5 = 0;
  v6 = 0i64;
  v7 = 1;
  do
  {
    if ( !v7 )
      goto LABEL_73;
    *((_BYTE *)&v64[4] + v6++) = 0;
    v7 = (unsigned __int64)v6 < 0x22;
  }
  while ( v6 < 34 );
  v8 = 0;
  v58 = 0;
  __asm { vmovss  xmm6, cs:__real@4f800000 }
  while ( 1 )
  {
    v10 = v8;
    EntitySystem = CgEntitySystem::GetEntitySystem(v3);
    if ( (unsigned int)v10 >= 0x800 )
    {
      LODWORD(randomIntGet) = 2048;
      LODWORD(randomIntSet) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", randomIntSet, randomIntGet) )
        __debugbreak();
    }
    _R13 = &EntitySystem->m_entities[v10].pose;
    p_origin = (unsigned __int64)&EntitySystem->m_entities[v10].pose.origin;
    *(_QWORD *)p_origin = 0i64;
    p_Get_origin = (unsigned __int64)&EntitySystem->m_entities[v10].pose.origin.Get_origin;
    *(_QWORD *)p_Get_origin = 0i64;
    __asm
    {
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmovss  dword ptr [r13+48h], xmm0
      vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
      vmovss  dword ptr [r13+4Ch], xmm1
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
      vmovss  dword ptr [r13+50h], xmm0
    }
    p_prevOrigin = (unsigned __int64)&EntitySystem->m_entities[v10].pose.prevOrigin;
    *(_QWORD *)p_prevOrigin = 0i64;
    p_Get_prevOrigin = (unsigned __int64)&EntitySystem->m_entities[v10].pose.prevOrigin.Get_prevOrigin;
    *(_QWORD *)p_Get_prevOrigin = 0i64;
    __asm
    {
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmovss  dword ptr [r13+78h], xmm0
      vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
      vmovss  dword ptr [r13+7Ch], xmm1
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
      vmovss  dword ptr [r13+80h], xmm0
    }
    bdRandom::bdRandom(&v60);
    v23 = bdRandom::nextUInt(&v60) % 0x22;
    bdRandom::~bdRandom(&v60);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v10 >= (int)ComCharacterLimits::ms_gameData.m_clientCount )
    {
      v31 = (unsigned __int64)GetOrigin_Vec3Copy ^ p_origin ^ s_aab_get_pointer_origin;
      v32 = *(void (__fastcall **)(const vec4_t *, vec3_t *))p_Get_origin;
      if ( *(_QWORD *)p_Get_origin && v32 != GetOrigin_Vec3Copy && v32 != (void (__fastcall *)(const vec4_t *, vec3_t *))v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 371, ASSERT_TYPE_ASSERT, "(( pose->origin.Get_origin == 0 ) || ( pose->origin.Get_origin == functionPointer ) || ( pose->origin.Get_origin == getFunc ))", (const char *)&queryFormat, "( pose->origin.Get_origin == NULL ) || ( pose->origin.Get_origin == functionPointer ) || ( pose->origin.Get_origin == getFunc )") )
        __debugbreak();
      *(_QWORD *)p_Get_origin = v31;
      v33 = (unsigned __int64)SetOrigin_Vec3Copy ^ p_Get_origin ^ s_aab_set_pointer_origin;
      v34 = *(void (__fastcall **)(const vec3_t *, vec4_t *))p_origin;
      if ( *(_QWORD *)p_origin && v34 != SetOrigin_Vec3Copy && v34 != (void (__fastcall *)(const vec3_t *, vec4_t *))v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 371, ASSERT_TYPE_ASSERT, "(( pose->origin.Set_origin == 0 ) || ( pose->origin.Set_origin == functionPointer ) || ( pose->origin.Set_origin == setFunc ))", (const char *)&queryFormat, "( pose->origin.Set_origin == NULL ) || ( pose->origin.Set_origin == functionPointer ) || ( pose->origin.Set_origin == setFunc )") )
        __debugbreak();
      *(_QWORD *)p_origin = v33;
      CG_SetPoseOrigin(_R13, &vec3_origin);
      v35 = (unsigned __int64)GetOrigin_Vec3Copy ^ p_prevOrigin ^ s_aab_get_pointer_prevorigin;
      v36 = *(void (__fastcall **)(const vec4_t *, vec3_t *))p_Get_prevOrigin;
      if ( *(_QWORD *)p_Get_prevOrigin && v36 != GetOrigin_Vec3Copy && v36 != (void (__fastcall *)(const vec4_t *, vec3_t *))v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 374, ASSERT_TYPE_ASSERT, "(( pose->prevOrigin.Get_prevOrigin == 0 ) || ( pose->prevOrigin.Get_prevOrigin == functionPointer ) || ( pose->prevOrigin.Get_prevOrigin == getFunc ))", (const char *)&queryFormat, "( pose->prevOrigin.Get_prevOrigin == NULL ) || ( pose->prevOrigin.Get_prevOrigin == functionPointer ) || ( pose->prevOrigin.Get_prevOrigin == getFunc )") )
        __debugbreak();
      *(_QWORD *)p_Get_prevOrigin = v35;
      v37 = (unsigned __int64)SetOrigin_Vec3Copy ^ p_Get_prevOrigin ^ s_aab_set_pointer_prevorigin;
      v38 = *(void (__fastcall **)(const vec3_t *, vec4_t *))p_prevOrigin;
      if ( *(_QWORD *)p_prevOrigin && v38 != SetOrigin_Vec3Copy && v38 != (void (__fastcall *)(const vec3_t *, vec4_t *))v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 374, ASSERT_TYPE_ASSERT, "(( pose->prevOrigin.Set_prevOrigin == 0 ) || ( pose->prevOrigin.Set_prevOrigin == functionPointer ) || ( pose->prevOrigin.Set_prevOrigin == setFunc ))", (const char *)&queryFormat, "( pose->prevOrigin.Set_prevOrigin == NULL ) || ( pose->prevOrigin.Set_prevOrigin == functionPointer ) || ( pose->prevOrigin.Set_prevOrigin == setFunc )") )
        __debugbreak();
      *(_QWORD *)p_prevOrigin = v37;
      v30 = &vec3_origin;
    }
    else
    {
      v24 = 0;
      v25 = v23;
      if ( *((_BYTE *)&v64[4] + v23) )
      {
        while ( 1 )
        {
          v26 = 0i64;
          if ( v25 != 33 )
            v26 = v25 + 1;
          v27 = v23 + 1;
          v23 = 0;
          if ( v25 != 33 )
            v23 = v27;
          if ( ++v24 == 34 )
            break;
LABEL_21:
          v25 = v26;
          if ( !*((_BYTE *)&v64[4] + v26) )
            goto LABEL_22;
        }
        v28 = 0i64;
        v29 = 1;
        while ( v29 )
        {
          *((_BYTE *)&v64[4] + v28++) = 0;
          v29 = (unsigned __int64)v28 < 0x22;
          if ( v28 >= 34 )
            goto LABEL_21;
        }
        j___report_rangecheckfailure(v25);
LABEL_73:
        j___report_rangecheckfailure(v4);
        JUMPOUT(0x141CAB3EBi64);
      }
LABEL_22:
      *((_BYTE *)&v64[4] + v23) = 1;
      __asm
      {
        vmovss  dword ptr [rsp+0E8h+inOrigin], xmm6
        vmovss  dword ptr [rsp+0E8h+inOrigin+4], xmm6
        vmovss  dword ptr [rsp+0E8h+inOrigin+8], xmm6
      }
      if ( (unsigned int)v23 >= 0x22 )
      {
        LODWORD(randomIntGet) = 34;
        LODWORD(randomIntSet) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 544, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randomIntSet, randomIntGet) )
          __debugbreak();
      }
      SetObfuscatedFunction(v23, p_Get_origin, p_origin, (void (__fastcall **)(const vec3_t *, vec4_t *))p_origin, (void (__fastcall **)(const vec4_t *, vec3_t *))p_Get_origin, s_aab_set_pointer_origin, s_aab_get_pointer_origin);
      CG_SetPoseOrigin(_R13, &inOrigin);
      __asm
      {
        vmovss  [rsp+0E8h+var_78], xmm6
        vmovss  [rsp+0E8h+var_74], xmm6
        vmovss  [rsp+0E8h+var_70], xmm6
      }
      if ( (unsigned int)v23 >= 0x22 )
      {
        LODWORD(randomIntGeta) = 34;
        LODWORD(randomIntSeta) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 628, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randomIntSeta, randomIntGeta) )
          __debugbreak();
      }
      SetObfuscatedFunction(v23, p_Get_prevOrigin, p_prevOrigin, (void (__fastcall **)(const vec3_t *, vec4_t *))p_prevOrigin, (void (__fastcall **)(const vec4_t *, vec3_t *))p_Get_prevOrigin, s_aab_set_pointer_prevorigin, s_aab_get_pointer_prevorigin);
      v30 = (const vec3_t *)v64;
    }
    CG_SetPrevPoseOrigin(_R13, v30);
    v8 = v58 + 1;
    v58 = v8;
    if ( v8 >= 2048 )
      break;
    v3 = localClientNuma[0];
  }
  v39 = CgEntitySystem::GetEntitySystem(localClientNuma[0]);
  _RBX = &v39->m_entityOrigin[0].v[2];
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v5 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
      break;
    if ( (unsigned int)v5 >= 0x800 )
    {
      LODWORD(randomIntGet) = 2048;
      LODWORD(randomIntSet) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 461, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", randomIntSet, randomIntGet) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin }
    if ( v5 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
    {
      __asm
      {
        vmovss  dword ptr [rbx-8], xmm0
        vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
        vmovss  dword ptr [rbx-4], xmm1
        vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
        vmovss  dword ptr [rbx], xmm0
      }
      ++v5;
      _RBX += 3;
    }
    else
    {
      v42 = s_entity_aab_Z;
      v43 = s_entity_aab_Y;
      v44 = s_entity_aab_X;
      __asm { vmovss  [rsp+0E8h+localClientNum], xmm0 }
      if ( (localClientNuma[0] & 0x7F800000) == 2139095040 )
        goto LABEL_77;
      __asm
      {
        vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
        vmovss  [rsp+0E8h+localClientNum], xmm0
      }
      if ( (localClientNuma[0] & 0x7F800000) == 2139095040 )
        goto LABEL_77;
      __asm
      {
        vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
        vmovss  [rsp+0E8h+localClientNum], xmm0
      }
      if ( (localClientNuma[0] & 0x7F800000) == 2139095040 )
      {
LABEL_77:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v47 = (unsigned int *)&v39->m_entityOrigin[v5];
      v48 = LODWORD(vec3_origin.v[0]) ^ (unsigned int)v47 ^ ~v44;
      v49 = v43 ^ LODWORD(vec3_origin.v[1]) ^ v48 ^ ((_DWORD)v39 + 4 * (3 * v5 + 389124));
      *v47 = v48;
      v47[1] = v49;
      v47[2] = v42 ^ LODWORD(vec3_origin.v[2]) ^ v49 ^ ((_DWORD)v39 + 4 * (3 * v5 + 389124));
      memset(localClientNuma, 0, sizeof(localClientNuma));
      ++v5;
      _RBX += 3;
    }
  }
  bdRandom::~bdRandom(&v61);
  _R11 = &v65;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
SetOrigin_Vec3Copy
==============
*/
void SetOrigin_Vec3Copy(const vec3_t *from, vec4_t *to)
{
  const vec3_t *v4; 
  int v7; 
  int v8; 
  int v9; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  v4 = from;
  if ( (v7 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v8 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v9 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 331, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
      __debugbreak();
  }
  to->v[0] = v4->v[0];
  to->v[1] = v4->v[1];
  *(_QWORD *)&to->xyz.z = LODWORD(v4->v[2]);
}

/*
==============
CgEntitySystem::ShouldCalculateParentLinkPositions
==============
*/
bool CgEntitySystem::ShouldCalculateParentLinkPositions(CgEntitySystem *this, const centity_t *cent)
{
  clientLinkInfo_t clientLinkInfo; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 254, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  clientLinkInfo = cent->nextState.clientLinkInfo;
  if ( (*(_WORD *)&clientLinkInfo & 0x7FF) != 0 && (*(_DWORD *)&clientLinkInfo & 0x200000) == 0 )
    return 1;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 262, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return p_predictedPlayerState->clientNum == cent->nextState.number && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0x1Bu) && p_predictedPlayerState->linkEnt != 2047;
}

