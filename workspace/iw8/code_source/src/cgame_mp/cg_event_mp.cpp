/*
==============
CgEventSystemMP::HandleEntityEvent
==============
*/

void __fastcall CgEventSystemMP::HandleEntityEvent(CgEventSystemMP *this, centity_t *cent, const int eventId, const int eventFlags, const CgEventLodData *optionalEventLodData)
{
  ?HandleEntityEvent@CgEventSystemMP@@MEBAXPEAUcentity_t@@HHPEBUCgEventLodData@@@Z(this, cent, eventId, eventFlags, optionalEventLodData);
}

/*
==============
CgEventSystemMP::HandleExplosionEvent
==============
*/

void __fastcall CgEventSystemMP::HandleExplosionEvent(CgEventSystemMP *this, centity_t *cent, int eventType, const vec3_t *position, const Weapon *weapon, const bool isAlternate)
{
  ?HandleExplosionEvent@CgEventSystemMP@@MEBAXPEAUcentity_t@@HAEBTvec3_t@@AEBUWeapon@@_N@Z(this, cent, eventType, position, weapon, isAlternate);
}

/*
==============
CG_EventMP_RefreshDconstDvars
==============
*/

void CG_EventMP_RefreshDconstDvars(void)
{
  ?CG_EventMP_RefreshDconstDvars@@YAXXZ();
}

/*
==============
CgEventSystemMP::IsTimedEventExpired
==============
*/

int __fastcall CgEventSystemMP::IsTimedEventExpired(CgEventSystemMP *this, const entityState_t *entityState)
{
  return ?IsTimedEventExpired@CgEventSystemMP@@UEBAHPEBUentityState_t@@@Z(this, entityState);
}

/*
==============
CgEventSystemMP::InventoryNonLocalPlayerEntityEvents
==============
*/

void __fastcall CgEventSystemMP::InventoryNonLocalPlayerEntityEvents(CgEventSystemMP *this, const centity_t *cent, const CgCharacterAnimUpdateInfo *animUpdateInfo, const unsigned __int16 playerSortedIndex, CgPlayerEventInventory *inventory)
{
  ?InventoryNonLocalPlayerEntityEvents@CgEventSystemMP@@QEBAXPEBUcentity_t@@PEBUCgCharacterAnimUpdateInfo@@GAEAUCgPlayerEventInventory@@@Z(this, cent, animUpdateInfo, playerSortedIndex, inventory);
}

/*
==============
CgEventSystemMP::InventoryStandaloneEvent
==============
*/

void __fastcall CgEventSystemMP::InventoryStandaloneEvent(CgEventSystemMP *this, const centity_t *cent, CgPlayerEventInventory *inventory)
{
  ?InventoryStandaloneEvent@CgEventSystemMP@@QEBAXPEBUcentity_t@@AEAUCgPlayerEventInventory@@@Z(this, cent, inventory);
}

/*
==============
CgEventSystemMP::HandleTurretFire
==============
*/

void __fastcall CgEventSystemMP::HandleTurretFire(CgEventSystemMP *this, centity_t *cent, const unsigned int eventId, const unsigned int eventParam, const bool isPlayerView, bool bNoTracer)
{
  ?HandleTurretFire@CgEventSystemMP@@UEBAXPEAUcentity_t@@II_N_N@Z(this, cent, eventId, eventParam, isPlayerView, bNoTracer);
}

/*
==============
CgEventSystemMP::CheckEvents
==============
*/

void __fastcall CgEventSystemMP::CheckEvents(CgEventSystemMP *this, centity_t *eventEntity)
{
  ?CheckEvents@CgEventSystemMP@@QEBAXPEAUcentity_t@@@Z(this, eventEntity);
}

/*
==============
CgEventSystemMP::GetEntityEventLodDataIfSupported
==============
*/

const CgEventLodData *__fastcall CgEventSystemMP::GetEntityEventLodDataIfSupported(CgEventSystemMP *this, const centity_t *cent, const int eventFlags)
{
  return ?GetEntityEventLodDataIfSupported@CgEventSystemMP@@MEBAPEBUCgEventLodData@@PEBUcentity_t@@H@Z(this, cent, eventFlags);
}

/*
==============
CG_EventMP_GetBulletHitEventInfo
==============
*/
void CG_EventMP_GetBulletHitEventInfo(const LocalClientNum_t localClientNum, const int eventId, int eventFlags, const centity_t *hitEvent, const Weapon *r_weapon, const bool isAlternate, const CgEventLodData **outEventLodData, unsigned __int8 *outBoneIndex, vec3_t *outStartLocation, vec3_t *outHitLocation, int *outHitImpactDelayOverride, SndHitArmorType *outHitArmorType, SndHitmarkerType *outHitMarkerType)
{
  const CgCharacterAnimUpdateInfo *v16; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  int clientNum; 
  int groundEntityNum; 
  char v21; 
  centity_t *Entity; 
  CgGlobalsMP *v23; 
  const CgCharacterAnimUpdateInfo *CharacterAnimUpdateInfoIfSorted; 
  entityType_s eType; 
  signed int v26; 
  LerpEntityStateTypeUnion *p_u; 
  bool ShouldPerformEvent; 
  vec3_t *v29; 
  bool v30; 
  int v31; 
  CgWeaponSystemMP *WeaponSystemMP; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  int otherEntityNum; 

  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_EventMP_GetBulletHitEventInfo");
  if ( !hitEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 386, ASSERT_TYPE_ASSERT, "(hitEvent)", (const char *)&queryFormat, "hitEvent") )
    __debugbreak();
  if ( (hitEvent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 387, ASSERT_TYPE_ASSERT, "(CENextValid( hitEvent ))", (const char *)&queryFormat, "CENextValid( hitEvent )") )
    __debugbreak();
  *outHitImpactDelayOverride = -1;
  v16 = NULL;
  *outHitArmorType = SND_HIT_ARMOR_TYPE_NONE;
  *outHitMarkerType = SND_HITMARKER_TYPE_STANDARD;
  *outBoneIndex = -2;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 396, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  otherEntityNum = hitEvent->nextState.otherEntityNum;
  clientNum = p_predictedPlayerState->clientNum;
  if ( (unsigned int)(eventId - 96) <= 1 || (unsigned int)(eventId - 213) <= 1 )
  {
    groundEntityNum = p_predictedPlayerState->clientNum;
    v21 = 1;
  }
  else
  {
    groundEntityNum = hitEvent->nextState.groundEntityNum;
    v21 = 0;
  }
  Entity = CG_GetEntity(localClientNum, groundEntityNum);
  v23 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 416, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterAnimUpdateInfoIfSorted = NULL;
  if ( clientNum != otherEntityNum && !v21 && (Entity->flags & 1) != 0 )
  {
    eType = Entity->nextState.eType;
    if ( eType == ET_PLAYER )
    {
      CharacterAnimUpdateInfoIfSorted = CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(v23, groundEntityNum);
    }
    else if ( eType == ET_PLAYER_CORPSE )
    {
      v26 = groundEntityNum - ComCharacterLimits::GetClientCorpseEntityIndexOffset();
      if ( (unsigned int)v26 >= 8 )
      {
        LODWORD(v34) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 428, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerCorpseUpdateAnimInfo ) ) + 0 ) )", "corpseIndex doesn't index cgameGlob->m_playerCorpseUpdateAnimInfo\n\t%i not in [0, %i)", v34, 8) )
          __debugbreak();
        LODWORD(v36) = 8;
        LODWORD(v35) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerCorpseUpdateAnimInfoValid ) ) + 0 ) )", "corpseIndex doesn't index cgameGlob->m_playerCorpseUpdateAnimInfoValid\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      if ( v23->m_playerCorpseUpdateAnimInfoValid[v26] )
        CharacterAnimUpdateInfoIfSorted = &v23->m_playerCorpseUpdateAnimInfo[v26];
      else
        CharacterAnimUpdateInfoIfSorted = NULL;
    }
  }
  *outEventLodData = &CharacterAnimUpdateInfoIfSorted->eventLodData;
  p_u = &hitEvent->nextState.lerp.u;
  ShouldPerformEvent = CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_BULLET_HIT_EXACT_HIT_LOCATION, &CharacterAnimUpdateInfoIfSorted->eventLodData);
  v29 = outHitLocation;
  if ( (Entity->flags & 1) == 0 || !ShouldPerformEvent || !CG_BoneHitDecode(localClientNum, Entity, (const BulletHitBoneInfo *)&hitEvent->nextState.lerp.u, outHitLocation, outBoneIndex) )
    CG_GetPoseOrigin(&hitEvent->pose, v29);
  if ( clientNum != otherEntityNum )
    v16 = CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(v23, hitEvent->nextState.otherEntityNum);
  v30 = CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_BULLET_HIT_EXACT_MUZZLE_POINT, &v16->eventLodData);
  v31 = hitEvent->nextState.otherEntityNum;
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_HandleSimulatedBulletStartPos");
  BG_GetWeaponFlashTagname((TagPair *)&outBoneIndex, r_weapon, isAlternate, 0);
  WeaponSystemMP = CgWeaponSystemMP::GetWeaponSystemMP(localClientNum);
  CgWeaponSystemMP::CalcMuzzlePoint(WeaponSystemMP, v31, (const TagPair)outBoneIndex, v30, outStartLocation);
  Sys_ProfEndNamedEvent();
  if ( (LOBYTE(p_u->vehicle.bodyPitch) & 6) != 0 )
    *outHitArmorType = SND_HIT_ARMOR_TYPE_ARMOR;
  if ( clientNum == otherEntityNum )
  {
    *outHitImpactDelayOverride = p_u->anonymous.data[1];
    v33 = p_u->anonymous.data[2];
    if ( (v33 & 4) != 0 )
    {
      *outHitMarkerType = SND_HITMARKER_TYPE_BR_ARMOR_BREAK;
    }
    else if ( (v33 & 2) != 0 )
    {
      *outHitMarkerType = SND_HITMARKER_TYPE_BR_ARMOR_HIT;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_EventMP_InventoryBulletHitEvent
==============
*/
void CG_EventMP_InventoryBulletHitEvent(const LocalClientNum_t localClientNum, const centity_t *hitEvent, CgPlayerEventInventory *inventory)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  entityType_s eType; 
  bool v9; 
  __int64 otherEntityNum; 
  CgGlobalsMP *v11; 
  __int64 groundEntityNum; 
  centity_t *Entity; 
  int v14; 
  unsigned int v15; 
  entityType_s v16; 
  CgCharacterAnimUpdateInfo *CharacterAnimUpdateInfoIfSorted; 
  unsigned int v18; 
  CgPlayerEventInventory *v19; 
  signed int v20; 
  __int64 v21; 
  CgCharacterAnimUpdateInfo *v22; 
  unsigned int refdefViewOrg_aab; 
  CgEventLodFOV fovLod; 
  int v25; 
  CgEventLodEventTypeBits *p_eventTypeDisabledOverride; 
  centity_t *v27; 
  CgCharacterAnimUpdateInfo *v28; 
  unsigned int v29; 
  __int64 evaluateTrajectory; 
  __int64 evaluateTrajectorya; 
  CgCharacterAnimUpdateInfo *outCharacterPriority; 
  CgCharacterAnimUpdateInfo *outCharacterPrioritya; 
  int clientNum; 
  unsigned int v35; 
  vec3_t viewOrigin; 
  centity_t *cent; 
  __int64 v38; 
  vec3_t viewDir; 

  v38 = -2i64;
  if ( !hitEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1358, ASSERT_TYPE_ASSERT, "(hitEvent)", (const char *)&queryFormat, "hitEvent") )
    __debugbreak();
  if ( hitEvent->nextState.eType < ET_EVENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1359, ASSERT_TYPE_ASSERT, "(hitEvent->nextState.eType >= ET_EVENTS)", (const char *)&queryFormat, "hitEvent->nextState.eType >= ET_EVENTS") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1362, ASSERT_TYPE_ASSERT, "(localPlayerPs)", (const char *)&queryFormat, "localPlayerPs") )
    __debugbreak();
  eType = hitEvent->nextState.eType;
  v9 = (unsigned __int16)(eType - 125) <= 1u || (unsigned __int16)(eType - 242) <= 1u;
  otherEntityNum = hitEvent->nextState.otherEntityNum;
  clientNum = p_predictedPlayerState->clientNum;
  v11 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1369, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !v9 )
  {
    groundEntityNum = hitEvent->nextState.groundEntityNum;
    Entity = CG_GetEntity(localClientNum, hitEvent->nextState.groundEntityNum);
    cent = Entity;
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1376, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
      __debugbreak();
    if ( (Entity->flags & 1) != 0 )
    {
      v14 = (unsigned __int8)hitEvent->nextState.lerp.u.anonymous.data[0];
      if ( (unsigned __int8)hitEvent->nextState.lerp.u.anonymous.data[0] )
      {
        v15 = v14 - 1;
        if ( (unsigned int)(v14 - 1) >= 0xFE )
        {
          LODWORD(evaluateTrajectory) = v14 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1383, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( DOBJ_MAX_PARTS )", "boneIndex doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", evaluateTrajectory, 254) )
            __debugbreak();
        }
        v16 = Entity->nextState.eType;
        if ( v16 == ET_PLAYER )
        {
          if ( (unsigned int)groundEntityNum >= cls.maxClients )
          {
            LODWORD(outCharacterPriority) = cls.maxClients;
            LODWORD(evaluateTrajectory) = groundEntityNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1386, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( cls.maxClients )", "victimEntNum doesn't index cls.maxClients\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
              __debugbreak();
          }
          CharacterAnimUpdateInfoIfSorted = CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(v11, groundEntityNum);
          if ( CharacterAnimUpdateInfoIfSorted )
          {
            if ( (unsigned int)groundEntityNum >= 0xF8 )
            {
              LODWORD(outCharacterPriority) = 248;
              LODWORD(evaluateTrajectory) = groundEntityNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1390, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderLookupDistancePriority ) ) + 0 ) )", "victimEntNum doesn't index cgameGlob->m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
                __debugbreak();
            }
            v18 = v11->m_playerOrderLookupDistancePriority[groundEntityNum];
            if ( v18 >= v11->m_playerOrderDistanceSortedCount )
            {
              LODWORD(outCharacterPriority) = v11->m_playerOrderDistanceSortedCount;
              LODWORD(evaluateTrajectory) = v18;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1392, ASSERT_TYPE_ASSERT, "(unsigned)( sortedIndex ) < (unsigned)( cgameGlob->m_playerOrderDistanceSortedCount )", "sortedIndex doesn't index cgameGlob->m_playerOrderDistanceSortedCount\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
                __debugbreak();
            }
            if ( clientNum == (_DWORD)otherEntityNum )
            {
              v19 = inventory;
LABEL_39:
              bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)v19, v18);
              bitarray_base<bitarray<256>>::setBit(&inventory->bulletHitPartBits[(unsigned __int16)v18], v15);
              goto LABEL_69;
            }
            if ( CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_BULLET_HIT_EXACT_HIT_LOCATION, &CharacterAnimUpdateInfoIfSorted->eventLodData) )
            {
              v19 = (CgPlayerEventInventory *)&inventory->playerEventInventory[1];
              goto LABEL_39;
            }
          }
        }
        else if ( v16 == ET_PLAYER_CORPSE )
        {
          v20 = groundEntityNum - ComCharacterLimits::GetClientCorpseEntityIndexOffset();
          if ( (unsigned int)v20 >= 8 )
          {
            LODWORD(outCharacterPriority) = 8;
            LODWORD(evaluateTrajectory) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1410, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerCorpseUpdateAnimInfo ) ) + 0 ) )", "corpseIndex doesn't index cgameGlob->m_playerCorpseUpdateAnimInfo\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
              __debugbreak();
            LODWORD(outCharacterPrioritya) = 8;
            LODWORD(evaluateTrajectorya) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1411, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerCorpseUpdateAnimInfoValid ) ) + 0 ) )", "corpseIndex doesn't index cgameGlob->m_playerCorpseUpdateAnimInfoValid\n\t%i not in [0, %i)", evaluateTrajectorya, outCharacterPrioritya) )
              __debugbreak();
          }
          v21 = v20;
          v22 = &v11->m_playerCorpseUpdateAnimInfo[v20];
          if ( !v11->m_playerCorpseUpdateAnimInfoValid[v20] )
          {
            if ( v11 == (CgGlobalsMP *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
              __debugbreak();
            refdefViewOrg_aab = v11->refdef.view.refdefViewOrg_aab;
            v35 = refdefViewOrg_aab;
            if ( v11 == (CgGlobalsMP *)-26936i64 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
                __debugbreak();
              refdefViewOrg_aab = v35;
            }
            LODWORD(viewOrigin.v[0]) = LODWORD(v11->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v11 + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)v11 + 26936)) + 2));
            LODWORD(viewOrigin.v[1]) = LODWORD(v11->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v11 + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)v11 + 26940)) + 2));
            LODWORD(viewOrigin.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)v11 + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)v11 + 26944)) + 2)) ^ LODWORD(v11->refdef.view.org.org.v[2]);
            viewDir = v11->refdef.view.axis.m[0];
            *(_QWORD *)&v22->eventLodData.distanceLod = 0i64;
            *(_QWORD *)&v11->m_playerCorpseUpdateAnimInfo[v20].eventLodData.cosAngleFromLookAt = 0i64;
            fovLod = v11->m_playerCorpseUpdateAnimInfo[v20].eventLodData.fovLod;
            v25 = 0;
            if ( fovLod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 54, ASSERT_TYPE_ASSERT, "( outData.fovLod ) == ( CG_EVENT_LOD_NARROW_FOV )", "%s == %s\n\t%u, %u", "outData.fovLod", "CG_EVENT_LOD_NARROW_FOV", (unsigned __int8)fovLod, 0i64) )
              __debugbreak();
            p_eventTypeDisabledOverride = &v22->eventLodData.eventTypeDisabledOverride;
            while ( !p_eventTypeDisabledOverride->array[0] )
            {
              ++v25;
              ++p_eventTypeDisabledOverride;
              if ( v25 )
                goto LABEL_65;
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 55, ASSERT_TYPE_ASSERT, "(outData.eventTypeDisabledOverride.noBitsOn())", (const char *)&queryFormat, "outData.eventTypeDisabledOverride.noBitsOn()") )
              __debugbreak();
LABEL_65:
            CG_PlayersMP_ComputePlayerDistanceAndFOV(localClientNum, cent, &viewOrigin, &viewDir, v11->time, 1, v22);
            CG_EventMP_FinalizeEventLodData(&v22->eventLodData);
            bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&v22->preCacheAnimBones);
            v22->preCacheTagFlags = 0;
            v11->m_playerCorpseUpdateAnimInfoValid[v21] = 1;
            memset(&viewOrigin, 0, sizeof(viewOrigin));
          }
          if ( clientNum == (_DWORD)otherEntityNum || CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_BULLET_HIT_EXACT_HIT_LOCATION, &v22->eventLodData) )
          {
            inventory->corpseBulletHit[v21] = 1;
            bitarray_base<bitarray<256>>::setBit(&v22->preCacheAnimBones, v15);
            v22->preCacheTagFlags |= 4u;
          }
        }
      }
    }
  }
LABEL_69:
  if ( clientNum != (_DWORD)otherEntityNum )
  {
    v27 = CG_GetEntity(localClientNum, otherEntityNum);
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1441, ASSERT_TYPE_ASSERT, "(inflictorEnt)", (const char *)&queryFormat, "inflictorEnt") )
      __debugbreak();
    if ( (v27->flags & 1) != 0 && v27->nextState.eType == ET_PLAYER )
    {
      if ( (unsigned int)otherEntityNum >= cls.maxClients )
      {
        LODWORD(outCharacterPriority) = cls.maxClients;
        LODWORD(evaluateTrajectory) = otherEntityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1444, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( cls.maxClients )", "inflictorEntNum doesn't index cls.maxClients\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
          __debugbreak();
      }
      v28 = CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(v11, otherEntityNum);
      if ( v28 )
      {
        if ( (unsigned int)otherEntityNum >= 0xF8 )
        {
          LODWORD(outCharacterPriority) = 248;
          LODWORD(evaluateTrajectory) = otherEntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1448, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderLookupDistancePriority ) ) + 0 ) )", "inflictorEntNum doesn't index cgameGlob->m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        v29 = v11->m_playerOrderLookupDistancePriority[otherEntityNum];
        if ( v29 >= v11->m_playerOrderDistanceSortedCount )
        {
          LODWORD(outCharacterPriority) = v11->m_playerOrderDistanceSortedCount;
          LODWORD(evaluateTrajectory) = v11->m_playerOrderLookupDistancePriority[otherEntityNum];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1450, ASSERT_TYPE_ASSERT, "(unsigned)( sortedIndex ) < (unsigned)( cgameGlob->m_playerOrderDistanceSortedCount )", "sortedIndex doesn't index cgameGlob->m_playerOrderDistanceSortedCount\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        if ( CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_BULLET_HIT_EXACT_MUZZLE_POINT, &v28->eventLodData) )
          bitarray_base<bitarray<224>>::setBit(&inventory->playerEventInventory[4], v29);
      }
    }
  }
}

/*
==============
CG_EventMP_InventoryNonLocalPlayerEntityEvent
==============
*/
void CG_EventMP_InventoryNonLocalPlayerEntityEvent(const LocalClientNum_t localClientNum, const centity_t *cent, const CgCharacterAnimUpdateInfo *animUpdateInfo, const unsigned __int16 playerSortedIndex, const int eventIndex, CgPlayerEventInventory *inventory)
{
  int eventType; 
  ClientBits *v11; 
  const Weapon *EntWeapon; 
  unsigned int v13; 
  int v14; 
  bool v15; 
  __int64 v16; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1521, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !animUpdateInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1522, ASSERT_TYPE_ASSERT, "(animUpdateInfo)", (const char *)&queryFormat, "animUpdateInfo") )
    __debugbreak();
  if ( (unsigned int)eventIndex >= 4 )
  {
    LODWORD(v16) = eventIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1523, ASSERT_TYPE_ASSERT, "(unsigned)( eventIndex ) < (unsigned)( ( sizeof( *array_counter( cent->nextState.events ) ) + 0 ) )", "eventIndex doesn't index cent->nextState.events\n\t%i not in [0, %i)", v16, 4) )
      __debugbreak();
  }
  eventType = cent->nextState.events[eventIndex].eventType;
  if ( eventType >= 93 && (eventType <= 97 || (unsigned int)(eventType - 211) <= 3) )
  {
    LODWORD(v16) = cent->nextState.events[eventIndex].eventType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1313, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_EventMP_Inventory_VerifyPlayerEventId: trying to apply player event %i which is expected to be a standalone event.\n", v16) )
      __debugbreak();
  }
  switch ( eventType )
  {
    case '(':
    case '*':
    case '+':
    case ',':
    case '0':
    case '1':
    case '2':
    case '3':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case 'A':
    case 'B':
    case 'C':
      EntWeapon = CG_GetEntWeapon(localClientNum, cent);
      v13 = eventType - 43;
      v15 = 0;
      if ( v13 <= 0x18 )
      {
        v14 = 31457667;
        if ( _bittest(&v14, v13) )
          v15 = 1;
      }
      if ( !BG_IsBoltAction(EntWeapon, v15) && CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_EJECT_BRASS, &animUpdateInfo->eventLodData) )
        bitarray_base<bitarray<224>>::setBit(&inventory->playerEventInventory[5], playerSortedIndex);
      if ( CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_FIRE_WEAPON_EXACT_MUZZLE_POINT, &animUpdateInfo->eventLodData) || CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_FIRE_WEAPON_EXACT_WEAPON_SOUND_ORIGIN, &animUpdateInfo->eventLodData) )
      {
        v11 = &inventory->playerEventInventory[4];
        goto LABEL_28;
      }
      break;
    case '/':
    case '4':
      if ( CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_EJECT_BRASS, &animUpdateInfo->eventLodData) )
      {
        v11 = &inventory->playerEventInventory[5];
LABEL_28:
        bitarray_base<bitarray<224>>::setBit(v11, playerSortedIndex);
      }
      break;
    default:
      return;
  }
}

/*
==============
CG_EventMP_IsHitImpactVictimValid
==============
*/
bool CG_EventMP_IsHitImpactVictimValid(const LocalClientNum_t localClientNum, const __int16 victimEntNum)
{
  centity_t *Entity; 
  CGCorpseInfoMP *CorpseInfoForServerEntityNum; 

  Entity = CG_GetEntity(localClientNum, victimEntNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 || Entity->nextState.eType != ET_PLAYER_CORPSE || (CorpseInfoForServerEntityNum = CG_PlayerCorpseMP_GetCorpseInfoForServerEntityNum(localClientNum, victimEntNum)) != NULL )
    LOBYTE(CorpseInfoForServerEntityNum) = 1;
  return (char)CorpseInfoForServerEntityNum;
}

/*
==============
CG_EventMP_RefreshDconstDvars
==============
*/
void CG_EventMP_RefreshDconstDvars(void)
{
  const dvar_t *v0; 

  v0 = DCONST_DVARFLT_cg_eventLod_NarrowFOV;
  if ( !DCONST_DVARFLT_cg_eventLod_NarrowFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_eventLod_NarrowFOV") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  g_cgEventCosHalfNarrowFOVAngle = cosf_0(v0->current.value * 0.0087266462);
}

/*
==============
CG_Event_PlayBoltedFxFromEventForTeam
==============
*/
void CG_Event_PlayBoltedFxFromEventForTeam(const LocalClientNum_t localClientNum, const int dobjHandle, const unsigned int eventParm)
{
  unsigned int m_effectBits; 
  unsigned int v7; 
  unsigned int v8; 
  cg_t *LocalClientGlobals; 
  unsigned __int16 spawnFlags; 
  FXRegisteredDef *outFxDef; 
  unsigned int outBoneIndex; 
  unsigned int outClientNum; 

  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 66, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( !BgDynamicLimits::ms_data.m_effectBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 67, ASSERT_TYPE_ASSERT, "(ms_data.m_effectBits > 0)", (const char *)&queryFormat, "ms_data.m_effectBits > 0") )
    __debugbreak();
  m_effectBits = BgDynamicLimits::ms_data.m_effectBits;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 85, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_gameData.m_clientBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 86, ASSERT_TYPE_ASSERT, "(ms_gameData.m_clientBits > 0)", (const char *)&queryFormat, "ms_gameData.m_clientBits > 0") )
    __debugbreak();
  v7 = ComCharacterLimits::ms_gameData.m_clientBits + m_effectBits;
  if ( v7 + 10 > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 312, ASSERT_TYPE_ASSERT, "( effectBits + clientBits + 8 + 2 ) <= ( sizeof( eventParam ) * 8 )", "%s <= %s\n\t%i, %i", "effectBits + clientBits + BONEINDEX_BITS + TEAM_BITS", "sizeof( eventParam ) * 8", v7 + 10, 32) )
    __debugbreak();
  v8 = (eventParm >> (v7 + 8)) & 3;
  if ( CG_GetFxInfoFromParam(localClientNum, eventParm, (const FXRegisteredDef **)&outFxDef, &outBoneIndex, &outClientNum) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    spawnFlags = 0;
    if ( v8 == 2 )
    {
      spawnFlags = 16;
    }
    else if ( v8 == 1 )
    {
      spawnFlags = 32;
    }
    FX_PlayBoltedEffect(localClientNum, outFxDef, LocalClientGlobals->time, dobjHandle, outBoneIndex, spawnFlags);
  }
}

/*
==============
CG_GetObituaryDeathIconByWeapon
==============
*/
Material *CG_GetObituaryDeathIconByWeapon(const Weapon *weapon, bool *o_iconHorzFlip, float *o_iconWidth, float *o_iconHeight, int *o_iconRatioHToV, char (*o_iconName)[1024])
{
  const WeaponDef *v8; 
  __int64 weaponIdx; 
  const WeaponDef *v10; 
  bool v11; 
  WeaponCompleteDef **v12; 
  Material *killIconMat; 
  MaterialTextureDef *textureTable; 
  weaponIconRatioType_t killIconRatio; 
  const char *WeaponName; 
  const char *Name; 
  __int64 v19; 
  __int64 v20; 
  char output[1024]; 

  if ( weapon->weaponIdx > 0x226u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 88, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx ) <= ( 550 )", "weapon.weaponIdx not in [0, MAX_WEAPONS]\n\t%u not in [0, %u]", weapon->weaponIdx, 550) )
    __debugbreak();
  v8 = BG_WeaponDef(weapon, 0);
  weaponIdx = weapon->weaponIdx;
  v10 = v8;
  if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v20) = bg_lastParsedWeaponIndex;
    LODWORD(v19) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v19, v20) )
      __debugbreak();
  }
  v11 = bg_weaponCompleteDefs[weaponIdx] == NULL;
  v12 = &bg_weaponCompleteDefs[weaponIdx];
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  killIconMat = (*v12)->killIconMat;
  if ( killIconMat && (textureTable = killIconMat->textureTable) != NULL && textureTable->image )
  {
    if ( v10->flipKillIcon )
      *o_iconHorzFlip = 1;
    killIconRatio = v10->killIconRatio;
    if ( killIconRatio )
    {
      if ( killIconRatio == WEAPON_ICON_RATIO_2TO1 )
      {
        *o_iconRatioHToV = 2;
      }
      else
      {
        if ( killIconRatio != WEAPON_ICON_RATIO_4TO1 )
        {
          WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
          LODWORD(v20) = v10->killIconRatio;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 112, ASSERT_TYPE_ASSERT, "(weapDef->killIconRatio == WEAPON_ICON_RATIO_4TO1)", "%s\n\tkillIconRatio %d, weapon %s", "weapDef->killIconRatio == WEAPON_ICON_RATIO_4TO1", v20, WeaponName) )
            __debugbreak();
        }
        *o_iconRatioHToV = 4;
      }
    }
    else
    {
      *o_iconRatioHToV = 1;
    }
  }
  else
  {
    killIconMat = Material_RegisterHandle("killicondied", IMAGE_TRACK_HUD);
  }
  Name = Material_GetName(killIconMat);
  Core_strcpy((char *)o_iconName, 0x400ui64, Name);
  return killIconMat;
}

/*
==============
CG_Obituary
==============
*/
void CG_Obituary(const LocalClientNum_t localClientNum, const entityState_t *es, const unsigned int eventParm, bool isMOD)
{
  int otherEntityNum; 
  int attackerEntityNum; 
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  CgStatic *v9; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  characterInfo_t *v12; 
  characterInfo_t *v13; 
  centity_t *v14; 
  int clientNum; 
  __int64 recentVictimIndex; 
  int ControllerFromClient; 
  const char *ColumnValueForRow; 
  CgWeaponMap *Instance; 
  Material *ObituaryDeathIconByWeapon; 
  char (*o_iconName)[1024]; 
  Weapon *v22; 
  bool o_iconHorzFlip; 
  bool v24; 
  StringTable *tablePtr; 
  const entityState_t *v26; 
  Weapon weapon; 
  char nameBuf[48]; 
  char buf[56]; 
  char dest[1024]; 

  otherEntityNum = es->otherEntityNum;
  attackerEntityNum = es->attackerEntityNum;
  v7 = localClientNum;
  v24 = isMOD;
  v26 = es;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v7) )
    __debugbreak();
  if ( (unsigned int)v7 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v22 = CgStatic::ms_allocatedCount;
    LODWORD(o_iconName) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", o_iconName, v22) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v7] )
  {
    LODWORD(v22) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v22) )
      __debugbreak();
  }
  v9 = CgStatic::ms_cgameStaticsArray[v7];
  o_iconHorzFlip = 0;
  *(float *)&tablePtr = FLOAT_1_4;
  if ( otherEntityNum < 0 )
    goto LABEL_69;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( otherEntityNum >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
LABEL_69:
    if ( otherEntityNum != 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 163, ASSERT_TYPE_ASSERT, "(target == ENTITYNUM_NONE)", "%s\n\tCG_Obituary: target invalid.", "target == ENTITYNUM_NONE") )
      __debugbreak();
  }
  else
  {
    CharacterInfo = CgStatic::GetCharacterInfo(v9, otherEntityNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 168, ASSERT_TYPE_ASSERT, "(victimCI)", (const char *)&queryFormat, "victimCI") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
    {
      CL_GetClientName((LocalClientNum_t)v7, otherEntityNum, buf, 0x2Fui64);
      if ( otherEntityNum >= cls.maxClients )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)v7, otherEntityNum);
        if ( (Entity->flags & 1) == 0 || !CL_GetAgentName((LocalClientNum_t)v7, otherEntityNum, Entity->nextState.otherEntityNum, buf, 0x2Fui64) )
          Com_sprintf(buf, 0x2Fui64, "?");
      }
      v12 = CgStatic::GetCharacterInfo(v9, LocalClientGlobals->clientNum);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 182, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
        __debugbreak();
      if ( v12->infoValid )
      {
        if ( attackerEntityNum < 0 || attackerEntityNum >= ComCharacterLimits::GetCharacterMaxCount() )
        {
          v13 = NULL;
          attackerEntityNum = 2046;
          nameBuf[0] = 0;
          goto LABEL_38;
        }
        v13 = CgStatic::GetCharacterInfo(v9, attackerEntityNum);
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 195, ASSERT_TYPE_ASSERT, "(attackerCI)", (const char *)&queryFormat, "attackerCI") )
          __debugbreak();
        if ( v13->infoValid )
        {
          CL_GetClientName((LocalClientNum_t)v7, attackerEntityNum, nameBuf, 0x2Fui64);
          if ( attackerEntityNum >= cls.maxClients )
          {
            v14 = CG_GetEntity((const LocalClientNum_t)v7, attackerEntityNum);
            if ( (v14->flags & 1) == 0 || !CL_GetAgentName((LocalClientNum_t)v7, attackerEntityNum, v14->nextState.otherEntityNum, nameBuf, 0x2Fui64) )
              Com_sprintf(nameBuf, 0x2Fui64, "?");
          }
LABEL_38:
          clientNum = LocalClientGlobals->clientNum;
          if ( attackerEntityNum == otherEntityNum )
          {
            nameBuf[0] = 0;
          }
          else if ( attackerEntityNum == clientNum )
          {
            if ( !LocalClientGlobals->inKillCam )
            {
              recentVictimIndex = LocalClientGlobals->recentVictimIndex;
              if ( (unsigned int)recentVictimIndex >= 8 )
              {
                LODWORD(v22) = 8;
                LODWORD(o_iconName) = LocalClientGlobals->recentVictimIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 221, ASSERT_TYPE_ASSERT, "(unsigned)( victimIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->recentVictimClientNums ) ) + 0 ) )", "victimIndex doesn't index ARRAY_COUNT( cgameGlob->recentVictimClientNums )\n\t%i not in [0, %i)", o_iconName, v22) )
                  __debugbreak();
              }
              LocalClientGlobals->recentVictimClientNums[recentVictimIndex] = otherEntityNum;
              LocalClientGlobals->recentVictimTimes[recentVictimIndex] = LocalClientGlobals->time;
              LocalClientGlobals->recentVictimIndex = ((_BYTE)recentVictimIndex + 1) & 7;
            }
          }
          else if ( otherEntityNum == clientNum && v13 && !LocalClientGlobals->inKillCam )
          {
            LocalClientGlobals->recentKilledByTime = LocalClientGlobals->time;
            LocalClientGlobals->recentKilledByClientNum = attackerEntityNum;
          }
          ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v7);
          if ( v24 )
          {
            if ( (int)eventParm >= 25 )
            {
              LODWORD(v22) = eventParm;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 256, ASSERT_TYPE_ASSERT, "(mod < MOD_NUM)", "%s\n\tMOD value of %d is not valid.\n", "mod < MOD_NUM", v22) )
                __debugbreak();
            }
            if ( !LocalClientGlobals->inKillCam )
            {
              StringTable_GetAsset("mp_cp/obituary_mod_icon.csv", (const StringTable **)&tablePtr);
              ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, eventParm, 2);
              Core_strcpy(dest, 0x400ui64, ColumnValueForRow);
              LUI_Obituary_MOD(ControllerFromClient, attackerEntityNum, otherEntityNum, eventParm, LUI_luaVM);
            }
          }
          else
          {
            Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v7);
            if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 478, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
              __debugbreak();
            weapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)eventParm);
            ObituaryDeathIconByWeapon = CG_GetObituaryDeathIconByWeapon(&weapon, &o_iconHorzFlip, (float *)&tablePtr, (float *)&tablePtr, (int *)&tablePtr, (char (*)[1024])dest);
            if ( LocalClientGlobals->inKillCam )
              goto LABEL_63;
            LUI_Obituary(ControllerFromClient, attackerEntityNum, otherEntityNum, ObituaryDeathIconByWeapon->textureTable->image, o_iconHorzFlip, (int)tablePtr, &weapon, v26->eventParm2 == 1, LUI_luaVM);
          }
          if ( !LocalClientGlobals->inKillCam )
            CL_DeathMessagePrint((LocalClientNum_t)v7, nameBuf, 55, buf, 55, dest);
LABEL_63:
          CG_LatencyTestMP_Obituary((LocalClientNum_t)v7, otherEntityNum);
        }
      }
    }
  }
}

/*
==============
CgEventSystemMP::CheckEvents
==============
*/
void CgEventSystemMP::CheckEvents(CgEventSystemMP *this, centity_t *eventEntity)
{
  entityType_s eType; 
  __int16 number; 
  const char *EntityTypeName; 
  __int64 v7; 
  __int64 v12; 

  if ( !eventEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 594, ASSERT_TYPE_ASSERT, "(eventEntity)", (const char *)&queryFormat, "eventEntity") )
    __debugbreak();
  eType = eventEntity->nextState.eType;
  if ( eType <= ET_EVENTS )
  {
    LODWORD(v12) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 595, ASSERT_TYPE_ASSERT, "( ( eventEntity->nextState.eType > ET_EVENTS ) )", "( eventEntity->nextState.eType ) = %i", v12) )
      __debugbreak();
  }
  if ( eventEntity->nextState.eventSequence.combined && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 596, ASSERT_TYPE_ASSERT, "(!eventEntity->nextState.eventSequence.combined)", (const char *)&queryFormat, "!eventEntity->nextState.eventSequence.combined") )
    __debugbreak();
  if ( !eventEntity->previousEventSequence.combined )
  {
    number = eventEntity->nextState.number;
    eventEntity->previousEventSequence.combined = 1;
    if ( CG_IsEntityHighLoD((const LocalClientNum_t)this->m_localClientNum, number) )
    {
      EntityTypeName = BG_GetEntityTypeName((const entityType_s)eventEntity->nextState.eType);
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, EntityTypeName);
      v7 = eventEntity->nextState.eType;
      __rdtsc();
      if ( (unsigned int)(v7 - 29) >= 0xE3 )
      {
        LODWORD(v12) = v7 - 29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 617, ASSERT_TYPE_ASSERT, "(unsigned)( eventId ) < (unsigned)( EV_MAX_EVENTS )", "eventId doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", v12, 227) )
          __debugbreak();
      }
      CG_EntityMP_CalcLerpPositions(this->m_localClientNum, eventEntity);
      this->HandleEntityEvent(this, eventEntity, v7 - 29, 0, NULL);
      __rdtsc();
      ++*((_DWORD *)&g_perfEventTime[213] + v7 + 1);
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      qword_150F3B918[v7] = *(double *)&_XMM0 * msecPerRawTimerTick + qword_150F3B918[v7];
      _XMM0 = *(unsigned __int64 *)&g_perfEventNum[2 * v7 + 170];
      __asm { vmaxsd  xmm1, xmm0, xmm1 }
      *(double *)&g_perfEventNum[2 * v7 + 170] = *(double *)&_XMM1;
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
CgEventSystemMP::GetEntityEventLodDataIfSupported
==============
*/
CgCharacterAnimUpdateInfo *CgEventSystemMP::GetEntityEventLodDataIfSupported(CgEventSystemMP *this, const centity_t *cent, const int eventFlags)
{
  CgGlobalsMP *LocalClientGlobals; 
  int number; 
  int v7; 
  __int64 v9; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1263, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1264, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1267, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  number = cent->nextState.number;
  if ( number < cls.maxClients && (unsigned __int16)number >= 0xF8u )
  {
    LODWORD(v9) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1270, ASSERT_TYPE_ASSERT, "( ( cent->nextState.number >= cls.maxClients || cent->nextState.number < ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) ) )", "( cent->nextState.number ) = %i", v9) )
      __debugbreak();
  }
  v7 = cent->nextState.number;
  if ( v7 >= cls.maxClients || LocalClientGlobals->m_playerOrderLookupDistancePriority[(__int16)v7] >= LocalClientGlobals->m_playerOrderDistanceSortedCount )
    return 0i64;
  if ( (unsigned __int16)v7 >= 0xF8u )
  {
    LODWORD(v9) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1273, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "cent->nextState.number doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v9, 248) )
      __debugbreak();
  }
  return &LocalClientGlobals->m_playerUpdateAnimInfo[cent->nextState.number];
}

/*
==============
CgEventSystemMP::HandleEntityEvent
==============
*/
void CgEventSystemMP::HandleEntityEvent(CgEventSystemMP *this, centity_t *cent, const int eventId, const int eventFlags, const CgEventLodData *optionalEventLodData)
{
  centity_t *v7; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  entityState_t *p_nextState; 
  cg_t *LocalClientGlobals; 
  __int64 eventParm; 
  const CgFireEventHighPrecisionData *highPrecisionFireData; 
  const characterInfo_t *CharacterInfo; 
  const playerState_s *p_predictedPlayerState; 
  int CharacterMaxCount; 
  int v18; 
  LocalClientNum_t v19; 
  BgWeaponMap *v20; 
  const Weapon *v21; 
  int v22; 
  const Weapon *v23; 
  PlayerHandIndex hand; 
  LocalClientNum_t v25; 
  CgMissile *System; 
  const Weapon *EntWeapon; 
  CgEventLodData *v28; 
  bool v29; 
  TagPair v30; 
  int v31; 
  PlayerHandIndex HandFromWeaponEvent; 
  bool v33; 
  unsigned int number; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  int otherEntityNum; 
  __int16 groundEntityNum; 
  int v40; 
  Weapon *v41; 
  Weapon *WeaponSystemMP; 
  unsigned __int8 v43; 
  int v44; 
  bool v45; 
  TagPair *v46; 
  TagPair v47; 
  int v48; 
  BgWeaponMap *v49; 
  const Weapon *v50; 
  Weapon *v51; 
  CgEventLodData *v52; 
  __int64 corpseHitEventCount; 
  __int64 v54; 
  bool v55; 
  TagPair *v56; 
  TagPair v57; 
  int v58; 
  __int64 m_localClientNum; 
  CgCompassSystemMP *CompassSystemMP; 
  CgCompassSystemMP *v61; 
  int time2; 
  unsigned int eventParm2; 
  CgCompassSystemMP *v64; 
  float v65; 
  float v66; 
  float v67; 
  CgClientSideEffectsSystemMP *ClientSideEffectsSystemMP; 
  int PlayerIndex; 
  unsigned int v70; 
  int v71; 
  CgClientSideEffectsSystemMP *v72; 
  CgClientSideEffectsSystemMP *v73; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  int fmt; 
  float fmta; 
  Weapon *weapon; 
  __int64 v80; 
  bool v81; 
  PlayerHandIndex v82; 
  bool isAlternate; 
  unsigned __int8 outBoneIndex; 
  bool isPlayerView; 
  int clientNum; 
  unsigned __int8 inOutIndex[8]; 
  Weapon *r_weapon; 
  int characterIndex; 
  BgWeaponMap *weaponMap; 
  int eventFlagsa; 
  CgEventLodData *eventLodData; 
  TagPair result; 
  centity_t *centa; 
  CgEventLodData *outEventLodData[2]; 
  vec3_t tracerStart; 
  vec3_t outHitLocation; 
  bitarray<64> outPerks; 
  tmat33_t<vec3_t> outFireAxis; 
  vec3_t dir; 

  outEventLodData[1] = (CgEventLodData *)-2i64;
  eventFlagsa = eventFlags;
  v7 = cent;
  centa = cent;
  eventLodData = (CgEventLodData *)optionalEventLodData;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 643, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (unsigned int)eventId >= 0xE3 )
  {
    LODWORD(weapon) = eventId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 644, ASSERT_TYPE_ASSERT, "(unsigned)( eventId ) < (unsigned)( EV_MAX_EVENTS )", "eventId doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", weapon, 227) )
      __debugbreak();
  }
  if ( eventId )
  {
    p_nextState = &v7->nextState;
    if ( !CG_IsEntityHighLoD((const LocalClientNum_t)this->m_localClientNum, v7->nextState.number) )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( p_nextState->number >= (int)ComCharacterLimits::ms_gameData.m_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 656, ASSERT_TYPE_ASSERT, "(CG_IsEntityHighLoD( m_localClientNum, cent->nextState.number ) || cent->nextState.number < ComCharacterLimits::GetClientMaxCount())", (const char *)&queryFormat, "CG_IsEntityHighLoD( m_localClientNum, cent->nextState.number ) || cent->nextState.number < ComCharacterLimits::GetClientMaxCount()") )
        __debugbreak();
    }
    if ( v7 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1956, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( v7->nextState.eType != ET_INVISIBLE )
    {
      inOutIndex[0] = -2;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      eventParm = v7->nextState.eventParm;
      r_weapon = (Weapon *)CgEventSystem::GetEventWeapon(this, v7, eventFlags, &isAlternate, &isPlayerView);
      BG_GetWeaponFlashTagname(&result, r_weapon, isAlternate, 0);
      weaponMap = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
      characterIndex = p_nextState->number;
      highPrecisionFireData = NULL;
      if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, characterIndex) )
        CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, characterIndex);
      else
        CharacterInfo = NULL;
      p_predictedPlayerState = NULL;
      if ( LocalClientGlobals->predictedPlayerState.clientNum == p_nextState->number )
        p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
      outBoneIndex = BG_PlayerOrEntityDualWielding(weaponMap, p_predictedPlayerState, &v7->nextState, CharacterInfo);
      clientNum = v7->nextState.clientNum;
      if ( clientNum < 0 || (CharacterMaxCount = ComCharacterLimits::GetCharacterMaxCount(), v18 = clientNum, clientNum >= CharacterMaxCount) )
      {
        v18 = 0;
        clientNum = 0;
      }
      switch ( eventId )
      {
        case 9:
          if ( (_DWORD)eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1132, ASSERT_TYPE_ASSERT, "(eventParm == 0)", (const char *)&queryFormat, "eventParm == 0") )
            __debugbreak();
          m_localClientNum = this->m_localClientNum;
          if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
          {
            LODWORD(v80) = this->m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v80) )
              __debugbreak();
          }
          if ( (unsigned int)m_localClientNum >= CgSoundSystem::ms_allocatedCount )
          {
            LODWORD(v80) = CgSoundSystem::ms_allocatedCount;
            LODWORD(weapon) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", weapon, v80) )
              __debugbreak();
          }
          if ( !CgSoundSystem::ms_soundSystemArray[m_localClientNum] )
          {
            LODWORD(v80) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v80) )
              __debugbreak();
          }
          CgSoundSystem::StopSoundsOnEnt(CgSoundSystem::ms_soundSystemArray[m_localClientNum], p_nextState->number);
          goto $LN11_130;
        case 11:
        case 12:
          if ( CgEventSystem::CheckClientNumLocal(this, v18, eventId) )
          {
            v19 = this->m_localClientNum;
            if ( eventId == 11 )
            {
              CL_SetStance(v19, CL_STANCE_CROUCH, eventParm);
            }
            else
            {
              CL_SetStance(v19, CL_STANCE_PRONE, eventParm);
              if ( CG_ForceSwitchToValidWeapon(this->m_localClientNum) )
              {
                v20 = weaponMap;
                if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
                  __debugbreak();
                v21 = BgWeaponMap::GetWeapon(v20, LocalClientGlobals->predictedPlayerState.weapCommon.weaponHandle);
                switch ( (_DWORD)eventParm )
                {
                  case 1:
                    if ( LocalClientGlobals->invalidCmdHintType != INVALID_CMD_STAND_BLOCKED )
                    {
                      LocalClientGlobals->invalidCmdHintType = INVALID_CMD_STAND_BLOCKED;
                      LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
                    }
                    break;
                  case 2:
                    if ( LocalClientGlobals->invalidCmdHintType != INVALID_CMD_CROUCH_BLOCKED )
                    {
                      LocalClientGlobals->invalidCmdHintType = INVALID_CMD_CROUCH_BLOCKED;
                      LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
                    }
                    break;
                  case 3:
                    if ( LocalClientGlobals->invalidCmdHintType != INVALID_CMD_PRONE_BLOCKED )
                    {
                      LocalClientGlobals->invalidCmdHintType = INVALID_CMD_PRONE_BLOCKED;
                      LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
                    }
                    break;
                  case 6:
                    if ( LocalClientGlobals->invalidCmdHintType != INVALID_CMD_TURRET_BLOCKED )
                    {
                      LocalClientGlobals->invalidCmdHintType = INVALID_CMD_TURRET_BLOCKED;
                      LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
                    }
                    break;
                  default:
                    if ( (eventParm & 0xFFFFFFFA) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1249, ASSERT_TYPE_ASSERT, "((type == STANCE_EVENT_PARAM_NO_HINT) || (type == STANCE_EVENT_PARAM_GROUND_POUND) || (type == STANCE_EVENT_PARAM_KEEP_HELD))", (const char *)&queryFormat, "(type == STANCE_EVENT_PARAM_NO_HINT) || (type == STANCE_EVENT_PARAM_GROUND_POUND) || (type == STANCE_EVENT_PARAM_KEEP_HELD)") )
                      __debugbreak();
                    break;
                }
                *(__m256i *)&LocalClientGlobals->invalidCmdHintWeapon.weaponIdx = *(__m256i *)&v21->weaponIdx;
                *(_OWORD *)&LocalClientGlobals->invalidCmdHintWeapon.attachmentVariationIndices[5] = *(_OWORD *)&v21->attachmentVariationIndices[5];
                *(double *)&LocalClientGlobals->invalidCmdHintWeapon.attachmentVariationIndices[21] = *(double *)&v21->attachmentVariationIndices[21];
                *(_DWORD *)&LocalClientGlobals->invalidCmdHintWeapon.weaponCamo = *(_DWORD *)&v21->weaponCamo;
              }
            }
          }
          goto $LN11_130;
        case 35:
        case 36:
        case 226:
          goto $LN11_130;
        case 40:
        case 42:
        case 43:
        case 44:
        case 48:
        case 49:
        case 50:
        case 51:
          r_weapon = (Weapon *)CG_GetEntWeapon(this->m_localClientNum, v7);
          if ( (unsigned int)(eventId - 43) <= 1 || (isAlternate = 0, (unsigned int)(eventId - 50) <= 1) )
            isAlternate = 1;
          HandFromWeaponEvent = BG_GetHandFromWeaponEvent(eventId);
          v33 = isPlayerView;
          if ( !isPlayerView )
          {
            if ( (_DWORD)eventParm )
            {
              if ( BG_IsHighPrecisionClientFireEventEnabled(eventId, &v7->nextState) )
              {
                highPrecisionFireData = (const CgFireEventHighPrecisionData *)&outFireAxis;
                memset(&outFireAxis, 0, sizeof(outFireAxis));
                BG_UnpackClientWeaponFireEventParm(eventParm, &outFireAxis);
              }
              v33 = isPlayerView;
            }
            if ( eventLodData )
            {
              if ( highPrecisionFireData )
                CG_FireWeaponWithLodAndHighPrecisionData(this->m_localClientNum, v7, eventId, -1, result, r_weapon, isAlternate, HandFromWeaponEvent, v33, outBoneIndex, 0, eventLodData, highPrecisionFireData);
              else
                CG_FireWeaponWithLod(this->m_localClientNum, v7, eventId, -1, result, r_weapon, isAlternate, HandFromWeaponEvent, v33, outBoneIndex, 0, eventLodData);
            }
            else if ( highPrecisionFireData )
            {
              CG_FireWeaponWithHighPrecisionData(this->m_localClientNum, v7, eventId, -1, result, r_weapon, isAlternate, HandFromWeaponEvent, v33, outBoneIndex, 0, highPrecisionFireData);
            }
            else
            {
              CG_FireWeapon(this->m_localClientNum, v7, eventId, -1, result, r_weapon, isAlternate, HandFromWeaponEvent, v33, outBoneIndex, 0);
            }
          }
          goto $LN11_130;
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
          EntWeapon = CG_GetEntWeapon(this->m_localClientNum, v7);
          isAlternate = (unsigned int)(eventId - 64) <= 3;
          clientNum = BG_GetHandFromWeaponEvent(eventId);
          if ( (unsigned int)eventParm >= ComCharacterLimits::GetCharacterMaxCount() )
          {
            LODWORD(v80) = ComCharacterLimits::GetCharacterMaxCount();
            LODWORD(weapon) = eventParm;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 834, ASSERT_TYPE_ASSERT, "(unsigned)( eventParm ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "eventParm doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", weapon, v80) )
              __debugbreak();
          }
          if ( !isPlayerView )
          {
            v28 = eventLodData;
            v29 = isAlternate;
            v30 = result;
            v31 = truncate_cast<int,unsigned int>(eventParm);
            v81 = v29;
            v7 = centa;
            if ( v28 )
              CG_FireWeaponWithLod(this->m_localClientNum, centa, eventId, v31, v30, EntWeapon, v81, (PlayerHandIndex)clientNum, 0, outBoneIndex, 0, v28);
            else
              CG_FireWeapon(this->m_localClientNum, centa, eventId, v31, v30, EntWeapon, v81, (PlayerHandIndex)clientNum, 0, outBoneIndex, 0);
          }
          goto $LN11_130;
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
          v23 = CG_GetEntWeapon(this->m_localClientNum, v7);
          hand = BG_GetHandFromWeaponEvent(eventId);
          if ( CgEventSystem::CheckClientNumLocal(this, clientNum, eventId) && isPlayerView )
          {
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring, "bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring") )
              CrashReport_TriggerNow();
            v25 = this->m_localClientNum;
            if ( eventLodData )
              CG_FireWeaponWithLod(v25, v7, eventId, -1, result, v23, v7->nextState.inAltWeaponMode, hand, isPlayerView, outBoneIndex, 0, eventLodData);
            else
              CG_FireWeapon(v25, v7, eventId, -1, result, v23, v7->nextState.inAltWeaponMode, hand, isPlayerView, outBoneIndex, 0);
            System = CgMissile::GetSystem((const LocalClientNum_t)this->m_localClientNum);
            if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 778, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
              __debugbreak();
            CgMissile::OnWeaponFire(System, v7, eventId, result, r_weapon, v7->nextState.inAltWeaponMode, hand, isPlayerView);
          }
          goto $LN11_130;
        case 86:
          if ( CgEventSystem::CheckClientNumLocal(this, v18, eventId) )
          {
            CG_OnEndTurretFire((const LocalClientNum_t)this->m_localClientNum);
            v22 = truncate_cast<int,unsigned int>(eventParm);
            CG_SndKillAutoSimEntNum(v22, 0);
          }
          goto $LN11_130;
        case 87:
          if ( CgEventSystem::CheckClientNumLocal(this, v18, eventId) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
            CG_AddTurretFire();
          goto $LN11_130;
        case 93:
        case 94:
        case 211:
        case 212:
          goto $LN103_7;
        case 95:
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_riotshield_decalfix_enable, "cg_riotshield_decalfix_enable") )
          {
            number = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v7->nextState.groundEntityNum)->nextState.number;
            v35 = this->m_localClientNum;
            clientNum = v35;
            if ( number > 0x9E4 )
            {
              LODWORD(v80) = number;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v80) )
                __debugbreak();
              v35 = clientNum;
            }
            if ( v35 >= 2 )
            {
              LODWORD(v80) = 2;
              LODWORD(weapon) = v35;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", weapon, v80) )
                __debugbreak();
              v35 = clientNum;
            }
            v36 = 2533 * v35 + number;
            if ( v36 >= 0x13CA )
            {
              LODWORD(v80) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v80) )
                __debugbreak();
            }
            v37 = clientObjMap[v36];
            if ( v37 )
            {
              if ( v37 >= (unsigned int)s_objCount )
              {
                LODWORD(v80) = v37;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v80) )
                  __debugbreak();
              }
              highPrecisionFireData = (const CgFireEventHighPrecisionData *)s_objBuf[v37];
            }
            DObjGetBoneIndexInternal_72((const DObj *)highPrecisionFireData, scr_const.j_riotshield_offset, inOutIndex, (int *)&weaponMap);
          }
$LN103_7:
          otherEntityNum = v7->nextState.otherEntityNum;
          LODWORD(weaponMap) = otherEntityNum;
          groundEntityNum = v7->nextState.groundEntityNum;
          if ( !CgEventSystem::ShouldIgnoreHitImpactEvent(this, eventId, otherEntityNum, r_weapon, isAlternate) && CG_EventMP_IsHitImpactVictimValid((const LocalClientNum_t)this->m_localClientNum, groundEntityNum) )
          {
            v40 = truncate_cast<int,unsigned int>(eventParm);
            ByteToDir(v40, &dir);
            v41 = r_weapon;
            CG_EventMP_GetBulletHitEventInfo((const LocalClientNum_t)this->m_localClientNum, eventId, eventFlagsa, v7, r_weapon, isAlternate, (const CgEventLodData **)outEventLodData, &outBoneIndex, &tracerStart, &outHitLocation, (int *)&eventLodData, (SndHitArmorType *)&clientNum, (SndHitmarkerType *)&characterIndex);
            CG_GetPerks(this->m_localClientNum, otherEntityNum, &outPerks);
            v7->nextState.eventParm2 &= 0xFFFu;
            CG_SND_VerifyTracerAndWhizbySpeeds(outPerks, v41, isAlternate);
            WeaponSystemMP = (Weapon *)CgWeaponSystemMP::GetWeaponSystemMP((const LocalClientNum_t)this->m_localClientNum);
            r_weapon = WeaponSystemMP;
            v43 = outBoneIndex;
            if ( inOutIndex[0] <= 0xFDu )
              v43 = inOutIndex[0];
            outBoneIndex = v43;
            LOBYTE(v82) = isAlternate;
            LOBYTE(fmt) = v43;
            (*(void (__fastcall **)(Weapon *, _QWORD, _QWORD, __int64, int, Weapon *, PlayerHandIndex, vec3_t *, vec3_t *, vec3_t *, vec3_t *, _DWORD, const int, _DWORD, _DWORD, _DWORD, _DWORD, _BYTE, _DWORD, int, int, CgEventLodData *))(*(_QWORD *)&WeaponSystemMP->weaponIdx + 160i64))(r_weapon, (unsigned int)v7->nextState.otherEntityNum, (unsigned int)groundEntityNum, 0xFFFFFFFFi64, fmt, v41, v82, &tracerStart, &tracerStart, &outHitLocation, &dir, v7->nextState.surfType, eventId, LOWORD(v7->nextState.eventParm2), 0, 0, 0, 0, (_DWORD)eventLodData, clientNum, characterIndex, outEventLodData[0]);
            v44 = (int)weaponMap;
            if ( CgWeaponSystem::ShouldSpawnTracerFromEvent((CgWeaponSystem *)r_weapon, eventId, v7, (const int)weaponMap, &outPerks, v41, isAlternate) )
            {
              v45 = isAlternate;
              TagPair::TagPair((TagPair *)outEventLodData);
              v47 = *v46;
              v48 = CgWeaponSystem::ClaimBulletId((CgWeaponSystem *)r_weapon);
              CgWeaponSystem::SpawnTracer((CgWeaponSystem *)r_weapon, v48, 0, v44, &outPerks, WEAPON_HAND_DEFAULT, v47, &tracerStart, &outHitLocation, v41, v45, 0);
              v7 = centa;
            }
          }
          goto $LN11_130;
        case 96:
        case 97:
        case 213:
        case 214:
          if ( v7->nextState.otherEntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1052, ASSERT_TYPE_ASSERT, "(es->otherEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "es->otherEntityNum != ENTITYNUM_NONE") )
            __debugbreak();
          v51 = r_weapon;
          CG_EventMP_GetBulletHitEventInfo((const LocalClientNum_t)this->m_localClientNum, eventId, eventFlagsa, v7, r_weapon, isAlternate, (const CgEventLodData **)outEventLodData, &outBoneIndex, &tracerStart, &outHitLocation, (int *)&eventLodData, (SndHitArmorType *)&characterIndex, (SndHitmarkerType *)&weaponMap);
          CG_BulletHitClientEvent(this->m_localClientNum, v7->nextState.otherEntityNum, v51, isAlternate, &tracerStart, &outHitLocation, v7->nextState.surfType, eventId, v7->nextState.eventParm2, (SndHitArmorType)characterIndex);
          LOWORD(clientNum) = v7->nextState.otherEntityNum;
          CG_GetPerks(this->m_localClientNum, (__int16)clientNum, &outPerks);
          v52 = (CgEventLodData *)CgWeaponSystemMP::GetWeaponSystemMP((const LocalClientNum_t)this->m_localClientNum);
          outEventLodData[0] = v52;
          if ( (v7->nextState.eventParm2 & 2) != 0 && !LocalClientGlobals->inKillCam )
          {
            corpseHitEventCount = LocalClientGlobals->corpseHitEventCount;
            LocalClientGlobals->corpseHitEventCount = corpseHitEventCount + 1;
            if ( (unsigned int)corpseHitEventCount < 6 )
            {
              LocalClientGlobals->corpseHitEventTime = LocalClientGlobals->predictedPlayerState.serverTime;
              v54 = corpseHitEventCount;
              LocalClientGlobals->corpseHitEvent[v54].eventIndex = eventId;
              *(__m256i *)&LocalClientGlobals->corpseHitEvent[v54].weapon.weaponIdx = *(__m256i *)&v51->weaponIdx;
              *(_OWORD *)&LocalClientGlobals->corpseHitEvent[v54].weapon.attachmentVariationIndices[5] = *(_OWORD *)&v51->attachmentVariationIndices[5];
              *(double *)&LocalClientGlobals->corpseHitEvent[v54].weapon.attachmentVariationIndices[21] = *(double *)&v51->attachmentVariationIndices[21];
              *(_DWORD *)&LocalClientGlobals->corpseHitEvent[v54].weapon.weaponCamo = *(_DWORD *)&v51->weaponCamo;
              LocalClientGlobals->corpseHitEvent[v54].isAlternate = isAlternate;
              LocalClientGlobals->corpseHitEvent[v54].startPos = tracerStart;
              LocalClientGlobals->corpseHitEvent[v54].sourceEntityNum = clientNum;
              *(double *)&LocalClientGlobals->corpseHitEvent[v54].hitEventState.boneInfo = *(double *)v7->nextState.lerp.u.anonymous.data;
              LocalClientGlobals->corpseHitEvent[v54].hitEventState.flags = v7->nextState.lerp.u.agentCorpse.attachModels[1].m_data;
              LocalClientGlobals->corpseHitEvent[v54].surfType = v7->nextState.surfType;
              LocalClientGlobals->corpseHitEvent[v54].impactEffects = v7->nextState.eventParm2 & 0xFFF;
              *(_QWORD *)&LocalClientGlobals->corpseHitEvent[v54].hitContents = 0i64;
              LocalClientGlobals->corpseHitEvent[v54].hitArmorType = characterIndex;
              LocalClientGlobals->corpseHitEvent[v54].hitmarkerType = (int)weaponMap;
            }
          }
          if ( CgWeaponSystem::ShouldSpawnTracerFromEvent((CgWeaponSystem *)v52, eventId, v7, (__int16)clientNum, &outPerks, v51, isAlternate) )
          {
            v55 = isAlternate;
            TagPair::TagPair((TagPair *)&r_weapon);
            v57 = *v56;
            v58 = CgWeaponSystem::ClaimBulletId((CgWeaponSystem *)outEventLodData[0]);
            CgWeaponSystem::SpawnTracer((CgWeaponSystem *)outEventLodData[0], v58, 0, (__int16)clientNum, &outPerks, WEAPON_HAND_DEFAULT, v57, &tracerStart, &outHitLocation, v51, v55, 0);
            v7 = centa;
          }
          goto $LN11_130;
        case 98:
          v49 = weaponMap;
          if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          v50 = BgWeaponMap::GetWeapon(v49, v7->nextState.weaponHandle);
          CG_BulletHitClientShieldEvent(this->m_localClientNum, v7->nextState.otherEntityNum, v50, isAlternate, v7->nextState.surfType, eventId, eventParm);
          goto $LN11_130;
        case 99:
          FX_ClearViewmodelMarks(this->m_localClientNum);
          goto $LN11_130;
        case 129:
          CG_Event_PlayBoltedFxFromEventForTeam((const LocalClientNum_t)this->m_localClientNum, p_nextState->number, eventParm);
          goto $LN11_130;
        case 132:
          CG_GetPoseOrigin(&v7->pose, &tracerStart);
          v65 = v7->nextState.lerp.u.turret.gunAngles.v[0];
          if ( v65 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.range >= 0.0f ) )", "( es->lerp.u.event.radiusDamage.range ) = %g", v65) )
            __debugbreak();
          v66 = v7->nextState.lerp.u.turret.gunAngles.v[1];
          if ( v66 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1188, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.delay >= 0.0f ) )", "( es->lerp.u.event.radiusDamage.delay ) = %g", v66) )
            __debugbreak();
          if ( v7->nextState.lerp.u.anonymous.data[3] < 0 )
          {
            LODWORD(weapon) = v7->nextState.lerp.u.anonymous.data[3];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1189, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.damageMax >= 0 ) )", "( es->lerp.u.event.radiusDamage.damageMax ) = %i", weapon) )
              __debugbreak();
          }
          if ( v7->nextState.lerp.u.anonymous.data[2] < 0 )
          {
            LODWORD(weapon) = v7->nextState.lerp.u.anonymous.data[2];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1190, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.damageMin >= 0 ) )", "( es->lerp.u.event.radiusDamage.damageMin ) = %i", weapon) )
              __debugbreak();
          }
          v67 = v7->nextState.lerp.u.actor.impactVector.v[1];
          if ( (v67 < 0.0 || v67 > 2.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1191, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.forceScalar >= 0.0f && es->lerp.u.event.radiusDamage.forceScalar <= PHYSICS_MAX_RADIUSFORCE_SCALAR ) )", "( es->lerp.u.event.radiusDamage.forceScalar ) = %g", v67) )
            __debugbreak();
          ScriptableCl_ExplosionDamageEvent((const LocalClientNum_t)this->m_localClientNum, 0x7FEu, 0x7FEu, &NULL_WEAPON, isAlternate, &tracerStart, v7->nextState.lerp.u.turret.gunAngles.v[0], v7->nextState.lerp.u.anonymous.data[3], v7->nextState.lerp.u.anonymous.data[2], v7->nextState.lerp.u.anonymous.data[5] & 1);
          Physics_ApplyRadiusForce((const Physics_WorldId)(3 * this->m_localClientNum + 3), &tracerStart, v7->nextState.lerp.u.turret.gunAngles.v[0], (float)v7->nextState.lerp.u.anonymous.data[3], (float)v7->nextState.lerp.u.anonymous.data[2], 0.0, &vec3_origin, LocalClientGlobals->time, v7->nextState.lerp.u.actor.impactVector.v[1]);
          if ( v7->nextState.eventParm2 == 16 )
          {
            ClientSideEffectsSystemMP = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)this->m_localClientNum);
            CgClientSideEffectsSystem::ReactiveEnts_Fire(ClientSideEffectsSystemMP, &tracerStart, v7->nextState.lerp.u.turret.gunAngles.v[0], v7->nextState.lerp.u.turret.gunAngles.v[1], Explosion);
          }
          goto LABEL_182;
        case 148:
        case 149:
        case 150:
        case 151:
        case 152:
        case 153:
          CG_GetPoseOrigin(&v7->pose, &tracerStart);
          if ( BG_IsVehicleEntity(&v7->nextState) )
          {
            PlayerIndex = BGVehicles::GetPlayerIndex(&v7->nextState);
            CgEventSystem::HandleRumbleEvents(this, eventId, eventParm, PlayerIndex, &tracerStart);
            v70 = ComCharacterLimits::GetCharacterMaxCount();
            v71 = clientNum;
            if ( clientNum >= v70 )
            {
              LODWORD(v80) = ComCharacterLimits::GetCharacterMaxCount();
              LODWORD(weapon) = v71;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1217, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", weapon, v80) )
                __debugbreak();
            }
          }
          else
          {
            CgEventSystem::HandleRumbleEvents(this, eventId, eventParm, clientNum, &tracerStart);
          }
LABEL_182:
          memset(&tracerStart, 0, sizeof(tracerStart));
          goto $LN11_130;
        case 154:
          CG_Obituary((const LocalClientNum_t)this->m_localClientNum, &v7->nextState, eventParm, 0);
          goto $LN11_130;
        case 155:
          CG_Obituary((const LocalClientNum_t)this->m_localClientNum, &v7->nextState, eventParm, 1);
          goto $LN11_130;
        case 156:
          CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)this->m_localClientNum);
          CgCompassSystemMP::UpdatePingedActor(CompassSystemMP, eventParm);
          goto $LN11_130;
        case 157:
          CG_GetPoseOrigin(&v7->pose, &outHitLocation);
          LODWORD(eventLodData) = v7->nextState.eventParm;
          *(float *)&weaponMap = (float)v7->nextState.time2;
          v61 = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)this->m_localClientNum);
          CgCompassSystemMP::CreateDecoyActor(v61, LocalClientGlobals, &outHitLocation, &v7->nextState.otherEntityNum, (const int *)&eventLodData, (const float *)&weaponMap);
          memset(&outHitLocation, 0, sizeof(outHitLocation));
          goto $LN11_130;
        case 159:
          if ( !CgEventSystem::CheckClientNumLocal(this, v18, eventId) || !isPlayerView )
            goto $LN11_130;
          if ( (_DWORD)eventParm )
          {
            if ( LocalClientGlobals->invalidCmdHintType == INVALID_CMD_NO_GRENADE )
              goto LABEL_68;
            LocalClientGlobals->invalidCmdHintType = INVALID_CMD_NO_GRENADE;
          }
          else
          {
            if ( LocalClientGlobals->invalidCmdHintType == INVALID_CMD_NO_AMMO_SECONDARY_GRENADE )
              goto LABEL_68;
            LocalClientGlobals->invalidCmdHintType = INVALID_CMD_NO_AMMO_SECONDARY_GRENADE;
          }
          LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
LABEL_68:
          LocalClientGlobals->invalidCmdHintWeapon = *BG_GetFirstEquippedOffhandBySlot(weaponMap, &LocalClientGlobals->predictedPlayerState, OFFHAND_SLOT_SECONDARY);
$LN11_130:
          CG_LatencyTestMP_EntityEvent(this->m_localClientNum, v7, eventId, eventFlagsa);
          break;
        case 195:
          v72 = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)this->m_localClientNum);
          CgClientSideEffectsSystem::Exploder_ActivateGroup(v72, eventParm, v7->nextState.time2);
          goto $LN11_130;
        case 196:
        case 197:
          v73 = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)this->m_localClientNum);
          CgClientSideEffectsSystem::Exploder_DeactivateGroup(v73, eventParm, eventId == 197);
          goto $LN11_130;
        case 198:
          time2 = v7->nextState.time2;
          eventParm2 = p_nextState->eventParm2;
          CG_GetPoseOrigin(&centa->pose, &outHitLocation);
          v64 = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)this->m_localClientNum);
          fmta = (float)eventParm;
          CgCompassSystemMP::TriggerPortableRadarPing(v64, LocalClientGlobals, &outHitLocation, time2, fmta, eventParm2);
          memset(&outHitLocation, 0, sizeof(outHitLocation));
          v7 = centa;
          goto $LN11_130;
        case 218:
          ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
          ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
          ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "cg.HUD.hints.interactiveObject.interactionComplete");
          LUI_Model_SetBool(ModelFromPath, 1);
          goto $LN11_130;
        default:
          CgEventSystem::HandleEntityEventCommon(this, v7, v18, eventId, eventFlagsa, eventParm, r_weapon, isAlternate, isPlayerView, eventLodData);
          goto $LN11_130;
      }
    }
  }
  else
  {
    v9 = DVARINT_cg_debugevents;
    if ( !DVARINT_cg_debugevents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugevents") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.integer == 227 )
      goto LABEL_16;
    v10 = DVARINT_cg_debugevents;
    if ( !DVARINT_cg_debugevents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugevents") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( !v10->current.integer )
LABEL_16:
      Com_Printf(21, "CG_EntityEvent:ZERO EVENT\n");
  }
}

/*
==============
CgEventSystemMP::HandleExplosionEvent
==============
*/
void CgEventSystemMP::HandleExplosionEvent(CgEventSystemMP *this, centity_t *cent, int eventType, const vec3_t *position, const Weapon *weapon, const bool isAlternate)
{
  weapProjExposion_t v10; 
  double v15; 
  CgClientSideEffectsSystemMP *ClientSideEffectsSystemMP; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  BG_GetExplosionDamageRangeInfo(weapon, isAlternate, &outDamageRangeInfo);
  v10 = BG_ProjExplosionType(weapon, isAlternate);
  _XMM0 = (unsigned int)eventType;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(outDamageRangeInfo.outerRadius);
  __asm { vblendvps xmm1, xmm0, xmm6, xmm2 }
  v15 = BG_ExplosionReactiveEmitterDelay(weapon, isAlternate);
  CgEventSystem::HandleExplosionEvent(this, cent, eventType, position, weapon, isAlternate);
  if ( (((v10 - 2) & 0xFFFFFFFA) != 0 || v10 == WEAPPROJEXP_HEAVY) && (*(float *)&_XMM1 != 0.0 || outDamageRangeInfo.outerRadius != 0.0 || outDamageRangeInfo.innerDamage != 0.0 || outDamageRangeInfo.outerDamage != 0.0) )
  {
    ClientSideEffectsSystemMP = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)this->m_localClientNum);
    CgClientSideEffectsSystem::ReactiveEnts_Fire(ClientSideEffectsSystemMP, position, outDamageRangeInfo.outerRadius, *(const float *)&v15, Explosion);
  }
}

/*
==============
CgEventSystemMP::HandleTurretFire
==============
*/
void CgEventSystemMP::HandleTurretFire(CgEventSystemMP *this, centity_t *cent, const unsigned int eventId, const unsigned int eventParam, const bool isPlayerView, bool bNoTracer)
{
  CgCompassSystem *CompassSystem; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  centity_t *v13; 
  entityState_t *p_nextState; 
  entityType_s eType; 
  centity_t *v16; 
  centity_t *LinkToParent; 
  const centity_t *v18; 
  __int64 m_localClientNum; 
  CgVehicleSystem *v20; 
  VehicleClient *Client; 
  VehicleClient *v22; 
  const Weapon *EntWeapon; 
  CgWeaponSystemMP *WeaponSystemMP; 
  __int128 v25; 
  const WeaponDef *v29; 
  __int64 v30; 
  __int64 v31; 
  TagPair result; 
  __int64 v33; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec3_t out_Point; 

  v33 = -2i64;
  CgEventSystem::HandleTurretFire(this, cent, eventId, eventParam, isPlayerView, bNoTracer);
  CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( eventId == 90 )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, eventParam);
    v13 = Entity;
    if ( (Entity->flags & 1) != 0 )
    {
      p_nextState = &Entity->nextState;
      if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = p_nextState->eType;
      if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM && LocalClientGlobals->predictedPlayerState.clientNum != eventParam )
      {
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        CompassSystem->AddWeaponPingInfo(CompassSystem, v13, &outOrigin, 50);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
  }
  if ( CgCompassSystemMP::CompassTurretIsPingType(cent) )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    CompassSystem->AddWeaponPingInfo(CompassSystem, cent, &outOrigin, 50);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  if ( cent->nextState.eType == ET_TURRET )
    v16 = cent;
  else
    v16 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, *(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF);
  if ( v16 )
  {
    if ( v16->nextState.eType == ET_TURRET )
    {
      LinkToParent = CG_Entity_GetLinkToParent(this->m_localClientNum, v16);
      v18 = LinkToParent;
      if ( LinkToParent )
      {
        if ( BG_IsVehicleEntity(&LinkToParent->nextState) )
        {
          m_localClientNum = this->m_localClientNum;
          if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
            __debugbreak();
          if ( (unsigned int)m_localClientNum >= CgVehicleSystem::ms_allocatedCount )
          {
            LODWORD(v31) = CgVehicleSystem::ms_allocatedCount;
            LODWORD(v30) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          if ( !CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum] )
          {
            LODWORD(v31) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v31) )
              __debugbreak();
          }
          v20 = CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum];
          Client = CgVehicleSystem::GetClient(v20, v18);
          v22 = Client;
          if ( Client )
          {
            if ( BGVehicles::PhysicsIsValid(Client->physicsId) )
            {
              EntWeapon = CG_GetEntWeapon(this->m_localClientNum, cent);
              BG_GetWeaponFlashTagname(&result, EntWeapon, 0, 0);
              WeaponSystemMP = CgWeaponSystemMP::GetWeaponSystemMP((const LocalClientNum_t)this->m_localClientNum);
              CgWeaponSystemMP::CalcMuzzlePoint(WeaponSystemMP, cent->nextState.number, result, 1, &out_Point);
              outOrigin = LocalClientGlobals->predictedPlayerState.viewangles;
              AngleVectors(&outOrigin, &forward, NULL, NULL);
              v25 = LODWORD(forward.v[0]);
              *(float *)&v25 = fsqrt((float)(*(float *)&v25 * *(float *)&v25) + (float)(forward.v[1] * forward.v[1]));
              _XMM2 = v25;
              __asm
              {
                vcmpless xmm0, xmm2, cs:__real@80000000
                vblendvps xmm0, xmm2, xmm1, xmm0
              }
              forward.v[0] = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
              forward.v[1] = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
              forward.v[2] = 0.0;
              v29 = BG_WeaponDef(EntWeapon, 0);
              BGVehicles::PhysicsFireWeapon(v20, v22->physicsId, &forward, &out_Point, v29);
            }
          }
        }
      }
    }
  }
}

/*
==============
CgEventSystemMP::InventoryNonLocalPlayerEntityEvents
==============
*/
void CgEventSystemMP::InventoryNonLocalPlayerEntityEvents(CgEventSystemMP *this, const centity_t *cent, const CgCharacterAnimUpdateInfo *animUpdateInfo, const unsigned __int16 playerSortedIndex, CgPlayerEventInventory *inventory)
{
  cg_t *LocalClientGlobals; 
  bool v10; 
  __int16 number; 
  int highLod; 
  CgPlayerEventInventory *i; 
  int v14; 
  EventSequence *outPreviousEventSequence; 
  __int64 v16; 
  bool outPerformLowLodEvents; 
  EventSequence v18; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1585, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1586, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1587, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER") )
    __debugbreak();
  if ( !animUpdateInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1588, ASSERT_TYPE_ASSERT, "(animUpdateInfo)", (const char *)&queryFormat, "animUpdateInfo") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1591, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v10 = cent->nextState.number < (int)ComCharacterLimits::ms_gameData.m_clientCount && LocalClientGlobals->m_usingLowLodClientEntityEvents;
  if ( CgEventSystem::CalculatePreviousEventSequence(this, cent, 0, v10, &outPerformLowLodEvents, &v18) || outPerformLowLodEvents )
  {
    if ( (unsigned int)cent->nextState.number >= cls.maxClients )
    {
      LODWORD(outPreviousEventSequence) = cent->nextState.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1603, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( cls.maxClients )", "cent->nextState.number doesn't index cls.maxClients\n\t%i not in [0, %i)", outPreviousEventSequence, cls.maxClients) )
        __debugbreak();
    }
    number = cent->nextState.number;
    if ( (unsigned __int16)number >= 0xF8u )
    {
      LODWORD(v16) = 248;
      LODWORD(outPreviousEventSequence) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1604, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( (200 + 48) )", "cent->nextState.number doesn't index MAX_CHARACTERS_MP\n\t%i not in [0, %i)", outPreviousEventSequence, v16) )
        __debugbreak();
    }
    if ( playerSortedIndex >= 0xF8u )
    {
      LODWORD(v16) = 248;
      LODWORD(outPreviousEventSequence) = playerSortedIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1605, ASSERT_TYPE_ASSERT, "(unsigned)( playerSortedIndex ) < (unsigned)( (200 + 48) )", "playerSortedIndex doesn't index MAX_CHARACTERS_MP\n\t%i not in [0, %i)", outPreviousEventSequence, v16) )
        __debugbreak();
    }
    highLod = v18.highLod;
    for ( i = inventory; highLod != cent->nextState.eventSequence.highLod; ++highLod )
    {
      if ( v10 )
        v14 = (unsigned __int16)highLod % 3u;
      else
        v14 = highLod & 3;
      CG_EventMP_InventoryNonLocalPlayerEntityEvent((const LocalClientNum_t)this->m_localClientNum, cent, animUpdateInfo, playerSortedIndex, v14, i);
    }
    if ( outPerformLowLodEvents )
      CG_EventMP_InventoryNonLocalPlayerEntityEvent((const LocalClientNum_t)this->m_localClientNum, cent, animUpdateInfo, playerSortedIndex, 3, i);
  }
}

/*
==============
CgEventSystemMP::InventoryStandaloneEvent
==============
*/
void CgEventSystemMP::InventoryStandaloneEvent(CgEventSystemMP *this, const centity_t *cent, CgPlayerEventInventory *inventory)
{
  int v6; 
  int otherEntityNum; 
  __int16 groundEntityNum; 
  const Weapon *EventWeapon; 
  __int64 v10; 
  bool isAlternate; 
  bool isPlayerView; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1463, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1464, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType < ET_EVENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1465, ASSERT_TYPE_ASSERT, "(cent->nextState.eType >= ET_EVENTS)", (const char *)&queryFormat, "cent->nextState.eType >= ET_EVENTS") )
    __debugbreak();
  if ( CG_IsEntityHighLoD((const LocalClientNum_t)this->m_localClientNum, cent->nextState.number) && !cent->previousEventSequence.combined )
  {
    v6 = cent->nextState.eType - 29;
    if ( cent->nextState.eType == (ET_HELICOPTER|0x40) || cent->nextState.eType == (ET_AGENT|0x40) )
    {
      LODWORD(v10) = cent->nextState.eType - 29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1330, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_EventMP_Inventory_VerifyStandaloneEventId: trying to apply standalone event %i which is expected to be a player event.\n", v10) )
        __debugbreak();
    }
    switch ( v6 )
    {
      case 93:
      case 94:
      case 95:
      case 211:
      case 212:
        otherEntityNum = cent->nextState.otherEntityNum;
        groundEntityNum = cent->nextState.groundEntityNum;
        EventWeapon = CgEventSystem::GetEventWeapon(this, cent, 0, &isAlternate, &isPlayerView);
        if ( !CgEventSystem::ShouldIgnoreHitImpactEvent(this, cent->nextState.eType, otherEntityNum, EventWeapon, isAlternate) && CG_EventMP_IsHitImpactVictimValid((const LocalClientNum_t)this->m_localClientNum, groundEntityNum) )
          CG_EventMP_InventoryBulletHitEvent((const LocalClientNum_t)this->m_localClientNum, cent, inventory);
        break;
      case 96:
      case 97:
      case 213:
      case 214:
        CG_EventMP_InventoryBulletHitEvent((const LocalClientNum_t)this->m_localClientNum, cent, inventory);
        break;
      default:
        return;
    }
  }
}

/*
==============
CgEventSystemMP::IsTimedEventExpired
==============
*/
_BOOL8 CgEventSystemMP::IsTimedEventExpired(CgEventSystemMP *this, const entityState_t *entityState)
{
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  return GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entityState->lerp.eFlags, ACTIVE, 0x16u) && CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time - entityState->lerp.u.anonymous.data[0] >= 200;
}

