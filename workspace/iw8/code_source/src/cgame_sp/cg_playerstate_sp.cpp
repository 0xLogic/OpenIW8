/*
==============
CG_PlayerStateSP_Respawn
==============
*/

void __fastcall CG_PlayerStateSP_Respawn(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerStateSP_Respawn@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerStateSP_TransitionPlayerState
==============
*/

void __fastcall CG_PlayerStateSP_TransitionPlayerState(LocalClientNum_t localClientNum, const playerState_s *ps, const transPlayerState_t *ops)
{
  ?CG_PlayerStateSP_TransitionPlayerState@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEBUtransPlayerState_t@@@Z(localClientNum, ps, ops);
}

/*
==============
CG_PlayerStateSP_Respawn_Internal
==============
*/

void __fastcall CG_PlayerStateSP_Respawn_Internal(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerStateSP_Respawn_Internal@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerStateSP_PainVisionDisable
==============
*/
void CG_PlayerStateSP_PainVisionDisable(cg_t *cgameGlob)
{
  if ( cgameGlob )
  {
    cgameGlob->cvsData.archived.painVisionActive = 0;
    cgameGlob->cvsData.archived.painVisionLerp = 0.0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_playerstate_sp.cpp", 30, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    MEMORY[0x58D20] = 0;
    MEMORY[0x58D24] = 0;
  }
}

/*
==============
CG_PlayerStateSP_PainVisionUpdate
==============
*/
void CG_PlayerStateSP_PainVisionUpdate(LocalClientNum_t localClientNum, const playerState_s *ps, const transPlayerState_t *ops)
{
  char v15; 
  const dvar_t *v16; 
  char v19; 
  const dvar_t *v22; 

  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_playerstate_sp.cpp", 43, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ops && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_playerstate_sp.cpp", 44, ASSERT_TYPE_ASSERT, "(ops)", (const char *)&queryFormat, "ops") )
    __debugbreak();
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
    vmulss  xmm7, xmm0, cs:__real@3a83126f
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x19u) )
  {
    _RBX->cvsData.archived.painVisionActive = 1;
  }
  else if ( !_RBX->cvsData.archived.painVisionActive )
  {
    CG_VisionSetSetBlendOff(&_RBX->cvsData, VISIONSET_BLENDTYPE_GAME);
    goto LABEL_32;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x19u) )
  {
    _RDI = DCONST_DVARMPFLT_painVisionLerpInRate;
    if ( !DCONST_DVARMPFLT_painVisionLerpInRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionLerpInRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+28h]
    }
    if ( !v15 )
      goto LABEL_18;
    v16 = DCONST_DVARMPFLT_painVisionLerpInRate;
    if ( !DCONST_DVARMPFLT_painVisionLerpInRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionLerpInRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [rdi+28h]
      vaddss  xmm1, xmm0, dword ptr [rbx+58D24h]
      vcomiss xmm1, cs:__real@3f800000
      vmovss  dword ptr [rbx+58D24h], xmm1
    }
    if ( !(v15 | v19) )
LABEL_18:
      _RBX->cvsData.archived.painVisionLerp = 1.0;
  }
  else
  {
    _RDI = DCONST_DVARMPFLT_painVisionLerpOutRate;
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    if ( !DCONST_DVARMPFLT_painVisionLerpOutRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionLerpOutRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm6, dword ptr [rdi+28h]
    }
    if ( !v15 )
      goto LABEL_29;
    v22 = DCONST_DVARMPFLT_painVisionLerpOutRate;
    if ( !DCONST_DVARMPFLT_painVisionLerpOutRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionLerpOutRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [rdi+28h]
      vmovss  xmm0, dword ptr [rbx+58D24h]
      vsubss  xmm2, xmm0, xmm1
      vcomiss xmm2, xmm6
      vmovss  dword ptr [rbx+58D24h], xmm2
    }
    if ( v15 )
LABEL_29:
      CG_PlayerStateSP_PainVisionDisable(_RBX);
    __asm { vmovaps xmm6, [rsp+68h+var_18] }
  }
  __asm { vmovss  xmm2, dword ptr [rbx+58D24h]; lerp }
  CG_VisionSetSetBlendPush(&_RBX->cvsData, VISIONSET_BLENDTYPE_GAME, *(const float *)&_XMM2);
LABEL_32:
  __asm { vmovaps xmm7, [rsp+68h+var_28] }
}

/*
==============
CG_PlayerStateSP_Respawn
==============
*/
void CG_PlayerStateSP_Respawn(const LocalClientNum_t localClientNum)
{
  MovementAnimState *animMoveState; 
  int v6; 

  _RDI = CG_GetLocalClientGlobals(localClientNum);
  _RDI->landTime = -1;
  CG_Draw_SetHudEnabled(localClientNum, 1);
  CG_ClearCameraShakes(localClientNum);
  _RDI->vehicleInitView = 1;
  _RDI->playerVehicleEntity = 2047;
  CG_Vehicle_ClearAudioSettings(localClientNum);
  CG_Weapons_HoldBreathInit(_RDI);
  CG_Draw_BloodOverlayReset(_RDI);
  CG_PlayerStateSP_PainVisionDisable(_RDI);
  CG_HudLighting_Assign(&_RDI->hudLightingState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+184h]
    vmovsd  xmm1, qword ptr [rdi+1A4h]
    vmovups ymmword ptr [rdi+5971Ch], ymm0
    vmovsd  qword ptr [rdi+5973Ch], xmm1
  }
  CG_Gesture_ClearClientInfo(localClientNum);
  _RDI->extraButtons = 0i64;
  memset_0(_RDI->weaponHeat, 0, sizeof(_RDI->weaponHeat));
  CG_LaserResetAll(localClientNum);
  CG_Main_InitDofPhysical(localClientNum);
  CG_Globals_ResetPlayerWeaponInfo(localClientNum);
  CG_CorpseFade_Init(localClientNum);
  *(_QWORD *)&_RDI->stairsAnimBlend = 0i64;
  _RDI->weaponAdditiveWalkPrevYaw = _RDI->predictedPlayerState.viewangles.v[1];
  Shake::Reset(&_RDI->viewShake);
  AngularSmoothing::Reset(&_RDI->viewSmoothing);
  _RDI->deferredRumbleCount = 0;
  animMoveState = _RDI->animMoveState;
  _RDI->deferredRumbleStopCount = 0;
  v6 = 0;
  *(_QWORD *)&_RDI->corpseHitEventTime = 0i64;
  do
    MovementAnimState::Reset(animMoveState++, localClientNum, (const PlayerHandIndex)v6++);
  while ( v6 < 2 );
  _RDI->weaponInspectDofActive = 0;
  _RDI->weaponInspectDofDist = 16.0;
  *(_QWORD *)_RDI->originMoverLocal.v = 0i64;
  _RDI->originMoverLocal.v[2] = 0.0;
  MatrixIdentity43(&_RDI->moverTransform);
  MatrixIdentity43(&_RDI->oldMoverTransform);
  _RDI->oldMoverId = 2047;
  *(_QWORD *)&_RDI->footstepWeight = 0i64;
}

/*
==============
CG_PlayerStateSP_Respawn_Internal
==============
*/
void CG_PlayerStateSP_Respawn_Internal(const LocalClientNum_t localClientNum)
{
  MovementAnimState *animMoveState; 
  int v6; 

  _RDI = CG_GetLocalClientGlobals(localClientNum);
  _RDI->landTime = -1;
  CG_Draw_SetHudEnabled(localClientNum, 1);
  CG_ClearCameraShakes(localClientNum);
  _RDI->vehicleInitView = 1;
  _RDI->playerVehicleEntity = 2047;
  CG_Vehicle_ClearAudioSettings(localClientNum);
  CG_Weapons_HoldBreathInit(_RDI);
  CG_Draw_BloodOverlayReset(_RDI);
  CG_PlayerStateSP_PainVisionDisable(_RDI);
  CG_HudLighting_Assign(&_RDI->hudLightingState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+184h]
    vmovsd  xmm1, qword ptr [rdi+1A4h]
    vmovups ymmword ptr [rdi+5971Ch], ymm0
    vmovsd  qword ptr [rdi+5973Ch], xmm1
  }
  CG_Gesture_ClearClientInfo(localClientNum);
  _RDI->extraButtons = 0i64;
  memset_0(_RDI->weaponHeat, 0, sizeof(_RDI->weaponHeat));
  CG_LaserResetAll(localClientNum);
  CG_Main_InitDofPhysical(localClientNum);
  CG_Globals_ResetPlayerWeaponInfo(localClientNum);
  CG_CorpseFade_Init(localClientNum);
  *(_QWORD *)&_RDI->stairsAnimBlend = 0i64;
  _RDI->weaponAdditiveWalkPrevYaw = _RDI->predictedPlayerState.viewangles.v[1];
  Shake::Reset(&_RDI->viewShake);
  AngularSmoothing::Reset(&_RDI->viewSmoothing);
  _RDI->deferredRumbleCount = 0;
  animMoveState = _RDI->animMoveState;
  _RDI->deferredRumbleStopCount = 0;
  v6 = 0;
  *(_QWORD *)&_RDI->corpseHitEventTime = 0i64;
  do
    MovementAnimState::Reset(animMoveState++, localClientNum, (const PlayerHandIndex)v6++);
  while ( v6 < 2 );
  _RDI->weaponInspectDofActive = 0;
  _RDI->weaponInspectDofDist = 16.0;
  *(_QWORD *)_RDI->originMoverLocal.v = 0i64;
  _RDI->originMoverLocal.v[2] = 0.0;
  MatrixIdentity43(&_RDI->moverTransform);
  MatrixIdentity43(&_RDI->oldMoverTransform);
  _RDI->oldMoverId = 2047;
  *(_QWORD *)&_RDI->footstepWeight = 0i64;
}

/*
==============
CG_PlayerStateSP_TransitionPlayerState
==============
*/
void CG_PlayerStateSP_TransitionPlayerState(LocalClientNum_t localClientNum, const playerState_s *ps, const transPlayerState_t *ops)
{
  __int64 v4; 
  const dvar_t *v6; 
  ShakeImpulseSourceType v7; 
  CgPredictedEntitySystem *System; 
  cg_t *LocalClientGlobals; 
  bool v11; 
  char v12; 
  const dvar_t *v13; 
  __int64 v14; 
  __int64 v15; 

  v4 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "CG_PlayerStateSP_TransitionPlayerState");
  if ( ps->damageEvent != ops->damageEvent )
  {
    CG_PlayerState_DamageFeedback((LocalClientNum_t)v4, ps->damageYaw, ps->damagePitch, ps->damageCount, ps->damageType);
    if ( ps->damageCount )
      CG_SND_PlayerBreathsSetDamage((LocalClientNum_t)v4);
    if ( ps->damageModFlags != 0x80000 )
    {
      v6 = DCONST_DVARBOOL_handheldCameraImpulseDamageEnabled;
      if ( !DCONST_DVARBOOL_handheldCameraImpulseDamageEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled )
      {
        __asm { vmovss  xmm2, cs:__real@3f800000; scale }
        LOBYTE(v7) = 2;
        CG_Shake_Impulse((const LocalClientNum_t)v4, v7, *(float *)&_XMM2);
      }
    }
  }
  CgSimBulletFirePellet_EnableWorkers(1);
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)v4);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_playerstate_sp.cpp", 256, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  BgPredictedEntitySystem::ResetPredictionKeys(System);
  if ( !(_BYTE)CgEventSystem::ms_allocatedType )
  {
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 224, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type is not known\n", "ms_allocatedType != GameModeType::NONE", v15) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v15) = CgEventSystem::ms_allocatedCount;
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !CgEventSystem::ms_eventSystemArray[v4] )
  {
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 226, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v15) )
      __debugbreak();
  }
  CgEventSystem::CheckPlayerEvents(CgEventSystem::ms_eventSystemArray[v4], ps, ops);
  CgSimBulletFirePellet_EnableWorkers(0);
  CG_PlayerStateSP_PainVisionUpdate((LocalClientNum_t)v4, ps, ops);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  if ( LocalClientGlobals->swimModeIntent[0] )
  {
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    v11 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x3Au);
    v12 = LocalClientGlobals->swimModeIntent[0];
    if ( v12 == 1 )
    {
      if ( !v11 )
        goto LABEL_32;
      goto LABEL_31;
    }
    if ( v12 == 2 && !v11 )
LABEL_31:
      LocalClientGlobals->swimModeIntent[0] = 0;
  }
LABEL_32:
  CgPredictedEntitySystem::Update(System);
  v13 = DCONST_DVARBOOL_cg_debugBulletsHitLoc;
  if ( !DCONST_DVARBOOL_cg_debugBulletsHitLoc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBulletsHitLoc") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
    {
      LODWORD(v15) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v15) )
        __debugbreak();
    }
    if ( (unsigned int)v4 >= CgWeaponSystem::ms_allocatedCount )
    {
      LODWORD(v15) = CgWeaponSystem::ms_allocatedCount;
      LODWORD(v14) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( !CgWeaponSystem::ms_weaponSystemArray[v4] )
    {
      LODWORD(v15) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v15) )
        __debugbreak();
    }
    CgWeaponSystem::DebugDrawBulletHitLocation(CgWeaponSystem::ms_weaponSystemArray[v4]);
  }
  Sys_ProfEndNamedEvent();
}

