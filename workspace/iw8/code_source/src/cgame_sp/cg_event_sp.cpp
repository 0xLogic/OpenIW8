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
  entityType_s v6; 
  const char *EntityTypeName; 
  __int64 v16; 

  if ( !eventEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 74, ASSERT_TYPE_ASSERT, "(eventEntity)", (const char *)&queryFormat, "eventEntity") )
    __debugbreak();
  eType = eventEntity->nextState.eType;
  if ( eType <= ET_EVENTS )
  {
    LODWORD(v16) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 75, ASSERT_TYPE_ASSERT, "( ( eventEntity->nextState.eType > ET_EVENTS ) )", "( eventEntity->nextState.eType ) = %i", v16) )
      __debugbreak();
  }
  if ( eventEntity->nextState.eventSequence.combined && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 76, ASSERT_TYPE_ASSERT, "(!eventEntity->nextState.eventSequence.combined)", (const char *)&queryFormat, "!eventEntity->nextState.eventSequence.combined") )
    __debugbreak();
  if ( !eventEntity->previousEventSequence.combined )
  {
    v6 = eventEntity->nextState.eType;
    eventEntity->previousEventSequence.combined = 1;
    EntityTypeName = BG_GetEntityTypeName(v6);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, EntityTypeName);
    _RSI = eventEntity->nextState.eType;
    __rdtsc();
    if ( (unsigned int)(_RSI - 29) >= 0xE3 )
    {
      LODWORD(v16) = _RSI - 29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( eventId ) < (unsigned)( EV_MAX_EVENTS )", "eventId doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", v16, 227) )
        __debugbreak();
    }
    CG_EntitySP_CalcLerpPositions(this->m_localClientNum, eventEntity);
    *(double *)&_XMM0 = ((double (__fastcall *)(CgEventSystemSP *, centity_t *, _QWORD, _QWORD, _QWORD))this->HandleEntityEvent)(this, eventEntity, (unsigned int)(_RSI - 29), 0i64, 0i64);
    __rdtsc();
    _RCX = 0x140000000ui64;
    ++*((_DWORD *)&g_perfEventTime[213] + _RSI + 1);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
      vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vaddsd  xmm0, xmm1, rva qword_150F3B918[rcx+rsi*8]
      vmovsd  rva qword_150F3B918[rcx+rsi*8], xmm0
      vmovsd  xmm0, qword ptr (rva ?g_perfEventNum@@3PAHA+2A8h)[rcx+rsi*8]; int near * g_perfEventNum
      vmaxsd  xmm1, xmm0, xmm1
      vmovsd  qword ptr (rva ?g_perfEventNum@@3PAHA+2A8h)[rcx+rsi*8], xmm1; int near * g_perfEventNum
    }
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
  const dvar_t *v12; 
  const dvar_t *v13; 
  int number; 
  stance_event_params_t eventParm; 
  bitarray<64> m_localClientNum; 
  const characterInfo_t *CharacterInfo; 
  int v20; 
  const playerState_s *p_predictedPlayerState; 
  char v22; 
  bool v23; 
  StanceState v24; 
  const Weapon *CurrentWeaponForPlayer; 
  int v30; 
  PlayerHandIndex hand; 
  const DObj *ClientDObj; 
  const char *BoneName; 
  scr_string_t v35; 
  const Weapon *EntWeapon; 
  CgSoundSystem *v44; 
  unsigned __int16 weaponIdx; 
  const SndAliasList *v46; 
  const Weapon *v47; 
  bool v48; 
  CgWeaponSystemSP *WeaponSystemSP; 
  float v51; 
  bool v58; 
  TagPair *v59; 
  TagPair v60; 
  int v61; 
  int v62; 
  unsigned int otherEntityNum; 
  scr_string_t partName; 
  LocalClientNum_t v65; 
  centity_t *Entity; 
  const DObj *v67; 
  centity_t *v68; 
  const cpose_t *p_pose; 
  unsigned int eventParm2; 
  int v86; 
  cg_t *LocalClientGlobals; 
  playerState_s *v88; 
  Weapon *v89; 
  centity_t *v90; 
  CgWeaponSystem *v91; 
  bool v92; 
  TagPair *v93; 
  TagPair v94; 
  int v95; 
  TagPair v96; 
  meansOfDeath_t MethodOfDeath; 
  const Weapon *v98; 
  const Weapon *v99; 
  LocalClientNum_t groundEntityNum; 
  const DObj *v101; 
  CgWeaponSystemSP *v102; 
  Weapon *v103; 
  int v104; 
  bool v112; 
  TagPair *v113; 
  TagPair v114; 
  int v115; 
  CgSoundSystem *v116; 
  CgSoundSystem *v118; 
  CgSoundSystem *SoundSystem; 
  CgSoundSystem *v121; 
  int v122; 
  bool v126; 
  CgClientSideEffectsSystemSP *ClientSideEffectsSystemSP; 
  CgClientSideEffectsSystemSP *v139; 
  CgClientSideEffectsSystemSP *v140; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  int fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  Weapon *weapon; 
  Weapon *weapona; 
  Weapon *weaponb; 
  float weaponc; 
  __int64 v153; 
  PlayerHandIndex v154; 
  float tracerEnd; 
  bool bNoTracer; 
  int v157; 
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
  __int64 v168; 
  Weapon v169; 
  TagPair EventWeapon; 
  vec3_t weaponMap; 
  vec3_t out; 
  bitarray<64> outPerks; 
  Weapon r_weapon; 

  v168 = -2i64;
  __asm { vmovaps [rsp+210h+var_50], xmm6 }
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
    _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    weaponFlashTagPair = (TagPair)&_RBX->predictedPlayerState;
    _R14 = &cent->nextState;
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
    characterIndex = _R14->number;
    if ( _RBX->HasCharacterInfo(_RBX, characterIndex) )
    {
      if ( _RBX->IsMP(_RBX) )
      {
        v20 = characterIndex;
        if ( characterIndex >= _RBX[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v153) = _RBX[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(weapon) = characterIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", weapon, v153) )
            __debugbreak();
          v20 = characterIndex;
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&_RBX[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v20);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)_RBX, characterIndex);
      }
    }
    else
    {
      CharacterInfo = NULL;
    }
    p_predictedPlayerState = NULL;
    if ( _RBX->predictedPlayerState.clientNum == _R14->number )
      p_predictedPlayerState = &_RBX->predictedPlayerState;
    inOutIndex[0] = BG_PlayerOrEntityDualWielding(*(const BgWeaponMap **)weaponMap.v, p_predictedPlayerState, &cent->nextState, CharacterInfo);
    switch ( eventId )
    {
      case 9:
        SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
        v121 = SoundSystem;
        if ( eventParm )
        {
          v122 = truncate_cast<int,unsigned int>(eventParm);
          CgSoundSystem::StopSoundChannelOnEnt(v121, _R14->number, v122 - 1);
        }
        else
        {
          CgSoundSystem::StopSoundsOnEnt(SoundSystem, _R14->number);
        }
        break;
      case 11:
        if ( CgEventSystem::CheckClientNumLocal(this, number, eventId) )
        {
          v24 = CL_STANCE_CROUCH;
          goto LABEL_35;
        }
        break;
      case 12:
        if ( CgEventSystem::CheckClientNumLocal(this, number, eventId) )
        {
          v24 = CL_STANCE_PRONE;
LABEL_35:
          CL_SetStance(this->m_localClientNum, v24, eventParm);
          if ( isPlayerView && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.pm_flags, ACTIVE, 5u) )
          {
            CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(*(const BgWeaponMap **)weaponMap.v, &_RBX->predictedPlayerState);
            cg_t::SetInvalidStanceHint(_RBX, eventParm, CurrentWeaponForPlayer);
          }
        }
        break;
      case 35:
      case 226:
        break;
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
        _RDI = CG_GetEntWeapon(this->m_localClientNum, cent);
        outPerks = (bitarray<64>)CgMissile::GetSystem((const LocalClientNum_t)this->m_localClientNum);
        if ( !*(_QWORD *)&outPerks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 260, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
          __debugbreak();
        if ( eventParm )
        {
          eventFlagsa = BG_GetWeaponFireEventBoneIndex(eventParm);
          ClientDObj = Com_GetClientDObj(_R14->number, this->m_localClientNum);
          if ( ClientDObj )
          {
            BoneName = DObjGetBoneName(ClientDObj, eventFlagsa);
            if ( BoneName )
            {
              v35 = SL_ConvertFromString(BoneName);
              TagPair::TagPair(&weaponFlashTagPair, v35, (scr_string_t)0);
              _RAX = BG_GetWeaponFireWeaponID(&v169, eventParm);
              __asm
              {
                vmovups ymm2, ymmword ptr [rax]
                vmovups ymmword ptr [rbp+0E0h+r_weapon.weaponIdx], ymm2
                vmovups xmm0, xmmword ptr [rax+20h]
                vmovups xmmword ptr [rbp+0E0h+r_weapon.attachmentVariationIndices+5], xmm0
                vmovsd  xmm1, qword ptr [rax+30h]
                vmovsd  qword ptr [rbp+0E0h+r_weapon.attachmentVariationIndices+15h], xmm1
              }
              *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
              __asm { vmovd   eax, xmm2 }
              if ( (_WORD)_RAX == _RDI->weaponIdx )
              {
                __asm
                {
                  vmovups ymm0, ymmword ptr [rdi]
                  vmovups ymmword ptr [rbp+0E0h+r_weapon.weaponIdx], ymm0
                  vmovups xmm1, xmmword ptr [rdi+20h]
                  vmovups xmmword ptr [rbp+0E0h+r_weapon.attachmentVariationIndices+5], xmm1
                  vmovsd  xmm0, qword ptr [rdi+30h]
                  vmovsd  qword ptr [rbp+0E0h+r_weapon.attachmentVariationIndices+15h], xmm0
                }
                *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
              }
              CG_FireWeapon(this->m_localClientNum, cent, eventId, -1, weaponFlashTagPair, &r_weapon, isAlternate, hand, isPlayerView, inOutIndex[0], 0);
              CgMissile::OnWeaponFire(*(CgMissile **)&outPerks, cent, eventId, weaponFlashTagPair, &r_weapon, isAlternate, hand, isPlayerView);
            }
          }
        }
        else
        {
          CG_FireWeapon(this->m_localClientNum, cent, eventId, -1, result, _RDI, 0, hand, isPlayerView, inOutIndex[0], 0);
          CgMissile::OnWeaponFire(*(CgMissile **)&outPerks, cent, eventId, result, _RDI, 0, hand, isPlayerView);
        }
        break;
      case 53:
        EntWeapon = CG_GetEntWeapon(this->m_localClientNum, cent);
        v44 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
        weaponIdx = EntWeapon->weaponIdx;
        if ( !EntWeapon->weaponIdx || weaponIdx >= BG_GetNumWeapons() )
        {
          LODWORD(weapon) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 306, ASSERT_TYPE_ASSERT, "( ( weapon.weaponIdx != 0 && weapon.weaponIdx < BG_GetNumWeapons() ) )", "( weapon.weaponIdx ) = %i", weapon) )
            __debugbreak();
        }
        v46 = BG_EmptyFireSound(EntWeapon, isAlternate, isPlayerView);
        if ( v46 )
          CgSoundSystem::PlayEntitySoundAlias(v44, _R14->number, v46);
        break;
      case 86:
        if ( CgEventSystem::CheckClientNumLocal(this, number, eventId) )
        {
          CG_OnEndTurretFire((const LocalClientNum_t)this->m_localClientNum);
          v30 = truncate_cast<int,unsigned int>(eventParm);
          CG_SndKillAutoSimEntNum(v30, 0);
        }
        break;
      case 87:
        if ( CgEventSystem::CheckClientNumLocal(this, number, eventId) )
          CG_AddTurretFire();
        break;
      case 92:
        *(_QWORD *)weaponMap.v = 0i64;
        v47 = (const Weapon *)EventWeapon;
        if ( !*(_WORD *)EventWeapon.m_primaryTagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 348, ASSERT_TYPE_ASSERT, "(eventWeapon.weaponIdx != 0)", (const char *)&queryFormat, "eventWeapon.weaponIdx != WP_NONE") )
          __debugbreak();
        Tracer_AdvanceDrawCounter((const LocalClientNum_t)this->m_localClientNum, (const bitarray<64> *)&weaponMap, WEAPON_HAND_DEFAULT, v47, isAlternate, _R14->number);
        v48 = Tracer_ShouldDraw((const LocalClientNum_t)this->m_localClientNum, (const bitarray<64> *)&weaponMap, WEAPON_HAND_DEFAULT, v47, isAlternate, _R14->number) == 1;
        if ( eventParm || v48 )
        {
          WeaponSystemSP = CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)this->m_localClientNum);
          _RDI = &_R14->lerp.pos;
          if ( _R14 == (entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)_R14 + 123, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
            __debugbreak();
          if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
          {
            EventWeapon = (TagPair)&tracerStart;
            v51 = _R14->lerp.pos.trBase.v[1];
            LODWORD(tracerStart.v[2]) = s_trbase_aab_Z ^ LODWORD(v51) ^ LODWORD(_R14->lerp.pos.trBase.v[2]);
            LODWORD(tracerStart.v[1]) = s_trbase_aab_Y ^ LODWORD(_R14->lerp.pos.trBase.v[0]) ^ LODWORD(v51);
            LODWORD(tracerStart.v[0]) = LODWORD(_R14->lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
            memset(&EventWeapon, 0, sizeof(EventWeapon));
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+0E0h+tracerStart]
              vmovss  [rbp+0E0h+eventFlags], xmm0
            }
            if ( (eventFlagsa & 0x7F800000) == 2139095040 )
              goto LABEL_156;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+0E0h+tracerStart+4]
              vmovss  [rbp+0E0h+eventFlags], xmm0
            }
            if ( (eventFlagsa & 0x7F800000) == 2139095040 )
              goto LABEL_156;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+0E0h+tracerStart+8]
              vmovss  [rbp+0E0h+eventFlags], xmm0
            }
            if ( (eventFlagsa & 0x7F800000) == 2139095040 )
            {
LABEL_156:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                __debugbreak();
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+0Ch]
              vmovss  dword ptr [rbp+0E0h+tracerStart], xmm0
              vmovss  xmm1, dword ptr [rdi+10h]
              vmovss  dword ptr [rbp+0E0h+tracerStart+4], xmm1
              vmovss  xmm0, dword ptr [rdi+14h]
              vmovss  dword ptr [rbp+0E0h+tracerStart+8], xmm0
            }
          }
          v58 = isAlternate;
          TagPair::TagPair(&EventWeapon);
          v60 = *v59;
          v61 = _R14->number;
          v62 = CgWeaponSystem::ClaimBulletId(WeaponSystemSP);
          CgWeaponSystem::SpawnTracer(WeaponSystemSP, v62, 0, v61, (const bitarray<64> *)&weaponMap, WEAPON_HAND_DEFAULT, v60, &tracerStart, (const vec3_t *)&_R14->lerp.u, v47, v58, 0);
          memset(&tracerStart, 0, sizeof(tracerStart));
        }
        break;
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
          v65 = this->m_localClientNum;
          inOutIndex[0] = -2;
          Entity = CG_GetEntity(v65, characterIndex);
          if ( Entity )
          {
            v67 = Com_GetClientDObj(Entity->nextState.number, v65);
            if ( v67 )
            {
              if ( partName )
                DObjGetBoneIndexInternal_80(v67, partName, inOutIndex, (int *)&weaponMap);
            }
          }
          CG_GetPerks(this->m_localClientNum, otherEntityNum, &outPerks);
          if ( (*(_BYTE *)(&cent->nextState.lerp.u.infoVolumeGrapple + 2) & 1) != 0 )
          {
            v68 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, characterIndex);
            p_pose = &v68->pose;
            if ( (v68->flags & 1) != 0 )
            {
              AnglesToAxis(&v68->pose.angles, (tmat33_t<vec3_t> *)&r_weapon);
              CG_GetPoseOrigin(&cent->pose, &outOrigin);
              MatrixTransformVector(&outOrigin, (const tmat33_t<vec3_t> *)&r_weapon, &tracerStart);
              CG_GetPoseOrigin(p_pose, &weaponMap);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+0E0h+tracerStart]
                vaddss  xmm1, xmm0, dword ptr [rbp+0E0h+weaponMap]
                vmovss  dword ptr [rbp+0E0h+tracerStart], xmm1
                vmovss  xmm2, dword ptr [rbp+0E0h+tracerStart+4]
                vaddss  xmm0, xmm2, dword ptr [rbp+0E0h+weaponMap+4]
                vmovss  dword ptr [rbp+0E0h+tracerStart+4], xmm0
                vmovss  xmm1, dword ptr [rbp+0E0h+tracerStart+8]
                vaddss  xmm2, xmm1, [rbp+0E0h+var_B8]
                vmovss  dword ptr [rbp+0E0h+tracerStart+8], xmm2
              }
              MatrixTransformVector(&cent->nextState.lerp.apos.trBase, (const tmat33_t<vec3_t> *)&r_weapon, &out);
              memset(&weaponMap, 0, sizeof(weaponMap));
              memset(&outOrigin, 0, sizeof(outOrigin));
            }
            else
            {
              __asm
              {
                vmovss  xmm0, dword ptr [r14+28h]
                vmovss  dword ptr [rbp+0E0h+tracerStart], xmm0
                vmovss  xmm1, dword ptr [r14+2Ch]
                vmovss  dword ptr [rbp+0E0h+tracerStart+4], xmm1
                vmovss  xmm0, dword ptr [r14+30h]
                vmovss  dword ptr [rbp+0E0h+tracerStart+8], xmm0
                vmovss  xmm1, dword ptr [r14+4Ch]
                vmovss  dword ptr [rbp+0E0h+out], xmm1
                vmovss  xmm0, dword ptr [r14+50h]
                vmovss  dword ptr [rbp+0E0h+out+4], xmm0
                vmovss  xmm1, dword ptr [r14+54h]
                vmovss  dword ptr [rbp+0E0h+out+8], xmm1
              }
            }
          }
          else
          {
            CG_GetPoseOrigin(&cent->pose, &tracerStart);
            __asm
            {
              vmovss  xmm0, dword ptr [r14+40h]
              vmovss  dword ptr [rbp+0E0h+out], xmm0
              vmovss  xmm1, dword ptr [r14+44h]
              vmovss  dword ptr [rbp+0E0h+out+4], xmm1
              vmovss  xmm0, dword ptr [r14+48h]
              vmovss  dword ptr [rbp+0E0h+out+8], xmm0
            }
          }
          CG_SND_VerifyTracerAndWhizbySpeeds(outPerks, WeaponForEntity, isAlternate);
          if ( otherEntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 424, ASSERT_TYPE_ASSERT, "(inflictorEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "inflictorEntNum != ENTITYNUM_NONE") )
            __debugbreak();
          eventParm2 = cent->nextState.eventParm2;
          v86 = cent->nextState.lerp.u.anonymous.data[6];
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
          v88 = &LocalClientGlobals->predictedPlayerState;
          if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( (eventParm2 & 4) != 0 || v88->clientNum != otherEntityNum )
            v86 = -1;
          v157 = v86;
          LOBYTE(v153) = isAlternate;
          v89 = WeaponForEntity;
          LOBYTE(fmt) = inOutIndex[0];
          (*(void (__fastcall **)(TagPair, _QWORD, _QWORD, __int64, int, Weapon *, _DWORD, LerpEntityStateTypeUnion *, LerpEntityStateTypeUnion *, vec3_t *, vec3_t *, _DWORD, const int, unsigned int, _DWORD, _DWORD, int, _BYTE, int, _DWORD, _DWORD, _QWORD))(**(_QWORD **)&EventWeapon + 160i64))(EventWeapon, otherEntityNum, (unsigned int)characterIndex, 0xFFFFFFFFi64, fmt, WeaponForEntity, v153, &cent->nextState.lerp.u, &cent->nextState.lerp.u, &tracerStart, &out, cent->nextState.surfType, eventId, cent->nextState.eventParm2, 0, cent->nextState.lerp.u.event.bulletHitSP.flags, cent->nextState.lerp.u.anonymous.data[7], 0, v157, 0, 0, 0i64);
          v90 = cent;
          v91 = (CgWeaponSystem *)EventWeapon;
          if ( CgWeaponSystem::ShouldSpawnTracerFromEvent(*(CgWeaponSystem **)&EventWeapon, eventId, v90, otherEntityNum, &outPerks, v89, isAlternate) )
          {
            v92 = isAlternate;
            TagPair::TagPair(&EventWeapon);
            v94 = *v93;
            v95 = CgWeaponSystem::ClaimBulletId(v91);
            bNoTracer = v92;
            otherEntityNum = eventFlagsa;
            CgWeaponSystem::SpawnTracer(v91, v95, 0, eventFlagsa, &outPerks, WEAPON_HAND_DEFAULT, v94, (const vec3_t *)&_R14->lerp.u, &tracerStart, v89, bNoTracer, 0);
          }
          v96 = weaponFlashTagPair;
          if ( (GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(*(_QWORD *)&weaponFlashTagPair + 28i64), ACTIVE, 0x22u) && (!Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(*(_QWORD *)&v96 + 28i64), GameModeFlagValues::ms_mpValue, 0x29u)) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(*(_QWORD *)&v96 + 28i64), GameModeFlagValues::ms_mpValue, 0x21u) || otherEntityNum != *(_DWORD *)(*(_QWORD *)&v96 + 460i64)) && (_R14->eventParm2 & 4) == 0 && (unsigned int)(eventId - 93) <= 1 )
          {
            MethodOfDeath = BG_WeaponBulletFire_GetMethodOfDeath(outPerks, v89, isAlternate);
            CgWeaponSystem::BulletScriptableImpact(v91, otherEntityNum, characterIndex, v89, isAlternate, MethodOfDeath, (const vec3_t *)&_R14->lerp.u, &tracerStart, (const scr_string_t)_R14->lerp.u.event.bulletHitSP.partName);
          }
          memset(&tracerStart, 0, sizeof(tracerStart));
        }
        break;
      case 96:
      case 97:
        v102 = CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)this->m_localClientNum);
        v103 = (Weapon *)BG_GetWeaponForEntity(*(const BgWeaponMap **)weaponMap.v, &cent->nextState);
        WeaponForEntity = v103;
        v104 = cent->nextState.otherEntityNum;
        eventFlagsa = v104;
        __asm { vmovss  xmm0, dword ptr [r14+64h] }
        _RAX = weaponFlashTagPair;
        __asm
        {
          vaddss  xmm1, xmm0, dword ptr [rax+30h]
          vmovss  dword ptr [rbp+0E0h+out], xmm1
          vmovss  xmm2, dword ptr [rax+34h]
          vaddss  xmm0, xmm2, dword ptr [r14+68h]
          vmovss  dword ptr [rbp+0E0h+out+4], xmm0
          vmovss  xmm1, dword ptr [rax+38h]
          vaddss  xmm2, xmm1, dword ptr [r14+6Ch]
          vmovss  dword ptr [rbp+0E0h+out+8], xmm2
        }
        CG_BulletHitClientEvent(this->m_localClientNum, v104, v103, isAlternate, (const vec3_t *)&cent->nextState.lerp.u, &out, cent->nextState.surfType, eventId, cent->nextState.eventParm2, SND_HIT_ARMOR_TYPE_NONE);
        CG_GetPerks(this->m_localClientNum, v104, (bitarray<64> *)&EventWeapon);
        if ( CgWeaponSystem::ShouldSpawnTracerFromEvent(v102, eventId, cent, v104, (const bitarray<64> *)&EventWeapon, v103, isAlternate) )
        {
          CG_GetPoseOrigin(&cent->pose, &outOrigin);
          v112 = isAlternate;
          TagPair::TagPair(&weaponFlashTagPair);
          v114 = *v113;
          v115 = CgWeaponSystem::ClaimBulletId(v102);
          CgWeaponSystem::SpawnTracer(v102, v115, 0, eventFlagsa, (const bitarray<64> *)&EventWeapon, WEAPON_HAND_DEFAULT, v114, (const vec3_t *)&cent->nextState.lerp.u, &outOrigin, WeaponForEntity, v112, 0);
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
        break;
      case 98:
        if ( cent->nextState.groundEntityNum != _RBX->predictedPlayerState.clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 454, ASSERT_TYPE_ASSERT, "(es->groundEntityNum == cgameGlob->predictedPlayerState.clientNum)", (const char *)&queryFormat, "es->groundEntityNum == cgameGlob->predictedPlayerState.clientNum") )
          __debugbreak();
        v98 = BG_GetWeaponForEntity(*(const BgWeaponMap **)weaponMap.v, &cent->nextState);
        CG_BulletHitClientShieldEvent((LocalClientNum_t)cent->nextState.groundEntityNum, cent->nextState.otherEntityNum, v98, isAlternate, cent->nextState.surfType, eventId, eventParm);
        break;
      case 99:
        v99 = BG_GetWeaponForEntity(*(const BgWeaponMap **)weaponMap.v, &cent->nextState);
        FX_ClearViewmodelMarks(this->m_localClientNum);
        groundEntityNum = cent->nextState.groundEntityNum;
        BG_GetWeaponFlashTagname(&EventWeapon, v99, isAlternate, 0);
        inOutIndex[0] = -2;
        characterIndex = 0;
        v101 = Com_GetClientDObj(2048, groundEntityNum);
        TagPair::GetTagNameAndBoneIndex(&EventWeapon, v101, (scr_string_t *)&characterIndex, inOutIndex);
        CG_PlayBoltedEffect(this->m_localClientNum, &cgMedia.fxRiotShieldDestroyed, 2048, (scr_string_t)characterIndex);
        break;
      case 132:
        __asm
        {
          vmovss  xmm0, dword ptr [r14+58h]; jumptable 0000000141F3C25F case 132
          vxorps  xmm6, xmm6, xmm6
          vcomiss xmm0, xmm6
        }
        if ( v22 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+210h+weapon], xmm0
          }
          v126 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 547, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.range >= 0.0f ) )", "( es->lerp.u.event.radiusDamage.range ) = %g", *(double *)&weapona);
          v22 = 0;
          v23 = !v126;
          if ( v126 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [r14+68h]
          vcomiss xmm0, xmm6
        }
        if ( v22 )
          goto LABEL_157;
        __asm { vcomiss xmm0, cs:__real@40000000 }
        if ( !(v22 | v23) )
        {
LABEL_157:
          __asm
          {
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+210h+weapon], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_event_sp.cpp", 548, ASSERT_TYPE_ASSERT, "( ( es->lerp.u.event.radiusDamage.forceScalar >= 0.0f && es->lerp.u.event.radiusDamage.forceScalar <= PHYSICS_MAX_RADIUSFORCE_SCALAR ) )", "( es->lerp.u.event.radiusDamage.forceScalar ) = %g", *(double *)&weaponb) )
            __debugbreak();
        }
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
        __asm
        {
          vmovss  xmm0, dword ptr [r14+58h]
          vmovss  [rsp+210h+var_1E0], xmm0
        }
        ScriptableCl_ExplosionDamageEvent((const LocalClientNum_t)this->m_localClientNum, 0x7FEu, 0x7FEu, &NULL_WEAPON, isAlternate, &out, *(const float *)&v154, cent->nextState.lerp.u.anonymous.data[3], cent->nextState.lerp.u.anonymous.data[2], cent->nextState.lerp.u.anonymous.data[5] & 1);
        __asm
        {
          vmovss  xmm0, dword ptr [r14+68h]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [r14+60h]
          vxorps  xmm3, xmm3, xmm3
          vcvtsi2ss xmm3, xmm3, dword ptr [r14+64h]; innerDamage
          vmovss  dword ptr [rsp+210h+tracerEnd], xmm0
          vmovss  dword ptr [rsp+210h+weapon], xmm6
          vmovss  dword ptr [rsp+210h+fmt], xmm1
          vmovss  xmm2, dword ptr [r14+58h]; radius
        }
        Physics_ApplyRadiusForce((const Physics_WorldId)(3 * this->m_localClientNum + 3), &out, *(const float *)&_XMM2, *(const float *)&_XMM3, fmtc, weaponc, &vec3_origin, _RBX->time, tracerEnd);
        if ( cent->nextState.eventParm2 == 16 )
        {
          ClientSideEffectsSystemSP = CgClientSideEffectsSystemSP::GetClientSideEffectsSystemSP((const LocalClientNum_t)this->m_localClientNum);
          __asm
          {
            vmovss  xmm3, dword ptr [r14+5Ch]; timeDelay
            vmovss  xmm2, dword ptr [r14+58h]; eventRadius
          }
          CgClientSideEffectsSystem::ReactiveEnts_Fire(ClientSideEffectsSystemSP, &out, *(const float *)&_XMM2, *(const float *)&_XMM3, Explosion);
        }
        memset(&out, 0, sizeof(out));
        break;
      case 148:
      case 149:
      case 150:
      case 151:
      case 152:
      case 153:
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        CgEventSystem::HandleRumbleEvents(this, eventId, eventParm, number, &outOrigin);
        memset(&outOrigin, 0, sizeof(outOrigin));
        break;
      case 159:
        if ( !CgEventSystem::CheckClientNumLocal(this, number, eventId) || !isPlayerView )
          break;
        if ( eventParm )
        {
          if ( _RBX->invalidCmdHintType == INVALID_CMD_NO_GRENADE )
            goto LABEL_48;
          _RBX->invalidCmdHintType = INVALID_CMD_NO_GRENADE;
        }
        else
        {
          if ( _RBX->invalidCmdHintType == INVALID_CMD_NO_AMMO_SECONDARY_GRENADE )
            goto LABEL_48;
          _RBX->invalidCmdHintType = INVALID_CMD_NO_AMMO_SECONDARY_GRENADE;
        }
        _RBX->invalidCmdHintTime = _RBX->time;
LABEL_48:
        _RAX = BG_GetFirstEquippedOffhandBySlot(*(const BgWeaponMap **)weaponMap.v, &_RBX->predictedPlayerState, OFFHAND_SLOT_SECONDARY);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbx+180BCh], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbx+180DCh], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rbx+180ECh], xmm0
        }
        *(_DWORD *)&_RBX->invalidCmdHintWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        break;
      case 195:
        v139 = CgClientSideEffectsSystemSP::GetClientSideEffectsSystemSP((const LocalClientNum_t)this->m_localClientNum);
        CgClientSideEffectsSystem::Exploder_ActivateGroup(v139, eventParm, cent->nextState.time2);
        break;
      case 196:
      case 197:
        v140 = CgClientSideEffectsSystemSP::GetClientSideEffectsSystemSP((const LocalClientNum_t)this->m_localClientNum);
        CgClientSideEffectsSystem::Exploder_DeactivateGroup(v140, eventParm, eventId == 197);
        break;
      case 201:
        if ( eventParm )
        {
          v116 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
          __asm
          {
            vmovss  xmm0, cs:__real@40800000
            vmovss  dword ptr [rsp+210h+fmt], xmm0
          }
          CgSoundSystem::ChangeSoundParameterOnEnt(v116, _R14->number, eventParm, SND_ScalePitchOnEnt, fmta);
        }
        break;
      case 202:
        v118 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
        __asm
        {
          vmovss  xmm0, cs:__real@40800000
          vmovss  dword ptr [rsp+210h+fmt], xmm0
        }
        CgSoundSystem::ChangeSoundParameterOnEnt(v118, _R14->number, eventParm, SND_ScaleVolumeOnEnt, fmtb);
        break;
      case 218:
        ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
        ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
        ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "cg.HUD.hints.interactiveObject.interactionComplete");
        LUI_Model_SetBool(ModelFromPath, 1);
        break;
      default:
        CgEventSystem::HandleEntityEventCommon(this, cent, number, eventId, eventFlagsa, eventParm, *(const Weapon **)&EventWeapon, isAlternate, isPlayerView, (const CgEventLodData *)WeaponForEntity);
        break;
    }
  }
  else
  {
    v12 = DVARINT_cg_debugevents;
    if ( !DVARINT_cg_debugevents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugevents") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer == 227 )
      goto LABEL_16;
    v13 = DVARINT_cg_debugevents;
    if ( !DVARINT_cg_debugevents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugevents") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( !v13->current.integer )
LABEL_16:
      Com_Printf(21, "CG_EntityEvent:ZERO EVENT\n");
  }
  __asm { vmovaps xmm6, [rsp+210h+var_50] }
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

