/*
==============
CgSoundSystemMP::PlaySurfaceSoundOnSndEnt
==============
*/

unsigned int __fastcall CgSoundSystemMP::PlaySurfaceSoundOnSndEnt(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const unsigned __int64 sndEntHandle, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  return ?PlaySurfaceSoundOnSndEnt@CgSoundSystemMP@@UEAAIHAEBTvec3_t@@_KPEBUSndAliasList@@HMMH@Z(this, entitynum, origin, sndEntHandle, aliasList, surfaceType, volumeScale, pitch, fadeTime);
}

/*
==============
CgSoundSystemMP::StopSoundAliasByName
==============
*/

void __fastcall CgSoundSystemMP::StopSoundAliasByName(CgSoundSystemMP *this, const int entitynum, const int soundString)
{
  ?StopSoundAliasByName@CgSoundSystemMP@@UEAAXHH@Z(this, entitynum, soundString);
}

/*
==============
CgSoundSystemMP::AllowClientSoundsInFinalKillcam
==============
*/

bool __fastcall CgSoundSystemMP::AllowClientSoundsInFinalKillcam(const LocalClientNum_t localClientNum)
{
  return ?AllowClientSoundsInFinalKillcam@CgSoundSystemMP@@SA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSoundSystemMP::PlaySurfaceSound
==============
*/

unsigned int __fastcall CgSoundSystemMP::PlaySurfaceSound(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  return ?PlaySurfaceSound@CgSoundSystemMP@@UEAAIHAEBTvec3_t@@PEBUSndAliasList@@HMMH@Z(this, entitynum, origin, aliasList, surfaceType, volumeScale, pitch, fadeTime);
}

/*
==============
CgSoundSystemMP::PlaySoundAliasScaledAsync
==============
*/

void __fastcall CgSoundSystemMP::PlaySoundAliasScaledAsync(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale, float pitch, int timeshift)
{
  ?PlaySoundAliasScaledAsync@CgSoundSystemMP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@MMH@Z(this, entitynum, origin, aliasList, volumeScale, pitch, timeshift);
}

/*
==============
CgSoundSystemMP::PlayExplosionSoundAsync
==============
*/

void __fastcall CgSoundSystemMP::PlayExplosionSoundAsync(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, const unsigned int reflectionClass)
{
  ?PlayExplosionSoundAsync@CgSoundSystemMP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@HI@Z(this, entitynum, origin, aliasList, surfaceType, reflectionClass);
}

/*
==============
CgSoundSystemMP::PlaySurfaceSoundAsync
==============
*/

void __fastcall CgSoundSystemMP::PlaySurfaceSoundAsync(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  ?PlaySurfaceSoundAsync@CgSoundSystemMP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@HMMH@Z(this, entitynum, origin, aliasList, surfaceType, volumeScale, pitch, fadeTime);
}

/*
==============
CgSoundSystemMP::ShouldPlaySoundOnLocalClient
==============
*/

bool __fastcall CgSoundSystemMP::ShouldPlaySoundOnLocalClient(const LocalClientNum_t localClientNum, const int entitynum, const vec3_t *origin, const char *aliasname)
{
  return ?ShouldPlaySoundOnLocalClient@CgSoundSystemMP@@SA_NW4LocalClientNum_t@@HAEBTvec3_t@@PEBD@Z(localClientNum, entitynum, origin, aliasname);
}

/*
==============
CgSoundSystemMP::PlaySurfaceSoundByIndex
==============
*/

unsigned int __fastcall CgSoundSystemMP::PlaySurfaceSoundByIndex(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, int soundString, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  return ?PlaySurfaceSoundByIndex@CgSoundSystemMP@@UEAAIHAEBTvec3_t@@HHMMH@Z(this, entitynum, origin, soundString, surfaceType, volumeScale, pitch, fadeTime);
}

/*
==============
CgSoundSystemMP::PlayWhizbyAndImpactSfx
==============
*/

void __fastcall CgSoundSystemMP::PlayWhizbyAndImpactSfx(CgSoundSystemMP *this, const CgSfxImpactInfo *inSfxInfo, bool playWhizby, int whizbyEnt, const vec3_t *initialPos, const vec3_t *start, const vec3_t *end, int surfType, const Weapon *inWeapon, bool isAlternate, const int hitImpactDelayOverride, SndHitmarkerType hitmarkerType)
{
  ?PlayWhizbyAndImpactSfx@CgSoundSystemMP@@UEAAXAEBUCgSfxImpactInfo@@_NHAEBTvec3_t@@22HAEBUWeapon@@1HW4SndHitmarkerType@@@Z(this, inSfxInfo, playWhizby, whizbyEnt, initialPos, start, end, surfType, inWeapon, isAlternate, hitImpactDelayOverride, hitmarkerType);
}

/*
==============
CgSoundSystemMP::PlaySurfaceSoundOnSndEntAsync
==============
*/

void __fastcall CgSoundSystemMP::PlaySurfaceSoundOnSndEntAsync(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const unsigned __int64 sndEntHandle, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  ?PlaySurfaceSoundOnSndEntAsync@CgSoundSystemMP@@UEAAXHAEBTvec3_t@@_KPEBUSndAliasList@@HMMH@Z(this, entitynum, origin, sndEntHandle, aliasList, surfaceType, volumeScale, pitch, fadeTime);
}

/*
==============
CgSoundSystemMP::PlayContextSoundByIndex
==============
*/

unsigned int __fastcall CgSoundSystemMP::PlayContextSoundByIndex(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, int soundString, int contextIndex, int contextIndex2, float volumeScale, float pitch)
{
  return ?PlayContextSoundByIndex@CgSoundSystemMP@@UEAAIHAEBTvec3_t@@HHHMM@Z(this, entitynum, origin, soundString, contextIndex, contextIndex2, volumeScale, pitch);
}

/*
==============
CgSoundSystemMP::PlayClientSideReactiveSounds
==============
*/

void __fastcall CgSoundSystemMP::PlayClientSideReactiveSounds(CgSoundSystemMP *this, const vec3_t *origin, const float radius, const float delay)
{
  ?PlayClientSideReactiveSounds@CgSoundSystemMP@@UEAAXAEBTvec3_t@@MM@Z(this, origin, radius, delay);
}

/*
==============
CgSoundSystemMP::PlayBlendedSoundAliasAsync
==============
*/

void __fastcall CgSoundSystemMP::PlayBlendedSoundAliasAsync(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList0, const SndAliasList *aliasList1, float lerp, float volumeScale, float pitch)
{
  ?PlayBlendedSoundAliasAsync@CgSoundSystemMP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@1MMM@Z(this, entitynum, origin, aliasList0, aliasList1, lerp, volumeScale, pitch);
}

/*
==============
CgSoundSystemMP::ClearSoundPlaybackTracking
==============
*/

void CgSoundSystemMP::ClearSoundPlaybackTracking(void)
{
  ?ClearSoundPlaybackTracking@CgSoundSystemMP@@SAXXZ();
}

/*
==============
CgSoundSystemMP::UpdateVehicleSound
==============
*/

void __fastcall CgSoundSystemMP::UpdateVehicleSound(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, const float throttle, const float brake, const float rpm, const float speed, const int gear, const float distanceScale)
{
  ?UpdateVehicleSound@CgSoundSystemMP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@MMMMHM@Z(this, entitynum, origin, aliasList, throttle, brake, rpm, speed, gear, distanceScale);
}

/*
==============
CgSoundSystemMP::PlayWeaponSound
==============
*/

void __fastcall CgSoundSystemMP::PlayWeaponSound(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, const Weapon *weapon, bool isAlternate, bool isPlayer, int autoSimId, __int64 autoSimTimeStamp, float autoSimDistSq, const SndWeapShotCountId shotCount, const GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *pm_flags, bool isDualWield, PlayerHandIndex hand, const bool isHyperBurstSound)
{
  ?PlayWeaponSound@CgSoundSystemMP@@UEAAXHAEBTvec3_t@@PEBUSndAliasList@@AEBUWeapon@@_N3H_JMW4SndWeapShotCountId@@AEBV?$GameModeFlagContainer@W4PMoveFlagsCommon@@W4PMoveFlagsSP@@W4PMoveFlagsMP@@$0EA@@@3W4PlayerHandIndex@@_N@Z(this, entitynum, origin, aliasList, weapon, isAlternate, isPlayer, autoSimId, autoSimTimeStamp, autoSimDistSq, shotCount, pm_flags, isDualWield, hand, isHyperBurstSound);
}

/*
==============
CgSoundSystemMP::PlayEntitySoundAliasCompassPing
==============
*/

unsigned int __fastcall CgSoundSystemMP::PlayEntitySoundAliasCompassPing(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, float distancePercent)
{
  return ?PlayEntitySoundAliasCompassPing@CgSoundSystemMP@@QEAAIHAEBTvec3_t@@M@Z(this, entitynum, origin, distancePercent);
}

/*
==============
CgSoundSystemMP::PlayContextSound
==============
*/

unsigned int __fastcall CgSoundSystemMP::PlayContextSound(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, int contextIndex, int contextIndex2, float volumeScale, float pitch)
{
  return ?PlayContextSound@CgSoundSystemMP@@UEAAIHAEBTvec3_t@@PEBUSndAliasList@@HHHMM@Z(this, entitynum, origin, aliasList, surfaceType, contextIndex, contextIndex2, volumeScale, pitch);
}

/*
==============
CgSoundSystemMP::PlayLocalSoundAliasByName
==============
*/

unsigned int __fastcall CgSoundSystemMP::PlayLocalSoundAliasByName(CgSoundSystemMP *this, const char *aliasname)
{
  return ?PlayLocalSoundAliasByName@CgSoundSystemMP@@UEAAIPEBD@Z(this, aliasname);
}

/*
==============
CgSoundSystemMP::PlaySoundAliasByName2
==============
*/

unsigned int __fastcall CgSoundSystemMP::PlaySoundAliasByName2(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const char *aliasname)
{
  return ?PlaySoundAliasByName2@CgSoundSystemMP@@UEAAIHAEBTvec3_t@@PEBD@Z(this, entitynum, origin, aliasname);
}

/*
==============
CgSoundSystemMP::GetSoundAliasListByName
==============
*/

SndAliasList *__fastcall CgSoundSystemMP::GetSoundAliasListByName(CgSoundSystemMP *this, int soundString)
{
  return ?GetSoundAliasListByName@CgSoundSystemMP@@UEAAPEAUSndAliasList@@H@Z(this, soundString);
}

/*
==============
CgSoundSystemMP::PlaySoundAliasByName
==============
*/

unsigned int __fastcall CgSoundSystemMP::PlaySoundAliasByName(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, int soundString)
{
  return ?PlaySoundAliasByName@CgSoundSystemMP@@UEAAIHAEBTvec3_t@@H@Z(this, entitynum, origin, soundString);
}

/*
==============
CgSoundSystemMP::GetSoundAliasNameFromIndex
==============
*/

const char *__fastcall CgSoundSystemMP::GetSoundAliasNameFromIndex(const unsigned int soundAliasIndex)
{
  return ?GetSoundAliasNameFromIndex@CgSoundSystemMP@@SAPEBDI@Z(soundAliasIndex);
}

/*
==============
CgSoundSystemMP::PlaySoundAliasScaled
==============
*/

unsigned int __fastcall CgSoundSystemMP::PlaySoundAliasScaled(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale, float pitch, int timeshift)
{
  return ?PlaySoundAliasScaled@CgSoundSystemMP@@UEAAIHAEBTvec3_t@@PEBUSndAliasList@@MMH@Z(this, entitynum, origin, aliasList, volumeScale, pitch, timeshift);
}

/*
==============
CgSoundSystemMP::GetClientNumForLocalClient
==============
*/

int __fastcall CgSoundSystemMP::GetClientNumForLocalClient(const LocalClientNum_t clientNum)
{
  return ?GetClientNumForLocalClient@CgSoundSystemMP@@CAHW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
CgSoundSystemMP::UpdateSoundPlaybackTracking
==============
*/

void __fastcall CgSoundSystemMP::UpdateSoundPlaybackTracking(const LocalClientNum_t localClientNum, const int entitynum, const vec3_t *origin, const char *aliasname, bool looping)
{
  ?UpdateSoundPlaybackTracking@CgSoundSystemMP@@SAXW4LocalClientNum_t@@HAEBTvec3_t@@PEBD_N@Z(localClientNum, entitynum, origin, aliasname, looping);
}

/*
==============
CgSoundSystemMP::AllowClientSoundsInFinalKillcam
==============
*/
bool CgSoundSystemMP::AllowClientSoundsInFinalKillcam(const LocalClientNum_t localClientNum)
{
  int result; 

  return localClientNum == LOCAL_CLIENT_0 || !CG_GetLocalClientGlobals(localClientNum)->inKillCam || !CG_GetOmnvar_IntegerByName(localClientNum, "post_game_state", &result, NULL, NULL) || (unsigned int)(result - 3) > 1;
}

/*
==============
CgSoundSystemMP::ClearSoundPlaybackTracking
==============
*/
void CgSoundSystemMP::ClearSoundPlaybackTracking(void)
{
  const char **p_aliasname; 
  int v1; 
  __int64 v2; 
  int v3; 
  int v4; 
  __int64 v5; 
  int *p_frameCount; 
  const char **v7; 

  if ( CL_IsRenderingSplitScreen() )
  {
    p_aliasname = &s_SoundPlaybackTracking[1].aliasname;
    v1 = 0;
    while ( *(p_aliasname - 6) )
    {
      if ( !*p_aliasname )
      {
        ++v1;
        break;
      }
      if ( !p_aliasname[6] )
      {
        v1 += 2;
        break;
      }
      if ( !p_aliasname[12] )
      {
        v1 += 3;
        break;
      }
      p_aliasname += 24;
      v1 += 4;
      if ( (__int64)p_aliasname >= (__int64)&unk_15150E118 )
        break;
    }
    v2 = v1;
    v3 = 0;
    if ( v1 > 0 )
    {
      v4 = v1 - 1;
      v5 = 0i64;
      p_frameCount = &s_SoundPlaybackTracking[0].frameCount;
      v7 = &s_SoundPlaybackTracking[v1 - 1].aliasname;
      _RSI = s_SoundPlaybackTracking;
      do
      {
        if ( *(p_frameCount - 1) || *p_frameCount > 10 )
        {
          if ( v3 != v4 )
          {
            _RDX = 6i64 * v4;
            __asm { vmovups ymm0, ymmword ptr [rsi+rdx*8] }
            _RCX = 6i64 * v3;
            __asm
            {
              vmovups ymmword ptr [rsi+rcx*8], ymm0
              vmovups xmm1, xmmword ptr [rsi+rdx*8+20h]
              vmovups xmmword ptr [rsi+rcx*8+20h], xmm1
            }
          }
          --v4;
          *v7 = NULL;
          --v2;
          v7 -= 6;
        }
        else
        {
          ++v3;
          ++v5;
          ++*p_frameCount;
          p_frameCount += 12;
        }
      }
      while ( v5 < v2 );
    }
  }
  else
  {
    memset_0(s_SoundPlaybackTracking, 0, sizeof(s_SoundPlaybackTracking));
  }
}

/*
==============
CgSoundSystemMP::GetClientNumForLocalClient
==============
*/
__int64 CgSoundSystemMP::GetClientNumForLocalClient(const LocalClientNum_t clientNum)
{
  float v4; 

  if ( (unsigned int)clientNum >= LODWORD(cl_maxLocalClients) )
  {
    v4 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_sound_mp.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( (cl_maxLocalClients) )", "clientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientNum, v4) )
      __debugbreak();
  }
  return (unsigned int)CG_GetLocalClientGlobals(clientNum)->predictedPlayerState.clientNum;
}

/*
==============
CgSoundSystemMP::GetSoundAliasListByName
==============
*/
SndAliasList *CgSoundSystemMP::GetSoundAliasListByName(CgSoundSystemMP *this, int soundString)
{
  SndAliasList *result; 

  result = (SndAliasList *)CgSoundSystemMP::GetSoundAliasNameFromIndex(soundString);
  if ( result )
    return SND_FindAlias((const char *)result);
  return result;
}

/*
==============
CgSoundSystemMP::GetSoundAliasNameFromIndex
==============
*/
char *CgSoundSystemMP::GetSoundAliasNameFromIndex(const unsigned int soundAliasIndex)
{
  _BYTE *integer64; 
  char *outName; 

  if ( SND_FindPrecachedAliasFromIndex(soundAliasIndex, (const char **)&outName) )
    return outName;
  if ( !createfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_sound_mp.cpp", 129, ASSERT_TYPE_ASSERT, "(createfx)", (const char *)&queryFormat, "createfx") )
    __debugbreak();
  integer64 = (_BYTE *)createfx->current.integer64;
  if ( integer64 && *integer64 && soundAliasIndex < 0x100 )
    return (char *)CL_GetConfigString(soundAliasIndex + 272);
  Com_PrintError(9, "Failed to find sound alias for index: %d\n", soundAliasIndex);
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
CgSoundSystemMP::PlayBlendedSoundAliasAsync
==============
*/
void CgSoundSystemMP::PlayBlendedSoundAliasAsync(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList0, const SndAliasList *aliasList1, float lerp, float volumeScale, float pitch)
{
  const char *aliasName; 
  int entnum; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 

  if ( aliasList0 )
  {
    aliasName = aliasList0->aliasName;
    if ( aliasName )
    {
      if ( CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasName) )
      {
        __asm
        {
          vmovaps [rsp+88h+var_18], xmm6
          vmovss  xmm6, [rsp+88h+arg_38]
          vmovaps [rsp+88h+var_28], xmm7
          vmovss  xmm7, [rsp+88h+arg_30]
          vmovss  [rsp+88h+var_58], xmm6
          vmovaps [rsp+88h+var_38], xmm8
          vmovss  xmm8, [rsp+88h+arg_28]
          vmovss  [rsp+88h+var_60], xmm7
          vmovss  [rsp+88h+entnum], xmm8
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
          CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList0->aliasName, aliasList0->head->flags & 1);
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
}

/*
==============
CgSoundSystemMP::PlayClientSideReactiveSounds
==============
*/

void __fastcall CgSoundSystemMP::PlayClientSideReactiveSounds(CgSoundSystemMP *this, const vec3_t *origin, double radius, double delay)
{
  __int64 m_localClientNum; 
  __int64 v14; 
  __int64 v15; 

  m_localClientNum = this->m_localClientNum;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", this->m_localClientNum, 2, (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v15) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v14) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[m_localClientNum] )
  {
    LODWORD(v15) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v15) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm3, xmm6; timeDelay
    vmovaps xmm2, xmm7; eventRadius
  }
  CgClientSideEffectsSystem::ReactiveEnts_Fire(CgClientSideEffectsSystem::ms_cseSystemArray[m_localClientNum], origin, *(const float *)&_XMM2, *(const float *)&_XMM3, Explosion);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
CgSoundSystemMP::PlayContextSound
==============
*/
__int64 CgSoundSystemMP::PlayContextSound(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, int contextIndex, int contextIndex2, float volumeScale, float pitch)
{
  const char *aliasName; 
  unsigned int v16; 
  float v18; 
  float v19; 

  if ( !aliasList )
    return 0i64;
  aliasName = aliasList->aliasName;
  if ( !aliasName || !CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasName) )
    return 0i64;
  __asm
  {
    vmovss  xmm0, [rsp+58h+pitch]
    vmovss  xmm1, [rsp+58h+volumeScale]
    vmovss  [rsp+58h+var_20], xmm0
    vmovss  [rsp+58h+var_28], xmm1
  }
  v16 = SND_PlayContextSound(aliasList, surfaceType, contextIndex, contextIndex2, (const LocalClientNum_t)this->m_localClientNum, entitynum, v18, v19, origin);
  if ( v16 )
    CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName, aliasList->head->flags & 1);
  return v16;
}

/*
==============
CgSoundSystemMP::PlayContextSoundByIndex
==============
*/
__int64 CgSoundSystemMP::PlayContextSoundByIndex(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, int soundString, int contextIndex, int contextIndex2, float volumeScale, float pitch)
{
  const char *SoundAliasNameFromIndex; 
  SndAliasList *Alias; 
  unsigned int v15; 
  float v17; 
  float v18; 

  SoundAliasNameFromIndex = CgSoundSystemMP::GetSoundAliasNameFromIndex(soundString);
  Alias = SND_FindAlias(SoundAliasNameFromIndex);
  if ( Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_sound_mp.cpp", 547, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tPlayContextSoundByIndex should not be called from entity worker thread. Sound was '%s'", "!Sys_IsMainThreadEntityWorker()", SoundAliasNameFromIndex) )
    __debugbreak();
  if ( !Alias || !Alias->aliasName || !CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, Alias->aliasName) )
    return 0i64;
  __asm
  {
    vmovss  xmm0, [rsp+58h+pitch]
    vmovss  xmm1, [rsp+58h+volumeScale]
    vmovss  [rsp+58h+var_20], xmm0
    vmovss  [rsp+58h+var_28], xmm1
  }
  v15 = SND_PlayContextSound(Alias, 0, contextIndex, contextIndex2, (const LocalClientNum_t)this->m_localClientNum, entitynum, v17, v18, origin);
  if ( v15 )
    CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, Alias->aliasName, Alias->head->flags & 1);
  return v15;
}

/*
==============
CgSoundSystemMP::PlayEntitySoundAliasCompassPing
==============
*/

__int64 __fastcall CgSoundSystemMP::PlayEntitySoundAliasCompassPing(CgSoundSystemMP *this, __int64 entitynum, const vec3_t *origin, double distancePercent)
{
  int v9; 
  int v10; 

  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vmulss  xmm0, xmm3, xmm3
    vsubss  xmm0, xmm2, xmm0
    vmulss  xmm1, xmm0, cs:__real@3fc00000
    vmovss  [rsp+48h+var_20], xmm1
    vmovss  [rsp+48h+var_28], xmm2
  }
  return ((__int64 (__fastcall *)(CgSoundSystemMP *, __int64, const vec3_t *, SndAliasList *, int, int, _DWORD))this->PlaySoundAliasScaled)(this, entitynum, origin, cgMedia.uavPing, v9, v10, 0);
}

/*
==============
CgSoundSystemMP::PlayExplosionSoundAsync
==============
*/
void CgSoundSystemMP::PlayExplosionSoundAsync(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, const unsigned int reflectionClass)
{
  const char *aliasName; 
  unsigned __int64 SndEntHandle; 

  if ( aliasList )
  {
    aliasName = aliasList->aliasName;
    if ( aliasName )
    {
      if ( CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasName) && !CG_EntityWorkers_TryAddPlayExplosionSoundRequest(entitynum, origin, aliasList, surfaceType, reflectionClass) )
      {
        SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
        SND_PlayExplosionSoundAsync(aliasList, surfaceType, SndEntHandle, origin, reflectionClass);
        CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName, aliasList->head->flags & 1);
      }
    }
  }
}

/*
==============
CgSoundSystemMP::PlayLocalSoundAliasByName
==============
*/
__int64 CgSoundSystemMP::PlayLocalSoundAliasByName(CgSoundSystemMP *this, const char *aliasname)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  SndAliasList *Alias; 
  const SndAliasList *v7; 
  unsigned int v8; 

  if ( Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_sound_mp.cpp", 244, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tPlayLocalSoundAliasByName should not be called from entity worker thread. Sound was '%s'", "!Sys_IsMainThreadEntityWorker()", aliasname) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_sound_mp.cpp", 248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Alias = SND_FindAlias(aliasname);
  v7 = Alias;
  if ( !Alias || !Alias->aliasName || !CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, p_predictedPlayerState->clientNum, &p_predictedPlayerState->origin, Alias->aliasName) )
    return 0i64;
  v8 = SND_PlayLocalSoundAlias(this->m_localClientNum, v7, SASYS_CGAME);
  if ( v8 )
    CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, p_predictedPlayerState->clientNum, &p_predictedPlayerState->origin, v7->aliasName, v7->head->flags & 1);
  return v8;
}

/*
==============
CgSoundSystemMP::PlaySoundAliasByName2
==============
*/
__int64 CgSoundSystemMP::PlaySoundAliasByName2(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const char *aliasname)
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
  return ((__int64 (__fastcall *)(CgSoundSystemMP *, _QWORD, const vec3_t *, SndAliasList *, int, int, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)entitynum, origin, Alias, v10, v11, 0);
}

/*
==============
CgSoundSystemMP::PlaySoundAliasByName
==============
*/
__int64 CgSoundSystemMP::PlaySoundAliasByName(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, int soundString)
{
  const char *SoundAliasNameFromIndex; 
  SndAliasList *Alias; 
  int v11; 
  int v12; 

  SoundAliasNameFromIndex = CgSoundSystemMP::GetSoundAliasNameFromIndex(soundString);
  Alias = SND_FindAlias(SoundAliasNameFromIndex);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_20], xmm0
    vmovss  [rsp+48h+var_28], xmm0
  }
  return ((__int64 (__fastcall *)(CgSoundSystemMP *, _QWORD, const vec3_t *, SndAliasList *, int, int, _DWORD))this->PlaySoundAliasScaled)(this, (unsigned int)entitynum, origin, Alias, v11, v12, 0);
}

/*
==============
CgSoundSystemMP::PlaySoundAliasScaled
==============
*/
__int64 CgSoundSystemMP::PlaySoundAliasScaled(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale, float pitch, int timeshift)
{
  const char *aliasName; 
  unsigned int v16; 
  __int64 result; 
  float looping; 
  float loopinga; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !aliasList )
    goto LABEL_8;
  aliasName = aliasList->aliasName;
  if ( !aliasName )
    goto LABEL_8;
  if ( !CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasName) )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm6, [rsp+58h+pitch]
    vmovss  xmm3, [rsp+58h+volumeScale]; volumeScale
    vmovss  dword ptr [rsp+58h+looping], xmm6
  }
  if ( !CG_EntityWorkers_TryAddPlaySoundAliasScaledRequest(entitynum, origin, aliasList, *(float *)&_XMM3, looping, timeshift) )
  {
    __asm
    {
      vmovss  xmm3, [rsp+58h+volumeScale]; volumeScale
      vmovss  dword ptr [rsp+58h+looping], xmm6
    }
    v16 = SND_PlayScaledSoundAlias(aliasList, (const LocalClientNum_t)this->m_localClientNum, entitynum, *(float *)&_XMM3, loopinga, origin, 0, SASYS_CGAME);
    if ( v16 )
      CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName, aliasList->head->flags & 1);
    result = v16;
  }
  else
  {
LABEL_8:
    result = 0i64;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
CgSoundSystemMP::PlaySoundAliasScaledAsync
==============
*/
void CgSoundSystemMP::PlaySoundAliasScaledAsync(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, float volumeScale, float pitch, int timeshift)
{
  const char *aliasName; 
  float looping; 
  float loopinga; 

  if ( aliasList )
  {
    aliasName = aliasList->aliasName;
    if ( aliasName )
    {
      if ( CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasName) )
      {
        __asm
        {
          vmovss  xmm3, [rsp+58h+arg_20]; volumeScale
          vmovaps [rsp+58h+var_18], xmm6
          vmovss  xmm6, [rsp+58h+arg_28]
          vmovss  dword ptr [rsp+58h+looping], xmm6
        }
        if ( !CG_EntityWorkers_TryAddPlaySoundAliasScaledRequest(entitynum, origin, aliasList, *(float *)&_XMM3, looping, timeshift) )
        {
          __asm
          {
            vmovss  xmm3, [rsp+58h+arg_20]; volumeScale
            vmovss  dword ptr [rsp+58h+looping], xmm6
          }
          SND_PlayScaledSoundAliasAsync(aliasList, (const LocalClientNum_t)this->m_localClientNum, entitynum, *(float *)&_XMM3, loopinga, origin, 0, SASYS_CGAME);
          CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName, aliasList->head->flags & 1);
        }
        __asm { vmovaps xmm6, [rsp+58h+var_18] }
      }
    }
  }
}

/*
==============
CgSoundSystemMP::PlaySurfaceSound
==============
*/
__int64 CgSoundSystemMP::PlaySurfaceSound(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  const char *aliasName; 
  unsigned __int64 SndEntHandle; 
  unsigned int v19; 
  __int64 result; 
  float looping; 
  float loopinga; 
  int v25; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  if ( !aliasList )
    goto LABEL_8;
  aliasName = aliasList->aliasName;
  if ( !aliasName )
    goto LABEL_8;
  if ( !CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasName) )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm6, [rsp+68h+pitch]
    vmovss  xmm7, [rsp+68h+volumeScale]
    vmovss  [rsp+68h+var_40], xmm6
    vmovss  dword ptr [rsp+68h+looping], xmm7
  }
  if ( !CG_EntityWorkers_TryAddSurfaceSoundRequest(entitynum, origin, aliasList, surfaceType, looping, *(float *)&v25, fadeTime) )
  {
    SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
    __asm
    {
      vmovaps xmm3, xmm7; volumeScale
      vmovss  dword ptr [rsp+68h+looping], xmm6
    }
    v19 = SND_PlaySurfaceSound(aliasList, surfaceType, SndEntHandle, *(float *)&_XMM3, loopinga, fadeTime, origin);
    if ( v19 )
      CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName, aliasList->head->flags & 1);
    result = v19;
  }
  else
  {
LABEL_8:
    result = 0i64;
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
CgSoundSystemMP::PlaySurfaceSoundAsync
==============
*/
void CgSoundSystemMP::PlaySurfaceSoundAsync(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  const char *aliasName; 
  unsigned __int64 SndEntHandle; 
  float looping; 
  float loopinga; 
  int v23; 

  if ( aliasList )
  {
    aliasName = aliasList->aliasName;
    if ( aliasName )
    {
      if ( CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasName) )
      {
        __asm
        {
          vmovaps [rsp+68h+var_18], xmm6
          vmovss  xmm6, [rsp+68h+arg_30]
          vmovaps [rsp+68h+var_28], xmm7
          vmovss  xmm7, [rsp+68h+arg_28]
          vmovss  [rsp+68h+var_40], xmm6
          vmovss  dword ptr [rsp+68h+looping], xmm7
        }
        if ( !CG_EntityWorkers_TryAddSurfaceSoundRequest(entitynum, origin, aliasList, surfaceType, looping, *(float *)&v23, fadeTime) )
        {
          SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, entitynum);
          __asm
          {
            vmovaps xmm3, xmm7; volumeScale
            vmovss  dword ptr [rsp+68h+looping], xmm6
          }
          SND_PlaySurfaceSoundAsync(aliasList, surfaceType, SndEntHandle, *(float *)&_XMM3, loopinga, fadeTime, origin);
          CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName, aliasList->head->flags & 1);
        }
        __asm
        {
          vmovaps xmm6, [rsp+68h+var_18]
          vmovaps xmm7, [rsp+68h+var_28]
        }
      }
    }
  }
}

/*
==============
CgSoundSystemMP::PlaySurfaceSoundByIndex
==============
*/
__int64 CgSoundSystemMP::PlaySurfaceSoundByIndex(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, int soundString, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  const char *SoundAliasNameFromIndex; 
  SndAliasList *Alias; 

  SoundAliasNameFromIndex = CgSoundSystemMP::GetSoundAliasNameFromIndex(soundString);
  Alias = SND_FindAlias(SoundAliasNameFromIndex);
  return ((__int64 (__fastcall *)(CgSoundSystemMP *, _QWORD, const vec3_t *, SndAliasList *))this->PlaySurfaceSound)(this, (unsigned int)entitynum, origin, Alias);
}

/*
==============
CgSoundSystemMP::PlaySurfaceSoundOnSndEnt
==============
*/
__int64 CgSoundSystemMP::PlaySurfaceSoundOnSndEnt(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const unsigned __int64 sndEntHandle, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  unsigned int v18; 
  __int64 result; 
  float v22; 
  int v23; 
  float org; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  if ( !aliasList )
    goto LABEL_8;
  if ( !aliasList->aliasName )
    goto LABEL_8;
  if ( !CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName) )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm6, [rsp+78h+pitch]
    vmovss  xmm7, [rsp+78h+volumeScale]
    vmovss  dword ptr [rsp+78h+org], xmm6
    vmovss  [rsp+78h+var_50], xmm7
  }
  if ( !CG_EntityWorkers_TryAddSurfaceSoundOnSndEntRequest(entitynum, origin, sndEntHandle, aliasList, surfaceType, *(float *)&v23, org, fadeTime) )
  {
    __asm
    {
      vmovaps xmm3, xmm7; volumeScale
      vmovss  [rsp+78h+var_58], xmm6
    }
    v18 = SND_PlaySurfaceSound(aliasList, surfaceType, sndEntHandle, *(float *)&_XMM3, v22, fadeTime, origin);
    if ( v18 )
      CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName, aliasList->head->flags & 1);
    result = v18;
  }
  else
  {
LABEL_8:
    result = 0i64;
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
  return result;
}

/*
==============
CgSoundSystemMP::PlaySurfaceSoundOnSndEntAsync
==============
*/
void CgSoundSystemMP::PlaySurfaceSoundOnSndEntAsync(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const unsigned __int64 sndEntHandle, const SndAliasList *aliasList, int surfaceType, float volumeScale, float pitch, int fadeTime)
{
  float v20; 
  int v21; 
  float org; 

  if ( aliasList && aliasList->aliasName && CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName) )
  {
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vmovss  xmm6, [rsp+78h+pitch]
      vmovss  dword ptr [rsp+78h+org], xmm6
      vmovaps [rsp+78h+var_38], xmm7
      vmovss  xmm7, [rsp+78h+volumeScale]
      vmovss  [rsp+78h+var_50], xmm7
    }
    if ( !CG_EntityWorkers_TryAddSurfaceSoundOnSndEntRequest(entitynum, origin, sndEntHandle, aliasList, surfaceType, *(float *)&v21, org, fadeTime) )
    {
      __asm
      {
        vmovaps xmm3, xmm7; volumeScale
        vmovss  [rsp+78h+var_58], xmm6
      }
      SND_PlaySurfaceSoundAsync(aliasList, surfaceType, sndEntHandle, *(float *)&_XMM3, v20, fadeTime, origin);
      CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName, aliasList->head->flags & 1);
    }
    __asm
    {
      vmovaps xmm6, [rsp+78h+var_28]
      vmovaps xmm7, [rsp+78h+var_38]
    }
  }
}

/*
==============
CgSoundSystemMP::PlayWeaponSound
==============
*/
void CgSoundSystemMP::PlayWeaponSound(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, const Weapon *weapon, bool isAlternate, bool isPlayer, int autoSimId, __int64 autoSimTimeStamp, float autoSimDistSq, const SndWeapShotCountId shotCount, const GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *pm_flags, bool isDualWield, PlayerHandIndex hand, const bool isHyperBurstSound)
{
  const char *v19; 
  bool isProne; 
  float v22; 

  if ( Sys_IsMainThreadEntityWorker() )
  {
    v19 = aliasList ? aliasList->aliasName : "none";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_sound_mp.cpp", 379, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tPlayWeaponSound should not be called from entity worker thread. Sound was '%s'", "!Sys_IsMainThreadEntityWorker()", v19) )
      __debugbreak();
  }
  if ( aliasList && aliasList->aliasName && CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName) )
  {
    isProne = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)pm_flags, ACTIVE, 0);
    __asm
    {
      vmovss  xmm0, [rsp+88h+autoSimDistSq]
      vmovss  [rsp+88h+var_40], xmm0
    }
    SND_PlayWeaponSound(aliasList, (const LocalClientNum_t)this->m_localClientNum, entitynum, origin, weapon, isAlternate, isPlayer, autoSimId, autoSimTimeStamp, v22, shotCount, isProne, isDualWield, hand, isHyperBurstSound);
    CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasList->aliasName, aliasList->head->flags & 1);
  }
}

/*
==============
CgSoundSystemMP::PlayWhizbyAndImpactSfx
==============
*/
void CgSoundSystemMP::PlayWhizbyAndImpactSfx(CgSoundSystemMP *this, const CgSfxImpactInfo *inSfxInfo, bool playWhizby, int whizbyEnt, const vec3_t *initialPos, const vec3_t *start, const vec3_t *end, int surfType, const Weapon *inWeapon, bool isAlternate, const int hitImpactDelayOverride, SndHitmarkerType hitmarkerType)
{
  LocalClientNum_t m_localClientNum; 
  int result; 

  m_localClientNum = this->m_localClientNum;
  if ( m_localClientNum == LOCAL_CLIENT_0 || !CG_GetLocalClientGlobals(m_localClientNum)->inKillCam || !CG_GetOmnvar_IntegerByName(m_localClientNum, "post_game_state", &result, NULL, NULL) || (unsigned int)(result - 3) > 1 )
    CgSoundSystem::PlayWhizbyAndImpactSfx_Internal(this, inSfxInfo, playWhizby, whizbyEnt, initialPos, start, end, surfType, inWeapon, isAlternate, hitImpactDelayOverride, hitmarkerType);
}

/*
==============
CgSoundSystemMP::ShouldPlaySoundOnLocalClient
==============
*/
char CgSoundSystemMP::ShouldPlaySoundOnLocalClient(const LocalClientNum_t localClientNum, const int entitynum, const vec3_t *origin, const char *aliasname)
{
  char v7; 
  cg_t *LocalClientGlobals; 
  LocalClientNum_t v9; 
  connstate_t *p_connectionState; 
  int v12; 
  __int64 v13; 
  CgSoundPlaybackTrackingInfo *v14; 
  int v15; 
  int v16; 
  int inKillCam; 
  int wasInKillcam; 
  bool v20; 
  __int64 v21; 
  const char *v22; 
  const char *v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  int v29; 
  __int64 v31; 
  __int64 v32; 
  int result; 
  cg_t *v34; 

  if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount == 1 )
    return 1;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v34 = LocalClientGlobals;
  if ( LocalClientGlobals->inKillCam || (v9 = LOCAL_CLIENT_0, SLODWORD(cl_maxLocalClients) <= 0) )
  {
LABEL_20:
    __asm { vmovaps [rsp+0A8h+var_58], xmm6 }
    if ( localClientNum && CG_GetLocalClientGlobals(localClientNum)->inKillCam && CG_GetOmnvar_IntegerByName(localClientNum, "post_game_state", &result, NULL, NULL) && (unsigned int)(result - 3) <= 1 )
    {
LABEL_53:
      v7 = 0;
    }
    else
    {
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      v12 = 0;
      v13 = 0i64;
      while ( 1 )
      {
        v14 = &s_SoundPlaybackTracking[v13];
        if ( !v14->aliasname )
          break;
        v15 = v14->entitynum;
        v16 = v14->localClientNum;
        inKillCam = LocalClientGlobals->inKillCam;
        wasInKillcam = v14->wasInKillcam;
        __asm { vmovaps xmm2, xmm6; epsilon }
        v20 = VecNCompareCustomEpsilon(origin->v, v14->origin.v, *(float *)&_XMM2, 3);
        v21 = 0x7FFFFFFFi64;
        v22 = v14->aliasname;
        result = v20;
        if ( !aliasname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v23 = (const char *)(aliasname - v22);
        while ( 1 )
        {
          v24 = (unsigned __int8)v22[(_QWORD)v23];
          v25 = v21;
          v26 = *(unsigned __int8 *)v22++;
          --v21;
          if ( !v25 )
          {
LABEL_41:
            v29 = 0;
            goto LABEL_42;
          }
          if ( v24 != v26 )
          {
            v27 = v24 + 32;
            if ( v24 - 65 > 0x19 )
              v27 = v24;
            v24 = v27;
            v28 = v26 + 32;
            if ( v26 - 65 > 0x19 )
              v28 = v26;
            if ( v24 != v28 )
              break;
          }
          if ( !v24 )
            goto LABEL_41;
        }
        v29 = 1;
        if ( v24 < v28 )
          v29 = -1;
LABEL_42:
        if ( entitynum == v15 && localClientNum != v16 && inKillCam == wasInKillcam && result && !v29 )
          goto LABEL_53;
        ++v12;
        if ( ++v13 >= 64 )
          break;
        LocalClientGlobals = v34;
      }
      v7 = v12 < 64;
    }
    __asm { vmovaps xmm6, [rsp+0A8h+var_58] }
  }
  else
  {
    p_connectionState = &clientUIActives[0].connectionState;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v32) = 2;
        LODWORD(v31) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE && !CG_GetLocalClientGlobals(v9)->inKillCam )
      {
        if ( (unsigned int)v9 >= LODWORD(cl_maxLocalClients) )
        {
          *(float *)&v32 = cl_maxLocalClients;
          LODWORD(v31) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_sound_mp.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( (cl_maxLocalClients) )", "clientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        if ( CG_GetLocalClientGlobals(v9)->predictedPlayerState.clientNum == entitynum )
          return v9 == localClientNum;
      }
      ++v9;
      p_connectionState += 110;
      if ( v9 >= SLODWORD(cl_maxLocalClients) )
      {
        LocalClientGlobals = v34;
        goto LABEL_20;
      }
    }
  }
  return v7;
}

/*
==============
CgSoundSystemMP::StopSoundAliasByName
==============
*/
void CgSoundSystemMP::StopSoundAliasByName(CgSoundSystemMP *this, const int entitynum, const int soundString)
{
  const char *SoundAliasNameFromIndex; 

  SoundAliasNameFromIndex = CgSoundSystemMP::GetSoundAliasNameFromIndex(soundString);
  if ( !SoundAliasNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_sound_mp.cpp", 663, ASSERT_TYPE_ASSERT, "(aliasLookup.name)", (const char *)&queryFormat, "aliasLookup.name") )
    __debugbreak();
  CgSoundSystem::StopSoundAlias(this, entitynum, (SndAliasLookup)SoundAliasNameFromIndex);
}

/*
==============
CgSoundSystemMP::UpdateSoundPlaybackTracking
==============
*/
void CgSoundSystemMP::UpdateSoundPlaybackTracking(const LocalClientNum_t localClientNum, const int entitynum, const vec3_t *origin, const char *aliasname, bool looping)
{
  cg_t *LocalClientGlobals; 
  const char **p_aliasname; 
  int v11; 
  CgSoundPlaybackTrackingInfo *v12; 

  if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount != 1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    p_aliasname = &s_SoundPlaybackTracking[1].aliasname;
    v11 = 0;
    while ( *(p_aliasname - 6) )
    {
      if ( !*p_aliasname )
      {
        ++v11;
        break;
      }
      if ( !p_aliasname[6] )
      {
        v11 += 2;
        break;
      }
      if ( !p_aliasname[12] )
      {
        v11 += 3;
        break;
      }
      p_aliasname += 24;
      v11 += 4;
      if ( (__int64)p_aliasname >= (__int64)&unk_15150E118 )
        break;
    }
    if ( v11 < 64 )
    {
      v12 = &s_SoundPlaybackTracking[v11];
      v12->entitynum = entitynum;
      v12->localClientNum = localClientNum;
      v12->aliasname = aliasname;
      v12->wasInKillcam = LocalClientGlobals->inKillCam;
      v12->looping = looping;
      v12->frameCount = 0;
      v12->origin.v[0] = origin->v[0];
      v12->origin.v[1] = origin->v[1];
      v12->origin.v[2] = origin->v[2];
    }
  }
}

/*
==============
CgSoundSystemMP::UpdateVehicleSound
==============
*/
void CgSoundSystemMP::UpdateVehicleSound(CgSoundSystemMP *this, const int entitynum, const vec3_t *origin, const SndAliasList *aliasList, const float throttle, const float brake, const float rpm, const float speed, const int gear, const float distanceScale)
{
  const char *aliasName; 
  float v27; 
  LocalClientNum_t m_localClientNum; 
  float looping; 
  float loopinga; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  int geara; 
  float v41; 
  float v42; 
  vec3_t v43; 

  if ( aliasList )
  {
    _RDI = origin;
    aliasName = aliasList->aliasName;
    if ( aliasName )
    {
      if ( CgSoundSystemMP::ShouldPlaySoundOnLocalClient((const LocalClientNum_t)this->m_localClientNum, entitynum, origin, aliasName) )
      {
        __asm
        {
          vmovaps [rsp+0B8h+var_18], xmm6
          vmovss  xmm6, [rsp+0B8h+arg_48]
          vmovaps [rsp+0B8h+var_28], xmm7
          vmovss  xmm7, [rsp+0B8h+arg_38]
          vmovss  [rsp+0B8h+var_78], xmm6
          vmovaps [rsp+0B8h+var_38], xmm8
          vmovss  xmm8, [rsp+0B8h+arg_30]
          vmovaps [rsp+0B8h+var_48], xmm9
          vmovss  xmm9, [rsp+0B8h+arg_28]
          vmovss  [rsp+0B8h+var_88], xmm7
          vmovaps [rsp+0B8h+var_58], xmm10
          vmovss  xmm10, [rsp+0B8h+arg_20]
          vmovaps xmm3, xmm10; throttle
          vmovss  [rsp+0B8h+var_90], xmm8
          vmovss  dword ptr [rsp+0B8h+looping], xmm9
        }
        if ( !CG_EntityWorkers_TryAddUpdateVehicleSound(entitynum, _RDI, aliasList, *(const float *)&_XMM3, looping, v36, v38, gear, v41) )
        {
          __asm { vmovsd  xmm0, qword ptr [rdi] }
          v27 = _RDI->v[2];
          m_localClientNum = this->m_localClientNum;
          __asm
          {
            vmovss  [rsp+0B8h+var_70], xmm6
            vmovss  [rsp+0B8h+gear], xmm7
            vmovss  [rsp+0B8h+var_88], xmm8
            vmovss  [rsp+0B8h+var_90], xmm9
            vmovss  dword ptr [rsp+0B8h+looping], xmm10
            vmovsd  [rsp+0B8h+var_68], xmm0
          }
          v43.v[2] = v27;
          SND_UpdateVehicle(aliasList, m_localClientNum, entitynum, &v43, loopinga, v37, v39, *(float *)&geara, gear, v42);
          CgSoundSystemMP::UpdateSoundPlaybackTracking((const LocalClientNum_t)this->m_localClientNum, entitynum, _RDI, aliasList->aliasName, aliasList->head->flags & 1);
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
  }
}

