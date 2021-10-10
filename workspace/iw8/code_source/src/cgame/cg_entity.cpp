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
  __int64 v5; 
  __int64 v6; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 79, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->nextState.eType == ET_VEHICLE )
  {
    number = ent->nextState.number;
    if ( (unsigned __int16)number >= 0x800u )
    {
      LODWORD(v6) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 91, ASSERT_TYPE_ASSERT, "(unsigned)( ent->nextState.number ) < (unsigned)( (( 2048 ) + 0) )", "ent->nextState.number doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v6, 2048) )
        __debugbreak();
    }
    v5 = ent->nextState.number;
    *(__m256i *)this->m_entityDataCache.m_entData[v5].nextState.eFlags.m_flags = *(__m256i *)ent->nextState.lerp.eFlags.m_flags;
    *(__m256i *)&this->m_entityDataCache.m_entData[v5].nextState.pos.trDelta.y = *(__m256i *)&ent->nextState.lerp.pos.trDelta.y;
    *(__m256i *)this->m_entityDataCache.m_entData[v5].nextState.apos.trDelta.v = *(__m256i *)ent->nextState.lerp.apos.trDelta.v;
    *(LerpEntityStateInfoVolumeGrapple *)((char *)&this->m_entityDataCache.m_entData[v5].nextState.u.infoVolumeGrapple + 20) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&ent->nextState.lerp.u.infoVolumeGrapple + 20);
    *(__m256i *)this->m_entityDataCache.m_entData[v5].prevState.eFlags.m_flags = *(__m256i *)ent->prevState.eFlags.m_flags;
    *(__m256i *)&this->m_entityDataCache.m_entData[v5].prevState.pos.trDelta.y = *(__m256i *)&ent->prevState.pos.trDelta.y;
    *(__m256i *)this->m_entityDataCache.m_entData[v5].prevState.apos.trDelta.v = *(__m256i *)ent->prevState.apos.trDelta.v;
    *(LerpEntityStateInfoVolumeGrapple *)((char *)&this->m_entityDataCache.m_entData[v5].prevState.u.infoVolumeGrapple + 20) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&ent->prevState.u.infoVolumeGrapple + 20);
    this->m_entityDataCache.m_entData[v5].nextServerTime = CgEntityCache::s_nextServerTime;
    this->m_entityDataCache.m_entData[v5].prevServerTime = CgEntityCache::s_prevServerTime;
    this->m_entityDataCache.m_dataValid[ent->nextState.number] = 1;
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
  float v2; 
  float v3; 
  float v4; 

  v2 = from->v[0];
  to->v[0] = from->v[0];
  v3 = from->v[1];
  to->v[1] = v3;
  v4 = from->v[2];
  to->v[2] = v4;
  if ( ((LODWORD(v2) & 0x7F800000) == 2139095040 || (LODWORD(v3) & 0x7F800000) == 2139095040 || (LODWORD(v4) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 347, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
    __debugbreak();
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
  cg_t *v3; 
  const snapshot_t *snap; 
  float frameInterpolation; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v3 = LocalClientGlobals;
  if ( LocalClientGlobals && (snap = LocalClientGlobals->snap) != NULL && v3->nextSnap )
  {
    CgEntityCache::s_prevServerTime = snap->serverTime;
    CgEntityCache::s_nextServerTime = v3->nextSnap->serverTime;
    frameInterpolation = v3->frameInterpolation;
  }
  else
  {
    CgEntityCache::s_prevServerTime = 0;
    CgEntityCache::s_nextServerTime = 0;
    frameInterpolation = 0.0;
  }
  CgEntityCache::s_frameInterpolation = frameInterpolation;
  memset_0(this->m_entityDataCache.m_dataValid, 0, sizeof(this->m_entityDataCache.m_dataValid));
}

/*
==============
CgEntitySystem::ResetEntitySystemObufscation
==============
*/
void CgEntitySystem::ResetEntitySystemObufscation(const LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  bool v5; 
  __int16 v6; 
  __int64 v7; 
  CgEntitySystem *EntitySystem; 
  cpose_t *p_pose; 
  unsigned __int64 p_origin; 
  unsigned __int64 p_Get_origin; 
  unsigned __int64 p_prevOrigin; 
  unsigned __int64 p_Get_prevOrigin; 
  signed int v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  signed int v18; 
  __int64 v19; 
  bool v20; 
  const vec3_t *v21; 
  unsigned __int64 v22; 
  void (__fastcall *v23)(const vec4_t *, vec3_t *); 
  unsigned __int64 v24; 
  void (__fastcall *v25)(const vec3_t *, vec4_t *); 
  unsigned __int64 v26; 
  void (__fastcall *v27)(const vec4_t *, vec3_t *); 
  unsigned __int64 v28; 
  void (__fastcall *v29)(const vec3_t *, vec4_t *); 
  CgEntitySystem *v30; 
  float *v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int *v35; 
  unsigned int v36; 
  unsigned int v37; 
  __int64 randomIntSet; 
  __int64 randomIntSeta; 
  __int64 randomIntGet; 
  __int64 randomIntGeta; 
  __int16 v42; 
  LocalClientNum_t localClientNuma[2]; 
  bdRandom v44; 
  bdRandom v45; 
  __int64 v46; 
  vec3_t inOrigin; 
  int v48[14]; 

  v46 = -2i64;
  v1 = localClientNum;
  localClientNuma[0] = localClientNum;
  bdRandom::bdRandom(&v45);
  v3 = 0;
  v4 = 0i64;
  v5 = 1;
  do
  {
    if ( !v5 )
      goto LABEL_73;
    *((_BYTE *)&v48[4] + v4++) = 0;
    v5 = (unsigned __int64)v4 < 0x22;
  }
  while ( v4 < 34 );
  v6 = 0;
  v42 = 0;
  while ( 1 )
  {
    v7 = v6;
    EntitySystem = CgEntitySystem::GetEntitySystem(v1);
    if ( (unsigned int)v7 >= 0x800 )
    {
      LODWORD(randomIntGet) = 2048;
      LODWORD(randomIntSet) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", randomIntSet, randomIntGet) )
        __debugbreak();
    }
    p_pose = &EntitySystem->m_entities[v7].pose;
    p_origin = (unsigned __int64)&EntitySystem->m_entities[v7].pose.origin;
    *(_QWORD *)p_origin = 0i64;
    p_Get_origin = (unsigned __int64)&EntitySystem->m_entities[v7].pose.origin.Get_origin;
    *(_QWORD *)p_Get_origin = 0i64;
    p_pose->angles = vec3_origin;
    p_prevOrigin = (unsigned __int64)&EntitySystem->m_entities[v7].pose.prevOrigin;
    *(_QWORD *)p_prevOrigin = 0i64;
    p_Get_prevOrigin = (unsigned __int64)&EntitySystem->m_entities[v7].pose.prevOrigin.Get_prevOrigin;
    *(_QWORD *)p_Get_prevOrigin = 0i64;
    p_pose->prevAngles = vec3_origin;
    bdRandom::bdRandom(&v44);
    v14 = bdRandom::nextUInt(&v44) % 0x22;
    bdRandom::~bdRandom(&v44);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v7 >= (int)ComCharacterLimits::ms_gameData.m_clientCount )
    {
      v22 = (unsigned __int64)GetOrigin_Vec3Copy ^ p_origin ^ s_aab_get_pointer_origin;
      v23 = *(void (__fastcall **)(const vec4_t *, vec3_t *))p_Get_origin;
      if ( *(_QWORD *)p_Get_origin && v23 != GetOrigin_Vec3Copy && v23 != (void (__fastcall *)(const vec4_t *, vec3_t *))v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 371, ASSERT_TYPE_ASSERT, "(( pose->origin.Get_origin == 0 ) || ( pose->origin.Get_origin == functionPointer ) || ( pose->origin.Get_origin == getFunc ))", (const char *)&queryFormat, "( pose->origin.Get_origin == NULL ) || ( pose->origin.Get_origin == functionPointer ) || ( pose->origin.Get_origin == getFunc )") )
        __debugbreak();
      *(_QWORD *)p_Get_origin = v22;
      v24 = (unsigned __int64)SetOrigin_Vec3Copy ^ p_Get_origin ^ s_aab_set_pointer_origin;
      v25 = *(void (__fastcall **)(const vec3_t *, vec4_t *))p_origin;
      if ( *(_QWORD *)p_origin && v25 != SetOrigin_Vec3Copy && v25 != (void (__fastcall *)(const vec3_t *, vec4_t *))v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 371, ASSERT_TYPE_ASSERT, "(( pose->origin.Set_origin == 0 ) || ( pose->origin.Set_origin == functionPointer ) || ( pose->origin.Set_origin == setFunc ))", (const char *)&queryFormat, "( pose->origin.Set_origin == NULL ) || ( pose->origin.Set_origin == functionPointer ) || ( pose->origin.Set_origin == setFunc )") )
        __debugbreak();
      *(_QWORD *)p_origin = v24;
      CG_SetPoseOrigin(p_pose, &vec3_origin);
      v26 = (unsigned __int64)GetOrigin_Vec3Copy ^ p_prevOrigin ^ s_aab_get_pointer_prevorigin;
      v27 = *(void (__fastcall **)(const vec4_t *, vec3_t *))p_Get_prevOrigin;
      if ( *(_QWORD *)p_Get_prevOrigin && v27 != GetOrigin_Vec3Copy && v27 != (void (__fastcall *)(const vec4_t *, vec3_t *))v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 374, ASSERT_TYPE_ASSERT, "(( pose->prevOrigin.Get_prevOrigin == 0 ) || ( pose->prevOrigin.Get_prevOrigin == functionPointer ) || ( pose->prevOrigin.Get_prevOrigin == getFunc ))", (const char *)&queryFormat, "( pose->prevOrigin.Get_prevOrigin == NULL ) || ( pose->prevOrigin.Get_prevOrigin == functionPointer ) || ( pose->prevOrigin.Get_prevOrigin == getFunc )") )
        __debugbreak();
      *(_QWORD *)p_Get_prevOrigin = v26;
      v28 = (unsigned __int64)SetOrigin_Vec3Copy ^ p_Get_prevOrigin ^ s_aab_set_pointer_prevorigin;
      v29 = *(void (__fastcall **)(const vec3_t *, vec4_t *))p_prevOrigin;
      if ( *(_QWORD *)p_prevOrigin && v29 != SetOrigin_Vec3Copy && v29 != (void (__fastcall *)(const vec3_t *, vec4_t *))v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 374, ASSERT_TYPE_ASSERT, "(( pose->prevOrigin.Set_prevOrigin == 0 ) || ( pose->prevOrigin.Set_prevOrigin == functionPointer ) || ( pose->prevOrigin.Set_prevOrigin == setFunc ))", (const char *)&queryFormat, "( pose->prevOrigin.Set_prevOrigin == NULL ) || ( pose->prevOrigin.Set_prevOrigin == functionPointer ) || ( pose->prevOrigin.Set_prevOrigin == setFunc )") )
        __debugbreak();
      *(_QWORD *)p_prevOrigin = v28;
      v21 = &vec3_origin;
    }
    else
    {
      v15 = 0;
      v16 = v14;
      if ( *((_BYTE *)&v48[4] + v14) )
      {
        while ( 1 )
        {
          v17 = 0i64;
          if ( v16 != 33 )
            v17 = v16 + 1;
          v18 = v14 + 1;
          v14 = 0;
          if ( v16 != 33 )
            v14 = v18;
          if ( ++v15 == 34 )
            break;
LABEL_21:
          v16 = v17;
          if ( !*((_BYTE *)&v48[4] + v17) )
            goto LABEL_22;
        }
        v19 = 0i64;
        v20 = 1;
        while ( v20 )
        {
          *((_BYTE *)&v48[4] + v19++) = 0;
          v20 = (unsigned __int64)v19 < 0x22;
          if ( v19 >= 34 )
            goto LABEL_21;
        }
        j___report_rangecheckfailure(v16);
LABEL_73:
        j___report_rangecheckfailure(v2);
        JUMPOUT(0x141CAB3EBi64);
      }
LABEL_22:
      *((_BYTE *)&v48[4] + v14) = 1;
      inOrigin.v[0] = FLOAT_4_2949673e9;
      inOrigin.v[1] = FLOAT_4_2949673e9;
      inOrigin.v[2] = FLOAT_4_2949673e9;
      if ( (unsigned int)v14 >= 0x22 )
      {
        LODWORD(randomIntGet) = 34;
        LODWORD(randomIntSet) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 544, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randomIntSet, randomIntGet) )
          __debugbreak();
      }
      SetObfuscatedFunction(v14, p_Get_origin, p_origin, (void (__fastcall **)(const vec3_t *, vec4_t *))p_origin, (void (__fastcall **)(const vec4_t *, vec3_t *))p_Get_origin, s_aab_set_pointer_origin, s_aab_get_pointer_origin);
      CG_SetPoseOrigin(p_pose, &inOrigin);
      *(float *)v48 = FLOAT_4_2949673e9;
      *(float *)&v48[1] = FLOAT_4_2949673e9;
      *(float *)&v48[2] = FLOAT_4_2949673e9;
      if ( (unsigned int)v14 >= 0x22 )
      {
        LODWORD(randomIntGeta) = 34;
        LODWORD(randomIntSeta) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 628, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randomIntSeta, randomIntGeta) )
          __debugbreak();
      }
      SetObfuscatedFunction(v14, p_Get_prevOrigin, p_prevOrigin, (void (__fastcall **)(const vec3_t *, vec4_t *))p_prevOrigin, (void (__fastcall **)(const vec4_t *, vec3_t *))p_Get_prevOrigin, s_aab_set_pointer_prevorigin, s_aab_get_pointer_prevorigin);
      v21 = (const vec3_t *)v48;
    }
    CG_SetPrevPoseOrigin(p_pose, v21);
    v6 = v42 + 1;
    v42 = v6;
    if ( v6 >= 2048 )
      break;
    v1 = localClientNuma[0];
  }
  v30 = CgEntitySystem::GetEntitySystem(localClientNuma[0]);
  v31 = &v30->m_entityOrigin[0].v[2];
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v3 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
      break;
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(randomIntGet) = 2048;
      LODWORD(randomIntSet) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 461, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", randomIntSet, randomIntGet) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v3 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
    {
      *(vec3_t *)(v31 - 2) = vec3_origin;
      ++v3;
      v31 += 3;
    }
    else
    {
      v32 = s_entity_aab_Z;
      v33 = s_entity_aab_Y;
      v34 = s_entity_aab_X;
      localClientNuma[0] = SLODWORD(vec3_origin.v[0]);
      if ( (LODWORD(vec3_origin.v[0]) & 0x7F800000) == 2139095040 || (localClientNuma[0] = SLODWORD(vec3_origin.v[1]), (LODWORD(vec3_origin.v[1]) & 0x7F800000) == 2139095040) || (localClientNuma[0] = SLODWORD(vec3_origin.v[2]), (LODWORD(vec3_origin.v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v35 = (unsigned int *)&v30->m_entityOrigin[v3];
      v36 = LODWORD(vec3_origin.v[0]) ^ (unsigned int)v35 ^ ~v34;
      v37 = v33 ^ LODWORD(vec3_origin.v[1]) ^ v36 ^ ((_DWORD)v30 + 4 * (3 * v3 + 389124));
      *v35 = v36;
      v35[1] = v37;
      v35[2] = v32 ^ LODWORD(vec3_origin.v[2]) ^ v37 ^ ((_DWORD)v30 + 4 * (3 * v3 + 389124));
      memset(localClientNuma, 0, sizeof(localClientNuma));
      ++v3;
      v31 += 3;
    }
  }
  bdRandom::~bdRandom(&v45);
}

/*
==============
SetOrigin_Vec3Copy
==============
*/
void SetOrigin_Vec3Copy(const vec3_t *from, vec4_t *to)
{
  if ( ((LODWORD(from->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(from->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(from->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.cpp", 331, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
    __debugbreak();
  to->v[0] = from->v[0];
  to->v[1] = from->v[1];
  *(_QWORD *)&to->xyz.z = LODWORD(from->v[2]);
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

