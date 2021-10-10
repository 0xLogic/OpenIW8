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
  const WeaponDef *v11; 
  CgWeaponMap *Instance; 
  __int64 v13; 
  __int64 v14; 
  double v15; 
  AdsSoundState adsSoundState; 
  __int32 v17; 
  const SndAliasList *v18; 
  unsigned __int64 SndEntHandle; 
  unsigned __int64 v20; 
  const SndAliasList *WeaponSoundWithWeaponSfxPackageFallback; 
  int number; 
  int centa; 
  CgSoundSystem *centb; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 434, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  number = cent->nextState.number;
  centa = LocalClientGlobals->predictedPlayerState.clientNum;
  v11 = BG_WeaponDef(weapon, isAlternate);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 441, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v11->sfxPackage )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    v13 = 1i64;
    v14 = 1i64;
    if ( centa == number && !ps )
    {
      ps = &LocalClientGlobals->predictedPlayerState;
      if ( !LocalClientGlobals->renderingThirdPerson && !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
        return;
      v13 = 0i64;
      v14 = 0i64;
    }
    centb = CgSoundSystem::GetSoundSystem(localClientNum);
    if ( !ps )
      return;
    v15 = BG_WeaponADSFractionAffectedByReload(Instance, ps);
    adsSoundState = LocalClientGlobals->adsSoundState;
    if ( adsSoundState == ADSSS_NOT_IN_ADS )
    {
      if ( *(float *)&v15 <= 0.0 )
        return;
      WeaponSoundWithWeaponSfxPackageFallback = BG_GetWeaponSoundWithWeaponSfxPackageFallback(weapon, isAlternate, 8 * v14 + 576);
      CgSoundSystem::PlayEntitySoundAlias(centb, cent->nextState.number, WeaponSoundWithWeaponSfxPackageFallback);
      goto LABEL_25;
    }
    v17 = adsSoundState - 1;
    if ( v17 )
    {
      if ( v17 == 1 && *(float *)&v15 < 1.0 )
      {
        v18 = BG_GetWeaponSoundWithWeaponSfxPackageFallback(weapon, isAlternate, 8 * v13 + 592);
        CgSoundSystem::PlayEntitySoundAlias(centb, cent->nextState.number, v18);
        SndEntHandle = CG_GenerateSndEntHandle(localClientNum, cent->nextState.number);
        SND_SetEntContext(SndEntHandle, v11->sfxPackage->adsContextType, 0, 0.0);
LABEL_25:
        LocalClientGlobals->adsSoundState = ADSSS_TRANSITIONING_ADS;
      }
    }
    else if ( *(float *)&v15 == 1.0 )
    {
      v20 = CG_GenerateSndEntHandle(localClientNum, cent->nextState.number);
      SND_SetEntContext(v20, v11->sfxPackage->adsContextType, v11->sfxPackage->adsContextValue, 0.0);
      LocalClientGlobals->adsSoundState = ADSSS_IN_ADS;
    }
    else if ( *(float *)&v15 == 0.0 )
    {
      LocalClientGlobals->adsSoundState = ADSSS_NOT_IN_ADS;
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
  __int64 v5; 
  __int64 v6; 
  CgWeaponMap *v7; 
  const Weapon *ViewmodelWeapon; 
  bool inAltWeaponMode; 
  const dvar_t *v10; 
  const char *v11; 
  int number; 
  cg_t *v13; 
  int clientNum; 
  CgSoundSystem *SoundSystem; 
  weapFireType_t WeaponFireType; 
  int WeaponHandForViewWeapon; 
  __int64 v18; 
  __int64 v19; 
  int *p_weaponState; 
  __int64 v21; 
  unsigned __int64 v22; 
  const SndAliasList *WeaponSoundWithFallback; 
  unsigned __int8 v24; 
  const SndAliasList *v25; 
  const char *name; 
  SndAliasList *Alias; 
  const SndAliasList *v28; 
  const SndAliasList *v29; 
  const char *v30; 
  const char *v31; 
  __int64 v32; 
  __int64 v33; 
  CgWeaponSystem *v34; 
  CgCompassSystem *v35; 
  BgWeaponMap *weaponMap; 
  vec3_t outOrigin; 
  __int64 v38; 
  unsigned __int8 v39; 
  cg_t *LocalClientGlobals; 
  char v41; 
  unsigned int v42; 
  Weapon *r_weapon; 

  v38 = -2i64;
  v5 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 265, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v6 = v5;
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v7 = CgWeaponMap::ms_instance[v5];
  weaponMap = v7;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v5) )
    __debugbreak();
  if ( (unsigned int)v5 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v33) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v32) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v32, v33) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v5] )
  {
    LODWORD(v33) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v33) )
      __debugbreak();
  }
  v34 = CgWeaponSystem::ms_weaponSystemArray[v5];
  if ( ps )
  {
    ViewmodelWeapon = BG_GetViewmodelWeapon(v7, ps);
    r_weapon = (Weapon *)ViewmodelWeapon;
    inAltWeaponMode = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu));
  }
  else
  {
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    ViewmodelWeapon = BgWeaponMap::GetWeapon(v7, cent->nextState.weaponHandle);
    r_weapon = (Weapon *)ViewmodelWeapon;
    inAltWeaponMode = cent->nextState.inAltWeaponMode;
  }
  *(_QWORD *)outOrigin.v = BG_WeaponDef(ViewmodelWeapon, inAltWeaponMode);
  if ( !*(_QWORD *)outOrigin.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 275, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
  {
    LODWORD(v33) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", v33) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v33) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v32) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v32, v33) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[v5] )
  {
    LODWORD(v33) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v33) )
      __debugbreak();
  }
  v35 = CgCompassSystem::ms_compassSystemArray[v5];
  if ( BG_IsSilenced(ViewmodelWeapon, inAltWeaponMode) )
  {
    v10 = DCONST_DVARFLT_compassSilencedSoundPingDuration;
    if ( DCONST_DVARFLT_compassSilencedSoundPingDuration )
      goto LABEL_48;
    v11 = "compassSilencedSoundPingDuration";
  }
  else
  {
    v10 = DCONST_DVARMPSPFLT_compassSoundPingDuration;
    if ( DCONST_DVARMPSPFLT_compassSoundPingDuration )
      goto LABEL_48;
    v11 = "compassSoundPingDuration";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v11) )
    __debugbreak();
LABEL_48:
  Dvar_CheckFrontendServerThread(v10);
  v42 = (int)(float)(v10->current.value * 1000.0);
  number = cent->nextState.number;
  v13 = LocalClientGlobals;
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v39 = 1;
  v41 = 1;
  if ( clientNum == number )
  {
    v39 = 1;
    v41 = 1;
    if ( !ps )
    {
      ps = &v13->predictedPlayerState;
      if ( !v13->renderingThirdPerson && !BG_IsThirdPersonMode(weaponMap, &v13->predictedPlayerState) )
        return;
      v39 = 0;
      v41 = 0;
    }
  }
  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v5);
  WeaponFireType = BG_GetWeaponFireType(r_weapon, inAltWeaponMode);
  if ( !BG_IsMeleeOnlyWeapon(r_weapon, inAltWeaponMode) && (WeaponFireType == WEAPON_FIRETYPE_BEAM || WeaponFireType == WEAPON_FIRETYPE_FULLAUTO) && *(_QWORD *)(*(_QWORD *)outOrigin.v + 520i64) )
  {
    if ( clientNum == number )
    {
      if ( !ps )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 240, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
      }
      if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(CgWeaponMap::ms_instance[v6], ps);
      v18 = WeaponHandForViewWeapon;
      if ( WeaponHandForViewWeapon >= 0 )
      {
        v19 = 0i64;
        p_weaponState = &ps->weapState[0].weaponState;
        v21 = 0xC01000000030001i64;
        while ( 1 )
        {
          v22 = *p_weaponState;
          if ( (unsigned int)v22 > 0x3B || !_bittest64(&v21, v22) )
            break;
          ++v19;
          p_weaponState += 20;
          if ( v19 > v18 )
            goto LABEL_71;
        }
LABEL_79:
        if ( cent->clientSoundState.playedBeamFireSound )
        {
          name = cent->clientSoundState.stopFireSoundAlias.name;
          if ( name )
          {
            Alias = SND_TryFindAlias(name);
            if ( Alias )
              goto LABEL_97;
            goto LABEL_98;
          }
        }
        return;
      }
LABEL_71:
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xAu) )
        goto LABEL_79;
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      if ( cent->clientSoundState.playedBeamFireSound )
      {
        v24 = v41;
      }
      else
      {
        WeaponSoundWithFallback = BG_GetWeaponSoundWithFallback(r_weapon, inAltWeaponMode, 8i64 * v39 + 160);
        ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, WeaponSoundWithFallback, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
        cent->clientSoundState.stopFireSoundAlias = BG_GetWeaponSoundLookup(r_weapon, inAltWeaponMode, 8i64 * v39 + 192);
        cent->clientSoundState.playedBeamFireSound = 1;
        v24 = v39;
      }
      v25 = BG_GetWeaponSoundWithFallback(r_weapon, inAltWeaponMode, 8i64 * v24 + 176);
      ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, v25, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
      if ( v25 )
      {
        if ( v34->ShouldWeaponPing(v34, cent, r_weapon, inAltWeaponMode, &outOrigin) )
          v35->AddWeaponPingInfo(v35, cent, &outOrigin, v42);
      }
    }
    else
    {
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xAu) )
      {
        if ( cent->clientSoundState.playedBeamFireSound )
        {
          v30 = cent->clientSoundState.stopFireSoundAlias.name;
          if ( v30 )
          {
            Alias = SND_TryFindAlias(v30);
            if ( Alias )
              goto LABEL_97;
            goto LABEL_98;
          }
        }
        return;
      }
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      if ( !cent->clientSoundState.playedBeamFireSound )
      {
        v28 = BG_GetWeaponSoundWithFallback(r_weapon, inAltWeaponMode, 160i64);
        ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, v28, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
        cent->clientSoundState.stopFireSoundAlias = BG_GetWeaponSoundLookup(r_weapon, inAltWeaponMode, 192i64);
        cent->clientSoundState.playedBeamFireSound = 1;
      }
      v29 = BG_GetWeaponSoundWithFallback(r_weapon, inAltWeaponMode, 176i64);
      ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, v29, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
      if ( v29 && v34->ShouldWeaponPing(v34, cent, r_weapon, inAltWeaponMode, &outOrigin) )
        v35->AddWeaponPingInfo(v35, cent, &outOrigin, v42);
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
    return;
  }
  if ( cent->clientSoundState.playedBeamFireSound )
  {
    v31 = cent->clientSoundState.stopFireSoundAlias.name;
    if ( v31 )
    {
      Alias = SND_TryFindAlias(v31);
      if ( Alias )
      {
LABEL_97:
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, Alias, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
LABEL_98:
      cent->clientSoundState.playedBeamFireSound = 0;
    }
  }
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
  unsigned __int16 v6; 
  unsigned __int64 SndEntHandle; 
  __int64 v10; 

  v6 = paramBitField;
  if ( !changeParameterFunction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1130, ASSERT_TYPE_ASSERT, "(changeParameterFunction)", (const char *)&queryFormat, "changeParameterFunction") )
    __debugbreak();
  SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
  ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))changeParameterFunction)(SndEntHandle, v10, v6);
}

/*
==============
CgSoundSystem::GetEquipmentVolumeScale
==============
*/
float CgSoundSystem::GetEquipmentVolumeScale(CgSoundSystem *this, const centity_t *cent, int isPlayerView)
{
  double FootstepVolumeScale; 
  CgStatic *LocalClientStatics; 
  const char *v8; 
  float v9; 
  const characterInfo_t *CharacterInfo; 
  const dvar_t *v11; 
  const char *v12; 
  double Float_Internal_DebugName; 

  FootstepVolumeScale = CG_GameInterface_GetFootstepVolumeScale((const LocalClientNum_t)this->m_localClientNum, cent, isPlayerView);
  if ( *(float *)&FootstepVolumeScale < 0.0 )
  {
    CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    if ( (cent->flags & 1) == 0 )
    {
      v8 = "no";
      if ( isPlayerView )
        v8 = "yes";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1265, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", "%s\n\tentnum %i, isPlayerView: %s", "CENextValid( cent )", cent->nextState.number, v8) )
        __debugbreak();
    }
    v9 = FLOAT_1_0;
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.number);
    if ( CharacterInfo && BG_HasPerk(&CharacterInfo->perks, 0x1Fu) )
    {
      if ( isPlayerView )
      {
        v11 = DCONST_DVARFLT_perk_equipmentVolumeQuietPlayer;
        v12 = "perk_equipmentVolumeQuietPlayer";
      }
      else
      {
        v11 = DCONST_DVARFLT_perk_equipmentVolumeQuietNPC;
        v12 = "perk_equipmentVolumeQuietNPC";
      }
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v11, v12);
      v9 = *(float *)&Float_Internal_DebugName;
    }
    *(float *)&FootstepVolumeScale = v9;
  }
  return *(float *)&FootstepVolumeScale;
}

/*
==============
CgSoundSystem::GetFootstepVolumeScale
==============
*/
float CgSoundSystem::GetFootstepVolumeScale(CgSoundSystem *this, const centity_t *cent, const int moveType, int isPlayerView)
{
  double FootstepVolumeScale; 
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const char *v12; 
  const characterInfo_t *CharacterInfo; 
  const dvar_t *v15; 
  const char *v16; 
  double Float_Internal_DebugName; 
  const characterInfo_t *v18; 
  const characterInfo_t *v19; 
  team_t team; 
  team_t v21; 
  const dvar_t *v22; 
  const char *v23; 
  double v24; 

  FootstepVolumeScale = CG_GameInterface_GetFootstepVolumeScale((const LocalClientNum_t)this->m_localClientNum, cent, isPlayerView);
  if ( *(float *)&FootstepVolumeScale < 0.0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    if ( (cent->flags & 1) == 0 )
    {
      v12 = "no";
      if ( isPlayerView )
        v12 = "yes";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1172, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", "%s\n\tentnum %i, isPlayerView: %s", "CENextValid( cent )", cent->nextState.number, v12) )
        __debugbreak();
    }
    *(float *)&_XMM6 = FLOAT_1_0;
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
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerCreep;
            v16 = "perk_footstepVolumeQuietPlayerCreep";
          }
          else
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCCreep;
            v16 = "perk_footstepVolumeQuietNPCCreep";
          }
          break;
        case 1:
          if ( isPlayerView )
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerWalk;
            v16 = "perk_footstepVolumeQuietPlayerWalk";
          }
          else
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCWalk;
            v16 = "perk_footstepVolumeQuietNPCWalk";
          }
          break;
        case 2:
          if ( isPlayerView )
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerRun;
            v16 = "perk_footstepVolumeQuietPlayerRun";
          }
          else
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCRun;
            v16 = "perk_footstepVolumeQuietNPCRun";
          }
          break;
        case 3:
          if ( isPlayerView )
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerSprint;
            v16 = "perk_footstepVolumeQuietPlayerSprint";
          }
          else
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCSprint;
            v16 = "perk_footstepVolumeQuietNPCSprint";
          }
          break;
        case 4:
          if ( isPlayerView )
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerSuperSprint;
            v16 = "perk_footstepVolumeQuietPlayerSuperSprint";
          }
          else
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCSuperSprint;
            v16 = "perk_footstepVolumeQuietNPCSuperSprint";
          }
          break;
        case 5:
          if ( isPlayerView )
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayerProne;
            v16 = "perk_footstepVolumeQuietPlayerProne";
          }
          else
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietNPCProne;
            v16 = "perk_footstepVolumeQuietNPCProne";
          }
          break;
        default:
          if ( isPlayerView )
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayer;
            v16 = "perk_footstepVolumeQuietPlayer";
          }
          else
          {
            v15 = DCONST_DVARFLT_perk_footstepVolumeQuietNPC;
            v16 = "perk_footstepVolumeQuietNPC";
          }
          break;
      }
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v15, v16);
      LODWORD(_XMM6) = LODWORD(Float_Internal_DebugName);
      if ( !isPlayerView )
      {
LABEL_53:
        if ( BG_HasPerk(&LocalClientGlobals->predictedPlayerState.perks, 0x28u) )
        {
          if ( isPlayerView )
          {
            v22 = DVARFLT_perk_footstepVolumePlayer;
            v23 = "perk_footstepVolumePlayer";
          }
          else
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_footstepVolumeSelectiveHearingMin, "perk_footstepVolumeSelectiveHearingMin");
            __asm { vmaxss  xmm6, xmm0, xmm6 }
            v18 = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
            if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1231, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
              __debugbreak();
            v19 = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.clientNum);
            if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1234, ASSERT_TYPE_ASSERT, "(entCI)", (const char *)&queryFormat, "entCI") )
              __debugbreak();
            team = v18->team;
            v21 = v19->team;
            if ( cent == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
              __debugbreak();
            if ( team && team == v21 )
            {
              v22 = DVARFLT_perk_footstepVolumeAlly;
              v23 = "perk_footstepVolumeAlly";
            }
            else
            {
              v22 = DVARFLT_perk_footstepVolumeEnemy;
              v23 = "perk_footstepVolumeEnemy";
            }
          }
          v24 = Dvar_GetFloat_Internal_DebugName(v22, v23);
          *(float *)&_XMM6 = *(float *)&_XMM6 * *(float *)&v24;
        }
      }
    }
    LODWORD(FootstepVolumeScale) = _XMM6;
  }
  return *(float *)&FootstepVolumeScale;
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

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 925, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)p_predictedPlayerState->clientNum, &p_predictedPlayerState->origin, aliasList, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
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
  unsigned int v8; 
  vec3_t trBase; 

  if ( !aliasList )
    return 0i64;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entitynum);
  Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
  v8 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)entitynum, &trBase, aliasList, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
  memset(&trBase, 0, sizeof(trBase));
  return v8;
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
  const char *v13; 
  double FootstepVolumeScale; 
  int v15; 
  int ContextIndex; 
  unsigned int v17; 
  unsigned int v18; 
  const dvar_t *v19; 
  float value; 
  const dvar_t *v21; 
  float v22; 
  float v23; 
  float v24; 
  vec3_t trBase; 
  __int64 v27; 
  vec3_t coneDir; 
  vec3_t point; 

  v27 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 984, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 )
  {
    v13 = "no";
    if ( isPlayerView )
      v13 = "yes";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 985, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", "%s\n\tentnum %i, isPlayerView: %s", "CENextValid( cent )", cent->nextState.number, v13) )
      __debugbreak();
  }
  FootstepVolumeScale = CgSoundSystem::GetFootstepVolumeScale(this, cent, moveType, isPlayerView);
  v15 = LODWORD(FootstepVolumeScale);
  Trajectory_GetTrBase(&cent->nextState.lerp.pos, &trBase);
  if ( !isLadder )
  {
    v18 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, _DWORD, _DWORD, _DWORD))this->PlaySurfaceSound)(this, (unsigned int)cent->nextState.number, &trBase, aliasList, surfaceType, LODWORD(FootstepVolumeScale), LODWORD(FLOAT_1_0), 0);
    if ( ceilingAlist )
    {
      point = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState.origin;
      coneDir.v[0] = 0.0;
      coneDir.v[1] = 0.0;
      coneDir.v[2] = FLOAT_N1_0;
      v19 = DVARFLT_cg_ceiling_footstep_coneHeight;
      if ( !DVARFLT_cg_ceiling_footstep_coneHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ceiling_footstep_coneHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      value = v19->current.value;
      v21 = DVARFLT_cg_ceiling_footstep_coneRadius;
      if ( !DVARFLT_cg_ceiling_footstep_coneRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ceiling_footstep_coneRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      v22 = v21->current.value;
      if ( value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 1019, ASSERT_TYPE_ASSERT, "(coneHeight > 0)", (const char *)&queryFormat, "coneHeight > 0") )
        __debugbreak();
      v23 = atanf_0(v22 / value);
      v24 = cosf_0(v23);
      trBase.v[2] = trBase.v[2] + -12.0;
      if ( PointInsideCone(&trBase, &coneDir, v24, value, &point) )
        ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, _DWORD, _DWORD))this->PlaySurfaceSound)(this, (unsigned int)cent->nextState.number, &trBase, ceilingAlist, surfaceType, v15, LODWORD(FLOAT_1_0), 0);
    }
    goto LABEL_24;
  }
  ContextIndex = SND_SV_FindContextIndex("climb", "ladder");
  v17 = 0;
  if ( ContextIndex != -1 )
  {
    v18 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, int, int, _DWORD, _DWORD, _DWORD))this->PlayContextSound)(this, (unsigned int)cent->nextState.number, &trBase, aliasList, surfaceType, ContextIndex, 0, LODWORD(FootstepVolumeScale), LODWORD(FLOAT_1_0));
LABEL_24:
    v17 = v18;
  }
  memset(&trBase, 0, sizeof(trBase));
  return v17;
}

/*
==============
CgSoundSystem::PlaySoundAlias
==============
*/
__int64 CgSoundSystem::PlaySoundAlias(CgSoundSystem *this, __int64 entitynum, const vec3_t *origin, const SndAliasList *aliasList)
{
  return ((__int64 (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD))this->PlaySoundAliasScaled)(this, entitynum, origin, aliasList, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
}

/*
==============
CgSoundSystem::PlaySoundAliasAsync
==============
*/
void CgSoundSystem::PlaySoundAliasAsync(CgSoundSystem *this, __int64 entitynum, const vec3_t *origin, const SndAliasList *aliasList)
{
  ((void (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD))this->PlaySoundAliasScaledAsync)(this, entitynum, origin, aliasList, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
}

/*
==============
CgSoundSystem::PlaySoundAliasAtTime
==============
*/
__int64 CgSoundSystem::PlaySoundAliasAtTime(CgSoundSystem *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int msecWhenPlayed)
{
  if ( CG_Utils_TimeIsInThePast(this->m_localClientNum, msecWhenPlayed) )
    return 0i64;
  else
    return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)entitynum, origin, aliasList, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
}

/*
==============
CgSoundSystem::PlaySoundAliasAtViewHeight
==============
*/
__int64 CgSoundSystem::PlaySoundAliasAtViewHeight(CgSoundSystem *this, const int entityNum, const vec3_t *origin, int soundString)
{
  int viewheight_stand; 
  centity_t *Entity; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  const SuitDef *SuitDef; 
  float v13; 
  CgSoundSystem_vtbl *v14; 
  __int64 v16; 
  int v17[4]; 

  viewheight_stand = 60;
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
      LODWORD(v16) = Entity->nextState.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 877, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v16, ComCharacterLimits::ms_gameData.m_characterCount) )
        __debugbreak();
    }
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 879, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
      __debugbreak();
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, Entity->nextState.clientNum);
    if ( CharacterInfo )
    {
      SuitDef = BG_GetSuitDef(CharacterInfo->suitIndex);
      if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 884, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      viewheight_stand = SuitDef->viewheight_stand;
    }
  }
  v13 = origin->v[1];
  v14 = this->__vftable;
  v17[0] = LODWORD(origin->v[0]);
  *(float *)&v17[2] = (float)viewheight_stand + origin->v[2];
  *(float *)&v17[1] = v13;
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, int *, _QWORD))v14->PlaySoundAliasByName)(this, (unsigned int)entityNum, v17, (unsigned int)soundString);
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

  PlaySoundAliasScaled = this->PlaySoundAliasScaled;
  Alias = SND_TryFindAlias(lookup.name);
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD))PlaySoundAliasScaled)(this, (unsigned int)entitynum, origin, Alias, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
}

/*
==============
CgSoundSystem::PlaySoundAliasListAtViewHeight
==============
*/
__int64 CgSoundSystem::PlaySoundAliasListAtViewHeight(CgSoundSystem *this, const int entityNum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale)
{
  int viewheight_stand; 
  centity_t *Entity; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  const SuitDef *SuitDef; 
  float v14; 
  CgSoundSystem_vtbl *v15; 
  __int64 v17; 
  int v18[4]; 

  viewheight_stand = 60;
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
      LODWORD(v17) = Entity->nextState.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 904, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v17, ComCharacterLimits::ms_gameData.m_characterCount) )
        __debugbreak();
    }
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 906, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
      __debugbreak();
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, Entity->nextState.clientNum);
    if ( CharacterInfo )
    {
      SuitDef = BG_GetSuitDef(CharacterInfo->suitIndex);
      if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 911, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      viewheight_stand = SuitDef->viewheight_stand;
    }
  }
  v14 = origin->v[1];
  v15 = this->__vftable;
  v18[0] = LODWORD(origin->v[0]);
  *(float *)&v18[2] = (float)viewheight_stand + origin->v[2];
  *(float *)&v18[1] = v14;
  return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, int *, const SndAliasList *, _DWORD, _DWORD, _DWORD))v15->PlaySoundAliasScaled)(this, (unsigned int)entityNum, v18, aliasList, LODWORD(volumeScale), LODWORD(FLOAT_1_0), 0);
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
  bool v18; 
  const RefdefView *p_view; 
  float v20; 
  float v21; 
  float v22; 
  vec3_t *v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  float v27; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  const WeaponSFXPackage *SfxPackage; 
  float v36; 
  float v37; 
  float radius; 
  int v39; 
  const SndAliasList *impactSound; 
  int impactEnt; 
  const WeaponSFXPackage *v42; 
  vec3_t outOrg; 
  vec3_t *inImpactPos; 
  Weapon *r_weapon; 
  vec3_t v47; 
  __int64 v48; 
  vec3_t inBulletDir; 
  vec3_t inSndCenterPt; 

  v48 = -2i64;
  inImpactPos = (vec3_t *)end;
  r_weapon = (Weapon *)inWeapon;
  NewBulletEvent = -1;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  System = CgBallistics::GetSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.cpp", 565, ASSERT_TYPE_ASSERT, "(ballisticSystem)", (const char *)&queryFormat, "ballisticSystem") )
    __debugbreak();
  v18 = System->ShouldFireBallisticBullet(System, r_weapon, isAlternate, whizbyEnt);
  if ( playWhizby && !v18 )
  {
    if ( whizbyEnt == LocalClientGlobals->clientNum )
    {
      p_view = &LocalClientGlobals->refdef.view;
      RefdefView_GetOrg(p_view, &outOrg);
      v20 = outOrg.v[2];
      v21 = outOrg.v[1];
      v22 = outOrg.v[0];
    }
    else
    {
      v22 = start->v[0];
      outOrg.v[0] = start->v[0];
      v21 = start->v[1];
      outOrg.v[1] = v21;
      v20 = start->v[2];
      outOrg.v[2] = v20;
      p_view = &LocalClientGlobals->refdef.view;
    }
    RefdefView_GetOrg(p_view, &v47);
    v23 = inImpactPos;
    v24 = inImpactPos->v[0] - v22;
    v26 = LODWORD(inImpactPos->v[1]);
    v25 = inImpactPos->v[1] - v21;
    v27 = inImpactPos->v[2] - v20;
    *(float *)&v26 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v27 * v27));
    _XMM8 = v26;
    __asm
    {
      vcmpless xmm0, xmm8, cs:__real@80000000
      vblendvps xmm1, xmm8, xmm2, xmm0
    }
    inBulletDir.v[0] = v24 * (float)(1.0 / *(float *)&_XMM1);
    inBulletDir.v[1] = v25 * (float)(1.0 / *(float *)&_XMM1);
    inBulletDir.v[2] = v27 * (float)(1.0 / *(float *)&_XMM1);
    v31 = v47.v[0];
    v32 = v47.v[1];
    v33 = v47.v[2];
    v34 = (float)((float)((float)(v47.v[1] - v21) * inBulletDir.v[1]) + (float)((float)(v47.v[0] - v22) * inBulletDir.v[0])) + (float)((float)(v47.v[2] - v20) * inBulletDir.v[2]);
    SfxPackage = BG_GetSfxPackage(r_weapon, isAlternate);
    if ( v34 <= *(float *)&_XMM8 )
    {
      v36 = (float)((float)(v34 * inBulletDir.v[1]) + v21) - v32;
      v37 = (float)((float)(v34 * inBulletDir.v[2]) + v20) - v33;
      radius = fsqrt((float)((float)(v36 * v36) + (float)((float)((float)((float)(v34 * inBulletDir.v[0]) + v22) - v31) * (float)((float)((float)(v34 * inBulletDir.v[0]) + v22) - v31))) + (float)(v37 * v37));
      inSndCenterPt.v[0] = (float)(v34 * inBulletDir.v[0]) + v22;
      inSndCenterPt.v[1] = v36 + v32;
      inSndCenterPt.v[2] = v37 + v33;
      NewBulletEvent = SND_GetNewBulletEvent();
      if ( NewBulletEvent != -1 )
        SND_AddWhizbyToBulletEvent(NewBulletEvent, (const LocalClientNum_t)this->m_localClientNum, SfxPackage, &inSndCenterPt, &inBulletDir, radius, v34);
    }
    if ( inSfxInfo->hitSound )
    {
      if ( NewBulletEvent == -1 )
      {
        NewBulletEvent = SND_GetNewBulletEvent();
        if ( NewBulletEvent == -1 )
          goto LABEL_18;
      }
      SND_AddImpactToBulletEvent(NewBulletEvent, (const LocalClientNum_t)this->m_localClientNum, SfxPackage, start, v23, inSfxInfo->impactEnt, inSfxInfo->hitSound, surfType, hitImpactDelayOverride, hitmarkerType);
    }
    if ( NewBulletEvent != -1 )
      SND_StartBulletEvent(NewBulletEvent);
LABEL_18:
    memset(&v47, 0, sizeof(v47));
    memset(&outOrg, 0, sizeof(outOrg));
    return;
  }
  if ( inSfxInfo->hitSound )
  {
    v39 = SND_GetNewBulletEvent();
    if ( v39 != -1 )
    {
      impactSound = inSfxInfo->hitSound;
      impactEnt = inSfxInfo->impactEnt;
      v42 = BG_GetSfxPackage(r_weapon, isAlternate);
      SND_AddImpactToBulletEvent(v39, (const LocalClientNum_t)this->m_localClientNum, v42, start, inImpactPos, impactEnt, impactSound, surfType, hitImpactDelayOverride, hitmarkerType);
      SND_StartBulletEvent(v39);
    }
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

