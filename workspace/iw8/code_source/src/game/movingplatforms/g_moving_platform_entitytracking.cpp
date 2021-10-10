/*
==============
GMovingPlatformEntityTracking::DropItem
==============
*/

int __fastcall GMovingPlatformEntityTracking::DropItem(GMovingPlatformEntityTracking *this, const playerState_s *ps)
{
  return ?DropItem@GMovingPlatformEntityTracking@@QEAAHPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
GMovingPlatformEntityTracking::InitPlatformTracking
==============
*/

void __fastcall GMovingPlatformEntityTracking::InitPlatformTracking(GMovingPlatformEntityTracking *this, gentity_s *ent, gentity_s *parent)
{
  ?InitPlatformTracking@GMovingPlatformEntityTracking@@QEAAXPEAUgentity_s@@0@Z(this, ent, parent);
}

/*
==============
GMovingPlatformEntityTracking::ForceSetPlatformToTrack
==============
*/

int __fastcall GMovingPlatformEntityTracking::ForceSetPlatformToTrack(GMovingPlatformEntityTracking *this, gentity_s *ent)
{
  return ?ForceSetPlatformToTrack@GMovingPlatformEntityTracking@@QEAAHPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GMovingPlatformEntityTracking::DropItem
==============
*/

int __fastcall GMovingPlatformEntityTracking::DropItem(GMovingPlatformEntityTracking *this, int moverEntityId)
{
  return ?DropItem@GMovingPlatformEntityTracking@@QEAAHH@Z(this, moverEntityId);
}

/*
==============
GMovingPlatformEntityTracking::GetTrackingDelta
==============
*/

int __fastcall GMovingPlatformEntityTracking::GetTrackingDelta(GMovingPlatformEntityTracking *this, const gentity_s *platform, vec3_t *outPlatformDelta, vec3_t *outPlatformADelta)
{
  return ?GetTrackingDelta@GMovingPlatformEntityTracking@@QEAAHPEBUgentity_s@@AEATvec3_t@@1@Z(this, platform, outPlatformDelta, outPlatformADelta);
}

/*
==============
GMovingPlatformEntityTracking::UpdatePlatformTracking
==============
*/

int __fastcall GMovingPlatformEntityTracking::UpdatePlatformTracking(GMovingPlatformEntityTracking *this, gentity_s *ent)
{
  return ?UpdatePlatformTracking@GMovingPlatformEntityTracking@@QEAAHPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GMovingPlatformEntityTracking::UpdatePlatformTrackingState
==============
*/

int __fastcall GMovingPlatformEntityTracking::UpdatePlatformTrackingState(GMovingPlatformEntityTracking *this, gentity_s *ent, int linkToPlatform)
{
  return ?UpdatePlatformTrackingState@GMovingPlatformEntityTracking@@QEAAHPEAUgentity_s@@H@Z(this, ent, linkToPlatform);
}

/*
==============
GMovingPlatformEntityTracking::DropItem
==============
*/
__int64 GMovingPlatformEntityTracking::DropItem(GMovingPlatformEntityTracking *this, int moverEntityId)
{
  __int64 v2; 
  gentity_s *v4; 
  Vehicle *vehicle; 
  int v7; 
  int v8; 

  v2 = moverEntityId;
  if ( moverEntityId == 2047 || !BGMovingPlatforms::IsMovingPlatform(moverEntityId) || !G_IsEntityInUse(v2) )
    return 0i64;
  if ( (unsigned int)v2 >= 0x800 )
  {
    v8 = 2048;
    v7 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = &g_entities[v2];
  vehicle = v4->vehicle;
  if ( vehicle )
  {
    if ( BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
      return 0i64;
  }
  EntHandle::setEnt(&this->m_trackEnt, v4);
  return 1i64;
}

/*
==============
GMovingPlatformEntityTracking::DropItem
==============
*/
__int64 GMovingPlatformEntityTracking::DropItem(GMovingPlatformEntityTracking *this, const playerState_s *ps)
{
  __int64 m_movingPlatformEntity; 
  gentity_s *v5; 
  Vehicle *vehicle; 

  if ( !ps )
    return 0i64;
  m_movingPlatformEntity = ps->movingPlatforms.m_movingPlatformEntity;
  if ( (_DWORD)m_movingPlatformEntity == 2047 || !BGMovingPlatforms::IsMovingPlatform(m_movingPlatformEntity) || !G_IsEntityInUse(m_movingPlatformEntity) )
    return 0i64;
  if ( (unsigned int)m_movingPlatformEntity >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", m_movingPlatformEntity, 2048) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v5 = &g_entities[m_movingPlatformEntity];
  vehicle = v5->vehicle;
  if ( vehicle )
  {
    if ( BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
      return 0i64;
  }
  EntHandle::setEnt(&this->m_trackEnt, v5);
  return 1i64;
}

/*
==============
GMovingPlatformEntityTracking::ForceSetPlatformToTrack
==============
*/
__int64 GMovingPlatformEntityTracking::ForceSetPlatformToTrack(GMovingPlatformEntityTracking *this, gentity_s *ent)
{
  Vehicle *vehicle; 

  vehicle = ent->vehicle;
  if ( vehicle && BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
    return 0i64;
  EntHandle::setEnt(&this->m_trackEnt, ent);
  return 1i64;
}

/*
==============
GMovingPlatformEntityTracking::GetTrackingDelta
==============
*/
__int64 GMovingPlatformEntityTracking::GetTrackingDelta(GMovingPlatformEntityTracking *this, const gentity_s *platform, vec3_t *outPlatformDelta, vec3_t *outPlatformADelta)
{
  entityType_s eType; 
  const char *v8; 
  float frameDuration; 
  Vehicle *vehicle; 
  Vehicle *v12; 

  *(_QWORD *)outPlatformDelta->v = 0i64;
  outPlatformDelta->v[2] = 0.0;
  *(_QWORD *)outPlatformADelta->v = 0i64;
  outPlatformADelta->v[2] = 0.0;
  eType = platform->s.eType;
  switch ( eType )
  {
    case ET_PLAYER:
      v8 = SL_ConvertToString(platform->targetname);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "tracking parent's platform no longer supported %s", v8) )
      {
        __debugbreak();
        return 1i64;
      }
      return 1i64;
    case ET_SCRIPTMOVER:
      *outPlatformDelta = platform->moverInfo.m_deltaOrigin;
      *outPlatformADelta = platform->moverInfo.m_deltaAngles;
      return 1i64;
    case ET_VEHICLE:
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      frameDuration = (float)level.frameDuration;
      if ( !platform->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 97, ASSERT_TYPE_ASSERT, "(platform->vehicle)", (const char *)&queryFormat, "platform->vehicle") )
        __debugbreak();
      vehicle = platform->vehicle;
      outPlatformDelta->v[0] = (float)(frameDuration * vehicle->phys.vel.v[0]) * 0.001;
      outPlatformDelta->v[1] = (float)(frameDuration * vehicle->phys.vel.v[1]) * 0.001;
      outPlatformDelta->v[2] = (float)(frameDuration * vehicle->phys.vel.v[2]) * 0.001;
      v12 = platform->vehicle;
      outPlatformADelta->v[0] = (float)(frameDuration * v12->phys.rotVel.v[0]) * 0.001;
      outPlatformADelta->v[1] = (float)(frameDuration * v12->phys.rotVel.v[1]) * 0.001;
      outPlatformADelta->v[2] = (float)(frameDuration * v12->phys.rotVel.v[2]) * 0.001;
      return 1i64;
  }
  return 0i64;
}

/*
==============
GMovingPlatformEntityTracking::InitPlatformTracking
==============
*/
void GMovingPlatformEntityTracking::InitPlatformTracking(GMovingPlatformEntityTracking *this, gentity_s *ent, gentity_s *parent)
{
  playerState_s *EntityPlayerState; 
  bool v6; 
  bool v7; 
  __int64 m_movingPlatformEntity; 
  gentity_s *v9; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v12; 
  GMovingPlatforms *MovingPlatforms; 
  __int64 v14; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 268, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( parent )
  {
    EntityPlayerState = G_GetEntityPlayerState(parent);
    if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    if ( EntityPlayerState )
    {
      v6 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 0xDu);
      v7 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 1u);
      if ( BGMovingPlatforms::IsOnMovingPlatform(EntityPlayerState) && !v6 && !v7 )
      {
        if ( EntityPlayerState->movingPlatforms.m_movingPlatformEntity >= 0x800u )
        {
          LODWORD(v14) = EntityPlayerState->movingPlatforms.m_movingPlatformEntity;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 287, ASSERT_TYPE_ASSERT, "(unsigned)( ps->movingPlatforms.GetMoverEntityID() ) < (unsigned)( ( 2048 ) )", "ps->movingPlatforms.GetMoverEntityID() doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, 2048) )
            __debugbreak();
        }
        m_movingPlatformEntity = EntityPlayerState->movingPlatforms.m_movingPlatformEntity;
        v9 = &g_entities[m_movingPlatformEntity];
        if ( ent->s.eType != ET_MISSILE || (v9->s.staticState.vehiclePlayer.playerIndex & 4) == 0 )
        {
          EntHandle::setEnt(&ent->movingPlatformTrack.m_trackEnt, &g_entities[m_movingPlatformEntity]);
          if ( v9 )
          {
            Instance = GWeaponMap::GetInstance();
            WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
            v12 = BG_WeaponDef(WeaponForEntity, ent->s.inAltWeaponMode);
            if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 315, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
              __debugbreak();
            if ( v12->isRollingGrenade )
            {
              MovingPlatforms = GMovingPlatforms::GetMovingPlatforms();
              if ( MovingPlatforms->ShouldHandleAsMovingPlatformThatIsActuallyMoving(MovingPlatforms, v9) )
                G_Utils_AddEvent(ent, 0x72u, 0);
            }
          }
        }
      }
    }
    else
    {
      GMovingPlatforms::ms_instance->ActorUpdateEntityMoverTracking(GMovingPlatforms::ms_instance, ent, parent);
    }
  }
}

/*
==============
GMovingPlatformEntityTracking::UpdatePlatformTracking
==============
*/
__int64 GMovingPlatformEntityTracking::UpdatePlatformTracking(GMovingPlatformEntityTracking *this, gentity_s *ent)
{
  GMovingPlatformEntityTracking *p_movingPlatformTrack; 
  unsigned __int16 number; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  trajectory_t_secure *p_pos; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v11; 
  BOOL v12; 
  int v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  gentity_s *v16; 
  entityType_s eType; 
  const char *v18; 
  float v19; 
  float frameDuration; 
  float *vehicle; 
  float *v22; 
  const char *v23; 
  vec3_t *p_currentOrigin; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  unsigned __int16 EntityHitId; 
  __int64 v30; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  __int64 contentmask; 
  __int64 v40; 
  vec3_t trBase; 
  __int64 v42; 
  vec3_t end; 
  vec3_t v0; 
  vec3_t deltaAngles; 
  vec3_t start; 
  trace_t results; 

  v42 = -2i64;
  p_movingPlatformTrack = &ent->movingPlatformTrack;
  number = ent->movingPlatformTrack.m_trackEnt.number;
  if ( !number )
    return 0i64;
  v5 = number;
  v6 = number - 1;
  if ( v6 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, 2048) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v7 = v5 - 1;
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] )
  {
    LODWORD(v40) = p_movingPlatformTrack->m_trackEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v40) )
      __debugbreak();
  }
  if ( !p_movingPlatformTrack->m_trackEnt.number )
    return 0i64;
  if ( ent->tagInfo )
    goto LABEL_72;
  p_pos = &ent->s.lerp.pos;
  if ( BgTrajectory::IsTrackingTrajectory(&ent->s.lerp.pos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 137, ASSERT_TYPE_ASSERT, "(!BgTrajectory::IsTrackingTrajectory( &ent->s.lerp.pos ))", (const char *)&queryFormat, "!BgTrajectory::IsTrackingTrajectory( &ent->s.lerp.pos )") )
    __debugbreak();
  if ( BgTrajectory::IsTrackingTrajectory(&ent->s.lerp.apos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 138, ASSERT_TYPE_ASSERT, "(!BgTrajectory::IsTrackingTrajectory( &ent->s.lerp.apos ))", (const char *)&queryFormat, "!BgTrajectory::IsTrackingTrajectory( &ent->s.lerp.apos )") )
    __debugbreak();
  if ( ent->s.eType == ET_MISSILE )
  {
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
    v11 = BG_WeaponDef(WeaponForEntity, ent->s.inAltWeaponMode);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 144, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    v12 = v11->weapClass == WEAPCLASS_ROCKETLAUNCHER;
  }
  else
  {
    v12 = 0;
  }
  v13 = p_movingPlatformTrack->m_trackEnt.number;
  if ( (unsigned int)(v13 - 1) >= 0x7FF )
  {
    LODWORD(v40) = 2047;
    LODWORD(contentmask) = v13 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", contentmask, v40) )
      __debugbreak();
  }
  v14 = p_movingPlatformTrack->m_trackEnt.number;
  if ( (unsigned int)(v14 - 1) >= 0x800 )
  {
    LODWORD(v40) = 2048;
    LODWORD(contentmask) = v14 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", contentmask, v40) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v14 - 1].r.isInUse != g_entityIsInUse[v14 - 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v14 - 1] )
  {
    LODWORD(v40) = p_movingPlatformTrack->m_trackEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v40) )
      __debugbreak();
  }
  v15 = p_movingPlatformTrack->m_trackEnt.number;
  v16 = g_entities;
  v0.v[0] = 0.0;
  v0.v[1] = 0.0;
  v0.v[2] = 0.0;
  deltaAngles.v[0] = 0.0;
  deltaAngles.v[1] = 0.0;
  deltaAngles.v[2] = 0.0;
  eType = g_entities[v15 - 1].s.eType;
  if ( eType == ET_PLAYER )
  {
    v18 = SL_ConvertToString(g_entities[v15 - 1].targetname);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "tracking parent's platform no longer supported %s", v18) )
      __debugbreak();
  }
  else
  {
    if ( eType == ET_SCRIPTMOVER )
    {
      v0 = g_entities[v15 - 1].moverInfo.m_deltaOrigin;
      *(_QWORD *)deltaAngles.v = *(_QWORD *)g_entities[v15 - 1].moverInfo.m_deltaAngles.v;
      v19 = g_entities[v15 - 1].moverInfo.m_deltaAngles.v[2];
    }
    else
    {
      if ( eType != ET_VEHICLE )
        return 0i64;
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      frameDuration = (float)level.frameDuration;
      if ( !v16[v15 - 1].vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 97, ASSERT_TYPE_ASSERT, "(platform->vehicle)", (const char *)&queryFormat, "platform->vehicle") )
        __debugbreak();
      vehicle = (float *)v16[v15 - 1].vehicle;
      v0.v[0] = (float)(frameDuration * vehicle[78]) * 0.001;
      v0.v[1] = (float)(frameDuration * vehicle[79]) * 0.001;
      v0.v[2] = (float)(frameDuration * vehicle[80]) * 0.001;
      v22 = (float *)v16[v15 - 1].vehicle;
      deltaAngles.v[0] = (float)(frameDuration * v22[90]) * 0.001;
      deltaAngles.v[1] = (float)(frameDuration * v22[91]) * 0.001;
      v19 = (float)(frameDuration * v22[92]) * 0.001;
    }
    deltaAngles.v[2] = v19;
  }
  if ( v16[v15 - 1].s.eType == ET_PLAYER )
  {
    v23 = SL_ConvertToString(v16[v15 - 1].targetname);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "tracking parent's platform no longer supported %s", v23) )
      __debugbreak();
  }
  if ( VecNCompareCustomEpsilon(v0.v, ZERO_VEC.v, 0.001, 3) && VecNCompareCustomEpsilon(deltaAngles.v, ZERO_VEC.v, 0.001, 3) )
    return 0i64;
  p_currentOrigin = &ent->r.currentOrigin;
  v25 = ent->r.currentOrigin.v[0];
  start = ent->r.currentOrigin;
  if ( v12 )
  {
    p_currentOrigin->v[0] = v25 + v0.v[0];
    ent->r.currentOrigin.v[1] = v0.v[1] + ent->r.currentOrigin.v[1];
    ent->r.currentOrigin.v[2] = v0.v[2] + ent->r.currentOrigin.v[2];
  }
  else
  {
    BGMovingPlatforms::UpdatePoint(&ent->r.currentOrigin, &v16[v15 - 1].r.currentOrigin, &v16[v15 - 1].r.currentAngles, &deltaAngles, &v0);
  }
  G_Main_TraceCapsule(&results, &start, &ent->r.currentOrigin, &bounds_origin, ent->s.number, 8193);
  if ( results.fraction < 1.0 && Trace_GetEntityHitId(&results) == 2046 )
  {
    v26 = (float)((float)(p_currentOrigin->v[0] - start.v[0]) * results.fraction) + start.v[0];
    v27 = (float)((float)(ent->r.currentOrigin.v[1] - start.v[1]) * results.fraction) + start.v[1];
    v28 = (float)((float)(ent->r.currentOrigin.v[2] - start.v[2]) * results.fraction) + start.v[2];
LABEL_71:
    p_currentOrigin->v[0] = v26;
    p_currentOrigin->v[1] = v27;
    p_currentOrigin->v[2] = v28;
LABEL_72:
    EntHandle::setEnt(&p_movingPlatformTrack->m_trackEnt, NULL);
    return 0i64;
  }
  end.v[0] = p_currentOrigin->v[0];
  end.v[1] = ent->r.currentOrigin.v[1];
  end.v[2] = ent->r.currentOrigin.v[2] - 10.0;
  G_Main_TraceCapsule(&results, &ent->r.currentOrigin, &end, &bounds_origin, ent->s.number, 8193);
  if ( results.fraction < 1.0 )
  {
    EntityHitId = Trace_GetEntityHitId(&results);
    v30 = EntityHitId;
    if ( EntityHitId == 2046 )
    {
      v26 = (float)((float)(end.v[0] - p_currentOrigin->v[0]) * results.fraction) + p_currentOrigin->v[0];
      v27 = (float)((float)(end.v[1] - p_currentOrigin->v[1]) * results.fraction) + p_currentOrigin->v[1];
      v28 = (float)((float)(end.v[2] - p_currentOrigin->v[2]) * results.fraction) + p_currentOrigin->v[2];
      goto LABEL_71;
    }
    if ( BGMovingPlatforms::IsMovingPlatform(EntityHitId) && (_DWORD)v30 != v16[v15 - 1].s.number && G_IsEntityInUse(v30) )
      EntHandle::setEnt(&p_movingPlatformTrack->m_trackEnt, &g_entities[v30]);
  }
  v32 = p_currentOrigin->v[0] - start.v[0];
  v33 = p_currentOrigin->v[1] - start.v[1];
  v34 = p_currentOrigin->v[2] - start.v[2];
  if ( !p_pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
  {
    *(_QWORD *)end.v = &trBase;
    v35 = p_pos->trBase.v[1];
    LODWORD(trBase.v[2]) = s_trbase_aab_Z ^ LODWORD(v35) ^ LODWORD(p_pos->trBase.v[2]);
    LODWORD(trBase.v[1]) = s_trbase_aab_Y ^ LODWORD(p_pos->trBase.v[0]) ^ LODWORD(v35);
    LODWORD(trBase.v[0]) = LODWORD(p_pos->trBase.v[0]) ^ ~s_trbase_aab_X;
    memset(&end, 0, 8ui64);
    v36 = trBase.v[0];
    end.v[0] = trBase.v[0];
    if ( (LODWORD(trBase.v[0]) & 0x7F800000) == 2139095040 || (v37 = trBase.v[1], end.v[0] = trBase.v[1], (LODWORD(trBase.v[1]) & 0x7F800000) == 2139095040) || (v38 = trBase.v[2], end.v[0] = trBase.v[2], (LODWORD(trBase.v[2]) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
      v38 = trBase.v[2];
      v37 = trBase.v[1];
      v36 = trBase.v[0];
    }
  }
  else
  {
    v36 = p_pos->trBase.v[0];
    v37 = p_pos->trBase.v[1];
    v38 = p_pos->trBase.v[2];
  }
  trBase.v[0] = v36 + v32;
  trBase.v[1] = v37 + v33;
  trBase.v[2] = v38 + v34;
  Trajectory_SetTrBase(p_pos, &trBase);
  memset(&trBase, 0, sizeof(trBase));
  return 1i64;
}

/*
==============
GMovingPlatformEntityTracking::UpdatePlatformTrackingState
==============
*/
__int64 GMovingPlatformEntityTracking::UpdatePlatformTrackingState(GMovingPlatformEntityTracking *this, gentity_s *ent, int linkToPlatform)
{
  float v5; 
  float v6; 
  int number; 
  const gentity_s *v8; 
  gentity_s *v9; 
  float fraction; 
  float v12; 
  float v13; 
  trace_t results; 
  vec3_t v15; 
  vec3_t v16; 

  if ( ent->tagInfo )
    return 0i64;
  v5 = ent->r.currentOrigin.v[1];
  v6 = ent->r.currentOrigin.v[2];
  number = ent->s.number;
  v15.v[0] = ent->r.currentOrigin.v[0];
  v15.v[1] = v5;
  v16.v[0] = v15.v[0];
  v16.v[1] = v5;
  v8 = NULL;
  v15.v[2] = v6 + 1.0;
  v16.v[2] = v6 - 200.0;
  G_Main_LocationalTrace(&results, &v15, &v16, number, 8193, NULL);
  if ( !GMovingPlatforms::TraceHitMovingPlatform(&results) )
  {
    if ( results.fraction < 1.0 )
      EntHandle::setEnt(&ent->movingPlatformTrack.m_trackEnt, NULL);
    return 0i64;
  }
  v9 = &g_entities[results.hitId];
  if ( ent->s.eType == ET_MISSILE && (v9->s.staticState.vehiclePlayer.playerIndex & 4) != 0 )
  {
    EntHandle::setEnt(&ent->movingPlatformTrack.m_trackEnt, NULL);
    return 0i64;
  }
  else
  {
    if ( linkToPlatform )
    {
      fraction = results.fraction;
      v12 = v16.v[1];
      ent->r.currentOrigin.v[0] = (float)((float)(v16.v[0] - v15.v[0]) * results.fraction) + v15.v[0];
      v13 = (float)(v16.v[2] - v15.v[2]) * fraction;
      ent->r.currentOrigin.v[1] = (float)((float)(v12 - v15.v[1]) * fraction) + v15.v[1];
      ent->r.currentOrigin.v[2] = v13 + v15.v[2];
      Trajectory_SetTrBase(&ent->s.lerp.pos, &ent->r.currentOrigin);
      G_EntLinkTo(ent, v9, (scr_string_t)0, 0, NULL);
    }
    else
    {
      v8 = &g_entities[results.hitId];
    }
    EntHandle::setEnt(&ent->movingPlatformTrack.m_trackEnt, v8);
    return 1i64;
  }
}

