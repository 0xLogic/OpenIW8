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
  int v28; 
  CgEventLodEventTypeBits *p_eventTypeDisabledOverride; 
  centity_t *v30; 
  CgCharacterAnimUpdateInfo *v31; 
  unsigned int v32; 
  __int64 evaluateTrajectory; 
  __int64 evaluateTrajectorya; 
  CgCharacterAnimUpdateInfo *outCharacterPriority; 
  CgCharacterAnimUpdateInfo *outCharacterPrioritya; 
  int clientNum; 
  unsigned int v38; 
  vec3_t viewOrigin; 
  centity_t *cent; 
  __int64 v41; 
  vec3_t viewDir; 

  v41 = -2i64;
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
  _RBX = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1369, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
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
          CharacterAnimUpdateInfoIfSorted = CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(_RBX, groundEntityNum);
          if ( CharacterAnimUpdateInfoIfSorted )
          {
            if ( (unsigned int)groundEntityNum >= 0xF8 )
            {
              LODWORD(outCharacterPriority) = 248;
              LODWORD(evaluateTrajectory) = groundEntityNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1390, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderLookupDistancePriority ) ) + 0 ) )", "victimEntNum doesn't index cgameGlob->m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
                __debugbreak();
            }
            v18 = _RBX->m_playerOrderLookupDistancePriority[groundEntityNum];
            if ( v18 >= _RBX->m_playerOrderDistanceSortedCount )
            {
              LODWORD(outCharacterPriority) = _RBX->m_playerOrderDistanceSortedCount;
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
          v22 = &_RBX->m_playerCorpseUpdateAnimInfo[v20];
          if ( !_RBX->m_playerCorpseUpdateAnimInfoValid[v20] )
          {
            if ( _RBX == (CgGlobalsMP *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
              __debugbreak();
            refdefViewOrg_aab = _RBX->refdef.view.refdefViewOrg_aab;
            v38 = refdefViewOrg_aab;
            if ( _RBX == (CgGlobalsMP *)-26936i64 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
                __debugbreak();
              refdefViewOrg_aab = v38;
            }
            LODWORD(viewOrigin.v[0]) = LODWORD(_RBX->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26936)) + 2));
            LODWORD(viewOrigin.v[1]) = LODWORD(_RBX->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26940)) + 2));
            LODWORD(viewOrigin.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26944)) + 2)) ^ LODWORD(_RBX->refdef.view.org.org.v[2]);
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+6944h]
              vmovss  dword ptr [rsp+0C8h+viewDir], xmm0
              vmovss  xmm1, dword ptr [rbx+6948h]
              vmovss  dword ptr [rsp+0C8h+viewDir+4], xmm1
              vmovss  xmm0, dword ptr [rbx+694Ch]
              vmovss  dword ptr [rsp+0C8h+viewDir+8], xmm0
            }
            *(_QWORD *)&v22->eventLodData.distanceLod = 0i64;
            *(_QWORD *)&_RBX->m_playerCorpseUpdateAnimInfo[v20].eventLodData.cosAngleFromLookAt = 0i64;
            fovLod = _RBX->m_playerCorpseUpdateAnimInfo[v20].eventLodData.fovLod;
            v28 = 0;
            if ( fovLod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 54, ASSERT_TYPE_ASSERT, "( outData.fovLod ) == ( CG_EVENT_LOD_NARROW_FOV )", "%s == %s\n\t%u, %u", "outData.fovLod", "CG_EVENT_LOD_NARROW_FOV", (unsigned __int8)fovLod, 0i64) )
              __debugbreak();
            p_eventTypeDisabledOverride = &v22->eventLodData.eventTypeDisabledOverride;
            while ( !p_eventTypeDisabledOverride->array[0] )
            {
              ++v28;
              ++p_eventTypeDisabledOverride;
              if ( v28 )
                goto LABEL_65;
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 55, ASSERT_TYPE_ASSERT, "(outData.eventTypeDisabledOverride.noBitsOn())", (const char *)&queryFormat, "outData.eventTypeDisabledOverride.noBitsOn()") )
              __debugbreak();
LABEL_65:
            CG_PlayersMP_ComputePlayerDistanceAndFOV(localClientNum, cent, &viewOrigin, &viewDir, _RBX->time, 1, v22);
            CG_EventMP_FinalizeEventLodData(&v22->eventLodData);
            bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&v22->preCacheAnimBones);
            v22->preCacheTagFlags = 0;
            _RBX->m_playerCorpseUpdateAnimInfoValid[v21] = 1;
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
    v30 = CG_GetEntity(localClientNum, otherEntityNum);
    if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1441, ASSERT_TYPE_ASSERT, "(inflictorEnt)", (const char *)&queryFormat, "inflictorEnt") )
      __debugbreak();
    if ( (v30->flags & 1) != 0 && v30->nextState.eType == ET_PLAYER )
    {
      if ( (unsigned int)otherEntityNum >= cls.maxClients )
      {
        LODWORD(outCharacterPriority) = cls.maxClients;
        LODWORD(evaluateTrajectory) = otherEntityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1444, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( cls.maxClients )", "inflictorEntNum doesn't index cls.maxClients\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
          __debugbreak();
      }
      v31 = CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(_RBX, otherEntityNum);
      if ( v31 )
      {
        if ( (unsigned int)otherEntityNum >= 0xF8 )
        {
          LODWORD(outCharacterPriority) = 248;
          LODWORD(evaluateTrajectory) = otherEntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1448, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderLookupDistancePriority ) ) + 0 ) )", "inflictorEntNum doesn't index cgameGlob->m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        v32 = _RBX->m_playerOrderLookupDistancePriority[otherEntityNum];
        if ( v32 >= _RBX->m_playerOrderDistanceSortedCount )
        {
          LODWORD(outCharacterPriority) = _RBX->m_playerOrderDistanceSortedCount;
          LODWORD(evaluateTrajectory) = _RBX->m_playerOrderLookupDistancePriority[otherEntityNum];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1450, ASSERT_TYPE_ASSERT, "(unsigned)( sortedIndex ) < (unsigned)( cgameGlob->m_playerOrderDistanceSortedCount )", "sortedIndex doesn't index cgameGlob->m_playerOrderDistanceSortedCount\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        if ( CG_EventLod_ShouldPerformEvent(localClientNum, CG_EVENT_LOD_TYPE_BULLET_HIT_EXACT_MUZZLE_POINT, &v31->eventLodData) )
          bitarray_base<bitarray<224>>::setBit(&inventory->playerEventInventory[4], v32);
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
  _RBX = DCONST_DVARFLT_cg_eventLod_NarrowFOV;
  if ( !DCONST_DVARFLT_cg_eventLod_NarrowFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_eventLod_NarrowFOV") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3c0efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm { vmovss  cs:?g_cgEventCosHalfNarrowFOVAngle@@3MA, xmm0; float g_cgEventCosHalfNarrowFOVAngle }
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
  characterInfo_t *v14; 
  characterInfo_t *v15; 
  centity_t *v16; 
  int clientNum; 
  __int64 recentVictimIndex; 
  int ControllerFromClient; 
  const char *ColumnValueForRow; 
  CgWeaponMap *Instance; 
  Material *ObituaryDeathIconByWeapon; 
  char (*o_iconName)[1024]; 
  Weapon *v28; 
  bool o_iconHorzFlip; 
  bool v30; 
  StringTable *tablePtr; 
  const entityState_t *v32; 
  Weapon weapon; 
  char nameBuf[48]; 
  char buf[56]; 
  char dest[1024]; 

  otherEntityNum = es->otherEntityNum;
  attackerEntityNum = es->attackerEntityNum;
  v7 = localClientNum;
  v30 = isMOD;
  v32 = es;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v7) )
    __debugbreak();
  if ( (unsigned int)v7 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v28 = CgStatic::ms_allocatedCount;
    LODWORD(o_iconName) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", o_iconName, v28) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v7] )
  {
    LODWORD(v28) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v28) )
      __debugbreak();
  }
  v9 = CgStatic::ms_cgameStaticsArray[v7];
  o_iconHorzFlip = 0;
  __asm
  {
    vmovss  xmm0, cs:__real@3fb33333
    vmovss  dword ptr [rsp+550h+tablePtr], xmm0
    vmovss  dword ptr [rsp+550h+tablePtr], xmm0
  }
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
      v14 = CgStatic::GetCharacterInfo(v9, LocalClientGlobals->clientNum);
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 182, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
        __debugbreak();
      if ( v14->infoValid )
      {
        if ( attackerEntityNum < 0 || attackerEntityNum >= ComCharacterLimits::GetCharacterMaxCount() )
        {
          v15 = NULL;
          attackerEntityNum = 2046;
          nameBuf[0] = 0;
          goto LABEL_38;
        }
        v15 = CgStatic::GetCharacterInfo(v9, attackerEntityNum);
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 195, ASSERT_TYPE_ASSERT, "(attackerCI)", (const char *)&queryFormat, "attackerCI") )
          __debugbreak();
        if ( v15->infoValid )
        {
          CL_GetClientName((LocalClientNum_t)v7, attackerEntityNum, nameBuf, 0x2Fui64);
          if ( attackerEntityNum >= cls.maxClients )
          {
            v16 = CG_GetEntity((const LocalClientNum_t)v7, attackerEntityNum);
            if ( (v16->flags & 1) == 0 || !CL_GetAgentName((LocalClientNum_t)v7, attackerEntityNum, v16->nextState.otherEntityNum, nameBuf, 0x2Fui64) )
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
                LODWORD(v28) = 8;
                LODWORD(o_iconName) = LocalClientGlobals->recentVictimIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 221, ASSERT_TYPE_ASSERT, "(unsigned)( victimIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->recentVictimClientNums ) ) + 0 ) )", "victimIndex doesn't index ARRAY_COUNT( cgameGlob->recentVictimClientNums )\n\t%i not in [0, %i)", o_iconName, v28) )
                  __debugbreak();
              }
              LocalClientGlobals->recentVictimClientNums[recentVictimIndex] = otherEntityNum;
              LocalClientGlobals->recentVictimTimes[recentVictimIndex] = LocalClientGlobals->time;
              LocalClientGlobals->recentVictimIndex = ((_BYTE)recentVictimIndex + 1) & 7;
            }
          }
          else if ( otherEntityNum == clientNum && v15 && !LocalClientGlobals->inKillCam )
          {
            LocalClientGlobals->recentKilledByTime = LocalClientGlobals->time;
            LocalClientGlobals->recentKilledByClientNum = attackerEntityNum;
          }
          ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v7);
          if ( v30 )
          {
            if ( (int)eventParm >= 25 )
            {
              LODWORD(v28) = eventParm;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 256, ASSERT_TYPE_ASSERT, "(mod < MOD_NUM)", "%s\n\tMOD value of %d is not valid.\n", "mod < MOD_NUM", v28) )
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
            _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)eventParm);
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovups ymmword ptr [rsp+550h+weapon.weaponIdx], ymm0
              vmovups xmm1, xmmword ptr [rax+20h]
              vmovups xmmword ptr [rbp+450h+weapon.attachmentVariationIndices+5], xmm1
              vmovsd  xmm0, qword ptr [rax+30h]
              vmovsd  qword ptr [rbp+450h+weapon.attachmentVariationIndices+15h], xmm0
            }
            *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
            ObituaryDeathIconByWeapon = CG_GetObituaryDeathIconByWeapon(&weapon, &o_iconHorzFlip, (float *)&tablePtr, (float *)&tablePtr, (int *)&tablePtr, (char (*)[1024])dest);
            if ( LocalClientGlobals->inKillCam )
              goto LABEL_63;
            LUI_Obituary(ControllerFromClient, attackerEntityNum, otherEntityNum, ObituaryDeathIconByWeapon->textureTable->image, o_iconHorzFlip, (int)tablePtr, &weapon, v32->eventParm2 == 1, LUI_luaVM);
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
  __int64 v16; 

  if ( !eventEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 594, ASSERT_TYPE_ASSERT, "(eventEntity)", (const char *)&queryFormat, "eventEntity") )
    __debugbreak();
  eType = eventEntity->nextState.eType;
  if ( eType <= ET_EVENTS )
  {
    LODWORD(v16) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 595, ASSERT_TYPE_ASSERT, "( ( eventEntity->nextState.eType > ET_EVENTS ) )", "( eventEntity->nextState.eType ) = %i", v16) )
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
      _RBP = eventEntity->nextState.eType;
      __rdtsc();
      if ( (unsigned int)(_RBP - 29) >= 0xE3 )
      {
        LODWORD(v16) = _RBP - 29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 617, ASSERT_TYPE_ASSERT, "(unsigned)( eventId ) < (unsigned)( EV_MAX_EVENTS )", "eventId doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", v16, 227) )
          __debugbreak();
      }
      CG_EntityMP_CalcLerpPositions(this->m_localClientNum, eventEntity);
      *(double *)&_XMM0 = ((double (__fastcall *)(CgEventSystemMP *, centity_t *, _QWORD, _QWORD, _QWORD))this->HandleEntityEvent)(this, eventEntity, (unsigned int)(_RBP - 29), 0i64, 0i64);
      __rdtsc();
      _RCX = 0x140000000ui64;
      ++*((_DWORD *)&g_perfEventTime[213] + _RBP + 1);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
        vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vaddsd  xmm0, xmm1, rva qword_150F3B918[rcx+rbp*8]
        vmovsd  rva qword_150F3B918[rcx+rbp*8], xmm0
        vmovsd  xmm0, qword ptr (rva ?g_perfEventNum@@3PAHA+2A8h)[rcx+rbp*8]; int near * g_perfEventNum
        vmaxsd  xmm1, xmm0, xmm1
        vmovsd  qword ptr (rva ?g_perfEventNum@@3PAHA+2A8h)[rcx+rbp*8], xmm1; int near * g_perfEventNum
      }
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
  const dvar_t *v13; 
  const dvar_t *v14; 
  unsigned int eventParm; 
  const CgFireEventHighPrecisionData *highPrecisionFireData; 
  const characterInfo_t *CharacterInfo; 
  const playerState_s *p_predictedPlayerState; 
  int CharacterMaxCount; 
  int v22; 
  LocalClientNum_t v23; 
  BgWeaponMap *v24; 
  int v33; 
  const Weapon *v34; 
  PlayerHandIndex hand; 
  LocalClientNum_t v36; 
  CgMissile *System; 
  const Weapon *EntWeapon; 
  CgEventLodData *v39; 
  bool v40; 
  TagPair v41; 
  int v42; 
  PlayerHandIndex HandFromWeaponEvent; 
  bool v44; 
  unsigned int number; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  int otherEntityNum; 
  __int16 groundEntityNum; 
  int v51; 
  Weapon *v52; 
  Weapon *WeaponSystemMP; 
  unsigned __int8 v54; 
  int v55; 
  bool v56; 
  TagPair *v57; 
  TagPair v58; 
  int v59; 
  BgWeaponMap *v60; 
  const Weapon *v61; 
  CgEventLodData *v63; 
  __int64 corpseHitEventCount; 
  bool v71; 
  TagPair *v72; 
  TagPair v73; 
  int v74; 
  __int64 m_localClientNum; 
  CgCompassSystemMP *CompassSystemMP; 
  CgCompassSystemMP *v79; 
  int time2; 
  unsigned int eventParm2; 
  CgCompassSystemMP *v84; 
  char v85; 
  bool v89; 
  int v92; 
  bool v93; 
  bool v94; 
  CgClientSideEffectsSystemMP *ClientSideEffectsSystemMP; 
  int PlayerIndex; 
  unsigned int v108; 
  int v109; 
  CgClientSideEffectsSystemMP *v110; 
  CgClientSideEffectsSystemMP *v111; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  int fmt; 
  float fmta; 
  float fmtb; 
  Weapon *weapon; 
  Weapon *weapona; 
  Weapon *weaponb; 
  Weapon *weaponc; 
  float weapond; 
  __int64 v124; 
  bool v125; 
  PlayerHandIndex v126; 
  PlayerHandIndex v127; 
  float outStartLocation; 
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
  __asm { vmovaps [rsp+1C0h+var_50], xmm6 }
  eventFlagsa = eventFlags;
  _RBX = cent;
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
    _R15 = &_RBX->nextState;
    if ( !CG_IsEntityHighLoD((const LocalClientNum_t)this->m_localClientNum, _RBX->nextState.number) )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( _R15->number >= (int)ComCharacterLimits::ms_gameData.m_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 656, ASSERT_TYPE_ASSERT, "(CG_IsEntityHighLoD( m_localClientNum, cent->nextState.number ) || cent->nextState.number < ComCharacterLimits::GetClientMaxCount())", (const char *)&queryFormat, "CG_IsEntityHighLoD( m_localClientNum, cent->nextState.number ) || cent->nextState.number < ComCharacterLimits::GetClientMaxCount()") )
        __debugbreak();
    }
    if ( _RBX == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1956, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( _RBX->nextState.eType != ET_INVISIBLE )
    {
      inOutIndex[0] = -2;
      _RSI = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      eventParm = _RBX->nextState.eventParm;
      r_weapon = (Weapon *)CgEventSystem::GetEventWeapon(this, _RBX, eventFlags, &isAlternate, &isPlayerView);
      BG_GetWeaponFlashTagname(&result, r_weapon, isAlternate, 0);
      weaponMap = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
      characterIndex = _R15->number;
      highPrecisionFireData = NULL;
      if ( _RSI->HasCharacterInfo(_RSI, characterIndex) )
        CharacterInfo = CG_GetCharacterInfo(_RSI, characterIndex);
      else
        CharacterInfo = NULL;
      p_predictedPlayerState = NULL;
      if ( _RSI->predictedPlayerState.clientNum == _R15->number )
        p_predictedPlayerState = &_RSI->predictedPlayerState;
      outBoneIndex = BG_PlayerOrEntityDualWielding(weaponMap, p_predictedPlayerState, &_RBX->nextState, CharacterInfo);
      clientNum = _RBX->nextState.clientNum;
      if ( clientNum < 0 || (CharacterMaxCount = ComCharacterLimits::GetCharacterMaxCount(), v22 = clientNum, clientNum >= CharacterMaxCount) )
      {
        v22 = 0;
        clientNum = 0;
      }
      switch ( eventId )
      {
        case 9:
          if ( eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1132, ASSERT_TYPE_ASSERT, "(eventParm == 0)", (const char *)&queryFormat, "eventParm == 0") )
            __debugbreak();
          m_localClientNum = this->m_localClientNum;
          if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
          {
            LODWORD(v124) = this->m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v124) )
              __debugbreak();
          }
          if ( (unsigned int)m_localClientNum >= CgSoundSystem::ms_allocatedCount )
          {
            LODWORD(v124) = CgSoundSystem::ms_allocatedCount;
            LODWORD(weapon) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", weapon, v124) )
              __debugbreak();
          }
          if ( !CgSoundSystem::ms_soundSystemArray[m_localClientNum] )
          {
            LODWORD(v124) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v124) )
              __debugbreak();
          }
          CgSoundSystem::StopSoundsOnEnt(CgSoundSystem::ms_soundSystemArray[m_localClientNum], _R15->number);
          goto $LN11_130;
        case 11:
        case 12:
          if ( CgEventSystem::CheckClientNumLocal(this, v22, eventId) )
          {
            v23 = this->m_localClientNum;
            if ( eventId == 11 )
            {
              CL_SetStance(v23, CL_STANCE_CROUCH, eventParm);
            }
            else
            {
              CL_SetStance(v23, CL_STANCE_PRONE, eventParm);
              if ( CG_ForceSwitchToValidWeapon(this->m_localClientNum) )
              {
                v24 = weaponMap;
                if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
                  __debugbreak();
                _RDI = BgWeaponMap::GetWeapon(v24, _RSI->predictedPlayerState.weapCommon.weaponHandle);
                switch ( eventParm )
                {
                  case 1u:
                    if ( _RSI->invalidCmdHintType != INVALID_CMD_STAND_BLOCKED )
                    {
                      _RSI->invalidCmdHintType = INVALID_CMD_STAND_BLOCKED;
                      _RSI->invalidCmdHintTime = _RSI->time;
                    }
                    break;
                  case 2u:
                    if ( _RSI->invalidCmdHintType != INVALID_CMD_CROUCH_BLOCKED )
                    {
                      _RSI->invalidCmdHintType = INVALID_CMD_CROUCH_BLOCKED;
                      _RSI->invalidCmdHintTime = _RSI->time;
                    }
                    break;
                  case 3u:
                    if ( _RSI->invalidCmdHintType != INVALID_CMD_PRONE_BLOCKED )
                    {
                      _RSI->invalidCmdHintType = INVALID_CMD_PRONE_BLOCKED;
                      _RSI->invalidCmdHintTime = _RSI->time;
                    }
                    break;
                  case 6u:
                    if ( _RSI->invalidCmdHintType != INVALID_CMD_TURRET_BLOCKED )
                    {
                      _RSI->invalidCmdHintType = INVALID_CMD_TURRET_BLOCKED;
                      _RSI->invalidCmdHintTime = _RSI->time;
                    }
                    break;
                  default:
                    if ( (eventParm & 0xFFFFFFFA) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1249, ASSERT_TYPE_ASSERT, "((type == STANCE_EVENT_PARAM_NO_HINT) || (type == STANCE_EVENT_PARAM_GROUND_POUND) || (type == STANCE_EVENT_PARAM_KEEP_HELD))", (const char *)&queryFormat, "(type == STANCE_EVENT_PARAM_NO_HINT) || (type == STANCE_EVENT_PARAM_GROUND_POUND) || (type == STANCE_EVENT_PARAM_KEEP_HELD)") )
                      __debugbreak();
                    break;
                }
                __asm
                {
                  vmovups ymm0, ymmword ptr [rdi]
                  vmovups ymmword ptr [rsi+180BCh], ymm0
                  vmovups xmm1, xmmword ptr [rdi+20h]
                  vmovups xmmword ptr [rsi+180DCh], xmm1
                  vmovsd  xmm0, qword ptr [rdi+30h]
                  vmovsd  qword ptr [rsi+180ECh], xmm0
                }
                *(_DWORD *)&_RSI->invalidCmdHintWeapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
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
          r_weapon = (Weapon *)CG_GetEntWeapon(this->m_localClientNum, _RBX);
          if ( (unsigned int)(eventId - 43) <= 1 || (isAlternate = 0, (unsigned int)(eventId - 50) <= 1) )
            isAlternate = 1;
          HandFromWeaponEvent = BG_GetHandFromWeaponEvent(eventId);
          v44 = isPlayerView;
          if ( !isPlayerView )
          {
            if ( eventParm )
            {
              if ( BG_IsHighPrecisionClientFireEventEnabled(eventId, &_RBX->nextState) )
              {
                highPrecisionFireData = (const CgFireEventHighPrecisionData *)&outFireAxis;
                memset(&outFireAxis, 0, sizeof(outFireAxis));
                BG_UnpackClientWeaponFireEventParm(eventParm, &outFireAxis);
              }
              v44 = isPlayerView;
            }
            if ( eventLodData )
            {
              if ( highPrecisionFireData )
                CG_FireWeaponWithLodAndHighPrecisionData(this->m_localClientNum, _RBX, eventId, -1, result, r_weapon, isAlternate, HandFromWeaponEvent, v44, outBoneIndex, 0, eventLodData, highPrecisionFireData);
              else
                CG_FireWeaponWithLod(this->m_localClientNum, _RBX, eventId, -1, result, r_weapon, isAlternate, HandFromWeaponEvent, v44, outBoneIndex, 0, eventLodData);
            }
            else if ( highPrecisionFireData )
            {
              CG_FireWeaponWithHighPrecisionData(this->m_localClientNum, _RBX, eventId, -1, result, r_weapon, isAlternate, HandFromWeaponEvent, v44, outBoneIndex, 0, highPrecisionFireData);
            }
            else
            {
              CG_FireWeapon(this->m_localClientNum, _RBX, eventId, -1, result, r_weapon, isAlternate, HandFromWeaponEvent, v44, outBoneIndex, 0);
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
          EntWeapon = CG_GetEntWeapon(this->m_localClientNum, _RBX);
          isAlternate = (unsigned int)(eventId - 64) <= 3;
          clientNum = BG_GetHandFromWeaponEvent(eventId);
          if ( eventParm >= ComCharacterLimits::GetCharacterMaxCount() )
          {
            LODWORD(v124) = ComCharacterLimits::GetCharacterMaxCount();
            LODWORD(weapon) = eventParm;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 834, ASSERT_TYPE_ASSERT, "(unsigned)( eventParm ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "eventParm doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", weapon, v124) )
              __debugbreak();
          }
          if ( !isPlayerView )
          {
            v39 = eventLodData;
            v40 = isAlternate;
            v41 = result;
            v42 = truncate_cast<int,unsigned int>(eventParm);
            v125 = v40;
            _RBX = centa;
            if ( v39 )
              CG_FireWeaponWithLod(this->m_localClientNum, centa, eventId, v42, v41, EntWeapon, v125, (PlayerHandIndex)clientNum, 0, outBoneIndex, 0, v39);
            else
              CG_FireWeapon(this->m_localClientNum, centa, eventId, v42, v41, EntWeapon, v125, (PlayerHandIndex)clientNum, 0, outBoneIndex, 0);
          }
          goto $LN11_130;
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
          v34 = CG_GetEntWeapon(this->m_localClientNum, _RBX);
          hand = BG_GetHandFromWeaponEvent(eventId);
          if ( CgEventSystem::CheckClientNumLocal(this, clientNum, eventId) && isPlayerView )
          {
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring, "bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring") )
              CrashReport_TriggerNow();
            v36 = this->m_localClientNum;
            if ( eventLodData )
              CG_FireWeaponWithLod(v36, _RBX, eventId, -1, result, v34, _RBX->nextState.inAltWeaponMode, hand, isPlayerView, outBoneIndex, 0, eventLodData);
            else
              CG_FireWeapon(v36, _RBX, eventId, -1, result, v34, _RBX->nextState.inAltWeaponMode, hand, isPlayerView, outBoneIndex, 0);
            System = CgMissile::GetSystem((const LocalClientNum_t)this->m_localClientNum);
            if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 778, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
              __debugbreak();
            CgMissile::OnWeaponFire(System, _RBX, eventId, result, r_weapon, _RBX->nextState.inAltWeaponMode, hand, isPlayerView);
          }
          goto $LN11_130;
        case 86:
          if ( CgEventSystem::CheckClientNumLocal(this, v22, eventId) )
          {
            CG_OnEndTurretFire((const LocalClientNum_t)this->m_localClientNum);
            v33 = truncate_cast<int,unsigned int>(eventParm);
            CG_SndKillAutoSimEntNum(v33, 0);
          }
          goto $LN11_130;
        case 87:
          if ( CgEventSystem::CheckClientNumLocal(this, v22, eventId) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
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
            number = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, _RBX->nextState.groundEntityNum)->nextState.number;
            v46 = this->m_localClientNum;
            clientNum = v46;
            if ( number > 0x9E4 )
            {
              LODWORD(v124) = number;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v124) )
                __debugbreak();
              v46 = clientNum;
            }
            if ( v46 >= 2 )
            {
              LODWORD(v124) = 2;
              LODWORD(weapon) = v46;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", weapon, v124) )
                __debugbreak();
              v46 = clientNum;
            }
            v47 = 2533 * v46 + number;
            if ( v47 >= 0x13CA )
            {
              LODWORD(v124) = v47;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v124) )
                __debugbreak();
            }
            v48 = clientObjMap[v47];
            if ( v48 )
            {
              if ( v48 >= (unsigned int)s_objCount )
              {
                LODWORD(v124) = v48;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v124) )
                  __debugbreak();
              }
              highPrecisionFireData = (const CgFireEventHighPrecisionData *)s_objBuf[v48];
            }
            DObjGetBoneIndexInternal_72((const DObj *)highPrecisionFireData, scr_const.j_riotshield_offset, inOutIndex, (int *)&weaponMap);
          }
$LN103_7:
          otherEntityNum = _RBX->nextState.otherEntityNum;
          LODWORD(weaponMap) = otherEntityNum;
          groundEntityNum = _RBX->nextState.groundEntityNum;
          if ( !CgEventSystem::ShouldIgnoreHitImpactEvent(this, eventId, otherEntityNum, r_weapon, isAlternate) && CG_EventMP_IsHitImpactVictimValid((const LocalClientNum_t)this->m_localClientNum, groundEntityNum) )
          {
            v51 = truncate_cast<int,unsigned int>(eventParm);
            ByteToDir(v51, &dir);
            v52 = r_weapon;
            CG_EventMP_GetBulletHitEventInfo((const LocalClientNum_t)this->m_localClientNum, eventId, eventFlagsa, _RBX, r_weapon, isAlternate, (const CgEventLodData **)outEventLodData, &outBoneIndex, &tracerStart, &outHitLocation, (int *)&eventLodData, (SndHitArmorType *)&clientNum, (SndHitmarkerType *)&characterIndex);
            CG_GetPerks(this->m_localClientNum, otherEntityNum, &outPerks);
            _RBX->nextState.eventParm2 &= 0xFFFu;
            CG_SND_VerifyTracerAndWhizbySpeeds(outPerks, v52, isAlternate);
            WeaponSystemMP = (Weapon *)CgWeaponSystemMP::GetWeaponSystemMP((const LocalClientNum_t)this->m_localClientNum);
            r_weapon = WeaponSystemMP;
            v54 = outBoneIndex;
            if ( inOutIndex[0] <= 0xFDu )
              v54 = inOutIndex[0];
            outBoneIndex = v54;
            LOBYTE(v126) = isAlternate;
            LOBYTE(fmt) = v54;
            (*(void (__fastcall **)(Weapon *, _QWORD, _QWORD, __int64, int, Weapon *, PlayerHandIndex, vec3_t *, vec3_t *, vec3_t *, vec3_t *, _DWORD, const int, _DWORD, _DWORD, _DWORD, _DWORD, _BYTE, _DWORD, int, int, CgEventLodData *))(*(_QWORD *)&WeaponSystemMP->weaponIdx + 160i64))(r_weapon, (unsigned int)_RBX->nextState.otherEntityNum, (unsigned int)groundEntityNum, 0xFFFFFFFFi64, fmt, v52, v126, &tracerStart, &tracerStart, &outHitLocation, &dir, _RBX->nextState.surfType, eventId, LOWORD(_RBX->nextState.eventParm2), 0, 0, 0, 0, (_DWORD)eventLodData, clientNum, characterIndex, outEventLodData[0]);
            v55 = (int)weaponMap;
            if ( CgWeaponSystem::ShouldSpawnTracerFromEvent((CgWeaponSystem *)r_weapon, eventId, _RBX, (const int)weaponMap, &outPerks, v52, isAlternate) )
            {
              v56 = isAlternate;
              TagPair::TagPair((TagPair *)outEventLodData);
              v58 = *v57;
              v59 = CgWeaponSystem::ClaimBulletId((CgWeaponSystem *)r_weapon);
              CgWeaponSystem::SpawnTracer((CgWeaponSystem *)r_weapon, v59, 0, v55, &outPerks, WEAPON_HAND_DEFAULT, v58, &tracerStart, &outHitLocation, v52, v56, 0);
              _RBX = centa;
            }
          }
          goto $LN11_130;
        case 96:
        case 97:
        case 213:
        case 214:
          if ( _RBX->nextState.otherEntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1052, ASSERT_TYPE_ASSERT, "(es->otherEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "es->otherEntityNum != ENTITYNUM_NONE") )
            __debugbreak();
          _R12 = r_weapon;
          CG_EventMP_GetBulletHitEventInfo((const LocalClientNum_t)this->m_localClientNum, eventId, eventFlagsa, _RBX, r_weapon, isAlternate, (const CgEventLodData **)outEventLodData, &outBoneIndex, &tracerStart, &outHitLocation, (int *)&eventLodData, (SndHitArmorType *)&characterIndex, (SndHitmarkerType *)&weaponMap);
          CG_BulletHitClientEvent(this->m_localClientNum, _RBX->nextState.otherEntityNum, _R12, isAlternate, &tracerStart, &outHitLocation, _RBX->nextState.surfType, eventId, _RBX->nextState.eventParm2, (SndHitArmorType)characterIndex);
          LOWORD(clientNum) = _RBX->nextState.otherEntityNum;
          CG_GetPerks(this->m_localClientNum, (__int16)clientNum, &outPerks);
          v63 = (CgEventLodData *)CgWeaponSystemMP::GetWeaponSystemMP((const LocalClientNum_t)this->m_localClientNum);
          outEventLodData[0] = v63;
          if ( (_RBX->nextState.eventParm2 & 2) != 0 && !_RSI->inKillCam )
          {
            corpseHitEventCount = _RSI->corpseHitEventCount;
            _RSI->corpseHitEventCount = corpseHitEventCount + 1;
            if ( (unsigned int)corpseHitEventCount < 6 )
            {
              _RSI->corpseHitEventTime = _RSI->predictedPlayerState.serverTime;
              _RCX = corpseHitEventCount;
              _RSI->corpseHitEvent[_RCX].eventIndex = eventId;
              __asm
              {
                vmovups ymm0, ymmword ptr [r12]
                vmovups ymmword ptr [rcx+rsi+672A4h], ymm0
                vmovups xmm1, xmmword ptr [r12+20h]
                vmovups xmmword ptr [rcx+rsi+672C4h], xmm1
                vmovsd  xmm0, qword ptr [r12+30h]
                vmovsd  qword ptr [rcx+rsi+672D4h], xmm0
              }
              *(_DWORD *)&_RSI->corpseHitEvent[_RCX].weapon.weaponCamo = *(_DWORD *)&_R12->weaponCamo;
              _RSI->corpseHitEvent[_RCX].isAlternate = isAlternate;
              __asm
              {
                vmovsd  xmm0, qword ptr [rbp+90h+tracerStart]
                vmovsd  qword ptr [rcx+rsi+672E4h], xmm0
              }
              _RSI->corpseHitEvent[_RCX].startPos.v[2] = tracerStart.v[2];
              _RSI->corpseHitEvent[_RCX].sourceEntityNum = clientNum;
              __asm
              {
                vmovsd  xmm0, qword ptr [rbx+1E8h]
                vmovsd  qword ptr [rcx+rsi+672F4h], xmm0
              }
              _RSI->corpseHitEvent[_RCX].hitEventState.flags = _RBX->nextState.lerp.u.agentCorpse.attachModels[1].m_data;
              _RSI->corpseHitEvent[_RCX].surfType = _RBX->nextState.surfType;
              _RSI->corpseHitEvent[_RCX].impactEffects = _RBX->nextState.eventParm2 & 0xFFF;
              *(_QWORD *)&_RSI->corpseHitEvent[_RCX].hitContents = 0i64;
              _RSI->corpseHitEvent[_RCX].hitArmorType = characterIndex;
              _RSI->corpseHitEvent[_RCX].hitmarkerType = (int)weaponMap;
            }
          }
          if ( CgWeaponSystem::ShouldSpawnTracerFromEvent((CgWeaponSystem *)v63, eventId, _RBX, (__int16)clientNum, &outPerks, _R12, isAlternate) )
          {
            v71 = isAlternate;
            TagPair::TagPair((TagPair *)&r_weapon);
            v73 = *v72;
            v74 = CgWeaponSystem::ClaimBulletId((CgWeaponSystem *)outEventLodData[0]);
            CgWeaponSystem::SpawnTracer((CgWeaponSystem *)outEventLodData[0], v74, 0, (__int16)clientNum, &outPerks, WEAPON_HAND_DEFAULT, v73, &tracerStart, &outHitLocation, _R12, v71, 0);
            _RBX = centa;
          }
          goto $LN11_130;
        case 98:
          v60 = weaponMap;
          if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          v61 = BgWeaponMap::GetWeapon(v60, _RBX->nextState.weaponHandle);
          CG_BulletHitClientShieldEvent(this->m_localClientNum, _RBX->nextState.otherEntityNum, v61, isAlternate, _RBX->nextState.surfType, eventId, eventParm);
          goto $LN11_130;
        case 99:
          FX_ClearViewmodelMarks(this->m_localClientNum);
          goto $LN11_130;
        case 129:
          CG_Event_PlayBoltedFxFromEventForTeam((const LocalClientNum_t)this->m_localClientNum, _R15->number, eventParm);
          goto $LN11_130;
        case 132:
          CG_GetPoseOrigin(&_RBX->pose, &tracerStart);
          __asm
          {
            vmovss  xmm0, dword ptr [r15+58h]
            vxorps  xmm6, xmm6, xmm6
            vcomiss xmm0, xmm6
          }
          if ( v85 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+1C0h+weapon], xmm0
            }
            v89 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.range >= 0.0f ) )", "( es->lerp.u.event.radiusDamage.range ) = %g", *(double *)&weapona);
            v85 = 0;
            if ( v89 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [r15+5Ch]
            vcomiss xmm0, xmm6
          }
          if ( v85 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+1C0h+weapon], xmm0
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1188, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.delay >= 0.0f ) )", "( es->lerp.u.event.radiusDamage.delay ) = %g", *(double *)&weaponb) )
              __debugbreak();
          }
          if ( _RBX->nextState.lerp.u.anonymous.data[3] < 0 )
          {
            LODWORD(weapon) = _RBX->nextState.lerp.u.anonymous.data[3];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1189, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.damageMax >= 0 ) )", "( es->lerp.u.event.radiusDamage.damageMax ) = %i", weapon) )
              __debugbreak();
          }
          v92 = _RBX->nextState.lerp.u.anonymous.data[2];
          v93 = v92 == 0;
          if ( v92 < 0 )
          {
            LODWORD(weapon) = _RBX->nextState.lerp.u.anonymous.data[2];
            v94 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1190, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.damageMin >= 0 ) )", "( es->lerp.u.event.radiusDamage.damageMin ) = %i", weapon);
            v93 = !v94;
            if ( v94 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [r15+68h]
            vcomiss xmm0, xmm6
            vcomiss xmm0, cs:__real@40000000
          }
          if ( !v93 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+1C0h+weapon], xmm0
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1191, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.forceScalar >= 0.0f && es->lerp.u.event.radiusDamage.forceScalar <= PHYSICS_MAX_RADIUSFORCE_SCALAR ) )", "( es->lerp.u.event.radiusDamage.forceScalar ) = %g", *(double *)&weaponc) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [r15+58h]
            vmovss  [rsp+1C0h+var_190], xmm0
          }
          ScriptableCl_ExplosionDamageEvent((const LocalClientNum_t)this->m_localClientNum, 0x7FEu, 0x7FEu, &NULL_WEAPON, isAlternate, &tracerStart, *(const float *)&v127, _RBX->nextState.lerp.u.anonymous.data[3], _RBX->nextState.lerp.u.anonymous.data[2], _RBX->nextState.lerp.u.anonymous.data[5] & 1);
          __asm
          {
            vmovss  xmm0, dword ptr [r15+68h]
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [r15+60h]
            vxorps  xmm3, xmm3, xmm3
            vcvtsi2ss xmm3, xmm3, dword ptr [r15+64h]; innerDamage
            vmovss  dword ptr [rsp+1C0h+outStartLocation], xmm0
            vmovss  dword ptr [rsp+1C0h+weapon], xmm6
            vmovss  dword ptr [rsp+1C0h+fmt], xmm1
            vmovss  xmm2, dword ptr [r15+58h]; radius
          }
          Physics_ApplyRadiusForce((const Physics_WorldId)(3 * this->m_localClientNum + 3), &tracerStart, *(const float *)&_XMM2, *(const float *)&_XMM3, fmtb, weapond, &vec3_origin, _RSI->time, outStartLocation);
          if ( _RBX->nextState.eventParm2 == 16 )
          {
            ClientSideEffectsSystemMP = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)this->m_localClientNum);
            __asm
            {
              vmovss  xmm3, dword ptr [r15+5Ch]; timeDelay
              vmovss  xmm2, dword ptr [r15+58h]; eventRadius
            }
            CgClientSideEffectsSystem::ReactiveEnts_Fire(ClientSideEffectsSystemMP, &tracerStart, *(const float *)&_XMM2, *(const float *)&_XMM3, Explosion);
          }
          goto LABEL_181;
        case 148:
        case 149:
        case 150:
        case 151:
        case 152:
        case 153:
          CG_GetPoseOrigin(&_RBX->pose, &tracerStart);
          if ( BG_IsVehicleEntity(&_RBX->nextState) )
          {
            PlayerIndex = BGVehicles::GetPlayerIndex(&_RBX->nextState);
            CgEventSystem::HandleRumbleEvents(this, eventId, eventParm, PlayerIndex, &tracerStart);
            v108 = ComCharacterLimits::GetCharacterMaxCount();
            v109 = clientNum;
            if ( clientNum >= v108 )
            {
              LODWORD(v124) = ComCharacterLimits::GetCharacterMaxCount();
              LODWORD(weapon) = v109;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.cpp", 1217, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", weapon, v124) )
                __debugbreak();
            }
          }
          else
          {
            CgEventSystem::HandleRumbleEvents(this, eventId, eventParm, clientNum, &tracerStart);
          }
LABEL_181:
          memset(&tracerStart, 0, sizeof(tracerStart));
          goto $LN11_130;
        case 154:
          CG_Obituary((const LocalClientNum_t)this->m_localClientNum, &_RBX->nextState, eventParm, 0);
          goto $LN11_130;
        case 155:
          CG_Obituary((const LocalClientNum_t)this->m_localClientNum, &_RBX->nextState, eventParm, 1);
          goto $LN11_130;
        case 156:
          CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)this->m_localClientNum);
          CgCompassSystemMP::UpdatePingedActor(CompassSystemMP, eventParm);
          goto $LN11_130;
        case 157:
          CG_GetPoseOrigin(&_RBX->pose, &outHitLocation);
          LODWORD(eventLodData) = _RBX->nextState.eventParm;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [r15+88h]
            vmovss  dword ptr [rbp+90h+weaponMap], xmm0
          }
          v79 = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)this->m_localClientNum);
          CgCompassSystemMP::CreateDecoyActor(v79, _RSI, &outHitLocation, &_RBX->nextState.otherEntityNum, (const int *)&eventLodData, (const float *)&weaponMap);
          memset(&outHitLocation, 0, sizeof(outHitLocation));
          goto $LN11_130;
        case 159:
          if ( !CgEventSystem::CheckClientNumLocal(this, v22, eventId) || !isPlayerView )
            goto $LN11_130;
          if ( eventParm )
          {
            if ( _RSI->invalidCmdHintType == INVALID_CMD_NO_GRENADE )
              goto LABEL_68;
            _RSI->invalidCmdHintType = INVALID_CMD_NO_GRENADE;
          }
          else
          {
            if ( _RSI->invalidCmdHintType == INVALID_CMD_NO_AMMO_SECONDARY_GRENADE )
              goto LABEL_68;
            _RSI->invalidCmdHintType = INVALID_CMD_NO_AMMO_SECONDARY_GRENADE;
          }
          _RSI->invalidCmdHintTime = _RSI->time;
LABEL_68:
          _RAX = BG_GetFirstEquippedOffhandBySlot(weaponMap, &_RSI->predictedPlayerState, OFFHAND_SLOT_SECONDARY);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rsi+180BCh], ymm0
            vmovups xmm1, xmmword ptr [rax+20h]
            vmovups xmmword ptr [rsi+180DCh], xmm1
            vmovsd  xmm0, qword ptr [rax+30h]
            vmovsd  qword ptr [rsi+180ECh], xmm0
          }
          *(_DWORD *)&_RSI->invalidCmdHintWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
$LN11_130:
          CG_LatencyTestMP_EntityEvent(this->m_localClientNum, _RBX, eventId, eventFlagsa);
          break;
        case 195:
          v110 = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)this->m_localClientNum);
          CgClientSideEffectsSystem::Exploder_ActivateGroup(v110, eventParm, _RBX->nextState.time2);
          goto $LN11_130;
        case 196:
        case 197:
          v111 = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)this->m_localClientNum);
          CgClientSideEffectsSystem::Exploder_DeactivateGroup(v111, eventParm, eventId == 197);
          goto $LN11_130;
        case 198:
          time2 = _RBX->nextState.time2;
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, r12
          }
          eventParm2 = _R15->eventParm2;
          CG_GetPoseOrigin(&centa->pose, &outHitLocation);
          v84 = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)this->m_localClientNum);
          __asm { vmovss  dword ptr [rsp+1C0h+fmt], xmm6 }
          CgCompassSystemMP::TriggerPortableRadarPing(v84, _RSI, &outHitLocation, time2, fmta, eventParm2);
          memset(&outHitLocation, 0, sizeof(outHitLocation));
          _RBX = centa;
          goto $LN11_130;
        case 218:
          ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
          ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
          ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "cg.HUD.hints.interactiveObject.interactionComplete");
          LUI_Model_SetBool(ModelFromPath, 1);
          goto $LN11_130;
        default:
          CgEventSystem::HandleEntityEventCommon(this, _RBX, v22, eventId, eventFlagsa, eventParm, r_weapon, isAlternate, isPlayerView, eventLodData);
          goto $LN11_130;
      }
    }
  }
  else
  {
    v13 = DVARINT_cg_debugevents;
    if ( !DVARINT_cg_debugevents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugevents") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.integer == 227 )
      goto LABEL_16;
    v14 = DVARINT_cg_debugevents;
    if ( !DVARINT_cg_debugevents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugevents") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( !v14->current.integer )
LABEL_16:
      Com_Printf(21, "CG_EntityEvent:ZERO EVENT\n");
  }
  __asm { vmovaps xmm6, [rsp+1C0h+var_50] }
}

/*
==============
CgEventSystemMP::HandleExplosionEvent
==============
*/
void CgEventSystemMP::HandleExplosionEvent(CgEventSystemMP *this, centity_t *cent, int eventType, const vec3_t *position, const Weapon *weapon, const bool isAlternate)
{
  weapProjExposion_t v12; 
  bool v21; 
  CgClientSideEffectsSystemMP *ClientSideEffectsSystemMP; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_58], xmm7
  }
  _EBP = eventType;
  BG_GetExplosionDamageRangeInfo(weapon, isAlternate, &outDamageRangeInfo);
  v12 = BG_ProjExplosionType(weapon, isAlternate);
  _EAX = 109;
  __asm
  {
    vmovd   xmm1, eax
    vmovd   xmm0, ebp
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, [rsp+0B8h+outDamageRangeInfo.outerRadius]
    vxorps  xmm6, xmm6, xmm6
    vblendvps xmm1, xmm0, xmm6, xmm2
    vmovss  [rsp+0B8h+var_88], xmm1
  }
  *(double *)&_XMM0 = BG_ExplosionReactiveEmitterDelay(weapon, isAlternate);
  __asm { vmovaps xmm7, xmm0 }
  CgEventSystem::HandleExplosionEvent(this, cent, _EBP, position, weapon, isAlternate);
  v21 = ((v12 - 2) & 0xFFFFFFFA) == 0;
  if ( ((v12 - 2) & 0xFFFFFFFA) != 0 || (v21 = v12 == WEAPPROJEXP_HEAVY) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+0B8h+var_88]
      vucomiss xmm0, xmm6
    }
    if ( !v21 )
      goto LABEL_7;
    __asm
    {
      vmovss  xmm0, [rsp+0B8h+outDamageRangeInfo.outerRadius]
      vucomiss xmm0, xmm6
    }
    if ( !v21 )
      goto LABEL_7;
    __asm
    {
      vmovss  xmm0, [rsp+0B8h+outDamageRangeInfo.innerDamage]
      vucomiss xmm0, xmm6
    }
    if ( !v21 )
      goto LABEL_7;
    __asm
    {
      vmovss  xmm0, [rsp+0B8h+outDamageRangeInfo.outerDamage]
      vucomiss xmm0, xmm6
    }
    if ( !v21 )
    {
LABEL_7:
      ClientSideEffectsSystemMP = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)this->m_localClientNum);
      __asm
      {
        vmovss  xmm2, [rsp+0B8h+outDamageRangeInfo.outerRadius]; eventRadius
        vmovaps xmm3, xmm7; timeDelay
      }
      CgClientSideEffectsSystem::ReactiveEnts_Fire(ClientSideEffectsSystemMP, position, *(const float *)&_XMM2, *(const float *)&_XMM3, Explosion);
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
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
  const WeaponDef *v41; 
  __int64 v42; 
  __int64 v43; 
  TagPair result; 
  __int64 v45; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec3_t out_Point; 

  v45 = -2i64;
  CgEventSystem::HandleTurretFire(this, cent, eventId, eventParam, isPlayerView, bNoTracer);
  CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
  _R12 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
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
      if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM && _R12->predictedPlayerState.clientNum != eventParam )
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
            LODWORD(v43) = CgVehicleSystem::ms_allocatedCount;
            LODWORD(v42) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v42, v43) )
              __debugbreak();
          }
          if ( !CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum] )
          {
            LODWORD(v43) = m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v43) )
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
              __asm
              {
                vmovss  xmm0, dword ptr [r12+1E0h]
                vmovss  dword ptr [rsp+0C8h+outOrigin], xmm0
                vmovss  xmm1, dword ptr [r12+1E4h]
                vmovss  dword ptr [rsp+0C8h+outOrigin+4], xmm1
                vmovss  xmm0, dword ptr [r12+1E8h]
                vmovss  dword ptr [rsp+0C8h+outOrigin+8], xmm0
              }
              AngleVectors(&outOrigin, &forward, NULL, NULL);
              __asm
              {
                vmovss  xmm3, dword ptr [rsp+0C8h+forward]
                vmulss  xmm1, xmm3, xmm3
                vmovss  xmm4, dword ptr [rsp+0C8h+forward+4]
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm1, xmm1, xmm0
                vsqrtss xmm2, xmm1, xmm1
                vcmpless xmm0, xmm2, cs:__real@80000000
                vmovss  xmm1, cs:__real@3f800000
                vblendvps xmm0, xmm2, xmm1, xmm0
                vdivss  xmm1, xmm1, xmm0
                vmulss  xmm0, xmm3, xmm1
                vmovss  dword ptr [rsp+0C8h+forward], xmm0
                vmulss  xmm1, xmm4, xmm1
                vmovss  dword ptr [rsp+0C8h+forward+4], xmm1
                vxorps  xmm0, xmm0, xmm0
                vmovss  dword ptr [rsp+0C8h+forward+8], xmm0
              }
              v41 = BG_WeaponDef(EntWeapon, 0);
              BGVehicles::PhysicsFireWeapon(v20, v22->physicsId, &forward, &out_Point, v41);
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

