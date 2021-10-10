/*
==============
CgSoundSystemSP::PlaySurfaceSoundOnSndEnt
==============
*/

unsigned int __fastcall CgSoundSystemSP::PlaySurfaceSoundOnSndEnt(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const unsigned __int64 sndEntHandle, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  return ?PlaySurfaceSoundOnSndEnt@CgSoundSystemSP@@UEAAIHAEBTvec3_t@@_KPEBUSndAliasList@@HMMH@Z(this, entitynum, origin, sndEntHandle, aliasList, surfaceType, volumeScale, pitch, fadeTime);
}

/*
==============
CgSoundSystemSP::PlayWeaponSound
==============
*/

void __fastcall CgSoundSystemSP::PlayWeaponSound(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, const Weapon *weapon, bool isAlternate, bool isPlayer, int autoSimId, __int64 autoSimTimeStamp, float autoSimDistSq, const SndWeapShotCountId shotCount, const GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *pm_flags, bool isDualWield, PlayerHandIndex hand, const bool isHyperBurstSound)
{
  ?PlayWeaponSound@CgSoundSystemSP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@AEBUWeapon@@_N3H_JMW4SndWeapShotCountId@@AEBV?$GameModeFlagContainer@W4PMoveFlagsCommon@@W4PMoveFlagsSP@@W4PMoveFlagsMP@@$0EA@@@3W4PlayerHandIndex@@_N@Z(this, entitynum, origin, aliasList, weapon, isAlternate, isPlayer, autoSimId, autoSimTimeStamp, autoSimDistSq, shotCount, pm_flags, isDualWield, hand, isHyperBurstSound);
}

/*
==============
CgSoundSystemSP::PlayExplosionSoundAsync
==============
*/

void __fastcall CgSoundSystemSP::PlayExplosionSoundAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, const unsigned int reflectionClass)
{
  ?PlayExplosionSoundAsync@CgSoundSystemSP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@HI@Z(this, entitynum, origin, aliasList, surfaceType, reflectionClass);
}

/*
==============
CgSoundSystemSP::UpdateVehicleSound
==============
*/

void __fastcall CgSoundSystemSP::UpdateVehicleSound(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, const float throttle, const float brake, const float rpm, const float speed, const int gear, const float distanceScale)
{
  ?UpdateVehicleSound@CgSoundSystemSP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@MMMMHM@Z(this, entitynum, origin, aliasList, throttle, brake, rpm, speed, gear, distanceScale);
}

/*
==============
CgSoundSystemSP::PlaySoundAliasByName2
==============
*/

unsigned int __fastcall CgSoundSystemSP::PlaySoundAliasByName2(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const char *aliasname)
{
  return ?PlaySoundAliasByName2@CgSoundSystemSP@@UEAAIHAEBTvec3_t@@PEBD@Z(this, entitynum, origin, aliasname);
}

/*
==============
CgSoundSystemSP::PlaySurfaceSoundOnSndEntAsync
==============
*/

void __fastcall CgSoundSystemSP::PlaySurfaceSoundOnSndEntAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const unsigned __int64 sndEntHandle, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  ?PlaySurfaceSoundOnSndEntAsync@CgSoundSystemSP@@UEAAXHAEBTvec3_t@@_KPEBUSndAliasList@@HMMH@Z(this, entitynum, origin, sndEntHandle, aliasList, surfaceType, volumeScale, pitch, fadeTime);
}

/*
==============
CgSoundSystemSP::PlayContextSoundByIndex
==============
*/

unsigned int __fastcall CgSoundSystemSP::PlayContextSoundByIndex(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, int soundString, int contextIndex, int contextIndex2, float volumeScale, float pitch)
{
  return ?PlayContextSoundByIndex@CgSoundSystemSP@@UEAAIHAEBTvec3_t@@HHHMM@Z(this, entitynum, origin, soundString, contextIndex, contextIndex2, volumeScale, pitch);
}

/*
==============
CgSoundSystemSP::PlayWhizbyAndImpactSfx
==============
*/

void __fastcall CgSoundSystemSP::PlayWhizbyAndImpactSfx(CgSoundSystemSP *this, const CgSfxImpactInfo *inSfxInfo, bool playWhizby, int whizbyEnt, const vec3_t *initialPos, const vec3_t *start, const vec3_t *end, int surfType, const Weapon *inWeapon, bool isAlternate, const int hitImpactDelayOverride, SndHitmarkerType hitmarkerType)
{
  ?PlayWhizbyAndImpactSfx@CgSoundSystemSP@@UEAAXAEBUCgSfxImpactInfo@@_NHAEBTvec3_t@@22HAEBUWeapon@@1HW4SndHitmarkerType@@@Z(this, inSfxInfo, playWhizby, whizbyEnt, initialPos, start, end, surfType, inWeapon, isAlternate, hitImpactDelayOverride, hitmarkerType);
}

/*
==============
CgSoundSystemSP::StopSoundAliasByName
==============
*/

void __fastcall CgSoundSystemSP::StopSoundAliasByName(CgSoundSystemSP *this, const int entityNum, const int soundString)
{
  ?StopSoundAliasByName@CgSoundSystemSP@@UEAAXHH@Z(this, entityNum, soundString);
}

/*
==============
CgSoundSystemSP::PlaySoundAliasByName
==============
*/

unsigned int __fastcall CgSoundSystemSP::PlaySoundAliasByName(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, int soundString)
{
  return ?PlaySoundAliasByName@CgSoundSystemSP@@UEAAIHAEBTvec3_t@@H@Z(this, entitynum, origin, soundString);
}

/*
==============
CgSoundSystemSP::PlaySurfaceSound
==============
*/

unsigned int __fastcall CgSoundSystemSP::PlaySurfaceSound(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  return ?PlaySurfaceSound@CgSoundSystemSP@@UEAAIHAEBTvec3_t@@PEBUSndAliasList@@HMMH@Z(this, entitynum, origin, aliasList, surfaceType, volumeScale, pitch, fadeTime);
}

/*
==============
CgSoundSystemSP::GetSoundAliasListByName
==============
*/

SndAliasList *__fastcall CgSoundSystemSP::GetSoundAliasListByName(CgSoundSystemSP *this, int soundString)
{
  return ?GetSoundAliasListByName@CgSoundSystemSP@@UEAAPEAUSndAliasList@@H@Z(this, soundString);
}

/*
==============
CgSoundSystemSP::PlaySoundAliasScaledAsync
==============
*/

void __fastcall CgSoundSystemSP::PlaySoundAliasScaledAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale, float pitch, int timeshift)
{
  ?PlaySoundAliasScaledAsync@CgSoundSystemSP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@MMH@Z(this, entitynum, origin, aliasList, volumeScale, pitch, timeshift);
}

/*
==============
CgSoundSystemSP::PlayClientSideReactiveSounds
==============
*/

void __fastcall CgSoundSystemSP::PlayClientSideReactiveSounds(CgSoundSystemSP *this, const vec3_t *origin, const float radius, const float delay)
{
  ?PlayClientSideReactiveSounds@CgSoundSystemSP@@UEAAXAEBTvec3_t@@MM@Z(this, origin, radius, delay);
}

/*
==============
CgSoundSystemSP::PlayContextSound
==============
*/

unsigned int __fastcall CgSoundSystemSP::PlayContextSound(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, int contextIndex, int contextIndex2, float volumeScale, float pitch)
{
  return ?PlayContextSound@CgSoundSystemSP@@UEAAIHAEBTvec3_t@@PEBUSndAliasList@@HHHMM@Z(this, entitynum, origin, aliasList, surfaceType, contextIndex, contextIndex2, volumeScale, pitch);
}

/*
==============
CgSoundSystemSP::PlayLocalSoundAliasByName
==============
*/

unsigned int __fastcall CgSoundSystemSP::PlayLocalSoundAliasByName(CgSoundSystemSP *this, const char *aliasname)
{
  return ?PlayLocalSoundAliasByName@CgSoundSystemSP@@UEAAIPEBD@Z(this, aliasname);
}

/*
==============
CgSoundSystemSP::PlaySoundAliasScaled
==============
*/

unsigned int __fastcall CgSoundSystemSP::PlaySoundAliasScaled(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale, float pitch, int timeshift)
{
  return ?PlaySoundAliasScaled@CgSoundSystemSP@@UEAAIHAEBTvec3_t@@PEBUSndAliasList@@MMH@Z(this, entitynum, origin, aliasList, volumeScale, pitch, timeshift);
}

/*
==============
CgSoundSystemSP::PlaySurfaceSoundByIndex
==============
*/

unsigned int __fastcall CgSoundSystemSP::PlaySurfaceSoundByIndex(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, int soundString, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  return ?PlaySurfaceSoundByIndex@CgSoundSystemSP@@UEAAIHAEBTvec3_t@@HHMMH@Z(this, entitynum, origin, soundString, surfaceType, volumeScale, pitch, fadeTime);
}

/*
==============
CgSoundSystemSP::PlaySurfaceSoundAsync
==============
*/

void __fastcall CgSoundSystemSP::PlaySurfaceSoundAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  ?PlaySurfaceSoundAsync@CgSoundSystemSP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@HMMH@Z(this, entitynum, origin, aliasList, surfaceType, volumeScale, pitch, fadeTime);
}

/*
==============
CgSoundSystemSP::PlayBlendedSoundAliasAsync
==============
*/

void __fastcall CgSoundSystemSP::PlayBlendedSoundAliasAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList0, const SndAliasList *aliasList1, float lerp, float volumeScale, float pitch)
{
  ?PlayBlendedSoundAliasAsync@CgSoundSystemSP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@1MMM@Z(this, entitynum, origin, aliasList0, aliasList1, lerp, volumeScale, pitch);
}

/*
==============
CgSoundSystemSP::GetSoundAliasListByName
==============
*/
SndAliasList *CgSoundSystemSP::GetSoundAliasListByName(CgSoundSystemSP *this, int soundString)
{
  return CL_CGameSP_GetSoundAliasListByName(soundString);
}

/*
==============
CgSoundSystemSP::PlayBlendedSoundAliasAsync
==============
*/
void CgSoundSystemSP::PlayBlendedSoundAliasAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList0, const SndAliasList *aliasList1, float lerp, float volumeScale, float pitch)
{
  if ( aliasList0 && aliasList1 && !CG_EntityWorkers_TryAddPlayBlendedSoundAliasRequest(entitynum, origin, aliasList0, aliasList1, lerp, volumeScale, pitch) )
    SND_PlayBlendedSoundAliasAsync(aliasList0, aliasList1, lerp, (const LocalClientNum_t)this->m_localClientNum, entitynum, volumeScale, pitch, origin, 0, SASYS_CGAME);
}

/*
==============
CgSoundSystemSP::PlayClientSideReactiveSounds
==============
*/
void CgSoundSystemSP::PlayClientSideReactiveSounds(CgSoundSystemSP *this, const vec3_t *origin, const float radius, const float delay)
{
  ;
}

/*
==============
CgSoundSystemSP::PlayContextSound
==============
*/
unsigned int CgSoundSystemSP::PlayContextSound(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, int contextIndex, int contextIndex2, float volumeScale, float pitch)
{
  const char *aliasName; 

  if ( Sys_IsMainThreadEntityWorker() )
  {
    if ( aliasList )
      aliasName = aliasList->aliasName;
    else
      aliasName = "none";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_sound_sp.cpp", 262, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tPlayContextSound cannot be called from entity worker thread. Sound was '%s'", "!Sys_IsMainThreadEntityWorker()", aliasName) )
      __debugbreak();
  }
  return SND_PlayContextSound(aliasList, surfaceType, contextIndex, contextIndex2, (const LocalClientNum_t)this->m_localClientNum, entitynum, volumeScale, pitch, origin);
}

/*
==============
CgSoundSystemSP::PlayContextSoundByIndex
==============
*/
unsigned int CgSoundSystemSP::PlayContextSoundByIndex(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, int soundString, int contextIndex, int contextIndex2, float volumeScale, float pitch)
{
  SndAliasList *SoundAliasListByName; 
  const char *aliasName; 

  SoundAliasListByName = CL_CGameSP_GetSoundAliasListByName(soundString);
  if ( Sys_IsMainThreadEntityWorker() )
  {
    if ( SoundAliasListByName )
      aliasName = SoundAliasListByName->aliasName;
    else
      aliasName = "none";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_sound_sp.cpp", 250, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tPlayContextSoundByIndex not be called from entity worker thread. Sound was '%s'", "!Sys_IsMainThreadEntityWorker()", aliasName) )
      __debugbreak();
  }
  return SND_PlayContextSound(SoundAliasListByName, 0, contextIndex, contextIndex2, (const LocalClientNum_t)this->m_localClientNum, entitynum, volumeScale, pitch, origin);
}

/*
==============
CgSoundSystemSP::PlayExplosionSoundAsync
==============
*/
void CgSoundSystemSP::PlayExplosionSoundAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, const unsigned int reflectionClass)
{
  unsigned __int64 SndEntHandle; 

  if ( aliasList )
  {
    if ( !CG_EntityWorkers_TryAddPlayExplosionSoundRequest(entitynum, origin, aliasList, surfaceType, reflectionClass) )
    {
      SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
      SND_PlayExplosionSoundAsync(aliasList, surfaceType, SndEntHandle, origin, reflectionClass);
    }
  }
}

/*
==============
CgSoundSystemSP::PlayLocalSoundAliasByName
==============
*/
unsigned int CgSoundSystemSP::PlayLocalSoundAliasByName(CgSoundSystemSP *this, const char *aliasname)
{
  const SndAliasList *Alias; 

  if ( Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_sound_sp.cpp", 14, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tPlayLocalSoundAliasByName should not be called from entity worker thread. Sound was '%s'", "!Sys_IsMainThreadEntityWorker()", aliasname) )
    __debugbreak();
  Alias = SND_FindAlias(aliasname);
  if ( Alias )
    LODWORD(Alias) = SND_PlayLocalSoundAlias(this->m_localClientNum, Alias, SASYS_CGAME);
  return (unsigned int)Alias;
}

/*
==============
CgSoundSystemSP::PlaySoundAliasByName2
==============
*/
__int64 CgSoundSystemSP::PlaySoundAliasByName2(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const char *aliasname)
{
  SndAliasList *Alias; 

  Alias = SND_FindAlias(aliasname);
  return ((__int64 (__fastcall *)(CgSoundSystemSP *, _QWORD, const vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)entitynum, origin, Alias, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
}

/*
==============
CgSoundSystemSP::PlaySoundAliasByName
==============
*/
__int64 CgSoundSystemSP::PlaySoundAliasByName(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, int soundString)
{
  SndAliasList *SoundAliasListByName; 

  SoundAliasListByName = CL_CGameSP_GetSoundAliasListByName(soundString);
  return ((__int64 (__fastcall *)(CgSoundSystemSP *, _QWORD, const vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)entitynum, origin, SoundAliasListByName, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
}

/*
==============
CgSoundSystemSP::PlaySoundAliasScaled
==============
*/
unsigned int CgSoundSystemSP::PlaySoundAliasScaled(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale, float pitch, int timeshift)
{
  if ( !aliasList || CG_EntityWorkers_TryAddPlaySoundAliasScaledRequest(entitynum, origin, aliasList, volumeScale, pitch, timeshift) )
    return 0;
  else
    return SND_PlayScaledSoundAlias(aliasList, (const LocalClientNum_t)this->m_localClientNum, entitynum, volumeScale, 1.0, origin, timeshift, SASYS_CGAME);
}

/*
==============
CgSoundSystemSP::PlaySoundAliasScaledAsync
==============
*/
void CgSoundSystemSP::PlaySoundAliasScaledAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale, float pitch, int timeshift)
{
  if ( aliasList )
  {
    if ( !CG_EntityWorkers_TryAddPlaySoundAliasScaledRequest(entitynum, origin, aliasList, volumeScale, pitch, timeshift) )
      SND_PlayScaledSoundAliasAsync(aliasList, (const LocalClientNum_t)this->m_localClientNum, entitynum, volumeScale, pitch, origin, 0, SASYS_CGAME);
  }
}

/*
==============
CgSoundSystemSP::PlaySurfaceSound
==============
*/
unsigned int CgSoundSystemSP::PlaySurfaceSound(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  unsigned __int64 SndEntHandle; 

  if ( !aliasList || CG_EntityWorkers_TryAddSurfaceSoundRequest(entitynum, origin, aliasList, surfaceType, volumeScale, pitch, fadeTime) )
    return 0;
  SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
  return SND_PlaySurfaceSound(aliasList, surfaceType, SndEntHandle, volumeScale, pitch, fadeTime, origin);
}

/*
==============
CgSoundSystemSP::PlaySurfaceSoundAsync
==============
*/
void CgSoundSystemSP::PlaySurfaceSoundAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  unsigned __int64 SndEntHandle; 

  if ( aliasList )
  {
    if ( !CG_EntityWorkers_TryAddSurfaceSoundRequest(entitynum, origin, aliasList, surfaceType, volumeScale, pitch, fadeTime) )
    {
      SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
      SND_PlaySurfaceSoundAsync(aliasList, surfaceType, SndEntHandle, volumeScale, pitch, fadeTime, origin);
    }
  }
}

/*
==============
CgSoundSystemSP::PlaySurfaceSoundByIndex
==============
*/
__int64 CgSoundSystemSP::PlaySurfaceSoundByIndex(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, int soundString, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  SndAliasList *SoundAliasListByName; 

  SoundAliasListByName = CL_CGameSP_GetSoundAliasListByName(soundString);
  return ((__int64 (__fastcall *)(CgSoundSystemSP *, _QWORD, const vec3_t *, SndAliasList *))this->PlaySurfaceSound)(this, (unsigned int)entitynum, origin, SoundAliasListByName);
}

/*
==============
CgSoundSystemSP::PlaySurfaceSoundOnSndEnt
==============
*/
unsigned int CgSoundSystemSP::PlaySurfaceSoundOnSndEnt(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const unsigned __int64 sndEntHandle, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  if ( !aliasList || CG_EntityWorkers_TryAddSurfaceSoundOnSndEntRequest(entitynum, origin, sndEntHandle, aliasList, surfaceType, volumeScale, pitch, fadeTime) )
    return 0;
  else
    return SND_PlaySurfaceSound(aliasList, surfaceType, sndEntHandle, volumeScale, pitch, fadeTime, origin);
}

/*
==============
CgSoundSystemSP::PlaySurfaceSoundOnSndEntAsync
==============
*/
void CgSoundSystemSP::PlaySurfaceSoundOnSndEntAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const unsigned __int64 sndEntHandle, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  if ( aliasList )
  {
    if ( !CG_EntityWorkers_TryAddSurfaceSoundOnSndEntRequest(entitynum, origin, sndEntHandle, aliasList, surfaceType, volumeScale, pitch, fadeTime) )
      SND_PlaySurfaceSoundAsync(aliasList, surfaceType, sndEntHandle, volumeScale, pitch, fadeTime, origin);
  }
}

/*
==============
CgSoundSystemSP::PlayWeaponSound
==============
*/
void CgSoundSystemSP::PlayWeaponSound(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, const Weapon *weapon, bool isAlternate, bool isPlayer, int autoSimId, __int64 autoSimTimeStamp, float autoSimDistSq, const SndWeapShotCountId shotCount, const GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *pm_flags, bool isDualWield, PlayerHandIndex hand, const bool isHyperBurstSound)
{
  const char *v19; 
  bool isProne; 

  if ( Sys_IsMainThreadEntityWorker() )
  {
    v19 = aliasList ? aliasList->aliasName : "none";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_sound_sp.cpp", 120, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tPlayWeaponSound not be called from entity worker thread. Sound was '%s'", "!Sys_IsMainThreadEntityWorker()", v19) )
      __debugbreak();
  }
  if ( aliasList )
  {
    isProne = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)pm_flags, ACTIVE, 0);
    SND_PlayWeaponSound(aliasList, (const LocalClientNum_t)this->m_localClientNum, entitynum, origin, weapon, isAlternate, isPlayer, autoSimId, autoSimTimeStamp, autoSimDistSq, shotCount, isProne, isDualWield, hand, isHyperBurstSound);
  }
}

/*
==============
CgSoundSystemSP::PlayWhizbyAndImpactSfx
==============
*/
void CgSoundSystemSP::PlayWhizbyAndImpactSfx(CgSoundSystemSP *this, const CgSfxImpactInfo *inSfxInfo, bool playWhizby, int whizbyEnt, const vec3_t *initialPos, const vec3_t *start, const vec3_t *end, int surfType, const Weapon *inWeapon, bool isAlternate, const int hitImpactDelayOverride, SndHitmarkerType hitmarkerType)
{
  CgSoundSystem::PlayWhizbyAndImpactSfx_Internal(this, inSfxInfo, playWhizby, whizbyEnt, initialPos, start, end, surfType, inWeapon, isAlternate, hitImpactDelayOverride, hitmarkerType);
}

/*
==============
CgSoundSystemSP::StopSoundAliasByName
==============
*/
void CgSoundSystemSP::StopSoundAliasByName(CgSoundSystemSP *this, const int entityNum, const int soundString)
{
  const char *ConfigString; 

  ConfigString = CL_GetConfigString(soundString + 2414);
  if ( !ConfigString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_sound_sp.cpp", 317, ASSERT_TYPE_ASSERT, "(aliasLookup.name)", (const char *)&queryFormat, "aliasLookup.name") )
    __debugbreak();
  CgSoundSystem::StopSoundAlias(this, entityNum, (SndAliasLookup)ConfigString);
}

/*
==============
CgSoundSystemSP::UpdateVehicleSound
==============
*/
void CgSoundSystemSP::UpdateVehicleSound(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, const float throttle, const float brake, const float rpm, const float speed, const int gear, const float distanceScale)
{
  __int128 v10; 
  __int128 v11; 
  float v16; 
  LocalClientNum_t m_localClientNum; 
  vec3_t v18; 
  __int128 v19; 
  __int128 v20; 

  if ( aliasList )
  {
    v20 = v10;
    v19 = v11;
    if ( !CG_EntityWorkers_TryAddUpdateVehicleSound(entitynum, origin, aliasList, throttle, brake, rpm, speed, gear, distanceScale) )
    {
      v16 = origin->v[2];
      m_localClientNum = this->m_localClientNum;
      *(_QWORD *)v18.v = *(_QWORD *)origin->v;
      v18.v[2] = v16;
      SND_UpdateVehicle(aliasList, m_localClientNum, entitynum, &v18, throttle, brake, rpm, speed, gear, distanceScale);
    }
  }
}

