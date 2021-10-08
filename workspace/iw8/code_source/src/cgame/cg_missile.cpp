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
  int v9; 
  scrContext_t *v10; 
  __int64 v11; 
  __int64 v12; 
  gentity_s *v13; 
  unsigned __int16 number; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  const gentity_s *v19; 
  __int64 v21; 
  __int64 v22; 
  const Weapon *v24; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  if ( !grenadeEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 209, ASSERT_TYPE_ASSERT, "( grenadeEnt )", (const char *)&queryFormat, "grenadeEnt") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &grenadeEnt->s);
  v24 = WeaponForEntity;
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 212, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( r_grenadeWeapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( r_grenadeWeapon )") )
    __debugbreak();
  BG_ExplosionRadius(WeaponForEntity, grenadeEnt->s.inAltWeaponMode);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, xmm0
  }
  v9 = 0;
  v10 = ScriptContext_Server();
  if ( level.maxclients > 0 )
  {
    v11 = 0i64;
    v12 = 0i64;
    do
    {
      if ( (unsigned int)v9 >= 0x800 )
      {
        LODWORD(v22) = 2048;
        LODWORD(v21) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v12].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v11] )
      {
        v13 = &g_entities[v12];
        if ( !g_entities[v12].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 224, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        __asm { vmovaps xmm1, xmm6; radiusSquared }
        if ( G_Combat_IsWithinDamageRadius(&grenadeEnt->r.currentOrigin, *(float *)&_XMM1, v13) )
        {
          GScr_Weapon_AddParam(v10, WeaponForEntity, 0);
          number = grenadeEnt->parent.number;
          if ( !number )
            goto LABEL_38;
          v16 = number;
          v17 = number - 1;
          if ( v17 >= 0x800 )
          {
            LODWORD(v22) = 2048;
            LODWORD(v21) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v18 = v16 - 1;
          if ( g_entities[v18].r.isInUse != g_entityIsInUse[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v18] )
          {
            LODWORD(v22) = grenadeEnt->parent.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v22) )
              __debugbreak();
          }
          if ( grenadeEnt->parent.number )
          {
            v19 = EntHandle::ent(&grenadeEnt->parent);
            GScr_AddEntity(v19);
          }
          else
          {
LABEL_38:
            Scr_AddUndefined(v10);
          }
          GScr_AddEntity(grenadeEnt);
          GScr_Notify(v13, scr_const.grenadedanger, 3u);
          WeaponForEntity = v24;
        }
      }
      ++v9;
      ++v11;
      ++v12;
    }
    while ( v9 < level.maxclients );
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
DrawAttractorDebug
==============
*/
void DrawAttractorDebug(BgMissile *this)
{
  const dvar_t *v4; 
  __int64 v6; 
  unsigned __int16 v10; 
  __int64 v14; 
  const vec4_t *v18; 
  __int64 duration; 
  __int64 v26; 
  vec3_t center; 
  vec3_t dir; 
  vec3_t v29; 
  vec3_t v30; 

  v4 = DVARBOOL_missileDebugAttractors;
  if ( !DVARBOOL_missileDebugAttractors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileDebugAttractors") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    _RDI = &attrGlob.attractors[0].origin.v[2];
    v6 = 32i64;
    __asm
    {
      vmovaps [rsp+0E8h+var_38], xmm6
      vmovaps [rsp+0E8h+var_48], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vmovaps [rsp+0E8h+var_58], xmm8
      vmovss  xmm8, cs:__real@41200000
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      __asm
      {
        vmovss  dword ptr [rsp+0E8h+dir], xmm7
        vmovss  dword ptr [rsp+0E8h+dir+4], xmm6
        vmovss  dword ptr [rsp+0E8h+dir+8], xmm6
        vmovss  dword ptr [rsp+0E8h+var_88], xmm6
        vmovss  dword ptr [rsp+0E8h+var_88+4], xmm7
        vmovss  dword ptr [rsp+0E8h+var_88+8], xmm6
        vmovss  dword ptr [rsp+0E8h+var_78], xmm6
        vmovss  dword ptr [rsp+0E8h+var_78+4], xmm6
        vmovss  dword ptr [rsp+0E8h+var_78+8], xmm7
      }
      if ( *((_BYTE *)_RDI - 16) )
      {
        v10 = *((_WORD *)_RDI - 7);
        if ( v10 == 2047 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi-8]
            vmovss  xmm1, dword ptr [rdi-4]
            vmovss  dword ptr [rsp+0E8h+center], xmm0
            vmovss  xmm0, dword ptr [rdi]
            vmovss  dword ptr [rsp+0E8h+center+4], xmm1
          }
        }
        else
        {
          if ( v10 >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1039, ASSERT_TYPE_ASSERT, "( attrGlob.attractors[attractorIndex].entnum < ( 2048 ) )", (const char *)&queryFormat, "attrGlob.attractors[attractorIndex].entnum < MAX_GENTITIES") )
            __debugbreak();
          v14 = *((unsigned __int16 *)_RDI - 7);
          _RSI = &g_entities[v14];
          if ( (unsigned int)v14 >= 0x800 )
          {
            LODWORD(v26) = 2048;
            LODWORD(duration) = *((unsigned __int16 *)_RDI - 7);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v26) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[(int)v14].r.isInUse != g_entityIsInUse[(int)v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[(int)v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1041, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( attrGlob.attractors[attractorIndex].entnum ) )", (const char *)&queryFormat, "G_IsEntityInUse( attrGlob.attractors[attractorIndex].entnum )") )
            __debugbreak();
          if ( !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&_RSI->flags, ACTIVE, 0x14u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1042, ASSERT_TYPE_ASSERT, "( attractorEnt->flags.TestFlag( BgEntityFlagsCommon::MISSILE_ATTRACTOR_OR_REPULSOR ) )", (const char *)&queryFormat, "attractorEnt->flags.TestFlag( BgEntityFlagsCommon::MISSILE_ATTRACTOR_OR_REPULSOR )") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+130h]
            vmovss  dword ptr [rsp+0E8h+center], xmm0
            vmovss  xmm1, dword ptr [rsi+134h]
            vmovss  dword ptr [rsp+0E8h+center+4], xmm1
            vmovss  xmm0, dword ptr [rsi+138h]
          }
        }
        v18 = &colorOrange;
        if ( *((_BYTE *)_RDI - 15) )
          v18 = &colorGreen;
        __asm
        {
          vmovaps xmm1, xmm8; radius
          vmovss  dword ptr [rsp+0E8h+center+8], xmm0
        }
        G_DebugCircleEx(&center, *(float *)&_XMM1, &dir, v18, 0, 1);
        __asm { vmovaps xmm1, xmm8; radius }
        G_DebugCircleEx(&center, *(float *)&_XMM1, &v29, v18, 0, 1);
        __asm { vmovaps xmm1, xmm8; radius }
        G_DebugCircleEx(&center, *(float *)&_XMM1, &v30, v18, 0, 1);
      }
      _RDI += 7;
      --v6;
    }
    while ( v6 );
    __asm
    {
      vmovaps xmm8, [rsp+0E8h+var_58]
      vmovaps xmm7, [rsp+0E8h+var_48]
      vmovaps xmm6, [rsp+0E8h+var_38]
    }
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
  int flags; 
  char v26; 
  char v28; 
  const dvar_t *v31; 
  const dvar_t *v35; 
  vec3_t trBase; 
  __int64 v62; 
  vec3_t forward; 
  char v64; 
  void *retaddr; 

  _RAX = &retaddr;
  v62 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _R14 = result;
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1584, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (_RBX->c.item[0].weapon.attachmentVariationIndices[5] & 0x80u) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.cpp", 1585, ASSERT_TYPE_ASSERT, "(ent->c.missile.flags & MISSILEFLAG_CLIENT_CONTROLLED)", (const char *)&queryFormat, "ent->c.missile.flags & MISSILEFLAG_CLIENT_CONTROLLED") )
    __debugbreak();
  _RBX->clipmask &= ~0x800u;
  if ( !EntHandle::isDefined(&_RBX->remoteControlledOwner) )
    goto LABEL_11;
  client = EntHandle::ent(&_RBX->remoteControlledOwner)->client;
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
  AngleVectors(&_RBX->s.lerp.apos.trBase, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+forward+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+2Ch]
    vmovss  xmm1, dword ptr [rsp+0C8h+forward]
    vmulss  xmm2, xmm1, dword ptr [rbx+28h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm0, dword ptr [rsp+0C8h+forward+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+30h]
    vaddss  xmm6, xmm4, xmm1
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
  }
  flags = _RBX->c.missile.flags;
  __asm { vmovss  xmm7, cs:__real@3a83126f }
  if ( (flags & 0x60) == 32 && (buttons & 1) != 0 )
  {
    _RBP = DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange;
    if ( !DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSpeedTargetRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm8, dword ptr [rbp+2Ch]
      vsubss  xmm0, xmm8, xmm6
      vcomiss xmm0, cs:__real@43fa0000
    }
    if ( !(v28 | v26) )
    {
      _RBX->c.missile.flags |= 0x40u;
      G_Utils_AddEvent(_RBX, 0x8Du, 0);
    }
    __asm { vmovaps xmm6, xmm8 }
  }
  else
  {
    if ( (flags & 0x200) != 0 && (buttons & 0x40001) == 0x40000 )
      _RBX->c.missile.flags = flags | 0x20;
    _RBP = DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange;
    if ( !DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSpeedTargetRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm8, dword ptr [rbp+28h]
      vsubss  xmm0, xmm8, xmm6
      vcomiss xmm0, xmm7
    }
    if ( v28 | v26 )
    {
      if ( v28 )
      {
        v35 = DCONST_DVARMPFLT_missileRemoteSpeedDown;
        if ( !DCONST_DVARMPFLT_missileRemoteSpeedDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSpeedDown") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v35);
        __asm
        {
          vmulss  xmm0, xmm9, dword ptr [rbp+28h]
          vmulss  xmm1, xmm0, xmm7
          vsubss  xmm2, xmm6, xmm1
          vmaxss  xmm6, xmm2, xmm8
        }
      }
    }
    else
    {
      v31 = DCONST_DVARMPFLT_missileRemoteSpeedUp;
      if ( !DCONST_DVARMPFLT_missileRemoteSpeedUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSpeedUp") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      __asm
      {
        vmulss  xmm0, xmm9, dword ptr [rbp+28h]
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm2, xmm1, xmm6
        vminss  xmm6, xmm2, xmm8
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+forward+4]
    vmovss  dword ptr [rbx+2Ch], xmm0
    vmovss  xmm1, dword ptr [rsp+0C8h+forward+8]
    vmovss  dword ptr [rbx+30h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+0C8h+forward]
    vmovss  dword ptr [rbx+28h], xmm1
    vmulss  xmm0, xmm6, dword ptr [rbx+2Ch]
    vmovss  dword ptr [rbx+2Ch], xmm0
    vmulss  xmm1, xmm6, dword ptr [rbx+30h]
    vmovss  dword ptr [rbx+30h], xmm1
  }
  Trajectory_GetTrBase(&_RBX->s.lerp.pos, &trBase);
  __asm
  {
    vmulss  xmm0, xmm9, dword ptr [rbx+28h]
    vmulss  xmm2, xmm0, xmm7
    vaddss  xmm2, xmm2, dword ptr [rsp+0C8h+trBase]
    vmovss  dword ptr [rsp+0C8h+trBase], xmm2
    vmulss  xmm0, xmm9, dword ptr [rbx+2Ch]
    vmulss  xmm2, xmm0, xmm7
    vaddss  xmm2, xmm2, dword ptr [rsp+0C8h+trBase+4]
    vmovss  dword ptr [rsp+0C8h+trBase+4], xmm2
    vmulss  xmm0, xmm9, dword ptr [rbx+30h]
    vmulss  xmm2, xmm0, xmm7
    vaddss  xmm2, xmm2, dword ptr [rsp+0C8h+trBase+8]
    vmovss  dword ptr [rsp+0C8h+trBase+8], xmm2
  }
  Trajectory_SetTrBase(&_RBX->s.lerp.pos, &trBase);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+trBase]
    vmovss  dword ptr [r14], xmm0
    vmovss  xmm1, dword ptr [rsp+0C8h+trBase+4]
    vmovss  dword ptr [r14+4], xmm1
    vmovss  xmm0, dword ptr [rsp+0C8h+trBase+8]
    vmovss  dword ptr [r14+8], xmm0
  }
  memset(&trBase, 0, sizeof(trBase));
  _R11 = &v64;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
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
  vec4_t v13; 

  _RBX = color;
  Entity = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 2064, ASSERT_TYPE_ASSERT, "(predictedEntity)", (const char *)&queryFormat, "predictedEntity") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsp+68h+var_38], xmm0
  }
  if ( &colorCyan != color )
  {
    if ( Entity->predictionState == CLIENT_TRAJECTORY_ENTITY )
      __asm { vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
    else
      __asm { vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; vec4_t const colorMagenta }
    __asm { vmovups xmmword ptr [rsp+68h+var_38], xmm0 }
  }
  CG_DebugLine(start, end, &v13, depthTest, duration);
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
  _RAX = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)this->m_localClientNum, Components->missile.doorScriptableIndex);
  __asm { vmovss  xmm0, dword ptr [rax+30h] }
  return *(float *)&_XMM0;
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
  __int64 v18; 
  __int64 v19; 
  TagPair v20; 
  int v21[3]; 
  char v24[16]; 

  _RDI = outWP;
  if ( !outWP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 774, ASSERT_TYPE_ASSERT, "(outWP)", (const char *)&queryFormat, "outWP") )
    __debugbreak();
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v18) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 775, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, 2048) )
      __debugbreak();
  }
  if ( !outSpread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 776, ASSERT_TYPE_ASSERT, "(outSpread)", (const char *)&queryFormat, "outSpread") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  m_localClientNum = this->m_localClientNum;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
  {
    LODWORD(v19) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v19) )
      __debugbreak();
  }
  if ( (unsigned int)m_localClientNum >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v19) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v18) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[m_localClientNum] )
  {
    LODWORD(v19) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v19) )
      __debugbreak();
  }
  v10 = CgWeaponSystem::ms_weaponSystemArray[m_localClientNum];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 781, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  SimulateBulletFire_Orientation = v10->SimulateBulletFire_Orientation;
  TagPair::TagPair(&v20);
  LOBYTE(v19) = 1;
  LOBYTE(v18) = 1;
  if ( !((unsigned __int8 (__fastcall *)(CgWeaponSystem *, centity_t *, Weapon *, bool, _QWORD, _DWORD, _DWORD, _DWORD, char, _QWORD, int *, float *, char *))SimulateBulletFire_Orientation)(v10, Entity, &_RDI->weapon, _RDI->isAlternate, *v12, v18, v19, 0, 1, 0i64, v21, outSpread, v24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 790, ASSERT_TYPE_ASSERT, "(fireOrientationFound)", (const char *)&queryFormat, "fireOrientationFound") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+var_80]
    vmovss  xmm1, [rsp+0F8h+var_7C]
    vmovss  dword ptr [rdi+28h], xmm1
    vmovups ymm1, [rsp+0F8h+var_74]
    vmovss  dword ptr [rdi+24h], xmm0
    vmovss  xmm0, [rsp+0F8h+var_78]
    vmovss  dword ptr [rdi+2Ch], xmm0
    vmovups ymmword ptr [rdi], ymm1
    vmovss  xmm1, [rsp+0F8h+var_54]
    vmovss  dword ptr [rdi+20h], xmm1
  }
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
  int serverTime; 
  __int64 m_localClientNum; 
  CgPredictedEntitySystem *System; 
  int fuseTime; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  bool isAlternate; 
  int v88; 
  int v89; 
  __int64 v90; 
  CgEntityMissileComponentData outComponentData; 
  CgEntityData outEntityData; 
  vec3_t inOutVel; 
  vec3_t dir; 
  char v95; 
  void *retaddr; 

  _RAX = &retaddr;
  v90 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 668, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  this->GetScaledProjectileSpeed(this, creatorEntNum, &wp->weapon, wp->isAlternate, &v88, &v89);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, [rsp+180h+var_108]
    vmulss  xmm0, xmm2, dword ptr [rdi]
    vmovss  dword ptr [rbp+80h+inOutVel], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+80h+inOutVel+4], xmm1
    vmulss  xmm2, xmm2, dword ptr [rdi+8]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+180h+var_104]
    vaddss  xmm0, xmm0, xmm2
    vmovss  dword ptr [rbp+80h+inOutVel+8], xmm0
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 680, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+80h+inOutVel+4]
    vmulss  xmm1, xmm6, xmm6
    vmovss  xmm4, dword ptr [rbp+80h+inOutVel]
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm5, dword ptr [rbp+80h+inOutVel+8]
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm7, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm7, xmm0
    vmovss  [rsp+180h+var_110], xmm1
    vdivss  xmm2, xmm7, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+80h+dir], xmm0
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+80h+dir+4], xmm1
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+80h+dir+8], xmm0
  }
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
  _RSI = CgEntityData::GetEntity(&outEntityData);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 692, ASSERT_TYPE_ASSERT, "(missileEnt)", (const char *)&queryFormat, "missileEnt") )
    __debugbreak();
  _RSI->flags.m_flags[0] |= 0x4000u;
  if ( CgMissile::SpawnClientTrajectoryEnt(this, _RSI, wp, hand, &inOutVel, 0) )
  {
    if ( !this->GetPlayerState(this, (unsigned int)creatorEntNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 708, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+80h+inOutVel+4]
      vmulss  xmm1, xmm6, xmm6
      vmovss  xmm4, dword ptr [rbp+80h+inOutVel]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm5, dword ptr [rbp+80h+inOutVel+8]
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm7, xmm0
      vmovss  [rsp+180h+var_110], xmm1
      vdivss  xmm0, xmm7, xmm1
      vmulss  xmm4, xmm4, xmm0
      vmovss  dword ptr [rbp+80h+inOutVel], xmm4
      vmulss  xmm1, xmm6, xmm0
      vmovss  dword ptr [rbp+80h+inOutVel+4], xmm1
      vmulss  xmm3, xmm5, xmm0
      vmovss  dword ptr [rbp+80h+inOutVel+8], xmm3
      vmulss  xmm1, xmm1, dword ptr [rbx+40h]
      vmulss  xmm0, xmm4, dword ptr [rbx+3Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rbx+44h]
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm6
      vaddss  xmm2, xmm0, dword ptr [rsi+28h]
      vmovss  dword ptr [rsi+28h], xmm2
      vmulss  xmm0, xmm6, dword ptr [rbp+80h+inOutVel+4]
      vaddss  xmm3, xmm0, dword ptr [rsi+2Ch]
      vmovss  dword ptr [rsi+2Ch], xmm3
      vmulss  xmm0, xmm6, dword ptr [rbp+80h+inOutVel+8]
      vaddss  xmm4, xmm0, dword ptr [rsi+30h]
      vmovss  dword ptr [rsi+30h], xmm4
      vmovss  [rsp+180h+var_110], xmm2
    }
    if ( (v81 & 0x7F800000) == 2139095040 )
      goto LABEL_37;
    __asm { vmovss  [rsp+180h+var_110], xmm3 }
    if ( (v82 & 0x7F800000) == 2139095040 )
      goto LABEL_37;
    __asm { vmovss  [rsp+180h+var_110], xmm4 }
    if ( (v83 & 0x7F800000) == 2139095040 )
    {
LABEL_37:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 715, ASSERT_TYPE_SANITY, "( !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbp+80h+inOutVel]
      vaddss  xmm2, xmm1, dword ptr [rdi+28h]
      vmovss  dword ptr [rdi+28h], xmm2
      vmulss  xmm1, xmm6, dword ptr [rbp+80h+inOutVel+4]
      vaddss  xmm4, xmm1, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rdi+2Ch], xmm4
      vmulss  xmm1, xmm6, dword ptr [rbp+80h+inOutVel+8]
      vaddss  xmm3, xmm1, dword ptr [rdi+30h]
      vmovss  dword ptr [rdi+30h], xmm3
      vmovss  [rsp+180h+var_110], xmm2
    }
    if ( (v84 & 0x7F800000) == 2139095040 )
      goto LABEL_38;
    __asm { vmovss  [rsp+180h+var_110], xmm4 }
    if ( (v85 & 0x7F800000) == 2139095040 )
      goto LABEL_38;
    __asm { vmovss  [rsp+180h+var_110], xmm3 }
    if ( (v86 & 0x7F800000) == 2139095040 )
    {
LABEL_38:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 718, ASSERT_TYPE_SANITY, "( !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 702, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    CgPredictedEntitySystem::FreePredictedEntity(System, _RSI);
  }
  _R11 = &v95;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
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
  cg_t *LocalClientGlobals; 
  const WeaponHand *ViewModelHand; 
  CgWeaponMap *Instance; 
  CgMissile_vtbl *v14; 
  __int64 number; 
  __int64 v16; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v18; 
  weapType_t WeaponType; 
  CgPredictedEntitySystem *System; 
  int v23; 
  centity_t *v25; 
  unsigned int time; 
  weapClass_t WeaponClass; 
  int weapLockFlags; 
  __int64 *v29; 
  void (__fastcall *GrenadeLauncherFire)(BgMissile *, const int, const int, const Weapon *, const PlayerHandIndex, const BgWeaponParms *); 
  int fmt; 
  int v45; 
  float outSpread[2]; 
  BgWeaponMap *weaponMap; 
  centity_t *v48; 
  BgWeaponParms outWP; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  int v53; 

  _R14 = r_weapon;
  v48 = cent;
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
        _RBX = (const playerState_s *)v16;
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
              if ( (unsigned int)(WeaponType - 3) <= 1 && BgMissile::ShouldBePredicted(weaponMap, _RBX, r_weapon, isAlternate) )
              {
                System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
                if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 865, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
                  __debugbreak();
                if ( CgPredictedEntitySystem::CanSpawnNewEntities(System) )
                {
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [r14]
                    vmovups xmm1, xmmword ptr [r14+20h]
                  }
                  v23 = *(_DWORD *)&r_weapon->weaponCamo;
                  __asm
                  {
                    vmovups ymmword ptr [rbp+70h+outWP.weapon.weaponIdx], ymm0
                    vmovsd  xmm0, qword ptr [r14+30h]
                  }
                  *(_DWORD *)&outWP.weapon.weaponCamo = v23;
                  __asm
                  {
                    vmovsd  qword ptr [rbp+70h+outWP.weapon.attachmentVariationIndices+15h], xmm0
                    vmovups xmmword ptr [rbp+70h+outWP.weapon.attachmentVariationIndices+5], xmm1
                  }
                  outWP.isAlternate = isAlternate;
                  v25 = v48;
                  outWP.weapDef = BG_WeaponDef(r_weapon, isAlternate);
                  CgMissile::GetMuzzleOrientation(this, v48->nextState.number, &outWP, outSpread);
                  time = LocalClientGlobals->time;
                  if ( WeaponType == WEAPTYPE_GRENADE )
                  {
                    this->ThrowGrenade(this, v25->nextState.number, time, &outWP);
                    return;
                  }
                  if ( WeaponType != WEAPTYPE_PROJECTILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 890, ASSERT_TYPE_ASSERT, "(weaponType == WEAPTYPE_PROJECTILE)", (const char *)&queryFormat, "weaponType == WEAPTYPE_PROJECTILE") )
                    __debugbreak();
                  WeaponClass = BG_GetWeaponClass(&outWP.weapon, outWP.isAlternate);
                  if ( WeaponClass != WEAPCLASS_GRENADE && WeaponClass != WEAPCLASS_THROWINGKNIFE )
                  {
                    weapLockFlags = _RBX->weapCommon.weapLockFlags;
                    if ( (weapLockFlags & 2) == 0 )
                    {
                      if ( !_RBX->airburstMarkDistance )
                        goto LABEL_52;
                      __asm
                      {
                        vxorps  xmm1, xmm1, xmm1
                        vxorps  xmm0, xmm0, xmm0
                        vcvtsi2ss xmm1, xmm1, dword ptr [rax+70Ch]
                        vcomiss xmm1, xmm0
                      }
                      if ( !_RBX->airburstMarkDistance )
                        goto LABEL_52;
                      if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && BG_WeaponDef(r_weapon, 0)->isAirburstWeapon )
                      {
                        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 939, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST )") )
                          __debugbreak();
                        v29 = &v50;
                        v50 = 0i64;
                        v51 = 0i64;
                        v52 = 0i64;
                        v53 = 0;
                        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_airburstAdjustDistance, "airburstAdjustDistance");
                        __asm
                        {
                          vxorps  xmm1, xmm1, xmm1
                          vcvtsi2ss xmm1, xmm1, eax
                          vaddss  xmm2, xmm1, xmm0
                          vxorps  xmm0, xmm0, xmm0
                          vcvtsi2ss xmm0, xmm0, dword ptr [rax+70Ch]
                          vdivss  xmm1, xmm2, xmm0
                          vmovss  dword ptr [rbp+70h+var_50], xmm1
                        }
                      }
                      else
                      {
LABEL_52:
                        v29 = NULL;
                      }
                      goto LABEL_53;
                    }
                    v29 = &v50;
                    v53 = 1;
                    v50 = 0i64;
                    v51 = 0i64;
                    v52 = 0i64;
                    if ( (weapLockFlags & 0x40) != 0 )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rbx+10A4h]
                        vmovss  xmm1, dword ptr [rbx+10A8h]
                        vmovss  dword ptr [rbp+70h+var_60+4], xmm0
                        vmovss  xmm0, dword ptr [rbx+10ACh]
                        vmovss  dword ptr [rbp+70h+var_58+4], xmm0
                        vmovss  dword ptr [rbp+70h+var_58], xmm1
                      }
                    }
                    else
                    {
                      if ( (CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, _RBX->weapCommon.weapLockedEntnum)->flags & 1) != 0 )
                      {
                        LODWORD(v50) = _RBX->weapCommon.weapLockedEntnum;
                        goto LABEL_42;
                      }
                      v29 = NULL;
                    }
                    LODWORD(v50) = 2047;
LABEL_42:
                    if ( (_RBX->weapCommon.weapLockFlags & 4) != 0 )
                      BYTE1(v53) = 1;
LABEL_53:
                    __asm
                    {
                      vmovss  xmm0, [rsp+170h+outSpread]
                      vmovss  dword ptr [rsp+170h+var_140], xmm0
                    }
                    LOBYTE(fmt) = outWP.isAlternate;
                    ((void (__fastcall *)(CgMissile *, _QWORD, _QWORD, const Weapon *, int, const PlayerHandIndex, int, BgWeaponParms *, vec3_t *, __int64 *, _BYTE))this->RocketLauncherFire)(this, (unsigned int)v25->nextState.number, time, r_weapon, fmt, hand, v45, &outWP, &vec3_origin, v29, 0);
                    return;
                  }
                  GrenadeLauncherFire = this->GrenadeLauncherFire;
                  if ( outWP.isAlternate )
                    _R14 = BG_GetAltWeapon(r_weapon);
                  GrenadeLauncherFire(this, v25->nextState.number, time, _R14, hand, &outWP);
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
  const entityState_t *p_s; 
  CgWeaponMap *Instance; 
  const Weapon *r_weapon; 
  CgPredictedEntity *clientTrajectoryEntity; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1217, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( timeElapsed < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1218, ASSERT_TYPE_ASSERT, "(timeElapsed >= 0)", (const char *)&queryFormat, "timeElapsed >= 0") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808000, "CgMissile::PreAddPacketEntitiesUpdateMissile");
  if ( _RBX->predictionState != CLIENT_TRAJECTORY_ENTITY )
  {
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1229, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    serverEnt = NULL;
    serverEntNum = _RBX->serverEntNum;
    if ( serverEntNum != 2047 )
    {
      serverEnt = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, serverEntNum);
      if ( (serverEnt->flags & 1) == 0 )
        goto LABEL_38;
    }
    if ( _RBX->serverEntTime && !serverEnt )
      goto LABEL_38;
    ServerTimeFromPredictionKey = BgPredictedEntitySystem::GetServerTimeFromPredictionKey((const unsigned int *)&_RBX->s.lerp.u);
    creationServerTime = ServerTimeFromPredictionKey;
    if ( _RBX->eventInfo.freeAfterEvent || (unsigned int)(updateTime - ServerTimeFromPredictionKey) > 0x2710 )
      goto LABEL_36;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1270, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( DELETE_ENTITIES_WITH_NO_SERVER_VERSION && LocalClientGlobals->time >= creationServerTime + 400 && _RBX->serverEntNum == 2047 )
      goto LABEL_38;
    p_s = &_RBX->clientTrajectoryEntity->s;
    if ( p_s && CG_Entity_IsNoDraw((const LocalClientNum_t)this->m_localClientNum, p_s, NULL) )
      _RBX->u.missile.clientTrajectoryBlendOutRatio = 1.0;
    if ( CG_Entity_IsNoDraw((const LocalClientNum_t)this->m_localClientNum, &_RBX->s, NULL) )
    {
LABEL_36:
      if ( !serverEnt )
      {
LABEL_38:
        CgPredictedEntitySystem::FreePredictedEntity(System, _RBX);
        goto LABEL_39;
      }
LABEL_37:
      CgMissile::ServerEntHandOff(this, _RBX, serverEnt);
      goto LABEL_38;
    }
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1307, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    r_weapon = BG_GetWeaponForEntity(Instance, &_RBX->s);
    CgMissile::UpdatePredictionBlendRatios(this, _RBX, prevUpdateTime, updateTime, timeElapsed, r_weapon, _RBX->s.inAltWeaponMode, creationServerTime, serverEnt);
    clientTrajectoryEntity = _RBX->clientTrajectoryEntity;
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    if ( clientTrajectoryEntity )
      __asm { vcomiss xmm6, dword ptr [rbx+198h] }
    __asm { vcomiss xmm6, dword ptr [rbx+19Ch] }
    if ( !clientTrajectoryEntity )
    {
      if ( !serverEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1323, ASSERT_TYPE_ASSERT, "(serverEnt)", (const char *)&queryFormat, "serverEnt") )
        __debugbreak();
      goto LABEL_37;
    }
  }
LABEL_39:
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
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
  __asm { vmovss  xmm3, [rsp+188h+spread]; spread }
  BgMissile::CalculateRocketLaunchTransform(this, wp, v15->serverTime, *(const float *)&_XMM3, &outLaunchPos, &dir);
  _RAX = gunVel;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  dword ptr [rsp+188h+inOutVel], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rsp+188h+inOutVel+4], xmm1
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  dword ptr [rsp+188h+inOutVel+8], xmm0
  }
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
  _RDI = weapon;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1123, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1124, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  BgMissile::SetEntityWeapon(this, weaponMap, entityData, _RDI);
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1128, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _RBX = CgEntityData::GetEntity((CgEntityData *)entityData);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1132, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx+300h], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbx+320h], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rbx+330h], xmm0
  }
  *(_DWORD *)&_RBX->entityWeapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
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
  __int64 v30; 
  CgEntityMissileComponentData v31; 
  CgEntityData v32; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 

  v30 = -2i64;
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
  _RDI = v12;
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
        return _RDI;
      WorldTagMatrix = CG_DObjGetWorldBoneMatrix(ViewModelPoseForHand, *p_viewModelDObj, outBoneIndex[0], &outTagMat, &outOrigin);
    }
    if ( WorldTagMatrix )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+168h+outOrigin]
        vmovss  dword ptr [rdi+33Ch], xmm0
        vmovss  xmm1, dword ptr [rsp+168h+outOrigin+4]
        vmovss  dword ptr [rdi+340h], xmm1
        vmovss  xmm0, dword ptr [rsp+168h+outOrigin+8]
        vmovss  dword ptr [rdi+344h], xmm0
      }
      AxisToAngles(&outTagMat, &_RDI->currentAngles);
      if ( isRocket )
      {
        Trajectory_SetTrBase(&_RDI->s.lerp.pos, &_RDI->currentOrigin);
      }
      else
      {
        CgEntityMissileComponentData::CgEntityMissileComponentData(&v31, _RDI);
        CgEntityData::CgEntityData(&v32, _RDI, &v31);
        BgMissile::InitGrenadeMovement(this, &v32, &outOrigin, dir, p_weapon, 1, LocalClientGlobals->time);
        _RDI->s.lerp.apos.trBase.v[0] = _RDI->currentAngles.v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+34Ch]
          vmovss  dword ptr [rdi+44h], xmm0
          vmovss  xmm1, dword ptr [rdi+350h]
          vmovss  dword ptr [rdi+48h], xmm1
        }
      }
    }
    return _RDI;
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
  int clientNum; 
  const WeaponDef *weapDef; 
  cg_t *LocalClientGlobals; 
  int fuseTime; 
  __int64 m_localClientNum; 
  CgPredictedEntitySystem *System; 
  int serverTime; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  bool isAlternate; 
  int v109; 
  int v110; 
  __int64 v111; 
  CgEntityMissileComponentData outComponentData; 
  CgEntityData outEntityData; 
  vec3_t inOutVel; 
  vec3_t dir; 
  char v116; 
  void *retaddr; 

  _RAX = &retaddr;
  v111 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  _RBX = wp;
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 602, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  clientNum = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState.clientNum;
  if ( clientNum != creatorEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 605, ASSERT_TYPE_ASSERT, "( ps->clientNum ) == ( creatorEntNum )", "%s == %s\n\t%i, %i", "ps->clientNum", "creatorEntNum", clientNum, creatorEntNum) )
    __debugbreak();
  this->GetScaledProjectileSpeed(this, creatorEntNum, &_RBX->weapon, _RBX->isAlternate, &v109, &v110);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, [rsp+1A0h+var_128]
    vmovss  xmm6, dword ptr [rbx]
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rbp+0A0h+inOutVel], xmm0
    vmovss  xmm7, dword ptr [rbx+4]
    vmulss  xmm1, xmm7, xmm2
    vmovss  dword ptr [rbp+0A0h+inOutVel+4], xmm1
    vmulss  xmm2, xmm2, dword ptr [rbx+8]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+1A0h+var_124]
    vaddss  xmm0, xmm0, xmm2
    vmovss  dword ptr [rbp+0A0h+inOutVel+8], xmm0
  }
  weapDef = _RBX->weapDef;
  if ( weapDef->iProjectileSpeedForward )
  {
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm8, xmm1, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm8, xmm1
    }
    if ( !weapDef->iProjectileSpeedForward && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    __asm
    {
      vmovaps xmm1, xmm8
      vrsqrtss xmm4, xmm1, xmm1
    }
    _RAX = _RBX->weapDef;
    __asm
    {
      vmovd   xmm3, dword ptr [rax+714h]
      vcvtdq2ps xmm3, xmm3
      vmulss  xmm0, xmm6, xmm4
      vmulss  xmm2, xmm0, xmm3
      vaddss  xmm2, xmm2, dword ptr [rbp+0A0h+inOutVel]
      vmovss  dword ptr [rbp+0A0h+inOutVel], xmm2
      vmulss  xmm0, xmm7, xmm4
      vmulss  xmm3, xmm0, xmm3
      vaddss  xmm2, xmm3, dword ptr [rbp+0A0h+inOutVel+4]
      vmovss  dword ptr [rbp+0A0h+inOutVel+4], xmm2
    }
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 627, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+0A0h+inOutVel+4]
    vmulss  xmm1, xmm6, xmm6
    vmovss  xmm4, dword ptr [rbp+0A0h+inOutVel]
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm5, dword ptr [rbp+0A0h+inOutVel+8]
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vmovss  xmm8, cs:__real@80000000
    vcmpless xmm0, xmm3, xmm8
    vmovss  xmm7, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm7, xmm0
    vmovss  [rsp+1A0h+var_130], xmm1
    vdivss  xmm2, xmm7, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+0A0h+dir], xmm0
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+0A0h+dir+4], xmm1
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+0A0h+dir+8], xmm0
  }
  CgMissile::AddVelocityForMoverClient(this, LocalClientGlobals, gameTime, &dir, &inOutVel);
  CgEntityData::CgEntityData(&outEntityData);
  CgEntityMissileComponentData::CgEntityMissileComponentData(&outComponentData);
  fuseTime = BG_WeaponFuseTime(&_RBX->weapon, _RBX->isAlternate);
  serverTime = LocalClientGlobals->time;
  isAlternate = _RBX->isAlternate;
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BgMissile::FireGrenade(this, CgWeaponMap::ms_instance[m_localClientNum], creatorEntNum, &_RBX->muzzleTrace, &inOutVel, &_RBX->weapon, isAlternate, WEAPON_HAND_DEFAULT, 1, serverTime, fuseTime, 0, &outEntityData, &outComponentData);
  if ( CgEntityData::IsEmpty(&outEntityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 636, ASSERT_TYPE_ASSERT, "(!entityData.IsEmpty())", (const char *)&queryFormat, "!entityData.IsEmpty()") )
    __debugbreak();
  _RSI = CgEntityData::GetEntity(&outEntityData);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 639, ASSERT_TYPE_ASSERT, "(missileEnt)", (const char *)&queryFormat, "missileEnt") )
    __debugbreak();
  if ( CgMissile::SpawnClientTrajectoryEnt(this, _RSI, _RBX, WEAPON_HAND_DEFAULT, &inOutVel, 0) )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+0A0h+inOutVel+4]
      vmulss  xmm1, xmm6, xmm6
      vmovss  xmm4, dword ptr [rbp+0A0h+inOutVel]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm5, dword ptr [rbp+0A0h+inOutVel+8]
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, xmm8
      vblendvps xmm1, xmm3, xmm7, xmm0
      vmovss  [rsp+1A0h+var_130], xmm1
      vdivss  xmm0, xmm7, xmm1
      vmulss  xmm4, xmm4, xmm0
      vmovss  dword ptr [rbp+0A0h+inOutVel], xmm4
      vmulss  xmm1, xmm6, xmm0
      vmovss  dword ptr [rbp+0A0h+inOutVel+4], xmm1
      vmulss  xmm3, xmm5, xmm0
      vmovss  dword ptr [rbp+0A0h+inOutVel+8], xmm3
      vmulss  xmm1, xmm1, dword ptr [r13+48h]
      vmulss  xmm0, xmm4, dword ptr [r13+44h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [r13+4Ch]
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm6
      vaddss  xmm2, xmm0, dword ptr [rsi+28h]
      vmovss  dword ptr [rsi+28h], xmm2
      vmulss  xmm0, xmm6, dword ptr [rbp+0A0h+inOutVel+4]
      vaddss  xmm3, xmm0, dword ptr [rsi+2Ch]
      vmovss  dword ptr [rsi+2Ch], xmm3
      vmulss  xmm0, xmm6, dword ptr [rbp+0A0h+inOutVel+8]
      vaddss  xmm4, xmm0, dword ptr [rsi+30h]
      vmovss  dword ptr [rsi+30h], xmm4
      vmovss  [rsp+1A0h+var_130], xmm2
    }
    if ( (v102 & 0x7F800000) == 2139095040 )
      goto LABEL_42;
    __asm { vmovss  [rsp+1A0h+var_130], xmm3 }
    if ( (v103 & 0x7F800000) == 2139095040 )
      goto LABEL_42;
    __asm { vmovss  [rsp+1A0h+var_130], xmm4 }
    if ( (v104 & 0x7F800000) == 2139095040 )
    {
LABEL_42:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 659, ASSERT_TYPE_SANITY, "( !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( missileEnt->s.lerp.pos.trDelta )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+inOutVel]
      vaddss  xmm2, xmm1, dword ptr [rbx+28h]
      vmovss  dword ptr [rbx+28h], xmm2
      vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+inOutVel+4]
      vaddss  xmm4, xmm1, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rbx+2Ch], xmm4
      vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+inOutVel+8]
      vaddss  xmm3, xmm1, dword ptr [rbx+30h]
      vmovss  dword ptr [rbx+30h], xmm3
      vmovss  [rsp+1A0h+var_130], xmm2
    }
    if ( (v105 & 0x7F800000) == 2139095040 )
      goto LABEL_43;
    __asm { vmovss  [rsp+1A0h+var_130], xmm4 }
    if ( (v106 & 0x7F800000) == 2139095040 )
      goto LABEL_43;
    __asm { vmovss  [rsp+1A0h+var_130], xmm3 }
    if ( (v107 & 0x7F800000) == 2139095040 )
    {
LABEL_43:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 662, ASSERT_TYPE_SANITY, "( !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( clientTrajectoryEnt->s.lerp.pos.trDelta )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 649, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    CgPredictedEntitySystem::FreePredictedEntity(System, _RSI);
  }
  _R11 = &v116;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
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
  bool v11; 
  FxCombinedDef v12; 
  int centFlags; 
  unsigned __int64 PredictedEntSndEntHandle; 
  unsigned __int64 v18; 
  int v21; 
  FxCombinedDef v22; 
  int v23; 
  FxCombinedDef v24; 
  vec3_t outOrigin; 
  __int64 v27; 
  vec3_t org; 
  unsigned __int8 inOutIndex; 
  FXRegisteredDef modelIndex; 
  FXRegisteredDef def; 

  v27 = -2i64;
  __asm { vmovaps [rsp+80h+var_10], xmm6 }
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
  v11 = DObjGetBoneIndexInternal_54(missileObj, scr_const.tag_fx, &inOutIndex, (int *)&modelIndex) != 0;
  v12.particleSystemDef = BG_ProjTrailEffect(WeaponForEntity, inAltWeaponMode).particleSystemDef;
  def.m_particleSystemDef = v12.particleSystemDef;
  centFlags = missileEnt->centFlags;
  if ( (centFlags & 0x202) == 0 )
  {
    if ( !CgMissile::JavelinSoftLaunch(this, WeaponForEntity, &missileEnt->s, LocalClientGlobals->time) )
    {
      missileEnt->centFlags |= 2u;
      if ( def.m_particleSystemDef && v11 )
        FX_PlayBoltedToPredictedEnt((const LocalClientNum_t)this->m_localClientNum, &def, LocalClientGlobals->time, missileEnt->s.number, inOutIndex, 0);
      goto LABEL_22;
    }
    centFlags = missileEnt->centFlags;
    v12.particleSystemDef = def.m_particleSystemDef;
  }
  if ( (centFlags & 0x202) == 514 )
  {
    missileEnt->centFlags = centFlags & 0xFFFFFFFD;
    if ( v12.particleSystemDef )
    {
      if ( v11 )
        FX_StopBoltedEffects(this->m_localClientNum, &def, missileEnt->s.number, inOutIndex);
    }
  }
LABEL_22:
  modelIndex.m_particleSystemDef = (const ParticleSystemDef *)BG_GetWeaponSoundWithFallback(WeaponForEntity, inAltWeaponMode, 40i64);
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( modelIndex.m_particleSystemDef )
  {
    PredictedEntSndEntHandle = CG_GeneratePredictedEntSndEntHandle((const LocalClientNum_t)this->m_localClientNum, missileEnt->predictedEntNum);
    CG_GetPoseOrigin(&missileEnt->pose, &outOrigin);
    __asm
    {
      vmovaps xmm3, xmm6; pitch
      vmovaps xmm2, xmm6; volumeScale
    }
    SND_PlayScaledSoundAlias((const SndAliasList *)modelIndex.m_particleSystemDef, PredictedEntSndEntHandle, *(const float *)&_XMM2, *(const float *)&_XMM3, &outOrigin, 0, SASYS_CGAME);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  if ( (missileEnt->centFlags & 0x800) == 0 && !CgMissile::JavelinSoftLaunch(this, WeaponForEntity, &missileEnt->s, LocalClientGlobals->time) )
  {
    missileEnt->centFlags |= 0x800u;
    modelIndex.m_particleSystemDef = BG_ProjIgnitionEffect(WeaponForEntity, inAltWeaponMode).particleSystemDef;
    if ( modelIndex.m_particleSystemDef && v11 )
      FX_PlayBoltedToPredictedEnt((const LocalClientNum_t)this->m_localClientNum, &modelIndex, LocalClientGlobals->time, missileEnt->s.number, inOutIndex, 0);
    *(_QWORD *)outOrigin.v = BG_ProjIgnitionSound(WeaponForEntity, inAltWeaponMode);
    if ( *(_QWORD *)outOrigin.v )
    {
      v18 = CG_GeneratePredictedEntSndEntHandle((const LocalClientNum_t)this->m_localClientNum, missileEnt->predictedEntNum);
      CG_GetPoseOrigin(&missileEnt->pose, &org);
      __asm
      {
        vmovaps xmm3, xmm6; pitch
        vmovaps xmm2, xmm6; volumeScale
      }
      SND_PlayScaledSoundAlias(*(const SndAliasList **)outOrigin.v, v18, *(const float *)&_XMM2, *(const float *)&_XMM3, &org, 0, SASYS_CGAME);
      memset(&org, 0, sizeof(org));
    }
  }
  v21 = missileEnt->centFlags;
  if ( (v21 & 0x400) == 0 )
  {
    missileEnt->centFlags = v21 | 0x400;
    v22.particleSystemDef = BG_ProjBeaconEffect(WeaponForEntity, inAltWeaponMode).particleSystemDef;
    if ( v22.particleSystemDef )
    {
      if ( v11 )
      {
        modelIndex.m_particleSystemDef = v22.particleSystemDef;
        FX_PlayBoltedToPredictedEnt((const LocalClientNum_t)this->m_localClientNum, &modelIndex, LocalClientGlobals->time, missileEnt->s.number, inOutIndex, 0);
      }
    }
  }
  v23 = missileEnt->centFlags;
  if ( (v23 & 0x40000) == 0 )
  {
    missileEnt->centFlags = v23 | 0x40000;
    v24.particleSystemDef = BG_ProjBodyEffect(WeaponForEntity, 0).particleSystemDef;
    if ( v24.particleSystemDef )
    {
      if ( v11 )
      {
        modelIndex.m_particleSystemDef = v24.particleSystemDef;
        FX_PlayBoltedToPredictedEnt((const LocalClientNum_t)this->m_localClientNum, &modelIndex, LocalClientGlobals->time, missileEnt->s.number, inOutIndex, 0);
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+80h+var_10] }
}

/*
==============
CgMissile::UpdateMissilePrediction
==============
*/
void CgMissile::UpdateMissilePrediction(CgMissile *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed)
{
  CgPredictedEntitySystem *System; 
  centity_t *Entity; 
  int serverEntNum; 
  CgWeaponMap *Instance; 
  CgPredictedEntity *clientTrajectoryEntity; 
  CgEntitySystem *EntitySystem; 
  unsigned int v22; 
  char v28; 
  const cpose_t *PoseExtended; 
  char v65; 
  float v91; 
  float v92; 
  DObj *missileObj; 
  CgEntityMissileComponentData v95; 
  GfxSceneHudOutlineInfo v96; 
  CgEntityData v97; 
  GfxSceneEntityMutableShaderData v98; 
  vec3_t newOrigin; 
  vec4_t qb; 
  vec3_t outOrigin; 
  vec4_t quat; 
  vec4_t qa; 
  shaderOverride_t v104; 
  vec3_t angles; 
  vec3_t outLightingOrigin; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 
  char v108; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 961, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808000, "CgMissile::UpdateMissilePrediction");
  if ( _RBX->predictionState == CLIENT_TRAJECTORY_ENTITY || (missileObj = CgMissile::GetMissileDObj(this, _RBX)) == NULL )
  {
    Sys_ProfEndNamedEvent();
  }
  else
  {
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 981, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    Entity = NULL;
    serverEntNum = _RBX->serverEntNum;
    if ( serverEntNum != 2047 )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, serverEntNum);
      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 987, ASSERT_TYPE_ASSERT, "(CENextValid( serverEnt ))", (const char *)&queryFormat, "CENextValid( serverEnt )") )
        __debugbreak();
    }
    CgEntityMissileComponentData::CgEntityMissileComponentData(&v95, _RBX);
    CgEntityData::CgEntityData(&v97, _RBX, &v95);
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 994, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    BgMissile::Tick(this, Instance, &v97, prevUpdateTime, updateTime, timeElapsed);
    clientTrajectoryEntity = _RBX->clientTrajectoryEntity;
    if ( _RBX->isInUse )
    {
      if ( clientTrajectoryEntity )
      {
        CgEntityMissileComponentData::CgEntityMissileComponentData((CgEntityMissileComponentData *)&v104, clientTrajectoryEntity);
        CgEntityData::CgEntityData((CgEntityData *)&v98, _RBX->clientTrajectoryEntity, &v95);
        BgMissile::Tick(this, Instance, (BgEntityData *)&v98, prevUpdateTime, updateTime, timeElapsed);
        *(_QWORD *)&v104.scrollRateX = &BgEntityComponentData::`vftable';
      }
      if ( !CG_Entity_IsNoDraw((const LocalClientNum_t)this->m_localClientNum, &_RBX->s, NULL) )
      {
        EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)this->m_localClientNum);
        if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1024, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
          __debugbreak();
        v22 = EntitySystem->GetRenderFlagForRefEntity(EntitySystem, &_RBX->s);
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_missileRotationBlendScale, "cg_missileRotationBlendScale");
        __asm
        {
          vmovaps xmm11, xmm0
          vmovss  xmm10, cs:__real@3f800000
          vucomiss xmm10, dword ptr [rbx+198h]
        }
        if ( v65 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+33Ch]
            vmovss  dword ptr [rbp+2B0h+newOrigin], xmm1
            vmovss  xmm2, dword ptr [rbx+340h]
            vmovss  dword ptr [rbp+2B0h+newOrigin+4], xmm2
            vmovss  xmm1, dword ptr [rbx+344h]
            vmovss  dword ptr [rbp+2B0h+newOrigin+8], xmm1
          }
          AnglesToQuat(&_RBX->currentAngles, &quat);
        }
        else
        {
          if ( !_RBX->clientTrajectoryEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1047, ASSERT_TYPE_ASSERT, "(ent->clientTrajectoryEntity)", (const char *)&queryFormat, "ent->clientTrajectoryEntity") )
            __debugbreak();
          __asm
          {
            vmovss  xmm6, dword ptr [rbx+198h]
            vmovss  xmm0, dword ptr [rbx+33Ch]
            vsubss  xmm1, xmm0, dword ptr [rax+33Ch]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax+33Ch]
            vmovss  dword ptr [rbp+2B0h+newOrigin], xmm3
            vmovss  xmm0, dword ptr [rbx+340h]
            vsubss  xmm1, xmm0, dword ptr [rax+340h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax+340h]
            vmovss  dword ptr [rbp+2B0h+newOrigin+4], xmm3
            vmovss  xmm0, dword ptr [rbx+344h]
            vsubss  xmm1, xmm0, dword ptr [rax+344h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax+344h]
            vmovss  dword ptr [rbp+2B0h+newOrigin+8], xmm3
          }
          AnglesToQuat(&_RBX->currentAngles, &qb);
          AnglesToQuat(&_RBX->clientTrajectoryEntity->currentAngles, &qa);
          __asm
          {
            vmulss  xmm0, xmm11, dword ptr [rbx+198h]
            vminss  xmm2, xmm0, xmm10; frac
          }
          QuatLerp(&qa, &qb, *(float *)&_XMM2, &quat);
        }
        __asm
        {
          vxorps  xmm9, xmm9, xmm9
          vcomiss xmm9, dword ptr [rbx+19Ch]
        }
        if ( v28 )
        {
          if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1063, ASSERT_TYPE_ASSERT, "(serverEnt)", (const char *)&queryFormat, "serverEnt") )
            __debugbreak();
          PoseExtended = CG_GetPoseExtended(this->m_localClientNum, _RBX->serverEntNum, 0);
          __asm
          {
            vmovss  xmm6, dword ptr [rbp+2B0h+newOrigin]
            vmovss  xmm7, dword ptr [rbp+2B0h+newOrigin+4]
            vmovss  xmm8, dword ptr [rbp+2B0h+newOrigin+8]
          }
          CG_GetPoseOrigin(PoseExtended, (vec3_t *)&qb);
          __asm
          {
            vmovss  xmm4, dword ptr [rbx+19Ch]
            vmovss  xmm0, dword ptr [rbp+2B0h+qb]
            vsubss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm1, xmm4
            vaddss  xmm3, xmm2, xmm6
            vmovss  dword ptr [rbp+2B0h+newOrigin], xmm3
            vmovss  xmm0, dword ptr [rbp+2B0h+qb+4]
            vsubss  xmm1, xmm0, xmm7
            vmulss  xmm2, xmm1, xmm4
            vaddss  xmm3, xmm2, xmm7
            vmovss  dword ptr [rbp+2B0h+newOrigin+4], xmm3
            vmovss  xmm0, dword ptr [rbp+2B0h+qb+8]
            vsubss  xmm1, xmm0, xmm8
            vmulss  xmm2, xmm1, xmm4
            vaddss  xmm3, xmm2, xmm8
            vmovss  dword ptr [rbp+2B0h+newOrigin+8], xmm3
            vmovups xmm0, xmmword ptr [rbp+2B0h+quat]
            vmovdqa xmmword ptr [rbp+2B0h+var_1B0], xmm0
          }
          AnglesToQuat(&PoseExtended->angles, &qa);
          __asm
          {
            vmulss  xmm0, xmm11, dword ptr [rbx+19Ch]
            vminss  xmm2, xmm0, xmm10; frac
          }
          QuatLerp((const vec4_t *)&v104, &qa, *(float *)&_XMM2, &quat);
          memset(&qb, 0, 0xCui64);
        }
        QuatToAngles(&quat, &angles);
        CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
        CgPredictedEntitySystem::UpdatePose(System, _RBX, &newOrigin, &angles);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+2B0h+outOrigin]
          vucomiss xmm0, xmm9
        }
        if ( v65 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+2B0h+outOrigin+4]
            vucomiss xmm0, xmm9
          }
          if ( v65 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+2B0h+outOrigin+8]
              vucomiss xmm0, xmm9
            }
            if ( v65 )
              CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
          }
        }
        CG_GetPoseOrigin(&_RBX->pose, (vec3_t *)&qb);
        this->DrawMissileDebug(this, &v97, &outOrigin, (const vec3_t *)&qb, &colorCyan);
        memset(&qb, 0, 0xCui64);
        CgMissile::UpdateCosmetics(this, missileObj, _RBX);
        CG_Entity_CalcLightingOrigin(&_RBX->pose, missileObj, &outLightingOrigin);
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_2.scrollRateX
          vmovups ymmword ptr [rbp+2B0h+var_1B0], ymm0
        }
        v104.atlasTime = NULL_SHADER_OVERRIDE_2.atlasTime;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_3.color
          vmovups ymmword ptr [rsp+70h], ymm0
        }
        v96.characterEVOffset = NULL_HUDOUTLINE_INFO_3.characterEVOffset;
        __asm { vmovss  [rsp+3B0h+var_380], xmm9 }
        _RAX = CG_Entity_GetMutableShaderData(&v98, (const LocalClientNum_t)this->m_localClientNum, missileObj, 0, &v96, &v104, v91);
        _RCX = &entityMutableShaderData;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rcx], xmm0
          vmovups xmm1, xmmword ptr [rax+10h]
          vmovups xmmword ptr [rcx+10h], xmm1
          vmovups xmm0, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rcx+20h], xmm0
          vmovups xmm1, xmmword ptr [rax+30h]
          vmovups xmmword ptr [rcx+30h], xmm1
          vmovups xmm0, xmmword ptr [rax+40h]
          vmovups xmmword ptr [rcx+40h], xmm0
          vmovups xmm1, xmmword ptr [rax+50h]
          vmovups xmmword ptr [rcx+50h], xmm1
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rcx+60h], xmm0
          vmovups xmm0, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rcx+70h], xmm0
          vmovups xmm1, xmmword ptr [rax+80h]
          vmovups xmmword ptr [rcx+80h], xmm1
          vmovups xmm0, xmmword ptr [rax+90h]
          vmovups xmmword ptr [rcx+90h], xmm0
          vmovups xmm1, xmmword ptr [rax+0A0h]
          vmovups xmmword ptr [rcx+0A0h], xmm1
          vmovss  [rsp+3B0h+var_380], xmm9
        }
        R_AddDObjToScene(missileObj, &_RBX->pose, _RBX->s.number, v22, &entityMutableShaderData, &outLightingOrigin, v92);
        Sys_ProfEndNamedEvent();
      }
    }
    else if ( clientTrajectoryEntity && clientTrajectoryEntity->isInUse )
    {
      CgPredictedEntitySystem::FreePredictedEntity(System, clientTrajectoryEntity);
    }
  }
  _R11 = &v108;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
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
  bool v14; 
  bool v15; 
  int ClientTrajectoryBlendOutTime; 
  bool v18; 
  CgPredictedEntity *clientTrajectoryEntity; 
  bool v20; 
  const dvar_t *v21; 
  int integer; 
  int v28; 
  const dvar_t *v29; 
  int v30; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1151, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v14 = timeElapsed == 0;
  if ( timeElapsed < 0 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1152, ASSERT_TYPE_ASSERT, "(timeElapsed >= 0)", (const char *)&queryFormat, "timeElapsed >= 0");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vcomiss xmm6, dword ptr [rbx+198h]
  }
  if ( !v14 )
  {
    ClientTrajectoryBlendOutTime = BG_PredictionGetClientTrajectoryBlendOutTime(r_weapon, isAlternate);
    v18 = _RBX->u.missile.hasImpact || _RBX->s.lerp.pos.trType == TR_STATIONARY;
    clientTrajectoryEntity = _RBX->clientTrajectoryEntity;
    v20 = clientTrajectoryEntity && (clientTrajectoryEntity->u.missile.hasImpact || clientTrajectoryEntity->s.lerp.pos.trType == TR_STATIONARY);
    if ( v18 || v20 )
    {
      v21 = DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs;
      if ( !DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_missileQuickServerEntBlendInTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      integer = v21->current.integer;
      if ( ClientTrajectoryBlendOutTime < integer )
        integer = ClientTrajectoryBlendOutTime;
      ClientTrajectoryBlendOutTime = integer;
    }
    v14 = ClientTrajectoryBlendOutTime == 0;
    if ( ClientTrajectoryBlendOutTime > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, [rsp+58h+timeElapsed]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vdivss  xmm1, xmm1, xmm0
        vaddss  xmm2, xmm1, dword ptr [rbx+198h]
        vminss  xmm3, xmm2, xmm6
        vmovss  dword ptr [rbx+198h], xmm3
      }
    }
    else
    {
      _RBX->u.missile.clientTrajectoryBlendOutRatio = 1.0;
    }
  }
  __asm { vcomiss xmm6, dword ptr [rbx+19Ch] }
  if ( !v14 )
  {
    if ( _RBX->serverEntNum == 2047 )
    {
      _RBX->u.missile.serverTrajectoryBlendInRatio = 0.0;
    }
    else
    {
      if ( !serverEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.cpp", 1185, ASSERT_TYPE_ASSERT, "(serverEnt)", (const char *)&queryFormat, "serverEnt") )
        __debugbreak();
      v28 = BG_PredictionGetServerTrajectoryBlendInTime(r_weapon, isAlternate) + creationServerTime - _RBX->serverEntTime;
      if ( CG_Entity_GetLinkToParent(this->m_localClientNum, serverEnt) || serverEnt->nextState.lerp.pos.trType == TR_STATIONARY )
      {
        v29 = DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs;
        if ( !DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_missileQuickServerEntBlendInTimeMs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        v30 = v29->current.integer;
        if ( v28 < v30 )
          v30 = v28;
        v28 = v30;
      }
      if ( v28 > 0 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, [rsp+58h+timeElapsed]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edi
          vdivss  xmm1, xmm1, xmm0
          vaddss  xmm2, xmm1, dword ptr [rbx+19Ch]
          vminss  xmm3, xmm2, xmm6
          vmovss  dword ptr [rbx+19Ch], xmm3
        }
      }
      else
      {
        _RBX->u.missile.serverTrajectoryBlendInRatio = 1.0;
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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

