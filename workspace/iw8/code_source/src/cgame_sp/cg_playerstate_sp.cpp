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
  cg_t *LocalClientGlobals; 
  float v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float v13; 
  float painVisionLerp; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_playerstate_sp.cpp", 43, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ops && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_playerstate_sp.cpp", 44, ASSERT_TYPE_ASSERT, "(ops)", (const char *)&queryFormat, "ops") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = (float)LocalClientGlobals->frametime * 0.001;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x19u) )
  {
    LocalClientGlobals->cvsData.archived.painVisionActive = 1;
  }
  else if ( !LocalClientGlobals->cvsData.archived.painVisionActive )
  {
    CG_VisionSetSetBlendOff(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_GAME);
    return;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x19u) )
  {
    v8 = DCONST_DVARMPFLT_painVisionLerpInRate;
    if ( !DCONST_DVARMPFLT_painVisionLerpInRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionLerpInRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.value <= 0.0 )
      goto LABEL_18;
    v9 = DCONST_DVARMPFLT_painVisionLerpInRate;
    if ( !DCONST_DVARMPFLT_painVisionLerpInRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionLerpInRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = (float)(v7 * v9->current.value) + LocalClientGlobals->cvsData.archived.painVisionLerp;
    LocalClientGlobals->cvsData.archived.painVisionLerp = v10;
    if ( v10 > 1.0 )
LABEL_18:
      LocalClientGlobals->cvsData.archived.painVisionLerp = 1.0;
  }
  else
  {
    v11 = DCONST_DVARMPFLT_painVisionLerpOutRate;
    if ( !DCONST_DVARMPFLT_painVisionLerpOutRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionLerpOutRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.value <= 0.0 )
      goto LABEL_29;
    v12 = DCONST_DVARMPFLT_painVisionLerpOutRate;
    if ( !DCONST_DVARMPFLT_painVisionLerpOutRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionLerpOutRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v7 * v12->current.value;
    painVisionLerp = LocalClientGlobals->cvsData.archived.painVisionLerp;
    LocalClientGlobals->cvsData.archived.painVisionLerp = painVisionLerp - v13;
    if ( (float)(painVisionLerp - v13) < 0.0 )
LABEL_29:
      CG_PlayerStateSP_PainVisionDisable(LocalClientGlobals);
  }
  CG_VisionSetSetBlendPush(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_GAME, LocalClientGlobals->cvsData.archived.painVisionLerp);
}

/*
==============
CG_PlayerStateSP_Respawn
==============
*/
void CG_PlayerStateSP_Respawn(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  double v3; 
  MovementAnimState *animMoveState; 
  int v5; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->landTime = -1;
  CG_Draw_SetHudEnabled(localClientNum, 1);
  CG_ClearCameraShakes(localClientNum);
  LocalClientGlobals->vehicleInitView = 1;
  LocalClientGlobals->playerVehicleEntity = 2047;
  CG_Vehicle_ClearAudioSettings(localClientNum);
  CG_Weapons_HoldBreathInit(LocalClientGlobals);
  CG_Draw_BloodOverlayReset(LocalClientGlobals);
  CG_PlayerStateSP_PainVisionDisable(LocalClientGlobals);
  CG_HudLighting_Assign(&LocalClientGlobals->hudLightingState);
  v3 = *(double *)&LocalClientGlobals->predictedPlayerState.pe.events[3].eventParm;
  *(__m256i *)&LocalClientGlobals->playerEvents.eventSequence = *(__m256i *)&LocalClientGlobals->predictedPlayerState.pe.eventSequence;
  *(double *)&LocalClientGlobals->playerEvents.events[3].eventParm = v3;
  CG_Gesture_ClearClientInfo(localClientNum);
  LocalClientGlobals->extraButtons = 0i64;
  memset_0(LocalClientGlobals->weaponHeat, 0, sizeof(LocalClientGlobals->weaponHeat));
  CG_LaserResetAll(localClientNum);
  CG_Main_InitDofPhysical(localClientNum);
  CG_Globals_ResetPlayerWeaponInfo(localClientNum);
  CG_CorpseFade_Init(localClientNum);
  *(_QWORD *)&LocalClientGlobals->stairsAnimBlend = 0i64;
  LocalClientGlobals->weaponAdditiveWalkPrevYaw = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
  Shake::Reset(&LocalClientGlobals->viewShake);
  AngularSmoothing::Reset(&LocalClientGlobals->viewSmoothing);
  LocalClientGlobals->deferredRumbleCount = 0;
  animMoveState = LocalClientGlobals->animMoveState;
  LocalClientGlobals->deferredRumbleStopCount = 0;
  v5 = 0;
  *(_QWORD *)&LocalClientGlobals->corpseHitEventTime = 0i64;
  do
    MovementAnimState::Reset(animMoveState++, localClientNum, (const PlayerHandIndex)v5++);
  while ( v5 < 2 );
  LocalClientGlobals->weaponInspectDofActive = 0;
  LocalClientGlobals->weaponInspectDofDist = 16.0;
  *(_QWORD *)LocalClientGlobals->originMoverLocal.v = 0i64;
  LocalClientGlobals->originMoverLocal.v[2] = 0.0;
  MatrixIdentity43(&LocalClientGlobals->moverTransform);
  MatrixIdentity43(&LocalClientGlobals->oldMoverTransform);
  LocalClientGlobals->oldMoverId = 2047;
  *(_QWORD *)&LocalClientGlobals->footstepWeight = 0i64;
}

/*
==============
CG_PlayerStateSP_Respawn_Internal
==============
*/
void CG_PlayerStateSP_Respawn_Internal(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  double v3; 
  MovementAnimState *animMoveState; 
  int v5; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->landTime = -1;
  CG_Draw_SetHudEnabled(localClientNum, 1);
  CG_ClearCameraShakes(localClientNum);
  LocalClientGlobals->vehicleInitView = 1;
  LocalClientGlobals->playerVehicleEntity = 2047;
  CG_Vehicle_ClearAudioSettings(localClientNum);
  CG_Weapons_HoldBreathInit(LocalClientGlobals);
  CG_Draw_BloodOverlayReset(LocalClientGlobals);
  CG_PlayerStateSP_PainVisionDisable(LocalClientGlobals);
  CG_HudLighting_Assign(&LocalClientGlobals->hudLightingState);
  v3 = *(double *)&LocalClientGlobals->predictedPlayerState.pe.events[3].eventParm;
  *(__m256i *)&LocalClientGlobals->playerEvents.eventSequence = *(__m256i *)&LocalClientGlobals->predictedPlayerState.pe.eventSequence;
  *(double *)&LocalClientGlobals->playerEvents.events[3].eventParm = v3;
  CG_Gesture_ClearClientInfo(localClientNum);
  LocalClientGlobals->extraButtons = 0i64;
  memset_0(LocalClientGlobals->weaponHeat, 0, sizeof(LocalClientGlobals->weaponHeat));
  CG_LaserResetAll(localClientNum);
  CG_Main_InitDofPhysical(localClientNum);
  CG_Globals_ResetPlayerWeaponInfo(localClientNum);
  CG_CorpseFade_Init(localClientNum);
  *(_QWORD *)&LocalClientGlobals->stairsAnimBlend = 0i64;
  LocalClientGlobals->weaponAdditiveWalkPrevYaw = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
  Shake::Reset(&LocalClientGlobals->viewShake);
  AngularSmoothing::Reset(&LocalClientGlobals->viewSmoothing);
  LocalClientGlobals->deferredRumbleCount = 0;
  animMoveState = LocalClientGlobals->animMoveState;
  LocalClientGlobals->deferredRumbleStopCount = 0;
  v5 = 0;
  *(_QWORD *)&LocalClientGlobals->corpseHitEventTime = 0i64;
  do
    MovementAnimState::Reset(animMoveState++, localClientNum, (const PlayerHandIndex)v5++);
  while ( v5 < 2 );
  LocalClientGlobals->weaponInspectDofActive = 0;
  LocalClientGlobals->weaponInspectDofDist = 16.0;
  *(_QWORD *)LocalClientGlobals->originMoverLocal.v = 0i64;
  LocalClientGlobals->originMoverLocal.v[2] = 0.0;
  MatrixIdentity43(&LocalClientGlobals->moverTransform);
  MatrixIdentity43(&LocalClientGlobals->oldMoverTransform);
  LocalClientGlobals->oldMoverId = 2047;
  *(_QWORD *)&LocalClientGlobals->footstepWeight = 0i64;
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
  bool v10; 
  char v11; 
  const dvar_t *v12; 
  __int64 v13; 
  __int64 v14; 

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
        LOBYTE(v7) = 2;
        CG_Shake_Impulse((const LocalClientNum_t)v4, v7, 1.0);
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
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 224, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type is not known\n", "ms_allocatedType != GameModeType::NONE", v14) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v14) = CgEventSystem::ms_allocatedCount;
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !CgEventSystem::ms_eventSystemArray[v4] )
  {
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 226, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v14) )
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
    v10 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x3Au);
    v11 = LocalClientGlobals->swimModeIntent[0];
    if ( v11 == 1 )
    {
      if ( !v10 )
        goto LABEL_32;
      goto LABEL_31;
    }
    if ( v11 == 2 && !v10 )
LABEL_31:
      LocalClientGlobals->swimModeIntent[0] = 0;
  }
LABEL_32:
  CgPredictedEntitySystem::Update(System);
  v12 = DCONST_DVARBOOL_cg_debugBulletsHitLoc;
  if ( !DCONST_DVARBOOL_cg_debugBulletsHitLoc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBulletsHitLoc") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
    {
      LODWORD(v14) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v14) )
        __debugbreak();
    }
    if ( (unsigned int)v4 >= CgWeaponSystem::ms_allocatedCount )
    {
      LODWORD(v14) = CgWeaponSystem::ms_allocatedCount;
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( !CgWeaponSystem::ms_weaponSystemArray[v4] )
    {
      LODWORD(v14) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v14) )
        __debugbreak();
    }
    CgWeaponSystem::DebugDrawBulletHitLocation(CgWeaponSystem::ms_weaponSystemArray[v4]);
  }
  Sys_ProfEndNamedEvent();
}

