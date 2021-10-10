/*
==============
CgEventSystemSP::HandleEntityEvent
==============
*/

void __fastcall CgEventSystemSP::HandleEntityEvent(CgEventSystemSP *this, centity_t *cent, const int eventId, const int eventFlags, const CgEventLodData *optionalEventLodData)
{
  ?HandleEntityEvent@CgEventSystemSP@@MEBAXPEAUcentity_t@@HHPEBUCgEventLodData@@@Z(this, cent, eventId, eventFlags, optionalEventLodData);
}

/*
==============
CgEventSystemSP::CheckEvents
==============
*/

void __fastcall CgEventSystemSP::CheckEvents(CgEventSystemSP *this, centity_t *eventEntity)
{
  ?CheckEvents@CgEventSystemSP@@QEBAXPEAUcentity_t@@@Z(this, eventEntity);
}

/*
==============
CgEventSystemSP::GetEntityEventLodDataIfSupported
==============
*/

const CgEventLodData *__fastcall CgEventSystemSP::GetEntityEventLodDataIfSupported(CgEventSystemSP *this, const centity_t *cent, const int eventFlags)
{
  return ?GetEntityEventLodDataIfSupported@CgEventSystemSP@@MEBAPEBUCgEventLodData@@PEBUcentity_t@@H@Z(this, cent, eventFlags);
}

/*
==============
CgEventSystemSP::IsTimedEventExpired
==============
*/

int __fastcall CgEventSystemSP::IsTimedEventExpired(CgEventSystemSP *this, const entityState_t *entityState)
{
  return ?IsTimedEventExpired@CgEventSystemSP@@UEBAHPEBUentityState_t@@@Z(this, entityState);
}

/*
==============
CgEventSystemSP::HandleTurretFire
==============
*/

void __fastcall CgEventSystemSP::HandleTurretFire(CgEventSystemSP *this, centity_t *cent, const unsigned int eventId, const unsigned int eventParam, const bool isPlayerView, bool bNoTracer)
{
  ?HandleTurretFire@CgEventSystemSP@@UEBAXPEAUcentity_t@@II_N_N@Z(this, cent, eventId, eventParam, isPlayerView, bNoTracer);
}

/*
==============
CgEventSystemSP::CheckEvents
==============
*/
void CgEventSystemSP::CheckEvents(CgEventSystemSP *this, centity_t *eventEntity)
{
  entityType_s eType; 
  entityType_s v5; 
  const char *EntityTypeName; 
  __int64 v7; 
  __int64 v12; 

  if ( !eventEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 74, ASSERT_TYPE_ASSERT, "(eventEntity)", (const char *)&queryFormat, "eventEntity") )
    __debugbreak();
  eType = eventEntity->nextState.eType;
  if ( eType <= ET_EVENTS )
  {
    LODWORD(v12) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 75, ASSERT_TYPE_ASSERT, "( ( eventEntity->nextState.eType > ET_EVENTS ) )", "( eventEntity->nextState.eType ) = %i", v12) )
      __debugbreak();
  }
  if ( eventEntity->nextState.eventSequence.combined && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 76, ASSERT_TYPE_ASSERT, "(!eventEntity->nextState.eventSequence.combined)", (const char *)&queryFormat, "!eventEntity->nextState.eventSequence.combined") )
    __debugbreak();
  if ( !eventEntity->previousEventSequence.combined )
  {
    v5 = eventEntity->nextState.eType;
    eventEntity->previousEventSequence.combined = 1;
    EntityTypeName = BG_GetEntityTypeName(v5);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, EntityTypeName);
    v7 = eventEntity->nextState.eType;
    __rdtsc();
    if ( (unsigned int)(v7 - 29) >= 0xE3 )
    {
      LODWORD(v12) = v7 - 29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( eventId ) < (unsigned)( EV_MAX_EVENTS )", "eventId doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", v12, 227) )
        __debugbreak();
    }
    CG_EntitySP_CalcLerpPositions(this->m_localClientNum, eventEntity);
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

/*
==============
CgEventSystemSP::GetEntityEventLodDataIfSupported
==============
*/
const CgEventLodData *CgEventSystemSP::GetEntityEventLodDataIfSupported(CgEventSystemSP *this, const centity_t *cent, const int eventFlags)
{
  return 0i64;
}

/*
==============
CgEventSystemSP::HandleEntityEvent
==============
*/
void CgEventSystemSP::HandleEntityEvent(CgEventSystemSP *this, centity_t *cent, const int eventId, const int eventFlags, const CgEventLodData *optionalEventLodData)
{
  __int16 v5; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  cg_t *LocalClientGlobals; 
  entityState_t *p_nextState; 
  int number; 
  stance_event_params_t eventParm; 
  bitarray<64> m_localClientNum; 
  const characterInfo_t *CharacterInfo; 
  int v17; 
  const playerState_s *p_predictedPlayerState; 
  StanceState v19; 
  const Weapon *CurrentWeaponForPlayer; 
  int v21; 
  PlayerHandIndex hand; 
  const Weapon *EntWeapon; 
  const DObj *ClientDObj; 
  const char *BoneName; 
  scr_string_t v26; 
  const Weapon *v27; 
  CgSoundSystem *v28; 
  unsigned __int16 weaponIdx; 
  const SndAliasList *v30; 
  const Weapon *v31; 
  bool v32; 
  CgWeaponSystemSP *WeaponSystemSP; 
  float v34; 
  bool v35; 
  TagPair *v36; 
  TagPair v37; 
  int v38; 
  int v39; 
  unsigned int otherEntityNum; 
  scr_string_t partName; 
  LocalClientNum_t v42; 
  centity_t *Entity; 
  const DObj *v44; 
  centity_t *v45; 
  const cpose_t *p_pose; 
  unsigned int eventParm2; 
  int v48; 
  cg_t *v49; 
  playerState_s *v50; 
  Weapon *v51; 
  centity_t *v52; 
  CgWeaponSystem *v53; 
  bool v54; 
  TagPair *v55; 
  TagPair v56; 
  int v57; 
  TagPair v58; 
  meansOfDeath_t MethodOfDeath; 
  const Weapon *v60; 
  const Weapon *v61; 
  LocalClientNum_t groundEntityNum; 
  const DObj *v63; 
  CgWeaponSystemSP *v64; 
  Weapon *v65; 
  int v66; 
  bool v67; 
  TagPair *v68; 
  TagPair v69; 
  int v70; 
  CgSoundSystem *v71; 
  CgSoundSystem *v72; 
  CgSoundSystem *SoundSystem; 
  CgSoundSystem *v74; 
  int v75; 
  float v76; 
  float v77; 
  CgClientSideEffectsSystemSP *ClientSideEffectsSystemSP; 
  CgClientSideEffectsSystemSP *v79; 
  CgClientSideEffectsSystemSP *v80; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  int fmt; 
  Weapon *weapon; 
  __int64 v86; 
  bool bNoTracer; 
  int v88; 
  bool isAlternate; 
  bool isPlayerView; 
  unsigned __int8 inOutIndex[2]; 
  int eventFlagsa; 
  int characterIndex; 
  vec3_t tracerStart; 
  TagPair weaponFlashTagPair; 
  Weapon *WeaponForEntity; 
  vec3_t outOrigin; 
  TagPair result; 
  __int64 v99; 
  Weapon v100; 
  TagPair EventWeapon; 
  vec3_t weaponMap; 
  vec3_t out; 
  bitarray<64> outPerks; 
  Weapon r_weapon; 

  v99 = -2i64;
  eventFlagsa = eventFlags;
  WeaponForEntity = (Weapon *)optionalEventLodData;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 149, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (unsigned int)eventId >= 0xE3 )
  {
    LODWORD(weapon) = eventId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 150, ASSERT_TYPE_ASSERT, "(unsigned)( eventId ) < (unsigned)( EV_MAX_EVENTS )", "eventId doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", weapon, 227) )
      __debugbreak();
  }
  if ( eventId )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    weaponFlashTagPair = (TagPair)&LocalClientGlobals->predictedPlayerState;
    p_nextState = &cent->nextState;
    number = cent->nextState.number;
    eventParm = cent->nextState.eventParm;
    EventWeapon = (TagPair)CgEventSystem::GetEventWeapon(this, cent, eventFlagsa, &isAlternate, &isPlayerView);
    BG_GetWeaponFlashTagname(&result, *(const Weapon **)&EventWeapon, isAlternate, 0);
    m_localClientNum = (bitarray<64>)(int)this->m_localClientNum;
    outPerks = m_localClientNum;
    if ( !CgWeaponMap::ms_instance[*(_QWORD *)&m_localClientNum] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      m_localClientNum = outPerks;
    }
    *(_QWORD *)weaponMap.v = CgWeaponMap::ms_instance[*(_QWORD *)&m_localClientNum];
    characterIndex = p_nextState->number;
    if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, characterIndex) )
    {
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        v17 = characterIndex;
        if ( characterIndex >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v86) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(weapon) = characterIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", weapon, v86) )
            __debugbreak();
          v17 = characterIndex;
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v17);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, characterIndex);
      }
    }
    else
    {
      CharacterInfo = NULL;
    }
    p_predictedPlayerState = NULL;
    if ( LocalClientGlobals->predictedPlayerState.clientNum == p_nextState->number )
      p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    inOutIndex[0] = BG_PlayerOrEntityDualWielding(*(const BgWeaponMap **)weaponMap.v, p_predictedPlayerState, &cent->nextState, CharacterInfo);
    switch ( eventId )
    {
      case 9:
        SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
        v74 = SoundSystem;
        if ( eventParm )
        {
          v75 = truncate_cast<int,unsigned int>(eventParm);
          CgSoundSystem::StopSoundChannelOnEnt(v74, p_nextState->number, v75 - 1);
        }
        else
        {
          CgSoundSystem::StopSoundsOnEnt(SoundSystem, p_nextState->number);
        }
        return;
      case 11:
        if ( CgEventSystem::CheckClientNumLocal(this, number, eventId) )
        {
          v19 = CL_STANCE_CROUCH;
          goto LABEL_35;
        }
        return;
      case 12:
        if ( CgEventSystem::CheckClientNumLocal(this, number, eventId) )
        {
          v19 = CL_STANCE_PRONE;
LABEL_35:
          CL_SetStance(this->m_localClientNum, v19, eventParm);
          if ( isPlayerView && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 5u) )
          {
            CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(*(const BgWeaponMap **)weaponMap.v, &LocalClientGlobals->predictedPlayerState);
            cg_t::SetInvalidStanceHint(LocalClientGlobals, eventParm, CurrentWeaponForPlayer);
          }
        }
        return;
      case 35:
      case 226:
        return;
      case 40:
      case 42:
      case 43:
      case 44:
      case 48:
      case 49:
      case 50:
      case 51:
      case 204:
      case 205:
      case 206:
        hand = BG_GetHandFromWeaponEvent(eventId);
        EntWeapon = CG_GetEntWeapon(this->m_localClientNum, cent);
        outPerks = (bitarray<64>)CgMissile::GetSystem((const LocalClientNum_t)this->m_localClientNum);
        if ( !*(_QWORD *)&outPerks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 260, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
          __debugbreak();
        if ( eventParm )
        {
          *(float *)&eventFlagsa = COERCE_FLOAT(BG_GetWeaponFireEventBoneIndex(eventParm));
          ClientDObj = Com_GetClientDObj(p_nextState->number, this->m_localClientNum);
          if ( ClientDObj )
          {
            BoneName = DObjGetBoneName(ClientDObj, eventFlagsa);
            if ( BoneName )
            {
              v26 = SL_ConvertFromString(BoneName);
              TagPair::TagPair(&weaponFlashTagPair, v26, (scr_string_t)0);
              r_weapon = *BG_GetWeaponFireWeaponID(&v100, eventParm);
              if ( v5 == EntWeapon->weaponIdx )
                r_weapon = *EntWeapon;
              CG_FireWeapon(this->m_localClientNum, cent, eventId, -1, weaponFlashTagPair, &r_weapon, isAlternate, hand, isPlayerView, inOutIndex[0], 0);
              CgMissile::OnWeaponFire(*(CgMissile **)&outPerks, cent, eventId, weaponFlashTagPair, &r_weapon, isAlternate, hand, isPlayerView);
            }
          }
        }
        else
        {
          CG_FireWeapon(this->m_localClientNum, cent, eventId, -1, result, EntWeapon, 0, hand, isPlayerView, inOutIndex[0], 0);
          CgMissile::OnWeaponFire(*(CgMissile **)&outPerks, cent, eventId, result, EntWeapon, 0, hand, isPlayerView);
        }
        return;
      case 53:
        v27 = CG_GetEntWeapon(this->m_localClientNum, cent);
        v28 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
        weaponIdx = v27->weaponIdx;
        if ( !v27->weaponIdx || weaponIdx >= BG_GetNumWeapons() )
        {
          LODWORD(weapon) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 306, ASSERT_TYPE_ASSERT, "( ( weapon.weaponIdx != 0 && weapon.weaponIdx < BG_GetNumWeapons() ) )", "( weapon.weaponIdx ) = %i", weapon) )
            __debugbreak();
        }
        v30 = BG_EmptyFireSound(v27, isAlternate, isPlayerView);
        if ( v30 )
          CgSoundSystem::PlayEntitySoundAlias(v28, p_nextState->number, v30);
        return;
      case 86:
        if ( CgEventSystem::CheckClientNumLocal(this, number, eventId) )
        {
          CG_OnEndTurretFire((const LocalClientNum_t)this->m_localClientNum);
          v21 = truncate_cast<int,unsigned int>(eventParm);
          CG_SndKillAutoSimEntNum(v21, 0);
        }
        return;
      case 87:
        if ( CgEventSystem::CheckClientNumLocal(this, number, eventId) )
          CG_AddTurretFire();
        return;
      case 92:
        *(_QWORD *)weaponMap.v = 0i64;
        v31 = (const Weapon *)EventWeapon;
        if ( !*(_WORD *)EventWeapon.m_primaryTagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 348, ASSERT_TYPE_ASSERT, "(eventWeapon.weaponIdx != 0)", (const char *)&queryFormat, "eventWeapon.weaponIdx != WP_NONE") )
          __debugbreak();
        Tracer_AdvanceDrawCounter((const LocalClientNum_t)this->m_localClientNum, (const bitarray<64> *)&weaponMap, WEAPON_HAND_DEFAULT, v31, isAlternate, p_nextState->number);
        v32 = Tracer_ShouldDraw((const LocalClientNum_t)this->m_localClientNum, (const bitarray<64> *)&weaponMap, WEAPON_HAND_DEFAULT, v31, isAlternate, p_nextState->number) == 1;
        if ( eventParm || v32 )
        {
          WeaponSystemSP = CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)this->m_localClientNum);
          if ( p_nextState == (entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
            __debugbreak();
          if ( p_nextState->lerp.pos.trType == TR_LINEAR_STOP_SECURE )
          {
            EventWeapon = (TagPair)&tracerStart;
            v34 = p_nextState->lerp.pos.trBase.v[1];
            LODWORD(tracerStart.v[2]) = s_trbase_aab_Z ^ LODWORD(v34) ^ LODWORD(p_nextState->lerp.pos.trBase.v[2]);
            LODWORD(tracerStart.v[1]) = s_trbase_aab_Y ^ LODWORD(p_nextState->lerp.pos.trBase.v[0]) ^ LODWORD(v34);
            LODWORD(tracerStart.v[0]) = LODWORD(p_nextState->lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
            memset(&EventWeapon, 0, sizeof(EventWeapon));
            eventFlagsa = SLODWORD(tracerStart.v[0]);
            if ( (LODWORD(tracerStart.v[0]) & 0x7F800000) == 2139095040 || (eventFlagsa = SLODWORD(tracerStart.v[1]), (LODWORD(tracerStart.v[1]) & 0x7F800000) == 2139095040) || (eventFlagsa = SLODWORD(tracerStart.v[2]), (LODWORD(tracerStart.v[2]) & 0x7F800000) == 2139095040) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                __debugbreak();
            }
          }
          else
          {
            tracerStart = p_nextState->lerp.pos.trBase;
          }
          v35 = isAlternate;
          TagPair::TagPair(&EventWeapon);
          v37 = *v36;
          v38 = p_nextState->number;
          v39 = CgWeaponSystem::ClaimBulletId(WeaponSystemSP);
          CgWeaponSystem::SpawnTracer(WeaponSystemSP, v39, 0, v38, (const bitarray<64> *)&weaponMap, WEAPON_HAND_DEFAULT, v37, &tracerStart, (const vec3_t *)&p_nextState->lerp.u, v31, v35, 0);
          memset(&tracerStart, 0, sizeof(tracerStart));
        }
        return;
      case 93:
      case 94:
      case 95:
        WeaponForEntity = (Weapon *)BG_GetWeaponForEntity(*(const BgWeaponMap **)weaponMap.v, &cent->nextState);
        otherEntityNum = cent->nextState.otherEntityNum;
        eventFlagsa = otherEntityNum;
        if ( !CgEventSystem::ShouldIgnoreHitImpactEvent(this, eventId, otherEntityNum, WeaponForEntity, isAlternate) )
        {
          if ( eventParm )
          {
            LODWORD(weapon) = eventParm;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 373, ASSERT_TYPE_ASSERT, "( ( eventParm == 0 ) )", "( eventParm ) = %i", weapon) )
              __debugbreak();
          }
          EventWeapon = (TagPair)CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)this->m_localClientNum);
          characterIndex = cent->nextState.groundEntityNum;
          partName = cent->nextState.lerp.u.event.bulletHitSP.partName;
          v42 = this->m_localClientNum;
          inOutIndex[0] = -2;
          Entity = CG_GetEntity(v42, characterIndex);
          if ( Entity )
          {
            v44 = Com_GetClientDObj(Entity->nextState.number, v42);
            if ( v44 )
            {
              if ( partName )
                DObjGetBoneIndexInternal_80(v44, partName, inOutIndex, (int *)&weaponMap);
            }
          }
          CG_GetPerks(this->m_localClientNum, otherEntityNum, &outPerks);
          if ( (*(_BYTE *)(&cent->nextState.lerp.u.infoVolumeGrapple + 2) & 1) != 0 )
          {
            v45 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, characterIndex);
            p_pose = &v45->pose;
            if ( (v45->flags & 1) != 0 )
            {
              AnglesToAxis(&v45->pose.angles, (tmat33_t<vec3_t> *)&r_weapon);
              CG_GetPoseOrigin(&cent->pose, &outOrigin);
              MatrixTransformVector(&outOrigin, (const tmat33_t<vec3_t> *)&r_weapon, &tracerStart);
              CG_GetPoseOrigin(p_pose, &weaponMap);
              tracerStart.v[0] = tracerStart.v[0] + weaponMap.v[0];
              tracerStart.v[1] = tracerStart.v[1] + weaponMap.v[1];
              tracerStart.v[2] = tracerStart.v[2] + weaponMap.v[2];
              MatrixTransformVector(&cent->nextState.lerp.apos.trBase, (const tmat33_t<vec3_t> *)&r_weapon, &out);
              memset(&weaponMap, 0, sizeof(weaponMap));
              memset(&outOrigin, 0, sizeof(outOrigin));
            }
            else
            {
              tracerStart = cent->nextState.lerp.pos.trDelta;
              out = cent->nextState.lerp.apos.trDelta;
            }
          }
          else
          {
            CG_GetPoseOrigin(&cent->pose, &tracerStart);
            out = cent->nextState.lerp.apos.trBase;
          }
          CG_SND_VerifyTracerAndWhizbySpeeds(outPerks, WeaponForEntity, isAlternate);
          if ( otherEntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 424, ASSERT_TYPE_ASSERT, "(inflictorEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "inflictorEntNum != ENTITYNUM_NONE") )
            __debugbreak();
          eventParm2 = cent->nextState.eventParm2;
          v48 = cent->nextState.lerp.u.anonymous.data[6];
          v49 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
          v50 = &v49->predictedPlayerState;
          if ( v49 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( (eventParm2 & 4) != 0 || v50->clientNum != otherEntityNum )
            v48 = -1;
          v88 = v48;
          LOBYTE(v86) = isAlternate;
          v51 = WeaponForEntity;
          LOBYTE(fmt) = inOutIndex[0];
          (*(void (__fastcall **)(TagPair, _QWORD, _QWORD, __int64, int, Weapon *, _DWORD, LerpEntityStateTypeUnion *, LerpEntityStateTypeUnion *, vec3_t *, vec3_t *, _DWORD, const int, unsigned int, _DWORD, _DWORD, int, _BYTE, int, _DWORD, _DWORD, _QWORD))(**(_QWORD **)&EventWeapon + 160i64))(EventWeapon, otherEntityNum, (unsigned int)characterIndex, 0xFFFFFFFFi64, fmt, WeaponForEntity, v86, &cent->nextState.lerp.u, &cent->nextState.lerp.u, &tracerStart, &out, cent->nextState.surfType, eventId, cent->nextState.eventParm2, 0, cent->nextState.lerp.u.event.bulletHitSP.flags, cent->nextState.lerp.u.anonymous.data[7], 0, v88, 0, 0, 0i64);
          v52 = cent;
          v53 = (CgWeaponSystem *)EventWeapon;
          if ( CgWeaponSystem::ShouldSpawnTracerFromEvent(*(CgWeaponSystem **)&EventWeapon, eventId, v52, otherEntityNum, &outPerks, v51, isAlternate) )
          {
            v54 = isAlternate;
            TagPair::TagPair(&EventWeapon);
            v56 = *v55;
            v57 = CgWeaponSystem::ClaimBulletId(v53);
            bNoTracer = v54;
            otherEntityNum = eventFlagsa;
            CgWeaponSystem::SpawnTracer(v53, v57, 0, eventFlagsa, &outPerks, WEAPON_HAND_DEFAULT, v56, (const vec3_t *)&p_nextState->lerp.u, &tracerStart, v51, bNoTracer, 0);
          }
          v58 = weaponFlashTagPair;
          if ( (GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(*(_QWORD *)&weaponFlashTagPair + 28i64), ACTIVE, 0x22u) && (!Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(*(_QWORD *)&v58 + 28i64), GameModeFlagValues::ms_mpValue, 0x29u)) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(*(_QWORD *)&v58 + 28i64), GameModeFlagValues::ms_mpValue, 0x21u) || otherEntityNum != *(_DWORD *)(*(_QWORD *)&v58 + 460i64)) && (p_nextState->eventParm2 & 4) == 0 && (unsigned int)(eventId - 93) <= 1 )
          {
            MethodOfDeath = BG_WeaponBulletFire_GetMethodOfDeath(outPerks, v51, isAlternate);
            CgWeaponSystem::BulletScriptableImpact(v53, otherEntityNum, characterIndex, v51, isAlternate, MethodOfDeath, (const vec3_t *)&p_nextState->lerp.u, &tracerStart, (const scr_string_t)p_nextState->lerp.u.event.bulletHitSP.partName);
          }
          memset(&tracerStart, 0, sizeof(tracerStart));
        }
        return;
      case 96:
      case 97:
        v64 = CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)this->m_localClientNum);
        v65 = (Weapon *)BG_GetWeaponForEntity(*(const BgWeaponMap **)weaponMap.v, &cent->nextState);
        WeaponForEntity = v65;
        v66 = cent->nextState.otherEntityNum;
        eventFlagsa = v66;
        out.v[0] = cent->nextState.lerp.u.actor.impactVector.v[0] + *(float *)(*(_QWORD *)&weaponFlashTagPair + 48i64);
        out.v[1] = *(float *)(*(_QWORD *)&weaponFlashTagPair + 52i64) + cent->nextState.lerp.u.actor.impactVector.v[1];
        out.v[2] = *(float *)(*(_QWORD *)&weaponFlashTagPair + 56i64) + cent->nextState.lerp.u.actor.impactVector.v[2];
        CG_BulletHitClientEvent(this->m_localClientNum, v66, v65, isAlternate, (const vec3_t *)&cent->nextState.lerp.u, &out, cent->nextState.surfType, eventId, cent->nextState.eventParm2, SND_HIT_ARMOR_TYPE_NONE);
        CG_GetPerks(this->m_localClientNum, v66, (bitarray<64> *)&EventWeapon);
        if ( CgWeaponSystem::ShouldSpawnTracerFromEvent(v64, eventId, cent, v66, (const bitarray<64> *)&EventWeapon, v65, isAlternate) )
        {
          CG_GetPoseOrigin(&cent->pose, &outOrigin);
          v67 = isAlternate;
          TagPair::TagPair(&weaponFlashTagPair);
          v69 = *v68;
          v70 = CgWeaponSystem::ClaimBulletId(v64);
          CgWeaponSystem::SpawnTracer(v64, v70, 0, eventFlagsa, (const bitarray<64> *)&EventWeapon, WEAPON_HAND_DEFAULT, v69, (const vec3_t *)&cent->nextState.lerp.u, &outOrigin, WeaponForEntity, v67, 0);
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
        return;
      case 98:
        if ( cent->nextState.groundEntityNum != LocalClientGlobals->predictedPlayerState.clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 454, ASSERT_TYPE_ASSERT, "(es->groundEntityNum == cgameGlob->predictedPlayerState.clientNum)", (const char *)&queryFormat, "es->groundEntityNum == cgameGlob->predictedPlayerState.clientNum") )
          __debugbreak();
        v60 = BG_GetWeaponForEntity(*(const BgWeaponMap **)weaponMap.v, &cent->nextState);
        CG_BulletHitClientShieldEvent((LocalClientNum_t)cent->nextState.groundEntityNum, cent->nextState.otherEntityNum, v60, isAlternate, cent->nextState.surfType, eventId, eventParm);
        return;
      case 99:
        v61 = BG_GetWeaponForEntity(*(const BgWeaponMap **)weaponMap.v, &cent->nextState);
        FX_ClearViewmodelMarks(this->m_localClientNum);
        groundEntityNum = cent->nextState.groundEntityNum;
        BG_GetWeaponFlashTagname(&EventWeapon, v61, isAlternate, 0);
        inOutIndex[0] = -2;
        characterIndex = 0;
        v63 = Com_GetClientDObj(2048, groundEntityNum);
        TagPair::GetTagNameAndBoneIndex(&EventWeapon, v63, (scr_string_t *)&characterIndex, inOutIndex);
        CG_PlayBoltedEffect(this->m_localClientNum, &cgMedia.fxRiotShieldDestroyed, 2048, (scr_string_t)characterIndex);
        return;
      case 132:
        v76 = cent->nextState.lerp.u.turret.gunAngles.v[0];
        if ( v76 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 547, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.range >= 0.0f ) )", "( es->lerp.u.event.radiusDamage.range ) = %g", v76) )
          __debugbreak();
        v77 = cent->nextState.lerp.u.actor.impactVector.v[1];
        if ( (v77 < 0.0 || v77 > 2.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 548, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.forceScalar >= 0.0f && es->lerp.u.event.radiusDamage.forceScalar <= PHYSICS_MAX_RADIUSFORCE_SCALAR ) )", "( es->lerp.u.event.radiusDamage.forceScalar ) = %g", v77) )
          __debugbreak();
        if ( cent->nextState.lerp.u.anonymous.data[3] < 0 )
        {
          LODWORD(weapon) = cent->nextState.lerp.u.anonymous.data[3];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 549, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.damageMax >= 0 ) )", "( es->lerp.u.event.radiusDamage.damageMax ) = %i", weapon) )
            __debugbreak();
        }
        if ( cent->nextState.lerp.u.anonymous.data[2] < 0 )
        {
          LODWORD(weapon) = cent->nextState.lerp.u.anonymous.data[2];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 550, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.damageMin >= 0 ) )", "( es->lerp.u.event.radiusDamage.damageMin ) = %i", weapon) )
            __debugbreak();
        }
        CG_GetPoseOrigin(&cent->pose, &out);
        ScriptableCl_ExplosionDamageEvent((const LocalClientNum_t)this->m_localClientNum, 0x7FEu, 0x7FEu, &NULL_WEAPON, isAlternate, &out, cent->nextState.lerp.u.turret.gunAngles.v[0], cent->nextState.lerp.u.anonymous.data[3], cent->nextState.lerp.u.anonymous.data[2], cent->nextState.lerp.u.anonymous.data[5] & 1);
        Physics_ApplyRadiusForce((const Physics_WorldId)(3 * this->m_localClientNum + 3), &out, cent->nextState.lerp.u.turret.gunAngles.v[0], (float)cent->nextState.lerp.u.anonymous.data[3], (float)cent->nextState.lerp.u.anonymous.data[2], 0.0, &vec3_origin, LocalClientGlobals->time, cent->nextState.lerp.u.actor.impactVector.v[1]);
        if ( cent->nextState.eventParm2 == 16 )
        {
          ClientSideEffectsSystemSP = CgClientSideEffectsSystemSP::GetClientSideEffectsSystemSP((const LocalClientNum_t)this->m_localClientNum);
          CgClientSideEffectsSystem::ReactiveEnts_Fire(ClientSideEffectsSystemSP, &out, cent->nextState.lerp.u.turret.gunAngles.v[0], cent->nextState.lerp.u.turret.gunAngles.v[1], Explosion);
        }
        memset(&out, 0, sizeof(out));
        return;
      case 148:
      case 149:
      case 150:
      case 151:
      case 152:
      case 153:
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        CgEventSystem::HandleRumbleEvents(this, eventId, eventParm, number, &outOrigin);
        memset(&outOrigin, 0, sizeof(outOrigin));
        return;
      case 159:
        if ( !CgEventSystem::CheckClientNumLocal(this, number, eventId) || !isPlayerView )
          return;
        if ( eventParm )
        {
          if ( LocalClientGlobals->invalidCmdHintType != INVALID_CMD_NO_GRENADE )
          {
            LocalClientGlobals->invalidCmdHintType = INVALID_CMD_NO_GRENADE;
LABEL_47:
            LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
          }
        }
        else if ( LocalClientGlobals->invalidCmdHintType != INVALID_CMD_NO_AMMO_SECONDARY_GRENADE )
        {
          LocalClientGlobals->invalidCmdHintType = INVALID_CMD_NO_AMMO_SECONDARY_GRENADE;
          goto LABEL_47;
        }
        LocalClientGlobals->invalidCmdHintWeapon = *BG_GetFirstEquippedOffhandBySlot(*(const BgWeaponMap **)weaponMap.v, &LocalClientGlobals->predictedPlayerState, OFFHAND_SLOT_SECONDARY);
        return;
      case 195:
        v79 = CgClientSideEffectsSystemSP::GetClientSideEffectsSystemSP((const LocalClientNum_t)this->m_localClientNum);
        CgClientSideEffectsSystem::Exploder_ActivateGroup(v79, eventParm, cent->nextState.time2);
        return;
      case 196:
      case 197:
        v80 = CgClientSideEffectsSystemSP::GetClientSideEffectsSystemSP((const LocalClientNum_t)this->m_localClientNum);
        CgClientSideEffectsSystem::Exploder_DeactivateGroup(v80, eventParm, eventId == 197);
        return;
      case 201:
        if ( eventParm )
        {
          v71 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
          CgSoundSystem::ChangeSoundParameterOnEnt(v71, p_nextState->number, eventParm, SND_ScalePitchOnEnt, 4.0);
        }
        return;
      case 202:
        v72 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
        CgSoundSystem::ChangeSoundParameterOnEnt(v72, p_nextState->number, eventParm, SND_ScaleVolumeOnEnt, 4.0);
        return;
      case 218:
        ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
        ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
        ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "cg.HUD.hints.interactiveObject.interactionComplete");
        LUI_Model_SetBool(ModelFromPath, 1);
        return;
      default:
        CgEventSystem::HandleEntityEventCommon(this, cent, number, eventId, eventFlagsa, eventParm, *(const Weapon **)&EventWeapon, isAlternate, isPlayerView, (const CgEventLodData *)WeaponForEntity);
        return;
    }
  }
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

/*
==============
CgEventSystemSP::HandleTurretFire
==============
*/
void CgEventSystemSP::HandleTurretFire(CgEventSystemSP *this, centity_t *cent, const unsigned int eventId, const unsigned int eventParam, const bool isPlayerView, bool bNoTracer)
{
  __int64 m_localClientNum; 
  CgCompassSystem **v11; 
  CgCompassSystemSP *v12; 
  centity_t *Entity; 
  centity_t *v14; 
  __int64 v15; 
  __int64 v16; 
  vec3_t outOrigin; 

  CgEventSystem::HandleTurretFire(this, cent, eventId, eventParam, isPlayerView, bNoTracer);
  m_localClientNum = this->m_localClientNum;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", this->m_localClientNum, 1, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v16) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v15) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v11 = &CgCompassSystem::ms_compassSystemArray[m_localClientNum];
  if ( !*v11 )
  {
    LODWORD(v16) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v16) )
      __debugbreak();
  }
  v12 = (CgCompassSystemSP *)*v11;
  if ( eventId != 90 )
  {
    if ( (((eventId - 87) & 0xFFFFFFF9) != 0 || eventId == 93) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 56, ASSERT_TYPE_ASSERT, "(eventId == EV_FIRE_SENTRY || eventId == EV_FIRE_VEH_TURRET || eventId == EV_SV_FIRE_TURRET)", (const char *)&queryFormat, "eventId == EV_FIRE_SENTRY || eventId == EV_FIRE_VEH_TURRET || eventId == EV_SV_FIRE_TURRET") )
      __debugbreak();
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    CgCompassSystemSP::AddTurretPingInfo(v12, cent, &outOrigin, 50);
    goto LABEL_19;
  }
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, eventParam);
  v14 = Entity;
  if ( (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_ACTOR )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    v12->AddWeaponPingInfo(v12, v14, &outOrigin, 50);
LABEL_19:
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
CgEventSystemSP::IsTimedEventExpired
==============
*/
__int64 CgEventSystemSP::IsTimedEventExpired(CgEventSystemSP *this, const entityState_t *entityState)
{
  return 0i64;
}

