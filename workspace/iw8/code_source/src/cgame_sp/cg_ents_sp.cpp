/*
==============
CG_EntitySP_InterpolateEntityOrigin
==============
*/

void __fastcall CG_EntitySP_InterpolateEntityOrigin(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_EntitySP_InterpolateEntityOrigin@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_EntitySP_SaveEntities
==============
*/

void __fastcall CG_EntitySP_SaveEntities(MemoryFile *memFile)
{
  ?CG_EntitySP_SaveEntities@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CgEntitySystemSP::AddPacketFxEntity
==============
*/

void __fastcall CgEntitySystemSP::AddPacketFxEntity(CgEntitySystemSP *this, int entityIndex)
{
  ?AddPacketFxEntity@CgEntitySystemSP@@UEAAXH@Z(this, entityIndex);
}

/*
==============
CgEntitySystemSP::GetRenderFlagForRefEntity
==============
*/

unsigned int __fastcall CgEntitySystemSP::GetRenderFlagForRefEntity(CgEntitySystemSP *this, const entityState_t *es)
{
  return ?GetRenderFlagForRefEntity@CgEntitySystemSP@@UEBAIPEBUentityState_t@@@Z(this, es);
}

/*
==============
CgEntitySystemSP::AddPacketEntities
==============
*/

void __fastcall CgEntitySystemSP::AddPacketEntities(CgEntitySystemSP *this, const LocalClientNum_t localClientNum)
{
  ?AddPacketEntities@CgEntitySystemSP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_EntitySP_CalcLerpPositions
==============
*/

int __fastcall CG_EntitySP_CalcLerpPositions(LocalClientNum_t localClientNum, centity_t *cent)
{
  return ?CG_EntitySP_CalcLerpPositions@@YAHW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CgEntitySystemSP::ShouldDelayEntityPacketPostPS
==============
*/

PostPSDelayType __fastcall CgEntitySystemSP::ShouldDelayEntityPacketPostPS(CgEntitySystemSP *this, const cg_t *cgameGlob, const centity_t *cent)
{
  return ?ShouldDelayEntityPacketPostPS@CgEntitySystemSP@@UEAA?AW4PostPSDelayType@@PEBVcg_t@@PEBUcentity_t@@@Z(this, cgameGlob, cent);
}

/*
==============
CgEntitySystemSP::ProcessNoteTracks
==============
*/

void __fastcall CgEntitySystemSP::ProcessNoteTracks(CgEntitySystemSP *this, const unsigned int entityIndex, const XAnimNotifyHandle notifyHandle)
{
  ?ProcessNoteTracks@CgEntitySystemSP@@UEAAXIVXAnimNotifyHandle@@@Z(this, entityIndex, notifyHandle);
}

/*
==============
CG_EntitySP_GetRenderFlagForRefEntity
==============
*/

unsigned int __fastcall CG_EntitySP_GetRenderFlagForRefEntity(const cg_t *cgameGlob, const centity_t *cent, const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *r_eFlags)
{
  return ?CG_EntitySP_GetRenderFlagForRefEntity@@YAIPEBVcg_t@@PEBUcentity_t@@AEBV?$GameModeFlagContainer@W4EntityStateFlagsCommon@@W4EntityStateFlagsSP@@W4EntityStateFlagsMP@@$0CA@@@@Z(cgameGlob, cent, r_eFlags);
}

/*
==============
CgEntitySystemSP::IsMP
==============
*/

bool __fastcall CgEntitySystemSP::IsMP(CgEntitySystemSP *this)
{
  return ?IsMP@CgEntitySystemSP@@UEBA_NXZ(this);
}

/*
==============
CgEntitySystemSP::AddPacketEntity
==============
*/

void __fastcall CgEntitySystemSP::AddPacketEntity(CgEntitySystemSP *this, int entityIndex)
{
  ?AddPacketEntity@CgEntitySystemSP@@UEAAXH@Z(this, entityIndex);
}

/*
==============
CgEntitySystemSP::AddDeferredEntitiesToStreamingDistanceCache
==============
*/

void __fastcall CgEntitySystemSP::AddDeferredEntitiesToStreamingDistanceCache(CgEntitySystemSP *this, const LocalClientNum_t localClientNum)
{
  ?AddDeferredEntitiesToStreamingDistanceCache@CgEntitySystemSP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgEntitySystemSP::AddPostPlayerStatePacketEntities
==============
*/

void __fastcall CgEntitySystemSP::AddPostPlayerStatePacketEntities(CgEntitySystemSP *this, const LocalClientNum_t localClientNum)
{
  ?AddPostPlayerStatePacketEntities@CgEntitySystemSP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_EntitySP_CalcPlayerLerpPositions
==============
*/

void __fastcall CG_EntitySP_CalcPlayerLerpPositions(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_EntitySP_CalcPlayerLerpPositions@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_EntitySP_LoadEntities
==============
*/

void __fastcall CG_EntitySP_LoadEntities(SaveGame *save)
{
  ?CG_EntitySP_LoadEntities@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
CG_EntitySP_ProcessEntity
==============
*/

void __fastcall CG_EntitySP_ProcessEntity(centity_t *cent, bool isVisible, int hasMoved)
{
  ?CG_EntitySP_ProcessEntity@@YAXPEAUcentity_t@@_NH@Z(cent, isVisible, hasMoved);
}

/*
==============
CG_EntitySP_DObjUpdateInfo
==============
*/

XAnimNotifyHandle __fastcall CG_EntitySP_DObjUpdateInfo(const cg_t *cgameGlob, DObj *obj, bool notify)
{
  return ?CG_EntitySP_DObjUpdateInfo@@YA?AVXAnimNotifyHandle@@PEBVcg_t@@PEAUDObj@@_N@Z(cgameGlob, obj, notify);
}

/*
==============
CG_EntitySP_TurretPreControllers
==============
*/

void __fastcall CG_EntitySP_TurretPreControllers(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent)
{
  ?CG_EntitySP_TurretPreControllers@@YAXW4LocalClientNum_t@@PEAUDObj@@PEAUcentity_t@@@Z(localClientNum, obj, cent);
}

/*
==============
CgEntitySystemSP::AddDeferredEntitiesToStreamingDistanceCache
==============
*/
void CgEntitySystemSP::AddDeferredEntitiesToStreamingDistanceCache(CgEntitySystemSP *this, const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CgEntitySystemSP::AddPacketEntities
==============
*/
void CgEntitySystemSP::AddPacketEntities(CgEntitySystemSP *this, const LocalClientNum_t localClientNum)
{
  CgPredictedEntitySystem *System; 
  const CgSnapshotSP *NextSnap; 
  CgTargetAssist *Instance; 
  __int64 m_localClientNum; 
  CgVehicleSystem *v8; 
  __int64 v9; 
  cgs_t *v10; 
  bool entUpdateToggleContextKey; 
  CgAntiLag *v12; 
  int v13; 
  int v14; 
  unsigned __int16 *fxEntityNums; 
  unsigned int v16; 
  unsigned __int64 v17; 
  unsigned __int16 *soundInfoNums; 
  unsigned int v19; 
  clientSoundInfo_s *ClientSoundInfo; 
  __int64 v21; 
  unsigned __int64 v22; 
  __int64 v23; 
  CgEventSystemSP *v24; 
  const cg_t *v25; 
  unsigned __int16 *entityNums; 
  int v27; 
  __int64 v28; 
  CgEntitySystem *EntitySystem; 
  __int64 v30; 
  CgBallistics *v31; 
  __int64 v32; 
  __int64 v33; 
  cg_t *cgameGlob; 

  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "add packet ents");
  Profile_Begin(428);
  Profile_BeginCSV(3);
  Profile2_UpdateEntry(92);
  if ( ((unsigned __int8)&dword_14FDE8140 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8140) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8140);
  Profile2_UpdateEntry(93);
  if ( ((unsigned __int8)&dword_14FDE8144 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8144) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8144);
  System = CgPredictedEntitySystem::GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1165, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  CgPredictedEntitySystem::PreAddPacketEntitiesUpdate(System);
  NextSnap = CG_SnapshotSP_GetNextSnap((const LocalClientNum_t)this->m_localClientNum);
  if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1169, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  Instance = CgTargetAssist::GetInstance(localClientNum);
  BgTargetAssist::ClearTargets(Instance);
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v33) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v32) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v32, v33) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum] )
  {
    LODWORD(v33) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v33) )
      __debugbreak();
  }
  v8 = CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1178, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  CgVehicleSystem::UpdateVehicleDObjs(v8);
  CgVehicleSystem::UpdateVehicleRevPriority(v8);
  v9 = this->m_localClientNum;
  if ( (unsigned int)v9 >= cgs_t::ms_allocatedCount )
  {
    LODWORD(v33) = cgs_t::ms_allocatedCount;
    LODWORD(v32) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", v32, v33) )
      __debugbreak();
  }
  if ( !cgs_t::ms_cgsArray[v9] )
  {
    LODWORD(v33) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", v33) )
      __debugbreak();
  }
  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v33) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", v33) )
      __debugbreak();
  }
  v10 = cgs_t::ms_cgsArray[v9];
  entUpdateToggleContextKey = v10->entUpdateToggleContextKey;
  v10->entUpdateToggleContextKey = !entUpdateToggleContextKey;
  cgameGlob = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CgEntitySystem::ResetEntityDataCacheForFrame(this);
  v12 = CgAntiLag::GetInstance((const LocalClientNum_t)this->m_localClientNum);
  CgAntiLag::StartSceneArchiveClient(v12, cgameGlob->time);
  DObjResetClientNotifyList();
  R_BeginDelayedSceneModels();
  LUIOnEntityElementSpawner::ResetEntityFilters((const LocalClientNum_t)this->m_localClientNum);
  CgEntitySystem::AddPacketEntitiesFromWorkers(this, (const LocalClientNum_t)this->m_localClientNum, NextSnap, entUpdateToggleContextKey);
  CG_ActorCorpse_PhysicsOriginFrameToggle();
  ScriptableCl_CacheWorldStateSP((const LocalClientNum_t)this->m_localClientNum);
  DObjClearClientMissedNotifyList();
  Profile2_UpdateEntry(93);
  if ( ((unsigned __int64)&dword_14FDE8144 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8144) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8144);
  Profile2_UpdateEntry(97);
  if ( ((unsigned __int8)&dword_14FDE8154 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8154) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8154);
  v13 = 0;
  v14 = 0;
  if ( NextSnap->numFxEntities > 0 )
  {
    fxEntityNums = NextSnap->fxEntityNums;
    do
    {
      v16 = *fxEntityNums;
      if ( v16 >= 0x500 )
      {
        LODWORD(v33) = 1280;
        LODWORD(v32) = *fxEntityNums;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1227, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntNum ) < (unsigned)( 1280 )", "fxEntNum doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      CG_FXEntitiesAddPacketEnt(v16);
      ++v14;
      ++fxEntityNums;
    }
    while ( v14 < NextSnap->numFxEntities );
  }
  Profile2_UpdateEntry(97);
  if ( ((unsigned __int64)&dword_14FDE8154 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8154) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8154);
  Profile2_UpdateEntry(98);
  v17 = (unsigned __int64)&dword_14FDE8158 & 3;
  if ( ((unsigned __int8)&dword_14FDE8158 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8158) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8158);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1235, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  if ( NextSnap->numSounds > 0 )
  {
    soundInfoNums = NextSnap->soundInfoNums;
    do
    {
      v19 = *soundInfoNums;
      if ( v19 >= 0x400 )
      {
        LODWORD(v33) = 1024;
        LODWORD(v32) = *soundInfoNums;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1243, ASSERT_TYPE_ASSERT, "(unsigned)( soundNum ) < (unsigned)( 1024 )", "soundNum doesn't index MAX_SERVER_CULLED_SOUNDS\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      ClientSoundInfo = CL_GetClientSoundInfo(v19);
      v21 = this->m_localClientNum;
      if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
      {
        LODWORD(v33) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v33) )
          __debugbreak();
      }
      if ( (unsigned int)v21 >= CgSoundSystem::ms_allocatedCount )
      {
        LODWORD(v33) = CgSoundSystem::ms_allocatedCount;
        LODWORD(v32) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      if ( !CgSoundSystem::ms_soundSystemArray[v21] )
      {
        LODWORD(v33) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v33) )
          __debugbreak();
      }
      CgSoundSystem::ms_soundSystemArray[v21]->PlaySoundAliasByName(CgSoundSystem::ms_soundSystemArray[v21], ClientSoundInfo->soundNum + 3329, (const vec3_t *)ClientSoundInfo, ClientSoundInfo->loopSound);
      ++v13;
      ++soundInfoNums;
    }
    while ( v13 < NextSnap->numSounds );
    v17 = (unsigned __int64)&dword_14FDE8158 & 3;
  }
  Profile2_UpdateEntry(98);
  if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8158) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8158);
  Profile2_UpdateEntry(99);
  v22 = (unsigned __int64)dword_14FDE815C & 3;
  if ( ((unsigned __int8)dword_14FDE815C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", dword_14FDE815C) )
    __debugbreak();
  _InterlockedIncrement(dword_14FDE815C);
  CG_Event_Debug_FlipFrame(this->m_localClientNum);
  if ( g_processEvents )
  {
    v23 = this->m_localClientNum;
    if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF )
    {
      LODWORD(v33) = this->m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 235, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v33, 1, (unsigned __int8)CgEventSystem::ms_allocatedType) )
        __debugbreak();
    }
    if ( (unsigned int)v23 >= CgEventSystem::ms_allocatedCount )
    {
      LODWORD(v33) = CgEventSystem::ms_allocatedCount;
      LODWORD(v32) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    if ( !CgEventSystem::ms_eventSystemArray[v23] )
    {
      LODWORD(v33) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 237, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v33) )
        __debugbreak();
    }
    v24 = (CgEventSystemSP *)CgEventSystem::ms_eventSystemArray[v23];
    v25 = cgameGlob;
    if ( NextSnap->numEntities > 0 )
    {
      entityNums = NextSnap->entityNums;
      v27 = 0;
      do
      {
        v28 = *entityNums;
        EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)this->m_localClientNum);
        if ( (unsigned int)v28 >= 0x800 )
        {
          LODWORD(v33) = 2048;
          LODWORD(v32) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v32, v33) )
            __debugbreak();
        }
        v30 = (__int64)&EntitySystem->m_entities[v28];
        if ( CG_EntitySP_ShouldDelayEntityPacketPostPS(this->m_localClientNum, cgameGlob, (const centity_t *)v30) == PPSD_NOT_DELAYED )
        {
          if ( (*(_DWORD *)(v30 + 648) & 0x4000) != 0 )
          {
            if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1277, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
              __debugbreak();
          }
          else if ( *(__int16 *)(v30 + 408) < 29 )
          {
            CgEventSystem::CheckEntityEvents(v24, (centity_t *)v30, 2);
          }
          else
          {
            CgEventSystemSP::CheckEvents(v24, (centity_t *)v30);
          }
        }
        ++v27;
        ++entityNums;
      }
      while ( v27 < NextSnap->numEntities );
      v22 = (unsigned __int64)dword_14FDE815C & 3;
    }
  }
  else
  {
    v25 = cgameGlob;
  }
  v31 = CgBallistics::GetSystem(localClientNum);
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1298, ASSERT_TYPE_ASSERT, "(balisticsSystem)", (const char *)&queryFormat, "balisticsSystem") )
    __debugbreak();
  CgBallistics::StartWorkers(v31, 0);
  if ( !CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(v25) )
    CgSimBulletFirePellet_StartWorkers(this->m_localClientNum);
  Profile2_UpdateEntry(99);
  if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", dword_14FDE815C) )
    __debugbreak();
  _InterlockedDecrement(dword_14FDE815C);
  CG_PlayerState_OnEndAddPacketEntities(localClientNum);
  R_StartDelayedSceneModelWorker();
  ScriptableCl_ProcessErrors();
  Profile_EndCSV(3);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(92);
  if ( ((unsigned __int64)&dword_14FDE8140 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8140) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8140);
}

/*
==============
CgEntitySystemSP::AddPacketEntity
==============
*/
void CgEntitySystemSP::AddPacketEntity(CgEntitySystemSP *this, int entityIndex)
{
  CG_EntitySP_AddPacketEntity(this->m_localClientNum, entityIndex);
}

/*
==============
CgEntitySystemSP::AddPacketFxEntity
==============
*/
void CgEntitySystemSP::AddPacketFxEntity(CgEntitySystemSP *this, int entityIndex)
{
  ;
}

/*
==============
CgEntitySystemSP::AddPostPlayerStatePacketEntities
==============
*/
void CgEntitySystemSP::AddPostPlayerStatePacketEntities(CgEntitySystemSP *this, const LocalClientNum_t localClientNum)
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
CG_EntitySP_AddPacketEntity
==============
*/
void CG_EntitySP_AddPacketEntity(LocalClientNum_t localClientNum, int entnum)
{
  __int64 v3; 
  centity_t *Entity; 
  float v5; 
  float v6; 
  float v7; 
  CgEntitySystem *EntitySystem; 
  entityType_s eType; 
  int v10; 
  unsigned int v11; 
  const SndAliasList *EntityLoopSoundAlias; 
  CgCompassSystemSP *CompassSystemSP; 
  __int64 v14; 
  __int64 v15; 
  vec3_t v16; 
  vec3_t outOrigin; 
  __int64 v18; 

  v18 = -2i64;
  v3 = localClientNum;
  Entity = CG_GetEntity(localClientNum, entnum);
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  v5 = Entity->pose.angles.v[0];
  v6 = Entity->pose.angles.v[1];
  v7 = Entity->pose.angles.v[2];
  CGMovingPlatformAimAssist::AimAssistUpdateTarget((LocalClientNum_t)v3, Entity);
  CG_EntitySP_ProcessEntityDobjUpdate((LocalClientNum_t)v3, entnum);
  Profile2_UpdateEntry(94);
  if ( ((unsigned __int8)&dword_14FDE8148 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8148) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8148);
  if ( (Entity->flags & 0x4000) != 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 931, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
      __debugbreak();
  }
  else
  {
    CG_Entity_UpdatePreviousPosition(Entity);
    EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v3);
    if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 941, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
      __debugbreak();
    if ( CgEntitySystem::ShouldCalculateParentLinkPositions(EntitySystem, Entity) )
      CG_Entity_CalcParentLinkPositions((LocalClientNum_t)v3, entnum);
    else
      CG_EntitySP_CalcLerpPositions((LocalClientNum_t)v3, Entity);
  }
  Profile2_UpdateEntry(94);
  if ( ((unsigned __int64)&dword_14FDE8148 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8148) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8148);
  CG_GetPoseOrigin(&Entity->pose, &v16);
  if ( v16.v[0] != outOrigin.v[0] || v16.v[1] != outOrigin.v[1] || v16.v[2] != outOrigin.v[2] || v5 != Entity->pose.angles.v[0] || v6 != Entity->pose.angles.v[1] || v7 != Entity->pose.angles.v[2] )
    goto LABEL_29;
  eType = Entity->nextState.eType;
  if ( (unsigned __int16)(eType - 14) <= 1u || eType == ET_SCRIPTMOVER && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u) )
  {
    if ( (~((unsigned int)Entity->flags >> 13) & 1) == 0 )
    {
      v10 = 0;
      v11 = Entity->flags & 0xFFFFEFFF;
      goto LABEL_30;
    }
LABEL_29:
    v10 = 1;
    v11 = Entity->flags | 0x1000;
    goto LABEL_30;
  }
  v10 = 0;
  v11 = Entity->flags & 0xFFFFEFFF;
LABEL_30:
  Entity->flags = v11;
  Profile2_UpdateEntry(95);
  if ( ((unsigned __int8)&dword_14FDE814C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE814C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE814C);
  CG_EntitySP_UpdateEntityBounds((const LocalClientNum_t)v3, Entity, v10);
  Profile2_UpdateEntry(95);
  if ( ((unsigned __int64)&dword_14FDE814C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE814C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE814C);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 898, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType == ET_ACTOR )
    CG_ActorsSP_UpdateAnimationLod((LocalClientNum_t)v3, Entity);
  else
    CG_Entity_UpdateAnimationLod((LocalClientNum_t)v3, Entity->nextState.number);
  Profile2_UpdateEntry(96);
  if ( ((unsigned __int8)&dword_14FDE8150 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8150) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8150);
  EntityLoopSoundAlias = CG_Entity_GetEntityLoopSoundAlias((LocalClientNum_t)v3, Entity);
  if ( EntityLoopSoundAlias )
    CG_Entity_PlayEntityLoopSound((const LocalClientNum_t)v3, Entity, EntityLoopSoundAlias);
  if ( !CG_Entity_IsNoDraw((const LocalClientNum_t)v3, &Entity->nextState, NULL) )
  {
    CG_EntitySP_ProcessInternal(Entity, 1, v10);
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&Entity->nextState.lerp.eFlags, FOG_SCALE|AIM_ASSIST) )
    {
      CompassSystemSP = CgCompassSystemSP::GetCompassSystemSP((const LocalClientNum_t)v3);
      CgCompassSystemSP::UpdateActorInfo(CompassSystemSP, Entity->nextState.number);
    }
  }
  Profile2_UpdateEntry(96);
  if ( ((unsigned __int64)&dword_14FDE8150 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8150) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8150);
  if ( v10 && Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
    ScriptableCl_UpdateParentedTransforms((const LocalClientNum_t)v3, Entity);
  if ( (Entity->flags & 0x4000) == 0 )
  {
    if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 86, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tTrying to access the target assist system for localClientNum %d but the target assist system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::INSTANCE_TYPE", v3, 1, (unsigned __int8)CgTargetAssist::ms_allocatedType) )
      __debugbreak();
    if ( (unsigned int)v3 >= CgTargetAssist::ms_allocatedCount )
    {
      LODWORD(v15) = CgTargetAssist::ms_allocatedCount;
      LODWORD(v14) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( !CgTargetAssist::ms_instances[v3] )
    {
      LODWORD(v15) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 88, ASSERT_TYPE_ASSERT, "(ms_instances[localClientNum])", "%s\n\tTrying to access unallocated target assist system for localClientNum %d\n", "ms_instances[localClientNum]", v15) )
        __debugbreak();
    }
    CgTargetAssistSP::EvaluatePotentialTargetEntity((CgTargetAssistSP *)CgTargetAssist::ms_instances[v3], Entity);
  }
  CG_DrawDebug_DrawCharacterHitBox((LocalClientNum_t)v3, entnum);
  memset(&v16, 0, sizeof(v16));
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_EntitySP_CalcLerpPositions
==============
*/
__int64 CG_EntitySP_CalcLerpPositions(LocalClientNum_t localClientNum, centity_t *cent)
{
  unsigned __int8 v4; 
  trajectory_t_secure *p_pos; 
  float v6; 
  float v7; 
  float v8; 
  bool v9; 
  unsigned int v10; 
  const CG_PhysicsObject *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t *p_angles; 
  const cg_t *LocalClientGlobals; 
  float v18; 
  float v19; 
  float v20; 
  bool v21; 
  __int16 number; 
  __int64 v24; 
  vec3_t v25; 
  int v26[4]; 
  vec3_t outOrigin; 
  __int64 v28[8]; 

  v28[1] = -2i64;
  v4 = 0;
  p_pos = &cent->prevState.pos;
  if ( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    v6 = cent->pose.angles.v[0];
    v7 = cent->pose.angles.v[1];
    v8 = cent->pose.angles.v[2];
    if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1635, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    if ( p_pos->trType == TR_PHYSICS_CLIENT_AUTH )
    {
      v9 = cent->prevState.apos.trType == TR_PHYSICS_CLIENT_AUTH;
    }
    else
    {
      if ( p_pos->trType != TR_PHYSICS_SERVER_AUTH )
      {
LABEL_10:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1637, ASSERT_TYPE_ASSERT, "(( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH && cent->prevState.apos.trType == TR_PHYSICS_CLIENT_AUTH ) || ( cent->prevState.pos.trType == TR_PHYSICS_SERVER_AUTH && cent->prevState.apos.trType == TR_PHYSICS_SERVER_AUTH ))", (const char *)&queryFormat, "( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH && cent->prevState.apos.trType == TR_PHYSICS_CLIENT_AUTH ) || ( cent->prevState.pos.trType == TR_PHYSICS_SERVER_AUTH && cent->prevState.apos.trType == TR_PHYSICS_SERVER_AUTH )") )
          __debugbreak();
LABEL_12:
        v10 = 1;
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) || Com_GetClientDObj(cent->nextState.number, localClientNum) )
        {
          v11 = CG_PhysicsObject_Get(cent->nextState.number, localClientNum);
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1644, ASSERT_TYPE_ASSERT, "(entityPhysicsObject)", (const char *)&queryFormat, "entityPhysicsObject") )
            __debugbreak();
          if ( p_pos->trType == TR_PHYSICS_CLIENT_AUTH && v11->physicsInstances[3 * localClientNum + 2] != -1 )
            CG_Entity_DestroyPhysics(localClientNum, cent->nextState.number);
          CG_Entity_CalcPhysicsPositions(localClientNum, v11, cent);
        }
        CG_GetPoseOrigin(&cent->pose, &v25);
        if ( v25.v[0] == outOrigin.v[0] && v25.v[1] == outOrigin.v[1] && v25.v[2] == outOrigin.v[2] && v6 == cent->pose.angles.v[0] && v7 == cent->pose.angles.v[1] && v8 == cent->pose.angles.v[2] )
        {
LABEL_27:
          v10 = 0;
          goto LABEL_75;
        }
        goto LABEL_75;
      }
      v9 = cent->prevState.apos.trType == TR_PHYSICS_SERVER_AUTH;
    }
    if ( v9 )
      goto LABEL_12;
    goto LABEL_10;
  }
  if ( cent == (centity_t *)-292i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( (unsigned int)(p_pos->trType - 23) <= 5 )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    v12 = cent->pose.angles.v[0];
    v13 = cent->pose.angles.v[1];
    v14 = cent->pose.angles.v[2];
    CG_EntitySP_InterpolateEntityOrigin(localClientNum, cent);
    CG_EntitySP_CalcRagdollPositions(localClientNum, cent);
    CG_GetPoseOrigin(&cent->pose, &v25);
    if ( v25.v[0] != outOrigin.v[0] || v25.v[1] != outOrigin.v[1] || v25.v[2] != outOrigin.v[2] || v12 != cent->pose.angles.v[0] || v13 != cent->pose.angles.v[1] || v14 != cent->pose.angles.v[2] )
    {
      v10 = 1;
      goto LABEL_75;
    }
    goto LABEL_27;
  }
  CG_GetPoseOrigin(&cent->pose, &v25);
  if ( cent == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)cent + 523, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( cent->nextState.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
  {
    v28[0] = (__int64)v26;
    v15 = cent->nextState.lerp.pos.trBase.v[1];
    v26[2] = s_trbase_aab_Z ^ LODWORD(v15) ^ LODWORD(cent->nextState.lerp.pos.trBase.v[2]);
    v26[1] = s_trbase_aab_Y ^ LODWORD(cent->nextState.lerp.pos.trBase.v[0]) ^ LODWORD(v15);
    v26[0] = LODWORD(cent->nextState.lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
    memset(v28, 0, 8ui64);
    *(float *)v28 = *(float *)v26;
    if ( (v26[0] & 0x7F800000) == 2139095040 || (*(float *)v28 = *(float *)&v26[1], (v26[1] & 0x7F800000) == 2139095040) || (*(float *)v28 = *(float *)&v26[2], (v26[2] & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    v26[0] = LODWORD(cent->nextState.lerp.pos.trBase.v[0]);
    v26[1] = LODWORD(cent->nextState.lerp.pos.trBase.v[1]);
    v26[2] = LODWORD(cent->nextState.lerp.pos.trBase.v[2]);
  }
  if ( p_pos->trType || v25.v[0] != *(float *)v26 || v25.v[1] != *(float *)&v26[1] || v25.v[2] != *(float *)&v26[2] )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    CG_EntitySP_InterpolateEntityOrigin(localClientNum, cent);
    CG_GetPoseOrigin(&cent->pose, &v25);
    v4 = v25.v[0] != outOrigin.v[0] || v25.v[1] != outOrigin.v[1] || v25.v[2] != outOrigin.v[2];
  }
  p_angles = &cent->pose.angles;
  if ( cent->prevState.apos.trType || cent->nextState.lerp.apos.trBase.v[0] != p_angles->v[0] || cent->nextState.lerp.apos.trBase.v[1] != cent->pose.angles.v[1] || cent->nextState.lerp.apos.trBase.v[2] != cent->pose.angles.v[2] )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v18 = p_angles->v[0];
    v19 = cent->pose.angles.v[1];
    v20 = cent->pose.angles.v[2];
    CgTrajectory::InterpolateEntityAngles(LocalClientGlobals, cent);
    v21 = v18 != p_angles->v[0] || v19 != cent->pose.angles.v[1] || v20 != cent->pose.angles.v[2];
    v4 |= v21;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && cent->nextState.eType == ET_PLAYER )
  {
    number = cent->nextState.number;
    if ( number )
    {
      LODWORD(v24) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1902, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( 1 )", "cent->nextState.number doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", v24, 1) )
        __debugbreak();
    }
    p_angles->v[0] = 0.0;
    cent->pose.angles.v[2] = 0.0;
  }
  v10 = v4;
  memset(v26, 0, 0xCui64);
LABEL_75:
  memset(&v25, 0, sizeof(v25));
  memset(&outOrigin, 0, sizeof(outOrigin));
  return v10;
}

/*
==============
CG_EntitySP_CalcPlayerLerpPositions
==============
*/
void CG_EntitySP_CalcPlayerLerpPositions(LocalClientNum_t localClientNum, centity_t *cent)
{
  trajectory_t_secure *p_pos; 
  cg_t *LocalClientGlobals; 
  __int16 number; 
  CgHandler *Handler; 
  __int64 v8; 
  __int64 v9; 
  WorldUpReferenceFrame v10; 

  p_pos = &cent->prevState.pos;
  if ( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1914, ASSERT_TYPE_ASSERT, "(cent->prevState.pos.trType != TR_PHYSICS_CLIENT_AUTH)", (const char *)&queryFormat, "cent->prevState.pos.trType != TR_PHYSICS_CLIENT_AUTH") )
    __debugbreak();
  if ( p_pos->trType == TR_PHYSICS_SERVER_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1915, ASSERT_TYPE_ASSERT, "(cent->prevState.pos.trType != TR_PHYSICS_SERVER_AUTH)", (const char *)&queryFormat, "cent->prevState.pos.trType != TR_PHYSICS_SERVER_AUTH") )
    __debugbreak();
  if ( cent->prevState.apos.trType > (unsigned int)TR_INTERPOLATE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1916, ASSERT_TYPE_ASSERT, "((cent->prevState.apos.trType == TR_STATIONARY || cent->prevState.apos.trType == TR_INTERPOLATE))", "%s\n\tUnexpected apos.trType == %i", "(cent->prevState.apos.trType == TR_STATIONARY || cent->prevState.apos.trType == TR_INTERPOLATE)", cent->prevState.apos.trType) )
    __debugbreak();
  if ( !p_pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( (unsigned int)(p_pos->trType - 23) <= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1917, ASSERT_TYPE_ASSERT, "(!Com_IsRagdollTrajectory( &cent->prevState.pos ))", (const char *)&queryFormat, "!Com_IsRagdollTrajectory( &cent->prevState.pos )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_EntitySP_InterpolateEntityOrigin(localClientNum, cent);
  CgTrajectory::InterpolateEntityAngles(LocalClientGlobals, cent);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    number = cent->nextState.number;
    if ( number )
    {
      LODWORD(v9) = 1;
      LODWORD(v8) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1927, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( 1 )", "cent->nextState.number doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    cent->pose.angles.v[0] = 0.0;
    cent->pose.angles.v[2] = 0.0;
    Handler = CgHandler::getHandler(localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v10, &LocalClientGlobals->predictedPlayerState, Handler);
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v10, &cent->pose.angles);
  }
}

/*
==============
CG_EntitySP_CalcRagdollPositions
==============
*/
void CG_EntitySP_CalcRagdollPositions(LocalClientNum_t localClientNum, centity_t *cent)
{
  LocalClientNum_t OnlyLocalClientNum; 
  const vec3_t *p_impactVector; 
  bool immediatePlayerRagdoll; 
  int v7; 
  int RagdollForDObj; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1785, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent == (centity_t *)-292i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( (unsigned int)(cent->prevState.pos.trType - 23) > 5 )
  {
    if ( cent == (centity_t *)-328i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
      __debugbreak();
    if ( (unsigned int)(cent->prevState.apos.trType - 23) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1786, ASSERT_TYPE_ASSERT, "(Com_IsRagdollTrajectory( &cent->prevState.pos ) || Com_IsRagdollTrajectory( &cent->prevState.apos ))", (const char *)&queryFormat, "Com_IsRagdollTrajectory( &cent->prevState.pos ) || Com_IsRagdollTrajectory( &cent->prevState.apos )") )
      __debugbreak();
  }
  if ( cent->pose.ragdollHandle )
    goto LABEL_19;
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  CG_EntityWorkers_EnterCriticalSection_Ragdoll(BASE);
  if ( ((cent->nextState.eType - 19) & 0xFFFD) != 0 )
  {
    p_impactVector = &vec3_origin;
    immediatePlayerRagdoll = ((cent->nextState.lerp.pos.trType - 25) & 0xFFFFFFFD) == 0;
    v7 = 0;
  }
  else
  {
    v7 = cent->nextState.lerp.u.anonymous.data[2];
    p_impactVector = &cent->nextState.lerp.u.actor.impactVector;
    immediatePlayerRagdoll = 0;
  }
  RagdollForDObj = Ragdoll_CreateRagdollForDObj(OnlyLocalClientNum, cent->nextState.number, cent->nextState.number, v7, p_impactVector, immediatePlayerRagdoll);
  CG_EntityWorkers_LeaveCriticalSection_Ragdoll(BASE);
  cent->pose.ragdollHandle = RagdollForDObj;
  CG_Pose_InitializeRagdoll(&cent->pose, 0, 0);
  if ( cent->pose.ragdollHandle )
LABEL_19:
    CG_EntitySP_UpdateRagdollPose(localClientNum, cent);
}

/*
==============
CG_EntitySP_DObjUpdateInfo
==============
*/
const cg_t *CG_EntitySP_DObjUpdateInfo(const cg_t *cgameGlob, DObj *obj, DObj *notify, unsigned __int8 a4)
{
  float v4; 
  float v9; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1405, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( (notify->flags & 1) == 0 )
  {
    v9 = (float)(obj[77].hidePartBits.array[1] - obj[1228].skel.partBits.control.array[5]) * 0.001;
    if ( v9 > 0.0 )
    {
      if ( DObjHasProceduralBones(notify) )
        XAnimBonePhysicsUpdateTime(notify, v9);
      v4 = v9;
      XAnimUpdateClientLodBlending(notify, v9);
    }
  }
  DObjUpdateClientInfo((DObj *)cgameGlob, v4, (bool)notify, a4);
  return cgameGlob;
}

/*
==============
CG_EntitySP_GetRenderFlagForRefEntity
==============
*/
__int64 CG_EntitySP_GetRenderFlagForRefEntity(const cg_t *cgameGlob, const centity_t *cent, const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *r_eFlags)
{
  __int64 localClientNum; 
  CgEntitySystemSP *v6; 
  unsigned int RenderFlagForRefEntity; 
  LocalClientNum_t OnlyLocalClientNum; 
  int number; 
  LocalClientNum_t v10; 
  LocalClientNum_t v11; 
  unsigned int Instance; 
  LocalClientNum_t v13; 
  __int64 result; 
  __int64 v15; 
  __int64 v16; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1802, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1803, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1804, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 299, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", localClientNum, 1, (unsigned __int8)CgEntitySystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v16) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v15) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[localClientNum] )
  {
    LODWORD(v16) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 301, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v16) )
      __debugbreak();
  }
  v6 = (CgEntitySystemSP *)CgEntitySystem::ms_entitySystemArray[localClientNum];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1807, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  RenderFlagForRefEntity = CgEntitySystemSP::GetRenderFlagForRefEntity(v6, &cent->nextState);
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  number = cent->nextState.number;
  v10 = OnlyLocalClientNum;
  v11 = CL_GetOnlyLocalClientNum();
  Instance = CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * v11 + 3), number, v10);
  if ( Instance != -1 )
  {
    v13 = CL_GetOnlyLocalClientNum();
    if ( (int)Physics_GetNumRigidBodys((const Physics_WorldId)(3 * v13 + 3), Instance) > 1 )
      RenderFlagForRefEntity |= 0x1000u;
  }
  result = RenderFlagForRefEntity | 9;
  if ( (cent->flags & 0x8000) == 0 )
    return RenderFlagForRefEntity;
  return result;
}

/*
==============
CG_EntitySP_GetTeam
==============
*/
__int64 CG_EntitySP_GetTeam(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  __int16 otherEntityNum; 
  centity_t *Entity; 
  entityType_s eType; 
  const char *EntityTypeName; 
  const characterInfo_t *CharacterInfo; 
  centity_t *LinkToParent; 
  centity_t *v11; 
  CgVehicleSystemSP *VehicleSystemSP; 
  __int64 v13; 
  __int64 v14; 
  int team; 
  int actorIndex; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 268, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 269, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  otherEntityNum = cent->nextState.otherEntityNum;
  if ( otherEntityNum == 2047 )
  {
    if ( (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF) != 0 )
    {
      LinkToParent = CG_Entity_GetLinkToParent((LocalClientNum_t)v2, cent);
      v11 = LinkToParent;
      if ( LinkToParent )
      {
        if ( LinkToParent->nextState.eType == ET_VEHICLE )
        {
          VehicleSystemSP = CgVehicleSystemSP::GetVehicleSystemSP((const LocalClientNum_t)v2);
          return ((__int64 (__fastcall *)(CgVehicleSystemSP *, entityState_t *))VehicleSystemSP->GetTeam)(VehicleSystemSP, &v11->nextState);
        }
      }
    }
  }
  else
  {
    Entity = CG_GetEntity((const LocalClientNum_t)v2, otherEntityNum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 273, ASSERT_TYPE_ASSERT, "(otherEnt)", (const char *)&queryFormat, "otherEnt") )
      __debugbreak();
    if ( (Entity->flags & 1) != 0 )
    {
      eType = Entity->nextState.eType;
      if ( eType == ET_PLAYER )
      {
        if ( cent->nextState.otherEntityNum < 0 )
          goto LABEL_18;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( cent->nextState.otherEntityNum >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        {
LABEL_18:
          EntityTypeName = BG_GetEntityTypeName((const entityType_s)cent->nextState.eType);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 280, ASSERT_TYPE_ASSERT, "(cent->nextState.otherEntityNum >= 0 && cent->nextState.otherEntityNum < ComCharacterLimits::GetCharacterMaxCount())", "%s\n\tCG_EntitySP_GetTeam expected ent %d of type %s to have an owner to derive team from.", "cent->nextState.otherEntityNum >= 0 && cent->nextState.otherEntityNum < ComCharacterLimits::GetCharacterMaxCount()", cent->nextState.number, EntityTypeName) )
            __debugbreak();
        }
        if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
          __debugbreak();
        if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
          __debugbreak();
        if ( (_DWORD)v2 )
        {
          LODWORD(v13) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 69, ASSERT_TYPE_ASSERT, "( ( localClientNum == CL_GetOnlyLocalClientNum() ) )", "( localClientNum ) = %i", v13) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType != GLOB_TYPE_SP )
        {
          LODWORD(v14) = cg_t::ms_allocatedType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 70, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP)", "%s\n\tCgGlobalsSP::GetLocalClientGlobals: Trying to get single-player globals but the globals were not allocated as single-player. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP", v14) )
            __debugbreak();
        }
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)cg_t::ms_cgArray[v2], cent->nextState.otherEntityNum);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 285, ASSERT_TYPE_ASSERT, "(ownerInfo)", (const char *)&queryFormat, "ownerInfo") )
          __debugbreak();
        if ( CharacterInfo->infoValid )
          return (unsigned int)CharacterInfo->team;
      }
      else if ( eType == ET_ACTOR )
      {
        CG_GetClientActorIndexAndTeam(Entity->nextState.number, &actorIndex, &team);
        return (unsigned int)team;
      }
    }
  }
  return 0i64;
}

/*
==============
CG_EntitySP_InterpolateEntityOrigin
==============
*/
void CG_EntitySP_InterpolateEntityOrigin(LocalClientNum_t localClientNum, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  vec3_t inOrigin; 
  __int64 v9; 
  CgTrajectory v10; 
  vec3_t outPos; 
  vec3_t v12; 

  v9 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1606, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1607, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  _XMM6 = LODWORD(LocalClientGlobals->frameInterpolation);
  CgTrajectory::CgTrajectory(&v10, localClientNum, cent, &cent->prevState);
  BgTrajectory::EvaluatePosTrajectory(&v10, LocalClientGlobals->snap->serverTime, &outPos);
  v10.m_es = &cent->nextState.lerp;
  BgTrajectory::EvaluatePosTrajectory(&v10, LocalClientGlobals->nextSnap->serverTime, &v12);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS) )
  {
    _XMM0 = CG_IsEntityInterpolationValid(cent);
    __asm
    {
      vpcmpeqd xmm3, xmm0, xmm1
      vblendvps xmm6, xmm6, xmm2, xmm3
    }
  }
  inOrigin.v[0] = (float)((float)(v12.v[0] - outPos.v[0]) * *(float *)&_XMM6) + outPos.v[0];
  inOrigin.v[1] = (float)((float)(v12.v[1] - outPos.v[1]) * *(float *)&_XMM6) + outPos.v[1];
  inOrigin.v[2] = (float)((float)(v12.v[2] - outPos.v[2]) * *(float *)&_XMM6) + outPos.v[2];
  CG_SetPoseOrigin(&cent->pose, &inOrigin);
  memset(&inOrigin, 0, sizeof(inOrigin));
}

/*
==============
CG_EntitySP_Item
==============
*/

void __fastcall CG_EntitySP_Item(centity_t *cent, bool isVisible, double a3)
{
  __int64 OnlyLocalClientNum; 
  unsigned __int16 weaponIdx; 
  WeaponDef *v7; 
  const char *WeaponName; 
  const DObj *ClientDObj; 
  const cg_t *LocalClientGlobals; 
  unsigned int RenderFlagForRefEntity; 
  GfxSceneHudOutlineInfo *HudOutlineInfo; 
  unsigned int number; 
  __int64 v14; 
  __int64 v15; 
  vec3_t outOrigin; 
  __int64 v17; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v19; 
  Weapon r_weapon; 
  char output[1024]; 

  v17 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 184, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  if ( !CgWeaponMap::ms_instance[OnlyLocalClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  r_weapon = *BG_GetWeaponForEntity(CgWeaponMap::ms_instance[OnlyLocalClientNum], &cent->nextState);
  weaponIdx = LOWORD(a3);
  if ( (unsigned __int16)(LOWORD(a3) - 1) > 0x224u )
  {
    LODWORD(v14) = LOWORD(a3);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 193, ASSERT_TYPE_ASSERT, "( 1 ) <= ( weapon.weaponIdx ) && ( weapon.weaponIdx ) <= ( (550 - 1) )", "weapon.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", v14, 1, 549) )
      __debugbreak();
    weaponIdx = r_weapon.weaponIdx;
  }
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v15) = bg_lastParsedWeaponIndex;
    LODWORD(v14) = weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v14, v15) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v7 = bg_weaponDefs[weaponIdx];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 197, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v7->worldModel )
  {
    ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)OnlyLocalClientNum);
    if ( ClientDObj )
    {
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      outOrigin.v[2] = outOrigin.v[2] + 4.0;
      if ( isVisible )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)OnlyLocalClientNum);
        RenderFlagForRefEntity = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
        HudOutlineInfo = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
        number = cent->nextState.number;
        v19 = *HudOutlineInfo;
        memset(&result, 0, sizeof(result));
        CG_Entity_AddDObjToScene((const LocalClientNum_t)OnlyLocalClientNum, ClientDObj, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v19, &outOrigin, 0.0, 0);
      }
    }
  }
  else
  {
    WeaponName = BG_GetWeaponName(&r_weapon, output, 0x400u);
    Com_PrintError(17, "No XModel loaded for weap index %i, model (%s)", r_weapon.weaponIdx, WeaponName);
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_EntitySP_LoadEntities
==============
*/
void CG_EntitySP_LoadEntities(SaveGame *save)
{
  int i; 
  LocalClientNum_t OnlyLocalClientNum; 
  centity_t *Entity; 
  LocalClientNum_t v5; 
  int RagdollForDObj; 
  char *fmt; 
  __int64 immediatePlayerRagdoll; 
  __int64 v9; 
  char p; 
  int buffer; 

  SaveMemory_LoadRead(&buffer, 4, save);
  for ( i = buffer; buffer >= 0; i = buffer )
  {
    if ( i >= 2048 )
    {
      LODWORD(fmt) = 2048;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1443137E0, 853i64, (unsigned int)i, fmt);
      i = buffer;
    }
    if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 2152, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
      __debugbreak();
    if ( (unsigned int)i >= 0x800 )
    {
      LODWORD(v9) = 2048;
      LODWORD(immediatePlayerRagdoll) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 2153, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( (( 2048 ) + 0) )", "entnum doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", immediatePlayerRagdoll, v9) )
        __debugbreak();
    }
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    Entity = CG_GetEntity(OnlyLocalClientNum, i);
    SaveMemory_LoadRead(&Entity->previousEventSequence, 4, save);
    SaveMemory_LoadRead(Entity, 1, save);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1677, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    MemFile_ReadData(&save->memFile, 1ui64, &p);
    if ( p )
    {
      v5 = CL_GetOnlyLocalClientNum();
      RagdollForDObj = Ragdoll_CreateRagdollForDObj(v5, i, i, 0, &vec3_origin, 0);
      if ( !RagdollForDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1688, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      Entity->pose.ragdollHandle = RagdollForDObj;
      CG_Pose_ClearRagdollFlags(&Entity->pose);
      CG_Pose_InitializeRagdoll(&Entity->pose, 0, 0);
      Ragdoll_LoadRagdoll(RagdollForDObj, save);
    }
    SaveMemory_LoadRead(&buffer, 4, save);
  }
}

/*
==============
CG_EntitySP_Missile
==============
*/
void CG_EntitySP_Missile(centity_t *cent, bool isVisible)
{
  LocalClientNum_t OnlyLocalClientNum; 
  cg_t *LocalClientGlobals; 
  CgPredictedEntitySystem *System; 
  bool IsEmptyPredictionKey; 
  bool v7; 
  CgWeaponMap *Instance; 
  __int64 v9; 
  WeaponDef *v10; 
  CgMissile *v11; 
  CgSoundSystem *SoundSystem; 
  const SndAliasList *WeaponSoundWithFallback; 
  const DObj *ClientDObj; 
  int flags; 
  int v16; 
  __int64 v17; 
  int time; 
  FxCombinedDef v19; 
  __int64 v20; 
  int v21; 
  FxCombinedDef v22; 
  const SndAliasList *v23; 
  int v24; 
  FxCombinedDef v25; 
  int v26; 
  FxCombinedDef v27; 
  unsigned int RenderFlagForRefEntity; 
  GfxSceneHudOutlineInfo *HudOutlineInfo; 
  unsigned int number; 
  FxCombinedDef v31; 
  __int64 v32; 
  __int64 v33; 
  vec3_t outOrigin; 
  unsigned int scriptableIndex; 
  FXRegisteredDef fxDef; 
  vec3_t v38; 
  FXRegisteredDef v39; 
  __int64 v40; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v42; 
  Weapon r_weapon; 

  v40 = -2i64;
  fxDef.m_particleSystemDef = NULL;
  v39.m_particleSystemDef = NULL;
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
  System = CgPredictedEntitySystem::GetSystem(OnlyLocalClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 460, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  if ( !CgPredictedEntitySystem::HasAssociatedPredictedEntity(System, cent) )
  {
    IsEmptyPredictionKey = BgPredictedEntitySystem::IsEmptyPredictionKey((const unsigned int *)&cent->nextState.lerp.u);
    v7 = !IsEmptyPredictionKey;
    if ( !IsEmptyPredictionKey || cent->nextState.lerp.u.anonymous.data[2] <= LocalClientGlobals->time )
    {
      if ( (cent->nextState.lerp.u.anonymous.data[4] & 0x200) != 0 )
        cent->flags |= 0x200u;
      Instance = CgWeaponMap::GetInstance(OnlyLocalClientNum);
      r_weapon = *BG_GetWeaponForEntity(Instance, &cent->nextState);
      LOWORD(v9) = r_weapon.weaponIdx;
      if ( r_weapon.weaponIdx >= BG_GetNumWeapons() )
      {
        memset(&r_weapon, 0, 48);
        *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
        *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
        LOWORD(v9) = NULL_WEAPON.weaponIdx;
      }
      if ( (unsigned __int16)v9 > bg_lastParsedWeaponIndex )
      {
        LODWORD(v32) = (unsigned __int16)v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v32, bg_lastParsedWeaponIndex) )
          __debugbreak();
      }
      v9 = (unsigned __int16)v9;
      if ( !bg_weaponDefs[(unsigned __int16)v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      v10 = bg_weaponDefs[v9];
      if ( v10->missileConeSoundEnabled )
        CG_PlayMissileProjectedConeSound(OnlyLocalClientNum, cent);
      if ( v7 )
      {
        v11 = CgMissile::GetSystem(OnlyLocalClientNum);
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 499, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
          __debugbreak();
        CgMissile::BlendPredictedMissileTrajectoryForRemoteViewer(v11, cent, v10);
      }
      SoundSystem = CgSoundSystem::GetSoundSystem(OnlyLocalClientNum);
      WeaponSoundWithFallback = BG_GetWeaponSoundWithFallback(&r_weapon, 0, 40i64);
      if ( WeaponSoundWithFallback )
      {
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        CgSoundSystem::PlaySoundAlias(SoundSystem, cent->nextState.number, &outOrigin, WeaponSoundWithFallback);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      ClientDObj = Com_GetClientDObj(cent->nextState.number, OnlyLocalClientNum);
      if ( ClientDObj )
      {
        if ( ScriptableCl_GetIndexForEntity(OnlyLocalClientNum, cent, &scriptableIndex) )
        {
          ScriptableCl_UpdatePosition(OnlyLocalClientNum, scriptableIndex, cent);
          ScriptableCl_UpdateSharedInstance(OnlyLocalClientNum, scriptableIndex, cent->nextState.number);
        }
        flags = cent->flags;
        LOWORD(v16) = flags;
        if ( (flags & 2) == 0 && (flags & 0x200) == 0 )
        {
          LOWORD(v17) = r_weapon.weaponIdx;
          if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
          {
            LODWORD(v33) = bg_lastParsedWeaponIndex;
            LODWORD(v32) = r_weapon.weaponIdx;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v32, v33) )
              __debugbreak();
          }
          v17 = (unsigned __int16)v17;
          if ( !bg_weaponDefs[(unsigned __int16)v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
            __debugbreak();
          if ( bg_weaponDefs[v17]->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || (time = CG_GetLocalClientGlobals(OnlyLocalClientNum)->time, time - cent->nextState.lerp.u.anonymous.data[2] > BG_ProjIgnitionDelay(&r_weapon, 0)) )
          {
            v31.particleSystemDef = BG_ProjTrailEffect(&r_weapon, cent->nextState.inAltWeaponMode).particleSystemDef;
            fxDef.m_particleSystemDef = v31.particleSystemDef;
            cent->flags |= 2u;
            if ( v31.particleSystemDef )
              CG_PlayBoltedEffect(OnlyLocalClientNum, &fxDef, cent->nextState.number, scr_const.tag_fx);
            goto LABEL_43;
          }
          v16 = cent->flags;
        }
        if ( (v16 & 0x202) == 514 )
        {
          v19.particleSystemDef = BG_ProjTrailEffect(&r_weapon, 0).particleSystemDef;
          fxDef.m_particleSystemDef = v19.particleSystemDef;
          cent->flags &= ~2u;
          if ( v19.particleSystemDef )
            CG_StopBoltedEffects(OnlyLocalClientNum, &fxDef, cent->nextState.number, scr_const.tag_fx);
        }
LABEL_43:
        if ( (cent->flags & 0x800) == 0 )
        {
          LOWORD(v20) = r_weapon.weaponIdx;
          if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
          {
            LODWORD(v33) = bg_lastParsedWeaponIndex;
            LODWORD(v32) = r_weapon.weaponIdx;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v32, v33) )
              __debugbreak();
          }
          v20 = (unsigned __int16)v20;
          if ( !bg_weaponDefs[(unsigned __int16)v20] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
            __debugbreak();
          if ( bg_weaponDefs[v20]->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || (v21 = CG_GetLocalClientGlobals(OnlyLocalClientNum)->time, v21 - cent->nextState.lerp.u.anonymous.data[2] > BG_ProjIgnitionDelay(&r_weapon, 0)) )
          {
            v22.particleSystemDef = BG_ProjIgnitionEffect(&r_weapon, 0).particleSystemDef;
            v39.m_particleSystemDef = v22.particleSystemDef;
            cent->flags |= 0x800u;
            if ( v22.particleSystemDef )
              CG_PlayBoltedEffect(OnlyLocalClientNum, &v39, cent->nextState.number, scr_const.tag_fx);
            v23 = BG_ProjIgnitionSound(&r_weapon, 0);
            if ( v23 )
            {
              CG_GetPoseOrigin(&cent->pose, &outOrigin);
              CgSoundSystem::PlaySoundAlias(SoundSystem, cent->nextState.number, &outOrigin, v23);
              memset(&outOrigin, 0, sizeof(outOrigin));
            }
          }
        }
        v24 = cent->flags;
        if ( (v24 & 0x400) == 0 )
        {
          cent->flags = v24 | 0x400;
          v25.particleSystemDef = BG_ProjBeaconEffect(&r_weapon, 0).particleSystemDef;
          if ( v25.particleSystemDef )
          {
            *(FxCombinedDef *)outOrigin.v = v25;
            CG_PlayBoltedEffect(OnlyLocalClientNum, (const FXRegisteredDef *)&outOrigin, cent->nextState.number, scr_const.tag_fx);
          }
        }
        v26 = cent->flags;
        if ( (v26 & 0x40000) == 0 )
        {
          cent->flags = v26 | 0x40000;
          v27.particleSystemDef = BG_ProjBodyEffect(&r_weapon, 0).particleSystemDef;
          if ( v27.particleSystemDef )
          {
            *(FxCombinedDef *)outOrigin.v = v27;
            CG_PlayBoltedEffect(OnlyLocalClientNum, (const FXRegisteredDef *)&outOrigin, cent->nextState.number, scr_const.tag_fx);
          }
        }
        CG_GetPoseOrigin(&cent->pose, &v38);
        v38.v[2] = v38.v[2] + 4.0;
        if ( isVisible )
        {
          RenderFlagForRefEntity = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
          HudOutlineInfo = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
          number = cent->nextState.number;
          v42 = *HudOutlineInfo;
          memset(&result, 0, sizeof(result));
          CG_Entity_AddDObjToScene(OnlyLocalClientNum, ClientDObj, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v42, &v38, 0.0, 0);
        }
        CG_AddHudGrenade(LocalClientGlobals, cent);
        CG_GameInterface_EntitySP_Missile(cent, isVisible);
      }
    }
  }
  memset(&v38, 0, sizeof(v38));
}

/*
==============
CG_EntitySP_PrimaryLight
==============
*/
void CG_EntitySP_PrimaryLight(centity_t *cent)
{
  __int128 xmm7_0; 
  LocalClientNum_t OnlyLocalClientNum; 
  cg_t *LocalClientGlobals; 
  unsigned __int64 v5; 
  __int64 v6; 
  GfxLight *primaryLights; 
  ComPrimaryLight *v8; 
  unsigned __int64 v9; 
  float frameInterpolation; 
  float v11; 
  float *v; 
  float *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float cosHalfFovOuter; 
  float cosHalfFovInner; 
  __int64 v22; 
  __int64 v23; 
  unsigned int primaryLightCount; 
  cg_t *v25; 
  tmat33_t<vec3_t> axis; 
  float v1[4]; 
  LerpEntityStatePrimaryLightUnpacked out; 
  LerpEntityStatePrimaryLightUnpacked v29; 
  __int128 v30; 

  if ( cent->nextState.eType != ET_PRIMARY_LIGHT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1536, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PRIMARY_LIGHT)", (const char *)&queryFormat, "cent->nextState.eType == ET_PRIMARY_LIGHT") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1537, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
  v5 = comWorld.firstScriptablePrimaryLight + cent->nextState.staticState.general.xmodel;
  v25 = LocalClientGlobals;
  if ( ((int)v5 < (int)comWorld.firstScriptablePrimaryLight || (int)v5 >= (int)comWorld.primaryLightCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 106, ASSERT_TYPE_ASSERT, "(primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount ))", (const char *)&queryFormat, "primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount )") )
    __debugbreak();
  if ( (unsigned int)v5 >= rgp.world->primaryLightCount )
  {
    primaryLightCount = rgp.world->primaryLightCount;
    LODWORD(v22) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1546, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( rgp.world->primaryLightCount )", "primaryLightIndex doesn't index rgp.world->primaryLightCount\n\t%i not in [0, %i)", v22, primaryLightCount) )
      __debugbreak();
  }
  v6 = (int)v5;
  primaryLights = rgp.world->primaryLights;
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  if ( (unsigned int)v5 >= comWorld.primaryLightCount )
  {
    LODWORD(v23) = comWorld.primaryLightCount;
    LODWORD(v22) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  v8 = comWorld.primaryLights;
  v9 = v5;
  if ( comWorld.primaryLights[v9].type == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1549, ASSERT_TYPE_ASSERT, "(refLight->type != 1)", (const char *)&queryFormat, "refLight->type != GFX_LIGHT_TYPE_DIR") )
    __debugbreak();
  if ( (primaryLights[v6].flags & 0x40) == 0 )
  {
    v30 = xmm7_0;
    LerpEntityStatePrimaryLightUnpack((const LerpEntityStatePrimaryLightPacked *)&cent->prevState.u, &out);
    LerpEntityStatePrimaryLightUnpack((const LerpEntityStatePrimaryLightPacked *)&cent->nextState.lerp.u, &v29);
    frameInterpolation = LocalClientGlobals->frameInterpolation;
    primaryLights[v6].colorLinearSrgb.v[0] = (float)((float)(v29.colorLinearSrgb.v[0] - out.colorLinearSrgb.v[0]) * frameInterpolation) + out.colorLinearSrgb.v[0];
    primaryLights[v6].colorLinearSrgb.v[1] = (float)((float)(v29.colorLinearSrgb.v[1] - out.colorLinearSrgb.v[1]) * frameInterpolation) + out.colorLinearSrgb.v[1];
    primaryLights[v6].colorLinearSrgb.v[2] = (float)((float)(v29.colorLinearSrgb.v[2] - out.colorLinearSrgb.v[2]) * frameInterpolation) + out.colorLinearSrgb.v[2];
    primaryLights[v6].intensity = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * out.intensity) + (float)(LocalClientGlobals->frameInterpolation * v29.intensity);
    primaryLights[v6].uvIntensity = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * out.uvIntensity) + (float)(LocalClientGlobals->frameInterpolation * v29.uvIntensity);
    if ( v8[v9].rotationLimit < 1.0 )
    {
      AnglesToAxis(&cent->pose.angles, &axis);
      LODWORD(v11) = LODWORD(axis.m[0].v[1]) ^ _xmm;
      primaryLights[v6].dir.v[0] = COERCE_FLOAT(LODWORD(axis.m[0].v[0]) ^ _xmm);
      v = primaryLights[v6].bulbLength.v;
      v13 = v8[v9].bulbLength.v;
      primaryLights[v6].dir.v[2] = COERCE_FLOAT(LODWORD(axis.m[0].v[2]) ^ _xmm);
      primaryLights[v6].dir.v[1] = v11;
      if ( v13 == v && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v14 = axis.m[1].v[1];
      v15 = axis.m[0].v[1];
      *v = (float)((float)(axis.m[1].v[0] * v8[v9].bulbLength.v[1]) + (float)(axis.m[0].v[0] * v8[v9].bulbLength.v[0])) + (float)(axis.m[2].v[0] * v8[v9].bulbLength.v[2]);
      v16 = v14 * v8[v9].bulbLength.v[1];
      v17 = axis.m[1].v[2];
      v18 = (float)(v16 + (float)(v15 * v8[v9].bulbLength.v[0])) + (float)(axis.m[2].v[1] * v8[v9].bulbLength.v[2]);
      v19 = axis.m[0].v[2];
      primaryLights[v6].bulbLength.v[1] = v18;
      primaryLights[v6].bulbLength.v[2] = (float)((float)(v17 * v8[v9].bulbLength.v[1]) + (float)(v19 * *v13)) + (float)(axis.m[2].v[2] * v8[v9].bulbLength.v[2]);
      v1[0] = 0.0;
      v1[1] = 0.0;
      v1[2] = 0.0;
      if ( VecNCompareCustomEpsilon(primaryLights[v6].bulbLength.v, v1, 0.001, 3) )
      {
        *v = 0.0039215689;
        primaryLights[v6].bulbLength.v[1] = 0.0039215689;
        primaryLights[v6].bulbLength.v[2] = 0.0039215689;
      }
      LocalClientGlobals = v25;
    }
    if ( v8[v9].translationLimit > 0.0 && (CG_GetPoseOrigin(&cent->pose, &primaryLights[v6].origin), v8[v9].translationLimit > 0.0) || v8[v9].rotationLimit < 1.0 )
    {
      primaryLights[v6].radius = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * out.radius) + (float)(LocalClientGlobals->frameInterpolation * v29.radius);
      cosHalfFovOuter = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * out.cosHalfFovOuter) + (float)(LocalClientGlobals->frameInterpolation * v29.cosHalfFovOuter);
      primaryLights[v6].cosHalfFovOuter = cosHalfFovOuter;
      primaryLights[v6].cosHalfFovInner = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * out.cosHalfFovInner) + (float)(LocalClientGlobals->frameInterpolation * v29.cosHalfFovInner);
    }
    else
    {
      cosHalfFovOuter = primaryLights[v6].cosHalfFovOuter;
    }
    if ( cosHalfFovOuter <= 0.0 || (cosHalfFovInner = primaryLights[v6].cosHalfFovInner, cosHalfFovOuter >= cosHalfFovInner) || cosHalfFovInner > 1.0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1593, ASSERT_TYPE_ASSERT, "(0.0f < light->cosHalfFovOuter && light->cosHalfFovOuter < light->cosHalfFovInner && light->cosHalfFovInner <= 1.0f)", "%s\n\t%g, %g", "0.0f < light->cosHalfFovOuter && light->cosHalfFovOuter < light->cosHalfFovInner && light->cosHalfFovInner <= 1.0f", cosHalfFovOuter, primaryLights[v6].cosHalfFovInner) )
        __debugbreak();
    }
  }
}

/*
==============
CG_EntitySP_ProcessEntity
==============
*/

void __fastcall CG_EntitySP_ProcessEntity(centity_t *cent, bool isVisible, int hasMoved)
{
  CG_EntitySP_ProcessInternal(cent, isVisible, hasMoved);
}

/*
==============
CG_EntitySP_ProcessEntityDobjUpdate
==============
*/
void CG_EntitySP_ProcessEntityDobjUpdate(LocalClientNum_t localClientNum, int entnum)
{
  float v2; 
  DObj *ClientDObj; 
  cg_t *LocalClientGlobals; 
  bool v7; 
  cg_t *v8; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  bool v12; 
  float v13; 
  float v14; 
  XAnimNotifyHandle v15; 
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 ClientMissedNotifyList; 
  const XAnimNotify *ClientNotifyFirst; 
  bool v19; 
  centity_t *Entity; 
  bool v21; 
  __int64 v22; 
  __int64 v23; 
  const XAnimMissedNotify *v24; 
  const char *v25; 
  const char *v26; 
  unsigned __int16 v27; 
  const XAnimMissedNotify *v28; 

  ClientDObj = Com_GetClientDObj(entnum, localClientNum);
  if ( ClientDObj )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v8 = LocalClientGlobals;
    if ( LocalClientGlobals->renderingThirdPerson || (p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState, Instance = CgWeaponMap::GetInstance(localClientNum), IsThirdPersonMode = BG_IsThirdPersonMode(Instance, p_predictedPlayerState)) )
      IsThirdPersonMode = 1;
    v12 = v8->predictedPlayerState.clientNum != entnum || IsThirdPersonMode;
    if ( (ClientDObj->flags & 1) == 0 )
    {
      v13 = (float)(v8->frametime - v8->animFrametime);
      v14 = v13 * 0.001;
      if ( (float)(v13 * 0.001) > 0.0 )
      {
        if ( DObjHasProceduralBones(ClientDObj) )
          XAnimBonePhysicsUpdateTime(ClientDObj, v14);
        v2 = v13 * 0.001;
        XAnimUpdateClientLodBlending(ClientDObj, v14);
      }
    }
    DObjUpdateClientInfo((DObj *)&v27, v2, v7, v12);
    v15.m_notifyIndex = v27;
    if ( v27 != 0xFFFF )
    {
      OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
      ClientMissedNotifyList = DObjGetClientMissedNotifyList(&v28);
      ClientNotifyFirst = DObjGetClientNotifyFirst(v15);
      if ( ClientNotifyFirst || (_DWORD)ClientMissedNotifyList )
      {
        v19 = ScriptableCl_IsScriptableEntityByNum(OnlyLocalClientNum, entnum) != 0;
        Entity = CG_GetEntity(OnlyLocalClientNum, entnum);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 2084, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        v21 = CG_Pose_IsRagdoll(&Entity->pose) || Com_IsRagdollTrajectory(&Entity->nextState.lerp.pos);
        v22 = ClientMissedNotifyList;
        if ( (int)ClientMissedNotifyList > 0 )
        {
          v23 = 0i64;
          do
          {
            v24 = &v28[v23];
            if ( v28[v23].entityNumber == entnum )
            {
              if ( v19 )
              {
                v25 = SL_ConvertToString(v24->notify.noteName);
                ScriptableCl_AnimNotetrackEvent(OnlyLocalClientNum, entnum, v25);
              }
              if ( v21 )
                CG_Entity_ProcessRagdollAnimNotify(OnlyLocalClientNum, entnum, &v24->notify);
            }
            ++v23;
            --v22;
          }
          while ( v22 );
        }
        for ( ; ClientNotifyFirst; ClientNotifyFirst = DObjGetClientNotifyNext(ClientNotifyFirst) )
        {
          if ( v19 )
          {
            v26 = SL_ConvertToString(ClientNotifyFirst->noteName);
            ScriptableCl_AnimNotetrackEvent(OnlyLocalClientNum, entnum, v26);
          }
          if ( v21 )
            CG_Entity_ProcessRagdollAnimNotify(OnlyLocalClientNum, entnum, ClientNotifyFirst);
        }
      }
    }
  }
}

/*
==============
CG_EntitySP_ProcessInternal
==============
*/
void CG_EntitySP_ProcessInternal(centity_t *cent, bool isVisible, int hasMoved)
{
  double v3; 
  LocalClientNum_t OnlyLocalClientNum; 
  const DObj *ClientDObj; 
  const DObj *v9; 
  const cg_t *LocalClientGlobals; 
  unsigned int RenderFlagForRefEntity; 
  __m256i *HudOutlineInfo; 
  unsigned int number; 
  float v14; 
  int v15; 
  LocalClientNum_t v16; 
  LocalClientNum_t v17; 
  CgVehicleSystemSP *VehicleSystemSP; 
  LocalClientNum_t v19; 
  LocalClientNum_t v20; 
  LocalClientNum_t v21; 
  LocalClientNum_t v22; 
  LocalClientNum_t v23; 
  LocalClientNum_t v24; 
  LocalClientNum_t v25; 
  LocalClientNum_t v26; 
  __int64 v27; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v29; 
  vec3_t outLightingOrigin; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1962, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.eType != cent->pose.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1963, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == cent->pose.eType)", (const char *)&queryFormat, "cent->nextState.eType == cent->pose.eType") )
    __debugbreak();
  switch ( cent->nextState.eType )
  {
    case ET_FIRST:
    case ET_INFO_VOLUME_GRAPPLE:
      OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
      ClientDObj = Com_GetClientDObj(cent->nextState.number, OnlyLocalClientNum);
      v9 = ClientDObj;
      if ( ClientDObj )
      {
        CG_Entity_CalcLightingOrigin(&cent->pose, ClientDObj, &outLightingOrigin);
        if ( isVisible )
        {
          LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
          RenderFlagForRefEntity = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
          HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
          number = cent->nextState.number;
          v14 = *(float *)HudOutlineInfo[1].m256i_i32;
          *(__m256i *)&v29.color = *HudOutlineInfo;
          v29.characterEVOffset = v14;
          memset(&result, 0, sizeof(result));
          CG_Entity_AddDObjToScene(OnlyLocalClientNum, v9, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v29, &outLightingOrigin, 0.0, 0);
        }
      }
      break;
    case ET_PLAYER:
      return;
    case ET_ITEM:
      CG_EntitySP_Item(cent, isVisible, v3);
      break;
    case ET_MISSILE:
      CG_EntitySP_Missile(cent, isVisible);
      break;
    case ET_SCRIPTMOVER:
      CG_EntitySP_ScriptMover(cent, isVisible, hasMoved);
      break;
    case ET_SOUND:
      v19 = CL_GetOnlyLocalClientNum();
      CG_EntitySP_Sound(v19, cent);
      break;
    case ET_PRIMARY_LIGHT:
      CG_EntitySP_PrimaryLight(cent);
      break;
    case ET_TURRET:
      CG_EntitySP_Turret(cent, isVisible);
      break;
    case ET_HELICOPTER:
    case ET_VEHICLE_CORPSE:
      goto $LN28_74;
    case ET_VEHICLE:
      v15 = cent->nextState.number;
      v16 = CL_GetOnlyLocalClientNum();
      LUIOnEntityElementSpawnerSP::UpdateFiltersForVehicle(v16, v15);
$LN28_74:
      v17 = CL_GetOnlyLocalClientNum();
      VehicleSystemSP = CgVehicleSystemSP::GetVehicleSystemSP(v17);
      CgVehicleSystemSP::ProcessEntity(VehicleSystemSP, cent, isVisible, hasMoved);
      break;
    case ET_ACTOR:
    case ET_ACTOR_CORPSE:
      CG_ActorsSP_ProcessActor(cent, isVisible);
      break;
    case ET_ACTOR_SPAWNER:
      CG_ActorsSP_ProcessSpawner(cent);
      break;
    case ET_PHYSICS_CHILD:
      Profile_Begin(687);
      v20 = CL_GetOnlyLocalClientNum();
      v21 = CL_GetOnlyLocalClientNum();
      CG_PhysicsObject_UpdatePhysicsChild((Physics_WorldId)(3 * v21 + 2), v20, cent);
      Profile_EndInternal(NULL);
      break;
    case ET_BEAM:
      v22 = CL_GetOnlyLocalClientNum();
      CG_BeamEntity_Update(v22, cent);
      break;
    case ET_CLIENT_CHARACTER:
      v23 = CL_GetOnlyLocalClientNum();
      CG_ClientCharacter_ProcessEntity(v23, cent);
      break;
    case ET_RAGDOLL_CONSTRAINT:
      v24 = CL_GetOnlyLocalClientNum();
      CG_RagdollConstraintEntity_Update(v24, cent);
      break;
    case ET_PHYSICS_VOLUME:
      v25 = CL_GetOnlyLocalClientNum();
      CG_PhysicsVolume_Update(v25, cent);
      break;
    case ET_COVERWALL:
      v26 = CL_GetOnlyLocalClientNum();
      CG_CoverWall_ProcessEntity(v26, cent);
      break;
    default:
      if ( cent->nextState.eType != ET_INVISIBLE )
      {
        LODWORD(v27) = cent->nextState.eType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1968, ASSERT_TYPE_ASSERT, "( ( cent->nextState.eType == ET_INVISIBLE ) )", "( cent->nextState.eType ) = %i", v27) )
          __debugbreak();
      }
      break;
  }
}

/*
==============
CG_EntitySP_SaveEntities
==============
*/
void CG_EntitySP_SaveEntities(MemoryFile *memFile)
{
  LocalClientNum_t OnlyLocalClientNum; 
  int v3; 
  LocalClientNum_t v4; 
  CgEntitySystem *EntitySystem; 
  __int64 v6; 
  __int64 v7; 
  int p; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v3 = 0;
  p = 0;
  v4 = OnlyLocalClientNum;
  do
  {
    EntitySystem = CgEntitySystem::GetEntitySystem(v4);
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(v7) = 2048;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( (EntitySystem->m_entities[v3].flags & 1) != 0 )
    {
      MemFile_WriteData(memFile, 4ui64, &p);
      CG_EntitySP_SaveEntity(p, memFile);
    }
    v3 = p + 1;
    p = v3;
  }
  while ( v3 < 2048 );
  p = -1;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
CG_EntitySP_SaveEntity
==============
*/
void CG_EntitySP_SaveEntity(int entnum, MemoryFile *memFile)
{
  LocalClientNum_t OnlyLocalClientNum; 
  centity_t *Entity; 
  __int64 ragdollHandle; 
  char v7; 
  Ragdoll *v8; 
  __int64 v9; 
  __int64 v10; 
  char p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 2134, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( (unsigned int)entnum >= 0x800 )
  {
    LODWORD(v9) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 2135, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( (( 2048 ) + 0) )", "entnum doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v9, 2048) )
      __debugbreak();
  }
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  Entity = CG_GetEntity(OnlyLocalClientNum, entnum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 2139, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  MemFile_WriteData(memFile, 4ui64, &Entity->previousEventSequence);
  MemFile_WriteData(memFile, 1ui64, Entity);
  if ( CG_Pose_IsRagdoll(&Entity->pose) && (ragdollHandle = Entity->pose.ragdollHandle, (_DWORD)ragdollHandle) )
  {
    v7 = 1;
    if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
    {
      LODWORD(v10) = 64;
      LODWORD(v9) = ragdollHandle - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( !(_DWORD)ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
    {
      LODWORD(v10) = 64;
      LODWORD(v9) = ragdollHandle - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v8 = &g_ragdollBodies[ragdollHandle - 1];
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( !v8->allocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1660, ASSERT_TYPE_ASSERT, "(!hasRagdoll || Ragdoll_IsAllocated( cent->pose.ragdollHandle ))", (const char *)&queryFormat, "!hasRagdoll || Ragdoll_IsAllocated( cent->pose.ragdollHandle )") )
      __debugbreak();
  }
  else
  {
    v7 = 0;
  }
  p = v7;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( v7 )
    Ragdoll_SaveRagdoll(Entity->pose.ragdollHandle, memFile);
}

/*
==============
CG_EntitySP_ScriptMover
==============
*/
void CG_EntitySP_ScriptMover(centity_t *cent, const bool isVisible, const int hasMoved)
{
  double v3; 
  __int16 scriptMoverType; 
  LocalClientNum_t OnlyLocalClientNum; 
  LocalClientNum_t v9; 
  LerpEntityState *p_lerp; 
  DObj *ClientDObj; 
  const cg_t *v12; 
  unsigned int RenderFlagForRefEntity; 
  __m256i *HudOutlineInfo; 
  float v15; 
  bool v16; 
  bool useAlternateColor; 
  bool v18; 
  bool v19; 
  vec3_t *p_origin; 
  const cg_t *LocalClientGlobals; 
  unsigned int renderFlags; 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  unsigned int number; 
  const GfxBrushModel *BrushModel; 
  bool isFadeActive; 
  unsigned int scriptableIndex; 
  vec3_t outOrigin; 
  team_t team; 
  vec3_t origin; 
  GfxSceneHudOutlineInfo v31; 
  __int64 v32; 
  GfxSceneHudOutlineInfo result; 
  bool isFadeComplete; 
  bool isOverHalfWayFaded; 

  v32 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 617, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  scriptMoverType = cent->nextState.un.scriptMoverType;
  if ( scriptMoverType != 3 )
  {
    switch ( scriptMoverType )
    {
      case 4:
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144312F20, 6247i64);
        return;
      case 5:
        OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
        CG_ClientWeapon_ProcessEntity(OnlyLocalClientNum, cent);
        return;
      case 6:
        CG_EntitySP_Item(cent, isVisible, v3);
        return;
    }
    v9 = CL_GetOnlyLocalClientNum();
    team = (unsigned int)CG_EntitySP_GetTeam(v9, cent);
    if ( ScriptableCl_GetIndexForEntity(v9, cent, &scriptableIndex) )
    {
      ScriptableCl_UpdatePosition(v9, scriptableIndex, cent);
      ScriptableCl_UpdateSharedInstance(v9, scriptableIndex, cent->nextState.number);
      p_lerp = &cent->nextState.lerp;
    }
    else
    {
      p_lerp = &cent->nextState.lerp;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(v9);
        renderFlags = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
        if ( CG_EntityWorkers_TryAddBModelDrawRequest(cent->nextState.number, renderFlags) )
          return;
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 567, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
          __debugbreak();
        if ( !cent->pose.prevOrigin.Get_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
          __debugbreak();
        FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(cent->pose.prevOrigin.Get_prevOrigin, &cent->pose);
        FunctionPointer_prevOrigin(&cent->pose.prevOrigin.prevOrigin, &origin);
        number = cent->nextState.number;
        BrushModel = R_GetBrushModel(cent->nextState.index.brushModel);
        R_AddBrushModelToSceneFromAngles(BrushModel, &outOrigin, &cent->pose.angles, &origin, &cent->pose.prevAngles, number, renderFlags);
        memset(&origin, 0, sizeof(origin));
        goto LABEL_45;
      }
    }
    ClientDObj = Com_GetClientDObj(cent->nextState.number, v9);
    if ( !ClientDObj )
      return;
    v12 = CG_GetLocalClientGlobals(v9);
    *(_QWORD *)outOrigin.v = v12;
    if ( isVisible )
    {
      if ( hasMoved || (cent->flags & 0x6000) != 0x2000 )
      {
        CG_Entity_CalcLightingOrigin(&cent->pose, ClientDObj, &cent->lightingOrigin);
        v12 = *(const cg_t **)outOrigin.v;
      }
      cent->flags |= 0x2000u;
      RenderFlagForRefEntity = CG_EntitySP_GetRenderFlagForRefEntity(v12, cent, &p_lerp->eFlags);
      HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo(&result, *(const cg_t **)outOrigin.v, cent);
      *(__m256i *)&v31.color = *HudOutlineInfo;
      v15 = *(float *)HudOutlineInfo[1].m256i_i32;
      v31.mapEntLookup = cent->nextState.lerp.u.agentCorpse.attachModels[6].m_data;
      if ( (LOBYTE(cent->nextState.lerp.u.vehicle.bodyPitch) & 8) != 0 && CG_Utils_ShouldHighlightScriptMovers(v9) && CG_Utils_ShouldHighlightInScope(v9) && !CG_Utils_StencilScriptControlled(v9) )
      {
        v31.scopeStencil = FLOAT_1_0;
        v16 = CG_Utils_PlayerLockedOn(v9, cent);
        useAlternateColor = v31.useAlternateColor;
        if ( v16 )
          useAlternateColor = 1;
        v31.useAlternateColor = useAlternateColor;
      }
      isFadeActive = 0;
      isFadeComplete = 0;
      isOverHalfWayFaded = 0;
      CG_CorpseFade_ApplyDissolveMaterial(v9, ClientDObj, cent->nextState.number, &isFadeActive, &isFadeComplete, &isOverHalfWayFaded);
      if ( !isFadeComplete )
      {
        v31.characterEVOffset = v15;
        memset(&result, 0, sizeof(result));
        CG_Entity_AddDObjToScene(v9, ClientDObj, &cent->pose, cent->nextState.number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v31, &cent->lightingOrigin, 0.0, 0);
      }
    }
    v18 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 9u);
    v19 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&p_lerp->eFlags, FLAG_COUNT);
    if ( v18 || v19 || CG_LaserForceOnEnabled() )
      CG_LaserAdd(v9, cent->nextState.number, team);
    CG_GetPoseOrigin(&cent->pose, &origin);
    XAnimBonePhysicsSetDObjMatrix(ClientDObj, &origin, &cent->pose.angles);
    p_origin = &origin;
    goto LABEL_46;
  }
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 629, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  R_AddTransformedReflectionProbeInstancesToScene(&outOrigin, &cent->pose.angles, cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId);
LABEL_45:
  p_origin = &outOrigin;
LABEL_46:
  memset(p_origin, 0, sizeof(vec3_t));
}

/*
==============
CG_EntitySP_ShouldDelayEntityPacketPostPS
==============
*/
__int64 CG_EntitySP_ShouldDelayEntityPacketPostPS(LocalClientNum_t localClientNum, const cg_t *cgameGlob, const centity_t *cent)
{
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  int viewlocked_entNum; 

  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1084, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1085, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1086, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CG_Vehicle_ShouldDelayPacketEntity(localClientNum, cgameGlob, cent) )
    return 6i64;
  if ( cent->nextState.eType != ET_TURRET )
    return 0i64;
  if ( cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId == cgameGlob->clientNum )
    return 5i64;
  if ( cgameGlob == (const cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_eFlags = &cgameGlob->predictedPlayerState.eFlags;
  if ( cgameGlob == (const cg_t *)-384i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 6u) )
    goto LABEL_27;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
LABEL_27:
    viewlocked_entNum = cgameGlob->predictedPlayerState.viewlocked_entNum;
    goto LABEL_28;
  }
  viewlocked_entNum = 2047;
LABEL_28:
  if ( cent->nextState.number == viewlocked_entNum )
    return 4i64;
  return 0i64;
}

/*
==============
CG_EntitySP_Sound
==============
*/
void CG_EntitySP_Sound(const LocalClientNum_t localClientNum, centity_t *cent)
{
  int v4; 
  unsigned __int16 v5; 
  SndAliasList *SoundAliasListByName; 
  SndAliasList *v7; 
  const SndAliasList *v8; 
  float v9; 
  unsigned int torsoPitchPacked; 
  vec3_t outOrigin; 

  v4 = cent->nextState.lerp.u.anonymous.data[0];
  if ( v4 )
  {
    if ( (unsigned int)(v4 - 1) <= 1 )
    {
      torsoPitchPacked = cent->nextState.lerp.u.player.torsoPitchPacked;
      if ( torsoPitchPacked >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1486, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", cent->nextState.lerp.u.player.torsoPitchPacked, 0x4000) )
        __debugbreak();
      CG_EnableAudioTriggerByIndex(torsoPitchPacked, cent->nextState.lerp.u.anonymous.data[0] == 2);
    }
    else if ( v4 == 3 && localClientNum == LOCAL_CLIENT_0 )
    {
      CG_SND_BankDetailStream_SetScriptedSoundbanks(*(_QWORD *)&cent->nextState.lerp.u.scriptMover.animIndex);
    }
  }
  else
  {
    v5 = cent->nextState.lerp.u.player.torsoPitchPacked;
    if ( v5 )
    {
      if ( cent->nextState.lerp.u.actor.lookAtEntityNum )
      {
        SoundAliasListByName = CL_CGameSP_GetSoundAliasListByName(v5);
        v7 = CL_CGameSP_GetSoundAliasListByName(cent->nextState.lerp.u.player.waistPitchPacked);
        v8 = v7;
        if ( SoundAliasListByName )
        {
          if ( v7 )
          {
            v9 = (float)((float)(cent->nextState.lerp.u.turret.gunAngles.v[2] - cent->prevState.u.turret.gunAngles.v[2]) * CG_GetLocalClientGlobals(localClientNum)->frameInterpolation) + cent->prevState.u.turret.gunAngles.v[2];
            if ( (v9 < 0.0 || v9 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1466, ASSERT_TYPE_ASSERT, "((lerp >= 0.0f) && (lerp <= 1.0f))", (const char *)&queryFormat, "(lerp >= 0.0f) && (lerp <= 1.0f)") )
              __debugbreak();
            if ( SoundAliasListByName->head->assetId == v8->head->assetId )
            {
              CG_GetPoseOrigin(&cent->pose, &outOrigin);
              SND_PlayBlendedSoundAlias(SoundAliasListByName, v8, v9, localClientNum, cent->nextState.number, 1.0, 1.0, &outOrigin, 0, SASYS_CGAME);
              memset(&outOrigin, 0, sizeof(outOrigin));
            }
            else
            {
              Com_Printf(9, "%s and %s are not valid blendable aliases.", SoundAliasListByName->aliasName, v8->aliasName);
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_EntitySP_Turret
==============
*/
void CG_EntitySP_Turret(centity_t *cent, bool isVisible)
{
  LocalClientNum_t OnlyLocalClientNum; 
  DObj *ClientDObj; 
  XAnim_s *Animations; 
  XAnimOwner v7; 
  XAnimTree *SmallTree; 
  cg_t *LocalClientGlobals; 
  __m256i *HudOutlineInfo; 
  float v11; 
  bool v12; 
  bool useAlternateColor; 
  bool v14; 
  bool v15; 
  team_t Team; 
  CgCompassSystemSP *CompassSystemSP; 
  unsigned int scriptableIndex; 
  unsigned int renderFlags; 
  vec3_t outOrigin; 
  GfxSceneHudOutlineInfo v21; 
  shaderOverride_t v22; 
  __int64 v23; 
  GfxSceneHudOutlineInfo result; 
  vec3_t v25; 

  v23 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 331, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, OnlyLocalClientNum);
  if ( ClientDObj )
  {
    if ( ScriptableCl_GetIndexForEntity(OnlyLocalClientNum, cent, &scriptableIndex) )
    {
      ScriptableCl_UpdatePosition(OnlyLocalClientNum, scriptableIndex, cent);
      ScriptableCl_UpdateSharedInstance(OnlyLocalClientNum, scriptableIndex, cent->nextState.number);
    }
    if ( !ClientDObj->tree )
    {
      Animations = CG_Entity_GetAnimations(OnlyLocalClientNum, cent->nextState.number, cent->nextState.eType);
      if ( Animations )
      {
        LOBYTE(v7) = 1;
        SmallTree = Com_XAnimCreateSmallTree(Animations, v7);
        if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 247, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
          __debugbreak();
      }
      else
      {
        SmallTree = NULL;
      }
      DObjSetTree(ClientDObj, SmallTree);
    }
    if ( !cent->tree )
      cent->tree = ClientDObj->tree;
    CG_Entity_TurretPreControllers(OnlyLocalClientNum, ClientDObj, cent);
    cent->pose.turret.worldSpaceTransform = 1;
    CG_Turret_UpdateBarrelSpinSound(OnlyLocalClientNum, cent);
    CG_Turret_UpdateBarrelSpinRumble(OnlyLocalClientNum, cent);
    CG_Turret_UpdateHeat(OnlyLocalClientNum, cent);
    CG_Turret_UpdateMotionSounds(OnlyLocalClientNum, cent);
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    XAnimBonePhysicsSetDObjMatrix(ClientDObj, &outOrigin, &cent->pose.angles);
    if ( !CG_PlayerUsingScopedTurret(OnlyLocalClientNum) || CG_GetLocalClientGlobals(OnlyLocalClientNum)->predictedPlayerState.viewlocked_entNum != cent->nextState.number )
    {
      Turret_PlaceSentry_Client(OnlyLocalClientNum, &cent->nextState, &outOrigin, &cent->pose.angles, -1.0);
      v25.v[0] = outOrigin.v[0];
      v25.v[1] = outOrigin.v[1];
      v25.v[2] = outOrigin.v[2] + 32.0;
      CG_SetPoseOrigin(&cent->pose, &outOrigin);
      if ( isVisible )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
        renderFlags = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags) | 0x1000;
        HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
        *(__m256i *)&v22.scrollRateX = *HudOutlineInfo;
        *(__m256i *)&v21.color = *(__m256i *)&v22.scrollRateX;
        v11 = *(float *)HudOutlineInfo[1].m256i_i32;
        if ( (unsigned int)CG_EntitySP_GetTeam(OnlyLocalClientNum, cent) != 2 && CG_Utils_ShouldHighlightTurrets(OnlyLocalClientNum) && CG_Utils_ShouldHighlightInScope(OnlyLocalClientNum) && !CG_Utils_StencilScriptControlled(OnlyLocalClientNum) )
        {
          v21.scopeStencil = FLOAT_1_0;
          v12 = CG_Utils_PlayerLockedOn(OnlyLocalClientNum, cent);
          useAlternateColor = v21.useAlternateColor;
          if ( v12 )
            useAlternateColor = 1;
          v21.useAlternateColor = useAlternateColor;
          *(__m256i *)&v22.scrollRateX = *(__m256i *)&v21.color;
        }
        CG_Entity_DepthSortWorldTurretWithViewarms(LocalClientGlobals, cent, &renderFlags);
        *(__m256i *)&v21.color = *(__m256i *)&v22.scrollRateX;
        v21.characterEVOffset = v11;
        memset(&v22, 0, sizeof(v22));
        CG_Entity_AddDObjToScene(OnlyLocalClientNum, ClientDObj, &cent->pose, cent->nextState.number, renderFlags, &v22, &v21, &v25, 0.0, 0);
      }
      v14 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 9u);
      v15 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&cent->nextState.lerp.eFlags, FLAG_COUNT);
      if ( v14 || v15 || CG_LaserForceOnEnabled() )
      {
        Team = (unsigned int)CG_EntitySP_GetTeam(OnlyLocalClientNum, cent);
        CG_LaserAdd(OnlyLocalClientNum, cent->nextState.number, Team);
      }
      CompassSystemSP = CgCompassSystemSP::GetCompassSystemSP(OnlyLocalClientNum);
      CgCompassSystemSP::UpdateTurretInfo(CompassSystemSP, cent);
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
CG_EntitySP_TurretPreControllers
==============
*/
void CG_EntitySP_TurretPreControllers(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent)
{
  XAnim_s *Animations; 
  XAnimOwner v7; 
  XAnimTree *SmallTree; 

  if ( !obj->tree )
  {
    Animations = CG_Entity_GetAnimations(localClientNum, cent->nextState.number, cent->nextState.eType);
    if ( Animations )
    {
      LOBYTE(v7) = 1;
      SmallTree = Com_XAnimCreateSmallTree(Animations, v7);
      if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 247, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
        __debugbreak();
    }
    else
    {
      SmallTree = NULL;
    }
    DObjSetTree(obj, SmallTree);
  }
  if ( !cent->tree )
    cent->tree = obj->tree;
  CG_Entity_TurretPreControllers(localClientNum, obj, cent);
  cent->pose.turret.worldSpaceTransform = 1;
}

/*
==============
CG_EntitySP_UpdateEntityBounds
==============
*/
void CG_EntitySP_UpdateEntityBounds(const LocalClientNum_t localClientNum, centity_t *cent, const int entityMoved)
{
  __int64 v5; 
  bool v6; 
  char v7; 
  bool v8; 
  bool v9; 
  float v10; 
  bool v11; 
  GfxBrushModel *BrushModel; 
  bool v13; 
  int v14; 
  CgEntitySystem *EntitySystem; 
  __int64 v16; 
  int *v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  DObj *ClientDObj; 
  DObj *v22; 
  double Radius; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int *v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  __int64 v31; 
  __int64 v32; 
  char v33; 
  char v34; 
  bool v35; 
  bool v36; 
  int *v37; 
  vec3_t outOrigin; 
  unsigned int v39; 
  int v40; 
  int v41[4]; 
  DObj *obj; 
  __int64 v43; 

  v43 = -2i64;
  v40 = entityMoved;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 779, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 780, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  LOWORD(v39) = cent->nextState.number;
  v5 = (__int16)v39;
  v6 = (cent->flags & 0x80000) != 0;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v35 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x17u);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v33 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x17u);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v7 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 0x17u);
  v8 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xCu);
  v9 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 0xCu) != v8;
  if ( v7 != v33 || (v34 = 0, v9) )
    v34 = 1;
  v10 = 0.0;
  v11 = ScriptableCl_IsScriptableEntity(localClientNum, cent) != 0;
  if ( cent->nextState.eType != ET_SCRIPTMOVER || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) || v11 )
    goto LABEL_33;
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((cent->nextState.eType - 12) & 0xFFFD) == 0 )
  {
LABEL_33:
    EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    if ( (unsigned int)v5 >= 0x800 )
    {
      LODWORD(v31) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 486, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v31, 2048) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v5 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
    {
      v16 = (__int16)v39;
      v20 = 3i64 * (__int16)v39 + 389124;
      v41[0] = *((_DWORD *)&EntitySystem->__vftable + v20);
      v41[1] = *((_DWORD *)&EntitySystem->__vftable + v20 + 1);
      v41[2] = *((_DWORD *)&EntitySystem->m_localClientNum + v20);
    }
    else
    {
      v16 = v5;
      v17 = (int *)&EntitySystem->m_entityOrigin[v5];
      v37 = v41;
      v18 = *v17;
      v19 = v17[1];
      v41[2] = s_entity_aab_Z ^ v19 ^ v17[2] ^ ((_DWORD)EntitySystem + 4 * (3 * v5 + 389124));
      v41[1] = s_entity_aab_Y ^ v18 ^ v19 ^ ((_DWORD)EntitySystem + 4 * (3 * v5 + 389124));
      v41[0] = v18 ^ (unsigned int)v17 ^ ~s_entity_aab_X;
      memset(&v37, 0, sizeof(v37));
      LODWORD(v37) = v41[0];
      if ( (v41[0] & 0x7F800000) == 2139095040 || (*(float *)&v37 = *(float *)&v41[1], (v41[1] & 0x7F800000) == 2139095040) || (*(float *)&v37 = *(float *)&v41[2], (v41[2] & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    v36 = (float)((float)((float)((float)(*(float *)&v41[1] - outOrigin.v[1]) * (float)(*(float *)&v41[1] - outOrigin.v[1])) + (float)((float)(*(float *)v41 - outOrigin.v[0]) * (float)(*(float *)v41 - outOrigin.v[0]))) + (float)((float)(*(float *)&v41[2] - outOrigin.v[2]) * (float)(*(float *)&v41[2] - outOrigin.v[2]))) > 256.0;
    ClientDObj = Com_GetClientDObj(v5, localClientNum);
    v22 = ClientDObj;
    obj = ClientDObj;
    if ( ClientDObj )
    {
      Radius = DObjGetRadius(ClientDObj);
      v10 = *(float *)&Radius + 16.0;
    }
    if ( v35 && (v36 || !v6) )
    {
      if ( (unsigned __int16)v39 >= 0x800u )
      {
        LODWORD(v32) = 2048;
        LODWORD(v31) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 461, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (int)v5 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
      {
        EntitySystem->m_entityOrigin[v16] = outOrigin;
      }
      else
      {
        v24 = s_entity_aab_Z;
        v39 = s_entity_aab_Y;
        v25 = s_entity_aab_X;
        *(float *)&v37 = outOrigin.v[0];
        if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v37 = outOrigin.v[1], (LODWORD(outOrigin.v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v37 = outOrigin.v[2], (LODWORD(outOrigin.v[2]) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
            __debugbreak();
        }
        v26 = (unsigned int *)&EntitySystem->m_entityOrigin[v16];
        v27 = LODWORD(outOrigin.v[0]) ^ (unsigned int)v26 ^ ~v25;
        v28 = v39 ^ v27 ^ LODWORD(outOrigin.v[1]) ^ ((_DWORD)EntitySystem + 4 * (3 * v16 + 389124));
        v29 = v24 ^ v28 ^ LODWORD(outOrigin.v[2]) ^ ((_DWORD)EntitySystem + 4 * (3 * v16 + 389124));
        *v26 = v27;
        v26[1] = v28;
        v26[2] = v29;
        memset(&v37, 0, sizeof(v37));
        v22 = obj;
      }
      if ( !CG_EntityWorkers_TryAddDObjBoundsUpdate(v5) && v22 )
      {
        v30 = R_LinkDObjEntity(localClientNum, v5, &outOrigin, v10);
        cent->flags |= 0x80000u;
        CG_Entity_CheckLightCount(v5, v22, v30, &outOrigin, v10);
      }
    }
    memset(v41, 0, 0xCui64);
    memset(&outOrigin, 0, sizeof(outOrigin));
    v13 = v35;
    goto LABEL_69;
  }
  BrushModel = R_GetBrushModel(cent->nextState.index.brushModel);
  if ( BrushModel )
    v10 = BrushModel->radius;
  v13 = v35;
  if ( !v35 )
  {
LABEL_72:
    if ( !v34 )
      goto LABEL_76;
    goto LABEL_73;
  }
  v14 = v40;
  if ( v40 || !v6 )
  {
    if ( !CG_EntityWorkers_TryAddBModelBoundsUpdate((__int16)v39) )
      CG_Entity_UpdateBModelWorldBounds(localClientNum, cent, 0);
LABEL_69:
    v14 = v40;
  }
  if ( !v13 || !v14 )
    goto LABEL_72;
LABEL_73:
  if ( v10 > rg.primaryLightMotionDetectSizeMin && v10 < rg.primaryLightMotionDetectSizeMax )
    R_EntityMoved(localClientNum, v5);
LABEL_76:
  if ( !v13 && (cent->flags & 0x80000) != 0 )
  {
    R_UnlinkEntity_NoCull(localClientNum, v5);
    cent->flags &= ~0x80000u;
  }
}

/*
==============
CG_EntitySP_UpdateRagdollPose
==============
*/
void CG_EntitySP_UpdateRagdollPose(LocalClientNum_t localClientNum, centity_t *cent)
{
  bool RootOrigin; 
  bool v5; 
  DObj *ClientDObj; 
  bool IsRagdoll; 
  DObj *v8; 
  bool v9; 
  vec3_t inOrigin; 
  vec3_t outOrigin; 
  __int64 v12; 
  vec3_t translationDelta; 

  v12 = -2i64;
  if ( !cent->pose.ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1733, ASSERT_TYPE_ASSERT, "(cent->pose.ragdollHandle != 0)", (const char *)&queryFormat, "cent->pose.ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  inOrigin = outOrigin;
  RootOrigin = Ragdoll_GetRootOrigin(cent->pose.ragdollHandle, &inOrigin);
  v5 = CG_Pose_SetUsingRagdollOrigin(&cent->pose, RootOrigin);
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( ClientDObj )
  {
    IsRagdoll = CG_Pose_IsRagdoll(&cent->pose);
    Ragdoll_SetAnimationParameters(ClientDObj, cent->pose.ragdollHandle, IsRagdoll);
    if ( v5 )
    {
      translationDelta.v[0] = outOrigin.v[0] - inOrigin.v[0];
      translationDelta.v[1] = outOrigin.v[1] - inOrigin.v[1];
      translationDelta.v[2] = outOrigin.v[2] - inOrigin.v[2];
      XAnimBonePhysicsTeleportBones(ClientDObj, &translationDelta);
    }
  }
  v8 = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( v8 )
  {
    v9 = CG_Pose_IsRagdoll(&cent->pose);
    Ragdoll_SetAnimationParameters(v8, cent->pose.ragdollHandle, v9);
  }
  if ( cent->nextState.eType == ET_ACTOR_CORPSE )
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
    CG_ActorCorpse_PhysicsOriginWrite(cent->nextState.number, &inOrigin);
    CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
  }
  CG_SetPoseOrigin(&cent->pose, &inOrigin);
  memset(&inOrigin, 0, sizeof(inOrigin));
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CgEntitySystemSP::GetRenderFlagForRefEntity
==============
*/
__int64 CgEntitySystemSP::GetRenderFlagForRefEntity(CgEntitySystemSP *this, const entityState_t *es)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  unsigned int v8; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1348, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v3 = 16 * GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0xCu);
  v4 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0xEu) << 10) | v3;
  v5 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0xDu) << 9) | v4;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v6 = (32 * GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0x14u)) | v5;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v7 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0x16u) << 16) | v6;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v8 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0x17u) << 17) | v7;
  if ( BG_IsRagdollTrajectory(&es->lerp.pos) )
    v8 |= 0x1000u;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0x18u) )
    v8 |= 9u;
  return v8;
}

/*
==============
CgEntitySystemSP::IsMP
==============
*/
bool CgEntitySystemSP::IsMP(CgEntitySystemSP *this)
{
  return 0;
}

/*
==============
CgEntitySystemSP::ProcessNoteTracks
==============
*/
void CgEntitySystemSP::ProcessNoteTracks(CgEntitySystemSP *this, const unsigned int entityIndex, const XAnimNotifyHandle notifyHandle)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected deffered note track processing in SP") )
    __debugbreak();
}

/*
==============
CgEntitySystemSP::ShouldDelayEntityPacketPostPS
==============
*/
__int64 CgEntitySystemSP::ShouldDelayEntityPacketPostPS(CgEntitySystemSP *this, const cg_t *cgameGlob, const centity_t *cent)
{
  return CG_EntitySP_ShouldDelayEntityPacketPostPS(this->m_localClientNum, cgameGlob, cent);
}

