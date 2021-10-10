/*
==============
BGMovingPlatformPS::ClearMoverID
==============
*/

void __fastcall BGMovingPlatformPS::ClearMoverID(BGMovingPlatformPS *this, playerState_s *ps, const BgHandler *handler)
{
  ?ClearMoverID@BGMovingPlatformPS@@QEAAXPEAUplayerState_s@@PEBVBgHandler@@@Z(this, ps, handler);
}

/*
==============
BGMovingPlatformPS::Init
==============
*/

void __fastcall BGMovingPlatformPS::Init(BGMovingPlatformPS *this, playerState_s *ps, const BgHandler *handler)
{
  ?Init@BGMovingPlatformPS@@QEAAXPEAUplayerState_s@@PEBVBgHandler@@@Z(this, ps, handler);
}

/*
==============
BGMovingPlatformPS::UpdateMoverUpAngles
==============
*/

void __fastcall BGMovingPlatformPS::UpdateMoverUpAngles(BGMovingPlatformPS *this, playerState_s *ps, const BgHandler *handler, const Bounds *bounds)
{
  ?UpdateMoverUpAngles@BGMovingPlatformPS@@QEAAXPEAUplayerState_s@@PEBVBgHandler@@PEBUBounds@@@Z(this, ps, handler, bounds);
}

/*
==============
BGMovingPlatformPS::IsOnMovingPlatform
==============
*/

int __fastcall BGMovingPlatformPS::IsOnMovingPlatform(BGMovingPlatformPS *this)
{
  return ?IsOnMovingPlatform@BGMovingPlatformPS@@QEBAHXZ(this);
}

/*
==============
BGMovingPlatformPS::UseRockingMoverWallFix2
==============
*/

bool __fastcall BGMovingPlatformPS::UseRockingMoverWallFix2()
{
  return ?UseRockingMoverWallFix2@BGMovingPlatformPS@@SA_NXZ();
}

/*
==============
BGMovingPlatformPS::ResetMoverUpAngles
==============
*/

void __fastcall BGMovingPlatformPS::ResetMoverUpAngles(BGMovingPlatformPS *this, playerState_s *ps, const BgHandler *handler, int traceMask)
{
  ?ResetMoverUpAngles@BGMovingPlatformPS@@QEAAXPEAUplayerState_s@@PEBVBgHandler@@H@Z(this, ps, handler, traceMask);
}

/*
==============
BGMovingPlatformPS::GetMoverThenGroundEnt
==============
*/

int __fastcall BGMovingPlatformPS::GetMoverThenGroundEnt(BGMovingPlatformPS *this, const playerState_s *ps)
{
  return ?GetMoverThenGroundEnt@BGMovingPlatformPS@@QEBAHPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
BGMovingPlatformPS::SetMoverEntityID
==============
*/

void __fastcall BGMovingPlatformPS::SetMoverEntityID(BGMovingPlatformPS *this, playerState_s *ps, const BgHandler *handler, int prevId, int id, bool push, bool fixWorldUp)
{
  ?SetMoverEntityID@BGMovingPlatformPS@@QEAAXPEAUplayerState_s@@PEBVBgHandler@@HH_N2@Z(this, ps, handler, prevId, id, push, fixWorldUp);
}

/*
==============
BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled
==============
*/

bool __fastcall BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled()
{
  return ?IsNewRockingMoverCollisionEnabled@BGMovingPlatformPS@@SA_NXZ();
}

/*
==============
BGMovingPlatformPS::ClearMoverID
==============
*/
void BGMovingPlatformPS::ClearMoverID(BGMovingPlatformPS *this, playerState_s *ps, const BgHandler *handler)
{
  vec3_t outAngles; 
  WorldUpReferenceFrame v7; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_ps.cpp", 35, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v7, ps, handler);
  WorldUpReferenceFrame::GetAngles(&v7, &outAngles);
  this->m_movingPlatformEntity = 2047;
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0xDu);
  WorldUpReferenceFrame::SetAngles(&v7, ps, handler, &outAngles);
}

/*
==============
BGMovingPlatformPS::GetMoverThenGroundEnt
==============
*/
__int64 BGMovingPlatformPS::GetMoverThenGroundEnt(BGMovingPlatformPS *this, const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_ps.cpp", 53, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BGMovingPlatforms::IsMovingPlatform(this->m_movingPlatformEntity) )
    return (unsigned int)this->m_movingPlatformEntity;
  else
    return (unsigned int)ps->groundEntityNum;
}

/*
==============
BGMovingPlatformPS::Init
==============
*/
void BGMovingPlatformPS::Init(BGMovingPlatformPS *this, playerState_s *ps, const BgHandler *handler)
{
  vec3_t outAngles; 
  WorldUpReferenceFrame v7; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_ps.cpp", 35, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v7, ps, handler);
  WorldUpReferenceFrame::GetAngles(&v7, &outAngles);
  this->m_movingPlatformEntity = 2047;
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0xDu);
  WorldUpReferenceFrame::SetAngles(&v7, ps, handler, &outAngles);
  if ( Com_GameMode_SupportsFeature(WEAPON_SLIDE|0x80) )
    this->m_movingPlatformTurnRate = 1.0;
}

/*
==============
BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled
==============
*/
bool BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled()
{
  bool result; 
  const dvar_t *v1; 

  result = Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100);
  if ( result )
  {
    v1 = DVARBOOL_playerCharacterCollisionMoverRockingCollision;
    if ( !DVARBOOL_playerCharacterCollisionMoverRockingCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMoverRockingCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    return v1->current.enabled;
  }
  return result;
}

/*
==============
BGMovingPlatformPS::IsOnMovingPlatform
==============
*/
int BGMovingPlatformPS::IsOnMovingPlatform(BGMovingPlatformPS *this)
{
  return BGMovingPlatforms::IsMovingPlatform(this->m_movingPlatformEntity);
}

/*
==============
BGMovingPlatformPS::ResetMoverUpAngles
==============
*/
void BGMovingPlatformPS::ResetMoverUpAngles(BGMovingPlatformPS *this, playerState_s *ps, const BgHandler *handler, int traceMask)
{
  float v8; 
  float v9; 
  float v10; 
  const BgPlayerTraceInfo *v11; 
  EffectiveStance EffectiveStance; 
  const Bounds *bounds; 
  Physics_WorldId v14; 
  BgTrace v15; 
  trace_t results; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_ps.cpp", 188, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_ps.cpp", 189, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
  {
    if ( (0.0 != this->m_moverUpAngles.v[0] || 0.0 != this->m_moverUpAngles.v[1] || 0.0 != this->m_moverUpAngles.v[2]) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xEu) )
    {
      v8 = this->m_moverUpAngles.v[0];
      v9 = this->m_moverUpAngles.v[1];
      v10 = this->m_moverUpAngles.v[2];
      *(_QWORD *)this->m_moverUpAngles.v = 0i64;
      this->m_moverUpAngles.v[2] = 0.0;
      v11 = handler->GetPlayerTraceInfo(handler, (unsigned int)ps->clientNum);
      BgTrace::BgTrace(&v15, v11);
      EffectiveStance = PM_GetEffectiveStance(ps);
      bounds = BG_Suit_GetBounds(ps->suitIndex, EffectiveStance);
      v14 = handler->GetPhysicsWorldId((BgHandler *)handler);
      BgTrace::LegacyTraceHandler(&v15, v14, &results, &ps->origin, &ps->origin, bounds, ps->clientNum, traceMask & 0xFDFFBFFF, ps);
      if ( results.allsolid || results.startsolid )
      {
        this->m_moverUpAngles.v[0] = v8;
        this->m_moverUpAngles.v[1] = v9;
        this->m_moverUpAngles.v[2] = v10;
      }
    }
  }
  else
  {
    *(_QWORD *)this->m_moverUpAngles.v = 0i64;
    this->m_moverUpAngles.v[2] = 0.0;
  }
}

/*
==============
BGMovingPlatformPS::SetMoverEntityID
==============
*/
void BGMovingPlatformPS::SetMoverEntityID(BGMovingPlatformPS *this, playerState_s *ps, const BgHandler *handler, int prevId, int id, bool push)
{
  const dvar_t *v9; 
  const dvar_t *v10; 
  vec3_t outAngles; 
  WorldUpReferenceFrame v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_ps.cpp", 61, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = DCONST_DVARMPBOOL_antilagZeroG;
  if ( !DCONST_DVARMPBOOL_antilagZeroG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagZeroG") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled || !BG_IsPlayerZeroG(ps) || !push )
  {
    v10 = DVARBOOL_playerCharacterCollisionMantleFloorFix;
    if ( !DVARBOOL_playerCharacterCollisionMantleFloorFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleFloorFix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( !v10->current.enabled || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
    {
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v12, ps, handler);
      WorldUpReferenceFrame::GetAngles(&v12, &outAngles);
      this->m_movingPlatformEntity = id;
      if ( push && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
        GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&ps->otherFlags, ACTIVE, 0xDu);
      WorldUpReferenceFrame::SetAngles(&v12, ps, handler, &outAngles);
    }
  }
}

/*
==============
BGMovingPlatformPS::UpdateMoverUpAngles
==============
*/
void BGMovingPlatformPS::UpdateMoverUpAngles(BGMovingPlatformPS *this, playerState_s *ps, const BgHandler *handler, const Bounds *bounds)
{
  const dvar_t *v8; 
  float v9; 
  float v10; 
  vec3_t angles; 
  vec3_t v12; 
  vec3_t up; 
  vec3_t platformAngles; 
  vec4_t outBestUpQuat; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_ps.cpp", 126, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_ps.cpp", 127, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
  {
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xEu) && BGMovingPlatforms::IsOnMovingPlatform(ps) )
    {
      handler->GetEntityAngles((BgHandler *)handler, ps->movingPlatforms.m_movingPlatformEntity, &platformAngles);
      if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_END|0x80) )
        BGMovingPlatforms::GetBestPlatformUp(ps, &platformAngles, NULL, &outBestUpQuat);
      else
        AnglesToQuat(&platformAngles, &outBestUpQuat);
      UnitQuatToAngles(&outBestUpQuat, &angles);
      v8 = DVARBOOL_playerCharacterCollisionMoverRockingCollision3;
      if ( !DVARBOOL_playerCharacterCollisionMoverRockingCollision3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMoverRockingCollision3") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( !v8->current.enabled || (AngleVectors(&this->m_moverUpAngles, NULL, NULL, &up), AngleVectors(&angles, NULL, NULL, &v12), v9 = bounds->halfSize.v[2] * 2.0, (float)(fsqrt((float)((float)((float)((float)(v9 * v12.v[1]) - (float)(v9 * up.v[1])) * (float)((float)(v9 * v12.v[1]) - (float)(v9 * up.v[1]))) + (float)((float)((float)(v9 * v12.v[0]) - (float)(v9 * up.v[0])) * (float)((float)(v9 * v12.v[0]) - (float)(v9 * up.v[0])))) + (float)((float)((float)(v9 * v12.v[2]) - (float)(v9 * up.v[2])) * (float)((float)(v9 * v12.v[2]) - (float)(v9 * up.v[2])))) + 0.125) < bounds->halfSize.v[0]) )
      {
        v10 = angles.v[1];
        this->m_moverUpAngles.v[0] = angles.v[0];
        this->m_moverUpAngles.v[2] = angles.v[2];
        this->m_moverUpAngles.v[1] = v10;
      }
    }
  }
  else
  {
    *(_QWORD *)this->m_moverUpAngles.v = 0i64;
    this->m_moverUpAngles.v[2] = 0.0;
  }
}

/*
==============
BGMovingPlatformPS::UseRockingMoverWallFix2
==============
*/
bool BGMovingPlatformPS::UseRockingMoverWallFix2()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_playerCharacterCollisionMoverRockingCollision2;
  if ( !DVARBOOL_playerCharacterCollisionMoverRockingCollision2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMoverRockingCollision2") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100);
}

