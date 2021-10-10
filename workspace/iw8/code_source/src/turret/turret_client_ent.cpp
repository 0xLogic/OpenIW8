/*
==============
CG_Turret_UpdateBarrelSpinRumble
==============
*/

void __fastcall CG_Turret_UpdateBarrelSpinRumble(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Turret_UpdateBarrelSpinRumble@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Turret_UpdateCamoAndStickers
==============
*/

void __fastcall CG_Turret_UpdateCamoAndStickers(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_Turret_UpdateCamoAndStickers@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Turret_UpdateBarrelSpinSoundPlayback
==============
*/

void __fastcall CG_Turret_UpdateBarrelSpinSoundPlayback(LocalClientNum_t localClientNum, const unsigned int entNum)
{
  ?CG_Turret_UpdateBarrelSpinSoundPlayback@@YAXW4LocalClientNum_t@@I@Z(localClientNum, entNum);
}

/*
==============
CG_Turret_UpdateBarrelSpinSound
==============
*/

void __fastcall CG_Turret_UpdateBarrelSpinSound(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Turret_UpdateBarrelSpinSound@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Turret_Reset
==============
*/

void __fastcall CG_Turret_Reset(centity_t *cent)
{
  ?CG_Turret_Reset@@YAXPEAUcentity_t@@@Z(cent);
}

/*
==============
CG_Turret_ShutdownEntity
==============
*/

void __fastcall CG_Turret_ShutdownEntity(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Turret_ShutdownEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Turret_UpdateMotionSounds
==============
*/

void __fastcall CG_Turret_UpdateMotionSounds(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Turret_UpdateMotionSounds@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Turret_PlaySoundAlias
==============
*/

unsigned int __fastcall CG_Turret_PlaySoundAlias(LocalClientNum_t localClientNum, const int entNum, const vec3_t *origin, const SndAliasLookup *snd)
{
  return ?CG_Turret_PlaySoundAlias@@YAIW4LocalClientNum_t@@HAEBTvec3_t@@AEBUSndAliasLookup@@@Z(localClientNum, entNum, origin, snd);
}

/*
==============
CG_Turret_StopSounds
==============
*/

void __fastcall CG_Turret_StopSounds(LocalClientNum_t localClientNum, int entNum)
{
  ?CG_Turret_StopSounds@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Turret_UpdateHeat
==============
*/

void __fastcall CG_Turret_UpdateHeat(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Turret_UpdateHeat@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Turret_GetSpinSoundCount
==============
*/
__int64 CG_Turret_GetSpinSoundCount(LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 v2; 
  bool v4; 
  const BgWeaponMap **v5; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v7; 
  unsigned __int8 i; 
  __int64 v10; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 112, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 113, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v2] == NULL;
  v5 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v2];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(*v5, &cent->nextState);
  v7 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 117, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  for ( i = 0; i < 4u; ++i )
  {
    if ( !v7->turretBarrelSpinUpSnd[i].name )
      break;
    if ( !v7->turretBarrelSpinDownSnd[i].name )
      break;
  }
  if ( !i )
  {
    LODWORD(v10) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 126, ASSERT_TYPE_ASSERT, "( ( numSounds > 0 ) )", "( numSounds ) = %i", v10) )
      __debugbreak();
  }
  if ( !*((_QWORD *)&v7->turretBarrelSpinMaxSnd.name + i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 127, ASSERT_TYPE_ASSERT, "(weapDef->turretBarrelSpinUpSnd[numSounds-1].name != 0)", (const char *)&queryFormat, "weapDef->turretBarrelSpinUpSnd[numSounds-1].name != NULL") )
    __debugbreak();
  if ( !v7->turretBarrelSpinUpSnd[i + 3].name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 128, ASSERT_TYPE_ASSERT, "(weapDef->turretBarrelSpinDownSnd[numSounds-1].name != 0)", (const char *)&queryFormat, "weapDef->turretBarrelSpinDownSnd[numSounds-1].name != NULL") )
    __debugbreak();
  return i;
}

/*
==============
CG_Turret_PlaySoundAlias
==============
*/
unsigned int CG_Turret_PlaySoundAlias(LocalClientNum_t localClientNum, const int entNum, const vec3_t *origin, const SndAliasLookup *snd)
{
  CgSoundSystem *SoundSystem; 
  const SndAliasList *Alias; 

  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  Alias = SND_FindAlias(snd->name);
  return CgSoundSystem::PlaySoundAlias(SoundSystem, entNum, origin, Alias);
}

/*
==============
CG_Turret_Reset
==============
*/
void CG_Turret_Reset(centity_t *cent)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 54, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 55, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
    __debugbreak();
  memset_0(&cent->pose.160, 0, 0x50ui64);
  *(_DWORD *)((char *)&cent->pose.moverFx + 29) = -16843010;
  cent->pose.turret.tagIdx_barrel = -2;
}

/*
==============
CG_Turret_ShutdownEntity
==============
*/
void CG_Turret_ShutdownEntity(LocalClientNum_t localClientNum, centity_t *cent)
{
  bool v4; 
  unsigned int number; 
  centity_t *Entity; 
  CgSoundSystem *SoundSystem; 
  __int64 v8; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 93, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v4 = (cent->flags & 1) == 0;
  cent->pose.turret.deployed = 0;
  if ( !v4 )
  {
    number = cent->nextState.number;
    if ( number >= 0x800 )
    {
      LODWORD(v8) = cent->nextState.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
        __debugbreak();
    }
    Entity = CG_GetEntity(localClientNum, number);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 76, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( Entity->pose.eType != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 77, ASSERT_TYPE_ASSERT, "(cent->pose.eType == ET_TURRET)", (const char *)&queryFormat, "cent->pose.eType == ET_TURRET") )
      __debugbreak();
    Entity->pose.vehicle.wheelFraction[5] = 0;
    *(CEntFx *)((char *)&Entity->pose.moverFx + 36) = 0i64;
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    CgSoundSystem::StopSoundsOnEnt(SoundSystem, number);
  }
}

/*
==============
CG_Turret_StopSounds
==============
*/
void CG_Turret_StopSounds(LocalClientNum_t localClientNum, int entNum)
{
  centity_t *Entity; 
  CgSoundSystem *SoundSystem; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 76, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( Entity->pose.eType != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 77, ASSERT_TYPE_ASSERT, "(cent->pose.eType == ET_TURRET)", (const char *)&queryFormat, "cent->pose.eType == ET_TURRET") )
    __debugbreak();
  Entity->pose.vehicle.wheelFraction[5] = 0;
  *(CEntFx *)((char *)&Entity->pose.moverFx + 36) = 0i64;
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  CgSoundSystem::StopSoundsOnEnt(SoundSystem, entNum);
}

/*
==============
CG_Turret_UpdateBarrelSpinRumble
==============
*/
void CG_Turret_UpdateBarrelSpinRumble(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v5; 
  cg_t *LocalClientGlobals; 
  double v7; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 396, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 397, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v2], &cent->nextState);
  v5 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 402, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v5->turretBarrelSpinEnabled && v5->turretBarrelSpinRumble )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 411, ASSERT_TYPE_SANITY, "( cgameGlob )", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == cent->nextState.number )
    {
      v7 = BG_Turret_ComputeBarrelSpinRate(v5, (const LerpEntityStateTurret *)&cent->nextState.lerp.u, LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime);
      if ( *(float *)&v7 > 0.0 && !LocalClientGlobals->IsClientGamePaused(LocalClientGlobals) )
        CG_Rumble_PlayDeferred((LocalClientNum_t)v2, v5->turretBarrelSpinRumble, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, *(float *)&v7, 1);
    }
  }
}

/*
==============
CG_Turret_UpdateBarrelSpinSound
==============
*/
void CG_Turret_UpdateBarrelSpinSound(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  entityState_t *p_nextState; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v6; 
  int v7; 
  cg_t *LocalClientGlobals; 
  int barrelRollSndTime; 
  bool v10; 
  int v11; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 145, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 146, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  p_nextState = &cent->nextState;
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v2], &cent->nextState);
  v6 = BG_WeaponDef(WeaponForEntity, 0);
  v7 = 1;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 162, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v6->turretBarrelSpinEnabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 168, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !BG_IsTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags) || LocalClientGlobals->predictedPlayerState.viewlocked_entNum != p_nextState->number )
      v7 = 0;
    if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2088, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( !BG_IsTurretActiveFlags(&cent->nextState.lerp.eFlags) || v7 || !CL_IsRenderingSplitScreen() )
    {
      barrelRollSndTime = cent->pose.turret.barrelRollSndTime;
      v10 = barrelRollSndTime == 0;
      if ( barrelRollSndTime > 0 )
      {
        if ( cent->pose.turret.barrelRollSndLastRotating == (*((_BYTE *)&cent->nextState.lerp.u.infoVolumeGrapple + 20) & 1) && barrelRollSndTime > LocalClientGlobals->time + 2 * LocalClientGlobals->frametime )
          return;
        v10 = barrelRollSndTime == 0;
      }
      if ( v10 )
      {
        BG_Turret_ComputeBarrelSpinRate(v6, (const LerpEntityStateTurret *)&cent->nextState.lerp.u, LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime);
        v11 = cent->nextState.lerp.u.anonymous.data[5];
        CG_Turret_GetSpinSoundCount((LocalClientNum_t)v2, cent);
        _XMM0 = 0i64;
        if ( (v11 & 1) != 0 )
          __asm { vroundss xmm1, xmm0, xmm2, 2 }
        else
          __asm { vroundss xmm1, xmm0, xmm2, 1 }
        cent->pose.turret.barrelRollSndIndex = (int)*(float *)&_XMM1;
      }
      cent->pose.turret.barrelRollSndLastRotating = *((_BYTE *)&cent->nextState.lerp.u.infoVolumeGrapple + 20) & 1;
      cent->pose.turret.barrelRollSndTime = LocalClientGlobals->time;
      if ( !CG_EntityWorkers_TryAddTurretBarrelSpinSoundRequest((const LocalClientNum_t)v2, p_nextState->number) )
        CG_Turret_UpdateBarrelSpinSoundPlayback((LocalClientNum_t)v2, p_nextState->number);
    }
  }
}

/*
==============
CG_Turret_UpdateBarrelSpinSoundPlayback
==============
*/
void CG_Turret_UpdateBarrelSpinSoundPlayback(LocalClientNum_t localClientNum, const unsigned int entNum)
{
  __int64 v3; 
  centity_t *Entity; 
  const BgWeaponMap **v5; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v7; 
  unsigned __int8 barrelRollSndIndex; 
  unsigned __int8 v9; 
  const char **p_name; 
  int v11; 
  CgSoundSystem *v12; 
  const SndAliasList *v13; 
  unsigned int v14; 
  int number; 
  CgSoundSystem *SoundSystem; 
  const SndAliasList *Alias; 
  unsigned int barrelSoundPlaybackId; 
  unsigned __int8 v19; 
  const char **v20; 
  int v21; 
  CgSoundSystem *v22; 
  const SndAliasList *v23; 
  CgSoundSystem *v24; 
  __int64 v25; 
  vec3_t outOrigin; 
  int msec; 

  v3 = localClientNum;
  if ( Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 221, ASSERT_TYPE_ASSERT, "( !Sys_IsMainThreadEntityWorker() )", "Even though the sounds can be threaded off, we care about the playback ID here, so this work must be deferred") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)v3, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 224, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )", -2i64) )
    __debugbreak();
  v5 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v3];
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(*v5, &Entity->nextState);
  v7 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 231, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  barrelRollSndIndex = Entity->pose.turret.barrelRollSndIndex;
  if ( barrelRollSndIndex > (unsigned __int8)CG_Turret_GetSpinSoundCount((LocalClientNum_t)v3, Entity) )
  {
    LODWORD(v25) = barrelRollSndIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 233, ASSERT_TYPE_ASSERT, "( ( turret->barrelRollSndIndex <= CG_Turret_GetSpinSoundCount( localClientNum, cent ) ) )", "( turret->barrelRollSndIndex ) = %i", v25) )
      __debugbreak();
  }
  if ( Entity->pose.turret.barrelRollSndLastRotating )
  {
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    v9 = Entity->pose.turret.barrelRollSndIndex;
    if ( v9 >= (unsigned __int8)CG_Turret_GetSpinSoundCount((LocalClientNum_t)v3, Entity) )
    {
      number = Entity->nextState.number;
      SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v3);
      Alias = SND_FindAlias(v7->turretBarrelSpinMaxSnd.name);
      v14 = CgSoundSystem::PlaySoundAlias(SoundSystem, number, &outOrigin, Alias);
    }
    else
    {
      p_name = &v7->turretBarrelSpinUpSnd[v9].name;
      v11 = Entity->nextState.number;
      v12 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v3);
      v13 = SND_FindAlias(*p_name);
      v14 = CgSoundSystem::PlaySoundAlias(v12, v11, &outOrigin, v13);
      ++Entity->pose.turret.barrelRollSndIndex;
    }
    Entity->pose.turret.barrelSoundPlaybackId = v14;
    memset(&outOrigin, 0, sizeof(outOrigin));
    barrelSoundPlaybackId = Entity->pose.turret.barrelSoundPlaybackId;
  }
  else
  {
    v19 = Entity->pose.turret.barrelRollSndIndex;
    if ( v19 )
    {
      Entity->pose.turret.barrelRollSndIndex = v19 - 1;
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      v20 = &v7->turretBarrelSpinDownSnd[Entity->pose.turret.barrelRollSndIndex].name;
      v21 = Entity->nextState.number;
      v22 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v3);
      v23 = SND_FindAlias(*v20);
      barrelSoundPlaybackId = CgSoundSystem::PlaySoundAlias(v22, v21, &outOrigin, v23);
      Entity->pose.turret.barrelSoundPlaybackId = barrelSoundPlaybackId;
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
    else
    {
      v24 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v3);
      CgSoundSystem::StopSoundAlias(v24, Entity->nextState.number, v7->turretBarrelSpinMaxSnd);
      barrelSoundPlaybackId = 0;
      Entity->pose.turret.barrelSoundPlaybackId = 0;
    }
  }
  if ( barrelSoundPlaybackId )
  {
    if ( SND_GetLengthMS(barrelSoundPlaybackId, &msec) )
      Entity->pose.turret.barrelRollSndTime += msec;
  }
}

/*
==============
CG_Turret_UpdateCamoAndStickers
==============
*/
void CG_Turret_UpdateCamoAndStickers(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  centity_t *LinkToParent; 
  DObj *obj; 
  VehicleStickerCamoInfo outStickerCamoInfo; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 482, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE) && Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE|0x100) )
  {
    LinkToParent = CG_Entity_GetLinkToParent(localClientNum, cent);
    if ( LinkToParent )
    {
      if ( BG_IsVehicleEntity(&LinkToParent->nextState) )
      {
        *(_DWORD *)outStickerCamoInfo.stickerIndices = 0;
        outStickerCamoInfo.camoIndex = 0;
        BG_Vehicle_GetStickerCamoMaterialIndices(&cent->nextState.lerp.u.turret.stickerAndCamo, &outStickerCamoInfo);
        obj = Com_GetClientDObj(cent->nextState.number, localClientNum);
        if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 501, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
          __debugbreak();
        CG_Vehicle_UpdateCamoAndSticker(localClientNum, &outStickerCamoInfo.camoIndex, 1u, outStickerCamoInfo.stickerIndices, 2u, obj);
      }
    }
  }
}

/*
==============
CG_Turret_UpdateHeat
==============
*/
void CG_Turret_UpdateHeat(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v3; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v5; 
  cg_t *LocalClientGlobals; 
  vec3_t outOrigin; 
  float outAccumulationPerShot; 
  float outDissipationPerSecond; 
  FXRegisteredDef def; 

  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 437, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent", -2i64) )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 438, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v3], &cent->nextState);
  v5 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 443, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  BG_GetHeatProperties(WeaponForEntity, 0, &outAccumulationPerShot, &outDissipationPerSecond);
  if ( outAccumulationPerShot > 0.0 && outDissipationPerSecond > 0.0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 454, ASSERT_TYPE_SANITY, "( cgameGlob )", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( (*((_BYTE *)&cent->nextState.lerp.u.infoVolumeGrapple + 20) & 2) != 0 && !cent->pose.turret.wasOverheat )
    {
      if ( v5->turretOverheatSound.name )
      {
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        CG_Turret_PlaySoundAlias((LocalClientNum_t)v3, cent->nextState.number, &outOrigin, &v5->turretOverheatSound);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      if ( v5->turretOverheatEffect.particleSystemDef )
      {
        def.m_particleSystemDef = v5->turretOverheatEffect.particleSystemDef;
        FX_PlayBoltedEffect((LocalClientNum_t)v3, &def, LocalClientGlobals->time, cent->nextState.number, cent->pose.turret.tagIdx_flash, 0);
      }
    }
    cent->pose.turret.wasOverheat = (cent->nextState.lerp.u.anonymous.data[5] & 2) != 0;
  }
}

/*
==============
CG_Turret_UpdateMotionSounds
==============
*/
void CG_Turret_UpdateMotionSounds(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v3; 
  entityState_t *p_nextState; 
  const Weapon *WeaponForEntity; 
  const char *name; 
  const char *v7; 
  centity_t *LinkToParent; 
  const centity_t *v9; 
  CgVehicleSystem *v10; 
  __int64 v11; 
  int v12; 
  bool v13; 
  bool v14; 
  VehicleClient *Client; 
  cg_t *LocalClientGlobals; 
  bool turretMoving; 
  bool v18; 
  SndAliasList *Alias; 
  CgSoundSystem *SoundSystem; 
  SndAliasList *v21; 
  CgSoundSystem *v22; 
  __int64 v23; 
  __int64 v24; 
  vec3_t outOrigin; 

  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 281, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 282, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  p_nextState = &cent->nextState;
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v3], &cent->nextState);
  name = BG_TurretSpinSound(WeaponForEntity, 0).name;
  v7 = BG_TurretStopSpinSound(WeaponForEntity, 0).name;
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  if ( CG_Turret_GetTurretEnt((const LocalClientNum_t)v3) == cent )
    goto LABEL_40;
  LinkToParent = CG_Entity_GetLinkToParent((LocalClientNum_t)v3, cent);
  v9 = LinkToParent;
  if ( LinkToParent && BG_IsVehicleEntity(&LinkToParent->nextState) )
  {
    if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v3) )
      __debugbreak();
    if ( (unsigned int)v3 >= CgVehicleSystem::ms_allocatedCount )
    {
      LODWORD(v24) = CgVehicleSystem::ms_allocatedCount;
      LODWORD(v23) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( !CgVehicleSystem::ms_vehicleSystemArray[v3] )
    {
      LODWORD(v24) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v24) )
        __debugbreak();
    }
    v10 = CgVehicleSystem::ms_vehicleSystemArray[v3];
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 314, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    v11 = (__int64)v10->GetVehicleDef(v10, &v9->nextState);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 248);
      v13 = v12 && !*(_BYTE *)(v11 + 256);
      v14 = v12 && *(_DWORD *)(v11 + 260) == 4;
      if ( v13 || v14 )
      {
        name = *(const char **)(v11 + 3240);
        v7 = *(const char **)(v11 + 3248);
        Client = CgVehicleSystem::GetClient(v10, v9);
        if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 336, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
          __debugbreak();
        outOrigin = Client->audioState.entOrigin;
LABEL_40:
        if ( name || v7 )
        {
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
          if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_client_ent.cpp", 351, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          turretMoving = LocalClientGlobals->turretMoving;
          v18 = (cent->nextState.lerp.u.anonymous.data[5] & 0x20) != 0;
          LocalClientGlobals->turretMoving = v18;
          if ( name )
          {
            if ( v18 )
            {
              Alias = SND_TryFindAlias(name);
              if ( Alias )
              {
                SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v3);
                ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)p_nextState->number, &outOrigin, Alias, LODWORD(volumeScale), LODWORD(FLOAT_1_0), 0);
              }
            }
          }
          if ( v7 )
          {
            if ( turretMoving && !LocalClientGlobals->turretMoving )
            {
              v21 = SND_TryFindAlias(v7);
              if ( v21 )
              {
                v22 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v3);
                ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD))v22->PlaySoundAliasScaledAsync)(v22, (unsigned int)p_nextState->number, &outOrigin, v21, LODWORD(volumeScale), LODWORD(FLOAT_1_0), 0);
              }
            }
          }
        }
      }
    }
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
}

