/*
==============
CgSoundSystem::UpdateBreathingSounds
==============
*/

void __fastcall CgSoundSystem::UpdateBreathingSounds(CgSoundSystem *this)
{
  ?UpdateBreathingSounds@CgSoundSystem@@QEAAXXZ(this);
}

/*
==============
CgSoundSystem::PlaySoundAliasAtViewHeight
==============
*/

unsigned int __fastcall CgSoundSystem::PlaySoundAliasAtViewHeight(CgSoundSystem *this, const int entityNum, const vec3_t *origin, int soundString)
{
  return ?PlaySoundAliasAtViewHeight@CgSoundSystem@@QEAAIHAEBTvec3_t@@H@Z(this, entityNum, origin, soundString);
}

/*
==============
CgSoundSystem::PlayWhizbyAndImpactSfx_Internal
==============
*/

void __fastcall CgSoundSystem::PlayWhizbyAndImpactSfx_Internal(CgSoundSystem *this, const CgSfxImpactInfo *inSfxInfo, bool playWhizby, int whizbyEnt, const vec3_t *initialPos, const vec3_t *start, const vec3_t *end, int surfType, const Weapon *inWeapon, bool isAlternate, const int hitImpactDelayOverride, SndHitmarkerType hitmarkerType)
{
  ?PlayWhizbyAndImpactSfx_Internal@CgSoundSystem@@IEAAXAEBUCgSfxImpactInfo@@_NHAEBTvec3_t@@22HAEBUWeapon@@1HW4SndHitmarkerType@@@Z(this, inSfxInfo, playWhizby, whizbyEnt, initialPos, start, end, surfType, inWeapon, isAlternate, hitImpactDelayOverride, hitmarkerType);
}

/*
==============
CgSoundSystem::PlaySoundAlias
==============
*/

unsigned int __fastcall CgSoundSystem::PlaySoundAlias(CgSoundSystem *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList)
{
  return ?PlaySoundAlias@CgSoundSystem@@QEAAIHAEBTvec3_t@@PEBUSndAliasList@@@Z(this, entitynum, origin, aliasList);
}

/*
==============
CgSoundSystem::PlaySoundAliasAsync
==============
*/

void __fastcall CgSoundSystem::PlaySoundAliasAsync(CgSoundSystem *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList)
{
  ?PlaySoundAliasAsync@CgSoundSystem@@QEAAXHAEBTvec3_t@@PEBUSndAliasList@@@Z(this, entitynum, origin, aliasList);
}

/*
==============
CgSoundSystem::ChangeSoundParameterOnEnt
==============
*/

void __fastcall CgSoundSystem::ChangeSoundParameterOnEnt(CgSoundSystem *this, const int entitynum, const unsigned int paramBitField, void (__fastcall *changeParameterFunction)(unsigned __int64, float, int), float maxvalue)
{
  ?ChangeSoundParameterOnEnt@CgSoundSystem@@QEAAXHIP6AX_KMH@ZM@Z(this, entitynum, paramBitField, changeParameterFunction, maxvalue);
}

/*
==============
CG_PlayContinuousFireSounds
==============
*/

void __fastcall CG_PlayContinuousFireSounds(const LocalClientNum_t localClientNum, const playerState_s *ps, centity_t *cent)
{
  ?CG_PlayContinuousFireSounds@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEAUcentity_t@@@Z(localClientNum, ps, cent);
}

/*
==============
CgSoundSystem::StopSoundChannelOnEnt
==============
*/

void __fastcall CgSoundSystem::StopSoundChannelOnEnt(CgSoundSystem *this, const int entitynum, const int entSndChannel)
{
  ?StopSoundChannelOnEnt@CgSoundSystem@@QEAAXHH@Z(this, entitynum, entSndChannel);
}

/*
==============
CG_Sound_RegisterMedia
==============
*/

void CG_Sound_RegisterMedia(void)
{
  ?CG_Sound_RegisterMedia@@YAXXZ();
}

/*
==============
CgSoundSystem::PlayClientSoundAliasByName2
==============
*/

unsigned int __fastcall CgSoundSystem::PlayClientSoundAliasByName2(CgSoundSystem *this, const char *aliasname)
{
  return ?PlayClientSoundAliasByName2@CgSoundSystem@@QEAAIPEBD@Z(this, aliasname);
}

/*
==============
CgSoundSystem::PlayEntitySoundAliasFootstep
==============
*/

unsigned int __fastcall CgSoundSystem::PlayEntitySoundAliasFootstep(CgSoundSystem *this, const centity_t *cent, const SndAliasList *aliasList, const SndAliasList *ceilingAlist, int surfaceType, const int moveType, int isPlayerView, int isQuietMove, bool isLadder)
{
  return ?PlayEntitySoundAliasFootstep@CgSoundSystem@@QEAAIPEBUcentity_t@@PEBUSndAliasList@@1HHHH_N@Z(this, cent, aliasList, ceilingAlist, surfaceType, moveType, isPlayerView, isQuietMove, isLadder);
}

/*
==============
CgSoundSystem::PlayClientSoundAlias
==============
*/

unsigned int __fastcall CgSoundSystem::PlayClientSoundAlias(CgSoundSystem *this, const SndAliasList *aliasList)
{
  return ?PlayClientSoundAlias@CgSoundSystem@@QEAAIPEBUSndAliasList@@@Z(this, aliasList);
}

/*
==============
CgSoundSystem::PlaySoundAliasByLookup
==============
*/

unsigned int __fastcall CgSoundSystem::PlaySoundAliasByLookup(CgSoundSystem *this, const int entitynum, const vec3_t *origin, SndAliasLookup lookup)
{
  return ?PlaySoundAliasByLookup@CgSoundSystem@@QEAAIHAEBTvec3_t@@USndAliasLookup@@@Z(this, entitynum, origin, lookup);
}

/*
==============
CgSoundSystem::PlaySoundAliasAtTime
==============
*/

unsigned int __fastcall CgSoundSystem::PlaySoundAliasAtTime(CgSoundSystem *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int msecWhenPlayed)
{
  return ?PlaySoundAliasAtTime@CgSoundSystem@@QEAAIHAEBTvec3_t@@PEBUSndAliasList@@H@Z(this, entitynum, origin, aliasList, msecWhenPlayed);
}

/*
==============
CgSoundSystem::PlayEntitySoundAliasByLookup
==============
*/

unsigned int __fastcall CgSoundSystem::PlayEntitySoundAliasByLookup(CgSoundSystem *this, const int entitynum, SndAliasLookup lookup)
{
  return ?PlayEntitySoundAliasByLookup@CgSoundSystem@@QEAAIHUSndAliasLookup@@@Z(this, entitynum, lookup);
}

/*
==============
CgSoundSystem::PlaySoundAliasListAtViewHeight
==============
*/

unsigned int __fastcall CgSoundSystem::PlaySoundAliasListAtViewHeight(CgSoundSystem *this, const int entityNum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale)
{
  return ?PlaySoundAliasListAtViewHeight@CgSoundSystem@@QEAAIHAEBTvec3_t@@PEBUSndAliasList@@M@Z(this, entityNum, origin, aliasList, volumeScale);
}

/*
==============
CG_PlayADSSounds
==============
*/

void __fastcall CG_PlayADSSounds(const LocalClientNum_t localClientNum, const Weapon *weapon, const bool isAlternate, const playerState_s *ps, centity_t *cent)
{
  ?CG_PlayADSSounds@@YAXW4LocalClientNum_t@@AEBUWeapon@@_NPEBUplayerState_s@@PEAUcentity_t@@@Z(localClientNum, weapon, isAlternate, ps, cent);
}

/*
==============
CgSoundSystem::StopSoundsOnEnt
==============
*/

void __fastcall CgSoundSystem::StopSoundsOnEnt(CgSoundSystem *this, const int entitynum)
{
  ?StopSoundsOnEnt@CgSoundSystem@@QEAAXH@Z(this, entitynum);
}

/*
==============
CgSoundSystem::GetFootstepVolumeScale
==============
*/

double __fastcall CgSoundSystem::GetFootstepVolumeScale(CgSoundSystem *this, const centity_t *cent, const int moveType, int isPlayerView)
{
  double result; 

  *(float *)&result = ?GetFootstepVolumeScale@CgSoundSystem@@QEAAMPEBUcentity_t@@HH@Z(this, cent, moveType, isPlayerView);
  return result;
}

/*
==============
CgSoundSystem::AddFXSoundAlias
==============
*/

void __fastcall CgSoundSystem::AddFXSoundAlias(CgSoundSystem *this, const vec3_t *origin, unsigned int aliasId, int msecWhenPlayed)
{
  ?AddFXSoundAlias@CgSoundSystem@@QEAAXAEBTvec3_t@@IH@Z(this, origin, aliasId, msecWhenPlayed);
}

/*
==============
CgSoundSystem::GetEquipmentVolumeScale
==============
*/

double __fastcall CgSoundSystem::GetEquipmentVolumeScale(CgSoundSystem *this, const centity_t *cent, int isPlayerView)
{
  double result; 

  *(float *)&result = ?GetEquipmentVolumeScale@CgSoundSystem@@QEAAMPEBUcentity_t@@H@Z(this, cent, isPlayerView);
  return result;
}

/*
==============
CgSoundSystem::StopSoundAlias
==============
*/

void __fastcall CgSoundSystem::StopSoundAlias(CgSoundSystem *this, const int entitynum, SndAliasLookup lookup)
{
  ?StopSoundAlias@CgSoundSystem@@QEAAXHUSndAliasLookup@@@Z(this, entitynum, lookup);
}

/*
==============
CgSoundSystem::StopClientSoundAliasByName
==============
*/

void __fastcall CgSoundSystem::StopClientSoundAliasByName(CgSoundSystem *this, const int soundString)
{
  ?StopClientSoundAliasByName@CgSoundSystem@@QEAAXH@Z(this, soundString);
}

/*
==============
CgSoundSystem::PlayEntitySoundAlias
==============
*/

unsigned int __fastcall CgSoundSystem::PlayEntitySoundAlias(CgSoundSystem *this, const int entitynum, const SndAliasList *aliasList)
{
  return ?PlayEntitySoundAlias@CgSoundSystem@@QEAAIHPEBUSndAliasList@@@Z(this, entitynum, aliasList);
}

/*
==============
CgSoundSystem::PlayClientSoundAliasByName
==============
*/

unsigned int __fastcall CgSoundSystem::PlayClientSoundAliasByName(CgSoundSystem *this, const int soundString)
{
  return ?PlayClientSoundAliasByName@CgSoundSystem@@QEAAIH@Z(this, soundString);
}

/*
==============
CgSoundSystem::PlayEntitySoundAliasByName
==============
*/

unsigned int __fastcall CgSoundSystem::PlayEntitySoundAliasByName(CgSoundSystem *this, const int entitynum, const int soundString)
{
  return ?PlayEntitySoundAliasByName@CgSoundSystem@@QEAAIHH@Z(this, entitynum, soundString);
}

/*
==============
CgSoundSystem::AddFXSoundAlias
==============
*/
void CgSoundSystem::AddFXSoundAlias(CgSoundSystem *this, const vec3_t *origin, unsigned int aliasId, int msecWhenPlayed)
{
  if ( !CG_Utils_TimeIsInThePast(this->m_localClientNum, msecWhenPlayed) )
    SND_AddPlayFXSoundAlias(aliasId, (const LocalClientNum_t)this->m_localClientNum, 2046, origin);
}

/*
==============
CG_PlayADSSounds
==============
*/
void CG_PlayADSSounds(const LocalClientNum_t localClientNum, const Weapon *weapon, const bool isAlternate, const playerState_s *ps, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  const WeaponDef *v13; 
  CgWeaponMap *Instance; 
  AdsSoundState adsSoundState; 
  __int32 v17; 
  unsigned __int64 SndEntHandle; 
  int number; 
  int centa; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 434, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  number = cent->nextState.number;
  centa = LocalClientGlobals->predictedPlayerState.clientNum;
  v13 = BG_WeaponDef(weapon, isAlternate);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 441, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v13->sfxPackage )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( centa != number || ps || (ps = &LocalClientGlobals->predictedPlayerState, LocalClientGlobals->renderingThirdPerson) || BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
    {
      CgSoundSystem::GetSoundSystem(localClientNum);
      if ( ps )
      {
        *(double *)&_XMM0 = BG_WeaponADSFractionAffectedByReload(Instance, ps);
        adsSoundState = LocalClientGlobals->adsSoundState;
        __asm { vmovaps xmm1, xmm0 }
        if ( adsSoundState )
        {
          v17 = adsSoundState - 1;
          if ( v17 )
          {
            if ( v17 == 1 )
              __asm { vcomiss xmm0, cs:__real@3f800000 }
          }
          else
          {
            __asm { vucomiss xmm1, cs:__real@3f800000 }
            SndEntHandle = CG_GenerateSndEntHandle(localClientNum, cent->nextState.number);
            __asm { vxorps  xmm3, xmm3, xmm3; fadeTime }
            SND_SetEntContext(SndEntHandle, v13->sfxPackage->adsContextType, v13->sfxPackage->adsContextValue, *(float *)&_XMM3);
            LocalClientGlobals->adsSoundState = ADSSS_IN_ADS;
          }
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcomiss xmm1, xmm0
          }
        }
      }
    }
  }
}

/*
==============
CG_PlayContinuousFireSounds
==============
*/
void CG_PlayContinuousFireSounds(const LocalClientNum_t localClientNum, const playerState_s *ps, centity_t *cent)
{
  __int64 v6; 
  __int64 v7; 
  CgWeaponMap *v8; 
  const Weapon *ViewmodelWeapon; 
  bool inAltWeaponMode; 
  const char *v12; 
  int number; 
  cg_t *v17; 
  int clientNum; 
  CgSoundSystem *SoundSystem; 
  weapFireType_t WeaponFireType; 
  int WeaponHandForViewWeapon; 
  __int64 v22; 
  __int64 v23; 
  int *p_weaponState; 
  __int64 v25; 
  unsigned __int64 v26; 
  const SndAliasList *WeaponSoundWithFallback; 
  unsigned __int8 v29; 
  const SndAliasList *v30; 
  const char *v31; 
  SndAliasList *v32; 
  const SndAliasList *v35; 
  const SndAliasList *v36; 
  const char *v37; 
  SndAliasList *v38; 
  const char *name; 
  SndAliasList *Alias; 
  int fmt; 
  int fmta; 
  int fmtb; 
  int fmtc; 
  int fmtd; 
  int fmte; 
  int fmtf; 
  __int64 v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  __int64 v59; 
  CgWeaponSystem *v60; 
  CgCompassSystem *v61; 
  BgWeaponMap *weaponMap; 
  vec3_t outOrigin; 
  __int64 v64; 
  unsigned __int8 v66; 
  cg_t *LocalClientGlobals; 
  char v68; 
  int v69; 
  Weapon *r_weapon; 

  v64 = -2i64;
  __asm { vmovaps [rsp+0C8h+var_58], xmm6 }
  v6 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 265, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v7 = v6;
  if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = CgWeaponMap::ms_instance[v6];
  weaponMap = v8;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v6) )
    __debugbreak();
  if ( (unsigned int)v6 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v59) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v51) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v51, v59) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v6] )
  {
    LODWORD(v59) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v59) )
      __debugbreak();
  }
  v60 = CgWeaponSystem::ms_weaponSystemArray[v6];
  if ( ps )
  {
    ViewmodelWeapon = BG_GetViewmodelWeapon(v8, ps);
    r_weapon = (Weapon *)ViewmodelWeapon;
    inAltWeaponMode = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu));
  }
  else
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    ViewmodelWeapon = BgWeaponMap::GetWeapon(v8, cent->nextState.weaponHandle);
    r_weapon = (Weapon *)ViewmodelWeapon;
    inAltWeaponMode = cent->nextState.inAltWeaponMode;
  }
  *(_QWORD *)outOrigin.v = BG_WeaponDef(ViewmodelWeapon, inAltWeaponMode);
  if ( !*(_QWORD *)outOrigin.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 275, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
  {
    LODWORD(v59) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", v59) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v59) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v51) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v51, v59) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[v6] )
  {
    LODWORD(v59) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v59) )
      __debugbreak();
  }
  v61 = CgCompassSystem::ms_compassSystemArray[v6];
  if ( BG_IsSilenced(ViewmodelWeapon, inAltWeaponMode) )
  {
    _RBX = DCONST_DVARFLT_compassSilencedSoundPingDuration;
    if ( DCONST_DVARFLT_compassSilencedSoundPingDuration )
      goto LABEL_48;
    v12 = "compassSilencedSoundPingDuration";
  }
  else
  {
    _RBX = DCONST_DVARMPSPFLT_compassSoundPingDuration;
    if ( DCONST_DVARMPSPFLT_compassSoundPingDuration )
      goto LABEL_48;
    v12 = "compassSoundPingDuration";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v12) )
    __debugbreak();
LABEL_48:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm0
  }
  v69 = _EAX;
  number = cent->nextState.number;
  v17 = LocalClientGlobals;
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v66 = 1;
  v68 = 1;
  if ( clientNum == number )
  {
    v66 = 1;
    v68 = 1;
    if ( !ps )
    {
      ps = &v17->predictedPlayerState;
      if ( !v17->renderingThirdPerson && !BG_IsThirdPersonMode(weaponMap, &v17->predictedPlayerState) )
        goto LABEL_100;
      v66 = 0;
      v68 = 0;
    }
  }
  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v6);
  WeaponFireType = BG_GetWeaponFireType(r_weapon, inAltWeaponMode);
  if ( BG_IsMeleeOnlyWeapon(r_weapon, inAltWeaponMode) || WeaponFireType != WEAPON_FIRETYPE_BEAM && WeaponFireType || !*(_QWORD *)(*(_QWORD *)outOrigin.v + 520i64) )
  {
    if ( cent->clientSoundState.playedBeamFireSound )
    {
      name = cent->clientSoundState.stopFireSoundAlias.name;
      if ( name )
      {
        Alias = SND_TryFindAlias(name);
        if ( Alias )
        {
          CG_GetPoseOrigin(&cent->pose, &outOrigin);
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  dword ptr [rsp+0C8h+var_A0], xmm0
            vmovss  dword ptr [rsp+0C8h+fmt], xmm0
          }
          ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, int, int, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, Alias, fmtf, v58, 0);
          goto LABEL_98;
        }
        goto LABEL_99;
      }
    }
    goto LABEL_100;
  }
  if ( clientNum == number )
  {
    if ( !ps )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 240, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( !CgWeaponMap::ms_instance[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(CgWeaponMap::ms_instance[v7], ps);
    v22 = WeaponHandForViewWeapon;
    if ( WeaponHandForViewWeapon >= 0 )
    {
      v23 = 0i64;
      p_weaponState = &ps->weapState[0].weaponState;
      v25 = 0xC01000000030001i64;
      while ( 1 )
      {
        v26 = *p_weaponState;
        if ( (unsigned int)v26 > 0x3B || !_bittest64(&v25, v26) )
          break;
        ++v23;
        p_weaponState += 20;
        if ( v23 > v22 )
          goto LABEL_71;
      }
LABEL_79:
      if ( cent->clientSoundState.playedBeamFireSound )
      {
        v31 = cent->clientSoundState.stopFireSoundAlias.name;
        if ( v31 )
        {
          v32 = SND_TryFindAlias(v31);
          if ( v32 )
          {
            CG_GetPoseOrigin(&cent->pose, &outOrigin);
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vmovss  dword ptr [rsp+0C8h+var_A0], xmm0
              vmovss  dword ptr [rsp+0C8h+fmt], xmm0
            }
            ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, int, int, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, v32, fmtb, v54, 0);
LABEL_98:
            memset(&outOrigin, 0, sizeof(outOrigin));
            goto LABEL_99;
          }
          goto LABEL_99;
        }
      }
      goto LABEL_100;
    }
LABEL_71:
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xAu) )
      goto LABEL_79;
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    if ( cent->clientSoundState.playedBeamFireSound )
    {
      v29 = v68;
    }
    else
    {
      WeaponSoundWithFallback = BG_GetWeaponSoundWithFallback(r_weapon, inAltWeaponMode, 8i64 * v66 + 160);
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+var_A0], xmm6
        vmovss  dword ptr [rsp+0C8h+fmt], xmm6
      }
      ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, WeaponSoundWithFallback, fmt, v52, 0);
      cent->clientSoundState.stopFireSoundAlias = BG_GetWeaponSoundLookup(r_weapon, inAltWeaponMode, 8i64 * v66 + 192);
      cent->clientSoundState.playedBeamFireSound = 1;
      v29 = v66;
    }
    v30 = BG_GetWeaponSoundWithFallback(r_weapon, inAltWeaponMode, 8i64 * v29 + 176);
    __asm
    {
      vmovss  dword ptr [rsp+0C8h+var_A0], xmm6
      vmovss  dword ptr [rsp+0C8h+fmt], xmm6
    }
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, v30, fmta, v53, 0);
    if ( v30 && v60->ShouldWeaponPing(v60, cent, r_weapon, inAltWeaponMode, &outOrigin) )
      v61->AddWeaponPingInfo(v61, cent, &outOrigin, v69);
LABEL_78:
    memset(&outOrigin, 0, sizeof(outOrigin));
    goto LABEL_100;
  }
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xAu) )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    if ( !cent->clientSoundState.playedBeamFireSound )
    {
      v35 = BG_GetWeaponSoundWithFallback(r_weapon, inAltWeaponMode, 160i64);
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+var_A0], xmm6
        vmovss  dword ptr [rsp+0C8h+fmt], xmm6
      }
      ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, v35, fmtc, v55, 0);
      cent->clientSoundState.stopFireSoundAlias = BG_GetWeaponSoundLookup(r_weapon, inAltWeaponMode, 192i64);
      cent->clientSoundState.playedBeamFireSound = 1;
    }
    v36 = BG_GetWeaponSoundWithFallback(r_weapon, inAltWeaponMode, 176i64);
    __asm
    {
      vmovss  dword ptr [rsp+0C8h+var_A0], xmm6
      vmovss  dword ptr [rsp+0C8h+fmt], xmm6
    }
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, v36, fmtd, v56, 0);
    if ( v36 && v60->ShouldWeaponPing(v60, cent, r_weapon, inAltWeaponMode, &outOrigin) )
      v61->AddWeaponPingInfo(v61, cent, &outOrigin, v69);
    goto LABEL_78;
  }
  if ( cent->clientSoundState.playedBeamFireSound )
  {
    v37 = cent->clientSoundState.stopFireSoundAlias.name;
    if ( v37 )
    {
      v38 = SND_TryFindAlias(v37);
      if ( v38 )
      {
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vmovss  dword ptr [rsp+0C8h+var_A0], xmm0
          vmovss  dword ptr [rsp+0C8h+fmt], xmm0
        }
        ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, int, int, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, v38, fmte, v57, 0);
        goto LABEL_98;
      }
LABEL_99:
      cent->clientSoundState.playedBeamFireSound = 0;
    }
  }
LABEL_100:
  __asm { vmovaps xmm6, [rsp+0C8h+var_58] }
}

/*
==============
CG_Sound_RegisterFleshSounds
==============
*/
void CG_Sound_RegisterFleshSounds(const char *pszType, SndAliasList *const defaultSoundPlayer, SndAliasList *const defaultSoundNPC, SfxFleshImpactGroup *outSounds)
{
  const char *v5; 
  const char *v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  signed __int64 v10; 
  signed __int64 v11; 
  __int64 i; 
  const char **v13; 
  SndAliasList *Alias; 
  SndAliasList *(*v15)[2]; 
  signed __int64 v16; 
  __int64 v17; 
  const char *const *v18; 
  __int64 v19; 
  SndAliasList **v20; 
  SndAliasList *v21; 
  __int64 v22; 
  signed __int64 v23; 
  const char **v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  const char *v28; 
  char dest[256]; 

  v5 = pszType;
  if ( !pszType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 175, ASSERT_TYPE_ASSERT, "(pszType)", (const char *)&queryFormat, "pszType") )
    __debugbreak();
  v6 = Com_SurfaceTypeToName(7);
  v28 = v6;
  v27 = 0i64;
  v7 = 0i64;
  v22 = 0i64;
  v26 = 0i64;
  v25 = 0i64;
  v8 = -5i64;
  v9 = -160i64;
  v24 = (const char **)s_fleshSoundNPCHitlocSuffix;
  v10 = (char *)outSounds - (char *)s_fleshSoundNPCHitArmorSuffix + 416;
  v23 = (char *)s_fleshSoundNPCHitArmorSuffix - (char *)outSounds;
  do
  {
    v11 = v10 + v7;
    for ( i = 0i64; i < 2; ++i )
    {
      v13 = (const char **)&s_fleshSoundNPCHitArmorSuffix[i];
      Com_sprintf(dest, 0x100ui64, "%s_%s_%s_plr%s", v5, v6, *v24, *v13);
      Alias = SND_TryFindAlias(dest);
      if ( !Alias )
      {
        Alias = (SndAliasList *)*((_QWORD *)&outSounds->player[0][i] + v25);
        if ( !Alias )
        {
          if ( (unsigned __int64)(v8 + 5) <= 4 )
            Alias = outSounds->player[0][i];
          if ( v9 <= 0x60 )
            Alias = outSounds->player[5][i];
          if ( (unsigned __int64)(v8 - 4) <= 3 )
            Alias = outSounds->player[9][i];
          if ( !Alias )
          {
            if ( v8 != -5 )
              Alias = outSounds->player[0][i];
            if ( !Alias )
            {
              if ( !i )
                goto LABEL_30;
              Alias = outSounds->player[v26][0];
              if ( !Alias )
              {
                if ( (unsigned __int64)(v8 + 5) <= 4 )
                  Alias = outSounds->player[0][0];
                if ( v9 <= 0x60 )
                  Alias = outSounds->player[5][0];
                if ( (unsigned __int64)(v8 - 4) <= 3 )
                  Alias = outSounds->player[9][0];
                if ( !Alias )
                {
                  if ( v8 != -5 )
                    Alias = outSounds->player[0][0];
                  if ( !Alias )
LABEL_30:
                    Alias = defaultSoundPlayer;
                }
              }
            }
          }
        }
      }
      *(const char **)((char *)v13 + v11) = (const char *)Alias;
      v6 = v28;
    }
    v15 = outSounds->npc[5];
    v16 = v23;
    v17 = 0i64;
    v18 = s_fleshSoundNPCSuffix;
    do
    {
      v19 = 0i64;
      v20 = v15[v9 / 0x10];
      do
      {
        Com_sprintf(dest, 0x100ui64, "%s_%s_%s_%s%s", pszType, v28, *v24, *v18, *(const char **)((char *)v20 + v16));
        v21 = SND_TryFindAlias(dest);
        if ( !v21 )
        {
          v21 = *v20;
          if ( !*v20 && (v18 == s_fleshSoundNPCSuffix || (v21 = (&outSounds->npc[0][0][v19])[v27]) == NULL) )
          {
            if ( (unsigned __int64)(v8 + 5) <= 4 )
              v21 = (SndAliasList *)*((_QWORD *)&outSounds->npc[0][0][v19] + v17);
            if ( v9 <= 0x60 )
              v21 = (SndAliasList *)*((_QWORD *)&outSounds->npc[5][0][v19] + v17);
            if ( (unsigned __int64)(v8 - 4) <= 3 )
              v21 = (SndAliasList *)*((_QWORD *)&outSounds->npc[9][0][v19] + v17);
            if ( !v21 )
            {
              if ( v8 != -5 )
              {
                v21 = (SndAliasList *)*((_QWORD *)&outSounds->npc[0][0][v19] + v17);
                if ( v21 )
                  goto LABEL_67;
                if ( v18 != s_fleshSoundNPCSuffix )
                  v21 = v20[v22];
              }
              if ( !v21 )
              {
                if ( !v19 )
                  goto LABEL_66;
                v21 = v15[v9 / 0x10][0];
                if ( !v21 && (v18 == s_fleshSoundNPCSuffix || (v21 = outSounds->npc[v9 / 0x20 + 5][0][0]) == NULL) )
                {
                  if ( (unsigned __int64)(v8 + 5) <= 4 )
                    v21 = (*v15)[-20];
                  if ( v9 <= 0x60 )
                    v21 = (*v15)[0];
                  if ( (unsigned __int64)(v8 - 4) <= 3 )
                    v21 = (*v15)[16];
                  if ( !v21 )
                  {
                    if ( v8 != -5 )
                    {
                      v21 = (*v15)[-20];
                      if ( v21 )
                        goto LABEL_67;
                      if ( v18 != s_fleshSoundNPCSuffix )
                        v21 = outSounds->npc[0][0][0];
                    }
                    if ( !v21 )
LABEL_66:
                      v21 = defaultSoundNPC;
                  }
                }
              }
            }
          }
        }
LABEL_67:
        v16 = v23;
        ++v19;
        *v20++ = v21;
      }
      while ( v19 < 2 );
      v22 -= 2i64;
      v16 = v23 - 16;
      ++v18;
      v17 += 2i64;
      v23 -= 16i64;
      ++v15;
    }
    while ( (__int64)v18 < (__int64)&unk_1442C78D8 );
    v25 += 2i64;
    ++v8;
    ++v24;
    v7 = v26 * 16 + 16;
    v27 += 4i64;
    v9 += 32i64;
    v5 = pszType;
    v6 = v28;
    v10 = (char *)outSounds - (char *)s_fleshSoundNPCHitArmorSuffix + 416;
    ++v26;
  }
  while ( v8 + 5 < 13 );
}

/*
==============
CG_Sound_RegisterMedia
==============
*/
void CG_Sound_RegisterMedia(void)
{
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Sound_RegisterMedia");
  cgMedia.missileTagInit = SND_FindAlias("missile_tag_init");
  cgMedia.missileTag = SND_FindAlias("missile_tag");
  cgMedia.grenadeExplodeSound = SND_FindAlias("grenade_explode");
  cgMedia.grenadeExplodeSoundSmall = SND_FindAlias("grenade_explode_small");
  cgMedia.rocketExplodeSound = SND_FindAlias("rocket_explode");
  cgMedia.rocketExplodeSoundSmall = SND_FindAlias("rocket_explode_small");
  cgMedia.npcImpactSounds.bulletExplodeSound = SND_FindAlias("bullet_explode");
  cgMedia.playerImpactSounds.bulletExplodeSound = SND_FindAlias("bullet_plr_explode");
  cgMedia.trophyExplodeSound = SND_FindAlias("trophy_explode");
  cgMedia.npcImpactSounds.vehBulletExplodeSound = SND_FindAlias("veh_bullet_explode");
  cgMedia.playerImpactSounds.vehBulletExplodeSound = SND_FindAlias("veh_bullet_plr_explode");
  cgMedia.vehMissileExplodeSound = SND_FindAlias("veh_missile_explode");
  cgMedia.skydiveParachuteDetach = SND_FindAlias("mp_parachute_detach");
  cgMedia.skydiveCanopySoundThirdPersonFriendly = SND_FindAlias("mp_parachute_foley_ally");
  cgMedia.skydiveCanopySoundThirdPersonFriendly = SND_FindAlias("mp_parachute_foley_ally");
  cgMedia.skydiveCanopySoundThirdPersonEnemy = SND_FindAlias("mp_parachute_foley");
  cgMedia.skydiveFreefallSoundThirdPersonFriendly = SND_FindAlias("mp_parachute_freefall_ally");
  cgMedia.skydiveFreefallSoundThirdPersonEnemy = SND_FindAlias("mp_parachute_freefall");
  cgMedia.skydiveLandingSoundThirdPersonFriendly = SND_FindAlias("mp_parachute_land_ally");
  cgMedia.skydiveLandingSoundThirdPersonEnemy = SND_FindAlias("mp_parachute_land");
  cgMedia.calloutMarkerPingConfirm = SND_FindAlias("br_ping_confirm");
  cgMedia.calloutMarkerPingEnemy = SND_FindAlias("br_ping_enemy");
  cgMedia.calloutMarkerPingItem = SND_FindAlias("br_ping_item");
  cgMedia.calloutMarkerPingLocation = SND_FindAlias("br_ping_location");
  cgMedia.calloutMarkerPingRevive = SND_FindAlias("br_ping_revive");
  cgMedia.waterSound = SND_FindAlias("impact_water");
  cgMedia.gibDismemberHead = SND_TryFindAlias("gib_dismember_head");
  cgMedia.gibDismemberLeg = SND_TryFindAlias("gib_dismember_leg");
  cgMedia.gibDismemberArm = SND_TryFindAlias("gib_dismember_arm");
  cgMedia.gibCryoHead = SND_TryFindAlias("gib_cryo_head");
  cgMedia.gibCryoLeg = SND_TryFindAlias("gib_cryo_leg");
  cgMedia.gibCryoArm = SND_TryFindAlias("gib_cryo_arm");
  cgMedia.gibGoldHead = SND_TryFindAlias("gib_gold_head");
  cgMedia.gibGoldLeg = SND_TryFindAlias("gib_gold_leg");
  cgMedia.gibGoldArm = SND_TryFindAlias("gib_gold_arm");
  cgMedia.gibShadowHead = SND_TryFindAlias("gib_shadow_head");
  cgMedia.gibShadowLeg = SND_TryFindAlias("gib_shadow_leg");
  cgMedia.gibShadowArm = SND_TryFindAlias("gib_shadow_arm");
  cgMedia.gibWeedHead = SND_TryFindAlias("gib_weed_head");
  cgMedia.gibWeedLeg = SND_TryFindAlias("gib_weed_leg");
  cgMedia.gibWeedArm = SND_TryFindAlias("gib_weed_arm");
  cgMedia.gibRayGunHead = SND_TryFindAlias("gib_raygun_head");
  cgMedia.gibRayGunLeg = SND_TryFindAlias("gib_raygun_leg");
  cgMedia.gibRayGunArm = SND_TryFindAlias("gib_raygun_arm");
  cgMedia.gibSoulHead = SND_TryFindAlias("gib_soul_head");
  cgMedia.gibSoulLeg = SND_TryFindAlias("gib_soul_leg");
  cgMedia.gibSoulArm = SND_TryFindAlias("gib_soul_arm");
  cgMedia.gibGeneric0Head = SND_TryFindAlias("gib_generic0_head");
  cgMedia.gibGeneric0Leg = SND_TryFindAlias("gib_generic0_leg");
  cgMedia.gibGeneric0Arm = SND_TryFindAlias("gib_generic0_arm");
  cgMedia.gibGeneric1Head = SND_TryFindAlias("gib_generic1_head");
  cgMedia.gibGeneric1Leg = SND_TryFindAlias("gib_generic1_leg");
  cgMedia.gibGeneric1Arm = SND_TryFindAlias("gib_generic1_arm");
  cgMedia.gibGeneric2Head = SND_TryFindAlias("gib_generic2_head");
  cgMedia.gibGeneric2Leg = SND_TryFindAlias("gib_generic2_leg");
  cgMedia.gibGeneric2Arm = SND_TryFindAlias("gib_generic2_arm");
  cgMedia.npcImpactSounds.bulletHitLargeSound = SND_FindAlias("bullet_large");
  cgMedia.npcImpactSounds.bulletHitSmallSound = SND_FindAlias("bullet_small");
  cgMedia.npcImpactSounds.shotgunHitSound = SND_FindAlias("bulletspray_small");
  cgMedia.npcImpactSounds.vehBulletHitMediumSound = SND_FindAlias("veh_bullet_medium");
  cgMedia.npcImpactSounds.bulletExitLargeSound = SND_FindAlias("bullet_large_exit");
  cgMedia.npcImpactSounds.shotgunExitSound = SND_FindAlias("bulletspray_small_exit");
  cgMedia.npcImpactSounds.vehBulletExitMediumSound = SND_FindAlias("veh_bullet_medium_exit");
  cgMedia.npcImpactSounds.arcaneRedSound = SND_FindAlias("impact_arcane_red");
  cgMedia.npcImpactSounds.arcaneYellowSound = SND_FindAlias("impact_arcane_yellow");
  cgMedia.npcImpactSounds.arcanePinkSound = SND_FindAlias("impact_arcane_pink");
  cgMedia.npcImpactSounds.arcaneBlueSound = SND_FindAlias("impact_arcane_blue");
  cgMedia.npcImpactSounds.rock1Sound = SND_FindAlias("impact_wor_1");
  cgMedia.npcImpactSounds.rock2Sound = SND_FindAlias("impact_wor_2");
  cgMedia.npcImpactSounds.rock3Sound = SND_FindAlias("impact_wor_3");
  cgMedia.npcImpactSounds.rock4Sound = SND_FindAlias("impact_wor_4");
  cgMedia.npcImpactSounds.dlc1Sound = SND_FindAlias("impact_dlc_1");
  cgMedia.npcImpactSounds.dlc2Sound = SND_FindAlias("impact_dlc_2");
  cgMedia.npcImpactSounds.dlc3Sound = SND_FindAlias("impact_dlc_3");
  cgMedia.npcImpactSounds.dlc4Sound = SND_FindAlias("impact_dlc_4");
  cgMedia.playerImpactSounds.bulletHitLargeSound = SND_FindAlias("bullet_plr_large");
  cgMedia.playerImpactSounds.bulletHitSmallSound = SND_FindAlias("bullet_plr_small");
  cgMedia.playerImpactSounds.shotgunHitSound = SND_FindAlias("bulletspray_plr_small");
  cgMedia.playerImpactSounds.vehBulletHitMediumSound = SND_FindAlias("veh_bullet_plr_medium");
  cgMedia.playerImpactSounds.bulletExitLargeSound = SND_FindAlias("bullet_plr_large_exit");
  cgMedia.playerImpactSounds.shotgunExitSound = SND_FindAlias("bulletspray_plr_small_exit");
  cgMedia.playerImpactSounds.vehBulletExitMediumSound = SND_FindAlias("veh_bullet_plr_medium_exit");
  cgMedia.playerImpactSounds.arcaneRedSound = SND_FindAlias("impact_plr_arcane_red");
  cgMedia.playerImpactSounds.arcaneYellowSound = SND_FindAlias("impact_plr_arcane_yellow");
  cgMedia.playerImpactSounds.arcanePinkSound = SND_FindAlias("impact_plr_arcane_pink");
  cgMedia.playerImpactSounds.arcaneBlueSound = SND_FindAlias("impact_plr_arcane_blue");
  cgMedia.playerImpactSounds.rock1Sound = SND_FindAlias("impact_plr_wor_1");
  cgMedia.playerImpactSounds.rock2Sound = SND_FindAlias("impact_plr_wor_2");
  cgMedia.playerImpactSounds.rock3Sound = SND_FindAlias("impact_plr_wor_3");
  cgMedia.playerImpactSounds.rock4Sound = SND_FindAlias("impact_plr_wor_4");
  cgMedia.playerImpactSounds.dlc1Sound = SND_FindAlias("impact_plr_dlc_1");
  cgMedia.playerImpactSounds.dlc2Sound = SND_FindAlias("impact_plr_dlc_2");
  cgMedia.playerImpactSounds.dlc3Sound = SND_FindAlias("impact_plr_dlc_3");
  cgMedia.playerImpactSounds.dlc4Sound = SND_FindAlias("impact_plr_dlc_4");
  CG_Sound_RegisterFleshSounds("bullet_explode", cgMedia.playerImpactSounds.bulletExplodeSound, cgMedia.npcImpactSounds.bulletExplodeSound, &cgMedia.fleshBulletExplode);
  CG_Sound_RegisterFleshSounds("bullet_large", cgMedia.playerImpactSounds.bulletHitLargeSound, cgMedia.npcImpactSounds.bulletHitLargeSound, &cgMedia.fleshBulletLarge);
  CG_Sound_RegisterFleshSounds("bullet_small", cgMedia.playerImpactSounds.bulletHitSmallSound, cgMedia.npcImpactSounds.bulletHitSmallSound, &cgMedia.fleshBulletSmall);
  CG_Sound_RegisterFleshSounds("bulletspray_small", cgMedia.playerImpactSounds.shotgunHitSound, cgMedia.npcImpactSounds.shotgunHitSound, &cgMedia.fleshShotgun);
  CG_Sound_RegisterFleshSounds("veh_bullet_medium", cgMedia.playerImpactSounds.vehBulletHitMediumSound, cgMedia.npcImpactSounds.vehBulletHitMediumSound, &cgMedia.fleshVehBullet);
  CG_Sound_RegisterFleshSounds("veh_bullet_explode", cgMedia.playerImpactSounds.vehBulletExplodeSound, cgMedia.npcImpactSounds.vehBulletExplodeSound, &cgMedia.fleshVehBulletExplode);
  CG_Sound_RegisterFleshSounds("impact_arcane_red", cgMedia.playerImpactSounds.arcaneRedSound, cgMedia.npcImpactSounds.arcaneRedSound, &cgMedia.fleshArcaneRed);
  CG_Sound_RegisterFleshSounds("impact_arcane_yellow", cgMedia.playerImpactSounds.arcaneYellowSound, cgMedia.npcImpactSounds.arcaneYellowSound, &cgMedia.fleshArcaneYellow);
  CG_Sound_RegisterFleshSounds("impact_arcane_pink", cgMedia.playerImpactSounds.arcanePinkSound, cgMedia.npcImpactSounds.arcanePinkSound, &cgMedia.fleshArcanePink);
  CG_Sound_RegisterFleshSounds("impact_arcane_blue", cgMedia.playerImpactSounds.arcaneBlueSound, cgMedia.npcImpactSounds.arcaneBlueSound, &cgMedia.fleshArcaneBlue);
  CG_Sound_RegisterFleshSounds("impact_wor_1", cgMedia.playerImpactSounds.rock1Sound, cgMedia.npcImpactSounds.rock1Sound, &cgMedia.fleshRock1);
  CG_Sound_RegisterFleshSounds("impact_wor_2", cgMedia.playerImpactSounds.rock2Sound, cgMedia.npcImpactSounds.rock2Sound, &cgMedia.fleshRock2);
  CG_Sound_RegisterFleshSounds("impact_wor_3", cgMedia.playerImpactSounds.rock3Sound, cgMedia.npcImpactSounds.rock3Sound, &cgMedia.fleshRock3);
  CG_Sound_RegisterFleshSounds("impact_wor_4", cgMedia.playerImpactSounds.rock4Sound, cgMedia.npcImpactSounds.rock4Sound, &cgMedia.fleshRock4);
  CG_Sound_RegisterFleshSounds("impact_dlc_1", cgMedia.playerImpactSounds.dlc1Sound, cgMedia.npcImpactSounds.dlc1Sound, &cgMedia.fleshDLC1);
  CG_Sound_RegisterFleshSounds("impact_dlc_2", cgMedia.playerImpactSounds.dlc2Sound, cgMedia.npcImpactSounds.dlc2Sound, &cgMedia.fleshDLC2);
  CG_Sound_RegisterFleshSounds("impact_dlc_3", cgMedia.playerImpactSounds.dlc3Sound, cgMedia.npcImpactSounds.dlc3Sound, &cgMedia.fleshDLC3);
  CG_Sound_RegisterFleshSounds("impact_dlc_4", cgMedia.playerImpactSounds.dlc4Sound, cgMedia.npcImpactSounds.dlc4Sound, &cgMedia.fleshDLC4);
  cgMedia.slideStartSoundPlayer = SND_FindAlias("slide_start_plr");
  cgMedia.slideStartSound = SND_FindAlias("slide_start_npc");
  cgMedia.slideEaseOutSoundPlayer = SND_FindAlias("slide_ease_out_plr");
  cgMedia.slideEaseOutSound = SND_FindAlias("slide_ease_out_npc");
  cgMedia.slideLoopSoundPlayer = SND_FindAlias("slide_loop_plr");
  cgMedia.slideLoopSound = SND_FindAlias("slide_loop_npc");
  cgMedia.ladderSlideStartSoundPlayer = SND_FindAlias("ladder_slide_start_plr");
  cgMedia.ladderSlideStartSound = SND_FindAlias("ladder_slide_start_npc");
  cgMedia.ladderSlideStopSoundPlayer = SND_FindAlias("ladder_slide_stop_plr");
  cgMedia.ladderSlideStopSound = SND_FindAlias("ladder_slide_stop_npc");
  cgMedia.ladderSlideLoopSoundPlayer = SND_FindAlias("ladder_slide_loop_plr");
  cgMedia.ladderSlideLoopSound = SND_FindAlias("ladder_slide_loop_npc");
  cgMedia.nightVisionOn = SND_FindAlias("item_nightvision_on");
  cgMedia.nightVisionOff = SND_FindAlias("item_nightvision_off");
  cgMedia.playerHeartBeatSound = SND_FindAlias("weap_sniper_heartbeat");
  cgMedia.playerSwapOffhand = SND_FindAlias("weap_offhand_select");
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_FIRING) )
    cgMedia.uavPing = SND_FindAlias("uav_ping");
  BG_FindEquipmentSoundAliases();
  cgMedia.ladderGrabLeftPlr = SND_FindAlias("ladder_grab_left_plr");
  cgMedia.ladderGrabRightPlr = SND_FindAlias("ladder_grab_right_plr");
  cgMedia.ladderGrabLeftNpc = SND_FindAlias("ladder_grab_left_npc");
  cgMedia.ladderGrabRightNpc = SND_FindAlias("ladder_grab_right_npc");
  Sys_ProfEndNamedEvent();
}

/*
==============
CgSoundSystem::ChangeSoundParameterOnEnt
==============
*/
void CgSoundSystem::ChangeSoundParameterOnEnt(CgSoundSystem *this, const int entitynum, const unsigned int paramBitField, void (*changeParameterFunction)(unsigned __int64, float, int), float maxvalue)
{
  unsigned __int16 v7; 
  unsigned __int64 SndEntHandle; 
  __int64 v15; 

  v7 = paramBitField;
  if ( !changeParameterFunction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1130, ASSERT_TYPE_ASSERT, "(changeParameterFunction)", (const char *)&queryFormat, "changeParameterFunction") )
    __debugbreak();
  SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, cs:__real@37800080
    vmulss  xmm1, xmm1, [rsp+38h+maxvalue]
  }
  ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))changeParameterFunction)(SndEntHandle, v15, v7);
}

/*
==============
CgSoundSystem::GetEquipmentVolumeScale
==============
*/
float CgSoundSystem::GetEquipmentVolumeScale(CgSoundSystem *this, const centity_t *cent, int isPlayerView)
{
  char v10; 
  CgStatic *LocalClientStatics; 
  const char *v12; 
  const characterInfo_t *CharacterInfo; 
  const dvar_t *v15; 
  const char *v16; 

  *(double *)&_XMM0 = CG_GameInterface_GetFootstepVolumeScale((const LocalClientNum_t)this->m_localClientNum, cent, isPlayerView);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v10 )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    if ( (cent->flags & 1) == 0 )
    {
      v12 = "no";
      if ( isPlayerView )
        v12 = "yes";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1265, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", "%s\n\tentnum %i, isPlayerView: %s", "CENextValid( cent )", cent->nextState.number, v12) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.number);
    if ( CharacterInfo && BG_HasPerk(&CharacterInfo->perks, 0x1Fu) )
    {
      if ( isPlayerView )
      {
        v15 = DCONST_DVARFLT_perk_equipmentVolumeQuietPlayer;
        v16 = "perk_equipmentVolumeQuietPlayer";
      }
      else
      {
        v15 = DCONST_DVARFLT_perk_equipmentVolumeQuietNPC;
        v16 = "perk_equipmentVolumeQuietNPC";
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v15, v16);
      __asm { vmovaps xmm6, xmm0 }
    }
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CgSoundSystem::GetFootstepVolumeScale
==============
*/
float CgSoundSystem::GetFootstepVolumeScale(CgSoundSystem *this, const centity_t *cent, const int moveType, int isPlayerView)
{
  char v12; 
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const char *v15; 
  const characterInfo_t *CharacterInfo; 
  const dvar_t *v18; 
  const char *v19; 
  const characterInfo_t *v20; 
  const characterInfo_t *v21; 
  team_t team; 
  team_t v23; 
  const dvar_t *v24; 
  const char *v25; 

  *(double *)&_XMM0 = CG_GameInterface_GetFootstepVolumeScale((const LocalClientNum_t)this->m_localClientNum, cent, isPlayerView);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v12 )
  {
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    if ( (cent->flags & 1) == 0 )
    {
      v15 = "no";
      if ( isPlayerView )
        v15 = "yes";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1172, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", "%s\n\tentnum %i, isPlayerView: %s", "CENextValid( cent )", cent->nextState.number, v15) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.number);
    if ( CharacterInfo )
    {
      if ( !BG_HasPerk(&CharacterInfo->perks, 0x1Fu) )
        goto LABEL_53;
      switch ( moveType )
      {
        case 0:
          if ( isPlayerView )
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerCreep;
            v19 = "perk_footstepVolumeQuietPlayerCreep";
          }
          else
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCCreep;
            v19 = "perk_footstepVolumeQuietNPCCreep";
          }
          break;
        case 1:
          if ( isPlayerView )
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerWalk;
            v19 = "perk_footstepVolumeQuietPlayerWalk";
          }
          else
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCWalk;
            v19 = "perk_footstepVolumeQuietNPCWalk";
          }
          break;
        case 2:
          if ( isPlayerView )
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerRun;
            v19 = "perk_footstepVolumeQuietPlayerRun";
          }
          else
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCRun;
            v19 = "perk_footstepVolumeQuietNPCRun";
          }
          break;
        case 3:
          if ( isPlayerView )
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerSprint;
            v19 = "perk_footstepVolumeQuietPlayerSprint";
          }
          else
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCSprint;
            v19 = "perk_footstepVolumeQuietNPCSprint";
          }
          break;
        case 4:
          if ( isPlayerView )
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerSuperSprint;
            v19 = "perk_footstepVolumeQuietPlayerSuperSprint";
          }
          else
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCSuperSprint;
            v19 = "perk_footstepVolumeQuietNPCSuperSprint";
          }
          break;
        case 5:
          if ( isPlayerView )
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerProne;
            v19 = "perk_footstepVolumeQuietPlayerProne";
          }
          else
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCProne;
            v19 = "perk_footstepVolumeQuietNPCProne";
          }
          break;
        default:
          if ( isPlayerView )
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayer;
            v19 = "perk_footstepVolumeQuietPlayer";
          }
          else
          {
            v18 = DCONST_DVARFLT_perk_footstepVolumeQuietNPC;
            v19 = "perk_footstepVolumeQuietNPC";
          }
          break;
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v18, v19);
      __asm { vmovaps xmm6, xmm0 }
      if ( !isPlayerView )
      {
LABEL_53:
        if ( BG_HasPerk(&LocalClientGlobals->predictedPlayerState.perks, 0x28u) )
        {
          if ( isPlayerView )
          {
            v24 = DVARFLT_perk_footstepVolumePlayer;
            v25 = "perk_footstepVolumePlayer";
          }
          else
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_footstepVolumeSelectiveHearingMin, "perk_footstepVolumeSelectiveHearingMin");
            __asm { vmaxss  xmm6, xmm0, xmm6 }
            v20 = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
            if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1231, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
              __debugbreak();
            v21 = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.clientNum);
            if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1234, ASSERT_TYPE_ASSERT, "(entCI)", (const char *)&queryFormat, "entCI") )
              __debugbreak();
            team = v20->team;
            v23 = v21->team;
            if ( cent == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
              __debugbreak();
            if ( team && team == v23 )
            {
              v24 = DVARFLT_perk_footstepVolumeAlly;
              v25 = "perk_footstepVolumeAlly";
            }
            else
            {
              v24 = DVARFLT_perk_footstepVolumeEnemy;
              v25 = "perk_footstepVolumeEnemy";
            }
          }
          Dvar_GetFloat_Internal_DebugName(v24, v25);
          __asm { vmulss  xmm6, xmm6, xmm0 }
        }
      }
    }
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+68h+var_28]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CgSoundSystem::PlayClientSoundAlias
==============
*/
__int64 CgSoundSystem::PlayClientSoundAlias(CgSoundSystem *this, const SndAliasList *aliasList)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  int fmt; 
  int v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 925, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr [rsp+48h+var_20], xmm0
    vmovss  dword ptr [rsp+48h+fmt], xmm0
  }
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)p_predictedPlayerState->clientNum, &p_predictedPlayerState->origin, aliasList, fmt, v9, 0);
}

/*
==============
CgSoundSystem::PlayClientSoundAliasByName2
==============
*/
__int64 CgSoundSystem::PlayClientSoundAliasByName2(CgSoundSystem *this, const char *aliasname)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 943, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const char *))this->PlaySoundAliasByName2)(this, (unsigned int)p_predictedPlayerState->clientNum, &p_predictedPlayerState->origin, aliasname);
}

/*
==============
CgSoundSystem::PlayClientSoundAliasByName
==============
*/
__int64 CgSoundSystem::PlayClientSoundAliasByName(CgSoundSystem *this, const int soundString)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 934, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, _QWORD))this->PlaySoundAliasByName)(this, (unsigned int)p_predictedPlayerState->clientNum, &p_predictedPlayerState->origin, (unsigned int)soundString);
}

/*
==============
CgSoundSystem::PlayEntitySoundAlias
==============
*/
__int64 CgSoundSystem::PlayEntitySoundAlias(CgSoundSystem *this, const int entitynum, const SndAliasList *aliasList)
{
  centity_t *Entity; 
  unsigned int v9; 
  int v10; 
  int v11; 
  vec3_t trBase; 

  if ( !aliasList )
    return 0i64;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entitynum);
  Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+68h+var_40], xmm0
    vmovss  [rsp+68h+var_48], xmm0
  }
  v9 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)entitynum, &trBase, aliasList, v10, v11, 0);
  memset(&trBase, 0, sizeof(trBase));
  return v9;
}

/*
==============
CgSoundSystem::PlayEntitySoundAliasByLookup
==============
*/
unsigned int CgSoundSystem::PlayEntitySoundAliasByLookup(CgSoundSystem *this, const int entitynum, SndAliasLookup lookup)
{
  const SndAliasList *Alias; 

  if ( lookup.name && (Alias = SND_TryFindAlias(lookup.name)) != NULL )
    return CgSoundSystem::PlayEntitySoundAlias(this, entitynum, Alias);
  else
    return 0;
}

/*
==============
CgSoundSystem::PlayEntitySoundAliasByName
==============
*/
__int64 CgSoundSystem::PlayEntitySoundAliasByName(CgSoundSystem *this, const int entitynum, const int soundString)
{
  centity_t *Entity; 
  unsigned int v7; 
  vec3_t trBase; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entitynum);
  Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
  v7 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, _QWORD, __int64))this->PlaySoundAliasByName)(this, (unsigned int)entitynum, &trBase, (unsigned int)soundString, -2i64);
  memset(&trBase, 0, sizeof(trBase));
  return v7;
}

/*
==============
CgSoundSystem::PlayEntitySoundAliasFootstep
==============
*/
__int64 CgSoundSystem::PlayEntitySoundAliasFootstep(CgSoundSystem *this, const centity_t *cent, const SndAliasList *aliasList, const SndAliasList *ceilingAlist, int surfaceType, const int moveType, int isPlayerView, int isQuietMove, bool isLadder)
{
  const char *v20; 
  int ContextIndex; 
  unsigned int v23; 
  unsigned int v25; 
  char v35; 
  char v36; 
  __int64 result; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  vec3_t trBase; 
  __int64 v56; 
  vec3_t coneDir; 
  vec3_t point; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  v56 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 984, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 )
  {
    v20 = "no";
    if ( isPlayerView )
      v20 = "yes";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 985, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", "%s\n\tentnum %i, isPlayerView: %s", "CENextValid( cent )", cent->nextState.number, v20) )
      __debugbreak();
  }
  *(double *)&_XMM0 = CgSoundSystem::GetFootstepVolumeScale(this, cent, moveType, isPlayerView);
  __asm { vmovaps xmm6, xmm0 }
  Trajectory_GetTrBase(&cent->nextState.lerp.pos, &trBase);
  if ( !isLadder )
  {
    __asm
    {
      vmovss  xmm10, cs:__real@3f800000
      vmovss  dword ptr [rsp+128h+var_F8], xmm10
      vmovss  dword ptr [rsp+128h+var_100], xmm6
    }
    v25 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, int, _DWORD))this->PlaySurfaceSound)(this, (unsigned int)cent->nextState.number, &trBase, aliasList, surfaceType, v49, v51, 0);
    if ( ceilingAlist )
    {
      _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      __asm
      {
        vmovsd  xmm0, qword ptr [rax+38h]
        vmovsd  qword ptr [rsp+128h+point], xmm0
      }
      point.v[2] = _RAX->predictedPlayerState.origin.v[2];
      __asm
      {
        vxorps  xmm8, xmm8, xmm8
        vmovss  dword ptr [rsp+128h+coneDir], xmm8
        vmovss  dword ptr [rsp+128h+coneDir+4], xmm8
        vmovss  xmm0, cs:__real@bf800000
        vmovss  dword ptr [rsp+128h+coneDir+8], xmm0
      }
      _RDI = DVARFLT_cg_ceiling_footstep_coneHeight;
      if ( !DVARFLT_cg_ceiling_footstep_coneHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ceiling_footstep_coneHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm7, dword ptr [rdi+28h] }
      _RDI = DVARFLT_cg_ceiling_footstep_coneRadius;
      if ( !DVARFLT_cg_ceiling_footstep_coneRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ceiling_footstep_coneRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm9, dword ptr [rdi+28h]
        vcomiss xmm7, xmm8
      }
      if ( v35 | v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1019, ASSERT_TYPE_ASSERT, "(coneHeight > 0)", (const char *)&queryFormat, "coneHeight > 0") )
        __debugbreak();
      __asm { vdivss  xmm0, xmm9, xmm7; X }
      *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+128h+trBase+8]
        vaddss  xmm2, xmm1, cs:__real@c1400000
        vmovss  dword ptr [rsp+128h+trBase+8], xmm2
        vmovaps xmm3, xmm7; coneHeight
        vmovaps xmm2, xmm0; cosHalfFov
      }
      if ( PointInsideCone(&trBase, &coneDir, *(float *)&_XMM2, *(float *)&_XMM3, &point) )
      {
        __asm
        {
          vmovss  dword ptr [rsp+128h+var_F8], xmm10
          vmovss  dword ptr [rsp+128h+var_100], xmm6
        }
        ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, int, _DWORD))this->PlaySurfaceSound)(this, (unsigned int)cent->nextState.number, &trBase, ceilingAlist, surfaceType, v50, v52, 0);
      }
    }
    goto LABEL_24;
  }
  ContextIndex = SND_SV_FindContextIndex("climb", "ladder");
  v23 = 0;
  if ( ContextIndex != -1 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+128h+var_E8], xmm0
      vmovss  dword ptr [rsp+128h+var_F0], xmm6
    }
    v25 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, _DWORD, int, int))this->PlayContextSound)(this, (unsigned int)cent->nextState.number, &trBase, aliasList, surfaceType, ContextIndex, 0, v53, v54);
LABEL_24:
    v23 = v25;
  }
  memset(&trBase, 0, sizeof(trBase));
  result = v23;
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
  return result;
}

/*
==============
CgSoundSystem::PlaySoundAlias
==============
*/
__int64 CgSoundSystem::PlaySoundAlias(CgSoundSystem *this, __int64 entitynum, const vec3_t *origin, const SndAliasList *aliasList)
{
  int v6; 
  int v7; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_20], xmm0
    vmovss  [rsp+48h+var_28], xmm0
  }
  return ((__int64 (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, const SndAliasList *, int, int, _DWORD))this->PlaySoundAliasScaled)(this, entitynum, origin, aliasList, v6, v7, 0);
}

/*
==============
CgSoundSystem::PlaySoundAliasAsync
==============
*/
void CgSoundSystem::PlaySoundAliasAsync(CgSoundSystem *this, __int64 entitynum, const vec3_t *origin, const SndAliasList *aliasList)
{
  int v5; 
  int v6; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_20], xmm0
    vmovss  [rsp+48h+var_28], xmm0
  }
  ((void (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, const SndAliasList *, int, int, _DWORD))this->PlaySoundAliasScaledAsync)(this, entitynum, origin, aliasList, v5, v6, 0);
}

/*
==============
CgSoundSystem::PlaySoundAliasAtTime
==============
*/
__int64 CgSoundSystem::PlaySoundAliasAtTime(CgSoundSystem *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int msecWhenPlayed)
{
  int v11; 
  int v12; 

  if ( CG_Utils_TimeIsInThePast(this->m_localClientNum, msecWhenPlayed) )
    return 0i64;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_20], xmm0
    vmovss  [rsp+48h+var_28], xmm0
  }
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, const SndAliasList *, int, int, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)entitynum, origin, aliasList, v11, v12, 0);
}

/*
==============
CgSoundSystem::PlaySoundAliasAtViewHeight
==============
*/
__int64 CgSoundSystem::PlaySoundAliasAtViewHeight(CgSoundSystem *this, const int entityNum, const vec3_t *origin, int soundString)
{
  centity_t *Entity; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  CgSoundSystem_vtbl *v13; 
  __int64 v18; 
  int v19[4]; 

  _R14 = origin;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 873, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( Entity != (centity_t *)-400i64 && (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( Entity->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v18) = Entity->nextState.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 877, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v18, ComCharacterLimits::ms_gameData.m_characterCount) )
        __debugbreak();
    }
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 879, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
      __debugbreak();
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, Entity->nextState.clientNum);
    if ( CharacterInfo && !BG_GetSuitDef(CharacterInfo->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 884, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  xmm1, dword ptr [r14+4]
  }
  v13 = this->__vftable;
  __asm
  {
    vmovss  [rsp+98h+var_58], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebp
    vaddss  xmm0, xmm0, dword ptr [r14+8]
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  [rsp+98h+var_54], xmm1
  }
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, int *, _QWORD))v13->PlaySoundAliasByName)(this, (unsigned int)entityNum, v19, (unsigned int)soundString);
}

/*
==============
CgSoundSystem::PlaySoundAliasByLookup
==============
*/
__int64 CgSoundSystem::PlaySoundAliasByLookup(CgSoundSystem *this, const int entitynum, const vec3_t *origin, SndAliasLookup lookup)
{
  unsigned int (__fastcall *PlaySoundAliasScaled)(CgSoundSystem *, const int, const vec3_t *, const SndAliasList *, float, float, int); 
  SndAliasList *Alias; 
  int v11; 
  int v12; 

  PlaySoundAliasScaled = this->PlaySoundAliasScaled;
  Alias = SND_TryFindAlias(lookup.name);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_20], xmm0
    vmovss  [rsp+48h+var_28], xmm0
  }
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, int, int, _DWORD))PlaySoundAliasScaled)(this, (unsigned int)entitynum, origin, Alias, v11, v12, 0);
}

/*
==============
CgSoundSystem::PlaySoundAliasListAtViewHeight
==============
*/
__int64 CgSoundSystem::PlaySoundAliasListAtViewHeight(CgSoundSystem *this, const int entityNum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale)
{
  centity_t *Entity; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  CgSoundSystem_vtbl *v14; 
  int fmt; 
  __int64 v22; 
  int v23; 
  int v24[4]; 

  _R14 = origin;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 900, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( Entity != (centity_t *)-400i64 && (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( Entity->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v22) = Entity->nextState.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 904, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v22, ComCharacterLimits::ms_gameData.m_characterCount) )
        __debugbreak();
    }
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 906, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
      __debugbreak();
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, Entity->nextState.clientNum);
    if ( CharacterInfo && !BG_GetSuitDef(CharacterInfo->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 911, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  xmm1, dword ptr [r14+4]
  }
  v14 = this->__vftable;
  __asm
  {
    vmovss  [rsp+98h+var_58], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebp
    vaddss  xmm0, xmm0, dword ptr [r14+8]
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+98h+var_54], xmm1
    vmovss  xmm1, [rsp+98h+volumeScale]
    vmovss  dword ptr [rsp+98h+var_70], xmm0
    vmovss  dword ptr [rsp+98h+fmt], xmm1
  }
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, int *, const SndAliasList *, int, int, _DWORD))v14->PlaySoundAliasScaled)(this, (unsigned int)entityNum, v24, aliasList, fmt, v23, 0);
}

/*
==============
CgSoundSystem::PlayWhizbyAndImpactSfx_Internal
==============
*/
void CgSoundSystem::PlayWhizbyAndImpactSfx_Internal(CgSoundSystem *this, const CgSfxImpactInfo *inSfxInfo, bool playWhizby, int whizbyEnt, const vec3_t *initialPos, const vec3_t *start, const vec3_t *end, int surfType, const Weapon *inWeapon, bool isAlternate, const int hitImpactDelayOverride, SndHitmarkerType hitmarkerType)
{
  int NewBulletEvent; 
  cg_t *LocalClientGlobals; 
  CgBallistics *System; 
  bool v29; 
  const RefdefView *p_view; 
  const WeaponSFXPackage *SfxPackage; 
  char v69; 
  char v70; 
  int v88; 
  const SndAliasList *hitSound; 
  int impactEnt; 
  const WeaponSFXPackage *v91; 
  float radius; 
  float impactSound; 
  vec3_t outOrg; 
  vec3_t *inImpactPos; 
  Weapon *r_weapon; 
  vec3_t v108; 
  __int64 v109; 
  vec3_t inBulletDir; 
  vec3_t inSndCenterPt; 
  char v112; 
  void *retaddr; 

  _RAX = &retaddr;
  v109 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  _RSI = start;
  inImpactPos = (vec3_t *)end;
  r_weapon = (Weapon *)inWeapon;
  NewBulletEvent = -1;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  System = CgBallistics::GetSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 565, ASSERT_TYPE_ASSERT, "(ballisticSystem)", (const char *)&queryFormat, "ballisticSystem") )
    __debugbreak();
  v29 = System->ShouldFireBallisticBullet(System, r_weapon, isAlternate, whizbyEnt);
  if ( playWhizby && !v29 )
  {
    if ( whizbyEnt == LocalClientGlobals->clientNum )
    {
      p_view = &LocalClientGlobals->refdef.view;
      RefdefView_GetOrg(p_view, &outOrg);
      __asm
      {
        vmovss  xmm9, dword ptr [rsp+180h+outOrg+8]
        vmovss  xmm10, dword ptr [rsp+180h+outOrg+4]
        vmovss  xmm11, dword ptr [rsp+180h+outOrg]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm11, dword ptr [rsi]
        vmovss  dword ptr [rsp+180h+outOrg], xmm11
        vmovss  xmm10, dword ptr [rsi+4]
        vmovss  dword ptr [rsp+180h+outOrg+4], xmm10
        vmovss  xmm9, dword ptr [rsi+8]
        vmovss  dword ptr [rsp+180h+outOrg+8], xmm9
      }
      p_view = &LocalClientGlobals->refdef.view;
    }
    RefdefView_GetOrg(p_view, &v108);
    _R15 = inImpactPos;
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vsubss  xmm4, xmm0, xmm11
      vmovss  xmm1, dword ptr [r15+4]
      vsubss  xmm6, xmm1, xmm10
      vmovss  xmm0, dword ptr [r15+8]
      vsubss  xmm7, xmm0, xmm9
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm8, xmm2, xmm2
      vcmpless xmm0, xmm8, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm8, xmm2, xmm0
      vdivss  xmm0, xmm2, xmm1
      vmulss  xmm5, xmm4, xmm0
      vmovss  dword ptr [rbp+80h+inBulletDir], xmm5
      vmulss  xmm1, xmm6, xmm0
      vmovss  dword ptr [rbp+80h+inBulletDir+4], xmm1
      vmulss  xmm4, xmm7, xmm0
      vmovss  dword ptr [rbp+80h+inBulletDir+8], xmm4
      vmovss  xmm14, dword ptr [rsp+180h+var_108]
      vsubss  xmm2, xmm14, xmm11
      vmovss  xmm12, dword ptr [rsp+180h+var_108+4]
      vsubss  xmm0, xmm12, xmm10
      vmovss  xmm13, dword ptr [rbp+80h+var_108+8]
      vsubss  xmm3, xmm13, xmm9
      vmulss  xmm1, xmm0, xmm1
      vmulss  xmm0, xmm2, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm4
      vaddss  xmm7, xmm2, xmm1
    }
    SfxPackage = BG_GetSfxPackage(r_weapon, isAlternate);
    __asm { vcomiss xmm7, xmm8 }
    if ( v69 | v70 )
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rbp+80h+inBulletDir]
        vaddss  xmm6, xmm1, xmm11
        vmulss  xmm0, xmm7, dword ptr [rbp+80h+inBulletDir+4]
        vaddss  xmm4, xmm0, xmm10
        vmulss  xmm2, xmm7, dword ptr [rbp+80h+inBulletDir+8]
        vaddss  xmm0, xmm2, xmm9
        vsubss  xmm3, xmm6, xmm14
        vsubss  xmm5, xmm4, xmm12
        vsubss  xmm4, xmm0, xmm13
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm8, xmm2, xmm2
        vmovss  dword ptr [rbp+80h+inSndCenterPt], xmm6
        vaddss  xmm0, xmm5, xmm12
        vmovss  dword ptr [rbp+80h+inSndCenterPt+4], xmm0
        vaddss  xmm1, xmm4, xmm13
        vmovss  dword ptr [rbp+80h+inSndCenterPt+8], xmm1
      }
      NewBulletEvent = SND_GetNewBulletEvent();
      if ( NewBulletEvent != -1 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+180h+impactSound], xmm7
          vmovss  [rsp+180h+radius], xmm8
        }
        SND_AddWhizbyToBulletEvent(NewBulletEvent, (const LocalClientNum_t)this->m_localClientNum, SfxPackage, &inSndCenterPt, &inBulletDir, radius, impactSound);
      }
    }
    if ( inSfxInfo->hitSound )
    {
      if ( NewBulletEvent == -1 )
      {
        NewBulletEvent = SND_GetNewBulletEvent();
        if ( NewBulletEvent == -1 )
        {
LABEL_18:
          memset(&v108, 0, sizeof(v108));
          memset(&outOrg, 0, sizeof(outOrg));
          goto LABEL_22;
        }
      }
      SND_AddImpactToBulletEvent(NewBulletEvent, (const LocalClientNum_t)this->m_localClientNum, SfxPackage, start, _R15, inSfxInfo->impactEnt, inSfxInfo->hitSound, surfType, hitImpactDelayOverride, hitmarkerType);
    }
    if ( NewBulletEvent != -1 )
      SND_StartBulletEvent(NewBulletEvent);
    goto LABEL_18;
  }
  if ( inSfxInfo->hitSound )
  {
    v88 = SND_GetNewBulletEvent();
    if ( v88 != -1 )
    {
      hitSound = inSfxInfo->hitSound;
      impactEnt = inSfxInfo->impactEnt;
      v91 = BG_GetSfxPackage(r_weapon, isAlternate);
      SND_AddImpactToBulletEvent(v88, (const LocalClientNum_t)this->m_localClientNum, v91, start, inImpactPos, impactEnt, hitSound, surfType, hitImpactDelayOverride, hitmarkerType);
      SND_StartBulletEvent(v88);
    }
  }
LABEL_22:
  _R11 = &v112;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

/*
==============
CgSoundSystem::StopClientSoundAliasByName
==============
*/
void CgSoundSystem::StopClientSoundAliasByName(CgSoundSystem *this, const int soundString)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1074, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  this->StopSoundAliasByName(this, p_predictedPlayerState->clientNum, soundString);
}

/*
==============
CgSoundSystem::StopSoundAlias
==============
*/
void CgSoundSystem::StopSoundAlias(CgSoundSystem *this, const int entitynum, SndAliasLookup lookup)
{
  unsigned __int64 SndEntHandle; 
  SndAliasLookup sndAliasLookup; 

  if ( lookup.name )
  {
    sndAliasLookup.name = lookup.name;
    if ( !CG_EntityWorkers_TryAddStopSoundAliasRequest(entitynum, &sndAliasLookup) )
    {
      SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
      SND_StopSoundAliasOnEnt(SndEntHandle, sndAliasLookup.name);
    }
  }
}

/*
==============
CgSoundSystem::StopSoundChannelOnEnt
==============
*/
void CgSoundSystem::StopSoundChannelOnEnt(CgSoundSystem *this, const int entitynum, const int entSndChannel)
{
  unsigned __int64 SndEntHandle; 
  __int64 v7; 
  unsigned int EntChannelCount; 

  if ( entSndChannel == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1104, ASSERT_TYPE_ASSERT, "(entSndChannel != (0xFFFFFFFF))", (const char *)&queryFormat, "entSndChannel != SND_ENTCHANNEL_NONE") )
    __debugbreak();
  if ( entSndChannel >= SND_GetEntChannelCount() )
  {
    EntChannelCount = SND_GetEntChannelCount();
    LODWORD(v7) = entSndChannel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1105, ASSERT_TYPE_ASSERT, "(unsigned)( entSndChannel ) < (unsigned)( SND_GetEntChannelCount() )", "entSndChannel doesn't index SND_GetEntChannelCount()\n\t%i not in [0, %i)", v7, EntChannelCount) )
      __debugbreak();
  }
  if ( !CG_EntityWorkers_TryAddStopSoundOnEntChannelRequest(entitynum, entSndChannel) )
  {
    SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
    SND_StopSoundChannelOnEnt(SndEntHandle, entSndChannel);
  }
}

/*
==============
CgSoundSystem::StopSoundsOnEnt
==============
*/
void CgSoundSystem::StopSoundsOnEnt(CgSoundSystem *this, const int entitynum)
{
  unsigned __int64 SndEntHandle; 

  if ( !CG_EntityWorkers_TryAddStopSoundOnEntRequest(entitynum) )
  {
    SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
    SND_StopSoundsOnEnt(SndEntHandle);
    CG_SndKillAutoSimEntNum(entitynum, 1);
  }
}

/*
==============
CgSoundSystem::UpdateBreathingSounds
==============
*/
void CgSoundSystem::UpdateBreathingSounds(CgSoundSystem *this)
{
  CG_SND_UpdatePlayerBreathSystem(this->m_localClientNum);
}

