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
  const BgPlayerTraceInfo *v15; 
  EffectiveStance EffectiveStance; 
  const Bounds *bounds; 
  Physics_WorldId v18; 
  BgTrace v22; 
  trace_t results; 

  _RDI = this;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_ps.cpp", 188, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_ps.cpp", 189, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vucomiss xmm0, dword ptr [rdi+8]
    }
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xEu) )
    {
      __asm
      {
        vmovaps [rsp+138h+var_38], xmm6
        vmovss  xmm6, dword ptr [rdi+8]
        vmovaps [rsp+138h+var_48], xmm7
        vmovss  xmm7, dword ptr [rdi+0Ch]
        vmovaps [rsp+138h+var_58], xmm8
        vmovss  xmm8, dword ptr [rdi+10h]
      }
      *(_QWORD *)_RDI->m_moverUpAngles.v = 0i64;
      _RDI->m_moverUpAngles.v[2] = 0.0;
      v15 = handler->GetPlayerTraceInfo(handler, (unsigned int)ps->clientNum);
      BgTrace::BgTrace(&v22, v15);
      EffectiveStance = PM_GetEffectiveStance(ps);
      bounds = BG_Suit_GetBounds(ps->suitIndex, EffectiveStance);
      v18 = handler->GetPhysicsWorldId((BgHandler *)handler);
      BgTrace::LegacyTraceHandler(&v22, v18, &results, &ps->origin, &ps->origin, bounds, ps->clientNum, traceMask & 0xFDFFBFFF, ps);
      if ( results.allsolid || results.startsolid )
      {
        __asm
        {
          vmovss  dword ptr [rdi+8], xmm6
          vmovss  dword ptr [rdi+0Ch], xmm7
          vmovss  dword ptr [rdi+10h], xmm8
        }
      }
      __asm
      {
        vmovaps xmm7, [rsp+138h+var_48]
        vmovaps xmm6, [rsp+138h+var_38]
        vmovaps xmm8, [rsp+138h+var_58]
      }
    }
  }
  else
  {
    *(_QWORD *)_RDI->m_moverUpAngles.v = 0i64;
    _RDI->m_moverUpAngles.v[2] = 0.0;
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
  const dvar_t *v10; 
  char v31; 
  vec3_t angles; 
  vec3_t v36; 
  vec3_t up; 
  vec3_t platformAngles; 
  vec4_t outBestUpQuat; 

  _RBP = bounds;
  _RBX = this;
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
      v10 = DVARBOOL_playerCharacterCollisionMoverRockingCollision3;
      if ( !DVARBOOL_playerCharacterCollisionMoverRockingCollision3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMoverRockingCollision3") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( !v10->current.enabled )
        goto LABEL_19;
      __asm
      {
        vmovaps [rsp+0E8h+var_38], xmm6
        vmovaps [rsp+0E8h+var_48], xmm7
      }
      AngleVectors(&_RBX->m_moverUpAngles, NULL, NULL, &up);
      AngleVectors(&angles, NULL, NULL, &v36);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+14h]
        vmulss  xmm7, xmm0, cs:__real@40000000
        vmulss  xmm3, xmm7, dword ptr [rsp+0E8h+var_98]
        vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+up]
        vmulss  xmm4, xmm7, dword ptr [rsp+0E8h+var_98+4]
        vsubss  xmm6, xmm3, xmm2
        vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+up+4]
        vmulss  xmm3, xmm7, dword ptr [rsp+0E8h+var_98+8]
        vsubss  xmm5, xmm4, xmm2
        vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+up+8]
        vmovaps xmm7, [rsp+0E8h+var_48]
        vsubss  xmm4, xmm3, xmm2
        vmulss  xmm0, xmm6, xmm6
        vmovaps xmm6, [rsp+0E8h+var_38]
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vaddss  xmm3, xmm0, cs:__real@3e000000
        vcomiss xmm3, dword ptr [rbp+0Ch]
      }
      if ( v31 )
      {
LABEL_19:
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0E8h+angles]
          vmovss  xmm1, dword ptr [rsp+0E8h+angles+4]
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  xmm0, dword ptr [rsp+0E8h+angles+8]
          vmovss  dword ptr [rbx+10h], xmm0
          vmovss  dword ptr [rbx+0Ch], xmm1
        }
      }
    }
  }
  else
  {
    *(_QWORD *)_RBX->m_moverUpAngles.v = 0i64;
    _RBX->m_moverUpAngles.v[2] = 0.0;
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

