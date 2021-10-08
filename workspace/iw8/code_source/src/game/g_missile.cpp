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
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const Weapon *v26; 
  gentity_s *v27; 
  unsigned int number; 
  __int64 v29; 
  vec3_t origin; 

  _R15 = endPos;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3094, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3095, ASSERT_TYPE_ASSERT, "( trace )", (const char *)&queryFormat, "trace") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState((BgEntityData *)entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3098, ASSERT_TYPE_ASSERT, "( es )", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->number >= 0x800u )
  {
    LODWORD(v29) = EntityState->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3100, ASSERT_TYPE_ASSERT, "(unsigned)( es->number ) < (unsigned)( ( 2048 ) )", "es->number doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v29, 2048) )
      __debugbreak();
  }
  _R14 = &g_entities[EntityState->number];
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1489, ASSERT_TYPE_ASSERT, "( missile )", (const char *)&queryFormat, "missile") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1490, ASSERT_TYPE_ASSERT, "( trace )", (const char *)&queryFormat, "trace") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &_R14->s);
  __asm
  {
    vmovss  xmm3, dword ptr [r14+130h]
    vmovss  xmm0, dword ptr [r15]
    vmovss  xmm4, dword ptr [r14+134h]
    vmovss  xmm5, dword ptr [r14+138h]
    vsubss  xmm1, xmm0, xmm3
    vmulss  xmm2, xmm1, dword ptr [rbp+0]
    vmovss  xmm0, dword ptr [r15+4]
    vaddss  xmm3, xmm2, xmm3
    vsubss  xmm1, xmm0, xmm4
    vmulss  xmm2, xmm1, dword ptr [rbp+0]
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  dword ptr [rsp+88h+origin], xmm3
    vaddss  xmm3, xmm2, xmm4
    vsubss  xmm1, xmm0, xmm5
    vmulss  xmm2, xmm1, dword ptr [rbp+0]
    vmovss  dword ptr [rsp+88h+origin+4], xmm3
    vaddss  xmm3, xmm2, xmm5
    vmovss  dword ptr [rsp+88h+origin+8], xmm3
  }
  v26 = WeaponForEntity;
  v27 = G_Utils_SpawnEventEntity(&origin, 110);
  v27->s.eventParm = DirToByte(&trace->normal);
  v27->s.eventParm2 = 0;
  v27->s.surfType = (trace->surfaceFlags >> 19) & 0x3F;
  v27->s.otherEntityNum = _R14->s.number;
  BG_SetWeaponForEntity(Instance, &v27->s, v26);
  number = v27->s.number;
  v27->s.inAltWeaponMode = _R14->s.inAltWeaponMode;
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
  const WeaponDef *v26; 
  const playerState_s *EntityPlayerStateConst; 
  __int64 v28; 

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
      LODWORD(v28) = parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3825, ASSERT_TYPE_ASSERT, "(unsigned)( parentEntNum ) < (unsigned)( ( 2048 ) )", "parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, 2048) )
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
        __asm { vmovss  xmm1, [rsp+68h+cookPercentage]; value }
        Scr_AddFloat(v17, *(float *)&_XMM1);
      }
      else
      {
        Scr_AddUndefined(v17);
        __asm { vmovss  xmm1, [rsp+68h+cookPercentage]; value }
        Scr_AddFloat(v17, *(float *)&_XMM1);
      }
    }
    GScr_Weapon_AddParam(v17, r_grenadeWeapon, isAlternate);
    GScr_AddEntity(Entity);
    grenade_fire = scr_const.grenade_fire;
    if ( hasActivationDistance )
      grenade_fire = scr_const.missile_fire;
    GScr_Notify(v16, grenade_fire, 4u);
    v26 = BG_WeaponDef(r_grenadeWeapon, isAlternate);
    if ( this->m_smokeGrenadeExtraNotification && v26->offhandClass == OFFHAND_CLASS_SMOKE_GRENADE && v26->projExplosion == WEAPPROJEXP_SMOKE )
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
  __int64 v10; 
  gentity_s *Entity; 
  bool v14; 
  gentity_s *v15; 
  int v19; 
  scrContext_t *v20; 
  __int64 v21; 

  v10 = parentEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3903, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3907, ASSERT_TYPE_ASSERT, "( bolt )", (const char *)&queryFormat, "bolt") )
    __debugbreak();
  if ( (_DWORD)v10 == 2047 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3909, ASSERT_TYPE_ASSERT, "(parentEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "parentEntNum != ENTITYNUM_NONE");
  }
  else
  {
    if ( (unsigned int)v10 < 0x800 )
      goto LABEL_13;
    LODWORD(v21) = v10;
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, 2048);
  }
  if ( v14 )
    __debugbreak();
LABEL_13:
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3910, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( parentEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( parentEntNum )") )
    __debugbreak();
  v15 = &g_entities[v10];
  GMovingPlatformEntityTracking::InitPlatformTracking(&Entity->movingPlatformTrack, Entity, v15);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2086, ASSERT_TYPE_ASSERT, "(missile)", (const char *)&queryFormat, "missile") )
    __debugbreak();
  Entity->s.lerp.u.anonymous.data[4] &= ~0x100u;
  _RDI = fireParms;
  if ( fireParms )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+10h]
    }
  }
  *(float *)&_XMM0 = G_Missile_GenerateRandomLifeTime(r_weapon, isAlternate, Entity->s.number);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@c47a0000
    vcvttss2si eax, xmm1
  }
  v19 = level.time - _EAX;
  Entity->nextthink = level.time - _EAX;
  if ( v19 > level.time + 60000 )
    Entity->nextthink = level.time + 60000;
  this->UpdateBoltTeamFromParent(this, Entity, v15);
  if ( projectileModel )
  {
    if ( Entity->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3923, ASSERT_TYPE_ASSERT, "( !bolt->model )", (const char *)&queryFormat, "!bolt->model") )
      __debugbreak();
    G_Utils_SetModel(Entity, projectileModel->name);
  }
  G_DObjUpdate(Entity, 1);
  v20 = ScriptContext_Server();
  GScr_Weapon_AddParam(v20, r_weapon, isAlternate);
  GScr_AddEntity(Entity);
  GScr_Notify(v15, scr_const.missile_fire, 2u);
  if ( SV_BotIsBotEnt(v15) )
    SV_BotMissileFired(v15, Entity);
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
  __int32 v16; 
  GCombat *CombatSystem; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  bool (__fastcall *ShieldNotifyAndDamage)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, int); 
  gentity_s *v24; 
  GWeaponMap *v26; 
  const Weapon *v27; 
  bool v29; 
  bool Bool_Internal_DebugName; 
  char v50; 
  bool bigExplosion; 
  int v54; 
  bool IsClientOrAgent; 
  gentity_s *v56; 
  sentient_s *sentient; 
  char v70; 
  gentity_s *v75; 
  meansOfDeath_t v76; 
  Vehicle *vehicle; 
  int v82; 
  bool inAltWeaponMode; 
  bool v84; 
  bool v85; 
  __int16 v86; 
  meansOfDeath_t mod; 
  int v88; 
  bool (__fastcall *v89)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, int); 
  GCombat *v90; 
  bool *v91; 
  const trace_t *v92; 
  void (__fastcall *v93)(bool *, gentity_s *, gentity_s *, gentity_s *, vec3_t *, vec3_t *, int, int, meansOfDeath_t, const Weapon *, int, hitLocation_t, _DWORD, _DWORD, _DWORD, vec3_t *, __int16 *); 
  vec3_t *v94; 
  tmat43_t<vec3_t> resultMatrix; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  v16 = methodOfDeath;
  _R13 = hitVelocity;
  v92 = trace;
  v94 = (vec3_t *)dir;
  mod = methodOfDeath;
  v91 = outShouldTakeRadiusDamage;
  if ( !outShouldTakeRadiusDamage )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 464, ASSERT_TYPE_ASSERT, "(outShouldTakeRadiusDamage)", (const char *)&queryFormat, "outShouldTakeRadiusDamage") )
      __debugbreak();
    v16 = mod;
  }
  *outShouldTakeRadiusDamage = 0;
  if ( hitLocation == HITLOC_SHIELD && v16 == 17 )
  {
    if ( G_Utils_IsClientOrAgent(other) )
    {
      CombatSystem = GCombat::GetCombatSystem();
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
      inAltWeaponMode = ent->s.inAltWeaponMode;
      ShieldNotifyAndDamage = CombatSystem->ShieldNotifyAndDamage;
      if ( EntHandle::isDefined(&ent->r.ownerNum) )
        v24 = EntHandle::ent(&ent->r.ownerNum);
      else
        v24 = NULL;
      ShieldNotifyAndDamage(CombatSystem, other, ent, v24, hitVelocity, &ent->r.currentOrigin, damage, 0, 17, WeaponForEntity, inAltWeaponMode, 0);
    }
  }
  else
  {
    _ER14 = damage;
    if ( damage > 0 )
    {
      __asm
      {
        vmovaps [rsp+1A8h+var_58], xmm6
        vmovaps [rsp+1A8h+var_68], xmm7
        vmovaps [rsp+1A8h+var_78], xmm8
      }
      v88 = 0;
      v26 = GWeaponMap::GetInstance();
      v27 = BG_GetWeaponForEntity(v26, &ent->s);
      __asm { vmovss  xmm8, cs:__real@3f800000 }
      v29 = hitLocation == HITLOC_SHIELD;
      if ( hitLocation == HITLOC_SHIELD )
      {
        if ( G_Weapon_GetShieldTagMatrix(other, &resultMatrix) )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [r13+4]
            vmovss  xmm4, dword ptr [r13+0]
            vmovss  xmm7, dword ptr [r13+8]
            vmulss  xmm0, xmm6, xmm6
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm7, xmm7
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm3, xmm2, xmm2
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm8, xmm0
            vdivss  xmm5, xmm8, xmm0
            vmulss  xmm0, xmm4, xmm5
            vmulss  xmm3, xmm0, dword ptr [rsp+1A8h+resultMatrix]
            vmulss  xmm1, xmm6, xmm5
            vmulss  xmm2, xmm1, dword ptr [rsp+1A8h+resultMatrix+4]
            vmulss  xmm0, xmm7, xmm5
            vmulss  xmm1, xmm0, dword ptr [rsp+1A8h+resultMatrix+8]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm6, xmm4, xmm1
          }
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_shieldDebug, "shieldDebug");
          v50 = 0;
          if ( Bool_Internal_DebugName )
          {
            __asm
            {
              vcvtss2sd xmm2, xmm6, xmm6
              vmovq   r8, xmm2
            }
            Com_Printf(0, "Missile_Impact(), hit shield directly - dotprod was: %.2f\n", *(double *)&_XMM2);
          }
          __asm { vcomiss xmm6, cs:MY_DOT_MAX }
          if ( v50 )
          {
            bigExplosion = weapDef->bigExplosion;
            G_Utils_AddEvent(other, 0x65u, 0);
            v54 = 96;
            if ( !bigExplosion )
              v54 = 32;
            v88 = v54;
          }
          else
          {
            hitLocation = HITLOC_NONE;
          }
        }
        IsClientOrAgent = G_Utils_IsClientOrAgent(other);
        v29 = !IsClientOrAgent;
        if ( IsClientOrAgent )
        {
          v29 = hitLocation == HITLOC_SHIELD;
          if ( hitLocation == HITLOC_SHIELD )
          {
            v90 = GCombat::GetCombatSystem();
            v89 = v90->ShieldNotifyAndDamage;
            v84 = ent->s.inAltWeaponMode;
            if ( EntHandle::isDefined(&ent->r.ownerNum) )
              v56 = EntHandle::ent(&ent->r.ownerNum);
            else
              v56 = NULL;
            v89(v90, other, ent, v56, hitVelocity, &ent->r.currentOrigin, damage, v88, mod, v27, v84, 0);
          }
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r13+0]
        vmovss  xmm2, dword ptr [r13+4]
        vmovss  xmm3, dword ptr [r13+8]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm6, xmm2, xmm2
        vxorps  xmm7, xmm7, xmm7
        vucomiss xmm6, xmm7
      }
      if ( v29 )
        hitVelocity->v[2] = 1.0;
      if ( BG_GetWeaponType(v27, ent->s.inAltWeaponMode) != WEAPTYPE_GRENADE )
        goto LABEL_36;
      _RBX = DVARFLT_g_minGrenadeDamageSpeed;
      if ( !DVARFLT_g_minGrenadeDamageSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_minGrenadeDamageSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( !v50 || BG_GetWeaponClass(v27, ent->s.inAltWeaponMode) == WEAPCLASS_THROWINGKNIFE )
      {
LABEL_36:
        BG_GetExplosionDamageRangeInfo(v27, ent->s.inAltWeaponMode, &outDamageRangeInfo);
        sentient = other->sentient;
        __asm { vmovss  xmm0, [rsp+1A8h+outDamageRangeInfo.innerDamage] }
        if ( sentient && sentient->iDamageParts != -1 && explodeOnImpact )
        {
          __asm { vcomiss xmm0, xmm7 }
          v70 = 1;
        }
        else
        {
          v70 = 0;
        }
        *v91 = v70;
        if ( shouldExplode && explodeOnImpact && !v70 )
        {
          __asm { vcvttss2si eax, xmm0 }
          _ER14 = _EAX + damage;
        }
        if ( BG_IsChargeShotWeapon(v27, ent->s.inAltWeaponMode) && (ent->c.missile.flags & 0x1000) != 0 )
        {
          *(double *)&_XMM0 = BG_WeaponCharge_GetFireAtMaxDamageMultiplier(v27, ent->s.inAltWeaponMode);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, r14d
            vmulss  xmm0, xmm0, xmm1
            vcvttss2si r14d, xmm0
          }
        }
        v91 = (bool *)GCombat::GetCombatSystem();
        v86 = 0;
        v93 = *(void (__fastcall **)(bool *, gentity_s *, gentity_s *, gentity_s *, vec3_t *, vec3_t *, int, int, meansOfDeath_t, const Weapon *, int, hitLocation_t, _DWORD, _DWORD, _DWORD, vec3_t *, __int16 *))(*(_QWORD *)v91 + 16i64);
        LODWORD(v89) = v92->partName;
        LODWORD(v90) = v92->modelIndex;
        v85 = ent->s.inAltWeaponMode;
        if ( EntHandle::isDefined(&ent->r.ownerNum) )
          v75 = EntHandle::ent(&ent->r.ownerNum);
        else
          v75 = NULL;
        v76 = mod;
        LOBYTE(v82) = v85;
        v93(v91, other, ent, v75, hitVelocity, &ent->r.currentOrigin, _ER14, v88, mod, v27, v82, hitLocation, (_DWORD)v90, (_DWORD)v89, 0, &v92->normal, &v86);
        vehicle = other->vehicle;
        if ( vehicle )
        {
          __asm { vmovaps xmm3, xmm8; forceScale }
          G_Vehicle_Knockback(vehicle, v94, v76, *(float *)&_XMM3, &ent->r.currentOrigin);
        }
      }
      __asm
      {
        vmovaps xmm7, [rsp+1A8h+var_68]
        vmovaps xmm6, [rsp+1A8h+var_58]
        vmovaps xmm8, [rsp+1A8h+var_78]
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
  const WeaponDef *v12; 
  scr_string_t tag_accessory_right; 
  const gentity_s *v14; 
  GUtils *Utils; 
  bool (__fastcall *EntDetach)(GUtils *, gentity_s *, const char *, scr_string_t); 
  scr_string_t v17; 
  const char *Name; 
  gentity_s *v19; 
  int PointContents; 
  const dvar_t *v32; 
  scrContext_t *v35; 
  int passEntityNum2; 
  gentity_s *v48; 
  gentity_s *v49; 
  GWeaponMap *v50; 
  vec3_t *p_dir; 
  int lastHitCharacter; 
  bool detailTrace; 
  int nextthink; 
  int v65; 
  int v66; 
  GCombat *CombatSystem; 
  unsigned __int8 v68; 
  __int64 v69; 
  gentity_s *v70; 
  __int64 v72; 
  gentity_s *v73; 
  __int64 v85; 
  gentity_s *v86; 
  unsigned int v88; 
  __int64 v89; 
  gentity_s *v90; 
  __int64 v92; 
  gentity_s *v93; 
  GWeaponMap *v104; 
  char *fmt; 
  int contentmask; 
  int contentmaska; 
  int contentmaske; 
  int contentmaskb; 
  int contentmaskc; 
  int contentmaskd; 
  double contentmaskf; 
  char v119; 
  bool v120; 
  void (__fastcall *NotifyRadiusDamage)(GCombat *, const vec3_t *, float, gentity_s *, const Weapon *, bool); 
  void (__fastcall *v123)(GCombat *, const vec3_t *, float, gentity_s *, const Weapon *, bool); 
  void (__fastcall *v124)(_QWORD, vec3_t *, gentity_s *, gentity_s *, BgExplosionDamageRangeInfo *, int, vec3_t *, gentity_s *, ExplosionType, const Weapon *, bool, _BYTE, char); 
  void (__fastcall *v125)(GCombat *, const vec3_t *, float, gentity_s *, const Weapon *, bool); 
  void (__fastcall *v126)(GCombat *, const vec3_t *, float, gentity_s *, const Weapon *, bool); 
  void (__fastcall *v127)(GCombat *, const vec3_t *, float, gentity_s *, const Weapon *, bool); 
  vec3_t trBase; 
  weapProjExposion_t v129; 
  int explosiveDamageDelay; 
  ExplosionType SplashMethodOfDeath; 
  vec3_t *v132; 
  __int64 v133; 
  GTrajectory v134; 
  vec3_t origin; 
  vec3_t start; 
  vec3_t outPos; 
  vec3_t v138; 
  vec3_t dir; 
  vec3_t forward; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 
  trace_t results; 
  void *retaddr; 

  _RAX = &retaddr;
  v133 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v132 = (vec3_t *)normalOverride;
  SplashMethodOfDeath = explosionType;
  _R15 = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 634, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Missile_ExplodeInternal");
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &_R15->s);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 639, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx != 0 )", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  inAltWeaponMode = _R15->s.inAltWeaponMode;
  v12 = BG_WeaponDef(WeaponForEntity, inAltWeaponMode);
  *(_QWORD *)origin.v = v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 644, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v129 = BG_ProjExplosionType(WeaponForEntity, inAltWeaponMode);
  explosiveDamageDelay = v12->explosiveDamageDelay;
  if ( ((v12->offhandClass - 2) & 0xFFFFFFFD) != 0 || _R15->s.groundEntityNum != 2047 )
  {
    if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
      __debugbreak();
    *(_QWORD *)trBase.v = GMissile::ms_gMissileSystem;
    if ( EntHandle::isDefined(&_R15->grenadeActivator) && EntHandle::ent(&_R15->grenadeActivator)->actor && (_R15->r.svFlags & 1) != 0 )
    {
      tag_accessory_right = scr_const.tag_accessory_right;
      v14 = EntHandle::ent(&_R15->grenadeActivator);
      G_Utils_DObjGetWorldTagPos_CheckTagExists(v14, tag_accessory_right, 1, &outPos);
      G_SetOrigin(_R15, &outPos, 1, 1);
      _R15->r.svFlags &= ~1u;
      Utils = GUtils::GetUtils();
      EntDetach = Utils->EntDetach;
      v17 = scr_const.tag_accessory_right;
      Name = XModelGetName(*(const XModel **)(*(_QWORD *)origin.v + 56i64));
      v19 = EntHandle::ent(&_R15->grenadeActivator);
      EntDetach(Utils, v19, Name, v17);
    }
    else
    {
      GTrajectory::GTrajectory(&v134, _R15);
      BgTrajectory::EvaluatePosTrajectory(&v134, level.time, &origin);
      SV_Game_KeepPointInPlayableBounds(&origin);
      if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
      {
        __asm
        {
          vcvttss2si eax, dword ptr [rbp+100h+origin]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rbp+100h+origin], xmm0
          vcvttss2si eax, dword ptr [rbp+100h+origin+4]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmovss  dword ptr [rbp+100h+origin+4], xmm1
          vcvttss2si eax, dword ptr [rbp+100h+origin+8]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rbp+100h+origin+8], xmm0
        }
      }
      G_SetOrigin(_R15, &origin, 1, 1);
    }
    if ( BG_GetWeaponType(WeaponForEntity, inAltWeaponMode) == WEAPTYPE_GRENADE && BG_ActorOrAgentSystemEnabled() )
      AIScriptedInterface::DissociateGrenade(_R15);
    v119 = 1;
    PointContents = PhysicsQuery_LegacyGetPointContents(PHYSICS_WORLD_ID_FIRST, &_R15->r.currentOrigin, -1, 32);
    v120 = PointContents != 0;
    if ( PointContents )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15+130h]
        vmovss  dword ptr [rbp+100h+start], xmm0
        vmovss  xmm1, dword ptr [r15+134h]
        vmovss  dword ptr [rbp+100h+start+4], xmm1
        vmovss  xmm0, dword ptr [r15+138h]
        vmovss  dword ptr [rbp+100h+start+8], xmm0
      }
      v32 = DCONST_DVARFLT_bg_missileWaterMaxDepth;
      if ( !DCONST_DVARFLT_bg_missileWaterMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileWaterMaxDepth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+100h+start+8]
        vaddss  xmm1, xmm0, dword ptr [rdi+28h]
        vmovss  dword ptr [rbp+100h+start+8], xmm1
      }
      G_Main_TraceCapsule(&results, &start, &_R15->r.currentOrigin, &bounds_origin, _R15->s.number, 32);
      if ( !results.startsolid )
      {
        __asm
        {
          vmovss  xmm4, [rbp+100h+results.fraction]
          vcomiss xmm4, cs:__real@3f800000
        }
      }
      v119 = 0;
    }
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_R15->s.lerp.eFlags, ACTIVE, 0xCu);
    v35 = ScriptContext_Server();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, cs:__real@3a83126f; value
    }
    Scr_AddFloat(v35, *(float *)&_XMM1);
    Scr_AddVector(v35, _R15->r.currentOrigin.v);
    GScr_Notify(_R15, scr_const.explode, 2u);
    BG_GetExplosionDamageRangeInfo(WeaponForEntity, inAltWeaponMode, &outDamageRangeInfo);
    passEntityNum2 = 2047;
    if ( BG_WeaponSticksToWalls(WeaponForEntity, inAltWeaponMode) && _R15->s.groundEntityNum != 2047 )
    {
      __asm
      {
        vmovss  xmm4, cs:__real@40800000
        vmulss  xmm1, xmm4, dword ptr [r15+1D0h]
        vmovss  xmm0, dword ptr [r15+130h]
        vsubss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rbp+100h+start], xmm1
        vmulss  xmm3, xmm4, dword ptr [r15+1D4h]
        vmovss  xmm0, dword ptr [r15+134h]
        vsubss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rbp+100h+start+4], xmm1
        vmulss  xmm3, xmm4, dword ptr [r15+1D8h]
        vmovss  xmm0, dword ptr [r15+138h]
        vsubss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rbp+100h+start+8], xmm1
      }
    }
    v48 = NULL;
    v49 = NULL;
    if ( !v119 )
      goto LABEL_81;
    v49 = G_Utils_SpawnEntity();
    v49->s.eType = ET_FIRST;
    v49->s.lerp.eFlags.m_flags[0] = 0;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v49->s.lerp.eFlags, ACTIVE, 0xCu);
    *(_QWORD *)v49->clientMask.array = 0i64;
    *(_QWORD *)&v49->clientMask.array[2] = 0i64;
    *(_QWORD *)&v49->clientMask.array[4] = 0i64;
    v49->clientMask.array[6] = 0;
    v50 = GWeaponMap::GetInstance();
    BG_SetWeaponForEntity(v50, &v49->s, WeaponForEntity);
    v49->s.inAltWeaponMode = _R15->s.inAltWeaponMode;
    bitarray_base<bitarray<2048>>::setBit(&g_missileEventEntities, v49->s.number);
    if ( v120 )
    {
      G_SetOrigin(v49, &v138, 1, 1);
      v49->s.surfType = 21;
      p_dir = &dir;
    }
    else
    {
      G_SetOrigin(v49, &_R15->r.currentOrigin, 1, 1);
      if ( !SV_Game_CheckPointInPlayableBounds(&v49->r.currentOrigin) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 762, ASSERT_TYPE_ASSERT, "( SV_Game_CheckPointInPlayableBounds( eventEnt->r.currentOrigin ) )", (const char *)&queryFormat, "SV_Game_CheckPointInPlayableBounds( eventEnt->r.currentOrigin )") )
        __debugbreak();
      Trajectory_GetTrBase(&v49->s.lerp.pos, &outPos);
      if ( !SV_Game_CheckPointInPlayableBounds(&outPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 765, ASSERT_TYPE_ASSERT, "( SV_Game_CheckPointInPlayableBounds( tmpTrBase ) )", (const char *)&queryFormat, "SV_Game_CheckPointInPlayableBounds( tmpTrBase )") )
        __debugbreak();
      if ( !BG_WeaponSticksToWalls(WeaponForEntity, inAltWeaponMode) || _R15->s.groundEntityNum == 2047 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15+130h]
          vmovss  dword ptr [rbp+100h+start], xmm0
          vmovss  xmm1, dword ptr [r15+134h]
          vmovss  dword ptr [rbp+100h+start+4], xmm1
          vmovss  xmm0, dword ptr [r15+138h]
          vsubss  xmm2, xmm0, cs:__real@41800000
          vmovss  dword ptr [rbp+100h+start+8], xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm4, cs:__real@41800000
          vmulss  xmm1, xmm4, dword ptr [r15+1D0h]
          vmovss  xmm0, dword ptr [r15+130h]
          vsubss  xmm1, xmm0, xmm1
          vmovss  dword ptr [rbp+100h+start], xmm1
          vmulss  xmm3, xmm4, dword ptr [r15+1D4h]
          vmovss  xmm0, dword ptr [r15+134h]
          vsubss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rbp+100h+start+4], xmm1
          vmulss  xmm3, xmm4, dword ptr [r15+1D8h]
          vmovss  xmm0, dword ptr [r15+138h]
          vsubss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rbp+100h+start+8], xmm1
        }
      }
      lastHitCharacter = _R15->c.missile.lastHitCharacter;
      if ( lastHitCharacter )
      {
        LODWORD(origin.v[0]) = lastHitCharacter - 1;
        if ( G_IsEntityInUse(lastHitCharacter - 1) )
          passEntityNum2 = LODWORD(origin.v[0]);
        else
          _R15->c.missile.lastHitCharacter = 0;
      }
      detailTrace = BG_WeaponRadiusDamageDetailTrace(WeaponForEntity, _R15->s.inAltWeaponMode);
      G_Missile_Trace(_R15, &results, &_R15->r.currentOrigin, &start, &_R15->r.box, _R15->s.number, passEntityNum2, _R15->clipmask, detailTrace);
      if ( BG_ProjExplosionEffectForceNormalUp(WeaponForEntity, inAltWeaponMode) )
      {
        p_dir = &MY_STRAIGHTUPNORMAL_0;
      }
      else if ( BG_ProjExplosionEffectInheritParentDirection(WeaponForEntity, inAltWeaponMode) )
      {
        AngleVectors(&_R15->r.currentAngles, &forward, NULL, NULL);
        p_dir = &forward;
      }
      else
      {
        p_dir = &results.normal;
      }
      v49->s.surfType = (results.surfaceFlags >> 19) & 0x3F;
      memset(&outPos, 0, sizeof(outPos));
    }
    nextthink = _R15->nextthink;
    v65 = DirToByte(p_dir);
    v66 = 0;
    if ( !nextthink )
      v66 = 256;
    LODWORD(origin.v[0]) = v66 | v65;
    CombatSystem = GCombat::GetCombatSystem();
    if ( SplashMethodOfDeath == EXPLOSION_TYPE_TROPHY )
    {
      if ( !v132 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 807, ASSERT_TYPE_ASSERT, "(normalOverride)", (const char *)&queryFormat, "normalOverride") )
        __debugbreak();
      if ( !otherEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 808, ASSERT_TYPE_ASSERT, "(otherEnt)", (const char *)&queryFormat, "otherEnt") )
        __debugbreak();
      v68 = DirToByte(v132);
      G_Utils_AddEvent(v49, 0x78u, v68);
      v49->s.otherEntityNum = otherEnt->s.number;
      NotifyRadiusDamage = CombatSystem->NotifyRadiusDamage;
      if ( EntHandle::isDefined(&_R15->r.ownerNum) )
        v70 = EntHandle::ent(&_R15->r.ownerNum);
      else
        v70 = NULL;
      LOBYTE(contentmask) = inAltWeaponMode;
      __asm { vmovss  xmm2, [rbp+100h+outDamageRangeInfo.outerRadius] }
      ((void (__fastcall *)(GCombat *, vec3_t *, __int64, gentity_s *, const Weapon *, int))NotifyRadiusDamage)(CombatSystem, &_R15->r.currentOrigin, v69, v70, WeaponForEntity, contentmask);
    }
    else
    {
      switch ( v129 )
      {
        case WEAPPROJEXP_GRENADE:
        case WEAPPROJEXP_HEAVY:
          v88 = LODWORD(origin.v[0]);
          if ( explosiveDamageDelay <= 0 )
          {
            G_AddImpactEvent(v49, &results, 0x6Du, LODWORD(origin.v[0]), 0, _R15);
            v127 = CombatSystem->NotifyRadiusDamage;
            if ( EntHandle::isDefined(&_R15->r.ownerNum) )
              v93 = EntHandle::ent(&_R15->r.ownerNum);
            else
              v93 = NULL;
            LOBYTE(contentmaskd) = inAltWeaponMode;
            __asm { vmovss  xmm2, [rbp+100h+outDamageRangeInfo.outerRadius] }
            ((void (__fastcall *)(GCombat *, vec3_t *, __int64, gentity_s *, const Weapon *, int))v127)(CombatSystem, &_R15->r.currentOrigin, v92, v93, WeaponForEntity, contentmaskd);
          }
          else
          {
            if ( (_R15->c.missile.flags & 0x100) == 0 )
            {
              _R15->c.missile.flags |= 0x100u;
              G_AddImpactEvent(v49, &results, 0x6Bu, v88, 0, _R15);
              SV_LinkEntity(v49);
              _R15->nextthink = level.time + explosiveDamageDelay;
              goto LABEL_92;
            }
            G_AddImpactEvent(v49, &results, 0x6Cu, LODWORD(origin.v[0]), 0, _R15);
            v126 = CombatSystem->NotifyRadiusDamage;
            if ( EntHandle::isDefined(&_R15->r.ownerNum) )
              v90 = EntHandle::ent(&_R15->r.ownerNum);
            else
              v90 = NULL;
            LOBYTE(contentmaskc) = inAltWeaponMode;
            __asm { vmovss  xmm2, [rbp+100h+outDamageRangeInfo.outerRadius] }
            ((void (__fastcall *)(GCombat *, vec3_t *, __int64, gentity_s *, const Weapon *, int))v126)(CombatSystem, &_R15->r.currentOrigin, v89, v90, WeaponForEntity, contentmaskc);
          }
          break;
        case WEAPPROJEXP_ROCKET:
          G_AddImpactEvent(v49, &results, 0x71u, LODWORD(origin.v[0]), 0, _R15);
          v123 = CombatSystem->NotifyRadiusDamage;
          if ( EntHandle::isDefined(&_R15->r.ownerNum) )
            v73 = EntHandle::ent(&_R15->r.ownerNum);
          else
            v73 = NULL;
          LOBYTE(contentmaska) = inAltWeaponMode;
          __asm { vmovss  xmm2, [rbp+100h+outDamageRangeInfo.outerRadius] }
          ((void (__fastcall *)(GCombat *, vec3_t *, __int64, gentity_s *, const Weapon *, int))v123)(CombatSystem, &_R15->r.currentOrigin, v72, v73, WeaponForEntity, contentmaska);
          goto LABEL_80;
        case WEAPPROJEXP_FLASHBANG:
          G_AddImpactEvent(v49, &results, 0x73u, LODWORD(origin.v[0]), 0, _R15);
          goto LABEL_80;
        default:
          G_AddImpactEvent(v49, &results, 0x74u, LODWORD(origin.v[0]), 0, _R15);
          v49->s.lerp.u.anonymous.data[0] = level.time;
          v125 = CombatSystem->NotifyRadiusDamage;
          if ( EntHandle::isDefined(&_R15->r.ownerNum) )
            v86 = EntHandle::ent(&_R15->r.ownerNum);
          else
            v86 = NULL;
          LOBYTE(contentmaskb) = inAltWeaponMode;
          __asm { vmovss  xmm2, [rbp+100h+outDamageRangeInfo.outerRadius] }
          ((void (__fastcall *)(GCombat *, vec3_t *, __int64, gentity_s *, const Weapon *, int))v125)(CombatSystem, &_R15->r.currentOrigin, v85, v86, WeaponForEntity, contentmaskb);
          break;
      }
    }
    if ( (v129 == WEAPPROJEXP_SMOKE || v129 == WEAPPROJEXP_MOLOTOV) && *(_BYTE *)(*(_QWORD *)trBase.v + 9i64) )
    {
      if ( !BG_ProjExplosionEffect(WeaponForEntity, inAltWeaponMode).particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 862, ASSERT_TYPE_ASSERT, "(BG_ProjExplosionEffect( weapon, isUsingAlternate ).IsValid())", (const char *)&queryFormat, "BG_ProjExplosionEffect( weapon, isUsingAlternate ).IsValid()") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 865, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::NETWORK_FIELD_QUANTIZATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::NETWORK_FIELD_QUANTIZATION )") )
        __debugbreak();
      Trajectory_GetTrBase(&v49->s.lerp.pos, &trBase);
      __asm
      {
        vcvttss2si eax, dword ptr [rbp+100h+trBase]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rbp+100h+trBase], xmm0
        vcvttss2si eax, dword ptr [rbp+100h+trBase+4]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovss  dword ptr [rbp+100h+trBase+4], xmm1
        vcvttss2si eax, dword ptr [rbp+100h+trBase+8]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rbp+100h+trBase+8], xmm0
      }
      Trajectory_SetTrBase(&v49->s.lerp.pos, &trBase);
      G_SetOrigin(v49, &trBase, 1, 1);
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagStrict(&v49->s.lerp.eFlags, LEGACY_LADDER_CENTERLINE|LEGACY_MANTLE|0x10);
      v49->s.lerp.u.anonymous.data[0] = level.time;
      v49->s.time2 = level.time + 61000;
      v104 = GWeaponMap::GetInstance();
      GWeaponMap::CopyWeapon(v104, &v49->s.weaponHandle, &_R15->s.weaponHandle);
      v49->s.inAltWeaponMode = _R15->s.inAltWeaponMode;
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagStrict(&v49->s.lerp.eFlags, (EntityStateFlagsMP)27);
      v49->handler = 11;
      v49->nextthink = level.time + 1;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+100h+trBase+8]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovss  xmm1, dword ptr [rbp+100h+trBase+4]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovss  xmm3, dword ptr [rbp+100h+trBase]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  qword ptr [rsp+200h+contentmask], xmm0
        vmovsd  [rsp+200h+fmt], xmm1
        vmovq   r9, xmm3
      }
      Com_Printf(15, "Sending smoke/molotov that starts at %i and is at ( %f, %f, %f )\n", (unsigned int)level.time, *(double *)&_XMM3, *(double *)&fmt, contentmaskf);
      memset(&trBase, 0, sizeof(trBase));
      goto LABEL_81;
    }
LABEL_80:
    G_Utils_FreeEntityAfterEvent(v49);
LABEL_81:
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, [rbp+100h+outDamageRangeInfo.outerRadius]
      vcomiss xmm0, xmm1
    }
    if ( (~((unsigned int)_R15->c.missile.flags >> 14) & (!__CFSHR__(_R15->c.missile.flags, 14) && (unsigned int)_R15->c.missile.flags >> 14 != 0)) != 0 )
    {
      *(double *)&_XMM0 = BG_DamageConeAngle(WeaponForEntity, inAltWeaponMode);
      __asm
      {
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
      }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm
      {
        vmovss  xmm1, cs:__real@43340000
        vcmpless xmm3, xmm1, xmm6
        vmovss  xmm2, cs:__real@bf800000
        vblendvps xmm0, xmm0, xmm2, xmm3
        vmovss  [rbp+100h+var_170], xmm0
      }
      AngleVectors(&_R15->r.currentAngles, &forward, NULL, NULL);
      SplashMethodOfDeath = GetSplashMethodOfDeath(_R15);
      *(_QWORD *)trBase.v = GCombat::GetCombatSystem();
      v124 = *(void (__fastcall **)(_QWORD, vec3_t *, gentity_s *, gentity_s *, BgExplosionDamageRangeInfo *, int, vec3_t *, gentity_s *, ExplosionType, const Weapon *, bool, _BYTE, char))(**(_QWORD **)trBase.v + 32i64);
      if ( EntHandle::isDefined(&_R15->parent) )
        v48 = EntHandle::ent(&_R15->parent);
      __asm
      {
        vmovss  xmm0, [rbp+100h+var_170]
        vmovss  [rsp+200h+contentmask], xmm0
      }
      v124(*(_QWORD *)trBase.v, &_R15->r.currentOrigin, _R15, v48, &outDamageRangeInfo, contentmaske, &forward, _R15, SplashMethodOfDeath, WeaponForEntity, inAltWeaponMode, 0, 1);
    }
    if ( v119 )
    {
      if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 907, ASSERT_TYPE_SANITY, "( eventEnt )", (const char *)&queryFormat, "eventEnt") )
        __debugbreak();
      SV_LinkEntity(v49);
    }
    goto LABEL_90;
  }
  if ( level.time - _R15->c.item[0].clipAmmoCount[1] > 60000 )
  {
LABEL_90:
    GScr_Notify(_R15, scr_const.death, 0);
    GScr_Notify(_R15, scr_const.death_or_disconnect, 0);
    G_FreeEntity(_R15);
    goto LABEL_91;
  }
  _R15->nextthink = level.time + G_Level_GetFrameDuration();
LABEL_91:
  Sys_ProfEndNamedEvent();
LABEL_92:
  __asm { vmovaps xmm6, xmmword ptr [rsp+200h+var_48+8] }
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
  GEntityMissileComponentData v25; 
  GEntityData v26; 
  __int64 v27; 
  GEntityMissileComponentData v28; 
  GEntityMissileComponentData outComponentData; 
  GEntityData outEntityData; 
  GEntityData v31; 
  vec3_t inOutVel; 

  v27 = -2i64;
  _R14 = dir;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  v14 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2542, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
    __debugbreak();
  GEntityData::GEntityData(&v26);
  GEntityMissileComponentData::GEntityMissileComponentData(&v25);
  if ( rethrowEnt )
  {
    GEntityMissileComponentData::GEntityMissileComponentData(&v28, rethrowEnt);
    v25.m_missileTargetEnt = *(_DWORD *)(v15 + 8);
    v25.m_ent = *(gentity_s **)(v15 + 16);
    GEntityData::GEntityData(&v31, rethrowEnt, &v25);
    v26.m_origin = *(vec3_t **)(v16 + 8);
    v26.m_angles = *(vec3_t **)(v16 + 16);
    v26.m_box = *(Bounds **)(v16 + 24);
    v26.m_clipMask = *(int **)(v16 + 32);
    v26.m_parentEntNum = *(_DWORD *)(v16 + 40);
    v26.m_ownerEntNum = *(_DWORD *)(v16 + 44);
    v26.m_entityState = *(entityState_t **)(v16 + 48);
    v26.m_flags = *(GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> **)(v16 + 56);
    v26.m_components = *(BgEntityComponents **)(v16 + 64);
    v26.m_componentData = *(BgEntityComponentData **)(v16 + 72);
    v26.m_handler = *(unsigned __int8 **)(v16 + 80);
    v26.m_ent = *(gentity_s **)(v16 + 88);
  }
  GEntityData::GEntityData(&outEntityData);
  GEntityMissileComponentData::GEntityMissileComponentData(&outComponentData);
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  dword ptr [rbp+160h+inOutVel], xmm0
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  dword ptr [rbp+160h+inOutVel+4], xmm1
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rbp+160h+inOutVel+8], xmm0
  }
  G_Missile_AddVelocityForMover(parent, gameTime, _R14, &inOutVel);
  BgMissile::SRand(v14, time);
  rethrowEntityData = &v26;
  if ( GEntityData::IsEmpty(&v26) )
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
  GMissile *v15; 
  const dvar_t *v23; 
  vec3_t *p_inOutVel; 
  int number; 
  GWeaponMap *Instance; 
  GEntityMissileComponentData outComponentData; 
  GEntityData outEntityData; 
  vec3_t v30; 
  vec3_t inOutVel; 

  _RDI = dir;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  v15 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2599, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
    __debugbreak();
  GEntityData::GEntityData(&outEntityData);
  GEntityMissileComponentData::GEntityMissileComponentData(&outComponentData);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsp+178h+inOutVel], xmm0
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+178h+inOutVel+4], xmm1
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+178h+inOutVel+8], xmm0
  }
  _RAX = gunVel;
  __asm
  {
    vmovss  xmm1, dword ptr [rax]
    vmovss  dword ptr [rsp+178h+var_78], xmm1
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  dword ptr [rsp+178h+var_78+4], xmm0
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  dword ptr [rsp+178h+var_78+8], xmm1
  }
  v23 = DVARBOOL_addmovervelocitytomissileonserver;
  if ( !DVARBOOL_addmovervelocitytomissileonserver && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "addmovervelocitytomissileonserver") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  p_inOutVel = &v30;
  if ( !v23->current.enabled )
    p_inOutVel = &inOutVel;
  G_Missile_AddVelocityForMover(parent, gameTime, dir, p_inOutVel);
  BgMissile::SRand(v15, level.time);
  if ( parent )
    number = parent->s.number;
  else
    number = 2047;
  Instance = GWeaponMap::GetInstance();
  BgMissile::FireRocket(v15, Instance, number, r_weapon, isAlternate, hand, start, &inOutVel, &v30, fireParms, magicBullet, gameTime, &outEntityData, &outComponentData);
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
  unsigned int WeaponAttachments; 
  unsigned int v15; 
  unsigned int v16; 
  bool v17; 
  WeaponAttachment **v18; 
  unsigned int pHoldrand; 
  float outNormalRandomA[3]; 
  WeaponAttachment *attachments[30]; 
  char v45; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmmword ptr [r11-58h], xmm10
    vmovaps xmmword ptr [r11-68h], xmm11
  }
  _RAX = BG_WeaponDef(r_weapon, isAlternate);
  __asm
  {
    vmovss  xmm10, dword ptr [rax+720h]
    vmovss  xmm11, dword ptr [rax+724h]
  }
  WeaponAttachments = BG_GetWeaponAttachments(r_weapon, isAlternate, (const WeaponAttachment **)attachments);
  v15 = 0;
  v16 = WeaponAttachments;
  v17 = WeaponAttachments == 0;
  if ( WeaponAttachments )
  {
    v18 = attachments;
    while ( 1 )
    {
      if ( !*v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2035, ASSERT_TYPE_ASSERT, "(attachments[attachmentIndex])", (const char *)&queryFormat, "attachments[attachmentIndex]") )
        __debugbreak();
      _RCX = (*v18)->projectile;
      v17 = _RCX == NULL;
      if ( _RCX )
        break;
      ++v15;
      ++v18;
      v17 = v15 == v16;
      if ( v15 >= v16 )
        goto LABEL_10;
    }
    __asm
    {
      vmovss  xmm10, dword ptr [rcx+38h]
      vmovss  xmm11, dword ptr [rcx+3Ch]
    }
  }
LABEL_10:
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vucomiss xmm11, xmm9
  }
  if ( v17 )
  {
    __asm { vmovaps xmm0, xmm10 }
  }
  else
  {
    __asm { vmovaps [rsp+1A8h+var_38], xmm8 }
    pHoldrand = entIndex + level.time;
    BG_srand(&pHoldrand);
    __asm
    {
      vmovss  xmm1, cs:__real@3f7ff972; max
      vmovss  xmm0, cs:__real@38d1b717; min
    }
    *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &pHoldrand);
    __asm
    {
      vmovss  xmm1, cs:__real@3f7ff972; max
      vmovaps xmm8, xmm0
      vmovss  xmm0, cs:__real@38d1b717; min
    }
    *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &pHoldrand);
    __asm
    {
      vmovaps xmm1, xmm0; uniformRandomB
      vmovaps xmm0, xmm8; uniformRandomA
      vmovaps xmm3, xmm11; standardDeviation
      vmovaps xmm2, xmm10; mean
    }
    BoxMullerTransform(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, outNormalRandomA, NULL);
    __asm
    {
      vmulss  xmm0, xmm11, cs:__real@40000000
      vaddss  xmm2, xmm0, xmm10; max
      vsubss  xmm1, xmm10, xmm0; min
      vmovss  xmm0, [rsp+1A8h+outNormalRandomA]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm8, [rsp+1A8h+var_38]
      vmaxss  xmm0, xmm0, xmm9
    }
  }
  _R11 = &v45;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
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
  int *v10; 
  float outSpeedUpScale; 

  if ( !outSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 171, ASSERT_TYPE_ASSERT, "(outSpeed)", (const char *)&queryFormat, "outSpeed") )
    __debugbreak();
  v10 = outSpeedUp;
  if ( !outSpeedUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 172, ASSERT_TYPE_ASSERT, "(outSpeedUp)", (const char *)&queryFormat, "outSpeedUp") )
    __debugbreak();
  BG_GetProjectileSpeed(weapon, isAlt, outSpeed, v10);
  G_Missile_GetScriptSpeedScale(attacker, weapon, isAlt, (float *)&outSpeedUp, &outSpeedUpScale);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi]
    vmulss  xmm1, xmm0, dword ptr [rsp+48h+outSpeedUp]
    vcvttss2si eax, xmm1
  }
  *outSpeed = _EAX;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
    vmulss  xmm1, xmm0, [rsp+48h+outSpeedUpScale]
    vcvttss2si eax, xmm1
  }
  *v10 = _EAX;
}

/*
==============
G_Missile_GetScriptSpeedScale
==============
*/
void G_Missile_GetScriptSpeedScale(const gentity_s *attacker, const Weapon *weapon, bool isAlt, float *outSpeedScale, float *outSpeedUpScale)
{
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
  void *outReturnValue; 
  __int64 v21; 
  int v22; 
  Weapon *r_weapon; 
  bool v25; 

  v25 = isAlt;
  r_weapon = (Weapon *)weapon;
  _R15 = outSpeedScale;
  if ( !outSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 113, ASSERT_TYPE_ASSERT, "(outSpeedScale)", (const char *)&queryFormat, "outSpeedScale") )
    __debugbreak();
  _R14 = outSpeedUpScale;
  if ( !outSpeedUpScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 114, ASSERT_TYPE_ASSERT, "(outSpeedUpScale)", (const char *)&queryFormat, "outSpeedUpScale") )
    __debugbreak();
  *_R15 = 1.0;
  *_R14 = 1.0;
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
        LODWORD(v21) = 3;
        LODWORD(outReturnValue) = *v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outReturnValue, v21) )
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
      GScr_Weapon_AddParam(v9, r_weapon, v25);
      GScr_AddEntity(attacker);
      v17 = GScr_ExecEntThreadWithReturnValue(attacker, v8->projectile_speed, 2u, Scr_ExecThreadCallback_FloatArray, &returnCount, &v22);
      if ( Scr_IsThreadAlive(v9, v17) )
        Com_PrintError(1, "CodeCallback_GetProjectileSpeedScale failed to terminate. No waits allowed in this function.\n");
      Scr_FreeThread(v9, v17);
      Profile_EndInternal(NULL);
      __asm
      {
        vmovss  xmm0, [rsp+78h+arg_0]
        vmovss  xmm1, [rsp+78h+arg_4]
        vmovss  dword ptr [r15], xmm0
        vmovss  dword ptr [r14], xmm1
      }
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
    if ( v6->notifyTypes[0] )
    {
      __asm { vmovss  xmm1, dword ptr [rax+4]; radius }
      G_DebugCircle(&ent->r.currentOrigin, *(float *)&_XMM1, &colorGreen, 0, 1, 1);
    }
    if ( v6->notifyTypes[1] )
    {
      __asm { vmovss  xmm1, dword ptr [rax+4]; radius }
      G_DebugCircle(&ent->r.currentOrigin, *(float *)&_XMM1, &colorRed, 0, 1, 1);
    }
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
  GMissile *v3; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  unsigned int v6; 
  const WeaponDef *v7; 
  unsigned int v21; 
  __int64 v22; 
  gentity_s *GEntity; 
  gentity_s *v24; 
  __int64 v38; 
  __int64 v39; 
  gentity_s *v40; 
  int *ignoreEnts; 
  int *ignoreEntsa; 
  PhysicsQuery_Collected<unsigned short> *collectedEnts; 
  PhysicsQuery_Collected<unsigned short> *collectedEntsa; 
  PhysicsQuery_Collected<unsigned short> v46; 
  const WeaponDef *v47; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  char v50[4096]; 

  _R14 = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2404, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  v3 = GMissile::ms_gMissileSystem;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &_R14->s);
  if ( WeaponForEntity->weaponIdx )
  {
    __asm { vmovaps [rsp+10E0h+var_30], xmm6 }
    v6 = 0;
    v47 = BG_WeaponDef(WeaponForEntity, 0);
    v7 = v47;
    _R13 = v47->notifyTypes[0];
    if ( _R13 )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [r14+130h]
        vmovss  xmm5, dword ptr [r14+134h]
      }
      v46.ids = (unsigned __int16 *)v50;
      v46.count = 0;
      v46.countMax = 2048;
      __asm
      {
        vmovss  xmm6, dword ptr [r13+4]
        vmovss  xmm0, dword ptr [r13+8]
        vmulss  xmm3, xmm0, cs:__real@3f000000
        vaddss  xmm2, xmm3, dword ptr [r14+138h]
        vsubss  xmm0, xmm4, xmm6
        vsubss  xmm1, xmm5, xmm6
        vmovss  dword ptr [rsp+10E0h+aabbMin], xmm0
        vmovss  dword ptr [rsp+10E0h+aabbMin+4], xmm1
        vsubss  xmm0, xmm2, xmm3
        vaddss  xmm1, xmm4, xmm6
        vmovss  dword ptr [rbp+0FE0h+aabbMin+8], xmm0
        vmovss  dword ptr [rsp+10E0h+aabbMax], xmm1
        vaddss  xmm0, xmm5, xmm6
        vaddss  xmm1, xmm2, xmm3
        vmovss  dword ptr [rsp+10E0h+aabbMax+4], xmm0
        vmovss  dword ptr [rsp+10E0h+aabbMax+8], xmm1
      }
      PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 33570816, 0, NULL, &v46, NULL, 1);
      v21 = 0;
      if ( v46.count )
      {
        do
        {
          v22 = v46.ids[v21];
          if ( (unsigned int)v22 >= 0x800 )
          {
            LODWORD(collectedEnts) = 2048;
            LODWORD(ignoreEnts) = v46.ids[v21];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEnts, collectedEnts) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v22].r.isInUse != g_entityIsInUse[v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( g_entityIsInUse[v22] )
          {
            GEntity = G_GetGEntity(v22);
            v24 = GEntity;
            if ( GEntity->health )
            {
              if ( G_Missile_ShouldNotifyPlayer(_R14, GEntity, _R13) )
                v3->NotifyEntity(v3, _R14, v24);
            }
          }
          ++v21;
        }
        while ( v21 < v46.count );
        v7 = v47;
        v6 = 0;
      }
    }
    _R13 = v7->notifyTypes[1];
    if ( _R13 )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [r14+130h]
        vmovss  xmm5, dword ptr [r14+134h]
      }
      v46.ids = (unsigned __int16 *)v50;
      v46.count = 0;
      v46.countMax = 2048;
      __asm
      {
        vmovss  xmm6, dword ptr [r13+4]
        vmovss  xmm0, dword ptr [r13+8]
        vmulss  xmm3, xmm0, cs:__real@3f000000
        vaddss  xmm2, xmm3, dword ptr [r14+138h]
        vsubss  xmm0, xmm4, xmm6
        vsubss  xmm1, xmm5, xmm6
        vmovss  dword ptr [rsp+10E0h+aabbMin], xmm0
        vmovss  dword ptr [rsp+10E0h+aabbMin+4], xmm1
        vsubss  xmm0, xmm2, xmm3
        vaddss  xmm1, xmm4, xmm6
        vmovss  dword ptr [rbp+0FE0h+aabbMin+8], xmm0
        vmovss  dword ptr [rsp+10E0h+aabbMax], xmm1
        vaddss  xmm0, xmm5, xmm6
        vaddss  xmm1, xmm3, xmm2
        vmovss  dword ptr [rsp+10E0h+aabbMax+4], xmm0
        vmovss  dword ptr [rsp+10E0h+aabbMax+8], xmm1
      }
      PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 0x800000, 0, NULL, &v46, NULL, 1);
      if ( v46.count )
      {
        do
        {
          v38 = v46.ids[v6];
          if ( (unsigned int)v38 >= 0x800 )
          {
            LODWORD(collectedEntsa) = 2048;
            LODWORD(ignoreEntsa) = v46.ids[v6];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEntsa, collectedEntsa) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v39 = v38;
          if ( g_entities[v38].r.isInUse != g_entityIsInUse[v38] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( g_entityIsInUse[v38] )
          {
            if ( (unsigned int)v38 >= 0x800 )
            {
              LODWORD(collectedEntsa) = 2048;
              LODWORD(ignoreEntsa) = v38;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEntsa, collectedEntsa) )
                __debugbreak();
            }
            if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
              __debugbreak();
            v40 = &g_entities[v39];
            if ( G_Missile_ShouldNotifyVehicle(_R14, &g_entities[v39], _R13) )
              v3->NotifyEntity(v3, _R14, v40);
          }
          ++v6;
        }
        while ( v6 < v46.count );
      }
    }
    __asm { vmovaps xmm6, [rsp+10E0h+var_30] }
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
  actor_s *v19; 
  gclient_s *client; 
  const playerState_s *EntityPlayerStateConst; 

  _RSI = outSpeedSq;
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2163, ASSERT_TYPE_ASSERT, "( player != nullptr )", (const char *)&queryFormat, "player != nullptr") )
    __debugbreak();
  *outTeam = TEAM_ZERO;
  *_RSI = 0.0;
  actor = player->actor;
  if ( !actor )
  {
    client = player->client;
    if ( !client || (client->flags & 1) == 0 && client->sess.sessionState == SESS_STATE_PLAYING )
    {
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(player);
      _RDI = EntityPlayerStateConst;
      if ( !EntityPlayerStateConst )
        return 1;
      if ( EntityPlayerStateConst->pm_type <= 1u )
      {
        if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
          __debugbreak();
        *outTeam = *(team_t *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)player->s.number) + 12);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+3Ch]
          vmovss  xmm2, dword ptr [rdi+40h]
          vmovss  xmm3, dword ptr [rdi+44h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vmovss  dword ptr [rsi], xmm2
        }
        G_Client_GetEyePosition(_RDI, outEyePos);
        return 1;
      }
    }
    return 0;
  }
  sentient = actor->sentient;
  if ( !sentient )
    return 0;
  *outTeam = sentient->eTeam;
  _RAX = player->actor;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+838h]
    vmovss  xmm2, dword ptr [rax+83Ch]
    vmovss  xmm3, dword ptr [rax+840h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rsi], xmm2
  }
  v19 = player->actor;
  outEyePos->v[0] = v19->eyeInfo.pos.v[0];
  outEyePos->v[1] = v19->eyeInfo.pos.v[1];
  outEyePos->v[2] = v19->eyeInfo.pos.v[2];
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
  int timeAtRest; 
  vec3_t outLandPos; 

  _RBX = pGrenade;
  if ( !G_Missile_IsGrenade(pGrenade) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1522, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( pGrenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( pGrenade )") )
    __debugbreak();
  predictLandTime = _RBX->c.missile.grenade.predictLandTime;
  if ( predictLandTime )
  {
    if ( level.time > predictLandTime )
    {
      _RBX->c.missile.grenade.predictLandTime = level.time;
      _RBX->c.mover.angle.pos1.v[0] = _RBX->r.currentOrigin.v[0];
      _RBX->c.mover.angle.pos1.v[1] = _RBX->r.currentOrigin.v[1];
      _RBX->c.mover.angle.pos1.v[2] = _RBX->r.currentOrigin.v[2];
    }
  }
  else
  {
    nextthink = _RBX->nextthink;
    clipmask = _RBX->clipmask;
    _RBX->clipmask = clipmask & 0xFDFFBFFF;
    v5 = G_Missile_PredictMissile(_RBX, nextthink - level.time, &outLandPos, 1, &timeAtRest);
    _RBX->c.missile.grenade.predictLandTime = timeAtRest;
    if ( v5 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+outLandPos]
        vmovss  xmm1, dword ptr [rsp+58h+outLandPos+4]
        vmovss  dword ptr [rbx+1FCh], xmm0
        vmovss  xmm0, dword ptr [rsp+58h+outLandPos+8]
        vmovss  dword ptr [rbx+204h], xmm0
        vmovss  dword ptr [rbx+200h], xmm1
      }
    }
    else
    {
      _RBX->c.mover.angle.pos1.v[0] = _RBX->r.currentOrigin.v[0];
      _RBX->c.mover.angle.pos1.v[1] = _RBX->r.currentOrigin.v[1];
      _RBX->c.mover.angle.pos1.v[2] = _RBX->r.currentOrigin.v[2];
    }
    _RBX->clipmask = clipmask;
  }
}

/*
==============
G_Missile_PredictMissile
==============
*/
__int64 G_Missile_PredictMissile(const gentity_s *ent, int duration, vec3_t *outLandPos, int allowBounce, int *timeAtRest)
{
  int v13; 
  bool inAltWeaponMode; 
  const Weapon *WeaponForEntity; 
  int lastHitCharacter; 
  int v19; 
  int v20; 
  int contentmask; 
  unsigned __int16 number; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  unsigned __int16 v30; 
  __int64 v31; 
  __int64 v32; 
  int v33; 
  GMissile *v34; 
  bool alwaysShatterGlassOnImpact; 
  int damage; 
  int time; 
  int ClipMask; 
  int v39; 
  const dvar_t *v54; 
  bool v56; 
  bool v57; 
  bool v58; 
  int v66; 
  int v67; 
  __int64 nextthink; 
  __int64 passEntityNum; 
  __int64 passEntityNum2; 
  bool alwaysShatterOnImpact; 
  bool detailTrace; 
  bool v111; 
  int v113; 
  int v114; 
  int v115; 
  int v117; 
  int timeDeltaMsec; 
  Weapon *r_weapon; 
  vec3_t trBase; 
  const WeaponDef *v121; 
  BgWeaponMap *weaponMap; 
  int *v123; 
  vec3_t *v124; 
  __int64 v125; 
  GEntityData v126; 
  vec3_t result; 
  vec3_t end; 
  vec3_t endpos; 
  vec3_t start; 
  trajectory_t_secure tr; 
  trace_t results; 
  GEntityMissileComponentData v133; 
  char v134; 
  void *retaddr; 

  _RAX = &retaddr;
  v125 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
  }
  v13 = allowBounce;
  v124 = outLandPos;
  _R15 = (gentity_s *)ent;
  v123 = timeAtRest;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1871, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [r15+10h]
    vmovups ymmword ptr [rbp+1B0h+tr.trType], ymm0
  }
  tr.trDelta.v[2] = _R15->s.lerp.pos.trDelta.v[2];
  BgTrajectory::LegacyEvaluateTrajectory(&tr, level.time, &result);
  *timeAtRest = _R15->nextthink;
  inAltWeaponMode = _R15->s.inAltWeaponMode;
  v111 = inAltWeaponMode;
  weaponMap = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, &_R15->s);
  r_weapon = (Weapon *)WeaponForEntity;
  v121 = BG_WeaponDef(WeaponForEntity, inAltWeaponMode);
  if ( !v121 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1885, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  lastHitCharacter = _R15->c.missile.lastHitCharacter;
  if ( lastHitCharacter )
  {
    v19 = lastHitCharacter - 1;
    if ( !G_IsEntityInUse(lastHitCharacter - 1) )
      v19 = 2047;
  }
  else
  {
    v19 = 2047;
  }
  v117 = v19;
  detailTrace = BG_WeaponRadiusDamageDetailTrace(WeaponForEntity, inAltWeaponMode);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  timeDeltaMsec = level.frameDuration;
  v20 = level.time + level.frameDuration;
  if ( level.time + level.frameDuration < level.time + duration )
  {
    __asm
    {
      vmovss  xmm11, cs:__real@3f333333
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm12, cs:__real@3e0a3d71
      vmovss  xmm10, cs:__real@3fc00000
    }
    while ( 1 )
    {
      BgTrajectory::LegacyEvaluateTrajectory(&tr, v20, &end);
      contentmask = _R15->clipmask;
      number = _R15->r.ownerNum.number;
      if ( !number )
        goto LABEL_46;
      v27 = number;
      v28 = number - 1;
      if ( v28 >= 0x800 )
      {
        LODWORD(passEntityNum2) = 2048;
        LODWORD(passEntityNum) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", passEntityNum, passEntityNum2) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v29 = v27 - 1;
      if ( g_entities[v29].r.isInUse != g_entityIsInUse[v29] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v29] )
      {
        LODWORD(passEntityNum2) = _R15->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", passEntityNum2) )
          __debugbreak();
      }
      v30 = _R15->r.ownerNum.number;
      if ( v30 )
      {
        if ( (unsigned int)v30 - 1 >= 0x7FF )
        {
          LODWORD(passEntityNum2) = 2047;
          LODWORD(passEntityNum) = v30 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", passEntityNum, passEntityNum2) )
            __debugbreak();
        }
        v31 = _R15->r.ownerNum.number;
        if ( (unsigned int)(v31 - 1) >= 0x800 )
        {
          LODWORD(passEntityNum2) = 2048;
          LODWORD(passEntityNum) = v31 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", passEntityNum, passEntityNum2) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v32 = v31 - 1;
        if ( g_entities[v32].r.isInUse != g_entityIsInUse[v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v32] )
        {
          LODWORD(passEntityNum2) = _R15->r.ownerNum.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", passEntityNum2) )
            __debugbreak();
        }
        v33 = (__int16)(_R15->r.ownerNum.number - 1);
      }
      else
      {
LABEL_46:
        v33 = 2047;
      }
      G_Missile_Trace(_R15, &results, &result, &end, &_R15->r.box, v33, v19, contentmask, detailTrace);
      if ( results.startsolid )
      {
LABEL_89:
        nextthink = 0i64;
        goto LABEL_91;
      }
      if ( Com_IsSurfaceTypeBreakableGlass(results.surfaceFlags) )
      {
        GEntityMissileComponentData::GEntityMissileComponentData(&v133, _R15);
        GEntityData::GEntityData(&v126, _R15, &v133);
        if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
          __debugbreak();
        v34 = GMissile::ms_gMissileSystem;
        if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1912, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
          __debugbreak();
        alwaysShatterGlassOnImpact = v121->alwaysShatterGlassOnImpact;
        damage = BG_GetDamage(WEAP_DMG_CALC_TYPE_DEFAULT, r_weapon, v111);
        time = level.time;
        ClipMask = BgEntityData::GetClipMask(&v126);
        alwaysShatterOnImpact = alwaysShatterGlassOnImpact;
        v39 = timeDeltaMsec;
        BgMissile::PenetrateGlass(v34, weaponMap, &v126, ClipMask, time, timeDeltaMsec, &results, &result, &end, damage, 1, alwaysShatterOnImpact);
        v133.__vftable = (GEntityMissileComponentData_vtbl *)&BgEntityComponentData::`vftable';
        v19 = v117;
      }
      else
      {
        v39 = timeDeltaMsec;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1B0h+end]
        vsubss  xmm1, xmm0, dword ptr [rbp+1B0h+result]
        vmovss  xmm5, [rbp+1B0h+results.fraction]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm0, xmm1, dword ptr [rbp+1B0h+result]
        vmovss  dword ptr [rbp+1B0h+endpos], xmm0
        vmovss  xmm1, dword ptr [rbp+1B0h+end+4]
        vsubss  xmm0, xmm1, dword ptr [rbp+1B0h+result+4]
        vmulss  xmm2, xmm0, xmm5
        vaddss  xmm3, xmm2, dword ptr [rbp+1B0h+result+4]
        vmovss  dword ptr [rbp+1B0h+endpos+4], xmm3
        vmovss  xmm0, dword ptr [rbp+1B0h+end+8]
        vsubss  xmm1, xmm0, dword ptr [rbp+1B0h+result+8]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [rbp+1B0h+result+8]
        vmovss  dword ptr [rbp+1B0h+endpos+8], xmm3
        vmovups xmm0, cs:__xmm@3f8000003f800000000000003f000000
        vmovups xmmword ptr [rbp+1B0h+var_C0.baseclass_0.baseclass_0.__vftable], xmm0
      }
      v54 = DVARINT_g_debugBullets;
      if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v54);
      if ( v54->current.integer == 5 )
        G_DebugLineWithDuration(&result, &endpos, (const vec4_t *)&v133, 1, 1000);
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+1B0h+endpos]
        vmovsd  qword ptr [rbp+1B0h+result], xmm0
      }
      result.v[2] = endpos.v[2];
      v56 = BG_WeaponSticksToWalls(r_weapon, v111);
      v57 = !v56;
      if ( v56 )
        break;
      v58 = BG_WeaponSticksToFloors(r_weapon, v111);
      __asm { vmovss  xmm8, dword ptr [rbp+1B0h+results.normal+8] }
      v57 = !v58;
      if ( v58 )
      {
        __asm { vcomiss xmm8, xmm11 }
LABEL_71:
        __asm
        {
          vmovss  xmm0, [rbp+1B0h+results.fraction]
          vcomiss xmm0, xmm9
        }
        goto LABEL_72;
      }
      __asm
      {
        vmovss  xmm0, [rbp+1B0h+results.fraction]
        vucomiss xmm0, xmm9
        vmovss  xmm1, dword ptr [rbp+1B0h+result]
        vmovss  dword ptr [rbp+1B0h+start], xmm1
        vmovss  xmm0, dword ptr [rbp+1B0h+result+4]
        vmovss  dword ptr [rbp+1B0h+start+4], xmm0
        vmovss  dword ptr [rbp+1B0h+end], xmm1
        vmovss  dword ptr [rbp+1B0h+end+4], xmm0
        vmovss  xmm1, dword ptr [rbp+1B0h+result+8]
        vaddss  xmm0, xmm12, xmm1
        vmovss  dword ptr [rbp+1B0h+start+8], xmm0
        vsubss  xmm1, xmm1, xmm10
        vmovss  dword ptr [rbp+1B0h+end+8], xmm1
      }
      v66 = _R15->clipmask;
      if ( EntHandle::isDefined(&_R15->r.ownerNum) )
        v67 = EntHandle::entnum(&_R15->r.ownerNum);
      else
        v67 = 2047;
      G_Missile_Trace(_R15, &results, &start, &end, &_R15->r.box, v67, v19, v66, detailTrace);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1B0h+end]
        vsubss  xmm1, xmm0, dword ptr [rbp+1B0h+start]
        vmovss  xmm5, [rbp+1B0h+results.fraction]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm0, xmm1, dword ptr [rbp+1B0h+start]
        vmovss  dword ptr [rbp+1B0h+endpos], xmm0
        vmovss  xmm1, dword ptr [rbp+1B0h+end+4]
        vsubss  xmm0, xmm1, dword ptr [rbp+1B0h+start+4]
        vmulss  xmm2, xmm0, xmm5
        vaddss  xmm3, xmm2, dword ptr [rbp+1B0h+start+4]
        vmovss  dword ptr [rbp+1B0h+endpos+4], xmm3
        vmovss  xmm0, dword ptr [rbp+1B0h+end+8]
        vsubss  xmm1, xmm0, dword ptr [rbp+1B0h+start+8]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [rbp+1B0h+start+8]
        vmovss  dword ptr [rbp+1B0h+endpos+8], xmm3
        vucomiss xmm5, xmm9
      }
      if ( v57 )
        goto LABEL_77;
      Trajectory_GetTrBase(&tr, &trBase);
      __asm
      {
        vaddss  xmm1, xmm10, dword ptr [rbp+1B0h+endpos+8]
        vsubss  xmm3, xmm1, dword ptr [rbp+1B0h+result+8]
        vaddss  xmm0, xmm3, dword ptr [rbp+1B0h+trBase+8]
        vmovss  dword ptr [rbp+1B0h+trBase+8], xmm0
      }
      Trajectory_SetTrBase(&tr, &trBase);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1B0h+endpos]
        vmovss  dword ptr [rbp+1B0h+result], xmm0
        vmovss  xmm1, dword ptr [rbp+1B0h+endpos+4]
        vmovss  dword ptr [rbp+1B0h+result+4], xmm1
        vaddss  xmm2, xmm10, dword ptr [rbp+1B0h+endpos+8]
        vmovss  dword ptr [rbp+1B0h+result+8], xmm2
      }
      v57 = 1;
      memset(&trBase, 0, sizeof(trBase));
LABEL_72:
      __asm
      {
        vmovss  xmm0, [rbp+1B0h+results.fraction]
        vucomiss xmm0, xmm9
      }
      if ( !v57 )
      {
        if ( (results.surfaceFlags & 4) != 0 )
          goto LABEL_89;
        if ( !allowBounce )
          goto LABEL_79;
        if ( !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&_R15->flags, ACTIVE, 0x12u) )
          goto LABEL_79;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vmulss  xmm1, xmm0, [rbp+1B0h+results.fraction]
          vcvttss2si eax, xmm1
        }
        PredictBounceMissile(_R15, &tr, &results, v20, v20 + _EAX - v39, &result, &endpos);
        tr.trTime = v20;
        if ( tr.trType == TR_STATIONARY )
        {
LABEL_79:
          *v123 = v20;
LABEL_80:
          v13 = allowBounce;
          goto LABEL_81;
        }
      }
LABEL_77:
      v20 += v39;
      if ( v20 >= level.time + duration )
        goto LABEL_80;
    }
    __asm { vmovss  xmm8, dword ptr [rbp+1B0h+results.normal+8] }
    goto LABEL_71;
  }
LABEL_81:
  __asm { vmovss  xmm0, dword ptr [rbp+1B0h+result] }
  _RAX = v124;
  __asm
  {
    vmovss  dword ptr [rax], xmm0
    vmovss  xmm1, dword ptr [rbp+1B0h+result+4]
    vmovss  dword ptr [rax+4], xmm1
    vmovss  xmm2, dword ptr [rbp+1B0h+result+8]
    vmovss  dword ptr [rax+8], xmm2
    vmovss  [rsp+2B0h+var_24C], xmm0
  }
  if ( (v113 & 0x7F800000) == 2139095040 )
    goto LABEL_94;
  __asm { vmovss  [rsp+2B0h+var_24C], xmm1 }
  if ( (v114 & 0x7F800000) == 2139095040 )
    goto LABEL_94;
  __asm { vmovss  [rsp+2B0h+var_24C], xmm2 }
  if ( (v115 & 0x7F800000) == 2139095040 )
  {
LABEL_94:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2007, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outLandPos )[0] ) && !IS_NAN( ( outLandPos )[1] ) && !IS_NAN( ( outLandPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outLandPos )[0] ) && !IS_NAN( ( outLandPos )[1] ) && !IS_NAN( ( outLandPos )[2] )") )
      __debugbreak();
  }
  if ( v13 && GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&_R15->flags, ACTIVE, 0x12u) )
    nextthink = (unsigned int)_R15->nextthink;
  else
    nextthink = (unsigned int)v20;
LABEL_91:
  _R11 = &v134;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return nextthink;
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
bool G_Missile_ShouldNotifyPlayer(const gentity_s *const missile, const gentity_s *const player, const WeaponEntityNotify *const entityNotify)
{
  const gentity_s *v16; 
  team_t eTeam; 
  sentient_s *sentient; 
  char v23; 
  gclient_s *client; 
  const playerState_s *EntityPlayerStateConst; 
  __int64 v37; 
  gentity_s *Attacker; 
  GUtils *Utils; 
  team_t v49; 
  int number; 
  bool result; 
  __int64 v56; 
  int locational; 
  unsigned __int8 *priorityMap; 
  Physics_QueryPhaseSelection phaseSelection; 
  int skipEntities[2]; 
  vec3_t outOrigin; 
  trace_t results; 
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovss  xmm0, dword ptr [rdx+130h]
    vmovss  xmm1, dword ptr [rdx+134h]
    vsubss  xmm4, xmm0, dword ptr [rcx+130h]
    vsubss  xmm2, xmm1, dword ptr [rcx+134h]
    vmovss  xmm5, dword ptr [r8+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm5, xmm5
    vcomiss xmm4, xmm1
  }
  _RDI = entityNotify;
  v16 = player;
  if ( (unsigned __int64)&v56 != _security_cookie )
    goto LABEL_26;
  _RAX = player->actor;
  eTeam = TEAM_ZERO;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  if ( _RAX )
  {
    sentient = _RAX->sentient;
    v23 = 0;
    if ( sentient )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+838h]
        vmovss  xmm2, dword ptr [rax+83Ch]
        vmovss  xmm3, dword ptr [rax+840h]
      }
      eTeam = sentient->eTeam;
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, dword ptr [rax+11Ch]
        vmulss  xmm1, xmm3, xmm3
        vmovss  dword ptr [rsp+138h+outOrigin], xmm0
        vaddss  xmm7, xmm2, xmm1
        vmovss  xmm1, dword ptr [rax+120h]
        vmovss  dword ptr [rsp+138h+outOrigin+4], xmm1
        vmovss  xmm0, dword ptr [rax+124h]
        vmovss  dword ptr [rsp+138h+outOrigin+8], xmm0
      }
      goto LABEL_14;
    }
  }
  else
  {
    client = player->client;
    if ( !client || (client->flags & 1) == 0 && client->sess.sessionState == SESS_STATE_PLAYING )
    {
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(player);
      _RSI = EntityPlayerStateConst;
      v23 = 0;
      if ( !EntityPlayerStateConst )
        goto LABEL_14;
      if ( EntityPlayerStateConst->pm_type <= 1u )
      {
        if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
          __debugbreak();
        v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)v16->s.number);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+3Ch]
          vmovss  xmm2, dword ptr [rsi+40h]
          vmovss  xmm3, dword ptr [rsi+44h]
        }
        eTeam = *(_DWORD *)(v37 + 12);
        __asm
        {
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm7, xmm2, xmm1
        }
        G_Client_GetEyePosition(_RSI, &outOrigin);
LABEL_14:
        __asm { vcomiss xmm6, dword ptr [rdi+0Ch] }
        if ( v23 && !G_Execution_IsInExecution(v16) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+0Ch]
            vmulss  xmm1, xmm0, xmm0
            vcomiss xmm7, xmm1
          }
        }
        if ( (_RDI->flags & 1) == 0 || (Attacker = G_Missile_GetAttacker(missile), Attacker->s.number != v16->s.number) && (level.teammode == TEAMMODE_FFA || (Utils = GUtils::GetUtils(), v49 = Utils->GetEntityTeam(Utils, Attacker), eTeam) && v49 && eTeam != v49) )
        {
          if ( (_RDI->flags & 2) == 0 )
            goto LABEL_25;
          number = missile->s.number;
          phaseSelection = All;
          priorityMap = NULL;
          locational = 1;
          skipEntities[0] = number;
          skipEntities[1] = v16->s.number;
          PhysicsQuery_LegacyTraceSkipEntities(PHYSICS_WORLD_ID_FIRST, &results, &outOrigin, &missile->r.currentOrigin, &bounds_origin, skipEntities, 2, 1, 41968017, 1, NULL, All);
          __asm
          {
            vmovss  xmm0, [rsp+138h+results.fraction]
            vcomiss xmm0, cs:__real@3f800000
          }
          if ( !v23 )
            goto LABEL_25;
        }
LABEL_26:
        result = 0;
        goto LABEL_27;
      }
    }
  }
LABEL_25:
  result = 1;
LABEL_27:
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
G_Missile_ShouldNotifyVehicle
==============
*/
bool G_Missile_ShouldNotifyVehicle(const gentity_s *const missileEntity, const gentity_s *const vehicleEntity, const WeaponEntityNotify *const entityNotify)
{
  _RSI = entityNotify;
  _RDI = vehicleEntity;
  if ( !missileEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2301, ASSERT_TYPE_ASSERT, "( missileEntity != nullptr )", (const char *)&queryFormat, "missileEntity != nullptr") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2302, ASSERT_TYPE_ASSERT, "( vehicleEntity != nullptr )", (const char *)&queryFormat, "vehicleEntity != nullptr") )
    __debugbreak();
  if ( _RDI->vehicle )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+130h]
      vmovss  xmm1, dword ptr [rdi+134h]
      vsubss  xmm4, xmm0, dword ptr [rbp+130h]
      vsubss  xmm2, xmm1, dword ptr [rbp+134h]
      vmovss  xmm5, dword ptr [rsi+4]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm1, xmm5, xmm5
      vcomiss xmm4, xmm1
    }
  }
  return 0;
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
  const vec3_t *v12; 
  int number; 
  team_t skipTeamCharacters; 
  EntHandle *p_ownerNum; 
  GUtils *Utils; 
  team_t (__fastcall *GetEntityTeam)(GUtils *, const gentity_s *); 
  gentity_s *v20; 
  bool v21; 
  __int64 EntityHitId; 
  gentity_s *v44; 
  unsigned int eType; 
  int v46; 
  gentity_s *GEntity; 
  unsigned __int8 surfType; 
  int *skipEntities; 
  __int64 skipEntityCount; 
  int v51[4]; 

  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vucomiss xmm0, dword ptr [r8]
  }
  v12 = end;
  _RSI = start;
  _RDI = results;
  number = 2047;
  __asm { vmovaps [rsp+0E8h+var_68], xmm7 }
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
      v20 = EntHandle::ent(p_ownerNum);
      skipTeamCharacters = GetEntityTeam(Utils, v20);
    }
  }
  v51[0] = passEntityNum;
  v51[1] = passEntityNum2;
  PhysicsQuery_LegacyGrenadeTrace(_RDI, _RSI, v12, bounds, number, v51, 2, skipTeamCharacters, contentmask, All, detailTrace, PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_SERVER_DETAIL);
  v21 = !_RDI->startsolid;
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( _RDI->startsolid )
  {
    _RDI->fraction = 0.0;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm4, xmm0, dword ptr [rbp+0]
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm5, xmm1, dword ptr [rbp+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vmovaps [rsp+0E8h+var_58], xmm6
      vsubss  xmm6, xmm0, dword ptr [rbp+8]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rdi+10h], xmm0
      vmulss  xmm0, xmm6, xmm2
      vmovaps xmm6, [rsp+0E8h+var_58]
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rdi+18h], xmm0
      vmovss  dword ptr [rdi+14h], xmm1
    }
  }
  __asm
  {
    vcomiss xmm7, dword ptr [rdi]
    vmovaps xmm7, [rsp+0E8h+var_68]
  }
  if ( !v21 )
  {
    EntityHitId = Trace_GetEntityHitId(_RDI);
    if ( (unsigned int)EntityHitId >= 0x800 )
    {
      LODWORD(skipEntityCount) = 2048;
      LODWORD(skipEntities) = EntityHitId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( ( 2048 ) )", "id doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntities, skipEntityCount) )
        __debugbreak();
    }
    v44 = &g_entities[EntityHitId];
    if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = (unsigned __int16)v44->s.eType;
    if ( (unsigned __int16)eType <= 0x15u )
    {
      v46 = 3014662;
      if ( _bittest(&v46, eType) )
      {
        GEntity = G_GetGEntity(_RDI->hitId);
        surfType = GEntity->s.surfType;
        if ( surfType >= 0x40u )
        {
          LODWORD(skipEntityCount) = 64;
          LODWORD(skipEntities) = surfType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 324, ASSERT_TYPE_ASSERT, "(unsigned)( hitEnt->s.surfType ) < (unsigned)( 64 )", "hitEnt->s.surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", skipEntities, skipEntityCount) )
            __debugbreak();
        }
        _RDI->surfaceFlags = (GEntity->s.surfType & 0x3F) << 19;
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
  _RAX = ScriptableSv_GetInstanceCommonContext(Components->missile.doorScriptableIndex);
  __asm { vmovss  xmm0, dword ptr [rax+30h] }
  return *(float *)&_XMM0;
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
  __int64 v7; 
  const gentity_s *v10; 
  int *v11; 
  int *v12; 
  __int64 v21; 
  __int64 v22; 
  float outSpeedScale; 

  v7 = attackerEntNum;
  if ( (unsigned int)attackerEntNum >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4135, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attackerEntNum, 2048) )
      __debugbreak();
    LODWORD(v22) = 2048;
    LODWORD(v21) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4137, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( attackerEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( attackerEntNum )") )
    __debugbreak();
  v10 = &g_entities[v7];
  v11 = outSpeed;
  if ( !outSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 171, ASSERT_TYPE_ASSERT, "(outSpeed)", (const char *)&queryFormat, "outSpeed") )
    __debugbreak();
  v12 = outSpeedUp;
  if ( !outSpeedUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 172, ASSERT_TYPE_ASSERT, "(outSpeedUp)", (const char *)&queryFormat, "outSpeedUp") )
    __debugbreak();
  BG_GetProjectileSpeed(r_weapon, isAlternate, v11, v12);
  G_Missile_GetScriptSpeedScale(v10, r_weapon, isAlternate, &outSpeedScale, (float *)&outSpeed);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi]
    vmulss  xmm1, xmm0, [rsp+58h+outSpeedScale]
    vcvttss2si eax, xmm1
  }
  *v11 = _EAX;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
    vmulss  xmm1, xmm0, dword ptr [rsp+58h+outSpeed]
    vcvttss2si eax, xmm1
  }
  *v12 = _EAX;
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
  __int64 v8; 
  gentity_s *Entity; 
  gentity_s *v12; 
  bool v13; 
  bool v14; 
  BgWeaponHandle *client; 
  gagent_s *agent; 
  GWeaponMap *Instance; 
  gagent_s *v18; 
  int grenadeTimeLeft; 
  int nextthink; 
  __int64 v23; 

  v8 = parentEntNum;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3695, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3699, ASSERT_TYPE_ASSERT, "( grenade )", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  v12 = NULL;
  if ( (_DWORD)v8 != 2047 )
  {
    if ( (unsigned int)v8 >= 0x800 )
    {
      LODWORD(v23) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3704, ASSERT_TYPE_ASSERT, "(unsigned)( parentEntNum ) < (unsigned)( ( 2048 ) )", "parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v23, 2048) )
        __debugbreak();
    }
    v12 = &g_entities[v8];
  }
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3713, ASSERT_TYPE_ASSERT, "(grenade)", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  BG_WeaponDef(r_weapon, isAlternate);
  if ( !BG_ProjectileActivateDist(r_weapon, isAlternate) || time > 0 )
  {
    v13 = BG_TimedDetonation(r_weapon, isAlternate);
    v14 = v13;
    if ( v12 )
    {
      client = (BgWeaponHandle *)v12->client;
      if ( client && !v13 && client[339].m_mapEntryId - 28 > 1 )
      {
        client[30].m_mapEntryId = 0;
        goto LABEL_36;
      }
      agent = v12->agent;
      if ( agent && !v14 )
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
          Entity->nextthink = serverTime + BG_GetHeldGrenadeFuse(r_weapon, isAlternate, &v12->client->ps);
          v12->client->ps.grenadeTimeLeft = 0;
          goto LABEL_36;
        }
      }
      v18 = v12->agent;
      if ( v18 )
      {
        grenadeTimeLeft = v18->playerState.grenadeTimeLeft;
        if ( grenadeTimeLeft )
        {
          Entity->nextthink = grenadeTimeLeft + serverTime;
          v12->agent->playerState.grenadeTimeLeft = 0;
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
    *(float *)&_XMM0 = G_Missile_GenerateRandomLifeTime(r_weapon, isAlternate, Entity->s.number);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si eax, xmm1
    }
    if ( !_EAX )
      _EAX = 30000;
    nextthink = serverTime + _EAX;
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
  const dvar_t *v10; 
  vec3_t start; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2647, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 2652, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  _RDI = &Entity->r.currentOrigin;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsp+68h+start], xmm0
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+68h+start+4], xmm1
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+68h+start+8], xmm0
  }
  G_GeneralLink(Entity);
  G_Main_RunThink(Entity);
  v10 = DCONST_DVARBOOL_bg_missileDebugDraw;
  if ( !DCONST_DVARBOOL_bg_missileDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
    G_DebugLineWithDuration(&start, _RDI, &colorWhite, 1, 1000);
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
  __int64 v37; 
  unsigned __int16 v38; 
  __int64 v42; 
  char v44; 
  char v56; 
  char v76; 
  bool v86; 
  __int64 v124; 
  __int64 v125; 
  vec3_t trBase; 
  int projectileSpeed[2]; 
  int projectileSpeedUp; 
  __int64 v134; 
  char v136; 
  void *retaddr; 

  _RAX = &retaddr;
  v134 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RBP = missile;
  if ( !missile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1374, ASSERT_TYPE_ASSERT, "( missile )", (const char *)&queryFormat, "missile") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &_RBP->s);
  BG_GetProjectileSpeed(WeaponForEntity, _RBP->s.inAltWeaponMode, projectileSpeed, &projectileSpeedUp);
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+2Ch]
    vmovss  xmm3, dword ptr [rbp+28h]
    vmovss  xmm5, dword ptr [rbp+30h]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vmovss  [rsp+158h+var_F4], xmm6
    vmovss  xmm13, cs:__real@80000000
    vcmpless xmm0, xmm6, xmm13
    vmovss  xmm11, cs:__real@3f800000
    vblendvps xmm1, xmm6, xmm11, xmm0
    vmovss  [rsp+158h+var_10C], xmm1
    vdivss  xmm2, xmm11, xmm1
    vmulss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsp+158h+vec], xmm0
    vmulss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rsp+158h+vec+4], xmm1
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+158h+vec+8], xmm0
    vcomiss xmm6, cs:__real@3727c5ac
  }
  if ( !v44 )
  {
    __asm
    {
      vxorps  xmm12, xmm12, xmm12
      vxorps  xmm6, xmm6, xmm6
      vmovss  [rsp+158h+var_118], xmm6
      vxorps  xmm7, xmm7, xmm7
      vmovss  [rsp+158h+var_114], xmm7
      vxorps  xmm8, xmm8, xmm8
      vmovss  [rsp+158h+var_110], xmm8
    }
    *(double *)&_XMM0 = G_Level_GetFrameDurationInSeconds();
    __asm { vmovss  [rsp+158h+var_10C], xmm0 }
    _RBX = &attrGlob.attractors[0].origin.v[2];
    v37 = 32i64;
    while ( 1 )
    {
      if ( !*((_BYTE *)_RBX - 16) || *((_WORD *)_RBX - 6) != 2047 && (!EntHandle::isDefined(&_RBP->parent) || *((unsigned __int16 *)_RBX - 6) != EntHandle::entnum(&_RBP->parent)) )
        goto LABEL_51;
      v38 = *((_WORD *)_RBX - 7);
      if ( v38 == 2047 )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbx-8]
          vmovss  xmm7, dword ptr [rbx-4]
          vmovss  xmm8, dword ptr [rbx]
        }
      }
      else
      {
        if ( v38 >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1408, ASSERT_TYPE_ASSERT, "( attrGlob.attractors[attractorIndex].entnum < ( 2048 ) )", (const char *)&queryFormat, "attrGlob.attractors[attractorIndex].entnum < MAX_GENTITIES") )
          __debugbreak();
        v42 = *((unsigned __int16 *)_RBX - 7);
        _RSI = &g_entities[v42];
        if ( (unsigned int)v42 >= 0x800 )
        {
          LODWORD(v125) = 2048;
          LODWORD(v124) = *((unsigned __int16 *)_RBX - 7);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v124, v125) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[(int)v42].r.isInUse != g_entityIsInUse[(int)v42] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[(int)v42] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1410, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( attrGlob.attractors[attractorIndex].entnum ) )", (const char *)&queryFormat, "G_IsEntityInUse( attrGlob.attractors[attractorIndex].entnum )") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&_RSI->flags, ACTIVE, 0x14u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1411, ASSERT_TYPE_ASSERT, "( ent->flags.TestFlag( BgEntityFlagsCommon::MISSILE_ATTRACTOR_OR_REPULSOR ) )", (const char *)&queryFormat, "ent->flags.TestFlag( BgEntityFlagsCommon::MISSILE_ATTRACTOR_OR_REPULSOR )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm6, dword ptr [rsi+130h]
          vmovss  xmm7, dword ptr [rsi+134h]
          vmovss  xmm8, dword ptr [rsi+138h]
        }
      }
      Trajectory_GetTrBase(&_RBP->s.lerp.pos, &trBase);
      __asm
      {
        vsubss  xmm9, xmm6, dword ptr [rsp+158h+trBase]
        vsubss  xmm10, xmm7, dword ptr [rsp+158h+trBase+4]
        vsubss  xmm8, xmm8, dword ptr [rsp+158h+trBase+8]
        vmovss  xmm3, dword ptr [rsp+158h+vec+4]
        vmulss  xmm1, xmm3, xmm10
        vmovss  xmm4, dword ptr [rsp+158h+vec]
        vmulss  xmm0, xmm4, xmm9
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm7, dword ptr [rsp+158h+vec+8]
        vmulss  xmm1, xmm7, xmm8
        vaddss  xmm15, xmm2, xmm1
        vcomiss xmm15, xmm12
      }
      if ( !(v44 | v56) )
        break;
      __asm
      {
        vmovss  xmm6, [rsp+158h+var_118]
        vmovss  xmm7, [rsp+158h+var_114]
        vmovss  xmm8, [rsp+158h+var_110]
      }
LABEL_50:
      memset(&trBase, 0, sizeof(trBase));
LABEL_51:
      _RBX += 7;
      if ( !--v37 )
      {
        __asm
        {
          vucomiss xmm6, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
          vucomiss xmm7, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
          vucomiss xmm8, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
        }
        goto LABEL_53;
      }
    }
    __asm
    {
      vxorps  xmm2, xmm15, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm4, xmm2
      vaddss  xmm6, xmm0, xmm9
      vmulss  xmm1, xmm3, xmm2
      vaddss  xmm5, xmm1, xmm10
      vmulss  xmm0, xmm7, xmm2
      vaddss  xmm4, xmm0, xmm8
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm7, xmm2, xmm2
      vcmpless xmm0, xmm7, xmm13
      vblendvps xmm1, xmm7, xmm11, xmm0
      vdivss  xmm0, xmm11, xmm1
      vmulss  xmm13, xmm0, xmm6
      vmulss  xmm14, xmm0, xmm5
      vmulss  xmm11, xmm0, xmm4
    }
    v76 = *((_BYTE *)_RBX - 15);
    __asm { vcomiss xmm7, cs:__real@3727c5ac }
    if ( v44 )
    {
      if ( v76 )
        goto LABEL_35;
      __asm
      {
        vmovaps xmm13, xmm12
        vmovaps xmm14, xmm12
        vmovss  xmm3, cs:__real@bf800000
        vmovaps xmm11, xmm3
      }
    }
    else
    {
      __asm { vmovss  xmm3, cs:__real@bf800000 }
    }
    if ( !v76 )
      __asm { vcomiss xmm11, xmm12 }
    __asm
    {
      vmulss  xmm1, xmm10, xmm10
      vmulss  xmm0, xmm9, xmm9
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm6, xmm2, xmm2
      vmovss  xmm0, dword ptr [rbx+8]
      vcomiss xmm6, xmm0
    }
    if ( !v76 )
    {
      __asm { vcomiss xmm0, xmm12 }
      v86 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1444, ASSERT_TYPE_ASSERT, "(attrGlob.attractors[attractorIndex].maxDist > 0)", (const char *)&queryFormat, "attrGlob.attractors[attractorIndex].maxDist > 0");
      if ( v86 )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+4]
        vdivss  xmm0, xmm2, dword ptr [rbx+8]
        vmulss  xmm1, xmm0, xmm6
        vsubss  xmm8, xmm2, xmm1
        vcomiss xmm15, xmm12
      }
      if ( !v86 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1447, ASSERT_TYPE_ASSERT, "(forwardDist > 0)", (const char *)&queryFormat, "forwardDist > 0") )
        __debugbreak();
      __asm
      {
        vcomiss xmm7, xmm12
        vmovss  xmm9, cs:__real@3f800000
        vdivss  xmm6, xmm9, xmm15
        vmulss  xmm0, xmm6, xmm7; X
      }
      *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
      __asm { vmulss  xmm4, xmm0, cs:__real@3f22f983 }
      _EAX = *((unsigned __int8 *)_RBX - 15);
      __asm { vsubss  xmm3, xmm4, xmm9 }
      _ECX = 0;
      __asm
      {
        vmovd   xmm1, ecx
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm4, xmm3, xmm2
        vmulss  xmm5, xmm8, xmm1
      }
      if ( (_BYTE)_EAX )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, [rsp+158h+projectileSpeed]
          vmulss  xmm1, xmm0, xmm7
          vmulss  xmm2, xmm1, xmm6
          vdivss  xmm3, xmm2, [rsp+158h+var_10C]
          vminss  xmm5, xmm3, xmm5
        }
      }
      __asm
      {
        vmulss  xmm0, xmm13, xmm5
        vaddss  xmm6, xmm0, [rsp+158h+var_118]
        vmovss  [rsp+158h+var_118], xmm6
        vmulss  xmm1, xmm14, xmm5
        vaddss  xmm7, xmm1, [rsp+158h+var_114]
        vmovss  [rsp+158h+var_114], xmm7
        vmulss  xmm0, xmm11, xmm5
        vaddss  xmm8, xmm0, [rsp+158h+var_110]
        vmovss  [rsp+158h+var_110], xmm8
      }
      goto LABEL_49;
    }
LABEL_35:
    __asm
    {
      vmovss  xmm6, [rsp+158h+var_118]
      vmovss  xmm7, [rsp+158h+var_114]
      vmovss  xmm8, [rsp+158h+var_110]
    }
LABEL_49:
    __asm
    {
      vmovss  xmm13, cs:__real@80000000
      vmovss  xmm11, cs:__real@3f800000
    }
    goto LABEL_50;
  }
LABEL_53:
  _R11 = &v136;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
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

void __fastcall GMissile::NotifyRadiusDamage(GMissile *this, const vec3_t *damageOrigin, double damageRadius, const int attackerEntNum, const Weapon *r_weapon, bool isAlternate)
{
  __int64 v7; 
  gentity_s *v8; 

  v7 = attackerEntNum;
  v8 = NULL;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( attackerEntNum != 2047 )
  {
    if ( (unsigned int)attackerEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3010, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attackerEntNum, 2048) )
      __debugbreak();
    v8 = &g_entities[v7];
  }
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  ((void (__fastcall *)(GCombat *, const vec3_t *, GCombat_vtbl *, gentity_s *))GCombat::ms_gCombatSystem->NotifyRadiusDamage)(GCombat::ms_gCombatSystem, damageOrigin, GCombat::ms_gCombatSystem->__vftable, v8);
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
  GMissile *v12; 
  const Weapon *WeaponForEntity; 
  WeaponDef *v14; 
  int v15; 
  unsigned __int16 EntityHitId; 
  bool inAltWeaponMode; 
  WeaponDef *weapDef; 
  vec3_t trBase; 
  BgWeaponMap *weaponMap; 
  __int64 v48; 
  GEntityMissileComponentData v49; 
  GEntityData v50; 
  vec3_t velocity; 
  vec3_t outRollSlideDir; 
  void *retaddr; 

  _RAX = &retaddr;
  v48 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1799, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  v12 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1802, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
    __debugbreak();
  weaponMap = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, &ent->s);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1806, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx != 0 )", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  inAltWeaponMode = ent->s.inAltWeaponMode;
  v14 = (WeaponDef *)BG_WeaponDef(WeaponForEntity, inAltWeaponMode);
  weapDef = v14;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1811, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v15 = (trace->surfaceFlags >> 19) & 0x3F;
  _RDI = &pos->trDelta;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsp+178h+velocity], xmm0
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+178h+velocity+4], xmm1
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+178h+velocity+8], xmm0
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) )
  {
    _RBP = DVARFLT_bg_gravity;
    if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm { vmovss  xmm1, dword ptr [rbp+28h] }
    v14 = weapDef;
  }
  else
  {
    __asm { vmovss  xmm1, cs:__real@44480000 }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm1
    vmulss  xmm3, xmm1, cs:__real@3a83126f
    vmovss  xmm2, dword ptr [rsp+178h+velocity+8]
    vsubss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rsp+178h+velocity+8], xmm0
  }
  *(double *)&_XMM0 = BgMissile::GrenadeBounceMirrorVelocity(v12, &velocity, &trace->normal, v14, &pos->trDelta);
  __asm { vmovaps xmm6, xmm0 }
  if ( !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&ent->flags, ACTIVE, 0x12u) )
    goto LABEL_26;
  GEntityMissileComponentData::GEntityMissileComponentData(&v49, (gentity_s *)ent);
  GEntityData::GEntityData(&v50, (gentity_s *)ent, &v49);
  if ( BgMissile::IsGrenade(v12, weaponMap, &v50) )
  {
    EntityHitId = Trace_GetEntityHitId(trace);
    __asm { vmovaps xmm2, xmm6; dot }
    if ( BgMissile::GrenadeBounceVelocity(v12, &velocity, *(float *)&_XMM2, &trace->normal, v15, v14, pos, (float *)&weapDef, &outRollSlideDir, EntityHitId) )
      goto LABEL_28;
  }
  if ( BgMissile::MissileShouldStopAtImpact(v12, WeaponForEntity, inAltWeaponMode, trace, &pos->trDelta, &v50) )
  {
LABEL_28:
    Trajectory_SetTrBase(pos, endpos);
    *(_QWORD *)&pos->trType = 0i64;
    pos->trDuration = 0;
    *(_QWORD *)_RDI->v = 0i64;
    pos->trDelta.v[2] = 0.0;
  }
  else
  {
LABEL_26:
    __asm
    {
      vmovss  xmm2, cs:__real@3dcccccd
      vmulss  xmm4, xmm2, dword ptr [r13+10h]
      vmulss  xmm5, xmm2, dword ptr [r13+14h]
      vmulss  xmm3, xmm2, dword ptr [r13+18h]
      vxorps  xmm1, xmm1, xmm1
      vcmpltss xmm0, xmm1, xmm3
      vblendvps xmm2, xmm3, xmm1, xmm0
      vaddss  xmm0, xmm4, dword ptr [rax]
      vmovss  dword ptr [rsp+178h+trBase], xmm0
      vaddss  xmm1, xmm5, dword ptr [rax+4]
      vmovss  dword ptr [rsp+178h+trBase+4], xmm1
      vaddss  xmm0, xmm2, dword ptr [rax+8]
      vmovss  dword ptr [rsp+178h+trBase+8], xmm0
    }
    Trajectory_SetTrBase(pos, &trBase);
    pos->trTime = time;
    memset(&trBase, 0, sizeof(trBase));
  }
  __asm { vmovaps xmm6, [rsp+178h+var_48] }
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
  __int64 v18; 
  int v20; 
  __int64 v21; 
  int v22; 
  char v24; 
  char v25; 

  v11 = inflictorEntNum;
  v13 = attackerEntNum;
  if ( (unsigned int)inflictorEntNum >= 0x800 )
  {
    v22 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3021, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( 2048 ) )", "inflictorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", inflictorEntNum, v22) )
      __debugbreak();
  }
  if ( (unsigned int)v13 >= 0x800 )
  {
    LODWORD(v21) = 2048;
    LODWORD(v18) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 3022, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v21) )
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
      __asm { vmovss  xmm0, [rsp+78h+coneAngleCos] }
      v25 = 1;
      v24 = 0;
      __asm { vmovss  dword ptr [rsp+78h+var_50], xmm0 }
      ((void (__fastcall *)(GCombat *, const vec3_t *, gentity_s *, gentity_s *, const BgExplosionDamageRangeInfo *, int, const vec3_t *, gentity_s *, meansOfDeath_t, const Weapon *, bool, char, char))GCombat::ms_gCombatSystem->RadiusDamage)(GCombat::ms_gCombatSystem, origin, v14, v15, damageRangeInfo, v20, coneDirection, v16, mod, r_weapon, isAlternate, v24, v25);
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
  float fmt; 
  BgWeaponParms *v17; 
  int v18; 
  vec3_t *v19; 

  v11 = creatorEntNum;
  if ( (unsigned int)creatorEntNum >= 0x800 )
  {
    v18 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4125, ASSERT_TYPE_ASSERT, "(unsigned)( creatorEntNum ) < (unsigned)( ( 2048 ) )", "creatorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", creatorEntNum, v18) )
      __debugbreak();
    LODWORD(v19) = 2048;
    LODWORD(v17) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, v19) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 4126, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( creatorEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( creatorEntNum )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+58h+spread]
    vmovss  dword ptr [rsp+58h+fmt], xmm0
  }
  G_Weapon_RocketLauncher_Fire(&g_entities[v11], r_weapon, isAlternate, hand, fmt, wp, gunVel, gameTime, fireParms, magicBullet);
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
  int time; 
  const bitarray<224> *v14; 
  const bitarray<224> *AllTeamFlags; 
  int timeAtRest; 
  vec3_t outLandPos; 

  _RBX = missile;
  if ( !missile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1552, ASSERT_TYPE_ASSERT, "( missile )", (const char *)&queryFormat, "missile") )
    __debugbreak();
  EntHandlerList = G_Main_GetEntHandlerList(_RBX);
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &_RBX->s);
  v5 = BG_WeaponDef(WeaponForEntity, _RBX->s.inAltWeaponMode);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1559, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !G_Missile_IsGrenade(_RBX) || EntHandlerList->methodOfDeath != MOD_GRENADE || v5->offhandClass == OFFHAND_CLASS_OTHER )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
    else
      AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    Actor_BroadcastPointEvent(_RBX, AI_EV_PROJECTILE_PING, AllTeamFlags, &_RBX->r.currentOrigin);
    return;
  }
  if ( !G_Missile_IsGrenade(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1522, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( pGrenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( pGrenade )") )
    __debugbreak();
  predictLandTime = _RBX->c.missile.grenade.predictLandTime;
  if ( predictLandTime )
  {
    time = level.time;
    if ( level.time <= predictLandTime )
      goto LABEL_21;
    _RBX->c.missile.grenade.predictLandTime = level.time;
    _RBX->c.mover.angle.pos1.v[0] = _RBX->r.currentOrigin.v[0];
    _RBX->c.mover.angle.pos1.v[1] = _RBX->r.currentOrigin.v[1];
    _RBX->c.mover.angle.pos1.v[2] = _RBX->r.currentOrigin.v[2];
  }
  else
  {
    clipmask = _RBX->clipmask;
    nextthink = _RBX->nextthink;
    _RBX->clipmask = clipmask & 0xFDFFBFFF;
    v9 = G_Missile_PredictMissile(_RBX, nextthink - level.time, &outLandPos, 1, &timeAtRest);
    _RBX->c.missile.grenade.predictLandTime = timeAtRest;
    if ( v9 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+outLandPos]
        vmovss  xmm1, dword ptr [rsp+58h+outLandPos+4]
        vmovss  dword ptr [rbx+1FCh], xmm0
        vmovss  xmm0, dword ptr [rsp+58h+outLandPos+8]
        vmovss  dword ptr [rbx+204h], xmm0
        vmovss  dword ptr [rbx+200h], xmm1
      }
    }
    else
    {
      _RBX->c.mover.angle.pos1.v[0] = _RBX->r.currentOrigin.v[0];
      _RBX->c.mover.angle.pos1.v[1] = _RBX->r.currentOrigin.v[1];
      _RBX->c.mover.angle.pos1.v[2] = _RBX->r.currentOrigin.v[2];
    }
    _RBX->clipmask = clipmask;
  }
  time = level.time;
LABEL_21:
  if ( time - _RBX->c.item[0].ammoCount >= 250 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      v14 = Com_TeamsSP_GetAllTeamFlags();
    else
      v14 = Com_TeamsMP_GetAllTeamFlags();
    Actor_BroadcastPointEvent(_RBX, AI_EV_GRENADE_PING, v14, &_RBX->r.currentOrigin);
    _RBX->c.item[0].ammoCount = level.time;
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

void __fastcall Scr_MissileCreateAttractorEnt(scrContext_t *scrContext, double _XMM1_8)
{
  unsigned int FreeAttractor; 
  gentity_s *Entity; 
  char v9; 
  char v10; 
  gentity_s *v11; 
  unsigned __int16 v12; 

  FreeAttractor = Missile_GetFreeAttractor(scrContext);
  _R14 = &attrGlob;
  _RBX = FreeAttractor;
  attrGlob.attractors[_RBX].isAttractor = 1;
  Entity = GScr_GetEntity(0);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovss  dword ptr [rbx+r14+14h], xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovss  dword ptr [rbx+r14+18h], xmm0
  }
  if ( v9 | v10 )
    Scr_ParamError(COM_ERR_1930, scrContext, 2u, "maxDist must be greater than zero");
  attrGlob.attractors[_RBX].entnum = truncate_cast<unsigned short,int>(Entity->s.number);
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::SetFlagInternal(&Entity->flags, ACTIVE, 0x14u);
  if ( Scr_GetNumParam(scrContext) <= 3 )
  {
    v12 = 2047;
  }
  else
  {
    v11 = GScr_GetEntity(3u);
    v12 = truncate_cast<unsigned short,int>(v11->s.number);
  }
  attrGlob.attractors[_RBX].attacker = v12;
  attrGlob.attractors[_RBX].inUse = 1;
  Scr_AddInt(scrContext, FreeAttractor);
}

/*
==============
Scr_MissileCreateAttractorOrigin
==============
*/

void __fastcall Scr_MissileCreateAttractorOrigin(scrContext_t *scrContext, double _XMM1_8)
{
  unsigned int FreeAttractor; 
  unsigned __int16 v7; 
  char v9; 
  char v10; 
  gentity_s *Entity; 

  _R14 = &attrGlob;
  FreeAttractor = Missile_GetFreeAttractor(scrContext);
  _RDI = FreeAttractor;
  v7 = 2047;
  attrGlob.attractors[_RDI].isAttractor = 1;
  attrGlob.attractors[_RDI].entnum = 2047;
  Scr_GetVector(scrContext, 0, &attrGlob.attractors[_RDI].origin);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovss  dword ptr [rdi+r14+14h], xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovss  dword ptr [rdi+r14+18h], xmm0
  }
  if ( v9 | v10 )
    Scr_ParamError(COM_ERR_1931, scrContext, 2u, "maxDist must be greater than zero");
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    Entity = GScr_GetEntity(3u);
    v7 = truncate_cast<unsigned short,int>(Entity->s.number);
  }
  attrGlob.attractors[_RDI].attacker = v7;
  attrGlob.attractors[_RDI].inUse = 1;
  Scr_AddInt(scrContext, FreeAttractor);
}

/*
==============
Scr_MissileCreateRepulsorEnt
==============
*/

void __fastcall Scr_MissileCreateRepulsorEnt(scrContext_t *scrContext, double _XMM1_8)
{
  unsigned int FreeAttractor; 
  gentity_s *Entity; 
  char v9; 
  char v10; 
  gentity_s *v11; 
  unsigned __int16 v12; 

  FreeAttractor = Missile_GetFreeAttractor(scrContext);
  _R14 = &attrGlob;
  _RSI = FreeAttractor;
  attrGlob.attractors[_RSI].isAttractor = 0;
  Entity = GScr_GetEntity(0);
  attrGlob.attractors[_RSI].entnum = truncate_cast<unsigned short,int>(Entity->s.number);
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::SetFlagInternal(&Entity->flags, ACTIVE, 0x14u);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovss  dword ptr [rsi+r14+14h], xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovss  dword ptr [rsi+r14+18h], xmm0
  }
  if ( v9 | v10 )
    Scr_ParamError(COM_ERR_1932, scrContext, 2u, "maxDist must be greater than zero");
  if ( Scr_GetNumParam(scrContext) <= 3 )
  {
    v12 = 2047;
  }
  else
  {
    v11 = GScr_GetEntity(3u);
    v12 = truncate_cast<unsigned short,int>(v11->s.number);
  }
  attrGlob.attractors[_RSI].attacker = v12;
  attrGlob.attractors[_RSI].inUse = 1;
  Scr_AddInt(scrContext, FreeAttractor);
}

/*
==============
Scr_MissileCreateRepulsorOrigin
==============
*/

void __fastcall Scr_MissileCreateRepulsorOrigin(scrContext_t *scrContext, double _XMM1_8)
{
  unsigned int FreeAttractor; 
  unsigned __int16 v7; 
  char v9; 
  char v10; 
  gentity_s *Entity; 

  _R14 = &attrGlob;
  FreeAttractor = Missile_GetFreeAttractor(scrContext);
  _RDI = FreeAttractor;
  v7 = 2047;
  attrGlob.attractors[_RDI].isAttractor = 0;
  attrGlob.attractors[_RDI].entnum = 2047;
  Scr_GetVector(scrContext, 0, &attrGlob.attractors[_RDI].origin);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovss  dword ptr [rdi+r14+14h], xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovss  dword ptr [rdi+r14+18h], xmm0
  }
  if ( v9 | v10 )
    Scr_ParamError(COM_ERR_1933, scrContext, 2u, "maxDist must be greater than zero");
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    Entity = GScr_GetEntity(3u);
    v7 = truncate_cast<unsigned short,int>(Entity->s.number);
  }
  attrGlob.attractors[_RDI].attacker = v7;
  attrGlob.attractors[_RDI].inUse = 1;
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

