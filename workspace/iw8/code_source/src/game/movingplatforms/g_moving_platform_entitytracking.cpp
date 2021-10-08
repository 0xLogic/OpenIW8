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
  const char *v9; 

  _RDI = outPlatformADelta;
  *(_QWORD *)outPlatformDelta->v = 0i64;
  _RSI = outPlatformDelta;
  outPlatformDelta->v[2] = 0.0;
  *(_QWORD *)outPlatformADelta->v = 0i64;
  outPlatformADelta->v[2] = 0.0;
  eType = platform->s.eType;
  switch ( eType )
  {
    case ET_PLAYER:
      v9 = SL_ConvertToString(platform->targetname);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "tracking parent's platform no longer supported %s", v9) )
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
      __asm { vmovaps [rsp+48h+var_18], xmm6 }
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      }
      if ( !platform->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 97, ASSERT_TYPE_ASSERT, "(platform->vehicle)", (const char *)&queryFormat, "platform->vehicle") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, cs:__real@3a83126f
        vmulss  xmm0, xmm6, dword ptr [rax+138h]
        vmulss  xmm0, xmm0, xmm2
        vmovss  dword ptr [rsi], xmm0
        vmulss  xmm1, xmm6, dword ptr [rax+13Ch]
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rsi+4], xmm0
        vmulss  xmm1, xmm6, dword ptr [rax+140h]
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rsi+8], xmm0
        vmulss  xmm0, xmm6, dword ptr [rax+168h]
        vmulss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rdi], xmm1
        vmulss  xmm0, xmm6, dword ptr [rax+16Ch]
        vmulss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rdi+4], xmm1
        vmulss  xmm0, xmm6, dword ptr [rax+170h]
        vmovaps xmm6, [rsp+48h+var_18]
        vmulss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rdi+8], xmm1
      }
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
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v16; 
  BOOL v17; 
  int v18; 
  __int64 v19; 
  entityType_s eType; 
  const char *v25; 
  const char *v45; 
  char v59; 
  unsigned __int16 EntityHitId; 
  __int64 v79; 
  __int64 result; 
  float v101; 
  __int64 contentmask; 
  __int64 v109; 
  vec3_t trBase; 
  __int64 v111; 
  vec3_t end; 
  vec3_t v0; 
  vec3_t deltaAngles; 
  vec3_t start; 
  trace_t results; 
  char v117; 
  void *retaddr; 

  _RAX = &retaddr;
  v111 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  p_movingPlatformTrack = &ent->movingPlatformTrack;
  number = ent->movingPlatformTrack.m_trackEnt.number;
  if ( !number )
    goto LABEL_73;
  v10 = number;
  v11 = number - 1;
  if ( v11 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, 2048) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v12 = v10 - 1;
  if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v12] )
  {
    LODWORD(v109) = p_movingPlatformTrack->m_trackEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v109) )
      __debugbreak();
  }
  if ( !p_movingPlatformTrack->m_trackEnt.number )
    goto LABEL_73;
  if ( ent->tagInfo )
    goto LABEL_72;
  _R13 = &ent->s.lerp.pos;
  if ( BgTrajectory::IsTrackingTrajectory(&ent->s.lerp.pos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 137, ASSERT_TYPE_ASSERT, "(!BgTrajectory::IsTrackingTrajectory( &ent->s.lerp.pos ))", (const char *)&queryFormat, "!BgTrajectory::IsTrackingTrajectory( &ent->s.lerp.pos )") )
    __debugbreak();
  if ( BgTrajectory::IsTrackingTrajectory(&ent->s.lerp.apos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 138, ASSERT_TYPE_ASSERT, "(!BgTrajectory::IsTrackingTrajectory( &ent->s.lerp.apos ))", (const char *)&queryFormat, "!BgTrajectory::IsTrackingTrajectory( &ent->s.lerp.apos )") )
    __debugbreak();
  if ( ent->s.eType == ET_MISSILE )
  {
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
    v16 = BG_WeaponDef(WeaponForEntity, ent->s.inAltWeaponMode);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 144, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    v17 = v16->weapClass == WEAPCLASS_ROCKETLAUNCHER;
  }
  else
  {
    v17 = 0;
  }
  v18 = p_movingPlatformTrack->m_trackEnt.number;
  if ( (unsigned int)(v18 - 1) >= 0x7FF )
  {
    LODWORD(v109) = 2047;
    LODWORD(contentmask) = v18 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", contentmask, v109) )
      __debugbreak();
  }
  v19 = p_movingPlatformTrack->m_trackEnt.number;
  if ( (unsigned int)(v19 - 1) >= 0x800 )
  {
    LODWORD(v109) = 2048;
    LODWORD(contentmask) = v19 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", contentmask, v109) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v19 - 1].r.isInUse != g_entityIsInUse[v19 - 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v19 - 1] )
  {
    LODWORD(v109) = p_movingPlatformTrack->m_trackEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v109) )
      __debugbreak();
  }
  _RBX = p_movingPlatformTrack->m_trackEnt.number;
  _RSI = g_entities;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+160h+v0], xmm0
    vmovss  [rsp+160h+var_F4], xmm0
    vmovss  [rsp+160h+var_F0], xmm0
    vmovss  dword ptr [rsp+160h+deltaAngles], xmm0
    vmovss  dword ptr [rsp+160h+deltaAngles+4], xmm0
    vmovss  dword ptr [rbp+60h+deltaAngles+8], xmm0
  }
  eType = g_entities[_RBX - 1].s.eType;
  __asm { vmovss  xmm6, cs:__real@3a83126f }
  if ( eType == ET_PLAYER )
  {
    v25 = SL_ConvertToString(g_entities[_RBX - 1].targetname);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "tracking parent's platform no longer supported %s", v25) )
      __debugbreak();
  }
  else
  {
    if ( eType == ET_SCRIPTMOVER )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rsi-308h]
        vmovss  [rsp+160h+v0], xmm0
        vmovss  xmm1, dword ptr [rbx+rsi-304h]
        vmovss  [rsp+160h+var_F4], xmm1
        vmovss  xmm0, dword ptr [rbx+rsi-300h]
        vmovss  [rsp+160h+var_F0], xmm0
        vmovss  xmm1, dword ptr [rbx+rsi-2FCh]
        vmovss  dword ptr [rsp+160h+deltaAngles], xmm1
        vmovss  xmm0, dword ptr [rbx+rsi-2F8h]
        vmovss  dword ptr [rsp+160h+deltaAngles+4], xmm0
        vmovss  xmm1, dword ptr [rbx+rsi-2F4h]
      }
    }
    else
    {
      if ( eType != ET_VEHICLE )
      {
LABEL_73:
        result = 0i64;
        goto LABEL_74;
      }
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      }
      if ( !_RSI[_RBX - 1].vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 97, ASSERT_TYPE_ASSERT, "(platform->vehicle)", (const char *)&queryFormat, "platform->vehicle") )
        __debugbreak();
      __asm
      {
        vmulss  xmm0, xmm7, dword ptr [rax+138h]
        vmulss  xmm1, xmm0, xmm6
        vmovss  [rsp+160h+v0], xmm1
        vmulss  xmm0, xmm7, dword ptr [rax+13Ch]
        vmulss  xmm1, xmm0, xmm6
        vmovss  [rsp+160h+var_F4], xmm1
        vmulss  xmm0, xmm7, dword ptr [rax+140h]
        vmulss  xmm1, xmm0, xmm6
        vmovss  [rsp+160h+var_F0], xmm1
        vmulss  xmm0, xmm7, dword ptr [rax+168h]
        vmulss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rsp+160h+deltaAngles], xmm1
        vmulss  xmm0, xmm7, dword ptr [rax+16Ch]
        vmulss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rsp+160h+deltaAngles+4], xmm1
        vmulss  xmm0, xmm7, dword ptr [rax+170h]
        vmulss  xmm1, xmm0, xmm6
      }
    }
    __asm { vmovss  dword ptr [rbp+60h+deltaAngles+8], xmm1 }
  }
  if ( _RSI[_RBX - 1].s.eType == ET_PLAYER )
  {
    v45 = SL_ConvertToString(_RSI[_RBX - 1].targetname);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platform_entitytracking.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "tracking parent's platform no longer supported %s", v45) )
      __debugbreak();
  }
  __asm { vmovaps xmm2, xmm6; epsilon }
  if ( VecNCompareCustomEpsilon(v0.v, ZERO_VEC.v, *(float *)&_XMM2, 3) )
  {
    __asm { vmovaps xmm2, xmm6; epsilon }
    if ( VecNCompareCustomEpsilon(deltaAngles.v, ZERO_VEC.v, *(float *)&_XMM2, 3) )
      goto LABEL_73;
  }
  _RDI = &ent->r.currentOrigin;
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]
    vmovss  dword ptr [rbp+60h+start], xmm2
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+60h+start+4], xmm0
    vmovss  xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+60h+start+8], xmm1
  }
  if ( v17 )
  {
    __asm
    {
      vaddss  xmm1, xmm2, [rsp+160h+v0]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, [rsp+160h+var_F4]
      vaddss  xmm0, xmm2, dword ptr [r14+134h]
      vmovss  dword ptr [rdi+4], xmm0
      vmovss  xmm1, [rsp+160h+var_F0]
      vaddss  xmm2, xmm1, dword ptr [r14+138h]
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
  else
  {
    BGMovingPlatforms::UpdatePoint(&ent->r.currentOrigin, &_RSI[_RBX - 1].r.currentOrigin, &_RSI[_RBX - 1].r.currentAngles, &deltaAngles, &v0);
  }
  G_Main_TraceCapsule(&results, &start, &ent->r.currentOrigin, &bounds_origin, ent->s.number, 8193);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm0, [rbp+60h+results.fraction]
    vcomiss xmm0, xmm6
  }
  if ( v59 && Trace_GetEntityHitId(&results) == 2046 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm1, xmm0, dword ptr [rbp+60h+start]
      vmovss  xmm5, [rbp+60h+results.fraction]
      vmulss  xmm0, xmm1, xmm5
      vaddss  xmm6, xmm0, dword ptr [rbp+60h+start]
      vmovss  xmm2, dword ptr [rdi+4]
      vsubss  xmm0, xmm2, dword ptr [rbp+60h+start+4]
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm3, xmm1, dword ptr [rbp+60h+start+4]
      vmovss  xmm2, dword ptr [rdi+8]
      vsubss  xmm0, xmm2, dword ptr [rbp+60h+start+8]
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm2, xmm1, dword ptr [rbp+60h+start+8]
    }
LABEL_71:
    __asm
    {
      vmovss  dword ptr [rdi], xmm6
      vmovss  dword ptr [rdi+4], xmm3
      vmovss  dword ptr [rdi+8], xmm2
    }
LABEL_72:
    EntHandle::setEnt(&p_movingPlatformTrack->m_trackEnt, NULL);
    goto LABEL_73;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsp+160h+end], xmm0
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+160h+end+4], xmm1
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm2, xmm0, cs:__real@41200000
    vmovss  dword ptr [rsp+160h+end+8], xmm2
  }
  G_Main_TraceCapsule(&results, &ent->r.currentOrigin, &end, &bounds_origin, ent->s.number, 8193);
  __asm
  {
    vmovss  xmm0, [rbp+60h+results.fraction]
    vcomiss xmm0, xmm6
  }
  if ( v59 )
  {
    EntityHitId = Trace_GetEntityHitId(&results);
    v79 = EntityHitId;
    if ( EntityHitId == 2046 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+160h+end]
        vsubss  xmm1, xmm0, dword ptr [rdi]
        vmovss  xmm5, [rbp+60h+results.fraction]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm6, xmm1, dword ptr [rdi]
        vmovss  xmm0, dword ptr [rsp+160h+end+4]
        vsubss  xmm1, xmm0, dword ptr [rdi+4]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rsp+160h+end+8]
        vsubss  xmm1, xmm0, dword ptr [rdi+8]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm2, xmm2, dword ptr [rdi+8]
      }
      goto LABEL_71;
    }
    if ( BGMovingPlatforms::IsMovingPlatform(EntityHitId) && (_DWORD)v79 != _RSI[_RBX - 1].s.number && G_IsEntityInUse(v79) )
      EntHandle::setEnt(&p_movingPlatformTrack->m_trackEnt, &g_entities[v79]);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm6, xmm0, dword ptr [rbp+60h+start]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm7, xmm1, dword ptr [rbp+60h+start+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm8, xmm0, dword ptr [rbp+60h+start+8]
  }
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( _R13->trType == TR_LINEAR_STOP_SECURE )
  {
    *(_QWORD *)end.v = &trBase;
    v101 = _R13->trBase.v[1];
    LODWORD(trBase.v[2]) = s_trbase_aab_Z ^ LODWORD(v101) ^ LODWORD(_R13->trBase.v[2]);
    LODWORD(trBase.v[1]) = s_trbase_aab_Y ^ LODWORD(_R13->trBase.v[0]) ^ LODWORD(v101);
    LODWORD(trBase.v[0]) = LODWORD(_R13->trBase.v[0]) ^ ~s_trbase_aab_X;
    memset(&end, 0, 8ui64);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+160h+trBase]
      vmovss  dword ptr [rsp+160h+end], xmm0
    }
    if ( (LODWORD(end.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_93;
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+160h+trBase+4]
      vmovss  dword ptr [rsp+160h+end], xmm1
    }
    if ( (LODWORD(end.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_93;
    __asm
    {
      vmovss  xmm2, dword ptr [rsp+160h+trBase+8]
      vmovss  dword ptr [rsp+160h+end], xmm2
    }
    if ( (LODWORD(end.v[0]) & 0x7F800000) == 2139095040 )
    {
LABEL_93:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, dword ptr [rsp+160h+trBase+8]
        vmovss  xmm1, dword ptr [rsp+160h+trBase+4]
        vmovss  xmm0, dword ptr [rsp+160h+trBase]
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+0Ch]
      vmovss  xmm1, dword ptr [r13+10h]
      vmovss  xmm2, dword ptr [r13+14h]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rsp+160h+trBase], xmm0
    vaddss  xmm1, xmm1, xmm7
    vmovss  dword ptr [rsp+160h+trBase+4], xmm1
    vaddss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rsp+160h+trBase+8], xmm0
  }
  Trajectory_SetTrBase(_R13, &trBase);
  memset(&trBase, 0, sizeof(trBase));
  result = 1i64;
LABEL_74:
  _R11 = &v117;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
GMovingPlatformEntityTracking::UpdatePlatformTrackingState
==============
*/
__int64 GMovingPlatformEntityTracking::UpdatePlatformTrackingState(GMovingPlatformEntityTracking *this, gentity_s *ent, int linkToPlatform)
{
  int number; 
  const gentity_s *v12; 
  gentity_s *v13; 
  trace_t results; 
  vec3_t v30; 
  vec3_t v31; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = ent;
  if ( ent->tagInfo )
    return 0i64;
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+130h]
    vmovss  xmm0, dword ptr [rdx+134h]
    vmovss  xmm2, dword ptr [rdx+138h]
  }
  number = ent->s.number;
  __asm
  {
    vmovss  dword ptr [r11-48h], xmm1
    vmovss  dword ptr [r11-44h], xmm0
    vmovss  dword ptr [r11-38h], xmm1
    vsubss  xmm1, xmm2, cs:__real@43480000
    vmovss  dword ptr [r11-34h], xmm0
    vaddss  xmm0, xmm2, cs:__real@3f800000
  }
  v12 = NULL;
  __asm
  {
    vmovss  dword ptr [r11-40h], xmm0
    vmovss  dword ptr [r11-30h], xmm1
  }
  G_Main_LocationalTrace(&results, &v30, &v31, number, 8193, NULL);
  if ( !GMovingPlatforms::TraceHitMovingPlatform(&results) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+0D8h+results.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
    return 0i64;
  }
  v13 = &g_entities[results.hitId];
  if ( _RBX->s.eType == ET_MISSILE && (v13->s.staticState.vehiclePlayer.playerIndex & 4) != 0 )
  {
    EntHandle::setEnt(&_RBX->movingPlatformTrack.m_trackEnt, NULL);
    return 0i64;
  }
  else
  {
    if ( linkToPlatform )
    {
      __asm
      {
        vmovss  xmm5, [rsp+0D8h+results.fraction]
        vmovss  xmm0, [rsp+0D8h+var_38]
        vsubss  xmm1, xmm0, [rsp+0D8h+var_48]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm0, xmm1, [rsp+0D8h+var_48]
        vmovss  xmm1, [rsp+0D8h+var_34]
        vmovss  dword ptr [rbx+130h], xmm0
        vsubss  xmm0, xmm1, [rsp+0D8h+var_44]
        vmulss  xmm2, xmm0, xmm5
        vaddss  xmm3, xmm2, [rsp+0D8h+var_44]
        vmovss  xmm0, [rsp+0D8h+var_30]
        vsubss  xmm1, xmm0, [rsp+0D8h+var_40]
        vmulss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rbx+134h], xmm3
        vaddss  xmm3, xmm2, [rsp+0D8h+var_40]
        vmovss  dword ptr [rbx+138h], xmm3
      }
      Trajectory_SetTrBase(&_RBX->s.lerp.pos, &_RBX->r.currentOrigin);
      G_EntLinkTo(_RBX, v13, (scr_string_t)0, 0, NULL);
    }
    else
    {
      v12 = &g_entities[results.hitId];
    }
    EntHandle::setEnt(&_RBX->movingPlatformTrack.m_trackEnt, v12);
    return 1i64;
  }
}

