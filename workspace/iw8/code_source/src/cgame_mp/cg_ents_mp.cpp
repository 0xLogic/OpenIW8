/*
==============
CG_EntityMP_GetDObj
==============
*/

DObj *__fastcall CG_EntityMP_GetDObj(LocalClientNum_t localClientNum, int entIndex, int entType, DObjModel *dobjModel, const unsigned __int16 numModels, bool *createdNew)
{
  return ?CG_EntityMP_GetDObj@@YAPEAUDObj@@W4LocalClientNum_t@@HHPEAUDObjModel@@GPEA_N@Z(localClientNum, entIndex, entType, dobjModel, numModels, createdNew);
}

/*
==============
CgEntitySystemMP::IsMP
==============
*/

bool __fastcall CgEntitySystemMP::IsMP(CgEntitySystemMP *this)
{
  return ?IsMP@CgEntitySystemMP@@UEBA_NXZ(this);
}

/*
==============
CgEntitySystemMP::ShouldDelayEntityPacketPostPS
==============
*/

PostPSDelayType __fastcall CgEntitySystemMP::ShouldDelayEntityPacketPostPS(CgEntitySystemMP *this, const cg_t *cgameGlob, const centity_t *cent)
{
  return ?ShouldDelayEntityPacketPostPS@CgEntitySystemMP@@UEAA?AW4PostPSDelayType@@PEBVcg_t@@PEBUcentity_t@@@Z(this, cgameGlob, cent);
}

/*
==============
CgEntitySystemMP::AddPacketEntity
==============
*/

void __fastcall CgEntitySystemMP::AddPacketEntity(CgEntitySystemMP *this, int entityIndex)
{
  ?AddPacketEntity@CgEntitySystemMP@@UEAAXH@Z(this, entityIndex);
}

/*
==============
CgEntitySystemMP::AddPostPlayerStatePacketEntities
==============
*/

void __fastcall CgEntitySystemMP::AddPostPlayerStatePacketEntities(CgEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  ?AddPostPlayerStatePacketEntities@CgEntitySystemMP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgEntitySystemMP::ProcessNoteTracks
==============
*/

void __fastcall CgEntitySystemMP::ProcessNoteTracks(CgEntitySystemMP *this, const unsigned int entityIndex, const XAnimNotifyHandle notifyHandle)
{
  ?ProcessNoteTracks@CgEntitySystemMP@@UEAAXIVXAnimNotifyHandle@@@Z(this, entityIndex, notifyHandle);
}

/*
==============
CG_EntityMP_UpdatePortableRadarEffect
==============
*/

void __fastcall CG_EntityMP_UpdatePortableRadarEffect(LocalClientNum_t localClientNum, const int radarEntNum, const unsigned int ownerEntNum, const vec3_t *origin)
{
  ?CG_EntityMP_UpdatePortableRadarEffect@@YAXW4LocalClientNum_t@@HIAEBTvec3_t@@@Z(localClientNum, radarEntNum, ownerEntNum, origin);
}

/*
==============
CgEntitySystemMP::GetRenderFlagForRefEntity
==============
*/

unsigned int __fastcall CgEntitySystemMP::GetRenderFlagForRefEntity(CgEntitySystemMP *this, const entityState_t *es)
{
  return ?GetRenderFlagForRefEntity@CgEntitySystemMP@@UEBAIPEBUentityState_t@@@Z(this, es);
}

/*
==============
CG_EntityMP_GetXModelFromIndex
==============
*/

const XModel *__fastcall CG_EntityMP_GetXModelFromIndex(const LocalClientNum_t localClientNum, const unsigned int xmodelIndex)
{
  return ?CG_EntityMP_GetXModelFromIndex@@YAPEBUXModel@@W4LocalClientNum_t@@I@Z(localClientNum, xmodelIndex);
}

/*
==============
CgEntitySystemMP::GetDObj_General
==============
*/

DObj *__fastcall CgEntitySystemMP::GetDObj_General(CgEntitySystemMP *this, const centity_t *cent, bool *createdNew_optionalOut)
{
  return ?GetDObj_General@CgEntitySystemMP@@QEAAPEAUDObj@@PEBUcentity_t@@PEA_N@Z(this, cent, createdNew_optionalOut);
}

/*
==============
CG_EntityMP_UpdateScramblerEffect
==============
*/

void __fastcall CG_EntityMP_UpdateScramblerEffect(LocalClientNum_t localClientNum, const unsigned int scramblerEntNum, const unsigned int ownerEntNum, const vec3_t *origin, const JammingType jammingType)
{
  ?CG_EntityMP_UpdateScramblerEffect@@YAXW4LocalClientNum_t@@IIAEBTvec3_t@@W4JammingType@@@Z(localClientNum, scramblerEntNum, ownerEntNum, origin, jammingType);
}

/*
==============
CG_EntityMP_GetFirstModelName
==============
*/

const char *__fastcall CG_EntityMP_GetFirstModelName(const LocalClientNum_t localClientNum, const centity_t *cent, bool *outIsComposite)
{
  return ?CG_EntityMP_GetFirstModelName@@YAPEBDW4LocalClientNum_t@@PEBUcentity_t@@AEA_N@Z(localClientNum, cent, outIsComposite);
}

/*
==============
CgEntitySystemMP::CG_EntityMP_GetTeam
==============
*/

team_t __fastcall CgEntitySystemMP::CG_EntityMP_GetTeam(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  return ?CG_EntityMP_GetTeam@CgEntitySystemMP@@SA?AW4team_t@@W4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_EntityMP_GetRenderFlagForRefEntity
==============
*/

unsigned int __fastcall CG_EntityMP_GetRenderFlagForRefEntity(LocalClientNum_t localClientNum, const cg_t *cgameGlob, const centity_t *cent, const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *r_eFlags)
{
  return ?CG_EntityMP_GetRenderFlagForRefEntity@@YAIW4LocalClientNum_t@@PEBVcg_t@@PEBUcentity_t@@AEBV?$GameModeFlagContainer@W4EntityStateFlagsCommon@@W4EntityStateFlagsSP@@W4EntityStateFlagsMP@@$0CA@@@@Z(localClientNum, cgameGlob, cent, r_eFlags);
}

/*
==============
CG_EntityMP_TurretXAnimNodeSetup
==============
*/

void __fastcall CG_EntityMP_TurretXAnimNodeSetup(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent, bool isPlayerView)
{
  ?CG_EntityMP_TurretXAnimNodeSetup@@YAXW4LocalClientNum_t@@PEAUDObj@@PEAUcentity_t@@_N@Z(localClientNum, obj, cent, isPlayerView);
}

/*
==============
CG_EntityMP_TurretPreControllers
==============
*/

void __fastcall CG_EntityMP_TurretPreControllers(LocalClientNum_t localClientIndex, DObj *obj, centity_t *cent, bool entitySnapshotReset)
{
  ?CG_EntityMP_TurretPreControllers@@YAXW4LocalClientNum_t@@PEAUDObj@@PEAUcentity_t@@_N@Z(localClientIndex, obj, cent, entitySnapshotReset);
}

/*
==============
CgEntitySystemMP::CG_EntityMP_IsOnSameTeam
==============
*/

bool __fastcall CgEntitySystemMP::CG_EntityMP_IsOnSameTeam(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  return ?CG_EntityMP_IsOnSameTeam@CgEntitySystemMP@@SA_NW4LocalClientNum_t@@QEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CgEntitySystemMP::GetDObj_General
==============
*/

DObj *__fastcall CgEntitySystemMP::GetDObj_General(CgEntitySystemMP *this, const int entNum, bool *createdNew_optionalOut)
{
  return ?GetDObj_General@CgEntitySystemMP@@QEAAPEAUDObj@@HPEA_N@Z(this, entNum, createdNew_optionalOut);
}

/*
==============
CG_EntityMP_ProcessEntityNoteTracks
==============
*/

void __fastcall CG_EntityMP_ProcessEntityNoteTracks(const CgGlobalsMP *cgameGlob, DObj *dObj, int entNum, const XAnimNotifyHandle notifyHandle)
{
  ?CG_EntityMP_ProcessEntityNoteTracks@@YAXPEBVCgGlobalsMP@@PEAUDObj@@HVXAnimNotifyHandle@@@Z(cgameGlob, dObj, entNum, notifyHandle);
}

/*
==============
CG_EntityMP_ItemDObjModelsMatch
==============
*/

bool __fastcall CG_EntityMP_ItemDObjModelsMatch(const LocalClientNum_t localClientNum, const int entIndex, const Weapon *r_weapon, DObjModel *dobjModels, unsigned __int16 modelCount)
{
  return ?CG_EntityMP_ItemDObjModelsMatch@@YA_NW4LocalClientNum_t@@HAEBUWeapon@@QEAUDObjModel@@G@Z(localClientNum, entIndex, r_weapon, dobjModels, modelCount);
}

/*
==============
CG_EntityMP_CalcLerpPositions
==============
*/

int __fastcall CG_EntityMP_CalcLerpPositions(LocalClientNum_t localClientNum, centity_t *cent)
{
  return ?CG_EntityMP_CalcLerpPositions@@YAHW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_EntityMP_ResetDObjNoteTracks
==============
*/

void CG_EntityMP_ResetDObjNoteTracks(void)
{
  ?CG_EntityMP_ResetDObjNoteTracks@@YAXXZ();
}

/*
==============
CgEntitySystemMP::AddPacketFxEntity
==============
*/

void __fastcall CgEntitySystemMP::AddPacketFxEntity(CgEntitySystemMP *this, int entityIndex)
{
  ?AddPacketFxEntity@CgEntitySystemMP@@UEAAXH@Z(this, entityIndex);
}

/*
==============
CgEntitySystemMP::ResetEntityPoseState
==============
*/

void __fastcall CgEntitySystemMP::ResetEntityPoseState(CgEntitySystemMP *this)
{
  ?ResetEntityPoseState@CgEntitySystemMP@@QEAAXXZ(this);
}

/*
==============
CgEntitySystemMP::AddDeferredEntitiesToStreamingDistanceCache
==============
*/

void __fastcall CgEntitySystemMP::AddDeferredEntitiesToStreamingDistanceCache(CgEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  ?AddDeferredEntitiesToStreamingDistanceCache@CgEntitySystemMP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_EntityMP_ValidateDObj
==============
*/

void __fastcall CG_EntityMP_ValidateDObj(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_EntityMP_ValidateDObj@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_EntityMP_DObjUpdateInfo
==============
*/

XAnimNotifyHandle __fastcall CG_EntityMP_DObjUpdateInfo(const int frametime, DObj *obj, bool notify, int entnum)
{
  return ?CG_EntityMP_DObjUpdateInfo@@YA?AVXAnimNotifyHandle@@HPEAUDObj@@_NH@Z(frametime, obj, notify, entnum);
}

/*
==============
CG_EntityMP_GetDObj_General
==============
*/

DObj *__fastcall CG_EntityMP_GetDObj_General(const LocalClientNum_t localClientNum, const centity_t *cent, bool *createdNew_optionalOut)
{
  return ?CG_EntityMP_GetDObj_General@@YAPEAUDObj@@W4LocalClientNum_t@@PEBUcentity_t@@PEA_N@Z(localClientNum, cent, createdNew_optionalOut);
}

/*
==============
CgEntitySystemMP::AddPacketEntities
==============
*/

void __fastcall CgEntitySystemMP::AddPacketEntities(CgEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  ?AddPacketEntities@CgEntitySystemMP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_EntityMP_ProcessEntity
==============
*/

void __fastcall CG_EntityMP_ProcessEntity(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_EntityMP_ProcessEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_EntityMP_IsValidNotetrackEnt
==============
*/

bool __fastcall CG_EntityMP_IsValidNotetrackEnt(const LocalClientNum_t localClientNum, const centity_t *centity, const int entNum)
{
  return ?CG_EntityMP_IsValidNotetrackEnt@@YA_NW4LocalClientNum_t@@PEBUcentity_t@@H@Z(localClientNum, centity, entNum);
}

/*
==============
CgEntitySystemMP::AddDeferredEntitiesToStreamingDistanceCache
==============
*/
void CgEntitySystemMP::AddDeferredEntitiesToStreamingDistanceCache(CgEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  unsigned __int16 postPsEntityHead; 
  __int64 v13; 
  __int64 v14; 
  void *retaddr; 

  _RAX = &retaddr;
  postPsEntityHead = this->m_entityWork.postPsEntityHead;
  if ( postPsEntityHead != 2047 )
  {
    __asm
    {
      vmovaps xmmword ptr [rax-38h], xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    while ( 1 )
    {
      if ( postPsEntityHead >= 0x800u )
      {
        LODWORD(v14) = 2048;
        LODWORD(v13) = postPsEntityHead;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( (CgEntitySystemMP *)((char *)this + 760 * postPsEntityHead) == (CgEntitySystemMP *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3729, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
        __debugbreak();
      if ( (this->m_entities[postPsEntityHead].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3730, ASSERT_TYPE_ASSERT, "(CENextValid(cent))", (const char *)&queryFormat, "CENextValid(cent)") )
        __debugbreak();
      if ( this->m_entities[postPsEntityHead].nextState.eType != this->m_entities[postPsEntityHead].pose.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3731, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == cent->pose.eType)", (const char *)&queryFormat, "cent->nextState.eType == cent->pose.eType") )
        __debugbreak();
      switch ( this->m_entities[postPsEntityHead].nextState.eType )
      {
        case ET_PLAYER:
          __asm { vmovaps xmm2, xmm6; distanceSqMultiplier }
          CG_DistanceCacheMP_AddPlayer(localClientNum, this->m_entities[postPsEntityHead].nextState.number, *(const float *)&_XMM2);
          break;
        case ET_PLAYER_CORPSE:
          goto LABEL_20;
        case ET_ITEM:
          __asm { vmovaps xmm2, xmm6; distanceSqMultiplier }
          CG_DistanceCacheMP_AddItem(localClientNum, this->m_entities[postPsEntityHead].nextState.number, *(const float *)&_XMM2);
          break;
        case ET_AGENT:
          __asm { vmovaps xmm2, xmm6; distanceSqMultiplier }
          CG_DistanceCacheMP_AddAgent(localClientNum, this->m_entities[postPsEntityHead].nextState.number, *(const float *)&_XMM2);
          break;
        case ET_AGENT_CORPSE:
LABEL_20:
          __asm { vmovaps xmm2, xmm6; distanceSqMultiplier }
          CG_DistanceCacheMP_AddPlayerCorpse(localClientNum, this->m_entities[postPsEntityHead].nextState.number, *(const float *)&_XMM2);
          break;
        default:
          break;
      }
      if ( this->m_entityWork.entityNext[postPsEntityHead] == 2047 && postPsEntityHead != this->m_entityWork.postPsEntityTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3756, ASSERT_TYPE_ASSERT, "( m_entityWork.entityNext[entNum] != ENTITYNUM_NONE || entNum == m_entityWork.postPsEntityTail )", "We hit the end of the main thread entity list without hitting the tail. The list was built incorrectly.") )
        __debugbreak();
      postPsEntityHead = this->m_entityWork.entityNext[postPsEntityHead];
      if ( postPsEntityHead == 2047 )
      {
        __asm { vmovaps xmm6, [rsp+78h+var_38] }
        return;
      }
    }
  }
}

/*
==============
CgEntitySystemMP::AddPacketEntities
==============
*/
void CgEntitySystemMP::AddPacketEntities(CgEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  LocalClientNum_t v3; 
  CgPredictedEntitySystem *System; 
  CgTargetAssistMP *InstanceMP; 
  int v7; 
  cgs_t *LocalClientStaticGlobals; 
  bool entUpdateToggleContextKey; 
  cg_t *v10; 
  CgAntiLag *Instance; 
  const CgSnapshotMP *NextSnap; 
  CgVehicleSystem *VehicleSystem; 
  __int64 m_localClientNum; 
  CgEventSystemMP *v15; 
  cg_t *v16; 
  entityState_t *entities; 
  __int64 number; 
  CgEntitySystem *EntitySystem; 
  __int64 v20; 
  unsigned __int16 v21; 
  const dvar_t *v22; 
  char v28; 
  char v29; 
  CgBallistics *v31; 
  __int64 v32; 
  __int64 v33; 
  int data; 
  LocalClientNum_t v36; 
  cg_t *cgameGlob; 

  v36 = localClientNum;
  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "add packet ents");
  Profile_Begin(428);
  System = CgPredictedEntitySystem::GetSystem(v3);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3575, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  CgPredictedEntitySystem::PreAddPacketEntitiesUpdate(System);
  InstanceMP = CgTargetAssistMP::GetInstanceMP(v3);
  BgTargetAssist::ClearTargets(InstanceMP);
  v7 = 0;
  this->m_impulseFieldEntityCount = 0;
  memset_0(this->m_impulseFieldEntities, 0, sizeof(this->m_impulseFieldEntities));
  CG_DistanceCacheMP_Reset(v3);
  AimTargetMP_ClearTargetList(v3);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)this->m_localClientNum);
  entUpdateToggleContextKey = LocalClientStaticGlobals->entUpdateToggleContextKey;
  LocalClientStaticGlobals->entUpdateToggleContextKey = !entUpdateToggleContextKey;
  cgameGlob = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v10 = cgameGlob;
  cgameGlob->rumbleScale = 0.0;
  CgEntitySystem::ResetEntityDataCacheForFrame(this);
  if ( !CgAntiLag::IsDisabledForMigration(v3) )
  {
    Instance = CgAntiLag::GetInstance((const LocalClientNum_t)this->m_localClientNum);
    CgAntiLag::StartSceneArchiveClient(Instance, v10->time);
  }
  NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)this->m_localClientNum);
  if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3611, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3615, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  CgVehicleSystem::UpdateVehicleDObjs(VehicleSystem);
  CgVehicleSystem::UpdateVehicleRevPriority(VehicleSystem);
  DObjResetClientNotifyList();
  CG_PlayersMP_UpdatePerFrameCullingPriorities(v3);
  CG_EntsMP_UpdatePlayerAnimationLods(v3);
  CG_EntsMP_UpdatePlayerDObjPriorities(v3, NextSnap);
  CG_PlayersMP_UpdatePlayerEventPriorities(v3, NextSnap);
  CG_Weapons_CreateWeaponPhysics(v3, v10->clientNum);
  R_BeginDelayedSceneModels();
  LUIOnEntityElementSpawner::ResetEntityFilters((const LocalClientNum_t)this->m_localClientNum);
  CgEntitySystem::AddPacketEntitiesFromWorkers(this, (const LocalClientNum_t)this->m_localClientNum, NextSnap, entUpdateToggleContextKey);
  CG_Event_Debug_FlipFrame(this->m_localClientNum);
  if ( g_processEvents )
  {
    m_localClientNum = this->m_localClientNum;
    if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 235, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", m_localClientNum, 2, (unsigned __int8)CgEventSystem::ms_allocatedType) )
      __debugbreak();
    if ( (unsigned int)m_localClientNum >= CgEventSystem::ms_allocatedCount )
    {
      LODWORD(v33) = CgEventSystem::ms_allocatedCount;
      LODWORD(v32) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    if ( !CgEventSystem::ms_eventSystemArray[m_localClientNum] )
    {
      LODWORD(v33) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 237, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v33) )
        __debugbreak();
    }
    v15 = (CgEventSystemMP *)CgEventSystem::ms_eventSystemArray[m_localClientNum];
    if ( NextSnap->numEntities > 0 )
    {
      v16 = cgameGlob;
      entities = NextSnap->entities;
      do
      {
        number = entities->number;
        EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)this->m_localClientNum);
        if ( (unsigned int)number >= 0x800 )
        {
          LODWORD(v33) = 2048;
          LODWORD(v32) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v32, v33) )
            __debugbreak();
        }
        v20 = (__int64)&EntitySystem->m_entities[number];
        v21 = *(_WORD *)(v20 + 408);
        if ( (unsigned __int16)(v21 - 8) > 1u && CG_EntityMP_ShouldDelayEntityPacketPostPS(this->m_localClientNum, v16, (const centity_t *)v20) == PPSD_NOT_DELAYED )
        {
          if ( v21 < 0x1Du )
            CgEventSystem::CheckEntityEvents(v15, (centity_t *)v20, 0);
          else
            CgEventSystemMP::CheckEvents(v15, (centity_t *)v20);
        }
        ++v7;
        ++entities;
      }
      while ( v7 < NextSnap->numEntities );
      v3 = v36;
      v10 = cgameGlob;
    }
  }
  CG_Execution_ProcessFireWeapon(v3);
  data = 3 * v3 + 2;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING|0x100) )
    goto LABEL_40;
  v22 = DVARBOOL_physics_killswitchEnableClientPredWorldUseCGameTimeForWorldStep;
  if ( !DVARBOOL_physics_killswitchEnableClientPredWorldUseCGameTimeForWorldStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_killswitchEnableClientPredWorldUseCGameTimeForWorldStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+65E4h]
      vmulss  xmm1, xmm0, cs:__real@3a83126f
    }
  }
  else
  {
LABEL_40:
    *(double *)&_XMM0 = Com_GetTimeScale();
    __asm { vmulss  xmm1, xmm0, cs:?cls@@3UClStatic@@A.frametime_rawSeconds; ClStatic cls }
  }
  _RBX = DVARFLT_physics_maxClientWorldTimeStep;
  __asm { vmovss  [rsp+88h+arg_4], xmm1 }
  if ( !DVARFLT_physics_maxClientWorldTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_maxClientWorldTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( !(v28 | v29) )
  {
    __asm
    {
      vminss  xmm0, xmm1, [rsp+88h+arg_4]
      vmovss  [rsp+88h+arg_4], xmm0
    }
  }
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE, &data);
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD, &data);
  v31 = CgBallistics::GetSystem(v3);
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3696, ASSERT_TYPE_ASSERT, "(balisticsSystem)", (const char *)&queryFormat, "balisticsSystem") )
    __debugbreak();
  CgBallistics::StartWorkers(v31, 0);
  if ( !CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(v10) )
    CgSimBulletFirePellet_StartWorkers(this->m_localClientNum);
  CG_Foliage_StartProcessCharacterEntityCmds();
  CG_PlayerState_OnEndAddPacketEntities(v3);
  ScriptableCl_ProcessErrors();
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
CgEntitySystemMP::AddPacketEntity
==============
*/
void CgEntitySystemMP::AddPacketEntity(CgEntitySystemMP *this, int entityIndex)
{
  CG_EntityMP_AddPacketEntity(this->m_localClientNum, entityIndex);
}

/*
==============
CgEntitySystemMP::AddPacketFxEntity
==============
*/
void CgEntitySystemMP::AddPacketFxEntity(CgEntitySystemMP *this, int entityIndex)
{
  LocalClientNum_t m_localClientNum; 
  vec3_t trBase; 

  m_localClientNum = this->m_localClientNum;
  _RBX = CG_GetEntity(m_localClientNum, entityIndex);
  if ( (unsigned __int16)(_RBX->nextState.eType - 8) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3227, ASSERT_TYPE_ASSERT, "((cent->nextState.eType == ET_FX) || (cent->nextState.eType == ET_LOOP_FX))", (const char *)&queryFormat, "(cent->nextState.eType == ET_FX) || (cent->nextState.eType == ET_LOOP_FX)", -2i64) )
    __debugbreak();
  if ( _RBX->nextState.staticState.general.xmodel )
  {
    Trajectory_GetTrBase(&_RBX->nextState.lerp.pos, &trBase);
    CG_SetPoseOrigin(&_RBX->pose, &trBase);
    _RBX->pose.angles.v[0] = _RBX->nextState.lerp.apos.trBase.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1D4h]
      vmovss  dword ptr [rbx+4Ch], xmm0
      vmovss  xmm1, dword ptr [rbx+1D8h]
      vmovss  dword ptr [rbx+50h], xmm1
    }
    memset(&trBase, 0, sizeof(trBase));
    CG_EntityMP_ProcessFxEntity(m_localClientNum, entityIndex, _RBX);
  }
}

/*
==============
CgEntitySystemMP::AddPostPlayerStatePacketEntities
==============
*/
void CgEntitySystemMP::AddPostPlayerStatePacketEntities(CgEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  v3 = localClientNum;
  if ( !(_BYTE)CgEventSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 224, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v3 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v5) = CgEventSystem::ms_allocatedCount;
    LODWORD(v4) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( !CgEventSystem::ms_eventSystemArray[v3] )
  {
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 226, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v5) )
      __debugbreak();
  }
  CG_EntityWorkers_ExecutePostPlayerStateThread((const LocalClientNum_t)v3, &this->m_entityWork, CgEventSystem::ms_eventSystemArray[v3]);
}

/*
==============
CG_EntityMP_AddPacketEntity
==============
*/
void CG_EntityMP_AddPacketEntity(LocalClientNum_t localClientNum, int entnum)
{
  const char *EntityTypeName; 
  const char *v10; 
  CgGlobalsMP *LocalClientGlobals; 
  entityState_t *p_nextState; 
  DObj *ClientDObj; 
  CgGlobalsMP *v14; 
  int number; 
  characterInfo_t *v16; 
  const characterInfo_t *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  CgEntitySystem *EntitySystem; 
  char v25; 
  int v29; 
  unsigned int eType; 
  int v31; 
  DObj *v32; 
  CgTargetAssistMP *InstanceMP; 
  vec3_t v38; 
  vec3_t outOrigin; 
  __int64 v40; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  v40 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RBX = CG_GetEntity(localClientNum, entnum);
  EntityTypeName = BG_GetEntityTypeName((const entityType_s)_RBX->nextState.eType);
  v10 = j_va("Entity '%s'", EntityTypeName);
  Sys_ProfBeginNamedEvent(0xFF0000FF, v10);
  CGMovingPlatformAimAssist::AimAssistUpdateTarget(localClientNum, _RBX);
  _RBX->flags &= ~0x1000u;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( (_RBX->flags & 1) != 0 )
  {
    p_nextState = &_RBX->nextState;
    if ( _RBX == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((_RBX->nextState.eType - 1) & 0xFFEF) == 0 )
    {
      ClientDObj = Com_GetClientDObj(p_nextState->number, localClientNum);
      if ( ClientDObj )
      {
        v14 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
        number = p_nextState->number;
        v16 = v14->IsMP(v14) ? CgGlobalsMP::GetCharacterInfo(v14, number) : CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v14, number);
        v17 = v16;
        if ( v16 )
        {
          v18 = tls_index;
          if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
            __debugbreak();
          v19 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v18) + 272i64);
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 8i64))(v19);
          if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3132, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
            __debugbreak();
          BG_Execution_UpdateScrubTime(v17, ClientDObj, *(_DWORD *)(v20 + 19528), *(_DWORD *)(v20 + 19532));
        }
      }
    }
  }
  CG_EntityMP_ProcessEntityDobjUpdate(localClientNum, LocalClientGlobals, entnum, _RBX);
  if ( CG_EntityMP_ShouldLinkPacketEntity(localClientNum, _RBX) )
  {
    CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+48h]
      vmovss  xmm6, dword ptr [rbx+4Ch]
      vmovss  xmm7, dword ptr [rbx+50h]
    }
    CG_Entity_UpdatePreviousPosition(_RBX);
    EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
    if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3174, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
      __debugbreak();
    if ( CgEntitySystem::ShouldCalculateParentLinkPositions(EntitySystem, _RBX) )
    {
      CG_Entity_CalcParentLinkPositions(localClientNum, entnum);
      if ( BG_IsRagdollTrajectory(&_RBX->nextState.lerp.pos) )
        CG_EntityMP_CalcRagdollPositions(localClientNum, _RBX);
    }
    else
    {
      CG_EntityMP_CalcLerpPositions(localClientNum, _RBX);
    }
    CG_GetPoseOrigin(&_RBX->pose, &v38);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+var_98]
      vucomiss xmm0, dword ptr [rsp+0C8h+outOrigin]
    }
    if ( !v25 )
      goto LABEL_33;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+var_98+4]
      vucomiss xmm0, dword ptr [rsp+0C8h+outOrigin+4]
    }
    if ( !v25 )
      goto LABEL_33;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+var_98+8]
      vucomiss xmm0, dword ptr [rsp+0C8h+outOrigin+8]
    }
    if ( !v25 )
      goto LABEL_33;
    __asm { vucomiss xmm8, dword ptr [rbx+48h] }
    if ( !v25 )
      goto LABEL_33;
    __asm { vucomiss xmm6, dword ptr [rbx+4Ch] }
    if ( !v25 )
      goto LABEL_33;
    __asm { vucomiss xmm7, dword ptr [rbx+50h] }
    if ( v25 )
      v29 = 0;
    else
LABEL_33:
      v29 = 1;
    CG_EntityMP_LinkPacketEntity(localClientNum, entnum, v29);
    if ( v29 )
    {
      _RBX->flags |= 0x1000u;
      ScriptableCl_UpdateParentedTransforms(localClientNum, _RBX);
    }
    memset(&v38, 0, sizeof(v38));
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  eType = (unsigned __int16)_RBX->nextState.eType;
  if ( (unsigned __int16)eType > 0x18u || (v31 = 17170446, !_bittest(&v31, eType)) )
  {
    if ( ((_WORD)eType != 6 || (unsigned __int16)(_RBX->nextState.un.scriptMoverType - 4) > 2u) && !ScriptableCl_IsScriptableEntity(localClientNum, _RBX) )
    {
      v32 = Com_GetClientDObj(entnum, localClientNum);
      if ( v32 )
        DObjSetHidePartBits(v32, &_RBX->nextState.partBits);
    }
  }
  if ( entnum >= cls.maxClients || !LocalClientGlobals->m_playerOrderDistanceSortedCount )
    CG_Entity_UpdateAnimationLod(localClientNum, entnum);
  CG_EntityMP_ProcessEntity(localClientNum, _RBX);
  InstanceMP = CgTargetAssistMP::GetInstanceMP(localClientNum);
  CgTargetAssistMP::EvaluatePotentialTargetEntity(InstanceMP, _RBX);
  Sys_ProfEndNamedEvent();
  _R11 = &v42;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0C8h+var_58]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  CG_DrawDebug_DrawCharacterHitBox(localClientNum, entnum);
}

/*
==============
CG_EntityMP_Avatar
==============
*/
void CG_EntityMP_Avatar(const LocalClientNum_t localClientNum, centity_t *cent)
{
  unsigned int m_mapEntryId; 
  DObj *DObj_Avatar; 
  const XModel *EntityStateXModel; 
  const XModel *v8; 
  const cg_t *LocalClientGlobals; 
  unsigned int RenderFlagForRefEntity; 
  unsigned int number; 
  float v16; 
  vec3_t outLightingOrigin; 
  GfxSceneHudOutlineInfo v18; 
  GfxSceneHudOutlineInfo result; 
  bool outNewObj; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1452, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.un.scriptMoverType != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1456, ASSERT_TYPE_ASSERT, "(es->un.scriptMoverType == ScriptMoverType_Avatar)", (const char *)&queryFormat, "es->un.scriptMoverType == ScriptMoverType_Avatar") )
    __debugbreak();
  m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
  DObj_Avatar = CG_EntityMP_GetDObj_Avatar(localClientNum, cent->nextState.number, m_mapEntryId, &outNewObj);
  if ( DObj_Avatar && !CG_Entity_IsNoDraw(localClientNum, &cent->nextState, NULL) )
  {
    EntityStateXModel = CG_EntsMP_GetEntityStateXModel(localClientNum, cent);
    v8 = EntityStateXModel;
    if ( outNewObj || !CG_AnimTreeMP_CheckDObjAvatarInfoMatches(localClientNum, cent->nextState.number, cent->nextState.eType, EntityStateXModel, m_mapEntryId) )
      CG_AnimTreeMP_SetDObjAvatarInfo(localClientNum, cent->nextState.number, cent->nextState.eType, v8, m_mapEntryId);
    CG_AnimTreeMP_UpdateScriptModelAnim(localClientNum, cent, DObj_Avatar);
    CG_EntityMP_ValidateDObj(localClientNum, cent);
    CG_Entity_CalcLightingOrigin(&cent->pose, DObj_Avatar, &outLightingOrigin);
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RenderFlagForRefEntity = CG_EntityMP_GetRenderFlagForRefEntity(localClientNum, LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
    _RAX = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
    number = cent->nextState.number;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rsp+0E8h+var_78], ymm0
    }
    v18.characterEVOffset = _RAX->characterEVOffset;
    __asm
    {
      vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_7.scrollRateX
      vmovups ymmword ptr [rsp+0E8h+result.color], ymm0
    }
    result.characterEVOffset = NULL_SHADER_OVERRIDE_7.atlasTime;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+0E8h+var_A8], xmm0
    }
    CG_Entity_AddDObjToScene(localClientNum, DObj_Avatar, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v18, &outLightingOrigin, v16, 0);
  }
  memset(&outLightingOrigin, 0, sizeof(outLightingOrigin));
}

/*
==============
CG_EntityMP_CalcLerpPositions
==============
*/
__int64 CG_EntityMP_CalcLerpPositions(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v6; 
  trType_t trType; 
  trType_t v9; 
  char v10; 
  char v11; 
  DObj *ClientDObj; 
  int entity; 
  centity_t *v16; 
  entityType_s eType; 
  unsigned int v19; 
  double v27; 
  unsigned int v28; 
  cgs_t *LocalClientStaticGlobals; 
  __int64 v30; 
  __int64 result; 
  vec3_t *outAngles; 
  __int64 v35; 
  vec3_t v36; 
  vec3_t trBase; 
  CgTrajectory v38; 
  char v39; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v6 = localClientNum;
  _RSI = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( cent->prevState.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
  }
  else if ( !BgTrajectory::IsAnimatedTrajectory(&cent->nextState.lerp.pos) )
  {
    trType = cent->prevState.pos.trType;
    if ( trType == TR_PHYSICS_CLIENT_AUTH )
    {
      CG_EntityMP_CalcPhysicsPositions((LocalClientNum_t)v6, cent);
      goto LABEL_97;
    }
    if ( (trType == TR_INTERPOLATE || (unsigned int)(trType - 12) <= 1) && cent->nextState.lerp.pos.trType != TR_PHYSICS_CLIENT_AUTH )
      goto LABEL_11;
    if ( (unsigned int)(trType - 3) <= 1 && cent->nextState.number < ComCharacterLimits::GetCharacterMaxCount() )
      goto LABEL_11;
    if ( cent->nextState.eType == ET_MISSILE )
    {
      v9 = cent->prevState.pos.trType;
      if ( (unsigned int)(v9 - 6) <= 1 )
      {
        if ( v9 != cent->nextState.lerp.pos.trType )
          goto LABEL_11;
        Trajectory_GetTrBase(&cent->prevState.pos, &trBase);
        Trajectory_GetTrBase(&cent->nextState.lerp.pos, &v36);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+trBase]
          vucomiss xmm0, dword ptr [rbp+57h+var_78]
        }
        if ( !v10 )
          goto LABEL_21;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+trBase+4]
          vucomiss xmm0, dword ptr [rbp+57h+var_78+4]
        }
        if ( !v10 )
          goto LABEL_21;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+trBase+8]
          vucomiss xmm0, dword ptr [rbp+57h+var_78+8]
        }
        if ( v10 )
          v11 = 0;
        else
LABEL_21:
          v11 = 1;
        memset(&v36, 0, sizeof(v36));
        memset(&trBase, 0, sizeof(trBase));
        if ( v11 )
          goto LABEL_11;
      }
    }
    if ( BG_IsCharacterEntity(&cent->nextState) && !CG_IsEntityHighLoD((const LocalClientNum_t)v6, cent->nextState.number) )
    {
LABEL_11:
      CG_EntityMP_InterpolateEntityPosition(_RSI, cent);
      goto LABEL_97;
    }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4605, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
    __debugbreak();
  if ( ((cent->nextState.eType - 6) & 0xFFF7) != 0 || cent->nextState.lerp.pos.trType == TR_PHYSICS_CLIENT_AUTH )
  {
    CgTrajectory::CgTrajectory(&v38, (const LocalClientNum_t)v6, cent, &cent->prevState);
    CG_GetPoseOrigin(&cent->pose, &trBase);
    BgTrajectory::EvaluateTrajectories(&v38, _RSI->time, &trBase, &cent->pose.angles);
    CG_SetPoseOrigin(&cent->pose, &trBase);
  }
  else
  {
    CgTrajectory::CgTrajectory(&v38, (const LocalClientNum_t)v6, cent, &cent->nextState.lerp);
    if ( BgTrajectory::IsAnimatedTrajectory(&cent->nextState.lerp.pos) )
    {
      if ( (unsigned int)v6 >= 2 )
      {
        LODWORD(outAngles) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outAngles, 2) )
          __debugbreak();
      }
      if ( clientUIActives[v6].migrationState )
        goto LABEL_45;
      CG_GetPoseOrigin(&cent->pose, &trBase);
      __asm { vmovss  xmm6, dword ptr [rsi+65E0h] }
      ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v6);
      __asm { vmovaps xmm3, xmm6; lerp }
      CG_Entity_InterpolateAdvancedTrajectory((LocalClientNum_t)v6, cent, ClientDObj, *(float *)&_XMM3, &trBase, &cent->pose.angles);
      CG_SetPoseOrigin(&cent->pose, &trBase);
    }
    else
    {
      if ( !BgTrajectory::IsAnimatedTrajectory(&cent->prevState.pos) )
      {
        entity = _RSI->predictedPlayerState.vehicleState.entity;
        if ( entity != 2047 )
        {
          v16 = CG_GetEntity((const LocalClientNum_t)v6, entity);
          if ( (v16->flags & 1) != 0 && v16->nextState.otherEntityNum == cent->nextState.number )
          {
            CG_GetPoseOrigin(&cent->pose, &trBase);
            BgTrajectory::EvaluateTrajectories(&v38, _RSI->time, &trBase, &cent->pose.angles);
            CG_SetPoseOrigin(&cent->pose, &trBase);
            memset(&trBase, 0, sizeof(trBase));
            goto LABEL_97;
          }
        }
        CG_EntityMP_InterpolateEntityPosition(_RSI, cent);
        goto LABEL_45;
      }
      CG_GetPoseOrigin(&cent->pose, &trBase);
      BgTrajectory::EvaluateTrajectories(&v38, _RSI->time, &trBase, &cent->pose.angles);
      CG_SetPoseOrigin(&cent->pose, &trBase);
    }
  }
  memset(&trBase, 0, sizeof(trBase));
LABEL_45:
  if ( BG_IsCharacterEntity(&cent->nextState) )
  {
    __asm { vmovss  xmm2, cs:__real@3f800000; lerp }
    CG_PlayersMP_SetCharacterAngles(_RSI, cent, *(float *)&_XMM2);
  }
  else
  {
    eType = cent->nextState.eType;
    if ( eType == ET_PLAYER_CORPSE )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v19 = cent->nextState.number - ComCharacterLimits::ms_gameData.m_characterCount;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v19 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v35) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        LODWORD(outAngles) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4669, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", outAngles, v35) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4670, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", ComCharacterLimits::ms_gameData.m_clientCorpseCount, 8) )
          __debugbreak();
      }
      _RDI = &CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v6)->corpseinfo[v19].ci;
      _RDI->leftStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.leftStickPolarPacked);
      _RDI->rightStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.rightStickPolarPacked);
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vmovaps xmm1, xmm6; maxAbsValueSize
      }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[0], *(float *)&_XMM1, 0x10u);
      __asm
      {
        vmovss  dword ptr [rdi+904h], xmm0
        vmovaps xmm1, xmm6; maxAbsValueSize
      }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[1], *(float *)&_XMM1, 0x10u);
      __asm
      {
        vmovss  dword ptr [rdi+908h], xmm0
        vmovaps xmm1, xmm6; maxAbsValueSize
      }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[2], *(float *)&_XMM1, 0x10u);
      __asm { vmovss  dword ptr [rdi+90Ch], xmm0 }
      *(double *)&_XMM0 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.movementDir);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovss  xmm1, dword ptr [rdi+8BCh]; angle2
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovss  dword ptr [rdi+8C0h], xmm0
        vmovss  dword ptr [rdi+8BCh], xmm6
      }
      BG_SlopeWorldmodel_Unpack(&cent->nextState.lerp.u.player.slopePacked, &_RDI->groundNormalInterpolated);
      if ( PlayerASM_IsEnabled() )
      {
        v27 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.velocityDir);
        BG_PlayerASM_UpdateAngles(*(const float *)&v27, _RDI);
      }
      _RDI->playerAngles.v[0] = cent->pose.angles.v[0];
      _RDI->playerAngles.v[1] = cent->pose.angles.v[1];
      _RDI->playerAngles.v[2] = cent->pose.angles.v[2];
    }
    else if ( eType == ET_AGENT_CORPSE )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 160, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v28 = cent->nextState.number - ComCharacterLimits::ms_gameData.m_clientCorpseCount - ComCharacterLimits::ms_gameData.m_characterCount;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v28 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v35) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
        LODWORD(outAngles) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4693, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", outAngles, v35) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4694, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetAgentCorpseMaxCount()", "ARRAY_COUNT( cgs->agentCorpseInfo )", ComCharacterLimits::ms_gameData.m_agentCorpseCount, 8) )
          __debugbreak();
      }
      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v6);
      v30 = (int)v28;
      LocalClientStaticGlobals->agentCorpseInfo[v30].ci.playerAngles.v[0] = cent->pose.angles.v[0];
      LocalClientStaticGlobals->agentCorpseInfo[v30].ci.playerAngles.v[1] = cent->pose.angles.v[1];
      LocalClientStaticGlobals->agentCorpseInfo[v30].ci.playerAngles.v[2] = cent->pose.angles.v[2];
    }
  }
  if ( BG_IsRagdollTrajectory(&cent->nextState.lerp.pos) )
    CG_EntityMP_CalcRagdollPositions((LocalClientNum_t)v6, cent);
LABEL_97:
  result = 1i64;
  _R11 = &v39;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
CG_EntityMP_CalcPhysicsPositions
==============
*/
void CG_EntityMP_CalcPhysicsPositions(LocalClientNum_t localClientNum, centity_t *cent)
{
  trType_t trType; 
  bool v5; 
  const CG_PhysicsObject *v6; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4167, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  trType = cent->prevState.pos.trType;
  if ( trType == TR_PHYSICS_CLIENT_AUTH )
  {
    v5 = cent->prevState.apos.trType == TR_PHYSICS_CLIENT_AUTH;
    goto LABEL_8;
  }
  if ( trType == TR_PHYSICS_SERVER_AUTH )
  {
    v5 = cent->prevState.apos.trType == TR_PHYSICS_SERVER_AUTH;
LABEL_8:
    if ( v5 )
      goto LABEL_11;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4169, ASSERT_TYPE_ASSERT, "(( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH && cent->prevState.apos.trType == TR_PHYSICS_CLIENT_AUTH ) || ( cent->prevState.pos.trType == TR_PHYSICS_SERVER_AUTH && cent->prevState.apos.trType == TR_PHYSICS_SERVER_AUTH ))", (const char *)&queryFormat, "( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH && cent->prevState.apos.trType == TR_PHYSICS_CLIENT_AUTH ) || ( cent->prevState.pos.trType == TR_PHYSICS_SERVER_AUTH && cent->prevState.apos.trType == TR_PHYSICS_SERVER_AUTH )") )
    __debugbreak();
LABEL_11:
  if ( (cent->flags & 1) != 0 && !CG_Entity_IsNoDraw(localClientNum, &cent->nextState, NULL) && (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) || CG_EntityMP_GetDObj_General(localClientNum, cent, NULL)) )
  {
    if ( cent->nextState.eType == ET_SCRIPTMOVER )
    {
      if ( cent->nextState.un.scriptMoverType == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4194, ASSERT_TYPE_ASSERT, "(nextState->un.scriptMoverType != ScriptMoverType_ReflectionProbe)", "%s\n\tNot supporting physics-enabled reflection probes", "nextState->un.scriptMoverType != ScriptMoverType_ReflectionProbe") )
        __debugbreak();
      if ( cent->nextState.un.scriptMoverType == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4195, ASSERT_TYPE_ASSERT, "(nextState->un.scriptMoverType != ScriptMoverType_ServerArms)", "%s\n\tNot supporting physics-enabled server arms", "nextState->un.scriptMoverType != ScriptMoverType_ServerArms") )
        __debugbreak();
      if ( cent->nextState.un.scriptMoverType == 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4196, ASSERT_TYPE_ASSERT, "(nextState->un.scriptMoverType != ScriptMoverType_ClientWeapon)", "%s\n\tNot supporting physics-enabled client weapons", "nextState->un.scriptMoverType != ScriptMoverType_ClientWeapon") )
        __debugbreak();
      if ( cent->nextState.un.scriptMoverType == 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4197, ASSERT_TYPE_ASSERT, "(nextState->un.scriptMoverType != ScriptMoverType_ServerWeapon)", "%s\n\tNot supporting physics-enabled server weapons", "nextState->un.scriptMoverType != ScriptMoverType_ServerWeapon") )
        __debugbreak();
      if ( cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId && cent->nextState.un.scriptMoverType != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4198, ASSERT_TYPE_ASSERT, "(((nextState->staticState.mover.u.scriptableIndex == 0) || (nextState->un.scriptMoverType == ScriptMoverType_Avatar)))", "%s\n\tNot supporting physics-enabled scriptables", "((nextState->staticState.mover.u.scriptableIndex == 0) || (nextState->un.scriptMoverType == ScriptMoverType_Avatar))") )
        __debugbreak();
      if ( cent->nextState.un.scriptMoverType == 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4199, ASSERT_TYPE_ASSERT, "(nextState->un.scriptMoverType != ScriptMoverType_BrCircle)", "%s\n\tNot supporting physics-enabled Battle Royale Circles", "nextState->un.scriptMoverType != ScriptMoverType_BrCircle") )
        __debugbreak();
      if ( cent->nextState.un.scriptMoverType == 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4200, ASSERT_TYPE_ASSERT, "(nextState->un.scriptMoverType != ScriptMoverType_MapCircle)", "%s\n\tNot supporting physics-enabled Map Circles", "nextState->un.scriptMoverType != ScriptMoverType_MapCircle") )
        __debugbreak();
    }
    v6 = CG_PhysicsObject_Get(cent->nextState.number, localClientNum);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4205, ASSERT_TYPE_ASSERT, "(entityPhysicsObject)", (const char *)&queryFormat, "entityPhysicsObject") )
      __debugbreak();
    if ( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH && v6->physicsInstances[3 * localClientNum + 2] != -1 )
      CG_Entity_DestroyPhysics(localClientNum, cent->nextState.number);
    CG_Entity_CalcPhysicsPositions(localClientNum, v6, cent);
  }
}

/*
==============
CG_EntityMP_CalcRagdollPositions
==============
*/
void CG_EntityMP_CalcRagdollPositions(LocalClientNum_t localClientNum, centity_t *cent)
{
  int ragdollHandle; 
  int killcamRagdollHandle; 
  bool RootOrigin; 
  bool v8; 
  DObj *ClientDObj; 
  bool IsRagdoll; 
  vec3_t inOrigin; 
  vec3_t outOrigin; 
  __int64 v19; 
  vec3_t translationDelta; 

  v19 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4491, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !BG_IsRagdollTrajectory(&cent->nextState.lerp.pos) && !BG_IsRagdollTrajectory(&cent->nextState.lerp.apos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4492, ASSERT_TYPE_ASSERT, "(BG_IsRagdollTrajectory( &cent->nextState.lerp.pos ) || BG_IsRagdollTrajectory( &cent->nextState.lerp.apos ))", (const char *)&queryFormat, "BG_IsRagdollTrajectory( &cent->nextState.lerp.pos ) || BG_IsRagdollTrajectory( &cent->nextState.lerp.apos )") )
    __debugbreak();
  ragdollHandle = cent->pose.ragdollHandle;
  if ( ragdollHandle )
    goto LABEL_27;
  if ( !cent->pose.killcamRagdollHandle )
  {
    CG_EntityMP_CreateRagdollObject(localClientNum, cent);
    ragdollHandle = cent->pose.ragdollHandle;
  }
  if ( ragdollHandle || cent->pose.killcamRagdollHandle )
  {
LABEL_27:
    if ( !ragdollHandle && !cent->pose.killcamRagdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4449, ASSERT_TYPE_ASSERT, "(cent->pose.ragdollHandle != 0 || cent->pose.killcamRagdollHandle != 0)", (const char *)&queryFormat, "cent->pose.ragdollHandle != RAGDOLL_INVALID || cent->pose.killcamRagdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    killcamRagdollHandle = cent->pose.killcamRagdollHandle;
    if ( !killcamRagdollHandle )
      killcamRagdollHandle = cent->pose.ragdollHandle;
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+88h+outOrigin]
      vmovsd  qword ptr [rsp+88h+inOrigin], xmm0
    }
    inOrigin.v[2] = outOrigin.v[2];
    RootOrigin = Ragdoll_GetRootOrigin(killcamRagdollHandle, &inOrigin);
    v8 = CG_Pose_SetUsingRagdollOrigin(&cent->pose, RootOrigin);
    if ( RootOrigin )
      CG_EntityMP_UpdateRagdollPose_ApplyMoverOffset(localClientNum, cent, killcamRagdollHandle, &inOrigin);
    CG_SetPoseOrigin(&cent->pose, &inOrigin);
    ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
    if ( ClientDObj )
    {
      IsRagdoll = CG_Pose_IsRagdoll(&cent->pose);
      Ragdoll_SetAnimationParameters(ClientDObj, killcamRagdollHandle, IsRagdoll);
      if ( v8 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+88h+outOrigin]
          vsubss  xmm1, xmm0, dword ptr [rsp+88h+inOrigin]
          vmovss  dword ptr [rsp+88h+translationDelta], xmm1
          vmovss  xmm2, dword ptr [rsp+88h+outOrigin+4]
          vsubss  xmm0, xmm2, dword ptr [rsp+88h+inOrigin+4]
          vmovss  dword ptr [rsp+88h+translationDelta+4], xmm0
          vmovss  xmm1, dword ptr [rsp+88h+outOrigin+8]
          vsubss  xmm2, xmm1, dword ptr [rsp+88h+inOrigin+8]
          vmovss  dword ptr [rsp+88h+translationDelta+8], xmm2
        }
        XAnimBonePhysicsTeleportBones(ClientDObj, &translationDelta);
      }
    }
    memset(&inOrigin, 0, sizeof(inOrigin));
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
CG_EntityMP_CreateRagdollObject
==============
*/
void CG_EntityMP_CreateRagdollObject(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  int v4; 
  cg_t *LocalClientGlobals; 
  unsigned int v6; 
  __int64 v7; 
  connstate_t *p_connectionState; 
  char v9; 
  bool v10; 
  unsigned int eType; 
  int v12; 
  entityType_s v14; 
  const dvar_t *v15; 
  CgVehicleSystem *VehicleSystem; 
  unsigned int v17; 
  BgVehiclePhysicsManager *v18; 
  BgVehiclePhysics *ObjectById; 
  _BOOL8 v20; 
  bool v21; 
  bool v22; 
  const snapshot_t *nextSnap; 
  __int64 immediatePlayerRagdoll; 
  __int64 v25; 
  int hitLocation; 
  vec3_t impactVector; 
  vec3_t outOrigin; 

  v2 = localClientNum;
  v4 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v6 = 0;
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
  {
LABEL_19:
    v9 = 0;
  }
  else
  {
    v7 = 0i64;
    p_connectionState = &clientUIActives[0].connectionState;
    while ( 1 )
    {
      if ( v7 != v2 )
      {
        if ( v6 >= 2 )
        {
          LODWORD(v25) = 2;
          LODWORD(immediatePlayerRagdoll) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", immediatePlayerRagdoll, v25) )
            __debugbreak();
        }
        if ( *p_connectionState == CA_ACTIVE )
        {
          if ( v6 >= cg_t::ms_allocatedCount )
          {
            LODWORD(v25) = cg_t::ms_allocatedCount;
            LODWORD(immediatePlayerRagdoll) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", immediatePlayerRagdoll, v25) )
              __debugbreak();
          }
          if ( !cg_t::ms_cgArray[v7] )
          {
            LODWORD(v25) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v25) )
              __debugbreak();
          }
          if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
          {
            LODWORD(v25) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v25) )
              __debugbreak();
          }
          if ( cg_t::ms_cgArray[v7]->inKillCam )
            break;
        }
      }
      ++v6;
      ++v7;
      p_connectionState += 110;
      if ( (int)v6 >= SLODWORD(cl_maxLocalClients) )
        goto LABEL_19;
    }
    v9 = 1;
  }
  v10 = 0;
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)cent->nextState.eType;
  if ( (unsigned __int16)eType <= 0x15u )
  {
    v12 = 2359300;
    if ( _bittest(&v12, eType) )
    {
      if ( cent->prevClientNum == LocalClientGlobals->clientNum )
        v10 = LocalClientGlobals->inKillCam != 0;
    }
  }
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  if ( !v9 )
  {
    __asm { vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin }
    impactVector.v[2] = vec3_origin.v[2];
    v14 = cent->nextState.eType;
    hitLocation = 0;
    __asm { vmovsd  qword ptr [rsp+0A8h+impactVector], xmm0 }
    if ( v14 == ET_AGENT_CORPSE )
    {
      LerpEntityStateAgentCorpse::GetImpactVector((LerpEntityStateAgentCorpse *)&cent->nextState.lerp.u, &impactVector);
      hitLocation = LerpEntityStateAgentCorpse::GetHitLoc((LerpEntityStateAgentCorpse *)&cent->nextState.lerp.u);
    }
    else if ( v14 == ET_PLAYER_CORPSE )
    {
      v15 = DVARBOOL_bg_vehRagdoll;
      if ( !DVARBOOL_bg_vehRagdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehRagdoll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled && (int)v2 >= 0 && (int)v2 < CgVehicleSystem::ms_allocatedCount )
      {
        if ( CgVehicleSystem::ms_vehicleSystemArray[v2] )
        {
          VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v2);
          v17 = CgVehicleSystem::PhysicsGetFromEntityNum(VehicleSystem, LocalClientGlobals->predictedPlayerState.stats[4]);
          if ( BGVehicles::PhysicsIsValid(v17) )
          {
            v18 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
            ObjectById = BgVehiclePhysicsManager::GetObjectById(v18, v17);
            if ( ObjectById->m_inUse )
            {
              LOBYTE(v20) = LocalClientGlobals->inKillCam != 0;
              ObjectById->GetRagdollInitialImpact(ObjectById, &outOrigin, v20, &hitLocation, &impactVector);
            }
          }
        }
      }
    }
    v21 = ((cent->nextState.lerp.pos.trType - 25) & 0xFFFFFFFD) == 0;
    CG_EntityWorkers_EnterCriticalSection_Ragdoll(BASE);
    v4 = Ragdoll_CreateRagdollForDObj((LocalClientNum_t)v2, cent->nextState.number, cent->nextState.number, hitLocation, &impactVector, v21);
    CG_EntityWorkers_LeaveCriticalSection_Ragdoll(BASE);
  }
  if ( v10 )
    cent->pose.killcamRagdollHandle = v4;
  else
    cent->pose.ragdollHandle = v4;
  v22 = 0;
  if ( cent->nextState.eType == ET_PLAYER_CORPSE && (v22 = LOBYTE(cent->nextState.lerp.u.vehicle.bodyPitch) & 1) || LocalClientGlobals->time == LocalClientGlobals->oldTime || (nextSnap = LocalClientGlobals->nextSnap) != NULL && nextSnap->serverTime == LocalClientGlobals->killCamEndTime )
    CG_Pose_StopAnimatedRagdoll(&cent->pose);
  CG_Pose_InitializeRagdoll(&cent->pose, LocalClientGlobals->inKillCam != 0, v22);
}

/*
==============
CG_EntityMP_DObjUpdateInfo
==============
*/
DObj *CG_EntityMP_DObjUpdateInfo(DObj *frametime, DObj *obj, bool notify, int entnum)
{
  float v5; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vmulss  xmm2, xmm0, cs:__real@3a83126f
  }
  DObjUpdateClientInfo(frametime, v5, notify, entnum);
  return frametime;
}

/*
==============
CG_EntityMP_GetDObj
==============
*/
DObj *CG_EntityMP_GetDObj(LocalClientNum_t localClientNum, int entIndex, int entType, DObjModel *dobjModel, const unsigned __int16 numModels, bool *createdNew)
{
  __int64 entnum; 
  const DObj *ClientDObj; 
  XAnimTree *SmallTree; 
  unsigned __int8 v12; 
  centity_t *Entity; 
  XAnim_s *Animations; 
  XAnimOwner v15; 
  bool requiresIKPreCache; 
  CgEntitySystem *EntitySystem; 
  const char *Name; 
  vec3_t origin; 

  entnum = entIndex;
  if ( !dobjModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 197, ASSERT_TYPE_ASSERT, "(dobjModel)", (const char *)&queryFormat, "dobjModel") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(entnum, localClientNum);
  SmallTree = NULL;
  v12 = 0;
  Name = NULL;
  Entity = CG_GetEntity(localClientNum, entnum);
  if ( ClientDObj )
  {
    if ( dobjModel->model && CG_AnimTreeMP_CheckDObjInfoMatches(localClientNum, entnum, entType, dobjModel->model) )
      goto LABEL_28;
    Name = DObjGetName(ClientDObj);
    if ( Entity->nextState.eType != ET_COVERWALL && !CG_EntityWorkers_TryAddFxMarksDetachAllRequest(localClientNum, entnum) )
      FX_MarkEntDetachAll(localClientNum, entnum);
    CG_AnimTreeMP_SafeDObjFree(localClientNum, entnum);
    ClientDObj = NULL;
  }
  if ( dobjModel->model )
  {
    if ( Entity->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 232, ASSERT_TYPE_ASSERT, "(!cent->tree)", (const char *)&queryFormat, "!cent->tree") )
      __debugbreak();
    Animations = CG_Entity_GetAnimations(localClientNum, entnum, entType);
    if ( Animations )
    {
      LOBYTE(v15) = 1;
      SmallTree = Com_XAnimCreateSmallTree(Animations, v15);
      if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 246, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
        __debugbreak();
    }
    Entity->tree = SmallTree;
    requiresIKPreCache = BG_IsCharacterEntity(&Entity->nextState);
    ClientDObj = Com_ClientDObjCreate(dobjModel, numModels, SmallTree, entnum, localClientNum, requiresIKPreCache, entnum);
    CG_AnimTreeMP_SetDObjInfo(localClientNum, entnum, entType, dobjModel->model);
    CG_Entity_DestroyPhysics(localClientNum, entnum);
    if ( CG_Entity_ShouldCreatePhysicsOnInit(localClientNum, entnum) )
      CG_Entity_CreatePhysics(localClientNum, entnum, 1);
    CG_Entity_DestroyCloth(localClientNum, entnum);
    if ( CG_Entity_ShouldCreateClothOnInit(localClientNum, entnum) )
      CG_Entity_CreateCloth(localClientNum, entnum);
    if ( SmallTree && !DObjGetTree(ClientDObj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 277, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ))", "%s\n\t%s", "DObjGetTree( obj )", dobjModel->model->name) )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@48000000
      vmovss  dword ptr [rsp+0C8h+origin], xmm0
      vmovss  dword ptr [rsp+0C8h+origin+4], xmm0
      vmovss  dword ptr [rsp+0C8h+origin+8], xmm0
    }
    EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
    CgEntitySystem::SetEntityOrigin(EntitySystem, Entity->nextState.number, &origin);
    v12 = 1;
  }
LABEL_28:
  if ( entType != 4 )
    goto LABEL_34;
  if ( (unsigned int)(entnum + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)entnum, "signed", entnum) )
    __debugbreak();
  if ( CG_IsEntityHighLoD(localClientNum, entnum) )
LABEL_34:
    CG_Entity_UpdateScriptableDObjBinding(localClientNum, entnum, v12);
  else
    CG_Entity_ClearScriptableBinding(localClientNum, entnum);
  if ( ClientDObj && !DObjGetTree(ClientDObj) && entType == 11 )
  {
    DObjDumpInfo(ClientDObj);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442EFFA0, 80i64, v12, Name);
  }
  if ( createdNew )
    *createdNew = v12;
  return (DObj *)ClientDObj;
}

/*
==============
CG_EntityMP_GetDObj_Avatar
==============
*/
DObj *CG_EntityMP_GetDObj_Avatar(const LocalClientNum_t localClientNum, const int entIndex, const unsigned int headModelIndex, bool *outNewObj)
{
  __int64 v4; 
  DObj *ClientDObj; 
  centity_t *Entity; 
  const XModel *XModelFromIndex; 
  const XModel *v11; 
  XAnimTree *SmallTree; 
  unsigned __int16 v13; 
  cg_t *LocalClientGlobals; 
  DObj *v15; 
  unsigned __int16 v16; 
  char v17; 
  centity_t *v18; 
  XAnim_s *Animations; 
  XAnimOwner v20; 
  DObj *v21; 
  CgEntitySystem *EntitySystem; 
  DObj *result; 
  DObjModel *outDObjModel; 
  __int64 entnum; 
  vec3_t origin; 
  DObjModel dobjModels; 
  DObjModel v29; 

  v4 = entIndex;
  if ( (unsigned int)entIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 750, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndex, 2048) )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(v4, localClientNum);
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(entnum) = 2048;
    LODWORD(outDObjModel) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 569, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outDObjModel, entnum) )
      __debugbreak();
  }
  Entity = CG_GetEntity(localClientNum, v4);
  XModelFromIndex = CG_EntityMP_GetXModelFromIndex(localClientNum, Entity->nextState.lerp.u.primaryLight.packedColorB_Fov);
  v11 = CG_EntityMP_GetXModelFromIndex(localClientNum, headModelIndex);
  SmallTree = NULL;
  DObjInitModel(XModelFromIndex, (scr_string_t)0, 1, 0, NULL, &dobjModels);
  v13 = 1;
  if ( v11 )
  {
    DObjInitModel(v11, (scr_string_t)0, 1, 0, NULL, &v29);
    v13 = 2;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->iEntityLastType[v4] == 6 && LocalClientGlobals->iEntityLastHeadModel[v4] == headModelIndex )
  {
    v15 = Com_GetClientDObj(v4, localClientNum);
    if ( v15 )
    {
      if ( v15->numModels == v13 )
      {
        v16 = 0;
        while ( v15->models[v16] == (const XModel *)*((_QWORD *)&dobjModels.model + 10 * v16) )
        {
          if ( ++v16 >= v13 )
          {
            v17 = 1;
            goto LABEL_18;
          }
        }
      }
    }
  }
  v17 = 0;
LABEL_18:
  if ( !ClientDObj )
    goto LABEL_23;
  if ( !v17 )
  {
    if ( !CG_EntityWorkers_TryAddFxMarksDetachAllRequest(localClientNum, v4) )
      FX_MarkEntDetachAll(localClientNum, v4);
    CG_AnimTreeMP_SafeDObjFree(localClientNum, v4);
LABEL_23:
    v18 = CG_GetEntity(localClientNum, v4);
    if ( v18->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 772, ASSERT_TYPE_ASSERT, "(!cent->tree)", (const char *)&queryFormat, "!cent->tree") )
      __debugbreak();
    Animations = CG_Entity_GetAnimations(localClientNum, v4, v18->nextState.eType);
    if ( Animations )
    {
      LOBYTE(v20) = 1;
      SmallTree = Com_XAnimCreateSmallTree(Animations, v20);
      if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 778, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
        __debugbreak();
    }
    v18->tree = SmallTree;
    v21 = Com_ClientDObjCreate(&dobjModels, v13, SmallTree, v4, localClientNum, 0, v4);
    CG_AnimTreeMP_SetDObjAvatarInfo(localClientNum, v4, v18->nextState.eType, dobjModels.model, headModelIndex);
    __asm
    {
      vmovss  xmm0, cs:__real@48000000
      vmovss  dword ptr [rsp+148h+origin], xmm0
      vmovss  dword ptr [rsp+148h+origin+4], xmm0
      vmovss  dword ptr [rsp+148h+origin+8], xmm0
    }
    EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
    CgEntitySystem::SetEntityOrigin(EntitySystem, v18->nextState.number, &origin);
    result = v21;
    if ( outNewObj )
      *outNewObj = 1;
    return result;
  }
  result = ClientDObj;
  if ( outNewObj )
    *outNewObj = 0;
  return result;
}

/*
==============
CG_EntityMP_GetDObj_General
==============
*/
DObj *CG_EntityMP_GetDObj_General(const LocalClientNum_t localClientNum, const centity_t *cent, bool *createdNew_optionalOut)
{
  const XCompositeModelDef *EntityStateXCompositeModel; 
  const XModel *EntityStateXModel; 
  DObjModel dobjModel; 

  if ( CG_Entity_IsTriggerVolume(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 452, ASSERT_TYPE_ASSERT, "(!CG_Entity_IsTriggerVolume( cent ))", (const char *)&queryFormat, "!CG_Entity_IsTriggerVolume( cent )") )
    __debugbreak();
  EntityStateXCompositeModel = CG_EntsMP_GetEntityStateXCompositeModel(localClientNum, cent);
  if ( EntityStateXCompositeModel )
    return CG_XCompositeModel_GetDObj(EntityStateXCompositeModel, localClientNum, cent, createdNew_optionalOut);
  EntityStateXModel = CG_EntsMP_GetEntityStateXModel(localClientNum, cent);
  if ( EntityStateXModel )
  {
    DObjInitModel(EntityStateXModel, (scr_string_t)0, 1, 0, NULL, &dobjModel);
    return CG_EntityMP_GetDObj(localClientNum, cent->nextState.number, cent->nextState.eType, &dobjModel, 1u, createdNew_optionalOut);
  }
  else
  {
    CG_AnimTreeMP_SafeDObjFree(localClientNum, cent->nextState.number);
    if ( createdNew_optionalOut )
      *createdNew_optionalOut = 0;
    return 0i64;
  }
}

/*
==============
CG_EntityMP_GetDObj_Item
==============
*/
DObj *CG_EntityMP_GetDObj_Item(LocalClientNum_t localClientNum, int entIndex, const Weapon *weapon, bool *outNewObj)
{
  __int64 entnum; 
  centity_t *Entity; 
  DObj *ClientDObj; 
  unsigned __int16 v10; 
  XAnimTree *SmallTree; 
  cg_t *LocalClientGlobals; 
  bool v13; 
  DObj *v14; 
  unsigned __int16 v15; 
  XAnim_s *Animations; 
  XAnimOwner v17; 
  bool requiresIKPreCache; 
  CgEntitySystem *EntitySystem; 
  char v28; 
  DObj *v29; 
  DObjStickerSlotList result; 
  vec3_t origin; 
  DObjStickerSlotList stickerSlots; 
  DObjModel dobjModels[32]; 

  entnum = entIndex;
  if ( (unsigned int)entIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 648, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndex, 2048) )
    __debugbreak();
  if ( (int)entnum < cls.maxClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 649, ASSERT_TYPE_ASSERT, "( entIndex ) >= ( cls.maxClients )", "%s >= %s\n\t%i, %i", "entIndex", "cls.maxClients", entnum, cls.maxClients) )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, entnum);
  ClientDObj = Com_GetClientDObj(entnum, localClientNum);
  v10 = CG_EntityMP_Item_AddWeaponWorldModels(localClientNum, entnum, weapon, dobjModels);
  SmallTree = NULL;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->iEntityLastType[entnum] != 3 )
  {
LABEL_8:
    v13 = 0;
    goto LABEL_19;
  }
  if ( !memcmp_0(&LocalClientGlobals->iEntityLastWeaponID[entnum], weapon, 0x3Cui64) )
  {
    v14 = Com_GetClientDObj(entnum, localClientNum);
    if ( v14 )
    {
      if ( v14->numModels == v10 )
      {
        v15 = 0;
        if ( v10 )
        {
          while ( v14->models[v15] == dobjModels[v15].model )
          {
            if ( ++v15 >= v10 )
              goto LABEL_17;
          }
          goto LABEL_8;
        }
LABEL_17:
        v13 = 1;
      }
      else
      {
        v13 = 0;
      }
    }
    else
    {
      v13 = v10 == 0;
    }
  }
  else
  {
    v13 = 0;
  }
LABEL_19:
  if ( ClientDObj )
  {
    if ( v13 )
    {
      v28 = 0;
      goto LABEL_40;
    }
    if ( !CG_EntityWorkers_TryAddFxMarksDetachAllRequest(localClientNum, entnum) )
      FX_MarkEntDetachAll(localClientNum, entnum);
    CG_AnimTreeMP_SafeDObjFree(localClientNum, entnum);
  }
  if ( Entity->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 676, ASSERT_TYPE_ASSERT, "(!cent->tree)", (const char *)&queryFormat, "!cent->tree") )
    __debugbreak();
  Animations = CG_Entity_GetAnimations(localClientNum, entnum, 3);
  if ( Animations )
  {
    LOBYTE(v17) = 1;
    SmallTree = Com_XAnimCreateSmallTree(Animations, v17);
    if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 682, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
      __debugbreak();
  }
  Entity->tree = SmallTree;
  requiresIKPreCache = BG_IsCharacterEntity(&Entity->nextState);
  ClientDObj = Com_ClientDObjCreate(dobjModels, v10, SmallTree, entnum, localClientNum, requiresIKPreCache, entnum);
  if ( !ClientDObj )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 698, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    CrashReport_TriggerNow();
  }
  if ( CG_Entity_ShouldCreatePhysicsOnInit(localClientNum, entnum) )
    CG_Entity_CreatePhysics(localClientNum, entnum, 1);
  if ( CG_Entity_ShouldCreateClothOnInit(localClientNum, entnum) )
    CG_Entity_CreateCloth(localClientNum, entnum);
  DObjSetCamoMaterialOverride(ClientDObj, dobjModels, v10);
  _RAX = CG_Weapons_BuildStickerSlotList(&result, localClientNum, NULL, 0, weapon);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0BF8h+stickerSlots.modelTypeToApply], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0BF8h+stickerSlots.modelTypeToApply+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsp+0BF8h+stickerSlots.modelTypeToApply+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rsp+0BF8h+stickerSlots.slots.overrideMaterial], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rsp+0BF8h+stickerSlots.slots.overrideMaterial+20h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  [rsp+0BF8h+stickerSlots.slots.overrideMaterial+30h], xmm1
  }
  DObjSetStickerMaterialOverrides(ClientDObj, NULL, &stickerSlots);
  CG_AnimTreeMP_SetDObjInfo(localClientNum, entnum, 3, dobjModels[0].model);
  __asm
  {
    vmovss  xmm0, cs:__real@48000000
    vmovss  dword ptr [rsp+0BF8h+origin], xmm0
    vmovss  dword ptr [rsp+0BF8h+origin+4], xmm0
    vmovss  dword ptr [rsp+0BF8h+origin+8], xmm0
  }
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  CgEntitySystem::SetEntityOrigin(EntitySystem, entnum, &origin);
  v28 = 1;
LABEL_40:
  CG_Entity_UpdateScriptableDObjBinding(localClientNum, entnum, v28);
  v29 = ClientDObj;
  if ( outNewObj )
    *outNewObj = v28;
  return v29;
}

/*
==============
CG_EntityMP_GetFirstModelName
==============
*/
const XModel *CG_EntityMP_GetFirstModelName(const LocalClientNum_t localClientNum, const centity_t *cent, bool *outIsComposite)
{
  const XModel *result; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 431, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 432, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  result = (const XModel *)CG_EntsMP_GetEntityStateXCompositeModel(localClientNum, cent);
  if ( result )
  {
    *outIsComposite = 1;
    return (const XModel *)result->name;
  }
  *outIsComposite = 0;
  result = CG_EntsMP_GetEntityStateXModel(localClientNum, cent);
  if ( result )
    return (const XModel *)result->name;
  return result;
}

/*
==============
CG_EntityMP_GetRenderFlagForRefEntity
==============
*/
__int64 CG_EntityMP_GetRenderFlagForRefEntity(LocalClientNum_t localClientNum, const cg_t *cgameGlob, const centity_t *cent, const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *r_eFlags)
{
  __int64 v7; 
  entityState_t *p_nextState; 
  int v9; 
  unsigned int v10; 
  unsigned int Instance; 
  __int64 v13; 
  __int64 v14; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4524, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4525, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4526, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  v7 = cgameGlob->localClientNum;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 299, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v7, 2, (unsigned __int8)CgEntitySystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v14) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v7] )
  {
    LODWORD(v14) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 301, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v14) )
      __debugbreak();
    if ( !CgEntitySystem::ms_entitySystemArray[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4529, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
      __debugbreak();
  }
  p_nextState = &cent->nextState;
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3783, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v9 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 0xEu) << 10;
  v10 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 0xDu) << 9) | v9;
  if ( BG_IsRagdollTrajectory(&p_nextState->lerp.pos) )
    v10 |= 0x1000u;
  Instance = CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * localClientNum + 3), p_nextState->number, localClientNum);
  if ( Instance != -1 && (int)Physics_GetNumRigidBodys((const Physics_WorldId)(3 * localClientNum + 3), Instance) > 1 )
    v10 |= 0x1000u;
  return v10;
}

/*
==============
CgEntitySystemMP::CG_EntityMP_GetTeam
==============
*/
__int64 CgEntitySystemMP::CG_EntityMP_GetTeam(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgGlobalsMP *LocalClientGlobals; 
  __int16 otherEntityNum; 
  CgGlobalsMP *v6; 
  const char *EntityTypeName; 
  const characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  centity_t *v11; 
  CgVehicleSystemMP *VehicleSystemMP; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1496, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1497, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  otherEntityNum = cent->nextState.otherEntityNum;
  v6 = LocalClientGlobals;
  if ( otherEntityNum == 2047 )
  {
    if ( (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF) != 0 )
    {
      Entity = CG_GetEntity(localClientNum, (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FFu) - 1);
      v11 = Entity;
      if ( (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_VEHICLE )
      {
        VehicleSystemMP = CgVehicleSystemMP::GetVehicleSystemMP(localClientNum);
        return ((__int64 (__fastcall *)(CgVehicleSystemMP *, entityState_t *))VehicleSystemMP->GetTeam)(VehicleSystemMP, &v11->nextState);
      }
    }
  }
  else
  {
    if ( otherEntityNum < 0 )
      goto LABEL_13;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( cent->nextState.otherEntityNum >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
    {
LABEL_13:
      EntityTypeName = BG_GetEntityTypeName((const entityType_s)cent->nextState.eType);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1505, ASSERT_TYPE_ASSERT, "(cent->nextState.otherEntityNum >= 0 && cent->nextState.otherEntityNum < ComCharacterLimits::GetCharacterMaxCount())", "%s\n\tCG_EntityMP_GetTeam expected ent %d of type %s to have an owner to derive team from.", "cent->nextState.otherEntityNum >= 0 && cent->nextState.otherEntityNum < ComCharacterLimits::GetCharacterMaxCount()", cent->nextState.number, EntityTypeName) )
        __debugbreak();
    }
    CharacterInfo = CgGlobalsMP::GetCharacterInfo(v6, cent->nextState.otherEntityNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1508, ASSERT_TYPE_ASSERT, "(ownerInfo)", (const char *)&queryFormat, "ownerInfo") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
      return (unsigned int)CharacterInfo->team;
  }
  return 0i64;
}

/*
==============
CG_EntityMP_GetXModelFromIndex
==============
*/
const XModel *CG_EntityMP_GetXModelFromIndex(const LocalClientNum_t localClientNum, const unsigned int xmodelIndex)
{
  __int64 v2; 
  cgs_t *LocalClientStaticGlobals; 
  XAssetType assetType; 
  int v6; 
  int v7; 

  v2 = xmodelIndex;
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( (unsigned int)v2 >= 0x800 )
  {
    v7 = 2048;
    v6 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 325, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelIndex ) < (unsigned)( ( sizeof( *array_counter( cgs->gameModels ) ) + 0 ) )", "xmodelIndex doesn't index ARRAY_COUNT( cgs->gameModels )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  assetType = LocalClientStaticGlobals->gameModels[v2].assetType;
  if ( assetType != ASSET_TYPE_XMODEL && assetType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 326, ASSERT_TYPE_ASSERT, "(cgs->gameModels[xmodelIndex].assetType == XAssetType::ASSET_TYPE_XMODEL || cgs->gameModels[xmodelIndex].assetType == 0)", (const char *)&queryFormat, "cgs->gameModels[xmodelIndex].assetType == XAssetType::ASSET_TYPE_XMODEL || cgs->gameModels[xmodelIndex].assetType == 0") )
    __debugbreak();
  return LocalClientStaticGlobals->gameModels[v2].un.model;
}

/*
==============
CG_EntityMP_InterpolateEntityPosition
==============
*/
void CG_EntityMP_InterpolateEntityPosition(CgGlobalsMP *cgameGlob, centity_t *cent)
{
  int number; 
  float v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  vec3_t inOrigin; 
  __int64 v39; 
  trajectory_t_secure v40; 
  trajectory_t_secure v41; 
  CgTrajectory v42; 
  CgTrajectory v43; 
  vec3_t v44; 
  vec3_t outPos; 
  void *retaddr; 

  _RAX = &retaddr;
  v39 = -2i64;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RDI = cent;
  _RBX = cgameGlob;
  if ( !cgameGlob->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4107, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !_RBX->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4108, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  if ( _RDI->nextState.lerp.pos.trType == TR_PHYSICS_CLIENT_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4109, ASSERT_TYPE_ASSERT, "(cent->nextState.lerp.pos.trType != TR_PHYSICS_CLIENT_AUTH)", (const char *)&queryFormat, "cent->nextState.lerp.pos.trType != TR_PHYSICS_CLIENT_AUTH") )
    __debugbreak();
  __asm { vmovss  xmm6, dword ptr [rbx+65E0h] }
  CgTrajectory::CgTrajectory(&v42, (const LocalClientNum_t)_RBX->localClientNum, _RDI, &_RDI->prevState);
  CgTrajectory::CgTrajectory(&v43, (const LocalClientNum_t)_RBX->localClientNum, _RDI, &_RDI->nextState.lerp);
  BgTrajectory::EvaluatePosTrajectory(&v42, _RBX->snap->serverTime, &outPos);
  BgTrajectory::EvaluatePosTrajectory(&v43, _RBX->nextSnap->serverTime, &v44);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+60h+var_50]
    vsubss  xmm1, xmm0, dword ptr [rbp+60h+outPos]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbp+60h+outPos]
    vmovss  dword ptr [rsp+160h+inOrigin], xmm3
    vmovss  xmm0, dword ptr [rbp+60h+var_50+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+60h+outPos+4]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbp+60h+outPos+4]
    vmovss  dword ptr [rsp+160h+inOrigin+4], xmm3
    vmovss  xmm0, dword ptr [rbp+60h+var_50+8]
    vsubss  xmm1, xmm0, dword ptr [rbp+60h+outPos+8]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbp+60h+outPos+8]
    vmovss  dword ptr [rsp+160h+inOrigin+8], xmm3
  }
  CgTrajectory::InterpolateEntityAngles(_RBX, _RDI);
  CG_SetPoseOrigin(&_RDI->pose, &inOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+160h+inOrigin]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_30;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+160h+inOrigin+4]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_30;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+160h+inOrigin+8]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
  {
LABEL_30:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4127, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpOrg )[0] ) && !IS_NAN( ( tmpOrg )[1] ) && !IS_NAN( ( tmpOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpOrg )[0] ) && !IS_NAN( ( tmpOrg )[1] ) && !IS_NAN( ( tmpOrg )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+48h]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4Ch]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+50h]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
  {
LABEL_31:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4128, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cent->pose.angles )[0] ) && !IS_NAN( ( cent->pose.angles )[1] ) && !IS_NAN( ( cent->pose.angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cent->pose.angles )[0] ) && !IS_NAN( ( cent->pose.angles )[1] ) && !IS_NAN( ( cent->pose.angles )[2] )") )
      __debugbreak();
  }
  if ( BG_IsCharacterEntity(&_RDI->nextState) )
  {
    if ( !CG_Player_AlignPlayerModelForScriptLink(_RBX, _RDI) && !CG_Players_HandleVehicleOccupancyLink(_RBX, _RDI) )
    {
      __asm { vmovaps xmm2, xmm6; lerp }
      CG_PlayersMP_SetCharacterAngles(_RBX, _RDI, *(float *)&_XMM2);
    }
    CG_Door_SetCharacterDoorAngle((const LocalClientNum_t)_RBX->localClientNum, _RDI);
    CG_Players_InterpolateHeightOffset((const LocalClientNum_t)_RBX->localClientNum, _RDI);
    __asm { vmovaps xmm1, xmm6; frameTime }
    CGMovingPlatforms::ApplyClientLocalOffset(_RBX->localClientNum, *(float *)&_XMM1, _RDI);
  }
  if ( _RDI->nextState.number < cls.maxClients )
  {
    CG_GetPoseOrigin(&_RDI->pose, &inOrigin);
    number = _RDI->nextState.number;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+1A0h]
      vmovups ymmword ptr [rsp+160h+var_108.trDuration], ymm0
    }
    v40.trDelta.v[2] = _RDI->nextState.lerp.pos.trDelta.v[2];
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+124h]
      vmovups [rbp+60h+var_D0], ymm0
    }
    v41.trDelta.v[2] = _RDI->prevState.pos.trDelta.v[2];
    __asm { vmovss  [rsp+160h+var_128], xmm6 }
    CG_DrawDebugMP_UpdateClientInterpolation(_RBX->localClientNum, number, &outPos, &v44, &inOrigin, &v41, &v40, v31);
  }
  memset(&inOrigin, 0, sizeof(inOrigin));
  __asm { vmovaps xmm6, xmmword ptr [rsp+160h+var_28+8] }
}

/*
==============
CgEntitySystemMP::CG_EntityMP_IsOnSameTeam
==============
*/
bool CgEntitySystemMP::CG_EntityMP_IsOnSameTeam(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  CgGlobalsMP *LocalClientGlobals; 
  __int64 clientNum; 
  __int64 v6; 
  team_t team; 
  const char *EntityTypeName; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  centity_t *v12; 
  characterInfo_t *v13; 
  CgVehicleSystemMP *VehicleSystemMP; 
  team_t v15; 
  __int64 v16; 
  __int64 v17; 

  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1534, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( (unsigned int)clientNum >= LocalClientGlobals->m_characterInfoCount )
  {
    LODWORD(v16) = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v16, LocalClientGlobals->m_characterInfoCount) )
      __debugbreak();
  }
  v6 = (__int64)&LocalClientGlobals->m_characterInfo[clientNum];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1539, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  if ( !*(_DWORD *)(v6 + 4) )
    return 0;
  if ( cent->nextState.otherEntityNum != 2047 )
  {
    team = TEAM_ZERO;
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v17) = 2;
      LODWORD(v16) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1549, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( cent->nextState.otherEntityNum < 0 )
      goto LABEL_20;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( cent->nextState.otherEntityNum >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
    {
LABEL_20:
      EntityTypeName = BG_GetEntityTypeName((const entityType_s)cent->nextState.eType);
      LODWORD(v17) = cent->nextState.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1552, ASSERT_TYPE_ASSERT, "(cent->nextState.otherEntityNum >= 0 && cent->nextState.otherEntityNum < ComCharacterLimits::GetCharacterMaxCount())", "%s\n\tCG_EntityMP_IsOnSameTeam expected ent %d of type %s to have an owner to derive team from.", "cent->nextState.otherEntityNum >= 0 && cent->nextState.otherEntityNum < ComCharacterLimits::GetCharacterMaxCount()", v17, EntityTypeName) )
        __debugbreak();
    }
    CharacterInfo = CgGlobalsMP::GetCharacterInfo(LocalClientGlobals, cent->nextState.otherEntityNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1555, ASSERT_TYPE_ASSERT, "(ownerInfo)", (const char *)&queryFormat, "ownerInfo") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
      team = CharacterInfo->team;
    return Com_Teams_OnSameTeam(&LocalClientGlobals->predictedPlayerState, *(const team_t *)(v6 + 12), &cent->nextState, team) || LocalClientGlobals->predictedPlayerState.clientNum == cent->nextState.otherEntityNum;
  }
  if ( (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF) == 0 )
    return 1;
  Entity = CG_GetEntity(localClientNum, (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FFu) - 1);
  v12 = Entity;
  if ( (Entity->flags & 1) == 0 || Entity->nextState.eType != ET_VEHICLE )
    return 1;
  v13 = CgGlobalsMP::GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1572, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !v13->infoValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1573, ASSERT_TYPE_ASSERT, "(ci->infoValid)", (const char *)&queryFormat, "ci->infoValid") )
    __debugbreak();
  VehicleSystemMP = CgVehicleSystemMP::GetVehicleSystemMP(localClientNum);
  v15 = VehicleSystemMP->GetTeam(VehicleSystemMP, &v12->nextState);
  return Com_Teams_OnSameTeam(&LocalClientGlobals->predictedPlayerState, (const team_t)v13->team, &v12->nextState, v15);
}

/*
==============
CG_EntityMP_IsValidNotetrackEnt
==============
*/
bool CG_EntityMP_IsValidNotetrackEnt(const LocalClientNum_t localClientNum, const centity_t *centity, const int entNum)
{
  entityType_s eType; 
  int v7; 
  int IsScriptableEntityByNum; 

  if ( !centity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2779, ASSERT_TYPE_ASSERT, "(centity)", (const char *)&queryFormat, "centity") )
    __debugbreak();
  if ( (centity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2780, ASSERT_TYPE_ASSERT, "(CENextValid( centity ))", (const char *)&queryFormat, "CENextValid( centity )") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( entNum < (int)ComCharacterLimits::ms_gameData.m_characterCount || (eType = centity->nextState.eType, (unsigned __int16)eType <= ET_CLIENT_CHARACTER) && (v7 = 16793664, _bittest(&v7, eType)) || CG_Pose_IsRagdoll(&centity->pose) || BG_IsRagdollTrajectory(&centity->nextState.lerp.pos) || (IsScriptableEntityByNum = ScriptableCl_IsScriptableEntityByNum(localClientNum, entNum)) != 0 )
    LOBYTE(IsScriptableEntityByNum) = 1;
  return IsScriptableEntityByNum;
}

/*
==============
CG_EntityMP_Item
==============
*/
void CG_EntityMP_Item(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v3; 
  const Weapon *WeaponForEntity; 
  DObj *DObj_Item; 
  const char *WeaponName; 
  const cg_t *LocalClientGlobals; 
  unsigned int RenderFlagForRefEntity; 
  unsigned int number; 
  __int64 v17; 
  float v18; 
  bool outNewObj; 
  vec3_t outOrigin; 
  __int64 v21; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v23; 
  char output[1024]; 

  v21 = -2i64;
  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1375, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Entity_HasWeapon((LocalClientNum_t)v3, cent) )
  {
    __asm { vmovss  xmm2, cs:__real@3f800000; distanceSqMultiplier }
    CG_DistanceCacheMP_AddItem((const LocalClientNum_t)v3, cent->nextState.number, *(const float *)&_XMM2);
  }
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v3], &cent->nextState);
  if ( (unsigned __int16)(WeaponForEntity->weaponIdx - 1) > 0x224u )
  {
    LODWORD(v17) = WeaponForEntity->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1386, ASSERT_TYPE_ASSERT, "( 1 ) <= ( r_weapon.weaponIdx ) && ( r_weapon.weaponIdx ) <= ( (550 - 1) )", "r_weapon.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", v17, 1, 549) )
      __debugbreak();
  }
  DObj_Item = CG_EntityMP_GetDObj_Item((LocalClientNum_t)v3, cent->nextState.number, WeaponForEntity, &outNewObj);
  if ( DObj_Item )
  {
    if ( outNewObj || !CG_AnimTreeMP_CheckDObjWeaponID((LocalClientNum_t)v3, cent->nextState.number, WeaponForEntity) )
    {
      BG_UpdateWeaponHidePartBitsForDObj(DObj_Item, WeaponForEntity, 0, 0);
      BG_UpdatedWeaponBones(WeaponForEntity, DObj_Item, 0);
      CG_AnimTreeMP_SetDObjWeaponID((LocalClientNum_t)v3, cent->nextState.number, WeaponForEntity);
    }
    CG_EntityMP_ValidateDObj((const LocalClientNum_t)v3, cent);
    if ( !CG_Entity_IsNoDraw((const LocalClientNum_t)v3, &cent->nextState, NULL) && !CG_PredictMP_IsItemPickupPredicted((const LocalClientNum_t)v3, cent) )
    {
      if ( BG_WeaponDef(WeaponForEntity, 0)->worldModel )
      {
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+508h+outOrigin+8]
          vaddss  xmm1, xmm0, cs:__real@40800000
          vmovss  dword ptr [rsp+508h+outOrigin+8], xmm1
        }
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
        RenderFlagForRefEntity = CG_EntityMP_GetRenderFlagForRefEntity((LocalClientNum_t)v3, LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
        _RAX = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
        number = cent->nextState.number;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups [rsp+508h+var_468], ymm0
        }
        v23.characterEVOffset = _RAX->characterEVOffset;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_7.scrollRateX
          vmovups ymmword ptr [rsp+508h+result.color], ymm0
        }
        result.characterEVOffset = NULL_SHADER_OVERRIDE_7.atlasTime;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+508h+var_4C8], xmm0
        }
        CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, DObj_Item, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v23, &outOrigin, v18, 0);
      }
      else
      {
        WeaponName = BG_GetWeaponName(WeaponForEntity, output, 0x400u);
        Com_PrintError(17, "No XModel loaded for weapon index %i (%s)", WeaponForEntity->weaponIdx, WeaponName);
      }
    }
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_EntityMP_ItemDObjModelsMatch
==============
*/
bool CG_EntityMP_ItemDObjModelsMatch(const LocalClientNum_t localClientNum, const int entIndex, const Weapon *r_weapon, DObjModel *dobjModels, unsigned __int16 modelCount)
{
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  DObj *ClientDObj; 
  unsigned __int16 v11; 

  v5 = entIndex;
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 534, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->iEntityLastType[v5] == 3 && !memcmp_0(&LocalClientGlobals->iEntityLastWeaponID[v5], r_weapon, 0x3Cui64) )
  {
    ClientDObj = Com_GetClientDObj(v5, localClientNum);
    if ( !ClientDObj )
      return modelCount == 0;
    if ( ClientDObj->numModels == modelCount )
    {
      v11 = 0;
      if ( !modelCount )
        return 1;
      while ( ClientDObj->models[v11] == dobjModels[v11].model )
      {
        if ( ++v11 >= modelCount )
          return 1;
      }
    }
  }
  return 0;
}

/*
==============
CG_EntityMP_Item_AddWeaponWorldModels
==============
*/
__int64 CG_EntityMP_Item_AddWeaponWorldModels(const LocalClientNum_t localClientNum, const int entNum, const Weapon *r_weapon, DObjModel *dobjModels)
{
  __int64 v5; 
  bool v7; 
  const WeaponDef *v8; 
  bool IsDualWield; 
  bool v10; 
  const XModel *WeaponModels; 
  const DObjCamoParams *camoParams; 
  __int64 isUsingDetonator; 
  __int64 isUsingCensorshipWorldModel; 
  DObjCamoParams outLocalParams; 
  unsigned __int16 numModels; 

  v5 = localClientNum;
  if ( entNum < cls.maxClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 489, ASSERT_TYPE_ASSERT, "( entNum ) >= ( cls.maxClients )", "%s >= %s\n\t%i, %i", "entNum", "cls.maxClients", entNum, cls.maxClients) )
    __debugbreak();
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 490, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( r_weapon->weaponCamo >= BG_Camo_GetCamoCount() )
  {
    LODWORD(isUsingCensorshipWorldModel) = BG_Camo_GetCamoCount();
    LODWORD(isUsingDetonator) = r_weapon->weaponCamo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 491, ASSERT_TYPE_ASSERT, "(unsigned)( r_weapon.weaponCamo ) < (unsigned)( BG_Camo_GetCamoCount() )", "r_weapon.weaponCamo doesn't index BG_Camo_GetCamoCount()\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
  {
    LODWORD(isUsingCensorshipWorldModel) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(isUsingCensorshipWorldModel) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(isUsingDetonator) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v5] )
  {
    LODWORD(isUsingCensorshipWorldModel) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  v7 = !CgWeaponSystem::ms_weaponSystemArray[v5]->IsWeaponWorldModelLoaded(CgWeaponSystem::ms_weaponSystemArray[v5], r_weapon);
  v8 = BG_WeaponDef(r_weapon, 0);
  IsDualWield = BG_WeaponIsDualWield(r_weapon);
  v10 = IsDualWield;
  if ( IsDualWield )
  {
    v10 = IsDualWield;
    if ( v8->dualWieldType == DUAL_WIELD_TYPE_ALT_MODE )
      v10 = 0;
  }
  WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, r_weapon, 0, v7, v10, 0, 0);
  if ( !WeaponModels )
    return 0i64;
  camoParams = BG_Camo_GetWeaponDObjCamoParams(r_weapon, 0, &outLocalParams);
  numModels = 1;
  DObjInitModel(WeaponModels, (scr_string_t)0, 1, 0, camoParams, dobjModels);
  if ( !v7 )
    BG_AddWeaponAttachmentModels(r_weapon, WEAPON_HAND_DEFAULT, v10, 0, 1, 0, dobjModels, 0x20u, &numModels, NULL, camoParams);
  return numModels;
}

/*
==============
CG_EntityMP_LinkPacketEntity
==============
*/
void CG_EntityMP_LinkPacketEntity(LocalClientNum_t localClientNum, int entnum, int entMoved)
{
  __int64 v5; 
  centity_t *Entity; 
  entityType_s eType; 
  bool v9; 
  bool v11; 
  bool v12; 
  bool v13; 
  int *v14; 
  int v15; 
  int v16; 
  bool v20; 
  const DObj *ClientDObj; 
  const DObj *v37; 
  unsigned int v40; 
  const DObj *v41; 
  char v42; 
  float fmt; 
  _QWORD v45[3]; 
  vec3_t outOrigin; 
  __int64 v47; 

  v47 = -2i64;
  __asm { vmovaps [rsp+80h+var_10], xmm6 }
  v5 = entnum;
  Entity = CG_GetEntity(localClientNum, entnum);
  eType = Entity->nextState.eType;
  v9 = ScriptableCl_IsScriptableEntity(localClientNum, Entity) != 0;
  if ( (eType == ET_SCRIPTMOVER || eType == ET_PLANE) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u) && !v9 && !BG_IsVehicleEntity(&Entity->nextState) )
  {
    if ( entMoved && !CG_EntityWorkers_TryAddBModelBoundsUpdate(v5) )
      CG_Entity_UpdateBModelWorldBounds(localClientNum, Entity, 0);
  }
  else
  {
    _R12 = CgEntitySystem::GetEntitySystem(localClientNum);
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    v11 = (Entity->flags & 0x80000) != 0;
    if ( (unsigned int)v5 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 486, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v5, 2048) )
      __debugbreak();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v12 = (unsigned int)v5 < ComCharacterLimits::ms_gameData.m_clientCount;
    v13 = (_DWORD)v5 == ComCharacterLimits::ms_gameData.m_clientCount;
    if ( (int)v5 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
    {
      _RCX = 3 * (v5 + 129708);
      __asm
      {
        vmovss  xmm0, dword ptr [r12+rcx*4]
        vmovss  [rbp+var_40], xmm0
        vmovss  xmm1, dword ptr [r12+rcx*4+4]
        vmovss  [rbp+var_3C], xmm1
        vmovss  xmm0, dword ptr [r12+rcx*4+8]
        vmovss  [rbp+var_38], xmm0
      }
    }
    else
    {
      v14 = (int *)&_R12->m_entityOrigin[v5];
      v45[2] = v45;
      v15 = *v14;
      v16 = v14[1];
      LODWORD(v45[1]) = (unsigned int)v14 ^ v16 ^ v14[2] ^ s_entity_aab_Z;
      HIDWORD(v45[0]) = (unsigned int)v14 ^ s_entity_aab_Y ^ v15 ^ v16;
      LODWORD(v45[0]) = (unsigned int)v14 ^ v15 ^ ~s_entity_aab_X;
      memset(&v45[2], 0, sizeof(_QWORD));
      __asm
      {
        vmovss  xmm0, [rbp+var_40]
        vmovss  dword ptr [rbp+var_30], xmm0
      }
      if ( (v45[2] & 0x7F800000) == 2139095040 )
        goto LABEL_36;
      __asm
      {
        vmovss  xmm0, [rbp+var_3C]
        vmovss  dword ptr [rbp+var_30], xmm0
      }
      if ( (v45[2] & 0x7F800000) == 2139095040 )
        goto LABEL_36;
      __asm
      {
        vmovss  xmm0, [rbp+var_38]
        vmovss  dword ptr [rbp+var_30], xmm0
      }
      v12 = (v45[2] & 0x7F800000) < 0x7F800000;
      v13 = (v45[2] & 0x7F800000) == 2139095040;
      if ( (v45[2] & 0x7F800000) == 2139095040 )
      {
LABEL_36:
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )");
        v12 = 0;
        v13 = !v20;
        if ( v20 )
          __debugbreak();
      }
    }
    __asm
    {
      vmovss  xmm0, [rbp+var_40]
      vsubss  xmm3, xmm0, dword ptr [rbp+outOrigin]
      vmovss  xmm1, [rbp+var_3C]
      vsubss  xmm2, xmm1, dword ptr [rbp+outOrigin+4]
      vmovss  xmm0, [rbp+var_38]
      vsubss  xmm4, xmm0, dword ptr [rbp+outOrigin+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@43800000
    }
    if ( !v11 || !v12 && !v13 )
    {
      CgEntitySystem::SetEntityOrigin(_R12, v5, &outOrigin);
      if ( !CG_EntityWorkers_TryAddDObjBoundsUpdate(v5) )
      {
        ClientDObj = Com_GetClientDObj(v5, localClientNum);
        v37 = ClientDObj;
        if ( ClientDObj )
        {
          *(double *)&_XMM0 = DObjGetRadius(ClientDObj);
          __asm
          {
            vaddss  xmm6, xmm0, cs:__real@41800000
            vmovaps xmm3, xmm6; radius
          }
          v40 = R_LinkDObjEntity(localClientNum, v5, &outOrigin, *(float *)&_XMM3);
          Entity->flags |= 0x80000u;
          __asm { vmovss  dword ptr [rsp+80h+fmt], xmm6 }
          CG_Entity_CheckLightCount(v5, v37, v40, &outOrigin, fmt);
        }
      }
    }
    if ( entMoved )
    {
      v41 = Com_GetClientDObj(v5, localClientNum);
      if ( v41 )
      {
        *(double *)&_XMM0 = DObjGetRadius(v41);
        __asm { vcomiss xmm0, cs:?rg@@3Ur_globals_t@@A.primaryLightMotionDetectSizeMin; r_globals_t rg }
        if ( !(v42 | v13) )
        {
          __asm { vcomiss xmm0, cs:?rg@@3Ur_globals_t@@A.primaryLightMotionDetectSizeMax; r_globals_t rg }
          if ( v42 )
            R_EntityMoved(localClientNum, v5);
        }
      }
    }
    memset(v45, 0, 0xCui64);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  __asm { vmovaps xmm6, [rsp+80h+var_10] }
}

/*
==============
CG_EntityMP_Missile
==============
*/
void CG_EntityMP_Missile(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  const DObjCamoParams *WeaponDObjCamoParams; 
  const XModel *WeaponModels; 
  const XModel *v11; 
  int flags; 
  CgPredictedEntitySystem *System; 
  bool IsEmptyPredictionKey; 
  bool v18; 
  int time; 
  const WeaponDef *v20; 
  const SndAliasList *v21; 
  CgMissile *v22; 
  centity_t *LinkToParent; 
  unsigned __int16 weaponIdx; 
  int v25; 
  FxCombinedDef v26; 
  cg_t *v27; 
  WeaponSFXPackage *sfxPackage; 
  DObj *v29; 
  int v30; 
  int v31; 
  unsigned __int16 v32; 
  unsigned __int16 v33; 
  bool v34; 
  FxCombinedDef v35; 
  const SndAliasList *v36; 
  int v37; 
  FxCombinedDef v38; 
  int v39; 
  FxCombinedDef v40; 
  const cg_t *v43; 
  unsigned int RenderFlagForRefEntity; 
  const cg_t *v45; 
  float characterEVOffset; 
  unsigned int number; 
  CgCompassSystemMP *CompassSystemMP; 
  __int64 isUsingDetonator; 
  __int64 isUsingDetonatora; 
  __int64 isUsingCensorshipWorldModel; 
  float v63; 
  bool inAltWeaponMode; 
  bool createdNew; 
  FXRegisteredDef fxDef; 
  FXRegisteredDef v67; 
  unsigned int scriptableIndex; 
  vec3_t cgameGlob; 
  vec3_t outOrigin; 
  vec3_t origin; 
  vec3_t v72; 
  FXRegisteredDef v73; 
  shaderOverride_t outLocalParams; 
  GfxSceneHudOutlineInfo v75; 
  __int64 v76; 
  GfxSceneHudOutlineInfo result; 
  Weapon r_weapon; 
  DObjModel outDObjModel; 

  v76 = -2i64;
  v3 = localClientNum;
  fxDef.m_particleSystemDef = NULL;
  v73.m_particleSystemDef = NULL;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  *(_QWORD *)cgameGlob.v = LocalClientGlobals;
  if ( (cent->nextState.lerp.u.anonymous.data[4] & 0x200) != 0 )
    cent->flags |= 0x200u;
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  _RAX = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v3], &cent->nextState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+120h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+120h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbp+120h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(isUsingDetonator) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1788, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", isUsingDetonator, 2) )
      __debugbreak();
  }
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1789, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( BG_WeaponIsUsingCamo(&r_weapon) && BG_IsThrowingAxe(&r_weapon) )
  {
    WeaponDObjCamoParams = BG_Camo_GetWeaponDObjCamoParams(&r_weapon, 0, (DObjCamoParams *)&outLocalParams);
    WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, &r_weapon, 0, 0, 0, 0, 0);
    if ( !WeaponModels )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442BF770, 81i64, r_weapon.weaponCamo);
    DObjInitModel(WeaponModels, (scr_string_t)0, 1, 0, WeaponDObjCamoParams, &outDObjModel);
    LocalClientGlobals = *(cg_t **)cgameGlob.v;
  }
  else
  {
    v11 = BG_ProjectileModel(&r_weapon, cent->nextState.inAltWeaponMode);
    DObjInitModel(v11, (scr_string_t)0, 1, 0, NULL, &outDObjModel);
  }
  *(_QWORD *)outOrigin.v = CG_EntityMP_GetDObj((LocalClientNum_t)v3, cent->nextState.number, cent->nextState.eType, &outDObjModel, 1u, &createdNew);
  if ( r_weapon.weaponIdx >= BG_GetNumWeapons() )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rbp+120h+r_weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [rbp+120h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [rbp+120h+r_weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  inAltWeaponMode = cent->nextState.inAltWeaponMode;
  fxDef.m_particleSystemDef = BG_ProjTrailEffect(&r_weapon, inAltWeaponMode).particleSystemDef;
  if ( !CG_IsEntityHighLoD((const LocalClientNum_t)v3, cent->nextState.number) )
  {
    flags = cent->flags;
    if ( (flags & 2) != 0 )
    {
      cent->flags = flags & 0xFFFFFFFD;
      if ( fxDef.m_particleSystemDef )
        CG_StopBoltedEffects((LocalClientNum_t)v3, &fxDef, cent->nextState.number, scr_const.tag_fx);
    }
    goto LABEL_68;
  }
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)v3);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1881, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  if ( CG_Entity_IsNoDraw((const LocalClientNum_t)v3, &cent->nextState, NULL) || CgPredictedEntitySystem::HasAssociatedPredictedEntity(System, cent) )
    goto LABEL_66;
  IsEmptyPredictionKey = BgPredictedEntitySystem::IsEmptyPredictionKey((const unsigned int *)&cent->nextState.lerp.u);
  v18 = !IsEmptyPredictionKey;
  time = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->time;
  if ( IsEmptyPredictionKey && cent->nextState.lerp.u.anonymous.data[2] > time )
    goto LABEL_68;
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
  {
    LODWORD(isUsingCensorshipWorldModel) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(isUsingCensorshipWorldModel) = CgSoundSystem::ms_allocatedCount;
    LODWORD(isUsingDetonatora) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isUsingDetonatora, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  if ( !CgSoundSystem::ms_soundSystemArray[v3] )
  {
    LODWORD(isUsingCensorshipWorldModel) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  v67.m_particleSystemDef = (const ParticleSystemDef *)CgSoundSystem::ms_soundSystemArray[v3];
  v20 = BG_WeaponDef(&r_weapon, inAltWeaponMode);
  v21 = BG_ProjIgnitionSound(&r_weapon, inAltWeaponMode);
  *(_QWORD *)origin.v = v21;
  if ( v18 )
  {
    v22 = CgMissile::GetSystem((const LocalClientNum_t)v3);
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1922, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
      __debugbreak();
    CgMissile::BlendPredictedMissileTrajectoryForRemoteViewer(v22, cent, v20);
  }
  LinkToParent = CG_Entity_GetLinkToParent((LocalClientNum_t)v3, cent);
  if ( LinkToParent )
  {
    LocalClientGlobals = *(cg_t **)cgameGlob.v;
    if ( LinkToParent->nextState.number == *(_DWORD *)(*(_QWORD *)cgameGlob.v + 468i64) )
    {
      if ( (cent->flags & 0x800) == 0 )
      {
        weaponIdx = r_weapon.weaponIdx;
        if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
        {
          LODWORD(isUsingCensorshipWorldModel) = bg_lastParsedWeaponIndex;
          LODWORD(isUsingDetonatora) = r_weapon.weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", isUsingDetonatora, isUsingCensorshipWorldModel) )
            __debugbreak();
          v21 = *(const SndAliasList **)origin.v;
        }
        if ( !bg_weaponDefs[weaponIdx] )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
            __debugbreak();
          LocalClientGlobals = *(cg_t **)cgameGlob.v;
        }
        if ( bg_weaponDefs[weaponIdx]->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || time - cent->nextState.lerp.u.anonymous.data[2] > BG_ProjIgnitionDelay(&r_weapon, 0) )
        {
          cent->flags |= 0x800u;
          if ( v21 )
          {
            CG_GetPoseOrigin(&cent->pose, &outOrigin);
            CgSoundSystem::PlaySoundAlias((CgSoundSystem *)v67.m_particleSystemDef, cent->nextState.number, &outOrigin, v21);
            memset(&outOrigin, 0, sizeof(outOrigin));
          }
        }
      }
      v25 = cent->flags;
      if ( (v25 & 0x202) == 514 )
      {
        v25 &= ~2u;
        cent->flags = v25;
        if ( fxDef.m_particleSystemDef )
        {
          CG_StopBoltedEffects((LocalClientNum_t)v3, &fxDef, cent->nextState.number, scr_const.tag_fx);
          v25 = cent->flags;
        }
      }
      if ( (v25 & 0x400) != 0 )
      {
        cent->flags = v25 & 0xFFFFFBFF;
        v26.particleSystemDef = BG_ProjBeaconEffect(&r_weapon, inAltWeaponMode).particleSystemDef;
        if ( v26.particleSystemDef )
        {
          *(FxCombinedDef *)outOrigin.v = v26;
          CG_StopBoltedEffects((LocalClientNum_t)v3, (const FXRegisteredDef *)&outOrigin, cent->nextState.number, scr_const.tag_fx);
        }
      }
LABEL_66:
      v27 = LocalClientGlobals;
LABEL_67:
      CG_AddHudGrenade(v27, cent);
      goto LABEL_68;
    }
  }
  if ( v20->missileConeSoundEnabled )
    CG_PlayMissileProjectedConeSound((LocalClientNum_t)v3, cent);
  sfxPackage = v20->sfxPackage;
  if ( sfxPackage && sfxPackage->sounds->projectileSound.name )
  {
    CG_GetPoseOrigin(&cent->pose, &cgameGlob);
    CgSoundSystem::PlaySoundAliasByLookup((CgSoundSystem *)v67.m_particleSystemDef, cent->nextState.number, &cgameGlob, v20->sfxPackage->sounds->projectileSound);
    memset(&cgameGlob, 0, sizeof(cgameGlob));
  }
  v29 = *(DObj **)outOrigin.v;
  if ( *(_QWORD *)outOrigin.v )
  {
    if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v3, cent, &scriptableIndex) )
    {
      ScriptableCl_UpdatePosition((const LocalClientNum_t)v3, scriptableIndex, cent);
      ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v3, scriptableIndex, cent->nextState.number);
    }
    if ( createdNew )
      DObjSetCamoMaterialOverride(v29, &outDObjModel, 1);
    v30 = cent->flags;
    v31 = v30;
    if ( (v30 & 2) == 0 && (v30 & 0x200) == 0 )
    {
      v32 = r_weapon.weaponIdx;
      if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
      {
        LODWORD(isUsingCensorshipWorldModel) = bg_lastParsedWeaponIndex;
        LODWORD(isUsingDetonatora) = r_weapon.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", isUsingDetonatora, isUsingCensorshipWorldModel) )
          __debugbreak();
      }
      if ( !bg_weaponDefs[v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      if ( bg_weaponDefs[v32]->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || time - cent->nextState.lerp.u.anonymous.data[2] > BG_ProjIgnitionDelay(&r_weapon, 0) )
      {
        cent->flags |= 2u;
        if ( fxDef.m_particleSystemDef )
          CG_PlayBoltedEffect((LocalClientNum_t)v3, &fxDef, cent->nextState.number, scr_const.tag_fx);
        goto LABEL_93;
      }
      v31 = cent->flags;
    }
    if ( (v31 & 0x202) == 514 )
    {
      cent->flags = v31 & 0xFFFFFFFD;
      if ( fxDef.m_particleSystemDef )
        CG_StopBoltedEffects((LocalClientNum_t)v3, &fxDef, cent->nextState.number, scr_const.tag_fx);
    }
LABEL_93:
    if ( (cent->flags & 0x800) != 0 )
      goto LABEL_108;
    v33 = r_weapon.weaponIdx;
    if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(isUsingCensorshipWorldModel) = bg_lastParsedWeaponIndex;
      LODWORD(isUsingDetonatora) = r_weapon.weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", isUsingDetonatora, isUsingCensorshipWorldModel) )
        __debugbreak();
    }
    if ( !bg_weaponDefs[v33] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    if ( bg_weaponDefs[v33]->guidedMissileType == MISSILE_GUIDANCE_JAVELIN && time - cent->nextState.lerp.u.anonymous.data[2] <= BG_ProjIgnitionDelay(&r_weapon, 0) )
    {
LABEL_108:
      v34 = inAltWeaponMode;
    }
    else
    {
      v34 = inAltWeaponMode;
      v35.particleSystemDef = BG_ProjIgnitionEffect(&r_weapon, inAltWeaponMode).particleSystemDef;
      v73.m_particleSystemDef = v35.particleSystemDef;
      cent->flags |= 0x800u;
      if ( v35.particleSystemDef )
        CG_PlayBoltedEffect((LocalClientNum_t)v3, &v73, cent->nextState.number, scr_const.tag_fx);
      v36 = *(const SndAliasList **)origin.v;
      if ( *(_QWORD *)origin.v )
      {
        CG_GetPoseOrigin(&cent->pose, &origin);
        CgSoundSystem::PlaySoundAlias((CgSoundSystem *)v67.m_particleSystemDef, cent->nextState.number, &origin, v36);
        memset(&origin, 0, sizeof(origin));
      }
    }
    v37 = cent->flags;
    if ( (v37 & 0x400) == 0 )
    {
      cent->flags = v37 | 0x400;
      v38.particleSystemDef = BG_ProjBeaconEffect(&r_weapon, v34).particleSystemDef;
      if ( v38.particleSystemDef )
      {
        v67.m_particleSystemDef = v38.particleSystemDef;
        CG_PlayBoltedEffect((LocalClientNum_t)v3, &v67, cent->nextState.number, scr_const.tag_fx);
      }
    }
    v39 = cent->flags;
    if ( (v39 & 0x40000) == 0 )
    {
      cent->flags = v39 | 0x40000;
      v40.particleSystemDef = BG_ProjBodyEffect(&r_weapon, 0).particleSystemDef;
      if ( v40.particleSystemDef )
      {
        v67.m_particleSystemDef = v40.particleSystemDef;
        CG_PlayBoltedEffect((LocalClientNum_t)v3, &v67, cent->nextState.number, scr_const.tag_fx);
      }
    }
    CG_GetPoseOrigin(&cent->pose, &v72);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+120h+var_180+8]
      vaddss  xmm1, xmm0, cs:__real@40800000
      vmovss  dword ptr [rbp+120h+var_180+8], xmm1
    }
    v43 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    RenderFlagForRefEntity = CG_EntityMP_GetRenderFlagForRefEntity((LocalClientNum_t)v3, v43, cent, &cent->nextState.lerp.eFlags);
    if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1766, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    if ( cent->nextState.eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1767, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_MISSILE)", (const char *)&queryFormat, "cent->nextState.eType == ET_MISSILE") )
      __debugbreak();
    v45 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    _RAX = CG_Entity_GetHudOutlineInfo(&result, v45, cent);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+120h+outLocalParams.___u0], ymm0
      vmovups [rbp+120h+var_130], ymm0
    }
    characterEVOffset = _RAX->characterEVOffset;
    if ( (*((_BYTE *)&cent->nextState.lerp.u.ragdollConstraint + 16) & 0x20) != 0 )
    {
      if ( CgEntitySystemMP::CG_EntityMP_IsOnSameTeam((const LocalClientNum_t)v3, cent) || !CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)v3) )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+120h+outLocalParams.___u0] }
      }
      else
      {
        _EAX = CG_Utils_StencilScriptControlled((const LocalClientNum_t)v3);
        _ECX = 0;
        __asm
        {
          vmovd   xmm1, ecx
          vmovd   xmm0, eax
          vpcmpeqd xmm3, xmm0, xmm1
          vmovss  xmm2, cs:__real@3f800000
          vmovss  xmm1, dword ptr [rbp+120h+var_130+4]
          vblendvps xmm0, xmm1, xmm2, xmm3
          vmovss  dword ptr [rbp+120h+var_130+4], xmm0
          vmovups ymm0, [rbp+120h+var_130]
        }
      }
    }
    number = cent->nextState.number;
    __asm { vmovups [rbp+120h+var_130], ymm0 }
    v75.characterEVOffset = characterEVOffset;
    __asm
    {
      vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_7.scrollRateX
      vmovups ymmword ptr [rbp+120h+outLocalParams.___u0], ymm0
    }
    outLocalParams.atlasTime = NULL_SHADER_OVERRIDE_7.atlasTime;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+220h+var_1E0], xmm0
    }
    CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, *(const DObj **)outOrigin.v, &cent->pose, number, RenderFlagForRefEntity, &outLocalParams, &v75, &v72, v63, 0);
    CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)v3);
    CgCompassSystemMP::UpdateMissileInfo(CompassSystemMP, cent);
    v27 = (cg_t *)v43;
    goto LABEL_67;
  }
LABEL_68:
  memset(&v72, 0, sizeof(v72));
}

/*
==============
CG_EntityMP_PrimaryLight
==============
*/
void CG_EntityMP_PrimaryLight(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v7; 
  char v35; 
  bool v36; 
  bool v71; 
  __int64 v93; 
  unsigned int primaryLightCount; 
  double v95; 
  double v96; 
  CgTrajectory v97; 
  tmat33_t<vec3_t> axis; 
  float v1[4]; 
  LerpEntityStatePrimaryLightUnpacked out; 
  LerpEntityStatePrimaryLightUnpacked v101; 
  vec3_t outAng; 

  if ( cent->nextState.eType != ET_PRIMARY_LIGHT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4031, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PRIMARY_LIGHT)", (const char *)&queryFormat, "cent->nextState.eType == ET_PRIMARY_LIGHT") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4032, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  _R15 = CG_GetLocalClientGlobals(localClientNum);
  v7 = comWorld.firstScriptablePrimaryLight + cent->nextState.staticState.general.xmodel;
  if ( ((int)v7 < (int)comWorld.firstScriptablePrimaryLight || (int)v7 >= (int)comWorld.primaryLightCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 106, ASSERT_TYPE_ASSERT, "(primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount ))", (const char *)&queryFormat, "primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount )") )
    __debugbreak();
  if ( !rgp.world->primaryLights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4039, ASSERT_TYPE_ASSERT, "(rgp.world->primaryLights)", (const char *)&queryFormat, "rgp.world->primaryLights") )
    __debugbreak();
  _RBX = &rgp.world->primaryLights[(int)v7];
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  if ( (unsigned int)v7 >= comWorld.primaryLightCount )
  {
    primaryLightCount = comWorld.primaryLightCount;
    LODWORD(v93) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v93, primaryLightCount) )
      __debugbreak();
  }
  _RSI = comWorld.primaryLights;
  _RDI = v7;
  if ( comWorld.primaryLights[_RDI].type == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4042, ASSERT_TYPE_ASSERT, "(refLight->type != 1)", (const char *)&queryFormat, "refLight->type != GFX_LIGHT_TYPE_DIR") )
    __debugbreak();
  if ( (_RBX->flags & 0x40) == 0 )
  {
    __asm
    {
      vmovaps [rsp+150h+var_40], xmm6
      vmovaps [rsp+150h+var_50], xmm7
    }
    LerpEntityStatePrimaryLightUnpack((const LerpEntityStatePrimaryLightPacked *)&cent->prevState.u, &out);
    LerpEntityStatePrimaryLightUnpack((const LerpEntityStatePrimaryLightPacked *)&cent->nextState.lerp.u, &v101);
    __asm
    {
      vmovss  xmm6, dword ptr [r15+65E0h]
      vmovss  xmm0, dword ptr [rbp+50h+var_90.colorLinearSrgb]
      vsubss  xmm1, xmm0, dword ptr [rbp+50h+out.colorLinearSrgb]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+50h+out.colorLinearSrgb]
      vmovss  dword ptr [rbx+14h], xmm3
      vmovss  xmm0, dword ptr [rbp+50h+var_90.colorLinearSrgb+4]
      vsubss  xmm1, xmm0, dword ptr [rbp+50h+out.colorLinearSrgb+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+50h+out.colorLinearSrgb+4]
      vmovss  dword ptr [rbx+18h], xmm3
      vmovss  xmm0, dword ptr [rbp+50h+var_90.colorLinearSrgb+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+50h+out.colorLinearSrgb+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+50h+out.colorLinearSrgb+8]
      vmovss  xmm6, cs:__real@3f800000
      vmovss  dword ptr [rbx+1Ch], xmm3
      vmovss  xmm1, dword ptr [r15+65E0h]
      vsubss  xmm0, xmm6, xmm1
      vmulss  xmm2, xmm0, [rbp+50h+out.intensity]
      vmulss  xmm1, xmm1, [rbp+50h+var_90.intensity]
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rbx+10h], xmm2
      vmovss  xmm3, dword ptr [r15+65E0h]
      vmulss  xmm1, xmm3, [rbp+50h+var_90.uvIntensity]
      vsubss  xmm0, xmm6, xmm3
      vmulss  xmm2, xmm0, [rbp+50h+out.uvIntensity]
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rbx+4], xmm2
    }
    CgTrajectory::CgTrajectory(&v97, localClientNum, cent, &cent->nextState.lerp);
    __asm
    {
      vcomiss xmm6, dword ptr [rdi+rsi+8Ch]
      vxorps  xmm7, xmm7, xmm7
    }
    if ( !(v35 | v36) )
    {
      BgTrajectory::EvaluateAngTrajectory(&v97, _R15->time, &outAng);
      AnglesToAxis(&outAng, &axis);
      __asm
      {
        vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm0, dword ptr [rsp+150h+axis]
        vmovss  xmm2, dword ptr [rsp+150h+axis+4]
        vxorps  xmm1, xmm0, xmm3
        vxorps  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbx+20h], xmm1
        vmovss  xmm1, dword ptr [rsp+150h+axis+8]
      }
      _R14 = (_DWORD *)_RBX->bulbLength.v;
      __asm
      {
        vxorps  xmm2, xmm1, xmm3
        vmovss  dword ptr [rbx+28h], xmm2
        vmovss  dword ptr [rbx+24h], xmm0
      }
      if ( &_RSI[_RDI].bulbLength == &_RBX->bulbLength && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+150h+axis]
        vmulss  xmm3, xmm0, dword ptr [r12]
        vmovss  xmm1, dword ptr [rsp+150h+axis+0Ch]
        vmulss  xmm2, xmm1, dword ptr [r12+4]
        vmovss  xmm0, dword ptr [rbp+50h+axis+18h]
        vmulss  xmm1, xmm0, dword ptr [r12+8]
        vmovss  xmm0, dword ptr [rsp+150h+axis+4]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  xmm1, dword ptr [rsp+150h+axis+10h]
        vmovss  dword ptr [r14], xmm2
        vmulss  xmm3, xmm0, dword ptr [r12]
        vmulss  xmm2, xmm1, dword ptr [r12+4]
        vmovss  xmm0, dword ptr [rbp+50h+axis+1Ch]
        vmulss  xmm1, xmm0, dword ptr [r12+8]
        vmovss  xmm0, dword ptr [rsp+150h+axis+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  xmm1, dword ptr [rsp+150h+axis+14h]
        vmovss  dword ptr [r14+4], xmm2
        vmulss  xmm2, xmm1, dword ptr [r12+4]
        vmulss  xmm3, xmm0, dword ptr [r12]
        vmovss  xmm0, dword ptr [rbp+50h+axis+20h]
        vmulss  xmm1, xmm0, dword ptr [r12+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  dword ptr [r14+8], xmm2
        vmovss  xmm2, cs:__real@3a83126f; epsilon
        vmovss  [rbp+50h+v1], xmm7
        vmovss  [rbp+50h+var_BC], xmm7
        vmovss  [rbp+50h+var_B8], xmm7
      }
      v71 = VecNCompareCustomEpsilon(_RBX->bulbLength.v, v1, *(float *)&_XMM2, 3);
      v35 = 0;
      v36 = !v71;
      if ( v71 )
      {
        *_R14 = 998277249;
        _RBX->bulbLength.v[1] = 0.0039215689;
        _RBX->bulbLength.v[2] = 0.0039215689;
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rsi+90h]
      vcomiss xmm0, xmm7
    }
    if ( !(v35 | v36) )
    {
      BgTrajectory::EvaluatePosTrajectory(&v97, _R15->time, &_RBX->origin);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+rsi+90h]
        vcomiss xmm0, xmm7
      }
      if ( !(v35 | v36) )
        goto LABEL_33;
    }
    __asm { vcomiss xmm6, dword ptr [rdi+rsi+8Ch] }
    if ( !(v35 | v36) )
    {
LABEL_33:
      __asm
      {
        vmovss  xmm1, dword ptr [r15+65E0h]
        vsubss  xmm0, xmm6, xmm1
        vmulss  xmm2, xmm0, [rbp+50h+out.radius]
        vmulss  xmm1, xmm1, [rbp+50h+var_90.radius]
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rbx+44h], xmm2
        vmovss  xmm3, dword ptr [r15+65E0h]
        vmulss  xmm1, xmm3, [rbp+50h+var_90.cosHalfFovOuter]
        vsubss  xmm0, xmm6, xmm3
        vmulss  xmm2, xmm0, [rbp+50h+out.cosHalfFovOuter]
        vaddss  xmm4, xmm2, xmm1
        vcomiss xmm4, xmm7
        vmovss  dword ptr [rbx+60h], xmm4
        vmovss  xmm1, dword ptr [r15+65E0h]
        vsubss  xmm0, xmm6, xmm1
        vmulss  xmm2, xmm0, [rbp+50h+out.cosHalfFovInner]
        vmulss  xmm1, xmm1, [rbp+50h+var_90.cosHalfFovInner]
        vaddss  xmm3, xmm2, xmm1
        vmovss  dword ptr [rbx+64h], xmm3
      }
      if ( v35 )
        goto LABEL_36;
      __asm { vcomiss xmm4, xmm3 }
      if ( !(v35 | v36) )
        goto LABEL_36;
      __asm { vcomiss xmm3, xmm6 }
      if ( !(v35 | v36) )
      {
LABEL_36:
        __asm
        {
          vcvtss2sd xmm0, xmm3, xmm3
          vmovsd  [rsp+150h+var_118], xmm0
          vcvtss2sd xmm1, xmm4, xmm4
          vmovsd  [rsp+150h+var_120], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4087, ASSERT_TYPE_ASSERT, "(0.0f <= light->cosHalfFovOuter && light->cosHalfFovOuter <= light->cosHalfFovInner && light->cosHalfFovInner <= 1.0f)", "%s\n\t%g, %g", "0.0f <= light->cosHalfFovOuter && light->cosHalfFovOuter <= light->cosHalfFovInner && light->cosHalfFovInner <= 1.0f", v95, v96) )
          __debugbreak();
      }
    }
    __asm
    {
      vmovaps xmm6, [rsp+150h+var_40]
      vmovaps xmm7, [rsp+150h+var_50]
    }
  }
}

/*
==============
CG_EntityMP_ProcessEntity
==============
*/
void CG_EntityMP_ProcessEntity(LocalClientNum_t localClientNum, centity_t *cent)
{
  const SndAliasList *EntityLoopSoundAlias; 
  const DObj *DObj_General; 
  const cg_t *LocalClientGlobals; 
  unsigned int RenderFlagForRefEntity; 
  unsigned int number; 
  float characterEVOffset; 
  CgCompassSystemMP *CompassSystemMP; 
  int v16; 
  unsigned int torsoPitchPacked; 
  cg_t *v18; 
  int v19; 
  CgVehicleSystemMP *VehicleSystemMP; 
  __int64 v21; 
  float v22; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v24; 
  vec3_t outLightingOrigin; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4721, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4722, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  EntityLoopSoundAlias = CG_Entity_GetEntityLoopSoundAlias(localClientNum, cent);
  if ( EntityLoopSoundAlias )
    CG_Entity_PlayEntityLoopSound(localClientNum, cent, EntityLoopSoundAlias);
  if ( cent->nextState.eType != cent->pose.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4730, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == cent->pose.eType)", (const char *)&queryFormat, "cent->nextState.eType == cent->pose.eType") )
    __debugbreak();
  switch ( cent->nextState.eType )
  {
    case ET_FIRST:
    case ET_INFO_VOLUME_GRAPPLE:
      DObj_General = CG_EntityMP_GetDObj_General(localClientNum, cent, NULL);
      if ( DObj_General )
      {
        if ( !CG_Entity_IsNoDraw(localClientNum, &cent->nextState, NULL) )
        {
          CG_Entity_CalcLightingOrigin(&cent->pose, DObj_General, &outLightingOrigin);
          LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
          RenderFlagForRefEntity = CG_EntityMP_GetRenderFlagForRefEntity(localClientNum, LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
          _RAX = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
          number = cent->nextState.number;
          __asm { vmovups ymm0, ymmword ptr [rax] }
          characterEVOffset = _RAX->characterEVOffset;
          __asm
          {
            vmovups [rsp+0F8h+var_78], ymm0
            vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_7.scrollRateX
          }
          v24.characterEVOffset = characterEVOffset;
          __asm
          {
            vmovups ymmword ptr [rsp+0F8h+result.color], ymm0
            vxorps  xmm0, xmm0, xmm0
            vmovss  [rsp+0F8h+var_B8], xmm0
          }
          result.characterEVOffset = NULL_SHADER_OVERRIDE_7.atlasTime;
          CG_Entity_AddDObjToScene(localClientNum, DObj_General, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v24, &outLightingOrigin, v22, 0);
        }
      }
      break;
    case ET_PLAYER:
    case ET_AGENT:
      CG_PlayersMP_ProcessPlayer(localClientNum, cent);
      break;
    case ET_PLAYER_CORPSE:
      CG_PlayersMP_ProcessCorpse(localClientNum, cent);
      break;
    case ET_ITEM:
      CG_EntityMP_Item(localClientNum, cent);
      break;
    case ET_MISSILE:
      CG_EntityMP_Missile(localClientNum, cent);
      break;
    case ET_SCRIPTMOVER:
      goto $LN34_66;
    case ET_SOUND:
      v16 = cent->nextState.lerp.u.anonymous.data[0];
      if ( v16 )
      {
        if ( (unsigned int)(v16 - 1) <= 1 )
        {
          torsoPitchPacked = cent->nextState.lerp.u.player.torsoPitchPacked;
          if ( torsoPitchPacked >= 0x4000 )
          {
            LODWORD(v21) = cent->nextState.lerp.u.player.torsoPitchPacked;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3916, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v21, 0x4000) )
              __debugbreak();
          }
          CG_EnableAudioTriggerByIndex(torsoPitchPacked, cent->nextState.lerp.u.anonymous.data[0] == 2);
        }
        else if ( v16 == 3 && localClientNum == LOCAL_CLIENT_0 )
        {
          CG_SND_BankDetailStream_SetScriptedSoundbanks(*(_QWORD *)&cent->nextState.lerp.u.scriptMover.animIndex);
        }
      }
      else
      {
        CG_EntityMP_SoundBlend(localClientNum, cent);
      }
      break;
    case ET_PRIMARY_LIGHT:
      CG_EntityMP_PrimaryLight(localClientNum, cent);
      break;
    case ET_TURRET:
      CG_EntityMP_Turret(localClientNum, cent);
      break;
    case ET_HELICOPTER:
    case ET_VEHICLE:
    case ET_VEHICLE_CORPSE:
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_vehFixResetSkeleton, "bg_vehFixResetSkeleton") )
      {
        v18 = CG_GetLocalClientGlobals(localClientNum);
        v19 = cent->nextState.number;
        if ( v18->predictedPlayerState.vehicleState.entity == v19 )
          CG_Entity_ResetSkeleton(localClientNum, v19);
      }
      VehicleSystemMP = CgVehicleSystemMP::GetVehicleSystemMP(localClientNum);
      CgVehicleSystemMP::ProcessEntity(VehicleSystemMP, cent);
      break;
    case ET_PLANE:
      CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(localClientNum);
      CgCompassSystemMP::UpdatePlaneInfo(CompassSystemMP, cent->nextState.number);
$LN34_66:
      CG_EntityMP_ScriptMover(localClientNum, cent);
      break;
    case ET_AGENT_CORPSE:
      CG_PlayersMP_AgentCorpse(localClientNum, cent);
      break;
    case ET_PHYSICS_CHILD:
      Profile_Begin(687);
      CG_PhysicsObject_UpdatePhysicsChild((Physics_WorldId)(3 * localClientNum + 2), localClientNum, cent);
      Profile_EndInternal(NULL);
      break;
    case ET_BEAM:
      CG_BeamEntity_Update(localClientNum, cent);
      break;
    case ET_CLIENT_CHARACTER:
      CG_ClientCharacter_ProcessEntity(localClientNum, cent);
      break;
    case ET_RAGDOLL_CONSTRAINT:
      CG_RagdollConstraintEntity_Update(localClientNum, cent);
      break;
    case ET_PHYSICS_VOLUME:
      CG_PhysicsVolume_Update(localClientNum, cent);
      break;
    case ET_COVERWALL:
      CG_CoverWall_ProcessEntity(localClientNum, cent);
      break;
    default:
      if ( cent->nextState.eType != ET_INVISIBLE )
      {
        LODWORD(v21) = cent->nextState.eType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4735, ASSERT_TYPE_ASSERT, "( ( cent->nextState.eType == ET_INVISIBLE ) )", "( cent->nextState.eType ) = %i", v21) )
          __debugbreak();
      }
      break;
  }
}

/*
==============
CG_EntityMP_ProcessEntityDobjUpdate
==============
*/
void CG_EntityMP_ProcessEntityDobjUpdate(LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlob, int entnum, centity_t *cent)
{
  float v5; 
  __int64 v6; 
  DObj *ClientDObj; 
  bool v11; 
  __int64 v12; 
  int clientNum; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  bool v16; 
  bool v20; 
  XAnimNotifyHandle v21; 

  v6 = entnum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3020, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  if ( cent->nextState.eType == ET_PLAYER || cent->nextState.eType == ET_AGENT )
  {
    CG_PlayersMP_UpdateCharacterDObj(localClientNum, cent);
    ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  }
  else
  {
    ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
    if ( ClientDObj )
    {
      if ( !CG_Entity_CanUseDObj(localClientNum, cent->nextState.number) )
      {
        Com_PrintWarning(19, "CG_EntityMP_UpdateDobj: Found a dobj for entity of type %i at entity %i which cannot use a dobj. Ignoring it.\n", (unsigned int)cent->nextState.eType, (unsigned int)cent->nextState.number);
        return;
      }
      if ( !DObjVerifyNumBones(ClientDObj) )
      {
        Com_PrintWarning(19, "CG_EntityMP_UpdateDobj: Invalid dobj for entity of type %i at entity %i (dobj->numBones does not match models).\n", (unsigned int)cent->nextState.eType, (unsigned int)cent->nextState.number);
        DObjDumpInfo(ClientDObj);
        return;
      }
    }
  }
  if ( ClientDObj )
  {
    if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2996, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( (int)v6 < cls.maxClients )
    {
      v11 = bitarray_base<bitarray<224>>::testBit(&cgameGlob->m_playerUpdateAnimBits, v6);
      v12 = v6;
      if ( !v11 )
      {
        cgameGlob->m_playerUpdateAnimInfo[v12].accumulatedTime = cgameGlob->frametime + cgameGlob->m_playerUpdateAnimInfo[v6].accumulatedTime;
        return;
      }
      cgameGlob->m_playerUpdateAnimInfo[v12].accumulatedTime = 0;
    }
    clientNum = cgameGlob->predictedPlayerState.clientNum;
    if ( cgameGlob->renderingThirdPerson || (Instance = CgWeaponMap::GetInstance(localClientNum), IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &cgameGlob->predictedPlayerState)) )
      IsThirdPersonMode = 1;
    v16 = clientNum != (_DWORD)v6 || IsThirdPersonMode;
    Sys_ProfBeginNamedEvent(0xFFEE82EE, "Entity Dobj Update");
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r15d
      vmulss  xmm2, xmm0, cs:__real@3a83126f
    }
    DObjUpdateClientInfo((DObj *)&v21, v5, v20, v16);
    Sys_ProfEndNamedEvent();
    if ( v21.m_notifyIndex != 0xFFFF && CG_EntityMP_IsValidNotetrackEnt(localClientNum, cent, v6) && !CG_EntityWorkers_TryAddNoteTrackNotification(v6, v21) )
      CG_EntityMP_ProcessEntityNoteTracks(cgameGlob, ClientDObj, v6, v21);
  }
}

/*
==============
CG_EntityMP_ProcessEntityNoteTracks
==============
*/
void CG_EntityMP_ProcessEntityNoteTracks(const CgGlobalsMP *cgameGlob, DObj *dObj, int entNum, const XAnimNotifyHandle notifyHandle)
{
  centity_t *Entity; 
  CgWeaponMap *Instance; 
  bool v10; 
  int clientNum; 
  bool processFxNotetracks; 
  const XAnimNotify *i; 
  CgEntityNotetrackEventTracking eventTracking; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2818, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( notifyHandle.m_notifyIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2819, ASSERT_TYPE_ASSERT, "( notifyHandle.IsValid() )", "Called the NoteTrack process when we have no note tracks to handle") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_EntityMP_ProcessEntityNoteTracks");
  Entity = CG_GetEntity((const LocalClientNum_t)cgameGlob->localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2824, ASSERT_TYPE_ASSERT, "(centity)", (const char *)&queryFormat, "centity") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2825, ASSERT_TYPE_ASSERT, "(CENextValid( centity ))", (const char *)&queryFormat, "CENextValid( centity )") )
    __debugbreak();
  if ( !CG_EntityMP_IsValidNotetrackEnt((const LocalClientNum_t)cgameGlob->localClientNum, Entity, entNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2826, ASSERT_TYPE_ASSERT, "(CG_EntityMP_IsValidNotetrackEnt( cgameGlob->localClientNum, centity, entNum ))", (const char *)&queryFormat, "CG_EntityMP_IsValidNotetrackEnt( cgameGlob->localClientNum, centity, entNum )") )
    __debugbreak();
  v10 = 1;
  if ( !cgameGlob->renderingThirdPerson )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
    if ( !BG_IsThirdPersonMode(Instance, &cgameGlob->predictedPlayerState) )
      v10 = 0;
  }
  clientNum = cgameGlob->predictedPlayerState.clientNum;
  processFxNotetracks = XCamData::IsActive(&cgameGlob->xCam) || clientNum != entNum || !v10;
  eventTracking = 0;
  for ( i = DObjGetClientNotifyFirst(notifyHandle); i; i = DObjGetClientNotifyNext(i) )
  {
    CG_EntityMP_ProcessNoteTrack(cgameGlob->localClientNum, i, Entity, &eventTracking);
    if ( (Entity->flags & 1) != 0 )
      CG_Utils_ProcessNotetracks(cgameGlob->localClientNum, entNum, dObj, &Entity->pose, i, 0, 0, 0, 0, processFxNotetracks);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_EntityMP_ProcessFxEntity
==============
*/
void CG_EntityMP_ProcessFxEntity(LocalClientNum_t localClientNum, int entnum, centity_t *cent)
{
  int eType; 
  ParticleSystemHandle particleSystem; 
  cg_t *LocalClientGlobals; 
  char v11; 
  char v24; 
  int v26; 
  __int64 v28; 
  vec3_t outOrigin; 
  __int64 v30; 

  v30 = -2i64;
  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _RDI = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4836, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( _RDI->nextState.loopSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4837, ASSERT_TYPE_ASSERT, "(!cent->nextState.loopSound)", (const char *)&queryFormat, "!cent->nextState.loopSound") )
    __debugbreak();
  if ( _RDI->nextState.eType != _RDI->pose.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4838, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == cent->pose.eType)", (const char *)&queryFormat, "cent->nextState.eType == cent->pose.eType") )
    __debugbreak();
  eType = _RDI->nextState.eType;
  if ( eType == 9 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    __asm { vmovss  xmm6, dword ptr [rdi+1E8h] }
    CG_GetPoseOrigin(&_RDI->pose, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+outOrigin]
      vsubss  xmm3, xmm0, dword ptr [rbp+38h]
      vmovss  xmm1, dword ptr [rsp+88h+outOrigin+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+3Ch]
      vmovss  xmm0, dword ptr [rsp+88h+outOrigin+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+40h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm5, xmm3, xmm0
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm6, xmm1
    }
    if ( v24 )
      goto LABEL_20;
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vcomiss xmm5, xmm0
    }
    if ( v11 )
    {
LABEL_20:
      v26 = _RDI->nextState.lerp.u.anonymous.data[1];
      if ( v26 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4005, ASSERT_TYPE_ASSERT, "(period > 0)", (const char *)&queryFormat, "period > 0") )
        __debugbreak();
      if ( !_RDI->pose.coverWall.coverGrid[1] )
        CG_EntityMP_StartFx(localClientNum, entnum, _RDI, LocalClientGlobals->time, LocalClientGlobals->time + v26);
      for ( ; LocalClientGlobals->time >= (signed int)_RDI->pose.coverWall.coverGrid[0]; _RDI->pose.coverWall.coverGrid[0] += v26 )
        FX_RetriggerEffect(localClientNum, _RDI->pose.fx.particleSystem, _RDI->pose.fx.triggerTime);
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    if ( (_WORD)eType != 8 )
    {
      LODWORD(v28) = _RDI->nextState.eType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4843, ASSERT_TYPE_ASSERT, "( ( cent->nextState.eType == ET_FX ) )", "( cent->nextState.eType ) = %i", v28) )
        __debugbreak();
    }
    if ( _RDI->pose.coverWall.coverGrid[0] != _RDI->nextState.time2 )
    {
      particleSystem = _RDI->pose.fx.particleSystem;
      if ( particleSystem )
        CG_DoneWithEffect(localClientNum, particleSystem);
      _RDI->pose.player.control = NULL;
      CG_EntityMP_StartFx(localClientNum, entnum, _RDI, _RDI->nextState.time2, _RDI->nextState.time2);
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
}

/*
==============
CG_EntityMP_ProcessNoteTrack
==============
*/
void CG_EntityMP_ProcessNoteTrack(LocalClientNum_t localClientNum, const XAnimNotify *notify, const centity_t *centity, CgEntityNotetrackEventTracking *eventTracking)
{
  unsigned int number; 
  const char *v8; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  CgEntitySystem *EntitySystem; 
  char v12; 
  characterInfo_t *v13; 
  characterInfo_t *CharacterInfo; 
  const dvar_t *v15; 
  int v16; 
  const characterInfo_t *v17; 
  bool v18; 
  scr_string_t noteName; 
  bool v20; 
  char v21; 
  const scr_string_t **v22; 
  unsigned int v23; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  bool v26; 
  const centity_t *v27; 
  scr_string_t v28; 
  bool v29; 
  bool v30; 
  char v31; 
  CgEntityNotetrackEventTracking *v32; 
  scr_string_t v33; 
  const scr_string_t **v34; 
  unsigned int v35; 
  TraceGroundSource fmt; 
  int clientNum; 
  bool v38; 

  if ( !notify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2624, ASSERT_TYPE_ASSERT, "(notify)", (const char *)&queryFormat, "notify") )
    __debugbreak();
  number = centity->nextState.number;
  v8 = SL_ConvertToString(notify->noteName);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2630, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2633, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
    __debugbreak();
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2636, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  CG_TrackerPerk_ProcessNoteTrack(localClientNum, number, notify);
  v12 = 0;
  if ( ScriptableCl_IsScriptableEntityByNum(localClientNum, number) )
  {
    ScriptableCl_AnimNotetrackEvent(localClientNum, number, v8);
    v12 = 1;
  }
  CG_Entity_ProcessRagdollAnimNotify(localClientNum, number, notify);
  if ( notify->notifyType != 1 )
  {
    switch ( notify->notifyType )
    {
      case 2u:
        if ( I_stricmp(v8, "anim_gunhand = \"left\"") )
        {
          if ( !I_stricmp(v8, "anim_gunhand = \"right\"") )
          {
            CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, number);
            if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2741, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
              __debugbreak();
            CharacterInfo->dobjDirty = 1;
            CharacterInfo->leftHandGun = 0;
          }
        }
        else
        {
          v13 = CgStatic::GetCharacterInfo(LocalClientStatics, number);
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2733, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
            __debugbreak();
          v13->leftHandGun = 1;
          v13->dobjDirty = 1;
        }
        break;
      case 3u:
        CG_AnimationState_UpdateNotetrack(localClientNum, number, v8);
        break;
      case 5u:
        CG_ClientCharacter_ProcessNoteTrack(localClientNum, number, notify);
        break;
    }
    return;
  }
  if ( LocalClientStatics->HasCharacterInfo(LocalClientStatics, number) )
  {
    v15 = DCONST_DVARINT_cg_playerNoteTrackSoundCount;
    if ( !DCONST_DVARINT_cg_playerNoteTrackSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNoteTrackSoundCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( CG_PlayersMP_IsPlayerAboveCullingThreshold(LocalClientGlobals, centity, v15->current.unsignedInt) )
    {
      v16 = 0;
      if ( (!CgEntitySystem::IsScriptedAgent(EntitySystem, &centity->nextState) || !v12) && !eventTracking->playedFootstep )
      {
        if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, number) )
        {
          if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
            v17 = CgGlobalsMP::GetCharacterInfo(LocalClientGlobals, number);
          else
            v17 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, number);
        }
        else
        {
          v17 = NULL;
        }
        v18 = centity->nextState.eType == ET_PLAYER && v17 && BG_PlayerASM_IsOnLadder(v17);
        noteName = notify->noteName;
        v38 = v18;
        v20 = noteName == scr_const.ladder_grab_left || noteName == scr_const.ladder_grab_right;
        v21 = 0;
        v22 = szFootstepEventNames;
        v23 = 0;
        while ( noteName != **v22 )
        {
          ++v23;
          ++v22;
          if ( v23 >= 4 )
            goto LABEL_58;
        }
        v21 = 1;
LABEL_58:
        if ( !v18 )
        {
          v27 = centity;
          goto LABEL_69;
        }
        clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
        if ( LocalClientGlobals->renderingThirdPerson || (Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum), IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState)) )
          IsThirdPersonMode = 1;
        if ( v20 || v21 )
        {
          if ( IsThirdPersonMode && clientNum == number )
            return;
          v26 = !v20;
          v27 = centity;
          if ( !v26 )
            CG_Event_PlayHandGrabSound(localClientNum, number, notify->noteName == scr_const.ladder_grab_left, centity->surfaceType);
LABEL_69:
          if ( v21 )
          {
            v28 = notify->noteName;
            v29 = v28 == scr_const.ladder_grab_left || v28 == scr_const.footstep_left_small || v28 == scr_const.footstep_left_large;
            v30 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) && number == LocalClientGlobals->predictedPlayerState.clientNum;
            v31 = 1;
            if ( v38 )
            {
              v31 = 1;
              if ( !v30 )
                v31 = 5;
            }
            LOBYTE(fmt) = v31;
            CG_Entity_AddFootstepEvent(localClientNum, v29, v27, NULL, fmt, SCRIPTABLE_FOOTSTEP_NONE);
            v32 = eventTracking;
            eventTracking->playedFootstep = 1;
LABEL_85:
            if ( !v32->playedEquipment && Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_playerMovementNotetrackSounds, "cg_playerMovementNotetrackSounds") )
            {
              v33 = notify->noteName;
              v34 = szMovementEventNames;
              v35 = 0;
              while ( v33 != **v34 )
              {
                ++v35;
                ++v34;
                if ( v35 >= 2 )
                  return;
              }
              LOBYTE(v16) = v33 != scr_const.mvmt_step_pre;
              CG_Event_PlayEquipmentSound(localClientNum, (const MovementLeadType_t)(v16 + 1), v27);
              eventTracking->playedEquipment = 1;
            }
            return;
          }
LABEL_84:
          v32 = eventTracking;
          goto LABEL_85;
        }
      }
      v27 = centity;
      goto LABEL_84;
    }
  }
}

/*
==============
CG_EntityMP_ResetDObjNoteTracks
==============
*/

void CG_EntityMP_ResetDObjNoteTracks(void)
{
  DObjResetClientNotifyList();
}

/*
==============
CG_EntityMP_ScriptMover
==============
*/
void CG_EntityMP_ScriptMover(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v4; 
  __int16 scriptMoverType; 
  const dvar_t *v6; 
  CgEntitySystem *EntitySystem; 
  signed __int32 v8; 
  DObj *v9; 
  __int64 v10; 
  const ScriptableDef *def; 
  unsigned int v12; 
  bool v13; 
  float v16; 
  bool IsNoDraw; 
  LerpEntityState *p_lerp; 
  unsigned int v22; 
  cg_t **v23; 
  connstate_t *i; 
  DObj *ClientDObj; 
  JammingType JammingType; 
  DObj *DObj_General; 
  const DObj *v28; 
  unsigned int v29; 
  float characterEVOffset; 
  unsigned int v36; 
  unsigned int v37; 
  const GfxBrushModel *BrushModel; 
  CG_PhysicsObject *v39; 
  __int64 entnum; 
  __int64 renderFlags; 
  float v42; 
  float v43; 
  unsigned int scriptableIndex; 
  int number; 
  vec3_t outOrigin; 
  vec3_t origin; 
  vec3_t v48; 
  vec3_t v49; 
  vec3_t v50; 
  vec3_t v51; 
  vec3_t v52; 
  vec3_t prevOrigin; 
  __int64 v54; 
  GfxSceneHudOutlineInfo v56; 
  shaderOverride_t v57; 
  GfxSceneHudOutlineInfo v58; 
  shaderOverride_t v59; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v61; 
  vec3_t outLightingOrigin; 

  v54 = -2i64;
  v4 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2319, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2320, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2321, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  scriptMoverType = cent->nextState.un.scriptMoverType;
  if ( (LOBYTE(cent->nextState.lerp.u.vehicle.bodyPitch) & 4) != 0 )
  {
    v6 = DCONST_DVARBOOL_bg_impulse_field_instrumentation_enabled;
    if ( !DCONST_DVARBOOL_bg_impulse_field_instrumentation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_impulse_field_instrumentation_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      LODWORD(entnum) = cent->nextState.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2334, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Entity %i is a scriptmover with an impulse field.", entnum) )
        __debugbreak();
    }
    if ( cent->nextState.weaponHandle.m_mapEntryId )
      goto LABEL_21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2338, ASSERT_TYPE_ASSERT, "(!s1->weaponHandle.IsNull())", (const char *)&queryFormat, "!s1->weaponHandle.IsNull()") )
      __debugbreak();
    if ( cent->nextState.weaponHandle.m_mapEntryId )
    {
LABEL_21:
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v4);
      if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2342, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
        __debugbreak();
      number = cent->nextState.number;
      if ( (((_BYTE)EntitySystem + 112) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &EntitySystem->m_impulseFieldEntityCount) )
        __debugbreak();
      v8 = _InterlockedExchangeAdd(&EntitySystem->m_impulseFieldEntityCount, 1u);
      if ( (unsigned int)v8 >= 0x18 )
      {
        LODWORD(renderFlags) = 24;
        LODWORD(entnum) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 571, ASSERT_TYPE_ASSERT, "(unsigned)( impulseFieldIndex ) < (unsigned)( ( 24 ) )", "impulseFieldIndex doesn't index MAX_IMPULSE_FIELD_ENTITIES\n\t%i not in [0, %i)", entnum, renderFlags) )
          __debugbreak();
      }
      EntitySystem->m_impulseFieldEntities[v8] = number;
    }
  }
  if ( scriptMoverType == 3 )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2353, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    R_AddTransformedReflectionProbeInstancesToScene(&outOrigin, &cent->pose.angles, cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    switch ( scriptMoverType )
    {
      case 5:
        CG_ClientWeapon_ProcessEntity((const LocalClientNum_t)v4, cent);
        CG_AnimTreeMP_SetDObjInfo((LocalClientNum_t)v4, cent->nextState.number, cent->nextState.eType, NULL);
        return;
      case 6:
        CG_EntityMP_Item((LocalClientNum_t)v4, cent);
        return;
      case 8:
        CG_EntityMP_Avatar((const LocalClientNum_t)v4, cent);
        return;
      case 9:
        CG_EntityMP_ScriptMover_CircleFX((LocalClientNum_t)v4, cent);
        return;
      case 4:
        CG_ClientArmsMP_UpdateDObj((const LocalClientNum_t)v4, cent);
        break;
    }
    CG_EntityMP_GetDObj_General((const LocalClientNum_t)v4, cent, NULL);
    if ( !ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v4, cent, &scriptableIndex) || CG_Entity_IsNoDraw((const LocalClientNum_t)v4, &cent->nextState, NULL) )
    {
      IsNoDraw = CG_Entity_IsNoDraw((const LocalClientNum_t)v4, &cent->nextState, NULL);
      p_lerp = &cent->nextState.lerp;
      if ( IsNoDraw )
      {
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 1u) )
          return;
        if ( (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x80000) == 0 )
        {
          v22 = 0;
          if ( SLODWORD(cl_maxLocalClients) <= 0 )
            return;
          v23 = cg_t::ms_cgArray;
          for ( i = &clientUIActives[0].connectionState; ; i += 110 )
          {
            if ( v22 >= 2 )
            {
              LODWORD(renderFlags) = 2;
              LODWORD(entnum) = v22;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", entnum, renderFlags) )
                __debugbreak();
            }
            if ( *i == CA_ACTIVE )
            {
              if ( v22 >= cg_t::ms_allocatedCount )
              {
                LODWORD(renderFlags) = cg_t::ms_allocatedCount;
                LODWORD(entnum) = v22;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", entnum, renderFlags) )
                  __debugbreak();
              }
              if ( !*v23 )
              {
                LODWORD(renderFlags) = v22;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", renderFlags) )
                  __debugbreak();
              }
              if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
              {
                LODWORD(renderFlags) = v22;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", renderFlags) )
                  __debugbreak();
              }
              if ( ((*v23)->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 && (*v23)->predictedPlayerState.linkEnt == cent->nextState.number )
                break;
            }
            ++v22;
            ++v23;
            if ( (int)v22 >= SLODWORD(cl_maxLocalClients) )
              return;
          }
        }
        CG_EntityMP_GetDObj_General((const LocalClientNum_t)v4, cent, NULL);
        ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v4);
        if ( ClientDObj )
        {
          if ( g_processEvents )
          {
            CG_AnimTreeMP_UpdateScriptModelAnim((LocalClientNum_t)v4, cent, ClientDObj);
            CG_EntityMP_ValidateDObj((const LocalClientNum_t)v4, cent);
          }
          else
          {
            CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate((LocalClientNum_t)v4, cent, ClientDObj);
          }
        }
      }
      else
      {
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&p_lerp->eFlags, (EntityStateFlagsMP)20) )
        {
          CG_GetPoseOrigin(&cent->pose, &v48);
          JammingType = BG_GetJammingType(&cent->nextState);
          CG_EntityMP_UpdateScramblerEffect((LocalClientNum_t)v4, cent->nextState.number, cent->nextState.otherEntityNum, &v48, JammingType);
          memset(&v48, 0, sizeof(v48));
        }
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&cent->nextState.lerp.eFlags, LEGACY_LADDER_CENTERLINE|LEGACY_MOUNT|0x10) )
        {
          CG_GetPoseOrigin(&cent->pose, &v49);
          CG_EntityMP_UpdatePortableRadarEffect((LocalClientNum_t)v4, cent->nextState.number, cent->nextState.otherEntityNum, &v49);
          memset(&v49, 0, sizeof(v49));
        }
        DObj_General = CG_EntityMP_GetDObj_General((const LocalClientNum_t)v4, cent, NULL);
        v28 = DObj_General;
        if ( DObj_General )
        {
          if ( g_processEvents )
          {
            CG_AnimTreeMP_UpdateScriptModelAnim((LocalClientNum_t)v4, cent, DObj_General);
            CG_EntityMP_ValidateDObj((const LocalClientNum_t)v4, cent);
          }
          else
          {
            CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate((LocalClientNum_t)v4, cent, DObj_General);
          }
          if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 8u) )
            AimTargetMP_ProcessEntity((const LocalClientNum_t)v4, cent);
          v29 = CG_EntityMP_ScriptMoverRenderFlags((const LocalClientNum_t)v4, cent);
          _RAX = CG_EntityMP_ScriptMover_Outline(&v61, (const LocalClientNum_t)v4, cent);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups [rbp+160h+var_180], ymm0
          }
          characterEVOffset = _RAX->characterEVOffset;
          CG_GetPoseOrigin(&cent->pose, &v50);
          XAnimBonePhysicsSetDObjMatrix(v28, &v50, &cent->pose.angles);
          CG_Entity_CalcLightingOrigin(&cent->pose, v28, &outLightingOrigin);
          CG_Train_PreRender((const LocalClientNum_t)v4, cent);
          __asm
          {
            vmovups ymm0, [rbp+160h+var_180]
            vmovups [rbp+160h+var_100], ymm0
          }
          v58.characterEVOffset = characterEVOffset;
          __asm
          {
            vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_7.scrollRateX
            vmovups [rbp+160h+var_D0], ymm0
          }
          v59.atlasTime = NULL_SHADER_OVERRIDE_7.atlasTime;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vmovss  [rsp+260h+var_220], xmm0
          }
          CG_Entity_AddDObjToScene((const LocalClientNum_t)v4, v28, &cent->pose, cent->nextState.number, v29, &v59, &v58, &outLightingOrigin, v43, 0);
          memset(&v50, 0, sizeof(v50));
        }
        else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) )
        {
          if ( cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2542, ASSERT_TYPE_ASSERT, "(!s1->staticState.mover.u.scriptableIndex)", (const char *)&queryFormat, "!s1->staticState.mover.u.scriptableIndex") )
            __debugbreak();
          if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 8u) )
          {
            CG_GetPoseOrigin(&cent->pose, &v51);
            if ( PointFrustumCheck((const LocalClientNum_t)v4, &v51) )
              AimTargetMP_ProcessEntity((const LocalClientNum_t)v4, cent);
            memset(&v51, 0, sizeof(v51));
          }
          v36 = CG_EntityMP_ScriptMoverRenderFlags((const LocalClientNum_t)v4, cent);
          if ( !CG_EntityWorkers_TryAddBModelDrawRequest(cent->nextState.number, v36) )
          {
            CG_GetPrevPoseOrigin(&cent->pose, &prevOrigin);
            CG_GetPoseOrigin(&cent->pose, &v52);
            v37 = cent->nextState.number;
            BrushModel = R_GetBrushModel(cent->nextState.index.brushModel);
            R_AddBrushModelToSceneFromAngles(BrushModel, &v52, &cent->pose.angles, &prevOrigin, &cent->pose.prevAngles, v37, v36);
            memset(&v52, 0, sizeof(v52));
            memset(&prevOrigin, 0, sizeof(prevOrigin));
          }
          v39 = CG_PhysicsObject_Get(cent->nextState.number, (LocalClientNum_t)v4);
          if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2580, ASSERT_TYPE_ASSERT, "(physicsObject)", (const char *)&queryFormat, "physicsObject") )
            __debugbreak();
          if ( v39->physicsInstances[3 * (_DWORD)v4 + 2] == -1 && CG_Entity_ShouldCreatePhysicsOnInit((LocalClientNum_t)v4, cent->nextState.number) )
            CG_Entity_CreatePhysics((LocalClientNum_t)v4, cent->nextState.number, 1);
          if ( !CG_Entity_HasCloth((const LocalClientNum_t)v4, cent->nextState.number) && CG_Entity_ShouldCreateClothOnInit((const LocalClientNum_t)v4, cent->nextState.number) )
            CG_Entity_CreateCloth((const LocalClientNum_t)v4, cent->nextState.number);
        }
        LUIOnEntityElementSpawnerMP::UpdateFiltersForScriptMover((const LocalClientNum_t)v4, cent->nextState.number);
      }
    }
    else
    {
      ScriptableCl_UpdatePosition((const LocalClientNum_t)v4, scriptableIndex, cent);
      ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v4, scriptableIndex, cent->nextState.number);
      v9 = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v4);
      if ( v9 )
      {
        v10 = scriptableIndex;
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)v10 >= g_scriptableWorldCounts.totalInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(renderFlags) = g_scriptableWorldCounts.totalInstanceCount;
          LODWORD(entnum) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", entnum, renderFlags) )
            __debugbreak();
        }
        if ( (unsigned int)v4 >= 2 )
        {
          LODWORD(renderFlags) = 2;
          LODWORD(entnum) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", entnum, renderFlags) )
            __debugbreak();
        }
        if ( !g_scriptableCl_instanceContexts[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
          __debugbreak();
        def = g_scriptableCl_instanceContexts[v4][v10].commonContext.def;
        if ( !def )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2409, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 308, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
        }
        if ( (def->flags & 0x20) == 0 )
        {
          if ( g_processEvents )
            CG_AnimTreeMP_UpdateScriptModelAnim((LocalClientNum_t)v4, cent, v9);
          else
            CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate((LocalClientNum_t)v4, cent, v9);
        }
        v12 = CG_EntityMP_ScriptMoverRenderFlags((const LocalClientNum_t)v4, cent);
        v13 = (cent->nextState.staticState.general.xmodel & 0x10) == 0;
        cent->pose.scriptMover.doVehicleControllers = (cent->nextState.staticState.general.xmodel & 0x10) != 0;
        if ( !v13 )
          v12 |= 0x1000u;
        if ( !ScriptableCl_HasShadow(scriptableIndex) )
          v12 |= 0x20u;
        _RAX = CG_EntityMP_ScriptMover_Outline(&result, (const LocalClientNum_t)v4, cent);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups [rbp+160h+var_180], ymm0
        }
        v16 = _RAX->characterEVOffset;
        CG_GetPoseOrigin(&cent->pose, &origin);
        XAnimBonePhysicsSetDObjMatrix(v9, &origin, &cent->pose.angles);
        CG_Entity_CalcLightingOrigin(&cent->pose, v9, &outLightingOrigin);
        CG_Train_PreRender((const LocalClientNum_t)v4, cent);
        __asm
        {
          vmovups ymm0, [rbp+160h+var_180]
          vmovups [rbp+160h+var_160], ymm0
        }
        v56.characterEVOffset = v16;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_7.scrollRateX
          vmovups [rbp+160h+var_130], ymm0
        }
        v57.atlasTime = NULL_SHADER_OVERRIDE_7.atlasTime;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+260h+var_220], xmm0
        }
        CG_Entity_AddDObjToScene((const LocalClientNum_t)v4, v9, &cent->pose, cent->nextState.number, v12, &v57, &v56, &outLightingOrigin, v42, 0);
        memset(&origin, 0, sizeof(origin));
      }
    }
  }
}

/*
==============
CG_EntityMP_ScriptMoverRenderFlags
==============
*/
unsigned int CG_EntityMP_ScriptMoverRenderFlags(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  const cg_t *LocalClientGlobals; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2162, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2163, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2164, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return CG_EntityMP_GetRenderFlagForRefEntity(localClientNum, LocalClientGlobals, cent, &cent->nextState.lerp.eFlags) | 0x200;
}

/*
==============
CG_EntityMP_ScriptMover_CircleFX
==============
*/
void CG_EntityMP_ScriptMover_CircleFX(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v7; 
  const XModel *XModelFromIndex; 
  const DObj *DObj; 
  unsigned int v15; 
  int v18; 
  CgDynamicMedia *CgDynamicMedia; 
  const dvar_t *v20; 
  int FxId; 
  FXRegisteredDef *Fx; 
  cg_t *LocalClientGlobals; 
  const snapshot_t *snap; 
  int serverTime; 
  const dvar_t *v26; 
  char v32; 
  unsigned int v43; 
  __int64 v44; 
  ParticleSystem *v45; 
  double v50; 
  float v51; 
  double v52; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  unsigned int outIndex; 
  vec3_t outOrigin; 
  __int64 v57; 
  GfxSceneHudOutlineInfo v58; 
  shaderOverride_t v59; 
  float4 scaleModMin; 
  vec3_t outLightingOrigin; 
  DObjModel dobjModel; 
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  v57 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v7 = localClientNum;
  _RSI = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( _RSI->m_brCircleEnt != cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2201, ASSERT_TYPE_ASSERT, "(cgameGlob->m_brCircleEnt == cent)", (const char *)&queryFormat, "cgameGlob->m_brCircleEnt == cent") )
    __debugbreak();
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1A8h+outOrigin+8]
    vmovss  dword ptr [rsi+0CA368h], xmm0
  }
  _RDI = DCONST_DVARFLT_cg_brCircleZ;
  if ( !DCONST_DVARFLT_cg_brCircleZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleZ") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rsp+1A8h+outOrigin+8], xmm0
  }
  CG_SetPoseOrigin(&cent->pose, &outOrigin);
  NetConstStrings_GetIndexPlusOneFromName(NETCONSTSTRINGTYPE_XMODEL, "tag_origin", &outIndex);
  XModelFromIndex = CG_EntityMP_GetXModelFromIndex((const LocalClientNum_t)v7, outIndex);
  DObjInitModel(XModelFromIndex, (scr_string_t)0, 1, 0, NULL, &dobjModel);
  DObj = CG_EntityMP_GetDObj((LocalClientNum_t)v7, cent->nextState.number, cent->nextState.eType, &dobjModel, 1u, NULL);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( DObj )
  {
    v15 = CG_EntityMP_ScriptMoverRenderFlags((const LocalClientNum_t)v7, cent) | 0x20;
    CG_Entity_CalcLightingOrigin(&cent->pose, DObj, &outLightingOrigin);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_8.color
      vmovups [rsp+1A8h+var_128], ymm0
    }
    v58.characterEVOffset = NULL_HUDOUTLINE_INFO_8.characterEVOffset;
    __asm
    {
      vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_7.scrollRateX
      vmovups [rsp+1A8h+var_F8], ymm0
    }
    v59.atlasTime = NULL_SHADER_OVERRIDE_7.atlasTime;
    __asm { vmovss  dword ptr [rsp+1A8h+var_168], xmm7 }
    CG_Entity_AddDObjToScene((const LocalClientNum_t)v7, DObj, &cent->pose, cent->nextState.number, v15, &v59, &v58, &outLightingOrigin, v51, 0);
  }
  if ( !cent->pose.coverWall.coverGrid[1] )
  {
    inOutIndex[0] = -2;
    DObjGetBoneIndexInternal_71(DObj, scr_const.tag_origin, inOutIndex, &modelIndex);
    cent->pose.player.control = NULL;
    v18 = inOutIndex[0];
    CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
    v20 = DCONST_DVARSTR_cg_brCircleFX;
    if ( !DCONST_DVARSTR_cg_brCircleFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    FxId = CgDynamicMedia::GetFxId(CgDynamicMedia, v20->current.string);
    Fx = CgDynamicMedia::GetFx(CgDynamicMedia, FxId);
    if ( !Fx->m_particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2184, ASSERT_TYPE_ASSERT, "(fxDef->IsValid())", (const char *)&queryFormat, "fxDef->IsValid()") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    cent->pose.coverWall.coverGrid[1] = FX_PlayBoltedEffect((LocalClientNum_t)v7, Fx, LocalClientGlobals->time, cent->nextState.number, v18, 0);
    if ( !_RSI->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2234, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
      __debugbreak();
    snap = _RSI->snap;
    if ( snap )
      serverTime = snap->serverTime;
    else
      serverTime = _RSI->predictedPlayerState.serverTime;
    _RSI->m_brCircleStartTime = serverTime;
  }
  v26 = DCONST_DVARFLT_cg_brCircleBaseRadius;
  if ( !DCONST_DVARFLT_cg_brCircleBaseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleBaseRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0CA368h]
    vdivss  xmm2, xmm0, dword ptr [rdi+28h]
    vshufps xmm2, xmm2, xmm2, 0
    vmovups xmmword ptr [rsp+1A8h+scaleModMin.v], xmm2
  }
  FX_ApplyScaleModifier((LocalClientNum_t)v7, cent->pose.fx.particleSystem, &scaleModMin, &scaleModMin);
  if ( cent->pose.coverWall.coverGrid[1] )
  {
    _RDI = DCONST_DVARFLT_cg_brCircleEmissionCurveMaxRadius;
    if ( !DCONST_DVARFLT_cg_brCircleEmissionCurveMaxRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleEmissionCurveMaxRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+28h]
      vcomiss xmm6, cs:__real@3a83126f
    }
    if ( v32 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+1A8h+var_168], xmm0
        vmovsd  xmm1, cs:__real@3f50624de0000000
        vmovsd  [rsp+1A8h+var_170], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2246, ASSERT_TYPE_ASSERT, "( 0.001f ) <= ( emissionCurveMaxRadius )", "%s <= %s\n\t%g, %g", "EQUAL_EPSILON", "emissionCurveMaxRadius", v50, v52) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0CA368h]
      vdivss  xmm0, xmm0, xmm6; val
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
    _RDI = DCONST_DVARFLT_cg_brCircleEmissionCurveDebugValue;
    if ( !DCONST_DVARFLT_cg_brCircleEmissionCurveDebugValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleEmissionCurveDebugValue") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+28h]
      vcmpless xmm0, xmm7, xmm1
      vblendvps xmm0, xmm6, xmm1, xmm0
      vmovss  [rsp+1A8h+modelIndex], xmm0
    }
    v43 = 0;
    if ( g_particleSystemsGeneration[4096 * v7 + (cent->pose.coverWall.coverGrid[1] & 0xFFF)].__all32 == cent->pose.coverWall.coverGrid[1] )
      v43 = cent->pose.coverWall.coverGrid[1] & 0xFFF;
    v44 = (v7 << 12) + v43;
    v45 = NULL;
    if ( g_particleSystems[0][v44] >= (ParticleSystem *)0x1000 )
      v45 = g_particleSystems[0][v44];
    if ( v45 )
    {
      __asm { vmovss  xmm1, [rsp+1A8h+modelIndex]; value }
      ParticleSystem::SetEmissionCurveValue(v45, *(const float *)&_XMM1);
    }
    else
    {
      cent->pose.coverWall.coverGrid[1] = 0;
    }
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_EntityMP_ScriptMover_Outline
==============
*/
GfxSceneHudOutlineInfo *CG_EntityMP_ScriptMover_Outline(GfxSceneHudOutlineInfo *result, const LocalClientNum_t localClientNum, centity_t *cent)
{
  const cg_t *LocalClientGlobals; 
  CgGlobalsMP *v8; 
  HudData v9; 
  unsigned int HudOutlineTeamColor; 
  bool v15; 
  float fmt; 
  GfxSceneHudOutlineInfo resulta; 

  _RBX = result;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2108, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2109, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2110, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_8.color
    vmovups ymmword ptr [rbx], ymm0
  }
  _RBX->characterEVOffset = NULL_HUDOUTLINE_INFO_8.characterEVOffset;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v8 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( v8->m_isMLGSpectator && (v9.0 = ($D69577AC11C1636F320D0973E2FBC7CA)cent->nextState.hudData, (*(_BYTE *)&v9.0 & 0x40) != 0) )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rsp+88h+fmt], xmm0
    }
    HudOutlineTeamColor = CG_Utils_GetHudOutlineTeamColor(v8, localClientNum, (const team_t)((v9.data >> 7) & 3), 0, fmt);
    _RSI = DVARFLT_r_hudOutlineWidth;
    _RBX->color = HudOutlineTeamColor;
    _RBX->forSpectator = 1;
    *(_WORD *)&_RBX->drawOccludedPixels = 257;
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vcvttss2si eax, dword ptr [rsi+28h] }
    _RBX->lineWidth = _EAX;
    _RBX->renderMode = 0;
    _RBX->fill = 1;
  }
  else
  {
    _RAX = CG_Entity_GetHudOutlineInfo(&resulta, LocalClientGlobals, cent);
    v15 = (cent->flags & 1) == 0;
    __asm { vmovups ymm0, ymmword ptr [rax] }
    *(float *)&_RAX = _RAX->characterEVOffset;
    __asm { vmovups ymmword ptr [rbx], ymm0 }
    LODWORD(_RBX->characterEVOffset) = (_DWORD)_RAX;
    if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2077, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2078, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    if ( (LOBYTE(cent->nextState.lerp.u.vehicle.bodyPitch) & 8) != 0 && cent->nextState.otherEntityNum != 2047 && !CgEntitySystemMP::CG_EntityMP_IsOnSameTeam(localClientNum, cent) && CG_Utils_ShouldHighlightScriptMovers(localClientNum) && CG_Utils_ShouldHighlightInScope(localClientNum) && !CG_Utils_StencilScriptControlled(localClientNum) )
    {
      _RBX->scopeStencil = 1.0;
      if ( CG_Utils_PlayerLockedOn(localClientNum, cent) )
        _RBX->useAlternateColor = 1;
    }
  }
  if ( cent->nextState.eType == ET_SCRIPTMOVER )
    _RBX->mapEntLookup = cent->nextState.lerp.u.agentCorpse.attachModels[6].m_data;
  else
    _RBX->mapEntLookup = 0;
  return _RBX;
}

/*
==============
CG_EntityMP_ShouldDelayEntityPacketPostPS
==============
*/
int CG_EntityMP_ShouldDelayEntityPacketPostPS(LocalClientNum_t localClientNum, const cg_t *cgameGlob, const centity_t *cent)
{
  int viewlocked_entNum; 

  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3244, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3245, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3247, ASSERT_TYPE_SANITY, "( cgameGlob )", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( cent->nextState.eType != ET_TURRET )
    goto LABEL_23;
  if ( BG_IsTurretActive(&cgameGlob->predictedPlayerState) )
    viewlocked_entNum = cgameGlob->predictedPlayerState.viewlocked_entNum;
  else
    viewlocked_entNum = 2047;
  if ( cent->nextState.number == viewlocked_entNum )
    return 4;
  if ( cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId == cgameGlob->predictedPlayerState.clientNum )
    return 5;
LABEL_23:
  if ( CG_Vehicle_ShouldDelayPacketEntity(localClientNum, cgameGlob, cent) )
    return 6;
  return CG_GameInterface_EntityMP_ShouldDelayEntityPacketPostPS(localClientNum, cent, 0);
}

/*
==============
CG_EntityMP_ShouldLinkPacketEntity
==============
*/
_BOOL8 CG_EntityMP_ShouldLinkPacketEntity(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  entityState_t *p_nextState; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  CgGlobalsMP *LocalClientGlobals; 
  const characterInfo_t *v8; 
  const characterInfo_t *v9; 
  unsigned int Animset; 
  unsigned int Anim; 
  SuitAnimType SuitAnimIndex; 
  int LegsAnimation; 
  __int64 v15; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2961, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &cent->nextState;
  if ( !BG_IsCharacterEntity(&cent->nextState) )
    return 1i64;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( cent->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v15) = cent->nextState.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2966, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v15, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = cent->nextState.clientNum;
  LocalClientGlobals = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v8 = LocalClientGlobals->IsMP(LocalClientGlobals) ? CgGlobalsMP::GetCharacterInfo(LocalClientGlobals, clientNum) : CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, clientNum);
  v9 = v8;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2970, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( v9->usingAnimState )
    return 1i64;
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(p_nextState);
    Anim = BG_PlayerASM_GetAnim(p_nextState, MOVEMENT);
    return BG_PlayerASM_IsRootMotionAlias(Anim, Animset) == 0;
  }
  else
  {
    SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(p_nextState);
    LegsAnimation = BG_AnimationMP_GetLegsAnimation(p_nextState);
    return BG_IsRootMotionAnim(LegsAnimation, SuitAnimIndex) == 0;
  }
}

/*
==============
CG_EntityMP_SoundBlend
==============
*/
void CG_EntityMP_SoundBlend(LocalClientNum_t localClientNum, centity_t *cent)
{
  unsigned __int16 torsoPitchPacked; 
  const char *SoundAliasNameFromIndex; 
  const char *v9; 
  char v10; 
  char v11; 
  SndAliasList *Alias; 
  SndAliasList *v20; 
  float volumeScale; 
  float v26; 
  vec3_t outOrigin; 
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = cent;
  if ( cent->nextState.lerp.u.anonymous.data[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3863, ASSERT_TYPE_ASSERT, "(ns->lerp.u.sound.subType == SNDENT_SUBTYPE_BLEND)", (const char *)&queryFormat, "ns->lerp.u.sound.subType == SNDENT_SUBTYPE_BLEND") )
    __debugbreak();
  torsoPitchPacked = _RDI->nextState.lerp.u.player.torsoPitchPacked;
  if ( torsoPitchPacked && _RDI->nextState.lerp.u.actor.lookAtEntityNum )
  {
    SoundAliasNameFromIndex = CgSoundSystemMP::GetSoundAliasNameFromIndex(torsoPitchPacked);
    if ( !SoundAliasNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3871, ASSERT_TYPE_ASSERT, "(aliasName0)", (const char *)&queryFormat, "aliasName0") )
      __debugbreak();
    CG_GetPoseOrigin(&_RDI->pose, &outOrigin);
    if ( CgSoundSystemMP::ShouldPlaySoundOnLocalClient(localClientNum, _RDI->nextState.number, &outOrigin, SoundAliasNameFromIndex) )
    {
      v9 = CgSoundSystemMP::GetSoundAliasNameFromIndex(_RDI->nextState.lerp.u.player.waistPitchPacked);
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3883, ASSERT_TYPE_ASSERT, "(aliasName1)", (const char *)&queryFormat, "aliasName1") )
        __debugbreak();
      CG_GetLocalClientGlobals(localClientNum);
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+174h]
        vmovss  xmm0, dword ptr [rdi+1F0h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, dword ptr [rax+65E0h]
        vaddss  xmm7, xmm2, xmm3
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm6, cs:__real@3f800000
        vcomiss xmm7, xmm0
      }
      if ( v10 )
        goto LABEL_26;
      __asm { vcomiss xmm7, xmm6 }
      if ( !(v10 | v11) )
      {
LABEL_26:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3888, ASSERT_TYPE_ASSERT, "((lerp >= 0.0f) && (lerp <= 1.0f))", (const char *)&queryFormat, "(lerp >= 0.0f) && (lerp <= 1.0f)") )
          __debugbreak();
      }
      Alias = SND_FindAlias(SoundAliasNameFromIndex);
      v20 = SND_FindAlias(v9);
      if ( Alias && v20 )
      {
        if ( Alias->head->assetId == v20->head->assetId )
        {
          __asm
          {
            vmovss  [rsp+98h+var_68], xmm6
            vmovss  [rsp+98h+volumeScale], xmm6
            vmovaps xmm2, xmm7; lerp
          }
          SND_PlayBlendedSoundAlias(Alias, v20, *(const float *)&_XMM2, localClientNum, _RDI->nextState.number, volumeScale, v26, &outOrigin, 0, SASYS_CGAME);
        }
        else
        {
          Com_Printf(9, "%s and %s are not valid blendable aliases.", SoundAliasNameFromIndex, v9);
        }
      }
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  _R11 = &v29;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
  }
}

/*
==============
CG_EntityMP_StartFx
==============
*/
void CG_EntityMP_StartFx(LocalClientNum_t localClientNum, int entnum, centity_t *cent, int startAtTime, int triggerTime)
{
  int moverFlags; 
  CgDynamicMedia *CgDynamicMedia; 
  FXRegisteredDef *Fx; 
  vec3_t outOrigin; 
  __int64 v13; 
  tmat33_t<vec3_t> axis; 

  v13 = -2i64;
  AnglesToAxis(&cent->pose.angles, &axis);
  moverFlags = cent->nextState.staticState.mover.moverFlags;
  CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
  Fx = CgDynamicMedia::GetFx(CgDynamicMedia, moverFlags);
  if ( !Fx->m_particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3966, ASSERT_TYPE_ASSERT, "(fxDef->IsValid())", (const char *)&queryFormat, "fxDef->IsValid()") )
    __debugbreak();
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  FX_SpawnOrientedEffectForCEntity(localClientNum, Fx, startAtTime, &outOrigin, &axis, entnum, triggerTime, cent, MARK_MATERIAL_OVERRIDE_NONE_4);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_EntityMP_Turret
==============
*/
void CG_EntityMP_Turret(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v6; 
  entityState_t *p_nextState; 
  DObj *DObj_General; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForEntity; 
  bool v13; 
  cg_t *v14; 
  team_t Team; 
  bool v23; 
  bool useAlternateColor; 
  CgCompassSystemMP *CompassSystemMP; 
  float fmt; 
  float fmta; 
  float goalTime; 
  float v35; 
  float notifyType; 
  unsigned int scriptableIndex; 
  unsigned int renderFlags; 
  vec3_t outOrigin; 
  const WeaponDef *v40; 
  GfxSceneHudOutlineInfo v41; 
  __int64 v42; 
  GfxSceneHudOutlineInfo result; 
  vec3_t v44; 
  shaderOverride_t turretAnimIndexArrayOut; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  v42 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v6 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1593, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) != 0 )
  {
    p_nextState = &cent->nextState;
    if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1598, ASSERT_TYPE_ASSERT, "(ns)", (const char *)&queryFormat, "ns") )
      __debugbreak();
    DObj_General = CG_EntityMP_GetDObj_General((const LocalClientNum_t)v6, cent, NULL);
    if ( DObj_General && !CG_Entity_IsNoDraw((const LocalClientNum_t)v6, &cent->nextState, NULL) )
    {
      Sys_ProfBeginNamedEvent(0xFFFF0000, "ProcessEntity Turret");
      if ( !DObjGetTree(DObj_General) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1126, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ))", (const char *)&queryFormat, "DObjGetTree( obj )") )
        __debugbreak();
      CG_Entity_TurretPreControllers((LocalClientNum_t)v6, DObj_General, cent);
      cent->pose.turret.worldSpaceTransform = 0;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
      if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v6], &cent->nextState);
      v40 = BG_WeaponDef(WeaponForEntity, 0);
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vxorps  xmm7, xmm7, xmm7
      }
      if ( DObjGetTree(DObj_General) )
      {
        v13 = BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == p_nextState->number;
        if ( v40->autoAdjust )
        {
          BG_TurretAnim_GetAnimIndices(DObj_General, WeaponForEntity, (int *)&turretAnimIndexArrayOut);
          if ( LODWORD(turretAnimIndexArrayOut.tilingY) != -1 )
          {
            __asm
            {
              vmovss  dword ptr [rsp+180h+var_150], xmm6
              vmovss  [rsp+180h+goalTime], xmm7
              vmovss  dword ptr [rsp+180h+fmt], xmm6
            }
            XAnimSetGoalWeight(DObj_General, 0, XANIM_SUBTREE_DEFAULT, LODWORD(turretAnimIndexArrayOut.tilingY), fmt, goalTime, v35, (scr_string_t)0, 0, 0, LINEAR, NULL);
            CG_EntityMP_TurretXAnimNodeSetup((LocalClientNum_t)v6, DObj_General, cent, v13);
          }
        }
      }
      CG_Turret_UpdateBarrelSpinSound((LocalClientNum_t)v6, cent);
      CG_Turret_UpdateBarrelSpinRumble((LocalClientNum_t)v6, cent);
      CG_Turret_UpdateHeat((LocalClientNum_t)v6, cent);
      CG_Turret_UpdateMotionSounds((LocalClientNum_t)v6, cent);
      CG_Turret_UpdateCamoAndStickers((const LocalClientNum_t)v6, cent);
      v14 = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1622, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( !CG_PlayerUsingScopedTurret((LocalClientNum_t)v6) || v14->renderingThirdPerson || v14->predictedPlayerState.viewlocked_entNum != p_nextState->number )
      {
        if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v6, cent, &scriptableIndex) )
        {
          ScriptableCl_UpdatePosition((const LocalClientNum_t)v6, scriptableIndex, cent);
          ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v6, scriptableIndex, p_nextState->number);
        }
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        XAnimBonePhysicsSetDObjMatrix(DObj_General, &outOrigin, &cent->pose.angles);
        __asm
        {
          vmovss  xmm0, cs:__real@bf800000
          vmovss  dword ptr [rsp+180h+fmt], xmm0
        }
        Turret_PlaceSentry_Client((const LocalClientNum_t)v6, &cent->nextState, &outOrigin, &cent->pose.angles, fmta);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+180h+outOrigin]
          vmovss  [rbp+80h+var_A0], xmm0
          vmovss  xmm1, dword ptr [rsp+180h+outOrigin+4]
          vmovss  [rbp+80h+var_9C], xmm1
          vmovss  xmm0, dword ptr [rsp+180h+outOrigin+8]
          vaddss  xmm2, xmm0, cs:__real@42000000
          vmovss  [rbp+80h+var_98], xmm2
        }
        CG_SetPoseOrigin(&cent->pose, &outOrigin);
        renderFlags = CG_EntityMP_GetRenderFlagForRefEntity((LocalClientNum_t)v6, v14, cent, &cent->nextState.lerp.eFlags) | 0x1000;
        _RAX = CG_Entity_GetHudOutlineInfo(&result, v14, cent);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+80h+turretAnimIndexArrayOut], ymm0
          vmovups [rbp+80h+var_100], ymm0
        }
        *(float *)&v40 = _RAX->characterEVOffset;
        Team = CgEntitySystemMP::CG_EntityMP_GetTeam((const LocalClientNum_t)v6, cent);
        if ( !CgEntitySystemMP::CG_EntityMP_IsOnSameTeam((const LocalClientNum_t)v6, cent) && CG_Utils_ShouldHighlightTurrets((const LocalClientNum_t)v6) && CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)v6) && !CG_Utils_StencilScriptControlled((const LocalClientNum_t)v6) )
        {
          __asm { vmovss  dword ptr [rbp+80h+var_100+4], xmm6 }
          v23 = CG_Utils_PlayerLockedOn((const LocalClientNum_t)v6, cent);
          useAlternateColor = v41.useAlternateColor;
          if ( v23 )
            useAlternateColor = 1;
          v41.useAlternateColor = useAlternateColor;
          __asm
          {
            vmovups ymm0, [rbp+80h+var_100]
            vmovups ymmword ptr [rbp+80h+turretAnimIndexArrayOut], ymm0
          }
        }
        CG_Entity_DepthSortWorldTurretWithViewarms(v14, cent, &renderFlags);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+80h+turretAnimIndexArrayOut]
          vmovups [rbp+80h+var_100], ymm0
        }
        LODWORD(v41.characterEVOffset) = (_DWORD)v40;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_7.scrollRateX
          vmovups ymmword ptr [rbp+80h+turretAnimIndexArrayOut], ymm0
        }
        turretAnimIndexArrayOut.atlasTime = NULL_SHADER_OVERRIDE_7.atlasTime;
        __asm { vmovss  [rsp+180h+notifyType], xmm7 }
        CG_Entity_AddDObjToScene((const LocalClientNum_t)v6, DObj_General, &cent->pose, p_nextState->number, renderFlags, &turretAnimIndexArrayOut, &v41, &v44, notifyType, 0);
        CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)v6);
        CgCompassSystemMP::UpdateTurretInfo(CompassSystemMP, cent);
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 9u) || CG_LaserForceOnEnabled() )
          CG_LaserAdd((const LocalClientNum_t)v6, p_nextState->number, Team);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      Sys_ProfEndNamedEvent();
    }
  }
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_EntityMP_TurretBaseTraceDown
==============
*/
void CG_EntityMP_TurretBaseTraceDown(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent, vec3_t *outHitPos, vec3_t *outHitNormal)
{
  const XModel *Model; 
  const DObjAnimMat *BasePose; 
  scr_string_t BaseTagName; 
  const dvar_t *v49; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t out; 
  vec3_t end; 
  tmat43_t<vec3_t> axis; 
  trace_t results; 

  _RDI = outHitNormal;
  _RSI = outHitPos;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 815, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (!cent || cent->pose.eType != 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 816, ASSERT_TYPE_ASSERT, "(cent && cent->pose.eType == ET_TURRET)", (const char *)&queryFormat, "cent && cent->pose.eType == ET_TURRET") )
    __debugbreak();
  AnglesToAxis(&cent->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&cent->pose, &axis.m[3]);
  Model = DObjGetModel(obj, 0);
  BasePose = XModelGetBasePose(Model);
  BaseTagName = XAnimTurret_GetBaseTagName();
  if ( DObjGetBoneIndexInternal_71(obj, BaseTagName, inOutIndex, &modelIndex) )
  {
    __asm
    {
      vmovss  xmm0, cs:downTraceLen
      vmovaps [rsp+1B0h+var_40], xmm6
      vmovaps [rsp+1B0h+var_50], xmm7
      vmovaps [rsp+1B0h+var_60], xmm8
      vmovaps [rsp+1B0h+var_70], xmm9
      vmovaps [rsp+1B0h+var_80], xmm11
      vaddss  xmm11, xmm0, cs:upTraceLen
    }
    MatrixTransformVector43(&BasePose[inOutIndex[0]].trans, &axis, &out);
    __asm
    {
      vmovss  xmm2, cs:upTraceLen
      vmulss  xmm1, xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm8, xmm1, dword ptr [rsp+1B0h+out]
      vmulss  xmm1, xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm6, xmm1, dword ptr [rsp+1B0h+out+4]
      vmulss  xmm1, xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm4, xmm1, dword ptr [rsp+1B0h+out+8]
      vxorps  xmm3, xmm11, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm1, xmm0, xmm8
      vaddss  xmm0, xmm2, xmm6
      vmovss  dword ptr [rsp+1B0h+end], xmm1
      vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rbp+0B0h+end+8], xmm2
      vmovss  dword ptr [rsp+1B0h+out], xmm8
      vmovss  dword ptr [rsp+1B0h+out+4], xmm6
      vmovss  dword ptr [rsp+1B0h+out+8], xmm4
      vmovss  dword ptr [rsp+1B0h+end+4], xmm0
    }
    CG_EntityWorkers_AcquireReadLock_Physics(BASE);
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &out, &end, &bounds_origin, cent->nextState.number, 0, 8389521, 0, NULL, All);
    CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
    __asm
    {
      vmulss  xmm1, xmm11, [rbp+0B0h+results.fraction]
      vxorps  xmm4, xmm1, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm5, xmm0, dword ptr [rsp+1B0h+out]
      vmulss  xmm0, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm3, xmm0, dword ptr [rsp+1B0h+out+4]
      vmulss  xmm0, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm2, xmm0, dword ptr [rsp+1B0h+out+8]
      vmovss  xmm0, dword ptr [rbp+0B0h+results.normal]
      vmovss  xmm1, dword ptr [rbp+0B0h+results.normal+4]
      vmovaps xmm11, [rsp+1B0h+var_80]
      vmovaps xmm9, [rsp+1B0h+var_70]
      vmovaps xmm8, [rsp+1B0h+var_60]
      vmovaps xmm7, [rsp+1B0h+var_50]
      vmovss  dword ptr [rsi+8], xmm2
      vmovss  dword ptr [rsi], xmm5
      vmovss  dword ptr [rsi+4], xmm3
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rbp+0B0h+results.normal+8]
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
    v49 = DCONST_DVARBOOL_deploy_debug;
    __asm
    {
      vmovss  dword ptr [rsp+1B0h+end], xmm5
      vmovss  dword ptr [rsp+1B0h+end+4], xmm3
      vmovss  dword ptr [rbp+0B0h+end+8], xmm2
    }
    if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v49);
    if ( v49->current.enabled )
    {
      __asm { vmovss  xmm1, cs:__real@3f800000; radius }
      CG_DebugSphere(&out, *(float *)&_XMM1, &colorYellow, 1, 0);
      __asm { vmovss  xmm1, cs:__real@3f800000; radius }
      CG_DebugSphere(_RSI, *(float *)&_XMM1, &colorRed, 0, 0);
      CG_DebugLine(&out, &end, &colorWhiteFaded, 1, 0);
      __asm
      {
        vmovss  xmm3, cs:__real@40a00000
        vmulss  xmm0, xmm3, dword ptr [rdi]
        vaddss  xmm1, xmm0, dword ptr [rsp+1B0h+end]
        vmulss  xmm0, xmm3, dword ptr [rdi+4]
        vmovss  dword ptr [rsp+1B0h+out], xmm1
        vaddss  xmm1, xmm0, dword ptr [rsp+1B0h+end+4]
        vmulss  xmm0, xmm3, dword ptr [rdi+8]
        vmovss  dword ptr [rsp+1B0h+out+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbp+0B0h+end+8]
        vmovss  dword ptr [rsp+1B0h+out+8], xmm1
      }
      CG_DebugLine(&out, &end, &colorCyan, 1, 0);
    }
    __asm { vmovaps xmm6, [rsp+1B0h+var_40] }
  }
  else
  {
    *(_QWORD *)_RSI->v = 0i64;
    _RSI->v[2] = 0.0;
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
}

/*
==============
CG_EntityMP_TurretFootTraceDown
==============
*/
bool CG_EntityMP_TurretFootTraceDown(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent, unsigned int legNdx, vec3_t *outHitPos, vec3_t *outHitNormal)
{
  const XModel *Model; 
  const DObjAnimMat *BasePose; 
  scr_string_t FootTagName; 
  int BoneIndexInternal_71; 
  char v43; 
  const dvar_t *v62; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t start; 
  vec3_t end; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  trace_t results; 

  _RDI = outHitPos;
  _RBX = outHitNormal;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 873, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (!cent || cent->pose.eType != 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 874, ASSERT_TYPE_ASSERT, "(cent && cent->pose.eType == ET_TURRET)", (const char *)&queryFormat, "cent && cent->pose.eType == ET_TURRET") )
    __debugbreak();
  AnglesToAxis(&cent->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&cent->pose, &axis.m[3]);
  Model = DObjGetModel(obj, 0);
  BasePose = XModelGetBasePose(Model);
  FootTagName = XAnimTurret_GetFootTagName(legNdx);
  BoneIndexInternal_71 = DObjGetBoneIndexInternal_71(obj, FootTagName, inOutIndex, &modelIndex);
  if ( BoneIndexInternal_71 )
  {
    __asm
    {
      vmovss  xmm0, cs:downTraceLen_0
      vmovaps [rsp+1C0h+var_50], xmm6
      vmovaps [rsp+1C0h+var_60], xmm7
      vmovaps [rsp+1C0h+var_70], xmm8
      vmovaps [rsp+1C0h+var_80], xmm9
      vaddss  xmm9, xmm0, cs:upTraceLen_0
    }
    MatrixTransformVector43(&BasePose[inOutIndex[0]].trans, &axis, &out);
    __asm
    {
      vmovss  xmm1, cs:upTraceLen_0
      vmulss  xmm0, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm2, xmm0, dword ptr [rbp+0C0h+out]
      vmulss  xmm0, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm5, xmm0, dword ptr [rbp+0C0h+out+4]
      vmulss  xmm0, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm4, xmm0, dword ptr [rbp+0C0h+out+8]
      vxorps  xmm3, xmm9, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rsp+1C0h+start], xmm2
      vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rsp+1C0h+end], xmm1
      vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rbp+0C0h+end+8], xmm2
      vmovss  dword ptr [rsp+1C0h+start+4], xmm5
      vmovss  dword ptr [rsp+1C0h+start+8], xmm4
      vmovss  dword ptr [rsp+1C0h+end+4], xmm0
    }
    CG_EntityWorkers_AcquireReadLock_Physics(BASE);
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &start, &end, &bounds_origin, cent->nextState.number, 0, 8389521, 0, NULL, All);
    CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
    __asm
    {
      vmovss  xmm0, [rbp+0C0h+results.fraction]
      vmovss  xmm6, cs:__real@3f800000
      vucomiss xmm0, xmm6
      vmovaps xmm8, [rsp+1C0h+var_70]
      vmovaps xmm7, [rsp+1C0h+var_60]
    }
    if ( v43 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C0h+out]
        vmovss  xmm1, dword ptr [rbp+0C0h+out+4]
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm0, dword ptr [rbp+0C0h+out+8]
        vmovss  dword ptr [rdi+8], xmm0
        vmovss  dword ptr [rdi+4], xmm1
        vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vmovss  dword ptr [rbx], xmm1
        vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vmovss  dword ptr [rbx+4], xmm0
        vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vmovss  dword ptr [rbx+8], xmm1
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, xmm9
        vaddss  xmm1, xmm0, cs:addedOffsetUp
        vxorps  xmm4, xmm1, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm2, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm3, xmm0, dword ptr [rsp+1C0h+start+4]
        vmulss  xmm0, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm5, xmm2, dword ptr [rsp+1C0h+start]
        vaddss  xmm2, xmm0, dword ptr [rsp+1C0h+start+8]
        vmovss  xmm0, dword ptr [rbp+0C0h+results.normal]
        vmovss  xmm1, dword ptr [rbp+0C0h+results.normal+4]
        vmovss  dword ptr [rdi+8], xmm2
        vmovss  dword ptr [rdi], xmm5
        vmovss  dword ptr [rdi+4], xmm3
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm0, dword ptr [rbp+0C0h+results.normal+8]
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  dword ptr [rsp+1C0h+end], xmm5
        vmovss  dword ptr [rsp+1C0h+end+4], xmm3
        vmovss  dword ptr [rbp+0C0h+end+8], xmm2
        vmovss  dword ptr [rbx+4], xmm1
      }
    }
    v62 = DCONST_DVARBOOL_deploy_debug;
    __asm { vmovaps xmm9, [rsp+1C0h+var_80] }
    if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v62);
    if ( v62->current.enabled )
    {
      __asm { vmovaps xmm1, xmm6; radius }
      CG_DebugSphere(&start, *(float *)&_XMM1, &colorYellow, 1, 0);
      __asm { vmovaps xmm1, xmm6; radius }
      CG_DebugSphere(outHitPos, *(float *)&_XMM1, &colorRed, 0, 0);
      CG_DebugLine(&start, &end, &colorWhiteFaded, 1, 0);
      __asm
      {
        vmovss  xmm3, cs:__real@40a00000
        vmulss  xmm0, xmm3, dword ptr [rbx]
        vaddss  xmm1, xmm0, dword ptr [rsp+1C0h+end]
        vmulss  xmm0, xmm3, dword ptr [rbx+4]
        vmovss  dword ptr [rsp+1C0h+start], xmm1
        vaddss  xmm1, xmm0, dword ptr [rsp+1C0h+end+4]
        vmulss  xmm0, xmm3, dword ptr [rbx+8]
        vmovss  dword ptr [rsp+1C0h+start+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbp+0C0h+end+8]
        vmovss  dword ptr [rsp+1C0h+start+8], xmm1
      }
      CG_DebugLine(&start, &end, &colorCyan, 1, 0);
    }
    __asm { vmovaps xmm6, [rsp+1C0h+var_50] }
    LOBYTE(BoneIndexInternal_71) = 1;
  }
  else
  {
    *(_QWORD *)outHitPos->v = 0i64;
    outHitPos->v[2] = 0.0;
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  return BoneIndexInternal_71;
}

/*
==============
CG_EntityMP_TurretPlayerHeightTraceDown
==============
*/
float CG_EntityMP_TurretPlayerHeightTraceDown(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent)
{
  const XModel *Model; 
  const DObjAnimMat *BasePose; 
  const dvar_t *v76; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t out; 
  vec3_t outOrigin; 
  vec3_t center; 
  vec3_t end; 
  tmat43_t<vec3_t> axis; 
  Bounds bounds; 
  trace_t results; 
  char v104; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
  }
  _RBX = cent;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 941, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (!_RBX || _RBX->pose.eType != 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 942, ASSERT_TYPE_ASSERT, "(cent && cent->pose.eType == ET_TURRET)", (const char *)&queryFormat, "cent && cent->pose.eType == ET_TURRET") )
    __debugbreak();
  DObjGetBounds(obj, &bounds);
  AnglesToAxis(&_RBX->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+200h+outOrigin]
    vmovss  xmm1, dword ptr [rsp+200h+outOrigin+4]
    vmovss  [rbp+100h+var_134], xmm0
    vmovss  xmm0, dword ptr [rbp+100h+outOrigin+8]
    vmovss  [rbp+100h+var_12C], xmm0
    vmovss  [rbp+100h+var_130], xmm1
  }
  if ( DObjGetBoneIndexInternal_71(obj, scr_const.tag_aim, inOutIndex, &modelIndex) )
  {
    Model = DObjGetModel(obj, 0);
    BasePose = XModelGetBasePose(Model);
    MatrixTransformVector43(&BasePose[inOutIndex[0]].trans, &axis, &out);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+200h+outOrigin+4]
      vmovss  xmm5, dword ptr [rsp+200h+out+8]
      vmovss  xmm10, dword ptr [rbp+100h+axis+20h]
      vmovss  xmm11, dword ptr [rbp+100h+axis+1Ch]
      vmovss  xmm12, dword ptr [rbp+100h+axis+18h]
      vmovss  xmm8, dword ptr [rbp+100h+outOrigin+8]
      vmovss  xmm13, dword ptr [rsp+200h+outOrigin]
      vmovss  xmm6, dword ptr [rsp+200h+out+4]
      vmovss  xmm7, dword ptr [rsp+200h+out]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+100h+bounds.halfSize+8]
      vmulss  xmm2, xmm0, cs:__real@3f400000
      vmovss  xmm12, dword ptr [rbp+100h+axis+18h]
      vmovss  xmm13, dword ptr [rsp+200h+outOrigin]
      vmovss  xmm11, dword ptr [rbp+100h+axis+1Ch]
      vmovss  xmm10, dword ptr [rbp+100h+axis+20h]
      vmovss  xmm4, dword ptr [rsp+200h+outOrigin+4]
      vmovss  xmm8, dword ptr [rbp+100h+outOrigin+8]
      vmulss  xmm1, xmm12, xmm2
      vaddss  xmm7, xmm1, xmm13
      vmulss  xmm1, xmm10, xmm2
      vmulss  xmm0, xmm11, xmm2
      vaddss  xmm5, xmm1, xmm8
      vaddss  xmm6, xmm0, xmm4
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+100h+bounds.halfSize]
    vmovss  xmm1, dword ptr [rbp+100h+bounds.halfSize+4]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm3, xmm0, xmm0
    vaddss  xmm0, xmm3, xmm2
    vsqrtss xmm3, xmm0, xmm0
    vmulss  xmm14, xmm3, cs:__real@3ecccccd
    vxorps  xmm2, xmm14, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm2, dword ptr [rbp+100h+axis]
    vaddss  xmm7, xmm1, xmm7
    vmulss  xmm1, xmm2, dword ptr [rbp+100h+axis+4]
    vaddss  xmm6, xmm1, xmm6
    vmulss  xmm1, xmm2, dword ptr [rbp+100h+axis+8]
    vaddss  xmm5, xmm1, xmm5
    vsubss  xmm0, xmm6, xmm4
    vmulss  xmm3, xmm0, xmm11
    vsubss  xmm0, xmm5, xmm8
    vsubss  xmm1, xmm7, xmm13
    vmulss  xmm2, xmm1, xmm12
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm8, xmm2, cs:DOWN_EXTRA_LEN
    vxorps  xmm3, xmm8, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm12, xmm3
    vaddss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm11, xmm3
    vaddss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rbp+100h+end], xmm1
    vmulss  xmm1, xmm10, xmm3
    vaddss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rbp+100h+end+8], xmm2
    vmovss  dword ptr [rsp+200h+out], xmm7
    vmovss  dword ptr [rsp+200h+out+4], xmm6
    vmovss  dword ptr [rsp+200h+out+8], xmm5
    vmovss  dword ptr [rbp+100h+end+4], xmm0
  }
  CG_EntityWorkers_AcquireReadLock_Physics(BASE);
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &out, &end, &bounds_origin, _RBX->nextState.number, 0, 8389521, 0, NULL, All);
  CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
  __asm
  {
    vmulss  xmm1, xmm8, [rbp+100h+results.fraction]
    vxorps  xmm3, xmm1, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm0, xmm2, dword ptr [rsp+200h+out]
    vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
  }
  v76 = DCONST_DVARBOOL_deploy_debug;
  __asm
  {
    vmovss  dword ptr [rbp+100h+center], xmm0
    vaddss  xmm0, xmm2, dword ptr [rsp+200h+out+4]
    vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmovss  dword ptr [rbp+100h+center+4], xmm0
    vaddss  xmm0, xmm2, dword ptr [rsp+200h+out+8]
    vmovss  dword ptr [rbp+100h+center+8], xmm0
  }
  if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v76);
  if ( v76->current.enabled )
  {
    __asm { vmovss  xmm2, dword ptr [rbx+4Ch]; yaw }
    CG_DebugBox(&outOrigin, &bounds, *(float *)&_XMM2, &colorYellow, 1, 0);
    __asm { vmovaps xmm1, xmm14; radius }
    CG_DebugCircle(&outOrigin, *(float *)&_XMM1, &identityMatrix33.m[2], &colorCyan, 0, 0);
    __asm { vmovss  xmm1, cs:__real@3fc00000; radius }
    CG_DebugSphere(&out, *(float *)&_XMM1, &colorYellow, 1, 0);
    __asm { vmovss  xmm1, cs:__real@3fc00000; radius }
    CG_DebugSphere(&center, *(float *)&_XMM1, &colorRed, 1, 0);
    CG_DebugLine(&out, &end, &colorWhite, 1, 0);
  }
  __asm { vmovss  xmm0, dword ptr [rbp+100h+center+8] }
  _R11 = &v104;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_EntityMP_TurretPreControllers
==============
*/
void CG_EntityMP_TurretPreControllers(LocalClientNum_t localClientIndex, DObj *obj, centity_t *cent, bool entitySnapshotReset)
{
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v10; 
  bool v11; 
  float fmt; 
  float goalTime; 
  float v16; 
  int turretAnimIndexArrayOut[4]; 
  unsigned int animIndex; 

  v5 = localClientIndex;
  if ( !DObjGetTree(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1126, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ))", (const char *)&queryFormat, "DObjGetTree( obj )") )
    __debugbreak();
  CG_Entity_TurretPreControllers((LocalClientNum_t)v5, obj, cent);
  cent->pose.turret.worldSpaceTransform = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v5], &cent->nextState);
  v10 = BG_WeaponDef(WeaponForEntity, 0);
  if ( DObjGetTree(obj) )
  {
    v11 = BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == cent->nextState.number;
    if ( v10->autoAdjust )
    {
      BG_TurretAnim_GetAnimIndices(obj, WeaponForEntity, turretAnimIndexArrayOut);
      if ( animIndex != -1 )
      {
        __asm
        {
          vmovss  xmm1, cs:__real@3f800000
          vmovss  [rsp+0C8h+var_98], xmm1
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+0C8h+goalTime], xmm0
          vmovss  dword ptr [rsp+0C8h+fmt], xmm1
        }
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, fmt, goalTime, v16, (scr_string_t)0, 0, 0, LINEAR, NULL);
        if ( !entitySnapshotReset )
          CG_EntityMP_TurretXAnimNodeSetup((LocalClientNum_t)v5, obj, cent, v11);
      }
    }
  }
}

/*
==============
CG_EntityMP_TurretXAnimNodeSetup
==============
*/
void CG_EntityMP_TurretXAnimNodeSetup(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent, bool isPlayerView)
{
  __int64 v6; 
  const dvar_t *v10; 
  __int64 v11; 
  unsigned int i; 
  char v30; 
  char v43; 
  CgWeaponMap *v44; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v46; 
  cg_t *LocalClientGlobals; 
  scr_string_t FootTagName; 
  scr_string_t v69; 
  scr_string_t v70; 
  scr_string_t BaseTagName; 
  vec3_t outHitPos; 
  vec3_t outOrigin; 
  vec3_t v3; 
  vec3_t v78; 
  vec3_t v79; 
  vec3_t value; 
  vec3_t v81; 
  vec3_t v82; 

  __asm { vmovaps [rsp+110h+var_40], xmm6 }
  v6 = localClientNum;
  _RDI = cent;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1042, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (!_RDI || _RDI->pose.eType != 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1043, ASSERT_TYPE_ASSERT, "(cent && cent->pose.eType == ET_TURRET)", (const char *)&queryFormat, "cent && cent->pose.eType == ET_TURRET") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_deploy_debug;
  if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = 0i64;
  if ( v10->current.enabled )
  {
    for ( i = 0; i < 3; ++i )
      CG_EntityMP_TurretFootTraceDown((LocalClientNum_t)v6, obj, _RDI, i, &outHitPos, &v3);
    CG_EntityMP_TurretBaseTraceDown((LocalClientNum_t)v6, obj, _RDI, &outHitPos, &v3);
    CG_EntityMP_TurretPlayerHeightTraceDown((LocalClientNum_t)v6, obj, _RDI);
  }
  CG_GetPoseOrigin(&_RDI->pose, &outHitPos);
  CG_GetPrevPoseOrigin(&_RDI->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+outOrigin]
    vsubss  xmm3, xmm0, dword ptr [rbp+57h+outHitPos]
    vmovss  xmm1, dword ptr [rbp+57h+outOrigin+4]
    vmovss  xmm0, dword ptr [rbp+57h+outOrigin+8]
    vsubss  xmm2, xmm1, dword ptr [rbp+57h+outHitPos+4]
    vsubss  xmm4, xmm0, dword ptr [rbp+57h+outHitPos+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm6, xmm3, xmm0
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+48h]
    vmovss  xmm1, dword ptr [rdi+4Ch]
    vmovss  dword ptr [rbp+57h+outHitPos], xmm0
    vmovss  xmm0, dword ptr [rdi+50h]
    vmovss  dword ptr [rbp+57h+outHitPos+8], xmm0
    vmovss  dword ptr [rbp+57h+outHitPos+4], xmm1
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 636, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+78h]
    vmovss  xmm1, dword ptr [rdi+7Ch]
    vmovss  dword ptr [rbp+57h+outOrigin], xmm0
    vmovss  xmm0, dword ptr [rdi+80h]
    vmovss  dword ptr [rbp+57h+outOrigin+8], xmm0
    vmovss  dword ptr [rbp+57h+outOrigin+4], xmm1
  }
  AnglesSubtract(&outHitPos, &outOrigin, &v3);
  __asm
  {
    vmovss  xmm0, cs:dword_147FAA064
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm6, xmm1
  }
  if ( !v30 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+v3]
    vmovss  xmm1, dword ptr [rbp+57h+v3+4]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rbp+57h+v3+8]
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, cs:dword_147FAA068
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm3, xmm4, xmm1
    vmulss  xmm0, xmm2, xmm2
    vcomiss xmm3, xmm0
  }
  if ( v30 )
    v43 = 0;
  else
LABEL_24:
    v43 = 1;
  if ( !isPlayerView && !_RDI->pose.turret.deployed || v43 )
  {
    _RDI->pose.turret.deployed = 1;
    __asm { vmovaps [rsp+110h+var_50], xmm7 }
    if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v44 = CgWeaponMap::ms_instance[v6];
    if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1077, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    WeaponForEntity = BG_GetWeaponForEntity(v44, &_RDI->nextState);
    v46 = BG_WeaponDef(WeaponForEntity, 0);
    if ( (!v46 || !v46->autoAdjust) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1080, ASSERT_TYPE_ASSERT, "(weapDef && weapDef->autoAdjust)", (const char *)&queryFormat, "weapDef && weapDef->autoAdjust") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1084, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    _RDI->pose.turret.deployedTime = LocalClientGlobals->time;
    __asm
    {
      vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmovsd  qword ptr [rbp+57h+var_A0], xmm0
    }
    v78.v[2] = vec3_origin.v[2];
    do
    {
      CG_EntityMP_TurretFootTraceDown((LocalClientNum_t)v6, obj, _RDI, v11, &value + v11, &outHitPos);
      __asm
      {
        vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm3, xmm0, dword ptr [rbp+57h+outHitPos]
        vmulss  xmm2, xmm1, dword ptr [rbp+57h+outHitPos+4]
        vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm1, xmm0, dword ptr [rbp+57h+outHitPos+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm6, xmm4, xmm1
      }
      _RAX = (int)v11;
      v11 = (unsigned int)(v11 + 1);
      __asm { vmovss  dword ptr [rbp+rax*4+57h+var_A0], xmm6 }
    }
    while ( (unsigned int)v11 < 3 );
    CG_EntityMP_TurretBaseTraceDown((LocalClientNum_t)v6, obj, _RDI, &v79, &outHitPos);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm3, xmm0, dword ptr [rbp+57h+outHitPos]
      vmulss  xmm2, xmm1, dword ptr [rbp+57h+outHitPos+4]
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm1, xmm0, dword ptr [rbp+57h+outHitPos+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm7, xmm4, xmm1
    }
    *(float *)&_XMM0 = CG_EntityMP_TurretPlayerHeightTraceDown((LocalClientNum_t)v6, obj, _RDI);
    __asm { vmovaps xmm6, xmm0 }
    XAnimSetIntGameParameterByName(obj, scr_const.firetime, _RDI->pose.turret.deployedTime);
    __asm { vmovaps xmm2, xmm6; value }
    XAnimSetFloatGameParameterByName(obj, scr_const.pivotheight, *(float *)&_XMM2);
    FootTagName = XAnimTurret_GetFootTagName(0);
    XAnimSetVec3GameParameterByName(obj, FootTagName, &value);
    v69 = XAnimTurret_GetFootTagName(1u);
    XAnimSetVec3GameParameterByName(obj, v69, &v81);
    v70 = XAnimTurret_GetFootTagName(2u);
    XAnimSetVec3GameParameterByName(obj, v70, &v82);
    BaseTagName = XAnimTurret_GetBaseTagName();
    XAnimSetVec3GameParameterByName(obj, BaseTagName, &v79);
    XAnimSetVec3GameParameterByName(obj, scr_const.turret_foot_normals, &v78);
    __asm { vmovaps xmm2, xmm7; value }
    XAnimSetFloatGameParameterByName(obj, scr_const.turret_base_normal, *(float *)&_XMM2);
    XAnimTreeUpdateParameters(obj);
    __asm { vmovaps xmm7, [rsp+110h+var_50] }
  }
  __asm { vmovaps xmm6, [rsp+110h+var_40] }
}

/*
==============
CG_EntityMP_UpdatePortableRadarEffect
==============
*/
void CG_EntityMP_UpdatePortableRadarEffect(LocalClientNum_t localClientNum, const int radarEntNum, const unsigned int ownerEntNum, const vec3_t *origin)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v10; 
  centity_t *Entity; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v13; 
  const dvar_t *v14; 
  CgCompassSystemMP *CompassSystemMP; 
  __int64 v16; 
  __int64 v17; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1249, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)radarEntNum >= 0x800 )
  {
    LODWORD(v17) = 2048;
    LODWORD(v16) = radarEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1250, ASSERT_TYPE_ASSERT, "(unsigned)( radarEntNum ) < (unsigned)( ( 2048 ) )", "radarEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( ownerEntNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v17) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v16) = ownerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1251, ASSERT_TYPE_ASSERT, "(unsigned)( ownerEntNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "ownerEntNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, ownerEntNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1257, ASSERT_TYPE_ASSERT, "(ownerInfo)", (const char *)&queryFormat, "ownerInfo") )
    __debugbreak();
  v10 = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1260, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  if ( v10->infoValid && CharacterInfo->infoValid )
  {
    Entity = CG_GetEntity(localClientNum, ownerEntNum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1266, ASSERT_TYPE_ASSERT, "(ownerEnt)", (const char *)&queryFormat, "ownerEnt") )
      __debugbreak();
    PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x2Cu);
    v13 = (unsigned int)PerkNetworkPriorityIndex;
    if ( PerkNetworkPriorityIndex >= 0 )
    {
      if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
      {
        LODWORD(v17) = 64;
        LODWORD(v16) = PerkNetworkPriorityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v13 & 0x1F)) & LocalClientGlobals->predictedPlayerState.perks.array[v13 >> 5]) != 0 )
        goto LABEL_33;
    }
    if ( !LocalClientGlobals->predictedPlayerState.radarBlocked )
    {
LABEL_33:
      v14 = DCONST_DVARBOOL_compassPortableRadarOwnerOnly;
      if ( !DCONST_DVARBOOL_compassPortableRadarOwnerOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPortableRadarOwnerOnly") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( !v14->current.enabled && Com_Teams_OnSameTeam(&LocalClientGlobals->predictedPlayerState, (const team_t)v10->team, &Entity->nextState, (const team_t)CharacterInfo->team) || LocalClientGlobals->predictedPlayerState.clientNum == ownerEntNum )
      {
        CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(localClientNum);
        CgCompassSystemMP::UpdatePortableRadar(CompassSystemMP, radarEntNum, origin);
      }
    }
  }
}

/*
==============
CG_EntityMP_UpdateRagdollPose_ApplyMoverOffset
==============
*/
void CG_EntityMP_UpdateRagdollPose_ApplyMoverOffset(LocalClientNum_t localClientNum, centity_t *cent, const int ragdollHandle, vec3_t *outOrigin)
{
  __int64 v15; 
  int v17; 
  centity_t *Entity; 
  __int32 v19; 
  unsigned int Instance; 
  unsigned int m_serialAndIndex; 
  bool Bool_Internal_DebugName; 
  int number; 
  cg_t *LocalClientGlobals; 
  char *fmt; 
  __int64 v86; 
  double v87; 
  __int64 v88; 
  __int64 v89; 
  double v90; 
  double v91; 
  double v92; 
  double v93; 
  double v94; 
  double v95; 
  double v96; 
  double v97; 
  double v98; 
  double v99; 
  double v100; 
  double v101; 
  unsigned int outTotalNumMovers; 
  hknpBodyId result; 
  __int16 outMoverEntNums[2]; 
  vec3_t *v106; 
  vec3_t moverOffset; 
  vec3_t outOrigina; 
  vec3_t position; 
  BoneOrientation outBoneOrientation; 
  vec4_t orientation; 

  v106 = outOrigin;
  v15 = ragdollHandle;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4345, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4346, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !(_DWORD)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4347, ASSERT_TYPE_ASSERT, "( ragdollHandle ) != ( 0 )", "%s != %s\n\t%i, %i", "ragdollHandle", "RAGDOLL_INVALID", 0, 0i64) )
    __debugbreak();
  Ragdoll_ResetMoverOffset(v15);
  outTotalNumMovers = 0;
  Ragdoll_GetAssociatedMovers(v15, outMoverEntNums, &outTotalNumMovers);
  if ( outTotalNumMovers )
  {
    v17 = outMoverEntNums[0];
    Entity = CG_GetEntity(localClientNum, outMoverEntNums[0]);
    if ( (Entity->flags & 1) != 0 )
    {
      v19 = 3 * localClientNum + 3;
      Instance = CG_PhysicsObject_GetInstance((Physics_WorldId)v19, v17, localClientNum);
      if ( Instance != -1 )
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v19 > 7 )
        {
          LODWORD(v88) = 3 * localClientNum + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v88) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * localClientNum + 1) <= 5 )
        {
          LODWORD(v88) = 3 * localClientNum + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v88) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v19 <= 1 )
        {
          LODWORD(v88) = 3 * localClientNum + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v88) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v19, Instance, 0)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF )
        {
          __asm
          {
            vmovaps [rsp+200h+var_50], xmm6
            vmovaps [rsp+200h+var_60], xmm7
            vmovaps [rsp+200h+var_70], xmm8
            vmovaps [rsp+200h+var_80], xmm9
            vmovaps [rsp+200h+var_90], xmm10
            vmovaps [rsp+200h+var_A0], xmm11
            vmovaps [rsp+200h+var_B0], xmm12
            vmovaps [rsp+200h+var_C0], xmm13
            vmovaps [rsp+200h+var_D0], xmm14
            vmovaps [rsp+200h+var_E0], xmm15
          }
          Physics_GetRigidBodyTransform((const Physics_WorldId)v19, m_serialAndIndex, &position, &orientation);
          if ( !(_DWORD)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
            __debugbreak();
          if ( (unsigned int)(v15 - 1) >= 0x40 )
          {
            LODWORD(v88) = 64;
            LODWORD(v86) = v15 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v86, v88) )
              __debugbreak();
          }
          if ( &g_ragdollBodies[v15] == (Ragdoll *)14116 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4376, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
            __debugbreak();
          memset(&outBoneOrientation, 0, sizeof(outBoneOrientation));
          Ragdoll_GetLatestPhysicsPoseBoneOrientation(&g_ragdollBodies[v15 - 1], 0, &outBoneOrientation);
          __asm
          {
            vmovss  xmm6, dword ptr [rbp+0E0h+outBoneOrientation.origin]
            vmovss  xmm7, dword ptr [rbp+0E0h+outBoneOrientation.origin+4]
            vmovss  xmm8, dword ptr [rbp+0E0h+outBoneOrientation.origin+8]
          }
          CG_GetPoseOrigin(&Entity->pose, &outOrigina);
          __asm
          {
            vmovss  xmm9, dword ptr [rbp+0E0h+position]
            vmovss  xmm10, dword ptr [rbp+0E0h+position+4]
            vmovss  xmm11, dword ptr [rbp+0E0h+position+8]
            vsubss  xmm0, xmm6, xmm9
            vaddss  xmm15, xmm0, dword ptr [rbp+0E0h+outOrigin]
            vsubss  xmm1, xmm7, xmm10
            vaddss  xmm0, xmm1, dword ptr [rbp+0E0h+outOrigin+4]
            vmovss  [rbp+0E0h+var_154], xmm0
            vsubss  xmm0, xmm8, xmm11
            vaddss  xmm0, xmm0, dword ptr [rbp+0E0h+outOrigin+8]
            vmovss  [rbp+0E0h+result.m_serialAndIndex], xmm0
          }
          _RBX = Ragdoll_GetPhysicsPoseBoneOrientations(&g_ragdollBodies[v15 - 1]);
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4397, ASSERT_TYPE_ASSERT, "(ragdollBoneOrientations)", (const char *)&queryFormat, "ragdollBoneOrientations") )
            __debugbreak();
          __asm
          {
            vmovss  xmm12, dword ptr [rbx]
            vmovss  xmm13, dword ptr [rbx+4]
            vmovss  xmm14, dword ptr [rbx+8]
            vmovss  xmm1, [rbp+0E0h+var_154]
            vsubss  xmm0, xmm15, xmm12
            vmovss  dword ptr [rbp+0E0h+moverOffset], xmm0
            vmovss  xmm0, [rbp+0E0h+result.m_serialAndIndex]
            vsubss  xmm0, xmm0, xmm14
            vsubss  xmm1, xmm1, xmm13
            vmovss  dword ptr [rbp+0E0h+moverOffset+8], xmm0
            vmovss  dword ptr [rbp+0E0h+moverOffset+4], xmm1
          }
          Ragdoll_SetMoverOffset(v15, &moverOffset);
          _RAX = v106;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0E0h+moverOffset]
            vaddss  xmm1, xmm0, dword ptr [rax]
            vmovss  xmm0, dword ptr [rbp+0E0h+moverOffset+4]
            vmovss  dword ptr [rax], xmm1
            vaddss  xmm1, xmm0, dword ptr [rax+4]
            vmovss  xmm0, dword ptr [rbp+0E0h+moverOffset+8]
            vmovss  dword ptr [rax+4], xmm1
            vaddss  xmm1, xmm0, dword ptr [rax+8]
            vmovss  dword ptr [rax+8], xmm1
          }
          CG_Entity_ResetSkeleton(localClientNum, cent->nextState.number);
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset, "ragdoll_debugRagdollMoverOffset");
          __asm { vmovaps xmm15, [rsp+200h+var_E0] }
          if ( Bool_Internal_DebugName )
          {
            number = cent->nextState.number;
            LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
            __asm
            {
              vmovss  xmm3, dword ptr [rbp+0E0h+moverOffset]
              vcvtss2sd xmm4, xmm14, xmm14
              vmovss  xmm14, dword ptr [rbp+0E0h+moverOffset+4]
              vcvtss2sd xmm5, xmm13, xmm13
              vmovss  xmm13, dword ptr [rbp+0E0h+moverOffset+8]
              vcvtss2sd xmm0, xmm8, xmm8
              vmovsd  [rsp+200h+var_168], xmm0
              vcvtss2sd xmm1, xmm7, xmm7
              vmovsd  [rsp+200h+var_170], xmm1
              vcvtss2sd xmm2, xmm6, xmm6
              vmovsd  [rsp+200h+var_178], xmm2
              vmovsd  [rsp+200h+var_180], xmm4
              vmovsd  [rsp+200h+var_188], xmm5
              vcvtss2sd xmm6, xmm12, xmm12
              vmovss  xmm12, dword ptr [rbp+0E0h+outOrigin]
              vmovsd  [rsp+200h+var_190], xmm6
              vcvtss2sd xmm7, xmm11, xmm11
              vmovss  xmm11, dword ptr [rbp+0E0h+outOrigin+4]
              vmovsd  [rsp+200h+var_198], xmm7
              vcvtss2sd xmm8, xmm10, xmm10
              vmovss  xmm10, dword ptr [rbp+0E0h+outOrigin+8]
              vmovsd  [rsp+200h+var_1A0], xmm8
              vcvtss2sd xmm3, xmm3, xmm3
              vcvtss2sd xmm9, xmm9, xmm9
              vmovsd  [rsp+200h+var_1A8], xmm9
              vcvtss2sd xmm10, xmm10, xmm10
              vmovsd  [rsp+200h+var_1B0], xmm10
              vcvtss2sd xmm11, xmm11, xmm11
              vmovsd  [rsp+200h+var_1B8], xmm11
              vcvtss2sd xmm12, xmm12, xmm12
              vmovsd  [rsp+200h+var_1C0], xmm12
            }
            LODWORD(v89) = v17;
            LODWORD(v88) = number;
            __asm
            {
              vcvtss2sd xmm13, xmm13, xmm13
              vcvtss2sd xmm14, xmm14, xmm14
              vmovsd  [rsp+200h+var_1D8], xmm13
              vmovq   r9, xmm3
              vmovsd  [rsp+200h+fmt], xmm14
            }
            Com_Printf(20, "[%d] Mover offset [%6.2f %6.2f %6.2f] applied to corpse %d associated mover: %d. Mover Pos [%6.2f %6.2f %6.2f] Mover Rigid Body Pos [%6.2f %6.2f %6.2f] Ragdoll Root Bone (prev) [%6.2f %6.2f %6.2f] Ragdoll Root Bone (current) [%6.2f %6.2f %6.2f] \n", (unsigned int)LocalClientGlobals->time, *(double *)&_XMM3, *(double *)&fmt, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101);
          }
          __asm
          {
            vmovaps xmm13, [rsp+200h+var_C0]
            vmovaps xmm12, [rsp+200h+var_B0]
            vmovaps xmm11, [rsp+200h+var_A0]
            vmovaps xmm10, [rsp+200h+var_90]
            vmovaps xmm9, [rsp+200h+var_80]
            vmovaps xmm8, [rsp+200h+var_70]
            vmovaps xmm7, [rsp+200h+var_60]
            vmovaps xmm6, [rsp+200h+var_50]
            vmovaps xmm14, [rsp+200h+var_D0]
          }
        }
      }
    }
  }
}

/*
==============
CG_EntityMP_UpdateScramblerEffect
==============
*/
void CG_EntityMP_UpdateScramblerEffect(LocalClientNum_t localClientNum, const unsigned int scramblerEntNum, const unsigned int ownerEntNum, const vec3_t *origin, const JammingType jammingType)
{
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v13; 
  centity_t *Entity; 
  const char *v28; 
  bool v29; 
  CgCompassSystemMP *CompassSystemMP; 
  __int64 v34; 
  __int64 v35; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1201, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( ownerEntNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v35) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v34) = ownerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1203, ASSERT_TYPE_ASSERT, "(unsigned)( ownerEntNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "ownerEntNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v34, v35) )
      __debugbreak();
  }
  _RBX = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, ownerEntNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1209, ASSERT_TYPE_ASSERT, "(ownerInfo)", (const char *)&queryFormat, "ownerInfo") )
    __debugbreak();
  v13 = CgStatic::GetCharacterInfo(LocalClientStatics, _RBX->predictedPlayerState.clientNum);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1212, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  if ( v13->infoValid && CharacterInfo->infoValid )
  {
    Entity = CG_GetEntity(localClientNum, ownerEntNum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1218, ASSERT_TYPE_ASSERT, "(ownerEnt)", (const char *)&queryFormat, "ownerEnt") )
      __debugbreak();
    if ( Com_Teams_OnSameTeam(&_RBX->predictedPlayerState, (const team_t)v13->team, &Entity->nextState, (const team_t)CharacterInfo->team) || _RBX->predictedPlayerState.clientNum == ownerEntNum )
      goto LABEL_42;
    __asm
    {
      vmovaps [rsp+98h+var_58], xmm6
      vmovss  xmm0, dword ptr [rbx+38h]
      vsubss  xmm3, xmm0, dword ptr [r12]
      vmovss  xmm1, dword ptr [rbx+3Ch]
      vsubss  xmm2, xmm1, dword ptr [r12+4]
      vmovss  xmm0, dword ptr [rbx+40h]
      vsubss  xmm4, xmm0, dword ptr [r12+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm6, xmm2, xmm2
    }
    switch ( jammingType )
    {
      case JAMMING_TYPE_LINEAR:
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+59EB8h]
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm1, xmm0
          vcomiss xmm6, xmm1
        }
        goto LABEL_41;
      case JAMMING_TYPE_LITTLE:
        _RDI = DVARFLT_scramblerJamDistLittle;
        if ( DVARFLT_scramblerJamDistLittle )
          goto LABEL_39;
        v28 = "scramblerJamDistLittle";
        break;
      case JAMMING_TYPE_MEDIUM:
        _RDI = DVARFLT_scramblerJamDistMedium;
        if ( DVARFLT_scramblerJamDistMedium )
          goto LABEL_39;
        v28 = "scramblerJamDistMedium";
        break;
      case JAMMING_TYPE_LARGE:
        _RDI = DVARFLT_scramblerJamDistLarge;
        if ( !DVARFLT_scramblerJamDistLarge )
        {
          v28 = "scramblerJamDistLarge";
          break;
        }
LABEL_39:
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vcomiss xmm6, dword ptr [rdi+28h] }
        _RBX->rsdJamming = v29;
        goto LABEL_41;
      default:
        _RBX->rsdJamming = 0;
LABEL_41:
        __asm { vmovaps xmm6, [rsp+98h+var_58] }
LABEL_42:
        CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(localClientNum);
        CgCompassSystemMP::UpdateScrambler(CompassSystemMP, scramblerEntNum, ownerEntNum, origin, jammingType);
        return;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v28) )
      __debugbreak();
    goto LABEL_39;
  }
}

/*
==============
CG_EntityMP_ValidateDObj
==============
*/
void CG_EntityMP_ValidateDObj(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  int v4; 
  LocalClientNum_t v6; 
  int v7; 
  DObj *ClientDObj; 
  DObj *v10; 
  int v11; 
  __int64 v12; 
  const XModel *v13; 
  const char *name; 
  const char *EntityTypeName; 
  const XModel *XModelFromIndex; 
  int v28; 
  bool v29; 
  bool v30; 
  float fmt; 
  float fmta; 
  __int64 v38; 
  double v39; 
  __int64 v40; 
  double v41; 
  __int64 v42; 

  v4 = 0;
  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  v6 = localClientNum;
  v7 = 0;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4861, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, v6);
  v10 = ClientDObj;
  if ( ClientDObj )
  {
    v11 = 0;
    if ( ClientDObj->numModels )
    {
      v12 = 0i64;
      do
      {
        v13 = v10->models[v12];
        if ( !v13 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4872, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
        }
        name = v13->name;
        if ( !v13->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4875, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
          __debugbreak();
        if ( Sys_IsMainThread() && (v13->flags & 0x8000) != 0 && !CL_TransientsMP_IsXModelLoaded(v13) )
        {
          EntityTypeName = BG_GetEntityTypeName((const entityType_s)cent->nextState.eType);
          LODWORD(v38) = cent->nextState.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4882, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_IsXModelLoaded( model ))", "%s\n\tEntity %d(%s) has model %s that is not loaded.", "CL_TransientsMP_IsXModelLoaded( model )", v38, EntityTypeName, name) )
            __debugbreak();
        }
        ++v11;
        ++v12;
      }
      while ( v11 < v10->numModels );
      v6 = localClientNum;
      v4 = 0;
      v7 = 0;
    }
    if ( cent->nextState.eType == ET_SCRIPTMOVER )
    {
      __asm { vmovss  xmm2, cs:__real@3a83126f }
      v4 = cent->nextState.lerp.u.anonymous.data[3];
      v7 = cent->nextState.lerp.u.anonymous.data[4];
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm6, xmm0, xmm2
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
      }
      if ( cent->nextState.eType < ET_SCRIPTMOVER )
        goto LABEL_44;
      __asm { vcomiss xmm6, cs:__real@41000000 }
      if ( cent->nextState.eType > ET_SCRIPTMOVER )
        goto LABEL_44;
      __asm
      {
        vmulss  xmm1, xmm6, cs:__real@447a0000
        vcvttss2si rcx, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
        vsubss  xmm1, xmm0, xmm1
        vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm1, xmm2
      }
      if ( cent->nextState.eType > ET_SCRIPTMOVER )
      {
LABEL_44:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 158, ASSERT_TYPE_ASSERT, "(BG_AnimTreeMP_ScriptModelAnimRateValid( animRateRaw ))", (const char *)&queryFormat, "BG_AnimTreeMP_ScriptModelAnimRateValid( animRateRaw )") )
          __debugbreak();
      }
    }
    __asm { vmovss  dword ptr [rsp+0A8h+fmt], xmm6 }
    if ( !CG_AnimTreeMP_DObjAnimInfoIsEqual(v6, cent->nextState.number, v4, v7, fmt) )
    {
      _RDI = CG_GetLocalClientGlobals(v6);
      XModelFromIndex = CG_EntityMP_GetXModelFromIndex(v6, cent->nextState.number);
      if ( _RDI->entityLastXAnimIndex[cent->nextState.number] != v4 )
      {
        LODWORD(v40) = v4;
        LODWORD(v38) = _RDI->entityLastXAnimIndex[cent->nextState.number];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4901, ASSERT_TYPE_ASSERT, "(cgameGlob->entityLastXAnimIndex[cent->nextState.number] == animIndex)", "%s\n\tLast set xanim index %i, current entity anim index %i for model[0] '%s' of type %u", "cgameGlob->entityLastXAnimIndex[cent->nextState.number] == animIndex", v38, v40, XModelFromIndex->name, cent->nextState.eType) )
          __debugbreak();
      }
      v28 = _RDI->entityLastXAnimTime[cent->nextState.number];
      v29 = v28 == v7;
      if ( v28 != v7 )
      {
        LODWORD(v42) = cent->nextState.eType;
        LODWORD(v40) = v7;
        LODWORD(v38) = _RDI->entityLastXAnimTime[cent->nextState.number];
        v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4902, ASSERT_TYPE_ASSERT, "(cgameGlob->entityLastXAnimTime[cent->nextState.number] == animTime)", "%s\n\tLast set xanim time %i, current entity anim time %i for model[0] '%s' of type %u", "cgameGlob->entityLastXAnimTime[cent->nextState.number] == animTime", v38, v40, XModelFromIndex->name, v42);
        v29 = !v30;
        if ( v30 )
          __debugbreak();
      }
      _RAX = cent->nextState.number;
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+rax*4+0A7320h]
        vucomiss xmm1, xmm6
      }
      if ( !v29 )
      {
        LODWORD(v42) = cent->nextState.eType;
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+0A8h+var_70], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+0A8h+var_78], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4903, ASSERT_TYPE_ASSERT, "(cgameGlob->entityLastXAnimRate[cent->nextState.number] == animRateRaw)", "%s\n\tLast set xanim rate %f, current entity anim rate %f for model[0] '%s' of type %u, anim index %i, anim start: %i", "cgameGlob->entityLastXAnimRate[cent->nextState.number] == animRateRaw", v39, v41, XModelFromIndex->name, v42, v4, v7) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rsp+0A8h+fmt], xmm6 }
      if ( !CG_AnimTreeMP_DObjAnimInfoIsEqual(v6, cent->nextState.number, v4, v7, fmta) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4904, ASSERT_TYPE_ASSERT, "(CG_AnimTreeMP_DObjAnimInfoIsEqual( localClientNum, cent->nextState.number, animIndex, animTime, animRateRaw ))", (const char *)&queryFormat, "CG_AnimTreeMP_DObjAnimInfoIsEqual( localClientNum, cent->nextState.number, animIndex, animTime, animRateRaw )") )
        __debugbreak();
    }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
}

/*
==============
CG_EntsMP_DrawDebugPlayerCulling
==============
*/
void CG_EntsMP_DrawDebugPlayerCulling(const LocalClientNum_t localClientNum, const unsigned int entNum, const vec4_t *color, const int drawLine)
{
  const dvar_t *v4; 
  const cpose_t *PoseExtended; 
  CgGlobalsMP *LocalClientGlobals; 
  vec3_t outOrigin; 

  v4 = DCONST_DVARBOOL_cg_playerAnimUpdateDebug;
  if ( !DCONST_DVARBOOL_cg_playerAnimUpdateDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    PoseExtended = CG_GetPoseExtended(localClientNum, entNum, 0);
    CG_GetPoseOrigin(PoseExtended, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+outOrigin+8]
      vaddss  xmm1, xmm0, cs:__real@42700000
      vmovss  dword ptr [rsp+88h+outOrigin+8], xmm1
    }
    CL_AddDebugStar(&outOrigin, color, 0, 1, 0);
    if ( drawLine )
    {
      LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
      CL_AddDebugLine(&LocalClientGlobals->predictedPlayerState.origin, &outOrigin, color, 0, 1, 0);
    }
  }
}

/*
==============
CG_EntsMP_GetEntityStateXCompositeModel
==============
*/
XCompositeModelDef *CG_EntsMP_GetEntityStateXCompositeModel(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  XCompositeModelDef *result; 
  signed int XCompositeModelIndex; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 403, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 406, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_SCRIPTMOVER || cent->nextState.un.scriptMoverType != 2 || (result = (XCompositeModelDef *)ScriptableCl_GetCurrentCompositeModel(localClientNum, cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId - 1)) == NULL )
  {
    XCompositeModelIndex = CG_XCompositeModel_GetXCompositeModelIndex(localClientNum, cent);
    if ( XCompositeModelIndex <= 0 )
      return 0i64;
    else
      return CG_XCompositeModel_GetXCompositeModelFromIndex(localClientNum, XCompositeModelIndex);
  }
  return result;
}

/*
==============
CG_EntsMP_GetEntityStateXModel
==============
*/
const XModel *CG_EntsMP_GetEntityStateXModel(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  const XModel *result; 
  __int16 scriptMoverType; 
  unsigned int m_mapEntryId; 
  const XModel *CurrentModel; 
  entityState_t *p_nextState; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 333, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  switch ( cent->nextState.eType )
  {
    case ET_FIRST:
    case ET_TURRET:
    case ET_PLANE:
    case ET_COVERWALL:
      result = CG_EntityMP_GetXModelFromIndex(localClientNum, cent->nextState.staticState.general.xmodel);
      break;
    case ET_SCRIPTMOVER:
      if ( cent->nextState.un.scriptMoverType == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 360, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType != ScriptMoverType_ReflectionProbe)", "%s\n\tReflection probes are not handled here", "cent->nextState.un.scriptMoverType != ScriptMoverType_ReflectionProbe") )
        __debugbreak();
      if ( cent->nextState.un.scriptMoverType == 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 361, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType != ScriptMoverType_ClientWeapon)", "%s\n\tClient weapons are not handled here", "cent->nextState.un.scriptMoverType != ScriptMoverType_ClientWeapon") )
        __debugbreak();
      if ( cent->nextState.un.scriptMoverType == 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 362, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType != ScriptMoverType_ServerWeapon)", "%s\n\tServer weapons are not handled here", "cent->nextState.un.scriptMoverType != ScriptMoverType_ServerWeapon") )
        __debugbreak();
      scriptMoverType = cent->nextState.un.scriptMoverType;
      if ( scriptMoverType == 2 )
      {
        m_mapEntryId = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId;
        CurrentModel = ScriptableCl_GetCurrentModel(localClientNum, m_mapEntryId - 1);
        if ( ScriptableCl_GetCurrentCompositeModel(localClientNum, m_mapEntryId - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 370, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetCurrentCompositeModel( localClientNum, scriptableIndex ) == nullptr)", "%s\n\tEntity should not have composite model in here.", "ScriptableCl_GetCurrentCompositeModel( localClientNum, scriptableIndex ) == nullptr") )
          __debugbreak();
        result = CurrentModel;
      }
      else if ( scriptMoverType == 4 )
      {
        result = CG_ClientArmsMP_GetXModelForEntity(localClientNum, cent);
      }
      else
      {
        result = CG_EntityMP_GetXModelFromIndex(localClientNum, cent->nextState.lerp.u.primaryLight.packedColorB_Fov);
      }
      break;
    case ET_HELICOPTER:
    case ET_VEHICLE:
    case ET_VEHICLE_CORPSE:
      result = CG_EntityMP_GetXModelFromIndex(localClientNum, cent->nextState.un.actorFlags);
      break;
    default:
      p_nextState = &cent->nextState;
      if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( ((p_nextState->eType - 12) & 0xFFFD) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 395, ASSERT_TYPE_ASSERT, "(!BG_IsVehicleEntity( &cent->nextState ))", "%s\n\tVehicles should have been handled above", "!BG_IsVehicleEntity( &cent->nextState )") )
        __debugbreak();
      result = NULL;
      break;
  }
  return result;
}

/*
==============
CG_EntsMP_UpdatePlayerAnimationLods
==============
*/
void CG_EntsMP_UpdatePlayerAnimationLods(const LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  const dvar_t *v3; 
  int integer; 
  const dvar_t *v5; 
  int v6; 
  const dvar_t *v7; 
  int v8; 
  int LocalClientActiveCount; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  unsigned __int16 *m_playerOrderDistanceSortedIndex; 
  unsigned __int16 v13; 
  int v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  unsigned __int16 v18; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  const DObj *v23; 
  char v24; 
  characterInfo_t *CharacterInfo; 
  unsigned __int8 LodForDistance; 
  __int16 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int16 v32; 
  int v34; 
  __int16 v35; 
  __int16 v36; 
  __int16 v37; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_EntsMP_UpdatePlayerAnimationLods");
  _R15 = CgGlobalsMP::GetLocalClientGlobals(v1);
  v3 = DCONST_DVARINT_cg_playerAnimMaxLODCount0;
  if ( !DCONST_DVARINT_cg_playerAnimMaxLODCount0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimMaxLODCount0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  v35 = integer;
  v5 = DCONST_DVARINT_cg_playerAnimMaxLODCount1;
  if ( !DCONST_DVARINT_cg_playerAnimMaxLODCount1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimMaxLODCount1") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.integer;
  v36 = v6;
  v7 = DCONST_DVARINT_cg_playerAnimMaxLODCount2;
  if ( !DCONST_DVARINT_cg_playerAnimMaxLODCount2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimMaxLODCount2") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.integer;
  v37 = v8;
  if ( CL_IsRenderingSplitScreen() )
  {
    LocalClientActiveCount = CL_GetLocalClientActiveCount();
    v10 = truncate_cast<unsigned short,int>(LocalClientActiveCount);
    v35 = (unsigned __int16)integer / v10;
    v36 = (unsigned __int16)v6 / v10;
    v37 = (unsigned __int16)v8 / v10;
  }
  v11 = truncate_cast<unsigned short,unsigned int>(_R15->m_playerOrderDistanceSortedCount);
  v32 = v11;
  m_playerOrderDistanceSortedIndex = _R15->m_playerOrderDistanceSortedIndex;
  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3373, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  v13 = 0;
  if ( v11 )
  {
    v14 = 2533 * v1;
    v34 = 2533 * v1;
    v15 = "playerEntityIndex doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)";
    v16 = "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )";
    v17 = "%s\n\t( handle ) = %i";
    while ( 1 )
    {
      v18 = *m_playerOrderDistanceSortedIndex;
      if ( *m_playerOrderDistanceSortedIndex >= 0xF8u )
      {
        LODWORD(v31) = 248;
        LODWORD(v30) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3381, ASSERT_TYPE_ASSERT, "(unsigned)( playerEntityIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "playerEntityIndex doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
        v16 = "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )";
        v17 = "%s\n\t( handle ) = %i";
      }
      _R14 = 56i64 * v18;
      v20 = v18;
      if ( v18 >= 0x9E5u )
      {
        LODWORD(v31) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v31) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v31) = 2;
        LODWORD(v30) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      v21 = v14 + v18;
      if ( v21 >= 0x13CA )
      {
        LODWORD(v31) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v31) )
          __debugbreak();
      }
      v22 = clientObjMap[v21];
      if ( !v22 )
        goto LABEL_73;
      if ( v22 >= (unsigned int)s_objCount )
      {
        LODWORD(v31) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v31) )
          __debugbreak();
      }
      v23 = (const DObj *)s_objBuf[v22];
      if ( v23 )
        break;
LABEL_72:
      v1 = localClientNum;
LABEL_73:
      ++v13;
      ++m_playerOrderDistanceSortedIndex;
      v17 = "%s\n\t( handle ) = %i";
      v15 = "playerEntityIndex doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)";
      v16 = "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )";
      if ( v13 >= v32 )
        goto LABEL_74;
    }
    if ( _R15 == (CgGlobalsMP *)-8i64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->predictedPlayerState.otherFlags, ACTIVE, 0x22u) )
    {
      if ( _R15 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
      {
        if ( _R15 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
          goto LABEL_53;
      }
    }
    if ( (_DWORD)v20 == _R15->predictedPlayerState.clientNum )
      v24 = 1;
    else
LABEL_53:
      v24 = 0;
    if ( ((unsigned __int8 (__fastcall *)(CgGlobalsMP *, const char *, const char *, const char *))_R15->IsMP)(_R15, v17, v15, v16) )
    {
      if ( (unsigned int)v20 >= _R15->m_characterInfoCount )
      {
        LODWORD(v31) = _R15->m_characterInfoCount;
        LODWORD(v30) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      CharacterInfo = &_R15->m_characterInfo[v20];
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)_R15, v20);
    }
    if ( v24 || CharacterInfo->isScriptedSceneAnim )
    {
      XAnimSetInstantClientLod(v23, 0);
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [r14+r15+0C6B24h]; distance }
      *(double *)&_XMM0 = CG_Entity_GetAnimationLodScaledDistance(*(const float *)&_XMM0);
      __asm { vmovaps xmm1, xmm0; distance }
      LodForDistance = XAnimGetLodForDistance(v23, *(float *)&_XMM1);
      if ( bitarray_base<bitarray<224>>::testBit(_R15->m_playerOrderDistanceSortedIndexMasks, v13) )
      {
        if ( LodForDistance < 3u )
        {
          while ( 1 )
          {
            v29 = *(&v35 + LodForDistance);
            if ( v29 )
              break;
            if ( ++LodForDistance >= 3u )
              goto LABEL_66;
          }
          *(&v35 + LodForDistance) = v29 - 1;
          XAnimSetClientLod(v23, LodForDistance);
          goto LABEL_71;
        }
      }
      else
      {
        LodForDistance = 3;
      }
LABEL_66:
      XAnimSetClientLod(v23, LodForDistance);
    }
LABEL_71:
    v14 = v34;
    goto LABEL_72;
  }
LABEL_74:
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_EntsMP_UpdatePlayerDObjPriorities
==============
*/
void CG_EntsMP_UpdatePlayerDObjPriorities(const LocalClientNum_t localClientNum, const CgSnapshotMP *nextSnap)
{
  const dvar_t *v5; 
  unsigned int unsignedInt; 
  const dvar_t *v7; 
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned __int64 v14; 
  const dvar_t *v15; 
  __int64 v16; 
  const dvar_t *v17; 
  int integer; 
  int v19; 
  const dvar_t *v20; 
  bool v21; 
  unsigned int v22; 
  unsigned int *v23; 
  unsigned __int64 v25; 
  unsigned int v26; 
  const dvar_t *v27; 
  const cpose_t *PoseExtended; 
  const dvar_t *v30; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  __int64 v43; 
  vec3_t outOrigin; 
  unsigned int _First[250]; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_EntsMP_UpdatePlayerDObjPriorities");
  v5 = DCONST_DVARINT_cg_playerAnimUpdateFrameCount;
  if ( !DCONST_DVARINT_cg_playerAnimUpdateFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateFrameCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  unsignedInt = v5->current.unsignedInt;
  v40 = unsignedInt;
  v7 = DCONST_DVARINT_cg_playerAnimUpdateFillCount;
  if ( !DCONST_DVARINT_cg_playerAnimUpdateFillCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateFillCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v41 = v7->current.unsignedInt;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v9 = DCONST_DVARBOOL_cg_playerAnimUpdateCulling;
  if ( !DCONST_DVARBOOL_cg_playerAnimUpdateCulling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateCulling") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled || LocalClientGlobals->m_playerOrderDistanceSortedCount <= unsignedInt )
  {
    *(_QWORD *)LocalClientGlobals->m_playerUpdateAnimBits.array = -1i64;
    *(_QWORD *)&LocalClientGlobals->m_playerUpdateAnimBits.array[2] = -1i64;
    *(_QWORD *)&LocalClientGlobals->m_playerUpdateAnimBits.array[4] = -1i64;
    LocalClientGlobals->m_playerUpdateAnimBits.array[6] = -1;
    *(_QWORD *)LocalClientGlobals->m_playerUpdateLRUAnimBits.array = 0i64;
    *(_QWORD *)&LocalClientGlobals->m_playerUpdateLRUAnimBits.array[2] = 0i64;
    *(_QWORD *)&LocalClientGlobals->m_playerUpdateLRUAnimBits.array[4] = 0i64;
    LocalClientGlobals->m_playerUpdateLRUAnimBits.array[6] = 0;
    goto LABEL_75;
  }
  v10 = DCONST_DVARINT_cg_playerAnimMaxBackgroundUpdateCount;
  if ( !DCONST_DVARINT_cg_playerAnimMaxBackgroundUpdateCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimMaxBackgroundUpdateCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v42 = v10->current.unsignedInt;
  v11 = 0i64;
  *(_QWORD *)LocalClientGlobals->m_playerUpdateAnimBits.array = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateAnimBits.array[2] = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateAnimBits.array[4] = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateAnimBits.array[6] = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateLRUAnimBits.array[1] = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateLRUAnimBits.array[3] = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateLRUAnimBits.array[5] = 0i64;
  v12 = 0;
  v13 = 0;
  v38 = 0;
  if ( LocalClientGlobals->m_playerOrderDistanceSortedCount < unsignedInt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3476, ASSERT_TYPE_ASSERT, "( cgameGlob->m_playerOrderDistanceSortedCount ) >= ( DOBJ_UPDATE_EVERY_FRAME )", "%s >= %s\n\t%i, %i", "cgameGlob->m_playerOrderDistanceSortedCount", "DOBJ_UPDATE_EVERY_FRAME", LocalClientGlobals->m_playerOrderDistanceSortedCount, unsignedInt) )
    __debugbreak();
  if ( LocalClientGlobals->m_playerOrderDistanceSortedCount > 0xF8 )
  {
    LODWORD(v36) = 248;
    LODWORD(v35) = LocalClientGlobals->m_playerOrderDistanceSortedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3477, ASSERT_TYPE_ASSERT, "( cgameGlob->m_playerOrderDistanceSortedCount ) <= ( ( sizeof( *array_counter( animUpdateInfoCharacterIndex ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "cgameGlob->m_playerOrderDistanceSortedCount", "ARRAY_COUNT( animUpdateInfoCharacterIndex )", v35, v36) )
      __debugbreak();
  }
  v37 = 0;
  if ( !LocalClientGlobals->m_playerOrderDistanceSortedCount )
  {
    v22 = v41;
    goto LABEL_51;
  }
  do
  {
    v14 = LocalClientGlobals->m_playerOrderDistanceSortedIndex[v11];
    if ( (unsigned int)v14 >= 0xF8 )
    {
      LODWORD(v34) = 248;
      LODWORD(v33) = LocalClientGlobals->m_playerOrderDistanceSortedIndex[v11];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3482, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "characterIndex doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v33, v34) )
        __debugbreak();
    }
    if ( CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_UPDATE_PLAYER_ANIMATION, &LocalClientGlobals->m_playerUpdateAnimInfo[v14].eventLodData) )
    {
      if ( v37 >= unsignedInt )
      {
        v15 = DCONST_DVARINT_cg_playerAnimUpdateMinAccumTime;
        if ( !DCONST_DVARINT_cg_playerAnimUpdateMinAccumTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateMinAccumTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        if ( LocalClientGlobals->m_playerUpdateAnimInfo[v14].accumulatedTime > v15->current.integer )
        {
          v16 = v12++;
LABEL_47:
          _First[v16] = v14;
        }
      }
      else
      {
        if ( (unsigned int)v14 >= 0xE0 )
        {
          LODWORD(v36) = 224;
          LODWORD(v35) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v35, v36) )
            __debugbreak();
        }
        LocalClientGlobals->m_playerUpdateAnimBits.array[v14 >> 5] |= 0x80000000 >> (v14 & 0x1F);
        CG_EntsMP_DrawDebugPlayerCulling(localClientNum, v14, &colorGreen, 1);
        ++v37;
      }
    }
    else if ( v13 < v42 )
    {
      v17 = DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeSeconds;
      if ( !DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateMaxAccumTimeSeconds") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      integer = v17->current.integer;
      v19 = 1000 * integer;
      v20 = DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeRangeSeconds;
      if ( !DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeRangeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateMaxAccumTimeRangeSeconds") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( 1000 * v20->current.integer < v19 )
        integer = v20->current.integer;
      v13 = v38;
      v21 = LocalClientGlobals->m_playerUpdateAnimInfo[v14].accumulatedTime <= v19 - 1000 * ((-211 * (unsigned __int16)v14) & 0x1FF) * integer / 512;
      unsignedInt = v40;
      if ( !v21 )
      {
        v16 = v12++;
        v13 = ++v38;
        goto LABEL_47;
      }
    }
    v11 = (unsigned int)(v11 + 1);
  }
  while ( (unsigned int)v11 < LocalClientGlobals->m_playerOrderDistanceSortedCount );
  v22 = v41;
  if ( v12 > v41 )
    std::_Sort_unchecked<unsigned int *,CG_EntsMP_SortPlayerPrioritiesFunctor>(_First, &_First[v12], v12, (CG_EntsMP_SortPlayerPrioritiesFunctor)LocalClientGlobals);
LABEL_51:
  if ( v22 > v12 )
    v22 = v12;
  if ( v22 )
  {
    v23 = _First;
    v43 = v22;
    __asm { vmovss  xmm6, cs:__real@42700000 }
    do
    {
      v25 = *v23;
      if ( (unsigned int)v25 >= 0xE0 )
      {
        LODWORD(v36) = 224;
        LODWORD(v35) = *v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v35, v36) )
          __debugbreak();
      }
      v26 = 0x80000000 >> (v25 & 0x1F);
      LocalClientGlobals->m_playerUpdateAnimBits.array[v25 >> 5] |= v26;
      v27 = DCONST_DVARBOOL_cg_playerAnimUpdateDebug;
      if ( !DCONST_DVARBOOL_cg_playerAnimUpdateDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      if ( v27->current.enabled )
      {
        PoseExtended = CG_GetPoseExtended(localClientNum, v25, 0);
        CG_GetPoseOrigin(PoseExtended, &outOrigin);
        __asm
        {
          vaddss  xmm1, xmm6, dword ptr [rsp+4B8h+outOrigin+8]
          vmovss  dword ptr [rsp+4B8h+outOrigin+8], xmm1
        }
        CL_AddDebugStar(&outOrigin, &colorYellow, 0, 1, 0);
      }
      v30 = DCONST_DVARINT_cg_playerAnimUpdateInstantBlendMinLODLevel;
      if ( !DCONST_DVARINT_cg_playerAnimUpdateInstantBlendMinLODLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateInstantBlendMinLODLevel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      if ( (unsigned __int8)LocalClientGlobals->m_playerUpdateAnimInfo[v25].eventLodData.distanceLod >= v30->current.integer )
      {
        if ( (unsigned int)v25 >= 0xE0 )
        {
          LODWORD(v36) = 224;
          LODWORD(v35) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v35, v36) )
            __debugbreak();
        }
        LocalClientGlobals->m_playerUpdateLRUAnimBits.array[v25 >> 5] |= v26;
      }
      ++v23;
      --v43;
    }
    while ( v43 );
  }
LABEL_75:
  Sys_ProfEndNamedEvent();
  _R11 = &v46;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CgEntitySystemMP::GetDObj_General
==============
*/
DObj *CgEntitySystemMP::GetDObj_General(CgEntitySystemMP *this, const int entNum, bool *createdNew_optionalOut)
{
  __int64 v3; 
  int v8; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v8 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", entNum, v8) )
      __debugbreak();
  }
  return CG_EntityMP_GetDObj_General((const LocalClientNum_t)this->m_localClientNum, &this->m_entities[v3], createdNew_optionalOut);
}

/*
==============
CgEntitySystemMP::GetDObj_General
==============
*/
DObj *CgEntitySystemMP::GetDObj_General(CgEntitySystemMP *this, const centity_t *cent, bool *createdNew_optionalOut)
{
  return CG_EntityMP_GetDObj_General((const LocalClientNum_t)this->m_localClientNum, cent, createdNew_optionalOut);
}

/*
==============
CgEntitySystemMP::GetRenderFlagForRefEntity
==============
*/
__int64 CgEntitySystemMP::GetRenderFlagForRefEntity(CgEntitySystemMP *this, const entityState_t *es)
{
  int v3; 
  unsigned int v4; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3783, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v3 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0xEu) << 10;
  v4 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0xDu) << 9) | v3;
  if ( BG_IsRagdollTrajectory(&es->lerp.pos) )
    v4 |= 0x1000u;
  return v4;
}

/*
==============
CgEntitySystemMP::IsMP
==============
*/
char CgEntitySystemMP::IsMP(CgEntitySystemMP *this)
{
  return 1;
}

/*
==============
PointFrustumCheck
==============
*/
__int64 PointFrustumCheck(const LocalClientNum_t localClientNum, const vec3_t *origin)
{
  unsigned int refdefViewOrg_aab; 
  int v11; 
  bool v12; 
  bool v35; 
  bool v41; 
  unsigned __int8 v44; 
  __int64 result; 
  __int128 v51; 
  __int64 v52; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  v52 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _R14 = origin;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  _RDI = &_RBX->refdef.view;
  if ( _RBX == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = _RBX->refdef.view.refdefViewOrg_aab;
  if ( _RBX == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(v51) = LODWORD(_RBX->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26936)) + 2));
  DWORD1(v51) = LODWORD(_RBX->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26940)) + 2));
  v11 = (refdefViewOrg_aab ^ ((_DWORD)_RBX + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26944)) + 2);
  v12 = v11 == LODWORD(_RBX->refdef.view.org.org.v[2]);
  DWORD2(v51) = v11 ^ LODWORD(_RBX->refdef.view.org.org.v[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm5, xmm0, [rsp+0A8h+var_78]
    vmovss  xmm1, dword ptr [r14+4]
    vsubss  xmm3, xmm1, [rsp+0A8h+var_74]
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm4, xmm0, [rsp+0A8h+var_70]
    vmulss  xmm1, xmm3, dword ptr [rbx+6948h]
    vmulss  xmm0, xmm5, dword ptr [rbx+6944h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+694Ch]
    vaddss  xmm6, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [rbx+6954h]
    vmulss  xmm0, xmm5, dword ptr [rbx+6950h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+6958h]
    vaddss  xmm7, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [rbx+6960h]
    vmulss  xmm0, xmm5, dword ptr [rbx+695Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+6964h]
    vaddss  xmm9, xmm2, xmm1
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
  }
  if ( v12 )
    goto LABEL_17;
  __asm { vucomiss xmm8, dword ptr [rdi] }
  if ( v12 )
  {
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2289, ASSERT_TYPE_ASSERT, "(cgameGlob->refdef.view.tanHalfFovX != 0.0f)", (const char *)&queryFormat, "cgameGlob->refdef.view.tanHalfFovX != 0.0f", (_QWORD)v51, *((_QWORD *)&v51 + 1));
    v12 = !v35;
    if ( v35 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm6, xmm0, xmm6
    vmulss  xmm1, xmm7, xmm6
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm1, xmm1, xmm7
    vcomiss xmm1, dword ptr [rdi]
  }
  if ( !v12 )
    goto LABEL_17;
  __asm { vucomiss xmm8, dword ptr [rbx+6934h] }
  if ( v12 )
  {
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2297, ASSERT_TYPE_ASSERT, "(cgameGlob->refdef.view.tanHalfFovY != 0.0f)", (const char *)&queryFormat, "cgameGlob->refdef.view.tanHalfFovY != 0.0f");
    v12 = !v41;
    if ( v41 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm9, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, dword ptr [rbx+6934h]
  }
  if ( v12 )
    v44 = 1;
  else
LABEL_17:
    v44 = 0;
  memset(&v51, 0, 0xCui64);
  result = v44;
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
CgEntitySystemMP::ProcessNoteTracks
==============
*/
void CgEntitySystemMP::ProcessNoteTracks(CgEntitySystemMP *this, const unsigned int entityIndex, const XAnimNotifyHandle notifyHandle)
{
  const CgGlobalsMP *LocalClientGlobals; 
  DObj *ClientDObj; 

  if ( notifyHandle.m_notifyIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3283, ASSERT_TYPE_ASSERT, "( notifyHandle.IsValid() )", "Called the NoteTrack process when we have no note tracks to handle") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  ClientDObj = Com_GetClientDObj(entityIndex, this->m_localClientNum);
  if ( ClientDObj )
    CG_EntityMP_ProcessEntityNoteTracks(LocalClientGlobals, ClientDObj, entityIndex, notifyHandle);
}

/*
==============
CgEntitySystemMP::ResetEntityPoseState
==============
*/
void CgEntitySystemMP::ResetEntityPoseState(CgEntitySystemMP *this)
{
  unsigned __int8 *p_entOriginSet; 
  __int64 v2; 

  p_entOriginSet = &this->m_entities[0].pose.entOriginSet;
  v2 = 2048i64;
  do
  {
    *((_WORD *)p_entOriginSet + 3) = 1;
    *p_entOriginSet = 0;
    p_entOriginSet += 760;
    --v2;
  }
  while ( v2 );
}

/*
==============
CgEntitySystemMP::ShouldDelayEntityPacketPostPS
==============
*/
int CgEntitySystemMP::ShouldDelayEntityPacketPostPS(CgEntitySystemMP *this, const cg_t *cgameGlob, const centity_t *cent)
{
  return CG_EntityMP_ShouldDelayEntityPacketPostPS(this->m_localClientNum, cgameGlob, cent);
}

