/*
==============
GMissile::SetEntityNextThink
==============
*/

void __fastcall GMissile::SetEntityNextThink(GMissile *this, BgEntityData *entityData, const int nextThinkTime)
{
  ?SetEntityNextThink@GMissile@@MEBAXPEAVBgEntityData@@H@Z(this, entityData, nextThinkTime);
}

/*
==============
GMissile::IsEntityClientOrActorOrAgent
==============
*/

bool __fastcall GMissile::IsEntityClientOrActorOrAgent(GMissile *this, const int entNum)
{
  return ?IsEntityClientOrActorOrAgent@GMissile@@MEBA_NH@Z(this, entNum);
}

/*
==============
GMissile::MovingPlatformAttemptGrenadeLink
==============
*/

void __fastcall GMissile::MovingPlatformAttemptGrenadeLink(GMissile *this, BgEntityData *entityData, const trace_t *impact)
{
  ?MovingPlatformAttemptGrenadeLink@GMissile@@MEBAXPEAVBgEntityData@@PEBUtrace_t@@@Z(this, entityData, impact);
}

/*
==============
GMissile::AddMissileTrajectoryEvent
==============
*/

void __fastcall GMissile::AddMissileTrajectoryEvent(GMissile *this, BgEntityData *entityData, const vec3_t *hitPos, const unsigned __int16 hitEntNum, const scr_string_t hitPartName)
{
  ?AddMissileTrajectoryEvent@GMissile@@MEBAXPEAVBgEntityData@@AEBTvec3_t@@GW4scr_string_t@@@Z(this, entityData, hitPos, hitEntNum, hitPartName);
}

/*
==============
G_Missile_IsGrenade
==============
*/

bool __fastcall G_Missile_IsGrenade(const gentity_s *ent)
{
  return ?G_Missile_IsGrenade@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
GMissile::GlassRestorePiece
==============
*/

void __fastcall GMissile::GlassRestorePiece(GMissile *this, unsigned int pieceIndex, unsigned __int16 health)
{
  ?GlassRestorePiece@GMissile@@MEBAXIG@Z(this, pieceIndex, health);
}

/*
==============
GMissile::PreSimulate
==============
*/

void __fastcall GMissile::PreSimulate(GMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, bool *outRestoreAntiLag)
{
  ?PreSimulate@GMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@PEA_N@Z(this, weaponMap, entityData, outRestoreAntiLag);
}

/*
==============
Scr_MissileCreateAttractorOrigin
==============
*/

void __fastcall Scr_MissileCreateAttractorOrigin(scrContext_t *scrContext)
{
  ?Scr_MissileCreateAttractorOrigin@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_MakeMissilePickupItem
==============
*/

void __fastcall G_MakeMissilePickupItem(gentity_s *ent)
{
  ?G_MakeMissilePickupItem@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GMissile::ScriptableIsDoor
==============
*/

bool __fastcall GMissile::ScriptableIsDoor(GMissile *this, unsigned int scriptableIndex)
{
  return ?ScriptableIsDoor@GMissile@@MEBA_NI@Z(this, scriptableIndex);
}

/*
==============
GMissile::NotifyRadiusDamage
==============
*/

void __fastcall GMissile::NotifyRadiusDamage(GMissile *this, const vec3_t *damageOrigin, float damageRadius, const int attackerEntNum, const Weapon *r_weapon, bool isAlternate)
{
  ?NotifyRadiusDamage@GMissile@@MEBAXAEBTvec3_t@@MHAEBUWeapon@@_N@Z(this, damageOrigin, damageRadius, attackerEntNum, r_weapon, isAlternate);
}

/*
==============
GMissile::IsEntityClient
==============
*/

bool __fastcall GMissile::IsEntityClient(GMissile *this, const int entNum)
{
  return ?IsEntityClient@GMissile@@MEBA_NH@Z(this, entNum);
}

/*
==============
G_Missile_PredictMissile
==============
*/

int __fastcall G_Missile_PredictMissile(const gentity_s *ent, int duration, vec3_t *outLandPos, int allowBounce, int *timeAtRest)
{
  return ?G_Missile_PredictMissile@@YAHPEBUgentity_s@@HAEATvec3_t@@HPEAH@Z(ent, duration, outLandPos, allowBounce, timeAtRest);
}

/*
==============
GMissile::GetEntityState
==============
*/

entityState_t *__fastcall GMissile::GetEntityState(GMissile *this, const int entNum)
{
  return ?GetEntityState@GMissile@@MEBAPEAUentityState_t@@H@Z(this, entNum);
}

/*
==============
GMissile::EvaluatePosTrajectoryDelta
==============
*/

void __fastcall GMissile::EvaluatePosTrajectoryDelta(GMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outPos)
{
  ?EvaluatePosTrajectoryDelta@GMissile@@MEBAXPEBVBgEntityData@@HAEATvec3_t@@@Z(this, entityData, atTime, outPos);
}

/*
==============
GMissile::GetExtraSkipEntityForTraces
==============
*/

int __fastcall GMissile::GetExtraSkipEntityForTraces(GMissile *this, const BgEntityData *entityData)
{
  return ?GetExtraSkipEntityForTraces@GMissile@@MEBAHPEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
GMissile::IsDebugTextEnabled
==============
*/

bool __fastcall GMissile::IsDebugTextEnabled(GMissile *this)
{
  return ?IsDebugTextEnabled@GMissile@@UEBA_NXZ(this);
}

/*
==============
G_Missile_InitAttractors
==============
*/

void G_Missile_InitAttractors(void)
{
  ?G_Missile_InitAttractors@@YAXXZ();
}

/*
==============
GMissile::EvaluateAngTrajectory
==============
*/

void __fastcall GMissile::EvaluateAngTrajectory(GMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outAng)
{
  ?EvaluateAngTrajectory@GMissile@@MEBAXPEBVBgEntityData@@HAEATvec3_t@@@Z(this, entityData, atTime, outAng);
}

/*
==============
GMissile::DrawMissileDebug
==============
*/

void __fastcall GMissile::DrawMissileDebug(GMissile *this, const BgEntityData *entityData, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  ?DrawMissileDebug@GMissile@@UEBAXPEBVBgEntityData@@AEBTvec3_t@@1AEBTvec4_t@@@Z(this, entityData, start, end, color);
}

/*
==============
GMissile::SetEntityOriginAndAngles
==============
*/

bool __fastcall GMissile::SetEntityOriginAndAngles(GMissile *this, BgEntityData *entityData, const vec3_t *origin, const vec3_t *angles, const bool warpPhysics, const bool updateBroadphase)
{
  return ?SetEntityOriginAndAngles@GMissile@@MEBA_NPEAVBgEntityData@@AEBTvec3_t@@1_N2@Z(this, entityData, origin, angles, warpPhysics, updateBroadphase);
}

/*
==============
GMissile::DrawAttractorDebug
==============
*/

void __fastcall GMissile::DrawAttractorDebug(GMissile *this)
{
  ?DrawAttractorDebug@GMissile@@UEBAXXZ(this);
}

/*
==============
GMissile::DeathNotify
==============
*/

void __fastcall GMissile::DeathNotify(GMissile *this, BgEntityData *entityData)
{
  ?DeathNotify@GMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
GMissile::AIGrenadeBounced
==============
*/

void __fastcall GMissile::AIGrenadeBounced(GMissile *this, BgEntityData *entityData, const int hitEntNum)
{
  ?AIGrenadeBounced@GMissile@@MEBAXPEAVBgEntityData@@H@Z(this, entityData, hitEntNum);
}

/*
==============
GMissile::FreeEntity
==============
*/

void __fastcall GMissile::FreeEntity(GMissile *this, BgEntityData *entityData)
{
  ?FreeEntity@GMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
GMissile::TriggerDamageGrenadeTouch
==============
*/

void __fastcall GMissile::TriggerDamageGrenadeTouch(GMissile *this, const int activatorEntNum, const vec3_t *vStart, const vec3_t *vEnd, int iDamage)
{
  ?TriggerDamageGrenadeTouch@GMissile@@MEBAXHAEBTvec3_t@@0H@Z(this, activatorEntNum, vStart, vEnd, iDamage);
}

/*
==============
Scr_MissileCreateAttractorEnt
==============
*/

void __fastcall Scr_MissileCreateAttractorEnt(scrContext_t *scrContext)
{
  ?Scr_MissileCreateAttractorEnt@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GMissile::GetDamageCalcType
==============
*/

WeaponDamageCalcType __fastcall GMissile::GetDamageCalcType(GMissile *this, entityState_t *missileOwnerEnt, entityState_t *hitEnt)
{
  return ?GetDamageCalcType@GMissile@@UEBA?AW4WeaponDamageCalcType@@PEAUentityState_t@@0@Z(this, missileOwnerEnt, hitEnt);
}

/*
==============
G_Missile_FireGrenadeRethrow
==============
*/

gentity_s *__fastcall G_Missile_FireGrenadeRethrow(gentity_s *parent, const vec3_t *start, const vec3_t *dir, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, int rotate, int time, const bool applyNoDrawTime, const int gameTime, gentity_s *const rethrowEnt)
{
  return ?G_Missile_FireGrenadeRethrow@@YAPEAUgentity_s@@PEAU1@AEBTvec3_t@@1AEBUWeapon@@_NW4PlayerHandIndex@@HH3HQEAU1@@Z(parent, start, dir, r_grenadeWeapon, isAlternate, hand, rotate, time, applyNoDrawTime, gameTime, rethrowEnt);
}

/*
==============
GMissile::EntityHasRemoteEyes
==============
*/

bool __fastcall GMissile::EntityHasRemoteEyes(GMissile *this, const int entNum)
{
  return ?EntityHasRemoteEyes@GMissile@@MEBA_NH@Z(this, entNum);
}

/*
==============
GMissile::RunThink
==============
*/

void __fastcall GMissile::RunThink(GMissile *this, BgEntityData *entityData)
{
  ?RunThink@GMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
G_Missile_TimedObjectThink
==============
*/

void __fastcall G_Missile_TimedObjectThink(gentity_s *ent)
{
  ?G_Missile_TimedObjectThink@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
Scr_MissileCreateRepulsorOrigin
==============
*/

void __fastcall Scr_MissileCreateRepulsorOrigin(scrContext_t *scrContext)
{
  ?Scr_MissileCreateRepulsorOrigin@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GMissile::LinkedSimulate
==============
*/

void __fastcall GMissile::LinkedSimulate(GMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec)
{
  ?LinkedSimulate@GMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@HHH@Z(this, weaponMap, entityData, lastSimulationTime, simulationTime, timeDeltaMsec);
}

/*
==============
GMissile::OnImpact
==============
*/

void __fastcall GMissile::OnImpact(GMissile *this, BgEntityData *entityData, const int hitEntNum)
{
  ?OnImpact@GMissile@@MEBAXPEAVBgEntityData@@H@Z(this, entityData, hitEntNum);
}

/*
==============
GMissile::GetPhysicsDetailWorldId
==============
*/

Physics_WorldId __fastcall GMissile::GetPhysicsDetailWorldId(GMissile *this)
{
  return ?GetPhysicsDetailWorldId@GMissile@@UEBA?AW4Physics_WorldId@@XZ(this);
}

/*
==============
GMissile::SetEntityFlag
==============
*/

void __fastcall GMissile::SetEntityFlag(GMissile *this, const int entNum, BgEntityFlagsCommon flag)
{
  ?SetEntityFlag@GMissile@@MEBAXHW4BgEntityFlagsCommon@@@Z(this, entNum, flag);
}

/*
==============
GMissile::Explode
==============
*/

void __fastcall GMissile::Explode(GMissile *this, BgEntityData *entityData)
{
  ?Explode@GMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
GMissile::AddImpactEvent
==============
*/

void __fastcall GMissile::AddImpactEvent(GMissile *this, BgEntityData *entityData, const trace_t *trace, unsigned int event, unsigned int eventParm, int createTempEnt)
{
  ?AddImpactEvent@GMissile@@MEBAXPEAVBgEntityData@@PEBUtrace_t@@IIH@Z(this, entityData, trace, event, eventParm, createTempEnt);
}

/*
==============
GMissile::GetMissileEntities
==============
*/

const bitarray<2048> *__fastcall GMissile::GetMissileEntities()
{
  return ?GetMissileEntities@GMissile@@SAAEBV?$bitarray@$0IAA@@@XZ();
}

/*
==============
GMissile::FinalizeGrenadeThrow
==============
*/

void __fastcall GMissile::FinalizeGrenadeThrow(GMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, const int parentEntNum, const float cookPercentage, const XModel *projectileModel, const bool hasActivationDistance, const BgEntityData *rethrowEntityData)
{
  ?FinalizeGrenadeThrow@GMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@AEBUWeapon@@_NW4PlayerHandIndex@@HMPEBUXModel@@3PEBV3@@Z(this, weaponMap, entityData, r_grenadeWeapon, isAlternate, hand, parentEntNum, cookPercentage, projectileModel, hasActivationDistance, rethrowEntityData);
}

/*
==============
GMissile::StuckNotify
==============
*/

void __fastcall GMissile::StuckNotify(GMissile *this, BgEntityData *entityData, const int hitEntNum, scr_string_t partName, const unsigned int surfaceFlags, const vec3_t *vel, const vec3_t *pos, const vec3_t *normal)
{
  ?StuckNotify@GMissile@@MEBAXPEAVBgEntityData@@HW4scr_string_t@@IAEBTvec3_t@@22@Z(this, entityData, hitEntNum, partName, surfaceFlags, vel, pos, normal);
}

/*
==============
GMissile::IsMissileEventType
==============
*/

bool __fastcall GMissile::IsMissileEventType(entityType_s eventType)
{
  return ?IsMissileEventType@GMissile@@SA_NW4entityType_s@@@Z(eventType);
}

/*
==============
GMissile::PostSimulate
==============
*/

void __fastcall GMissile::PostSimulate(GMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const bool restoreAntiLag)
{
  ?PostSimulate@GMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@_N@Z(this, weaponMap, entityData, restoreAntiLag);
}

/*
==============
GMissile::TestEntityFlag
==============
*/

bool __fastcall GMissile::TestEntityFlag(GMissile *this, const int entNum, BgEntityFlagsMP flag)
{
  return ?TestEntityFlag@GMissile@@MEBA_NHW4BgEntityFlagsMP@@@Z(this, entNum, flag);
}

/*
==============
G_Missile_Trace
==============
*/

void __fastcall G_Missile_Trace(const gentity_s *missileEnt, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int passEntityNum2, int contentmask, bool detailTrace)
{
  ?G_Missile_Trace@@YAXPEBUgentity_s@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HHH_N@Z(missileEnt, results, start, end, bounds, passEntityNum, passEntityNum2, contentmask, detailTrace);
}

/*
==============
GMissile::SpawnMissileEntity
==============
*/

void __fastcall GMissile::SpawnMissileEntity(GMissile *this, const int parentEntNum, const Weapon *r_grenadeWeapon, const bool isAlternate, const bool isRocket, const int serverTime, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  ?SpawnMissileEntity@GMissile@@MEBAXHAEBUWeapon@@_N1HPEAVBgEntityData@@PEAVBgEntityComponentData@@@Z(this, parentEntNum, r_grenadeWeapon, isAlternate, isRocket, serverTime, outEntityData, outComponentData);
}

/*
==============
GMissile::ClearMissileRegistry
==============
*/

void GMissile::ClearMissileRegistry(void)
{
  ?ClearMissileRegistry@GMissile@@SAXXZ();
}

/*
==============
GMissile::FreeEntityAfterEvent
==============
*/

void __fastcall GMissile::FreeEntityAfterEvent(GMissile *this, BgEntityData *entityData)
{
  ?FreeEntityAfterEvent@GMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
GMissile::RegisterMissileEntity
==============
*/

void __fastcall GMissile::RegisterMissileEntity(const __int16 entityNum)
{
  ?RegisterMissileEntity@GMissile@@SAXF@Z(entityNum);
}

/*
==============
GMissile::UnRegisterMissileEntity
==============
*/

void __fastcall GMissile::UnRegisterMissileEntity(const __int16 entityNum)
{
  ?UnRegisterMissileEntity@GMissile@@SAXF@Z(entityNum);
}

/*
==============
GMissile::UpdatePlatformTracking
==============
*/

void __fastcall GMissile::UpdatePlatformTracking(GMissile *this, BgEntityData *entityData)
{
  ?UpdatePlatformTracking@GMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
G_Missile_NotifyPlayer_Info
==============
*/

bool __fastcall G_Missile_NotifyPlayer_Info(const gentity_s *const player, team_t *outTeam, float *outSpeedSq, vec3_t *outEyePos)
{
  return ?G_Missile_NotifyPlayer_Info@@YA_NQEBUgentity_s@@AEAW4team_t@@AEAMAEATvec3_t@@@Z(player, outTeam, outSpeedSq, outEyePos);
}

/*
==============
GMissile::AddEvent
==============
*/

void __fastcall GMissile::AddEvent(GMissile *this, BgEntityData *entityData, unsigned int event, unsigned int eventParm)
{
  ?AddEvent@GMissile@@MEBAXPEAVBgEntityData@@II@Z(this, entityData, event, eventParm);
}

/*
==============
GMissile::GetPlayerState
==============
*/

const playerState_s *__fastcall GMissile::GetPlayerState(GMissile *this, const int entNum)
{
  return ?GetPlayerState@GMissile@@MEBAPEBUplayerState_s@@H@Z(this, entNum);
}

/*
==============
G_Missile_HasEntityNotify
==============
*/

bool __fastcall G_Missile_HasEntityNotify(const gentity_s *const ent)
{
  return ?G_Missile_HasEntityNotify@@YA_NQEBUgentity_s@@@Z(ent);
}

/*
==============
GMissile::RadiusDamage
==============
*/

void __fastcall GMissile::RadiusDamage(GMissile *this, const vec3_t *origin, const int inflictorEntNum, const int attackerEntNum, const BgExplosionDamageRangeInfo *damageRangeInfo, float coneAngleCos, const vec3_t *coneDirection, const int ignoreEntNum, meansOfDeath_t mod, const Weapon *r_weapon, bool isAlternate)
{
  ?RadiusDamage@GMissile@@MEBAXAEBTvec3_t@@HHAEBUBgExplosionDamageRangeInfo@@MPEBT2@HW4meansOfDeath_t@@AEBUWeapon@@_N@Z(this, origin, inflictorEntNum, attackerEntNum, damageRangeInfo, coneAngleCos, coneDirection, ignoreEntNum, mod, r_weapon, isAlternate);
}

/*
==============
GMissile::GetMissileEventEntities
==============
*/

const bitarray<2048> *__fastcall GMissile::GetMissileEventEntities()
{
  return ?GetMissileEventEntities@GMissile@@SAAEBV?$bitarray@$0IAA@@@XZ();
}

/*
==============
GMissile::SetEntityOrigin
==============
*/

bool __fastcall GMissile::SetEntityOrigin(GMissile *this, BgEntityData *entityData, const vec3_t *origin, const bool warpPhysics, const bool updateBroadphase)
{
  return ?SetEntityOrigin@GMissile@@MEBA_NPEAVBgEntityData@@AEBTvec3_t@@_N2@Z(this, entityData, origin, warpPhysics, updateBroadphase);
}

/*
==============
GMissile::GetPhysicsMainWorldId
==============
*/

Physics_WorldId __fastcall GMissile::GetPhysicsMainWorldId(GMissile *this)
{
  return ?GetPhysicsMainWorldId@GMissile@@UEBA?AW4Physics_WorldId@@XZ(this);
}

/*
==============
G_Missile_Explode
==============
*/

void __fastcall G_Missile_Explode(gentity_s *ent)
{
  ?G_Missile_Explode@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Missile_GetScaledProjectileSpeed
==============
*/

void __fastcall G_Missile_GetScaledProjectileSpeed(const gentity_s *attacker, const Weapon *weapon, bool isAlt, int *outSpeed, int *outSpeedUp)
{
  ?G_Missile_GetScaledProjectileSpeed@@YAXPEBUgentity_s@@AEBUWeapon@@_NPEAH3@Z(attacker, weapon, isAlt, outSpeed, outSpeedUp);
}

/*
==============
G_Missile_PredictGrenadeLandPos
==============
*/

void __fastcall G_Missile_PredictGrenadeLandPos(gentity_s *pGrenade)
{
  ?G_Missile_PredictGrenadeLandPos@@YAXPEAUgentity_s@@@Z(pGrenade);
}

/*
==============
G_Missile_SaveAttractors
==============
*/

void __fastcall G_Missile_SaveAttractors(MemoryFile *memFile)
{
  ?G_Missile_SaveAttractors@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_Missile_RunMissile
==============
*/

void __fastcall G_Missile_RunMissile(gentity_s *ent)
{
  ?G_Missile_RunMissile@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Missile_FreeAttractorRefs
==============
*/

void __fastcall G_Missile_FreeAttractorRefs(gentity_s *ent)
{
  ?G_Missile_FreeAttractorRefs@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GMissile::TriggerDamageCheckHit
==============
*/

void __fastcall GMissile::TriggerDamageCheckHit(GMissile *this, const int activatorEntNum, bool isFirstTrace, const vec3_t *vStart, const vec3_t *vEnd, int iDamage, int iMOD)
{
  ?TriggerDamageCheckHit@GMissile@@MEBAXH_NAEBTvec3_t@@1HH@Z(this, activatorEntNum, isFirstTrace, vStart, vEnd, iDamage, iMOD);
}

/*
==============
G_Missile_FireGrenade
==============
*/

gentity_s *__fastcall G_Missile_FireGrenade(gentity_s *parent, const vec3_t *start, const vec3_t *dir, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, int rotate, int fuseTime, const bool applyNoDrawTime, const int gameTime)
{
  return ?G_Missile_FireGrenade@@YAPEAUgentity_s@@PEAU1@AEBTvec3_t@@1AEBUWeapon@@_NW4PlayerHandIndex@@HH3H@Z(parent, start, dir, r_grenadeWeapon, isAlternate, hand, rotate, fuseTime, applyNoDrawTime, gameTime);
}

/*
==============
GMissile::CheckGrenadeDanger
==============
*/

void __fastcall GMissile::CheckGrenadeDanger(GMissile *this, const BgEntityData *entityData)
{
  ?CheckGrenadeDanger@GMissile@@MEBAXPEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
GMissile::GlassTempDestroyPiece
==============
*/

unsigned __int16 __fastcall GMissile::GlassTempDestroyPiece(GMissile *this, unsigned int pieceIndex)
{
  return ?GlassTempDestroyPiece@GMissile@@MEBAGI@Z(this, pieceIndex);
}

/*
==============
GMissile::KeepPointInPlayableBounds
==============
*/

void __fastcall GMissile::KeepPointInPlayableBounds(GMissile *this, vec3_t *origin)
{
  ?KeepPointInPlayableBounds@GMissile@@MEBAXAEATvec3_t@@@Z(this, origin);
}

/*
==============
GMissile::LinkEntity
==============
*/

void __fastcall GMissile::LinkEntity(GMissile *this, const int entNum)
{
  ?LinkEntity@GMissile@@MEBAXH@Z(this, entNum);
}

/*
==============
GMissile::FinalizeGrenadeSpawn
==============
*/

void __fastcall GMissile::FinalizeGrenadeSpawn(GMissile *this, BgEntityData *entityData, const int parentEntNum, const WeaponDef *weapDef)
{
  ?FinalizeGrenadeSpawn@GMissile@@UEBAXPEAVBgEntityData@@HPEBUWeaponDef@@@Z(this, entityData, parentEntNum, weapDef);
}

/*
==============
GMissile::SetEntityAngles
==============
*/

bool __fastcall GMissile::SetEntityAngles(GMissile *this, BgEntityData *entityData, const vec3_t *angles, const bool warpPhysics, const bool updateBroadphase)
{
  return ?SetEntityAngles@GMissile@@MEBA_NPEAVBgEntityData@@AEBTvec3_t@@_N2@Z(this, entityData, angles, warpPhysics, updateBroadphase);
}

/*
==============
GMissile::DebugText
==============
*/

void GMissile::DebugText(GMissile *this, const char *fmt, ...)
{
  ?DebugText@GMissile@@UEBAXPEBDZZ(this, fmt);
}

/*
==============
GMissile::DebugLineWithDuration
==============
*/

void __fastcall GMissile::DebugLineWithDuration(GMissile *this, const BgEntityData *entityData, const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  ?DebugLineWithDuration@GMissile@@UEBAXPEBVBgEntityData@@AEBTvec3_t@@1AEBTvec4_t@@HH@Z(this, entityData, start, end, color, depthTest, duration);
}

/*
==============
Scr_MissileDeleteAttractor
==============
*/

void __fastcall Scr_MissileDeleteAttractor(scrContext_t *scrContext)
{
  ?Scr_MissileDeleteAttractor@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_Missile_GetScriptSpeedScale
==============
*/

void __fastcall G_Missile_GetScriptSpeedScale(const gentity_s *attacker, const Weapon *weapon, bool isAlt, float *outSpeedScale, float *outSpeedUpScale)
{
  ?G_Missile_GetScriptSpeedScale@@YAXPEBUgentity_s@@AEBUWeapon@@_NPEAM3@Z(attacker, weapon, isAlt, outSpeedScale, outSpeedUpScale);
}

/*
==============
GMissile::DirectImpactDamage
==============
*/

void __fastcall GMissile::DirectImpactDamage(GMissile *this, BgEntityData *entityData, const int hitEntNum, hitLocation_t hitLocation, const meansOfDeath_t methodOfDeath, vec3_t *hitVelocity, const int damage, const WeaponDef *weapDef, const bool shouldExplode, const int explodeOnImpact, const trace_t *trace, const vec3_t *dir, bool *outShouldTakeRadiusDamage)
{
  ?DirectImpactDamage@GMissile@@MEBAXPEAVBgEntityData@@HW4hitLocation_t@@W4meansOfDeath_t@@AEATvec3_t@@HPEBUWeaponDef@@_NHPEBUtrace_t@@AEBT5@PEA_N@Z(this, entityData, hitEntNum, hitLocation, methodOfDeath, hitVelocity, damage, weapDef, shouldExplode, explodeOnImpact, trace, dir, outShouldTakeRadiusDamage);
}

/*
==============
GMissile::CopyEntityData
==============
*/

void __fastcall GMissile::CopyEntityData(GMissile *this, BgEntityData *entityDataDest, BgEntityData *entityDataSrc)
{
  ?CopyEntityData@GMissile@@MEAAXPEAVBgEntityData@@0@Z(this, entityDataDest, entityDataSrc);
}

/*
==============
GMissile::EvaluatePosTrajectory
==============
*/

void __fastcall GMissile::EvaluatePosTrajectory(GMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outPos)
{
  ?EvaluatePosTrajectory@GMissile@@MEBAXPEBVBgEntityData@@HAEATvec3_t@@@Z(this, entityData, atTime, outPos);
}

/*
==============
GMissile::ExplodeNotify
==============
*/

void __fastcall GMissile::ExplodeNotify(GMissile *this, BgEntityData *entityData, const int otherEntNum, const vec3_t *vel, const vec3_t *pos, const vec3_t *normal)
{
  ?ExplodeNotify@GMissile@@MEBAXPEAVBgEntityData@@HAEBTvec3_t@@11@Z(this, entityData, otherEntNum, vel, pos, normal);
}

/*
==============
GMissile::GetMeansOfDeath
==============
*/

meansOfDeath_t __fastcall GMissile::GetMeansOfDeath(GMissile *this, const BgEntityData *entityData)
{
  return ?GetMeansOfDeath@GMissile@@MEBA?AW4meansOfDeath_t@@PEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
GMissile::TestEntityFlag
==============
*/

bool __fastcall GMissile::TestEntityFlag(GMissile *this, const int entNum, BgEntityFlagsCommon flag)
{
  return ?TestEntityFlag@GMissile@@MEBA_NHW4BgEntityFlagsCommon@@@Z(this, entNum, flag);
}

/*
==============
GMissile::LinkTo
==============
*/

bool __fastcall GMissile::LinkTo(GMissile *this, BgEntityData *entityData, const int parentEntNum, scr_string_t tagName, int errorMessageSize, char *outErrorMessage)
{
  return ?LinkTo@GMissile@@MEBA_NPEAVBgEntityData@@HW4scr_string_t@@HPEAD@Z(this, entityData, parentEntNum, tagName, errorMessageSize, outErrorMessage);
}

/*
==============
GMissile::DissociateGrenadeFromAI
==============
*/

void __fastcall GMissile::DissociateGrenadeFromAI(GMissile *this, BgEntityData *entityData)
{
  ?DissociateGrenadeFromAI@GMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
GMissile::ThrowGrenade
==============
*/

void __fastcall GMissile::ThrowGrenade(GMissile *this, const int creatorEntNum, const int gameTime, const BgWeaponParms *wp)
{
  ?ThrowGrenade@GMissile@@UEAAXHHPEBUBgWeaponParms@@@Z(this, creatorEntNum, gameTime, wp);
}

/*
==============
GMissile::FinalizeRocketFire
==============
*/

void __fastcall GMissile::FinalizeRocketFire(GMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int parentEntNum, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const BgMissileFireParms *fireParms, XModel *projectileModel)
{
  ?FinalizeRocketFire@GMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@HAEBUWeapon@@_NW4PlayerHandIndex@@PEBUBgMissileFireParms@@PEAUXModel@@@Z(this, weaponMap, entityData, parentEntNum, r_weapon, isAlternate, hand, fireParms, projectileModel);
}

/*
==============
G_Missile_ExplodeInternal
==============
*/

void __fastcall G_Missile_ExplodeInternal(gentity_s *ent, ExplosionType explosionType, const vec3_t *normalOverride, const gentity_s *otherEnt)
{
  ?G_Missile_ExplodeInternal@@YAXPEAUgentity_s@@W4ExplosionType@@PEBTvec3_t@@PEBU1@@Z(ent, explosionType, normalOverride, otherEnt);
}

/*
==============
G_Missile_FireRocket
==============
*/

gentity_s *__fastcall G_Missile_FireRocket(gentity_s *parent, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const vec3_t *start, const vec3_t *dir, const vec3_t *gunVel, const BgMissileFireParms *fireParms, const int gameTime, bool magicBullet)
{
  return ?G_Missile_FireRocket@@YAPEAUgentity_s@@PEAU1@AEBUWeapon@@_NW4PlayerHandIndex@@AEBTvec3_t@@44PEBUBgMissileFireParms@@H_N@Z(parent, r_weapon, isAlternate, hand, start, dir, gunVel, fireParms, gameTime, magicBullet);
}

/*
==============
GMissile::BroadcastActorProjectileEvents
==============
*/

void __fastcall GMissile::BroadcastActorProjectileEvents(GMissile *this, const int originatorEntNum, const Weapon *weapon, const bool isAlternate, const meansOfDeath_t meansOfDeath, const vec3_t *vStart, const vec3_t *vEnd)
{
  ?BroadcastActorProjectileEvents@GMissile@@MEBAXHAEBUWeapon@@_NW4meansOfDeath_t@@AEBTvec3_t@@3@Z(this, originatorEntNum, weapon, isAlternate, meansOfDeath, vStart, vEnd);
}

/*
==============
GMissile::UnRegisterMissileEventEntity
==============
*/

void __fastcall GMissile::UnRegisterMissileEventEntity(const __int16 entityNum)
{
  ?UnRegisterMissileEventEntity@GMissile@@SAXF@Z(entityNum);
}

/*
==============
GMissile::RocketLauncherFire
==============
*/

void __fastcall GMissile::RocketLauncherFire(GMissile *this, const int creatorEntNum, const int gameTime, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const float spread, const BgWeaponParms *wp, const vec3_t *gunVel, const BgMissileFireParms *fireParms, bool magicBullet)
{
  ?RocketLauncherFire@GMissile@@UEAAXHHAEBUWeapon@@_NW4PlayerHandIndex@@MPEBUBgWeaponParms@@AEBTvec3_t@@PEBUBgMissileFireParms@@_N@Z(this, creatorEntNum, gameTime, r_weapon, isAlternate, hand, spread, wp, gunVel, fireParms, magicBullet);
}

/*
==============
GMissile::RegisterMissileEventEntity
==============
*/

void __fastcall GMissile::RegisterMissileEventEntity(const __int16 entityNum)
{
  ?RegisterMissileEventEntity@GMissile@@SAXF@Z(entityNum);
}

/*
==============
GMissile::SetEntityFlag
==============
*/

void __fastcall GMissile::SetEntityFlag(GMissile *this, const int entNum, BgEntityFlagsSP flag)
{
  ?SetEntityFlag@GMissile@@MEBAXHW4BgEntityFlagsSP@@@Z(this, entNum, flag);
}

/*
==============
GMissile::ProjectileImpactSplashNotify
==============
*/

void __fastcall GMissile::ProjectileImpactSplashNotify(GMissile *this, const int entNum, const Weapon *weapon, const vec3_t *pos, const int explosionRadius, const int hitEntNum)
{
  ?ProjectileImpactSplashNotify@GMissile@@MEBAXHAEBUWeapon@@AEBTvec3_t@@HH@Z(this, entNum, weapon, pos, explosionRadius, hitEntNum);
}

/*
==============
GMissile::InitGrenadePlatformTracking
==============
*/

void __fastcall GMissile::InitGrenadePlatformTracking(GMissile *this, BgEntityData *entityData, const int parentEntNum)
{
  ?InitGrenadePlatformTracking@GMissile@@MEBAXPEAVBgEntityData@@H@Z(this, entityData, parentEntNum);
}

/*
==============
GMissile::TestEntityFlag
==============
*/

bool __fastcall GMissile::TestEntityFlag(GMissile *this, const int entNum, BgEntityFlagsSP flag)
{
  return ?TestEntityFlag@GMissile@@MEBA_NHW4BgEntityFlagsSP@@@Z(this, entNum, flag);
}

/*
==============
GScr_SetMissileMinimapVisible
==============
*/

void __fastcall GScr_SetMissileMinimapVisible(scrContext_t *scrContext, scr_entref_t entref)
{
  ?GScr_SetMissileMinimapVisible@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Scr_MissileCreateRepulsorEnt
==============
*/

void __fastcall Scr_MissileCreateRepulsorEnt(scrContext_t *scrContext)
{
  ?Scr_MissileCreateRepulsorEnt@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GMissile::ApplyAttractorsRepulsors
==============
*/

void __fastcall GMissile::ApplyAttractorsRepulsors(GMissile *this, BgEntityData *entityData)
{
  ?ApplyAttractorsRepulsors@GMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
G_Missile_NotifyEntities
==============
*/

void __fastcall G_Missile_NotifyEntities(const gentity_s *const ent)
{
  ?G_Missile_NotifyEntities@@YAXQEBUgentity_s@@@Z(ent);
}

/*
==============
G_Missile_LoadAttractors
==============
*/

void __fastcall G_Missile_LoadAttractors(MemoryFile *memFile)
{
  ?G_Missile_LoadAttractors@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
GMissile::BroadcastActorEvents
==============
*/

void __fastcall GMissile::BroadcastActorEvents(GMissile *this, BgEntityData *entityData)
{
  ?BroadcastActorEvents@GMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
GMissile::InitGrenadeSetAntiLagOffset
==============
*/

void __fastcall GMissile::InitGrenadeSetAntiLagOffset(GMissile *this, BgEntityData *entityData, const int parentEntNum, const int serverTime)
{
  ?InitGrenadeSetAntiLagOffset@GMissile@@MEBAXPEAVBgEntityData@@HH@Z(this, entityData, parentEntNum, serverTime);
}

/*
==============
GMissile::InitGrenadeTimer
==============
*/

void __fastcall GMissile::InitGrenadeTimer(GMissile *this, BgEntityData *entityData, const int parentEntNum, const Weapon *r_weapon, const bool isAlternate, const int serverTime, const int time)
{
  ?InitGrenadeTimer@GMissile@@MEBAXPEAVBgEntityData@@HAEBUWeapon@@_NHH@Z(this, entityData, parentEntNum, r_weapon, isAlternate, serverTime, time);
}

/*
==============
GMissile::SetEntityFlag
==============
*/

void __fastcall GMissile::SetEntityFlag(GMissile *this, const int entNum, BgEntityFlagsMP flag)
{
  ?SetEntityFlag@GMissile@@MEBAXHW4BgEntityFlagsMP@@@Z(this, entNum, flag);
}

/*
==============
GMissile::GlassDestroyPiece
==============
*/

void __fastcall GMissile::GlassDestroyPiece(GMissile *this, unsigned int pieceIndex, const vec3_t *damagePos, const vec3_t *damageDir)
{
  ?GlassDestroyPiece@GMissile@@MEBAXIAEBTvec3_t@@0@Z(this, pieceIndex, damagePos, damageDir);
}

/*
==============
GMissile::ApplyDamage
==============
*/

damageReturnCode_t __fastcall GMissile::ApplyDamage(GMissile *this, const int targetEntNum, const int inflictorEntNum, const int attackerEntNum, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal)
{
  return ?ApplyDamage@GMissile@@MEBA?AW4damageReturnCode_t@@HHHAEBTvec3_t@@0HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H0@Z(this, targetEntNum, inflictorEntNum, attackerEntNum, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal);
}

/*
==============
GMissile::ProjectileImpactRemoteEyesNotify
==============
*/

void __fastcall GMissile::ProjectileImpactRemoteEyesNotify(GMissile *this, const int entNum, const Weapon *weapon, const vec3_t *pos)
{
  ?ProjectileImpactRemoteEyesNotify@GMissile@@MEBAXHAEBUWeapon@@AEBTvec3_t@@@Z(this, entNum, weapon, pos);
}

/*
==============
GMissile::MissileTrajectoryClientControlled
==============
*/

void __fastcall GMissile::MissileTrajectoryClientControlled(GMissile *this, const BgWeaponMap *weaponMap, const int simulationTime, const int timeDeltaMsec, BgEntityData *entityData, vec3_t *result)
{
  ?MissileTrajectoryClientControlled@GMissile@@MEBAXPEBVBgWeaponMap@@HHPEAVBgEntityData@@AEATvec3_t@@@Z(this, weaponMap, simulationTime, timeDeltaMsec, entityData, result);
}

/*
==============
GMissile::GrenadeLauncherFire
==============
*/

void __fastcall GMissile::GrenadeLauncherFire(GMissile *this, const int creatorEntNum, const int gameTime, const Weapon *r_grenade, const PlayerHandIndex hand, const BgWeaponParms *wp)
{
  ?GrenadeLauncherFire@GMissile@@UEAAXHHAEBUWeapon@@W4PlayerHandIndex@@PEBUBgWeaponParms@@@Z(this, creatorEntNum, gameTime, r_grenade, hand, wp);
}

/*
==============
GMissile::VehicleTrophyTestMissile
==============
*/

void __fastcall GMissile::VehicleTrophyTestMissile(GMissile *this, BgEntityData *entityData, const vec3_t *start, const vec3_t *end)
{
  ?VehicleTrophyTestMissile@GMissile@@MEBAXPEAVBgEntityData@@AEBTvec3_t@@1@Z(this, entityData, start, end);
}

/*
==============
GMissile::ClearMissileEventRegistry
==============
*/

void GMissile::ClearMissileEventRegistry(void)
{
  ?ClearMissileEventRegistry@GMissile@@SAXXZ();
}

/*
==============
GMissile::GetSplashMethodOfDeath
==============
*/

meansOfDeath_t __fastcall GMissile::GetSplashMethodOfDeath(GMissile *this, const BgEntityData *entityData)
{
  return ?GetSplashMethodOfDeath@GMissile@@MEBA?AW4meansOfDeath_t@@PEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
GMissile::GetDoorAngle
==============
*/

double __fastcall GMissile::GetDoorAngle(GMissile *this, BgEntityData *entityData)
{
  double result; 

  *(float *)&result = ?GetDoorAngle@GMissile@@MEBAMPEAVBgEntityData@@@Z(this, entityData);
  return result;
}

/*
==============
GMissile::GetEntityTransform
==============
*/

bool __fastcall GMissile::GetEntityTransform(GMissile *this, const int entNum, vec3_t *outOrigin, vec3_t *outAngles)
{
  return ?GetEntityTransform@GMissile@@MEBA_NHAEATvec3_t@@0@Z(this, entNum, outOrigin, outAngles);
}

/*
==============
GMissile::CreateWaterSplash
==============
*/

void __fastcall GMissile::CreateWaterSplash(GMissile *this, const BgEntityData *entityData, const trace_t *trace, const vec3_t *endPos)
{
  ?CreateWaterSplash@GMissile@@MEBAXPEBVBgEntityData@@PEBUtrace_t@@AEBTvec3_t@@@Z(this, entityData, trace, endPos);
}

/*
==============
GMissile::GetScaledProjectileSpeed
==============
*/

void __fastcall GMissile::GetScaledProjectileSpeed(GMissile *this, const int attackerEntNum, const Weapon *r_weapon, bool isAlternate, int *outSpeed, int *outSpeedUp)
{
  ?GetScaledProjectileSpeed@GMissile@@UEBAXHAEBUWeapon@@_NPEAH2@Z(this, attackerEntNum, r_weapon, isAlternate, outSpeed, outSpeedUp);
}

/*
==============
GMissile::IsScriptableEntity
==============
*/

bool __fastcall GMissile::IsScriptableEntity(GMissile *this, const int entNum)
{
  return ?IsScriptableEntity@GMissile@@MEBA_NH@Z(this, entNum);
}

/*
==============
GMissile::AIGrenadeBounced
==============
*/
void GMissile::AIGrenadeBounced(GMissile *this, BgEntityData *entityData, const int hitEntNum)
{
  __int64 v3; 
  gentity_s *Entity; 
  __int64 v6; 

  v3 = hitEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3354, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3358, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3360, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntNum ) < (unsigned)( ( 2048 ) )", "hitEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, 2048) )
      __debugbreak();
  }
  AIScriptedInterface::GrenadeBounced(Entity, &g_entities[v3]);
}

/*
==============
GMissile::AddEvent
==============
*/
void GMissile::AddEvent(GMissile *this, BgEntityData *entityData, unsigned int event, unsigned int eventParm)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2784, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2789, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_Utils_AddEvent(Entity, event, eventParm);
}

/*
==============
GMissile::AddImpactEvent
==============
*/
void GMissile::AddImpactEvent(GMissile *this, BgEntityData *entityData, const trace_t *trace, unsigned int event, unsigned int eventParm, int createTempEnt)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2797, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2802, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_AddImpactEvent(Entity, trace, event, eventParm, createTempEnt, NULL);
}

/*
==============
GMissile::AddMissileTrajectoryEvent
==============
*/
void GMissile::AddMissileTrajectoryEvent(GMissile *this, BgEntityData *entityData, const vec3_t *hitPos, const unsigned __int16 hitEntNum, const scr_string_t hitPartName)
{
  gentity_s *Entity; 
  GWeaponMap *Instance; 
  bool inAltWeaponMode; 
  BgWeaponMap *v11; 
  const Weapon *WeaponForEntity; 
  gentity_s *v13; 
  unsigned int number; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2810, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2815, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 432, ASSERT_TYPE_ASSERT, "( missileEnt )", (const char *)&queryFormat, "missileEnt") )
      __debugbreak();
  }
  Instance = GWeaponMap::GetInstance();
  inAltWeaponMode = Entity->s.inAltWeaponMode;
  v11 = Instance;
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &Entity->s);
  if ( BG_ProjTrajectoryEvents(WeaponForEntity, inAltWeaponMode) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_HOLD_PRIMED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 442, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::EVENT_MISSILE_TRAJECTORY ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::EVENT_MISSILE_TRAJECTORY )") )
      __debugbreak();
    v13 = G_Utils_SpawnEventEntity(hitPos, 200);
    v13->s.otherEntityNum = Entity->s.number;
    BG_SetWeaponForEntity(v11, &v13->s, WeaponForEntity);
    v13->s.inAltWeaponMode = Entity->s.inAltWeaponMode;
    Trajectory_GetTrBase(&Entity->s.lerp.pos, (vec3_t *)&v13->s.lerp.u);
    number = v13->s.number;
    v13->s.lerp.u.anonymous.data[7] = hitPartName;
    v13->s.groundEntityNum = hitEntNum;
    bitarray_base<bitarray<2048>>::setBit(&g_missileEventEntities, number);
  }
}

/*
==============
GMissile::ApplyAttractorsRepulsors
==============
*/
void GMissile::ApplyAttractorsRepulsors(GMissile *this, BgEntityData *entityData)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2875, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2880, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Missile_ApplyAttractorsRepulsors(Entity);
}

/*
==============
GMissile::ApplyDamage
==============
*/
__int64 GMissile::ApplyDamage(GMissile *this, const int targetEntNum, const int inflictorEntNum, const int attackerEntNum, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal)
{
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  gentity_s *v19; 
  gentity_s *v20; 
  gentity_s *v21; 
  GCombat_vtbl *v23; 
  __int64 v24; 
  __int64 v26; 
  int v27; 
  bool v28; 
  __int16 v29; 

  v16 = targetEntNum;
  v17 = attackerEntNum;
  v18 = inflictorEntNum;
  if ( (unsigned int)targetEntNum >= 0x800 )
  {
    v27 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2984, ASSERT_TYPE_ASSERT, "(unsigned)( targetEntNum ) < (unsigned)( ( 2048 ) )", "targetEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", targetEntNum, v27) )
      __debugbreak();
  }
  if ( (unsigned int)v18 >= 0x800 )
  {
    LODWORD(v26) = 2048;
    LODWORD(v24) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2985, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( 2048 ) )", "inflictorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, v26) )
      __debugbreak();
  }
  if ( (unsigned int)v17 >= 0x800 )
  {
    LODWORD(v26) = 2048;
    LODWORD(v24) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2986, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, v26) )
      __debugbreak();
  }
  v19 = g_entities;
  v20 = &g_entities[v18];
  if ( v20->s.eType == ET_MISSILE && (v20->c.missile.flags & 0x4000) != 0 )
    return 2i64;
  v21 = &g_entities[v17];
  if ( v21->s.eType == ET_MISSILE && (v21->c.missile.flags & 0x4000) != 0 )
    return 2i64;
  if ( !GCombat::ms_gCombatSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
      __debugbreak();
    v19 = g_entities;
  }
  v23 = GCombat::ms_gCombatSystem->__vftable;
  v29 = 0;
  v28 = isAlternate;
  return ((__int64 (__fastcall *)(GCombat *, gentity_s *, gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, hitLocation_t, unsigned int, scr_string_t, int, const vec3_t *, __int16 *))v23->Damage)(GCombat::ms_gCombatSystem, &v19[v16], v20, v21, dir, point, damage, dflags, mod, r_weapon, v28, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, &v29);
}

/*
==============
GMissile::BroadcastActorEvents
==============
*/
void GMissile::BroadcastActorEvents(GMissile *this, BgEntityData *entityData)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3327, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3331, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( BG_AISystemEnabled() )
    RunMissile_BroadcastActorEvents(Entity);
}

/*
==============
GMissile::BroadcastActorProjectileEvents
==============
*/
void GMissile::BroadcastActorProjectileEvents(GMissile *this, const int originatorEntNum, const Weapon *weapon, const bool isAlternate, const meansOfDeath_t meansOfDeath, const vec3_t *vStart, const vec3_t *vEnd)
{
  __int64 v9; 
  ai_event_t v10; 
  bitarray<224> teamFlags; 

  v9 = originatorEntNum;
  if ( BG_AISystemEnabled() && BG_GetWeaponType(weapon, isAlternate) == WEAPTYPE_PROJECTILE && (_DWORD)v9 != 2047 )
  {
    if ( (unsigned int)v9 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2855, ASSERT_TYPE_ASSERT, "(unsigned)( originatorEntNum ) < (unsigned)( ( 2048 ) )", "originatorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, 2048) )
      __debugbreak();
    v10 = AI_EV_PROJECTILE_IMPACT;
    memset(&teamFlags, 0, sizeof(teamFlags));
    if ( (unsigned int)(meansOfDeath - 1) <= 1 )
      v10 = AI_EV_BULLET;
    Actor_BroadcastLineEvent(&g_entities[v9], v10, &teamFlags, vStart, vEnd, NULL);
  }
}

/*
==============
GMissile::CheckGrenadeDanger
==============
*/
void GMissile::CheckGrenadeDanger(GMissile *this, const BgEntityData *entityData)
{
  const gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3548, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3552, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CheckGrenadeDanger(Entity);
}

/*
==============
GMissile::ClearMissileEventRegistry
==============
*/
void GMissile::ClearMissileEventRegistry(void)
{
  bitarray<2048> *v0; 
  __int64 v1; 

  v0 = &g_missileEventEntities;
  v1 = 4i64;
  do
  {
    *(_QWORD *)v0->array = 0i64;
    *(_QWORD *)&v0->array[2] = 0i64;
    *(_QWORD *)&v0->array[4] = 0i64;
    v0 = (bitarray<2048> *)((char *)v0 + 64);
    *(_QWORD *)&v0[-1].array[54] = 0i64;
    *(_QWORD *)&v0[-1].array[56] = 0i64;
    *(_QWORD *)&v0[-1].array[58] = 0i64;
    *(_QWORD *)&v0[-1].array[60] = 0i64;
    *(_QWORD *)&v0[-1].array[62] = 0i64;
    --v1;
  }
  while ( v1 );
}

/*
==============
GMissile::ClearMissileRegistry
==============
*/
void GMissile::ClearMissileRegistry(void)
{
  bitarray<2048> *v0; 
  __int64 v1; 

  v0 = &g_missileEntities;
  v1 = 4i64;
  do
  {
    *(_QWORD *)v0->array = 0i64;
    *(_QWORD *)&v0->array[2] = 0i64;
    *(_QWORD *)&v0->array[4] = 0i64;
    v0 = (bitarray<2048> *)((char *)v0 + 64);
    *(_QWORD *)&v0[-1].array[54] = 0i64;
    *(_QWORD *)&v0[-1].array[56] = 0i64;
    *(_QWORD *)&v0[-1].array[58] = 0i64;
    *(_QWORD *)&v0[-1].array[60] = 0i64;
    *(_QWORD *)&v0[-1].array[62] = 0i64;
    --v1;
  }
  while ( v1 );
}

/*
==============
GMissile::CopyEntityData
==============
*/
void GMissile::CopyEntityData(GMissile *this, BgEntityData *entityDataDest, BgEntityData *entityDataSrc)
{
  if ( !entityDataDest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2636, ASSERT_TYPE_ASSERT, "(entityDataDest)", (const char *)&queryFormat, "entityDataDest") )
    __debugbreak();
  if ( !entityDataSrc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2637, ASSERT_TYPE_ASSERT, "(entityDataSrc)", (const char *)&queryFormat, "entityDataSrc") )
    __debugbreak();
  entityDataDest->m_origin = entityDataSrc->m_origin;
  entityDataDest->m_angles = entityDataSrc->m_angles;
  entityDataDest->m_box = entityDataSrc->m_box;
  entityDataDest->m_clipMask = entityDataSrc->m_clipMask;
  entityDataDest->m_parentEntNum = entityDataSrc->m_parentEntNum;
  entityDataDest->m_ownerEntNum = entityDataSrc->m_ownerEntNum;
  entityDataDest->m_entityState = entityDataSrc->m_entityState;
  entityDataDest->m_flags = entityDataSrc->m_flags;
  entityDataDest->m_components = entityDataSrc->m_components;
  entityDataDest->m_componentData = entityDataSrc->m_componentData;
  entityDataDest->m_handler = entityDataSrc->m_handler;
  entityDataDest[1].__vftable = entityDataSrc[1].__vftable;
}

/*
==============
GMissile::CreateWaterSplash
==============
*/
void GMissile::CreateWaterSplash(GMissile *this, const BgEntityData *entityData, const trace_t *trace, const vec3_t *endPos)
{
  const entityState_t *EntityState; 
  gentity_s *v8; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  const Weapon *v16; 
  gentity_s *v17; 
  unsigned int number; 
  __int64 v19; 
  vec3_t origin; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3094, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3095, ASSERT_TYPE_ASSERT, "( trace )", (const char *)&queryFormat, "trace") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState((BgEntityData *)entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3098, ASSERT_TYPE_ASSERT, "( es )", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->number >= 0x800u )
  {
    LODWORD(v19) = EntityState->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3100, ASSERT_TYPE_ASSERT, "(unsigned)( es->number ) < (unsigned)( ( 2048 ) )", "es->number doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, 2048) )
      __debugbreak();
  }
  v8 = &g_entities[EntityState->number];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1489, ASSERT_TYPE_ASSERT, "( missile )", (const char *)&queryFormat, "missile") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1490, ASSERT_TYPE_ASSERT, "( trace )", (const char *)&queryFormat, "trace") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &v8->s);
  v11 = v8->r.currentOrigin.v[1];
  v12 = v8->r.currentOrigin.v[2];
  v13 = (float)(endPos->v[1] - v11) * trace->fraction;
  v14 = endPos->v[2];
  origin.v[0] = (float)((float)(endPos->v[0] - v8->r.currentOrigin.v[0]) * trace->fraction) + v8->r.currentOrigin.v[0];
  v15 = (float)(v14 - v12) * trace->fraction;
  origin.v[1] = v13 + v11;
  origin.v[2] = v15 + v12;
  v16 = WeaponForEntity;
  v17 = G_Utils_SpawnEventEntity(&origin, 110);
  v17->s.eventParm = DirToByte(&trace->normal);
  v17->s.eventParm2 = 0;
  v17->s.surfType = (trace->surfaceFlags >> 19) & 0x3F;
  v17->s.otherEntityNum = v8->s.number;
  BG_SetWeaponForEntity(Instance, &v17->s, v16);
  number = v17->s.number;
  v17->s.inAltWeaponMode = v8->s.inAltWeaponMode;
  bitarray_base<bitarray<2048>>::setBit(&g_missileEventEntities, number);
}

/*
==============
GMissile::DeathNotify
==============
*/
void GMissile::DeathNotify(GMissile *this, BgEntityData *entityData)
{
  const gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3168, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3172, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  GScr_Notify(Entity, scr_const.death, 0);
  GScr_Notify(Entity, scr_const.death_or_disconnect, 0);
}

/*
==============
GMissile::DebugLineWithDuration
==============
*/
void GMissile::DebugLineWithDuration(GMissile *this, const BgEntityData *entityData, const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  G_DebugLineWithDuration(start, end, color, depthTest, duration);
}

/*
==============
GMissile::DebugText
==============
*/
void GMissile::DebugText(GMissile *this, const char *fmt, ...)
{
  va_list va; 

  va_start(va, fmt);
  Com_Printf(15, fmt, va);
}

/*
==============
GMissile::DirectImpactDamage
==============
*/
void GMissile::DirectImpactDamage(GMissile *this, BgEntityData *entityData, const int hitEntNum, hitLocation_t hitLocation, const meansOfDeath_t methodOfDeath, vec3_t *hitVelocity, const int damage, const WeaponDef *weapDef, const bool shouldExplode, const int explodeOnImpact, const trace_t *trace, const vec3_t *dir, bool *outShouldTakeRadiusDamage)
{
  __int64 v13; 
  gentity_s *Entity; 
  __int64 v17; 

  v13 = hitEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3049, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3053, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (unsigned int)v13 >= 0x800 )
  {
    LODWORD(v17) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3055, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntNum ) < (unsigned)( ( 2048 ) )", "hitEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, 2048) )
      __debugbreak();
  }
  if ( (Entity->c.missile.flags & 0x4000) == 0 )
    G_MissileDirectImpactDamage(&g_entities[v13], Entity, hitLocation, methodOfDeath, hitVelocity, damage, weapDef, shouldExplode, explodeOnImpact, trace, dir, outShouldTakeRadiusDamage);
}

/*
==============
GMissile::DissociateGrenadeFromAI
==============
*/
void GMissile::DissociateGrenadeFromAI(GMissile *this, BgEntityData *entityData)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3342, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3346, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  AIScriptedInterface::DissociateGrenade(Entity);
}

/*
==============
GMissile::DrawAttractorDebug
==============
*/

void __fastcall GMissile::DrawAttractorDebug(GMissile *this)
{
  DrawAttractorDebug(this);
}

/*
==============
GMissile::DrawMissileDebug
==============
*/
void GMissile::DrawMissileDebug(GMissile *this, const BgEntityData *entityData, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  const dvar_t *v5; 
  const dvar_t *v8; 

  v5 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer == 5 )
    goto LABEL_9;
  v8 = DCONST_DVARBOOL_bg_missileDebugDraw;
  if ( !DCONST_DVARBOOL_bg_missileDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
LABEL_9:
    G_DebugLineWithDuration(start, end, color, 1, 1000);
}

/*
==============
GMissile::EntityHasRemoteEyes
==============
*/
bool GMissile::EntityHasRemoteEyes(GMissile *this, const int entNum)
{
  __int64 v2; 
  gclient_s *client; 

  v2 = entNum;
  if ( entNum == 2047 )
    return 0;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2729, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  client = g_entities[v2].client;
  return client && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 1u);
}

/*
==============
GMissile::EvaluateAngTrajectory
==============
*/
void GMissile::EvaluateAngTrajectory(GMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outAng)
{
  const gentity_s *Entity; 
  GTrajectory v8; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3459, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  GTrajectory::GTrajectory(&v8, Entity);
  BgTrajectory::EvaluateAngTrajectory(&v8, atTime, outAng);
}

/*
==============
GMissile::EvaluatePosTrajectory
==============
*/
void GMissile::EvaluatePosTrajectory(GMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outPos)
{
  const gentity_s *Entity; 
  GTrajectory v8; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3435, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  GTrajectory::GTrajectory(&v8, Entity);
  BgTrajectory::EvaluatePosTrajectory(&v8, atTime, outPos);
}

/*
==============
GMissile::EvaluatePosTrajectoryDelta
==============
*/
void GMissile::EvaluatePosTrajectoryDelta(GMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outPos)
{
  const gentity_s *Entity; 
  GTrajectory v8; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3447, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  GTrajectory::GTrajectory(&v8, Entity);
  BgTrajectory::EvaluatePosTrajectoryDelta(&v8, atTime, outPos);
}

/*
==============
GMissile::Explode
==============
*/
void GMissile::Explode(GMissile *this, BgEntityData *entityData)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2943, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2948, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_Missile_ExplodeInternal(Entity, EXPLOSION_TYPE_DEFAULT, NULL, NULL);
}

/*
==============
GMissile::ExplodeNotify
==============
*/
void GMissile::ExplodeNotify(GMissile *this, BgEntityData *entityData, const int otherEntNum, const vec3_t *vel, const vec3_t *pos, const vec3_t *normal)
{
  __int64 v6; 
  const gentity_s *Entity; 
  scrContext_t *v10; 
  __int64 v11; 

  v6 = otherEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3181, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3185, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0x800 )
  {
    LODWORD(v11) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3187, ASSERT_TYPE_ASSERT, "(unsigned)( otherEntNum ) < (unsigned)( ( 2048 ) )", "otherEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, 2048) )
      __debugbreak();
  }
  v10 = ScriptContext_Server();
  if ( (_DWORD)v6 == 2047 || !G_IsEntityInUse(v6) )
    Scr_AddUndefined(v10);
  else
    GScr_AddEntity(&g_entities[v6]);
  Scr_AddVector(v10, vel->v);
  Scr_AddVector(v10, normal->v);
  Scr_AddVector(v10, pos->v);
  GScr_Notify(Entity, scr_const.explode, 4u);
}

/*
==============
GMissile::FinalizeGrenadeSpawn
==============
*/
void GMissile::FinalizeGrenadeSpawn(GMissile *this, BgEntityData *entityData, const int parentEntNum, const WeaponDef *weapDef)
{
  gentity_s *Entity; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  __int64 v9; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4018, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4021, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4024, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Entity->r.svFlags = 4;
  if ( ((weapDef->offhandClass - 1) & 0xFFFFFFFB) == 0 )
  {
    *(_QWORD *)Entity->r.box.midPoint.v = 0i64;
    Entity->r.box.midPoint.v[2] = 0.0;
    Entity->r.box.halfSize.v[0] = 1.0;
    Entity->r.box.halfSize.v[1] = 1.0;
    Entity->r.box.halfSize.v[2] = 1.0;
    G_PlayerUse_SetEntityUsable(Entity, 1);
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &Entity->s);
    if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1688, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx != 0 )", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
      __debugbreak();
    if ( WeaponForEntity->weaponIdx >= 0x226u )
    {
      LODWORD(v9) = WeaponForEntity->weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1689, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( 550 )", "weapon.weaponIdx doesn't index MAX_WEAPONS\n\t%i not in [0, %i)", v9, 550) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    Entity->s.clientNum = ComCharacterLimits::ms_gameData.m_characterCount;
  }
}

/*
==============
GMissile::FinalizeGrenadeThrow
==============
*/
void GMissile::FinalizeGrenadeThrow(GMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, const int parentEntNum, const float cookPercentage, const XModel *projectileModel, const bool hasActivationDistance, const BgEntityData *rethrowEntityData)
{
  gentity_s *Entity; 
  gentity_s *v15; 
  gentity_s *v16; 
  scrContext_t *v17; 
  const gentity_s *v18; 
  gclient_s *client; 
  __int16 throwbackGrenadeOwner; 
  gagent_s *agent; 
  const gentity_s *v22; 
  scr_string_t grenade_fire; 
  const WeaponDef *v24; 
  const playerState_s *EntityPlayerStateConst; 
  __int64 v26; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3815, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3820, ASSERT_TYPE_ASSERT, "(grenade)", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  v15 = NULL;
  v16 = NULL;
  if ( parentEntNum != 2047 )
  {
    if ( (unsigned int)parentEntNum >= 0x800 )
    {
      LODWORD(v26) = parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3825, ASSERT_TYPE_ASSERT, "(unsigned)( parentEntNum ) < (unsigned)( ( 2048 ) )", "parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v26, 2048) )
        __debugbreak();
    }
    v16 = &g_entities[parentEntNum];
  }
  v17 = ScriptContext_Server();
  v18 = NULL;
  if ( rethrowEntityData )
    v18 = GEntityData::GetEntity((GEntityData *)rethrowEntityData);
  if ( EntHandle::isDefined(&Entity->r.ownerNum) )
    v15 = EntHandle::ent(&Entity->r.ownerNum);
  G_Missile_SetPhaseStatus(Entity, v15, v18);
  if ( projectileModel )
  {
    if ( Entity->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3843, ASSERT_TYPE_ASSERT, "( !grenade->model )", (const char *)&queryFormat, "!grenade->model") )
      __debugbreak();
    G_Utils_SetModel(Entity, projectileModel->name);
  }
  G_DObjUpdate(Entity, 1);
  if ( v16 )
  {
    if ( hasActivationDistance )
    {
      Scr_AddUndefined(v17);
      Scr_AddUndefined(v17);
    }
    else
    {
      client = v16->client;
      if ( (client && client->ps.throwbackGrenadeTimeLeft > 0 && (throwbackGrenadeOwner = client->ps.throwbackGrenadeOwner, throwbackGrenadeOwner != 2047) || (agent = v16->agent) != NULL && agent->playerState.throwbackGrenadeTimeLeft > 0 && (throwbackGrenadeOwner = agent->playerState.throwbackGrenadeOwner, throwbackGrenadeOwner != 2047)) && (v22 = &g_entities[throwbackGrenadeOwner]) != NULL )
      {
        GScr_AddEntity(v22);
        Scr_AddFloat(v17, cookPercentage);
      }
      else
      {
        Scr_AddUndefined(v17);
        Scr_AddFloat(v17, cookPercentage);
      }
    }
    GScr_Weapon_AddParam(v17, r_grenadeWeapon, isAlternate);
    GScr_AddEntity(Entity);
    grenade_fire = scr_const.grenade_fire;
    if ( hasActivationDistance )
      grenade_fire = scr_const.missile_fire;
    GScr_Notify(v16, grenade_fire, 4u);
    v24 = BG_WeaponDef(r_grenadeWeapon, isAlternate);
    if ( this->m_smokeGrenadeExtraNotification && v24->offhandClass == OFFHAND_CLASS_SMOKE_GRENADE && v24->projExplosion == WEAPPROJEXP_SMOKE )
    {
      GScr_Weapon_AddParam(v17, r_grenadeWeapon, isAlternate);
      GScr_AddEntity(Entity);
      Scr_NotifyLevel(v17, scr_const.smoke, 2u);
    }
    if ( SV_BotIsBotEnt(v16) )
      SV_BotMissileFired(v16, Entity);
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(v16);
    if ( EntityPlayerStateConst && EntityPlayerStateConst->weapState[hand].weaponFiredAtMaxCharge && BG_IsChargeShotWeapon(r_grenadeWeapon, isAlternate) )
      Entity->c.missile.flags |= 0x1000u;
  }
}

/*
==============
GMissile::FinalizeRocketFire
==============
*/
void GMissile::FinalizeRocketFire(GMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int parentEntNum, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const BgMissileFireParms *fireParms, XModel *projectileModel)
{
  __int64 v9; 
  gentity_s *Entity; 
  bool v13; 
  gentity_s *v14; 
  float autoDetonateTime; 
  int v16; 
  scrContext_t *v17; 
  __int64 v18; 

  v9 = parentEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3903, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3907, ASSERT_TYPE_ASSERT, "( bolt )", (const char *)&queryFormat, "bolt") )
    __debugbreak();
  if ( (_DWORD)v9 == 2047 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3909, ASSERT_TYPE_ASSERT, "(parentEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "parentEntNum != ENTITYNUM_NONE");
  }
  else
  {
    if ( (unsigned int)v9 < 0x800 )
      goto LABEL_13;
    LODWORD(v18) = v9;
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, 2048);
  }
  if ( v13 )
    __debugbreak();
LABEL_13:
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3910, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( parentEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( parentEntNum )") )
    __debugbreak();
  v14 = &g_entities[v9];
  GMovingPlatformEntityTracking::InitPlatformTracking(&Entity->movingPlatformTrack, Entity, v14);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2086, ASSERT_TYPE_ASSERT, "(missile)", (const char *)&queryFormat, "missile") )
    __debugbreak();
  Entity->s.lerp.u.anonymous.data[4] &= ~0x100u;
  if ( fireParms && fireParms->autoDetonateTime > 0.0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2582, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST )") )
      __debugbreak();
    autoDetonateTime = fireParms->autoDetonateTime;
  }
  else
  {
    autoDetonateTime = G_Missile_GenerateRandomLifeTime(r_weapon, isAlternate, Entity->s.number);
  }
  v16 = level.time - (int)(float)(autoDetonateTime * -1000.0);
  Entity->nextthink = v16;
  if ( v16 > level.time + 60000 )
    Entity->nextthink = level.time + 60000;
  this->UpdateBoltTeamFromParent(this, Entity, v14);
  if ( projectileModel )
  {
    if ( Entity->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3923, ASSERT_TYPE_ASSERT, "( !bolt->model )", (const char *)&queryFormat, "!bolt->model") )
      __debugbreak();
    G_Utils_SetModel(Entity, projectileModel->name);
  }
  G_DObjUpdate(Entity, 1);
  v17 = ScriptContext_Server();
  GScr_Weapon_AddParam(v17, r_weapon, isAlternate);
  GScr_AddEntity(Entity);
  GScr_Notify(v14, scr_const.missile_fire, 2u);
  if ( SV_BotIsBotEnt(v14) )
    SV_BotMissileFired(v14, Entity);
}

/*
==============
GMissile::FreeEntity
==============
*/
void GMissile::FreeEntity(GMissile *this, BgEntityData *entityData)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2758, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2763, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_FreeEntity(Entity);
}

/*
==============
GMissile::FreeEntityAfterEvent
==============
*/
void GMissile::FreeEntityAfterEvent(GMissile *this, BgEntityData *entityData)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2771, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2776, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_Utils_FreeEntityAfterEvent(Entity);
}

/*
==============
GScr_SetMissileMinimapVisible
==============
*/
void GScr_SetMissileMinimapVisible(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gentity_s *v4; 
  const char *v5; 
  const char *v6; 

  Entity = GetEntity(entref);
  v4 = Entity;
  if ( Entity->s.eType != ET_MISSILE )
  {
    v5 = SL_ConvertToString(Entity->classname);
    v6 = j_va("entity type '%s' is not a missile", v5);
    Scr_Error(COM_ERR_1935, scrContext, v6);
  }
  if ( Scr_GetInt(scrContext, 0) )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagStrict(&v4->s.lerp.eFlags, LEGACY_MANTLE|LEGACY_MOUNT|0x10);
    v4->s.otherEntityNum = EntHandle::entnum(&v4->parent);
  }
  else
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v4->s.lerp.eFlags, ACTIVE, 0x13u);
  }
}

/*
==============
G_AddImpactEvent
==============
*/
void G_AddImpactEvent(gentity_s *ent, const trace_t *trace, unsigned int event, unsigned int eventParm, int createTempEnt, gentity_s *baseEnt)
{
  gentity_s *other; 
  int additionalTrace; 
  EntityTagInfo *tagInfo; 
  GMissile *MissileSystem; 
  unsigned __int8 v14; 

  if ( GMovingPlatforms::TraceHitMovingPlatform(trace) )
  {
    other = &g_entities[trace->hitId];
    additionalTrace = 0;
  }
  else
  {
    if ( !baseEnt || (tagInfo = baseEnt->tagInfo) == NULL || (other = tagInfo->parent) == NULL )
    {
LABEL_12:
      G_Utils_AddEvent(ent, event, eventParm);
      return;
    }
    additionalTrace = 1;
  }
  if ( !other )
    goto LABEL_12;
  if ( other->s.eType == ET_VEHICLE )
  {
    MissileSystem = GMissile::GetMissileSystem();
    v14 = MissileSystem->AllowBoltForVehicles(MissileSystem);
  }
  else
  {
    v14 = 1;
  }
  if ( !GMovingPlatforms::BoltImpactEffectToMovingPlatform(ent, event, eventParm, createTempEnt, baseEnt, v14, additionalTrace, other) )
    goto LABEL_12;
}

/*
==============
G_MakeMissilePickupItem
==============
*/
void G_MakeMissilePickupItem(gentity_s *ent)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  __int64 v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1680, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  *(_QWORD *)ent->r.box.midPoint.v = 0i64;
  ent->r.box.midPoint.v[2] = 0.0;
  ent->r.box.halfSize.v[0] = 1.0;
  ent->r.box.halfSize.v[1] = 1.0;
  ent->r.box.halfSize.v[2] = 1.0;
  G_PlayerUse_SetEntityUsable(ent, 1);
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1688, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx != 0 )", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  if ( WeaponForEntity->weaponIdx >= 0x226u )
  {
    LODWORD(v4) = WeaponForEntity->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1689, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( 550 )", "weapon.weaponIdx doesn't index MAX_WEAPONS\n\t%i not in [0, %i)", v4, 550) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  ent->s.clientNum = ComCharacterLimits::ms_gameData.m_characterCount;
}

/*
==============
G_MissileDirectImpactDamage
==============
*/
void G_MissileDirectImpactDamage(gentity_s *other, gentity_s *ent, hitLocation_t hitLocation, const meansOfDeath_t methodOfDeath, vec3_t *hitVelocity, const int damage, const WeaponDef *weapDef, const bool shouldExplode, const int explodeOnImpact, const trace_t *trace, const vec3_t *dir, bool *outShouldTakeRadiusDamage)
{
  __int32 v13; 
  GCombat *CombatSystem; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  bool (__fastcall *ShieldNotifyAndDamage)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, int); 
  gentity_s *v20; 
  int v21; 
  GWeaponMap *v22; 
  const Weapon *v23; 
  float v24; 
  __int128 v25; 
  float v26; 
  __int128 v27; 
  float v31; 
  bool bigExplosion; 
  int v33; 
  gentity_s *v34; 
  float v35; 
  const dvar_t *v36; 
  sentient_s *sentient; 
  float innerDamage; 
  bool v39; 
  double FireAtMaxDamageMultiplier; 
  gentity_s *v41; 
  meansOfDeath_t v42; 
  Vehicle *vehicle; 
  int v44; 
  bool inAltWeaponMode; 
  bool v46; 
  bool v47; 
  __int16 v48; 
  meansOfDeath_t mod; 
  int v50; 
  bool (__fastcall *v51)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, int); 
  GCombat *v52; 
  bool *v53; 
  const trace_t *v54; 
  void (__fastcall *v55)(bool *, gentity_s *, gentity_s *, gentity_s *, vec3_t *, vec3_t *, int, int, meansOfDeath_t, const Weapon *, int, hitLocation_t, _DWORD, _DWORD, _DWORD, vec3_t *, __int16 *); 
  vec3_t *v56; 
  tmat43_t<vec3_t> resultMatrix; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  v13 = methodOfDeath;
  v54 = trace;
  v56 = (vec3_t *)dir;
  mod = methodOfDeath;
  v53 = outShouldTakeRadiusDamage;
  if ( !outShouldTakeRadiusDamage )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 464, ASSERT_TYPE_ASSERT, "(outShouldTakeRadiusDamage)", (const char *)&queryFormat, "outShouldTakeRadiusDamage") )
      __debugbreak();
    v13 = mod;
  }
  *outShouldTakeRadiusDamage = 0;
  if ( hitLocation == HITLOC_SHIELD && v13 == 17 )
  {
    if ( G_Utils_IsClientOrAgent(other) )
    {
      CombatSystem = GCombat::GetCombatSystem();
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
      inAltWeaponMode = ent->s.inAltWeaponMode;
      ShieldNotifyAndDamage = CombatSystem->ShieldNotifyAndDamage;
      if ( EntHandle::isDefined(&ent->r.ownerNum) )
        v20 = EntHandle::ent(&ent->r.ownerNum);
      else
        v20 = NULL;
      ShieldNotifyAndDamage(CombatSystem, other, ent, v20, hitVelocity, &ent->r.currentOrigin, damage, 0, 17, WeaponForEntity, inAltWeaponMode, 0);
    }
  }
  else
  {
    v21 = damage;
    if ( damage > 0 )
    {
      v50 = 0;
      v22 = GWeaponMap::GetInstance();
      v23 = BG_GetWeaponForEntity(v22, &ent->s);
      if ( hitLocation == HITLOC_SHIELD )
      {
        if ( G_Weapon_GetShieldTagMatrix(other, &resultMatrix) )
        {
          v24 = hitVelocity->v[1];
          v25 = LODWORD(hitVelocity->v[0]);
          v26 = hitVelocity->v[2];
          v27 = v25;
          *(float *)&v27 = fsqrt((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(v24 * v24)) + (float)(v26 * v26));
          _XMM3 = v27;
          __asm
          {
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm8, xmm0
          }
          v31 = (float)((float)((float)(*(float *)&v25 * (float)(1.0 / *(float *)&_XMM0)) * resultMatrix.m[0].v[0]) + (float)((float)(v24 * (float)(1.0 / *(float *)&_XMM0)) * resultMatrix.m[0].v[1])) + (float)((float)(v26 * (float)(1.0 / *(float *)&_XMM0)) * resultMatrix.m[0].v[2]);
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_shieldDebug, "shieldDebug") )
            Com_Printf(0, "Missile_Impact(), hit shield directly - dotprod was: %.2f\n", v31);
          if ( v31 >= MY_DOT_MAX )
          {
            hitLocation = HITLOC_NONE;
          }
          else
          {
            bigExplosion = weapDef->bigExplosion;
            G_Utils_AddEvent(other, 0x65u, 0);
            v33 = 96;
            if ( !bigExplosion )
              v33 = 32;
            v50 = v33;
          }
        }
        if ( G_Utils_IsClientOrAgent(other) && hitLocation == HITLOC_SHIELD )
        {
          v52 = GCombat::GetCombatSystem();
          v51 = v52->ShieldNotifyAndDamage;
          v46 = ent->s.inAltWeaponMode;
          if ( EntHandle::isDefined(&ent->r.ownerNum) )
            v34 = EntHandle::ent(&ent->r.ownerNum);
          else
            v34 = NULL;
          v51(v52, other, ent, v34, hitVelocity, &ent->r.currentOrigin, damage, v50, mod, v23, v46, 0);
        }
      }
      v35 = fsqrt((float)((float)(hitVelocity->v[0] * hitVelocity->v[0]) + (float)(hitVelocity->v[1] * hitVelocity->v[1])) + (float)(hitVelocity->v[2] * hitVelocity->v[2]));
      if ( v35 == 0.0 )
        hitVelocity->v[2] = 1.0;
      if ( BG_GetWeaponType(v23, ent->s.inAltWeaponMode) != WEAPTYPE_GRENADE )
        goto LABEL_36;
      v36 = DVARFLT_g_minGrenadeDamageSpeed;
      if ( !DVARFLT_g_minGrenadeDamageSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_minGrenadeDamageSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      if ( v35 >= v36->current.value || BG_GetWeaponClass(v23, ent->s.inAltWeaponMode) == WEAPCLASS_THROWINGKNIFE )
      {
LABEL_36:
        BG_GetExplosionDamageRangeInfo(v23, ent->s.inAltWeaponMode, &outDamageRangeInfo);
        sentient = other->sentient;
        innerDamage = outDamageRangeInfo.innerDamage;
        v39 = sentient && sentient->iDamageParts != -1 && explodeOnImpact && outDamageRangeInfo.innerDamage > 0.0;
        *v53 = v39;
        if ( shouldExplode && explodeOnImpact && !v39 )
          v21 = (int)innerDamage + damage;
        if ( BG_IsChargeShotWeapon(v23, ent->s.inAltWeaponMode) && (ent->c.missile.flags & 0x1000) != 0 )
        {
          FireAtMaxDamageMultiplier = BG_WeaponCharge_GetFireAtMaxDamageMultiplier(v23, ent->s.inAltWeaponMode);
          v21 = (int)(float)(*(float *)&FireAtMaxDamageMultiplier * (float)v21);
        }
        v53 = (bool *)GCombat::GetCombatSystem();
        v48 = 0;
        v55 = *(void (__fastcall **)(bool *, gentity_s *, gentity_s *, gentity_s *, vec3_t *, vec3_t *, int, int, meansOfDeath_t, const Weapon *, int, hitLocation_t, _DWORD, _DWORD, _DWORD, vec3_t *, __int16 *))(*(_QWORD *)v53 + 16i64);
        LODWORD(v51) = v54->partName;
        LODWORD(v52) = v54->modelIndex;
        v47 = ent->s.inAltWeaponMode;
        if ( EntHandle::isDefined(&ent->r.ownerNum) )
          v41 = EntHandle::ent(&ent->r.ownerNum);
        else
          v41 = NULL;
        v42 = mod;
        LOBYTE(v44) = v47;
        v55(v53, other, ent, v41, hitVelocity, &ent->r.currentOrigin, v21, v50, mod, v23, v44, hitLocation, (_DWORD)v52, (_DWORD)v51, 0, &v54->normal, &v48);
        vehicle = other->vehicle;
        if ( vehicle )
          G_Vehicle_Knockback(vehicle, v56, v42, 1.0, &ent->r.currentOrigin);
      }
    }
  }
}

/*
==============
G_Missile_AddVelocityForMover
==============
*/
void G_Missile_AddVelocityForMover(const gentity_s *parent, const int gameTime, const vec3_t *dir, vec3_t *inOutVel)
{
  const playerState_s *EntityPlayerStateConst; 
  GAntiLag *AntiLag; 
  GMissile *MissileSystem; 
  const dvar_t *v11; 
  gentity_s *GEntity; 

  if ( parent )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(parent);
    if ( EntityPlayerStateConst )
    {
      AntiLag = GAntiLag::GetAntiLag();
      if ( !AntiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2131, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
        __debugbreak();
      MissileSystem = GMissile::GetMissileSystem();
      if ( !MissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2134, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
        __debugbreak();
      v11 = DVARBOOL_addlinkedmovervelocitytomissile;
      if ( !DVARBOOL_addlinkedmovervelocitytomissile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "addlinkedmovervelocitytomissile") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled && G_Utils_GetRootParent(parent) )
      {
        BgMissile::AddVelocityForLinkedMover(MissileSystem, AntiLag, EntityPlayerStateConst, (const entityState_t *)parent->tagInfo->parent, gameTime, dir, inOutVel);
      }
      else if ( BGMovingPlatforms::IsOnMovingPlatform(EntityPlayerStateConst) )
      {
        GEntity = G_GetGEntity(EntityPlayerStateConst->movingPlatforms.m_movingPlatformEntity);
        if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2155, ASSERT_TYPE_ASSERT, "(mover)", (const char *)&queryFormat, "mover") )
          __debugbreak();
        BgMissile::AddVelocityForMover(MissileSystem, AntiLag, EntityPlayerStateConst, &GEntity->s, gameTime, inOutVel);
      }
    }
  }
}

/*
==============
G_Missile_Explode
==============
*/
void G_Missile_Explode(gentity_s *ent)
{
  G_Missile_ExplodeInternal(ent, EXPLOSION_TYPE_DEFAULT, NULL, NULL);
}

/*
==============
G_Missile_ExplodeInternal
==============
*/
void G_Missile_ExplodeInternal(gentity_s *ent, ExplosionType explosionType, const vec3_t *normalOverride, const gentity_s *otherEnt)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  bool inAltWeaponMode; 
  const WeaponDef *v8; 
  int explosiveDamageDelay; 
  scr_string_t tag_accessory_right; 
  const gentity_s *v11; 
  GUtils *Utils; 
  bool (__fastcall *EntDetach)(GUtils *, gentity_s *, const char *, scr_string_t); 
  scr_string_t v14; 
  const char *Name; 
  gentity_s *v16; 
  int PointContents; 
  const dvar_t *v18; 
  scrContext_t *v19; 
  int passEntityNum2; 
  gentity_s *v21; 
  gentity_s *v22; 
  GWeaponMap *v23; 
  vec3_t *p_dir; 
  int lastHitCharacter; 
  bool detailTrace; 
  int nextthink; 
  int v28; 
  int v29; 
  GCombat *CombatSystem; 
  unsigned __int8 v31; 
  __int64 v32; 
  gentity_s *v33; 
  __int64 v34; 
  gentity_s *v35; 
  __int128 outerRadius_low; 
  __int128 v38; 
  unsigned int v42; 
  GWeaponMap *v43; 
  int contentmask; 
  int contentmaska; 
  char v46; 
  bool v47; 
  void (__fastcall *NotifyRadiusDamage)(GCombat *, const vec3_t *, float, gentity_s *, const Weapon *, bool); 
  void (__fastcall *v50)(GCombat *, const vec3_t *, float, gentity_s *, const Weapon *, bool); 
  void (__fastcall *v51)(_QWORD, vec3_t *, gentity_s *, gentity_s *, BgExplosionDamageRangeInfo *, _DWORD, vec3_t *, gentity_s *, ExplosionType, const Weapon *, bool, _BYTE, char); 
  vec3_t trBase; 
  float v53; 
  int v54; 
  ExplosionType SplashMethodOfDeath; 
  vec3_t *v56; 
  __int64 v57; 
  GTrajectory v58; 
  vec3_t origin; 
  vec3_t start; 
  vec3_t outPos; 
  vec3_t v62; 
  vec3_t dir; 
  vec3_t forward; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 
  trace_t results; 

  v57 = -2i64;
  v56 = (vec3_t *)normalOverride;
  SplashMethodOfDeath = explosionType;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 634, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Missile_ExplodeInternal");
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 639, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx != 0 )", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  inAltWeaponMode = ent->s.inAltWeaponMode;
  v8 = BG_WeaponDef(WeaponForEntity, inAltWeaponMode);
  *(_QWORD *)origin.v = v8;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 644, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v53 = COERCE_FLOAT(BG_ProjExplosionType(WeaponForEntity, inAltWeaponMode));
  explosiveDamageDelay = v8->explosiveDamageDelay;
  v54 = explosiveDamageDelay;
  if ( ((v8->offhandClass - 2) & 0xFFFFFFFD) == 0 && ent->s.groundEntityNum == 2047 )
  {
    if ( level.time - ent->c.item[0].clipAmmoCount[1] <= 60000 )
    {
      ent->nextthink = level.time + G_Level_GetFrameDuration();
LABEL_90:
      Sys_ProfEndNamedEvent();
      return;
    }
LABEL_89:
    GScr_Notify(ent, scr_const.death, 0);
    GScr_Notify(ent, scr_const.death_or_disconnect, 0);
    G_FreeEntity(ent);
    goto LABEL_90;
  }
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  *(_QWORD *)trBase.v = GMissile::ms_gMissileSystem;
  if ( EntHandle::isDefined(&ent->grenadeActivator) && EntHandle::ent(&ent->grenadeActivator)->actor && (ent->r.svFlags & 1) != 0 )
  {
    tag_accessory_right = scr_const.tag_accessory_right;
    v11 = EntHandle::ent(&ent->grenadeActivator);
    G_Utils_DObjGetWorldTagPos_CheckTagExists(v11, tag_accessory_right, 1, &outPos);
    G_SetOrigin(ent, &outPos, 1, 1);
    ent->r.svFlags &= ~1u;
    Utils = GUtils::GetUtils();
    EntDetach = Utils->EntDetach;
    v14 = scr_const.tag_accessory_right;
    Name = XModelGetName(*(const XModel **)(*(_QWORD *)origin.v + 56i64));
    v16 = EntHandle::ent(&ent->grenadeActivator);
    EntDetach(Utils, v16, Name, v14);
    explosiveDamageDelay = v54;
  }
  else
  {
    GTrajectory::GTrajectory(&v58, ent);
    BgTrajectory::EvaluatePosTrajectory(&v58, level.time, &origin);
    SV_Game_KeepPointInPlayableBounds(&origin);
    if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
    {
      origin.v[0] = (float)(int)origin.v[0];
      origin.v[1] = (float)(int)origin.v[1];
      origin.v[2] = (float)(int)origin.v[2];
    }
    G_SetOrigin(ent, &origin, 1, 1);
  }
  if ( BG_GetWeaponType(WeaponForEntity, inAltWeaponMode) == WEAPTYPE_GRENADE && BG_ActorOrAgentSystemEnabled() )
    AIScriptedInterface::DissociateGrenade(ent);
  v46 = 1;
  PointContents = PhysicsQuery_LegacyGetPointContents(PHYSICS_WORLD_ID_FIRST, &ent->r.currentOrigin, -1, 32);
  v47 = PointContents != 0;
  if ( PointContents )
  {
    start = ent->r.currentOrigin;
    v18 = DCONST_DVARFLT_bg_missileWaterMaxDepth;
    if ( !DCONST_DVARFLT_bg_missileWaterMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileWaterMaxDepth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    start.v[2] = start.v[2] + v18->current.value;
    G_Main_TraceCapsule(&results, &start, &ent->r.currentOrigin, &bounds_origin, ent->s.number, 32);
    if ( results.startsolid || results.fraction >= 1.0 )
    {
      v46 = 0;
    }
    else
    {
      dir = results.normal;
      v62.v[0] = (float)((float)(ent->r.currentOrigin.v[0] - start.v[0]) * results.fraction) + start.v[0];
      v62.v[1] = (float)((float)(ent->r.currentOrigin.v[1] - start.v[1]) * results.fraction) + start.v[1];
      v62.v[2] = (float)((float)(ent->r.currentOrigin.v[2] - start.v[2]) * results.fraction) + start.v[2];
    }
  }
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0xCu);
  v19 = ScriptContext_Server();
  Scr_AddFloat(v19, (float)explosiveDamageDelay * 0.001);
  Scr_AddVector(v19, ent->r.currentOrigin.v);
  GScr_Notify(ent, scr_const.explode, 2u);
  BG_GetExplosionDamageRangeInfo(WeaponForEntity, inAltWeaponMode, &outDamageRangeInfo);
  passEntityNum2 = 2047;
  if ( BG_WeaponSticksToWalls(WeaponForEntity, inAltWeaponMode) && ent->s.groundEntityNum != 2047 )
  {
    start.v[0] = ent->r.currentOrigin.v[0] - (float)(4.0 * ent->c.mover.pos.pos1.v[1]);
    start.v[1] = ent->r.currentOrigin.v[1] - (float)(4.0 * ent->c.mover.pos.pos1.v[2]);
    start.v[2] = ent->r.currentOrigin.v[2] - (float)(4.0 * ent->c.mover.pos.pos2.v[0]);
  }
  v21 = NULL;
  v22 = NULL;
  if ( !v46 )
  {
LABEL_80:
    outerRadius_low = LODWORD(outDamageRangeInfo.outerRadius);
    if ( (~((unsigned int)ent->c.missile.flags >> 14) & (outDamageRangeInfo.outerRadius > 0.0)) != 0 )
    {
      *(double *)&outerRadius_low = BG_DamageConeAngle(WeaponForEntity, inAltWeaponMode);
      v38 = outerRadius_low;
      *(float *)&v38 = *(float *)&outerRadius_low * 0.017453292;
      _XMM0 = v38;
      *(float *)&_XMM0 = cosf_0(*(float *)&v38);
      _XMM1 = LODWORD(FLOAT_180_0);
      __asm
      {
        vcmpless xmm3, xmm1, xmm6
        vblendvps xmm0, xmm0, xmm2, xmm3
      }
      v53 = *(float *)&_XMM0;
      AngleVectors(&ent->r.currentAngles, &forward, NULL, NULL);
      SplashMethodOfDeath = GetSplashMethodOfDeath(ent);
      *(_QWORD *)trBase.v = GCombat::GetCombatSystem();
      v51 = *(void (__fastcall **)(_QWORD, vec3_t *, gentity_s *, gentity_s *, BgExplosionDamageRangeInfo *, _DWORD, vec3_t *, gentity_s *, ExplosionType, const Weapon *, bool, _BYTE, char))(**(_QWORD **)trBase.v + 32i64);
      if ( EntHandle::isDefined(&ent->parent) )
        v21 = EntHandle::ent(&ent->parent);
      v51(*(_QWORD *)trBase.v, &ent->r.currentOrigin, ent, v21, &outDamageRangeInfo, LODWORD(v53), &forward, ent, SplashMethodOfDeath, WeaponForEntity, inAltWeaponMode, 0, 1);
    }
    if ( v46 )
    {
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 907, ASSERT_TYPE_SANITY, "( eventEnt )", (const char *)&queryFormat, "eventEnt") )
        __debugbreak();
      SV_LinkEntity(v22);
    }
    goto LABEL_89;
  }
  v22 = G_Utils_SpawnEntity();
  v22->s.eType = ET_FIRST;
  v22->s.lerp.eFlags.m_flags[0] = 0;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v22->s.lerp.eFlags, ACTIVE, 0xCu);
  *(_QWORD *)v22->clientMask.array = 0i64;
  *(_QWORD *)&v22->clientMask.array[2] = 0i64;
  *(_QWORD *)&v22->clientMask.array[4] = 0i64;
  v22->clientMask.array[6] = 0;
  v23 = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(v23, &v22->s, WeaponForEntity);
  v22->s.inAltWeaponMode = ent->s.inAltWeaponMode;
  bitarray_base<bitarray<2048>>::setBit(&g_missileEventEntities, v22->s.number);
  if ( v47 )
  {
    G_SetOrigin(v22, &v62, 1, 1);
    v22->s.surfType = 21;
    p_dir = &dir;
  }
  else
  {
    G_SetOrigin(v22, &ent->r.currentOrigin, 1, 1);
    if ( !SV_Game_CheckPointInPlayableBounds(&v22->r.currentOrigin) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 762, ASSERT_TYPE_ASSERT, "( SV_Game_CheckPointInPlayableBounds( eventEnt->r.currentOrigin ) )", (const char *)&queryFormat, "SV_Game_CheckPointInPlayableBounds( eventEnt->r.currentOrigin )") )
      __debugbreak();
    Trajectory_GetTrBase(&v22->s.lerp.pos, &outPos);
    if ( !SV_Game_CheckPointInPlayableBounds(&outPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 765, ASSERT_TYPE_ASSERT, "( SV_Game_CheckPointInPlayableBounds( tmpTrBase ) )", (const char *)&queryFormat, "SV_Game_CheckPointInPlayableBounds( tmpTrBase )") )
      __debugbreak();
    if ( !BG_WeaponSticksToWalls(WeaponForEntity, inAltWeaponMode) || ent->s.groundEntityNum == 2047 )
    {
      *(_QWORD *)start.v = *(_QWORD *)ent->r.currentOrigin.v;
      start.v[2] = ent->r.currentOrigin.v[2] - 16.0;
    }
    else
    {
      start.v[0] = ent->r.currentOrigin.v[0] - (float)(16.0 * ent->c.mover.pos.pos1.v[1]);
      start.v[1] = ent->r.currentOrigin.v[1] - (float)(16.0 * ent->c.mover.pos.pos1.v[2]);
      start.v[2] = ent->r.currentOrigin.v[2] - (float)(16.0 * ent->c.mover.pos.pos2.v[0]);
    }
    lastHitCharacter = ent->c.missile.lastHitCharacter;
    if ( lastHitCharacter )
    {
      LODWORD(origin.v[0]) = lastHitCharacter - 1;
      if ( G_IsEntityInUse(lastHitCharacter - 1) )
        passEntityNum2 = LODWORD(origin.v[0]);
      else
        ent->c.missile.lastHitCharacter = 0;
    }
    detailTrace = BG_WeaponRadiusDamageDetailTrace(WeaponForEntity, ent->s.inAltWeaponMode);
    G_Missile_Trace(ent, &results, &ent->r.currentOrigin, &start, &ent->r.box, ent->s.number, passEntityNum2, ent->clipmask, detailTrace);
    if ( BG_ProjExplosionEffectForceNormalUp(WeaponForEntity, inAltWeaponMode) )
    {
      p_dir = &MY_STRAIGHTUPNORMAL_0;
    }
    else if ( BG_ProjExplosionEffectInheritParentDirection(WeaponForEntity, inAltWeaponMode) )
    {
      AngleVectors(&ent->r.currentAngles, &forward, NULL, NULL);
      p_dir = &forward;
    }
    else
    {
      p_dir = &results.normal;
    }
    v22->s.surfType = (results.surfaceFlags >> 19) & 0x3F;
    memset(&outPos, 0, sizeof(outPos));
  }
  nextthink = ent->nextthink;
  v28 = DirToByte(p_dir);
  v29 = 0;
  if ( !nextthink )
    v29 = 256;
  LODWORD(origin.v[0]) = v29 | v28;
  CombatSystem = GCombat::GetCombatSystem();
  if ( SplashMethodOfDeath == EXPLOSION_TYPE_TROPHY )
  {
    if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 807, ASSERT_TYPE_ASSERT, "(normalOverride)", (const char *)&queryFormat, "normalOverride") )
      __debugbreak();
    if ( !otherEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 808, ASSERT_TYPE_ASSERT, "(otherEnt)", (const char *)&queryFormat, "otherEnt") )
      __debugbreak();
    v31 = DirToByte(v56);
    G_Utils_AddEvent(v22, 0x78u, v31);
    v22->s.otherEntityNum = otherEnt->s.number;
    NotifyRadiusDamage = CombatSystem->NotifyRadiusDamage;
    if ( !EntHandle::isDefined(&ent->r.ownerNum) )
    {
      v33 = NULL;
      goto LABEL_104;
    }
    goto LABEL_102;
  }
  if ( v53 != 0.0 && LODWORD(v53) != 7 )
  {
    if ( LODWORD(v53) == 1 )
    {
      G_AddImpactEvent(v22, &results, 0x71u, LODWORD(origin.v[0]), 0, ent);
      v50 = CombatSystem->NotifyRadiusDamage;
      if ( EntHandle::isDefined(&ent->r.ownerNum) )
        v35 = EntHandle::ent(&ent->r.ownerNum);
      else
        v35 = NULL;
      LOBYTE(contentmaska) = inAltWeaponMode;
      ((void (__fastcall *)(GCombat *, vec3_t *, __int64, gentity_s *, const Weapon *, int))v50)(CombatSystem, &ent->r.currentOrigin, v34, v35, WeaponForEntity, contentmaska);
    }
    else
    {
      if ( LODWORD(v53) != 2 )
      {
        G_AddImpactEvent(v22, &results, 0x74u, LODWORD(origin.v[0]), 0, ent);
        v22->s.lerp.u.anonymous.data[0] = level.time;
        NotifyRadiusDamage = CombatSystem->NotifyRadiusDamage;
        if ( !EntHandle::isDefined(&ent->r.ownerNum) )
        {
          v33 = NULL;
          goto LABEL_104;
        }
        goto LABEL_102;
      }
      G_AddImpactEvent(v22, &results, 0x73u, LODWORD(origin.v[0]), 0, ent);
    }
LABEL_79:
    G_Utils_FreeEntityAfterEvent(v22);
    goto LABEL_80;
  }
  v42 = LODWORD(origin.v[0]);
  if ( v54 <= 0 )
  {
    G_AddImpactEvent(v22, &results, 0x6Du, LODWORD(origin.v[0]), 0, ent);
    NotifyRadiusDamage = CombatSystem->NotifyRadiusDamage;
    if ( !EntHandle::isDefined(&ent->r.ownerNum) )
    {
      v33 = NULL;
LABEL_104:
      LOBYTE(contentmask) = inAltWeaponMode;
      ((void (__fastcall *)(GCombat *, vec3_t *, __int64, gentity_s *, const Weapon *, int))NotifyRadiusDamage)(CombatSystem, &ent->r.currentOrigin, v32, v33, WeaponForEntity, contentmask);
      if ( (LODWORD(v53) == 6 || LODWORD(v53) == 3) && *(_BYTE *)(*(_QWORD *)trBase.v + 9i64) )
      {
        if ( !BG_ProjExplosionEffect(WeaponForEntity, inAltWeaponMode).particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 862, ASSERT_TYPE_ASSERT, "(BG_ProjExplosionEffect( weapon, isUsingAlternate ).IsValid())", (const char *)&queryFormat, "BG_ProjExplosionEffect( weapon, isUsingAlternate ).IsValid()") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 865, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::NETWORK_FIELD_QUANTIZATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::NETWORK_FIELD_QUANTIZATION )") )
          __debugbreak();
        Trajectory_GetTrBase(&v22->s.lerp.pos, &trBase);
        trBase.v[0] = (float)(int)trBase.v[0];
        trBase.v[1] = (float)(int)trBase.v[1];
        trBase.v[2] = (float)(int)trBase.v[2];
        Trajectory_SetTrBase(&v22->s.lerp.pos, &trBase);
        G_SetOrigin(v22, &trBase, 1, 1);
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagStrict(&v22->s.lerp.eFlags, LEGACY_LADDER_CENTERLINE|LEGACY_MANTLE|0x10);
        v22->s.lerp.u.anonymous.data[0] = level.time;
        v22->s.time2 = level.time + 61000;
        v43 = GWeaponMap::GetInstance();
        GWeaponMap::CopyWeapon(v43, &v22->s.weaponHandle, &ent->s.weaponHandle);
        v22->s.inAltWeaponMode = ent->s.inAltWeaponMode;
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagStrict(&v22->s.lerp.eFlags, (EntityStateFlagsMP)27);
        v22->handler = 11;
        v22->nextthink = level.time + 1;
        Com_Printf(15, "Sending smoke/molotov that starts at %i and is at ( %f, %f, %f )\n", (unsigned int)level.time, trBase.v[0], trBase.v[1], trBase.v[2]);
        memset(&trBase, 0, sizeof(trBase));
        goto LABEL_80;
      }
      goto LABEL_79;
    }
LABEL_102:
    v33 = EntHandle::ent(&ent->r.ownerNum);
    goto LABEL_104;
  }
  if ( (ent->c.missile.flags & 0x100) != 0 )
  {
    G_AddImpactEvent(v22, &results, 0x6Cu, LODWORD(origin.v[0]), 0, ent);
    NotifyRadiusDamage = CombatSystem->NotifyRadiusDamage;
    if ( !EntHandle::isDefined(&ent->r.ownerNum) )
    {
      v33 = NULL;
      goto LABEL_104;
    }
    goto LABEL_102;
  }
  ent->c.missile.flags |= 0x100u;
  G_AddImpactEvent(v22, &results, 0x6Bu, v42, 0, ent);
  SV_LinkEntity(v22);
  ent->nextthink = level.time + v54;
}

/*
==============
G_Missile_FireGrenade
==============
*/
gentity_s *G_Missile_FireGrenade(gentity_s *parent, const vec3_t *start, const vec3_t *dir, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, int rotate, int fuseTime, const bool applyNoDrawTime, const int gameTime)
{
  return G_Missile_FireGrenadeRethrow(parent, start, dir, r_grenadeWeapon, isAlternate, hand, rotate, fuseTime, applyNoDrawTime, gameTime, NULL);
}

/*
==============
G_Missile_FireGrenadeRethrow
==============
*/
gentity_s *G_Missile_FireGrenadeRethrow(gentity_s *parent, const vec3_t *start, const vec3_t *dir, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, int rotate, int time, const bool applyNoDrawTime, const int gameTime, gentity_s *const rethrowEnt)
{
  GMissile *v14; 
  __int64 v15; 
  __int64 v16; 
  GEntityData *rethrowEntityData; 
  int number; 
  GWeaponMap *Instance; 
  GEntityMissileComponentData v22; 
  GEntityData v23; 
  __int64 v24; 
  GEntityMissileComponentData v25; 
  GEntityMissileComponentData outComponentData; 
  GEntityData outEntityData; 
  GEntityData v28; 
  vec3_t inOutVel; 

  v24 = -2i64;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  v14 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2542, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
    __debugbreak();
  GEntityData::GEntityData(&v23);
  GEntityMissileComponentData::GEntityMissileComponentData(&v22);
  if ( rethrowEnt )
  {
    GEntityMissileComponentData::GEntityMissileComponentData(&v25, rethrowEnt);
    v22.m_missileTargetEnt = *(_DWORD *)(v15 + 8);
    v22.m_ent = *(gentity_s **)(v15 + 16);
    GEntityData::GEntityData(&v28, rethrowEnt, &v22);
    v23.m_origin = *(vec3_t **)(v16 + 8);
    v23.m_angles = *(vec3_t **)(v16 + 16);
    v23.m_box = *(Bounds **)(v16 + 24);
    v23.m_clipMask = *(int **)(v16 + 32);
    v23.m_parentEntNum = *(_DWORD *)(v16 + 40);
    v23.m_ownerEntNum = *(_DWORD *)(v16 + 44);
    v23.m_entityState = *(entityState_t **)(v16 + 48);
    v23.m_flags = *(GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> **)(v16 + 56);
    v23.m_components = *(BgEntityComponents **)(v16 + 64);
    v23.m_componentData = *(BgEntityComponentData **)(v16 + 72);
    v23.m_handler = *(unsigned __int8 **)(v16 + 80);
    v23.m_ent = *(gentity_s **)(v16 + 88);
  }
  GEntityData::GEntityData(&outEntityData);
  GEntityMissileComponentData::GEntityMissileComponentData(&outComponentData);
  inOutVel = *dir;
  G_Missile_AddVelocityForMover(parent, gameTime, dir, &inOutVel);
  BgMissile::SRand(v14, time);
  rethrowEntityData = &v23;
  if ( GEntityData::IsEmpty(&v23) )
    rethrowEntityData = NULL;
  if ( parent )
    number = parent->s.number;
  else
    number = 2047;
  Instance = GWeaponMap::GetInstance();
  BgMissile::FireGrenadeRethrow(v14, Instance, number, start, &inOutVel, r_grenadeWeapon, isAlternate, hand, rotate != 0, gameTime, time, applyNoDrawTime, rethrowEntityData, &outEntityData, &outComponentData);
  if ( GEntityData::IsEmpty(&outEntityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2561, ASSERT_TYPE_ASSERT, "(!grenadeEntityData.IsEmpty())", (const char *)&queryFormat, "!grenadeEntityData.IsEmpty()") )
    __debugbreak();
  return GEntityData::GetEntity(&outEntityData);
}

/*
==============
G_Missile_FireRocket
==============
*/
gentity_s *G_Missile_FireRocket(gentity_s *parent, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const vec3_t *start, const vec3_t *dir, const vec3_t *gunVel, const BgMissileFireParms *fireParms, const int gameTime, bool magicBullet)
{
  GMissile *v14; 
  const dvar_t *v15; 
  vec3_t *p_inOutVel; 
  int number; 
  GWeaponMap *Instance; 
  GEntityMissileComponentData outComponentData; 
  GEntityData outEntityData; 
  vec3_t v22; 
  vec3_t inOutVel; 

  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  v14 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2599, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
    __debugbreak();
  GEntityData::GEntityData(&outEntityData);
  GEntityMissileComponentData::GEntityMissileComponentData(&outComponentData);
  inOutVel = *dir;
  v22 = *gunVel;
  v15 = DVARBOOL_addmovervelocitytomissileonserver;
  if ( !DVARBOOL_addmovervelocitytomissileonserver && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "addmovervelocitytomissileonserver") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  p_inOutVel = &v22;
  if ( !v15->current.enabled )
    p_inOutVel = &inOutVel;
  G_Missile_AddVelocityForMover(parent, gameTime, dir, p_inOutVel);
  BgMissile::SRand(v14, level.time);
  if ( parent )
    number = parent->s.number;
  else
    number = 2047;
  Instance = GWeaponMap::GetInstance();
  BgMissile::FireRocket(v14, Instance, number, r_weapon, isAlternate, hand, start, &inOutVel, &v22, fireParms, magicBullet, gameTime, &outEntityData, &outComponentData);
  if ( GEntityData::IsEmpty(&outEntityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2628, ASSERT_TYPE_ASSERT, "(!rocketEntityData.IsEmpty())", (const char *)&queryFormat, "!rocketEntityData.IsEmpty()") )
    __debugbreak();
  return GEntityData::GetEntity(&outEntityData);
}

/*
==============
G_Missile_FreeAttractorRefs
==============
*/
void G_Missile_FreeAttractorRefs(gentity_s *ent)
{
  AttractorRepulsor_t *v1; 
  __int64 v2; 
  int number; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 

  v1 = &attrGlob.attractors[1];
  v2 = 4i64;
  do
  {
    if ( v1[-1].inUse )
    {
      number = ent->s.number;
      if ( v1[-1].entnum == number || v1[-1].attacker == number )
      {
        *(_QWORD *)&v1[-1].inUse = 0i64;
        *(_QWORD *)v1[-1].origin.v = 0i64;
        *(_QWORD *)&v1[-1].origin.z = 0i64;
        v1[-1].maxDist = 0.0;
      }
    }
    if ( v1->inUse )
    {
      v4 = ent->s.number;
      if ( v1->entnum == v4 || v1->attacker == v4 )
      {
        *(_QWORD *)&v1->inUse = 0i64;
        *(_QWORD *)v1->origin.v = 0i64;
        *(_QWORD *)&v1->origin.z = 0i64;
        v1->maxDist = 0.0;
      }
    }
    if ( v1[1].inUse )
    {
      v5 = ent->s.number;
      if ( v1[1].entnum == v5 || v1[1].attacker == v5 )
      {
        *(_QWORD *)&v1[1].inUse = 0i64;
        *(_QWORD *)v1[1].origin.v = 0i64;
        *(_QWORD *)&v1[1].origin.z = 0i64;
        v1[1].maxDist = 0.0;
      }
    }
    if ( v1[2].inUse )
    {
      v6 = ent->s.number;
      if ( v1[2].entnum == v6 || v1[2].attacker == v6 )
      {
        *(_QWORD *)&v1[2].inUse = 0i64;
        *(_QWORD *)v1[2].origin.v = 0i64;
        *(_QWORD *)&v1[2].origin.z = 0i64;
        v1[2].maxDist = 0.0;
      }
    }
    if ( v1[3].inUse )
    {
      v7 = ent->s.number;
      if ( v1[3].entnum == v7 || v1[3].attacker == v7 )
      {
        *(_QWORD *)&v1[3].inUse = 0i64;
        *(_QWORD *)v1[3].origin.v = 0i64;
        *(_QWORD *)&v1[3].origin.z = 0i64;
        v1[3].maxDist = 0.0;
      }
    }
    if ( v1[4].inUse )
    {
      v8 = ent->s.number;
      if ( v1[4].entnum == v8 || v1[4].attacker == v8 )
      {
        *(_QWORD *)&v1[4].inUse = 0i64;
        *(_QWORD *)v1[4].origin.v = 0i64;
        *(_QWORD *)&v1[4].origin.z = 0i64;
        v1[4].maxDist = 0.0;
      }
    }
    if ( v1[5].inUse )
    {
      v9 = ent->s.number;
      if ( v1[5].entnum == v9 || v1[5].attacker == v9 )
      {
        *(_QWORD *)&v1[5].inUse = 0i64;
        *(_QWORD *)v1[5].origin.v = 0i64;
        *(_QWORD *)&v1[5].origin.z = 0i64;
        v1[5].maxDist = 0.0;
      }
    }
    if ( v1[6].inUse )
    {
      v10 = ent->s.number;
      if ( v1[6].entnum == v10 || v1[6].attacker == v10 )
      {
        *(_QWORD *)&v1[6].inUse = 0i64;
        *(_QWORD *)v1[6].origin.v = 0i64;
        *(_QWORD *)&v1[6].origin.z = 0i64;
        v1[6].maxDist = 0.0;
      }
    }
    v1 += 8;
    --v2;
  }
  while ( v2 );
}

/*
==============
G_Missile_GenerateRandomLifeTime
==============
*/
float G_Missile_GenerateRandomLifeTime(const Weapon *r_weapon, bool isAlternate, int entIndex)
{
  const WeaponDef *v6; 
  float projLifetime; 
  float projLifetimeStdDeviation; 
  unsigned int WeaponAttachments; 
  unsigned int v10; 
  unsigned int v11; 
  WeaponAttachment **v12; 
  AttProjectile *projectile; 
  double v15; 
  float v16; 
  double v17; 
  unsigned int pHoldrand; 
  unsigned int outNormalRandomA[3]; 
  WeaponAttachment *attachments[30]; 

  v6 = BG_WeaponDef(r_weapon, isAlternate);
  projLifetime = v6->projLifetime;
  projLifetimeStdDeviation = v6->projLifetimeStdDeviation;
  WeaponAttachments = BG_GetWeaponAttachments(r_weapon, isAlternate, (const WeaponAttachment **)attachments);
  v10 = 0;
  v11 = WeaponAttachments;
  if ( WeaponAttachments )
  {
    v12 = attachments;
    while ( 1 )
    {
      if ( !*v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2035, ASSERT_TYPE_ASSERT, "(attachments[attachmentIndex])", (const char *)&queryFormat, "attachments[attachmentIndex]") )
        __debugbreak();
      projectile = (*v12)->projectile;
      if ( projectile )
        break;
      ++v10;
      ++v12;
      if ( v10 >= v11 )
        goto LABEL_10;
    }
    projLifetime = projectile->projectileLifetime;
    projLifetimeStdDeviation = projectile->projectileLifetimeStdDeviation;
  }
LABEL_10:
  if ( projLifetimeStdDeviation == 0.0 )
    return projLifetime;
  pHoldrand = entIndex + level.time;
  BG_srand(&pHoldrand);
  v15 = BG_flrand(0.000099999997, 0.99989998, &pHoldrand);
  v16 = *(float *)&v15;
  v17 = BG_flrand(0.000099999997, 0.99989998, &pHoldrand);
  BoxMullerTransform(v16, *(float *)&v17, projLifetime, projLifetimeStdDeviation, (float *)outNormalRandomA, NULL);
  _XMM0 = outNormalRandomA[0];
  *(double *)&_XMM0 = I_fclamp(*(float *)outNormalRandomA, projLifetime - (float)(projLifetimeStdDeviation * 2.0), (float)(projLifetimeStdDeviation * 2.0) + projLifetime);
  __asm { vmaxss  xmm0, xmm0, xmm9 }
  return *(float *)&_XMM0;
}

/*
==============
G_Missile_GetAttacker
==============
*/
gentity_s *G_Missile_GetAttacker(const gentity_s *const missile)
{
  gentity_s *GEntity; 
  gentity_s *v3; 

  if ( !missile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2219, ASSERT_TYPE_ASSERT, "( missile != nullptr )", (const char *)&queryFormat, "missile != nullptr") )
    __debugbreak();
  if ( EntHandle::isDefined(&missile->r.ownerNum) )
    GEntity = EntHandle::ent(&missile->r.ownerNum);
  else
    GEntity = G_GetGEntity(missile->s.staticState.mover.moverFlags);
  v3 = GEntity;
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2230, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  return v3;
}

/*
==============
G_Missile_GetScaledProjectileSpeed
==============
*/
void G_Missile_GetScaledProjectileSpeed(const gentity_s *attacker, const Weapon *weapon, bool isAlt, int *outSpeed, int *outSpeedUp)
{
  int *v9; 
  float outSpeedUpScale; 

  if ( !outSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 171, ASSERT_TYPE_ASSERT, "(outSpeed)", (const char *)&queryFormat, "outSpeed") )
    __debugbreak();
  v9 = outSpeedUp;
  if ( !outSpeedUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 172, ASSERT_TYPE_ASSERT, "(outSpeedUp)", (const char *)&queryFormat, "outSpeedUp") )
    __debugbreak();
  BG_GetProjectileSpeed(weapon, isAlt, outSpeed, v9);
  G_Missile_GetScriptSpeedScale(attacker, weapon, isAlt, (float *)&outSpeedUp, &outSpeedUpScale);
  *outSpeed = (int)(float)((float)*outSpeed * *(float *)&outSpeedUp);
  *v9 = (int)(float)((float)*v9 * outSpeedUpScale);
}

/*
==============
G_Missile_GetScriptSpeedScale
==============
*/
void G_Missile_GetScriptSpeedScale(const gentity_s *attacker, const Weapon *weapon, bool isAlt, float *outSpeedScale, float *outSpeedUpScale)
{
  float *v7; 
  GameScriptData *v8; 
  scrContext_t *v9; 
  char *Value; 
  int *v11; 
  _QWORD *v12; 
  char *v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  ThreadContext CurrentThreadContext; 
  unsigned int v17; 
  float v18; 
  void *outReturnValue; 
  __int64 v20; 
  float v21; 
  float v22; 
  Weapon *r_weapon; 
  bool v24; 

  v24 = isAlt;
  r_weapon = (Weapon *)weapon;
  if ( !outSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 113, ASSERT_TYPE_ASSERT, "(outSpeedScale)", (const char *)&queryFormat, "outSpeedScale") )
    __debugbreak();
  v7 = outSpeedUpScale;
  if ( !outSpeedUpScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 114, ASSERT_TYPE_ASSERT, "(outSpeedUpScale)", (const char *)&queryFormat, "outSpeedUpScale") )
    __debugbreak();
  *outSpeedScale = 1.0;
  *v7 = 1.0;
  if ( attacker && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_LADDER_AIM) )
  {
    if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
      __debugbreak();
    if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    v8 = GameScriptData::ms_gScriptData;
    if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 130, ASSERT_TYPE_ASSERT, "(gScrData)", (const char *)&queryFormat, "gScrData") )
      __debugbreak();
    if ( v8->projectile_speed > 0 )
    {
      v9 = ScriptContext_Server();
      Value = (char *)Sys_GetValue(0);
      v11 = (int *)(Value + 15976);
      if ( (unsigned int)(*((_DWORD *)Value + 3994) + 1) >= 3 )
      {
        LODWORD(outReturnValue) = *((_DWORD *)Value + 3994) + 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outReturnValue, 3) )
          __debugbreak();
      }
      if ( (unsigned int)++*v11 >= 3 )
      {
        LODWORD(v20) = 3;
        LODWORD(outReturnValue) = *v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outReturnValue, v20) )
          __debugbreak();
      }
      v12 = Value + 2088;
      v13 = Value + 40;
      if ( *v12 < (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
        __debugbreak();
      *v12 += 8i64;
      if ( *v12 >= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
        __debugbreak();
      *(_QWORD *)*v12 = v11;
      if ( *v12 <= (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
        __debugbreak();
      v14 = *v11;
      v15 = __rdtsc();
      v11[v14 + 2] = v15;
      if ( Sys_HasValidCurrentThreadContext() )
        CurrentThreadContext = Sys_GetCurrentThreadContext();
      else
        CurrentThreadContext = THREAD_CONTEXT_COUNT;
      CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 347, NULL, 0);
      GScr_Weapon_AddParam(v9, r_weapon, v24);
      GScr_AddEntity(attacker);
      v17 = GScr_ExecEntThreadWithReturnValue(attacker, v8->projectile_speed, 2u, Scr_ExecThreadCallback_FloatArray, &returnCount, &v21);
      if ( Scr_IsThreadAlive(v9, v17) )
        Com_PrintError(1, "CodeCallback_GetProjectileSpeedScale failed to terminate. No waits allowed in this function.\n");
      Scr_FreeThread(v9, v17);
      Profile_EndInternal(NULL);
      v18 = v22;
      *outSpeedScale = v21;
      *v7 = v18;
    }
  }
}

/*
==============
G_Missile_HasEntityNotify
==============
*/
bool G_Missile_HasEntityNotify(const gentity_s *const ent)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v4; 
  const dvar_t *v5; 
  const WeaponDef *v6; 
  WeaponEntityNotify *v7; 
  WeaponEntityNotify *v8; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2508, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( ent->s.eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2509, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_MISSILE )", (const char *)&queryFormat, "ent->s.eType == ET_MISSILE") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
  if ( !WeaponForEntity->weaponIdx )
    return 0;
  v4 = BG_WeaponDef(WeaponForEntity, 0);
  v5 = DVARBOOL_g_debugGrenadeNotifies;
  v6 = v4;
  if ( !DVARBOOL_g_debugGrenadeNotifies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugGrenadeNotifies") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v7 = v6->notifyTypes[0];
    if ( v7 )
      G_DebugCircle(&ent->r.currentOrigin, v7->radius, &colorGreen, 0, 1, 1);
    v8 = v6->notifyTypes[1];
    if ( v8 )
      G_DebugCircle(&ent->r.currentOrigin, v8->radius, &colorRed, 0, 1, 1);
  }
  return v6->notifyTypes[0] || v6->notifyTypes[1];
}

/*
==============
G_Missile_InitAttractors
==============
*/
void G_Missile_InitAttractors(void)
{
  memset_0(&attrGlob, 0, sizeof(attrGlob));
}

/*
==============
G_Missile_IsGrenade
==============
*/
bool G_Missile_IsGrenade(const gentity_s *ent)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 102, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 103, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_MISSILE)", (const char *)&queryFormat, "ent->s.eType == ET_MISSILE") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
  return BG_GetWeaponClass(WeaponForEntity, ent->s.inAltWeaponMode) == WEAPCLASS_GRENADE;
}

/*
==============
G_Missile_LoadAttractors
==============
*/
void G_Missile_LoadAttractors(MemoryFile *memFile)
{
  unsigned int i; 
  char p; 

  memset_0(&attrGlob, 0, sizeof(attrGlob));
  for ( i = 0; i < 0x20; ++i )
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    if ( p )
      MemFile_ReadData(memFile, 0x1Cui64, &attrGlob.attractors[i]);
  }
}

/*
==============
G_Missile_NotifyEntities
==============
*/
void G_Missile_NotifyEntities(const gentity_s *const ent)
{
  GMissile *v2; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  unsigned int v5; 
  const WeaponDef *v6; 
  const WeaponEntityNotify *v7; 
  float v8; 
  float v9; 
  float radius; 
  float v11; 
  float v12; 
  unsigned int v13; 
  __int64 v14; 
  gentity_s *GEntity; 
  gentity_s *v16; 
  const WeaponEntityNotify *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int64 v23; 
  __int64 v24; 
  gentity_s *v25; 
  int *ignoreEnts; 
  int *ignoreEntsa; 
  PhysicsQuery_Collected<unsigned short> *collectedEnts; 
  PhysicsQuery_Collected<unsigned short> *collectedEntsa; 
  PhysicsQuery_Collected<unsigned short> v30; 
  const WeaponDef *v31; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  char v34[4096]; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2404, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  v2 = GMissile::ms_gMissileSystem;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
  if ( WeaponForEntity->weaponIdx )
  {
    v5 = 0;
    v31 = BG_WeaponDef(WeaponForEntity, 0);
    v6 = v31;
    v7 = v31->notifyTypes[0];
    if ( v7 )
    {
      v8 = ent->r.currentOrigin.v[0];
      v9 = ent->r.currentOrigin.v[1];
      v30.ids = (unsigned __int16 *)v34;
      v30.count = 0;
      v30.countMax = 2048;
      radius = v7->radius;
      v11 = v7->height * 0.5;
      v12 = v11 + ent->r.currentOrigin.v[2];
      aabbMin.v[0] = v8 - radius;
      aabbMin.v[1] = v9 - radius;
      aabbMin.v[2] = v12 - v11;
      aabbMax.v[0] = v8 + radius;
      aabbMax.v[1] = v9 + radius;
      aabbMax.v[2] = v12 + v11;
      PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 33570816, 0, NULL, &v30, NULL, 1);
      v13 = 0;
      if ( v30.count )
      {
        do
        {
          v14 = v30.ids[v13];
          if ( (unsigned int)v14 >= 0x800 )
          {
            LODWORD(collectedEnts) = 2048;
            LODWORD(ignoreEnts) = v30.ids[v13];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEnts, collectedEnts) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( g_entityIsInUse[v14] )
          {
            GEntity = G_GetGEntity(v14);
            v16 = GEntity;
            if ( GEntity->health )
            {
              if ( G_Missile_ShouldNotifyPlayer(ent, GEntity, v7) )
                v2->NotifyEntity(v2, ent, v16);
            }
          }
          ++v13;
        }
        while ( v13 < v30.count );
        v6 = v31;
        v5 = 0;
      }
    }
    v17 = v6->notifyTypes[1];
    if ( v17 )
    {
      v18 = ent->r.currentOrigin.v[0];
      v19 = ent->r.currentOrigin.v[1];
      v30.ids = (unsigned __int16 *)v34;
      v30.count = 0;
      v30.countMax = 2048;
      v20 = v17->radius;
      v21 = v17->height * 0.5;
      v22 = v21 + ent->r.currentOrigin.v[2];
      aabbMin.v[0] = v18 - v20;
      aabbMin.v[1] = v19 - v20;
      aabbMin.v[2] = v22 - v21;
      aabbMax.v[0] = v18 + v20;
      aabbMax.v[1] = v19 + v20;
      aabbMax.v[2] = v21 + v22;
      PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 0x800000, 0, NULL, &v30, NULL, 1);
      if ( v30.count )
      {
        do
        {
          v23 = v30.ids[v5];
          if ( (unsigned int)v23 >= 0x800 )
          {
            LODWORD(collectedEntsa) = 2048;
            LODWORD(ignoreEntsa) = v30.ids[v5];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEntsa, collectedEntsa) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v24 = v23;
          if ( g_entities[v23].r.isInUse != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( g_entityIsInUse[v23] )
          {
            if ( (unsigned int)v23 >= 0x800 )
            {
              LODWORD(collectedEntsa) = 2048;
              LODWORD(ignoreEntsa) = v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEntsa, collectedEntsa) )
                __debugbreak();
            }
            if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
              __debugbreak();
            v25 = &g_entities[v24];
            if ( G_Missile_ShouldNotifyVehicle(ent, &g_entities[v24], v17) )
              v2->NotifyEntity(v2, ent, v25);
          }
          ++v5;
        }
        while ( v5 < v30.count );
      }
    }
  }
}

/*
==============
G_Missile_NotifyPlayer_Info
==============
*/
char G_Missile_NotifyPlayer_Info(const gentity_s *const player, team_t *outTeam, float *outSpeedSq, vec3_t *outEyePos)
{
  actor_s *actor; 
  sentient_s *sentient; 
  actor_s *v10; 
  actor_s *v11; 
  gclient_s *client; 
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v14; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2163, ASSERT_TYPE_ASSERT, "( player != nullptr )", (const char *)&queryFormat, "player != nullptr") )
    __debugbreak();
  *outTeam = TEAM_ZERO;
  *outSpeedSq = 0.0;
  actor = player->actor;
  if ( !actor )
  {
    client = player->client;
    if ( !client || (client->flags & 1) == 0 && client->sess.sessionState == SESS_STATE_PLAYING )
    {
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(player);
      v14 = EntityPlayerStateConst;
      if ( !EntityPlayerStateConst )
        return 1;
      if ( EntityPlayerStateConst->pm_type <= 1u )
      {
        if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
          __debugbreak();
        *outTeam = *(team_t *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)player->s.number) + 12);
        *outSpeedSq = (float)((float)(v14->velocity.v[0] * v14->velocity.v[0]) + (float)(v14->velocity.v[1] * v14->velocity.v[1])) + (float)(v14->velocity.v[2] * v14->velocity.v[2]);
        G_Client_GetEyePosition(v14, outEyePos);
        return 1;
      }
    }
    return 0;
  }
  sentient = actor->sentient;
  if ( !sentient )
    return 0;
  *outTeam = sentient->eTeam;
  v10 = player->actor;
  *outSpeedSq = (float)((float)(v10->Physics.vVelocity.v[0] * v10->Physics.vVelocity.v[0]) + (float)(v10->Physics.vVelocity.v[1] * v10->Physics.vVelocity.v[1])) + (float)(v10->Physics.vVelocity.v[2] * v10->Physics.vVelocity.v[2]);
  v11 = player->actor;
  outEyePos->v[0] = v11->eyeInfo.pos.v[0];
  outEyePos->v[1] = v11->eyeInfo.pos.v[1];
  outEyePos->v[2] = v11->eyeInfo.pos.v[2];
  return 1;
}

/*
==============
G_Missile_PredictGrenadeLandPos
==============
*/
void G_Missile_PredictGrenadeLandPos(gentity_s *pGrenade)
{
  int predictLandTime; 
  int nextthink; 
  int clipmask; 
  int v5; 
  float v6; 
  int timeAtRest; 
  vec3_t outLandPos; 

  if ( !G_Missile_IsGrenade(pGrenade) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1522, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( pGrenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( pGrenade )") )
    __debugbreak();
  predictLandTime = pGrenade->c.missile.grenade.predictLandTime;
  if ( predictLandTime )
  {
    if ( level.time > predictLandTime )
    {
      pGrenade->c.missile.grenade.predictLandTime = level.time;
      pGrenade->c.mover.angle.pos1.v[0] = pGrenade->r.currentOrigin.v[0];
      pGrenade->c.mover.angle.pos1.v[1] = pGrenade->r.currentOrigin.v[1];
      pGrenade->c.mover.angle.pos1.v[2] = pGrenade->r.currentOrigin.v[2];
    }
  }
  else
  {
    nextthink = pGrenade->nextthink;
    clipmask = pGrenade->clipmask;
    pGrenade->clipmask = clipmask & 0xFDFFBFFF;
    v5 = G_Missile_PredictMissile(pGrenade, nextthink - level.time, &outLandPos, 1, &timeAtRest);
    pGrenade->c.missile.grenade.predictLandTime = timeAtRest;
    if ( v5 )
    {
      v6 = outLandPos.v[1];
      pGrenade->c.mover.angle.pos1.v[0] = outLandPos.v[0];
      pGrenade->c.mover.angle.pos1.v[2] = outLandPos.v[2];
      pGrenade->c.mover.angle.pos1.v[1] = v6;
    }
    else
    {
      pGrenade->c.mover.angle.pos1.v[0] = pGrenade->r.currentOrigin.v[0];
      pGrenade->c.mover.angle.pos1.v[1] = pGrenade->r.currentOrigin.v[1];
      pGrenade->c.mover.angle.pos1.v[2] = pGrenade->r.currentOrigin.v[2];
    }
    pGrenade->clipmask = clipmask;
  }
}

/*
==============
G_Missile_PredictMissile
==============
*/
__int64 G_Missile_PredictMissile(const gentity_s *ent, int duration, vec3_t *outLandPos, int allowBounce, int *timeAtRest)
{
  int v5; 
  bool inAltWeaponMode; 
  const Weapon *WeaponForEntity; 
  int lastHitCharacter; 
  int v10; 
  int v11; 
  int contentmask; 
  unsigned __int16 number; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned __int16 v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  GMissile *v21; 
  bool alwaysShatterGlassOnImpact; 
  int damage; 
  int time; 
  int ClipMask; 
  int v26; 
  const dvar_t *v27; 
  bool v28; 
  float v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  float v34; 
  vec3_t *v35; 
  float v36; 
  float v37; 
  __int64 passEntityNum; 
  __int64 passEntityNum2; 
  bool alwaysShatterOnImpact; 
  bool detailTrace; 
  bool v43; 
  int v46; 
  int timeDeltaMsec; 
  Weapon *r_weapon; 
  vec3_t trBase; 
  const WeaponDef *v50; 
  BgWeaponMap *weaponMap; 
  int *v52; 
  vec3_t *v53; 
  __int64 v54; 
  GEntityData v55; 
  vec3_t result; 
  vec3_t end; 
  vec3_t endpos; 
  vec3_t start; 
  trajectory_t_secure tr; 
  trace_t results; 
  GEntityMissileComponentData v62; 

  v54 = -2i64;
  v5 = allowBounce;
  v53 = outLandPos;
  v52 = timeAtRest;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1871, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  tr = ent->s.lerp.pos;
  BgTrajectory::LegacyEvaluateTrajectory(&tr, level.time, &result);
  *timeAtRest = ent->nextthink;
  inAltWeaponMode = ent->s.inAltWeaponMode;
  v43 = inAltWeaponMode;
  weaponMap = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, &ent->s);
  r_weapon = (Weapon *)WeaponForEntity;
  v50 = BG_WeaponDef(WeaponForEntity, inAltWeaponMode);
  if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1885, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  lastHitCharacter = ent->c.missile.lastHitCharacter;
  if ( lastHitCharacter )
  {
    v10 = lastHitCharacter - 1;
    if ( !G_IsEntityInUse(lastHitCharacter - 1) )
      v10 = 2047;
  }
  else
  {
    v10 = 2047;
  }
  v46 = v10;
  detailTrace = BG_WeaponRadiusDamageDetailTrace(WeaponForEntity, inAltWeaponMode);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  timeDeltaMsec = level.frameDuration;
  v11 = level.time + level.frameDuration;
  if ( level.time + level.frameDuration < level.time + duration )
  {
    while ( 1 )
    {
      BgTrajectory::LegacyEvaluateTrajectory(&tr, v11, &end);
      contentmask = ent->clipmask;
      number = ent->r.ownerNum.number;
      if ( !number )
        goto LABEL_45;
      v14 = number;
      v15 = number - 1;
      if ( v15 >= 0x800 )
      {
        LODWORD(passEntityNum2) = 2048;
        LODWORD(passEntityNum) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", passEntityNum, passEntityNum2) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v16 = v14 - 1;
      if ( g_entities[v16].r.isInUse != g_entityIsInUse[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v16] )
      {
        LODWORD(passEntityNum2) = ent->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", passEntityNum2) )
          __debugbreak();
      }
      v17 = ent->r.ownerNum.number;
      if ( v17 )
      {
        if ( (unsigned int)v17 - 1 >= 0x7FF )
        {
          LODWORD(passEntityNum2) = 2047;
          LODWORD(passEntityNum) = v17 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", passEntityNum, passEntityNum2) )
            __debugbreak();
        }
        v18 = ent->r.ownerNum.number;
        if ( (unsigned int)(v18 - 1) >= 0x800 )
        {
          LODWORD(passEntityNum2) = 2048;
          LODWORD(passEntityNum) = v18 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", passEntityNum, passEntityNum2) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v19 = v18 - 1;
        if ( g_entities[v19].r.isInUse != g_entityIsInUse[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v19] )
        {
          LODWORD(passEntityNum2) = ent->r.ownerNum.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", passEntityNum2) )
            __debugbreak();
        }
        v20 = (__int16)(ent->r.ownerNum.number - 1);
      }
      else
      {
LABEL_45:
        v20 = 2047;
      }
      G_Missile_Trace(ent, &results, &result, &end, &ent->r.box, v20, v10, contentmask, detailTrace);
      if ( results.startsolid )
        return 0i64;
      if ( Com_IsSurfaceTypeBreakableGlass(results.surfaceFlags) )
      {
        GEntityMissileComponentData::GEntityMissileComponentData(&v62, (gentity_s *)ent);
        GEntityData::GEntityData(&v55, (gentity_s *)ent, &v62);
        if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
          __debugbreak();
        v21 = GMissile::ms_gMissileSystem;
        if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1912, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
          __debugbreak();
        alwaysShatterGlassOnImpact = v50->alwaysShatterGlassOnImpact;
        damage = BG_GetDamage(WEAP_DMG_CALC_TYPE_DEFAULT, r_weapon, v43);
        time = level.time;
        ClipMask = BgEntityData::GetClipMask(&v55);
        alwaysShatterOnImpact = alwaysShatterGlassOnImpact;
        v26 = timeDeltaMsec;
        BgMissile::PenetrateGlass(v21, weaponMap, &v55, ClipMask, time, timeDeltaMsec, &results, &result, &end, damage, 1, alwaysShatterOnImpact);
        v62.__vftable = (GEntityMissileComponentData_vtbl *)&BgEntityComponentData::`vftable';
        v10 = v46;
      }
      else
      {
        v26 = timeDeltaMsec;
      }
      endpos.v[0] = (float)((float)(end.v[0] - result.v[0]) * results.fraction) + result.v[0];
      endpos.v[1] = (float)((float)(end.v[1] - result.v[1]) * results.fraction) + result.v[1];
      endpos.v[2] = (float)((float)(end.v[2] - result.v[2]) * results.fraction) + result.v[2];
      v62.BgEntityMissileComponentData = (BgEntityMissileComponentData)_xmm;
      v27 = DVARINT_g_debugBullets;
      if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      if ( v27->current.integer == 5 )
        G_DebugLineWithDuration(&result, &endpos, (const vec4_t *)&v62, 1, 1000);
      result = endpos;
      if ( BG_WeaponSticksToWalls(r_weapon, v43) )
        break;
      v28 = BG_WeaponSticksToFloors(r_weapon, v43);
      v29 = results.normal.v[2];
      if ( v28 && results.normal.v[2] > 0.69999999 )
        goto LABEL_73;
      if ( results.fraction == 1.0 || results.fraction < 1.0 && results.normal.v[2] > 0.69999999 )
      {
        start.v[0] = result.v[0];
        start.v[1] = result.v[1];
        end.v[0] = result.v[0];
        end.v[1] = result.v[1];
        start.v[2] = result.v[2] + 0.13500001;
        end.v[2] = result.v[2] - 1.5;
        v30 = ent->clipmask;
        if ( EntHandle::isDefined(&ent->r.ownerNum) )
          v31 = EntHandle::entnum(&ent->r.ownerNum);
        else
          v31 = 2047;
        G_Missile_Trace(ent, &results, &start, &end, &ent->r.box, v31, v10, v30, detailTrace);
        endpos.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
        endpos.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
        endpos.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
        if ( results.fraction == 1.0 )
          goto LABEL_85;
        Trajectory_GetTrBase(&tr, &trBase);
        trBase.v[2] = (float)((float)(endpos.v[2] + 1.5) - result.v[2]) + trBase.v[2];
        Trajectory_SetTrBase(&tr, &trBase);
        result.v[0] = endpos.v[0];
        result.v[1] = endpos.v[1];
        result.v[2] = endpos.v[2] + 1.5;
        memset(&trBase, 0, sizeof(trBase));
      }
LABEL_80:
      if ( results.fraction != 1.0 )
      {
        if ( (results.surfaceFlags & 4) != 0 )
          return 0i64;
        if ( !allowBounce || !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&ent->flags, ACTIVE, 0x12u) || (PredictBounceMissile(ent, &tr, &results, v11, v11 + (int)(float)((float)v26 * results.fraction) - v26, &result, &endpos), tr.trTime = v11, tr.trType == TR_STATIONARY) )
        {
          *v52 = v11;
LABEL_88:
          v5 = allowBounce;
          goto LABEL_89;
        }
      }
LABEL_85:
      v11 += v26;
      if ( v11 >= level.time + duration )
        goto LABEL_88;
    }
    v29 = results.normal.v[2];
LABEL_73:
    if ( results.fraction < 1.0 )
    {
      start.v[0] = (float)(0.13500001 * results.normal.v[0]) + result.v[0];
      start.v[1] = (float)(0.13500001 * results.normal.v[1]) + result.v[1];
      start.v[2] = (float)(v29 * 0.13500001) + result.v[2];
      end.v[0] = result.v[0] - (float)(1.5 * results.normal.v[0]);
      end.v[1] = result.v[1] - (float)(1.5 * results.normal.v[1]);
      end.v[2] = result.v[2] - (float)(v29 * 1.5);
      v32 = ent->clipmask;
      if ( EntHandle::isDefined(&ent->r.ownerNum) )
        v33 = EntHandle::entnum(&ent->r.ownerNum);
      else
        v33 = 2047;
      G_Missile_Trace(ent, &results, &start, &end, &ent->r.box, v33, v10, v32, detailTrace);
      endpos.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      endpos.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
      endpos.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
      if ( results.fraction == 1.0 )
        goto LABEL_85;
      if ( Trace_GetEntityHitId(&results) == 2046 )
      {
        result.v[0] = (float)(endpos.v[0] - end.v[0]) + endpos.v[0];
        result.v[1] = (float)(endpos.v[1] - end.v[1]) + endpos.v[1];
        result.v[2] = (float)(endpos.v[2] - end.v[2]) + endpos.v[2];
      }
    }
    goto LABEL_80;
  }
LABEL_89:
  v34 = result.v[0];
  v35 = v53;
  v53->v[0] = result.v[0];
  v36 = result.v[1];
  v35->v[1] = result.v[1];
  v37 = result.v[2];
  v35->v[2] = result.v[2];
  if ( ((LODWORD(v34) & 0x7F800000) == 2139095040 || (LODWORD(v36) & 0x7F800000) == 2139095040 || (LODWORD(v37) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2007, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outLandPos )[0] ) && !IS_NAN( ( outLandPos )[1] ) && !IS_NAN( ( outLandPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outLandPos )[0] ) && !IS_NAN( ( outLandPos )[1] ) && !IS_NAN( ( outLandPos )[2] )") )
    __debugbreak();
  if ( v5 && GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&ent->flags, ACTIVE, 0x12u) )
    return (unsigned int)ent->nextthink;
  else
    return (unsigned int)v11;
}

/*
==============
G_Missile_RunMissile
==============
*/
void G_Missile_RunMissile(gentity_s *ent)
{
  GMissile *v2; 
  int timeDeltaMsec; 
  int time; 
  int previousTime; 
  GWeaponMap *Instance; 
  GEntityMissileComponentData v7; 
  GEntityData v8; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1762, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808000, "Run Missile New");
  GEntityMissileComponentData::GEntityMissileComponentData(&v7, ent);
  GEntityData::GEntityData(&v8, ent, &v7);
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  v2 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1771, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  timeDeltaMsec = level.frameDuration;
  time = level.time;
  previousTime = level.previousTime;
  Instance = GWeaponMap::GetInstance();
  BgMissile::Tick(v2, Instance, &v8, previousTime, time, timeDeltaMsec);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Missile_SaveAttractors
==============
*/
void G_Missile_SaveAttractors(MemoryFile *memFile)
{
  AttractorGlobals *v2; 
  unsigned int i; 
  char *p_p; 
  unsigned __int64 v5; 
  MemoryFile *v6; 
  char p; 

  v2 = &attrGlob;
  for ( i = 0; i < 0x20; ++i )
  {
    p_p = &p;
    v5 = 1i64;
    v6 = memFile;
    if ( v2->attractors[0].inUse )
    {
      p = 1;
      MemFile_WriteData(memFile, 1ui64, &p);
      v5 = 28i64;
      v6 = memFile;
      p_p = (char *)&attrGlob.attractors[i].inUse;
    }
    else
    {
      p = 0;
    }
    MemFile_WriteData(v6, v5, p_p);
    v2 = (AttractorGlobals *)((char *)v2 + 28);
  }
}

/*
==============
G_Missile_SetPhaseStatus
==============
*/
void G_Missile_SetPhaseStatus(gentity_s *missile, gentity_s *owner, const gentity_s *rethrowEnt)
{
  unsigned int v5; 

  if ( !missile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2086, ASSERT_TYPE_ASSERT, "(missile)", (const char *)&queryFormat, "missile") )
    __debugbreak();
  if ( rethrowEnt && rethrowEnt->s.eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2087, ASSERT_TYPE_ASSERT, "(!rethrowEnt || (rethrowEnt->s.eType == ET_MISSILE))", (const char *)&queryFormat, "!rethrowEnt || (rethrowEnt->s.eType == ET_MISSILE)") )
    __debugbreak();
  v5 = missile->s.lerp.u.anonymous.data[4] & 0xFFFFFEFF;
  missile->s.lerp.u.anonymous.data[4] = v5;
  if ( rethrowEnt )
  {
    if ( (rethrowEnt->s.lerp.u.anonymous.data[4] & 0x100) != 0 )
      missile->s.lerp.u.anonymous.data[4] = v5 | 0x100;
  }
}

/*
==============
G_Missile_ShouldNotifyPlayer
==============
*/
char G_Missile_ShouldNotifyPlayer(const gentity_s *const missile, const gentity_s *const player, const WeaponEntityNotify *const entityNotify)
{
  float v3; 
  float v4; 
  actor_s *actor; 
  team_t eTeam; 
  float v10; 
  sentient_s *sentient; 
  float v12; 
  float v13; 
  gclient_s *client; 
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v16; 
  gentity_s *Attacker; 
  GUtils *Utils; 
  team_t v19; 
  int skipEntities[2]; 
  vec3_t outOrigin; 
  trace_t results; 

  v3 = player->r.currentOrigin.v[0] - missile->r.currentOrigin.v[0];
  v4 = player->r.currentOrigin.v[1] - missile->r.currentOrigin.v[1];
  if ( (float)((float)(v4 * v4) + (float)(v3 * v3)) > (float)(entityNotify->radius * entityNotify->radius) )
    return 0;
  actor = player->actor;
  eTeam = TEAM_ZERO;
  v10 = 0.0;
  if ( actor )
  {
    sentient = actor->sentient;
    if ( sentient )
    {
      v12 = actor->Physics.vVelocity.v[2];
      eTeam = sentient->eTeam;
      v13 = (float)(actor->Physics.vVelocity.v[0] * actor->Physics.vVelocity.v[0]) + (float)(actor->Physics.vVelocity.v[1] * actor->Physics.vVelocity.v[1]);
      outOrigin = actor->eyeInfo.pos;
      v10 = v13 + (float)(v12 * v12);
      goto LABEL_14;
    }
    return 1;
  }
  client = player->client;
  if ( client && ((client->flags & 1) != 0 || client->sess.sessionState) )
    return 1;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(player);
  v16 = EntityPlayerStateConst;
  if ( EntityPlayerStateConst )
  {
    if ( EntityPlayerStateConst->pm_type > 1u )
      return 1;
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    eTeam = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)player->s.number) + 12);
    v10 = (float)((float)(v16->velocity.v[0] * v16->velocity.v[0]) + (float)(v16->velocity.v[1] * v16->velocity.v[1])) + (float)(v16->velocity.v[2] * v16->velocity.v[2]);
    G_Client_GetEyePosition(v16, &outOrigin);
  }
LABEL_14:
  if ( entityNotify->minSpeed <= 0.0 || G_Execution_IsInExecution(player) || v10 >= (float)(entityNotify->minSpeed * entityNotify->minSpeed) )
  {
    if ( (entityNotify->flags & 1) == 0 || (Attacker = G_Missile_GetAttacker(missile), Attacker->s.number != player->s.number) && (level.teammode == TEAMMODE_FFA || (Utils = GUtils::GetUtils(), v19 = Utils->GetEntityTeam(Utils, Attacker), eTeam) && v19 && eTeam != v19) )
    {
      if ( (entityNotify->flags & 2) == 0 )
        return 1;
      skipEntities[0] = missile->s.number;
      skipEntities[1] = player->s.number;
      PhysicsQuery_LegacyTraceSkipEntities(PHYSICS_WORLD_ID_FIRST, &results, &outOrigin, &missile->r.currentOrigin, &bounds_origin, skipEntities, 2, 1, 41968017, 1, NULL, All);
      if ( results.fraction >= 1.0 )
        return 1;
    }
  }
  return 0;
}

/*
==============
G_Missile_ShouldNotifyVehicle
==============
*/
char G_Missile_ShouldNotifyVehicle(const gentity_s *const missileEntity, const gentity_s *const vehicleEntity, const WeaponEntityNotify *const entityNotify)
{
  Vehicle *vehicle; 
  float v7; 
  float v8; 
  gentity_s *Attacker; 
  gentity_s *v11; 
  GUtils *Utils; 
  team_t v13; 
  team_t v14; 
  double v15; 
  int skipEntities[2]; 
  vec3_t linearVelocity; 
  trace_t results; 

  if ( !missileEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2301, ASSERT_TYPE_ASSERT, "( missileEntity != nullptr )", (const char *)&queryFormat, "missileEntity != nullptr") )
    __debugbreak();
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2302, ASSERT_TYPE_ASSERT, "( vehicleEntity != nullptr )", (const char *)&queryFormat, "vehicleEntity != nullptr") )
    __debugbreak();
  vehicle = vehicleEntity->vehicle;
  if ( !vehicle )
    return 0;
  v7 = vehicleEntity->r.currentOrigin.v[0] - missileEntity->r.currentOrigin.v[0];
  v8 = vehicleEntity->r.currentOrigin.v[1] - missileEntity->r.currentOrigin.v[1];
  if ( (float)((float)(v8 * v8) + (float)(v7 * v7)) > (float)(entityNotify->radius * entityNotify->radius) )
    return 0;
  if ( entityNotify->minSpeed > 0.0 )
  {
    if ( BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
    {
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      GVehicles::PhysicsGetLinearVelocity(GVehicles::ms_gVehiclesSystem, vehicle->physicsVehicle, &linearVelocity);
      if ( (float)((float)((float)(linearVelocity.v[0] * linearVelocity.v[0]) + (float)(linearVelocity.v[1] * linearVelocity.v[1])) + (float)(linearVelocity.v[2] * linearVelocity.v[2])) < (float)(entityNotify->minSpeed * entityNotify->minSpeed) )
        return 0;
    }
    else if ( (float)((float)((float)(vehicle->phys.vel.v[0] * vehicle->phys.vel.v[0]) + (float)(vehicle->phys.vel.v[1] * vehicle->phys.vel.v[1])) + (float)(vehicle->phys.vel.v[2] * vehicle->phys.vel.v[2])) < (float)(entityNotify->minSpeed * entityNotify->minSpeed) )
    {
      return 0;
    }
  }
  if ( (entityNotify->flags & 1) != 0 )
  {
    if ( !EntHandle::isDefined(&vehicleEntity->r.ownerNum) )
      return 0;
    Attacker = G_Missile_GetAttacker(missileEntity);
    v11 = EntHandle::ent(&vehicleEntity->r.ownerNum);
    if ( Attacker->s.number == v11->s.number )
      return 0;
    if ( level.teammode != TEAMMODE_FFA )
    {
      Utils = GUtils::GetUtils();
      v13 = Utils->GetEntityTeam(Utils, Attacker);
      v14 = Utils->GetEntityTeam(Utils, v11);
      if ( v13 == TEAM_ZERO || v14 == TEAM_ZERO || v13 == v14 )
        return 0;
    }
  }
  if ( (entityNotify->flags & 2) != 0 )
  {
    v15 = *(double *)vehicleEntity->r.currentOrigin.v;
    skipEntities[0] = missileEntity->s.number;
    skipEntities[1] = vehicleEntity->s.number;
    linearVelocity.v[2] = vehicleEntity->r.currentOrigin.v[2];
    *(double *)linearVelocity.v = v15;
    if ( !G_Utils_DObjGetWorldTagPos(vehicleEntity, scr_const.tag_camera, &linearVelocity) && !G_Utils_DObjGetWorldTagPos(vehicleEntity, scr_const.tag_player, &linearVelocity) )
      G_Utils_DObjGetWorldTagPos(vehicleEntity, scr_const.tag_body, &linearVelocity);
    PhysicsQuery_LegacyTraceSkipEntities(PHYSICS_WORLD_ID_FIRST, &results, &linearVelocity, &missileEntity->r.currentOrigin, &bounds_origin, skipEntities, 2, 1, 41968017, 1, NULL, All);
    if ( results.fraction < 1.0 )
      return 0;
  }
  return 1;
}

/*
==============
G_Missile_TimedObjectThink
==============
*/
void G_Missile_TimedObjectThink(gentity_s *ent)
{
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Bu);
}

/*
==============
G_Missile_Trace
==============
*/
void G_Missile_Trace(const gentity_s *missileEnt, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int passEntityNum2, int contentmask, bool detailTrace)
{
  __int128 v9; 
  __int128 v10; 
  int number; 
  team_t skipTeamCharacters; 
  EntHandle *p_ownerNum; 
  GUtils *Utils; 
  team_t (__fastcall *GetEntityTeam)(GUtils *, const gentity_s *); 
  gentity_s *v19; 
  float v20; 
  float v21; 
  __int128 v22; 
  float v23; 
  float v24; 
  __int64 EntityHitId; 
  gentity_s *v29; 
  unsigned int eType; 
  int v31; 
  gentity_s *GEntity; 
  unsigned __int8 surfType; 
  int *skipEntities; 
  __int64 skipEntityCount; 
  int v36[4]; 
  __int128 v37; 
  __int128 v38; 

  if ( end->v[0] == start->v[0] && end->v[1] == start->v[1] && end->v[2] == start->v[2] )
  {
    memset_0(&results->position, 0, 0x54ui64);
    results->fraction = 1.0;
  }
  else
  {
    number = 2047;
    v37 = v10;
    skipTeamCharacters = TEAM_ZERO;
    if ( missileEnt )
    {
      number = missileEnt->s.number;
      p_ownerNum = &missileEnt->r.ownerNum;
      if ( EntHandle::isDefined(&missileEnt->r.ownerNum) )
      {
        Utils = GUtils::GetUtils();
        if ( !Utils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 302, ASSERT_TYPE_ASSERT, "(utils)", (const char *)&queryFormat, "utils") )
          __debugbreak();
        GetEntityTeam = Utils->GetEntityTeam;
        v19 = EntHandle::ent(p_ownerNum);
        skipTeamCharacters = GetEntityTeam(Utils, v19);
      }
    }
    v36[0] = passEntityNum;
    v36[1] = passEntityNum2;
    PhysicsQuery_LegacyGrenadeTrace(results, start, end, bounds, number, v36, 2, skipTeamCharacters, contentmask, All, detailTrace, PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_SERVER_DETAIL);
    if ( results->startsolid )
    {
      results->fraction = 0.0;
      v20 = start->v[0] - end->v[0];
      v22 = LODWORD(start->v[1]);
      v21 = start->v[1] - end->v[1];
      v23 = start->v[2];
      v38 = v9;
      v24 = v23 - end->v[2];
      *(float *)&v22 = fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v24 * v24));
      _XMM3 = v22;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
      }
      results->normal.v[0] = v20 * (float)(1.0 / *(float *)&_XMM0);
      results->normal.v[2] = v24 * (float)(1.0 / *(float *)&_XMM0);
      results->normal.v[1] = v21 * (float)(1.0 / *(float *)&_XMM0);
    }
    if ( results->fraction < 1.0 )
    {
      EntityHitId = Trace_GetEntityHitId(results);
      if ( (unsigned int)EntityHitId >= 0x800 )
      {
        LODWORD(skipEntityCount) = 2048;
        LODWORD(skipEntities) = EntityHitId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( ( 2048 ) )", "id doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntities, skipEntityCount) )
          __debugbreak();
      }
      v29 = &g_entities[EntityHitId];
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = (unsigned __int16)v29->s.eType;
      if ( (unsigned __int16)eType <= 0x15u )
      {
        v31 = 3014662;
        if ( _bittest(&v31, eType) )
        {
          GEntity = G_GetGEntity(results->hitId);
          surfType = GEntity->s.surfType;
          if ( surfType >= 0x40u )
          {
            LODWORD(skipEntityCount) = 64;
            LODWORD(skipEntities) = surfType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 324, ASSERT_TYPE_ASSERT, "(unsigned)( hitEnt->s.surfType ) < (unsigned)( 64 )", "hitEnt->s.surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", skipEntities, skipEntityCount) )
              __debugbreak();
          }
          results->surfaceFlags = (GEntity->s.surfType & 0x3F) << 19;
        }
      }
    }
  }
}

/*
==============
GMissile::GetDamageCalcType
==============
*/
__int64 GMissile::GetDamageCalcType(GMissile *this, entityState_t *missileOwnerEnt, entityState_t *hitEnt)
{
  gentity_s *v5; 
  gentity_s *v6; 
  char v7; 
  char v8; 
  char v9; 
  char v10; 

  if ( !missileOwnerEnt || !hitEnt || missileOwnerEnt->number >= 0x7FFu || hitEnt->number >= 0x7FFu || !G_IsEntityInUse(missileOwnerEnt->number) || !G_IsEntityInUse(hitEnt->number) )
    return 0i64;
  v5 = &g_entities[missileOwnerEnt->number];
  if ( v5->s.eType == ET_TURRET && EntHandle::isDefined(&v5->r.ownerNum) )
    v5 = EntHandle::ent(&v5->r.ownerNum);
  v6 = &g_entities[hitEnt->number];
  if ( G_Utils_IsActor(v5) || Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && v5->agent && SV_Agent_IsScripted(v5->s.number) )
  {
    v7 = 1;
    goto LABEL_17;
  }
  v7 = 0;
  if ( !v5->client )
  {
LABEL_17:
    v8 = 0;
    goto LABEL_18;
  }
  v8 = 1;
LABEL_18:
  if ( v6 && v6->client )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( v6 && (G_Utils_IsActor(v6) || Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && v6->agent && SV_Agent_IsScripted(v6->s.number)) )
    {
      v10 = 1;
      goto LABEL_22;
    }
  }
  v10 = 0;
LABEL_22:
  if ( v8 && v10 )
    return 1i64;
  if ( v7 && v9 )
    return 2i64;
  return 0i64;
}

/*
==============
GMissile::GetDoorAngle
==============
*/
float GMissile::GetDoorAngle(GMissile *this, BgEntityData *entityData)
{
  BgEntityComponents *Components; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3368, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3371, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  return ScriptableSv_GetInstanceCommonContext(Components->missile.doorScriptableIndex)->angles.v[1];
}

/*
==============
GMissile::GetEntityState
==============
*/
gentity_s *GMissile::GetEntityState(GMissile *this, const int entNum)
{
  __int64 v2; 
  int v5; 

  v2 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v5 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3275, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v5) )
      __debugbreak();
  }
  if ( (_DWORD)v2 == 2047 || !G_IsEntityInUse(v2) )
    return 0i64;
  else
    return &g_entities[v2];
}

/*
==============
GMissile::GetEntityTransform
==============
*/
char GMissile::GetEntityTransform(GMissile *this, const int entNum, vec3_t *outOrigin, vec3_t *outAngles)
{
  gentity_s *v4; 

  if ( (unsigned int)entNum > 0x7FF )
    return 0;
  v4 = &g_entities[entNum];
  *outOrigin = v4->r.currentOrigin;
  *outAngles = v4->r.currentAngles;
  return 1;
}

/*
==============
GMissile::GetExtraSkipEntityForTraces
==============
*/
__int64 GMissile::GetExtraSkipEntityForTraces(GMissile *this, const BgEntityData *entityData)
{
  return 2047i64;
}

/*
==============
GMissile::GetMeansOfDeath
==============
*/
__int64 GMissile::GetMeansOfDeath(GMissile *this, const BgEntityData *entityData)
{
  const gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2823, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2828, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return (unsigned int)G_Main_GetEntHandlerList(Entity)->methodOfDeath;
}

/*
==============
GMissile::GetMissileEntities
==============
*/
bitarray<2048> *GMissile::GetMissileEntities()
{
  return &g_missileEntities;
}

/*
==============
GMissile::GetMissileEventEntities
==============
*/
bitarray<2048> *GMissile::GetMissileEventEntities()
{
  return &g_missileEventEntities;
}

/*
==============
GMissile::GetPhysicsDetailWorldId
==============
*/
__int64 GMissile::GetPhysicsDetailWorldId(GMissile *this)
{
  return 1i64;
}

/*
==============
GMissile::GetPhysicsMainWorldId
==============
*/
__int64 GMissile::GetPhysicsMainWorldId(GMissile *this)
{
  return 0i64;
}

/*
==============
GMissile::GetPlayerState
==============
*/
playerState_s *GMissile::GetPlayerState(GMissile *this, const int entNum)
{
  __int64 v2; 
  int v5; 

  v2 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v5 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3635, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v5) )
      __debugbreak();
  }
  return G_GetEntityPlayerState(&g_entities[v2]);
}

/*
==============
GMissile::GetScaledProjectileSpeed
==============
*/
void GMissile::GetScaledProjectileSpeed(GMissile *this, const int attackerEntNum, const Weapon *r_weapon, bool isAlternate, int *outSpeed, int *outSpeedUp)
{
  __int64 v6; 
  const gentity_s *v9; 
  int *v10; 
  int *v11; 
  __int64 v12; 
  __int64 v13; 
  float outSpeedScale; 

  v6 = attackerEntNum;
  if ( (unsigned int)attackerEntNum >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4135, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attackerEntNum, 2048) )
      __debugbreak();
    LODWORD(v13) = 2048;
    LODWORD(v12) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4137, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( attackerEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( attackerEntNum )") )
    __debugbreak();
  v9 = &g_entities[v6];
  v10 = outSpeed;
  if ( !outSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 171, ASSERT_TYPE_ASSERT, "(outSpeed)", (const char *)&queryFormat, "outSpeed") )
    __debugbreak();
  v11 = outSpeedUp;
  if ( !outSpeedUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 172, ASSERT_TYPE_ASSERT, "(outSpeedUp)", (const char *)&queryFormat, "outSpeedUp") )
    __debugbreak();
  BG_GetProjectileSpeed(r_weapon, isAlternate, v10, v11);
  G_Missile_GetScriptSpeedScale(v9, r_weapon, isAlternate, &outSpeedScale, (float *)&outSpeed);
  *v10 = (int)(float)((float)*v10 * outSpeedScale);
  *v11 = (int)(float)((float)*v11 * *(float *)&outSpeed);
}

/*
==============
GMissile::GetSplashMethodOfDeath
==============
*/
__int64 GMissile::GetSplashMethodOfDeath(GMissile *this, const BgEntityData *entityData)
{
  const gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2838, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2843, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return GetSplashMethodOfDeath(Entity);
}

/*
==============
GMissile::GlassDestroyPiece
==============
*/
void GMissile::GlassDestroyPiece(GMissile *this, unsigned int pieceIndex, const vec3_t *damagePos, const vec3_t *damageDir)
{
  G_Glass_DestroyPiece(pieceIndex, damagePos, damageDir);
}

/*
==============
GMissile::GlassRestorePiece
==============
*/
void GMissile::GlassRestorePiece(GMissile *this, unsigned int pieceIndex, unsigned __int16 health)
{
  G_Glass_RestorePiece(pieceIndex, health);
}

/*
==============
GMissile::GlassTempDestroyPiece
==============
*/
unsigned __int16 GMissile::GlassTempDestroyPiece(GMissile *this, unsigned int pieceIndex)
{
  return G_Glass_TempDestroyPiece(pieceIndex);
}

/*
==============
GMissile::GrenadeLauncherFire
==============
*/
void GMissile::GrenadeLauncherFire(GMissile *this, const int creatorEntNum, const int gameTime, const Weapon *r_grenade, const PlayerHandIndex hand, const BgWeaponParms *wp)
{
  __int64 v6; 
  __int64 v10; 
  int v11; 
  __int64 v12; 

  v6 = creatorEntNum;
  if ( (unsigned int)creatorEntNum >= 0x800 )
  {
    v11 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4115, ASSERT_TYPE_ASSERT, "(unsigned)( creatorEntNum ) < (unsigned)( ( 2048 ) )", "creatorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", creatorEntNum, v11) )
      __debugbreak();
    LODWORD(v12) = 2048;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4116, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( creatorEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( creatorEntNum )") )
    __debugbreak();
  G_Weapon_GrenadeLauncher_Fire(&g_entities[v6], r_grenade, hand, gameTime, wp);
}

/*
==============
GMissile::InitGrenadePlatformTracking
==============
*/
void GMissile::InitGrenadePlatformTracking(GMissile *this, BgEntityData *entityData, const int parentEntNum)
{
  __int64 v3; 
  gentity_s *Entity; 
  gentity_s *v6; 
  __int64 v7; 

  v3 = parentEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3676, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3680, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v6 = NULL;
  if ( (_DWORD)v3 != 2047 )
  {
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3685, ASSERT_TYPE_ASSERT, "(unsigned)( parentEntNum ) < (unsigned)( ( 2048 ) )", "parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
        __debugbreak();
    }
    v6 = &g_entities[v3];
  }
  GMovingPlatformEntityTracking::InitPlatformTracking(&Entity->movingPlatformTrack, Entity, v6);
}

/*
==============
GMissile::InitGrenadeSetAntiLagOffset
==============
*/
void GMissile::InitGrenadeSetAntiLagOffset(GMissile *this, BgEntityData *entityData, const int parentEntNum, const int serverTime)
{
  __int64 v4; 
  gentity_s *Entity; 
  gentity_s *v7; 
  gclient_s *client; 
  int lastServerTime; 
  gagent_s *agent; 
  __int64 v11; 

  v4 = parentEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3645, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  if ( GAntiLag::ms_gAntiLagData->m_performMissileAntiLag )
  {
    Entity = GEntityData::GetEntity((GEntityData *)entityData);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3653, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( (_DWORD)v4 != 2047 )
    {
      if ( (unsigned int)v4 >= 0x800 )
      {
        LODWORD(v11) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3658, ASSERT_TYPE_ASSERT, "(unsigned)( parentEntNum ) < (unsigned)( ( 2048 ) )", "parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, 2048) )
          __debugbreak();
      }
      v7 = &g_entities[v4];
      if ( v7 )
      {
        client = v7->client;
        if ( client )
        {
          lastServerTime = client->lastServerTime;
        }
        else
        {
          agent = v7->agent;
          if ( !agent )
            return;
          lastServerTime = agent->lastServerTime;
        }
        Entity->c.missile.antilagTimeOffset = lastServerTime - level.time;
      }
    }
  }
}

/*
==============
GMissile::InitGrenadeTimer
==============
*/
void GMissile::InitGrenadeTimer(GMissile *this, BgEntityData *entityData, const int parentEntNum, const Weapon *r_weapon, const bool isAlternate, const int serverTime, const int time)
{
  __int64 v7; 
  gentity_s *Entity; 
  gentity_s *v11; 
  bool v12; 
  bool v13; 
  BgWeaponHandle *client; 
  gagent_s *agent; 
  GWeaponMap *Instance; 
  gagent_s *v17; 
  int grenadeTimeLeft; 
  int nextthink; 
  int v20; 
  __int64 v21; 

  v7 = parentEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3695, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3699, ASSERT_TYPE_ASSERT, "( grenade )", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  v11 = NULL;
  if ( (_DWORD)v7 != 2047 )
  {
    if ( (unsigned int)v7 >= 0x800 )
    {
      LODWORD(v21) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3704, ASSERT_TYPE_ASSERT, "(unsigned)( parentEntNum ) < (unsigned)( ( 2048 ) )", "parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, 2048) )
        __debugbreak();
    }
    v11 = &g_entities[v7];
  }
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3713, ASSERT_TYPE_ASSERT, "(grenade)", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  BG_WeaponDef(r_weapon, isAlternate);
  if ( !BG_ProjectileActivateDist(r_weapon, isAlternate) || time > 0 )
  {
    v12 = BG_TimedDetonation(r_weapon, isAlternate);
    v13 = v12;
    if ( v11 )
    {
      client = (BgWeaponHandle *)v11->client;
      if ( client && !v12 && client[339].m_mapEntryId - 28 > 1 )
      {
        client[30].m_mapEntryId = 0;
        goto LABEL_36;
      }
      agent = v11->agent;
      if ( agent && !v13 )
      {
        agent->playerState.grenadeTimeLeft = 0;
        goto LABEL_36;
      }
      if ( client && client[30].m_mapEntryId )
      {
        Instance = GWeaponMap::GetInstance();
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( BgWeaponMap::GetWeapon(Instance, client[445])->weaponIdx == r_weapon->weaponIdx )
        {
          Entity->nextthink = serverTime + BG_GetHeldGrenadeFuse(r_weapon, isAlternate, &v11->client->ps);
          v11->client->ps.grenadeTimeLeft = 0;
          goto LABEL_36;
        }
      }
      v17 = v11->agent;
      if ( v17 )
      {
        grenadeTimeLeft = v17->playerState.grenadeTimeLeft;
        if ( grenadeTimeLeft )
        {
          Entity->nextthink = grenadeTimeLeft + serverTime;
          v11->agent->playerState.grenadeTimeLeft = 0;
          goto LABEL_36;
        }
      }
    }
    Entity->nextthink = serverTime + time;
  }
LABEL_36:
  if ( Entity->handler != 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3749, ASSERT_TYPE_ASSERT, "(grenade->handler == ENT_HANDLER_GRENADE)", (const char *)&queryFormat, "grenade->handler == ENT_HANDLER_GRENADE") )
    __debugbreak();
  nextthink = Entity->nextthink;
  Entity->c.item[0].clipAmmoCount[1] = serverTime;
  if ( !nextthink )
  {
    v20 = (int)(float)(G_Missile_GenerateRandomLifeTime(r_weapon, isAlternate, Entity->s.number) * 1000.0);
    if ( !v20 )
      v20 = 30000;
    nextthink = serverTime + v20;
    Entity->nextthink = nextthink;
  }
  if ( nextthink > serverTime + 60000 )
    Entity->nextthink = serverTime + 60000;
}

/*
==============
GMissile::IsDebugTextEnabled
==============
*/
__int64 GMissile::IsDebugTextEnabled(GMissile *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_missileDebugText;
  if ( !DVARBOOL_missileDebugText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileDebugText") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
GMissile::IsEntityClient
==============
*/
bool GMissile::IsEntityClient(GMissile *this, const int entNum)
{
  __int64 v2; 

  v2 = entNum;
  if ( entNum == 2047 )
    return 0;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3565, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  return g_entities[v2].client != NULL;
}

/*
==============
GMissile::IsEntityClientOrActorOrAgent
==============
*/
bool GMissile::IsEntityClientOrActorOrAgent(GMissile *this, const int entNum)
{
  __int64 v2; 
  gentity_s *v3; 

  v2 = entNum;
  if ( entNum == 2047 )
    return 0;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3578, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v3 = &g_entities[v2];
  return v3->client || v3->actor || v3->agent;
}

/*
==============
GMissile::IsMissileEventType
==============
*/
bool GMissile::IsMissileEventType(entityType_s eventType)
{
  int v1; 
  bool result; 

  result = (unsigned __int16)(eventType - 136) <= 0xDu && (v1 = 9039, _bittest(&v1, (__int16)(eventType - 136))) || eventType == 229;
  return result;
}

/*
==============
GMissile::IsScriptableEntity
==============
*/
bool GMissile::IsScriptableEntity(GMissile *this, const int entNum)
{
  __int64 v2; 
  int v5; 

  v2 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v5 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2743, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v5) )
      __debugbreak();
  }
  return ScriptableSv_GetScriptableIndexForEntity(&g_entities[v2]) != -1;
}

/*
==============
GMissile::KeepPointInPlayableBounds
==============
*/
void GMissile::KeepPointInPlayableBounds(GMissile *this, vec3_t *origin)
{
  SV_Game_KeepPointInPlayableBounds(origin);
}

/*
==============
GMissile::LinkEntity
==============
*/
void GMissile::LinkEntity(GMissile *this, const int entNum)
{
  __int64 v2; 
  int v4; 

  v2 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v4 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2751, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v4) )
      __debugbreak();
  }
  SV_LinkEntity(&g_entities[v2]);
}

/*
==============
GMissile::LinkTo
==============
*/
bool GMissile::LinkTo(GMissile *this, BgEntityData *entityData, const int parentEntNum, scr_string_t tagName, int errorMessageSize, char *outErrorMessage)
{
  __int64 v6; 
  gentity_s *Entity; 
  __int64 v11; 

  v6 = parentEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3535, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3539, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0x7FE )
  {
    LODWORD(v11) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3541, ASSERT_TYPE_ASSERT, "(unsigned)( parentEntNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "parentEntNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v11, 2046) )
      __debugbreak();
  }
  return G_EntLinkTo(Entity, &g_entities[v6], tagName, errorMessageSize, outErrorMessage) == 1;
}

/*
==============
GMissile::LinkedSimulate
==============
*/
void GMissile::LinkedSimulate(GMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime)
{
  gentity_s *Entity; 
  const vec3_t *p_currentOrigin; 
  const dvar_t *v7; 
  vec3_t start; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2647, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2652, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  p_currentOrigin = &Entity->r.currentOrigin;
  start = Entity->r.currentOrigin;
  G_GeneralLink(Entity);
  G_Main_RunThink(Entity);
  v7 = DCONST_DVARBOOL_bg_missileDebugDraw;
  if ( !DCONST_DVARBOOL_bg_missileDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    G_DebugLineWithDuration(&start, p_currentOrigin, &colorWhite, 1, 1000);
}

/*
==============
GMissile::MissileTrajectoryClientControlled
==============
*/
void GMissile::MissileTrajectoryClientControlled(GMissile *this, const BgWeaponMap *weaponMap, const int simulationTime, const int timeDeltaMsec, BgEntityData *entityData, vec3_t *result)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3477, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  MissileTrajectoryClientControlled(Entity, result);
}

/*
==============
Missile_ApplyAttractorsRepulsors
==============
*/
void Missile_ApplyAttractorsRepulsors(gentity_s *missile)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  float v4; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  __int128 v10; 
  __int128 v12; 
  float v13; 
  float v14; 
  double FrameDurationInSeconds; 
  float *v16; 
  __int64 v17; 
  unsigned __int16 v18; 
  float v19; 
  float v20; 
  float v21; 
  __int64 v22; 
  gentity_s *v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  float v31; 
  __int128 v35; 
  __int128 v36; 
  float v37; 
  float v38; 
  char v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  __int128 v44; 
  __int128 v50; 
  __int128 v52; 
  __int128 v53; 
  float v54; 
  float v55; 
  float v56; 
  float v60; 
  float v61; 
  __int64 v62; 
  __int64 v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  vec3_t trBase; 
  int projectileSpeed; 
  float v70; 
  int projectileSpeedUp; 
  __int64 v72; 
  vec3_t vec; 

  v72 = -2i64;
  if ( !missile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1374, ASSERT_TYPE_ASSERT, "( missile )", (const char *)&queryFormat, "missile") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &missile->s);
  BG_GetProjectileSpeed(WeaponForEntity, missile->s.inAltWeaponMode, &projectileSpeed, &projectileSpeedUp);
  v4 = missile->s.lerp.pos.trDelta.v[1];
  v5 = LODWORD(missile->s.lerp.pos.trDelta.v[0]);
  v6 = missile->s.lerp.pos.trDelta.v[2];
  v7 = v5;
  *(float *)&v7 = fsqrt((float)((float)(*(float *)&v5 * *(float *)&v5) + (float)(v4 * v4)) + (float)(v6 * v6));
  _XMM6 = v7;
  v70 = *(float *)&v7;
  __asm { vcmpless xmm0, xmm6, xmm13 }
  v10 = LODWORD(FLOAT_1_0);
  __asm { vblendvps xmm1, xmm6, xmm11, xmm0 }
  vec.v[0] = *(float *)&v5 * (float)(1.0 / *(float *)&_XMM1);
  vec.v[1] = v4 * (float)(1.0 / *(float *)&_XMM1);
  vec.v[2] = v6 * (float)(1.0 / *(float *)&_XMM1);
  if ( *(float *)&v7 >= 0.0000099999997 )
  {
    v12 = 0i64;
    v64 = 0.0;
    v13 = 0.0;
    v65 = 0.0;
    v14 = 0.0;
    v66 = 0.0;
    FrameDurationInSeconds = G_Level_GetFrameDurationInSeconds();
    v67 = *(float *)&FrameDurationInSeconds;
    v16 = &attrGlob.attractors[0].origin.v[2];
    v17 = 32i64;
    while ( 1 )
    {
      if ( !*((_BYTE *)v16 - 16) || *((_WORD *)v16 - 6) != 2047 && (!EntHandle::isDefined(&missile->parent) || *((unsigned __int16 *)v16 - 6) != EntHandle::entnum(&missile->parent)) )
        goto LABEL_56;
      v18 = *((_WORD *)v16 - 7);
      if ( v18 == 2047 )
      {
        v19 = *(v16 - 2);
        v20 = *(v16 - 1);
        v21 = *v16;
      }
      else
      {
        if ( v18 >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1408, ASSERT_TYPE_ASSERT, "( attrGlob.attractors[attractorIndex].entnum < ( 2048 ) )", (const char *)&queryFormat, "attrGlob.attractors[attractorIndex].entnum < MAX_GENTITIES") )
          __debugbreak();
        v22 = *((unsigned __int16 *)v16 - 7);
        v23 = &g_entities[v22];
        if ( (unsigned int)v22 >= 0x800 )
        {
          LODWORD(v63) = 2048;
          LODWORD(v62) = *((unsigned __int16 *)v16 - 7);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v62, v63) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[(int)v22].r.isInUse != g_entityIsInUse[(int)v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[(int)v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1410, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( attrGlob.attractors[attractorIndex].entnum ) )", (const char *)&queryFormat, "G_IsEntityInUse( attrGlob.attractors[attractorIndex].entnum )") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&v23->flags, ACTIVE, 0x14u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1411, ASSERT_TYPE_ASSERT, "( ent->flags.TestFlag( BgEntityFlagsCommon::MISSILE_ATTRACTOR_OR_REPULSOR ) )", (const char *)&queryFormat, "ent->flags.TestFlag( BgEntityFlagsCommon::MISSILE_ATTRACTOR_OR_REPULSOR )") )
          __debugbreak();
        v19 = v23->r.currentOrigin.v[0];
        v20 = v23->r.currentOrigin.v[1];
        v21 = v23->r.currentOrigin.v[2];
      }
      Trajectory_GetTrBase(&missile->s.lerp.pos, &trBase);
      v24 = v19 - trBase.v[0];
      v25 = v20 - trBase.v[1];
      v26 = v21 - trBase.v[2];
      v27 = (float)((float)(vec.v[1] * (float)(v20 - trBase.v[1])) + (float)(vec.v[0] * (float)(v19 - trBase.v[0]))) + (float)(vec.v[2] * v26);
      if ( v27 > 0.0 )
        break;
      v12 = LODWORD(v64);
      v13 = v65;
      v14 = v66;
LABEL_55:
      memset(&trBase, 0, sizeof(trBase));
LABEL_56:
      v16 += 7;
      if ( !--v17 )
      {
        if ( *(float *)&v12 != 0.0 || v13 != 0.0 || v14 != 0.0 )
        {
          v53 = v12;
          v54 = (float)(*(float *)&v12 * v67) + missile->s.lerp.pos.trDelta.v[0];
          missile->s.lerp.pos.trDelta.v[0] = v54;
          v55 = (float)(v13 * v67) + missile->s.lerp.pos.trDelta.v[1];
          missile->s.lerp.pos.trDelta.v[1] = v55;
          v56 = (float)(v14 * v67) + missile->s.lerp.pos.trDelta.v[2];
          *(float *)&v53 = fsqrt((float)((float)(v54 * v54) + (float)(v55 * v55)) + (float)(v56 * v56));
          _XMM3 = v53;
          __asm
          {
            vcmpless xmm0, xmm3, xmm13
            vblendvps xmm0, xmm3, xmm11, xmm0
          }
          vec.v[0] = v54 * (float)(*(float *)&v10 / *(float *)&_XMM0);
          *(float *)&_XMM3 = (float)(*(float *)&v10 / *(float *)&_XMM0) * v55;
          vec.v[1] = *(float *)&_XMM3;
          v60 = (float)(*(float *)&v10 / *(float *)&_XMM0) * v56;
          vec.v[2] = v60;
          v61 = v70;
          missile->s.lerp.pos.trDelta.v[0] = vec.v[0] * v70;
          missile->s.lerp.pos.trDelta.v[1] = *(float *)&_XMM3 * v61;
          missile->s.lerp.pos.trDelta.v[2] = v60 * v61;
          vectoangles(&vec, &missile->s.lerp.apos.trBase);
          if ( missile->s.lerp.pos.trType == TR_LINEAR )
            Trajectory_SetTrBase(&missile->s.lerp.pos, &missile->r.currentOrigin);
          missile->s.lerp.pos.trType = TR_INTERPOLATE;
          missile->s.lerp.apos.trType = TR_INTERPOLATE;
        }
        return;
      }
    }
    v28 = (float)(vec.v[0] * COERCE_FLOAT(LODWORD(v27) ^ _xmm)) + v24;
    v29 = LODWORD(vec.v[1]);
    v30 = (float)(vec.v[1] * COERCE_FLOAT(LODWORD(v27) ^ _xmm)) + v25;
    v31 = (float)(vec.v[2] * COERCE_FLOAT(LODWORD(v27) ^ _xmm)) + v26;
    *(float *)&v29 = fsqrt((float)((float)(v30 * v30) + (float)(v28 * v28)) + (float)(v31 * v31));
    _XMM7 = v29;
    __asm
    {
      vcmpless xmm0, xmm7, xmm13
      vblendvps xmm1, xmm7, xmm11, xmm0
    }
    v35 = v10;
    *(float *)&v35 = (float)(*(float *)&v10 / *(float *)&_XMM1) * v28;
    v36 = v35;
    v37 = (float)(*(float *)&v10 / *(float *)&_XMM1) * v30;
    v38 = (float)(*(float *)&v10 / *(float *)&_XMM1) * v31;
    v39 = *((_BYTE *)v16 - 15);
    if ( *(float *)&_XMM7 >= 0.0000099999997 )
    {
      v40 = FLOAT_N1_0;
    }
    else
    {
      if ( v39 )
        goto LABEL_35;
      v36 = 0i64;
      v37 = 0.0;
      v40 = FLOAT_N1_0;
      v38 = FLOAT_N1_0;
    }
    if ( !v39 && v38 > 0.0 )
    {
      v36 = 0i64;
      v37 = 0.0;
      v38 = v40;
      LODWORD(_XMM7) = 0;
    }
    v41 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26));
    v42 = v16[2];
    if ( v41 <= v42 )
    {
      if ( v42 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1444, ASSERT_TYPE_ASSERT, "(attrGlob.attractors[attractorIndex].maxDist > 0)", (const char *)&queryFormat, "attrGlob.attractors[attractorIndex].maxDist > 0") )
        __debugbreak();
      v43 = v16[1] - (float)((float)(v16[1] / v16[2]) * v41);
      if ( v27 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1447, ASSERT_TYPE_ASSERT, "(forwardDist > 0)", (const char *)&queryFormat, "forwardDist > 0") )
        __debugbreak();
      if ( *(float *)&_XMM7 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1448, ASSERT_TYPE_ASSERT, "(perpDist >= 0)", (const char *)&queryFormat, "perpDist >= 0") )
        __debugbreak();
      v44 = LODWORD(FLOAT_1_0);
      *(float *)&v44 = atanf_0((float)(1.0 / v27) * *(float *)&_XMM7) * 0.63661975;
      _XMM4 = v44;
      _XMM0 = *((unsigned __int8 *)v16 - 15);
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm4, xmm3, xmm2
      }
      *(float *)&_XMM5 = v43 * *(float *)&_XMM1;
      if ( *((_BYTE *)v16 - 15) )
      {
        v50 = 0i64;
        *(float *)&v50 = (float)((float)((float)projectileSpeed * *(float *)&_XMM7) * (float)(1.0 / v27)) / v67;
        _XMM3 = v50;
        __asm { vminss  xmm5, xmm3, xmm5 }
      }
      v52 = v36;
      *(float *)&v52 = (float)(*(float *)&v36 * *(float *)&_XMM5) + v64;
      v12 = v52;
      v64 = *(float *)&v52;
      v13 = (float)(v37 * *(float *)&_XMM5) + v65;
      v65 = v13;
      v14 = (float)(v38 * *(float *)&_XMM5) + v66;
      v66 = v14;
      goto LABEL_54;
    }
LABEL_35:
    v12 = LODWORD(v64);
    v13 = v65;
    v14 = v66;
LABEL_54:
    v10 = LODWORD(FLOAT_1_0);
    goto LABEL_55;
  }
}

/*
==============
Missile_GetFreeAttractor
==============
*/
__int64 Missile_GetFreeAttractor(scrContext_t *scrContext)
{
  AttractorGlobals *v2; 
  unsigned int v3; 
  const char *v4; 

  v2 = &attrGlob;
  v3 = 0;
  while ( v2->attractors[0].inUse )
  {
    if ( !v2->attractors[1].inUse )
    {
      ++v3;
      break;
    }
    if ( !v2->attractors[2].inUse )
    {
      v3 += 2;
      break;
    }
    if ( !v2->attractors[3].inUse )
    {
      v3 += 3;
      break;
    }
    v2 = (AttractorGlobals *)((char *)v2 + 112);
    v3 += 4;
    if ( v3 >= 0x20 )
      break;
  }
  if ( v3 == 32 )
  {
    v4 = j_va("Ran out of attractor/repulsors.  Max allowed: %zu", 0x20ui64);
    Scr_Error(COM_ERR_1929, scrContext, v4);
  }
  return v3;
}

/*
==============
GMissile::MovingPlatformAttemptGrenadeLink
==============
*/
void GMissile::MovingPlatformAttemptGrenadeLink(GMissile *this, BgEntityData *entityData, const trace_t *impact)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3315, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3319, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  GMovingPlatformEntityTracking::AttemptGrenadeLink(&Entity->movingPlatformTrack, Entity, impact);
}

/*
==============
GMissile::NotifyRadiusDamage
==============
*/
void GMissile::NotifyRadiusDamage(GMissile *this, const vec3_t *damageOrigin, float damageRadius, const int attackerEntNum, const Weapon *r_weapon, bool isAlternate)
{
  __int64 v6; 
  gentity_s *v7; 

  v6 = attackerEntNum;
  v7 = NULL;
  if ( attackerEntNum != 2047 )
  {
    if ( (unsigned int)attackerEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3010, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attackerEntNum, 2048) )
      __debugbreak();
    v7 = &g_entities[v6];
  }
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  ((void (__fastcall *)(GCombat *, const vec3_t *, GCombat_vtbl *, gentity_s *))GCombat::ms_gCombatSystem->NotifyRadiusDamage)(GCombat::ms_gCombatSystem, damageOrigin, GCombat::ms_gCombatSystem->__vftable, v7);
}

/*
==============
GMissile::OnImpact
==============
*/
void GMissile::OnImpact(GMissile *this, BgEntityData *entityData, const int hitEntNum)
{
  __int64 v3; 
  entityState_t *EntityState; 
  gentity_s *v6; 
  __int64 v7; 

  v3 = hitEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3142, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3145, ASSERT_TYPE_ASSERT, "( es )", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( (_DWORD)v3 != 2047 )
  {
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3152, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntNum ) < (unsigned)( ( 2048 ) )", "hitEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
        __debugbreak();
    }
    v6 = &g_entities[v3];
    if ( v6->client )
    {
      GScr_AddEntity(v6);
      GScr_Notify(&g_entities[EntityState->number], scr_const.projectile_impact_player, 1u);
    }
  }
}

/*
==============
GMissile::PostSimulate
==============
*/
void GMissile::PostSimulate(GMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const bool restoreAntiLag)
{
  gentity_s *Entity; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v9; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2694, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2699, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( Entity->s.eType == ET_MISSILE )
  {
    WeaponForEntity = BG_GetWeaponForEntity(weaponMap, &Entity->s);
    v9 = BG_WeaponDef(WeaponForEntity, Entity->s.inAltWeaponMode);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2706, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    if ( (unsigned int)(v9->weapClass - 7) > 1 )
      GMovingPlatformEntityTracking::UpdatePlatformTrackingState(&Entity->movingPlatformTrack, Entity, 0);
  }
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  if ( restoreAntiLag )
    GAntiLag::ms_gAntiLagData->RestorePositions(GAntiLag::ms_gAntiLagData, Entity, "Missile");
}

/*
==============
GMissile::PreSimulate
==============
*/
void GMissile::PreSimulate(GMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, bool *outRestoreAntiLag)
{
  gentity_s *Entity; 
  const Weapon *WeaponForEntity; 
  bool v9; 
  _BOOL8 v10; 
  unsigned int v11; 
  GAntiLag *v12; 
  BOOL fmt; 
  BOOL v14; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2668, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !outRestoreAntiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2669, ASSERT_TYPE_ASSERT, "( outRestoreAntiLag )", (const char *)&queryFormat, "outRestoreAntiLag") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2674, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, &Entity->s);
  v9 = BG_GetWeaponClass(WeaponForEntity, Entity->s.inAltWeaponMode) == WEAPCLASS_THROWINGKNIFE;
  v11 = Entity->c.missile.antilagTimeOffset + level.time;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v12 = GAntiLag::ms_gAntiLagData;
  if ( v9 && GAntiLag::ms_gAntiLagData->m_performMissileAntiLag )
  {
    *outRestoreAntiLag = 1;
    LOBYTE(v10) = 1;
    LOBYTE(v14) = 1;
    LOBYTE(fmt) = 1;
    v12->RewindPositions(v12, v11, Entity, v10, fmt, v14, "Missile");
  }
}

/*
==============
PredictBounceMissile
==============
*/
void PredictBounceMissile(const gentity_s *ent, trajectory_t_secure *pos, trace_t *trace, int time, int velocityTime, const vec3_t *origin, const vec3_t *endpos)
{
  GMissile *v10; 
  const Weapon *WeaponForEntity; 
  WeaponDef *v12; 
  int v13; 
  const dvar_t *v14; 
  float value; 
  float v16; 
  unsigned __int16 EntityHitId; 
  float v18; 
  __int128 v20; 
  bool inAltWeaponMode; 
  WeaponDef *weapDef; 
  vec3_t trBase; 
  BgWeaponMap *weaponMap; 
  __int64 v29; 
  GEntityMissileComponentData v30; 
  GEntityData v31; 
  vec3_t velocity; 
  vec3_t outRollSlideDir; 

  v29 = -2i64;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1799, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  v10 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1802, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
    __debugbreak();
  weaponMap = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, &ent->s);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1806, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx != 0 )", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  inAltWeaponMode = ent->s.inAltWeaponMode;
  v12 = (WeaponDef *)BG_WeaponDef(WeaponForEntity, inAltWeaponMode);
  weapDef = v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1811, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v13 = (trace->surfaceFlags >> 19) & 0x3F;
  velocity = pos->trDelta;
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) )
  {
    v14 = DVARFLT_bg_gravity;
    if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    value = v14->current.value;
    v12 = weapDef;
  }
  else
  {
    value = FLOAT_800_0;
  }
  velocity.v[2] = velocity.v[2] - (float)((float)((float)(velocityTime - pos->trTime) * value) * 0.001);
  LODWORD(v16) = COERCE_UNSIGNED_INT64(BgMissile::GrenadeBounceMirrorVelocity(v10, &velocity, &trace->normal, v12, &pos->trDelta));
  if ( GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&ent->flags, ACTIVE, 0x12u) && ((GEntityMissileComponentData::GEntityMissileComponentData(&v30, (gentity_s *)ent), GEntityData::GEntityData(&v31, (gentity_s *)ent, &v30), BgMissile::IsGrenade(v10, weaponMap, &v31)) && (EntityHitId = Trace_GetEntityHitId(trace), BgMissile::GrenadeBounceVelocity(v10, &velocity, v16, &trace->normal, v13, v12, pos, (float *)&weapDef, &outRollSlideDir, EntityHitId)) || BgMissile::MissileShouldStopAtImpact(v10, WeaponForEntity, inAltWeaponMode, trace, &pos->trDelta, &v31)) )
  {
    Trajectory_SetTrBase(pos, endpos);
    *(_QWORD *)&pos->trType = 0i64;
    pos->trDuration = 0;
    *(_QWORD *)pos->trDelta.v = 0i64;
    pos->trDelta.v[2] = 0.0;
  }
  else
  {
    v18 = 0.1 * trace->normal.v[1];
    v20 = LODWORD(FLOAT_0_1);
    *(float *)&v20 = 0.1 * trace->normal.v[2];
    _XMM3 = v20;
    _XMM1 = 0i64;
    __asm
    {
      vcmpltss xmm0, xmm1, xmm3
      vblendvps xmm2, xmm3, xmm1, xmm0
    }
    trBase.v[0] = (float)(0.1 * trace->normal.v[0]) + origin->v[0];
    trBase.v[1] = v18 + origin->v[1];
    trBase.v[2] = *(float *)&_XMM2 + origin->v[2];
    Trajectory_SetTrBase(pos, &trBase);
    pos->trTime = time;
    memset(&trBase, 0, sizeof(trBase));
  }
}

/*
==============
GMissile::ProjectileImpactRemoteEyesNotify
==============
*/
void GMissile::ProjectileImpactRemoteEyesNotify(GMissile *this, const int entNum, const Weapon *weapon, const vec3_t *pos)
{
  __int64 v4; 
  scrContext_t *v7; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3110, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v7 = ScriptContext_Server();
  Scr_AddVector(v7, pos->v);
  GScr_Weapon_AddParam(v7, weapon, 0);
  GScr_Notify(&g_entities[v4], scr_const.predicted_projectile_impact, 2u);
}

/*
==============
GMissile::ProjectileImpactSplashNotify
==============
*/
void GMissile::ProjectileImpactSplashNotify(GMissile *this, const int entNum, const Weapon *weapon, const vec3_t *pos, const int explosionRadius, const int hitEntNum)
{
  __int64 v6; 
  scrContext_t *v9; 
  int v11; 

  v6 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v11 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3121, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v11) )
      __debugbreak();
  }
  v9 = ScriptContext_Server();
  if ( hitEntNum == 2047 || !G_IsEntityInUse(hitEntNum) )
    Scr_AddUndefined(v9);
  else
    GScr_AddEntity(&g_entities[hitEntNum]);
  Scr_AddInt(v9, explosionRadius);
  Scr_AddVector(v9, pos->v);
  GScr_Weapon_AddParam(v9, weapon, 0);
  GScr_Notify(&g_entities[v6], scr_const.projectile_impact, 4u);
}

/*
==============
GMissile::RadiusDamage
==============
*/
void GMissile::RadiusDamage(GMissile *this, const vec3_t *origin, const int inflictorEntNum, const int attackerEntNum, const BgExplosionDamageRangeInfo *damageRangeInfo, float coneAngleCos, const vec3_t *coneDirection, const int ignoreEntNum, meansOfDeath_t mod, const Weapon *r_weapon, bool isAlternate)
{
  __int64 v11; 
  __int64 v13; 
  gentity_s *v14; 
  gentity_s *v15; 
  gentity_s *v16; 
  __int64 v17; 
  __int64 v19; 
  int v20; 
  char v22; 
  char v23; 

  v11 = inflictorEntNum;
  v13 = attackerEntNum;
  if ( (unsigned int)inflictorEntNum >= 0x800 )
  {
    v20 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3021, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( 2048 ) )", "inflictorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", inflictorEntNum, v20) )
      __debugbreak();
  }
  if ( (unsigned int)v13 >= 0x800 )
  {
    LODWORD(v19) = 2048;
    LODWORD(v17) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3022, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, v19) )
      __debugbreak();
  }
  v14 = &g_entities[v11];
  if ( v14->s.eType != ET_MISSILE || (v14->c.missile.flags & 0x4000) == 0 )
  {
    v15 = &g_entities[v13];
    if ( v15->s.eType != ET_MISSILE || (v15->c.missile.flags & 0x4000) == 0 )
    {
      v16 = NULL;
      if ( ignoreEntNum != 2047 )
        v16 = &g_entities[ignoreEntNum];
      if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
        __debugbreak();
      v23 = 1;
      v22 = 0;
      ((void (__fastcall *)(GCombat *, const vec3_t *, gentity_s *, gentity_s *, const BgExplosionDamageRangeInfo *, _DWORD, const vec3_t *, gentity_s *, meansOfDeath_t, const Weapon *, bool, char, char))GCombat::ms_gCombatSystem->RadiusDamage)(GCombat::ms_gCombatSystem, origin, v14, v15, damageRangeInfo, LODWORD(coneAngleCos), coneDirection, v16, mod, r_weapon, isAlternate, v22, v23);
    }
  }
}

/*
==============
GMissile::RegisterMissileEntity
==============
*/
void GMissile::RegisterMissileEntity(const __int16 entityNum)
{
  bitarray_base<bitarray<2048>>::setBit(&g_missileEntities, entityNum);
}

/*
==============
GMissile::RegisterMissileEventEntity
==============
*/
void GMissile::RegisterMissileEventEntity(const __int16 entityNum)
{
  bitarray_base<bitarray<2048>>::setBit(&g_missileEventEntities, entityNum);
}

/*
==============
GMissile::RocketLauncherFire
==============
*/
void GMissile::RocketLauncherFire(GMissile *this, const int creatorEntNum, const int gameTime, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const float spread, const BgWeaponParms *wp, const vec3_t *gunVel, const BgMissileFireParms *fireParms, bool magicBullet)
{
  __int64 v11; 
  BgWeaponParms *v15; 
  int v16; 
  vec3_t *v17; 

  v11 = creatorEntNum;
  if ( (unsigned int)creatorEntNum >= 0x800 )
  {
    v16 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4125, ASSERT_TYPE_ASSERT, "(unsigned)( creatorEntNum ) < (unsigned)( ( 2048 ) )", "creatorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", creatorEntNum, v16) )
      __debugbreak();
    LODWORD(v17) = 2048;
    LODWORD(v15) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4126, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( creatorEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( creatorEntNum )") )
    __debugbreak();
  G_Weapon_RocketLauncher_Fire(&g_entities[v11], r_weapon, isAlternate, hand, spread, wp, gunVel, gameTime, fireParms, magicBullet);
}

/*
==============
RunMissile_BroadcastActorEvents
==============
*/
void RunMissile_BroadcastActorEvents(gentity_s *missile)
{
  const GEntityHandlerList *EntHandlerList; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v5; 
  int predictLandTime; 
  int clipmask; 
  int nextthink; 
  int v9; 
  float v10; 
  int time; 
  const bitarray<224> *v12; 
  const bitarray<224> *AllTeamFlags; 
  int timeAtRest; 
  vec3_t outLandPos; 

  if ( !missile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1552, ASSERT_TYPE_ASSERT, "( missile )", (const char *)&queryFormat, "missile") )
    __debugbreak();
  EntHandlerList = G_Main_GetEntHandlerList(missile);
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &missile->s);
  v5 = BG_WeaponDef(WeaponForEntity, missile->s.inAltWeaponMode);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1559, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !G_Missile_IsGrenade(missile) || EntHandlerList->methodOfDeath != MOD_GRENADE || v5->offhandClass == OFFHAND_CLASS_OTHER )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
    else
      AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    Actor_BroadcastPointEvent(missile, AI_EV_PROJECTILE_PING, AllTeamFlags, &missile->r.currentOrigin);
    return;
  }
  if ( !G_Missile_IsGrenade(missile) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1522, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( pGrenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( pGrenade )") )
    __debugbreak();
  predictLandTime = missile->c.missile.grenade.predictLandTime;
  if ( predictLandTime )
  {
    time = level.time;
    if ( level.time <= predictLandTime )
      goto LABEL_21;
    missile->c.missile.grenade.predictLandTime = level.time;
    missile->c.mover.angle.pos1.v[0] = missile->r.currentOrigin.v[0];
    missile->c.mover.angle.pos1.v[1] = missile->r.currentOrigin.v[1];
    missile->c.mover.angle.pos1.v[2] = missile->r.currentOrigin.v[2];
  }
  else
  {
    clipmask = missile->clipmask;
    nextthink = missile->nextthink;
    missile->clipmask = clipmask & 0xFDFFBFFF;
    v9 = G_Missile_PredictMissile(missile, nextthink - level.time, &outLandPos, 1, &timeAtRest);
    missile->c.missile.grenade.predictLandTime = timeAtRest;
    if ( v9 )
    {
      v10 = outLandPos.v[1];
      missile->c.mover.angle.pos1.v[0] = outLandPos.v[0];
      missile->c.mover.angle.pos1.v[2] = outLandPos.v[2];
      missile->c.mover.angle.pos1.v[1] = v10;
    }
    else
    {
      missile->c.mover.angle.pos1.v[0] = missile->r.currentOrigin.v[0];
      missile->c.mover.angle.pos1.v[1] = missile->r.currentOrigin.v[1];
      missile->c.mover.angle.pos1.v[2] = missile->r.currentOrigin.v[2];
    }
    missile->clipmask = clipmask;
  }
  time = level.time;
LABEL_21:
  if ( time - missile->c.item[0].ammoCount >= 250 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      v12 = Com_TeamsSP_GetAllTeamFlags();
    else
      v12 = Com_TeamsMP_GetAllTeamFlags();
    Actor_BroadcastPointEvent(missile, AI_EV_GRENADE_PING, v12, &missile->r.currentOrigin);
    missile->c.item[0].ammoCount = level.time;
  }
}

/*
==============
GMissile::RunThink
==============
*/
void GMissile::RunThink(GMissile *this, BgEntityData *entityData)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2930, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2935, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_Main_RunThink(Entity);
}

/*
==============
Scr_MissileCreateAttractorEnt
==============
*/
void Scr_MissileCreateAttractorEnt(scrContext_t *scrContext)
{
  unsigned int FreeAttractor; 
  __int64 v3; 
  gentity_s *Entity; 
  double Float; 
  double v6; 
  gentity_s *v7; 
  unsigned __int16 v8; 

  FreeAttractor = Missile_GetFreeAttractor(scrContext);
  v3 = FreeAttractor;
  attrGlob.attractors[v3].isAttractor = 1;
  Entity = GScr_GetEntity(0);
  Float = Scr_GetFloat(scrContext, 1u);
  attrGlob.attractors[v3].strength = *(float *)&Float;
  v6 = Scr_GetFloat(scrContext, 2u);
  attrGlob.attractors[v3].maxDist = *(float *)&v6;
  if ( *(float *)&v6 <= 0.0 )
    Scr_ParamError(COM_ERR_1930, scrContext, 2u, "maxDist must be greater than zero");
  attrGlob.attractors[v3].entnum = truncate_cast<unsigned short,int>(Entity->s.number);
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::SetFlagInternal(&Entity->flags, ACTIVE, 0x14u);
  if ( Scr_GetNumParam(scrContext) <= 3 )
  {
    v8 = 2047;
  }
  else
  {
    v7 = GScr_GetEntity(3u);
    v8 = truncate_cast<unsigned short,int>(v7->s.number);
  }
  attrGlob.attractors[v3].attacker = v8;
  attrGlob.attractors[v3].inUse = 1;
  Scr_AddInt(scrContext, FreeAttractor);
}

/*
==============
Scr_MissileCreateAttractorOrigin
==============
*/
void Scr_MissileCreateAttractorOrigin(scrContext_t *scrContext)
{
  unsigned int FreeAttractor; 
  __int64 v3; 
  unsigned __int16 v4; 
  double Float; 
  double v6; 
  gentity_s *Entity; 

  FreeAttractor = Missile_GetFreeAttractor(scrContext);
  v3 = FreeAttractor;
  v4 = 2047;
  attrGlob.attractors[v3].isAttractor = 1;
  attrGlob.attractors[v3].entnum = 2047;
  Scr_GetVector(scrContext, 0, &attrGlob.attractors[v3].origin);
  Float = Scr_GetFloat(scrContext, 1u);
  attrGlob.attractors[v3].strength = *(float *)&Float;
  v6 = Scr_GetFloat(scrContext, 2u);
  attrGlob.attractors[v3].maxDist = *(float *)&v6;
  if ( *(float *)&v6 <= 0.0 )
    Scr_ParamError(COM_ERR_1931, scrContext, 2u, "maxDist must be greater than zero");
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    Entity = GScr_GetEntity(3u);
    v4 = truncate_cast<unsigned short,int>(Entity->s.number);
  }
  attrGlob.attractors[v3].attacker = v4;
  attrGlob.attractors[v3].inUse = 1;
  Scr_AddInt(scrContext, FreeAttractor);
}

/*
==============
Scr_MissileCreateRepulsorEnt
==============
*/
void Scr_MissileCreateRepulsorEnt(scrContext_t *scrContext)
{
  unsigned int FreeAttractor; 
  __int64 v3; 
  gentity_s *Entity; 
  double Float; 
  double v6; 
  gentity_s *v7; 
  unsigned __int16 v8; 

  FreeAttractor = Missile_GetFreeAttractor(scrContext);
  v3 = FreeAttractor;
  attrGlob.attractors[v3].isAttractor = 0;
  Entity = GScr_GetEntity(0);
  attrGlob.attractors[v3].entnum = truncate_cast<unsigned short,int>(Entity->s.number);
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::SetFlagInternal(&Entity->flags, ACTIVE, 0x14u);
  Float = Scr_GetFloat(scrContext, 1u);
  attrGlob.attractors[v3].strength = *(float *)&Float;
  v6 = Scr_GetFloat(scrContext, 2u);
  attrGlob.attractors[v3].maxDist = *(float *)&v6;
  if ( *(float *)&v6 <= 0.0 )
    Scr_ParamError(COM_ERR_1932, scrContext, 2u, "maxDist must be greater than zero");
  if ( Scr_GetNumParam(scrContext) <= 3 )
  {
    v8 = 2047;
  }
  else
  {
    v7 = GScr_GetEntity(3u);
    v8 = truncate_cast<unsigned short,int>(v7->s.number);
  }
  attrGlob.attractors[v3].attacker = v8;
  attrGlob.attractors[v3].inUse = 1;
  Scr_AddInt(scrContext, FreeAttractor);
}

/*
==============
Scr_MissileCreateRepulsorOrigin
==============
*/
void Scr_MissileCreateRepulsorOrigin(scrContext_t *scrContext)
{
  unsigned int FreeAttractor; 
  __int64 v3; 
  unsigned __int16 v4; 
  double Float; 
  double v6; 
  gentity_s *Entity; 

  FreeAttractor = Missile_GetFreeAttractor(scrContext);
  v3 = FreeAttractor;
  v4 = 2047;
  attrGlob.attractors[v3].isAttractor = 0;
  attrGlob.attractors[v3].entnum = 2047;
  Scr_GetVector(scrContext, 0, &attrGlob.attractors[v3].origin);
  Float = Scr_GetFloat(scrContext, 1u);
  attrGlob.attractors[v3].strength = *(float *)&Float;
  v6 = Scr_GetFloat(scrContext, 2u);
  attrGlob.attractors[v3].maxDist = *(float *)&v6;
  if ( *(float *)&v6 <= 0.0 )
    Scr_ParamError(COM_ERR_1933, scrContext, 2u, "maxDist must be greater than zero");
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    Entity = GScr_GetEntity(3u);
    v4 = truncate_cast<unsigned short,int>(Entity->s.number);
  }
  attrGlob.attractors[v3].attacker = v4;
  attrGlob.attractors[v3].inUse = 1;
  Scr_AddInt(scrContext, FreeAttractor);
}

/*
==============
Scr_MissileDeleteAttractor
==============
*/
void Scr_MissileDeleteAttractor(scrContext_t *scrContext)
{
  unsigned int Int; 
  __int64 v3; 
  AttractorRepulsor_t *v4; 

  Int = Scr_GetInt(scrContext, 0);
  v3 = Int;
  if ( Int >= 0x20 )
    Scr_ParamError(COM_ERR_1934, scrContext, 0, "Invalid attractor or repulsor");
  v4 = &attrGlob.attractors[v3];
  *(_QWORD *)&v4->inUse = 0i64;
  *(_QWORD *)v4->origin.v = 0i64;
  *(_QWORD *)&v4->origin.z = 0i64;
  v4->maxDist = 0.0;
}

/*
==============
GMissile::ScriptableIsDoor
==============
*/
bool GMissile::ScriptableIsDoor(GMissile *this, unsigned int scriptableIndex)
{
  return G_Door_ScriptableIsDoor(scriptableIndex);
}

/*
==============
GMissile::SetEntityAngles
==============
*/
bool GMissile::SetEntityAngles(GMissile *this, BgEntityData *entityData, const vec3_t *angles, const bool warpPhysics, const bool updateBroadphase)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3511, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3515, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return G_SetAngle(Entity, angles, warpPhysics, updateBroadphase);
}

/*
==============
GMissile::SetEntityFlag
==============
*/
void GMissile::SetEntityFlag(GMissile *this, const int entNum, BgEntityFlagsCommon flag)
{
  __int64 v3; 
  int v6; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3611, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v6) )
      __debugbreak();
  }
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::SetFlagInternal(&g_entities[v3].flags, ACTIVE, flag);
}

/*
==============
GMissile::SetEntityFlag
==============
*/
void GMissile::SetEntityFlag(GMissile *this, const int entNum, BgEntityFlagsMP flag)
{
  __int64 v3; 
  int v6; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3627, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v6) )
      __debugbreak();
  }
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::SetFlagInternal(&g_entities[v3].flags, GameModeFlagValues::ms_mpValue, flag);
}

/*
==============
GMissile::SetEntityFlag
==============
*/
void GMissile::SetEntityFlag(GMissile *this, const int entNum, BgEntityFlagsSP flag)
{
  __int64 v3; 
  int v6; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3619, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v6) )
      __debugbreak();
  }
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::SetFlagInternal(&g_entities[v3].flags, GameModeFlagValues::ms_spValue, flag);
}

/*
==============
GMissile::SetEntityNextThink
==============
*/
void GMissile::SetEntityNextThink(GMissile *this, BgEntityData *entityData, const int nextThinkTime)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3487, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( Entity )
  {
    Entity->nextthink = nextThinkTime;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3491, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    MEMORY[0x1B4] = nextThinkTime;
  }
}

/*
==============
GMissile::SetEntityOrigin
==============
*/
bool GMissile::SetEntityOrigin(GMissile *this, BgEntityData *entityData, const vec3_t *origin, const bool warpPhysics, const bool updateBroadphase)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3499, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3503, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return G_SetOrigin(Entity, origin, warpPhysics, updateBroadphase);
}

/*
==============
GMissile::SetEntityOriginAndAngles
==============
*/
bool GMissile::SetEntityOriginAndAngles(GMissile *this, BgEntityData *entityData, const vec3_t *origin, const vec3_t *angles, const bool warpPhysics, const bool updateBroadphase)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3523, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3527, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return G_SetOriginAndAngle(Entity, origin, angles, warpPhysics, updateBroadphase);
}

/*
==============
GMissile::SpawnMissileEntity
==============
*/
void GMissile::SpawnMissileEntity(GMissile *this, const int parentEntNum, const Weapon *r_grenadeWeapon, const bool isAlternate, const bool isRocket, const int serverTime, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  gentity_s *v12; 
  scr_string_t *p_classname; 
  scr_string_t rocket; 
  const playerState_s *v15; 
  GWeaponMap *Instance; 
  GPredictedEntitySystem *v17; 
  const dvar_t *v18; 
  GEntityMissileComponentData v19; 
  GEntityData v20; 
  __int64 v21; 

  v21 = -2i64;
  if ( !outEntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3769, ASSERT_TYPE_ASSERT, "(outEntityData)", (const char *)&queryFormat, "outEntityData") )
    __debugbreak();
  if ( !outComponentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3770, ASSERT_TYPE_ASSERT, "(outComponentData)", (const char *)&queryFormat, "outComponentData") )
    __debugbreak();
  v12 = G_Utils_SpawnEntity();
  p_classname = &v12->classname;
  if ( isRocket )
  {
    Scr_SetString(p_classname, scr_const.rocket);
    rocket = scr_const.rocket;
  }
  else
  {
    Scr_SetString(p_classname, scr_const.grenade);
    rocket = scr_const.grenade;
  }
  Scr_SetString(&v12->script_classname, rocket);
  v15 = this->GetPlayerState(this, (unsigned int)parentEntNum);
  Instance = GWeaponMap::GetInstance();
  if ( BgMissile::ShouldBePredicted(Instance, v15, r_grenadeWeapon, isAlternate) )
  {
    if ( !GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 39, ASSERT_TYPE_ASSERT, "( ms_gSystem )", (const char *)&queryFormat, "ms_gSystem") )
      __debugbreak();
    v17 = GPredictedEntitySystem::ms_gSystem;
    if ( !GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3789, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    BgPredictedEntitySystem::SetPredictionKey(v17, v15, serverTime, (unsigned int *)&v12->s.lerp.u);
    v18 = DCONST_DVARBOOL_bg_missileDebugDraw;
    if ( !DCONST_DVARBOOL_bg_missileDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileDebugDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
      Com_Printf(15, "SERVER: Creating missile entity %d with server time: %d\n", (unsigned int)v12->s.number, (unsigned int)serverTime);
  }
  GEntityMissileComponentData::GEntityMissileComponentData(&v19, v12);
  GEntityData::GEntityData(&v20, v12, &v19);
  outEntityData->m_origin = v20.m_origin;
  outEntityData->m_angles = v20.m_angles;
  outEntityData->m_box = v20.m_box;
  outEntityData->m_clipMask = v20.m_clipMask;
  outEntityData->m_parentEntNum = v20.m_parentEntNum;
  outEntityData->m_ownerEntNum = v20.m_ownerEntNum;
  outEntityData->m_entityState = v20.m_entityState;
  outEntityData->m_flags = v20.m_flags;
  outEntityData->m_components = v20.m_components;
  outEntityData->m_componentData = v20.m_componentData;
  outEntityData->m_handler = v20.m_handler;
  outEntityData[1].__vftable = (BgEntityData_vtbl *)v20.m_ent;
  LODWORD(outComponentData[1].__vftable) = v19.m_missileTargetEnt;
  outComponentData[2].__vftable = (BgEntityComponentData_vtbl *)v19.m_ent;
  BgEntityData::SetComponentData(outEntityData, outComponentData);
  bitarray_base<bitarray<2048>>::setBit(&g_missileEntities, v12->s.number);
}

/*
==============
GMissile::StuckNotify
==============
*/
void GMissile::StuckNotify(GMissile *this, BgEntityData *entityData, const int hitEntNum, scr_string_t partName, const unsigned int surfaceFlags, const vec3_t *vel, const vec3_t *pos, const vec3_t *normal)
{
  __int64 v8; 
  const gentity_s *Entity; 
  scrContext_t *v12; 
  const char *v13; 
  const char *v14; 

  v8 = hitEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3209, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3213, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v12 = ScriptContext_Server();
  Scr_AddVector(v12, normal->v);
  Scr_AddVector(v12, pos->v);
  Scr_AddVector(v12, vel->v);
  if ( ((surfaceFlags >> 19) & 0x3F) != 0 )
  {
    v13 = Com_SurfaceTypeToName((surfaceFlags >> 19) & 0x3F);
    Scr_AddString(v12, v13);
  }
  else
  {
    Scr_AddUndefined(v12);
  }
  if ( partName )
  {
    v14 = SL_ConvertToString(partName);
    Scr_AddString(v12, v14);
  }
  else
  {
    Scr_AddUndefined(v12);
  }
  if ( (unsigned int)(v8 - 2046) <= 1 )
    Scr_AddUndefined(v12);
  else
    GScr_AddEntity(&g_entities[v8]);
  GScr_Notify(Entity, scr_const.missile_stuck, 6u);
}

/*
==============
GMissile::TestEntityFlag
==============
*/
bool GMissile::TestEntityFlag(GMissile *this, const int entNum, BgEntityFlagsCommon flag)
{
  __int64 v3; 
  int v7; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v7 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3588, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v7) )
      __debugbreak();
  }
  return GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&g_entities[v3].flags, ACTIVE, flag);
}

/*
==============
GMissile::TestEntityFlag
==============
*/
bool GMissile::TestEntityFlag(GMissile *this, const int entNum, BgEntityFlagsMP flag)
{
  __int64 v3; 
  int v7; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v7 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3603, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v7) )
      __debugbreak();
  }
  return GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&g_entities[v3].flags, GameModeFlagValues::ms_mpValue, flag);
}

/*
==============
GMissile::TestEntityFlag
==============
*/
bool GMissile::TestEntityFlag(GMissile *this, const int entNum, BgEntityFlagsSP flag)
{
  __int64 v3; 
  int v7; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v7 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3595, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v7) )
      __debugbreak();
  }
  return GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&g_entities[v3].flags, GameModeFlagValues::ms_spValue, flag);
}

/*
==============
GMissile::ThrowGrenade
==============
*/
void GMissile::ThrowGrenade(GMissile *this, const int creatorEntNum, const int gameTime, const BgWeaponParms *wp)
{
  __int64 v4; 
  __int64 v8; 
  int v9; 
  __int64 v10; 

  v4 = creatorEntNum;
  if ( (unsigned int)creatorEntNum >= 0x800 )
  {
    v9 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4105, ASSERT_TYPE_ASSERT, "(unsigned)( creatorEntNum ) < (unsigned)( ( 2048 ) )", "creatorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", creatorEntNum, v9) )
      __debugbreak();
    LODWORD(v10) = 2048;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4106, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( creatorEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( creatorEntNum )") )
    __debugbreak();
  G_Weapon_ThrowGrenade(&g_entities[v4], gameTime, wp);
}

/*
==============
GMissile::TriggerDamageCheckHit
==============
*/
void GMissile::TriggerDamageCheckHit(GMissile *this, const int activatorEntNum, bool isFirstTrace, const vec3_t *vStart, const vec3_t *vEnd, int iDamage, int iMOD)
{
  int v10; 

  if ( activatorEntNum != 2047 && (unsigned int)activatorEntNum >= 0x800 )
  {
    v10 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2907, ASSERT_TYPE_ASSERT, "(unsigned)( activatorEntNum ) < (unsigned)( ( 2048 ) )", "activatorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", activatorEntNum, v10) )
      __debugbreak();
  }
  G_Trigger_DamageCheckHit(PHYSICS_WORLD_ID_SERVER_DETAIL, g_entities + 2046, isFirstTrace, vStart, vEnd, iDamage, iMOD);
}

/*
==============
GMissile::TriggerDamageGrenadeTouch
==============
*/
void GMissile::TriggerDamageGrenadeTouch(GMissile *this, const int activatorEntNum, const vec3_t *vStart, const vec3_t *vEnd, int iDamage)
{
  __int64 v5; 
  gentity_s *v8; 
  int v10; 

  v5 = activatorEntNum;
  if ( (unsigned int)activatorEntNum >= 0x800 )
  {
    v10 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2888, ASSERT_TYPE_ASSERT, "(unsigned)( activatorEntNum ) < (unsigned)( ( 2048 ) )", "activatorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", activatorEntNum, v10) )
      __debugbreak();
  }
  v8 = &g_entities[v5];
  if ( G_Main_GetEntHandlerList(v8)->methodOfDeath == MOD_GRENADE )
    G_Trigger_DamageGrenadeTouch(v8, vStart, vEnd, iDamage, 4);
}

/*
==============
GMissile::UnRegisterMissileEntity
==============
*/
void GMissile::UnRegisterMissileEntity(const __int16 entityNum)
{
  bitarray_base<bitarray<2048>>::resetBit(&g_missileEntities, entityNum);
}

/*
==============
GMissile::UnRegisterMissileEventEntity
==============
*/
void GMissile::UnRegisterMissileEventEntity(const __int16 entityNum)
{
  bitarray_base<bitarray<2048>>::resetBit(&g_missileEventEntities, entityNum);
}

/*
==============
GMissile::UpdatePlatformTracking
==============
*/
void GMissile::UpdatePlatformTracking(GMissile *this, BgEntityData *entityData)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3303, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3307, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  GMovingPlatformEntityTracking::UpdatePlatformTracking(&Entity->movingPlatformTrack, Entity);
}

/*
==============
GMissile::VehicleTrophyTestMissile
==============
*/
void GMissile::VehicleTrophyTestMissile(GMissile *this, BgEntityData *entityData, const vec3_t *start, const vec3_t *end)
{
  gentity_s *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2917, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2922, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_Vehicle_TrophyTestMissile(Entity, start, end);
}

