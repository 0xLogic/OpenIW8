/*
==============
CgMissile::DirectImpactDamage
==============
*/

void __fastcall CgMissile::DirectImpactDamage(CgMissile *this, BgEntityData *entityData, const int hitEntNum, hitLocation_t hitLocation, const meansOfDeath_t methodOfDeath, vec3_t *hitVelocity, const int damage, const WeaponDef *weapDef, const bool shouldExplode, const int explodeOnImpact, const trace_t *trace, const vec3_t *dir, bool *outShouldTakeRadiusDamage)
{
  ?DirectImpactDamage@CgMissile@@MEBAXPEAVBgEntityData@@HW4hitLocation_t@@W4meansOfDeath_t@@AEATvec3_t@@HPEBUWeaponDef@@_NHPEBUtrace_t@@AEBT5@PEA_N@Z(this, entityData, hitEntNum, hitLocation, methodOfDeath, hitVelocity, damage, weapDef, shouldExplode, explodeOnImpact, trace, dir, outShouldTakeRadiusDamage);
}

/*
==============
CgMissile::GetSplashMethodOfDeath
==============
*/

meansOfDeath_t __fastcall CgMissile::GetSplashMethodOfDeath(CgMissile *this, const BgEntityData *entityData)
{
  return ?GetSplashMethodOfDeath@CgMissile@@MEBA?AW4meansOfDeath_t@@PEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::GetEntityTransform
==============
*/

bool __fastcall CgMissile::GetEntityTransform(CgMissile *this, const int entNum, vec3_t *outOrigin, vec3_t *outAngles)
{
  return ?GetEntityTransform@CgMissile@@MEBA_NHAEATvec3_t@@0@Z(this, entNum, outOrigin, outAngles);
}

/*
==============
CgMissile::CreateWaterSplash
==============
*/

void __fastcall CgMissile::CreateWaterSplash(CgMissile *this, const BgEntityData *entityData, const trace_t *trace, const vec3_t *endPos)
{
  ?CreateWaterSplash@CgMissile@@MEBAXPEBVBgEntityData@@PEBUtrace_t@@AEBTvec3_t@@@Z(this, entityData, trace, endPos);
}

/*
==============
CgMissile::GlassRestorePiece
==============
*/

void __fastcall CgMissile::GlassRestorePiece(CgMissile *this, unsigned int pieceIndex, unsigned __int16 health)
{
  ?GlassRestorePiece@CgMissile@@MEBAXIG@Z(this, pieceIndex, health);
}

/*
==============
CgMissile::ProjectileImpactSplashNotify
==============
*/

void __fastcall CgMissile::ProjectileImpactSplashNotify(CgMissile *this, const int entNum, const Weapon *weapon, const vec3_t *pos, const int explosionRadius, const int hitEntNum)
{
  ?ProjectileImpactSplashNotify@CgMissile@@MEBAXHAEBUWeapon@@AEBTvec3_t@@HH@Z(this, entNum, weapon, pos, explosionRadius, hitEntNum);
}

/*
==============
CgMissile::IsScriptableEntity
==============
*/

bool __fastcall CgMissile::IsScriptableEntity(CgMissile *this, const int entNum)
{
  return ?IsScriptableEntity@CgMissile@@MEBA_NH@Z(this, entNum);
}

/*
==============
CgMissile::OnImpact
==============
*/

void __fastcall CgMissile::OnImpact(CgMissile *this, BgEntityData *entityData, const int hitEntNum)
{
  ?OnImpact@CgMissile@@MEBAXPEAVBgEntityData@@H@Z(this, entityData, hitEntNum);
}

/*
==============
CgMissile::SpawnMissileEntity
==============
*/

void __fastcall CgMissile::SpawnMissileEntity(CgMissile *this, const int parentEntNum, const Weapon *r_grenadeWeapon, const bool isAlternate, const bool isRocket, const int serverTime, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  ?SpawnMissileEntity@CgMissile@@MEBAXHAEBUWeapon@@_N1HPEAVBgEntityData@@PEAVBgEntityComponentData@@@Z(this, parentEntNum, r_grenadeWeapon, isAlternate, isRocket, serverTime, outEntityData, outComponentData);
}

/*
==============
CgMissile::FinalizeGrenadeThrow
==============
*/

void __fastcall CgMissile::FinalizeGrenadeThrow(CgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, const int parentEntNum, const float cookPercentage, const XModel *projectileModel, const bool hasActivationDistance, const BgEntityData *rethrowEntityData)
{
  ?FinalizeGrenadeThrow@CgMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@AEBUWeapon@@_NW4PlayerHandIndex@@HMPEBUXModel@@3PEBV3@@Z(this, weaponMap, entityData, r_grenadeWeapon, isAlternate, hand, parentEntNum, cookPercentage, projectileModel, hasActivationDistance, rethrowEntityData);
}

/*
==============
CG_Missile_HasPredictedMissileForTime
==============
*/

bool __fastcall CG_Missile_HasPredictedMissileForTime(const int serverTime)
{
  return ?CG_Missile_HasPredictedMissileForTime@@YA_NH@Z(serverTime);
}

/*
==============
CgMissile::ProjectileImpactRemoteEyesNotify
==============
*/

void __fastcall CgMissile::ProjectileImpactRemoteEyesNotify(CgMissile *this, const int entNum, const Weapon *weapon, const vec3_t *pos)
{
  ?ProjectileImpactRemoteEyesNotify@CgMissile@@MEBAXHAEBUWeapon@@AEBTvec3_t@@@Z(this, entNum, weapon, pos);
}

/*
==============
CgMissile::StuckNotify
==============
*/

void __fastcall CgMissile::StuckNotify(CgMissile *this, BgEntityData *entityData, const int hitEntNum, scr_string_t partName, const unsigned int surfaceFlags, const vec3_t *vel, const vec3_t *pos, const vec3_t *normal)
{
  ?StuckNotify@CgMissile@@MEBAXPEAVBgEntityData@@HW4scr_string_t@@IAEBTvec3_t@@22@Z(this, entityData, hitEntNum, partName, surfaceFlags, vel, pos, normal);
}

/*
==============
CgMissile::VehicleTrophyTestMissile
==============
*/

void __fastcall CgMissile::VehicleTrophyTestMissile(CgMissile *this, BgEntityData *entityData, const vec3_t *start, const vec3_t *end)
{
  ?VehicleTrophyTestMissile@CgMissile@@MEBAXPEAVBgEntityData@@AEBTvec3_t@@1@Z(this, entityData, start, end);
}

/*
==============
CgMissile::GetMuzzleOrientation
==============
*/

void __fastcall CgMissile::GetMuzzleOrientation(CgMissile *this, const int entNum, BgWeaponParms *outWP, float *outSpread)
{
  ?GetMuzzleOrientation@CgMissile@@QEBAXHPEAUBgWeaponParms@@PEAM@Z(this, entNum, outWP, outSpread);
}

/*
==============
CgMissile::GetMuzzleOrientation
==============
*/

void __fastcall CgMissile::GetMuzzleOrientation(CgMissile *this, const int entNum, BgWeaponParms *outWP)
{
  ?GetMuzzleOrientation@CgMissile@@QEBAXHPEAUBgWeaponParms@@@Z(this, entNum, outWP);
}

/*
==============
CgMissile::GetEntityState
==============
*/

entityState_t *__fastcall CgMissile::GetEntityState(CgMissile *this, const int entNum)
{
  return ?GetEntityState@CgMissile@@MEBAPEAUentityState_t@@H@Z(this, entNum);
}

/*
==============
CgMissile::SetEntityWeapon
==============
*/

void __fastcall CgMissile::SetEntityWeapon(CgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *weapon)
{
  ?SetEntityWeapon@CgMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@AEBUWeapon@@@Z(this, weaponMap, entityData, weapon);
}

/*
==============
CgMissile::MissileTrajectoryClientControlled
==============
*/

void __fastcall CgMissile::MissileTrajectoryClientControlled(CgMissile *this, const BgWeaponMap *weaponMap, const int simulationTime, const int timeDeltaMsec, BgEntityData *entityData, vec3_t *result)
{
  ?MissileTrajectoryClientControlled@CgMissile@@MEBAXPEBVBgWeaponMap@@HHPEAVBgEntityData@@AEATvec3_t@@@Z(this, weaponMap, simulationTime, timeDeltaMsec, entityData, result);
}

/*
==============
CgMissile::EvaluatePosTrajectoryDelta
==============
*/

void __fastcall CgMissile::EvaluatePosTrajectoryDelta(CgMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outPos)
{
  ?EvaluatePosTrajectoryDelta@CgMissile@@MEBAXPEBVBgEntityData@@HAEATvec3_t@@@Z(this, entityData, atTime, outPos);
}

/*
==============
CgMissile::UpdateMissilePrediction
==============
*/

void __fastcall CgMissile::UpdateMissilePrediction(CgMissile *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed)
{
  ?UpdateMissilePrediction@CgMissile@@QEAAXPEAUCgPredictedEntity@@HHH@Z(this, ent, prevUpdateTime, updateTime, timeElapsed);
}

/*
==============
CgMissile::InitGrenadeTimer
==============
*/

void __fastcall CgMissile::InitGrenadeTimer(CgMissile *this, BgEntityData *entityData, const int parentEntNum, const Weapon *r_weapon, const bool isAlternate, const int serverTime, const int time)
{
  ?InitGrenadeTimer@CgMissile@@MEBAXPEAVBgEntityData@@HAEBUWeapon@@_NHH@Z(this, entityData, parentEntNum, r_weapon, isAlternate, serverTime, time);
}

/*
==============
CgMissile::ApplyAttractorsRepulsors
==============
*/

void __fastcall CgMissile::ApplyAttractorsRepulsors(CgMissile *this, BgEntityData *entityData)
{
  ?ApplyAttractorsRepulsors@CgMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::DrawMissileDebug
==============
*/

void __fastcall CgMissile::DrawMissileDebug(CgMissile *this, const BgEntityData *entityData, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  ?DrawMissileDebug@CgMissile@@UEBAXPEBVBgEntityData@@AEBTvec3_t@@1AEBTvec4_t@@@Z(this, entityData, start, end, color);
}

/*
==============
CgMissile::TriggerDamageGrenadeTouch
==============
*/

void __fastcall CgMissile::TriggerDamageGrenadeTouch(CgMissile *this, const int activatorEntNum, const vec3_t *vStart, const vec3_t *vEnd, int iDamage)
{
  ?TriggerDamageGrenadeTouch@CgMissile@@MEBAXHAEBTvec3_t@@0H@Z(this, activatorEntNum, vStart, vEnd, iDamage);
}

/*
==============
CgMissile::Explode
==============
*/

void __fastcall CgMissile::Explode(CgMissile *this, BgEntityData *entityData)
{
  ?Explode@CgMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::PreAddPacketEntitiesUpdateMissile
==============
*/

void __fastcall CgMissile::PreAddPacketEntitiesUpdateMissile(CgMissile *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed)
{
  ?PreAddPacketEntitiesUpdateMissile@CgMissile@@QEAAXPEAUCgPredictedEntity@@HHH@Z(this, ent, prevUpdateTime, updateTime, timeElapsed);
}

/*
==============
CgMissile::DrawAttractorDebug
==============
*/

void __fastcall CgMissile::DrawAttractorDebug(CgMissile *this)
{
  ?DrawAttractorDebug@CgMissile@@UEBAXXZ(this);
}

/*
==============
CgMissile::GrenadeLauncherFire
==============
*/

void __fastcall CgMissile::GrenadeLauncherFire(CgMissile *this, const int creatorEntNum, const int gameTime, const Weapon *r_grenade, const PlayerHandIndex hand, const BgWeaponParms *wp)
{
  ?GrenadeLauncherFire@CgMissile@@UEAAXHHAEBUWeapon@@W4PlayerHandIndex@@PEBUBgWeaponParms@@@Z(this, creatorEntNum, gameTime, r_grenade, hand, wp);
}

/*
==============
CgMissile::IsEntityValid
==============
*/

bool __fastcall CgMissile::IsEntityValid(CgMissile *this, const int entNum)
{
  return ?IsEntityValid@CgMissile@@MEBA_NH@Z(this, entNum);
}

/*
==============
CgMissile::TestEntityFlag
==============
*/

bool __fastcall CgMissile::TestEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsCommon flag)
{
  return ?TestEntityFlag@CgMissile@@MEBA_NHW4BgEntityFlagsCommon@@@Z(this, entNum, flag);
}

/*
==============
CgMissile::GetScaledProjectileSpeed
==============
*/

void __fastcall CgMissile::GetScaledProjectileSpeed(CgMissile *this, const int attackerEntNum, const Weapon *r_weapon, bool isAlternate, int *outSpeed, int *outSpeedUp)
{
  ?GetScaledProjectileSpeed@CgMissile@@UEBAXHAEBUWeapon@@_NPEAH2@Z(this, attackerEntNum, r_weapon, isAlternate, outSpeed, outSpeedUp);
}

/*
==============
CgMissile::GetPhysicsMainWorldId
==============
*/

Physics_WorldId __fastcall CgMissile::GetPhysicsMainWorldId(CgMissile *this)
{
  return ?GetPhysicsMainWorldId@CgMissile@@UEBA?AW4Physics_WorldId@@XZ(this);
}

/*
==============
CgMissile::DebugText
==============
*/

void CgMissile::DebugText(CgMissile *this, const char *fmt, ...)
{
  ?DebugText@CgMissile@@UEBAXPEBDZZ(this, fmt);
}

/*
==============
CgMissile::SetEntityFlag
==============
*/

void __fastcall CgMissile::SetEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsMP flag)
{
  ?SetEntityFlag@CgMissile@@MEBAXHW4BgEntityFlagsMP@@@Z(this, entNum, flag);
}

/*
==============
CgMissile::BroadcastActorEvents
==============
*/

void __fastcall CgMissile::BroadcastActorEvents(CgMissile *this, BgEntityData *entityData)
{
  ?BroadcastActorEvents@CgMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::RadiusDamage
==============
*/

void __fastcall CgMissile::RadiusDamage(CgMissile *this, const vec3_t *origin, const int inflictorEntNum, const int attackerEntNum, const BgExplosionDamageRangeInfo *damageRangeInfo, float coneAngleCos, const vec3_t *coneDirection, const int ignoreEntNum, meansOfDeath_t mod, const Weapon *r_weapon, bool isAlternate)
{
  ?RadiusDamage@CgMissile@@MEBAXAEBTvec3_t@@HHAEBUBgExplosionDamageRangeInfo@@MPEBT2@HW4meansOfDeath_t@@AEBUWeapon@@_N@Z(this, origin, inflictorEntNum, attackerEntNum, damageRangeInfo, coneAngleCos, coneDirection, ignoreEntNum, mod, r_weapon, isAlternate);
}

/*
==============
CgMissile::RunThink
==============
*/

void __fastcall CgMissile::RunThink(CgMissile *this, BgEntityData *entityData)
{
  ?RunThink@CgMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::OnWeaponFire
==============
*/

void __fastcall CgMissile::OnWeaponFire(CgMissile *this, centity_t *cent, int event, const TagPair weaponFlashTagPair, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const bool isPlayerView)
{
  ?OnWeaponFire@CgMissile@@QEAAXPEAUcentity_t@@HVTagPair@@AEBUWeapon@@_NW4PlayerHandIndex@@3@Z(this, cent, event, weaponFlashTagPair, r_weapon, isAlternate, hand, isPlayerView);
}

/*
==============
CgMissile::InitGrenadeSetAntiLagOffset
==============
*/

void __fastcall CgMissile::InitGrenadeSetAntiLagOffset(CgMissile *this, BgEntityData *entityData, const int parentEntNum, const int serverTime)
{
  ?InitGrenadeSetAntiLagOffset@CgMissile@@MEBAXPEAVBgEntityData@@HH@Z(this, entityData, parentEntNum, serverTime);
}

/*
==============
CgMissile::SetEntityNextThink
==============
*/

void __fastcall CgMissile::SetEntityNextThink(CgMissile *this, BgEntityData *entityData, const int nextThinkTime)
{
  ?SetEntityNextThink@CgMissile@@MEBAXPEAVBgEntityData@@H@Z(this, entityData, nextThinkTime);
}

/*
==============
CgMissile::EvaluateAngTrajectory
==============
*/

void __fastcall CgMissile::EvaluateAngTrajectory(CgMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outAng)
{
  ?EvaluateAngTrajectory@CgMissile@@MEBAXPEBVBgEntityData@@HAEATvec3_t@@@Z(this, entityData, atTime, outAng);
}

/*
==============
CgMissile::MovingPlatformAttemptGrenadeLink
==============
*/

void __fastcall CgMissile::MovingPlatformAttemptGrenadeLink(CgMissile *this, BgEntityData *entityData, const trace_t *impact)
{
  ?MovingPlatformAttemptGrenadeLink@CgMissile@@MEBAXPEAVBgEntityData@@PEBUtrace_t@@@Z(this, entityData, impact);
}

/*
==============
CgMissile::IsEntityClient
==============
*/

bool __fastcall CgMissile::IsEntityClient(CgMissile *this, const int entNum)
{
  return ?IsEntityClient@CgMissile@@MEBA_NH@Z(this, entNum);
}

/*
==============
CgMissile::RocketLauncherFire
==============
*/

void __fastcall CgMissile::RocketLauncherFire(CgMissile *this, const int creatorEntNum, const int gameTime, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const float spread, const BgWeaponParms *wp, const vec3_t *gunVel, const BgMissileFireParms *fireParms, bool magicBullet)
{
  ?RocketLauncherFire@CgMissile@@UEAAXHHAEBUWeapon@@_NW4PlayerHandIndex@@MPEBUBgWeaponParms@@AEBTvec3_t@@PEBUBgMissileFireParms@@_N@Z(this, creatorEntNum, gameTime, r_weapon, isAlternate, hand, spread, wp, gunVel, fireParms, magicBullet);
}

/*
==============
CgMissile::TriggerDamageCheckHit
==============
*/

void __fastcall CgMissile::TriggerDamageCheckHit(CgMissile *this, const int activatorEntNum, bool isFirstTrace, const vec3_t *vStart, const vec3_t *vEnd, int iDamage, int iMOD)
{
  ?TriggerDamageCheckHit@CgMissile@@MEBAXH_NAEBTvec3_t@@1HH@Z(this, activatorEntNum, isFirstTrace, vStart, vEnd, iDamage, iMOD);
}

/*
==============
CgMissile::EvaluatePosTrajectory
==============
*/

void __fastcall CgMissile::EvaluatePosTrajectory(CgMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outPos)
{
  ?EvaluatePosTrajectory@CgMissile@@MEBAXPEBVBgEntityData@@HAEATvec3_t@@@Z(this, entityData, atTime, outPos);
}

/*
==============
CgMissile::CopyEntityData
==============
*/

void __fastcall CgMissile::CopyEntityData(CgMissile *this, BgEntityData *entityDataDest, BgEntityData *entityDataSrc)
{
  ?CopyEntityData@CgMissile@@MEAAXPEAVBgEntityData@@0@Z(this, entityDataDest, entityDataSrc);
}

/*
==============
CgMissile::BlendPredictedMissileTrajectoryForRemoteViewer
==============
*/

void __fastcall CgMissile::BlendPredictedMissileTrajectoryForRemoteViewer(CgMissile *this, centity_t *cent, const WeaponDef *weapDef)
{
  ?BlendPredictedMissileTrajectoryForRemoteViewer@CgMissile@@QEBAXPEAUcentity_t@@PEBUWeaponDef@@@Z(this, cent, weapDef);
}

/*
==============
CgMissile::AddEvent
==============
*/

void __fastcall CgMissile::AddEvent(CgMissile *this, BgEntityData *entityData, unsigned int event, unsigned int eventParm)
{
  ?AddEvent@CgMissile@@MEBAXPEAVBgEntityData@@II@Z(this, entityData, event, eventParm);
}

/*
==============
CgMissile::SpawnClientTrajectoryEnt
==============
*/

CgPredictedEntity *__fastcall CgMissile::SpawnClientTrajectoryEnt(CgMissile *this, CgPredictedEntity *parentEnt, const BgWeaponParms *wp, const PlayerHandIndex hand, const vec3_t *vTossVel, const bool isRocket)
{
  return ?SpawnClientTrajectoryEnt@CgMissile@@IEAAPEAUCgPredictedEntity@@PEAU2@PEBUBgWeaponParms@@W4PlayerHandIndex@@AEBTvec3_t@@_N@Z(this, parentEnt, wp, hand, vTossVel, isRocket);
}

/*
==============
CgMissile::GlassTempDestroyPiece
==============
*/

unsigned __int16 __fastcall CgMissile::GlassTempDestroyPiece(CgMissile *this, unsigned int pieceIndex)
{
  return ?GlassTempDestroyPiece@CgMissile@@MEBAGI@Z(this, pieceIndex);
}

/*
==============
CgMissile::TestEntityFlag
==============
*/

bool __fastcall CgMissile::TestEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsSP flag)
{
  return ?TestEntityFlag@CgMissile@@MEBA_NHW4BgEntityFlagsSP@@@Z(this, entNum, flag);
}

/*
==============
CgMissile::FinalizeRocketFire
==============
*/

void __fastcall CgMissile::FinalizeRocketFire(CgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int parentEntNum, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const BgMissileFireParms *fireParms, XModel *projectileModel)
{
  ?FinalizeRocketFire@CgMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@HAEBUWeapon@@_NW4PlayerHandIndex@@PEBUBgMissileFireParms@@PEAUXModel@@@Z(this, weaponMap, entityData, parentEntNum, r_weapon, isAlternate, hand, fireParms, projectileModel);
}

/*
==============
CgMissile::SetEntityFlag
==============
*/

void __fastcall CgMissile::SetEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsSP flag)
{
  ?SetEntityFlag@CgMissile@@MEBAXHW4BgEntityFlagsSP@@@Z(this, entNum, flag);
}

/*
==============
CgMissile::AIGrenadeBounced
==============
*/

void __fastcall CgMissile::AIGrenadeBounced(CgMissile *this, BgEntityData *entityData, const int hitEntNum)
{
  ?AIGrenadeBounced@CgMissile@@MEBAXPEAVBgEntityData@@H@Z(this, entityData, hitEntNum);
}

/*
==============
CgMissile::SetEntityOrigin
==============
*/

bool __fastcall CgMissile::SetEntityOrigin(CgMissile *this, BgEntityData *entityData, const vec3_t *origin, const bool warpPhysics, const bool updateBroadphase)
{
  return ?SetEntityOrigin@CgMissile@@MEBA_NPEAVBgEntityData@@AEBTvec3_t@@_N2@Z(this, entityData, origin, warpPhysics, updateBroadphase);
}

/*
==============
CgMissile::TestEntityFlag
==============
*/

bool __fastcall CgMissile::TestEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsMP flag)
{
  return ?TestEntityFlag@CgMissile@@MEBA_NHW4BgEntityFlagsMP@@@Z(this, entNum, flag);
}

/*
==============
CgMissile::DissociateGrenadeFromAI
==============
*/

void __fastcall CgMissile::DissociateGrenadeFromAI(CgMissile *this, BgEntityData *entityData)
{
  ?DissociateGrenadeFromAI@CgMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::SetEntityAngles
==============
*/

bool __fastcall CgMissile::SetEntityAngles(CgMissile *this, BgEntityData *entityData, const vec3_t *angles, const bool warpPhysics, const bool updateBroadphase)
{
  return ?SetEntityAngles@CgMissile@@MEBA_NPEAVBgEntityData@@AEBTvec3_t@@_N2@Z(this, entityData, angles, warpPhysics, updateBroadphase);
}

/*
==============
CgMissile::LinkEntity
==============
*/

void __fastcall CgMissile::LinkEntity(CgMissile *this, const int entNum)
{
  ?LinkEntity@CgMissile@@MEBAXH@Z(this, entNum);
}

/*
==============
CgMissile::BroadcastActorProjectileEvents
==============
*/

void __fastcall CgMissile::BroadcastActorProjectileEvents(CgMissile *this, const int originatorEntNum, const Weapon *weapon, const bool isAlternate, const meansOfDeath_t meansOfDeath, const vec3_t *vStart, const vec3_t *vEnd)
{
  ?BroadcastActorProjectileEvents@CgMissile@@MEBAXHAEBUWeapon@@_NW4meansOfDeath_t@@AEBTvec3_t@@3@Z(this, originatorEntNum, weapon, isAlternate, meansOfDeath, vStart, vEnd);
}

/*
==============
CgMissile::GetPlayerState
==============
*/

const playerState_s *__fastcall CgMissile::GetPlayerState(CgMissile *this, const int entNum)
{
  return ?GetPlayerState@CgMissile@@MEBAPEBUplayerState_s@@H@Z(this, entNum);
}

/*
==============
CgMissile::AddImpactEvent
==============
*/

void __fastcall CgMissile::AddImpactEvent(CgMissile *this, BgEntityData *entityData, const trace_t *trace, unsigned int event, unsigned int eventParm, int createTempEnt)
{
  ?AddImpactEvent@CgMissile@@MEBAXPEAVBgEntityData@@PEBUtrace_t@@IIH@Z(this, entityData, trace, event, eventParm, createTempEnt);
}

/*
==============
CgMissile::IsDebugTextEnabled
==============
*/

bool __fastcall CgMissile::IsDebugTextEnabled(CgMissile *this)
{
  return ?IsDebugTextEnabled@CgMissile@@UEBA_NXZ(this);
}

/*
==============
CgMissile::KeepPointInPlayableBounds
==============
*/

void __fastcall CgMissile::KeepPointInPlayableBounds(CgMissile *this, vec3_t *origin)
{
  ?KeepPointInPlayableBounds@CgMissile@@MEBAXAEATvec3_t@@@Z(this, origin);
}

/*
==============
CgMissile::EntityHasRemoteEyes
==============
*/

bool __fastcall CgMissile::EntityHasRemoteEyes(CgMissile *this, const int entNum)
{
  return ?EntityHasRemoteEyes@CgMissile@@MEBA_NH@Z(this, entNum);
}

/*
==============
CgMissile::CheckGrenadeDanger
==============
*/

void __fastcall CgMissile::CheckGrenadeDanger(CgMissile *this, const BgEntityData *entityData)
{
  ?CheckGrenadeDanger@CgMissile@@MEBAXPEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::IsEntityClientOrActorOrAgent
==============
*/

bool __fastcall CgMissile::IsEntityClientOrActorOrAgent(CgMissile *this, const int entNum)
{
  return ?IsEntityClientOrActorOrAgent@CgMissile@@MEBA_NH@Z(this, entNum);
}

/*
==============
CgMissile::FreeEntity
==============
*/

void __fastcall CgMissile::FreeEntity(CgMissile *this, BgEntityData *entityData)
{
  ?FreeEntity@CgMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::GetSystem
==============
*/

CgMissile *__fastcall CgMissile::GetSystem(const LocalClientNum_t localClientNum)
{
  return ?GetSystem@CgMissile@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgMissile::GetExtraSkipEntityForTraces
==============
*/

int __fastcall CgMissile::GetExtraSkipEntityForTraces(CgMissile *this, const BgEntityData *entityData)
{
  return ?GetExtraSkipEntityForTraces@CgMissile@@MEBAHPEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::DeathNotify
==============
*/

void __fastcall CgMissile::DeathNotify(CgMissile *this, BgEntityData *entityData)
{
  ?DeathNotify@CgMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::SetEntityOriginAndAngles
==============
*/

bool __fastcall CgMissile::SetEntityOriginAndAngles(CgMissile *this, BgEntityData *entityData, const vec3_t *origin, const vec3_t *angles, const bool warpPhysics, const bool updateBroadphase)
{
  return ?SetEntityOriginAndAngles@CgMissile@@MEBA_NPEAVBgEntityData@@AEBTvec3_t@@1_N2@Z(this, entityData, origin, angles, warpPhysics, updateBroadphase);
}

/*
==============
CgMissile::GetMeansOfDeath
==============
*/

meansOfDeath_t __fastcall CgMissile::GetMeansOfDeath(CgMissile *this, const BgEntityData *entityData)
{
  return ?GetMeansOfDeath@CgMissile@@MEBA?AW4meansOfDeath_t@@PEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::SetEntityFlag
==============
*/

void __fastcall CgMissile::SetEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsCommon flag)
{
  ?SetEntityFlag@CgMissile@@MEBAXHW4BgEntityFlagsCommon@@@Z(this, entNum, flag);
}

/*
==============
CgMissile::ScriptableIsDoor
==============
*/

bool __fastcall CgMissile::ScriptableIsDoor(CgMissile *this, unsigned int scriptableIndex)
{
  return ?ScriptableIsDoor@CgMissile@@MEBA_NI@Z(this, scriptableIndex);
}

/*
==============
CgMissile::InitGrenadePlatformTracking
==============
*/

void __fastcall CgMissile::InitGrenadePlatformTracking(CgMissile *this, BgEntityData *entityData, const int parentEntNum)
{
  ?InitGrenadePlatformTracking@CgMissile@@MEBAXPEAVBgEntityData@@H@Z(this, entityData, parentEntNum);
}

/*
==============
CgMissile::GetPhysicsDetailWorldId
==============
*/

Physics_WorldId __fastcall CgMissile::GetPhysicsDetailWorldId(CgMissile *this)
{
  return ?GetPhysicsDetailWorldId@CgMissile@@UEBA?AW4Physics_WorldId@@XZ(this);
}

/*
==============
CgMissile::NotifyRadiusDamage
==============
*/

void __fastcall CgMissile::NotifyRadiusDamage(CgMissile *this, const vec3_t *damageOrigin, float damageRadius, const int attackerEntNum, const Weapon *r_weapon, bool isAlternate)
{
  ?NotifyRadiusDamage@CgMissile@@MEBAXAEBTvec3_t@@MHAEBUWeapon@@_N@Z(this, damageOrigin, damageRadius, attackerEntNum, r_weapon, isAlternate);
}

/*
==============
CgMissile::UpdatePlatformTracking
==============
*/

void __fastcall CgMissile::UpdatePlatformTracking(CgMissile *this, BgEntityData *entityData)
{
  ?UpdatePlatformTracking@CgMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::UpdateCosmetics
==============
*/

void __fastcall CgMissile::UpdateCosmetics(CgMissile *this, DObj *missileObj, CgPredictedEntity *missileEnt)
{
  ?UpdateCosmetics@CgMissile@@IEBAXPEAUDObj@@PEAUCgPredictedEntity@@@Z(this, missileObj, missileEnt);
}

/*
==============
CgMissile::LinkedSimulate
==============
*/

void __fastcall CgMissile::LinkedSimulate(CgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec)
{
  ?LinkedSimulate@CgMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@HHH@Z(this, weaponMap, entityData, lastSimulationTime, simulationTime, timeDeltaMsec);
}

/*
==============
CgMissile::DebugLineWithDuration
==============
*/

void __fastcall CgMissile::DebugLineWithDuration(CgMissile *this, const BgEntityData *entityData, const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  ?DebugLineWithDuration@CgMissile@@UEBAXPEBVBgEntityData@@AEBTvec3_t@@1AEBTvec4_t@@HH@Z(this, entityData, start, end, color, depthTest, duration);
}

/*
==============
CgMissile::ExplodeNotify
==============
*/

void __fastcall CgMissile::ExplodeNotify(CgMissile *this, BgEntityData *entityData, const int otherEntNum, const vec3_t *vel, const vec3_t *pos, const vec3_t *normal)
{
  ?ExplodeNotify@CgMissile@@MEBAXPEAVBgEntityData@@HAEBTvec3_t@@11@Z(this, entityData, otherEntNum, vel, pos, normal);
}

/*
==============
CgMissile::AddVelocityForMoverClient
==============
*/

void __fastcall CgMissile::AddVelocityForMoverClient(CgMissile *this, const cg_t *cgameGlob, const int gameTime, const vec3_t *dir, vec3_t *inOutVel)
{
  ?AddVelocityForMoverClient@CgMissile@@QEAAXPEBVcg_t@@HAEBTvec3_t@@AEAT3@@Z(this, cgameGlob, gameTime, dir, inOutVel);
}

/*
==============
CgMissile::ServerEntHandOff
==============
*/

void __fastcall CgMissile::ServerEntHandOff(CgMissile *this, CgPredictedEntity *missileEnt, centity_t *serverEnt)
{
  ?ServerEntHandOff@CgMissile@@IEBAXPEAUCgPredictedEntity@@PEAUcentity_t@@@Z(this, missileEnt, serverEnt);
}

/*
==============
CgMissile::FreeEntityAfterEvent
==============
*/

void __fastcall CgMissile::FreeEntityAfterEvent(CgMissile *this, BgEntityData *entityData)
{
  ?FreeEntityAfterEvent@CgMissile@@MEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
CgMissile::ThrowGrenade
==============
*/

void __fastcall CgMissile::ThrowGrenade(CgMissile *this, const int creatorEntNum, const int gameTime, const BgWeaponParms *wp)
{
  ?ThrowGrenade@CgMissile@@UEAAXHHPEBUBgWeaponParms@@@Z(this, creatorEntNum, gameTime, wp);
}

/*
==============
CgMissile::GetMissileDObj
==============
*/

DObj *__fastcall CgMissile::GetMissileDObj(CgMissile *this, CgPredictedEntity *ent)
{
  return ?GetMissileDObj@CgMissile@@QEBAPEAUDObj@@PEAUCgPredictedEntity@@@Z(this, ent);
}

/*
==============
CgMissile::ApplyDamage
==============
*/

damageReturnCode_t __fastcall CgMissile::ApplyDamage(CgMissile *this, const int targetEntNum, const int inflictorEntNum, const int attackerEntNum, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal)
{
  return ?ApplyDamage@CgMissile@@MEBA?AW4damageReturnCode_t@@HHHAEBTvec3_t@@0HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H0@Z(this, targetEntNum, inflictorEntNum, attackerEntNum, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal);
}

/*
==============
CgMissile::UpdatePredictionBlendRatios
==============
*/

void __fastcall CgMissile::UpdatePredictionBlendRatios(CgMissile *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed, const Weapon *r_weapon, const bool isAlternate, const int creationServerTime, centity_t *serverEnt)
{
  ?UpdatePredictionBlendRatios@CgMissile@@IEAAXPEAUCgPredictedEntity@@HHHAEBUWeapon@@_NHPEAUcentity_t@@@Z(this, ent, prevUpdateTime, updateTime, timeElapsed, r_weapon, isAlternate, creationServerTime, serverEnt);
}

/*
==============
CgMissile::GetDoorAngle
==============
*/

double __fastcall CgMissile::GetDoorAngle(CgMissile *this, BgEntityData *entityData)
{
  double result; 

  *(float *)&result = ?GetDoorAngle@CgMissile@@MEBAMPEAVBgEntityData@@@Z(this, entityData);
  return result;
}

/*
==============
CgMissile::JavelinSoftLaunch
==============
*/

bool __fastcall CgMissile::JavelinSoftLaunch(CgMissile *this, const Weapon *r_weapon, const entityState_t *es, const int time)
{
  return ?JavelinSoftLaunch@CgMissile@@IEBA_NAEBUWeapon@@PEBUentityState_t@@H@Z(this, r_weapon, es, time);
}

/*
==============
CgMissile::LinkTo
==============
*/

bool __fastcall CgMissile::LinkTo(CgMissile *this, BgEntityData *entityData, const int parentEntNum, scr_string_t tagName, int errorMessageSize, char *outErrorMessage)
{
  return ?LinkTo@CgMissile@@MEBA_NPEAVBgEntityData@@HW4scr_string_t@@HPEAD@Z(this, entityData, parentEntNum, tagName, errorMessageSize, outErrorMessage);
}

/*
==============
CgMissile::FinalizeGrenadeSpawn
==============
*/

void __fastcall CgMissile::FinalizeGrenadeSpawn(CgMissile *this, BgEntityData *entityData, const int parentEntNum, const WeaponDef *weapDef)
{
  ?FinalizeGrenadeSpawn@CgMissile@@MEBAXPEAVBgEntityData@@HPEBUWeaponDef@@@Z(this, entityData, parentEntNum, weapDef);
}

/*
==============
CgMissile::GlassDestroyPiece
==============
*/

void __fastcall CgMissile::GlassDestroyPiece(CgMissile *this, unsigned int pieceIndex, const vec3_t *damagePos, const vec3_t *damageDir)
{
  ?GlassDestroyPiece@CgMissile@@MEBAXIAEBTvec3_t@@0@Z(this, pieceIndex, damagePos, damageDir);
}

/*
==============
CheckGrenadeDanger
==============
*/
void CheckGrenadeDanger(const gentity_s *grenadeEnt)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  float v4; 
  float v5; 
  int v6; 
  scrContext_t *v7; 
  __int64 v8; 
  __int64 v9; 
  gentity_s *v10; 
  unsigned __int16 number; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  const gentity_s *v15; 
  __int64 v16; 
  __int64 v17; 
  const Weapon *v18; 

  if ( !grenadeEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 209, ASSERT_TYPE_ASSERT, "( grenadeEnt )", (const char *)&queryFormat, "grenadeEnt") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &grenadeEnt->s);
  v18 = WeaponForEntity;
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 212, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( r_grenadeWeapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( r_grenadeWeapon )") )
    __debugbreak();
  v4 = (float)BG_ExplosionRadius(WeaponForEntity, grenadeEnt->s.inAltWeaponMode);
  v5 = v4 * v4;
  v6 = 0;
  v7 = ScriptContext_Server();
  if ( level.maxclients > 0 )
  {
    v8 = 0i64;
    v9 = 0i64;
    do
    {
      if ( (unsigned int)v6 >= 0x800 )
      {
        LODWORD(v17) = 2048;
        LODWORD(v16) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v9].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v8] )
      {
        v10 = &g_entities[v9];
        if ( !g_entities[v9].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 224, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        if ( G_Combat_IsWithinDamageRadius(&grenadeEnt->r.currentOrigin, v5, v10) )
        {
          GScr_Weapon_AddParam(v7, WeaponForEntity, 0);
          number = grenadeEnt->parent.number;
          if ( !number )
            goto LABEL_38;
          v12 = number;
          v13 = number - 1;
          if ( v13 >= 0x800 )
          {
            LODWORD(v17) = 2048;
            LODWORD(v16) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v14 = v12 - 1;
          if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v14] )
          {
            LODWORD(v17) = grenadeEnt->parent.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v17) )
              __debugbreak();
          }
          if ( grenadeEnt->parent.number )
          {
            v15 = EntHandle::ent(&grenadeEnt->parent);
            GScr_AddEntity(v15);
          }
          else
          {
LABEL_38:
            Scr_AddUndefined(v7);
          }
          GScr_AddEntity(grenadeEnt);
          GScr_Notify(v10, scr_const.grenadedanger, 3u);
          WeaponForEntity = v18;
        }
      }
      ++v6;
      ++v8;
      ++v9;
    }
    while ( v6 < level.maxclients );
  }
}

/*
==============
DrawAttractorDebug
==============
*/
void DrawAttractorDebug(BgMissile *this)
{
  const dvar_t *v1; 
  float *v2; 
  __int64 v3; 
  unsigned __int16 v4; 
  float v5; 
  float v6; 
  __int64 v7; 
  gentity_s *v8; 
  const vec4_t *v9; 
  __int64 duration; 
  __int64 v11; 
  vec3_t center; 
  vec3_t dir; 
  vec3_t v14; 
  vec3_t v15; 

  v1 = DVARBOOL_missileDebugAttractors;
  if ( !DVARBOOL_missileDebugAttractors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileDebugAttractors") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v2 = &attrGlob.attractors[0].origin.v[2];
    v3 = 32i64;
    do
    {
      dir.v[0] = FLOAT_1_0;
      dir.v[1] = 0.0;
      dir.v[2] = 0.0;
      v14.v[0] = 0.0;
      v14.v[1] = FLOAT_1_0;
      v14.v[2] = 0.0;
      v15.v[0] = 0.0;
      v15.v[1] = 0.0;
      v15.v[2] = FLOAT_1_0;
      if ( *((_BYTE *)v2 - 16) )
      {
        v4 = *((_WORD *)v2 - 7);
        if ( v4 == 2047 )
        {
          v5 = *(v2 - 1);
          center.v[0] = *(v2 - 2);
          v6 = *v2;
          center.v[1] = v5;
        }
        else
        {
          if ( v4 >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1039, ASSERT_TYPE_ASSERT, "( attrGlob.attractors[attractorIndex].entnum < ( 2048 ) )", (const char *)&queryFormat, "attrGlob.attractors[attractorIndex].entnum < MAX_GENTITIES") )
            __debugbreak();
          v7 = *((unsigned __int16 *)v2 - 7);
          v8 = &g_entities[v7];
          if ( (unsigned int)v7 >= 0x800 )
          {
            LODWORD(v11) = 2048;
            LODWORD(duration) = *((unsigned __int16 *)v2 - 7);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v11) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[(int)v7].r.isInUse != g_entityIsInUse[(int)v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[(int)v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1041, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( attrGlob.attractors[attractorIndex].entnum ) )", (const char *)&queryFormat, "G_IsEntityInUse( attrGlob.attractors[attractorIndex].entnum )") )
            __debugbreak();
          if ( !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&v8->flags, ACTIVE, 0x14u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1042, ASSERT_TYPE_ASSERT, "( attractorEnt->flags.TestFlag( BgEntityFlagsCommon::MISSILE_ATTRACTOR_OR_REPULSOR ) )", (const char *)&queryFormat, "attractorEnt->flags.TestFlag( BgEntityFlagsCommon::MISSILE_ATTRACTOR_OR_REPULSOR )") )
            __debugbreak();
          *(_QWORD *)center.v = *(_QWORD *)v8->r.currentOrigin.v;
          v6 = v8->r.currentOrigin.v[2];
        }
        v9 = &colorOrange;
        if ( *((_BYTE *)v2 - 15) )
          v9 = &colorGreen;
        center.v[2] = v6;
        G_DebugCircleEx(&center, 10.0, &dir, v9, 0, 1);
        G_DebugCircleEx(&center, 10.0, &v14, v9, 0, 1);
        G_DebugCircleEx(&center, 10.0, &v15, v9, 0, 1);
      }
      v2 += 7;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
GetSplashMethodOfDeath
==============
*/
__int64 GetSplashMethodOfDeath(const gentity_s *ent)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const GEntityHandlerList *EntHandlerList; 
  bool v5; 
  __int64 result; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 366, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 369, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx != 0 )", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  EntHandlerList = G_Main_GetEntHandlerList(ent);
  if ( EntHandlerList->splashMethodOfDeath != MOD_GRENADE_SPLASH )
    return (unsigned int)EntHandlerList->splashMethodOfDeath;
  v5 = BG_ProjExplosionType(WeaponForEntity, ent->s.inAltWeaponMode) == WEAPPROJEXP_HEAVY;
  result = 16i64;
  if ( !v5 )
    return (unsigned int)EntHandlerList->splashMethodOfDeath;
  return result;
}

/*
==============
MissileTrajectoryClientControlled
==============
*/
void MissileTrajectoryClientControlled(gentity_s *ent, vec3_t *result)
{
  gclient_s *client; 
  unsigned __int64 buttons; 
  __int128 v6; 
  float v8; 
  __int128 v9; 
  int flags; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  float value; 
  const dvar_t *v15; 
  const dvar_t *v17; 
  __int128 v19; 
  vec3_t trBase; 
  __int64 v21; 
  vec3_t forward; 

  v21 = -2i64;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1584, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->c.item[0].weapon.attachmentVariationIndices[5] & 0x80u) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1585, ASSERT_TYPE_ASSERT, "(ent->c.missile.flags & MISSILEFLAG_CLIENT_CONTROLLED)", (const char *)&queryFormat, "ent->c.missile.flags & MISSILEFLAG_CLIENT_CONTROLLED") )
    __debugbreak();
  ent->clipmask &= ~0x800u;
  if ( !EntHandle::isDefined(&ent->remoteControlledOwner) )
    goto LABEL_11;
  client = EntHandle::ent(&ent->remoteControlledOwner)->client;
  if ( !client )
  {
    Com_PrintError(17, "Missile has a remote-control owner that isn't a client.");
LABEL_11:
    LODWORD(buttons) = 0;
    goto LABEL_12;
  }
  buttons = client->sess.cmd.buttons;
  if ( (buttons & 0x40000) == 0 )
    goto LABEL_11;
LABEL_12:
  AngleVectors(&ent->s.lerp.apos.trBase, &forward, NULL, NULL);
  v6 = LODWORD(forward.v[1]);
  *(float *)&v6 = (float)((float)(forward.v[1] * ent->s.lerp.pos.trDelta.v[1]) + (float)(forward.v[0] * ent->s.lerp.pos.trDelta.v[0])) + (float)(forward.v[2] * ent->s.lerp.pos.trDelta.v[2]);
  _XMM6 = v6;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v9 = 0i64;
  *(float *)&v9 = (float)level.frameDuration;
  v8 = *(float *)&v9;
  flags = ent->c.missile.flags;
  if ( (flags & 0x60) == 32 && (buttons & 1) != 0 )
  {
    v11 = DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange;
    if ( !DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSpeedTargetRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.vector.v[1];
    if ( (float)(v12 - *(float *)&_XMM6) > 500.0 )
    {
      ent->c.missile.flags |= 0x40u;
      G_Utils_AddEvent(ent, 0x8Du, 0);
    }
    *(float *)&_XMM6 = v12;
  }
  else
  {
    if ( (flags & 0x200) != 0 && (buttons & 0x40001) == 0x40000 )
      ent->c.missile.flags = flags | 0x20;
    v13 = DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange;
    if ( !DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSpeedTargetRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    value = v13->current.value;
    if ( (float)(value - *(float *)&_XMM6) <= 0.001 )
    {
      if ( (float)(value - *(float *)&_XMM6) < 0.001 )
      {
        v17 = DCONST_DVARMPFLT_missileRemoteSpeedDown;
        if ( !DCONST_DVARMPFLT_missileRemoteSpeedDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSpeedDown") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        v19 = _XMM6;
        *(float *)&v19 = *(float *)&_XMM6 - (float)((float)(v8 * v17->current.value) * 0.001);
        _XMM2 = v19;
        __asm { vmaxss  xmm6, xmm2, xmm8 }
      }
    }
    else
    {
      v15 = DCONST_DVARMPFLT_missileRemoteSpeedUp;
      if ( !DCONST_DVARMPFLT_missileRemoteSpeedUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSpeedUp") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      *(float *)&v9 = (float)((float)(*(float *)&v9 * v15->current.value) * 0.001) + *(float *)&_XMM6;
      _XMM2 = v9;
      __asm { vminss  xmm6, xmm2, xmm8 }
    }
  }
  ent->s.lerp.pos.trDelta.v[1] = forward.v[1];
  ent->s.lerp.pos.trDelta.v[2] = forward.v[2];
  ent->s.lerp.pos.trDelta.v[0] = *(float *)&_XMM6 * forward.v[0];
  ent->s.lerp.pos.trDelta.v[1] = *(float *)&_XMM6 * ent->s.lerp.pos.trDelta.v[1];
  ent->s.lerp.pos.trDelta.v[2] = *(float *)&_XMM6 * ent->s.lerp.pos.trDelta.v[2];
  Trajectory_GetTrBase(&ent->s.lerp.pos, &trBase);
  trBase.v[0] = (float)((float)(v8 * ent->s.lerp.pos.trDelta.v[0]) * 0.001) + trBase.v[0];
  trBase.v[1] = (float)((float)(v8 * ent->s.lerp.pos.trDelta.v[1]) * 0.001) + trBase.v[1];
  trBase.v[2] = (float)((float)(v8 * ent->s.lerp.pos.trDelta.v[2]) * 0.001) + trBase.v[2];
  Trajectory_SetTrBase(&ent->s.lerp.pos, &trBase);
  *result = trBase;
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
CgMissile::AIGrenadeBounced
==============
*/
void CgMissile::AIGrenadeBounced(CgMissile *this, BgEntityData *entityData, const int hitEntNum)
{
  ;
}

/*
==============
CgMissile::AddEvent
==============
*/
void CgMissile::AddEvent(CgMissile *this, BgEntityData *entityData, unsigned int event, unsigned int eventParm)
{
  cg_t *LocalClientGlobals; 
  entityState_t *Entity; 
  int time; 
  CgWeaponMap *Instance; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  Entity = (entityState_t *)CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 167, ASSERT_TYPE_ASSERT, "(predictedEntity)", (const char *)&queryFormat, "predictedEntity") )
    __debugbreak();
  if ( Entity[3].lerp.u.anonymous.data[5] != 1 )
  {
    time = LocalClientGlobals->time;
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
    BG_AddEventToEntityState((const entity_event_t)event, eventParm, Instance, Entity, time, 0);
    Entity[2].partBits.array[0] = LocalClientGlobals->time;
  }
}

/*
==============
CgMissile::AddImpactEvent
==============
*/
void CgMissile::AddImpactEvent(CgMissile *this, BgEntityData *entityData, const trace_t *trace, unsigned int event, unsigned int eventParm)
{
  CgPredictedEntity *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 183, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 187, ASSERT_TYPE_ASSERT, "(predictedEntity)", (const char *)&queryFormat, "predictedEntity") )
    __debugbreak();
  if ( Entity->predictionState != CLIENT_TRAJECTORY_ENTITY )
    this->AddEvent(this, entityData, event, eventParm);
}

/*
==============
CgMissile::AddVelocityForMoverClient
==============
*/
void CgMissile::AddVelocityForMoverClient(CgMissile *this, const cg_t *cgameGlob, const int gameTime, const vec3_t *dir, vec3_t *inOutVel)
{
  playerState_s *p_predictedPlayerState; 
  CgAntiLag *Instance; 
  const dvar_t *v11; 
  __int16 linkEnt; 
  centity_t *v13; 
  centity_t *RootParent; 
  centity_t *Entity; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 560, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &cgameGlob->predictedPlayerState;
  Instance = CgAntiLag::GetInstance((const LocalClientNum_t)this->m_localClientNum);
  if ( Instance )
  {
    v11 = DVARBOOL_addlinkedmovervelocitytomissile;
    if ( !DVARBOOL_addlinkedmovervelocitytomissile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "addlinkedmovervelocitytomissile") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled && (linkEnt = cgameGlob->predictedPlayerState.linkEnt, linkEnt != 2047) && (v13 = CG_GetEntity((const LocalClientNum_t)cgameGlob->localClientNum, linkEnt), (v13->flags & 1) != 0) )
    {
      RootParent = CG_Entity_GetRootParent(cgameGlob->localClientNum, v13);
      if ( !RootParent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 580, ASSERT_TYPE_ASSERT, "(rootParent)", (const char *)&queryFormat, "rootParent") )
        __debugbreak();
      BgMissile::AddVelocityForLinkedMover(this, Instance, p_predictedPlayerState, &RootParent->nextState, gameTime, dir, inOutVel);
    }
    else if ( BGMovingPlatforms::IsOnMovingPlatform(&cgameGlob->predictedPlayerState) )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)cgameGlob->localClientNum, cgameGlob->predictedPlayerState.movingPlatforms.m_movingPlatformEntity);
      if ( (Entity->flags & 1) != 0 )
        BgMissile::AddVelocityForMover(this, Instance, &cgameGlob->predictedPlayerState, &Entity->nextState, gameTime, inOutVel);
    }
  }
}

/*
==============
CgMissile::ApplyAttractorsRepulsors
==============
*/
void CgMissile::ApplyAttractorsRepulsors(CgMissile *this, BgEntityData *entityData)
{
  ;
}

/*
==============
CgMissile::ApplyDamage
==============
*/
__int64 CgMissile::ApplyDamage(CgMissile *this, const int targetEntNum, const int inflictorEntNum, const int attackerEntNum)
{
  return 0xFFFFFFFFi64;
}

/*
==============
CgMissile::BlendPredictedMissileTrajectoryForRemoteViewer
==============
*/
void CgMissile::BlendPredictedMissileTrajectoryForRemoteViewer(CgMissile *this, centity_t *cent, const WeaponDef *weapDef)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1336, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( BgPredictedEntitySystem::IsEmptyPredictionKey((const unsigned int *)&cent->nextState.lerp.u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1337, ASSERT_TYPE_ASSERT, "(!BgPredictedEntitySystem::IsEmptyPredictionKey( cent->nextState.lerp.u.missile.predictionKey ))", (const char *)&queryFormat, "!BgPredictedEntitySystem::IsEmptyPredictionKey( cent->nextState.lerp.u.missile.predictionKey )") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1338, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
}

/*
==============
CgMissile::BroadcastActorEvents
==============
*/
void CgMissile::BroadcastActorEvents(CgMissile *this, BgEntityData *entityData)
{
  ;
}

/*
==============
CgMissile::BroadcastActorProjectileEvents
==============
*/
void CgMissile::BroadcastActorProjectileEvents(CgMissile *this, const int originatorEntNum, const Weapon *weapon, const bool isAlternate)
{
  ;
}

/*
==============
CG_Missile_HasPredictedMissileForTime
==============
*/
char CG_Missile_HasPredictedMissileForTime(const int serverTime)
{
  ntl::internal::list_node_base *mp_next; 

  mp_next = s_predictedMissileDebugEntList.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<PredictedMissileDebugEnt> > *)s_predictedMissileDebugEntList.m_listHead.m_sentinel.mp_next == &s_predictedMissileDebugEntList.m_listHead )
    return 0;
  while ( 1 )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( HIDWORD(mp_next[1].mp_prev) == serverTime )
      break;
    mp_next = mp_next->mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)&s_predictedMissileDebugEntList.m_listHead )
      return 0;
  }
  return 1;
}

/*
==============
CgMissile::CheckGrenadeDanger
==============
*/
void CgMissile::CheckGrenadeDanger(CgMissile *this, const BgEntityData *entityData)
{
  ;
}

/*
==============
CgMissile::CopyEntityData
==============
*/
void CgMissile::CopyEntityData(CgMissile *this, BgEntityData *entityDataDest, BgEntityData *entityDataSrc)
{
  if ( !entityDataDest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1140, ASSERT_TYPE_ASSERT, "(entityDataDest)", (const char *)&queryFormat, "entityDataDest") )
    __debugbreak();
  if ( !entityDataSrc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1141, ASSERT_TYPE_ASSERT, "(entityDataSrc)", (const char *)&queryFormat, "entityDataSrc") )
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
CgMissile::CreateWaterSplash
==============
*/
void CgMissile::CreateWaterSplash(CgMissile *this, const BgEntityData *entityData, const trace_t *trace, const vec3_t *endPos)
{
  ;
}

/*
==============
CgMissile::DeathNotify
==============
*/
void CgMissile::DeathNotify(CgMissile *this, BgEntityData *entityData)
{
  ;
}

/*
==============
CgMissile::DebugLineWithDuration
==============
*/
void CgMissile::DebugLineWithDuration(CgMissile *this, const BgEntityData *entityData, const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  const CgPredictedEntity *Entity; 
  vec4_t v10; 
  vec4_t v11; 

  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 2064, ASSERT_TYPE_ASSERT, "(predictedEntity)", (const char *)&queryFormat, "predictedEntity") )
    __debugbreak();
  v11 = *color;
  if ( &colorCyan != color )
  {
    if ( Entity->predictionState == CLIENT_TRAJECTORY_ENTITY )
      v10 = colorYellow;
    else
      v10 = colorMagenta;
    v11 = v10;
  }
  CG_DebugLine(start, end, &v11, depthTest, duration);
}

/*
==============
CgMissile::DebugText
==============
*/
void CgMissile::DebugText(CgMissile *this, const char *fmt, ...)
{
  va_list va; 

  va_start(va, fmt);
  Com_Printf(14, fmt, va);
}

/*
==============
CgMissile::DirectImpactDamage
==============
*/
void CgMissile::DirectImpactDamage(CgMissile *this, BgEntityData *entityData, const int hitEntNum, hitLocation_t hitLocation, const meansOfDeath_t methodOfDeath, vec3_t *hitVelocity, const int damage, const WeaponDef *weapDef, const bool shouldExplode, const int explodeOnImpact, const trace_t *trace, const vec3_t *dir, bool *outShouldTakeRadiusDamage)
{
  if ( !outShouldTakeRadiusDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1947, ASSERT_TYPE_ASSERT, "(outShouldTakeRadiusDamage)", (const char *)&queryFormat, "outShouldTakeRadiusDamage") )
    __debugbreak();
  *outShouldTakeRadiusDamage = 0;
}

/*
==============
CgMissile::DissociateGrenadeFromAI
==============
*/
void CgMissile::DissociateGrenadeFromAI(CgMissile *this, BgEntityData *entityData)
{
  ;
}

/*
==============
CgMissile::DrawAttractorDebug
==============
*/
void CgMissile::DrawAttractorDebug(CgMissile *this)
{
  ;
}

/*
==============
CgMissile::DrawMissileDebug
==============
*/
void CgMissile::DrawMissileDebug(CgMissile *this, const BgEntityData *entityData, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  const dvar_t *v5; 

  v5 = DCONST_DVARBOOL_bg_missileDebugDraw;
  if ( !DCONST_DVARBOOL_bg_missileDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    this->DebugLineWithDuration(this, entityData, start, end, color, 1, DEBUG_DRAW_TIME);
}

/*
==============
CgMissile::EntityHasRemoteEyes
==============
*/
bool CgMissile::EntityHasRemoteEyes(CgMissile *this, const int entNum)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 125, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return p_predictedPlayerState->clientNum == entNum && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 1u);
}

/*
==============
CgMissile::EvaluateAngTrajectory
==============
*/
void CgMissile::EvaluateAngTrajectory(CgMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outAng)
{
  const CgPredictedEntity *Entity; 
  CgPredictedEntityTrajectory v9; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1602, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  CgPredictedEntityTrajectory::CgPredictedEntityTrajectory(&v9, (const LocalClientNum_t)this->m_localClientNum, Entity);
  BgTrajectory::EvaluateAngTrajectory(&v9, atTime, outAng);
}

/*
==============
CgMissile::EvaluatePosTrajectory
==============
*/
void CgMissile::EvaluatePosTrajectory(CgMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outPos)
{
  const CgPredictedEntity *Entity; 
  CgPredictedEntityTrajectory v9; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1578, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  CgPredictedEntityTrajectory::CgPredictedEntityTrajectory(&v9, (const LocalClientNum_t)this->m_localClientNum, Entity);
  BgTrajectory::EvaluatePosTrajectory(&v9, atTime, outPos);
}

/*
==============
CgMissile::EvaluatePosTrajectoryDelta
==============
*/
void CgMissile::EvaluatePosTrajectoryDelta(CgMissile *this, const BgEntityData *entityData, int atTime, vec3_t *outPos)
{
  const CgPredictedEntity *Entity; 
  CgPredictedEntityTrajectory v9; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1590, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  CgPredictedEntityTrajectory::CgPredictedEntityTrajectory(&v9, (const LocalClientNum_t)this->m_localClientNum, Entity);
  BgTrajectory::EvaluatePosTrajectoryDelta(&v9, atTime, outPos);
}

/*
==============
CgMissile::Explode
==============
*/
void CgMissile::Explode(CgMissile *this, BgEntityData *entityData)
{
  ;
}

/*
==============
CgMissile::ExplodeNotify
==============
*/
void CgMissile::ExplodeNotify(CgMissile *this, BgEntityData *entityData, const int otherEntNum, const vec3_t *vel)
{
  ;
}

/*
==============
CgMissile::FinalizeGrenadeSpawn
==============
*/
void CgMissile::FinalizeGrenadeSpawn(CgMissile *this, BgEntityData *entityData, const int parentEntNum, const WeaponDef *weapDef)
{
  ;
}

/*
==============
CgMissile::FinalizeGrenadeThrow
==============
*/
void CgMissile::FinalizeGrenadeThrow(CgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, const int parentEntNum)
{
  BgEntityComponents *Components; 
  const playerState_s *v11; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1803, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1806, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  v11 = this->GetPlayerState(this, (unsigned int)parentEntNum);
  if ( v11 && v11->weapState[hand].weaponFiredAtMaxCharge && BG_IsChargeShotWeapon(r_grenadeWeapon, isAlternate) )
    Components->missile.flags |= 0x1000u;
}

/*
==============
CgMissile::FinalizeRocketFire
==============
*/
void CgMissile::FinalizeRocketFire(CgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int parentEntNum, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const BgMissileFireParms *fireParms, XModel *projectileModel)
{
  BgEntityComponents *Components; 
  CgHandler *Handler; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1819, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1822, ASSERT_TYPE_ASSERT, "(boltComps)", (const char *)&queryFormat, "boltComps") )
    __debugbreak();
  if ( parentEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1824, ASSERT_TYPE_ASSERT, "(parentEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "parentEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  Handler = CgHandler::getHandler(this->m_localClientNum);
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1827, ASSERT_TYPE_ASSERT, "(cgHandler)", (const char *)&queryFormat, "cgHandler") )
    __debugbreak();
  CgHandler::GetPlayerTeam(Handler, parentEntNum, &Components->missile.team);
}

/*
==============
CgMissile::FreeEntity
==============
*/
void CgMissile::FreeEntity(CgMissile *this, BgEntityData *entityData)
{
  CgPredictedEntitySystem *System; 
  CgPredictedEntity *Entity; 

  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 143, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  CgPredictedEntitySystem::FreePredictedEntity(System, Entity);
}

/*
==============
CgMissile::FreeEntityAfterEvent
==============
*/
void CgMissile::FreeEntityAfterEvent(CgMissile *this, BgEntityData *entityData)
{
  CgPredictedEntity *Entity; 

  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( Entity )
  {
    Entity->eventInfo.freeAfterEvent = 1;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 154, ASSERT_TYPE_ASSERT, "(predictedEntity)", (const char *)&queryFormat, "predictedEntity") )
      __debugbreak();
    MEMORY[0x2CC] = 1;
  }
}

/*
==============
CgMissile::GetDoorAngle
==============
*/
float CgMissile::GetDoorAngle(CgMissile *this, BgEntityData *entityData)
{
  BgEntityComponents *Components; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1903, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1906, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  return ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)this->m_localClientNum, Components->missile.doorScriptableIndex)->angles.v[1];
}

/*
==============
CgMissile::GetEntityState
==============
*/
entityState_t *CgMissile::GetEntityState(CgMissile *this, const int entNum)
{
  entityState_t *result; 
  centity_t *Entity; 
  bool v6; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( entNum == 2047 )
    return 0i64;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  v6 = Entity && (entNum == 2046 || (Entity->flags & 1) != 0);
  result = &Entity->nextState;
  if ( !v6 )
    return 0i64;
  return result;
}

/*
==============
CgMissile::GetEntityTransform
==============
*/
char CgMissile::GetEntityTransform(CgMissile *this, const int entNum, vec3_t *outOrigin, vec3_t *outAngles)
{
  const cpose_t *PoseExtended; 
  float *p_eType; 

  if ( (unsigned int)entNum > 0x7FF )
    return 0;
  PoseExtended = CG_GetPoseExtended(this->m_localClientNum, entNum, 1);
  p_eType = (float *)&PoseExtended->eType;
  if ( !PoseExtended )
    return 0;
  CG_GetPoseOrigin(PoseExtended, outOrigin);
  outAngles->v[0] = p_eType[18];
  outAngles->v[1] = p_eType[19];
  outAngles->v[2] = p_eType[20];
  return 1;
}

/*
==============
CgMissile::GetExtraSkipEntityForTraces
==============
*/
__int64 CgMissile::GetExtraSkipEntityForTraces(CgMissile *this, const BgEntityData *entityData)
{
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1835, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  return (unsigned int)CgEntityData::GetEntity((CgEntityData *)entityData)->serverEntNum;
}

/*
==============
CgMissile::GetMeansOfDeath
==============
*/
__int64 CgMissile::GetMeansOfDeath(CgMissile *this, const BgEntityData *entityData)
{
  const CgPredictedEntity *Entity; 
  unsigned __int8 handler; 
  __int64 v5; 

  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 346, ASSERT_TYPE_ASSERT, "(predictedEntity)", (const char *)&queryFormat, "predictedEntity") )
    __debugbreak();
  handler = Entity->handler;
  if ( handler == 10 )
    return 4i64;
  if ( handler == 12 )
    return 6i64;
  LODWORD(v5) = handler;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 359, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled ET HANDLER: %d", v5) )
    __debugbreak();
  return 0i64;
}

/*
==============
CgMissile::GetMissileDObj
==============
*/
DObj *CgMissile::GetMissileDObj(CgMissile *this, CgPredictedEntity *ent)
{
  __int64 m_localClientNum; 
  const Weapon *WeaponForEntity; 
  CgPredictedEntitySystem *System; 
  const DObjCamoParams *WeaponDObjCamoParams; 
  const XModel *WeaponModels; 
  DObj *result; 
  const XModel *v10; 
  bool outCreatedNew; 
  DObjCamoParams outLocalParams; 
  DObjModel outDObjModel; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1345, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->initialSpawnType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1346, ASSERT_TYPE_ASSERT, "(ent->initialSpawnType == ET_MISSILE)", (const char *)&queryFormat, "ent->initialSpawnType == ET_MISSILE") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[m_localClientNum], &ent->s);
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1351, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  if ( BG_WeaponIsUsingCamo(WeaponForEntity) && BG_IsThrowingAxe(WeaponForEntity) )
  {
    WeaponDObjCamoParams = BG_Camo_GetWeaponDObjCamoParams(WeaponForEntity, 0, &outLocalParams);
    WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, WeaponForEntity, 0, 0, 0, 0, 0);
    if ( !WeaponModels )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442BF770, 70i64, WeaponForEntity->weaponCamo);
    DObjInitModel(WeaponModels, (scr_string_t)0, 1, 0, WeaponDObjCamoParams, &outDObjModel);
    goto LABEL_18;
  }
  result = (DObj *)BG_ProjectileModel(WeaponForEntity, ent->s.inAltWeaponMode);
  if ( result )
  {
    v10 = BG_ProjectileModel(WeaponForEntity, ent->s.inAltWeaponMode);
    DObjInitModel(v10, (scr_string_t)0, 1, 0, NULL, &outDObjModel);
LABEL_18:
    outCreatedNew = 0;
    return CgPredictedEntitySystem::GetDObj(System, ent, &outDObjModel, 1u, &outCreatedNew);
  }
  return result;
}

/*
==============
CgMissile::GetMuzzleOrientation
==============
*/
void CgMissile::GetMuzzleOrientation(CgMissile *this, const int entNum, BgWeaponParms *outWP)
{
  float outSpread; 

  CgMissile::GetMuzzleOrientation(this, entNum, outWP, &outSpread);
}

/*
==============
CgMissile::GetMuzzleOrientation
==============
*/
void CgMissile::GetMuzzleOrientation(CgMissile *this, const int entNum, BgWeaponParms *outWP, float *outSpread)
{
  centity_t *Entity; 
  __int64 m_localClientNum; 
  CgWeaponSystem *v10; 
  bool (__fastcall *SimulateBulletFire_Orientation)(CgWeaponSystem *, centity_t *, const Weapon *, bool, const TagPair, bool, bool, PlayerHandIndex, const bool, const CgFireEventHighPrecisionData *, orientation_t *, float *, vec3_t *); 
  _QWORD *v12; 
  float v13; 
  __m256i v14; 
  __int64 v15; 
  __int64 v16; 
  TagPair v17; 
  int v18[3]; 
  __m256i v19; 
  float v20; 
  char v21[16]; 

  if ( !outWP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 774, ASSERT_TYPE_ASSERT, "(outWP)", (const char *)&queryFormat, "outWP") )
    __debugbreak();
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v15) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 775, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, 2048) )
      __debugbreak();
  }
  if ( !outSpread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 776, ASSERT_TYPE_ASSERT, "(outSpread)", (const char *)&queryFormat, "outSpread") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  m_localClientNum = this->m_localClientNum;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
  {
    LODWORD(v16) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v16) )
      __debugbreak();
  }
  if ( (unsigned int)m_localClientNum >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v16) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v15) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[m_localClientNum] )
  {
    LODWORD(v16) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v16) )
      __debugbreak();
  }
  v10 = CgWeaponSystem::ms_weaponSystemArray[m_localClientNum];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 781, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  SimulateBulletFire_Orientation = v10->SimulateBulletFire_Orientation;
  TagPair::TagPair(&v17);
  LOBYTE(v16) = 1;
  LOBYTE(v15) = 1;
  if ( !((unsigned __int8 (__fastcall *)(CgWeaponSystem *, centity_t *, Weapon *, bool, _QWORD, _DWORD, _DWORD, _DWORD, char, _QWORD, int *, float *, char *))SimulateBulletFire_Orientation)(v10, Entity, &outWP->weapon, outWP->isAlternate, *v12, v15, v16, 0, 1, 0i64, v18, outSpread, v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 790, ASSERT_TYPE_ASSERT, "(fireOrientationFound)", (const char *)&queryFormat, "fireOrientationFound") )
    __debugbreak();
  v13 = *(float *)v18;
  outWP->muzzleTrace.v[1] = *(float *)&v18[1];
  v14 = v19;
  outWP->muzzleTrace.v[0] = v13;
  outWP->muzzleTrace.v[2] = *(float *)&v18[2];
  *(__m256i *)outWP->forward.v = v14;
  outWP->up.v[2] = v20;
}

/*
==============
CgMissile::GetPhysicsDetailWorldId
==============
*/
__int64 CgMissile::GetPhysicsDetailWorldId(CgMissile *this)
{
  return (unsigned int)(3 * this->m_localClientNum + 4);
}

/*
==============
CgMissile::GetPhysicsMainWorldId
==============
*/
__int64 CgMissile::GetPhysicsMainWorldId(CgMissile *this)
{
  return (unsigned int)(3 * this->m_localClientNum + 2);
}

/*
==============
CgMissile::GetPlayerState
==============
*/
playerState_s *CgMissile::GetPlayerState(CgMissile *this, const int entNum)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  playerState_s *result; 
  int v8; 

  if ( (unsigned int)entNum >= 0x800 )
  {
    v8 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1726, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v8) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1729, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = NULL;
  if ( p_predictedPlayerState->clientNum == entNum )
    return p_predictedPlayerState;
  return result;
}

/*
==============
CgMissile::GetScaledProjectileSpeed
==============
*/
void CgMissile::GetScaledProjectileSpeed(CgMissile *this, const int attackerEntNum, const Weapon *r_weapon, bool isAlternate, int *outSpeed, int *outSpeedUp)
{
  BG_GetProjectileSpeed(r_weapon, isAlternate, outSpeed, outSpeedUp);
}

/*
==============
CgMissile::GetSplashMethodOfDeath
==============
*/
__int64 CgMissile::GetSplashMethodOfDeath(CgMissile *this, const BgEntityData *entityData)
{
  const CgPredictedEntity *Entity; 
  unsigned __int8 handler; 
  __int64 v5; 

  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 370, ASSERT_TYPE_ASSERT, "(predictedEntity)", (const char *)&queryFormat, "predictedEntity") )
    __debugbreak();
  handler = Entity->handler;
  if ( handler == 10 )
    return 5i64;
  if ( handler == 12 )
    return 7i64;
  LODWORD(v5) = handler;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 383, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled ET HANDLER: %d", v5) )
    __debugbreak();
  return 0i64;
}

/*
==============
CgMissile::GetSystem
==============
*/
CgMissile *CgMissile::GetSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgMissile::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 71, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the missile system for localClientNum %d but the missile system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgMissile::ms_allocatedCount )
  {
    LODWORD(v4) = CgMissile::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 72, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgMissile::ms_systemsArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 73, ASSERT_TYPE_ASSERT, "(ms_systemsArray[localClientNum])", "%s\n\tTrying to access unallocated missile system for localClientNum %d\n", "ms_systemsArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgMissile::ms_systemsArray[v1];
}

/*
==============
CgMissile::GlassDestroyPiece
==============
*/
void CgMissile::GlassDestroyPiece(CgMissile *this, unsigned int pieceIndex, const vec3_t *damagePos, const vec3_t *damageDir)
{
  ;
}

/*
==============
CgMissile::GlassRestorePiece
==============
*/
void CgMissile::GlassRestorePiece(CgMissile *this, unsigned int pieceIndex, unsigned __int16 health)
{
  ;
}

/*
==============
CgMissile::GlassTempDestroyPiece
==============
*/
__int64 CgMissile::GlassTempDestroyPiece(CgMissile *this, unsigned int pieceIndex)
{
  return 0i64;
}

/*
==============
CgMissile::GrenadeLauncherFire
==============
*/
void CgMissile::GrenadeLauncherFire(CgMissile *this, const int creatorEntNum, const int gameTime, const Weapon *r_grenade, const PlayerHandIndex hand, const BgWeaponParms *wp)
{
  cg_t *LocalClientGlobals; 
  __int128 v10; 
  int serverTime; 
  __int64 m_localClientNum; 
  CgPredictedEntity *Entity; 
  CgPredictedEntity *v17; 
  CgPredictedEntitySystem *System; 
  const playerState_s *v19; 
  __int128 v20; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  int fuseTime; 
  bool isAlternate; 
  int v33; 
  int v34; 
  __int64 v35; 
  CgEntityMissileComponentData outComponentData; 
  CgEntityData outEntityData; 
  vec3_t inOutVel; 
  vec3_t dir; 

  v35 = -2i64;
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 668, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  this->GetScaledProjectileSpeed(this, creatorEntNum, &wp->weapon, wp->isAlternate, &v33, &v34);
  inOutVel.v[0] = (float)v33 * wp->forward.v[0];
  inOutVel.v[1] = (float)v33 * wp->forward.v[1];
  inOutVel.v[2] = (float)v34 + (float)((float)v33 * wp->forward.v[2]);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 680, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v10 = LODWORD(inOutVel.v[1]);
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(inOutVel.v[0] * inOutVel.v[0])) + (float)(inOutVel.v[2] * inOutVel.v[2]));
  _XMM3 = v10;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm7, xmm0
  }
  dir.v[0] = inOutVel.v[0] * (float)(1.0 / *(float *)&_XMM1);
  dir.v[1] = inOutVel.v[1] * (float)(1.0 / *(float *)&_XMM1);
  dir.v[2] = inOutVel.v[2] * (float)(1.0 / *(float *)&_XMM1);
  CgMissile::AddVelocityForMoverClient(this, LocalClientGlobals, gameTime, &dir, &inOutVel);
  CgEntityData::CgEntityData(&outEntityData);
  CgEntityMissileComponentData::CgEntityMissileComponentData(&outComponentData);
  fuseTime = BG_WeaponFuseTime(&wp->weapon, wp->isAlternate);
  serverTime = LocalClientGlobals->time;
  isAlternate = wp->isAlternate;
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BgMissile::FireGrenade(this, CgWeaponMap::ms_instance[m_localClientNum], creatorEntNum, &wp->muzzleTrace, &inOutVel, &wp->weapon, isAlternate, hand, 0, serverTime, fuseTime, 0, &outEntityData, &outComponentData);
  if ( CgEntityData::IsEmpty(&outEntityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 689, ASSERT_TYPE_ASSERT, "(!entityData.IsEmpty())", (const char *)&queryFormat, "!entityData.IsEmpty()") )
    __debugbreak();
  Entity = CgEntityData::GetEntity(&outEntityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 692, ASSERT_TYPE_ASSERT, "(missileEnt)", (const char *)&queryFormat, "missileEnt") )
    __debugbreak();
  Entity->flags.m_flags[0] |= 0x4000u;
  v17 = CgMissile::SpawnClientTrajectoryEnt(this, Entity, wp, hand, &inOutVel, 0);
  if ( v17 )
  {
    v19 = this->GetPlayerState(this, (unsigned int)creatorEntNum);
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 708, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v20 = LODWORD(inOutVel.v[1]);
    *(float *)&v20 = fsqrt((float)((float)(*(float *)&v20 * *(float *)&v20) + (float)(inOutVel.v[0] * inOutVel.v[0])) + (float)(inOutVel.v[2] * inOutVel.v[2]));
    _XMM3 = v20;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm7, xmm0
    }
    inOutVel.v[0] = inOutVel.v[0] * (float)(1.0 / *(float *)&_XMM1);
    inOutVel.v[1] = inOutVel.v[1] * (float)(1.0 / *(float *)&_XMM1);
    inOutVel.v[2] = inOutVel.v[2] * (float)(1.0 / *(float *)&_XMM1);
    v24 = (float)((float)(inOutVel.v[1] * v19->velocity.v[1]) + (float)(inOutVel.v[0] * v19->velocity.v[0])) + (float)(inOutVel.v[2] * v19->velocity.v[2]);
    v25 = (float)(inOutVel.v[0] * v24) + Entity->s.lerp.pos.trDelta.v[0];
    Entity->s.lerp.pos.trDelta.v[0] = v25;
    v26 = (float)(v24 * inOutVel.v[1]) + Entity->s.lerp.pos.trDelta.v[1];
    Entity->s.lerp.pos.trDelta.v[1] = v26;
    v27 = (float)(v24 * inOutVel.v[2]) + Entity->s.lerp.pos.trDelta.v[2];
    Entity->s.lerp.pos.trDelta.v[2] = v27;
    if ( ((LODWORD(v25) & 0x7F800000) == 2139095040 || (LODWORD(v26) & 0x7F800000) == 2139095040 || (LODWORD(v27) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 715, ASSERT_TYPE_SANITY, "( !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[2] )") )
      __debugbreak();
    v28 = (float)(v24 * inOutVel.v[0]) + v17->s.lerp.pos.trDelta.v[0];
    v17->s.lerp.pos.trDelta.v[0] = v28;
    v29 = (float)(v24 * inOutVel.v[1]) + v17->s.lerp.pos.trDelta.v[1];
    v17->s.lerp.pos.trDelta.v[1] = v29;
    v30 = (float)(v24 * inOutVel.v[2]) + v17->s.lerp.pos.trDelta.v[2];
    v17->s.lerp.pos.trDelta.v[2] = v30;
    if ( ((LODWORD(v28) & 0x7F800000) == 2139095040 || (LODWORD(v29) & 0x7F800000) == 2139095040 || (LODWORD(v30) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 718, ASSERT_TYPE_SANITY, "( !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  else
  {
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 702, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    CgPredictedEntitySystem::FreePredictedEntity(System, Entity);
  }
}

/*
==============
CgMissile::InitGrenadePlatformTracking
==============
*/
void CgMissile::InitGrenadePlatformTracking(CgMissile *this, BgEntityData *entityData, const int parentEntNum)
{
  ;
}

/*
==============
CgMissile::InitGrenadeSetAntiLagOffset
==============
*/
void CgMissile::InitGrenadeSetAntiLagOffset(CgMissile *this, BgEntityData *entityData, const int parentEntNum, const int serverTime)
{
  ;
}

/*
==============
CgMissile::InitGrenadeTimer
==============
*/
void CgMissile::InitGrenadeTimer(CgMissile *this, BgEntityData *entityData, const int parentEntNum, const Weapon *r_weapon)
{
  ;
}

/*
==============
CgMissile::IsDebugTextEnabled
==============
*/
__int64 CgMissile::IsDebugTextEnabled(CgMissile *this)
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
CgMissile::IsEntityClient
==============
*/
bool CgMissile::IsEntityClient(CgMissile *this, const int entNum)
{
  centity_t *Entity; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 81, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 84, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  return (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_PLAYER;
}

/*
==============
CgMissile::IsEntityClientOrActorOrAgent
==============
*/
bool CgMissile::IsEntityClientOrActorOrAgent(CgMissile *this, const int entNum)
{
  centity_t *Entity; 
  entityType_s eType; 
  bool result; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 95, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  result = 0;
  if ( (Entity->flags & 1) != 0 )
  {
    eType = Entity->nextState.eType;
    if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM )
      return 1;
  }
  return result;
}

/*
==============
CgMissile::IsEntityValid
==============
*/
bool CgMissile::IsEntityValid(CgMissile *this, const int entNum)
{
  centity_t *Entity; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 116, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  return Entity->flags & 1;
}

/*
==============
CgMissile::IsScriptableEntity
==============
*/
bool CgMissile::IsScriptableEntity(CgMissile *this, const int entNum)
{
  return ScriptableCl_IsScriptableEntityByNum((const LocalClientNum_t)this->m_localClientNum, entNum) != 0;
}

/*
==============
CgMissile::JavelinSoftLaunch
==============
*/
bool CgMissile::JavelinSoftLaunch(CgMissile *this, const Weapon *r_weapon, const entityState_t *es, const int time)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1847, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return BG_WeaponDef(r_weapon, 0)->guidedMissileType == MISSILE_GUIDANCE_JAVELIN && time - es->lerp.u.anonymous.data[2] <= BG_ProjIgnitionDelay(r_weapon, 0);
}

/*
==============
CgMissile::KeepPointInPlayableBounds
==============
*/
void CgMissile::KeepPointInPlayableBounds(CgMissile *this, vec3_t *origin)
{
  ;
}

/*
==============
CgMissile::LinkEntity
==============
*/
void CgMissile::LinkEntity(CgMissile *this, const int entNum)
{
  ;
}

/*
==============
CgMissile::LinkTo
==============
*/
bool CgMissile::LinkTo(CgMissile *this, BgEntityData *entityData, const int parentEntNum, scr_string_t tagName)
{
  CgPredictedEntity *Entity; 
  bool result; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1708, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1712, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( parentEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1714, ASSERT_TYPE_ASSERT, "(parentEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "parentEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  result = 1;
  Entity->linkInfo.tagName = tagName;
  Entity->linkInfo.parentEntNum = parentEntNum;
  return result;
}

/*
==============
CgMissile::LinkedSimulate
==============
*/
void CgMissile::LinkedSimulate(CgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime)
{
  CgPredictedEntity *Entity; 
  CgPredictedEntitySystem *System; 
  tmat43_t<vec3_t> outParentAxis; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 238, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 242, ASSERT_TYPE_ASSERT, "(predictedEntity)", (const char *)&queryFormat, "predictedEntity") )
    __debugbreak();
  if ( Entity->linkInfo.parentEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 244, ASSERT_TYPE_ASSERT, "(predictedEntity->linkInfo.parentEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "predictedEntity->linkInfo.parentEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( (CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, Entity->linkInfo.parentEntNum)->flags & 1) != 0 )
  {
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 254, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    if ( CgPredictedEntitySystem::GetParentAxis(System, Entity, &outParentAxis) )
    {
      CG_SetPoseOrigin(&Entity->pose, &outParentAxis.m[3]);
      AxisToAngles((const tmat33_t<vec3_t> *)&outParentAxis, &Entity->pose.angles);
    }
  }
}

/*
==============
CgMissile::MissileTrajectoryClientControlled
==============
*/
void CgMissile::MissileTrajectoryClientControlled(CgMissile *this, const BgWeaponMap *weaponMap, const int simulationTime, const int timeDeltaMsec)
{
  ;
}

/*
==============
CgMissile::MovingPlatformAttemptGrenadeLink
==============
*/
void CgMissile::MovingPlatformAttemptGrenadeLink(CgMissile *this, BgEntityData *entityData, const trace_t *impact)
{
  ;
}

/*
==============
CgMissile::NotifyRadiusDamage
==============
*/
void CgMissile::NotifyRadiusDamage(CgMissile *this, const vec3_t *damageOrigin, float damageRadius, const int attackerEntNum)
{
  ;
}

/*
==============
CgMissile::OnImpact
==============
*/
void CgMissile::OnImpact(CgMissile *this, BgEntityData *entityData, const int hitEntNum)
{
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1992, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  CgEntityData::GetEntity((CgEntityData *)entityData)->u.missile.hasImpact = 1;
}

/*
==============
CgMissile::OnWeaponFire
==============
*/
void CgMissile::OnWeaponFire(CgMissile *this, centity_t *cent, int event, const TagPair weaponFlashTagPair, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const bool isPlayerView)
{
  const Weapon *AltWeapon; 
  cg_t *LocalClientGlobals; 
  const WeaponHand *ViewModelHand; 
  CgWeaponMap *Instance; 
  CgMissile_vtbl *v14; 
  __int64 number; 
  __int64 v16; 
  __int64 v17; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v18; 
  weapType_t WeaponType; 
  CgPredictedEntitySystem *System; 
  __int128 v21; 
  int v22; 
  double v23; 
  centity_t *v24; 
  unsigned int time; 
  weapClass_t WeaponClass; 
  int v27; 
  __int64 *v28; 
  float v29; 
  double Float_Internal_DebugName; 
  void (__fastcall *GrenadeLauncherFire)(BgMissile *, const int, const int, const Weapon *, const PlayerHandIndex, const BgWeaponParms *); 
  int fmt; 
  float outSpread[2]; 
  BgWeaponMap *weaponMap; 
  centity_t *v35; 
  BgWeaponParms outWP; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  int v40; 

  AltWeapon = r_weapon;
  v35 = cent;
  if ( isPlayerView )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 819, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    ViewModelHand = cg_t::GetViewModelHand(LocalClientGlobals, hand);
    if ( !ViewModelHand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 822, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
      __debugbreak();
    if ( ViewModelHand->viewModelDObj )
    {
      if ( !LocalClientGlobals->inKillCam && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
      {
        Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
        v14 = this->__vftable;
        number = (unsigned int)cent->nextState.number;
        weaponMap = Instance;
        v16 = (__int64)v14->GetPlayerState(this, number);
        v17 = v16;
        if ( v16 )
        {
          v18 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v16 + 376);
          if ( v16 == -376 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
            __debugbreak();
          if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v18, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v18, ACTIVE, 6u) )
          {
            if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v18, ACTIVE, 7u) )
            {
              if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
                __debugbreak();
              return;
            }
            if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v18, ACTIVE, 0xBu) )
            {
              WeaponType = BG_GetWeaponType(r_weapon, isAlternate);
              if ( (unsigned int)(WeaponType - 3) <= 1 && BgMissile::ShouldBePredicted(weaponMap, (const playerState_s *)v17, r_weapon, isAlternate) )
              {
                System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
                if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 865, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
                  __debugbreak();
                if ( CgPredictedEntitySystem::CanSpawnNewEntities(System) )
                {
                  v21 = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
                  v22 = *(_DWORD *)&r_weapon->weaponCamo;
                  *(__m256i *)&outWP.weapon.weaponIdx = *(__m256i *)&r_weapon->weaponIdx;
                  v23 = *(double *)&r_weapon->attachmentVariationIndices[21];
                  *(_DWORD *)&outWP.weapon.weaponCamo = v22;
                  *(double *)&outWP.weapon.attachmentVariationIndices[21] = v23;
                  *(_OWORD *)&outWP.weapon.attachmentVariationIndices[5] = v21;
                  outWP.isAlternate = isAlternate;
                  v24 = v35;
                  outWP.weapDef = BG_WeaponDef(r_weapon, isAlternate);
                  CgMissile::GetMuzzleOrientation(this, v35->nextState.number, &outWP, outSpread);
                  time = LocalClientGlobals->time;
                  if ( WeaponType == WEAPTYPE_GRENADE )
                  {
                    this->ThrowGrenade(this, v24->nextState.number, time, &outWP);
                    return;
                  }
                  if ( WeaponType != WEAPTYPE_PROJECTILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 890, ASSERT_TYPE_ASSERT, "(weaponType == WEAPTYPE_PROJECTILE)", (const char *)&queryFormat, "weaponType == WEAPTYPE_PROJECTILE") )
                    __debugbreak();
                  WeaponClass = BG_GetWeaponClass(&outWP.weapon, outWP.isAlternate);
                  if ( WeaponClass != WEAPCLASS_GRENADE && WeaponClass != WEAPCLASS_THROWINGKNIFE )
                  {
                    v27 = *(_DWORD *)(v17 + 4252);
                    if ( (v27 & 2) == 0 )
                    {
                      if ( *(_WORD *)(v17 + 778) && (float)outWP.weapDef->iProjectileSpeed > 0.0 && Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && BG_WeaponDef(r_weapon, 0)->isAirburstWeapon )
                      {
                        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 939, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST )") )
                          __debugbreak();
                        v28 = &v37;
                        v37 = 0i64;
                        v38 = 0i64;
                        v39 = 0i64;
                        v40 = 0;
                        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_airburstAdjustDistance, "airburstAdjustDistance");
                        *(float *)&v39 = (float)((float)*(unsigned __int16 *)(v17 + 778) + *(float *)&Float_Internal_DebugName) / (float)outWP.weapDef->iProjectileSpeed;
                      }
                      else
                      {
                        v28 = NULL;
                      }
                      goto LABEL_53;
                    }
                    v28 = &v37;
                    v40 = 1;
                    v37 = 0i64;
                    v38 = 0i64;
                    v39 = 0i64;
                    if ( (v27 & 0x40) != 0 )
                    {
                      v29 = *(float *)(v17 + 4264);
                      HIDWORD(v37) = *(_DWORD *)(v17 + 4260);
                      HIDWORD(v38) = *(_DWORD *)(v17 + 4268);
                      *(float *)&v38 = v29;
                    }
                    else
                    {
                      if ( (CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, *(_DWORD *)(v17 + 4256))->flags & 1) != 0 )
                      {
                        LODWORD(v37) = *(_DWORD *)(v17 + 4256);
                        goto LABEL_42;
                      }
                      v28 = NULL;
                    }
                    LODWORD(v37) = 2047;
LABEL_42:
                    if ( (*(_BYTE *)(v17 + 4252) & 4) != 0 )
                      BYTE1(v40) = 1;
LABEL_53:
                    LOBYTE(fmt) = outWP.isAlternate;
                    ((void (__fastcall *)(CgMissile *, _QWORD, _QWORD, const Weapon *, int, const PlayerHandIndex, _DWORD, BgWeaponParms *, vec3_t *, __int64 *, _BYTE))this->RocketLauncherFire)(this, (unsigned int)v24->nextState.number, time, r_weapon, fmt, hand, LODWORD(outSpread[0]), &outWP, &vec3_origin, v28, 0);
                    return;
                  }
                  GrenadeLauncherFire = this->GrenadeLauncherFire;
                  if ( outWP.isAlternate )
                    AltWeapon = BG_GetAltWeapon(r_weapon);
                  GrenadeLauncherFire(this, v24->nextState.number, time, AltWeapon, hand, &outWP);
                }
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CgMissile::PreAddPacketEntitiesUpdateMissile
==============
*/
void CgMissile::PreAddPacketEntitiesUpdateMissile(CgMissile *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed)
{
  CgPredictedEntitySystem *System; 
  centity_t *serverEnt; 
  int serverEntNum; 
  int ServerTimeFromPredictionKey; 
  int creationServerTime; 
  cg_t *LocalClientGlobals; 
  CgPredictedEntity *clientTrajectoryEntity; 
  CgWeaponMap *Instance; 
  const Weapon *r_weapon; 
  CgPredictedEntity *v17; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1217, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( timeElapsed < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1218, ASSERT_TYPE_ASSERT, "(timeElapsed >= 0)", (const char *)&queryFormat, "timeElapsed >= 0") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808000, "CgMissile::PreAddPacketEntitiesUpdateMissile");
  if ( ent->predictionState != CLIENT_TRAJECTORY_ENTITY )
  {
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1229, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    serverEnt = NULL;
    serverEntNum = ent->serverEntNum;
    if ( serverEntNum != 2047 )
    {
      serverEnt = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, serverEntNum);
      if ( (serverEnt->flags & 1) == 0 )
        goto LABEL_39;
    }
    if ( ent->serverEntTime && !serverEnt )
      goto LABEL_39;
    ServerTimeFromPredictionKey = BgPredictedEntitySystem::GetServerTimeFromPredictionKey((const unsigned int *)&ent->s.lerp.u);
    creationServerTime = ServerTimeFromPredictionKey;
    if ( ent->eventInfo.freeAfterEvent || (unsigned int)(updateTime - ServerTimeFromPredictionKey) > 0x2710 )
      goto LABEL_37;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1270, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( DELETE_ENTITIES_WITH_NO_SERVER_VERSION && LocalClientGlobals->time >= creationServerTime + 400 && ent->serverEntNum == 2047 )
      goto LABEL_39;
    clientTrajectoryEntity = ent->clientTrajectoryEntity;
    if ( clientTrajectoryEntity && CG_Entity_IsNoDraw((const LocalClientNum_t)this->m_localClientNum, &clientTrajectoryEntity->s, NULL) )
      ent->u.missile.clientTrajectoryBlendOutRatio = 1.0;
    if ( CG_Entity_IsNoDraw((const LocalClientNum_t)this->m_localClientNum, &ent->s, NULL) )
    {
LABEL_37:
      if ( !serverEnt )
      {
LABEL_39:
        CgPredictedEntitySystem::FreePredictedEntity(System, ent);
        goto LABEL_40;
      }
LABEL_38:
      CgMissile::ServerEntHandOff(this, ent, serverEnt);
      goto LABEL_39;
    }
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1307, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    r_weapon = BG_GetWeaponForEntity(Instance, &ent->s);
    CgMissile::UpdatePredictionBlendRatios(this, ent, prevUpdateTime, updateTime, timeElapsed, r_weapon, ent->s.inAltWeaponMode, creationServerTime, serverEnt);
    v17 = ent->clientTrajectoryEntity;
    if ( v17 && ent->u.missile.clientTrajectoryBlendOutRatio >= 1.0 )
    {
      ent->u.missile.clientTrajectoryBlendOutRatio = 1.0;
      CgPredictedEntitySystem::FreePredictedEntity(System, v17);
      ent->clientTrajectoryEntity = NULL;
    }
    if ( ent->u.missile.serverTrajectoryBlendInRatio >= 1.0 )
    {
      if ( !serverEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1323, ASSERT_TYPE_ASSERT, "(serverEnt)", (const char *)&queryFormat, "serverEnt") )
        __debugbreak();
      goto LABEL_38;
    }
  }
LABEL_40:
  Sys_ProfEndNamedEvent();
}

/*
==============
CgMissile::ProjectileImpactRemoteEyesNotify
==============
*/
void CgMissile::ProjectileImpactRemoteEyesNotify(CgMissile *this, const int entNum, const Weapon *weapon, const vec3_t *pos)
{
  ;
}

/*
==============
CgMissile::ProjectileImpactSplashNotify
==============
*/
void CgMissile::ProjectileImpactSplashNotify(CgMissile *this, const int entNum, const Weapon *weapon, const vec3_t *pos)
{
  ;
}

/*
==============
CgMissile::RadiusDamage
==============
*/
void CgMissile::RadiusDamage(CgMissile *this, const vec3_t *origin, const int inflictorEntNum, const int attackerEntNum)
{
  ;
}

/*
==============
CgMissile::RocketLauncherFire
==============
*/
void CgMissile::RocketLauncherFire(CgMissile *this, const int creatorEntNum, const int gameTime, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const float spread, const BgWeaponParms *wp, const vec3_t *gunVel, const BgMissileFireParms *fireParms, bool magicBullet)
{
  const playerState_s *v15; 
  cg_t *LocalClientGlobals; 
  int serverTime; 
  __int64 m_localClientNum; 
  CgPredictedEntity *Entity; 
  CgPredictedEntitySystem *System; 
  CgEntityMissileComponentData outComponentData; 
  CgEntityData outEntityData; 
  vec3_t inOutVel; 
  vec3_t dir; 
  vec3_t outLaunchPos; 

  if ( creatorEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 728, ASSERT_TYPE_ASSERT, "(creatorEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "creatorEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 729, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  v15 = this->GetPlayerState(this, (unsigned int)creatorEntNum);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 732, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 735, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  BgMissile::CalculateRocketLaunchTransform(this, wp, v15->serverTime, spread, &outLaunchPos, &dir);
  inOutVel = *gunVel;
  CgMissile::AddVelocityForMoverClient(this, LocalClientGlobals, gameTime, &dir, &inOutVel);
  CgEntityData::CgEntityData(&outEntityData);
  CgEntityMissileComponentData::CgEntityMissileComponentData(&outComponentData);
  serverTime = LocalClientGlobals->time;
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BgMissile::FireRocket(this, CgWeaponMap::ms_instance[m_localClientNum], creatorEntNum, r_weapon, isAlternate, hand, &outLaunchPos, &dir, &inOutVel, fireParms, magicBullet, serverTime, &outEntityData, &outComponentData);
  if ( CgEntityData::IsEmpty(&outEntityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 746, ASSERT_TYPE_ASSERT, "(!entityData.IsEmpty())", (const char *)&queryFormat, "!entityData.IsEmpty()") )
    __debugbreak();
  Entity = CgEntityData::GetEntity(&outEntityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 753, ASSERT_TYPE_ASSERT, "(rocketEnt)", (const char *)&queryFormat, "rocketEnt") )
    __debugbreak();
  if ( !CgMissile::SpawnClientTrajectoryEnt(this, Entity, wp, hand, &inOutVel, 1) )
  {
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 759, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    CgPredictedEntitySystem::FreePredictedEntity(System, Entity);
  }
}

/*
==============
CgMissile::RunThink
==============
*/
void CgMissile::RunThink(CgMissile *this, BgEntityData *entityData)
{
  ;
}

/*
==============
CgMissile::ScriptableIsDoor
==============
*/
bool CgMissile::ScriptableIsDoor(CgMissile *this, unsigned int scriptableIndex)
{
  return CG_Door_ScriptableIsDoor((const LocalClientNum_t)this->m_localClientNum, scriptableIndex);
}

/*
==============
CgMissile::ServerEntHandOff
==============
*/
void CgMissile::ServerEntHandOff(CgMissile *this, CgPredictedEntity *missileEnt, centity_t *serverEnt)
{
  const DObj *MissileDObj; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  bool inAltWeaponMode; 
  const Weapon *v10; 
  FxCombinedDef v11; 
  FxCombinedDef v12; 
  FxCombinedDef v13; 
  FxCombinedDef v14; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  if ( !missileEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1502, ASSERT_TYPE_ASSERT, "(missileEnt)", (const char *)&queryFormat, "missileEnt") )
    __debugbreak();
  MissileDObj = CgMissile::GetMissileDObj(this, missileEnt);
  if ( MissileDObj )
  {
    if ( !serverEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1510, ASSERT_TYPE_ASSERT, "(serverEnt)", (const char *)&queryFormat, "serverEnt") )
      __debugbreak();
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &missileEnt->s);
    inAltWeaponMode = missileEnt->s.inAltWeaponMode;
    inOutIndex = -2;
    v10 = WeaponForEntity;
    if ( DObjGetBoneIndexInternal_54(MissileDObj, scr_const.tag_fx, &inOutIndex, &modelIndex) )
    {
      v11.particleSystemDef = BG_ProjTrailEffect(v10, inAltWeaponMode).particleSystemDef;
      if ( v11.particleSystemDef && (missileEnt->centFlags & 2) != 0 && FX_TransferBoltFromPredictedEntToCEnt((const LocalClientNum_t)this->m_localClientNum, v11.particleSystemDef, missileEnt->s.number, inOutIndex, serverEnt->nextState.number) )
        serverEnt->flags |= 2u;
      v12.particleSystemDef = BG_ProjIgnitionEffect(v10, inAltWeaponMode).particleSystemDef;
      if ( v12.particleSystemDef && (missileEnt->centFlags & 0x800) != 0 && FX_TransferBoltFromPredictedEntToCEnt((const LocalClientNum_t)this->m_localClientNum, v12.particleSystemDef, missileEnt->s.number, inOutIndex, serverEnt->nextState.number) )
        serverEnt->flags |= 0x800u;
      v13.particleSystemDef = BG_ProjBeaconEffect(v10, inAltWeaponMode).particleSystemDef;
      if ( v13.particleSystemDef && (missileEnt->centFlags & 0x400) != 0 && FX_TransferBoltFromPredictedEntToCEnt((const LocalClientNum_t)this->m_localClientNum, v13.particleSystemDef, missileEnt->s.number, inOutIndex, serverEnt->nextState.number) )
        serverEnt->flags |= 0x400u;
      v14.particleSystemDef = BG_ProjBodyEffect(v10, 0).particleSystemDef;
      if ( v14.particleSystemDef && (missileEnt->centFlags & 0x40000) != 0 && FX_TransferBoltFromPredictedEntToCEnt((const LocalClientNum_t)this->m_localClientNum, v14.particleSystemDef, missileEnt->s.number, inOutIndex, serverEnt->nextState.number) )
        serverEnt->flags |= 0x40000u;
    }
  }
}

/*
==============
CgMissile::SetEntityAngles
==============
*/
bool CgMissile::SetEntityAngles(CgMissile *this, BgEntityData *entityData, const vec3_t *angles, const bool warpPhysics)
{
  CgPredictedEntity *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1650, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1654, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( Entity->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1656, ASSERT_TYPE_ASSERT, "(!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos ))", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )") )
      __debugbreak();
  }
  Entity->s.lerp.apos.trBase.v[0] = angles->v[0];
  Entity->s.lerp.apos.trBase.v[1] = angles->v[1];
  Entity->s.lerp.apos.trBase.v[2] = angles->v[2];
  *(_QWORD *)&Entity->s.lerp.apos.trType = 0i64;
  Entity->s.lerp.apos.trDuration = 0;
  *(_QWORD *)Entity->s.lerp.apos.trDelta.v = 0i64;
  Entity->s.lerp.apos.trDelta.v[2] = 0.0;
  Entity->currentAngles.v[0] = angles->v[0];
  Entity->currentAngles.v[1] = angles->v[1];
  Entity->currentAngles.v[2] = angles->v[2];
  return 0;
}

/*
==============
CgMissile::SetEntityFlag
==============
*/
void CgMissile::SetEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsCommon flag)
{
  ;
}

/*
==============
CgMissile::SetEntityFlag
==============
*/
void CgMissile::SetEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsMP flag)
{
  ;
}

/*
==============
CgMissile::SetEntityFlag
==============
*/
void CgMissile::SetEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsSP flag)
{
  ;
}

/*
==============
CgMissile::SetEntityNextThink
==============
*/
void CgMissile::SetEntityNextThink(CgMissile *this, BgEntityData *entityData, const int nextThinkTime)
{
  ;
}

/*
==============
CgMissile::SetEntityOrigin
==============
*/
bool CgMissile::SetEntityOrigin(CgMissile *this, BgEntityData *entityData, const vec3_t *origin, const bool warpPhysics)
{
  CgPredictedEntity *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1626, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1630, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( Entity->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1632, ASSERT_TYPE_ASSERT, "(!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ))", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&Entity->s.lerp.pos, origin);
  *(_QWORD *)&Entity->s.lerp.pos.trType = 0i64;
  Entity->s.lerp.pos.trDuration = 0;
  *(_QWORD *)Entity->s.lerp.pos.trDelta.v = 0i64;
  Entity->s.lerp.pos.trDelta.v[2] = 0.0;
  Entity->currentOrigin.v[0] = origin->v[0];
  Entity->currentOrigin.v[1] = origin->v[1];
  Entity->currentOrigin.v[2] = origin->v[2];
  return 0;
}

/*
==============
CgMissile::SetEntityOriginAndAngles
==============
*/
bool CgMissile::SetEntityOriginAndAngles(CgMissile *this, BgEntityData *entityData, const vec3_t *origin, const vec3_t *angles)
{
  CgPredictedEntity *Entity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1674, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1678, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( Entity->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1680, ASSERT_TYPE_ASSERT, "(!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ))", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&Entity->s.lerp.pos, origin);
  *(_QWORD *)&Entity->s.lerp.pos.trType = 0i64;
  Entity->s.lerp.pos.trDuration = 0;
  *(_QWORD *)Entity->s.lerp.pos.trDelta.v = 0i64;
  Entity->s.lerp.pos.trDelta.v[2] = 0.0;
  Entity->currentOrigin.v[0] = origin->v[0];
  Entity->currentOrigin.v[1] = origin->v[1];
  Entity->currentOrigin.v[2] = origin->v[2];
  if ( Entity->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1690, ASSERT_TYPE_ASSERT, "(!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos ))", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )") )
      __debugbreak();
  }
  Entity->s.lerp.apos.trBase.v[0] = angles->v[0];
  Entity->s.lerp.apos.trBase.v[1] = angles->v[1];
  Entity->s.lerp.apos.trBase.v[2] = angles->v[2];
  *(_QWORD *)&Entity->s.lerp.apos.trType = 0i64;
  Entity->s.lerp.apos.trDuration = 0;
  *(_QWORD *)Entity->s.lerp.apos.trDelta.v = 0i64;
  Entity->s.lerp.apos.trDelta.v[2] = 0.0;
  Entity->currentAngles.v[0] = angles->v[0];
  Entity->currentAngles.v[1] = angles->v[1];
  Entity->currentAngles.v[2] = angles->v[2];
  return 0;
}

/*
==============
CgMissile::SetEntityWeapon
==============
*/
void CgMissile::SetEntityWeapon(CgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *weapon)
{
  CgPredictedEntity *Entity; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1123, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1124, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  BgMissile::SetEntityWeapon(this, weaponMap, entityData, weapon);
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1128, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1132, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  *(__m256i *)&Entity->entityWeapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
  *(_OWORD *)&Entity->entityWeapon.attachmentVariationIndices[5] = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  *(double *)&Entity->entityWeapon.attachmentVariationIndices[21] = *(double *)&weapon->attachmentVariationIndices[21];
  *(_DWORD *)&Entity->entityWeapon.weaponCamo = *(_DWORD *)&weapon->weaponCamo;
}

/*
==============
CgMissile::SpawnClientTrajectoryEnt
==============
*/
CgPredictedEntity *CgMissile::SpawnClientTrajectoryEnt(CgMissile *this, CgPredictedEntity *parentEnt, const BgWeaponParms *wp, const PlayerHandIndex hand, const vec3_t *vTossVel, const bool isRocket)
{
  cg_t *LocalClientGlobals; 
  CgPredictedEntitySystem *System; 
  CgPredictedEntity *v12; 
  CgPredictedEntity *v13; 
  const WeaponHand *ViewModelHand; 
  const DObj **p_viewModelDObj; 
  const cpose_t *ViewModelPoseForHand; 
  Weapon *p_weapon; 
  weapType_t WeaponType; 
  scr_string_t tag_accessory_left; 
  int WorldTagMatrix; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  TagPair result; 
  vec3_t *dir; 
  __int64 v25; 
  CgEntityMissileComponentData v26; 
  CgEntityData v27; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 

  v25 = -2i64;
  dir = (vec3_t *)vTossVel;
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 460, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  if ( !parentEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 461, ASSERT_TYPE_ASSERT, "(parentEnt)", (const char *)&queryFormat, "parentEnt") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 464, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 467, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  v12 = CgPredictedEntitySystem::SpawnClientTrajectoryEntity(System, parentEnt);
  v13 = v12;
  if ( v12 )
  {
    ViewModelHand = cg_t::GetViewModelHand(LocalClientGlobals, hand);
    p_viewModelDObj = (const DObj **)&ViewModelHand->viewModelDObj;
    if ( (!ViewModelHand || !ViewModelHand->viewModelDObj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 477, ASSERT_TYPE_ASSERT, "(weapHand && weapHand->viewModelDObj)", (const char *)&queryFormat, "weapHand && weapHand->viewModelDObj") )
      __debugbreak();
    ViewModelPoseForHand = CG_GetViewModelPoseForHand(this->m_localClientNum, hand);
    if ( !ViewModelPoseForHand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 480, ASSERT_TYPE_ASSERT, "(weapHandPose)", (const char *)&queryFormat, "weapHandPose") )
      __debugbreak();
    p_weapon = &wp->weapon;
    WeaponType = BG_GetWeaponType(&wp->weapon, wp->isAlternate);
    if ( WeaponType == WEAPTYPE_GRENADE )
    {
      if ( BG_WeaponDoesNotFullyAnimateViewmodelPlayerState(&LocalClientGlobals->predictedPlayerState, &wp->weapon, wp->isAlternate) )
      {
        tag_accessory_left = scr_const.tag_accessory_left;
        if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( !BG_Skydive_IsSkydiving(&LocalClientGlobals->predictedPlayerState) && BG_Ladder_IsDualWieldingAllowed(&LocalClientGlobals->predictedPlayerState) && LocalClientGlobals->predictedPlayerState.weapCommon.lastWeaponHand == WEAPON_HAND_LEFT && LocalClientGlobals != (cg_t *)-807536i64 )
        {
          if ( LocalClientGlobals->m_weaponHand[1].viewModelDObj )
          {
            p_viewModelDObj = (const DObj **)&LocalClientGlobals->m_weaponHand[1].viewModelDObj;
            ViewModelPoseForHand = CG_GetViewModelPoseForHand(this->m_localClientNum, WEAPON_HAND_LEFT);
            if ( !ViewModelPoseForHand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 508, ASSERT_TYPE_ASSERT, "(weapHandPose)", (const char *)&queryFormat, "weapHandPose") )
              __debugbreak();
          }
        }
      }
      else
      {
        tag_accessory_left = scr_const.tag_weapon;
      }
      WorldTagMatrix = CG_DObjGetWorldTagMatrix(ViewModelPoseForHand, *p_viewModelDObj, tag_accessory_left, &outTagMat, &outOrigin);
    }
    else
    {
      if ( WeaponType != WEAPTYPE_PROJECTILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 521, ASSERT_TYPE_ASSERT, "(weaponType == WEAPTYPE_PROJECTILE)", (const char *)&queryFormat, "weaponType == WEAPTYPE_PROJECTILE") )
        __debugbreak();
      BG_GetWeaponFlashTagname(&result, &wp->weapon, wp->isAlternate, 0);
      if ( !TagPair::GetTagNameAndBoneIndex(&result, *p_viewModelDObj, &outTagName, outBoneIndex) )
        return v13;
      WorldTagMatrix = CG_DObjGetWorldBoneMatrix(ViewModelPoseForHand, *p_viewModelDObj, outBoneIndex[0], &outTagMat, &outOrigin);
    }
    if ( WorldTagMatrix )
    {
      v13->currentOrigin = outOrigin;
      AxisToAngles(&outTagMat, &v13->currentAngles);
      if ( isRocket )
      {
        Trajectory_SetTrBase(&v13->s.lerp.pos, &v13->currentOrigin);
      }
      else
      {
        CgEntityMissileComponentData::CgEntityMissileComponentData(&v26, v13);
        CgEntityData::CgEntityData(&v27, v13, &v26);
        BgMissile::InitGrenadeMovement(this, &v27, &outOrigin, dir, p_weapon, 1, LocalClientGlobals->time);
        v13->s.lerp.apos.trBase.v[0] = v13->currentAngles.v[0];
        v13->s.lerp.apos.trBase.v[1] = v13->currentAngles.v[1];
        v13->s.lerp.apos.trBase.v[2] = v13->currentAngles.v[2];
      }
    }
    return v13;
  }
  return v12;
}

/*
==============
CgMissile::SpawnMissileEntity
==============
*/
void CgMissile::SpawnMissileEntity(CgMissile *this, const int parentEntNum, const Weapon *r_grenadeWeapon, const bool isAlternate, const bool isRocket, const int serverTime, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  const playerState_s *v12; 
  CgPredictedEntitySystem *System; 
  CgPredictedEntity *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  unsigned __int64 v17; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node<PredictedMissileDebugEnt> *mp_prev; 
  ntl::internal::list_node<PredictedMissileDebugEnt> *v20; 
  CgEntityMissileComponentData v21; 
  CgEntityData v22; 
  __int64 v23; 

  v23 = -2i64;
  if ( !outEntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1742, ASSERT_TYPE_ASSERT, "(outEntityData)", (const char *)&queryFormat, "outEntityData") )
    __debugbreak();
  if ( !outComponentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1743, ASSERT_TYPE_ASSERT, "(outComponentData)", (const char *)&queryFormat, "outComponentData") )
    __debugbreak();
  if ( !BG_IsPredictedProjectileWeapon(r_grenadeWeapon, isAlternate) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1744, ASSERT_TYPE_ASSERT, "(BG_IsPredictedProjectileWeapon( r_grenadeWeapon, isAlternate ))", (const char *)&queryFormat, "BG_IsPredictedProjectileWeapon( r_grenadeWeapon, isAlternate )") )
    __debugbreak();
  v12 = this->GetPlayerState(this, (unsigned int)parentEntNum);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1747, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1752, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  v14 = CgPredictedEntitySystem::SpawnPredictedEntity(System);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1755, ASSERT_TYPE_ASSERT, "(predictedEntity)", (const char *)&queryFormat, "predictedEntity") )
    __debugbreak();
  v14->initialSpawnType = ET_MISSILE;
  BgPredictedEntitySystem::SetPredictionKey(System, v12, v12->serverTime, (unsigned int *)&v14->s.lerp.u);
  v15 = DCONST_DVARBOOL_bg_missileDebugDraw;
  if ( !DCONST_DVARBOOL_bg_missileDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
    Com_Printf(14, "CLIENT: Creating missile entity with server time: %d\n", (unsigned int)v12->serverTime);
  v16 = DCONST_DVARBOOL_cg_predictedMissileDebug;
  if ( !DCONST_DVARBOOL_cg_predictedMissileDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_predictedMissileDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
  {
    v17 = 0i64;
    mp_next = s_predictedMissileDebugEntList.m_listHead.m_sentinel.mp_next;
    if ( (ntl::internal::list_head_base<ntl::internal::list_node<PredictedMissileDebugEnt> > *)s_predictedMissileDebugEntList.m_listHead.m_sentinel.mp_next != &s_predictedMissileDebugEntList.m_listHead )
    {
      do
      {
        ++v17;
        mp_next = mp_next->mp_next;
      }
      while ( mp_next != (ntl::internal::list_node_base *)&s_predictedMissileDebugEntList.m_listHead );
      if ( v17 >= 0x80 )
      {
        if ( (ntl::internal::list_head_base<ntl::internal::list_node<PredictedMissileDebugEnt> > *)s_predictedMissileDebugEntList.m_listHead.m_sentinel.mp_next == &s_predictedMissileDebugEntList.m_listHead )
        {
          if ( s_predictedMissileDebugEntList.m_listHead.m_sentinel.mp_next != s_predictedMissileDebugEntList.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 151, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
            __debugbreak();
        }
        mp_prev = (ntl::internal::list_node<PredictedMissileDebugEnt> *)s_predictedMissileDebugEntList.m_listHead.m_sentinel.mp_prev;
        if ( !s_predictedMissileDebugEntList.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 345, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
          __debugbreak();
        ntl::internal::list_head_base<ntl::internal::list_node<PredictedMissileDebugEnt>>::remove(&s_predictedMissileDebugEntList.m_listHead, mp_prev);
        if ( !mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        mp_prev->mp_prev = (ntl::internal::list_node_base *)s_predictedMissileDebugEntList.m_freelist.m_head.mp_next;
        s_predictedMissileDebugEntList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_prev;
      }
    }
    if ( !s_predictedMissileDebugEntList.m_freelist.m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !s_predictedMissileDebugEntList.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<32> *)s_predictedMissileDebugEntList.m_freelist.m_head.mp_next == &s_predictedMissileDebugEntList.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x20ui64, 0x80ui64) )
      __debugbreak();
    v20 = (ntl::internal::list_node<PredictedMissileDebugEnt> *)s_predictedMissileDebugEntList.m_freelist.m_head.mp_next;
    s_predictedMissileDebugEntList.m_freelist.m_head.mp_next = s_predictedMissileDebugEntList.m_freelist.m_head.mp_next->mp_next;
    v20->mp_prev = NULL;
    v20->mp_next = NULL;
    ntl::internal::list_head_base<ntl::internal::list_node<PredictedMissileDebugEnt>>::insert_before(&s_predictedMissileDebugEntList.m_listHead, (ntl::internal::list_node<PredictedMissileDebugEnt> *)s_predictedMissileDebugEntList.m_listHead.m_sentinel.mp_next, v20);
    v20->m_data.entNum = v14->s.number;
    v20->m_data.serverTime = serverTime;
    v20->m_data.commandTime = v12->commandTime;
  }
  CgEntityMissileComponentData::CgEntityMissileComponentData(&v21, v14);
  CgEntityData::CgEntityData(&v22, v14, &v21);
  outEntityData->m_origin = v22.m_origin;
  outEntityData->m_angles = v22.m_angles;
  outEntityData->m_box = v22.m_box;
  outEntityData->m_clipMask = v22.m_clipMask;
  outEntityData->m_parentEntNum = v22.m_parentEntNum;
  outEntityData->m_ownerEntNum = v22.m_ownerEntNum;
  outEntityData->m_entityState = v22.m_entityState;
  outEntityData->m_flags = v22.m_flags;
  outEntityData->m_components = v22.m_components;
  outEntityData->m_componentData = v22.m_componentData;
  outEntityData->m_handler = v22.m_handler;
  outEntityData[1].__vftable = (BgEntityData_vtbl *)v22.m_ent;
  LODWORD(outComponentData[1].__vftable) = v21.m_missileTargetEnt;
  outComponentData[2].__vftable = (BgEntityComponentData_vtbl *)v21.m_ent;
  BgEntityData::SetComponentData(outEntityData, outComponentData);
}

/*
==============
CgMissile::StuckNotify
==============
*/
void CgMissile::StuckNotify(CgMissile *this, BgEntityData *entityData, const int hitEntNum, scr_string_t partName)
{
  ;
}

/*
==============
CgMissile::TestEntityFlag
==============
*/
bool CgMissile::TestEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsCommon flag)
{
  return 0;
}

/*
==============
CgMissile::TestEntityFlag
==============
*/
bool CgMissile::TestEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsMP flag)
{
  return 0;
}

/*
==============
CgMissile::TestEntityFlag
==============
*/
bool CgMissile::TestEntityFlag(CgMissile *this, const int entNum, BgEntityFlagsSP flag)
{
  return 0;
}

/*
==============
CgMissile::ThrowGrenade
==============
*/
void CgMissile::ThrowGrenade(CgMissile *this, const int creatorEntNum, const int gameTime, const BgWeaponParms *wp)
{
  cg_t *LocalClientGlobals; 
  __int128 v9; 
  float v10; 
  __int128 v11; 
  float v14; 
  cg_t *v15; 
  __int128 v16; 
  int fuseTime; 
  __int64 m_localClientNum; 
  CgPredictedEntity *Entity; 
  CgPredictedEntity *v23; 
  CgPredictedEntitySystem *System; 
  __int128 v25; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  int serverTime; 
  bool isAlternate; 
  int v38; 
  int v39; 
  __int64 v40; 
  CgEntityMissileComponentData outComponentData; 
  CgEntityData outEntityData; 
  vec3_t inOutVel; 
  vec3_t dir; 

  v40 = -2i64;
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 602, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.clientNum != creatorEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 605, ASSERT_TYPE_ASSERT, "( ps->clientNum ) == ( creatorEntNum )", "%s == %s\n\t%i, %i", "ps->clientNum", "creatorEntNum", LocalClientGlobals->predictedPlayerState.clientNum, creatorEntNum) )
    __debugbreak();
  this->GetScaledProjectileSpeed(this, creatorEntNum, &wp->weapon, wp->isAlternate, &v38, &v39);
  v9 = LODWORD(wp->forward.v[0]);
  inOutVel.v[0] = *(float *)&v9 * (float)v38;
  v10 = wp->forward.v[1];
  inOutVel.v[1] = v10 * (float)v38;
  inOutVel.v[2] = (float)v39 + (float)((float)v38 * wp->forward.v[2]);
  if ( wp->weapDef->iProjectileSpeedForward )
  {
    v11 = v9;
    *(float *)&v11 = (float)(*(float *)&v9 * *(float *)&v9) + (float)(v10 * v10);
    if ( *(float *)&v11 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    _XMM1 = v11;
    __asm { vrsqrtss xmm4, xmm1, xmm1 }
    v14 = _mm_cvtepi32_ps((__m128i)(unsigned int)wp->weapDef->iProjectileSpeedForward).m128_f32[0];
    inOutVel.v[0] = (float)((float)(*(float *)&v9 * *(float *)&_XMM4) * v14) + inOutVel.v[0];
    inOutVel.v[1] = (float)((float)(v10 * *(float *)&_XMM4) * v14) + inOutVel.v[1];
  }
  v15 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 627, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v16 = LODWORD(inOutVel.v[1]);
  *(float *)&v16 = fsqrt((float)((float)(*(float *)&v16 * *(float *)&v16) + (float)(inOutVel.v[0] * inOutVel.v[0])) + (float)(inOutVel.v[2] * inOutVel.v[2]));
  _XMM3 = v16;
  __asm
  {
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm1, xmm3, xmm7, xmm0
  }
  dir.v[0] = inOutVel.v[0] * (float)(1.0 / *(float *)&_XMM1);
  dir.v[1] = inOutVel.v[1] * (float)(1.0 / *(float *)&_XMM1);
  dir.v[2] = inOutVel.v[2] * (float)(1.0 / *(float *)&_XMM1);
  CgMissile::AddVelocityForMoverClient(this, v15, gameTime, &dir, &inOutVel);
  CgEntityData::CgEntityData(&outEntityData);
  CgEntityMissileComponentData::CgEntityMissileComponentData(&outComponentData);
  fuseTime = BG_WeaponFuseTime(&wp->weapon, wp->isAlternate);
  serverTime = v15->time;
  isAlternate = wp->isAlternate;
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BgMissile::FireGrenade(this, CgWeaponMap::ms_instance[m_localClientNum], creatorEntNum, &wp->muzzleTrace, &inOutVel, &wp->weapon, isAlternate, WEAPON_HAND_DEFAULT, 1, serverTime, fuseTime, 0, &outEntityData, &outComponentData);
  if ( CgEntityData::IsEmpty(&outEntityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 636, ASSERT_TYPE_ASSERT, "(!entityData.IsEmpty())", (const char *)&queryFormat, "!entityData.IsEmpty()") )
    __debugbreak();
  Entity = CgEntityData::GetEntity(&outEntityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 639, ASSERT_TYPE_ASSERT, "(missileEnt)", (const char *)&queryFormat, "missileEnt") )
    __debugbreak();
  v23 = CgMissile::SpawnClientTrajectoryEnt(this, Entity, wp, WEAPON_HAND_DEFAULT, &inOutVel, 0);
  if ( v23 )
  {
    v25 = LODWORD(inOutVel.v[1]);
    *(float *)&v25 = fsqrt((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(inOutVel.v[0] * inOutVel.v[0])) + (float)(inOutVel.v[2] * inOutVel.v[2]));
    _XMM3 = v25;
    __asm
    {
      vcmpless xmm0, xmm3, xmm8
      vblendvps xmm1, xmm3, xmm7, xmm0
    }
    inOutVel.v[0] = inOutVel.v[0] * (float)(1.0 / *(float *)&_XMM1);
    inOutVel.v[1] = inOutVel.v[1] * (float)(1.0 / *(float *)&_XMM1);
    inOutVel.v[2] = inOutVel.v[2] * (float)(1.0 / *(float *)&_XMM1);
    v29 = (float)((float)(inOutVel.v[1] * LocalClientGlobals->predictedPlayerState.velocity.v[1]) + (float)(inOutVel.v[0] * LocalClientGlobals->predictedPlayerState.velocity.v[0])) + (float)(inOutVel.v[2] * LocalClientGlobals->predictedPlayerState.velocity.v[2]);
    v30 = (float)(inOutVel.v[0] * v29) + Entity->s.lerp.pos.trDelta.v[0];
    Entity->s.lerp.pos.trDelta.v[0] = v30;
    v31 = (float)(v29 * inOutVel.v[1]) + Entity->s.lerp.pos.trDelta.v[1];
    Entity->s.lerp.pos.trDelta.v[1] = v31;
    v32 = (float)(v29 * inOutVel.v[2]) + Entity->s.lerp.pos.trDelta.v[2];
    Entity->s.lerp.pos.trDelta.v[2] = v32;
    if ( ((LODWORD(v30) & 0x7F800000) == 2139095040 || (LODWORD(v31) & 0x7F800000) == 2139095040 || (LODWORD(v32) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 659, ASSERT_TYPE_SANITY, "( !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[2] )") )
      __debugbreak();
    v33 = (float)(v29 * inOutVel.v[0]) + v23->s.lerp.pos.trDelta.v[0];
    v23->s.lerp.pos.trDelta.v[0] = v33;
    v34 = (float)(v29 * inOutVel.v[1]) + v23->s.lerp.pos.trDelta.v[1];
    v23->s.lerp.pos.trDelta.v[1] = v34;
    v35 = (float)(v29 * inOutVel.v[2]) + v23->s.lerp.pos.trDelta.v[2];
    v23->s.lerp.pos.trDelta.v[2] = v35;
    if ( ((LODWORD(v33) & 0x7F800000) == 2139095040 || (LODWORD(v34) & 0x7F800000) == 2139095040 || (LODWORD(v35) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 662, ASSERT_TYPE_SANITY, "( !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  else
  {
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 649, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    CgPredictedEntitySystem::FreePredictedEntity(System, Entity);
  }
}

/*
==============
CgMissile::TriggerDamageCheckHit
==============
*/
void CgMissile::TriggerDamageCheckHit(CgMissile *this, const int activatorEntNum, bool isFirstTrace, const vec3_t *vStart)
{
  ;
}

/*
==============
CgMissile::TriggerDamageGrenadeTouch
==============
*/
void CgMissile::TriggerDamageGrenadeTouch(CgMissile *this, const int activatorEntNum, const vec3_t *vStart, const vec3_t *vEnd)
{
  ;
}

/*
==============
CgMissile::UpdateCosmetics
==============
*/
void CgMissile::UpdateCosmetics(CgMissile *this, DObj *missileObj, CgPredictedEntity *missileEnt)
{
  cg_t *LocalClientGlobals; 
  __int64 m_localClientNum; 
  const Weapon *WeaponForEntity; 
  bool inAltWeaponMode; 
  bool v10; 
  FxCombinedDef v11; 
  int centFlags; 
  unsigned __int64 PredictedEntSndEntHandle; 
  unsigned __int64 v14; 
  int v15; 
  FxCombinedDef v16; 
  int v17; 
  FxCombinedDef v18; 
  vec3_t outOrigin; 
  __int64 v20; 
  vec3_t org; 
  unsigned __int8 inOutIndex; 
  FXRegisteredDef modelIndex; 
  FXRegisteredDef def; 

  v20 = -2i64;
  if ( !missileEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1393, ASSERT_TYPE_ASSERT, "(missileEnt)", (const char *)&queryFormat, "missileEnt") )
    __debugbreak();
  if ( Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1395, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tReplace sound calls with the CG sound system to avoid threading issues, since it adds to the worker output queues", "!Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[m_localClientNum], &missileEnt->s);
  inAltWeaponMode = missileEnt->s.inAltWeaponMode;
  if ( (missileEnt->s.lerp.u.anonymous.data[4] & 0x200) != 0 )
    missileEnt->centFlags |= 0x200u;
  inOutIndex = -2;
  v10 = DObjGetBoneIndexInternal_54(missileObj, scr_const.tag_fx, &inOutIndex, (int *)&modelIndex) != 0;
  v11.particleSystemDef = BG_ProjTrailEffect(WeaponForEntity, inAltWeaponMode).particleSystemDef;
  def.m_particleSystemDef = v11.particleSystemDef;
  centFlags = missileEnt->centFlags;
  if ( (centFlags & 0x202) == 0 )
  {
    if ( !CgMissile::JavelinSoftLaunch(this, WeaponForEntity, &missileEnt->s, LocalClientGlobals->time) )
    {
      missileEnt->centFlags |= 2u;
      if ( def.m_particleSystemDef && v10 )
        FX_PlayBoltedToPredictedEnt((const LocalClientNum_t)this->m_localClientNum, &def, LocalClientGlobals->time, missileEnt->s.number, inOutIndex, 0);
      goto LABEL_22;
    }
    centFlags = missileEnt->centFlags;
    v11.particleSystemDef = def.m_particleSystemDef;
  }
  if ( (centFlags & 0x202) == 514 )
  {
    missileEnt->centFlags = centFlags & 0xFFFFFFFD;
    if ( v11.particleSystemDef )
    {
      if ( v10 )
        FX_StopBoltedEffects(this->m_localClientNum, &def, missileEnt->s.number, inOutIndex);
    }
  }
LABEL_22:
  modelIndex.m_particleSystemDef = (const ParticleSystemDef *)BG_GetWeaponSoundWithFallback(WeaponForEntity, inAltWeaponMode, 40i64);
  if ( modelIndex.m_particleSystemDef )
  {
    PredictedEntSndEntHandle = CG_GeneratePredictedEntSndEntHandle((const LocalClientNum_t)this->m_localClientNum, missileEnt->predictedEntNum);
    CG_GetPoseOrigin(&missileEnt->pose, &outOrigin);
    SND_PlayScaledSoundAlias((const SndAliasList *)modelIndex.m_particleSystemDef, PredictedEntSndEntHandle, 1.0, 1.0, &outOrigin, 0, SASYS_CGAME);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  if ( (missileEnt->centFlags & 0x800) == 0 && !CgMissile::JavelinSoftLaunch(this, WeaponForEntity, &missileEnt->s, LocalClientGlobals->time) )
  {
    missileEnt->centFlags |= 0x800u;
    modelIndex.m_particleSystemDef = BG_ProjIgnitionEffect(WeaponForEntity, inAltWeaponMode).particleSystemDef;
    if ( modelIndex.m_particleSystemDef && v10 )
      FX_PlayBoltedToPredictedEnt((const LocalClientNum_t)this->m_localClientNum, &modelIndex, LocalClientGlobals->time, missileEnt->s.number, inOutIndex, 0);
    *(_QWORD *)outOrigin.v = BG_ProjIgnitionSound(WeaponForEntity, inAltWeaponMode);
    if ( *(_QWORD *)outOrigin.v )
    {
      v14 = CG_GeneratePredictedEntSndEntHandle((const LocalClientNum_t)this->m_localClientNum, missileEnt->predictedEntNum);
      CG_GetPoseOrigin(&missileEnt->pose, &org);
      SND_PlayScaledSoundAlias(*(const SndAliasList **)outOrigin.v, v14, 1.0, 1.0, &org, 0, SASYS_CGAME);
      memset(&org, 0, sizeof(org));
    }
  }
  v15 = missileEnt->centFlags;
  if ( (v15 & 0x400) == 0 )
  {
    missileEnt->centFlags = v15 | 0x400;
    v16.particleSystemDef = BG_ProjBeaconEffect(WeaponForEntity, inAltWeaponMode).particleSystemDef;
    if ( v16.particleSystemDef )
    {
      if ( v10 )
      {
        modelIndex.m_particleSystemDef = v16.particleSystemDef;
        FX_PlayBoltedToPredictedEnt((const LocalClientNum_t)this->m_localClientNum, &modelIndex, LocalClientGlobals->time, missileEnt->s.number, inOutIndex, 0);
      }
    }
  }
  v17 = missileEnt->centFlags;
  if ( (v17 & 0x40000) == 0 )
  {
    missileEnt->centFlags = v17 | 0x40000;
    v18.particleSystemDef = BG_ProjBodyEffect(WeaponForEntity, 0).particleSystemDef;
    if ( v18.particleSystemDef )
    {
      if ( v10 )
      {
        modelIndex.m_particleSystemDef = v18.particleSystemDef;
        FX_PlayBoltedToPredictedEnt((const LocalClientNum_t)this->m_localClientNum, &modelIndex, LocalClientGlobals->time, missileEnt->s.number, inOutIndex, 0);
      }
    }
  }
}

/*
==============
CgMissile::UpdateMissilePrediction
==============
*/
void CgMissile::UpdateMissilePrediction(CgMissile *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed)
{
  __int128 v5; 
  CgPredictedEntitySystem *System; 
  centity_t *Entity; 
  int serverEntNum; 
  CgWeaponMap *Instance; 
  CgPredictedEntity *clientTrajectoryEntity; 
  CgEntitySystem *EntitySystem; 
  unsigned int v15; 
  __int128 v16; 
  float clientTrajectoryBlendOutRatio; 
  CgPredictedEntity *v18; 
  __int128 v20; 
  const cpose_t *PoseExtended; 
  float v23; 
  float v24; 
  float v25; 
  float serverTrajectoryBlendInRatio; 
  __int128 v28; 
  DObj *missileObj; 
  CgEntityMissileComponentData v32; 
  GfxSceneHudOutlineInfo v33; 
  CgEntityData v34; 
  GfxSceneEntityMutableShaderData v35; 
  vec3_t newOrigin; 
  vec4_t qb; 
  vec3_t outOrigin; 
  vec4_t quat; 
  vec4_t qa; 
  shaderOverride_t v41; 
  vec3_t angles; 
  vec3_t outLightingOrigin; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 961, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808000, "CgMissile::UpdateMissilePrediction");
  if ( ent->predictionState == CLIENT_TRAJECTORY_ENTITY || (missileObj = CgMissile::GetMissileDObj(this, ent)) == NULL )
  {
    Sys_ProfEndNamedEvent();
  }
  else
  {
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 981, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    Entity = NULL;
    serverEntNum = ent->serverEntNum;
    if ( serverEntNum != 2047 )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, serverEntNum);
      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 987, ASSERT_TYPE_ASSERT, "(CENextValid( serverEnt ))", (const char *)&queryFormat, "CENextValid( serverEnt )") )
        __debugbreak();
    }
    CgEntityMissileComponentData::CgEntityMissileComponentData(&v32, ent);
    CgEntityData::CgEntityData(&v34, ent, &v32);
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 994, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    BgMissile::Tick(this, Instance, &v34, prevUpdateTime, updateTime, timeElapsed);
    clientTrajectoryEntity = ent->clientTrajectoryEntity;
    if ( ent->isInUse )
    {
      if ( clientTrajectoryEntity )
      {
        CgEntityMissileComponentData::CgEntityMissileComponentData((CgEntityMissileComponentData *)&v41, clientTrajectoryEntity);
        CgEntityData::CgEntityData((CgEntityData *)&v35, ent->clientTrajectoryEntity, &v32);
        BgMissile::Tick(this, Instance, (BgEntityData *)&v35, prevUpdateTime, updateTime, timeElapsed);
        *(_QWORD *)&v41.scrollRateX = &BgEntityComponentData::`vftable';
      }
      if ( !CG_Entity_IsNoDraw((const LocalClientNum_t)this->m_localClientNum, &ent->s, NULL) )
      {
        EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)this->m_localClientNum);
        if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1024, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
          __debugbreak();
        v15 = EntitySystem->GetRenderFlagForRefEntity(EntitySystem, &ent->s);
        *(double *)&v5 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_missileRotationBlendScale, "cg_missileRotationBlendScale");
        v16 = v5;
        if ( 1.0 == ent->u.missile.clientTrajectoryBlendOutRatio )
        {
          newOrigin = ent->currentOrigin;
          AnglesToQuat(&ent->currentAngles, &quat);
        }
        else
        {
          if ( !ent->clientTrajectoryEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1047, ASSERT_TYPE_ASSERT, "(ent->clientTrajectoryEntity)", (const char *)&queryFormat, "ent->clientTrajectoryEntity") )
            __debugbreak();
          clientTrajectoryBlendOutRatio = ent->u.missile.clientTrajectoryBlendOutRatio;
          v18 = ent->clientTrajectoryEntity;
          newOrigin.v[0] = (float)((float)(ent->currentOrigin.v[0] - v18->currentOrigin.v[0]) * clientTrajectoryBlendOutRatio) + v18->currentOrigin.v[0];
          newOrigin.v[1] = (float)((float)(ent->currentOrigin.v[1] - v18->currentOrigin.v[1]) * clientTrajectoryBlendOutRatio) + v18->currentOrigin.v[1];
          newOrigin.v[2] = (float)((float)(ent->currentOrigin.v[2] - v18->currentOrigin.v[2]) * clientTrajectoryBlendOutRatio) + v18->currentOrigin.v[2];
          AnglesToQuat(&ent->currentAngles, &qb);
          AnglesToQuat(&ent->clientTrajectoryEntity->currentAngles, &qa);
          v20 = v5;
          *(float *)&v20 = *(float *)&v5 * ent->u.missile.clientTrajectoryBlendOutRatio;
          _XMM0 = v20;
          __asm { vminss  xmm2, xmm0, xmm10; frac }
          QuatLerp(&qa, &qb, *(float *)&_XMM2, &quat);
        }
        if ( ent->u.missile.serverTrajectoryBlendInRatio > 0.0 )
        {
          if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1063, ASSERT_TYPE_ASSERT, "(serverEnt)", (const char *)&queryFormat, "serverEnt") )
            __debugbreak();
          PoseExtended = CG_GetPoseExtended(this->m_localClientNum, ent->serverEntNum, 0);
          v23 = newOrigin.v[0];
          v24 = newOrigin.v[1];
          v25 = newOrigin.v[2];
          CG_GetPoseOrigin(PoseExtended, (vec3_t *)&qb);
          serverTrajectoryBlendInRatio = ent->u.missile.serverTrajectoryBlendInRatio;
          newOrigin.v[0] = (float)((float)(qb.v[0] - v23) * serverTrajectoryBlendInRatio) + v23;
          newOrigin.v[1] = (float)((float)(qb.v[1] - v24) * serverTrajectoryBlendInRatio) + v24;
          newOrigin.v[2] = (float)((float)(qb.v[2] - v25) * serverTrajectoryBlendInRatio) + v25;
          *(vec4_t *)&v41.scrollRateX = quat;
          AnglesToQuat(&PoseExtended->angles, &qa);
          v28 = v16;
          *(float *)&v28 = *(float *)&v16 * ent->u.missile.serverTrajectoryBlendInRatio;
          _XMM0 = v28;
          __asm { vminss  xmm2, xmm0, xmm10; frac }
          QuatLerp((const vec4_t *)&v41, &qa, *(float *)&_XMM2, &quat);
          memset(&qb, 0, 0xCui64);
        }
        QuatToAngles(&quat, &angles);
        CG_GetPoseOrigin(&ent->pose, &outOrigin);
        CgPredictedEntitySystem::UpdatePose(System, ent, &newOrigin, &angles);
        if ( outOrigin.v[0] == 0.0 && outOrigin.v[1] == 0.0 && outOrigin.v[2] == 0.0 )
          CG_GetPoseOrigin(&ent->pose, &outOrigin);
        CG_GetPoseOrigin(&ent->pose, (vec3_t *)&qb);
        this->DrawMissileDebug(this, &v34, &outOrigin, (const vec3_t *)&qb, &colorCyan);
        memset(&qb, 0, 0xCui64);
        CgMissile::UpdateCosmetics(this, missileObj, ent);
        CG_Entity_CalcLightingOrigin(&ent->pose, missileObj, &outLightingOrigin);
        memset(&v41, 0, sizeof(v41));
        memset(&v33, 0, sizeof(v33));
        entityMutableShaderData = *CG_Entity_GetMutableShaderData(&v35, (const LocalClientNum_t)this->m_localClientNum, missileObj, 0, &v33, &v41, 0.0);
        R_AddDObjToScene(missileObj, &ent->pose, ent->s.number, v15, &entityMutableShaderData, &outLightingOrigin, 0.0);
        Sys_ProfEndNamedEvent();
      }
    }
    else if ( clientTrajectoryEntity )
    {
      if ( clientTrajectoryEntity->isInUse )
        CgPredictedEntitySystem::FreePredictedEntity(System, clientTrajectoryEntity);
    }
  }
}

/*
==============
CgMissile::UpdatePlatformTracking
==============
*/
void CgMissile::UpdatePlatformTracking(CgMissile *this, BgEntityData *entityData)
{
  ;
}

/*
==============
CgMissile::UpdatePredictionBlendRatios
==============
*/
void CgMissile::UpdatePredictionBlendRatios(CgMissile *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed, const Weapon *r_weapon, const bool isAlternate, const int creationServerTime, centity_t *serverEnt)
{
  int ClientTrajectoryBlendOutTime; 
  bool v12; 
  CgPredictedEntity *clientTrajectoryEntity; 
  bool v14; 
  const dvar_t *v15; 
  int integer; 
  __int128 v17; 
  int v20; 
  const dvar_t *v21; 
  int v22; 
  __int128 v23; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1151, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( timeElapsed < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1152, ASSERT_TYPE_ASSERT, "(timeElapsed >= 0)", (const char *)&queryFormat, "timeElapsed >= 0") )
    __debugbreak();
  if ( ent->u.missile.clientTrajectoryBlendOutRatio < 1.0 )
  {
    ClientTrajectoryBlendOutTime = BG_PredictionGetClientTrajectoryBlendOutTime(r_weapon, isAlternate);
    v12 = ent->u.missile.hasImpact || ent->s.lerp.pos.trType == TR_STATIONARY;
    clientTrajectoryEntity = ent->clientTrajectoryEntity;
    v14 = clientTrajectoryEntity && (clientTrajectoryEntity->u.missile.hasImpact || clientTrajectoryEntity->s.lerp.pos.trType == TR_STATIONARY);
    if ( v12 || v14 )
    {
      v15 = DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs;
      if ( !DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_missileQuickServerEntBlendInTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      integer = v15->current.integer;
      if ( ClientTrajectoryBlendOutTime < integer )
        integer = ClientTrajectoryBlendOutTime;
      ClientTrajectoryBlendOutTime = integer;
    }
    if ( ClientTrajectoryBlendOutTime > 0 )
    {
      v17 = 0i64;
      *(float *)&v17 = (float)((float)timeElapsed / (float)ClientTrajectoryBlendOutTime) + ent->u.missile.clientTrajectoryBlendOutRatio;
      _XMM2 = v17;
      __asm { vminss  xmm3, xmm2, xmm6 }
      ent->u.missile.clientTrajectoryBlendOutRatio = *(float *)&_XMM3;
    }
    else
    {
      ent->u.missile.clientTrajectoryBlendOutRatio = 1.0;
    }
  }
  if ( ent->u.missile.serverTrajectoryBlendInRatio < 1.0 )
  {
    if ( ent->serverEntNum == 2047 )
    {
      ent->u.missile.serverTrajectoryBlendInRatio = 0.0;
    }
    else
    {
      if ( !serverEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1185, ASSERT_TYPE_ASSERT, "(serverEnt)", (const char *)&queryFormat, "serverEnt") )
        __debugbreak();
      v20 = BG_PredictionGetServerTrajectoryBlendInTime(r_weapon, isAlternate) + creationServerTime - ent->serverEntTime;
      if ( CG_Entity_GetLinkToParent(this->m_localClientNum, serverEnt) || serverEnt->nextState.lerp.pos.trType == TR_STATIONARY )
      {
        v21 = DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs;
        if ( !DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_missileQuickServerEntBlendInTimeMs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        v22 = v21->current.integer;
        if ( v20 < v22 )
          v22 = v20;
        v20 = v22;
      }
      if ( v20 > 0 )
      {
        v23 = 0i64;
        *(float *)&v23 = (float)((float)timeElapsed / (float)v20) + ent->u.missile.serverTrajectoryBlendInRatio;
        _XMM2 = v23;
        __asm { vminss  xmm3, xmm2, xmm6 }
        ent->u.missile.serverTrajectoryBlendInRatio = *(float *)&_XMM3;
      }
      else
      {
        ent->u.missile.serverTrajectoryBlendInRatio = 1.0;
      }
    }
  }
}

/*
==============
CgMissile::VehicleTrophyTestMissile
==============
*/
void CgMissile::VehicleTrophyTestMissile(CgMissile *this, BgEntityData *entityData, const vec3_t *start, const vec3_t *end)
{
  ;
}

