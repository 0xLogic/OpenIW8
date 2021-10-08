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
  int entnum; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  void *retaddr; 

  if ( aliasList0 )
  {
    _RAX = &retaddr;
    if ( aliasList1 )
    {
      __asm
      {
        vmovaps xmmword ptr [rax-18h], xmm6
        vmovss  xmm6, [rsp+88h+arg_38]
        vmovaps xmmword ptr [rax-28h], xmm7
        vmovss  xmm7, [rsp+88h+arg_30]
        vmovss  dword ptr [rax-58h], xmm6
        vmovaps xmmword ptr [rax-38h], xmm8
        vmovss  xmm8, [rsp+88h+arg_28]
        vmovss  dword ptr [rax-60h], xmm7
        vmovss  dword ptr [rax-68h], xmm8
      }
      if ( !CG_EntityWorkers_TryAddPlayBlendedSoundAliasRequest(entitynum, origin, aliasList0, aliasList1, *(float *)&entnum, v24, v26) )
      {
        __asm
        {
          vmovss  [rsp+88h+var_58], xmm6
          vmovss  [rsp+88h+var_60], xmm7
          vmovaps xmm2, xmm8; lerp
        }
        SND_PlayBlendedSoundAliasAsync(aliasList0, aliasList1, *(const float *)&_XMM2, (const LocalClientNum_t)this->m_localClientNum, entitynum, v25, v27, origin, 0, SASYS_CGAME);
      }
      __asm
      {
        vmovaps xmm7, [rsp+88h+var_28]
        vmovaps xmm6, [rsp+88h+var_18]
        vmovaps xmm8, [rsp+88h+var_38]
      }
    }
  }
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
  int contextIndex2a; 
  float volumeScalea; 

  if ( Sys_IsMainThreadEntityWorker() )
  {
    if ( aliasList )
      aliasName = aliasList->aliasName;
    else
      aliasName = "none";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_sound_sp.cpp", 262, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tPlayContextSound cannot be called from entity worker thread. Sound was '%s'", "!Sys_IsMainThreadEntityWorker()", aliasName) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+pitch]
    vmovss  xmm1, [rsp+58h+volumeScale]
    vmovss  [rsp+58h+volumeScale], xmm0
    vmovss  [rsp+58h+contextIndex2], xmm1
  }
  return SND_PlayContextSound(aliasList, surfaceType, contextIndex, contextIndex2, (const LocalClientNum_t)this->m_localClientNum, entitynum, *(float *)&contextIndex2a, volumeScalea, origin);
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
  float v16; 
  float v17; 

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
  __asm
  {
    vmovss  xmm0, [rsp+58h+pitch]
    vmovss  xmm1, [rsp+58h+volumeScale]
    vmovss  [rsp+58h+var_20], xmm0
    vmovss  [rsp+58h+var_28], xmm1
  }
  return SND_PlayContextSound(SoundAliasListByName, 0, contextIndex, contextIndex2, (const LocalClientNum_t)this->m_localClientNum, entitynum, v16, v17, origin);
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
  int v10; 
  int v11; 

  Alias = SND_FindAlias(aliasname);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_20], xmm0
    vmovss  [rsp+48h+var_28], xmm0
  }
  return ((__int64 (__fastcall *)(CgSoundSystemSP *, _QWORD, const vec3_t *, SndAliasList *, int, int, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)entitynum, origin, Alias, v10, v11, 0);
}

/*
==============
CgSoundSystemSP::PlaySoundAliasByName
==============
*/
__int64 CgSoundSystemSP::PlaySoundAliasByName(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, int soundString)
{
  SndAliasList *SoundAliasListByName; 
  int v10; 
  int v11; 

  SoundAliasListByName = CL_CGameSP_GetSoundAliasListByName(soundString);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_20], xmm0
    vmovss  [rsp+48h+var_28], xmm0
  }
  return ((__int64 (__fastcall *)(CgSoundSystemSP *, _QWORD, const vec3_t *, SndAliasList *, int, int, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)entitynum, origin, SoundAliasListByName, v10, v11, 0);
}

/*
==============
CgSoundSystemSP::PlaySoundAliasScaled
==============
*/
unsigned int CgSoundSystemSP::PlaySoundAliasScaled(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale, float pitch, int timeshift)
{
  float v16; 
  float v17; 

  if ( !aliasList )
    return 0;
  __asm
  {
    vmovss  xmm0, [rsp+48h+pitch]
    vmovss  xmm3, [rsp+48h+volumeScale]; volumeScale
    vmovss  [rsp+48h+var_28], xmm0
  }
  if ( CG_EntityWorkers_TryAddPlaySoundAliasScaledRequest(entitynum, origin, aliasList, *(float *)&_XMM3, v16, timeshift) )
    return 0;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm3, [rsp+48h+volumeScale]; volumeScale
    vmovss  [rsp+48h+var_28], xmm0
  }
  return SND_PlayScaledSoundAlias(aliasList, (const LocalClientNum_t)this->m_localClientNum, entitynum, *(float *)&_XMM3, v17, origin, timeshift, SASYS_CGAME);
}

/*
==============
CgSoundSystemSP::PlaySoundAliasScaledAsync
==============
*/
void CgSoundSystemSP::PlaySoundAliasScaledAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale, float pitch, int timeshift)
{
  float v16; 
  float v17; 

  if ( aliasList )
  {
    __asm
    {
      vmovss  xmm3, [rsp+58h+arg_20]; volumeScale
      vmovaps [rsp+58h+var_18], xmm6
      vmovss  xmm6, [rsp+58h+arg_28]
      vmovss  [rsp+58h+var_38], xmm6
    }
    if ( !CG_EntityWorkers_TryAddPlaySoundAliasScaledRequest(entitynum, origin, aliasList, *(float *)&_XMM3, v16, timeshift) )
    {
      __asm
      {
        vmovss  xmm3, [rsp+58h+arg_20]; volumeScale
        vmovss  [rsp+58h+var_38], xmm6
      }
      SND_PlayScaledSoundAliasAsync(aliasList, (const LocalClientNum_t)this->m_localClientNum, entitynum, *(float *)&_XMM3, v17, origin, 0, SASYS_CGAME);
    }
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  unsigned int result; 
  float v22; 
  float v23; 
  int v24; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  if ( !aliasList )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm6, [rsp+68h+pitch]
    vmovss  xmm7, [rsp+68h+volumeScale]
    vmovss  dword ptr [rax-40h], xmm6
    vmovss  dword ptr [rax-48h], xmm7
  }
  if ( CG_EntityWorkers_TryAddSurfaceSoundRequest(entitynum, origin, aliasList, surfaceType, v22, *(float *)&v24, fadeTime) )
  {
LABEL_4:
    result = 0;
  }
  else
  {
    SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
    __asm
    {
      vmovaps xmm3, xmm7; volumeScale
      vmovss  [rsp+68h+var_48], xmm6
    }
    result = SND_PlaySurfaceSound(aliasList, surfaceType, SndEntHandle, *(float *)&_XMM3, v23, fadeTime, origin);
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
CgSoundSystemSP::PlaySurfaceSoundAsync
==============
*/
void CgSoundSystemSP::PlaySurfaceSoundAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  unsigned __int64 SndEntHandle; 
  float v21; 
  float v22; 
  int fadeTimea; 
  void *retaddr; 

  if ( aliasList )
  {
    _RAX = &retaddr;
    __asm
    {
      vmovaps xmmword ptr [rax-18h], xmm6
      vmovss  xmm6, [rsp+68h+arg_30]
      vmovaps xmmword ptr [rax-28h], xmm7
      vmovss  xmm7, [rsp+68h+arg_28]
      vmovss  dword ptr [rax-40h], xmm6
      vmovss  dword ptr [rax-48h], xmm7
    }
    if ( !CG_EntityWorkers_TryAddSurfaceSoundRequest(entitynum, origin, aliasList, surfaceType, v21, *(float *)&fadeTimea, fadeTime) )
    {
      SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
      __asm
      {
        vmovaps xmm3, xmm7; volumeScale
        vmovss  [rsp+68h+var_48], xmm6
      }
      SND_PlaySurfaceSoundAsync(aliasList, surfaceType, SndEntHandle, *(float *)&_XMM3, v22, fadeTime, origin);
    }
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_18]
      vmovaps xmm7, [rsp+68h+var_28]
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
  unsigned int result; 
  float v19; 
  int v20; 
  float org; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  if ( !aliasList )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm6, [rsp+68h+pitch]
    vmovss  xmm7, [rsp+68h+volumeScale]
    vmovss  dword ptr [rsp+68h+org], xmm6
    vmovss  [rsp+68h+var_40], xmm7
  }
  if ( CG_EntityWorkers_TryAddSurfaceSoundOnSndEntRequest(entitynum, origin, sndEntHandle, aliasList, surfaceType, *(float *)&v20, org, fadeTime) )
  {
LABEL_4:
    result = 0;
  }
  else
  {
    __asm
    {
      vmovaps xmm3, xmm7; volumeScale
      vmovss  [rsp+68h+var_48], xmm6
    }
    result = SND_PlaySurfaceSound(aliasList, surfaceType, sndEntHandle, *(float *)&_XMM3, v19, fadeTime, origin);
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
CgSoundSystemSP::PlaySurfaceSoundOnSndEntAsync
==============
*/
void CgSoundSystemSP::PlaySurfaceSoundOnSndEntAsync(CgSoundSystemSP *this, const int entitynum, const vec3_t *origin, const unsigned __int64 sndEntHandle, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  float v18; 
  int v19; 
  float org; 

  if ( aliasList )
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmovss  xmm6, [rsp+68h+pitch]
      vmovss  dword ptr [rsp+68h+org], xmm6
      vmovaps [rsp+68h+var_28], xmm7
      vmovss  xmm7, [rsp+68h+volumeScale]
      vmovss  [rsp+68h+var_40], xmm7
    }
    if ( !CG_EntityWorkers_TryAddSurfaceSoundOnSndEntRequest(entitynum, origin, sndEntHandle, aliasList, surfaceType, *(float *)&v19, org, fadeTime) )
    {
      __asm
      {
        vmovaps xmm3, xmm7; volumeScale
        vmovss  [rsp+68h+var_48], xmm6
      }
      SND_PlaySurfaceSoundAsync(aliasList, surfaceType, sndEntHandle, *(float *)&_XMM3, v18, fadeTime, origin);
    }
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_18]
      vmovaps xmm7, [rsp+68h+var_28]
    }
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
  float v22; 

  if ( Sys_IsMainThreadEntityWorker() )
  {
    v19 = aliasList ? aliasList->aliasName : "none";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_sound_sp.cpp", 120, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tPlayWeaponSound not be called from entity worker thread. Sound was '%s'", "!Sys_IsMainThreadEntityWorker()", v19) )
      __debugbreak();
  }
  if ( aliasList )
  {
    isProne = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)pm_flags, ACTIVE, 0);
    __asm
    {
      vmovss  xmm0, [rsp+88h+autoSimDistSq]
      vmovss  [rsp+88h+var_40], xmm0
    }
    SND_PlayWeaponSound(aliasList, (const LocalClientNum_t)this->m_localClientNum, entitynum, origin, weapon, isAlternate, isPlayer, autoSimId, autoSimTimeStamp, v22, shotCount, isProne, isDualWield, hand, isHyperBurstSound);
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
  float v27; 
  LocalClientNum_t m_localClientNum; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  vec3_t v43; 
  void *retaddr; 

  if ( aliasList )
  {
    _RAX = &retaddr;
    _RDI = origin;
    __asm
    {
      vmovaps xmmword ptr [rax-18h], xmm6
      vmovss  xmm6, [rsp+0B8h+arg_48]
      vmovaps xmmword ptr [rax-28h], xmm7
      vmovss  xmm7, [rsp+0B8h+arg_38]
      vmovss  dword ptr [rax-78h], xmm6
      vmovaps xmmword ptr [rax-38h], xmm8
      vmovss  xmm8, [rsp+0B8h+arg_30]
      vmovaps xmmword ptr [rax-48h], xmm9
      vmovss  xmm9, [rsp+0B8h+arg_28]
      vmovaps xmmword ptr [rax-58h], xmm10
      vmovss  xmm10, [rsp+0B8h+arg_20]
      vmovss  [rsp+0B8h+var_88], xmm7
      vmovaps xmm3, xmm10; throttle
      vmovss  [rsp+0B8h+var_90], xmm8
      vmovss  [rsp+0B8h+var_98], xmm9
    }
    if ( !CG_EntityWorkers_TryAddUpdateVehicleSound(entitynum, origin, aliasList, *(const float *)&_XMM3, v34, v36, v38, gear, v41) )
    {
      __asm { vmovsd  xmm0, qword ptr [rdi] }
      v27 = _RDI->v[2];
      m_localClientNum = this->m_localClientNum;
      __asm
      {
        vmovss  [rsp+0B8h+var_70], xmm6
        vmovss  [rsp+0B8h+var_80], xmm7
        vmovss  [rsp+0B8h+var_88], xmm8
        vmovss  [rsp+0B8h+var_90], xmm9
        vmovss  [rsp+0B8h+var_98], xmm10
        vmovsd  [rsp+0B8h+var_68], xmm0
      }
      v43.v[2] = v27;
      SND_UpdateVehicle(aliasList, m_localClientNum, entitynum, &v43, v35, v37, v39, v40, gear, v42);
    }
    __asm
    {
      vmovaps xmm9, [rsp+0B8h+var_48]
      vmovaps xmm8, [rsp+0B8h+var_38]
      vmovaps xmm7, [rsp+0B8h+var_28]
      vmovaps xmm6, [rsp+0B8h+var_18]
      vmovaps xmm10, [rsp+0B8h+var_58]
    }
  }
}

