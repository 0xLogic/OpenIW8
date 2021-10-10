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
  unsigned __int16 i; 
  __int64 v5; 
  __int64 v6; 

  for ( i = this->m_entityWork.postPsEntityHead; i != 2047; i = this->m_entityWork.entityNext[i] )
  {
    if ( i >= 0x800u )
    {
      LODWORD(v6) = 2048;
      LODWORD(v5) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( (CgEntitySystemMP *)((char *)this + 760 * i) == (CgEntitySystemMP *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3729, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
      __debugbreak();
    if ( (this->m_entities[i].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3730, ASSERT_TYPE_ASSERT, "(CENextValid(cent))", (const char *)&queryFormat, "CENextValid(cent)") )
      __debugbreak();
    if ( this->m_entities[i].nextState.eType != this->m_entities[i].pose.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3731, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == cent->pose.eType)", (const char *)&queryFormat, "cent->nextState.eType == cent->pose.eType") )
      __debugbreak();
    switch ( this->m_entities[i].nextState.eType )
    {
      case ET_PLAYER:
        CG_DistanceCacheMP_AddPlayer(localClientNum, this->m_entities[i].nextState.number, 1.0);
        break;
      case ET_PLAYER_CORPSE:
        goto LABEL_19;
      case ET_ITEM:
        CG_DistanceCacheMP_AddItem(localClientNum, this->m_entities[i].nextState.number, 1.0);
        break;
      case ET_AGENT:
        CG_DistanceCacheMP_AddAgent(localClientNum, this->m_entities[i].nextState.number, 1.0);
        break;
      case ET_AGENT_CORPSE:
LABEL_19:
        CG_DistanceCacheMP_AddPlayerCorpse(localClientNum, this->m_entities[i].nextState.number, 1.0);
        break;
      default:
        break;
    }
    if ( this->m_entityWork.entityNext[i] == 2047 && i != this->m_entityWork.postPsEntityTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3756, ASSERT_TYPE_ASSERT, "( m_entityWork.entityNext[entNum] != ENTITYNUM_NONE || entNum == m_entityWork.postPsEntityTail )", "We hit the end of the main thread entity list without hitting the tail. The list was built incorrectly.") )
      __debugbreak();
  }
}

/*
==============
CgEntitySystemMP::AddPacketEntities
==============
*/
void CgEntitySystemMP::AddPacketEntities(CgEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  LocalClientNum_t v2; 
  CgPredictedEntitySystem *System; 
  CgTargetAssistMP *InstanceMP; 
  int v6; 
  cgs_t *LocalClientStaticGlobals; 
  bool entUpdateToggleContextKey; 
  cg_t *v9; 
  CgAntiLag *Instance; 
  const CgSnapshotMP *NextSnap; 
  CgVehicleSystem *VehicleSystem; 
  __int64 m_localClientNum; 
  CgEventSystemMP *v14; 
  cg_t *v15; 
  entityState_t *entities; 
  __int64 number; 
  CgEntitySystem *EntitySystem; 
  __int64 v19; 
  unsigned __int16 v20; 
  const dvar_t *v21; 
  float v22; 
  double TimeScale; 
  const dvar_t *v24; 
  CgBallistics *v27; 
  __int64 v28; 
  __int64 v29; 
  int data; 
  float v31; 
  LocalClientNum_t v32; 
  cg_t *cgameGlob; 

  v32 = localClientNum;
  v2 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "add packet ents");
  Profile_Begin(428);
  System = CgPredictedEntitySystem::GetSystem(v2);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3575, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  CgPredictedEntitySystem::PreAddPacketEntitiesUpdate(System);
  InstanceMP = CgTargetAssistMP::GetInstanceMP(v2);
  BgTargetAssist::ClearTargets(InstanceMP);
  v6 = 0;
  this->m_impulseFieldEntityCount = 0;
  memset_0(this->m_impulseFieldEntities, 0, sizeof(this->m_impulseFieldEntities));
  CG_DistanceCacheMP_Reset(v2);
  AimTargetMP_ClearTargetList(v2);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)this->m_localClientNum);
  entUpdateToggleContextKey = LocalClientStaticGlobals->entUpdateToggleContextKey;
  LocalClientStaticGlobals->entUpdateToggleContextKey = !entUpdateToggleContextKey;
  cgameGlob = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v9 = cgameGlob;
  cgameGlob->rumbleScale = 0.0;
  CgEntitySystem::ResetEntityDataCacheForFrame(this);
  if ( !CgAntiLag::IsDisabledForMigration(v2) )
  {
    Instance = CgAntiLag::GetInstance((const LocalClientNum_t)this->m_localClientNum);
    CgAntiLag::StartSceneArchiveClient(Instance, v9->time);
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
  CG_PlayersMP_UpdatePerFrameCullingPriorities(v2);
  CG_EntsMP_UpdatePlayerAnimationLods(v2);
  CG_EntsMP_UpdatePlayerDObjPriorities(v2, NextSnap);
  CG_PlayersMP_UpdatePlayerEventPriorities(v2, NextSnap);
  CG_Weapons_CreateWeaponPhysics(v2, v9->clientNum);
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
      LODWORD(v29) = CgEventSystem::ms_allocatedCount;
      LODWORD(v28) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    if ( !CgEventSystem::ms_eventSystemArray[m_localClientNum] )
    {
      LODWORD(v29) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 237, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v29) )
        __debugbreak();
    }
    v14 = (CgEventSystemMP *)CgEventSystem::ms_eventSystemArray[m_localClientNum];
    if ( NextSnap->numEntities > 0 )
    {
      v15 = cgameGlob;
      entities = NextSnap->entities;
      do
      {
        number = entities->number;
        EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)this->m_localClientNum);
        if ( (unsigned int)number >= 0x800 )
        {
          LODWORD(v29) = 2048;
          LODWORD(v28) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v28, v29) )
            __debugbreak();
        }
        v19 = (__int64)&EntitySystem->m_entities[number];
        v20 = *(_WORD *)(v19 + 408);
        if ( (unsigned __int16)(v20 - 8) > 1u && CG_EntityMP_ShouldDelayEntityPacketPostPS(this->m_localClientNum, v15, (const centity_t *)v19) == PPSD_NOT_DELAYED )
        {
          if ( v20 < 0x1Du )
            CgEventSystem::CheckEntityEvents(v14, (centity_t *)v19, 0);
          else
            CgEventSystemMP::CheckEvents(v14, (centity_t *)v19);
        }
        ++v6;
        ++entities;
      }
      while ( v6 < NextSnap->numEntities );
      v2 = v32;
      v9 = cgameGlob;
    }
  }
  CG_Execution_ProcessFireWeapon(v2);
  data = 3 * v2 + 2;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING|0x100) )
    goto LABEL_40;
  v21 = DVARBOOL_physics_killswitchEnableClientPredWorldUseCGameTimeForWorldStep;
  if ( !DVARBOOL_physics_killswitchEnableClientPredWorldUseCGameTimeForWorldStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_killswitchEnableClientPredWorldUseCGameTimeForWorldStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    v22 = (float)v9->frametime * 0.001;
  }
  else
  {
LABEL_40:
    TimeScale = Com_GetTimeScale();
    v22 = *(float *)&TimeScale * cls.frametime_rawSeconds;
  }
  v24 = DVARFLT_physics_maxClientWorldTimeStep;
  v31 = v22;
  if ( !DVARFLT_physics_maxClientWorldTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_maxClientWorldTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  _XMM1 = v24->current.unsignedInt;
  if ( *(float *)&_XMM1 > 0.0 )
  {
    __asm { vminss  xmm0, xmm1, [rsp+88h+arg_4] }
    v31 = *(float *)&_XMM0;
  }
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE, &data);
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD, &data);
  v27 = CgBallistics::GetSystem(v2);
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3696, ASSERT_TYPE_ASSERT, "(balisticsSystem)", (const char *)&queryFormat, "balisticsSystem") )
    __debugbreak();
  CgBallistics::StartWorkers(v27, 0);
  if ( !CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(v9) )
    CgSimBulletFirePellet_StartWorkers(this->m_localClientNum);
  CG_Foliage_StartProcessCharacterEntityCmds();
  CG_PlayerState_OnEndAddPacketEntities(v2);
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
  centity_t *Entity; 
  vec3_t trBase; 

  m_localClientNum = this->m_localClientNum;
  Entity = CG_GetEntity(m_localClientNum, entityIndex);
  if ( (unsigned __int16)(Entity->nextState.eType - 8) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3227, ASSERT_TYPE_ASSERT, "((cent->nextState.eType == ET_FX) || (cent->nextState.eType == ET_LOOP_FX))", (const char *)&queryFormat, "(cent->nextState.eType == ET_FX) || (cent->nextState.eType == ET_LOOP_FX)", -2i64) )
    __debugbreak();
  if ( Entity->nextState.staticState.general.xmodel )
  {
    Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
    CG_SetPoseOrigin(&Entity->pose, &trBase);
    Entity->pose.angles.v[0] = Entity->nextState.lerp.apos.trBase.v[0];
    Entity->pose.angles.v[1] = Entity->nextState.lerp.apos.trBase.v[1];
    Entity->pose.angles.v[2] = Entity->nextState.lerp.apos.trBase.v[2];
    memset(&trBase, 0, sizeof(trBase));
    CG_EntityMP_ProcessFxEntity(m_localClientNum, entityIndex, Entity);
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
  centity_t *Entity; 
  const char *EntityTypeName; 
  const char *v6; 
  CgGlobalsMP *LocalClientGlobals; 
  entityState_t *p_nextState; 
  DObj *ClientDObj; 
  CgGlobalsMP *v10; 
  int number; 
  characterInfo_t *v12; 
  const characterInfo_t *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  float v17; 
  float v18; 
  float v19; 
  CgEntitySystem *EntitySystem; 
  int v21; 
  unsigned int eType; 
  int v23; 
  DObj *v24; 
  CgTargetAssistMP *InstanceMP; 
  vec3_t v26; 
  vec3_t outOrigin; 
  __int64 v28; 

  v28 = -2i64;
  Entity = CG_GetEntity(localClientNum, entnum);
  EntityTypeName = BG_GetEntityTypeName((const entityType_s)Entity->nextState.eType);
  v6 = j_va("Entity '%s'", EntityTypeName);
  Sys_ProfBeginNamedEvent(0xFF0000FF, v6);
  CGMovingPlatformAimAssist::AimAssistUpdateTarget(localClientNum, Entity);
  Entity->flags &= ~0x1000u;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( (Entity->flags & 1) != 0 )
  {
    p_nextState = &Entity->nextState;
    if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((Entity->nextState.eType - 1) & 0xFFEF) == 0 )
    {
      ClientDObj = Com_GetClientDObj(p_nextState->number, localClientNum);
      if ( ClientDObj )
      {
        v10 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
        number = p_nextState->number;
        v12 = v10->IsMP(v10) ? CgGlobalsMP::GetCharacterInfo(v10, number) : CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v10, number);
        v13 = v12;
        if ( v12 )
        {
          v14 = tls_index;
          if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
            __debugbreak();
          v15 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v14) + 272i64);
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8i64))(v15);
          if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3132, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
            __debugbreak();
          BG_Execution_UpdateScrubTime(v13, ClientDObj, *(_DWORD *)(v16 + 19528), *(_DWORD *)(v16 + 19532));
        }
      }
    }
  }
  CG_EntityMP_ProcessEntityDobjUpdate(localClientNum, LocalClientGlobals, entnum, Entity);
  if ( CG_EntityMP_ShouldLinkPacketEntity(localClientNum, Entity) )
  {
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    v17 = Entity->pose.angles.v[0];
    v18 = Entity->pose.angles.v[1];
    v19 = Entity->pose.angles.v[2];
    CG_Entity_UpdatePreviousPosition(Entity);
    EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
    if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3174, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
      __debugbreak();
    if ( CgEntitySystem::ShouldCalculateParentLinkPositions(EntitySystem, Entity) )
    {
      CG_Entity_CalcParentLinkPositions(localClientNum, entnum);
      if ( BG_IsRagdollTrajectory(&Entity->nextState.lerp.pos) )
        CG_EntityMP_CalcRagdollPositions(localClientNum, Entity);
    }
    else
    {
      CG_EntityMP_CalcLerpPositions(localClientNum, Entity);
    }
    CG_GetPoseOrigin(&Entity->pose, &v26);
    v21 = v26.v[0] != outOrigin.v[0] || v26.v[1] != outOrigin.v[1] || v26.v[2] != outOrigin.v[2] || v17 != Entity->pose.angles.v[0] || v18 != Entity->pose.angles.v[1] || v19 != Entity->pose.angles.v[2];
    CG_EntityMP_LinkPacketEntity(localClientNum, entnum, v21);
    if ( v21 )
    {
      Entity->flags |= 0x1000u;
      ScriptableCl_UpdateParentedTransforms(localClientNum, Entity);
    }
    memset(&v26, 0, sizeof(v26));
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  eType = (unsigned __int16)Entity->nextState.eType;
  if ( (unsigned __int16)eType > 0x18u || (v23 = 17170446, !_bittest(&v23, eType)) )
  {
    if ( ((_WORD)eType != 6 || (unsigned __int16)(Entity->nextState.un.scriptMoverType - 4) > 2u) && !ScriptableCl_IsScriptableEntity(localClientNum, Entity) )
    {
      v24 = Com_GetClientDObj(entnum, localClientNum);
      if ( v24 )
        DObjSetHidePartBits(v24, &Entity->nextState.partBits);
    }
  }
  if ( entnum >= cls.maxClients || !LocalClientGlobals->m_playerOrderDistanceSortedCount )
    CG_Entity_UpdateAnimationLod(localClientNum, entnum);
  CG_EntityMP_ProcessEntity(localClientNum, Entity);
  InstanceMP = CgTargetAssistMP::GetInstanceMP(localClientNum);
  CgTargetAssistMP::EvaluatePotentialTargetEntity(InstanceMP, Entity);
  Sys_ProfEndNamedEvent();
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
  const XModel *v7; 
  const cg_t *LocalClientGlobals; 
  unsigned int RenderFlagForRefEntity; 
  GfxSceneHudOutlineInfo *HudOutlineInfo; 
  unsigned int number; 
  vec3_t outLightingOrigin; 
  GfxSceneHudOutlineInfo v13; 
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
    v7 = EntityStateXModel;
    if ( outNewObj || !CG_AnimTreeMP_CheckDObjAvatarInfoMatches(localClientNum, cent->nextState.number, cent->nextState.eType, EntityStateXModel, m_mapEntryId) )
      CG_AnimTreeMP_SetDObjAvatarInfo(localClientNum, cent->nextState.number, cent->nextState.eType, v7, m_mapEntryId);
    CG_AnimTreeMP_UpdateScriptModelAnim(localClientNum, cent, DObj_Avatar);
    CG_EntityMP_ValidateDObj(localClientNum, cent);
    CG_Entity_CalcLightingOrigin(&cent->pose, DObj_Avatar, &outLightingOrigin);
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RenderFlagForRefEntity = CG_EntityMP_GetRenderFlagForRefEntity(localClientNum, LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
    HudOutlineInfo = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
    number = cent->nextState.number;
    v13 = *HudOutlineInfo;
    memset(&result, 0, sizeof(result));
    CG_Entity_AddDObjToScene(localClientNum, DObj_Avatar, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v13, &outLightingOrigin, 0.0, 0);
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
  __int64 v3; 
  CgGlobalsMP *LocalClientGlobals; 
  trType_t trType; 
  trType_t v6; 
  char v7; 
  float frameInterpolation; 
  DObj *ClientDObj; 
  int entity; 
  centity_t *v11; 
  entityType_s eType; 
  unsigned int v13; 
  characterInfo_t *p_ci; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  float v19; 
  double v20; 
  double v21; 
  unsigned int v22; 
  cgs_t *LocalClientStaticGlobals; 
  __int64 v24; 
  vec3_t *outAngles; 
  __int64 v27; 
  vec3_t v28; 
  vec3_t trBase; 
  CgTrajectory v30; 

  v3 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
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
      CG_EntityMP_CalcPhysicsPositions((LocalClientNum_t)v3, cent);
      return 1i64;
    }
    if ( (trType == TR_INTERPOLATE || (unsigned int)(trType - 12) <= 1) && cent->nextState.lerp.pos.trType != TR_PHYSICS_CLIENT_AUTH || (unsigned int)(trType - 3) <= 1 && cent->nextState.number < ComCharacterLimits::GetCharacterMaxCount() || cent->nextState.eType == ET_MISSILE && (v6 = cent->prevState.pos.trType, (unsigned int)(v6 - 6) <= 1) && (v6 != cent->nextState.lerp.pos.trType || ((Trajectory_GetTrBase(&cent->prevState.pos, &trBase), Trajectory_GetTrBase(&cent->nextState.lerp.pos, &v28), trBase.v[0] != v28.v[0]) || trBase.v[1] != v28.v[1] || trBase.v[2] != v28.v[2] ? (v7 = 1) : (v7 = 0), memset(&v28, 0, sizeof(v28)), memset(&trBase, 0, sizeof(trBase)), v7)) || BG_IsCharacterEntity(&cent->nextState) && !CG_IsEntityHighLoD((const LocalClientNum_t)v3, cent->nextState.number) )
    {
      CG_EntityMP_InterpolateEntityPosition(LocalClientGlobals, cent);
      return 1i64;
    }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4605, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
    __debugbreak();
  if ( ((cent->nextState.eType - 6) & 0xFFF7) != 0 || cent->nextState.lerp.pos.trType == TR_PHYSICS_CLIENT_AUTH )
  {
    CgTrajectory::CgTrajectory(&v30, (const LocalClientNum_t)v3, cent, &cent->prevState);
    CG_GetPoseOrigin(&cent->pose, &trBase);
    BgTrajectory::EvaluateTrajectories(&v30, LocalClientGlobals->time, &trBase, &cent->pose.angles);
    CG_SetPoseOrigin(&cent->pose, &trBase);
  }
  else
  {
    CgTrajectory::CgTrajectory(&v30, (const LocalClientNum_t)v3, cent, &cent->nextState.lerp);
    if ( BgTrajectory::IsAnimatedTrajectory(&cent->nextState.lerp.pos) )
    {
      if ( (unsigned int)v3 >= 2 )
      {
        LODWORD(outAngles) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outAngles, 2) )
          __debugbreak();
      }
      if ( clientUIActives[v3].migrationState )
        goto LABEL_45;
      CG_GetPoseOrigin(&cent->pose, &trBase);
      frameInterpolation = LocalClientGlobals->frameInterpolation;
      ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
      CG_Entity_InterpolateAdvancedTrajectory((LocalClientNum_t)v3, cent, ClientDObj, frameInterpolation, &trBase, &cent->pose.angles);
      CG_SetPoseOrigin(&cent->pose, &trBase);
    }
    else
    {
      if ( !BgTrajectory::IsAnimatedTrajectory(&cent->prevState.pos) )
      {
        entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
        if ( entity != 2047 )
        {
          v11 = CG_GetEntity((const LocalClientNum_t)v3, entity);
          if ( (v11->flags & 1) != 0 && v11->nextState.otherEntityNum == cent->nextState.number )
          {
            CG_GetPoseOrigin(&cent->pose, &trBase);
            BgTrajectory::EvaluateTrajectories(&v30, LocalClientGlobals->time, &trBase, &cent->pose.angles);
            CG_SetPoseOrigin(&cent->pose, &trBase);
            memset(&trBase, 0, sizeof(trBase));
            return 1i64;
          }
        }
        CG_EntityMP_InterpolateEntityPosition(LocalClientGlobals, cent);
        goto LABEL_45;
      }
      CG_GetPoseOrigin(&cent->pose, &trBase);
      BgTrajectory::EvaluateTrajectories(&v30, LocalClientGlobals->time, &trBase, &cent->pose.angles);
      CG_SetPoseOrigin(&cent->pose, &trBase);
    }
  }
  memset(&trBase, 0, sizeof(trBase));
LABEL_45:
  if ( BG_IsCharacterEntity(&cent->nextState) )
  {
    CG_PlayersMP_SetCharacterAngles(LocalClientGlobals, cent, 1.0);
  }
  else
  {
    eType = cent->nextState.eType;
    if ( eType == ET_PLAYER_CORPSE )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v13 = cent->nextState.number - ComCharacterLimits::ms_gameData.m_characterCount;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v13 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v27) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        LODWORD(outAngles) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4669, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", outAngles, v27) )
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
      p_ci = &CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v3)->corpseinfo[v13].ci;
      p_ci->leftStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.leftStickPolarPacked);
      p_ci->rightStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.rightStickPolarPacked);
      v15 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[0], 1.0, 0x10u);
      p_ci->skydivePitchInterpolated = *(float *)&v15;
      v16 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[1], 1.0, 0x10u);
      p_ci->skydiveRollInterpolated = *(float *)&v16;
      v17 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[2], 1.0, 0x10u);
      p_ci->skydiveThrottleInterpolated = *(float *)&v17;
      v18 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.movementDir);
      v19 = *(float *)&v18;
      v20 = AngleDelta(*(const float *)&v18, p_ci->lerpMoveDir);
      p_ci->deltaLerpMoveDir = *(float *)&v20;
      p_ci->lerpMoveDir = v19;
      BG_SlopeWorldmodel_Unpack(&cent->nextState.lerp.u.player.slopePacked, &p_ci->groundNormalInterpolated);
      if ( PlayerASM_IsEnabled() )
      {
        v21 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.velocityDir);
        BG_PlayerASM_UpdateAngles(*(const float *)&v21, p_ci);
      }
      p_ci->playerAngles.v[0] = cent->pose.angles.v[0];
      p_ci->playerAngles.v[1] = cent->pose.angles.v[1];
      p_ci->playerAngles.v[2] = cent->pose.angles.v[2];
    }
    else if ( eType == ET_AGENT_CORPSE )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 160, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v22 = cent->nextState.number - ComCharacterLimits::ms_gameData.m_clientCorpseCount - ComCharacterLimits::ms_gameData.m_characterCount;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v22 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v27) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
        LODWORD(outAngles) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4693, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", outAngles, v27) )
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
      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v3);
      v24 = (int)v22;
      LocalClientStaticGlobals->agentCorpseInfo[v24].ci.playerAngles.v[0] = cent->pose.angles.v[0];
      LocalClientStaticGlobals->agentCorpseInfo[v24].ci.playerAngles.v[1] = cent->pose.angles.v[1];
      LocalClientStaticGlobals->agentCorpseInfo[v24].ci.playerAngles.v[2] = cent->pose.angles.v[2];
    }
  }
  if ( BG_IsRagdollTrajectory(&cent->nextState.lerp.pos) )
    CG_EntityMP_CalcRagdollPositions((LocalClientNum_t)v3, cent);
  return 1i64;
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
  bool v7; 
  DObj *ClientDObj; 
  bool IsRagdoll; 
  vec3_t inOrigin; 
  vec3_t outOrigin; 
  __int64 v12; 
  vec3_t translationDelta; 

  v12 = -2i64;
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
    inOrigin = outOrigin;
    RootOrigin = Ragdoll_GetRootOrigin(killcamRagdollHandle, &inOrigin);
    v7 = CG_Pose_SetUsingRagdollOrigin(&cent->pose, RootOrigin);
    if ( RootOrigin )
      CG_EntityMP_UpdateRagdollPose_ApplyMoverOffset(localClientNum, cent, killcamRagdollHandle, &inOrigin);
    CG_SetPoseOrigin(&cent->pose, &inOrigin);
    ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
    if ( ClientDObj )
    {
      IsRagdoll = CG_Pose_IsRagdoll(&cent->pose);
      Ragdoll_SetAnimationParameters(ClientDObj, killcamRagdollHandle, IsRagdoll);
      if ( v7 )
      {
        translationDelta.v[0] = outOrigin.v[0] - inOrigin.v[0];
        translationDelta.v[1] = outOrigin.v[1] - inOrigin.v[1];
        translationDelta.v[2] = outOrigin.v[2] - inOrigin.v[2];
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
  entityType_s v13; 
  const dvar_t *v14; 
  CgVehicleSystem *VehicleSystem; 
  unsigned int v16; 
  BgVehiclePhysicsManager *v17; 
  BgVehiclePhysics *ObjectById; 
  _BOOL8 v19; 
  bool v20; 
  bool v21; 
  const snapshot_t *nextSnap; 
  __int64 immediatePlayerRagdoll; 
  __int64 v24; 
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
          LODWORD(v24) = 2;
          LODWORD(immediatePlayerRagdoll) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", immediatePlayerRagdoll, v24) )
            __debugbreak();
        }
        if ( *p_connectionState == CA_ACTIVE )
        {
          if ( v6 >= cg_t::ms_allocatedCount )
          {
            LODWORD(v24) = cg_t::ms_allocatedCount;
            LODWORD(immediatePlayerRagdoll) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", immediatePlayerRagdoll, v24) )
              __debugbreak();
          }
          if ( !cg_t::ms_cgArray[v7] )
          {
            LODWORD(v24) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v24) )
              __debugbreak();
          }
          if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
          {
            LODWORD(v24) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v24) )
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
    impactVector.v[2] = vec3_origin.v[2];
    v13 = cent->nextState.eType;
    hitLocation = 0;
    *(double *)impactVector.v = *(double *)vec3_origin.v;
    if ( v13 == ET_AGENT_CORPSE )
    {
      LerpEntityStateAgentCorpse::GetImpactVector((LerpEntityStateAgentCorpse *)&cent->nextState.lerp.u, &impactVector);
      hitLocation = LerpEntityStateAgentCorpse::GetHitLoc((LerpEntityStateAgentCorpse *)&cent->nextState.lerp.u);
    }
    else if ( v13 == ET_PLAYER_CORPSE )
    {
      v14 = DVARBOOL_bg_vehRagdoll;
      if ( !DVARBOOL_bg_vehRagdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehRagdoll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.enabled && (int)v2 >= 0 && (int)v2 < CgVehicleSystem::ms_allocatedCount )
      {
        if ( CgVehicleSystem::ms_vehicleSystemArray[v2] )
        {
          VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v2);
          v16 = CgVehicleSystem::PhysicsGetFromEntityNum(VehicleSystem, LocalClientGlobals->predictedPlayerState.stats[4]);
          if ( BGVehicles::PhysicsIsValid(v16) )
          {
            v17 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
            ObjectById = BgVehiclePhysicsManager::GetObjectById(v17, v16);
            if ( ObjectById->m_inUse )
            {
              LOBYTE(v19) = LocalClientGlobals->inKillCam != 0;
              ObjectById->GetRagdollInitialImpact(ObjectById, &outOrigin, v19, &hitLocation, &impactVector);
            }
          }
        }
      }
    }
    v20 = ((cent->nextState.lerp.pos.trType - 25) & 0xFFFFFFFD) == 0;
    CG_EntityWorkers_EnterCriticalSection_Ragdoll(BASE);
    v4 = Ragdoll_CreateRagdollForDObj((LocalClientNum_t)v2, cent->nextState.number, cent->nextState.number, hitLocation, &impactVector, v20);
    CG_EntityWorkers_LeaveCriticalSection_Ragdoll(BASE);
  }
  if ( v10 )
    cent->pose.killcamRagdollHandle = v4;
  else
    cent->pose.ragdollHandle = v4;
  v21 = 0;
  if ( cent->nextState.eType == ET_PLAYER_CORPSE && (v21 = LOBYTE(cent->nextState.lerp.u.vehicle.bodyPitch) & 1) || LocalClientGlobals->time == LocalClientGlobals->oldTime || (nextSnap = LocalClientGlobals->nextSnap) != NULL && nextSnap->serverTime == LocalClientGlobals->killCamEndTime )
    CG_Pose_StopAnimatedRagdoll(&cent->pose);
  CG_Pose_InitializeRagdoll(&cent->pose, LocalClientGlobals->inKillCam != 0, v21);
}

/*
==============
CG_EntityMP_DObjUpdateInfo
==============
*/
DObj *CG_EntityMP_DObjUpdateInfo(DObj *frametime, DObj *obj, bool notify, int entnum)
{
  float v4; 

  DObjUpdateClientInfo(frametime, v4, notify, entnum);
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
    origin.v[0] = FLOAT_131072_0;
    origin.v[1] = FLOAT_131072_0;
    origin.v[2] = FLOAT_131072_0;
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
  DObjModel v28; 

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
    DObjInitModel(v11, (scr_string_t)0, 1, 0, NULL, &v28);
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
    origin.v[0] = FLOAT_131072_0;
    origin.v[1] = FLOAT_131072_0;
    origin.v[2] = FLOAT_131072_0;
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
  char v20; 
  DObj *v21; 
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
      v20 = 0;
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
  stickerSlots = *CG_Weapons_BuildStickerSlotList(&result, localClientNum, NULL, 0, weapon);
  DObjSetStickerMaterialOverrides(ClientDObj, NULL, &stickerSlots);
  CG_AnimTreeMP_SetDObjInfo(localClientNum, entnum, 3, dobjModels[0].model);
  origin.v[0] = FLOAT_131072_0;
  origin.v[1] = FLOAT_131072_0;
  origin.v[2] = FLOAT_131072_0;
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  CgEntitySystem::SetEntityOrigin(EntitySystem, entnum, &origin);
  v20 = 1;
LABEL_40:
  CG_Entity_UpdateScriptableDObjBinding(localClientNum, entnum, v20);
  v21 = ClientDObj;
  if ( outNewObj )
    *outNewObj = v20;
  return v21;
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
  float frameInterpolation; 
  int number; 
  vec3_t inOrigin; 
  __int64 v7; 
  trajectory_t_secure pos; 
  trajectory_t_secure v9; 
  CgTrajectory v10; 
  CgTrajectory v11; 
  vec3_t v12; 
  vec3_t outPos; 

  v7 = -2i64;
  if ( !cgameGlob->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4107, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !cgameGlob->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4108, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  if ( cent->nextState.lerp.pos.trType == TR_PHYSICS_CLIENT_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4109, ASSERT_TYPE_ASSERT, "(cent->nextState.lerp.pos.trType != TR_PHYSICS_CLIENT_AUTH)", (const char *)&queryFormat, "cent->nextState.lerp.pos.trType != TR_PHYSICS_CLIENT_AUTH") )
    __debugbreak();
  frameInterpolation = cgameGlob->frameInterpolation;
  CgTrajectory::CgTrajectory(&v10, (const LocalClientNum_t)cgameGlob->localClientNum, cent, &cent->prevState);
  CgTrajectory::CgTrajectory(&v11, (const LocalClientNum_t)cgameGlob->localClientNum, cent, &cent->nextState.lerp);
  BgTrajectory::EvaluatePosTrajectory(&v10, cgameGlob->snap->serverTime, &outPos);
  BgTrajectory::EvaluatePosTrajectory(&v11, cgameGlob->nextSnap->serverTime, &v12);
  inOrigin.v[0] = (float)((float)(v12.v[0] - outPos.v[0]) * frameInterpolation) + outPos.v[0];
  inOrigin.v[1] = (float)((float)(v12.v[1] - outPos.v[1]) * frameInterpolation) + outPos.v[1];
  inOrigin.v[2] = (float)((float)(v12.v[2] - outPos.v[2]) * frameInterpolation) + outPos.v[2];
  CgTrajectory::InterpolateEntityAngles(cgameGlob, cent);
  CG_SetPoseOrigin(&cent->pose, &inOrigin);
  if ( ((LODWORD(inOrigin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(inOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(inOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4127, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpOrg )[0] ) && !IS_NAN( ( tmpOrg )[1] ) && !IS_NAN( ( tmpOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpOrg )[0] ) && !IS_NAN( ( tmpOrg )[1] ) && !IS_NAN( ( tmpOrg )[2] )") )
    __debugbreak();
  if ( ((LODWORD(cent->pose.angles.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(cent->pose.angles.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(cent->pose.angles.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4128, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cent->pose.angles )[0] ) && !IS_NAN( ( cent->pose.angles )[1] ) && !IS_NAN( ( cent->pose.angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cent->pose.angles )[0] ) && !IS_NAN( ( cent->pose.angles )[1] ) && !IS_NAN( ( cent->pose.angles )[2] )") )
    __debugbreak();
  if ( BG_IsCharacterEntity(&cent->nextState) )
  {
    if ( !CG_Player_AlignPlayerModelForScriptLink(cgameGlob, cent) && !CG_Players_HandleVehicleOccupancyLink(cgameGlob, cent) )
      CG_PlayersMP_SetCharacterAngles(cgameGlob, cent, frameInterpolation);
    CG_Door_SetCharacterDoorAngle((const LocalClientNum_t)cgameGlob->localClientNum, cent);
    CG_Players_InterpolateHeightOffset((const LocalClientNum_t)cgameGlob->localClientNum, cent);
    CGMovingPlatforms::ApplyClientLocalOffset(cgameGlob->localClientNum, frameInterpolation, cent);
  }
  if ( cent->nextState.number < cls.maxClients )
  {
    CG_GetPoseOrigin(&cent->pose, &inOrigin);
    number = cent->nextState.number;
    pos = cent->nextState.lerp.pos;
    v9 = cent->prevState.pos;
    CG_DrawDebugMP_UpdateClientInterpolation(cgameGlob->localClientNum, number, &outPos, &v12, &inOrigin, &v9, &pos, frameInterpolation);
  }
  memset(&inOrigin, 0, sizeof(inOrigin));
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
  GfxSceneHudOutlineInfo *HudOutlineInfo; 
  unsigned int number; 
  __int64 v11; 
  bool outNewObj; 
  vec3_t outOrigin; 
  __int64 v14; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v16; 
  char output[1024]; 

  v14 = -2i64;
  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1375, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Entity_HasWeapon((LocalClientNum_t)v3, cent) )
    CG_DistanceCacheMP_AddItem((const LocalClientNum_t)v3, cent->nextState.number, 1.0);
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v3], &cent->nextState);
  if ( (unsigned __int16)(WeaponForEntity->weaponIdx - 1) > 0x224u )
  {
    LODWORD(v11) = WeaponForEntity->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1386, ASSERT_TYPE_ASSERT, "( 1 ) <= ( r_weapon.weaponIdx ) && ( r_weapon.weaponIdx ) <= ( (550 - 1) )", "r_weapon.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", v11, 1, 549) )
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
        outOrigin.v[2] = outOrigin.v[2] + 4.0;
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
        RenderFlagForRefEntity = CG_EntityMP_GetRenderFlagForRefEntity((LocalClientNum_t)v3, LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
        HudOutlineInfo = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
        number = cent->nextState.number;
        v16 = *HudOutlineInfo;
        memset(&result, 0, sizeof(result));
        CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, DObj_Item, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v16, &outOrigin, 0.0, 0);
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
  __int64 v4; 
  centity_t *Entity; 
  entityType_s eType; 
  bool v8; 
  CgEntitySystem *EntitySystem; 
  bool v10; 
  int *v11; 
  int v12; 
  int v13; 
  const DObj *ClientDObj; 
  const DObj *v15; 
  double Radius; 
  unsigned int v17; 
  const DObj *v18; 
  double v19; 
  _QWORD v20[3]; 
  vec3_t outOrigin; 
  __int64 v22; 

  v22 = -2i64;
  v4 = entnum;
  Entity = CG_GetEntity(localClientNum, entnum);
  eType = Entity->nextState.eType;
  v8 = ScriptableCl_IsScriptableEntity(localClientNum, Entity) != 0;
  if ( (eType == ET_SCRIPTMOVER || eType == ET_PLANE) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u) && !v8 && !BG_IsVehicleEntity(&Entity->nextState) )
  {
    if ( entMoved )
    {
      if ( !CG_EntityWorkers_TryAddBModelBoundsUpdate(v4) )
        CG_Entity_UpdateBModelWorldBounds(localClientNum, Entity, 0);
    }
  }
  else
  {
    EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    v10 = (Entity->flags & 0x80000) != 0;
    if ( (unsigned int)v4 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 486, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v4 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
    {
      v20[0] = *(_QWORD *)EntitySystem->m_entityOrigin[v4].v;
      *(float *)&v20[1] = EntitySystem->m_entityOrigin[v4].v[2];
    }
    else
    {
      v11 = (int *)&EntitySystem->m_entityOrigin[v4];
      v20[2] = v20;
      v12 = *v11;
      v13 = v11[1];
      LODWORD(v20[1]) = (unsigned int)v11 ^ v13 ^ v11[2] ^ s_entity_aab_Z;
      HIDWORD(v20[0]) = (unsigned int)v11 ^ s_entity_aab_Y ^ v12 ^ v13;
      LODWORD(v20[0]) = (unsigned int)v11 ^ v12 ^ ~s_entity_aab_X;
      memset(&v20[2], 0, sizeof(_QWORD));
      LODWORD(v20[2]) = v20[0];
      if ( (v20[0] & 0x7F800000) == 2139095040 || (*(float *)&v20[2] = *((float *)v20 + 1), (HIDWORD(v20[0]) & 0x7F800000) == 2139095040) || (*(float *)&v20[2] = *(float *)&v20[1], (v20[1] & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    if ( !v10 || (float)((float)((float)((float)(*((float *)v20 + 1) - outOrigin.v[1]) * (float)(*((float *)v20 + 1) - outOrigin.v[1])) + (float)((float)(*(float *)v20 - outOrigin.v[0]) * (float)(*(float *)v20 - outOrigin.v[0]))) + (float)((float)(*(float *)&v20[1] - outOrigin.v[2]) * (float)(*(float *)&v20[1] - outOrigin.v[2]))) > 256.0 )
    {
      CgEntitySystem::SetEntityOrigin(EntitySystem, v4, &outOrigin);
      if ( !CG_EntityWorkers_TryAddDObjBoundsUpdate(v4) )
      {
        ClientDObj = Com_GetClientDObj(v4, localClientNum);
        v15 = ClientDObj;
        if ( ClientDObj )
        {
          Radius = DObjGetRadius(ClientDObj);
          v17 = R_LinkDObjEntity(localClientNum, v4, &outOrigin, *(float *)&Radius + 16.0);
          Entity->flags |= 0x80000u;
          CG_Entity_CheckLightCount(v4, v15, v17, &outOrigin, *(float *)&Radius + 16.0);
        }
      }
    }
    if ( entMoved )
    {
      v18 = Com_GetClientDObj(v4, localClientNum);
      if ( v18 )
      {
        v19 = DObjGetRadius(v18);
        if ( *(float *)&v19 > rg.primaryLightMotionDetectSizeMin && *(float *)&v19 < rg.primaryLightMotionDetectSizeMax )
          R_EntityMoved(localClientNum, v4);
      }
    }
    memset(v20, 0, 0xCui64);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
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
  const XModel *v7; 
  int flags; 
  CgPredictedEntitySystem *System; 
  bool IsEmptyPredictionKey; 
  bool v11; 
  int time; 
  const WeaponDef *v13; 
  const SndAliasList *v14; 
  CgMissile *v15; 
  centity_t *LinkToParent; 
  unsigned __int16 weaponIdx; 
  int v18; 
  FxCombinedDef v19; 
  cg_t *v20; 
  WeaponSFXPackage *sfxPackage; 
  DObj *v22; 
  int v23; 
  int v24; 
  unsigned __int16 v25; 
  unsigned __int16 v26; 
  bool v27; 
  FxCombinedDef v28; 
  const SndAliasList *v29; 
  int v30; 
  FxCombinedDef v31; 
  int v32; 
  FxCombinedDef v33; 
  const cg_t *v34; 
  unsigned int RenderFlagForRefEntity; 
  const cg_t *v36; 
  __m256i *HudOutlineInfo; 
  __m256i v38; 
  float v39; 
  unsigned int number; 
  CgCompassSystemMP *CompassSystemMP; 
  __int64 isUsingDetonator; 
  __int64 isUsingDetonatora; 
  __int64 isUsingCensorshipWorldModel; 
  bool inAltWeaponMode; 
  bool createdNew; 
  FXRegisteredDef fxDef; 
  FXRegisteredDef v52; 
  unsigned int scriptableIndex; 
  vec3_t cgameGlob; 
  vec3_t outOrigin; 
  vec3_t origin; 
  vec3_t v57; 
  FXRegisteredDef v58; 
  shaderOverride_t outLocalParams; 
  GfxSceneHudOutlineInfo v60; 
  __int64 v61; 
  GfxSceneHudOutlineInfo result; 
  Weapon r_weapon; 
  DObjModel outDObjModel; 

  v61 = -2i64;
  v3 = localClientNum;
  fxDef.m_particleSystemDef = NULL;
  v58.m_particleSystemDef = NULL;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  *(_QWORD *)cgameGlob.v = LocalClientGlobals;
  if ( (cent->nextState.lerp.u.anonymous.data[4] & 0x200) != 0 )
    cent->flags |= 0x200u;
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  r_weapon = *BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v3], &cent->nextState);
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
    v7 = BG_ProjectileModel(&r_weapon, cent->nextState.inAltWeaponMode);
    DObjInitModel(v7, (scr_string_t)0, 1, 0, NULL, &outDObjModel);
  }
  *(_QWORD *)outOrigin.v = CG_EntityMP_GetDObj((LocalClientNum_t)v3, cent->nextState.number, cent->nextState.eType, &outDObjModel, 1u, &createdNew);
  if ( r_weapon.weaponIdx >= BG_GetNumWeapons() )
  {
    memset(&r_weapon, 0, 48);
    *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
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
  v11 = !IsEmptyPredictionKey;
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
  v52.m_particleSystemDef = (const ParticleSystemDef *)CgSoundSystem::ms_soundSystemArray[v3];
  v13 = BG_WeaponDef(&r_weapon, inAltWeaponMode);
  v14 = BG_ProjIgnitionSound(&r_weapon, inAltWeaponMode);
  *(_QWORD *)origin.v = v14;
  if ( v11 )
  {
    v15 = CgMissile::GetSystem((const LocalClientNum_t)v3);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1922, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
      __debugbreak();
    CgMissile::BlendPredictedMissileTrajectoryForRemoteViewer(v15, cent, v13);
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
          v14 = *(const SndAliasList **)origin.v;
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
          if ( v14 )
          {
            CG_GetPoseOrigin(&cent->pose, &outOrigin);
            CgSoundSystem::PlaySoundAlias((CgSoundSystem *)v52.m_particleSystemDef, cent->nextState.number, &outOrigin, v14);
            memset(&outOrigin, 0, sizeof(outOrigin));
          }
        }
      }
      v18 = cent->flags;
      if ( (v18 & 0x202) == 514 )
      {
        v18 &= ~2u;
        cent->flags = v18;
        if ( fxDef.m_particleSystemDef )
        {
          CG_StopBoltedEffects((LocalClientNum_t)v3, &fxDef, cent->nextState.number, scr_const.tag_fx);
          v18 = cent->flags;
        }
      }
      if ( (v18 & 0x400) != 0 )
      {
        cent->flags = v18 & 0xFFFFFBFF;
        v19.particleSystemDef = BG_ProjBeaconEffect(&r_weapon, inAltWeaponMode).particleSystemDef;
        if ( v19.particleSystemDef )
        {
          *(FxCombinedDef *)outOrigin.v = v19;
          CG_StopBoltedEffects((LocalClientNum_t)v3, (const FXRegisteredDef *)&outOrigin, cent->nextState.number, scr_const.tag_fx);
        }
      }
LABEL_66:
      v20 = LocalClientGlobals;
LABEL_67:
      CG_AddHudGrenade(v20, cent);
      goto LABEL_68;
    }
  }
  if ( v13->missileConeSoundEnabled )
    CG_PlayMissileProjectedConeSound((LocalClientNum_t)v3, cent);
  sfxPackage = v13->sfxPackage;
  if ( sfxPackage && sfxPackage->sounds->projectileSound.name )
  {
    CG_GetPoseOrigin(&cent->pose, &cgameGlob);
    CgSoundSystem::PlaySoundAliasByLookup((CgSoundSystem *)v52.m_particleSystemDef, cent->nextState.number, &cgameGlob, v13->sfxPackage->sounds->projectileSound);
    memset(&cgameGlob, 0, sizeof(cgameGlob));
  }
  v22 = *(DObj **)outOrigin.v;
  if ( *(_QWORD *)outOrigin.v )
  {
    if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v3, cent, &scriptableIndex) )
    {
      ScriptableCl_UpdatePosition((const LocalClientNum_t)v3, scriptableIndex, cent);
      ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v3, scriptableIndex, cent->nextState.number);
    }
    if ( createdNew )
      DObjSetCamoMaterialOverride(v22, &outDObjModel, 1);
    v23 = cent->flags;
    v24 = v23;
    if ( (v23 & 2) == 0 && (v23 & 0x200) == 0 )
    {
      v25 = r_weapon.weaponIdx;
      if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
      {
        LODWORD(isUsingCensorshipWorldModel) = bg_lastParsedWeaponIndex;
        LODWORD(isUsingDetonatora) = r_weapon.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", isUsingDetonatora, isUsingCensorshipWorldModel) )
          __debugbreak();
      }
      if ( !bg_weaponDefs[v25] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      if ( bg_weaponDefs[v25]->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || time - cent->nextState.lerp.u.anonymous.data[2] > BG_ProjIgnitionDelay(&r_weapon, 0) )
      {
        cent->flags |= 2u;
        if ( fxDef.m_particleSystemDef )
          CG_PlayBoltedEffect((LocalClientNum_t)v3, &fxDef, cent->nextState.number, scr_const.tag_fx);
        goto LABEL_93;
      }
      v24 = cent->flags;
    }
    if ( (v24 & 0x202) == 514 )
    {
      cent->flags = v24 & 0xFFFFFFFD;
      if ( fxDef.m_particleSystemDef )
        CG_StopBoltedEffects((LocalClientNum_t)v3, &fxDef, cent->nextState.number, scr_const.tag_fx);
    }
LABEL_93:
    if ( (cent->flags & 0x800) != 0 )
      goto LABEL_108;
    v26 = r_weapon.weaponIdx;
    if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(isUsingCensorshipWorldModel) = bg_lastParsedWeaponIndex;
      LODWORD(isUsingDetonatora) = r_weapon.weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", isUsingDetonatora, isUsingCensorshipWorldModel) )
        __debugbreak();
    }
    if ( !bg_weaponDefs[v26] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    if ( bg_weaponDefs[v26]->guidedMissileType == MISSILE_GUIDANCE_JAVELIN && time - cent->nextState.lerp.u.anonymous.data[2] <= BG_ProjIgnitionDelay(&r_weapon, 0) )
    {
LABEL_108:
      v27 = inAltWeaponMode;
    }
    else
    {
      v27 = inAltWeaponMode;
      v28.particleSystemDef = BG_ProjIgnitionEffect(&r_weapon, inAltWeaponMode).particleSystemDef;
      v58.m_particleSystemDef = v28.particleSystemDef;
      cent->flags |= 0x800u;
      if ( v28.particleSystemDef )
        CG_PlayBoltedEffect((LocalClientNum_t)v3, &v58, cent->nextState.number, scr_const.tag_fx);
      v29 = *(const SndAliasList **)origin.v;
      if ( *(_QWORD *)origin.v )
      {
        CG_GetPoseOrigin(&cent->pose, &origin);
        CgSoundSystem::PlaySoundAlias((CgSoundSystem *)v52.m_particleSystemDef, cent->nextState.number, &origin, v29);
        memset(&origin, 0, sizeof(origin));
      }
    }
    v30 = cent->flags;
    if ( (v30 & 0x400) == 0 )
    {
      cent->flags = v30 | 0x400;
      v31.particleSystemDef = BG_ProjBeaconEffect(&r_weapon, v27).particleSystemDef;
      if ( v31.particleSystemDef )
      {
        v52.m_particleSystemDef = v31.particleSystemDef;
        CG_PlayBoltedEffect((LocalClientNum_t)v3, &v52, cent->nextState.number, scr_const.tag_fx);
      }
    }
    v32 = cent->flags;
    if ( (v32 & 0x40000) == 0 )
    {
      cent->flags = v32 | 0x40000;
      v33.particleSystemDef = BG_ProjBodyEffect(&r_weapon, 0).particleSystemDef;
      if ( v33.particleSystemDef )
      {
        v52.m_particleSystemDef = v33.particleSystemDef;
        CG_PlayBoltedEffect((LocalClientNum_t)v3, &v52, cent->nextState.number, scr_const.tag_fx);
      }
    }
    CG_GetPoseOrigin(&cent->pose, &v57);
    v57.v[2] = v57.v[2] + 4.0;
    v34 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    RenderFlagForRefEntity = CG_EntityMP_GetRenderFlagForRefEntity((LocalClientNum_t)v3, v34, cent, &cent->nextState.lerp.eFlags);
    if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1766, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    if ( cent->nextState.eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1767, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_MISSILE)", (const char *)&queryFormat, "cent->nextState.eType == ET_MISSILE") )
      __debugbreak();
    v36 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo(&result, v36, cent);
    v38 = *HudOutlineInfo;
    *(__m256i *)&outLocalParams.scrollRateX = v38;
    *(__m256i *)&v60.color = v38;
    v39 = *(float *)HudOutlineInfo[1].m256i_i32;
    if ( (*((_BYTE *)&cent->nextState.lerp.u.ragdollConstraint + 16) & 0x20) != 0 )
    {
      if ( CgEntitySystemMP::CG_EntityMP_IsOnSameTeam((const LocalClientNum_t)v3, cent) || !CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)v3) )
      {
        v38 = *(__m256i *)&outLocalParams.scrollRateX;
      }
      else
      {
        _XMM0 = CG_Utils_StencilScriptControlled((const LocalClientNum_t)v3);
        __asm { vpcmpeqd xmm3, xmm0, xmm1 }
        _XMM1 = LODWORD(v60.scopeStencil);
        __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
        v60.scopeStencil = *(float *)&_XMM0;
        v38 = *(__m256i *)&v60.color;
      }
    }
    number = cent->nextState.number;
    *(__m256i *)&v60.color = v38;
    v60.characterEVOffset = v39;
    memset(&outLocalParams, 0, sizeof(outLocalParams));
    CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, *(const DObj **)outOrigin.v, &cent->pose, number, RenderFlagForRefEntity, &outLocalParams, &v60, &v57, 0.0, 0);
    CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)v3);
    CgCompassSystemMP::UpdateMissileInfo(CompassSystemMP, cent);
    v20 = (cg_t *)v34;
    goto LABEL_67;
  }
LABEL_68:
  memset(&v57, 0, sizeof(v57));
}

/*
==============
CG_EntityMP_PrimaryLight
==============
*/
void CG_EntityMP_PrimaryLight(LocalClientNum_t localClientNum, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  unsigned __int64 v5; 
  GfxLight *v6; 
  ComPrimaryLight *primaryLights; 
  unsigned __int64 v8; 
  float frameInterpolation; 
  float v10; 
  float *v; 
  float *v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  unsigned int primaryLightCount; 
  CgTrajectory v23; 
  tmat33_t<vec3_t> axis; 
  float v1[4]; 
  LerpEntityStatePrimaryLightUnpacked out; 
  LerpEntityStatePrimaryLightUnpacked v27; 
  vec3_t outAng; 

  if ( cent->nextState.eType != ET_PRIMARY_LIGHT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4031, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PRIMARY_LIGHT)", (const char *)&queryFormat, "cent->nextState.eType == ET_PRIMARY_LIGHT") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4032, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = comWorld.firstScriptablePrimaryLight + cent->nextState.staticState.general.xmodel;
  if ( ((int)v5 < (int)comWorld.firstScriptablePrimaryLight || (int)v5 >= (int)comWorld.primaryLightCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 106, ASSERT_TYPE_ASSERT, "(primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount ))", (const char *)&queryFormat, "primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount )") )
    __debugbreak();
  if ( !rgp.world->primaryLights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4039, ASSERT_TYPE_ASSERT, "(rgp.world->primaryLights)", (const char *)&queryFormat, "rgp.world->primaryLights") )
    __debugbreak();
  v6 = &rgp.world->primaryLights[(int)v5];
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  if ( (unsigned int)v5 >= comWorld.primaryLightCount )
  {
    primaryLightCount = comWorld.primaryLightCount;
    LODWORD(v21) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v21, primaryLightCount) )
      __debugbreak();
  }
  primaryLights = comWorld.primaryLights;
  v8 = v5;
  if ( comWorld.primaryLights[v8].type == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4042, ASSERT_TYPE_ASSERT, "(refLight->type != 1)", (const char *)&queryFormat, "refLight->type != GFX_LIGHT_TYPE_DIR") )
    __debugbreak();
  if ( (v6->flags & 0x40) == 0 )
  {
    LerpEntityStatePrimaryLightUnpack((const LerpEntityStatePrimaryLightPacked *)&cent->prevState.u, &out);
    LerpEntityStatePrimaryLightUnpack((const LerpEntityStatePrimaryLightPacked *)&cent->nextState.lerp.u, &v27);
    frameInterpolation = LocalClientGlobals->frameInterpolation;
    v6->colorLinearSrgb.v[0] = (float)((float)(v27.colorLinearSrgb.v[0] - out.colorLinearSrgb.v[0]) * frameInterpolation) + out.colorLinearSrgb.v[0];
    v6->colorLinearSrgb.v[1] = (float)((float)(v27.colorLinearSrgb.v[1] - out.colorLinearSrgb.v[1]) * frameInterpolation) + out.colorLinearSrgb.v[1];
    v6->colorLinearSrgb.v[2] = (float)((float)(v27.colorLinearSrgb.v[2] - out.colorLinearSrgb.v[2]) * frameInterpolation) + out.colorLinearSrgb.v[2];
    v6->intensity = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * out.intensity) + (float)(LocalClientGlobals->frameInterpolation * v27.intensity);
    v6->uvIntensity = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * out.uvIntensity) + (float)(LocalClientGlobals->frameInterpolation * v27.uvIntensity);
    CgTrajectory::CgTrajectory(&v23, localClientNum, cent, &cent->nextState.lerp);
    if ( primaryLights[v8].rotationLimit < 1.0 )
    {
      BgTrajectory::EvaluateAngTrajectory(&v23, LocalClientGlobals->time, &outAng);
      AnglesToAxis(&outAng, &axis);
      LODWORD(v10) = LODWORD(axis.m[0].v[1]) ^ _xmm;
      v6->dir.v[0] = COERCE_FLOAT(LODWORD(axis.m[0].v[0]) ^ _xmm);
      v = v6->bulbLength.v;
      v12 = primaryLights[v8].bulbLength.v;
      v6->dir.v[2] = COERCE_FLOAT(LODWORD(axis.m[0].v[2]) ^ _xmm);
      v6->dir.v[1] = v10;
      if ( v12 == (float *)&v6->bulbLength && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v13 = axis.m[0].v[1];
      v14 = axis.m[1].v[1];
      *v = (float)((float)(axis.m[0].v[0] * primaryLights[v8].bulbLength.v[0]) + (float)(axis.m[1].v[0] * primaryLights[v8].bulbLength.v[1])) + (float)(axis.m[2].v[0] * primaryLights[v8].bulbLength.v[2]);
      v15 = v13 * *v12;
      v16 = axis.m[0].v[2];
      v17 = (float)(v15 + (float)(v14 * primaryLights[v8].bulbLength.v[1])) + (float)(axis.m[2].v[1] * primaryLights[v8].bulbLength.v[2]);
      v18 = axis.m[1].v[2];
      v6->bulbLength.v[1] = v17;
      v6->bulbLength.v[2] = (float)((float)(v16 * *v12) + (float)(v18 * primaryLights[v8].bulbLength.v[1])) + (float)(axis.m[2].v[2] * primaryLights[v8].bulbLength.v[2]);
      v1[0] = 0.0;
      v1[1] = 0.0;
      v1[2] = 0.0;
      if ( VecNCompareCustomEpsilon(v6->bulbLength.v, v1, 0.001, 3) )
      {
        *v = 0.0039215689;
        v6->bulbLength.v[1] = 0.0039215689;
        v6->bulbLength.v[2] = 0.0039215689;
      }
    }
    if ( primaryLights[v8].translationLimit > 0.0 && (BgTrajectory::EvaluatePosTrajectory(&v23, LocalClientGlobals->time, &v6->origin), primaryLights[v8].translationLimit > 0.0) || primaryLights[v8].rotationLimit < 1.0 )
    {
      v6->radius = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * out.radius) + (float)(LocalClientGlobals->frameInterpolation * v27.radius);
      v19 = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * out.cosHalfFovOuter) + (float)(LocalClientGlobals->frameInterpolation * v27.cosHalfFovOuter);
      v6->cosHalfFovOuter = v19;
      v20 = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * out.cosHalfFovInner) + (float)(LocalClientGlobals->frameInterpolation * v27.cosHalfFovInner);
      v6->cosHalfFovInner = v20;
      if ( (v19 < 0.0 || v19 > v20 || v20 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4087, ASSERT_TYPE_ASSERT, "(0.0f <= light->cosHalfFovOuter && light->cosHalfFovOuter <= light->cosHalfFovInner && light->cosHalfFovInner <= 1.0f)", "%s\n\t%g, %g", "0.0f <= light->cosHalfFovOuter && light->cosHalfFovOuter <= light->cosHalfFovInner && light->cosHalfFovInner <= 1.0f", v19, v20) )
        __debugbreak();
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
  __m256i *HudOutlineInfo; 
  unsigned int number; 
  float v10; 
  CgCompassSystemMP *CompassSystemMP; 
  int v12; 
  unsigned int torsoPitchPacked; 
  cg_t *v14; 
  int v15; 
  CgVehicleSystemMP *VehicleSystemMP; 
  __int64 v17; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v19; 
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
          HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
          number = cent->nextState.number;
          v10 = *(float *)HudOutlineInfo[1].m256i_i32;
          *(__m256i *)&v19.color = *HudOutlineInfo;
          v19.characterEVOffset = v10;
          memset(&result, 0, sizeof(result));
          CG_Entity_AddDObjToScene(localClientNum, DObj_General, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v19, &outLightingOrigin, 0.0, 0);
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
      v12 = cent->nextState.lerp.u.anonymous.data[0];
      if ( v12 )
      {
        if ( (unsigned int)(v12 - 1) <= 1 )
        {
          torsoPitchPacked = cent->nextState.lerp.u.player.torsoPitchPacked;
          if ( torsoPitchPacked >= 0x4000 )
          {
            LODWORD(v17) = cent->nextState.lerp.u.player.torsoPitchPacked;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3916, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v17, 0x4000) )
              __debugbreak();
          }
          CG_EnableAudioTriggerByIndex(torsoPitchPacked, cent->nextState.lerp.u.anonymous.data[0] == 2);
        }
        else if ( v12 == 3 && localClientNum == LOCAL_CLIENT_0 )
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
        v14 = CG_GetLocalClientGlobals(localClientNum);
        v15 = cent->nextState.number;
        if ( v14->predictedPlayerState.vehicleState.entity == v15 )
          CG_Entity_ResetSkeleton(localClientNum, v15);
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
        LODWORD(v17) = cent->nextState.eType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4735, ASSERT_TYPE_ASSERT, "( ( cent->nextState.eType == ET_INVISIBLE ) )", "( cent->nextState.eType ) = %i", v17) )
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
  float v4; 
  __int64 v5; 
  DObj *ClientDObj; 
  bool v10; 
  __int64 v11; 
  int clientNum; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  bool v15; 
  bool v16; 
  XAnimNotifyHandle v17; 

  v5 = entnum;
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
    if ( (int)v5 < cls.maxClients )
    {
      v10 = bitarray_base<bitarray<224>>::testBit(&cgameGlob->m_playerUpdateAnimBits, v5);
      v11 = v5;
      if ( !v10 )
      {
        cgameGlob->m_playerUpdateAnimInfo[v11].accumulatedTime = cgameGlob->frametime + cgameGlob->m_playerUpdateAnimInfo[v5].accumulatedTime;
        return;
      }
      cgameGlob->m_playerUpdateAnimInfo[v11].accumulatedTime = 0;
    }
    clientNum = cgameGlob->predictedPlayerState.clientNum;
    if ( cgameGlob->renderingThirdPerson || (Instance = CgWeaponMap::GetInstance(localClientNum), IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &cgameGlob->predictedPlayerState)) )
      IsThirdPersonMode = 1;
    v15 = clientNum != (_DWORD)v5 || IsThirdPersonMode;
    Sys_ProfBeginNamedEvent(0xFFEE82EE, "Entity Dobj Update");
    DObjUpdateClientInfo((DObj *)&v17, v4, v16, v15);
    Sys_ProfEndNamedEvent();
    if ( v17.m_notifyIndex != 0xFFFF && CG_EntityMP_IsValidNotetrackEnt(localClientNum, cent, v5) && !CG_EntityWorkers_TryAddNoteTrackNotification(v5, v17) )
      CG_EntityMP_ProcessEntityNoteTracks(cgameGlob, ClientDObj, v5, v17);
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
  float v9; 
  int v10; 
  __int64 v11; 
  vec3_t outOrigin; 
  __int64 v13; 

  v13 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4836, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.loopSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4837, ASSERT_TYPE_ASSERT, "(!cent->nextState.loopSound)", (const char *)&queryFormat, "!cent->nextState.loopSound") )
    __debugbreak();
  if ( cent->nextState.eType != cent->pose.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4838, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == cent->pose.eType)", (const char *)&queryFormat, "cent->nextState.eType == cent->pose.eType") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( eType == 9 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v9 = cent->nextState.lerp.u.turret.gunAngles.v[0];
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    if ( v9 == 0.0 || (float)((float)((float)((float)(outOrigin.v[1] - LocalClientGlobals->predictedPlayerState.origin.v[1]) * (float)(outOrigin.v[1] - LocalClientGlobals->predictedPlayerState.origin.v[1])) + (float)((float)(outOrigin.v[0] - LocalClientGlobals->predictedPlayerState.origin.v[0]) * (float)(outOrigin.v[0] - LocalClientGlobals->predictedPlayerState.origin.v[0]))) + (float)((float)(outOrigin.v[2] - LocalClientGlobals->predictedPlayerState.origin.v[2]) * (float)(outOrigin.v[2] - LocalClientGlobals->predictedPlayerState.origin.v[2]))) < (float)(v9 * v9) )
    {
      v10 = cent->nextState.lerp.u.anonymous.data[1];
      if ( v10 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4005, ASSERT_TYPE_ASSERT, "(period > 0)", (const char *)&queryFormat, "period > 0") )
        __debugbreak();
      if ( !cent->pose.coverWall.coverGrid[1] )
        CG_EntityMP_StartFx(localClientNum, entnum, cent, LocalClientGlobals->time, LocalClientGlobals->time + v10);
      for ( ; LocalClientGlobals->time >= (signed int)cent->pose.coverWall.coverGrid[0]; cent->pose.coverWall.coverGrid[0] += v10 )
        FX_RetriggerEffect(localClientNum, cent->pose.fx.particleSystem, cent->pose.fx.triggerTime);
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    if ( (_WORD)eType != 8 )
    {
      LODWORD(v11) = cent->nextState.eType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4843, ASSERT_TYPE_ASSERT, "( ( cent->nextState.eType == ET_FX ) )", "( cent->nextState.eType ) = %i", v11) )
        __debugbreak();
    }
    if ( cent->pose.coverWall.coverGrid[0] != cent->nextState.time2 )
    {
      particleSystem = cent->pose.fx.particleSystem;
      if ( particleSystem )
        CG_DoneWithEffect(localClientNum, particleSystem);
      cent->pose.player.control = NULL;
      CG_EntityMP_StartFx(localClientNum, entnum, cent, cent->nextState.time2, cent->nextState.time2);
    }
  }
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
  __int64 v3; 
  __int16 scriptMoverType; 
  const dvar_t *v5; 
  CgEntitySystem *EntitySystem; 
  signed __int32 v7; 
  DObj *v8; 
  __int64 v9; 
  const ScriptableDef *def; 
  unsigned int v11; 
  bool v12; 
  __m256i *v13; 
  float v14; 
  bool IsNoDraw; 
  LerpEntityState *p_lerp; 
  unsigned int v17; 
  cg_t **v18; 
  connstate_t *i; 
  DObj *ClientDObj; 
  JammingType JammingType; 
  DObj *DObj_General; 
  const DObj *v23; 
  unsigned int v24; 
  __m256i *v25; 
  float v26; 
  unsigned int v27; 
  unsigned int v28; 
  const GfxBrushModel *BrushModel; 
  CG_PhysicsObject *v30; 
  __int64 entnum; 
  __int64 renderFlags; 
  unsigned int scriptableIndex; 
  int number; 
  vec3_t outOrigin; 
  vec3_t origin; 
  vec3_t v37; 
  vec3_t v38; 
  vec3_t v39; 
  vec3_t v40; 
  vec3_t v41; 
  vec3_t prevOrigin; 
  __int64 v43; 
  __m256i v44; 
  GfxSceneHudOutlineInfo v45; 
  shaderOverride_t v46; 
  GfxSceneHudOutlineInfo v47; 
  shaderOverride_t v48; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v50; 
  vec3_t outLightingOrigin; 

  v43 = -2i64;
  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2319, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2320, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2321, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  scriptMoverType = cent->nextState.un.scriptMoverType;
  if ( (LOBYTE(cent->nextState.lerp.u.vehicle.bodyPitch) & 4) != 0 )
  {
    v5 = DCONST_DVARBOOL_bg_impulse_field_instrumentation_enabled;
    if ( !DCONST_DVARBOOL_bg_impulse_field_instrumentation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_impulse_field_instrumentation_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
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
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v3);
      if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2342, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
        __debugbreak();
      number = cent->nextState.number;
      if ( (((_BYTE)EntitySystem + 112) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &EntitySystem->m_impulseFieldEntityCount) )
        __debugbreak();
      v7 = _InterlockedExchangeAdd(&EntitySystem->m_impulseFieldEntityCount, 1u);
      if ( (unsigned int)v7 >= 0x18 )
      {
        LODWORD(renderFlags) = 24;
        LODWORD(entnum) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 571, ASSERT_TYPE_ASSERT, "(unsigned)( impulseFieldIndex ) < (unsigned)( ( 24 ) )", "impulseFieldIndex doesn't index MAX_IMPULSE_FIELD_ENTITIES\n\t%i not in [0, %i)", entnum, renderFlags) )
          __debugbreak();
      }
      EntitySystem->m_impulseFieldEntities[v7] = number;
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
        CG_ClientWeapon_ProcessEntity((const LocalClientNum_t)v3, cent);
        CG_AnimTreeMP_SetDObjInfo((LocalClientNum_t)v3, cent->nextState.number, cent->nextState.eType, NULL);
        return;
      case 6:
        CG_EntityMP_Item((LocalClientNum_t)v3, cent);
        return;
      case 8:
        CG_EntityMP_Avatar((const LocalClientNum_t)v3, cent);
        return;
      case 9:
        CG_EntityMP_ScriptMover_CircleFX((LocalClientNum_t)v3, cent);
        return;
      case 4:
        CG_ClientArmsMP_UpdateDObj((const LocalClientNum_t)v3, cent);
        break;
    }
    CG_EntityMP_GetDObj_General((const LocalClientNum_t)v3, cent, NULL);
    if ( !ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v3, cent, &scriptableIndex) || CG_Entity_IsNoDraw((const LocalClientNum_t)v3, &cent->nextState, NULL) )
    {
      IsNoDraw = CG_Entity_IsNoDraw((const LocalClientNum_t)v3, &cent->nextState, NULL);
      p_lerp = &cent->nextState.lerp;
      if ( IsNoDraw )
      {
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 1u) )
          return;
        if ( (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x80000) == 0 )
        {
          v17 = 0;
          if ( SLODWORD(cl_maxLocalClients) <= 0 )
            return;
          v18 = cg_t::ms_cgArray;
          for ( i = &clientUIActives[0].connectionState; ; i += 110 )
          {
            if ( v17 >= 2 )
            {
              LODWORD(renderFlags) = 2;
              LODWORD(entnum) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", entnum, renderFlags) )
                __debugbreak();
            }
            if ( *i == CA_ACTIVE )
            {
              if ( v17 >= cg_t::ms_allocatedCount )
              {
                LODWORD(renderFlags) = cg_t::ms_allocatedCount;
                LODWORD(entnum) = v17;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", entnum, renderFlags) )
                  __debugbreak();
              }
              if ( !*v18 )
              {
                LODWORD(renderFlags) = v17;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", renderFlags) )
                  __debugbreak();
              }
              if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
              {
                LODWORD(renderFlags) = v17;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", renderFlags) )
                  __debugbreak();
              }
              if ( ((*v18)->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 && (*v18)->predictedPlayerState.linkEnt == cent->nextState.number )
                break;
            }
            ++v17;
            ++v18;
            if ( (int)v17 >= SLODWORD(cl_maxLocalClients) )
              return;
          }
        }
        CG_EntityMP_GetDObj_General((const LocalClientNum_t)v3, cent, NULL);
        ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
        if ( ClientDObj )
        {
          if ( g_processEvents )
          {
            CG_AnimTreeMP_UpdateScriptModelAnim((LocalClientNum_t)v3, cent, ClientDObj);
            CG_EntityMP_ValidateDObj((const LocalClientNum_t)v3, cent);
          }
          else
          {
            CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate((LocalClientNum_t)v3, cent, ClientDObj);
          }
        }
      }
      else
      {
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&p_lerp->eFlags, (EntityStateFlagsMP)20) )
        {
          CG_GetPoseOrigin(&cent->pose, &v37);
          JammingType = BG_GetJammingType(&cent->nextState);
          CG_EntityMP_UpdateScramblerEffect((LocalClientNum_t)v3, cent->nextState.number, cent->nextState.otherEntityNum, &v37, JammingType);
          memset(&v37, 0, sizeof(v37));
        }
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&cent->nextState.lerp.eFlags, LEGACY_LADDER_CENTERLINE|LEGACY_MOUNT|0x10) )
        {
          CG_GetPoseOrigin(&cent->pose, &v38);
          CG_EntityMP_UpdatePortableRadarEffect((LocalClientNum_t)v3, cent->nextState.number, cent->nextState.otherEntityNum, &v38);
          memset(&v38, 0, sizeof(v38));
        }
        DObj_General = CG_EntityMP_GetDObj_General((const LocalClientNum_t)v3, cent, NULL);
        v23 = DObj_General;
        if ( DObj_General )
        {
          if ( g_processEvents )
          {
            CG_AnimTreeMP_UpdateScriptModelAnim((LocalClientNum_t)v3, cent, DObj_General);
            CG_EntityMP_ValidateDObj((const LocalClientNum_t)v3, cent);
          }
          else
          {
            CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate((LocalClientNum_t)v3, cent, DObj_General);
          }
          if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 8u) )
            AimTargetMP_ProcessEntity((const LocalClientNum_t)v3, cent);
          v24 = CG_EntityMP_ScriptMoverRenderFlags((const LocalClientNum_t)v3, cent);
          v25 = (__m256i *)CG_EntityMP_ScriptMover_Outline(&v50, (const LocalClientNum_t)v3, cent);
          v44 = *v25;
          v26 = *(float *)v25[1].m256i_i32;
          CG_GetPoseOrigin(&cent->pose, &v39);
          XAnimBonePhysicsSetDObjMatrix(v23, &v39, &cent->pose.angles);
          CG_Entity_CalcLightingOrigin(&cent->pose, v23, &outLightingOrigin);
          CG_Train_PreRender((const LocalClientNum_t)v3, cent);
          *(__m256i *)&v47.color = v44;
          v47.characterEVOffset = v26;
          memset(&v48, 0, sizeof(v48));
          CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, v23, &cent->pose, cent->nextState.number, v24, &v48, &v47, &outLightingOrigin, 0.0, 0);
          memset(&v39, 0, sizeof(v39));
        }
        else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) )
        {
          if ( cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2542, ASSERT_TYPE_ASSERT, "(!s1->staticState.mover.u.scriptableIndex)", (const char *)&queryFormat, "!s1->staticState.mover.u.scriptableIndex") )
            __debugbreak();
          if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 8u) )
          {
            CG_GetPoseOrigin(&cent->pose, &v40);
            if ( PointFrustumCheck((const LocalClientNum_t)v3, &v40) )
              AimTargetMP_ProcessEntity((const LocalClientNum_t)v3, cent);
            memset(&v40, 0, sizeof(v40));
          }
          v27 = CG_EntityMP_ScriptMoverRenderFlags((const LocalClientNum_t)v3, cent);
          if ( !CG_EntityWorkers_TryAddBModelDrawRequest(cent->nextState.number, v27) )
          {
            CG_GetPrevPoseOrigin(&cent->pose, &prevOrigin);
            CG_GetPoseOrigin(&cent->pose, &v41);
            v28 = cent->nextState.number;
            BrushModel = R_GetBrushModel(cent->nextState.index.brushModel);
            R_AddBrushModelToSceneFromAngles(BrushModel, &v41, &cent->pose.angles, &prevOrigin, &cent->pose.prevAngles, v28, v27);
            memset(&v41, 0, sizeof(v41));
            memset(&prevOrigin, 0, sizeof(prevOrigin));
          }
          v30 = CG_PhysicsObject_Get(cent->nextState.number, (LocalClientNum_t)v3);
          if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2580, ASSERT_TYPE_ASSERT, "(physicsObject)", (const char *)&queryFormat, "physicsObject") )
            __debugbreak();
          if ( v30->physicsInstances[3 * (_DWORD)v3 + 2] == -1 && CG_Entity_ShouldCreatePhysicsOnInit((LocalClientNum_t)v3, cent->nextState.number) )
            CG_Entity_CreatePhysics((LocalClientNum_t)v3, cent->nextState.number, 1);
          if ( !CG_Entity_HasCloth((const LocalClientNum_t)v3, cent->nextState.number) && CG_Entity_ShouldCreateClothOnInit((const LocalClientNum_t)v3, cent->nextState.number) )
            CG_Entity_CreateCloth((const LocalClientNum_t)v3, cent->nextState.number);
        }
        LUIOnEntityElementSpawnerMP::UpdateFiltersForScriptMover((const LocalClientNum_t)v3, cent->nextState.number);
      }
    }
    else
    {
      ScriptableCl_UpdatePosition((const LocalClientNum_t)v3, scriptableIndex, cent);
      ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v3, scriptableIndex, cent->nextState.number);
      v8 = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
      if ( v8 )
      {
        v9 = scriptableIndex;
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)v9 >= g_scriptableWorldCounts.totalInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(renderFlags) = g_scriptableWorldCounts.totalInstanceCount;
          LODWORD(entnum) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", entnum, renderFlags) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(renderFlags) = 2;
          LODWORD(entnum) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", entnum, renderFlags) )
            __debugbreak();
        }
        if ( !g_scriptableCl_instanceContexts[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
          __debugbreak();
        def = g_scriptableCl_instanceContexts[v3][v9].commonContext.def;
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
            CG_AnimTreeMP_UpdateScriptModelAnim((LocalClientNum_t)v3, cent, v8);
          else
            CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate((LocalClientNum_t)v3, cent, v8);
        }
        v11 = CG_EntityMP_ScriptMoverRenderFlags((const LocalClientNum_t)v3, cent);
        v12 = (cent->nextState.staticState.general.xmodel & 0x10) == 0;
        cent->pose.scriptMover.doVehicleControllers = (cent->nextState.staticState.general.xmodel & 0x10) != 0;
        if ( !v12 )
          v11 |= 0x1000u;
        if ( !ScriptableCl_HasShadow(scriptableIndex) )
          v11 |= 0x20u;
        v13 = (__m256i *)CG_EntityMP_ScriptMover_Outline(&result, (const LocalClientNum_t)v3, cent);
        v44 = *v13;
        v14 = *(float *)v13[1].m256i_i32;
        CG_GetPoseOrigin(&cent->pose, &origin);
        XAnimBonePhysicsSetDObjMatrix(v8, &origin, &cent->pose.angles);
        CG_Entity_CalcLightingOrigin(&cent->pose, v8, &outLightingOrigin);
        CG_Train_PreRender((const LocalClientNum_t)v3, cent);
        *(__m256i *)&v45.color = v44;
        v45.characterEVOffset = v14;
        memset(&v46, 0, sizeof(v46));
        CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, v8, &cent->pose, cent->nextState.number, v11, &v46, &v45, &outLightingOrigin, 0.0, 0);
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
  __int64 v3; 
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v5; 
  const XModel *XModelFromIndex; 
  const DObj *DObj; 
  unsigned int v9; 
  int v10; 
  CgDynamicMedia *CgDynamicMedia; 
  const dvar_t *v12; 
  int FxId; 
  FXRegisteredDef *Fx; 
  cg_t *v15; 
  const snapshot_t *snap; 
  int serverTime; 
  const dvar_t *v18; 
  __m128 m_brCircleRadius_low; 
  const dvar_t *v20; 
  float value; 
  const dvar_t *v23; 
  unsigned int v26; 
  __int64 v27; 
  ParticleSystem *v28; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  unsigned int outIndex; 
  vec3_t outOrigin; 
  __int64 v33; 
  GfxSceneHudOutlineInfo v34; 
  shaderOverride_t v35; 
  float4 scaleModMin; 
  vec3_t outLightingOrigin; 
  DObjModel dobjModel; 

  v33 = -2i64;
  v3 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->m_brCircleEnt != cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2201, ASSERT_TYPE_ASSERT, "(cgameGlob->m_brCircleEnt == cent)", (const char *)&queryFormat, "cgameGlob->m_brCircleEnt == cent") )
    __debugbreak();
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  LocalClientGlobals->m_brCircleRadius = outOrigin.v[2];
  v5 = DCONST_DVARFLT_cg_brCircleZ;
  if ( !DCONST_DVARFLT_cg_brCircleZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleZ") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  LODWORD(outOrigin.v[2]) = v5->current.integer;
  CG_SetPoseOrigin(&cent->pose, &outOrigin);
  NetConstStrings_GetIndexPlusOneFromName(NETCONSTSTRINGTYPE_XMODEL, "tag_origin", &outIndex);
  XModelFromIndex = CG_EntityMP_GetXModelFromIndex((const LocalClientNum_t)v3, outIndex);
  DObjInitModel(XModelFromIndex, (scr_string_t)0, 1, 0, NULL, &dobjModel);
  DObj = CG_EntityMP_GetDObj((LocalClientNum_t)v3, cent->nextState.number, cent->nextState.eType, &dobjModel, 1u, NULL);
  _XMM7 = 0i64;
  if ( DObj )
  {
    v9 = CG_EntityMP_ScriptMoverRenderFlags((const LocalClientNum_t)v3, cent) | 0x20;
    CG_Entity_CalcLightingOrigin(&cent->pose, DObj, &outLightingOrigin);
    memset(&v34, 0, sizeof(v34));
    memset(&v35, 0, sizeof(v35));
    CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, DObj, &cent->pose, cent->nextState.number, v9, &v35, &v34, &outLightingOrigin, 0.0, 0);
  }
  if ( !cent->pose.coverWall.coverGrid[1] )
  {
    inOutIndex[0] = -2;
    DObjGetBoneIndexInternal_71(DObj, scr_const.tag_origin, inOutIndex, &modelIndex);
    cent->pose.player.control = NULL;
    v10 = inOutIndex[0];
    CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
    v12 = DCONST_DVARSTR_cg_brCircleFX;
    if ( !DCONST_DVARSTR_cg_brCircleFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    FxId = CgDynamicMedia::GetFxId(CgDynamicMedia, v12->current.string);
    Fx = CgDynamicMedia::GetFx(CgDynamicMedia, FxId);
    if ( !Fx->m_particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2184, ASSERT_TYPE_ASSERT, "(fxDef->IsValid())", (const char *)&queryFormat, "fxDef->IsValid()") )
      __debugbreak();
    v15 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    cent->pose.coverWall.coverGrid[1] = FX_PlayBoltedEffect((LocalClientNum_t)v3, Fx, v15->time, cent->nextState.number, v10, 0);
    if ( !LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2234, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
      __debugbreak();
    snap = LocalClientGlobals->snap;
    if ( snap )
      serverTime = snap->serverTime;
    else
      serverTime = LocalClientGlobals->predictedPlayerState.serverTime;
    LocalClientGlobals->m_brCircleStartTime = serverTime;
  }
  v18 = DCONST_DVARFLT_cg_brCircleBaseRadius;
  if ( !DCONST_DVARFLT_cg_brCircleBaseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleBaseRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  m_brCircleRadius_low = (__m128)LODWORD(LocalClientGlobals->m_brCircleRadius);
  m_brCircleRadius_low.m128_f32[0] = LocalClientGlobals->m_brCircleRadius / v18->current.value;
  scaleModMin.v = _mm_shuffle_ps(m_brCircleRadius_low, m_brCircleRadius_low, 0);
  FX_ApplyScaleModifier((LocalClientNum_t)v3, cent->pose.fx.particleSystem, &scaleModMin, &scaleModMin);
  if ( cent->pose.coverWall.coverGrid[1] )
  {
    v20 = DCONST_DVARFLT_cg_brCircleEmissionCurveMaxRadius;
    if ( !DCONST_DVARFLT_cg_brCircleEmissionCurveMaxRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleEmissionCurveMaxRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    value = v20->current.value;
    if ( value < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2246, ASSERT_TYPE_ASSERT, "( 0.001f ) <= ( emissionCurveMaxRadius )", "%s <= %s\n\t%g, %g", "EQUAL_EPSILON", "emissionCurveMaxRadius", DOUBLE_0_001000000047497451, value) )
      __debugbreak();
    _XMM6 = COERCE_UNSIGNED_INT64(I_fclamp(LocalClientGlobals->m_brCircleRadius / value, 0.0, 1.0));
    v23 = DCONST_DVARFLT_cg_brCircleEmissionCurveDebugValue;
    if ( !DCONST_DVARFLT_cg_brCircleEmissionCurveDebugValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleEmissionCurveDebugValue") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    __asm
    {
      vcmpless xmm0, xmm7, xmm1
      vblendvps xmm0, xmm6, xmm1, xmm0
    }
    modelIndex = _XMM0;
    v26 = 0;
    if ( g_particleSystemsGeneration[4096 * v3 + (cent->pose.coverWall.coverGrid[1] & 0xFFF)].__all32 == cent->pose.coverWall.coverGrid[1] )
      v26 = cent->pose.coverWall.coverGrid[1] & 0xFFF;
    v27 = (v3 << 12) + v26;
    v28 = NULL;
    if ( g_particleSystems[0][v27] >= (ParticleSystem *)0x1000 )
      v28 = g_particleSystems[0][v27];
    if ( v28 )
      ParticleSystem::SetEmissionCurveValue(v28, *(const float *)&modelIndex);
    else
      cent->pose.coverWall.coverGrid[1] = 0;
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_EntityMP_ScriptMover_Outline
==============
*/
GfxSceneHudOutlineInfo *CG_EntityMP_ScriptMover_Outline(GfxSceneHudOutlineInfo *result, const LocalClientNum_t localClientNum, centity_t *cent)
{
  const cg_t *LocalClientGlobals; 
  CgGlobalsMP *v7; 
  HudData v8; 
  unsigned int HudOutlineTeamColor; 
  const dvar_t *v10; 
  __m256i *HudOutlineInfo; 
  bool v12; 
  __m256i v13; 
  GfxSceneHudOutlineInfo resulta; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2108, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2109, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2110, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  *result = NULL_HUDOUTLINE_INFO_8;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( v7->m_isMLGSpectator && (v8.0 = ($D69577AC11C1636F320D0973E2FBC7CA)cent->nextState.hudData, (*(_BYTE *)&v8.0 & 0x40) != 0) )
  {
    HudOutlineTeamColor = CG_Utils_GetHudOutlineTeamColor(v7, localClientNum, (const team_t)((v8.data >> 7) & 3), 0, 1.0);
    v10 = DVARFLT_r_hudOutlineWidth;
    result->color = HudOutlineTeamColor;
    result->forSpectator = 1;
    *(_WORD *)&result->drawOccludedPixels = 257;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    result->lineWidth = (int)v10->current.value;
    result->renderMode = 0;
    result->fill = 1;
  }
  else
  {
    HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo(&resulta, LocalClientGlobals, cent);
    v12 = (cent->flags & 1) == 0;
    v13 = *HudOutlineInfo;
    LODWORD(HudOutlineInfo) = HudOutlineInfo[1].m256i_i32[0];
    *(__m256i *)&result->color = v13;
    LODWORD(result->characterEVOffset) = (_DWORD)HudOutlineInfo;
    if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2077, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2078, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    if ( (LOBYTE(cent->nextState.lerp.u.vehicle.bodyPitch) & 8) != 0 && cent->nextState.otherEntityNum != 2047 && !CgEntitySystemMP::CG_EntityMP_IsOnSameTeam(localClientNum, cent) && CG_Utils_ShouldHighlightScriptMovers(localClientNum) && CG_Utils_ShouldHighlightInScope(localClientNum) && !CG_Utils_StencilScriptControlled(localClientNum) )
    {
      result->scopeStencil = 1.0;
      if ( CG_Utils_PlayerLockedOn(localClientNum, cent) )
        result->useAlternateColor = 1;
    }
  }
  if ( cent->nextState.eType == ET_SCRIPTMOVER )
    result->mapEntLookup = cent->nextState.lerp.u.agentCorpse.attachModels[6].m_data;
  else
    result->mapEntLookup = 0;
  return result;
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
  const char *v6; 
  float v7; 
  SndAliasList *Alias; 
  SndAliasList *v9; 
  vec3_t outOrigin; 

  if ( cent->nextState.lerp.u.anonymous.data[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3863, ASSERT_TYPE_ASSERT, "(ns->lerp.u.sound.subType == SNDENT_SUBTYPE_BLEND)", (const char *)&queryFormat, "ns->lerp.u.sound.subType == SNDENT_SUBTYPE_BLEND") )
    __debugbreak();
  torsoPitchPacked = cent->nextState.lerp.u.player.torsoPitchPacked;
  if ( torsoPitchPacked && cent->nextState.lerp.u.actor.lookAtEntityNum )
  {
    SoundAliasNameFromIndex = CgSoundSystemMP::GetSoundAliasNameFromIndex(torsoPitchPacked);
    if ( !SoundAliasNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3871, ASSERT_TYPE_ASSERT, "(aliasName0)", (const char *)&queryFormat, "aliasName0") )
      __debugbreak();
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    if ( CgSoundSystemMP::ShouldPlaySoundOnLocalClient(localClientNum, cent->nextState.number, &outOrigin, SoundAliasNameFromIndex) )
    {
      v6 = CgSoundSystemMP::GetSoundAliasNameFromIndex(cent->nextState.lerp.u.player.waistPitchPacked);
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3883, ASSERT_TYPE_ASSERT, "(aliasName1)", (const char *)&queryFormat, "aliasName1") )
        __debugbreak();
      v7 = (float)((float)(cent->nextState.lerp.u.turret.gunAngles.v[2] - cent->prevState.u.turret.gunAngles.v[2]) * CG_GetLocalClientGlobals(localClientNum)->frameInterpolation) + cent->prevState.u.turret.gunAngles.v[2];
      if ( (v7 < 0.0 || v7 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3888, ASSERT_TYPE_ASSERT, "((lerp >= 0.0f) && (lerp <= 1.0f))", (const char *)&queryFormat, "(lerp >= 0.0f) && (lerp <= 1.0f)") )
        __debugbreak();
      Alias = SND_FindAlias(SoundAliasNameFromIndex);
      v9 = SND_FindAlias(v6);
      if ( Alias && v9 )
      {
        if ( Alias->head->assetId == v9->head->assetId )
          SND_PlayBlendedSoundAlias(Alias, v9, v7, localClientNum, cent->nextState.number, 1.0, 1.0, &outOrigin, 0, SASYS_CGAME);
        else
          Com_Printf(9, "%s and %s are not valid blendable aliases.", SoundAliasNameFromIndex, v6);
      }
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
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
  __int64 v3; 
  entityState_t *p_nextState; 
  DObj *DObj_General; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForEntity; 
  bool v8; 
  cg_t *v9; 
  __m256i *HudOutlineInfo; 
  team_t Team; 
  bool v12; 
  bool useAlternateColor; 
  CgCompassSystemMP *CompassSystemMP; 
  unsigned int scriptableIndex; 
  unsigned int renderFlags; 
  vec3_t outOrigin; 
  const WeaponDef *v18; 
  GfxSceneHudOutlineInfo v19; 
  __int64 v20; 
  GfxSceneHudOutlineInfo result; 
  vec3_t v22; 
  shaderOverride_t turretAnimIndexArrayOut; 

  v20 = -2i64;
  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1593, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) != 0 )
  {
    p_nextState = &cent->nextState;
    if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1598, ASSERT_TYPE_ASSERT, "(ns)", (const char *)&queryFormat, "ns") )
      __debugbreak();
    DObj_General = CG_EntityMP_GetDObj_General((const LocalClientNum_t)v3, cent, NULL);
    if ( DObj_General && !CG_Entity_IsNoDraw((const LocalClientNum_t)v3, &cent->nextState, NULL) )
    {
      Sys_ProfBeginNamedEvent(0xFFFF0000, "ProcessEntity Turret");
      if ( !DObjGetTree(DObj_General) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1126, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ))", (const char *)&queryFormat, "DObjGetTree( obj )") )
        __debugbreak();
      CG_Entity_TurretPreControllers((LocalClientNum_t)v3, DObj_General, cent);
      cent->pose.turret.worldSpaceTransform = 0;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v3], &cent->nextState);
      v18 = BG_WeaponDef(WeaponForEntity, 0);
      if ( DObjGetTree(DObj_General) )
      {
        v8 = BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == p_nextState->number;
        if ( v18->autoAdjust )
        {
          BG_TurretAnim_GetAnimIndices(DObj_General, WeaponForEntity, (int *)&turretAnimIndexArrayOut);
          if ( LODWORD(turretAnimIndexArrayOut.tilingY) != -1 )
          {
            XAnimSetGoalWeight(DObj_General, 0, XANIM_SUBTREE_DEFAULT, LODWORD(turretAnimIndexArrayOut.tilingY), 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
            CG_EntityMP_TurretXAnimNodeSetup((LocalClientNum_t)v3, DObj_General, cent, v8);
          }
        }
      }
      CG_Turret_UpdateBarrelSpinSound((LocalClientNum_t)v3, cent);
      CG_Turret_UpdateBarrelSpinRumble((LocalClientNum_t)v3, cent);
      CG_Turret_UpdateHeat((LocalClientNum_t)v3, cent);
      CG_Turret_UpdateMotionSounds((LocalClientNum_t)v3, cent);
      CG_Turret_UpdateCamoAndStickers((const LocalClientNum_t)v3, cent);
      v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1622, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( !CG_PlayerUsingScopedTurret((LocalClientNum_t)v3) || v9->renderingThirdPerson || v9->predictedPlayerState.viewlocked_entNum != p_nextState->number )
      {
        if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v3, cent, &scriptableIndex) )
        {
          ScriptableCl_UpdatePosition((const LocalClientNum_t)v3, scriptableIndex, cent);
          ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v3, scriptableIndex, p_nextState->number);
        }
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        XAnimBonePhysicsSetDObjMatrix(DObj_General, &outOrigin, &cent->pose.angles);
        Turret_PlaceSentry_Client((const LocalClientNum_t)v3, &cent->nextState, &outOrigin, &cent->pose.angles, -1.0);
        v22.v[0] = outOrigin.v[0];
        v22.v[1] = outOrigin.v[1];
        v22.v[2] = outOrigin.v[2] + 32.0;
        CG_SetPoseOrigin(&cent->pose, &outOrigin);
        renderFlags = CG_EntityMP_GetRenderFlagForRefEntity((LocalClientNum_t)v3, v9, cent, &cent->nextState.lerp.eFlags) | 0x1000;
        HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo(&result, v9, cent);
        *(__m256i *)&turretAnimIndexArrayOut.scrollRateX = *HudOutlineInfo;
        *(__m256i *)&v19.color = *(__m256i *)&turretAnimIndexArrayOut.scrollRateX;
        LODWORD(v18) = HudOutlineInfo[1].m256i_i32[0];
        Team = CgEntitySystemMP::CG_EntityMP_GetTeam((const LocalClientNum_t)v3, cent);
        if ( !CgEntitySystemMP::CG_EntityMP_IsOnSameTeam((const LocalClientNum_t)v3, cent) && CG_Utils_ShouldHighlightTurrets((const LocalClientNum_t)v3) && CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)v3) && !CG_Utils_StencilScriptControlled((const LocalClientNum_t)v3) )
        {
          v19.scopeStencil = FLOAT_1_0;
          v12 = CG_Utils_PlayerLockedOn((const LocalClientNum_t)v3, cent);
          useAlternateColor = v19.useAlternateColor;
          if ( v12 )
            useAlternateColor = 1;
          v19.useAlternateColor = useAlternateColor;
          *(__m256i *)&turretAnimIndexArrayOut.scrollRateX = *(__m256i *)&v19.color;
        }
        CG_Entity_DepthSortWorldTurretWithViewarms(v9, cent, &renderFlags);
        *(__m256i *)&v19.color = *(__m256i *)&turretAnimIndexArrayOut.scrollRateX;
        LODWORD(v19.characterEVOffset) = (_DWORD)v18;
        memset(&turretAnimIndexArrayOut, 0, sizeof(turretAnimIndexArrayOut));
        CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, DObj_General, &cent->pose, p_nextState->number, renderFlags, &turretAnimIndexArrayOut, &v19, &v22, 0.0, 0);
        CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)v3);
        CgCompassSystemMP::UpdateTurretInfo(CompassSystemMP, cent);
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 9u) || CG_LaserForceOnEnabled() )
          CG_LaserAdd((const LocalClientNum_t)v3, p_nextState->number, Team);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
CG_EntityMP_TurretBaseTraceDown
==============
*/
void CG_EntityMP_TurretBaseTraceDown(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent, vec3_t *outHitPos, vec3_t *outHitNormal)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  const XModel *Model; 
  const DObjAnimMat *BasePose; 
  scr_string_t BaseTagName; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  const dvar_t *v23; 
  float v24; 
  float v25; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t out; 
  vec3_t end; 
  tmat43_t<vec3_t> axis; 
  trace_t results; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 

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
    v35 = v5;
    v34 = v6;
    v33 = v7;
    v32 = v8;
    v16 = downTraceLen + upTraceLen;
    MatrixTransformVector43(&BasePose[inOutIndex[0]].trans, &axis, &out);
    end.v[0] = (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) * 0.0) + (float)((float)(upTraceLen * 0.0) + out.v[0]);
    end.v[2] = (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) * 1.0) + (float)((float)(upTraceLen * 1.0) + out.v[2]);
    out.v[0] = (float)(upTraceLen * 0.0) + out.v[0];
    out.v[1] = (float)(upTraceLen * 0.0) + out.v[1];
    out.v[2] = (float)(upTraceLen * 1.0) + out.v[2];
    end.v[1] = (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) * 0.0) + out.v[1];
    CG_EntityWorkers_AcquireReadLock_Physics(BASE);
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &out, &end, &bounds_origin, cent->nextState.number, 0, 8389521, 0, NULL, All);
    CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
    LODWORD(v17) = COERCE_UNSIGNED_INT(v16 * results.fraction) ^ _xmm;
    v18 = (float)(v17 * 0.0) + out.v[0];
    v19 = (float)(v17 * 0.0) + out.v[1];
    v20 = (float)(v17 * 1.0) + out.v[2];
    v21 = results.normal.v[0];
    v22 = results.normal.v[1];
    outHitPos->v[2] = v20;
    outHitPos->v[0] = v18;
    outHitPos->v[1] = v19;
    outHitNormal->v[0] = v21;
    outHitNormal->v[2] = results.normal.v[2];
    outHitNormal->v[1] = v22;
    v23 = DCONST_DVARBOOL_deploy_debug;
    end.v[0] = v18;
    end.v[1] = v19;
    end.v[2] = v20;
    if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
    {
      CG_DebugSphere(&out, 1.0, &colorYellow, 1, 0);
      CG_DebugSphere(outHitPos, 1.0, &colorRed, 0, 0);
      CG_DebugLine(&out, &end, &colorWhiteFaded, 1, 0);
      v24 = 5.0 * outHitNormal->v[1];
      out.v[0] = (float)(5.0 * outHitNormal->v[0]) + end.v[0];
      v25 = 5.0 * outHitNormal->v[2];
      out.v[1] = v24 + end.v[1];
      out.v[2] = v25 + end.v[2];
      CG_DebugLine(&out, &end, &colorCyan, 1, 0);
    }
  }
  else
  {
    *(_QWORD *)outHitPos->v = 0i64;
    outHitPos->v[2] = 0.0;
    *outHitNormal = identityMatrix33.m[2];
  }
}

/*
==============
CG_EntityMP_TurretFootTraceDown
==============
*/
bool CG_EntityMP_TurretFootTraceDown(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent, unsigned int legNdx, vec3_t *outHitPos, vec3_t *outHitNormal)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  const XModel *Model; 
  const DObjAnimMat *BasePose; 
  scr_string_t FootTagName; 
  int BoneIndexInternal_71; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  const dvar_t *v25; 
  float v26; 
  float v27; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t start; 
  vec3_t end; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  trace_t results; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 

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
    v38 = v6;
    v37 = v7;
    v36 = v8;
    v17 = downTraceLen_0 + upTraceLen_0;
    MatrixTransformVector43(&BasePose[inOutIndex[0]].trans, &axis, &out);
    start.v[0] = (float)(upTraceLen_0 * 0.0) + out.v[0];
    end.v[0] = (float)(COERCE_FLOAT(LODWORD(v17) ^ _xmm) * 0.0) + start.v[0];
    end.v[2] = (float)(COERCE_FLOAT(LODWORD(v17) ^ _xmm) * 1.0) + (float)((float)(upTraceLen_0 * 1.0) + out.v[2]);
    start.v[1] = (float)(upTraceLen_0 * 0.0) + out.v[1];
    start.v[2] = (float)(upTraceLen_0 * 1.0) + out.v[2];
    end.v[1] = (float)(COERCE_FLOAT(LODWORD(v17) ^ _xmm) * 0.0) + start.v[1];
    CG_EntityWorkers_AcquireReadLock_Physics(BASE);
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &start, &end, &bounds_origin, cent->nextState.number, 0, 8389521, 0, NULL, All);
    CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
    if ( results.fraction == 1.0 )
    {
      v18 = out.v[1];
      outHitPos->v[0] = out.v[0];
      outHitPos->v[2] = out.v[2];
      outHitPos->v[1] = v18;
      *outHitNormal = identityMatrix33.m[2];
    }
    else
    {
      LODWORD(v19) = COERCE_UNSIGNED_INT((float)(results.fraction * v17) + addedOffsetUp) ^ _xmm;
      v20 = (float)(v19 * 0.0) + start.v[1];
      v21 = (float)(v19 * 0.0) + start.v[0];
      v22 = (float)(v19 * 1.0) + start.v[2];
      v23 = results.normal.v[0];
      v24 = results.normal.v[1];
      outHitPos->v[2] = v22;
      outHitPos->v[0] = v21;
      outHitPos->v[1] = v20;
      outHitNormal->v[0] = v23;
      outHitNormal->v[2] = results.normal.v[2];
      end.v[0] = v21;
      end.v[1] = v20;
      end.v[2] = v22;
      outHitNormal->v[1] = v24;
    }
    v25 = DCONST_DVARBOOL_deploy_debug;
    if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.enabled )
    {
      CG_DebugSphere(&start, 1.0, &colorYellow, 1, 0);
      CG_DebugSphere(outHitPos, 1.0, &colorRed, 0, 0);
      CG_DebugLine(&start, &end, &colorWhiteFaded, 1, 0);
      v26 = 5.0 * outHitNormal->v[1];
      start.v[0] = (float)(5.0 * outHitNormal->v[0]) + end.v[0];
      v27 = 5.0 * outHitNormal->v[2];
      start.v[1] = v26 + end.v[1];
      start.v[2] = v27 + end.v[2];
      CG_DebugLine(&start, &end, &colorCyan, 1, 0);
    }
    LOBYTE(BoneIndexInternal_71) = 1;
  }
  else
  {
    *(_QWORD *)outHitPos->v = 0i64;
    outHitPos->v[2] = 0.0;
    *outHitNormal = identityMatrix33.m[2];
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
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const dvar_t *v22; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t out; 
  vec3_t outOrigin; 
  vec3_t center; 
  vec3_t end; 
  tmat43_t<vec3_t> axis; 
  Bounds bounds; 
  trace_t results; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 941, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (!cent || cent->pose.eType != 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 942, ASSERT_TYPE_ASSERT, "(cent && cent->pose.eType == ET_TURRET)", (const char *)&queryFormat, "cent && cent->pose.eType == ET_TURRET") )
    __debugbreak();
  DObjGetBounds(obj, &bounds);
  AnglesToAxis(&cent->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  axis.m[3] = outOrigin;
  if ( DObjGetBoneIndexInternal_71(obj, scr_const.tag_aim, inOutIndex, &modelIndex) )
  {
    Model = DObjGetModel(obj, 0);
    BasePose = XModelGetBasePose(Model);
    MatrixTransformVector43(&BasePose[inOutIndex[0]].trans, &axis, &out);
    v8 = outOrigin.v[1];
    v9 = out.v[2];
    v10 = axis.m[2].v[2];
    v11 = axis.m[2].v[1];
    v12 = axis.m[2].v[0];
    v13 = outOrigin.v[2];
    v14 = outOrigin.v[0];
    v15 = out.v[1];
    v16 = out.v[0];
  }
  else
  {
    v12 = axis.m[2].v[0];
    v14 = outOrigin.v[0];
    v11 = axis.m[2].v[1];
    v10 = axis.m[2].v[2];
    v8 = outOrigin.v[1];
    v13 = outOrigin.v[2];
    v16 = (float)(axis.m[2].v[0] * (float)(bounds.halfSize.v[2] * 0.75)) + outOrigin.v[0];
    v9 = (float)(axis.m[2].v[2] * (float)(bounds.halfSize.v[2] * 0.75)) + outOrigin.v[2];
    v15 = (float)(axis.m[2].v[1] * (float)(bounds.halfSize.v[2] * 0.75)) + outOrigin.v[1];
  }
  v17 = fsqrt((float)(bounds.halfSize.v[0] * bounds.halfSize.v[0]) + (float)(bounds.halfSize.v[1] * bounds.halfSize.v[1])) * 0.40000001;
  v18 = (float)(COERCE_FLOAT(LODWORD(v17) ^ _xmm) * axis.m[0].v[0]) + v16;
  v19 = (float)(COERCE_FLOAT(LODWORD(v17) ^ _xmm) * axis.m[0].v[1]) + v15;
  v20 = (float)(COERCE_FLOAT(LODWORD(v17) ^ _xmm) * axis.m[0].v[2]) + v9;
  v21 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v19 - v8) * v11) + (float)((float)(v18 - v14) * v12)) + (float)((float)(v20 - v13) * v10)) & _xmm) + DOWN_EXTRA_LEN;
  end.v[0] = (float)(v12 * COERCE_FLOAT(LODWORD(v21) ^ _xmm)) + v18;
  end.v[2] = (float)(v10 * COERCE_FLOAT(LODWORD(v21) ^ _xmm)) + v20;
  out.v[0] = v18;
  out.v[1] = v19;
  out.v[2] = v20;
  end.v[1] = (float)(v11 * COERCE_FLOAT(LODWORD(v21) ^ _xmm)) + v19;
  CG_EntityWorkers_AcquireReadLock_Physics(BASE);
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &out, &end, &bounds_origin, cent->nextState.number, 0, 8389521, 0, NULL, All);
  CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
  v22 = DCONST_DVARBOOL_deploy_debug;
  center.v[0] = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 * results.fraction) ^ _xmm) * 0.0) + out.v[0];
  center.v[1] = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 * results.fraction) ^ _xmm) * 0.0) + out.v[1];
  center.v[2] = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 * results.fraction) ^ _xmm) * 1.0) + out.v[2];
  if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    CG_DebugBox(&outOrigin, &bounds, cent->pose.angles.v[1], &colorYellow, 1, 0);
    CG_DebugCircle(&outOrigin, v17, &identityMatrix33.m[2], &colorCyan, 0, 0);
    CG_DebugSphere(&out, 1.5, &colorYellow, 1, 0);
    CG_DebugSphere(&center, 1.5, &colorRed, 1, 0);
    CG_DebugLine(&out, &end, &colorWhite, 1, 0);
  }
  return center.v[2];
}

/*
==============
CG_EntityMP_TurretPreControllers
==============
*/
void CG_EntityMP_TurretPreControllers(LocalClientNum_t localClientIndex, DObj *obj, centity_t *cent, bool entitySnapshotReset)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v9; 
  bool v10; 
  int turretAnimIndexArrayOut[4]; 
  unsigned int animIndex; 

  v4 = localClientIndex;
  if ( !DObjGetTree(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1126, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ))", (const char *)&queryFormat, "DObjGetTree( obj )") )
    __debugbreak();
  CG_Entity_TurretPreControllers((LocalClientNum_t)v4, obj, cent);
  cent->pose.turret.worldSpaceTransform = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v4], &cent->nextState);
  v9 = BG_WeaponDef(WeaponForEntity, 0);
  if ( DObjGetTree(obj) )
  {
    v10 = BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == cent->nextState.number;
    if ( v9->autoAdjust )
    {
      BG_TurretAnim_GetAnimIndices(obj, WeaponForEntity, turretAnimIndexArrayOut);
      if ( animIndex != -1 )
      {
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        if ( !entitySnapshotReset )
          CG_EntityMP_TurretXAnimNodeSetup((LocalClientNum_t)v4, obj, cent, v10);
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
  __int64 v4; 
  const dvar_t *v8; 
  __int64 v9; 
  unsigned int i; 
  float v11; 
  float v12; 
  float v13; 
  bool v14; 
  CgWeaponMap *v15; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v17; 
  cg_t *LocalClientGlobals; 
  __int64 v19; 
  float v20; 
  float v21; 
  scr_string_t FootTagName; 
  scr_string_t v23; 
  scr_string_t v24; 
  scr_string_t BaseTagName; 
  vec3_t outHitPos; 
  vec3_t outOrigin; 
  vec3_t v3; 
  vec3_t v29; 
  vec3_t v30; 
  vec3_t value; 
  vec3_t v32; 
  vec3_t v33; 

  v4 = localClientNum;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1042, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (!cent || cent->pose.eType != 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1043, ASSERT_TYPE_ASSERT, "(cent && cent->pose.eType == ET_TURRET)", (const char *)&queryFormat, "cent && cent->pose.eType == ET_TURRET") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_deploy_debug;
  if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = 0i64;
  if ( v8->current.enabled )
  {
    for ( i = 0; i < 3; ++i )
      CG_EntityMP_TurretFootTraceDown((LocalClientNum_t)v4, obj, cent, i, &outHitPos, &v3);
    CG_EntityMP_TurretBaseTraceDown((LocalClientNum_t)v4, obj, cent, &outHitPos, &v3);
    CG_EntityMP_TurretPlayerHeightTraceDown((LocalClientNum_t)v4, obj, cent);
  }
  CG_GetPoseOrigin(&cent->pose, &outHitPos);
  CG_GetPrevPoseOrigin(&cent->pose, &outOrigin);
  v11 = (float)((float)((float)(outOrigin.v[1] - outHitPos.v[1]) * (float)(outOrigin.v[1] - outHitPos.v[1])) + (float)((float)(outOrigin.v[0] - outHitPos.v[0]) * (float)(outOrigin.v[0] - outHitPos.v[0]))) + (float)((float)(outOrigin.v[2] - outHitPos.v[2]) * (float)(outOrigin.v[2] - outHitPos.v[2]));
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  v12 = cent->pose.angles.v[1];
  outHitPos.v[0] = cent->pose.angles.v[0];
  outHitPos.v[2] = cent->pose.angles.v[2];
  outHitPos.v[1] = v12;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 636, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  v13 = cent->pose.prevAngles.v[1];
  outOrigin.v[0] = cent->pose.prevAngles.v[0];
  outOrigin.v[2] = cent->pose.prevAngles.v[2];
  outOrigin.v[1] = v13;
  AnglesSubtract(&outHitPos, &outOrigin, &v3);
  v14 = v11 >= (float)(*(float *)&dword_147FAA064 * *(float *)&dword_147FAA064) || (float)((float)((float)(v3.v[0] * v3.v[0]) + (float)(v3.v[1] * v3.v[1])) + (float)(v3.v[2] * v3.v[2])) >= (float)(*(float *)&dword_147FAA068 * *(float *)&dword_147FAA068);
  if ( !isPlayerView && !cent->pose.turret.deployed || v14 )
  {
    cent->pose.turret.deployed = 1;
    if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v15 = CgWeaponMap::ms_instance[v4];
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1077, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    WeaponForEntity = BG_GetWeaponForEntity(v15, &cent->nextState);
    v17 = BG_WeaponDef(WeaponForEntity, 0);
    if ( (!v17 || !v17->autoAdjust) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1080, ASSERT_TYPE_ASSERT, "(weapDef && weapDef->autoAdjust)", (const char *)&queryFormat, "weapDef && weapDef->autoAdjust") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1084, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    cent->pose.turret.deployedTime = LocalClientGlobals->time;
    v29 = vec3_origin;
    do
    {
      CG_EntityMP_TurretFootTraceDown((LocalClientNum_t)v4, obj, cent, v9, &value + v9, &outHitPos);
      v19 = (int)v9;
      v9 = (unsigned int)(v9 + 1);
      v29.v[v19] = (float)((float)(0.0 * outHitPos.v[0]) + (float)(0.0 * outHitPos.v[1])) + (float)(1.0 * outHitPos.v[2]);
    }
    while ( (unsigned int)v9 < 3 );
    CG_EntityMP_TurretBaseTraceDown((LocalClientNum_t)v4, obj, cent, &v30, &outHitPos);
    v20 = (float)((float)(0.0 * outHitPos.v[0]) + (float)(0.0 * outHitPos.v[1])) + (float)(1.0 * outHitPos.v[2]);
    v21 = CG_EntityMP_TurretPlayerHeightTraceDown((LocalClientNum_t)v4, obj, cent);
    XAnimSetIntGameParameterByName(obj, scr_const.firetime, cent->pose.turret.deployedTime);
    XAnimSetFloatGameParameterByName(obj, scr_const.pivotheight, v21);
    FootTagName = XAnimTurret_GetFootTagName(0);
    XAnimSetVec3GameParameterByName(obj, FootTagName, &value);
    v23 = XAnimTurret_GetFootTagName(1u);
    XAnimSetVec3GameParameterByName(obj, v23, &v32);
    v24 = XAnimTurret_GetFootTagName(2u);
    XAnimSetVec3GameParameterByName(obj, v24, &v33);
    BaseTagName = XAnimTurret_GetBaseTagName();
    XAnimSetVec3GameParameterByName(obj, BaseTagName, &v30);
    XAnimSetVec3GameParameterByName(obj, scr_const.turret_foot_normals, &v29);
    XAnimSetFloatGameParameterByName(obj, scr_const.turret_base_normal, v20);
    XAnimTreeUpdateParameters(obj);
  }
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
  __int128 v4; 
  __int64 v6; 
  int v8; 
  centity_t *Entity; 
  __int32 v10; 
  unsigned int Instance; 
  unsigned int m_serialAndIndex; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const BoneOrientation *PhysicsPoseBoneOrientations; 
  float v21; 
  float v22; 
  float v23; 
  vec3_t *v24; 
  float v25; 
  float v26; 
  float v27; 
  int number; 
  cg_t *LocalClientGlobals; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned int outTotalNumMovers; 
  hknpBodyId result; 
  __int16 outMoverEntNums[2]; 
  float v36; 
  vec3_t *v37; 
  vec3_t moverOffset; 
  vec3_t outOrigina; 
  vec3_t position; 
  BoneOrientation outBoneOrientation; 
  vec4_t orientation; 
  __int128 v43; 

  v37 = outOrigin;
  v6 = ragdollHandle;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4345, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4346, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !(_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4347, ASSERT_TYPE_ASSERT, "( ragdollHandle ) != ( 0 )", "%s != %s\n\t%i, %i", "ragdollHandle", "RAGDOLL_INVALID", 0, 0i64) )
    __debugbreak();
  Ragdoll_ResetMoverOffset(v6);
  outTotalNumMovers = 0;
  Ragdoll_GetAssociatedMovers(v6, outMoverEntNums, &outTotalNumMovers);
  if ( outTotalNumMovers )
  {
    v8 = outMoverEntNums[0];
    Entity = CG_GetEntity(localClientNum, outMoverEntNums[0]);
    if ( (Entity->flags & 1) != 0 )
    {
      v10 = 3 * localClientNum + 3;
      Instance = CG_PhysicsObject_GetInstance((Physics_WorldId)v10, v8, localClientNum);
      if ( Instance != -1 )
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v10 > 7 )
        {
          LODWORD(v31) = 3 * localClientNum + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v31) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * localClientNum + 1) <= 5 )
        {
          LODWORD(v31) = 3 * localClientNum + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v31) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v10 <= 1 )
        {
          LODWORD(v31) = 3 * localClientNum + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v31) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v10, Instance, 0)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF )
        {
          v43 = v4;
          Physics_GetRigidBodyTransform((const Physics_WorldId)v10, m_serialAndIndex, &position, &orientation);
          if ( !(_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
            __debugbreak();
          if ( (unsigned int)(v6 - 1) >= 0x40 )
          {
            LODWORD(v31) = 64;
            LODWORD(v30) = v6 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          if ( &g_ragdollBodies[v6] == (Ragdoll *)14116 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4376, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
            __debugbreak();
          memset(&outBoneOrientation, 0, sizeof(outBoneOrientation));
          Ragdoll_GetLatestPhysicsPoseBoneOrientation(&g_ragdollBodies[v6 - 1], 0, &outBoneOrientation);
          v13 = outBoneOrientation.origin.v[0];
          v14 = outBoneOrientation.origin.v[1];
          v15 = outBoneOrientation.origin.v[2];
          CG_GetPoseOrigin(&Entity->pose, &outOrigina);
          v16 = position.v[0];
          v17 = position.v[1];
          v18 = position.v[2];
          v19 = (float)(v13 - position.v[0]) + outOrigina.v[0];
          v36 = (float)(v14 - position.v[1]) + outOrigina.v[1];
          *(float *)&result.m_serialAndIndex = (float)(v15 - position.v[2]) + outOrigina.v[2];
          PhysicsPoseBoneOrientations = Ragdoll_GetPhysicsPoseBoneOrientations(&g_ragdollBodies[v6 - 1]);
          if ( !PhysicsPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4397, ASSERT_TYPE_ASSERT, "(ragdollBoneOrientations)", (const char *)&queryFormat, "ragdollBoneOrientations") )
            __debugbreak();
          v21 = PhysicsPoseBoneOrientations->origin.v[0];
          v22 = PhysicsPoseBoneOrientations->origin.v[1];
          v23 = PhysicsPoseBoneOrientations->origin.v[2];
          moverOffset.v[0] = v19 - PhysicsPoseBoneOrientations->origin.v[0];
          moverOffset.v[2] = *(float *)&result.m_serialAndIndex - v23;
          moverOffset.v[1] = v36 - v22;
          Ragdoll_SetMoverOffset(v6, &moverOffset);
          v24 = v37;
          v25 = moverOffset.v[1];
          v37->v[0] = moverOffset.v[0] + v37->v[0];
          v26 = v25 + v24->v[1];
          v27 = moverOffset.v[2];
          v24->v[1] = v26;
          v24->v[2] = v27 + v24->v[2];
          CG_Entity_ResetSkeleton(localClientNum, cent->nextState.number);
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset, "ragdoll_debugRagdollMoverOffset") )
          {
            number = cent->nextState.number;
            LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
            LODWORD(v32) = v8;
            LODWORD(v31) = number;
            Com_Printf(20, "[%d] Mover offset [%6.2f %6.2f %6.2f] applied to corpse %d associated mover: %d. Mover Pos [%6.2f %6.2f %6.2f] Mover Rigid Body Pos [%6.2f %6.2f %6.2f] Ragdoll Root Bone (prev) [%6.2f %6.2f %6.2f] Ragdoll Root Bone (current) [%6.2f %6.2f %6.2f] \n", (unsigned int)LocalClientGlobals->time, moverOffset.v[0], moverOffset.v[1], moverOffset.v[2], v31, v32, outOrigina.v[0], outOrigina.v[1], outOrigina.v[2], v16, v17, v18, v21, v22, v23, v13, v14, v15);
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
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v12; 
  centity_t *Entity; 
  float v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  const char *v18; 
  float radarJammedDist; 
  CgCompassSystemMP *CompassSystemMP; 
  __int64 v21; 
  __int64 v22; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1201, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( ownerEntNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v22) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v21) = ownerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1203, ASSERT_TYPE_ASSERT, "(unsigned)( ownerEntNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "ownerEntNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, ownerEntNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1209, ASSERT_TYPE_ASSERT, "(ownerInfo)", (const char *)&queryFormat, "ownerInfo") )
    __debugbreak();
  v12 = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1212, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  if ( v12->infoValid && CharacterInfo->infoValid )
  {
    Entity = CG_GetEntity(localClientNum, ownerEntNum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 1218, ASSERT_TYPE_ASSERT, "(ownerEnt)", (const char *)&queryFormat, "ownerEnt") )
      __debugbreak();
    if ( Com_Teams_OnSameTeam(&LocalClientGlobals->predictedPlayerState, (const team_t)v12->team, &Entity->nextState, (const team_t)CharacterInfo->team) || LocalClientGlobals->predictedPlayerState.clientNum == ownerEntNum )
      goto LABEL_43;
    v14 = LocalClientGlobals->predictedPlayerState.origin.v[1] - origin->v[1];
    v15 = LocalClientGlobals->predictedPlayerState.origin.v[2] - origin->v[2];
    v16 = fsqrt((float)((float)(v14 * v14) + (float)((float)(LocalClientGlobals->predictedPlayerState.origin.v[0] - origin->v[0]) * (float)(LocalClientGlobals->predictedPlayerState.origin.v[0] - origin->v[0]))) + (float)(v15 * v15));
    switch ( jammingType )
    {
      case JAMMING_TYPE_LINEAR:
        radarJammedDist = LocalClientGlobals->radarJammedDist;
        if ( radarJammedDist < 0.0 || v16 < radarJammedDist )
          LocalClientGlobals->radarJammedDist = v16;
        goto LABEL_43;
      case JAMMING_TYPE_LITTLE:
        v17 = DVARFLT_scramblerJamDistLittle;
        if ( DVARFLT_scramblerJamDistLittle )
          goto LABEL_39;
        v18 = "scramblerJamDistLittle";
        break;
      case JAMMING_TYPE_MEDIUM:
        v17 = DVARFLT_scramblerJamDistMedium;
        if ( DVARFLT_scramblerJamDistMedium )
          goto LABEL_39;
        v18 = "scramblerJamDistMedium";
        break;
      case JAMMING_TYPE_LARGE:
        v17 = DVARFLT_scramblerJamDistLarge;
        if ( !DVARFLT_scramblerJamDistLarge )
        {
          v18 = "scramblerJamDistLarge";
          break;
        }
LABEL_39:
        Dvar_CheckFrontendServerThread(v17);
        LocalClientGlobals->rsdJamming = v16 < v17->current.value;
        goto LABEL_43;
      default:
        LocalClientGlobals->rsdJamming = 0;
LABEL_43:
        CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(localClientNum);
        CgCompassSystemMP::UpdateScrambler(CompassSystemMP, scramblerEntNum, ownerEntNum, origin, jammingType);
        return;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v18) )
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
  int v2; 
  LocalClientNum_t v4; 
  int v5; 
  float v6; 
  DObj *ClientDObj; 
  DObj *v8; 
  int v9; 
  __int64 v10; 
  const XModel *v11; 
  const char *name; 
  const char *EntityTypeName; 
  float m_mapEntryId; 
  float v15; 
  float v16; 
  cg_t *LocalClientGlobals; 
  const XModel *XModelFromIndex; 
  float v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v2 = 0;
  v4 = localClientNum;
  v5 = 0;
  v6 = FLOAT_1_0;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4861, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, v4);
  v8 = ClientDObj;
  if ( ClientDObj )
  {
    v9 = 0;
    if ( ClientDObj->numModels )
    {
      v10 = 0i64;
      do
      {
        v11 = v8->models[v10];
        if ( !v11 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4872, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
        }
        name = v11->name;
        if ( !v11->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4875, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
          __debugbreak();
        if ( Sys_IsMainThread() && (v11->flags & 0x8000) != 0 && !CL_TransientsMP_IsXModelLoaded(v11) )
        {
          EntityTypeName = BG_GetEntityTypeName((const entityType_s)cent->nextState.eType);
          LODWORD(v20) = cent->nextState.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4882, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_IsXModelLoaded( model ))", "%s\n\tEntity %d(%s) has model %s that is not loaded.", "CL_TransientsMP_IsXModelLoaded( model )", v20, EntityTypeName, name) )
            __debugbreak();
        }
        ++v9;
        ++v10;
      }
      while ( v9 < v8->numModels );
      v4 = localClientNum;
      v2 = 0;
      v5 = 0;
    }
    if ( cent->nextState.eType == ET_SCRIPTMOVER )
    {
      v2 = cent->nextState.lerp.u.anonymous.data[3];
      v5 = cent->nextState.lerp.u.anonymous.data[4];
      m_mapEntryId = (float)cent->nextState.lerp.u.player.accessoryWeaponHandle.m_mapEntryId;
      v15 = m_mapEntryId * 0.001;
      v6 = v15;
      if ( v15 < 0.0 || v15 > 8.0 || (v16 = (float)(unsigned int)(int)(float)(v15 * 1000.0), COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - (float)(v6 * 1000.0)) & _xmm) > 0.001) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 158, ASSERT_TYPE_ASSERT, "(BG_AnimTreeMP_ScriptModelAnimRateValid( animRateRaw ))", (const char *)&queryFormat, "BG_AnimTreeMP_ScriptModelAnimRateValid( animRateRaw )") )
          __debugbreak();
      }
    }
    if ( !CG_AnimTreeMP_DObjAnimInfoIsEqual(v4, cent->nextState.number, v2, v5, v6) )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(v4);
      XModelFromIndex = CG_EntityMP_GetXModelFromIndex(v4, cent->nextState.number);
      if ( LocalClientGlobals->entityLastXAnimIndex[cent->nextState.number] != v2 )
      {
        LODWORD(v21) = v2;
        LODWORD(v20) = LocalClientGlobals->entityLastXAnimIndex[cent->nextState.number];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4901, ASSERT_TYPE_ASSERT, "(cgameGlob->entityLastXAnimIndex[cent->nextState.number] == animIndex)", "%s\n\tLast set xanim index %i, current entity anim index %i for model[0] '%s' of type %u", "cgameGlob->entityLastXAnimIndex[cent->nextState.number] == animIndex", v20, v21, XModelFromIndex->name, cent->nextState.eType) )
          __debugbreak();
      }
      if ( LocalClientGlobals->entityLastXAnimTime[cent->nextState.number] != v5 )
      {
        LODWORD(v22) = cent->nextState.eType;
        LODWORD(v21) = v5;
        LODWORD(v20) = LocalClientGlobals->entityLastXAnimTime[cent->nextState.number];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4902, ASSERT_TYPE_ASSERT, "(cgameGlob->entityLastXAnimTime[cent->nextState.number] == animTime)", "%s\n\tLast set xanim time %i, current entity anim time %i for model[0] '%s' of type %u", "cgameGlob->entityLastXAnimTime[cent->nextState.number] == animTime", v20, v21, XModelFromIndex->name, v22) )
          __debugbreak();
      }
      v19 = LocalClientGlobals->entityLastXAnimRate[cent->nextState.number];
      if ( v19 != v6 )
      {
        LODWORD(v22) = cent->nextState.eType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4903, ASSERT_TYPE_ASSERT, "(cgameGlob->entityLastXAnimRate[cent->nextState.number] == animRateRaw)", "%s\n\tLast set xanim rate %f, current entity anim rate %f for model[0] '%s' of type %u, anim index %i, anim start: %i", "cgameGlob->entityLastXAnimRate[cent->nextState.number] == animRateRaw", v19, v6, XModelFromIndex->name, v22, v2, v5) )
          __debugbreak();
      }
      if ( !CG_AnimTreeMP_DObjAnimInfoIsEqual(v4, cent->nextState.number, v2, v5, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 4904, ASSERT_TYPE_ASSERT, "(CG_AnimTreeMP_DObjAnimInfoIsEqual( localClientNum, cent->nextState.number, animIndex, animTime, animRateRaw ))", (const char *)&queryFormat, "CG_AnimTreeMP_DObjAnimInfoIsEqual( localClientNum, cent->nextState.number, animIndex, animTime, animRateRaw )") )
        __debugbreak();
    }
  }
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
    outOrigin.v[2] = outOrigin.v[2] + 60.0;
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
  CgGlobalsMP *LocalClientGlobals; 
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
  __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  const DObj *v23; 
  char v24; 
  characterInfo_t *CharacterInfo; 
  double AnimationLodScaledDistance; 
  unsigned __int8 LodForDistance; 
  __int16 v28; 
  __int64 v29; 
  __int64 v30; 
  unsigned __int16 v31; 
  int v33; 
  __int16 v34; 
  __int16 v35; 
  __int16 v36; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_EntsMP_UpdatePlayerAnimationLods");
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(v1);
  v3 = DCONST_DVARINT_cg_playerAnimMaxLODCount0;
  if ( !DCONST_DVARINT_cg_playerAnimMaxLODCount0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimMaxLODCount0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  v34 = integer;
  v5 = DCONST_DVARINT_cg_playerAnimMaxLODCount1;
  if ( !DCONST_DVARINT_cg_playerAnimMaxLODCount1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimMaxLODCount1") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.integer;
  v35 = v6;
  v7 = DCONST_DVARINT_cg_playerAnimMaxLODCount2;
  if ( !DCONST_DVARINT_cg_playerAnimMaxLODCount2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimMaxLODCount2") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.integer;
  v36 = v8;
  if ( CL_IsRenderingSplitScreen() )
  {
    LocalClientActiveCount = CL_GetLocalClientActiveCount();
    v10 = truncate_cast<unsigned short,int>(LocalClientActiveCount);
    v34 = (unsigned __int16)integer / v10;
    v35 = (unsigned __int16)v6 / v10;
    v36 = (unsigned __int16)v8 / v10;
  }
  v11 = truncate_cast<unsigned short,unsigned int>(LocalClientGlobals->m_playerOrderDistanceSortedCount);
  v31 = v11;
  m_playerOrderDistanceSortedIndex = LocalClientGlobals->m_playerOrderDistanceSortedIndex;
  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3373, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  v13 = 0;
  if ( v11 )
  {
    v14 = 2533 * v1;
    v33 = 2533 * v1;
    v15 = "playerEntityIndex doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)";
    v16 = "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )";
    v17 = "%s\n\t( handle ) = %i";
    while ( 1 )
    {
      v18 = *m_playerOrderDistanceSortedIndex;
      if ( *m_playerOrderDistanceSortedIndex >= 0xF8u )
      {
        LODWORD(v30) = 248;
        LODWORD(v29) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3381, ASSERT_TYPE_ASSERT, "(unsigned)( playerEntityIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "playerEntityIndex doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
        v16 = "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )";
        v17 = "%s\n\t( handle ) = %i";
      }
      v19 = v18;
      v20 = v18;
      if ( v18 >= 0x9E5u )
      {
        LODWORD(v30) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v30) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v30) = 2;
        LODWORD(v29) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      v21 = v14 + v18;
      if ( v21 >= 0x13CA )
      {
        LODWORD(v30) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v30) )
          __debugbreak();
      }
      v22 = clientObjMap[v21];
      if ( !v22 )
        goto LABEL_73;
      if ( v22 >= (unsigned int)s_objCount )
      {
        LODWORD(v30) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v30) )
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
      if ( v13 >= v31 )
        goto LABEL_74;
    }
    if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x22u) )
    {
      if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
      {
        if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
          goto LABEL_53;
      }
    }
    if ( (_DWORD)v20 == LocalClientGlobals->predictedPlayerState.clientNum )
      v24 = 1;
    else
LABEL_53:
      v24 = 0;
    if ( ((unsigned __int8 (__fastcall *)(CgGlobalsMP *, const char *, const char *, const char *))LocalClientGlobals->IsMP)(LocalClientGlobals, v17, v15, v16) )
    {
      if ( (unsigned int)v20 >= LocalClientGlobals->m_characterInfoCount )
      {
        LODWORD(v30) = LocalClientGlobals->m_characterInfoCount;
        LODWORD(v29) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      CharacterInfo = &LocalClientGlobals->m_characterInfo[v20];
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v20);
    }
    if ( v24 || CharacterInfo->isScriptedSceneAnim )
    {
      XAnimSetInstantClientLod(v23, 0);
    }
    else
    {
      AnimationLodScaledDistance = CG_Entity_GetAnimationLodScaledDistance(LocalClientGlobals->m_playerUpdateAnimInfo[v19].eventLodData.distance);
      LodForDistance = XAnimGetLodForDistance(v23, *(float *)&AnimationLodScaledDistance);
      if ( bitarray_base<bitarray<224>>::testBit(LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks, v13) )
      {
        if ( LodForDistance < 3u )
        {
          while ( 1 )
          {
            v28 = *(&v34 + LodForDistance);
            if ( v28 )
              break;
            if ( ++LodForDistance >= 3u )
              goto LABEL_66;
          }
          *(&v34 + LodForDistance) = v28 - 1;
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
    v14 = v33;
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
  const dvar_t *v3; 
  unsigned int unsignedInt; 
  const dvar_t *v5; 
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned __int64 v12; 
  const dvar_t *v13; 
  __int64 v14; 
  const dvar_t *v15; 
  int integer; 
  int v17; 
  const dvar_t *v18; 
  bool v19; 
  unsigned int v20; 
  unsigned int *v21; 
  unsigned __int64 v22; 
  unsigned int v23; 
  const dvar_t *v24; 
  const cpose_t *PoseExtended; 
  const dvar_t *v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v37; 
  vec3_t outOrigin; 
  unsigned int _First[250]; 

  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_EntsMP_UpdatePlayerDObjPriorities");
  v3 = DCONST_DVARINT_cg_playerAnimUpdateFrameCount;
  if ( !DCONST_DVARINT_cg_playerAnimUpdateFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateFrameCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  unsignedInt = v3->current.unsignedInt;
  v34 = unsignedInt;
  v5 = DCONST_DVARINT_cg_playerAnimUpdateFillCount;
  if ( !DCONST_DVARINT_cg_playerAnimUpdateFillCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateFillCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v35 = v5->current.unsignedInt;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v7 = DCONST_DVARBOOL_cg_playerAnimUpdateCulling;
  if ( !DCONST_DVARBOOL_cg_playerAnimUpdateCulling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateCulling") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled || LocalClientGlobals->m_playerOrderDistanceSortedCount <= unsignedInt )
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
  v8 = DCONST_DVARINT_cg_playerAnimMaxBackgroundUpdateCount;
  if ( !DCONST_DVARINT_cg_playerAnimMaxBackgroundUpdateCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimMaxBackgroundUpdateCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v36 = v8->current.unsignedInt;
  v9 = 0i64;
  *(_QWORD *)LocalClientGlobals->m_playerUpdateAnimBits.array = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateAnimBits.array[2] = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateAnimBits.array[4] = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateAnimBits.array[6] = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateLRUAnimBits.array[1] = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateLRUAnimBits.array[3] = 0i64;
  *(_QWORD *)&LocalClientGlobals->m_playerUpdateLRUAnimBits.array[5] = 0i64;
  v10 = 0;
  v11 = 0;
  v32 = 0;
  if ( LocalClientGlobals->m_playerOrderDistanceSortedCount < unsignedInt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3476, ASSERT_TYPE_ASSERT, "( cgameGlob->m_playerOrderDistanceSortedCount ) >= ( DOBJ_UPDATE_EVERY_FRAME )", "%s >= %s\n\t%i, %i", "cgameGlob->m_playerOrderDistanceSortedCount", "DOBJ_UPDATE_EVERY_FRAME", LocalClientGlobals->m_playerOrderDistanceSortedCount, unsignedInt) )
    __debugbreak();
  if ( LocalClientGlobals->m_playerOrderDistanceSortedCount > 0xF8 )
  {
    LODWORD(v30) = 248;
    LODWORD(v29) = LocalClientGlobals->m_playerOrderDistanceSortedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3477, ASSERT_TYPE_ASSERT, "( cgameGlob->m_playerOrderDistanceSortedCount ) <= ( ( sizeof( *array_counter( animUpdateInfoCharacterIndex ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "cgameGlob->m_playerOrderDistanceSortedCount", "ARRAY_COUNT( animUpdateInfoCharacterIndex )", v29, v30) )
      __debugbreak();
  }
  v31 = 0;
  if ( !LocalClientGlobals->m_playerOrderDistanceSortedCount )
  {
    v20 = v35;
    goto LABEL_51;
  }
  do
  {
    v12 = LocalClientGlobals->m_playerOrderDistanceSortedIndex[v9];
    if ( (unsigned int)v12 >= 0xF8 )
    {
      LODWORD(v28) = 248;
      LODWORD(v27) = LocalClientGlobals->m_playerOrderDistanceSortedIndex[v9];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 3482, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "characterIndex doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    if ( CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_UPDATE_PLAYER_ANIMATION, &LocalClientGlobals->m_playerUpdateAnimInfo[v12].eventLodData) )
    {
      if ( v31 >= unsignedInt )
      {
        v13 = DCONST_DVARINT_cg_playerAnimUpdateMinAccumTime;
        if ( !DCONST_DVARINT_cg_playerAnimUpdateMinAccumTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateMinAccumTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        if ( LocalClientGlobals->m_playerUpdateAnimInfo[v12].accumulatedTime > v13->current.integer )
        {
          v14 = v10++;
LABEL_47:
          _First[v14] = v12;
        }
      }
      else
      {
        if ( (unsigned int)v12 >= 0xE0 )
        {
          LODWORD(v30) = 224;
          LODWORD(v29) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v29, v30) )
            __debugbreak();
        }
        LocalClientGlobals->m_playerUpdateAnimBits.array[v12 >> 5] |= 0x80000000 >> (v12 & 0x1F);
        CG_EntsMP_DrawDebugPlayerCulling(localClientNum, v12, &colorGreen, 1);
        ++v31;
      }
    }
    else if ( v11 < v36 )
    {
      v15 = DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeSeconds;
      if ( !DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateMaxAccumTimeSeconds") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      integer = v15->current.integer;
      v17 = 1000 * integer;
      v18 = DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeRangeSeconds;
      if ( !DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeRangeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateMaxAccumTimeRangeSeconds") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( 1000 * v18->current.integer < v17 )
        integer = v18->current.integer;
      v11 = v32;
      v19 = LocalClientGlobals->m_playerUpdateAnimInfo[v12].accumulatedTime <= v17 - 1000 * ((-211 * (unsigned __int16)v12) & 0x1FF) * integer / 512;
      unsignedInt = v34;
      if ( !v19 )
      {
        v14 = v10++;
        v11 = ++v32;
        goto LABEL_47;
      }
    }
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < LocalClientGlobals->m_playerOrderDistanceSortedCount );
  v20 = v35;
  if ( v10 > v35 )
    std::_Sort_unchecked<unsigned int *,CG_EntsMP_SortPlayerPrioritiesFunctor>(_First, &_First[v10], v10, (CG_EntsMP_SortPlayerPrioritiesFunctor)LocalClientGlobals);
LABEL_51:
  if ( v20 > v10 )
    v20 = v10;
  if ( v20 )
  {
    v21 = _First;
    v37 = v20;
    do
    {
      v22 = *v21;
      if ( (unsigned int)v22 >= 0xE0 )
      {
        LODWORD(v30) = 224;
        LODWORD(v29) = *v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v29, v30) )
          __debugbreak();
      }
      v23 = 0x80000000 >> (v22 & 0x1F);
      LocalClientGlobals->m_playerUpdateAnimBits.array[v22 >> 5] |= v23;
      v24 = DCONST_DVARBOOL_cg_playerAnimUpdateDebug;
      if ( !DCONST_DVARBOOL_cg_playerAnimUpdateDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      if ( v24->current.enabled )
      {
        PoseExtended = CG_GetPoseExtended(localClientNum, v22, 0);
        CG_GetPoseOrigin(PoseExtended, &outOrigin);
        outOrigin.v[2] = outOrigin.v[2] + 60.0;
        CL_AddDebugStar(&outOrigin, &colorYellow, 0, 1, 0);
      }
      v26 = DCONST_DVARINT_cg_playerAnimUpdateInstantBlendMinLODLevel;
      if ( !DCONST_DVARINT_cg_playerAnimUpdateInstantBlendMinLODLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimUpdateInstantBlendMinLODLevel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( (unsigned __int8)LocalClientGlobals->m_playerUpdateAnimInfo[v22].eventLodData.distanceLod >= v26->current.integer )
      {
        if ( (unsigned int)v22 >= 0xE0 )
        {
          LODWORD(v30) = 224;
          LODWORD(v29) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v29, v30) )
            __debugbreak();
        }
        LocalClientGlobals->m_playerUpdateLRUAnimBits.array[v22 >> 5] |= v23;
      }
      ++v21;
      --v37;
    }
    while ( v37 );
  }
LABEL_75:
  Sys_ProfEndNamedEvent();
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
  cg_t *LocalClientGlobals; 
  float *v4; 
  unsigned int refdefViewOrg_aab; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  unsigned __int8 v13; 
  int v15[3]; 
  __int64 v16; 

  v16 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v4 = (float *)&LocalClientGlobals->refdef.view.0;
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
  if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  v15[0] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
  v15[1] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
  v15[2] = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
  v6 = origin->v[0] - *(float *)v15;
  v7 = origin->v[1] - *(float *)&v15[1];
  v8 = origin->v[2] - *(float *)&v15[2];
  v9 = (float)((float)(v7 * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + (float)(v6 * LocalClientGlobals->refdef.view.axis.m[0].v[0])) + (float)(v8 * LocalClientGlobals->refdef.view.axis.m[0].v[2]);
  v10 = (float)((float)(v7 * LocalClientGlobals->refdef.view.axis.m[1].v[1]) + (float)(v6 * LocalClientGlobals->refdef.view.axis.m[1].v[0])) + (float)(v8 * LocalClientGlobals->refdef.view.axis.m[1].v[2]);
  v11 = (float)((float)(v7 * LocalClientGlobals->refdef.view.axis.m[2].v[1]) + (float)(v6 * LocalClientGlobals->refdef.view.axis.m[2].v[0])) + (float)(v8 * LocalClientGlobals->refdef.view.axis.m[2].v[2]);
  if ( v9 <= 0.0 )
    goto LABEL_17;
  if ( *v4 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2289, ASSERT_TYPE_ASSERT, "(cgameGlob->refdef.view.tanHalfFovX != 0.0f)", (const char *)&queryFormat, "cgameGlob->refdef.view.tanHalfFovX != 0.0f") )
    __debugbreak();
  v12 = 1.0 / v9;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 * v12) & _xmm) > *v4 )
    goto LABEL_17;
  if ( LocalClientGlobals->refdef.view.fov.tanHalfFovY == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_ents_mp.cpp", 2297, ASSERT_TYPE_ASSERT, "(cgameGlob->refdef.view.tanHalfFovY != 0.0f)", (const char *)&queryFormat, "cgameGlob->refdef.view.tanHalfFovY != 0.0f") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 * v12) & _xmm) > LocalClientGlobals->refdef.view.fov.tanHalfFovY )
LABEL_17:
    v13 = 0;
  else
    v13 = 1;
  memset(v15, 0, sizeof(v15));
  return v13;
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

