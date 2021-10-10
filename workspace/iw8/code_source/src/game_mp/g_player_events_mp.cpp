/*
==============
GPlayerEventsMP::SetCurrentTaskEvent
==============
*/

void __fastcall GPlayerEventsMP::SetCurrentTaskEvent(gentity_s *playerEnt, const entity_event_t event, const void *parms)
{
  ?SetCurrentTaskEvent@GPlayerEventsMP@@SAXPEAUgentity_s@@W4entity_event_t@@PEBX@Z(playerEnt, event, parms);
}

/*
==============
GPlayerEventsMP::BeginGameEvents
==============
*/

void __fastcall GPlayerEventsMP::BeginGameEvents(gentity_s *playerEnt, GClientTaskQueue *outTaskQueue)
{
  ?BeginGameEvents@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(playerEnt, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameReloadAddAmmoEvent
==============
*/

void __fastcall GPlayerEventsMP::GameReloadAddAmmoEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameReloadAddAmmoEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameOffhandOverCookEvent
==============
*/

void __fastcall GPlayerEventsMP::GameOffhandOverCookEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameOffhandOverCookEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameDoorMoveComplete
==============
*/

void __fastcall GPlayerEventsMP::GameDoorMoveComplete(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameDoorMoveComplete@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::PMoveEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::GameSkydiveDeployParachuteEvent
==============
*/

void __fastcall GPlayerEventsMP::GameSkydiveDeployParachuteEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameSkydiveDeployParachuteEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameOffhandEndEvent
==============
*/

void __fastcall GPlayerEventsMP::GameOffhandEndEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameOffhandEndEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameSkydiveTouchEvent
==============
*/

void __fastcall GPlayerEventsMP::GameSkydiveTouchEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameSkydiveTouchEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameDetonateEvent
==============
*/

void __fastcall GPlayerEventsMP::GameDetonateEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameDetonateEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameOffhandFireEvent
==============
*/

void __fastcall GPlayerEventsMP::GameOffhandFireEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameOffhandFireEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::PMoveMeleeFireEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveMeleeFireEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveMeleeFireEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::PMoveGestureStoppedEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveGestureStoppedEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveGestureStoppedEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::FinishGameEvents
==============
*/

void __fastcall GPlayerEventsMP::FinishGameEvents(gentity_s *playerEnt, GClientTaskQueue *outTaskQueue)
{
  ?FinishGameEvents@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(playerEnt, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameSkydiveEndEvent
==============
*/

void __fastcall GPlayerEventsMP::GameSkydiveEndEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameSkydiveEndEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameWeaponSwitchCanceledEvent
==============
*/

void __fastcall GPlayerEventsMP::GameWeaponSwitchCanceledEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameWeaponSwitchCanceledEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::PMoveTurretFireEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveTurretFireEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveTurretFireEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::UnregisterEvents
==============
*/

void GPlayerEventsMP::UnregisterEvents(void)
{
  ?UnregisterEvents@GPlayerEventsMP@@SAXXZ();
}

/*
==============
GPlayerEventsMP::PMoveDoorEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveDoorEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveDoorEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::RegisterEvents
==============
*/

void GPlayerEventsMP::RegisterEvents(void)
{
  ?RegisterEvents@GPlayerEventsMP@@SAXXZ();
}

/*
==============
GPlayerEventsMP::PMoveGrenadeSuicideEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveGrenadeSuicideEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveGrenadeSuicideEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::GameWeaponSwitchEvent
==============
*/

void __fastcall GPlayerEventsMP::GameWeaponSwitchEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameWeaponSwitchEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameTurretFireEvent
==============
*/

void __fastcall GPlayerEventsMP::GameTurretFireEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameTurretFireEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameMeleeChargeEvent
==============
*/

void __fastcall GPlayerEventsMP::GameMeleeChargeEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameMeleeChargeEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameReloadStartEvent
==============
*/

void __fastcall GPlayerEventsMP::GameReloadStartEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameReloadStartEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameSkydiveBeginFreefallEvent
==============
*/

void __fastcall GPlayerEventsMP::GameSkydiveBeginFreefallEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameSkydiveBeginFreefallEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::PMoveDefaultEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveDefaultEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveDefaultEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::GameSwitchOffhandPullbackEvent
==============
*/

void __fastcall GPlayerEventsMP::GameSwitchOffhandPullbackEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameSwitchOffhandPullbackEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameOffhandPullbackEvent
==============
*/

void __fastcall GPlayerEventsMP::GameOffhandPullbackEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameOffhandPullbackEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::PMoveSkydiveEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveSkydiveEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveSkydiveEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::GameMeleeFireEvent
==============
*/

void __fastcall GPlayerEventsMP::GameMeleeFireEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameMeleeFireEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::HandlePMoveEvents
==============
*/

void __fastcall GPlayerEventsMP::HandlePMoveEvents(GPlayerEventsMP *this, GClientTaskQueue *outTaskQueue, gentity_s *const ent)
{
  ?HandlePMoveEvents@GPlayerEventsMP@@QEAAXAEAVGClientTaskQueue@@QEAUgentity_s@@@Z(this, outTaskQueue, ent);
}

/*
==============
GPlayerEventsMP::GameMeleeSwipeEvent
==============
*/

void __fastcall GPlayerEventsMP::GameMeleeSwipeEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameMeleeSwipeEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameSwitchOffhandEvent
==============
*/

void __fastcall GPlayerEventsMP::GameSwitchOffhandEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameSwitchOffhandEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::PMoveGlassBreakEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveGlassBreakEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveGlassBreakEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::ResetCurrentTaskEvent
==============
*/

void __fastcall GPlayerEventsMP::ResetCurrentTaskEvent(gentity_s *playerEnt)
{
  ?ResetCurrentTaskEvent@GPlayerEventsMP@@SAXPEAUgentity_s@@@Z(playerEnt);
}

/*
==============
GPlayerEventsMP::GameMeleeExecutionCancelEvent
==============
*/

void __fastcall GPlayerEventsMP::GameMeleeExecutionCancelEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameMeleeExecutionCancelEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::PMoveOffhandFireEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveOffhandFireEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveOffhandFireEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::PMoveWeaponEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveWeaponEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveWeaponEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::GamePainLandingEvent
==============
*/

void __fastcall GPlayerEventsMP::GamePainLandingEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GamePainLandingEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameGrenadeSuicideEvent
==============
*/

void __fastcall GPlayerEventsMP::GameGrenadeSuicideEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameGrenadeSuicideEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::PMoveSwitchOffhandEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveSwitchOffhandEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveSwitchOffhandEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::GameGlassBreakEvent
==============
*/

void __fastcall GPlayerEventsMP::GameGlassBreakEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameGlassBreakEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameWeaponFireEvent
==============
*/

void __fastcall GPlayerEventsMP::GameWeaponFireEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameWeaponFireEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameTurretFireEndEvent
==============
*/

void __fastcall GPlayerEventsMP::GameTurretFireEndEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameTurretFireEndEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameOffhandEmptyEvent
==============
*/

void __fastcall GPlayerEventsMP::GameOffhandEmptyEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameOffhandEmptyEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::PMoveWeaponFireEvent
==============
*/

void __fastcall GPlayerEventsMP::PMoveWeaponFireEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  ?PMoveWeaponFireEvent@GPlayerEventsMP@@CAXAEAVGClientTaskQueue@@QEBUgentity_s@@QEBUPlayerEvent@BgPlayerEvents@@@Z(outTaskQueue, ent, playerEvent);
}

/*
==============
GPlayerEventsMP::~GPlayerEventsMP
==============
*/

void __fastcall GPlayerEventsMP::~GPlayerEventsMP(GPlayerEventsMP *this)
{
  ??1GPlayerEventsMP@@UEAA@XZ(this);
}

/*
==============
GPlayerEventsMP::GameAiSoundEvent
==============
*/

void __fastcall GPlayerEventsMP::GameAiSoundEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameAiSoundEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GameGestureStoppedEvent
==============
*/

void __fastcall GPlayerEventsMP::GameGestureStoppedEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GameGestureStoppedEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GPlayerEventsMP
==============
*/

void __fastcall GPlayerEventsMP::GPlayerEventsMP(GPlayerEventsMP *this)
{
  ??0GPlayerEventsMP@@QEAA@XZ(this);
}

/*
==============
GPlayerEventsMP::GamePainLandingAndAiSoundEvent
==============
*/

void __fastcall GPlayerEventsMP::GamePainLandingAndAiSoundEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  ?GamePainLandingAndAiSoundEvent@GPlayerEventsMP@@CAXPEAUgentity_s@@PEAVGClientTaskQueue@@@Z(ent, outTaskQueue);
}

/*
==============
GPlayerEventsMP::GPlayerEventsMP
==============
*/
void GPlayerEventsMP::GPlayerEventsMP(GPlayerEventsMP *this)
{
  BgPlayerEvents::BgPlayerEvents(this);
  this->__vftable = (GPlayerEventsMP_vtbl *)&GPlayerEventsMP::`vftable';
  this->m_currentTaskEvent = EV_NONE;
  this->m_currentTaskEventParms = NULL;
}

/*
==============
GPlayerEventsMP::~GPlayerEventsMP
==============
*/
void GPlayerEventsMP::~GPlayerEventsMP(GPlayerEventsMP *this)
{
  this->__vftable = (GPlayerEventsMP_vtbl *)&GPlayerEventsMP::`vftable';
  BgPlayerEvents::~BgPlayerEvents(this);
}

/*
==============
GPlayerEventsMP::BeginGameEvents
==============
*/
void GPlayerEventsMP::BeginGameEvents(gentity_s *playerEnt, GClientTaskQueue *outTaskQueue)
{
  GPredictedEntitySystem *v3; 
  GCombat *v4; 

  Profile_Begin(346);
  SV_Profile_BeginEvent(SVPROF_CLIENT_EVENTS);
  GPlayerEventsMP::ResetCurrentTaskEvent(playerEnt);
  if ( !GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 39, ASSERT_TYPE_ASSERT, "( ms_gSystem )", (const char *)&queryFormat, "ms_gSystem") )
    __debugbreak();
  v3 = GPredictedEntitySystem::ms_gSystem;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v4 = GCombat::ms_gCombatSystem;
  BgPredictedEntitySystem::ResetPredictionKeys(v3);
  GCombat::SetQueuedDamageEnabled(v4, 1);
  G_Bullet_SetDeferNotifyActors(1);
}

/*
==============
GPlayerEventsMP::FinishGameEvents
==============
*/
void GPlayerEventsMP::FinishGameEvents(gentity_s *playerEnt, GClientTaskQueue *outTaskQueue)
{
  GCombat *v3; 
  GBullet *v4; 

  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v3 = GCombat::ms_gCombatSystem;
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v4 = GBullet::ms_gBulletSystem;
  G_Bullet_SetDeferNotifyActors(0);
  GCombat::SetQueuedDamageEnabled(v3, 0);
  GCombat::ProcessQueuedDamages(v3);
  G_Bullet_ProcessDeferredNotifyActors();
  GBullet::HandleDeferredImpactEffects(v4);
  GPlayerEventsMP::ResetCurrentTaskEvent(playerEnt);
  Profile_EndInternal(NULL);
  SV_Profile_EndEvent(SVPROF_CLIENT_EVENTS);
}

/*
==============
G_PlayerEventsMP_GameAISoundEvent
==============
*/
void G_PlayerEventsMP_GameAISoundEvent(gentity_s *const ent, const entity_event_t eventType)
{
  bool v4; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v6; 
  unsigned int v7; 
  bitarray<224> *p_result; 
  const playerState_s *EntityPlayerStateConst; 
  ai_event_t v10; 
  bitarray<224> result; 
  vec3_t vOriginOut; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 176, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 177, ASSERT_TYPE_ASSERT, "( ent->sentient != nullptr )", (const char *)&queryFormat, "ent->sentient != nullptr") )
    __debugbreak();
  if ( level.teammode == TEAMMODE_FFA )
  {
    v4 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
    *(_QWORD *)&result.array[4] = *(_QWORD *)&AllCombatTeamFlags->array[4];
    v6 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
    if ( v4 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v6 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, ent->sentient->eTeam);
  }
  v7 = 0;
  p_result = &result;
  while ( !p_result->array[0] )
  {
    ++v7;
    p_result = (bitarray<224> *)((char *)p_result + 4);
    if ( v7 >= 7 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 183, ASSERT_TYPE_ASSERT, "( teamFlags.anyBitsOn() )", "Team flags changed in between event queuing and execution") )
        __debugbreak();
      break;
    }
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 187, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  Sentient_GetOrigin(ent->sentient, &vOriginOut);
  if ( (unsigned int)(eventType - 173) <= 1 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->pm_flags, ACTIVE, 1u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x19u) )
  {
    v10 = AI_EV_FOOTSTEP_WALK;
  }
  else
  {
    v10 = AI_EV_FOOTSTEP;
    if ( eventType == EV_FOOTSTEP_SPRINT )
      v10 = AI_EV_FOOTSTEP_SPRINT;
  }
  Actor_BroadcastPointEvent(ent, v10, &result, &vOriginOut);
}

/*
==============
G_PlayerEventsMP_GamePainLandingEvent
==============
*/
void G_PlayerEventsMP_GamePainLandingEvent(gentity_s *const ent, const unsigned int eventParm)
{
  float v4; 
  const playerState_s *EntityPlayerStateConst; 
  unsigned int viewDip; 
  unsigned int weaponRattleType; 
  unsigned int clothType; 
  int isSoftLanding; 
  GExtraDamageParams extraParams; 
  unsigned int damage; 
  unsigned int surfType; 

  if ( eventParm > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", (int)eventParm, "unsigned", eventParm) )
    __debugbreak();
  BG_UnpackHardLandingEventParm(eventParm, &damage, &isSoftLanding, &clothType, &weaponRattleType, &viewDip, &surfType);
  v4 = (float)damage;
  if ( (float)(v4 * 0.0099999998) > 0.0 )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 162, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
      __debugbreak();
    extraParams = 0;
    G_CombatMP_Damage(ent, NULL, NULL, NULL, NULL, (int)(float)((float)EntityPlayerStateConst->stats[2] * (float)(v4 * 0.0099999998)), 0, 13, &NULL_WEAPON, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
  }
}

/*
==============
G_PlayerEventsMP_GameSwitchOffhand
==============
*/
void G_PlayerEventsMP_GameSwitchOffhand(gentity_s *const ent, const GGrenadePickupParms *const params)
{
  unsigned __int16 pickupEntity; 
  gentity_s *v5; 
  int v6; 
  int v7; 

  pickupEntity = params->pickupEntity;
  if ( pickupEntity >= 0x800u )
  {
    v7 = 2048;
    v6 = pickupEntity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( params->pickupEntity ) < (unsigned)( ( 2048 ) )", "params->pickupEntity doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v5 = &g_entities[params->pickupEntity];
  if ( G_Active_IsLiveGrenade(v5) )
    G_Active_DoMissilePickup(ent, v5);
}

/*
==============
GPlayerEventsMP::GameAiSoundEvent
==============
*/
void GPlayerEventsMP::GameAiSoundEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const entity_event_t *ParameterInternal; 

  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (const entity_event_t *)GClientTaskQueue::GetParameterInternal(outTaskQueue, 4u, 4u);
  G_PlayerEventsMP_GameAISoundEvent(ent, *ParameterInternal);
}

/*
==============
GPlayerEventsMP::GameDetonateEvent
==============
*/
void GPlayerEventsMP::GameDetonateEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const Weapon *v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1263, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1264, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  v4 = GClientTaskQueue::GetParameter<Weapon>(outTaskQueue);
  G_Active_NotifyDetonate(ent, v4);
}

/*
==============
GPlayerEventsMP::GameDoorMoveComplete
==============
*/
void GPlayerEventsMP::GameDoorMoveComplete(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  unsigned int v3; 

  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  v3 = *(_DWORD *)GClientTaskQueue::GetParameterInternal(outTaskQueue, 4u, 4u);
  if ( v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1354, ASSERT_TYPE_ASSERT, "(scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  G_Door_MoveCompleteEvent(v3);
}

/*
==============
GPlayerEventsMP::GameGestureStoppedEvent
==============
*/
void GPlayerEventsMP::GameGestureStoppedEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const GGestureStopParms *ParameterInternal; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 968, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 969, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (const GGestureStopParms *)GClientTaskQueue::GetParameterInternal(outTaskQueue, 8u, 4u);
  G_Active_GestureStopEvent(ParameterInternal, ent);
}

/*
==============
GPlayerEventsMP::GameGlassBreakEvent
==============
*/
void GPlayerEventsMP::GameGlassBreakEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const GGlassBreakParms *ParameterInternal; 

  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (const GGlassBreakParms *)GClientTaskQueue::GetParameterInternal(outTaskQueue, 0x70u, 8u);
  G_Active_Glass_PlayerBreakEvent(ParameterInternal, ent);
}

/*
==============
GPlayerEventsMP::GameGrenadeSuicideEvent
==============
*/
void GPlayerEventsMP::GameGrenadeSuicideEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const Weapon *r_weapon; 
  __int64 v5; 
  __int64 number; 
  __int64 v7; 
  const GEntityHandlerList *EntHandlerList; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v10; 
  unsigned __int16 v11; 
  gentity_s *v12; 
  const dvar_t *v13; 
  unsigned __int16 v14; 
  gentity_s *v15; 
  __int64 damage; 
  __int64 dflags; 
  GExtraDamageParams extraParams; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 910, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 911, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  r_weapon = (const Weapon *)GClientTaskQueue::GetParameterInternal(outTaskQueue, 0x58u, 4u);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 385, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v5 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 388, ASSERT_TYPE_ASSERT, "( gameStatic )", (const char *)&queryFormat, "gameStatic") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned int)number >= *(_DWORD *)(v5 + 19576) )
  {
    LODWORD(damage) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( m_characterCount )", "entityIndex doesn't index m_characterCount\n\t%i not in [0, %i)", damage, *(_DWORD *)(v5 + 19576)) )
      __debugbreak();
  }
  v7 = *(_QWORD *)(v5 + 19568) + 232 * number;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 391, ASSERT_TYPE_ASSERT, "( playerEvents )", (const char *)&queryFormat, "playerEvents") )
    __debugbreak();
  *(_DWORD *)(v7 + 216) = 135;
  *(_QWORD *)(v7 + 224) = r_weapon;
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 918, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  EntHandlerList = G_Main_GetEntHandlerList(ent);
  if ( ent->client->lastStand )
    goto LABEL_52;
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x1Eu);
  v10 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex < 0 )
    goto LABEL_52;
  if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
  {
    LODWORD(dflags) = 64;
    LODWORD(damage) = PerkNetworkPriorityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", damage, dflags) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v10 & 0x1F)) & *((_DWORD *)&r_weapon[1].weaponIdx + (v10 >> 5))) == 0 )
  {
LABEL_52:
    if ( EntHandlerList->die )
    {
      ent->health = 0;
      v14 = *(_WORD *)&r_weapon[1].weaponAttachments[6];
      if ( v14 == 2047 )
        v15 = ent;
      else
        v15 = &g_entities[v14];
      EntHandlerList->die(ent, v15, v15, 100000, 0, 14, r_weapon, 0, NULL, HITLOC_NONE, 0);
    }
  }
  else
  {
    v11 = *(_WORD *)&r_weapon[1].weaponAttachments[6];
    if ( v11 == 2047 )
      v12 = ent;
    else
      v12 = &g_entities[v11];
    v13 = DVARBOOL_killswitch_laststand_grenade_drop_fix_enabled;
    if ( !DVARBOOL_killswitch_laststand_grenade_drop_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_laststand_grenade_drop_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled && (unsigned int)(ent->client->ps.grenadeTimeLeft + 1) > 1 )
      G_CombatMP_GrenadeDrop(ent, 14, 0);
    extraParams = 0;
    G_CombatMP_Damage(ent, NULL, v12, NULL, NULL, 10000, 0, 14, r_weapon, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
  }
  GPlayerEventsMP::ResetCurrentTaskEvent(ent);
}

/*
==============
GPlayerEventsMP::GameMeleeChargeEvent
==============
*/

void __fastcall GPlayerEventsMP::GameMeleeChargeEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  G_Weapon_StartChargeMelee(ent);
}

/*
==============
GPlayerEventsMP::GameMeleeExecutionCancelEvent
==============
*/

void __fastcall GPlayerEventsMP::GameMeleeExecutionCancelEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  G_Execution_Cancel(ent);
}

/*
==============
GPlayerEventsMP::GameMeleeFireEvent
==============
*/
void GPlayerEventsMP::GameMeleeFireEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const void *ParameterInternal; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 816, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 817, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = GClientTaskQueue::GetParameterInternal(outTaskQueue, 0xA0u, 8u);
  G_Weapon_FireMeleeWithParams(ent, *((_DWORD *)ParameterInternal + 38), (const GMeleeFireParms *const)ParameterInternal);
}

/*
==============
GPlayerEventsMP::GameMeleeSwipeEvent
==============
*/

void __fastcall GPlayerEventsMP::GameMeleeSwipeEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  G_Weapon_StartSwipeMelee(ent);
}

/*
==============
GPlayerEventsMP::GameOffhandEmptyEvent
==============
*/
void GPlayerEventsMP::GameOffhandEmptyEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  GScr_Notify(ent, scr_const.empty_offhand, 0);
}

/*
==============
GPlayerEventsMP::GameOffhandEndEvent
==============
*/
void GPlayerEventsMP::GameOffhandEndEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  GScr_Notify(ent, scr_const.offhand_end, 0);
}

/*
==============
GPlayerEventsMP::GameOffhandFireEvent
==============
*/
void GPlayerEventsMP::GameOffhandFireEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const void *ParameterInternal; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 849, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 850, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = GClientTaskQueue::GetParameterInternal(outTaskQueue, 0x90u, 8u);
  G_Weapon_UseOffHandWithParams(ent, *((_DWORD *)ParameterInternal + 34), (const BgWeaponParms *const)ParameterInternal);
}

/*
==============
GPlayerEventsMP::GameOffhandOverCookEvent
==============
*/
void GPlayerEventsMP::GameOffhandOverCookEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  GScr_Notify(ent, scr_const.overcooked, 0);
}

/*
==============
GPlayerEventsMP::GameOffhandPullbackEvent
==============
*/
void GPlayerEventsMP::GameOffhandPullbackEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const Weapon *v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1252, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1253, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  v4 = GClientTaskQueue::GetParameter<Weapon>(outTaskQueue);
  G_Active_NotifyOffHandPullback(ent, v4);
}

/*
==============
GPlayerEventsMP::GamePainLandingAndAiSoundEvent
==============
*/
void GPlayerEventsMP::GamePainLandingAndAiSoundEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const void *ParameterInternal; 

  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = GClientTaskQueue::GetParameterInternal(outTaskQueue, 8u, 4u);
  G_PlayerEventsMP_GamePainLandingEvent(ent, *((_DWORD *)ParameterInternal + 1));
  G_PlayerEventsMP_GameAISoundEvent(ent, *(const entity_event_t *)ParameterInternal);
}

/*
==============
GPlayerEventsMP::GamePainLandingEvent
==============
*/
void GPlayerEventsMP::GamePainLandingEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const unsigned int *ParameterInternal; 

  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (const unsigned int *)GClientTaskQueue::GetParameterInternal(outTaskQueue, 4u, 4u);
  G_PlayerEventsMP_GamePainLandingEvent(ent, *ParameterInternal);
}

/*
==============
GPlayerEventsMP::GameReloadAddAmmoEvent
==============
*/
void GPlayerEventsMP::GameReloadAddAmmoEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  GScr_Notify(ent, scr_const.reload, 0);
}

/*
==============
GPlayerEventsMP::GameReloadStartEvent
==============
*/
void GPlayerEventsMP::GameReloadStartEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  GScr_Notify(ent, scr_const.reload_start, 0);
}

/*
==============
GPlayerEventsMP::GameSkydiveBeginFreefallEvent
==============
*/
void GPlayerEventsMP::GameSkydiveBeginFreefallEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1080, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1081, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  G_Active_NotifySkydiveBeginFreefall(ent);
}

/*
==============
GPlayerEventsMP::GameSkydiveDeployParachuteEvent
==============
*/
void GPlayerEventsMP::GameSkydiveDeployParachuteEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1089, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1090, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  G_Active_NotifySkydiveDeployParachute(ent);
}

/*
==============
GPlayerEventsMP::GameSkydiveEndEvent
==============
*/
void GPlayerEventsMP::GameSkydiveEndEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1107, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1108, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  G_Active_NotifySkydiveEnd(ent);
}

/*
==============
GPlayerEventsMP::GameSkydiveTouchEvent
==============
*/
void GPlayerEventsMP::GameSkydiveTouchEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1098, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1099, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  G_Active_NotifySkydiveTouch(ent);
}

/*
==============
GPlayerEventsMP::GameSwitchOffhandEvent
==============
*/
void GPlayerEventsMP::GameSwitchOffhandEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const GGrenadePickupParms *v3; 

  v3 = GClientTaskQueue::GetParameter<GGrenadePickupParms>(outTaskQueue);
  G_PlayerEventsMP_GameSwitchOffhand(ent, v3);
}

/*
==============
GPlayerEventsMP::GameSwitchOffhandPullbackEvent
==============
*/
void GPlayerEventsMP::GameSwitchOffhandPullbackEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const GGrenadePickupParms *v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1124, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1125, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  v4 = GClientTaskQueue::GetParameter<GGrenadePickupParms>(outTaskQueue);
  G_PlayerEventsMP_GameSwitchOffhand(ent, v4);
  G_Active_NotifyOffHandPullback(ent, &v4->weapon);
}

/*
==============
GPlayerEventsMP::GameTurretFireEndEvent
==============
*/

void __fastcall GPlayerEventsMP::GameTurretFireEndEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  G_Weapon_FireTurretEnd(ent);
}

/*
==============
GPlayerEventsMP::GameTurretFireEvent
==============
*/
void GPlayerEventsMP::GameTurretFireEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const void *ParameterInternal; 
  gentity_s *EntityTurret; 
  GTurret *Turret; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 757, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 758, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = GClientTaskQueue::GetParameterInternal(outTaskQueue, 0x90u, 8u);
  EntityTurret = G_Weapon_GetEntityTurret(ent);
  if ( !EntityTurret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 762, ASSERT_TYPE_ASSERT, "( turretEnt != nullptr )", (const char *)&queryFormat, "turretEnt != nullptr") )
    __debugbreak();
  if ( EntityTurret->turretHandle.m_objIndex )
  {
    Turret = GTurret::GetTurret(&EntityTurret->turretHandle);
    GTurret::FireWithParams(Turret, EntityTurret, *((_DWORD *)ParameterInternal + 34), (const BgWeaponParms *const)ParameterInternal);
  }
}

/*
==============
GPlayerEventsMP::GameWeaponFireEvent
==============
*/
void GPlayerEventsMP::GameWeaponFireEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  char *params; 
  GBullet *v5; 
  int v6; 
  int v7; 
  gentity_s *v8; 
  unsigned int v9; 
  int v10; 
  __int32 v11; 
  __int32 v12; 
  __int32 v13; 
  __int32 v14; 
  char *WeaponName; 
  weapType_t WeaponType; 
  weapClass_t WeaponClass; 
  char output[512]; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 622, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr", -2i64) )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 623, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  params = (char *)GClientTaskQueue::GetParameterInternal(outTaskQueue, 0xC8u, 8u);
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v5 = GBullet::ms_gBulletSystem;
  v6 = *((_DWORD *)params + 48);
  v7 = *((_DWORD *)params + 49);
  if ( !*((_WORD *)params + 36) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 631, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( params->wp.weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( params->wp.weapon )") )
    __debugbreak();
  v8 = NULL;
  SV_Profile_BeginEvent(SVPROF_WEAPON_FIRE);
  G_Weapon_ClearSimulateTracerFlag(ent);
  GBullet::ResetHitClientEventCount(v5);
  v9 = 0;
  v10 = -1;
  v11 = BG_GetWeaponType((const Weapon *)(params + 72), params[132]) - 2;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 5;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            G_Deploy_Fire(ent, (const GWeaponFireParms *)params);
          }
          else
          {
            WeaponName = BG_GetWeaponName((const Weapon *)(params + 72), output, 0x200u);
            WeaponType = BG_GetWeaponType((const Weapon *)(params + 72), params[132]);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D9BAB0, 78i64, (unsigned int)WeaponType, WeaponName);
          }
        }
      }
      else
      {
        WeaponClass = BG_GetWeaponClass((const Weapon *)(params + 72), params[132]);
        if ( WeaponClass == WEAPCLASS_GRENADE || WeaponClass == WEAPCLASS_THROWINGKNIFE )
          v8 = G_Weapon_FireGrenade(ent, (const entity_event_t)v6, v7, (const GWeaponFireParms *const)params);
        else
          v8 = G_Weapon_FireMissile(ent, (const entity_event_t)v6, v7, (const GWeaponFireParms *const)params);
      }
    }
    else
    {
      v8 = G_Weapon_ThrowGrenade(ent, v7, (const BgWeaponParms *)params);
    }
  }
  else
  {
    v10 = G_Weapon_FireBullet(ent, v7, (const GWeaponFireParms *const)params);
    v9 = *((_DWORD *)params + 42);
  }
  G_Weapon_HandleFiredEvent(ent, v8, v10, v6, v9, (const GWeaponFireParms *const)params);
  SV_Profile_EndEvent(SVPROF_WEAPON_FIRE);
}

/*
==============
GPlayerEventsMP::GameWeaponSwitchCanceledEvent
==============
*/
void GPlayerEventsMP::GameWeaponSwitchCanceledEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const Weapon *v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1241, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1242, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  v4 = GClientTaskQueue::GetParameter<Weapon>(outTaskQueue);
  G_Active_NotifyWeaponSwitchCanceled(ent, v4);
}

/*
==============
GPlayerEventsMP::GameWeaponSwitchEvent
==============
*/
void GPlayerEventsMP::GameWeaponSwitchEvent(gentity_s *ent, GClientTaskQueue *outTaskQueue)
{
  const Weapon *v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1230, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1231, ASSERT_TYPE_ASSERT, "( outTaskQueue != nullptr )", (const char *)&queryFormat, "outTaskQueue != nullptr") )
    __debugbreak();
  v4 = GClientTaskQueue::GetParameter<Weapon>(outTaskQueue);
  G_Active_NotifyWeaponSwitchStarted(ent, v4);
}

/*
==============
GPlayerEventsMP::HandlePMoveEvents
==============
*/
void GPlayerEventsMP::HandlePMoveEvents(GPlayerEventsMP *this, GClientTaskQueue *outTaskQueue, gentity_s *const ent)
{
  __int64 number; 
  __int64 i; 
  __int64 v8; 
  unsigned int eventType; 
  const BgPlayerEvents::PlayerEvent *v10; 
  void (__fastcall *v11)(GClientTaskQueue *, const gentity_s *const, const BgPlayerEvents::PlayerEvent *const); 
  GWeaponMap *Instance; 
  char *debugTaskName; 
  char *debugTaskNamea; 
  __int64 v15; 

  if ( !GPlayerEventsMP::ms_eventHandlersRegistered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 324, ASSERT_TYPE_ASSERT, "( ms_eventHandlersRegistered )", (const char *)&queryFormat, "ms_eventHandlersRegistered") )
    __debugbreak();
  if ( this->m_eventsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 325, ASSERT_TYPE_ASSERT, "( !m_eventsEnabled )", (const char *)&queryFormat, "!m_eventsEnabled") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 326, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 327, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(debugTaskName) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", debugTaskName, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 328, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( ent->s.number ) )", (const char *)&queryFormat, "G_IsEntityInUse( ent->s.number )") )
    __debugbreak();
  if ( this->m_eventCount > 0x10 )
  {
    LODWORD(v15) = 16;
    LODWORD(debugTaskName) = this->m_eventCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 329, ASSERT_TYPE_ASSERT, "( m_eventCount ) <= ( ( sizeof( *array_counter( m_events ) ) + 0 ) )", "m_eventCount not in [0, ARRAY_COUNT( m_events )]\n\t%u not in [0, %u]", debugTaskName, v15) )
      __debugbreak();
  }
  if ( this->m_eventSequence > this->m_eventCount )
  {
    LODWORD(v15) = this->m_eventCount;
    LODWORD(debugTaskName) = this->m_eventSequence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 330, ASSERT_TYPE_ASSERT, "( m_eventSequence ) <= ( m_eventCount )", "m_eventSequence not in [0, m_eventCount]\n\t%u not in [0, %u]", debugTaskName, v15) )
      __debugbreak();
  }
  if ( this->m_eventCount )
  {
    GClientTaskQueue::AddTaskInternal(outTaskQueue, GPlayerEventsMP::BeginGameEvents, NULL, 0, 0, "GameEventsBegin");
    Profile_Begin(346);
    SV_Profile_BeginEvent(SVPROF_CLIENT_EVENTS);
    for ( i = this->m_eventSequence; (unsigned int)i < this->m_eventCount; this->m_eventSequence = i )
    {
      v8 = i;
      eventType = this->m_events[i].eventItem.eventType;
      v10 = &this->m_events[v8];
      if ( eventType >= 0xE3 )
      {
        LODWORD(v15) = 227;
        LODWORD(debugTaskNamea) = eventType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 344, ASSERT_TYPE_ASSERT, "(unsigned)( playerEvent->eventItem.eventType ) < (unsigned)( ( sizeof( *array_counter( ms_moveEventHandlers ) ) + 0 ) )", "playerEvent->eventItem.eventType doesn't index ARRAY_COUNT( ms_moveEventHandlers )\n\t%i not in [0, %i)", debugTaskNamea, v15) )
          __debugbreak();
      }
      v11 = GPlayerEventsMP::ms_moveEventHandlers[v10->eventItem.eventType];
      if ( v11 )
        v11(outTaskQueue, ent, v10);
      else
        GPlayerEventsMP::PMoveDefaultEvent(outTaskQueue, ent, v10);
      i = this->m_eventSequence + 1;
    }
    Profile_EndInternal(NULL);
    SV_Profile_EndEvent(SVPROF_CLIENT_EVENTS);
    GClientTaskQueue::AddTaskInternal(outTaskQueue, GPlayerEventsMP::FinishGameEvents, NULL, 0, 0, "GameEventsFinish");
  }
  Instance = GWeaponMap::GetInstance();
  BgPlayerEvents::ClearEvents(this, Instance);
}

/*
==============
GPlayerEventsMP::PMoveDefaultEvent
==============
*/
void GPlayerEventsMP::PMoveDefaultEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  unsigned int eventParm; 
  const playerState_s *EntityPlayerStateConst; 
  char v7; 
  sentient_s *sentient; 
  unsigned int v9; 
  bitarray<224> *p_result; 
  GClientTaskQueue *v11; 
  int *p_event; 
  void (__fastcall *v13)(gentity_s *, GClientTaskQueue *); 
  unsigned int v14; 
  const char *debugTaskName; 
  int event; 
  unsigned int v17; 
  int v18[2]; 
  bitarray<224> result; 

  eventParm = playerEvent->eventItem.eventParm;
  event = playerEvent->eventItem.eventType;
  v17 = eventParm;
  if ( !BG_IsPainLandingEvent(event) )
    goto LABEL_8;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 86, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  if ( BG_IsPlayer(EntityPlayerStateConst) || BG_IsSpectating(EntityPlayerStateConst) )
    v7 = 1;
  else
LABEL_8:
    v7 = 0;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 100, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  sentient = ent->sentient;
  if ( sentient )
  {
    Sentient_EnemyTeamFlags(&result, sentient->eTeam);
    v9 = 0;
    p_result = &result;
    while ( !p_result->array[0] )
    {
      ++v9;
      p_result = (bitarray<224> *)((char *)p_result + 4);
      if ( v9 >= 7 )
      {
        LOBYTE(sentient) = 0;
        goto LABEL_22;
      }
    }
    LOBYTE(sentient) = (unsigned int)(event - 170) <= 4 || event == 180 || BG_IsLandingEvent(event) || BG_IsPainLandingEvent(event);
  }
LABEL_22:
  if ( !v7 )
  {
    if ( !(_BYTE)sentient )
      return;
    debugTaskName = "GameEventAiSound";
    v11 = outTaskQueue;
    p_event = &event;
    v13 = GPlayerEventsMP::GameAiSoundEvent;
    goto LABEL_28;
  }
  v11 = outTaskQueue;
  if ( !(_BYTE)sentient )
  {
    debugTaskName = "GameEventPainLanding";
    p_event = (int *)&v17;
    v13 = GPlayerEventsMP::GamePainLandingEvent;
LABEL_28:
    v14 = 4;
    goto LABEL_29;
  }
  p_event = v18;
  v18[0] = event;
  v13 = GPlayerEventsMP::GamePainLandingAndAiSoundEvent;
  v14 = 8;
  v18[1] = v17;
  debugTaskName = "GameEventPainLandingAndAiSound";
LABEL_29:
  GClientTaskQueue::AddTaskInternal(v11, v13, p_event, v14, 4u, debugTaskName);
}

/*
==============
GPlayerEventsMP::PMoveDoorEvent
==============
*/
void GPlayerEventsMP::PMoveDoorEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  int eventType; 
  void (__fastcall *GameHandlerForEvent)(gentity_s *, GClientTaskQueue *); 
  unsigned int taskData; 

  eventType = playerEvent->eventItem.eventType;
  taskData = playerEvent->eventItem.eventParm;
  GameHandlerForEvent = GPlayerEventsMP::GetGameHandlerForEvent((const entity_event_t)eventType);
  GClientTaskQueue::AddTaskInternal(outTaskQueue, GameHandlerForEvent, &taskData, 4u, 4u, "PMoveDoorEvent");
}

/*
==============
GPlayerEventsMP::PMoveEvent
==============
*/
void GPlayerEventsMP::PMoveEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  void (__fastcall *GameHandlerForEvent)(gentity_s *, GClientTaskQueue *); 

  GameHandlerForEvent = GPlayerEventsMP::GetGameHandlerForEvent((const entity_event_t)playerEvent->eventItem.eventType);
  GClientTaskQueue::AddTaskInternal(outTaskQueue, GameHandlerForEvent, NULL, 0, 0, "GameEventGeneric");
}

/*
==============
GPlayerEventsMP::PMoveGestureStoppedEvent
==============
*/
void GPlayerEventsMP::PMoveGestureStoppedEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  unsigned int eventParm; 
  int eventTime; 
  __int64 eventType; 
  const playerState_s *EntityPlayerStateConst; 
  bool v8; 
  void (__fastcall **v9)(gentity_s *, GClientTaskQueue *); 
  char *debugTaskName; 
  GGestureStopParms outParams; 

  eventParm = playerEvent->eventItem.eventParm;
  eventTime = playerEvent->eventTime;
  eventType = playerEvent->eventItem.eventType;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 955, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  G_Active_SetupGestureStopParams(EntityPlayerStateConst, eventTime, eventParm, &outParams);
  if ( (unsigned int)eventType >= 0xE3 )
  {
    LODWORD(debugTaskName) = eventType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( ms_gameEventHandlers ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( ms_gameEventHandlers )\n\t%i not in [0, %i)", debugTaskName, 227) )
      __debugbreak();
  }
  v8 = GPlayerEventsMP::ms_gameEventHandlers[eventType] == NULL;
  v9 = &GPlayerEventsMP::ms_gameEventHandlers[eventType];
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 174, ASSERT_TYPE_ASSERT, "( ms_gameEventHandlers[eventType] != nullptr )", (const char *)&queryFormat, "ms_gameEventHandlers[eventType] != nullptr") )
    __debugbreak();
  if ( *v9 != GPlayerEventsMP::GameGestureStoppedEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 961, ASSERT_TYPE_ASSERT, "( GetGameHandlerForEvent( eventType ) == handler )", (const char *)&queryFormat, "GetGameHandlerForEvent( eventType ) == handler") )
    __debugbreak();
  GClientTaskQueue::AddTaskInternal(outTaskQueue, GPlayerEventsMP::GameGestureStoppedEvent, &outParams, 8u, 4u, "GameEventGestureStopped");
}

/*
==============
GPlayerEventsMP::PMoveGlassBreakEvent
==============
*/
void GPlayerEventsMP::PMoveGlassBreakEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  __int64 eventType; 
  char *debugTaskName; 
  GGlassBreakParms outParams; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 983, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 984, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  eventType = playerEvent->eventItem.eventType;
  G_Active_Glass_SetupBreakParams(&ent->client->ps, ent, &outParams);
  if ( (unsigned int)eventType >= 0xE3 )
  {
    LODWORD(debugTaskName) = eventType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( ms_gameEventHandlers ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( ms_gameEventHandlers )\n\t%i not in [0, %i)", debugTaskName, 227) )
      __debugbreak();
  }
  if ( !GPlayerEventsMP::ms_gameEventHandlers[eventType] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 174, ASSERT_TYPE_ASSERT, "( ms_gameEventHandlers[eventType] != nullptr )", (const char *)&queryFormat, "ms_gameEventHandlers[eventType] != nullptr") )
    __debugbreak();
  if ( GPlayerEventsMP::ms_gameEventHandlers[eventType] != GPlayerEventsMP::GameGlassBreakEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 995, ASSERT_TYPE_ASSERT, "( GetGameHandlerForEvent( eventType ) == handler )", (const char *)&queryFormat, "GetGameHandlerForEvent( eventType ) == handler") )
    __debugbreak();
  GClientTaskQueue::AddTaskInternal(outTaskQueue, GPlayerEventsMP::GameGlassBreakEvent, &outParams, 0x70u, 8u, "GameEventGlassBreak");
}

/*
==============
GPlayerEventsMP::PMoveGrenadeSuicideEvent
==============
*/
void GPlayerEventsMP::PMoveGrenadeSuicideEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  gclient_s *client; 
  GWeaponMap *Instance; 
  __int64 eventType; 
  bool HasUnderbarrelAmmo; 
  int v10; 
  int IsClipCompatible; 
  char *debugTaskName; 
  AmmoStore result; 
  Weapon r_weapon; 
  bitarray<64> perks; 
  int grenadeTimeLeft; 
  int HeldGrenadeFuse; 
  int v18; 
  __int16 throwbackGrenadeOwner; 
  char v20; 
  bool v21; 
  bool v22; 
  AmmoStore r_clip2; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 864, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 865, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  client = ent->client;
  if ( (BG_IsPlayer(&client->ps) || BG_IsSpectating(&client->ps)) && (ent->flags.m_flags[0] & 3) == 0 )
  {
    Instance = GWeaponMap::GetInstance();
    eventType = playerEvent->eventItem.eventType;
    r_weapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)playerEvent->eventItem.eventParm);
    perks = client->ps.perks;
    grenadeTimeLeft = client->ps.grenadeTimeLeft;
    throwbackGrenadeOwner = client->ps.throwbackGrenadeOwner;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 1u) || (v20 = 0, BG_IsUsingOffhandGestureWeapon(&client->ps)) )
      v20 = 1;
    v21 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 0x1Bu));
    v22 = BG_ThrowingBackGrenade(&client->ps);
    HasUnderbarrelAmmo = BG_HasUnderbarrelAmmo(&r_weapon);
    HeldGrenadeFuse = BG_GetHeldGrenadeFuse(&r_weapon, HasUnderbarrelAmmo, &client->ps);
    r_clip2 = *BG_AmmoStoreForWeapon(&result, &r_weapon, 0);
    BG_HasLadderHand(&client->ps);
    v10 = 0;
    while ( 1 )
    {
      IsClipCompatible = BG_IsClipCompatible(&client->ps.weapCommon.ammoInClip[v10].clipIndex, &r_clip2);
      if ( IsClipCompatible )
        break;
      if ( (unsigned int)++v10 >= 0xF )
        goto LABEL_23;
    }
    IsClipCompatible = client->ps.weapCommon.ammoInClip[v10].ammoCount[0];
LABEL_23:
    v18 = IsClipCompatible;
    if ( G_Main_GetEntHandlerList(ent)->die )
      client->ps.stats[0] = 0;
    if ( (unsigned int)eventType >= 0xE3 )
    {
      LODWORD(debugTaskName) = eventType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( ms_gameEventHandlers ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( ms_gameEventHandlers )\n\t%i not in [0, %i)", debugTaskName, 227) )
        __debugbreak();
    }
    if ( !GPlayerEventsMP::ms_gameEventHandlers[eventType] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 174, ASSERT_TYPE_ASSERT, "( ms_gameEventHandlers[eventType] != nullptr )", (const char *)&queryFormat, "ms_gameEventHandlers[eventType] != nullptr") )
      __debugbreak();
    if ( GPlayerEventsMP::ms_gameEventHandlers[eventType] != GPlayerEventsMP::GameGrenadeSuicideEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 903, ASSERT_TYPE_ASSERT, "( GetGameHandlerForEvent( eventType ) == handler )", (const char *)&queryFormat, "GetGameHandlerForEvent( eventType ) == handler") )
      __debugbreak();
    GClientTaskQueue::AddTaskInternal(outTaskQueue, GPlayerEventsMP::GameGrenadeSuicideEvent, &r_weapon, 0x58u, 4u, "GameEventGrenadeSuicide");
  }
}

/*
==============
GPlayerEventsMP::PMoveMeleeFireEvent
==============
*/
void GPlayerEventsMP::PMoveMeleeFireEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  gclient_s *client; 
  const dvar_t *v7; 
  __int16 meleeChargeEnt; 
  int eventTime; 
  __int64 eventType; 
  char *debugTaskName; 
  __int64 v12; 
  GMeleeFireParms outParams; 
  int v14; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 776, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 777, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  client = ent->client;
  if ( !BG_IsTurretActive(&client->ps) && !BG_IsVehicleActive(&client->ps) || !ent->active )
  {
    v7 = DCONST_DVARBOOL_player_meleeForceServerMiss;
    if ( !DCONST_DVARBOOL_player_meleeForceServerMiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeForceServerMiss") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      meleeChargeEnt = client->ps.meleeChargeEnt;
      if ( meleeChargeEnt >= 0 && (unsigned __int16)meleeChargeEnt <= 0x7FEu )
        *(_QWORD *)client->ps.velocity.v = 0i64;
      PM_MeleeChargeClear(&client->ps);
    }
    else
    {
      eventTime = playerEvent->eventTime;
      eventType = playerEvent->eventItem.eventType;
      G_Weapon_SetupMeleeParams(ent, eventTime, &outParams);
      v14 = eventTime;
      if ( (unsigned int)eventType >= 0xE3 )
      {
        LODWORD(v12) = 227;
        LODWORD(debugTaskName) = eventType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( ms_gameEventHandlers ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( ms_gameEventHandlers )\n\t%i not in [0, %i)", debugTaskName, v12) )
          __debugbreak();
      }
      if ( !GPlayerEventsMP::ms_gameEventHandlers[eventType] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 174, ASSERT_TYPE_ASSERT, "( ms_gameEventHandlers[eventType] != nullptr )", (const char *)&queryFormat, "ms_gameEventHandlers[eventType] != nullptr") )
        __debugbreak();
      if ( GPlayerEventsMP::ms_gameEventHandlers[eventType] != GPlayerEventsMP::GameMeleeFireEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 809, ASSERT_TYPE_ASSERT, "( GetGameHandlerForEvent( eventType ) == handler )", (const char *)&queryFormat, "GetGameHandlerForEvent( eventType ) == handler") )
        __debugbreak();
      GClientTaskQueue::AddTaskInternal(outTaskQueue, GPlayerEventsMP::GameMeleeFireEvent, &outParams, 0xA0u, 8u, "GameEventMeleeFire");
    }
  }
}

/*
==============
GPlayerEventsMP::PMoveOffhandFireEvent
==============
*/
void GPlayerEventsMP::PMoveOffhandFireEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  GWeaponMap *Instance; 
  int eventTime; 
  const Weapon *Weapon; 
  __int64 eventType; 
  int debugTaskName; 
  int v11; 
  BgWeaponParms outParams; 
  int v13; 

  Instance = GWeaponMap::GetInstance();
  eventTime = playerEvent->eventTime;
  Weapon = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)playerEvent->eventItem.eventParm);
  eventType = playerEvent->eventItem.eventType;
  G_Weapon_SetupOffhandParams(ent, Weapon, eventTime, &outParams);
  v13 = eventTime;
  if ( (unsigned int)eventType >= 0xE3 )
  {
    v11 = 227;
    debugTaskName = eventType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( ms_gameEventHandlers ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( ms_gameEventHandlers )\n\t%i not in [0, %i)", debugTaskName, v11) )
      __debugbreak();
  }
  if ( !GPlayerEventsMP::ms_gameEventHandlers[eventType] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 174, ASSERT_TYPE_ASSERT, "( ms_gameEventHandlers[eventType] != nullptr )", (const char *)&queryFormat, "ms_gameEventHandlers[eventType] != nullptr") )
    __debugbreak();
  if ( GPlayerEventsMP::ms_gameEventHandlers[eventType] != GPlayerEventsMP::GameOffhandFireEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 842, ASSERT_TYPE_ASSERT, "( GetGameHandlerForEvent( eventType ) == handler )", (const char *)&queryFormat, "GetGameHandlerForEvent( eventType ) == handler") )
    __debugbreak();
  GClientTaskQueue::AddTaskInternal(outTaskQueue, GPlayerEventsMP::GameOffhandFireEvent, &outParams, 0x90u, 8u, "GameEventOffhandFireEvent");
}

/*
==============
GPlayerEventsMP::PMoveSkydiveEvent
==============
*/
void GPlayerEventsMP::PMoveSkydiveEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  void (__fastcall *GameHandlerForEvent)(gentity_s *, GClientTaskQueue *); 

  GameHandlerForEvent = GPlayerEventsMP::GetGameHandlerForEvent((const entity_event_t)playerEvent->eventItem.eventType);
  GClientTaskQueue::AddTaskInternal(outTaskQueue, GameHandlerForEvent, NULL, 0, 0, "GameEventPmoveSkydive");
}

/*
==============
GPlayerEventsMP::PMoveSwitchOffhandEvent
==============
*/
void GPlayerEventsMP::PMoveSwitchOffhandEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  int eventType; 
  unsigned __int16 v9; 
  void (__fastcall *GameHandlerForEvent)(gentity_s *, GClientTaskQueue *); 
  Weapon r_weapon; 
  unsigned __int16 v12; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1043, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 1046, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  eventType = playerEvent->eventItem.eventType;
  r_weapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)playerEvent->eventItem.eventParm);
  if ( G_Active_CanDoGrenadePickup(EntityPlayerStateConst, &r_weapon) )
    v9 = truncate_cast<unsigned short,unsigned int>(EntityPlayerStateConst->cursorHintEntIndex);
  else
    v9 = 2047;
  v12 = v9;
  GameHandlerForEvent = GPlayerEventsMP::GetGameHandlerForEvent((const entity_event_t)eventType);
  GClientTaskQueue::AddTaskInternal(outTaskQueue, GameHandlerForEvent, &r_weapon, 0x3Eu, 2u, "GameEventSwitchOffhand");
}

/*
==============
GPlayerEventsMP::PMoveTurretFireEvent
==============
*/
void GPlayerEventsMP::PMoveTurretFireEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  __int64 eventType; 
  int eventTime; 
  gentity_s *EntityTurret; 
  GTurret *Turret; 
  int debugTaskName; 
  int v9; 
  BgWeaponParms outParams; 
  int v11; 

  eventType = playerEvent->eventItem.eventType;
  eventTime = playerEvent->eventTime;
  EntityTurret = G_Weapon_GetEntityTurret(ent);
  Turret = GTurret::GetTurret(&EntityTurret->turretHandle);
  GTurret::SetupFireParams(Turret, EntityTurret, eventTime, &outParams);
  v11 = eventTime;
  if ( (unsigned int)eventType >= 0xE3 )
  {
    v9 = 227;
    debugTaskName = eventType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( ms_gameEventHandlers ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( ms_gameEventHandlers )\n\t%i not in [0, %i)", debugTaskName, v9) )
      __debugbreak();
  }
  if ( !GPlayerEventsMP::ms_gameEventHandlers[eventType] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 174, ASSERT_TYPE_ASSERT, "( ms_gameEventHandlers[eventType] != nullptr )", (const char *)&queryFormat, "ms_gameEventHandlers[eventType] != nullptr") )
    __debugbreak();
  if ( GPlayerEventsMP::ms_gameEventHandlers[eventType] != GPlayerEventsMP::GameTurretFireEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 750, ASSERT_TYPE_ASSERT, "( GetGameHandlerForEvent( eventType ) == handler )", (const char *)&queryFormat, "GetGameHandlerForEvent( eventType ) == handler") )
    __debugbreak();
  GClientTaskQueue::AddTaskInternal(outTaskQueue, GPlayerEventsMP::GameTurretFireEvent, &outParams, 0x90u, 8u, "GameEventTurretFire");
}

/*
==============
GPlayerEventsMP::PMoveWeaponEvent
==============
*/
void GPlayerEventsMP::PMoveWeaponEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  GWeaponMap *Instance; 
  int eventType; 
  const Weapon *Weapon; 
  void (__fastcall *GameHandlerForEvent)(gentity_s *, GClientTaskQueue *); 

  Instance = GWeaponMap::GetInstance();
  eventType = playerEvent->eventItem.eventType;
  Weapon = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)playerEvent->eventItem.eventParm);
  GameHandlerForEvent = GPlayerEventsMP::GetGameHandlerForEvent((const entity_event_t)eventType);
  GClientTaskQueue::AddTaskInternal(outTaskQueue, GameHandlerForEvent, Weapon, 0x3Cu, 2u, "GameEventWeapon");
}

/*
==============
GPlayerEventsMP::PMoveWeaponFireEvent
==============
*/
void GPlayerEventsMP::PMoveWeaponFireEvent(GClientTaskQueue *outTaskQueue, const gentity_s *const ent, const BgPlayerEvents::PlayerEvent *const playerEvent)
{
  GWeaponMap *Instance; 
  gclient_s *client; 
  BgWeaponMap *v7; 
  __int64 eventType; 
  int eventTime; 
  int v10; 
  const Weapon *Weapon; 
  bool AltWeaponModeAsStoredInEntityState; 
  int EquippedWeaponIndex; 
  __int64 v14; 
  PlayerHandIndex HandFromWeaponEvent; 
  __int32 v16; 
  __int32 v17; 
  __int32 v18; 
  __int32 v19; 
  char *WeaponName; 
  weapType_t WeaponType; 
  weapClass_t WeaponClass; 
  vec3_t *outKickAVel; 
  bool *outKickNeedsToCrossCenter; 
  bool v25; 
  unsigned int eventParm; 
  GClientTaskQueue *v27; 
  vec3_t kickAngles; 
  vec3_t kickAVel; 
  GWeaponFireParms outParams; 
  int v31; 
  int v32; 
  char output[512]; 

  v27 = outTaskQueue;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 511, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 512, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  client = ent->client;
  v7 = Instance;
  eventType = playerEvent->eventItem.eventType;
  eventTime = playerEvent->eventTime;
  v10 = playerEvent->eventItem.eventType;
  eventParm = playerEvent->eventItem.eventParm;
  kickAngles.v[0] = 0.0;
  kickAngles.v[1] = 0.0;
  kickAngles.v[2] = 0.0;
  G_ActiveMP_FireRecoil(ent, &client->ps, Instance, v10, &kickAngles, &kickAVel, &v25);
  if ( SV_BotIsBot(ent->s.number) )
    SV_BotSetFireRecoil(ent->s.number, &kickAVel);
  if ( !BG_IsTurretActive(&client->ps) && !BG_IsVehicleActive(&client->ps) || !ent->active )
  {
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v7, ent->s.weaponHandle);
    if ( Weapon->weaponIdx )
    {
      AltWeaponModeAsStoredInEntityState = BG_GetAltWeaponModeAsStoredInEntityState(&client->ps, v7);
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v7, &client->ps, Weapon);
      v14 = EquippedWeaponIndex;
      if ( EquippedWeaponIndex >= 0 )
      {
        HandFromWeaponEvent = BG_GetHandFromWeaponEvent(eventType);
        BG_Heat_ApplyFireHeat(&ent->client->weaponHeat[v14][HandFromWeaponEvent], Weapon, AltWeaponModeAsStoredInEntityState, playerEvent->eventTime);
      }
      v16 = BG_GetWeaponType(Weapon, AltWeaponModeAsStoredInEntityState) - 2;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 5;
            if ( v19 )
            {
              if ( v19 == 1 )
              {
                G_Weapon_SetupWeaponParams(ent, eventType, &outParams);
                G_Deploy_Update(&client->ps, &outParams);
              }
              else
              {
                WeaponName = BG_GetWeaponName(Weapon, output, 0x200u);
                WeaponType = BG_GetWeaponType(Weapon, ent->s.inAltWeaponMode);
                Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D9BAB0, 77i64, (unsigned int)WeaponType, WeaponName);
              }
              goto LABEL_30;
            }
          }
          else
          {
            WeaponClass = BG_GetWeaponClass(Weapon, AltWeaponModeAsStoredInEntityState);
            if ( WeaponClass != WEAPCLASS_GRENADE && WeaponClass != WEAPCLASS_THROWINGKNIFE )
            {
              G_Weapon_SetupMissileParams(ent, eventTime, eventType, eventParm, &outParams);
              goto LABEL_30;
            }
          }
        }
        G_Weapon_SetupWeaponParams(ent, eventTime, &outParams);
      }
      else
      {
        G_Weapon_SetupBulletParams(ent, eventTime, eventType, eventParm, &outParams);
      }
LABEL_30:
      v31 = eventType;
      v32 = eventTime;
      if ( (unsigned int)eventType >= 0xE3 )
      {
        LODWORD(outKickNeedsToCrossCenter) = 227;
        LODWORD(outKickAVel) = eventType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( ms_gameEventHandlers ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( ms_gameEventHandlers )\n\t%i not in [0, %i)", outKickAVel, outKickNeedsToCrossCenter) )
          __debugbreak();
      }
      if ( !GPlayerEventsMP::ms_gameEventHandlers[eventType] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 174, ASSERT_TYPE_ASSERT, "( ms_gameEventHandlers[eventType] != nullptr )", (const char *)&queryFormat, "ms_gameEventHandlers[eventType] != nullptr") )
        __debugbreak();
      if ( GPlayerEventsMP::ms_gameEventHandlers[eventType] != GPlayerEventsMP::GameWeaponFireEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 611, ASSERT_TYPE_ASSERT, "( GetGameHandlerForEvent( eventType ) == handler )", (const char *)&queryFormat, "GetGameHandlerForEvent( eventType ) == handler") )
        __debugbreak();
      GClientTaskQueue::AddTaskInternal(v27, GPlayerEventsMP::GameWeaponFireEvent, &outParams, 0xC8u, 8u, "GameEventWeaponFire");
    }
  }
}

/*
==============
GPlayerEventsMP::RegisterEvents
==============
*/
void GPlayerEventsMP::RegisterEvents(void)
{
  const char *EventTypeName; 
  const char *v1; 
  const char *v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  const char *v39; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  const char *v49; 
  const char *v50; 
  const char *v51; 
  const char *v52; 
  const char *v53; 
  const char *v54; 
  const char *v55; 
  const char *v56; 
  const char *v57; 
  const char *v58; 
  const char *v59; 
  const char *v60; 
  const char *v61; 
  const char *v62; 
  const char *v63; 
  const char *v64; 
  const char *v65; 
  const char *v66; 
  const char *v67; 
  const char *v68; 
  const char *v69; 
  const char *v70; 
  const char *v71; 
  const char *v72; 
  const char *v73; 
  const char *v74; 
  const char *v75; 
  const char *v76; 
  const char *v77; 
  const char *v78; 
  const char *v79; 
  const char *v80; 
  const char *v81; 
  const char *v82; 
  const char *v83; 
  const char *v84; 
  const char *v85; 
  const char *v86; 
  const char *v87; 
  const char *v88; 
  const char *v89; 
  const char *v90; 
  const char *v91; 
  const char *v92; 
  const char *v93; 
  const char *v94; 
  const char *v95; 
  const char *v96; 
  const char *v97; 
  const char *v98; 
  const char *v99; 
  const char *v100; 
  const char *v101; 
  const char *v102; 
  const char *v103; 
  const char *v104; 
  const char *v105; 
  const char *v106; 
  const char *v107; 
  const char *v108; 
  const char *v109; 
  const char *v110; 
  const char *v111; 
  const char *v112; 
  const char *v113; 
  const char *v114; 
  const char *v115; 
  const char *v116; 
  const char *v117; 
  const char *v118; 
  const char *v119; 
  const char *v120; 
  const char *v121; 
  const char *v122; 
  const char *v123; 
  const char *v124; 
  const char *v125; 

  if ( GPlayerEventsMP::ms_moveEventHandlers[68] )
  {
    EventTypeName = BG_GetEventTypeName(68);
    v1 = BG_GetEventTypeName(68);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 235, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_WEAPON] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_WEAPON] == nullptr", v1, EventTypeName) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[68] )
  {
    v2 = BG_GetEventTypeName(68);
    v3 = BG_GetEventTypeName(68);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 235, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_WEAPON] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_WEAPON] == nullptr", v3, v2) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[68] = GPlayerEventsMP::PMoveWeaponFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[68] = GPlayerEventsMP::GameWeaponFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[70] )
  {
    v4 = BG_GetEventTypeName(70);
    v5 = BG_GetEventTypeName(70);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 236, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_WEAPON_LEFT] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_WEAPON_LEFT] == nullptr", v5, v4) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[70] )
  {
    v6 = BG_GetEventTypeName(70);
    v7 = BG_GetEventTypeName(70);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 236, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_WEAPON_LEFT] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_WEAPON_LEFT] == nullptr", v7, v6) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[70] = GPlayerEventsMP::PMoveWeaponFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[70] = GPlayerEventsMP::GameWeaponFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[69] )
  {
    v8 = BG_GetEventTypeName(69);
    v9 = BG_GetEventTypeName(69);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 237, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_WEAPON_LASTSHOT] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_WEAPON_LASTSHOT] == nullptr", v9, v8) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[69] )
  {
    v10 = BG_GetEventTypeName(69);
    v11 = BG_GetEventTypeName(69);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 237, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_WEAPON_LASTSHOT] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_WEAPON_LASTSHOT] == nullptr", v11, v10) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[69] = GPlayerEventsMP::PMoveWeaponFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[69] = GPlayerEventsMP::GameWeaponFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[71] )
  {
    v12 = BG_GetEventTypeName(71);
    v13 = BG_GetEventTypeName(71);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 238, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_WEAPON_LASTSHOT_LEFT] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_WEAPON_LASTSHOT_LEFT] == nullptr", v13, v12) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[71] )
  {
    v14 = BG_GetEventTypeName(71);
    v15 = BG_GetEventTypeName(71);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 238, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_WEAPON_LASTSHOT_LEFT] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_WEAPON_LASTSHOT_LEFT] == nullptr", v15, v14) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[71] = GPlayerEventsMP::PMoveWeaponFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[71] = GPlayerEventsMP::GameWeaponFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[72] )
  {
    v16 = BG_GetEventTypeName(72);
    v17 = BG_GetEventTypeName(72);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 239, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_WEAPON_BALL_PASS] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_WEAPON_BALL_PASS] == nullptr", v17, v16) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[72] )
  {
    v18 = BG_GetEventTypeName(72);
    v19 = BG_GetEventTypeName(72);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 239, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_WEAPON_BALL_PASS] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_WEAPON_BALL_PASS] == nullptr", v19, v18) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[72] = GPlayerEventsMP::PMoveWeaponFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[72] = GPlayerEventsMP::GameWeaponFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[89] )
  {
    v20 = BG_GetEventTypeName(89);
    v21 = BG_GetEventTypeName(89);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 243, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_FIRE_VEH_TURRET] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_FIRE_VEH_TURRET] == nullptr", v21, v20) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[89] )
  {
    v22 = BG_GetEventTypeName(89);
    v23 = BG_GetEventTypeName(89);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 243, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_VEH_TURRET] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_VEH_TURRET] == nullptr", v23, v22) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[89] = GPlayerEventsMP::PMoveWeaponFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[89] = GPlayerEventsMP::GameWeaponFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[90] )
  {
    v24 = BG_GetEventTypeName(90);
    v25 = BG_GetEventTypeName(90);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 244, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_FIRE_TURRET] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_FIRE_TURRET] == nullptr", v25, v24) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[90] )
  {
    v26 = BG_GetEventTypeName(90);
    v27 = BG_GetEventTypeName(90);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 244, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_TURRET] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_TURRET] == nullptr", v27, v26) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[90] = GPlayerEventsMP::PMoveWeaponFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[90] = GPlayerEventsMP::GameWeaponFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[91] )
  {
    v28 = BG_GetEventTypeName(91);
    v29 = BG_GetEventTypeName(91);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_FIRE_SENTRY] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_FIRE_SENTRY] == nullptr", v29, v28) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[91] )
  {
    v30 = BG_GetEventTypeName(91);
    v31 = BG_GetEventTypeName(91);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_SENTRY] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_SENTRY] == nullptr", v31, v30) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[91] = GPlayerEventsMP::PMoveWeaponFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[91] = GPlayerEventsMP::GameWeaponFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[87] )
  {
    v32 = BG_GetEventTypeName(87);
    v33 = BG_GetEventTypeName(87);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 246, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_TURRET] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SV_FIRE_TURRET] == nullptr", v33, v32) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[87] )
  {
    v34 = BG_GetEventTypeName(87);
    v35 = BG_GetEventTypeName(87);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 246, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_TURRET] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_TURRET] == nullptr", v35, v34) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[87] = GPlayerEventsMP::PMoveTurretFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[87] = GPlayerEventsMP::GameTurretFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[74] )
  {
    v36 = BG_GetEventTypeName(74);
    v37 = BG_GetEventTypeName(74);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 247, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_FIRE_MELEE_DAMAGE] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_FIRE_MELEE_DAMAGE] == nullptr", v37, v36) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[74] )
  {
    v38 = BG_GetEventTypeName(74);
    v39 = BG_GetEventTypeName(74);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 247, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_MELEE_DAMAGE] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_MELEE_DAMAGE] == nullptr", v39, v38) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[74] = GPlayerEventsMP::PMoveMeleeFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[74] = GPlayerEventsMP::GameMeleeFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[135] )
  {
    v40 = BG_GetEventTypeName(135);
    v41 = BG_GetEventTypeName(135);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 248, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_GRENADE_SUICIDE] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_GRENADE_SUICIDE] == nullptr", v41, v40) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[135] )
  {
    v42 = BG_GetEventTypeName(135);
    v43 = BG_GetEventTypeName(135);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 248, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_GRENADE_SUICIDE] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_GRENADE_SUICIDE] == nullptr", v43, v42) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[135] = GPlayerEventsMP::PMoveGrenadeSuicideEvent;
  GPlayerEventsMP::ms_gameEventHandlers[135] = GPlayerEventsMP::GameGrenadeSuicideEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[79] )
  {
    v44 = BG_GetEventTypeName(79);
    v45 = BG_GetEventTypeName(79);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 249, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_USE_OFFHAND] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_USE_OFFHAND] == nullptr", v45, v44) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[79] )
  {
    v46 = BG_GetEventTypeName(79);
    v47 = BG_GetEventTypeName(79);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 249, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_USE_OFFHAND] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_USE_OFFHAND] == nullptr", v47, v46) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[79] = GPlayerEventsMP::PMoveOffhandFireEvent;
  GPlayerEventsMP::ms_gameEventHandlers[79] = GPlayerEventsMP::GameOffhandFireEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[30] )
  {
    v48 = BG_GetEventTypeName(30);
    v49 = BG_GetEventTypeName(30);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 250, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_GESTURE_STOPPED_NOTIFY] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_GESTURE_STOPPED_NOTIFY] == nullptr", v49, v48) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[30] )
  {
    v50 = BG_GetEventTypeName(30);
    v51 = BG_GetEventTypeName(30);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 250, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_GESTURE_STOPPED_NOTIFY] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_GESTURE_STOPPED_NOTIFY] == nullptr", v51, v50) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[30] = GPlayerEventsMP::PMoveGestureStoppedEvent;
  GPlayerEventsMP::ms_gameEventHandlers[30] = GPlayerEventsMP::GameGestureStoppedEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[209] )
  {
    v52 = BG_GetEventTypeName(209);
    v53 = BG_GetEventTypeName(209);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 251, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_BREAK_GLASS] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_BREAK_GLASS] == nullptr", v53, v52) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[209] )
  {
    v54 = BG_GetEventTypeName(209);
    v55 = BG_GetEventTypeName(209);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 251, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_BREAK_GLASS] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_BREAK_GLASS] == nullptr", v55, v54) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[209] = GPlayerEventsMP::PMoveGlassBreakEvent;
  GPlayerEventsMP::ms_gameEventHandlers[209] = GPlayerEventsMP::GameGlassBreakEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[77] )
  {
    v56 = BG_GetEventTypeName(77);
    v57 = BG_GetEventTypeName(77);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 252, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_PREP_OFFHAND] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_PREP_OFFHAND] == nullptr", v57, v56) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[77] )
  {
    v58 = BG_GetEventTypeName(77);
    v59 = BG_GetEventTypeName(77);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 252, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_PREP_OFFHAND] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_PREP_OFFHAND] == nullptr", v59, v58) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[77] = GPlayerEventsMP::PMoveWeaponEvent;
  GPlayerEventsMP::ms_gameEventHandlers[77] = GPlayerEventsMP::GameOffhandPullbackEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[37] )
  {
    v60 = BG_GetEventTypeName(37);
    v61 = BG_GetEventTypeName(37);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 253, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_PULLBACK_WEAPON] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_PULLBACK_WEAPON] == nullptr", v61, v60) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[37] )
  {
    v62 = BG_GetEventTypeName(37);
    v63 = BG_GetEventTypeName(37);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 253, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_PULLBACK_WEAPON] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_PULLBACK_WEAPON] == nullptr", v63, v62) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[37] = GPlayerEventsMP::PMoveWeaponEvent;
  GPlayerEventsMP::ms_gameEventHandlers[37] = GPlayerEventsMP::GameOffhandPullbackEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[35] )
  {
    v64 = BG_GetEventTypeName(35);
    v65 = BG_GetEventTypeName(35);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 254, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_WEAPON_SWITCH_STARTED] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_WEAPON_SWITCH_STARTED] == nullptr", v65, v64) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[35] )
  {
    v66 = BG_GetEventTypeName(35);
    v67 = BG_GetEventTypeName(35);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 254, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_WEAPON_SWITCH_STARTED] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_WEAPON_SWITCH_STARTED] == nullptr", v67, v66) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[35] = GPlayerEventsMP::GameWeaponSwitchEvent;
  GPlayerEventsMP::ms_moveEventHandlers[35] = GPlayerEventsMP::PMoveWeaponEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[226] )
  {
    v68 = BG_GetEventTypeName(226);
    v69 = BG_GetEventTypeName(226);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 255, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_WEAPON_SWITCH_CANCELED] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_WEAPON_SWITCH_CANCELED] == nullptr", v69, v68) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[226] )
  {
    v70 = BG_GetEventTypeName(226);
    v71 = BG_GetEventTypeName(226);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 255, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_WEAPON_SWITCH_CANCELED] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_WEAPON_SWITCH_CANCELED] == nullptr", v71, v70) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[226] = GPlayerEventsMP::GameWeaponSwitchCanceledEvent;
  GPlayerEventsMP::ms_moveEventHandlers[226] = GPlayerEventsMP::PMoveWeaponEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[36] )
  {
    v72 = BG_GetEventTypeName(36);
    v73 = BG_GetEventTypeName(36);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 256, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_WEAPON_SWITCH_STARTED_OFFHAND] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_WEAPON_SWITCH_STARTED_OFFHAND] == nullptr", v73, v72) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[36] )
  {
    v74 = BG_GetEventTypeName(36);
    v75 = BG_GetEventTypeName(36);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 256, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_WEAPON_SWITCH_STARTED_OFFHAND] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_WEAPON_SWITCH_STARTED_OFFHAND] == nullptr", v75, v74) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[36] = GPlayerEventsMP::GameWeaponSwitchEvent;
  GPlayerEventsMP::ms_moveEventHandlers[36] = GPlayerEventsMP::PMoveWeaponEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[136] )
  {
    v76 = BG_GetEventTypeName(136);
    v77 = BG_GetEventTypeName(136);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 257, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_DETONATE] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_DETONATE] == nullptr", v77, v76) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[136] )
  {
    v78 = BG_GetEventTypeName(136);
    v79 = BG_GetEventTypeName(136);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 257, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_DETONATE] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_DETONATE] == nullptr", v79, v78) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[136] = GPlayerEventsMP::GameDetonateEvent;
  GPlayerEventsMP::ms_moveEventHandlers[136] = GPlayerEventsMP::PMoveWeaponEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[80] )
  {
    v80 = BG_GetEventTypeName(80);
    v81 = BG_GetEventTypeName(80);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 258, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SWITCH_OFFHAND] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SWITCH_OFFHAND] == nullptr", v81, v80) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[80] )
  {
    v82 = BG_GetEventTypeName(80);
    v83 = BG_GetEventTypeName(80);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 258, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SWITCH_OFFHAND] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SWITCH_OFFHAND] == nullptr", v83, v82) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[80] = GPlayerEventsMP::PMoveSwitchOffhandEvent;
  GPlayerEventsMP::ms_gameEventHandlers[80] = GPlayerEventsMP::GameSwitchOffhandEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[81] )
  {
    v84 = BG_GetEventTypeName(81);
    v85 = BG_GetEventTypeName(81);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 259, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SWITCH_AND_PREP_OFFHAND] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SWITCH_AND_PREP_OFFHAND] == nullptr", v85, v84) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[81] )
  {
    v86 = BG_GetEventTypeName(81);
    v87 = BG_GetEventTypeName(81);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 259, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SWITCH_AND_PREP_OFFHAND] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SWITCH_AND_PREP_OFFHAND] == nullptr", v87, v86) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[81] = GPlayerEventsMP::GameSwitchOffhandPullbackEvent;
  GPlayerEventsMP::ms_moveEventHandlers[81] = GPlayerEventsMP::PMoveSwitchOffhandEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[56] )
  {
    v88 = BG_GetEventTypeName(56);
    v89 = BG_GetEventTypeName(56);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SKYDIVE_BEGIN_FREEFALL] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SKYDIVE_BEGIN_FREEFALL] == nullptr", v89, v88) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[56] )
  {
    v90 = BG_GetEventTypeName(56);
    v91 = BG_GetEventTypeName(56);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SKYDIVE_BEGIN_FREEFALL] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SKYDIVE_BEGIN_FREEFALL] == nullptr", v91, v90) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[56] = GPlayerEventsMP::PMoveSkydiveEvent;
  GPlayerEventsMP::ms_gameEventHandlers[56] = GPlayerEventsMP::GameSkydiveBeginFreefallEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[57] )
  {
    v92 = BG_GetEventTypeName(57);
    v93 = BG_GetEventTypeName(57);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 262, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SKYDIVE_DEPLOY_PARACHUTE] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SKYDIVE_DEPLOY_PARACHUTE] == nullptr", v93, v92) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[57] )
  {
    v94 = BG_GetEventTypeName(57);
    v95 = BG_GetEventTypeName(57);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 262, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SKYDIVE_DEPLOY_PARACHUTE] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SKYDIVE_DEPLOY_PARACHUTE] == nullptr", v95, v94) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[57] = GPlayerEventsMP::GameSkydiveDeployParachuteEvent;
  GPlayerEventsMP::ms_moveEventHandlers[57] = GPlayerEventsMP::PMoveSkydiveEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[58] )
  {
    v96 = BG_GetEventTypeName(58);
    v97 = BG_GetEventTypeName(58);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 263, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SKYDIVE_TOUCH] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SKYDIVE_TOUCH] == nullptr", v97, v96) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[58] )
  {
    v98 = BG_GetEventTypeName(58);
    v99 = BG_GetEventTypeName(58);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 263, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SKYDIVE_TOUCH] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SKYDIVE_TOUCH] == nullptr", v99, v98) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[58] = GPlayerEventsMP::GameSkydiveTouchEvent;
  GPlayerEventsMP::ms_moveEventHandlers[58] = GPlayerEventsMP::PMoveSkydiveEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[59] )
  {
    v100 = BG_GetEventTypeName(59);
    v101 = BG_GetEventTypeName(59);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 264, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_SKYDIVE_END] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_SKYDIVE_END] == nullptr", v101, v100) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[59] )
  {
    v102 = BG_GetEventTypeName(59);
    v103 = BG_GetEventTypeName(59);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 264, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SKYDIVE_END] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SKYDIVE_END] == nullptr", v103, v102) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[59] = GPlayerEventsMP::GameSkydiveEndEvent;
  GPlayerEventsMP::ms_moveEventHandlers[59] = GPlayerEventsMP::PMoveSkydiveEvent;
  if ( GPlayerEventsMP::ms_moveEventHandlers[147] )
  {
    v104 = BG_GetEventTypeName(147);
    v105 = BG_GetEventTypeName(147);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 266, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_moveEventHandlers[EV_DOOR_MOVE_COMPLETE] == nullptr)", "%s\n\tEvent %s already has a movement event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_moveEventHandlers[EV_DOOR_MOVE_COMPLETE] == nullptr", v105, v104) )
      __debugbreak();
  }
  if ( GPlayerEventsMP::ms_gameEventHandlers[147] )
  {
    v106 = BG_GetEventTypeName(147);
    v107 = BG_GetEventTypeName(147);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 266, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_DOOR_MOVE_COMPLETE] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_DOOR_MOVE_COMPLETE] == nullptr", v107, v106) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[147] = GPlayerEventsMP::PMoveDoorEvent;
  GPlayerEventsMP::ms_gameEventHandlers[147] = GPlayerEventsMP::GameDoorMoveComplete;
  if ( GPlayerEventsMP::ms_gameEventHandlers[86] )
  {
    v108 = BG_GetEventTypeName(86);
    v109 = BG_GetEventTypeName(86);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 283, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_TURRET_END] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_SV_FIRE_TURRET_END] == nullptr", v109, v108) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[86] = GPlayerEventsMP::PMoveEvent;
  GPlayerEventsMP::ms_gameEventHandlers[86] = GPlayerEventsMP::GameTurretFireEndEvent;
  if ( GPlayerEventsMP::ms_gameEventHandlers[75] )
  {
    v110 = BG_GetEventTypeName(75);
    v111 = BG_GetEventTypeName(75);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 284, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_MELEE_SWIPE] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_MELEE_SWIPE] == nullptr", v111, v110) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[75] = GPlayerEventsMP::GameMeleeSwipeEvent;
  GPlayerEventsMP::ms_moveEventHandlers[75] = GPlayerEventsMP::PMoveEvent;
  if ( GPlayerEventsMP::ms_gameEventHandlers[76] )
  {
    v112 = BG_GetEventTypeName(76);
    v113 = BG_GetEventTypeName(76);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 285, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_MELEE_CHARGE] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_FIRE_MELEE_CHARGE] == nullptr", v113, v112) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[76] = GPlayerEventsMP::GameMeleeChargeEvent;
  GPlayerEventsMP::ms_moveEventHandlers[76] = GPlayerEventsMP::PMoveEvent;
  if ( GPlayerEventsMP::ms_gameEventHandlers[18] )
  {
    v114 = BG_GetEventTypeName(18);
    v115 = BG_GetEventTypeName(18);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 286, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_EMPTY_OFFHAND_PRIMARY] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_EMPTY_OFFHAND_PRIMARY] == nullptr", v115, v114) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[18] = GPlayerEventsMP::GameOffhandEmptyEvent;
  GPlayerEventsMP::ms_moveEventHandlers[18] = GPlayerEventsMP::PMoveEvent;
  if ( GPlayerEventsMP::ms_gameEventHandlers[22] )
  {
    v116 = BG_GetEventTypeName(22);
    v117 = BG_GetEventTypeName(22);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 287, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_OFFHAND_OVERCOOK_NOTIFY] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_OFFHAND_OVERCOOK_NOTIFY] == nullptr", v117, v116) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[22] = GPlayerEventsMP::GameOffhandOverCookEvent;
  GPlayerEventsMP::ms_moveEventHandlers[22] = GPlayerEventsMP::PMoveEvent;
  if ( GPlayerEventsMP::ms_gameEventHandlers[20] )
  {
    v118 = BG_GetEventTypeName(20);
    v119 = BG_GetEventTypeName(20);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 288, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_OFFHAND_END_NOTIFY] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_OFFHAND_END_NOTIFY] == nullptr", v119, v118) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[20] = GPlayerEventsMP::GameOffhandEndEvent;
  GPlayerEventsMP::ms_moveEventHandlers[20] = GPlayerEventsMP::PMoveEvent;
  if ( GPlayerEventsMP::ms_gameEventHandlers[28] )
  {
    v120 = BG_GetEventTypeName(28);
    v121 = BG_GetEventTypeName(28);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 289, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_RELOAD_START_NOTIFY] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_RELOAD_START_NOTIFY] == nullptr", v121, v120) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[28] = GPlayerEventsMP::GameReloadStartEvent;
  GPlayerEventsMP::ms_moveEventHandlers[28] = GPlayerEventsMP::PMoveEvent;
  if ( GPlayerEventsMP::ms_gameEventHandlers[29] )
  {
    v122 = BG_GetEventTypeName(29);
    v123 = BG_GetEventTypeName(29);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 290, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_RELOAD_ADDAMMO] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_RELOAD_ADDAMMO] == nullptr", v123, v122) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_gameEventHandlers[29] = GPlayerEventsMP::GameReloadAddAmmoEvent;
  GPlayerEventsMP::ms_moveEventHandlers[29] = GPlayerEventsMP::PMoveEvent;
  if ( GPlayerEventsMP::ms_gameEventHandlers[85] )
  {
    v124 = BG_GetEventTypeName(85);
    v125 = BG_GetEventTypeName(85);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 301, ASSERT_TYPE_ASSERT, "(GPlayerEventsMP::ms_gameEventHandlers[EV_EXECUTION_CANCEL] == nullptr)", "%s\n\tEvent %s already has a game event handler registered. Is there a duplicate call to REGISTER_EVENT_HANDLER for the %s event?\n", "GPlayerEventsMP::ms_gameEventHandlers[EV_EXECUTION_CANCEL] == nullptr", v125, v124) )
      __debugbreak();
  }
  GPlayerEventsMP::ms_moveEventHandlers[85] = GPlayerEventsMP::PMoveEvent;
  GPlayerEventsMP::ms_gameEventHandlers[85] = GPlayerEventsMP::GameMeleeExecutionCancelEvent;
  GPlayerEventsMP::GameInterface_RegisterPlayerEvents();
  GPlayerEventsMP::ms_eventHandlersRegistered = 1;
}

/*
==============
GPlayerEventsMP::ResetCurrentTaskEvent
==============
*/
void GPlayerEventsMP::ResetCurrentTaskEvent(gentity_s *playerEnt)
{
  __int64 v2; 
  __int64 number; 
  __int64 v4; 
  __int64 v5; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 370, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v2 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 373, ASSERT_TYPE_ASSERT, "( gameStatic )", (const char *)&queryFormat, "gameStatic") )
    __debugbreak();
  number = playerEnt->s.number;
  if ( (unsigned int)number >= *(_DWORD *)(v2 + 19576) )
  {
    LODWORD(v5) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( m_characterCount )", "entityIndex doesn't index m_characterCount\n\t%i not in [0, %i)", v5, *(_DWORD *)(v2 + 19576)) )
      __debugbreak();
  }
  v4 = *(_QWORD *)(v2 + 19568) + 232 * number;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 376, ASSERT_TYPE_ASSERT, "( playerEvents )", (const char *)&queryFormat, "playerEvents") )
    __debugbreak();
  *(_DWORD *)(v4 + 216) = 0;
  *(_QWORD *)(v4 + 224) = 0i64;
}

/*
==============
GPlayerEventsMP::SetCurrentTaskEvent
==============
*/
void GPlayerEventsMP::SetCurrentTaskEvent(gentity_s *playerEnt, const entity_event_t event, const void *parms)
{
  __int64 v6; 
  __int64 number; 
  __int64 v8; 
  __int64 v9; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 385, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v6 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 388, ASSERT_TYPE_ASSERT, "( gameStatic )", (const char *)&queryFormat, "gameStatic") )
    __debugbreak();
  number = playerEnt->s.number;
  if ( (unsigned int)number >= *(_DWORD *)(v6 + 19576) )
  {
    LODWORD(v9) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( m_characterCount )", "entityIndex doesn't index m_characterCount\n\t%i not in [0, %i)", v9, *(_DWORD *)(v6 + 19576)) )
      __debugbreak();
  }
  v8 = *(_QWORD *)(v6 + 19568) + 232 * number;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.cpp", 391, ASSERT_TYPE_ASSERT, "( playerEvents )", (const char *)&queryFormat, "playerEvents") )
    __debugbreak();
  *(_DWORD *)(v8 + 216) = event;
  *(_QWORD *)(v8 + 224) = parms;
}

/*
==============
GPlayerEventsMP::UnregisterEvents
==============
*/
void GPlayerEventsMP::UnregisterEvents(void)
{
  GPlayerEventsMP::ms_eventHandlersRegistered = 0;
  memset_0(GPlayerEventsMP::ms_moveEventHandlers, 0, sizeof(GPlayerEventsMP::ms_moveEventHandlers));
  memset_0(GPlayerEventsMP::ms_gameEventHandlers, 0, sizeof(GPlayerEventsMP::ms_gameEventHandlers));
}

