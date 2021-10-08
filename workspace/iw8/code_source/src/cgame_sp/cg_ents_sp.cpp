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
  __int64 v7; 
  CgEntitySystem *EntitySystem; 
  char v13; 
  entityType_s eType; 
  int v18; 
  unsigned int v19; 
  const SndAliasList *EntityLoopSoundAlias; 
  CgCompassSystemSP *CompassSystemSP; 
  __int64 v26; 
  __int64 v27; 
  vec3_t v28; 
  vec3_t outOrigin; 
  __int64 v30; 
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  v30 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v7 = localClientNum;
  _RDI = CG_GetEntity(localClientNum, entnum);
  CG_GetPoseOrigin(&_RDI->pose, &outOrigin);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+48h]
    vmovss  xmm7, dword ptr [rdi+4Ch]
    vmovss  xmm8, dword ptr [rdi+50h]
  }
  CGMovingPlatformAimAssist::AimAssistUpdateTarget((LocalClientNum_t)v7, _RDI);
  CG_EntitySP_ProcessEntityDobjUpdate((LocalClientNum_t)v7, entnum);
  Profile2_UpdateEntry(94);
  if ( ((unsigned __int8)&dword_14FDE8148 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8148) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8148);
  if ( (_RDI->flags & 0x4000) != 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 931, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
      __debugbreak();
  }
  else
  {
    CG_Entity_UpdatePreviousPosition(_RDI);
    EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v7);
    if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 941, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
      __debugbreak();
    if ( CgEntitySystem::ShouldCalculateParentLinkPositions(EntitySystem, _RDI) )
      CG_Entity_CalcParentLinkPositions((LocalClientNum_t)v7, entnum);
    else
      CG_EntitySP_CalcLerpPositions((LocalClientNum_t)v7, _RDI);
  }
  Profile2_UpdateEntry(94);
  if ( ((unsigned __int64)&dword_14FDE8148 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8148) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8148);
  CG_GetPoseOrigin(&_RDI->pose, &v28);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+var_98]
    vucomiss xmm0, dword ptr [rsp+0E8h+outOrigin]
  }
  if ( !v13 )
    goto LABEL_29;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+var_98+4]
    vucomiss xmm0, dword ptr [rsp+0E8h+outOrigin+4]
  }
  if ( !v13 )
    goto LABEL_29;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+var_98+8]
    vucomiss xmm0, dword ptr [rsp+0E8h+outOrigin+8]
  }
  if ( !v13 )
    goto LABEL_29;
  __asm { vucomiss xmm6, dword ptr [rdi+48h] }
  if ( !v13 )
    goto LABEL_29;
  __asm { vucomiss xmm7, dword ptr [rdi+4Ch] }
  if ( !v13 )
    goto LABEL_29;
  __asm { vucomiss xmm8, dword ptr [rdi+50h] }
  if ( !v13 )
    goto LABEL_29;
  eType = _RDI->nextState.eType;
  if ( (unsigned __int16)(eType - 14) <= 1u || eType == ET_SCRIPTMOVER && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RDI->nextState.lerp.eFlags, ACTIVE, 1u) )
  {
    if ( (~((unsigned int)_RDI->flags >> 13) & 1) == 0 )
    {
      v18 = 0;
      v19 = _RDI->flags & 0xFFFFEFFF;
      goto LABEL_30;
    }
LABEL_29:
    v18 = 1;
    v19 = _RDI->flags | 0x1000;
    goto LABEL_30;
  }
  v18 = 0;
  v19 = _RDI->flags & 0xFFFFEFFF;
LABEL_30:
  _RDI->flags = v19;
  Profile2_UpdateEntry(95);
  if ( ((unsigned __int8)&dword_14FDE814C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE814C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE814C);
  CG_EntitySP_UpdateEntityBounds((const LocalClientNum_t)v7, _RDI, v18);
  Profile2_UpdateEntry(95);
  if ( ((unsigned __int64)&dword_14FDE814C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE814C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE814C);
  if ( (_RDI->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 898, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( _RDI->nextState.eType == ET_ACTOR )
    CG_ActorsSP_UpdateAnimationLod((LocalClientNum_t)v7, _RDI);
  else
    CG_Entity_UpdateAnimationLod((LocalClientNum_t)v7, _RDI->nextState.number);
  Profile2_UpdateEntry(96);
  if ( ((unsigned __int8)&dword_14FDE8150 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8150) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8150);
  EntityLoopSoundAlias = CG_Entity_GetEntityLoopSoundAlias((LocalClientNum_t)v7, _RDI);
  if ( EntityLoopSoundAlias )
    CG_Entity_PlayEntityLoopSound((const LocalClientNum_t)v7, _RDI, EntityLoopSoundAlias);
  if ( !CG_Entity_IsNoDraw((const LocalClientNum_t)v7, &_RDI->nextState, NULL) )
  {
    CG_EntitySP_ProcessInternal(_RDI, 1, v18);
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&_RDI->nextState.lerp.eFlags, FOG_SCALE|AIM_ASSIST) )
    {
      CompassSystemSP = CgCompassSystemSP::GetCompassSystemSP((const LocalClientNum_t)v7);
      CgCompassSystemSP::UpdateActorInfo(CompassSystemSP, _RDI->nextState.number);
    }
  }
  Profile2_UpdateEntry(96);
  if ( ((unsigned __int64)&dword_14FDE8150 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8150) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8150);
  if ( v18 && Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
    ScriptableCl_UpdateParentedTransforms((const LocalClientNum_t)v7, _RDI);
  if ( (_RDI->flags & 0x4000) == 0 )
  {
    if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 86, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tTrying to access the target assist system for localClientNum %d but the target assist system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::INSTANCE_TYPE", v7, 1, (unsigned __int8)CgTargetAssist::ms_allocatedType) )
      __debugbreak();
    if ( (unsigned int)v7 >= CgTargetAssist::ms_allocatedCount )
    {
      LODWORD(v27) = CgTargetAssist::ms_allocatedCount;
      LODWORD(v26) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    if ( !CgTargetAssist::ms_instances[v7] )
    {
      LODWORD(v27) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 88, ASSERT_TYPE_ASSERT, "(ms_instances[localClientNum])", "%s\n\tTrying to access unallocated target assist system for localClientNum %d\n", "ms_instances[localClientNum]", v27) )
        __debugbreak();
    }
    CgTargetAssistSP::EvaluatePotentialTargetEntity((CgTargetAssistSP *)CgTargetAssist::ms_instances[v7], _RDI);
  }
  CG_DrawDebug_DrawCharacterHitBox((LocalClientNum_t)v7, entnum);
  memset(&v28, 0, sizeof(v28));
  memset(&outOrigin, 0, sizeof(outOrigin));
  _R11 = &v31;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_EntitySP_CalcLerpPositions
==============
*/
__int64 CG_EntitySP_CalcLerpPositions(LocalClientNum_t localClientNum, centity_t *cent)
{
  unsigned __int8 v8; 
  trajectory_t_secure *p_pos; 
  bool v13; 
  unsigned int v14; 
  const CG_PhysicsObject *v15; 
  char v16; 
  char v23; 
  float v28; 
  char v38; 
  const cg_t *LocalClientGlobals; 
  char v50; 
  char v51; 
  __int16 number; 
  __int64 result; 
  __int64 v58; 
  vec3_t v59; 
  int v60[4]; 
  vec3_t outOrigin; 
  __int64 v62[8]; 
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  v62[1] = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RBX = cent;
  v8 = 0;
  p_pos = &cent->prevState.pos;
  if ( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+48h]
      vmovss  xmm7, dword ptr [rbx+4Ch]
      vmovss  xmm6, dword ptr [rbx+50h]
    }
    if ( (_RBX->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1635, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    if ( p_pos->trType == TR_PHYSICS_CLIENT_AUTH )
    {
      v13 = _RBX->prevState.apos.trType == TR_PHYSICS_CLIENT_AUTH;
    }
    else
    {
      if ( p_pos->trType != TR_PHYSICS_SERVER_AUTH )
      {
LABEL_10:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1637, ASSERT_TYPE_ASSERT, "(( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH && cent->prevState.apos.trType == TR_PHYSICS_CLIENT_AUTH ) || ( cent->prevState.pos.trType == TR_PHYSICS_SERVER_AUTH && cent->prevState.apos.trType == TR_PHYSICS_SERVER_AUTH ))", (const char *)&queryFormat, "( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH && cent->prevState.apos.trType == TR_PHYSICS_CLIENT_AUTH ) || ( cent->prevState.pos.trType == TR_PHYSICS_SERVER_AUTH && cent->prevState.apos.trType == TR_PHYSICS_SERVER_AUTH )") )
          __debugbreak();
LABEL_12:
        v14 = 1;
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->nextState.lerp.eFlags, ACTIVE, 1u) || Com_GetClientDObj(_RBX->nextState.number, localClientNum) )
        {
          v15 = CG_PhysicsObject_Get(_RBX->nextState.number, localClientNum);
          if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1644, ASSERT_TYPE_ASSERT, "(entityPhysicsObject)", (const char *)&queryFormat, "entityPhysicsObject") )
            __debugbreak();
          if ( p_pos->trType == TR_PHYSICS_CLIENT_AUTH && v15->physicsInstances[3 * localClientNum + 2] != -1 )
            CG_Entity_DestroyPhysics(localClientNum, _RBX->nextState.number);
          CG_Entity_CalcPhysicsPositions(localClientNum, v15, _RBX);
        }
        CG_GetPoseOrigin(&_RBX->pose, &v59);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+var_A0]
          vucomiss xmm0, dword ptr [rbp+57h+outOrigin]
        }
        if ( v16 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+var_A0+4]
            vucomiss xmm0, dword ptr [rbp+57h+outOrigin+4]
          }
          if ( v16 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+57h+var_A0+8]
              vucomiss xmm0, dword ptr [rbp+57h+outOrigin+8]
            }
            if ( v16 )
            {
              __asm { vucomiss xmm8, dword ptr [rbx+48h] }
              if ( v16 )
              {
                __asm { vucomiss xmm7, dword ptr [rbx+4Ch] }
                if ( v16 )
                {
                  __asm { vucomiss xmm6, dword ptr [rbx+50h] }
                  if ( v16 )
                  {
LABEL_27:
                    v14 = 0;
                    goto LABEL_75;
                  }
                }
              }
            }
          }
        }
        goto LABEL_75;
      }
      v13 = _RBX->prevState.apos.trType == TR_PHYSICS_SERVER_AUTH;
    }
    if ( v13 )
      goto LABEL_12;
    goto LABEL_10;
  }
  if ( cent == (centity_t *)-292i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( (unsigned int)(p_pos->trType - 23) <= 5 )
  {
    CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+48h]
      vmovss  xmm7, dword ptr [rbx+4Ch]
      vmovss  xmm6, dword ptr [rbx+50h]
    }
    CG_EntitySP_InterpolateEntityOrigin(localClientNum, _RBX);
    CG_EntitySP_CalcRagdollPositions(localClientNum, _RBX);
    CG_GetPoseOrigin(&_RBX->pose, &v59);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+var_A0]
      vucomiss xmm0, dword ptr [rbp+57h+outOrigin]
    }
    if ( !v23 )
      goto LABEL_38;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+var_A0+4]
      vucomiss xmm0, dword ptr [rbp+57h+outOrigin+4]
    }
    if ( !v23 )
      goto LABEL_38;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+var_A0+8]
      vucomiss xmm0, dword ptr [rbp+57h+outOrigin+8]
    }
    if ( !v23 )
      goto LABEL_38;
    __asm { vucomiss xmm8, dword ptr [rbx+48h] }
    if ( !v23 )
      goto LABEL_38;
    __asm { vucomiss xmm7, dword ptr [rbx+4Ch] }
    if ( !v23 )
      goto LABEL_38;
    __asm { vucomiss xmm6, dword ptr [rbx+50h] }
    if ( !v23 )
    {
LABEL_38:
      v14 = 1;
      goto LABEL_75;
    }
    goto LABEL_27;
  }
  CG_GetPoseOrigin(&_RBX->pose, &v59);
  _RDI = &_RBX->nextState.lerp.pos;
  if ( _RBX == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)_RBX + 523, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
  {
    v62[0] = (__int64)v60;
    v28 = _RBX->nextState.lerp.pos.trBase.v[1];
    v60[2] = s_trbase_aab_Z ^ LODWORD(v28) ^ LODWORD(_RBX->nextState.lerp.pos.trBase.v[2]);
    v60[1] = s_trbase_aab_Y ^ LODWORD(_RBX->nextState.lerp.pos.trBase.v[0]) ^ LODWORD(v28);
    v60[0] = LODWORD(_RBX->nextState.lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
    memset(v62, 0, 8ui64);
    __asm
    {
      vmovss  xmm0, [rbp+57h+var_90]
      vmovss  dword ptr [rbp+57h+var_70], xmm0
    }
    if ( (v62[0] & 0x7F800000) == 2139095040 )
      goto LABEL_78;
    __asm
    {
      vmovss  xmm0, [rbp+57h+var_8C]
      vmovss  dword ptr [rbp+57h+var_70], xmm0
    }
    if ( (v62[0] & 0x7F800000) == 2139095040 )
      goto LABEL_78;
    __asm
    {
      vmovss  xmm0, [rbp+57h+var_88]
      vmovss  dword ptr [rbp+57h+var_70], xmm0
    }
    if ( (v62[0] & 0x7F800000) == 2139095040 )
    {
LABEL_78:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0Ch]
      vmovss  [rbp+57h+var_90], xmm0
      vmovss  xmm1, dword ptr [rdi+10h]
      vmovss  [rbp+57h+var_8C], xmm1
      vmovss  xmm0, dword ptr [rdi+14h]
      vmovss  [rbp+57h+var_88], xmm0
    }
  }
  if ( p_pos->trType )
    goto LABEL_53;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+var_A0]
    vucomiss xmm0, [rbp+57h+var_90]
  }
  if ( p_pos->trType )
    goto LABEL_53;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+var_A0+4]
    vucomiss xmm0, [rbp+57h+var_8C]
  }
  if ( p_pos->trType )
    goto LABEL_53;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+var_A0+8]
    vucomiss xmm0, [rbp+57h+var_88]
  }
  if ( p_pos->trType )
  {
LABEL_53:
    CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
    CG_EntitySP_InterpolateEntityOrigin(localClientNum, _RBX);
    CG_GetPoseOrigin(&_RBX->pose, &v59);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+var_A0]
      vucomiss xmm0, dword ptr [rbp+57h+outOrigin]
    }
    if ( !v38 )
      goto LABEL_57;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+var_A0+4]
      vucomiss xmm0, dword ptr [rbp+57h+outOrigin+4]
    }
    if ( !v38 )
      goto LABEL_57;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+var_A0+8]
      vucomiss xmm0, dword ptr [rbp+57h+outOrigin+8]
    }
    if ( v38 )
      v8 = 0;
    else
LABEL_57:
      v8 = 1;
  }
  _RDI = (_DWORD *)_RBX->pose.angles.v;
  if ( _RBX->prevState.apos.trType )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1D0h]
    vucomiss xmm0, dword ptr [rdi]
  }
  if ( _RBX->prevState.apos.trType )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1D4h]
    vucomiss xmm0, dword ptr [rdi+4]
  }
  if ( _RBX->prevState.apos.trType )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1D8h]
    vucomiss xmm0, dword ptr [rdi+8]
  }
  if ( _RBX->prevState.apos.trType )
  {
LABEL_62:
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi]
      vmovss  xmm7, dword ptr [rdi+4]
      vmovss  xmm8, dword ptr [rdi+8]
    }
    CgTrajectory::InterpolateEntityAngles(LocalClientGlobals, _RBX);
    __asm { vucomiss xmm6, dword ptr [rdi] }
    if ( !v50 )
      goto LABEL_66;
    __asm { vucomiss xmm7, dword ptr [rdi+4] }
    if ( !v50 )
      goto LABEL_66;
    __asm { vucomiss xmm8, dword ptr [rdi+8] }
    if ( v50 )
      v51 = 0;
    else
LABEL_66:
      v51 = 1;
    v8 |= v51;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && _RBX->nextState.eType == ET_PLAYER )
  {
    number = _RBX->nextState.number;
    if ( number )
    {
      LODWORD(v58) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1902, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( 1 )", "cent->nextState.number doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", v58, 1) )
        __debugbreak();
    }
    *_RDI = 0;
    _RBX->pose.angles.v[2] = 0.0;
  }
  v14 = v8;
  memset(v60, 0, 0xCui64);
LABEL_75:
  memset(&v59, 0, sizeof(v59));
  memset(&outOrigin, 0, sizeof(outOrigin));
  result = v14;
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
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
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1405, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( (notify->flags & 1) != 0 )
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+65E4h]
      vmulss  xmm2, xmm0, cs:__real@3a83126f
    }
    DObjUpdateClientInfo((DObj *)cgameGlob, *(float *)&_XMM1, (bool)notify, a4);
  }
  else
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, eax
      vmovaps [rsp+48h+var_18], xmm6
      vmulss  xmm6, xmm0, cs:__real@3a83126f
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( obj[77].hidePartBits.array[1] > obj[1228].skel.partBits.control.array[5] )
    {
      if ( DObjHasProceduralBones(notify) )
      {
        __asm { vmovaps xmm1, xmm6; deltaTime }
        XAnimBonePhysicsUpdateTime(notify, *(float *)&_XMM1);
      }
      __asm { vmovaps xmm1, xmm6; deltaTime }
      XAnimUpdateClientLodBlending(notify, *(float *)&_XMM1);
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm2, xmm0, cs:__real@3a83126f
    }
    DObjUpdateClientInfo((DObj *)cgameGlob, *(float *)&_XMM1, (bool)notify, a4);
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
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
  vec3_t inOrigin; 
  __int64 v29; 
  CgTrajectory v30; 
  vec3_t outPos; 
  vec3_t v32; 
  void *retaddr; 

  _RAX = &retaddr;
  v29 = -2i64;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1606, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !_RDI->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1607, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  __asm { vmovss  xmm6, dword ptr [rdi+65E0h] }
  CgTrajectory::CgTrajectory(&v30, localClientNum, cent, &cent->prevState);
  BgTrajectory::EvaluatePosTrajectory(&v30, _RDI->snap->serverTime, &outPos);
  v30.m_es = &cent->nextState.lerp;
  BgTrajectory::EvaluatePosTrajectory(&v30, _RDI->nextSnap->serverTime, &v32);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS) )
  {
    _EAX = CG_IsEntityInterpolationValid(cent);
    _ECX = 0;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm6, xmm6, xmm2, xmm3
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+var_40]
    vsubss  xmm1, xmm0, dword ptr [rsp+0C8h+outPos]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsp+0C8h+outPos]
    vmovss  dword ptr [rsp+0C8h+inOrigin], xmm3
    vmovss  xmm0, dword ptr [rsp+0C8h+var_40+4]
    vsubss  xmm1, xmm0, dword ptr [rsp+0C8h+outPos+4]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsp+0C8h+outPos+4]
    vmovss  dword ptr [rsp+0C8h+inOrigin+4], xmm3
    vmovss  xmm0, dword ptr [rsp+0C8h+var_40+8]
    vsubss  xmm1, xmm0, dword ptr [rsp+0C8h+outPos+8]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsp+0C8h+outPos+8]
    vmovss  dword ptr [rsp+0C8h+inOrigin+8], xmm3
  }
  CG_SetPoseOrigin(&cent->pose, &inOrigin);
  memset(&inOrigin, 0, sizeof(inOrigin));
  __asm { vmovaps xmm6, [rsp+0C8h+var_28] }
}

/*
==============
CG_EntitySP_Item
==============
*/

void __fastcall CG_EntitySP_Item(centity_t *cent, bool isVisible, double _XMM2_8)
{
  __int64 OnlyLocalClientNum; 
  WeaponDef *v11; 
  const char *WeaponName; 
  const DObj *ClientDObj; 
  const cg_t *LocalClientGlobals; 
  unsigned int RenderFlagForRefEntity; 
  unsigned int number; 
  __int64 v23; 
  __int64 v24; 
  float v25; 
  vec3_t outOrigin; 
  __int64 v27; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v29; 
  Weapon r_weapon; 
  char output[1024]; 

  v27 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 184, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  if ( !CgWeaponMap::ms_instance[OnlyLocalClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  _RAX = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[OnlyLocalClientNum], &cent->nextState);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+548h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+548h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+548h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  __asm { vmovd   edi, xmm2 }
  if ( (unsigned __int16)(_RDI - 1) > 0x224u )
  {
    LODWORD(v23) = (unsigned __int16)_RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 193, ASSERT_TYPE_ASSERT, "( 1 ) <= ( weapon.weaponIdx ) && ( weapon.weaponIdx ) <= ( (550 - 1) )", "weapon.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", v23, 1, 549) )
      __debugbreak();
    LOWORD(_RDI) = r_weapon.weaponIdx;
  }
  if ( (unsigned __int16)_RDI > bg_lastParsedWeaponIndex )
  {
    LODWORD(v24) = bg_lastParsedWeaponIndex;
    LODWORD(v23) = (unsigned __int16)_RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v23, v24) )
      __debugbreak();
  }
  _RDI = (unsigned __int16)_RDI;
  if ( !bg_weaponDefs[(unsigned __int16)_RDI] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v11 = bg_weaponDefs[_RDI];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 197, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v11->worldModel )
  {
    ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)OnlyLocalClientNum);
    if ( ClientDObj )
    {
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+548h+outOrigin+8]
        vaddss  xmm1, xmm0, cs:__real@40800000
        vmovss  dword ptr [rsp+548h+outOrigin+8], xmm1
      }
      if ( isVisible )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)OnlyLocalClientNum);
        RenderFlagForRefEntity = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
        _RAX = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
        number = cent->nextState.number;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups [rsp+548h+var_4A8], ymm0
        }
        v29.characterEVOffset = _RAX->characterEVOffset;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_12.scrollRateX
          vmovups ymmword ptr [rsp+548h+result.color], ymm0
        }
        result.characterEVOffset = NULL_SHADER_OVERRIDE_12.atlasTime;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+548h+var_508], xmm0
        }
        CG_Entity_AddDObjToScene((const LocalClientNum_t)OnlyLocalClientNum, ClientDObj, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v29, &outOrigin, v25, 0);
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
  __int64 v13; 
  WeaponDef *v17; 
  CgMissile *v18; 
  CgSoundSystem *SoundSystem; 
  const SndAliasList *WeaponSoundWithFallback; 
  const DObj *ClientDObj; 
  int flags; 
  int v23; 
  __int64 v24; 
  int time; 
  FxCombinedDef v26; 
  __int64 v27; 
  int v28; 
  FxCombinedDef v29; 
  const SndAliasList *v30; 
  int v31; 
  FxCombinedDef v32; 
  int v33; 
  FxCombinedDef v34; 
  unsigned int RenderFlagForRefEntity; 
  unsigned int number; 
  FxCombinedDef v43; 
  __int64 v44; 
  __int64 v45; 
  float v46; 
  vec3_t outOrigin; 
  unsigned int scriptableIndex; 
  FXRegisteredDef fxDef; 
  vec3_t v51; 
  FXRegisteredDef v52; 
  __int64 v53; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v55; 
  Weapon r_weapon; 

  v53 = -2i64;
  fxDef.m_particleSystemDef = NULL;
  v52.m_particleSystemDef = NULL;
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
      _RAX = BG_GetWeaponForEntity(Instance, &cent->nextState);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+80h+r_weapon.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rbp+80h+r_weapon.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rbp+80h+r_weapon.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      LOWORD(v13) = r_weapon.weaponIdx;
      if ( r_weapon.weaponIdx >= BG_GetNumWeapons() )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
          vmovups ymmword ptr [rbp+80h+r_weapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
          vmovups xmmword ptr [rbp+80h+r_weapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
          vmovsd  qword ptr [rbp+80h+r_weapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
        LOWORD(v13) = r_weapon.weaponIdx;
      }
      if ( (unsigned __int16)v13 > bg_lastParsedWeaponIndex )
      {
        LODWORD(v44) = (unsigned __int16)v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v44, bg_lastParsedWeaponIndex) )
          __debugbreak();
      }
      v13 = (unsigned __int16)v13;
      if ( !bg_weaponDefs[(unsigned __int16)v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      v17 = bg_weaponDefs[v13];
      if ( v17->missileConeSoundEnabled )
        CG_PlayMissileProjectedConeSound(OnlyLocalClientNum, cent);
      if ( v7 )
      {
        v18 = CgMissile::GetSystem(OnlyLocalClientNum);
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 499, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
          __debugbreak();
        CgMissile::BlendPredictedMissileTrajectoryForRemoteViewer(v18, cent, v17);
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
        LOWORD(v23) = flags;
        if ( (flags & 2) == 0 && (flags & 0x200) == 0 )
        {
          LOWORD(v24) = r_weapon.weaponIdx;
          if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
          {
            LODWORD(v45) = bg_lastParsedWeaponIndex;
            LODWORD(v44) = r_weapon.weaponIdx;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v44, v45) )
              __debugbreak();
          }
          v24 = (unsigned __int16)v24;
          if ( !bg_weaponDefs[(unsigned __int16)v24] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
            __debugbreak();
          if ( bg_weaponDefs[v24]->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || (time = CG_GetLocalClientGlobals(OnlyLocalClientNum)->time, time - cent->nextState.lerp.u.anonymous.data[2] > BG_ProjIgnitionDelay(&r_weapon, 0)) )
          {
            v43.particleSystemDef = BG_ProjTrailEffect(&r_weapon, cent->nextState.inAltWeaponMode).particleSystemDef;
            fxDef.m_particleSystemDef = v43.particleSystemDef;
            cent->flags |= 2u;
            if ( v43.particleSystemDef )
              CG_PlayBoltedEffect(OnlyLocalClientNum, &fxDef, cent->nextState.number, scr_const.tag_fx);
            goto LABEL_43;
          }
          v23 = cent->flags;
        }
        if ( (v23 & 0x202) == 514 )
        {
          v26.particleSystemDef = BG_ProjTrailEffect(&r_weapon, 0).particleSystemDef;
          fxDef.m_particleSystemDef = v26.particleSystemDef;
          cent->flags &= ~2u;
          if ( v26.particleSystemDef )
            CG_StopBoltedEffects(OnlyLocalClientNum, &fxDef, cent->nextState.number, scr_const.tag_fx);
        }
LABEL_43:
        if ( (cent->flags & 0x800) == 0 )
        {
          LOWORD(v27) = r_weapon.weaponIdx;
          if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
          {
            LODWORD(v45) = bg_lastParsedWeaponIndex;
            LODWORD(v44) = r_weapon.weaponIdx;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v44, v45) )
              __debugbreak();
          }
          v27 = (unsigned __int16)v27;
          if ( !bg_weaponDefs[(unsigned __int16)v27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
            __debugbreak();
          if ( bg_weaponDefs[v27]->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || (v28 = CG_GetLocalClientGlobals(OnlyLocalClientNum)->time, v28 - cent->nextState.lerp.u.anonymous.data[2] > BG_ProjIgnitionDelay(&r_weapon, 0)) )
          {
            v29.particleSystemDef = BG_ProjIgnitionEffect(&r_weapon, 0).particleSystemDef;
            v52.m_particleSystemDef = v29.particleSystemDef;
            cent->flags |= 0x800u;
            if ( v29.particleSystemDef )
              CG_PlayBoltedEffect(OnlyLocalClientNum, &v52, cent->nextState.number, scr_const.tag_fx);
            v30 = BG_ProjIgnitionSound(&r_weapon, 0);
            if ( v30 )
            {
              CG_GetPoseOrigin(&cent->pose, &outOrigin);
              CgSoundSystem::PlaySoundAlias(SoundSystem, cent->nextState.number, &outOrigin, v30);
              memset(&outOrigin, 0, sizeof(outOrigin));
            }
          }
        }
        v31 = cent->flags;
        if ( (v31 & 0x400) == 0 )
        {
          cent->flags = v31 | 0x400;
          v32.particleSystemDef = BG_ProjBeaconEffect(&r_weapon, 0).particleSystemDef;
          if ( v32.particleSystemDef )
          {
            *(FxCombinedDef *)outOrigin.v = v32;
            CG_PlayBoltedEffect(OnlyLocalClientNum, (const FXRegisteredDef *)&outOrigin, cent->nextState.number, scr_const.tag_fx);
          }
        }
        v33 = cent->flags;
        if ( (v33 & 0x40000) == 0 )
        {
          cent->flags = v33 | 0x40000;
          v34.particleSystemDef = BG_ProjBodyEffect(&r_weapon, 0).particleSystemDef;
          if ( v34.particleSystemDef )
          {
            *(FxCombinedDef *)outOrigin.v = v34;
            CG_PlayBoltedEffect(OnlyLocalClientNum, (const FXRegisteredDef *)&outOrigin, cent->nextState.number, scr_const.tag_fx);
          }
        }
        CG_GetPoseOrigin(&cent->pose, &v51);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+80h+var_108+8]
          vaddss  xmm1, xmm0, cs:__real@40800000
          vmovss  dword ptr [rbp+80h+var_108+8], xmm1
        }
        if ( isVisible )
        {
          RenderFlagForRefEntity = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
          _RAX = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
          number = cent->nextState.number;
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups [rbp+80h+var_B0], ymm0
          }
          v55.characterEVOffset = _RAX->characterEVOffset;
          __asm
          {
            vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_12.scrollRateX
            vmovups ymmword ptr [rbp+80h+result.color], ymm0
          }
          result.characterEVOffset = NULL_SHADER_OVERRIDE_12.atlasTime;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vmovss  [rsp+180h+var_140], xmm0
          }
          CG_Entity_AddDObjToScene(OnlyLocalClientNum, ClientDObj, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v55, &v51, v46, 0);
        }
        CG_AddHudGrenade(LocalClientGlobals, cent);
        CG_GameInterface_EntitySP_Missile(cent, isVisible);
      }
    }
  }
  memset(&v51, 0, sizeof(v51));
}

/*
==============
CG_EntitySP_PrimaryLight
==============
*/
void CG_EntitySP_PrimaryLight(centity_t *cent)
{
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v6; 
  char v11; 
  bool v12; 
  bool v71; 
  __int64 v95; 
  __int64 v96; 
  unsigned int primaryLightCount; 
  double v98; 
  double v99; 
  cg_t *v100; 
  tmat33_t<vec3_t> axis; 
  float v1[4]; 
  LerpEntityStatePrimaryLightUnpacked out; 
  LerpEntityStatePrimaryLightUnpacked v104; 

  if ( cent->nextState.eType != ET_PRIMARY_LIGHT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1536, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PRIMARY_LIGHT)", (const char *)&queryFormat, "cent->nextState.eType == ET_PRIMARY_LIGHT") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1537, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  _R15 = CG_GetLocalClientGlobals(OnlyLocalClientNum);
  v6 = comWorld.firstScriptablePrimaryLight + cent->nextState.staticState.general.xmodel;
  v100 = _R15;
  if ( ((int)v6 < (int)comWorld.firstScriptablePrimaryLight || (int)v6 >= (int)comWorld.primaryLightCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 106, ASSERT_TYPE_ASSERT, "(primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount ))", (const char *)&queryFormat, "primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount )") )
    __debugbreak();
  if ( (unsigned int)v6 >= rgp.world->primaryLightCount )
  {
    primaryLightCount = rgp.world->primaryLightCount;
    LODWORD(v95) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1546, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( rgp.world->primaryLightCount )", "primaryLightIndex doesn't index rgp.world->primaryLightCount\n\t%i not in [0, %i)", v95, primaryLightCount) )
      __debugbreak();
  }
  _RBX = (int)v6;
  _RDI = rgp.world->primaryLights;
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  if ( (unsigned int)v6 >= comWorld.primaryLightCount )
  {
    LODWORD(v96) = comWorld.primaryLightCount;
    LODWORD(v95) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v95, v96) )
      __debugbreak();
  }
  _R14 = comWorld.primaryLights;
  _RSI = v6;
  if ( comWorld.primaryLights[_RSI].type == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1549, ASSERT_TYPE_ASSERT, "(refLight->type != 1)", (const char *)&queryFormat, "refLight->type != GFX_LIGHT_TYPE_DIR") )
    __debugbreak();
  if ( (_RDI[_RBX].flags & 0x40) == 0 )
  {
    __asm
    {
      vmovaps [rsp+110h+var_30], xmm6
      vmovaps [rsp+110h+var_40], xmm7
    }
    LerpEntityStatePrimaryLightUnpack((const LerpEntityStatePrimaryLightPacked *)&cent->prevState.u, &out);
    LerpEntityStatePrimaryLightUnpack((const LerpEntityStatePrimaryLightPacked *)&cent->nextState.lerp.u, &v104);
    __asm
    {
      vmovss  xmm6, dword ptr [r15+65E0h]
      vmovss  xmm0, dword ptr [rbp+57h+var_70.colorLinearSrgb]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+out.colorLinearSrgb]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+57h+out.colorLinearSrgb]
      vmovss  dword ptr [rbx+rdi+14h], xmm3
      vmovss  xmm0, dword ptr [rbp+57h+var_70.colorLinearSrgb+4]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+out.colorLinearSrgb+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+57h+out.colorLinearSrgb+4]
      vmovss  dword ptr [rbx+rdi+18h], xmm3
      vmovss  xmm0, dword ptr [rbp+57h+var_70.colorLinearSrgb+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+out.colorLinearSrgb+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+57h+out.colorLinearSrgb+8]
      vmovss  xmm6, cs:__real@3f800000
      vmovss  dword ptr [rbx+rdi+1Ch], xmm3
      vmovss  xmm1, dword ptr [r15+65E0h]
      vsubss  xmm0, xmm6, xmm1
      vmulss  xmm2, xmm0, [rbp+57h+out.intensity]
      vmulss  xmm1, xmm1, [rbp+57h+var_70.intensity]
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rbx+rdi+10h], xmm2
      vmovss  xmm3, dword ptr [r15+65E0h]
      vmulss  xmm1, xmm3, [rbp+57h+var_70.uvIntensity]
      vsubss  xmm0, xmm6, xmm3
      vmulss  xmm2, xmm0, [rbp+57h+out.uvIntensity]
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rbx+rdi+4], xmm2
      vcomiss xmm6, dword ptr [rsi+r14+8Ch]
      vxorps  xmm7, xmm7, xmm7
    }
    if ( !(v11 | v12) )
    {
      AnglesToAxis(&cent->pose.angles, &axis);
      __asm
      {
        vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm0, dword ptr [rbp+57h+axis]
        vmovss  xmm2, dword ptr [rbp+57h+axis+4]
        vxorps  xmm1, xmm0, xmm3
        vxorps  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbx+rdi+20h], xmm1
        vmovss  xmm1, dword ptr [rbp+57h+axis+8]
      }
      _R15 = &_RDI[_RBX].bulbLength;
      __asm
      {
        vxorps  xmm2, xmm1, xmm3
        vmovss  dword ptr [rbx+rdi+28h], xmm2
        vmovss  dword ptr [rbx+rdi+24h], xmm0
      }
      if ( &_R14[_RSI].bulbLength == _R15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+axis+0Ch]
        vmulss  xmm3, xmm0, dword ptr [r12+4]
        vmovss  xmm1, dword ptr [rbp+57h+axis]
        vmulss  xmm2, xmm1, dword ptr [r12]
        vmovss  xmm0, dword ptr [rbp+57h+axis+18h]
        vmulss  xmm1, xmm0, dword ptr [r12+8]
        vmovss  xmm0, dword ptr [rbp+57h+axis+10h]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  xmm1, dword ptr [rbp+57h+axis+4]
        vmovss  dword ptr [r15], xmm2
        vmulss  xmm3, xmm0, dword ptr [r12+4]
        vmulss  xmm2, xmm1, dword ptr [r12]
        vmovss  xmm0, dword ptr [rbp+57h+axis+1Ch]
        vmulss  xmm1, xmm0, dword ptr [r12+8]
        vmovss  xmm0, dword ptr [rbp+57h+axis+14h]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  xmm1, dword ptr [rbp+57h+axis+8]
        vmovss  dword ptr [r15+4], xmm2
        vmulss  xmm2, xmm1, dword ptr [r12]
        vmulss  xmm3, xmm0, dword ptr [r12+4]
        vmovss  xmm0, dword ptr [rbp+57h+axis+20h]
        vmulss  xmm1, xmm0, dword ptr [r12+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  dword ptr [r15+8], xmm2
        vmovss  xmm2, cs:__real@3a83126f; epsilon
        vmovss  [rbp+57h+v1], xmm7
        vmovss  [rbp+57h+var_9C], xmm7
        vmovss  [rbp+57h+var_98], xmm7
      }
      v71 = VecNCompareCustomEpsilon(_RDI[_RBX].bulbLength.v, v1, *(float *)&_XMM2, 3);
      v11 = 0;
      v12 = !v71;
      if ( v71 )
      {
        _R15->v[0] = 0.0039215689;
        _RDI[_RBX].bulbLength.v[1] = 0.0039215689;
        _RDI[_RBX].bulbLength.v[2] = 0.0039215689;
      }
      _R15 = v100;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+r14+90h]
      vcomiss xmm0, xmm7
    }
    if ( !(v11 | v12) )
    {
      CG_GetPoseOrigin(&cent->pose, &_RDI[_RBX].origin);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+r14+90h]
        vcomiss xmm0, xmm7
      }
      if ( !(v11 | v12) )
        goto LABEL_35;
    }
    __asm { vcomiss xmm6, dword ptr [rsi+r14+8Ch] }
    if ( v11 | v12 )
    {
      __asm { vmovss  xmm4, dword ptr [rbx+rdi+60h] }
    }
    else
    {
LABEL_35:
      __asm
      {
        vmovss  xmm1, dword ptr [r15+65E0h]
        vsubss  xmm0, xmm6, xmm1
        vmulss  xmm2, xmm0, [rbp+57h+out.radius]
        vmulss  xmm1, xmm1, [rbp+57h+var_70.radius]
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rbx+rdi+44h], xmm2
        vmovss  xmm3, dword ptr [r15+65E0h]
        vmulss  xmm1, xmm3, [rbp+57h+var_70.cosHalfFovOuter]
        vsubss  xmm0, xmm6, xmm3
        vmulss  xmm2, xmm0, [rbp+57h+out.cosHalfFovOuter]
        vaddss  xmm4, xmm2, xmm1
        vmovss  dword ptr [rbx+rdi+60h], xmm4
        vmovss  xmm3, dword ptr [r15+65E0h]
        vmulss  xmm1, xmm3, [rbp+57h+var_70.cosHalfFovInner]
        vsubss  xmm0, xmm6, xmm3
        vmulss  xmm2, xmm0, [rbp+57h+out.cosHalfFovInner]
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rbx+rdi+64h], xmm2
      }
    }
    __asm
    {
      vcomiss xmm4, xmm7
      vmovaps xmm7, [rsp+110h+var_40]
    }
    if ( v11 | v12 )
      goto LABEL_39;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+rdi+64h]
      vcomiss xmm4, xmm0
    }
    if ( !v11 )
      goto LABEL_39;
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v11 | v12) )
    {
LABEL_39:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rdi+64h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+110h+var_D8], xmm0
        vcvtss2sd xmm1, xmm4, xmm4
        vmovsd  [rsp+110h+var_E0], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1593, ASSERT_TYPE_ASSERT, "(0.0f < light->cosHalfFovOuter && light->cosHalfFovOuter < light->cosHalfFovInner && light->cosHalfFovInner <= 1.0f)", "%s\n\t%g, %g", "0.0f < light->cosHalfFovOuter && light->cosHalfFovOuter < light->cosHalfFovInner && light->cosHalfFovInner <= 1.0f", v98, v99) )
        __debugbreak();
    }
    __asm { vmovaps xmm6, [rsp+110h+var_30] }
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

void __fastcall CG_EntitySP_ProcessEntityDobjUpdate(LocalClientNum_t localClientNum, int entnum, double _XMM2_8)
{
  DObj *ClientDObj; 
  cg_t *LocalClientGlobals; 
  bool v10; 
  cg_t *v11; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  bool v15; 
  XAnimNotifyHandle v24; 
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 ClientMissedNotifyList; 
  const XAnimNotify *ClientNotifyFirst; 
  bool v28; 
  centity_t *Entity; 
  bool v30; 
  __int64 v31; 
  __int64 v32; 
  const XAnimMissedNotify *v33; 
  const char *v34; 
  const char *v35; 
  unsigned __int16 v37; 
  const XAnimMissedNotify *v38; 

  ClientDObj = Com_GetClientDObj(entnum, localClientNum);
  if ( ClientDObj )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v11 = LocalClientGlobals;
    if ( LocalClientGlobals->renderingThirdPerson || (p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState, Instance = CgWeaponMap::GetInstance(localClientNum), IsThirdPersonMode = BG_IsThirdPersonMode(Instance, p_predictedPlayerState)) )
      IsThirdPersonMode = 1;
    v15 = v11->predictedPlayerState.clientNum != entnum || IsThirdPersonMode;
    if ( (ClientDObj->flags & 1) == 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmovaps [rsp+78h+var_48], xmm6
        vmulss  xmm6, xmm0, cs:__real@3a83126f
        vxorps  xmm2, xmm2, xmm2
        vcomiss xmm6, xmm2
      }
      if ( v11->frametime > (unsigned int)v11->animFrametime )
      {
        if ( DObjHasProceduralBones(ClientDObj) )
        {
          __asm { vmovaps xmm1, xmm6; deltaTime }
          XAnimBonePhysicsUpdateTime(ClientDObj, *(float *)&_XMM1);
        }
        __asm { vmovaps xmm1, xmm6; deltaTime }
        XAnimUpdateClientLodBlending(ClientDObj, *(float *)&_XMM1);
      }
      __asm { vmovaps xmm6, [rsp+78h+var_48] }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm2, xmm0, cs:__real@3a83126f
    }
    DObjUpdateClientInfo((DObj *)&v37, *(float *)&_XMM1, v10, v15);
    v24.m_notifyIndex = v37;
    if ( v37 != 0xFFFF )
    {
      OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
      ClientMissedNotifyList = DObjGetClientMissedNotifyList(&v38);
      ClientNotifyFirst = DObjGetClientNotifyFirst(v24);
      if ( ClientNotifyFirst || (_DWORD)ClientMissedNotifyList )
      {
        v28 = ScriptableCl_IsScriptableEntityByNum(OnlyLocalClientNum, entnum) != 0;
        Entity = CG_GetEntity(OnlyLocalClientNum, entnum);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 2084, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        v30 = CG_Pose_IsRagdoll(&Entity->pose) || Com_IsRagdollTrajectory(&Entity->nextState.lerp.pos);
        v31 = ClientMissedNotifyList;
        if ( (int)ClientMissedNotifyList > 0 )
        {
          v32 = 0i64;
          do
          {
            v33 = &v38[v32];
            if ( v38[v32].entityNumber == entnum )
            {
              if ( v28 )
              {
                v34 = SL_ConvertToString(v33->notify.noteName);
                ScriptableCl_AnimNotetrackEvent(OnlyLocalClientNum, entnum, v34);
              }
              if ( v30 )
                CG_Entity_ProcessRagdollAnimNotify(OnlyLocalClientNum, entnum, &v33->notify);
            }
            ++v32;
            --v31;
          }
          while ( v31 );
        }
        for ( ; ClientNotifyFirst; ClientNotifyFirst = DObjGetClientNotifyNext(ClientNotifyFirst) )
        {
          if ( v28 )
          {
            v35 = SL_ConvertToString(ClientNotifyFirst->noteName);
            ScriptableCl_AnimNotetrackEvent(OnlyLocalClientNum, entnum, v35);
          }
          if ( v30 )
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
  double v4; 
  LocalClientNum_t OnlyLocalClientNum; 
  const DObj *ClientDObj; 
  const DObj *v10; 
  const cg_t *LocalClientGlobals; 
  unsigned int RenderFlagForRefEntity; 
  unsigned int number; 
  float characterEVOffset; 
  int v19; 
  LocalClientNum_t v20; 
  LocalClientNum_t v21; 
  CgVehicleSystemSP *VehicleSystemSP; 
  LocalClientNum_t v23; 
  LocalClientNum_t v24; 
  LocalClientNum_t v25; 
  LocalClientNum_t v26; 
  LocalClientNum_t v27; 
  LocalClientNum_t v28; 
  LocalClientNum_t v29; 
  LocalClientNum_t v30; 
  __int64 v31; 
  float v32; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v34; 
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
      v10 = ClientDObj;
      if ( ClientDObj )
      {
        CG_Entity_CalcLightingOrigin(&cent->pose, ClientDObj, &outLightingOrigin);
        if ( isVisible )
        {
          LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
          RenderFlagForRefEntity = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
          _RAX = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
          number = cent->nextState.number;
          __asm { vmovups ymm0, ymmword ptr [rax] }
          characterEVOffset = _RAX->characterEVOffset;
          __asm
          {
            vmovups [rsp+0F8h+var_78], ymm0
            vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_12.scrollRateX
          }
          v34.characterEVOffset = characterEVOffset;
          __asm
          {
            vmovups ymmword ptr [rsp+0F8h+result.color], ymm0
            vxorps  xmm0, xmm0, xmm0
            vmovss  [rsp+0F8h+var_B8], xmm0
          }
          result.characterEVOffset = NULL_SHADER_OVERRIDE_12.atlasTime;
          CG_Entity_AddDObjToScene(OnlyLocalClientNum, v10, &cent->pose, number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v34, &outLightingOrigin, v32, 0);
        }
      }
      break;
    case ET_PLAYER:
      return;
    case ET_ITEM:
      CG_EntitySP_Item(cent, isVisible, v4);
      break;
    case ET_MISSILE:
      CG_EntitySP_Missile(cent, isVisible);
      break;
    case ET_SCRIPTMOVER:
      CG_EntitySP_ScriptMover(cent, isVisible, hasMoved);
      break;
    case ET_SOUND:
      v23 = CL_GetOnlyLocalClientNum();
      CG_EntitySP_Sound(v23, cent);
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
      v19 = cent->nextState.number;
      v20 = CL_GetOnlyLocalClientNum();
      LUIOnEntityElementSpawnerSP::UpdateFiltersForVehicle(v20, v19);
$LN28_74:
      v21 = CL_GetOnlyLocalClientNum();
      VehicleSystemSP = CgVehicleSystemSP::GetVehicleSystemSP(v21);
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
      v24 = CL_GetOnlyLocalClientNum();
      v25 = CL_GetOnlyLocalClientNum();
      CG_PhysicsObject_UpdatePhysicsChild((Physics_WorldId)(3 * v25 + 2), v24, cent);
      Profile_EndInternal(NULL);
      break;
    case ET_BEAM:
      v26 = CL_GetOnlyLocalClientNum();
      CG_BeamEntity_Update(v26, cent);
      break;
    case ET_CLIENT_CHARACTER:
      v27 = CL_GetOnlyLocalClientNum();
      CG_ClientCharacter_ProcessEntity(v27, cent);
      break;
    case ET_RAGDOLL_CONSTRAINT:
      v28 = CL_GetOnlyLocalClientNum();
      CG_RagdollConstraintEntity_Update(v28, cent);
      break;
    case ET_PHYSICS_VOLUME:
      v29 = CL_GetOnlyLocalClientNum();
      CG_PhysicsVolume_Update(v29, cent);
      break;
    case ET_COVERWALL:
      v30 = CL_GetOnlyLocalClientNum();
      CG_CoverWall_ProcessEntity(v30, cent);
      break;
    default:
      if ( cent->nextState.eType != ET_INVISIBLE )
      {
        LODWORD(v31) = cent->nextState.eType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1968, ASSERT_TYPE_ASSERT, "( ( cent->nextState.eType == ET_INVISIBLE ) )", "( cent->nextState.eType ) = %i", v31) )
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
  double v4; 
  __int16 scriptMoverType; 
  LocalClientNum_t OnlyLocalClientNum; 
  LocalClientNum_t v10; 
  LerpEntityState *p_lerp; 
  DObj *ClientDObj; 
  const cg_t *v13; 
  unsigned int RenderFlagForRefEntity; 
  float characterEVOffset; 
  bool v18; 
  bool useAlternateColor; 
  bool v23; 
  bool v24; 
  vec3_t *p_origin; 
  const cg_t *LocalClientGlobals; 
  unsigned int renderFlags; 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  unsigned int number; 
  const GfxBrushModel *BrushModel; 
  float v31; 
  bool isFadeActive; 
  unsigned int scriptableIndex; 
  vec3_t outOrigin; 
  team_t team; 
  vec3_t origin; 
  GfxSceneHudOutlineInfo v37; 
  __int64 v38; 
  GfxSceneHudOutlineInfo result; 
  bool isFadeComplete; 
  bool isOverHalfWayFaded; 

  v38 = -2i64;
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
        CG_EntitySP_Item(cent, isVisible, v4);
        return;
    }
    v10 = CL_GetOnlyLocalClientNum();
    team = (unsigned int)CG_EntitySP_GetTeam(v10, cent);
    if ( ScriptableCl_GetIndexForEntity(v10, cent, &scriptableIndex) )
    {
      ScriptableCl_UpdatePosition(v10, scriptableIndex, cent);
      ScriptableCl_UpdateSharedInstance(v10, scriptableIndex, cent->nextState.number);
      p_lerp = &cent->nextState.lerp;
    }
    else
    {
      p_lerp = &cent->nextState.lerp;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(v10);
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
    ClientDObj = Com_GetClientDObj(cent->nextState.number, v10);
    if ( !ClientDObj )
      return;
    v13 = CG_GetLocalClientGlobals(v10);
    *(_QWORD *)outOrigin.v = v13;
    if ( isVisible )
    {
      if ( hasMoved || (cent->flags & 0x6000) != 0x2000 )
      {
        CG_Entity_CalcLightingOrigin(&cent->pose, ClientDObj, &cent->lightingOrigin);
        v13 = *(const cg_t **)outOrigin.v;
      }
      cent->flags |= 0x2000u;
      RenderFlagForRefEntity = CG_EntitySP_GetRenderFlagForRefEntity(v13, cent, &p_lerp->eFlags);
      _RAX = CG_Entity_GetHudOutlineInfo(&result, *(const cg_t **)outOrigin.v, cent);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rbp+57h+var_A0], ymm0
      }
      characterEVOffset = _RAX->characterEVOffset;
      v37.mapEntLookup = cent->nextState.lerp.u.agentCorpse.attachModels[6].m_data;
      if ( (LOBYTE(cent->nextState.lerp.u.vehicle.bodyPitch) & 8) != 0 && CG_Utils_ShouldHighlightScriptMovers(v10) && CG_Utils_ShouldHighlightInScope(v10) && !CG_Utils_StencilScriptControlled(v10) )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vmovss  dword ptr [rbp+57h+var_A0+4], xmm0
        }
        v18 = CG_Utils_PlayerLockedOn(v10, cent);
        useAlternateColor = v37.useAlternateColor;
        if ( v18 )
          useAlternateColor = 1;
        v37.useAlternateColor = useAlternateColor;
      }
      isFadeActive = 0;
      isFadeComplete = 0;
      isOverHalfWayFaded = 0;
      CG_CorpseFade_ApplyDissolveMaterial(v10, ClientDObj, cent->nextState.number, &isFadeActive, &isFadeComplete, &isOverHalfWayFaded);
      if ( !isFadeComplete )
      {
        __asm
        {
          vmovups ymm0, [rbp+57h+var_A0]
          vmovups [rbp+57h+var_A0], ymm0
        }
        v37.characterEVOffset = characterEVOffset;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_12.scrollRateX
          vmovups ymmword ptr [rbp+57h+result.color], ymm0
        }
        result.characterEVOffset = NULL_SHADER_OVERRIDE_12.atlasTime;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+120h+var_E0], xmm0
        }
        CG_Entity_AddDObjToScene(v10, ClientDObj, &cent->pose, cent->nextState.number, RenderFlagForRefEntity, (shaderOverride_t *)&result, &v37, &cent->lightingOrigin, v31, 0);
      }
    }
    v23 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 9u);
    v24 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&p_lerp->eFlags, FLAG_COUNT);
    if ( v23 || v24 || CG_LaserForceOnEnabled() )
      CG_LaserAdd(v10, cent->nextState.number, team);
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
  int v7; 
  unsigned __int16 v8; 
  SndAliasList *SoundAliasListByName; 
  SndAliasList *v10; 
  const SndAliasList *v11; 
  char v12; 
  char v13; 
  unsigned int torsoPitchPacked; 
  float volumeScale; 
  float v27; 
  vec3_t outOrigin; 
  char v30; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = cent;
  v7 = cent->nextState.lerp.u.anonymous.data[0];
  if ( v7 )
  {
    if ( (unsigned int)(v7 - 1) <= 1 )
    {
      torsoPitchPacked = _RDI->nextState.lerp.u.player.torsoPitchPacked;
      if ( torsoPitchPacked >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1486, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", _RDI->nextState.lerp.u.player.torsoPitchPacked, 0x4000) )
        __debugbreak();
      CG_EnableAudioTriggerByIndex(torsoPitchPacked, _RDI->nextState.lerp.u.anonymous.data[0] == 2);
    }
    else if ( v7 == 3 && localClientNum == LOCAL_CLIENT_0 )
    {
      CG_SND_BankDetailStream_SetScriptedSoundbanks(*(_QWORD *)&_RDI->nextState.lerp.u.scriptMover.animIndex);
    }
  }
  else
  {
    v8 = _RDI->nextState.lerp.u.player.torsoPitchPacked;
    if ( v8 )
    {
      if ( _RDI->nextState.lerp.u.actor.lookAtEntityNum )
      {
        SoundAliasListByName = CL_CGameSP_GetSoundAliasListByName(v8);
        v10 = CL_CGameSP_GetSoundAliasListByName(_RDI->nextState.lerp.u.player.waistPitchPacked);
        v11 = v10;
        if ( SoundAliasListByName )
        {
          if ( v10 )
          {
            CG_GetLocalClientGlobals(localClientNum);
            __asm
            {
              vmovss  xmm3, dword ptr [rdi+174h]
              vmovss  xmm0, dword ptr [rdi+1F0h]
              vsubss  xmm1, xmm0, xmm3
              vmulss  xmm2, xmm1, dword ptr [rax+65E0h]
              vaddss  xmm6, xmm2, xmm3
              vxorps  xmm0, xmm0, xmm0
              vmovss  xmm7, cs:__real@3f800000
              vcomiss xmm6, xmm0
            }
            if ( v12 )
              goto LABEL_24;
            __asm { vcomiss xmm6, xmm7 }
            if ( !(v12 | v13) )
            {
LABEL_24:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1466, ASSERT_TYPE_ASSERT, "((lerp >= 0.0f) && (lerp <= 1.0f))", (const char *)&queryFormat, "(lerp >= 0.0f) && (lerp <= 1.0f)") )
                __debugbreak();
            }
            if ( SoundAliasListByName->head->assetId == v11->head->assetId )
            {
              CG_GetPoseOrigin(&_RDI->pose, &outOrigin);
              __asm
              {
                vmovss  [rsp+98h+var_68], xmm7
                vmovss  [rsp+98h+volumeScale], xmm7
                vmovaps xmm2, xmm6; lerp
              }
              SND_PlayBlendedSoundAlias(SoundAliasListByName, v11, *(const float *)&_XMM2, localClientNum, _RDI->nextState.number, volumeScale, v27, &outOrigin, 0, SASYS_CGAME);
              memset(&outOrigin, 0, sizeof(outOrigin));
            }
            else
            {
              Com_Printf(9, "%s and %s are not valid blendable aliases.", SoundAliasListByName->aliasName, v11->aliasName);
            }
          }
        }
      }
    }
  }
  _R11 = &v30;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
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
  float characterEVOffset; 
  bool v18; 
  bool useAlternateColor; 
  bool v24; 
  bool v25; 
  team_t Team; 
  CgCompassSystemSP *CompassSystemSP; 
  float fmt; 
  float v29; 
  unsigned int scriptableIndex; 
  unsigned int renderFlags; 
  vec3_t outOrigin; 
  GfxSceneHudOutlineInfo v33; 
  shaderOverride_t v34; 
  __int64 v35; 
  GfxSceneHudOutlineInfo result; 
  vec3_t v37; 

  v35 = -2i64;
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
      __asm
      {
        vmovss  xmm0, cs:__real@bf800000
        vmovss  dword ptr [rsp+140h+fmt], xmm0
      }
      Turret_PlaceSentry_Client(OnlyLocalClientNum, &cent->nextState, &outOrigin, &cent->pose.angles, fmt);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+outOrigin]
        vmovss  [rbp+40h+var_40], xmm0
        vmovss  xmm1, dword ptr [rsp+140h+outOrigin+4]
        vmovss  [rbp+40h+var_3C], xmm1
        vmovss  xmm0, dword ptr [rsp+140h+outOrigin+8]
        vaddss  xmm2, xmm0, cs:__real@42000000
        vmovss  [rbp+40h+var_38], xmm2
      }
      CG_SetPoseOrigin(&cent->pose, &outOrigin);
      if ( isVisible )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
        renderFlags = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags) | 0x1000;
        _RAX = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups [rbp+40h+var_A0], ymm0
          vmovups ymmword ptr [rsp+140h+var_D8.drawOccludedPixels], ymm0
        }
        characterEVOffset = _RAX->characterEVOffset;
        if ( (unsigned int)CG_EntitySP_GetTeam(OnlyLocalClientNum, cent) != 2 && CG_Utils_ShouldHighlightTurrets(OnlyLocalClientNum) && CG_Utils_ShouldHighlightInScope(OnlyLocalClientNum) && !CG_Utils_StencilScriptControlled(OnlyLocalClientNum) )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  dword ptr [rsp+140h+var_D8.forSpectator], xmm0
          }
          v18 = CG_Utils_PlayerLockedOn(OnlyLocalClientNum, cent);
          useAlternateColor = v33.useAlternateColor;
          if ( v18 )
            useAlternateColor = 1;
          v33.useAlternateColor = useAlternateColor;
          __asm
          {
            vmovups ymm0, ymmword ptr [rsp+140h+var_D8.drawOccludedPixels]
            vmovups [rbp+40h+var_A0], ymm0
          }
        }
        CG_Entity_DepthSortWorldTurretWithViewarms(LocalClientGlobals, cent, &renderFlags);
        __asm
        {
          vmovups ymm0, [rbp+40h+var_A0]
          vmovups ymmword ptr [rsp+140h+var_D8.drawOccludedPixels], ymm0
        }
        v33.characterEVOffset = characterEVOffset;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_12.scrollRateX
          vmovups [rbp+40h+var_A0], ymm0
        }
        v34.atlasTime = NULL_SHADER_OVERRIDE_12.atlasTime;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+140h+var_100], xmm0
        }
        CG_Entity_AddDObjToScene(OnlyLocalClientNum, ClientDObj, &cent->pose, cent->nextState.number, renderFlags, &v34, &v33, &v37, v29, 0);
      }
      v24 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 9u);
      v25 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&cent->nextState.lerp.eFlags, FLAG_COUNT);
      if ( v24 || v25 || CG_LaserForceOnEnabled() )
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
  __int64 v7; 
  bool v8; 
  char v9; 
  bool v10; 
  bool v11; 
  bool v13; 
  bool v15; 
  int v16; 
  bool v18; 
  bool v19; 
  __int64 v20; 
  int *v21; 
  int v22; 
  int v23; 
  bool v27; 
  DObj *ClientDObj; 
  DObj *v44; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int *v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v58; 
  bool v59; 
  float fmt; 
  __int64 v62; 
  __int64 v63; 
  char v64; 
  char v65; 
  bool v66; 
  bool v67; 
  int *v68; 
  vec3_t outOrigin; 
  unsigned int v70; 
  int v71; 
  int v72[4]; 
  DObj *obj; 
  __int64 v74; 
  void *retaddr; 

  _RAX = &retaddr;
  v74 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v71 = entityMoved;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 779, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 780, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  LOWORD(v70) = cent->nextState.number;
  v7 = (__int16)v70;
  v8 = (cent->flags & 0x80000) != 0;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v66 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x17u);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v64 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x17u);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v9 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 0x17u);
  v10 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xCu);
  v11 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 0xCu) != v10;
  if ( v9 != v64 || (v65 = 0, v11) )
    v65 = 1;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v13 = ScriptableCl_IsScriptableEntity(localClientNum, cent) != 0;
  if ( cent->nextState.eType != ET_SCRIPTMOVER || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) || v13 )
    goto LABEL_33;
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((cent->nextState.eType - 12) & 0xFFFD) == 0 )
  {
LABEL_33:
    _RBX = CgEntitySystem::GetEntitySystem(localClientNum);
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    if ( (unsigned int)v7 >= 0x800 )
    {
      LODWORD(v62) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 486, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v62, 2048) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v18 = (unsigned int)v7 < ComCharacterLimits::ms_gameData.m_clientCount;
    v19 = (_DWORD)v7 == ComCharacterLimits::ms_gameData.m_clientCount;
    if ( (int)v7 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
    {
      v20 = (__int16)v70;
      _RAX = 3i64 * (__int16)v70 + 389124;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rax*4]
        vmovss  [rbp+57h+var_68], xmm0
        vmovss  xmm1, dword ptr [rbx+rax*4+4]
        vmovss  [rbp+57h+var_64], xmm1
        vmovss  xmm0, dword ptr [rbx+rax*4+8]
        vmovss  [rbp+57h+var_60], xmm0
      }
    }
    else
    {
      v20 = v7;
      v21 = (int *)&_RBX->m_entityOrigin[v7];
      v68 = v72;
      v22 = *v21;
      v23 = v21[1];
      v72[2] = s_entity_aab_Z ^ v23 ^ v21[2] ^ ((_DWORD)_RBX + 4 * (3 * v7 + 389124));
      v72[1] = s_entity_aab_Y ^ v22 ^ v23 ^ ((_DWORD)_RBX + 4 * (3 * v7 + 389124));
      v72[0] = v22 ^ (unsigned int)v21 ^ ~s_entity_aab_X;
      memset(&v68, 0, sizeof(v68));
      __asm
      {
        vmovss  xmm0, [rbp+57h+var_68]
        vmovss  dword ptr [rbp+57h+var_88], xmm0
      }
      if ( ((unsigned int)v68 & 0x7F800000) == 2139095040 )
        goto LABEL_81;
      __asm
      {
        vmovss  xmm0, [rbp+57h+var_64]
        vmovss  dword ptr [rbp+57h+var_88], xmm0
      }
      if ( ((unsigned int)v68 & 0x7F800000) == 2139095040 )
        goto LABEL_81;
      __asm
      {
        vmovss  xmm0, [rbp+57h+var_60]
        vmovss  dword ptr [rbp+57h+var_88], xmm0
      }
      v18 = ((unsigned int)v68 & 0x7F800000) < 0x7F800000;
      v19 = ((unsigned int)v68 & 0x7F800000) == 2139095040;
      if ( ((unsigned int)v68 & 0x7F800000) == 2139095040 )
      {
LABEL_81:
        v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )");
        v18 = 0;
        v19 = !v27;
        if ( v27 )
          __debugbreak();
      }
    }
    __asm
    {
      vmovss  xmm0, [rbp+57h+var_68]
      vsubss  xmm3, xmm0, dword ptr [rbp+57h+outOrigin]
      vmovss  xmm1, [rbp+57h+var_64]
      vsubss  xmm2, xmm1, dword ptr [rbp+57h+outOrigin+4]
      vmovss  xmm0, [rbp+57h+var_60]
      vsubss  xmm4, xmm0, dword ptr [rbp+57h+outOrigin+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@43800000
    }
    v67 = !v18 && !v19;
    ClientDObj = Com_GetClientDObj(v7, localClientNum);
    v44 = ClientDObj;
    obj = ClientDObj;
    if ( ClientDObj )
    {
      *(double *)&_XMM0 = DObjGetRadius(ClientDObj);
      __asm { vaddss  xmm6, xmm0, cs:__real@41800000 }
    }
    if ( v66 && (v67 || !v8) )
    {
      if ( (unsigned __int16)v70 >= 0x800u )
      {
        LODWORD(v63) = 2048;
        LODWORD(v62) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 461, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v62, v63) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      __asm { vmovss  xmm0, dword ptr [rbp+57h+outOrigin] }
      if ( (int)v7 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
      {
        _RAX = 3 * v20 + 389124;
        __asm
        {
          vmovss  dword ptr [rbx+rax*4], xmm0
          vmovss  xmm1, dword ptr [rbp+57h+outOrigin+4]
          vmovss  dword ptr [rbx+rax*4+4], xmm1
          vmovss  xmm0, dword ptr [rbp+57h+outOrigin+8]
          vmovss  dword ptr [rbx+rax*4+8], xmm0
        }
      }
      else
      {
        v46 = s_entity_aab_Z;
        v70 = s_entity_aab_Y;
        v47 = s_entity_aab_X;
        __asm { vmovss  dword ptr [rbp+57h+var_88], xmm0 }
        if ( ((unsigned int)v68 & 0x7F800000) == 2139095040 )
          goto LABEL_82;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+outOrigin+4]
          vmovss  dword ptr [rbp+57h+var_88], xmm0
        }
        if ( ((unsigned int)v68 & 0x7F800000) == 2139095040 )
          goto LABEL_82;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+outOrigin+8]
          vmovss  dword ptr [rbp+57h+var_88], xmm0
        }
        if ( ((unsigned int)v68 & 0x7F800000) == 2139095040 )
        {
LABEL_82:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
            __debugbreak();
        }
        v50 = (unsigned int *)&_RBX->m_entityOrigin[v20];
        v51 = LODWORD(outOrigin.v[0]) ^ (unsigned int)v50 ^ ~v47;
        v52 = v70 ^ v51 ^ LODWORD(outOrigin.v[1]) ^ ((_DWORD)_RBX + 4 * (3 * v20 + 389124));
        v53 = v46 ^ v52 ^ LODWORD(outOrigin.v[2]) ^ ((_DWORD)_RBX + 4 * (3 * v20 + 389124));
        *v50 = v51;
        v50[1] = v52;
        v50[2] = v53;
        memset(&v68, 0, sizeof(v68));
        v44 = obj;
      }
      if ( !CG_EntityWorkers_TryAddDObjBoundsUpdate(v7) && v44 )
      {
        __asm { vmovaps xmm3, xmm6; radius }
        v58 = R_LinkDObjEntity(localClientNum, v7, &outOrigin, *(float *)&_XMM3);
        cent->flags |= 0x80000u;
        __asm { vmovss  dword ptr [rsp+0D0h+fmt], xmm6 }
        CG_Entity_CheckLightCount(v7, v44, v58, &outOrigin, fmt);
      }
    }
    memset(v72, 0, 0xCui64);
    memset(&outOrigin, 0, sizeof(outOrigin));
    v15 = v66;
    goto LABEL_69;
  }
  if ( R_GetBrushModel(cent->nextState.index.brushModel) )
    __asm { vmovss  xmm6, dword ptr [rax+50h] }
  v15 = v66;
  if ( !v66 )
  {
LABEL_72:
    v59 = v65 == 0;
    if ( !v65 )
      goto LABEL_75;
    goto LABEL_73;
  }
  v16 = v71;
  if ( v71 || !v8 )
  {
    if ( !CG_EntityWorkers_TryAddBModelBoundsUpdate((__int16)v70) )
      CG_Entity_UpdateBModelWorldBounds(localClientNum, cent, 0);
LABEL_69:
    v16 = v71;
  }
  if ( !v15 )
    goto LABEL_72;
  v59 = v16 == 0;
  if ( !v16 )
    goto LABEL_72;
LABEL_73:
  __asm { vcomiss xmm6, cs:?rg@@3Ur_globals_t@@A.primaryLightMotionDetectSizeMin; r_globals_t rg }
  if ( !v59 )
    __asm { vcomiss xmm6, cs:?rg@@3Ur_globals_t@@A.primaryLightMotionDetectSizeMax; r_globals_t rg }
LABEL_75:
  if ( !v15 && (cent->flags & 0x80000) != 0 )
  {
    R_UnlinkEntity_NoCull(localClientNum, v7);
    cent->flags &= ~0x80000u;
  }
  __asm { vmovaps xmm6, xmmword ptr [rsp+0D0h+var_48+8] }
}

/*
==============
CG_EntitySP_UpdateRagdollPose
==============
*/
void CG_EntitySP_UpdateRagdollPose(LocalClientNum_t localClientNum, centity_t *cent)
{
  bool RootOrigin; 
  bool v6; 
  DObj *ClientDObj; 
  bool IsRagdoll; 
  DObj *v15; 
  bool v16; 
  vec3_t inOrigin; 
  vec3_t outOrigin; 
  __int64 v19; 
  vec3_t translationDelta; 

  v19 = -2i64;
  if ( !cent->pose.ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_ents_sp.cpp", 1733, ASSERT_TYPE_ASSERT, "(cent->pose.ragdollHandle != 0)", (const char *)&queryFormat, "cent->pose.ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+88h+outOrigin]
    vmovsd  qword ptr [rsp+88h+inOrigin], xmm0
  }
  inOrigin.v[2] = outOrigin.v[2];
  RootOrigin = Ragdoll_GetRootOrigin(cent->pose.ragdollHandle, &inOrigin);
  v6 = CG_Pose_SetUsingRagdollOrigin(&cent->pose, RootOrigin);
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( ClientDObj )
  {
    IsRagdoll = CG_Pose_IsRagdoll(&cent->pose);
    Ragdoll_SetAnimationParameters(ClientDObj, cent->pose.ragdollHandle, IsRagdoll);
    if ( v6 )
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
  v15 = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( v15 )
  {
    v16 = CG_Pose_IsRagdoll(&cent->pose);
    Ragdoll_SetAnimationParameters(v15, cent->pose.ragdollHandle, v16);
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

